// game/update/moby672.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x40dea4-0x40f2a0
#include <math.h>
#include "game/update/moby672.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "idol/fastfunc.h"

// 0x040dea4 (0x14 bytes)
void M672_0040dea4(void)

{
  DAT_008551bc = 0x10000;
  return;
}


// 0x040dec0 (0xe4 bytes)
void M672_0040dec0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0xd0) != 0) || (*(int *)(iVar3 + 0xd4) != 0)) {
    FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0xd0);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0xd4);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}


// 0x040dfd8 (0x12c8 bytes)
// inlined: FastAtan2 @0x40e280, FastAtan2 @0x40e4f4, FastAtan2 @0x40e68c, FastAtan2 @0x40ec08, FastAtan2 @0x40ee20
/* Moby 672 */

void UpdateMoby_672(MobyInstance *moby)

{
  byte bVar1;
  s32 sVar2;
  float fVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  PathFollower *follower;
  Spline *pSVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *puVar17;
  Vec4 *pVVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined2 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  int iVar29;
  ulonglong uVar27;
  longlong lVar28;
  float *pfVar30;
  ulonglong uVar31;
  longlong lVar32;
  double dVar33;
  ulonglong uVar34;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar35;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x200;
  puVar17 = (ulonglong *)lVar25;
  *puVar17 = uVar22;
  puVar17[0x42] = in_LR;
  puVar17[0x3a] = in_f26;
  puVar17[0x3b] = in_f27;
  puVar17[0x3c] = in_f28;
  puVar17[0x3d] = in_f29;
  puVar17[0x3e] = in_f30;
  puVar17[0x3f] = in_f31;
  puVar17[0x38] = unaff_r30;
  puVar17[0x39] = unaff_r31;
  follower = (PathFollower *)moby->pVar;
  puVar17[0x37] = unaff_r29;
  puVar17[0x36] = unaff_r28;
  puVar17[0x35] = unaff_r27;
  puVar17[0x34] = unaff_r26;
  puVar17[0x33] = unaff_r25;
  if (follower != (PathFollower *)0x0) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (-1 < (int)(uint)bVar1) {
        if (bVar1 == 0) {
          if (follower->splineIdx == -1) {
            moby->state = '\x02';
          }
          else {
            pSVar4 = Splines[follower->splineIdx];
            pVVar18 = pSVar4->points + pSVar4->cnt + -1;
            fVar3 = pSVar4->points[0].y - pVVar18->y;
            fVar5 = pSVar4->points[0].x - pVVar18->x;
            fVar12 = pSVar4->points[0].z - pVVar18->z;
            if (SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar3 * fVar3) < 0.5) {
              pSVar4->cnt = pSVar4->cnt + -1;
            }
            InitFollower(follower);
            uVar27 = ZEXT48(follower->pSpline);
            uVar31 = (ulonglong)(uint)follower->idx;
            if (follower->state == '\0') {
              if (follower->idx < 1) {
                iVar26 = PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,follower->pSpline);
                uVar31 = (ulonglong)iVar26;
                iVar29 = 0;
                follower->idx = iVar26;
                uVar27 = ZEXT48(follower->pSpline);
                if (-1 < (char)follower->direction) {
                  iVar29 = follower->pSpline->cnt + -1;
                }
                if (iVar26 == iVar29) {
                  uVar31 = 0;
                  follower->idx = 0;
                }
              }
              iVar26 = (int)uVar27 + (int)((uVar31 & 0xffffffff) << 4);
              fVar3 = (moby->pos).y - *(float *)(iVar26 + 0x14);
              fVar5 = (moby->pos).x - *(float *)(iVar26 + 0x10);
              fVar12 = (moby->pos).z - *(float *)(iVar26 + 0x18);
              iVar26 = (int)uVar27 + (int)(uVar31 << 4);
              follower->distance = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar3 * fVar3);
              fVar3 = *(float *)(iVar26 + 0x10) - (moby->pos).x;
              fVar5 = *(float *)(iVar26 + 0x14) - (moby->pos).y;
              fVar12 = ABS(fVar3);
              *(float *)((int)puVar17 + 0xd4) = fVar3;
              fVar7 = ABS(fVar5);
              *(float *)(puVar17 + 0x1b) = fVar5;
              *(float *)((int)puVar17 + 0xdc) = fVar12 - fVar7;
              fVar3 = 0.0;
              uVar34 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
              fVar5 = ABS(*(float *)((int)puVar17 + 0xd4));
              if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
                fVar5 = fVar7;
              }
              fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
              fVar7 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
              fVar9 = ABS(*(float *)(puVar17 + 0x1b));
              if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
                fVar9 = fVar12;
              }
              if (0.0 < fVar5) {
                lVar24 = uVar22 - 0x1f0;
                lVar28 = uVar22 - 0xa0;
                lVar32 = uVar22 - 0x90;
                lVar36 = 2;
                fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
                fVar12 = fVar5 * fVar5;
                *(float *)((int)puVar17 + 0x16c) = fVar5;
                *(float *)((int)puVar17 + 0x164) = fVar5;
                *(float *)(puVar17 + 0x2d) = fVar5;
                *(float *)(puVar17 + 0x2c) = fVar5;
                fVar5 = fVar12 * fVar12;
                *(float *)((int)puVar17 + 0x164) = *(float *)((int)puVar17 + 0x164) * fVar12;
                *(float *)(puVar17 + 0x2d) = *(float *)(puVar17 + 0x2d) * fVar5;
                *(float *)((int)puVar17 + 0x16c) = *(float *)((int)puVar17 + 0x16c) * fVar5 * fVar12
                ;
                do {
                  *(float *)((int)lVar24 + 0x160) = *(float *)((int)lVar24 + 0x150) * fVar5 * fVar5;
                  iVar26 = (int)lVar28;
                  lVar24 = lVar24 + 8;
                  lVar28 = lVar28 + 8;
                  *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
                  lVar32 = lVar32 + 8;
                  lVar36 = lVar36 + -1;
                } while (lVar36 != 0);
                lVar36 = 4;
                lVar32 = uVar22 - 0xa0;
                pfVar30 = (float *)&DAT_007358e0;
                lVar24 = lVar25;
                lVar28 = lVar32;
                do {
                  fVar5 = *pfVar30;
                  fVar12 = pfVar30[1];
                  pfVar30 = pfVar30 + 2;
                  *(float *)((int)lVar24 + 0x160) = *(float *)((int)lVar24 + 0x160) * fVar5;
                  lVar24 = lVar24 + 8;
                  *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar12;
                  lVar28 = lVar28 + 8;
                  lVar36 = lVar36 + -1;
                } while (lVar36 != 0);
                lVar28 = 2;
                lVar24 = lVar25;
                do {
                  iVar26 = (int)lVar24;
                  iVar29 = (int)lVar32;
                  lVar24 = lVar24 + 0x10;
                  lVar32 = lVar32 + 0x10;
                  fVar3 = fVar3 + *(float *)(iVar26 + 0x160) + *(float *)(iVar29 + 4) +
                          *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
                fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar7;
              }
              follower->head = fVar3;
              follower->timer = 0.0;
              follower[1].idx = 0;
              follower->state = '\x02';
            }
            fVar3 = follower[5].timer;
            uVar27 = uVar27 + (uVar31 & 0xfffffff) * 0x10;
            iVar26 = (int)uVar27;
            follower[4].pSpline = *(Spline **)(iVar26 + 0x10);
            follower[4].splineIdx = *(s32 *)(iVar26 + 0x14);
            fVar5 = follower[5].distance;
            follower[4].head = *(float *)(iVar26 + 0x18);
            sVar2 = *(s32 *)(iVar26 + 0x1c);
            follower[5].direction = '?';
            follower[5].state = 0x80;
            follower[5].flags = 0;
            follower[5].idx = sVar2;
            Spline_CalcTan
                      (fVar3,fVar5,(Vec4 *)&follower[2].timer,follower,uVar27 & 0xffffffff,0.0,0);
            iVar26 = follower->idx;
            pSVar13 = follower->pSpline;
            fVar3 = pSVar13->points[iVar26].x;
            follower[3].distance = fVar3;
            pSVar4 = (Spline *)pSVar13->points[iVar26].y;
            follower[3].pSpline = pSVar4;
            fVar5 = pSVar13->points[iVar26].z;
            follower[3].splineIdx = (s32)fVar5;
            fVar12 = pSVar13->points[iVar26].w;
            follower[2].head = fVar3;
            follower[3].head = fVar12;
            follower[3].idx = (s32)pSVar4;
            *(float *)&follower[3].direction = fVar5;
            follower[3].timer = fVar12;
            fVar5 = 0.0;
            (moby->rotation).x = 0.0;
            pSVar4 = follower[2].pSpline;
            fVar7 = ABS((float)follower[2].pSpline);
            fVar3 = SQRT(follower[2].timer * follower[2].timer +
                         follower[2].distance * follower[2].distance);
            fVar8 = ABS(fVar3);
            *(float *)((int)puVar17 + 0xcc) = fVar3;
            *(float *)(puVar17 + 0x1a) = fVar8 - fVar7;
            uVar31 = (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
                     (ulonglong)((uint)pSVar4 >> 0x1d) & 4;
            fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
            fVar12 = ABS(*(float *)((int)puVar17 + 0xcc));
            if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
              fVar12 = fVar7;
            }
            fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
              fVar7 = fVar8;
            }
            fVar8 = fVar5;
            if (0.0 < fVar12) {
              lVar24 = uVar22 - 0x1f0;
              lVar32 = uVar22 - 0xb0;
              lVar28 = uVar22 - 0xc0;
              lVar36 = 2;
              fVar12 = (fVar7 - fVar12) / (fVar7 + fVar12);
              fVar7 = fVar12 * fVar12;
              *(float *)((int)puVar17 + 0x14c) = fVar12;
              *(float *)((int)puVar17 + 0x144) = fVar12;
              *(float *)(puVar17 + 0x29) = fVar12;
              *(float *)(puVar17 + 0x28) = fVar12;
              fVar12 = fVar7 * fVar7;
              *(float *)((int)puVar17 + 0x144) = *(float *)((int)puVar17 + 0x144) * fVar7;
              *(float *)(puVar17 + 0x29) = *(float *)(puVar17 + 0x29) * fVar12;
              *(float *)((int)puVar17 + 0x14c) = *(float *)((int)puVar17 + 0x14c) * fVar12 * fVar7;
              do {
                *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x130) * fVar12 * fVar12;
                iVar26 = (int)lVar28;
                lVar28 = lVar28 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar12 * fVar12;
                lVar32 = lVar32 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar36 = 4;
              lVar32 = uVar22 - 0xc0;
              pfVar30 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar28 = lVar32;
              do {
                fVar12 = *pfVar30;
                fVar7 = pfVar30[1];
                pfVar30 = pfVar30 + 2;
                *(float *)((int)lVar24 + 0x140) = *(float *)((int)lVar24 + 0x140) * fVar12;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
                lVar28 = lVar28 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar28 = 2;
              lVar24 = lVar25;
              fVar12 = fVar5;
              do {
                iVar26 = (int)lVar24;
                iVar29 = (int)lVar32;
                lVar24 = lVar24 + 0x10;
                lVar32 = lVar32 + 0x10;
                fVar12 = fVar12 + *(float *)(iVar26 + 0x140) + *(float *)(iVar29 + 4) +
                         *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              fVar8 = (fVar12 + 0.7853982) * fVar3 + fVar9;
            }
            (moby->rotation).y = -fVar8;
            fVar3 = follower[2].timer;
            fVar12 = follower[2].distance;
            fVar8 = ABS(follower[2].timer);
            fVar7 = ABS(follower[2].distance);
            *(float *)(puVar17 + 0x19) = fVar8 - fVar7;
            uVar31 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1e) & 2 |
                     (ulonglong)((uint)fVar12 >> 0x1d) & 4;
            fVar3 = fVar8;
            if (*(float *)(puVar17 + 0x19) - 0.0 < 0.0) {
              fVar3 = fVar7;
            }
            fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
            if (*(float *)(puVar17 + 0x19) - 0.0 < 0.0) {
              fVar7 = fVar8;
            }
            fVar8 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            if (0.0 < fVar3) {
              lVar24 = uVar22 - 0x1f0;
              lVar32 = uVar22 - 0xd0;
              lVar28 = uVar22 - 0xe0;
              lVar36 = 2;
              fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
              fVar7 = fVar3 * fVar3;
              *(float *)((int)puVar17 + 300) = fVar3;
              *(float *)((int)puVar17 + 0x124) = fVar3;
              *(float *)(puVar17 + 0x25) = fVar3;
              *(float *)(puVar17 + 0x24) = fVar3;
              fVar3 = fVar7 * fVar7;
              *(float *)((int)puVar17 + 0x124) = *(float *)((int)puVar17 + 0x124) * fVar7;
              *(float *)(puVar17 + 0x25) = *(float *)(puVar17 + 0x25) * fVar3;
              *(float *)((int)puVar17 + 300) = *(float *)((int)puVar17 + 300) * fVar3 * fVar7;
              do {
                *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x110) * fVar3 * fVar3;
                iVar26 = (int)lVar28;
                lVar28 = lVar28 + 8;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
                lVar32 = lVar32 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar36 = 4;
              lVar32 = uVar22 - 0xe0;
              pfVar30 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar28 = lVar32;
              do {
                fVar3 = *pfVar30;
                fVar7 = pfVar30[1];
                pfVar30 = pfVar30 + 2;
                *(float *)((int)lVar24 + 0x120) = *(float *)((int)lVar24 + 0x120) * fVar3;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
                lVar28 = lVar28 + 8;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              lVar24 = 2;
              do {
                iVar26 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                iVar29 = (int)lVar32;
                lVar32 = lVar32 + 0x10;
                fVar5 = fVar5 + *(float *)(iVar26 + 0x120) + *(float *)(iVar29 + 4) +
                        *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar5 = (fVar5 + 0.7853982) * fVar12 + fVar8;
            }
            (moby->rotation).z = fVar5;
            follower[5].head = 0.0;
            pSVar4 = follower[4].pSpline;
            follower[6].direction = '\0';
            follower[6].state = '\0';
            follower[6].flags = 0;
            (moby->pos).x = (f32)pSVar4;
            (moby->pos).y = (f32)follower[4].splineIdx;
            (moby->pos).z = follower[4].head;
            (moby->pos).w = (f32)follower[5].idx;
            M672_0040dec0(lVar23,lVar23 + 0x10);
            uVar15 = (int)follower[7].timer >> 0x1f;
            uVar31 = (ulonglong)(int)uVar15;
            fVar3 = follower[3].distance;
            pSVar4 = follower[3].pSpline;
            fVar5 = (float)follower[3].splineIdx;
            fVar12 = follower[3].head;
            fVar7 = follower[5].timer;
            fVar8 = follower[5].distance;
            bVar1 = *(byte *)&follower[6].head;
            if (0x40c90fdb < (int)((uVar15 >> 1 ^ (uint)follower[7].timer) - uVar15)) {
              uVar31 = ZEXT48(&DAT_0040dfa4);
              follower[7].timer = follower[7].timer * 0.017453292;
            }
            follower[4].idx = (s32)fVar3;
            *(Spline **)&follower[4].direction = pSVar4;
            follower[4].timer = fVar5;
            follower[4].distance = fVar12;
            Spline_CalcLen
                      ((double)fVar7,(double)fVar8,follower,uVar31,0x40c90fdb,
                       (ulonglong)bVar1 & 0x20,lVar23);
            moby->state = ((byte)(-(longlong)follower[6].splineIdx >> 0x3f) & 2) + 1;
          }
        }
        else {
          uVar15.piece<0,1>() = follower[5].direction;
          uVar15.piece<1,1>() = follower[5].state;
          uVar15.piece<2,2>() = follower[5].flags;
          uVar31 = (ulonglong)uVar15;
          uVar16 = (int)uVar15 >> 0x1f;
          dVar33 = (double)(longlong)(int)uVar16;
          dVar41 = 1.0;
          if (0x3f7fffff < (int)((uVar16 >> 1 ^ uVar15) - uVar16)) {
            *(float *)&follower[5].direction = *(float *)&follower[5].direction - 1.0;
            iVar26 = PathFollower_Advance(follower);
            fVar3 = follower[2].distance;
            follower[1].splineIdx = (s32)follower[2].timer;
            pSVar4 = follower[2].pSpline;
            follower[1].head = fVar3;
            uVar19 = *(undefined1 *)&follower[2].splineIdx;
            uVar20 = *(undefined1 *)((int)&follower[2].splineIdx + 1);
            uVar21 = *(undefined2 *)((int)&follower[2].splineIdx + 2);
            follower[2].idx = (s32)pSVar4;
            fVar3 = follower[5].timer;
            follower[2].direction = uVar19;
            follower[2].state = uVar20;
            follower[2].flags = uVar21;
            Spline_CalcTan
                      (fVar3,follower[5].distance,(Vec4 *)&follower[2].timer,follower,uVar31,
                       (float)dVar33,1);
            pSVar4 = follower[3].pSpline;
            follower[2].head = follower[3].distance;
            uVar19 = *(undefined1 *)&follower[3].splineIdx;
            uVar20 = *(undefined1 *)((int)&follower[3].splineIdx + 1);
            uVar21 = *(undefined2 *)((int)&follower[3].splineIdx + 2);
            follower[3].idx = (s32)pSVar4;
            follower[3].direction = uVar19;
            follower[3].state = uVar20;
            follower[3].flags = uVar21;
            follower[3].timer = follower[3].head;
            lVar24 = PathFollower_WrapIdx(follower,iVar26 + 1);
            iVar26 = (int)(lVar24 << 4);
            pSVar4 = follower->pSpline;
            follower[3].distance = *(float *)((int)&pSVar4->points[0].x + iVar26);
            follower[3].pSpline = *(Spline **)((int)&pSVar4->points[0].y + iVar26);
            follower[3].splineIdx = *(s32 *)((int)&pSVar4->points[0].z + iVar26);
            follower[3].head = *(float *)((int)&pSVar4->points[0].w + iVar26);
          }
          fVar3 = follower[7].timer;
          fVar5 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar5 = fVar3;
          }
          fVar12 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
            fVar12 = fVar5;
          }
          fVar5 = fVar12 * fVar12;
          fVar7 = fVar5 * fVar5 * fVar12;
          fVar8 = fVar5 * fVar7;
          dVar42 = (double)((float)follower[5].pSpline * DAT_0071f408 +
                           (float)follower[7].idx * DAT_0071f408 *
                           (fVar5 * fVar8 * 2.601887e-06 +
                           fVar8 * -0.0001980741 +
                           fVar7 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12));
          dVar40 = 0.01745329238474369;
          dVar44 = (double)(float)(dVar42 / (double)follower[3].timer);
          dVar33 = (double)FastWrapRot
                                     (fVar3,*(float *)&follower[7].direction * DAT_0071f408 *
                                            0.017453292);
          pSVar4 = (Spline *)follower[4].idx;
          follower[7].timer = (float)dVar33;
          follower[4].pSpline = pSVar4;
          follower[4].splineIdx = *(s32 *)&follower[4].direction;
          follower[4].head = follower[4].timer;
          follower[5].idx = (s32)follower[4].distance;
          Spline_Hermite
                    ((float)((double)*(float *)&follower[5].direction + dVar44),
                     (Vec4 *)(follower + 4),(Vec4 *)&follower[2].head,(Vec4 *)&follower[3].distance,
                     (Vec4 *)&follower[1].splineIdx,(Vec4 *)&follower[2].timer);
          if (((uint)follower[6].head & 0x40000000) == 0) {
            fVar3 = (float)follower[4].splineIdx - *(float *)&follower[4].direction;
            fVar5 = (float)follower[4].pSpline - (float)follower[4].idx;
            fVar12 = follower[4].head - follower[4].timer;
            dVar44 = (double)(float)(dVar44 * (double)(float)(dVar42 / (double)SQRT(fVar12 * fVar12
                                                                                    + fVar5 * fVar5
                                                                                      + fVar3 * 
                                                  fVar3)));
            Spline_Hermite
                      ((float)((double)*(float *)&follower[5].direction + dVar44),
                       (Vec4 *)(follower + 4),(Vec4 *)&follower[2].head,
                       (Vec4 *)&follower[3].distance,(Vec4 *)&follower[1].splineIdx,
                       (Vec4 *)&follower[2].timer);
          }
          puVar17[0x30] = (longlong)(int)*(short *)((int)&follower[6].head + 2);
          dVar42 = (double)(float)((double)(longlong)puVar17[0x30] * dVar40);
          FastDiffRots((double)(moby->rotation).z,dVar42);
          fVar3 = (float)follower[4].idx - (float)follower[4].pSpline;
          fVar5 = *(float *)&follower[4].direction - (float)follower[4].splineIdx;
          fVar7 = ABS(fVar3);
          fVar12 = ABS(fVar5);
          *(float *)((int)puVar17 + 0xbc) = fVar3;
          *(float *)(puVar17 + 0x18) = fVar5;
          *(float *)((int)puVar17 + 0xc4) = fVar7 - fVar12;
          dVar33 = 0.0;
          uVar31 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar17 + 0xbc));
          if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
            fVar3 = fVar12;
          }
          fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
          fVar5 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
          fVar8 = ABS(*(float *)(puVar17 + 0x18));
          if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
            fVar8 = fVar7;
          }
          dVar38 = dVar33;
          if (0.0 < fVar3) {
            lVar24 = uVar22 - 0x1f0;
            lVar32 = uVar22 - 0xf0;
            lVar28 = uVar22 - 0x100;
            lVar36 = 2;
            fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
            fVar7 = fVar3 * fVar3;
            *(float *)((int)puVar17 + 0x10c) = fVar3;
            *(float *)((int)puVar17 + 0x104) = fVar3;
            *(float *)(puVar17 + 0x21) = fVar3;
            *(float *)(puVar17 + 0x20) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar7;
            *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar3;
            *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0xf0) * fVar3 * fVar3;
              iVar26 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
              lVar32 = lVar32 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar32 = uVar22 - 0x100;
            pfVar30 = (float *)&DAT_007358e0;
            lVar24 = lVar25;
            lVar28 = lVar32;
            do {
              fVar3 = *pfVar30;
              fVar7 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0x100) * fVar3;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
              lVar28 = lVar28 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar28 = 2;
            lVar24 = lVar25;
            do {
              iVar26 = (int)lVar24;
              iVar29 = (int)lVar32;
              lVar24 = lVar24 + 0x10;
              lVar32 = lVar32 + 0x10;
              dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar26 + 0x100)) +
                                *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                               *(float *)(iVar29 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar12 + fVar5);
          }
          uVar37 = FastWrapRot((float)dVar38,(float)dVar42);
          dVar42 = (double)FastDiffRots(uVar37,(double)(moby->rotation).z);
          fVar3 = (float)((double)((float)(dVar41 / (double)follower[6].timer) * DAT_0071f408) *
                         dVar42);
          dVar43 = (double)fVar3;
          dVar41 = (double)FastWrapRot(fVar3,(moby->rotation).z);
          (moby->rotation).z = (float)dVar41;
          fVar5 = *(float *)&follower[4].direction - (float)follower[4].splineIdx;
          fVar12 = (float)follower[4].idx - (float)follower[4].pSpline;
          fVar3 = (moby->rotation).y;
          fVar7 = follower[4].timer - follower[4].head;
          fVar5 = SQRT(fVar12 * fVar12 + fVar5 * fVar5);
          *(float *)((int)puVar17 + 0xb4) = fVar7;
          dVar39 = ABS((double)fVar7);
          dVar38 = ABS((double)fVar5);
          *(float *)(puVar17 + 0x16) = fVar5;
          *(float *)(puVar17 + 0x17) = (float)(dVar38 - dVar39);
          dVar42 = (double)(float)follower[6].idx;
          uVar31 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
          uVar27 = uVar31 << 2 | 0x735900;
          dVar41 = ABS((double)*(float *)(puVar17 + 0x16));
          if ((double)*(float *)(puVar17 + 0x17) - dVar33 < 0.0) {
            dVar41 = dVar39;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
          dVar39 = ABS((double)*(float *)((int)puVar17 + 0xb4));
          if ((double)*(float *)(puVar17 + 0x17) - dVar33 < 0.0) {
            dVar39 = dVar38;
          }
          fVar12 = *(float *)((int)uVar27 + 4);
          if (dVar33 < dVar41) {
            lVar24 = uVar22 - 0x1f0;
            lVar32 = uVar22 - 0x110;
            lVar28 = uVar22 - 0x120;
            lVar36 = 2;
            fVar7 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
            fVar8 = fVar7 * fVar7;
            *(float *)((int)puVar17 + 0xec) = fVar7;
            *(float *)((int)puVar17 + 0xe4) = fVar7;
            *(float *)(puVar17 + 0x1d) = fVar7;
            *(float *)(puVar17 + 0x1c) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar8;
            *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar7;
            *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xd0) * fVar7 * fVar7;
              iVar26 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
              lVar32 = lVar32 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar32 = uVar22 - 0x120;
            uVar27 = ZEXT48(&DAT_007358e0);
            lVar24 = lVar25;
            lVar28 = lVar32;
            do {
              pfVar30 = (float *)uVar27;
              fVar7 = pfVar30[1];
              uVar27 = uVar27 + 8;
              *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xe0) * *pfVar30;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
              lVar28 = lVar28 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar24 = 2;
            do {
              iVar26 = (int)lVar25;
              iVar29 = (int)lVar32;
              lVar25 = lVar25 + 0x10;
              lVar32 = lVar32 + 0x10;
              dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar26 + 0xe0)) +
                                *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) +
                               *(float *)(iVar29 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar5 + fVar12);
          }
          dVar38 = 10.0;
          dVar41 = 5.0;
          dVar33 = (double)MB_DeltAngSpeed
                                     ((double)fVar3,-dVar33,
                                      (double)((float)((double)(float)(dVar42 * 10.0) * dVar40) *
                                              g_FrameTimeSq),
                                      (double)((float)((double)(float)(dVar42 * 5.0) * dVar40) *
                                              g_FrameTimeSq),
                                      (double)((float)(dVar42 * dVar40) * g_FrameTime),
                                      &DAT_0040dfa4,uVar27,&follower[6].direction);
          (moby->rotation).y = (float)dVar33;
          uVar37 = FastAddRots((float)(dVar43 * (double)follower[6].distance));
          dVar33 = (double)FastDiffRots((double)(moby->rotation).x,uVar37);
          uVar37 = FastAddRots((float)(dVar33 * (double)(float)follower[6].pSpline));
          dVar33 = (double)(float)follower[5].splineIdx;
          dVar33 = (double)MB_DeltAngSpeed
                                     ((double)(moby->rotation).x,uVar37,
                                      (double)((float)((double)(float)(dVar33 * dVar38) * dVar40) *
                                              g_FrameTimeSq),
                                      (double)((float)((double)(float)(dVar33 * dVar41) * dVar40) *
                                              g_FrameTimeSq),
                                      (double)((float)(dVar33 * dVar40) * g_FrameTime));
          (moby->rotation).x = (float)dVar33;
          pSVar4 = follower[4].pSpline;
          *(float *)&follower[5].direction =
               (float)((double)*(float *)&follower[5].direction + dVar44);
          (moby->pos).x = (f32)pSVar4;
          (moby->pos).y = (f32)follower[4].splineIdx;
          (moby->pos).z = follower[4].head;
          (moby->pos).w = (f32)follower[5].idx;
          M672_0040dec0(lVar23,lVar23 + 0x10);
        }
      }
    }
    else if (bVar1 < 3) {
      if (follower->splineIdx != -1) {
        moby->state = '\0';
      }
    }
    else if ((bVar1 < 4) &&
            (iVar26 = FastDecTimerS32(&follower[6].splineIdx), iVar26 != 0)) {
      follower[6].splineIdx = 0;
      moby->state = '\x01';
    }
    FastEulerToMtx1(uVar22 - 400,lVar23 + 0x40);
    if (follower[7].splineIdx != -1) {
      pMVar35 = g_MobyInstance + follower[7].splineIdx;
      if (((pMVar35 == (MobyInstance *)0x0) || (pMVar35->state == 0xfe)) || (pMVar35->state == 0xfd)
         ) {
        follower[7].splineIdx = -1;
      }
      else {
        fVar3 = *(float *)&follower[8].direction;
        fVar5 = (float)follower[8].idx;
        fVar12 = follower[8].timer;
        fVar7 = *(float *)((int)puVar17 + 0x84);
        fVar8 = *(float *)((int)puVar17 + 0x74);
        fVar9 = *(float *)(puVar17 + 0x11);
        fVar10 = *(float *)((int)puVar17 + 0x94);
        fVar11 = *(float *)(puVar17 + 0xf);
        fVar6 = *(float *)(puVar17 + 0x13);
        pvVar14 = pMVar35->pUpdate;
        (pMVar35->pos).x =
             (moby->pos).x +
             *(float *)(puVar17 + 0x12) * fVar12 +
             *(float *)(puVar17 + 0xe) * fVar5 + *(float *)(puVar17 + 0x10) * fVar3;
        (pMVar35->pos).y = (moby->pos).y + fVar10 * fVar12 + fVar8 * fVar5 + fVar7 * fVar3;
        (pMVar35->pos).z = (moby->pos).z + fVar6 * fVar12 + fVar11 * fVar5 + fVar9 * fVar3;
        (pMVar35->pos).w = (moby->pos).w;
        (pMVar35->rotation).x = (moby->rotation).x;
        (pMVar35->rotation).y = (moby->rotation).y;
        (pMVar35->rotation).z = (moby->rotation).z;
        (pMVar35->rotation).w = (moby->rotation).w;
        if (pvVar14 == (void *)0x0) {
          UpdateMobyTransform(pMVar35);
          PostUpdateMobyLockTransform(pMVar35);
        }
      }
    }
    if (follower[7].head != -NAN) {
      pMVar35 = g_MobyInstance + (int)follower[7].head;
      if (((pMVar35 == (MobyInstance *)0x0) || (pMVar35->state == 0xfe)) || (pMVar35->state == 0xfd)
         ) {
        follower[7].head = -NAN;
      }
      else {
        fVar3 = (float)follower[8].splineIdx;
        pSVar4 = follower[8].pSpline;
        fVar5 = follower[8].head;
        fVar12 = *(float *)((int)puVar17 + 0x84);
        fVar7 = *(float *)((int)puVar17 + 0x74);
        fVar8 = *(float *)(puVar17 + 0x11);
        fVar9 = *(float *)((int)puVar17 + 0x94);
        fVar10 = *(float *)(puVar17 + 0xf);
        fVar11 = *(float *)(puVar17 + 0x13);
        pvVar14 = pMVar35->pUpdate;
        (pMVar35->pos).x =
             (moby->pos).x +
             *(float *)(puVar17 + 0x12) * fVar5 +
             *(float *)(puVar17 + 0xe) * (float)pSVar4 + *(float *)(puVar17 + 0x10) * fVar3;
        (pMVar35->pos).y = (moby->pos).y + fVar9 * fVar5 + fVar7 * (float)pSVar4 + fVar12 * fVar3;
        (pMVar35->pos).z = (moby->pos).z + fVar11 * fVar5 + fVar10 * (float)pSVar4 + fVar8 * fVar3;
        (pMVar35->pos).w = (moby->pos).w;
        (pMVar35->rotation).x = (moby->rotation).x;
        (pMVar35->rotation).y = (moby->rotation).y;
        (pMVar35->rotation).z = (moby->rotation).z;
        (pMVar35->rotation).w = (moby->rotation).w;
        if (pvVar14 == (void *)0x0) {
          UpdateMobyTransform(pMVar35);
          PostUpdateMobyLockTransform(pMVar35);
        }
      }
    }
  }
  return;
}


