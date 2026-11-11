// game/update/moby621.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3e2218-0x3e2a5c
#include "game/update/moby621.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03e2218 (0x844 bytes)
// inlined: FastAtan2 @0x3e2680
/* Moby 621 */

void UpdateMoby_621(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  s8 sVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar21;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
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
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar20 = uVar16 - 0x170;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar16;
  puVar14[0x30] = in_LR;
  puVar14[0x29] = in_f27;
  puVar14[0x2a] = in_f28;
  puVar14[0x2b] = in_f29;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x28] = unaff_r31;
  puVar14[0x27] = unaff_r30;
  bVar5 = moby->state;
  piVar9 = (int *)moby->pVar;
  puVar14[0x26] = unaff_r29;
  puVar14[0x25] = unaff_r28;
  puVar14[0x24] = unaff_r27;
  fVar6 = animationSpeed;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      fVar6 = (moby->pos).z;
      moby->state = '\x01';
      (moby->pos).z = fVar6 + 0.4;
    }
    else {
      iVar21 = MB_damage(lVar17,0x330000,0);
      fVar6 = (moby->pos).y - g_heroPosition.y;
      fVar7 = (moby->pos).x - g_heroPosition.x;
      if (((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 2.0) && (g_heroState == GRINDRAIL_DAMAGE)) ||
         (DAT_00969f1c == moby)) {
        PlayMobySound(0,0,moby);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar17,&DAT_00a15d30,
                   lVar17 + 0x10,1,0xffffffffffffffff,10,0x14,0x3c);
        DeleteMoby(moby);
      }
      else if (iVar21 != 0) {
        PlayMobySound(0,0,moby);
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x4008000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar17,&DAT_00a15d30,lVar17 + 0x10,1,0xffffffffffffffff,10,
                   0x14,0x3c);
        DeleteMoby(moby);
      }
    }
  }
  else if (bVar5 < 3) {
    dVar36 = 0.4000000059604645;
    iVar21 = piVar9[5];
    (moby->pos).z = (moby->pos).z - 0.4;
    if (iVar21 == -1) {
      DeleteMoby(moby);
    }
    else if (*(int *)piVar9[4] == 0) {
      DeleteMoby(moby);
    }
    else {
      dVar27 = (double)FastWrapRot
                                 ((moby->rotation).y,
                                  DAT_00853d30 * 0.017453292 * g_FrameTime);
      (moby->rotation).y = (float)dVar27;
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).x;
      fVar8 = fVar6 - g_heroPosition.y;
      fVar1 = fVar7 - g_heroPosition.x;
      if ((2.0 <= SQRT(fVar1 * fVar1 + fVar8 * fVar8)) || (g_heroState != GRINDRAIL_DAMAGE)) {
        piVar10 = (int *)piVar9[4];
        iVar21 = *piVar10;
        iVar25 = *piVar9 + iVar21 + (int)*(char *)(piVar9 + 1);
        iVar25 = iVar25 - (iVar25 / iVar21) * iVar21;
        fVar7 = (float)piVar10[iVar25 * 4 + 4] - fVar7;
        fVar6 = (float)piVar10[iVar25 * 4 + 5] - fVar6;
        fVar1 = ABS(fVar7);
        fVar8 = ABS(fVar6);
        *(float *)((int)puVar14 + 0xe4) = fVar7;
        *(float *)(puVar14 + 0x1d) = fVar6;
        *(float *)((int)puVar14 + 0xec) = fVar1 - fVar8;
        dVar27 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 0xe4));
        if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar7 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar2 = ABS(*(float *)(puVar14 + 0x1d));
        if (*(float *)((int)puVar14 + 0xec) - 0.0 < 0.0) {
          fVar2 = fVar1;
        }
        dVar29 = dVar27;
        if (0.0 < fVar6) {
          lVar19 = uVar16 - 0x160;
          lVar22 = uVar16 - 0x80;
          lVar24 = uVar16 - 0x70;
          lVar26 = 2;
          fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
          fVar1 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0xfc) = fVar6;
          *(float *)((int)puVar14 + 0xf4) = fVar6;
          *(float *)(puVar14 + 0x1f) = fVar6;
          *(float *)(puVar14 + 0x1e) = fVar6;
          fVar6 = fVar1 * fVar1;
          *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar1;
          *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar6;
          *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar6 * fVar1;
          do {
            *(float *)((int)lVar19 + 0xf0) = *(float *)((int)lVar19 + 0xe0) * fVar6 * fVar6;
            iVar21 = (int)lVar22;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar24 = uVar16 - 0x80;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar6 = *pfVar23;
            fVar1 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0xf0) = *(float *)((int)lVar19 + 0xf0) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar1;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar19 = 2;
          do {
            iVar21 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar15 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar21 + 0xf0)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar8 + fVar7);
        }
        dVar35 = 0.10000000149011612;
        OrganicDeltAngSpeed
                  (dVar29,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                   &DAT_003e21c0,piVar9 + 0xd);
        iVar21 = piVar9[4] + iVar25 * 0x10;
        fVar6 = *(float *)(iVar21 + 0x10);
        fVar7 = *(float *)(iVar21 + 0x14);
        fVar8 = *(float *)(iVar21 + 0x18);
        if (iVar25 == 0) {
          dVar30 = (double)(moby->pos).y;
          dVar29 = (double)(moby->pos).x;
          if (SQRT((float)(dVar29 - (double)g_heroPosition.x) *
                   (float)(dVar29 - (double)g_heroPosition.x) +
                   (float)(dVar30 - (double)g_heroPosition.y) *
                   (float)(dVar30 - (double)g_heroPosition.y)) < 24.0) {
            *(undefined4 *)((int)puVar14 + 0xdc) = 0;
            *(undefined4 *)(puVar14 + 0x1b) = 0;
            *(undefined4 *)((int)puVar14 + 0xd4) = 0;
            *(undefined4 *)(puVar14 + 0x1a) = 0;
            puVar14[0x12] = 0xffffffffffffffff;
            puVar14[0x14] = 1;
            puVar14[0x15] = 1;
            puVar14[0x16] = 0xffffffffffffffff;
            puVar14[0x17] = 0;
            MB_genericExplosion
                      (dVar27,dVar27,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,lVar17,uVar16 - 0xa0,lVar17 + 0x10,0,1,
                       10,0x14,0x3c);
            PlayMobySound(0,0,moby);
            DeleteMoby(moby);
            return;
          }
          fVar1 = (moby->pos).z;
          moby->state = '\x03';
        }
        else {
          dVar30 = (double)(moby->pos).y;
          dVar28 = (double)(moby->pos).x;
          fVar2 = (float)((double)fVar7 - dVar30);
          fVar3 = (float)((double)fVar6 - dVar28);
          dVar33 = (double)(moby->pos).z;
          fVar4 = (float)((double)fVar8 - dVar33);
          dVar34 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
          fVar1 = (float)((double)(g_FrameTime * 3.0) / dVar34);
          dVar29 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          dVar31 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar31 = (double)(fVar2 * fVar1);
          }
          dVar32 = dVar27;
          if (dVar27 - dVar34 < 0.0) {
            dVar32 = (double)(fVar3 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar29 = (double)(fVar4 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar31 = (double)(fVar2 * fVar1);
          }
          if (dVar34 - dVar27 < 0.0) {
            dVar32 = (double)(fVar3 * fVar1);
          }
          fVar1 = (float)(dVar33 + dVar29);
          fVar2 = (float)(dVar30 + dVar31);
          dVar30 = (double)fVar2;
          fVar3 = (float)(dVar28 + dVar32);
          dVar29 = (double)fVar3;
          (moby->pos).z = fVar1;
          (moby->pos).y = fVar2;
          (moby->pos).x = fVar3;
        }
        dVar27 = (double)fVar1;
        fVar7 = (float)(dVar30 - (double)fVar7);
        fVar6 = (float)(dVar29 - (double)fVar6);
        fVar8 = (float)(dVar27 - (double)fVar8);
        if ((double)SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) < dVar35) {
          *piVar9 = iVar25;
          dVar27 = (double)(moby->pos).z;
        }
        (moby->pos).z = (float)(dVar27 + dVar36);
      }
      else {
        *(undefined4 *)((int)puVar14 + 0xcc) = 0;
        *(undefined4 *)(puVar14 + 0x19) = 0;
        *(undefined4 *)((int)puVar14 + 0xc4) = 0;
        *(undefined4 *)(puVar14 + 0x18) = 0;
        puVar14[0x12] = 0xffffffffffffffff;
        puVar14[0x14] = 1;
        puVar14[0x15] = 1;
        puVar14[0x16] = 0xffffffffffffffff;
        puVar14[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4008000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar17,uVar16 - 0xb0,lVar17 + 0x10,&DAT_003e21c0,0,10,0x14,
                   0x3c);
        DeleteMoby(moby);
      }
    }
  }
  else if (bVar5 < 4) {
    auVar37 = ZEXT416(0xfffffff8);
    auVar38 = loadVectorLeftIndexed(0x23,lVar17);
    auVar37 = vectorShiftRightWord
                        (auVar38,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
    auVar37 = vectorConvertFromUnsignedFixedPointWord(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0xe0,lVar20);
    *(undefined4 *)(puVar14 + 0x1c) = uVar13;
    Delt(0.0,128.0 / (float)(longlong)(fVar6 * 30.5),(float *)(puVar14 + 0x1c));
    auVar37 = loadVectorLeftIndexed(0xe0,lVar20);
    auVar37 = vectorConvertToUnsignedFixedPointWordSaturate(auVar37,0);
    auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xff;
    puVar14[0x22] = (longlong)*(float *)(puVar14 + 0x1c);
    uVar11 = *(uint *)((int)puVar14 + 0x114);
    sVar12 = storeVectorElementByteIndexed
                       (auVar37 | auVar37 << 8 | auVar37 << 0x10 | auVar37 << 0x18 | auVar37 << 0x20
                        | auVar37 << 0x28 | auVar37 << 0x30 | auVar37 << 0x38 | auVar37 << 0x40 |
                        auVar37 << 0x48 | auVar37 << 0x50 | auVar37 << 0x58 | auVar37 << 0x60 |
                        auVar37 << 0x68 | auVar37 << 0x70 | auVar37 << 0x78,0x23,lVar17);
    moby->alpha = sVar12;
    if ((uVar11 & 0xff) == 0) {
      DeleteMoby(moby);
    }
  }
  return;
}


