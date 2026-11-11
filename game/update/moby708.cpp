// game/update/moby708.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x42a050-0x42a688
#include "game/update/moby708.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x042a050 (0x638 bytes)
// inlined: FastAtan2 @0x42a438
/* Moby 708 */

void UpdateMoby_708(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar18;
  ulonglong uVar16;
  longlong lVar17;
  char cVar21;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  
  lVar15 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar17 = uVar23 - 0x160;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar23;
  puVar12[0x2e] = in_LR;
  puVar12[0x27] = in_f27;
  puVar12[0x28] = in_f28;
  puVar12[0x29] = in_f29;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x26] = unaff_r31;
  uVar4 = moby->state;
  puVar12[0x24] = unaff_r29;
  puVar8 = (uint *)moby->pVar;
  puVar12[0x25] = unaff_r30;
  puVar12[0x23] = unaff_r28;
  puVar12[0x22] = unaff_r27;
  if (uVar4 == '\0') {
    moby->state = '\x02';
    *puVar8 = 0;
    pSVar11 = Splines[puVar8[5]];
    *(undefined1 *)(puVar8 + 1) = 1;
    puVar8[4] = (uint)pSVar11;
  }
  else if (uVar4 == '\x02') {
    iVar18 = MB_damage(lVar15,0x330000,0);
    if (iVar18 == 0) {
      dVar37 = 0.4000000059604645;
      uVar9 = puVar8[5];
      (moby->pos).z = (moby->pos).z - 0.4;
      if (uVar9 == 0xffffffff) {
        DeleteMoby(moby);
      }
      else if (*(int *)puVar8[4] == 0) {
        DeleteMoby(moby);
      }
      else {
        dVar29 = (double)FastWrapRot
                                   ((moby->rotation).y,
                                    DAT_00857bf4 * 0.017453292 * g_FrameTime);
        fVar5 = (moby->pos).y;
        (moby->rotation).y = (float)dVar29;
        fVar6 = (moby->pos).x;
        fVar7 = (moby->pos).z - g_heroPosition.z;
        if (1.5 <= SQRT(fVar7 * fVar7 +
                        (fVar6 - g_heroPosition.x) * (fVar6 - g_heroPosition.x) +
                        (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y))) {
          puVar10 = (uint *)puVar8[4];
          uVar9 = *puVar10;
          lVar26 = (ulonglong)*puVar8 + (ulonglong)uVar9 + (longlong)*(char *)(puVar8 + 1);
          lVar26 = lVar26 - (longlong)((int)lVar26 / (int)uVar9) * (longlong)(int)uVar9;
          if ((int)lVar26 == uVar9 - 1) {
            cVar21 = -*(char *)(puVar8 + 1);
            *(char *)(puVar8 + 1) = cVar21;
            uVar9 = *puVar10;
            lVar26 = (ulonglong)*puVar8 + (ulonglong)uVar9 + (longlong)cVar21;
            fVar6 = (moby->pos).x;
            fVar5 = (moby->pos).y;
            lVar26 = lVar26 - (longlong)((int)lVar26 / (int)uVar9) * (longlong)(int)uVar9;
          }
          iVar18 = (int)(lVar26 << 4);
          fVar6 = *(float *)((int)puVar10 + iVar18 + 0x10) - fVar6;
          fVar5 = *(float *)((int)puVar10 + iVar18 + 0x14) - fVar5;
          uVar19 = ZEXT48(&g_atanQuadrantTable);
          fVar1 = ABS(fVar6);
          fVar7 = ABS(fVar5);
          *(float *)(puVar12 + 0x1c) = fVar6;
          *(float *)((int)puVar12 + 0xe4) = fVar5;
          *(float *)(puVar12 + 0x1d) = fVar1 - fVar7;
          dVar29 = 0.0;
          uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
          fVar5 = ABS(*(float *)(puVar12 + 0x1c));
          if (*(float *)(puVar12 + 0x1d) - 0.0 < 0.0) {
            fVar5 = fVar7;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          fVar2 = ABS(*(float *)((int)puVar12 + 0xe4));
          if (*(float *)(puVar12 + 0x1d) - 0.0 < 0.0) {
            fVar2 = fVar1;
          }
          dVar32 = dVar29;
          if (0.0 < fVar5) {
            lVar24 = uVar23 - 0x150;
            lVar20 = uVar23 - 100;
            lVar22 = uVar23 - 0x74;
            lVar27 = 2;
            fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
            fVar1 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x1f) = fVar5;
            *(float *)(puVar12 + 0x1e) = fVar5;
            *(float *)((int)puVar12 + 0xf4) = fVar5;
            *(float *)((int)puVar12 + 0xec) = fVar5;
            fVar5 = fVar1 * fVar1;
            *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar1;
            *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar5;
            *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar5 * fVar1;
            do {
              *(float *)((int)lVar24 + 0xec) = *(float *)((int)lVar24 + 0xdc) * fVar5 * fVar5;
              iVar13 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
              lVar20 = lVar20 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            uVar19 = uVar23 - 0x74;
            lVar22 = 4;
            pfVar25 = (float *)&DAT_007358e0;
            uVar23 = uVar19;
            lVar20 = lVar17;
            do {
              fVar5 = *pfVar25;
              fVar1 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar20 + 0xec) = *(float *)((int)lVar20 + 0xec) * fVar5;
              lVar20 = lVar20 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar1;
              uVar23 = uVar23 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar20 = 2;
            do {
              iVar13 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar14 = (int)uVar19;
              uVar19 = uVar19 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xec)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar7 + fVar6);
          }
          dVar36 = 0.10000000149011612;
          OrganicDeltAngSpeed
                    (dVar32,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar19,
                     puVar8 + 0xc);
          dVar30 = (double)(moby->pos).y;
          iVar18 = puVar8[4] + iVar18;
          dVar31 = (double)(moby->pos).x;
          fVar6 = (float)((double)*(float *)(iVar18 + 0x14) - dVar30);
          fVar7 = (float)((double)*(float *)(iVar18 + 0x10) - dVar31);
          dVar34 = (double)(moby->pos).z;
          fVar1 = (float)((double)*(float *)(iVar18 + 0x18) - dVar34);
          dVar35 = (double)SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar5 = (float)((double)(g_FrameTime * 3.0) / dVar35);
          dVar32 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar32 = (double)(fVar6 * fVar5);
          }
          dVar33 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          dVar28 = dVar29;
          if (dVar29 - dVar35 < 0.0) {
            dVar28 = (double)(fVar1 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar32 = (double)(fVar6 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar33 = (double)(fVar7 * fVar5);
          }
          if (dVar35 - dVar29 < 0.0) {
            dVar28 = (double)(fVar1 * fVar5);
          }
          fVar5 = (float)(dVar30 + dVar32);
          fVar6 = (float)(dVar31 + dVar33);
          fVar7 = (float)(dVar34 + dVar28);
          dVar29 = (double)fVar7;
          fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar18 + 0x14));
          fVar2 = (float)((double)fVar6 - (double)*(float *)(iVar18 + 0x10));
          fVar3 = (float)(dVar29 - (double)*(float *)(iVar18 + 0x18));
          (moby->pos).x = fVar6;
          (moby->pos).y = fVar5;
          if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar36) {
            (moby->pos).z = fVar7;
            *puVar8 = (uint)lVar26;
            dVar29 = (double)(moby->pos).z;
          }
          (moby->pos).z = (float)(dVar29 + dVar37);
        }
        else {
          *(undefined4 *)((int)puVar12 + 0xdc) = 0;
          *(undefined4 *)(puVar12 + 0x1b) = 0;
          *(undefined4 *)((int)puVar12 + 0xd4) = 0;
          *(undefined4 *)(puVar12 + 0x1a) = 0;
          puVar12[0x12] = 0xffffffffffffffff;
          puVar12[0x14] = 1;
          puVar12[0x15] = 1;
          puVar12[0x16] = 0xffffffffffffffff;
          puVar12[0x17] = 0;
          MB_genericExplosion
                    (0,0,0x4008000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar15,uVar23 - 0x90,lVar15 + 0x10,&DAT_0042a018,0,10,0x14,
                     0x3c);
          DeleteMoby(moby);
        }
      }
    }
    else {
      *(undefined4 *)((int)puVar12 + 0xcc) = 0;
      *(undefined4 *)(puVar12 + 0x19) = 0;
      *(undefined4 *)((int)puVar12 + 0xc4) = 0;
      *(undefined4 *)(puVar12 + 0x18) = 0;
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 1;
      puVar12[0x15] = 1;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar15,uVar23 - 0xa0,lVar15 + 0x10,0,1,5,2,4);
      PlayMobySound(0,0,moby);
      DeleteMoby(moby);
    }
  }
  return;
}


