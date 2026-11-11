// game/update/moby695.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x424db8-0x425508
#include "game/update/moby695.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0424db8 (0x14 bytes)
void M695_00424db8(void)

{
  DAT_008579ac = 0x10000;
  return;
}


// 0x0424dd8 (0x78 bytes)
double M695_00424dd8
                 (double param_1,double param_2,double param_3,double param_4,float *param_5,
                 undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)(float)(param_4 * param_4);
  fVar2 = *param_7 * (((float)(1.0 - param_3) - 1.0) * DAT_0071f408 + 1.0);
  *param_7 = fVar2;
  fVar1 = (float)((double)*param_5 - param_1);
  dVar5 = (double)(fVar1 * fVar1);
  if (dVar4 - dVar5 < 0.0) {
    dVar5 = dVar4;
  }
  fVar1 = (float)((double)(float)(param_2 * dVar5) / dVar4);
  fVar3 = fVar2 + fVar1;
  if (param_1 - (double)*param_5 < 0.0) {
    fVar3 = fVar2 - fVar1;
  }
  *param_7 = fVar3;
  fVar1 = *param_5;
  *param_5 = fVar1 + fVar3;
  return ABS((double)(float)(param_1 - (double)(fVar1 + fVar3)));
}


// 0x0424e98 (0x670 bytes)
// inlined: FastAtan2 @0x42513c
// strings: 00424e5c: '?333' (raw)

/* Moby 695 */

void UpdateMoby_695(MobyInstance *moby)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  float fVar25;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar23 = uVar17 - 0x110;
  puVar9 = (ulonglong *)lVar23;
  *puVar9 = uVar17;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = unaff_r31;
  fVar1 = (moby->pos).x;
  pfVar22 = (float *)moby->pVar;
  *(float *)(puVar9 + 0xe) = fVar1;
  fVar2 = (moby->pos).y;
  *(f32 *)((int)puVar9 + 0x74) = fVar2;
  fVar3 = (moby->pos).z;
  *(f32 *)(puVar9 + 0xf) = fVar3;
  fVar4 = (moby->pos).w;
  *(float *)(puVar9 + 0x10) = fVar1;
  *(f32 *)((int)puVar9 + 0x7c) = fVar4;
  *(f32 *)((int)puVar9 + 0x84) = fVar2;
  *(f32 *)(puVar9 + 0x11) = fVar3;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  *(f32 *)((int)puVar9 + 0x8c) = fVar4;
  if (pfVar22 != (float *)0x0) {
    if (moby->state == 0) {
      *pfVar22 = fVar1;
      pfVar22[1] = (moby->pos).y;
      pfVar22[2] = (moby->pos).z;
      pfVar22[3] = (moby->pos).w;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      fVar5 = DAT_008579d0 * DAT_0071f418;
      fVar25 = pfVar22[4] * (((1.0 - DAT_008579d4) - 1.0) * DAT_0071f408 + 1.0);
      pfVar22[4] = fVar25;
      fVar1 = (moby->pos).x;
      fVar7 = fVar1 - *pfVar22;
      fVar7 = fVar7 * fVar7;
      if (9.0 - fVar7 < 0.0) {
        fVar7 = 9.0;
      }
      fVar5 = fVar5 * fVar7;
      fVar7 = fVar5 * 0.11111111 + fVar25;
      if (*pfVar22 - fVar1 < 0.0) {
        fVar7 = -(fVar5 * 0.11111111 - fVar25);
      }
      pfVar22[4] = fVar7;
      (moby->pos).x = (moby->pos).x + fVar7;
      fVar7 = DAT_008579d0 * DAT_0071f418;
      fVar25 = pfVar22[5] * (((1.0 - DAT_008579d4) - 1.0) * DAT_0071f408 + 1.0);
      pfVar22[5] = fVar25;
      fVar1 = (moby->pos).y;
      fVar5 = fVar1 - pfVar22[1];
      fVar5 = fVar5 * fVar5;
      if (9.0 - fVar5 < 0.0) {
        fVar5 = 9.0;
      }
      fVar7 = fVar7 * fVar5;
      fVar5 = fVar7 * 0.11111111 + fVar25;
      if (pfVar22[1] - fVar1 < 0.0) {
        fVar5 = -(fVar7 * 0.11111111 - fVar25);
      }
      pfVar22[5] = fVar5;
      fVar5 = (moby->pos).y + fVar5;
      (moby->pos).y = fVar5;
      fVar13 = g_heroPosition.y;
      fVar7 = g_heroPosition.x;
      fVar25 = DAT_008579d8;
      fVar5 = fVar5 - g_heroPosition.y;
      fVar1 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar1 * fVar1 + fVar5 * fVar5) < DAT_008579d8) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 0.7)) {
        *(float *)(puVar9 + 0x18) = fVar1;
        *(float *)((int)puVar9 + 0xc4) = fVar5;
        *(float *)(puVar9 + 0x19) = ABS(fVar1) - ABS(fVar5);
        fVar10 = 0.0;
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar9 + 0x18));
        if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
          fVar6 = ABS(fVar5);
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar14 = ABS(*(float *)((int)puVar9 + 0xc4));
        if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
          fVar14 = ABS(fVar1);
        }
        if (0.0 < fVar6) {
          lVar21 = uVar17 - 0x100;
          lVar18 = uVar17 - 0x34;
          lVar20 = uVar17 - 0x44;
          lVar24 = 2;
          fVar1 = (fVar14 - fVar6) / (fVar14 + fVar6);
          fVar6 = fVar1 * fVar1;
          *(float *)(puVar9 + 0x1b) = fVar1;
          *(float *)(puVar9 + 0x1a) = fVar1;
          *(float *)((int)puVar9 + 0xd4) = fVar1;
          *(float *)((int)puVar9 + 0xcc) = fVar1;
          fVar1 = fVar6 * fVar6;
          *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6;
          *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar1;
          *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar1 * fVar6;
          do {
            *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar1 * fVar1;
            iVar11 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = uVar17 - 0x44;
          lVar24 = 4;
          pfVar22 = (float *)&DAT_007358e0;
          lVar18 = lVar21;
          lVar20 = lVar23;
          do {
            fVar1 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar20 + 0xcc) = *(float *)((int)lVar20 + 0xcc) * fVar1;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar18 = 2;
          do {
            iVar11 = (int)lVar23;
            iVar12 = (int)lVar21;
            lVar23 = lVar23 + 0x10;
            lVar21 = lVar21 + 0x10;
            fVar10 = fVar10 + *(float *)(iVar11 + 0xcc) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar10 = (fVar10 + 0.7853982) * fVar8 + fVar5;
        }
        fVar1 = fVar10 + 1.5707963;
        fVar5 = 3.1415925 - fVar10;
        if (fVar10 - (3.1415925 - fVar10) < 0.0) {
          fVar5 = fVar10;
        }
        fVar6 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar6 = fVar1;
        }
        fVar8 = -3.1415925 - fVar10;
        if ((-3.1415925 - fVar10) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar5 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
          fVar5 = fVar6;
        }
        fVar1 = fVar8 * fVar8;
        fVar10 = fVar5 * fVar5;
        fVar15 = fVar1 * fVar1 * fVar8;
        fVar6 = fVar10 * fVar10 * fVar5;
        fVar16 = fVar1 * fVar15;
        fVar14 = fVar10 * fVar6;
        fVar25 = (fVar10 * fVar14 * 2.601887e-06 +
                 fVar14 * -0.0001980741 +
                 fVar6 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) * fVar25;
        (moby->pos).x = fVar25;
        fVar1 = (fVar1 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8
                ) * DAT_008579d8;
        (moby->pos).x = fVar25 + fVar7;
        (moby->pos).y = fVar1 + fVar13;
      }
      lVar23 = (longlong)(int)moby + 0x10;
      CollMovingSphere
                (0x3fb99999a0000000,(double)DAT_008579e0,0x4082c00000000000,0x3ff921fb60000000,
                 (longlong)(int)moby,uVar17 - 0x90,lVar23);
      fVar1 = *(float *)((int)puVar9 + 0x84);
      fVar7 = *(float *)((int)puVar9 + 0x74) - fVar1;
      fVar25 = *(float *)(puVar9 + 0xf);
      fVar5 = *(float *)(puVar9 + 0xe) - *(float *)(puVar9 + 0x10);
      (moby->pos).x = *(float *)(puVar9 + 0x10);
      (moby->pos).y = fVar1;
      (moby->pos).z = fVar25;
      if (DAT_008579dc * g_FrameTime <
          SQRT((fVar25 - fVar25) * (fVar25 - fVar25) + fVar5 * fVar5 + fVar7 * fVar7)) {
        FastVecSub(uVar17 - 0x70,lVar23,uVar17 - 0xa0);
        fVar1 = *(float *)((int)puVar9 + 0xa4);
        fVar25 = *(float *)(puVar9 + 0x14);
        fVar7 = *(float *)(puVar9 + 0x15);
        fVar5 = DAT_008579dc * g_FrameTime;
        *(float *)(puVar9 + 0x12) = fVar25;
        *(float *)((int)puVar9 + 0x94) = fVar1;
        *(float *)(puVar9 + 0x13) = fVar7;
        *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 0xac);
        fVar10 = 0.0;
        fVar13 = SQRT(fVar7 * fVar7 + fVar25 * fVar25 + fVar1 * fVar1);
        fVar5 = fVar5 / fVar13;
        fVar6 = fVar10;
        if (0.0 - fVar13 < 0.0) {
          fVar6 = fVar25 * fVar5;
        }
        fVar8 = fVar10;
        if (0.0 - fVar13 < 0.0) {
          fVar8 = fVar1 * fVar5;
        }
        if (0.0 - fVar13 < 0.0) {
          fVar10 = fVar7 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar6 = fVar25 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar8 = fVar1 * fVar5;
        }
        if (fVar13 - 0.0 < 0.0) {
          fVar10 = fVar7 * fVar5;
        }
        *(float *)(puVar9 + 0x12) = fVar6;
        *(float *)((int)puVar9 + 0x94) = fVar8;
        *(float *)(puVar9 + 0x13) = fVar10;
        FastVecAdd(uVar17 - 0x60,uVar17 - 0xa0,uVar17 - 0x80);
        (moby->pos).x = *(f32 *)(puVar9 + 0x16);
        (moby->pos).y = *(f32 *)((int)puVar9 + 0xb4);
        (moby->pos).z = *(f32 *)(puVar9 + 0x17);
        (moby->pos).w = *(f32 *)((int)puVar9 + 0xbc);
      }
      fVar25 = CollWaterHeight((float *)lVar23,(float *)0x0);
      fVar1 = (moby->pos).z;
      fVar25 = fVar25 - fVar1;
      fVar7 = g_FrameTime * 3.0;
      if ((fVar25 <= fVar7) && (fVar7 = fVar25, fVar25 < g_FrameTime * -3.0)) {
        fVar7 = g_FrameTime * -3.0;
      }
      (moby->pos).z = fVar1 + fVar7;
    }
  }
  return;
}


