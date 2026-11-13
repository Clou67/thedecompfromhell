// game/update/moby156.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x298e30-0x299fdc
#include "game/update/moby156.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1422.h"
#include "idol/fastfunc.h"

// 0x0298e30 (0x5b8 bytes)
// inlined: FastAtan2 @0x298f70, FastAtan2 @0x2990c0
void M156_00298e30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar21;
  undefined8 uVar22;
  ulonglong in_f27;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  undefined8 uVar25;
  ulonglong in_f29;
  undefined8 uVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x160;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x2e] = in_LR;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x21] = unaff_r30;
  fVar4 = GameCamera.posY - g_CollOutput.ip.y;
  fVar5 = GameCamera.posX - g_CollOutput.ip.x;
  fVar1 = GameCamera.posZ - g_CollOutput.ip.z;
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)((int)puVar7 + 0x74) = fVar4;
  *(char (*) [4])((int)puVar7 + 0x7c) = GameCamera.posW;
  *(float *)(puVar7 + 0xf) = fVar1;
  *(float *)((int)puVar7 + 0x94) = fVar1;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  fVar3 = ABS(fVar2);
  *(float *)(puVar7 + 0x12) = fVar2;
  *(float *)(puVar7 + 0x13) = fVar3 - ABS(fVar1);
  dVar27 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar2 = ABS(fVar1);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar8 = fVar3;
  }
  puVar7[0x22] = unaff_r31;
  puVar7[0x20] = unaff_r29;
  puVar7[0x1f] = unaff_r28;
  dVar28 = dVar27;
  if (0.0 < fVar2) {
    lVar10 = uVar9 - 0x150;
    lVar12 = uVar9 - 0xa4;
    lVar15 = uVar9 - 0x94;
    lVar18 = 2;
    fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x19) = fVar2;
    *(float *)(puVar7 + 0x18) = fVar2;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2;
    *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xac) * fVar2 * fVar2;
      iVar16 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
      lVar15 = lVar15 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar15 = uVar9 - 0xa4;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar2 = *pfVar13;
      fVar3 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xbc) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    do {
      iVar16 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0xbc)) + *(float *)(iVar17 + 4)
                        + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar1);
  }
  fVar5 = ABS(fVar5);
  fVar4 = ABS(fVar4);
  dVar28 = -dVar28;
  fVar1 = fVar5;
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (0.0 < fVar1) {
    lVar10 = uVar9 - 0x150;
    lVar12 = uVar9 - 0xc4;
    lVar15 = uVar9 - 0xb4;
    lVar18 = 2;
    fVar4 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar10 + 0x9c) = *(float *)((int)lVar10 + 0x8c) * fVar4 * fVar4;
      iVar16 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
      lVar15 = lVar15 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = uVar9 - 0xc4;
    lVar12 = 4;
    do {
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar5;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar16 = 0;
  iVar17 = 0;
  uVar26 = 0x400921fb60000000;
  dVar24 = 0.20000000298023224;
  dVar23 = 1.0;
  dVar21 = 3.0;
  do {
    dVar19 = (double)MB_randRangeSigned(dVar27,uVar26);
    dVar19 = (double)FastWrapRot((float)dVar19,(float)dVar28);
    dVar20 = (double)MB_randRangeSigned(dVar27,uVar26);
    dVar20 = (double)FastWrapRot((float)dVar20,(float)dVar28);
    MB_SphericalToVector
              ((float)dVar24,(float)dVar20,(float)dVar19,(float *)(uVar9 - 0xf0));
    dVar19 = (double)MB_randRangeFloat((float)dVar23,(float)dVar21);
    fVar2 = g_CollOutput.ip.z;
    fVar1 = g_CollOutput.ip.y;
    fVar5 = g_CollOutput.ip.x;
    fVar4 = (float)((double)*(float *)((int)puVar7 + 0x74) * dVar19);
    *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)((int)puVar7 + 0x7c);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar19);
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar19);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar19) + fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar4 + fVar1;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar19) + fVar2;
    SpawnPart_19(uVar9 - 0xe0,uVar9 - 0xf0);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x14);
  uVar25 = 0x3fb99999a0000000;
  dVar24 = 0.05000000074505806;
  uVar22 = 0x40d3880000000000;
  dVar23 = 10.5;
  dVar21 = 20.5;
  do {
    dVar19 = (double)MB_randRangeSigned(dVar27,uVar25);
    *(float *)(puVar7 + 0x10) = (float)((double)g_CollOutput.ip.x + dVar19);
    dVar19 = (double)MB_randRangeSigned(dVar27,uVar25);
    *(float *)((int)puVar7 + 0x84) = (float)((double)g_CollOutput.ip.y + dVar19);
    dVar19 = (double)MB_randRangeSigned(dVar27,uVar25);
    *(float *)(puVar7 + 0x11) = (float)((double)g_CollOutput.ip.z + dVar19);
    dVar19 = (double)MB_randRangeSigned(dVar27,uVar26);
    dVar19 = (double)FastWrapRot((float)dVar19,(float)dVar28);
    dVar20 = (double)MB_randRangeSigned(dVar27,uVar26);
    dVar20 = (double)FastWrapRot((float)dVar20,(float)dVar28);
    MB_SphericalToVector
              ((float)dVar24,(float)dVar20,(float)dVar19,(float *)(uVar9 - 0xf0));
    dVar19 = (double)animationSpeed;
    puVar7[0x1c] = (longlong)(int)(dVar19 * dVar23);
    puVar7[0x1c] = (longlong)(int)(dVar19 * dVar21);
    MB_randRange(*(undefined4 *)((int)puVar7 + 0xe4),*(undefined4 *)((int)puVar7 + 0xe4));
    SpawnPart_21(uVar22,uVar9 - 0xe0,uVar9 - 0xf0,0x4f007fff,0x1fffffff);
    iVar17 = iVar17 + 1;
  } while (iVar17 < 10);
  return;
}


// 0x0299400 (0x540 bytes)
// inlined: FastAtan2 @0x299648, FastAtan2 @0x2997e0
MobyInstance *
FUN_00299400(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  MobyInstance *pMVar16;
  undefined4 uVar17;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x100;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar13;
  puVar8[0x22] = in_LR;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x1d] = unaff_r29;
  puVar8[0x1c] = unaff_r28;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1b] = unaff_r27;
  puVar8[0x1a] = unaff_r26;
  pMVar16 = CreateMoby(0x9c);
  if (pMVar16 != (MobyInstance *)0x0) {
    pvVar7 = pMVar16->pVar;
    pMVar16->updateDistance = -1;
    pMVar16->drawDistance = 0x7e;
    pMVar16->enabled = '\x01';
    SetColorOfMoby
              (pMVar16,(ulonglong)param_5 & 0xff,(ulonglong)(uint)((int)param_5 >> 8) & 0xff,
               (ulonglong)(uint)((int)param_5 >> 0x10) & 0xff);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    pMVar16->alpha = '@';
    pMVar16->state = '\0';
    auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    pMVar16->modeBits = pMVar16->modeBits | DRAW_TRANSPARENT_WEIRD;
    (pMVar16->pos).x = *param_2;
    (pMVar16->pos).y = param_2[1];
    (pMVar16->pos).z = param_2[2];
    (pMVar16->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar7 + 0x20) = *param_1;
    *(undefined4 *)((int)pvVar7 + 0x24) = param_1[1];
    *(undefined4 *)((int)pvVar7 + 0x28) = param_1[2];
    *(undefined4 *)((int)pvVar7 + 0x2c) = param_1[3];
    auVar24 = loadVectorLeftIndexed(in_LR,0x2993e8);
    auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorMultiplyAddFloatingPoint
                        (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                         auVar25);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar17 = storeVectorElementWordIndexed
                       (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0,
                        ZEXT48(pvVar7));
    *(undefined4 *)((uint)pvVar7 & 0xfffffffc) = uVar17;
    dVar23 = (double)MB_randRangeFloat(DAT_007ab81c,DAT_007ab820);
    pMVar16->scale = (float)((double)pMVar16->scale * dVar23);
    uVar17 = FastDoubleToInt((double)((float)(dVar23 * 0.4000000059604645) * 1024.0));
    *(undefined4 *)((int)pvVar7 + 4) = uVar17;
    *(undefined4 *)((int)pvVar7 + 8) = 3;
    fVar3 = GameCamera.posY - (pMVar16->pos).y;
    fVar4 = GameCamera.posX - (pMVar16->pos).x;
    fVar9 = GameCamera.posZ - (pMVar16->pos).z;
    fVar6 = ABS(fVar9);
    *(float *)(puVar8 + 0x10) = fVar9;
    fVar9 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar1 = ABS(fVar9);
    *(float *)((int)puVar8 + 0x7c) = fVar9;
    *(float *)((int)puVar8 + 0x84) = fVar1 - fVar6;
    fVar9 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)((int)puVar8 + 0x7c));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0x10));
    if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar12 = fVar9;
    if (0.0 < fVar5) {
      lVar14 = uVar13 - 0xf0;
      lVar20 = uVar13 - 0x48;
      lVar19 = uVar13 - 0x58;
      lVar22 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0xb4) = fVar5;
      *(float *)((int)puVar8 + 0xac) = fVar5;
      *(float *)(puVar8 + 0x16) = fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar2;
      *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar5;
      *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar5 * fVar5;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar13 - 0x58;
      pfVar21 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar20;
      do {
        fVar5 = *pfVar21;
        fVar2 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      lVar14 = lVar15;
      fVar5 = fVar9;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar20;
        lVar14 = lVar14 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar12 = (fVar5 + 0.7853982) * fVar6 + fVar1;
    }
    (pMVar16->rotation).y = -fVar12;
    *(float *)(puVar8 + 0xe) = fVar4;
    *(float *)((int)puVar8 + 0x74) = fVar3;
    *(float *)(puVar8 + 0xf) = ABS(fVar4) - ABS(fVar3);
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = ABS(fVar3);
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar8 + 0x74));
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = ABS(fVar4);
    }
    if (0.0 < fVar5) {
      lVar14 = uVar13 - 0xf0;
      lVar20 = uVar13 - 0x68;
      lVar19 = uVar13 - 0x78;
      lVar22 = 2;
      fVar4 = (fVar6 - fVar5) / (fVar6 + fVar5);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar8 + 0x94) = fVar4;
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      *(float *)(puVar8 + 0x12) = fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar20 = uVar13 - 0x78;
      pfVar21 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar20;
      do {
        fVar4 = *pfVar21;
        fVar5 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        iVar11 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar1 + fVar3;
    }
    uVar17 = DAT_007ab824;
    (pMVar16->rotation).z = fVar9;
    uVar17 = SpawnPart_14(uVar17,pMVar16);
    *(undefined4 *)((int)pvVar7 + 0x10) = uVar17;
    uVar17 = DAT_007ab828;
    *(undefined4 *)((int)pvVar7 + 0x18) = param_4;
    *(undefined4 *)((int)pvVar7 + 0xc) = uVar17;
    UpdateMobyTransform(pMVar16);
  }
  return pMVar16;
}


// 0x0299958 (0x684 bytes)
// inlined: FastAtan2 @0x299a68, FastAtan2 @0x299c04, FastRSqrt @0x299dd0
/* Moby 156 */

void UpdateMoby_156(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  s8 sVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x140;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x2a] = in_LR;
  puVar12[0x27] = in_f31;
  puVar12[0x26] = unaff_r31;
  fVar8 = GameCamera.posY - (moby->pos).y;
  fVar6 = GameCamera.posX - (moby->pos).x;
  fVar2 = (moby->rotation).x;
  fVar5 = GameCamera.posZ - (moby->pos).z;
  fVar7 = ABS(fVar5);
  *(float *)(puVar12 + 0x18) = fVar5;
  puVar12[0x25] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  uVar24 = ZEXT48(piVar9);
  fVar5 = SQRT(fVar6 * fVar6 + fVar8 * fVar8);
  fVar3 = ABS(fVar5);
  *(float *)((int)puVar12 + 0xbc) = fVar5;
  *(float *)((int)puVar12 + 0xc4) = fVar3 - fVar7;
  dVar27 = 0.0;
  uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)((int)puVar12 + 0xbc));
  if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
    fVar5 = fVar7;
  }
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar4 = ABS(*(float *)(puVar12 + 0x18));
  if (*(float *)((int)puVar12 + 0xc4) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  puVar12[0x24] = unaff_r29;
  dVar26 = dVar27;
  if (0.0 < fVar5) {
    lVar16 = uVar14 - 0x130;
    lVar22 = uVar14 - 0x48;
    lVar20 = uVar14 - 0x58;
    lVar25 = 2;
    fVar5 = (fVar4 - fVar5) / (fVar4 + fVar5);
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0xf4) = fVar5;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1e) = fVar5;
    *(float *)(puVar12 + 0x1d) = fVar5;
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4;
    *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar5;
    *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar5 * fVar4;
    do {
      *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar14 - 0x58;
    pfVar23 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar22;
    do {
      fVar5 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar20 = 2;
    lVar16 = lVar17;
    do {
      iVar18 = (int)lVar16;
      iVar13 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0xe8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar3);
  }
  *(float *)(puVar12 + 0x16) = fVar6;
  *(float *)((int)puVar12 + 0xb4) = fVar8;
  *(float *)(puVar12 + 0x17) = ABS(fVar6) - ABS(fVar8);
  uVar10 = *(uint *)(puVar12 + 0x16);
  fVar5 = *(float *)(puVar12 + 0x16);
  (moby->rotation).y = (float)-dVar26;
  uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1d) & 4;
  fVar5 = ABS(fVar5);
  if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
    fVar5 = ABS(fVar8);
  }
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar7 = ABS(*(float *)((int)puVar12 + 0xb4));
  if (*(float *)(puVar12 + 0x17) - 0.0 < 0.0) {
    fVar7 = ABS(fVar6);
  }
  fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  dVar26 = dVar27;
  if (0.0 < fVar5) {
    lVar16 = uVar14 - 0x130;
    lVar20 = uVar14 - 0x78;
    lVar22 = uVar14 - 0x68;
    lVar25 = 2;
    fVar5 = (fVar7 - fVar5) / (fVar7 + fVar5);
    fVar7 = fVar5 * fVar5;
    *(float *)((int)puVar12 + 0xd4) = fVar5;
    *(float *)((int)puVar12 + 0xcc) = fVar5;
    *(float *)(puVar12 + 0x1a) = fVar5;
    *(float *)(puVar12 + 0x19) = fVar5;
    fVar5 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar7;
    *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar5;
    *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar5 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar14 - 0x78;
    pfVar23 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar22;
    do {
      fVar5 = *pfVar23;
      fVar7 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
      lVar20 = lVar20 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar13 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 200)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar6);
  }
  (moby->rotation).z = (float)dVar26;
  dVar26 = (double)FastWrapRot(fVar2,(float)piVar9[3]);
  (moby->rotation).x = (float)dVar26;
  bVar1 = moby->state;
  (moby->pos).x = (moby->pos).x + (float)piVar9[8];
  (moby->pos).y = (moby->pos).y + (float)piVar9[9];
  (moby->pos).z = (moby->pos).z + (float)piVar9[10];
  if (bVar1 != 0) {
    if (bVar1 < 2) {
      SpawnPart_14(DAT_007ab824,lVar15);
      fVar2 = (float)piVar9[8];
      fVar8 = (float)piVar9[10] * (float)piVar9[10] +
              fVar2 * fVar2 + (float)piVar9[9] * (float)piVar9[9];
      if ((double)SQRT(fVar8) == dVar27) {
        *(float *)(puVar12 + 0xe) = fVar2;
        *(int *)((int)puVar12 + 0x74) = piVar9[9];
        *(int *)(puVar12 + 0xf) = piVar9[10];
        iVar18 = piVar9[0xb];
        *(undefined4 *)(puVar12 + 0xf) = 0;
        *(undefined4 *)((int)puVar12 + 0x74) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0;
      }
      else {
        fVar6 = 1.0 / SQRT(fVar8);
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar8 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        *(float *)(puVar12 + 0xe) = fVar2 * fVar6;
        *(float *)((int)puVar12 + 0x74) = (float)piVar9[9] * fVar6;
        *(float *)(puVar12 + 0xf) = (float)piVar9[10] * fVar6;
        iVar18 = piVar9[0xb];
      }
      *(int *)((int)puVar12 + 0x7c) = iVar18;
      SetCollDamIn(dVar27,uVar14 - 0xc0,lVar15,0);
      iVar18 = CollMobySphere
                         ((double)DAT_007ab82c,lVar15 + 0x10,&DAT_007b0000,0x10,piVar9[6],
                          uVar14 - 0xc0);
      if (iVar18 == 0) {
        iVar18 = FastDecTimerS32(uVar24);
        if (iVar18 != 0) {
          auVar28 = ZEXT416(0xffffffff);
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar28 = loadVectorLeftIndexed(0x10,0x299940);
          auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar28 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60
                               ,auVar29);
          auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
          auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,uVar24
                             );
          *(undefined4 *)((uint)piVar9 & 0xfffffffc) = uVar11;
          moby->state = '\x02';
          if (piVar9[4] != 0) {
            piVar9[4] = 0;
          }
        }
      }
      else {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          CollDamageMobyDirect
                    (1.0,g_CollOutput.pMoby,moby,0x10001,0x10000,&g_CollOutput.ip.x,
                     (float *)(puVar12 + 0xe));
        }
        M156_00298e30(lVar15);
        DeleteMoby(moby);
      }
    }
    else if (bVar1 < 3) {
      iVar18 = FastDecTimerS32(uVar24);
      if (iVar18 == 0) {
        puVar12[0x21] = (longlong)*piVar9;
        sVar19 = FastDoubleToInt
                           ((double)((float)(longlong)puVar12[0x21] *
                                    (127.0 / (float)(longlong)(animationSpeed * 30.5))));
        moby->alpha = sVar19;
      }
      else {
        DeleteMoby(moby);
      }
    }
  }
  return;
}


