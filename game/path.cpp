// game/path.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 39 functions, 0x136368-0x13a9c4
#include <stdio.h>
#include "game/path.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/walk.h"
#include "idol/fastfunc.h"

// 0x0136368 (0x14 bytes)
/* PATH SECTION HEAD */

void SECTION_HEADER_PATH(void)

{
  DAT_007297a8 = 0x10000;
  return;
}


// 0x0136390 (0x394 bytes)
// strings: 0065323c: 'tried to draw path -1 \n'

ulonglong DrawPathDebug(float size,void *cam,int splineIdx,ABGR color,undefined8 param_5,
                             uint flags,int step)

{
  double dVar1;
  uint *puVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  int32_t iVar7;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar12;
  longlong lVar11;
  short sVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  dVar14 = (double)size;
  lVar8 = (longlong)(int)flags;
  if (splineIdx == -1) {
    iVar7 = printf("tried to draw path -1 \n");
    uVar6 = (ulonglong)iVar7;
  }
  else {
    lVar9 = 0;
    puVar2 = *(uint **)((int)Splines + (int)((longlong)splineIdx << 2));
    sVar13 = ((ushort)(ZERO_MASK((flags & 0x40))) & 3) - 1;
    uVar6 = (ulonglong)*puVar2;
    if (0 < (int)*puVar2) {
      do {
        if (0 < (int)lVar9 && (flags & 0x80) != 0) {
          STUB_00065468(local_b0,lVar9 * 0x10 + ZEXT48(puVar2) + 0x10 & 0xffffffff);
        }
        dVar17 = 0.0;
        pfVar10 = (float *)((int)puVar2 + (int)(lVar9 << 4) + 0x10);
        uVar12 = flags & 7;
        bVar4 = true;
        local_a0 = *pfVar10;
        fVar3 = SQRT(GameCamera.orientMtx.up.z * GameCamera.orientMtx.up.z +
                     GameCamera.orientMtx.up.x * GameCamera.orientMtx.up.x +
                     GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y);
        local_9c = pfVar10[1];
        local_98 = pfVar10[2];
        local_94 = pfVar10[3];
        fVar5 = (float)(dVar14 * 1.2000000476837158) / fVar3;
        dVar15 = dVar17;
        if (0.0 - fVar3 < 0.0) {
          dVar15 = (double)(GameCamera.orientMtx.up.z * fVar5);
        }
        dVar16 = dVar17;
        if (0.0 - fVar3 < 0.0) {
          dVar16 = (double)(GameCamera.orientMtx.up.y * fVar5);
        }
        if (0.0 - fVar3 < 0.0) {
          dVar17 = (double)(GameCamera.orientMtx.up.x * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar15 = (double)(GameCamera.orientMtx.up.z * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar16 = (double)(GameCamera.orientMtx.up.y * fVar5);
        }
        if (fVar3 - 0.0 < 0.0) {
          dVar17 = (double)(GameCamera.orientMtx.up.x * fVar5);
        }
        if (uVar12 < 3) {
          if (uVar12 != 0) {
            if (uVar12 < 2) {
              SpawnPart_41((float)dVar14,&local_a0,cam,0,color,lVar8,0x7f,sVar13,0xff);
            }
            else {
              SpawnPart_41((float)dVar14,&local_a0,cam,1,color,lVar8,0x7f,sVar13,0xff);
            }
          }
        }
        else if (uVar12 == 4) {
          dVar1 = dVar14 * 0.5 + (double)local_98;
          lVar11 = lVar9;
          while( true ) {
            local_98 = (float)dVar1;
            uVar12 = (uint)lVar11;
            if ((uVar12 == 0) && (!bVar4)) break;
            SpawnPart_41
                      ((float)dVar14,&local_a0,cam,(int)uVar12 % 10 + 2,color,lVar8,0x7f,sVar13,0xff
                      );
            local_a0 = (float)((double)local_a0 + dVar17);
            bVar4 = false;
            local_9c = (float)((double)local_9c + dVar16);
            dVar1 = (double)local_98 + dVar15;
            lVar11 = (longlong)((int)uVar12 / 10 + ((int)uVar12 >> 0x1f)) +
                     (ulonglong)(uVar12 >> 0x1f);
          }
        }
        lVar9 = lVar9 + step;
        uVar6 = (ulonglong)*puVar2;
      } while ((int)lVar9 < (int)*puVar2);
    }
  }
  return uVar6;
}


// 0x0136724 (0xa4 bytes)
void InitFollower(PathFollower *follower)

{
  Spline *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Spline *pSVar6;
  int iVar7;
  
  follower->state = '\0';
  follower->timer = 0.0;
  pSVar1 = Splines[follower->splineIdx];
  follower->pSpline = pSVar1;
  iVar5 = pSVar1->cnt;
  if (0 < iVar5) {
    iVar7 = 0;
    pSVar6 = pSVar1;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = iVar7 - (iVar7 / iVar5) * iVar5;
      fVar2 = pSVar6->points[0].y - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x14);
      fVar3 = pSVar6->points[0].x - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x10);
      fVar4 = pSVar6->points[0].z - *(float *)((int)pSVar1 + iVar5 * 0x10 + 0x18);
      pSVar6->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      iVar5 = pSVar1->cnt;
      pSVar6 = (Spline *)pSVar6->points;
    } while (iVar7 < iVar5);
  }
  return;
}


// 0x01367d0 (0x9c bytes)
int PathFindClosestPnt(float distance,Vec4 *position,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Vec4 *pVVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  fVar1 = 1e+11;
  if (0 < spline->cnt) {
    do {
      pVVar5 = spline->points + iVar6;
      fVar3 = pVVar5->y - position->y;
      fVar2 = pVVar5->x - position->x;
      fVar4 = pVVar5->z - position->z;
      fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
      if (ABS(fVar2 - distance) < fVar1) {
        fVar1 = fVar2;
        iVar7 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < spline->cnt);
  }
  return iVar7;
}


// 0x0136890 (0x998 bytes)
// inlined: FastAtan2 @0x136b28, FastAtan2 @0x136d44, FastAtan2 @0x136ef0
void PathFollowUpdate(float arrive,MobyInstance *moby,PathFollower *follower,int param_4)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Spline *pSVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ushort uVar13;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar21;
  int iVar22;
  longlong lVar20;
  ulonglong uVar23;
  ulonglong uVar24;
  Spline *pSVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  
  dVar27 = (double)arrive;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar16 = uVar15 - 0x140;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar15;
  puVar11[0x2a] = in_LR;
  puVar11[0x23] = in_f27;
  puVar11[0x24] = in_f28;
  puVar11[0x25] = in_f29;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x20] = unaff_r29;
  puVar11[0x22] = unaff_r31;
  bVar1 = follower->state;
  puVar11[0x21] = unaff_r30;
  uVar23 = (ulonglong)(uint)follower->idx;
  if (bVar1 == 0) {
    pSVar9 = follower->pSpline;
    if (follower->idx < 1) {
      iVar17 = pSVar9->cnt;
      uVar24 = 0;
      uVar23 = 0;
      fVar3 = 1e+11;
      if (0 < iVar17) {
        pSVar25 = pSVar9;
        do {
          fVar7 = pSVar25->points[0].y - (moby->pos).y;
          fVar4 = pSVar25->points[0].x - (moby->pos).x;
          fVar5 = pSVar25->points[0].z - (moby->pos).z;
          pSVar25 = (Spline *)pSVar25->points;
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar7 * fVar7);
          if (ABS(fVar4) < fVar3) {
            uVar23 = uVar24;
            fVar3 = fVar4;
          }
          uVar24 = uVar24 + 1;
        } while ((int)uVar24 < iVar17);
      }
      follower->idx = (int)uVar23;
      uVar13 = follower->flags & 3;
      if ((uVar13 == 1) && ((int)uVar23 == iVar17 + -1)) {
        follower->direction = -follower->direction;
      }
      if (uVar13 != 2) {
        uVar10 = pSVar9->cnt;
        lVar19 = uVar23 + uVar10 + (longlong)(char)follower->direction;
        uVar23 = lVar19 - (longlong)((int)lVar19 / (int)uVar10) * (longlong)(int)uVar10;
        follower->idx = (s32)uVar23;
      }
    }
    iVar17 = (int)((uVar23 & 0xffffffff) << 4);
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar7 = fVar3 - *(float *)((int)&pSVar9->points[0].y + iVar17);
    fVar5 = fVar4 - *(float *)((int)&pSVar9->points[0].x + iVar17);
    fVar8 = (moby->pos).z - *(float *)((int)&pSVar9->points[0].z + iVar17);
    iVar17 = (int)((uVar23 & 0xffffffff) << 4);
    follower->distance = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar4 = *(float *)((int)&pSVar9->points[0].x + iVar17) - fVar4;
    fVar3 = *(float *)((int)&pSVar9->points[0].y + iVar17) - fVar3;
    fVar7 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar11 + 0x11) = fVar4;
    *(float *)((int)puVar11 + 0x8c) = fVar3;
    *(float *)(puVar11 + 0x12) = fVar7 - fVar5;
    fVar3 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    if (0.0 < fVar4) {
      lVar19 = uVar15 - 0x130;
      lVar20 = uVar15 - 0x5c;
      lVar18 = uVar15 - 0x6c;
      lVar26 = 2;
      fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar11 + 0xd4) = fVar4;
      *(float *)(puVar11 + 0x1b) = fVar4;
      *(float *)((int)puVar11 + 0xdc) = fVar4;
      *(float *)(puVar11 + 0x1c) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar7;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar4;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xc4) * fVar4 * fVar4;
        iVar17 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar20 = uVar15 - 0x6c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar18 = lVar20;
      do {
        fVar4 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xd4) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      lVar19 = lVar16;
      do {
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar22 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8)
                + *(float *)(iVar22 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar8 + fVar5;
    }
    follower->head = fVar3;
    follower->timer = 0.0;
    follower[1].idx = 0;
    follower->state = '\x02';
  }
  else {
    if (2 < bVar1) {
      return;
    }
    if (bVar1 < 2) {
      return;
    }
  }
  iVar22 = (int)((uVar23 & 0xffffffff) << 4);
  pSVar9 = follower->pSpline;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  iVar17 = pSVar9->cnt;
  fVar7 = *(float *)((int)&pSVar9->points[0].x + iVar22) - fVar3;
  fVar5 = *(float *)((int)&pSVar9->points[0].y + iVar22) - fVar4;
  iVar22 = (int)uVar23 + iVar17 + (int)(char)follower->direction;
  fVar6 = ABS(fVar7);
  *(float *)((int)puVar11 + 0x7c) = fVar7;
  fVar8 = ABS(fVar5);
  *(float *)(puVar11 + 0x10) = fVar5;
  iVar22 = iVar22 - (iVar22 / iVar17) * iVar17;
  *(float *)((int)puVar11 + 0x84) = fVar6 - fVar8;
  dVar31 = 0.0;
  uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  fVar7 = ABS(*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    fVar7 = fVar8;
  }
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  fVar14 = ABS(*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    fVar14 = fVar6;
  }
  dVar30 = dVar31;
  if (0.0 < fVar7) {
    lVar19 = uVar15 - 0x130;
    lVar18 = uVar15 - 0x8c;
    lVar20 = uVar15 - 0x7c;
    lVar26 = 2;
    fVar7 = (fVar14 - fVar7) / (fVar14 + fVar7);
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xb4) = fVar7;
    *(float *)(puVar11 + 0x17) = fVar7;
    *(float *)((int)puVar11 + 0xbc) = fVar7;
    *(float *)(puVar11 + 0x18) = fVar7;
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar7;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar7 * fVar6;
    do {
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xa4) * fVar7 * fVar7;
      iVar17 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar20 = uVar15 - 0x8c;
    pfVar21 = (float *)&DAT_007358e0;
    lVar19 = lVar16;
    lVar18 = lVar20;
    do {
      fVar7 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xb4) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar18 = 2;
    lVar19 = lVar16;
    do {
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar12 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar8 + fVar5);
  }
  fVar3 = *(float *)((int)pSVar9 + iVar22 * 0x10 + 0x10) - fVar3;
  fVar4 = *(float *)((int)pSVar9 + iVar22 * 0x10 + 0x14) - fVar4;
  fVar5 = ABS(fVar3);
  fVar7 = ABS(fVar4);
  *(float *)(puVar11 + 0xe) = fVar3;
  *(float *)((int)puVar11 + 0x74) = fVar4;
  *(float *)(puVar11 + 0xf) = fVar5 - fVar7;
  uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar3 = fVar7;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
  fVar7 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
  if (0.0 < fVar3) {
    lVar26 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar11 + 0x94) = fVar3;
    *(float *)(puVar11 + 0x13) = fVar3;
    *(float *)((int)puVar11 + 0x9c) = fVar3;
    *(float *)(puVar11 + 0x14) = fVar3;
    lVar19 = uVar15 - 0x130;
    fVar3 = fVar7 * fVar7;
    lVar18 = uVar15 - 0xac;
    lVar20 = uVar15 - 0x9c;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar7;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar3;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar3 * fVar3;
      iVar17 = (int)lVar18;
      lVar19 = lVar19 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar20 = uVar15 - 0xac;
    pfVar21 = (float *)&DAT_007358e0;
    lVar19 = lVar16;
    lVar18 = lVar20;
    do {
      fVar3 = *pfVar21;
      fVar7 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x94) * fVar3;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
      lVar18 = lVar18 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar19 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar22 = (int)lVar20;
      lVar16 = lVar16 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar22 + 4)
                        + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  dVar28 = (double)FastSubRots((float)dVar30,(float)dVar31);
  dVar29 = (double)FastSubRots((float)dVar30,(moby->rotation).z);
  dVar31 = (double)FastSubRots((float)dVar31,(moby->rotation).z);
  uVar2 = follower->direction;
  if ((*(ushort *)(param_4 + 0xee) & 2) == 0) {
    iVar17 = follower->idx;
    pSVar9 = follower->pSpline;
    fVar3 = (moby->pos).z;
    fVar7 = (moby->pos).y - pSVar9->points[iVar17].y;
    fVar5 = (moby->pos).x - pSVar9->points[iVar17].x;
    fVar4 = pSVar9->points[iVar17].z;
    fVar7 = fVar5 * fVar5 + fVar7 * fVar7;
  }
  else {
    iVar17 = follower->idx;
    pSVar9 = follower->pSpline;
    fVar3 = (moby->pos).x;
    fVar7 = (moby->pos).y - pSVar9->points[iVar17].y;
    fVar4 = pSVar9->points[iVar17].x;
    fVar7 = fVar7 * fVar7;
  }
  fVar3 = SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + fVar7);
  follower->distance = fVar3;
  if ((((fVar3 <= (float)(dVar27 * 20.0)) || (1.5707963705062866 < dVar28)) ||
      (dVar28 < 0.03490658476948738)) ||
     ((1.5707963705062866 < dVar29 && (dVar31 < 0.785398006439209)))) {
    if ((follower->flags & 3) != 0) {
      iVar22 = 0;
      if (-1 < (char)uVar2) {
        iVar22 = pSVar9->cnt + -1;
      }
      if (iVar17 == iVar22) {
        if ((follower->flags & 3) == 1) {
          follower->direction = -uVar2;
          iVar22 = pSVar9->cnt;
          iVar17 = iVar17 + iVar22 + (int)(char)-uVar2;
          follower->idx = iVar17 - (iVar17 / iVar22) * iVar22;
        }
        else {
          follower->state = '\a';
        }
        goto LAB_001371c4;
      }
    }
    iVar22 = pSVar9->cnt;
    iVar17 = iVar17 + iVar22 + (int)(char)uVar2;
    follower->idx = iVar17 - (iVar17 / iVar22) * iVar22;
  }
LAB_001371c4:
  follower->head = (float)dVar30;
  walk_Update(dVar27,dVar30,(double)(DAT_0071f418 * 5.0),moby,param_4);
  return;
}


// 0x0137238 (0x374 bytes)
double ClosestPntOnSegmentAtDist
                 (float radius,Vec4 *outPnt,Vec4 *prevPnt,Vec4 *pos,Vec4 *start,Vec4 *end)

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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  dVar15 = (double)radius;
  dVar22 = (double)start->y;
  dVar23 = (double)pos->y;
  dVar17 = (double)(float)((double)end->y - dVar22);
  dVar20 = (double)start->x;
  dVar21 = (double)pos->x;
  dVar27 = (double)end->x;
  dVar24 = (double)start->z;
  dVar16 = (double)(float)(dVar27 - dVar20);
  dVar25 = (double)pos->z;
  dVar18 = (double)(float)((double)end->z - dVar24);
  fVar1 = (float)(dVar18 * dVar18 +
                 (double)(float)(dVar16 * dVar16 + (double)(float)(dVar17 * dVar17)));
  fVar13 = end->w;
  dVar14 = (double)(-(float)(dVar18 * (double)(float)(dVar24 - dVar25) +
                            (double)(float)(dVar16 * (double)(float)(dVar20 - dVar21) +
                                           (double)(float)(dVar17 * (double)(float)(dVar22 - dVar23)
                                                          ))) / fVar1);
  fVar2 = (float)(dVar17 * dVar14 + dVar22);
  fVar3 = (float)(dVar16 * dVar14 + dVar20);
  fVar4 = (float)(dVar18 * dVar14 + dVar24);
  fVar5 = (float)((double)fVar2 - dVar23);
  fVar6 = (float)((double)fVar3 - dVar21);
  fVar7 = (float)((double)fVar4 - dVar25);
  dVar19 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (dVar15 <= dVar19) {
    if (0.0 <= dVar14) {
      if (dVar14 <= 1.0) {
        outPnt->x = fVar3;
        outPnt->y = fVar2;
        outPnt->z = fVar4;
        outPnt->w = fVar13;
      }
      else {
        outPnt->x = end->x;
        fVar2 = end->y;
        outPnt->y = fVar2;
        fVar3 = end->z;
        outPnt->z = fVar3;
        outPnt->w = end->w;
        fVar2 = fVar2 - pos->y;
        fVar1 = (float)(dVar27 - (double)pos->x);
        fVar3 = fVar3 - pos->z;
        dVar19 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) -
                                    dVar15));
      }
    }
    else {
      outPnt->x = start->x;
      fVar2 = start->y;
      outPnt->y = fVar2;
      fVar3 = start->z;
      outPnt->z = fVar3;
      outPnt->w = start->w;
      fVar2 = fVar2 - pos->y;
      fVar1 = (float)(dVar20 - (double)pos->x);
      fVar3 = fVar3 - pos->z;
      dVar19 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) -
                                  dVar15));
    }
    if (dVar19 < (double)(float)(dVar15 * 0.009999999776482582)) {
      dVar19 = 0.0;
    }
  }
  else {
    dVar26 = 0.0;
    dVar28 = (double)(SQRT((float)(dVar15 * dVar15 - (double)(float)(dVar19 * dVar19))) /
                     SQRT(fVar1));
    dVar27 = (double)(float)(dVar14 - dVar28);
    dVar19 = dVar26;
    if ((0.0 <= dVar27) && (dVar19 = dVar27, 1.0 < dVar27)) {
      dVar19 = 1.0;
    }
    dVar27 = (double)(float)(dVar28 + dVar14);
    dVar14 = dVar26;
    if ((0.0 <= dVar27) && (dVar14 = dVar27, 1.0 < dVar27)) {
      dVar14 = 1.0;
    }
    fVar1 = (float)(dVar17 * dVar14 + dVar22);
    fVar2 = (float)(dVar17 * dVar19 + dVar22);
    fVar3 = (float)(dVar16 * dVar19 + dVar20);
    fVar4 = (float)(dVar16 * dVar14 + dVar20);
    fVar5 = (float)(dVar18 * dVar19 + dVar24);
    fVar6 = (float)(dVar18 * dVar14 + dVar24);
    fVar7 = (float)((double)fVar2 - dVar23);
    fVar8 = (float)((double)fVar1 - dVar23);
    fVar9 = (float)((double)fVar3 - dVar21);
    fVar10 = (float)((double)fVar4 - dVar21);
    fVar11 = (float)((double)fVar5 - dVar25);
    fVar12 = (float)((double)fVar6 - dVar25);
    dVar14 = ABS((double)(float)((double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7) -
                                dVar15));
    if (dVar14 - (double)(float)(dVar15 * 0.009999999776482582) < 0.0) {
      dVar14 = dVar26;
    }
    dVar19 = ABS((double)(float)((double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) -
                                dVar15));
    if (dVar19 - (double)(float)(dVar15 * 0.009999999776482582) < 0.0) {
      dVar19 = dVar26;
    }
    if (dVar19 <= dVar14) {
      if (dVar14 == dVar19) {
        fVar7 = (float)((double)fVar2 - (double)prevPnt->y);
        fVar8 = (float)((double)fVar1 - (double)prevPnt->y);
        fVar9 = (float)((double)fVar3 - (double)prevPnt->x);
        fVar10 = (float)((double)fVar4 - (double)prevPnt->x);
        fVar11 = (float)((double)fVar5 - (double)prevPnt->z);
        fVar12 = (float)((double)fVar6 - (double)prevPnt->z);
        if (SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) <=
            SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7)) {
          outPnt->x = fVar4;
          outPnt->y = fVar1;
          outPnt->z = fVar6;
          outPnt->w = fVar13;
        }
        else {
          outPnt->x = fVar3;
          outPnt->y = fVar2;
          outPnt->z = fVar5;
          outPnt->w = fVar13;
          dVar19 = dVar14;
        }
      }
      else {
        outPnt->x = fVar4;
        outPnt->y = fVar1;
        outPnt->z = fVar6;
        outPnt->w = fVar13;
      }
    }
    else {
      outPnt->x = fVar3;
      outPnt->y = fVar2;
      outPnt->z = fVar5;
      outPnt->w = fVar13;
      dVar19 = dVar14;
    }
  }
  return dVar19;
}


// 0x01375b8 (0x320 bytes)
double ClosestTOnSegment(float r,float *out_t,Vec4 *prev,Vec4 *pos,Vec4 *a,Vec4 *b)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar7 = (double)r;
  dVar12 = (double)a->y;
  dVar11 = (double)pos->y;
  dVar20 = (double)(float)((double)b->y - dVar12);
  dVar15 = (double)a->x;
  dVar13 = (double)pos->x;
  dVar10 = (double)a->z;
  dVar21 = (double)(float)((double)b->x - dVar15);
  dVar9 = (double)pos->z;
  dVar19 = (double)(float)((double)b->z - dVar10);
  fVar1 = (float)(dVar19 * dVar19 +
                 (double)(float)(dVar21 * dVar21 + (double)(float)(dVar20 * dVar20)));
  dVar22 = (double)(-(float)(dVar19 * (double)(float)(dVar10 - dVar9) +
                            (double)(float)(dVar21 * (double)(float)(dVar15 - dVar13) +
                                           (double)(float)(dVar20 * (double)(float)(dVar12 - dVar11)
                                                          ))) / fVar1);
  fVar2 = (float)((double)(float)(dVar20 * dVar22 + dVar12) - dVar11);
  fVar3 = (float)((double)(float)(dVar21 * dVar22 + dVar15) - dVar13);
  fVar4 = (float)((double)(float)(dVar19 * dVar22 + dVar10) - dVar9);
  dVar8 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (dVar7 <= dVar8) {
    if (0.0 <= dVar22) {
      if (1.0 < dVar22) {
        *out_t = 1.0;
        fVar1 = b->y - pos->y;
        fVar2 = b->x - pos->x;
        fVar3 = b->z - pos->z;
        dVar8 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) -
                                   dVar7));
      }
    }
    else {
      *out_t = 0.0;
      fVar1 = a->y - pos->y;
      fVar2 = a->x - pos->x;
      fVar3 = a->z - pos->z;
      dVar8 = ABS((double)(float)((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) -
                                 dVar7));
    }
    if (dVar8 < (double)(float)(dVar7 * 0.009999999776482582)) {
      dVar8 = 0.0;
    }
  }
  else {
    dVar16 = 0.0;
    dVar8 = (double)(SQRT((float)(dVar7 * dVar7 - (double)(float)(dVar8 * dVar8))) / SQRT(fVar1));
    dVar17 = (double)(float)(dVar22 - dVar8);
    dVar18 = dVar16;
    if ((0.0 <= dVar17) && (dVar18 = dVar17, 1.0 < dVar17)) {
      dVar18 = 1.0;
    }
    dVar8 = (double)(float)(dVar8 + dVar22);
    dVar22 = dVar16;
    if ((0.0 <= dVar8) && (dVar22 = dVar8, 1.0 < dVar8)) {
      dVar22 = 1.0;
    }
    dVar14 = (double)(float)(dVar21 * dVar18 + dVar15);
    dVar15 = (double)(float)(dVar21 * dVar22 + dVar15);
    dVar17 = (double)(float)(dVar20 * dVar18 + dVar12);
    dVar21 = (double)(float)(dVar19 * dVar18 + dVar10);
    dVar10 = (double)(float)(dVar19 * dVar22 + dVar10);
    dVar12 = (double)(float)(dVar20 * dVar22 + dVar12);
    fVar1 = (float)(dVar14 - dVar13);
    fVar2 = (float)(dVar15 - dVar13);
    fVar3 = (float)(dVar17 - dVar11);
    fVar4 = (float)(dVar21 - dVar9);
    fVar5 = (float)(dVar12 - dVar11);
    fVar6 = (float)(dVar10 - dVar9);
    dVar9 = ABS((double)(float)((double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3) - dVar7)
               );
    if (dVar9 - (double)(float)(dVar7 * 0.009999999776482582) < 0.0) {
      dVar9 = dVar16;
    }
    dVar8 = ABS((double)(float)((double)SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5) - dVar7)
               );
    if (dVar8 - (double)(float)(dVar7 * 0.009999999776482582) < 0.0) {
      dVar8 = dVar16;
    }
    if (dVar8 <= dVar9) {
      if (dVar9 == dVar8) {
        fVar1 = (float)(dVar17 - (double)prev->y);
        fVar2 = (float)(dVar12 - (double)prev->y);
        fVar3 = (float)(dVar14 - (double)prev->x);
        fVar4 = (float)(dVar15 - (double)prev->x);
        fVar5 = (float)(dVar21 - (double)prev->z);
        fVar6 = (float)(dVar10 - (double)prev->z);
        if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2) <=
            SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1)) {
          *out_t = (float)dVar22;
        }
        else {
          *out_t = (float)dVar18;
          dVar8 = dVar9;
        }
      }
      else {
        *out_t = (float)dVar22;
      }
    }
    else {
      *out_t = (float)dVar18;
      dVar8 = dVar9;
    }
  }
  return dVar8;
}


// 0x01378e0 (0x1b0 bytes)
double NearestPntOnPathAtDist
                 (float radius,Vec4 *outPnt,Vec4 *prevPnt,Vec4 *pos,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  Spline *pSVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_60;
  
  dVar9 = (double)radius;
  iVar7 = 0;
  dVar11 = 99999997952.0;
  if (0 < spline->cnt + -1) {
    dVar12 = 0.10000000149011612;
    pSVar8 = spline;
    do {
      dVar10 = ClosestPntOnSegmentAtDist
                         ((float)dVar9,&local_60,prevPnt,pos,pSVar8->points,pSVar8->points + 1);
      if (dVar11 <= dVar10) {
        if (ABS((double)(float)(dVar10 - dVar11)) < dVar12) {
          fVar1 = local_60.y - prevPnt->y;
          fVar2 = outPnt->y - prevPnt->y;
          fVar3 = local_60.x - prevPnt->x;
          fVar4 = outPnt->x - prevPnt->x;
          fVar5 = local_60.z - prevPnt->z;
          fVar6 = outPnt->z - prevPnt->z;
          if (SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1) <
              SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2)) {
            outPnt->x = local_60.x;
            outPnt->y = local_60.y;
            outPnt->z = local_60.z;
            outPnt->w = local_60.w;
            dVar11 = dVar10;
          }
        }
      }
      else {
        outPnt->x = local_60.x;
        outPnt->y = local_60.y;
        outPnt->z = local_60.z;
        outPnt->w = local_60.w;
        dVar11 = dVar10;
      }
      iVar7 = iVar7 + 1;
      pSVar8 = (Spline *)pSVar8->points;
    } while (iVar7 < spline->cnt + -1);
  }
  return dVar11;
}


// 0x0137a98 (0xf8 bytes)
float NearestPntOnPath
                (float radius,int *outSeg,float *out,Vec4 *prevPnt,Vec4 *pos,Spline *spline)

{
  int iVar1;
  Spline *pSVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_50 [2];
  
  dVar3 = (double)radius;
  iVar1 = 0;
  dVar5 = 99999997952.0;
  pSVar2 = spline;
  if (0 < spline->cnt + -1) {
    do {
      dVar4 = ClosestTOnSegment((float)dVar3,local_50,prevPnt,pos,pSVar2->points,pSVar2->points + 1)
      ;
      if (dVar4 < dVar5) {
        *outSeg = iVar1;
        *out = local_50[0];
        dVar5 = dVar4;
      }
      iVar1 = iVar1 + 1;
      pSVar2 = (Spline *)pSVar2->points;
    } while (iVar1 < spline->cnt + -1);
  }
  return (float)dVar5;
}


// 0x0137b90 (0x38 bytes)
void Path_InitFromMobyInstance(MobyInstance *moby,Spline *spline)

{
  f32 temp;
  
  spline->zOff = 0.25;
  temp = (moby->pos).x;
  spline->cursor = 0;
  spline->points[0].x = temp;
  temp = (moby->pos).y;
  spline->cnt = 1;
  spline->points[0].y = temp;
  temp = (moby->pos).z;
  spline->points[0].w = 0.0;
  spline->points[0].z = temp;
  return;
}


// 0x0137bc8 (0x8c bytes)
void Path_RaiseCollLine(float zOff,MobyInstance *moby,Vec4 *a,Vec4 *b)

{
  double dVar1;
  
  dVar1 = (double)zOff;
  b->z = (float)((double)b->z + dVar1);
  a->z = (float)((double)a->z + dVar1);
  CollLine(a,b,4,moby,0);
  a->z = (float)((double)a->z - dVar1);
  b->z = (float)((double)b->z - dVar1);
  return;
}


// 0x0137c54 (0x190 bytes)
int PathTryStep(MobyInstance *moby,Spline *spline)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  
  lVar3 = (longlong)(int)moby;
  iVar2 = spline->cnt;
  iVar9 = -1;
  if (iVar2 != 0) {
    uVar5 = spline->cursor;
    lVar6 = (ulonglong)uVar5 + 1;
    uVar8 = (longlong)((int)lVar6 / iVar2) * (longlong)iVar2;
    uVar7 = lVar6 - uVar8;
    iVar2 = (int)((uVar7 & 0xffffffff) << 4);
    spline->cursor = (int32_t)uVar7;
    dVar10 = (double)spline->zOff;
    *(float *)((int)&spline->points[0].z + iVar2) =
         (float)((double)*(float *)((int)&spline->points[0].z + iVar2) + dVar10);
    (moby->pos).z = (float)((double)(moby->pos).z + dVar10);
    iVar4 = CollLine(lVar3 + 0x10,
                               (longlong)(int)spline + ((ulonglong)uVar5 & 0xfffffff) * 0x10 +
                               (uVar8 & 0xfffffff) * -0x10 + 0x20 & 0xffffffff,4,lVar3,0);
    fVar1 = (float)((double)(moby->pos).z - dVar10);
    (moby->pos).z = fVar1;
    *(float *)((int)&spline->points[0].z + iVar2) =
         (float)((double)*(float *)((int)&spline->points[0].z + iVar2) - dVar10);
    uVar5 = spline->cnt;
    dVar10 = (double)spline->zOff;
    iVar2 = spline->cursor;
    if (iVar4 == 0) {
      uVar5 = iVar2 + 1;
      spline->cnt = uVar5;
      iVar9 = iVar2;
      if (iVar2 != -1) {
        return iVar2;
      }
    }
    if (uVar5 != iVar2 + 1U) {
      uVar7 = (longlong)(int)spline + ((ulonglong)uVar5 & 0xfffffff) * 0x10;
      iVar2 = (int)uVar7;
      *(float *)(iVar2 + 8) = (float)((double)*(float *)(iVar2 + 8) + dVar10);
      (moby->pos).z = (float)((double)fVar1 + dVar10);
      iVar4 = CollLine(lVar3 + 0x10,uVar7 & 0xffffffff,4,lVar3,0);
      (moby->pos).z = (float)((double)(moby->pos).z - dVar10);
      *(float *)(iVar2 + 8) = (float)((double)*(float *)(iVar2 + 8) - dVar10);
      if (iVar4 == 0) {
        iVar9 = spline->cnt + -1;
      }
    }
  }
  return iVar9;
}


// 0x0137de4 (0xb8 bytes)
ulonglong path__Path_RecordPnt(MobyInstance *moby,Spline *spline)

{
  int iVar1;
  int iVar2;
  
  iVar1 = spline->cnt;
  if (iVar1 < spline->cap) {
    spline->points[iVar1].x = (moby->pos).x;
    spline->points[iVar1].y = (moby->pos).y;
    spline->points[iVar1].z = (moby->pos).z;
    spline->points[iVar1].w = (moby->pos).w;
    spline->points[0].w = 0.0;
  }
  iVar1 = PathTryStep(moby,spline);
  if (iVar1 < 0) {
    iVar1 = spline->cnt;
    iVar2 = spline->cap;
    if (iVar1 <= iVar2) {
      iVar1 = iVar1 + 1;
      spline->cnt = iVar1;
    }
  }
  else {
    iVar1 = iVar1 + 1;
    spline->cnt = iVar1;
    iVar2 = spline->cap;
  }
  return (ulonglong)((longlong)iVar2 - (longlong)iVar1) >> 0x3f ^ 1;
}


// 0x0137ea0 (0x38c bytes)
int32_t Path_TryExtrapolate(MobyInstance *moby,Spline *spline)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  Vec4 *pVVar9;
  ulonglong uVar10;
  int32_t iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<24> local_70;
  int idx;
  
  lVar4 = (longlong)(int)moby;
  idx = spline->cnt;
  iVar11 = -1;
  if (idx != 0) {
    uVar8 = spline->cursor;
    lVar6 = (ulonglong)uVar8 + 1;
    uVar10 = (longlong)((int)lVar6 / idx) * (longlong)idx;
    uVar7 = lVar6 - uVar10;
    idx = (int)((uVar7 & 0xffffffff) << 4);
    spline->cursor = (int32_t)uVar7;
    dVar18 = (double)spline->zOff;
    lVar6 = lVar4 + 0x10;
    *(float *)((int)&spline->points[0].z + idx) =
         (float)((double)*(float *)((int)&spline->points[0].z + idx) + dVar18);
    (moby->pos).z = (float)((double)(moby->pos).z + dVar18);
    iVar5 = CollLine(lVar6,(longlong)(int)spline + ((ulonglong)uVar8 & 0xfffffff) * 0x10 +
                                     (uVar10 & 0xfffffff) * -0x10 + 0x20 & 0xffffffff,4,lVar4,0);
    fVar1 = (float)((double)(moby->pos).z - dVar18);
    dVar12 = (double)fVar1;
    (moby->pos).z = fVar1;
    *(float *)((int)&spline->points[0].z + idx) =
         (float)((double)*(float *)((int)&spline->points[0].z + idx) - dVar18);
    uVar8 = spline->cnt;
    dVar18 = (double)spline->zOff;
    idx = spline->cursor;
    if (iVar5 == 0) {
      uVar8 = idx + 1;
      spline->cnt = uVar8;
      iVar11 = idx;
    }
    if (uVar8 == idx + 1U) {
      if (2 < (int)uVar8) {
        pVVar9 = spline->points + idx + -1;
        dVar14 = (double)(pVVar9->x - pVVar9[1].x);
        dVar15 = (double)(pVVar9->y - pVVar9[1].y);
        dVar13 = (double)pVVar9->w;
        dVar16 = (double)(pVVar9->z - pVVar9[1].z);
        dVar17 = 0.10000000149011612;
        if (iVar11 == -1) {
          iVar5 = MB_randInt(1);
          idx = spline->cursor;
          dVar12 = (double)(moby->pos).z;
          dVar18 = (double)spline->zOff;
          if (iVar5 != 0) {
            fVar1 = spline->points[idx].x;
            fVar2 = spline->points[idx].y;
            fVar3 = spline->points[idx].z;
            (moby->pos).z = (float)(dVar12 + dVar18);
            dVar12 = (double)(float)(dVar16 * dVar17 - (double)fVar3) + dVar18;
            idx = CollLine(lVar6,local_70,4,lVar4,0);
            (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
            if (idx != 0) {
              return -1;
            }
            idx = spline->cursor;
            spline->points[idx].x = (float)(dVar14 * dVar17 - (double)fVar1);
            spline->points[idx].z = (float)((double)(float)dVar12 - dVar18);
            spline->points[idx].y = (float)(dVar15 * dVar17 - (double)fVar2);
            spline->points[idx].w = (float)dVar13;
            return spline->cursor;
          }
        }
        fVar1 = spline->points[idx].x;
        fVar2 = spline->points[idx].y;
        fVar3 = spline->points[idx].z;
        (moby->pos).z = (float)(dVar12 + dVar18);
        dVar12 = (double)(float)(dVar16 * dVar17 + (double)fVar3) + dVar18;
        idx = CollLine(lVar6,local_70,4,lVar4,0);
        (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
        if (idx == 0) {
          idx = spline->cursor;
          spline->points[idx].x = (float)(dVar14 * dVar17 + (double)fVar1);
          spline->points[idx].z = (float)((double)(float)dVar12 - dVar18);
          spline->points[idx].y = (float)(dVar15 * dVar17 + (double)fVar2);
          spline->points[idx].w = (float)dVar13;
          iVar11 = spline->cursor;
        }
      }
    }
    else if (iVar11 == -1) {
      uVar7 = (longlong)(int)spline + ((ulonglong)uVar8 & 0xfffffff) * 0x10;
      idx = (int)uVar7;
      *(float *)(idx + 8) = (float)((double)*(float *)(idx + 8) + dVar18);
      (moby->pos).z = (float)(dVar12 + dVar18);
      iVar5 = CollLine(lVar6,uVar7 & 0xffffffff,4,lVar4,0);
      (moby->pos).z = (float)((double)(moby->pos).z - dVar18);
      *(float *)(idx + 8) = (float)((double)*(float *)(idx + 8) - dVar18);
      if (iVar5 == 0) {
        iVar11 = spline->cnt + -1;
      }
    }
  }
  return iVar11;
}


// 0x0138238 (0x394 bytes)
// inlined: FastRSqrt @0x138378, FastRSqrt @0x1384c0
longlong GetPathPnt(float distance,MobyInstance *moby,Spline *spline,Vec4 *outPos,int segment,
                         int step)

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
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int idx;
  
  lVar20 = (longlong)step;
  iVar19 = spline->cnt + -1;
  lVar18 = (longlong)
           (int)(segment + step +
                ((uint)(ZERO_MASK(segment)) &
                (iVar19 + ((uint)(-lVar20 >> 0x3f) & (segment + 1) - iVar19)) - (segment + step)));
  idx = (int)((longlong)segment << 4);
  lVar18 = lVar18 + (ZERO_MASK((iVar19 - segment)) &
                    ((longlong)(segment + -1) + (-lVar20 >> 0x3f & -(longlong)(segment + -1))) -
                    lVar18);
  iVar17 = (int)lVar18;
  fVar1 = *(float *)((int)&spline->points[0].y + idx);
  fVar2 = *(float *)((int)&spline->points[0].x + idx);
  fVar3 = spline->points[iVar17].y;
  fVar4 = spline->points[iVar17].x;
  fVar12 = fVar3 - fVar1;
  fVar13 = fVar4 - fVar2;
  fVar5 = spline->points[iVar17].z;
  fVar6 = *(float *)((int)&spline->points[0].z + idx);
  fVar15 = fVar5 - fVar6;
  fVar7 = 0.0;
  fVar14 = fVar15 * fVar15 + fVar13 * fVar13 + fVar12 * fVar12;
  fVar8 = spline->points[iVar17].w;
  fVar16 = SQRT(fVar14);
  fVar9 = fVar7;
  fVar11 = fVar7;
  fVar10 = fVar7;
  if (fVar16 != 0.0) {
    fVar10 = 1.0 / SQRT(fVar14);
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar14 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar9 = fVar13 * fVar10;
    fVar11 = fVar12 * fVar10;
    fVar10 = fVar15 * fVar10;
  }
  fVar1 = fVar11 * ((moby->pos).y - fVar1) +
          fVar10 * ((moby->pos).z - fVar6) + fVar9 * ((moby->pos).x - fVar2) + distance;
  lVar21 = (longlong)segment;
  if (fVar16 < fVar1) {
    fVar1 = fVar1 - fVar16;
    idx = iVar17 + step +
          ((uint)(ZERO_MASK(iVar17)) &
          (iVar19 + ((uint)(-lVar20 >> 0x3f) & (iVar17 + 1) - iVar19)) - (iVar17 + step));
    idx = idx + ((uint)(ZERO_MASK((iVar19 - iVar17))) &
                (iVar17 + -1 + ((uint)(-lVar20 >> 0x3f) & -(iVar17 + -1))) - idx);
    fVar3 = spline->points[idx].y - fVar3;
    fVar4 = spline->points[idx].x - fVar4;
    fVar5 = spline->points[idx].z - fVar5;
    fVar8 = spline->points[idx].w;
    fVar2 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
    lVar21 = lVar18;
    fVar9 = fVar7;
    fVar10 = fVar7;
    fVar11 = fVar7;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar9 = fVar4 * fVar6;
      fVar10 = fVar5 * fVar6;
      fVar11 = fVar3 * fVar6;
    }
  }
  idx = (int)(lVar21 << 4);
  fVar3 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
  fVar1 = fVar1 / fVar3;
  fVar2 = fVar7;
  if (0.0 - fVar3 < 0.0) {
    fVar2 = fVar9 * fVar1;
  }
  fVar4 = fVar7;
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar11 * fVar1;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar7 = fVar10 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar2 = fVar9 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar4 = fVar11 * fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar7 = fVar10 * fVar1;
  }
  outPos->x = fVar2 + *(float *)((int)&spline->points[0].x + idx);
  outPos->y = fVar4 + *(float *)((int)&spline->points[0].y + idx);
  fVar1 = *(float *)((int)&spline->points[0].z + idx);
  outPos->w = fVar8;
  outPos->z = fVar7 + fVar1;
  return lVar21;
}


// 0x01385d0 (0x1d0 bytes)
longlong Path_PickNextNode(MobyInstance *moby,Spline *spline,Vec4 *ref,Vec4 *out)

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
  Vec4 *pVVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  
  fVar1 = (moby->pos).y;
  fVar2 = (moby->pos).x;
  fVar6 = fVar1 - ref->y;
  fVar3 = ref->x;
  fVar4 = (moby->pos).z;
  fVar9 = fVar2 - fVar3;
  lVar17 = -1;
  fVar12 = fVar4 - ref->z;
  lVar21 = 0;
  fVar5 = 10000.0;
  lVar19 = -1;
  fVar14 = fVar5;
  if (0 < spline->cnt) {
    do {
      pVVar15 = spline->points + (int)lVar21;
      fVar7 = pVVar15->y - fVar1;
      fVar10 = pVVar15->x - fVar2;
      fVar8 = pVVar15->y - ref->y;
      fVar13 = pVVar15->z - fVar4;
      fVar11 = pVVar15->x - fVar3;
      fVar10 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar7 * fVar7);
      fVar7 = pVVar15->z - ref->z;
      fVar7 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar8 * fVar8);
      if (fVar10 < fVar5) {
        lVar19 = lVar21;
        fVar5 = fVar10;
      }
      if (fVar7 < SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar6 * fVar6) && fVar7 < fVar14) {
        lVar17 = lVar21;
        fVar14 = fVar7;
      }
      iVar22 = (int)lVar21 + 1;
      lVar21 = (longlong)iVar22;
    } while (iVar22 < spline->cnt);
    iVar22 = (int)lVar17;
    if (iVar22 != -1) {
      iVar20 = (int)lVar19;
      iVar16 = (int)(lVar19 << 4);
      if (iVar20 == iVar22) {
        out->x = *(float *)((int)&spline->points[0].x + iVar16);
        out->y = *(float *)((int)&spline->points[0].y + iVar16);
        out->z = *(float *)((int)&spline->points[0].z + iVar16);
        out->w = *(float *)((int)&spline->points[0].w + iVar16);
        return lVar19;
      }
      if (iVar22 <= iVar20) {
        pfVar18 = (float *)((int)&((Spline *)(spline->points + -1))->cnt + iVar16);
        out->x = *pfVar18;
        out->y = pfVar18[1];
        out->z = pfVar18[2];
        out->w = pfVar18[3];
        return (longlong)(iVar20 + -1);
      }
      out->x = *(float *)((int)&spline->points[1].x + iVar16);
      out->y = *(float *)((int)&spline->points[1].y + iVar16);
      out->z = *(float *)((int)&spline->points[1].z + iVar16);
      out->w = *(float *)((int)&spline->points[1].w + iVar16);
      return (longlong)(iVar20 + 1);
    }
  }
  out->x = fVar3;
  out->y = ref->y;
  out->z = ref->z;
  out->w = ref->w;
  return lVar17;
}


// 0x01387a0 (0x5c bytes)
void PosRing_Init(double param_1,double param_2,double param_3,undefined4 *param_4,
                       undefined1 *param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8,
                       undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  *param_5 = 1;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[4] = 0;
  param_5[3] = param_6;
  *(float *)(param_5 + 0x10) = (float)param_1;
  uVar1 = *param_4;
  *(undefined4 *)(param_5 + 0x24) = uVar1;
  uVar2 = param_4[1];
  *(undefined4 *)(param_5 + 0x28) = uVar2;
  fVar3 = (float)param_4[2];
  *(undefined4 *)(param_5 + 8) = param_8;
  *(undefined4 *)(param_5 + 0xc) = param_9;
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = uVar2;
  *(float *)(param_5 + 0x14) = (float)param_2;
  *(float *)(param_5 + 0x18) = (float)param_3;
  *(float *)(param_5 + 0x2c) = (float)((double)fVar3 + param_1);
  *(float *)(param_5 + 0x38) = (float)((double)fVar3 + param_1);
  return;
}


// 0x0138810 (0x358 bytes)
undefined8 PosRing_CollLineSampled(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar15;
  ulonglong unaff_r30;
  longlong lVar16;
  ulonglong unaff_r31;
  undefined8 uVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar16 = uVar11 - 0x110;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar11;
  puVar10[0x24] = in_LR;
  puVar10[0x1a] = in_f24;
  puVar10[0x1b] = in_f25;
  puVar10[0x1c] = in_f26;
  puVar10[0x1d] = in_f27;
  puVar10[0x1e] = in_f28;
  puVar10[0x1f] = in_f29;
  puVar10[0x20] = in_f30;
  puVar10[0x21] = in_f31;
  puVar10[0x15] = unaff_r27;
  puVar10[0x16] = unaff_r28;
  puVar10[0x19] = unaff_r31;
  uVar17 = 0;
  fVar1 = param_3[1];
  puVar10[0x17] = unaff_r29;
  fVar2 = param_2[1];
  iVar15 = 0;
  fVar3 = *param_2;
  fVar4 = *param_3;
  iVar14 = 0;
  puVar10[0x18] = unaff_r30;
  puVar10[0x14] = unaff_r26;
  dVar26 = (double)SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar2 - fVar1) * (fVar2 - fVar1));
  lVar12 = lVar16;
  iVar13 = param_1;
  do {
    iVar8 = *(int *)(iVar13 + 8);
    if (iVar8 != 0) {
      uVar9 = *(undefined4 *)(iVar8 + 0x94);
      *(undefined4 *)(iVar8 + 0x94) = 0;
      *(undefined4 *)((int)lVar12 + 0x94) = uVar9;
    }
    iVar14 = iVar14 + 1;
    iVar13 = iVar13 + 4;
    lVar12 = lVar12 + 4;
  } while (iVar14 < 2);
  if (10.0 <= dVar26) {
    dVar18 = (double)FastFrac((double)(float)(dVar26 * 0.10000000149011612),0x140000,
                                        uVar11 - 0x80);
    dVar25 = 0.0;
    dVar19 = (double)*(float *)(puVar10 + 0x12);
    fVar1 = *param_2;
    dVar22 = (double)fVar1;
    fVar2 = param_2[1];
    dVar21 = (double)fVar2;
    fVar3 = param_2[2];
    dVar20 = (double)fVar3;
    fVar4 = param_2[3];
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar7 = param_3[2];
    if (0.0 < dVar18) {
      dVar18 = dVar19 + 1.0;
      dVar19 = (double)(float)dVar18;
      *(float *)(puVar10 + 0x12) = (float)dVar18;
    }
    fVar6 = (float)((double)fVar6 - dVar21);
    fVar5 = (float)((double)fVar5 - dVar22);
    fVar7 = (float)((double)fVar7 - dVar20);
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar2;
    *(float *)(puVar10 + 0xf) = fVar3;
    *(float *)((int)puVar10 + 0x7c) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar4;
    fVar1 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar2 = (float)(dVar26 / dVar19) / fVar1;
    dVar18 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    dVar23 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    dVar24 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar18 = (double)(fVar6 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar23 = (double)(fVar5 * fVar2);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar24 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar10 + 0x10) = (float)(dVar22 + dVar23);
    *(float *)((int)puVar10 + 0x84) = (float)(dVar21 + dVar18);
    *(float *)(puVar10 + 0x11) = (float)(dVar20 + dVar24);
    fVar1 = SQRT((float)(dVar24 * dVar24 +
                        (double)(float)(dVar23 * dVar23 + (double)(float)(dVar18 * dVar18))));
    dVar20 = (double)(((float)(dVar26 / dVar19) * -0.1) / fVar1);
    dVar26 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    dVar21 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    dVar22 = dVar25;
    if (0.0 - fVar1 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar26 = (double)(float)(dVar24 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar21 = (double)(float)(dVar18 * dVar20);
    }
    if (fVar1 - 0.0 < 0.0) {
      dVar22 = (double)(float)(dVar23 * dVar20);
    }
    if (0.0 < dVar19) {
      dVar19 = 1.0;
      do {
        uVar17 = CollLine(uVar11 - 0xa0,uVar11 - 0x90,0,*(undefined4 *)(param_1 + 8),0);
        if ((int)uVar17 != 0) break;
        fVar1 = *(float *)(puVar10 + 0x12);
        fVar2 = *(float *)(puVar10 + 0x10);
        fVar3 = *(float *)((int)puVar10 + 0x84);
        fVar4 = *(float *)(puVar10 + 0x11);
        *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x8c);
        *(float *)(puVar10 + 0x10) = (float)((double)fVar2 + dVar23);
        *(float *)(puVar10 + 0xe) = (float)((double)fVar2 + dVar22);
        *(float *)((int)puVar10 + 0x84) = (float)((double)fVar3 + dVar18);
        *(float *)(puVar10 + 0x11) = (float)((double)fVar4 + dVar24);
        *(float *)((int)puVar10 + 0x74) = (float)((double)fVar3 + dVar21);
        *(float *)(puVar10 + 0xf) = (float)((double)fVar4 + dVar26);
        *(float *)(puVar10 + 0x12) = (float)((double)fVar1 - dVar19);
      } while (dVar25 < (double)(float)((double)fVar1 - dVar19));
    }
  }
  else {
    uVar17 = CollLine(param_2,param_3,0,*(undefined4 *)(param_1 + 8),0);
  }
  do {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x94) = *(undefined4 *)((int)lVar16 + 0x94);
    }
    iVar15 = iVar15 + 1;
    param_1 = param_1 + 4;
    lVar16 = lVar16 + 4;
  } while (iVar15 < 2);
  return uVar17;
}


// 0x0138b68 (0x7c bytes)
ulonglong PosRing_IsIndexBefore(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_3 - param_2 >> 0x3f;
    }
    else {
      uVar2 = param_3 - param_2 >> 0x3f;
    }
  }
  return uVar2;
}


// 0x0138be4 (0x7c bytes)
ulonglong PosRing_IsIndexBeforeWrapped(byte *param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  if ((uint)param_2 == 0xff) {
    uVar2 = 0;
  }
  else if ((uint)param_3 == 0xff) {
    uVar2 = 1;
  }
  else {
    bVar1 = *param_1;
    if ((uint)bVar1 < (uint)param_1[2]) {
      if ((uint)param_3 <= (uint)bVar1) {
        param_3 = param_3 + param_1[3] & 0xff;
      }
      if ((uint)param_2 <= (uint)bVar1) {
        param_2 = param_2 + param_1[3] & 0xff;
      }
      uVar2 = param_2 - param_3 >> 0x3f;
    }
    else {
      uVar2 = param_2 - param_3 >> 0x3f;
    }
  }
  return uVar2;
}


// 0x0138c60 (0x54 bytes)
undefined8 PosRing_IsIndexOutsideRange(byte *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_2 == 0xff) {
    uVar3 = 0;
  }
  else {
    bVar1 = *param_1;
    bVar2 = param_1[2];
    if (bVar1 < bVar2) {
      uVar3 = 0;
      if ((param_2 <= bVar2) || (bVar1 < param_2)) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
      if ((bVar2 <= param_2) && (param_2 < bVar1)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


// 0x0138cb4 (0x5c bytes)
uint PosRing_NextIndexClamped(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (param_2 & 0xff) + 1;
  bVar1 = param_1[2];
  uVar2 = (uint)bVar1;
  uVar4 = uVar4 - (uVar4 / param_1[3]) * (uint)param_1[3] & 0xff;
  uVar5 = (uint)*param_1;
  uVar3 = uVar2;
  if (uVar5 < bVar1) {
    uVar3 = uVar4;
    if ((bVar1 < uVar4) && (uVar4 <= uVar5)) {
      uVar3 = uVar2;
    }
  }
  else if ((bVar1 <= uVar4) && (uVar4 < uVar5)) {
    uVar3 = uVar4;
  }
  return uVar3;
}


// 0x0138d10 (0x140 bytes)
longlong PosRing_StepClearBack(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  GPiece<16> local_20;
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00138d94;
  }
  *param_3 = bVar2;
LAB_00138d94:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  bVar3 = (byte)uVar6;
  if ((int)uVar6 == 0) {
    bVar3 = param_2[3];
  }
  *param_3 = bVar3 - 1;
  return (ZERO_MASK(iVar5) & (ulonglong)bVar1 - 0xff) + 0xff;
}


// 0x0138e58 (0x3a4 bytes)
void PosRing_FindClearPointFwd
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  GPiece<24> local_40;
  
  uVar7 = PosRing_StepClearBack(local_40,param_1,param_6);
  if (uVar7 != 0xff) {
    bVar1 = *param_5;
    uVar9 = (uint)bVar1;
    if (uVar7 != 0xff) {
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        uVar10 = uVar7;
        if (bVar2 < param_1[2]) {
          uVar9 = (uint)bVar1;
          if (bVar1 <= bVar2) {
            uVar9 = (uint)bVar1 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar7 <= (int)(uint)bVar2) {
            uVar10 = uVar7 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar10 <= (int)uVar9) goto LAB_00138fc8;
      }
      *param_3 = *(float *)(param_1 + uVar7 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar7 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar7 * 0xc + 0x2c);
      bVar1 = *param_5;
      if (bVar1 != 0xff) {
        bVar2 = *param_1;
        bVar3 = param_1[2];
        if (bVar2 < bVar3) {
          bVar6 = false;
          if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
            bVar6 = true;
          }
        }
        else {
          bVar6 = false;
          if ((bVar3 <= bVar1) && (bVar1 < bVar2)) {
            bVar6 = true;
          }
        }
        if (bVar6) {
          param_1[2] = bVar1;
        }
      }
      *param_5 = (byte)uVar7;
    }
  }
LAB_00138fc8:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar8 = CollLine(param_2,param_3,2,0,0), iVar8 == 0)) {
    bVar1 = *param_5;
    if ((bVar1 == 0xff) || (bVar1 == *param_1)) {
      if (bVar1 != 0xff) {
        param_1[2] = bVar1;
      }
      *param_5 = 0xff;
    }
    else {
      param_1[2] = bVar1;
      uVar7 = (*param_5 + 1) - ((*param_5 + 1) / (uint)param_1[3]) * (uint)param_1[3];
      *param_5 = (byte)uVar7;
      *param_3 = *(float *)(param_1 + (uVar7 & 0xff) * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  bVar1 = *param_5;
  if (bVar1 == 0xff) {
    fVar4 = param_4[1];
    *param_3 = *param_4;
    fVar5 = param_4[2];
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    bVar1 = *param_5;
  }
  if (bVar1 == *param_1) {
    bVar1 = param_1[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x24) = *param_2;
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x28) = param_2[1];
    *(float *)(param_1 + (uint)bVar1 * 0xc + 0x2c) = param_2[2];
    *param_3 = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x24);
    param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
    param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
  }
  return;
}


// 0x01391fc (0x13c bytes)
longlong PosRing_StepClearFwd(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  GPiece<16> local_20;
  
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    bVar2 = *param_2;
  }
  else {
    bVar2 = *param_2;
    bVar3 = param_2[2];
    if (bVar2 < bVar3) {
      bVar4 = false;
      if ((bVar1 <= bVar3) || (bVar2 < bVar1)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = bVar1 < bVar2 && bVar3 <= bVar1;
    }
    if (bVar4) goto LAB_00139280;
  }
  *param_3 = bVar2;
LAB_00139280:
  iVar5 = PosRing_CollLineSampled(param_2,local_20,param_1);
  bVar1 = *param_3;
  bVar3 = *param_2;
  uVar6 = (ulonglong)bVar1;
  if (bVar1 == param_2[2]) {
    *param_3 = bVar3;
    uVar6 = (ulonglong)bVar3;
  }
  *param_3 = (char)(uVar6 + 1) - (char)((uint)(uVar6 + 1) / (uint)param_2[3]) * param_2[3];
  return (ZERO_MASK(iVar5) & (ulonglong)bVar1 - 0xff) + 0xff;
}


// 0x0139340 (0x2d8 bytes)
void PosRing_FindClearPointBack
               (byte *param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
               undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  GPiece<24> local_40;
  
  uVar6 = PosRing_StepClearFwd(local_40,param_1,param_6);
  if (uVar6 != 0xff) {
    bVar8 = *param_5;
    uVar9 = (uint)bVar8;
    if (uVar6 != 0xff) {
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        uVar10 = uVar6;
        if (bVar1 < param_1[2]) {
          uVar9 = (uint)bVar8;
          if (bVar8 <= bVar1) {
            uVar9 = (uint)bVar8 + (uint)param_1[3] & 0xff;
          }
          if ((int)uVar6 <= (int)(uint)bVar1) {
            uVar10 = uVar6 + param_1[3] & 0xff;
          }
        }
        if ((int)uVar9 <= (int)uVar10) goto LAB_001394b0;
      }
      *param_3 = *(float *)(param_1 + uVar6 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + uVar6 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + uVar6 * 0xc + 0x2c);
      bVar8 = *param_5;
      if (bVar8 != 0xff) {
        bVar1 = *param_1;
        bVar2 = param_1[2];
        if (bVar1 < bVar2) {
          bVar5 = false;
          if ((bVar8 <= bVar2) || (bVar1 < bVar8)) {
            bVar5 = true;
          }
        }
        else {
          bVar5 = false;
          if ((bVar2 <= bVar8) && (bVar8 < bVar1)) {
            bVar5 = true;
          }
        }
        if (bVar5) {
          *param_1 = bVar8;
        }
      }
      *param_5 = (byte)uVar6;
    }
  }
LAB_001394b0:
  if (((SQRT((*param_2 - *param_3) * (*param_2 - *param_3) +
             (param_2[1] - param_3[1]) * (param_2[1] - param_3[1])) < *(float *)(param_1 + 0x14)) &&
      (ABS(param_2[2] - param_3[2]) < *(float *)(param_1 + 0x18))) &&
     (iVar7 = CollLine(param_2,param_3,2,0,0), iVar7 == 0)) {
    bVar8 = *param_5;
    if ((bVar8 == 0xff) || (bVar8 == param_1[2])) {
      if (bVar8 != 0xff) {
        *param_1 = bVar8;
      }
      *param_5 = 0xff;
    }
    else {
      *param_1 = bVar8;
      bVar8 = *param_5 - 1;
      if (*param_5 == 0) {
        bVar8 = param_1[3];
      }
      *param_5 = bVar8;
      *param_3 = *(float *)(param_1 + (uint)bVar8 * 0xc + 0x24);
      param_3[1] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x28);
      param_3[2] = *(float *)(param_1 + (uint)*param_5 * 0xc + 0x2c);
    }
  }
  if (*param_5 == 0xff) {
    fVar3 = param_4[1];
    *param_3 = *param_4;
    fVar4 = param_4[2];
    param_3[1] = fVar3;
    param_3[2] = fVar4;
  }
  return;
}


// 0x0139620 (0x3f4 bytes)
undefined8 PosRing_AddPoint(double param_1,undefined4 *param_2,byte *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  GPiece<16> local_30;
  GPiece<16> local_20;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  bVar10 = param_3[1];
  bVar2 = *param_3;
  bVar3 = param_3[2];
  if (param_1 == 0.0) {
    param_1 = (double)*(float *)(param_3 + 0x10);
  }
  fVar1 = (float)((double)(float)param_2[2] + param_1);
  if (bVar10 != 0xff) {
    if (bVar2 < bVar3) {
      bVar6 = false;
      if ((bVar10 <= bVar3) || (bVar2 < bVar10)) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = bVar10 < bVar2 && bVar3 <= bVar10;
    }
    if (bVar6) goto LAB_001396d8;
  }
  param_3[1] = bVar3;
LAB_001396d8:
  if (bVar3 == bVar2) {
    param_3[1] = bVar2;
    uVar7 = (bVar2 + 1) - ((bVar2 + 1) / (uint)param_3[3]) * (uint)param_3[3];
    uVar13 = 1;
    uVar14 = uVar7 & 0xff;
    *param_3 = (byte)uVar7;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
    *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
    *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
  }
  else {
    iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20);
    if (iVar8 == 0) {
      if (param_3[1] != param_3[2]) {
        iVar8 = param_3[1] - 1;
        if (iVar8 < 0) {
          iVar8 = param_3[3] - 1;
        }
        iVar9 = PosRing_CollLineSampled(param_3,local_30,local_20);
        if (iVar9 == 0) {
          bVar10 = param_3[1];
          param_3[1] = (byte)iVar8;
          *param_3 = bVar10;
        }
      }
      bVar10 = *param_3;
      uVar13 = 1;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + (uint)bVar10 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + (uint)bVar10 * 0xc + 0x2c) = fVar1;
    }
    else {
      bVar10 = param_3[3];
      uVar7 = *param_3 + 1;
      uVar7 = uVar7 - (uVar7 / bVar10) * (uint)bVar10;
      uVar14 = (uint)*param_3;
      if (uVar7 != param_3[2]) {
        *param_3 = (byte)uVar7;
        param_3[1] = (char)(param_3[1] + 1) - (char)((param_3[1] + 1) / (uint)bVar10) * bVar10;
        uVar14 = uVar7;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 0;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
    bVar10 = param_3[2];
    uVar12 = (uint)bVar10;
    uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)param_3[3]) * (uint)param_3[3] & 0xff;
    uVar11 = (uint)*param_3;
    uVar7 = uVar12;
    if (uVar11 < bVar10) {
      uVar7 = uVar14;
      if ((bVar10 < uVar14) && (uVar14 <= uVar11)) {
        uVar7 = uVar12;
      }
    }
    else if ((bVar10 <= uVar14) && (uVar14 < uVar11)) {
      uVar7 = uVar14;
    }
    param_3[4] = (byte)uVar7;
    if ((((uVar7 != *param_3) && (uVar7 != bVar10)) && (uVar7 != param_3[1])) &&
       (iVar8 = PosRing_CollLineSampled(param_3,local_30,local_20), iVar8 == 0)) {
      bVar10 = param_3[3];
      uVar14 = (param_3[4] + 1) - ((param_3[4] + 1) / (uint)bVar10) * (uint)bVar10;
      *param_3 = (byte)uVar14;
      if (param_3[1] != param_3[2]) {
        bVar10 = bVar10 - 1;
        if ((uVar14 & 0xff) != 0) {
          bVar10 = *param_3;
          *param_3 = bVar10 - 1;
          uVar14 = (uint)*param_3;
        }
        param_3[1] = bVar10;
      }
      uVar14 = uVar14 & 0xff;
      uVar13 = 1;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x24) = uVar4;
      *(undefined4 *)(param_3 + uVar14 * 0xc + 0x28) = uVar5;
      *(float *)(param_3 + uVar14 * 0xc + 0x2c) = fVar1;
    }
  }
  return uVar13;
}


// 0x0139a18 (0x11c bytes)
uint PosRing_FindNearestClearPoint(float *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_40;
  
  uVar2 = (uint)*param_2;
  uVar3 = 0xff;
  dVar4 = 1000000.0;
  while( true ) {
    dVar5 = (double)SQRT((param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) *
                         (param_1[2] - *(float *)(param_2 + uVar2 * 0xc + 0x2c)) +
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) *
                         (*param_1 - *(float *)(param_2 + uVar2 * 0xc + 0x24)) +
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)) *
                         (param_1[1] - *(float *)(param_2 + uVar2 * 0xc + 0x28)));
    if (dVar5 < dVar4) {
      iVar1 = PosRing_CollLineSampled(param_2,local_40,param_1);
      if (iVar1 == 0) {
        dVar4 = dVar5;
        uVar3 = uVar2;
      }
    }
    if (uVar2 == param_2[2]) break;
    uVar2 = (uVar2 + 1) - ((uVar2 + 1) / (uint)param_2[3]) * (uint)param_2[3] & 0xff;
  }
  return uVar3;
}


// 0x0139b34 (0xdc bytes)
longlong PosRing_FindLastClearFromTail(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  GPiece<16> local_30;
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)param_2[2];
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + (ZERO_MASK(iVar1) & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)*param_2) break;
    uVar2 = (uVar2 + 1) -
            (longlong)(int)((uint)(uVar2 + 1) / (uint)param_2[3]) * (longlong)(int)(uint)param_2[3]
            & 0xff;
  }
  return lVar3;
}


// 0x0139c10 (0xdc bytes)
longlong PosRing_FindLastClearFromHead(undefined8 param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  GPiece<16> local_30;
  
  lVar3 = 0xff;
  uVar2 = (ulonglong)*param_2;
  while( true ) {
    iVar1 = PosRing_CollLineSampled(param_2,local_30,param_1);
    lVar3 = lVar3 + (ZERO_MASK(iVar1) & uVar2 - lVar3);
    if ((uint)uVar2 == (uint)param_2[2]) break;
    if ((uint)uVar2 == 0) {
      uVar2 = (ulonglong)param_2[3];
    }
    uVar2 = uVar2 - 1 & 0xff;
  }
  return lVar3;
}


// 0x0139cf8 (0x170 bytes)
void PosRing_DebugDraw(byte *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  uVar3 = 0;
  uVar4 = 0x40f86a0000000000;
  uVar1 = 0xffffffff;
  uVar2 = (uint)param_1[2];
  while( true ) {
    SpawnPart_5(uVar4,uVar3,local_70,param_2,param_3,param_4);
    if (-1 < (int)uVar1) {
      STUB_00065468(local_80,local_70);
    }
    if (uVar2 == *param_1) break;
    uVar1 = uVar2;
    uVar2 = (uVar2 + 1) - ((int)(uVar2 + 1) / (int)(uint)param_1[3]) * (uint)param_1[3];
  }
  return;
}


// 0x0139e68 (0x90 bytes)
Vec4 * PathFollower_GetPntPtr(PathFollower *follower,int idx)

{
  Vec4 *pVVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt;
    iVar2 = iVar3 + -1;
    iVar3 = iVar3 + -1;
  }
  if (idx < 0) {
    pVVar1 = follower->pSpline->points + idx + iVar3 + 1;
  }
  else if (iVar2 < idx) {
    iVar3 = idx / (iVar2 + 1);
    pVVar1 = (Vec4 *)((int)follower->pSpline + (idx - (iVar3 * iVar2 + iVar3)) * 0x10 + 0x10);
  }
  else {
    pVVar1 = follower->pSpline->points + idx;
  }
  return pVVar1;
}


// 0x0139ef8 (0x60 bytes)
int PathFollower_WrapIdx(PathFollower *follower,int idx)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < (char)follower->direction) {
    iVar2 = follower->pSpline->cnt + -1;
  }
  if (idx < 0) {
    idx = idx + iVar2;
  }
  else if (iVar2 < idx) {
    iVar1 = idx / (iVar2 + 1);
    idx = idx - (iVar1 * iVar2 + iVar1);
  }
  return idx;
}


// 0x0139f58 (0x58 bytes)
s32 PathFollower_Advance(PathFollower *follower)

{
  int iVar1;
  s32 sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < (char)follower->direction) {
    iVar3 = follower->pSpline->cnt + -1;
  }
  sVar2 = follower->idx + 1;
  if (iVar3 < sVar2) {
    iVar1 = sVar2 / (iVar3 + 1);
    sVar2 = sVar2 - (iVar1 * iVar3 + iVar1);
  }
  follower->idx = sVar2;
  return sVar2;
}


// 0x0139fc0 (0x2c4 bytes)
void Spline_CalcTan
               (float tension,float bias,Vec4 *out,PathFollower *follower,undefined8 param_5,
               float param_6,int offs)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Spline *pSVar6;
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
  Vec4 *pVVar17;
  int iVar18;
  int iVar19;
  Vec4 *pVVar20;
  int iVar21;
  Vec4 *pVVar22;
  int iVar23;
  
  iVar23 = 0;
  iVar19 = follower->idx + offs;
  iVar21 = iVar19 + -1;
  bVar1 = -1 < (char)follower->direction;
  iVar18 = 0;
  if (bVar1) {
    iVar23 = follower->pSpline->cnt + -1;
  }
  if (iVar21 < 0) {
    pSVar6 = follower->pSpline;
    pVVar17 = pSVar6->points + iVar23 + iVar19;
  }
  else {
    if (iVar23 < iVar21) {
      iVar2 = iVar21 / (iVar23 + 1);
      pSVar6 = follower->pSpline;
      iVar21 = iVar21 - (iVar2 * iVar23 + iVar2);
    }
    else {
      pSVar6 = follower->pSpline;
    }
    pVVar17 = pSVar6->points + iVar21;
  }
  iVar23 = 0;
  if (bVar1) {
    iVar23 = pSVar6->cnt + -1;
  }
  if (iVar19 < 0) {
    pVVar22 = pSVar6->points + iVar19 + iVar23 + 1;
  }
  else {
    iVar21 = iVar19;
    if (iVar23 < iVar19) {
      iVar21 = iVar19 / (iVar23 + 1);
      iVar21 = iVar19 - (iVar21 * iVar23 + iVar21);
    }
    pVVar22 = pSVar6->points + iVar21;
  }
  iVar23 = iVar19 + 1;
  if (bVar1) {
    iVar18 = pSVar6->cnt + -1;
  }
  if (iVar23 < 0) {
    pVVar20 = pSVar6->points + iVar18 + iVar19 + 2;
  }
  else {
    if (iVar18 < iVar23) {
      iVar19 = iVar23 / (iVar18 + 1);
      iVar23 = iVar23 - (iVar19 * iVar18 + iVar19);
    }
    pVVar20 = pSVar6->points + iVar23;
  }
  fVar3 = pVVar22->y;
  fVar10 = pVVar17->y - fVar3;
  fVar9 = fVar3 - pVVar20->y;
  fVar4 = pVVar22->x;
  fVar11 = pVVar17->x - fVar4;
  fVar12 = fVar4 - pVVar20->x;
  fVar5 = pVVar22->z;
  fVar13 = pVVar17->z - fVar5;
  fVar14 = fVar5 - pVVar20->z;
  fVar7 = (1.0 - tension) * (1.0 - bias) * 0.5;
  fVar8 = (1.0 - tension) * (bias + 1.0) * 0.5;
  fVar15 = (fVar3 - pVVar17->y) * fVar8 + (pVVar20->y - fVar3) * fVar7;
  fVar16 = (fVar4 - pVVar17->x) * fVar8 + (pVVar20->x - fVar4) * fVar7;
  fVar4 = (fVar5 - pVVar17->z) * fVar8 + (pVVar20->z - fVar5) * fVar7;
  fVar5 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10);
  fVar3 = pVVar22->w;
  fVar7 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar9 * fVar9);
  fVar8 = SQRT(fVar4 * fVar4 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar5 - fVar7 < 0.0) {
    fVar7 = fVar5;
  }
  if (fVar8 <= fVar7 * 1.1) {
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar4;
    out->w = fVar3;
  }
  else {
    fVar5 = 0.0;
    if (fVar8 == 0.0) {
      out->y = fVar15;
      out->z = fVar4;
      out->x = fVar16;
      out->w = fVar3;
      fVar15 = fVar5;
      fVar16 = fVar5;
    }
    else {
      fVar5 = (fVar7 * 1.1) / fVar8;
      out->w = fVar3;
      fVar15 = fVar5 * fVar15;
      fVar16 = fVar5 * fVar16;
      fVar5 = fVar5 * fVar4;
    }
    out->x = fVar16;
    out->y = fVar15;
    out->z = fVar5;
  }
  return;
}


// 0x013a290 (0xd4 bytes)
void Spline_Hermite(float t,Vec4 *out,Vec4 *p0,Vec4 *p1,Vec4 *m0,Vec4 *m1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = t * t;
  fVar2 = t * fVar1;
  fVar7 = -(fVar2 * 2.0 - fVar1 * 3.0);
  fVar3 = fVar2 - fVar1;
  fVar4 = (fVar2 * 2.0 - fVar1 * 3.0) + 1.0;
  fVar1 = -(fVar1 * 2.0 - fVar2) + t;
  fVar5 = p0->x * fVar4;
  out->x = fVar5;
  fVar6 = p0->y * fVar4;
  out->y = fVar6;
  fVar4 = p0->z * fVar4;
  out->z = fVar4;
  out->w = p0->w;
  fVar5 = m0->x * fVar1 + fVar5;
  fVar6 = m0->y * fVar1 + fVar6;
  fVar4 = m0->z * fVar1 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar5 = m1->x * fVar3 + fVar5;
  fVar6 = m1->y * fVar3 + fVar6;
  fVar4 = m1->z * fVar3 + fVar4;
  out->x = fVar5;
  out->y = fVar6;
  out->z = fVar4;
  fVar1 = p1->y;
  fVar2 = p1->z;
  out->x = p1->x * fVar7 + fVar5;
  out->y = fVar1 * fVar7 + fVar6;
  out->z = fVar2 * fVar7 + fVar4;
  return;
}


// 0x013a378 (0xb0 bytes)
void Angle_ApproachWrapped(float from,float to,float rate)

{
  float fVar1;
  
  fVar1 = to - from;
  if (fVar1 <= 3.1415927) {
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  if (fVar1 <= 6.2831855) {
    if (fVar1 < -6.2831855) {
      fVar1 = fVar1 + 6.2831855;
    }
  }
  else {
    fVar1 = fVar1 - 6.2831855;
  }
  FastWrapRot(from,rate * fVar1);
  return;
}


// 0x013a440 (0x3cc bytes)
double Spline_CalcLen
                 (double tension,double bias,PathFollower *follower,undefined8 param_4,
                 undefined8 param_5,double param_6,undefined8 param_7)

{
  float fVar1;
  int iVar2;
  Vec4 *out;
  Vec4 *pVVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  double dVar7;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  Vec4 local_e0;
  Vec4 pnt;
  Vec4 local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  s32 idx;
  Spline *pSpline;
  
  pSpline = follower->pSpline;
  idx = follower->idx;
  iVar8 = SUB84(param_6,0);
  iVar2 = pSpline->cnt;
  pnt.x = pSpline->points[0].x;
  pnt.y = pSpline->points[0].y;
  follower->idx = 0;
  pnt.z = pSpline->points[0].z;
  pnt.w = pSpline->points[0].w;
  uVar4 = (undefined4)param_7;
  if (iVar8 != 0) {
    param_5 = 0;
    param_6 = 1.06151804779458e-314;
    SpawnPart_41(0.666,&pnt,uVar4,0,0x80101080,param_7,0x7f,0xffff,0xff);
  }
  lVar12 = ZEXT48(&stack0x00000000) - 0xf0;
  lVar9 = 0;
  dVar7 = (double)(float)param_6;
  out = (Vec4 *)lVar12;
  Spline_CalcTan((float)tension,(float)bias,out,follower,param_5,(float)param_6,0);
  dVar14 = 0.0;
  if (0 < iVar2) {
    dVar19 = dVar14;
    iVar13 = 0;
    iVar10 = 0;
    do {
      local_e0.x = pnt.x;
      local_e0.y = pnt.y;
      local_e0.z = pnt.z;
      local_e0.w = pnt.w;
      dVar15 = dVar19;
      if (iVar8 != 0) {
        dVar7 = 1.06153215830942e-314;
        SpawnPart_41
                  (1.0,&local_e0,uVar4,iVar10 % 0xf + 2,0x80108010,lVar9,0x7f,0xffff,0xff);
        dVar15 = dVar19;
      }
      iVar11 = iVar10 + 1;
      iVar6 = 0;
      if (-1 < (char)follower->direction) {
        iVar6 = follower->pSpline->cnt + -1;
      }
      if (iVar11 < 0) {
        iVar5 = iVar11 + iVar6;
      }
      else {
        iVar5 = iVar11;
        if (iVar6 < iVar11) {
          iVar5 = iVar11 / (iVar6 + 1);
          iVar5 = iVar11 - (iVar5 * iVar6 + iVar5);
        }
      }
      lVar9 = 1;
      pVVar3 = follower->pSpline->points + iVar5 + -1;
      pnt.x = pVVar3[1].x;
      pnt.y = pVVar3[1].y;
      pnt.z = pVVar3[1].z;
      pnt.w = pVVar3[1].w;
      follower->idx = iVar10;
      Spline_CalcTan((float)tension,(float)bias,out,follower,ZEXT48(pVVar3),(float)dVar7,1);
      local_b0 = local_e0.x;
      local_ac = local_e0.y;
      local_a8 = local_e0.z;
      local_a4 = local_e0.w;
      dVar16 = 0.05000000074505806;
      dVar17 = 1.0;
      dVar20 = 0.20000000298023224;
      dVar18 = dVar16;
      dVar19 = dVar15;
      do {
        if (iVar8 != 0) {
          SpawnPart_41((float)dVar20,&local_b0,uVar4,0,0x80404080,lVar9,0x7f,0xffff,0xff);
        }
        dVar7 = (double)(ZEXT48(&stack0x00000000) - 0x100);
        lVar9 = lVar12;
        Spline_Hermite((float)dVar16,&local_c0,&local_e0,&pnt,SUB84(dVar7,0),out);
        dVar16 = (double)(float)(dVar16 + dVar18);
        local_a4 = local_c0.w;
        fVar1 = (float)(dVar15 + (double)SQRT((local_a8 - local_c0.z) * (local_a8 - local_c0.z) +
                                              (local_b0 - local_c0.x) * (local_b0 - local_c0.x) +
                                              (local_ac - local_c0.y) * (local_ac - local_c0.y)));
        dVar15 = (double)fVar1;
        local_b0 = local_c0.x;
        local_ac = local_c0.y;
        local_a8 = local_c0.z;
      } while (dVar16 <= dVar17);
      dVar14 = (double)(float)(dVar15 + dVar14);
      *(float *)((int)&follower->pSpline->points[0].w + iVar13) = fVar1;
      iVar13 = iVar13 + 0x10;
      iVar10 = iVar11;
    } while (iVar11 < iVar2);
  }
  follower->idx = idx;
  return dVar14;
}


// 0x013a80c (0x1b8 bytes)
void PathFollower_DebugDrawTangents
               (double param_1,double param_2,PathFollower *param_3,undefined8 param_4,
               undefined8 param_5,double param_6)

{
  Spline *pSVar1;
  s32 sVar2;
  int iVar3;
  Vec4 *pVVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  Vec4 local_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  
  pSVar1 = param_3->pSpline;
  sVar2 = param_3->idx;
  iVar3 = pSVar1->cnt;
  dVar10 = (double)pSVar1->points[0].x;
  param_3->idx = 0;
  dVar11 = (double)pSVar1->points[0].y;
  dVar12 = (double)pSVar1->points[0].z;
  dVar13 = (double)pSVar1->points[0].w;
  dVar7 = (double)(float)param_6;
  Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pSVar1),(float)param_6,0);
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      local_80 = (float)((double)local_90.x + dVar10);
      local_7c = (float)((double)local_90.y + dVar11);
      local_74 = (float)dVar13;
      local_78 = (float)((double)local_90.z + dVar12);
      local_64 = (float)dVar13;
      local_70 = (float)(dVar10 - (double)local_90.x);
      local_6c = (float)(dVar11 - (double)local_90.y);
      local_68 = (float)(dVar12 - (double)local_90.z);
      STUB_00065468(&local_80,&local_70);
      iVar9 = iVar8 + 1;
      iVar6 = 0;
      if (-1 < (char)param_3->direction) {
        iVar6 = param_3->pSpline->cnt + -1;
      }
      if (iVar9 < 0) {
        iVar5 = iVar9 + iVar6;
      }
      else {
        iVar5 = iVar9;
        if (iVar6 < iVar9) {
          iVar5 = iVar9 / (iVar6 + 1);
          iVar5 = iVar9 - (iVar5 * iVar6 + iVar5);
        }
      }
      pVVar4 = param_3->pSpline->points + iVar5 + -1;
      dVar10 = (double)pVVar4[1].x;
      dVar11 = (double)pVVar4[1].y;
      dVar12 = (double)pVVar4[1].z;
      dVar13 = (double)pVVar4[1].w;
      param_3->idx = iVar8;
      fVar14 = (float)dVar7;
      dVar7 = (double)fVar14;
      Spline_CalcTan((float)param_1,(float)param_2,&local_90,param_3,ZEXT48(pVVar4),fVar14,1);
      iVar8 = iVar9;
    } while (iVar9 < iVar3);
  }
  param_3->idx = sVar2;
  return;
}


