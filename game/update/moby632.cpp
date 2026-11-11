// game/update/moby632.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3f24f0-0x3f3260
#include "game/update/moby632.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03f24f0 (0x14 bytes)
void M632_003f24f0(void)

{
  DAT_0085438c = 0x10000;
  return;
}


// 0x03f25b8 (0xca8 bytes)
// inlined: FastAtan2 @0x3f2730, FastAtan2 @0x3f28e8, FastAtan2 @0x3f2ac4, FastAtan2 @0x3f2d70
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 632 */

void UpdateMoby_632(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar22;
  undefined8 uVar21;
  float *pfVar24;
  longlong lVar23;
  uint unused2;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x1c0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar18;
  puVar12[0x3a] = in_LR;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x35] = unaff_r31;
  bVar2 = moby->state;
  puVar12[0x34] = unaff_r30;
  pfVar7 = (float *)moby->pVar;
  puVar12[0x33] = unaff_r29;
  puVar12[0x32] = unaff_r28;
  puVar12[0x31] = unaff_r27;
  puVar12[0x30] = unaff_r26;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar3 = (moby->pos).y;
      *(f32 *)(puVar12 + 0xe) = (moby->pos).x;
      fVar4 = (moby->pos).z;
      *(f32 *)((int)puVar12 + 0x74) = fVar3;
      fVar3 = (moby->pos).w;
      *(float *)(puVar12 + 0xf) = fVar4;
      *(f32 *)((int)puVar12 + 0x7c) = fVar3;
      fVar8 = *pfVar7;
      fVar9 = pfVar7[1];
      fVar4 = (pfVar7[3] - fVar4) * 0.1;
      pfVar7[2] = fVar4;
      if (fVar4 <= g_FrameTime * 8.0) {
        if (fVar4 < g_FrameTime * -8.0) {
          pfVar7[2] = g_FrameTime * -8.0;
        }
      }
      else {
        pfVar7[2] = g_FrameTime * 8.0;
      }
      fVar6 = ABS(*pfVar7);
      fVar5 = ABS(pfVar7[1]);
      *(float *)(puVar12 + 0x1c) = fVar6 - fVar5;
      dVar31 = 0.0;
      dVar32 = 0.7853981852531433;
      uVar20 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar9 >> 0x1d) & 4;
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar8 = fVar6;
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar28 = dVar31;
      if (0.0 < fVar8) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0x6c;
        lVar23 = uVar18 - 0x7c;
        lVar27 = 2;
        fVar8 = (fVar5 - fVar8) / (fVar5 + fVar8);
        fVar5 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x2a) = fVar8;
        *(float *)(puVar12 + 0x29) = fVar8;
        *(float *)((int)puVar12 + 0x14c) = fVar8;
        *(float *)((int)puVar12 + 0x144) = fVar8;
        fVar8 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar5;
        *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar8;
        *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar8 * fVar5;
        do {
          *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x134) * fVar8 * fVar8;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar8 * fVar8;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0x7c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar8 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0x144) = *(float *)((int)lVar26 + 0x144) * fVar8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x144)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar9);
      }
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar8 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar9 = ABS(fVar8);
      *(float *)((int)puVar12 + 0xd4) = fVar4;
      *(float *)(puVar12 + 0x1b) = fVar8;
      *(float *)(puVar12 + 0x18) = (float)dVar28;
      *(float *)((int)puVar12 + 0xdc) = fVar5 - fVar9;
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar12 + 0xd4));
      if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
        fVar4 = fVar9;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar9 = ABS(*(float *)(puVar12 + 0x1b));
      if (*(float *)((int)puVar12 + 0xdc) - 0.0 < 0.0) {
        fVar9 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar29 = dVar31;
      if (0.0 < fVar4) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0x8c;
        lVar23 = uVar18 - 0x9c;
        lVar27 = 2;
        fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
        fVar9 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x26) = fVar4;
        *(float *)(puVar12 + 0x25) = fVar4;
        *(float *)((int)puVar12 + 300) = fVar4;
        *(float *)((int)puVar12 + 0x124) = fVar4;
        fVar4 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar9;
        *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar4;
        *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar4 * fVar9;
        do {
          *(float *)((int)lVar26 + 0x124) = *(float *)((int)lVar26 + 0x114) * fVar4 * fVar4;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0x9c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar4 = *pfVar24;
          fVar9 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0x124) = *(float *)((int)lVar26 + 0x124) * fVar4;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar9;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x124)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar8 + fVar5);
      }
      dVar28 = (double)FastSubRots((float)dVar28,(float)dVar29);
      fVar8 = g_FrameTime;
      fVar4 = *pfVar7;
      if (dVar28 < 1.5707963705062866) {
        fVar4 = g_heroPosition.x - (moby->pos).x;
        fVar9 = g_heroPosition.y - (moby->pos).y;
        dVar29 = ABS((double)fVar4);
        dVar30 = ABS((double)fVar9);
        *(float *)(puVar12 + 0x19) = fVar4;
        *(float *)((int)puVar12 + 0xcc) = fVar9;
        *(float *)(puVar12 + 0x1a) = (float)(dVar29 - dVar30);
        unused2 = *(uint *)(puVar12 + 0x1a);
        uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1c) & 8 |
                 (ulonglong)(unused2 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1d) & 4;
        pfVar24 = (float *)(uVar20 << 2);
        dVar28 = ABS((double)*(float *)(puVar12 + 0x19));
        if ((double)*(float *)(puVar12 + 0x1a) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar4 = pfVar24[0x1cd640];
        dVar30 = ABS((double)*(float *)((int)puVar12 + 0xcc));
        if ((double)*(float *)(puVar12 + 0x1a) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar29 = dVar31;
        if (dVar31 < dVar28) {
          lVar26 = uVar18 - 0x1b0;
          lVar23 = uVar18 - 0xbc;
          lVar25 = uVar18 - 0xac;
          lVar27 = 2;
          fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x22) = fVar5;
          *(float *)(puVar12 + 0x21) = fVar5;
          *(float *)((int)puVar12 + 0x10c) = fVar5;
          *(float *)((int)puVar12 + 0x104) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar6;
          *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar5;
          *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x104) = *(float *)((int)lVar26 + 0xf4) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar26 = lVar26 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar18 - 0xbc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar26 = lVar1;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar26 + 0x104) = *(float *)((int)lVar26 + 0x104) * fVar5;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            unused2 = (uint)lVar23;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          lVar26 = lVar1;
          dVar28 = dVar31;
          do {
            iVar22 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            iVar13 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x104)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar29 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar9);
        }
        DeltAng((float)dVar29,DAT_008543b4 * 0.017453292 * fVar8,(float *)(puVar12 + 0x18)
                          ,(int)pfVar24,unused2,0);
        fVar4 = *(float *)(puVar12 + 0x18);
        fVar8 = fVar4 + 1.5707963;
        fVar5 = pfVar7[1] * pfVar7[1];
        fVar9 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar9 = fVar8;
        }
        fVar6 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar6 = fVar4;
        }
        fVar14 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar9 < 0.0) {
          fVar14 = fVar9;
        }
        fVar8 = fVar14 * fVar14;
        fVar15 = fVar8 * fVar8 * fVar14;
        fVar16 = fVar8 * fVar15;
        fVar9 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
          fVar9 = fVar6;
        }
        fVar4 = (fVar8 * fVar16 * 2.601887e-06 +
                fVar16 * -0.0001980741 +
                fVar15 * 0.0083330255 + fVar8 * fVar14 * -0.16666657 + fVar14) *
                SQRT(*pfVar7 * *pfVar7 + fVar5);
        fVar8 = fVar9 * fVar9;
        *pfVar7 = fVar4;
        fVar6 = fVar8 * fVar8 * fVar9;
        fVar14 = fVar8 * fVar6;
        pfVar7[1] = (fVar8 * fVar14 * 2.601887e-06 +
                    fVar14 * -0.0001980741 +
                    fVar6 * 0.0083330255 + fVar8 * fVar9 * -0.16666657 + fVar9) *
                    SQRT(fVar4 * fVar4 + fVar5);
      }
      (moby->pos).x = (moby->pos).x + fVar4;
      (moby->pos).y = (moby->pos).y + pfVar7[1];
      (moby->pos).z = (moby->pos).z + pfVar7[2];
      fVar4 = *pfVar7;
      fVar8 = pfVar7[1];
      dVar30 = ABS((double)*pfVar7);
      dVar28 = ABS((double)pfVar7[1]);
      *(float *)((int)puVar12 + 0xc4) = (float)(dVar30 - dVar28);
      uVar20 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar8 >> 0x1d) & 4;
      dVar29 = dVar30;
      if ((double)*(float *)((int)puVar12 + 0xc4) - dVar31 < 0.0) {
        dVar29 = dVar28;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
      if ((double)*(float *)((int)puVar12 + 0xc4) - dVar31 < 0.0) {
        dVar28 = dVar30;
      }
      fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar30 = dVar31;
      if (dVar31 < dVar29) {
        lVar26 = uVar18 - 0x1b0;
        lVar25 = uVar18 - 0xcc;
        lVar23 = uVar18 - 0xdc;
        lVar27 = 2;
        fVar9 = (float)(dVar28 - dVar29) / (float)(dVar28 + dVar29);
        fVar5 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x1e) = fVar9;
        *(float *)(puVar12 + 0x1d) = fVar9;
        *(float *)((int)puVar12 + 0xec) = fVar9;
        *(float *)((int)puVar12 + 0xe4) = fVar9;
        fVar9 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar5;
        *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar9;
        *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar9 * fVar5;
        do {
          *(float *)((int)lVar26 + 0xe4) = *(float *)((int)lVar26 + 0xd4) * fVar9 * fVar9;
          iVar22 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar18 - 0xdc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar26 = lVar1;
        lVar23 = lVar25;
        do {
          fVar9 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar26 + 0xe4) = *(float *)((int)lVar26 + 0xe4) * fVar9;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar23 = 2;
        lVar26 = lVar1;
        dVar28 = dVar31;
        do {
          iVar22 = (int)lVar26;
          iVar13 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xe4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar30 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar8);
      }
      (moby->rotation).z = (float)dVar30;
      lVar26 = lVar19 + 0x10;
      *(undefined4 *)((int)puVar12 + 0x8c) = 0;
      *(undefined4 *)(puVar12 + 0x11) = 0;
      *(undefined4 *)((int)puVar12 + 0x84) = 0;
      *(undefined4 *)(puVar12 + 0x10) = 0;
      iVar22 = MB_randRange(0xf,0x16);
      puVar12[0x2d] = (longlong)iVar22;
      dVar32 = 0.5;
      puVar12[0x2d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x2d] + 0.5));
      uVar10 = *(undefined4 *)((int)puVar12 + 0x16c);
      uVar21 = MB_randRange(0x14,0x23);
      SpawnPart_4(lVar26,uVar18 - 0x140,0x6f00afff,0xff,uVar10,0x28,uVar21,1);
      iVar22 = MB_randRange(0x1e,0x3c);
      puVar12[0x2d] = (longlong)iVar22;
      puVar12[0x2d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x2d] + dVar32));
      uVar10 = *(undefined4 *)((int)puVar12 + 0x16c);
      uVar21 = MB_randRange(0x32,0x4b);
      SpawnPart_4(lVar26,uVar18 - 0x140,0x1fffffff,0x4f4f4f,uVar10,0x28,uVar21,0);
      iVar22 = CollLine(lVar26,uVar18 - 0x150,0,pfVar7[4],0);
      if ((iVar22 != 0) && (g_CollOutput.pMoby != (MobyInstance *)pfVar7[4])) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          SetCollDamIn
                    (0x3ff0000000000000,uVar18 - 0x130,lVar19,0x10001,&DAT_003f2510,pfVar7);
          pMVar17 = g_CollOutput.pMoby;
          auVar43 = ZEXT416(0xffffffff);
          auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = ZEXT416(0xfffffff0);
          auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar35 = loadVectorLeftIndexed(0x94,lVar1);
          auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar33);
          auVar33 = ZEXT416(0);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          auVar36 = loadVectorLeftIndexed(0x90,lVar1);
          auVar38 = loadVectorLeftIndexed(0xa6,lVar19);
          auVar38 = vectorShiftRightWord
                              (auVar38,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                              );
          auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar37);
          auVar43 = auVar33;
          if ((double)SQRT(*(float *)(puVar12 + 0x12) * *(float *)(puVar12 + 0x12) +
                           *(float *)((int)puVar12 + 0x94) * *(float *)((int)puVar12 + 0x94)) !=
              dVar31) {
            auVar34 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar37);
            auVar43 = ZEXT416(0xffffffff);
            auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
            auVar43 = loadVectorLeftIndexed(0x38,0x3f2510);
            auVar39 = loadVectorLeftIndexed(0x3c,0x3f2510);
            auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar41 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar42 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar39 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar33);
            auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar40);
            auVar43 = ZEXT416(0xffffffff);
            auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
            auVar43 = ZEXT416(0xffffffff);
            auVar33 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar34,auVar42);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar34);
            auVar39 = vectorShiftLeftIntegerWord(auVar46,auVar46);
            auVar43 = ZEXT416(0xffffffff);
            auVar40 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar43 = ZEXT416(0xffffffff);
            auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar46 = vectorShiftLeftIntegerWord(auVar43,auVar43);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar44);
            auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
            auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar34,auVar42);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar34);
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar37,auVar43,auVar39);
            auVar37 = vectorMultiplyAddFloatingPoint(auVar41,auVar43,auVar40);
            auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar43,auVar42);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar43);
            auVar43 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar46);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar34);
          }
          auVar35 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x90,
                              lVar1);
          *(undefined4 *)(puVar12 + 0x12) = uVar10;
          uVar10 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x94,
                              lVar1);
          *(undefined4 *)((int)puVar12 + 0x94) = uVar10;
          *(undefined4 *)(puVar12 + 0x13) = 0x3f800000;
          auVar35 = vectorSplatHalfWord(auVar38,1);
          *(undefined4 *)((int)puVar12 + 0x9c) = 0x45afdf66;
          *(undefined1 *)(puVar12 + 0x15) = 0;
          *(undefined1 *)((int)puVar12 + 0xa9) = 1;
          uVar11 = storeVectorElementHalfWordIndexed(auVar35,0xaa,lVar1);
          *(undefined2 *)((int)puVar12 + 0xaa) = uVar11;
          auVar35 = loadVectorLeftIndexed(0x70,0x3f2510);
          auVar33 = vectorPermute(auVar43,auVar33,_DAT_003f2560);
          auVar43 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar33 = vectorPermute(auVar33,_DAT_003f2550,_DAT_003f2570);
          auVar43 = vectorPermute(auVar38,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                          auVar43 << 0x60,_DAT_003f2590);
          auVar43 = vectorPermute(auVar43,*(undefined1 (*) [16])(puVar12 + 0x14),_DAT_003f25a0);
          *(undefined1 (*) [16])(puVar12 + 8) = auVar33;
          *(undefined4 *)((int)puVar12 + 0x6c) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)(puVar12 + 0xd) = *(undefined4 *)(puVar12 + 0x17);
          *(undefined4 *)((int)puVar12 + 100) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined1 (*) [16])(puVar12 + 10) = auVar43;
          CollDamageMobyDirect
                    (pMVar17,0xb0,puVar12[8],puVar12[9],puVar12[10],puVar12[0xb],puVar12[0xc],
                     puVar12[0xd]);
        }
        moby->state = '\x02';
      }
      iVar22 = FastDecTimerS32(pfVar7 + 5);
      if (iVar22 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_003f2510,
               0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


