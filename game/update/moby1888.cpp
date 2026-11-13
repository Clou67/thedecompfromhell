// game/update/moby1888.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2d0610-0x2d0c54
#include "game/update/moby1888.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02d0610 (0x4 bytes)
/* Moby 1888 */

MobyInstance * UpdateMoby_1888(MobyInstance *moby)

{
  return moby;
}


// 0x02d0630 (0x624 bytes)
// inlined: FastAtan2 @0x2d0794, FastAtan2 @0x2d0900, FastAtan2 @0x2d0a74
MobyInstance *
M1888_002d0630
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  MobyInstance *pMVar17;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x140;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x2a] = in_LR;
  puVar10[0x21] = in_f25;
  puVar10[0x22] = in_f26;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x20] = unaff_r31;
  puVar10[0x1e] = unaff_r29;
  puVar10[0x1f] = unaff_r30;
  puVar10[0x1d] = unaff_r28;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000048 = param_4;
  pMVar17 = CreateMoby(0xbd);
  if (pMVar17 != (MobyInstance *)0x0) {
    pMVar17->updateDistance = '\x7f';
    pMVar17->drawDistance = 0x7f;
    pMVar17->enabled = '\x01';
    fStack00000044 = (float)param_3;
    pfVar8 = (float *)pMVar17->pVar;
    fStack00000040 = (float)(param_3 >> 0x20);
    fVar5 = ABS(fStack00000044);
    fVar7 = ABS(fStack00000040);
    uVar18 = (param_3 << 0x20) >> 0x3d & 4;
    pMVar17->scale = pMVar17->scale * 0.1;
    *(float *)(puVar10 + 0xf) = fVar7 - fVar5;
    fVar1 = 0.0;
    uVar21 = ((param_3 >> 0x20) << 0x20) >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 | uVar18;
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar4 = fVar7;
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar3 = fVar5;
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar11 = fVar1;
    if (0.0 < fVar4) {
      lVar15 = uVar14 - 0x130;
      lVar20 = uVar14 - 0x74;
      lVar19 = uVar14 - 0x84;
      lVar23 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar10 + 0x19) = fVar4;
      *(float *)(puVar10 + 0x18) = fVar4;
      *(float *)((int)puVar10 + 0xc4) = fVar4;
      *(float *)((int)puVar10 + 0xbc) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar3;
      *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar4;
      *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar15 + 0xbc) = *(float *)((int)lVar15 + 0xac) * fVar4 * fVar4;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0x84;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar4 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0xbc) = *(float *)((int)lVar15 + 0xbc) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      fVar4 = fVar1;
      do {
        iVar12 = (int)lVar15;
        iVar13 = (int)lVar20;
        lVar15 = lVar15 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar12 + 0xbc) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar11 = (fVar4 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar17->rotation).x = fVar11;
    *(float *)((int)puVar10 + 0x74) = fVar7 - fVar5;
    uVar18 = ((param_3 >> 0x20) << 0x20) >> 0x3c & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1e) & 2 | uVar18;
    fVar6 = fVar7;
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar10 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar7 = fVar1;
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x130;
      lVar19 = uVar14 - 0xa4;
      lVar20 = uVar14 - 0x94;
      lVar23 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x15) = fVar6;
      *(float *)(puVar10 + 0x14) = fVar6;
      *(float *)((int)puVar10 + 0xa4) = fVar6;
      *(float *)((int)puVar10 + 0x9c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar6;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar6 * fVar6;
        iVar12 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0xa4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar6 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      fVar6 = fVar1;
      do {
        iVar12 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar13 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar12 + 0x9c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar7 = (fVar6 + 0.7853982) * fVar2 + fVar4;
    }
    fVar4 = ABS(fStack00000040);
    (pMVar17->rotation).y = fVar7;
    fVar5 = ABS(fStack00000044);
    *(float *)(puVar10 + 0xe) = fVar4 - fVar5;
    uVar18 = (ulonglong)((uint)fStack00000040 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 |
             (ulonglong)((uint)fStack00000044 >> 0x1d) & 4;
    fVar6 = fVar4;
    if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x130;
      lVar20 = uVar14 - 0xb4;
      lVar19 = uVar14 - 0xc4;
      lVar23 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x11) = fVar6;
      *(float *)(puVar10 + 0x10) = fVar6;
      *(float *)((int)puVar10 + 0x84) = fVar6;
      *(float *)((int)puVar10 + 0x7c) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar5;
      *(float *)((int)puVar10 + 0x84) = *(float *)((int)puVar10 + 0x84) * fVar6;
      *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar6 * fVar6;
        iVar12 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar20 = uVar14 - 0xc4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar20;
      do {
        fVar6 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar6;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      do {
        iVar12 = (int)lVar16;
        iVar13 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar12 + 0x7c) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar4;
    }
    (pMVar17->rotation).z = fVar1;
    (pMVar17->pos).x = fStack00000030;
    (pMVar17->pos).y = fStack00000034;
    (pMVar17->pos).z = fStack00000038;
    (pMVar17->pos).w = fStack0000003c;
    *pfVar8 = fStack00000040;
    pfVar8[1] = fStack00000044;
    pfVar8[2] = fStack00000048;
    pfVar8[3] = fStack0000004c;
    dVar26 = -6.2831854820251465;
    dVar25 = 6.2831854820251465;
    dVar24 = (double)MB_randRangeFloat
                               (g_FrameTime * -6.2831855,g_FrameTime * 6.2831855
                               );
    pfVar8[4] = (float)dVar24;
    dVar24 = (double)MB_randRangeFloat
                               ((float)((double)g_FrameTime * dVar26),
                                (float)((double)g_FrameTime * dVar25));
    auVar27 = ZEXT416(0xffffffff);
    auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    pfVar8[5] = (float)dVar24;
    auVar29 = loadVectorLeftIndexed(0x14,0x2d0618);
    auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar27 = vectorMultiplyAddFloatingPoint
                        (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                         auVar28);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x1c,
                       ZEXT48(pfVar8));
    *(undefined4 *)((uint)(pfVar8 + 7) & 0xfffffffc) = uVar9;
    UpdateMobyTransform(pMVar17);
  }
  return pMVar17;
}


