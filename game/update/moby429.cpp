// game/update/moby429.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3714d8-0x371ef4
#include <math.h>
#include "game/update/moby429.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/moby751.h"
#include "game/vendor.h"
#include "idol/mUnk.h"

// 0x03714d8 (0x14 bytes)
void M429_003714d8(void)

{
  DAT_00841564 = 0x10000;
  return;
}


// 0x0371520 (0x9d4 bytes)
// inlined: FastAtan2 @0x37188c, FastAtan2 @0x371b18
// strings: 006567a8: 'Deserter' | 006567b8: 'Soldier' | 0037150c: '?fff_q' (raw)

/* Moby 429 */

void UpdateMoby_429(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  int *piVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  float fVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x120;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x26] = in_LR;
  puVar12[0x21] = in_f29;
  puVar12[0x22] = in_f30;
  puVar12[0x23] = in_f31;
  puVar12[0x20] = unaff_r31;
  puVar12[0x1f] = unaff_r30;
  uVar3 = moby->state;
  pfVar9 = (float *)moby->pVar;
  puVar12[0x1e] = unaff_r29;
  puVar12[0x1d] = unaff_r28;
  puVar12[0x1c] = unaff_r27;
  if (uVar3 == '\x05') {
    fVar19 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if ((3.0 <= SQRT(fVar5 * fVar5 + fVar19 * fVar19)) || (pfVar9[0x4b] != 4.2039e-45)) {
      pfVar9[0x4c] = -NAN;
    }
    else {
      bVar4 = moby->levelFlagIdx;
      uVar8 = moby->uid;
      (&DAT_00a53964)[(short)uVar8] = bVar4 + 2;
      if ((bVar4 == 0xff) || (((&DAT_00a202c0)[bVar4] != -1 && (g_LevelFlags[Level][bVar4] == -1))))
      {
        (&DAT_00a545c4)[(short)uVar8] = bVar4 + 2;
      }
      if (pfVar9[0x4c] == -NAN) {
        fVar19 = (float)RegisterHUDCallback
                                  (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758
                                   ,&PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
        pfVar9[0x4c] = fVar19;
      }
      else {
        Hud_ShowEntryById((int)pfVar9[0x4c],10);
      }
      if (((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (999 < g_boltCount)) {
        g_boltCount = g_boltCount + -1000;
        FUN_0044cddc(g_MobyInstance + (int)pfVar9[0x4d]);
        moby->state = '\x06';
      }
    }
  }
  else if (uVar3 == '\x04') {
    piVar10 = (int *)pfVar9[0x18];
    iVar18 = *piVar10;
    iVar23 = (int)pfVar9[0x14] + iVar18 + (int)*(char *)(pfVar9 + 0x15);
    fVar24 = (float)(iVar23 - (iVar23 / iVar18) * iVar18);
    fVar19 = (float)piVar10[(int)fVar24 * 4 + 4] - (moby->pos).x;
    fVar5 = (float)piVar10[(int)fVar24 * 4 + 5] - (moby->pos).y;
    pfVar21 = (float *)&g_atanQuadrantTable;
    fVar6 = ABS(fVar19);
    fVar7 = ABS(fVar5);
    *(float *)(puVar12 + 0xe) = fVar19;
    *(float *)((int)puVar12 + 0x74) = fVar5;
    *(float *)(puVar12 + 0xf) = fVar6 - fVar7;
    dVar27 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar19 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar19 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar1 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar6;
    }
    dVar30 = dVar27;
    if (0.0 < fVar19) {
      lVar16 = uVar14 - 0x110;
      lVar22 = uVar14 - 0x88;
      lVar20 = uVar14 - 0x98;
      lVar25 = 2;
      fVar19 = (fVar1 - fVar19) / (fVar1 + fVar19);
      fVar6 = fVar19 * fVar19;
      *(float *)((int)puVar12 + 0x94) = fVar19;
      *(float *)((int)puVar12 + 0x8c) = fVar19;
      *(float *)(puVar12 + 0x12) = fVar19;
      *(float *)(puVar12 + 0x11) = fVar19;
      fVar19 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar6;
      *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x12) * fVar19;
      *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0x94) * fVar19 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar19 * fVar19;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar19 * fVar19;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0x98;
      pfVar21 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar19 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar19;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar23 = (int)lVar22;
        lVar17 = lVar17 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0x88)) +
                          *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) + *(float *)(iVar23 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar30,0x3fa99999a0000000,0x3fecccccc0000000,0x3fe0000000000000,moby,pfVar21,
               pfVar9 + 0x4a);
    dVar28 = (double)(moby->pos).y;
    iVar18 = (int)pfVar9[0x18] + (int)fVar24 * 0x10;
    dVar29 = (double)(moby->pos).x;
    dVar31 = (double)(moby->pos).z;
    fVar5 = (float)((double)*(float *)(iVar18 + 0x14) - dVar28);
    fVar7 = (float)((double)*(float *)(iVar18 + 0x10) - dVar29);
    fVar6 = (float)((double)*(float *)(iVar18 + 0x18) - dVar31);
    dVar33 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    fVar19 = (float)((double)(DAT_00841588 * g_FrameTime) / dVar33);
    dVar30 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar30 = (double)(fVar19 * fVar5);
    }
    dVar32 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar32 = (double)(fVar19 * fVar7);
    }
    dVar26 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar26 = (double)(fVar19 * fVar6);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar30 = (double)(fVar19 * fVar5);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar32 = (double)(fVar19 * fVar7);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar26 = (double)(fVar19 * fVar6);
    }
    fVar19 = (float)(dVar28 + dVar30);
    fVar5 = (float)(dVar29 + dVar32);
    fVar7 = (float)(dVar31 + dVar26);
    fVar6 = (float)((double)fVar19 - (double)*(float *)(iVar18 + 0x14));
    fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar18 + 0x10));
    fVar2 = (float)((double)fVar7 - (double)*(float *)(iVar18 + 0x18));
    (moby->pos).x = fVar5;
    (moby->pos).y = fVar19;
    (moby->pos).z = fVar7;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6) < 0.2) {
      if ((int)fVar24 < *(int *)pfVar9[0x18] + -1) {
        pfVar9[0x14] = fVar24;
      }
      else {
        DeleteMoby(moby);
      }
    }
  }
  else if (uVar3 == '\x03') {
    dVar27 = (double)BlendAnimFrame(moby);
    if ((12.0 <= dVar27) && (dVar27 <= 30.0)) {
      fVar19 = *(float *)((int)pfVar9[0x18] + 0x20) - (moby->pos).x;
      fVar5 = *(float *)((int)pfVar9[0x18] + 0x24) - (moby->pos).y;
      fVar6 = ABS(fVar19);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x7c) = fVar19;
      *(float *)(puVar12 + 0x10) = fVar5;
      *(float *)((int)puVar12 + 0x84) = fVar6 - fVar7;
      dVar27 = 0.0;
      uVar15 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
      fVar19 = ABS(*(float *)((int)puVar12 + 0x7c));
      if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
        fVar19 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar24 = ABS(*(float *)(puVar12 + 0x10));
      if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
        fVar24 = fVar6;
      }
      if (0.0 < fVar19) {
        lVar16 = uVar14 - 0x110;
        lVar20 = uVar14 - 0x78;
        lVar22 = uVar14 - 0x68;
        lVar25 = 2;
        fVar19 = (fVar24 - fVar19) / (fVar24 + fVar19);
        fVar6 = fVar19 * fVar19;
        *(float *)((int)puVar12 + 0xb4) = fVar19;
        *(float *)((int)puVar12 + 0xac) = fVar19;
        *(float *)(puVar12 + 0x16) = fVar19;
        *(float *)(puVar12 + 0x15) = fVar19;
        fVar19 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar6;
        *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar19;
        *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar19 * fVar6;
        do {
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar19 * fVar19;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar19 * fVar19;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x78;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar19 = *pfVar21;
          fVar6 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar19;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar23 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xa8)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar5);
      }
      OrganicDeltAngSpeed
                (dVar27,0x3fa99999a0000000,0x3fecccccc0000000,0x3fe0000000000000,moby,&DAT_003714f0,
                 pfVar9 + 0x4a);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x02') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 6.5);
        MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
      moby->state = '\x04';
    }
  }
  else if (uVar3 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      *(undefined1 *)(pfVar9 + 0x22) = 0xff;
      if (moby->animationId != '\x03') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 6.5);
        MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
      moby->state = '\x03';
    }
  }
  else if (uVar3 == '\x01') {
    if ((((uint)pfVar9[0x49] & 1) != 0) && (iVar18 = FUN_004d3870(moby,pfVar9 + 0x20), iVar18 != 0))
    {
      moby->state = '\x02';
    }
  }
  else if (uVar3 == '\0') {
    fVar19 = pfVar9[0x49];
    pfVar9[0x49] = (float)((uint)fVar19 | 1);
    if (pfVar9[0x30] == 0.0) {
      pfVar9[0x49] = (float)((uint)fVar19 & 0xfffffffe);
    }
    uVar13 = g_heroMobyPtr->light;
    moby->color = g_heroMobyPtr->color;
    moby->light = uVar13;
    MB_InitDefaultParams(pfVar9);
    pfVar9[0x11] = 0.25;
    pfVar9[0xf] = 0.03;
    pfVar9[0x10] = 0.3;
    fVar19 = DAT_00841588 * g_FrameTime;
    pfVar9[3] = 2.0;
    pfVar9[2] = 2.0;
    pfVar9[0xe] = (float)((uint)pfVar9[0xe] | 8);
    pfVar9[9] = fVar19;
    if ((int)pfVar9[0x19] < 0) {
      moby->state = '\x05';
    }
    else {
      pSVar11 = Splines[(int)pfVar9[0x19]];
      pfVar9[0x18] = (float)pSVar11;
      (moby->pos).x = pSVar11->points[0].x;
      (moby->pos).y = pSVar11->points[0].y;
      (moby->pos).z = pSVar11->points[0].z;
      fVar19 = pSVar11->points[0].w;
      pfVar9[0x14] = 0.0;
      (moby->pos).w = fVar19;
      moby->state = '\x03';
      if (moby->animationId != '\x03') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
    }
    if (pfVar9[0x4b] == 4.2039e-45) {
      pfVar9[0x4c] = -NAN;
      pfVar9[0x28] = (float)"Deserter";
    }
    else {
      pfVar9[0x28] = (float)"Soldier";
    }
  }
  return;
}


