// game/update/moby326.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1bb84-0x1e6c8
#include "game/update/moby326.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1371.h"
#include "game/update/moby409.h"
#include "idol/fastfunc.h"

// 0x001bb84 (0x14 bytes)
void SECTION_HEADER_MOBY326(void)

{
  DAT_0071d01c = 0x10000;
  return;
}


// 0x001bbd8 (0x350 bytes)
// inlined: FastAtan2 @0x1bcac
void M326_0001bbd8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xe0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar13;
  puVar9[0x1e] = in_LR;
  puVar9[0x19] = in_f29;
  puVar9[0x1a] = in_f30;
  puVar9[0x1b] = in_f31;
  puVar9[0x17] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar9[0x18] = unaff_r31;
  uVar7 = *(uint *)(iVar6 + 0x70);
  uVar8 = *(uint *)(iVar6 + 0x74);
  fVar12 = ABS(*(float *)(iVar6 + 0x70));
  fVar4 = ABS(*(float *)(iVar6 + 0x74));
  *(float *)(puVar9 + 0xe) = fVar12 - fVar4;
  dVar22 = 0.0;
  fVar1 = *(float *)(param_1 + 0x48);
  dVar25 = 0.7853981852531433;
  uVar17 = (ulonglong)(uVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar3 = fVar12;
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar3 = fVar4;
  }
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (*(float *)(puVar9 + 0xe) - 0.0 < 0.0) {
    fVar4 = fVar12;
  }
  puVar9[0x16] = unaff_r29;
  puVar9[0x15] = unaff_r28;
  puVar9[0x14] = unaff_r27;
  if (0.0 < fVar3) {
    lVar18 = uVar13 - 0xd0;
    lVar16 = uVar13 - 0x6c;
    lVar15 = uVar13 - 0x5c;
    lVar20 = 2;
    fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)(puVar9 + 0xf) = fVar3;
    *(float *)((int)puVar9 + 0x7c) = fVar3;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) * fVar4;
    *(float *)((int)puVar9 + 0x7c) = *(float *)((int)puVar9 + 0x7c) * fVar3;
    *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x6c;
    pfVar19 = (float *)&DAT_007358e0;
    lVar20 = 4;
    lVar15 = lVar18;
    lVar16 = lVar14;
    do {
      fVar3 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar15 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar10 + 0x74)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
  }
  dVar21 = (double)FastDiffRots(dVar22,(double)fVar1);
  fVar1 = (float)(dVar21 + 1.570796251296997);
  dVar22 = (double)(float)(3.141592502593994 - dVar21);
  if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
    dVar22 = dVar21;
  }
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar21);
  if ((double)(float)(-3.141592502593994 - dVar21) - dVar22 < 0.0) {
    dVar24 = dVar22;
  }
  dVar22 = (double)(float)(dVar24 * dVar24);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar1 = (float)((double)g_FrameTime * 10.0);
  fVar12 = fVar3 * fVar3;
  dVar21 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
  dVar23 = (double)(float)(dVar22 * dVar21);
  fVar4 = fVar12 * fVar12 * fVar3;
  fVar5 = fVar12 * fVar4;
  dVar24 = (double)((*(float *)(iVar6 + 0x94) * -0.2268928 *
                    ((float)(dVar22 * dVar23) * 2.601887e-06 +
                    (float)(dVar23 * -0.0001980741071747616 +
                           (double)(float)(dVar21 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar22 * dVar24) *
                                                          -0.16666656732559204 + dVar24))))) / fVar1
                   );
  dVar21 = 1.0471975803375244;
  dVar22 = (double)MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x44),
                              (double)((*(float *)(iVar6 + 0x94) * 0.2268928 *
                                       (fVar12 * fVar5 * 2.601887e-06 +
                                       fVar5 * -0.0001980741 +
                                       fVar4 * 0.0083330255 + fVar12 * fVar3 * -0.16666657 + fVar3))
                                      / fVar1),(double)(g_FrameTimeSq * 0.5235988),
                              (double)(g_FrameTimeSq * 1.0471976),
                              (double)(float)((double)g_FrameTime * dVar25));
  *(float *)(param_1 + 0x44) = (float)dVar22;
  dVar22 = (double)MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),dVar24,
                              (double)(float)((double)g_FrameTimeSq * dVar21),
                              (double)(float)((double)g_FrameTimeSq * 2.094395160675049),
                              (double)(g_FrameTime * 1.2217305));
  *(float *)(param_1 + 0x40) = (float)dVar22;
  return;
}


// 0x001bf50 (0x68c bytes)
// inlined: FastAtan2 @0x1c0c4, FastAtan2 @0x1c300
undefined8 M326_0001bf50(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar15;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar16;
  int iVar19;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x150;
  puVar8 = (ulonglong *)lVar11;
  *puVar8 = uVar9;
  puVar8[0x2c] = in_LR;
  puVar8[0x28] = in_f30;
  puVar8[0x29] = in_f31;
  puVar8[0x27] = unaff_r31;
  puVar8[0x25] = unaff_r29;
  puVar8[0x26] = unaff_r30;
  dVar21 = 0.0;
  iVar6 = *(int *)(param_1 + 0x78);
  piVar7 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar12 = *(int *)(iVar6 + 0xb4);
  iVar19 = *piVar7;
  puVar8[0x24] = unaff_r28;
  puVar8[0x23] = unaff_r27;
  dVar22 = dVar21;
  if (iVar12 < iVar19 + -1) {
    iVar19 = (iVar19 + -1) - iVar12;
    piVar15 = piVar7 + iVar12 * 4;
    do {
      iVar19 = iVar19 + -1;
      pfVar16 = (float *)(piVar15 + 7);
      piVar15 = piVar15 + 4;
      dVar22 = (double)(float)(dVar22 + (double)*pfVar16);
    } while (0 < iVar19);
  }
  dVar25 = 0.7853981852531433;
  if (dVar22 <= 5.0) {
    MB_getTarget(0x4048000000000000,param_1,&DAT_0001bf28,uVar9 - 0xe0);
    fVar1 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
    dVar23 = ABS((double)fVar1);
    dVar24 = ABS((double)fVar3);
    *(float *)(puVar8 + 0x18) = fVar1;
    *(float *)((int)puVar8 + 0xc4) = fVar3;
    fVar1 = *(float *)(param_1 + 0x48);
    *(float *)(puVar8 + 0x19) = (float)(dVar23 - dVar24);
    uVar13 = (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xc4) >> 0x1d) & 4;
    dVar22 = ABS((double)*(float *)(puVar8 + 0x18));
    if ((double)*(float *)(puVar8 + 0x19) - dVar21 < 0.0) {
      dVar22 = dVar24;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar3 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    dVar24 = ABS((double)*(float *)((int)puVar8 + 0xc4));
    if ((double)*(float *)(puVar8 + 0x19) - dVar21 < 0.0) {
      dVar24 = dVar23;
    }
    dVar23 = dVar21;
    if (dVar21 < dVar22) {
      lVar10 = uVar9 - 0x140;
      lVar14 = uVar9 - 0x78;
      lVar18 = uVar9 - 0x68;
      lVar20 = 2;
      fVar2 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0xe4) = fVar2;
      *(float *)((int)puVar8 + 0xdc) = fVar2;
      *(float *)(puVar8 + 0x1c) = fVar2;
      *(float *)(puVar8 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xdc) = *(float *)((int)puVar8 + 0xdc) * fVar4;
      *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar2;
      *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar10 + 0xd8) = *(float *)((int)lVar10 + 200) * fVar2 * fVar2;
        iVar12 = (int)lVar14;
        lVar10 = lVar10 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar9 - 0x78;
      pfVar16 = (float *)&DAT_007358e0;
      lVar10 = lVar11;
      lVar14 = lVar18;
      do {
        fVar2 = *pfVar16;
        fVar4 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar10 + 0xd8) = *(float *)((int)lVar10 + 0xd8) * fVar2;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar10 = 2;
      dVar22 = dVar21;
      do {
        iVar12 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xd8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar23 = (double)((float)(dVar22 + dVar25) * fVar5 + fVar3);
    }
    dVar22 = (double)MB_DeltAngSpeed
                               ((double)fVar1,dVar23,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(float)((double)g_FrameTime * dVar25),0x20000,
                                &DAT_00720000,iVar6 + 0x88);
    *(float *)(param_1 + 0x48) = (float)dVar22;
    Delt((float)dVar21,g_FrameTimeSq * 9.0,(float *)(iVar6 + 0x94));
    fVar1 = *(float *)(iVar6 + 0x94);
    if (*(int *)(iVar6 + 0x94) == 0) {
      return 1;
    }
  }
  else {
    fVar1 = (float)piVar7[iVar12 * 4 + 4] - *(float *)(param_1 + 0x10);
    fVar3 = (float)piVar7[iVar12 * 4 + 5] - *(float *)(param_1 + 0x14);
    fVar2 = ABS(fVar1);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar8 + 0xcc) = fVar1;
    *(float *)(puVar8 + 0x1a) = fVar3;
    fVar1 = *(float *)(param_1 + 0x48);
    *(float *)((int)puVar8 + 0xd4) = fVar2 - fVar5;
    uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x1a) >> 0x1d) & 4;
    uVar13 = uVar17 << 2 | 0x735900;
    fVar3 = ABS(*(float *)((int)puVar8 + 0xcc));
    if (*(float *)((int)puVar8 + 0xd4) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = ABS(*(float *)(puVar8 + 0x1a));
    if (*(float *)((int)puVar8 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)((int)uVar13 + 4);
    dVar22 = dVar21;
    if (0.0 < fVar3) {
      lVar10 = uVar9 - 0x140;
      lVar18 = uVar9 - 0x48;
      lVar14 = uVar9 - 0x58;
      lVar20 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0x104) = fVar3;
      *(float *)((int)puVar8 + 0xfc) = fVar3;
      *(float *)(puVar8 + 0x20) = fVar3;
      *(float *)(puVar8 + 0x1f) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0xfc) = *(float *)((int)puVar8 + 0xfc) * fVar4;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar10 + 0xf8) = *(float *)((int)lVar10 + 0xe8) * fVar3 * fVar3;
        iVar12 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar18 = uVar9 - 0x58;
      uVar13 = ZEXT48(&DAT_007358e0);
      lVar10 = lVar11;
      lVar14 = lVar18;
      do {
        pfVar16 = (float *)uVar13;
        fVar3 = pfVar16[1];
        uVar13 = uVar13 + 8;
        *(float *)((int)lVar10 + 0xf8) = *(float *)((int)lVar10 + 0xf8) * *pfVar16;
        lVar10 = lVar10 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar10 = 2;
      do {
        iVar12 = (int)lVar11;
        iVar19 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar12 + 0xf8)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
    }
    dVar22 = (double)MB_DeltAngSpeed
                               ((double)fVar1,dVar22,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(g_FrameTime * 0.7853982),0x20000,uVar13,
                                iVar6 + 0x88);
    *(float *)(param_1 + 0x48) = (float)dVar22;
    Delt(g_FrameTime * 10.0,g_FrameTimeSq * 7.0,(float *)(iVar6 + 0x94));
    fVar1 = *(float *)(iVar6 + 0x94);
  }
  iVar12 = *(int *)(iVar6 + 0xb4);
  fVar3 = (float)piVar7[iVar12 * 4 + 5] - *(float *)(param_1 + 0x14);
  fVar5 = (float)piVar7[iVar12 * 4 + 4] - *(float *)(param_1 + 0x10);
  fVar2 = (float)piVar7[iVar12 * 4 + 6] - *(float *)(param_1 + 0x18);
  *(int *)(iVar6 + 0x7c) = piVar7[iVar12 * 4 + 7];
  iVar12 = *(int *)(iVar6 + 0xb4);
  dVar25 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar1 = (float)((double)fVar1 / dVar25);
  dVar22 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar22 = (double)(fVar1 * fVar3);
  }
  dVar23 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar23 = (double)(fVar1 * fVar5);
  }
  dVar24 = dVar21;
  if (dVar21 - dVar25 < 0.0) {
    dVar24 = (double)(fVar1 * fVar2);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar22 = (double)(fVar1 * fVar3);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar23 = (double)(fVar1 * fVar5);
  }
  if (dVar25 - dVar21 < 0.0) {
    dVar24 = (double)(fVar1 * fVar2);
  }
  *(float *)(iVar6 + 0x74) = (float)dVar22;
  *(float *)(iVar6 + 0x70) = (float)dVar23;
  *(float *)(iVar6 + 0x78) = (float)dVar24;
  fVar1 = (float)((double)*(float *)(param_1 + 0x10) + dVar23);
  *(float *)(param_1 + 0x10) = fVar1;
  fVar3 = *(float *)(param_1 + 0x14) + *(float *)(iVar6 + 0x74);
  *(float *)(param_1 + 0x14) = fVar3;
  fVar5 = *(float *)(param_1 + 0x18) + *(float *)(iVar6 + 0x78);
  *(float *)(param_1 + 0x18) = fVar5;
  fVar3 = fVar3 - (float)piVar7[iVar12 * 4 + 5];
  fVar1 = fVar1 - (float)piVar7[iVar12 * 4 + 4];
  fVar5 = fVar5 - (float)piVar7[iVar12 * 4 + 6];
  if (SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar3 * fVar3) < 2.0) {
    iVar12 = iVar12 + 1;
    *(int *)(iVar6 + 0xb4) = iVar12;
    *(uint *)(iVar6 + 0xb4) =
         iVar12 + ((uint)((longlong)(*piVar7 + -1) - (longlong)iVar12 >> 0x3f) &
                  (*piVar7 + -1) - iVar12);
  }
  M326_0001bbd8(param_1);
  return 0;
}


// 0x001c618 (0x4b8 bytes)
// inlined: FastAtan2 @0x1c810
void M326_0001c618(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  undefined2 uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar14;
  int iVar15;
  longlong lVar13;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xd0;
  puVar10 = (ulonglong *)lVar13;
  *puVar10 = uVar12;
  puVar10[0x1c] = in_LR;
  puVar10[0x19] = in_f31;
  puVar10[0x18] = unaff_r31;
  puVar10[0x17] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar20 = ZEXT48(pvVar8);
  dVar25 = 0.0;
  puVar10[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar10 + 0x74) = 0;
  pfVar14 = (float *)MB_damage(param_1,0x330000,0);
  iVar15 = MB_HandleDamage
                     (param_1,pfVar14,uVar20 + 0x20,0,puVar10 + 0xe,(int)puVar10 + 0x74,0,4);
  if (((*(int *)(puVar10 + 0xe) != 1) && (param_1->state != '\x06')) &&
     (sVar7 = *(short *)((int)pfVar14[8] + 0xa6), sVar7 != 0x199 && sVar7 != 0xb8)) {
    fVar2 = *(float *)((int)puVar10 + 0x74);
    if (sVar7 == 0x1ca) {
      fVar2 = 10.0;
      *(undefined4 *)((int)puVar10 + 0x74) = 0x41200000;
    }
    fVar2 = *(float *)((int)pvVar8 + 0x20) - fVar2;
    *(float *)((int)pvVar8 + 0x20) = fVar2;
    if ((iVar15 == 1) || ((double)fVar2 <= dVar25)) {
      PlayMobySound(2,0,param_1);
      param_1->state = '\x06';
    }
    else if (iVar15 != 0xb) {
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xb4;
      MB_UpdateLightsTransition(param_1,uVar20 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar14[7] == 5627.925) && (param_1->state != '\x05')) {
        fVar6 = (param_1->pos).x - *pfVar14;
        fVar3 = (param_1->pos).y - pfVar14[1];
        dVar24 = ABS((double)fVar6);
        dVar23 = ABS((double)fVar3);
        *(float *)(puVar10 + 0xf) = fVar6;
        *(float *)((int)puVar10 + 0x7c) = fVar3;
        *(float *)(puVar10 + 0x10) = (float)(dVar24 - dVar23);
        uVar17 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1d) & 4;
        dVar22 = ABS((double)*(float *)(puVar10 + 0xf));
        if ((double)*(float *)(puVar10 + 0x10) - dVar25 < 0.0) {
          dVar22 = dVar23;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar23 = ABS((double)*(float *)((int)puVar10 + 0x7c));
        if ((double)*(float *)(puVar10 + 0x10) - dVar25 < 0.0) {
          dVar23 = dVar24;
        }
        fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar25 < dVar22) {
          lVar19 = uVar12 - 0xc0;
          lVar16 = uVar12 - 0x3c;
          lVar18 = uVar12 - 0x4c;
          lVar21 = 2;
          fVar4 = (float)(dVar23 - dVar22) / (float)(dVar23 + dVar22);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar10 + 0x12) = fVar4;
          *(float *)(puVar10 + 0x11) = fVar4;
          *(float *)((int)puVar10 + 0x8c) = fVar4;
          *(float *)((int)puVar10 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar5;
          *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar4;
          *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x84) = *(float *)((int)lVar19 + 0x74) * fVar4 * fVar4;
            iVar15 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar19 = uVar12 - 0x4c;
          lVar21 = 4;
          pfVar14 = (float *)&DAT_007358e0;
          lVar16 = lVar19;
          lVar18 = lVar13;
          do {
            fVar4 = *pfVar14;
            fVar5 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar11 = (int)lVar19;
            lVar13 = lVar13 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0x84)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar22 = (double)FastDiffRots(dVar25,(double)fVar2);
        fVar2 = (float)(dVar22 + 1.570796251296997);
        dVar25 = (double)(float)(3.141592502593994 - dVar22);
        if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
          dVar25 = dVar22;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar23 = (double)(float)(-3.141592502593994 - dVar22);
        if ((double)(float)(-3.141592502593994 - dVar22) - dVar25 < 0.0) {
          dVar23 = dVar25;
        }
        dVar25 = (double)(float)(dVar23 * dVar23);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar22 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar23));
        dVar24 = (double)(float)(dVar25 * dVar22);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar25 * dVar24) * 2.601887e-06 +
                (float)(dVar24 * -0.0001980741071747616 +
                       (double)(float)(dVar22 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar25 * dVar23) *
                                                      -0.16666656732559204 + dVar23)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar8 + 0x98) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar8 + 0x9c) = 0;
        }
        auVar26 = ZEXT416(0xffffffff);
        auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        *(float *)((int)pvVar8 + 0x94) = g_FrameTime * 4.0;
        auVar26 = loadVectorLeftIndexed(0x34,0x1c5dc);
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                             auVar27);
        auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
        auVar26 = vectorSplatHalfWord(auVar26,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar26,0x8e,uVar20);
        *(undefined2 *)((int)pvVar8 + 0x8e) = uVar9;
        uVar1 = param_1->state;
        param_1->state = '\x05';
        param_1->setByGroup = uVar1;
        PlayMobySound(1,0,param_1);
      }
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar20 + 0x60);
  return;
}


// 0x001cb80 (0x1b48 bytes)
// inlined: FastAtan2 @0x1d4ac, FastAtan2 @0x1d6c8, FastAtan2 @0x1da00, FastAtan2 @0x1de74
// strings: 00a1000c: 'None'

/* Moby 326 */

void UpdateMoby_326(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  void *pvVar10;
  MobyInstance *pMoby;
  u16 *puVar11;
  Spline *pSVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  gameMode_t gVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar24;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar25;
  Vec4 *pVVar26;
  undefined4 uVar27;
  int iVar30;
  MobyModeBit MVar32;
  ulonglong uVar28;
  float *pfVar31;
  longlong lVar29;
  longlong lVar33;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar34;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  undefined8 uVar45;
  double dVar46;
  ulonglong in_f31;
  undefined8 uVar47;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar23 = uVar19 - 0x280;
  puVar14 = (ulonglong *)lVar23;
  *puVar14 = uVar19;
  puVar14[0x52] = in_LR;
  puVar14[0x48] = in_f24;
  puVar14[0x49] = in_f25;
  puVar14[0x4a] = in_f26;
  puVar14[0x4b] = in_f27;
  puVar14[0x4c] = in_f28;
  puVar14[0x4d] = in_f29;
  puVar14[0x4e] = in_f30;
  puVar14[0x4f] = in_f31;
  puVar14[0x47] = unaff_r31;
  puVar14[0x46] = unaff_r30;
  gVar18 = g_gameMode;
  pvVar10 = moby->pVar;
  uVar35 = ZEXT48(pvVar10);
  puVar14[0x45] = unaff_r29;
  puVar14[0x44] = unaff_r28;
  puVar14[0x43] = unaff_r27;
  puVar14[0x42] = unaff_r26;
  puVar14[0x41] = unaff_r25;
  puVar14[0x40] = unaff_r24;
  if (gVar18 == GAME_MODE_SCENE) {
    return;
  }
  MB_getTarget(0x4051800000000000,lVar20,&DAT_0001cad0,uVar19 - 400);
  pMoby = *(MobyInstance **)((int)pvVar10 + 0xac);
  if ((pMoby != (MobyInstance *)0x0) && (pMoby->state < 0x80)) {
    DoManipulator(0x40059999a0000000,pMoby,0,(Manipulator *)((int)pvVar10 + 0xd0));
  }
  M326_0001c618(lVar20);
  if (g_heroType == '\x02') {
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    moby->scale = moby->pClass->gScale * 0.5;
    if (iVar24 != 0) {
      *(float *)(iVar24 + 0x2c) = *(float *)(*(int *)(iVar24 + 0x24) + 0x24) * 0.5;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    moby->scale = moby->pClass->gScale;
    if (iVar24 != 0) {
      *(undefined4 *)(iVar24 + 0x2c) = *(undefined4 *)(*(int *)(iVar24 + 0x24) + 0x24);
    }
  }
  uVar2 = moby->state;
  if (((uVar2 == '\x03' || uVar2 == '\x02') || (uVar2 == '\x04')) || (uVar2 == '\x05')) {
    if (*(int *)((int)pvVar10 + 0xb0) == -1) {
      iVar24 = PlayMobySound(3,4,moby);
      *(int *)((int)pvVar10 + 0xb0) = iVar24;
    }
  }
  else {
    iVar24 = *(int *)((int)pvVar10 + 0xb0);
    if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
       (g_SoundChannels[iVar24].state != '\0')) {
      sound_Kill(iVar24);
    }
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0xffffffff;
  }
  if (((Level == Hoven) && (DAT_00927118 != 0)) && (*(int *)((int)pvVar10 + 0xc0) == 0)) {
    if ((MobyInstance *)GameCamera.field19_0x25c.piece<0,4>() == moby) {
      GameCamera.field19_0x25c[0] = '\0';
      GameCamera.field19_0x25c[1] = '\0';
      GameCamera.field19_0x25c[2] = '\0';
      GameCamera.field19_0x25c[3] = '\0';
    }
    if (moby->enabled == '\0') {
      if (*(MobyInstance **)((int)pvVar10 + 0xac) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      DeleteMoby(moby);
      return;
    }
  }
  iVar24 = *(int *)((int)pvVar10 + 0xc0);
  if (iVar24 != 0) {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      if (*(MobyInstance **)((int)pvVar10 + 0xac) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      DeleteMoby(moby);
      return;
    }
    if (DAT_009271d0 != 0) {
      if (*(int *)((int)pvVar10 + 0xac) != 0) {
        FUN_0025ce40(lVar20,*(int *)((int)pvVar10 + 0xac));
        *(undefined4 *)((int)pvVar10 + 0xac) = 0;
      }
      DeleteMoby(moby);
      return;
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    if ((MobyInstance *)GameCamera.field19_0x25c.piece<0,4>() == moby) {
      GameCamera.field19_0x25c[0] = '\0';
      GameCamera.field19_0x25c[1] = '\0';
      GameCamera.field19_0x25c[2] = '\0';
      GameCamera.field19_0x25c[3] = '\0';
    }
    if (*(int *)((int)pvVar10 + 0xac) != 0) {
      FUN_0025ce40(lVar20,*(int *)((int)pvVar10 + 0xac));
      *(undefined4 *)((int)pvVar10 + 0xac) = 0;
    }
    puVar14[0x12] = 2;
    puVar14[0x14] = 1;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar20,&DAT_00a15d30,lVar20 + 0x10,0,2,0x14,3,4);
    if (*(int *)((int)pvVar10 + 0xc0) == 0) {
      MB_SpawnBoltsFromCrate(lVar20,0,0xffffffffffffffff);
    }
    iVar24 = *(int *)((int)pvVar10 + 0xb0);
    if (((iVar24 != -1) && (g_SoundChannels[iVar24].pMoby == moby)) &&
       (g_SoundChannels[iVar24].state != '\0')) {
      sound_Kill(iVar24);
    }
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0xffffffff;
    fVar1 = animationSpeed;
    if (*(int *)((int)pvVar10 + 0xc0) == 0) {
      DeleteMoby(moby);
      return;
    }
    puVar14[0x3e] = (longlong)(int)(animationSpeed * 240.5);
    puVar14[0x3e] = (longlong)(int)(fVar1 * 400.5);
    uVar27 = MB_randRange
                       (*(undefined4 *)((int)puVar14 + 500),*(undefined4 *)((int)puVar14 + 500));
    *(undefined4 *)((int)pvVar10 + 0xc4) = uVar27;
    moby->collision = (ushort *)0x0;
    moby->state = '\0';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  else if (uVar2 == '\x05') {
    iVar24 = FastDecTimerS16(uVar35 + 0x8e);
    if (iVar24 == 0) {
      fVar1 = -(g_FrameTimeSq * 4.0 - *(float *)((int)pvVar10 + 0x94));
      *(float *)((int)pvVar10 + 0x94) = fVar1;
      if (fVar1 < 0.0) {
        *(undefined4 *)((int)pvVar10 + 0x94) = 0;
        fVar1 = 0.0;
      }
      fVar7 = (moby->rotation).z;
      fVar8 = fVar7 + 1.5707963;
      fVar3 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar3 = fVar7;
      }
      fVar4 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar4 = fVar8;
      }
      fVar5 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      fVar7 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar8 = fVar5 * fVar5;
      fVar3 = fVar7 * fVar7;
      fVar15 = fVar8 * fVar8 * fVar5;
      fVar4 = fVar3 * fVar3 * fVar7;
      fVar16 = fVar8 * fVar15;
      fVar6 = fVar3 * fVar4;
      (moby->pos).y =
           (moby->pos).y +
           -((fVar8 * fVar16 * 2.601887e-06 +
             fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5) *
            fVar1);
      (moby->pos).x =
           (moby->pos).x +
           -((fVar3 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
            fVar1);
    }
    else {
      moby->state = moby->setByGroup;
    }
  }
  else if (uVar2 == '\x04') {
    fVar1 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
    fVar7 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
    pfVar31 = (float *)&g_atanQuadrantTable;
    fVar3 = ABS(fVar1);
    fVar8 = ABS(fVar7);
    *(float *)(puVar14 + 0x28) = fVar1;
    *(float *)((int)puVar14 + 0x144) = fVar7;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar14 + 0x29) = fVar3 - fVar8;
    dVar41 = 0.0;
    uVar21 = (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar14 + 0x28));
    if (*(float *)(puVar14 + 0x29) - 0.0 < 0.0) {
      fVar7 = fVar8;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar14 + 0x144));
    if (*(float *)(puVar14 + 0x29) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    dVar42 = dVar41;
    if (0.0 < fVar7) {
      lVar34 = uVar19 - 0x270;
      lVar22 = uVar19 - 0x110;
      lVar29 = uVar19 - 0x100;
      lVar33 = 2;
      fVar7 = (fVar5 - fVar7) / (fVar5 + fVar7);
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x17c) = fVar7;
      *(float *)((int)puVar14 + 0x174) = fVar7;
      *(float *)(puVar14 + 0x2f) = fVar7;
      *(float *)(puVar14 + 0x2e) = fVar7;
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar3;
      *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar7;
      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar7 * fVar3;
      do {
        *(float *)((int)lVar34 + 0x170) = *(float *)((int)lVar34 + 0x160) * fVar7 * fVar7;
        iVar24 = (int)lVar22;
        lVar34 = lVar34 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar19 - 0x110;
      pfVar31 = (float *)&DAT_007358e0;
      lVar34 = lVar23;
      lVar22 = lVar29;
      do {
        fVar7 = *pfVar31;
        fVar3 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar34 + 0x170) = *(float *)((int)lVar34 + 0x170) * fVar7;
        lVar34 = lVar34 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar34 = 2;
      do {
        iVar24 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        iVar30 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x170)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
      dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar4 + fVar8);
    }
    dVar42 = (double)MB_DeltAngSpeed
                               ((double)fVar1,dVar42,0x3f70624de0000000,0x3fd3333340000000,
                                (double)(g_FrameTime * 0.7853982),&DAT_0001cad0,pfVar31,
                                uVar35 + 0x88);
    iVar24 = *(int *)((int)pvVar10 + 0xa4);
    (moby->rotation).z = (float)dVar42;
    pSVar12 = Splines[iVar24];
    if (*(short *)((int)pvVar10 + 0xbe) == 0) {
      fVar7 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      pVVar26 = pSVar12->points + pSVar12->cnt + -1;
      fVar1 = pVVar26->x;
      fVar8 = pVVar26->y;
      fVar4 = pVVar26->z;
      fVar6 = pVVar26->w;
    }
    else {
      fVar1 = pSVar12->points[0].x;
      fVar7 = (moby->pos).x;
      fVar8 = pSVar12->points[0].y;
      fVar3 = (moby->pos).y;
      fVar4 = pSVar12->points[0].z;
      fVar5 = (moby->pos).z;
      fVar6 = pSVar12->points[0].w;
    }
    dVar48 = (double)fVar6;
    dVar43 = (double)(fVar8 - fVar3);
    dVar44 = (double)(fVar4 - fVar5);
    dVar42 = (double)(fVar1 - fVar7);
    dVar46 = (double)SQRT((float)(dVar44 * dVar44 +
                                 (double)(float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43))
                                 ));
    if (dVar46 <= 5.5) {
      Delt((float)dVar41,g_FrameTimeSq * 9.0,(float *)((int)pvVar10 + 0x94));
      fVar1 = *(float *)((int)pvVar10 + 0x94);
      if (*(int *)((int)pvVar10 + 0x94) == 0) {
        auVar51 = ZEXT416(0xffffffff);
        auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = loadVectorLeftIndexed(0x6c,0x1cad0);
        auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar51 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                             auVar50);
        auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
        *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
        *(short *)((int)pvVar10 + 0xbe) =
             (short)((ulonglong)(LZCOUNT((uint)*(ushort *)((int)pvVar10 + 0xbe)) << 0x20) >> 0x25);
        moby->state = '\x03';
        goto LAB_0001e478;
      }
    }
    else {
      Delt(g_FrameTime * 10.0,g_FrameTimeSq * 7.0,(float *)((int)pvVar10 + 0x94))
      ;
      fVar1 = *(float *)((int)pvVar10 + 0x94);
    }
    dVar37 = (double)(float)((double)fVar1 / dVar46);
    *(float *)((int)pvVar10 + 0x7c) = (float)dVar48;
    dVar48 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar48 = (double)(float)(dVar37 * dVar43);
    }
    dVar38 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar42);
    }
    dVar39 = dVar41;
    if (dVar41 - dVar46 < 0.0) {
      dVar39 = (double)(float)(dVar37 * dVar44);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar48 = (double)(float)(dVar37 * dVar43);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar38 = (double)(float)(dVar37 * dVar42);
    }
    if (dVar46 - dVar41 < 0.0) {
      dVar39 = (double)(float)(dVar37 * dVar44);
    }
    *(float *)((int)pvVar10 + 0x74) = (float)dVar48;
    *(float *)((int)pvVar10 + 0x70) = (float)dVar38;
    *(float *)((int)pvVar10 + 0x78) = (float)dVar39;
    (moby->pos).x = (float)((double)(moby->pos).x + dVar38);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar10 + 0x74);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar10 + 0x78);
    M326_0001bbd8(lVar20);
  }
  else if (uVar2 == '\x03') {
    if (((Level == Hoven) && (UnlockableItems.devastator == '\0')) &&
       (HelpData.piece<744,2>() == 0)) {
      Help_QueueMessage(STR_YOU_NEED_A_DEVASTATOR_0x2EE2,0x5d);
      iVar24 = *(int *)((int)pvVar10 + 0xc0);
    }
    fVar1 = (moby->pos).y;
    fVar7 = (moby->pos).x;
    if (iVar24 == 0) {
      if ((21.0 <= SQRT((fVar7 - g_heroPosition.x) * (fVar7 - g_heroPosition.x) +
                        (fVar1 - g_heroPosition.y) * (fVar1 - g_heroPosition.y))) ||
         ((moby->pos).z - g_heroPosition.z <= 1.0)) {
        if ((MobyInstance *)GameCamera.field19_0x25c.piece<0,4>() == moby) {
          GameCamera.field19_0x25c[0] = '\0';
          GameCamera.field19_0x25c[1] = '\0';
          GameCamera.field19_0x25c[2] = '\0';
          GameCamera.field19_0x25c[3] = '\0';
        }
      }
      else if (GameCamera.field19_0x25c.piece<0,4>() == 0) {
        GameCamera.field19_0x25c[4] = '\0';
        GameCamera.field19_0x25c[5] = '\0';
        GameCamera.field19_0x25c[6] = '\0';
        GameCamera.field19_0x25c[7] = '\0';
        GameCamera.field19_0x25c.piece<0,4>() = moby;
      }
    }
    fVar8 = fVar1 - *(float *)((int)puVar14 + 0xf4);
    fVar3 = fVar7 - *(float *)(puVar14 + 0x1e);
    if (((SQRT(fVar3 * fVar3 + fVar8 * fVar8) < 40.0) &&
        (-2.0 < (moby->pos).z - *(float *)(puVar14 + 0x1f))) || (*(int *)((int)pvVar10 + 0xc0) != 0)
       ) {
      fVar7 = *(float *)(puVar14 + 0x1e) - fVar7;
      fVar1 = *(float *)((int)puVar14 + 0xf4) - fVar1;
      fVar3 = ABS(fVar7);
      fVar8 = ABS(fVar1);
      *(float *)((int)puVar14 + 0x164) = fVar7;
      *(float *)(puVar14 + 0x2d) = fVar1;
      *(float *)((int)puVar14 + 0x16c) = fVar3 - fVar8;
      dVar41 = 0.0;
      fVar1 = (moby->rotation).z;
      uVar21 = (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x16c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1d) & 4;
      uVar28 = uVar21 << 2 | 0x735900;
      fVar7 = ABS(*(float *)((int)puVar14 + 0x164));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar4 = ABS(*(float *)(puVar14 + 0x2d));
      if (*(float *)((int)puVar14 + 0x16c) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)((int)uVar28 + 4);
      dVar42 = dVar41;
      if (0.0 < fVar7) {
        lVar34 = uVar19 - 0x270;
        lVar29 = uVar19 - 0xa0;
        lVar22 = uVar19 - 0xb0;
        lVar33 = 2;
        fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
        fVar4 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x1dc) = fVar7;
        *(float *)((int)puVar14 + 0x1d4) = fVar7;
        *(float *)(puVar14 + 0x3b) = fVar7;
        *(float *)(puVar14 + 0x3a) = fVar7;
        fVar7 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar4;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar7;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar7 * fVar4;
        do {
          *(float *)((int)lVar34 + 0x1d0) = *(float *)((int)lVar34 + 0x1c0) * fVar7 * fVar7;
          iVar24 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0xb0;
        uVar28 = ZEXT48(&DAT_007358e0);
        lVar34 = lVar23;
        lVar22 = lVar29;
        do {
          pfVar31 = (float *)uVar28;
          fVar7 = pfVar31[1];
          uVar28 = uVar28 + 8;
          *(float *)((int)lVar34 + 0x1d0) = *(float *)((int)lVar34 + 0x1d0) * *pfVar31;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar22 = 2;
        lVar34 = lVar23;
        do {
          iVar24 = (int)lVar34;
          iVar30 = (int)lVar29;
          lVar34 = lVar34 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x1d0)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar8 + fVar3);
      }
      uVar47 = 0x3f70624de0000000;
      uVar45 = 0x3fd3333340000000;
      dVar48 = 0.7853981852531433;
      dVar42 = (double)MB_DeltAngSpeed
                                 ((double)fVar1,dVar42,0x3f70624de0000000,0x3fd3333340000000,
                                  (double)(g_FrameTime * 0.7853982),&DAT_0001cad0,uVar28,
                                  uVar35 + 0x88);
      fVar8 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
      fVar3 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
      fVar1 = *(float *)(puVar14 + 0x1f);
      (moby->rotation).z = (float)dVar42;
      fVar1 = (moby->pos).z - fVar1;
      fVar7 = (moby->rotation).y;
      dVar43 = (double)g_FrameTime;
      fVar8 = SQRT(fVar3 * fVar3 + fVar8 * fVar8);
      *(float *)((int)puVar14 + 0x15c) = fVar1;
      dVar46 = ABS((double)fVar1);
      dVar44 = ABS((double)fVar8);
      *(float *)(puVar14 + 0x2b) = fVar8;
      *(float *)(puVar14 + 0x2c) = (float)(dVar44 - dVar46);
      uVar21 = (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x2c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x15c) >> 0x1d) & 4;
      uVar28 = uVar21 << 2 | 0x735900;
      lVar34 = uVar21 << 2;
      dVar42 = ABS((double)*(float *)(puVar14 + 0x2b));
      if ((double)*(float *)(puVar14 + 0x2c) - dVar41 < 0.0) {
        dVar42 = dVar46;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)lVar34);
      dVar46 = ABS((double)*(float *)((int)puVar14 + 0x15c));
      if ((double)*(float *)(puVar14 + 0x2c) - dVar41 < 0.0) {
        dVar46 = dVar44;
      }
      fVar8 = *(float *)((int)uVar28 + 4);
      dVar44 = dVar41;
      if (dVar41 < dVar42) {
        lVar34 = uVar19 - 0x270;
        lVar22 = uVar19 - 0xd0;
        lVar29 = uVar19 - 0xc0;
        lVar33 = 2;
        fVar3 = (float)(dVar46 - dVar42) / (float)(dVar46 + dVar42);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = fVar3;
        *(float *)((int)puVar14 + 0x1b4) = fVar3;
        *(float *)(puVar14 + 0x37) = fVar3;
        *(float *)(puVar14 + 0x36) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar4;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar3;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar34 + 0x1b0) = *(float *)((int)lVar34 + 0x1a0) * fVar3 * fVar3;
          iVar24 = (int)lVar22;
          lVar34 = lVar34 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0xd0;
        uVar28 = ZEXT48(&DAT_007358e0);
        lVar34 = lVar23;
        lVar22 = lVar29;
        do {
          pfVar31 = (float *)uVar28;
          fVar3 = pfVar31[1];
          uVar28 = uVar28 + 8;
          *(float *)((int)lVar34 + 0x1b0) = *(float *)((int)lVar34 + 0x1b0) * *pfVar31;
          lVar34 = lVar34 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
          lVar22 = lVar22 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar22 = 2;
        lVar34 = lVar23;
        dVar42 = dVar41;
        do {
          iVar24 = (int)lVar34;
          lVar34 = lVar34 + 0x10;
          iVar30 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 0x1b0)) +
                            *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                           *(float *)(iVar30 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar44 = (double)((float)(dVar42 + dVar48) * fVar1 + fVar8);
      }
      dVar42 = (double)MB_DeltAngSpeed
                                 ((double)fVar7,dVar44,uVar47,uVar45,
                                  (double)(float)(dVar43 * dVar48),lVar34,uVar28,uVar35 + 0x9c);
      (moby->rotation).y = (float)dVar42;
      *(undefined4 *)((int)pvVar10 + 0x7c) = 0;
      *(undefined4 *)((int)pvVar10 + 0x78) = 0;
      *(undefined4 *)((int)pvVar10 + 0x74) = 0;
      *(undefined4 *)((int)pvVar10 + 0x70) = 0;
      M326_0001bbd8(lVar20);
      iVar24 = FastDecTimerS16(uVar35 + 0x8c);
      if (iVar24 != 0) {
        lVar34 = uVar19 - 0x1c0;
        *(short *)((int)pvVar10 + 0xbc) = *(short *)((int)pvVar10 + 0xbc) + 1;
        GetBonePosition(lVar20,*(undefined4 *)((int)pvVar10 + 0xb8),lVar34);
        fVar1 = *(float *)(puVar14 + 0x22);
        dVar44 = (double)*(float *)((int)puVar14 + 0x114);
        dVar43 = (double)*(float *)(puVar14 + 0x23);
        *(uint *)((int)pvVar10 + 0xb8) = (*(undefined4 *)((int)pvVar10 + 0xb8) == 0);
        dVar42 = (double)*(float *)((int)puVar14 + 0x11c);
        if (*(int *)((int)pvVar10 + 0xc0) != 0) {
          dVar44 = (double)GameCamera.posY;
          dVar37 = (double)GameCamera.posX;
          dVar42 = (double)(float)GameCamera.field8_0x14c;
          dVar46 = (double)GameCamera.posZ;
          dVar43 = (double)MB_randRangeFloat(-0.5,0.1);
          dVar43 = (double)(float)(dVar46 + dVar43);
          dVar46 = (double)MB_randRangeSigned(dVar41,0x3fd99999a0000000);
          fVar1 = (float)(dVar37 + dVar46);
        }
        fVar7 = (float)(dVar44 - (double)*(float *)((int)puVar14 + 0xc4));
        fVar1 = fVar1 - *(float *)(puVar14 + 0x18);
        *(float *)((int)puVar14 + 0xdc) = (float)dVar42;
        fVar8 = (float)(dVar43 - (double)*(float *)(puVar14 + 0x19));
        iVar24 = *(int *)((int)pvVar10 + 0xc0);
        *(float *)((int)puVar14 + 0xd4) = fVar7;
        *(float *)(puVar14 + 0x1a) = fVar1;
        *(float *)(puVar14 + 0x1b) = fVar8;
        dVar42 = (double)SQRT(fVar8 * fVar8 + fVar1 * fVar1 + fVar7 * fVar7);
        if (iVar24 == 0) {
          fVar3 = 15.0;
        }
        else {
          fVar3 = 22.0;
        }
        fVar3 = (float)((double)(g_FrameTime * fVar3) / dVar42);
        dVar43 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar43 = (double)(fVar1 * fVar3);
        }
        dVar44 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar44 = (double)(fVar7 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar43 = (double)(fVar1 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar44 = (double)(fVar7 * fVar3);
        }
        dVar46 = dVar41;
        if (dVar41 - dVar42 < 0.0) {
          dVar46 = (double)(fVar8 * fVar3);
        }
        if (dVar42 - dVar41 < 0.0) {
          dVar46 = (double)(fVar8 * fVar3);
        }
        *(float *)((int)puVar14 + 0x14c) = (float)dVar43;
        *(float *)(puVar14 + 0x2a) = (float)dVar44;
        *(float *)(puVar14 + 0x1a) = (float)dVar43;
        *(float *)((int)puVar14 + 0xd4) = (float)dVar44;
        *(float *)((int)puVar14 + 0x154) = (float)(ABS(dVar43) - ABS(dVar44));
        *(float *)(puVar14 + 0x1b) = (float)dVar46;
        fVar1 = g_FrameTime;
        uVar21 = (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)((int)puVar14 + 0x14c));
        if ((double)*(float *)((int)puVar14 + 0x154) - dVar41 < 0.0) {
          dVar42 = ABS(dVar44);
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar44 = ABS((double)*(float *)(puVar14 + 0x2a));
        if ((double)*(float *)((int)puVar14 + 0x154) - dVar41 < 0.0) {
          dVar44 = ABS(dVar43);
        }
        fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar43 = dVar41;
        if (dVar41 < dVar42) {
          lVar22 = uVar19 - 0x270;
          lVar33 = uVar19 - 0xe0;
          lVar29 = uVar19 - 0xf0;
          lVar36 = 2;
          fVar3 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x19c) = fVar3;
          *(float *)((int)puVar14 + 0x194) = fVar3;
          *(float *)(puVar14 + 0x33) = fVar3;
          *(float *)(puVar14 + 0x32) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar4;
          *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar3;
          *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar22 + 400) = *(float *)((int)lVar22 + 0x180) * fVar3 * fVar3;
            iVar24 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar24 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar36 = 4;
          lVar33 = uVar19 - 0xf0;
          pfVar31 = (float *)&DAT_007358e0;
          lVar22 = lVar23;
          lVar29 = lVar33;
          do {
            fVar3 = *pfVar31;
            fVar4 = pfVar31[1];
            pfVar31 = pfVar31 + 2;
            *(float *)((int)lVar22 + 400) = *(float *)((int)lVar22 + 400) * fVar3;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar4;
            lVar29 = lVar29 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar22 = 2;
          dVar42 = dVar41;
          do {
            iVar24 = (int)lVar23;
            iVar30 = (int)lVar33;
            lVar23 = lVar23 + 0x10;
            lVar33 = lVar33 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar24 + 400)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar43 = (double)((float)(dVar42 + dVar48) * fVar7 + fVar8);
        }
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 130.5);
        M409_0001f240
                  (dVar43,(double)(fVar1 * 15.0),dVar41,uVar19 - 0x1b0,lVar34,lVar20,
                   *(undefined4 *)((int)puVar14 + 500));
        iVar24 = PlayMobySound(0,0,moby);
        fVar7 = *(float *)((int)puVar14 + 0xd4);
        fVar8 = *(float *)(puVar14 + 0x1a);
        fVar3 = *(float *)(puVar14 + 0x1b);
        dVar44 = 0.5;
        iVar30 = 0;
        dVar43 = (double)SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar7 * fVar7);
        fVar1 = (float)(0.5 / dVar43);
        dVar42 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar42 = (double)(fVar8 * fVar1);
        }
        dVar46 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar46 = (double)(fVar7 * fVar1);
        }
        dVar48 = dVar41;
        if (dVar41 - dVar43 < 0.0) {
          dVar48 = (double)(fVar3 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar42 = (double)(fVar8 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar46 = (double)(fVar7 * fVar1);
        }
        if (dVar43 - dVar41 < 0.0) {
          dVar48 = (double)(fVar3 * fVar1);
        }
        *(float *)(puVar14 + 0x1a) = (float)dVar42;
        *(float *)((int)puVar14 + 0xd4) = (float)dVar46;
        *(float *)(puVar14 + 0x1b) = (float)dVar48;
        *(float *)(puVar14 + 0x18) = (float)((double)*(float *)(puVar14 + 0x18) + dVar42);
        *(float *)((int)puVar14 + 0xc4) = (float)((double)*(float *)((int)puVar14 + 0xc4) + dVar46);
        *(float *)(puVar14 + 0x19) = (float)((double)*(float *)(puVar14 + 0x19) + dVar48);
        dVar42 = 1.2999999523162842;
        do {
          dVar43 = (double)MB_randRangeSigned
                                     (dVar41,(double)(float)((double)g_FrameTime * dVar42)
                                      ,iVar24);
          dVar46 = (double)g_FrameTime;
          *(float *)(puVar14 + 0x1c) = (float)dVar43;
          dVar43 = (double)MB_randRangeSigned(dVar41,(double)(float)(dVar46 * dVar42));
          dVar46 = (double)g_FrameTime;
          *(float *)((int)puVar14 + 0xe4) = (float)dVar43;
          dVar43 = (double)MB_randRangeSigned(dVar41,(double)(float)(dVar46 * dVar42));
          *(float *)(puVar14 + 0x1d) = (float)dVar43;
          uVar25 = MB_randRange(0xaa,0xf0);
          uVar21 = MB_randRange(0x6e,0xb4);
          iVar24 = MB_randRange(0x1e,0x46);
          puVar14[0x3e] = (longlong)iVar24;
          puVar14[0x3e] =
               (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar14[0x3e] + dVar44));
          uVar27 = *(undefined4 *)((int)puVar14 + 500);
          uVar45 = MB_randRange(0x78,0xaa);
          iVar24 = SpawnPart_4
                             (lVar34,uVar19 - 0x1a0,
                              (uint)((uVar21 & 0xffffffff) << 8) | 0x7f000000 | uVar25,0xff,uVar27,
                              0x1e,uVar45,1);
          iVar30 = iVar30 + 1;
        } while (iVar30 < 0x19);
        iVar24 = 4;
        if ((*(int *)((int)pvVar10 + 0xc0) != 0) &&
           (iVar24 = ((uint)((longlong)DAT_00927130 + -0xb >> 0x3f) & 2) + 2, 6 < DAT_00927130)) {
          iVar24 = 3;
        }
        if ((*(short *)((int)pvVar10 + 0xbc) < iVar24) || (*(int *)((int)pvVar10 + 0xa4) == -1)) {
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = loadVectorLeftIndexed(0x58,0x1cad0);
          auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar50);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
          *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
        }
        else {
          *(undefined2 *)((int)pvVar10 + 0xbc) = 0;
          moby->state = '\x04';
        }
      }
    }
  }
  else if (uVar2 == '\x02') {
    if ((iVar24 == 0) && (GameCamera.field19_0x25c.piece<0,4>() == 0)) {
      GameCamera.field19_0x25c[4] = '\0';
      GameCamera.field19_0x25c[5] = '\0';
      GameCamera.field19_0x25c[6] = '\0';
      GameCamera.field19_0x25c[7] = '\0';
      iVar24 = *(int *)((int)pvVar10 + 0xc0);
      GameCamera.field19_0x25c.piece<0,4>() = moby;
    }
    if (iVar24 != 0) {
      auVar51 = ZEXT416(3);
      auVar50 = ZEXT416(0xffffffff);
      auVar49 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar50 = ZEXT416(5);
      auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar49 = loadVectorLeftIndexed(0x7130,0x920000);
      iVar24 = DAT_00927130 + -3;
      auVar49 = vectorSubtractUnsignedWordModulo
                          (auVar49,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60);
      auVar51 = loadVectorLeftIndexed(0x18,0x1cad0);
      auVar51 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar54 = vectorCompareGreaterThanSignedWord(auVar49,auVar52);
      auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar50 = vectorMultiplyAddFloatingPoint
                          (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,
                           auVar50);
      auVar49 = vectorConditionalSelect(auVar49,auVar52,auVar54);
      iVar24 = iVar24 + ((uint)(5 - (longlong)iVar24 >> 0x3f) & 5U - iVar24);
      auVar51 = ZEXT416(0);
      auVar52 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      auVar51 = vectorCompareGreaterThanSignedWord(auVar52,auVar49);
      auVar49 = vectorLogicalAndWithComplement(auVar49,auVar51);
      auVar50 = vectorConvertToSignedFixedPointWordSaturate(auVar50,0);
      auVar51 = ZEXT416(0xfffffff0);
      auVar53 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
      sVar9 = *(short *)((int)pvVar10 + 0x8c);
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 15.5);
      auVar54 = vectorRotateLeftIntegerWord(auVar50,auVar53);
      auVar51 = vectorMultiplyOddUnsignedHalfWord(auVar49,auVar50);
      auVar50 = vectorMultiplySumSignedHalfWordModulo(auVar49,auVar54,auVar52);
      auVar52 = vectorShiftLeftIntegerWord(auVar50,auVar53);
      auVar50.piece<0,4>() = auVar52.piece<0,4>() + auVar51.piece<0,4>();
      auVar50.piece<8,8>() = auVar51.piece<8,8>();
      auVar50.piece<4,4>() = auVar52.piece<4,4>() + auVar51.piece<4,4>();
      auVar49.piece<0,8>() = auVar50.piece<0,8>();
      auVar49.piece<12,4>() = auVar51.piece<12,4>();
      auVar49.piece<8,4>() = auVar52.piece<8,4>() + auVar51.piece<8,4>();
      auVar51.piece<0,12>() = auVar49.piece<0,12>();
      auVar51.piece<12,4>() = auVar52.piece<12,4>() + auVar49.piece<12,4>();
      if ((int)sVar9 < (iVar24 + (iVar24 >> 0x1f & -iVar24)) * *(int *)((int)puVar14 + 500)) {
        auVar51 = vectorSplatHalfWord(auVar51,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar51,0x8c,uVar35);
        *(undefined2 *)((int)pvVar10 + 0x8c) = uVar13;
      }
    }
    iVar24 = M326_0001bf50(lVar20,*(undefined4 *)((int)pvVar10 + 0xa0));
    if (iVar24 != 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    bVar17 = false;
    if (((iVar24 != 0) && (DAT_00927118 != 0)) &&
       (iVar24 = FastDecTimerS32(uVar35 + 0xc4), iVar24 != 0)) {
      bVar17 = true;
    }
    if (((*(int *)((int)pvVar10 + 0x80) != -1) &&
        (iVar24 = MB_IsPntInCuboid
                            (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x80)), iVar24 != 0))
       || (bVar17)) {
      *(undefined1 *)((int)pvVar10 + 0x58) = 0x16;
      *(undefined1 *)((int)pvVar10 + 0x59) = 1;
      *(undefined1 *)((int)pvVar10 + 0x5a) = 7;
      moby->damage = -1;
      MVar32 = moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      iVar24 = *(int *)((int)pvVar10 + 0xac);
      moby->modeBits = MVar32;
      if (iVar24 != 0) {
        *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
        MVar32 = moby->modeBits;
      }
      moby->modeBits = MVar32 | CAN_BE_AUTO_TARGETED;
      puVar11 = moby->pClass->collision;
      moby->state = '\x02';
      moby->collision = puVar11;
    }
  }
  else if (uVar2 == '\0') {
    *(undefined2 *)((int)pvVar10 + 0x24) = 6;
    *(undefined1 *)((int)pvVar10 + 0x28) = 2;
    *(undefined1 *)((int)pvVar10 + 0x29) = 0;
    *(undefined4 *)((int)pvVar10 + 0x94) = 0;
    *(undefined4 *)((int)pvVar10 + 0x9c) = 0;
    MVar32 = moby->modeBits;
    *(undefined4 *)((int)pvVar10 + 0x20) = 0x40c00000;
    *(undefined4 *)((int)pvVar10 + 0x98) = 0;
    uVar27 = *(undefined4 *)((int)pvVar10 + 0xa0);
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         MVar32 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    Spline_ComputeSegmentLengths(uVar27);
    Spline_ComputeSegmentLengths(*(undefined4 *)((int)pvVar10 + 0xa0));
    Spline_ComputeSegmentLengths(*(undefined4 *)((int)pvVar10 + 0xa4));
    if (moby->drawDistance < 0x80) {
      moby->drawDistance = 0x80;
    }
    if (*(int *)((int)pvVar10 + 0xac) == 0) {
      iVar24 = FUN_0025cd18(lVar20);
      *(int *)((int)pvVar10 + 0xac) = iVar24;
      *(undefined1 *)(iVar24 + 0x30) = 0;
      *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 0x41;
    }
    iVar24 = *(int *)((int)pvVar10 + 0xc0);
    pSVar12 = Splines[*(int *)((int)pvVar10 + 0xa0)];
    (moby->pos).x = pSVar12->points[0].x;
    (moby->pos).y = pSVar12->points[0].y;
    (moby->pos).z = pSVar12->points[0].z;
    (moby->pos).w = pSVar12->points[0].w;
    fVar1 = animationSpeed;
    if ((iVar24 != 0) && (*(int *)((int)pvVar10 + 0xc4) == 0)) {
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 240.5);
      puVar14[0x3e] = (longlong)(int)(fVar1 * 400.5);
      iVar24 = MB_randRange
                         (*(undefined4 *)((int)puVar14 + 500),*(undefined4 *)((int)puVar14 + 500));
      iVar30 = DAT_00927130 + -1;
      iVar30 = iVar30 + ((uint)(10 - (longlong)iVar30 >> 0x3f) & 10U - iVar30);
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 35.5);
      *(int *)((int)pvVar10 + 0xc4) =
           iVar24 + (iVar30 + (iVar30 >> 0x1f & -iVar30)) * *(int *)((int)puVar14 + 500);
    }
    *(undefined4 *)((int)pvVar10 + 0xb4) = 0;
    moby->state = '\x01';
  }
LAB_0001e478:
  dVar48 = 1.570796251296997;
  dVar46 = 3.141592502593994;
  fVar1 = *(float *)((int)pvVar10 + 0x90) + 1.5707963;
  dVar44 = -3.141592502593994;
  dVar43 = -0.16666656732559204;
  dVar42 = 0.008333025500178337;
  dVar41 = -0.0001980741071747616;
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  fVar8 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar8 = fVar7;
  }
  dVar40 = 2.601886990305502e-06;
  dVar39 = 0.17000000178813934;
  fVar3 = fVar8 * fVar8;
  fVar1 = fVar3 * fVar3 * fVar8;
  fVar7 = fVar3 * fVar1;
  (moby->pos).z =
       -((fVar3 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar1 * 0.0083330255 + fVar3 * fVar8 * -0.16666657 + fVar8) * 0.17
        - (moby->pos).z);
  dVar37 = (double)FastWrapRot
                             (*(float *)((int)pvVar10 + 0x90),
                              6.2831855 / (float)(longlong)(animationSpeed * 120.5));
  dVar38 = (double)(float)(dVar37 + dVar48);
  *(float *)((int)pvVar10 + 0x90) = (float)dVar37;
  dVar48 = (double)(float)(dVar46 - dVar38);
  if (dVar38 - (double)(float)(dVar46 - dVar38) < 0.0) {
    dVar48 = dVar38;
  }
  dVar46 = (double)(float)(dVar44 - dVar38);
  if ((double)(float)(dVar44 - dVar38) - dVar48 < 0.0) {
    dVar46 = dVar48;
  }
  fVar7 = (moby->pos).x;
  iVar24 = *(int *)((int)pvVar10 + 0xac);
  dVar44 = (double)(float)(dVar46 * dVar46);
  dVar37 = (double)(float)(dVar44 * (double)(float)(dVar44 * dVar46));
  dVar48 = (double)(float)(dVar44 * dVar37);
  fVar1 = (float)((double)(float)((double)(float)(dVar44 * dVar48) * dVar40 +
                                 (double)(float)(dVar48 * dVar41 +
                                                (double)(float)(dVar37 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar44 * dVar46) * dVar43 + dVar46)))) * dVar39 +
                 (double)(moby->pos).z);
  (moby->pos).z = fVar1;
  if (iVar24 != 0) {
    *(float *)(iVar24 + 0x10) = fVar7;
    *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
    iVar24 = *(int *)((int)pvVar10 + 0xac);
    *(f32 *)(iVar24 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (moby->rotation).w;
    UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar10 + 0xac));
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0xac));
    *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar10 + 0xac) + 0x34) | 6;
    fVar1 = (moby->pos).z;
    fVar7 = (moby->pos).x;
  }
  if ((((*(int *)((int)pvVar10 + 0xc0) == 0) && (1 < moby->state)) && (moby->enabled != '\0')) &&
     (fVar8 = (moby->pos).y - GameCamera.posY,
     SQRT((fVar1 - GameCamera.posZ) * (fVar1 - GameCamera.posZ) +
          (fVar7 - GameCamera.posX) * (fVar7 - GameCamera.posX) + fVar8 * fVar8) < 30.0)) {
    MB_SetZBoundsFromGround(lVar20);
    moby->shadow = '\x18';
  }
  return;
}


