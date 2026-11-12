// game/update/moby99.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4cdcd0-0x4ceb48
#include <math.h>
#include "game/update/moby99.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x04cdcd0 (0xe78 bytes)
// strings: 004cdcb8: '?fffA ' (raw)

/* Moby 99 */

void UpdateMoby_99(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  GPiece<16> local_1d0;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<16> local_190;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  GPiece<32> local_100;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  GPiece<16> local_d0;
  GPiece<16> auStack_c0;
  GPiece<16> local_b0;
  GPiece<56> auStack_a0;
  
  lVar11 = (longlong)(int)moby;
  bVar2 = moby->state;
  if (bVar2 != 3) {
    pfVar6 = (float *)moby->pVar;
    bVar9 = false;
    if (bVar2 == 0) {
      fVar19 = MB_GetAnimSeqLength((uint)moby->mClass,0);
      pfVar6[0x16] = fVar19;
      fVar20 = MB_GetAnimSeqTriggerLength((uint)moby->mClass,0);
      fVar19 = pfVar6[0x11];
      pfVar6[0x17] = (fVar20 - pfVar6[0x16]) * 0.15915494;
      if (fVar19 == -NAN) {
        fVar19 = pfVar6[0x1a];
        if (fVar19 == -NAN) {
          moby->state = '\x01';
        }
        else {
          fVar20 = (moby->pos).x;
          *pfVar6 = fVar20;
          fVar3 = (moby->pos).y;
          pfVar6[1] = fVar3;
          fVar4 = (moby->pos).z;
          pfVar6[2] = fVar4;
          pfVar6[3] = (moby->pos).w;
          fVar3 = fVar3 - g_MobyInstance[(int)fVar19].pos.y;
          fVar20 = fVar20 - g_MobyInstance[(int)fVar19].pos.x;
          fVar4 = fVar4 - g_MobyInstance[(int)fVar19].pos.z;
          pfVar6[0x15] = (pfVar6[0x12] * g_FrameTime) /
                         SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
          moby->state = '\x02';
        }
      }
      else {
        fVar20 = (moby->pos).x;
        *pfVar6 = fVar20;
        fVar3 = (moby->pos).y;
        pfVar6[1] = fVar3;
        fVar4 = (moby->pos).z;
        pfVar6[2] = fVar4;
        pfVar6[3] = (moby->pos).w;
        fVar3 = fVar3 - Cuboids[(int)fVar19].pos.y;
        fVar20 = fVar20 - Cuboids[(int)fVar19].pos.x;
        fVar4 = fVar4 - Cuboids[(int)fVar19].pos.z;
        pfVar6[0x15] = (pfVar6[0x12] * g_FrameTime) /
                       SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
        moby->state = '\x02';
      }
      pfVar6[0x18] = 0.0;
      lVar13 = lVar11 + 0x10;
      pfVar6[0x13] = 0.1;
      FastVecAdd(local_190,lVar13,local_1a0);
      CollLine(lVar13,local_1b0,2,0,0);
      FastVecSub(&local_180,local_1b0,lVar13);
      pfVar6[0xc] = local_180;
      pfVar6[0xd] = local_17c;
      pfVar6[0xe] = local_178;
      pfVar6[0xf] = local_174;
    }
    else if (bVar2 < 2) {
      if ((pfVar6[0x10] == -NAN) ||
         (iVar12 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[0x10]),
         iVar12 != 0)) {
        bVar9 = true;
      }
    }
    else if (bVar2 < 3) {
      fVar19 = pfVar6[0x14] + pfVar6[0x15];
      fVar20 = -pfVar6[0x15];
      pfVar6[0x14] = fVar19;
      if (fVar19 <= 1.0) {
        if (fVar19 < 0.0) {
          pfVar6[0x14] = 0.0;
          pfVar6[0x15] = fVar20;
          fVar19 = 0.0;
        }
      }
      else {
        pfVar6[0x14] = 1.0;
        pfVar6[0x15] = fVar20;
        fVar19 = 1.0;
      }
      if (pfVar6[0x1a] == -NAN) {
        fVar8 = pfVar6[0x11];
        fVar5 = pfVar6[1];
        fVar1 = Cuboids[(int)fVar8].pos.y;
        fVar20 = Cuboids[(int)fVar8].pos.z;
        fVar3 = pfVar6[2];
        fVar4 = Cuboids[(int)fVar8].pos.w;
        (moby->pos).x = fVar19 * (Cuboids[(int)fVar8].pos.x - *pfVar6) + *pfVar6;
        (moby->pos).y = fVar19 * (fVar1 - fVar5) + pfVar6[1];
        fVar5 = pfVar6[2];
      }
      else {
        pfVar7 = (float *)g_MobyInstance[(int)pfVar6[0x1a]].pVar;
        fVar5 = pfVar6[1];
        fVar1 = pfVar7[1];
        fVar20 = pfVar7[2];
        fVar3 = pfVar6[2];
        fVar4 = pfVar7[3];
        (moby->pos).x = fVar19 * (*pfVar7 - *pfVar6) + *pfVar6;
        (moby->pos).y = fVar19 * (fVar1 - fVar5) + pfVar6[1];
        fVar5 = pfVar6[2];
      }
      (moby->pos).w = fVar4;
      (moby->pos).z = fVar19 * (fVar20 - fVar3) + fVar5;
      if ((pfVar6[0x10] == -NAN) ||
         (iVar12 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar6[0x10]),
         iVar12 != 0)) {
        lVar13 = lVar11 + 0x10;
        FastVecAdd(local_150,lVar13,local_160);
        CollLine(lVar13,local_170,2,0,0);
        FastVecSub(&local_140,local_170,lVar13);
        bVar9 = true;
        pfVar6[0xc] = local_140;
        pfVar6[0xd] = local_13c;
        pfVar6[0xe] = local_138;
        pfVar6[0xf] = local_134;
      }
    }
    lVar13 = lVar11 + 0x10;
    fVar20 = (moby->transform).v0.x * 12.0;
    fVar3 = (moby->transform).v0.y * 12.0;
    dVar18 = 0.0;
    fVar4 = (moby->transform).v0.z * 12.0;
    fVar5 = (moby->transform).v0.w * 12.0;
    FastVecAdd(&local_130,lVar13,pfVar6 + 0xc);
    fVar19 = pfVar6[0x18];
    if (fVar19 == 0.0) {
      pfVar6[8] = local_130;
      pfVar6[9] = local_12c;
      pfVar6[10] = local_128;
      pfVar6[0xb] = local_124;
    }
    else {
      dVar15 = (double)DAT_008f53ac;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        pfVar6[8] = fVar20;
        pfVar6[9] = fVar3;
        pfVar6[10] = fVar4;
        pfVar6[10] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6[8] = 0.0;
      }
      else {
        fVar1 = (float)((double)(float)(0.20000000298023224 - dVar15) / dVar14);
        pfVar6[8] = fVar20 * fVar1;
        pfVar6[9] = fVar3 * fVar1;
        pfVar6[10] = fVar4 * fVar1;
      }
      pfVar6[0xb] = fVar5;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        *(float *)((int)fVar19 + 0x10) = fVar20;
        *(float *)((int)fVar19 + 0x14) = fVar3;
        *(float *)((int)fVar19 + 0x18) = fVar4;
        *(undefined4 *)((int)fVar19 + 0x18) = 0;
        *(undefined4 *)((int)fVar19 + 0x14) = 0;
        *(undefined4 *)((int)fVar19 + 0x10) = 0;
      }
      else {
        fVar1 = (float)(-dVar15 / dVar14);
        *(float *)((int)fVar19 + 0x10) = fVar20 * fVar1;
        *(float *)((int)fVar19 + 0x14) = fVar3 * fVar1;
        *(float *)((int)fVar19 + 0x18) = fVar4 * fVar1;
      }
      *(float *)((int)fVar19 + 0x1c) = fVar5;
      FastVecAdd(&local_120,pfVar6 + 8,local_1d0);
      pfVar6[8] = local_120;
      pfVar6[9] = local_11c;
      pfVar6[10] = local_118;
      pfVar6[0xb] = local_114;
      FastVecAdd(&local_110,(ulonglong)(uint)pfVar6[0x18] + 0x10,local_1d0);
      fVar19 = pfVar6[0x18];
      *(undefined4 *)((int)fVar19 + 0x10) = local_110;
      *(undefined4 *)((int)fVar19 + 0x14) = local_10c;
      *(undefined4 *)((int)fVar19 + 0x18) = local_108;
      *(undefined4 *)((int)fVar19 + 0x1c) = local_104;
    }
    if (bVar9) {
      dVar14 = (double)BlendAnimFrame(moby);
      dVar14 = (double)FastWrapRot
                                 (3.1415927,(float)(dVar14 - (double)pfVar6[0x16]) / pfVar6[0x17]);
      fVar19 = (float)(dVar14 + 1.570796251296997);
      fVar1 = 3.1415925 - fVar19;
      if (fVar19 - (3.1415925 - fVar19) < 0.0) {
        fVar1 = fVar19;
      }
      fVar8 = -3.1415925 - fVar19;
      if ((-3.1415925 - fVar19) - fVar1 < 0.0) {
        fVar8 = fVar1;
      }
      fVar19 = fVar8 * fVar8;
      fVar1 = fVar19 * fVar19 * fVar8;
      fVar10 = fVar19 * fVar1;
      pfVar6[0x13] = (fVar19 * fVar10 * 2.601887e-06 +
                     fVar10 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar19 * fVar8 * -0.16666657 + fVar8) * 0.02 + 0.09;
      dVar14 = (double)SQRT(fVar4 * fVar4 + fVar20 * fVar20 + fVar3 * fVar3);
      if (dVar14 == dVar18) {
        pfVar6[4] = fVar20;
        pfVar6[5] = fVar3;
        pfVar6[6] = fVar4;
        pfVar6[6] = 0.0;
        pfVar6[5] = 0.0;
        pfVar6[4] = 0.0;
      }
      else {
        fVar19 = (float)(0.20000000298023224 / dVar14);
        pfVar6[4] = fVar20 * fVar19;
        pfVar6[5] = fVar3 * fVar19;
        pfVar6[6] = fVar4 * fVar19;
      }
      pfVar6[7] = fVar5;
      FastVecSub(&local_e0,lVar13,pfVar6 + 4);
      pfVar6[4] = local_e0;
      pfVar6[5] = local_dc;
      pfVar6[6] = local_d8;
      pfVar6[7] = local_d4;
      dVar14 = 0.5;
      iVar12 = FastCheckBsphereInView(0x4040000000000000,local_100);
      if (iVar12 != -1) {
        SetCollDamIn(0x3ff0000000000000,auStack_a0,lVar11,0x10001);
        CollLine(lVar13,pfVar6 + 8,9,lVar11,auStack_a0);
        iVar12 = 0;
        dVar17 = 0.8999999761581421;
        dVar16 = 10.0;
        dVar15 = (double)(SQRT(pfVar6[0xe] * pfVar6[0xe] +
                               pfVar6[0xc] * pfVar6[0xc] + pfVar6[0xd] * pfVar6[0xd]) * 0.05);
        do {
          MB_randRangeFloat((float)dVar18,(float)dVar17);
          FastVecAddSelf(auStack_c0,local_1d0,local_d0);
          MB_randRangeFloat((float)((double)g_FrameTime * dVar16),(float)dVar15)
          ;
          SpawnPart_79(lVar11,local_1d0,local_1c0);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 7);
        if (iVar12 < 0xf) {
          dVar15 = -dVar15;
          do {
            MB_randRangeFloat((float)dVar18,(float)dVar17);
            FastVecSub(local_b0,local_d0,local_1d0);
            MB_randRangeFloat
                      ((float)((double)g_FrameTime * dVar16),(float)dVar15);
            SpawnPart_79(lVar11,local_1d0,local_1c0);
            iVar12 = iVar12 + 1;
          } while (iVar12 < 0xf);
        }
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar14),g_FrameTime);
        dVar14 = -0.009999999776482582;
        dVar18 = 0.009999999776482582;
        MB_randRangeFloat(-0.01,0.01);
        MB_randRangeFloat((float)dVar14,(float)dVar18);
        MB_randRangeFloat((float)dVar14,(float)dVar18);
        SpawnPart_79(0,pfVar6 + 8,local_1c0);
      }
      RegisterFuncForMoby(&PTR_M994_004ceb50_0070f950,moby);
    }
  }
  return;
}


