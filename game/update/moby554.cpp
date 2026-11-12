// game/update/moby554.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3b1fd0-0x3b3364
#include "game/update/moby554.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby259.h"
#include "idol/fastfunc.h"

// 0x03b1fd0 (0x220 bytes)
void M554_003b1fd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar18 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(param_2 + 0x14) - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x10) - fVar2;
  fVar4 = *(float *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar7 + 0x11) = 0;
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)((int)puVar7 + 0x7c) = uVar5;
  *(float *)((int)puVar7 + 0x74) = fVar9;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(float *)((int)puVar7 + 0x84) = fVar10;
  *(float *)(puVar7 + 0xe) = fVar10;
  *(undefined4 *)((int)puVar7 + 0x94) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  *(float *)(puVar7 + 0xf) = fVar3 - fVar4;
  *(float *)(puVar7 + 0x10) = -fVar9;
  fVar3 = DAT_008457b0;
  *(undefined4 *)(puVar7 + 0x13) = 0x3f800000;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar7 + 0x14) = fVar2;
  *(float *)(puVar7 + 0x15) = fVar4;
  *(float *)((int)puVar7 + 0xa4) = fVar1;
  *(undefined4 *)((int)puVar7 + 0xac) = uVar5;
  uVar5 = DAT_008457b8;
  *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
  puVar7[0x29] = unaff_r31;
  puVar7[0x28] = unaff_r30;
  *(float *)(puVar7 + 0x15) = fVar4 + fVar3;
  uVar12 = GetEffectTex(uVar5);
  puVar7[0x25] = uVar12;
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar7[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_010c9f44,DAT_00845740,DAT_010c9f48,DAT_00845744,0x80);
  puVar7[0x27] = uVar12;
  lVar21 = 4;
  puVar16 = &DAT_00845794;
  puVar17 = &DAT_00845790;
  lVar14 = uVar11 - 0xa0;
  puVar13 = &DAT_00845750;
  lVar19 = lVar18;
  do {
    uVar5 = *puVar17;
    uVar6 = *puVar16;
    puVar17 = puVar17 + 2;
    *(undefined4 *)((int)lVar19 + 0x100) = uVar5;
    uVar5 = DAT_008457bc;
    puVar16 = puVar16 + 2;
    *(undefined4 *)((int)lVar19 + 0x104) = uVar6;
    *(undefined4 *)((int)lVar18 + 0xf0) = uVar5;
    lVar19 = lVar19 + 8;
    lVar18 = lVar18 + 4;
    puVar15 = (undefined4 *)lVar14;
    *puVar15 = *puVar13;
    puVar15[1] = puVar13[1];
    puVar15[2] = puVar13[2];
    puVar8 = puVar13 + 3;
    puVar13 = puVar13 + 4;
    puVar15[3] = *puVar8;
    lVar14 = lVar14 + 0x10;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  iVar20 = 0;
  do {
    FastDrawQuad(uVar11 - 0xa0,uVar11 - 0xe0,0,EffectTexHeaders,9);
    iVar20 = iVar20 + 1;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) + DAT_008457b4;
  } while (iVar20 < 4);
  return;
}


// 0x03b21f0 (0xbc bytes)
void M554_003b21f0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  
  puVar7 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar7 != (ushort *)0x0) {
    do {
      iVar5 = worldUpdateTime;
      pMVar6 = g_MobyInstance + (*puVar7 & 0x7fff);
      if (pMVar6->oClass == 0x228) {
        piVar2 = (int *)pMVar6->pVar;
        if (piVar2[1] != worldUpdateTime) {
          iVar3 = *piVar2;
          if (iVar3 != 0) {
            iVar4 = *(int *)(iVar3 + 0x78);
            piVar2[1] = worldUpdateTime;
            *(int *)(iVar4 + 4) = iVar5;
            M554_003b1fd0(pMVar6,iVar3);
          }
        }
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03b22ac (0x14 bytes)
void M554_003b22ac(void)

{
  DAT_0084580c = 0x10000;
  return;
}


// 0x03b22e0 (0x580 bytes)
// inlined: FastAtan2 @0x3b24ac
undefined8 M554_003b22e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  Vec4 *pVVar14;
  ulonglong uVar15;
  longlong lVar16;
  int32_t iVar17;
  ulonglong uVar18;
  longlong lVar19;
  short sVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined8 uVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar16 = uVar15 - 0xf0;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar15;
  puVar10[0x20] = in_LR;
  puVar10[0x1b] = in_f29;
  puVar10[0x1c] = in_f30;
  puVar10[0x1d] = in_f31;
  puVar10[0x16] = unaff_r27;
  iVar8 = *(int *)(param_1 + 0x78);
  puVar10[0x17] = unaff_r28;
  sVar20 = *(short *)(iVar8 + 0xba);
  fVar4 = *(float *)(param_1 + 0x14);
  iVar12 = (int)((longlong)sVar20 << 4);
  pSVar9 = Splines[*(int *)(iVar8 + 0xac)];
  fVar5 = *(float *)(param_1 + 0x10);
  dVar31 = (double)*(float *)((int)&pSVar9->points[0].y + iVar12);
  dVar30 = (double)*(float *)((int)&pSVar9->points[0].x + iVar12);
  fVar1 = (float)(dVar31 - (double)fVar4);
  fVar2 = (float)(dVar30 - (double)fVar5);
  dVar32 = (double)*(float *)((int)&pSVar9->points[0].z + iVar12);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)(dVar32 - (double)fVar6);
  fVar7 = *(float *)(iVar8 + 0xa8);
  puVar10[0x15] = unaff_r26;
  puVar10[0x1a] = unaff_r31;
  fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar27 = 0.0;
  iVar12 = (int)((longlong)sVar20 << 4);
  puVar10[0x18] = unaff_r29;
  uVar24 = 0;
  puVar10[0x19] = unaff_r30;
  fVar7 = fVar7 / fVar11;
  dVar26 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar26 = (double)(fVar3 * fVar7);
  }
  dVar28 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  dVar29 = dVar27;
  if (0.0 - fVar11 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar28 = (double)(fVar1 * fVar7);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar29 = (double)(fVar2 * fVar7);
  }
  fVar1 = (float)((double)fVar4 + dVar28);
  fVar2 = (float)((double)fVar5 + dVar29);
  *(float *)(param_1 + 0x18) = (float)((double)fVar6 + dVar26);
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar2 = *(float *)((int)&pSVar9->points[0].x + iVar12) - fVar2;
  fVar1 = *(float *)((int)&pSVar9->points[0].y + iVar12) - fVar1;
  fVar4 = ABS(fVar2);
  fVar3 = ABS(fVar1);
  *(float *)(puVar10 + 0xf) = fVar2;
  *(float *)((int)puVar10 + 0x7c) = fVar1;
  *(float *)(puVar10 + 0x10) = fVar4 - fVar3;
  fVar1 = *(float *)(iVar8 + 0xbc);
  uVar18 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar10 + 0xf));
  if (*(float *)(puVar10 + 0x10) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar6 = ABS(*(float *)((int)puVar10 + 0x7c));
  if (*(float *)(puVar10 + 0x10) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar22 = uVar15 - 0xe0;
    lVar19 = uVar15 - 0x5c;
    lVar21 = uVar15 - 0x6c;
    lVar25 = 2;
    fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar10 + 0x12) = fVar2;
    *(float *)(puVar10 + 0x11) = fVar2;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    *(float *)((int)puVar10 + 0x84) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar4;
    *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar2;
    *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar22 + 0x84) = *(float *)((int)lVar22 + 0x74) * fVar2 * fVar2;
      iVar12 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar22 = uVar15 - 0x6c;
    lVar25 = 4;
    pfVar23 = (float *)&DAT_007358e0;
    lVar19 = lVar22;
    lVar21 = lVar16;
    do {
      fVar2 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar21 + 0x84) = *(float *)((int)lVar21 + 0x84) * fVar2;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar19 = 2;
    do {
      iVar12 = (int)lVar16;
      iVar13 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar12 + 0x84)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
  }
  dVar26 = (double)FastWrapRot((float)dVar27,fVar1);
  OrganicDeltAng
            ((float)dVar26,DAT_0071f418 * 2.0943952,DAT_0071f418 * 2.0943952,
             g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),0x720000,
             (float *)(iVar8 + 0xa4));
  if (*(short *)(iVar8 + 0xb8) < 1) {
    fVar1 = (float)(dVar31 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar32 - (double)*(float *)(param_1 + 0x18));
    if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar8 + 0xa8) * 2.0) &&
       (sVar20 = *(short *)(iVar8 + 0xba) + -1, *(short *)(iVar8 + 0xba) = sVar20, sVar20 == -1)) {
      uVar24 = 1;
    }
    fVar3 = *(float *)(param_1 + 0x14) - pSVar9->points[0].y;
    fVar4 = *(float *)(param_1 + 0x10) - pSVar9->points[0].x;
    fVar1 = pSVar9->points[0].z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar10 + 0x74) = 0;
    fVar2 = fVar2 - fVar1;
    OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,g_FrameTime * 10.0,(float *)((int)puVar10 + 0x74),
               0x720000,(float *)(iVar8 + 0xa8));
  }
  else {
    fVar1 = (float)(dVar31 - (double)*(float *)(param_1 + 0x14));
    fVar2 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
    fVar3 = (float)(dVar32 - (double)*(float *)(param_1 + 0x18));
    iVar17 = pSVar9->cnt;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < *(float *)(iVar8 + 0xa8) * 2.0) {
      iVar17 = pSVar9->cnt;
      sVar20 = *(short *)(iVar8 + 0xba) + 1;
      *(short *)(iVar8 + 0xba) = sVar20;
      if (sVar20 == iVar17) {
        uVar24 = 1;
      }
    }
    pVVar14 = pSVar9->points + iVar17 + -1;
    fVar3 = *(float *)(param_1 + 0x14) - pVVar14->y;
    fVar4 = *(float *)(param_1 + 0x10) - pVVar14->x;
    fVar1 = pVVar14->z;
    fVar2 = *(float *)(param_1 + 0x18);
    *(undefined4 *)(puVar10 + 0xe) = 0;
    fVar2 = fVar2 - fVar1;
    OrganicDelt
              (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),DAT_0071f418 * 3.0,
               DAT_0071f418 * 3.0,g_FrameTime * 10.0,(float *)(puVar10 + 0xe),0x720000,
               (float *)(iVar8 + 0xa8));
  }
  if (*(int *)((int)&pSVar9->points[0].w + (int)((longlong)*(short *)(iVar8 + 0xba) << 4)) ==
      0x42280000) {
    *(undefined4 *)(iVar8 + 0xbc) = 0;
  }
  dVar26 = (double)FastWrapRot(*(float *)(iVar8 + 0xc0),*(float *)(iVar8 + 0xa8));
  *(float *)(iVar8 + 0xc0) = (float)dVar26;
  FastQuaternionToEuler(iVar8 + 0x70,0);
  return uVar24;
}


// 0x03b2868 (0x9c4 bytes)
// inlined: FastAtan2 @0x3b2ad4, FastAtan2 @0x3b2d48, FastAtan2 @0x3b2f88
/* Moby 553 */

void M554_003b2868(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  void *pvVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  Vec4 *pVVar19;
  int iVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  short sVar21;
  float *pfVar23;
  longlong lVar22;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x140;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x2a] = in_LR;
  puVar12[0x26] = unaff_r30;
  pvVar10 = moby->pVar;
  puVar12[0x25] = unaff_r29;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  puVar12[0x27] = unaff_r31;
  iVar20 = *(int *)((int)pvVar10 + 0xac);
  fVar5 = (moby->pos).w;
  fVar6 = (moby->rotation).x;
  puVar12[0x24] = unaff_r28;
  *(f32 *)((int)puVar12 + 0x7c) = fVar5;
  fVar5 = (moby->rotation).y;
  pSVar11 = Splines[iVar20];
  *(float *)(puVar12 + 0xe) = -fVar2;
  *(float *)((int)puVar12 + 0x74) = -fVar3;
  *(f32 *)(puVar12 + 0x10) = fVar6;
  *(float *)(puVar12 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).z;
  *(f32 *)((int)puVar12 + 0x84) = fVar5;
  fVar5 = (moby->rotation).w;
  *(f32 *)(puVar12 + 0x11) = fVar6;
  *(f32 *)((int)puVar12 + 0x8c) = fVar5;
  if (pvVar10 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar10 + 0xc4) = 0xffffffff;
      if (*(int *)((int)pvVar10 + 0xa0) != 0) {
        AttachManipulator(moby,0,(int)pvVar10 + 0x60);
        pSVar11 = Splines[*(int *)((int)pvVar10 + 0xac)];
        moby->state = '\x01';
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          *(undefined2 *)((int)pvVar10 + 0xb8) = 0xffff;
          *(short *)((int)pvVar10 + 0xba) = (short)pSVar11->cnt + -2;
          pVVar19 = pSVar11->points + pSVar11->cnt + -1;
          fVar2 = pVVar19->x;
          fVar3 = pVVar19->y;
          fVar4 = pVVar19->z;
          fVar7 = pVVar19->w;
        }
        else {
          *(undefined2 *)((int)pvVar10 + 0xb8) = 1;
          *(undefined2 *)((int)pvVar10 + 0xba) = 1;
          fVar2 = pSVar11->points[0].x;
          fVar3 = pSVar11->points[0].y;
          fVar4 = pSVar11->points[0].z;
          fVar7 = pSVar11->points[0].w;
        }
        sVar9 = *(short *)((int)pvVar10 + 0xba);
        (moby->pos).x = fVar2;
        (moby->pos).y = fVar3;
        (moby->pos).z = fVar4;
        iVar20 = (int)((longlong)sVar9 << 4);
        (moby->pos).w = fVar7;
        fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
        fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar12 + 0x15) = fVar2;
        *(float *)((int)puVar12 + 0xac) = fVar3;
        *(float *)(puVar12 + 0x16) = fVar4 - fVar7;
        fVar2 = 0.0;
        uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar12 + 0x15));
        if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar12 + 0xac));
        if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        if (0.0 < fVar3) {
          lVar17 = uVar15 - 0x130;
          lVar22 = uVar15 - 0x4c;
          lVar24 = uVar15 - 0x3c;
          lVar25 = 2;
          fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x20) = fVar3;
          *(float *)(puVar12 + 0x1f) = fVar3;
          *(float *)((int)puVar12 + 0xfc) = fVar3;
          *(float *)((int)puVar12 + 0xf4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar4;
          *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar3;
          *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xe4) * fVar3 * fVar3;
            iVar20 = (int)lVar22;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar15 - 0x4c;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar4 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0xf4) = *(float *)((int)lVar17 + 0xf4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            iVar14 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
        }
        (moby->rotation).z = fVar2;
      }
    }
    else {
      if (((*(short *)((int)pvVar10 + 0xb8) < 1) || (*(int *)((int)pvVar10 + 0xb4) == -1)) ||
         (iVar20 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0xb4)), iVar20 == 0)
         ) {
        if (((*(short *)((int)pvVar10 + 0xb8) < 0) && (*(int *)((int)pvVar10 + 0xb0) != -1)) &&
           (iVar20 = MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0xb0)),
           iVar20 != 0)) {
          *(undefined2 *)((int)pvVar10 + 0xba) = 1;
          fVar2 = pSVar11->points[0].x;
          (moby->pos).x = fVar2;
          fVar3 = pSVar11->points[0].y;
          (moby->pos).y = fVar3;
          (moby->pos).z = pSVar11->points[0].z;
          (moby->pos).w = pSVar11->points[0].w;
          *(undefined2 *)((int)pvVar10 + 0xb8) = 1;
          iVar20 = (int)((longlong)*(short *)((int)pvVar10 + 0xba) << 4);
          fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
          fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
          fVar4 = ABS(fVar2);
          fVar7 = ABS(fVar3);
          *(float *)(puVar12 + 0x12) = fVar2;
          *(float *)((int)puVar12 + 0x94) = fVar3;
          *(float *)(puVar12 + 0x13) = fVar4 - fVar7;
          fVar2 = 0.0;
          uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar12 + 0x12));
          if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
            fVar3 = fVar7;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)((int)puVar12 + 0x94));
          if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
            fVar13 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar17 = uVar15 - 0x130;
            lVar24 = uVar15 - 0x7c;
            lVar22 = uVar15 - 0x8c;
            lVar25 = 2;
            fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x18) = fVar3;
            *(float *)(puVar12 + 0x17) = fVar3;
            *(float *)((int)puVar12 + 0xbc) = fVar3;
            *(float *)((int)puVar12 + 0xb4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4;
            *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
            *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar24 = uVar15 - 0x8c;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar24;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar17 = 2;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar20 + 0xb4) + *(float *)(iVar14 + 4) +
                      *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
          }
          (moby->rotation).z = fVar2;
        }
      }
      else {
        iVar20 = pSVar11->cnt;
        *(undefined2 *)((int)pvVar10 + 0xb8) = 0xffff;
        pVVar19 = pSVar11->points + iVar20 + -1;
        *(short *)((int)pvVar10 + 0xba) = (short)iVar20 + -2;
        fVar2 = pVVar19->x;
        (moby->pos).x = fVar2;
        fVar3 = pVVar19->y;
        (moby->pos).y = fVar3;
        (moby->pos).z = pVVar19->z;
        (moby->pos).w = pVVar19->w;
        iVar20 = (int)((longlong)*(short *)((int)pvVar10 + 0xba) << 4);
        fVar2 = *(float *)((int)&pSVar11->points[0].x + iVar20) - fVar2;
        fVar3 = *(float *)((int)&pSVar11->points[0].y + iVar20) - fVar3;
        fVar4 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)(puVar12 + 0x14) = fVar3;
        *(float *)((int)puVar12 + 0xa4) = fVar4 - fVar7;
        fVar2 = 0.0;
        uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar12 + 0x9c));
        if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)(puVar12 + 0x14));
        if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
          fVar13 = fVar4;
        }
        if (0.0 < fVar3) {
          lVar17 = uVar15 - 0x130;
          lVar24 = uVar15 - 0x5c;
          lVar22 = uVar15 - 0x6c;
          lVar25 = 2;
          fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x1c) = fVar3;
          *(float *)(puVar12 + 0x1b) = fVar3;
          *(float *)((int)puVar12 + 0xdc) = fVar3;
          *(float *)((int)puVar12 + 0xd4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar4;
          *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar3;
          *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar3 * fVar3;
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar15 - 0x6c;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar4 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar14 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar14 + 4) +
                    *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar7;
        }
        (moby->rotation).z = fVar2;
      }
      if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
        moby->state = '\x03';
      }
    }
    goto LAB_003b31c4;
  }
  if (bVar1 < 3) {
    if (g_standingOnMoby != moby) {
      moby->state = '\x01';
    }
    goto LAB_003b31c4;
  }
  if (3 < bVar1) goto LAB_003b31c4;
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    iVar20 = *(int *)((int)pvVar10 + 0xc4);
    if (iVar20 != -1) {
      iVar20 = IsMobyPlayingSound(moby,iVar20);
      if (iVar20 != 0) goto LAB_003b3120;
      iVar20 = *(int *)((int)pvVar10 + 0xc4);
    }
    if (iVar20 == -1) {
      iVar20 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar10 + 0xc4) = iVar20;
    }
  }
LAB_003b3120:
  iVar20 = M554_003b22e0((longlong)(int)moby);
  if (iVar20 != 0) {
    iVar20 = *(int *)((int)pvVar10 + 0xc4);
    if (((iVar20 != -1) && (g_SoundChannels[iVar20].pMoby == moby)) &&
       (g_SoundChannels[iVar20].state != '\0')) {
      sound_Kill(iVar20);
    }
    *(undefined4 *)((int)pvVar10 + 0xc4) = 0xffffffff;
    moby->state = '\x02';
    sVar21 = 0;
    sVar9 = *(short *)((int)pvVar10 + 0xb8);
    *(undefined4 *)((int)pvVar10 + 0xbc) = 0x40490fdb;
    *(short *)((int)pvVar10 + 0xb8) = -sVar9;
    if (-1 < sVar9) {
      sVar21 = (short)pSVar11->cnt + -1;
    }
    *(short *)((int)pvVar10 + 0xba) = sVar21;
  }
LAB_003b31c4:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar12 + 0xe) = *(float *)(puVar12 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar12 + 0x74) = *(float *)((int)puVar12 + 0x74) + fVar2;
  *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) + fVar3;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar12 + 0xe),uVar15 - 0xc0,
             (longlong)(int)moby + 0x40);
  return;
}


// 0x03b322c (0x14 bytes)
void M554_003b322c(void)

{
  DAT_0084587c = 0x10000;
  return;
}


// 0x03b3248 (0x11c bytes)
/* Moby 554 */

void UpdateMoby_554(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  piVar1 = (int *)moby->pVar;
  iVar7 = FastDecTimerS32(ZEXT48(piVar1) + 4);
  if (iVar7 != 0) {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if (14.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = loadVectorLeftIndexed(4,0x3b3240);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar7 = *piVar1;
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,ZEXT48(piVar1))
      ;
      *(undefined4 *)((uint)(piVar1 + 1) & 0xfffffffc) = uVar2;
      if (Splines[iVar7] != (Spline *)0x0) {
        uVar5.piece<0,4>() = (moby->pos).x;
        uVar5.piece<4,4>() = (moby->pos).y;
        uVar6.piece<0,4>() = (moby->pos).z;
        uVar6.piece<4,4>() = (moby->pos).w;
        FUN_0031d8e0(Splines[iVar7],4,uVar5,uVar6);
      }
    }
  }
  return;
}


