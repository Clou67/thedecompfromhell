//==== 0017007c  ns=vendor  size=0x400
// sig: undefined DrawWeaponIcons(void)
// callers(1): 00172c40 vendor::Vendor_HudUpdate
// callees(6): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0007813c stub::STUB_0007813c; 000ca3e4 hud::GetIconFrameTex; 000cc0f0 hud::DrawSprite; 005c4988 FUN_005c4988

void vendor::DrawWeaponIcons(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorItemsCnt < 8) {
    iVar3 = DAT_00e5a6a8 * 0x38;
    FUN_005c4988(((ulonglong)DAT_00e5a654 & 0xf) * 4 + -0x20);
    draw::GetEffectTex(0x16);
    draw::Sprite_DrawShapeWrapper(iVar3 + 8,2,0x38,0x38,0,0,0x10,0x10);
    draw::GetEffectTex(0x16);
    draw::Sprite_DrawShapeWrapper(iVar3 + 10,4,0x34,0x34,0,0,0x10,0x10);
    iVar4 = 0;
    iVar3 = 0xc;
    if (0 < g_VendorItemsCnt) {
      do {
        if ((&DAT_00e5a724)[iVar4 * 0x10] == '\x01') {
          uVar1 = hud::GetIconFrameTex
                            (*(undefined2 *)
                              (&DAT_00721038 + *(int *)(&g_VendorItems + iVar4 * 0x10) * 0x4c),2);
        }
        else {
          uVar1 = hud::GetIconFrameTex
                            (*(undefined2 *)
                              (&DAT_00721038 + *(int *)(&g_VendorItems + iVar4 * 0x10) * 0x4c),0);
        }
        hud::DrawSprite(uVar1,iVar3,6,0x30,0x30,0x80);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x38;
      } while (iVar4 < g_VendorItemsCnt);
    }
  }
  else {
    if (g_VendorCursor < 0) {
      g_VendorCursor = g_VendorCursor + 4;
    }
    else if (g_VendorCursor < 1) {
      FUN_005c4988(((ulonglong)DAT_00e5a654 & 0xf) * 4 + -0x20);
      draw::GetEffectTex(0x16);
      draw::Sprite_DrawShapeWrapper(0xb0,2,0x38,0x38,0,0,0x10,0x10);
      draw::GetEffectTex(0x16);
      draw::Sprite_DrawShapeWrapper(0xb2,4,0x34,0x34,0,0,0x10,0x10);
    }
    else {
      g_VendorCursor = g_VendorCursor + -4;
    }
    iVar4 = -2;
    iVar3 = g_VendorCursor + -100;
    do {
      iVar2 = g_VendorItemsCnt * 2 + iVar4 + DAT_00e5a6a8 + -3;
      iVar2 = (iVar2 - (iVar2 / g_VendorItemsCnt) * g_VendorItemsCnt) * 0x10;
      if ((&DAT_00e5a724)[iVar2] == '\x01') {
        uVar1 = hud::GetIconFrameTex
                          (*(undefined2 *)(&DAT_00721038 + *(int *)(&g_VendorItems + iVar2) * 0x4c),
                           2);
      }
      else {
        uVar1 = hud::GetIconFrameTex
                          (*(undefined2 *)(&DAT_00721038 + *(int *)(&g_VendorItems + iVar2) * 0x4c),
                           0);
      }
      hud::DrawSprite(uVar1,iVar3,6,0x30,0x30,0xffffffff80808080);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar4 < 9);
  }
  return;
}



//==== 00170490  ns=vendor  size=0x858
// sig: undefined DrawWeaponStrings(void)
// callers(1): 00172c40 vendor::Vendor_HudUpdate
// callees(9): 0006cde8 draw::FontLen; 0006fc54 draw::FontPrintSmallLeft; 0006fe44 draw::FontPrintScaled; 0007027c draw::FontPrintSmallRight; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index; 000ca72c hud::DrawFlatOverlay; 000f1934 mobyfunc::MB_AddToDrawList; 005cd2a8 libc::snprintf
// strings: 00653f98: '%d,%03d'

void vendor::DrawWeaponStrings(void)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  char acStack_170 [256];
  
  fVar1 = 1.0;
  if (g_Language == 3) {
    fVar1 = 0.85;
  }
  dVar8 = (double)fVar1;
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  mobyfunc::MB_AddToDrawList((ulonglong)DAT_00e5a670 + 0x100,1);
  mobyfunc::MB_AddToDrawList(DAT_00e5a670,1);
  iVar3 = DAT_00e5a6a8 * 0x10;
  if ((&DAT_00e5a724)[iVar3] == '\x01') {
    uVar6 = 0x4018000000000000;
    uVar7 = 0x4020000000000000;
    help::help_msg_string_by_index
              (*(StringId *)(&DAT_00721000 + *(int *)(&g_VendorItems + iVar3) * 0x4c));
    draw::FontPrintScaled(uVar6,uVar7,dVar8);
    uVar6 = help::help_msg_string_by_index(STR_AMMO);
    draw::FontPrintSmallLeft(0x18,0x18,0x80f0f0f0,uVar6,0xffffffffffffffff);
    uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
    if (uVar2 < 1000) {
      libc::snprintf(acStack_170,"%d",(ulonglong)uVar2);
    }
    else {
      libc::snprintf(acStack_170,"%d,%03d",uVar2 / 1000,(uint)uVar2 + (uVar2 / 1000) * -1000);
    }
    draw::FontPrintSmallRight(0x76,0x65,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    if (g_lastVendorWasPda != 0) {
      iVar3 = draw::FontLen(acStack_170,-1);
      hud::DrawFlatOverlay(0x75 - iVar3,0x6d,0x7b,0x70,0x20959544,0);
      hud::DrawFlatOverlay(0x76 - iVar3,0x6d,0x7a,0x70,0x30959544,0);
      hud::DrawFlatOverlay(0x77 - iVar3,0x6d,0x79,0x70,0x40959544,0);
      hud::DrawFlatOverlay(0x78 - iVar3,0x6d,0x78,0x70,0x50959544,0);
      hud::DrawFlatOverlay(0x79 - iVar3,0x6d,0x77,0x70,0x60959544,0);
      hud::DrawFlatOverlay(0x7a - iVar3,0x6d,0x76,0x70,0x70959544,0);
      hud::DrawFlatOverlay(0x7b - iVar3,0x6d,0x75,0x70,0x80959544,0);
      if (g_lastVendorWasPda == 0) {
        uVar2 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
      }
      else {
        uVar2 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      uVar5 = (uint)uVar2;
      if (uVar5 < 1000) {
        libc::snprintf(acStack_170,"%d",(ulonglong)uVar2);
      }
      else {
        libc::snprintf(acStack_170,"%d,%03d",uVar5 / 1000,(uint)uVar2 + (uVar5 / 1000) * -1000);
      }
      draw::FontPrintSmallRight(0x76,0x55,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    }
  }
  else {
    uVar6 = 0x4018000000000000;
    uVar7 = 0x4020000000000000;
    help::help_msg_string_by_index
              (*(StringId *)(&DAT_00721000 + *(int *)(&g_VendorItems + iVar3) * 0x4c));
    draw::FontPrintScaled(uVar6,uVar7,dVar8);
    iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
    if (iVar3 < 1000) {
      libc::snprintf(acStack_170,"%d",iVar3);
    }
    else {
      libc::snprintf(acStack_170,"%d,%03d",iVar3 / 1000,iVar3 % 1000);
    }
    uVar4 = 0x80f0f0f0;
    if (UnlockableItems.persuader != '\0') {
      uVar4 = 0x80808080;
    }
    draw::FontPrintSmallRight(0x76,0x65,uVar4,acStack_170,0xffffffffffffffff);
    if (UnlockableItems.persuader != '\0') {
      iVar3 = draw::FontLen(acStack_170,-1);
      hud::DrawFlatOverlay(0x75 - iVar3,0x6d,0x7b,0x70,0x20959544,0);
      hud::DrawFlatOverlay(0x76 - iVar3,0x6d,0x7a,0x70,0x30959544,0);
      hud::DrawFlatOverlay(0x77 - iVar3,0x6d,0x79,0x70,0x40959544,0);
      hud::DrawFlatOverlay(0x78 - iVar3,0x6d,0x78,0x70,0x50959544,0);
      hud::DrawFlatOverlay(0x79 - iVar3,0x6d,0x77,0x70,0x60959544,0);
      hud::DrawFlatOverlay(0x7a - iVar3,0x6d,0x76,0x70,0x70959544,0);
      hud::DrawFlatOverlay(0x7b - iVar3,0x6d,0x75,0x70,0x80959544,0);
      if (UnlockableItems.persuader == '\0') {
        iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      else {
        iVar3 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      if (iVar3 < 1000) {
        libc::snprintf(acStack_170,"%d",iVar3);
      }
      else {
        libc::snprintf(acStack_170,"%d,%03d",iVar3 / 1000,iVar3 % 1000);
      }
      draw::FontPrintSmallRight(0x76,0x55,0x80f0f0f0,acStack_170,0xffffffffffffffff);
    }
  }
  return;
}



//==== 00170cf0  ns=vendor  size=0x2e0
// sig: undefined DrawBuyButton(void)
// callers(1): 00172c40 vendor::Vendor_HudUpdate
// callees(3): 0007100c draw::FontPrintOpt; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index

void vendor::DrawBuyButton(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  StringId helpmsg;
  undefined8 uVar4;
  undefined1 local_50 [32];
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorMenuState == 0) {
    helpmsg = STR_BUY;
  }
  else {
    iVar2 = DAT_00e5a6a8 * 0x10;
    if (((&DAT_00e5a724)[iVar2] == '\x01') &&
       ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar2) * 0xc] <=
        (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar2)])) {
      helpmsg = STR_BACK;
    }
    else if ((&DAT_00e5a724)[iVar2] == '\x01') {
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar2) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      helpmsg = STR_BACK;
      if ((int)(uint)uVar1 <= g_boltCount) {
        helpmsg = STR_BUY;
      }
    }
    else {
      if (UnlockableItems.persuader == '\0') {
        iVar2 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      else {
        iVar2 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      helpmsg = STR_BACK;
      if (iVar2 <= g_boltCount) {
        helpmsg = STR_TO_USE_YOUR_BOMB_0x0000;
      }
    }
  }
  if (helpmsg != STR_TO_USE_YOUR_BOMB_0x0000) {
    uVar3 = help::help_msg_string_by_index(helpmsg);
    uVar4 = 0x3ff0000000000000;
    draw::FontPrintOpt(0x3ff0000000000000,local_50,0x80f0f0f0,uVar3,0xffffffffffffffff);
    uVar3 = help::help_msg_string_by_index(helpmsg);
    draw::FontPrintOpt(uVar4,local_50,0x80f0f0f0,uVar3,0xffffffffffffffff);
  }
  return;
}



//==== 00170fd0  ns=vendor  size=0x1bc
// sig: undefined DrawExitButton(void)
// callers(1): 00172c40 vendor::Vendor_HudUpdate
// callees(3): 00070834 draw::FontPrintSmallCenter; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index

void vendor::DrawExitButton(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  if (g_VendorMenuState == 0) {
    uVar3 = help::help_msg_string_by_index(STR_EXIT);
    draw::FontPrintSmallCenter(0x28,0x14,0x80f0f0f0,uVar3,0xffffffffffffffff);
  }
  else {
    iVar2 = DAT_00e5a6a8 * 0x10;
    if ((((&DAT_00e5a724)[iVar2] != '\x01') ||
        ((int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar2)] <
         (int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar2) * 0xc])) &&
       ((&DAT_00e5a724)[iVar2] == '\x01')) {
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar2) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar2) * 0x18);
      }
      if ((int)(uint)uVar1 <= g_boltCount) {
        uVar3 = help::help_msg_string_by_index(STR_EXIT);
        draw::FontPrintSmallCenter(0x28,0x14,0x80f0f0f0,uVar3,0xffffffffffffffff);
      }
    }
  }
  return;
}



//==== 001711a8  ns=vendor  size=0x5ec
// sig: undefined Vendor_DrawItemInfo(void)
// callers(1): 00173b60 vendor::Vendor_DrawScreen
// callees(8): 0006fc54 draw::FontPrintSmallLeft; 0006fe44 draw::FontPrintScaled; 0007027c draw::FontPrintSmallRight; 0007100c draw::FontPrintOpt; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index; 000f1934 mobyfunc::MB_AddToDrawList; 005cd2a8 libc::snprintf

void vendor::Vendor_DrawItemInfo(void)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_170 [24];
  char acStack_158 [264];
  
  stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
  iVar3 = DAT_00e5a6a8 * 0x10;
  if (((&DAT_00e5a724)[iVar3] == '\x01') &&
     ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)(&g_VendorItems + iVar3) * 0xc] <=
      (int)(&currentAmmoArray.field0_0x0)[*(int *)(&g_VendorItems + iVar3)])) {
    uVar2 = help::help_msg_string_by_index(STR_YOURE_MAXED_OUT);
    draw::FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
    return;
  }
  if ((&DAT_00e5a724)[iVar3] == '\x01') {
    if (g_lastVendorWasPda == 0) {
      uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + iVar3) * 0xc];
    }
    else {
      uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    if (g_boltCount < (int)(uint)uVar1) {
      uVar2 = help::help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT);
      draw::FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
    }
    else {
      mobyfunc::MB_AddToDrawList((ulonglong)DAT_00e5a670 + 0x500,1);
      uVar2 = help::help_msg_string_by_index(STR_HOW_MANY);
      draw::FontPrintOpt(0x3ff0000000000000,local_170,0x80f0f0f0,uVar2,0xffffffffffffffff);
      libc::snprintf(acStack_158,"%d",DAT_00e5a95c);
      if (DAT_00e5a95c < 100) {
        if (DAT_00e5a95c < 10) {
          draw::FontPrintSmallLeft(0x25,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
        }
        else {
          draw::FontPrintSmallLeft(0x1e,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
        }
      }
      else {
        draw::FontPrintSmallLeft(0x17,0x32,0x80f0f0f0,acStack_158,0xffffffffffffffff);
      }
      draw::FontPrintSmallLeft(0xc,0x32,0x80f0f0f0,&DAT_00653fa4,0xffffffffffffffff);
      draw::FontPrintSmallLeft(0x40,0x32,0x80f0f0f0,&DAT_00653fac,0xffffffffffffffff);
      if (g_lastVendorWasPda == 0) {
        uVar1 = (&DAT_00737d38)[*(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0xc];
      }
      else {
        uVar1 = *(ushort *)(&DAT_00737d3a + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x18);
      }
      libc::snprintf(acStack_158,"%d",DAT_00e5a95c * (uint)uVar1);
      draw::FontPrintSmallRight(0x40,0x4c,0x80f0f0f0,acStack_158,0xffffffffffffffff);
    }
  }
  else {
    if (UnlockableItems.persuader == '\0') {
      iVar3 = *(int *)(&DAT_00737d30 + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    else {
      iVar3 = *(int *)(&DAT_00737d34 + *(int *)(&g_VendorItems + iVar3) * 0x18);
    }
    uVar2 = 0x3ff0000000000000;
    if (((g_Language == 4) || (g_Language == 2)) || (uVar5 = uVar2, g_Language == 5)) {
      uVar5 = 0x3feb333340000000;
    }
    if (g_boltCount < iVar3) {
      uVar5 = help::help_msg_string_by_index(STR_YOU_CANT_AFFORD_IT);
      draw::FontPrintOpt(uVar2,local_170,0x80f0f0f0,uVar5,0xffffffffffffffff);
    }
    else {
      uVar2 = 0x4018000000000000;
      help::help_msg_string_by_index(STR_PURCHASE);
      draw::FontPrintScaled(uVar2,uVar2,uVar5);
      uVar2 = 0x4000000000000000;
      uVar4 = 0x4040000000000000;
      help::help_msg_string_by_index(STR_BUY);
      draw::FontPrintScaled(uVar2,uVar4,uVar5);
      uVar4 = 0x404f000000000000;
      help::help_msg_string_by_index(STR_NO);
      draw::FontPrintScaled(uVar2,uVar4,uVar5);
    }
  }
  return;
}



//==== 001717a8  ns=vendor  size=0x52c
// sig: undefined Vendor_DrawFlickerText(void)
// callers(2): 00172c40 vendor::Vendor_HudUpdate; 00173b60 vendor::Vendor_DrawScreen
// callees(9): 000685c4 draw::GetEffectTex; 0006968c draw::DrawSpriteFont; 000fc620 mobyutil::MB_randInt; 00174f80 vuchain::SetGSReg; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 005c4988 FUN_005c4988

void vendor::Vendor_DrawFlickerText(undefined8 param_1,double param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  uVar2 = idol_draw::Blend(1,1,0,2,0,0,1,1);
  vuchain::SetGSReg(0x16,uVar2);
  iVar1 = EffectTexHeaders + 8;
  lVar3 = draw::GetEffectTex(0x1c);
  iVar6 = EffectTexHeaders + 8;
  *(undefined4 *)(iVar1 + (int)(lVar3 << 5) + (int)(lVar3 << 2)) = 0x10101;
  lVar3 = draw::GetEffectTex(0x1a);
  iVar1 = (int)(param_3 << 2);
  *(undefined4 *)(iVar6 + (int)(lVar3 << 5) + (int)(lVar3 << 2)) = 0x10101;
  iVar6 = (int)param_3;
  if ((*(int *)(&DAT_00e5a9dc + iVar1) != 0) || (iVar6 == 0)) {
    if (*(int *)(&DAT_00e5a9dc + iVar1) != 0) {
      *(int *)(&DAT_00e5a9dc + iVar1) = *(int *)(&DAT_00e5a9dc + iVar1) + 2;
    }
    iVar4 = *(int *)(&DAT_00e5a9dc + iVar1);
    if ((iVar6 == 0) && (iVar4 < 0x18)) {
      iVar4 = 0x18;
    }
    mobyutil::MB_randInt(200);
    mobyutil::MB_randInt(200);
    iVar4 = FUN_005c4988(iVar4 + -0x80);
    uVar2 = FUN_00502f08(0,0,0,0,0,0);
    vuchain::SetGSReg(6,uVar2);
    iVar4 = (0x80 - iVar4) * 2;
    iVar5 = 0xff;
    if (iVar4 < 0x100) {
      iVar5 = iVar4;
    }
    uVar2 = idol_draw::PackCmd(0,2,2,1,iVar5);
    vuchain::SetGSReg(3,uVar2);
    uVar2 = 0;
    draw::GetEffectTex(0x1a);
    draw::DrawSpriteFont(uVar2,uVar2,param_1,param_2);
    if (0xff < *(int *)(&DAT_00e5a9dc + iVar1)) {
      *(undefined4 *)(&DAT_00e5a9dc + iVar1) = 0;
    }
  }
  if ((*(int *)(&DAT_00e5a9dc + iVar1) == 0) && (iVar4 = mobyutil::MB_randInt(700), iVar4 == 0)) {
    *(undefined4 *)(&DAT_00e5a9dc + iVar1) = 2;
  }
  uVar2 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar2);
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar2);
  if (0 < iVar6) {
    if (*(int *)(&DAT_00e5a9f8 + iVar1) == 0) {
      iVar4 = mobyutil::MB_randInt(0x168);
      if (iVar4 == 0) {
        *(undefined4 *)(&DAT_00e5a9f8 + iVar1) = 2;
      }
    }
    else {
      iVar4 = *(int *)(&DAT_00e5a9f8 + iVar1);
      *(int *)(&DAT_00e5a9f8 + iVar1) = iVar4 + 2;
      FUN_005c4988(iVar4 + -0x7e);
      dVar7 = (double)fastfunc::FastIntToDouble(0x200 - *(int *)(&DAT_00e5a9f8 + iVar1));
      uVar2 = 0;
      dVar8 = (double)(float)(param_2 + 16.0);
      dVar7 = -(double)(float)(dVar7 * 0.03125);
      draw::GetEffectTex((int)(dVar8 * 3.0),0x4030000000000000,0x3fa0000000000000,0,0x1c);
      draw::DrawSpriteFont(uVar2,dVar7,param_1,dVar8);
      if (0x1ff < *(int *)(&DAT_00e5a9f8 + iVar1)) {
        *(undefined4 *)(&DAT_00e5a9f8 + iVar1) = 0;
      }
    }
  }
  if (iVar6 == 6) {
    uVar2 = 0;
    draw::GetEffectTex(0,0x19);
    draw::DrawSpriteFont(uVar2,uVar2,param_1,param_2);
  }
  return;
}



//==== 00171d00  ns=vendor  size=0xefc
// sig: undefined Vendor_SetupScreenRender(void)
// callers(2): 00172c40 vendor::Vendor_HudUpdate; 00173b60 vendor::Vendor_DrawScreen
// callees(4): 000682c8 draw::SetUserViewContext; 004d82b8 idol_draw::BindFragmentProgram; 004d83ec idol_draw::BindVertexProgram; 005d0140 libc::memset

void vendor::Vendor_SetupScreenRender(double param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  RsxCmd RVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RsxCmd RVar13;
  uint width;
  RsxCmd height;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  RsxCmd RVar19;
  RenderingStep *pRVar20;
  RenderingStep *pRVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  int iVar32;
  RsxCmd *pRVar33;
  longlong lVar30;
  longlong lVar31;
  int iVar34;
  int iVar35;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong uVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte local_b4;
  RsxCmd local_b0;
  RsxCmd local_a0;
  
  uVar27 = ZEXT48(&stack0x00000000);
  lVar31 = uVar27 - 0x2f0;
  puVar15 = (ulonglong *)lVar31;
  *puVar15 = uVar27;
  puVar15[0x60] = in_LR;
  puVar15[0x5c] = in_f30;
  puVar15[0x5d] = in_f31;
  puVar15[0x5a] = unaff_r30;
  puVar15[0x57] = unaff_r27;
  dVar40 = 1.0;
  puVar15[0x55] = unaff_r25;
  FLOAT_0095d1c8 = 1.0;
  width = 1 << (param_2 & 0x3f);
  puVar15[0x56] = unaff_r26;
  dVar41 = 0.0;
  height = 1 << (param_3 & 0x3f);
  puVar15[0x5b] = unaff_r31;
  puVar15[0x59] = unaff_r29;
  puVar15[0x58] = unaff_r28;
  puVar15[0x54] = unaff_r24;
  draw::SetUserViewContext(width,height,(float)param_1,0.0,524288.0,255.0,0.0);
  fVar1 = ViewContext.yratio;
  dVar37 = (double)ViewContext.yratio;
  *(float *)(puVar15 + 0x3c) = (float)dVar40;
  piVar22 = g_viewMtxPtr;
  dVar37 = ABS(dVar37);
  *(float *)((int)puVar15 + 0x1e4) = (float)(ABS(dVar40) - dVar37);
  iVar32 = (int)(((ulonglong)(*(uint *)(puVar15 + 0x3c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1e4) >> 0x1e) & 2 |
                 (ulonglong)((uint)fVar1 >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar32);
  fVar1 = *(float *)(&DAT_00735904 + iVar32);
  dVar36 = ABS(dVar40);
  dVar38 = dVar37;
  if (dVar41 <= (double)*(float *)((int)puVar15 + 0x1e4)) {
    dVar38 = ABS((double)*(float *)(puVar15 + 0x3c));
    dVar36 = dVar37;
  }
  dVar37 = dVar41;
  if (dVar41 < dVar38) {
    iVar32 = 4;
    fVar16 = (float)(dVar36 - dVar38) / (float)(dVar36 + dVar38);
    lVar30 = lVar31;
    do {
      iVar32 = iVar32 + -1;
      *(float *)((int)lVar30 + 0x218) = fVar16;
      lVar30 = lVar30 + 4;
    } while (iVar32 != 0);
    fVar16 = fVar16 * fVar16;
    lVar30 = uVar27 - 0x2e0;
    iVar32 = 4;
    fVar17 = fVar16 * fVar16;
    *(float *)((int)puVar15 + 0x21c) = *(float *)((int)puVar15 + 0x21c) * fVar16;
    *(float *)(puVar15 + 0x44) = *(float *)(puVar15 + 0x44) * fVar17;
    *(float *)((int)puVar15 + 0x224) = *(float *)((int)puVar15 + 0x224) * fVar17 * fVar16;
    do {
      iVar32 = iVar32 + -1;
      *(float *)((int)lVar30 + 0x218) = *(float *)((int)lVar30 + 0x208) * fVar17 * fVar17;
      lVar30 = lVar30 + 4;
    } while (iVar32 != 0);
    iVar32 = 0;
    iVar34 = 8;
    lVar30 = lVar31;
    do {
      pfVar18 = (float *)((int)&DAT_007358e0 + iVar32);
      iVar34 = iVar34 + -1;
      iVar32 = iVar32 + 4;
      *(float *)((int)lVar30 + 0x218) = *(float *)((int)lVar30 + 0x218) * *pfVar18;
      lVar30 = lVar30 + 4;
    } while (iVar34 != 0);
    iVar32 = 8;
    lVar30 = lVar31;
    dVar36 = dVar41;
    do {
      iVar32 = iVar32 + -1;
      iVar34 = (int)lVar30;
      lVar30 = lVar30 + 4;
      dVar36 = (double)(float)(dVar36 + (double)*(float *)(iVar34 + 0x218));
    } while (iVar32 != 0);
    dVar37 = (double)((float)(dVar36 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = FLOAT_0095d1c8;
  puVar5 = *(undefined4 **)(*piVar22 + 0x20);
  puVar15[5] = ZEXT48(&TOC_BASE);
  (*(code *)*puVar5)((double)((float)(dVar37 * 57.2957763671875) * fVar1),0x3fb99999a0000000,
                     0x4079000000000000,piVar22);
  fVar1 = GameCamera.mtx0.v2.x;
  *(float *)((int)puVar15 + 0x74) = GameCamera.mtx0.v1.x;
  *(float *)(puVar15 + 0xf) = fVar1;
  *(float *)((int)puVar15 + 0x7c) = (float)dVar41;
  fVar23 = GameCamera.mtx0.v2.y;
  fVar16 = GameCamera.mtx0.v1.y;
  fVar1 = GameCamera.mtx0.v0.y;
  *(float *)((int)puVar15 + 0x84) = GameCamera.mtx0.v1.y;
  *(float *)(puVar15 + 0x11) = fVar23;
  *(float *)((int)puVar15 + 0x8c) = (float)dVar41;
  fVar24 = GameCamera.mtx0.v2.z;
  fVar17 = GameCamera.mtx0.v1.z;
  fVar2 = GameCamera.mtx0.v0.z;
  *(float *)((int)puVar15 + 0x94) = GameCamera.mtx0.v1.z;
  *(float *)(puVar15 + 0x13) = fVar24;
  *(float *)((int)puVar15 + 0x9c) = (float)dVar41;
  fVar26 = GameCamera.posZ;
  fVar25 = GameCamera.posY;
  *(float *)((int)puVar15 + 0xa4) = GameCamera.posY;
  *(float *)(puVar15 + 0x15) = fVar26;
  *(float *)((int)puVar15 + 0xac) = (float)dVar40;
  *(float *)((int)puVar15 + 0xb4) = fVar1;
  *(float *)(puVar15 + 0x17) = fVar2;
  *(float *)((int)puVar15 + 0xc4) = fVar16;
  *(float *)(puVar15 + 0x19) = fVar17;
  *(float *)((int)puVar15 + 0xd4) = fVar23;
  *(float *)(puVar15 + 0x1b) = fVar24;
  *(float *)((int)puVar15 + 0xe4) = fVar25;
  *(float *)(puVar15 + 0x1d) = fVar26;
  iVar32 = *piVar22;
  puVar15[5] = puVar15[5];
  (*(code *)**(undefined4 **)(iVar32 + 0x24))(piVar22);
  pRVar20 = HUD_Pass;
  auVar42 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x38) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x40) & 0xfffffff0));
  lVar28 = uVar27 - 0x150;
  auVar44 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x3c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x44) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x3c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x44) & 0xfffffff0));
  vectorMergeHighWord(auVar42,auVar43);
  vectorMergeLowWord(auVar42,auVar43);
  iVar32 = 0x10;
  auVar42 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x38) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x40) & 0xfffffff0));
  auVar43 = vectorMergeHighWord(auVar42,auVar44);
  vectorMergeLowWord(auVar42,auVar44);
  *(undefined1 (*) [16])lVar28 = auVar43;
  *pRVar20->command = 0x441efc;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  lVar30 = lVar28;
  do {
    iVar32 = iVar32 + -1;
    pRVar33 = (RsxCmd *)lVar30;
    lVar30 = lVar30 + 4;
    *pRVar20->command = *pRVar33;
    pRVar20->command = pRVar20->command + 1;
    pRVar21 = HUD_Pass;
  } while (iVar32 != 0);
  auVar42 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x28) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x30) & 0xfffffff0));
  auVar44 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x2c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x34) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x2c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar22 + 0x34) & 0xfffffff0));
  vectorMergeHighWord(auVar42,auVar43);
  vectorMergeLowWord(auVar42,auVar43);
  auVar43 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar22 + 0x28) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar22 + 0x30) & 0xfffffff0));
  iVar32 = 0x10;
  auVar42 = vectorMergeHighWord(auVar43,auVar44);
  vectorMergeLowWord(auVar43,auVar44);
  *(undefined1 (*) [16])lVar28 = auVar42;
  *pRVar21->command = 0x441efc;
  pRVar21->command[1] = 8;
  pRVar21->command = pRVar21->command + 2;
  do {
    pRVar33 = (RsxCmd *)lVar28;
    iVar32 = iVar32 + -1;
    lVar28 = lVar28 + 4;
    *pRVar21->command = *pRVar33;
    pRVar21->command = pRVar21->command + 1;
  } while (iVar32 != 0);
  DAT_00966b8c = (short)width;
  DAT_00966b8e = (short)height;
  piVar22[0x8b6] = piVar22[0x8b6] + 1;
  libc::memset(uVar27 - 0xb8,0,0x3c);
  *(undefined1 *)((int)puVar15 + 0x23a) = 8;
  *(undefined1 *)((int)puVar15 + 0x23b) = 1;
  uVar29 = width << 2;
  *(undefined1 *)((int)puVar15 + 0x23c) = 0;
  iVar32 = piVar22[0x8a2];
  iVar34 = piVar22[299];
  *(uint *)(puVar15 + 0x4a) = uVar29;
  iVar35 = 3;
  *(int *)(puVar15 + 0x48) = iVar32 - iVar34;
  lVar30 = lVar31;
  do {
    iVar35 = iVar35 + -1;
    *(undefined1 *)((int)lVar31 + 0x23d) = 0;
    *(undefined4 *)((int)lVar30 + 0x244) = 0;
    *(undefined4 *)((int)lVar30 + 0x254) = 0x40;
    lVar31 = lVar31 + 1;
    lVar30 = lVar30 + 4;
  } while (iVar35 != 0);
  *(undefined1 *)(puVar15 + 0x4c) = 2;
  iVar32 = piVar22[0x8a2];
  iVar34 = piVar22[299];
  *(uint *)(puVar15 + 0x4d) = uVar29;
  *(undefined1 *)((int)puVar15 + 0x261) = 0;
  *(undefined1 *)(puVar15 + 0x47) = 1;
  *(undefined1 *)((int)puVar15 + 0x239) = 0;
  RVar19 = width << 0x10;
  *(RsxCmd *)((int)puVar15 + 0x264) = (iVar32 + height * width * 4) - iVar34;
  *(short *)((int)puVar15 + 0x26c) = (short)width;
  *(short *)((int)puVar15 + 0x26e) = (short)height;
  DAT_00e5aa14 = *(undefined4 *)(puVar15 + 0x48);
  *(undefined2 *)(puVar15 + 0x4e) = 0;
  *(undefined2 *)((int)puVar15 + 0x272) = 0;
  pRVar20 = HUD_Pass;
  DAT_00e5aa18 = 0x1a529;
  DAT_00e5aa2c = RVar19 | height;
  DAT_00e5aa1c = 0x30303;
  DAT_00e5aa20 = 0x80010000;
  DAT_00e5aa24 = 0xaae4;
  DAT_00e5aa30 = uVar29 | 0x100000;
  DAT_00e5aa28 = 0x2062000;
  DAT_00e5aa34 = 0;
  DAT_00e5aa35 = 0xff;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar20->command[1] = local_b4 + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x23d) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x23e) + 0xfeed0000;
  pRVar20->command[2] = *(byte *)((int)puVar15 + 0x23f) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar20->command[1] = *(byte *)((int)puVar15 + 0x261) + 0xfeed0000;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  uVar3 = *(ushort *)((int)puVar15 + 0x26c);
  uVar4 = *(ushort *)((int)puVar15 + 0x26e);
  pRVar33[2] = (RsxCmd)&DAT_00180208;
  pRVar20->command[1] =
       (uint)*(byte *)((int)puVar15 + 0x23a) | (uint)*(byte *)(puVar15 + 0x4c) << 5 |
       (uint)*(byte *)(puVar15 + 0x47) << 8 | (uint)*(byte *)((int)puVar15 + 0x239) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar3) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar4) & 0xffffffff) << 0x18);
  pRVar20->command[2] = local_a0;
  pRVar20->command[3] = local_b0;
  pRVar20->command[4] = *(RsxCmd *)((int)puVar15 + 0x264);
  pRVar20->command[5] = *(RsxCmd *)((int)puVar15 + 0x244);
  pRVar20->command[6] = *(RsxCmd *)((int)puVar15 + 0x254);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 7;
  pRVar33[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar20->command[1] = *(RsxCmd *)(puVar15 + 0x4d);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar20->command[1] = *(RsxCmd *)(puVar15 + 0x4b);
  pRVar20->command[2] = *(RsxCmd *)((int)puVar15 + 0x25c);
  pRVar20->command[3] = *(RsxCmd *)(puVar15 + 0x49);
  pRVar20->command[4] = *(RsxCmd *)((int)puVar15 + 0x24c);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 5;
  pRVar33[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar20->command[1] = (uint)*(byte *)((int)puVar15 + 0x23b);
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar20->command[1] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x272),*(undefined2 *)(puVar15 + 0x4e));
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar20->command[1] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x26c),*(undefined2 *)(puVar15 + 0x4e));
  pRVar20->command[2] =
       CONCAT22(*(undefined2 *)((int)puVar15 + 0x26e),*(undefined2 *)((int)puVar15 + 0x272));
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar20->command[1] =
       (uint)*(ushort *)((int)puVar15 + 0x26e) - (*(ushort *)((int)puVar15 + 0x26e) >> 0xc & 1) |
       0x1000;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar20->command[1] = 0xffffff00;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar33 = pRVar20->command;
  puVar15[0x52] = (ulonglong)width;
  pRVar33[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_INVALIDATE_L2_x1;
  pRVar20->command[1] = 1;
  pRVar20->command = pRVar20->command + 2;
  lVar31 = uVar27 - 0x108;
  fVar1 = (float)(longlong)puVar15[0x52] * 0.5;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  auVar42 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar43 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,lVar31);
  *(undefined4 *)lVar31 = uVar14;
  puVar15[0x52] = (ulonglong)height;
  uVar39 = puVar15[0x52];
  fVar1 = (float)(longlong)uVar39 * 0.5;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  auVar42 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar44,0,uVar27 - 0x104);
  *(undefined4 *)(uVar27 - 0x104) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0x100);
  *(undefined4 *)(uVar27 - 0x100) = uVar14;
  fVar1 = (float)(longlong)uVar39 * -0.5;
  iVar32 = 4;
  *(float *)(puVar15 + 0x50) = fVar1;
  *(float *)((int)puVar15 + 0x284) = fVar1;
  *(float *)(puVar15 + 0x51) = fVar1;
  *(float *)((int)puVar15 + 0x28c) = fVar1;
  pRVar20 = HUD_Pass;
  auVar42 = auRam00000000 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60) >> 0x60 &
            (undefined1  [16])0xffffffff;
  auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
  uVar14 = storeVectorElementWordIndexed(auVar42,0,uVar27 - 0xfc);
  *(undefined4 *)(uVar27 - 0xfc) = uVar14;
  *pRVar20->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar20->command[1] = 0x12;
  pRVar20->command = pRVar20->command + 2;
  do {
    pRVar33 = (RsxCmd *)lVar31;
    iVar32 = iVar32 + -1;
    lVar31 = lVar31 + 4;
    *pRVar20->command = *pRVar33;
    pRVar20->command = pRVar20->command + 1;
    pRVar21 = HUD_Pass;
  } while (iVar32 != 0);
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0xf8);
  *(undefined4 *)(uVar27 - 0xf8) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar44,0,uVar27 - 0xf4);
  *(undefined4 *)(uVar27 - 0xf4) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar43,0,uVar27 - 0xe8);
  *(undefined4 *)(uVar27 - 0xe8) = uVar14;
  pRVar33 = pRVar21->command;
  uVar14 = storeVectorElementWordIndexed(auVar42,0,uVar27 - 0xe4);
  *(undefined4 *)(uVar27 - 0xe4) = uVar14;
  *pRVar33 = (RsxCmd)&DAT_00080a00;
  pRVar21->command[1] = RVar19;
  pRVar21->command[2] = height << 0x10;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_CLIP_MIN_x2;
  pRVar21->command[1] = (RsxCmd)(float)dVar41;
  pRVar21->command[2] = (RsxCmd)(float)dVar40;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 3;
  pRVar33[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  *(undefined4 *)(puVar15 + 0x40) = 0x3f000000;
  *(float *)((int)puVar15 + 0x204) = (float)dVar41;
  *(undefined4 *)(puVar15 + 0x42) = 0x3f000000;
  RVar6 = *(RsxCmd *)(puVar15 + 0x3f);
  *(float *)((int)puVar15 + 0x214) = (float)dVar41;
  RVar7 = *(RsxCmd *)((int)puVar15 + 0x1fc);
  uVar14 = storeVectorElementWordIndexed(auVar43,4,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 1) & 0xfffffffc) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar44,8,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 2) & 0xfffffffc) = uVar14;
  pRVar21->command[3] = 0x3f000000;
  pRVar21->command[4] = (RsxCmd)(float)dVar41;
  uVar14 = storeVectorElementWordIndexed(auVar43,0x14,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 5) & 0xfffffffc) = uVar14;
  uVar14 = storeVectorElementWordIndexed(auVar42,0x18,ZEXT48(pRVar21->command));
  *(undefined4 *)((uint)(pRVar21->command + 6) & 0xfffffffc) = uVar14;
  pRVar21->command[7] = 0x3f000000;
  pRVar21->command[8] = (RsxCmd)(float)dVar41;
  pRVar33 = pRVar21->command;
  pRVar21->command = pRVar33 + 9;
  pRVar33[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  RVar8 = *(RsxCmd *)(puVar15 + 0x40);
  RVar9 = *(RsxCmd *)((int)puVar15 + 0x204);
  RVar10 = *(RsxCmd *)(puVar15 + 0x41);
  RVar11 = *(RsxCmd *)((int)puVar15 + 0x20c);
  RVar12 = *(RsxCmd *)(puVar15 + 0x42);
  RVar13 = *(RsxCmd *)((int)puVar15 + 0x214);
  pRVar21->command[1] = RVar6;
  pRVar21->command[2] = RVar7;
  pRVar21->command[3] = RVar8;
  pRVar21->command[4] = RVar9;
  pRVar21->command[5] = RVar10;
  pRVar21->command[6] = RVar11;
  pRVar21->command[7] = RVar12;
  pRVar21->command[8] = RVar13;
  pRVar21->command = pRVar21->command + 9;
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar20->command[1] = RVar19;
  pRVar20->command[2] = height << 0x10;
  pRVar20->command = pRVar20->command + 3;
  idol_draw::BindVertexProgram(piVar22,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(piVar22,HUD_Pass,0xc);
  pRVar20 = HUD_Pass;
  *HUD_Pass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar20->command[1] = 0xf3;
  pRVar33 = pRVar20->command;
  pRVar20->command = pRVar33 + 2;
  pRVar33[2] = NV4097_NO_OPERATION_x1;
  pRVar20->command[1] = 0;
  pRVar20->command = pRVar20->command + 2;
  return;
}



//==== 00172bfc  ns=vendor  size=0x24
// sig: undefined Vendor_ResetHUDPass(void)
// callers(0): 
// callees(1): 00071ac0 draw::ResetHUDPass

void vendor::Vendor_ResetHUDPass(void)

{
  draw::ResetHUDPass();
  return;
}



//==== 00172c40  ns=vendor  size=0xa3c
// sig: undefined Vendor_HudUpdate(MobyInstance * moby)
// callers(1): 001744f0 vendor::Vendor_PostUpdate
// callees(25): 0006889c draw::Sprite_DrawShape; 0006fda4 draw::FontPrint_unk; 00071ac0 draw::ResetHUDPass; 00078138 stub::STUB_00078138; 0007813c stub::STUB_0007813c; 0007b740 help::help_msg_string_by_index; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000fc620 mobyutil::MB_randInt; 0016a3a8 vendor::ProjectBoxToScreen; 0016bc20 vendor::Vendor_SetScrollText; 0016f9a8 vendor::DrawVendorHintFrame; 0016fe20 vendor::DrawVendorDude; 0017007c vendor::DrawWeaponIcons; 00170490 vendor::DrawWeaponStrings; 00170cf0 vendor::DrawBuyButton; 00170fd0 vendor::DrawExitButton; 001717a8 vendor::Vendor_DrawFlickerText; 00171d00 vendor::Vendor_SetupScreenRender; 00174f80 vuchain::SetGSReg; 001754c0 stub::STUB_001754c0; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 005c8510 libc::strlen

void vendor::Vendor_HudUpdate(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  size_t sVar10;
  longlong lVar9;
  char *text;
  ulonglong uVar11;
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
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 local_d0 [32];
  
  uVar11 = 0;
  do {
    mobyfunc::GetMobyJointsWorldPos(moby,3,local_d0,&local_120);
    fVar1 = local_110 - local_120;
    fVar3 = local_10c - local_11c;
    fVar6 = local_108 - local_118;
    iVar12 = (int)((uVar11 & 0xffffffff) << 4);
    dVar24 = 0.0;
    fVar2 = local_100 - local_120;
    fVar5 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar6 * fVar6);
    fVar4 = local_fc - local_11c;
    fVar7 = local_f8 - local_118;
    if (fVar5 == 0.0) {
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    else {
      local_128 = *(float *)(&DAT_0073a57c + iVar12) / fVar5;
      local_130 = local_128 * fVar1;
      local_12c = local_128 * fVar3;
      local_128 = local_128 * fVar6;
    }
    uVar25 = 0x4000000000000000;
    local_140 = local_120 + local_130;
    local_13c = local_11c + local_12c;
    local_138 = local_118 + local_128;
    dVar15 = dVar24;
    dVar32 = dVar24;
    dVar18 = dVar24;
    if (fVar5 != 0.0) {
      fVar5 = (fVar5 - *(float *)(&DAT_0073a584 + iVar12) * 2.0) / fVar5;
      dVar15 = (double)(fVar5 * fVar6);
      dVar32 = (double)(fVar5 * fVar3);
      dVar18 = (double)(fVar5 * fVar1);
    }
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar7 * fVar7);
    if (fVar1 != 0.0) {
      local_128 = *(float *)(&DAT_0073a580 + iVar12) / fVar1;
      local_130 = local_128 * fVar2;
      local_12c = local_128 * fVar4;
      local_128 = local_128 * fVar7;
    }
    else {
      local_128 = 0.0;
      local_12c = 0.0;
      local_130 = 0.0;
    }
    local_140 = local_140 + local_130;
    dVar28 = (double)local_140;
    local_13c = local_13c + local_12c;
    dVar27 = (double)local_13c;
    local_138 = local_138 + local_128;
    dVar26 = (double)local_138;
    dVar29 = dVar24;
    dVar21 = dVar24;
    dVar16 = dVar24;
    if (fVar1 != 0.0) {
      fVar1 = (fVar1 - *(float *)(&DAT_0073a588 + iVar12) * 2.0) / fVar1;
      dVar29 = (double)(fVar1 * fVar7);
      dVar21 = (double)(fVar1 * fVar4);
      dVar16 = (double)(fVar1 * fVar2);
    }
    ProjectBoxToScreen(CONCAT44(local_140,local_13c),CONCAT44(local_138,local_114),
                       CONCAT44((float)((double)(float)(dVar28 + dVar18) + dVar16),
                                (float)((double)(float)(dVar27 + dVar32) + dVar21)),
                       CONCAT44((float)((double)(float)(dVar26 + dVar15) + dVar29),local_114),
                       &local_f0,&local_ec,auStack_e8,auStack_e4);
    if ((DAT_00e5a944 != '\0') || (DAT_00e5a94c != '\0')) {
      dVar13 = 1.0;
      dVar20 = dVar13;
      dVar14 = dVar21;
      dVar30 = dVar16;
      dVar31 = dVar15;
      dVar17 = dVar32;
      dVar19 = dVar18;
      if (DAT_00e5a94c != '\0') {
        dVar14 = (double)fastfunc::FastIntToDouble(8 - DAT_00e5a948);
        dVar13 = (double)(float)(dVar14 * 0.125);
        dVar14 = dVar21;
        dVar30 = dVar16;
        dVar31 = dVar15;
        dVar17 = dVar32;
        dVar19 = dVar18;
      }
      if (DAT_00e5a944 != '\0') {
        dVar15 = (double)fastfunc::FastIntToDouble(DAT_00e5a940);
        dVar13 = (double)(float)(dVar15 * 0.125);
      }
      dVar21 = (double)SQRT((float)(dVar19 * dVar19) + (float)(dVar17 * dVar17) +
                            (float)(dVar31 * dVar31));
      dVar15 = dVar24;
      dVar32 = dVar24;
      dVar18 = dVar24;
      if (dVar21 != dVar24) {
        dVar18 = (double)(float)((double)((float)(dVar21 * (double)(float)(dVar20 - dVar13)) * 0.5)
                                / dVar21);
        dVar15 = dVar18 * dVar19;
        dVar32 = dVar18 * dVar17;
        dVar18 = dVar18 * dVar31;
      }
      local_128 = (float)dVar18;
      local_12c = (float)dVar32;
      local_130 = (float)dVar15;
      dVar15 = dVar24;
      dVar32 = dVar24;
      dVar18 = dVar24;
      if (dVar21 != dVar24) {
        dVar18 = (double)(float)((double)(float)(dVar13 * dVar21) / dVar21);
        dVar15 = (double)(float)(dVar18 * dVar31);
        dVar32 = (double)(float)(dVar18 * dVar17);
        dVar18 = (double)(float)(dVar18 * dVar19);
      }
      dVar19 = (double)local_130;
      dVar22 = (double)local_12c;
      dVar23 = (double)local_128;
      dVar17 = (double)SQRT((float)(dVar30 * dVar30) + (float)(dVar14 * dVar14) +
                            (float)(dVar29 * dVar29));
      dVar21 = dVar24;
      dVar16 = dVar24;
      dVar31 = dVar24;
      if (dVar17 != dVar24) {
        dVar20 = (double)(float)((double)((float)(dVar17 * (double)(float)(dVar20 - dVar13)) * 0.5)
                                / dVar17);
        dVar21 = dVar20 * dVar30;
        dVar16 = dVar20 * dVar14;
        dVar31 = dVar20 * dVar29;
      }
      local_128 = (float)dVar31;
      local_12c = (float)dVar16;
      local_130 = (float)dVar21;
      dVar21 = dVar24;
      dVar16 = dVar24;
      if (dVar17 != dVar24) {
        dVar16 = (double)(float)((double)(float)(dVar13 * dVar17) / dVar17);
        dVar24 = (double)(float)(dVar16 * dVar29);
        dVar21 = (double)(float)(dVar16 * dVar14);
        dVar16 = (double)(float)(dVar16 * dVar30);
      }
      local_140 = (float)(dVar28 + dVar19) + local_130;
      local_13c = (float)(dVar27 + dVar22) + local_12c;
      local_138 = (float)(dVar26 + dVar23) + local_128;
      dVar29 = dVar24;
    }
    ProjectBoxToScreen(CONCAT44(local_140,local_13c),CONCAT44(local_138,local_114),
                       CONCAT44((float)((double)(float)((double)local_140 + dVar16) + dVar18),
                                (float)((double)(float)((double)local_13c + dVar21) + dVar32)),
                       CONCAT44((float)((double)(float)((double)local_138 + dVar29) + dVar15),
                                local_114),&local_e0,&local_dc,&local_d8,&local_d4);
    Vendor_SetupScreenRender(0x3ff0000000000000,9,7);
    stub::STUB_00078138(0x200,0x200);
    uVar8 = idol_draw::PackCmd(0,1,2,1,0xff);
    vuchain::SetGSReg(3,uVar8);
    iVar12 = (int)uVar11;
    if (iVar12 == 5) {
      DrawWeaponIcons(moby);
    }
    else if (iVar12 == 4) {
      DrawExitButton(moby);
    }
    else if (iVar12 == 3) {
      DrawBuyButton(moby,(int)local_e0,(int)local_dc);
    }
    else if (iVar12 == 2) {
      DrawVendorDude(moby);
    }
    else if (iVar12 == 1) {
      DrawWeaponStrings(moby);
    }
    else if (iVar12 == 0) {
      stub::STUB_0007813c(0,0,0x200,0x80,0x200,0x80,0);
      if ((g_JapaneseMode != false) && (DAT_0071efb4 = DAT_0073a578, (DAT_0159c330 & 0x1f) < 0x10))
      {
        DAT_0071efb4 = DAT_0073a578 & 0xffffff;
      }
      sVar10 = libc::strlen(DAT_00e5a67c);
      if ((int)(sVar10 - DAT_00e5a694 / 0x14) < 1) {
        lVar9 = mobyutil::MB_randInt(0x18);
        text = (char *)help::help_msg_string_by_index
                                 (*(StringId *)(&DAT_0073a318 + (int)(lVar9 << 2)));
        Vendor_SetScrollText(text);
      }
      else {
        DAT_00e5a694 = DAT_00e5a694 + 2;
      }
      if (g_JapaneseMode == false) {
        DrawVendorHintFrame(uVar25,DAT_00e5a67c,-DAT_00e5a694,8);
      }
      else {
        draw::FontPrint_unk((double)(longlong)-DAT_00e5a694,0x401c000000000000,0x3ff4000000000000,
                            &DAT_00172c20,0x740000,DAT_0073a578,DAT_00e5a67c,0xffffffffffffffff);
      }
      stub::STUB_0007813c(0,0,4,0x40,0x200,0x80,0);
      stub::STUB_0007813c(0xe2,0,0xe6,0x40,0x200,0x80,0);
    }
    Vendor_DrawFlickerText((double)local_e0,(double)local_dc,uVar11);
    draw::ResetHUDPass();
    uVar25 = idol_draw::PackCmd(0,1,2,1,0xff);
    vuchain::SetGSReg(3,uVar25);
    uVar25 = FUN_00502f08(1,1,0,0,0,0);
    vuchain::SetGSReg(6,uVar25);
    stub::STUB_001754c0();
    if (Cutscene == 0) {
      draw::Sprite_DrawShape
                ((int)local_d8,(int)local_d4,(int)local_e0,(int)local_dc,0,0,(int)(local_f0 * 0.5),
                 (int)(local_ec * 0.5));
    }
    else {
      uVar25 = fastfunc::FastDoubleToInt((double)(local_ec * 0.92857146 * 0.5));
      draw::Sprite_DrawShape
                ((int)local_d8,(int)local_d4,(int)local_e0,(int)local_dc,0,0,(int)(local_f0 * 0.5),
                 uVar25);
    }
    uVar11 = (ulonglong)(iVar12 + 1);
  } while (iVar12 + 1 < 6);
  return;
}



//==== 00173690  ns=vendor  size=0x4bc
// sig: undefined Vendor_DrawMobyHighlight(void)
// callers(1): 001744f0 vendor::Vendor_PostUpdate
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000f1238 mobyfunc::GetMobyJointsWorldPos; 0016a3a8 vendor::ProjectBoxToScreen; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void vendor::Vendor_DrawMobyHighlight(undefined8 param_1)

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
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_160 [144];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 local_c0 [24];
  
  iVar17 = 1;
  iVar16 = 0x10;
  do {
    mobyfunc::GetMobyJointsWorldPos(param_1,3,local_c0,&local_190);
    fVar1 = local_180 - local_190;
    fVar3 = local_17c - local_18c;
    fVar5 = local_178 - local_188;
    fVar8 = 0.0;
    fVar2 = local_170 - local_190;
    fVar4 = local_16c - local_18c;
    fVar6 = local_168 - local_188;
    fVar7 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5);
    if (fVar7 == 0.0) {
      local_198 = 0.0;
      local_19c = 0.0;
      local_1a0 = 0.0;
    }
    else {
      local_198 = *(float *)(&DAT_0073a57c + iVar16) / fVar7;
      local_1a0 = local_198 * fVar1;
      local_19c = local_198 * fVar3;
      local_198 = local_198 * fVar5;
    }
    fVar14 = local_198;
    fVar13 = local_19c;
    fVar12 = local_1a0;
    fVar9 = fVar8;
    fVar10 = fVar8;
    fVar11 = fVar8;
    if (fVar7 != 0.0) {
      fVar7 = (fVar7 - *(float *)(&DAT_0073a584 + iVar16) * 2.0) / fVar7;
      fVar9 = fVar7 * fVar1;
      fVar10 = fVar7 * fVar5;
      fVar11 = fVar7 * fVar3;
    }
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6);
    if (fVar1 != 0.0) {
      local_198 = *(float *)(&DAT_0073a580 + iVar16) / fVar1;
      local_1a0 = local_198 * fVar2;
      local_19c = local_198 * fVar4;
      local_198 = local_198 * fVar6;
    }
    else {
      local_198 = 0.0;
      local_19c = 0.0;
      local_1a0 = 0.0;
    }
    fVar3 = fVar8;
    fVar5 = fVar8;
    if (fVar1 != 0.0) {
      fVar1 = (fVar1 - *(float *)(&DAT_0073a588 + iVar16) * 2.0) / fVar1;
      fVar8 = fVar1 * fVar6;
      fVar3 = fVar1 * fVar4;
      fVar5 = fVar1 * fVar2;
    }
    local_1a0 = local_190 + fVar12 + local_1a0;
    local_198 = local_188 + fVar14 + local_198;
    local_19c = local_18c + fVar13 + local_19c;
    ProjectBoxToScreen(CONCAT44(local_1a0,local_19c),CONCAT44(local_198,local_184),
                       CONCAT44(local_1a0 + fVar9 + fVar5,local_19c + fVar11 + fVar3),
                       CONCAT44(local_198 + fVar10 + fVar8,local_184),auStack_d0,auStack_cc,
                       auStack_c8,auStack_c4);
    FUN_00502f08(1,1,0,0,0,0);
    stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
    idol_draw::PackCmd(0,1,0,1,0x80);
    draw::GetEffectTex(0x19);
    uVar15 = idol_draw::Blend(1,1,0,2,0,0,1,1);
    vuchain::SetGSReg(0x16,uVar15);
    draw::FastDrawQuad(local_160,0,1,EffectTexHeaders,9);
    iVar17 = iVar17 + 1;
    iVar16 = iVar16 + 0x10;
  } while (iVar17 < 6);
  return;
}



//==== 00173b60  ns=vendor  size=0x40c
// sig: undefined Vendor_DrawScreen(void)
// callers(1): 001744f0 vendor::Vendor_PostUpdate
// callees(11): 0006889c draw::Sprite_DrawShape; 00071ac0 draw::ResetHUDPass; 00078138 stub::STUB_00078138; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000f1934 mobyfunc::MB_AddToDrawList; 0016a108 vendor::ProjectBoxToScreenInt; 001711a8 vendor::Vendor_DrawItemInfo; 001717a8 vendor::Vendor_DrawFlickerText; 00171d00 vendor::Vendor_SetupScreenRender; 004d5fe4 idol_draw::DrawDepth; 00502ea8 idol_draw::PackCmd

void vendor::Vendor_DrawScreen(undefined8 param_1)

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
  RenderingStep *pRVar15;
  undefined8 uVar16;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [40];
  
  mobyfunc::GetMobyJointsWorldPos(param_1,3,local_70,&local_b0);
  fVar3 = local_a0 - local_b0;
  fVar11 = local_9c - local_ac;
  fVar12 = local_98 - local_a8;
  fVar2 = 0.0;
  fVar4 = local_90 - local_b0;
  fVar13 = local_8c - local_ac;
  fVar1 = SQRT(fVar3 * fVar3 + fVar11 * fVar11 + fVar12 * fVar12);
  fVar14 = local_88 - local_a8;
  fVar5 = fVar2;
  fVar6 = fVar2;
  fVar7 = fVar2;
  if (fVar1 != 0.0) {
    fVar7 = 0.03 / fVar1;
    fVar5 = fVar7 * fVar3;
    fVar6 = fVar7 * fVar12;
    fVar7 = fVar7 * fVar11;
  }
  fVar8 = fVar2;
  fVar9 = fVar2;
  fVar10 = fVar2;
  if (fVar1 != 0.0) {
    fVar1 = (fVar1 - 0.06) / fVar1;
    fVar8 = fVar1 * fVar12;
    fVar9 = fVar1 * fVar11;
    fVar10 = fVar1 * fVar3;
  }
  fVar1 = SQRT(fVar4 * fVar4 + fVar13 * fVar13 + fVar14 * fVar14);
  fVar3 = fVar2;
  fVar11 = fVar2;
  fVar12 = fVar2;
  if (fVar1 != 0.0) {
    fVar12 = 0.04 / fVar1;
    fVar3 = fVar12 * fVar14;
    fVar11 = fVar12 * fVar13;
    fVar12 = fVar12 * fVar4;
  }
  fVar12 = local_b0 + fVar5 + fVar12;
  fVar11 = local_ac + fVar7 + fVar11;
  fVar3 = local_a8 + fVar6 + fVar3;
  fVar5 = fVar2;
  fVar6 = fVar2;
  if (fVar1 != 0.0) {
    fVar1 = (fVar1 - 0.04) / fVar1;
    fVar2 = fVar1 * fVar14;
    fVar5 = fVar1 * fVar13;
    fVar6 = fVar1 * fVar4;
  }
  ProjectBoxToScreenInt
            (CONCAT44(fVar12,fVar11),CONCAT44(fVar3,local_a4),
             CONCAT44(fVar12 + fVar6 + fVar10,fVar11 + fVar5 + fVar9),
             CONCAT44(fVar3 + fVar2 + fVar8,local_a4),&local_80,&local_7c,&local_78,&local_74);
  Vendor_SetupScreenRender(0x3ff0000000000000,9,9);
  stub::STUB_00078138(0x200,0x200);
  pRVar15 = HUD_Pass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  Vendor_DrawItemInfo(param_1,local_80,local_7c);
  Vendor_DrawFlickerText((double)(longlong)(int)local_80,(double)(longlong)(int)local_7c,6);
  draw::ResetHUDPass();
  stub::STUB_00078138(0x200,0x200);
  pRVar15 = HUD_Pass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  pRVar15 = MobyPass;
  uVar16 = idol_draw::PackCmd(0,1,2,1,0xff);
  idol_draw::DrawDepth(pRVar15,uVar16);
  mobyfunc::MB_AddToDrawList(param_1,1);
  draw::Sprite_DrawShape
            (local_78,local_74,local_80,local_7c,0,0,
             ((int)local_80 >> 1) + (uint)((int)local_80 < 0 && (local_80 & 1) != 0),
             ((int)local_7c >> 1) + (uint)((int)local_7c < 0 && (local_7c & 1) != 0));
  return;
}



//==== 00173f78  ns=vendor  size=0x574
// sig: undefined Vendor_DrawScrollingOverlay(void)
// callers(1): 001744f0 vendor::Vendor_PostUpdate
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0073a618: '?fff' (raw)

void vendor::Vendor_DrawScrollingOverlay(void)

{
  int iVar1;
  undefined1 local_130 [144];
  
  DAT_0073a7dc = DAT_0073a7dc + 0.01;
  if (1.0 < DAT_0073a7dc) {
    DAT_0073a7dc = DAT_0073a7dc - 1.0;
  }
  iVar1 = 0;
  FUN_00502f08(0,0,0,0,0,0);
  stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  idol_draw::PackCmd(0,1,0,1,0x40);
  draw::GetEffectTex(0x18);
  do {
    draw::FastDrawQuad(local_130,0,1,EffectTexHeaders,9);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



//==== 001744f0  ns=vendor  size=0x61c
// sig: undefined Vendor_PostUpdate(void)
// callers(1): 000e0e60 main::startLevel
// callees(31): 00066088 draw::ComposeCameraMatrix; 0006849c stub::STUB_0006849c; 0006bb78 draw::DefaultDraw; 0006d704 stub::STUB_0006d704; 0006d708 stub::STUB_0006d708; 0006e068 draw::Draw_FlushAndPresent; 0006e0d8 draw::DrawRenderTargetToScreen; 00078100 stub::STUB_00078100; 000d5c20 hud::DrawGameplayHud; 000ef810 mobyfunc::InitMobyInstance; 000f1448 stub::STUB_000f1448; 000f1844 stub::STUB_000f1844; 000f1848 stub::STUB_000f1848; 000f184c stub::STUB_000f184c; 000f1850 mobyfunc::DrawMobyDepth; 000f1934 mobyfunc::MB_AddToDrawList; 000f1974 mobyfunc::DrawMobyList; 000f1ea0 mobyutil::MB_SetLights; 000f31a8 mobyfunc::UpdateMobyTransform; 0016c6b8 vendor::Vendor_SpawnPreviewMoby; 00172c40 vendor::Vendor_HudUpdate; 00173690 vendor::Vendor_DrawMobyHighlight; 00173b60 vendor::Vendor_DrawScreen; 00173f78 vendor::Vendor_DrawScrollingOverlay; 00174cf4 stub::STUB_00174cf4; 00174f80 vuchain::SetGSReg; 00500250 fastfunc::FastMemSetZero; 00502ea8 idol_draw::PackCmd; 00503e00 fios::LoadAssetFromFile; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 00653fb0: 'rc1/ps3data/global/vendor.ps3' | 00653fd0: 'rc1/ps3data/global/vendor_pal.ps3'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vendor::Vendor_PostUpdate(void)

{
  RsxCmd *pRVar1;
  RsxCmd *pRVar2;
  MobyModeBit *pMVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  int iVar6;
  MobyInstance *pMVar9;
  longlong lVar7;
  undefined8 uVar8;
  char acStack_70 [64];
  
  if (g_CutscenePlaying != 0) {
    return;
  }
  stub::STUB_00078100();
  iVar6 = DAT_00e5a65c;
  if (DAT_00e5a658 < 1) {
    if (DAT_00e5a658 < 0) {
      return;
    }
    if (DAT_00e5a65c != 0) {
      DAT_00e5a66c->modeBits = DAT_00e5a66c->modeBits | DISABLED;
    }
    g_RenderFlags = 0x100ff;
    if ((iVar6 != 0) || (g_OpenVendorState == 3)) {
      g_RenderFlags = 0x7f;
    }
    draw::DefaultDraw();
    if (DAT_00e5a65c == 0) {
      return;
    }
    DAT_00e5a65c = 0;
    DAT_00e5a658 = 1;
    DAT_0159c330 = DAT_0159c330 + 1;
    DAT_00e5aa64 = 0x60000;
    draw::Draw_FlushAndPresent();
    iVar6 = g_lastVendorWasPda;
    pMVar9 = DAT_00e5a66c;
    pMVar3 = &DAT_00e5a66c->modeBits;
    DAT_00e5a66c->scale = 0.141908;
    pMVar9->modeBits =
         *pMVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    if (iVar6 == 0) {
      fRam00e5a96c = GameCamera.orientMtx.forward.w;
      fRam00e5a968 = GameCamera.orientMtx.forward.z;
      fRam00e5a964 = GameCamera.orientMtx.forward.y;
      _DAT_00e5a960 = GameCamera.orientMtx.forward.x;
      fRam00e5a97c = GameCamera.orientMtx.right.w;
      fRam00e5a978 = GameCamera.orientMtx.right.z;
      fRam00e5a974 = GameCamera.orientMtx.right.y;
      _DAT_00e5a970 = GameCamera.orientMtx.right.x;
      GameCamera.orientMtx.right.x =
           GameCamera.orientMtx.up.y * GameCamera.orientMtx.forward.z -
           GameCamera.orientMtx.up.z * GameCamera.orientMtx.forward.y;
      fRam00e5a98c = GameCamera.orientMtx.up.w;
      fRam00e5a988 = GameCamera.orientMtx.up.z;
      fRam00e5a984 = GameCamera.orientMtx.up.y;
      _DAT_00e5a980 = GameCamera.orientMtx.up.x;
      GameCamera.orientMtx.right.y =
           GameCamera.orientMtx.up.z * GameCamera.orientMtx.forward.x -
           GameCamera.orientMtx.up.x * GameCamera.orientMtx.forward.z;
      GameCamera.orientMtx.right.z =
           GameCamera.orientMtx.up.x * GameCamera.orientMtx.forward.y -
           GameCamera.orientMtx.up.y * GameCamera.orientMtx.forward.x;
      GameCamera.orientMtx.right.w = 0.0;
    }
    else {
      DAT_00e5a6c0 = GameCamera.rot.azimuth;
      DAT_00e5a6c4 = GameCamera.rot.elevation;
      DAT_00e5a6c8 = GameCamera.rot.radius;
      DAT_00e5a6cc[0] = GameCamera.field10_0x15c[0];
      DAT_00e5a6cc[1] = GameCamera.field10_0x15c[1];
      DAT_00e5a6cc[2] = GameCamera.field10_0x15c[2];
      DAT_00e5a6cc[3] = GameCamera.field10_0x15c[3];
      fRam00e5a96c = GameCamera.orientMtx.forward.w;
      fRam00e5a968 = GameCamera.orientMtx.forward.z;
      fRam00e5a964 = GameCamera.orientMtx.forward.y;
      _DAT_00e5a960 = GameCamera.orientMtx.forward.x;
      fRam00e5a97c = GameCamera.orientMtx.right.w;
      fRam00e5a978 = GameCamera.orientMtx.right.z;
      fRam00e5a974 = GameCamera.orientMtx.right.y;
      _DAT_00e5a970 = GameCamera.orientMtx.right.x;
      fRam00e5a98c = GameCamera.orientMtx.up.w;
      fRam00e5a988 = GameCamera.orientMtx.up.z;
      fRam00e5a984 = GameCamera.orientMtx.up.y;
      _DAT_00e5a980 = GameCamera.orientMtx.up.x;
      libc::memset(0x951710,0,0x10);
      libc::memset(0x951720,0,0x10);
      libc::memset(0x951730,0,0x10);
      GameCamera.orientMtx.forward.x = 1.0;
      GameCamera.orientMtx.right.y = 1.0;
      GameCamera.orientMtx.up.z = 1.0;
      GameCamera.orientMtx.up.w = 1.0;
      draw::ComposeCameraMatrix();
    }
    DAT_00e5a670 = (MobyInstance *)(DAT_00e5a664 + 0x100);
    mobyfunc::InitMobyInstance(DAT_00e5a670,0xd);
    pMVar9 = DAT_00e5a670;
    DAT_00e5a670->drawDistance = 0x40;
    mobyfunc::UpdateMobyTransform(pMVar9);
    mobyutil::MB_SetLights(DAT_00e5a670,0x202020,0xe,0xe,0);
    mobyfunc::InitMobyInstance(DAT_00e5a670 + 5,0xd);
    pMVar9 = DAT_00e5a670 + 5;
    DAT_00e5a670[5].drawDistance = 0x40;
    mobyfunc::UpdateMobyTransform(pMVar9);
    mobyutil::MB_SetLights(DAT_00e5a670 + 5,0x202020,0xe,0xe,0);
    piVar5 = g_viewMtxPtr;
    if ((*(char *)((int)g_viewMtxPtr + 0x11) == -0x7f) && (((uint)g_viewMtxPtr[5] >> 1 & 1) == 0)) {
      (*(code *)**(undefined4 **)(*g_viewMtxPtr + 0x18))(g_viewMtxPtr);
    }
    piVar5[0x6a3] = piVar5[0x6a3] + 2;
    Vendor_SpawnPreviewMoby();
    DAT_00e5a67c = DAT_00e5a664 + 0x1400;
    fastfunc::FastMemSetZero(DAT_00e5a67c,0x400);
    DAT_00e5a668 = DAT_00e5a67c + 0x400;
    if (Music == 0) {
      if (g_IsPal == 0) {
        libc::snprintf(acStack_70,"rc1/ps3data/global/vendor_pal.ps3");
      }
      else {
        libc::snprintf(acStack_70,"rc1/ps3data/global/vendor.ps3");
      }
      lVar7 = fios::LoadAssetFromFile(acStack_70,DAT_00e5a668,0xffffffffffffffff);
      DAT_00e5a9d1 = lVar7 != 0;
    }
    else {
      DAT_00e5a9d1 = 0;
    }
  }
  else if (1 < DAT_00e5a658) {
    return;
  }
  draw::DrawRenderTargetToScreen(DAT_00e5a660);
  pRVar1 = DepthPass->command;
  DepthPass->command = pRVar1 + 2;
  pRVar4 = DepthPass;
  pRVar2 = DepthPass->command;
  *pRVar1 = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar4->command = pRVar2 + 2;
  pRVar1[1] = 0xffffff00;
  *pRVar2 = NV4097_CLEAR_SURFACE_x1;
  pRVar2[1] = 1;
  pRVar2[2] = NV4097_NO_OPERATION_x1;
  pRVar1 = pRVar4->command;
  pRVar1[1] = 0;
  pRVar4->command = pRVar1 + 2;
  stub::STUB_0006d704();
  draw::ComposeCameraMatrix();
  stub::STUB_0006849c();
  mobyfunc::DrawMobyDepth();
  stub::STUB_000f1844();
  stub::STUB_000f1848();
  if (DAT_00e5a9d3 == '\0' && g_lastVendorWasPda == 0) {
    if ((&DAT_00e5a724)[DAT_00e5a6a8 * 0x10] == '\x01') {
      if (*(int *)(&DAT_00739240 + *(int *)(&g_VendorItems + DAT_00e5a6a8 * 0x10) * 0x40) != 0) {
        mobyfunc::MB_AddToDrawList(DAT_00e5a670 + 2,1);
      }
    }
    else {
      mobyfunc::MB_AddToDrawList(DAT_00e5a670 + 3,1);
    }
  }
  mobyfunc::MB_AddToDrawList(DAT_00e5a66c,1);
  if (g_lastVendorWasPda == 0) {
    Vendor_DrawScrollingOverlay();
  }
  Vendor_HudUpdate(DAT_00e5a66c);
  if (g_VendorMenuState != 0) {
    Vendor_DrawScreen(DAT_00e5a670 + 4);
  }
  Vendor_DrawMobyHighlight(DAT_00e5a66c);
  uVar8 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar8);
  hud::DrawGameplayHud();
  stub::STUB_0006d708();
  stub::STUB_000f184c();
  mobyfunc::DrawMobyList();
  stub::STUB_00174cf4(0x10);
  stub::STUB_000f1448();
  return;
}



//==== 00174b0c  ns=vuchain  size=0x14
// sig: undefined ???_Unused_VuChain_SetBufSize_10000(void)
// callers(0): 
// callees(0): 

void vuchain::____Unused_VuChain_SetBufSize_10000(void)

{
  DAT_0073a768 = 0x10000;
  return;
}



//==== 00174b20  ns=vuchain  size=0xb8
// sig: undefined VU0_loadMicroProgram(void)
// callers(0): 
// callees(0): 

int vuchain::VU0_loadMicroProgram(int *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar3 = 0;
  cVar1 = *(char *)((int)param_1 + 7);
  while( true ) {
    if (cVar1 != 'J') {
      return iVar3;
    }
    bVar2 = *(byte *)((int)param_1 + 6);
    iVar6 = 0;
    param_1 = param_1 + 2;
    iVar4 = (uint)bVar2 + ((uint)((LZCOUNT(-(uint)bVar2) << 0x3a) >> 0x3f) & 0x100 - bVar2);
    puVar5 = param_2;
    if (0 < iVar4) {
      do {
        if (*param_1 == -0x7ffffcc4) {
          *param_1 = -0x7fffffd0;
        }
        iVar6 = iVar6 + 1;
        param_2 = puVar5 + 1;
        *puVar5 = *(undefined8 *)param_1;
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 2;
        puVar5 = param_2;
      } while (iVar6 < iVar4);
    }
    if (iVar4 != 0x100) break;
    cVar1 = *(char *)((int)param_1 + 7);
  }
  return iVar3;
}



//==== 00174bd8  ns=stub  size=0x4
// sig: undefined STUB_00174bd8(void)
// callers(3): 00011648 boot::LoadGameplay; 000d8be8 initonce::InitOnce; 000dcf58 loaders::NAVG_LoadFile
// callees(0): 

void stub::STUB_00174bd8(void)

{
  return;
}



//==== 00174bdc  ns=vuchain  size=0x48
// sig: void VU1_setBufSizeByLevel(void)
// callers(14): 00011b74 boot::Load_Front_End; 0013b838 pause::UpdatePause; 0013d8a0 pause::FrontEnd_UpdateMenu; 0015e430 space::PlaySpaceCutscene; 0015e8a0 space::StartLeaveLevelCutscene; 0015eaa4 space::Space_StartLevelArrival; 00161788 space::UpdateSpace; 00167a30 update::mode_sceneUnInit; 00169b14 update::mode_creditsUnInit; 00169b88 update::UpdateCredits; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 0016b650 vendor::StartGadgetPickupCutscene; 0016da88 vendor::Vendor_PreUpdate; 004d3044 FUN_004d3044
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vuchain::VU1_setBufSizeByLevel(void)

{
  DAT_00e5aa64 = *(undefined4 *)
                  (&DAT_00735524 +
                  (int)(((ulonglong)Level +
                         (0x12 - (longlong)(int)Level >> 0x3f & -(ulonglong)Level) & 0xffffffff) <<
                       2));
  return;
}



//==== 00174c24  ns=vuchain  size=0x64
// sig: void VU1_initChain(void)
// callers(12): 00011b74 boot::Load_Front_End; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000656b8 draw::ResetFrameBufferForCutscene; 000d8be8 initonce::InitOnce; 000e0e60 main::startLevel; 0013b108 update::OpenPauseMenu; 0013b838 pause::UpdatePause; 0013d428 pause::FrontEnd_InitMenu; 00163aa0 space::SpaceTransition_LoadWad; 00164760 space::PlaySpacePlate; 004d3044 FUN_004d3044
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vuchain::VU1_initChain(void)

{
  DAT_00e5aa50 = DAT_00a108dc;
  DAT_00e5aa54 = DAT_00a108e0;
  DAT_00a10738 = (DAT_00a108dc + DAT_00e5aa64) - DAT_0071fbd4;
  DAT_00e5aa68 = 0;
  DAT_00e5aa58 = DAT_00a108dc;
  DAT_00a10740 = DAT_00a10738 + -0x2000;
  return;
}



//==== 00174c88  ns=vuchain  size=0x68
// sig: void VU1_swapChain(void)
// callers(5): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vuchain::VU1_swapChain(void)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_00e5aa68;
  DAT_00e5aa68 = (int)(1 - uVar2);
  iVar1 = *(int *)((int)&DAT_00e5aa50 + (int)((1 - uVar2 & 0xffffffff) << 2));
  DAT_00e5aa5c = DAT_00e5aa58;
  DAT_00e5aa58 = iVar1;
  DAT_00a10738 = (iVar1 + DAT_00e5aa64) - DAT_0071fbd4;
  DAT_00a10740 = DAT_00a10738 + -0x2000;
  return;
}



//==== 00174cf0  ns=stub  size=0x4
// sig: undefined STUB_00174cf0(void)
// callers(6): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0e60 main::startLevel; 0013b838 pause::UpdatePause; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_00174cf0(void)

{
  return;
}



//==== 00174cf4  ns=stub  size=0x4
// sig: undefined STUB_00174cf4(void)
// callers(15): 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 000e0038 loaders::LoadNpcMobys; 000e0e60 main::startLevel; 0013b108 update::OpenPauseMenu; 0013b838 pause::UpdatePause; 0013ca68 pause::DrawPauseMenu; 0013d428 pause::FrontEnd_InitMenu; 0016114c space::TransitionDraw_Space; 00164760 space::PlaySpacePlate; 00164c58 space::DoSpaceTransition; 00169b14 update::mode_creditsUnInit; 00169b88 update::UpdateCredits; 0016b2f8 vendor::Vendor_StartWeaponCutscene; 001744f0 vendor::Vendor_PostUpdate
// callees(0): 

void stub::STUB_00174cf4(void)

{
  return;
}



//==== 00174cf8  ns=vuchain  size=0x3c
// sig: undefined VU1_addDataRef(void)
// callers(0): 
// callees(0): 

void vuchain::VU1_addDataRef(undefined1 param_1,undefined1 param_2)

{
  *DAT_00e5aa58 = param_2;
  DAT_00e5aa58[1] = param_1;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}



//==== 00174d34  ns=vuchain  size=0x9c
// sig: undefined VU1_addDataRefToLoc(void)
// callers(0): 
// callees(2): 00502e98 FUN_00502e98; 00503104 FUN_00503104

void vuchain::VU1_addDataRefToLoc(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *DAT_00e5aa58 = (char)param_3;
  DAT_00e5aa58[1] = param_2;
  uVar1 = FUN_00502e98(4,4,0);
  DAT_00e5aa58[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_3,0xc,0);
  DAT_00e5aa58[3] = uVar1;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}



//==== 00174dd0  ns=vuchain  size=0xd0
// sig: undefined VU1_addDataDirect(void)
// callers(0): 
// callees(3): 005002cc fastfunc::FastMemCopy; 00502e98 FUN_00502e98; 00503104 FUN_00503104

void vuchain::VU1_addDataDirect(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 uVar1;
  
  *DAT_00e5aa58 = (char)param_3;
  DAT_00e5aa58[1] = 0;
  uVar1 = FUN_00502e98(4,4,0);
  DAT_00e5aa58[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_3,0xc,0);
  DAT_00e5aa58[3] = uVar1;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  fastfunc::FastMemCopy(DAT_00e5aa58,param_2,(int)((param_3 & 0xffffffff) << 4));
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(param_3 << 4);
  return;
}



//==== 00174ea0  ns=vuchain  size=0xa8
// sig: undefined VU1_skipData(void)
// callers(0): 
// callees(2): 00502e98 FUN_00502e98; 00503104 FUN_00503104

void vuchain::VU1_skipData(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *DAT_00e5aa58 = (char)param_2;
  DAT_00e5aa58[1] = 0;
  uVar1 = FUN_00502e98(4,4,0);
  DAT_00e5aa58[2] = uVar1;
  uVar1 = FUN_00503104(param_1,param_2,0xc,0);
  DAT_00e5aa58[3] = uVar1;
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(param_2 << 4) + 0x10;
  return;
}



//==== 00174f48  ns=vuchain  size=0x38
// sig: undefined VU1_addVIFcode(void)
// callers(0): 
// callees(0): 

void vuchain::VU1_addVIFcode(undefined1 param_1)

{
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = 0;
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = param_1;
  DAT_00e5aa58 = DAT_00e5aa58 + 0x10;
  return;
}



//==== 00174f80  ns=vuchain  size=0xec
// sig: undefined SetGSReg(void)
// callers(121): 00012ec8 boot::GameStart; 00013970 stub::Transition_DrawSky; 00016940 mobyupdate_unsorted::Moby1267_DrawHud; 00069a50 draw::FontPrint_unk3; 0006b1f8 draw::DrawScreenEffect; 0006b890 draw::DrawScreenInsertEffect; 0006c8d0 draw::FontPrint; 00071180 draw::SetScreenResolution; 00071f70 draw::???_Draw_FogBlendPass; 00076580 draw::DrawWater; 000768e8 draw::???_Draw_EffectStrip_M401; 000d93c0 initsky::InitSky; 000e0e60 main::startLevel; 000e2e10 map::DrawMapFrame; 0013c5e8 pause::DrawTVTextures; 0013ca68 pause::DrawPauseMenu; 0013de20 pause::FrontEnd_DrawMenu; 001402c8 pause::MenuText_Draw; 00141c90 pause::DrawPauseStrings; 00144638 pause::DrawSkillPointsFrame; 00144ec0 pause::MenuButton_Draw; 00146708 pause::PlanetInfo_Draw; 00147334 pause::ItemInfo_DrawCost; 00147630 pause::MapPage_Draw; 001476f0 pause::MapMenu_DrawOptions
// callees(0): 

void vuchain::SetGSReg(int param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = TexSamplerFlags;
  lVar2 = DAT_010ee2f0;
  lVar3 = DAT_010ee300;
  lVar4 = DAT_010ee308;
  lVar5 = DAT_010ee310;
  lVar6 = DAT_010ee318;
  if (param_1 < 8) {
    if (param_1 < 6) {
      lVar6 = param_2;
      if (param_1 != 3) {
        lVar6 = DAT_010ee318;
      }
    }
    else {
      lVar1 = param_2;
      if (6 < param_1) {
        lVar1 = TexSamplerFlags;
        DAT_010ee2e8 = param_2;
      }
    }
  }
  else {
    lVar4 = param_2;
    if ((param_1 != 0x21) && (lVar3 = param_2, lVar4 = DAT_010ee308, param_1 != 0x1a)) {
      if (param_1 == 0x19) {
        DAT_010ee2fc = EffectTexHeaders + (int)(param_2 << 5) + (int)(param_2 << 2);
        lVar3 = DAT_010ee300;
      }
      else if (param_1 == 0x18) {
        DAT_010ee2f8 = EffectTexHeaders + (int)(param_2 << 5) + (int)(param_2 << 2);
        lVar3 = DAT_010ee300;
      }
      else {
        lVar2 = param_2;
        lVar3 = DAT_010ee300;
        if ((param_1 != 0x16) && (lVar2 = DAT_010ee2f0, lVar5 = param_2, param_1 != 8)) {
          lVar5 = DAT_010ee310;
        }
      }
    }
  }
  DAT_010ee318 = lVar6;
  DAT_010ee310 = lVar5;
  DAT_010ee308 = lVar4;
  DAT_010ee300 = lVar3;
  DAT_010ee2f0 = lVar2;
  TexSamplerFlags = lVar1;
  return;
}



//==== 0017506c  ns=vuchain  size=0x4c
// sig: undefined VU1_addDataInLine(void)
// callers(0): 
// callees(0): 

void vuchain::VU1_addDataInLine(longlong param_1)

{
  *DAT_00e5aa58 = 0;
  DAT_00e5aa58[1] = (char)DAT_00e5aa58 + (char)(param_1 << 4) + '\x10';
  DAT_00e5aa58[2] = 0;
  DAT_00e5aa58[3] = 0;
  DAT_00e5aa58 = DAT_00e5aa58 + (int)(param_1 << 4) + 0x10;
  return;
}



//==== 001750c8  ns=vuchain  size=0x328
// sig: void VU1_setScissor(int left, int right, int top, int bot)
// callers(0): 
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void vuchain::VU1_setScissor(int left,int right,int top,int bot)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  RenderingStep *pRVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar11;
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
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar7 = uVar5 - 0xc0;
  puVar2 = (ulonglong *)lVar7;
  *puVar2 = uVar5;
  *(int *)(puVar2 + 0x10) = bot;
  *(int *)((int)puVar2 + 0x84) = bot;
  *(int *)(puVar2 + 0x11) = bot;
  *(int *)((int)puVar2 + 0x8c) = bot;
  auVar12 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = top;
  puVar2[0x17] = unaff_r31;
  *(int *)((int)puVar2 + 0x84) = top;
  *(int *)(puVar2 + 0x11) = top;
  *(int *)((int)puVar2 + 0x8c) = top;
  auVar13 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = right;
  *(int *)((int)puVar2 + 0x84) = right;
  *(int *)(puVar2 + 0x11) = right;
  RVar10 = (RsxCmd)((((longlong)right - (longlong)left) + 1U & 0xffffffff) << 0x10) | left & 0xffff;
  *(int *)((int)puVar2 + 0x8c) = right;
  pRVar3 = HUD_Pass;
  auVar12 = vectorSubtractUnsignedWordModulo(auVar12,auVar13);
  puVar2[0x16] = unaff_r30;
  pRVar6 = pRVar3->command;
  RVar9 = (RsxCmd)((((longlong)bot - (longlong)top) + 1U & 0xffffffff) << 0x10) | top & 0xffff;
  auVar14._0_4_ = auVar12._0_4_ + 1;
  auVar14._8_8_ = auVar12._8_8_;
  auVar14._4_4_ = auVar12._4_4_ + 1;
  auVar17._0_8_ = auVar14._0_8_;
  auVar17._12_4_ = auVar12._12_4_;
  auVar17._8_4_ = auVar12._8_4_ + 1;
  auVar20._0_12_ = auVar17._0_12_;
  auVar20._12_4_ = auVar17._12_4_ + 1;
  auVar14 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *(int *)(puVar2 + 0x10) = left;
  *(int *)((int)puVar2 + 0x84) = left;
  *(int *)(puVar2 + 0x11) = left;
  *(int *)((int)puVar2 + 0x8c) = left;
  auVar12 = loadVectorLeftIndexed(0x80,0x1750b8);
  auVar17 = loadVectorLeftIndexed(4,0x1750b8);
  auVar19 = loadVectorLeftIndexed(8,0x1750b8);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar22 = *(undefined1 (*) [16])(puVar2 + 0x10);
  *pRVar6 = (RsxCmd)&DAT_00080a00;
  auVar17 = vectorSubtractUnsignedWordModulo(auVar14,auVar22);
  auVar12 = vectorLogicalAnd(auVar20,auVar15);
  auVar14 = vectorLogicalAnd(auVar13,auVar15);
  auVar21._0_4_ = auVar17._0_4_ + 1;
  auVar21._8_8_ = auVar17._8_8_;
  auVar21._4_4_ = auVar17._4_4_ + 1;
  auVar16._0_8_ = auVar21._0_8_;
  auVar16._12_4_ = auVar17._12_4_;
  auVar16._8_4_ = auVar17._8_4_ + 1;
  auVar13._0_12_ = auVar16._0_12_;
  auVar13._12_4_ = auVar16._12_4_ + 1;
  auVar20 = vectorLogicalAnd(auVar22,auVar15);
  pRVar3->command[1] = RVar10;
  auVar17 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  auVar13 = vectorLogicalAnd(auVar13,auVar15);
  auVar12 = ZEXT416(0xffffffff);
  auVar16 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar21 = vectorConvertFromUnsignedFixedPointWord(auVar20,0);
  auVar12 = ZEXT416(0xffffffff);
  auVar15 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar14,0);
  auVar12 = vectorConvertFromUnsignedFixedPointWord(auVar13,0);
  pRVar3->command[2] = RVar9;
  pRVar6 = pRVar3->command;
  auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar14 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  pRVar3->command = pRVar6 + 3;
  pRVar6[3] = NV4097_SET_CLIP_MIN_x2;
  auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar18,auVar13);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar16);
  pRVar3->command[1] = 0;
  pRVar6 = pRVar3->command;
  puVar2[0x13] = unaff_r27;
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  pRVar6[2] = 0x3f800000;
  pRVar6 = pRVar3->command;
  auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar21 = vectorAddFloatingPoint(auVar21,auVar13);
  auVar20 = vectorAddFloatingPoint(auVar20,auVar16);
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar17,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar12
                      );
  pRVar3->command = pRVar6 + 3;
  pRVar6[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  pRVar6 = pRVar3->command;
  puVar2[0x14] = unaff_r28;
  uVar1 = storeVectorElementWordIndexed(auVar21,4,ZEXT48(pRVar6));
  *(undefined4 *)((uint)(pRVar6 + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar20,8,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 2) & 0xfffffffc) = uVar1;
  pRVar3->command[3] = 0x3f000000;
  pRVar3->command[4] = 0;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x14,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 5) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x18,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 6) & 0xfffffffc) = uVar1;
  pRVar3->command[7] = 0x3f000000;
  pRVar3->command[8] = 0;
  puVar2[0x15] = unaff_r29;
  pRVar6 = pRVar3->command;
  pRVar3->command = pRVar6 + 9;
  puVar2[0x12] = unaff_r26;
  pRVar6[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar1 = storeVectorElementWordIndexed(auVar21,4,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar20,8,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 2) & 0xfffffffc) = uVar1;
  pRVar3->command[3] = 0x3f000000;
  pRVar3->command[4] = 0;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x14,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 5) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x18,ZEXT48(pRVar3->command));
  *(undefined4 *)((uint)(pRVar3->command + 6) & 0xfffffffc) = uVar1;
  pRVar3->command[7] = 0x3f000000;
  pRVar3->command[8] = 0;
  pRVar6 = pRVar3->command;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x70,lVar7);
  *(undefined4 *)(puVar2 + 0xe) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar16,0x74,lVar7);
  *(undefined4 *)((int)puVar2 + 0x74) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar13,0x78,lVar7);
  *(undefined4 *)(puVar2 + 0xf) = uVar1;
  lVar11 = 2;
  pRVar3->command = pRVar6 + 9;
  pRVar3 = HUD_Pass;
  uVar1 = storeVectorElementWordIndexed(auVar12,0x7c,lVar7);
  *(undefined4 *)((int)puVar2 + 0x7c) = uVar1;
  lVar7 = uVar5 - 0x50;
  *pRVar3->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar3->command[1] = 0x12;
  pRVar6 = pRVar3->command + 2;
  pRVar3->command = pRVar6;
  do {
    pRVar8 = (RsxCmd *)lVar7;
    *pRVar6 = *pRVar8;
    pRVar6 = pRVar3->command;
    pRVar3->command = pRVar6 + 1;
    lVar7 = lVar7 + 8;
    pRVar6[1] = pRVar8[1];
    pRVar6 = pRVar3->command + 1;
    pRVar3->command = pRVar6;
    pRVar4 = HUD_Pass;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar4->command[1] = RVar10;
  pRVar4->command[2] = RVar9;
  pRVar4->command = pRVar4->command + 3;
  return;
}



//==== 001753f0  ns=vuchain  size=0xd0
// sig: undefined VU1_dumpChain(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 00653ffc: '%x %x %x %x\n'

void vuchain::VU1_dumpChain(void)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte local_20;
  
  uVar5 = (&DAT_00e5aa50)[DAT_00e5aa68];
  if (uVar5 != DAT_00e5aa58) {
    do {
      auVar6 = *(undefined1 (*) [16])(uVar5 & 0xfffffff0);
      auVar1 = auVar6 >> 0x70 & (undefined1  [16])0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[1];
      bVar2 = local_20;
      auVar1 = auVar6 >> 0x68 & (undefined1  [16])0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[2];
      bVar3 = local_20;
      local_20 = auVar6[0];
      uVar4 = (ulonglong)local_20;
      auVar1 = auVar6 >> 0x60 & (undefined1  [16])0xff;
      local_20 = auVar1[1] | auVar1[2] | auVar1[3] | auVar1[4] | auVar1[5] | auVar1[6] | auVar1[7] |
                 auVar6[3];
      libc::printf("%x %x %x %x\n",uVar4,(ulonglong)bVar2,(ulonglong)bVar3,(ulonglong)local_20);
      uVar5 = uVar5 + 0x10;
    } while (uVar5 != DAT_00e5aa58);
  }
  return;
}



//==== 001754c0  ns=stub  size=0x4
// sig: undefined STUB_001754c0(void)
// callers(2): 0016699c draw::DrawTies_CheckTexOverflow; 00172c40 vendor::Vendor_HudUpdate
// callees(0): 

void stub::STUB_001754c0(void)

{
  return;
}



//==== 001754c4  ns=stub  size=0x4
// sig: undefined STUB_001754c4(void)
// callers(0): 
// callees(0): 

void stub::STUB_001754c4(void)

{
  return;
}



//==== 001754c8  ns=stub  size=0x4
// sig: undefined STUB_001754c8(void)
// callers(1): 00010c70 boot::FrontEnd_Draw
// callees(0): 

void stub::STUB_001754c8(void)

{
  return;
}



//==== 001754cc  ns=stub  size=0x4
// sig: undefined STUB_001754cc(void)
// callers(0): 
// callees(0): 

void stub::STUB_001754cc(void)

{
  return;
}



//==== 001754d0  ns=stub  size=0x4
// sig: undefined STUB_001754d0(void)
// callers(0): 
// callees(0): 

void stub::STUB_001754d0(void)

{
  return;
}



//==== 001754d4  ns=stub  size=0x4
// sig: undefined STUB_001754d4(void)
// callers(0): 
// callees(0): 

void stub::STUB_001754d4(void)

{
  return;
}



//==== 001754d8  ns=stub  size=0x4
// sig: undefined STUB_001754d8(void)
// callers(0): 
// callees(0): 

void stub::STUB_001754d8(void)

{
  return;
}



//==== 001754dc  ns=stub  size=0x4
// sig: undefined STUB_001754dc(void)
// callers(3): 00012ec8 boot::GameStart; 000656b8 draw::ResetFrameBufferForCutscene; 004d3044 FUN_004d3044
// callees(0): 

void stub::STUB_001754dc(void)

{
  return;
}



//==== 001754e0  ns=stub  size=0x4
// sig: undefined STUB_001754e0(void)
// callers(3): 0004fe38 sound::UnloadSoundBanks; 000656b8 draw::ResetFrameBufferForCutscene; 00164c58 space::DoSpaceTransition
// callees(0): 

void stub::STUB_001754e0(void)

{
  return;
}



//==== 001754e4  ns=stub  size=0x8
// sig: undefined STUB_001754e4_RET_0(void)
// callers(0): 
// callees(0): 

undefined8 stub::STUB_001754e4_RET_0(void)

{
  return 0;
}



//==== 001754ec  ns=vuchain  size=0x68
// sig: undefined DMAC_BEIS_Handler(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 0065400c: 'DMAC(15) - Bus Error\n' | 00654024: 'D1_CHCR=%X\nD1_TADR=%X' | 0065403c: "Why doesn't this work?"

void vuchain::DMAC_BEIS_Handler(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *DAT_0159b368;
  uVar2 = *DAT_0159b36c;
  libc::printf("DMAC(15) - Bus Error\n");
  libc::printf("D1_CHCR=%X\nD1_TADR=%X",(ulonglong)uVar1,(ulonglong)uVar2);
  libc::printf("Why doesn\'t this work?");
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



//==== 00175554  ns=stub  size=0x4
// sig: undefined STUB_00175554(void)
// callers(1): 0016114c space::TransitionDraw_Space
// callees(0): 

void stub::STUB_00175554(void)

{
  return;
}



//==== 00175558  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_WALK(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_WALK(void)

{
  DAT_0073a82c = 0x10000;
  return;
}



//==== 00175580  ns=walk  size=0xc4
// sig: undefined GetGroundZ_Unused(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

double walk::GetGroundZ_Unused(void)

{
  float fVar1;
  int iVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar2 = collproc::CollLine(local_20,local_30,2,0,0);
  fVar1 = 0.0;
  if (iVar2 != 0) {
    fVar1 = CollOutput.ip.z;
  }
  return (double)fVar1;
}



//==== 00175644  ns=walk  size=0x34
// sig: undefined walk_SetupTwistVals(MobyInstance * param_1, w_2legData * pLD)
// callers(4): 002bbc28 mobyupdate_helpers::M181_002bbc28; 002f1c10 mobyupdate_helpers::M217_002f1c10; 003b8208 mobyupdate_helpers::M563_003b8208; 003e2b88 mobyupdate_helpers::M622_003e2b88
// callees(0): 

void walk::walk_SetupTwistVals(MobyInstance *param_1,w_2legData *pLD)

{
  pLD->legs[0].twistLow = -0.19634955;
  pLD->legs[1].twistHigh = 0.19634955;
  pLD->legs[0].twistHigh = 1.5707964;
  pLD->legs[1].twistLow = -1.5707964;
  return;
}



//==== 00175688  ns=walk  size=0x488
// sig: undefined walk_init2LegAnim(undefined4 moby, w_2legData * pLD)
// callers(4): 002bbc28 mobyupdate_helpers::M181_002bbc28; 002f1c10 mobyupdate_helpers::M217_002f1c10; 003b8208 mobyupdate_helpers::M563_003b8208; 003e2b88 mobyupdate_helpers::M622_003e2b88
// callees(6): 000eff60 mobyfunc::MB_GetAnimSeqLength; 000efff8 mobyfunc::MB_GetAnimSeqTriggerLength; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1238 mobyfunc::GetMobyJointsWorldPos; 005cd098 libc::printf
// strings: 0065405c: '\n\nInvalid anim detected on pLD->anims[%d]->anim in walk_init2LegAnim.\nSee walk.h and check your initialization function for moby class %d\n' | 006540ec: 'sizeof(w_2legData) = %d bytes \n'

int32_t walk::walk_init2LegAnim(MobyInstance *moby,w_2legData *pLD)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar14;
  int iVar15;
  longlong lVar13;
  int32_t iVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar19;
  longlong lVar20;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  w_2legData *pwVar21;
  ulonglong unaff_r29;
  ulonglong uVar22;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x140;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar12;
  puVar10[0x2a] = in_LR;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x23] = unaff_r29;
  uVar22 = 0;
  puVar10[0x1f] = unaff_r25;
  puVar10[0x25] = unaff_r31;
  puVar10[0x21] = unaff_r27;
  puVar10[0x24] = unaff_r30;
  puVar10[0x20] = unaff_r26;
  dVar28 = 0.0;
  puVar10[0x22] = unaff_r28;
  dVar27 = 2.0;
  do {
    piVar11 = (int *)((int)pLD->anims + (int)((uVar22 & 0xffffffff) << 2));
    piVar14 = (int *)*piVar11;
    if (*piVar14 < 0) {
      libc::printf("\n\nInvalid anim detected on pLD->anims[%d]->anim in walk_init2LegAnim.\nSee walk.h and check your initialization function for moby class %d\n"
                   ,uVar22,moby->oClass);
      trapWord(0x1f,in_LR,in_LR);
      piVar14 = (int *)*piVar11;
    }
    fVar29 = mobyfunc::MB_GetAnimSeqLength((uint)moby->mClass,*piVar14);
    piVar14 = (int *)*piVar11;
    piVar14[3] = (int)fVar29;
    fVar29 = mobyfunc::MB_GetAnimSeqTriggerLength((uint)moby->mClass,*piVar14);
    iVar23 = *piVar11;
    fVar29 = fVar29 - *(float *)(iVar23 + 0xc);
    *(float *)(iVar23 + 0x10) = fVar29;
    if ((double)fVar29 != dVar28) {
      iVar18 = 0;
      iVar15 = iVar23;
      do {
        uVar8 = (int)*(uint *)(iVar15 + 0x40) >> 0x1f;
        uVar9 = (int)*(uint *)(iVar15 + 0x48) >> 0x1f;
        fVar29 = *(float *)(iVar15 + 0x48);
        if ((int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x48)) - uVar9) <
            (int)((uVar8 >> 1 ^ *(uint *)(iVar15 + 0x40)) - uVar8)) {
          fVar29 = fVar29 + *(float *)(iVar23 + 0x10);
        }
        uVar8 = (int)*(uint *)(iVar15 + 0x28) >> 0x1f;
        uVar9 = (int)*(uint *)(iVar15 + 0x30) >> 0x1f;
        *(float *)(iVar15 + 0x38) = fVar29 - *(float *)(iVar15 + 0x40);
        fVar29 = *(float *)(iVar15 + 0x30);
        if ((int)((uVar9 >> 1 ^ *(uint *)(iVar15 + 0x30)) - uVar9) <
            (int)((uVar8 >> 1 ^ *(uint *)(iVar15 + 0x28)) - uVar8)) {
          fVar29 = fVar29 + *(float *)(iVar23 + 0x10);
        }
        iVar18 = iVar18 + 1;
        *(float *)(iVar15 + 0x20) = fVar29 - *(float *)(iVar15 + 0x28);
        iVar15 = iVar15 + 4;
      } while (iVar18 < 2);
      *(float *)(iVar23 + 8) =
           *(float *)(iVar23 + 4) /
           (animationSpeed * (float)((double)*(float *)(iVar23 + 0x10) * dVar27));
    }
    iVar23 = (int)uVar22 + 1;
    uVar22 = (ulonglong)iVar23;
  } while (iVar23 < 0xd);
  bVar2 = pLD->legs[0].jiHeel;
  *(uint *)((int)puVar10 + 0xb4) = (uint)(byte)pLD->legs[0].jiFoot;
  bVar3 = pLD->legs[1].jiFoot;
  *(uint *)(puVar10 + 0x17) = (uint)bVar2;
  bVar2 = pLD->legs[1].jiHeel;
  *(uint *)((int)puVar10 + 0xbc) = (uint)bVar3;
  bVar3 = pLD->moveJoint1;
  *(uint *)(puVar10 + 0x18) = (uint)bVar2;
  bVar2 = pLD->moveJoint2;
  *(uint *)((int)puVar10 + 0xc4) = (uint)bVar3;
  *(uint *)(puVar10 + 0x19) = (uint)bVar2;
  mobyfunc::GetMobyJointsWorldPos(moby,6,uVar12 - 0x8c,pLD);
  iVar23 = 0;
  pwVar21 = pLD;
  do {
    mobyfunc::GetBoneTransformations(moby,pwVar21->legs[0].jiFoot,uVar12 - 0xd0);
    uVar8 = *(uint *)(puVar10 + 0x10);
    uVar9 = *(uint *)((int)puVar10 + 0x84);
    fVar29 = *(float *)((int)puVar10 + 0x84);
    dVar25 = ABS((double)*(float *)(puVar10 + 0x10));
    pwVar21->legs[0].hrAct = 0.0;
    dVar27 = ABS((double)fVar29);
    pwVar21->legs[0].arAct = 0.0;
    *(float *)(puVar10 + 0x16) = (float)(dVar25 - dVar27);
    cVar4 = pwVar21->legs[0].MHip.state;
    uVar22 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
    dVar26 = dVar25;
    if ((double)*(float *)(puVar10 + 0x16) - dVar28 < 0.0) {
      dVar26 = dVar27;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar29 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar10 + 0x16) - dVar28 < 0.0) {
      dVar27 = dVar25;
    }
    dVar25 = dVar28;
    if (dVar28 < dVar26) {
      lVar13 = uVar12 - 0x130;
      lVar17 = uVar12 - 0x74;
      lVar20 = uVar12 - 100;
      lVar24 = 2;
      fVar5 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)(puVar10 + 0x1a) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      *(float *)((int)puVar10 + 0xcc) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar6;
      *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar5;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar13 + 0xcc) = *(float *)((int)lVar13 + 0xbc) * fVar5 * fVar5;
        iVar15 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar20 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar13 = lVar1;
      lVar17 = lVar20;
      do {
        fVar5 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0xcc) = *(float *)((int)lVar13 + 0xcc) * fVar5;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar17 = 2;
      lVar13 = lVar1;
      dVar27 = dVar28;
      do {
        iVar15 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xcc)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar25 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar29);
    }
    pwVar21->legs[0].frDest = (float)dVar25;
    if (cVar4 == '\0') {
      mobyfunc::AttachManipulator(moby,(uint)(byte)pwVar21->legs[0].jiHip,&pwVar21->legs[0].MHip);
    }
    if (pwVar21->legs[0].MAnkle.state == '\0') {
      mobyfunc::AttachManipulator
                (moby,(uint)(byte)pwVar21->legs[0].jiAnkle,&pwVar21->legs[0].MAnkle);
    }
    iVar23 = iVar23 + 1;
    pwVar21 = (w_2legData *)&pwVar21->idle;
  } while (iVar23 < 2);
  pLD->onground = '\x05';
  pLD->state = '\0';
  pLD->yrot = 0.0;
  pLD->yrSpeed = 0.0;
  pLD->speed = 0.0;
  pLD->angVel = 0.0;
  pLD->collZAdj = 0.0;
  pLD->zVel = 0.0;
  pLD->stepZ = 0.0;
  pLD->counter = 0;
  pLD->flags = 0;
  iVar16 = libc::printf("sizeof(w_2legData) = %d bytes \n",0x250);
  return iVar16;
}



//==== 00175b18  ns=walk  size=0x188
// sig: undefined Walk_GetLegRangeMask(undefined8 height, w_2legAnim * pLA)
// callers(4): 00175ca0 walk::Walk_GetLegRangeMaskForAnim; 00176c90 walk::Walk_UpdateStateMachine; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState
// callees(0): 

uint walk::Walk_GetLegRangeMask(double height,w_2legAnim *pLA)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  w_2legAnim *pwVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar6 = 0;
  iVar5 = 0;
  uVar8 = 1;
  pwVar4 = pLA;
  do {
    uVar7 = uVar8;
    uVar1 = (int)pwVar4->footDown[0] >> 0x1f;
    uVar2 = (int)pwVar4->footUp[0] >> 0x1f;
    bVar10 = (double)pwVar4->footDown[0] <= height;
    bVar9 = height <= (double)pwVar4->footUp[0];
    if ((int)((uVar2 >> 1 ^ (uint)pwVar4->footUp[0]) - uVar2) <
        (int)((uVar1 >> 1 ^ (uint)pwVar4->footDown[0]) - uVar1)) {
      if ((bVar10) || (bVar9)) {
        uVar6 = (uint)uVar7 | uVar6;
      }
    }
    else if ((bVar10) && (bVar9)) {
      uVar6 = (uint)uVar7 | uVar6;
    }
    uVar1 = (int)pwVar4->heelDown[0] >> 0x1f;
    uVar2 = (int)pwVar4->heelUp[0] >> 0x1f;
    bVar10 = (double)pwVar4->heelDown[0] <= height;
    bVar9 = height <= (double)pwVar4->heelUp[0];
    uVar3 = (uint)(uVar7 << 1);
    if ((int)((uVar2 >> 1 ^ (uint)pwVar4->heelUp[0]) - uVar2) <
        (int)((uVar1 >> 1 ^ (uint)pwVar4->heelDown[0]) - uVar1)) {
      if ((bVar10) || (bVar9)) {
        uVar6 = uVar3 | uVar6;
      }
    }
    else if ((bVar10) && (bVar9)) {
      uVar6 = uVar3 | uVar6;
    }
    iVar5 = iVar5 + 1;
    uVar8 = (uVar7 & 0x3fffffff) << 2;
    pwVar4 = (w_2legAnim *)&pwVar4->stride;
  } while (iVar5 < 2);
  if (uVar6 == 0) {
    if ((height < (double)pLA->move1Reset) ||
       ((double)(float)((double)pLA->move1Reset + 1.0) < height)) {
      uVar6 = (uint)uVar8;
    }
    if ((height < (double)pLA->move2Reset) ||
       ((double)(float)((double)pLA->move2Reset + 1.0) < height)) {
      uVar6 = uVar6 | (uint)(uVar7 << 3);
    }
  }
  return uVar6;
}



//==== 00175ca0  ns=walk  size=0x74
// sig: undefined Walk_GetLegRangeMaskForAnim(void)
// callers(0): 
// callees(1): 00175b18 walk::Walk_GetLegRangeMask

ulonglong walk::Walk_GetLegRangeMaskForAnim(undefined8 param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = 0;
  lVar5 = 0xd;
  iVar4 = param_3;
  do {
    puVar1 = (uint *)(iVar4 + 0x70);
    iVar4 = iVar4 + 4;
    lVar2 = lVar2 + ((LZCOUNT((uint)*(byte *)(param_2 + 0x52) - *(int *)*puVar1) << 0x3a) >> 0x3f &
                    ZEXT48((int *)*puVar1) - lVar2);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((w_2legAnim *)lVar2 == (w_2legAnim *)0x0) {
    uVar3 = (ulonglong)*(byte *)(param_3 + 0xb6);
  }
  else {
    uVar3 = Walk_GetLegRangeMask(param_1,(w_2legAnim *)lVar2);
  }
  return uVar3;
}



//==== 00175d68  ns=walk  size=0x8a8
// sig: undefined Walk_SolveLegGroundContact(MobyInstance * moby, w_2legData * pLd)
// callers(1): 0017a230 walk::walk_Update
// callees(2): 00057820 collproc::CollLine; 000ffb70 mobyutil::GetGroundZ

undefined8 walk::Walk_SolveLegGroundContact(MobyInstance *moby,w_2legData *pLd)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  w_2legData *pwVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined8 uVar21;
  ulonglong unaff_r29;
  ulonglong uVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f21;
  double dVar27;
  ulonglong in_f22;
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
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar24 = uVar13 - 400;
  puVar7 = (ulonglong *)lVar24;
  *puVar7 = uVar13;
  puVar7[0x34] = in_LR;
  puVar7[0x27] = in_f21;
  puVar7[0x28] = in_f22;
  puVar7[0x29] = in_f23;
  puVar7[0x2a] = in_f24;
  puVar7[0x2b] = in_f25;
  puVar7[0x2c] = in_f26;
  puVar7[0x2d] = in_f27;
  puVar7[0x2e] = in_f28;
  puVar7[0x2f] = in_f29;
  puVar7[0x30] = in_f30;
  puVar7[0x31] = in_f31;
  puVar7[0x24] = unaff_r29;
  uVar22 = 1;
  puVar7[0x23] = unaff_r28;
  puVar7[0x22] = unaff_r27;
  puVar7[0x1f] = unaff_r24;
  uVar21 = 0;
  puVar7[0x26] = unaff_r31;
  bVar12 = false;
  puVar7[0x25] = unaff_r30;
  dVar27 = 0.0;
  uVar5 = pLd->flags;
  puVar7[0x21] = unaff_r26;
  puVar7[0x20] = unaff_r25;
  puVar7[0x1e] = unaff_r23;
  dVar32 = dVar27;
  dVar36 = dVar27;
  if ((uVar5 & 4) == 0) {
    iVar20 = 0;
    dVar31 = 2.5;
    dVar30 = 0.10000000149011612;
    dVar29 = 0.75;
    dVar28 = 4.0;
    dVar25 = dVar27;
    dVar33 = dVar27;
    dVar34 = dVar27;
    dVar35 = dVar27;
    pwVar19 = pLd;
    do {
      if (((uint)(byte)pLd->onground & (uint)uVar22) != 0) {
        fVar1 = pwVar19->fpos[0].m.x;
        *(float *)(puVar7 + 0xe) = fVar1;
        fVar2 = pwVar19->fpos[0].m.y;
        *(float *)((int)puVar7 + 0x74) = fVar2;
        dVar26 = (double)pwVar19->fpos[0].m.z;
        fVar3 = pwVar19->fpos[0].m.w;
        fVar4 = (float)(dVar26 - dVar31);
        *(float *)((int)puVar7 + 0x7c) = fVar3;
        *(float *)(puVar7 + 0xf) = fVar4;
        if ((double)fVar4 < dVar30) {
          *(undefined4 *)(puVar7 + 0xf) = 0x3dcccccd;
        }
        *(float *)(puVar7 + 0x10) = fVar1;
        *(float *)((int)puVar7 + 0x84) = fVar2;
        *(float *)((int)puVar7 + 0x8c) = fVar3;
        *(float *)(puVar7 + 0x11) = (float)(dVar26 + dVar29);
        iVar15 = collproc::CollLine(uVar13 - 0x110,uVar13 - 0x120,2,0,0);
        dVar26 = dVar32;
        if (iVar15 != 0) {
          dVar26 = (double)CollOutput.ip.z;
        }
        dVar25 = (double)(float)(dVar26 + dVar25);
        if ((dVar32 < dVar26) &&
           ((double)(float)(ABS((double)CollOutput.normal.x) + ABS((double)CollOutput.normal.y)) <
            ABS((double)CollOutput.normal.z))) {
          dVar33 = (double)(float)(dVar33 + (double)CollOutput.normal.x);
          dVar34 = (double)(float)(dVar34 + (double)CollOutput.normal.y);
          dVar35 = (double)(float)(dVar35 + (double)CollOutput.normal.z);
          dVar36 = (double)(float)(dVar36 + dVar28);
          dVar27 = (double)(float)(dVar27 + (double)(float)(dVar26 - (double)pwVar19->fpos[0].m.z));
        }
      }
      iVar20 = iVar20 + 2;
      uVar22 = (uVar22 & 0x3fffffff) << 2;
      pwVar19 = (w_2legData *)(pwVar19->fpos + 2);
    } while (iVar20 < 4);
    if ((dVar25 == dVar32) &&
       (dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0),
       dVar32 < dVar25)) {
      dVar36 = (double)(float)(dVar36 + dVar28);
      dVar27 = (double)(float)(dVar27 + (double)(float)(dVar25 - (double)(moby->pos).z));
    }
    dVar25 = dVar32;
    if (((dVar33 != dVar32) || (dVar34 != dVar32)) || (dVar35 != dVar32)) {
      fVar4 = (moby->rotation).z;
      fVar1 = fVar4 + 1.5707963;
      fVar2 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar2 = fVar4;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar8 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
        fVar8 = fVar2;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar1 = fVar8 * fVar8;
      fVar2 = fVar4 * fVar4;
      fVar10 = fVar1 * fVar1 * fVar8;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar1 * fVar10;
      fVar9 = fVar2 * fVar3;
      dVar29 = (double)(fVar1 * fVar11 * 2.601887e-06 +
                       fVar11 * -0.0001980741 +
                       fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8);
      dVar30 = (double)(fVar2 * fVar9 * 2.601887e-06 +
                       fVar9 * -0.0001980741 +
                       fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4);
      dVar31 = (double)(float)(dVar35 * dVar30 - (double)(float)(dVar33 * dVar32));
      dVar26 = (double)(float)(dVar34 * dVar32 - (double)(float)(dVar35 * dVar29));
      dVar29 = (double)(float)(dVar33 * dVar29 - (double)(float)(dVar34 * dVar30));
      fVar4 = (float)(dVar34 * dVar29 - (double)(float)(dVar35 * dVar31));
      fVar1 = (float)(dVar35 * dVar26 - (double)(float)(dVar33 * dVar29));
      fVar2 = (float)(dVar33 * dVar31 - (double)(float)(dVar34 * dVar26));
      dVar34 = ABS((double)fVar2);
      *(float *)((int)puVar7 + 0x9c) = fVar2;
      fVar4 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
      dVar35 = ABS((double)fVar4);
      *(float *)(puVar7 + 0x13) = fVar4;
      *(float *)(puVar7 + 0x14) = (float)(dVar35 - dVar34);
      uVar22 = (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)(puVar7 + 0x13));
      if ((double)*(float *)(puVar7 + 0x14) - dVar32 < 0.0) {
        dVar33 = dVar34;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar34 = ABS((double)*(float *)((int)puVar7 + 0x9c));
      if ((double)*(float *)(puVar7 + 0x14) - dVar32 < 0.0) {
        dVar34 = dVar35;
      }
      if (dVar32 < dVar33) {
        lVar14 = uVar13 - 0x180;
        lVar16 = uVar13 - 0xcc;
        lVar18 = uVar13 - 0xbc;
        lVar23 = 2;
        fVar2 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar7 + 0x1a) = fVar2;
        *(float *)(puVar7 + 0x19) = fVar2;
        *(float *)((int)puVar7 + 0xcc) = fVar2;
        *(float *)((int)puVar7 + 0xc4) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar3;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar2;
        *(float *)(puVar7 + 0x1a) = *(float *)(puVar7 + 0x1a) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar2 * fVar2;
          iVar20 = (int)lVar16;
          lVar14 = lVar14 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar18 = uVar13 - 0xcc;
        pfVar17 = (float *)&DAT_007358e0;
        lVar14 = lVar24;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar16 = 2;
        lVar14 = lVar24;
        do {
          iVar20 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar15 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0xc4)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar1 + fVar4);
      }
    }
    pLd->yrot = (float)dVar25;
    if (0.785398006439209 < ABS(dVar25)) {
      uVar21 = 2;
    }
    if (((pLd->state == '\r') &&
        (uVar6 = (int)pLd->stepZ >> 0x1f, 0 < (int)((uVar6 >> 1 ^ (uint)pLd->stepZ) - uVar6))) &&
       ((pLd->onground & 0xfU) == 0)) {
      fVar1 = pLd->stepZ - (moby->pos).z;
      dVar34 = (double)fVar1;
      fVar4 = pLd->anims[7]->stride;
      dVar33 = ABS((double)pLd->anims[7]->stride);
      dVar35 = ABS(dVar34);
      *(float *)(puVar7 + 0x12) = fVar1;
      *(float *)((int)puVar7 + 0x94) = (float)(dVar33 - dVar35);
      uVar22 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
      dVar25 = dVar33;
      if ((double)*(float *)((int)puVar7 + 0x94) - dVar32 < 0.0) {
        dVar25 = dVar35;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar35 = ABS((double)*(float *)(puVar7 + 0x12));
      if ((double)*(float *)((int)puVar7 + 0x94) - dVar32 < 0.0) {
        dVar35 = dVar33;
      }
      fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar33 = dVar32;
      if (dVar32 < dVar25) {
        lVar14 = uVar13 - 0x180;
        lVar18 = uVar13 - 0xdc;
        lVar16 = uVar13 - 0xec;
        lVar23 = 2;
        fVar2 = (float)(dVar35 - dVar25) / (float)(dVar35 + dVar25);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar7 + 0x16) = fVar2;
        *(float *)(puVar7 + 0x15) = fVar2;
        *(float *)((int)puVar7 + 0xac) = fVar2;
        *(float *)((int)puVar7 + 0xa4) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3;
        *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar2;
        *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar14 + 0xa4) = *(float *)((int)lVar14 + 0x94) * fVar2 * fVar2;
          iVar20 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar18 = uVar13 - 0xec;
        pfVar17 = (float *)&DAT_007358e0;
        lVar14 = lVar24;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar14 + 0xa4) = *(float *)((int)lVar14 + 0xa4) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar14 = 2;
        dVar25 = dVar32;
        do {
          iVar20 = (int)lVar24;
          iVar15 = (int)lVar18;
          lVar24 = lVar24 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar20 + 0xa4)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar33 = (double)((float)(dVar25 + 0.7853981852531433) * fVar4 + fVar1);
      }
      if (ABS(-dVar33) < 0.5235987901687622) {
        bVar12 = true;
        dVar27 = (double)(float)(dVar27 + dVar34);
        dVar36 = (double)(float)(dVar36 + dVar28);
        pLd->yrot = (float)-dVar33;
      }
    }
  }
  else {
    dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0);
    dVar25 = (double)(moby->pos).z;
    if ((double)(float)(dVar27 - 0.05000000074505806) <= dVar25) {
      if ((-1 < (int)pLd->zVel) ||
         ((double)((float)(dVar27 + 0.10000000149011612) - pLd->zVel) <= dVar25)) {
        dVar27 = -1.0;
      }
      else {
        dVar27 = (double)(float)(dVar27 - dVar25);
      }
    }
    else {
      dVar27 = (double)(float)(dVar25 - dVar27);
    }
    pLd->yrot = (float)dVar32;
  }
  dVar25 = dVar27;
  if (dVar32 - dVar36 < 0.0) {
    dVar25 = (double)(float)(dVar27 / dVar36);
  }
  if (dVar36 - dVar32 < 0.0) {
    dVar25 = (double)(float)(dVar27 / dVar36);
  }
  if ((pLd->flags & 8U) == 0) {
    if (dVar25 <= -0.02500000037252903) {
      fVar4 = pLd->zVel - pLd->grav;
      pLd->zVel = fVar4;
      dVar25 = (double)fVar4;
    }
    else {
      if ((0.02500000037252903 < dVar25) && (!bVar12)) {
        dVar25 = dVar32;
      }
      pLd->zVel = (float)dVar32;
    }
  }
  else {
    pLd->zVel = (float)dVar32;
    if (dVar25 - -0.02500000037252903 < 0.0) {
      dVar25 = dVar32;
    }
  }
  lVar24 = 3;
  do {
    fVar4 = pLd->fpos[1].m.z;
    pLd->fpos[0].m.z = (float)((double)pLd->fpos[0].m.z + dVar25);
    pLd->fpos[1].m.z = (float)((double)fVar4 + dVar25);
    pLd = (w_2legData *)(pLd->fpos + 2);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  (moby->pos).z = (float)((double)(moby->pos).z + dVar25);
  return uVar21;
}



//==== 00176618  ns=walk  size=0xac
// sig: undefined Walk_ApplyLegQuatToEuler(void)
// callers(2): 00176c90 walk::Walk_UpdateStateMachine; 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(1): 00501980 fastfunc::FastQuaternionToEuler

void walk::Walk_ApplyLegQuatToEuler(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + 0x161) != '\0') {
      fastfunc::FastQuaternionToEuler(uVar2,param_1 + 0x170,2);
    }
    if (*(char *)(param_1 + 0x121) != '\0') {
      fastfunc::FastQuaternionToEuler(uVar2,param_1 + 0x130,2);
    }
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    param_1 = param_1 + 0xb0;
  } while (iVar1 < 2);
  return;
}



//==== 001766d8  ns=walk  size=0x4f4
// sig: undefined Walk_UpdateLegRotations(MobyInstance * moby, w_2legData * pLd, undefined4 flags)
// callers(1): 0017a230 walk::walk_Update
// callees(6): 000f1038 mobyfunc::GetBoneTransformations; 000ff190 mobyutil::MB_DeltAngSpeed; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void walk::Walk_UpdateLegRotations(MobyInstance *moby,w_2legData *pLd,uint flags)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  w_2legData *pwVar19;
  ulonglong unaff_r26;
  quat *pqVar20;
  ulonglong unaff_r27;
  int iVar21;
  ulonglong unaff_r28;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  undefined8 uVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x160;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x2e] = in_LR;
  puVar10[0x27] = in_f27;
  puVar10[0x28] = in_f28;
  puVar10[0x29] = in_f29;
  puVar10[0x2a] = in_f30;
  puVar10[0x2b] = in_f31;
  puVar10[0x22] = unaff_r27;
  puVar10[0x23] = unaff_r28;
  iVar21 = 0;
  puVar10[0x24] = unaff_r29;
  uVar22 = 3;
  puVar10[0x20] = unaff_r25;
  puVar10[0x1f] = unaff_r24;
  puVar10[0x26] = unaff_r31;
  puVar10[0x25] = unaff_r30;
  puVar10[0x21] = unaff_r26;
  puVar10[0x1e] = unaff_r23;
  pwVar19 = pLd;
  do {
    mobyfunc::GetBoneTransformations(moby,pwVar19->legs[0].jiFoot,uVar13 - 0xe0);
    fVar4 = ABS(*(float *)(puVar10 + 0x12));
    fVar7 = ABS(*(float *)((int)puVar10 + 0x94));
    *(float *)(puVar10 + 0x18) = fVar4 - fVar7;
    dVar27 = 0.0;
    fVar3 = pwVar19->legs[0].frDest;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar10 + 0x18) - 0.0 < 0.0) {
      fVar7 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar25 = dVar27;
    if (0.0 < fVar6) {
      lVar14 = uVar13 - 0x150;
      lVar16 = uVar13 - 0x9c;
      lVar18 = uVar13 - 0x8c;
      lVar23 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1a) = fVar6;
      *(float *)(puVar10 + 0x19) = fVar6;
      *(float *)((int)puVar10 + 0xcc) = fVar6;
      *(float *)((int)puVar10 + 0xc4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar7;
      *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar6;
      *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar6 * fVar6;
        iVar11 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar18 = uVar13 - 0x9c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar1;
      lVar16 = lVar18;
      do {
        fVar6 = *pfVar17;
        fVar7 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      lVar14 = lVar1;
      do {
        iVar11 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar12 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0xc4)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar4);
    }
    dVar24 = (double)fastfunc::FastDiffRots((double)fVar3,dVar25);
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,pwVar19->legs[0].hrAct);
    dVar24 = (double)fastfunc::FastWrapRot((float)dVar24,pwVar19->legs[0].arAct);
    dVar25 = (double)fastfunc::FastDiffRots(dVar25,dVar24);
    cVar2 = pLd->state;
    pfVar17 = &pwVar19->legs[0].hrSpeed;
    dVar28 = 0.03490658476948738;
    uVar29 = 0x3fb99999a0000000;
    dVar26 = (double)(DAT_0071f408 * 0.034906585);
    if ((cVar2 == '\0') || (((uint)uVar22 & flags) == 0)) {
      dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)pwVar19->legs[0].hrAct,dVar27,0x3fb99999a0000000,
                                  0x3fb99999a0000000,dVar26,pfVar17,cVar2,pfVar17);
      pwVar19->legs[0].hrAct = (float)dVar24;
      dVar27 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)pwVar19->legs[0].arAct,dVar27,uVar29,uVar29,
                                  (double)(float)((double)DAT_0071f408 * dVar28));
    }
    else {
      if (cVar2 == '\r') {
        dVar27 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)pwVar19->legs[0].hrAct,dVar27,0x3fb99999a0000000,
                                    0x3fb99999a0000000,dVar26,pfVar17,0xd,pfVar17);
      }
      else {
        dVar27 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)pwVar19->legs[0].hrAct,(double)(float)(dVar24 * 0.5),
                                    0x3fb99999a0000000,0x3fb99999a0000000,dVar26,pfVar17,
                                    &DAT_001766c4,pfVar17);
      }
      pwVar19->legs[0].hrAct = (float)dVar27;
      dVar27 = (double)fastfunc::FastDiffRots(dVar24,dVar27);
      pwVar19->legs[0].arSpeed = 0.0;
    }
    fVar6 = pwVar19->legs[0].hrAct;
    fVar7 = pwVar19->legs[0].twistLow;
    uVar8 = (int)fVar6 >> 0x1f;
    uVar9 = (int)fVar7 >> 0x1f;
    pwVar19->legs[0].arAct = (float)dVar27;
    fVar3 = pwVar19->legs[0].twistLow;
    dVar26 = (double)fVar3;
    dVar24 = (double)pwVar19->legs[0].hrAct;
    if ((int)((uVar8 >> 1 ^ (uint)fVar6) - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9)) {
      pwVar19->legs[0].hrAct = fVar3;
      dVar24 = dVar26;
    }
    fVar6 = pwVar19->legs[0].twistHigh;
    dVar28 = (double)fVar6;
    if (dVar28 < dVar24) {
      pwVar19->legs[0].hrAct = fVar6;
      dVar24 = dVar28;
    }
    if (dVar27 < dVar26) {
      pwVar19->legs[0].arAct = fVar3;
      dVar27 = dVar26;
    }
    if (dVar28 < dVar27) {
      pwVar19->legs[0].arAct = fVar6;
    }
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar24,(float)dVar25);
    pwVar19->legs[0].frDest = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot(pwVar19->legs[0].arAct,(float)dVar27);
    cVar2 = pwVar19->legs[0].MHip.state;
    pwVar19->legs[0].frDest = (float)dVar27;
    if (cVar2 != '\0') {
      fastfunc::FastQuaternionToEuler((double)pwVar19->legs[0].hrAct,&pwVar19->legs[0].MHip.q,2);
    }
    if (pwVar19->legs[0].MAnkle.state != '\0') {
      pqVar20 = &pwVar19->legs[0].MAnkle.q;
      fastfunc::FastQuaternionToEuler((double)pwVar19->legs[0].arAct,pqVar20,2);
      if (((uint)uVar22 & flags) != 0) {
        fastfunc::FastQuaternionToEuler(-(double)(moby->rotation).x,uVar13 - 0xf0,0);
        fastfunc::FastQuaternionMult(pqVar20,pqVar20,uVar13 - 0xf0);
      }
    }
    iVar21 = iVar21 + 1;
    uVar22 = (uVar22 & 0x3fffffff) << 2;
    pwVar19 = (w_2legData *)&pwVar19->idle;
  } while (iVar21 < 2);
  return;
}



//==== 00176be0  ns=Global  size=0x60
// sig: undefined Walk_SolveStepTiming(MobyInstance * moby, undefined4 param_2)
// callers(1): 00176c90 walk::Walk_UpdateStateMachine
// callees(0): 

double Walk_SolveStepTiming(MobyInstance *moby,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0xdc);
  fVar3 = fVar1 * 0.5 + *(float *)(param_2 + 0xd8);
  fVar4 = fVar3 * fVar3 + fVar1 * 2.0 * ((moby->pos).z - *(float *)(param_2 + 0x68));
  fVar5 = SQRT(fVar4);
  fVar2 = fVar3 - fVar5;
  if (fVar3 - fVar5 < 0.0) {
    fVar2 = fVar3 + fVar5;
  }
  fVar3 = 100000.0;
  if (0.0 - fVar4 < 0.0) {
    fVar3 = fVar2 / fVar1;
  }
  return (double)fVar3;
}



//==== 00176c90  ns=walk  size=0x3558
// sig: undefined Walk_UpdateStateMachine(undefined8 x, undefined8 y, undefined8 z, undefined4 moby, w_2legData * pLd)
// callers(1): 0017a230 walk::walk_Update
// callees(18): 000efc58 mobyfunc::MB_FindNearestAnimTrigger; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00108180 mobyutil::MB_computeLobVelocity; 00175b18 walk::Walk_GetLegRangeMask; 00176618 walk::Walk_ApplyLegQuatToEuler; 00176be0 Walk_SolveStepTiming; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7f54 FUN_005e7f54; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548; 005e8588 FUN_005e8588
// strings: 0065410c: 'jumpdist = %f\n'

void walk::Walk_UpdateStateMachine(double x,double y,double z,MobyInstance *moby,w_2legData *pLd)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  w_2legAnim *pwVar5;
  w_2legAnim *pwVar6;
  w_2legAnim *pwVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  char cVar19;
  short sVar18;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar20;
  ulonglong in_r8;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [32];
  
  lVar20 = (longlong)(int)pLd;
  lVar10 = (longlong)(int)moby;
  bVar1 = pLd->state;
  pwVar5 = pLd->anims[0xb];
  pwVar6 = pLd->anims[9];
  if (bVar1 < 0xf) {
    if (bVar1 < 7) {
      if (bVar1 == 0) {
        pLd->stepZ = 0.0;
        if ((0.0007999999797903001 < z) && ((double)(pLd->anims[0]->speed * 1.35) < x)) {
          iVar17 = pLd->anims[7]->anim;
          uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                             ((double)(longlong)pLd->anims[7]->fromIdle,
                              *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
          mobyutil::MB_SetAnimation(lVar10,iVar17,uVar11,10);
          Walk_ApplyLegQuatToEuler(lVar20);
          pwVar5 = pLd->anims[7];
          pLd->state = '\r';
          cVar19 = Walk_GetLegRangeMask((double)(longlong)pwVar5->fromIdle,pwVar5);
          pLd->onground = cVar19;
          pLd->counter = 0;
          return;
        }
        if ((x <= (double)(mobyutil::g_FrameTime * 0.21)) &&
           (dVar25 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)y),
           dVar25 <= 0.10471975803375244)) {
          return;
        }
        sVar18 = pLd->counter + 1;
        pLd->counter = sVar18;
        if (sVar18 < 4) {
          return;
        }
        iVar17 = pLd->anims[0]->anim;
        uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                           ((double)(longlong)pLd->anims[0]->fromIdle,
                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar11,10);
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\x01';
        cVar19 = Walk_GetLegRangeMask((double)(longlong)pLd->anims[0]->fromIdle,pLd->anims[0]);
        pLd->onground = cVar19;
        pLd->counter = 0;
        return;
      }
      if ((in_r8 & 5) != 0) {
        pLd->flags = pLd->flags & 0xfff7;
      }
    }
    else {
      if (0xc < bVar1) {
        if (bVar1 < 0xe) {
          pwVar7 = pLd->anims[0];
          dVar25 = (double)((pLd->anims[7]->speed + pwVar7->speed) * 0.35);
          if (((uint)moby->updateId == pLd->anims[7]->anim) && ((pLd->onground & 0x30U) == 0)) {
            if ((dVar25 <= x) || (dVar25 < (double)pLd->speed)) {
              if ((in_r8 & 5) != 0) {
                if ((pLd->flags & 1U) == 0) {
                  mathfunc::cosf((float)y);
                  uVar11 = 0x3fe0000000000000;
                  FUN_005e8128(y);
                  if ((in_r8 & 1) == 0) {
                    FUN_005e7f54(local_90,local_90,lVar20 + 0x30);
                  }
                  else {
                    FUN_005e7f54(local_90,local_90,lVar20 + 0x10);
                  }
                  dVar21 = (double)mobyutil::GetGroundZ(uVar11,local_90,0);
                  pLd->stepZ = (float)dVar21;
                }
                else {
                  pLd->stepZ = (moby->pos).z;
                  pLd->flags = pLd->flags & 0xfffeU | 2;
                  if ((in_r8 & 1) == 0) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar6->footRange[1] * 0.25) /
                                                (float)(x / (double)pwVar6->speed)));
                    pwVar5 = pLd->anims[9];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[9]->frames);
                    iVar17 = pLd->anims[9]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x0e';
                  }
                  else {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[0xb];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0xb]->frames);
                    iVar17 = pLd->anims[0xb]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x0f';
                  }
                }
              }
            }
            else {
              if ((pLd->onground & 3U) == 0) {
                iVar17 = fastfunc::FastDoubleToInt
                                   ((double)((pwVar7->footRange[1] * 2.0 * 0.33333334 +
                                             pwVar7->footDown[1]) - pwVar7->frame0));
                iVar14 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
              }
              else {
                iVar17 = fastfunc::FastDoubleToInt
                                   ((double)((pwVar7->footRange[0] * 2.0 * 0.33333334 +
                                             pwVar7->footDown[0]) - pwVar7->frame0));
                iVar14 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
              }
              iVar15 = pLd->anims[0]->anim;
              uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                                 ((double)(longlong)(iVar17 - (iVar17 / iVar14) * iVar14),
                                  *(undefined4 *)(&moby->pClass->type + iVar15 * 4));
              mobyutil::MB_SetAnimation(lVar10,iVar15,uVar11,10);
              Walk_ApplyLegQuatToEuler(lVar20);
              pLd->state = '\x01';
            }
          }
          if (dVar25 <= (double)pLd->speed) {
            return;
          }
          pLd->speed = (float)dVar25;
          return;
        }
        if ((in_r8 & 0x30) != 0) {
          uVar11 = FUN_005e8548(lVar10 + 0x10,lVar20 + 0x60);
          libc::printf("jumpdist = %f\n",uVar11);
          dVar25 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)pLd->speed,-(double)pLd->grav,lVar10 + 0x10,
                                      lVar20 + 0x60);
          pLd->zVel = (float)dVar25;
          fVar2 = (pLd->jumpPos).m.x;
          fVar3 = (moby->pos).x;
          fVar4 = (pLd->jumpPos).m.y;
          pLd->flags = pLd->flags | 4;
          dVar25 = (double)FUN_005e8338((double)(fVar2 - fVar3),(double)(fVar4 - (moby->pos).y));
          (pLd->jumpPos).m.w = (float)dVar25;
        }
        dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
        if ((double)((pLd->anims[9]->frame0 + pLd->anims[9]->frames) - moby->unk58) <= dVar25) {
          mobyutil::MB_SetAnimation(lVar10,pLd->rjumpc,0,10);
          Walk_ApplyLegQuatToEuler(lVar20);
          pLd->state = '\x10';
          return;
        }
        if ((pLd->flags & 4U) == 0) {
          return;
        }
        uVar11 = 0;
        if (-1 < (int)pLd->zVel) {
          return;
        }
        dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
        dVar21 = (double)(pLd->anims[10]->footDown[1] - pLd->anims[10]->frame0);
        if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
          return;
        }
        iVar17 = fastfunc::FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
        lVar13 = (longlong)(iVar17 >> 1);
        iVar17 = pLd->anims[10]->anim;
        uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                           (uVar11,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar11,lVar13 + (lVar13 >> 0x3f & -lVar13));
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\x11';
        return;
      }
      if (0xb < bVar1) {
        mobyutil::MB_SetAnimation(lVar10,pLd->idle,0,10);
        Walk_ApplyLegQuatToEuler(lVar20);
        pLd->state = '\0';
        return;
      }
    }
    uVar8 = (int)moby->unk58 >> 0x1f;
    iVar17 = *(int *)(&DAT_0073a850 + (uint)bVar1 * 4);
    dVar25 = 0.25;
    if (((0x3e7fffff < (int)((uVar8 >> 1 ^ (uint)moby->unk58) - uVar8)) ||
        (dVar21 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)y),
        0.09239978343248367 <= dVar21)) || ((double)(mobyutil::g_FrameTime * 0.19) <= x)) {
      if ((uint)moby->updateId == pLd->anims[iVar17]->anim) {
        dVar21 = (double)((pLd->anims[7]->speed + pLd->anims[0]->speed) * 0.375);
        if (((x <= dVar21) || ((double)pLd->speed <= dVar21)) || ((pLd->onground & 0x3aU) != 0)) {
          if ((in_r8 & 5) != 0) {
            if ((pLd->flags & 1U) == 0) {
              mathfunc::cosf((float)y);
              dVar21 = 0.5;
              FUN_005e8128(y);
              if ((in_r8 & 1) == 0) {
                FUN_005e7f54(local_a0,local_a0,lVar20 + 0x30);
              }
              else {
                FUN_005e7f54(local_a0,local_a0,lVar20 + 0x10);
              }
              dVar22 = (double)mobyutil::GetGroundZ(dVar21,local_a0,0);
              bVar1 = pLd->state;
              pLd->stepZ = (float)dVar22;
              if (bVar1 < 6) {
                if (bVar1 < 3) {
                  if (bVar1 != 0) {
                    if (bVar1 < 2) {
                      dVar24 = (double)(float)(dVar22 - 0.0);
                      dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                      if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                  dVar23 + dVar24) <= pLd->stepHeight * 0.75) {
                        dVar23 = (double)(float)(dVar22 - 0.0);
                        dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                        if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                    dVar22 + dVar23) < pLd->stepHeight * -0.75) {
                          pLd->flags = pLd->flags | 8;
                          if ((in_r8 & 1) == 0) {
                            uVar11 = fastfunc::FastDoubleToInt
                                               ((double)((float)((double)pLd->anims[4]->footRange[1]
                                                                * dVar25) /
                                                        (float)(x / (double)pLd->anims[4]->speed)));
                            pwVar5 = pLd->anims[4];
                            iVar14 = fastfunc::FastDoubleToInt
                                               ((double)((pwVar5->footRange[1] * 0.125 +
                                                         pwVar5->footDown[1]) - pwVar5->frame0));
                            iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[4]->frames);
                            iVar17 = pLd->anims[4]->anim;
                            uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                               ((double)(longlong)
                                                        (iVar14 - (iVar14 / iVar15) * iVar15),
                                                *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                            mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                            Walk_ApplyLegQuatToEuler(lVar20);
                            pLd->state = '\a';
                          }
                          else {
                            uVar11 = fastfunc::FastDoubleToInt
                                               ((double)((float)((double)pLd->anims[5]->footRange[0]
                                                                * dVar25) /
                                                        (float)(x / (double)pLd->anims[5]->speed)));
                            pwVar5 = pLd->anims[5];
                            iVar14 = fastfunc::FastDoubleToInt
                                               ((double)((pwVar5->footRange[0] * 0.125 +
                                                         pwVar5->footDown[0]) - pwVar5->frame0));
                            iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[5]->frames);
                            iVar17 = pLd->anims[5]->anim;
                            uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                               ((double)(longlong)
                                                        (iVar14 - (iVar14 / iVar15) * iVar15),
                                                *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                            mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                            Walk_ApplyLegQuatToEuler(lVar20);
                            pLd->state = '\b';
                          }
                        }
                      }
                      else if ((in_r8 & 1) == 0) {
                        uVar11 = fastfunc::FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[1]->footRange[1] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[1]->speed)));
                        pwVar5 = pLd->anims[1];
                        iVar14 = fastfunc::FastDoubleToInt
                                           ((double)((pwVar5->footRange[1] * 0.125 +
                                                     pwVar5->footDown[1]) - pwVar5->frame0));
                        iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[1]->frames);
                        iVar17 = pLd->anims[1]->anim;
                        uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x02';
                      }
                      else {
                        uVar11 = fastfunc::FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[2]->footRange[0] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[2]->speed)));
                        pwVar5 = pLd->anims[2];
                        iVar14 = fastfunc::FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[2]->frames);
                        iVar17 = pLd->anims[2]->anim;
                        uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x03';
                      }
                    }
                    else {
                      dVar24 = (double)(float)(dVar22 - 0.0);
                      dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                      if (pLd->stepHeight * -0.75 <=
                          (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                  dVar23 + dVar24)) {
                        dVar23 = (double)(float)(dVar22 - 0.0);
                        dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                        if (pLd->stepHeight * 0.75 <=
                            (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                    dVar22 + dVar23)) {
                          uVar11 = fastfunc::FastDoubleToInt
                                             ((double)((float)((double)pLd->anims[3]->footRange[0] *
                                                              dVar25) /
                                                      (float)(x / (double)pLd->anims[3]->speed)));
                          pwVar5 = pLd->anims[3];
                          iVar14 = fastfunc::FastDoubleToInt
                                             ((double)((pwVar5->footRange[0] * 0.125 +
                                                       pwVar5->footDown[0]) - pwVar5->frame0));
                          iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[3]->frames);
                          iVar17 = pLd->anims[3]->anim;
                          uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                             ((double)(longlong)
                                                      (iVar14 - (iVar14 / iVar15) * iVar15),
                                              *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                          mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                          Walk_ApplyLegQuatToEuler(lVar20);
                          pLd->state = '\x04';
                        }
                        else {
                          pLd->state = '\x05';
                        }
                      }
                      else {
                        pwVar5 = pLd->anims[5];
                        pLd->flags = pLd->flags | 8;
                        uVar11 = fastfunc::FastDoubleToInt
                                           ((double)((float)((double)pwVar5->footRange[0] * dVar25)
                                                    / (float)(x / (double)pwVar5->speed)));
                        pwVar5 = pLd->anims[5];
                        iVar14 = fastfunc::FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[5]->frames);
                        iVar17 = pLd->anims[5]->anim;
                        uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\b';
                      }
                    }
                  }
                }
                else if (bVar1 < 4) {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if (pLd->stepHeight * 0.75 <=
                        (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23)) {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[3]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[3]->speed)));
                      pwVar5 = pLd->anims[3];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[3]->frames);
                      iVar17 = pLd->anims[3]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\x04';
                    }
                    else {
                      pLd->state = '\x06';
                    }
                  }
                  else {
                    pwVar5 = pLd->anims[4];
                    pLd->flags = pLd->flags | 8;
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[4];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[4]->frames);
                    iVar17 = pLd->anims[4]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\a';
                  }
                }
                else if (bVar1 < 5) {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23) < pLd->stepHeight * 0.75) {
                      if ((in_r8 & 1) == 0) {
                        uVar11 = fastfunc::FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[2]->footRange[1] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[2]->speed)));
                        pwVar5 = pLd->anims[2];
                        iVar14 = fastfunc::FastDoubleToInt
                                           ((double)((pwVar5->footRange[1] * 0.125 +
                                                     pwVar5->footDown[1]) - pwVar5->frame0));
                        iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[2]->frames);
                        iVar17 = pLd->anims[2]->anim;
                        uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x06';
                      }
                      else {
                        uVar11 = fastfunc::FastDoubleToInt
                                           ((double)((float)((double)pLd->anims[1]->footRange[0] *
                                                            dVar25) /
                                                    (float)(x / (double)pLd->anims[1]->speed)));
                        pwVar5 = pLd->anims[1];
                        iVar14 = fastfunc::FastDoubleToInt
                                           ((double)((pwVar5->footRange[0] * 0.125 +
                                                     pwVar5->footDown[0]) - pwVar5->frame0));
                        iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[1]->frames);
                        iVar17 = pLd->anims[1]->anim;
                        uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                           ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                            *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                        mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                        Walk_ApplyLegQuatToEuler(lVar20);
                        pLd->state = '\x05';
                      }
                    }
                  }
                  else {
                    pLd->flags = pLd->flags | 8;
                    if ((in_r8 & 1) == 0) {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[4]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[4]->speed)));
                      pwVar5 = pLd->anims[4];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[4]->frames);
                      iVar17 = pLd->anims[4]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\a';
                    }
                    else {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[5]->footRange[0] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[5]->speed)));
                      pwVar5 = pLd->anims[5];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[0] * 0.125 +
                                                   pwVar5->footDown[0]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[5]->frames);
                      iVar17 = pLd->anims[5]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\b';
                    }
                  }
                }
                else {
                  dVar24 = (double)(float)(dVar22 - 0.0);
                  dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23
                             + dVar24)) {
                    dVar23 = (double)(float)(dVar22 - 0.0);
                    dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                    if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) *
                                dVar22 + dVar23) <= pLd->stepHeight * 0.75) {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[0]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[0]->speed)));
                      pwVar5 = pLd->anims[0];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
                      iVar17 = pLd->anims[0]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\x01';
                    }
                    else {
                      pLd->state = '\x02';
                    }
                  }
                  else {
                    pwVar5 = pLd->anims[4];
                    pLd->flags = pLd->flags | 8;
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar25) /
                                                (float)(x / (double)pwVar5->speed)));
                    pwVar5 = pLd->anims[4];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[4]->frames);
                    iVar17 = pLd->anims[4]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\a';
                  }
                }
              }
              else if (bVar1 == 0xb) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar22 = (double)(float)(dVar22 - 0.0);
                  dVar25 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar25
                             + dVar22)) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)(pLd->anims[0]->footRange[0] /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[0] * dVar21 +
                                                        (double)pwVar5->footDown[0]) -
                                                pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\b';
                  }
                }
                else {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 10) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar22 = (double)(float)(dVar22 - 0.0);
                  dVar25 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <=
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar25
                             + dVar22)) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)(pLd->anims[0]->footRange[1] /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pwVar5->footRange[1] * dVar21 +
                                                        (double)pwVar5->footDown[1]) -
                                                pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\a';
                  }
                }
                else {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
              }
              else if (bVar1 == 9) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if (pLd->stepHeight * -0.75 <
                      (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23)) {
                    if ((in_r8 & 1) == 0) {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[5]->footRange[1] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[5]->speed)));
                      pwVar5 = pLd->anims[5];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[1] * 0.125 +
                                                   pwVar5->footDown[1]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[5]->frames);
                      iVar17 = pLd->anims[5]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\v';
                    }
                    else {
                      uVar11 = fastfunc::FastDoubleToInt
                                         ((double)((float)((double)pLd->anims[4]->footRange[0] *
                                                          dVar25) /
                                                  (float)(x / (double)pLd->anims[4]->speed)));
                      pwVar5 = pLd->anims[4];
                      iVar14 = fastfunc::FastDoubleToInt
                                         ((double)((pwVar5->footRange[0] * 0.125 +
                                                   pwVar5->footDown[0]) - pwVar5->frame0));
                      iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[4]->frames);
                      iVar17 = pLd->anims[4]->anim;
                      uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                         ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                          *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                      mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                      Walk_ApplyLegQuatToEuler(lVar20);
                      pLd->state = '\n';
                    }
                  }
                }
                else if ((in_r8 & 1) == 0) {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
                else {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 8) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * -0.75) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[6]->footRange[1] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[6]->speed)));
                    pwVar5 = pLd->anims[6];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[6]->frames);
                    iVar17 = pLd->anims[6]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\t';
                  }
                  else {
                    pLd->state = '\v';
                  }
                }
                else {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[1]->footRange[1] * dVar25)
                                              / (float)(x / (double)pLd->anims[1]->speed)));
                  pwVar5 = pLd->anims[1];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[1]->frames);
                  iVar17 = pLd->anims[1]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x02';
                }
              }
              else if (bVar1 == 7) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24) <= pLd->stepHeight * 0.75) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * -0.75) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[6]->footRange[0] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[6]->speed)));
                    pwVar5 = pLd->anims[6];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[6]->frames);
                    iVar17 = pLd->anims[6]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\t';
                  }
                  else {
                    pLd->state = '\n';
                  }
                }
                else {
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pLd->anims[2]->footRange[0] * dVar25)
                                              / (float)(x / (double)pLd->anims[2]->speed)));
                  pwVar5 = pLd->anims[2];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[2]->frames);
                  iVar17 = pLd->anims[2]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\x03';
                }
              }
              else if (bVar1 == 6) {
                dVar24 = (double)(float)(dVar22 - 0.0);
                dVar23 = (double)FUN_005e8128((double)pLd->yrot);
                if (pLd->stepHeight * -0.75 <=
                    (float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar23 +
                           dVar24)) {
                  dVar23 = (double)(float)(dVar22 - 0.0);
                  dVar22 = (double)FUN_005e8128((double)pLd->yrot);
                  if ((float)((double)(float)((double)pLd->anims[iVar17]->stride * dVar21) * dVar22
                             + dVar23) <= pLd->stepHeight * 0.75) {
                    uVar11 = fastfunc::FastDoubleToInt
                                       ((double)((float)((double)pLd->anims[0]->footRange[0] *
                                                        dVar25) /
                                                (float)(x / (double)pLd->anims[0]->speed)));
                    pwVar5 = pLd->anims[0];
                    iVar14 = fastfunc::FastDoubleToInt
                                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]
                                                 ) - pwVar5->frame0));
                    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0]->frames);
                    iVar17 = pLd->anims[0]->anim;
                    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                    Walk_ApplyLegQuatToEuler(lVar20);
                    pLd->state = '\x01';
                  }
                  else {
                    pLd->state = '\x03';
                  }
                }
                else {
                  pwVar5 = pLd->anims[5];
                  pLd->flags = pLd->flags | 8;
                  uVar11 = fastfunc::FastDoubleToInt
                                     ((double)((float)((double)pwVar5->footRange[0] * dVar25) /
                                              (float)(x / (double)pwVar5->speed)));
                  pwVar5 = pLd->anims[5];
                  iVar14 = fastfunc::FastDoubleToInt
                                     ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0])
                                              - pwVar5->frame0));
                  iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[5]->frames);
                  iVar17 = pLd->anims[5]->anim;
                  uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                     ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                      *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                  Walk_ApplyLegQuatToEuler(lVar20);
                  pLd->state = '\b';
                }
              }
            }
            else {
              pLd->stepZ = (moby->pos).z;
              pLd->flags = pLd->flags & 0xfffeU | 2;
              if ((in_r8 & 1) == 0) {
                uVar11 = fastfunc::FastDoubleToInt
                                   ((double)((float)((double)pLd->anims[9]->footRange[1] * dVar25) /
                                            (float)(x / (double)pLd->anims[9]->speed)));
                pwVar5 = pLd->anims[9];
                iVar14 = fastfunc::FastDoubleToInt
                                   ((double)((pwVar5->footRange[1] * 0.125 + pwVar5->footDown[1]) -
                                            pwVar5->frame0));
                iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[9]->frames);
                iVar17 = pLd->anims[9]->anim;
                uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                   ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                    *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                Walk_ApplyLegQuatToEuler(lVar20);
                pLd->state = '\x0e';
              }
              else {
                uVar11 = fastfunc::FastDoubleToInt
                                   ((double)((float)((double)pLd->anims[0xb]->footRange[0] * dVar25)
                                            / (float)(x / (double)pLd->anims[0xb]->speed)));
                pwVar5 = pLd->anims[0xb];
                iVar14 = fastfunc::FastDoubleToInt
                                   ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0]) -
                                            pwVar5->frame0));
                iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[0xb]->frames);
                iVar17 = pLd->anims[0xb]->anim;
                uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                                   ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                                    *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
                mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
                Walk_ApplyLegQuatToEuler(lVar20);
                pLd->state = '\x0f';
              }
            }
          }
        }
        else {
          dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
          iVar14 = fastfunc::FastDoubleToInt
                             ((double)((float)((double)pLd->anims[iVar17]->footUp[0] - dVar25) +
                                      pLd->anims[iVar17]->frames));
          iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[iVar17]->frames);
          iVar16 = fastfunc::FastDoubleToInt
                             ((double)((float)((double)pLd->anims[iVar17]->footUp[1] - dVar25) +
                                      pLd->anims[iVar17]->frames));
          iVar17 = fastfunc::FastDoubleToInt((double)pLd->anims[iVar17]->frames);
          if (iVar14 - (iVar14 / iVar15) * iVar15 < iVar16 - (iVar16 / iVar17) * iVar17) {
            iVar17 = fastfunc::FastDoubleToInt
                               ((double)(pLd->anims[7]->footUp[0] - pLd->anims[7]->frame0));
          }
          else {
            iVar17 = fastfunc::FastDoubleToInt
                               ((double)(pLd->anims[7]->footUp[1] - pLd->anims[7]->frame0));
          }
          iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[7]->frames);
          iVar16 = fastfunc::FastDoubleToInt((double)pLd->anims[7]->frames);
          uVar11 = fastfunc::FastDoubleToInt
                             ((double)(10.0 / (float)(x / (double)pLd->anims[7]->speed)));
          iVar14 = pLd->anims[7]->anim;
          uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                             ((double)(longlong)
                                      ((iVar17 + iVar15) - ((iVar17 + iVar15) / iVar16) * iVar16),
                              *(undefined4 *)(&moby->pClass->type + iVar14 * 4));
          mobyutil::MB_SetAnimation(lVar10,iVar14,uVar12,uVar11);
          Walk_ApplyLegQuatToEuler(lVar20);
          pLd->state = '\r';
        }
      }
    }
    else {
      mobyutil::MB_SetAnimation(lVar10,pLd->idle,0,10);
      Walk_ApplyLegQuatToEuler(lVar20);
      pLd->state = '\0';
    }
    return;
  }
  if (bVar1 == 0x14) {
    if ((in_r8 & 1) == 0) {
      return;
    }
    uVar11 = fastfunc::FastDoubleToInt
                       ((double)((pLd->anims[7]->footRange[0] * 0.25 + 2.0) /
                                (float)(x / (double)pLd->anims[7]->speed)));
    pwVar5 = pLd->anims[7];
    iVar14 = fastfunc::FastDoubleToInt
                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[0] + 1.0) -
                                pwVar5->frame0));
    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[7]->frames);
    iVar17 = pLd->anims[7]->anim;
    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->onground = '\x01';
    pLd->state = '\r';
    pLd->zVel = 0.0;
    pLd->flags = pLd->flags & 0xfffd;
    mathfunc::cosf((float)y);
    uVar11 = 0x3fe0000000000000;
    FUN_005e8128(y);
    FUN_005e7f54(local_80,local_80,lVar20 + 0x10);
    dVar25 = (double)mobyutil::GetGroundZ(uVar11,local_80,0);
    pLd->stepZ = (float)dVar25;
    return;
  }
  if (bVar1 == 0x13) {
    if ((in_r8 & 1) == 0) {
      return;
    }
    uVar11 = fastfunc::FastDoubleToInt
                       ((double)((pLd->anims[7]->footRange[1] * 0.25 + 2.0) /
                                (float)(x / (double)pLd->anims[7]->speed)));
    pwVar5 = pLd->anims[7];
    iVar14 = fastfunc::FastDoubleToInt
                       ((double)((pwVar5->footRange[0] * 0.125 + pwVar5->footDown[1] + 1.0) -
                                pwVar5->frame0));
    iVar15 = fastfunc::FastDoubleToInt((double)pLd->anims[7]->frames);
    iVar17 = pLd->anims[7]->anim;
    uVar12 = mobyfunc::MB_FindNearestAnimTrigger
                       ((double)(longlong)(iVar14 - (iVar14 / iVar15) * iVar15),
                        *(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar12,uVar11);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->onground = '\x01';
    pLd->state = '\r';
    pLd->zVel = 0.0;
    pLd->flags = pLd->flags & 0xfffd;
    mathfunc::cosf((float)y);
    uVar11 = 0x3fe0000000000000;
    FUN_005e8128(y);
    FUN_005e7f54(local_70,local_70,lVar20 + 0x10);
    dVar25 = (double)mobyutil::GetGroundZ(uVar11,local_70,0);
    pLd->stepZ = (float)dVar25;
    return;
  }
  if (bVar1 == 0x12) {
    if ((uint)moby->updateId != pLd->anims[0xc]->anim) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    if (1.0 < dVar25) {
      dVar21 = (double)fastfunc::FastIntToDouble(moby->previousAnimationFrame);
      fVar2 = (float)(dVar21 + (double)moby->animationBlend);
      fVar3 = fVar2 + 0.1;
      fVar4 = -(float)(dVar25 * 0.5 - (double)(pLd->anims[0xc]->footDown[1] + 2.0)) -
              pLd->anims[0xc]->frame0;
      if (fVar4 - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      moby->unk58 = animationSpeed * (fVar4 - fVar2);
      return;
    }
    dVar25 = (double)fastfunc::FastIntToDouble(moby->previousAnimationFrame);
    fVar9 = animationSpeed;
    fVar2 = (float)(dVar25 + (double)moby->animationBlend);
    fVar4 = pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0;
    fVar3 = fVar2 + 0.1;
    pLd->flags = pLd->flags & 0xfffb;
    if (fVar4 - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    moby->unk58 = fVar9 * (fVar4 - fVar2);
    pLd->state = '\x14';
    pLd->onground = '\x04';
    return;
  }
  if (bVar1 == 0x11) {
    if ((uint)moby->updateId != pLd->anims[10]->anim) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    if (1.0 < dVar25) {
      dVar21 = (double)fastfunc::FastIntToDouble(moby->previousAnimationFrame);
      fVar2 = (float)(dVar21 + (double)moby->animationBlend);
      fVar3 = fVar2 + 0.1;
      fVar4 = -(float)(dVar25 * 0.5 - (double)(pLd->anims[10]->footDown[1] + 2.0)) -
              pLd->anims[10]->frame0;
      if (fVar4 - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      moby->unk58 = animationSpeed * (fVar4 - fVar2);
      return;
    }
    dVar25 = (double)fastfunc::FastIntToDouble(moby->previousAnimationFrame);
    fVar9 = animationSpeed;
    fVar2 = (float)(dVar25 + (double)moby->animationBlend);
    fVar4 = pLd->anims[10]->footDown[1] - pLd->anims[10]->frame0;
    fVar3 = fVar2 + 0.1;
    pLd->flags = pLd->flags & 0xfffb;
    if (fVar4 - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    moby->unk58 = fVar9 * (fVar4 - fVar2);
    pLd->state = '\x13';
    pLd->onground = '\x04';
    return;
  }
  if (bVar1 == 0x10) {
    if (moby->updateId != pLd->rjumpc) {
      return;
    }
    dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
    dVar21 = (double)(pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0);
    if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
      return;
    }
    iVar14 = fastfunc::FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
    iVar17 = pLd->anims[0xc]->anim;
    uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                       (0,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
    mobyutil::MB_SetAnimation(lVar10,iVar17,uVar11,iVar14 >> 1);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->state = '\x12';
    return;
  }
  if (bVar1 != 0xf) {
    return;
  }
  if ((in_r8 & 0x30) != 0) {
    uVar11 = FUN_005e8588(lVar10 + 0x10,lVar20 + 0x60);
    libc::printf("jumpdist = %f\n",uVar11);
    dVar25 = (double)mobyutil::MB_computeLobVelocity
                               ((double)pLd->speed,-(double)pLd->grav,lVar10 + 0x10,lVar20 + 0x60);
    pLd->zVel = (float)dVar25;
    fVar2 = (pLd->jumpPos).m.x;
    fVar3 = (moby->pos).x;
    fVar4 = (pLd->jumpPos).m.y;
    pLd->flags = pLd->flags | 4;
    dVar25 = (double)FUN_005e8338((double)(fVar2 - fVar3),(double)(fVar4 - (moby->pos).y));
    (pLd->jumpPos).m.w = (float)dVar25;
  }
  dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
  if ((double)((pLd->anims[0xb]->frame0 + pLd->anims[0xb]->frames) - moby->unk58) <= dVar25) {
    mobyutil::MB_SetAnimation(lVar10,pLd->rjumpc,0,10);
    Walk_ApplyLegQuatToEuler(lVar20);
    pLd->state = '\x10';
    return;
  }
  if ((pLd->flags & 4U) == 0) {
    return;
  }
  uVar11 = 0;
  if (-1 < (int)pLd->zVel) {
    return;
  }
  dVar25 = (double)Walk_SolveStepTiming(moby,pLd);
  dVar21 = (double)(pLd->anims[0xc]->footDown[1] - pLd->anims[0xc]->frame0);
  if ((double)(float)(dVar21 * 2.0 + 15.0) <= dVar25) {
    return;
  }
  iVar17 = fastfunc::FastDoubleToInt(-(double)(float)(dVar21 * 2.0 - dVar25));
  lVar13 = (longlong)(iVar17 >> 1);
  iVar17 = pLd->anims[0xc]->anim;
  uVar11 = mobyfunc::MB_FindNearestAnimTrigger
                     (uVar11,*(undefined4 *)(&moby->pClass->type + iVar17 * 4));
  mobyutil::MB_SetAnimation(lVar10,iVar17,uVar11,lVar13 + (lVar13 >> 0x3f & -lVar13));
  Walk_ApplyLegQuatToEuler(lVar20);
  pLd->state = '\x12';
  return;
}



//==== 0017a230  ns=walk  size=0x810
// sig: undefined walk_Update(undefined8 x, undefined8 y, undefined8 z, undefined4 moby, undefined4 pLD)
// callers(5): 00136890 path::PathFollowUpdate; 0017ae30 walk::walk_WalkToPos; 0017b140 walk::walk_TurnToAngle; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(12): 0005c710 collproc::CollPill; 000efe40 mobyfunc::BlendAnimFrame; 000eff60 mobyfunc::MB_GetAnimSeqLength; 000f00a0 mobyfunc::MB_GetCollPrimWorld; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000ff190 mobyutil::MB_DeltAngSpeed; 00175b18 walk::Walk_GetLegRangeMask; 00175d68 walk::Walk_SolveLegGroundContact; 001766d8 walk::Walk_UpdateLegRotations; 00176c90 walk::Walk_UpdateStateMachine; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble
// strings: 0017a21c: '?fff?' (raw)

ulonglong walk::walk_Update(double x,double y,double z,MobyInstance *moby,w_2legData *pLD)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  w_2legAnim **ppwVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  ushort uVar14;
  w_2legData *pwVar15;
  uint flags;
  int iVar16;
  ulonglong uVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100 [24];
  float local_a0;
  float local_9c;
  undefined1 auStack_98 [4];
  undefined1 local_94 [24];
  undefined1 local_7c [36];
  
  if (moby->updateId == 0xff) {
    dVar23 = (double)fastfunc::FastIntToDouble(moby->animationFrame);
    fVar26 = mobyfunc::MB_GetAnimSeqLength((uint)moby->mClass,(uint)moby->animationId);
    dVar23 = (double)(float)(dVar23 + (double)fVar26);
  }
  else {
    dVar23 = (double)mobyfunc::BlendAnimFrame(moby);
  }
  iVar20 = 0;
  lVar21 = 0;
  lVar22 = 0xd;
  pwVar15 = pLD;
  do {
    ppwVar5 = pwVar15->anims;
    pwVar15 = (w_2legData *)&pwVar15->fpos[0].m.y;
    lVar21 = lVar21 + ((LZCOUNT((uint)moby->updateId - (*ppwVar5)->anim) << 0x3a) >> 0x3f &
                      ZEXT48(*ppwVar5) - lVar21);
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  if ((w_2legAnim *)lVar21 == (w_2legAnim *)0x0) {
    flags = (uint)(byte)pLD->onground;
  }
  else {
    flags = Walk_GetLegRangeMask(dVar23,(w_2legAnim *)lVar21);
  }
  pfVar18 = &pLD->angVel;
  uVar14 = pLD->flags & 4;
  if (uVar14 == 0) {
    if ((flags & 0xf) == 0) {
      dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).z,y,0,(double)(pLD->angDamp * 2.0),
                                  (double)pLD->angLimit,pfVar18,&DAT_0017a1e8,pfVar18);
    }
    else {
      dVar23 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).z,y,(double)pLD->angGain,
                                  (double)pLD->angDamp,(double)pLD->angLimit,pfVar18,flags & 0xf,
                                  pfVar18);
    }
  }
  else {
    dVar23 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).z,(double)(pLD->jumpPos).m.w,
                                (double)pLD->angGain,(double)pLD->angDamp,(double)pLD->angLimit,
                                pfVar18,uVar14,pfVar18);
  }
  (moby->rotation).z = (float)dVar23;
  Walk_UpdateLegRotations(moby,pLD,flags);
  dVar23 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)(moby->rotation).y,(double)pLD->yrot,0x3f747ae140000000,
                              0x3f847ae140000000,(double)(DAT_0071f408 * 0.017453292),&DAT_0017a1e8,
                              &DAT_00720000,&pLD->yrSpeed);
  (moby->rotation).y = (float)dVar23;
  mobyfunc::GetMobyJointsWorldPos(moby,6,local_94,local_100);
  fVar26 = pLD->speed;
  if ((pLD->flags & 4U) == 0) {
    iVar19 = 0;
    pfVar18 = local_100;
    fVar3 = 0.0;
    uVar17 = 1;
    fVar26 = fVar3;
    fVar4 = fVar3;
    fVar6 = fVar3;
    pwVar15 = pLD;
    do {
      if (((uint)uVar17 & (flags | (byte)pLD->onground & 0x30)) != 0) {
        fVar6 = fVar6 + 1.0;
        fVar3 = (fVar3 + pwVar15->fpos[0].m.x) - *pfVar18;
        fVar26 = (fVar26 + pwVar15->fpos[0].m.y) - pfVar18[1];
        fVar4 = (fVar4 + pwVar15->fpos[0].m.z) - pfVar18[2];
      }
      iVar19 = iVar19 + 1;
      uVar17 = (uVar17 & 0x7fffffff) << 1;
      pfVar18 = pfVar18 + 4;
      pwVar15 = (w_2legData *)(pwVar15->fpos + 1);
    } while (iVar19 < 6);
    fVar6 = 1.0 / fVar6;
    fVar4 = fVar6 * fVar4;
    fVar7 = fVar6;
  }
  else {
    fVar3 = (pLD->jumpPos).m.w;
    fVar4 = fVar3 + 1.5707963;
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar7 = fVar4;
    }
    fVar8 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar8 = fVar6;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
      fVar3 = fVar7;
    }
    fVar6 = fVar8 * fVar8;
    fVar7 = fVar3 * fVar3;
    fVar11 = fVar6 * fVar6 * fVar8;
    fVar4 = 0.0;
    fVar9 = fVar7 * fVar7 * fVar3;
    fVar12 = fVar6 * fVar11;
    fVar10 = fVar7 * fVar9;
    fVar6 = fVar6 * fVar12 * 2.601887e-06 +
            fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar8 * -0.16666657 + fVar8;
    fVar7 = fVar7 * fVar10 * 2.601887e-06 +
            fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar7 * fVar3 * -0.16666657 + fVar3;
    fVar3 = fVar26;
  }
  pfVar18 = local_100;
  lVar21 = 6;
  pwVar15 = pLD;
  do {
    pwVar15->fpos[0].m.x = fVar7 * fVar3 + *pfVar18;
    pwVar15->fpos[0].m.y = fVar6 * fVar26 + pfVar18[1];
    pwVar15->fpos[0].m.z = pfVar18[2] + fVar4;
    pfVar13 = pfVar18 + 3;
    pfVar18 = pfVar18 + 4;
    pwVar15->fpos[0].m.w = *pfVar13;
    pwVar15 = (w_2legData *)(pwVar15->fpos + 1);
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  dVar23 = (double)pLD->speed;
  (moby->pos).x = fVar7 * fVar3 + (moby->pos).x;
  (moby->pos).y = fVar6 * fVar26 + (moby->pos).y;
  (moby->pos).z = (moby->pos).z + fVar4;
  pLD->onground = (char)flags;
  if ((double)pLD->acc - z < 0.0) {
    z = (double)pLD->acc;
  }
  if (x <= dVar23) {
    if ((x < dVar23) && (pLD->speed = (float)(dVar23 - z), (double)(float)(dVar23 - z) < x)) {
      pLD->speed = (float)x;
    }
  }
  else {
    pLD->speed = (float)(dVar23 + z);
    if (x < (double)(float)(dVar23 + z)) {
      pLD->speed = (float)x;
    }
  }
  uVar17 = Walk_SolveLegGroundContact(moby,pLD);
  Walk_UpdateStateMachine(x,y,z,moby,pLD);
  if ((pLD->flags & 4U) == 0) {
    mobyfunc::MB_GetCollPrimWorld(moby,0,auStack_98,&local_110,&local_a0,&local_9c);
    bVar1 = moby->animationId;
    fVar26 = pLD->collZAdj;
    if ((((uint)bVar1 == pLD->anims[3]->anim) || ((uint)bVar1 == pLD->anims[1]->anim)) ||
       ((uint)bVar1 == pLD->anims[2]->anim)) {
      fVar26 = pLD->stepHeight * 2.0;
      pLD->collZAdj = fVar26;
    }
    else if (((uint)bVar1 == pLD->anims[7]->anim) && ((pLD->onground & 0xfU) != 0)) {
      fVar26 = pLD->stepHeight * 2.0;
      pLD->collZAdj = fVar26;
    }
    else if (bVar1 == moby->updateId) {
      fVar26 = fVar26 * 0.9;
      pLD->collZAdj = fVar26;
    }
    iVar19 = 0;
    local_108 = local_108 + fVar26;
    dVar25 = (double)((moby->pos).x - local_110);
    dVar24 = (double)((moby->pos).y - local_10c);
    dVar23 = (double)((moby->pos).z - local_108);
    do {
      iVar16 = collproc::CollPill((double)local_a0,(double)(local_9c - fVar26),&local_110);
      if (iVar16 == 0) break;
      iVar19 = iVar19 + 1;
      uVar17 = uVar17 | 1;
      local_110 = CollOutput.push.x;
      local_10c = CollOutput.push.y;
      local_108 = CollOutput.push.z;
      local_104 = CollOutput.push.w;
    } while (iVar19 < 8);
    fVar26 = (float)((double)local_10c - (double)(moby->pos).y);
    fVar3 = (float)((double)local_110 - (double)(moby->pos).x);
    (moby->pos).w = local_104;
    (moby->pos).x = (float)((double)local_110 + dVar25);
    (moby->pos).y = (float)((double)local_10c + dVar24);
    (moby->pos).z = (float)((double)local_108 + dVar23);
    if (SQRT(fVar3 * fVar3 + fVar26 * fVar26) < pLD->speed * 0.5) {
      uVar17 = uVar17 | 2;
    }
  }
  mobyfunc::GetMobyJointsWorldPos(moby,6,local_7c,pLD);
  cVar2 = pLD->state;
  fVar26 = pLD->speed;
  fVar3 = (moby->rotation).z;
  if (((cVar2 != '\x12') || ((uint)moby->updateId != pLD->anims[0xc]->anim)) &&
     (moby->unk58 = 1.0, pwVar15 = pLD, cVar2 != '\0')) {
    do {
      if (pwVar15->anims[0]->anim == (uint)moby->updateId) {
        dVar23 = 0.1899999976158142;
        if (((mobyutil::g_FrameTime * 0.19 <= fVar26) ||
            (dVar24 = (double)fastfunc::FastSubRots(fVar3,(float)y), dVar24 <= 0.09239978343248367))
           || (dVar23 = (double)(float)((double)mobyutil::g_FrameTime * dVar23), dVar23 <= x)) {
          dVar23 = (double)pLD->speed;
          fVar26 = pLD->anims[iVar20]->speed;
        }
        else {
          fVar26 = pLD->anims[iVar20]->speed;
        }
        moby->unk58 = animationSpeed * ABS((float)(dVar23 / (double)fVar26));
        return uVar17;
      }
      iVar20 = iVar20 + 1;
      pwVar15 = (w_2legData *)&pwVar15->fpos[0].m.y;
    } while (iVar20 < 0xd);
  }
  return uVar17;
}



//==== 0017aa48  ns=walk  size=0x3cc
// sig: undefined Walk_ResetLegState(undefined4 moby, w_2legData * pLD)
// callers(3): 002bbd68 mobyupdate_unsorted::UpdateMoby_181; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003b85b8 mobyupdate_unsorted::UpdateMoby_563
// callees(7): 000efe40 mobyfunc::BlendAnimFrame; 000eff60 mobyfunc::MB_GetAnimSeqLength; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1238 mobyfunc::GetMobyJointsWorldPos; 00175b18 walk::Walk_GetLegRangeMask; 00502730 fastfunc::FastIntToDouble

void walk::Walk_ResetLegState(MobyInstance *moby,w_2legData *pLD)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  w_2legAnim **ppwVar12;
  ulonglong uVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  int iVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  w_2legData *pwVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  ulonglong in_f31;
  float fVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x23] = in_f31;
  puVar9[0x21] = unaff_r30;
  puVar9[0x22] = unaff_r31;
  bVar1 = pLD->legs[0].jiHeel;
  *(uint *)((int)puVar9 + 0xb4) = (uint)(byte)pLD->legs[0].jiFoot;
  bVar2 = pLD->legs[1].jiFoot;
  *(uint *)(puVar9 + 0x17) = (uint)bVar1;
  bVar1 = pLD->legs[1].jiHeel;
  *(uint *)((int)puVar9 + 0xbc) = (uint)bVar2;
  bVar2 = pLD->moveJoint1;
  *(uint *)(puVar9 + 0x18) = (uint)bVar1;
  bVar1 = pLD->moveJoint2;
  *(uint *)((int)puVar9 + 0xc4) = (uint)bVar2;
  puVar9[0x20] = unaff_r29;
  puVar9[0x1f] = unaff_r28;
  puVar9[0x1e] = unaff_r27;
  *(uint *)(puVar9 + 0x19) = (uint)bVar1;
  mobyfunc::GetMobyJointsWorldPos(moby,6,uVar13 - 0x6c,pLD);
  iVar21 = 0;
  pwVar22 = pLD;
  do {
    mobyfunc::GetBoneTransformations(moby,pwVar22->legs[0].jiFoot,uVar13 - 0xb0);
    uVar7 = *(uint *)(puVar9 + 0x10);
    uVar8 = *(uint *)((int)puVar9 + 0x84);
    fVar3 = ABS(*(float *)(puVar9 + 0x10));
    fVar4 = ABS(*(float *)((int)puVar9 + 0x84));
    fVar26 = 0.0;
    pwVar22->legs[0].hrAct = 0.0;
    pwVar22->legs[0].arAct = 0.0;
    *(float *)(puVar9 + 0x16) = fVar3 - fVar4;
    cVar15 = pwVar22->legs[0].MHip.state;
    uVar16 = (ulonglong)(uVar7 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
    fVar5 = fVar3;
    if (*(float *)(puVar9 + 0x16) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar9 + 0x16) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar24 = uVar13 - 0x110;
      lVar19 = uVar13 - 0x44;
      lVar17 = uVar13 - 0x54;
      lVar23 = 2;
      fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x1b) = fVar4;
      *(float *)(puVar9 + 0x1a) = fVar4;
      *(float *)((int)puVar9 + 0xd4) = fVar4;
      *(float *)((int)puVar9 + 0xcc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar5;
      *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar4;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar24 + 0xcc) = *(float *)((int)lVar24 + 0xbc) * fVar4 * fVar4;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar13 - 0x54;
      pfVar18 = (float *)&DAT_007358e0;
      lVar24 = lVar14;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar18;
        fVar5 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar24 + 0xcc) = *(float *)((int)lVar24 + 0xcc) * fVar4;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar17 = 2;
      lVar24 = lVar14;
      do {
        iVar10 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar26 = fVar26 + *(float *)(iVar10 + 0xcc) + *(float *)(iVar11 + 4) +
                 *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar26 = (fVar26 + 0.7853982) * fVar6 + fVar3;
    }
    pwVar22->legs[0].frDest = fVar26;
    if (cVar15 == '\0') {
      mobyfunc::AttachManipulator(moby,(uint)(byte)pwVar22->legs[0].jiHip,&pwVar22->legs[0].MHip);
    }
    if (pwVar22->legs[0].MAnkle.state == '\0') {
      mobyfunc::AttachManipulator
                (moby,(uint)(byte)pwVar22->legs[0].jiAnkle,&pwVar22->legs[0].MAnkle);
    }
    iVar21 = iVar21 + 1;
    pwVar22 = (w_2legData *)&pwVar22->idle;
  } while (iVar21 < 2);
  if (moby->updateId == 0xff) {
    dVar25 = (double)fastfunc::FastIntToDouble(moby->animationFrame);
    fVar26 = mobyfunc::MB_GetAnimSeqLength((uint)moby->mClass,(uint)moby->animationId);
    dVar25 = (double)(float)(dVar25 + (double)fVar26);
  }
  else {
    dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
  }
  pLD->speed = 0.0;
  pLD->state = '\0';
  iVar21 = 0;
  puVar20 = &DAT_0073a8a4;
  pLD->onground = '\x05';
  pwVar22 = pLD;
  do {
    if (pwVar22->anims[0]->anim == (uint)moby->animationId) {
      fVar26 = moby->unk58;
      fVar3 = pwVar22->anims[0]->speed;
      pLD->state = (char)*puVar20;
      pLD->speed = ABS(fVar26 * fVar3);
    }
    iVar21 = iVar21 + 1;
    puVar20 = puVar20 + 1;
    pwVar22 = (w_2legData *)&pwVar22->fpos[0].m.y;
  } while (iVar21 < 0xd);
  lVar14 = 0;
  lVar24 = 0xd;
  pwVar22 = pLD;
  do {
    ppwVar12 = pwVar22->anims;
    pwVar22 = (w_2legData *)&pwVar22->fpos[0].m.y;
    lVar14 = lVar14 + ((LZCOUNT((uint)moby->updateId - (*ppwVar12)->anim) << 0x3a) >> 0x3f &
                      ZEXT48(*ppwVar12) - lVar14);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  cVar15 = '\x05';
  if ((w_2legAnim *)lVar14 != (w_2legAnim *)0x0) {
    cVar15 = Walk_GetLegRangeMask(dVar25,(w_2legAnim *)lVar14);
  }
  pLD->onground = cVar15;
  pLD->yrot = 0.0;
  pLD->yrSpeed = 0.0;
  pLD->angVel = 0.0;
  pLD->collZAdj = 0.0;
  pLD->zVel = 0.0;
  pLD->stepZ = 0.0;
  pLD->counter = 0;
  return;
}



//==== 0017ae30  ns=walk  size=0x300
// sig: undefined walk_WalkToPos(undefined8 x, MobyInstance * moby, undefined4 param_3, w_2legData * pLD)
// callers(0): 
// callees(2): 0017a230 walk::walk_Update; 005026a0 fastfunc::FastSubRots

undefined8 walk::walk_WalkToPos(double x,MobyInstance *moby,float *param_3,w_2legData *pLD)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xc0;
  puVar5 = (ulonglong *)lVar12;
  *puVar5 = uVar10;
  puVar5[0x1a] = in_LR;
  puVar5[0x17] = in_f31;
  fVar1 = (moby->pos).y;
  fVar2 = param_3[1];
  fVar3 = (moby->pos).x;
  fVar6 = fVar1 - fVar2;
  fVar4 = *param_3;
  fVar7 = fVar3 - fVar4;
  puVar5[0x15] = unaff_r30;
  puVar5[0x14] = unaff_r29;
  puVar5[0x16] = unaff_r31;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) <= (float)(x * 20.0)) {
    dVar18 = (double)fastfunc::FastSubRots(param_3[3],(moby->rotation).z);
    if ((0.03490658476948738 <= dVar18) &&
       (dVar18 = (double)fastfunc::FastSubRots(param_3[3],(moby->rotation).z),
       dVar18 <= -0.03490658476948738)) {
      return 1;
    }
    walk_Update((double)(float)(x * 0.25),(double)param_3[3],(double)(DAT_0071f418 * 5.0),moby,pLD);
  }
  else {
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)(puVar5 + 0xe) = fVar4;
    *(float *)((int)puVar5 + 0x74) = fVar2;
    *(float *)(puVar5 + 0xf) = fVar6 - fVar3;
    dVar18 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar5 + 0xe));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar2 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar5 + 0x74));
    if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    if (0.0 < fVar1) {
      lVar15 = uVar10 - 0xb0;
      lVar14 = uVar10 - 0x44;
      lVar13 = uVar10 - 0x34;
      lVar17 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar4 = fVar1 * fVar1;
      *(float *)(puVar5 + 0x11) = fVar1;
      *(float *)(puVar5 + 0x10) = fVar1;
      *(float *)((int)puVar5 + 0x84) = fVar1;
      *(float *)((int)puVar5 + 0x7c) = fVar1;
      fVar1 = fVar4 * fVar4;
      *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar4;
      *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar1;
      *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar1 * fVar4;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar1 * fVar1;
        iVar8 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar10 - 0x44;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar12;
      do {
        fVar1 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar1;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar9 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar8 + 0x7c)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar2);
    }
    walk_Update(x,dVar18,(double)(DAT_0071f418 * 5.0),moby,pLD);
  }
  return 0;
}



//==== 0017b140  ns=walk  size=0xd4
// sig: undefined walk_TurnToAngle(undefined8 param_1, undefined8 param_2, MobyInstance * moby, undefined8 param_4, w_2legData * pLD)
// callers(0): 
// callees(2): 0017a230 walk::walk_Update; 005026a0 fastfunc::FastSubRots

undefined8
walk::walk_TurnToAngle
          (double param_1,undefined8 param_2,MobyInstance *moby,undefined8 param_4,w_2legData *pLD)

{
  undefined8 uVar1;
  double rotZ;
  
  rotZ = (double)fastfunc::FastSubRots((float)param_1,(moby->rotation).z);
  if ((rotZ < 0.03490658476948738) ||
     (rotZ = (double)fastfunc::FastSubRots((float)param_1,(moby->rotation).z),
     -0.03490658476948738 < rotZ)) {
    walk_Update(param_2,param_1,(double)(DAT_0071f418 * 5.0),moby,pLD);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 0017b214  ns=Global  size=0x14
// sig: undefined SECTION_HEADER_WATER(void)
// callers(0): 
// callees(0): 

void SECTION_HEADER_WATER(void)

{
  DAT_0073a924 = 0x10000;
  return;
}



//==== 0017b230  ns=water  size=0x274
// sig: undefined WaterTile_InitAll(WaterTile * tiles, undefined4 tileCnt)
// callers(8): 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(1): 005d0140 libc::memset

void water::WaterTile_InitAll(WaterTile *tiles,int tileCnt)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  
  iVar2 = 0;
  if (0 < tileCnt) {
    pfVar1 = tiles->buf[0].height[0] + 2;
    pfVar6 = tiles->buf[0].heightBottom2 + 2;
    pfVar7 = tiles->buf[0].heightRight + 2;
    pfVar3 = tiles->buf[0].heightTop + 2;
    pfVar8 = tiles->buf[0].heightRight2 + 2;
    pfVar4 = tiles->buf[0].heightLeft + 2;
    pfVar5 = tiles->buf[0].heightBottom + 2;
    pfVar9 = tiles->buf[0].heightCorner + 2;
    do {
      iVar10 = 0;
      pfVar18 = pfVar9;
      pfVar14 = pfVar5;
      pfVar13 = pfVar4;
      pfVar17 = pfVar8;
      pfVar12 = pfVar3;
      pfVar16 = pfVar7;
      pfVar15 = pfVar6;
      pfVar11 = pfVar1;
      do {
        libc::memset(pfVar11,0,0x400);
        libc::memset(pfVar12,0,0x40);
        libc::memset(pfVar13,0,0x40);
        libc::memset(pfVar14,0,0x40);
        libc::memset(pfVar15,0,0x40);
        libc::memset(pfVar16,0,0x40);
        libc::memset(pfVar17,0,0x40);
        libc::memset(pfVar18,0,0x18);
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 0x170;
        pfVar17 = pfVar17 + 0x170;
        pfVar12 = pfVar12 + 0x170;
        pfVar13 = pfVar13 + 0x170;
        pfVar14 = pfVar14 + 0x170;
        pfVar15 = pfVar15 + 0x170;
        pfVar16 = pfVar16 + 0x170;
        pfVar18 = pfVar18 + 0x170;
      } while (iVar10 < 3);
      (tiles->scroll).x = 0.0;
      (tiles->scroll).y = 0.0;
      (tiles->scrollRate).x = -0.0016;
      (tiles->scrollRate).y = -0.0016;
      (tiles->rotRate).x = 0.02;
      (tiles->rotAngle).x = 1.5707964;
      (tiles->rotAngle).y = -1.5707964;
      pfVar3 = pfVar3 + 0x468;
      pfVar4 = pfVar4 + 0x468;
      (tiles->rotRate).y = -0.031;
      pfVar5 = pfVar5 + 0x468;
      tiles->wig_size = 0.03;
      pfVar1 = pfVar1 + 0x468;
      tiles->flags = 0;
      pfVar6 = pfVar6 + 0x468;
      pfVar7 = pfVar7 + 0x468;
      pfVar8 = pfVar8 + 0x468;
      iVar2 = iVar2 + 1;
      pfVar9 = pfVar9 + 0x468;
      tiles = (WaterTile *)&tiles[1].ovlTex;
    } while (iVar2 < tileCnt);
  }
  return;
}



//==== 0017b4b0  ns=water  size=0xe8
// sig: undefined WaterTile_CalcGridBSphere(WaterTile * tile, BSphere * bounds)
// callers(8): 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(1): 00502758 fastfunc::FastDoubleToInt

void water::WaterTile_CalcGridBSphere(WaterTile *tile,BSphere *bounds)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  undefined2 radInt;
  double rad;
  double bsphereConst;
  
  bsphereConst = 1024.0;
  fVar3 = (f32)fastfunc::FastDoubleToInt
                         ((double)(((tile->tilePos).x + WaterTileConsts.TileOffset.x) * 1024.0));
  fVar2 = WaterTileConsts.TileOffset.y;
  fVar1 = (tile->tilePos).y;
  bounds->x = fVar3;
  fVar3 = (f32)fastfunc::FastDoubleToInt((double)(float)((double)(fVar1 + fVar2) * bsphereConst));
  bounds->y = fVar3;
  fVar3 = (f32)fastfunc::FastDoubleToInt
                         ((double)(float)((double)((tile->tilePos).z - 1.0) * bsphereConst));
  rad = (double)WaterTileConsts.TileSize.x;
  bounds->z = fVar3;
  radInt = fastfunc::FastDoubleToInt((double)(float)(rad * bsphereConst));
  rad = (double)WaterTileConsts.TileSize.x;
  *(undefined2 *)&bounds->rad = radInt;
  radInt = fastfunc::FastDoubleToInt((double)(float)(rad * bsphereConst));
  *(undefined2 *)((int)&bounds->rad + 2) = radInt;
  return;
}



//==== 0017b5a0  ns=water  size=0x1e0
// sig: int WaterTile_LookupTile(float x, float y, float z)
// callers(1): 0017c3e0 water::WaterTile_GetHeight
// callees(1): 00502758 fastfunc::FastDoubleToInt

int water::WaterTile_LookupTile(float x,float y,float z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int tileCnt;
  float *pfVar4;
  int iVar5;
  int iVar6;
  WaterTileBox *pWVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (double)z;
  dVar9 = (double)x;
  dVar10 = (double)y;
  dVar12 = 1024.0;
  iVar1 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * 1024.0),dVar10,dVar11);
  iVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar10 * dVar12));
  iVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * dVar12));
  iVar8 = 0;
  tileCnt = WaterTileCnt;
  pWVar7 = WaterTileBoxes;
  if (0 < WaterTileCnt) {
    do {
      if ((((pWVar7->min_x <= iVar1) && (pWVar7->min_y <= iVar2)) && (pWVar7->min_z <= iVar3)) &&
         (((iVar1 < (int)(pWVar7->min_x + (uint)pWVar7->size_x) &&
           (iVar2 < (int)(pWVar7->min_y + (uint)pWVar7->size_y))) && (iVar3 < pWVar7->min_z + 0x800)
          ))) {
        pfVar4 = (float *)((int)WaterTiles + iVar8 * 0x11a0);
        iVar5 = fastfunc::FastDoubleToInt
                          ((double)((float)(dVar9 - (double)(*pfVar4 + WaterTileConsts.TileOffset.x)
                                           ) / WaterTileConsts.TileGridSize.x));
        iVar6 = fastfunc::FastDoubleToInt
                          ((double)((float)(dVar10 - (double)(pfVar4[1] +
                                                             WaterTileConsts.TileOffset.y)) /
                                   WaterTileConsts.TileGridSize.y));
        tileCnt = WaterTileCnt;
        if (((uint)*(ushort *)((int)pfVar4 + 0x1e) & 1 << ((iVar6 >> 2 & 3U) << 2 | iVar5 >> 2 & 3U)
            ) != 0) {
          return iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      pWVar7 = pWVar7 + 1;
    } while (iVar8 < tileCnt);
  }
  return -1;
}



//==== 0017b780  ns=water  size=0x3c
// sig: undefined WaterWave_ScaleTable(float scale)
// callers(8): 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(0): 

void water::WaterWave_ScaleTable(float scale)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  
  pfVar2 = (float *)&DAT_0073aac0;
  lVar3 = 0x2e;
  fVar1 = scale / CONST_1_0f;
  do {
    *pfVar2 = *pfVar2 * fVar1;
    pfVar2[1] = pfVar2[1] * fVar1;
    pfVar2 = pfVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



//==== 0017b7bc  ns=water  size=0xf4
// sig: undefined WaterTile_StepSim(WaterTile * tile, undefined4 cnt)
// callers(0): 
// callees(2): 000e91a8 mesh::StageTileBuf; 000e9c08 mesh::WaterTile_StepWave

void water::WaterTile_StepSim(WaterTile *tile,int cnt)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < cnt) {
    do {
      if (*(short *)((int)tile + iVar1 * 0x11a0 + 0x1e) != 0) {
        mesh::StageTileBuf(DAT_00902ec8,
                           (void *)((int)tile + DAT_00e5aaa4 * 0x5c0 + iVar1 * 0x11a0 + 0x50));
        mesh::WaterTile_StepWave((float *)DAT_00902ec8,iVar1,DAT_0073a9f0,tile);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cnt);
  }
  iVar1 = DAT_0073a9f0;
  DAT_0073a9f0 = DAT_00e5aaa4;
  DAT_00e5aaa4 = iVar1;
  return;
}



//==== 0017b8b8  ns=water  size=0x1d4
// sig: void WaterTile_UpdateWaves(WaterTile * tiles, int nTiles)
// callers(8): 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 00249498 mobyupdate_unsorted::UpdateMoby_1323; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(3): 000e91a8 mesh::StageTileBuf; 000e92e8 mesh::WaterTileBufLerp; 000e9c08 mesh::WaterTile_StepWave

void water::WaterTile_UpdateWaves(WaterTile *tiles,int nTiles)

{
  int iVar1;
  float *pfVar2;
  
  if (DAT_0073aa40 < 1.0 - WaterTileConsts.waveInc) {
    iVar1 = 0;
    DAT_0073a9f4 = 2;
    if (0 < nTiles) {
      pfVar2 = tiles->buf[0].height[0] + 2;
      do {
        if (tiles->mask != 0) {
          mesh::WaterTileBufLerp
                    (DAT_0073aa40,pfVar2 + DAT_0073a9f4 * 0x170,pfVar2 + DAT_0073a9f0 * 0x170,
                     pfVar2 + DAT_00e5aaa4 * 0x170);
        }
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 0x468;
        tiles = (WaterTile *)&tiles[1].ovlTex;
      } while (iVar1 < nTiles);
    }
  }
  else {
    iVar1 = 0;
    DAT_0073aa40 = WaterTileConsts.waveInc;
    if (0 < nTiles) {
      do {
        if (*(short *)((int)tiles + iVar1 * 0x11a0 + 0x1e) != 0) {
          mesh::StageTileBuf(DAT_00902ec8,
                             (void *)((int)tiles + DAT_00e5aaa4 * 0x5c0 + iVar1 * 0x11a0 + 0x50));
          mesh::WaterTile_StepWave((float *)DAT_00902ec8,iVar1,DAT_0073a9f0,tiles);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < nTiles);
    }
    DAT_0073a9f4 = DAT_00e5aaa4;
    iVar1 = DAT_0073a9f0;
    DAT_0073a9f0 = DAT_00e5aaa4;
    DAT_00e5aaa4 = iVar1;
  }
  DAT_0073aa40 = DAT_0073aa40 + WaterTileConsts.waveInc;
  return;
}



//==== 0017bab0  ns=water  size=0x2dc
// sig: undefined WaterTile_UpdateWaves(WaterTile * tile)
// callers(1): 0017cfdc water::WaterTile_DrawAll
// callees(1): 00502578 fastfunc::FastWrapRot

void water::WaterTile_UpdateWaves(WaterTile *tile)

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
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  fVar4 = (tile->scroll).x + (tile->scrollRate).x;
  fVar1 = (tile->scrollRate).y;
  fVar2 = (tile->rotAngle).x;
  fVar3 = (tile->rotRate).x;
  (tile->scroll).x = fVar4;
  if (1.0 < fVar4) {
    fVar4 = fVar4 - 1.0;
    (tile->scroll).x = fVar4;
  }
  if (fVar4 < 0.0) {
    (tile->scroll).x = fVar4 + 1.0;
  }
  fVar1 = (tile->scroll).y + fVar1;
  (tile->scroll).y = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 1.0;
    (tile->scroll).y = fVar1;
  }
  if (fVar1 < 0.0) {
    (tile->scroll).y = fVar1 + 1.0;
  }
  dVar17 = (double)fastfunc::FastWrapRot(fVar2,fVar3);
  (tile->rotAngle).x = (float)dVar17;
  dVar18 = (double)fastfunc::FastWrapRot((tile->rotAngle).y,(tile->rotRate).y);
  (tile->rotAngle).y = (float)dVar18;
  dVar20 = (double)(tile->rotAngle).x;
  fVar1 = (float)(dVar20 + 1.570796251296997);
  fVar2 = (float)(dVar18 + 1.570796251296997);
  fVar3 = (tile->scroll).x;
  pfVar14 = (float *)&DAT_0073ac40;
  pfVar13 = (float *)&DAT_0073aac0;
  iVar15 = 0;
  dVar17 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar17 = dVar18;
  }
  dVar21 = (double)(float)(3.141592502593994 - dVar20);
  if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
    dVar21 = dVar20;
  }
  fVar4 = tile->wig_size;
  fVar5 = (tile->scroll).y;
  pfVar16 = (float *)&DAT_0073aac4;
  fVar6 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar6 = fVar1;
  }
  fVar9 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar9 = fVar2;
  }
  pfVar12 = (float *)&DAT_0073ac44;
  dVar19 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar17 < 0.0) {
    dVar19 = dVar17;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar20);
  if ((double)(float)(-3.141592502593994 - dVar20) - dVar21 < 0.0) {
    dVar17 = dVar21;
  }
  fVar11 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
    fVar11 = fVar6;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
    fVar1 = fVar9;
  }
  do {
    if (*(int *)(&DAT_0073ae70 + (iVar15 >> 1) * 4) == 0) {
      fVar2 = *pfVar14;
      fVar6 = *pfVar12;
      dVar20 = dVar17;
      dVar18 = dVar17 * dVar17;
      fVar9 = fVar11;
      fVar10 = fVar11 * fVar11;
    }
    else {
      fVar2 = *pfVar14;
      fVar6 = *pfVar12;
      dVar20 = dVar19;
      dVar18 = dVar19 * dVar19;
      fVar9 = fVar1;
      fVar10 = fVar1 * fVar1;
    }
    dVar22 = (double)(float)dVar18;
    iVar15 = iVar15 + 2;
    pfVar14 = pfVar14 + 2;
    pfVar12 = pfVar12 + 2;
    fVar7 = fVar10 * fVar10 * fVar9;
    dVar18 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar20));
    fVar8 = fVar10 * fVar7;
    dVar21 = (double)(float)(dVar22 * dVar18);
    *pfVar13 = fVar2 + (fVar10 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar7 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) * fVar4 + fVar3;
    *pfVar16 = fVar6 + ((float)(dVar22 * dVar21) * 2.601887e-06 +
                       (float)(dVar21 * -0.0001980741071747616 +
                              (double)(float)(dVar18 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar22 * dVar20) *
                                                             -0.16666656732559204 + dVar20)))) *
                       fVar4 + fVar5;
    pfVar13 = pfVar13 + 2;
    pfVar16 = pfVar16 + 2;
  } while (iVar15 < 0x5c);
  return;
}



//==== 0017bd90  ns=water  size=0x620
// sig: void WaterTile_PutDrop(float x, float y, float radius, float height, WaterTile * tiles, int tileCount, float add)
// callers(15): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 0017c3b0 water::WaterTile_PutDrop_Thunk; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b4378 mobyupdate_unsorted::UpdateMoby_1072; 001e3720 mobyupdate_unsorted::UpdateMoby_1158; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002d1a58 mobyupdate_unsorted::UpdateMoby_19; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 0045c680 mobyupdate_unsorted::UpdateMoby_787; 0047efa0 mobyupdate_unsorted::UpdateMoby_831; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(0): 

void water::WaterTile_PutDrop
               (float x,float y,float radius,float height,WaterTile *tiles,int tileCount,float add)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar19;
  longlong lVar18;
  float *pfVar21;
  longlong lVar20;
  longlong lVar22;
  int in_r9;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  
  lVar20 = (longlong)(int)tiles;
  iVar16 = 0;
  if (0 < tileCount) {
    do {
      fVar13 = WaterTileConsts.TileGridSize.y;
      fVar12 = WaterTileConsts.TileGridSize.x;
      fVar11 = WaterTileConsts.TileOffset.x;
      pfVar21 = (float *)lVar20;
      fVar6 = (x - (*pfVar21 + WaterTileConsts.TileOffset.x)) / WaterTileConsts.TileGridSize.x;
      fVar5 = (y - (pfVar21[1] + WaterTileConsts.TileOffset.y)) / WaterTileConsts.TileGridSize.y;
      uVar1 = (uint)(fVar6 - radius);
      iVar25 = (int)(fVar6 + radius);
      uVar2 = (uint)(fVar5 - radius);
      iVar15 = (int)(fVar5 + radius);
      lVar23 = (ulonglong)uVar2 + ((longlong)(int)uVar2 >> 0x3f & -(ulonglong)uVar2);
      iVar25 = iVar25 + ((uint)(0xf - (longlong)iVar25 >> 0x3f) & 0xfU - iVar25);
      lVar14 = (ulonglong)uVar1 + ((longlong)(int)uVar1 >> 0x3f & -(ulonglong)uVar1);
      iVar15 = iVar15 + ((uint)(0xf - (longlong)iVar15 >> 0x3f) & 0xfU - iVar15);
      fVar5 = WaterTileConsts.TileGridSize.y * (float)(longlong)(int)lVar23 +
              pfVar21[1] + WaterTileConsts.TileOffset.y;
      if ((int)lVar23 <= iVar15) {
        lVar26 = lVar23 * 4;
        lVar22 = lVar23 * 0x40 + lVar20;
        do {
          fVar6 = fVar12 * (float)(longlong)(int)lVar14 + *pfVar21 + fVar11;
          if ((int)lVar14 <= iVar25) {
            lVar17 = lVar14 * 4;
            lVar18 = lVar14;
            do {
              fVar4 = (x - fVar6) * (x - fVar6) + (y - fVar5) * (y - fVar5);
              fVar7 = height / SQRT(fVar4);
              if (fVar4 - 1.0 < 0.0) {
                fVar7 = height;
              }
              iVar8 = (int)lVar17;
              iVar9 = (int)lVar22;
              if (in_r9 == 0) {
                fVar4 = *(float *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                if (ABS(fVar7) < ABS(fVar4)) {
                  fVar7 = fVar4;
                }
              }
              else {
                fVar7 = fVar7 + *(float *)(DAT_0073a9f4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              iVar24 = (int)lVar23;
              *(float *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50) = fVar7;
              if (iVar24 < 2) {
                bVar3 = *(byte *)(pfVar21 + 3);
                if (bVar3 != 0xff) {
                  if (iVar24 == 0) {
                    *(undefined4 *)
                     ((int)tiles + iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x4d0) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                  else {
                    *(undefined4 *)
                     ((int)tiles + iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x550) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                }
              }
              iVar19 = (int)lVar18;
              iVar10 = (int)lVar26;
              if (iVar19 < 2) {
                bVar3 = *(byte *)((int)pfVar21 + 0xd);
                if (bVar3 != 0xff) {
                  if (iVar19 == 0) {
                    *(undefined4 *)
                     ((int)tiles + iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x510) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                  else {
                    *(undefined4 *)
                     ((int)tiles + iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x590) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                }
              }
              if ((iVar24 == 0xf) && (*(byte *)((int)pfVar21 + 0xe) != 0xff)) {
                *(undefined4 *)
                 ((int)tiles +
                 iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)((int)pfVar21 + 0xe) * 0x11a0 + 0x450
                 ) = *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              if ((iVar19 == 0xf) && (*(byte *)((int)pfVar21 + 0xf) != 0xff)) {
                *(undefined4 *)
                 ((int)tiles +
                 iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)((int)pfVar21 + 0xf) * 0x11a0 +
                 0x490) = *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              if (*(byte *)(pfVar21 + 4) != 0xff) {
                if (iVar19 == 0 && iVar24 == 0) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5dc) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x14];
                }
                if (iVar19 == 1 && iVar24 == 0) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5e0) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x15];
                }
                if (iVar19 == 0 && iVar24 == 1) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5e4) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x24];
                }
              }
              if ((*(byte *)((int)pfVar21 + 0x11) != 0xff) && (iVar19 == 0xf && iVar24 == 0)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x11) * 0x11a0 + 0x5d8) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x23];
              }
              if ((*(byte *)((int)pfVar21 + 0x12) != 0xff) && (iVar19 == 0 && iVar24 == 0xf)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x12) * 0x11a0 + 0x5d4) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x104];
              }
              if ((*(byte *)((int)pfVar21 + 0x13) != 0xff) && (iVar19 == 0xf && iVar24 == 0xf)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x13) * 0x11a0 + 0x5d0) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x113];
              }
              lVar18 = lVar18 + 1;
              lVar17 = lVar17 + 4;
              fVar6 = fVar6 + fVar12;
            } while ((int)lVar18 <= iVar25);
          }
          lVar23 = lVar23 + 1;
          fVar5 = fVar5 + fVar13;
          lVar22 = lVar22 + 0x40;
          lVar26 = lVar26 + 4;
        } while ((int)lVar23 <= iVar15);
      }
      lVar20 = lVar20 + 0x11a0;
      iVar16 = iVar16 + 1;
    } while (iVar16 < tileCount);
  }
  return;
}



//==== 0017c3b0  ns=water  size=0x24
// sig: undefined WaterTile_PutDrop_Thunk(void)
// callers(3): 00230308 mobyupdate_unsorted::UpdateMoby_{1263_1393}; 0044cee0 mobyupdate_unsorted::UpdateMoby_751; 004a58e8 mobyupdate_unsorted::UpdateMoby_a_lot_2
// callees(1): 0017bd90 water::WaterTile_PutDrop

void water::WaterTile_PutDrop_Thunk
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               WaterTile *param_6,int param_7)

{
  WaterTile_PutDrop((float)param_1,(float)param_2,(float)param_3,(float)param_4,param_6,param_7,
                    (float)param_5);
  return;
}



//==== 0017c3e0  ns=water  size=0x2dc
// sig: float WaterTile_GetHeight(float x, float y, float z)
// callers(1): 00105f40 mobyutil::CollWaterHeight
// callees(3): 0017b5a0 water::WaterTile_LookupTile; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

float water::WaterTile_GetHeight(float x,float y,float z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar9;
  longlong lVar7;
  longlong lVar8;
  float *in_r6;
  int iVar10;
  float *in_r7;
  float *pfVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar14 = (double)x;
  dVar17 = (double)y;
  dVar18 = (double)x;
  iVar9 = WaterTile_LookupTile(x,y,z);
  if (-1 < iVar9) {
    pfVar11 = (float *)((int)WaterTiles + iVar9 * 0x11a0);
    dVar18 = (double)(float)(dVar14 - (double)(*pfVar11 + WaterTileConsts.TileOffset.x));
    dVar17 = (double)(float)(dVar17 - (double)(pfVar11[1] + WaterTileConsts.TileOffset.y));
    lVar7 = fastfunc::FastDoubleToInt
                      ((double)(float)(dVar18 / (double)WaterTileConsts.TileGridSize.x));
    lVar8 = fastfunc::FastDoubleToInt
                      ((double)(float)(dVar17 / (double)WaterTileConsts.TileGridSize.y));
    dVar14 = (double)fastfunc::FastIntToDouble(lVar7);
    dVar20 = (double)(float)(-(double)(float)(dVar14 * (double)WaterTileConsts.TileGridSize.x -
                                             dVar18) / (double)WaterTileConsts.TileGridSize.x);
    dVar14 = (double)fastfunc::FastIntToDouble(lVar8);
    dVar19 = (double)WaterTileConsts.TileGridSize.y;
    iVar12 = (int)lVar7;
    iVar10 = DAT_0073a9f4 * 0x5c0;
    iVar9 = (int)(lVar7 << 2);
    iVar6 = iVar9 + (int)(lVar8 << 6) + iVar10;
    dVar18 = (double)*(float *)((int)pfVar11 + iVar6 + 0x50);
    if (iVar12 == 0xf) {
      fVar1 = *(float *)((int)pfVar11 + (int)(lVar8 << 2) + iVar10 + 0x510);
    }
    else {
      fVar1 = *(float *)((int)pfVar11 + iVar6 + 0x54);
    }
    iVar13 = (int)lVar8;
    if (iVar13 == 0xf) {
      fVar2 = *(float *)((int)pfVar11 + iVar9 + iVar10 + 0x4d0);
    }
    else {
      fVar2 = *(float *)((int)pfVar11 + iVar6 + 0x90);
    }
    dVar15 = (double)fVar2;
    if ((iVar12 == 0xf) && (iVar13 == 0xf)) {
      dVar16 = (double)pfVar11[DAT_0073a9f4 * 0x170 + 0x177];
    }
    else if (iVar12 == 0xf) {
      dVar16 = (double)*(float *)((int)pfVar11 + (int)(lVar8 << 2) + iVar10 + 0x514);
    }
    else if (iVar13 == 0xf) {
      dVar16 = (double)*(float *)((int)pfVar11 + iVar9 + iVar10 + 0x4d4);
    }
    else {
      dVar16 = (double)*(float *)((int)pfVar11 + iVar6 + 0x94);
    }
    if (in_r6 != (float *)0x0) {
      fVar2 = (float)((double)(float)((double)fVar1 - dVar18) * dVar20 + dVar18);
      *in_r6 = ((float)((double)(float)(dVar16 - dVar15) * dVar20 + dVar15) - fVar2) *
               (float)(-(double)(float)(dVar14 * dVar19 - dVar17) / dVar19) + fVar2 + pfVar11[2];
      dVar19 = (double)WaterTileConsts.TileGridSize.y;
    }
    if (in_r7 != (float *)0x0) {
      dVar14 = (double)WaterTileConsts.TileGridSize.x;
      in_r7[1] = (float)(dVar14 * (double)(float)(dVar15 - dVar18));
      *in_r7 = (float)((double)(float)((double)fVar1 - dVar18) * dVar19);
      in_r7[2] = -(float)(dVar14 * dVar19);
      fVar1 = in_r7[1];
      fVar2 = *in_r7;
      fVar3 = in_r7[2];
      dVar18 = 0.0;
      in_r7[3] = 0.0;
      fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar14 = dVar18;
      dVar17 = dVar18;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        dVar18 = (double)(fVar2 * fVar5);
        dVar14 = (double)(fVar1 * fVar5);
        dVar17 = (double)(fVar3 * fVar5);
      }
      *in_r7 = (float)dVar18;
      in_r7[1] = (float)dVar14;
      in_r7[2] = (float)dVar17;
    }
  }
  return (float)dVar18;
}



//==== 0017c6bc  ns=water  size=0x94
// sig: undefined WaterTile_BuildVertexGrid(WaterTile * tile)
// callers(1): 0017cfdc water::WaterTile_DrawAll
// callees(0): 

void water::WaterTile_BuildVertexGrid(WaterTile *tile)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  
  iVar6 = 0;
  pfVar7 = (float *)(DAT_00902ec8 + 0x2000);
  pfVar4 = (float *)(DAT_00902ec8 + 0x70);
  fVar2 = (tile->tilePos).y + WaterTileConsts.TileOffset.y;
  do {
    lVar9 = 0x11;
    fVar3 = (tile->tilePos).x + WaterTileConsts.TileOffset.x;
    pfVar5 = pfVar4;
    pfVar8 = pfVar7;
    do {
      fVar1 = *pfVar5;
      *pfVar8 = fVar3;
      pfVar8[1] = fVar2;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar8 + 3;
      pfVar8[2] = fVar1 + (tile->tilePos).z;
      fVar3 = fVar3 + WaterTileConsts.TileGridSize.x;
      lVar9 = lVar9 + -1;
      pfVar8 = pfVar7;
    } while (lVar9 != 0);
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x18;
    fVar2 = fVar2 + WaterTileConsts.TileGridSize.y;
  } while (iVar6 < 0x11);
  return;
}



//==== 0017c750  ns=water  size=0x120
// sig: undefined WaterTile_DrawCellBase(WaterTile * tile, undefined4 idx)
// callers(1): 0017cfdc water::WaterTile_DrawAll
// callees(2): 00074150 draw::FastDrawStripColor; 004fe098 idol::AllocateMemAlign

void water::WaterTile_DrawCellBase(WaterTile *tile,uint idx)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  puVar5 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x450,0x10);
  lVar9 = 0x2e;
  puVar6 = &DAT_0073aac0;
  iVar3 = DAT_00902ec8 +
          ((idx & 3) * 4 +
          (int)((longlong)((int)idx >> 2) << 6) + (int)((longlong)((int)idx >> 2) << 2)) * 0xc +
          0x2000;
  psVar7 = &DAT_0073aa60;
  puVar8 = puVar5;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
    iVar4 = sVar2 * 3;
    *puVar8 = *(undefined4 *)(iVar3 + sVar2 * 0xc);
    puVar8[1] = *(undefined4 *)(iVar3 + (iVar4 + 1) * 4);
    puVar8[2] = *(undefined4 *)(iVar3 + (iVar4 + 2) * 4);
    puVar8[3] = *puVar6;
    uVar1 = puVar6[1];
    puVar8[5] = 0x7f7f7f7f;
    puVar6 = puVar6 + 2;
    puVar8[4] = uVar1;
    puVar8 = puVar8 + 6;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  draw::FastDrawStripColor(0x2e,puVar5,9);
  return;
}



//==== 0017c888  ns=water  size=0x28c
// sig: undefined WaterTile_DrawCellOvl(WaterTile * tile, undefined4 idx)
// callers(1): 0017cfdc water::WaterTile_DrawAll
// callees(2): 00074150 draw::FastDrawStripColor; 004fe098 idol::AllocateMemAlign

void water::WaterTile_DrawCellOvl(WaterTile *tile,uint idx)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  short *psVar8;
  undefined4 *puVar10;
  longlong lVar9;
  ulonglong uVar11;
  undefined8 in_LR;
  longlong lVar12;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  lVar5 = idol::AllocateMemAlign(FrameHeap,0x450,0x10);
  uVar6 = ((ulonglong)idx & 3) * 4 + (longlong)((int)idx >> 2) * 0x44;
  auVar17 = loadVectorLeftIndexed(in_LR,0x17c870);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = loadVectorLeftIndexed(4,0x17c870);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  iVar2 = DAT_00902ec8 + (int)uVar6 * 0xc + 0x2000;
  auVar17 = loadVectorLeftIndexed(8,0x17c870);
  auVar14 = loadVectorLeftIndexed(0xc,0x17c870);
  auVar13 = loadVectorLeftIndexed(0x10,0x17c870);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar15 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  iVar3 = DAT_00902ec8 + (int)((uVar6 & 0xffffffff) << 3) + 0x780;
  auVar17 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  psVar8 = &DAT_0073aa60;
  uVar6 = (ulonglong)DAT_00902ec8 + (uVar6 & 0x3fffffff) * 4 + 0x1088 & 0xffffffff;
  lVar7 = lVar5 + 0x14;
  lVar12 = 0x2e;
  lVar9 = lVar5;
  do {
    uVar11 = (ulonglong)*psVar8;
    auVar13 = ZEXT416(0xfffffff8);
    auVar20 = ZEXT416(0xffffffff);
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10 = (undefined4 *)lVar9;
    *puVar10 = *(undefined4 *)(iVar2 + *psVar8 * 0xc);
    puVar10[1] = *(undefined4 *)(iVar2 + (int)(uVar11 * 3 + 1) * 4);
    lVar4 = (uVar11 & 0x3fffffff) * 4;
    puVar10[2] = *(undefined4 *)(iVar2 + (int)(uVar11 * 3 + 2) * 4);
    auVar20 = ZEXT416(0xffffffff);
    auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10[3] = *(undefined4 *)(iVar3 + (int)((uVar11 & 0x7fffffff) << 3));
    auVar20 = ZEXT416(0xffffffff);
    auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10[4] = *(undefined4 *)(iVar3 + (int)((uVar11 & 0x7fffffff) * 2 + 1) * 4);
    auVar19 = loadVectorLeftIndexed(lVar4,uVar6);
    auVar20 = loadVectorRightIndexed(lVar4 + 0x10,uVar6);
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar19 = auVar19 | auVar20;
    auVar20 = ZEXT416(0xfffffff0);
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar21 = vectorRotateLeftIntegerWord
                        (auVar19,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar20 = vectorRotateLeftIntegerWord
                        (auVar19,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar23 = vectorLogicalAnd(auVar19,auVar15);
    auVar13 = vectorShiftRightWord(auVar19,auVar14);
    auVar21 = vectorLogicalAnd(auVar21,auVar15);
    auVar19 = vectorLogicalAnd(auVar20,auVar15);
    auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar23,0);
    auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar13,0);
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar21 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
    auVar19 = vectorConvertFromUnsignedFixedPointWord(auVar19,0);
    lVar9 = lVar9 + 0x18;
    psVar8 = psVar8 + 1;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar18,auVar24);
    auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar18,auVar22);
    auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar25);
    auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar13);
    auVar20 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar16);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar21,auVar16);
    auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar20);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar16);
    auVar20 = vectorConditionalSelect(auVar21,auVar16,auVar22);
    auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar24);
    auVar23 = vectorAddFloatingPoint(auVar23,auVar18);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar13,auVar16);
    auVar21 = vectorAddFloatingPoint(auVar20,auVar18);
    auVar20 = vectorConditionalSelect(auVar13,auVar16,auVar22);
    auVar19 = vectorAddFloatingPoint(auVar19,auVar18);
    auVar13 = ZEXT416(8);
    auVar20 = vectorAddFloatingPoint(auVar20,auVar18);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar16);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar21,auVar16);
    auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar24);
    auVar21 = vectorConditionalSelect(auVar21,auVar16,auVar22);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar16);
    auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar16);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar20 = vectorConditionalSelect(auVar20,auVar16,auVar22);
    auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar21 = vectorShiftLeftIntegerWord
                        (auVar21,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar19 = vectorShiftLeftIntegerWord
                        (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar13 = vectorShiftLeftIntegerWord(auVar20,auVar14);
    auVar13 = (auVar23 | auVar21 | auVar19 | auVar13) >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0,lVar7);
    *(undefined4 *)((uint)lVar7 & 0xfffffffc) = uVar1;
    lVar7 = lVar7 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  draw::FastDrawStripColor(0x2e,lVar5,9);
  return;
}



//==== 0017cb20  ns=water  size=0x494
// sig: undefined WaterTile_CullAndDrawCell(WaterTile * tile, undefined4 idx, undefined4 clipMode)
// callers(0): 
// callees(2): 000e9f28 stub::STUB_000e9f28; 00500460 fastfunc::FastUpdateClipFlags

void water::WaterTile_CullAndDrawCell(WaterTile *tile,uint idx,int clipMode)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
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
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong unaff_r24;
  ulonglong uVar27;
  ulonglong unaff_r25;
  ulonglong uVar28;
  ulonglong unaff_r26;
  int iVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar30;
  float *pfVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f30;
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
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar1 = uVar25 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar25;
  puVar7[0x28] = in_LR;
  puVar7[0x24] = in_f30;
  puVar7[0x25] = in_f31;
  puVar7[0x1f] = unaff_r27;
  *(uint *)(puVar7 + 0x1a) = idx;
  puVar7[0x23] = unaff_r31;
  *(uint *)((int)puVar7 + 0xd4) = idx;
  *(uint *)(puVar7 + 0x1b) = idx;
  *(uint *)((int)puVar7 + 0xdc) = idx;
  puVar7[0x22] = unaff_r30;
  puVar7[0x21] = unaff_r29;
  puVar7[0x20] = unaff_r28;
  puVar7[0x1e] = unaff_r26;
  puVar7[0x1d] = unaff_r25;
  puVar7[0x1c] = unaff_r24;
  if (clipMode != 0) {
    auVar34 = ZEXT416(3);
    auVar35 = ZEXT416(0xffffffff);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(2);
    auVar33 = vectorLogicalAnd(*(undefined1 (*) [16])(puVar7 + 0x1a),
                               auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
    auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar34 = loadVectorLeftIndexed(0xd0,0x17cb14);
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = loadVectorLeftIndexed(8,0x73aa00);
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar40 = loadVectorLeftIndexed(0xc,0x73aa00);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
    auVar34 = vectorShiftRightAlgebraicWord
                        (*(undefined1 (*) [16])(puVar7 + 0x1a),
                         auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar39);
    auVar36 = loadVectorLeftIndexed(0xd0,(longlong)(int)tile);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar34,0);
    auVar36 = vectorAddFloatingPoint(auVar36,auVar38);
    auVar38 = loadVectorLeftIndexed(4,(longlong)(int)tile);
    fVar4 = (tile->tilePos).z;
    auVar38 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar37);
    uVar28 = 0;
    auVar40 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar35);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar36);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar38);
    iVar29 = 0;
    auVar36 = vectorAddFloatingPoint(auVar36,auVar39);
    uVar27 = 0;
    lVar30 = uVar25 - 0xa0;
    auVar38 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar34 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    uVar6 = storeVectorElementWordIndexed(auVar33,0x90,lVar1);
    *(undefined4 *)(puVar7 + 0x12) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar35,0x94,lVar1);
    *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
    *(float *)(puVar7 + 0x13) = fVar4;
    *(undefined4 *)((int)puVar7 + 0x9c) = 0x3f800000;
    auVar34 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    uVar6 = storeVectorElementWordIndexed(auVar36,0xa0,lVar1);
    *(undefined4 *)(puVar7 + 0x14) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar35,0xa4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xa4) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar33,0xb0,lVar1);
    *(undefined4 *)(puVar7 + 0x16) = uVar6;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
    uVar6 = storeVectorElementWordIndexed(auVar34,0xb4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xb4) = uVar6;
    *(float *)(puVar7 + 0x17) = fVar4;
    uVar6 = storeVectorElementWordIndexed(auVar36,0xc0,lVar1);
    *(undefined4 *)(puVar7 + 0x18) = uVar6;
    *(undefined4 *)((int)puVar7 + 0xbc) = 0x3f800000;
    uVar6 = storeVectorElementWordIndexed(auVar34,0xc4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xc4) = uVar6;
    *(float *)(puVar7 + 0x19) = fVar4;
    *(undefined4 *)((int)puVar7 + 0xcc) = 0x3f800000;
    dVar32 = 1024.0;
    do {
      fVar8 = GameCamera.posZ;
      fVar3 = GameCamera.posY;
      fVar15 = GameCamera.mtx3.v1.z;
      fVar14 = GameCamera.mtx3.v1.y;
      fVar13 = GameCamera.mtx3.v1.x;
      fVar9 = GameCamera.mtx3.v0.x;
      pfVar31 = (float *)lVar30;
      fVar4 = *pfVar31 - GameCamera.posX;
      *(float *)(puVar7 + 0xe) = fVar4;
      fVar17 = GameCamera.mtx3.v2.x;
      fVar16 = GameCamera.mtx3.v1.w;
      fVar12 = GameCamera.mtx3.v0.z;
      fVar10 = GameCamera.mtx3.v0.y;
      fVar4 = (float)((double)fVar4 * dVar32);
      fVar2 = (float)((double)(pfVar31[1] - fVar3) * dVar32);
      *(float *)((int)puVar7 + 0x74) = pfVar31[1] - fVar3;
      fVar21 = GameCamera.mtx3.v3.x;
      fVar19 = GameCamera.mtx3.v2.z;
      fVar18 = GameCamera.mtx3.v2.y;
      fVar5 = pfVar31[3];
      fVar3 = (float)((double)(pfVar31[2] - fVar8) * dVar32);
      fVar8 = GameCamera.mtx3.v0.w * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      fVar22 = GameCamera.mtx3.v3.y;
      fVar20 = GameCamera.mtx3.v2.w;
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)((int)puVar7 + 0x8c) = fVar5;
      fVar24 = GameCamera.mtx3.v3.w;
      fVar23 = GameCamera.mtx3.v3.z;
      *(float *)((int)puVar7 + 0x7c) = fVar5;
      *(float *)(puVar7 + 0xe) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar2;
      *(float *)(puVar7 + 0xf) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar21 * fVar5 + fVar17 * fVar3 + fVar9 * fVar4 + fVar13 * fVar2;
      *(float *)((int)puVar7 + 0x84) =
           fVar22 * fVar5 + fVar18 * fVar3 + fVar10 * fVar4 + fVar14 * fVar2;
      *(float *)(puVar7 + 0x11) = fVar23 * fVar5 + fVar19 * fVar3 + fVar12 * fVar4 + fVar15 * fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar24 * fVar5 + fVar20 * fVar3 + fVar8 + fVar16 * fVar2;
      fVar8 = GameCamera.mtx4.v1.y * fVar2;
      fVar9 = GameCamera.mtx4.v1.z * fVar2;
      fVar10 = GameCamera.mtx4.v1.w * fVar2;
      fVar12 = GameCamera.mtx4.v0.y * fVar4;
      fVar13 = GameCamera.mtx4.v0.z * fVar4;
      fVar14 = GameCamera.mtx4.v0.w * fVar4;
      fVar15 = GameCamera.mtx4.v2.y * fVar3;
      fVar16 = GameCamera.mtx4.v2.z * fVar3;
      fVar17 = GameCamera.mtx4.v2.w * fVar3;
      fVar18 = GameCamera.mtx4.v3.y * fVar5;
      fVar19 = GameCamera.mtx4.v3.z * fVar5;
      fVar20 = GameCamera.mtx4.v3.w * fVar5;
      *(float *)(puVar7 + 0xe) =
           GameCamera.mtx4.v3.x * fVar5 +
           GameCamera.mtx4.v2.x * fVar3 +
           GameCamera.mtx4.v0.x * fVar4 + GameCamera.mtx4.v1.x * fVar2;
      *(float *)((int)puVar7 + 0x74) = fVar18 + fVar15 + fVar12 + fVar8;
      *(float *)(puVar7 + 0xf) = fVar19 + fVar16 + fVar13 + fVar9;
      *(float *)((int)puVar7 + 0x7c) = fVar20 + fVar17 + fVar14 + fVar10;
      uVar26 = fastfunc::FastUpdateClipFlags(uVar25 - 0xb0);
      uVar28 = (uVar28 & 0xffffff) << 8 | uVar26;
      uVar26 = fastfunc::FastUpdateClipFlags(uVar25 - 0xc0);
      iVar29 = iVar29 + 1;
      uVar27 = (uVar27 & 0xffffff) << 8 | uVar26;
      lVar30 = lVar30 + 0x10;
    } while (iVar29 < 4);
    uVar11 = (uint)uVar27;
    if (clipMode == 1) {
      if ((undefined *)(uVar11 & 0x1010101) == &DAT_01010101) {
        return;
      }
      if ((uVar11 & 0x2020202) == 0x2020202) {
        return;
      }
      if ((uVar11 & 0x4040404) == 0x4040404) {
        return;
      }
      if ((uVar11 & 0x8080808) == 0x8080808) {
        return;
      }
      if ((uVar11 & 0x20202020) == 0x20202020) {
        return;
      }
      if ((int)uVar28 == 0) {
        clipMode = 0;
      }
    }
    else {
      if ((undefined *)(uVar11 & 0x1010101) == &DAT_01010101) {
        return;
      }
      if ((uVar11 & 0x2020202) == 0x2020202) {
        return;
      }
      if ((uVar11 & 0x4040404) == 0x4040404) {
        return;
      }
      if ((uVar11 & 0x8080808) == 0x8080808) {
        return;
      }
      if ((uVar11 & 0x20202020) == 0x20202020) {
        return;
      }
      clipMode = 0;
    }
  }
  stub::STUB_000e9f28(((LZCOUNT(-clipMode) << 0x3a) >> 0x3f & 0xfffffffffffffffeU) + 0xe,
                      (idx & 3) * 4 +
                      (int)((longlong)((int)idx >> 2) << 6) + (int)((longlong)((int)idx >> 2) << 2))
  ;
  return;
}



//==== 0017cfb4  ns=water  size=0x28
// sig: undefined ???_Unused_Water_ResetIds_73aa44(void)
// callers(0): 
// callees(0): 

void water::____Unused_Water_ResetIds_73aa44(void)

{
  DAT_0073aa44 = 0xffffffff;
  DAT_0073aa50 = 0xffffffff;
  DAT_0073aa48 = 0xffffffff;
  DAT_0073aa4c = 0xffffffff;
  return;
}



//==== 0017cfdc  ns=water  size=0x474
// sig: undefined WaterTile_DrawAll(undefined4 tile, undefined4 cnt)
// callers(8): 001b4cdc mobyupdate_helpers::M1073_001b4cdc; 001e40d8 mobyupdate_helpers::M1159_001e40d8; 00230b54 mobyupdate_helpers::M1393_00230b54; 00249c50 mobyupdate_helpers::M1324_00249c50; 002d2290 mobyupdate_helpers::M190_002d2290; 0044ce28 mobyupdate_helpers::M751_0044ce28; 0047ffac mobyupdate_helpers::M832_0047ffac; 004a6518 mobyupdate_helpers::M977_004a6518
// callees(10): 000685c4 draw::GetEffectTex; 000e91a8 mesh::StageTileBuf; 000e9470 mesh::ShadeVerts; 0017bab0 water::WaterTile_UpdateWaves; 0017c6bc water::WaterTile_BuildVertexGrid; 0017c750 water::WaterTile_DrawCellBase; 0017c888 water::WaterTile_DrawCellOvl; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 00502ea8 idol_draw::PackCmd

void water::WaterTile_DrawAll(WaterTile *tile,int cnt)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  DAT_0073aa44 = 0xffffffff;
  iVar8 = 0;
  DAT_0073aa48 = 0xffffffff;
  DAT_0073aa4c = 0xffffffff;
  DAT_0073aa50 = 0xffffffff;
  if (0 < cnt) {
    do {
      if (tile->mask != 0) {
        mesh::StageTileBuf(DAT_00902ec8,tile->buf[DAT_0073a9f4].height[0] + 2);
        mesh::ShadeVerts(tile);
        WaterTile_BuildVertexGrid(tile);
        WaterTile_UpdateWaves(tile);
        uVar7 = tile->flags;
        if ((uVar7 & 1) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)DAT_00902ec8[1].buf[2].height[10] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 2) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)DAT_00902ec8[1].buf[2].height[0xd] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xcc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 4) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)DAT_00902ec8[2].buf[1].heightTop + iVar6 + -0x50) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 8) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)DAT_00902ec8[1].buf[2].height[10] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xcc;
          } while (lVar9 != 0);
        }
        pRVar2 = DL_Pass;
        uVar7 = (uint)tile->mask;
        if ((tile->ovlTex != DAT_0073aa44) || (tile->ovlAlpha != DAT_0073aa4c)) {
          uVar3 = (ulonglong)tile->ovlAlpha;
          uVar4 = idol_draw::PackCmd(0,1,2,1,uVar3 * 2 +
                                             ((longlong)(uVar3 * -2 + 0xff) >> 0x3f &
                                             uVar3 * -2 + 0xff));
          idol_draw::DrawDepth(pRVar2,uVar4);
          iVar6 = EffectTexHeaders;
          pRVar2 = DL_Pass;
          iVar5 = draw::GetEffectTex(tile->ovlTex);
          FUN_004d676c(pRVar2,0,iVar6 + iVar5 * 0x24,1,1);
          DAT_0073aa44 = tile->ovlTex;
          DAT_0073aa4c = (uint)tile->ovlAlpha;
        }
        iVar6 = 0;
        do {
          if ((uVar7 & 1) != 0) {
            WaterTile_DrawCellBase(tile,iVar6);
          }
          pRVar2 = DL_Pass;
          iVar6 = iVar6 + 1;
          uVar7 = (int)uVar7 >> 1;
        } while (iVar6 < 0x10);
        uVar7 = (uint)tile->mask;
        if ((tile->baseTex != DAT_0073aa44) || (tile->baseAlpha != DAT_0073aa4c)) {
          uVar3 = (ulonglong)tile->baseAlpha;
          uVar4 = idol_draw::PackCmd(0,1,2,1,uVar3 * 2 +
                                             ((longlong)(uVar3 * -2 + 0xff) >> 0x3f &
                                             uVar3 * -2 + 0xff));
          idol_draw::DrawDepth(pRVar2,uVar4);
          iVar6 = EffectTexHeaders;
          pRVar2 = DL_Pass;
          iVar5 = draw::GetEffectTex(tile->baseTex);
          FUN_004d676c(pRVar2,0,iVar6 + iVar5 * 0x24,1,1);
          DAT_0073aa44 = tile->baseTex;
          DAT_0073aa4c = (uint)tile->baseAlpha;
        }
        iVar6 = 0;
        do {
          if ((uVar7 & 1) != 0) {
            WaterTile_DrawCellOvl(tile,iVar6);
          }
          iVar6 = iVar6 + 1;
          uVar7 = (int)uVar7 >> 1;
        } while (iVar6 < 0x10);
      }
      iVar8 = iVar8 + 1;
      tile = (WaterTile *)&tile[1].ovlTex;
    } while (iVar8 < cnt);
  }
  pRVar1 = DL_Pass->command;
  DL_Pass->command = pRVar1 + 2;
  pRVar2 = DL_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar2->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar2->command = pRVar1 + 3;
  return;
}



//==== 0017d450  ns=water  size=0x38
// sig: undefined Sheet_ResetScroll(undefined4 cnt, WaterSheet * sheet)
// callers(0): 
// callees(0): 

void water::Sheet_ResetScroll(int cnt,WaterSheet *sheet)

{
  if (0 < cnt) {
    do {
      sheet->offsetU0 = 0.0;
      sheet->offsetV0 = 0.0;
      cnt = cnt + -1;
      sheet->offsetU1 = 0.0;
      sheet->offsetV1 = 0.0;
      sheet->frameRate = 0;
      sheet = sheet + 1;
    } while (0 < cnt);
  }
  return;
}



//==== 0017d488  ns=stub  size=0x24
// sig: undefined CALL_STUB_0017d488(void)
// callers(4): 0020e950 mobyupdate_helpers::M1225_0020e950; 0040f810 mobyupdate_helpers::M676_0040f810; 0040f890 mobyupdate_helpers::M678_0040f890; 00450c28 mobyupdate_helpers::M761_00450c28
// callees(1): 00071170 stub::STUB_00071170

void stub::CALL_STUB_0017d488(void)

{
  STUB_00071170();
  return;
}



//==== 0017d4b8  ns=water  size=0x3b8
// sig: undefined WaterSheet_DrawAll(undefined4 cnt, WaterSheet * sheet)
// callers(4): 0020e950 mobyupdate_helpers::M1225_0020e950; 0040f810 mobyupdate_helpers::M676_0040f810; 0040f890 mobyupdate_helpers::M678_0040f890; 00450c28 mobyupdate_helpers::M761_00450c28
// callees(9): 000685c4 draw::GetEffectTex; 00072b1c draw::FastDrawStrip_DLNoState; 00072ddc draw::FastDrawStrip_Pass; 000e9f48 mesh::BuildVerts; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 004fe098 idol::AllocateMemAlign; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd

void water::WaterSheet_DrawAll(int cnt,WaterSheet *sheet)

{
  RsxCmd *pRVar1;
  float fVar2;
  float fVar3;
  RenderingStep *pRVar4;
  int iVar8;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  
  iVar10 = 0;
  if (0 < cnt) {
    dVar13 = 1.0;
    dVar14 = -1.0;
    uVar15 = 0x4079000000000000;
    do {
      fVar2 = sheet->velocityU0 * sheet->scrollSpeedLayer0 + sheet->offsetU0;
      dVar12 = (double)fVar2;
      fVar3 = sheet->velocityV0 * sheet->scrollSpeedLayer0 + sheet->offsetV0;
      dVar11 = (double)fVar3;
      sheet->offsetU0 = fVar2;
      sheet->offsetV0 = fVar3;
      if (dVar12 <= dVar13) {
        if (dVar12 < dVar14) {
          sheet->offsetU0 = (float)(dVar12 + dVar13);
        }
      }
      else {
        sheet->offsetU0 = (float)(dVar12 - dVar13);
      }
      if (dVar11 <= dVar13) {
        if (dVar11 < dVar14) {
          sheet->offsetV0 = (float)(dVar11 + dVar13);
        }
      }
      else {
        sheet->offsetV0 = (float)(dVar11 - dVar13);
      }
      fVar2 = sheet->velocityU1 * sheet->scrollSpeedLayer1 + sheet->offsetU1;
      dVar12 = (double)fVar2;
      fVar3 = sheet->velocityV1 * sheet->scrollSpeedLayer1 + sheet->offsetV1;
      dVar11 = (double)fVar3;
      sheet->offsetU1 = fVar2;
      sheet->offsetV1 = fVar3;
      if (dVar12 <= dVar13) {
        if (dVar12 < dVar14) {
          sheet->offsetU1 = (float)(dVar12 + dVar13);
        }
      }
      else {
        sheet->offsetU1 = (float)(dVar12 - dVar13);
      }
      if (dVar11 <= dVar13) {
        if (dVar11 < dVar14) {
          sheet->offsetV1 = (float)(dVar11 + dVar13);
        }
      }
      else {
        sheet->offsetV1 = (float)(dVar11 - dVar13);
      }
      sheet->frameCounter = sheet->frameCounter + sheet->frameRate & 0xffffff;
      iVar8 = fastfunc::FastCheckBsphereInView(uVar15,sheet->cullData);
      if (iVar8 != -1) {
        uVar5 = idol::AllocateMemAlign(FrameHeap,sheet->vertexCount << 5,0x10);
        mesh::BuildVerts(sheet,(WaterSheetVert *)uVar5);
        pRVar4 = DL_Pass;
        uVar6 = (ulonglong)sheet->depthBias0;
        uVar7 = idol_draw::PackCmd(0,1,2,1,uVar6 * 2 +
                                           ((longlong)(uVar6 * -2 + 0xff) >> 0x3f &
                                           uVar6 * -2 + 0xff));
        idol_draw::DrawDepth(pRVar4,uVar7);
        iVar8 = EffectTexHeaders;
        pRVar4 = DL_Pass;
        iVar9 = draw::GetEffectTex(sheet->textureId0);
        FUN_004d676c(pRVar4,0,iVar8 + iVar9 * 0x24,1,1);
        draw::FastDrawStrip_Pass(sheet->vertexCount,uVar5,9);
        pRVar4 = DL_Pass;
        uVar6 = (ulonglong)sheet->depthBias1;
        uVar7 = idol_draw::PackCmd(0,1,2,1,uVar6 * 2 +
                                           ((longlong)(uVar6 * -2 + 0xff) >> 0x3f &
                                           uVar6 * -2 + 0xff));
        idol_draw::DrawDepth(pRVar4,uVar7);
        iVar8 = EffectTexHeaders;
        pRVar4 = DL_Pass;
        iVar9 = draw::GetEffectTex(sheet->textureId1);
        FUN_004d676c(pRVar4,0,iVar8 + iVar9 * 0x24,1,1);
        draw::FastDrawStrip_DLNoState(sheet->vertexCount,uVar5);
      }
      iVar10 = iVar10 + 1;
      sheet = sheet + 1;
    } while (iVar10 < cnt);
  }
  pRVar1 = DL_Pass->command;
  DL_Pass->command = pRVar1 + 2;
  pRVar4 = DL_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar4->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar4->command = pRVar1 + 3;
  return;
}



//==== 0017d870  ns=stub  size=0x4
// sig: undefined STUB_0017d870(void)
// callers(0): 
// callees(0): 

void stub::STUB_0017d870(void)

{
  return;
}



//==== 0017d8f8  ns=water  size=0x3a4
// sig: undefined SubmitOceanCell(void)
// callers(1): 0017dd20 water::OceanPass
// callees(2): 00074780 draw::FastDrawStripFog; 004fe098 idol::AllocateMemAlign

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void water::SubmitOceanCell
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9)

{
  short sVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  short *psVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  longlong lVar17;
  ulonglong in_f31;
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
  undefined1 local_800 [2048];
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x8a0);
  *puVar3 = uVar7;
  puVar3[0x116] = in_LR;
  puVar3[0x113] = in_f31;
  puVar3[0x110] = unaff_r29;
  auVar23 = _DAT_0017d8a0;
  auVar22 = _DAT_0017d890;
  auVar20 = _DAT_0017d880;
  auVar18 = ZEXT416(0);
  auVar26 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = loadVectorLeftIndexed(8,param_4);
  auVar21 = loadVectorLeftIndexed(0x10,param_4);
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar24 = loadVectorLeftIndexed(0x14,param_4);
  iVar9 = 0;
  lVar10 = uVar7 - 0x800;
  puVar3[0x111] = unaff_r30;
  puVar3[0x112] = unaff_r31;
  auVar18 = vectorPermute(auVar21,auVar26,auVar20);
  uVar2 = storeVectorElementWordIndexed(auVar19,0x78,uVar7 - 0x8a0);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  *(float *)(puVar3 + 0x10c) = (float)param_2;
  *(float *)((int)puVar3 + 0x74) = (float)param_2;
  *(float *)((int)puVar3 + 0x864) = (float)param_2;
  auVar25 = vectorPermute(auVar18,*(undefined1 (*) [16])(puVar3 + 0x10),auVar22);
  *(float *)(puVar3 + 0x10d) = (float)param_2;
  *(float *)((int)puVar3 + 0x86c) = (float)param_2;
  auVar20 = _DAT_0017d8c0;
  auVar18 = _DAT_0017d8b0;
  auVar23 = vectorPermute(auVar26,auVar24,auVar23);
  auVar21 = vectorAddFloatingPoint(auVar25,auVar25);
  auVar23 = vectorPermute(auVar23,*(undefined1 (*) [16])(puVar3 + 0x12),auVar22);
  auVar22 = *(undefined1 (*) [16])(puVar3 + 0x10c);
  *(float *)(puVar3 + 0x10c) = (float)param_1;
  uVar6 = 0x860;
  *(float *)((int)puVar3 + 0x864) = (float)param_1;
  auVar22 = vectorPermute(auVar22,auVar19,auVar18);
  *(float *)(puVar3 + 0x10d) = (float)param_1;
  *(float *)((int)puVar3 + 0x86c) = (float)param_1;
  auVar18 = _DAT_0017d8d0;
  auVar24 = vectorPermute(auVar22,*(undefined1 (*) [16])(puVar3 + 0xe),auVar20);
  auVar22 = vectorAddFloatingPoint(auVar21,auVar25);
  puVar3[0x10f] = unaff_r28;
  auVar20 = vectorAddFloatingPoint(auVar21,auVar21);
  auVar19 = *(undefined1 (*) [16])(puVar3 + 0x10c);
  do {
    auVar24 = vectorPermute(auVar19,auVar24,auVar18);
    *(float *)(puVar3 + 0xe) = (float)param_1;
    lVar16 = 2;
    do {
      auVar26 = vectorAddFloatingPoint(auVar24,auVar25);
      auVar27 = vectorAddFloatingPoint(auVar24,auVar21);
      pauVar5 = (undefined1 (*) [16])lVar10;
      auVar29 = vectorAddFloatingPoint(auVar24,auVar22);
      *pauVar5 = auVar24;
      lVar10 = lVar10 + 0x40;
      auVar24 = vectorAddFloatingPoint(auVar24,auVar20);
      pauVar5[1] = auVar26;
      pauVar5[2] = auVar27;
      pauVar5[3] = auVar29;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    auVar24 = vectorAddFloatingPoint(auVar24,auVar23);
    iVar9 = iVar9 + 1;
    *(undefined1 (*) [16])(puVar3 + 0xe) = auVar24;
  } while (iVar9 < 8);
  lVar16 = idol::AllocateMemAlign(FrameHeap,0xd90,0x10);
  auVar18 = loadVectorLeftIndexed(0x60,0x17d880);
  auVar22 = loadVectorLeftIndexed(0x68,0x17d880);
  auVar20 = loadVectorLeftIndexed(100,0x17d880);
  auVar23 = loadVectorLeftIndexed(0x6c,0x17d880);
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar22 = loadVectorLeftIndexed(0x70,0x17d880);
  puVar13 = &DAT_00e5aad4;
  auVar20 = loadVectorLeftIndexed(0x74,0x17d880);
  psVar15 = &DAT_0073b330;
  puVar14 = &DAT_00e5aad0;
  auVar18 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  lVar12 = lVar16 + 4;
  auVar18 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  lVar11 = lVar16 + 8;
  auVar18 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  param_7 = param_7 + 0x10;
  lVar8 = lVar16 + 0x18;
  lVar17 = 0x7c;
  lVar10 = lVar16;
  do {
    sVar1 = *psVar15;
    auVar20 = ZEXT416(0xfffffff0);
    auVar25 = ZEXT416(0xffffffff);
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar30 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = ZEXT416(0xffffffff);
    auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    psVar15 = psVar15 + 1;
    auVar27 = *(undefined1 (*) [16])(local_800 + (int)((longlong)sVar1 << 4));
    auVar25 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar26 = auVar27 >> 0x40 & (undefined1  [16])0xffffffff;
    auVar27 = auVar27 >> 0x20 & (undefined1  [16])0xffffffff;
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    uVar4 = (uint)lVar10;
    uVar2 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0,lVar10);
    *(undefined4 *)(uVar4 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar12);
    *(undefined4 *)((uint)lVar12 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0,lVar11);
    *(undefined4 *)((uint)lVar11 & 0xfffffffc) = uVar2;
    auVar25 = ZEXT416(0xfffffff8);
    *(undefined4 *)(uVar4 + 0xc) = *puVar14;
    uVar2 = *puVar13;
    *(float *)(uVar4 + 0x14) = (float)param_3;
    *(undefined4 *)(uVar4 + 0x10) = uVar2;
    auVar26 = loadVectorLeftIndexed(uVar6,param_7);
    auVar20 = vectorRotateLeftIntegerWord
                        (auVar26,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar27 = vectorRotateLeftIntegerWord
                        (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
    auVar28 = vectorLogicalAnd(auVar26,auVar23);
    auVar25 = vectorShiftRightWord(auVar26,auVar22);
    auVar20 = vectorLogicalAnd(auVar20,auVar23);
    auVar26 = vectorLogicalAnd(auVar27,auVar23);
    auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar28,0);
    auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
    auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar20,0);
    auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
    lVar12 = lVar12 + 0x1c;
    lVar11 = lVar11 + 0x1c;
    lVar10 = lVar10 + 0x1c;
    puVar14 = puVar14 + 2;
    puVar13 = puVar13 + 2;
    param_7 = param_7 + 4;
    auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar19,auVar29);
    auVar27 = vectorAddFloatingPoint(auVar25,auVar24);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar20,auVar19,auVar30);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar19,auVar31);
    auVar20 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar21);
    auVar28 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar21);
    auVar20 = vectorConditionalSelect(auVar29,auVar21,auVar20);
    auVar29 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar21);
    auVar25 = vectorConditionalSelect(auVar25,auVar21,auVar28);
    auVar29 = vectorConditionalSelect(auVar26,auVar21,auVar29);
    auVar28 = vectorAddFloatingPoint(auVar20,auVar24);
    auVar20 = ZEXT416(8);
    auVar26 = vectorAddFloatingPoint(auVar25,auVar24);
    auVar29 = vectorAddFloatingPoint(auVar29,auVar24);
    auVar25 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar21);
    auVar30 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar21);
    auVar28 = vectorConditionalSelect(auVar28,auVar21,auVar25);
    auVar25 = vectorConditionalSelect(auVar26,auVar21,auVar30);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar21);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar29 = vectorConditionalSelect(auVar29,auVar21,auVar26);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar21);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar26 = vectorConditionalSelect(auVar27,auVar21,auVar26);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar22);
    auVar20 = vectorShiftLeftIntegerWord
                        (auVar25,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar25 = vectorShiftLeftIntegerWord
                        (auVar27,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar20 = (auVar26 | auVar20 | auVar25 | auVar29 | auVar23) >> 0x60 &
              (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0,lVar8);
    *(undefined4 *)((uint)lVar8 & 0xfffffffc) = uVar2;
    lVar8 = lVar8 + 0x1c;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  draw::FastDrawStripFog(0x7c,lVar16,param_9);
  if (*(char *)((int)param_4 + 0x3f) == -0x80) {
    draw::FastDrawStripFog(0x7c,lVar16,0);
  }
  return;
}



//==== 0017dd20  ns=water  size=0x5fc
// sig: undefined OceanPass(OceanPlane * ocean)
// callers(2): 0017e558 water::SubmitZone; 0017ec00 water::OceanPass_Thunk
// callees(8): 000685c4 draw::GetEffectTex; 0017d8f8 water::SubmitOceanCell; 004d5fe4 idol_draw::DrawDepth; 004d676c FUN_004d676c; 004d6948 idol_draw::ResetPassState; 004ff328 fastfunc::FastCheckBsphere; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 00654124: 'Ocean'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double water::OceanPass(OceanPlane *ocean)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  RenderingStep *pRVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort uVar19;
  ulonglong unaff_r20;
  ulonglong uVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  char *pcVar21;
  ulonglong unaff_r28;
  int TEXTURE;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong in_f26;
  double dVar25;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar15 = (longlong)(int)ocean;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 400;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar20;
  puVar8[0x34] = in_LR;
  puVar8[0x2c] = in_f26;
  puVar8[0x2d] = in_f27;
  puVar8[0x2e] = in_f28;
  puVar8[0x2f] = in_f29;
  puVar8[0x30] = in_f30;
  puVar8[0x31] = in_f31;
  puVar8[0x2b] = unaff_r31;
  lVar13 = uVar20 - 0xa0;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar8[0x29] = unaff_r29;
  puVar8[0x21] = unaff_r21;
  bVar2 = ocean->depth;
  puVar8[0x2a] = unaff_r30;
  puVar8[0x28] = unaff_r28;
  puVar8[0x27] = unaff_r27;
  puVar8[0x26] = unaff_r26;
  puVar8[0x25] = unaff_r25;
  puVar8[0x24] = unaff_r24;
  puVar8[0x23] = unaff_r23;
  puVar8[0x22] = unaff_r22;
  puVar8[0x20] = unaff_r20;
  if (bVar2 == 0x80) {
    lVar22 = 2;
    idol_draw::DrawDepth(DepthPass,0);
    pRVar12 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
    idol_draw::DrawDepth(ForwardPass,0);
    pRVar12 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  else if (Level == Kerwan) {
    lVar22 = 1;
    idol_draw::DrawDepth(OceanForwardPass,0xc000000064);
    pRVar12 = OceanForwardPass;
    *OceanForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  else {
    lVar22 = 2;
    idol_draw::DrawDepth(ForwardPass,(ulonglong)bVar2 << 0x21 | 100);
    pRVar12 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  iVar9 = (int)(lVar22 << 2);
  idol_draw::RsxCmd_DebugStr_Marker(*(undefined4 *)((int)&DepthPass + iVar9),"Ocean");
  bVar2 = ocean->field16_0x33;
  iVar17 = worldUpdateTime / (int)(uint)bVar2;
  puVar8[0x14] = (longlong)worldUpdateTime;
  uVar23 = puVar8[0x14];
  puVar8[0x14] = (ulonglong)bVar2;
  bVar2 = ocean->num_texs_to_cycle;
  uVar24 = puVar8[0x14];
  puVar8[0x14] = (longlong)iVar17;
  iVar18 = EffectTexHeaders;
  uVar5 = ocean->tex_offset;
  uVar20 = (ulonglong)DAT_00902e9c;
  TEXTURE = (uint)uVar5 + (iVar17 - (iVar17 / (int)(uint)bVar2) * (uint)bVar2);
  uVar7 = *(undefined4 *)((int)&DepthPass + iVar9);
  dVar30 = (double)(float)((double)(float)((double)(longlong)uVar23 / (double)(longlong)uVar24) -
                          (double)(longlong)puVar8[0x14]);
  iVar16 = draw::GetEffectTex((double)(longlong)puVar8[0x14],(double)(longlong)uVar24,TEXTURE);
  FUN_004d676c(uVar7,0,iVar18 + iVar16 * 0x24,1,1);
  iVar18 = EffectTexHeaders;
  uVar7 = *(undefined4 *)((int)&DepthPass + iVar9);
  iVar17 = draw::GetEffectTex((uint)uVar5 +
                              ((iVar17 + 1) - ((iVar17 + 1) / (int)(uint)bVar2) * (uint)bVar2));
  FUN_004d676c(uVar7,1,iVar18 + iVar17 * 0x24,1,1);
  iVar17 = EffectTexHeaders;
  pRVar12 = DepthPass;
  if (ocean->depth == 0x80) {
    iVar18 = draw::GetEffectTex(TEXTURE);
    FUN_004d676c(pRVar12,0,iVar17 + iVar18 * 0x24,1,1);
  }
  idol_draw::ResetPassState(*(undefined4 *)((int)&DepthPass + iVar9));
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  dVar25 = 7.0;
  dVar29 = (double)ocean->field3_0xc;
  fVar10 = ocean->scaleY * 7.0;
  fVar11 = ocean->scaleX * 7.0;
  auVar33 = loadVectorLeftIndexed(8,0x17dca0);
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar33 = loadVectorLeftIndexed(0x14,lVar15);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar33 = loadVectorLeftIndexed(0x10,lVar15);
  pcVar21 = ocean->occupied_ocean_cells;
  fVar4 = ocean->y;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar31);
  auVar31 = loadVectorLeftIndexed(4,lVar15);
  auVar32 = loadVectorLeftIndexed(8,lVar15);
  uVar19 = ocean->cellsX;
  auVar35 = loadVectorLeftIndexed(0x10,0x17dca0);
  if (fVar10 - fVar11 < 0.0) {
    fVar10 = fVar11;
  }
  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar31
                      );
  dVar28 = (double)SQRT(fVar10 * fVar10 * 2.0);
  if (0 < (short)ocean->cellsY) {
    auVar35 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x14,0x17dca0);
    uVar7 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x78,lVar1);
    *(undefined4 *)(puVar8 + 0xf) = uVar7;
    uVar7 = storeVectorElementWordIndexed
                      (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x74,lVar1);
    *(undefined4 *)((int)puVar8 + 0x74) = uVar7;
    auVar35 = ZEXT416(0);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    iVar17 = 0;
    auVar31 = vectorPermute(auVar31,auVar32,_DAT_0017dcc0);
    auVar34 = vectorPermute(auVar34,auVar36,_DAT_0017dce0);
    auVar32 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0xe),_DAT_0017dcd0);
    auVar31 = vectorPermute(auVar36,auVar37,_DAT_0017dd00);
    auVar35 = vectorPermute(auVar34,*(undefined1 (*) [16])(puVar8 + 0x12),_DAT_0017dcf0);
    auVar34 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0x10),_DAT_0017dcf0);
    auVar31 = _DAT_0017dd10;
    do {
      dVar27 = (double)fVar4;
      auVar37 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(lVar13,lVar15);
      fVar4 = ocean->x;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,auVar38,
                           auVar36);
      auVar37 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = vectorPermute(auVar36,auVar32,auVar31);
      uVar7 = storeVectorElementWordIndexed
                        (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x70,lVar1);
      *(undefined4 *)(puVar8 + 0xe) = uVar7;
      if (0 < (short)uVar19) {
        iVar18 = 0;
        auVar32 = *(undefined1 (*) [16])(puVar8 + 0xe);
        do {
          dVar26 = (double)fVar4;
          cVar3 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          if ((cVar3 == '\x01') &&
             (iVar16 = fastfunc::FastCheckBsphere(dVar28,dVar29,uVar20 + 800), iVar16 != 0)) {
            SubmitOceanCell(dVar26,dVar27,dVar30,lVar15);
          }
          auVar32 = vectorAddFloatingPoint(auVar32,auVar35);
          uVar19 = ocean->cellsX;
          iVar18 = iVar18 + 7;
          fVar4 = (float)((double)ocean->scaleX * dVar25 + dVar26);
          auVar33 = loadVectorLeftIndexed(0x10,lVar15);
        } while (iVar18 < (short)uVar19);
      }
      auVar32 = vectorAddFloatingPoint(auVar32,auVar34);
      uVar6 = ocean->cellsY;
      iVar17 = iVar17 + 7;
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      fVar4 = (float)((double)ocean->scaleY * dVar25 + dVar27);
      *(undefined1 (*) [16])(puVar8 + 0xe) = auVar32;
    } while (iVar17 < (short)uVar6);
  }
  idol_draw::RsxCmd_WritePass(*(RenderingStep **)((int)&DepthPass + iVar9));
  return dVar30;
}



//==== 0017e31c  ns=water  size=0x4c
// sig: undefined OceanPlane_SetDepth(float scale, OceanPlane * ocean, undefined8 param_3, undefined1 depth)
// callers(6): 0021afc0 mobyupdate_unsorted::UpdateMoby_124; 0022b6c0 mobyupdate_unsorted::UpdateMoby_126; 0022b858 mobyupdate_unsorted::UpdateMoby_1260; 00340588 mobyupdate_unsorted::UpdateMoby_317_GasparOcean; 00392e58 mobyupdate_unsorted::UpdateMoby_460; 004cef80 mobyupdate_unsorted::UpdateMoby_994
// callees(0): 

void water::OceanPlane_SetDepth(float scale,OceanPlane *ocean,undefined8 param_3,byte depth)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  ocean->depth = depth;
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = fVar1 * scale;
    pfVar3[1] = fVar2 * scale;
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0017e368  ns=water  size=0x50
// sig: undefined OceanPlane_SetDefaultDepth(undefined8 scale, OceanPlane * param_2)
// callers(3): 00188888 mobyupdate_unsorted::UpdateMoby_1018; 00342db8 mobyupdate_unsorted::UpdateMoby_327_BataliaOcean; 0049f960 mobyupdate_unsorted::UpdateMoby_879_RilgarOcean
// callees(0): 

void water::OceanPlane_SetDefaultDepth(double scale,OceanPlane *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  param_2->depth = 0x80;
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = (float)((double)fVar1 * scale);
    pfVar3[1] = (float)((double)fVar2 * scale);
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0017e3b8  ns=water  size=0x110
// sig: undefined PushOceanFog(OceanPlane * ocean)
// callers(0): 
// callees(3): 00066598 draw::RebuildSharedWaveTables; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd

void water::PushOceanFog(OceanPlane *ocean)

{
  undefined8 cmd;
  
  OceanFogNearDist = ViewContext.fogNearDist;
  OceanFogFarDist = ViewContext.fogFarDist;
  OceanFogNearIntensity = ViewContext.fogNearIntensity;
  OceanFogFarIntensity = ViewContext.fogFarIntensity;
  OceanFogR = ViewContext.fogR;
  OceanFogG = ViewContext.fogG;
  OceanFogB = ViewContext.fogB;
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = ocean->fogNearDist;
    ViewContext.fogFarDist = ocean->fogFarDist;
    ViewContext.fogNearIntensity = ocean->fogNearIntensity;
    ViewContext.fogFarIntensity = ocean->fogFarIntensity;
    if (Level != Umbris) {
      ViewContext.fogR = (int)ocean->fogR;
      ViewContext.fogG = (int)ocean->fogG;
      ViewContext.fogB = (int)ocean->fogB;
    }
    draw::RebuildSharedWaveTables();
  }
  cmd = idol_draw::PackCmd(0,1,2,1,ocean->depth);
  vuchain::SetGSReg(3,cmd);
  return;
}



//==== 0017e4c8  ns=water  size=0x90
// sig: void PopZoneFog(OceanPlane * ocean)
// callers(1): 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean
// callees(1): 00066598 draw::RebuildSharedWaveTables

void water::PopZoneFog(OceanPlane *ocean)

{
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = OceanFogNearDist;
    ViewContext.fogFarDist = OceanFogFarDist;
    ViewContext.fogNearIntensity = OceanFogNearIntensity;
    ViewContext.fogFarIntensity = OceanFogFarIntensity;
    ViewContext.fogR = OceanFogR;
    ViewContext.fogG = OceanFogG;
    ViewContext.fogB = OceanFogB;
    draw::RebuildSharedWaveTables();
  }
  return;
}



//==== 0017e558  ns=water  size=0x19c
// sig: undefined SubmitZone(OceanPlane * ocean)
// callers(9): 00188858 mobyupdate_helpers::M1018_00188858; 0021af68 mobyupdate_helpers::M1238_0021af68; 0022b668 mobyupdate_helpers::M1259_0022b668; 0022b828 mobyupdate_helpers::M1260_0022b828; 00340190 mobyupdate_helpers::M317_Gaspar_SubmitOcean; 00342d44 mobyupdate_helpers::M327_Batalia_SubmitOcean; 00392e28 mobyupdate_helpers::M460_00392e28; 0049f8a8 mobyupdate_helpers::M879_Rilgar_SubmitOcean; 004cef50 mobyupdate_helpers::M994_004cef50
// callees(4): 00066598 draw::RebuildSharedWaveTables; 00174f80 vuchain::SetGSReg; 0017dd20 water::OceanPass; 00502ea8 idol_draw::PackCmd

undefined8 water::SubmitZone(OceanPlane *ocean)

{
  undefined8 uVar1;
  
  OceanFogNearDist = ViewContext.fogNearDist;
  OceanFogFarDist = ViewContext.fogFarDist;
  OceanFogNearIntensity = ViewContext.fogNearIntensity;
  OceanFogFarIntensity = ViewContext.fogFarIntensity;
  OceanFogR = ViewContext.fogR;
  OceanFogG = ViewContext.fogG;
  OceanFogB = ViewContext.fogB;
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = ocean->fogNearDist;
    ViewContext.fogFarDist = ocean->fogFarDist;
    ViewContext.fogNearIntensity = ocean->fogNearIntensity;
    ViewContext.fogFarIntensity = ocean->fogFarIntensity;
    if (Level != Umbris) {
      ViewContext.fogR = (int)ocean->fogR;
      ViewContext.fogG = (int)ocean->fogG;
      ViewContext.fogB = (int)ocean->fogB;
    }
    draw::RebuildSharedWaveTables();
  }
  uVar1 = idol_draw::PackCmd(0,1,2,1,ocean->depth);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = OceanPass(ocean);
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = OceanFogNearDist;
    ViewContext.fogFarDist = OceanFogFarDist;
    ViewContext.fogNearIntensity = OceanFogNearIntensity;
    ViewContext.fogFarIntensity = OceanFogFarIntensity;
    ViewContext.fogR = OceanFogR;
    ViewContext.fogG = OceanFogG;
    ViewContext.fogB = OceanFogB;
    draw::RebuildSharedWaveTables();
  }
  return uVar1;
}



//==== 0017e700  ns=water  size=0x304
// sig: undefined OceanSpecialPass(undefined8 param_1, OceanPlane * param_2, undefined4 param_3, undefined4 param_4)
// callers(0): 
// callees(8): 00066598 draw::RebuildSharedWaveTables; 00071170 stub::STUB_00071170; 00074be0 draw::DrawOceanStrip; 00174f80 vuchain::SetGSReg; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065412c: 'OceanSpecial'

void water::OceanSpecialPass(undefined8 param_1,OceanPlane *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"OceanSpecial");
  idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"OceanSpecial");
  OceanFogNearDist = ViewContext.fogNearDist;
  OceanFogFarDist = ViewContext.fogFarDist;
  OceanFogNearIntensity = ViewContext.fogNearIntensity;
  OceanFogFarIntensity = ViewContext.fogFarIntensity;
  OceanFogR = ViewContext.fogR;
  OceanFogG = ViewContext.fogG;
  OceanFogB = ViewContext.fogB;
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = param_2->fogNearDist;
    ViewContext.fogFarDist = param_2->fogFarDist;
    ViewContext.fogNearIntensity = param_2->fogNearIntensity;
    ViewContext.fogFarIntensity = param_2->fogFarIntensity;
    ViewContext.fogR = (int)param_2->fogR;
    ViewContext.fogG = (int)param_2->fogG;
    ViewContext.fogB = (int)param_2->fogB;
    draw::RebuildSharedWaveTables();
  }
  uVar3 = idol_draw::PackCmd(0,1,2,1,param_2->depth);
  vuchain::SetGSReg(3,uVar3);
  stub::STUB_00071170();
  iVar6 = 0;
  lVar7 = 0x80;
  do {
    *(undefined4 *)(DAT_00902ec8 + iVar6) = 0xff757c8e;
    iVar4 = DAT_00902ec8 + iVar6;
    iVar6 = iVar6 + 8;
    *(undefined4 *)(iVar4 + 4) = 0xff757c8e;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar6 = 0;
  if (0 < param_4) {
    uVar3 = 0x4070000000000000;
    dVar8 = 0.5;
    do {
      iVar4 = fastfunc::FastCheckBsphereInView(uVar3,param_3);
      if (iVar4 != -1) {
        iVar4 = *(int *)(param_3 + 0x1c);
        lVar5 = (longlong)iVar4;
        pfVar1 = *(float **)(param_3 + 0x14);
        lVar7 = lVar5;
        pfVar2 = (float *)(DAT_00902ec8 + 0x1000);
        while (0 < iVar4) {
          lVar7 = lVar7 + -1;
          *pfVar2 = (float)((double)*pfVar1 * dVar8);
          pfVar2[1] = (float)((double)pfVar1[1] * dVar8);
          pfVar1 = pfVar1 + 2;
          pfVar2 = pfVar2 + 2;
          iVar4 = (int)lVar7;
        }
        draw::DrawOceanStrip
                  (param_1,lVar5,*(undefined4 *)(param_3 + 0x10),DAT_00902ec8,DAT_00902ec8 + 0x1000)
        ;
      }
      iVar6 = iVar6 + 1;
      param_3 = param_3 + 0x20;
    } while (iVar6 < param_4);
  }
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = OceanFogNearDist;
    ViewContext.fogFarDist = OceanFogFarDist;
    ViewContext.fogNearIntensity = OceanFogNearIntensity;
    ViewContext.fogFarIntensity = OceanFogFarIntensity;
    ViewContext.fogR = OceanFogR;
    ViewContext.fogG = OceanFogG;
    ViewContext.fogB = OceanFogB;
    draw::RebuildSharedWaveTables();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}



//==== 0017ea04  ns=water  size=0x48
// sig: undefined ScaleWaveTable(float scale)
// callers(1): 0048eb78 mobyupdate_unsorted::UpdateMoby_854_AridiaOcean
// callees(0): 

void water::ScaleWaveTable(float scale)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = fVar1 * scale;
    pfVar3[1] = fVar2 * scale;
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 0017ea4c  ns=water  size=0x124
// sig: undefined SetFogVars(float neardist, float fardist, float nearintensity, float farintensity)
// callers(1): 0048e9d0 mobyupdate_helpers::M854_Aridia_SubmitOcean
// callees(4): 00066598 draw::RebuildSharedWaveTables; 00174f80 vuchain::SetGSReg; 00500458 stub::STUB_00500458; 00502ea8 idol_draw::PackCmd

void water::SetFogVars(float neardist,float fardist,float nearintensity,float farintensity)

{
  undefined8 cmd;
  uint in_r7;
  uint in_r8;
  uint in_r9;
  
  OceanFogNearDist = ViewContext.fogNearDist;
  OceanFogFarDist = ViewContext.fogFarDist;
  OceanFogNearIntensity = ViewContext.fogNearIntensity;
  OceanFogFarIntensity = ViewContext.fogFarIntensity;
  OceanFogR = ViewContext.fogR;
  OceanFogG = ViewContext.fogG;
  OceanFogB = ViewContext.fogB;
  if (LevelFogMode != 1) {
    if (Level != Umbris) {
      ViewContext.fogR = in_r7 & 0xff;
      ViewContext.fogG = in_r8 & 0xff;
      ViewContext.fogB = in_r9 & 0xff;
    }
    ViewContext.fogNearDist = neardist;
    ViewContext.fogFarDist = fardist;
    ViewContext.fogNearIntensity = nearintensity;
    ViewContext.fogFarIntensity = farintensity;
    draw::RebuildSharedWaveTables();
  }
  cmd = idol_draw::PackCmd(0,1,2,1,0x80);
  vuchain::SetGSReg(3,cmd);
  stub::STUB_00500458(&DAT_0073b330,DAT_00902ec8 + 0x2800,0xf8);
  return;
}



//==== 0017eb70  ns=water  size=0x90
// sig: undefined RestoreFogVars(void)
// callers(1): 0048e9d0 mobyupdate_helpers::M854_Aridia_SubmitOcean
// callees(1): 00066598 draw::RebuildSharedWaveTables

void water::RestoreFogVars(void)

{
  if (LevelFogMode != 1) {
    ViewContext.fogNearDist = OceanFogNearDist;
    ViewContext.fogFarDist = OceanFogFarDist;
    ViewContext.fogNearIntensity = OceanFogNearIntensity;
    ViewContext.fogFarIntensity = OceanFogFarIntensity;
    ViewContext.fogR = OceanFogR;
    ViewContext.fogG = OceanFogG;
    ViewContext.fogB = OceanFogB;
    draw::RebuildSharedWaveTables();
  }
  return;
}



//==== 0017ec00  ns=water  size=0x38
// sig: undefined OceanPass_Thunk(undefined4 ocean)
// callers(1): 0048e9d0 mobyupdate_helpers::M854_Aridia_SubmitOcean
// callees(2): 000ea1e8 stub::STUB_000ea1e8; 0017dd20 water::OceanPass

void water::OceanPass_Thunk(OceanPlane *ocean)

{
  stub::STUB_000ea1e8();
  OceanPass(ocean);
  return;
}



//==== 0017ec40  ns=water  size=0x1d4
// sig: undefined IcePass(void)
// callers(2): 00272c18 mobyupdate_helpers::M1418_00272c18; 00331468 mobyupdate_helpers::M293_00331468
// callees(7): 00071170 stub::STUB_00071170; 000731c8 draw::DrawTexturedStrips; 000ea1f8 mesh::NormalsToEnvUV; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 0050eaf8 idol_draw::RsxCmd_DebugStr_Marker; 0050ec5c idol_draw::RsxCmd_WritePass
// strings: 0065413c: 'Ice'

void water::IcePass(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  idol_draw::RsxCmd_DebugStr_Marker(DL_Pass,"Ice");
  idol_draw::RsxCmd_DebugStr_Marker(DL_DepthPass,"Ice");
  stub::STUB_00071170();
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x80);
  idol_draw::PackCmd(0,1,2,1,0x40);
  lVar5 = 0x2d;
  puVar2 = DAT_00902ec8;
  do {
    *puVar2 = 0x80808080;
    puVar2[1] = 0x80808080;
    puVar2[2] = 0x80808080;
    puVar2[3] = 0x80808080;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
  } while (lVar5 != 0);
  iVar4 = 0;
  if (0 < param_2) {
    uVar6 = 0x4070000000000000;
    do {
      iVar3 = fastfunc::FastCheckBsphereInView(uVar6,param_1);
      if (iVar3 != -1) {
        mesh::NormalsToEnvUV
                  (*(int *)(param_1 + 0x1c),*(void **)(param_1 + 0x10),*(Vec3 **)(param_1 + 0x18),
                   (Vec2 *)(DAT_00902ec8 + 0x400));
        draw::DrawTexturedStrips
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),DAT_00902ec8,
                   *(undefined4 *)(param_1 + 0x14),DAT_00902ec8 + 0x400,param_3,param_4,uVar1);
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x20;
    } while (iVar4 < param_2);
  }
  idol_draw::RsxCmd_WritePass(DL_Pass);
  idol_draw::RsxCmd_WritePass(DL_DepthPass);
  return;
}



//==== 0017ee14  ns=water  size=0x32c
// sig: undefined Water_StaticInitGsPackets(void)
// callers(0): 
// callees(9): 00502e98 FUN_00502e98; 00502ea0 FUN_00502ea0; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0; 005030dc FUN_005030dc; 005030ec FUN_005030ec

void water::Water_StaticInitGsPackets(void)

{
  DAT_0073b50c = 0x10000;
  DAT_0073a980 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0073a990 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0073a9a0 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0073a9b0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073a9c0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073a9d0 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073a9e0 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073adc8 = FUN_00502e98(4,4,0);
  DAT_0073adf4 = FUN_005030dc(0);
  DAT_0073ae08 = FUN_00502e98(1,3,0);
  DAT_0073ae20 = FUN_005030ec(0);
  DAT_0073ae60 = FUN_005030ec(0);
  DAT_0073b430 = FUN_00502ea0(1,1,0,0,0,8);
  DAT_0073b440 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0073b450 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0073b460 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073b470 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073b480 = idol_draw::PackCmd(0,1,2,1,0x80);
  DAT_0073b490 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073b4a0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073b4b0 = idol_draw::PackCmd(0,1,2,1,0x40);
  return;
}



//==== 0017f148  ns=water  size=0x7c
// sig: undefined WaterDrift_Set(void)
// callers(0): 
// callees(0): 

void water::WaterDrift_Set
               (double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined2 param_6)

{
  DAT_00e5aeec = (short)param_3;
  if (param_3 == 0) {
    DAT_00e5aee0 = 0.0;
    DAT_00e5aef0 = 0.0;
    DAT_00e5aefc = 0;
  }
  else {
    DAT_00e5aee4 = (float)param_1;
    DAT_00e5aee0 = (float)param_1;
    DAT_00e5aeee = 0;
    if ((double)(mobyutil::g_FrameTime * 9.6) - ABS(param_2) < 0.0) {
      param_2 = (double)(float)((double)(mobyutil::g_FrameTime * 9.6) / ABS(param_2));
    }
    DAT_00e5aef0 = (float)param_2;
    DAT_00e5aef4 = (float)param_2;
    DAT_00e5aefc = param_6;
  }
  return;
}



//==== 0017f210  ns=water  size=0x5b0
// sig: undefined WaterDrift_Update(void)
// callers(1): 00166fb0 update::UpdateGameplay
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void water::WaterDrift_Update(void)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (1 < DAT_00e5aeec) {
    if (DAT_00e5aeec < 3) {
      if (DAT_00e5aeee < 1) {
        if ((-1 < DAT_00e5aeee) && (iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe), iVar2 != 0)) {
          dVar4 = (double)fastfunc::FastIntToDouble(DAT_00e5aefc);
          dVar6 = 0.5;
          dVar7 = 1.5;
          dVar5 = (double)mobyutil::MB_randRangeFloat(0.5,1.5);
          dVar8 = (double)(float)(dVar4 * dVar5);
          dVar5 = (double)DAT_00e5aee0;
          dVar4 = (double)mobyutil::MB_randRangeFloat(-1.0471976,1.0471976);
          uVar3 = fastfunc::FastWrapRot((float)dVar5,(float)dVar4);
          dVar4 = (double)mobyutil::MB_randRangeFloat
                                    ((float)((double)DAT_00e5aef0 * dVar6),
                                     (float)((double)DAT_00e5aef0 * dVar7));
          dVar5 = (double)fastfunc::FastDiffRots(uVar3,(double)DAT_00e5aee4);
          DAT_00e5aee8 = (float)(dVar5 / dVar8);
          DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar8);
          DAT_00e5aefe = fastfunc::FastDoubleToInt(dVar8);
          DAT_00e5aeee = 1;
        }
      }
      else if (DAT_00e5aeee < 2) {
        iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 == 0) {
          dVar4 = (double)fastfunc::FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
          DAT_00e5aee4 = (float)dVar4;
          DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
          if (mobyutil::g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
            fVar1 = 1.0;
            if (DAT_00e5aef4 - 0.0 < 0.0) {
              fVar1 = -1.0;
            }
            DAT_00e5aef4 = mobyutil::g_FrameTime * 9.6 * fVar1;
          }
        }
        else {
          dVar4 = (double)fastfunc::FastIntToDouble(DAT_00e5aefc);
          dVar5 = (double)mobyutil::MB_randRangeFloat(2.0,3.0);
          DAT_00e5aefe = fastfunc::FastDoubleToInt((double)(float)(dVar4 * dVar5));
          DAT_00e5aeee = 0;
        }
      }
    }
    else if (DAT_00e5aeec < 4) {
      if (DAT_00e5aeee < 2) {
        if (-1 < DAT_00e5aeee) {
          if (DAT_00e5aeee < 1) {
            iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe);
            if (iVar2 != 0) {
              dVar4 = (double)mobyutil::MB_randRangeFloat(45.0,60.0);
              dVar5 = (double)DAT_00e5aee0;
              dVar7 = (double)(float)(dVar4 * (double)animationSpeed);
              dVar4 = (double)mobyutil::MB_randRangeFloat(-1.5707964,1.5707964);
              uVar3 = fastfunc::FastWrapRot((float)dVar5,(float)dVar4);
              dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00e5aef0 * 1.5,DAT_00e5aef0 * 2.0);
              dVar5 = (double)fastfunc::FastDiffRots(uVar3,(double)DAT_00e5aee4);
              DAT_00e5aee8 = (float)(dVar5 / dVar7);
              DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar7);
              DAT_00e5aefe = fastfunc::FastDoubleToInt(dVar7);
              DAT_00e5aeee = 1;
            }
          }
          else {
            iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe);
            if (iVar2 == 0) {
              dVar4 = (double)fastfunc::FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
              DAT_00e5aee4 = (float)dVar4;
              DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
              if (mobyutil::g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
                fVar1 = 1.0;
                if (DAT_00e5aef4 - 0.0 < 0.0) {
                  fVar1 = -1.0;
                }
                DAT_00e5aef4 = mobyutil::g_FrameTime * 9.6 * fVar1;
              }
            }
            else {
              dVar4 = (double)fastfunc::FastIntToDouble(DAT_00e5aefc);
              dVar5 = (double)mobyutil::MB_randRangeFloat(1.0,1.5);
              DAT_00e5aefe = fastfunc::FastDoubleToInt((double)(float)(dVar4 * dVar5));
              DAT_00e5aeee = 2;
            }
          }
        }
      }
      else if (DAT_00e5aeee < 3) {
        iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 != 0) {
          dVar4 = (double)mobyutil::MB_randRangeFloat(45.0,60.0);
          dVar5 = (double)DAT_00e5aee0;
          dVar7 = (double)(float)(dVar4 * (double)animationSpeed);
          dVar4 = (double)mobyutil::MB_randRangeFloat(-0.785398,0.785398);
          uVar3 = fastfunc::FastWrapRot((float)dVar5,(float)dVar4);
          dVar4 = (double)mobyutil::MB_randRangeFloat(DAT_00e5aef0 * 0.8,DAT_00e5aef0 * 1.2);
          dVar5 = (double)fastfunc::FastDiffRots(uVar3,(double)DAT_00e5aee4);
          DAT_00e5aee8 = (float)(dVar5 / dVar7);
          DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar7);
          DAT_00e5aefe = fastfunc::FastDoubleToInt(dVar7);
          DAT_00e5aeee = 3;
        }
      }
      else if (DAT_00e5aeee < 4) {
        iVar2 = fastfunc::FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 == 0) {
          dVar4 = (double)fastfunc::FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
          DAT_00e5aee4 = (float)dVar4;
          DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
          if (mobyutil::g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
            fVar1 = 1.0;
            if (DAT_00e5aef4 - 0.0 < 0.0) {
              fVar1 = -1.0;
            }
            DAT_00e5aef4 = mobyutil::g_FrameTime * 9.6 * fVar1;
          }
        }
        else {
          dVar4 = (double)fastfunc::FastIntToDouble(DAT_00e5aefc);
          dVar5 = (double)mobyutil::MB_randRangeFloat(3.0,5.0);
          DAT_00e5aefe = fastfunc::FastDoubleToInt((double)(float)(dVar4 * dVar5));
          DAT_00e5aeee = 0;
        }
      }
    }
  }
  return;
}



//==== 0017f7d0  ns=Global  size=0x228
// sig: undefined UpdateSound_0(void)
// callers(0): 
// callees(4): 000fc620 mobyutil::MB_randInt; 0015cdb0 sound::sound_Kill; 0015d434 sound::sound_AmbientPlay; 004fff60 fastfunc::FastDecTimerS32

void UpdateSound_0(void *param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  piVar2 = *(int **)((int)param_1 + 8);
  if (-1 < *piVar2) {
    fVar3 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
    fVar4 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
    fVar5 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if (*(float *)((int)param_1 + 0xc) <= fVar3) {
      if (*(float *)((int)param_1 + 0xc) + 1.0 < fVar3) {
        iVar6 = piVar2[4];
        if (((iVar6 != -1) && (sound::g_SoundChannels[iVar6].pSoundInstance == param_1)) &&
           (sound::g_SoundChannels[iVar6].state != '\0')) {
          sound::sound_Kill(iVar6);
        }
        piVar2[4] = -1;
      }
    }
    else {
      bVar1 = *(byte *)(sound::g_pSoundDefs + *piVar2 * 0x20 + 0x18);
      if (((sound::g_SoundChannels[piVar2[4]].pSoundInstance != param_1) ||
          (sound::g_SoundChannels[piVar2[4]].state == '\0')) &&
         (iVar6 = fastfunc::FastDecTimerS32(piVar2 + 3), iVar6 != 0)) {
        iVar6 = sound::sound_AmbientPlay
                          (*piVar2,((uint)((LZCOUNT(-(uint)bVar1) << 0x3a) >> 0x3f) & 0xfffffffc) +
                                   4,param_1,0x400);
        piVar2[4] = iVar6;
        if (0 < piVar2[2]) {
          iVar6 = mobyutil::MB_randInt(piVar2[2] - piVar2[1]);
          piVar2[3] = (int)((float)(longlong)
                                   (animationSpeed * ((float)(longlong)(piVar2[1] + iVar6) + 0.5)) *
                           60.0);
        }
      }
    }
  }
  return;
}



//==== 0017fa08  ns=Global  size=0x4c4
// sig: undefined UpdateSound_1(void)
// callers(0): 
// callees(6): 000fc620 mobyutil::MB_randInt; 0015b7d8 sound::sound_GetFade; 0015cdb0 sound::sound_Kill; 0015d434 sound::sound_AmbientPlay; 0015d710 sound::sound_SetVol; 004fff60 fastfunc::FastDecTimerS32

void UpdateSound_1(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int handle;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar16 = (double)*(float *)((int)param_1 + 0xc);
  dVar17 = (double)(GameCamera.posY - *(float *)((int)param_1 + 0x44));
  dVar18 = (double)(GameCamera.posX - *(float *)((int)param_1 + 0x40));
  dVar23 = (double)(GameCamera.posZ - *(float *)((int)param_1 + 0x48));
  dVar21 = (double)(float)((double)*(float *)((int)param_1 + 0x74) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 100) *
                                                        dVar17)));
  fVar1 = (float)((double)*(float *)((int)param_1 + 0x74) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 100) * dVar16)));
  dVar22 = (double)(float)((double)*(float *)((int)param_1 + 0x70) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x60) *
                                                        dVar17)));
  fVar2 = (float)((double)*(float *)((int)param_1 + 0x70) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x60) * dVar16)));
  dVar20 = (double)(float)((double)*(float *)((int)param_1 + 0x78) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x68) *
                                                        dVar17)));
  fVar3 = (float)((double)*(float *)((int)param_1 + 0x78) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x68) * dVar16)));
  fVar5 = SQRT((float)(dVar20 * dVar20 +
                      (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21))));
  dVar19 = (double)*(float *)((int)param_1 + 0x7c);
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  piVar13 = *(int **)((int)param_1 + 8);
  dVar16 = (double)(float)((double)*(float *)((int)param_1 + 0x5c) * dVar18 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x6c) * dVar17));
  if (fVar1 <= fVar5) {
    iVar14 = piVar13[4];
    if (((iVar14 != -1) && (sound::g_SoundChannels[iVar14].pSoundInstance == param_1)) &&
       (sound::g_SoundChannels[iVar14].state != '\0')) {
      sound::sound_Kill(iVar14);
    }
    piVar13[4] = -1;
  }
  else {
    dVar17 = 1.0;
    if (((1.0 < ABS(dVar22)) || (1.0 < ABS(dVar21))) || (1.0 < ABS(dVar20))) {
      dVar18 = dVar17;
      if ((dVar22 <= 1.0) && (dVar18 = dVar22, dVar22 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar22 = dVar18;
      dVar18 = dVar17;
      if ((dVar21 <= 1.0) && (dVar18 = dVar21, dVar21 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar21 = dVar18;
      if ((dVar20 <= 1.0) && (dVar17 = dVar20, dVar20 < -1.0)) {
        dVar17 = -1.0;
      }
      iVar14 = sound::sound_GetFade
                         (fVar5,SQRT((float)(dVar17 * dVar17 +
                                            (double)(float)(dVar22 * dVar22 +
                                                           (double)(float)(dVar21 * dVar21)))),fVar1
                          ,(void *)(sound::g_pSoundDefs + *piVar13 * 0x20));
      iVar15 = *piVar13;
    }
    else {
      iVar15 = *piVar13;
      iVar14 = *(int *)(sound::g_pSoundDefs + iVar15 * 0x20 + 0xc);
      dVar17 = dVar20;
    }
    handle = piVar13[4];
    bVar4 = *(byte *)(sound::g_pSoundDefs + iVar15 * 0x20 + 0x18);
    if ((sound::g_SoundChannels[handle].pSoundInstance != param_1) ||
       (sound::g_SoundChannels[handle].state == '\0')) {
      iVar15 = fastfunc::FastDecTimerS32(piVar13 + 3);
      if (iVar15 == 0) {
        piVar13[4] = -1;
        return;
      }
      handle = sound::sound_AmbientPlay
                         (*piVar13,((uint)((LZCOUNT(-(uint)bVar4) << 0x3a) >> 0x3f) & 0xfffffffc) +
                                   0x14,param_1,iVar14);
      piVar13[4] = handle;
      if (0 < piVar13[2]) {
        iVar15 = mobyutil::MB_randInt(piVar13[2] - piVar13[1]);
        handle = piVar13[4];
        piVar13[3] = (int)((float)(longlong)
                                  (animationSpeed * ((float)(longlong)(piVar13[1] + iVar15) + 0.5))
                          * 60.0);
      }
    }
    if (handle != -1) {
      sound::sound_SetVol(handle,iVar14);
      fVar1 = *(float *)((int)param_1 + 0x24);
      fVar2 = *(float *)((int)param_1 + 0x28);
      fVar3 = *(float *)((int)param_1 + 0x2c);
      fVar5 = *(float *)((int)param_1 + 0x14);
      fVar6 = *(float *)((int)param_1 + 0x18);
      fVar7 = *(float *)((int)param_1 + 0x1c);
      fVar8 = *(float *)((int)param_1 + 0x34);
      fVar9 = *(float *)((int)param_1 + 0x38);
      fVar10 = *(float *)((int)param_1 + 0x3c);
      fVar11 = *(float *)((int)param_1 + 0x44);
      fVar12 = *(float *)((int)param_1 + 0x48);
      iVar14 = piVar13[4];
      sound::g_SoundChannels[iVar14].pos[0] =
           (float)((double)*(float *)((int)param_1 + 0x30) * dVar17 +
                  (double)(float)((double)*(float *)((int)param_1 + 0x10) * dVar22 +
                                 (double)(float)((double)*(float *)((int)param_1 + 0x20) * dVar21)))
           + *(float *)((int)param_1 + 0x40);
      sound::g_SoundChannels[iVar14].pos[1] =
           (float)((double)fVar8 * dVar17 +
                  (double)(float)((double)fVar5 * dVar22 + (double)(float)((double)fVar1 * dVar21)))
           + fVar11;
      sound::g_SoundChannels[iVar14].pos[2] =
           (float)((double)fVar9 * dVar17 +
                  (double)(float)((double)fVar6 * dVar22 + (double)(float)((double)fVar2 * dVar21)))
           + fVar12;
      sound::g_SoundChannels[iVar14].pos[3] =
           (float)((double)fVar10 * dVar17 +
                  (double)(float)((double)fVar7 * dVar22 + (double)(float)((double)fVar3 * dVar21)))
           + (float)(dVar19 * dVar23 + dVar16);
    }
  }
  return;
}



//==== 0017fee0  ns=Global  size=0x31c
// sig: undefined UpdateSound_2(void)
// callers(0): 
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0015d434 sound::sound_AmbientPlay; 004fff60 fastfunc::FastDecTimerS32

void UpdateSound_2(void *param_1)

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
  int *piVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  fVar1 = *(float *)((int)param_1 + 0xc);
  fVar2 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
  fVar3 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
  fVar4 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
  dVar18 = 1.0;
  piVar13 = *(int **)((int)param_1 + 8);
  if ((ABS(*(float *)((int)param_1 + 0x70) * fVar4 +
           *(float *)((int)param_1 + 0x50) * fVar3 + *(float *)((int)param_1 + 0x60) * fVar2) <=
       ABS(*(float *)((int)param_1 + 0x70) * fVar1 +
           *(float *)((int)param_1 + 0x50) * fVar1 + *(float *)((int)param_1 + 0x60) * fVar1) + 1.0)
     && (ABS(*(float *)((int)param_1 + 0x74) * fVar4 +
             *(float *)((int)param_1 + 0x54) * fVar3 + *(float *)((int)param_1 + 100) * fVar2) <=
         ABS(*(float *)((int)param_1 + 0x74) * fVar1 +
             *(float *)((int)param_1 + 0x54) * fVar1 + *(float *)((int)param_1 + 100) * fVar1) + 1.0
        )) {
    if (ABS(*(float *)((int)param_1 + 0x78) * fVar4 +
            *(float *)((int)param_1 + 0x58) * fVar3 + *(float *)((int)param_1 + 0x68) * fVar2) <=
        ABS(*(float *)((int)param_1 + 0x78) * fVar1 +
            *(float *)((int)param_1 + 0x58) * fVar1 + *(float *)((int)param_1 + 0x68) * fVar1) + 1.0
       ) {
      if ((sound::g_SoundChannels[piVar13[4]].pSoundInstance != param_1) ||
         (sound::g_SoundChannels[piVar13[4]].state == '\0')) {
        iVar14 = fastfunc::FastDecTimerS32(piVar13 + 3);
        if (iVar14 == 0) {
          piVar13[4] = -1;
        }
        else {
          iVar14 = sound::sound_AmbientPlay(*piVar13,0,param_1,0x400);
          piVar13[4] = iVar14;
          if (iVar14 != -1) {
            dVar17 = -1.0;
            dVar15 = (double)mobyutil::MB_randRangeFloat(-1.0,(float)dVar18);
            dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
            dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
            fVar1 = *(float *)((int)param_1 + 0x20);
            fVar2 = *(float *)((int)param_1 + 0x24);
            fVar3 = *(float *)((int)param_1 + 0x28);
            fVar4 = *(float *)((int)param_1 + 0x10);
            fVar5 = *(float *)((int)param_1 + 0x14);
            fVar6 = *(float *)((int)param_1 + 0x18);
            fVar7 = *(float *)((int)param_1 + 0x30);
            fVar8 = *(float *)((int)param_1 + 0x34);
            fVar9 = *(float *)((int)param_1 + 0x38);
            fVar10 = *(float *)((int)param_1 + 0x40);
            fVar11 = *(float *)((int)param_1 + 0x44);
            fVar12 = *(float *)((int)param_1 + 0x48);
            iVar14 = piVar13[4];
            sound::g_SoundChannels[iVar14].pos[3] =
                 (float)((double)(float)((double)*(float *)((int)param_1 + 0x3c) * dVar18 +
                                        (double)(float)((double)*(float *)((int)param_1 + 0x1c) *
                                                        dVar15 + (double)(float)((double)*(float *)(
                                                  (int)param_1 + 0x2c) * dVar16))) +
                        (double)*(float *)((int)param_1 + 0x3c));
            sound::g_SoundChannels[iVar14].pos[0] =
                 (float)((double)fVar7 * dVar18 +
                        (double)(float)((double)fVar4 * dVar15 +
                                       (double)(float)((double)fVar1 * dVar16))) + fVar10;
            sound::g_SoundChannels[iVar14].pos[1] =
                 (float)((double)fVar8 * dVar18 +
                        (double)(float)((double)fVar5 * dVar15 +
                                       (double)(float)((double)fVar2 * dVar16))) + fVar11;
            sound::g_SoundChannels[iVar14].pos[2] =
                 (float)((double)fVar9 * dVar18 +
                        (double)(float)((double)fVar6 * dVar15 +
                                       (double)(float)((double)fVar3 * dVar16))) + fVar12;
          }
          if (0 < piVar13[2]) {
            iVar14 = mobyutil::MB_randInt(piVar13[2] - piVar13[1]);
            piVar13[3] = (int)((float)(longlong)
                                      (animationSpeed *
                                      ((float)(longlong)(piVar13[1] + iVar14) + 0.5)) * 60.0);
          }
        }
      }
    }
  }
  return;
}



