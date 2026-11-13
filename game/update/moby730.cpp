// game/update/moby730.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4362d8-0x43741c
// shared update function UpdateMoby_{730_731_790}; registered for oClasses 730, 731, 790
#include <math.h>
#include "game/update/moby730.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x04362d8 (0x14 bytes)
void M790_004362d8(void)

{
  DAT_0085a15c = 0x10000;
  return;
}


// 0x04362f0 (0xdc bytes)
// strings: 0096c074: 'None'

void M790_004362f0(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == AGNOGG_BUCKWASH) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// shared update function, registered for oClasses 730, 731, 790
// 0x04363f0 (0x1018 bytes)
// inlined: FastAtan2 @0x436844, FastAtan2 @0x436a08, FastAtan2 @0x436c50, FastAtan2 @0x436e0c
// strings: 0096c074: 'None'

/* Moby 730
   Moby 731
   Moby 790 */

void UpdateMoby_730(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  int iVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  gameMode_t gVar17;
  MobyInstance *pMVar18;
  Cuboid *pCVar19;
  int iVar20;
  short sVar23;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  float *pfVar27;
  float *pfVar28;
  ulonglong unaff_r26;
  undefined4 *puVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar22 = uVar26 - 0x160;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar26;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = unaff_r31;
  puVar14[0x2a] = unaff_r30;
  gVar17 = g_gameMode;
  pfVar27 = (float *)moby->pVar;
  uVar30 = ZEXT48(pfVar27);
  puVar14[0x29] = unaff_r29;
  puVar14[0x28] = unaff_r28;
  puVar14[0x27] = unaff_r27;
  puVar14[0x26] = unaff_r26;
  if ((gVar17 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar20 = 0;
    puVar29 = &DAT_0095cd50;
    sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar29[0x5e])->oClass == AGNOGG_BUCKWASH) && (DAT_00a1bf81 == '\0'))
        {
          AttachManipulator((MobyInstance *)puVar29[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar20 = iVar20 + 1;
        puVar29 = puVar29 + 1;
      } while (iVar20 < sVar23);
    }
  }
  FastDecTimerS16(uVar30 + 8);
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->updateDistance = -1;
        moby->state = '\x01';
        fVar9 = (moby->pos).z;
        fVar3 = *pfVar27;
        *(undefined2 *)(pfVar27 + 2) = 0;
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        pfVar27[3] = fVar9 - 0.75;
        (moby->pos).z = (moby->pos).z + fVar3;
      }
      else if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        if (moby->animationId != '\x02') {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
        moby->state = '\n';
        moby->drawDistance = 0xff;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
      }
      else {
        if ((g_gameMode == GAME_MODE_NORMAL) && (g_MiscLevelFlags.field15_0xf == 0)) {
          mode_sceneInit(5);
          g_MiscLevelFlags.field15_0xf = 1;
        }
        Space_DisableShip();
        iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar27[4]);
        if (iVar20 != 0) {
          fVar9 = pfVar27[1];
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
          pMVar18 = g_MobyInstance;
          if (fVar9 != -NAN) {
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar32 = loadVectorLeftIndexed(8,0x4363cc);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar32 = vectorMultiplyAddFloatingPoint
                                (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar33);
            pvVar10 = g_MobyInstance[(int)fVar9].pVar;
            auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar13 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                                ZEXT48(pvVar10));
            *(undefined4 *)((int)pvVar10 + 0x2cU & 0xfffffffc) = uVar13;
            pMVar18[(int)pfVar27[1]].setByGroup = '\x01';
            pCVar19 = Cuboids;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            fVar9 = 0.0;
            Cuboids[iVar20].rot.w = 0.0;
            pCVar19[iVar20].rot.z = 0.0;
            pCVar19[iVar20].rot.y = 0.0;
            pCVar19[iVar20].rot.x = 0.0;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            *(undefined4 *)((int)pvVar10 + 0x1c) = 0;
            *(undefined4 *)((int)pvVar10 + 0x18) = 0;
            *(undefined4 *)((int)pvVar10 + 0x14) = 0;
            *(undefined4 *)((int)pvVar10 + 0x10) = 0;
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar6 = pCVar19[iVar20].pos.y - fVar3;
            fVar7 = pCVar19[iVar20].pos.x - fVar4;
            fVar5 = (moby->pos).z - pCVar19[iVar20].pos.z;
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
            *(float *)(puVar14 + 0x13) = fVar5;
            fVar5 = ABS(fVar5);
            fVar7 = ABS(fVar6);
            *(float *)((int)puVar14 + 0x94) = fVar6;
            *(float *)((int)puVar14 + 0x9c) = fVar7 - fVar5;
            uVar30 = (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1d) & 4;
            fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
            if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
              fVar6 = fVar5;
            }
            fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
            fVar5 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
            fVar15 = ABS(*(float *)(puVar14 + 0x13));
            if (*(float *)((int)puVar14 + 0x9c) - 0.0 < 0.0) {
              fVar15 = fVar7;
            }
            fVar7 = fVar9;
            if (0.0 < fVar6) {
              lVar21 = uVar26 - 0x150;
              lVar24 = uVar26 - 0x60;
              lVar25 = uVar26 - 0x50;
              lVar31 = 2;
              fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
              fVar7 = fVar6 * fVar6;
              *(float *)((int)puVar14 + 0x10c) = fVar6;
              *(float *)((int)puVar14 + 0x104) = fVar6;
              *(float *)(puVar14 + 0x21) = fVar6;
              *(float *)(puVar14 + 0x20) = fVar6;
              fVar6 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar7;
              *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar6;
              *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar6 * fVar7;
              do {
                *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
                iVar11 = (int)lVar24;
                lVar21 = lVar21 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
                lVar25 = lVar25 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar25 = uVar26 - 0x60;
              pfVar27 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar25;
              do {
                fVar6 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar24 = 2;
              lVar21 = lVar22;
              fVar6 = fVar9;
              do {
                iVar11 = (int)lVar21;
                lVar21 = lVar21 + 0x10;
                iVar16 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                fVar6 = fVar6 + *(float *)(iVar11 + 0x100) + *(float *)(iVar16 + 4) +
                        *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar7 = (fVar6 + 0.7853982) * fVar8 + fVar5;
            }
            pCVar19[iVar20].rot.y = -fVar7;
            iVar20 = *(int *)((int)pvVar10 + 0x24);
            fVar4 = fVar4 - pCVar19[iVar20].pos.x;
            fVar3 = fVar3 - pCVar19[iVar20].pos.y;
            fVar6 = ABS(fVar4);
            fVar7 = ABS(fVar3);
            *(float *)(puVar14 + 0x11) = fVar4;
            *(float *)((int)puVar14 + 0x8c) = fVar3;
            *(float *)(puVar14 + 0x12) = fVar6 - fVar7;
            uVar30 = (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)(puVar14 + 0x11));
            if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
              fVar3 = fVar7;
            }
            fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
            fVar7 = ABS(*(float *)((int)puVar14 + 0x8c));
            if (*(float *)(puVar14 + 0x12) - 0.0 < 0.0) {
              fVar7 = fVar6;
            }
            fVar6 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
            if (0.0 < fVar3) {
              lVar21 = uVar26 - 0x150;
              lVar25 = uVar26 - 0x70;
              lVar24 = uVar26 - 0x80;
              lVar31 = 2;
              fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar14 + 0xec) = fVar3;
              *(float *)((int)puVar14 + 0xe4) = fVar3;
              *(float *)(puVar14 + 0x1d) = fVar3;
              *(float *)(puVar14 + 0x1c) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) * fVar7;
              *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) * fVar3;
              *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar3 * fVar3;
                iVar11 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
                lVar25 = lVar25 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar25 = uVar26 - 0x80;
              pfVar27 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar25;
              do {
                fVar3 = *pfVar27;
                fVar7 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar3;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar21 = 2;
              do {
                iVar11 = (int)lVar22;
                lVar22 = lVar22 + 0x10;
                iVar16 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                fVar9 = fVar9 + *(float *)(iVar11 + 0xe0) + *(float *)(iVar16 + 4) +
                        *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar6;
            }
            pCVar19[iVar20].rot.z = fVar9;
          }
          moby->state = '\x02';
        }
      }
    }
    else if (bVar1 < 3) {
      fVar3 = pfVar27[1];
      fVar9 = -(g_FrameTime * 5.0 - (moby->pos).z);
      (moby->pos).z = fVar9;
      pCVar19 = Cuboids;
      if (fVar3 != -NAN) {
        pvVar10 = g_MobyInstance[(int)fVar3].pVar;
        iVar20 = *(int *)((int)pvVar10 + 0x24);
        fVar3 = Cuboids[iVar20].pos.y - (moby->pos).y;
        fVar4 = Cuboids[iVar20].pos.x - (moby->pos).x;
        fVar9 = fVar9 - Cuboids[iVar20].pos.z;
        fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        *(float *)(puVar14 + 0x10) = fVar9;
        fVar9 = ABS(fVar9);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar14 + 0x7c) = fVar3;
        *(float *)((int)puVar14 + 0x84) = fVar6 - fVar9;
        fVar3 = 0.0;
        uVar30 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar14 + 0x7c));
        if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
        fVar7 = ABS(*(float *)(puVar14 + 0x10));
        if (*(float *)((int)puVar14 + 0x84) - 0.0 < 0.0) {
          fVar7 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        fVar5 = fVar3;
        if (0.0 < fVar4) {
          lVar21 = uVar26 - 0x150;
          lVar25 = uVar26 - 0x90;
          lVar24 = uVar26 - 0xa0;
          lVar31 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0xcc) = fVar4;
          *(float *)((int)puVar14 + 0xc4) = fVar4;
          *(float *)(puVar14 + 0x19) = fVar4;
          *(float *)(puVar14 + 0x18) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0xc4) = *(float *)((int)puVar14 + 0xc4) * fVar7;
          *(float *)(puVar14 + 0x19) = *(float *)(puVar14 + 0x19) * fVar4;
          *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xb0) * fVar4 * fVar4;
            iVar11 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar25 = uVar26 - 0xa0;
          pfVar28 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar25;
          do {
            fVar4 = *pfVar28;
            fVar7 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xc0) * fVar4;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
            lVar24 = lVar24 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar24 = 2;
          lVar21 = lVar22;
          fVar4 = fVar3;
          do {
            iVar11 = (int)lVar21;
            iVar16 = (int)lVar25;
            lVar21 = lVar21 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar4 = fVar4 + *(float *)(iVar11 + 0xc0) + *(float *)(iVar16 + 4) +
                    *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          fVar5 = (fVar4 + 0.7853982) * fVar9 + fVar6;
        }
        *(float *)((int)pvVar10 + 0x14) = -fVar5;
        fVar9 = (moby->pos).x - pCVar19[iVar20].pos.x;
        fVar7 = (moby->pos).y - pCVar19[iVar20].pos.y;
        fVar4 = ABS(fVar9);
        fVar6 = ABS(fVar7);
        *(float *)(puVar14 + 0xe) = fVar9;
        *(float *)((int)puVar14 + 0x74) = fVar7;
        *(float *)(puVar14 + 0xf) = fVar4 - fVar6;
        uVar30 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar14 + 0xe));
        if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
          fVar9 = fVar6;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar30 << 2));
        fVar7 = ABS(*(float *)((int)puVar14 + 0x74));
        if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
          fVar7 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        if (0.0 < fVar9) {
          lVar21 = uVar26 - 0x150;
          lVar24 = uVar26 - 0xc0;
          lVar25 = uVar26 - 0xb0;
          lVar31 = 2;
          fVar9 = (fVar7 - fVar9) / (fVar7 + fVar9);
          fVar7 = fVar9 * fVar9;
          *(float *)((int)puVar14 + 0xac) = fVar9;
          *(float *)((int)puVar14 + 0xa4) = fVar9;
          *(float *)(puVar14 + 0x15) = fVar9;
          *(float *)(puVar14 + 0x14) = fVar9;
          fVar9 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0xa4) = *(float *)((int)puVar14 + 0xa4) * fVar7;
          *(float *)(puVar14 + 0x15) = *(float *)(puVar14 + 0x15) * fVar9;
          *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar9 * fVar7;
          do {
            *(float *)((int)lVar21 + 0xa0) = *(float *)((int)lVar21 + 0x90) * fVar9 * fVar9;
            iVar20 = (int)lVar24;
            lVar21 = lVar21 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar9 * fVar9;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar25 = uVar26 - 0xc0;
          pfVar28 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar25;
          do {
            fVar9 = *pfVar28;
            fVar7 = pfVar28[1];
            pfVar28 = pfVar28 + 2;
            *(float *)((int)lVar21 + 0xa0) = *(float *)((int)lVar21 + 0xa0) * fVar9;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
            lVar24 = lVar24 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar21 = 2;
          do {
            iVar20 = (int)lVar22;
            iVar11 = (int)lVar25;
            lVar22 = lVar22 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar20 + 0xa0) + *(float *)(iVar11 + 4) +
                    *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar6 + fVar4;
        }
        *(float *)((int)pvVar10 + 0x18) = fVar3;
        fVar9 = (moby->pos).z;
      }
      if ((moby->animationId == '\0') && (fVar9 - pfVar27[3] <= 0.0)) {
        MB_SetAnimationNoBlend(moby,1,0);
        fVar9 = (moby->pos).z;
      }
      if (fVar9 <= pfVar27[3]) {
        (moby->pos).z = pfVar27[3];
        moby->state = '\x03';
      }
    }
    else if (bVar1 < 4) {
      if ((moby->updateId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x02') {
          puVar14[0x24] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x124));
        }
        moby->state = ((byte)(ZERO_MASK((0x2da - (uint)moby->oClass))) & 6) + 4;
      }
    }
    else {
      iVar20 = 0;
      uVar26 = uVar30;
      do {
        iVar11 = *(int *)((int)uVar26 + 0x14);
        if (((iVar11 != -1) && (g_MobyInstance + iVar11 != (MobyInstance *)0x0)) &&
           (uVar2 = g_MobyInstance[iVar11].state, uVar2 != 0xfd && uVar2 != 0xfe)) {
          return;
        }
        iVar20 = iVar20 + 1;
        uVar26 = uVar26 + 4;
      } while (iVar20 < 3);
      if ((g_heroStateType != 7) && (g_heroStateType != 0x14)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x18,0x4363cc);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar32,8,uVar30);
        *(undefined2 *)(pfVar27 + 2) = uVar12;
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 == 10) {
    (moby->pos).z = pfVar27[3];
  }
  else if (bVar1 == 8) {
    if (g_gameMode != GAME_MODE_SCENE) {
      MB_UnlockLevel(Kerwan);
      MB_ToastMessageByIndex(3);
      fVar9 = pfVar27[1];
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      pMVar18 = g_MobyInstance;
      if (fVar9 != -NAN) {
        (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[(int)fVar9].uid] =
             g_MobyInstance[(int)fVar9].levelFlagIdx + '\x02';
        bVar1 = pMVar18[(int)pfVar27[1]].levelFlagIdx;
        if ((bVar1 == 0xff) ||
           (((&g_CheckpointLevelFlags)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
          (&g_Checkpoint.objState[0])[(short)pMVar18[(int)pfVar27[1]].uid] = bVar1 + 2;
        }
      }
      pMVar18 = g_MobyInstance;
      if (pfVar27[0xf] != -NAN) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x1c,0x4363cc);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x2c,
                            ZEXT48(g_MobyInstance[(int)pfVar27[0xf]].pVar));
        *(undefined4 *)((int)g_MobyInstance[(int)pfVar27[0xf]].pVar + 0x2cU & 0xfffffffc) = uVar13;
        pMVar18[(int)pfVar27[0xf]].setByGroup = '\x01';
        if ((pfVar27[0xd] != -NAN) && (pfVar27[0xe] != -NAN)) {
          g_MobyInstance[(int)pfVar27[0xd]].setByGroup = '\x02';
          g_MobyInstance[(int)pfVar27[0xe]].setByGroup = '\x02';
          SaveCheckpointMobyVar
                    (&g_MobyInstance[(int)pfVar27[0xd]].setByGroup,1,g_MobyInstance + (int)pfVar27[0xd],
                     1,(int *)&g_CheckpointLive.vars);
          SaveCheckpointMobyVar
                    (&g_MobyInstance[(int)pfVar27[0xe]].setByGroup,1,g_MobyInstance + (int)pfVar27[0xe],
                     1,(int *)&g_CheckpointLive.vars);
        }
      }
      SetLevelFlag(moby->levelFlagIdx);
      fVar9 = pfVar27[0xc];
      if (fVar9 != -NAN) {
        SetSpawnPoint((Vec4 *)&Cuboids[(int)fVar9].pos,(Vec4 *)&Cuboids[(int)fVar9].rot);
      }
      memcard_Save(0,-1);
      Space_EnableShip();
      moby->state = '\n';
    }
  }
  else if (bVar1 == 7) {
    if (g_gameMode != GAME_MODE_SCENE) {
      mode_sceneInit(4);
      moby->state = '\b';
    }
  }
  else if (bVar1 == 6) {
    if (g_gameMode != GAME_MODE_SCENE) {
      PlayInfobotMovie(3);
      moby->state = '\a';
    }
  }
  else if ((bVar1 == 5) && (*(short *)(pfVar27 + 2) == 0)) {
    *(short *)((int)pfVar27 + 10) = moby->drawDistance;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    mode_sceneInit(3);
    moby->state = '\x06';
  }
  return;
}


// 0x0437408 (0x14 bytes)
void M790_00437408(void)

{
  DAT_0085a1cc = 0x10000;
  return;
}


