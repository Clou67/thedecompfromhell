//==== 00140144  ns=pause  size=0x8
// sig: undefined CameraSettings_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] returns 0; slot2 of camera settings widget
   [p2_pause] returns 0; slot2 of camera settings widget
   [p2_pause] returns 0; slot2 of camera settings widget */

undefined8 pause::CameraSettings_OnEnter(void)

{
  return 0;
}



//==== 0014014c  ns=pause  size=0x8
// sig: undefined CameraSettings_OnExit(void)
// callers(0): 
// callees(0): 

/* [p2_pause] returns 0; slot3 of camera settings widget
   [p2_pause] returns 0; slot3 of camera settings widget
   [p2_pause] returns 0; slot3 of camera settings widget */

undefined8 pause::CameraSettings_OnExit(void)

{
  return 0;
}



//==== 00140154  ns=pause  size=0x10
// sig: undefined MenuText_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] generic widget OnEnter: sets +0x44=-1
   [p2_pause] generic widget OnEnter: sets +0x44=-1
   [p2_pause] generic widget OnEnter: sets +0x44=-1 */

undefined8 pause::MenuText_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return 0;
}



//==== 00140170  ns=pause  size=0x148
// sig: undefined GetMenuFadeColor(void)
// callers(2): 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings
// callees(1): 005027bc fastfunc::FastLerpColor

/* [p2_pause] lerps two ABGR colors by elapsed frames
   [p2_pause] lerps two ABGR colors by elapsed frames
   [p2_pause] lerps two ABGR colors by elapsed frames */

void pause::GetMenuFadeColor(int param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  if ((int)param_2 == -1) {
    param_2 = 0xffffffff80ffa888;
  }
  if ((int)param_3 == -1) {
    param_3 = 0xffffffff8020ffff;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  dVar1 = 1.0;
  if (param_1 <= (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5))) {
    dVar1 = (double)(1.0 - (float)((double)(longlong)
                                           ((int)(animationSpeed *
                                                 ((float)(longlong)DAT_00729848 + 0.5)) - param_1) /
                                  (double)(longlong)
                                          (int)(animationSpeed *
                                               ((float)(longlong)DAT_00729848 + 0.5))));
  }
  fastfunc::FastLerpColor(dVar1,param_2,param_3);
  return;
}



//==== 001402c8  ns=pause  size=0x1138
// sig: undefined MenuText_Draw(void)
// callers(0): 
// callees(16): 000685c4 draw::GetEffectTex; 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern; 0006c5dc draw::EnableFontColors; 0006ccb4 draw::DisableFontColors; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 0007cea4 help::Help_GetPairedId; 00140170 pause::GetMenuFadeColor; 00174f80 vuchain::SetGSReg; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf
// strings: 006534f4: '%s %s' | 006534fc: '(null)'

/* [p2_pause] generic widget draw (slot1): help_msg strings with font print
   [p2_pause] generic widget draw (slot1): help_msg strings with font print
   [p2_pause] generic widget draw (slot1): help_msg strings with font print */

undefined8 pause::MenuText_Draw(undefined8 param_1)

{
  bool bVar1;
  undefined uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined **ppuVar6;
  undefined8 uVar7;
  int iVar9;
  short sVar13;
  undefined *puVar10;
  char *pcVar11;
  char *__s;
  undefined8 uVar8;
  undefined *puVar12;
  undefined *puVar14;
  undefined1 *__dest;
  ulonglong uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  short local_f0;
  short local_ee;
  short local_e2;
  char acStack_d8 [104];
  
  uVar15 = 0;
  uVar18 = 0x3ff0000000000000;
  pcVar11 = "default";
  if (g_JapaneseMode) {
    puVar12 = &JapaneseGlyphs;
  }
  else {
    puVar12 = &MediumWesternGlyphs;
  }
  ppuVar6 = (undefined **)param_1;
  uVar17 = 1;
  if (((uint)ppuVar6[0xc] & 8) != 0) {
    if (g_JapaneseMode) {
      puVar12 = &JapaneseGlyphs;
    }
    else {
      uVar17 = 3;
      puVar12 = &draw::LargeWesternGlyphs;
    }
  }
  if (((uint)ppuVar6[0xc] & 0x10) != 0) {
    if (g_JapaneseMode) {
      uVar17 = 1;
      puVar12 = &JapaneseGlyphs;
    }
    else {
      uVar17 = 2;
      puVar12 = &Glyphs;
    }
  }
  uVar19 = uVar18;
  uVar7 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar7);
  uVar7 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar7);
  puVar3 = ppuVar6[0xc];
  if (((uint)puVar3 & 0x20) == 0) {
    if (((uint)puVar3 & 0x40) == 0) {
      if (((uint)puVar3 & 4) == 0) {
        if (((uint)puVar3 & 0x80) == 0) {
          if (((uint)puVar3 & 0x100) == 0) {
            if (((uint)puVar3 & 0x1000) == 0) {
              sVar13 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
              puVar16 = (undefined *)(int)sVar13;
              if ((&g_goldWeaponsArray.field0_0x0)[sVar13] != '\0') {
                uVar15 = 1;
              }
            }
            else {
              bVar1 = 1 < g_Language;
              puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
              sVar13 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) +
                                 (int)puVar16 * 0xc);
              ppuVar6[0xd] = (undefined *)0xffff;
              if ((bVar1) && (g_Language < 6)) {
                uVar19 = 0x3fecccccc0000000;
              }
              sVar13 = help::Help_GetPairedId(sVar13,1);
              ppuVar6[0xd] = (undefined *)(int)sVar13;
            }
          }
          else {
            puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
            iVar9 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + (int)puVar16 * 10;
            if (*(short *)(iVar9 + 4) == 0) {
              uVar2 = (&UnlockableItems.field0_0x0)[*(short *)(iVar9 + 6)];
            }
            else {
              uVar2 = (&MiscLevelFlags.Zoomerator)[*(short *)(iVar9 + 6)];
            }
            if (uVar2 == '\0') {
              puVar16 = (undefined *)0xffffffff;
            }
          }
        }
        else {
          puVar16 = *(undefined **)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          if ((((uint)puVar3 & 0x8000) != 0) && (Cutscene != 0)) {
            uVar15 = 1;
          }
        }
      }
      else {
        if ((int)ppuVar6[0x11] < (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5))) {
          auVar5 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
                   (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1)
          ;
          *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
        }
        puVar16 = (undefined *)0x0;
        ppuVar6[0x12] = (undefined *)0x0;
        ppuVar6[0x13] = (undefined *)0x0;
      }
    }
    else {
      puVar16 = (undefined *)(g_SelectedLevel + -1);
    }
  }
  else {
    puVar16 = (undefined *)(Level - Novalis);
    if ((undefined *)0x11 < puVar16) {
      puVar16 = (undefined *)0xffffffff;
    }
  }
  if (ppuVar6[0x11] == (undefined *)0xffffffff) {
    auVar5 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1);
    *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
    ppuVar6[0x12] = puVar16;
    ppuVar6[0x13] = (undefined *)uVar15;
  }
  puVar3 = ppuVar6[0x12];
  if (puVar16 == puVar3) {
    ppuVar6[0x11] = ppuVar6[0x11] + 3;
  }
  else {
    if ((int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5)) < (int)ppuVar6[0x11]) {
      auVar5 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar5 = (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60) >> 0x60 &
               (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x44,param_1);
      *(undefined4 *)((uint)(ppuVar6 + 0x11) & 0xfffffffc) = uVar4;
    }
    puVar14 = (undefined *)0x0;
    if (0 < (int)ppuVar6[0x11]) {
      puVar14 = ppuVar6[0x11] + -1;
    }
    puVar10 = (undefined *)0x0;
    if (0 < (int)puVar14) {
      puVar10 = puVar14 + -1;
    }
    puVar14 = (undefined *)0x0;
    if (0 < (int)puVar10) {
      puVar14 = puVar10 + -1;
    }
    ppuVar6[0x11] = puVar14;
    if (puVar14 == (undefined *)0x0) {
      ppuVar6[0x12] = puVar16;
      ppuVar6[0x13] = (undefined *)uVar15;
      ppuVar6[0xf] = (undefined *)0x0;
      ppuVar6[0xc] = (undefined *)((uint)ppuVar6[0xc] & 0xfffffbff);
    }
    else {
      uVar15 = ZEXT48(ppuVar6[0x13]);
      puVar16 = puVar3;
    }
  }
  puVar3 = ppuVar6[0xc];
  if (((uint)puVar3 & 4) == 0) {
    if (((uint)puVar3 & 0x1000) == 0) {
      if (puVar16 == (undefined *)0xffffffff && ((uint)puVar3 & 0x100) != 0) {
        pcVar11 = "";
      }
      else if (ppuVar6[0xd] != (undefined *)0x0) {
        pcVar11 = (char *)help::help_msg_string_by_index
                                    (*(StringId *)
                                      (ppuVar6[0xd] +
                                      ((int)puVar16 * (int)ppuVar6[0xe] & 0xfffffffcU) +
                                      (int)(uVar15 << 2)));
      }
    }
    else {
      if (ppuVar6[0xd] == (undefined *)0xffff) {
        return 1;
      }
      pcVar11 = (char *)help::help_msg_string_by_index((StringId)ppuVar6[0xd]);
    }
  }
  else {
    if (ppuVar6[0xd] == (undefined *)0x0) {
      return 1;
    }
    pcVar11 = (char *)help::help_msg_string_by_index((StringId)ppuVar6[0xd]);
  }
  if ((((uint)ppuVar6[0xc] & 0x11e4) == 0) && ((&UnlockableItems.field0_0x0)[(int)puVar16] == '\0'))
  {
    pcVar11 = "";
  }
  __s = pcVar11;
  if (((uint)ppuVar6[0xc] & 0x200) != 0) {
    iVar9 = *(int *)(ppuVar6[0xd] + ((int)puVar16 * (int)ppuVar6[0xe] & 0xfffffffc));
    if ((iVar9 != 0x4ed9 && iVar9 != 0x4ed2) && (iVar9 != 0x4edd)) {
      __s = &stack0x00000000 + -0xd8;
      uVar7 = help::help_msg_string_by_index(STR_PLANET);
      libc::snprintf(__s,"%s %s",uVar7,pcVar11);
    }
  }
  if ((((uint)ppuVar6[0xc] & 0x800) != 0) && (g_SkillPoints[(int)puVar16] == '\0')) {
    __s = (char *)help::help_msg_string_by_index(STR_0x4F54);
  }
  if (__s == (char *)0x0) {
    __s = "(null)";
  }
  stub::STUB_0006d704(0);
  uVar17 = draw::GetEffectTex(uVar17);
  __dest = &stack0x00000000 + -0xf0;
  libc::memcpy(__dest,&DAT_00731758,0x18);
  local_f0 = (short)DAT_00730ac8;
  local_ee = (short)ppuVar6[9] - local_f0;
  if (((uint)ppuVar6[0xc] & 0x10000) != 0) {
    local_ee = (short)ppuVar6[9] + -1;
  }
  uVar7 = fastfunc::FastLerpColor(0x3fe0000000000000,DAT_00729840,0xffffffff80ffa888);
  uVar8 = GetMenuFadeColor(ppuVar6[0x11],uVar7,0xffffffff80ffa888);
  uVar7 = uVar18;
  if (((((ppuVar6 == &PTR_PTR_00729f18) || (ppuVar6 == &PTR_PTR_00729fc8)) ||
       (ppuVar6 == &PTR_PTR_00729f70)) || (ppuVar6 == &PTR_PTR_0072a020)) &&
     ((1 < g_Language && (g_Language < 6)))) {
    uVar7 = 0x3fe6666660000000;
    local_f0 = 0;
    local_ee = 0x28;
  }
  if (g_JapaneseMode == false) {
    draw::FontPrintOptWestern(uVar7,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    draw::FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  puVar3 = ppuVar6[0xc];
  if ((((uint)puVar3 & 0x2000) == 0) && ((int)local_ee - (int)local_f0 <= local_e2 + 4)) {
    if (((uint)puVar3 & 0x400) == 0) {
      ppuVar6[0xc] = (undefined *)((uint)puVar3 | 0x400);
      ppuVar6[0xf] = (undefined *)((int)ppuVar6[9] * -8);
    }
  }
  else if (((uint)puVar3 & 0x400) != 0) {
    ppuVar6[0xf] = (undefined *)0x0;
    ppuVar6[0xc] = (undefined *)((uint)ppuVar6[0xc] ^ 0x400);
  }
  draw::DisableFontColors();
  if (g_JapaneseMode == false) {
    draw::FontPrintOptWestern(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    draw::FontPrintOptJapanese(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  draw::EnableFontColors();
  if (((uint)ppuVar6[0xc] & 0x20000) != 0) {
    draw::DisableFontColors();
  }
  if (g_JapaneseMode == false) {
    draw::FontPrintOptWestern(uVar19,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  else {
    draw::FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
  }
  if (((uint)ppuVar6[0xc] & 0x20000) != 0) {
    draw::EnableFontColors();
  }
  if (((uint)ppuVar6[0xc] & 0x400) != 0) {
    draw::DisableFontColors();
    if (g_JapaneseMode == false) {
      draw::FontPrintOptWestern(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    else {
      draw::FontPrintOptJapanese(uVar18,__dest,0x80000000,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    draw::EnableFontColors();
    if (g_JapaneseMode == false) {
      draw::FontPrintOptWestern(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
    }
    else {
      draw::FontPrintOptJapanese(uVar18,__dest,uVar8,__s,0xffffffffffffffff,uVar17,puVar12);
    }
  }
  if (((uint)ppuVar6[0xc] & 0x400) != 0) {
    iVar9 = 3;
    if ((g_downButtons & L2) != 0) {
      iVar9 = 10;
    }
    puVar12 = ppuVar6[0xf] + iVar9;
    ppuVar6[0xf] = puVar12;
    iVar9 = ((int)local_e2 + DAT_00730ad4 * 3) * 0x10;
    ppuVar6[0xf] = puVar12 + -(((int)puVar12 / iVar9) * iVar9);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 00141408  ns=pause  size=0x878
// sig: undefined UpdatePauseMenu(void)
// callers(0): 
// callees(4): 00011530 boot::LoadLanguageHelpMsgs; 00078178 freeze::DisplayPrompt; 000e8888 memcard::memcard_PerformOperation; 0015d12c sound::PlayMobySound

undefined8 pause::UpdatePauseMenu(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short *psVar8;
  undefined1 auVar9 [16];
  
  iVar5 = 0;
  bVar1 = *(int *)(g_currentMenuPage + 0x40) != param_1;
  if (**(short **)(param_1 + 0x34) != 0) {
    iVar4 = 0;
    iVar7 = 0;
    do {
      if ((bVar1) || (*(int *)(param_1 + 0x40) != iVar5)) {
        psVar8 = (short *)(*(int *)(param_1 + 0x34) + 10 + iVar4);
        if ((int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5)) < (int)*psVar8) {
          iVar2 = (int)(animationSpeed * ((float)(longlong)DAT_00729848 + 0.5));
          auVar9._0_4_ = iVar2;
          auVar9._4_4_ = iVar2;
          auVar9._8_4_ = iVar2;
          auVar9._12_4_ = iVar2;
          auVar9 = vectorSplatHalfWord(auVar9,1);
          sVar6 = storeVectorElementHalfWordIndexed(auVar9,0,ZEXT48(psVar8));
          *psVar8 = sVar6;
        }
        sVar6 = 0;
        if (0 < *psVar8) {
          sVar6 = *psVar8 + -1;
        }
        *psVar8 = sVar6;
      }
      else {
        psVar8 = (short *)(*(int *)(param_1 + 0x34) + 10 + iVar4);
        *psVar8 = *psVar8 + 1;
        if (32000 < *psVar8) {
          *psVar8 = 32000;
        }
      }
      iVar7 = iVar7 + 0xc;
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + 1;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar7) != 0);
  }
  if (!bVar1) {
    if ((pad_pressedButton & 0xd00) != 0) {
      if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
        g_SelectedLevel = Level;
      }
      return 0xffffffffffffffff;
    }
    if ((pad_pressedButton & 0x10) != 0) {
      if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
        g_SelectedLevel = Level;
      }
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
    if (((pad_pressedButton & pad_ConfirmButtonMask) != 0) && ((memcard::g_CardStateFlags & 1) == 0)
       ) {
      iVar5 = *(int *)(param_1 + 0x34);
      iVar4 = *(int *)(param_1 + 0x40) * 0xc;
      sVar6 = *(short *)(iVar5 + 2 + iVar4);
      if (sVar6 < 7) {
        if (sVar6 < 4) {
          if (1 < sVar6) {
            if (sVar6 < 3) {
              sound::PlayMobySound(2,0x11,*(MobyInstance **)(param_1 + 0x14));
            }
            else {
              g_nextMenuPage = *(undefined4 *)(iVar5 + 4 + iVar4);
            }
          }
        }
        else if (sVar6 < 5) {
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cfc = 0;
          memcard::memcard_PerformOperation(0);
          freeze::DisplayPrompt
                    (3,*(int *)(*(int *)(param_1 + 0x34) + 4 + *(int *)(param_1 + 0x40) * 0xc),0);
        }
        else {
          if (5 < sVar6) {
            iVar5 = *(int *)(iVar5 + 4 + iVar4) >> 0x10;
            if (iVar5 != 0) {
              DAT_00a52c98 = *(undefined4 *)(&DAT_00a15d40 + iVar5 * 4);
            }
            resumePage = g_currentMenuPage;
            resumeScreen = 0;
            g_menuClosing = 5;
            DAT_00a52c90 = *(uint *)(*(int *)(param_1 + 0x34) + 4 + iVar4) & 0xffff;
            sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
            return 0;
          }
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cfc = 1;
          memcard::memcard_PerformOperation(1);
          freeze::DisplayPrompt
                    (3,*(int *)(*(int *)(param_1 + 0x34) + 4 + *(int *)(param_1 + 0x40) * 0xc),0);
        }
      }
      else {
        if (sVar6 < 10) {
          if (sVar6 < 8) {
            resumePage = g_currentMenuPage;
            resumeScreen = 2;
            g_menuClosing = 3;
            DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
            sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
            return 0;
          }
          if (8 < sVar6) {
            g_Language = *(int *)(iVar5 + 4 + iVar4);
            if (g_Language != 6) {
              pad_ConfirmButtonMask = 0x40;
              DAT_00902ed8 = 0x20;
            }
            else {
              pad_ConfirmButtonMask = 0x60;
              DAT_00902ed8 = 0x60;
            }
            g_JapaneseMode = g_Language == 6;
            boot::LoadLanguageHelpMsgs();
            return 0;
          }
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 4;
          DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
        if (sVar6 < 0xb) {
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 6;
          DAT_00a52c90 = *(undefined4 *)(iVar5 + 4 + iVar4);
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
        if (sVar6 < 0xc) {
          resumeScreen = 2;
          resumePage = g_currentMenuPage;
          g_menuClosing = 7;
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          return 0;
        }
      }
    }
    iVar5 = 0;
    if (**(short **)(param_1 + 0x34) != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + 1;
      } while (*(short *)(*(int *)(param_1 + 0x34) + iVar4) != 0);
    }
    iVar4 = *(int *)(param_1 + 0x40);
    uVar3 = pad_pressedButton;
    if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
      uVar3 = pad_Repeat;
    }
    if (((uVar3 & 0x1000) != 0) ||
       (((*(uint *)(param_1 + 0x30) & 0x100) != 0 && ((uVar3 & 4) != 0)))) {
      if (iVar4 == 0) {
        if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
          *(undefined4 *)(g_currentMenuPage + 0x80) = *(undefined4 *)(param_1 + 0x38);
        }
        else {
          *(int *)(param_1 + 0x40) = iVar5 + -1;
        }
      }
      else {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      }
    }
    if (((uVar3 & 0x4000) != 0) ||
       (((*(uint *)(param_1 + 0x30) & 0x100) != 0 && ((uVar3 & 8) != 0)))) {
      iVar5 = *(int *)(param_1 + 0x40) * 0xc;
      if ((*(short *)(*(int *)(param_1 + 0x34) + 0xc + iVar5) == 0) ||
         (*(short *)(*(int *)(param_1 + 0x34) + 0xe + iVar5) == 0)) {
        if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
          *(undefined4 *)(g_currentMenuPage + 0x80) = *(undefined4 *)(param_1 + 0x3c);
        }
        else {
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
      }
      else {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
    }
    if (((*(int *)(param_1 + 0x40) != iVar4) || (*(int *)(g_currentMenuPage + 0x80) != 0)) &&
       (sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14)),
       (*(uint *)(param_1 + 0x30) & 0x20) != 0)) {
      g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + *(int *)(param_1 + 0x40) * 4);
    }
  }
  return 0;
}



//==== 00141c90  ns=pause  size=0xa18
// sig: undefined DrawPauseStrings(void)
// callers(0): 
// callees(14): 000685c4 draw::GetEffectTex; 00068c70 draw::FontPrintJapanese_unk2; 00069058 draw::FontLenScaledWithTableNoKern; 00069a50 draw::FontPrint_unk3; 0006c5dc draw::EnableFontColors; 0006ccb4 draw::DisableFontColors; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006f918 draw::FontLenScaledWithTable; 0007b740 help::help_msg_string_by_index; 00140170 pause::GetMenuFadeColor; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend

undefined8 pause::DrawPauseStrings(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  
  iVar2 = *(int *)(g_currentMenuPage + 0x40);
  if (g_JapaneseMode) {
    iVar13 = 0xe;
  }
  else {
    iVar13 = 0xc;
  }
  uVar12 = 1;
  if ((*(uint *)(param_1 + 0x30) & 4) != 0) {
    if (g_JapaneseMode) {
      iVar13 = 0xe;
    }
    else {
      iVar13 = 0xe;
      uVar12 = 3;
    }
  }
  uVar18 = 0x3ff0000000000000;
  if (g_Language == 6) {
    uVar18 = 0x3feb333340000000;
  }
  else if (g_Language == 5) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 4) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 3) {
    uVar18 = 0x3fecccccc0000000;
  }
  else if (g_Language == 2) {
    uVar18 = 0x3fecccccc0000000;
  }
  if ((*(uint *)(param_1 + 0x30) & 8) != 0) {
    if (g_JapaneseMode) {
      iVar13 = 0xe;
      uVar12 = 1;
    }
    else {
      iVar13 = 10;
      uVar12 = 2;
    }
  }
  uVar5 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar5);
  uVar5 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar5);
  stub::STUB_0006d704(0);
  iVar10 = 0;
  if (**(short **)(param_1 + 0x34) != 0) {
    iVar6 = 0;
    iVar10 = 0;
    do {
      iVar6 = iVar6 + 0xc;
      iVar10 = iVar10 + 1;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar6) != 0);
  }
  if ((*(uint *)(param_1 + 0x30) & 0x10) == 0) {
    iVar10 = *(int *)(param_1 + 0x24) / (iVar10 + 1);
  }
  else {
    iVar10 = iVar13 + 3;
  }
  iVar9 = 0;
  iVar6 = *(int *)(param_1 + 0x20) >> 1;
  iVar13 = (iVar10 - (iVar13 >> 1)) + -1;
  if ((g_MenuScreen == 0x2a) && (g_Language == 2)) {
    uVar18 = 0x3fe99999a0000000;
  }
  if (((*(uint *)(param_1 + 0x30) & 0x4000) != 0) && (**(short **)(param_1 + 0x34) != 0)) {
    iVar11 = 0;
    iVar14 = 0;
    iVar9 = 0;
    do {
      if (g_JapaneseMode == false) {
        uVar5 = help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar11));
        iVar7 = draw::FontLenScaledWithTableNoKern(uVar18,uVar5,0xffffffffffffffff);
      }
      else {
        uVar5 = help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar11));
        iVar7 = draw::FontLenScaledWithTable(uVar18,uVar5,0xffffffffffffffff);
      }
      if (iVar9 < iVar7) {
        iVar9 = iVar7;
      }
      iVar14 = iVar14 + 0xc;
      iVar11 = iVar11 + 0xc;
    } while (*(short *)(*(int *)(param_1 + 0x34) + iVar14) != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((((uVar3 & 0x20000) == 0) || (iVar9 + 6 <= *(int *)(param_1 + 0x20))) || ((uVar3 & 8) != 0)) {
    if (*(int *)(param_1 + 0x20) < iVar9) {
      iVar9 = *(int *)(param_1 + 0x20);
    }
    iVar14 = 0;
    if (**(short **)(param_1 + 0x34) != 0) {
      iVar7 = 0;
      iVar11 = 0;
      do {
        bVar4 = false;
        if ((iVar2 == param_1) && (*(int *)(param_1 + 0x40) == iVar14)) {
          bVar4 = true;
        }
        iVar8 = *(int *)(param_1 + 0x34);
        bVar1 = *(short *)(iVar8 + 2 + iVar7) != 0;
        if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
          if (bVar4) {
            if (bVar1) {
              GetMenuFadeColor(*(undefined2 *)(iVar8 + 10 + iVar7),0xffffffffffffffff,
                               0xffffffffffffffff);
            }
          }
          else if (bVar1) {
            GetMenuFadeColor(*(undefined2 *)(iVar8 + 10 + iVar7),0xffffffffffffffff,
                             0xffffffffffffffff);
          }
        }
        uVar5 = help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + iVar7));
        if (*(short *)(*(int *)(param_1 + 0x34) + 2 + iVar7) == 2) {
          uVar5 = help::help_msg_string_by_index(STR_0x4F54);
        }
        if (g_JapaneseMode == false) {
          iVar8 = draw::FontLenScaledWithTableNoKern(uVar18,uVar5,0xffffffffffffffff);
        }
        else {
          iVar8 = draw::FontLenScaledWithTable(uVar18,uVar5,0xffffffffffffffff);
        }
        iVar8 = iVar6 - (iVar8 >> 1);
        if ((*(uint *)(param_1 + 0x30) & 0x40) == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x4000) != 0) {
            iVar8 = iVar6 - (iVar9 >> 1);
          }
        }
        else {
          iVar8 = 4;
        }
        draw::DisableFontColors();
        if (g_JapaneseMode == false) {
          dVar16 = (double)(longlong)(DAT_0072984c + iVar8);
          dVar15 = (double)(longlong)(DAT_00729850 + iVar13);
          draw::GetEffectTex((double)(longlong)(DAT_00729850 + iVar13),uVar12);
          draw::FontPrint_unk3(dVar16,dVar15,uVar18);
        }
        else {
          dVar16 = (double)(longlong)(DAT_0072984c + iVar8);
          dVar15 = (double)(longlong)(DAT_00729850 + iVar13);
          draw::GetEffectTex((double)(longlong)(DAT_00729850 + iVar13),uVar12);
          draw::FontPrintJapanese_unk2(dVar16,dVar15,uVar18);
        }
        draw::EnableFontColors();
        if ((*(uint *)(param_1 + 0x30) & 0x80) != 0) {
          draw::DisableFontColors();
        }
        dVar16 = (double)(longlong)iVar13;
        dVar15 = (double)(longlong)iVar8;
        if (g_JapaneseMode == false) {
          draw::GetEffectTex(uVar12);
          draw::FontPrint_unk3(dVar15,dVar16,uVar18);
        }
        else {
          draw::GetEffectTex((longlong)iVar8,uVar12);
          draw::FontPrintJapanese_unk2(dVar15,dVar16,uVar18);
        }
        iVar13 = iVar13 + iVar10;
        if (*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7) != 0) {
          draw::DisableFontColors();
          if (g_JapaneseMode == false) {
            dVar17 = (double)(longlong)(DAT_0072984c + iVar8);
            dVar16 = (double)(longlong)(DAT_00729850 + iVar13);
            help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            draw::GetEffectTex(uVar12);
            draw::FontPrint_unk3(dVar17,dVar16,uVar18);
          }
          else {
            dVar17 = (double)(longlong)(DAT_0072984c + iVar8);
            dVar16 = (double)(longlong)(DAT_00729850 + iVar13);
            help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            draw::GetEffectTex(uVar12);
            draw::FontPrintJapanese_unk2(dVar17,dVar16,uVar18);
          }
          if ((*(uint *)(param_1 + 0x30) & 0x80) == 0) {
            draw::EnableFontColors();
          }
          dVar16 = (double)(longlong)iVar13;
          if (g_JapaneseMode == false) {
            help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            draw::GetEffectTex(uVar12);
            draw::FontPrint_unk3(dVar15,dVar16,uVar18);
          }
          else {
            help::help_msg_string_by_index((int)*(short *)(*(int *)(param_1 + 0x34) + 8 + iVar7));
            draw::GetEffectTex(uVar12);
            draw::FontPrintJapanese_unk2(dVar15,dVar16,uVar18);
          }
          iVar13 = iVar13 + iVar10;
        }
        if ((*(uint *)(param_1 + 0x30) & 0x80) != 0) {
          draw::EnableFontColors();
        }
        iVar11 = iVar11 + 0xc;
        iVar14 = iVar14 + 1;
        iVar7 = iVar7 + 0xc;
      } while (*(short *)(*(int *)(param_1 + 0x34) + iVar11) != 0);
    }
    stub::STUB_0006d708();
    uVar12 = 2;
  }
  else {
    uVar12 = 1;
    *(uint *)(param_1 + 0x30) = uVar3 | 8;
  }
  return uVar12;
}



//==== 001426a8  ns=pause  size=0xdc
// sig: undefined MenuButton_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] skips hidden items via +0x4c chain, sets page+0x80
   [p2_pause] skips hidden items via +0x4c chain, sets page+0x80
   [p2_pause] skips hidden items via +0x4c chain, sets page+0x80 */

undefined8 pause::MenuButton_OnEnter(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if (param_2 == 0) {
    if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
      bVar1 = true;
    }
    if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
      bVar1 = true;
    }
    bVar2 = false;
    if (bVar1) {
      do {
        param_1 = *(int *)(param_1 + 0x4c);
        bVar2 = true;
        bVar1 = false;
        if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
          bVar1 = true;
        }
        if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
          bVar1 = true;
        }
      } while (bVar1);
    }
    if (bVar2) {
      *(int *)(g_currentMenuPage + 0x80) = param_1;
    }
  }
  return 0;
}



//==== 00142784  ns=pause  size=0x5dc
// sig: undefined MenuButton_Update(void)
// callers(0): 
// callees(2): 0008e0f4 hero::Hero_GetWeaponAmmo; 0015d12c sound::PlayMobySound

/* [p2_pause] button widget update
   [p2_pause] button widget update
   [p2_pause] button widget update */

undefined8 pause::MenuButton_Update(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((pad_pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      iVar8 = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x3c);
      iVar7 = *(int *)(param_1 + 0x40);
      iVar10 = iVar2 - (iVar2 / iVar8) * iVar8;
      if ((pad_pressedButton & 0x1000) != 0) {
        if (iVar2 / iVar8 == 0) {
          iVar12 = param_1;
          if (*(int *)(param_1 + 0x4c) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) = iVar2 + iVar8 * (iVar7 + -1);
            }
          }
          else {
            do {
              iVar12 = *(int *)(iVar12 + 0x4c);
              bVar4 = false;
              iVar11 = *(int *)(iVar12 + 0x40);
              iVar3 = *(int *)(iVar12 + 0x44);
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(iVar12 + 0x30) & 8) != 0)) {
                bVar4 = true;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(iVar12 + 0x30) & 4) != 0)) {
                bVar4 = true;
              }
            } while (bVar4);
            *(int *)(g_currentMenuPage + 0x80) = iVar12;
            if ((iVar3 == 5) && (*(int *)(param_1 + 0x44) == 3)) {
              iVar10 = iVar10 + 1;
            }
            if ((iVar3 == 3) && (*(int *)(param_1 + 0x44) == 5)) {
              iVar9 = iVar10 + -1;
              iVar10 = 2;
              if ((iVar9 < 3) && (iVar10 = iVar9, iVar9 < 0)) {
                iVar10 = 0;
              }
            }
            iVar9 = iVar10;
            if (iVar3 + -1 <= iVar10) {
              iVar9 = iVar3 + -1;
            }
            *(int *)(iVar12 + 0x3c) = (iVar11 + -1) * iVar3 + iVar9;
          }
        }
        else {
          *(int *)(param_1 + 0x3c) = iVar2 - iVar8;
        }
      }
      if ((pad_pressedButton & 0x4000) != 0) {
        if (iVar2 / iVar8 + 1 < iVar7) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + iVar8;
        }
        else {
          iVar7 = param_1;
          if (*(int *)(param_1 + 0x50) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) =
                   *(int *)(param_1 + 0x3c) -
                   *(int *)(param_1 + 0x44) * (*(int *)(param_1 + 0x40) + -1);
            }
          }
          else {
            do {
              iVar7 = *(int *)(iVar7 + 0x50);
              bVar4 = false;
              iVar12 = *(int *)(iVar7 + 0x44);
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(iVar7 + 0x30) & 8) != 0)) {
                bVar4 = true;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(iVar7 + 0x30) & 4) != 0)) {
                bVar4 = true;
              }
            } while (bVar4);
            *(int *)(g_currentMenuPage + 0x80) = iVar7;
            if ((iVar12 == 5) && (*(int *)(param_1 + 0x44) == 3)) {
              iVar10 = iVar10 + 1;
            }
            if ((iVar12 == 3) && (*(int *)(param_1 + 0x44) == 5)) {
              iVar11 = iVar10 + -1;
              iVar10 = 2;
              if ((iVar11 < 3) && (iVar10 = iVar11, iVar11 < 0)) {
                iVar10 = 0;
              }
            }
            iVar11 = iVar10;
            if (iVar12 + -1 <= iVar10) {
              iVar11 = iVar12 + -1;
            }
            *(int *)(iVar7 + 0x3c) = iVar11;
          }
        }
      }
      uVar5 = pad_pressedButton;
      if ((pad_pressedButton & 0x8000) != 0) {
        if (iVar10 == 0) {
          if (*(int *)(param_1 + 0x54) == 0) {
            if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) + -1;
            }
          }
          else {
            *(int *)(g_currentMenuPage + 0x80) = *(int *)(param_1 + 0x54);
          }
        }
        else {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        }
      }
      if ((uVar5 & 0x2000) != 0) {
        if (iVar10 + 1 < iVar8) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
        }
        else if (*(int *)(param_1 + 0x58) == 0) {
          if ((*(uint *)(param_1 + 0x30) & 0x8000) == 0) {
            *(int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44)) + 1;
          }
        }
        else {
          *(int *)(g_currentMenuPage + 0x80) = *(int *)(param_1 + 0x58);
        }
      }
      if ((*(int *)(param_1 + 0x3c) != iVar2) || (*(int *)(g_currentMenuPage + 0x80) != 0)) {
        sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      }
      if ((((pad_pressedButton & pad_ConfirmButtonMask) != 0) &&
          ((*(uint *)(param_1 + 0x30) & 1) == 0)) && (DAT_00a52cf4 == 0)) {
        iVar8 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x3c) * 10;
        sVar1 = *(short *)(iVar8 + 6);
        if ((sVar1 == 0) || ((&UnlockableItems.field0_0x0)[sVar1] == '\0')) {
          sound::PlayMobySound(2,0x11,*(MobyInstance **)(param_1 + 0x14));
        }
        else {
          iVar2 = (&DAT_00721008)[sVar1 * 0x13];
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
          DAT_00a52cf4 = 10;
          if ((((&DAT_00a52be0)[iVar2] == (int)*(short *)(iVar8 + 6)) && (iVar2 != 0)) &&
             (iVar2 != 3)) {
            (&DAT_00a52be0)[iVar2] = 0;
          }
          else if (*(short *)(iVar8 + 6) == 0x18) {
            iVar8 = hero::Hero_GetWeaponAmmo(0x18);
            if ((iVar8 != 0) && (g_MenuScreen == 3)) {
              iVar8 = hero::Hero_GetWeaponAmmo(0x18);
              iVar8 = (uint)DAT_0096bcd7 + iVar8;
              if (6 < iVar8) {
                iVar8 = 6;
              }
              DAT_0096bcd7 = (byte)iVar8;
              DAT_0096bcd5 = 1;
            }
          }
          else {
            (&DAT_00a52be0)[iVar2] = (int)*(short *)(iVar8 + 6);
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



//==== 00142d60  ns=stub  size=0x8
// sig: undefined STUB_00142d60(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_00142d60(void)

{
  return 0;
}



//==== 00142d68  ns=pause  size=0xd0
// sig: undefined MapPage_OnExit(void)
// callers(0): 
// callees(1): 0011d9e0 music::music_StopLoad

/* [p2_pause] restores music state
   [p2_pause] restores music state
   [p2_pause] restores music state */

undefined8 pause::MapPage_OnExit(void)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = DAT_00a207d0;
  sVar2 = Music;
  if ((Music == 0) && (DAT_00a207d0 != -1)) {
    puVar1 = (uint *)(&map::g_MapCacheId + DAT_00a207d0);
    DAT_00a207d0 = -1;
    DAT_00a52c7b = '\0';
    (&map::g_MapCacheId)[iVar3] = *puVar1 ^ 0x1000;
  }
  if ((sVar2 != 0) && (DAT_00a52c7b != '\0')) {
    music::music_StopLoad();
    iVar3 = DAT_00a207d0;
    DAT_00a52c7b = '\0';
    DAT_00a207d0 = -1;
    (&map::g_MapCacheId)[iVar3] = -1;
  }
  return 0;
}



//==== 00142e38  ns=pause  size=0x754
// sig: undefined MapPage_Update(void)
// callers(0): 
// callees(13): 000e2190 map::Map_GetFreeCacheSlotCompact; 000e22f4 map::Map_GetNextMapToPrefetch; 000e24ac map::Map_GetGalacticMapIndex; 000e27bc map::Map_ExpandRevealMask; 000e2848 map::Map_UpdateZoomPan; 000ea5b0 mission::RefreshLevelMissionStatus; 000ea958 mission::UpdateMissionDisplay; 0015d12c sound::PlayMobySound; 00165800 map::ReadIndexedBuffer; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 00653504: 'rc1/ps3data/global/maps/maps_mm[%d].ps3' | 0065352c: 'rc1/ps3data/global/maps/maps[%d].ps3' | 00653554: 'rc1/ps3data/global/maps/maps_mm[%d].vram' | 00653584: 'rc1/ps3data/global/maps/maps[%d].vram' | 006535ac: '*pMapFile'

/* [p2_pause] loads maps/maps[_mm][%d].ps3/.vram
   [p2_pause] loads maps/maps[_mm][%d].ps3/.vram
   [p2_pause] loads maps/maps[_mm][%d].ps3/.vram */

undefined8 pause::MapPage_Update(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  LevelId LVar5;
  int iVar7;
  int iVar8;
  longlong lVar6;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  char acStack_8080 [64];
  char acStack_8040 [32776];
  
  map::Map_UpdateZoomPan();
  LVar5 = g_SelectedLevel;
  if ((*(uint *)(param_1 + 0x34) & 0x40) == 0) {
    if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
      return 1;
    }
    if ((pad_pressedButton & 0x10) != 0) {
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
    if ((pad_pressedButton & 0x40) != 0) {
      g_nextMenuPage = &DAT_0072ace0;
    }
    if (((pad_pressedButton & 0x20) != 0) && (g_SelectedLevel != Veldin)) {
      resumePage = &DAT_0072a9f0;
      resumeScreen = 0xb;
      g_menuClosing = 3;
      DAT_00a52c90 = g_SelectedLevel;
      sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      return 0;
    }
    iVar7 = map::Map_GetGalacticMapIndex(g_SelectedLevel);
    if (-1 < iVar7) {
      iVar14 = (int)((longlong)iVar7 << 2);
      if ((((pad_pressedButton & 8) != 0) && (iVar7 < 0x13)) &&
         (*(LevelId *)(ptr_GalacticMap + iVar14 + 4) != Veldin)) {
        g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + iVar14 + 4);
      }
      if ((((pad_pressedButton & 4) != 0) && (iVar7 != 0)) &&
         (*(LevelId *)(ptr_GalacticMap + iVar14 + -4) != Veldin)) {
        g_SelectedLevel = *(LevelId *)(ptr_GalacticMap + iVar14 + -4);
      }
    }
    if (g_SelectedLevel != LVar5) {
      iVar7 = sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      mission::RefreshLevelMissionStatus(iVar7);
    }
  }
  if (g_SelectedLevel != map::g_MapCurIndex) {
    bVar1 = UnlockableItems.mapOMatic == '\0';
    if (bVar1) {
      libc::snprintf(acStack_8080,"rc1/ps3data/global/maps/maps[%d].ps3",g_SelectedLevel);
    }
    else {
      libc::snprintf(acStack_8080,"rc1/ps3data/global/maps/maps_mm[%d].ps3",g_SelectedLevel);
    }
    map::g_MapIsMapOMatic = (int)!bVar1;
    map::g_MapLoaded = 1;
    fios::LoadAssetFromFile(acStack_8080,loaders::g_NpcBuffer,0x90000);
    iVar7 = loaders::g_NpcBuffer;
    if (UnlockableItems.mapOMatic == '\0') {
      libc::snprintf(acStack_8080,"rc1/ps3data/global/maps/maps[%d].vram",g_SelectedLevel);
    }
    else {
      libc::snprintf(acStack_8080,"rc1/ps3data/global/maps/maps_mm[%d].vram",g_SelectedLevel);
    }
    fios::LoadAssetFromFile(acStack_8080,DAT_00a20810,0x300000);
    iVar3 = DAT_00902e9c;
    iVar8 = iVar7 + *(int *)(iVar7 + 8);
    iVar11 = 0;
    iVar12 = 5;
    iVar14 = DAT_00a20810 - *(int *)(DAT_00902e9c + 0x4ac);
    do {
      iVar12 = iVar12 + -1;
      *(int *)(iVar8 + iVar11) = *(int *)(iVar8 + iVar11) + iVar14;
      iVar11 = iVar11 + 0x24;
    } while (iVar12 != 0);
    DAT_00a207e8 = (int)DAT_00a20814 - *(int *)(iVar3 + 0x4ac);
    DAT_00a207ec = 0x1e129;
    DAT_00a207f0 = 0x10303;
    DAT_00a207f4 = 0x80000000;
    DAT_00a207f8 = 0xaaff;
    DAT_00a207fc = 0x2062000;
    DAT_00a20800 = 0x2000200;
    DAT_00a20804 = 0x100200;
    map::g_MapAvailable = 1;
    if (g_SelectedLevel == Level) {
      map::Map_ExpandRevealMask(DAT_00a20814,(char *)map::g_MapRevealMask);
    }
    else if ((&VisitedPlanets.Veldin)[g_SelectedLevel] == '\0') {
      libc::memset(acStack_8040,0,0x8000);
      map::Map_ExpandRevealMask(DAT_00a20814,acStack_8040);
    }
    else {
      map::Map_ExpandRevealMask(DAT_00a20814,&DAT_0096ca34 + g_SelectedLevel * 0x8000);
    }
    if ((*(uint *)(param_1 + 0x34) & 0x80) == 0) {
      puVar13 = (undefined4 *)(iVar7 + *(int *)(iVar7 + 8));
      DAT_00a20718 = *puVar13;
      DAT_00a2071c = puVar13[1];
      DAT_00a20720 = puVar13[2];
      DAT_00a20724 = puVar13[3];
      DAT_00a20728 = puVar13[4];
      DAT_00a2072c = puVar13[5];
      DAT_00a20730 = puVar13[6];
      DAT_00a20734 = puVar13[7];
      DAT_00a20738 = puVar13[8];
      DAT_00a2073c = puVar13[9];
      DAT_00a20740 = puVar13[10];
      DAT_00a20744 = puVar13[0xb];
      DAT_00a20748 = puVar13[0xc];
      DAT_00a2074c = puVar13[0xd];
      DAT_00a20750 = puVar13[0xe];
      DAT_00a20754 = puVar13[0xf];
      DAT_00a20758 = puVar13[0x10];
      DAT_00a2075c = puVar13[0x11];
      DAT_00a20760 = puVar13[0x12];
      DAT_00a20764 = puVar13[0x13];
      DAT_00a20768 = puVar13[0x14];
      DAT_00a2076c = puVar13[0x15];
      DAT_00a20770 = puVar13[0x16];
      DAT_00a20774 = puVar13[0x17];
      DAT_00a20778 = puVar13[0x18];
      DAT_00a2077c = puVar13[0x19];
      DAT_00a20780 = puVar13[0x1a];
    }
    map::g_MapCurIndex = g_SelectedLevel;
    mission::UpdateMissionDisplay(g_SelectedLevel,0);
  }
  iVar7 = DAT_00a207d0;
  sVar4 = Music;
  if ((Music == 0) && (DAT_00a207d0 != -1)) {
    puVar2 = (uint *)(&map::g_MapCacheId + DAT_00a207d0);
    DAT_00a207d0 = -1;
    DAT_00a52c7b = 0;
    (&map::g_MapCacheId)[iVar7] = *puVar2 ^ 0x1000;
  }
  if (sVar4 == 0) {
    iVar7 = map::Map_GetFreeCacheSlotCompact();
    lVar6 = (longlong)iVar7;
    if ((iVar7 != -1) && (uVar9 = map::Map_GetNextMapToPrefetch(), uVar9 != 0xffffffff)) {
      uVar10 = 0;
      if (Level + map::g_MapIsMapOMatic != 0) {
        uVar10 = 0x100;
      }
      if (uVar10 == uVar9) {
        iVar14 = (int)(lVar6 << 2);
        map::ReadIndexedBuffer
                  (*(undefined4 *)((int)&map::g_MapCacheBuf + iVar14),map::g_MapFileId,0,
                   map::g_MapFileSize,0);
        *(int *)((int)&map::g_MapCacheSize + iVar14) = map::g_MapFileSize;
      }
      else {
        if ((uVar9 & 0x100) == 0) {
          iVar14 = uVar9 * 8 + 0x10e9660;
        }
        else {
          iVar14 = (uVar9 ^ 0x100) * 8 + 0x10e96f8;
        }
        iVar3 = (int)(lVar6 << 2);
        idol::PRINT_m_LoadGameFile(*(uint *)((int)&map::g_MapCacheBuf + iVar3),"*pMapFile");
        DAT_00a52c7b = 1;
        *(int *)((int)&map::g_MapCacheSize + iVar3) = (*(int *)(iVar14 + 4) << 0xb) >> 4;
      }
      DAT_00a207d0 = iVar7;
      *(uint *)((int)&map::g_MapCacheId + (int)(lVar6 << 2)) = uVar9 | 0x1000;
    }
  }
  return 0;
}



//==== 0014358c  ns=pause  size=0xc0
// sig: undefined Missions_OnEnter(void)
// callers(0): 
// callees(2): 000ea5b0 mission::RefreshLevelMissionStatus; 000ea7a8 mission::BuildMissionList

/* [p2_pause] RefreshLevelMissionStatus + BuildMissionList
   [p2_pause] RefreshLevelMissionStatus + BuildMissionList
   [p2_pause] RefreshLevelMissionStatus + BuildMissionList */

undefined8 pause::Missions_OnEnter(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  mission::RefreshLevelMissionStatus();
  lVar3 = mission::BuildMissionList(DAT_00902ec8,(uint *)0x0,DAT_00902ec8 + 0x40,'\x01');
  *(int *)(param_1 + 0x7c) = (int)lVar3;
  piVar2 = (int *)(param_1 + 0x30 + g_SelectedLevel * 4);
  if (*piVar2 != -1) {
    iVar1 = *piVar2;
    DAT_0072af24 = DAT_00902ec8[iVar1];
    DAT_0072adc0 = DAT_00902ec8[iVar1 + 0x40];
  }
  return 0;
}



//==== 0014364c  ns=pause  size=0x330
// sig: undefined Missions_Update(void)
// callers(0): 
// callees(3): 000ea5b0 mission::RefreshLevelMissionStatus; 000ea7a8 mission::BuildMissionList; 0015d12c sound::PlayMobySound

/* [p2_pause] paired with DrawMissionsFrame; cycles level
   [p2_pause] paired with DrawMissionsFrame; cycles level
   [p2_pause] paired with DrawMissionsFrame; cycles level */

undefined8 pause::Missions_Update(int param_1)

{
  int iVar1;
  int *piVar2;
  LevelId LVar3;
  uint uVar4;
  LevelId LVar5;
  LevelId LVar6;
  undefined8 uVar7;
  LevelId LVar9;
  int iVar10;
  longlong lVar8;
  int iVar11;
  
  LVar5 = g_SelectedLevel;
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      LVar6 = g_SelectedLevel;
      if ((pad_pressedButton & 8) != 0) {
        for (LVar9 = g_SelectedLevel + Novalis;
            ((LVar6 = g_SelectedLevel, (int)LVar9 < 0x14 &&
             (LVar6 = LVar9, (&g_SeenPlanets.Veldin)[LVar9] == '\0')) && (Level != LVar9));
            LVar9 = LVar9 + Novalis) {
        }
      }
      g_SelectedLevel = LVar6;
      LVar9 = g_SelectedLevel;
      LVar6 = g_SelectedLevel;
      if ((pad_pressedButton & 4) != 0) {
        do {
          LVar3 = LVar6 - Novalis;
          LVar9 = g_SelectedLevel;
          if (((int)LVar3 < 0) ||
             (LVar9 = LVar3, *(char *)((int)&DAT_0096ca08 + LVar6 + Kerwan) != '\0')) break;
          LVar6 = LVar3;
        } while (Level != LVar3);
      }
      g_SelectedLevel = LVar9;
      if (g_SelectedLevel != LVar5) {
        iVar10 = sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
        mission::RefreshLevelMissionStatus(iVar10);
      }
      uVar4 = pad_pressedButton;
      iVar10 = *(int *)(param_1 + 0x7c);
      if (iVar10 != 0) {
        piVar2 = (int *)(param_1 + 0x30 + g_SelectedLevel * 4);
        iVar1 = *piVar2;
        if ((pad_pressedButton & 0x1000) != 0) {
          iVar11 = iVar1 + iVar10 + -1;
          *piVar2 = iVar11 - (iVar11 / iVar10) * iVar10;
        }
        if ((uVar4 & 0x4000) != 0) {
          *piVar2 = (*piVar2 + 1) -
                    ((*piVar2 + 1) / *(int *)(param_1 + 0x7c)) * *(int *)(param_1 + 0x7c);
        }
        if (*piVar2 != iVar1) {
          sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
        }
        if (((uVar4 & 0x5000) != 0) || (g_SelectedLevel != LVar5)) {
          lVar8 = mission::BuildMissionList(DAT_00902ec8,(uint *)0x0,DAT_00902ec8 + 0x40,'\x01');
          *(int *)(param_1 + 0x7c) = (int)lVar8;
          iVar10 = *(int *)(param_1 + 0x30 + g_SelectedLevel * 4);
          DAT_0072af24 = DAT_00902ec8[iVar10];
          DAT_0072adc0 = DAT_00902ec8[iVar10 + 0x40];
        }
      }
      if ((pad_pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    if ((int)g_SelectedLevel < 0x14) {
      *(undefined4 *)(param_1 + 0x30 + g_SelectedLevel * 4) = 0xffffffff;
    }
    uVar7 = 0;
  }
  return uVar7;
}



//==== 00143980  ns=pause  size=0x2b0
// sig: undefined SlotConfig_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound
// strings: 00a0feec: 'None'

/* [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc
   [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc
   [p2_pause] edits 8-int array copied from UINT_ARRAY_0096c1dc */

undefined8 pause::SlotConfig_Update(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = pad_pressedButton;
  iVar4 = *(int *)(param_1 + 0x50);
  sVar1 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if ((pad_pressedButton & 8) != 0) {
    uVar5 = iVar4 + 1;
    *(uint *)(param_1 + 0x50) =
         uVar5 + (((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0)) * -8;
  }
  if ((uVar3 & 4) != 0) {
    uVar3 = *(int *)(param_1 + 0x50) + 7;
    *(uint *)(param_1 + 0x50) =
         uVar3 + (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0)) * -8;
  }
  if (*(int *)(param_1 + 0x50) != iVar4) {
    sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  if (((sVar1 != 0) && ((&UnlockableItems.field0_0x0)[sVar1] != '\0')) &&
     ((pad_pressedButton & pad_ConfirmButtonMask) != 0)) {
    if (CHAR_ARRAY_00a0feec._168_2_ != -1) {
      CHAR_ARRAY_00a0feec._168_2_ = CHAR_ARRAY_00a0feec._168_2_ + 1;
    }
    if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._170_2_ <
        (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) / 600) {
      iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a0feec._170_2_ =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    CHAR_ARRAY_00a0feec._172_4_ = CHAR_ARRAY_00a0feec._172_4_ | 1 << (Level & 0x3f) | 0x80000000;
    for (iVar4 = 0; (iVar4 < 8 && (*(int *)(param_1 + 0x30 + iVar4 * 4) != (int)sVar1));
        iVar4 = iVar4 + 1) {
    }
    if (iVar4 < 8) {
      *(undefined4 *)(param_1 + 0x30 + iVar4 * 4) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x50);
    uVar3 = iVar4 + 1;
    *(uint *)(param_1 + 0x50) =
         uVar3 + (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0)) * -8;
    *(int *)(param_1 + 0x30 + iVar4 * 4) = (int)sVar1;
  }
  return 0;
}



//==== 00143c30  ns=pause  size=0x8c
// sig: undefined SlotConfig_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget
   [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget
   [p2_pause] copies UINT_ARRAY_0096c1dc[8] into widget */

void pause::SlotConfig_OnEnter(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 8;
  iVar5 = 0;
  do {
    puVar3 = (undefined4 *)(param_1 + 0x30 + iVar5);
    iVar4 = iVar4 + -1;
    puVar2 = (undefined4 *)((int)UINT_ARRAY_0096c1dc + iVar5);
    iVar5 = iVar5 + 4;
    *puVar3 = *puVar2;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  while ((iVar4 = *(int *)(param_1 + 0x50), *(int *)(param_1 + 0x30 + iVar4 * 4) != 0 && (iVar4 < 8)
         )) {
    *(int *)(param_1 + 0x50) = iVar4 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) =
       uVar1 + (((int)uVar1 >> 3) + (uint)((int)uVar1 < 0 && (uVar1 & 7) != 0)) * -8;
  return;
}



//==== 00143cbc  ns=pause  size=0x40
// sig: undefined SlotConfig_OnExit(void)
// callers(0): 
// callees(0): 

/* [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc
   [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc
   [p2_pause] copies widget values back to UINT_ARRAY_0096c1dc */

void pause::SlotConfig_OnExit(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)UINT_ARRAY_0096c1dc + iVar1) = *(undefined4 *)(param_1 + 0x30 + iVar1);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 8);
  return;
}



//==== 00143cfc  ns=pause  size=0x38
// sig: undefined SelectPackItemList_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack
   [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack
   [p2_pause] OnEnter: picks string list by UnlockableItems.heliPack */

undefined8 pause::SelectPackItemList_OnEnter(int param_1)

{
  undefined *puVar1;
  
  if (UnlockableItems.heliPack == '\0') {
    puVar1 = &DAT_0072be38;
  }
  else {
    puVar1 = &DAT_0072be04;
  }
  *(undefined **)(param_1 + 0x34) = puVar1;
  return 0;
}



//==== 00143d34  ns=pause  size=0x18
// sig: undefined MapPage_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] sets 0xa206e8=-1
   [p2_pause] sets 0xa206e8=-1
   [p2_pause] sets 0xa206e8=-1 */

undefined8 pause::MapPage_OnEnter(void)

{
  map::g_MapCurIndex = -1;
  return 0;
}



//==== 00143d4c  ns=pause  size=0x28
// sig: undefined MenuText_OnEnterResetBuffers(void)
// callers(0): 
// callees(1): 0013af68 pause::Menu_InitStreamBuffers

/* [p2_pause] OnEnter: Menu_InitStreamBuffers(1)
   [p2_pause] OnEnter: Menu_InitStreamBuffers(1)
   [p2_pause] OnEnter: Menu_InitStreamBuffers(1) */

undefined8 pause::MenuText_OnEnterResetBuffers(void)

{
  Menu_InitStreamBuffers(1);
  return 0;
}



//==== 00143d74  ns=pause  size=0x38
// sig: undefined SoundOptions_OnExit(void)
// callers(0): 
// callees(0): 

/* [p2_pause] applies SfxVolume to soundGlobals.dialogVolume
   [p2_pause] applies SfxVolume to soundGlobals.dialogVolume
   [p2_pause] applies SfxVolume to soundGlobals.dialogVolume */

undefined8 pause::SoundOptions_OnExit(void)

{
  uint uVar1;
  
  uVar1 = g_GameSettings.SfxVolume << 3;
  soundGlobals.dialogVolume =
       (float)(((int)uVar1 / 10 + ((int)(uVar1 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f)) -
              ((int)uVar1 >> 0x1f));
  return 0;
}



//==== 00143dac  ns=pause  size=0x2d8
// sig: undefined SoundOptions_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* [p2_pause] paired with DrawSoundOptionsFrame
   [p2_pause] paired with DrawSoundOptionsFrame
   [p2_pause] paired with DrawSoundOptionsFrame */

undefined8 pause::SoundOptions_Update(int param_1)

{
  int iVar1;
  int iVar2;
  dword dVar3;
  dword dVar4;
  dword dVar5;
  uint uVar6;
  uint uVar7;
  dword dVar8;
  
  uVar6 = pad_pressedButton;
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((pad_pressedButton & 0x1000) != 0) {
    uVar7 = iVar1 + 1;
    *(uint *)(param_1 + 0x40) =
         uVar7 + (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * -2;
  }
  if ((uVar6 & 0x4000) != 0) {
    uVar6 = *(int *)(param_1 + 0x40) + 1;
    *(uint *)(param_1 + 0x40) =
         uVar6 + (((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)) * -2;
  }
  if (((*(int *)(param_1 + 0x40) != iVar1) || (*(int *)(g_currentMenuPage + 0x80) != 0)) &&
     (sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14)),
     (*(uint *)(param_1 + 0x30) & 0x20) != 0)) {
    g_SelectedLevel = *(undefined4 *)(ptr_GalacticMap + *(int *)(param_1 + 0x40) * 4);
  }
  dVar4 = g_GameSettings.SfxVolume;
  dVar3 = g_GameSettings.MusicVolume;
  dVar8 = g_GameSettings.MusicVolume;
  if ((DAT_00964b00 & 0x2000) != 0) {
    dVar5 = g_GameSettings.SfxVolume;
    if ((*(int *)(param_1 + 0x40) == 0) &&
       (dVar5 = 0x400, (int)(g_GameSettings.SfxVolume + 3) < 0x400)) {
      dVar5 = g_GameSettings.SfxVolume + 3;
    }
    g_GameSettings.SfxVolume = dVar5;
    if ((*(int *)(param_1 + 0x40) == 1) &&
       (dVar8 = 0x400, (int)(g_GameSettings.MusicVolume + 3) < 0x400)) {
      dVar8 = g_GameSettings.MusicVolume + 3;
    }
  }
  g_GameSettings.MusicVolume = dVar8;
  if ((DAT_00964b00 & 0x8000) != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      dVar8 = g_GameSettings.SfxVolume - 3;
      g_GameSettings.SfxVolume = 0;
      if (0 < (int)dVar8) {
        g_GameSettings.SfxVolume = dVar8;
      }
    }
    if (*(int *)(param_1 + 0x40) == 1) {
      dVar8 = g_GameSettings.MusicVolume - 3;
      g_GameSettings.MusicVolume = 0;
      if (0 < (int)dVar8) {
        g_GameSettings.MusicVolume = dVar8;
      }
    }
  }
  if ((g_GameSettings.MusicVolume != dVar3) || (g_GameSettings.SfxVolume != dVar4)) {
    uVar6 = g_GameSettings.SfxVolume << 3;
    iVar2 = g_GameSettings.SfxVolume * 7;
    iVar1 = iVar2 / 10 + (iVar2 >> 0x1f);
    soundGlobals.sfxVolume =
         (float)(((int)uVar6 / 10 + ((int)(uVar6 | g_GameSettings.SfxVolume >> 0x1d) >> 0x1f)) -
                ((int)uVar6 >> 0x1f));
    iVar2 = iVar2 / 10 + (iVar2 >> 0x1f);
    soundGlobals.ambientVolume = (float)(iVar1 - (iVar1 >> 0x1f));
    soundGlobals.shellVolume = (float)(iVar2 - (iVar2 >> 0x1f));
    soundGlobals.musicVolume = (float)g_GameSettings.MusicVolume;
    soundGlobals.dialogVolume = (float)g_GameSettings.MusicVolume;
    soundGlobals.mpegVolume = (float)g_GameSettings.SfxVolume;
  }
  return 0;
}



//==== 00144084  ns=pause  size=0x350
// sig: undefined DrawSoundOptionsFrame(void)
// callers(0): 
// callees(7): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070130 draw::FontPrintMediumRight; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000d8364 hud::DrawSprite2

undefined8 pause::DrawSoundOptionsFrame(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x24) / 3 + (*(int *)(param_1 + 0x24) >> 0x1f);
  iVar1 = *(int *)(param_1 + 0x20) >> 1;
  iVar2 = iVar2 - (iVar2 >> 0x1f);
  iVar7 = iVar1 + 0x10;
  stub::STUB_0006d704(0);
  uVar4 = 0x80ffa888;
  uVar5 = uVar4;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar5 = 0x8020ffff;
  }
  uVar3 = help::help_msg_string_by_index(STR_SOUND_EFFECTS_VOLUME);
  draw::FontPrintMediumRight(iVar1 + 8,iVar2 + -8,uVar5,uVar3,0xffffffffffffffff);
  hud::DrawFlatOverlay
            (iVar1 + 0x17,iVar2 + -8,*(int *)(param_1 + 0x20) + -0x3f,iVar2 + 8,0x80696969,0);
  iVar8 = iVar1 + 0x19;
  hud::DrawFlatOverlay(iVar8,iVar2 + -6,*(int *)(param_1 + 0x20) + -0x41,iVar2 + 6,0x80383838,0);
  uVar6 = ((*(int *)(param_1 + 0x20) - iVar7) + -0x4a) * g_GameSettings.SfxVolume;
  uVar3 = hud::GetIconFrameTex(0xe99e,8);
  hud::DrawSprite2(uVar3,iVar8,iVar2 + -6,
                   iVar7 + ((int)uVar6 >> 10) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3ff) != 0) + 8,
                   iVar2 + 5,0,0x13,0x35);
  iVar2 = iVar2 * 2;
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar4 = 0x8020ffff;
  }
  uVar3 = help::help_msg_string_by_index(STR_MUSIC_VOLUME);
  draw::FontPrintMediumRight(iVar1 + 8,iVar2 + -8,uVar4,uVar3,0xffffffffffffffff);
  hud::DrawFlatOverlay
            (iVar1 + 0x17,iVar2 + -8,*(int *)(param_1 + 0x20) + -0x3f,iVar2 + 8,0x80696969,0);
  hud::DrawFlatOverlay(iVar8,iVar2 + -6,*(int *)(param_1 + 0x20) + -0x41,iVar2 + 6,0x80383838,0);
  uVar6 = ((*(int *)(param_1 + 0x20) - iVar7) + -0x4a) * g_GameSettings.MusicVolume;
  uVar3 = hud::GetIconFrameTex(0xe99e,9);
  hud::DrawSprite2(uVar3,iVar8,iVar2 + -6,
                   iVar7 + ((int)uVar6 >> 10) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3ff) != 0) + 8,
                   iVar2 + 5,0,0x13,0x35);
  stub::STUB_0006d708();
  return 2;
}



//==== 001443d4  ns=pause  size=0xa4
// sig: undefined SkillPoints_OnEnter(void)
// callers(0): 
// callees(0): 
// strings: 00a1000c: 'None'

/* [p2_pause] OnEnter of skill points list widget
   [p2_pause] OnEnter of skill points list widget
   [p2_pause] OnEnter of skill points list widget */

void pause::SkillPoints_OnEnter(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < help::g_HelpLogCount) {
    iVar3 = 0;
    do {
      iVar2 = help::g_HelpLogCount;
      bVar1 = CHAR_ARRAY_00a1000c[(help::g_HelpLogCount - iVar4) + 0x49f];
      iVar4 = iVar4 + 1;
      *(undefined2 *)((int)&PTR_Elf64_Ehdr_0072b332 + iVar3) = 1;
      *(undefined2 *)((int)&DAT_0072b330 + iVar3) = *(undefined2 *)(&DAT_007208ce + (uint)bVar1 * 4)
      ;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < iVar2);
  }
  (&DAT_0072b330)[help::g_HelpLogCount * 6] = 0;
  return;
}



//==== 00144478  ns=pause  size=0x8
// sig: undefined SkillPoints_OnExit(void)
// callers(0): 
// callees(0): 

/* [p2_pause] returns 0
   [p2_pause] returns 0
   [p2_pause] returns 0 */

undefined8 pause::SkillPoints_OnExit(void)

{
  return 0;
}



//==== 00144480  ns=pause  size=0xc8
// sig: undefined MusicWidget_OnEnter(void)
// callers(0): 
// callees(1): 0013af68 pause::Menu_InitStreamBuffers

/* [p2_pause] inits stream buffers, flags slots
   [p2_pause] inits stream buffers, flags slots
   [p2_pause] inits stream buffers, flags slots */

void pause::MusicWidget_OnEnter(int param_1)

{
  int iVar1;
  int iVar2;
  
  Menu_InitStreamBuffers(1);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  do {
    if ((*(int *)((int)&DAT_00a53098 + iVar1) != 0) &&
       (*(uint *)((int)&DAT_00a53098 + iVar1) < DAT_00a52cb8)) {
      *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) | 2;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 8;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (Music == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  return;
}



//==== 00144548  ns=pause  size=0x50
// sig: undefined MusicWidget_OnExit(void)
// callers(0): 
// callees(2): 0011d9e0 music::music_StopLoad; 0013af68 pause::Menu_InitStreamBuffers

/* [p2_pause] stops music, reinit buffers
   [p2_pause] stops music, reinit buffers
   [p2_pause] stops music, reinit buffers */

undefined8 pause::MusicWidget_OnExit(int param_1)

{
  if ((Music != 0) && (*(int *)(param_1 + 0x50) == 1)) {
    music::music_StopLoad();
  }
  Menu_InitStreamBuffers(1);
  return 0;
}



//==== 00144598  ns=pause  size=0x8c
// sig: undefined MusicWidget_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] state machine on Music flag
   [p2_pause] state machine on Music flag
   [p2_pause] state machine on Music flag */

undefined8 pause::MusicWidget_Update(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 < 2) && (-1 < iVar1)) {
    if (iVar1 < 1) {
      if (Music == 0) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    else if (Music == 0) {
      *(undefined4 *)(param_1 + 0x50) = 2;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffb;
    }
  }
  return 0;
}



//==== 00144638  ns=pause  size=0x874
// sig: undefined DrawSkillPointsFrame(void)
// callers(0): 
// callees(14): 000685c4 draw::GetEffectTex; 000690e0 draw::FontPrintOptJapanese; 00069db8 draw::FontPrintOptWestern; 0006c5dc draw::EnableFontColors; 0006ccb4 draw::DisableFontColors; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend
// strings: 0096c08c: 'None'

undefined8 pause::DrawSkillPointsFrame(undefined **param_1)

{
  char cVar1;
  short sVar2;
  undefined **ppuVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar7;
  undefined8 uVar6;
  undefined *puVar8;
  short sVar9;
  longlong lVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 uVar13;
  int iVar14;
  short sVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 local_b0 [10];
  short local_a6;
  
  ppuVar3 = *(undefined ***)(g_currentMenuPage + 0x40);
  if (g_JapaneseMode) {
    iVar11 = 0xe;
    puVar16 = &JapaneseGlyphs;
  }
  else {
    iVar11 = 0xc;
    puVar16 = &MediumWesternGlyphs;
  }
  uVar13 = 1;
  if (((uint)param_1[0xc] & 4) != 0) {
    if (g_JapaneseMode) {
      iVar11 = 0xe;
      puVar16 = &JapaneseGlyphs;
    }
    else {
      iVar11 = 0xe;
      puVar16 = &draw::LargeWesternGlyphs;
      uVar13 = 3;
    }
  }
  if (((uint)param_1[0xc] & 8) != 0) {
    if (g_JapaneseMode) {
      iVar11 = 0xe;
      puVar16 = &JapaneseGlyphs;
      uVar13 = 1;
    }
    else {
      iVar11 = 10;
      puVar16 = &Glyphs;
      uVar13 = 2;
    }
  }
  uVar5 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar5);
  uVar5 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar5);
  stub::STUB_0006d704(0);
  iVar14 = 0;
  if (*(short *)param_1[0xd] != 0) {
    iVar7 = 0;
    iVar14 = 0;
    do {
      iVar7 = iVar7 + 0xc;
      iVar14 = iVar14 + 1;
    } while (*(short *)(param_1[0xd] + iVar7) != 0);
  }
  if (((uint)param_1[0xc] & 0x10) == 0) {
    sVar15 = (short)((int)param_1[9] / (iVar14 + 1));
  }
  else {
    sVar15 = (short)iVar11 + 3;
  }
  sVar9 = (short)param_1[9] + -4;
  local_a6 = (sVar15 - (short)(iVar11 >> 1)) - (short)param_1[0x11];
  uVar13 = draw::GetEffectTex(uVar13);
  puVar12 = (undefined *)0x0;
  sVar2 = *(short *)param_1[0xd];
  while (sVar2 != 0) {
    bVar4 = false;
    if ((ppuVar3 == param_1) && (param_1[0x10] == puVar12)) {
      bVar4 = true;
    }
    iVar11 = (int)puVar12 * 0xc;
    uVar5 = 0xffffffff80ffa888;
    if (((uint)param_1[0xc] & 2) == 0) {
      if (bVar4) {
        uVar5 = 0xffffffff80006060;
        if (*(short *)(param_1[0xd] + iVar11 + 2) != 0) {
          uVar5 = 0xffffffff8020ffff;
        }
      }
      else {
        uVar5 = 0xffffffff80303030;
        if (*(short *)(param_1[0xd] + iVar11 + 2) != 0) {
          uVar5 = 0xffffffff80ffa888;
        }
      }
    }
    if ((((uint)param_1[0xc] & 0x10000) == 0 && bVar4) && (local_a6 < 4)) {
      param_1[0x11] = param_1[0x11] + -4;
    }
    uVar6 = help::help_msg_string_by_index((int)*(short *)(param_1[0xd] + iVar11));
    uVar17 = 0x3ff0000000000000;
    if ((g_JapaneseMode == false) ||
       ((*(short *)(param_1[0xd] + iVar11) != 0x4ec7 &&
        (*(short *)(param_1[0xd] + iVar11) != 0x4ebd)))) {
      uVar18 = uVar17;
      if ((param_1 == &PTR_PTR_0072ba44) && ((1 < g_Language && (g_Language < 6)))) {
        uVar18 = 0x3feb333340000000;
      }
    }
    else {
      uVar18 = 0x3fecccccc0000000;
    }
    if (((*(short *)(param_1[0xd] + iVar11) == 0x4ec3) ||
        (*(short *)(param_1[0xd] + iVar11) == 0x4fe8)) && (g_Language == 2)) {
      uVar18 = 0x3feb333340000000;
    }
    if ((*(short *)(param_1[0xd] + iVar11) == 0x4fe8) && (g_Language == 2)) {
      uVar18 = 0x3fe99999a0000000;
    }
    if (bVar4) {
      draw::DisableFontColors();
    }
    if (g_JapaneseMode == false) {
      draw::FontPrintOptWestern(uVar18,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
    }
    else {
      draw::FontPrintOptJapanese(uVar18,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
    }
    if (bVar4) {
      draw::EnableFontColors();
    }
    if (((uint)param_1[0xc] & 0x200) != 0) {
      lVar10 = (longlong)local_a6;
      cVar1 = g_SkillPoints[(int)puVar12];
      hud::DrawFlatOverlay(10,lVar10 + 4,0x14,lVar10 + 0xe,0x80ffa888,0);
      hud::DrawFlatOverlay(0xb,lVar10 + 5,0x13,lVar10 + 0xd,DAT_00729840,0);
      if (cVar1 != '\0') {
        uVar6 = hud::GetIconFrameTex(0xe99e,1);
        hud::DrawSprite(uVar6,2,lVar10 + -9,0x1e,0x1e,0x80);
      }
    }
    iVar14 = g_Language;
    if (((uint)param_1[0xc] & 0x800) != 0) {
      lVar10 = (longlong)local_a6;
      iVar7 = *(int *)(param_1[0xd] + iVar11 + 4);
      hud::DrawFlatOverlay(10,lVar10 + 4,0x14,lVar10 + 0xe,0x80ffa888,0);
      hud::DrawFlatOverlay(0xb,lVar10 + 5,0x13,lVar10 + 0xd,DAT_00729840,0);
      if (iVar14 == iVar7) {
        uVar6 = hud::GetIconFrameTex(0xe99e,1);
        hud::DrawSprite(uVar6,2,lVar10 + -9,0x1e,0x1e,0x80);
      }
    }
    if (*(short *)(param_1[0xd] + iVar11 + 8) != 0) {
      uVar6 = help::help_msg_string_by_index((int)*(short *)(param_1[0xd] + iVar11 + 8));
      if (g_JapaneseMode == false) {
        draw::FontPrintOptWestern(uVar17,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
      }
      else {
        draw::FontPrintOptJapanese(uVar17,local_b0,uVar5,uVar6,0xffffffffffffffff,uVar13,puVar16);
      }
      local_a6 = local_a6 + sVar15;
    }
    local_a6 = local_a6 + 8;
    if ((((uint)param_1[0xc] & 0x10000) == 0 && bVar4) && ((int)sVar9 < (int)local_a6)) {
      if (((uint)param_1[0xc] & 0x8000) == 0) {
        puVar8 = param_1[0x11] + 4;
      }
      else {
        puVar8 = param_1[0x11] + ((int)local_a6 - (int)sVar9);
      }
      param_1[0x11] = puVar8;
    }
    puVar12 = puVar12 + 1;
    sVar2 = *(short *)(param_1[0xd] + (int)puVar12 * 0xc);
  }
  stub::STUB_0006d708();
  if (((uint)param_1[0xc] & 0x8000) == 0) {
    uVar13 = 2;
  }
  else {
    uVar13 = 1;
    param_1[0xc] = (undefined *)((uint)param_1[0xc] ^ 0x8000);
  }
  return uVar13;
}



//==== 00144ec0  ns=pause  size=0x5cc
// sig: undefined MenuButton_Draw(void)
// callers(0): 
// callees(9): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 000ca0f4 hud::Hud_DrawTexQuad_v2; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98; 005c4988 FUN_005c4988

/* [p2_pause] button widget draw with icon frames
   [p2_pause] button widget draw with icon frames
   [p2_pause] button widget draw with icon frames */

undefined8 pause::MenuButton_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined uVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  puVar16 = *(undefined2 **)(param_1 + 0x48);
  iVar14 = *(int *)(*(int *)(param_1 + 0x14) + 0x78);
  iVar8 = *(int *)(g_currentMenuPage + 0x40);
  uVar11 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar11);
  uVar11 = FUN_00502f98(1,5,0,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar11);
  stub::STUB_0006d704(0);
  iVar15 = *(int *)(param_1 + 0x44);
  if (iVar15 < 2) {
    fVar6 = 0.0;
    dVar21 = (double)((*(float *)(iVar14 + 0x40) - DAT_00730ad8) * 0.5);
  }
  else {
    dVar21 = (double)*(float *)(param_1 + 0x34);
    fVar6 = DAT_00730ad8 +
            ((*(float *)(iVar14 + 0x40) - (float)(dVar21 * 2.0)) -
            DAT_00730ad8 * (float)(longlong)iVar15) / (float)(longlong)(iVar15 + -1);
  }
  dVar20 = (double)fVar6;
  if ((*(uint *)(param_1 + 0x30) & 2) == 0) {
    iVar15 = *(int *)(param_1 + 0x40);
    if (iVar15 < 2) {
      dVar19 = 0.0;
      dVar17 = (double)((*(float *)(iVar14 + 0x44) - DAT_00730adc) * 0.5);
    }
    else {
      dVar17 = (double)*(float *)(param_1 + 0x38);
      dVar19 = (double)(DAT_00730adc +
                       ((*(float *)(iVar14 + 0x44) - (float)(dVar17 * 2.0)) -
                       DAT_00730adc * (float)(longlong)iVar15) / (float)(longlong)(iVar15 + -1));
    }
  }
  else {
    dVar17 = (double)*(float *)(param_1 + 0x38);
    dVar19 = (double)(DAT_00730adc + 0.15);
  }
  iVar15 = *(int *)(param_1 + 0x24);
  if (iVar15 < *(int *)(param_1 + 0x20)) {
    iVar15 = *(int *)(param_1 + 0x20);
  }
  fVar6 = *(float *)(iVar14 + 0x44);
  if (fVar6 < *(float *)(iVar14 + 0x40)) {
    fVar6 = *(float *)(iVar14 + 0x40);
  }
  iVar14 = 0;
  dVar18 = (double)((float)(longlong)iVar15 / fVar6);
  dVar3 = (double)DAT_00730ad8 * dVar18;
  dVar4 = (double)DAT_00730adc * dVar18;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      iVar15 = 0;
      dVar22 = dVar21;
      if (0 < *(int *)(param_1 + 0x44)) {
        do {
          iVar1 = (int)(dVar21 * dVar18);
          iVar2 = (int)(dVar17 * dVar18);
          iVar9 = (int)dVar3 + iVar1;
          iVar10 = (int)dVar4 + iVar2;
          if ((iVar8 == param_1) &&
             (*(int *)(param_1 + 0x3c) == ((int)puVar16 - *(int *)(param_1 + 0x48)) / 10)) {
            iVar12 = FUN_005c4988(((ulonglong)DAT_0159c330 & 0x3f) - 0x20);
            hud::DrawFlatOverlay
                      (iVar1 + -3,iVar2 + -3,iVar9 + 3,iVar10 + 3,
                       (iVar12 + 0x40) * 0x10202 | 0x80000000,1);
            hud::DrawFlatOverlay(iVar1 + -2,iVar2 + -2,iVar9 + 2,iVar10 + 2,DAT_00729840,1);
          }
          if (puVar16[2] == 0) {
            uVar5 = (&UnlockableItems.field0_0x0)[(short)puVar16[3]];
          }
          else {
            uVar5 = (&MiscLevelFlags.Zoomerator)[(short)puVar16[3]];
          }
          if (uVar5 != '\0') {
            lVar13 = 0;
            if (puVar16[2] == 0) {
              sVar7 = puVar16[3];
              lVar13 = 0;
              if (((&DAT_00a52be0)[(&DAT_00721008)[sVar7 * 0x13]] == (int)sVar7) &&
                 ((*(uint *)(param_1 + 0x30) & 0x20) == 0)) {
                lVar13 = 1;
              }
              if (((int)lVar13 == 0) && ((&g_goldWeaponsArray.field0_0x0)[sVar7] != '\0')) {
                lVar13 = 4;
              }
              if ((DAT_00a52ce0 != 0) && ((*(uint *)(param_1 + 0x30) & 8) != 0)) {
                lVar13 = 2;
              }
              if ((DAT_00a52ce4 != 0) && ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
                lVar13 = 2;
              }
            }
            uVar11 = hud::GetIconFrameTex(*puVar16,(short)puVar16[1] + lVar13);
            hud::Hud_DrawTexQuad_v2(uVar11,iVar1,iVar2,(int)dVar3,(int)dVar4,0x80);
          }
          iVar15 = iVar15 + 1;
          puVar16 = puVar16 + 5;
          dVar21 = (double)(float)(dVar21 + dVar20);
        } while (iVar15 < *(int *)(param_1 + 0x44));
      }
      iVar14 = iVar14 + 1;
      dVar17 = (double)(float)(dVar17 + dVar19);
      dVar21 = dVar22;
    } while (iVar14 < *(int *)(param_1 + 0x40));
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014548c  ns=pause  size=0x34
// sig: undefined ???_Pause_SetEntryByHeroType(void)
// callers(0): 
// callees(0): 

undefined8 pause::____Pause_SetEntryByHeroType(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 3;
  if (g_heroType == '\x01') {
    uVar1 = 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 2) = uVar1;
  return 0;
}



//==== 001454d0  ns=pause  size=0x2e0
// sig: undefined MenuHero_Draw(void)
// callers(0): 
// callees(1): 000f1934 mobyfunc::MB_AddToDrawList

/* [p2_pause] draw for MenuHero widget
   [p2_pause] draw for MenuHero widget
   [p2_pause] draw for MenuHero widget */

undefined8 pause::MenuHero_Draw(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  double dVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = param_1;
  do {
    puVar8 = (uint *)(param_1 + 0x44 + iVar7);
    if ((((*puVar8 != 0) && (*(char *)(iVar6 + 0xa4) == '\0')) &&
        (*(int *)((int)&DAT_00730ae8 + iVar7) != 0)) &&
       (((iVar5 != 7 || (*(short *)(*puVar8 + 0xa6) != 0x4a)) ||
        (*(char *)(*(int *)(param_1 + 0x44) + 0x52) == *(char *)(*(int *)(param_1 + 0x44) + 0x53))))
       ) {
      if (iVar5 < 7) {
        if (iVar5 < 4) {
          if (0 < iVar5) {
LAB_001455a0:
            iVar2 = *(int *)(param_1 + 0x44);
            if (((*(char *)(iVar2 + 0x52) == -0x67) && (*(char *)(iVar2 + 0x53) == -0x67)) &&
               ((0x4c < *(byte *)(iVar2 + 0x50) && (*(byte *)(iVar2 + 0x50) < 0x92))))
            goto LAB_00145770;
          }
        }
        else if (4 < iVar5) goto LAB_001455a0;
      }
      else if (9 < iVar5 && iVar5 < 0xd) goto LAB_001455a0;
      dVar9 = (double)*(float *)(*puVar8 + 0x2c);
      if ((iVar5 == 7) && (*(short *)(*puVar8 + 0xa6) == 0x27a)) {
        bVar1 = *(byte *)(*(int *)(param_1 + 0x44) + 0x50);
        if ((bVar1 < 0x51) || (0x92 < bVar1)) goto LAB_00145770;
        auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                 (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x2c,
                           (ulonglong)*puVar8);
        *(undefined4 *)(*puVar8 + 0x2c & 0xfffffffc) = uVar3;
      }
      mobyfunc::MB_AddToDrawList(*puVar8,1);
      *(float *)(*puVar8 + 0x2c) = (float)dVar9;
    }
LAB_00145770:
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 4;
    if (0x17 < iVar5) {
      return 4;
    }
  } while( true );
}



//==== 001457b0  ns=stub  size=0x8
// sig: undefined STUB_001457b0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_001457b0(void)

{
  return 0;
}



//==== 001457b8  ns=pause  size=0x24
// sig: undefined ItemView_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] resets view rot (pi) and mobys
   [p2_pause] resets view rot (pi) and mobys
   [p2_pause] resets view rot (pi) and mobys */

undefined8 pause::ItemView_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40490fdb;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 0;
}



//==== 001457dc  ns=pause  size=0x9c
// sig: undefined ItemView_OnExit(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* [p2_pause] deletes item view mobys
   [p2_pause] deletes item view mobys
   [p2_pause] deletes item view mobys */

undefined8 pause::ItemView_OnExit(int param_1)

{
  longlong lVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = *(MobyInstance **)(param_1 + 0x44);
  if (pMVar2 != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(pMVar2);
    lVar1 = (longlong)worldUpdateTime;
    pMVar2->color = (int)((ulonglong)lVar1 >> 0x20);
    pMVar2->light = (int)lVar1;
    pMVar2 = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x44) = pMVar2;
  pMVar2 = *(MobyInstance **)(param_1 + 0x48);
  if (pMVar2 != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(pMVar2);
    lVar1 = (longlong)worldUpdateTime;
    pMVar2->color = (int)((ulonglong)lVar1 >> 0x20);
    pMVar2->light = (int)lVar1;
    pMVar2 = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x48) = pMVar2;
  return 0;
}



//==== 00145880  ns=pause  size=0x30c
// sig: undefined ItemView_Update(void)
// callers(0): 
// callees(4): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform

/* [p2_pause] creates item moby by oClass
   [p2_pause] creates item moby by oClass
   [p2_pause] creates item moby by oClass */

undefined8 pause::ItemView_Update(int param_1)

{
  MOBY_OCLASSES oClass;
  int *piVar1;
  int iVar2;
  MobyInstance *moby;
  float fVar3;
  MOBY_OCLASSES MVar6;
  MobyInstance *pMVar5;
  longlong lVar4;
  
  MVar6 = ~RATCHET;
  if (*(int *)(param_1 + 0x44) != 0) {
    MVar6 = *(MOBY_OCLASSES *)(*(int *)(param_1 + 0x44) + 0xa6);
  }
  oClass = *(MOBY_OCLASSES *)
            (&DAT_0072103a +
            *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                      *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10) * 0x4c);
  if ((oClass == ~RATCHET) || (MVar6 != ~RATCHET)) {
    if (oClass == ~RATCHET) {
      pMVar5 = *(MobyInstance **)(param_1 + 0x44);
      if (pMVar5 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar5);
        lVar4 = (longlong)worldUpdateTime;
        pMVar5->color = (int)((ulonglong)lVar4 >> 0x20);
        pMVar5->light = (int)lVar4;
        pMVar5 = (MobyInstance *)0x0;
      }
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
    }
    else if (MVar6 != oClass) {
      if ((&MobyClassLookup)[(short)oClass] == -1) {
        pMVar5 = (MobyInstance *)0x0;
      }
      else {
        pMVar5 = mobyfunc::CreateMoby(oClass);
        if (pMVar5 != (MobyInstance *)0x0) {
          pMVar5->updateDistance = -1;
          pMVar5->drawDistance = 0xff;
          pMVar5->enabled = '\x01';
          pMVar5->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar5);
          mobyutil::MB_SetLights(pMVar5,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar5 != (MobyInstance *)0x0) {
        pMVar5->modeBits = NONE;
        iVar2 = *(int *)(param_1 + 0x44);
        (pMVar5->pos).x = *(f32 *)(iVar2 + 0x10);
        (pMVar5->pos).y = *(f32 *)(iVar2 + 0x14);
        (pMVar5->pos).z = *(f32 *)(iVar2 + 0x18);
        (pMVar5->pos).w = *(f32 *)(iVar2 + 0x1c);
        (pMVar5->rotation).x = *(f32 *)(iVar2 + 0x40);
        (pMVar5->rotation).y = *(f32 *)(iVar2 + 0x44);
        piVar1 = (int *)pMVar5->pVar;
        (pMVar5->rotation).z = *(f32 *)(iVar2 + 0x48);
        (pMVar5->rotation).w = *(f32 *)(iVar2 + 0x4c);
        pMVar5->pUpdate = *(void **)(iVar2 + 0x74);
        *piVar1 = param_1;
      }
      moby = *(MobyInstance **)(param_1 + 0x44);
      if (moby != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(moby);
        lVar4 = (longlong)worldUpdateTime;
        moby->color = (int)((ulonglong)lVar4 >> 0x20);
        moby->light = (int)lVar4;
      }
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
    }
  }
  else {
    if ((&MobyClassLookup)[(short)oClass] == -1) {
      pMVar5 = (MobyInstance *)0x0;
    }
    else {
      pMVar5 = mobyfunc::CreateMoby(oClass);
      if (pMVar5 != (MobyInstance *)0x0) {
        pMVar5->updateDistance = -1;
        pMVar5->drawDistance = 0xff;
        pMVar5->enabled = '\x01';
        pMVar5->state = '\0';
        mobyfunc::UpdateMobyTransform(pMVar5);
        mobyutil::MB_SetLights(pMVar5,0x202020,0xe,0xe,0);
      }
    }
    if (pMVar5 != (MobyInstance *)0x0) {
      *(MobyInstance **)(param_1 + 0x44) = pMVar5;
      pMVar5->modeBits = NONE;
      piVar1 = (int *)pMVar5->pVar;
      (pMVar5->pos).x = GameCamera.posX + 6.0;
      (pMVar5->pos).y = GameCamera.posY;
      fVar3 = GameCamera.posZ;
      (pMVar5->rotation).z = 3.1415927;
      pMVar5->pUpdate = &PTR_ItemView_SpinMobyUpdate_007076f0;
      (pMVar5->pos).z = fVar3 - 0.3;
      *piVar1 = param_1;
    }
  }
  return 0;
}



//==== 00145b8c  ns=pause  size=0x14c
// sig: undefined ItemView_Draw(void)
// callers(0): 
// callees(5): 0006a510 draw::FontPrintMediumOpt; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 000f1934 mobyfunc::MB_AddToDrawList

/* [p2_pause] prints STR_USES_NO_AMMO etc
   [p2_pause] prints STR_USES_NO_AMMO etc
   [p2_pause] prints STR_USES_NO_AMMO etc */

undefined8 pause::ItemView_Draw(int param_1)

{
  undefined8 uVar1;
  undefined1 local_30 [32];
  
  if ((&UnlockableItems.field0_0x0)
      [*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10)] == '\0') {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    stub::STUB_0006d704(0);
    uVar1 = help::help_msg_string_by_index(STR_USES_NO_AMMO);
    draw::FontPrintMediumOpt(local_30,0x80ffa888,uVar1,0xffffffffffffffff);
    stub::STUB_0006d708();
    uVar1 = 2;
  }
  else {
    mobyfunc::MB_AddToDrawList(*(int *)(param_1 + 0x44),1);
    if (*(int *)(param_1 + 0x48) != 0) {
      mobyfunc::MB_AddToDrawList(*(int *)(param_1 + 0x48),1);
    }
    uVar1 = 8;
  }
  return uVar1;
}



//==== 00145ce0  ns=pause  size=0x44
// sig: undefined ItemView_SpinMobyUpdate(void)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* [p2_pause] moby callback: rotates
   [p2_pause] moby callback: rotates
   [p2_pause] moby callback: rotates */

void pause::ItemView_SpinMobyUpdate(int param_1)

{
  double dVar1;
  
  dVar1 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),0.01);
  *(float *)(param_1 + 0x48) = (float)dVar1;
  return;
}



//==== 00145d28  ns=pause  size=0x648
// sig: undefined WeaponView_Update(void)
// callers(0): 
// callees(9): 00086814 hero::Hero_KillGadget; 0008d7e8 hero::Hero_SetLightsFromMoby; 000e0854 loaders::LoadGadgetModel; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 00502578 fastfunc::FastWrapRot

/* [p2_pause] loads gadget model, creates mobys
   [p2_pause] loads gadget model, creates mobys
   [p2_pause] loads gadget model, creates mobys */

undefined8 pause::WeaponView_Update(int param_1)

{
  f32 fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  MobyInstance *pMVar11;
  longlong lVar10;
  int iVar12;
  int oClass;
  double dVar13;
  
  iVar12 = -1;
  sVar3 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar12 = (int)*(short *)(*(int *)(param_1 + 0x44) + 0xa6);
  }
  iVar7 = (int)sVar3;
  oClass = (&DAT_00721010)[iVar7 * 0x13];
  if (sVar3 == 0x18) {
    oClass = 0x1df;
  }
  dVar13 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x38),0.01);
  iVar4 = (&DAT_00721008)[iVar7 * 0x13];
  bVar8 = false;
  *(float *)(param_1 + 0x38) = (float)dVar13;
  piVar6 = g_viewMtxPtr;
  iVar7 = (&DAT_00721008)[iVar7 * 0x13];
  if (((iVar4 != 2) && (iVar7 != 3)) && (iVar7 != 1)) {
    bVar8 = true;
  }
  if (sVar3 == 0x18) {
    bVar8 = false;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar5 = *(uint *)(param_1 + 0x30);
  if (iVar4 < 2) {
    if (-1 < iVar4) {
      if (iVar4 < 1) {
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      else if (oClass != -1) {
        *(undefined4 *)(param_1 + 0x34) = 2;
      }
    }
  }
  else if (iVar4 < 3) {
    if (*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) {
      if (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0) {
        (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
      }
      (*(code *)**(undefined4 **)(*piVar6 + 0x18))(piVar6);
      piVar6[0x6a3] = piVar6[0x6a3] + 2;
    }
    if (oClass == -1) {
      *(undefined4 *)(param_1 + 0x34) = 1;
    }
    else {
      if (bVar8) {
        if ((g_CurrentWeapon != 0) && (oClass != g_CurrentWeapon)) {
          hero::Hero_KillGadget(0,0);
        }
        if ((oClass != DAT_00a52cc8) ||
           (MobyClasses[(byte)(&MobyClassLookup)[oClass]] == (MobyClass *)0x0)) {
          loaders::LoadGadgetModel(oClass,(uint)LZCOUNT(DAT_00a52cc4) >> 5);
          DAT_00a52cf0 = DAT_00a4daec;
          DAT_00a52ccc = oClass;
          DAT_00a52cec = oClass;
          MobyClasses[(byte)(&MobyClassLookup)[oClass]]->sound_cnt = '\0';
        }
      }
      if ((&MobyClassLookup)[oClass] == -1) {
        pMVar11 = (MobyInstance *)0x0;
      }
      else {
        pMVar11 = mobyfunc::CreateMoby((MOBY_OCLASSES)oClass);
        if (pMVar11 != (MobyInstance *)0x0) {
          pMVar11->updateDistance = -1;
          pMVar11->drawDistance = 0xff;
          pMVar11->enabled = '\x01';
          pMVar11->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar11);
          mobyutil::MB_SetLights(pMVar11,0x202020,0xe,0xe,0);
        }
      }
      lVar10 = 1;
      if (sVar3 == 2) {
        lVar10 = 6;
      }
      if (pMVar11 != (MobyInstance *)0x0) {
        if ((bVar8) && ((&g_goldWeaponsArray.field0_0x0)[sVar3] != '\0')) {
          hero::Hero_SetLightsFromMoby(pMVar11,*(undefined4 *)(param_1 + 0x14));
        }
        *(MobyInstance **)(param_1 + 0x44) = pMVar11;
        pMVar11->modeBits = NONE;
        iVar12 = (int)((longlong)sVar3 << 5);
        if ((uVar5 & 1) == 0) {
          fVar2 = *(float *)(&DAT_0073818c + iVar12);
        }
        else {
          fVar2 = *(float *)(&DAT_00738188 + iVar12);
        }
        piVar6 = (int *)pMVar11->pVar;
        (pMVar11->pos).x = GameCamera.posX + fVar2;
        (pMVar11->pos).y = GameCamera.posY + *(float *)(&DAT_00738190 + iVar12);
        (pMVar11->pos).z = GameCamera.posZ + *(float *)(&DAT_00738194 + iVar12);
        (pMVar11->rotation).x = *(f32 *)(&DAT_00738198 + iVar12);
        fVar1 = *(f32 *)(&DAT_0073819c + iVar12);
        (pMVar11->rotation).z = 3.1415927;
        (pMVar11->rotation).y = fVar1;
        pMVar11->pUpdate = &PTR_WeaponView_MobyUpdate_00707708;
        *piVar6 = param_1;
        piVar6[3] = (int)sVar3;
        lVar9 = lVar10;
        if ((int)(pMVar11->pClass->seq_cnt - 1) <= (int)lVar10) {
          lVar9 = (ulonglong)pMVar11->pClass->seq_cnt - 1;
        }
        mobyutil::MB_SetAnimationNoBlend(pMVar11,lVar9,0);
      }
      if (iVar7 == 3 && pMVar11 != (MobyInstance *)0x0) {
        if ((&MobyClassLookup)[g_BackpackMobyClass] == -1) {
          pMVar11 = (MobyInstance *)0x0;
        }
        else {
          pMVar11 = mobyfunc::CreateMoby((MOBY_OCLASSES)g_BackpackMobyClass);
          if (pMVar11 != (MobyInstance *)0x0) {
            pMVar11->updateDistance = -1;
            pMVar11->drawDistance = 0xff;
            pMVar11->enabled = '\x01';
            pMVar11->state = '\0';
            mobyfunc::UpdateMobyTransform(pMVar11);
            mobyutil::MB_SetLights(pMVar11,0x202020,0xe,0xe,0);
          }
        }
        if (pMVar11 != (MobyInstance *)0x0) {
          pMVar11->modeBits = NONE;
          iVar12 = *(int *)(param_1 + 0x44);
          (pMVar11->pos).x = *(f32 *)(iVar12 + 0x10);
          (pMVar11->pos).y = *(f32 *)(iVar12 + 0x14);
          (pMVar11->pos).z = *(f32 *)(iVar12 + 0x18);
          (pMVar11->pos).w = *(f32 *)(iVar12 + 0x1c);
          (pMVar11->rotation).x = *(f32 *)(iVar12 + 0x40);
          (pMVar11->rotation).y = *(f32 *)(iVar12 + 0x44);
          (pMVar11->rotation).z = *(f32 *)(iVar12 + 0x48);
          (pMVar11->rotation).w = *(f32 *)(iVar12 + 0x4c);
          *(MobyInstance **)(param_1 + 0x48) = pMVar11;
          piVar6 = (int *)pMVar11->pVar;
          pMVar11->pUpdate = &PTR_WeaponView_MobyUpdate_00707708;
          *piVar6 = param_1;
          piVar6[3] = (int)sVar3;
          if ((int)(pMVar11->pClass->seq_cnt - 1) <= (int)lVar10) {
            lVar10 = (ulonglong)pMVar11->pClass->seq_cnt - 1;
          }
          mobyutil::MB_SetAnimationNoBlend(pMVar11,lVar10,0);
        }
      }
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
  }
  else if ((iVar4 < 4) && (iVar12 != oClass)) {
    pMVar11 = *(MobyInstance **)(param_1 + 0x44);
    if (pMVar11 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar11);
      lVar10 = (longlong)worldUpdateTime;
      pMVar11->color = (int)((ulonglong)lVar10 >> 0x20);
      pMVar11->light = (int)lVar10;
      pMVar11 = (MobyInstance *)0x0;
    }
    *(MobyInstance **)(param_1 + 0x44) = pMVar11;
    pMVar11 = *(MobyInstance **)(param_1 + 0x48);
    if (pMVar11 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar11);
      lVar10 = (longlong)worldUpdateTime;
      pMVar11->color = (int)((ulonglong)lVar10 >> 0x20);
      pMVar11->light = (int)lVar10;
      pMVar11 = (MobyInstance *)0x0;
    }
    *(MobyInstance **)(param_1 + 0x48) = pMVar11;
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  return 0;
}



//==== 00146370  ns=pause  size=0xb4
// sig: undefined WeaponView_Draw(void)
// callers(0): 
// callees(1): 000f1934 mobyfunc::MB_AddToDrawList

/* [p2_pause] draws weapon mobys if unlocked
   [p2_pause] draws weapon mobys if unlocked
   [p2_pause] draws weapon mobys if unlocked */

undefined8 pause::WeaponView_Draw(int param_1)

{
  undefined8 uVar1;
  
  if ((&UnlockableItems.field0_0x0)
      [*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                 *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10)] == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x44) != 0) {
      mobyfunc::MB_AddToDrawList(*(int *)(param_1 + 0x44),1);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      mobyfunc::MB_AddToDrawList(*(int *)(param_1 + 0x48),1);
    }
    uVar1 = 8;
  }
  return uVar1;
}



//==== 00146440  ns=pause  size=0x1b8
// sig: undefined WeaponView_MobyUpdate(void)
// callers(0): 
// callees(0): 

/* [p2_pause] moby callback set by WeaponView_Update
   [p2_pause] moby callback set by WeaponView_Update
   [p2_pause] moby callback set by WeaponView_Update */

void pause::WeaponView_MobyUpdate(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar5 = **(int **)(param_1 + 0x78);
  iVar7 = (*(int **)(param_1 + 0x78))[3] * 0x20;
  uVar6 = *(uint *)(iVar5 + 0x30);
  fVar1 = *(float *)(iVar5 + 0x38);
  *(float *)(param_1 + 0x48) = fVar1;
  if ((uVar6 & 1) == 0) {
    fVar4 = *(float *)(&DAT_0073818c + iVar7);
  }
  else {
    fVar4 = *(float *)(&DAT_00738188 + iVar7);
  }
  fVar4 = GameCamera.posX + fVar4;
  *(float *)(param_1 + 0x10) = fVar4;
  fVar12 = GameCamera.posY + *(float *)(&DAT_00738190 + iVar7);
  *(float *)(param_1 + 0x14) = fVar12;
  *(float *)(param_1 + 0x18) = GameCamera.posZ + *(float *)(&DAT_00738194 + iVar7);
  fVar8 = fVar1 + 1.5707963;
  fVar2 = *(float *)(&DAT_007381a4 + iVar7);
  fVar3 = *(float *)(&DAT_007381a0 + iVar7);
  fVar9 = fVar8;
  if (3.1415925 - fVar8 <= fVar8) {
    fVar9 = 3.1415925 - fVar8;
  }
  if (fVar9 <= -3.1415925 - fVar8) {
    fVar9 = -3.1415925 - fVar8;
  }
  fVar8 = fVar9 * fVar9;
  fVar10 = fVar8 * fVar8 * fVar9;
  fVar11 = fVar8 * fVar10;
  fVar9 = fVar9 + fVar8 * fVar9 * -0.16666657 + fVar10 * 0.0083330255 + fVar11 * -0.0001980741 +
          fVar8 * fVar11 * 2.601887e-06;
  fVar8 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar8 = 3.1415925 - fVar1;
  }
  if (fVar8 <= -3.1415925 - fVar1) {
    fVar8 = -3.1415925 - fVar1;
  }
  fVar11 = fVar8 * fVar8;
  fVar1 = fVar11 * fVar11 * fVar8;
  fVar10 = fVar11 * fVar1;
  fVar1 = fVar8 + fVar11 * fVar8 * -0.16666657 + fVar1 * 0.0083330255 + fVar10 * -0.0001980741 +
          fVar11 * fVar10 * 2.601887e-06;
  *(float *)(param_1 + 0x10) = fVar1 * -fVar2 + fVar9 * fVar3 + fVar4;
  *(float *)(param_1 + 0x14) = fVar12 + (fVar1 * fVar3 - fVar9 * -fVar2);
  return;
}



//==== 001465f8  ns=pause  size=0x108
// sig: undefined PlanetInfo_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] input handler restoring g_SelectedLevel
   [p2_pause] input handler restoring g_SelectedLevel
   [p2_pause] input handler restoring g_SelectedLevel */

undefined8 pause::PlanetInfo_Update(int param_1)

{
  if ((pad_pressedButton & 0xd00) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
      g_SelectedLevel = Level;
    }
    return 0xffffffffffffffff;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0x20) != 0) {
      g_SelectedLevel = Level;
    }
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((pad_pressedButton & DAT_00902ed8) != 0) {
    memcard::g_memcardGameSaved = 0;
    g_newlevelnum = 0xffffffff;
    g_loadingPlanet = 1;
    g_CutscenePlaying = 1;
  }
  return 0;
}



//==== 00146708  ns=pause  size=0x27c
// sig: undefined PlanetInfo_Draw(void)
// callers(0): 
// callees(9): 0006a510 draw::FontPrintMediumOpt; 0006cc0c draw::FontPrintMediumLeft; 0006cde8 draw::FontLen; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070680 draw::FontPrintCenterScaled; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend

/* [p2_pause] draw
   [p2_pause] draw
   [p2_pause] draw */

undefined8 pause::PlanetInfo_Draw(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_50 [24];
  
  uVar1 = *(uint *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  uVar6 = stub::STUB_0006d704();
  if (g_Language < 4) {
    uVar7 = 0x3ff0000000000000;
    if (g_Language < 0) goto LAB_001467e8;
  }
  else {
    uVar6 = 0x3fecccccc0000000;
    uVar7 = uVar6;
    if ((g_Language < 5) || (g_Language < 6)) goto LAB_001467e8;
  }
  uVar7 = 0x3ff0000000000000;
LAB_001467e8:
  uVar6 = idol_draw::Blend(uVar6,1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar6);
  uVar6 = help::help_msg_string_by_index(STR_ARE_YOU_SURE_YOU_0x4F6D);
  draw::FontPrintMediumOpt(local_50,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help::help_msg_string_by_index(STR_QUIT_GAME_2);
  draw::FontPrintCenterScaled
            (uVar7,((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),iVar2 + -0x40,
             0x80ffa888,uVar6,0xffffffffffffffff);
  pcVar3 = (char *)help::help_msg_string_by_index(STR_NO);
  iVar4 = draw::FontLen(pcVar3,-1);
  pcVar3 = (char *)help::help_msg_string_by_index(STR_YES_3);
  iVar5 = draw::FontLen(pcVar3,-1);
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  iVar5 = *(int *)(param_1 + 0x20) - iVar5 >> 1;
  uVar6 = help::help_msg_string_by_index(STR_NO);
  draw::FontPrintMediumLeft(iVar5,iVar2 + -0x28,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help::help_msg_string_by_index(STR_YES_3);
  draw::FontPrintMediumLeft(iVar5,iVar2 + -0x14,0x80ffa888,uVar6,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 2;
}



//==== 00146984  ns=pause  size=0x128
// sig: undefined GoldBoltWidget_SpawnMoby(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform

/* [p2_pause] creates GOLD_BOLT moby
   [p2_pause] creates GOLD_BOLT moby
   [p2_pause] creates GOLD_BOLT moby */

undefined8 pause::GoldBoltWidget_SpawnMoby(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  
  if (DAT_00a3592e == -1) {
    pMVar4 = (MobyInstance *)0x0;
  }
  else {
    pMVar4 = mobyfunc::CreateMoby(GOLD_BOLT);
    if (pMVar4 != (MobyInstance *)0x0) {
      pMVar4->updateDistance = -1;
      pMVar4->drawDistance = 0xff;
      pMVar4->enabled = '\x01';
      pMVar4->state = '\0';
      mobyfunc::UpdateMobyTransform(pMVar4);
      mobyutil::MB_SetLights(pMVar4,0x202020,0xe,0xe,0);
    }
  }
  if (pMVar4 != (MobyInstance *)0x0) {
    *(MobyInstance **)(param_1 + 0x44) = pMVar4;
    pMVar4->modeBits = NONE;
    piVar1 = (int *)pMVar4->pVar;
    (pMVar4->pos).x = GameCamera.posX + DAT_00730b60;
    (pMVar4->pos).y = GameCamera.posY + DAT_00730b64;
    fVar3 = GameCamera.posZ;
    fVar2 = DAT_00730b68;
    (pMVar4->rotation).y = -1.9;
    pMVar4->pUpdate = &PTR_GoldBolt_SpinMobyUpdate_00707740;
    (pMVar4->pos).z = fVar3 - fVar2;
    *piVar1 = param_1;
  }
  return 0;
}



//==== 00146aac  ns=pause  size=0x68
// sig: undefined GoldBoltWidget_DeleteMoby(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* [p2_pause] deletes widget moby
   [p2_pause] deletes widget moby
   [p2_pause] deletes widget moby */

undefined8 pause::GoldBoltWidget_DeleteMoby(int param_1)

{
  longlong lVar1;
  MobyInstance *moby;
  
  moby = *(MobyInstance **)(param_1 + 0x44);
  if (moby != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(moby);
    lVar1 = (longlong)worldUpdateTime;
    moby->color = (int)((ulonglong)lVar1 >> 0x20);
    moby->light = (int)lVar1;
    moby = (MobyInstance *)0x0;
  }
  *(MobyInstance **)(param_1 + 0x44) = moby;
  return 0;
}



//==== 00146b14  ns=pause  size=0x530
// sig: undefined GoldBoltWidget_Update(void)
// callers(0): 
// callees(15): 0006a510 draw::FontPrintMediumOpt; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070130 draw::FontPrintMediumRight; 000703c8 draw::FontPrintLargeRight; 0007b740 help::help_msg_string_by_index; 000ca72c hud::DrawFlatOverlay; 000f1934 mobyfunc::MB_AddToDrawList; 0011b124 mobyutil::MB_CountGoldWeapons; 0011b1b4 mobyutil::MB_CountGoldBolts; 0011b2c4 mobyutil::MB_GetUnspentGoldBolts; 005c8510 libc::strlen; 005cc578 libc::strchr; 005cc8d8 libc::strcpy; 005cd2a8 libc::snprintf

/* [p2_pause] gold bolt page update/text
   [p2_pause] gold bolt page update/text
   [p2_pause] gold bolt page update/text */

undefined8 pause::GoldBoltWidget_Update(int param_1)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar7;
  char *__dest;
  size_t sVar8;
  longlong lVar5;
  undefined8 uVar6;
  int iVar9;
  longlong lVar10;
  int iVar11;
  short sVar12;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar13;
  ulonglong in_LR;
  
  uVar3 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar3 - 0x170);
  *puVar2 = uVar3;
  puVar2[0x30] = in_LR;
  puVar2[0x2d] = unaff_r31;
  iVar9 = *(int *)(param_1 + 0x44);
  puVar2[0x2c] = unaff_r30;
  puVar2[0x2b] = unaff_r29;
  puVar2[0x2a] = unaff_r28;
  puVar2[0x29] = unaff_r27;
  puVar2[0x28] = unaff_r26;
  puVar2[0x27] = unaff_r25;
  puVar2[0x26] = unaff_r24;
  puVar2[0x25] = unaff_r23;
  puVar2[0x24] = unaff_r22;
  puVar2[0x23] = unaff_r21;
  puVar2[0x22] = unaff_r20;
  if (iVar9 != 0) {
    mobyfunc::MB_AddToDrawList(iVar9,1);
  }
  stub::STUB_0006d704(0);
  iVar9 = *(int *)(param_1 + 0x20);
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0;
  uVar4 = (longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffff;
  sVar12 = (short)uVar4 - ((short)(uVar4 >> 0x10) >> 0xf);
  *(undefined2 *)((int)puVar2 + 0x74) = 8;
  *(undefined2 *)((int)puVar2 + 0x7c) = 0;
  *(undefined2 *)((int)puVar2 + 0x7e) = 0;
  *(undefined2 *)(puVar2 + 0x10) = 0x10;
  *(undefined2 *)((int)puVar2 + 0x82) = 5;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)((int)puVar2 + 0x84) = 0;
  lVar13 = uVar3 - 0xe8;
  *(undefined2 *)((int)puVar2 + 0x86) = 0;
  *(short *)((int)puVar2 + 0x72) = (short)uVar1;
  *(short *)((int)puVar2 + 0x76) = sVar12;
  *(short *)(puVar2 + 0xf) = (short)(sVar12 + 8 >> 1);
  pcVar7 = (char *)help::help_msg_string_by_index(STR_GOLD_BOLTS_2);
  __dest = (char *)lVar13;
  libc::strcpy(__dest,pcVar7);
  if ((g_Language == 3) && (pcVar7 = libc::strchr(__dest,0x2d), pcVar7 != (char *)0x0)) {
    sVar8 = libc::strlen(__dest);
    lVar10 = (longlong)(int)sVar8;
    lVar5 = (uVar3 - 0x170) + lVar10;
    if (ZEXT48(pcVar7) < (lVar5 + 0x88U & 0xffffffff)) {
      do {
        lVar10 = lVar10 + -1;
        sVar8 = (size_t)lVar10;
        uVar4 = lVar5 + 0x87;
        *(undefined1 *)((int)lVar5 + 0x89) = *(undefined1 *)((int)lVar5 + 0x88);
        lVar5 = lVar5 + -1;
      } while (ZEXT48(pcVar7) < (uVar4 & 0xffffffff));
    }
    *(undefined1 *)((int)puVar2 + sVar8 + 0x89) = 0x20;
  }
  draw::FontPrintMediumOpt(uVar3 - 0x100,0x8000c0c0,lVar13,0xffffffffffffffff);
  *(undefined2 *)(puVar2 + 0xf) = 0x2b;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0x6e;
  *(ushort *)((int)puVar2 + 0x82) = *(ushort *)((int)puVar2 + 0x82) ^ 4;
  draw::FontPrintMediumOpt(uVar3 - 0x100,0x8000c0c0,lVar13,0xffffffffffffffff);
  iVar9 = DAT_0072984c + 200;
  iVar11 = DAT_00729850 + 0x59;
  uVar6 = help::help_msg_string_by_index(STR_FOUND);
  draw::FontPrintMediumRight(iVar9,iVar11,0x80000000,uVar6,0xffffffffffffffff);
  iVar11 = DAT_0072984c + 200;
  iVar9 = DAT_00729850 + 0x72;
  uVar6 = help::help_msg_string_by_index(STR_USED);
  draw::FontPrintMediumRight(iVar11,iVar9,0x80000000,uVar6,0xffffffffffffffff);
  iVar11 = DAT_0072984c + 200;
  iVar9 = DAT_00729850 + 0x90;
  uVar6 = help::help_msg_string_by_index(STR_REMAIN);
  draw::FontPrintMediumRight(iVar11,iVar9,0x80000000,uVar6,0xffffffffffffffff);
  uVar6 = help::help_msg_string_by_index(STR_FOUND);
  draw::FontPrintMediumRight(200,0x59,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help::help_msg_string_by_index(STR_USED);
  draw::FontPrintMediumRight(200,0x72,0x80ffa888,uVar6,0xffffffffffffffff);
  uVar6 = help::help_msg_string_by_index(STR_REMAIN);
  draw::FontPrintMediumRight(200,0x90,0x80ffa888,uVar6,0xffffffffffffffff);
  iVar9 = mobyutil::MB_CountGoldBolts();
  libc::snprintf(__dest,"%d",iVar9);
  draw::FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x59,0x80000000,lVar13,0xffffffffffffffff);
  draw::FontPrintLargeRight(0xf0,0x59,0x80ffa888,lVar13,0xffffffffffffffff);
  iVar9 = mobyutil::MB_CountGoldWeapons();
  libc::snprintf(__dest,"%d",(int)((longlong)iVar9 << 2));
  draw::FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x72,0x80000000,lVar13,0xffffffffffffffff);
  draw::FontPrintLargeRight(0xf0,0x72,0x80ffa888,lVar13,0xffffffffffffffff);
  iVar9 = mobyutil::MB_GetUnspentGoldBolts();
  libc::snprintf(__dest,"%d",iVar9);
  draw::FontPrintLargeRight
            (DAT_0072984c + 0xf0,DAT_00729850 + 0x90,0x80000000,lVar13,0xffffffffffffffff);
  draw::FontPrintLargeRight(0xf0,0x90,0x80ffa888,lVar13,0xffffffffffffffff);
  hud::DrawFlatOverlay
            (DAT_0072984c + 0xd0,DAT_00729850 + 0x89,DAT_0072984c + 0xf2,DAT_00729850 + 0x8c,
             0x80000000,0);
  hud::DrawFlatOverlay(0xd0,0x89,0xf2,0x8c,0x80805444,0);
  stub::STUB_0006d708();
  return 8;
}



//==== 00147044  ns=pause  size=0x2a8
// sig: undefined Update_FoundGBsShipMenu(void)
// callers(0): 
// callees(6): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070130 draw::FontPrintMediumRight; 0007b740 help::help_msg_string_by_index; 000f1934 mobyfunc::MB_AddToDrawList; 005cd2a8 libc::snprintf
// strings: 00a0ca34: 'None' | 006535bc: '%s %d %s %d'

undefined8 pause::Update_FoundGBsShipMenu(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  char acStack_140 [264];
  
  if (DAT_00a534f0 == '\0') {
    DAT_00a534f8 = *(int *)(g_viewMtxPtr + 0xc) == 0;
    DAT_00a534f0 = '\x01';
  }
  if (DAT_00a534f8 == '\0') {
    pfVar3 = (float *)&DAT_00730b7c;
  }
  else {
    pfVar3 = (float *)&DAT_00730b70;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  *(float *)(iVar4 + 0x10) = GameCamera.posX + *pfVar3;
  *(float *)(iVar4 + 0x14) = GameCamera.posY + DAT_00730b6c + pfVar3[1];
  *(float *)(iVar4 + 0x18) = GameCamera.posZ - pfVar3[2];
  if (iVar4 != 0) {
    mobyfunc::MB_AddToDrawList(iVar4,1);
  }
  iVar5 = 0;
  stub::STUB_0006d704(0);
  iVar4 = 0;
  do {
    if (g_CollectedGoldBolts[g_SelectedLevel * 4 + iVar4] != '\0') {
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0x10;
  if (g_Language < 3) {
    if (1 < g_Language) {
      iVar4 = 10;
    }
  }
  else if (g_Language < 4) {
    iVar4 = 5;
  }
  else if (g_Language < 5) {
    iVar4 = -0x14;
  }
  uVar1 = help::help_msg_string_by_index(STR_FOUND);
  uVar2 = help::help_msg_string_by_index(STR_OF);
  libc::snprintf(acStack_140,"%s %d %s %d",uVar1,iVar5,uVar2,
                 (&g_MaxBoltsPerLevel.Veldin)[g_SelectedLevel]);
  draw::FontPrintMediumRight
            (*(int *)(param_1 + 0x20) - iVar4,(draw::g_ScreenHeight >> 1) + -8,0x80000000,
             acStack_140,0xffffffffffffffff);
  draw::FontPrintMediumRight
            ((*(int *)(param_1 + 0x20) - iVar4) + -1,(draw::g_ScreenHeight >> 1) + -9,0x80ffa888,
             acStack_140,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 8;
}



//==== 001472f0  ns=pause  size=0x44
// sig: undefined GoldBolt_SpinMobyUpdate(void)
// callers(0): 
// callees(1): 00502578 fastfunc::FastWrapRot

/* [p2_pause] moby callback rotates
   [p2_pause] moby callback rotates
   [p2_pause] moby callback rotates */

void pause::GoldBolt_SpinMobyUpdate(int param_1)

{
  double dVar1;
  
  dVar1 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x40),0.02);
  *(float *)(param_1 + 0x40) = (float)dVar1;
  return;
}



//==== 00147334  ns=pause  size=0x2fc
// sig: undefined ItemInfo_DrawCost(void)
// callers(0): 
// callees(8): 0006a510 draw::FontPrintMediumOpt; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98; 005cd2a8 libc::snprintf
// strings: 006535d0: '%d,%03d/' | 006535e0: '%d,%03d'

/* [p2_pause] prints '%d,%03d' cost
   [p2_pause] prints '%d,%03d' cost
   [p2_pause] prints '%d,%03d' cost */

undefined8 pause::ItemInfo_DrawCost(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_b0 [24];
  char acStack_98 [80];
  
  sVar1 = *(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) + 6 +
                    *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c) * 10);
  if ((&UnlockableItems.field0_0x0)[sVar1] == '\0') {
    uVar4 = 0;
  }
  else {
    iVar3 = (int)((longlong)sVar1 << 3) * 3;
    iVar6 = *(int *)((int)&currentAmmoArray.field0_0x0 + (int)((longlong)sVar1 << 2));
    uVar2 = *(ushort *)((int)&DAT_00737d3e + iVar3);
    uVar4 = idol_draw::PackCmd(0,1,0,1,0);
    vuchain::SetGSReg(3,uVar4);
    uVar4 = FUN_00502f98(1,5,0,0,0,0,0,0);
    vuchain::SetGSReg(0x16,uVar4);
    if (*(short *)((int)&DAT_00737d38 + iVar3) == 0) {
      pcVar5 = (char *)help::help_msg_string_by_index(STR_NO_AMMO);
      libc::snprintf(acStack_98,pcVar5);
    }
    else {
      if (iVar6 < 1000) {
        iVar6 = libc::snprintf(acStack_98,"%d/",iVar6);
      }
      else {
        iVar6 = libc::snprintf(acStack_98,"%d,%03d/",iVar6 / 1000,iVar6 % 1000);
      }
      pcVar5 = acStack_98 + iVar6;
      if (uVar2 < 1000) {
        libc::snprintf(pcVar5,"%d",(ulonglong)uVar2);
      }
      else {
        libc::snprintf(pcVar5,"%d,%03d",uVar2 / 1000,(uint)uVar2 + (uVar2 / 1000) * -1000);
      }
    }
    stub::STUB_0006d704(0);
    draw::FontPrintMediumOpt(local_b0,0x80ffa888,acStack_98,0xffffffffffffffff);
    stub::STUB_0006d708();
    uVar4 = 2;
  }
  return uVar4;
}



//==== 00147630  ns=pause  size=0xb4
// sig: undefined MapPage_Draw(void)
// callers(0): 
// callees(4): 000e2e10 map::DrawMapFrame; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

/* [p2_pause] calls map::DrawMapFrame
   [p2_pause] calls map::DrawMapFrame
   [p2_pause] calls map::DrawMapFrame */

undefined8 pause::MapPage_Draw(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar1);
  map::DrawMapFrame();
  return 8;
}



//==== 001476f0  ns=pause  size=0x4c0
// sig: undefined MapMenu_DrawOptions(void)
// callers(0): 
// callees(10): 0006c5dc draw::EnableFontColors; 0006ccb4 draw::DisableFontColors; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006fac8 draw::FontLenScaledSmall; 0006fe44 draw::FontPrintScaled; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

undefined8 pause::MapMenu_DrawOptions(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar1);
  stub::STUB_0006d704(0);
  dVar6 = 1.0;
  if (g_Language < 3) {
    if ((-1 < g_Language) && (1 < g_Language)) {
      dVar6 = 0.8999999761581421;
    }
  }
  else if (g_Language < 5) {
    if (g_Language < 4) {
      dVar6 = 0.8999999761581421;
    }
    else {
      dVar6 = 0.8999999761581421;
    }
  }
  else if (g_Language < 6) {
    dVar6 = 0.8999999761581421;
  }
  uVar1 = help::help_msg_string_by_index(STR_VIEW_MISSIONS);
  iVar2 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  uVar1 = help::help_msg_string_by_index(STR_PREVIOUS_MAP);
  iVar3 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  iVar2 = iVar3;
  if (Level != Veldin) {
    uVar1 = help::help_msg_string_by_index(STR_PLAY_INFOBOT);
    iVar2 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
  }
  uVar1 = help::help_msg_string_by_index(STR_NEXT_MAP);
  iVar3 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  uVar1 = help::help_msg_string_by_index(STR_TRACK_ZOOM);
  iVar2 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  uVar1 = help::help_msg_string_by_index(STR_EXIT);
  iVar3 = draw::FontLenScaledSmall(dVar6,uVar1,0xffffffffffffffff);
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  iVar3 = *(int *)(param_1 + 0x20) - iVar3 >> 1;
  if (iVar3 < 2) {
    iVar3 = 2;
  }
  iVar2 = 6;
  if (Level != Veldin) {
    iVar2 = 7;
  }
  iVar2 = *(int *)(param_1 + 0x24) / iVar2;
  draw::DisableFontColors();
  iVar4 = iVar2 + -6;
  dVar7 = (double)(longlong)iVar3;
  dVar5 = (double)(longlong)iVar4;
  help::help_msg_string_by_index(STR_VIEW_MISSIONS);
  draw::FontPrintScaled(dVar7,dVar5,dVar6);
  if (Level != Veldin) {
    iVar4 = iVar4 + iVar2;
    dVar5 = (double)(longlong)iVar4;
    help::help_msg_string_by_index(STR_PLAY_INFOBOT);
    draw::FontPrintScaled(dVar7,dVar5,dVar6);
  }
  dVar5 = (double)(longlong)(iVar4 + iVar2);
  help::help_msg_string_by_index(STR_PREVIOUS_MAP);
  draw::FontPrintScaled(dVar7,dVar5,dVar6);
  iVar3 = iVar4 + iVar2 + iVar2;
  dVar5 = (double)(longlong)iVar3;
  help::help_msg_string_by_index(STR_NEXT_MAP);
  draw::FontPrintScaled(dVar7,dVar5,dVar6);
  iVar3 = iVar3 + iVar2;
  uVar1 = help::help_msg_string_by_index(STR_TRACK_ZOOM);
  dVar5 = dVar6;
  if (g_Language == 2) {
    dVar5 = (double)(float)(dVar6 - 0.05000000074505806);
  }
  draw::FontPrintScaled
            (dVar7,(double)(longlong)iVar3,dVar5,uVar1,(longlong)iVar3,0x80ffa888,uVar1,
             0xffffffffffffffff);
  dVar5 = (double)(longlong)(iVar3 + iVar2);
  help::help_msg_string_by_index(STR_EXIT);
  draw::FontPrintScaled(dVar7,dVar5,dVar6);
  draw::EnableFontColors();
  stub::STUB_0006d708();
  return 2;
}



//==== 00147bb0  ns=pause  size=0x138
// sig: undefined ExitSelectPrompt_Draw(void)
// callers(0): 
// callees(7): 0006cc0c draw::FontPrintMediumLeft; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

/* [p2_pause] prints STR_EXIT / STR_SELECT
   [p2_pause] prints STR_EXIT / STR_SELECT
   [p2_pause] prints STR_EXIT / STR_SELECT */

undefined8 pause::ExitSelectPrompt_Draw(void)

{
  undefined8 uVar1;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f98(1,5,0,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar1);
  stub::STUB_0006d704(0);
  uVar1 = help::help_msg_string_by_index(STR_EXIT);
  draw::FontPrintMediumLeft(4,7,0x80ffa888,uVar1,0xffffffffffffffff);
  uVar1 = help::help_msg_string_by_index(STR_SELECT);
  draw::FontPrintMediumLeft(4,0x17,0x80ffa888,uVar1,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 2;
}



//==== 00147cf8  ns=pause  size=0x3fc
// sig: undefined DrawMissionsFrame(void)
// callers(0): 
// callees(14): 0006c5dc draw::EnableFontColors; 0006cc0c draw::FontPrintMediumLeft; 0006ccb4 draw::DisableFontColors; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007100c draw::FontPrintOpt; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 000ea7a8 mission::BuildMissionList; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

undefined8 pause::DrawMissionsFrame(int param_1)

{
  float fVar1;
  int *outTextIds;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint local_b0;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  short local_a2;
  undefined2 local_a0;
  short local_9e;
  short local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  
  outTextIds = DAT_00902ec8;
  local_b0 = 0;
  stub::STUB_0006d704(0);
  lVar2 = mission::BuildMissionList(outTextIds,&local_b0,(int *)0x0,'\0');
  uVar3 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar3);
  uVar3 = FUN_00502f98(1,5,0x10,0,0,0,0,0);
  vuchain::SetGSReg(0x16,uVar3);
  uVar3 = help::help_msg_string_by_index(STR_MISSIONS);
  draw::FontPrintMediumLeft(4,4,0x80ffa888,uVar3,0xffffffffffffffff);
  local_ac = 0;
  local_a8 = 0;
  uVar10 = 0;
  local_a4 = 0;
  iVar11 = 0x18;
  local_a2 = 0;
  local_a0 = 0;
  local_9e = 0;
  local_9c = 0x10;
  local_9a = 0;
  local_98 = 0;
  local_96 = 0;
  local_aa = (undefined2)*(undefined4 *)(param_1 + 0x24);
  local_a6 = (undefined2)*(undefined4 *)(param_1 + 0x20);
  if (0 < (int)lVar2) {
    iVar6 = 0;
    do {
      iVar9 = iVar11 + 10;
      uVar3 = 0xffffffff80ffa888;
      uVar7 = *(uint *)(param_1 + 0x30 + g_SelectedLevel * 4);
      if (uVar7 == uVar10) {
        uVar3 = 0xffffffff8020ffff;
        draw::DisableFontColors();
      }
      local_a4 = 0x10;
      local_a2 = (short)iVar11;
      uVar4 = help::help_msg_string_by_index(*(StringId *)((int)outTextIds + iVar6));
      if (g_JapaneseMode == false) {
        fVar1 = 1.0;
      }
      else {
        fVar1 = 0.9;
      }
      draw::FontPrintOpt((double)fVar1,&local_ac,uVar3,uVar4,0xffffffffffffffff);
      if (uVar7 == uVar10) {
        draw::EnableFontColors();
      }
      iVar5 = (int)local_9c;
      iVar8 = (int)local_9e;
      if (iVar8 / iVar5 == 2) {
        iVar9 = iVar11 + 0x10;
      }
      uVar7 = local_b0 & 1 << (uVar10 & 0x3f);
      hud::DrawFlatOverlay(4,iVar9 + -5,0xe,iVar9 + 5,0x80ffa888,0);
      hud::DrawFlatOverlay(5,iVar9 + -4,0xd,iVar9 + 4,DAT_00729840,0);
      if (uVar7 != 0) {
        uVar3 = hud::GetIconFrameTex(0xe99e,1);
        hud::DrawSprite(uVar3,0xfffffffffffffffc,iVar9 + -0x12,0x1e,0x1e,0x80);
      }
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 4;
      iVar11 = iVar11 + (iVar8 / iVar5) * 0x10;
    } while ((int)uVar10 < (int)lVar2);
  }
  if ((local_b0 & 0x80000000) != 0) {
    local_a2 = (short)iVar11 + 8;
    local_9a = 1;
    local_a4 = (undefined2)(*(int *)(param_1 + 0x24) >> 1);
    uVar3 = 0x3ff0000000000000;
    if ((1 < g_Language) && (g_Language < 7)) {
      uVar3 = 0x3feb333340000000;
    }
    uVar4 = help::help_msg_string_by_index(STR_ALL_MISSIONS_COMPLETE);
    draw::FontPrintOpt(uVar3,&local_ac,0x8020ffff,uVar4,0xffffffffffffffff);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 001480f4  ns=pause  size=0x3b0
// sig: undefined ImageWidget_Update(void)
// callers(0): 
// callees(3): 000e886c memcard::memcard_IsSaveSystemIdle; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 006535e8: '%s[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram'

/* [p2_pause] streams %s[%d].ps3/.vram image into buffer
   [p2_pause] streams %s[%d].ps3/.vram image into buffer
   [p2_pause] streams %s[%d].ps3/.vram image into buffer */

undefined8 pause::ImageWidget_Update(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  longlong lVar8;
  char acStack_140 [128];
  char acStack_c0 [128];
  
  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 0x100) == 0) {
          iVar6 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar8 = (longlong)iVar6;
          if (iVar6 < 0) {
            lVar8 = 0;
          }
        }
        else {
          iVar6 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar8 = (longlong)iVar6;
          if (iVar6 < 0) {
            lVar8 = 0;
          }
          if (4 < (int)lVar8) {
            lVar8 = 4;
          }
          iVar6 = memcard::memcard_IsSaveSystemIdle();
          if ((iVar6 == 0) || (DAT_00a52d00 < 0xb)) {
            *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          }
          else {
            if (*(int *)(param_1 + 0x44) == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
            lVar8 = (longlong)*(int *)((int)&DAT_0071fa44 + ((int)(lVar8 << 5) - (int)(lVar8 << 2)))
            ;
          }
        }
      }
      else {
        lVar8 = (longlong)*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
      }
    }
    else {
      lVar8 = (longlong)g_SelectedLevel;
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) == -1) {
      return 0;
    }
  }
  iVar2 = DAT_00902e9c;
  iVar6 = *(int *)(param_1 + 0x44);
  if (iVar6 < 2) {
    if (iVar6 < 0) {
      return 0;
    }
    if (iVar6 < 1) {
LAB_00148288:
      if ((int)lVar8 == *(int *)(param_1 + 0x50)) {
        return 0;
      }
      if (*(int *)(param_1 + 0x48) == 0) {
        return 0;
      }
      if (Music != 0) {
        return 0;
      }
      if (*(uint *)(param_1 + 0x30) < 0x10) {
        uVar5 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)[*(uint *)(param_1 + 0x30)]
                      );
      }
      else {
        uVar5 = 0;
      }
      libc::snprintf(acStack_140,"%s[%d]",uVar5,lVar8);
      libc::snprintf(acStack_c0,"%s.ps3",acStack_140);
      fios::LoadAssetFromFile(acStack_c0,loaders::g_NpcBuffer,0x100000);
      piVar4 = loaders::g_NpcBuffer;
      libc::snprintf(acStack_c0,"%s.vram",acStack_140);
      iVar6 = DAT_00a10924 + 0x200000;
      iVar7 = fios::LoadAssetFromFile(acStack_c0,iVar6,0x100000);
      DAT_00a2071c = piVar4[1];
      DAT_00a20718 = *piVar4 + (iVar6 - *(int *)(iVar2 + 0x4ac));
      DAT_00a20720 = piVar4[2];
      DAT_00a20724 = piVar4[3];
      *piVar4 = DAT_00a20718;
      *(int *)(param_1 + 100) = DAT_00a20718;
      *(int *)(param_1 + 0x68) = DAT_00a2071c;
      *(int *)(param_1 + 0x6c) = DAT_00a20720;
      *(int *)(param_1 + 0x70) = DAT_00a20724;
      iVar6 = piVar4[5];
      iVar2 = piVar4[6];
      iVar3 = piVar4[7];
      *(int *)(param_1 + 0x74) = piVar4[4];
      *(int *)(param_1 + 0x78) = iVar6;
      *(int *)(param_1 + 0x7c) = iVar2;
      *(int *)(param_1 + 0x80) = iVar3;
      *(int *)(param_1 + 0x84) = piVar4[8];
      *(undefined1 *)(param_1 + 0xac) = 1;
      DAT_00a20728 = *(undefined4 *)(param_1 + 0x74);
      DAT_00a2072c = *(undefined4 *)(param_1 + 0x78);
      DAT_00a20730 = *(undefined4 *)(param_1 + 0x7c);
      DAT_00a20734 = *(undefined4 *)(param_1 + 0x80);
      DAT_00a20738 = *(undefined4 *)(param_1 + 0x84);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x50) = (int)lVar8;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      return 0;
    }
  }
  else {
    if (iVar6 < 3) goto LAB_00148288;
    if (3 < iVar6) {
      return 0;
    }
  }
  if (Music == 0) {
    *(undefined4 *)(param_1 + 0x44) = 2;
  }
  return 0;
}



//==== 001484a4  ns=pause  size=0x94
// sig: undefined ImageWidget_Draw(void)
// callers(0): 
// callees(1): 0006889c draw::Sprite_DrawShape

/* [p2_pause] Sprite_DrawShape fullscreen image
   [p2_pause] Sprite_DrawShape fullscreen image
   [p2_pause] Sprite_DrawShape fullscreen image */

undefined8 pause::ImageWidget_Draw(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x44) < 2) {
    uVar1 = 0;
  }
  else {
    draw::Sprite_DrawShape
              (0,0,DAT_00966b8c,DAT_00966b8e,0,0,*(undefined4 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x3c));
    uVar1 = 0x10;
  }
  return uVar1;
}



//==== 00148538  ns=pause  size=0x150
// sig: undefined Menu_AllocStreamBuffer(void)
// callers(5): 00148688 pause::ImageWidget_OnEnter; 0014b7cc pause::MessageBox_OnEnter; 0014de68 pause::SaveLoad_OnEnter; 0014f1f0 pause::SpawnHeroInMenu?; 001513e8 pause::Spawn_Moby1957_HelpdeskLady
// callees(1): 005001fc fastfunc::FastMemSet

/* [p2_pause] finds free slot in 0xa53098 table, marks used
   [p2_pause] finds free slot in 0xa53098 table, marks used
   [p2_pause] finds free slot in 0xa53098 table, marks used */

undefined4 pause::Menu_AllocStreamBuffer(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0;
  while ((((param_1 != 0 &&
           ((*(uint *)((int)&DAT_00a5309c + (int)((uVar3 & 0xffffffff) << 3)) & 1) == 0)) ||
          ((param_1 == 0 &&
           ((*(uint *)((int)&DAT_00a5309c + (int)((uVar3 & 0xffffffff) << 3)) & 1) != 0)))) ||
         ((iVar1 = (int)((uVar3 & 0xffffffff) << 3), *(int *)((int)&DAT_00a53098 + iVar1) == 0 ||
          ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) != 0))))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
      return 0;
    }
  }
  iVar4 = 0;
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) | 2;
  do {
    if ((&DAT_00a53098)[iVar4 * 2] == *(int *)((int)&DAT_00a53098 + iVar1)) {
      uVar2 = 0x11800;
      if (((&DAT_00a5309c)[iVar4 * 2] & 1) != 0) {
        uVar2 = 0x4f000;
      }
      goto LAB_00148640;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  uVar2 = 0xffffffffffffffff;
LAB_00148640:
  fastfunc::FastMemSet(*(undefined4 *)((int)&DAT_00a53098 + iVar1),0xffffffffdeadbeef,uVar2);
  return *(undefined4 *)((int)&DAT_00a53098 + iVar1);
}



//==== 00148688  ns=pause  size=0xe4
// sig: undefined ImageWidget_OnEnter(void)
// callers(0): 
// callees(2): 00148538 pause::Menu_AllocStreamBuffer; 005d0140 libc::memset

/* [p2_pause] allocs stream buffers
   [p2_pause] allocs stream buffers
   [p2_pause] allocs stream buffers */

undefined8 pause::ImageWidget_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  uVar1 = Menu_AllocStreamBuffer(*(uint *)(param_1 + 0x34) & 0x200);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = Menu_AllocStreamBuffer(*(uint *)(param_1 + 0x34) & 0x200);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if ((*(uint *)(param_1 + 0x34) & 0x200) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar1 = Menu_AllocStreamBuffer(1);
      *(undefined4 *)(param_1 + 0x48) = uVar1;
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      uVar1 = Menu_AllocStreamBuffer(1);
      *(undefined4 *)(param_1 + 0x4c) = uVar1;
    }
  }
  libc::memset(param_1 + 100,0,0x24);
  libc::memset(param_1 + 0x88,0,0x24);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return 0;
}



//==== 0014876c  ns=pause  size=0x194
// sig: undefined ImageWidget_OnExit(void)
// callers(0): 
// callees(1): 0011d9e0 music::music_StopLoad

/* [p2_pause] frees stream buffers
   [p2_pause] frees stream buffers
   [p2_pause] frees stream buffers */

undefined8 pause::ImageWidget_OnExit(int param_1)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  
  cVar1 = DAT_00a52c7b;
  uVar2 = 0;
  do {
    iVar3 = (int)((uVar2 & 0xffffffff) << 3);
    if ((*(int *)((int)&DAT_00a53098 + iVar3) == *(int *)(param_1 + 0x48)) &&
       ((*(uint *)((int)&DAT_00a5309c + iVar3) & 2) != 0)) {
      if (((*(uint *)((int)&DAT_00a5309c + iVar3) & 4) != 0) &&
         (*(uint *)((int)&DAT_00a5309c + iVar3) = *(uint *)((int)&DAT_00a5309c + iVar3) ^ 4,
         cVar1 != '\0')) {
        music::music_StopLoad();
        DAT_00a52c7b = '\0';
      }
      *(uint *)((int)&DAT_00a5309c + iVar3) = *(uint *)((int)&DAT_00a5309c + iVar3) & 0xfffffffd;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  *(undefined4 *)(param_1 + 0x48) = 0;
  cVar1 = DAT_00a52c7b;
  iVar3 = 0;
  while (((&DAT_00a53098)[iVar3 * 2] != *(int *)(param_1 + 0x4c) ||
         (((&DAT_00a5309c)[iVar3 * 2] & 2) == 0))) {
    iVar3 = iVar3 + 1;
    if (4 < iVar3) {
LAB_001488bc:
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      return 0;
    }
  }
  if ((((&DAT_00a5309c)[iVar3 * 2] & 4) != 0) &&
     ((&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] ^ 4, cVar1 != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar3 * 2] = (&DAT_00a5309c)[iVar3 * 2] & 0xfffffffd;
  goto LAB_001488bc;
}



//==== 00148908  ns=pause  size=0x8e4
// sig: undefined UpdateOptionsMenus(void)
// callers(0): 
// callees(5): 000e886c memcard::memcard_IsSaveSystemIdle; 00503434 FUN_00503434; 005034c4 idol::PRINT_m_LoadGameFile; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 0096c08c: 'None' | 006535e8: '%s[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram' | 00653600: 'pMon->base[index]'

undefined8 pause::UpdateOptionsMenus(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int local_370 [8];
  char acStack_350 [128];
  char acStack_2d0 [128];
  char acStack_250 [128];
  char acStack_1d0 [128];
  char acStack_150 [128];
  char acStack_d0 [128];
  longlong local_50;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  iVar7 = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x5c) = iVar7;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 8) == 0) {
            if ((uVar1 & 0x400) == 0) {
              if ((uVar1 & 0x1000) == 0) {
                iVar7 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
                lVar10 = (longlong)iVar7;
                if (iVar7 < 0) {
                  lVar10 = 0;
                }
                if (((uVar1 & 0x4000) != 0) &&
                   (*(short *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) +
                               (int)lVar10 * 0xc + 2) == 2)) {
                  lVar10 = 9;
                }
              }
              else {
                local_370[0] = 0;
                local_370[1] = 0;
                local_370[2] = 0xc;
                local_370[3] = 0x24;
                local_370[4] = 0x30;
                local_370[5] = 0x18;
                local_370[6] = 0;
                lVar10 = (longlong)(**(int **)(param_1 + 0x40) + local_370[g_Language]);
              }
            }
            else {
              local_50 = (longlong)(int)(animationSpeed * 300.5);
              lVar10 = (longlong)((iVar7 / (int)(animationSpeed * 300.5)) % 0x13);
            }
          }
          else {
            iVar7 = *(int *)(g_currentMenuPage + 0x40);
            lVar10 = (longlong)*(short *)(*(int *)(iVar7 + 0x48) + 8 + *(int *)(iVar7 + 0x3c) * 10);
            if (*(int *)(iVar7 + 0x40) == 0) {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
            }
          }
        }
        else {
          iVar7 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40);
          lVar10 = (longlong)iVar7;
          if (iVar7 < 0) {
            lVar10 = 0;
          }
          if (4 < (int)lVar10) {
            lVar10 = 4;
          }
          iVar7 = memcard::memcard_IsSaveSystemIdle();
          if ((iVar7 == 0) || (DAT_00a52d00 < 0xb)) {
            *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          }
          else {
            if (*(int *)(param_1 + 0x44) == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0;
            }
            iVar7 = *(int *)((int)&DAT_0071fa44 + ((int)(lVar10 << 5) - (int)(lVar10 << 2)));
            lVar10 = (longlong)iVar7;
            if (iVar7 == -1) {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
            }
          }
        }
      }
      else {
        lVar10 = (longlong)*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x3c);
      }
    }
    else {
      lVar10 = (longlong)g_SelectedLevel;
    }
  }
  else {
    lVar10 = (longlong)*(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) == -1) {
      return 0;
    }
  }
  iVar7 = DAT_00902e9c;
  uVar1 = *(uint *)(param_1 + 0x34);
  if (((uVar1 & 0x2000) != 0) && (g_SkillPoints[(int)lVar10] == '\0')) {
    lVar10 = 0x1e;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  iVar11 = (int)lVar10;
  if (iVar2 == 6) {
    *(undefined4 *)(param_1 + 0x44) = 2;
LAB_00148e14:
    if (iVar11 != *(int *)(param_1 + 0x50)) {
      uVar4 = *(uint *)(param_1 + 0x4c);
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else if (Music == 0) {
        if ((uVar1 & 0x10) == 0) {
          idol::PRINT_m_LoadGameFile(uVar4,"pMon->base[index]");
        }
        else {
          FUN_00503434(uVar4,"pMon->base[index]");
        }
        if (*(uint *)(param_1 + 0x30) < 0x10) {
          uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                         [*(uint *)(param_1 + 0x30)]);
        }
        else {
          uVar6 = 0;
        }
        libc::snprintf(acStack_250,"%s[%d]",uVar6,lVar10);
        iVar2 = DAT_00902e9c;
        libc::snprintf(acStack_1d0,"%s.ps3",acStack_250);
        fios::LoadAssetFromFile(acStack_1d0,loaders::g_NpcBuffer,0x100000);
        piVar5 = loaders::g_NpcBuffer;
        libc::snprintf(acStack_1d0,"%s.vram",acStack_250);
        iVar8 = fios::LoadAssetFromFile(acStack_1d0,DAT_00a10924,0x200000);
        iVar7 = piVar5[1];
        iVar9 = *piVar5 + (DAT_00a10924 - *(int *)(iVar2 + 0x4ac));
        iVar2 = piVar5[2];
        iVar3 = piVar5[3];
        *piVar5 = iVar9;
        *(int *)(param_1 + 100) = iVar9;
        *(int *)(param_1 + 0x68) = iVar7;
        *(int *)(param_1 + 0x6c) = iVar2;
        *(int *)(param_1 + 0x70) = iVar3;
        iVar7 = piVar5[5];
        iVar2 = piVar5[6];
        iVar3 = piVar5[7];
        *(int *)(param_1 + 0x74) = piVar5[4];
        *(int *)(param_1 + 0x78) = iVar7;
        *(int *)(param_1 + 0x7c) = iVar2;
        *(int *)(param_1 + 0x80) = iVar3;
        *(int *)(param_1 + 0x84) = piVar5[8];
        *(undefined1 *)(param_1 + 0xac) = 1;
        if (iVar8 < 1) {
          *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
        }
        else {
          iVar7 = 0;
          do {
            if ((&DAT_00a53098)[iVar7 * 2] == *(int *)(param_1 + 0x4c)) {
              (&DAT_00a5309c)[iVar7 * 2] = (&DAT_00a5309c)[iVar7 * 2] | 4;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          *(int *)(param_1 + 0x54) = iVar11;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
    }
  }
  else {
    if (iVar2 != 5) {
      if (iVar2 == 4) {
        if (iVar11 == *(int *)(param_1 + 0x54)) {
          return 0;
        }
        uVar4 = *(uint *)(param_1 + 0x48);
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          return 0;
        }
        if (Music != 0) {
          return 0;
        }
        if ((uVar1 & 0x10) == 0) {
          idol::PRINT_m_LoadGameFile(uVar4,"pMon->base[index]");
        }
        else {
          FUN_00503434(uVar4,"pMon->base[index]");
        }
        if (*(uint *)(param_1 + 0x30) < 0x10) {
          uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                         [*(uint *)(param_1 + 0x30)]);
        }
        else {
          uVar6 = 0;
        }
        libc::snprintf(acStack_150,"%s[%d]",uVar6,lVar10);
        iVar2 = DAT_00902e9c;
        libc::snprintf(acStack_d0,"%s.ps3",acStack_150);
        fios::LoadAssetFromFile(acStack_d0,loaders::g_NpcBuffer,0x100000);
        piVar5 = loaders::g_NpcBuffer;
        libc::snprintf(acStack_d0,"%s.vram",acStack_150);
        fios::LoadAssetFromFile(acStack_d0,DAT_00a10924,0x200000);
        iVar7 = piVar5[1];
        iVar8 = *piVar5 + (DAT_00a10924 - *(int *)(iVar2 + 0x4ac));
        iVar2 = piVar5[2];
        iVar3 = piVar5[3];
        *piVar5 = iVar8;
        *(int *)(param_1 + 100) = iVar8;
        *(int *)(param_1 + 0x68) = iVar7;
        *(int *)(param_1 + 0x6c) = iVar2;
        *(int *)(param_1 + 0x70) = iVar3;
        iVar7 = piVar5[5];
        iVar2 = piVar5[6];
        iVar3 = piVar5[7];
        *(int *)(param_1 + 0x74) = piVar5[4];
        *(int *)(param_1 + 0x78) = iVar7;
        *(int *)(param_1 + 0x7c) = iVar2;
        *(int *)(param_1 + 0x80) = iVar3;
        *(int *)(param_1 + 0x84) = piVar5[8];
        *(undefined1 *)(param_1 + 0xac) = 1;
        *(int *)(param_1 + 0x50) = iVar11;
        *(undefined4 *)(param_1 + 0x44) = 2;
        return 0;
      }
      if (iVar2 != 3) {
        if (iVar2 == 2) goto LAB_00148e14;
        if (iVar2 != 1) {
          if (iVar2 != 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x48) == 0) {
            return 0;
          }
          if (Music != 0) {
            return 0;
          }
          if (*(uint *)(param_1 + 0x30) < 0x10) {
            uVar6 = ZEXT48((&PTR_s_rc1_ps3data_global_mission_ss_mi_00729854)
                           [*(uint *)(param_1 + 0x30)]);
          }
          else {
            uVar6 = 0;
          }
          libc::snprintf(acStack_350,"%s[%d]",uVar6,lVar10);
          libc::snprintf(acStack_2d0,"%s.ps3",acStack_350);
          fios::LoadAssetFromFile(acStack_2d0,loaders::g_NpcBuffer,0x100000);
          piVar5 = loaders::g_NpcBuffer;
          libc::snprintf(acStack_2d0,"%s.vram",acStack_350);
          iVar8 = fios::LoadAssetFromFile(acStack_2d0,DAT_00a10924,0x200000);
          iVar2 = piVar5[1];
          iVar9 = *piVar5 + (DAT_00a10924 - *(int *)(iVar7 + 0x4ac));
          iVar7 = piVar5[2];
          iVar3 = piVar5[3];
          *piVar5 = iVar9;
          *(int *)(param_1 + 100) = iVar9;
          *(int *)(param_1 + 0x68) = iVar2;
          *(int *)(param_1 + 0x6c) = iVar7;
          *(int *)(param_1 + 0x70) = iVar3;
          iVar7 = piVar5[5];
          iVar2 = piVar5[6];
          iVar3 = piVar5[7];
          *(int *)(param_1 + 0x74) = piVar5[4];
          *(int *)(param_1 + 0x78) = iVar7;
          *(int *)(param_1 + 0x7c) = iVar2;
          *(int *)(param_1 + 0x80) = iVar3;
          *(int *)(param_1 + 0x84) = piVar5[8];
          *(undefined1 *)(param_1 + 0xac) = 1;
          if (iVar8 < 1) {
            return 0;
          }
          iVar7 = 0;
          do {
            if ((&DAT_00a53098)[iVar7 * 2] == *(int *)(param_1 + 0x48)) {
              (&DAT_00a5309c)[iVar7 * 2] = (&DAT_00a5309c)[iVar7 * 2] | 4;
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 5);
          *(int *)(param_1 + 0x50) = iVar11;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          return 0;
        }
      }
    }
    if (Music == 0) {
      *(int *)(param_1 + 0x44) = iVar2 + 1;
    }
  }
  return 0;
}



//==== 001491f0  ns=pause  size=0x4b4
// sig: undefined ImageWidget_DrawWithText(void)
// callers(0): 
// callees(6): 0006889c draw::Sprite_DrawShape; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007100c draw::FontPrintOpt; 0007b740 help::help_msg_string_by_index; 000e886c memcard::memcard_IsSaveSystemIdle

/* [p2_pause] draw paired with UpdateOptionsMenus
   [p2_pause] draw paired with UpdateOptionsMenus
   [p2_pause] draw paired with UpdateOptionsMenus */

undefined8 pause::ImageWidget_DrawWithText(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  StringId helpmsg;
  undefined8 uVar5;
  int local_70;
  undefined1 local_4c [28];
  
  if (*(int *)(param_1 + 0x44) < 2) {
    if ((*(uint *)(param_1 + 0x34) & 0x100) != 0) {
      iVar4 = memcard::memcard_IsSaveSystemIdle();
      if (iVar4 == 0) {
        stub::STUB_0006d704(0);
        helpmsg = STR_CHECKING_MEMORY_CARD_PS2PLEASE_0x4FB9;
        if (DAT_00a52cd4 != 0) {
          helpmsg = DAT_00a52cd8;
        }
        uVar3 = help::help_msg_string_by_index(helpmsg);
        uVar5 = 0x3ff0000000000000;
        draw::FontPrintOpt(0x3ff0000000000000,local_4c,0x80000000,uVar3,0xffffffffffffffff);
        draw::FontPrintOpt(uVar5,local_4c,0x80000000,uVar3,0xffffffffffffffff);
        draw::FontPrintOpt(uVar5,local_4c,0x80ffa888,uVar3,0xffffffffffffffff);
        stub::STUB_0006d708();
      }
      return 2;
    }
    return 1;
  }
  if ((*(uint *)(param_1 + 0x34) & 4) != 0) {
    iVar4 = *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x48) +
            *(int *)(param_1 + 0x50 + (uint)(3 < *(int *)(param_1 + 0x44)) * 4) * 10;
    if ((*(short *)(iVar4 + 4) == 0) &&
       ((&UnlockableItems.field0_0x0)[*(short *)(iVar4 + 6)] == '\0')) {
      return 1;
    }
    if ((*(short *)(iVar4 + 4) == 1) &&
       ((&MiscLevelFlags.Zoomerator)[*(short *)(iVar4 + 6)] == false)) {
      return 1;
    }
  }
  stub::STUB_0006d704(0);
  if (*(int *)(param_1 + 0x44) < 5) {
    local_70 = *(int *)(param_1 + 100);
  }
  if (local_70 == 0) {
    return 0x10;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 < 0xb) {
    if (iVar4 < 4) {
      if (iVar4 < 1) {
LAB_00149608:
        uVar1 = *(uint *)(param_1 + 0x38);
        uVar2 = *(uint *)(param_1 + 0x3c);
        draw::Sprite_DrawShape
                  (0,0,DAT_00966b8c,DAT_00966b8e,0,0,
                   ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),
                   ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0));
        goto LAB_00149670;
      }
    }
    else if (iVar4 != 6) goto LAB_00149608;
  }
  else {
    if (iVar4 < 0xc) {
      draw::Sprite_DrawShape
                (0,0,(longlong)DAT_00966b8c << 1,DAT_00966b8e,0,0,*(int *)(param_1 + 0x38) << 1,
                 *(undefined4 *)(param_1 + 0x3c));
      goto LAB_00149670;
    }
    if (0xf < iVar4) goto LAB_00149608;
  }
  draw::Sprite_DrawShape
            (0,0,DAT_00966b8c,DAT_00966b8e,0,0,*(undefined4 *)(param_1 + 0x38),
             *(undefined4 *)(param_1 + 0x3c));
LAB_00149670:
  stub::STUB_0006d708();
  return 0x10;
}



//==== 001496a4  ns=pause  size=0x320
// sig: undefined HelpControls_Update(void)
// callers(0): 
// callees(2): 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf
// strings: 00653614: 'rc1/ps3data/global/help_controlsA/help_controlsA[%d]' | 006535f0: '%s.ps3' | 006535f8: '%s.vram' | 0065364c: 'rc1/ps3data/global/help_controlsB/help_controlsB[%d]'

/* [p2_pause] loads help_controlsA/B[%d]
   [p2_pause] loads help_controlsA/B[%d]
   [p2_pause] loads help_controlsA/B[%d] */

undefined8 pause::HelpControls_Update(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char acStack_230 [128];
  char acStack_1b0 [128];
  char acStack_130 [128];
  char acStack_b0 [128];
  
  iVar2 = DAT_00902e9c;
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 < 2) {
    if (-1 < iVar1) {
      if (iVar1 < 1) {
        if ((*(int *)(param_1 + 0x48) != 0) && (Music == 0)) {
          libc::snprintf(acStack_230,"rc1/ps3data/global/help_controlsA/help_controlsA[%d]",
                         g_Language);
          libc::snprintf(acStack_1b0,"%s.ps3",acStack_230);
          fios::LoadAssetFromFile(acStack_1b0,loaders::g_NpcBuffer,0x24);
          piVar3 = loaders::g_NpcBuffer;
          libc::snprintf(acStack_1b0,"%s.vram",acStack_230);
          iVar5 = DAT_00a10924;
          fios::LoadAssetFromFile(acStack_1b0,DAT_00a10924,0x100000);
          iVar1 = piVar3[1];
          iVar4 = *piVar3 + (iVar5 - *(int *)(iVar2 + 0x4ac));
          iVar2 = piVar3[2];
          iVar5 = piVar3[3];
          *piVar3 = iVar4;
          *(int *)(param_1 + 100) = iVar4;
          *(int *)(param_1 + 0x68) = iVar1;
          *(int *)(param_1 + 0x6c) = iVar2;
          *(int *)(param_1 + 0x70) = iVar5;
          iVar1 = piVar3[5];
          iVar2 = piVar3[6];
          iVar5 = piVar3[7];
          *(int *)(param_1 + 0x74) = piVar3[4];
          *(int *)(param_1 + 0x78) = iVar1;
          *(int *)(param_1 + 0x7c) = iVar2;
          *(int *)(param_1 + 0x80) = iVar5;
          *(int *)(param_1 + 0x84) = piVar3[8];
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
      else if (Music == 0) {
        *(int *)(param_1 + 0x44) = iVar1 + 1;
      }
    }
  }
  else if (iVar1 < 3) {
    if ((*(int *)(param_1 + 0x4c) != 0) && (Music == 0)) {
      libc::snprintf(acStack_130,"rc1/ps3data/global/help_controlsB/help_controlsB[%d]",g_Language);
      libc::snprintf(acStack_b0,"%s.ps3",acStack_130);
      fios::LoadAssetFromFile(acStack_b0,loaders::g_NpcBuffer,0x24);
      piVar3 = loaders::g_NpcBuffer;
      libc::snprintf(acStack_b0,"%s.vram",acStack_130);
      iVar5 = DAT_00a10924 + 0x100000;
      fios::LoadAssetFromFile(acStack_b0,iVar5,0x100000);
      iVar1 = piVar3[1];
      iVar4 = *piVar3 + (iVar5 - *(int *)(iVar2 + 0x4ac));
      iVar2 = piVar3[2];
      iVar5 = piVar3[3];
      *piVar3 = iVar4;
      *(int *)(param_1 + 0x88) = iVar4;
      *(int *)(param_1 + 0x8c) = iVar1;
      *(int *)(param_1 + 0x90) = iVar2;
      *(int *)(param_1 + 0x94) = iVar5;
      iVar1 = piVar3[5];
      iVar2 = piVar3[6];
      iVar5 = piVar3[7];
      *(int *)(param_1 + 0x98) = piVar3[4];
      *(int *)(param_1 + 0x9c) = iVar1;
      *(int *)(param_1 + 0xa0) = iVar2;
      *(int *)(param_1 + 0xa4) = iVar5;
      *(int *)(param_1 + 0xa8) = piVar3[8];
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
  }
  else if ((iVar1 < 4) && (Music == 0)) {
    *(int *)(param_1 + 0x44) = iVar1 + 1;
  }
  return 0;
}



//==== 001499c4  ns=pause  size=0x184
// sig: undefined HelpControls_Draw(void)
// callers(0): 
// callees(3): 0006889c draw::Sprite_DrawShape; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708

/* [p2_pause] draws controls image
   [p2_pause] draws controls image
   [p2_pause] draws controls image */

undefined8 pause::HelpControls_Draw(int param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x44) < 4) {
    uVar1 = 0;
  }
  else {
    stub::STUB_0006d704(0);
    draw::Sprite_DrawShape(10,0,0xf6,0x100,0,0,0x100,0x100);
    draw::Sprite_DrawShape(0x100,0,0x100,0x100,0,0,0x100,0x100);
    stub::STUB_0006d708();
    uVar1 = 8;
  }
  return uVar1;
}



//==== 00149b50  ns=pause  size=0x40c
// sig: undefined MapPage_DrawOverlay(void)
// callers(0): 
// callees(4): 000d78a4 hud::Hud_DrawTexQuadF_v2; 00174f80 vuchain::SetGSReg; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend

/* [p2_pause] draws blinking overlays per map::g_MapCurIndex
   [p2_pause] draws blinking overlays per map::g_MapCurIndex
   [p2_pause] draws blinking overlays per map::g_MapCurIndex */

undefined8 pause::MapPage_DrawOverlay(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (map::g_MapCurIndex < 0) {
    uVar2 = 0;
  }
  else {
    if (((map::g_MapCurIndex == 6) || (map::g_MapCurIndex == 0xd)) || (map::g_MapCurIndex == 0x11))
    {
      uVar2 = idol_draw::Blend(0,0,0,0,0,0,0,0);
      vuchain::SetGSReg(0x16,uVar2);
      uVar2 = FUN_00502f08(1,1,0,0,0,0);
      vuchain::SetGSReg(6,uVar2);
      uVar6 = 0;
      dVar8 = (double)(longlong)(int)DAT_00966b8c;
      dVar7 = (double)(longlong)(int)DAT_00966b8e;
      hud::Hud_DrawTexQuadF_v2(0,0,dVar8,dVar7,0,0,&DAT_00a20718);
      uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,0,0);
      vuchain::SetGSReg(0x16,uVar2);
      if (DAT_0159c330 % 0x3c < 0x28) {
        hud::Hud_DrawTexQuadF_v2(uVar6,uVar6,dVar8,dVar7,uVar6,uVar6,&DAT_00a2073c);
      }
      if (DAT_0159c330 % 0x96 < 0x5a) {
        hud::Hud_DrawTexQuadF_v2(uVar6,uVar6,dVar8,dVar7,uVar6,uVar6,&DAT_00a20760);
      }
    }
    else {
      uVar1 = *(uint *)(&DAT_007354d4 + map::g_MapCurIndex * 4) & 0x7fffffff;
      lVar4 = (longlong)((int)((int)((longlong)DAT_00966b8e << 4) + uVar1 * -2) >> 4);
      uVar3 = DAT_0159c330 + map::g_MapCurIndex * 0x2ab;
      dVar8 = (double)(longlong)((int)((int)((longlong)DAT_00966b8c << 4) + uVar1 * -2) >> 4);
      lVar5 = (longlong)
              (int)(uVar3 + (((int)uVar3 >> 0xb) + (uint)((int)uVar3 < 0 && (uVar3 & 0x7ff) != 0)) *
                            -0x800);
      dVar9 = (double)((float)(longlong)(int)*(uint *)(&DAT_007354d4 + map::g_MapCurIndex * 4) *
                      0.0625);
      uVar2 = 0;
      dVar7 = (double)lVar4;
      hud::Hud_DrawTexQuadF_v2
                (dVar9,dVar9,dVar8,dVar7,(double)((float)lVar5 * 0.0625),0,&DAT_00a20718,lVar4,lVar5
                 ,8,8);
      hud::Hud_DrawTexQuadF_v2(dVar9,dVar9,dVar8,dVar7,uVar2,uVar2,&DAT_00a2073c);
      hud::Hud_DrawTexQuadF_v2(dVar9,dVar9,dVar8,dVar7,uVar2,uVar2,&DAT_00a20760);
    }
    uVar2 = 4;
  }
  return uVar2;
}



//==== 00149f88  ns=pause  size=0x4cc
// sig: undefined SlotConfig_Draw(void)
// callers(0): 
// callees(8): 0006cc0c draw::FontPrintMediumLeft; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 00502648 fastfunc::FastAddRots; 005c4988 FUN_005c4988

/* [p2_pause] draw for SlotConfig widget
   [p2_pause] draw for SlotConfig widget
   [p2_pause] draw for SlotConfig widget */

undefined8 pause::SlotConfig_Draw(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  stub::STUB_0006d704(0);
  iVar9 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x24);
  dVar18 = (double)((float)(longlong)iVar9 * 0.5);
  dVar17 = (double)((float)(longlong)iVar8 * 0.5);
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  iVar10 = 0;
  iVar8 = 0;
  dVar16 = (double)((float)(longlong)iVar9 * 0.5 - 40.0);
  do {
    dVar11 = (double)fastfunc::FastAddRots((float)(longlong)iVar10 * 0.7853982 + -1.5707964);
    fVar1 = (float)(dVar11 + 1.570796251296997);
    fVar4 = fVar1;
    if (3.1415925 - fVar1 <= fVar1) {
      fVar4 = 3.1415925 - fVar1;
    }
    if (fVar4 <= -3.1415925 - fVar1) {
      fVar4 = -3.1415925 - fVar1;
    }
    fVar5 = fVar4 * fVar4;
    fVar1 = fVar5 * fVar5 * fVar4;
    fVar3 = fVar5 * fVar1;
    dVar15 = (double)(float)(dVar18 + (double)(float)((double)(fVar4 + fVar5 * fVar4 * -0.16666657 +
                                                               fVar1 * 0.0083330255 +
                                                               fVar3 * -0.0001980741 +
                                                              fVar5 * fVar3 * 2.601887e-06) * dVar16
                                                     ));
    dVar12 = dVar11;
    if ((double)(float)(3.141592502593994 - dVar11) <= dVar11) {
      dVar12 = (double)(float)(3.141592502593994 - dVar11);
    }
    if (dVar12 <= (double)(float)(-3.141592502593994 - dVar11)) {
      dVar12 = (double)(float)(-3.141592502593994 - dVar11);
    }
    dVar11 = (double)(float)(dVar12 * dVar12);
    dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar12));
    dVar14 = (double)(float)(dVar11 * dVar13);
    dVar11 = (double)(float)(dVar17 + (double)(float)((double)((float)(dVar12 + (double)(float)((
                                                  double)(float)(dVar11 * dVar12) *
                                                  -0.16666656732559204)) +
                                                  (float)(dVar13 * 0.008333025500178337) +
                                                  (float)(dVar14 * -0.0001980741071747616) +
                                                  (float)(dVar11 * dVar14) * 2.601887e-06) * dVar16)
                            );
    if (iVar10 == *(int *)(param_1 + 0x50)) {
      iVar7 = FUN_005c4988(((ulonglong)DAT_0159c330 & 0x3f) - 0x20);
      iVar9 = (int)dVar15;
      iVar2 = (int)dVar11;
      hud::DrawFlatOverlay
                (iVar9 + -0x13,iVar2 + -0x13,iVar9 + 0x13,iVar2 + 0x13,
                 (iVar7 + 0x40) * 0x10202 | 0x80000000,0);
      hud::DrawFlatOverlay(iVar9 + -0x12,iVar2 + -0x12,iVar9 + 0x12,iVar2 + 0x12,DAT_00729840,0);
    }
    iVar9 = *(int *)(param_1 + 0x30 + iVar8);
    if (iVar9 == 0) {
      hud::DrawFlatOverlay
                ((int)dVar15 + -0xf,(int)dVar11 + -0xf,(int)dVar15 + 0xf,(int)dVar11 + 0xf,
                 0x40404040,0);
    }
    else {
      uVar6 = 0;
      if ((&g_goldWeaponsArray.field0_0x0)[iVar9] != '\0') {
        uVar6 = 4;
      }
      uVar6 = hud::GetIconFrameTex
                        (*(undefined2 *)
                          (&DAT_00721038 + iVar9 * -4 + (int)((longlong)iVar9 << 4) * 5),uVar6);
      hud::DrawSprite(uVar6,(int)dVar15 + -0x11,(int)dVar11 + -0x11,0x20,0x20,0x80);
    }
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar10 < 8);
  uVar6 = hud::GetIconFrameTex(0xe99e,0);
  hud::DrawSprite(uVar6,8,0x27,0x20,0xffffffffffffffe0,0x80);
  uVar6 = hud::GetIconFrameTex(0xe99e,0);
  hud::DrawSprite(uVar6,*(int *)(param_1 + 0x20) + -10,0x27,0xffffffffffffffe0,0xffffffffffffffe0,
                  0x80);
  draw::FontPrintMediumLeft(0x28,0xf,0x80ffa888,&DAT_00653684,0xffffffffffffffff);
  draw::FontPrintMediumLeft
            (*(int *)(param_1 + 0x20) + -0x3c,0xf,0x80ffa888,&DAT_0065368c,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 2;
}



//==== 0014a460  ns=pause  size=0x40c
// sig: undefined ConfirmDialog_Update(void)
// callers(0): 
// callees(3): 0006dad0 draw::FadeToBlack; 00078178 freeze::DisplayPrompt; 0015d12c sound::PlayMobySound

/* [p2_pause] prompt/FadeToBlack
   [p2_pause] prompt/FadeToBlack
   [p2_pause] prompt/FadeToBlack */

undefined8 pause::ConfirmDialog_Update(undefined8 param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar8 = pad_pressedButton;
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x3c) == 0) {
    if (*(int *)(g_currentMenuPage + 0x40) == iVar5) {
      if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
        if ((pad_pressedButton & 0x10) != 0) {
          if (*(int *)(g_currentMenuPage + 0x38) != 0) {
            g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
            return 0;
          }
          if (g_unclosableMenu == 0) {
            return 0xffffffffffffffff;
          }
        }
        iVar1 = *(int *)(iVar5 + 0x38);
        if (((pad_pressedButton & 0x1000) != 0) && (iVar1 != 0)) {
          *(int *)(iVar5 + 0x38) = iVar1 + -1;
        }
        if (((uVar8 & 0x4000) != 0) &&
           (*(int *)(*(int *)(iVar5 + 0x34) + 0x14 + *(int *)(iVar5 + 0x38) * 0x14) != 0)) {
          *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + 1;
        }
        if ((pad_pressedButton & pad_ConfirmButtonMask) != 0) {
          sound::PlayMobySound(0,0x11,*(MobyInstance **)(iVar5 + 0x14));
          iVar7 = *(int *)(iVar5 + 0x38) * 0x14;
          if ((*(uint *)(*(int *)(iVar5 + 0x34) + 0x10 + iVar7) & 1) == 0) {
            piVar6 = (int *)(*(int *)(iVar5 + 0x34) + 4 + iVar7);
            if (*piVar6 != 0) {
              pbVar2 = (byte *)*piVar6;
              *pbVar2 = (byte)((ulonglong)(LZCOUNT((uint)*pbVar2) << 0x20) >> 0x25);
            }
          }
          else if (DAT_00a52e60 == 0) {
            draw::FadeToBlack(4);
            auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
                     (undefined1  [16])0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x3c,
                               param_1);
            *(undefined4 *)(iVar5 + 0x3cU & 0xfffffffc) = uVar3;
            DAT_00a52e60 = (byte)((ulonglong)(LZCOUNT((uint)DAT_00a52e60) << 0x20) >> 0x25);
          }
          else {
            freeze::DisplayPrompt(6,g_currentMenuPage,0);
          }
        }
        if (*(int *)(iVar5 + 0x38) != iVar1) {
          sound::PlayMobySound(1,0x11,*(MobyInstance **)(iVar5 + 0x14));
        }
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + -1;
    uVar9 = 0;
    auVar4 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    auVar4 = (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60) >> 0x60 &
             (undefined1  [16])0xffffffff;
    boot::SceneScreenFade =
         (float)storeVectorElementWordIndexed
                          (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0,0x95cf10);
  }
  return uVar9;
}



//==== 0014a86c  ns=pause  size=0x2f8
// sig: undefined ConfirmDialog_Draw(void)
// callers(0): 
// callees(8): 0006a510 draw::FontPrintMediumOpt; 0006cc0c draw::FontPrintMediumLeft; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070130 draw::FontPrintMediumRight; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend

/* [p2_pause] draw
   [p2_pause] draw
   [p2_pause] draw */

undefined8 pause::ConfirmDialog_Draw(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  StringId *pSVar7;
  StringId helpmsg;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  undefined1 local_80 [24];
  
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar2);
  stub::STUB_0006d704(0);
  if (((*(uint *)(param_1 + 0x30) & 1) != 0) && (**(int **)(param_1 + 0x34) == 0)) {
    uVar2 = help::help_msg_string_by_index(STR_NO_CHEATS_ACTIVATED);
    draw::FontPrintMediumOpt(local_80,0x80ffa888,uVar2,0xffffffffffffffff);
  }
  iVar9 = 0;
  if (**(int **)(param_1 + 0x34) != 0) {
    iVar4 = 0;
    iVar9 = 0;
    do {
      iVar4 = iVar4 + 0x14;
      iVar9 = iVar9 + 1;
    } while (*(int *)(*(int *)(param_1 + 0x34) + iVar4) != 0);
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar8 = 0;
  iVar10 = iVar4 / (iVar9 + 1) + -8;
  if (**(int **)(param_1 + 0x34) != 0) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pSVar7 = (StringId *)(*(int *)(param_1 + 0x34) + iVar6);
      uVar2 = 0xffffffff80ffa888;
      if (iVar8 == *(int *)(param_1 + 0x38)) {
        uVar2 = 0xffffffff8020ffff;
      }
      cVar11 = '\0';
      if ((char *)pSVar7[1] != (char *)0x0) {
        cVar11 = *(char *)pSVar7[1];
      }
      uVar3 = help::help_msg_string_by_index(*pSVar7);
      draw::FontPrintMediumLeft(0xc,iVar10,uVar2,uVar3,0xffffffffffffffff);
      iVar1 = *(int *)(param_1 + 0x20);
      if (cVar11 == '\0') {
        helpmsg = pSVar7[3];
      }
      else {
        helpmsg = pSVar7[2];
      }
      uVar2 = help::help_msg_string_by_index(helpmsg);
      draw::FontPrintMediumRight(iVar1 + -0xc,iVar10,0x80ffa888,uVar2,0xffffffffffffffff);
      iVar5 = iVar5 + 0x14;
      iVar10 = iVar10 + iVar4 / (iVar9 + 1);
      iVar6 = iVar6 + 0x14;
      iVar8 = iVar8 + 1;
    } while (*(int *)(*(int *)(param_1 + 0x34) + iVar5) != 0);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014ab64  ns=pause  size=0x218
// sig: undefined CameraSettings_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* [p2_pause] update callback paired with DrawCameraSettingsFrame
   [p2_pause] update callback paired with DrawCameraSettingsFrame
   [p2_pause] update callback paired with DrawCameraSettingsFrame */

undefined8 pause::CameraSettings_Update(undefined **param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar3 = pad_pressedButton;
  if (*(undefined ***)(g_currentMenuPage + 0x40) == param_1) {
    if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
      if ((pad_pressedButton & 0x10) != 0) {
        if (*(int *)(g_currentMenuPage + 0x38) != 0) {
          g_nextMenuPage = *(int *)(g_currentMenuPage + 0x38);
          return 0;
        }
        if (g_unclosableMenu == 0) {
          return 0xffffffffffffffff;
        }
      }
      puVar1 = param_1[0xe];
      if (((pad_pressedButton & 0x1000) != 0) && (puVar1 != (undefined *)0x0)) {
        param_1[0xe] = puVar1 + -1;
      }
      if (((uVar3 & 0x4000) != 0) && (*(int *)(param_1[0xd] + (int)param_1[0xe] * 0x20 + 0x20) != 0)
         ) {
        param_1[0xe] = param_1[0xe] + 1;
      }
      if (puVar1 != param_1[0xe]) {
        sound::PlayMobySound(1,0x11,(MobyInstance *)param_1[5]);
      }
      for (uVar5 = 0; iVar6 = (int)uVar5,
          iVar6 < 6 &&
          *(int *)(param_1[0xd] + (int)((uVar5 & 0xffffffff) << 2) + (int)param_1[0xe] * 0x20 + 8)
          != 0; uVar5 = uVar5 + 1) {
      }
      if (((pad_pressedButton & pad_ConfirmButtonMask) != 0) &&
         (pbVar2 = *(byte **)(param_1[0xd] + (int)param_1[0xe] * 0x20 + 4), pbVar2 != (byte *)0x0))
      {
        if (param_1 == &PTR_PTR_0072d360) {
          *(int *)pbVar2 = (*(int *)pbVar2 + 1) - ((*(int *)pbVar2 + 1) / iVar6) * iVar6;
        }
        else {
          *pbVar2 = (char)(*pbVar2 + 1) - (char)((int)(*pbVar2 + 1) / iVar6) * (char)uVar5;
        }
        sound::PlayMobySound(0,0x11,(MobyInstance *)param_1[5]);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



//==== 0014ad88  ns=pause  size=0x48c
// sig: undefined DrawCameraSettingsFrame(void)
// callers(0): 
// callees(10): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006fda4 draw::FontPrint_unk; 0006ff88 draw::FontPrintRightWithScale; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000d8364 hud::DrawSprite2; 00174f80 vuchain::SetGSReg; 00502f7c idol_draw::Blend
// strings: 0014ad80: '?fffA@' (raw)

undefined8 pause::DrawCameraSettingsFrame(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  StringId *pSVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined8 uVar15;
  
  uVar4 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar4);
  stub::STUB_0006d704(0);
  uVar4 = 0x3fecccccc0000000;
  if (g_Language < 4) {
    uVar15 = 0x3ff0000000000000;
    if (1 < g_Language) {
      uVar15 = uVar4;
    }
  }
  else {
    uVar15 = uVar4;
    if ((4 < g_Language) && (uVar15 = 0x3ff0000000000000, g_Language < 6)) {
      uVar15 = uVar4;
    }
  }
  iVar12 = 0;
  if (*(int *)param_1[0xd] != 0) {
    iVar13 = 0;
    iVar12 = 0;
    do {
      iVar13 = iVar13 + 0x20;
      iVar12 = iVar12 + 1;
    } while (*(int *)(param_1[0xd] + iVar13) != 0);
  }
  puVar1 = param_1[9];
  iVar11 = 0;
  iVar13 = (int)puVar1 / (iVar12 + 1) + -8;
  if (*(int *)param_1[0xd] != 0) {
    iVar8 = 0;
    iVar7 = 0;
    do {
      uVar6 = 0x80ffa888;
      pSVar10 = (StringId *)(param_1[0xd] + iVar8);
      if (((iVar11 == 3) && (param_1 == &PTR_PTR_0072d360)) &&
         (*(char *)(g_viewMtxPtr + 0x185a4) != '\0')) {
        iVar3 = iRam0072d380 >> 1;
        iVar9 = iVar13 + 4;
        uVar4 = 0x4028000000000000;
        if (param_1[0xe] == (undefined *)0x3) {
          uVar6 = 0x8020ffff;
        }
        uVar5 = help::help_msg_string_by_index(STR_D_LEVEL);
        draw::FontPrint_unk(uVar4,(double)(longlong)iVar9,uVar15,uVar5,(longlong)iVar9,uVar6,uVar5,
                            0xffffffffffffffff);
        hud::DrawFlatOverlay(iVar3 + 0x57,iVar9,iRam0072d380 + -10,iVar13 + 0x12,0x80696969,0);
        hud::DrawFlatOverlay(iVar3 + 0x59,iVar13 + 5,iRam0072d380 + -0xc,iVar13 + 0xf,0x80383838,0);
        iVar9 = ((iRam0072d380 - (iVar3 + 0x50)) + -0x15) * DAT_00a52e64;
        uVar4 = hud::GetIconFrameTex(0xe99e,8);
        hud::DrawSprite2(uVar4,iVar3 + 0x59,iVar13 + 5,iVar3 + 0x50 + iVar9 / 5 + 8,iVar13 + 0xe,0,
                         0x13,0x35);
        iVar13 = iVar13 + 6;
      }
      else {
        uVar4 = 0x4028000000000000;
        dVar14 = (double)(longlong)iVar13;
        help::help_msg_string_by_index(*pSVar10);
        draw::FontPrint_unk(uVar4,dVar14,uVar15);
        puVar2 = param_1[8];
        uVar4 = help::help_msg_string_by_index(pSVar10[*(int *)pSVar10[1] + 2]);
        draw::FontPrintRightWithScale
                  (uVar15,puVar2 + -0xc,iVar13,0x80ffa888,uVar4,0xffffffffffffffff);
      }
      iVar13 = iVar13 + (int)puVar1 / (iVar12 + 1);
      iVar7 = iVar7 + 0x20;
      iVar8 = iVar8 + 0x20;
      iVar11 = iVar11 + 1;
    } while (*(int *)(param_1[0xd] + iVar7) != 0);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014b214  ns=pause  size=0x118
// sig: undefined GoldWeapons_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] builds list from g_goldWeaponsArray
   [p2_pause] builds list from g_goldWeaponsArray
   [p2_pause] builds list from g_goldWeaponsArray */

undefined8 pause::GoldWeapons_OnEnter(void)

{
  undefined uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined2 uVar9;
  
  iVar7 = 0;
  lVar8 = 0;
  iVar6 = 0;
  do {
    sVar5 = *(short *)((int)&DAT_0072a702 + iVar6);
    if ((&UnlockableItems.field0_0x0)[sVar5] != '\0') {
      iVar4 = sVar5 * 0x10 + ((int)sVar5 + sVar5 * -0x10) * -4;
      iVar3 = (int)lVar8 * 2 + (int)(lVar8 << 3);
      uVar9 = 0;
      uVar1 = (&g_goldWeaponsArray.field0_0x0)[sVar5];
      *(undefined2 *)((int)&DAT_00a530c0 + iVar3) = *(undefined2 *)(&DAT_00721038 + iVar4);
      if (uVar1 != '\0') {
        uVar9 = 4;
      }
      uVar1 = (&g_goldWeaponsArray.field0_0x0)[sVar5];
      *(undefined2 *)((int)&DAT_00a530c0 + iVar3 + 2) = uVar9;
      *(undefined2 *)((int)&DAT_00a530c4 + iVar3) = 0;
      *(short *)((int)&DAT_00a530c4 + iVar3 + 2) = sVar5;
      *(short *)((int)&DAT_00a530c8 + iVar3) = (short)iVar7;
      if (uVar1 == '\0') {
        sVar5 = *(short *)(iVar4 + 0x721040);
      }
      else {
        sVar5 = *(short *)(iVar4 + 0x721042);
      }
      lVar2 = lVar8 << 2;
      lVar8 = lVar8 + 1;
      *(int *)(&DAT_00a53158 + (int)lVar2) = (int)sVar5;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 10;
  } while (iVar7 < 0xf);
  DAT_0072c4f4 = (int)lVar8;
  return 0;
}



//==== 0014b32c  ns=pause  size=0x14c
// sig: undefined Weapons_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] builds weapon list from UnlockableItems
   [p2_pause] builds weapon list from UnlockableItems
   [p2_pause] builds weapon list from UnlockableItems */

void pause::Weapons_OnEnter(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  lVar8 = 0;
  iVar5 = 0;
  do {
    if (iVar7 < 6) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else if (iVar7 < 9) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else if (iVar7 < 0xc) {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    else {
      iVar6 = (int)*(short *)((int)&DAT_0072a21e + iVar5);
    }
    if ((&UnlockableItems.field0_0x0)[iVar6] != '\0') {
      iVar3 = (int)lVar8 * 2 + (int)(lVar8 << 3);
      sVar1 = *(short *)(iVar6 * 0x4c + 0x721040);
      sVar2 = *(short *)(&DAT_00721044 + iVar6 * 0x13);
      iVar4 = (int)(lVar8 << 2);
      *(undefined2 *)((int)&DAT_00a53194 + iVar3) = *(undefined2 *)(&DAT_00721038 + iVar6 * 0x4c);
      *(undefined2 *)((int)&DAT_00a53196 + iVar3) = 0;
      *(undefined2 *)((int)&DAT_00a53198 + iVar3) = 0;
      *(short *)((int)&DAT_00a5319a + iVar3) = (short)iVar6;
      *(short *)((int)&DAT_00a5319c + iVar3) = (short)iVar7;
      lVar8 = lVar8 + 1;
      *(int *)(&DAT_00a53220 + iVar4) = (int)sVar1;
      *(int *)(&DAT_00a53258 + iVar4) = (int)sVar2;
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 10;
  } while (iVar7 < 0xe);
  DAT_0072c8bc = (int)lVar8;
  return;
}



//==== 0014b478  ns=stub  size=0x8
// sig: undefined STUB_0014b478(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_0014b478(void)

{
  return 0;
}



//==== 0014b480  ns=pause  size=0x138
// sig: undefined PlanetList_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] builds list from GalacticMap/PlanetsPage
   [p2_pause] builds list from GalacticMap/PlanetsPage
   [p2_pause] builds list from GalacticMap/PlanetsPage */

void pause::PlanetList_OnEnter(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  while ((iVar3 = (int)uVar2, iVar3 < 0x14 &&
         (iVar4 = (int)((uVar2 & 0xffffffff) << 2), *(int *)((int)GalacticMap + iVar4) != 0))) {
    iVar4 = *(int *)((int)GalacticMap + iVar4);
    iVar3 = iVar3 * 0xc;
    *(short *)(&DAT_00a53290 + iVar3) = (short)PlanetsPage[iVar4].nameId;
    uVar2 = uVar2 + 1;
    *(undefined2 *)(&DAT_00a53292 + iVar3) = 1;
    *(undefined4 *)(&DAT_00a53294 + iVar3) = 0;
    *(short *)(&DAT_00a53298 + iVar3) = (short)PlanetsPage[iVar4].subPlanetNameId;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar1 = ptr_GalacticMap;
  iVar4 = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x8000;
  *(undefined2 *)(&DAT_00a53290 + iVar3 * 0xc) = 0;
  iVar3 = *(int *)puVar1;
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    if (g_SelectedLevel == *(int *)(ptr_GalacticMap + iVar4 * 4)) break;
    iVar4 = iVar4 + 1;
    iVar3 = *(int *)(ptr_GalacticMap + iVar4 * 4);
  }
  *(int *)(param_1 + 0x40) = iVar4;
  return;
}



//==== 0014b5b8  ns=pause  size=0x3c
// sig: undefined GalacticMap_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame
   [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame
   [p2_pause] confirm -> page 0x72dc78; paired with DrawGalacticMapFrame */

undefined8 pause::GalacticMap_Update(void)

{
  if ((pad_pressedButton & pad_ConfirmButtonMask) != 0) {
    g_nextMenuPage = &DAT_0072dc78;
  }
  return 0;
}



//==== 0014b5f4  ns=pause  size=0xb4
// sig: undefined DrawGalacticMapFrame(void)
// callers(0): 
// callees(3): 004d27b0 idol_draw::DrawGalacticMapFrame; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00653690: 'Galactic Map Draw'

undefined8 pause::DrawGalacticMapFrame(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x24);
  idol_draw::RsxCmd_DebugStr_Marker(HUD_Pass,"Galactic Map Draw");
  idol_draw::DrawGalacticMapFrame(iVar1,iVar1 + iVar2,iVar3,iVar3 + iVar4);
  idol_draw::RsxCmd_WritePass(HUD_Pass);
  return 2;
}



//==== 0014b6a8  ns=pause  size=0x124
// sig: undefined PlanetSelect_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* [p2_pause] planet page input
   [p2_pause] planet page input
   [p2_pause] planet page input */

undefined8 pause::PlanetSelect_Update(int param_1)

{
  if ((pad_pressedButton & 0x10) == 0) {
    if ((pad_pressedButton & 0x800) != 0) {
      g_SelectedLevel = Level;
      return 1;
    }
    if ((pad_pressedButton & 0x40) != 0) {
      sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      return 1;
    }
    if ((pad_pressedButton & 0x20) != 0) {
      resumeScreen = 0xf;
      resumePage = g_currentMenuPage;
      g_menuClosing = 3;
      DAT_00a52c90 = g_SelectedLevel;
      sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  return 0;
}



//==== 0014b7cc  ns=pause  size=0x54
// sig: undefined MessageBox_OnEnter(void)
// callers(0): 
// callees(1): 00148538 pause::Menu_AllocStreamBuffer

undefined8 pause::MessageBox_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(g_currentMenuPage + 0x84) = 0;
  uVar1 = Menu_AllocStreamBuffer(0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  return 0;
}



//==== 0014b820  ns=pause  size=0xe8
// sig: undefined MessageBox_OnExit(void)
// callers(0): 
// callees(1): 0011d9e0 music::music_StopLoad

undefined8 pause::MessageBox_OnExit(int param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = DAT_00a52c7b;
  uVar3 = 0;
  while ((iVar1 = (int)((uVar3 & 0xffffffff) << 3),
         *(int *)((int)&DAT_00a53098 + iVar1) != *(int *)(param_1 + 0x54) ||
         ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) == 0))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
LAB_0014b8dc:
      *(undefined4 *)(param_1 + 0x54) = 0;
      return 0;
    }
  }
  if (((*(uint *)((int)&DAT_00a5309c + iVar1) & 4) != 0) &&
     (*(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) ^ 4,
     cVar2 != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) & 0xfffffffd;
  goto LAB_0014b8dc;
}



//==== 0014b908  ns=pause  size=0x98
// sig: undefined MessageBox_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] confirm/triangle back
   [p2_pause] confirm/triangle back
   [p2_pause] confirm/triangle back */

void pause::MessageBox_Update(void)

{
  if ((memcard::g_CardState == 0x10) || (memcard::g_CardState == 1)) {
    if ((g_buttonsPressedThisFrame & DAT_00902ed8) == 0) {
      if ((g_buttonsPressedThisFrame & TRIANGLE) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        *(undefined4 *)(g_currentMenuPage + 0x84) = 0;
      }
    }
    else {
      DAT_00a52c84 = 0;
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      *(undefined4 *)(g_currentMenuPage + 0x84) = 1;
    }
  }
  else {
    g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
  }
  return;
}



//==== 0014b9a8  ns=pause  size=0x270
// sig: undefined MessageBox_Draw(void)
// callers(0): 
// callees(7): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007100c draw::FontPrintOpt; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f7c idol_draw::Blend

/* [p2_pause] '(error)' fallback
   [p2_pause] '(error)' fallback
   [p2_pause] '(error)' fallback */

undefined8 pause::MessageBox_Draw(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_50 [32];
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  vuchain::SetGSReg(0x16,uVar1);
  stub::STUB_0006d704(0);
  pcVar2 = "(error)";
  if (DAT_00a52c84 < 3) {
    if (-1 < DAT_00a52c84) {
      pcVar2 = (char *)help::help_msg_string_by_index(STR_A_RATCHET_AND_CLANK_0x4FB3);
    }
  }
  else if (DAT_00a52c84 < 4) {
    pcVar2 = (char *)help::help_msg_string_by_index(STR_SAVING_DATAPLEASE_DO_NOT_0x4FB5);
  }
  uVar1 = 0x3ff0000000000000;
  draw::FontPrintOpt(0x3ff0000000000000,local_50,0x80000000,pcVar2,0xffffffffffffffff);
  draw::FontPrintOpt(uVar1,local_50,0x80000000,pcVar2,0xffffffffffffffff);
  draw::FontPrintOpt(uVar1,local_50,0x80ffa888,pcVar2,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 2;
}



//==== 0014bc18  ns=pause  size=0x80
// sig: undefined LevelTips_OnEnter(void)
// callers(0): 
// callees(0): 

/* [p2_pause] selects string list by Level%19
   [p2_pause] selects string list by Level%19
   [p2_pause] selects string list by Level%19 */

undefined8 pause::LevelTips_OnEnter(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_00731780 != Level) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  uVar2 = (ulonglong)Level;
  uVar1 = uVar2 * 0xaf286bcb >> 0x20;
  DAT_00731780 = Level;
  *(undefined **)(param_1 + 0x34) =
       (&PTR_DAT_0072ff98)
       [(int)(uVar2 + ((((uVar2 - uVar1 << 0x20) >> 0x21) + uVar1 << 0x20) >> 0x24) * -0x13)];
  return 0;
}



//==== 0014bc98  ns=pause  size=0x154
// sig: undefined MenuCycle30_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

undefined8 pause::MenuCycle30_Update(int param_1)

{
  int iVar1;
  
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((g_buttonsPressedThisFrame & CROSS) == 0) {
    if ((g_buttonsPressedThisFrame & CIRCLE) != 0) {
      *(int *)(param_1 + 0x40) = (iVar1 + 0x1d) % 0x1e;
    }
  }
  else {
    *(int *)(param_1 + 0x40) = (iVar1 + 1) % 0x1e;
  }
  if (*(int *)(param_1 + 0x40) != iVar1) {
    sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  return 0;
}



//==== 0014bdec  ns=pause  size=0x170
// sig: undefined MenuCycle12_Update(void)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

undefined8 pause::MenuCycle12_Update(int param_1)

{
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((g_buttonsPressedThisFrame & (RIGHT|CROSS)) == 0) {
    if ((g_buttonsPressedThisFrame & (LEFT|CIRCLE)) != 0) {
      *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) + 0xb) % 0xc;
      sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    *(int *)(param_1 + 0x54) = (*(int *)(param_1 + 0x54) + 1) % 0xc;
    sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
  }
  return 0;
}



//==== 0014bf78  ns=pause  size=0x210
// sig: undefined MenuIconText_Draw(void)
// callers(0): 
// callees(6): 0006cc0c draw::FontPrintMediumLeft; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 000ca3e4 hud::GetIconFrameTex; 000d6bf8 hud::Hud_GetTexIndex; 000d7f88 hud::Hud_DrawTexQuadF_v4

undefined8 pause::MenuIconText_Draw(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_60 [8];
  undefined1 local_58 [32];
  
  stub::STUB_0006d704(0);
  uVar6 = 0x40030a3d80000000;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    draw::FontPrintMediumLeft
              (*(int *)(param_1 + 0x20) + -0x18,
               ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + -8,0x80ffa888,
               local_58,0xffffffffffffffff);
    uVar7 = 0x4037000000000000;
    uVar5 = 0x402e000000000000;
    uVar4 = 0x4020000000000000;
    uVar3 = 0x4030000000000000;
    uVar6 = 0x40163d70a0000000;
    iVar2 = hud::GetIconFrameTex(0x40163d70a0000000,0x4030000000000000,0xe99e,6);
    hud::Hud_GetTexIndex(iVar2);
    hud::Hud_DrawTexQuadF_v4(uVar7,uVar5,uVar4,uVar3,uVar6);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24);
    draw::FontPrintMediumLeft
              (4,((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0) + -8,0x80ffa888,
               local_60,0xffffffffffffffff);
    uVar5 = 0x4038000000000000;
    uVar4 = 0x401c000000000000;
    uVar3 = 0x402c000000000000;
    iVar2 = hud::GetIconFrameTex(0x402c000000000000,0xe99e,6);
    hud::Hud_GetTexIndex(iVar2);
    hud::Hud_DrawTexQuadF_v4(uVar5,uVar5,uVar4,uVar3,uVar6);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014c188  ns=pause  size=0x1e0
// sig: undefined LevelFilter_Draw(void)
// callers(0): 
// callees(4): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index

/* [p2_pause] STR_ALL_LEVELS
   [p2_pause] STR_ALL_LEVELS
   [p2_pause] STR_ALL_LEVELS */

undefined8 pause::LevelFilter_Draw(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x34) + 4 +
                  *(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40) * 0xc);
  stub::STUB_0006d704(0);
  if (iVar1 == -1) {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar5 = help::help_msg_string_by_index(STR_ALL_LEVELS);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),
               ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) + -8,0x80ffa888,uVar5,
               0xffffffffffffffff);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x24);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar5 = help::help_msg_string_by_index(PlanetsPage[iVar1].nameId);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),iVar4 / 3 + -8,
               0x80ffa888,uVar5,0xffffffffffffffff);
    iVar4 = *(int *)(param_1 + 0x24);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar5 = help::help_msg_string_by_index(PlanetsPage[iVar1].subPlanetNameId);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),(iVar4 << 1) / 3 + -8,
               0x80ffa888,uVar5,0xffffffffffffffff);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014c370  ns=pause  size=0x240
// sig: undefined ShowScreenAfterDrekDefeat(void)
// callers(0): 
// callees(8): 0006dad0 draw::FadeToBlack; 00078178 freeze::DisplayPrompt; 000e6fe4 memcard::memcard_RestoreGame; 000e8aa4 memcard::memcard_Save; 00112dc0 mobyutil::MB_UnlockTrophy; 0013e634 pause::PrepareChallengeModeSave; 00151e0c respawn::ClearCheckpointData; 0050027c fastfunc::FastMemCopy32
// strings: 0096c08c: 'None'

undefined8 pause::ShowScreenAfterDrekDefeat(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  longlong local_58;
  
  mobyutil::MB_UnlockTrophy(DREK_THIS);
  cVar1 = g_SkillPoints[0x1d];
  if ((g_buttonsPressedThisFrame & CIRCLE) == 0) {
    if ((g_buttonsPressedThisFrame & CROSS) != 0) {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 1;
        auStack_80[iVar2] = (&DAT_00a0ca7c)[iVar2];
        iVar2 = iVar3;
      } while (iVar3 < 4);
      fastfunc::FastMemCopy32(auStack_78,Cheats,0xc);
      fastfunc::FastMemCopy32(auStack_68,&DAT_0096c080,0xc);
      memcard::memcard_RestoreGame(DAT_00a52c8c);
      iVar2 = 0;
      g_SkillPoints[0x1d] = cVar1;
      do {
        iVar3 = iVar2 + 1;
        (&DAT_00a0ca7c)[iVar2] = auStack_80[iVar2];
        iVar2 = iVar3;
      } while (iVar3 < 4);
      fastfunc::FastMemCopy32(Cheats,auStack_78,0xc);
      fastfunc::FastMemCopy32(&DAT_0096c080,auStack_68,0xc);
      g_goodiesMenuActive = 1;
      mobyutil::MB_UnlockTrophy(DREK_THIS);
      DAT_00a15f39 = 0;
      memcard::memcard_Save(0,-1);
      respawn::ClearCheckpointData();
      local_58 = (longlong)(int)(animationSpeed * 16.5);
      draw::FadeToBlack((int)(animationSpeed * 16.5));
      g_HeroIsOutOfBounds = 1;
      return 0xffffffffffffffff;
    }
  }
  else {
    memcard::g_CardStateFlags = memcard::g_CardStateFlags | 2;
    freeze::DisplayPrompt(3,0x730928,0);
    PrepareChallengeModeSave(0);
  }
  return 0;
}



//==== 0014c5b0  ns=pause  size=0x18
// sig: undefined SecretMenu_OnEnter(void)
// callers(0): 
// callees(0): 

undefined8 pause::SecretMenu_OnEnter(int param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 0;
}



//==== 0014c5d8  ns=pause  size=0xc18
// sig: undefined SecretMenu_Update(void)
// callers(0): 
// callees(0): 

/* [p2_pause] L1+L2+R1+R2+Triangle combo
   [p2_pause] L1+L2+R1+R2+Triangle combo
   [p2_pause] L1+L2+R1+R2+Triangle combo */

undefined8 pause::SecretMenu_Update(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = false;
  if (((((g_downButtons & L1) != 0) && ((g_downButtons & L2) != 0)) && ((g_downButtons & R1) != 0))
     && ((g_downButtons & R2) != 0)) {
    bVar5 = true;
  }
  if ((DAT_00a52c89 == '\0') || ((bVar5 && ((g_downButtons & TRIANGLE) != 0)))) {
    if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
      return 1;
    }
    if ((pad_pressedButton & 0x10) != 0) {
      if (*(int *)(g_currentMenuPage + 0x38) != 0) {
        g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
        return 0;
      }
      if (g_unclosableMenu == 0) {
        return 0xffffffffffffffff;
      }
    }
  }
  iVar4 = (int)param_1;
  iVar6 = *(int *)(iVar4 + 0x40);
  *(int *)(iVar4 + 0x40) = iVar6 + -1;
  if (bVar5) {
    *(int *)(iVar4 + 0x40) = iVar6 + -2;
  }
  iVar6 = 0;
  if (-1 < *(int *)(iVar4 + 0x40)) {
    iVar6 = *(int *)(iVar4 + 0x40);
  }
  iVar1 = *(int *)(iVar4 + 0x50);
  *(int *)(iVar4 + 0x40) = iVar6;
  if (iVar1 < 10) {
    if (iVar1 < 4) {
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          return 0;
        }
        *(int *)(iVar4 + 0x50) = iVar1 + 1;
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
                 (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        DAT_0072e4f8 = 0x50aa;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730b90;
        return 0;
      }
      if (iVar1 < 2) goto LAB_0014c8e0;
      if (2 < iVar1) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x50d5;
        *(undefined4 *)(iVar4 + 0x34) = 0x50d6;
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
        iVar6 = *(int *)(iVar4 + 0x50);
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
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
    }
    else if (iVar1 < 7) {
      if (iVar1 < 5) {
        if (iVar6 != 0) {
          return 0;
        }
        *(undefined4 *)(iVar4 + 0x50) = 5;
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
                 (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        DAT_0072e4f8 = 0x50d7;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730c3c;
        return 0;
      }
      if (iVar1 < 6) goto LAB_0014c8e0;
    }
    else {
      if (iVar1 < 8) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x5107;
        *(undefined **)(iVar4 + 0x34) = &DAT_00730cfc;
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
        iVar6 = *(int *)(iVar4 + 0x50);
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
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
      if (iVar1 < 9) goto LAB_0014c8e0;
    }
  }
  else if (iVar1 < 0xf) {
    if (iVar1 < 0xc) {
      if (iVar1 < 0xb) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0x5136;
        *(undefined4 *)(iVar4 + 0x34) = 0x5137;
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
        iVar6 = *(int *)(iVar4 + 0x50);
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
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        *(undefined4 *)(iVar4 + 0x3c) = 0;
        *(int *)(iVar4 + 0x50) = iVar6 + 1;
        return 0;
      }
      if (iVar6 != 0) {
        return 0;
      }
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
               (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      DAT_0072e4f8 = 0x5138;
      *(undefined **)(iVar4 + 0x34) = &DAT_00730d8c;
      *(undefined4 *)(iVar4 + 0x50) = 0xc;
      return 0;
    }
    if (iVar1 < 0xd) {
LAB_0014c8e0:
      if (iVar6 != 0) {
        return 0;
      }
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(int *)(iVar4 + 0x50) = iVar1 + 1;
      return 0;
    }
    if (0xd < iVar1) {
      if (iVar6 != 0) {
        return 0;
      }
      DAT_0072e4f8 = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0x5143;
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
      iVar6 = *(int *)(iVar4 + 0x50);
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
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(int *)(iVar4 + 0x50) = iVar6 + 1;
      return 0;
    }
  }
  else {
    if (0x11 < iVar1) {
      if (iVar1 < 0x13) {
        if (iVar6 != 0) {
          return 0;
        }
        DAT_0072e4f8 = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0x5175;
        *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
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
                 (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
        *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
        return 0;
      }
      if (0x13 < iVar1) {
        return 0;
      }
      if (iVar6 != 0) {
        return 0;
      }
      if (DAT_00a52c89 == '\0') {
        return 0;
      }
      return 1;
    }
    if (iVar1 < 0x10) {
      if (iVar6 != 0) {
        return 0;
      }
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
               (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
      *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      DAT_0072e4f8 = 0x5144;
      *(undefined **)(iVar4 + 0x34) = &DAT_00730da4;
      *(undefined4 *)(iVar4 + 0x50) = 0x10;
      return 0;
    }
    if (iVar1 < 0x11) goto LAB_0014c8e0;
  }
  iVar6 = *(int *)(iVar4 + 0x3c);
  *(int *)(iVar4 + 0x3c) = iVar6 + 10;
  if (bVar5) {
    *(int *)(iVar4 + 0x3c) = iVar6 + 0x14;
  }
  if (*(int *)(iVar4 + 0x54) != 0) {
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
             (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x40,param_1);
    *(undefined4 *)(iVar4 + 0x40U & 0xfffffffc) = uVar2;
    *(int *)(iVar4 + 0x50) = iVar1 + 1;
  }
  return 0;
}



//==== 0014d1f0  ns=pause  size=0x2ac
// sig: undefined SecretMenu_Draw(void)
// callers(0): 
// callees(7): 0006a510 draw::FontPrintMediumOpt; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f98 FUN_00502f98

undefined8 pause::SecretMenu_Draw(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_50 [14];
  short local_42;
  
  uVar3 = FUN_00502f98(0,0,0,0,0,0,1,1);
  vuchain::SetGSReg(0x16,uVar3);
  uVar3 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar3);
  stub::STUB_0006d704(0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < 0xb) {
    if (iVar1 < 1) goto LAB_0014d464;
    if (iVar1 != 4) goto LAB_0014d364;
  }
  else if (iVar1 < 0x13) {
    if (iVar1 < 0xf) {
      if (0xb < iVar1) {
LAB_0014d364:
        iVar4 = (*(int *)(param_1 + 0x1c) - (*(int *)(param_1 + 0x3c) >> 4)) + 4;
        iVar1 = **(int **)(param_1 + 0x34);
        iVar2 = 0;
        while (iVar1 != -1) {
          uVar3 = help::help_msg_string_by_index(*(StringId *)(*(int *)(param_1 + 0x34) + iVar2));
          draw::FontPrintMediumOpt(local_50,0x80ffa888,uVar3,0xffffffffffffffff);
          iVar4 = iVar4 + local_42 + 10;
          iVar1 = *(int *)(*(int *)(param_1 + 0x34) + iVar2 + 4);
          iVar2 = iVar2 + 4;
        }
        if (iVar4 + 0x18 < *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24)) {
          *(undefined4 *)(param_1 + 0x54) = 1;
        }
        goto LAB_0014d464;
      }
    }
    else if (0xf < iVar1) goto LAB_0014d364;
  }
  else if (0x13 < iVar1) goto LAB_0014d464;
  uVar3 = help::help_msg_string_by_index(*(StringId *)(param_1 + 0x34));
  draw::FontPrintMediumOpt(local_50,0x80ffa888,uVar3,0xffffffffffffffff);
LAB_0014d464:
  stub::STUB_0006d708();
  return 2;
}



//==== 0014d49c  ns=pause  size=0x1a0
// sig: undefined DrawUnusedCompletedGameFrame(void)
// callers(0): 
// callees(6): 0006a510 draw::FontPrintMediumOpt; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000cc0f0 hud::DrawSprite

undefined8 pause::DrawUnusedCompletedGameFrame(void)

{
  undefined8 str;
  undefined1 local_60 [32];
  
  stub::STUB_0006d704(0);
  str = hud::GetIconFrameTex(0xe99a,6);
  hud::DrawSprite(str,4,0xc,0x10,0x10,0x80);
  str = help::help_msg_string_by_index(STR_USE_GOLD_BOLTS_TO_0x5182);
  draw::FontPrintMediumOpt(local_60,0x80ffa888,str,0xffffffffffffffff);
  str = hud::GetIconFrameTex(0xe99a,6);
  hud::DrawSprite(str,4,0x18,0x10,0x10,0x80);
  str = help::help_msg_string_by_index(STR_OBTAIN_ALL_GOLD_WEAPONS_0x5183);
  draw::FontPrintMediumOpt(local_60,0x80ffa888,str,0xffffffffffffffff);
  stub::STUB_0006d708();
  return 2;
}



//==== 0014d63c  ns=pause  size=0x688
// sig: undefined Draw_GameCompletedFrame(void)
// callers(0): 
// callees(17): 000685c4 draw::GetEffectTex; 0006c5dc draw::EnableFontColors; 0006c5ec draw::FontPrintJapanese; 0006c8d0 draw::FontPrint; 0006ccb4 draw::DisableFontColors; 0006cde8 draw::FontLen; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 0011b124 mobyutil::MB_CountGoldWeapons; 0011b1b4 mobyutil::MB_CountGoldBolts; 0011b494 mobyutil::MB_CountSkillPoints; 005cd2a8 libc::snprintf

undefined8 pause::Draw_GameCompletedFrame(int param_1)

{
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar1;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  char acStack_e0 [88];
  
  stub::STUB_0006d704(0);
  iVar8 = *(int *)(param_1 + 0x24) / 5;
  iVar7 = *(int *)(param_1 + 0x24) / 5 + -8;
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_GOLD_0x522F);
  iVar3 = mobyutil::MB_CountGoldBolts();
  libc::snprintf(acStack_e0,pcVar2,iVar3,0x28);
  iVar4 = draw::FontLen(acStack_e0,-1);
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_GOLD_0x5230);
  iVar4 = mobyutil::MB_CountGoldWeapons();
  libc::snprintf(acStack_e0,pcVar2,iVar4,10);
  iVar4 = draw::FontLen(acStack_e0,-1);
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_SKILL_0x5231);
  iVar4 = mobyutil::MB_CountSkillPoints();
  libc::snprintf(acStack_e0,pcVar2,iVar4,0x1e);
  iVar4 = draw::FontLen(acStack_e0,-1);
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  if (g_JapaneseMode == false) {
    puVar6 = &MediumWesternGlyphs;
  }
  else {
    puVar6 = &JapaneseGlyphs;
  }
  uVar5 = 1;
  if (*(int *)(param_1 + 0x20) < iVar3 + 0x18) {
    if (g_JapaneseMode == false) {
      uVar5 = 2;
      puVar6 = &Glyphs;
    }
    else {
      puVar6 = &JapaneseGlyphs;
    }
  }
  draw::DisableFontColors();
  iVar3 = *(int *)(param_1 + 0x20);
  uVar1 = help::help_msg_string_by_index(STR_YOUVE_GOT);
  draw::FontPrintMediumCenter(iVar3 >> 1,iVar7,0x80ffa888,uVar1,0xffffffffffffffff);
  iVar7 = iVar8 + iVar7;
  iVar3 = mobyutil::MB_CountGoldBolts();
  hud::DrawFlatOverlay(6,iVar7 + 4,0x10,iVar7 + 0xe,0x80ffa888,0);
  hud::DrawFlatOverlay(7,iVar7 + 5,0xf,iVar7 + 0xd,DAT_00729840,0);
  if (iVar3 == 0x28) {
    uVar1 = hud::GetIconFrameTex(0xe99e,1);
    hud::DrawSprite(uVar1,0xfffffffffffffffe,iVar7 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_GOLD_0x522F);
  iVar3 = mobyutil::MB_CountGoldBolts();
  libc::snprintf(acStack_e0,pcVar2,iVar3,0x28);
  if (g_JapaneseMode == false) {
    uVar1 = draw::GetEffectTex(uVar5);
    draw::FontPrint(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  else {
    uVar1 = draw::GetEffectTex(uVar5);
    draw::FontPrintJapanese(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  iVar7 = iVar8 + iVar7;
  iVar3 = mobyutil::MB_CountGoldWeapons();
  hud::DrawFlatOverlay(6,iVar7 + 4,0x10,iVar7 + 0xe,0x80ffa888,0);
  hud::DrawFlatOverlay(7,iVar7 + 5,0xf,iVar7 + 0xd,DAT_00729840,0);
  if (iVar3 == 10) {
    uVar1 = hud::GetIconFrameTex(0xe99e,1);
    hud::DrawSprite(uVar1,0xfffffffffffffffe,iVar7 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_GOLD_0x5230);
  iVar3 = mobyutil::MB_CountGoldWeapons();
  libc::snprintf(acStack_e0,pcVar2,iVar3,10);
  if (g_JapaneseMode == false) {
    uVar1 = draw::GetEffectTex(uVar5);
    draw::FontPrint(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  else {
    uVar1 = draw::GetEffectTex(uVar5);
    draw::FontPrintJapanese(0x14,iVar7,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar1,puVar6);
  }
  iVar8 = iVar8 + iVar7;
  iVar3 = mobyutil::MB_CountSkillPoints();
  hud::DrawFlatOverlay(6,iVar8 + 4,0x10,iVar8 + 0xe,0x80ffa888,0);
  hud::DrawFlatOverlay(7,iVar8 + 5,0xf,iVar8 + 0xd,DAT_00729840,0);
  if (iVar3 == 0x1e) {
    uVar1 = hud::GetIconFrameTex(0xe99e,1);
    hud::DrawSprite(uVar1,0xfffffffffffffffe,iVar8 + -9,0x1e,0x1e,0x80);
  }
  pcVar2 = (char *)help::help_msg_string_by_index(STR_D_OF_D_SKILL_0x5231);
  iVar3 = mobyutil::MB_CountSkillPoints();
  libc::snprintf(acStack_e0,pcVar2,iVar3,0x1e);
  if (g_JapaneseMode == false) {
    uVar5 = draw::GetEffectTex(uVar5);
    draw::FontPrint(0x14,iVar8,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar5,puVar6);
  }
  else {
    uVar5 = draw::GetEffectTex(uVar5);
    draw::FontPrintJapanese(0x14,iVar8,0x80ffa888,acStack_e0,0xffffffffffffffff,uVar5,puVar6);
  }
  draw::EnableFontColors();
  stub::STUB_0006d708();
  return 2;
}



//==== 0014dcc4  ns=pause  size=0x1a4
// sig: undefined SaveSlotInfo_Draw(void)
// callers(0): 
// callees(4): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 00070514 draw::FontPrintMediumCenter; 0007b740 help::help_msg_string_by_index

/* [p2_pause] STR_EMPTY
   [p2_pause] STR_EMPTY
   [p2_pause] STR_EMPTY */

undefined8 pause::SaveSlotInfo_Draw(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = (&DAT_0071fa44)[*(int *)(*(int *)(g_currentMenuPage + 0x40) + 0x40) * 7];
  stub::STUB_0006d704(0);
  if (iVar1 == -1) {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x24);
    uVar4 = help::help_msg_string_by_index(STR_EMPTY);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),
               ((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0) + -8,0x80ffa888,uVar4,
               0xffffffffffffffff);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar4 = help::help_msg_string_by_index(PlanetsPage[iVar1].nameId);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),4,0x80ffa888,uVar4,
               0xffffffffffffffff);
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar4 = help::help_msg_string_by_index(PlanetsPage[iVar1].subPlanetNameId);
    draw::FontPrintMediumCenter
              (((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0),0x14,0x80ffa888,uVar4,
               0xffffffffffffffff);
  }
  stub::STUB_0006d708();
  return 2;
}



//==== 0014de68  ns=pause  size=0x50
// sig: undefined SaveLoad_OnEnter(void)
// callers(0): 
// callees(2): 0013af68 pause::Menu_InitStreamBuffers; 00148538 pause::Menu_AllocStreamBuffer

/* [p2_pause] with DrawSaveLoadFrame
   [p2_pause] with DrawSaveLoadFrame
   [p2_pause] with DrawSaveLoadFrame */

undefined8 pause::SaveLoad_OnEnter(int param_1)

{
  undefined4 uVar1;
  
  Menu_InitStreamBuffers(1);
  uVar1 = Menu_AllocStreamBuffer(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 0;
}



//==== 0014deb8  ns=pause  size=0xe8
// sig: undefined SaveLoad_OnExit(void)
// callers(0): 
// callees(1): 0011d9e0 music::music_StopLoad

undefined8 pause::SaveLoad_OnExit(int param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = DAT_00a52c7b;
  uVar3 = 0;
  while ((iVar1 = (int)((uVar3 & 0xffffffff) << 3),
         *(int *)((int)&DAT_00a53098 + iVar1) != *(int *)(param_1 + 0x48) ||
         ((*(uint *)((int)&DAT_00a5309c + iVar1) & 2) == 0))) {
    uVar3 = uVar3 + 1;
    if (4 < (int)uVar3) {
LAB_0014df74:
      *(undefined4 *)(param_1 + 0x48) = 0;
      return 0;
    }
  }
  if (((*(uint *)((int)&DAT_00a5309c + iVar1) & 4) != 0) &&
     (*(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) ^ 4,
     cVar2 != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  *(uint *)((int)&DAT_00a5309c + iVar1) = *(uint *)((int)&DAT_00a5309c + iVar1) & 0xfffffffd;
  goto LAB_0014df74;
}



//==== 0014dfa0  ns=pause  size=0x44c
// sig: undefined SaveGame_Update(void)
// callers(0): 
// callees(6): 00078178 freeze::DisplayPrompt; 000e4c0c map::Map_SaveRevealMask; 000e50bc map::Map_SaveLevelObjectState; 000e886c memcard::memcard_IsSaveSystemIdle; 000e8aa4 memcard::memcard_Save; 0015d12c sound::PlayMobySound

/* [p2_pause] memcard_Save
   [p2_pause] memcard_Save
   [p2_pause] memcard_Save */

undefined8 pause::SaveGame_Update(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  CONTROLLER_INPUT CVar3;
  LevelId LVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(g_currentMenuPage + 0x40) != param_1) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_0072df3c)) && (DAT_0072dfc0 != 0)) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if (*(int *)(param_1 + 0x4c) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x40);
    map::Map_SaveLevelObjectState();
    map::Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    DAT_0071faec = 0;
    DAT_0071fa38 = iVar2;
    DAT_0071fb18 = uVar1;
    memcard::memcard_Save(1,-1);
    DAT_00a52cd4 = 1;
    DAT_00a20884 = 0;
    DAT_00a52cd8 = 0x4fb5;
  }
  *(undefined4 *)(param_1 + 0x4c) = 2;
  iVar2 = *(int *)(param_1 + 0x40);
  if (DAT_00a52cd4 != 0) {
    iVar6 = memcard::memcard_IsSaveSystemIdle();
    LVar4 = Level;
    iVar7 = DAT_0071fa38;
    if ((iVar6 == 0) || (DAT_00a52d00 < 0xb)) {
      return 0;
    }
    DAT_00a52cd4 = 0;
    if (((DAT_0071fb10 != 0) || (DAT_0071fa40 != 0)) || (DAT_00a20884 != 0)) {
      memcard::g_memcardGameSaved = 0;
      memcard::g_CardStateFlags = memcard::g_CardStateFlags | 0x80;
      freeze::DisplayPrompt(3,g_currentMenuPage,0);
      return 0;
    }
    memcard::g_memcardGameSaved = 1;
    (&DAT_0071fa48)[DAT_0071fa38 * 7] = g_boltCount;
    uVar5 = g_FrameCount;
    (&DAT_0071fa44)[iVar7 * 7] = LVar4;
    uVar1 = g_ChallengeMode;
    (&DAT_0071fa50)[iVar7 * 7] = uVar5;
    (&DAT_0071fa4c)[iVar7 * 7] = uVar1;
  }
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((memcard::g_CardState == 0x10) || (memcard::g_CardState == 1)) {
    iVar7 = memcard::memcard_IsSaveSystemIdle();
    if ((iVar7 != 0) && ((10 < DAT_00a52d00 && (DAT_0071fa2c == 9)))) {
      CVar3 = g_buttonsPressedThisFrame;
      if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
        CVar3 = pad_Repeat;
      }
      *(int *)(param_1 + 0x40) = DAT_00a10544;
      if (DAT_00a10544 != 0 && (CVar3 & UP) != 0) {
        *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
      }
      if (((CVar3 & DOWN) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      DAT_00a10544 = *(int *)(param_1 + 0x40);
      if ((CVar3 & pad_ConfirmButtonMask) != 0) {
        if ((&DAT_0071fa44)[*(int *)(param_1 + 0x40) * 7] == -1) {
          *(undefined4 *)(param_1 + 0x4c) = 1;
        }
        else {
          g_nextMenuPage = &DAT_0072df3c;
          DAT_00a52c84 = 0;
          DAT_0072e004 = *(int *)(param_1 + 0x40);
        }
      }
      if (*(int *)(param_1 + 0x40) != iVar2) {
        sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
      }
    }
  }
  else {
    g_nextMenuPage = *(undefined **)(g_currentMenuPage + 0x38);
  }
  return 0;
}



//==== 0014e3ec  ns=pause  size=0x2d4
// sig: undefined SaveLoad_Update2(void)
// callers(0): 
// callees(3): 00078178 freeze::DisplayPrompt; 000e886c memcard::memcard_IsSaveSystemIdle; 0015d12c sound::PlayMobySound

undefined8 pause::SaveLoad_Update2(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (DAT_00a52cd4 != 0) {
    iVar3 = memcard::memcard_IsSaveSystemIdle();
    if ((iVar3 == 0) || (DAT_00a52d00 < 0xb)) {
      return 0;
    }
    DAT_00a52cd4 = 0;
    if (((DAT_0071fb10 != 0) || (DAT_0071fa40 != 0)) || (DAT_00a20884 != 0)) {
      memcard::g_memcardGameSaved = 0;
      memcard::g_CardStateFlags = memcard::g_CardStateFlags | 0x100;
      freeze::DisplayPrompt(3,g_currentMenuPage,0);
      return 0;
    }
  }
  if (((pad_pressedButton & 0xd00) != 0) && (g_unclosableMenu == 0)) {
    return 1;
  }
  if ((pad_pressedButton & 0x10) != 0) {
    if (*(int *)(g_currentMenuPage + 0x38) != 0) {
      g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
      return 0;
    }
    if (g_unclosableMenu == 0) {
      return 0xffffffffffffffff;
    }
  }
  if ((memcard::g_CardState == 0x10) || (memcard::g_CardState == 1)) {
    uVar2 = pad_pressedButton;
    if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
      uVar2 = pad_Repeat;
    }
    *(int *)(param_1 + 0x40) = DAT_00a10544;
    if (DAT_00a10544 != 0 && (uVar2 & 0x1000) != 0) {
      *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
    }
    if (((uVar2 & 0x4000) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
    DAT_00a10544 = *(int *)(param_1 + 0x40);
    if (((uVar2 & pad_ConfirmButtonMask) != 0) &&
       (-1 < (int)(&DAT_0071fa44)[*(int *)(param_1 + 0x40) * 7])) {
      sound::PlayMobySound(0,0x11,*(MobyInstance **)(param_1 + 0x14));
      DAT_0071faec = 0;
      DAT_0071fa38 = *(undefined4 *)(param_1 + 0x40);
      if (DAT_0071fb08 < 0) {
        DAT_0071fb08 = 0xd;
        DAT_0071fb0c = 0;
      }
      DAT_00a52cd4 = 1;
      DAT_00a20884 = 0;
      DAT_00a52cd8 = 0x4fb6;
    }
    if (*(int *)(param_1 + 0x40) != iVar1) {
      sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
    }
  }
  else {
    g_nextMenuPage = *(undefined4 *)(g_currentMenuPage + 0x38);
  }
  return 0;
}



//==== 0014e6c0  ns=pause  size=0x59c
// sig: undefined LoadGame_Update(void)
// callers(0): 
// callees(7): 00078178 freeze::DisplayPrompt; 000e7638 memcard::memcard_ResetGame; 000e886c memcard::memcard_IsSaveSystemIdle; 000e8888 memcard::memcard_PerformOperation; 0013e634 pause::PrepareChallengeModeSave; 0015d12c sound::PlayMobySound; 0015ea84 space::ChangeLevel
// strings: 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET'

/* [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages
   [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages
   [p2_pause] memcard_ResetGame, ChangeLevel; front-end pages */

undefined8 pause::LoadGame_Update(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CONTROLLER_INPUT CVar3;
  uint uVar4;
  LevelId LVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (*(int *)(g_currentMenuPage + 0x40) == param_1) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_007308a0)) && (DAT_00730924 != 0))
    {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if (((*(int *)(param_1 + 0x4c) == 0) && (DAT_00a52c80 == &DAT_00730a00)) && (DAT_00730a84 != 0))
    {
      *(undefined4 *)(param_1 + 0x4c) = 1;
    }
    if (*(int *)(param_1 + 0x4c) == 1) {
      if ((*(uint *)(param_1 + 0x30) & 0x2000) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x48);
        memcard::memcard_ResetGame();
        DAT_0071faec = 0;
        DAT_0071fa38 = iVar1;
        DAT_0071fb18 = uVar2;
        (&DAT_0071fa44)[iVar1 * 7] = 0;
        memcard::memcard_PerformOperation(0);
      }
      else {
        PrepareChallengeModeSave(iVar1);
      }
      DAT_00a52cd4 = 1;
      DAT_00a20884 = 0;
      DAT_00a52cd8 = 0x4fb5;
    }
    *(undefined4 *)(param_1 + 0x4c) = 2;
    if (DAT_00a52cd4 == 0) {
      if (((pad_pressedButton & 0xd00) == 0) || (g_unclosableMenu != 0)) {
        if ((pad_pressedButton & 0x10) != 0) {
          if (*(int *)(g_currentMenuPage + 0x38) != 0) {
            g_nextMenuPage = (undefined *)*(undefined4 *)(g_currentMenuPage + 0x38);
            return 0;
          }
          if (g_unclosableMenu == 0) {
            return 0xffffffffffffffff;
          }
        }
        if ((memcard::g_CardState == 0x10) || (memcard::g_CardState == 1)) {
          CVar3 = g_buttonsPressedThisFrame;
          if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
            CVar3 = pad_Repeat;
          }
          *(int *)(param_1 + 0x40) = DAT_00a10544;
          if (DAT_00a10544 != 0 && (CVar3 & UP) != 0) {
            *(int *)(param_1 + 0x40) = DAT_00a10544 + -1;
          }
          if (((CVar3 & DOWN) != 0) && (*(int *)(param_1 + 0x40) < 4)) {
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
          }
          DAT_00a10544 = *(int *)(param_1 + 0x40);
          if ((CVar3 & CROSS) == 0) {
            if ((CVar3 & CIRCLE) != 0) {
              if ((*(uint *)(param_1 + 0x30) & 0x2000) == 0) {
                memcard::g_memcardGameSaved = 0;
                memcard::g_CardStateFlags = memcard::g_CardStateFlags & 0xfffffff9;
                memcard::memcard_ResetGame();
                space::ChangeLevel(Veldin);
                DAT_0096459a = 1;
                return 0;
              }
              if (memcard::g_memcardGameSaved == 0) {
                memcard::g_memcardGameSaved = 0;
                PrepareChallengeModeSave(0xffffffffffffffff);
                space::ChangeLevel(Veldin);
                DAT_0096459a = 1;
                return 0;
              }
              freeze::DisplayPrompt(7,0,0);
            }
          }
          else {
            iVar8 = *(int *)(param_1 + 0x40);
            if ((&DAT_0071fa44)[iVar8 * 7] == -1) {
              *(undefined4 *)(param_1 + 0x4c) = 1;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x30) & 0x2000;
              if (uVar4 == 0) {
                g_nextMenuPage = &DAT_007308a0;
              }
              else {
                g_nextMenuPage = &DAT_00730a00;
              }
              DAT_00a52c84 = 1;
              DAT_0072e004 = iVar8;
              if (uVar4 != 0) {
                DAT_00a52c84 = 2;
              }
            }
          }
          if (*(int *)(param_1 + 0x40) != iVar1) {
            sound::PlayMobySound(1,0x11,*(MobyInstance **)(param_1 + 0x14));
          }
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          g_nextMenuPage = *(undefined **)(g_currentMenuPage + 0x38);
        }
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      iVar8 = memcard::memcard_IsSaveSystemIdle();
      LVar5 = Level;
      iVar1 = DAT_0071fa38;
      if ((iVar8 == 0) || (DAT_00a52d00 < 0xb)) {
        uVar7 = 0;
      }
      else {
        DAT_00a52cd4 = 0;
        if (((DAT_0071fb10 == 0) && (DAT_0071fa40 == 0)) && (DAT_00a20884 == 0)) {
          memcard::g_memcardGameSaved = 1;
          (&DAT_0071fa48)[DAT_0071fa38 * 7] = g_boltCount;
          uVar6 = g_FrameCount;
          (&DAT_0071fa44)[iVar1 * 7] = LVar5;
          uVar2 = g_ChallengeMode;
          (&DAT_0071fa50)[iVar1 * 7] = uVar6;
          (&DAT_0071fa4c)[iVar1 * 7] = uVar2;
          space::ChangeLevel(Veldin);
          uVar7 = 0;
          DAT_0096459a = 1;
        }
        else if (DAT_00a15f39 == '\0') {
          memcard::g_memcardGameSaved = 0;
          memcard::g_CardStateFlags = memcard::g_CardStateFlags | 0x80;
          freeze::DisplayPrompt(3,g_currentMenuPage,0);
          uVar7 = 0;
        }
        else {
          memcard::g_CardStateFlags = memcard::g_CardStateFlags | 0x80;
          freeze::DisplayPrompt(8,g_currentMenuPage,memcard::g_memcardGameSaved);
          uVar7 = 0;
          memcard::g_memcardGameSaved = 0;
        }
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



//==== 0014ec5c  ns=pause  size=0x58c
// sig: undefined DrawSaveLoadFrame(void)
// callers(0): 
// callees(10): 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006fc54 draw::FontPrintSmallLeft; 00070834 draw::FontPrintSmallCenter; 0007b740 help::help_msg_string_by_index; 000ca3e4 hud::GetIconFrameTex; 000ca72c hud::DrawFlatOverlay; 000cc0f0 hud::DrawSprite; 000e886c memcard::memcard_IsSaveSystemIdle; 005cd2a8 libc::snprintf
// strings: 006536ac: '%02d:%02d' | 006535e0: '%d,%03d' | 006536bc: '%d,%03d,%03d'

undefined8 pause::DrawSaveLoadFrame(int param_1)

{
  uint uVar1;
  int iVar4;
  int iVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char acStack_c0 [88];
  
  iVar10 = 0;
  stub::STUB_0006d704(0);
  iVar11 = 4;
  iVar8 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar9 = iVar5 + -3;
    iVar4 = memcard::memcard_IsSaveSystemIdle();
    if (((iVar4 != 0) && (10 < DAT_00a52d00)) && (*(int *)(param_1 + 0x40) == iVar10)) {
      hud::DrawFlatOverlay(0,iVar11 + -4,iVar5,iVar11 + 0x34,0x8020ffff,0);
      hud::DrawFlatOverlay(3,iVar11 + -1,iVar9,iVar11 + 0x31,DAT_00729840,0);
    }
    hud::DrawFlatOverlay(3,iVar11 + -1,iVar9,iVar11 + 0x31,0x80303030,0);
    iVar5 = memcard::memcard_IsSaveSystemIdle();
    if (((iVar5 != 0) && (10 < DAT_00a52d00)) && (DAT_0071fa2c == 9)) {
      if (*(int *)((int)&DAT_0071fa44 + iVar8) == -1) {
        uVar1 = *(uint *)(param_1 + 0x20);
        uVar2 = help::help_msg_string_by_index(STR_EMPTY);
        draw::FontPrintSmallCenter
                  (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0),iVar11 + 0x10,
                   0x80ffa888,uVar2,0xffffffffffffffff);
      }
      else {
        iVar5 = *(int *)((int)&DAT_0071fa50 + iVar8) / 0x34bc0;
        lVar7 = (longlong)iVar5;
        uVar2 = 0xffffffff80ffa888;
        iVar4 = *(int *)((int)&DAT_0071fa50 + iVar8) / 0xe10 -
                ((int)(lVar7 << 6) - (int)(lVar7 << 2));
        if (*(int *)(param_1 + 0x40) == iVar10) {
          uVar2 = 0xffffffff8020ffff;
        }
        if (99 < iVar5) {
          lVar7 = 99;
          iVar4 = 0x3b;
        }
        libc::snprintf(acStack_c0,"%02d:%02d",lVar7,iVar4);
                    /* Time tex */
        uVar3 = hud::GetIconFrameTex(0xe99e,3);
        hud::DrawSprite(uVar3,4,iVar11,0x10,0x10,0x80);
        draw::FontPrintSmallLeft(0x16,iVar11,uVar2,acStack_c0,0xffffffffffffffff);
        if (*(int *)((int)&DAT_0071fa4c + iVar8) != 0) {
                    /* Challenge mode/replay tex */
          uVar3 = hud::GetIconFrameTex(0xe99e,4);
          hud::DrawSprite(uVar3,0x4e,iVar11,0x10,0x10,0x80);
          iVar5 = 99;
          if (*(int *)((int)&DAT_0071fa4c + iVar8) < 99) {
            iVar5 = *(int *)((int)&DAT_0071fa4c + iVar8);
          }
          libc::snprintf(acStack_c0,"%d",iVar5);
          draw::FontPrintSmallLeft(0x60,iVar11,uVar2,acStack_c0,0xffffffffffffffff);
        }
        puVar6 = &DAT_0098967f;
        if ((int)*(undefined **)((int)&DAT_0071fa48 + iVar8) < 9999999) {
          puVar6 = *(undefined **)((int)&DAT_0071fa48 + iVar8);
        }
        if ((int)puVar6 < 1000) {
          libc::snprintf(acStack_c0,"%d",puVar6);
        }
        else if ((int)puVar6 < 1000000) {
          libc::snprintf(acStack_c0,"%d,%03d",(int)puVar6 / 1000,(int)puVar6 % 1000);
        }
        else {
          libc::snprintf(acStack_c0,"%d,%03d,%03d",(int)puVar6 / 1000000,
                         ((int)puVar6 % 1000000) / 1000,(int)puVar6 % 1000);
        }
                    /* Bolts tex */
        uVar3 = hud::GetIconFrameTex(0x754f,0xf);
        hud::DrawSprite(uVar3,4,iVar11 + 0x10,0x10,0x10,0x80);
        draw::FontPrintSmallLeft(0x16,iVar11 + 0x10,uVar2,acStack_c0,0xffffffffffffffff);
                    /* Date texture */
        uVar3 = hud::GetIconFrameTex(0xe99e,2);
        hud::DrawSprite(uVar3,4,iVar11 + 0x20,0x10,0x10,0x80);
        draw::FontPrintSmallLeft(0x16,iVar11 + 0x20,uVar2,acStack_c0,0xffffffffffffffff);
      }
    }
    iVar5 = 0x1b;
    if (Cutscene != 0) {
      iVar5 = 0x24;
    }
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 0x30 + iVar5;
    iVar8 = iVar8 + 0x1c;
  } while (iVar10 < 5);
  stub::STUB_0006d708();
  return 2;
}



//==== 0014f1f0  ns=pause  size=0x318
// sig: undefined SpawnHeroInMenu?(void)
// callers(0): 
// callees(8): 000aa5e0 hero::Hero_UpdateInScene; 000efa28 mobyfunc::CreateMoby; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 0011d9e0 music::music_StopLoad; 0013af68 pause::Menu_InitStreamBuffers; 00148538 pause::Menu_AllocStreamBuffer; 005001fc fastfunc::FastMemSet

undefined8 pause::SpawnHeroInMenu_(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  int iVar7;
  
                    /* This function comes after pause, and before skyfunc. So the respawn namespace
                       is some bullshit name i cooked up as an assumption for the name of this
                       section
                       
                       Though it's fully possible it could be contained within pause? It's not part
                       of the hero namespace at least */
  Menu_InitStreamBuffers(1);
  if ((Music != 0) && (DAT_00a52c7b != '\0')) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  puVar3 = &g_MenuScreen;
  DAT_00a52e9c = 0;
  DAT_00a5306c = 0;
  g_gadgetIdx = 0xffffffff;
  DAT_00a52cc8 = 0xffffffff;
  DAT_00a52ccc = 0xffffffff;
  DAT_00a52c50 = Menu_AllocStreamBuffer(1);
  DAT_00a52c54 = Menu_AllocStreamBuffer(1);
  DAT_00a52c7a = 0;
  iVar7 = 0;
  DAT_00a52c78 = 0xff;
  DAT_00a52c79 = 0xff;
  do {
    uVar4 = Menu_AllocStreamBuffer(0);
    iVar7 = iVar7 + 1;
    puVar3[0x2c] = uVar4;
    puVar3 = puVar3 + 1;
  } while (iVar7 < 3);
  DAT_00a52da1 = 0;
  DAT_00a52bcc = 0xffffffff;
  DAT_00a52de1 = 0;
  DAT_00a52e21 = 0;
  if (MobyClassLookup == -1) {
    pMVar6 = (MobyInstance *)0x0;
  }
  else {
    pMVar6 = mobyfunc::CreateMoby(RATCHET);
    if (pMVar6 != (MobyInstance *)0x0) {
      pMVar6->updateDistance = -1;
      pMVar6->drawDistance = 0xff;
      pMVar6->enabled = '\x01';
      pMVar6->state = '\0';
      mobyfunc::UpdateMobyTransform(pMVar6);
      mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
    }
  }
  iVar5 = 0x18;
  iVar7 = param_1;
  do {
    iVar5 = iVar5 + -1;
    *(undefined1 *)(iVar7 + 0xa4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar5 != 0);
  if (pMVar6 != (MobyInstance *)0x0) {
    *(MobyInstance **)(param_1 + 0x44) = pMVar6;
    pMVar6->modeBits = NONE;
    piVar1 = (int *)pMVar6->pVar;
    (pMVar6->pos).x = GameCamera.posX + 4.0;
    (pMVar6->pos).y = GameCamera.posY;
    fVar2 = GameCamera.posZ;
    (pMVar6->rotation).z = 3.1415927;
    pMVar6->pUpdate = &PTR_STUB_00150654_007078e0;
    (pMVar6->pos).z = fVar2 - 0.6;
    *piVar1 = param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
    DAT_00a52c70 = 0xffffffff;
    fastfunc::FastMemSet(&DAT_00a1be80,0,0x40);
    hero::Hero_UpdateInScene(pMVar6);
  }
  if (DAT_00a35719 == -1) {
    pMVar6 = (MobyInstance *)0x0;
  }
  else {
    pMVar6 = mobyfunc::CreateMoby(CLANK_BACKPACK);
    if (pMVar6 != (MobyInstance *)0x0) {
      pMVar6->updateDistance = -1;
      pMVar6->drawDistance = 0xff;
      pMVar6->enabled = '\x01';
      pMVar6->state = '\0';
      mobyfunc::UpdateMobyTransform(pMVar6);
      mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
    }
  }
  if (pMVar6 != (MobyInstance *)0x0) {
    *(int *)pMVar6->pVar = param_1;
    pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateD_00707908;
    pMVar6->modeBits = NO_POST_UPDATE;
  }
  *(MobyInstance **)(param_1 + 0x48) = pMVar6;
  return 0;
}



//==== 0014f508  ns=pause  size=0x310
// sig: undefined UpdateAfterEquipGadget(void)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 0011d9e0 music::music_StopLoad

undefined8 pause::UpdateAfterEquipGadget(int param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  MobyInstance *moby;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    puVar6 = (undefined4 *)(param_1 + 0x44 + iVar4);
    moby = (MobyInstance *)*puVar6;
    if (moby != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(moby);
      lVar2 = (longlong)worldUpdateTime;
      moby->color = (int)((ulonglong)lVar2 >> 0x20);
      moby->light = (int)lVar2;
      moby = (MobyInstance *)0x0;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    *puVar6 = moby;
  } while (iVar5 < 0x18);
  iVar4 = 0;
  puVar6 = &g_MenuScreen;
  do {
    if (((&DAT_00a53098)[iVar4 * 2] == DAT_00a52c50) && (((&DAT_00a5309c)[iVar4 * 2] & 2) != 0)) {
      if ((((&DAT_00a5309c)[iVar4 * 2] & 4) != 0) &&
         (bVar1 = DAT_00a52c7b != '\0', (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] ^ 4,
         bVar1)) {
        music::music_StopLoad();
        DAT_00a52c7b = '\0';
      }
      (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] & 0xfffffffd;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  DAT_00a52c50 = 0;
  iVar4 = 0;
  while (((&DAT_00a53098)[iVar4 * 2] != DAT_00a52c54 || (((&DAT_00a5309c)[iVar4 * 2] & 2) == 0))) {
    iVar4 = iVar4 + 1;
    if (4 < iVar4) {
LAB_0014f6ac:
      DAT_00a52c54 = 0;
      DAT_00a52c78 = 0xff;
      DAT_00a52c79 = 0xff;
      DAT_00a52c7a = 0;
      if ((int)DAT_00a52c58 < (int)(DAT_00a52c58 + DAT_00a52c5c)) {
        lVar2 = ((ulonglong)DAT_00a52c58 & 0x1fffffff) << 3;
        uVar3 = DAT_00a52c58;
        do {
          iVar4 = (int)lVar2;
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 8;
          *(undefined4 *)
           (&MobyClasses[(byte)(&MobyClassLookup)[*(int *)(&DAT_007314d0 + iVar4)]]->type +
           *(int *)(&DAT_007314d4 + iVar4) * 4) = 0;
        } while ((int)uVar3 < (int)(DAT_00a52c58 + DAT_00a52c5c));
      }
      iVar4 = 0;
      DAT_00a52c5c = 0;
      do {
        iVar5 = 0;
        do {
          if (((&DAT_00a53098)[iVar5 * 2] == puVar6[0x2c]) &&
             (((&DAT_00a5309c)[iVar5 * 2] & 2) != 0)) {
            if ((((&DAT_00a5309c)[iVar5 * 2] & 4) != 0) &&
               (bVar1 = DAT_00a52c7b != '\0',
               (&DAT_00a5309c)[iVar5 * 2] = (&DAT_00a5309c)[iVar5 * 2] ^ 4, bVar1)) {
              music::music_StopLoad();
              DAT_00a52c7b = '\0';
            }
            (&DAT_00a5309c)[iVar5 * 2] = (&DAT_00a5309c)[iVar5 * 2] & 0xfffffffd;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
        iVar4 = iVar4 + 1;
        puVar6[0x2c] = 0;
        puVar6 = puVar6 + 1;
        if (2 < iVar4) {
          return 0;
        }
      } while( true );
    }
  }
  if ((((&DAT_00a5309c)[iVar4 * 2] & 4) != 0) &&
     (bVar1 = DAT_00a52c7b != '\0', (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] ^ 4,
     bVar1)) {
    music::music_StopLoad();
    DAT_00a52c7b = '\0';
  }
  (&DAT_00a5309c)[iVar4 * 2] = (&DAT_00a5309c)[iVar4 * 2] & 0xfffffffd;
  goto LAB_0014f6ac;
}



//==== 0014f828  ns=pause  size=0xe2c
// sig: undefined MenuHero_Update(void)
// callers(0): 
// callees(12): 00086814 hero::Hero_KillGadget; 0008d7e8 hero::Hero_SetLightsFromMoby; 000e0854 loaders::LoadGadgetModel; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0011d9e0 music::music_StopLoad; 0013ebb0 pause::LoadMenuRatchetModel

/* [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks
   [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks
   [p2_pause] menu hero/gadget model widget update; spawns mobys, sets moby update callbacks */

undefined8 pause::MenuHero_Update(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  MobyInstance *pMVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  iVar10 = DAT_00a52be0;
  pMVar6 = *(MobyInstance **)(param_1 + 0x54);
  uVar9 = 0;
  iVar4 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar4 = (int)(short)pMVar6->oClass;
  }
  uVar7 = (ulonglong)DAT_00a52be0;
  iVar5 = (&DAT_00721010)[DAT_00a52be0 * 4 - (int)(uVar7 * -0xf)];
  if (iVar5 == DAT_00a52ccc && iVar4 != iVar5) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
    }
    if (DAT_00a52da1 != '\0') {
      mobyfunc::DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52da0);
    }
    if ((g_CurrentWeapon != 0) && (iVar10 != g_CurrentWeapon)) {
      hero::Hero_KillGadget(0,0);
    }
    DAT_00a4daec = (uint)LZCOUNT(DAT_00a52cc4) >> 5;
    loaders::LoadGadgetModel(iVar5,-1);
    DAT_00a52cc4 = DAT_00a4daec;
    DAT_00a52cf0 = DAT_00a4daec;
    DAT_00a52cc8 = iVar5;
    DAT_00a52cec = iVar5;
    MobyClasses[(byte)(&MobyClassLookup)[iVar5]]->sound_cnt = '\0';
    if ((&MobyClassLookup)[iVar5] == -1) {
      pMVar6 = (MobyInstance *)0x0;
    }
    else {
      pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar5);
      if (pMVar6 != (MobyInstance *)0x0) {
        pMVar6->updateDistance = -1;
        pMVar6->drawDistance = 0xff;
        pMVar6->enabled = '\x01';
        pMVar6->state = '\0';
        mobyfunc::UpdateMobyTransform(pMVar6);
        mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
      }
    }
    if (pMVar6 != (MobyInstance *)0x0) {
      if ((&g_goldWeaponsArray.field0_0x0)[iVar10] != '\0') {
        hero::Hero_SetLightsFromMoby(pMVar6,*(undefined4 *)(param_1 + 0x44));
      }
      *(int *)pMVar6->pVar = param_1;
      pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateA_007078f0;
      pMVar6->modeBits = NO_POST_UPDATE;
      uVar9 = uVar7;
      if (iVar10 == 0x12) {
        mobyfunc::AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0,&DAT_00a52da0);
        DAT_00a52dc0 = 0;
        DAT_00a52dc4 = 0;
        DAT_00a52dc8 = 0;
      }
    }
    *(MobyInstance **)(param_1 + 0x54) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x50);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52be8 * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        uVar9 = (ulonglong)DAT_00a52be8;
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateB_007078f8;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x50) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x58);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52be4 * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
    }
    pMVar6 = (MobyInstance *)0x0;
    if (DAT_00a52de1 != '\0') {
      mobyfunc::DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52de0);
    }
    if (DAT_00a52e21 != '\0') {
      mobyfunc::DetachManipulator(*(MobyInstance **)(param_1 + 0x44),&DAT_00a52e20);
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        uVar9 = (ulonglong)DAT_00a52be4;
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateC_00707900;
        pMVar6->modeBits = NO_POST_UPDATE;
        mobyfunc::AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0x16,&DAT_00a52de0);
        mobyfunc::AttachManipulator(*(MobyInstance **)(param_1 + 0x44),0x17,&DAT_00a52e20);
        DAT_00a52e00 = 0x3c23d70a;
        DAT_00a52e04 = 0x3c23d70a;
        DAT_00a52e08 = 0x3c23d70a;
        DAT_00a52e40 = 0x3c23d70a;
        DAT_00a52e44 = 0x3c23d70a;
        DAT_00a52e48 = 0x3c23d70a;
      }
    }
    *(MobyInstance **)(param_1 + 0x58) = pMVar6;
    pMVar6 = *(MobyInstance **)(param_1 + 0x5c);
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateC_00707900;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x5c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x4c);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = (&DAT_00721010)[DAT_00a52bec * 0x13];
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateD_00707908;
        pMVar6->modeBits = NO_POST_UPDATE;
        if (pMVar6->oClass == HELIPACK_025F) {
          if (pMVar6->animationId != '\x06') {
            mobyutil::MB_SetAnimation(pMVar6,6,0,10);
          }
          pMVar6->state = '\b';
        }
      }
    }
    *(MobyInstance **)(param_1 + 0x4c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x6c);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.persuader != '\0') {
    iVar4 = 0x197;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x6c) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x70);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.mapOMatic != '\0') {
    iVar4 = 0x266;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x70) = pMVar6;
  }
  pMVar6 = *(MobyInstance **)(param_1 + 0x74);
  iVar10 = -1;
  if (pMVar6 != (MobyInstance *)0x0) {
    iVar10 = (int)(short)pMVar6->oClass;
  }
  iVar4 = -1;
  if (UnlockableItems.boltGrabber != '\0') {
    iVar4 = 0x26a;
  }
  if (iVar10 != iVar4) {
    if (pMVar6 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar6);
      lVar3 = (longlong)worldUpdateTime;
      pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
      pMVar6->light = (int)lVar3;
      pMVar6 = (MobyInstance *)0x0;
    }
    if (iVar4 != -1) {
      if ((&MobyClassLookup)[iVar4] == -1) {
        pMVar6 = (MobyInstance *)0x0;
      }
      else {
        pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar4);
        if (pMVar6 != (MobyInstance *)0x0) {
          pMVar6->updateDistance = -1;
          pMVar6->drawDistance = 0xff;
          pMVar6->enabled = '\x01';
          pMVar6->state = '\0';
          mobyfunc::UpdateMobyTransform(pMVar6);
          mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
        }
      }
      if (pMVar6 != (MobyInstance *)0x0) {
        *(int *)pMVar6->pVar = param_1;
        pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateE_00707910;
        pMVar6->modeBits = NO_POST_UPDATE;
      }
    }
    *(MobyInstance **)(param_1 + 0x74) = pMVar6;
  }
  iVar4 = 0;
  iVar10 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0x78 + iVar10);
    iVar5 = -1;
    pMVar6 = (MobyInstance *)*puVar2;
    if (pMVar6 != (MobyInstance *)0x0) {
      iVar5 = (int)(short)pMVar6->oClass;
    }
    iVar8 = -1;
    if (iVar4 < (int)(uint)DAT_0096bcd7) {
      iVar8 = 0x1df;
    }
    if (iVar5 != iVar8) {
      if (pMVar6 != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar6);
        lVar3 = (longlong)worldUpdateTime;
        pMVar6->color = (int)((ulonglong)lVar3 >> 0x20);
        pMVar6->light = (int)lVar3;
        pMVar6 = (MobyInstance *)0x0;
      }
      if (iVar8 != -1) {
        if ((&MobyClassLookup)[iVar8] == -1) {
          pMVar6 = (MobyInstance *)0x0;
        }
        else {
          pMVar6 = mobyfunc::CreateMoby((MOBY_OCLASSES)iVar8);
          if (pMVar6 != (MobyInstance *)0x0) {
            pMVar6->updateDistance = -1;
            pMVar6->drawDistance = 0xff;
            pMVar6->enabled = '\x01';
            pMVar6->state = '\0';
            mobyfunc::UpdateMobyTransform(pMVar6);
            mobyutil::MB_SetLights(pMVar6,0x202020,0xe,0xe,0);
          }
        }
        if (iVar4 < (int)(uint)DAT_0096bcd6) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x40400000;
        }
        *(undefined4 *)((int)&DAT_00a52e6c + iVar10) = uVar1;
        *(undefined4 *)((int)&DAT_00a52e84 + iVar10) = 0;
        if (pMVar6 != (MobyInstance *)0x0) {
          *(int *)pMVar6->pVar = param_1;
          pMVar6->pUpdate = &PTR_MenuHero_MobyUpdateF_00707918;
          pMVar6->modeBits = NO_POST_UPDATE;
          pMVar6->setByGroup = (char)iVar4;
        }
      }
      *puVar2 = pMVar6;
    }
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar4 < 8);
  iVar10 = (int)uVar9;
  if ((iVar10 != DAT_00a52bcc) && (0 < iVar10 && iVar10 < 0x24)) {
    DAT_00a52bcc = iVar10;
    if ((Music != 0) && (DAT_00a52c7b != '\0')) {
      music::music_StopLoad();
      DAT_00a52c7b = '\0';
    }
    iVar4 = (int)(uVar9 << 4) * 3;
    DAT_00a52ed0 = *(undefined4 *)(&DAT_00730de0 + iVar4);
    DAT_00a52eac = *(undefined4 *)(&DAT_00730dec + iVar4);
    DAT_00a52eb4 = *(undefined4 *)(&DAT_00730df0 + iVar4);
    DAT_00a52ea4 = *(int *)(&DAT_00730de8 + iVar4) + DAT_00a52c7c;
    DAT_00a52eb8 = *(undefined4 *)(&DAT_00730df8 + iVar4);
    DAT_00a52ebc = *(undefined4 *)(&DAT_00730dfc + iVar4);
    DAT_00a52ec0 = *(undefined4 *)(&DAT_00730e00 + iVar4);
    DAT_00a52ec4 = *(undefined4 *)(&DAT_00730e04 + iVar4);
    DAT_00a52ec8 = *(undefined4 *)(&DAT_00730e08 + iVar4);
    DAT_00a52ecc = *(undefined4 *)(&DAT_00730e0c + iVar4);
    DAT_00a52ed4 = *(undefined4 *)(&DAT_00730de4 + iVar4);
    DAT_00a52ea0 = 0;
    DAT_00a52ea8 = 0;
    DAT_00a5306c = 0;
    DAT_00a52e9c = 1;
    DAT_00a52eb0 = iVar10;
    if (*(int *)(&DAT_00730dec + iVar4) != 0) {
      DAT_00a52edc = *(int *)(&DAT_00730df4 + iVar4) + DAT_00a52c7c;
      DAT_00a52e9c = 2;
      DAT_00a52ed8 = 0;
      DAT_00a52ee0 = 2;
      DAT_00a52ee4 = 0;
      DAT_00a52eec = 1;
      DAT_00a52ef0 = 0xffffffff;
      DAT_00a52ef4 = 0;
      DAT_00a52ef8 = 0xffffffff;
      DAT_00a52efc = 0;
      DAT_00a52f00 = 0xffffffff;
      DAT_00a52f04 = 0;
      DAT_00a52f08 = 0;
      DAT_00a52f0c = 0;
      DAT_00a52ee8 = iVar10;
    }
  }
  iVar4 = 0;
  iVar10 = param_1;
  do {
    if (*(char *)(iVar10 + 0xa4) != '\0') {
      *(char *)(iVar10 + 0xa4) = *(char *)(iVar10 + 0xa4) + -1;
    }
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 1;
  } while (iVar4 < 0x18);
  LoadMenuRatchetModel
            (*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x54),
             *(undefined4 *)(param_1 + 0x50),param_1 + 0x60,param_1 + 100,param_1 + 0x68);
  return 0;
}



