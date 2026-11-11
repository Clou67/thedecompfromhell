// game/update/moby1326.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x24a5d4-0x24ab14
#include "game/update/moby1326.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x024a5d4 (0x14 bytes)
void M1326_0024a5d4(void)

{
  DAT_0078e5ac = 0x10000;
  return;
}


// 0x024a600 (0x514 bytes)
// inlined: FastAtan2 @0x24a720
/* Moby 1326 */

void UpdateMoby_1326(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  puVar9[0x17] = unaff_r31;
  puVar9[0x15] = unaff_r29;
  pvVar7 = moby->pVar;
  puVar9[0x16] = unaff_r30;
  puVar9[0x14] = unaff_r28;
  FastDecTimerS32(ZEXT48(pvVar7) + 4);
  if (moby->state == 0) {
    fVar1 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar1);
    fVar3 = ABS(fVar2);
    *(float *)(puVar9 + 0xe) = fVar1;
    *(float *)((int)puVar9 + 0x74) = fVar2;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar9 + 0xf) = fVar4 - fVar3;
    fVar2 = 0.0;
    uVar13 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x74));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar10 = fVar4;
    }
    if (0.0 < fVar5) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x34;
      lVar17 = uVar12 - 0x44;
      lVar20 = 2;
      fVar4 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x11) = fVar4;
      *(float *)(puVar9 + 0x10) = fVar4;
      *(float *)((int)puVar9 + 0x84) = fVar4;
      *(float *)((int)puVar9 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar5;
      *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar4;
      *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar4 * fVar4;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x44;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar15 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    dVar21 = (double)FastSubRots(fVar1,fVar2);
    if ((((dVar21 < 1.5707963705062866) &&
         (fVar1 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 4.0)) && (*(int *)((int)pvVar7 + 4) == 0)) &&
       (g_gameMode != GAME_MODE_SCENE)) {
      FUN_004d407c(moby,1);
      if (g_MiscLevelFlags.PremiumNanotech == false) {
        if (g_boltCount < 0xfa1) {
          MB_ShowPersistentMessage(1,0x2720);
        }
        else {
          iVar15 = MB_ShowPersistentMessage(1,0x271e);
          if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar15 != 0)) {
            g_MiscLevelFlags.PremiumNanotech = true;
            g_boltCount = g_boltCount + -4000;
            MB_UnlockTrophy(HIT_ME_MORE);
            g_heroMaxNanotech = 5;
            g_heroHealth = 5;
            mode_sceneInit(0);
            moby->state = '\x01';
          }
        }
      }
      else if ((g_MiscLevelFlags.UltraNanotech == false) && (*(int *)((int)pvVar7 + 4) == 0)) {
        if (g_boltCount < 0x7531) {
          MB_ShowPersistentMessage(1,0x2721);
        }
        else {
          iVar15 = MB_ShowPersistentMessage(1,0x271f);
          if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (iVar15 != 0)) {
            g_boltCount = g_boltCount + -30000;
            g_MiscLevelFlags.UltraNanotech = true;
            if (g_MiscLevelFlags.PremiumNanotech != false) {
              MB_UnlockTrophy(HIT_ME_MORE);
            }
            MB_UnlockTrophy(NANO_THIS);
            g_heroMaxNanotech = 8;
            g_heroHealth = 8;
            mode_sceneInit(1);
            moby->state = '\x01';
          }
        }
      }
    }
  }
  else if ((moby->state < 2) && (g_gameMode != GAME_MODE_SCENE)) {
    memcard_Save(0,-1);
    if (g_MiscLevelFlags.UltraNanotech == false) {
      MB_ToastMessage(0x271c,0xffffffffffffffff);
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    }
    else {
      MB_ToastMessage(0x271d,0xffffffffffffffff);
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    }
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0x10,0x24a5e8);
    auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                         auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar24);
    g_toastMsgTimer = 0xb4;
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    uVar8 = storeVectorElementWordIndexed(auVar22,4,ZEXT48(pvVar7));
    *(undefined4 *)((int)pvVar7 + 4U & 0xfffffffc) = uVar8;
    moby->state = '\0';
  }
  return;
}


