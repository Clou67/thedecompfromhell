// game/update/moby491.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3a01e0-0x3a372c
#include <math.h>
#include <stdlib.h>
#include "game/update/moby491.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby819.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x03a01e0 (0x45c bytes)
// inlined: FastAtan2 @0x3a0370, FastAtan2 @0x3a0510
void FUN_003a01e0(float param_1,float *param_2,f32 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar16 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  pMVar13 = CreateMoby(ROCKET_0031);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    uVar14 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar13->state = '\0';
    pMVar13->color = (int)((ulonglong)uVar14 >> 0x20);
    pMVar13->light = (int)uVar14;
    pfVar19 = (float *)pMVar13->pVar;
    auVar22 = ZEXT416(0xffffffff);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    pMVar13->scale = pMVar13->scale * 3.0;
    (pMVar13->pos).x = *param_3;
    (pMVar13->pos).y = param_3[1];
    (pMVar13->pos).z = param_3[2];
    (pMVar13->pos).w = param_3[3];
    *pfVar19 = *param_2;
    pfVar19[1] = param_2[1];
    pfVar19[2] = param_2[2];
    pfVar19[3] = param_2[3];
    auVar22 = loadVectorLeftIndexed(4,0x3a01cc);
    auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                         auVar23);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x14,
                       ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 5) & 0xfffffffc) = uVar7;
    pfVar19[6] = param_1;
    pfVar19[4] = 0.0;
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar9 = ABS(param_2[1]);
    *(float *)(puVar8 + 0xf) = fVar2 - fVar9;
    fVar1 = 0.0;
    MVar4 = pMVar13->modeBits;
    uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar9;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar9 = fVar2;
    }
    fVar2 = fVar1;
    if (0.0 < fVar5) {
      lVar15 = uVar12 - 0xd0;
      lVar18 = uVar12 - 0x44;
      lVar20 = uVar12 - 0x34;
      lVar21 = 2;
      fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar2;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar5 * fVar5;
        iVar10 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar20 = uVar12 - 0x44;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar5 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = 2;
      lVar15 = lVar16;
      fVar5 = fVar1;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar5 + 0.7853982) * fVar3 + fVar6;
    }
    (pMVar13->rotation).z = fVar2;
    fVar5 = param_2[2];
    fVar2 = ABS(param_2[2]);
    fVar6 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar9 = ABS(fVar6);
    *(float *)(puVar8 + 0xe) = fVar6;
    *(float *)((int)puVar8 + 0x74) = fVar9 - fVar2;
    uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar5 >> 0x1d) & 4;
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar12 - 0xd0;
      lVar18 = uVar12 - 100;
      lVar20 = uVar12 - 0x54;
      lVar21 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x11) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)((int)puVar8 + 0x84) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar2;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar6;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar6 * fVar6;
        iVar10 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar20 = uVar12 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar6 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar15 = 2;
      do {
        iVar10 = (int)lVar16;
        iVar11 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
    }
    pMVar13->modeBits = MVar4 | DISABLED;
    pMVar13->enabled = '\0';
    (pMVar13->rotation).y = -fVar1;
  }
  return;
}


// 0x03a063c (0x14 bytes)
void M491_003a063c(void)

{
  DAT_008432f8 = 0x10000;
  return;
}


// 0x03a0678 (0x648 bytes)
// inlined: FastAtan2 @0x3a09fc, FastAtan2 @0x3a0ba0
double M491_003a0678(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x24] = unaff_r29;
  puVar9[0x25] = unaff_r30;
  MB_getTarget(param_1,param_2,uVar13 - 0xe0);
  fVar2 = *(float *)((int)puVar9 + 0x74);
  dVar23 = 0.0;
  fVar6 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(puVar9 + 0xe);
  bVar12 = true;
  param_2[3] = 0.0;
  iVar8 = MobyUpdateChainStart;
  fVar3 = fVar3 - fVar4;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  fVar5 = *(float *)(puVar9 + 0xf);
  fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
  dVar24 = dVar23;
  dVar25 = dVar23;
  dVar26 = dVar23;
  dVar27 = dVar23;
  if (iVar8 != 0) {
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar6 = *(float *)(iVar8 + 0x14);
        fVar7 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar6 - *(float *)(param_1 + 0x14);
        fVar10 = fVar7 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          dVar27 = (double)(float)(dVar27 + 6.0);
          fVar7 = (float)((double)(*(float *)(param_1 + 0x10) - fVar7) * 6.0 + dVar24);
          dVar24 = (double)fVar7;
          fVar6 = (float)((double)(*(float *)(param_1 + 0x14) - fVar6) * 6.0 + dVar25);
          dVar25 = (double)fVar6;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) * 6.0 +
                         dVar26);
          dVar26 = (double)fVar1;
          *param_2 = fVar7;
          param_2[1] = fVar6;
          param_2[2] = fVar1;
          fVar7 = *(float *)(iVar8 + 0x10);
          fVar6 = *(float *)(iVar8 + 0x14);
        }
        if (SQRT((fVar7 - fVar4) * (fVar7 - fVar4) + (fVar6 - fVar2) * (fVar6 - fVar2)) < fVar3) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar6 = *(float *)(param_1 + 0x14) - fVar2;
      fVar7 = *(float *)(param_1 + 0x10) - fVar4;
      fVar5 = *(float *)(param_1 + 0x18) - fVar5;
      dVar22 = dVar23;
      if (10.5 - fVar3 < 0.0) {
        dVar22 = -10.0;
      }
      if (fVar3 - 9.5 < 0.0) {
        dVar22 = 10.0;
      }
      fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      param_2[3] = 0.0;
      fVar3 = 1.0 / (float)(dVar27 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar27 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      dVar22 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      dVar21 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      fVar5 = (float)(dVar26 + dVar27) * fVar3;
      fVar6 = (float)(dVar25 + dVar22) * fVar3;
      fVar3 = (float)(dVar24 + dVar21) * fVar3;
      param_2[2] = fVar5;
      param_2[1] = fVar6;
      *param_2 = fVar3;
      fVar3 = fVar3 + *(float *)(param_1 + 0x10);
      *param_2 = fVar3;
      fVar6 = fVar6 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar6;
      fVar5 = fVar5 + *(float *)(param_1 + 0x18);
      goto LAB_003a08f4;
    }
  }
  *param_2 = fVar4;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar6 = fVar2;
  fVar3 = fVar4;
LAB_003a08f4:
  param_2[2] = fVar5;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14) - fVar6;
  if (1.0 <= SQRT((fVar5 - fVar3) * (fVar5 - fVar3) + fVar7 * fVar7)) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3 - fVar5);
    fVar4 = ABS(fVar6);
    *(float *)(puVar9 + 0x18) = fVar3 - fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar6;
    *(float *)(puVar9 + 0x19) = fVar7 - fVar4;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x78;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  else {
    *param_2 = fVar5;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar4 = fVar4 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar5 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar4;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar5 - fVar3;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar19 = uVar13 - 0x48;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x58;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  return dVar23;
}


// 0x03a0ce8 (0x710 bytes)
// inlined: FastAtan2 @0x3a1030
void M491_003a0ce8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  undefined4 uVar16;
  longlong lVar13;
  longlong lVar14;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  CollDamageOut *pCVar21;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x150;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x2c] = in_LR;
  puVar9[0x29] = in_f31;
  puVar9[0x28] = unaff_r31;
  puVar9[0x24] = unaff_r27;
  puVar9[0x23] = unaff_r26;
  pMVar6 = param_1->pClass;
  puVar9[0x26] = unaff_r29;
  fVar2 = DAT_00843348;
  puVar9[0x27] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar22 = ZEXT48(pvVar7);
  iVar15 = 0;
  pCVar21 = CollDamage;
  fVar1 = pMVar6->gScale;
  dVar27 = 0.0;
  *(undefined4 *)((int)pvVar7 + 0x1c8) = 0;
  *(undefined4 *)((int)puVar9 + 0xe4) = 0;
  puVar9[0x25] = unaff_r28;
  pMVar11 = g_heroMobyPtr;
  param_1->scale = fVar2 * fVar1;
  do {
    if ((pCVar21->pVictimMoby == param_1) && ((pCVar21->damageFlags & 0xa0000) != 0)) {
      if ((pCVar21->pDamager != pMVar11) || ((pCVar21->damageFlags & 0x80000) != 0))
      goto LAB_003a0db8;
      pCVar21->pVictimMoby = (MobyInstance *)0x0;
    }
    iVar15 = iVar15 + 1;
    pCVar21 = pCVar21 + 1;
  } while (iVar15 < 0x40);
  pCVar21 = (CollDamageOut *)0x0;
LAB_003a0db8:
  iVar15 = MB_HandleDamage
                     (param_1,pCVar21,uVar22 + 0x20,0,puVar9 + 0x1c,(int)puVar9 + 0xe4,0,4);
  if (pCVar21 != (CollDamageOut *)0x0) {
    if (((*(int *)(puVar9 + 0x1c) != 1) && (param_1->state != '@' && param_1->state != '\n')) &&
       (pCVar21->pDamager->oClass != (DOOR_LEFT|TRESPASSER_0050))) {
      fVar1 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0xe4);
      *(float *)((int)pvVar7 + 0x20) = fVar1;
      iVar15 = iVar15 + ((uint)(ZERO_MASK((0x100 - (uint)pCVar21->damageIndex))) &
                        9U - iVar15);
      iVar15 = iVar15 + ((uint)(ZERO_MASK((2 - (uint)param_1->state))) & 9U - iVar15);
      if ((double)fVar1 <= dVar27) {
        iVar15 = 1;
      }
      uVar16 = FastDoubleToInt(0x40a4000000000000);
      *(undefined4 *)((int)pvVar7 + 0x98) = 0x40200000;
      fVar2 = DAT_0084331c;
      fVar1 = DAT_0071f418;
      *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
      *(undefined1 *)((int)pvVar7 + 0xad) = 0;
      *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
      *(undefined4 *)((int)pvVar7 + 0x94) = 9;
      *(float *)((int)pvVar7 + 0x80) = fVar2 * fVar1;
      fVar1 = g_FrameTime;
      if (iVar15 < 3) {
        if ((-1 < iVar15) && (0 < iVar15)) {
          MVar5 = param_1->modeBits;
          *(undefined4 *)(puVar9 + 0x18) = 0;
          *(undefined4 *)((int)puVar9 + 0xc4) = 0;
          *(undefined4 *)(puVar9 + 0x19) = 0;
          *(undefined4 *)((int)puVar9 + 0xcc) = 0;
          param_1->modeBits =
               MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          GetBonePosition(param_1,7,uVar12 - 0x80);
          puVar9[0x12] = 0xffffffffffffffff;
          puVar9[0x14] = 1;
          puVar9[0x15] = 0x10;
          puVar9[0x16] = 0xffffffffffffffff;
          puVar9[0x17] = 0;
          MB_genericExplosion
                    (dVar27,dVar27,0x4030000000000000,0x4020000000000000,0x4022000000000000,
                     0x4010000000000000,0x4040000000000000,param_1,uVar12 - 0x90,uVar12 - 0x80,1,
                     &DAT_003a0cc0,0x14,6,0x20);
          sound_MobyPlay_oClass(0,0,param_1,0x79);
          param_1->state = '\n';
          *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
          MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
        }
      }
      else if (iVar15 < 0xb) {
        if (iVar15 < 9) {
          fVar2 = DAT_00843324 * g_FrameTime;
          *(undefined4 *)((int)pvVar7 + 0x1c8) = 1;
          *(float *)((int)pvVar7 + 0x88) = fVar2;
          *(float *)((int)pvVar7 + 0x8c) = DAT_00843320 * fVar1;
          MB_SetupJumpArc
                    (0x4010000000000000,0x3ff0000000000000,1,&DAT_003a0cc0,uVar22 + 0x70);
          *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41400000;
          *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41800000;
          fVar1 = (param_1->pos).x - (pCVar21->pDamager->pos).x;
          fVar2 = (param_1->pos).y - (pCVar21->pDamager->pos).y;
          dVar24 = ABS((double)fVar1);
          dVar25 = ABS((double)fVar2);
          *(float *)((int)puVar9 + 0xec) = fVar1;
          *(float *)(puVar9 + 0x1e) = fVar2;
          *(float *)((int)puVar9 + 0xf4) = (float)(dVar24 - dVar25);
          uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
          dVar26 = ABS((double)*(float *)((int)puVar9 + 0xec));
          if ((double)*(float *)((int)puVar9 + 0xf4) - dVar27 < 0.0) {
            dVar26 = dVar25;
          }
          fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          dVar25 = ABS((double)*(float *)(puVar9 + 0x1e));
          if ((double)*(float *)((int)puVar9 + 0xf4) - dVar27 < 0.0) {
            dVar25 = dVar24;
          }
          fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (dVar27 < dVar26) {
            lVar13 = uVar12 - 0x140;
            lVar17 = uVar12 - 0x58;
            lVar20 = uVar12 - 0x48;
            lVar23 = 2;
            fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar9 + 0x104) = fVar3;
            *(float *)((int)puVar9 + 0xfc) = fVar3;
            *(float *)(puVar9 + 0x20) = fVar3;
            *(float *)(puVar9 + 0x1f) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
            *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar3;
            *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar13 + 0xf8) = *(float *)((int)lVar13 + 0xe8) * fVar3 * fVar3;
              iVar15 = (int)lVar17;
              lVar13 = lVar13 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar20 = uVar12 - 0x58;
            pfVar18 = (float *)&DAT_007358e0;
            lVar23 = 4;
            lVar13 = lVar14;
            lVar17 = lVar20;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0xf8) = *(float *)((int)lVar13 + 0xf8) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
              lVar17 = lVar17 + 8;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            lVar13 = 2;
            do {
              iVar15 = (int)lVar14;
              iVar10 = (int)lVar20;
              lVar14 = lVar14 + 0x10;
              lVar20 = lVar20 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xf8)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
          }
          *(float *)(puVar9 + 0x1d) = (float)dVar27;
          fVar1 = (pCVar21->impact).z;
          *(float *)(puVar9 + 6) = (pCVar21->impact).x;
          *(float *)(puVar9 + 7) = fVar1;
          fVar1 = (pCVar21->impact).w;
          *(float *)((int)puVar9 + 0x34) = (pCVar21->impact).y;
          *(float *)((int)puVar9 + 0x3c) = fVar1;
          MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x68,uVar22 + 0x88,uVar22 + 0x8c)
          ;
          MB_StartKick((double)*(float *)(puVar9 + 0x1d),param_1,uVar22 + 0x70);
          sound_MobyPlay_oClass(0,0,param_1,0x79);
          param_1->state = '\t';
          *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
        }
        else {
          *(undefined4 *)((int)pvVar7 + 0x1c8) = 1;
          *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
        }
      }
      MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
    }
    if (pCVar21 != (CollDamageOut *)0x0) {
      pCVar21->pVictimMoby = (MobyInstance *)0x0;
    }
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar22 + 0x60);
  fVar2 = DAT_0084334c;
  pMVar6 = param_1->pClass;
  fVar1 = pMVar6->gScale;
  *(undefined4 *)((int)pvVar7 + 0x164) = 0;
  param_1->scale = fVar1 * fVar2;
  if ((param_1->state == '\x01') || (*(int *)((int)pvVar7 + 0x1d0) == -1)) {
    if (param_1->state == '\x01') {
      uVar16 = *(undefined4 *)((int)pvVar7 + 0x174);
    }
    else {
      uVar16 = *(undefined4 *)((int)pvVar7 + 0x178);
    }
    *(undefined4 *)((int)pvVar7 + 0x1b8) = uVar16;
    MB_getTarget(param_1,pMVar6,uVar22 + 0x120);
  }
  else {
    *(undefined4 *)((int)pvVar7 + 0x1b8) = *(undefined4 *)((int)pvVar7 + 0x178);
    pSVar8 = Splines[*(int *)((int)pvVar7 + 0x1d0)];
    MB_getTargetInArea(param_1,uVar22 + 0x120,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  }
  fVar1 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124);
  fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120);
  fVar3 = (param_1->pos).z - *(float *)((int)pvVar7 + 0x128);
  if (*(float *)((int)pvVar7 + 0x1b8) < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x03a14a8 (0x2284 bytes)
// strings: 003a1b20: 'Td 6cc' (raw)

/* WARNING: Type propagation algorithm not settling */
/* Moby 491 */

void UpdateMoby_491(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  Spline *pSVar6;
  longlong lVar7;
  uint uVar9;
  int iVar10;
  u8 uVar13;
  undefined4 uVar11;
  ulonglong uVar8;
  int iVar12;
  MobyModeBit MVar14;
  Spline *pSVar16;
  longlong lVar15;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  byte in_cr6;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float fVar36;
  GPiece<16> auStack_200;
  GPiece<16> local_1f0;
  GPiece<16> local_1e0;
  GPiece<16> local_1d0;
  GPiece<16> auStack_1c0;
  GPiece<16> auStack_1b0;
  Vec4 local_1a0;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  GPiece<16> auStack_170;
  float local_160;
  float local_15c;
  undefined4 local_158;
  f32 local_150;
  f32 local_14c;
  float local_148;
  f32 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  GPiece<16> auStack_100;
  GPiece<48> auStack_f0;
  float local_c0;
  int local_bc;
  longlong local_b8;
  
  lVar7 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  M491_003a0ce8();
  iVar10 = *(int *)((int)pvVar5 + 0x160);
  if (((moby->state != '\0') && (moby->state != '@')) && (g_heroType != '\x02')) {
    iVar10 = *(int *)((int)pvVar5 + 0x1e0);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar10 != -1) && (g_SoundChannels[iVar10].pMoby == moby)) &&
       (g_SoundChannels[iVar10].state != '\0')) {
      sound_Kill(iVar10);
    }
    MVar14 = moby->modeBits;
    *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
    moby->modeBits =
         MVar14 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                   DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                   TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar5 + 0x58) = 0;
    moby->state = '\x01';
    return;
  }
  uVar32 = 0x4004000000000000;
  DoManipulator(0x4004000000000000,moby,6,(Manipulator *)((int)pvVar5 + 0x200));
  bVar2 = moby->state;
  if (5 < bVar2) {
    if (bVar2 == 0x40) {
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      *(undefined1 *)((int)pvVar5 + 0x58) = 0;
      uVar3 = moby->uid;
      (&DAT_00a53964)[(short)uVar3] = 0;
      (&DAT_00a545c4)[(short)uVar3] = 0;
      iVar18 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar4 = moby->uid;
      iVar10 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
      uVar9 = *(uint *)(&DAT_00a54dd0 + iVar10);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar18) & ~(1 << (uVar3 & 0x1f));
      bVar1 = g_heroType != '\x02';
      *(uint *)(&DAT_00a54dd0 + iVar10) = uVar9 & ~(1 << (uVar4 & 0x1f));
      if (bVar1) {
        moby->state = '\0';
      }
    }
    else {
      if (bVar2 == 10) {
        fVar36 = DAT_00843354 * DAT_0071f408;
        local_114 = (moby->transform).v0.w;
        lVar15 = lVar7 + 0x10;
        lVar17 = lVar7 + 0x40;
        local_120 = (moby->transform).v0.x * fVar36;
        local_11c = (moby->transform).v0.y * fVar36;
        local_118 = DAT_00843358 * DAT_0071f408 + (moby->transform).v0.z * fVar36;
        dVar31 = 90.5;
        local_b8 = (longlong)(int)(animationSpeed * 90.5);
        dVar21 = 12.0;
        MB_SpawnDebrisMoby
                  ((double)(DAT_0071f418 * 12.0),lVar7,0x64a,lVar15,lVar17,
                   (int)(animationSpeed * 90.5),0);
        local_b8 = (longlong)(int)((double)animationSpeed * dVar31);
        MB_SpawnDebrisMoby
                  ((double)(float)((double)DAT_0071f418 * dVar21),lVar7,0x64b,lVar15,lVar17,
                   (int)((double)animationSpeed * dVar31),0);
        MB_SpawnDebrisMoby(0,lVar7,0x64c,lVar15,lVar17,0,0);
        MB_SpawnDebris(lVar7,0x7a9,1,0x7a9,2,4,2);
        moby->state = '@';
        return;
      }
      if (bVar2 == 9) {
        uVar9 = 0;
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          uVar9 = MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
        }
        else {
          moby->unk58 = 1.0;
        }
        if (((uVar9 & 0x40) != 0) ||
           ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
          if (*(int *)((int)pvVar5 + 0x1d4) == 0) {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            uVar9 = *(int *)((int)pvVar5 + 0x1b0) + 1;
            iVar10 = *(int *)((int)pvVar5 + 0x1b4);
            iVar18 = *(int *)((int)pvVar5 + (uVar9 * 4 & 4) + 0x180);
            *(uint *)((int)pvVar5 + 0x1b0) = uVar9 & 1;
            pSVar6 = Splines[iVar18];
            local_130 = pSVar6->points[iVar10].x;
            local_12c = pSVar6->points[iVar10].y;
            local_128 = pSVar6->points[iVar10].z;
            local_124 = pSVar6->points[iVar10].w;
            dVar21 = (double)GetGroundZ(0x3fe0000000000000,&local_130,0);
            local_128 = (float)dVar21;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
            }
            lVar17 = uVar19 + 0x40;
            FUN_005e81f0(lVar17,&local_130,lVar7 + 0x10);
            FUN_005e84c0((double)(DAT_00843330 * g_FrameTime),lVar17,lVar17);
            dVar21 = (double)MB_computeLobVelocity
                                       ((double)(DAT_00843330 * g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar7 + 0x10,
                                        &local_130);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\0') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
            }
          }
        }
      }
      else if (bVar2 == 8) {
        dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
        fVar36 = OrganicDeltAng
                           ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar5 + 0x1bc));
        if ((moby->field43_0x70 & 2U) == 0) {
          dVar21 = (double)BlendAnimFrame(moby);
          GetBonePosition(lVar7,1,&local_140);
          if ((17.0 <= dVar21) && (dVar21 <= 24.0)) {
            local_150 = (moby->pos).x;
            local_14c = (moby->pos).y;
            local_144 = (moby->pos).w;
            local_148 = (moby->pos).z + 0.5;
            dVar21 = (double)cosf((moby->rotation).z);
            local_160 = (float)dVar21;
            dVar21 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_15c = (float)dVar21;
            local_158 = 0x3f800000;
            SetCollDamIn(0x4010000000000000,auStack_f0,lVar7,0x10007);
            CollMobySphere(uVar32,&local_140);
            CollLine(&local_150,&local_140,0,lVar7,auStack_f0);
            MB_CollLineMulti
                      (&local_150,&local_140,&local_150,uVar19 + 0x1a0,lVar7,auStack_f0,5);
            STUB_00065468(&local_150,&local_140);
            *(undefined4 *)((int)pvVar5 + 0x1a0) = local_140;
            *(undefined4 *)((int)pvVar5 + 0x1a4) = local_13c;
            *(undefined4 *)((int)pvVar5 + 0x1a8) = local_138;
            *(undefined4 *)((int)pvVar5 + 0x1ac) = local_134;
          }
        }
        else {
          lVar17 = lVar7 + 0x10;
          dVar21 = (double)FUN_005e8588((double)fVar36,lVar17,iVar10 + 0x10);
          if ((((double)DAT_00843344 <= dVar21) || (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
             (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1
              <= *(int *)((int)pvVar5 + 0x1b4))) {
            dVar21 = (double)FUN_005e8588(lVar17,iVar10 + 0x10);
            if (((double)DAT_00843344 < dVar21) && (moby->state = '\x04', moby->animationId != '\0')
               ) {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
            }
          }
          else {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            iVar10 = *(int *)((int)pvVar5 + 0x1b4) + 1;
            *(int *)((int)pvVar5 + 0x1b4) = iVar10;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
              iVar10 = *(int *)((int)pvVar5 + 0x1b4);
            }
            lVar15 = uVar19 + 0x40;
            FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 +
                                                *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->points
                                + iVar10,lVar17);
            FUN_005e84c0((double)(DAT_00843330 * g_FrameTime),lVar15,lVar15);
            dVar21 = (double)MB_computeLobVelocity
                                       ((double)(DAT_00843330 * g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                        Splines[*(int *)((int)pvVar5 +
                                                        *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]
                                        ->points + *(int *)((int)pvVar5 + 0x1b4),
                                        *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
        }
      }
      else if (bVar2 == 7) {
        uVar29 = FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
          moby->state = '\x04';
          if (moby->animationId != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          uVar29 = M491_003a0678
                             ((double)*(float *)((int)pvVar5 + 0x1b8),lVar7,&local_190);
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if ((dVar21 < (double)DAT_00843344) && (moby->state = '\b', moby->animationId != '\x02'))
          {
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
          }
        }
        OrganicDeltAngSpeed
                  (uVar29,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
                   (double)(g_FrameTime * 3.1415927),lVar7);
        local_1a0.x = (moby->pos).x;
        local_1a0.y = (moby->pos).y;
        local_1a0.z = (moby->pos).z;
        local_1a0.w = (moby->pos).w;
        FastVecSub(&local_180,&local_190,lVar7 + 0x10);
        local_190 = local_180;
        local_18c = local_17c;
        local_188 = local_178;
        local_184 = local_174;
        FUN_005e7f98((double)(g_FrameTime * 6.5),&local_190,&local_190);
        FastVecAddSelf(auStack_170,&local_190,lVar7 + 0x10);
        iVar10 = CollMovingSphere
                           (0x4002000000000000,0x3ffc000000000000,0x3fe0000000000000,
                            0x3fe0c15240000000,lVar7,&local_1a0,&local_190);
        if ((iVar10 == 0) ||
           (iVar10 = PointInsideComplexPoly
                               (&local_1a0,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1b0)]->points,
                                Splines[*(int *)((int)pvVar5 + 0x1b0)]->cnt), iVar10 != 0)) {
          (moby->pos).x = local_1a0.x;
          (moby->pos).y = local_1a0.y;
          (moby->pos).z = local_1a0.z;
          uVar13 = moby->animationId;
          (moby->pos).w = local_1a0.w;
          moby->state = '\x04';
          if (uVar13 != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 12.5);
            MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 12.5));
          }
        }
        else {
          (moby->pos).x = local_1a0.x;
          (moby->pos).y = local_1a0.y;
          (moby->pos).z = local_1a0.z;
          (moby->pos).w = local_1a0.w;
        }
      }
      else if (bVar2 == 6) {
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
          moby->state = '\x04';
          if (moby->animationId != '\0') {
            local_b8 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                        (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
          fVar36 = OrganicDeltAng
                             ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                              g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                              (float *)((int)pvVar5 + 0x1bc));
          if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
            lVar17 = lVar7 + 0x10;
            dVar21 = (double)FUN_005e8588((double)fVar36,lVar17,iVar10 + 0x10);
            if (((dVar21 < 8.0) && (*(int *)((int)pvVar5 + 0x1d4) == 0)) &&
               (*(int *)((int)pvVar5 + 0x1b4) <
                Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1
               )) {
              moby->state = '\x03';
              *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
              iVar10 = *(int *)((int)pvVar5 + 0x1b4) + 1;
              *(int *)((int)pvVar5 + 0x1b4) = iVar10;
              if (moby->animationId != '\x03') {
                local_b8 = (longlong)(int)(animationSpeed * 20.5);
                MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
                iVar10 = *(int *)((int)pvVar5 + 0x1b4);
              }
              lVar15 = uVar19 + 0x40;
              FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 +
                                                  *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->
                                  points + iVar10,lVar17);
              FUN_005e84c0((double)(DAT_00843330 * g_FrameTime),lVar15,lVar15);
              dVar21 = (double)MB_computeLobVelocity
                                         ((double)(DAT_00843330 * g_FrameTime),
                                          -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                          Splines[*(int *)((int)pvVar5 +
                                                          *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)
                                                 ]->points + *(int *)((int)pvVar5 + 0x1b4),
                                          *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
              *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
              goto LAB_003a340c;
            }
          }
          iVar10 = FastDecTimerS32(uVar19 + 0x1c0);
          if (iVar10 != 0) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 20.5));
            }
            *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
          }
        }
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 5) {
    uVar13 = moby->animationId;
    if ((uVar13 == '\x06') && ((moby->field43_0x70 & 2U) != 0)) {
      local_b8 = (longlong)(int)(animationSpeed * 5.5);
      MB_SetAnimation(lVar7,7,0,(int)(animationSpeed * 5.5));
      uVar13 = moby->animationId;
      moby->unk58 = DAT_00843350;
    }
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (uVar13 != '\0') {
        local_b8 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
      OrganicDeltAng
                ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x1bc));
      uVar13 = moby->animationId;
      if (uVar13 == '\a') {
        iVar18 = MB_MayaFrameTrigger(0.0,moby);
        uVar13 = moby->animationId;
        if (iVar18 != 0) {
          GetBonePosition(lVar7,0,local_1d0);
          FUN_005e81f0(auStack_1c0,iVar10 + 0x10,local_1d0);
          dVar21 = 0.5;
          FUN_005e7f98((double)(DAT_0084333c * g_FrameTime),auStack_1c0,auStack_1c0);
          iVar18 = (int)(animationSpeed * (float)((double)(longlong)DAT_00843338 + dVar21));
          local_b8 = (longlong)iVar18;
          uVar29 = 0x4008000000000000;
          FUN_00470690(0x4008000000000000,auStack_1c0,local_1d0,lVar7,iVar10,iVar18);
          FUN_005e7f98(uVar29,auStack_1c0,auStack_1c0);
          FastVecAddSelf(auStack_1b0,local_1d0,auStack_1c0);
          ____MB_SpawnRingPartFx(lVar7);
          *(int *)((int)pvVar5 + 0x1c4) = *(int *)((int)pvVar5 + 0x1c4) + 1;
          goto LAB_003a340c;
        }
      }
      auVar34 = loadVectorLeftIndexed(0x1c4,uVar19);
      auVar35 = loadVectorRightIndexed(0x1d4,uVar19);
      auVar33 = loadVectorLeftIndexed(0x50,0x3a13f8);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar34 | auVar35,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                 auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      if (((bool)(in_cr6 >> 1 & 1)) || ((moby->field43_0x70 & 2U) == 0)) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10,0x1d4,0x50);
          if (dVar21 < (double)DAT_00843340) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843344) {
            moby->state = '\b';
            if (moby->animationId != '\x02') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
        }
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          lVar17 = lVar7 + 0x10;
          dVar21 = (double)FUN_005e8588(lVar17,iVar10 + 0x10);
          if (((10.0 < dVar21) && (*(int *)((int)pvVar5 + 0x1c8) != 0)) &&
             (*(int *)((int)pvVar5 + 0x1d4) == 0)) {
            moby->state = '\x03';
            *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
            uVar8 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0) + 1 & 1;
            *(int *)((int)pvVar5 + 0x1b0) = (int)uVar8;
            if (moby->animationId != '\x03') {
              local_b8 = (longlong)(int)(animationSpeed * 20.5);
              MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 20.5));
              uVar8 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0);
            }
            lVar15 = uVar19 + 0x40;
            FUN_005e81f0(lVar15,Splines[*(int *)((int)pvVar5 + (int)(uVar8 << 2) + 0x180)]->points +
                                *(int *)((int)pvVar5 + 0x1b4),lVar17);
            FUN_005e84c0((double)(DAT_00843330 * g_FrameTime),lVar15,lVar15);
            dVar21 = (double)MB_computeLobVelocity
                                       ((double)(DAT_00843330 * g_FrameTime),
                                        -(double)(DAT_00843334 * DAT_0071f418),lVar17,
                                        Splines[*(int *)((int)pvVar5 +
                                                        *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]
                                        ->points + *(int *)((int)pvVar5 + 0x1b4),
                                        *(int *)((int)pvVar5 + 0x1b4) * 0x10,&DAT_00720000,0);
            *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
          }
        }
      }
      else {
        moby->state = '\x06';
        if (uVar13 != '\0') {
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 10.5));
        }
        uVar11 = FastDoubleToInt
                           ((double)(animationSpeed * *(float *)((int)pvVar5 + 0x188) * 60.0));
        *(undefined4 *)((int)pvVar5 + 0x1c0) = uVar11;
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 4) {
    if ((moby->animationId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
      local_b8 = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 20.5));
    }
    if (*(int *)((int)pvVar5 + 0x164) != 2) {
      dVar21 = (double)FUN_005e8338((double)(*(float *)(iVar10 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar10 + 0x14) - (moby->pos).y));
      fVar36 = OrganicDeltAng
                         ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      iVar18 = FastDecTimerS32((double)fVar36,uVar19 + 0x1c0);
      if (iVar18 != 0) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843340) {
            moby->state = '\a';
            if (moby->animationId != '\x01') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
          dVar21 = (double)FUN_005e8588(lVar7 + 0x10,iVar10 + 0x10);
          if (dVar21 < (double)DAT_00843344) {
            moby->state = '\b';
            if (moby->animationId != '\x02') {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
            }
            goto LAB_003a340c;
          }
        }
        moby->state = '\x05';
        if (moby->animationId != '\x06') {
          local_b8 = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 20.5));
        }
        *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
      }
    }
    goto LAB_003a340c;
  }
  if (bVar2 == 3) {
    if (((moby->animationId == '\x03') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x04')) {
      local_b8 = (longlong)(int)(animationSpeed * 6.5);
      MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 6.5));
    }
    FUN_005e7f54(lVar7 + 0x10,lVar7 + 0x10,uVar19 + 0x40);
    fVar36 = -(DAT_00843334 * DAT_0071f418 - *(float *)((int)pvVar5 + 0x48));
    *(float *)((int)pvVar5 + 0x48) = fVar36;
    if (fVar36 < 0.0) {
      dVar26 = 0.5;
      dVar21 = (double)GetGroundZ(0x3fe0000000000000,local_1e0,0);
      dVar31 = (double)(moby->pos).z;
      fVar36 = animationSpeed * 26.0;
      if (((float)(dVar31 - dVar21) <
           fVar36 * *(float *)((int)pvVar5 + 0x48) +
           (float)((double)(DAT_00843334 * DAT_0071f418) * dVar26) * fVar36 * fVar36) &&
         (moby->animationId != '\x05')) {
        local_b8 = (longlong)(int)(animationSpeed * 6.5);
        MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 6.5));
        dVar31 = (double)(moby->pos).z;
      }
      if (dVar31 < dVar21) {
        (moby->pos).z = (float)dVar21;
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        moby->state = '\x04';
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x20,0x3a13f8);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1c0,
                            uVar19);
        *(undefined4 *)((int)pvVar5 + 0x1c0U & 0xfffffffc) = uVar11;
      }
    }
LAB_003a33d4:
    iVar10 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1e0));
    if (iVar10 == 0) {
      iVar10 = PlayMobySound(7,4,moby);
      *(int *)((int)pvVar5 + 0x1e0) = iVar10;
    }
    iVar10 = 0;
    do {
      dVar30 = 1.0;
      iVar18 = 2;
      dVar27 = -1.0;
      dVar25 = 20.0;
      dVar24 = 0.800000011920929;
      dVar23 = 1.2000000476837158;
      dVar22 = -20.0;
      dVar28 = 1.5;
      dVar26 = 3.0;
      dVar31 = 210000.0;
      dVar21 = 0.5;
      do {
        local_110 = 0.0;
        local_10c = 0.0;
        local_108 = 0.0;
        local_104 = 0;
        dVar20 = (double)MB_randRangeFloat((float)dVar30,(float)dVar27);
        local_110 = (float)((double)(float)((double)g_FrameTime * dVar25) * dVar20);
        dVar20 = (double)MB_randRangeFloat((float)dVar30,(float)dVar27);
        local_10c = (float)((double)(float)((double)g_FrameTime * dVar25) * dVar20);
        dVar20 = (double)MB_randRangeFloat((float)dVar24,(float)dVar23);
        local_108 = (float)((double)(float)((double)g_FrameTime * dVar22) * dVar20);
        uVar9 = MB_randInt(100);
        GetBonePosition(lVar7,iVar18,auStack_100);
        FUN_005e7d64(&local_110,&local_110,lVar7 + 0xc0);
        dVar20 = (double)MB_randRangeFloat((float)dVar28,(float)dVar26);
        dVar20 = (double)(float)(dVar20 * dVar31);
        if ((uVar9 & 1) == 0) {
          iVar12 = MB_randRange(0x14,0x1e);
        }
        else {
          iVar12 = MB_randRange(10,0xf);
        }
        local_b8 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar21));
        SpawnPart_22
                  (dVar20,auStack_100,&local_110,
                   (ZERO_MASK((uVar9 & 1)) & 0x707000U) + 0x400f0f7f,0x272727);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 6);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 10);
    return;
  }
  if (bVar2 == 2) {
    lVar17 = lVar7 + 0x10;
    dVar28 = (double)(g_FrameTime * 12.0);
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
    MB_PathFollowToPos
              (0x408f380000000000,0x4014000000000000,0,pSVar6,lVar17,local_1f0,&local_bc,&local_c0);
    dVar21 = (double)FastIntToDouble(local_bc);
    dVar31 = (double)pSVar6->points[0].w;
    dVar26 = (double)((float)(dVar21 * dVar31 + (double)local_c0) + 2.0);
    local_bc = FastDoubleToInt((double)(float)(dVar26 / dVar31));
    dVar21 = (double)FastIntToDouble();
    dVar31 = (double)pSVar6->points[0].w;
    local_c0 = (float)(-(double)(float)(dVar21 * dVar31 - dVar26) / dVar31);
    if (local_bc < pSVar6->cnt + -1) {
      dVar21 = (double)FUN_005e8548(lVar17,pSVar6->points + pSVar6->cnt + -1);
      if ((dVar21 < (double)(float)(dVar28 / (double)(animationSpeed * 26.0))) &&
         (moby->animationId != '\x05')) {
        local_b8 = (longlong)(int)(animationSpeed * 6.5);
        MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 6.5));
      }
      FUN_005e81f0(local_1f0,pSVar6->points + local_bc + 1,pSVar6->points + local_bc);
      FUN_005e7f54(local_1f0,local_1f0,pSVar6->points + local_bc);
      if (local_bc + 1 < pSVar6->cnt + -8) {
        dVar21 = (double)(moby->rotation).z;
        uVar32 = FUN_005e8338((double)(pSVar6->points[local_bc + 1].x - (moby->pos).x),
                              (double)(pSVar6->points[local_bc + 1].y - (moby->pos).y));
        dVar21 = (double)MB_DeltAngSpeed
                                   (dVar21,uVar32,0x3f847ae140000000,0x3fd3333340000000,
                                    0x3fb99999a0000000);
        (moby->rotation).z = (float)dVar21;
      }
      FUN_005e81f0(auStack_200,local_1f0,lVar17);
      dVar21 = (double)FUN_005e8030(auStack_200);
      if (dVar28 - dVar21 < 0.0) {
        dVar21 = dVar28;
      }
      FUN_005e7f98(dVar21,auStack_200,auStack_200);
      FUN_005e7f54(lVar17,lVar17,auStack_200);
      goto LAB_003a33d4;
    }
    dVar21 = (double)GetGroundZ(0x3fe0000000000000,lVar17,0);
    if ((double)(moby->pos).z < dVar21) {
      (moby->pos).z = (float)dVar21;
    }
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    moby->state = '\x04';
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(0x20,0x3a13f8);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x1c0,uVar19);
    *(undefined4 *)((int)pvVar5 + 0x1c0U & 0xfffffffc) = uVar11;
    goto LAB_003a340c;
  }
  if (bVar2 != 1) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x41400000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0xc;
      *(undefined1 *)((int)pvVar5 + 0x28) = 3;
      *(undefined4 *)((int)pvVar5 + 0x30) = 0x40c00000;
      *(ushort *)((int)pvVar5 + 0x3e) = *(ushort *)((int)pvVar5 + 0x3e) | 2;
      *(undefined1 *)((int)pvVar5 + 0x29) = 0;
      moby->drawDistance = 0xff;
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
      *(undefined4 *)((int)pvVar5 + 0x174) = 0x42b40000;
      *(undefined4 *)((int)pvVar5 + 0x1bc) = 0;
      uVar9 = rand();
      MVar14 = moby->modeBits | MIRROR;
      iVar10 = *(int *)((int)pvVar5 + 0x180);
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           MVar14 + ((ushort)(ZERO_MASK((uVar9 & 1))) & moby->modeBits - MVar14) &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      if ((iVar10 == -1) || (*(int *)((int)pvVar5 + 0x184) == -1)) {
        *(undefined4 *)((int)pvVar5 + 0x1d4) = 1;
      }
      if (*(int *)((int)pvVar5 + 0x170) != -1) {
        pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
        (moby->pos).x = pSVar6->points[0].x;
        (moby->pos).y = pSVar6->points[0].y;
        (moby->pos).z = pSVar6->points[0].z;
        (moby->pos).w = pSVar6->points[0].w;
      }
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar7,0,0,5);
      }
    }
    goto LAB_003a340c;
  }
  iVar10 = *(int *)((int)pvVar5 + 0x1cc);
  if (iVar10 == -1) {
    iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1dc));
    if (iVar10 != 0) {
      iVar10 = *(int *)((int)pvVar5 + 0x1cc);
      goto LAB_003a17b8;
    }
  }
  else {
LAB_003a17b8:
    if ((iVar10 != -1) && (iVar10 = MB_CountActiveMobysByGroup(iVar10,0x40), iVar10 != 0))
    goto LAB_003a340c;
    if (g_heroType == '\x02') {
      moby->collision = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
  }
  if ((((*(int *)((int)pvVar5 + 0x164) != 2) && (*(int *)((int)pvVar5 + 0x170) != -1)) &&
      (g_heroType == '\x02')) && ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
    if ((*(int *)((int)pvVar5 + 0x1d0) == -1) ||
       (iVar10 = PointInsideComplexPoly
                           (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1d0)]->points,
                            Splines[*(int *)((int)pvVar5 + 0x1d0)]->cnt), iVar10 != 0)) {
      moby->state = '\x02';
      if (moby->animationId != '\x04') {
        local_b8 = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 20.5));
      }
      iVar18 = 0;
      pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
      iVar10 = pSVar6->cnt;
      pSVar16 = pSVar6;
      if (0 < iVar10 + -2) {
        do {
          dVar21 = (double)FUN_005e8548(pSVar16->points,pSVar16->points + 1);
          pSVar16->points[0].w = (float)dVar21;
          iVar10 = pSVar6->cnt;
          iVar18 = iVar18 + 1;
          pSVar16 = (Spline *)pSVar16->points;
        } while (iVar18 < iVar10 + -2);
      }
      lVar17 = uVar19 + 0x40;
      (moby->pos).x = pSVar6->points[0].x;
      (moby->pos).y = pSVar6->points[0].y;
      (moby->pos).z = pSVar6->points[0].z;
      (moby->pos).w = pSVar6->points[0].w;
      FUN_005e81f0(lVar17,pSVar6->points + iVar10 + -1,lVar7 + 0x10);
      FUN_005e84c0((double)(DAT_00843330 * g_FrameTime),lVar17,lVar17);
      dVar21 = (double)MB_computeLobVelocity
                                 ((double)(DAT_00843330 * g_FrameTime),
                                  -(double)(DAT_00843334 * DAT_0071f418),lVar7 + 0x10,
                                  pSVar6->points + pSVar6->cnt + -1,&DAT_00720000,pSVar6->cnt * 0x10
                                  ,0);
      *(float *)((int)pvVar5 + 0x48) = (float)dVar21;
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    }
  }
LAB_003a340c:
  iVar10 = *(int *)((int)pvVar5 + 0x1e0);
  if (((iVar10 != -1) && (g_SoundChannels[iVar10].pMoby == moby)) &&
     (g_SoundChannels[iVar10].state != '\0')) {
    sound_Kill(iVar10);
  }
  *(undefined4 *)((int)pvVar5 + 0x1e0) = 0xffffffff;
  if ((1 < moby->state) && (moby->state != 0x40)) {
    fVar36 = DAT_0071f418 * 30.0 + *(float *)((int)pvVar5 + 0xe8);
    *(float *)((int)pvVar5 + 0xe8) = fVar36;
    dVar31 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar36 - 2.0);
    dVar21 = (double)GetGroundZ(0x3fe0000000000000,lVar7 + 0x10,0);
    fVar36 = (float)((double)(moby->pos).z - dVar31);
    (moby->pos).z = fVar36;
    if ((double)fVar36 < dVar21) {
      (moby->pos).z = (float)dVar21;
      *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
    }
    DamageSphereAtPos(uVar32,0x4044000000000000,0x3ff0000000000000,lVar7,lVar7 + 0x10);
  }
  return;
}


