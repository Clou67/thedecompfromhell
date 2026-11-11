// game/update/moby100.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x180984-0x18150c
#include "game/update/moby100.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0180984 (0x14 bytes)
void M100_00180984(void)

{
  DAT_0073b66c = 0x10000;
  return;
}


// 0x0180998 (0x148 bytes)
void M100_00180998(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  float local_30;
  float local_2c;
  float local_28;
  f32 local_24;
  float local_20;
  float local_1c;
  float local_18;
  f32 local_14;
  
  pvVar1 = param_1->pVar;
  local_30 = *(float *)((int)pvVar1 + 0x10);
  iVar2 = *(int *)((int)pvVar1 + 0x28) + 1;
  local_2c = *(float *)((int)pvVar1 + 0x14);
  local_28 = *(float *)((int)pvVar1 + 0x18);
  *(int *)((int)pvVar1 + 0x28) = iVar2;
  local_24 = *(f32 *)((int)pvVar1 + 0x1c);
  if (3 < iVar2) {
    local_20 = local_30 - (param_1->pos).x;
    local_1c = local_2c - (param_1->pos).y;
    local_18 = local_28 - (param_1->pos).z;
    local_14 = local_24;
    MB_compressVector
              (&local_20,(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x20) * 4 + 0x30));
    iVar2 = *(int *)((int)pvVar1 + 0x24) + 1;
    *(undefined4 *)((int)pvVar1 + 0x28) = 0;
    *(int *)((int)pvVar1 + 0x24) = iVar2;
    if (0x3f < iVar2) {
      *(undefined4 *)((int)pvVar1 + 0x24) = 0x3f;
    }
    uVar3 = *(int *)((int)pvVar1 + 0x20) + 1;
    local_30 = (param_1->pos).x;
    *(float *)((int)pvVar1 + 0x10) = local_30;
    local_2c = (param_1->pos).y;
    *(float *)((int)pvVar1 + 0x14) = local_2c;
    local_28 = (param_1->pos).z;
    *(uint *)((int)pvVar1 + 0x20) =
         uVar3 + (((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0)) * -0x40;
    *(float *)((int)pvVar1 + 0x18) = local_28;
    local_24 = (param_1->pos).w;
    *(f32 *)((int)pvVar1 + 0x1c) = local_24;
  }
  local_30 = local_30 - (param_1->pos).x;
  local_2c = local_2c - (param_1->pos).y;
  local_28 = local_28 - (param_1->pos).z;
  MB_compressVector
            (&local_30,(int *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x20) * 4 + 0x30));
  return;
}


// 0x0180ae8 (0x894 bytes)
// inlined: FastAtan2 @0x180ce8, FastAtan2 @0x180e88, FastAtan2 @0x181028, FastAtan2 @0x1811c8
void M100_00180ae8(MobyInstance *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  void *pvVar16;
  int iVar17;
  ulonglong *puVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  longlong lVar27;
  float *pfVar29;
  longlong lVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar35;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar25 = uVar23 - 0x1b0;
  puVar18 = (ulonglong *)lVar25;
  *puVar18 = uVar23;
  puVar18[0x38] = in_LR;
  puVar18[0x2b] = in_f21;
  puVar18[0x2c] = in_f22;
  puVar18[0x2d] = in_f23;
  puVar18[0x2e] = in_f24;
  puVar18[0x2f] = in_f25;
  puVar18[0x30] = in_f26;
  puVar18[0x31] = in_f27;
  puVar18[0x32] = in_f28;
  puVar18[0x33] = in_f29;
  puVar18[0x34] = in_f30;
  puVar18[0x35] = in_f31;
  puVar18[0x2a] = unaff_r31;
  puVar18[0x29] = unaff_r30;
  pvVar16 = param_1->pVar;
  fVar3 = DAT_0073b690 * g_FrameTime;
  fVar1 = *(float *)((int)pvVar16 + 4);
  iVar17 = *(int *)((int)pvVar16 + 8);
  puVar18[0x28] = unaff_r29;
  puVar18[0x24] = (longlong)iVar17;
  fVar2 = *(float *)((int)pvVar16 + 0xc);
  puVar18[0x27] = unaff_r28;
  dVar35 = (double)((float)(longlong)puVar18[0x24] + fVar2 + fVar3 / fVar1);
  iVar26 = FastDoubleToInt(dVar35);
  *(int *)((int)pvVar16 + 8) = iVar26;
  iVar17 = *param_2;
  puVar18[0x24] = (longlong)iVar26;
  iVar26 = iVar26 - (iVar26 / iVar17) * iVar17;
  uVar31 = puVar18[0x24];
  *(int *)((int)pvVar16 + 8) = iVar26;
  iVar17 = *param_2;
  iVar19 = (iVar26 + 1) - ((iVar26 + 1) / iVar17) * iVar17;
  fVar1 = (float)(dVar35 - (double)(longlong)uVar31);
  *(float *)((int)pvVar16 + 0xc) = fVar1;
  fVar2 = (float)param_2[iVar26 * 4 + 4];
  iVar17 = (iVar26 + 2) - ((iVar26 + 2) / iVar17) * iVar17;
  fVar3 = (float)param_2[iVar26 * 4 + 5];
  fVar4 = (float)param_2[iVar19 * 4 + 4];
  fVar5 = (float)param_2[iVar19 * 4 + 5];
  fVar22 = fVar4 - fVar2;
  fVar6 = (float)param_2[iVar26 * 4 + 6];
  fVar21 = fVar5 - fVar3;
  fVar7 = (float)param_2[iVar19 * 4 + 6];
  fVar8 = (f32)param_2[iVar19 * 4 + 7];
  fVar20 = fVar7 - fVar6;
  fVar9 = (float)param_2[iVar17 * 4 + 4];
  fVar10 = (float)param_2[iVar17 * 4 + 5];
  fVar11 = (float)param_2[iVar17 * 4 + 6];
  *(float *)((int)puVar18 + 0x94) = fVar22;
  *(float *)(puVar18 + 0x13) = fVar21;
  *(float *)((int)puVar18 + 0x9c) = ABS(fVar22) - ABS(fVar21);
  dVar35 = 0.0;
  uVar31 = (ulonglong)(*(uint *)((int)puVar18 + 0x94) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x13) >> 0x1d) & 4;
  fVar13 = ABS(*(float *)((int)puVar18 + 0x94));
  if (*(float *)((int)puVar18 + 0x9c) - 0.0 < 0.0) {
    fVar13 = ABS(fVar21);
  }
  fVar14 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar15 = ABS(*(float *)(puVar18 + 0x13));
  if (*(float *)((int)puVar18 + 0x9c) - 0.0 < 0.0) {
    fVar15 = ABS(fVar22);
  }
  fVar12 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar33 = dVar35;
  if (0.0 < fVar13) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xb0;
    lVar28 = uVar23 - 0xa0;
    lVar30 = 2;
    fVar13 = (fVar15 - fVar13) / (fVar15 + fVar13);
    fVar15 = fVar13 * fVar13;
    *(float *)((int)puVar18 + 0x10c) = fVar13;
    *(float *)((int)puVar18 + 0x104) = fVar13;
    *(float *)(puVar18 + 0x21) = fVar13;
    *(float *)(puVar18 + 0x20) = fVar13;
    fVar13 = fVar15 * fVar15;
    *(float *)((int)puVar18 + 0x104) = *(float *)((int)puVar18 + 0x104) * fVar15;
    *(float *)(puVar18 + 0x21) = *(float *)(puVar18 + 0x21) * fVar13;
    *(float *)((int)puVar18 + 0x10c) = *(float *)((int)puVar18 + 0x10c) * fVar13 * fVar15;
    do {
      *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0xf0) * fVar13 * fVar13;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar13 * fVar13;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xb0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar13 = *pfVar29;
      fVar15 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0x100) = *(float *)((int)lVar24 + 0x100) * fVar13;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar15;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar17 + 0x100)) +
                        *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar14 + fVar12);
  }
  *(float *)((int)puVar18 + 0x8c) = fVar20;
  fVar13 = SQRT(fVar22 * fVar22 + fVar21 * fVar21);
  fVar14 = ABS(fVar13);
  *(float *)(puVar18 + 0x11) = fVar13;
  *(float *)(puVar18 + 0x12) = fVar14 - ABS(fVar20);
  uVar31 = (ulonglong)(*(uint *)(puVar18 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x8c) >> 0x1d) & 4;
  fVar13 = ABS(*(float *)(puVar18 + 0x11));
  if (*(float *)(puVar18 + 0x12) - 0.0 < 0.0) {
    fVar13 = ABS(fVar20);
  }
  fVar15 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar12 = ABS(*(float *)((int)puVar18 + 0x8c));
  if (*(float *)(puVar18 + 0x12) - 0.0 < 0.0) {
    fVar12 = fVar14;
  }
  fVar14 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar34 = dVar35;
  if (0.0 < fVar13) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xd0;
    lVar28 = uVar23 - 0xc0;
    lVar30 = 2;
    fVar13 = (fVar12 - fVar13) / (fVar12 + fVar13);
    fVar12 = fVar13 * fVar13;
    *(float *)((int)puVar18 + 0xec) = fVar13;
    *(float *)((int)puVar18 + 0xe4) = fVar13;
    *(float *)(puVar18 + 0x1d) = fVar13;
    *(float *)(puVar18 + 0x1c) = fVar13;
    fVar13 = fVar12 * fVar12;
    *(float *)((int)puVar18 + 0xe4) = *(float *)((int)puVar18 + 0xe4) * fVar12;
    *(float *)(puVar18 + 0x1d) = *(float *)(puVar18 + 0x1d) * fVar13;
    *(float *)((int)puVar18 + 0xec) = *(float *)((int)puVar18 + 0xec) * fVar13 * fVar12;
    do {
      *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xd0) * fVar13 * fVar13;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar13 * fVar13;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xd0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar13 = *pfVar29;
      fVar12 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xe0) = *(float *)((int)lVar24 + 0xe0) * fVar13;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar12;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar17 + 0xe0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar15 + fVar14);
  }
  fVar9 = fVar9 - fVar4;
  fVar10 = fVar10 - fVar5;
  fVar11 = fVar11 - fVar7;
  *(float *)((int)puVar18 + 0x7c) = fVar9;
  *(float *)(puVar18 + 0x10) = fVar10;
  *(float *)((int)puVar18 + 0x84) = ABS(fVar9) - ABS(fVar10);
  uVar31 = (ulonglong)(*(uint *)((int)puVar18 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x10) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar18 + 0x7c));
  if (*(float *)((int)puVar18 + 0x84) - 0.0 < 0.0) {
    fVar4 = ABS(fVar10);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar7 = ABS(*(float *)(puVar18 + 0x10));
  if (*(float *)((int)puVar18 + 0x84) - 0.0 < 0.0) {
    fVar7 = ABS(fVar9);
  }
  fVar13 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  dVar32 = dVar35;
  if (0.0 < fVar4) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0xf0;
    lVar28 = uVar23 - 0xe0;
    lVar30 = 2;
    fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
    fVar7 = fVar4 * fVar4;
    *(float *)((int)puVar18 + 0xcc) = fVar4;
    *(float *)((int)puVar18 + 0xc4) = fVar4;
    *(float *)(puVar18 + 0x19) = fVar4;
    *(float *)(puVar18 + 0x18) = fVar4;
    fVar4 = fVar7 * fVar7;
    *(float *)((int)puVar18 + 0xc4) = *(float *)((int)puVar18 + 0xc4) * fVar7;
    *(float *)(puVar18 + 0x19) = *(float *)(puVar18 + 0x19) * fVar4;
    *(float *)((int)puVar18 + 0xcc) = *(float *)((int)puVar18 + 0xcc) * fVar4 * fVar7;
    do {
      *(float *)((int)lVar24 + 0xc0) = *(float *)((int)lVar24 + 0xb0) * fVar4 * fVar4;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0xf0;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar7 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xc0) = *(float *)((int)lVar24 + 0xc0) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar27 = 2;
    lVar24 = lVar25;
    do {
      iVar17 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      iVar19 = (int)lVar28;
      lVar28 = lVar28 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar17 + 0xc0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar5 + fVar13);
  }
  *(float *)((int)puVar18 + 0x74) = fVar11;
  fVar11 = ABS(fVar11);
  fVar4 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  fVar5 = ABS(fVar4);
  *(float *)(puVar18 + 0xe) = fVar4;
  *(float *)(puVar18 + 0xf) = fVar5 - fVar11;
  uVar31 = (ulonglong)(*(uint *)(puVar18 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x74) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)(puVar18 + 0xe));
  if (*(float *)(puVar18 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar11;
  }
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar31 << 2));
  fVar9 = ABS(*(float *)((int)puVar18 + 0x74));
  if (*(float *)(puVar18 + 0xf) - 0.0 < 0.0) {
    fVar9 = fVar5;
  }
  fVar5 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
  if (0.0 < fVar4) {
    lVar24 = uVar23 - 0x1a0;
    lVar27 = uVar23 - 0x110;
    lVar28 = uVar23 - 0x100;
    lVar30 = 2;
    fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
    fVar9 = fVar4 * fVar4;
    *(float *)((int)puVar18 + 0xac) = fVar4;
    *(float *)((int)puVar18 + 0xa4) = fVar4;
    *(float *)(puVar18 + 0x15) = fVar4;
    *(float *)(puVar18 + 0x14) = fVar4;
    fVar4 = fVar9 * fVar9;
    *(float *)((int)puVar18 + 0xa4) = *(float *)((int)puVar18 + 0xa4) * fVar9;
    *(float *)(puVar18 + 0x15) = *(float *)(puVar18 + 0x15) * fVar4;
    *(float *)((int)puVar18 + 0xac) = *(float *)((int)puVar18 + 0xac) * fVar4 * fVar9;
    do {
      *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0x90) * fVar4 * fVar4;
      iVar17 = (int)lVar27;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
      lVar28 = lVar28 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar28 = uVar23 - 0x110;
    pfVar29 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar27 = lVar28;
    do {
      fVar4 = *pfVar29;
      fVar9 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0xa0) * fVar4;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar24 = 2;
    do {
      iVar17 = (int)lVar25;
      iVar19 = (int)lVar28;
      lVar25 = lVar25 + 0x10;
      lVar28 = lVar28 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar17 + 0xa0)) + *(float *)(iVar19 + 4)
                        + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar7 + fVar5);
  }
  (param_1->pos).w = fVar8;
  (param_1->pos).x = fVar1 * fVar22 + fVar2;
  (param_1->pos).y = fVar1 * fVar21 + fVar3;
  (param_1->pos).z = fVar1 * fVar20 + fVar6;
  dVar32 = (double)FastDiffRots(dVar32,dVar33);
  dVar33 = (double)FastWrapRot
                             ((float)(dVar32 * (double)*(float *)((int)pvVar16 + 0xc)),(float)dVar33
                             );
  (param_1->rotation).z = (float)dVar33;
  dVar35 = (double)FastDiffRots(dVar35,dVar34);
  dVar35 = (double)FastWrapRot
                             ((float)(dVar35 * (double)*(float *)((int)pvVar16 + 0xc)),(float)dVar34
                             );
  (param_1->rotation).y = (float)-dVar35;
  return;
}


// 0x018137c (0x190 bytes)
/* Moby 100 */

void UpdateMoby_100(MobyInstance *moby)

{
  int *piVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
    SetColorOfMoby(moby,0xc0,0xc0,0xc0);
    pSVar2 = Splines[*piVar1];
    moby->scale = moby->pClass->gScale * DAT_0073b694;
    fVar3 = pSVar2->points[0].y - pSVar2->points[1].y;
    fVar4 = pSVar2->points[0].x - pSVar2->points[1].x;
    fVar5 = pSVar2->points[0].z - pSVar2->points[1].z;
    piVar1[1] = (int)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    moby->state = '\x01';
    piVar1[2] = 0;
    (moby->pos).x = pSVar2->points[0].x;
    (moby->pos).y = pSVar2->points[0].y;
    (moby->pos).z = pSVar2->points[0].z;
    (moby->pos).w = pSVar2->points[0].w;
    piVar1[10] = 0;
    piVar1[9] = 0;
    piVar1[8] = 0;
    piVar1[4] = (int)(moby->pos).x;
    piVar1[5] = (int)(moby->pos).y;
    piVar1[6] = (int)(moby->pos).z;
    piVar1[7] = (int)(moby->pos).w;
  }
  else if (moby->state < 2) {
    M100_00180ae8(moby,Splines[*piVar1]);
    M100_00180998(moby);
    if (DAT_00e5af04 == 0) {
      RegisterFuncForMoby(&PTR_M1000_0018150c_007082b8,moby);
    }
  }
  return;
}


