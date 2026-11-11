//==== 00070130  ns=draw  size=0x14c
// sig: undefined FontPrintMediumRight(void)
// callers(7): 000d1110 hud::Draw_BoltCountUI; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud; 00144084 pause::DrawSoundOptionsFrame; 00146b14 pause::GoldBoltWidget_Update; 00147044 pause::Update_FoundGBsShipMenu; 0014a86c pause::ConfirmDialog_Draw
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

void draw::FontPrintMediumRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}



//==== 0007027c  ns=draw  size=0x14c
// sig: undefined FontPrintSmallRight(void)
// callers(2): 00170490 vendor::DrawWeaponStrings; 001711a8 vendor::Vendor_DrawItemInfo
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

void draw::FontPrintSmallRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}



//==== 000703c8  ns=draw  size=0x14c
// sig: undefined FontPrintLargeRight(void)
// callers(1): 00146b14 pause::GoldBoltWidget_Update
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

void draw::FontPrintLargeRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}



//==== 00070514  ns=draw  size=0x164
// sig: undefined FontPrintMediumCenter(void)
// callers(9): 000784e8 freeze::DrawDialogText; 000cc450 hud::Draw_PromptMsg; 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 0014c188 pause::LevelFilter_Draw; 0014d63c pause::Draw_GameCompletedFrame; 0014dcc4 pause::SaveSlotInfo_Draw; 0022485c mobyupdate_helpers::M1246_0022485c; 00224a00 mobyupdate_helpers::M1246_00224a00
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

int draw::FontPrintMediumCenter
              (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}



//==== 00070680  ns=draw  size=0x1b4
// sig: undefined FontPrintCenterScaled(void)
// callers(1): 00146708 pause::PlanetInfo_Draw
// callees(3): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3; 0006f918 draw::FontLenScaledWithTable

int draw::FontPrintCenterScaled
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
              undefined8 param_6)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_6);
    }
    iVar2 = (int)dVar3;
  }
  param_2 = param_2 - (iVar2 >> 1);
  dVar3 = (double)(longlong)param_2;
  if (g_JapaneseMode == false) {
    FontPrint_unk3(dVar3,(double)(longlong)param_3,param_1,TexInfo,CHAR_ARRAY_00a0feec + 0x114,
                   param_4,param_5,param_6);
  }
  else {
    FontPrintJapanese_unk2
              (dVar3,(double)(longlong)param_3,param_1,TexInfo,CHAR_ARRAY_00a0feec + 0x114,param_4,
               param_5,param_6);
  }
  return param_2;
}



//==== 00070834  ns=draw  size=0x164
// sig: undefined FontPrintSmallCenter(void)
// callers(6): 0014ec5c pause::DrawSaveLoadFrame; 00170fd0 vendor::DrawExitButton; 001e5158 mobyupd::update1160::M1160_ScanTargets; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 002611a0 mobyupd::update1379::M1379_Hud_Draw; 0041b008 mobyupdate_helpers::M688_0041b008
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

int draw::FontPrintSmallCenter
              (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}



//==== 00070998  ns=draw  size=0x164
// sig: undefined FontPrintLargeCenter(void)
// callers(8): 000cc348 hud::Hud_DrawTextBoxCentered; 000cc450 hud::Draw_PromptMsg; 000d27f8 hud::Draw_HoverboardTrickHud; 000d5c20 hud::DrawGameplayHud; 001ca5d8 mobyupdate_helpers::M1109_001ca5d8; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 003d43c8 mobyupdate_helpers::M587_003d43c8; 00406458 mobyupdate_helpers::M656_00406458
// callees(3): 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccc4 draw::FontLenWithTable

int draw::FontPrintLargeCenter
              (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}



//==== 00070b00  ns=draw  size=0x1ac
// sig: undefined FontPrintCenterScaledMedium(void)
// callers(1): 000cc450 hud::Draw_PromptMsg
// callees(3): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3; 0006f918 draw::FontLenScaledWithTable

void draw::FontPrintCenterScaledMedium
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}



//==== 00070cb0  ns=draw  size=0x1ac
// sig: undefined FontPrintCenterScaledSmall(void)
// callers(0): 
// callees(3): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3; 0006f918 draw::FontLenScaledWithTable

void draw::FontPrintCenterScaledSmall
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736c53)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}



//==== 00070e60  ns=draw  size=0x1ac
// sig: undefined FontPrintCenterScaledLarge(void)
// callers(0): 
// callees(3): 00068c70 draw::FontPrintJapanese_unk2; 00069a50 draw::FontPrint_unk3; 0006f918 draw::FontLenScaledWithTable

void draw::FontPrintCenterScaledLarge
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736ff3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}



//==== 0007100c  ns=draw  size=0xa8
// sig: undefined FontPrintOpt(void)
// callers(10): 0007b880 help::Help_StartMessageBox; 0007ba00 help::Help_Update; 0007c978 help::Help_Draw; 000e2e10 map::DrawMapFrame; 000ea958 mission::UpdateMissionDisplay; 00147cf8 pause::DrawMissionsFrame; 001491f0 pause::ImageWidget_DrawWithText; 0014b9a8 pause::MessageBox_Draw; 00170cf0 vendor::DrawBuyButton; 001711a8 vendor::Vendor_DrawItemInfo
// callees(2): 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern

void draw::FontPrintOpt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  return;
}



//==== 000710b8  ns=draw  size=0xb4
// sig: undefined FontPrintOptLarge(void)
// callers(0): 
// callees(2): 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern

void draw::FontPrintOptLarge
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (0x3ff0000000000000,param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
               &JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 0xc),
                        &LargeWesternGlyphs);
  }
  return;
}



//==== 0007116c  ns=stub  size=0x4
// sig: undefined STUB_0007116c(void)
// callers(1): 00012ec8 boot::GameStart
// callees(0): 

void stub::STUB_0007116c(void)

{
  return;
}



//==== 00071170  ns=stub  size=0x4
// sig: undefined STUB_00071170(void)
// callers(36): 00077048 draw::DrawsFlowingLava; 000774b8 draw::???_Draw_ScrollingTexStrips; 0017d488 stub::CALL_STUB_0017d488; 0017e700 water::OceanSpecialPass; 0017ec40 water::IcePass; 001942f4 mobyupdate_helpers::M1038_001942f4; 001d64b0 mobyupdate_helpers::M1124_001d64b0; 0026e3e0 mobyupdate_helpers::M1405_0026e3e0; 0026e9a0 mobyupdate_helpers::M1406_0026e9a0; 0026eed0 mobyupdate_helpers::M1407_0026eed0; 0026f400 mobyupdate_helpers::M1408_0026f400; 0026f9c0 mobyupdate_helpers::M1409_0026f9c0; 0027ac98 mobyupdate_helpers::M1426_0027ac98; 0029d610 mobyupdate_helpers::M1565_0029d610; 0029db20 mobyupdate_helpers::M1567_0029db20; 002a6ea0 mobyupdate_helpers::M1649_DrawScrollingTexLayers; 002a94c8 mobyupdate_helpers::M1671_002a94c8; 002c4f7c mobyupdate_helpers::M1848_002c4f7c; 002d40b8 mobyupdate_helpers::M1901_002d40b8; 002d4ad0 mobyupdate_helpers::M1903_002d4ad0; 002d7a50 mobyupdate_helpers::M1907_002d7a50; 002d7e90 mobyupdate_helpers::M1908_002d7e90; 002d8858 mobyupdate_helpers::M1910_002d8858; 002d8c98 mobyupdate_helpers::M1911_002d8c98; 002d9088 mobyupdate_helpers::M1913_002d9088
// callees(0): 

void stub::STUB_00071170(void)

{
  return;
}



//==== 00071180  ns=draw  size=0x940
// sig: undefined SetScreenResolution(void)
// callers(2): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu
// callees(8): 00065a00 draw::UploadViewMatricesToPasses; 000668d0 draw::UpdateViewContext; 00174f80 vuchain::SetGSReg; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

void draw::SetScreenResolution
               (double param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               RsxCmd param_6)

{
  longlong lVar1;
  int iVar2;
  RsxCmd RVar3;
  RsxCmd RVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  RsxCmd RVar8;
  int iVar9;
  RenderingStep *pRVar10;
  RenderingStep *pRVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  RsxCmd RVar15;
  longlong lVar16;
  RsxCmd *pRVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  RsxCmd *pRVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar14;
  puVar7[0x2a] = in_LR;
  puVar7[0x27] = in_f31;
  *(uint *)(puVar7 + 0x18) = param_3;
  *(uint *)((int)puVar7 + 0xc4) = param_3;
  puVar7[0x26] = unaff_r31;
  *(uint *)(puVar7 + 0x19) = param_3;
  puVar7[0x25] = unaff_r30;
  *(uint *)((int)puVar7 + 0xcc) = param_3;
  puVar7[0x22] = unaff_r27;
  RVar4 = 1 << (param_3 & 0x3f);
  puVar7[0x24] = unaff_r29;
  auVar26 = ZEXT416(1);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  puVar7[0x21] = unaff_r26;
  puVar7[0x20] = unaff_r25;
  uVar5 = 1 << (param_2 & 0x3f);
  puVar7[0x23] = unaff_r28;
  auVar27 = *(undefined1 (*) [16])(puVar7 + 0x18);
  g_ScreenHalfHeight = (int)RVar4 >> 1;
  *(uint *)(puVar7 + 0x18) = param_2;
  uVar13 = 0xc0;
  *(uint *)((int)puVar7 + 0xc4) = param_2;
  *(uint *)(puVar7 + 0x19) = param_2;
  *(uint *)((int)puVar7 + 0xcc) = param_2;
  iVar9 = g_ScreenHalfHeight * 0x10;
  auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar27);
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  g_ScreenHalfWidth = (int)uVar5 >> 1;
  FLOAT_0095d1c8 = 1.0;
  auVar26 = vectorShiftLeftIntegerWord(auVar26,*(undefined1 (*) [16])(puVar7 + 0x18));
  puVar7[0x1f] = unaff_r24;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  g_ScreenWidth = uVar5;
  g_ScreenHeight = RVar4;
  puVar7[0x1e] = unaff_r23;
  DAT_00966b1c = iVar9 + 0x8000;
  ViewContext.nearClip = 32.0;
  ViewContext.farClip = 524288.0;
  ViewContext.xratio = (float)param_1;
  dVar21 = (double)fastfunc::FastIntToDouble();
  dVar22 = 0.5;
  ViewContext.xpix = (float)(dVar21 * 0.5);
  dVar21 = (double)fastfunc::FastIntToDouble(RVar4);
  ViewContext.ypix = (float)(dVar21 * dVar22);
  ViewContext.fogNearDist = 0.0;
  ViewContext.xclip = ViewContext.xpix * 4.0;
  ViewContext.yclip = ViewContext.ypix * 4.0;
  ViewContext.fogFarDist = 524288.0;
  ViewContext.fogNearIntensity = 255.0;
  ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  UploadViewMatricesToPasses();
  iVar12 = g_viewMtxPtr;
  DAT_00966b8c = (undefined2)uVar5;
  DAT_00966b8e = (undefined2)RVar4;
  lVar19 = 3;
  *(int *)(g_viewMtxPtr + 0x22d8) = *(int *)(g_viewMtxPtr + 0x22d8) + 1;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *(undefined4 *)((int)puVar7 + 0x84) = 0;
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  *(undefined4 *)((int)puVar7 + 0x94) = 0;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *(undefined4 *)((int)puVar7 + 0xa4) = 0;
  *(undefined4 *)(puVar7 + 0x15) = 0;
  *(undefined4 *)((int)puVar7 + 0xac) = 0;
  *(undefined4 *)(puVar7 + 0x16) = 0;
  *(undefined4 *)((int)puVar7 + 0xb4) = 0;
  *(undefined4 *)(puVar7 + 0x17) = 0;
  *(undefined1 *)((int)puVar7 + 0x82) = 8;
  *(undefined1 *)((int)puVar7 + 0x83) = 1;
  *(undefined1 *)((int)puVar7 + 0x84) = 0;
  iVar9 = *(int *)(iVar12 + 0x2288);
  iVar2 = *(int *)(iVar12 + 0x4ac);
  RVar15 = (RsxCmd)(((ulonglong)uVar5 & 0x3fffffff) << 2);
  *(RsxCmd *)(puVar7 + 0x13) = RVar15;
  *(int *)(puVar7 + 0x11) = iVar9 - iVar2;
  lVar16 = lVar1;
  lVar20 = lVar1;
  do {
    *(undefined1 *)((int)lVar20 + 0x85) = 0;
    *(undefined4 *)((int)lVar16 + 0x8c) = 0;
    *(undefined4 *)((int)lVar16 + 0x9c) = 0x40;
    pRVar10 = HUD_Pass;
    lVar19 = lVar19 + -1;
    lVar16 = lVar16 + 4;
    lVar20 = lVar20 + 1;
  } while (lVar19 != 0);
  RVar3 = *(RsxCmd *)(puVar7 + 0x11);
  DAT_0095ee24 = 0x30303;
  DAT_0095ee20 = 0x1a529;
  DAT_0095ee38 = RVar15 | NV4097_SET_OBJECT_x4;
  DAT_0095ee28 = 0x80010000;
  RVar8 = uVar5 << 0x10;
  DAT_0095ee2c = 0xaae4;
  DAT_0095ee3c = 0;
  DAT_0095ee34 = RVar8 | RVar4;
  DAT_0095ee30 = 0x2062000;
  DAT_0095ee3d = 0xff;
  DAT_0095ee1c = RVar3;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x84) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x85) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x86) + 0xfeed0000;
  pRVar10->command[2] = *(byte *)((int)puVar7 + 0x87) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar10->command[1] = 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = (RsxCmd)&DAT_00180208;
  pRVar10->command[1] =
       (RsxCmd)((0x1fU - LZCOUNT(uVar5 & 0xffff) & 0xffffffff) << 0x10) |
       *(byte *)((int)puVar7 + 0x82) | 0x140 |
       (RsxCmd)((0x1fU - LZCOUNT(RVar4 & 0xffff) & 0xffffffff) << 0x18);
  pRVar10->command[2] = *(RsxCmd *)(puVar7 + 0x13);
  pRVar10->command[3] = RVar3;
  pRVar10->command[4] = (iVar9 + RVar4 * uVar5 * 4) - iVar2;
  pRVar10->command[5] = *(RsxCmd *)((int)puVar7 + 0x8c);
  pRVar10->command[6] = *(RsxCmd *)((int)puVar7 + 0x9c);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 7;
  pRVar18[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar10->command[1] = RVar15;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar10->command[1] = *(RsxCmd *)(puVar7 + 0x14);
  pRVar10->command[2] = *(RsxCmd *)((int)puVar7 + 0xa4);
  pRVar10->command[3] = *(RsxCmd *)(puVar7 + 0x12);
  pRVar10->command[4] = *(RsxCmd *)((int)puVar7 + 0x94);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 5;
  pRVar18[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar10->command[1] = (uint)*(byte *)((int)puVar7 + 0x83);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar10->command[1] = 0;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar10->command[1] = uVar5 << 0x10;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar10->command[1] = (RVar4 & 0xffff) - (RVar4 >> 0xc & 1) | 0x1000;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar10->command[1] = param_6;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar26 = ZEXT416(0xffffffff);
  auVar24 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
  *HUD_Pass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar10->command[1] = 0xffffff00;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_INVALIDATE_L2_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  auVar26 = loadVectorLeftIndexed(uVar13,0x71174);
  auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar27);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar26 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar26 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x70,lVar1);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,0x74,lVar1);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x78,lVar1);
  *(undefined4 *)(puVar7 + 0xf) = uVar6;
  pRVar10 = HUD_Pass;
  auVar26 = loadVectorLeftIndexed(8,0x71174);
  auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  lVar20 = 2;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar24
                      );
  lVar16 = uVar14 - 0xd0;
  auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x7c,lVar1);
  *(undefined4 *)((int)puVar7 + 0x7c) = uVar6;
  *pRVar10->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar10->command[1] = 0x12;
  pRVar18 = pRVar10->command + 2;
  pRVar10->command = pRVar18;
  do {
    pRVar17 = (RsxCmd *)lVar16;
    *pRVar18 = *pRVar17;
    pRVar18 = pRVar10->command;
    pRVar10->command = pRVar18 + 1;
    lVar16 = lVar16 + 8;
    pRVar18[1] = pRVar17[1];
    pRVar18 = pRVar10->command + 1;
    pRVar10->command = pRVar18;
    pRVar11 = HUD_Pass;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *HUD_Pass->command = (RsxCmd)&DAT_00080a00;
  pRVar11->command[1] = RVar8;
  pRVar11->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CLIP_MIN_x2;
  pRVar11->command[1] = 0;
  pRVar11->command[2] = 0x3f800000;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 9;
  pRVar18[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar11->command = pRVar11->command + 9;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar10->command[1] = RVar8;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar10->command = pRVar10->command + 3;
  idol_draw::BindVertexProgram(iVar12,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(iVar12,HUD_Pass,0xc);
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar10->command[1] = 0xf3;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_NO_OPERATION_x1;
  pRVar10->command[1] = 0;
  pRVar10->command = pRVar10->command + 2;
  uVar13 = FUN_00502f98(0,0,0,0,0,0,1,1);
  vuchain::SetGSReg(0x16,uVar13);
  uVar13 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar13);
  return;
}



//==== 00071ac0  ns=draw  size=0x4b0
// sig: undefined ResetHUDPass(void)
// callers(5): 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 00172bfc vendor::Vendor_ResetHUDPass; 00172c40 vendor::Vendor_HudUpdate; 00173b60 vendor::Vendor_DrawScreen
// callees(8): 00066088 draw::ComposeCameraMatrix; 000668d0 draw::UpdateViewContext; 00068160 draw::InitViewContext; 000780fc stub::STUB_000780fc; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004d86b0 FUN_004d86b0; 005d0140 libc::memset

void draw::ResetHUDPass(void)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  int iVar5;
  RenderingStep *pRVar6;
  int *piVar7;
  
  stub::STUB_000780fc();
  InitViewContext();
  UpdateViewContext();
  piVar7 = g_viewMtxPtr;
  pRVar6 = HUD_Pass;
  pRVar3 = HUD_Pass->command;
  g_viewMtxPtr[0x8b6] = g_viewMtxPtr[0x8b6] + -1;
  *pRVar3 = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar6->command[1] = *(byte *)(piVar7 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1bea) + 0xfeed0000;
  pRVar6->command[2] = *(byte *)((int)piVar7 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  uVar1 = *(ushort *)(piVar7 + 0x706);
  uVar2 = *(ushort *)((int)piVar7 + 0x1c1a);
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar6->command[1] =
       (uint)*(byte *)((int)piVar7 + 0x1be6) | (uint)*(byte *)(piVar7 + 0x703) << 5 |
       (uint)*(byte *)(piVar7 + 0x6f9) << 8 | (uint)*(byte *)((int)piVar7 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar6->command[2] = piVar7[0x6ff];
  pRVar6->command[3] = piVar7[0x6fb];
  pRVar6->command[4] = piVar7[0x704];
  pRVar6->command[5] = piVar7[0x6fc];
  pRVar6->command[6] = piVar7[0x700];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar6->command[1] = piVar7[0x705];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar6->command[1] = piVar7[0x701];
  pRVar6->command[2] = piVar7[0x702];
  pRVar6->command[3] = piVar7[0x6fd];
  pRVar6->command[4] = piVar7[0x6fe];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar6->command[1] = (uint)*(byte *)((int)piVar7 + 0x1be7);
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar6->command[1] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1e),*(undefined2 *)(piVar7 + 0x707));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar6->command[1] = CONCAT22(*(undefined2 *)(piVar7 + 0x706),*(undefined2 *)(piVar7 + 0x707));
  pRVar6->command[2] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1a),*(undefined2 *)((int)piVar7 + 0x1c1e));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar6->command[1] =
       (uint)*(ushort *)((int)piVar7 + 0x1c1a) - (*(ushort *)((int)piVar7 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar6->command = pRVar6->command + 2;
  FUN_004d86b0(piVar7);
  idol_draw::BindVertexProgram(piVar7,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(piVar7,HUD_Pass,0xc);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar6->command[1] = 0x80068006;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar6->command[1] = 0x3020302;
  pRVar6->command[2] = 0x3030303;
  pRVar6->command = pRVar6->command + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  iVar4 = piVar7[1];
  iVar5 = piVar7[2];
  pRVar6->command = pRVar6->command + 2;
  (*(code *)**(undefined4 **)(*piVar7 + 0x10))(piVar7,HUD_Pass,iVar4,iVar5);
  pRVar6 = HUD_Pass;
  libc::memset(HUD_Pass + 1,0,0x90);
  libc::memset(&pRVar6[8].command,0xff,0x48);
  pRVar6[9].field7_0x10 = 0;
  pRVar6[9].callback = (undefined *)0x0;
  ComposeCameraMatrix();
  return;
}



//==== 00071f70  ns=draw  size=0x130
// sig: undefined ???_Draw_FogBlendPass(void)
// callers(0): 
// callees(7): 00074ce8 stub::STUB_00074ce8; 00074cec stub::STUB_00074cec; 00174f80 vuchain::SetGSReg; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0; 0050302c FUN_0050302c

void draw::____Draw_FogBlendPass(void)

{
  undefined8 uVar1;
  
  if (DAT_0095e9f0 != 0) {
    uVar1 = FUN_00502f08(1,1,0,0,0,0);
    vuchain::SetGSReg(6,uVar1);
    uVar1 = stub::STUB_00502fd4_RET_0(1,0,1,1,0,0,0);
    vuchain::SetGSReg(0x1a,uVar1);
    uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
    vuchain::SetGSReg(0x16,uVar1);
    uVar1 = FUN_0050302c(1);
    vuchain::SetGSReg(8,uVar1);
    stub::STUB_00074cec();
    DAT_0095cd40 = 0xbd23d70a;
    stub::STUB_00074ce8();
    DAT_0095cd40 = 0;
    uVar1 = FUN_0050302c(0);
    vuchain::SetGSReg(8,uVar1);
  }
  return;
}



//==== 000720a0  ns=draw  size=0x88
// sig: undefined InitAlphaPal(void)
// callers(1): 000d8be8 initonce::InitOnce
// callees(0): 

void draw::InitAlphaPal(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  do {
    uVar1 = (uint)uVar2;
    uVar3 = uVar2 & 0xe7 | 0x10;
    uVar3 = uVar3 + ((LZCOUNT(-(uVar1 & 8)) << 0x3a) >> 0x3f & (uVar2 & 0xe7) - uVar3);
    uVar4 = uVar3 | 8;
    uVar2 = (ulonglong)(int)(uVar1 + 1);
    *(int *)(&DAT_0095ea14 +
            (int)((uVar4 + ((LZCOUNT(-(uVar1 & 0x10)) << 0x3a) >> 0x3f & uVar3 - uVar4) & 0xffffffff
                  ) << 2)) = ((int)uVar1 >> 1) << 0x18;
  } while ((int)(uVar1 + 1) < 0x100);
  return;
}



//==== 00072128  ns=draw  size=0xd4
// sig: undefined InitScreenEffects(void)
// callers(0): 
// callees(1): 00502ea8 idol_draw::PackCmd

void draw::InitScreenEffects(void)

{
  DAT_0071f004 = 0x10000;
  DAT_0071eed8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071eee8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef08 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef18 = idol_draw::PackCmd(2,0,0,1,0x1f);
  ScreenColorEffectLevel = ScreenColorEffectNow;
  return;
}



//==== 00072200  ns=stub  size=0x8
// sig: undefined STUB_00072200_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00072200_RET_0(void)

{
  return 0;
}



//==== 00072208  ns=stub  size=0x4
// sig: undefined STUB_00072208(void)
// callers(0): 
// callees(0): 

void stub::STUB_00072208(void)

{
  return;
}



//==== 0007220c  ns=stub  size=0x8
// sig: undefined STUB_0007220c_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_0007220c_RET_0(void)

{
  return 0;
}



//==== 00072214  ns=stub  size=0x8
// sig: undefined STUB_00072214_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00072214_RET_0(void)

{
  return 0;
}



//==== 0007221c  ns=stub  size=0x4
// sig: undefined STUB_0007221c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0007221c(void)

{
  return;
}



//==== 00072220  ns=stub  size=0x8
// sig: undefined STUB_00072220_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00072220_RET_0(void)

{
  return 0;
}



//==== 00072230  ns=stub  size=0x10
// sig: undefined STUB_00072230_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00072230_RET_0(void)

{
  return 0;
}



//==== 00072280  ns=draw  size=0x508
// sig: undefined FastDrawQuad(void)
// callers(131): 0006d830 draw::DrawLameShadows; 00074fa0 draw::ImpactSprite_Draw; 000d9668 initsky::DrawSceneShipEffect; 00119028 mobyutil::MB_DrawGlowFX; 0015ebd0 space::Space_DrawShipEngineGlow; 0015ef98 space::Space_DrawTransitionOverlay; 001607c0 space::Space_DrawShipEffects; 00173690 vendor::Vendor_DrawMobyHighlight; 00173f78 vendor::Vendor_DrawScrollingOverlay; 0018cd58 mobyupdate_helpers::M1302_0018cd58; 00196fc8 mobyupdate_helpers::M1045_00196fc8; 00197938 mobyupdate_helpers::M1045_00197938; 00197c88 mobyupdate_helpers::M1045_00197c88; 00198408 mobyupdate_helpers::M1045_00198408; 0019d958 mobyupdate_helpers::M1046_0019d958; 0019e010 mobyupdate_helpers::M1046_0019e010; 001ad26c mobyupdate_helpers::M1066_001ad26c; 001ad528 mobyupdate_helpers::M1066_001ad528; 001ad990 mobyupdate_helpers::M1066_001ad990; 001ae5f0 mobyupdate_helpers::M1068_001ae5f0; 001b1eb8 mobyupdate_helpers::M1069_001b1eb8; 001ba794 mobyupdate_helpers::M1089_001ba794; 001ba9c0 mobyupdate_helpers::M1089_001ba9c0; 001babf8 mobyupdate_helpers::M1089_001babf8; 001bafc0 mobyupdate_helpers::M1089_001bafc0
// callees(7): 004d5fe4 idol_draw::DrawDepth; 004d6704 FUN_004d6704; 004d676c FUN_004d676c; 004d6948 idol_draw::ResetPassState; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 004fe098 idol::AllocateMemAlign

void draw::FastDrawQuad(undefined4 *param_1,uint param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  int iVar1;
  RenderingStep *pRVar2;
  undefined4 *puVar3;
  RsxCmd RVar4;
  RsxCmd *pRVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  RsxCmd *pRVar11;
  undefined4 *puVar12;
  RsxCmd *pRVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  RsxCmd local_d0 [16];
  RsxCmd local_90 [16];
  undefined4 local_50;
  undefined4 local_4c [3];
  
  iVar1 = g_viewMtxPtr;
  pRVar2 = *(RenderingStep **)((int)&DepthPass + ((uint)((param_5 & 0xffffffff) << 2) & 0x3c));
  idol_draw::BindVertexProgram(g_viewMtxPtr,pRVar2,5);
  idol_draw::BindFragmentProgram(iVar1,pRVar2,6);
  puVar6 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
  lVar14 = 4;
  puVar12 = param_1;
  puVar9 = param_1;
  puVar10 = param_1;
  puVar7 = puVar6;
  do {
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar3 = puVar12 + 2;
    puVar12 = puVar12 + 4;
    puVar7[2] = *puVar3;
    puVar7[3] = puVar9[0x14];
    puVar3 = puVar9 + 0x15;
    puVar9 = puVar9 + 2;
    puVar7[4] = *puVar3;
    uVar8 = puVar10[0x10];
    puVar10 = puVar10 + 1;
    puVar7[5] = uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 << 0x18 | (uVar8 & 0xff00) << 8;
    puVar7 = puVar7 + 6;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(longlong *)(param_1 + 0x22) != 0) {
    idol_draw::DrawDepth(pRVar2,*(longlong *)(param_1 + 0x22));
  }
  FUN_004d6704(*(undefined8 *)(param_1 + 0x1c),&local_50,local_4c);
  FUN_004d676c(pRVar2,0,param_4 + *(longlong *)(param_1 + 0x1e) * 0x24 & 0xffffffff,local_50,
               local_4c[0]);
  idol_draw::ResetPassState(pRVar2);
  *pRVar2->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 0x1832;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 0x1822;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 0x1844;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  iVar1 = *(int *)(iVar1 + 0x4a8);
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar4 = (int)puVar6 - iVar1;
  pRVar2->command[1] = RVar4 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41684;
  pRVar2->command[1] = RVar4 + 0xc | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4168c;
  pRVar2->command[1] = RVar4 + 0x14 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  if (param_2 == 0) {
    pRVar13 = local_90;
    pRVar11[2] = 0x441efc;
    lVar14 = 8;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      *pRVar11 = *pRVar13;
      pRVar11 = pRVar2->command;
      pRVar2->command = pRVar11 + 1;
      pRVar5 = pRVar13 + 1;
      pRVar13 = pRVar13 + 2;
      pRVar11[1] = *pRVar5;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
    auVar17 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
    auVar18 = vectorMergeHighWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar19 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
    pRVar13 = local_d0;
    auVar15 = vectorMergeLowWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar16 = vectorMergeHighWord(auVar17,auVar19);
    auVar17 = vectorMergeLowWord(auVar17,auVar19);
    vectorMergeHighWord(auVar18,auVar16);
    vectorMergeLowWord(auVar18,auVar16);
    vectorMergeHighWord(auVar15,auVar17);
    vectorMergeLowWord(auVar15,auVar17);
    uVar8 = 0;
    pRVar11[2] = 0x441efc;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      uVar8 = uVar8 + 1;
      *pRVar11 = *pRVar13;
      pRVar13 = pRVar13 + 1;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
    } while (uVar8 < 0x10);
  }
  *pRVar11 = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 7;
  pRVar11[6] = 0x40041814;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 1;
  *pRVar11 = 0x3000000;
  *pRVar2->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 2;
  pRVar2->command = pRVar2->command + 2;
  return;
}



//==== 00072788  ns=stub  size=0x4
// sig: undefined STUB_00072788(void)
// callers(0): 
// callees(0): 

void stub::STUB_00072788(void)

{
  return;
}



//==== 0007278c  ns=draw  size=0x390
// sig: undefined FastDrawStrip_DL(void)
// callers(0): 
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStrip_DL(longlong param_1,int param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_viewMtxPtr;
  pRVar3 = DL_Pass;
  idol_draw::BindVertexProgram(g_viewMtxPtr,DL_Pass,10);
  idol_draw::BindFragmentProgram(iVar6,pRVar3,0xb);
  *pRVar3->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0xc | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41688;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar4 << 0x20) >> 0x28;
  pRVar3->command[1] = 0;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((uint)LZCOUNT(iVar6) >> 5 ^ 1) +
              ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 00072b1c  ns=draw  size=0x2c0
// sig: undefined FastDrawStrip_DLNoState(void)
// callers(2): 000731c8 draw::DrawTexturedStrips; 0017d4b8 water::WaterSheet_DrawAll
// callees(0): 

void draw::FastDrawStrip_DLNoState(longlong param_1,int param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_viewMtxPtr;
  pRVar3 = DL_Pass;
  *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar7 = (uVar4 << 0x20) >> 0x28;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((uint)LZCOUNT(iVar6) >> 5 ^ 1) +
              ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}



//==== 00072ddc  ns=draw  size=0x394
// sig: undefined FastDrawStrip_Pass(void)
// callers(2): 000731c8 draw::DrawTexturedStrips; 0017d4b8 water::WaterSheet_DrawAll
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStrip_Pass(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_viewMtxPtr;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_viewMtxPtr,*(undefined4 *)((int)&DepthPass + iVar1),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),6);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2032;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2022;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2044;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x1c | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  *puVar3 = (((uint)uVar11 >> 8) + ((uint)LZCOUNT(iVar13) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}



//==== 000731c8  ns=draw  size=0x4b0
// sig: undefined DrawTexturedStrips(void)
// callers(2): 000774b8 draw::???_Draw_ScrollingTexStrips; 0017ec40 water::IcePass
// callees(6): 000685c4 draw::GetEffectTex; 00072b1c draw::FastDrawStrip_DLNoState; 00072ddc draw::FastDrawStrip_Pass; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 004fe098 idol::AllocateMemAlign

void draw::DrawTexturedStrips
               (ulonglong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4,
               undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  RsxCmd *pRVar5;
  RenderingStep *pRVar6;
  RenderingStep *pRVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  RsxCmd *pRVar13;
  longlong lVar12;
  RsxCmd *pRVar15;
  ulonglong uVar14;
  RsxCmd *pRVar16;
  undefined8 in_LR;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined8 in_stack_00000070;
  RsxCmd local_a0 [18];
  
  lVar9 = idol::AllocateMemAlign(FrameHeap,(int)((param_1 & 0xffffffff) << 5),0x10);
  pRVar7 = DL_Pass;
  pRVar15 = local_a0;
  lVar17 = 8;
  *DL_Pass->command = 0x441efc;
  pRVar7->command[1] = 4;
  pRVar16 = pRVar7->command + 2;
  pRVar7->command = pRVar16;
  pRVar13 = pRVar15;
  do {
    *pRVar16 = *pRVar13;
    pRVar16 = pRVar7->command;
    pRVar7->command = pRVar16 + 1;
    pRVar5 = pRVar13 + 1;
    pRVar13 = pRVar13 + 2;
    pRVar16[1] = *pRVar5;
    pRVar16 = pRVar7->command + 1;
    pRVar7->command = pRVar16;
    pRVar6 = DL_DepthPass;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 8;
  *DL_DepthPass->command = 0x441efc;
  pRVar6->command[1] = 4;
  pRVar13 = pRVar6->command + 2;
  pRVar6->command = pRVar13;
  do {
    *pRVar13 = *pRVar15;
    pRVar13 = pRVar6->command;
    pRVar6->command = pRVar13 + 1;
    pRVar16 = pRVar15 + 1;
    pRVar15 = pRVar15 + 2;
    pRVar13[1] = *pRVar16;
    pRVar13 = pRVar6->command + 1;
    pRVar6->command = pRVar13;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (0 < (int)param_1) {
    auVar2 = ZEXT416(0xfffffff8);
    auVar3 = ZEXT416(0xfffffff0);
    auVar4 = ZEXT416(8);
    auVar20 = loadVectorLeftIndexed(0x40,0x73170);
    auVar23 = loadVectorLeftIndexed(0x48,0x73170);
    auVar22 = loadVectorLeftIndexed(0x44,0x73170);
    auVar24 = loadVectorLeftIndexed(0x4c,0x73170);
    auVar25 = loadVectorLeftIndexed(0x50,0x73170);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    lVar12 = lVar9 + 0x1c;
    auVar26 = loadVectorLeftIndexed(0x54,0x73170);
    auVar20 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar24 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
    lVar17 = lVar9;
    uVar14 = param_1;
    do {
      puVar10 = (undefined4 *)lVar17;
      *puVar10 = *param_2;
      puVar10[1] = param_2[1];
      auVar26 = ZEXT416(0xffffffff);
      auVar18 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[2] = param_2[2];
      auVar26 = ZEXT416(0xffffffff);
      auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[3] = *param_4;
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[4] = param_4[1];
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      puVar10[5] = *param_5;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      puVar10[6] = param_5[1];
      auVar18 = loadVectorLeftIndexed(in_LR,param_3);
      auVar31 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar27 = vectorRotateLeftIntegerWord
                          (auVar18,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60);
      auVar28 = vectorRotateLeftIntegerWord
                          (auVar18,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
      auVar26 = vectorLogicalAnd(auVar18,auVar24);
      auVar29 = vectorShiftRightWord(auVar18,auVar25);
      auVar27 = vectorLogicalAnd(auVar27,auVar24);
      auVar28 = vectorLogicalAnd(auVar28,auVar24);
      auVar18 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
      auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
      auVar26 = ZEXT416(0xffffffff);
      auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
      auVar28 = vectorConvertFromUnsignedFixedPointWord(auVar28,0);
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + 0x20;
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 2;
      auVar26 = vectorMultiplyAddFloatingPoint(auVar18,auVar21,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar19);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar21,auVar31);
      auVar18 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      param_5 = param_5 + 2;
      auVar19 = vectorMultiplyAddFloatingPoint(auVar29,auVar21,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar29 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar30 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar29 = vectorConditionalSelect(auVar27,auVar22,auVar29);
      auVar27 = vectorConditionalSelect(auVar28,auVar22,auVar30);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar26 = vectorAddFloatingPoint(auVar26,auVar23);
      auVar29 = vectorAddFloatingPoint(auVar29,auVar23);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar27 = vectorAddFloatingPoint(auVar27,auVar23);
      auVar19 = vectorAddFloatingPoint(auVar18,auVar23);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar22);
      auVar29 = vectorConditionalSelect(auVar29,auVar22,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar28 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar27 = vectorConditionalSelect(auVar27,auVar22,auVar28);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar19 = vectorShiftLeftIntegerWord
                          (auVar29,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar29 = vectorShiftLeftIntegerWord
                          (auVar27,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar25);
      auVar26 = (auVar26 | auVar19 | auVar29 | auVar18) >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar12);
      *(undefined4 *)((uint)lVar12 & 0xfffffffc) = uVar1;
      lVar12 = lVar12 + 0x20;
    } while (0 < (int)uVar14);
  }
  idol_draw::DrawDepth(DL_DepthPass,0);
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  idol_draw::DrawDepth(DL_Pass,0);
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_6);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_Pass(param_1,lVar9,9);
  FastDrawStrip_Pass(param_1,lVar9,8);
  idol_draw::DrawDepth(DL_Pass,in_stack_00000070);
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_7);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_DLNoState(param_1,lVar9);
  return;
}



//==== 00073678  ns=draw  size=0x390
// sig: undefined FastDrawStrip2UV_Pass(void)
// callers(1): 00073de0 draw::DrawLavaStrips
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStrip2UV_Pass(longlong param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar11;
  ulonglong uVar10;
  ulonglong uVar12;
  
  iVar8 = g_viewMtxPtr;
  iVar4 = (int)(param_3 << 2);
  idol_draw::BindVertexProgram(g_viewMtxPtr,*(undefined4 *)((int)&DepthPass + iVar4),7);
  idol_draw::BindFragmentProgram(iVar8,*(undefined4 *)((int)&DepthPass + iVar4),7);
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2844;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  uVar11 = param_2 - *(int *)(iVar8 + 0x4a8);
  **(undefined4 **)(iVar3 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x18 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x24 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x400c1714;
  uVar12 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x10) = 0x41808;
  uVar6 = param_1 - uVar12 & ~(longlong)((int)(param_1 - uVar12) >> 0x1f);
  uVar9 = (uVar6 << 0x20) >> 0x28;
  uVar7 = uVar6 - (uVar6 & 0xffffff00);
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x14) = 6;
  iVar8 = (int)uVar7;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 0x18;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  puVar1 = *(uint **)(iVar3 + 8);
  *(uint **)(iVar3 + 8) = puVar1 + 1;
  *puVar1 = (((uint)uVar6 >> 8) + ((uint)LZCOUNT(iVar8) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)uVar12) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  uVar10 = 0;
  if ((int)uVar12 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    *(int **)(iVar3 + 8) = piVar2 + 1;
    *piVar2 = (int)((uVar12 & 0xffffffff) << 0x18) + -0x1000000;
    uVar10 = uVar12;
  }
  uVar11 = (uint)uVar10;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      puVar1 = *(uint **)(iVar3 + 8);
      uVar5 = (uint)uVar10;
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 + 0x100;
      uVar11 = (uint)uVar10;
      *(uint **)(iVar3 + 8) = puVar1 + 1;
      *puVar1 = uVar5 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar8 != 0) {
    puVar1 = *(uint **)(iVar3 + 8);
    *(uint **)(iVar3 + 8) = puVar1 + 1;
    *puVar1 = uVar11 | (int)((uVar7 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  return;
}



//==== 00073a08  ns=draw  size=0x390
// sig: undefined FastDrawStrip2UV_PassNoState(void)
// callers(1): 00073de0 draw::DrawLavaStrips
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStrip2UV_PassNoState(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_viewMtxPtr;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_viewMtxPtr,*(undefined4 *)((int)&DepthPass + iVar1),7);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),7);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2844;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x24 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar11 >> 8) + ((uint)LZCOUNT(iVar13) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)uVar10) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}



//==== 00073de0  ns=draw  size=0x330
// sig: undefined DrawLavaStrips(void)
// callers(1): 00077048 draw::DrawsFlowingLava
// callees(6): 000685c4 draw::GetEffectTex; 00073678 draw::FastDrawStrip2UV_Pass; 00073a08 draw::FastDrawStrip2UV_PassNoState; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 004fe098 idol::AllocateMemAlign

void draw::DrawLavaStrips
               (double param_1,longlong param_2,undefined4 *param_3,uint *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  uint uVar1;
  RenderingStep *pRVar2;
  RsxCmd *pRVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  RsxCmd *pRVar7;
  int iVar8;
  undefined4 *puVar9;
  RsxCmd *pRVar10;
  longlong lVar11;
  undefined8 in_stack_00000070;
  int in_stack_00000084;
  RsxCmd local_c0 [16];
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) + (int)(param_2 << 3),0x10);
  iVar8 = EffectTexHeaders;
  pRVar2 = (&DepthPass)[in_stack_00000084];
  iVar6 = GetEffectTex(param_7);
  FUN_004d676c(pRVar2,0,iVar8 + iVar6 * 0x24,1,1);
  iVar8 = EffectTexHeaders;
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    pRVar2 = (&DepthPass)[in_stack_00000084];
    iVar6 = GetEffectTex(param_8);
    FUN_004d676c(pRVar2,1,iVar8 + iVar6 * 0x24,1,1);
  }
  pRVar2 = (&DepthPass)[in_stack_00000084];
  *pRVar2->command = 0x441efc;
  pRVar10 = local_c0;
  lVar11 = 8;
  pRVar2->command[1] = 4;
  pRVar7 = pRVar2->command + 2;
  pRVar2->command = pRVar7;
  do {
    *pRVar7 = *pRVar10;
    pRVar7 = pRVar2->command;
    pRVar2->command = pRVar7 + 1;
    pRVar3 = pRVar10 + 1;
    pRVar10 = pRVar10 + 2;
    pRVar7[1] = *pRVar3;
    pRVar7 = pRVar2->command + 1;
    pRVar2->command = pRVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar8 = (int)param_2;
  lVar11 = param_2;
  puVar9 = puVar5;
  while (0 < iVar8) {
    lVar11 = lVar11 + -1;
    *puVar9 = *param_3;
    puVar9[1] = param_3[1];
    puVar4 = param_3 + 2;
    param_3 = param_3 + 3;
    puVar9[2] = *puVar4;
    uVar1 = *param_4;
    puVar9[3] = *param_5;
    param_4 = param_4 + 4;
    puVar9[4] = param_5[1];
    param_5 = param_5 + 2;
    puVar9[6] = *param_6;
    puVar4 = param_6 + 1;
    param_6 = param_6 + 2;
    puVar9[7] = *puVar4;
    puVar9[8] = (float)param_1;
    puVar9[5] = (float)param_1;
    puVar9[9] = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8;
    puVar9 = puVar9 + 10;
    iVar8 = (int)lVar11;
  }
  idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],param_9);
  FastDrawStrip2UV_PassNoState(param_2,puVar5,in_stack_00000084);
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],in_stack_00000070);
    FastDrawStrip2UV_Pass(param_2,puVar5,in_stack_00000084);
  }
  return;
}



//==== 00074150  ns=draw  size=0x450
// sig: undefined FastDrawStripColor(void)
// callers(4): 00074604 draw::DrawMeshSet; 00077c88 draw::DrawColorGradientStrip; 0017c750 water::WaterTile_DrawCellBase; 0017c888 water::WaterTile_DrawCellOvl
// callees(3): 004d6948 idol_draw::ResetPassState; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStripColor(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar2 = g_viewMtxPtr;
  iVar5 = (int)(param_3 << 2);
  idol_draw::ResetPassState(*(undefined4 *)((int)&DepthPass + iVar5));
  iVar13 = (int)param_3;
  if ((iVar13 == 2) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),6);
  }
  else if ((iVar13 == 0) || (iVar13 == 8)) {
    iVar13 = *(int *)((int)&DepthPass + iVar5);
    **(undefined4 **)(iVar13 + 8) = 0x441efc;
    puVar12 = local_70;
    lVar17 = 8;
    *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 4;
    puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 8);
    *(undefined4 **)(iVar13 + 8) = puVar8;
    do {
      *puVar8 = *puVar12;
      iVar16 = *(int *)(iVar13 + 8);
      uVar1 = puVar12[1];
      puVar12 = puVar12 + 2;
      *(int *)(iVar13 + 8) = iVar16 + 4;
      *(undefined4 *)(iVar16 + 4) = uVar1;
      puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 4);
      *(undefined4 **)(iVar13 + 8) = puVar8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41740;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1832;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41744;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1822;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x4174c;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1844;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar13 + 8) = 0x41680;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41684;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0x14 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  uVar7 = (uVar14 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar13 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar14 >> 8) + ((uint)LZCOUNT(iVar16) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)uVar11) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar2 + 8) = 0x4174c;
  iVar5 = *(int *)(iVar2 + 8);
  *(undefined4 *)(iVar5 + 4) = 2;
  *(int *)(iVar2 + 8) = iVar5 + 8;
  return;
}



//==== 000745a0  ns=draw  size=0x1c
// sig: undefined ???_Draw_IsFlagMode2(void)
// callers(0): 
// callees(0): 

bool draw::____Draw_IsFlagMode2(ulonglong param_1)

{
  return (param_1 & 0x30) == 0x20;
}



//==== 000745bc  ns=draw  size=0x48
// sig: undefined ???_Draw_IsBlendModeMatch(void)
// callers(0): 
// callees(0): 

undefined8 draw::____Draw_IsBlendModeMatch(ulonglong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((param_1 & 3) == 0) && (((uint)(param_1 >> 2) & 3) == 1)) &&
      (((uint)(param_1 >> 6) & 3) == 1)) &&
     (((param_1 >> 4 & 3) == 0 || (((uint)(param_1 >> 4) & 3) == 2)))) {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 00074604  ns=draw  size=0x13c
// sig: undefined DrawMeshSet(void)
// callers(42): 001d0f60 mobyupdate_helpers::M1111_Pokitaru_Ocean; 0026e3e0 mobyupdate_helpers::M1405_0026e3e0; 0026e9a0 mobyupdate_helpers::M1406_0026e9a0; 0026eed0 mobyupdate_helpers::M1407_0026eed0; 0026f400 mobyupdate_helpers::M1408_0026f400; 0026f9c0 mobyupdate_helpers::M1409_0026f9c0; 0027ac98 mobyupdate_helpers::M1426_0027ac98; 0029d610 mobyupdate_helpers::M1565_0029d610; 0029db20 mobyupdate_helpers::M1567_0029db20; 002a6bd0 mobyupdate_helpers::M1649_002a6bd0; 002a6cc0 mobyupdate_helpers::M1649_002a6cc0; 002a6db0 mobyupdate_helpers::M1649_002a6db0; 002a6ea0 mobyupdate_helpers::M1649_DrawScrollingTexLayers; 002a94c8 mobyupdate_helpers::M1671_002a94c8; 002c4f7c mobyupdate_helpers::M1848_002c4f7c; 002d3fc8 mobyupdate_helpers::M1901_002d3fc8; 002d40b8 mobyupdate_helpers::M1901_002d40b8; 002d4800 mobyupdate_helpers::M1903_002d4800; 002d48f0 mobyupdate_helpers::M1903_002d48f0; 002d49e0 mobyupdate_helpers::M1903_002d49e0; 002d4ad0 mobyupdate_helpers::M1903_002d4ad0; 002d7a50 mobyupdate_helpers::M1907_002d7a50; 002d7e90 mobyupdate_helpers::M1908_002d7e90; 002d8858 mobyupdate_helpers::M1910_002d8858; 002d8c98 mobyupdate_helpers::M1911_002d8c98
// callees(2): 00074150 draw::FastDrawStripColor; 004fe098 idol::AllocateMemAlign

void draw::DrawMeshSet(ulonglong param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,
                      ulonglong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (param_5 << 0x20) >> 0x24 & 0xf;
  puVar5 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,(int)(param_1 << 3) * 3,0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_1 != 0) {
    do {
      uVar4 = uVar4 + 1;
      uVar2 = *param_3;
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      param_3 = param_3 + 1;
      puVar3 = param_2 + 2;
      param_2 = param_2 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_4;
      uVar1 = param_4[1];
      puVar6[5] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      param_4 = param_4 + 2;
      puVar6[4] = uVar1;
      puVar6 = puVar6 + 6;
    } while ((uVar4 & 0xffffffff) < (param_1 & 0xffffffff));
  }
  if ((int)(param_5 & 0xf) != 0) {
    FastDrawStripColor(param_1,puVar5,param_5 & 0xf);
  }
  if ((int)uVar7 != 0) {
    FastDrawStripColor(param_1,puVar5,uVar7);
  }
  return;
}



//==== 00074780  ns=draw  size=0x460
// sig: undefined FastDrawStripFog(void)
// callers(3): 00074be0 draw::DrawOceanStrip; 0017d8f8 water::SubmitOceanCell; 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean
// callees(2): 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram

void draw::FastDrawStripFog(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar16 = g_viewMtxPtr;
  iVar5 = (int)(param_3 << 2);
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar12 = local_70;
  iVar13 = (int)param_3;
  **(undefined4 **)(iVar4 + 8) = 0x441efc;
  lVar17 = 8;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 4;
  puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 8);
  *(undefined4 **)(iVar4 + 8) = puVar8;
  do {
    *puVar8 = *puVar12;
    iVar1 = *(int *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = iVar1 + 4;
    puVar8 = puVar12 + 1;
    puVar12 = puVar12 + 2;
    *(undefined4 *)(iVar1 + 4) = *puVar8;
    puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 4);
    *(undefined4 **)(iVar4 + 8) = puVar8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (((iVar13 == 1) || (iVar13 == 2)) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
    idol_draw::BindFragmentProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c44;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar16 + 0x4a8);
  **(undefined4 **)(iVar4 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0x18 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 8) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x10) = 0x41808;
  uVar7 = (uVar14 << 0x20) >> 0x28;
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x14) = 6;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 0x18;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar2 = *(uint **)(iVar4 + 8);
  *(uint **)(iVar4 + 8) = puVar2 + 1;
  *puVar2 = (((uint)uVar14 >> 8) + ((uint)LZCOUNT(iVar16) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)uVar11) >> 5 ^ 1)) * 0x40000 | 0x40001814;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar3 = *(int **)(iVar4 + 8);
    *(int **)(iVar4 + 8) = piVar3 + 1;
    *piVar3 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar2 = *(uint **)(iVar4 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *(uint **)(iVar4 + 8) = puVar2 + 1;
      *puVar2 = uVar6 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar2 = *(uint **)(iVar4 + 8);
    *(uint **)(iVar4 + 8) = puVar2 + 1;
    *puVar2 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  return;
}



//==== 00074be0  ns=draw  size=0x108
// sig: undefined DrawOceanStrip(void)
// callers(1): 0017e700 water::OceanSpecialPass
// callees(2): 00074780 draw::FastDrawStripFog; 004fe098 idol::AllocateMemAlign

void draw::DrawOceanStrip
               (double param_1,ulonglong param_2,undefined4 *param_3,uint *param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) - (int)(param_2 << 2),0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_2 != 0) {
    do {
      uVar4 = uVar4 + 1;
      *puVar6 = *param_3;
      uVar2 = *param_4;
      puVar6[1] = param_3[1];
      param_4 = param_4 + 1;
      puVar3 = param_3 + 2;
      param_3 = param_3 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_5;
      uVar1 = param_5[1];
      puVar6[5] = (float)param_1;
      param_5 = param_5 + 2;
      puVar6[4] = uVar1;
      puVar6[6] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      puVar6 = puVar6 + 7;
    } while ((uVar4 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  FastDrawStripFog(param_2,puVar5,9);
  return;
}



//==== 00074ce8  ns=stub  size=0x4
// sig: undefined STUB_00074ce8(void)
// callers(1): 00071f70 draw::???_Draw_FogBlendPass
// callees(0): 

void stub::STUB_00074ce8(void)

{
  return;
}



//==== 00074cec  ns=stub  size=0x4
// sig: undefined STUB_00074cec(void)
// callers(1): 00071f70 draw::???_Draw_FogBlendPass
// callees(0): 

void stub::STUB_00074cec(void)

{
  return;
}



//==== 00074cf0  ns=draw  size=0xc8
// sig: undefined ImpactSprite_Add(void)
// callers(1): 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}
// callees(1): 000fcc68 mobyutil::MB_randRot

int draw::ImpactSprite_Add
              (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined2 param_5)

{
  int iVar1;
  double dVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  
  iVar1 = 0;
  uStack00000034 = (undefined4)param_2;
  uStack0000003c = (undefined4)param_3;
  uStack00000030 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack00000038 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    if ((short)(&DAT_0095ee50)[iVar1 * 0x10] < 1) {
      (&DAT_0095ee50)[iVar1 * 0x10] = 0x18;
      *(undefined2 *)(&DAT_0095ee54 + iVar1 * 0x20) = param_5;
      (&DAT_0095ee40)[iVar1 * 8] = uStack00000030;
      (&DAT_0095ee44)[iVar1 * 8] = uStack00000034;
      (&DAT_0095ee48)[iVar1 * 8] = uStack00000038;
      (&DAT_0095ee4c)[iVar1 * 8] = uStack0000003c;
      (&DAT_0095ee5c)[iVar1 * 8] = (float)param_1;
      _uStack00000030 = param_2;
      _uStack00000038 = param_3;
      dVar2 = (double)mobyutil::MB_randRot();
      (&DAT_0095ee58)[iVar1 * 8] = (float)dVar2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return -1;
}



//==== 00074dc0  ns=draw  size=0xec
// sig: undefined ImpactSprite_Update(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(2): 005001fc fastfunc::FastMemSet; 005025e0 fastfunc::FastDiffRots

void draw::ImpactSprite_Update(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  
  psVar4 = &DAT_0095ee50;
  iVar3 = 0;
  puVar5 = &DAT_0095ee40;
  dVar7 = 5.235987663269043;
  do {
    if (0 < *psVar4) {
      dVar6 = (double)fastfunc::FastDiffRots
                                ((double)(float)puVar5[6],
                                 (double)(float)((double)mobyutil::g_FrameTime * dVar7));
      puVar5[6] = (float)dVar6;
      if (*(short *)(puVar5 + 4) < 0xd) {
        sVar2 = *(short *)((int)puVar5 + 0x12) + -5;
      }
      else {
        sVar2 = *(short *)((int)puVar5 + 0x12) + 5;
      }
      sVar1 = *(short *)(puVar5 + 4) + -1;
      *(short *)((int)puVar5 + 0x12) = sVar2;
      *(short *)(puVar5 + 4) = sVar1;
      if (sVar1 < 1) {
        fastfunc::FastMemSet(puVar5,0,0x20);
      }
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 0x10;
    puVar5 = puVar5 + 8;
  } while (iVar3 < 0x20);
  return;
}



//==== 00074fa0  ns=draw  size=0x92c
// sig: undefined ImpactSprite_Draw(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw::ImpactSprite_Draw(void)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong *puVar3;
  RenderingStep *pRVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar11;
  ulonglong uVar10;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar12;
  ulonglong unaff_r23;
  ulonglong uVar13;
  ulonglong unaff_r24;
  ulonglong uVar14;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar15;
  ulonglong unaff_r27;
  short *psVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  undefined *puVar17;
  ulonglong unaff_r31;
  int iVar18;
  ulonglong in_LR;
  double dVar19;
  ulonglong in_f28;
  double dVar20;
  ulonglong in_f29;
  double dVar21;
  ulonglong in_f30;
  double dVar22;
  ulonglong in_f31;
  undefined4 uVar23;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar24 [16];
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
  undefined1 auVar49 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x390;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar8;
  puVar3[0x74] = in_LR;
  puVar3[0x6e] = in_f28;
  puVar3[0x6f] = in_f29;
  puVar3[0x70] = in_f30;
  puVar3[0x71] = in_f31;
  lVar6 = uVar8 - 0x90;
  puVar7 = (undefined4 *)lVar6;
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  puVar3[0x6b] = unaff_r29;
  puVar3[0x6c] = unaff_r30;
  puVar3[0x6d] = unaff_r31;
  iVar5 = DAT_00902e9c;
  puVar3[0x6a] = unaff_r28;
  pRVar4 = DL_Pass;
  puVar3[0x69] = unaff_r27;
  puVar3[0x68] = unaff_r26;
  puVar3[0x67] = unaff_r25;
  puVar3[0x66] = unaff_r24;
  puVar3[0x65] = unaff_r23;
  puVar3[100] = unaff_r22;
  puVar3[99] = unaff_r21;
  puVar3[0x62] = unaff_r20;
  uVar9 = idol_draw::PackCmd(0,2,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  iVar18 = EffectTexHeaders;
  pRVar4 = DL_Pass;
  iVar11 = GetEffectTex(0x13);
  FUN_004d676c(pRVar4,0,iVar18 + iVar11 * 0x24,3,3);
  auVar49 = _DAT_00074ee0;
  auVar45 = _DAT_00074ed0;
  auVar46 = _DAT_00074ec0;
  auVar24 = *(undefined1 (*) [16])(iVar5 + 0xa0U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar5 + 0xb0U & 0xfffffff0);
  auVar28 = *(undefined1 (*) [16])(iVar5 + 0xc0U & 0xfffffff0);
  auVar29 = *(undefined1 (*) [16])(iVar5 + 0xd0U & 0xfffffff0);
  auVar30 = vectorPermute(auVar24,auVar28,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar27,auVar29,_DAT_00074eb0);
  auVar33 = vectorPermute(auVar27,auVar28,_DAT_00074eb0);
  auVar35 = vectorPermute(auVar29,auVar24,_DAT_00074eb0);
  auVar47 = vectorMergeHighWord(auVar30,auVar32);
  auVar30 = ZEXT416(0);
  auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar35 = vectorPermute(auVar33,auVar35,_DAT_00074ed0);
  auVar33 = vectorPermute(auVar24,auVar28,_DAT_00074f00);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar31);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f00);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar24,auVar28,_DAT_00074f10);
  auVar48 = vectorMergeHighWord(auVar33,auVar38);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f10);
  auVar33 = vectorPermute(auVar24,auVar27,_DAT_00074eb0);
  auVar44 = vectorPermute(auVar29,auVar24,_DAT_00074f10);
  auVar39 = vectorPermute(auVar27,auVar28,_DAT_00074f00);
  auVar38 = vectorMergeHighWord(auVar32,auVar38);
  auVar33 = vectorPermute(auVar30,auVar33,_DAT_00074ed0);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar36);
  auVar32 = vectorPermute(auVar27,auVar28,_DAT_00074f10);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar48,auVar48,auVar31);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar31);
  auVar30 = vectorPermute(auVar29,auVar24,_DAT_00074f00);
  auVar32 = vectorPermute(auVar32,auVar44,_DAT_00074ed0);
  auVar39 = vectorPermute(auVar39,auVar30,_DAT_00074ed0);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074f00);
  auVar28 = vectorPermute(auVar28,auVar29,_DAT_00074f10);
  auVar29 = vectorPermute(auVar24,auVar27,_DAT_00074f00);
  auVar24 = vectorPermute(auVar24,auVar27,_DAT_00074f10);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar33,auVar35);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar36);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar43);
  auVar24 = vectorPermute(auVar28,auVar24,_DAT_00074ed0);
  auVar28 = vectorPermute(auVar30,auVar29,_DAT_00074ed0);
  auVar30 = loadVectorLeftIndexed(0x40,0x74eb0);
  auVar32 = loadVectorLeftIndexed(0x44,0x74eb0);
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar35);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar27);
  auVar27 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar32);
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar24);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar27,auVar32,auVar31);
  auVar35 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar33);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar44,auVar31);
  iVar18 = 0;
  uVar15 = ZEXT48(&DAT_0095ee40);
  psVar16 = &DAT_0095ee50;
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar30,auVar43);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar31);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar28,auVar44,auVar31);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar31);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar31);
  uVar14 = ZEXT48(&DAT_0095ee44);
  uVar13 = ZEXT48(&DAT_0095ee48);
  uVar12 = ZEXT48(&DAT_0095ee58);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar27);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar43);
  auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar32,auVar43);
  auVar24 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar28);
  auVar30 = vectorConditionalSelect(auVar27,auVar30,auVar24);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar30,auVar31);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar35);
  puVar7 = (undefined4 *)(iVar5 + 0x20U & 0xfffffff0);
  uVar26 = puVar7[2];
  uVar25 = puVar7[1];
  uVar23 = *puVar7;
  *(undefined4 *)((int)puVar3 + 0x23c) = puVar7[3];
  *(undefined4 *)(puVar3 + 0x47) = uVar26;
  *(undefined4 *)((int)puVar3 + 0x234) = uVar25;
  *(undefined4 *)(puVar3 + 0x46) = uVar23;
  auVar32 = vectorCompareEqualToFloatingPoint(auVar33,auVar33);
  auVar33 = vectorConditionalSelect(auVar28,auVar33,auVar32);
  auVar32 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar48,auVar33,auVar31);
  auVar30 = vectorConditionalSelect(auVar35,auVar30,auVar32);
  auVar32 = loadVectorLeftIndexed(0x78,0x74eb0);
  auVar33 = loadVectorLeftIndexed(0x84,0x74eb0);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar30,auVar31);
  auVar24 = loadVectorLeftIndexed(0x80,0x74eb0);
  auVar30 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = loadVectorLeftIndexed(0x88,0x74eb0);
  auVar32 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x48) = auVar27;
  auVar27 = loadVectorLeftIndexed(0x8c,0x74eb0);
  dVar22 = 0.015625;
  dVar21 = 0.47999998927116394;
  *(undefined1 (*) [16])(puVar3 + 0x24) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = loadVectorLeftIndexed(0x90,0x74eb0);
  dVar20 = 0.0;
  *(undefined1 (*) [16])(puVar3 + 0x44) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar29 = loadVectorLeftIndexed(0x94,0x74eb0);
  auVar30 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x42) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar32 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = loadVectorLeftIndexed(0x7c,0x74eb0);
  auVar27 = loadVectorLeftIndexed(0x98,0x74eb0);
  auVar28 = loadVectorLeftIndexed(0x9c,0x74eb0);
  auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x40) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x3e) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3c) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3a) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar30 = loadVectorLeftIndexed(0xa0,0x74eb0);
  *(undefined1 (*) [16])(puVar3 + 0x38) =
       auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar32 = _DAT_00074f70;
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x36) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar33 = _DAT_00074f80;
  auVar24 = vectorPermute(auVar36,auVar36,_DAT_00074f80);
  auVar28 = vectorPermute(auVar36,auVar36,auVar32);
  auVar29 = vectorPermute(auVar36,auVar36,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x34) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar38 = *(undefined1 (*) [16])(puVar3 + 0xe);
  auVar30 = vectorPermute(auVar39,auVar39,auVar33);
  *(undefined4 *)((int)puVar3 + 0x19c) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x33) = 0;
  *(undefined4 *)((int)puVar3 + 0x194) = 0;
  *(undefined4 *)(puVar3 + 0x32) = 0;
  auVar27 = vectorPermute(auVar39,auVar39,auVar32);
  auVar31 = vectorPermute(auVar39,auVar39,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x30) = auVar24;
  *(undefined1 (*) [16])(puVar3 + 0x2e) = auVar28;
  *(undefined1 (*) [16])(puVar3 + 0x2c) = auVar29;
  auVar24 = _DAT_00074f90;
  *(undefined1 (*) [16])(puVar3 + 0x2a) = auVar30;
  *(undefined1 (*) [16])(puVar3 + 0x28) = auVar27;
  auVar30 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x26) = auVar31;
  do {
    if (0 < *psVar16) {
      auVar29 = loadVectorLeftIndexed(lVar6,uVar15);
      auVar28 = loadVectorLeftIndexed(lVar6,uVar14);
      auVar31 = loadVectorLeftIndexed(lVar6,uVar13);
      auVar27 = vectorPermute(auVar29,auVar28,auVar24);
      auVar35 = vectorPermute(auVar31,auVar38,auVar24);
      auVar47 = vectorPermute(auVar27,auVar35,auVar45);
      auVar27 = ZEXT416(0);
      auVar35 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar38 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(puVar3 + 0x46),auVar47);
      auVar27 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x78,lVar1);
      *(undefined4 *)(puVar3 + 0xf) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x74,lVar1);
      *(undefined4 *)((int)puVar3 + 0x74) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x70,lVar1);
      *(undefined4 *)(puVar3 + 0xe) = uVar23;
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar35);
      auVar28 = vectorPermute(auVar38,auVar38,auVar46);
      auVar29 = vectorPermute(auVar38,auVar38,auVar49);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar27);
      auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar29 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar35);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar44,auVar35);
      auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar27,auVar43);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar27,auVar28,auVar29);
      auVar27 = vectorCompareEqualToFloatingPoint(auVar28,auVar28);
      auVar27 = vectorConditionalSelect(auVar29,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar27,auVar35);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar43,auVar35);
      auVar38 = vectorAddFloatingPoint(auVar47,auVar27);
      *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
      uVar2 = *(ushort *)((int)uVar15 + 0x12);
      puVar17 = &DAT_00808080 + (uint)uVar2 * 0x1000000;
      dVar19 = (double)fastfunc::FastIntToDouble((longlong)(short)uVar2 + 0x10);
      dVar19 = (double)(float)((double)((float)(dVar19 * dVar22) * *(float *)((int)uVar15 + 0x1c)) *
                              dVar21);
      if (dVar20 < dVar19) {
        puVar3[0x1e] = 1;
        *(undefined **)((int)puVar3 + 0xcc) = puVar17;
        *(undefined **)(puVar3 + 0x19) = puVar17;
        *(undefined **)((int)puVar3 + 0xc4) = puVar17;
        *(undefined **)(puVar3 + 0x18) = puVar17;
        uVar10 = GetEffectTex(0x13);
        puVar3[0x1f] = uVar10;
        *(undefined4 *)(puVar3 + 0x1a) = 0;
        *(undefined4 *)(puVar3 + 0x1c) = 0;
        *(undefined4 *)((int)puVar3 + 0xd4) = 0;
        *(undefined4 *)(puVar3 + 0x1b) = 0x3f800000;
        *(undefined4 *)(puVar3 + 0x1d) = 0x3f800000;
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        *(undefined4 *)((int)puVar3 + 0xdc) = 0;
        *(undefined4 *)((int)puVar3 + 0xe4) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xec) = 0x3f800000;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        puVar3[0x21] = 0;
        auVar29 = loadVectorLeftIndexed(lVar6,uVar12);
        auVar27 = ZEXT416(0);
        auVar47 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x24),auVar28);
        auVar27 = ZEXT416(3);
        auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar44,
                             auVar47);
        auVar28 = ZEXT416(2);
        auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x44),auVar47);
        auVar35 = vectorConditionalSelect(auVar44,auVar31,auVar30);
        auVar31 = vectorAddFloatingPoint(auVar31,auVar35);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar35 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar31 = vectorLogicalAnd(auVar31,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                           auVar27 << 0x60);
        auVar27 = ZEXT416(1);
        auVar40 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x42),auVar29);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x40),auVar27);
        auVar27._0_4_ = auVar40._0_4_ + auVar31._0_4_;
        auVar27._8_8_ = SUB168(*(undefined1 (*) [16])(puVar3 + 0x40),0);
        auVar27._4_4_ = auVar40._4_4_ + auVar31._4_4_;
        auVar35._0_8_ = auVar27._0_8_;
        auVar35._8_4_ = auVar40._8_4_ + auVar31._8_4_;
        auVar35._12_4_ = auVar40._12_4_ + auVar31._12_4_;
        auVar48 = vectorLogicalAnd(auVar31,auVar40);
        auVar27 = vectorLogicalAnd(auVar31,auVar28);
        auVar41 = vectorLogicalAnd(auVar35,auVar40);
        auVar34 = vectorCompareEqualToUnsignedWord(auVar48,auVar47);
        auVar31 = vectorCompareEqualToUnsignedWord(auVar27,auVar47);
        auVar28 = vectorLogicalAnd(auVar35,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar47);
        auVar35 = vectorCompareEqualToUnsignedWord(auVar28,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3e),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x3c));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3a),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x38));
        auVar40 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar47);
        auVar41 = vectorCompareEqualToUnsignedWord(auVar41,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x36));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar27,*(undefined1 (*) [16])(puVar3 + 0x34));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar43);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar29);
        auVar29 = vectorConditionalSelect(auVar28,auVar27,auVar34);
        auVar27 = vectorConditionalSelect(auVar28,auVar27,auVar41);
        auVar28 = vectorConditionalSelect(auVar30 ^ auVar29,auVar29,auVar31);
        auVar27 = vectorConditionalSelect(auVar30 ^ auVar27,auVar27,auVar35);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x48),auVar28,auVar47);
        lVar6 = 0x110;
        auVar29 = vectorConditionalSelect(auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x32));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar36,auVar47);
        auVar31 = vectorPermute(auVar29,auVar29,auVar46);
        auVar27 = auVar29 & (undefined1  [16])0xffffffff;
        auVar48 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar42 = vectorMultiplyAddFloatingPoint(auVar29,auVar39,auVar47);
        auVar41 = vectorPermute(auVar29,auVar29,auVar32);
        auVar37 = vectorPermute(auVar29,auVar29,auVar33);
        auVar40 = vectorMultiplyAddFloatingPoint(auVar48,auVar36,auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar39,auVar47);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x2c),auVar28);
        auVar28 = vectorPermute(auVar28,auVar28,auVar49);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x26),auVar42);
        auVar42 = vectorPermute(auVar42,auVar42,auVar49);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x30),auVar40);
        *(float *)(puVar3 + 0x22) = (float)dVar19;
        auVar28 = vectorAddFloatingPoint(auVar28,auVar35);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x2a),auVar27);
        auVar34 = vectorAddFloatingPoint(auVar42,auVar34);
        auVar35 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x2e),auVar31);
        *(float *)((int)puVar3 + 0x114) = (float)dVar19;
        *(float *)(puVar3 + 0x23) = (float)dVar19;
        *(float *)((int)puVar3 + 0x11c) = (float)dVar19;
        auVar27 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x28),auVar40);
        auVar28 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar29,
                             auVar47);
        auVar42 = vectorPermute(auVar35,auVar35,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29,
                             auVar47);
        auVar34 = vectorPermute(auVar35,auVar35,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar48,auVar35,auVar31);
        auVar29 = vectorPermute(auVar40,auVar40,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar27);
        auVar31 = vectorPermute(auVar40,auVar40,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar41,auVar42,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar41,auVar29,auVar27);
        auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar34,auVar28);
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar31,auVar27);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar28,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar31,auVar44,auVar47);
        auVar27 = vectorSubtractFloatingPoint(auVar38,auVar27);
        auVar29 = vectorSubtractFloatingPoint(auVar27,auVar28);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = auVar29 >> 0x40 & (undefined1  [16])0xffffffff;
        auVar29 = auVar29 >> 0x20 & (undefined1  [16])0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x80,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x10) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x84,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x84) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x88,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x11) = uVar23;
        auVar31 = vectorAddFloatingPoint(auVar38,auVar31);
        auVar27 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = auVar38 >> 0x40 & (undefined1  [16])0xffffffff;
        auVar29 = auVar38 >> 0x20 & (undefined1  [16])0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x90,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x12) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x94,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x94) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x98,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x13) = uVar23;
        iVar5 = EffectTexHeaders;
        auVar29 = vectorSubtractFloatingPoint(auVar31,auVar35);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = auVar29 >> 0x40 & (undefined1  [16])0xffffffff;
        auVar29 = auVar29 >> 0x20 & (undefined1  [16])0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xa0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x14) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xa4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xa4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xa8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x15) = uVar23;
        auVar27 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = auVar38 >> 0x40 & (undefined1  [16])0xffffffff;
        auVar29 = auVar38 >> 0x20 & (undefined1  [16])0xffffffff;
        *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xb0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x16) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xb4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xb4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xb8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x17) = uVar23;
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xac) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x9c) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x8c) = 0x3f800000;
        FastDrawQuad(uVar8 - 0x310,0,1,iVar5,9);
      }
    }
    pRVar4 = DL_Pass;
    iVar18 = iVar18 + 1;
    psVar16 = psVar16 + 0x10;
    uVar14 = uVar14 + 0x20;
    uVar13 = uVar13 + 0x20;
    uVar12 = uVar12 + 0x20;
    uVar15 = uVar15 + 0x20;
  } while (iVar18 < 0x20);
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  return;
}



//==== 000758cc  ns=draw  size=0x1e0
// sig: undefined DrawWaterPatch_A(void)
// callers(2): 00075fb0 draw::DrawWaterPatch; 00076580 draw::DrawWater
// callees(4): 00077c60 stub::STUB_00077c60; 00077c68 stub::STUB_00077c68; 000e9130 stub::STUB_000e9130; 000e9134 stub::STUB_000e9134

void draw::DrawWaterPatch_A(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    stub::STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        stub::STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          stub::STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        stub::STUB_00077c60(iVar4 + sVar2,&DAT_70002000,*(undefined2 *)(*param_1 + iVar8 + 4));
        stub::STUB_00077c68(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,iVar4 + sVar3,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}



//==== 00075aac  ns=draw  size=0x1f0
// sig: undefined DrawWaterPatch_B(void)
// callers(2): 00075fb0 draw::DrawWaterPatch; 00076580 draw::DrawWater
// callees(4): 00077c64 stub::STUB_00077c64; 00077c6c stub::STUB_00077c6c; 000e9130 stub::STUB_000e9130; 000e9134 stub::STUB_000e9134

void draw::DrawWaterPatch_B(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    stub::STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        stub::STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          stub::STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        stub::STUB_00077c64(iVar4 + sVar2,&DAT_70002000,iVar4 + sVar3,0x70003000,
                            *(undefined2 *)(*param_1 + iVar8 + 4));
        stub::STUB_00077c6c(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,0x70003000,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}



//==== 00075cc8  ns=draw  size=0x208
// sig: undefined AnimateWaveUVs(void)
// callers(1): 00076580 draw::DrawWater
// callees(0): 

void draw::AnimateWaveUVs(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short sVar14;
  short *psVar13;
  short *psVar15;
  int iVar16;
  
  sVar14 = *(short *)(param_1 + 1);
  iVar10 = *param_1;
  if (sVar14 != 0) {
    iVar11 = 0;
    psVar12 = &DAT_0095f240;
    fVar1 = (float)(longlong)(int)(worldUpdateTime & 0x3fff) * 6.28 * 6.1035156e-05 - 3.14;
    fVar2 = fVar1 + 1.5707963;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1;
    fVar7 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar3 * fVar3 * fVar1;
    fVar8 = fVar2 * fVar7;
    fVar6 = fVar3 * fVar5;
    if (0 < sVar14) {
      iVar9 = 0;
      do {
        iVar16 = 0;
        psVar15 = (short *)(*(int *)(iVar10 + iVar9) + (int)*(short *)(iVar10 + iVar9 + 10));
        psVar13 = psVar12;
        if (0 < *(short *)(iVar10 + iVar9 + 4)) {
          do {
            iVar10 = *param_1;
            psVar12 = psVar13 + 2;
            iVar16 = iVar16 + 1;
            *psVar15 = *psVar13 +
                       (short)(int)((fVar3 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
                                   4096.0) + 0x1000;
            psVar15[1] = psVar13[1] +
                         (short)(int)((fVar2 * fVar8 * 2.601887e-06 +
                                      fVar8 * -0.0001980741 +
                                      fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
                                     4096.0) + 0x1000;
            psVar13 = psVar13 + 2;
            psVar15 = psVar15 + 2;
          } while (iVar16 < *(short *)(iVar10 + iVar9 + 4));
          sVar14 = *(short *)(param_1 + 1);
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar11 < sVar14);
    }
  }
  return;
}



//==== 00075ed0  ns=draw  size=0xe0
// sig: undefined ???_Water_CopyPatchUVs(void)
// callers(0): 
// callees(0): 

void draw::____Water_CopyPatchUVs(int *param_1,undefined2 *param_2)

{
  int iVar1;
  short sVar3;
  undefined2 *puVar2;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  sVar3 = *(short *)(param_1 + 1);
  if ((sVar3 != 0) && (iVar7 = 0, 0 < sVar3)) {
    iVar4 = *param_1;
    iVar1 = 0;
    do {
      iVar5 = 0;
      puVar6 = (undefined2 *)(*(int *)(iVar4 + iVar1) + (int)*(short *)(iVar4 + iVar1 + 10));
      puVar2 = param_2;
      if (0 < *(short *)(iVar4 + iVar1 + 4)) {
        do {
          iVar4 = *param_1;
          iVar5 = iVar5 + 1;
          *puVar2 = *puVar6;
          puVar2[1] = puVar6[1];
          param_2 = puVar2 + 2;
          puVar6 = puVar6 + 2;
          puVar2 = puVar2 + 2;
        } while (iVar5 < *(short *)(iVar4 + iVar1 + 4));
        sVar3 = *(short *)(param_1 + 1);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar7 < sVar3);
  }
  return;
}



//==== 00075fb0  ns=draw  size=0x34
// sig: undefined DrawWaterPatch(void)
// callers(0): 
// callees(2): 000758cc draw::DrawWaterPatch_A; 00075aac draw::DrawWaterPatch_B

void draw::DrawWaterPatch(int param_1)

{
  if (*(short *)(param_1 + 6) == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  return;
}



//==== 00075ff0  ns=draw  size=0x338
// sig: undefined ???_Water_ComputeWaveGrid(void)
// callers(1): 00076458 draw::???_Water_InitPatches
// callees(0): 

void draw::____Water_ComputeWaveGrid(double param_1,double param_2,double param_3)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  short *psVar6;
  int in_r6;
  ulonglong in_r7;
  ulonglong uVar7;
  undefined4 *in_r8;
  undefined4 *in_r9;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  
  auVar18 = ZEXT416(0);
  auVar16 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  iVar4 = 0;
  auVar25._0_4_ = (float)param_2;
  auVar25._4_4_ = (float)param_2;
  auVar25._8_4_ = (float)param_2;
  auVar25._12_4_ = (float)param_2;
  uVar7 = 0;
  auVar18 = ZEXT416(8);
  auVar24 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19._0_4_ = (float)param_1;
  auVar19._4_4_ = (float)param_1;
  auVar19._8_4_ = (float)param_1;
  auVar19._12_4_ = (float)param_1;
  *(short *)((int)in_r9 + 6) = (short)in_r6;
  *(undefined2 *)(in_r9 + 1) = 1;
  *in_r9 = in_r8;
  *in_r8 = (int)in_r7;
  *(undefined2 *)(in_r8 + 1) = 0x100;
  *(undefined2 *)((int)in_r8 + 6) = 0xe1;
  *(undefined2 *)(in_r8 + 2) = 0;
  auVar29 = loadVectorLeftIndexed(0x30,0x75fe4);
  auVar18._0_4_ = (float)param_3;
  auVar18._4_4_ = (float)param_3;
  auVar18._8_4_ = (float)param_3;
  auVar18._12_4_ = (float)param_3;
  auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar29 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = vectorSplatHalfWord(auVar17,1);
  uVar5 = in_r7;
  auVar17 = auVar16;
  do {
    auVar20 = vectorSubtractUnsignedWordModulo(auVar17,auVar24);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    lVar9 = uVar5 + 2;
    lVar14 = 0x10;
    auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar29,auVar25);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar21 = vectorSplatHalfWord(auVar20,1);
    lVar15 = uVar5 + 4;
    uVar13 = uVar5;
    auVar20 = auVar16;
    do {
      auVar30 = vectorSubtractUnsignedWordModulo(auVar20,auVar24);
      auVar28._0_4_ = auVar20._0_4_ + 1;
      auVar28._8_8_ = auVar20._8_8_;
      auVar28._4_4_ = auVar20._4_4_ + 1;
      auVar31._0_8_ = auVar28._0_8_;
      auVar31._12_4_ = auVar20._12_4_;
      auVar31._8_4_ = auVar20._8_4_ + 1;
      auVar20._0_12_ = auVar31._0_12_;
      auVar20._12_4_ = auVar31._12_4_ + 1;
      auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar19);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorSplatHalfWord(auVar31,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar31,0,uVar13);
      *(undefined2 *)uVar13 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar21,0,lVar9);
      *(undefined2 *)lVar9 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar18,0,lVar15);
      *(undefined2 *)lVar15 = uVar1;
      lVar9 = lVar9 + 6;
      uVar5 = uVar13 + 6;
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + 6;
      uVar13 = uVar13 + 6;
    } while (lVar14 != 0);
    iVar4 = iVar4 + 1;
    auVar21._0_4_ = auVar17._0_4_ + 1;
    auVar21._8_8_ = auVar17._8_8_;
    auVar21._4_4_ = auVar17._4_4_ + 1;
    auVar30._0_8_ = auVar21._0_8_;
    auVar30._12_4_ = auVar17._12_4_;
    auVar30._8_4_ = auVar17._8_4_ + 1;
    auVar17._0_12_ = auVar30._0_12_;
    auVar17._12_4_ = auVar30._12_4_ + 1;
  } while (iVar4 < 0x10);
  sVar2 = (short)in_r7;
  iVar4 = 0;
  *(short *)((int)in_r8 + 10) = (short)uVar5 - sVar2;
  auVar18 = loadVectorLeftIndexed(4,0x75fe4);
  iVar11 = 0;
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar24 = auVar16;
  do {
    auVar19 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    iVar12 = 0;
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar25);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = vectorSplatHalfWord(auVar25,1);
    uVar13 = uVar5;
    auVar29 = auVar16;
    iVar10 = iVar11;
    do {
      auVar17 = vectorConvertFromSignedFixedPointWord(auVar29,0);
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      psVar6 = (short *)uVar5;
      if (in_r6 == 0) {
        if ((((iVar12 == 0) || (iVar4 == 0)) || (iVar12 == 0xf)) || (iVar4 == 0xf)) {
          *psVar6 = 0x6060;
          *(undefined2 *)((int)uVar13 + 2) = 0x8060;
          uVar5 = uVar13;
        }
        else {
          sVar3 = (short)iVar10 + (short)(iVar10 / 0x50) * -0x50;
          psVar6[1] = sVar3 + -0x7fd0;
          *psVar6 = sVar3 * 0x101 + 0x3030;
        }
      }
      else {
        auVar19 = vectorSplatHalfWord(auVar19,1);
        sVar3 = storeVectorElementHalfWordIndexed(auVar19,0,uVar5);
        *psVar6 = sVar3;
        sVar3 = storeVectorElementHalfWordIndexed(auVar25,2,uVar5);
        psVar6[1] = sVar3;
      }
      iVar12 = iVar12 + 1;
      auVar26._0_4_ = auVar29._0_4_ + 1;
      auVar26._8_8_ = auVar29._8_8_;
      auVar26._4_4_ = auVar29._4_4_ + 1;
      auVar27._0_8_ = auVar26._0_8_;
      auVar27._12_4_ = auVar29._12_4_;
      auVar27._8_4_ = auVar29._8_4_ + 1;
      auVar29._0_12_ = auVar27._0_12_;
      auVar29._12_4_ = auVar27._12_4_ + 1;
      uVar5 = uVar5 + 4;
      iVar10 = iVar10 + 5;
      uVar13 = uVar13 + 4;
    } while (iVar12 < 0x10);
    iVar4 = iVar4 + 1;
    auVar22._0_4_ = auVar24._0_4_ + 1;
    auVar22._8_8_ = auVar24._8_8_;
    auVar22._4_4_ = auVar24._4_4_ + 1;
    auVar23._0_8_ = auVar22._0_8_;
    auVar23._12_4_ = auVar24._12_4_;
    auVar23._8_4_ = auVar24._8_4_ + 1;
    auVar24._0_12_ = auVar23._0_12_;
    auVar24._12_4_ = auVar23._12_4_ + 1;
    iVar11 = iVar11 + 0x17;
  } while (iVar4 < 0x10);
  iVar4 = 0;
  *(short *)(in_r8 + 3) = (short)uVar5 - sVar2;
  do {
    lVar15 = 0xf;
    uVar13 = uVar7;
    uVar8 = uVar5;
    do {
      *(ushort *)uVar8 = (ushort)((uVar13 + 1 & 0xffffffff) << 8) | (ushort)uVar13 & 0xff;
      uVar5 = uVar8 + 4;
      ((ushort *)uVar8)[1] =
           (ushort)((uVar13 + 0x11 & 0xffffffff) << 8) | (ushort)uVar13 + 0x10 & 0xff;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 + 4;
    } while (lVar15 != 0);
    iVar4 = iVar4 + 1;
    uVar7 = uVar7 + 0x10;
  } while (iVar4 < 0xf);
  for (; (uVar5 & 0xf) != 0; uVar5 = uVar5 + 2) {
  }
  *(short *)((int)in_r8 + 0xe) = (short)uVar5 - sVar2;
  return;
}



//==== 00076328  ns=draw  size=0x128
// sig: undefined ???_Water_SetPassTextures(void)
// callers(0): 
// callees(2): 000685c4 draw::GetEffectTex; 004d676c FUN_004d676c

void draw::____Water_SetPassTextures(undefined8 param_1,undefined8 param_2)

{
  RenderingStep *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex();
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex(param_2);
  FUN_004d676c(pRVar1,1,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = DepthPass;
  iVar3 = GetEffectTex(param_1);
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  return;
}



//==== 00076458  ns=draw  size=0x128
// sig: undefined ???_Water_InitPatches(void)
// callers(0): 
// callees(1): 00075ff0 draw::???_Water_ComputeWaveGrid

void draw::____Water_InitPatches(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  ____Water_ComputeWaveGrid(0,0,0xc028000000000000);
  ____Water_ComputeWaveGrid(uVar9,uVar9,uVar9);
  puVar4 = &DAT_0095f240;
  if (DAT_0096366c != 0) {
    iVar3 = 0;
    iVar2 = (int)DAT_0096366c;
    piVar6 = DAT_00963668;
    if (0 < iVar2) {
      do {
        puVar8 = (undefined2 *)(*piVar6 + (int)*(short *)((int)piVar6 + 10));
        iVar5 = (int)*(short *)(piVar6 + 1);
        puVar7 = puVar4;
        if (0 < *(short *)(piVar6 + 1)) {
          do {
            iVar5 = iVar5 + -1;
            *puVar7 = *puVar8;
            puVar1 = puVar8 + 1;
            puVar8 = puVar8 + 2;
            puVar4 = puVar7 + 2;
            puVar7[1] = *puVar1;
            puVar7 = puVar7 + 2;
          } while (0 < iVar5);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar3 < iVar2);
    }
  }
  return;
}



//==== 00076580  ns=draw  size=0x344
// sig: undefined DrawWater(void)
// callers(0): 
// callees(10): 00066088 draw::ComposeCameraMatrix; 000668d0 draw::UpdateViewContext; 000685c4 draw::GetEffectTex; 000758cc draw::DrawWaterPatch_A; 00075aac draw::DrawWaterPatch_B; 00075cc8 draw::AnimateWaveUVs; 00174f80 vuchain::SetGSReg; 004d676c FUN_004d676c; 0050300c FUN_0050300c; 00503024 FUN_00503024

void draw::DrawWater(void)

{
  uint uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined1 uVar6;
  int iVar5;
  undefined8 uVar4;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = worldUpdateTime / 0x32;
  uVar7 = uVar1 + 1;
  iVar8 = uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * -4 + 0x28;
  AnimateWaveUVs(&DAT_00963668);
  dVar9 = (double)ViewContext.fogNearDist;
  dVar10 = (double)ViewContext.fogFarDist;
  dVar11 = (double)ViewContext.fogNearIntensity;
  dVar12 = (double)ViewContext.fogFarIntensity;
  vuchain::SetGSReg(10,FUN_00606060);
  ViewContext.fogFarDist = 143360.0;
  ViewContext.fogNearDist = 10000.0;
  ViewContext.fogNearIntensity = 160.0;
  ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  ComposeCameraMatrix();
  *DAT_00e5aa58 = 5;
  DAT_00e5aa58[1] = 0x80;
  DAT_00e5aa58[2] = 0;
  uVar6 = FUN_0050300c(5,0);
  DAT_00e5aa58[3] = uVar6;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  if (DAT_00961656 == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(uVar1 + (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * -4
                       + 0x29);
  FUN_004d676c(pRVar2,1,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = DepthPass;
  iVar8 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar8 * 0x24,1,1);
  *DAT_00e5aa58 = 5;
  DAT_00e5aa58[1] = 0xd0;
  DAT_00e5aa58[2] = 0;
  uVar6 = FUN_0050300c(5,0);
  DAT_00e5aa58[3] = uVar6;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  if (DAT_0096366e == 0) {
    DrawWaterPatch_A(&DAT_00963668);
  }
  else {
    DrawWaterPatch_B(&DAT_00963668);
  }
  ViewContext.fogNearDist = (float)dVar9;
  ViewContext.fogFarDist = (float)dVar10;
  ViewContext.fogNearIntensity = (float)dVar11;
  ViewContext.fogFarIntensity = (float)dVar12;
  uVar4 = FUN_00503024(ViewContext.fogR,ViewContext.fogG,ViewContext.fogB);
  vuchain::SetGSReg(10,uVar4);
  UpdateViewContext();
  ComposeCameraMatrix();
  return;
}



//==== 000768e8  ns=draw  size=0x748
// sig: undefined ???_Draw_EffectStrip_M401(void)
// callers(1): 00362770 mobyupdate_helpers::M401_00362770
// callees(13): 000685c4 draw::GetEffectTex; 00174f80 vuchain::SetGSReg; 00502e70 FUN_00502e70; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f74 stub::FUN_00502f74_RET_0; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0; 00502fec FUN_00502fec; 00502ffc stub::VU1_addGSregister; 0050300c FUN_0050300c; 00503034 FUN_00503034

void draw::____Draw_EffectStrip_M401(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar16 = 1.0;
  dVar14 = (double)(GameCamera.mtx0.v2.z + GameCamera.mtx0.v3.z);
  uVar5 = GetEffectTex(param_2);
  vuchain::SetGSReg(0x18,uVar5);
  uVar5 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar5);
  uVar5 = FUN_00502f08(0,1,0,0,0,0);
  vuchain::SetGSReg(6,uVar5);
  uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar5);
  iVar10 = 0;
  *DAT_00e5aa58 = 0x7d;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  uVar6 = FUN_0050300c(0x7d,0);
  DAT_00e5aa58[3] = uVar6;
  puVar4 = DAT_00e5aa58;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  uVar5 = FUN_00502ea0(1,0,0,0,0,3);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = 0xeeee;
  uVar5 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = 0x16;
  uVar5 = stub::VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(undefined8 *)(puVar4 + 0x38) = 0x21;
  uVar5 = FUN_00502e70(0xf,0,1,0,1,0,0,0);
  *(undefined8 *)(puVar4 + 0x40) = uVar5;
  *(undefined8 *)(puVar4 + 0x48) = 0xe;
  uVar5 = FUN_00502ea0(0x30,1,0,0,1,5);
  *(undefined8 *)(puVar4 + 0x50) = uVar5;
  dVar19 = (double)(float)(dVar16 - dVar14);
  uVar3 = worldUpdateTime >> 3;
  *(undefined8 *)(puVar4 + 0x58) = 0x42421;
  uVar12 = 10;
  iVar7 = 0;
  dVar17 = 0.00390625;
  dVar18 = 0.0625;
  puVar11 = (undefined8 *)(puVar4 + 0x60);
  dVar15 = -(double)((GameCamera.rot.radius + 3.14) * 4.0 * 0.15923566 - 4.0);
  dVar13 = (double)(float)((double)(longlong)(int)(uVar3 & 0xff) * 0.00390625 + dVar15);
  iVar8 = 0x50;
  do {
    uVar5 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3a83126f);
    *puVar11 = uVar5;
    dVar2 = dVar19 * 0.0010000000474974513;
    dVar1 = (double)(float)((double)(longlong)iVar7 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar7 * dVar18 + dVar13) * 0.001,
                         -(float)(dVar14 * 0.0010000000474974513));
    *(undefined8 *)(puVar4 + iVar8 + 0x18) = uVar5;
    uVar5 = FUN_00502fec(iVar10 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar8 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.001,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar8 + 0x28) = uVar5;
    uVar5 = FUN_00502fec(iVar10 + 0x7200,0x8df0,16000);
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 5;
    puVar11 = puVar11 + 5;
    *(undefined8 *)(puVar4 + iVar8 + 0x30) = uVar5;
    iVar10 = iVar10 + 0x200;
    iVar8 = iVar8 + 0x28;
  } while (iVar7 < 0x10);
  iVar7 = 0;
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 4) + 0x5aU & 0xff) *
                                           dVar17 + 1.5) + dVar15);
  do {
    uVar5 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3ada740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar2 = dVar19 * 0.0016666667070239782;
    dVar1 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0016666667,
                         -(float)(dVar14 * 0.0016666667070239782));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = FUN_00502fec(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.0016666667,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = FUN_00502fec(iVar7 + 0x7200,0x8df0,0x2580);
    iVar8 = iVar8 + 1;
    uVar12 = uVar12 + 5;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar7 = 0;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 5) + 0xb4U & 0xff) *
                                           dVar17 + 3.0) + dVar15);
  do {
    uVar5 = stub::FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3b5a740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar17 = dVar19 * 0.0033333334140479565;
    dVar15 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0033333334,
                         -(float)(dVar14 * 0.0033333334140479565));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = FUN_00502fec(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar15 * 0.0033333334,(float)dVar17);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = FUN_00502fec(iVar7 + 0x7200,0x8df0,0x12c0);
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  DAT_00e5aa58 = DAT_00e5aa58 + 2000;
  return;
}



//==== 00077048  ns=draw  size=0x454
// sig: undefined DrawsFlowingLava(void)
// callers(1): 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean
// callees(5): 00071170 stub::STUB_00071170; 00073de0 draw::DrawLavaStrips; 004d5fe4 idol_draw::DrawDepth; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd

void draw::DrawsFlowingLava
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  RenderingStep *pRVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  
  stub::STUB_00071170();
  idol_draw::PackCmd(0,1,2,1,0x80);
  idol_draw::PackCmd(0,1,2,1,0x60);
  iVar10 = 0;
  lVar19 = 0x100;
  uVar7 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  do {
    uVar12 = uVar7 & 0xf;
    uVar7 = uVar7 + 0x89;
    uVar12 = uVar12 * 0x20200 - 0x7f878f90;
    puVar2 = (uint *)(DAT_00902ec8 + iVar10);
    iVar10 = iVar10 + 1;
    *puVar2 = (uint)(byte)(uVar12 >> 0x18) | (uint)uVar12 >> 8 & 0xff00 |
              (uint)((uVar12 & 0xffffffff) << 8) & 0xff0000 | (uint)((uVar12 & 0xffffffff) << 0x18);
    pRVar6 = ForwardPass;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(ForwardPass,0);
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(DepthPass,0);
  uVar18 = 0;
  iVar10 = param_2;
  if (0 < param_3) {
    do {
      iVar8 = fastfunc::FastCheckBsphereInView(0x4070000000000000,iVar10);
      if ((iVar8 != -1) && (iVar8 = 0, 0 < *(int *)(iVar10 + 0x1c))) {
        iVar16 = 0;
        do {
          iVar5 = (int)(((ulonglong)uVar18 & 0x3ffffff) << 6);
          psVar3 = (short *)(iVar5 + param_2 + 0x20 + iVar16);
          sVar15 = *psVar3;
          iVar17 = (int)*(short *)(iVar5 + param_2 + 0x22 + iVar16) - (int)sVar15;
          puVar9 = (undefined4 *)(*(int *)(iVar5 + param_2 + 0x14) + sVar15 * 8);
          puVar11 = (undefined4 *)(DAT_00902ec8 + 0x1000);
          puVar13 = (undefined4 *)(DAT_00902ec8 + 0x2000);
          iVar14 = iVar17;
          if (0 < iVar17) {
            do {
              uVar1 = *puVar9;
              *puVar13 = uVar1;
              *puVar11 = uVar1;
              iVar14 = iVar14 + -1;
              puVar11[1] = (float)((double)(float)puVar9[1] + dVar21);
              puVar13[1] = (float)((double)(float)puVar9[1] + dVar20);
              puVar13 = puVar13 + 2;
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 2;
            } while (0 < iVar14);
            sVar15 = *psVar3;
          }
          piVar4 = (int *)(iVar5 + param_2 + 0x10);
          DrawLavaStrips(param_1,iVar17,*piVar4 + sVar15 * 0xc,DAT_00902ec8,DAT_00902ec8 + 0x1000,
                         DAT_00902ec8 + 0x2000,param_4,param_5,0);
          DrawLavaStrips(param_1,iVar17,*piVar4 + *psVar3 * 0xc,DAT_00902ec8,DAT_00902ec8 + 0x1000,
                         DAT_00902ec8 + 0x2000,param_4,param_5,0);
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 2;
        } while (iVar8 < *(int *)(iVar5 + param_2 + 0x1c));
      }
      uVar18 = uVar18 + 1;
      iVar10 = iVar10 + 0x40;
    } while ((int)uVar18 < param_3);
  }
  pRVar6 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  return;
}



//==== 000774b8  ns=draw  size=0x318
// sig: undefined ???_Draw_ScrollingTexStrips(void)
// callers(0): 
// callees(4): 00071170 stub::STUB_00071170; 000731c8 draw::DrawTexturedStrips; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd

void draw::____Draw_ScrollingTexStrips
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  idol_draw::PackCmd(0,1,2,1,0x20);
  stub::STUB_00071170();
  iVar17 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x1ff) * 0.001953125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  dVar19 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  if (0 < param_2) {
    piVar14 = (int *)(param_1 + 0x14);
    piVar13 = (int *)(param_1 + 0x10);
    piVar12 = (int *)(param_1 + 0x18);
    piVar11 = (int *)(param_1 + 0x1c);
    psVar10 = (short *)(param_1 + 0x22);
    uVar18 = 0x4070000000000000;
    psVar9 = (short *)(param_1 + 0x20);
    do {
      iVar2 = fastfunc::FastCheckBsphereInView(uVar18,param_1);
      if ((iVar2 != -1) &&
         (iVar2 = 0, psVar15 = psVar9, psVar16 = psVar10, 0 < *(int *)(param_1 + 0x1c))) {
        do {
          sVar8 = *psVar15;
          iVar3 = (int)*psVar16 - (int)sVar8;
          pfVar4 = (float *)(*piVar14 + sVar8 * 8);
          pfVar6 = (float *)&DAT_70002000;
          pfVar5 = (float *)&DAT_70001000;
          iVar7 = iVar3;
          if (0 < iVar3) {
            do {
              iVar7 = iVar7 + -1;
              *pfVar5 = (float)((double)*pfVar4 + dVar19);
              *pfVar6 = (float)((double)*pfVar4 - dVar19);
              pfVar5[1] = (float)((double)pfVar4[1] + dVar21);
              pfVar6[1] = (float)((double)pfVar4[1] + dVar20);
              pfVar5 = pfVar5 + 2;
              pfVar6 = pfVar6 + 2;
              pfVar4 = pfVar4 + 2;
            } while (0 < iVar7);
            sVar8 = *psVar15;
          }
          DrawTexturedStrips(iVar3,*piVar13 + sVar8 * 0xc,*piVar12 + sVar8 * 4,
                             (ulonglong)DAT_00902ec8 + 0x1000,(ulonglong)DAT_00902ec8 + 0x2000,
                             param_3,param_4,uVar1);
          iVar2 = iVar2 + 1;
          psVar15 = psVar15 + 1;
          psVar16 = psVar16 + 1;
        } while (iVar2 < *piVar11);
      }
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 0x10;
      param_1 = param_1 + 0x40;
      piVar13 = piVar13 + 0x10;
      piVar12 = piVar12 + 0x10;
      piVar11 = piVar11 + 0x10;
      psVar10 = psVar10 + 0x20;
      psVar9 = psVar9 + 0x20;
    } while (iVar17 < param_2);
  }
  return;
}



//==== 000777d0  ns=draw  size=0x48c
// sig: undefined ???_Draw_InitGsRegPresets_777d0(void)
// callers(0): 
// callees(6): 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void draw::____Draw_InitGsRegPresets_777d0(void)

{
  DAT_0071f28c = 0x10000;
  DAT_0071f080 = FUN_00502ea0(1,1,0,0,0,4);
  DAT_0071f090 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f0a0 = FUN_00502f08(1,1,0,0,0,0);
  DAT_0071f0b0 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0071f0c0 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f0d0 = FUN_00502ea0(1,1,0,0,0,4);
  DAT_0071f0e0 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f0f0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f100 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  DAT_0071f110 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f120 = FUN_00502ea0(1,1,0,0,0,8);
  DAT_0071f130 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f140 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f150 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f160 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f170 = idol_draw::PackCmd(0,1,2,1,0x80);
  DAT_0071f180 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f190 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f1a0 = idol_draw::PackCmd(0,1,2,1,0x60);
  DAT_0071f1b0 = FUN_00502ea0(1,1,0,0,0,8);
  DAT_0071f1c0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1d0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1e0 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f1f0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f200 = idol_draw::PackCmd(0,1,2,1,0x20);
  DAT_0071f210 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f220 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f230 = idol_draw::PackCmd(0,1,2,1,0x20);
  return;
}



//==== 00077c60  ns=stub  size=0x4
// sig: undefined STUB_00077c60(void)
// callers(1): 000758cc draw::DrawWaterPatch_A
// callees(0): 

void stub::STUB_00077c60(void)

{
  return;
}



//==== 00077c64  ns=stub  size=0x4
// sig: undefined STUB_00077c64(void)
// callers(1): 00075aac draw::DrawWaterPatch_B
// callees(0): 

void stub::STUB_00077c64(void)

{
  return;
}



//==== 00077c68  ns=stub  size=0x4
// sig: undefined STUB_00077c68(void)
// callers(1): 000758cc draw::DrawWaterPatch_A
// callees(0): 

void stub::STUB_00077c68(void)

{
  return;
}



//==== 00077c6c  ns=stub  size=0x4
// sig: undefined STUB_00077c6c(void)
// callers(1): 00075aac draw::DrawWaterPatch_B
// callees(0): 

void stub::STUB_00077c6c(void)

{
  return;
}



//==== 00077c88  ns=draw  size=0x410
// sig: undefined DrawColorGradientStrip(void)
// callers(2): 001942f4 mobyupdate_helpers::M1038_001942f4; 001d64b0 mobyupdate_helpers::M1124_001d64b0
// callees(3): 00074150 draw::FastDrawStripColor; 004fe098 idol::AllocateMemAlign; 005027bc fastfunc::FastLerpColor

void draw::DrawColorGradientStrip(int *param_1,float *param_2)

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
  int iVar18;
  float *pfVar20;
  ulonglong uVar19;
  int iVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  pfVar20 = (float *)idol::AllocateMemAlign
                               (FrameHeap,
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 6) +
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 7),0x10);
  iVar21 = param_1[1];
  iVar25 = 0;
  dVar29 = 1.0;
  dVar28 = -0.05000000074505806;
  dVar30 = 0.05000000074505806;
  dVar31 = (double)(float)param_1[7];
  iVar26 = 0;
  dVar32 = (double)(float)(1.0 / (double)(longlong)(*param_1 - iVar21));
  dVar33 = (double)(float)(1.0 / (double)(longlong)iVar21);
  do {
    iVar18 = *(int *)(param_1[2] + iVar26);
    if (iVar21 < iVar18) {
      dVar27 = (double)(float)((double)(longlong)(iVar18 - iVar21) * dVar32);
    }
    else {
      dVar27 = -(double)(float)((double)(longlong)iVar18 * dVar33 - dVar29);
    }
    uVar19 = fastfunc::FastLerpColor(dVar27,param_1[3],param_1[4]);
    iVar21 = 0;
    fVar1 = 255.0;
    fVar3 = (float)(uVar19 & 0xff) * 2.0;
    fVar22 = (float)((uVar19 << 0x20) >> 0x28 & 0xff) * 2.0;
    if (255.0 - fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    fVar2 = (float)((uVar19 << 0x20) >> 0x30 & 0xff) * 2.0;
    if (255.0 - fVar22 < 0.0) {
      fVar22 = fVar1;
    }
    if (255.0 - fVar2 < 0.0) {
      fVar2 = fVar1;
    }
    fVar5 = (float)((uVar19 << 0x20) >> 0x38) + 0.5;
    fVar4 = fVar3 + 0.5;
    if (255.0 - (fVar3 + 0.5) < 0.0) {
      fVar4 = fVar1;
    }
    fVar3 = (float)param_1[8];
    uVar19 = (ulonglong)(uint)param_1[5];
    if (255.0 - fVar5 < 0.0) {
      fVar5 = fVar1;
    }
    fVar6 = fVar22 + 0.5;
    if (255.0 - (fVar22 + 0.5) < 0.0) {
      fVar6 = fVar1;
    }
    fVar22 = fVar2 + 0.5;
    if (255.0 - (fVar2 + 0.5) < 0.0) {
      fVar22 = fVar1;
    }
    fVar22 = (float)((int)fVar5 | (int)fVar22 << 8 | (int)fVar6 << 0x10 | (int)fVar4 << 0x18);
    pfVar23 = pfVar20;
    pfVar24 = pfVar20;
    if (0 < param_1[5]) {
      do {
        fVar4 = param_2[4];
        fVar5 = param_2[5];
        pfVar24 = (float *)(param_1[6] + ((int)uVar19 * iVar25 + iVar21) * 0x10);
        fVar6 = *param_2;
        fVar7 = param_2[6];
        fVar3 = (float)((double)fVar3 + dVar31);
        iVar21 = iVar21 + 1;
        fVar8 = pfVar24[1];
        fVar9 = *pfVar24;
        fVar10 = param_2[0xc];
        fVar11 = param_2[1];
        fVar1 = (float)((double)pfVar24[2] + dVar28);
        fVar12 = param_2[0xd];
        fVar13 = param_2[2];
        fVar2 = (float)((double)pfVar24[2] + dVar30);
        fVar14 = param_2[8];
        fVar15 = param_2[0xe];
        fVar16 = param_2[9];
        fVar17 = param_2[10];
        pfVar23[3] = fVar3;
        pfVar23[4] = 0.0;
        pfVar23[5] = fVar22;
        *pfVar23 = fVar4 * fVar8 + fVar14 * fVar1 + fVar6 * fVar9 + fVar10;
        pfVar23[1] = fVar5 * fVar8 + fVar16 * fVar1 + fVar11 * fVar9 + fVar12;
        pfVar23[2] = fVar7 * fVar8 + fVar17 * fVar1 + fVar13 * fVar9 + fVar15;
        pfVar23[6] = fVar14 * fVar2 + fVar6 * fVar9 + fVar4 * fVar8 + fVar10;
        pfVar24 = pfVar23 + 0xc;
        pfVar23[7] = fVar16 * fVar2 + fVar11 * fVar9 + fVar5 * fVar8 + fVar12;
        pfVar23[8] = fVar17 * fVar2 + fVar13 * fVar9 + fVar7 * fVar8 + fVar15;
        pfVar23[9] = fVar3;
        pfVar23[10] = 1.0;
        pfVar23[0xb] = fVar22;
        uVar19 = (ulonglong)(uint)param_1[5];
        pfVar23 = pfVar24;
      } while (iVar21 < param_1[5]);
    }
    FastDrawStripColor((int)(uVar19 << 1),pfVar20,9);
    iVar25 = iVar25 + 1;
    iVar21 = param_1[1];
    iVar26 = iVar26 + 4;
    pfVar20 = pfVar24;
  } while (iVar25 < 4);
  return;
}



//==== 00078098  ns=draw  size=0x5c
// sig: undefined SetFrameBufferInfo(void)
// callers(2): 00065670 draw::ResetFrameBufferInfo; 000656b8 draw::ResetFrameBufferForCutscene
// callees(0): 

void draw::SetFrameBufferInfo
               (short param_1,short param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
               ,undefined2 param_6)

{
  DAT_00966b84 = param_3;
  DAT_00966bc0 = &DAT_00966b40;
  DAT_00966b9c = 0;
  DAT_00966b86 = param_4;
  DAT_00966b88 = 0x12;
  DAT_00966b94 = param_5;
  DAT_00966b96 = param_6;
  g_FrameBufWidth = param_1;
  g_FrameBufHeight = param_2;
  DAT_00966b80 = 0x12;
  DAT_00966b90 = 0x12;
  DAT_00966b98 = 0x24;
  return;
}



//==== 000780f4  ns=stub  size=0x4
// sig: undefined STUB_000780f4(void)
// callers(11): 00011648 boot::LoadGameplay; 00012ec8 boot::GameStart; 00062764 debug::SetDebugGameMode; 000627d0 debug::UpdateDebugSelections; 000dcf58 loaders::NAVG_LoadFile; 00164c58 space::DoSpaceTransition; 002ae3a8 mobyupdate_helpers::M172_002ae3a8; 002ae4d0 mobyupdate_helpers::M172_002ae4d0; 002ae5d8 FUN_002ae5d8; 002ae9e0 FUN_002ae9e0; 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(0): 

void stub::STUB_000780f4(void)

{
  return;
}



//==== 000780f8  ns=stub  size=0x4
// sig: undefined STUB_000780f8(void)
// callers(2): 00012ec8 boot::GameStart; 000e0e60 main::startLevel
// callees(0): 

void stub::STUB_000780f8(void)

{
  return;
}



//==== 000780fc  ns=stub  size=0x4
// sig: undefined STUB_000780fc(void)
// callers(5): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00071ac0 draw::ResetHUDPass; 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_000780fc(void)

{
  return;
}



//==== 00078100  ns=stub  size=0x4
// sig: undefined STUB_00078100(void)
// callers(7): 00012ec8 boot::GameStart; 00063e68 debug::DrawDebugMenu; 0006c494 draw::SetupDefaultDrawMovie; 0006c4d8 draw::SetupDefaultDrawFreeze; 0013ca68 pause::DrawPauseMenu; 0016114c space::TransitionDraw_Space; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_00078100(void)

{
  return;
}



//==== 00078104  ns=stub  size=0x4
// sig: undefined STUB_00078104(void)
// callers(4): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00078104(void)

{
  return;
}



//==== 00078108  ns=draw  size=0x28
// sig: void SetFrameBufferTexLog2Size(int log2w, int log2h, int zbuf)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void draw::SetFrameBufferTexLog2Size(int log2w,int log2h,int zbuf)

{
  DAT_00966b92 = (short)(zbuf >> 0xd);
  DAT_00966b8c = (short)(1 << (log2w & 0x3fU));
  DAT_00966b8e = (short)(1 << (log2h & 0x3fU));
  return;
}



//==== 00078130  ns=stub  size=0x4
// sig: undefined STUB_00078130(void)
// callers(0): 
// callees(0): 

void stub::STUB_00078130(void)

{
  return;
}



//==== 00078134  ns=stub  size=0x4
// sig: undefined STUB_00078134(void)
// callers(4): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00078134(void)

{
  return;
}



//==== 00078138  ns=stub  size=0x4
// sig: undefined STUB_00078138(void)
// callers(2): 00172c40 vendor::Vendor_HudUpdate; 00173b60 vendor::Vendor_DrawScreen
// callees(0): 

void stub::STUB_00078138(void)

{
  return;
}



//==== 0007813c  ns=stub  size=0x4
// sig: undefined STUB_0007813c(void)
// callers(8): 0016fc10 vendor::Vendor_DrawScrollText; 0016fe20 vendor::DrawVendorDude; 0017007c vendor::DrawWeaponIcons; 00170490 vendor::DrawWeaponStrings; 00170cf0 vendor::DrawBuyButton; 00170fd0 vendor::DrawExitButton; 001711a8 vendor::Vendor_DrawItemInfo; 00172c40 vendor::Vendor_HudUpdate
// callees(0): 

void stub::STUB_0007813c(void)

{
  return;
}



//==== 00078140  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_FREEZE(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_FREEZE(void)

{
  DAT_0071f30c = 0x10000;
  return;
}



//==== 00078158  ns=freeze  size=0x14
// sig: gameMode_t GetFreezePrevGameMode(void)
// callers(1): 0006c4d8 draw::SetupDefaultDrawFreeze
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

gameMode_t freeze::GetFreezePrevGameMode(void)

{
  return g_freezePrevGameMode;
}



//==== 00078178  ns=freeze  size=0x334
// sig: void DisplayPrompt(int dialog, int arg, int option)
// callers(10): 000a7968 hero::Hero_UpdateHoverboardRace; 000e0e60 main::startLevel; 0013d8a0 pause::FrontEnd_UpdateMenu; 00141408 pause::UpdatePauseMenu; 0014a460 pause::ConfirmDialog_Update; 0014c370 pause::ShowScreenAfterDrekDefeat; 0014dfa0 pause::SaveGame_Update; 0014e3ec pause::SaveLoad_Update2; 0014e6c0 pause::LoadGame_Update; 00166fb0 update::UpdateGameplay
// callees(4): 0007b24c help::Help_AddToLog; 0007b740 help::help_msg_string_by_index; 0011ce20 music::music_Pause; 0060bc8c FUN_0060bc8c
// strings: 00078258: '8`OnH' (raw) | 000782c4: '8`R)H' (raw) | 000782a4: '8`RJH' (raw) | 00078300: '8`N+H' (raw)

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freeze::DisplayPrompt(int dialog,int arg,int option)

{
  gameMode_t gVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  gVar1 = g_gameMode;
  g_freezeOption = option;
  if (g_gameMode != GAME_MODE_PAUSE) {
    FUN_0060bc8c(0x1d);
    music::music_Pause(0);
    gVar1 = g_gameMode;
  }
  g_gameMode = GAME_MODE_FREEZE;
  g_freezeDelay = 0;
  g_freezeDialogType = dialog;
  g_freezePrevGameMode = gVar1;
  g_freezeArg = arg;
  if (dialog < 4) {
    if (0 < dialog) {
      if (1 < dialog) {
        if (2 < dialog) {
          auVar2 = ZEXT416(0xffffffff);
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
          auVar2 = loadVectorLeftIndexed(in_LR,0x7816c);
          auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar3 = vectorMultiplyAddFloatingPoint
                             (auVar5,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar3);
          auVar2 = ZEXT416(0xffffffff);
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          auVar4 = vectorShiftLeftIntegerWord(auVar2,auVar2);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          g_freezeTimer = storeVectorElementWordIndexed(auVar2,4,0x963670);
          g_freezeOpenAnim2 = storeVectorElementWordIndexed(auVar2,0x24,0x963670);
          auVar2 = loadVectorLeftIndexed(4,0x7816c);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar2 = vectorMultiplyAddFloatingPoint
                             (auVar5,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar4);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          g_freezeDelay =
               storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x2c,0x963670);
          DAT_0071fad4 = 3;
          g_freezeOpenAnim = -1;
          g_gameMode = GAME_MODE_FREEZE;
          return;
        }
        DAT_00963678 = help::help_msg_string_by_index(STR_CONTINUE_2);
        g_freezeTimer = 0;
        DAT_0096367c = 0;
        return;
      }
LAB_000782c4:
      DAT_00963678 = help::help_msg_string_by_index(STR_QUIT);
      DAT_0096367c = help::help_msg_string_by_index(STR_EXIT);
      DAT_00963680 = help::help_msg_string_by_index(STR_CONTINUE_2);
      g_freezeTimer = 0;
      return;
    }
    if (-1 < dialog) {
      DAT_00963678 = help::help_msg_string_by_index(STR_QUIT_RACE);
      DAT_0096367c = help::help_msg_string_by_index(STR_QUIT_2);
      DAT_00963680 = help::help_msg_string_by_index(STR_CONTINUE);
      g_freezeTimer = 0;
      g_freezeState = 0;
      g_freezeOpenAnim = 0;
      g_freezeOpenAnim2 = 0;
      DAT_00963698 = 0;
      return;
    }
  }
  else {
    if (dialog < 7) {
      if (4 < dialog) {
        if (5 < dialog) {
          auVar2 = ZEXT416(0xffffffff);
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
          auVar2 = loadVectorLeftIndexed(in_LR,0x7816c);
          auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar2 = vectorMultiplyAddFloatingPoint
                             (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar3);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
          auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
          g_freezeTimer =
               storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,4,0x963670);
          g_freezeState = 0;
          g_freezeDelay = 0;
          g_gameMode = GAME_MODE_FREEZE;
          return;
        }
        help::Help_AddToLog(0x4e2b);
        auVar2 = ZEXT416(0xffffffff);
        auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
        auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
        auVar2 = loadVectorLeftIndexed(in_LR,0x7816c);
        auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar2 = vectorMultiplyAddFloatingPoint
                           (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3)
        ;
        auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
        auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
        g_freezeTimer = storeVectorElementWordIndexed(auVar2,4,0x963670);
        g_freezeOpenAnim2 = storeVectorElementWordIndexed(auVar2,0x24,0x963670);
        g_freezeOpenAnim = 0;
        return;
      }
      goto LAB_000782c4;
    }
    if (dialog < 9) {
      auVar2 = ZEXT416(0xffffffff);
      auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
      auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
      auVar2 = loadVectorLeftIndexed(in_LR,0x7816c);
      auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar2 = vectorMultiplyAddFloatingPoint
                         (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
      auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
      auVar2 = auVar2 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
      g_freezeTimer = storeVectorElementWordIndexed(auVar2,4,0x963670);
      g_freezeOpenAnim2 = storeVectorElementWordIndexed(auVar2,0x24,0x963670);
      g_freezeOpenAnim = -1;
      g_freezeDelay = 0;
      g_gameMode = GAME_MODE_FREEZE;
      return;
    }
    if (dialog < 10) {
      g_freezeDelay = 1;
      g_gameMode = GAME_MODE_FREEZE;
      return;
    }
  }
  g_gameMode = GAME_MODE_FREEZE;
  g_freezeDelay = 0;
  DAT_00963680 = 0;
  DAT_0096367c = 0;
  DAT_00963678 = 0;
  g_freezeTimer = 0x78;
  return;
}



//==== 000784e8  ns=freeze  size=0x1620
// sig: void DrawDialogText(void)
// callers(2): 00010c70 boot::FrontEnd_Draw; 0006c4d8 draw::SetupDefaultDrawFreeze
// callees(16): 000685c4 draw::GetEffectTex; 00069db8 draw::FontPrintOptWestern; 0006a510 draw::FontPrintMediumOpt; 0006a718 draw::DrawRoundedRect; 0006b5dc draw::DrawScreenOverlay; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006f0a0 draw::DrawTextBox; 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005cc8d8 libc::strcpy; 005cccec libc::strcpy; 005cd2a8 libc::snprintf
// strings: 00078c24: '8`RNH' (raw) | 00078c4c: '8`RKH' (raw) | 00078d4c: '8`RJH' (raw) | 00652018: '%s %s' | 00652028: '%d:%02d:%02d'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freeze::DrawDialogText(void)

{
  short sVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 color;
  undefined8 uVar7;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 uVar8;
  short sVar18;
  byte *pbVar19;
  StringId SVar20;
  byte in_cr6;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  char acStack_2b8 [64];
  byte local_278 [2];
  char local_276 [510];
  longlong local_78;
  
  draw::DrawScreenOverlay(0,0,0,0x30);
  if (g_freezeDelay != 0) {
    return;
  }
  stub::STUB_0006d704(0);
  if (g_freezeDialogType != 9) {
    if (g_freezeDialogType == 8) {
      if (0 < g_freezeOpenAnim) {
        uVar8 = help::help_msg_string_by_index
                          ((int)((LZCOUNT(-g_freezeOption) << 0x3a) >> 0x3f) +
                           STR_SAVE_FAILED_PLEASE_CHECK_0x4FBD);
        SVar20 = (StringId)((LZCOUNT(-g_freezeTimer) << 0x3a) >> 0x3f) & STR_CONTINUE_2;
        draw::FontPrintMediumOpt(local_2e8,0,uVar8,0xffffffffffffffff);
        sVar1 = (short)(draw::g_ScreenHeight + -0x28 >> 1);
        sVar18 = sVar1 + 0x28;
        dVar23 = 30.5;
        dVar22 = 1.0;
        dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        draw::DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        color = fastfunc::FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        draw::FontPrintMediumOpt(local_2e8,color,uVar8,0xffffffffffffffff);
        local_78 = (longlong)g_freezeOpenAnim2;
        uVar8 = fastfunc::FastLerpColor
                          ((double)(float)(dVar22 - (double)(float)((double)local_78 /
                                                                   (double)(longlong)
                                                                           ((double)animationSpeed *
                                                                           dVar23))),0x20ffff,
                           0xffffffff8020ffff);
        if (SVar20 != STR_TO_USE_YOUR_BOMB_0x0000) {
          color = help::help_msg_string_by_index(SVar20);
          draw::FontPrintMediumCenter(0x100,(longlong)sVar18 + -0x14,uVar8,color,0xffffffffffffffff)
          ;
        }
      }
    }
    else if (g_freezeDialogType == 7) {
      if (0 < g_freezeOpenAnim) {
        uVar8 = help::help_msg_string_by_index(STR_MEMORY_CARD_PS2_IN_0x4FA6);
        pbVar19 = local_278;
        libc::strcpy(pbVar19,uVar8,0x400);
        iVar12 = g_freezeTimer;
        for (; 1 < *pbVar19; pbVar19 = pbVar19 + 1) {
        }
        for (; *pbVar19 == 1; pbVar19 = pbVar19 + 1) {
          *pbVar19 = 0;
        }
        SVar20 = (StringId)((LZCOUNT(-iVar12) << 0x3a) >> 0x3f) & STR_CONTINUE_2;
        draw::FontPrintMediumOpt(local_300,0,pbVar19,0xffffffffffffffff);
        sVar1 = (short)(draw::g_ScreenHeight + -0x28 >> 1);
        sVar18 = sVar1 + 0x28;
        dVar23 = 30.5;
        dVar22 = 1.0;
        dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        draw::DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        uVar8 = fastfunc::FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        draw::FontPrintMediumOpt(local_300,uVar8,pbVar19,0xffffffffffffffff);
        local_78 = (longlong)g_freezeOpenAnim2;
        uVar8 = fastfunc::FastLerpColor
                          ((double)(float)(dVar22 - (double)(float)((double)local_78 /
                                                                   (double)(longlong)
                                                                           ((double)animationSpeed *
                                                                           dVar23))),0x20ffff,
                           0xffffffff8020ffff);
        if (SVar20 != STR_TO_USE_YOUR_BOMB_0x0000) {
          color = help::help_msg_string_by_index(SVar20);
          draw::FontPrintMediumCenter(0x100,(longlong)sVar18 + -0x14,uVar8,color,0xffffffffffffffff)
          ;
        }
      }
    }
    else if (g_freezeDialogType == 6) {
      uVar24 = 0x3ff0000000000000;
      dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                              (float)(longlong)(animationSpeed * 30.5));
      local_78 = (longlong)(int)(dVar21 * 80.0);
      draw::DrawRoundedRect(100,300,0x60,0x1a0,(int)(dVar21 * 80.0));
      uVar8 = fastfunc::FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
      color = fastfunc::FastLerpColor(dVar21,0x20ffff,0xffffffff8020ffff);
      if (g_freezeState < 2) {
        if (g_freezeState < 0) goto LAB_00079abc;
        if (g_JapaneseMode == false) {
          uVar7 = help::help_msg_string_by_index(STR_YES_2);
          draw::FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help::help_msg_string_by_index(STR_YES_3);
          draw::FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        uVar7 = help::help_msg_string_by_index(STR_NO);
        draw::FontPrintMediumCenter(0x135,0x118,color,uVar7,0xffffffffffffffff);
        SVar20 = STR_THE_SCREEN_WILL_NOW_0x522A;
      }
      else if (g_freezeState < 3) {
        if (g_JapaneseMode == false) {
          uVar7 = help::help_msg_string_by_index(STR_YES_2);
          draw::FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help::help_msg_string_by_index(STR_YES_3);
          draw::FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        uVar7 = help::help_msg_string_by_index(STR_NO);
        draw::FontPrintMediumCenter(0x135,0x118,color,uVar7,0xffffffffffffffff);
        SVar20 = STR_THE_DISPLAY_IS_NOW_0x522B;
      }
      else {
        if (3 < g_freezeState) goto LAB_00079abc;
        if (g_JapaneseMode == false) {
          uVar7 = help::help_msg_string_by_index(STR_CONTINUE_2);
          draw::FontPrintMediumCenter(0x100,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help::help_msg_string_by_index(STR_CONTINUE);
          draw::FontPrintMediumCenter(0x100,0x118,color,uVar7,0xffffffffffffffff);
        }
        SVar20 = STR_THE_DISPLAY_HAS_BEEN_0x522C;
      }
      color = help::help_msg_string_by_index(SVar20);
      uVar7 = draw::GetEffectTex(1);
      draw::FontPrintOptWestern
                (uVar24,local_2d0,uVar8,color,0xffffffffffffffff,uVar7,&MediumWesternGlyphs);
    }
    else if ((g_freezeDialogType != 5) && (g_freezeDialogType != 3)) {
      if (g_freezeDialogType == 2) {
        dVar21 = (double)fastfunc::FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(DAT_0159c330 - (DAT_0159c330 / DAT_0071f368) * DAT_0071f368);
        fVar2 = (float)((double)local_78 / dVar21) * 6.28318 - 3.14159;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        fVar4 = fVar2 * fVar2 * fVar5;
        fVar6 = fVar2 * fVar4;
        uVar8 = fastfunc::FastLerpColor
                          ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                                    0.5 + 0.5),DAT_0071f36c,DAT_0071f370);
        draw::DrawTextBox(100,0xa0,0xb0,0x150,uVar8);
        draw::FontPrintMediumCenter(0x100,0x7a,0x8000c0c0,DAT_00963678,0xffffffffffffffff);
      }
      else if (g_freezeDialogType == 0) {
        dVar21 = (double)fastfunc::FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(DAT_0159c330 - (DAT_0159c330 / DAT_0071f368) * DAT_0071f368);
        fVar2 = (float)((double)local_78 / dVar21) * 6.28318 - 3.14159;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        fVar4 = fVar2 * fVar2 * fVar5;
        fVar6 = fVar2 * fVar4;
        uVar8 = fastfunc::FastLerpColor
                          ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                                    0.5 + 0.5),DAT_0071f36c,DAT_0071f370);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = loadVectorLeftIndexed(0x20,0x963670);
        auVar28 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = loadVectorLeftIndexed(0x30,0x784ac);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(4,0x784ac);
        dVar21 = 1.0;
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar26);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(0x24,0x963670);
        vectorCompareGreaterThanFloatingPoint(auVar28,auVar26);
        dVar22 = dVar21;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar29 = loadVectorLeftIndexed(0x34,0x784ac);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar28,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
          dVar22 = (double)((float)(longlong)g_freezeOpenAnim * 0.125);
          if ((bool)(in_cr6 >> 1 & 1)) {
            dVar22 = 0.10000000149011612;
          }
        }
        puVar9 = PTR_DAT_0071f374;
        uVar10 = DAT_0071f37c;
        uVar11 = DAT_0071f384;
        if (g_freezeOpenAnim2 != 0) {
          local_78 = (longlong)g_freezeOpenAnim2;
          auVar28 = vectorConvertFromSignedFixedPointWord(auVar25,0);
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar25);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          vectorCompareGreaterThanFloatingPoint(auVar25,auVar26);
          if ((bool)(in_cr6 >> 1 & 1)) {
            auVar26 = ZEXT416(0);
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
            dVar21 = (double)((float)local_78 * 0.125);
            if ((bool)(in_cr6 >> 1 & 1)) {
              dVar21 = 0.0;
            }
          }
          puVar9 = (undefined *)fastfunc::FastLerpColor(dVar21,PTR_DAT_0071f374,DAT_0071f378);
          uVar10 = fastfunc::FastLerpColor(dVar21,DAT_0071f37c,DAT_0071f380);
          uVar11 = fastfunc::FastLerpColor(dVar21,DAT_0071f384,DAT_0071f388);
        }
        if (DAT_0096a57a < 3) {
          local_78 = (longlong)DAT_0071f34c;
          iVar12 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f34c;
          iVar12 = DAT_0071f344 - iVar12;
          iVar13 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f348;
          iVar13 = DAT_0071f344 + iVar13;
          iVar14 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f348;
          iVar14 = DAT_0071f340 - iVar14;
          iVar15 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          draw::DrawTextBox(iVar12,iVar13,iVar14,DAT_0071f340 + iVar15,uVar8);
          iVar12 = DAT_0071f350;
          uVar8 = help::help_msg_string_by_index(STR_QUIT_RACE);
          draw::FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          if (g_JapaneseMode == false) {
            iVar12 = DAT_0071f350 + 0x18;
            uVar8 = help::help_msg_string_by_index(STR_CONTINUE);
            draw::FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
            iVar12 = DAT_0071f350 + 0x30;
            uVar8 = help::help_msg_string_by_index(STR_QUIT_2);
            draw::FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          }
          else {
            pcVar16 = (char *)help::help_msg_string_by_index(STR_NO);
            pcVar17 = (char *)help::help_msg_string_by_index(STR_CONTINUE);
            libc::strcpy((char *)local_278,pcVar17);
            local_276[0] = *pcVar16;
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f350 + 0x18,puVar9,local_276,0xffffffffffffffff);
            help::help_msg_string_by_index(STR_CONTINUE);
            pcVar16 = (char *)help::help_msg_string_by_index(STR_QUIT_2);
            libc::strcpy(local_276,pcVar16);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f350 + 0x30,puVar9,local_278,0xffffffffffffffff);
          }
        }
        else {
          local_78 = (longlong)DAT_0071f360;
          iVar12 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f360;
          iVar12 = DAT_0071f358 - iVar12;
          iVar13 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f35c;
          iVar13 = DAT_0071f358 + iVar13;
          iVar14 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f35c;
          iVar14 = DAT_0071f354 - iVar14;
          iVar15 = fastfunc::FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          draw::DrawTextBox(iVar12,iVar13,iVar14,DAT_0071f354 + iVar15,uVar8);
          iVar12 = DAT_0096a5a0 + -1;
          uVar8 = help::help_msg_string_by_index
                            (iVar12 + ((uint)(4 - (longlong)iVar12 >> 0x3f) & 4U - iVar12) + STR_ST)
          ;
          color = help::help_msg_string_by_index(STR_PLACE);
          libc::snprintf(acStack_2b8,"%s %s",uVar8,color);
          if (DAT_0096a5a0 == 1) {
            draw::FontPrintMediumCenter(0x100,DAT_0071f364,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          else {
            draw::FontPrintMediumCenter(0x100,DAT_0071f364,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          if (*(int *)((int)&g_BoltsRewardedFromRacePB + ((uint)LZCOUNT(Level - Kalebo) >> 3 & 4))
              == g_RaceTime) {
            uVar3 = (uint)((LZCOUNT(-g_IsPal) << 0x3a) >> 0x3f) & 600;
            iVar13 = uVar3 + 3000;
            iVar12 = g_RaceTime / iVar13;
            iVar14 = g_RaceTime - iVar12 * iVar13;
            uVar3 = (uVar3 + 0xbb9) * 0x111 >> 0xe;
            iVar13 = iVar14 / (int)uVar3;
            uVar8 = help::help_msg_string_by_index(STR_NEW_BEST_TIME);
            libc::snprintf(acStack_2b8,"%s",uVar8);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x26,uVar10,acStack_2b8,0xffffffffffffffff);
            libc::snprintf(acStack_2b8,"%d:%02d:%02d",iVar12,iVar13,
                           (int)((iVar14 - iVar13 * uVar3) * 100) / (int)uVar3);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x3a,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          else {
            uVar8 = help::help_msg_string_by_index(STR_NO_NEW_TIME);
            libc::snprintf(acStack_2b8,"%s",uVar8);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x30,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          iVar12 = *(int *)((int)&DAT_00a0cd10 + ((uint)LZCOUNT(Level - Kalebo) >> 3 & 4));
          if ((iVar12 == 0) || (iVar12 != g_RaceScore)) {
            uVar8 = help::help_msg_string_by_index(STR_NO_NEW_SCORE);
            libc::snprintf(acStack_2b8,"%s",uVar8);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x60,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          else {
            uVar8 = help::help_msg_string_by_index(STR_NEW_HIGH_SCORE);
            libc::snprintf(acStack_2b8,"%s",uVar8);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x56,uVar10,acStack_2b8,0xffffffffffffffff);
            libc::snprintf(acStack_2b8,"%d",g_RaceScore);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x6a,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          if (g_JapaneseMode == false) {
            iVar12 = DAT_0071f364 + 0x90;
            uVar8 = help::help_msg_string_by_index(STR_CONTINUE);
            draw::FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
            iVar12 = DAT_0071f364 + 0xa8;
            uVar8 = help::help_msg_string_by_index(STR_QUIT_2);
            draw::FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          }
          else {
            pcVar16 = (char *)help::help_msg_string_by_index(STR_NO);
            pcVar17 = (char *)help::help_msg_string_by_index(STR_CONTINUE);
            libc::strcpy((char *)local_278,pcVar17);
            local_276[0] = *pcVar16;
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x90,puVar9,local_276,0xffffffffffffffff);
            help::help_msg_string_by_index(STR_CONTINUE);
            pcVar16 = (char *)help::help_msg_string_by_index(STR_QUIT_2);
            libc::strcpy(local_276,pcVar16);
            draw::FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0xa8,puVar9,local_278,0xffffffffffffffff);
          }
        }
      }
      else {
        dVar21 = (double)fastfunc::FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(DAT_0159c330 - (DAT_0159c330 / DAT_0071f368) * DAT_0071f368);
        fVar2 = (float)((double)local_78 / dVar21) * 6.28318 - 3.14159;
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        fVar4 = fVar2 * fVar2 * fVar5;
        fVar6 = fVar2 * fVar4;
        uVar8 = fastfunc::FastLerpColor
                          ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                                    0.5 + 0.5),DAT_0071f36c,DAT_0071f370);
        draw::DrawTextBox(0x50,DAT_0071f334 + 0x1a,0xb0,0x150,uVar8);
        if (DAT_00963678 != 0) {
          draw::FontPrintMediumCenter(0x100,0x5a,0x8000c0c0,DAT_00963678,0xffffffffffffffff);
        }
        if (DAT_0096367c != 0) {
          draw::FontPrintMediumCenter(0x100,DAT_0071f330,0x80ffa888,DAT_0096367c,0xffffffffffffffff)
          ;
        }
        if (DAT_00963680 != 0) {
          draw::FontPrintMediumCenter(0x100,DAT_0071f334,0x80ffa888,DAT_00963680,0xffffffffffffffff)
          ;
        }
      }
    }
  }
LAB_00079abc:
  stub::STUB_0006d708();
  return;
}



//==== 00079b18  ns=freeze  size=0x820
// sig: void UpdateFreeze(void)
// callers(2): 00011020 boot::FrontEnd_Update; 000e0e60 main::startLevel
// callees(14): 0006dad0 draw::FadeToBlack; 000836ac hero::Hero_RevertToRatchet; 000a0c38 hero::Hero_Warp; 000c8b28 hud::Hud_SetEntryValueById; 000d5bf8 hud::Hud_DecHideCounter; 000e76bc memcard::memcard_GetSaveSysState; 000e8aa4 memcard::memcard_Save; 000e8fd8 memcard::memcard_PollSaveResult; 0011ccc8 music::music_SetTransition; 0011ce64 music::music_Unpause; 0015be68 sound::sound_Update; 0015ea84 space::ChangeLevel; 00505d20 stub::STUB_00505d20; 0060bb90 FUN_0060bb90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freeze::UpdateFreeze(void)

{
  MobyModeBit MVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int iVar4;
  undefined8 in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  sound::sound_Update();
  pMVar2 = g_heroMobyPtr;
  if (g_freezeTimer != 0) {
    g_freezeTimer = g_freezeTimer + -1;
  }
  if (g_freezeDelay != 0) {
    g_freezeDelay = g_freezeDelay + -1;
  }
  if (g_freezeDialogType < 5) {
    if (g_freezeDialogType < 2) {
      if (-1 < g_freezeDialogType) {
        if (g_freezeDialogType < 1) {
          if (g_freezeState < 1) {
            if (-1 < g_freezeState) {
              if (g_freezeOpenAnim < 8) {
                g_freezeOpenAnim = g_freezeOpenAnim + 1;
              }
              else if (g_freezeOpenAnim2 < 8) {
                g_freezeOpenAnim2 = g_freezeOpenAnim2 + 1;
              }
              else {
                g_freezeState = 1;
              }
            }
          }
          else if (g_freezeState < 2) {
            if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) == 0) {
              if ((g_buttonsPressedThisFrame & (START|CIRCLE)) != 0) {
                g_freezeState = 3;
              }
            }
            else {
              g_freezeState = 2;
            }
          }
          else if (g_freezeState < 4) {
            if (g_freezeOpenAnim2 == 0) {
              if (g_freezeOpenAnim == 0) {
                if (g_freezeState == 2) {
                  g_freezeState = 2;
                  if (DAT_0096a560 != -1) {
                    hud::Hud_SetEntryValueById(DAT_0096a560,0);
                    DAT_0096a560 = -1;
                  }
                  hud::Hud_DecHideCounter();
                  if ((int)(animationSpeed * 4200.5) < DAT_00969e7c) {
                    if (Level == Rilgar) {
                      DAT_00a10548 = DAT_00a10548 + 1;
                    }
                    else if (Level == Kalebo) {
                      DAT_00a1054c = DAT_00a1054c + 1;
                    }
                  }
                  g_gameMode = GAME_MODE_NORMAL;
                  music::music_SetTransition(0,8);
                  hero::Hero_Warp((float *)&DAT_0096b9e0,(float *)&DAT_0096b9f0,0,1);
                }
                else {
                  g_gameMode = GAME_MODE_NORMAL;
                  if (2 < DAT_0096a57a) {
                    DAT_0096a57a = DAT_0096a57a + -1;
                    *(undefined1 *)(DAT_0096a570 + 0xbc) = 3;
                  }
                }
              }
              else {
                g_freezeOpenAnim = g_freezeOpenAnim + -1;
              }
            }
            else {
              g_freezeOpenAnim2 = g_freezeOpenAnim2 + -1;
            }
          }
        }
        else {
          OcclMode = 2;
          if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
              g_gameMode = GAME_MODE_NORMAL;
            }
          }
          else {
            g_gameMode = GAME_MODE_NORMAL;
            DAT_0096b2ef = DAT_0096b2ef | 1;
          }
        }
      }
    }
    else if (g_freezeDialogType < 3) {
      OcclMode = 2;
      if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
        g_gameMode = GAME_MODE_NORMAL;
      }
    }
    else if (g_freezeDialogType < 4) {
      g_freezeOpenAnim = g_freezeOpenAnim + 1;
      if (((int)(animationSpeed * 30.5) < g_freezeOpenAnim) && (g_freezeOpenAnim2 != 0)) {
        g_freezeOpenAnim2 = g_freezeOpenAnim2 + -1;
      }
      if (DAT_00a23099 == '\0') {
        iVar3 = memcard::memcard_PollSaveResult();
        if (((-1 < iVar3) && (memcard::g_memcardPollDone != '\0')) && (iVar3 != 2)) {
          iVar4 = memcard::memcard_GetSaveSysState();
          memcard::g_memcardPollDone = '\0';
          if ((iVar4 == 6) || (iVar4 == 3)) {
            memcard::g_memcardSaveSysState = 5;
            g_gameMode = g_freezePrevGameMode;
          }
          else if (iVar4 == 1) {
            memcard::g_memcardSaveSysState = 5;
            if (iVar3 == 0) {
              space::ChangeLevel(Level);
              DAT_0096459a = 0;
            }
            else if (iVar3 == 1) {
              g_gameMode = g_freezePrevGameMode;
            }
          }
          else if (iVar4 == 0) {
            memcard::g_memcardSaveSysState = 5;
            if (iVar3 == 0) {
              if ((g_FrontEnd == '\0') && (DAT_00a15f39 == '\0')) {
                g_gameMode = g_freezePrevGameMode;
              }
              else {
                if (DAT_00a15f39 != '\0') {
                  DAT_00a15f39 = '\0';
                }
                space::ChangeLevel(Veldin);
                DAT_0096459a = 1;
              }
            }
            else if (iVar3 == 1) {
              g_gameMode = g_freezePrevGameMode;
            }
          }
        }
      }
      else if (DAT_00964fa0 == '\0') {
        g_gameMode = g_freezePrevGameMode;
        DAT_00a23099 = '\0';
        memcard::g_memcardPollDone = '\0';
      }
    }
    else if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
      if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
        g_gameMode = GAME_MODE_NORMAL;
      }
    }
    else {
      MVar1 = g_heroMobyPtr->modeBits;
      g_heroMobyPtr->collision = (ushort *)0x0;
      pMVar2->enabled = '\0';
      pMVar2->modeBits = MVar1 | DISABLED;
      hero::Hero_RevertToRatchet();
      hero::Hero_Warp((float *)&DAT_0096b9e0,(float *)&DAT_0096b9f0,0,1);
      g_gameMode = GAME_MODE_NORMAL;
    }
  }
  else if (g_freezeDialogType < 8) {
    if (g_freezeDialogType < 6) {
      g_freezeOpenAnim = g_freezeOpenAnim + 1;
      g_gameMode = GAME_MODE_NORMAL;
      if (Level == Novalis) {
        memcard::memcard_Save(0,-1);
      }
    }
    else if (g_freezeDialogType < 7) {
      if (g_freezeState < 2) {
        if (-1 < g_freezeState) {
          if (g_freezeState < 1) {
            if (g_freezeTimer == 0) {
              g_freezeState = 1;
            }
          }
          else if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
              draw::FadeToBlack(4);
              auVar5 = ZEXT416(0xffffffff);
              auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
              DAT_00a52e60 = 0;
              auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
              g_freezeState = 2;
              auVar5 = loadVectorLeftIndexed(in_LR,0x79b08);
              auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar5 = vectorMultiplyAddFloatingPoint
                                 (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,
                                  auVar6);
              auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
              auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
              g_freezeOpenAnim =
                   storeVectorElementWordIndexed
                             (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x20,
                              0x963670);
            }
          }
          else {
            g_gameMode = g_freezePrevGameMode;
          }
          goto LAB_0007a2ec;
        }
      }
      else {
        if (g_freezeState < 3) {
          if (g_freezeOpenAnim != 0) {
            g_freezeOpenAnim = g_freezeOpenAnim + -1;
          }
          if (g_freezeOpenAnim == 0) {
            DAT_00a52e60 = 1;
            g_freezeState = 3;
          }
          else if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
              DAT_00a52e60 = 0;
              g_gameMode = g_freezePrevGameMode;
            }
          }
          else {
            draw::FadeToBlack(4);
            DAT_00a52e60 = 1;
            g_gameMode = g_freezePrevGameMode;
          }
          goto LAB_0007a2ec;
        }
        if (g_freezeState < 4) {
          if ((g_buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
            g_gameMode = g_freezePrevGameMode;
          }
          goto LAB_0007a2ec;
        }
      }
      g_gameMode = g_freezePrevGameMode;
    }
  }
  else if (((8 < g_freezeDialogType) && (g_freezeDialogType < 10)) && (DAT_00964fa0 == '\0')) {
    g_gameMode = g_freezePrevGameMode;
  }
LAB_0007a2ec:
  if (g_gameMode != GAME_MODE_PAUSE && g_gameMode != GAME_MODE_FREEZE) {
    FUN_0060bb90(0x1d);
    music::music_Unpause();
    stub::STUB_00505d20();
  }
  return;
}



//==== 0007a338  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_UNKNOWN(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_UNKNOWN(void)

{
  DAT_0071f3d8 = 0x10000;
  return;
}



//==== 0007a350  ns=draw  size=0xcac
// sig: undefined InitGsRegPresets_7a350(void)
// callers(0): 
// callees(19): 00502e00 FUN_00502e00; 00502e08 FUN_00502e08; 00502e10 FUN_00502e10; 00502e18 FUN_00502e18; 00502e20 FUN_00502e20; 00502e28 FUN_00502e28; 00502e30 FUN_00502e30; 00502e38 FUN_00502e38; 00502e40 FUN_00502e40; 00502e50 FUN_00502e50; 00502e70 FUN_00502e70; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0; 00502fec FUN_00502fec; 00502ffc stub::VU1_addGSregister

void draw::InitGsRegPresets_7a350(void)

{
  DAT_0071fbac = 0x10000;
  DAT_0071f430 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_0071f440 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f450 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  DAT_0071f460 = FUN_00502ea0(0x10,1,0,0,1,2);
  DAT_0071f470 = FUN_00502fec(0x7000,0x7300,0);
  DAT_0071f478 = FUN_00502fec(0x7200,0x8d00,0);
  DAT_0071f480 = FUN_00502fec(0x7200,0x7300,0);
  DAT_0071f488 = FUN_00502fec(0x7400,0x8d00,0);
  DAT_0071f490 = FUN_00502fec(0x7400,0x7300,0);
  DAT_0071f498 = FUN_00502fec(0x7600,0x8d00,0);
  DAT_0071f4a0 = FUN_00502fec(0x7600,0x7300,0);
  DAT_0071f4a8 = FUN_00502fec(0x7800,0x8d00,0);
  DAT_0071f4b0 = FUN_00502fec(0x7800,0x7300,0);
  DAT_0071f4b8 = FUN_00502fec(0x7a00,0x8d00,0);
  DAT_0071f4c0 = FUN_00502fec(0x7a00,0x7300,0);
  DAT_0071f4c8 = FUN_00502fec(0x7c00,0x8d00,0);
  DAT_0071f4d0 = FUN_00502fec(0x7c00,0x7300,0);
  DAT_0071f4d8 = FUN_00502fec(0x7e00,0x8d00,0);
  DAT_0071f4e0 = FUN_00502fec(0x7e00,0x7300,0);
  DAT_0071f4e8 = FUN_00502fec(0x8000,0x8d00,0);
  DAT_0071f4f0 = FUN_00502fec(0x8000,0x7300,0);
  DAT_0071f4f8 = FUN_00502fec(0x8200,0x8d00,0);
  DAT_0071f500 = FUN_00502fec(0x8200,0x7300,0);
  DAT_0071f508 = FUN_00502fec(0x8400,0x8d00,0);
  DAT_0071f510 = FUN_00502fec(0x8400,0x7300,0);
  DAT_0071f518 = FUN_00502fec(0x8600,0x8d00,0);
  DAT_0071f520 = FUN_00502fec(0x8600,0x7300,0);
  DAT_0071f528 = FUN_00502fec(0x8800,0x8d00,0);
  DAT_0071f530 = FUN_00502fec(0x8800,0x7300,0);
  DAT_0071f538 = FUN_00502fec(0x8a00,0x8d00,0);
  DAT_0071f540 = FUN_00502fec(0x8a00,0x7300,0);
  DAT_0071f548 = FUN_00502fec(0x8c00,0x8d00,0);
  DAT_0071f550 = FUN_00502fec(0x8c00,0x7300,0);
  DAT_0071f558 = FUN_00502fec(0x8e00,0x8d00,0);
  DAT_0071f560 = FUN_00502fec(0x8e00,0x7300,0);
  DAT_0071f568 = FUN_00502fec(0x9000,0x8d00,0);
  DAT_0071f570 = FUN_00502ea0(1,0,0,0,0,2);
  DAT_0071f580 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f590 = FUN_00502e70(0xf,0,0,0,1,0,1,0);
  DAT_0071f5a0 = FUN_00502ea0(0x10,1,0,0,1,2);
  DAT_0071f5b0 = FUN_00502fec(0x7000,0x7200,0);
  DAT_0071f5b8 = FUN_00502fec(0x7200,0x8e00,0);
  DAT_0071f5c0 = FUN_00502fec(0x7200,0x7200,0);
  DAT_0071f5c8 = FUN_00502fec(0x7400,0x8e00,0);
  DAT_0071f5d0 = FUN_00502fec(0x7400,0x7200,0);
  DAT_0071f5d8 = FUN_00502fec(0x7600,0x8e00,0);
  DAT_0071f5e0 = FUN_00502fec(0x7600,0x7200,0);
  DAT_0071f5e8 = FUN_00502fec(0x7800,0x8e00,0);
  DAT_0071f5f0 = FUN_00502fec(0x7800,0x7200,0);
  DAT_0071f5f8 = FUN_00502fec(0x7a00,0x8e00,0);
  DAT_0071f600 = FUN_00502fec(0x7a00,0x7200,0);
  DAT_0071f608 = FUN_00502fec(0x7c00,0x8e00,0);
  DAT_0071f610 = FUN_00502fec(0x7c00,0x7200,0);
  DAT_0071f618 = FUN_00502fec(0x7e00,0x8e00,0);
  DAT_0071f620 = FUN_00502fec(0x7e00,0x7200,0);
  DAT_0071f628 = FUN_00502fec(0x8000,0x8e00,0);
  DAT_0071f630 = FUN_00502fec(0x8000,0x7200,0);
  DAT_0071f638 = FUN_00502fec(0x8200,0x8e00,0);
  DAT_0071f640 = FUN_00502fec(0x8200,0x7200,0);
  DAT_0071f648 = FUN_00502fec(0x8400,0x8e00,0);
  DAT_0071f650 = FUN_00502fec(0x8400,0x7200,0);
  DAT_0071f658 = FUN_00502fec(0x8600,0x8e00,0);
  DAT_0071f660 = FUN_00502fec(0x8600,0x7200,0);
  DAT_0071f668 = FUN_00502fec(0x8800,0x8e00,0);
  DAT_0071f670 = FUN_00502fec(0x8800,0x7200,0);
  DAT_0071f678 = FUN_00502fec(0x8a00,0x8e00,0);
  DAT_0071f680 = FUN_00502fec(0x8a00,0x7200,0);
  DAT_0071f688 = FUN_00502fec(0x8c00,0x8e00,0);
  DAT_0071f690 = FUN_00502fec(0x8c00,0x7200,0);
  DAT_0071f698 = FUN_00502fec(0x8e00,0x8e00,0);
  DAT_0071f6a0 = FUN_00502fec(0x8e00,0x7200,0);
  DAT_0071f6a8 = FUN_00502fec(0x9000,0x8e00,0);
  DAT_0071f6b0 = FUN_00502ea0(1,1,0,0,0,10);
  DAT_0071f760 = FUN_00502ea0(0x12,1,0,0,0,1);
  DAT_0071f770 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f780 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f790 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f7a0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0071f7b0 = FUN_00502e00(1);
  DAT_0071f7c0 = FUN_00502e08(0,0,0,0,0,0,0,0);
  DAT_0071f7d0 = FUN_00502e10(0);
  DAT_0071f7e0 = FUN_00502e50(0);
  DAT_0071f7f0 = FUN_00502e50(0);
  DAT_0071f800 = FUN_00502e18(0);
  DAT_0071f810 = FUN_00502e20(0,0,0,0,0,0,0,0);
  DAT_0071f820 = FUN_00502e28(1);
  DAT_0071f830 = FUN_00502e30(0);
  DAT_0071f840 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  DAT_0071f850 = FUN_00502f98(1,5,0x60,3,0,0,1,2);
  DAT_0071f860 = FUN_00502e38(0,0,0x80);
  DAT_0071f870 = FUN_00502e40(1,0,0);
  DAT_0071f890 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0071f8a0 = stub::VU1_addGSregister(0,0x24,0);
  DAT_0071f8b0 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f8c0 = FUN_00502f08(1,1,0,0,0,0);
  DAT_0071f8d0 = idol_draw::Blend(0,0,0,0,0,0,1,1);
  DAT_0071f8e0 = idol_draw::PackCmd(0,1,0,1,0x80);
  DAT_0071f900 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0071f910 = stub::VU1_addGSregister(0,0x24,1);
  DAT_0071f920 = idol_draw::Blend(1,5,0x80,1,0,0,1,1);
  DAT_0071f930 = FUN_00502f08(1,1,0,0,0,0);
  DAT_0071f940 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0071f950 = idol_draw::PackCmd(0,1,0,1,0x20);
  return;
}



//==== 0007affc  ns=Global  size=0xb8
// sig: undefined Global_QuickMovieMalloc(void)
// callers(0): 
// callees(2): 004ffc9c print_tty2; 005cd098 libc::printf
// strings: 0065204c: 'Bink MALLOC!' | 0065205c: 'Global_QuickMovieMalloc:Bink Allocator used %d bytes\n'

uint Global_QuickMovieMalloc(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  libc::printf("Bink MALLOC!");
  uVar2 = loaders::g_NpcBuffer + DAT_00a1073c;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0) {
    uVar2 = (uVar2 - uVar1) + 0x20;
    print_tty2("Global_QuickMovieMalloc:Bink Allocator used %d bytes\n",0x20 - uVar1);
  }
  DAT_00a1073c = param_1 + (0x20 - uVar1) + DAT_00a1073c;
  return uVar2;
}



//==== 0007b0b4  ns=help  size=0x10
// sig: undefined ???_ClearFlag_a1073c(void)
// callers(0): 
// callees(0): 

void help::____ClearFlag_a1073c(void)

{
  DAT_00a1073c = 0;
  return;
}



//==== 0007b0c4  ns=help  size=0x30
// sig: undefined ???_FreeTexBase(void)
// callers(0): 
// callees(1): 005084c0 FUN_005084c0

void help::____FreeTexBase(void)

{
  FUN_005084c0(&TEX_BASE,2);
  return;
}



//==== 0007b0f4  ns=Global  size=0x3c
// sig: undefined SECTION_HEADER_HELP(void)
// callers(0): 
// callees(1): 005084b8 FUN_005084b8

void SECTION_HEADER_HELP(void)

{
  DAT_00720860 = 0x10000;
  FUN_005084b8(&TEX_BASE);
  return;
}



//==== 0007b130  ns=help  size=0xa8
// sig: void Help_Skip(void)
// callers(1): 0007b7d8 help::Help_Suspend
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Skip(void)

{
  if (g_HelpState < 4) {
    if (g_HelpState < 1) {
      if (-1 < g_HelpState) {
        g_HelpCurId = -1;
      }
    }
    else if (g_HelpState < 3) {
      g_HelpStateTimer = 0;
      g_HelpState = 7;
    }
    else {
      g_HelpStateTimer = 0;
      g_HelpState = 7;
    }
  }
  else if (g_HelpState < 6) {
    if (g_HelpState < 5) {
      g_HelpStateTimer = 4 - g_HelpStateTimer;
      g_HelpState = 6;
    }
    else {
      g_HelpStateTimer = 0;
      g_HelpState = 6;
    }
  }
  return;
}



//==== 0007b1d8  ns=help  size=0x74
// sig: int Help_FindPairIndex(short id, int column, short * pOther)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int help::Help_FindPairIndex(short id,int column,short *pOther)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)((int)&g_HelpIdPairs + iVar1 * 4 + (int)((longlong)column << 1)) == id) {
      if (pOther == (short *)0x0) {
        return iVar1;
      }
      *pOther = *(short *)((int)&g_HelpIdPairs + iVar1 * 4 + ((uint)LZCOUNT(column) >> 4 & 2));
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x96);
  return -1;
}



//==== 0007b24c  ns=help  size=0xc4
// sig: void Help_AddToLog(short id)
// callers(1): 00078178 freeze::DisplayPrompt
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_AddToLog(short id)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = 0;
  psVar3 = &g_HelpIdPairs;
  do {
    if (*psVar3 == id) {
      if (uVar2 == 0xffffffff) {
        return;
      }
      for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
          iVar4 = iVar4 + 1) {
      }
      if (iVar4 < g_HelpLogCount) {
        g_HelpLogCount = g_HelpLogCount + -1;
        for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
          (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
        }
        (&g_HelpLog)[iVar4] = 0;
      }
      puVar1 = &g_HelpLog + g_HelpLogCount;
      g_HelpLogCount = g_HelpLogCount + 1;
      *puVar1 = (char)uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
    psVar3 = psVar3 + 2;
  } while ((int)uVar2 < 0x96);
  return;
}



//==== 0007b310  ns=help  size=0x148
// sig: int Help_QueueMessage(StringId id, int flag)
// callers(47): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 0008d33c hero::Hero_DisplayHelpMsgs; 000a30e0 hero::???_Hero_UpdateWeaponInput; 00181628 mobyupdate_unsorted::UpdateMoby_1000; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 0018fdc8 mobyupdate_unsorted::UpdateMoby_1028_BlargPlatform; 001933d8 mobyupdate_unsorted::UpdateMoby_1035; 001be558 mobyupdate_unsorted::UpdateMoby_1105; 001cccb8 mobyupdate_helpers::M1109_001cccb8; 001dd210 mobyupdate_helpers::M1140_001dd210; 001ee6c0 mobyupdate_unsorted::UpdateMoby_1179; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 0021e750 mobyupd::update1242::M1242_Hud_Draw; 0021ff90 mobyupd::update1242::M1242_0021ff90; 00221048 mobyupd::update1242::UpdateMoby_1242_JetFighterPoki; 0023e140 mobyupdate_unsorted::UpdateMoby_1290; 00245840 mobyupdate_unsorted::UpdateMoby_1316; 00249cb0 mobyupdate_unsorted::UpdateMoby_1324; 0024f118 mobyupdate_unsorted::UpdateMoby_1341; 0024fd10 mobyupdate_unsorted::UpdateMoby_1342; 00250c88 mobyupdate_unsorted::UpdateMoby_1343; 00251b20 mobyupdate_unsorted::UpdateMoby_1344; 00253480 mobyupdate_unsorted::UpdateMoby_1347; 00254048 mobyupdate_unsorted::UpdateMoby_1348; 00254630 mobyupdate_unsorted::UpdateMoby_1349
// callees(0): 
// strings: 00a1000c: 'None'

int help::Help_QueueMessage(StringId id,int flag)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  if ((((g_HelpState == 0) && (g_HelpCurId == -1)) && (music::g_SpeechPlaying.handle == 0)) &&
     ((music::g_PendingSpeech == -1 &&
      (*(short *)(CHAR_ARRAY_00a1000c + (int)((longlong)flag << 3)) != -1)))) {
    uVar2 = 0;
    psVar3 = &g_HelpIdPairs;
    do {
      g_HelpCurId = id;
      g_HelpCurFlag = flag;
      if (*psVar3 == (short)id) {
        if (uVar2 != 0xffffffff) {
          for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
              iVar4 = iVar4 + 1) {
          }
          if (iVar4 < g_HelpLogCount) {
            g_HelpLogCount = g_HelpLogCount + -1;
            for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
              (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
            }
            (&g_HelpLog)[iVar4] = 0;
          }
          puVar1 = &g_HelpLog + g_HelpLogCount;
          g_HelpLogCount = g_HelpLogCount + 1;
          *puVar1 = (char)uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
    } while ((int)uVar2 < 0x96);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



//==== 0007b458  ns=help  size=0x98
// sig: void Help_Kill(void)
// callers(13): 0015e7e8 space::Space_StartTakeoffCutscene; 00167e60 update::mode_sceneInit; 00168d34 update::StartMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b650 vendor::StartGadgetPickupCutscene; 00183880 mobyupdate_unsorted::UpdateMoby_{1005_1016}; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470; 002acf90 mobyupdate_unsorted::UpdateMoby_17; 004a4bd0 mobyupdate_unsorted::UpdateMoby_90
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Kill(void)

{
  int iVar1;
  
  if (g_HelpState != 0) {
    iVar1 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
    if (((iVar1 != -1) && (iVar1 == music::g_SpeechPlaying.track + -30000)) &&
       (music::g_SpeechPlaying.status != 7 && music::g_SpeechPlaying.status != 6)) {
      music::g_SpeechPlaying.status = 5;
    }
    g_HelpState = 0;
    g_HelpCurId = -1;
    g_HelpCurIndex = -1;
    g_HelpStateTimer = 0;
  }
  return;
}



//==== 0007b4f0  ns=help  size=0x1c0
// sig: int Help_QueueMessageForce(StringId id, int flag)
// callers(0): 
// callees(0): 
// strings: 00a1000c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int help::Help_QueueMessageForce(StringId id,int flag)

{
  undefined1 *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  if (g_HelpState != 0) {
    iVar4 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
    if (((iVar4 != -1) && (iVar4 == music::g_SpeechPlaying.track + -30000)) &&
       (music::g_SpeechPlaying.status != 7 && music::g_SpeechPlaying.status != 6)) {
      music::g_SpeechPlaying.status = 5;
    }
    g_HelpState = 0;
    g_HelpCurId = -1;
    g_HelpCurIndex = -1;
    g_HelpStateTimer = 0;
  }
  if (((g_HelpCurId == -1) && (music::g_SpeechPlaying.handle == 0)) &&
     ((music::g_PendingSpeech == -1 &&
      (*(short *)(CHAR_ARRAY_00a1000c + (int)((longlong)flag << 3)) != -1)))) {
    uVar2 = 0;
    psVar3 = &g_HelpIdPairs;
    do {
      g_HelpCurId = id;
      g_HelpCurFlag = flag;
      if (*psVar3 == (short)id) {
        if (uVar2 != 0xffffffff) {
          for (iVar4 = 0; ((byte)(&g_HelpLog)[iVar4] != uVar2 && (iVar4 < g_HelpLogCount));
              iVar4 = iVar4 + 1) {
          }
          if (iVar4 < g_HelpLogCount) {
            g_HelpLogCount = g_HelpLogCount + -1;
            for (; iVar4 < g_HelpLogCount; iVar4 = iVar4 + 1) {
              (&g_HelpLog)[iVar4] = (&DAT_00a104ad)[iVar4];
            }
            (&g_HelpLog)[iVar4] = 0;
          }
          puVar1 = &g_HelpLog + g_HelpLogCount;
          g_HelpLogCount = g_HelpLogCount + 1;
          *puVar1 = (char)uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
    } while ((int)uVar2 < 0x96);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



//==== 0007b6b0  ns=help  size=0x34
// sig: void Help_ClearUsedSinceDeath(void)
// callers(3): 00083950 hero::HandleHeroDeath; 00083ac8 hero::Hero_HandleGroundType; 00087a88 hero::Hero_UpdateTimers
// callees(0): 
// strings: 00a1000c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_ClearUsedSinceDeath(void)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = (uint *)(CHAR_ARRAY_00a1000c + 4);
  lVar2 = 0x4a;
  do {
    *puVar1 = *puVar1 & 0x7fffffff;
    puVar1[2] = puVar1[2] & 0x7fffffff;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 0007b6e4  ns=help  size=0x5c
// sig: int Help_FindIndex(int id)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int help::Help_FindIndex(int id)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < Help) {
    do {
      if (*(int *)(HelpMsgs + iVar1 * 0x10 + 4) == id) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < Help);
  }
  return -1;
}



//==== 0007b740  ns=help  size=0x94
// sig: undefined help_msg_string_by_index(StringId helpmsg)
// callers(56): 0006d190 draw::DrawTimedHelpMsg; 00078178 freeze::DisplayPrompt; 000784e8 freeze::DrawDialogText; 000cc450 hud::Draw_PromptMsg; 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 000d27f8 hud::Draw_HoverboardTrickHud; 000d6148 hud::Draw_RaceLapPlaceHud; 000d6710 hud::Draw_RaceTimeScoreHud; 000e2c34 map::Map_GetIconLabel; 000e8190 memcard::memcard_ConstructPlanetString; 000e8268 memcard::memcard_ConstructSaveString; 00112a38 mobyutil::MB_ToastMessage; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 00112e18 mobyutil::MB_UnlockItem; 0011a458 mobyutil::MB_ToastMessageFmt; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011afac mobyutil::MB_RequestHelpMessage; 0011b728 mobyutil::MB_UnlockSkillPoint; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144084 pause::DrawSoundOptionsFrame; 00144638 pause::DrawSkillPointsFrame; 00145b8c pause::ItemView_Draw
// callees(0): 
// strings: 00720b94: 'MESSAGE DOES NOT EXIST'

char * help::help_msg_string_by_index(StringId helpmsg)

{
  ulonglong uVar1;
  int iVar2;
  
  if (g_Language == 3 && helpmsg == STR_JUMP_THEN_PRESS_AND_0x1773) {
    helpmsg = STR_TRY_USING_THE_GLIDE_0x0BB8;
  }
  uVar1 = 0;
  if (0 < Help) {
    iVar2 = 0;
    do {
      if (*(StringId *)(HelpMsgs + iVar2 + 4) == helpmsg) {
        if (-1 < (int)uVar1) {
          return *(char **)(HelpMsgs + (int)((uVar1 & 0xffffffff) << 4));
        }
        break;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while ((int)uVar1 < Help);
  }
  return s_MESSAGE_DOES_NOT_EXIST_00720b94;
}



//==== 0007b7d8  ns=help  size=0x90
// sig: void Help_Suspend(void)
// callers(4): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002a4420 mobyupdate_unsorted::UpdateMoby_163; 002af360 mobyupdate_unsorted::UpdateMoby_172; 0041dad8 mobyupdate_unsorted::UpdateMoby_69
// callees(1): 0007b130 help::Help_Skip

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Suspend(void)

{
  undefined8 in_LR;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (g_HelpSuspended._0_2_ == 0) {
    auVar1 = ZEXT416(0xffffffff);
    auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
    auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
    g_HelpSuspended._0_2_ = 1;
    auVar1 = loadVectorLeftIndexed(in_LR,0x7b7d4);
    auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar3 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar1 = vectorMultiplyAddFloatingPoint
                       (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
    auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
    auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_007208c0 = storeVectorElementWordIndexed
                             (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x3c,
                              0x720884);
    Help_Skip();
    if (g_HelpState == 0) {
      g_HelpState = 8;
    }
  }
  return;
}



//==== 0007b868  ns=help  size=0x14
// sig: void Help_Resume(void)
// callers(3): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet; 002ae9e0 FUN_002ae9e0; 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Resume(void)

{
  g_HelpSuspended._0_2_ = 0;
  return;
}



//==== 0007b880  ns=help  size=0x168
// sig: void Help_StartMessageBox(void)
// callers(0): 
// callees(3): 0006ac90 draw::SetFontWindow; 0007100c draw::FontPrintOpt; 0015d2d4 sound::sound_CorePlay

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_StartMessageBox(void)

{
  undefined4 uVar1;
  int in_stack_ffffff58;
  short local_24;
  short local_22;
  
  g_HelpState = 1;
  g_HelpStateTimer = 0;
  if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
    sound::sound_CorePlay(0,1,(MobyInstance *)0x0);
  }
  uVar1 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
  draw::SetFontWindow((FontWindow *)&stack0xffffffd0,0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,0x10,
                      in_stack_ffffff58);
  draw::FontPrintOpt(0x3ff0000000000000,(FontWindow *)&stack0xffffffd0,0x80ffa888,uVar1,
                     0xffffffffffffffff);
  DAT_00720894 = 0x100;
  DAT_0072088c = ((int)local_24 >> 1) + 10;
  DAT_00720890 = ((int)local_22 >> 1) + 5;
  DAT_0072089c = 8;
  DAT_007208a0 = 8;
  DAT_00720898 = draw::g_ScreenHeight + -0x3c;
  if (draw::g_ScreenHeight + -0xc < draw::g_ScreenHeight + ((int)local_22 >> 1) + -0x37) {
    DAT_00720898 = (draw::g_ScreenHeight - DAT_00720890) + -0xc;
  }
  return;
}



//==== 0007ba00  ns=help  size=0xe38
// sig: void Help_Update(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(6): 0006ac90 draw::SetFontWindow; 0007100c draw::FontPrintOpt; 0011afac mobyutil::MB_RequestHelpMessage; 0011c830 music::music_PlayPreseekedSpeech; 0015d2d4 sound::sound_CorePlay; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a1000c: 'None'

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Update(void)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  float fVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  int in_stack_ffffff28;
  undefined1 auStack_60 [36];
  short local_3c;
  short local_3a;
  
  if (DAT_007208b4 == 0) {
    if ((DAT_007208b8 == 0) && ((g_downButtons & (LEFT|DOWN|RIGHT|UP)) != 0)) {
      DAT_007208b8 = 1;
    }
    else if (DAT_007208b8 == 0) goto LAB_0007ba9c;
    DAT_007208b8 = DAT_007208b8 + 1;
    if ((int)(animationSpeed * 120.5) <= DAT_007208b8) {
      DAT_007208b4 = 1;
    }
  }
LAB_0007ba9c:
  if ((g_gameMode == GAME_MODE_NORMAL) && (DAT_007208b4 != 0)) {
    g_HelpStateTimer = g_HelpStateTimer + 1;
    if (g_HelpState < 4) {
      if (g_HelpState < 1) {
        if ((-1 < g_HelpState) && (-1 < g_HelpCurId)) {
          uVar5 = 0xffffffffffffffff;
          if (0 < Help) {
            iVar6 = 0;
            uVar7 = 0;
            do {
              uVar5 = uVar7;
              if (*(int *)(HelpMsgs + iVar6 + 4) == g_HelpCurId) break;
              uVar7 = uVar5 + 1;
              iVar6 = iVar6 + 0x10;
              uVar5 = 0xffffffffffffffff;
            } while ((int)uVar7 < Help);
          }
          g_HelpCurIndex = (int)uVar5;
          g_HelpCurId = -1;
          if (-1 < g_HelpCurIndex) {
            g_HelpState = 1;
            g_HelpStateTimer = 0;
            if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
              sound::sound_CorePlay(0,1,(MobyInstance *)0x0);
              uVar5 = (ulonglong)(uint)g_HelpCurIndex;
            }
            uVar2 = *(undefined4 *)(HelpMsgs + (int)((uVar5 & 0xffffffff) << 4));
            draw::SetFontWindow((FontWindow *)auStack_60,0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,0x10,
                                in_stack_ffffff28);
            draw::FontPrintOpt(0x3ff0000000000000,(FontWindow *)auStack_60,0x80ffa888,uVar2,
                               0xffffffffffffffff);
            DAT_00720890 = ((int)(short)auStack_60._14_2_ >> 1) + 5;
            DAT_0072088c = ((int)(short)auStack_60._12_2_ >> 1) + 10;
            DAT_00720898 = draw::g_ScreenHeight + -0x3c;
            DAT_00720894 = 0x100;
            DAT_0072089c = 8;
            DAT_007208a0 = 8;
            if (draw::g_ScreenHeight + -0xc <
                draw::g_ScreenHeight + ((int)(short)auStack_60._14_2_ >> 1) + -0x37) {
              DAT_00720898 = (draw::g_ScreenHeight - DAT_00720890) + -0xc;
            }
          }
        }
      }
      else if (g_HelpState < 2) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
        if (((-1 < iVar6) && (music::g_SpeechPlaying.handle == 0)) && (music::g_PendingSpeech == -1)
           ) {
          music::g_PendingSpeech = iVar6 + 30000;
        }
        if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (5 < g_HelpStateTimer) {
            g_HelpState = 2;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 8 - g_HelpStateTimer;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (g_HelpState < 3) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (((int)(animationSpeed * 60.5) <= g_HelpStateTimer) ||
             (((int)(animationSpeed * 24.5) <= g_HelpStateTimer &&
              ((music::g_SpeechPlaying.status == 3 ||
               (*(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8) == -1)))))) {
            g_HelpState = 3;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 0;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (7 < g_HelpStateTimer) {
            g_HelpState = 4;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 0;
          g_HelpState = 7;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
    }
    else if (g_HelpState < 7) {
      if (g_HelpState < 5) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
          if (3 < g_HelpStateTimer) {
            iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
            if (((iVar6 != -1) && (iVar6 == music::g_SpeechPlaying.track + -30000)) &&
               (music::g_SpeechPlaying.status == 3)) {
              music::music_PlayPreseekedSpeech();
            }
            g_HelpState = 5;
            g_HelpStateTimer = 0;
          }
        }
        else {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpStateTimer = 4 - g_HelpStateTimer;
          g_HelpState = 6;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (g_HelpState < 6) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
        fVar4 = animationSpeed;
        if ((((int)(animationSpeed * 420.5) <= g_HelpStateTimer) &&
            (((iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8), iVar6 == -1 ||
              (iVar6 != music::g_SpeechPlaying.track + -30000)) ||
             ((music::g_SpeechPlaying.handle == 0 && (music::g_PendingSpeech == -1)))))) ||
           ((g_buttonsPressedThisFrame & TRIANGLE) != 0)) {
          iVar6 = g_HelpCurFlag * 8;
          if (*(short *)(CHAR_ARRAY_00a1000c + iVar6) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + iVar6) = *(short *)(CHAR_ARRAY_00a1000c + iVar6) + 1;
          }
          iVar1 = (int)(fVar4 * ((float)(longlong)update::g_GameFrameCount + 0.5));
          if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar6 + 2) < iVar1 / 600) {
            sVar3 = (short)(iVar1 >> 0x1f);
            *(short *)(CHAR_ARRAY_00a1000c + iVar6 + 2) =
                 ((short)(iVar1 / 600) + sVar3) -
                 ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
          }
          g_HelpState = 6;
          g_HelpStateTimer = 0;
          *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) =
               *(uint *)(CHAR_ARRAY_00a1000c + iVar6 + 4) | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else if (((DAT_0071fb59 == '\0') || (3 < g_HelpStateTimer)) ||
              ((g_buttonsPressedThisFrame & TRIANGLE) != 0)) {
        g_HelpState = 7;
        g_HelpStateTimer = 0;
      }
    }
    else if (g_HelpState < 8) {
      mobyutil::MB_RequestHelpMessage((MobyInstance *)0x5,STR_TO_USE_YOUR_BOMB_0x0000);
      iVar6 = *(int *)(HelpMsgs + g_HelpCurIndex * 0x10 + 8);
      if (((iVar6 != -1) && (iVar6 == music::g_SpeechPlaying.track + -30000)) &&
         (music::g_SpeechPlaying.status != 7 && music::g_SpeechPlaying.status != 6)) {
        music::g_SpeechPlaying.status = 5;
      }
      if (7 < g_HelpStateTimer) {
        g_HelpState = 8;
        if (g_HelpSuspended._0_2_ == 0) {
          g_HelpState = 0;
          g_HelpCurIndex = -1;
        }
        g_HelpStateTimer = 0;
      }
    }
    else if ((g_HelpState < 9) && (g_HelpSuspended._0_2_ == 0)) {
      if (-1 < g_HelpCurIndex) {
        if (g_HelpSuspended._2_2_ == 0) {
          iVar6 = fastfunc::FastDecTimerS32(&DAT_007208c0);
          if (iVar6 == 0) {
            return;
          }
          g_HelpState = 1;
          g_HelpStateTimer = 0;
          if ((DAT_0071fb59 != '\0') || (DAT_0071fb58 != '\0')) {
            sound::sound_CorePlay(0,1,(MobyInstance *)0x0);
          }
          uVar2 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
          draw::SetFontWindow((FontWindow *)(auStack_60 + 0x18),0xf0,0x1e0,0x2c,0x1d4,0x100,0x168,
                              0x10,in_stack_ffffff28);
          draw::FontPrintOpt(0x3ff0000000000000,(FontWindow *)(auStack_60 + 0x18),0x80ffa888,uVar2,
                             0xffffffffffffffff);
          DAT_00720890 = ((int)local_3a >> 1) + 5;
          DAT_00720898 = draw::g_ScreenHeight + -0x3c;
          if (draw::g_ScreenHeight + -0xc < draw::g_ScreenHeight + ((int)local_3a >> 1) + -0x37) {
            DAT_00720898 = (draw::g_ScreenHeight - DAT_00720890) + -0xc;
          }
          DAT_0072088c = ((int)local_3c >> 1) + 10;
          DAT_00720894 = 0x100;
          DAT_0072089c = 8;
          DAT_007208a0 = 8;
          g_HelpSuspended._2_2_ = g_HelpSuspended._2_2_ + 1;
          return;
        }
        if (-1 < g_HelpCurIndex) {
          if (*(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) != -1) {
            *(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) =
                 *(short *)(CHAR_ARRAY_00a1000c + g_HelpCurFlag * 8) + 1;
          }
        }
      }
      iVar1 = g_HelpCurFlag * 8;
      iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)*(ushort *)(CHAR_ARRAY_00a1000c + iVar1 + 2) < iVar6 / 600) {
        sVar3 = (short)(iVar6 >> 0x1f);
        *(short *)(CHAR_ARRAY_00a1000c + iVar1 + 2) =
             ((short)(iVar6 / 600) + sVar3) - ((short)((short)(iVar6 / 0x2580000) + sVar3) >> 0xf);
      }
      g_HelpSuspended._2_2_ = 0;
      g_HelpCurIndex = -1;
      g_HelpState = 0;
      *(uint *)(CHAR_ARRAY_00a1000c + iVar1 + 4) =
           *(uint *)(CHAR_ARRAY_00a1000c + iVar1 + 4) | 1 << (Level & 0x3f) | 0x80000000;
    }
  }
  else {
    g_HelpCurId = -1;
    g_HelpState = 0;
    g_HelpStateTimer = 0;
  }
  return;
}



//==== 0007c838  ns=help  size=0x134
// sig: void Help_DrawIconBox(void)
// callers(0): 
// callees(3): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006a718 draw::DrawRoundedRect

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_DrawIconBox(void)

{
  int iVar1;
  int iVar2;
  
  DAT_0072089c = 0x20;
  DAT_007208a0 = 0x20;
  draw::DrawRoundedRect
            (DAT_00720898 + -0x20,DAT_00720898 + 0x20,DAT_00720894 + -0x20,DAT_00720894 + 0x20,0x60)
  ;
  iVar1 = DAT_00720894 + -0x20;
  iVar2 = DAT_00720898 + -0x20;
  draw::GetEffectTex(4);
  draw::Sprite_DrawShapeWrapper(iVar1,iVar2,0x40,0x40,0,0,0x40,0x40);
  return;
}



//==== 0007c978  ns=help  size=0x52c
// sig: void Help_Draw(void)
// callers(1): 0006bb78 draw::DefaultDraw
// callees(5): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006a718 draw::DrawRoundedRect; 0006ac90 draw::SetFontWindow; 0007100c draw::FontPrintOpt

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void help::Help_Draw(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int in_stack_ffffff58;
  undefined1 auStack_30 [24];
  
  if (((g_HelpState != 0) && (DAT_007208b4 != 0)) &&
     ((DAT_0071fb59 != '\0' || (DAT_0071fb58 != '\0')))) {
    if (g_HelpState < 3) {
      if (0 < g_HelpState) {
        if (g_HelpState < 2) {
          if (DAT_0071fb59 != '\0') {
            DAT_0072089c = g_HelpStateTimer * 4 + 8;
            DAT_007208a0 = DAT_0072089c;
            draw::DrawRoundedRect
                      (DAT_00720898 - DAT_0072089c,DAT_00720898 + DAT_0072089c,
                       DAT_00720894 - DAT_0072089c,DAT_00720894 + DAT_0072089c,0x60);
          }
        }
        else if (DAT_0071fb59 != '\0') {
          DAT_0072089c = 0x20;
          DAT_007208a0 = 0x20;
          draw::DrawRoundedRect
                    (DAT_00720898 + -0x20,DAT_00720898 + 0x20,DAT_00720894 + -0x20,
                     DAT_00720894 + 0x20,0x60);
          iVar3 = DAT_00720894 + -0x20;
          iVar5 = DAT_00720898 + -0x20;
          draw::GetEffectTex(4);
          draw::Sprite_DrawShapeWrapper(iVar3,iVar5,0x40,0x40,0,0,0x40,0x40);
        }
      }
    }
    else if (g_HelpState < 7) {
      if (g_HelpState < 4) {
        if (DAT_0071fb59 != '\0') {
          uVar6 = DAT_0072088c * g_HelpStateTimer + g_HelpStateTimer * -0x20;
          uVar4 = DAT_00720890 * g_HelpStateTimer + g_HelpStateTimer * -0x20;
          DAT_0072089c = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0) + 0x20;
          DAT_007208a0 = ((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0) + 0x20;
          draw::DrawRoundedRect
                    (DAT_00720898 - DAT_007208a0,DAT_00720898 + DAT_007208a0,
                     DAT_00720894 - DAT_0072089c,DAT_00720894 + DAT_0072089c,0x60);
          iVar3 = DAT_00720894 + -0x20;
          iVar5 = DAT_00720898 + -0x20;
          draw::GetEffectTex(4);
          draw::Sprite_DrawShapeWrapper(iVar3,iVar5,0x40,0x40,0,0,0x40,0x40);
        }
      }
      else if (DAT_0071fb59 != '\0') {
        DAT_0072089c = DAT_0072088c;
        DAT_007208a0 = DAT_00720890;
        draw::DrawRoundedRect
                  (300,0x17c,
                   ((LZCOUNT(2 - g_Language) << 0x3a) >> 0x3f & 0xfffffffffffffff6U) + 0x28,
                   ((LZCOUNT(2 - g_Language) << 0x3a) >> 0x3f & 5U) + 0x1d8,0x60);
        uVar6 = 0x80ffa888;
        if (g_HelpState == 4) {
          uVar6 = g_HelpStateTimer << 0x1d | 0xffa888;
        }
        else if (g_HelpState == 6) {
          uVar6 = (uint)((4 - (ulonglong)(uint)g_HelpStateTimer & 0xffffffff) << 0x1d) | 0xffa888;
        }
        iVar3 = 0;
        uVar2 = *(undefined4 *)(HelpMsgs + g_HelpCurIndex * 0x10);
        if ((1 < g_Language) && (g_Language < 6)) {
          iVar3 = 10;
        }
        draw::SetFontWindow((FontWindow *)auStack_30,300,0x17c,iVar3 + 0x28,0x1d8,0xfa,0x154,0x12,
                            in_stack_ffffff58);
        fVar1 = 1.0;
        if (g_Language == 3) {
          fVar1 = 0.85;
        }
        draw::FontPrintOpt((double)fVar1,auStack_30,uVar6,uVar2,0xffffffffffffffff);
      }
    }
    else if ((g_HelpState < 8) && (DAT_0071fb59 != '\0')) {
      uVar6 = DAT_0072089c * g_HelpStateTimer + g_HelpStateTimer * -8;
      uVar4 = DAT_007208a0 * g_HelpStateTimer + g_HelpStateTimer * -8;
      iVar5 = DAT_007208a0 - (((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0));
      iVar3 = DAT_0072089c - (((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0));
      draw::DrawRoundedRect
                (DAT_00720898 - iVar5,DAT_00720898 + iVar5,DAT_00720894 - iVar3,DAT_00720894 + iVar3
                 ,(8 - g_HelpStateTimer) * 0xc);
    }
  }
  return;
}



//==== 0007cea4  ns=help  size=0x68
// sig: short Help_GetPairedId(short id, int column)
// callers(1): 001402c8 pause::MenuText_Draw
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

short help::Help_GetPairedId(short id,int column)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = &g_HelpIdPairs + column;
  iVar2 = 0;
  do {
    if (*psVar1 == id) {
      return *(short *)((int)&g_HelpIdPairs + iVar2 * 4 + ((uint)LZCOUNT(column) >> 4 & 2));
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 2;
  } while (iVar2 < 0x96);
  return -1;
}



//==== 0007cf0c  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_HERO(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_HERO(void)

{
  DAT_00720b70 = 0x10000;
  return;
}



//==== 0007cf28  ns=hero  size=0x1cc
// sig: void Hero_AddGravity(float amount, float * out, float * in)
// callers(8): 0007d0f4 hero::Hero_SubGravity; 0007d6d0 hero::Hero_MapToMoby; 0007e5e8 hero::Hero_GetGroundInfo; 00081e38 hero::Hero_MapToMobyNonRatchet; 000888c8 hero::Hero_ResolveCollision; 0009d6b0 hero::Hero_JumpThrustGrav; 000a11e8 hero::???_Hero_ApplyHitGravityToMobyList; 000aaec0 hero::HandleHeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_AddGravity(float amount,float *out,float *in)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (g_heroGravityMode == 0) {
    out[2] = in[2] - amount;
  }
  else if (g_heroGravityMode < 2) {
    fVar1 = 0.0;
    fVar2 = SQRT(g_heroGroundNormal * g_heroGroundNormal + DAT_00969f54 * DAT_00969f54 +
                 DAT_00969f58 * DAT_00969f58);
    fVar5 = fVar1;
    fVar6 = fVar1;
    if (fVar2 != 0.0) {
      fVar2 = -amount / fVar2;
      fVar1 = DAT_00969f58 * fVar2;
      fVar5 = DAT_00969f54 * fVar2;
      fVar6 = g_heroGroundNormal * fVar2;
    }
    fVar2 = *in;
    fVar3 = in[1];
    fVar4 = in[2];
    out[3] = in[3];
    *out = fVar2 + fVar6;
    out[1] = fVar3 + fVar5;
    out[2] = fVar4 + fVar1;
  }
  else if (g_heroGravityMode < 3) {
    if ((g_heroState == UNK_3E) && (g_framesNotGrounded == 0)) {
      fVar1 = 0.0;
      fVar2 = SQRT(g_heroGroundNormal * g_heroGroundNormal + DAT_00969f54 * DAT_00969f54 +
                   DAT_00969f58 * DAT_00969f58);
      fVar5 = fVar1;
      fVar6 = fVar1;
      if (fVar2 != 0.0) {
        fVar2 = -amount / fVar2;
        fVar1 = DAT_00969f58 * fVar2;
        fVar5 = DAT_00969f54 * fVar2;
        fVar6 = g_heroGroundNormal * fVar2;
      }
    }
    else {
      fVar1 = 0.0;
      fVar2 = SQRT(g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74 +
                   DAT_00969f78 * DAT_00969f78);
      fVar5 = fVar1;
      fVar6 = fVar1;
      if (fVar2 != 0.0) {
        fVar2 = amount / fVar2;
        fVar1 = DAT_00969f78 * fVar2;
        fVar5 = DAT_00969f74 * fVar2;
        fVar6 = g_heroGravityDir * fVar2;
      }
    }
    fVar2 = *in;
    fVar3 = in[1];
    fVar4 = in[2];
    out[3] = in[3];
    *out = fVar2 + fVar6;
    out[1] = fVar3 + fVar5;
    out[2] = fVar4 + fVar1;
  }
  return;
}



//==== 0007d0f4  ns=hero  size=0x24
// sig: void Hero_SubGravity(float amount, float * out, float * in)
// callers(1): 0042c150 mobyupdate_unsorted::UpdateMoby_71
// callees(1): 0007cf28 hero::Hero_AddGravity

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_SubGravity(float amount,float *out,float *in)

{
  Hero_AddGravity(-amount,out,in);
  return;
}



//==== 0007d118  ns=hero  size=0x50
// sig: int Hero_IsSwimming(void)
// callers(6): 000b72b0 hero::TransitionMovement; 00286158 mobyupdate_unsorted::UpdateMoby_1469; 00286ae0 mobyupdate_unsorted::UpdateMoby_1470; 004035b8 mobyupdate_helpers::M655_004035b8; 00404d18 mobyupdate_unsorted::UpdateMoby_655; 0040ac50 mobyupdate_unsorted::UpdateMoby_669
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_IsSwimming(void)

{
  if ((g_heroStateType != 0x12) && (g_heroStateType != 0x11)) {
    if ((g_heroState != DEATH_DROWNING) &&
       (((g_heroState != DEATH_WATER_LASER && (g_heroState != UNDERWATER_DAMAGE)) &&
        (g_heroState != UNK_75)))) {
      return 0;
    }
  }
  return 1;
}



//==== 0007d178  ns=hero  size=0x6c
// sig: undefined Hero_RotEffects(void)
// callers(0): 
// callees(1): 00116b70 mobyutil::MB_SwingMotion

void hero::Hero_RotEffects(void)

{
  if (g_heroState == DEATH_ICE) {
    mobyutil::MB_SwingMotion
              (0x3fc6571840000000,(double)(mobyutil::g_FrameTime * 1.5707964),
               (double)(mobyutil::g_FrameTime * 2.0943952),g_heroMobyPtr,&DAT_0096a390,&DAT_0096a394
              );
  }
  return;
}



//==== 0007d200  ns=hero  size=0x278
// sig: undefined Hero_PosEffects(void)
// callers(1): 0007d6d0 hero::Hero_MapToMoby
// callees(2): 00116a68 mobyutil::MB_BobMotion; 00500ca4 fastfunc::FastEulerToMtx1
// strings: 0007d1f8: '>W\n=`'

void hero::Hero_PosEffects(void)

{
  int iVar1;
  MobyInstance *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  if (g_heroState == DEATH_ICE) {
    mobyutil::MB_BobMotion
              (0.3,mobyutil::g_FrameTime * 6.981317,g_heroMobyPtr,(float *)&DAT_0096a388,
               (float *)&DAT_0096a38c);
  }
  if ((g_heroState == HOVERBOARD_RIDING) && (DAT_0096a59c == 0)) {
    mobyutil::MB_BobMotion
              (1.1,mobyutil::g_FrameTime * 5.2359877,g_heroMobyPtr,(float *)&DAT_0096a388,
               (float *)&DAT_0096a38c);
    pMVar2 = g_heroMobyPtr;
    iVar1 = g_heroBoardMoby;
    if (g_heroBoardMoby != 0) {
      *(f32 *)(g_heroBoardMoby + 0x10) = (g_heroMobyPtr->pos).x;
      *(f32 *)(iVar1 + 0x14) = (pMVar2->pos).y;
      *(f32 *)(iVar1 + 0x18) = (pMVar2->pos).z;
      *(f32 *)(iVar1 + 0x1c) = (pMVar2->pos).w;
      dVar6 = (double)((pMVar2->transform).v0.x * 0.0 + (pMVar2->transform).v1.x * 0.0 +
                      (pMVar2->transform).v2.x * 0.21);
      dVar5 = (double)((pMVar2->transform).v0.y * 0.0 + (pMVar2->transform).v1.y * 0.0 +
                      (pMVar2->transform).v2.y * 0.21);
      dVar4 = (double)((pMVar2->transform).v0.z * 0.0 + (pMVar2->transform).v1.z * 0.0 +
                      (pMVar2->transform).v2.z * 0.21);
      dVar3 = (double)((pMVar2->transform).v0.w * 0.0 + (pMVar2->transform).v1.w * 0.0 +
                       (pMVar2->transform).v2.w * 0.21 + 0.0);
      fastfunc::FastEulerToMtx1(&local_70,&DAT_00721c10);
      iVar1 = g_heroBoardMoby;
      *(float *)(g_heroBoardMoby + 0x10) =
           *(float *)(g_heroBoardMoby + 0x10) +
           (float)((double)local_70 * dVar6) + (float)((double)local_60 * dVar5) +
           (float)((double)local_50 * dVar4) + (float)((double)local_40 * dVar3);
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
      *(float *)(iVar1 + 0x14) =
           *(float *)(iVar1 + 0x14) +
           (float)((double)local_6c * dVar6) + (float)((double)local_5c * dVar5) +
           (float)((double)local_4c * dVar4) + (float)((double)local_3c * dVar3);
      *(float *)(iVar1 + 0x18) =
           *(float *)(iVar1 + 0x18) +
           (float)((double)local_68 * dVar6) + (float)((double)local_58 * dVar5) +
           (float)((double)local_48 * dVar4) + (float)((double)local_38 * dVar3);
    }
  }
  return;
}



//==== 0007d478  ns=hero  size=0x148
// sig: undefined Hero_MakeVisible(void)
// callers(6): 0007d6d0 hero::Hero_MapToMoby; 00161788 space::UpdateSpace; 00167a30 update::mode_sceneUnInit; 0016b038 vendor::Vendor_EndWeaponCutscene; 0016ba38 vendor::Vendor_RestoreHero; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419
// callees(0): 

void hero::Hero_MakeVisible(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &g_heroMtx;
  iVar2 = 0;
  *(ushort *)(g_ratchetMoby + 0x34) = *(ushort *)(g_ratchetMoby + 0x34) & 0xfffe;
  do {
    if (puVar1[0x424] != 0) {
      *(ushort *)(*(int *)((int)&g_currentWeaponMoby + iVar2) + 0x34) =
           *(ushort *)(*(int *)((int)&g_currentWeaponMoby + iVar2) + 0x34) & 0xfffe;
    }
    if (puVar1[0x425] != 0) {
      *(ushort *)(*(int *)((int)&DAT_0096ad74 + iVar2) + 0x34) =
           *(ushort *)(*(int *)((int)&DAT_0096ad74 + iVar2) + 0x34) & 0xfffe;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x50;
    puVar1 = puVar1 + 0x14;
  } while (iVar3 < 7);
  if (DAT_0096ae6c != 0) {
    *(ushort *)(DAT_0096ae6c + 0x34) = *(ushort *)(DAT_0096ae6c + 0x34) & 0xfffe;
  }
  if ((g_heroType == '\x01') && (DAT_0096b304 != 0)) {
    *(ushort *)(DAT_0096b304 + 0x34) = *(ushort *)(DAT_0096b304 + 0x34) & 0xfffe;
  }
  if (g_hasClank != 0) {
    if (DAT_0096ae60 != 0) {
      *(ushort *)(DAT_0096ae60 + 0x34) = *(ushort *)(DAT_0096ae60 + 0x34) | 0x41;
    }
    if (DAT_0096ae64 != 0) {
      *(ushort *)(DAT_0096ae64 + 0x34) = *(ushort *)(DAT_0096ae64 + 0x34) | 0x41;
    }
    if (DAT_0096ae6c != 0) {
      *(ushort *)(DAT_0096ae6c + 0x34) = *(ushort *)(DAT_0096ae6c + 0x34) | 0x41;
    }
  }
  if ((((DAT_0096bd8e != '\0') && (g_CurrentWeapon == 8)) || (DAT_0096bd8f != '\0')) &&
     (g_currentWeaponMoby != (MobyInstance *)0x0)) {
    g_currentWeaponMoby->modeBits = g_currentWeaponMoby->modeBits | (UNK_40|DISABLED);
  }
  return;
}



//==== 0007d5c0  ns=hero  size=0xfc
// sig: undefined Hero_MakeInvisible(void)
// callers(8): 0007d6d0 hero::Hero_MapToMoby; 00081e38 hero::Hero_MapToMobyNonRatchet; 00086b60 hero::SetHeroType; 0015e430 space::PlaySpaceCutscene; 00167e60 update::mode_sceneInit; 0016a8f0 vendor::Spawn_Moby11_Vendor; 0016b650 vendor::StartGadgetPickupCutscene; 00272cd0 mobyupdate_unsorted::UpdateMoby_1419
// callees(0): 

void hero::Hero_MakeInvisible(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &g_heroMtx;
  iVar2 = 0;
  *(ushort *)(g_ratchetMoby + 0x34) = *(ushort *)(g_ratchetMoby + 0x34) | 1;
  do {
    if (puVar1[0x424] != 0) {
      *(ushort *)(*(int *)((int)&g_currentWeaponMoby + iVar2) + 0x34) =
           *(ushort *)(*(int *)((int)&g_currentWeaponMoby + iVar2) + 0x34) | 1;
    }
    if (puVar1[0x425] != 0) {
      *(ushort *)(*(int *)((int)&DAT_0096ad74 + iVar2) + 0x34) =
           *(ushort *)(*(int *)((int)&DAT_0096ad74 + iVar2) + 0x34) | 1;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x50;
    puVar1 = puVar1 + 0x14;
  } while (iVar3 < 7);
  if (DAT_0096ae6c != 0) {
    *(ushort *)(DAT_0096ae6c + 0x34) = *(ushort *)(DAT_0096ae6c + 0x34) | 1;
  }
  if ((g_heroType == '\x01') && (DAT_0096b304 != 0)) {
    *(ushort *)(DAT_0096b304 + 0x34) = *(ushort *)(DAT_0096b304 + 0x34) | 1;
  }
  if ((((g_CurrentWeapon == 8) && (g_currentWeaponMoby != (MobyInstance *)0x0)) &&
      (g_gameMode == GAME_MODE_NORMAL)) && (g_currentWeaponMoby->state != '\0')) {
    g_currentWeaponMoby->modeBits =
         g_currentWeaponMoby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 0007d6d0  ns=hero  size=0x2e0
// sig: undefined Hero_MapToMoby(void)
// callers(2): 0007f018 hero::Hero_ResetHero; 000954c8 hero::HeroUpdate
// callees(8): 0007cf28 hero::Hero_AddGravity; 0007d200 hero::Hero_PosEffects; 0007d478 hero::Hero_MakeVisible; 0007d5c0 hero::Hero_MakeInvisible; 000f06f0 mobyfunc::MB_SetCollPrimFromWorld; 000f31a8 mobyfunc::UpdateMobyTransform; 00116b70 mobyutil::MB_SwingMotion; 0050027c fastfunc::FastMemCopy32
// strings: 0096c074: 'None'

void hero::Hero_MapToMoby(void)

{
  bool bVar1;
  MobyInstance *pMVar2;
  MobyModeBit MVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_30 [4];
  
  g_heroMobyPtr->damage = -1;
  if (g_heroInvisible == '\0') {
    Hero_MakeVisible();
  }
  else {
    Hero_MakeInvisible();
  }
  pMVar2 = g_heroMobyPtr;
  (g_heroMobyPtr->pos).x = g_heroPosition.x;
  (pMVar2->pos).y = g_heroPosition.y;
  (pMVar2->pos).z = g_heroPosition.z;
  (pMVar2->pos).w = g_heroPosition.w;
  Hero_PosEffects();
  pMVar2 = g_heroMobyPtr;
  bVar1 = g_heroState == DEATH_ICE;
  (g_heroMobyPtr->rotation).x = g_heroRotation.x;
  (pMVar2->rotation).y = g_heroRotation.y;
  (pMVar2->rotation).z = g_heroRotation.z;
  (pMVar2->rotation).w = g_heroRotation.w;
  if (bVar1) {
    mobyutil::MB_SwingMotion
              (0x3fc6571840000000,(double)(mobyutil::g_FrameTime * 1.5707964),
               (double)(mobyutil::g_FrameTime * 2.0943952),pMVar2,&DAT_0096a390,&DAT_0096a394);
  }
  fastfunc::FastMemCopy32(&g_heroMobyPtr->transform,&g_heroMtx,0x30);
  mobyfunc::UpdateMobyTransform(g_heroMobyPtr);
  if ((g_heroGhostFrames != 0) || (g_heroMobyPtr->collision == (ushort *)0x0)) goto LAB_0007d944;
  Hero_AddGravity(-g_heroCollBottom,local_30,local_30);
  dVar6 = 0.05000000074505806;
  dVar5 = (double)(g_heroCollTop - g_heroCollBottom);
  if ((double)(g_heroCollTop - g_heroCollBottom) < 0.05000000074505806) {
    dVar5 = dVar6;
  }
  mobyfunc::MB_SetCollPrimFromWorld((double)g_heroCollRadius,dVar5,g_heroMobyPtr,0,local_30);
  dVar5 = (double)(float)((double)g_heroCollRadius + dVar6);
  if (g_heroStateType == 4) {
    dVar5 = (double)(float)(dVar5 + 0.15000000596046448);
  }
  if ((g_heroStateType == 0x12) || (g_heroStateType == 0x11)) {
LAB_0007d8d0:
    bVar1 = true;
  }
  else if ((g_heroState == DEATH_DROWNING) ||
          (((g_heroState == DEATH_WATER_LASER || (g_heroState == UNDERWATER_DAMAGE)) ||
           (bVar1 = false, g_heroState == UNK_75)))) goto LAB_0007d8d0;
  if (bVar1) {
    dVar5 = (double)g_heroCollBottom;
  }
  Hero_AddGravity((float)-dVar5,local_30,local_30);
  dVar4 = (double)(float)((double)g_heroCollTop - dVar5);
  if ((double)(float)((double)g_heroCollTop - dVar5) < dVar6) {
    dVar4 = dVar6;
  }
  mobyfunc::MB_SetCollPrimFromWorld((double)g_heroCollRadius,dVar4,g_heroMobyPtr,1,local_30);
LAB_0007d944:
  if (g_heroMobyPtr->oClass == RATCHET) {
    if (Cheats[5] == '\0') {
      MVar3 = g_heroMobyPtr->modeBits &
              (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
               DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
               TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      MVar3 = g_heroMobyPtr->modeBits | MIRROR;
    }
    g_heroMobyPtr->modeBits = MVar3;
  }
  return;
}



//==== 0007d9b8  ns=hero  size=0x40c
// sig: void Hero_GetHeroRelativeGroundAngs(float * normal, float * outAngs)
// callers(1): 0007e5e8 hero::Hero_GetGroundInfo
// callees(2): 00500ca4 fastfunc::FastEulerToMtx1; 005010c0 fastfunc::FastNormalizeRMtx4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetHeroRelativeGroundAngs(float *normal,float *outAngs)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f28;
  double dVar16;
  ulonglong in_f29;
  double dVar17;
  ulonglong in_f30;
  double dVar18;
  ulonglong in_f31;
  double dVar19;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 400;
  puVar4 = (ulonglong *)lVar11;
  *puVar4 = uVar9;
  puVar4[0x34] = in_LR;
  puVar4[0x2e] = in_f28;
  puVar4[0x2f] = in_f29;
  puVar4[0x30] = in_f30;
  puVar4[0x31] = in_f31;
  puVar4[0x2d] = unaff_r31;
  dVar19 = (double)*normal;
  dVar18 = (double)normal[1];
  puVar4[0x2c] = unaff_r30;
  dVar17 = (double)normal[2];
  dVar16 = (double)normal[3];
  puVar4[0x2b] = unaff_r29;
  fastfunc::FastEulerToMtx1(uVar9 - 0x110,ZEXT48(g_heroMobyPtr) + 0x40);
  fastfunc::FastNormalizeRMtx4(uVar9 - 0xd0,uVar9 - 0x110);
  fVar1 = (float)((double)*(float *)(puVar4 + 0x18) * dVar19) +
          (float)((double)*(float *)(puVar4 + 0x1a) * dVar18) +
          (float)((double)*(float *)(puVar4 + 0x1c) * dVar17) +
          (float)((double)*(float *)(puVar4 + 0x1e) * dVar16);
  fVar2 = (float)((double)*(float *)(puVar4 + 0x19) * dVar19) +
          (float)((double)*(float *)(puVar4 + 0x1b) * dVar18) +
          (float)((double)*(float *)(puVar4 + 0x1d) * dVar17) +
          (float)((double)*(float *)(puVar4 + 0x1f) * dVar16);
  *(float *)(puVar4 + 0xf) = fVar2;
  fVar2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)((int)puVar4 + 0xc4) * dVar19) +
          (float)((double)*(float *)((int)puVar4 + 0xd4) * dVar18) +
          (float)((double)*(float *)((int)puVar4 + 0xe4) * dVar17) +
          (float)((double)*(float *)((int)puVar4 + 0xf4) * dVar16);
  fVar6 = ABS(fVar1);
  *(float *)(puVar4 + 0x21) = fVar1;
  fVar5 = ABS(fVar2);
  *(float *)((int)puVar4 + 0x104) = fVar2;
  *(float *)((int)puVar4 + 0x10c) = fVar5 - fVar6;
  fVar1 = 0.0;
  iVar13 = (int)(((ulonglong)(*(uint *)((int)puVar4 + 0x104) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar4 + 0x10c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar4 + 0x21) >> 0x1d) & 4) << 2);
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
  fVar2 = *(float *)(&DAT_00735904 + iVar13);
  if (0.0 <= *(float *)((int)puVar4 + 0x10c)) {
    fVar5 = ABS(*(float *)(puVar4 + 0x21));
    fVar6 = ABS(*(float *)((int)puVar4 + 0x104));
  }
  fVar7 = fVar1;
  if (0.0 < fVar6) {
    iVar13 = 4;
    iVar14 = 4;
    fVar5 = (fVar5 - fVar6) / (fVar5 + fVar6);
    lVar10 = lVar11;
    do {
      iVar13 = iVar13 + -1;
      *(float *)((int)lVar10 + 0x130) = fVar5;
      lVar10 = lVar10 + 4;
    } while (iVar13 != 0);
    fVar5 = fVar5 * fVar5;
    lVar10 = uVar9 - 0x180;
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar4 + 0x134) = *(float *)((int)puVar4 + 0x134) * fVar5;
    *(float *)(puVar4 + 0x27) = *(float *)(puVar4 + 0x27) * fVar6;
    *(float *)((int)puVar4 + 0x13c) = *(float *)((int)puVar4 + 0x13c) * fVar6 * fVar5;
    do {
      iVar14 = iVar14 + -1;
      *(float *)((int)lVar10 + 0x130) = *(float *)((int)lVar10 + 0x120) * fVar6 * fVar6;
      lVar10 = lVar10 + 4;
    } while (iVar14 != 0);
    iVar14 = 8;
    iVar13 = 0;
    iVar15 = 8;
    lVar10 = lVar11;
    do {
      pfVar8 = (float *)((int)&DAT_007358e0 + iVar13);
      iVar14 = iVar14 + -1;
      iVar13 = iVar13 + 4;
      *(float *)((int)lVar10 + 0x130) = *(float *)((int)lVar10 + 0x130) * *pfVar8;
      lVar10 = lVar10 + 4;
      lVar12 = lVar11;
      fVar5 = fVar1;
    } while (iVar14 != 0);
    do {
      iVar15 = iVar15 + -1;
      fVar5 = fVar5 + *(float *)((int)lVar12 + 0x130);
      lVar12 = lVar12 + 4;
    } while (iVar15 != 0);
    fVar7 = (fVar5 + 0.7853982) * fVar3 + fVar2;
  }
  *outAngs = fVar7;
  fVar6 = ABS(*(float *)(puVar4 + 0xf));
  fVar7 = ABS(*(float *)(puVar4 + 0xe));
  *(float *)(puVar4 + 0x20) = fVar6 - fVar7;
  iVar13 = (int)(((ulonglong)(*(uint *)(puVar4 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar4 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar4 + 0xe) >> 0x1d) & 4) << 2);
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar13);
  fVar2 = *(float *)(&DAT_00735904 + iVar13);
  fVar5 = fVar7;
  if (0.0 <= *(float *)(puVar4 + 0x20)) {
    fVar5 = fVar6;
    fVar6 = fVar7;
  }
  if (0.0 < fVar5) {
    iVar13 = 4;
    iVar14 = 4;
    fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
    lVar10 = lVar11;
    do {
      iVar13 = iVar13 + -1;
      *(float *)((int)lVar10 + 0x110) = fVar5;
      lVar10 = lVar10 + 4;
    } while (iVar13 != 0);
    fVar5 = fVar5 * fVar5;
    lVar10 = uVar9 - 0x180;
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar4 + 0x114) = *(float *)((int)puVar4 + 0x114) * fVar5;
    *(float *)(puVar4 + 0x23) = *(float *)(puVar4 + 0x23) * fVar6;
    *(float *)((int)puVar4 + 0x11c) = *(float *)((int)puVar4 + 0x11c) * fVar6 * fVar5;
    do {
      iVar14 = iVar14 + -1;
      *(float *)((int)lVar10 + 0x110) = *(float *)((int)lVar10 + 0x100) * fVar6 * fVar6;
      lVar10 = lVar10 + 4;
    } while (iVar14 != 0);
    iVar14 = 8;
    iVar13 = 0;
    iVar15 = 8;
    lVar10 = lVar11;
    do {
      iVar14 = iVar14 + -1;
      pfVar8 = (float *)((int)&DAT_007358e0 + iVar13);
      iVar13 = iVar13 + 4;
      *(float *)((int)lVar10 + 0x110) = *(float *)((int)lVar10 + 0x110) * *pfVar8;
      lVar10 = lVar10 + 4;
    } while (iVar14 != 0);
    do {
      iVar15 = iVar15 + -1;
      iVar13 = (int)lVar11;
      lVar11 = lVar11 + 4;
      fVar1 = fVar1 + *(float *)(iVar13 + 0x110);
    } while (iVar15 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
  }
  outAngs[1] = -fVar1;
  return;
}



//==== 0007dde0  ns=hero  size=0x208
// sig: void Hero_GetHeroRelativePolarVector(float dist, float ang, float z, float * out)
// callers(6): 0007e5e8 hero::Hero_GetGroundInfo; 00088208 hero::Hero_CheckWall; 0008af28 hero::???_Hero_UpdateGroundProbe; 00094168 hero::???_Hero_UpdateCrateTargeting; 00098878 hero::Hero_CheckLedgeAhead; 000aaec0 hero::HandleHeroMovement
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetHeroRelativePolarVector(float dist,float ang,float z,float *out)

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
  
  fVar2 = ang + 1.5707963;
  fVar3 = fVar2;
  if (3.1415925 - fVar2 <= fVar2) {
    fVar3 = 3.1415925 - fVar2;
  }
  if (fVar3 <= -3.1415925 - fVar2) {
    fVar3 = -3.1415925 - fVar2;
  }
  fVar2 = fVar3 * fVar3;
  fVar1 = fVar2 * fVar2 * fVar3;
  fVar4 = fVar2 * fVar1;
  fVar2 = (fVar3 + fVar2 * fVar3 * -0.16666657 + fVar1 * 0.0083330255 + fVar4 * -0.0001980741 +
          fVar2 * fVar4 * 2.601887e-06) * dist;
  *out = fVar2;
  fVar3 = ang;
  if (3.1415925 - ang <= ang) {
    fVar3 = 3.1415925 - ang;
  }
  if (fVar3 <= -3.1415925 - ang) {
    fVar3 = -3.1415925 - ang;
  }
  fVar6 = fVar3 * fVar3;
  out[2] = z;
  fVar4 = fVar6 * fVar6 * fVar3;
  fVar5 = fVar6 * fVar4;
  fVar1 = out[3];
  fVar3 = (fVar3 + fVar6 * fVar3 * -0.16666657 + fVar4 * 0.0083330255 + fVar5 * -0.0001980741 +
          fVar6 * fVar5 * 2.601887e-06) * dist;
  out[1] = fVar3;
  fVar7 = DAT_00969ce4 * fVar2;
  fVar13 = DAT_00969cf4 * fVar3;
  fVar8 = DAT_00969ce8 * fVar2;
  fVar14 = DAT_00969cf8 * fVar3;
  fVar9 = DAT_00969cec * fVar2;
  fVar15 = DAT_00969cfc * fVar3;
  fVar4 = DAT_00969d04 * z;
  fVar10 = DAT_00969d14 * fVar1;
  fVar5 = DAT_00969d08 * z;
  fVar6 = DAT_00969d0c * z;
  fVar11 = DAT_00969d18 * fVar1;
  fVar12 = DAT_00969d1c * fVar1;
  *out = g_heroMtx * fVar2 + DAT_00969cf0 * fVar3 + DAT_00969d00 * z + DAT_00969d10 * fVar1;
  out[1] = fVar7 + fVar13 + fVar4 + fVar10;
  out[2] = fVar8 + fVar14 + fVar5 + fVar11;
  out[3] = fVar9 + fVar15 + fVar6 + fVar12;
  *out = *out + g_heroPosition.x;
  out[1] = out[1] + g_heroPosition.y;
  out[2] = out[2] + g_heroPosition.z;
  return;
}



//==== 0007dff0  ns=hero  size=0x3d0
// sig: float Hero_Slope(float * vector)
// callers(4): 0007e5e8 hero::Hero_GetGroundInfo; 00098878 hero::Hero_CheckLedgeAhead; 000a0f40 hero::Hero_EdgeStop; 000a5a58 hero::Hero_PredictLand
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hero::Hero_Slope(float *vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar12;
  longlong lVar11;
  longlong lVar13;
  int iVar14;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x90;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  if (g_heroGravityMode == 0) {
    fVar4 = vector[2];
    fVar2 = ABS(vector[2]);
    fVar1 = SQRT(*vector * *vector + vector[1] * vector[1]);
    fVar7 = ABS(fVar1);
    *(float *)((int)puVar5 + 0x3c) = fVar1;
    *(float *)(puVar5 + 8) = fVar2 - fVar7;
    fVar1 = 0.0;
    iVar10 = (int)(((ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar5 + 8) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar5 + 0x3c) >> 0x1d) & 4) << 2);
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar10);
    fVar4 = *(float *)(&DAT_00735904 + iVar10);
    fVar6 = fVar2;
    if (0.0 <= *(float *)(puVar5 + 8)) {
      fVar6 = ABS(*(float *)((int)puVar5 + 0x3c));
      fVar7 = fVar2;
    }
    if (0.0 < fVar7) {
      iVar12 = 4;
      iVar10 = 4;
      fVar2 = (fVar6 - fVar7) / (fVar6 + fVar7);
      lVar13 = lVar11;
      do {
        iVar12 = iVar12 + -1;
        *(float *)((int)lVar13 + 100) = fVar2;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      fVar2 = fVar2 * fVar2;
      lVar13 = uVar9 - 0x80;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar5 + 0xd) = *(float *)(puVar5 + 0xd) * fVar2;
      *(float *)((int)puVar5 + 0x6c) = *(float *)((int)puVar5 + 0x6c) * fVar6;
      *(float *)(puVar5 + 0xe) = *(float *)(puVar5 + 0xe) * fVar6 * fVar2;
      do {
        iVar10 = iVar10 + -1;
        *(float *)((int)lVar13 + 100) = *(float *)((int)lVar13 + 0x54) * fVar6 * fVar6;
        lVar13 = lVar13 + 4;
      } while (iVar10 != 0);
      iVar12 = 8;
      iVar14 = 0;
      iVar10 = 8;
      lVar13 = lVar11;
      do {
        iVar12 = iVar12 + -1;
        pfVar8 = (float *)((int)&DAT_007358e0 + iVar14);
        iVar14 = iVar14 + 4;
        *(float *)((int)lVar13 + 100) = *(float *)((int)lVar13 + 100) * *pfVar8;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      do {
        iVar10 = iVar10 + -1;
        iVar12 = (int)lVar11;
        lVar11 = lVar11 + 4;
        fVar1 = fVar1 + *(float *)(iVar12 + 100);
      } while (iVar10 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
    }
  }
  else if (g_heroGravityMode < 3) {
    fVar4 = *vector;
    fVar1 = vector[1];
    fVar3 = vector[2];
    fVar2 = vector[3];
    fVar6 = g_heroGravityMtx * fVar4 + DAT_00969d30 * fVar1 + DAT_00969d40 * fVar3 +
            DAT_00969d50 * fVar2;
    fVar7 = DAT_00969d24 * fVar4 + DAT_00969d34 * fVar1 + DAT_00969d44 * fVar3 +
            DAT_00969d54 * fVar2;
    fVar7 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
    fVar4 = DAT_00969d28 * fVar4 + DAT_00969d38 * fVar1 + DAT_00969d48 * fVar3 +
            DAT_00969d58 * fVar2;
    fVar6 = ABS(fVar4);
    *(float *)(puVar5 + 6) = fVar4;
    fVar2 = ABS(fVar7);
    *(float *)((int)puVar5 + 0x34) = fVar7;
    *(float *)(puVar5 + 7) = fVar6 - fVar2;
    fVar1 = 0.0;
    iVar10 = (int)(((ulonglong)(*(uint *)(puVar5 + 6) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar5 + 7) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar5 + 0x34) >> 0x1d) & 4) << 2);
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar10);
    fVar4 = *(float *)(&DAT_00735904 + iVar10);
    if (0.0 <= *(float *)(puVar5 + 7)) {
      fVar6 = ABS(*(float *)((int)puVar5 + 0x34));
      fVar2 = ABS(*(float *)(puVar5 + 6));
    }
    if (0.0 < fVar2) {
      iVar12 = 4;
      iVar10 = 4;
      fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
      lVar13 = lVar11;
      do {
        iVar12 = iVar12 + -1;
        *(float *)((int)lVar13 + 0x44) = fVar2;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      fVar2 = fVar2 * fVar2;
      lVar13 = uVar9 - 0x80;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar5 + 9) = *(float *)(puVar5 + 9) * fVar2;
      *(float *)((int)puVar5 + 0x4c) = *(float *)((int)puVar5 + 0x4c) * fVar6;
      *(float *)(puVar5 + 10) = *(float *)(puVar5 + 10) * fVar6 * fVar2;
      do {
        iVar10 = iVar10 + -1;
        *(float *)((int)lVar13 + 0x44) = *(float *)((int)lVar13 + 0x34) * fVar6 * fVar6;
        lVar13 = lVar13 + 4;
      } while (iVar10 != 0);
      iVar12 = 8;
      iVar14 = 0;
      iVar10 = 8;
      lVar13 = lVar11;
      do {
        pfVar8 = (float *)((int)&DAT_007358e0 + iVar14);
        iVar12 = iVar12 + -1;
        iVar14 = iVar14 + 4;
        *(float *)((int)lVar13 + 0x44) = *(float *)((int)lVar13 + 0x44) * *pfVar8;
        lVar13 = lVar13 + 4;
      } while (iVar12 != 0);
      do {
        iVar10 = iVar10 + -1;
        iVar12 = (int)lVar11;
        lVar11 = lVar11 + 4;
        fVar1 = fVar1 + *(float *)(iVar12 + 0x44);
      } while (iVar10 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
    }
  }
  else {
    fVar1 = 0.0;
  }
  return fVar1;
}



//==== 0007e3c8  ns=hero  size=0x1dc
// sig: void Hero_GetGroundCollTestVecs(float top, float bot, float * outTop, float * outBot, longlong unused1, longlong unused2, int useGravity)
// callers(2): 0007e5e8 hero::Hero_GetGroundInfo; 000a2a08 hero::Hero_SwimSurfTransition
// callees(1): 0010c110 mobyutil::???_MB_ClampVecToPlanes

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void hero::Hero_GetGroundCollTestVecs
               (float top,float bot,float *outTop,float *outBot,longlong unused1,longlong unused2,
               int useGravity)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = g_heroPosition.w;
  fVar3 = g_heroPosition.z;
  fVar2 = g_heroPosition.y;
  fVar1 = g_heroPosition.x;
  if (useGravity == 0) {
    fVar5 = g_heroPosition.z + bot;
    *outBot = g_heroPosition.x;
    outBot[1] = fVar2;
    outBot[3] = fVar4;
    outBot[2] = fVar5;
    if (fVar5 < 0.0) {
      outBot[2] = 0.0;
    }
    *outTop = fVar1;
    outTop[1] = fVar2;
    outTop[3] = fVar4;
    outTop[2] = fVar3 + top;
  }
  else {
    fVar2 = 0.0;
    fVar1 = SQRT(g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74 +
                 DAT_00969f78 * DAT_00969f78);
    fVar3 = fVar2;
    fVar4 = fVar2;
    fVar5 = fVar2;
    if (fVar1 != 0.0) {
      fVar1 = -bot / fVar1;
      fVar3 = DAT_00969f78 * fVar1;
      fVar4 = DAT_00969f74 * fVar1;
      fVar5 = g_heroGravityDir * fVar1;
    }
    *outBot = g_heroPosition.x + fVar5;
    outBot[1] = g_heroPosition.y + fVar4;
    outBot[2] = g_heroPosition.z + fVar3;
    outBot[3] = g_heroPosition.w;
    fVar1 = SQRT(g_heroGravityDir * g_heroGravityDir + DAT_00969f74 * DAT_00969f74 +
                 DAT_00969f78 * DAT_00969f78);
    fVar3 = fVar2;
    fVar4 = fVar2;
    if (fVar1 != 0.0) {
      fVar1 = -top / fVar1;
      fVar2 = DAT_00969f78 * fVar1;
      fVar3 = DAT_00969f74 * fVar1;
      fVar4 = g_heroGravityDir * fVar1;
    }
    *outTop = g_heroPosition.x + fVar4;
    outTop[1] = g_heroPosition.y + fVar3;
    outTop[2] = g_heroPosition.z + fVar2;
    outTop[3] = g_heroPosition.w;
    mobyutil::____MB_ClampVecToPlanes
              (CONCAT44(*outTop,outTop[1]),*(undefined8 *)(outTop + 2),outBot);
  }
  return;
}



//==== 0007e5e8  ns=hero  size=0xa1c
// sig: undefined Hero_GetGroundInfo(void)
// callers(3): 0007f018 hero::Hero_ResetHero; 0008a2b8 hero::Hero_ApplyMotion; 000a0c38 hero::Hero_Warp
// callees(11): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000607b4 collproc::CollSoundSurface; 0007cf28 hero::Hero_AddGravity; 0007d9b8 hero::Hero_GetHeroRelativeGroundAngs; 0007dde0 hero::Hero_GetHeroRelativePolarVector; 0007dff0 hero::Hero_Slope; 0007e3c8 hero::Hero_GetGroundCollTestVecs; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00105f40 mobyutil::CollWaterHeight; 0010af88 mobyutil::MB_isCrate

void hero::Hero_GetGroundInfo(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  float *pfVar6;
  MobyInstance *pMVar7;
  ulonglong uVar8;
  int iVar10;
  uint uVar11;
  bool bVar13;
  longlong lVar9;
  int iVar12;
  longlong in_r6;
  int iVar14;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined4 *puVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  ulonglong in_f27;
  double dVar18;
  ulonglong in_f28;
  double dVar19;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0x170;
  puVar4 = (ulonglong *)lVar9;
  *puVar4 = uVar8;
  puVar4[0x30] = in_LR;
  puVar4[0x29] = in_f27;
  puVar4[0x2a] = in_f28;
  puVar4[0x2b] = in_f29;
  puVar4[0x2c] = in_f30;
  puVar4[0x2d] = in_f31;
  puVar4[0x25] = unaff_r28;
  puVar4[0x27] = unaff_r30;
  puVar15 = &g_heroMtx;
  puVar4[0x23] = unaff_r26;
  iVar10 = DAT_00969fd8;
  g_framesNotGrounded = g_framesNotGrounded + 1;
  DAT_00969fec = DAT_00969fec + 1;
  dVar20 = 0.0;
  g_heroGroundNormal = 0.0;
  bVar13 = DAT_00969fd8 != 0;
  DAT_00969f54 = 0.0;
  dVar19 = 1.0;
  DAT_00969f58 = 1.0;
  g_heroGroundSlope = 0.0;
  g_heroGroundZ = 0.0;
  DAT_00969f8c = 0.0;
  DAT_00969f88 = 0.0;
  DAT_00969f84 = 0.0;
  g_heroGroundPoint = 0.0;
  g_heroGroundDist = 32.0;
  DAT_00969fea = 0;
  puVar4[0x28] = unaff_r31;
  puVar4[0x26] = unaff_r29;
  puVar4[0x24] = unaff_r27;
  puVar4[0x22] = unaff_r25;
  puVar4[0x21] = unaff_r24;
  g_standingOnMoby = (MobyInstance *)0x0;
  if (bVar13) {
    DAT_00969fd8 = iVar10 + 1;
  }
  fVar2 = 2.2;
  if (g_heroStateType == 2) {
    fVar2 = 2.9;
  }
  lVar17 = uVar8 - 0xf0;
  lVar16 = uVar8 - 0x100;
  Hero_GetGroundCollTestVecs
            (g_heroCollRadius * fVar2,-48.0,(float *)lVar17,(float *)lVar16,0x42000000,in_r6,
             (uint)(g_heroGravityMode != 0));
  iVar10 = collproc::CollLine(lVar17,lVar16,2,g_heroMobyPtr,0);
  if (iVar10 != 0) {
    iVar10 = collproc::CollSoundSurface();
    if (iVar10 == -1) {
      iVar10 = 3;
    }
    DAT_0096afcd = (undefined1)iVar10;
    uVar11 = collproc::CollHotspot();
    g_heroGroundType = (short)uVar11;
    if ((uVar11 & 0xffff) == 0) {
      g_heroWaterZ = mobyutil::CollWaterHeight(&CollOutput.ip.x,(float *)&DAT_00969f60);
      iVar10 = DAT_00969fd8;
      if ((g_heroPosition.z < g_heroWaterZ) && (iVar10 = 1, 0 < DAT_00969fd8)) {
        iVar10 = DAT_00969fd8;
      }
      DAT_00969fd8 = iVar10;
      iVar10 = collproc::CollLine(lVar17,lVar16,0x24,g_heroMobyPtr,0);
      if (iVar10 == 0) goto LAB_0007ec84;
      iVar10 = collproc::CollSoundSurface();
      DAT_0096afcd = (undefined1)iVar10;
      if ((Level == Novalis) || (Level == Veldin2)) {
        DAT_0096afcd = 3;
      }
    }
    pMVar7 = g_heroMobyPtr;
    if (g_heroGroundType == 0xd) {
      g_heroWaterZ = CollOutput.ip.z;
      *(float *)(puVar4 + 0x11) = CollOutput.ip.z - 0.01;
      iVar10 = collproc::CollLine(lVar17,lVar16,4,pMVar7,0);
      if (iVar10 == 0) goto LAB_0007ec84;
    }
    pMVar7 = g_heroMobyPtr;
    if (g_heroGroundType == 3) {
      DAT_00969fd4 = CollOutput.ip.z;
      *(float *)(puVar4 + 0x11) = CollOutput.ip.z - 0.01;
      iVar10 = collproc::CollLine(lVar17,lVar16,4,pMVar7,0);
      if (iVar10 == 0) goto LAB_0007ec84;
    }
    if (g_heroGroundType == 0xb) {
      DAT_00969fd4 = CollOutput.ip.z;
      goto LAB_0007ec84;
    }
    if ((g_heroGroundType == 1) && ((g_heroState == DEATH_LAVA || (g_heroState == UNK_7D))))
    goto LAB_0007ec84;
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      bVar13 = mobyutil::MB_isCrate(CollOutput.pMoby);
      if ((bVar13) && ((DAT_00969fea = 1, g_heroStateType == 0x15 || (g_heroStateType == 0x16)))) {
        Hero_AddGravity((float)dVar19,&CollOutput.ip.x,&CollOutput.ip.x);
      }
      iVar10 = mobyutil::MB_GetPvarsIfMobyHasThem(CollOutput.pMoby);
      if ((iVar10 != 0) && ((*(ushort *)(iVar10 + 0x1e) & 8) != 0)) {
        DAT_00969fea = 1;
      }
    }
    if (0 < CollOutput.poly) {
      g_heroGroundPoint = CollOutput.ip.x;
      DAT_00969f84 = CollOutput.ip.y;
      DAT_00969f88 = CollOutput.ip.z;
      DAT_00969f8c = CollOutput.ip.w;
      g_heroGroundZ = CollOutput.ip.z;
      g_standingOnMoby = CollOutput.pMoby;
      g_heroGroundDist =
           SQRT((g_heroPosition.x - CollOutput.ip.x) * (g_heroPosition.x - CollOutput.ip.x) +
                (g_heroPosition.y - CollOutput.ip.y) * (g_heroPosition.y - CollOutput.ip.y) +
                (g_heroPosition.z - CollOutput.ip.z) * (g_heroPosition.z - CollOutput.ip.z));
      dVar22 = (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                            CollOutput.normal.y * CollOutput.normal.y +
                            CollOutput.normal.z * CollOutput.normal.z);
      dVar21 = dVar19;
      if (dVar22 != dVar20) {
        dVar21 = (double)(float)(dVar19 / dVar22);
      }
      g_heroGroundNormal = (float)((double)CollOutput.normal.x * dVar21);
      DAT_00969f54 = (float)((double)CollOutput.normal.y * dVar21);
      DAT_00969f58 = (float)((double)CollOutput.normal.z * dVar21);
      g_heroGroundSlope = Hero_Slope(&CollOutput.normal.x);
      fVar2 = CollOutput.normal.x;
      dVar18 = ABS((double)CollOutput.normal.x);
      uVar11 = (uint)CollOutput.normal.y >> 0x1d;
      dVar22 = ABS((double)CollOutput.normal.y);
      *(float *)(puVar4 + 0x1c) = (float)(dVar18 - dVar22);
      iVar10 = (int)(((ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar4 + 0x1c) >> 0x1e) & 2 | (ulonglong)uVar11 & 4) << 2
                    );
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar10);
      fVar2 = *(float *)(&DAT_00735904 + iVar10);
      dVar21 = dVar18;
      if (dVar20 <= (double)*(float *)(puVar4 + 0x1c)) {
        dVar21 = dVar22;
        dVar22 = dVar18;
      }
      dVar18 = dVar20;
      if (dVar20 < dVar22) {
        iVar10 = 4;
        fVar5 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
        lVar17 = lVar9;
        do {
          iVar10 = iVar10 + -1;
          *(float *)((int)lVar17 + 0xe4) = fVar5;
          lVar17 = lVar17 + 4;
        } while (iVar10 != 0);
        fVar5 = fVar5 * fVar5;
        lVar17 = uVar8 - 0x160;
        iVar10 = 4;
        fVar1 = fVar5 * fVar5;
        *(float *)(puVar4 + 0x1d) = *(float *)(puVar4 + 0x1d) * fVar5;
        *(float *)((int)puVar4 + 0xec) = *(float *)((int)puVar4 + 0xec) * fVar1;
        *(float *)(puVar4 + 0x1e) = *(float *)(puVar4 + 0x1e) * fVar1 * fVar5;
        do {
          iVar10 = iVar10 + -1;
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xd4) * fVar1 * fVar1;
          lVar17 = lVar17 + 4;
        } while (iVar10 != 0);
        iVar10 = 0;
        iVar14 = 8;
        lVar17 = lVar9;
        do {
          pfVar6 = (float *)((int)&DAT_007358e0 + iVar10);
          iVar14 = iVar14 + -1;
          iVar10 = iVar10 + 4;
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xe4) * *pfVar6;
          lVar17 = lVar17 + 4;
        } while (iVar14 != 0);
        iVar10 = 8;
        dVar21 = dVar20;
        do {
          iVar10 = iVar10 + -1;
          iVar14 = (int)lVar9;
          lVar9 = lVar9 + 4;
          dVar21 = (double)(float)(dVar21 + (double)*(float *)(iVar14 + 0xe4));
        } while (iVar10 != 0);
        dVar18 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar2);
      }
      DAT_00969fcc = (float)dVar18;
      if (dVar20 < (double)((g_heroGroundPoint - g_heroPosition.x) * g_heroGroundNormal +
                            (DAT_00969f84 - g_heroPosition.y) * DAT_00969f54 +
                           (DAT_00969f88 - g_heroPosition.z) * DAT_00969f58)) {
        g_heroGroundDist = -g_heroGroundDist;
      }
      if ((g_heroGroundDist < 0.02) &&
         (((DAT_00969fec = 0, g_heroGroundSlope <= 0.87266463 || (g_heroGravityMode == 1)) ||
          (g_heroStateType == 0x16)))) {
        g_framesNotGrounded = 0;
        DAT_0096a760 = CollOutput.pMoby;
      }
    }
  }
  if (g_framesNotGrounded == 0) {
    g_framesGroundedCnt = g_framesGroundedCnt + 1;
    DAT_00969f90 = g_heroGroundPoint;
    DAT_00969f94 = DAT_00969f84;
    DAT_00969f98 = DAT_00969f88;
    DAT_00969f9c = DAT_00969f8c;
  }
  else {
    g_framesGroundedCnt = 0;
  }
  if (g_heroWaterZ < g_heroPosition.z) {
    DAT_00969fd8 = 0;
  }
LAB_0007ec84:
  DAT_00969f7c = (float)dVar20;
  DAT_00969f78 = (float)dVar20;
  DAT_00969f74 = (float)dVar20;
  g_heroGravityDir = (float)dVar20;
  if (g_heroGravityMode == 0) {
    DAT_00969f78 = -1.0;
  }
  else if (g_heroGravityMode < 2) {
    g_heroGravityDir = -g_heroGroundNormal;
    DAT_00969f74 = -DAT_00969f54;
    DAT_00969f78 = -DAT_00969f58;
    DAT_00969f7c = DAT_00969f5c;
  }
  else if (g_heroGravityMode < 3) {
    fVar2 = DAT_00969d90 - g_heroPosition.x;
    fVar3 = DAT_00969d94 - g_heroPosition.y;
    fVar5 = DAT_00969d98 - g_heroPosition.z;
    DAT_00969f7c = DAT_00969d9c;
    dVar21 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5);
    if (dVar21 == dVar20) {
      DAT_00969f78 = (float)dVar20;
      DAT_00969f74 = (float)dVar20;
      g_heroGravityDir = (float)dVar20;
    }
    else {
      fVar1 = (float)(dVar19 / dVar21);
      g_heroGravityDir = fVar2 * fVar1;
      DAT_00969f74 = fVar3 * fVar1;
      DAT_00969f78 = fVar5 * fVar1;
    }
  }
  DAT_00969fc4 = (float)dVar20;
  DAT_00969fc8 = (float)dVar20;
  DAT_00969fb0 = (float)dVar20;
  DAT_00969fb4 = (float)dVar20;
  DAT_00969fa8 = (float)dVar20;
  DAT_00969fac = (float)dVar20;
  DAT_00969fa0 = (float)dVar20;
  DAT_00969fa4 = (float)dVar20;
  if (((((g_heroStateType != 0xf) && (g_heroStateType != 0x15)) &&
       ((g_heroStateType != 6 && ((g_heroStateType != 4 && (g_heroStateType != 5)))))) &&
      (g_heroStateType != 3)) && (g_heroGroundDist < 0.25)) {
    Hero_GetHeroRelativeGroundAngs(&g_heroGroundNormal,(float *)(puVar4 + 0x12));
    fVar2 = *(float *)((int)puVar4 + 0x94);
    dVar21 = -0.7853981852531433;
    if ((-0.7853982 < fVar2) && (fVar2 < 0.7853982)) {
      DAT_00969fc4 = fVar2;
    }
    fVar2 = *(float *)(puVar4 + 0x12);
    if ((-0.7853982 < fVar2) && (fVar2 < 0.7853982)) {
      DAT_00969fc8 = fVar2;
    }
    iVar14 = 0;
    iVar10 = 0;
    do {
      dVar22 = 1.5707963705062866;
      if (iVar14 == 1) {
        dVar22 = -1.5707963705062866;
      }
      dVar18 = 0.20000000298023224;
      Hero_GetHeroRelativePolarVector(0.2,(float)dVar22,0.45,(float *)(uVar8 - 0xd0));
      Hero_GetHeroRelativePolarVector((float)dVar18,(float)dVar22,-0.45,(float *)(puVar4 + 0x16));
      iVar12 = collproc::CollLine(uVar8 - 0xd0,lVar16,0x22,g_heroMobyPtr,0);
      fVar2 = DAT_00969fc4;
      if (iVar12 == 0) {
        puVar15[0xb0] = (float)dVar20;
        fVar3 = DAT_00969fc8;
        puVar15[0xb2] = fVar2;
        puVar15[0xb4] = fVar3;
      }
      else {
        puVar15[0xb0] = CollOutput.ip.z - g_heroGroundZ;
        if (0.4 < ABS(*(float *)((int)&DAT_00969fa0 + iVar10))) {
          *(float *)((int)&DAT_00969fa0 + iVar10) = (float)dVar20;
        }
        dVar18 = (double)SQRT(CollOutput.normal.x * CollOutput.normal.x +
                              CollOutput.normal.y * CollOutput.normal.y +
                              CollOutput.normal.z * CollOutput.normal.z);
        dVar22 = dVar19;
        if (dVar18 != dVar20) {
          dVar22 = (double)(float)(dVar19 / dVar18);
        }
        *(float *)(puVar4 + 0x1a) = (float)((double)CollOutput.normal.x * dVar22);
        *(float *)((int)puVar4 + 0xd4) = (float)((double)CollOutput.normal.y * dVar22);
        *(float *)(puVar4 + 0x1b) = (float)((double)CollOutput.normal.z * dVar22);
        Hero_GetHeroRelativeGroundAngs((float *)(puVar4 + 0x1a),(float *)(puVar4 + 0x18));
        dVar22 = (double)*(float *)((int)puVar4 + 0xc4);
        if ((dVar21 < dVar22) && (dVar22 < 0.7853981852531433)) {
          puVar15[0xb2] = *(float *)((int)puVar4 + 0xc4);
        }
        dVar22 = (double)*(float *)(puVar4 + 0x18);
        if ((dVar21 < dVar22) && (dVar22 < 0.7853981852531433)) {
          puVar15[0xb4] = *(float *)(puVar4 + 0x18);
        }
      }
      iVar14 = iVar14 + 1;
      iVar10 = iVar10 + 4;
      puVar15 = puVar15 + 1;
    } while (iVar14 < 2);
  }
  return;
}



//==== 0007f018  ns=hero  size=0x364
// sig: undefined Hero_ResetHero(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(5): 0007d6d0 hero::Hero_MapToMoby; 0007e5e8 hero::Hero_GetGroundInfo; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 005001fc fastfunc::FastMemSet

void hero::Hero_ResetHero(void)

{
  MobyInstance *pMVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  iVar4 = 0;
  iVar2 = 7;
  iVar5 = 7;
  do {
    iVar2 = iVar2 + -1;
    puVar3 = &g_heroMtx;
  } while (iVar2 != 0);
  fastfunc::FastMemSet(&g_heroMtx,0,0x2310);
  do {
    iVar5 = iVar5 + -1;
    pMVar1 = MobyInstance;
  } while (iVar5 != 0);
  do {
    if (MobyInstancePermEnd <= pMVar1) {
LAB_0007f1b8:
      if (g_equippedItem == UNK_00) {
        g_equippedItem = BOMB_GLOVE;
      }
      iVar2 = 0x1f;
      iVar4 = 0;
      do {
        (&DAT_00721bd1)[iVar4] = 0;
        *(undefined4 *)((int)&DAT_00721c3c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c38 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c34 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c30 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c1c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c18 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c14 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c10 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c2c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c28 + iVar4) = 0;
        iVar2 = iVar2 + -1;
        *(undefined4 *)((int)&DAT_00721c24 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c20 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c6c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c68 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c64 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c60 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c4c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c48 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c44 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c40 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c5c + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c58 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c54 + iVar4) = 0;
        *(undefined4 *)((int)&DAT_00721c50 + iVar4) = 0;
        iVar4 = iVar4 + 0xb0;
      } while (iVar2 != 0);
      iVar4 = 8;
      do {
        iVar4 = iVar4 + -1;
        puVar3[0x886] = 0xffffffff;
        puVar3 = puVar3 + 1;
      } while (iVar4 != 0);
      DAT_0096bf68 = 0x40080000;
      DAT_0096bf6c = 0x3fa00000;
      g_heroHealth = g_heroMaxNanotech;
      g_clankMaxNanotech = 4;
      DAT_0096bf90 = (undefined2)g_heroMaxNanotech;
      DAT_0096acf0 = mobyutil::MB_randRange
                               ((int)(animationSpeed * 180.5),(int)(animationSpeed * 300.5));
      DAT_0096acf4 = 0x3be56042;
      DAT_0096acf8 = 0x3e99999a;
      DAT_0096aa00 = 0x3f7851ec;
      return;
    }
    if (MobyInstance[iVar4].oClass == RATCHET) {
      g_heroMobyPtr = MobyInstance + iVar4;
      dVar6 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroMobyPtr->pos,0);
      if (0.0 < dVar6) {
        (g_heroMobyPtr->pos).z = (float)dVar6;
      }
      pMVar1 = g_heroMobyPtr;
      g_heroRotation.z = (g_heroMobyPtr->rotation).z;
      g_heroPosition.x = (g_heroMobyPtr->pos).x;
      g_ratchetMoby = g_heroMobyPtr;
      g_heroPosition.y = (g_heroMobyPtr->pos).y;
      g_heroMobyPtr->modeBits = g_heroMobyPtr->modeBits | NO_UPDATE;
      g_heroPosition.z = (pMVar1->pos).z;
      g_heroPosition.w = (pMVar1->pos).w;
      Hero_GetGroundInfo();
      Hero_MapToMoby();
      if (DAT_00a561c0 == 0) {
        g_heroSpawnPosition.x = g_heroPosition.x;
        g_heroSpawnPosition.y = g_heroPosition.y;
        g_heroSpawnPosition.z = g_heroPosition.z;
        g_heroSpawnPosition.w = g_heroPosition.w;
        g_heroSpawnRot.x = g_heroRotation.x;
        g_heroSpawnRot.y = g_heroRotation.y;
        g_heroSpawnRot.z = g_heroRotation.z;
        g_heroSpawnRot.w = g_heroRotation.w;
      }
      goto LAB_0007f1b8;
    }
    iVar4 = iVar4 + 1;
    pMVar1 = MobyInstance + iVar4;
  } while( true );
}



//==== 0007f37c  ns=hero  size=0x1c
// sig: undefined ???_Hero_ResetVars_96a790(void)
// callers(0): 
// callees(0): 

void hero::____Hero_ResetVars_96a790(void)

{
  DAT_0096a790 = 0xffffffff;
  DAT_0096a798 = 0;
  return;
}



//==== 0007f398  ns=hero  size=0x84
// sig: undefined Hero_InitStuff(void)
// callers(1): 000dcf58 loaders::NAVG_LoadFile
// callees(1): 000b72b0 hero::TransitionMovement

int hero::Hero_InitStuff(void)

{
  int iVar1;
  
  g_heroCollRadius = 0x3ee66666;
  g_heroCollBottom = 0x3f333333;
  g_heroCollTop = 0x3f4ccccd;
  DAT_00969f08 = 0x3f4ccccd;
  DAT_00969f0c = 0x3f333333;
  DAT_0096bfab = 0;
  DAT_00969c84 = 0;
  g_heroState = STANDING;
  DAT_0096a774 = 0x3f800000;
  DAT_0096a790 = 0xffffffff;
  DAT_0096a798 = 0;
  iVar1 = TransitionMovement(0,1);
  return iVar1;
}



//==== 0007f41c  ns=hero  size=0x40
// sig: int Hero_HandGadgetID(int slot)
// callers(3): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 002aa9c0 mobyupdate_unsorted::UpdateMoby_167
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_HandGadgetID(int slot)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((longlong)slot << 6) + (int)((longlong)slot << 4);
  iVar2 = -1;
  if (*(int *)((int)&DAT_0096ad94 + iVar1) == 2) {
    iVar2 = *(int *)((int)&g_CurrentWeapon + iVar1);
  }
  return iVar2;
}



//==== 0007f45c  ns=hero  size=0xd0
// sig: int Hero_GetIdleAnim(int allowFiring)
// callers(12): 000855b8 hero::Hero_EndFiringAnim; 00085b30 hero::Hero_HandleGadgetSwitching; 00086b60 hero::SetHeroType; 0008e170 hero::Hero_UpdateFiringAnimLayer; 000a0c38 hero::Hero_Warp; 000a2600 hero::Hero_IdleCycleFiringTransition; 000a5310 hero::Hero_JumpLandTransitions; 000a9d70 hero::Hero_UpdateWeaponReadyAnim; 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 002ebd98 mobyupdate_unsorted::UpdateMoby_208
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int hero::Hero_GetIdleAnim(int allowFiring)

{
  int iVar1;
  
  if (g_heroType < 2) {
    if (g_heroType != 0) {
      return 0;
    }
  }
  else {
    if (g_heroType < 3) {
      return 0;
    }
    if (g_heroType < 4) {
      return 0;
    }
  }
  if (g_heroHealth == 1) {
    return 0x54;
  }
  if (DAT_0096afc2 == '\0') {
    if ((((allowFiring != 0) && (DAT_0096bd88 != '\0')) && (DAT_0096bd8a != '\0')) &&
       (DAT_0096bfa8 == 0)) {
      iVar1 = -1;
      if (DAT_0096ad94 == 2) {
        iVar1 = g_CurrentWeapon;
      }
      return (&DAT_00721024)[iVar1 * 0x13];
    }
    return 0;
  }
  return 0x6e;
}



//==== 0007f52c  ns=stub  size=0x4
// sig: undefined STUB_0007f52c(void)
// callers(0): 
// callees(0): 

void stub::STUB_0007f52c(void)

{
  return;
}



//==== 0007f530  ns=hero  size=0x60
// sig: undefined TakeDamage(undefined4 health)
// callers(1): 000b72b0 hero::TransitionMovement
// callees(1): 000c8578 hud::RegisterHeroHealthHUDCallbacks

void hero::TakeDamage(int health)

{
  if (health != 0) {
    if (1 < health) {
      health = 1;
    }
    health = g_heroHealth - health;
    g_heroHealth = 0;
    if (-1 < health) {
      g_heroHealth = health;
    }
    hud::RegisterHeroHealthHUDCallbacks();
  }
  return;
}



//==== 0007f590  ns=hero  size=0x68
// sig: MobyInstance * Hero_GetTweakerMoby(int mobyType)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

MobyInstance * hero::Hero_GetTweakerMoby(int mobyType)

{
  MobyInstance *pMVar1;
  
  pMVar1 = g_heroMobyPtr;
  if ((((mobyType != 2 && mobyType != 0) && (mobyType != 3)) && (mobyType != 4)) &&
     ((pMVar1 = DAT_0096ae64, mobyType != 1 && (pMVar1 = (MobyInstance *)0x0, mobyType == 5)))) {
    pMVar1 = g_currentWeaponMoby;
  }
  return pMVar1;
}



//==== 0007f608  ns=hero  size=0x3c8
// sig: undefined hero_SetManipulator(void)
// callers(4): 0007f9d0 hero::Hero_UpdateTweakers; 00086948 hero::Hero_UpdateGadgetSlots; 0008c3d0 hero::HeroUpdateNonRatchet; 000954c8 hero::HeroUpdate
// callees(5): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 00106078 mobyutil::MB_EulerToQuat; 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng
// strings: 0096c074: 'None'

void hero::hero_SetManipulator(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  ushort uVar3;
  undefined *unused;
  MobyInstance *moby;
  double dVar4;
  
  sVar2 = *(short *)(param_1 + 0xa2);
  moby = g_heroMobyPtr;
  if ((((sVar2 != 2 && sVar2 != 0) && (sVar2 != 3)) && (sVar2 != 4)) &&
     ((moby = DAT_0096ae64, sVar2 != 1 && (moby = (MobyInstance *)0x0, sVar2 == 5)))) {
    moby = g_currentWeaponMoby;
  }
  if (moby != (MobyInstance *)0x0) {
    unused = &DAT_00970000;
    if (g_heroType == '\0') {
      uVar3 = *(ushort *)(param_1 + 0xa2);
      unused = (undefined *)(uint)uVar3;
      if (uVar3 == 4) {
        return;
      }
      if (uVar3 == 2) {
        return;
      }
      if (uVar3 == 3) {
        return;
      }
    }
    if ((g_heroType == '\0') ||
       (unused = (undefined *)(uint)*(ushort *)(param_1 + 0xa2), *(ushort *)(param_1 + 0xa2) != 0))
    {
      dVar4 = 0.0;
      if (((((*(float *)(param_1 + 0x60) != 0.0) ||
            (((*(float *)(param_1 + 100) != 0.0 || (*(float *)(param_1 + 0x68) != 0.0)) ||
             (*(float *)(param_1 + 0x90) != 0.0)))) ||
           (((*(float *)(param_1 + 0x94) != 0.0 || (*(float *)(param_1 + 0x98) != 0.0)) ||
            (0.003 <= ABS(*(float *)(param_1 + 0x70)))))) ||
          ((0.003 <= ABS(*(float *)(param_1 + 0x74)) || (0.003 <= ABS(*(float *)(param_1 + 0x78)))))
          ) || ((*(float *)(param_1 + 0xac) != 1.0 ||
                (((0.005 <= ABS(*(float *)(param_1 + 0x40)) ||
                  (0.005 <= ABS(*(float *)(param_1 + 0x44)))) ||
                 (0.005 <= ABS(*(float *)(param_1 + 0x48)))))))) {
        if (Cheats[5] != '\0') {
          *(float *)(param_1 + 0x68) = -*(float *)(param_1 + 0x68);
          *(float *)(param_1 + 0x74) = -*(float *)(param_1 + 0x74);
          *(float *)(param_1 + 0x60) = -*(float *)(param_1 + 0x60);
        }
        mobyutil::AccelDeltAng
                  ((double)*(float *)(param_1 + 0x60),
                   (double)(*(float *)(param_1 + 0xa4) * DAT_0071f40c),
                   (double)(*(float *)(param_1 + 0xa8) * DAT_0071f40c),0,param_1 + 0x40,unused,
                   param_1 + 0x50);
        mobyutil::AccelDeltAng
                  ((double)*(float *)(param_1 + 100),
                   (double)(*(float *)(param_1 + 0xa4) * DAT_0071f40c),
                   (double)(*(float *)(param_1 + 0xa8) * DAT_0071f40c),dVar4,param_1 + 0x44);
        mobyutil::AccelDeltAng
                  ((double)*(float *)(param_1 + 0x68),
                   (double)(*(float *)(param_1 + 0xa4) * DAT_0071f40c),
                   (double)(*(float *)(param_1 + 0xa8) * DAT_0071f40c),dVar4,param_1 + 0x48);
        mobyutil::AccelDelt(*(float *)(param_1 + 0x90),*(float *)(param_1 + 0xa4),
                            *(float *)(param_1 + 0xa8),(float)dVar4,(float *)(param_1 + 0x70),
                            (int)unused,(float *)(param_1 + 0x80));
        mobyutil::AccelDelt(*(float *)(param_1 + 0x94),*(float *)(param_1 + 0xa4),
                            *(float *)(param_1 + 0xa8),(float)dVar4,(float *)(param_1 + 0x74),
                            (int)unused,(float *)(param_1 + 0x84));
        mobyutil::AccelDelt(*(float *)(param_1 + 0x98),*(float *)(param_1 + 0xa4),
                            *(float *)(param_1 + 0xa8),(float)dVar4,(float *)(param_1 + 0x78),
                            (int)unused,(float *)(param_1 + 0x88));
        if (*(char *)(param_1 + 1) == '\0') {
          mobyfunc::AttachManipulator(moby,(int)*(short *)(param_1 + 0xa0),param_1);
        }
        mobyutil::MB_EulerToQuat((float *)(param_1 + 0x10),(Vec3 *)(param_1 + 0x40));
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x78);
        uVar1 = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x20) = uVar1;
        *(undefined4 *)(param_1 + 0x24) = uVar1;
        *(undefined4 *)(param_1 + 0x28) = uVar1;
      }
      else if (*(char *)(param_1 + 1) != '\0') {
        mobyfunc::DetachManipulator(moby,param_1);
      }
      *(float *)(param_1 + 0x9c) = (float)dVar4;
      *(float *)(param_1 + 0x98) = (float)dVar4;
      *(float *)(param_1 + 0x94) = (float)dVar4;
      *(float *)(param_1 + 0x90) = (float)dVar4;
      *(float *)(param_1 + 0x6c) = (float)dVar4;
      *(float *)(param_1 + 0x68) = (float)dVar4;
      *(float *)(param_1 + 100) = (float)dVar4;
      *(float *)(param_1 + 0x60) = (float)dVar4;
      *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    }
  }
  return;
}



//==== 0007f9d0  ns=hero  size=0x58
// sig: undefined Hero_UpdateTweakers(void)
// callers(0): 
// callees(1): 0007f608 hero::hero_SetManipulator

void hero::Hero_UpdateTweakers(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    hero_SetManipulator(&g_heroTweakers + iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0xb0;
  } while (iVar1 < 0x1f);
  return;
}



//==== 0007fa30  ns=hero  size=0x160
// sig: undefined Hero_ResetTweakers(void)
// callers(3): 000836ac hero::Hero_RevertToRatchet; 00086b60 hero::SetHeroType; 000a0c38 hero::Hero_Warp
// callees(1): 000f0f1c mobyfunc::DetachManipulator

void hero::Hero_ResetTweakers(void)

{
  short sVar1;
  MobyInstance *pMoby;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((&DAT_00721bd1)[iVar3] != '\0') {
      sVar1 = *(short *)((int)&DAT_00721c72 + iVar3);
      pMoby = g_heroMobyPtr;
      if ((((sVar1 != 2 && sVar1 != 0) && (sVar1 != 3)) && (sVar1 != 4)) &&
         ((pMoby = DAT_0096ae64, sVar1 != 1 && (pMoby = (MobyInstance *)0x0, sVar1 == 5)))) {
        pMoby = g_currentWeaponMoby;
      }
      if (pMoby != (MobyInstance *)0x0) {
        mobyfunc::DetachManipulator(pMoby,&g_heroTweakers + iVar3);
      }
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)&DAT_00721c1c + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c18 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c14 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c10 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c3c + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c38 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c34 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c30 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c6c + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c68 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c64 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c60 + iVar3) = 0;
    *(undefined4 *)((int)&DAT_00721c7c + iVar3) = 0x3f800000;
    iVar3 = iVar3 + 0xb0;
  } while (iVar2 < 0x1f);
  return;
}



//==== 0007fb98  ns=hero  size=0x1a8
// sig: undefined Hero_UpdateBlinkTimer(void)
// callers(0): 
// callees(1): 000fc620 mobyutil::MB_randInt

void hero::Hero_UpdateBlinkTimer(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  
  if (DAT_0096acd0 == 0) {
    if (DAT_0096acd8 == 0) {
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
      DAT_0096acd4 = storeVectorElementWordIndexed
                               (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0xff4,
                                0x969ce0);
    }
    else if (DAT_0096acd4 < worldUpdateTime) {
      DAT_0096acd0 = 1;
      iVar2 = mobyutil::MB_randInt(DAT_0096acd8);
      iVar3 = mobyutil::MB_randInt(DAT_0096acd8);
      DAT_0096acd4 = worldUpdateTime + (int)(animationSpeed * 20.5) + iVar3 + iVar2;
    }
  }
  return;
}



//==== 0007fd70  ns=hero  size=0x4d8
// sig: undefined hero_SetEyeManipulator(void)
// callers(1): 000954c8 hero::HeroUpdate
// callees(3): 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000fc620 mobyutil::MB_randInt

void hero::hero_SetEyeManipulator(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  DAT_00722478 = DAT_00721e48 * 0.25;
  if (DAT_00722478 <= 0.14835298) {
    if (DAT_00722478 < -0.14835298) {
      DAT_00722478 = -0.14835298;
    }
  }
  else {
    DAT_00722478 = 0.14835298;
  }
  DAT_00722474 = DAT_00721e44 * 0.35714287;
  if (0.29670596 < DAT_00722474) {
    DAT_00722474 = 0.29670596;
  }
  if (DAT_00722474 < -0.17453292) {
    DAT_00722474 = -0.17453292;
  }
  puVar7 = &g_heroMtx;
  if ((g_heroMobyPtr->animationId == '\x01') || (g_heroMobyPtr->animationId == '\x02')) {
    if (0.034906585 < DAT_00722478) {
      DAT_00722478 = 0.034906585;
    }
    if (DAT_00722478 < -0.034906585) {
      DAT_00722478 = -0.034906585;
    }
    if (0.12217305 < DAT_00722474) {
      DAT_00722474 = 0.12217305;
    }
    if (DAT_00722474 < -0.12217305) {
      DAT_00722474 = -0.12217305;
    }
  }
  if (DAT_0096acd0 == 0) {
    if (DAT_0096acd8 == 0) {
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
      DAT_0096acd4 = storeVectorElementWordIndexed
                               (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0xff4,
                                0x969ce0);
    }
    else if (DAT_0096acd4 < worldUpdateTime) {
      DAT_0096acd0 = 1;
      iVar2 = mobyutil::MB_randInt(DAT_0096acd8);
      iVar3 = mobyutil::MB_randInt(DAT_0096acd8);
      DAT_0096acd4 = worldUpdateTime + (int)(animationSpeed * 20.5) + iVar3 + iVar2;
    }
  }
  if (DAT_0096acd0 != 0) {
    if ((DAT_0096acd0 != 0) && (DAT_0096acd0 = DAT_0096acd0 + 1, 0xb < DAT_0096acd0)) {
      DAT_0096acd0 = 0;
    }
    if (DAT_0096acd0 == 0) {
      iVar2 = 0;
      do {
        if ((&DAT_0096aa11)[iVar2 * 0x40] != '\0') {
          mobyfunc::DetachManipulator(g_heroMobyPtr,&DAT_0096aa10 + iVar2 * 0x40);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 7);
    }
    else {
      iVar2 = 0;
      iVar3 = 0;
      iVar4 = 0;
      iVar5 = 0;
      puVar6 = puVar7;
      do {
        if (*(char *)((int)puVar6 + 0xd31) == '\0') {
          mobyfunc::AttachManipulator
                    (g_heroMobyPtr,*(uint32_t *)((int)&DAT_00723730 + iVar3),&DAT_0096aa10 + iVar4);
          *(undefined1 *)((int)puVar6 + 0xd33) = 1;
          *(undefined4 *)((int)&DAT_0096aa20 + iVar4) = *(undefined4 *)((int)&DAT_007235b0 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa24 + iVar4) = *(undefined4 *)((int)&DAT_007235b4 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa28 + iVar4) = *(undefined4 *)((int)&DAT_007235b8 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa2c + iVar4) = *(undefined4 *)((int)&DAT_007235bc + iVar5);
          *(undefined4 *)((int)&DAT_0096aa30 + iVar4) = *(undefined4 *)((int)&DAT_00723620 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa34 + iVar4) = *(undefined4 *)((int)&DAT_00723624 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa38 + iVar4) = *(undefined4 *)((int)&DAT_00723628 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa3c + iVar4) = *(undefined4 *)((int)&DAT_0072362c + iVar5);
          *(undefined4 *)((int)&DAT_0096aa40 + iVar4) = *(undefined4 *)((int)&DAT_00723690 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa44 + iVar4) = *(undefined4 *)((int)&DAT_00723694 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa48 + iVar4) = *(undefined4 *)((int)&DAT_00723698 + iVar5);
          *(undefined4 *)((int)&DAT_0096aa4c + iVar4) = *(undefined4 *)((int)&DAT_0072369c + iVar5);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 0x40;
        iVar5 = iVar5 + 0x10;
        puVar6 = puVar6 + 0x10;
      } while (iVar2 < 7);
      iVar2 = 7;
      do {
        iVar2 = iVar2 + -1;
        puVar7[0x34f] = *(undefined4 *)(&DAT_00723700 + DAT_0096acd0 * 4);
        puVar7 = puVar7 + 0x10;
      } while (iVar2 != 0);
    }
  }
  return;
}



