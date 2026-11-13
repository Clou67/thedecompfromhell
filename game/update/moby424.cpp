// game/update/moby424.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x368c84-0x36a198
#include "game/update/moby424.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0368c84 (0x14 bytes)
void M424_00368c84(void)

{
  DAT_0084102c = 0x10000;
  return;
}


// 0x0368c98 (0x12c bytes)
void M424_00368c98(int param_1)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *pfVar20;
  Spline *pSVar21;
  longlong lVar22;
  
  pSVar21 = Splines[*(int *)(*(int *)(param_1 + 0x78) + 0x8c)];
  if (pSVar21->cnt == 8) {
    pfVar20 = (float *)&DAT_00841050;
    lVar22 = 8;
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xd0);
    fVar3 = *(float *)(param_1 + 0xe0);
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xd4);
    fVar6 = *(float *)(param_1 + 0xe4);
    fVar7 = *(float *)(param_1 + 200);
    fVar8 = *(float *)(param_1 + 0xd8);
    fVar9 = *(float *)(param_1 + 0xe8);
    fVar10 = *(float *)(param_1 + 0xcc);
    fVar11 = *(float *)(param_1 + 0xdc);
    fVar12 = *(float *)(param_1 + 0xec);
    fVar13 = *(float *)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0x18);
    do {
      fVar16 = pfVar20[1];
      fVar17 = *pfVar20;
      fVar18 = pfVar20[2];
      fVar19 = pfVar20[3];
      pfVar20 = pfVar20 + 4;
      pSVar21->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
      pSVar21->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
      pSVar21->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
      pSVar21->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
      pSVar21 = (Spline *)pSVar21->points;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}


// 0x0368df8 (0x2b8 bytes)
void M424_00368df8(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x7c);
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xec),g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 0xec) = (float)dVar3;
  dVar13 = 3.141592502593994;
  dVar12 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar10 = 0.008333025500178337;
  dVar9 = -0.0001980741071747616;
  dVar8 = 2.601886990305502e-06;
  dVar5 = (double)(float)(3.141592502593994 - dVar3);
  if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(-3.141592502593994 - dVar3);
  if ((double)(float)(-3.141592502593994 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar6 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar3 = (double)(float)(dVar5 * dVar6);
  *(float *)(param_1 + 0x18) =
       ((float)(dVar5 * dVar3) * 2.601887e-06 +
       (float)(dVar3 * -0.0001980741071747616 +
              (double)(float)(dVar6 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204 +
                                            dVar4)))) * 0.25 + *(float *)(param_1 + 0x18);
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xf0),g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xf0) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar7 = 0.0872664600610733;
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar3 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar6 = (double)(float)(dVar5 * dVar3);
  dVar5 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x44),
                             (float)((double)(float)(dVar5 * dVar6) * dVar8 +
                                    (double)(float)(dVar6 * dVar9 +
                                                   (double)(float)(dVar3 * dVar10 +
                                                                  (double)(float)((double)(float)(
                                                  dVar5 * dVar4) * dVar11 + dVar4)))) * 0.08726646);
  *(float *)(param_1 + 0x44) = (float)dVar5;
  dVar3 = (double)FastWrapRot(*(float *)(iVar2 + 0xf4),g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xf4) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar13 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar13 = dVar5;
  }
  dVar5 = (double)(float)(dVar13 * dVar13);
  dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar13));
  dVar3 = (double)(float)(dVar5 * dVar12);
  dVar5 = (double)FastWrapRot
                            (*(float *)(param_1 + 0x40),
                             (float)((double)(float)((double)(float)(dVar5 * dVar3) * dVar8 +
                                                    (double)(float)(dVar3 * dVar9 +
                                                                   (double)(float)(dVar12 * dVar10 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar5 * dVar13) * dVar11 + dVar13))
                                                  )) * dVar7));
  *(float *)(param_1 + 0x40) = (float)dVar5;
  uVar1 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x44)) - uVar1;
  if (dVar5 <= 0.1745329201221466) {
    if (dVar5 < -0.1745329201221466) {
      *(undefined4 *)(param_1 + 0x40) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3e32b8c2;
  }
  if (iVar2 < 0x3e32b8c3) {
    if (iVar2 < -0x3e32b8c2) {
      *(undefined4 *)(param_1 + 0x44) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3e32b8c2;
  }
  return;
}


// 0x03690c0 (0x9cc bytes)
// inlined: FastAtan2 @0x369334, FastAtan2 @0x3695cc, FastAtan2 @0x36979c, FastAtan2 @0x36996c
void M424_003690c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Spline *pSVar10;
  Spline *pSVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  LevelId LVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  uint uVar26;
  Vec4 *pVVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x100;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar19;
  iVar7 = *(int *)(param_1 + 0x78);
  pSVar10 = Splines[*(int *)(iVar7 + 0x88)];
  pSVar11 = Splines[*(int *)(iVar7 + 0x80)];
  pVVar27 = pSVar10->points + pSVar10->cnt + -1;
  fVar1 = g_heroPosition.y - pSVar11->points[0].y;
  fVar2 = g_heroPosition.y - pVVar27->y;
  fVar4 = g_heroPosition.x - pVVar27->x;
  fVar5 = g_heroPosition.x - pSVar11->points[0].x;
  fVar15 = g_heroPosition.z - pVVar27->z;
  fVar16 = g_heroPosition.z - pSVar11->points[0].z;
  pSVar12 = Splines[*(int *)(iVar7 + 0x84)];
  fVar3 = g_heroPosition.y - pSVar12->points[0].y;
  fVar14 = g_heroPosition.x - pSVar12->points[0].x;
  fVar5 = SQRT(fVar16 * fVar16 + fVar5 * fVar5 + fVar1 * fVar1);
  fVar2 = SQRT(fVar15 * fVar15 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar1 = g_heroPosition.z - pSVar12->points[0].z;
  uVar8 = *(uint *)(iVar7 + 0x100);
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1e] = unaff_r30;
  puVar13[0x1d] = unaff_r29;
  fVar4 = fVar2;
  if (fVar5 < fVar2) {
    fVar4 = fVar5;
  }
  uVar26 = (uint)(fVar5 < fVar2);
  if (SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar3 * fVar3) < fVar4) {
    uVar26 = 3;
  }
  if (uVar8 != uVar26) {
    *(uint *)(iVar7 + 0x100) = uVar26;
    uVar6 = *(ushort *)(param_1 + 0x34);
    fVar1 = 0.0;
    *(undefined4 *)(iVar7 + 0xe4) = 0;
    *(undefined4 *)(iVar7 + 0x104) = 0x3f800000;
    iVar9 = *(int *)(param_1 + 0x24);
    *(ushort *)(param_1 + 0x34) = uVar6 & 0xfffe;
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(undefined4 *)(iVar7 + 0x124) = 1;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar9 + 0x10);
    if (uVar26 < 2) {
      if (uVar26 == 0) {
        iVar9 = pSVar10->cnt;
        pVVar27 = pSVar10->points + iVar9 + -1;
        fVar2 = pVVar27->x;
        *(float *)(iVar7 + 0x60) = fVar2;
        fVar3 = pVVar27->y;
        *(float *)(iVar7 + 100) = fVar3;
        *(float *)(iVar7 + 0x68) = pVVar27->z;
        *(float *)(iVar7 + 0x6c) = pVVar27->w;
        fVar2 = pSVar10->points[iVar9 + -2].x - fVar2;
        fVar3 = pSVar10->points[iVar9 + -2].y - fVar3;
        fVar4 = ABS(fVar2);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar13 + 0x54) = fVar2;
        *(float *)(puVar13 + 0xb) = fVar3;
        *(float *)((int)puVar13 + 0x5c) = fVar4 - fVar5;
        uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x54) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x5c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0xb) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar13 + 0x54));
        if (*(float *)((int)puVar13 + 0x5c) - 0.0 < 0.0) {
          fVar2 = fVar5;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar5 = ABS(*(float *)(puVar13 + 0xb));
        if (*(float *)((int)puVar13 + 0x5c) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar2) {
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)(puVar13 + 0x18) = fVar2;
          *(float *)((int)puVar13 + 0xc4) = fVar2;
          *(float *)(puVar13 + 0x19) = fVar2;
          *(float *)((int)puVar13 + 0xcc) = fVar2;
          lVar20 = uVar19 - 0xf0;
          fVar2 = fVar5 * fVar5;
          lVar22 = uVar19 - 0x40;
          lVar24 = uVar19 - 0x30;
          *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar5;
          *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar2;
          *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xb0) * fVar2 * fVar2;
            iVar9 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar19 - 0x40;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar22 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xc0) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar9 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar9 + 0xc0) + *(float *)(iVar17 + 4) +
                    *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
        }
        LVar18 = Level;
        *(float *)(iVar7 + 0x78) = fVar1;
        *(undefined4 *)(iVar7 + 0xe4) = 0x3f800000;
        *(undefined4 *)(iVar7 + 0x104) = 0;
        if (g_LevelFlags[LVar18][*(int *)(iVar7 + 0x98)] == -1) {
          *(Spline **)(iVar7 + 0x120) = pSVar12;
        }
        else if (g_LevelFlags[LVar18][*(int *)(iVar7 + 0x94)] == -1) {
          *(Spline **)(iVar7 + 0x120) = pSVar11;
        }
        else {
          fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
          fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
          if ((32.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (worldUpdateTime < 5)) {
            *(undefined1 *)(param_1 + 0x31) = 0;
            *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(param_1 + 0x94) = 0;
          }
        }
      }
      else {
        fVar2 = pSVar11->points[0].x;
        *(float *)(iVar7 + 0x60) = fVar2;
        fVar3 = pSVar11->points[0].y;
        *(float *)(iVar7 + 100) = fVar3;
        *(float *)(iVar7 + 0x68) = pSVar11->points[0].z;
        *(float *)(iVar7 + 0x6c) = pSVar11->points[0].w;
        fVar2 = pSVar11->points[1].x - fVar2;
        fVar3 = pSVar11->points[1].y - fVar3;
        fVar4 = ABS(fVar2);
        fVar5 = ABS(fVar3);
        *(float *)(puVar13 + 9) = fVar2;
        *(float *)((int)puVar13 + 0x4c) = fVar3;
        *(float *)(puVar13 + 10) = fVar4 - fVar5;
        uVar23 = (ulonglong)(*(uint *)(puVar13 + 9) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x4c) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar13 + 9));
        if (*(float *)(puVar13 + 10) - 0.0 < 0.0) {
          fVar2 = fVar5;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar5 = ABS(*(float *)((int)puVar13 + 0x4c));
        if (*(float *)(puVar13 + 10) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar2) {
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)(puVar13 + 0x14) = fVar2;
          *(float *)((int)puVar13 + 0xa4) = fVar2;
          *(float *)(puVar13 + 0x15) = fVar2;
          *(float *)((int)puVar13 + 0xac) = fVar2;
          lVar24 = uVar19 - 0xf0;
          fVar2 = fVar5 * fVar5;
          lVar20 = uVar19 - 0x60;
          lVar22 = uVar19 - 0x50;
          *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
          *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar2;
          *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0x90) * fVar2 * fVar2;
            iVar9 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar19 - 0x60;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar22 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0xa0) = *(float *)((int)lVar20 + 0xa0) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar9 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar9 + 0xa0) + *(float *)(iVar17 + 4) +
                    *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
        }
        *(float *)(iVar7 + 0x78) = fVar1;
        *(Spline **)(iVar7 + 0x120) = pSVar11;
      }
    }
    else if (uVar26 < 3) {
      fVar2 = pSVar10->points[0].x;
      *(float *)(iVar7 + 0x60) = fVar2;
      fVar3 = pSVar10->points[0].y;
      *(float *)(iVar7 + 100) = fVar3;
      *(float *)(iVar7 + 0x68) = pSVar10->points[0].z;
      *(float *)(iVar7 + 0x6c) = pSVar10->points[0].w;
      fVar2 = pSVar10->points[1].x - fVar2;
      fVar3 = pSVar10->points[1].y - fVar3;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)((int)puVar13 + 0x3c) = fVar2;
      *(float *)(puVar13 + 8) = fVar3;
      *(float *)((int)puVar13 + 0x44) = fVar4 - fVar5;
      uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x3c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x44) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 8) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar13 + 0x3c));
      if (*(float *)((int)puVar13 + 0x44) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = ABS(*(float *)(puVar13 + 8));
      if (*(float *)((int)puVar13 + 0x44) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x10) = fVar2;
        *(float *)((int)puVar13 + 0x84) = fVar2;
        *(float *)(puVar13 + 0x11) = fVar2;
        *(float *)((int)puVar13 + 0x8c) = fVar2;
        lVar24 = uVar19 - 0xf0;
        fVar2 = fVar5 * fVar5;
        lVar20 = uVar19 - 0x80;
        lVar22 = uVar19 - 0x70;
        *(float *)((int)puVar13 + 0x84) = *(float *)((int)puVar13 + 0x84) * fVar5;
        *(float *)(puVar13 + 0x11) = *(float *)(puVar13 + 0x11) * fVar2;
        *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar24 + 0x80) = *(float *)((int)lVar24 + 0x70) * fVar2 * fVar2;
          iVar9 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar24 = uVar19 - 0x80;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar22 = lVar24;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x80) = *(float *)((int)lVar20 + 0x80) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar9 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar9 + 0x80) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                  + *(float *)(iVar17 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
      }
      *(float *)(iVar7 + 0x78) = fVar1;
      *(Spline **)(iVar7 + 0x120) = pSVar10;
    }
    else if (uVar26 < 4) {
      fVar2 = pSVar12->points[0].x;
      *(float *)(iVar7 + 0x60) = fVar2;
      fVar3 = pSVar12->points[0].y;
      *(float *)(iVar7 + 100) = fVar3;
      *(float *)(iVar7 + 0x68) = pSVar12->points[0].z;
      *(float *)(iVar7 + 0x6c) = pSVar12->points[0].w;
      fVar2 = pSVar12->points[1].x - fVar2;
      fVar3 = pSVar12->points[1].y - fVar3;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar13 + 6) = fVar2;
      *(float *)((int)puVar13 + 0x34) = fVar3;
      *(float *)(puVar13 + 7) = fVar4 - fVar5;
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x34) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 6));
      if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0x34));
      if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar13 + 0xc) = fVar2;
        *(float *)((int)puVar13 + 100) = fVar2;
        *(float *)(puVar13 + 0xd) = fVar2;
        *(float *)((int)puVar13 + 0x6c) = fVar2;
        lVar24 = uVar19 - 0xf0;
        fVar2 = fVar5 * fVar5;
        lVar20 = uVar19 - 0xa0;
        lVar22 = uVar19 - 0x90;
        *(float *)((int)puVar13 + 100) = *(float *)((int)puVar13 + 100) * fVar5;
        *(float *)(puVar13 + 0xd) = *(float *)(puVar13 + 0xd) * fVar2;
        *(float *)((int)puVar13 + 0x6c) = *(float *)((int)puVar13 + 0x6c) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar24 + 0x60) = *(float *)((int)lVar24 + 0x50) * fVar2 * fVar2;
          iVar9 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar24 = uVar19 - 0xa0;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar22 = lVar24;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x60) = *(float *)((int)lVar20 + 0x60) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar9 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar9 + 0x60) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                  + *(float *)(iVar17 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
      }
      *(float *)(iVar7 + 0x78) = fVar1;
      *(Spline **)(iVar7 + 0x120) = pSVar12;
    }
  }
  return;
}


// 0x0369ab0 (0x1b0 bytes)
bool M424_00369ab0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  piVar2 = *(int **)(iVar1 + 0x120);
  OrganicDelt
            (*(float *)(iVar1 + 0x104),g_FrameTimeSq * 0.1,g_FrameTimeSq * 0.1,
             g_FrameTime * 0.08,(float *)(iVar1 + 0xe4),0x720000,(float *)(iVar1 + 0xe8));
  dVar4 = (double)FastWrapRot(*(float *)(iVar1 + 0x110),*(float *)(iVar1 + 0xe8) * 50.0);
  iVar3 = *piVar2;
  *(float *)(iVar1 + 0x110) = (float)dVar4;
  MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xe4) * (float)(longlong)(iVar3 + -1)),piVar2);
  dVar4 = (double)*(float *)(iVar1 + 0x104);
  dVar5 = 0.0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  if (0.2 <= ABS((float)((double)*(float *)(iVar1 + 0xe4) - dVar4))) {
    *(undefined4 *)(iVar1 + 0x108) = 0;
  }
  else {
    OrganicDelt
              (3.14159,g_FrameTimeSq * 2.0943952,g_FrameTimeSq * 2.0943952,
               g_FrameTime * 6.2831855,(float *)(iVar1 + 0x108),0x369a8c,
               (float *)(iVar1 + 0x10c));
    dVar4 = (double)*(float *)(iVar1 + 0x104);
  }
  if (dVar4 == dVar5) {
    dVar4 = (double)FastWrapRot(*(float *)(iVar1 + 0x78),3.14159);
    *(float *)(iVar1 + 0x78) = (float)dVar4;
  }
  dVar4 = (double)FastWrapRot(*(float *)(iVar1 + 0x78),*(float *)(iVar1 + 0x108));
  *(float *)(iVar1 + 0x78) = (float)dVar4;
  return *(int *)(iVar1 + 0xe4) == *(int *)(iVar1 + 0x104);
}


// 0x0369c60 (0xcc bytes)
void M424_00369c60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  if ((int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2) < 0x3f666667) {
    if (*(Spline **)(iVar1 + 0x120) == Splines[*(int *)(iVar1 + 0x80)]) {
      MB_ShowPersistentMessage(10,0x1f50);
    }
    else if (*(Spline **)(iVar1 + 0x120) == Splines[*(int *)(iVar1 + 0x88)]) {
      MB_ShowPersistentMessage(10,0x1f4f);
    }
    else {
      MB_ShowPersistentMessage(10,0x1f4e);
    }
  }
  else {
    MB_ShowPersistentMessage(10,0x1f4d);
  }
  return;
}


// 0x0369d38 (0x460 bytes)
/* Moby 424 */

void UpdateMoby_424(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Vec4 local_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar5 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  dVar8 = (double)(moby->pos).x;
  dVar9 = (double)(moby->pos).y;
  dVar10 = (double)(moby->pos).z;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (*(int *)((int)pvVar2 + 0x124) == 0) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (*(char *)((int)pvVar2 + 0xa1) == '\0') {
    AttachManipulator(moby,0,(int)pvVar2 + 0xa0);
  }
  dVar7 = (double)FastWrapRot
                            (*(float *)((int)pvVar2 + 0x110),g_FrameTime * 1.5707964);
  *(float *)((int)pvVar2 + 0x110) = (float)dVar7;
  MB_EulerToQuat((float *)((int)pvVar2 + 0xb0),(Vec3 *)((int)pvVar2 + 0x110));
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar2 + 0x11c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x118) = 0;
      *(undefined4 *)((int)pvVar2 + 0x114) = 0;
      *(undefined4 *)((int)pvVar2 + 0x110) = 0;
      if (*(int *)((int)pvVar2 + 0x80) == -1) {
        *(f32 *)((int)pvVar2 + 0x60) = (moby->pos).x;
        *(f32 *)((int)pvVar2 + 100) = (moby->pos).y;
        *(f32 *)((int)pvVar2 + 0x68) = (moby->pos).z;
        *(f32 *)((int)pvVar2 + 0x6c) = (moby->pos).w;
        *(f32 *)((int)pvVar2 + 0x70) = (moby->rotation).x;
        *(f32 *)((int)pvVar2 + 0x74) = (moby->rotation).y;
        *(f32 *)((int)pvVar2 + 0x78) = (moby->rotation).z;
        *(f32 *)((int)pvVar2 + 0x7c) = (moby->rotation).w;
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar2 + 0x124) = 1;
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x100) = 0xffffffff;
        *(undefined2 *)((int)pvVar2 + 0xe0) = 0xffff;
        M424_003690c0(lVar5);
        moby->updateDistance = -1;
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_standingOnMoby == moby) {
      if ((g_Help.state == 0) && (g_Help.message_id == -1)) {
        local_50 = g_heroPosition.x;
        local_4c = g_heroPosition.y;
        local_48 = g_heroPosition.z;
        local_44 = g_heroPosition.w;
        MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar2 + 0x8c));
        if (SQRT((g_heroPosition.z - local_48) * (g_heroPosition.z - local_48) +
                 (g_heroPosition.x - local_50) * (g_heroPosition.x - local_50) +
                 (g_heroPosition.y - local_4c) * (g_heroPosition.y - local_4c)) < 0.001) {
          pvVar3 = moby->pVar;
          uVar4 = (int)*(uint *)((int)pvVar3 + 0x104) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)((int)pvVar3 + 0x104)) - uVar4) < 0x3f666667) {
            if (*(Spline **)((int)pvVar3 + 0x120) == Splines[*(int *)((int)pvVar3 + 0x80)]) {
              MB_ShowPersistentMessage(10,0x1f50);
            }
            else if (*(Spline **)((int)pvVar3 + 0x120) == Splines[*(int *)((int)pvVar3 + 0x88)]) {
              MB_ShowPersistentMessage(10,0x1f4f);
            }
            else {
              MB_ShowPersistentMessage(10,0x1f4e);
            }
          }
          else {
            MB_ShowPersistentMessage(10,0x1f4d);
          }
          if ((((g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0) && (g_framesNotGrounded == 0)) &&
             (g_HelpMsgOwner == 10)) {
            moby->state = '\x03';
          }
        }
      }
    }
    else {
      M424_003690c0(lVar5);
    }
  }
  else if (bVar1 < 4) {
    DAT_00969ed2 = 5;
    DAT_00969ed4 = 5;
    DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar2 + 0x8c);
    iVar6 = M424_00369ab0(lVar5);
    if (iVar6 != 0) {
      M424_003690c0(lVar5);
      moby->state = '\x02';
    }
  }
  M424_00368df8(lVar5);
  if (*(int *)((int)pvVar2 + 0x8c) != -1) {
    M424_00368c98(lVar5);
  }
  local_60.x = (float)((double)(moby->pos).x - dVar8);
  local_60.y = (float)((double)(moby->pos).y - dVar9);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar10);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x70,
             lVar5 + 0x40);
  return;
}


