// game/update/moby1061.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1ac298-0x1ad128
#include "game/update/moby1061.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1022.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01ac298 (0xe90 bytes)
/* Moby 1061 */

void UpdateMoby_1061(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  MobyInstance *pMVar6;
  Cuboid *pCVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  Vec4 local_60;
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  longlong local_40;
  
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  local_60.x = -fVar2;
  local_60.y = -fVar3;
  local_60.w = (moby->pos).w;
  local_60.z = -(moby->pos).z;
  local_50 = (moby->rotation).x;
  local_4c = (moby->rotation).y;
  local_48 = (moby->rotation).z;
  local_44 = (moby->rotation).w;
  pvVar4 = moby->pVar;
  uVar10 = ZEXT48(pvVar4);
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00740994;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (DAT_007409ac == 0xffffffff) {
        DAT_007409ac = ((uint)UnlockableItems.hydrodisplacer != 0);
      }
      *(undefined4 *)((int)pvVar4 + 0x88) = 0xffffffff;
      *(undefined4 *)((int)pvVar4 + 0x94) = 0;
      moby->state = ((byte)(ZERO_MASK((uint)g_MiscLevelFlags.field32_0x20)) & 0xfe) +
                    3;
      (moby->pos).z =
           Cuboids[*(int *)((int)pvVar4 + 0x78)].pos.z +
           Cuboids[*(int *)((int)pvVar4 + 0x78)].matrix.v2.z;
      if (g_heroType == '\0') {
        g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
             g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | DISABLED;
        g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
             g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | NO_UPDATE;
        g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].collision = (ushort *)0x0;
      }
      else if (g_heroType == '\x01') {
        FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
      }
      FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 100));
      FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
    }
    else if (bVar1 < 2) {
      iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x70));
      if (iVar8 == 0) {
        if (g_heroMobyPtr->oClass == CLANK_0057) {
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar4 + 0x84) = 1;
        }
      }
      else {
        if (g_MiscLevelFlags.field32_0x20 == 0) {
          g_MiscLevelFlags.field32_0x20 = 1;
        }
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      }
    }
    else if (g_gameMode == GAME_MODE_NORMAL) {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      iVar8 = FastDecTimerS32(uVar10 + 0x90);
      if ((iVar8 != 0) &&
         (iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x70))
         , iVar8 != 0)) {
        if (g_heroType == '\x01') {
          iVar8 = MB_ShowPersistentMessage(9,0x1781);
        }
        else if (UnlockableItems.o2Mask == '\0') {
          iVar8 = MB_ShowPersistentMessage(9,0x177e);
        }
        else if (*(int *)((int)pvVar4 + 0x84) == 0) {
          iVar8 = MB_ShowPersistentMessage(9,0x1789);
        }
        else {
          iVar8 = MB_ShowPersistentMessage(9,0x1785);
        }
        fVar2 = animationSpeed;
        if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) &&
           (iVar8 != 0 && g_heroState != CUSTOM_UI)) {
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(in_LR,0x1ac250);
          auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar18 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar17 = vectorSplatHalfWord(auVar17,1);
          DAT_00969ed2 = storeVectorElementHalfWordIndexed(auVar17,0x1f2,0x969ce0);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar19);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
          if (g_heroType == '\x01') {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            FadeToBlack((int)(fVar2 * 16.5));
            FUN_00189100(g_MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189100(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pMVar6 = g_MobyInstance;
            *(undefined4 *)((int)pvVar4 + 0x84) = 0;
            pMVar6[*(int *)((int)pvVar4 + 0x6c)].collision = (ushort *)0x0;
            Hero_RevertToRatchet();
            Hero_Warp(&Cuboids[*(int *)((int)pvVar4 + 0x7c)].pos.x,
                            &Cuboids[*(int *)((int)pvVar4 + 0x7c)].rot.x,0,1);
            music_SetTransition(0,10);
            g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | DISABLED;
            g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | NO_UPDATE;
            if ((UnlockableItems.hydrodisplacer != '\0') && (DAT_007409ac == 0)) {
              DAT_007409ac = 1;
              mode_sceneInit(3);
              moby->state = '\x02';
              goto LAB_001acf94;
            }
          }
          else if (UnlockableItems.o2Mask == '\0') {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            FadeToBlack((int)(fVar2 * 16.5));
            FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00189100(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pMVar6 = g_MobyInstance;
            *(undefined4 *)((int)pvVar4 + 0x84) = 1;
            pMVar6[*(int *)((int)pvVar4 + 0x6c)].collision =
                 (pMVar6[*(int *)((int)pvVar4 + 0x6c)].pClass)->collision;
            g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 g_MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            Hero_Warp(&Cuboids[*(int *)((int)pvVar4 + 0x80)].pos.x,
                            &Cuboids[*(int *)((int)pvVar4 + 0x80)].rot.x,0,1);
            SetHeroType(1,0x43,g_MobyInstance + *(int *)((int)pvVar4 + 0x6c));
            music_SetTransition(2,7);
          }
          else if (*(int *)((int)pvVar4 + 0x84) == 0) {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            FadeToBlack((int)(fVar2 * 16.5));
            FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00189100(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pCVar7 = Cuboids;
            *(undefined4 *)((int)pvVar4 + 0x84) = 1;
            *(undefined4 *)((int)pvVar4 + 0x94) = 1;
            Hero_Warp(&pCVar7[*(int *)((int)pvVar4 + 0x80)].pos.x,
                            &pCVar7[*(int *)((int)pvVar4 + 0x80)].rot.x,0,1);
          }
          else {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            FadeToBlack((int)(fVar2 * 16.5));
            FUN_00189100(g_MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pCVar7 = Cuboids;
            *(undefined4 *)((int)pvVar4 + 0x84) = 0;
            *(undefined4 *)((int)pvVar4 + 0x94) = 0;
            Hero_Warp(&pCVar7[*(int *)((int)pvVar4 + 0x7c)].pos.x,
                            &pCVar7[*(int *)((int)pvVar4 + 0x7c)].rot.x,0,1);
          }
        }
      }
      if ((((g_standingOnMoby != moby) || (g_framesNotGrounded != 0)) ||
          (iVar8 = FastDecTimerS32(uVar10 + 0x90), iVar8 == 0)) ||
         ((g_heroPosition.z <= (moby->pos).z + 0.29 ||
          (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
          1.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2))))) {
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        bVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 24.0;
        if ((!bVar11) || ((moby->state != '\x03' || ((moby->pos).z <= g_heroPosition.z + 5.0)))) {
          if ((bVar11) && ((moby->state == '\x04' && ((moby->pos).z < g_heroPosition.z - 5.0)))) {
            moby->state = '\x06';
            FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
            auVar17 = ZEXT416(0xffffffff);
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
            auVar17 = loadVectorLeftIndexed(4,0x1ac250);
            auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar17 = vectorMultiplyAddFloatingPoint
                                (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 |
                                         auVar17 << 0x60,auVar18);
            auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
            auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                               uVar10);
            *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
          }
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x84) = 1;
          *(undefined4 *)((int)pvVar4 + 0x94) = 1;
          moby->state = '\x05';
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 100));
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x60));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
      }
      else {
        PlayMobySound(0,0,moby);
        if (moby->state == '\x03') {
          moby->state = '\x05';
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 100));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
        else {
          moby->state = '\x06';
          FUN_00189040(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
      }
    }
    else {
      dVar14 = (double)Cuboids[*(int *)((int)pvVar4 + 0x78)].pos.z;
      if (bVar1 == 6) {
        dVar14 = (double)(float)(dVar14 + (double)Cuboids[*(int *)((int)pvVar4 + 0x78)].matrix.v2.z)
        ;
      }
      OrganicDelt
                ((float)dVar14,DAT_0074099c * g_FrameTimeSq,DAT_0074099c * g_FrameTimeSq,
                 DAT_00740998 * g_FrameTime,&(moby->pos).z,0x740000,
                 (float *)((int)pvVar4 + 0x8c));
      if (ABS((float)((double)(moby->pos).z - dVar14)) < 0.01) {
        if (moby->state == '\x06') {
          moby->state = '\a';
          FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 100));
        }
        else {
          FUN_00188fb4(g_MobyInstance + *(int *)((int)pvVar4 + 0x68));
          moby->state = '\b';
        }
      }
    }
  }
  else if ((bVar1 < 9) &&
          (fVar3 = g_heroPosition.y - fVar3, fVar2 = g_heroPosition.x - fVar2,
          1.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3))) {
    moby->state = (char)(ZERO_MASK((7 - (uint)bVar1))) + '\x04';
  }
LAB_001acf94:
  uVar9 = DAT_007409a8;
  DAT_0096bfab = (byte)((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar4 + 0x94)) << 0x20) >> 0x25) ^
                 1;
  if (moby->state < 9 && 4 < moby->state) {
    *(undefined4 *)((int)pvVar4 + 0x9c) = 0;
  }
  else {
    dVar12 = (double)FastWrapRot
                               (*(float *)((int)pvVar4 + 0x9c),g_FrameTime * 5.2359877);
    *(float *)((int)pvVar4 + 0x9c) = (float)dVar12;
    dVar14 = (double)(float)(3.141592502593994 - dVar12);
    if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
      dVar14 = dVar12;
    }
    dVar13 = (double)(float)(-3.141592502593994 - dVar12);
    if ((double)(float)(-3.141592502593994 - dVar12) - dVar14 < 0.0) {
      dVar13 = dVar14;
    }
    dVar12 = (double)(float)(dVar13 * dVar13);
    dVar16 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar13));
    dVar14 = 1.0;
    dVar15 = (double)(float)(dVar12 * dVar16);
    dVar12 = (double)(((float)(dVar12 * dVar15) * 2.601887e-06 +
                      (float)(dVar15 * -0.0001980741071747616 +
                             (double)(float)(dVar16 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar12 * dVar13) *
                                                            -0.16666656732559204 + dVar13)))) * 4.0
                     - 3.0);
    if ((dVar12 <= 1.0) && (dVar14 = dVar12, dVar12 < 0.0)) {
      dVar14 = 0.0;
    }
    uVar9 = FastLerpColor(dVar14,DAT_007409a0,DAT_007409a4);
  }
  local_60.x = local_60.x + (moby->pos).x;
  local_60.y = local_60.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  moby->glowRgba = uVar9;
  local_60.z = local_60.z + fVar2;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x50,
             (longlong)(int)moby + 0x40);
  return;
}


