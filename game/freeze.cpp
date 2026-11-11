// game/freeze.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x78140-0x7a338
#include <stdio.h>
#include <string.h>
#include "game/freeze.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/path.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "sdk/mUnk4.h"

// 0x0078140 (0x14 bytes)
void SECTION_HEADER_FREEZE(void)

{
  DAT_0071f30c = 0x10000;
  return;
}


// 0x0078158 (0x14 bytes)
gameMode_t GetFreezePrevGameMode(void)

{
  return g_freezePrevGameMode;
}


// 0x0078178 (0x334 bytes)
// strings: 00078258: '8`OnH' (raw) | 000782c4: '8`R)H' (raw) | 000782a4: '8`RJH' (raw) | 00078300: '8`N+H' (raw)


void DisplayPrompt(int dialog,int arg,int option)

{
  gameMode_t gVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  gVar1 = g_gameMode;
  g_freezeOption = option;
  if (g_gameMode != GAME_MODE_PAUSE) {
    FUN_0060bc8c(0x1d);
    music_Pause(0);
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
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar3 = vectorMultiplyAddFloatingPoint
                             (auVar5,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar3);
          auVar2 = ZEXT416(0xffffffff);
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          auVar4 = vectorShiftLeftIntegerWord(auVar2,auVar2);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
          g_freezeTimer = storeVectorElementWordIndexed(auVar2,4,0x963670);
          g_freezeOpenAnim2 = storeVectorElementWordIndexed(auVar2,0x24,0x963670);
          auVar2 = loadVectorLeftIndexed(4,0x7816c);
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar2 = vectorMultiplyAddFloatingPoint
                             (auVar5,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar4);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          g_freezeDelay =
               storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x2c,0x963670);
          DAT_0071fad4 = 3;
          g_freezeOpenAnim = -1;
          g_gameMode = GAME_MODE_FREEZE;
          return;
        }
        DAT_00963678 = help_msg_string_by_index(STR_CONTINUE_2);
        g_freezeTimer = 0;
        DAT_0096367c = 0;
        return;
      }
LAB_000782c4:
      DAT_00963678 = help_msg_string_by_index(STR_QUIT);
      DAT_0096367c = help_msg_string_by_index(STR_EXIT);
      DAT_00963680 = help_msg_string_by_index(STR_CONTINUE_2);
      g_freezeTimer = 0;
      return;
    }
    if (-1 < dialog) {
      DAT_00963678 = help_msg_string_by_index(STR_QUIT_RACE);
      DAT_0096367c = help_msg_string_by_index(STR_QUIT_2);
      DAT_00963680 = help_msg_string_by_index(STR_CONTINUE);
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
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar2 = vectorMultiplyAddFloatingPoint
                             (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,
                              auVar3);
          auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
          auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
          g_freezeTimer =
               storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,4,0x963670);
          g_freezeState = 0;
          g_freezeDelay = 0;
          g_gameMode = GAME_MODE_FREEZE;
          return;
        }
        Help_AddToLog(0x4e2b);
        auVar2 = ZEXT416(0xffffffff);
        auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
        auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
        auVar2 = loadVectorLeftIndexed(in_LR,0x7816c);
        auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar2 = vectorMultiplyAddFloatingPoint
                           (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3)
        ;
        auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
        auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
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
      auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar2 = vectorMultiplyAddFloatingPoint
                         (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
      auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
      auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
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


// 0x00784e8 (0x1620 bytes)
// strings: 00078c24: '8`RNH' (raw) | 00078c4c: '8`RKH' (raw) | 00078d4c: '8`RJH' (raw) | 00652018: '%s %s' | 00652028: '%d:%02d:%02d'


void DrawDialogText(void)

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
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<24> local_300;
  GPiece<24> local_2e8;
  GPiece<24> local_2d0;
  char acStack_2b8 [64];
  byte local_278 [2];
  char local_276 [510];
  longlong local_78;
  
  DrawScreenOverlay(0,0,0,0x30);
  if (g_freezeDelay != 0) {
    return;
  }
  STUB_0006d704(0);
  if (g_freezeDialogType != 9) {
    if (g_freezeDialogType == 8) {
      if (0 < g_freezeOpenAnim) {
        uVar8 = help_msg_string_by_index
                          ((int)(ZERO_MASK(g_freezeOption)) +
                           STR_SAVE_FAILED_PLEASE_CHECK_0x4FBD);
        SVar20 = (StringId)(ZERO_MASK(g_freezeTimer)) & STR_CONTINUE_2;
        FontPrintMediumOpt(local_2e8,0,uVar8,0xffffffffffffffff);
        sVar1 = (short)(g_ScreenHeight + -0x28 >> 1);
        sVar18 = sVar1 + 0x28;
        dVar23 = 30.5;
        dVar22 = 1.0;
        dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        color = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        FontPrintMediumOpt(local_2e8,color,uVar8,0xffffffffffffffff);
        local_78 = (longlong)g_freezeOpenAnim2;
        uVar8 = FastLerpColor
                          ((double)(float)(dVar22 - (double)(float)((double)local_78 /
                                                                   (double)(longlong)
                                                                           ((double)animationSpeed *
                                                                           dVar23))),0x20ffff,
                           0xffffffff8020ffff);
        if (SVar20 != STR_TO_USE_YOUR_BOMB_0x0000) {
          color = help_msg_string_by_index(SVar20);
          FontPrintMediumCenter(0x100,(longlong)sVar18 + -0x14,uVar8,color,0xffffffffffffffff)
          ;
        }
      }
    }
    else if (g_freezeDialogType == 7) {
      if (0 < g_freezeOpenAnim) {
        uVar8 = help_msg_string_by_index(STR_MEMORY_CARD_PS2_IN_0x4FA6);
        pbVar19 = local_278;
        strcpy(pbVar19,uVar8,0x400);
        iVar12 = g_freezeTimer;
        for (; 1 < *pbVar19; pbVar19 = pbVar19 + 1) {
        }
        for (; *pbVar19 == 1; pbVar19 = pbVar19 + 1) {
          *pbVar19 = 0;
        }
        SVar20 = (StringId)(ZERO_MASK(iVar12)) & STR_CONTINUE_2;
        FontPrintMediumOpt(local_300,0,pbVar19,0xffffffffffffffff);
        sVar1 = (short)(g_ScreenHeight + -0x28 >> 1);
        sVar18 = sVar1 + 0x28;
        dVar23 = 30.5;
        dVar22 = 1.0;
        dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        uVar8 = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        FontPrintMediumOpt(local_300,uVar8,pbVar19,0xffffffffffffffff);
        local_78 = (longlong)g_freezeOpenAnim2;
        uVar8 = FastLerpColor
                          ((double)(float)(dVar22 - (double)(float)((double)local_78 /
                                                                   (double)(longlong)
                                                                           ((double)animationSpeed *
                                                                           dVar23))),0x20ffff,
                           0xffffffff8020ffff);
        if (SVar20 != STR_TO_USE_YOUR_BOMB_0x0000) {
          color = help_msg_string_by_index(SVar20);
          FontPrintMediumCenter(0x100,(longlong)sVar18 + -0x14,uVar8,color,0xffffffffffffffff)
          ;
        }
      }
    }
    else if (g_freezeDialogType == 6) {
      uVar24 = 0x3ff0000000000000;
      dVar21 = (double)(1.0 - (float)(longlong)g_freezeTimer /
                              (float)(longlong)(animationSpeed * 30.5));
      local_78 = (longlong)(int)(dVar21 * 80.0);
      DrawRoundedRect(100,300,0x60,0x1a0,(int)(dVar21 * 80.0));
      uVar8 = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
      color = FastLerpColor(dVar21,0x20ffff,0xffffffff8020ffff);
      if (g_freezeState < 2) {
        if (g_freezeState < 0) goto LAB_00079abc;
        if (g_JapaneseMode == false) {
          uVar7 = help_msg_string_by_index(STR_YES_2);
          FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help_msg_string_by_index(STR_YES_3);
          FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        uVar7 = help_msg_string_by_index(STR_NO);
        FontPrintMediumCenter(0x135,0x118,color,uVar7,0xffffffffffffffff);
        SVar20 = STR_THE_SCREEN_WILL_NOW_0x522A;
      }
      else if (g_freezeState < 3) {
        if (g_JapaneseMode == false) {
          uVar7 = help_msg_string_by_index(STR_YES_2);
          FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help_msg_string_by_index(STR_YES_3);
          FontPrintMediumCenter(0xca,0x118,color,uVar7,0xffffffffffffffff);
        }
        uVar7 = help_msg_string_by_index(STR_NO);
        FontPrintMediumCenter(0x135,0x118,color,uVar7,0xffffffffffffffff);
        SVar20 = STR_THE_DISPLAY_IS_NOW_0x522B;
      }
      else {
        if (3 < g_freezeState) goto LAB_00079abc;
        if (g_JapaneseMode == false) {
          uVar7 = help_msg_string_by_index(STR_CONTINUE_2);
          FontPrintMediumCenter(0x100,0x118,color,uVar7,0xffffffffffffffff);
        }
        else {
          uVar7 = help_msg_string_by_index(STR_CONTINUE);
          FontPrintMediumCenter(0x100,0x118,color,uVar7,0xffffffffffffffff);
        }
        SVar20 = STR_THE_DISPLAY_HAS_BEEN_0x522C;
      }
      color = help_msg_string_by_index(SVar20);
      uVar7 = GetEffectTex(1);
      FontPrintOptWestern
                (uVar24,local_2d0,uVar8,color,0xffffffffffffffff,uVar7,&MediumWesternGlyphs);
    }
    else if ((g_freezeDialogType != 5) && (g_freezeDialogType != 3)) {
      if (g_freezeDialogType == 2) {
        dVar21 = (double)FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(g_MainLoopFrames - (g_MainLoopFrames / DAT_0071f368) * DAT_0071f368);
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
        uVar8 = FastLerpColor
                          ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                                    0.5 + 0.5),DAT_0071f36c,DAT_0071f370);
        DrawTextBox(100,0xa0,0xb0,0x150,uVar8);
        FontPrintMediumCenter(0x100,0x7a,0x8000c0c0,DAT_00963678,0xffffffffffffffff);
      }
      else if (g_freezeDialogType == 0) {
        dVar21 = (double)FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(g_MainLoopFrames - (g_MainLoopFrames / DAT_0071f368) * DAT_0071f368);
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
        uVar8 = FastLerpColor
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
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(4,0x784ac);
        dVar21 = 1.0;
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar26);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(0x24,0x963670);
        vectorCompareGreaterThanFloatingPoint(auVar28,auVar26);
        dVar22 = dVar21;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar29 = loadVectorLeftIndexed(0x34,0x784ac);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
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
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
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
          puVar9 = (undefined *)FastLerpColor(dVar21,PTR_DAT_0071f374,DAT_0071f378);
          uVar10 = FastLerpColor(dVar21,DAT_0071f37c,DAT_0071f380);
          uVar11 = FastLerpColor(dVar21,DAT_0071f384,DAT_0071f388);
        }
        if (DAT_0096a57a < 3) {
          local_78 = (longlong)DAT_0071f34c;
          iVar12 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f34c;
          iVar12 = DAT_0071f344 - iVar12;
          iVar13 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f348;
          iVar13 = DAT_0071f344 + iVar13;
          iVar14 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f348;
          iVar14 = DAT_0071f340 - iVar14;
          iVar15 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          DrawTextBox(iVar12,iVar13,iVar14,DAT_0071f340 + iVar15,uVar8);
          iVar12 = DAT_0071f350;
          uVar8 = help_msg_string_by_index(STR_QUIT_RACE);
          FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          if (g_JapaneseMode == false) {
            iVar12 = DAT_0071f350 + 0x18;
            uVar8 = help_msg_string_by_index(STR_CONTINUE);
            FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
            iVar12 = DAT_0071f350 + 0x30;
            uVar8 = help_msg_string_by_index(STR_QUIT_2);
            FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          }
          else {
            pcVar16 = (char *)help_msg_string_by_index(STR_NO);
            pcVar17 = (char *)help_msg_string_by_index(STR_CONTINUE);
            strcpy((char *)local_278,pcVar17);
            local_276[0] = *pcVar16;
            FontPrintMediumCenter
                      (0x100,DAT_0071f350 + 0x18,puVar9,local_276,0xffffffffffffffff);
            help_msg_string_by_index(STR_CONTINUE);
            pcVar16 = (char *)help_msg_string_by_index(STR_QUIT_2);
            strcpy(local_276,pcVar16);
            FontPrintMediumCenter
                      (0x100,DAT_0071f350 + 0x30,puVar9,local_278,0xffffffffffffffff);
          }
        }
        else {
          local_78 = (longlong)DAT_0071f360;
          iVar12 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f360;
          iVar12 = DAT_0071f358 - iVar12;
          iVar13 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f35c;
          iVar13 = DAT_0071f358 + iVar13;
          iVar14 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          local_78 = (longlong)DAT_0071f35c;
          iVar14 = DAT_0071f354 - iVar14;
          iVar15 = FastDoubleToInt((double)(float)((double)local_78 * dVar22));
          DrawTextBox(iVar12,iVar13,iVar14,DAT_0071f354 + iVar15,uVar8);
          iVar12 = DAT_0096a5a0 + -1;
          uVar8 = help_msg_string_by_index
                            (iVar12 + ((uint)(4 - (longlong)iVar12 >> 0x3f) & 4U - iVar12) + STR_ST)
          ;
          color = help_msg_string_by_index(STR_PLACE);
          snprintf(acStack_2b8,"%s %s",uVar8,color);
          if (DAT_0096a5a0 == 1) {
            FontPrintMediumCenter(0x100,DAT_0071f364,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          else {
            FontPrintMediumCenter(0x100,DAT_0071f364,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          if (*(int *)((int)&g_BoltsRewardedFromRacePB + ((uint)LZCOUNT(Level - Kalebo) >> 3 & 4))
              == g_RaceTime) {
            uVar3 = (uint)(ZERO_MASK(g_IsPal)) & 600;
            iVar13 = uVar3 + 3000;
            iVar12 = g_RaceTime / iVar13;
            iVar14 = g_RaceTime - iVar12 * iVar13;
            uVar3 = (uVar3 + 0xbb9) * 0x111 >> 0xe;
            iVar13 = iVar14 / (int)uVar3;
            uVar8 = help_msg_string_by_index(STR_NEW_BEST_TIME);
            snprintf(acStack_2b8,"%s",uVar8);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x26,uVar10,acStack_2b8,0xffffffffffffffff);
            snprintf(acStack_2b8,"%d:%02d:%02d",iVar12,iVar13,
                           (int)((iVar14 - iVar13 * uVar3) * 100) / (int)uVar3);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x3a,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          else {
            uVar8 = help_msg_string_by_index(STR_NO_NEW_TIME);
            snprintf(acStack_2b8,"%s",uVar8);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x30,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          iVar12 = *(int *)((int)&DAT_00a0cd10 + ((uint)LZCOUNT(Level - Kalebo) >> 3 & 4));
          if ((iVar12 == 0) || (iVar12 != g_RaceScore)) {
            uVar8 = help_msg_string_by_index(STR_NO_NEW_SCORE);
            snprintf(acStack_2b8,"%s",uVar8);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x60,uVar11,acStack_2b8,0xffffffffffffffff);
          }
          else {
            uVar8 = help_msg_string_by_index(STR_NEW_HIGH_SCORE);
            snprintf(acStack_2b8,"%s",uVar8);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x56,uVar10,acStack_2b8,0xffffffffffffffff);
            snprintf(acStack_2b8,"%d",g_RaceScore);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x6a,uVar10,acStack_2b8,0xffffffffffffffff);
          }
          if (g_JapaneseMode == false) {
            iVar12 = DAT_0071f364 + 0x90;
            uVar8 = help_msg_string_by_index(STR_CONTINUE);
            FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
            iVar12 = DAT_0071f364 + 0xa8;
            uVar8 = help_msg_string_by_index(STR_QUIT_2);
            FontPrintMediumCenter(0x100,iVar12,puVar9,uVar8,0xffffffffffffffff);
          }
          else {
            pcVar16 = (char *)help_msg_string_by_index(STR_NO);
            pcVar17 = (char *)help_msg_string_by_index(STR_CONTINUE);
            strcpy((char *)local_278,pcVar17);
            local_276[0] = *pcVar16;
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0x90,puVar9,local_276,0xffffffffffffffff);
            help_msg_string_by_index(STR_CONTINUE);
            pcVar16 = (char *)help_msg_string_by_index(STR_QUIT_2);
            strcpy(local_276,pcVar16);
            FontPrintMediumCenter
                      (0x100,DAT_0071f364 + 0xa8,puVar9,local_278,0xffffffffffffffff);
          }
        }
      }
      else {
        dVar21 = (double)FastIntToDouble(DAT_0071f368);
        local_78 = (longlong)(g_MainLoopFrames - (g_MainLoopFrames / DAT_0071f368) * DAT_0071f368);
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
        uVar8 = FastLerpColor
                          ((double)((fVar2 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar4 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
                                    0.5 + 0.5),DAT_0071f36c,DAT_0071f370);
        DrawTextBox(0x50,DAT_0071f334 + 0x1a,0xb0,0x150,uVar8);
        if (DAT_00963678 != 0) {
          FontPrintMediumCenter(0x100,0x5a,0x8000c0c0,DAT_00963678,0xffffffffffffffff);
        }
        if (DAT_0096367c != 0) {
          FontPrintMediumCenter(0x100,DAT_0071f330,0x80ffa888,DAT_0096367c,0xffffffffffffffff)
          ;
        }
        if (DAT_00963680 != 0) {
          FontPrintMediumCenter(0x100,DAT_0071f334,0x80ffa888,DAT_00963680,0xffffffffffffffff)
          ;
        }
      }
    }
  }
LAB_00079abc:
  STUB_0006d708();
  return;
}


// 0x0079b18 (0x820 bytes)
void UpdateFreeze(void)

{
  MobyModeBit MVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int iVar4;
  undefined8 in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  sound_Update();
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
            if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) == 0) {
              if ((g_Pad.buttonsPressedThisFrame & (START|CIRCLE)) != 0) {
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
                    Hud_SetEntryValueById(DAT_0096a560,0);
                    DAT_0096a560 = -1;
                  }
                  Hud_DecHideCounter();
                  if ((int)(animationSpeed * 4200.5) < DAT_00969e7c) {
                    if (Level == Rilgar) {
                      DAT_00a10548 = DAT_00a10548 + 1;
                    }
                    else if (Level == Kalebo) {
                      DAT_00a1054c = DAT_00a1054c + 1;
                    }
                  }
                  g_gameMode = GAME_MODE_NORMAL;
                  music_SetTransition(0,8);
                  Hero_Warp((float *)&DAT_0096b9e0,(float *)&DAT_0096b9f0,0,1);
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
          if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
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
      if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
        g_gameMode = GAME_MODE_NORMAL;
      }
    }
    else if (g_freezeDialogType < 4) {
      g_freezeOpenAnim = g_freezeOpenAnim + 1;
      if (((int)(animationSpeed * 30.5) < g_freezeOpenAnim) && (g_freezeOpenAnim2 != 0)) {
        g_freezeOpenAnim2 = g_freezeOpenAnim2 + -1;
      }
      if (DAT_00a23099 == '\0') {
        iVar3 = memcard_PollSaveResult();
        if (((-1 < iVar3) && (g_memcardPollDone != '\0')) && (iVar3 != 2)) {
          iVar4 = memcard_GetSaveSysState();
          g_memcardPollDone = '\0';
          if ((iVar4 == 6) || (iVar4 == 3)) {
            g_memcardSaveSysState = 5;
            g_gameMode = g_freezePrevGameMode;
          }
          else if (iVar4 == 1) {
            g_memcardSaveSysState = 5;
            if (iVar3 == 0) {
              ChangeLevel(Level);
              DAT_0096459a = 0;
            }
            else if (iVar3 == 1) {
              g_gameMode = g_freezePrevGameMode;
            }
          }
          else if (iVar4 == 0) {
            g_memcardSaveSysState = 5;
            if (iVar3 == 0) {
              if ((g_FrontEnd == '\0') && (DAT_00a15f39 == '\0')) {
                g_gameMode = g_freezePrevGameMode;
              }
              else {
                if (DAT_00a15f39 != '\0') {
                  DAT_00a15f39 = '\0';
                }
                ChangeLevel(Veldin);
                DAT_0096459a = 1;
              }
            }
            else if (iVar3 == 1) {
              g_gameMode = g_freezePrevGameMode;
            }
          }
        }
      }
      else if (g_Pad.showReconnectPrompt == '\0') {
        g_gameMode = g_freezePrevGameMode;
        DAT_00a23099 = '\0';
        g_memcardPollDone = '\0';
      }
    }
    else if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
      if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
        g_gameMode = GAME_MODE_NORMAL;
      }
    }
    else {
      MVar1 = g_heroMobyPtr->modeBits;
      g_heroMobyPtr->collision = (ushort *)0x0;
      pMVar2->enabled = '\0';
      pMVar2->modeBits = MVar1 | DISABLED;
      Hero_RevertToRatchet();
      Hero_Warp((float *)&DAT_0096b9e0,(float *)&DAT_0096b9f0,0,1);
      g_gameMode = GAME_MODE_NORMAL;
    }
  }
  else if (g_freezeDialogType < 8) {
    if (g_freezeDialogType < 6) {
      g_freezeOpenAnim = g_freezeOpenAnim + 1;
      g_gameMode = GAME_MODE_NORMAL;
      if (Level == Novalis) {
        memcard_Save(0,-1);
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
          else if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
              FadeToBlack(4);
              auVar5 = ZEXT416(0xffffffff);
              auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
              DAT_00a52e60 = 0;
              auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
              g_freezeState = 2;
              auVar5 = loadVectorLeftIndexed(in_LR,0x79b08);
              auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar5 = vectorMultiplyAddFloatingPoint
                                 (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,
                                  auVar6);
              auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
              auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
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
          else if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
            if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
              DAT_00a52e60 = 0;
              g_gameMode = g_freezePrevGameMode;
            }
          }
          else {
            FadeToBlack(4);
            DAT_00a52e60 = 1;
            g_gameMode = g_freezePrevGameMode;
          }
          goto LAB_0007a2ec;
        }
        if (g_freezeState < 4) {
          if ((g_Pad.buttonsPressedThisFrame & pad_ConfirmButtonMask) != 0) {
            g_gameMode = g_freezePrevGameMode;
          }
          goto LAB_0007a2ec;
        }
      }
      g_gameMode = g_freezePrevGameMode;
    }
  }
  else if (((8 < g_freezeDialogType) && (g_freezeDialogType < 10)) && (g_Pad.showReconnectPrompt == '\0')) {
    g_gameMode = g_freezePrevGameMode;
  }
LAB_0007a2ec:
  if (g_gameMode != GAME_MODE_PAUSE && g_gameMode != GAME_MODE_FREEZE) {
    FUN_0060bb90(0x1d);
    music_Unpause();
    STUB_00505d20();
  }
  return;
}


