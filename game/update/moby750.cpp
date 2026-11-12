// game/update/moby750.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x44a708-0x44cddc
#include "game/update/moby750.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x044a708 (0xa0c bytes)
// inlined: FastAtan2 @0x44aa60, FastAtan2 @0x44ac44, FastAtan2 @0x44aea4
void M750_0044a708
               (int param_1,int *param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined4 uVar19;
  longlong lVar17;
  longlong lVar18;
  int iVar22;
  ulonglong uVar20;
  float *pfVar23;
  longlong lVar21;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x160;
  puVar15 = (ulonglong *)lVar18;
  *puVar15 = uVar16;
  puVar15[0x2e] = in_LR;
  puVar15[0x29] = in_f29;
  puVar15[0x2a] = in_f30;
  puVar15[0x2b] = in_f31;
  puVar15[0x28] = unaff_r31;
  puVar15[0x24] = unaff_r27;
  puVar15[0x27] = unaff_r30;
  puVar15[0x26] = unaff_r29;
  dVar34 = 0.0;
  puVar15[0x25] = unaff_r28;
  iVar11 = *(int *)(param_1 + 0x78);
  MB_PathFollowToPos
            (0x408f380000000000,0x4014000000000000,0,param_2,param_1 + 0x10,uVar16 - 0xe0,
             uVar16 - 0xcc,uVar16 - 0xd0,param_6,0);
  dVar27 = (double)FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x94));
  pfVar23 = (float *)(param_2 + *param_2 * 4);
  dVar33 = 16.0;
  fVar1 = *(float *)(param_1 + 0x14) - pfVar23[1];
  fVar2 = *(float *)(param_1 + 0x10) - *pfVar23;
  fVar3 = *(float *)(param_1 + 0x18) - pfVar23[2];
  dVar27 = (double)((float)(dVar27 * (double)(float)param_2[7] + (double)*(float *)(puVar15 + 0x12))
                   + 2.0);
  if ((*(float *)(iVar11 + 0x60) * *(float *)(iVar11 + 0x60)) / (g_FrameTimeSq * 16.0 * 2.0) <
      SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    fVar1 = g_FrameTimeSq * 16.0 + *(float *)(iVar11 + 0x60);
    *(float *)(iVar11 + 0x60) = fVar1;
    if (g_FrameTime * 16.0 < fVar1) {
      *(float *)(iVar11 + 0x60) = g_FrameTime * 16.0;
    }
  }
  else {
    fVar1 = -(g_FrameTimeSq * 16.0 - *(float *)(iVar11 + 0x60));
    *(float *)(iVar11 + 0x60) = fVar1;
    if (fVar1 < DAT_0085a81c * g_FrameTime) {
      *(float *)(iVar11 + 0x60) = DAT_0085a81c * g_FrameTime;
    }
  }
  uVar19 = FastDoubleToInt((double)(float)(dVar27 / (double)(float)param_2[7]));
  *(undefined4 *)((int)puVar15 + 0x94) = uVar19;
  dVar28 = (double)FastIntToDouble();
  fVar2 = *(float *)(param_1 + 0x10);
  fVar1 = (float)(-(double)(float)(dVar28 * (double)(float)param_2[7] - dVar27) /
                 (double)(float)param_2[7]);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x48);
  iVar22 = *(int *)((int)puVar15 + 0x94);
  iVar12 = *param_2;
  *(float *)(puVar15 + 0x12) = fVar1;
  if (iVar12 + -1 <= iVar22) {
    iVar22 = iVar12 + -2;
    *(int *)((int)puVar15 + 0x94) = iVar22;
    fVar1 = 1.0;
    *(undefined4 *)(puVar15 + 0x12) = 0x3f800000;
  }
  fVar5 = (float)param_2[iVar22 * 4 + 8];
  fVar6 = (float)param_2[iVar22 * 4 + 4];
  fVar7 = (float)param_2[iVar22 * 4 + 9];
  fVar8 = (float)param_2[iVar22 * 4 + 5];
  fVar9 = (float)param_2[iVar22 * 4 + 10];
  fVar10 = (float)param_2[iVar22 * 4 + 6];
  *(int *)((int)puVar15 + 0x8c) = param_2[iVar22 * 4 + 0xb];
  *(float *)(puVar15 + 0x10) = (fVar5 - fVar6) * fVar1 + fVar6;
  *(float *)((int)puVar15 + 0x84) = (fVar7 - fVar8) * fVar1 + fVar8;
  *(float *)(puVar15 + 0x11) = (fVar9 - fVar10) * fVar1 + fVar10;
  fVar5 = (float)(param_2 + iVar12 * 4)[1] - fVar3;
  fVar1 = (float)param_2[iVar12 * 4] - fVar2;
  if ((SQRT(fVar1 * fVar1 + fVar5 * fVar5) < 1.0) &&
     (*(float *)(iVar11 + 0x60) <= DAT_0085a81c * g_FrameTime)) {
    *(undefined1 *)(param_1 + 0x20) = param_3;
  }
  iVar22 = iVar22 + 1;
  dVar27 = 0.7853981852531433;
  if (iVar22 < iVar12 + -8) {
    fVar1 = (float)param_2[iVar22 * 4 + 5];
    dVar29 = ABS((double)((float)param_2[iVar22 * 4 + 4] - fVar2));
    dVar31 = ABS((double)(fVar1 - fVar3));
    *(float *)(puVar15 + 0x16) = (float)param_2[iVar22 * 4 + 4] - fVar2;
    *(float *)((int)puVar15 + 0xb4) = fVar1 - fVar3;
    *(float *)(puVar15 + 0x17) = (float)(dVar29 - dVar31);
    uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1d) & 4;
    uVar20 = uVar24 << 2 | 0x735900;
    dVar28 = ABS((double)*(float *)(puVar15 + 0x16));
    if ((double)*(float *)(puVar15 + 0x17) - dVar34 < 0.0) {
      dVar28 = dVar31;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar15 + 0xb4));
    if ((double)*(float *)(puVar15 + 0x17) - dVar34 < 0.0) {
      dVar31 = dVar29;
    }
    fVar2 = *(float *)((int)uVar20 + 4);
    dVar29 = dVar34;
    if (dVar34 < dVar28) {
      lVar17 = uVar16 - 0x150;
      lVar25 = uVar16 - 0x54;
      lVar21 = uVar16 - 100;
      lVar26 = 2;
      fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x21) = fVar3;
      *(float *)(puVar15 + 0x20) = fVar3;
      *(float *)((int)puVar15 + 0x104) = fVar3;
      *(float *)((int)puVar15 + 0xfc) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x20) = *(float *)(puVar15 + 0x20) * fVar5;
      *(float *)((int)puVar15 + 0x104) = *(float *)((int)puVar15 + 0x104) * fVar3;
      *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xfc) = *(float *)((int)lVar17 + 0xec) * fVar3 * fVar3;
        iVar22 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar16 - 100;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar25;
      do {
        pfVar23 = (float *)uVar20;
        fVar3 = pfVar23[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xfc) = *(float *)((int)lVar17 + 0xfc) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar28 = dVar34;
      do {
        iVar22 = (int)lVar17;
        iVar12 = (int)lVar25;
        lVar17 = lVar17 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xfc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar28 = (double)MB_DeltAngSpeed
                               ((double)fVar4,dVar29,0x3f847ae140000000,0x3fd3333340000000,
                                0x3fb99999a0000000,&DAT_0044a6a8,uVar20,iVar11 + 0x6c);
  }
  else {
    fVar3 = g_heroPosition.y - fVar3;
    dVar29 = ABS((double)(g_heroPosition.x - fVar2));
    dVar31 = ABS((double)fVar3);
    *(float *)((int)puVar15 + 0xa4) = g_heroPosition.x - fVar2;
    *(float *)(puVar15 + 0x15) = fVar3;
    *(float *)((int)puVar15 + 0xac) = (float)(dVar29 - dVar31);
    uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1d) & 4;
    uVar20 = uVar24 << 2 | 0x735900;
    dVar28 = ABS((double)*(float *)((int)puVar15 + 0xa4));
    if ((double)*(float *)((int)puVar15 + 0xac) - dVar34 < 0.0) {
      dVar28 = dVar31;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar31 = ABS((double)*(float *)(puVar15 + 0x15));
    if ((double)*(float *)((int)puVar15 + 0xac) - dVar34 < 0.0) {
      dVar31 = dVar29;
    }
    fVar2 = *(float *)((int)uVar20 + 4);
    dVar29 = dVar34;
    if (dVar34 < dVar28) {
      lVar17 = uVar16 - 0x150;
      lVar21 = uVar16 - 0x84;
      lVar25 = uVar16 - 0x74;
      lVar26 = 2;
      fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x1d) = fVar3;
      *(float *)(puVar15 + 0x1c) = fVar3;
      *(float *)((int)puVar15 + 0xe4) = fVar3;
      *(float *)((int)puVar15 + 0xdc) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x1c) = *(float *)(puVar15 + 0x1c) * fVar5;
      *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) * fVar3;
      *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xdc) = *(float *)((int)lVar17 + 0xcc) * fVar3 * fVar3;
        iVar22 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar16 - 0x84;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar25;
      do {
        pfVar23 = (float *)uVar20;
        fVar3 = pfVar23[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xdc) = *(float *)((int)lVar17 + 0xdc) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar28 = dVar34;
      do {
        iVar22 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar12 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xdc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar28 = (double)MB_DeltAngSpeed
                               ((double)fVar4,dVar29,0x3f847ae140000000,0x3fd3333340000000,
                                0x3fb99999a0000000,&DAT_0044a6a8,uVar20,iVar11 + 0x6c);
  }
  fVar4 = *(float *)(param_1 + 0x14);
  fVar1 = (float)((double)*(float *)((int)puVar15 + 0x84) - (double)fVar4);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar2 = (float)((double)*(float *)(puVar15 + 0x10) - (double)fVar5);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)((double)*(float *)(puVar15 + 0x11) - (double)fVar6);
  *(float *)(param_1 + 0x48) = (float)dVar28;
  dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar29 = dVar31;
  if ((double)*(float *)(iVar11 + 0x60) - dVar31 < 0.0) {
    dVar29 = (double)*(float *)(iVar11 + 0x60);
  }
  fVar7 = (float)(dVar29 / dVar31);
  dVar29 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar29 = (double)(fVar1 * fVar7);
  }
  dVar30 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar30 = (double)(fVar2 * fVar7);
  }
  dVar32 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar29 = (double)(fVar1 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar30 = (double)(fVar2 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  *(float *)(puVar15 + 0x13) = (float)dVar30;
  *(float *)((int)puVar15 + 0x9c) = (float)dVar29;
  *(float *)(puVar15 + 0x14) = (float)(ABS(dVar30) - ABS(dVar29));
  uVar13 = *(uint *)(puVar15 + 0x13);
  fVar1 = *(float *)(puVar15 + 0x13);
  uVar14 = *(uint *)((int)puVar15 + 0x9c);
  *(float *)(param_1 + 0x10) = (float)((double)fVar5 + dVar30);
  *(float *)(param_1 + 0x14) = (float)((double)fVar4 + dVar29);
  *(float *)(param_1 + 0x18) = (float)((double)fVar6 + dVar32);
  uVar20 = (ulonglong)(uVar13 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1e) & 2 | (ulonglong)(uVar14 >> 0x1d) & 4;
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)fVar1);
  if ((double)*(float *)(puVar15 + 0x14) - dVar34 < 0.0) {
    dVar31 = ABS(dVar29);
  }
  fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar15 + 0x9c));
  if ((double)*(float *)(puVar15 + 0x14) - dVar34 < 0.0) {
    dVar29 = ABS(dVar30);
  }
  if (dVar34 < dVar31) {
    lVar17 = uVar16 - 0x150;
    lVar21 = uVar16 - 0xa4;
    lVar25 = uVar16 - 0x94;
    lVar26 = 2;
    fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar15 + 0x19) = fVar3;
    *(float *)(puVar15 + 0x18) = fVar3;
    *(float *)((int)puVar15 + 0xc4) = fVar3;
    *(float *)((int)puVar15 + 0xbc) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x18) = *(float *)(puVar15 + 0x18) * fVar4;
    *(float *)((int)puVar15 + 0xc4) = *(float *)((int)puVar15 + 0xc4) * fVar3;
    *(float *)(puVar15 + 0x19) = *(float *)(puVar15 + 0x19) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0xbc) = *(float *)((int)lVar17 + 0xac) * fVar3 * fVar3;
      iVar22 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0xa4;
    pfVar23 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar25;
    do {
      fVar3 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar17 + 0xbc) = *(float *)((int)lVar17 + 0xbc) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar17 = 2;
    do {
      iVar22 = (int)lVar18;
      iVar12 = (int)lVar25;
      lVar18 = lVar18 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0xbc)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar34 = (double)((float)(dVar34 + dVar27) * fVar2 + fVar1);
  }
  dVar28 = (double)FastDiffRots(dVar34,dVar28);
  fVar1 = (float)(dVar28 + 1.570796251296997);
  dVar34 = (double)(float)(3.141592502593994 - dVar28);
  if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
    dVar34 = dVar28;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar29 = (double)(float)(-3.141592502593994 - dVar28);
  if ((double)(float)(-3.141592502593994 - dVar28) - dVar34 < 0.0) {
    dVar29 = dVar34;
  }
  fVar3 = (float)((double)g_FrameTime * dVar33);
  dVar33 = (double)(float)(dVar29 * dVar29);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = fVar4 * fVar4;
  dVar34 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar29));
  dVar28 = (double)(float)(dVar33 * dVar34);
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar1 = fVar5 * fVar2;
  dVar34 = (double)((*(float *)(iVar11 + 0x60) * -0.34906584 *
                    ((float)(dVar33 * dVar28) * 2.601887e-06 +
                    (float)(dVar28 * -0.0001980741071747616 +
                           (double)(float)(dVar34 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar33 * dVar29) *
                                                          -0.16666656732559204 + dVar29))))) / fVar3
                   );
  dVar33 = 1.0471975803375244;
  dVar27 = (double)MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x44),
                              (double)((*(float *)(iVar11 + 0x60) * 0.34906584 *
                                       (fVar5 * fVar1 * 2.601887e-06 +
                                       fVar1 * -0.0001980741 +
                                       fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4))
                                      / fVar3),(double)(g_FrameTimeSq * 0.5235988),
                              (double)(g_FrameTimeSq * 1.0471976),
                              (double)(float)((double)g_FrameTime * dVar27));
  *(float *)(param_1 + 0x44) = (float)dVar27;
  dVar27 = (double)MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),dVar34,
                              (double)(float)((double)g_FrameTimeSq * dVar33),
                              (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                              (double)(g_FrameTime * 1.5707964));
  *(float *)(param_1 + 0x40) = (float)dVar27;
  return;
}


// 0x044b130 (0x324 bytes)
void M750_0044b130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  undefined8 in_r9;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<56> local_90;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    dVar12 = 0.0;
    iVar8 = 0;
    lVar10 = uVar9 + 0x30;
    dVar13 = 255.0;
    auVar18 = loadVectorLeftIndexed(0x10,0x44b114);
    dVar14 = 255.5;
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    dVar15 = 0.5;
    do {
      iVar3 = (int)uVar9;
      fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
      dVar11 = (double)fVar4;
      *(float *)(iVar3 + 0x10) = fVar4;
      if (dVar11 < dVar13) {
        if (dVar11 <= dVar12) {
          *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar13);
        }
      }
      else {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar13);
      }
      iVar6 = FastDecTimerS32(uVar9 + 0x30);
      iVar1 = *(int *)(iVar3 + 0x30);
      dVar11 = (double)animationSpeed;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      if (iVar6 != 0) {
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar17);
        iVar1 = (int)(dVar11 * dVar14);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
        auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
        *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
      }
      dVar11 = (double)FastIntToDouble((int)(dVar11 * dVar14) - iVar1);
      uVar5 = FastLerpColor
                        (ABS((double)(float)(dVar15 - (double)(float)(dVar11 / (double)(longlong)
                                                                                       ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
      ;
      if (g_gameMode != GAME_MODE_SCENE) {
        uVar7 = FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
        SpawnPart_59
                  ((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 4;
      uVar9 = uVar9 + 4;
    } while (iVar8 < 4);
  }
  return;
}


// 0x044b460 (0x120 bytes)
void M750_0044b460(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)((int)uVar5 + 0x10) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x24) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x28) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x2c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x44b454);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x44b454);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x44b454);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x40) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x44) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x48) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x4c) = 0x40200000;
  return;
}


// 0x044b5f0 (0x17ec bytes)
// inlined: FastAtan2 @0x44bae8, FastAtan2 @0x44bfb8, FastAtan2 @0x44c454, FastAtan2 @0x44c6b4
/* Moby 750 */

void UpdateMoby_750(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  LevelId LVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  float fVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar19;
  Vec4 *pVVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  int iVar27;
  ulonglong uVar25;
  longlong lVar26;
  int *piVar28;
  Spline *pSVar29;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x1e0;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x3e] = in_LR;
  puVar11[0x39] = in_f29;
  puVar11[0x3a] = in_f30;
  puVar11[0x3b] = in_f31;
  puVar11[0x38] = unaff_r31;
  puVar11[0x35] = unaff_r28;
  puVar11[0x37] = unaff_r30;
  piVar6 = (int *)moby->pVar;
  bVar1 = moby->state;
  dVar40 = 0.0;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  puVar11[0x36] = unaff_r29;
  puVar11[0x34] = unaff_r27;
  puVar11[0x33] = unaff_r26;
  puVar11[0x32] = unaff_r25;
  fVar2 = (moby->rotation).z;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        DeleteMoby(moby);
        return;
      }
      dVar41 = (double)FastWrapRot((float)piVar6[0x17],g_FrameTime * 3.1415927);
      fVar2 = (float)(dVar41 + 1.570796251296997);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      piVar6[0x17] = (int)(float)dVar41;
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)(puVar11 + 0x10) =
           fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
      fVar2 = (float)piVar6[0x17];
      *(undefined4 *)(puVar11 + 0x11) = 0x40400000;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)((int)puVar11 + 0x84) =
           fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
      dVar41 = (double)FastWrapRot((float)piVar6[0x17],1.5707964);
      iVar18 = piVar6[0x15];
      (moby->rotation).z = (float)dVar41;
      if ((((iVar18 != -1) && (g_MobyInstance[iVar18].oClass == TRAIN_LOCOMOTIVE)) &&
          (g_MobyInstance[iVar18].setByGroup == '\x06')) && (piVar6[0x16] != -1)) {
        moby->state = '\x06';
        piVar6[0x14] = -1;
        pSVar10 = Splines[piVar6[0x16]];
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        (moby->pos).z = pSVar10->points[0].z;
        (moby->pos).w = pSVar10->points[0].w;
        pSVar10 = Splines[piVar6[0x16]];
        fVar2 = pSVar10->points[1].x - pSVar10->points[0].x;
        fVar5 = pSVar10->points[1].y - pSVar10->points[0].y;
        dVar31 = ABS((double)fVar2);
        dVar39 = ABS((double)fVar5);
        *(float *)(puVar11 + 0x1e) = fVar2;
        *(float *)((int)puVar11 + 0xf4) = fVar5;
        *(float *)(puVar11 + 0x1f) = (float)(dVar31 - dVar39);
        uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
        dVar41 = ABS((double)*(float *)(puVar11 + 0x1e));
        if ((double)*(float *)(puVar11 + 0x1f) - dVar40 < 0.0) {
          dVar41 = dVar39;
        }
        fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar39 = ABS((double)*(float *)((int)puVar11 + 0xf4));
        if ((double)*(float *)(puVar11 + 0x1f) - dVar40 < 0.0) {
          dVar39 = dVar31;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar40 < dVar41) {
          lVar16 = uVar14 - 0x1d0;
          lVar26 = uVar14 - 0x88;
          lVar23 = uVar14 - 0x98;
          lVar30 = 2;
          fVar3 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x154) = fVar3;
          *(float *)((int)puVar11 + 0x14c) = fVar3;
          *(float *)(puVar11 + 0x2a) = fVar3;
          *(float *)(puVar11 + 0x29) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x14c) = *(float *)((int)puVar11 + 0x14c) * fVar4;
          *(float *)(puVar11 + 0x2a) = *(float *)(puVar11 + 0x2a) * fVar3;
          *(float *)((int)puVar11 + 0x154) = *(float *)((int)puVar11 + 0x154) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar16 + 0x148) = *(float *)((int)lVar16 + 0x138) * fVar3 * fVar3;
            iVar18 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar14 - 0x98;
          pfVar24 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar23 = lVar26;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar16 + 0x148) = *(float *)((int)lVar16 + 0x148) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar16 = 2;
          do {
            iVar18 = (int)lVar17;
            iVar27 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar18 + 0x148)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar5);
        }
        iVar18 = piVar6[0x16];
        (moby->rotation).z = (float)dVar40;
        pSVar10 = Splines[iVar18];
        if (0 < pSVar10->cnt + -2) {
          iVar18 = 0;
          pSVar29 = pSVar10;
          do {
            fVar2 = pSVar29->points[0].y - pSVar29->points[1].y;
            fVar5 = pSVar29->points[0].x - pSVar29->points[1].x;
            fVar3 = pSVar29->points[0].z - pSVar29->points[1].z;
            iVar18 = iVar18 + 1;
            pSVar29->points[0].w = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
            pSVar29 = (Spline *)pSVar29->points;
          } while (iVar18 < pSVar10->cnt + -2);
        }
      }
    }
    else if (bVar1 == 4) {
      M750_0044a708(lVar15,Splines[piVar6[piVar6[0x2a] + 0x1c]],3);
      M750_0044b130(lVar15);
      if (moby->state != '\x04') {
        piVar6[0x2a] = piVar6[0x2a] + 1;
      }
    }
    else if (bVar1 == 3) {
      M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        DeleteMoby(moby);
        return;
      }
      if (piVar6[piVar6[0x2a] + 0x1c] == -1) {
        moby->state = '\x02';
      }
      else {
        fVar2 = g_heroPosition.x - (moby->pos).x;
        fVar5 = g_heroPosition.y - (moby->pos).y;
        dVar31 = ABS((double)fVar2);
        dVar39 = ABS((double)fVar5);
        *(float *)((int)puVar11 + 0xfc) = fVar2;
        *(float *)(puVar11 + 0x20) = fVar5;
        fVar2 = (moby->rotation).z;
        *(float *)((int)puVar11 + 0x104) = (float)(dVar31 - dVar39);
        uVar25 = (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1d) & 4;
        uVar22 = uVar25 << 2 | 0x735900;
        dVar41 = ABS((double)*(float *)((int)puVar11 + 0xfc));
        if ((double)*(float *)((int)puVar11 + 0x104) - dVar40 < 0.0) {
          dVar41 = dVar39;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar39 = ABS((double)*(float *)(puVar11 + 0x20));
        if ((double)*(float *)((int)puVar11 + 0x104) - dVar40 < 0.0) {
          dVar39 = dVar31;
        }
        fVar3 = *(float *)((int)uVar22 + 4);
        dVar31 = dVar40;
        if (dVar40 < dVar41) {
          lVar16 = uVar14 - 0x1d0;
          lVar26 = uVar14 - 0x68;
          lVar23 = uVar14 - 0x78;
          lVar30 = 2;
          fVar4 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
          fVar12 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x174) = fVar4;
          *(float *)((int)puVar11 + 0x16c) = fVar4;
          *(float *)(puVar11 + 0x2e) = fVar4;
          *(float *)(puVar11 + 0x2d) = fVar4;
          fVar4 = fVar12 * fVar12;
          *(float *)((int)puVar11 + 0x16c) = *(float *)((int)puVar11 + 0x16c) * fVar12;
          *(float *)(puVar11 + 0x2e) = *(float *)(puVar11 + 0x2e) * fVar4;
          *(float *)((int)puVar11 + 0x174) = *(float *)((int)puVar11 + 0x174) * fVar4 * fVar12;
          do {
            *(float *)((int)lVar16 + 0x168) = *(float *)((int)lVar16 + 0x158) * fVar4 * fVar4;
            iVar18 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar14 - 0x78;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar23 = lVar26;
          do {
            pfVar24 = (float *)uVar22;
            fVar4 = pfVar24[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar16 + 0x168) = *(float *)((int)lVar16 + 0x168) * *pfVar24;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar16 = 2;
          dVar41 = dVar40;
          do {
            iVar18 = (int)lVar17;
            iVar27 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar18 + 0x168)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar31 = (double)((float)(dVar41 + 0.7853981852531433) * fVar5 + fVar3);
        }
        dVar41 = (double)MB_DeltAngSpeed
                                   ((double)fVar2,dVar31,0x3f847ae140000000,0x3fd3333340000000,
                                    0x3fb99999a0000000,0x450000,uVar22,piVar6 + 0x1b);
        (moby->rotation).z = (float)dVar41;
        dVar31 = 1.0471975803375244;
        dVar41 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar40,
                                    (double)(g_FrameTimeSq * 0.5235988),
                                    (double)(g_FrameTimeSq * 1.0471976),
                                    (double)(g_FrameTime * 0.7853982));
        (moby->rotation).y = (float)dVar41;
        dVar40 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar40,
                                    (double)(float)((double)g_FrameTimeSq * dVar31),
                                    (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                    (double)(g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar40;
        fVar2 = g_heroPosition.y - (moby->pos).y;
        fVar5 = g_heroPosition.x - (moby->pos).x;
        fVar3 = g_heroPosition.z - (moby->pos).z;
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) < 8.0) {
          moby->state = '\x04';
          FUN_004d407c(lVar15,1);
        }
      }
    }
    else if (bVar1 == 2) {
      dVar41 = 1.0;
      if ((piVar6[0x2c] != 0) && ((moby->modeBits & DISABLED) != NONE)) {
        dVar41 = 3.0;
      }
      if (piVar6[1] == 0xc) {
        dVar41 = 3.0;
      }
      dVar31 = (double)MB_DeltAngSpeed
                                 ((double)fVar2,(double)(float)piVar6[0x2b],0x3f847ae140000000,
                                  0x3fd3333340000000,0x3fb99999a0000000,0x450000,piVar6[0x2c],
                                  piVar6 + 0x1b);
      (moby->rotation).z = (float)dVar31;
      dVar39 = 1.0471975803375244;
      dVar31 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar40,
                                  (double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(g_FrameTime * 0.7853982));
      (moby->rotation).y = (float)dVar31;
      dVar40 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)g_FrameTimeSq * dVar39),
                                  (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                  (double)(g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar40;
      M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        DeleteMoby(moby);
        return;
      }
      fVar2 = g_heroPosition.y - (moby->pos).y;
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.z - (moby->pos).z;
      if (((double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) < dVar41) &&
         (g_heroHealth != 0)) {
        moby->state = '\b';
      }
    }
    else if (bVar1 == 0) {
      moby->updateDistance = -1;
      piVar6[0x2b] = (int)fVar2;
      piVar6[0x30] = (int)(moby->pos).x;
      piVar6[0x31] = (int)(moby->pos).y;
      piVar6[0x32] = (int)(moby->pos).z;
      piVar6[0x33] = (int)(moby->pos).w;
      if (*piVar6 == 0) {
        iVar18 = piVar6[0x2c];
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        moby->state = (char)(ZERO_MASK(iVar18)) + '\x02';
      }
      else {
        moby->state = '\x02';
        M750_0044b460(lVar15);
      }
      if (piVar6[0x14] == -1) {
        if (piVar6[0x1c] != -1) {
          iVar18 = 0;
          piVar28 = piVar6;
          do {
            if (piVar28[0x1c] != -1) {
              iVar27 = 0;
              pSVar10 = Splines[piVar28[0x1c]];
              pSVar29 = pSVar10;
              if (0 < pSVar10->cnt + -2) {
                do {
                  fVar2 = pSVar29->points[0].y - pSVar29->points[1].y;
                  fVar5 = pSVar29->points[0].x - pSVar29->points[1].x;
                  fVar3 = pSVar29->points[0].z - pSVar29->points[1].z;
                  iVar27 = iVar27 + 1;
                  pSVar29->points[0].w = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
                  pSVar29 = (Spline *)pSVar29->points;
                } while (iVar27 < pSVar10->cnt + -2);
              }
            }
            iVar18 = iVar18 + 1;
            piVar28 = piVar28 + 1;
          } while (iVar18 < 8);
          pSVar10 = Splines[piVar6[0x1c]];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          (moby->pos).z = pSVar10->points[0].z;
          (moby->pos).w = pSVar10->points[0].w;
          piVar6[0x2a] = 0;
          moby->state = '\x03';
        }
      }
      else {
        moby->state = '\x05';
        M750_0044b460(lVar15);
      }
    }
  }
  else {
    if (bVar1 == 0xb) {
      if (g_gameMode == GAME_MODE_SCENE) {
        return;
      }
      memcard_Save(0,-1);
      MB_ToastMessageByIndex(piVar6[1]);
      DeleteMoby(moby);
      return;
    }
    if (bVar1 == 10) {
      if (g_gameMode != GAME_MODE_SCENE) {
        if (*(char *)((int)piVar6 + 0xe) != -1) {
          mode_sceneInit((int)*(char *)((int)piVar6 + 0xe));
        }
        moby->state = '\v';
      }
    }
    else if (bVar1 == 9) {
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\n';
        if (*(char *)((int)piVar6 + 0xd) != -1) {
          PlayInfobotMovie((int)*(char *)((int)piVar6 + 0xd));
        }
      }
    }
    else if (bVar1 == 8) {
      LVar9 = piVar6[1];
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      MB_UnlockLevel(LVar9);
      SetLevelFlag(moby->levelFlagIdx);
      iVar18 = piVar6[2];
      if (iVar18 != -1) {
        SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
      }
      moby->state = '\t';
      if (*(char *)(piVar6 + 3) != -1) {
        mode_sceneInit((int)*(char *)(piVar6 + 3));
      }
    }
    else if (bVar1 == 7) {
      pSVar10 = Splines[piVar6[0x16]];
      M750_0044b130(lVar15);
      fVar5 = g_FrameTime;
      fVar2 = (float)piVar6[0x29] + g_FrameTime;
      piVar6[0x29] = (int)fVar2;
      if (1.0 < fVar2) {
        piVar6[0x29] = 0x3f800000;
      }
      dVar41 = (double)FastWrapRot((float)piVar6[0x17],fVar5 * 3.1415927);
      piVar6[0x17] = (int)(float)dVar41;
      fVar2 = (float)(dVar41 + 1.570796251296997);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)(puVar11 + 0x10) =
           (fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) *
           (float)piVar6[0x29];
      fVar2 = (float)piVar6[0x17];
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = (float)piVar6[0x29];
      dVar41 = (double)(moby->rotation).z;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      fVar5 = fVar3 * fVar3;
      fVar4 = fVar5 * fVar5 * fVar3;
      fVar12 = fVar5 * fVar4;
      *(float *)((int)puVar11 + 0x84) =
           (fVar5 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
           fVar2;
      dVar31 = 1.5707963705062866;
      uVar32 = FastWrapRot((float)piVar6[0x17],1.5707964);
      dVar41 = (double)MB_DeltAngSpeed
                                 (dVar41,uVar32,(double)(g_FrameTime * 25.132742),
                                  (double)(g_FrameTime * 25.132742),
                                  (double)(g_FrameTime * 12.566371));
      (moby->rotation).z = (float)dVar41;
      FastVecAdd(uVar14 - 0x140,uVar14 - 0x160,pSVar10->points + pSVar10->cnt + -1);
      (moby->pos).x = *(f32 *)(puVar11 + 0x14);
      (moby->pos).y = *(f32 *)((int)puVar11 + 0xa4);
      (moby->pos).z = *(f32 *)(puVar11 + 0x15);
      (moby->pos).w = *(f32 *)((int)puVar11 + 0xac);
      pVVar20 = pSVar10->points + pSVar10->cnt + -1;
      fVar5 = g_heroPosition.y - pVVar20->y;
      fVar3 = g_heroPosition.x - pVVar20->x;
      fVar4 = g_heroPosition.z - pVVar20->z;
      fVar2 = (moby->rotation).y;
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) < 2.0) && (g_heroHealth != 0)) {
        moby->state = '\b';
      }
      dVar39 = 1.0471975803375244;
      dVar41 = (double)MB_DeltAngSpeed
                                 ((double)fVar2,dVar40,(double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(g_FrameTime * 0.7853982),0x450000,pVVar20,
                                  piVar6 + 0x1a);
      (moby->rotation).y = (float)dVar41;
      dVar40 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)g_FrameTimeSq * dVar39),
                                  (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                  (double)(float)((double)g_FrameTime * dVar31));
      (moby->rotation).x = (float)dVar40;
    }
    else if (bVar1 == 6) {
      pSVar10 = Splines[piVar6[0x16]];
      M750_0044b130(lVar15);
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,dVar40,pSVar10,lVar15 + 0x10,uVar14 - 0x150,
                 uVar14 - 0x10c,uVar14 - 0x110);
      dVar41 = (double)FastIntToDouble(*(undefined4 *)((int)puVar11 + 0xd4));
      pVVar20 = pSVar10->points + pSVar10->cnt + -1;
      fVar2 = (moby->pos).y - pVVar20->y;
      fVar5 = (moby->pos).x - pVVar20->x;
      dVar31 = 16.0;
      fVar3 = (moby->pos).z - pVVar20->z;
      dVar41 = (double)((float)(dVar41 * (double)pSVar10->points[0].w +
                               (double)*(float *)(puVar11 + 0x1a)) + 2.0);
      if (((float)piVar6[0x18] * (float)piVar6[0x18]) / (g_FrameTimeSq * 16.0 * 2.0) <
          SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2)) {
        fVar2 = g_FrameTimeSq * 16.0 + (float)piVar6[0x18];
        piVar6[0x18] = (int)fVar2;
        if (g_FrameTime * 16.0 < fVar2) {
          piVar6[0x18] = (int)(g_FrameTime * 16.0);
        }
      }
      else {
        dVar39 = -(double)(g_FrameTimeSq * 16.0 - (float)piVar6[0x18]);
        piVar6[0x18] = (int)(float)dVar39;
        if (dVar39 < dVar40) {
          piVar6[0x18] = 0;
        }
      }
      uVar19 = FastDoubleToInt((double)(float)(dVar41 / (double)pSVar10->points[0].w));
      *(undefined4 *)((int)puVar11 + 0xd4) = uVar19;
      dVar39 = (double)FastIntToDouble();
      dVar33 = (double)pSVar10->points[0].w;
      fVar5 = (moby->rotation).z;
      iVar18 = *(int *)((int)puVar11 + 0xd4);
      fVar2 = (float)(-(double)(float)(dVar39 * dVar33 - dVar41) / dVar33);
      *(float *)(puVar11 + 0x1a) = fVar2;
      iVar27 = pSVar10->cnt;
      if (iVar27 + -1 <= iVar18) {
        if ((float)piVar6[0x18] <= (float)((double)g_FrameTimeSq * dVar31)) {
          pVVar20 = pSVar10->points + iVar27 + -1;
          (moby->pos).x = pVVar20->x;
          (moby->pos).y = pVVar20->y;
          (moby->pos).z = pVVar20->z;
          fVar2 = pVVar20->w;
          moby->state = '\a';
          (moby->pos).w = fVar2;
          goto LAB_0044ccdc;
        }
        iVar18 = iVar27 + -2;
        *(int *)((int)puVar11 + 0xd4) = iVar18;
        fVar2 = 1.0;
        *(undefined4 *)(puVar11 + 0x1a) = 0x3f800000;
      }
      fVar4 = pSVar10->points[iVar18 + 1].x - pSVar10->points[iVar18].x;
      *(float *)(puVar11 + 0x12) = fVar4;
      fVar4 = fVar4 * fVar2;
      fVar12 = pSVar10->points[iVar18 + 1].y - pSVar10->points[iVar18].y;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      fVar12 = fVar12 * fVar2;
      fVar3 = pSVar10->points[iVar18 + 1].z - pSVar10->points[iVar18].z;
      fVar2 = fVar3 * fVar2;
      *(float *)(puVar11 + 0x13) = fVar3;
      fVar3 = pSVar10->points[iVar18 + 1].w;
      *(float *)(puVar11 + 0x12) = fVar4;
      *(float *)((int)puVar11 + 0x9c) = fVar3;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      *(float *)(puVar11 + 0x13) = fVar2;
      *(float *)(puVar11 + 0x12) = fVar4 + pSVar10->points[iVar18].x;
      *(float *)((int)puVar11 + 0x94) = fVar12 + pSVar10->points[iVar18].y;
      *(float *)(puVar11 + 0x13) = fVar2 + pSVar10->points[iVar18].z;
      fVar2 = pSVar10->points[iVar18 + 1].x - pSVar10->points[iVar18].x;
      fVar3 = pSVar10->points[iVar18 + 1].y - pSVar10->points[iVar18].y;
      dVar39 = ABS((double)fVar2);
      dVar33 = ABS((double)fVar3);
      *(float *)((int)puVar11 + 0xe4) = fVar2;
      *(float *)(puVar11 + 0x1d) = fVar3;
      *(float *)((int)puVar11 + 0xec) = (float)(dVar39 - dVar33);
      uVar25 = (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1d) & 4;
      uVar22 = uVar25 << 2;
      dVar41 = ABS((double)*(float *)((int)puVar11 + 0xe4));
      if ((double)*(float *)((int)puVar11 + 0xec) - dVar40 < 0.0) {
        dVar41 = dVar33;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar22);
      dVar33 = ABS((double)*(float *)(puVar11 + 0x1d));
      if ((double)*(float *)((int)puVar11 + 0xec) - dVar40 < 0.0) {
        dVar33 = dVar39;
      }
      fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar39 = dVar40;
      if (dVar40 < dVar41) {
        lVar16 = uVar14 - 0x1d0;
        lVar26 = uVar14 - 0xa8;
        lVar23 = uVar14 - 0xb8;
        lVar30 = 2;
        fVar4 = (float)(dVar33 - dVar41) / (float)(dVar33 + dVar41);
        fVar12 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x134) = fVar4;
        *(float *)((int)puVar11 + 300) = fVar4;
        *(float *)(puVar11 + 0x26) = fVar4;
        *(float *)(puVar11 + 0x25) = fVar4;
        fVar4 = fVar12 * fVar12;
        *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar12;
        *(float *)(puVar11 + 0x26) = *(float *)(puVar11 + 0x26) * fVar4;
        *(float *)((int)puVar11 + 0x134) = *(float *)((int)puVar11 + 0x134) * fVar4 * fVar12;
        do {
          *(float *)((int)lVar16 + 0x128) = *(float *)((int)lVar16 + 0x118) * fVar4 * fVar4;
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar14 - 0xb8;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar23 = lVar26;
        do {
          pfVar24 = (float *)uVar22;
          fVar4 = pfVar24[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar16 + 0x128) = *(float *)((int)lVar16 + 0x128) * *pfVar24;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        lVar16 = lVar17;
        dVar41 = dVar40;
        do {
          iVar18 = (int)lVar16;
          iVar27 = (int)lVar26;
          lVar16 = lVar16 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar18 + 0x128)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar39 = (double)MB_DeltAngSpeed
                                 ((double)fVar5,dVar39,0x3f847ae140000000,0x3fd3333340000000,
                                  0x3fb99999a0000000,&DAT_0044b580,uVar22,piVar6 + 0x1b);
      dVar33 = (double)(moby->pos).y;
      fVar2 = (float)((double)*(float *)((int)puVar11 + 0x94) - dVar33);
      dVar35 = (double)(moby->pos).x;
      fVar5 = (float)((double)*(float *)(puVar11 + 0x12) - dVar35);
      dVar37 = (double)(moby->pos).z;
      fVar3 = (float)((double)*(float *)(puVar11 + 0x13) - dVar37);
      (moby->rotation).z = (float)dVar39;
      dVar38 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
      dVar41 = dVar38;
      if ((double)(float)piVar6[0x18] - dVar38 < 0.0) {
        dVar41 = (double)(float)piVar6[0x18];
      }
      fVar4 = (float)(dVar41 / dVar38);
      dVar41 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar41 = (double)(fVar2 * fVar4);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar3 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar41 = (double)(fVar2 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar3 * fVar4);
      }
      *(float *)(puVar11 + 0x1b) = (float)dVar34;
      *(float *)((int)puVar11 + 0xdc) = (float)dVar41;
      *(float *)(puVar11 + 0x1c) = (float)(ABS(dVar34) - ABS(dVar41));
      uVar7 = *(uint *)(puVar11 + 0x1b);
      fVar2 = *(float *)(puVar11 + 0x1b);
      (moby->pos).x = (float)(dVar35 + dVar34);
      uVar8 = *(uint *)((int)puVar11 + 0xdc);
      (moby->pos).y = (float)(dVar33 + dVar41);
      (moby->pos).z = (float)(dVar37 + dVar36);
      uVar22 = (ulonglong)(uVar7 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      dVar33 = ABS((double)fVar2);
      if ((double)*(float *)(puVar11 + 0x1c) - dVar40 < 0.0) {
        dVar33 = ABS(dVar41);
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar41 = ABS((double)*(float *)((int)puVar11 + 0xdc));
      if ((double)*(float *)(puVar11 + 0x1c) - dVar40 < 0.0) {
        dVar41 = ABS(dVar34);
      }
      fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (dVar40 < dVar33) {
        lVar16 = uVar14 - 0x1d0;
        lVar26 = uVar14 - 200;
        lVar23 = uVar14 - 0xd8;
        lVar30 = 2;
        fVar3 = (float)(dVar41 - dVar33) / (float)(dVar41 + dVar33);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar11 + 0x114) = fVar3;
        *(float *)((int)puVar11 + 0x10c) = fVar3;
        *(float *)(puVar11 + 0x22) = fVar3;
        *(float *)(puVar11 + 0x21) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar4;
        *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar3;
        *(float *)((int)puVar11 + 0x114) = *(float *)((int)puVar11 + 0x114) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0xf8) * fVar3 * fVar3;
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar14 - 0xd8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar23 = lVar26;
        do {
          fVar3 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0x108) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar27 = (int)lVar26;
          lVar17 = lVar17 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar18 + 0x108)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar41 = (double)FastDiffRots(dVar40,dVar39);
      fVar2 = (float)(dVar41 + 1.570796251296997);
      dVar40 = (double)(float)(3.141592502593994 - dVar41);
      if (dVar41 - (double)(float)(3.141592502593994 - dVar41) < 0.0) {
        dVar40 = dVar41;
      }
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      dVar39 = (double)(float)(-3.141592502593994 - dVar41);
      if ((double)(float)(-3.141592502593994 - dVar41) - dVar40 < 0.0) {
        dVar39 = dVar40;
      }
      dVar40 = (double)(float)(dVar39 * dVar39);
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = (float)((double)g_FrameTime * dVar31);
      fVar12 = fVar3 * fVar3;
      dVar41 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar39));
      dVar31 = (double)(float)(dVar40 * dVar41);
      fVar4 = fVar12 * fVar12 * fVar3;
      fVar5 = fVar12 * fVar4;
      dVar31 = (double)(((float)piVar6[0x18] * -0.34906584 *
                        ((float)(dVar40 * dVar31) * 2.601887e-06 +
                        (float)(dVar31 * -0.0001980741071747616 +
                               (double)(float)(dVar41 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar40 * dVar39) *
                                                              -0.16666656732559204 + dVar39))))) /
                       fVar2);
      dVar41 = 1.0471975803375244;
      dVar40 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,
                                  (double)(((float)piVar6[0x18] * 0.34906584 *
                                           (fVar12 * fVar5 * 2.601887e-06 +
                                           fVar5 * -0.0001980741 +
                                           fVar4 * 0.0083330255 +
                                           fVar12 * fVar3 * -0.16666657 + fVar3)) / fVar2),
                                  (double)(g_FrameTimeSq * 0.5235988),
                                  (double)(g_FrameTimeSq * 1.0471976),
                                  (double)(float)((double)g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar40;
      dVar40 = (double)MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar31,
                                  (double)(float)((double)g_FrameTimeSq * dVar41),
                                  (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                                  (double)(g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar40;
    }
  }
LAB_0044ccdc:
  pCVar13 = Cuboids;
  if (((piVar6[0x14] != -1) && (piVar6[0x15] != -1)) &&
     (pMVar21 = g_MobyInstance + piVar6[0x15], pMVar21->oClass == TRAIN_LOCOMOTIVE)) {
    iVar18 = piVar6[0x14];
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((int)puVar11 + 0xb4) = 0;
    *(undefined4 *)(puVar11 + 0x17) = 0;
    *(undefined4 *)((int)puVar11 + 0xbc) = 0;
    MB_PlatformLocalToWorld
              (lVar15,pMVar21,&pCVar13[iVar18].pos,uVar14 - 0x130,&pCVar13[iVar18].pos,
               uVar14 - 0x130);
    FastVecAdd(uVar14 - 0x120,uVar14 - 0x160,&Cuboids[piVar6[0x14]].pos);
    (moby->pos).x = *(f32 *)(puVar11 + 0x18);
    (moby->pos).y = *(f32 *)((int)puVar11 + 0xc4);
    (moby->pos).z = *(f32 *)(puVar11 + 0x19);
    (moby->pos).w = *(f32 *)((int)puVar11 + 0xcc);
  }
  return;
}


