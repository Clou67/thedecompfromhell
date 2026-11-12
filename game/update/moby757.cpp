// game/update/moby757.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x44e100-0x44ecac
#include "game/update/moby757.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1118.h"
#include "game/update/moby755.h"
#include "idol/fastfunc.h"

// 0x044e100 (0x4dc bytes)
// inlined: FastAtan2 @0x44e2a4
// strings: 00871c80: 'oppp' (raw)

MobyInstance *
M757_0044e100(int param_1,float *param_2,f32 *param_3,undefined4 param_4)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  undefined8 uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x120;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x26] = in_LR;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  puVar8[0x1a] = unaff_r27;
  puVar8[0x1d] = unaff_r30;
  puVar8[0x1c] = unaff_r29;
  puVar8[0x1b] = unaff_r28;
  puVar8[0x1e] = unaff_r31;
  pMVar12 = CreateMoby(SANDSHARK_EGG);
  if (pMVar12 != (MobyInstance *)0x0) {
    pvVar4 = pMVar12->pVar;
    (pMVar12->pos).x = *param_3;
    (pMVar12->pos).y = param_3[1];
    (pMVar12->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar12->updateDistance = -1;
    (pMVar12->pos).w = fVar1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    pMVar12->state = '\0';
    pMVar12->color = (int)((ulonglong)uVar21 >> 0x20);
    pMVar12->light = (int)uVar21;
    *(undefined4 *)((int)pvVar4 + 0x60) = param_4;
    *(undefined4 *)((int)pvVar4 + 0x20) = 0x200;
    dVar31 = 0.5;
    *(undefined4 *)((int)pvVar4 + 0x28) = 0x3f000000;
    fVar6 = DAT_00871c88;
    fVar5 = g_FrameTimeSq;
    *(undefined1 *)((int)pvVar4 + 0x3d) = 0;
    *(undefined4 *)((int)pvVar4 + 0x24) = 1;
    *(undefined4 *)((int)pvVar4 + 0x14) = 0x3a03126f;
    *(float *)((int)pvVar4 + 0x10) = fVar6 * fVar5;
    *(float *)((int)pvVar4 + 0x18) = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    *(float *)((int)pvVar4 + 0x1c) = param_2[2];
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar3 = ABS(param_2[1]);
    *(float *)(puVar8 + 0x12) = fVar2 - fVar3;
    dVar32 = 0.0;
    uVar18 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    uVar15 = uVar18 << 2 | 0x735900;
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = fVar2;
    if (*(float *)(puVar8 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    if (*(float *)(puVar8 + 0x12) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)((int)uVar15 + 4);
    dVar28 = dVar32;
    if (0.0 < fVar6) {
      lVar19 = uVar11 - 0x110;
      lVar17 = uVar11 - 0x8c;
      lVar16 = uVar11 - 0x7c;
      lVar23 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = fVar6;
      *(float *)(puVar8 + 0x13) = fVar6;
      *(float *)((int)puVar8 + 0x9c) = fVar6;
      *(float *)((int)puVar8 + 0x94) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3;
      *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar6 * fVar6;
        iVar22 = (int)lVar17;
        lVar19 = lVar19 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      uVar15 = uVar11 - 0x8c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = 4;
      uVar18 = uVar15;
      lVar16 = lVar14;
      do {
        fVar6 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)uVar18 + 4) = *(float *)((int)uVar18 + 4) * fVar3;
        uVar18 = uVar18 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar16 = 2;
      do {
        iVar22 = (int)lVar14;
        iVar13 = (int)uVar15;
        lVar14 = lVar14 + 0x10;
        uVar15 = uVar15 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x94)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    MB_StartKick(dVar28,pMVar12,pvVar4,uVar15,0,1,0);
    iVar22 = 0;
    pMVar12->state = '\x01';
    dVar28 = -1.0;
    dVar29 = -0.15000000596046448;
    dVar30 = 0.15000000596046448;
    do {
      *(f32 *)(puVar8 + 0xe) = (pMVar12->pos).x;
      *(f32 *)((int)puVar8 + 0x74) = (pMVar12->pos).y;
      *(f32 *)(puVar8 + 0xf) = (pMVar12->pos).z;
      *(f32 *)((int)puVar8 + 0x7c) = (pMVar12->pos).w;
      dVar24 = (double)MB_randRangeFloat((float)dVar28,(float)dVar32);
      *(float *)(puVar8 + 0x11) = (float)((double)*(float *)(puVar8 + 0x11) + dVar24);
      dVar24 = (double)MB_randRangeFloat((float)dVar29,(float)dVar30);
      *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0x10) + dVar24);
      dVar24 = (double)MB_randRangeFloat((float)dVar29,(float)dVar30);
      fVar5 = (float)((double)*(float *)((int)puVar8 + 0x84) + dVar24);
      fVar3 = *(float *)(puVar8 + 0x10);
      fVar2 = *(float *)(puVar8 + 0x11);
      dVar24 = (double)g_FrameTime;
      *(float *)((int)puVar8 + 0x84) = fVar5;
      puVar10 = PTR_PTR_00871c84;
      uVar9 = DAT_00871c80;
      *(float *)(puVar8 + 0xe) = *(float *)(puVar8 + 0xe) + fVar3;
      *(float *)((int)puVar8 + 0x74) = *(float *)((int)puVar8 + 0x74) + fVar5;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) + fVar2;
      dVar27 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5);
      fVar6 = (float)(dVar24 / dVar27);
      dVar24 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar24 = (double)(fVar3 * fVar6);
      }
      dVar25 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar25 = (double)(fVar5 * fVar6);
      }
      dVar26 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar26 = (double)(fVar2 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar24 = (double)(fVar3 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar25 = (double)(fVar5 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar26 = (double)(fVar2 * fVar6);
      }
      *(float *)(puVar8 + 0x10) = (float)dVar24;
      *(float *)((int)puVar8 + 0x84) = (float)dVar25;
      *(float *)(puVar8 + 0x11) = (float)dVar26;
      iVar13 = MB_randRange(0x14,0x28);
      puVar8[0x17] = (longlong)iVar13;
      puVar8[0x17] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar8[0x17] + dVar31));
      uVar7 = *(undefined4 *)((int)puVar8 + 0xbc);
      uVar21 = MB_randRange(0x14,0x28);
      SpawnPart_4(uVar11 - 0xb0,uVar11 - 0xa0,uVar9,puVar10,uVar7,0x28,uVar21,1);
      iVar22 = iVar22 + 1;
    } while (iVar22 < 0x14);
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x044e618 (0x530 bytes)
// inlined: FastAtan2 @0x44e818
void M757_0044e618(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  Cuboid *pCVar20;
  ulonglong uVar21;
  int iVar24;
  ulonglong uVar22;
  longlong lVar23;
  int iVar27;
  longlong lVar25;
  longlong lVar26;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar26 = uVar21 - 0x100;
  puVar11 = (ulonglong *)lVar26;
  *puVar11 = uVar21;
  puVar11[0x22] = in_LR;
  puVar11[0x1e] = in_f30;
  puVar11[0x1f] = in_f31;
  puVar11[0x1c] = unaff_r30;
  puVar11[0x1d] = unaff_r31;
  iVar27 = *(int *)(param_1 + 0x78);
  iVar24 = *(int *)(iVar27 + 200);
  puVar11[0x1b] = unaff_r29;
  puVar11[0x1a] = unaff_r28;
  puVar11[0x19] = unaff_r27;
  if (iVar24 == 1) {
    iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar27 + 0xb0));
    pMVar19 = g_MobyInstance;
    if (iVar24 == 0) {
      *(undefined4 *)(iVar27 + 200) = 0;
      Hud_SetEntryValueById(*(int *)(iVar27 + 0xcc),0);
      *(undefined4 *)(iVar27 + 0xcc) = 0xffffffff;
      Hud_SetEntryValueById(*(int *)(iVar27 + 0xd0),0);
      *(undefined4 *)(iVar27 + 0xd0) = 0xffffffff;
    }
    else if ((*(int *)(iVar27 + 0xb4) == 0) && (*(int *)(iVar27 + 0xb8) == 0)) {
      iVar24 = *(int *)(iVar27 + 0xc0);
      iVar8 = *(int *)(iVar27 + 0xc4);
      *(undefined4 *)(iVar27 + 200) = 2;
      Hud_SetEntryValueById(*(int *)(iVar27 + 0xcc),0);
      *(undefined4 *)(iVar27 + 0xcc) = 0xffffffff;
      Hud_SetEntryValueById(*(int *)(iVar27 + 0xd0),0);
      uVar9 = *(uint *)(iVar27 + 0xbc);
      *(undefined4 *)(iVar27 + 0xd0) = 0xffffffff;
      pCVar20 = Cuboids;
      iVar27 = (int)(((ulonglong)uVar9 & 0x1ffffff) << 7);
      *(float *)(param_1 + 0x10) = Cuboids[uVar9].pos.x;
      *(float *)(param_1 + 0x14) = pCVar20[uVar9].pos.y;
      *(float *)(param_1 + 0x18) = pCVar20[uVar9].pos.z;
      *(float *)(param_1 + 0x1c) = pCVar20[uVar9].pos.w;
      uVar10 = *(uint *)((int)&(pCVar20->matrix).v0.x + iVar27);
      uVar9 = *(uint *)((int)&(pCVar20->matrix).v0.y + iVar27);
      fVar2 = ABS(*(float *)((int)&(pCVar20->matrix).v0.x + iVar27));
      fVar4 = ABS(*(float *)((int)&(pCVar20->matrix).v0.y + iVar27));
      *(float *)(puVar11 + 0x12) = fVar2 - fVar4;
      fVar1 = 0.0;
      uVar22 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar3 = fVar2;
      if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
        fVar4 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar3) {
        lVar28 = uVar21 - 0xf0;
        lVar25 = uVar21 - 0x6c;
        lVar23 = uVar21 - 0x5c;
        lVar30 = 2;
        fVar4 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x14) = fVar4;
        *(float *)(puVar11 + 0x13) = fVar4;
        *(float *)((int)puVar11 + 0x9c) = fVar4;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar3;
        *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar4;
        *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar4 * fVar3;
        do {
          *(float *)((int)lVar28 + 0x94) = *(float *)((int)lVar28 + 0x84) * fVar4 * fVar4;
          iVar27 = (int)lVar25;
          lVar28 = lVar28 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar27 + 4) * fVar4 * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar28 = uVar21 - 0x6c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar30 = 4;
        lVar23 = lVar28;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar29;
          fVar3 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar25 + 0x94) = *(float *)((int)lVar25 + 0x94) * fVar4;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        do {
          iVar27 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          iVar12 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar27 + 0x94) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar2;
      }
      *(float *)(param_1 + 0x48) = fVar1;
      dVar31 = (double)FastWrapRot(pMVar19[iVar24].rotation.x,-1.5707964);
      pMVar19[iVar24].rotation.x = (float)dVar31;
      dVar31 = (double)FastWrapRot(pMVar19[iVar8].rotation.x,1.5707964);
      pMVar19[iVar8].rotation.x = (float)dVar31;
      puVar11[0x17] = (longlong)(int)(animationSpeed * 16.5);
      FadeToBlack(*(undefined4 *)((int)puVar11 + 0xbc));
      fVar1 = *(float *)(param_1 + 0x48);
      fVar2 = fVar1 + 1.5707963;
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar4 = *(float *)(param_1 + 0x14);
      fVar13 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar13 = fVar3;
      }
      fVar3 = fVar7 * fVar7;
      fVar14 = fVar13 * fVar13;
      fVar17 = fVar3 * fVar3 * fVar7;
      fVar2 = *(float *)(param_1 + 0x10);
      fVar15 = fVar14 * fVar14 * fVar13;
      fVar18 = fVar3 * fVar17;
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0;
      fVar16 = fVar14 * fVar15;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      *(float *)((int)puVar11 + 0x74) =
           (fVar3 * fVar18 * 2.601887e-06 +
           fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
           3.0 + fVar4;
      *(undefined4 *)((int)puVar11 + 0x7c) = uVar6;
      *(undefined4 *)(puVar11 + 0xf) = uVar5;
      *(float *)(puVar11 + 0xe) =
           (fVar14 * fVar16 * 2.601887e-06 +
           fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13)
           * 3.0 + fVar2;
      dVar31 = (double)FastWrapRot(fVar1,3.1415927);
      *(float *)(puVar11 + 0x11) = (float)dVar31;
      Hero_Warp((float *)(puVar11 + 0xe),(float *)(puVar11 + 0x10),0,1);
    }
  }
  else if ((iVar24 == 0) &&
          (iVar24 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar27 + 0xb0)),
          iVar24 != 0)) {
    *(undefined4 *)(iVar27 + 200) = 1;
    iVar24 = RegisterHUDCallback
                       (0x15,2000,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar27 + 0xb4),100);
    *(int *)(iVar27 + 0xd0) = iVar24;
    iVar24 = RegisterHUDCallback
                       (0x16,0x7d1,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar27 + 0xb8),10);
    *(int *)(iVar27 + 0xcc) = iVar24;
  }
  return;
}


// 0x044eb48 (0x164 bytes)
// strings: 00658188: 'Surfer Bob'

/* Moby 757 */

void UpdateMoby_757(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  short sVar4;
  
  pvVar2 = moby->pVar;
  M757_0044e618();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    *(undefined4 *)((int)pvVar2 + 200) = 0;
    *(char **)((int)pvVar2 + 0x20) = "Surfer Bob";
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    sVar4 = ((ushort)(ZERO_MASK((*(uint *)((int)pvVar2 + 0xa4) & 2))) &
            (short)(ZERO_MASK((uint)g_MiscLevelFlags.Zoomerator)) - 1U) + 4;
    *(ushort *)((int)pvVar2 + 2) =
         sVar4 + ((ushort)(ZERO_MASK((*(uint *)((int)pvVar2 + 0xa4) & 1))) &
                 ((ushort)((ulonglong)
                           (LZCOUNT((uint)LZCOUNT((uint)g_MiscLevelFlags.Zoomerator) >> 5 ^ 1) << 0x20
                           ) >> 0x25) ^ 1) - sVar4);
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar3 = *(uint *)((int)pvVar2 + 0xa4);
    *(uint *)((int)pvVar2 + 0xa4) = uVar3 | 1;
    if ((*(short *)((int)pvVar2 + 6) == 1) || (*(short *)((int)pvVar2 + 6) == 3)) {
      *(uint *)((int)pvVar2 + 0xa4) = uVar3 | 3;
    }
  }
  return;
}


