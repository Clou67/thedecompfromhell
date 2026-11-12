// game/update/moby818.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x46f7b0-0x470680
// shared update function UpdateMoby_{818_847}; registered for oClasses 818, 847
#include "game/update/moby818.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1826.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 818, 847
// 0x046f7b0 (0xed0 bytes)
// inlined: FastAtan2 @0x46fa18, FastAtan2 @0x46ff9c, FastAtan2 @0x470174, FastAtan2 @0x470378
/* Moby 818
   Moby 847 */

void UpdateMoby_818(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  Cylinder *pCVar16;
  ulonglong uVar17;
  float fVar21;
  int iVar22;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x160;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar17;
  puVar14[0x2e] = in_LR;
  puVar14[0x2b] = in_f31;
  puVar14[0x29] = unaff_r30;
  puVar14[0x2a] = unaff_r31;
  pfVar9 = (float *)moby->pVar;
  fVar2 = (moby->pos).z;
  puVar14[0x28] = unaff_r29;
  puVar14[0x27] = unaff_r28;
  puVar14[0x26] = unaff_r27;
  if (pfVar9 != (float *)0x0) {
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      fVar21 = pfVar9[8] - (moby->pos).x;
      fVar10 = pfVar9[9] - (moby->pos).y;
      fVar4 = ABS(fVar21);
      fVar3 = ABS(fVar10);
      *(float *)((int)puVar14 + 0x84) = fVar21;
      *(float *)(puVar14 + 0x11) = fVar10;
      *(float *)((int)puVar14 + 0x8c) = fVar4 - fVar3;
      dVar29 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x84) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x8c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x11) >> 0x1d) & 4;
      fVar21 = ABS(*(float *)((int)puVar14 + 0x84));
      if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
        fVar21 = fVar3;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar10 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar14 + 0x11));
      if (*(float *)((int)puVar14 + 0x8c) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      dVar32 = dVar29;
      if (0.0 < fVar21) {
        lVar19 = uVar17 - 0x150;
        lVar27 = uVar17 - 0x88;
        lVar23 = uVar17 - 0x98;
        lVar28 = 2;
        fVar21 = (fVar6 - fVar21) / (fVar6 + fVar21);
        fVar4 = fVar21 * fVar21;
        *(float *)((int)puVar14 + 0xd4) = fVar21;
        *(float *)((int)puVar14 + 0xcc) = fVar21;
        *(float *)(puVar14 + 0x1a) = fVar21;
        *(float *)(puVar14 + 0x19) = fVar21;
        fVar21 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0xcc) = *(float *)((int)puVar14 + 0xcc) * fVar4;
        *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar21;
        *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar21 * fVar4;
        do {
          *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 0xb8) * fVar21 * fVar21;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar21 * fVar21;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x98;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar21 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 200) = *(float *)((int)lVar19 + 200) * fVar21;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar23 = 2;
        lVar19 = lVar20;
        do {
          iVar22 = (int)lVar19;
          iVar26 = (int)lVar27;
          lVar19 = lVar19 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar22 + 200)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar10);
      }
      *(f32 *)((int)puVar14 + 0x74) = fVar2;
      OrganicDeltAng
                ((float)dVar32,g_FrameTimeSq * 3.1415927,g_FrameTimeSq * 3.1415927,
                 g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,pfVar9 + 4);
      (moby->rotation).x = pfVar9[4] * DAT_00877858;
      fVar21 = (moby->pos).x;
      fVar10 = (moby->pos).y;
      fVar3 = pfVar9[2];
      dVar32 = ABS((double)pfVar9[2]);
      fVar4 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
      dVar30 = ABS((double)fVar4);
      *(float *)((int)puVar14 + 0x7c) = fVar4;
      *(float *)(puVar14 + 0x10) = (float)(dVar30 - dVar32);
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x10) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar3 >> 0x1d) & 4;
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar14 + 0x7c));
      if ((double)*(float *)(puVar14 + 0x10) - dVar29 < 0.0) {
        dVar31 = dVar32;
      }
      if ((double)*(float *)(puVar14 + 0x10) - dVar29 < 0.0) {
        dVar32 = dVar30;
      }
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (dVar29 < dVar31) {
        lVar19 = uVar17 - 0x150;
        lVar23 = uVar17 - 0xb8;
        lVar27 = uVar17 - 0xa8;
        lVar28 = 2;
        fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
        fVar8 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0xb4) = fVar6;
        *(float *)((int)puVar14 + 0xac) = fVar6;
        *(float *)(puVar14 + 0x16) = fVar6;
        *(float *)(puVar14 + 0x15) = fVar6;
        fVar6 = fVar8 * fVar8;
        *(float *)((int)puVar14 + 0xac) = *(float *)((int)puVar14 + 0xac) * fVar8;
        *(float *)(puVar14 + 0x16) = *(float *)(puVar14 + 0x16) * fVar6;
        *(float *)((int)puVar14 + 0xb4) = *(float *)((int)puVar14 + 0xb4) * fVar6 * fVar8;
        do {
          *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0x98) * fVar6 * fVar6;
          iVar22 = (int)lVar23;
          lVar19 = lVar19 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0xb8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar8 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0xa8) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar19 = 2;
        do {
          iVar22 = (int)lVar20;
          iVar26 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0xa8)) +
                            *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                           *(float *)(iVar26 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
      }
      iVar22 = 0x470000;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      (moby->rotation).y = (float)-dVar29;
      fVar10 = fVar10 - pfVar9[9];
      dVar29 = 5.0;
      fVar21 = fVar21 - pfVar9[8];
      OrganicDelt
                (SQRT(fVar21 * fVar21 + fVar10 * fVar10),g_FrameTimeSq * 5.0,g_FrameTimeSq * 5.0,
                 g_FrameTime * 50.0,(float *)(puVar14 + 0xf),0x470000,pfVar9 + 5);
      OrganicDelt
                (pfVar9[10],(float)((double)g_FrameTimeSq * dVar29),
                 (float)((double)g_FrameTimeSq * 100.0),g_FrameTime * 150.0,
                 (float *)((int)puVar14 + 0x74),iVar22,pfVar9 + 2);
      fVar21 = (moby->rotation).z + 1.5707963;
      fVar10 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar10 = fVar21;
      }
      fVar3 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar21 = fVar3 * fVar3;
      fVar10 = fVar21 * fVar21 * fVar3;
      fVar4 = fVar21 * fVar10;
      fVar3 = (fVar21 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar21 * fVar3 * -0.16666657 + fVar3)
              * pfVar9[5];
      *pfVar9 = fVar3;
      fVar21 = (moby->rotation).z;
      fVar10 = 3.1415925 - fVar21;
      if (fVar21 - (3.1415925 - fVar21) < 0.0) {
        fVar10 = fVar21;
      }
      fVar4 = -3.1415925 - fVar21;
      if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
        fVar4 = fVar10;
      }
      fVar21 = fVar4 * fVar4;
      fVar10 = fVar21 * fVar21 * fVar4;
      fVar6 = fVar21 * fVar10;
      pfVar9[1] = (fVar21 * fVar6 * 2.601887e-06 +
                  fVar6 * -0.0001980741 +
                  fVar10 * 0.0083330255 + fVar21 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
      fVar3 = (moby->pos).x + fVar3;
      (moby->pos).x = fVar3;
      fVar21 = (moby->pos).y + pfVar9[1];
      (moby->pos).y = fVar21;
      (moby->pos).z = (moby->pos).z + pfVar9[2];
      fVar21 = fVar21 - pfVar9[9];
      fVar3 = fVar3 - pfVar9[8];
      if (SQRT(fVar3 * fVar3 + fVar21 * fVar21) < 0.5) {
        moby->state = '\x01';
        dVar29 = (double)MB_randRangeFloat(90.0,360.0);
        fVar21 = (float)FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        pfVar9[0xc] = fVar21;
      }
    }
    else if (uVar1 == '\x04') {
      iVar22 = FastDecTimerS32(pfVar9 + 0xc);
      if (iVar22 != 0) {
        moby->state = '\x05';
        pCVar16 = Cylinders;
        fVar21 = pfVar9[6];
        pfVar9[8] = Cylinders[(int)fVar21].pos.x;
        pfVar9[9] = pCVar16[(int)fVar21].pos.y;
        pfVar9[10] = pCVar16[(int)fVar21].pos.z;
        fVar21 = pCVar16[(int)fVar21].pos.w;
        moby->drawDistance = 0xff;
        pfVar9[0xb] = fVar21;
        fVar21 = 0.0;
        (moby->rotation).w = 0.0;
        (moby->rotation).z = 0.0;
        (moby->rotation).y = 0.0;
        (moby->rotation).x = 0.0;
        pfVar9[3] = 0.0;
        pfVar9[1] = 0.0;
        *pfVar9 = 0.0;
        pfVar9[2] = g_FrameTime * -75.0;
        fVar10 = pfVar9[8] - (moby->pos).x;
        fVar6 = pfVar9[9] - (moby->pos).y;
        fVar3 = ABS(fVar10);
        fVar4 = ABS(fVar6);
        *(float *)(puVar14 + 0x12) = fVar10;
        *(float *)((int)puVar14 + 0x94) = fVar6;
        *(float *)(puVar14 + 0x13) = fVar3 - fVar4;
        uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)(puVar14 + 0x12));
        if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
          fVar10 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar6 = ABS(*(float *)((int)puVar14 + 0x94));
        if (*(float *)(puVar14 + 0x13) - 0.0 < 0.0) {
          fVar6 = fVar3;
        }
        fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (0.0 < fVar10) {
          lVar19 = uVar17 - 0x150;
          lVar27 = uVar17 - 0x68;
          lVar23 = uVar17 - 0x78;
          lVar28 = 2;
          fVar10 = (fVar6 - fVar10) / (fVar6 + fVar10);
          fVar6 = fVar10 * fVar10;
          *(float *)((int)puVar14 + 0xf4) = fVar10;
          *(float *)((int)puVar14 + 0xec) = fVar10;
          *(float *)(puVar14 + 0x1e) = fVar10;
          *(float *)(puVar14 + 0x1d) = fVar10;
          fVar10 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0xec) = *(float *)((int)puVar14 + 0xec) * fVar6;
          *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar10;
          *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar10 * fVar6;
          do {
            *(float *)((int)lVar19 + 0xe8) = *(float *)((int)lVar19 + 0xd8) * fVar10 * fVar10;
            iVar22 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar17 - 0x78;
          pfVar24 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar23 = lVar27;
          do {
            fVar10 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar19 + 0xe8) = *(float *)((int)lVar19 + 0xe8) * fVar10;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar22 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar26 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            fVar21 = fVar21 + *(float *)(iVar22 + 0xe8) + *(float *)(iVar26 + 4) +
                     *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar21 = (fVar21 + 0.7853982) * fVar4 + fVar3;
        }
        (moby->rotation).z = fVar21;
        pfVar9[5] = 0.0;
      }
    }
    else if (uVar1 == '\x03') {
      dVar29 = -1.5707963705062866;
      OrganicDeltAng
                (-1.5707964,g_FrameTimeSq * 3.1415927,g_FrameTimeSq * 3.1415927,
                 g_FrameTime * 25.132742,&(moby->rotation).y,0x720000,pfVar9 + 4);
      dVar29 = (double)FastSubRots((moby->rotation).y,(float)dVar29);
      if (dVar29 < 0.01745329238474369) {
        OrganicDelt
                  (501.0,g_FrameTimeSq * 50.0,g_FrameTimeSq * 400.0,g_FrameTime * 200.0,
                   &(moby->pos).z,0x720000,pfVar9 + 5);
      }
      fVar2 = (moby->pos).z;
      uVar12 = (int)fVar2 >> 0x1f;
      if (0x43f9ffff < (int)((uVar12 >> 1 ^ (uint)fVar2) - uVar12)) {
        moby->state = '\x04';
        moby->drawDistance = 0;
        dVar29 = (double)MB_randRangeFloat(90.0,360.0);
        fVar21 = (float)FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
        pfVar9[0xc] = fVar21;
      }
    }
    else if (uVar1 == '\x02') {
      fVar2 = (moby->pos).x;
      fVar21 = pfVar9[8];
      fVar10 = (moby->pos).x;
      fVar11 = (moby->pos).y;
      fVar3 = pfVar9[9];
      fVar4 = (moby->pos).y;
      fVar6 = fVar21 - fVar10;
      fVar8 = fVar3 - fVar4;
      uVar12 = (int)fVar2 >> 0x1f;
      uVar13 = (int)fVar11 >> 0x1f;
      fVar5 = ABS(fVar6);
      iVar26 = (uVar12 >> 1 ^ (uint)fVar2) - uVar12;
      fVar7 = ABS(fVar8);
      *(float *)((int)puVar14 + 0x9c) = fVar6;
      *(float *)(puVar14 + 0x14) = fVar8;
      *(float *)((int)puVar14 + 0xa4) = fVar5 - fVar7;
      dVar29 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
      iVar22 = (uVar13 >> 1 ^ (uint)fVar11) - uVar13;
      fVar6 = ABS(*(float *)((int)puVar14 + 0x9c));
      if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
        fVar6 = fVar7;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar7 = ABS(*(float *)(puVar14 + 0x14));
      if (*(float *)((int)puVar14 + 0xa4) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar32 = dVar29;
      if (0.0 < fVar6) {
        lVar19 = uVar17 - 0x150;
        lVar27 = uVar17 - 0x48;
        lVar23 = uVar17 - 0x58;
        lVar28 = 2;
        fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x114) = fVar6;
        *(float *)((int)puVar14 + 0x10c) = fVar6;
        *(float *)(puVar14 + 0x22) = fVar6;
        *(float *)(puVar14 + 0x21) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x10c) = *(float *)((int)puVar14 + 0x10c) * fVar7;
        *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar6;
        *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0xf8) * fVar6 * fVar6;
          iVar25 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar25 + 4) * fVar6 * fVar6;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar17 - 0x58;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar23 = lVar27;
        do {
          fVar6 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x108) = *(float *)((int)lVar19 + 0x108) * fVar6;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
          lVar23 = lVar23 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar19 = 2;
        do {
          iVar25 = (int)lVar20;
          iVar15 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar25 + 0x108)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar8 + fVar5);
      }
      fVar4 = fVar4 - fVar3;
      fVar21 = fVar10 - fVar21;
      iVar25 = 0x470000;
      *(undefined4 *)(puVar14 + 0xe) = 0;
      dVar31 = (double)SQRT(fVar21 * fVar21 + fVar4 * fVar4);
      if (((((0.5 <= dVar31) && (iVar26 < 0x43fa0001)) && (0x411fffff < iVar26)) &&
          ((iVar22 < 0x43fa0001 && (0x411fffff < iVar22)))) ||
         (uVar12 = (int)pfVar9[5] >> 0x1f, iVar25 = (uVar12 >> 1 ^ (uint)pfVar9[5]) - uVar12,
         dVar31 = dVar29, 0x3dcccccc < iVar25)) {
        OrganicDeltAng
                  ((float)dVar32,g_FrameTimeSq * 6.2831855,g_FrameTimeSq * 6.2831855,
                   g_FrameTime * 25.132742,&(moby->rotation).z,iVar25,pfVar9 + 4);
        (moby->rotation).x = pfVar9[4] * DAT_00877858;
        OrganicDelt
                  ((float)dVar31,g_FrameTimeSq * 15.0,g_FrameTimeSq * 50.0,
                   g_FrameTime * 50.0,(float *)(puVar14 + 0xe),0x870000,pfVar9 + 5);
        fVar21 = (moby->rotation).z + 1.5707963;
        fVar10 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar10 = fVar21;
        }
        fVar3 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
          fVar3 = fVar10;
        }
        fVar21 = fVar3 * fVar3;
        fVar10 = fVar21 * fVar21 * fVar3;
        fVar4 = fVar21 * fVar10;
        fVar3 = (fVar21 * fVar4 * 2.601887e-06 +
                fVar4 * -0.0001980741 + fVar10 * 0.0083330255 + fVar21 * fVar3 * -0.16666657 + fVar3
                ) * pfVar9[5];
        *pfVar9 = fVar3;
        fVar21 = (moby->rotation).z;
        pfVar9[2] = 0.0;
        fVar10 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar10 = fVar21;
        }
        fVar4 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar10 < 0.0) {
          fVar4 = fVar10;
        }
        fVar21 = fVar4 * fVar4;
        fVar10 = fVar21 * fVar21 * fVar4;
        fVar6 = fVar21 * fVar10;
        pfVar9[1] = (fVar21 * fVar6 * 2.601887e-06 +
                    fVar6 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar21 * fVar4 * -0.16666657 + fVar4) * pfVar9[5];
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + pfVar9[1];
        (moby->pos).z = (moby->pos).z + pfVar9[2];
      }
      else {
        moby->state = '\x03';
        pfVar9[8] = fVar10;
        pfVar9[9] = (moby->pos).y;
        pfVar9[10] = (moby->pos).z;
        fVar21 = (moby->pos).w;
        pfVar9[10] = 500.0;
        pfVar9[0xb] = fVar21;
      }
    }
    else if (uVar1 == '\x01') {
      iVar22 = FastDecTimerS32(pfVar9 + 0xc);
      if (iVar22 != 0) {
        moby->state = '\x02';
        pCVar16 = Cylinders;
        fVar21 = pfVar9[7];
        fVar10 = pfVar9[6];
        fVar3 = Cylinders[(int)fVar10].pos.x - Cylinders[(int)fVar21].pos.x;
        pfVar9[8] = fVar3;
        fVar4 = pCVar16[(int)fVar10].pos.y - pCVar16[(int)fVar21].pos.y;
        pfVar9[9] = fVar4;
        fVar6 = pCVar16[(int)fVar10].pos.z - pCVar16[(int)fVar21].pos.z;
        pfVar9[10] = fVar6;
        pfVar9[0xb] = pCVar16[(int)fVar10].pos.w;
        fVar3 = fVar3 * 10.0;
        fVar4 = fVar4 * 10.0;
        fVar6 = fVar6 * 10.0;
        pfVar9[8] = fVar3;
        pfVar9[9] = fVar4;
        pfVar9[10] = fVar6;
        pfVar9[8] = fVar3 + pCVar16[(int)fVar21].pos.x;
        pfVar9[9] = fVar4 + pCVar16[(int)fVar21].pos.y;
        pfVar9[10] = fVar6 + pCVar16[(int)fVar21].pos.z;
      }
    }
    else if (uVar1 == '\0') {
      dVar29 = (double)MB_randRangeFloat(360.0,720.0);
      fVar21 = (float)FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
      pfVar9[0xc] = fVar21;
      moby->state = '\x01';
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
    }
  }
  return;
}


