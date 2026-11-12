// game/update/moby819.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x470690-0x471b54
#include "game/update/moby819.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0470690 (0x4e4 bytes)
// inlined: FastAtan2 @0x470894, FastAtan2 @0x470a34
MobyInstance *
FUN_00470690(double param_1,float *param_2,f32 *param_3,float param_4,float param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  MobyInstance *pMVar17;
  longlong lVar15;
  longlong lVar16;
  longlong lVar18;
  float *pfVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f31;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar8 = (ulonglong *)lVar16;
  *puVar8 = uVar14;
  puVar8[0x24] = in_LR;
  puVar8[0x21] = in_f31;
  puVar8[0x20] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x18) = param_6;
  uVar13 = 0xc0;
  *(undefined4 *)((int)puVar8 + 0xc4) = param_6;
  puVar8[0x1d] = unaff_r28;
  *(undefined4 *)(puVar8 + 0x19) = param_6;
  puVar8[0x1e] = unaff_r29;
  *(undefined4 *)((int)puVar8 + 0xcc) = param_6;
  puVar8[0x1f] = unaff_r30;
  puVar8[0x1c] = unaff_r27;
  auVar26 = *(undefined1 (*) [16])(puVar8 + 0x18);
  pMVar17 = CreateMoby(ROCKET_0333);
  if (pMVar17 != (MobyInstance *)0x0) {
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar26,0);
    pMVar17->updateDistance = -1;
    pMVar17->drawDistance = 0x7e;
    pMVar17->enabled = '\x01';
    pMVar17->state = '\x01';
    pfVar19 = (float *)pMVar17->pVar;
    auVar26 = ZEXT416(0xffffffff);
    auVar25 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
    pMVar17->scale = (float)((double)pMVar17->scale * param_1);
    (pMVar17->pos).x = *param_3;
    (pMVar17->pos).y = param_3[1];
    (pMVar17->pos).z = param_3[2];
    (pMVar17->pos).w = param_3[3];
    fVar5 = *param_2;
    fVar1 = *param_2;
    *pfVar19 = fVar1;
    fVar6 = param_2[1];
    fVar2 = param_2[1];
    pfVar19[1] = fVar2;
    pfVar19[2] = param_2[2];
    pfVar19[3] = param_2[3];
    auVar26 = loadVectorLeftIndexed(uVar13,0x470680);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = vectorAddFloatingPoint
                        (auVar24,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
    auVar24 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    fVar1 = ABS(fVar1);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x18,
                       ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 6) & 0xfffffffc) = uVar7;
    pfVar19[4] = param_4;
    pfVar19[5] = param_5;
    fVar3 = 0.0;
    pfVar19[10] = 0.0;
    fVar4 = (pMVar17->pos).y - g_heroPosition.y;
    fVar9 = (pMVar17->pos).x - g_heroPosition.x;
    fVar10 = (pMVar17->pos).z - g_heroPosition.z;
    pfVar19[0xc] = 0.0;
    pfVar19[0xd] = 0.0;
    fVar2 = ABS(fVar2);
    pfVar19[0xe] = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar4 * fVar4);
    *(float *)(puVar8 + 0xf) = fVar1 - fVar2;
    uVar22 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = fVar1;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = fVar3;
    if (0.0 < fVar6) {
      lVar15 = uVar14 - 0x100;
      lVar18 = uVar14 - 0x74;
      lVar20 = uVar14 - 100;
      lVar23 = 2;
      fVar2 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x8c) * fVar2 * fVar2;
        iVar11 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x74;
      pfVar21 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar15 + 0x9c) = *(float *)((int)lVar15 + 0x9c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      lVar15 = lVar16;
      fVar2 = fVar3;
      do {
        iVar11 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar11 + 0x9c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar4 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar17->rotation).z = fVar4;
    fVar1 = pfVar19[2];
    fVar5 = ABS(pfVar19[2]);
    fVar2 = SQRT(*pfVar19 * *pfVar19 + pfVar19[1] * pfVar19[1]);
    fVar6 = ABS(fVar2);
    *(float *)(puVar8 + 0xe) = fVar2;
    *(float *)((int)puVar8 + 0x74) = fVar6 - fVar5;
    uVar22 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    if (0.0 < fVar2) {
      lVar15 = uVar14 - 0x100;
      lVar18 = uVar14 - 0x94;
      lVar20 = uVar14 - 0x84;
      lVar23 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = fVar2;
      *(float *)((int)puVar8 + 0x7c) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x6c) * fVar2 * fVar2;
        iVar11 = (int)lVar18;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = uVar14 - 0x94;
      pfVar19 = (float *)&DAT_007358e0;
      lVar23 = 4;
      lVar15 = lVar16;
      lVar18 = lVar20;
      do {
        fVar2 = *pfVar19;
        fVar5 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar2;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar15 = 2;
      do {
        iVar11 = (int)lVar16;
        iVar12 = (int)lVar20;
        lVar16 = lVar16 + 0x10;
        lVar20 = lVar20 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar1 + fVar4;
    }
    (pMVar17->rotation).y = -fVar3;
    UpdateMobyTransform(pMVar17);
  }
  return pMVar17;
}


// 0x0470bb0 (0xd60 bytes)
// inlined: FastAtan2 @0x470e9c, FastAtan2 @0x471038, FastAtan2 @0x4711d4, FastAtan2 @0x471368, FastRSqrt @0x471790
/* Moby 819 */

void UpdateMoby_819(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *out;
  float fVar13;
  MobyInstance *pMVar14;
  undefined4 uVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar22;
  undefined8 uVar21;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar38;
  
  lVar28 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0x1d0;
  puVar16 = (ulonglong *)lVar20;
  *puVar16 = uVar18;
  puVar16[0x3c] = in_LR;
  puVar16[0x36] = in_f28;
  puVar16[0x37] = in_f29;
  puVar16[0x38] = in_f30;
  puVar16[0x39] = in_f31;
  puVar16[0x35] = unaff_r31;
  bVar3 = moby->state;
  puVar16[0x34] = unaff_r30;
  out = (float *)moby->pVar;
  puVar16[0x33] = unaff_r29;
  puVar16[0x32] = unaff_r28;
  puVar16[0x31] = unaff_r27;
  puVar16[0x30] = unaff_r26;
  puVar16[0x2f] = unaff_r25;
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      fVar5 = (moby->pos).y;
      *(f32 *)(puVar16 + 0xe) = (moby->pos).x;
      fVar6 = (moby->pos).z;
      *(f32 *)((int)puVar16 + 0x74) = fVar5;
      fVar5 = (moby->pos).w;
      fVar13 = out[5];
      *(f32 *)(puVar16 + 0xf) = fVar6;
      *(f32 *)((int)puVar16 + 0x7c) = fVar5;
      if (((fVar13 == 0.0) || (cVar4 = *(char *)((int)fVar13 + 0x20), cVar4 == -2)) || (cVar4 == -3)
         ) {
        moby->state = '\x02';
      }
      if (((g_heroType == '\x01') || (g_heroType == '\x02')) &&
         (pMVar14 = (MobyInstance *)out[5], pMVar14 == g_heroMobyPtr)) {
        fVar13 = out[1];
        fVar7 = *out;
        fVar8 = out[2];
        *(f32 *)(puVar16 + 0x12) = (pMVar14->pos).x;
        *(f32 *)((int)puVar16 + 0x94) = (pMVar14->pos).y;
        *(f32 *)(puVar16 + 0x13) = (pMVar14->pos).z;
        *(f32 *)((int)puVar16 + 0x9c) = (pMVar14->pos).w;
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar13 * fVar13);
        dVar30 = (double)GetGroundZ(0x3fe0000000000000,uVar18 - 0x140,0);
        fVar13 = (float)(dVar30 + 0.20000000298023224);
        dVar31 = (double)DAT_00969de4;
        bVar1 = g_heroType == '\x02';
        fVar7 = (moby->pos).x;
        fVar8 = (moby->pos).y;
        fVar9 = (moby->pos).z;
        fVar10 = (moby->rotation).z;
        *(float *)(puVar16 + 0x13) = fVar13;
        dVar30 = (double)DAT_00969de0;
        if (bVar1) {
          fVar13 = fVar13 + 2.0;
          *(float *)(puVar16 + 0x13) = fVar13;
        }
        fVar7 = *(float *)(puVar16 + 0x12) - fVar7;
        dVar32 = (double)fVar7;
        fVar8 = *(float *)((int)puVar16 + 0x94) - fVar8;
        dVar33 = (double)fVar8;
        fVar13 = fVar13 - fVar9;
        fVar9 = (float)(dVar32 * dVar32 + (double)(float)(dVar33 * dVar33));
        fVar2 = (float)(dVar38 * dVar38 -
                       (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
        fVar11 = (float)(dVar32 * dVar30 + (double)(float)(dVar33 * dVar31)) * -2.0;
        fVar12 = fVar2 * 2.0;
        dVar37 = 0.0;
        fVar2 = SQRT(fVar11 * fVar11 - -((fVar13 * fVar13 + fVar9) * fVar2 * 4.0));
        dVar34 = (double)((fVar2 - fVar11) / fVar12);
        dVar36 = (double)((-fVar11 - fVar2) / fVar12);
        if ((dVar34 <= 0.0) || (dVar36 <= 0.0)) {
          dVar35 = -1.0;
          if (0.0 - dVar36 < 0.0) {
            dVar35 = dVar36;
          }
          if (0.0 - dVar34 < 0.0) {
            dVar35 = dVar34;
          }
        }
        else {
          dVar35 = dVar36;
          if (dVar36 - dVar34 < 0.0) {
            dVar35 = dVar34;
          }
        }
        dVar34 = dVar37;
        if (dVar35 <= 0.0) {
          *(float *)((int)puVar16 + 0xbc) = fVar7;
          *(float *)(puVar16 + 0x18) = fVar8;
          *(float *)((int)puVar16 + 0xc4) = (float)(ABS(dVar32) - ABS(dVar33));
          uVar26 = (ulonglong)(*(uint *)((int)puVar16 + 0xbc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xc4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x18) >> 0x1d) & 4;
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar16 + 0xbc));
          if (*(float *)((int)puVar16 + 0xc4) - 0.0 < 0.0) {
            dVar30 = ABS(dVar33);
          }
          fVar8 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          dVar31 = ABS((double)*(float *)(puVar16 + 0x18));
          if (*(float *)((int)puVar16 + 0xc4) - 0.0 < 0.0) {
            dVar31 = ABS(dVar32);
          }
          if (0.0 < dVar30) {
            lVar19 = uVar18 - 0x1c0;
            lVar27 = uVar18 - 0xc0;
            lVar24 = uVar18 - 0xd0;
            lVar29 = 2;
            fVar2 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
            fVar12 = fVar2 * fVar2;
            *(float *)((int)puVar16 + 0x10c) = fVar2;
            *(float *)((int)puVar16 + 0x104) = fVar2;
            *(float *)(puVar16 + 0x21) = fVar2;
            *(float *)(puVar16 + 0x20) = fVar2;
            fVar2 = fVar12 * fVar12;
            *(float *)((int)puVar16 + 0x104) = *(float *)((int)puVar16 + 0x104) * fVar12;
            *(float *)(puVar16 + 0x21) = *(float *)(puVar16 + 0x21) * fVar2;
            *(float *)((int)puVar16 + 0x10c) = *(float *)((int)puVar16 + 0x10c) * fVar2 * fVar12;
            do {
              *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0xf0) * fVar2 * fVar2;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xd0;
            pfVar25 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              fVar2 = *pfVar25;
              fVar12 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0x100) * fVar2;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar12;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar20;
            dVar30 = dVar37;
            do {
              iVar22 = (int)lVar19;
              iVar17 = (int)lVar27;
              lVar19 = lVar19 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x100)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar34 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar8);
          }
          fVar9 = SQRT(fVar9);
          *(float *)((int)puVar16 + 0xb4) = fVar13;
          fVar8 = ABS(fVar9);
          *(float *)(puVar16 + 0x16) = fVar9;
          *(float *)(puVar16 + 0x17) = fVar8 - ABS(fVar13);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x16) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x17) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xb4) >> 0x1d) & 4;
          uVar26 = uVar23 << 2;
          fVar7 = ABS(*(float *)(puVar16 + 0x16));
          if (*(float *)(puVar16 + 0x17) - 0.0 < 0.0) {
            fVar7 = ABS(fVar13);
          }
          fVar13 = *(float *)(&g_atanQuadrantTable + (int)uVar26);
          fVar9 = ABS(*(float *)((int)puVar16 + 0xb4));
          if (*(float *)(puVar16 + 0x17) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar19 = uVar18 - 0x1c0;
            lVar24 = uVar18 - 0xf0;
            lVar27 = uVar18 - 0xe0;
            lVar29 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar16 + 0xec) = fVar7;
            *(float *)((int)puVar16 + 0xe4) = fVar7;
            *(float *)(puVar16 + 0x1d) = fVar7;
            *(float *)(puVar16 + 0x1c) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0xe4) = *(float *)((int)puVar16 + 0xe4) * fVar9;
            *(float *)(puVar16 + 0x1d) = *(float *)(puVar16 + 0x1d) * fVar7;
            *(float *)((int)puVar16 + 0xec) = *(float *)((int)puVar16 + 0xec) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xd0) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xf0;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              pfVar25 = (float *)uVar26;
              fVar7 = pfVar25[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xe0) * *pfVar25;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar19 = 2;
            do {
              iVar22 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar22 + 0xe0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar8);
          }
        }
        else {
          fVar7 = (float)(dVar35 * dVar30 + dVar32);
          fVar8 = (float)(dVar35 * dVar31 + dVar33);
          *(float *)((int)puVar16 + 0xd4) = fVar7;
          *(float *)(puVar16 + 0x1b) = fVar8;
          *(float *)((int)puVar16 + 0xdc) = ABS(fVar7) - ABS(fVar8);
          uVar26 = (ulonglong)(*(uint *)((int)puVar16 + 0xd4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xdc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar16 + 0x1b) >> 0x1d) & 4;
          fVar9 = ABS(*(float *)((int)puVar16 + 0xd4));
          if (*(float *)((int)puVar16 + 0xdc) - 0.0 < 0.0) {
            fVar9 = ABS(fVar8);
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar12 = ABS(*(float *)(puVar16 + 0x1b));
          if (*(float *)((int)puVar16 + 0xdc) - 0.0 < 0.0) {
            fVar12 = ABS(fVar7);
          }
          fVar11 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          if (0.0 < fVar9) {
            lVar19 = uVar18 - 0x1c0;
            lVar27 = uVar18 - 0x80;
            lVar24 = uVar18 - 0x90;
            lVar29 = 2;
            fVar9 = (fVar12 - fVar9) / (fVar12 + fVar9);
            fVar12 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0x14c) = fVar9;
            *(float *)((int)puVar16 + 0x144) = fVar9;
            *(float *)(puVar16 + 0x29) = fVar9;
            *(float *)(puVar16 + 0x28) = fVar9;
            fVar9 = fVar12 * fVar12;
            *(float *)((int)puVar16 + 0x144) = *(float *)((int)puVar16 + 0x144) * fVar12;
            *(float *)(puVar16 + 0x29) = *(float *)(puVar16 + 0x29) * fVar9;
            *(float *)((int)puVar16 + 0x14c) = *(float *)((int)puVar16 + 0x14c) * fVar9 * fVar12;
            do {
              *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x130) * fVar9 * fVar9;
              iVar22 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0x90;
            pfVar25 = (float *)&DAT_007358e0;
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              fVar9 = *pfVar25;
              fVar12 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar19 + 0x140) = *(float *)((int)lVar19 + 0x140) * fVar9;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar12;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar24 = 2;
            lVar19 = lVar20;
            dVar30 = dVar37;
            do {
              iVar22 = (int)lVar19;
              iVar17 = (int)lVar27;
              lVar19 = lVar19 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar22 + 0x140)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            dVar34 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar11);
          }
          *(float *)((int)puVar16 + 0xcc) = fVar13;
          fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
          fVar8 = ABS(fVar7);
          *(float *)(puVar16 + 0x19) = fVar7;
          *(float *)(puVar16 + 0x1a) = fVar8 - ABS(fVar13);
          uVar23 = (ulonglong)(*(uint *)(puVar16 + 0x19) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar16 + 0x1a) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar16 + 0xcc) >> 0x1d) & 4;
          uVar26 = uVar23 << 2;
          fVar7 = ABS(*(float *)(puVar16 + 0x19));
          if (*(float *)(puVar16 + 0x1a) - 0.0 < 0.0) {
            fVar7 = ABS(fVar13);
          }
          fVar13 = *(float *)(&g_atanQuadrantTable + (int)uVar26);
          fVar9 = ABS(*(float *)((int)puVar16 + 0xcc));
          if (*(float *)(puVar16 + 0x1a) - 0.0 < 0.0) {
            fVar9 = fVar8;
          }
          fVar8 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (0.0 < fVar7) {
            lVar19 = uVar18 - 0x1c0;
            lVar24 = uVar18 - 0xb0;
            lVar27 = uVar18 - 0xa0;
            lVar29 = 2;
            fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
            fVar9 = fVar7 * fVar7;
            *(float *)((int)puVar16 + 300) = fVar7;
            *(float *)((int)puVar16 + 0x124) = fVar7;
            *(float *)(puVar16 + 0x25) = fVar7;
            *(float *)(puVar16 + 0x24) = fVar7;
            fVar7 = fVar9 * fVar9;
            *(float *)((int)puVar16 + 0x124) = *(float *)((int)puVar16 + 0x124) * fVar9;
            *(float *)(puVar16 + 0x25) = *(float *)(puVar16 + 0x25) * fVar7;
            *(float *)((int)puVar16 + 300) = *(float *)((int)puVar16 + 300) * fVar7 * fVar9;
            do {
              *(float *)((int)lVar19 + 0x120) = *(float *)((int)lVar19 + 0x110) * fVar7 * fVar7;
              iVar22 = (int)lVar24;
              lVar19 = lVar19 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
              lVar27 = lVar27 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar27 = uVar18 - 0xb0;
            uVar26 = ZEXT48(&DAT_007358e0);
            lVar19 = lVar20;
            lVar24 = lVar27;
            do {
              pfVar25 = (float *)uVar26;
              fVar7 = pfVar25[1];
              uVar26 = uVar26 + 8;
              *(float *)((int)lVar19 + 0x120) = *(float *)((int)lVar19 + 0x120) * *pfVar25;
              lVar19 = lVar19 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar19 = 2;
            do {
              iVar22 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar22 + 0x120)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar8);
          }
        }
        dVar37 = -dVar37;
        dVar32 = 6.2831854820251465;
        dVar31 = 3.1415927410125732;
        dVar30 = (double)MB_DeltAngSpeed
                                   ((double)fVar10,dVar34,(double)(g_FrameTimeSq * 6.2831855),
                                    (double)(g_FrameTimeSq * 3.1415927),
                                    (double)(g_FrameTime * 6.2831855),&DAT_00470b74,uVar26
                                    ,out + 10);
        (moby->rotation).z = (float)dVar30;
        dVar30 = (double)MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar37,
                                    (double)(float)((double)g_FrameTimeSq * dVar32),
                                    (double)(float)((double)g_FrameTimeSq * dVar31),
                                    (double)(float)((double)g_FrameTime * dVar32));
        (moby->rotation).y = (float)dVar30;
        dVar30 = (double)FastWrapRot
                                   ((moby->rotation).x,
                                    (float)((double)g_FrameTime * dVar32));
        (moby->rotation).x = (float)dVar30;
        MB_SphericalToVector((float)dVar38,(moby->rotation).z,-(moby->rotation).y,out);
      }
      lVar28 = lVar28 + 0x10;
      dVar31 = 0.0;
      *(undefined4 *)((int)puVar16 + 0x8c) = 0;
      *(undefined4 *)(puVar16 + 0x11) = 0;
      *(undefined4 *)((int)puVar16 + 0x84) = 0;
      *(undefined4 *)(puVar16 + 0x10) = 0;
      iVar22 = MB_randRange(0xf,0x16);
      puVar16[0x2c] = (longlong)iVar22;
      dVar30 = 0.5;
      puVar16[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar16[0x2c] + 0.5));
      uVar15 = *(undefined4 *)((int)puVar16 + 0x164);
      uVar21 = MB_randRange(0x14,0x23);
      SpawnPart_4(lVar28,uVar18 - 0x150,0x6f00afff,0xff,uVar15,0x28,uVar21,1);
      iVar22 = MB_randRange(0x1e,0x3c);
      puVar16[0x2c] = (longlong)iVar22;
      puVar16[0x2c] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar16[0x2c] + dVar30));
      uVar15 = *(undefined4 *)((int)puVar16 + 0x164);
      uVar21 = MB_randRange(0x32,0x4b);
      SpawnPart_4(lVar28,uVar18 - 0x150,0x1fffffff,0x4f4f4f,uVar15,0x28,uVar21,0);
      fVar13 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar10 = fVar7 - g_heroPosition.y;
      fVar9 = fVar13 - g_heroPosition.x;
      fVar8 = (moby->pos).z;
      fVar2 = fVar8 - g_heroPosition.z;
      (moby->pos).x = fVar13 + *out;
      fVar13 = out[0xd];
      (moby->pos).y = fVar7 + out[1];
      dVar38 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar10 * fVar10);
      (moby->pos).z = fVar8 + out[2];
      if ((((fVar13 == 0.0) && (out[0xc] != 0.0)) && ((double)out[0xe] < dVar38)) && (dVar38 < 5.0))
      {
        PlayMobySound(0,0,moby);
        out[0xd] = 1.4013e-45;
      }
      if (dVar38 < (double)out[0xe]) {
        out[0xc] = 1.4013e-45;
      }
      out[0xe] = (float)dVar38;
      iVar22 = CollLine(lVar28,uVar18 - 0x160,0x10,out[4],0);
      if ((iVar22 != 0) && (g_CollOutput.pMoby != (MobyInstance *)out[4])) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          fVar13 = *out;
          dVar38 = (double)(fVar13 * fVar13 + out[1] * out[1]);
          if ((double)(float)SQRT(dVar38) == dVar31) {
            *(float *)(puVar16 + 0x14) = fVar13;
            *(float *)((int)puVar16 + 0xa4) = out[1];
            *(float *)(puVar16 + 0x15) = out[2];
            fVar13 = out[3];
            *(undefined4 *)((int)puVar16 + 0xa4) = 0;
            *(undefined4 *)(puVar16 + 0x14) = 0;
          }
          else {
            dVar31 = 1.0 / SQRT(dVar38);
            dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 -
                                                     1.0) * (double)(float)(dVar30 * dVar31) +
                                    dVar31);
            dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 -
                                                     1.0) * (double)(float)(dVar30 * dVar31) +
                                    dVar31);
            fVar7 = (float)(-(double)(float)((double)(float)(dVar38 * dVar31) * dVar31 - 1.0) *
                            (double)(float)(dVar30 * dVar31) + dVar31);
            *(float *)(puVar16 + 0x14) = fVar13 * fVar7;
            *(float *)((int)puVar16 + 0xa4) = out[1] * fVar7;
            *(float *)(puVar16 + 0x15) = out[2];
            fVar13 = out[3];
          }
          *(float *)((int)puVar16 + 0xac) = fVar13;
          pMVar14 = g_CollOutput.pMoby;
          out[2] = 1.0;
          CollDamageMobyDirect
                    (1.0,pMVar14,moby,0x10003,0x10000,&g_CollOutput.ip.x,(float *)(puVar16 + 0x14));
        }
        moby->state = '\x02';
      }
      iVar22 = FastDecTimerS32(out + 6);
      if (iVar22 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar3 < 3) {
    if (Level == Orxon) {
      MB_SpawnExplosionSparks
                (0x3fd0000000000000,0,lVar28,lVar28 + 0x10,&DAT_00470b74,0xffffffffffffffff);
    }
    else {
      MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar28,lVar28 + 0x10,&DAT_00470b74,
                 0xffffffffffffffff);
    }
    sound_MobyPlay_oClass(0,0,moby,0x99);
    DeleteMoby(moby);
  }
  return;
}


// 0x0471910 (0x14 bytes)
void M819_00471910(void)

{
  DAT_008778b8 = 0x10000;
  return;
}


// 0x0471930 (0x224 bytes)
MobyInstance *
M819_00471930
          (double param_1,double param_2,float param_3,f32 *param_4,float param_5,f32 *param_6,
          undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  MobyInstance *pMVar7;
  
  pMVar7 = CreateMoby(ROCKET_0052);
  if (pMVar7 != (MobyInstance *)0x0) {
    pfVar5 = (float *)pMVar7->pVar;
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\0';
    pfVar5[8] = param_3;
    pfVar5[9] = param_5;
    (pMVar7->pos).x = *param_4;
    (pMVar7->pos).y = param_4[1];
    (pMVar7->pos).z = param_4[2];
    (pMVar7->pos).w = param_4[3];
    (pMVar7->rotation).x = *param_6;
    (pMVar7->rotation).y = param_6[1];
    (pMVar7->rotation).z = param_6[2];
    (pMVar7->rotation).w = param_6[3];
    pfVar5[10] = (float)param_8;
    pfVar5[0xb] = (float)param_1;
    pfVar5[0xc] = 0.0;
    pfVar5[0xd] = 0.0;
    pfVar5[0xe] = (float)param_2;
    if (*(short *)((int)param_3 + 0xa6) == 0x504) {
      iVar6 = *(int *)((int)param_3 + 0x78);
      fVar1 = *(float *)(iVar6 + 0xc0);
      fVar2 = *(float *)(iVar6 + 0xc4);
      fVar3 = *(float *)(iVar6 + 200);
      fVar4 = *(float *)(iVar6 + 0xcc);
    }
    else {
      iVar6 = *(int *)((int)param_3 + 0x78);
      fVar1 = *(float *)(iVar6 + 0x70);
      fVar2 = *(float *)(iVar6 + 0x74);
      fVar3 = *(float *)(iVar6 + 0x78);
      fVar4 = *(float *)(iVar6 + 0x7c);
    }
    *pfVar5 = fVar1;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar3;
    pfVar5[3] = fVar4;
    if (pMVar7->animationId != '\x01') {
      MB_SetAnimation(pMVar7,1,0,10);
      fVar1 = *pfVar5;
    }
    (pMVar7->pos).x = (pMVar7->pos).x + fVar1;
    (pMVar7->pos).y = (pMVar7->pos).y + pfVar5[1];
    (pMVar7->pos).z = (pMVar7->pos).z + pfVar5[2];
    fVar1 = pfVar5[9];
    if (fVar1 != 0.0) {
      pfVar5[4] = *(float *)((int)fVar1 + 0x10);
      pfVar5[5] = *(float *)((int)fVar1 + 0x14);
      pfVar5[6] = *(float *)((int)fVar1 + 0x18);
      pfVar5[7] = *(float *)((int)fVar1 + 0x1c);
    }
    pMVar7->scale = pMVar7->pClass->gScale;
    UpdateMobyTransform(pMVar7);
    SpawnPart_26(0x411e848000000000,pMVar7,&DAT_00471928,0x60808080,param_8,0);
  }
  return pMVar7;
}


