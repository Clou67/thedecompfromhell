// game/freeze.cpp -- in-game prompts ("freeze" mode): quit / continue / reconnect controller ...
// STATUS: IN PROGRESS
// MERGE (4 of 5 functions cleaned; the rest are generated)
// 5 functions, 0x78140-0x7a338
//
// DisplayPrompt switches the game into GAME_MODE_FREEZE and sets up g_Freeze for one of the prompt
// types; UpdateFreeze runs it and DrawDialogText draws it. Timers are frame counts scaled by
// animationSpeed (the frame-rate factor, 1.0 at 60 fps).
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

#define FREEZE_OPEN_FRAMES   30.5f      /* constants at 0x7816c */
#define FREEZE_DELAY_FRAMES  10.5f
#define QUIT_FADE_FRAMES     600.5f     /* 0x79b08 */
#define RACE_MIN_FRAMES      4200.5f    /* 0x79b0c: a race quit after this long counts as an attempt */

/* frames scaled by the frame-rate factor; the binary does this through the vector unit
   (lvlx both floats, vmaddfp with -0.0, vctsxs, stvewx) */
static inline int ScaledFrames(float frames)
{
    return (int)(frames * animationSpeed);
}

static inline bool Pressed(int mask)
{
    return (g_Pad.buttonsPressedThisFrame & mask) != 0;
}

// 0x0078140 (0x14 bytes)
void SECTION_HEADER_FREEZE(void)
{
    DAT_0071f30c = 0x10000;
}


// 0x0078158 (0x14 bytes)
gameMode_t GetFreezePrevGameMode(void)
{
    return g_Freeze.prevGameMode;
}


// 0x0078178 (0x334 bytes)
void DisplayPrompt(int dialog, int arg, int option)
{
    g_Freeze.option = option;
    if (g_gameMode != GAME_MODE_PAUSE) {
        FUN_0060bc8c(29);
        music_Pause(0);
    }
    g_Freeze.prevGameMode = g_gameMode;
    g_Freeze.dialogType = dialog;
    g_Freeze.arg = arg;
    g_gameMode = GAME_MODE_FREEZE;
    g_Freeze.delay = 0;

    switch (dialog) {
    case 0:
        g_Freeze.options[0] = help_msg_string_by_index(STR_QUIT_RACE);
        g_Freeze.options[1] = help_msg_string_by_index(STR_QUIT_2);
        g_Freeze.options[2] = help_msg_string_by_index(STR_CONTINUE);
        g_Freeze.timer = 0;
        g_Freeze.state = 0;
        g_Freeze.openAnim = 0;
        g_Freeze.openAnim2 = 0;
        g_Freeze.unk28 = 0;
        break;
    case 1:
    case 4:
        g_Freeze.options[0] = help_msg_string_by_index(STR_QUIT);
        g_Freeze.options[1] = help_msg_string_by_index(STR_EXIT);
        g_Freeze.options[2] = help_msg_string_by_index(STR_CONTINUE_2);
        g_Freeze.timer = 0;
        break;
    case 2:
        g_Freeze.options[0] = help_msg_string_by_index(STR_CONTINUE_2);
        g_Freeze.options[1] = 0;
        g_Freeze.timer = 0;
        break;
    case 3:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = -1;
        g_Freeze.openAnim2 = g_Freeze.timer;
        DAT_0071fad4 = 3;
        g_Freeze.delay = ScaledFrames(FREEZE_DELAY_FRAMES);
        break;
    case 5:
        Help_AddToLog(STR_WHEN_THE_GAME_SHOWS_0x4E2B);
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = 0;
        g_Freeze.openAnim2 = g_Freeze.timer;
        break;
    case 6:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.state = 0;
        break;
    case 7:
    case 8:
        g_Freeze.timer = ScaledFrames(FREEZE_OPEN_FRAMES);
        g_Freeze.openAnim = -1;
        g_Freeze.openAnim2 = g_Freeze.timer;
        break;
    case 9:                                     /* controller disconnected (startLevel) */
        g_Freeze.delay = 1;
        break;
    default:
        g_Freeze.options[0] = 0;
        g_Freeze.options[1] = 0;
        g_Freeze.options[2] = 0;
        g_Freeze.timer = 120;
        break;
    }
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
  if (g_Freeze.delay != 0) {
    return;
  }
  STUB_0006d704(0);
  if (g_Freeze.dialogType != 9) {
    if (g_Freeze.dialogType == 8) {
      if (0 < g_Freeze.openAnim) {
        uVar8 = help_msg_string_by_index
                          ((int)(ZERO_MASK(g_Freeze.option)) +
                           STR_SAVE_FAILED_PLEASE_CHECK_0x4FBD);
        SVar20 = (StringId)(ZERO_MASK(g_Freeze.timer)) & STR_CONTINUE_2;
        FontPrintMediumOpt(local_2e8,0,uVar8,0xffffffffffffffff);
        sVar1 = (short)(g_ScreenHeight + -0x28 >> 1);
        sVar18 = sVar1 + 0x28;
        dVar23 = 30.5;
        dVar22 = 1.0;
        dVar21 = (double)(1.0 - (float)(longlong)g_Freeze.timer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        color = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        FontPrintMediumOpt(local_2e8,color,uVar8,0xffffffffffffffff);
        local_78 = (longlong)g_Freeze.openAnim2;
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
    else if (g_Freeze.dialogType == 7) {
      if (0 < g_Freeze.openAnim) {
        uVar8 = help_msg_string_by_index(STR_MEMORY_CARD_PS2_IN_0x4FA6);
        pbVar19 = local_278;
        strcpy(pbVar19,uVar8,0x400);
        iVar12 = g_Freeze.timer;
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
        dVar21 = (double)(1.0 - (float)(longlong)g_Freeze.timer /
                                (float)(longlong)(animationSpeed * 30.5));
        local_78 = (longlong)(int)(dVar21 * 80.0);
        DrawRoundedRect(sVar1,sVar18,0x60,0x1a0,(int)(dVar21 * 80.0));
        uVar8 = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
        FontPrintMediumOpt(local_300,uVar8,pbVar19,0xffffffffffffffff);
        local_78 = (longlong)g_Freeze.openAnim2;
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
    else if (g_Freeze.dialogType == 6) {
      uVar24 = 0x3ff0000000000000;
      dVar21 = (double)(1.0 - (float)(longlong)g_Freeze.timer /
                              (float)(longlong)(animationSpeed * 30.5));
      local_78 = (longlong)(int)(dVar21 * 80.0);
      DrawRoundedRect(100,300,0x60,0x1a0,(int)(dVar21 * 80.0));
      uVar8 = FastLerpColor(dVar21,ABGR_0071f338,ABGR_0071f33c);
      color = FastLerpColor(dVar21,0x20ffff,0xffffffff8020ffff);
      if (g_Freeze.state < 2) {
        if (g_Freeze.state < 0) goto LAB_00079abc;
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
      else if (g_Freeze.state < 3) {
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
        if (3 < g_Freeze.state) goto LAB_00079abc;
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
    else if ((g_Freeze.dialogType != 5) && (g_Freeze.dialogType != 3)) {
      if (g_Freeze.dialogType == 2) {
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
        FontPrintMediumCenter(0x100,0x7a,0x8000c0c0,g_Freeze.options[0],0xffffffffffffffff);
      }
      else if (g_Freeze.dialogType == 0) {
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
          dVar22 = (double)((float)(longlong)g_Freeze.openAnim * 0.125);
          if ((bool)(in_cr6 >> 1 & 1)) {
            dVar22 = 0.10000000149011612;
          }
        }
        puVar9 = PTR_DAT_0071f374;
        uVar10 = DAT_0071f37c;
        uVar11 = DAT_0071f384;
        if (g_Freeze.openAnim2 != 0) {
          local_78 = (longlong)g_Freeze.openAnim2;
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
        if (g_Freeze.options[0] != 0) {
          FontPrintMediumCenter(0x100,0x5a,0x8000c0c0,g_Freeze.options[0],0xffffffffffffffff);
        }
        if (g_Freeze.options[1] != 0) {
          FontPrintMediumCenter(0x100,DAT_0071f330,0x80ffa888,g_Freeze.options[1],0xffffffffffffffff)
          ;
        }
        if (g_Freeze.options[2] != 0) {
          FontPrintMediumCenter(0x100,DAT_0071f334,0x80ffa888,g_Freeze.options[2],0xffffffffffffffff)
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
    sound_Update();
    if (g_Freeze.timer) g_Freeze.timer--;
    if (g_Freeze.delay) g_Freeze.delay--;

    switch (g_Freeze.dialogType) {
    case 0:                                     /* quit race? */
        switch (g_Freeze.state) {
        case 0:                                 /* open animation */
            if (g_Freeze.openAnim < 8) g_Freeze.openAnim++;
            else if (g_Freeze.openAnim2 < 8) g_Freeze.openAnim2++;
            else g_Freeze.state = 1;
            break;
        case 1:
            if (Pressed(pad_ConfirmButtonMask)) g_Freeze.state = 2;
            else if (Pressed(START | CIRCLE)) g_Freeze.state = 3;
            break;
        case 2:                                 /* close animation, then quit (2) or resume (3) */
        case 3:
            if (g_Freeze.openAnim2) { g_Freeze.openAnim2--; break; }
            if (g_Freeze.openAnim) { g_Freeze.openAnim--; break; }
            if (g_Freeze.state == 2) {
                if (DAT_0096a560 != -1) {
                    Hud_SetEntryValueById(DAT_0096a560, 0);
                    DAT_0096a560 = -1;
                }
                Hud_DecHideCounter();
                if (DAT_00969e7c > ScaledFrames(RACE_MIN_FRAMES)) {
                    if (Level == Rilgar) DAT_00a10548++;
                    else if (Level == Kalebo) DAT_00a1054c++;
                }
                g_gameMode = GAME_MODE_NORMAL;
                music_SetTransition(0, 8);
                Hero_Warp((float *)&DAT_0096b9e0, (float *)&DAT_0096b9f0, 0, 1);
            } else {
                g_gameMode = GAME_MODE_NORMAL;
                if (DAT_0096a57a > 2) {
                    DAT_0096a57a--;
                    *(u8 *)(DAT_0096a570 + 0xbc) = 3;
                }
            }
            break;
        }
        break;
    case 1:
        OcclMode = 2;
        if (Pressed(TRIANGLE)) {
            g_gameMode = GAME_MODE_NORMAL;
            DAT_0096b2ef |= 1;
        } else if (Pressed(pad_ConfirmButtonMask)) {
            g_gameMode = GAME_MODE_NORMAL;
        }
        break;
    case 2:
        OcclMode = 2;
        if (Pressed(pad_ConfirmButtonMask)) g_gameMode = GAME_MODE_NORMAL;
        break;
    case 3:                                     /* memory card save result */
        g_Freeze.openAnim++;
        if (g_Freeze.openAnim > ScaledFrames(FREEZE_OPEN_FRAMES) && g_Freeze.openAnim2) g_Freeze.openAnim2--;
        if (DAT_00a23099) {
            if (!g_Pad.showReconnectPrompt) {
                g_gameMode = g_Freeze.prevGameMode;
                DAT_00a23099 = 0;
                g_memcardPollDone = 0;
            }
            break;
        }
        {
            int result = memcard_PollSaveResult();
            if (result < 0 || !g_memcardPollDone || result == 2) break;
            int sys = memcard_GetSaveSysState();
            g_memcardPollDone = 0;
            if (sys == 6 || sys == 3) {
                g_memcardSaveSysState = 5;
                g_gameMode = g_Freeze.prevGameMode;
            } else if (sys == 1) {
                g_memcardSaveSysState = 5;
                if (result == 0) {
                    ChangeLevel(Level);
                    DAT_0096459a = 0;
                } else if (result == 1) {
                    g_gameMode = g_Freeze.prevGameMode;
                }
            } else if (sys == 0) {
                g_memcardSaveSysState = 5;
                if (result == 0) {
                    if (!g_FrontEnd && !DAT_00a15f39) {
                        g_gameMode = g_Freeze.prevGameMode;
                    } else {
                        if (DAT_00a15f39) DAT_00a15f39 = 0;
                        ChangeLevel(Veldin);
                        DAT_0096459a = 1;
                    }
                } else if (result == 1) {
                    g_gameMode = g_Freeze.prevGameMode;
                }
            }
        }
        break;
    case 4:
        if (Pressed(TRIANGLE)) {
            MobyInstance *hero = g_heroMobyPtr;
            hero->collision = 0;
            hero->enabled = 0;
            hero->modeBits = (MobyModeBit)(hero->modeBits | DISABLED);
            Hero_RevertToRatchet();
            Hero_Warp((float *)&DAT_0096b9e0, (float *)&DAT_0096b9f0, 0, 1);
            g_gameMode = GAME_MODE_NORMAL;
        } else if (Pressed(pad_ConfirmButtonMask)) {
            g_gameMode = GAME_MODE_NORMAL;
        }
        break;
    case 5:
        g_Freeze.openAnim++;
        g_gameMode = GAME_MODE_NORMAL;
        if (Level == Novalis) memcard_Save(0, -1);
        break;
    case 6:                                     /* quit to ...: wait, confirm, fade out */
        switch (g_Freeze.state) {
        case 0:
            if (!g_Freeze.timer) g_Freeze.state = 1;
            break;
        case 1:
            if (Pressed(TRIANGLE)) {
                g_gameMode = g_Freeze.prevGameMode;
            } else if (Pressed(pad_ConfirmButtonMask)) {
                FadeToBlack(4);
                DAT_00a52e60 = 0;
                g_Freeze.state = 2;
                g_Freeze.openAnim = ScaledFrames(QUIT_FADE_FRAMES);
            }
            break;
        case 2:
            if (g_Freeze.openAnim) g_Freeze.openAnim--;
            if (!g_Freeze.openAnim) {
                DAT_00a52e60 = 1;
                g_Freeze.state = 3;
            } else if (Pressed(TRIANGLE)) {
                FadeToBlack(4);
                DAT_00a52e60 = 1;
                g_gameMode = g_Freeze.prevGameMode;
            } else if (Pressed(pad_ConfirmButtonMask)) {
                DAT_00a52e60 = 0;
                g_gameMode = g_Freeze.prevGameMode;
            }
            break;
        case 3:
            if (Pressed(pad_ConfirmButtonMask)) g_gameMode = g_Freeze.prevGameMode;
            break;
        default:
            g_gameMode = g_Freeze.prevGameMode;
            break;
        }
        break;
    case 7:
        g_gameMode = g_Freeze.prevGameMode;
        break;
    case 9:                                     /* controller disconnected: wait for it */
        if (!g_Pad.showReconnectPrompt) g_gameMode = g_Freeze.prevGameMode;
        break;
    }

    if (g_gameMode != GAME_MODE_PAUSE && g_gameMode != GAME_MODE_FREEZE) {
        FUN_0060bb90(29);
        music_Unpause();
        STUB_00505d20();
    }
}


