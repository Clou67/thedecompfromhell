// game/update/moby1174.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ed784-0x1edfd8
#include <stdio.h>
#include "game/update/moby1174.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x01ed784 (0x14 bytes)
void M1174_001ed784(void)

{
  DAT_00765d7c = 0x10000;
  return;
}


// 0x01ed7a8 (0x830 bytes)
// inlined: FastAtan2 @0x1edb1c, FastAtan2 @0x1edccc
// strings: 00654c50: 'Flying do-hickey with no path. UID: %d' | 00654c78: 'Flying do-hickey with a path that has no points. UID: %d \n'

/* Moby 1174 */

void UpdateMoby_1174(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  int iVar18;
  longlong lVar16;
  int iVar19;
  longlong lVar17;
  Spline *pSVar20;
  longlong lVar21;
  float *pfVar23;
  longlong lVar22;
  longlong in_r7;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong uVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x140;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x2a] = in_LR;
  puVar13[0x26] = in_f30;
  puVar13[0x27] = in_f31;
  fVar2 = (moby->pos).x;
  puVar13[0x25] = unaff_r31;
  fVar3 = (moby->pos).y;
  puVar13[0x24] = unaff_r30;
  fVar4 = (moby->pos).z;
  pvVar11 = moby->pVar;
  fVar8 = -fVar3;
  fVar5 = (moby->rotation).x;
  fVar9 = -fVar4;
  *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
  fVar7 = -fVar2;
  fVar6 = (moby->rotation).y;
  *(f32 *)(puVar13 + 0x10) = fVar5;
  fVar5 = (moby->rotation).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar6;
  fVar6 = (moby->rotation).w;
  bVar1 = moby->state;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  *(float *)(puVar13 + 0xe) = fVar7;
  *(float *)((int)puVar13 + 0x74) = fVar8;
  puVar13[0x23] = unaff_r29;
  puVar13[0x22] = unaff_r28;
  puVar13[0x21] = unaff_r27;
  puVar13[0x20] = unaff_r26;
  *(float *)(puVar13 + 0xf) = fVar9;
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar11 + 0x60) == -1) {
      printf("Flying do-hickey with no path. UID: %d",moby->uid);
      DeleteMoby(moby);
      return;
    }
    if (Splines[*(int *)((int)pvVar11 + 0x60)]->cnt == 0) {
      printf("Flying do-hickey with a path that has no points. UID: %d \n",moby->uid);
      DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    pSVar12 = Splines[*(int *)((int)pvVar11 + 0x60)];
    fVar2 = pSVar12->points[0].y - pSVar12->points[1].y;
    fVar3 = pSVar12->points[0].x - pSVar12->points[1].x;
    fVar4 = pSVar12->points[0].z - pSVar12->points[1].z;
    fVar2 = *(float *)((int)pvVar11 + 0x68) +
            (DAT_00765da4 * g_FrameTime) /
            SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar33 = (double)fVar2;
    *(float *)((int)pvVar11 + 0x68) = fVar2;
    puVar13[0x1d] = (longlong)(pSVar12->cnt + -1);
    if ((double)(longlong)puVar13[0x1d] < dVar33) {
      iVar18 = FastDoubleToInt(dVar33);
      puVar13[0x1d] = (longlong)iVar18;
      dVar25 = dVar33 - (double)(longlong)puVar13[0x1d];
      dVar33 = (double)(float)dVar25;
      *(float *)((int)pvVar11 + 0x68) = (float)dVar25;
    }
    lVar16 = FastDoubleToInt(dVar33);
    puVar13[0x1d] = (longlong)(int)lVar16;
    iVar18 = (int)(lVar16 << 4);
    fVar2 = *(float *)((int)pvVar11 + 0x68);
    iVar19 = (int)lVar16 + 2;
    fVar3 = *(float *)((int)&pSVar12->points[1].x + iVar18);
    fVar4 = *(float *)((int)&pSVar12->points[0].x + iVar18);
    fVar7 = *(float *)((int)&pSVar12->points[1].y + iVar18);
    fVar8 = *(float *)((int)&pSVar12->points[0].y + iVar18);
    fVar9 = *(float *)((int)&pSVar12->points[1].z + iVar18);
    fVar10 = *(float *)((int)&pSVar12->points[0].z + iVar18);
    uVar32 = puVar13[0x1d];
    (moby->pos).w = *(f32 *)((int)&pSVar12->points[1].w + iVar18);
    fVar2 = fVar2 - (float)(longlong)uVar32;
    fVar4 = fVar2 * (fVar3 - fVar4) + fVar4;
    fVar8 = fVar2 * (fVar7 - fVar8) + fVar8;
    fVar10 = fVar2 * (fVar9 - fVar10) + fVar10;
    (moby->pos).x = fVar4;
    (moby->pos).y = fVar8;
    (moby->pos).z = fVar10;
    iVar19 = iVar19 - (iVar19 / pSVar12->cnt) * pSVar12->cnt;
    fVar7 = fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 5) * 4) - fVar7) + fVar7;
    fVar3 = fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 4) * 4) - fVar3) + fVar3;
    fVar8 = fVar8 - fVar7;
    fVar4 = fVar4 - fVar3;
    fVar5 = (moby->rotation).z;
    fVar4 = SQRT(fVar4 * fVar4 + fVar8 * fVar8);
    fVar10 = (fVar2 * (*(float *)((int)pSVar12 + (iVar19 * 4 + 6) * 4) - fVar9) + fVar9) - fVar10;
    fVar8 = ABS(fVar10);
    *(float *)(puVar13 + 0x14) = fVar10;
    fVar9 = ABS(fVar4);
    *(float *)((int)puVar13 + 0x9c) = fVar4;
    *(float *)((int)puVar13 + 0xa4) = fVar9 - fVar8;
    dVar33 = 0.0;
    uVar32 = (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar13 + 0x9c));
    if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar13 + 0x14));
    if (*(float *)((int)puVar13 + 0xa4) - 0.0 < 0.0) {
      fVar10 = fVar9;
    }
    dVar25 = dVar33;
    if (0.0 < fVar2) {
      lVar16 = uVar15 - 0x130;
      in_r7 = 2;
      lVar21 = uVar15 - 0x78;
      lVar22 = uVar15 - 0x68;
      lVar24 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar9 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)((int)puVar13 + 0xcc) = fVar2;
      *(float *)(puVar13 + 0x1a) = fVar2;
      *(float *)(puVar13 + 0x19) = fVar2;
      fVar2 = fVar9 * fVar9;
      *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar2;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar2 * fVar9;
      do {
        *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar2 * fVar2;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x78;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar22;
      do {
        fVar2 = *pfVar23;
        fVar9 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar9;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar19 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar18 + 200)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar4);
    }
    (moby->rotation).y = (float)-dVar25;
    *(f32 *)((int)pvVar11 + 0x6c) = fVar5;
    fVar3 = fVar3 - (moby->pos).x;
    fVar7 = fVar7 - (moby->pos).y;
    fVar8 = ABS(fVar3);
    fVar4 = ABS(fVar7);
    *(float *)(puVar13 + 0x12) = fVar3;
    *(float *)((int)puVar13 + 0x94) = fVar7;
    *(float *)(puVar13 + 0x13) = fVar8 - fVar4;
    uVar32 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x12));
    if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar4 = ABS(*(float *)((int)puVar13 + 0x94));
    if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    dVar25 = dVar33;
    if (0.0 < fVar2) {
      lVar16 = uVar15 - 0x130;
      lVar21 = uVar15 - 0x98;
      lVar22 = uVar15 - 0x88;
      lVar24 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xb4) = fVar2;
      *(float *)((int)puVar13 + 0xac) = fVar2;
      *(float *)(puVar13 + 0x16) = fVar2;
      *(float *)(puVar13 + 0x15) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4;
      *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar2;
      *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar2 * fVar2;
        iVar18 = (int)lVar21;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar22 = 4;
      in_r7 = uVar15 - 0x98;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = in_r7;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar19 = (int)in_r7;
        in_r7 = in_r7 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar18 + 0xa8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar7);
    }
    (moby->rotation).z = (float)dVar25;
    dVar25 = (double)FastDiffRots((double)*(float *)((int)pvVar11 + 0x6c),dVar25);
    *(float *)((int)pvVar11 + 0x6c) = (float)dVar25;
    if ((DAT_00f08e1c != 0) && (iVar18 = 0, 0 < pSVar12->cnt)) {
      dVar25 = 0.13330000638961792;
      pSVar20 = pSVar12;
      do {
        pSVar20 = (Spline *)pSVar20->points;
        SpawnPart_41((float)dVar25,pSVar20,moby,4,0x800000ff,in_r7,0x7f,2,0xff);
        iVar18 = iVar18 + 1;
      } while (iVar18 < pSVar12->cnt);
    }
    pMVar14 = g_MobyInstance;
    fVar2 = (moby->transform).v2.y;
    fVar3 = (moby->transform).v2.x;
    fVar4 = (moby->transform).v2.z;
    dVar25 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar25 == dVar33) {
      fVar5 = (moby->transform).v2.w;
      dVar25 = dVar33;
      dVar26 = dVar33;
      dVar27 = dVar33;
    }
    else {
      fVar7 = (float)((double)DAT_00765da0 / dVar25);
      dVar26 = (double)(fVar2 * fVar7);
      dVar25 = (double)(fVar3 * fVar7);
      fVar5 = (moby->transform).v2.w;
      dVar27 = (double)(fVar4 * fVar7);
    }
    fVar3 = (moby->transform).v0.y;
    fVar4 = (moby->transform).v0.x;
    fVar7 = (moby->transform).v0.z;
    iVar18 = *(int *)((int)pvVar11 + 100);
    dVar30 = (double)SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar3 * fVar3);
    fVar2 = (float)((double)DAT_00f08e18 / dVar30);
    dVar29 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar29 = (double)(fVar4 * fVar2);
    }
    dVar28 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar28 = (double)(fVar3 * fVar2);
    }
    dVar31 = dVar33;
    if (dVar33 - dVar30 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar29 = (double)(fVar4 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar28 = (double)(fVar3 * fVar2);
    }
    if (dVar30 - dVar33 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    g_MobyInstance[iVar18].pos.x = (float)(dVar25 + dVar29) + (moby->pos).x;
    pMVar14[iVar18].pos.y = (float)(dVar26 + dVar28) + (moby->pos).y;
    fVar2 = (moby->pos).z;
    pMVar14[iVar18].pos.w = fVar5;
    pMVar14[iVar18].pos.z = (float)(dVar27 + dVar31) + fVar2;
    fVar7 = *(float *)(puVar13 + 0xe);
    fVar2 = (moby->pos).x;
    fVar8 = *(float *)((int)puVar13 + 0x74);
    fVar3 = (moby->pos).y;
    fVar9 = *(float *)(puVar13 + 0xf);
    fVar4 = (moby->pos).z;
  }
  *(float *)(puVar13 + 0xe) = fVar7 + fVar2;
  *(float *)((int)puVar13 + 0x74) = fVar8 + fVar3;
  *(float *)(puVar13 + 0xf) = fVar9 + fVar4;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar11 + 0x20),(Vec4 *)(puVar13 + 0xe),uVar15 - 0xc0,
             (longlong)(int)moby + 0x40);
  return;
}


