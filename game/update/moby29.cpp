// game/update/moby29.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x32e908-0x32f5e8
#include "game/update/moby29.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby289.h"
#include "game/update/moby36.h"
#include "idol/fastfunc.h"

// 0x032e908 (0x94 bytes)
void M289_0032e908(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  fVar1 = 20.0;
  if (*(char *)(param_1 + 0x20) == '\x03') {
    fVar1 = 22.0;
  }
  MB_getTarget((double)fVar1,param_1,&DAT_0032e8fc,iVar2);
  if (*(int *)(iVar2 + 0x40) == 0) {
    *(MobyInstance **)(iVar2 + 0x40) = g_heroMobyPtr;
  }
  if (3 < *(byte *)(param_1 + 0xbc)) {
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0xbc);
  }
  return;
}


// 0x032e9e0 (0xc08 bytes)
// inlined: FastAtan2 @0x32ec04, FastAtan2 @0x32ef60, FastAtan2 @0x32f208
/* Moby 29 */

void UpdateMoby_29(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar22;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar23;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar19 = uVar15 - 400;
  puVar10 = (ulonglong *)lVar19;
  *puVar10 = uVar15;
  puVar10[0x34] = in_LR;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2f] = unaff_r31;
  uVar1 = moby->state;
  puVar10[0x2e] = unaff_r30;
  dVar28 = 20.0;
  pvVar7 = moby->pVar;
  puVar10[0x2d] = unaff_r29;
  puVar10[0x2c] = unaff_r28;
  dVar29 = dVar28;
  if (uVar1 == '\x03') {
    dVar29 = 22.0;
  }
  MB_getTarget(dVar29,lVar16,&DAT_0032e99c,pvVar7);
  pMVar9 = g_heroMobyPtr;
  pMVar8 = *(MobyInstance **)((int)pvVar7 + 0x40);
  if (*(MobyInstance **)((int)pvVar7 + 0x40) == (MobyInstance *)0x0) {
    *(MobyInstance **)((int)pvVar7 + 0x40) = g_heroMobyPtr;
    pMVar8 = pMVar9;
  }
  if (3 < (byte)moby->setByGroup) {
    moby->state = moby->setByGroup;
    pMVar8 = *(MobyInstance **)((int)pvVar7 + 0x40);
  }
  pMVar9 = *(MobyInstance **)((int)pvVar7 + 0x5c);
  if (((pMVar9 != (MobyInstance *)0x0) && (pMVar9->oClass == BLARG_GUNNER)) &&
     (pMVar9->state < 0x80)) {
    DoManipulator(0x40059999a0000000,pMVar9,1,(Manipulator *)((int)pvVar7 + 0x70));
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    OrganicDeltAng
              (*(float *)((int)pvVar7 + 0x54),g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
               g_FrameTime * 25.132742,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0x60));
    fVar42 = *(float *)((int)pvVar7 + 100) - 1.0;
    *(float *)((int)pvVar7 + 100) = fVar42;
    if (fVar42 <= 0.0) {
      moby->state = '\x04';
    }
  }
  else {
    if (uVar1 == '\x04') {
      uVar20 = 0x3ff0000000000000;
      MB_randSphere(0x3fe0000000000000,0x3ff0000000000000,uVar15 - 0xd0);
      MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      puVar10[0x12] = 0xffffffffffffffff;
      puVar10[0x14] = 1;
      puVar10[0x15] = 1;
      puVar10[0x16] = 0xffffffffffffffff;
      puVar10[0x17] = 0;
      MB_genericExplosion
                (0,0,0x4000000000000000,uVar20,0x4022000000000000,uVar20,0x402e000000000000,lVar16,
                 uVar15 - 0xd0,lVar16 + 0x10,1,0xffffffffffffffff,5,2,4);
      DeleteMoby(moby);
      return;
    }
    if (uVar1 == '\x03') {
      fVar42 = (pMVar8->pos).x - (moby->pos).x;
      fVar4 = (pMVar8->pos).y - (moby->pos).y;
      fVar3 = ABS(fVar42);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar10 + 0xdc) = fVar42;
      *(float *)(puVar10 + 0x1c) = fVar4;
      *(float *)((int)puVar10 + 0xe4) = fVar3 - fVar5;
      dVar29 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x1c) >> 0x1d) & 4;
      fVar42 = ABS(*(float *)((int)puVar10 + 0xdc));
      if (*(float *)((int)puVar10 + 0xe4) - 0.0 < 0.0) {
        fVar42 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar10 + 0x1c));
      if (*(float *)((int)puVar10 + 0xe4) - 0.0 < 0.0) {
        fVar6 = fVar3;
      }
      dVar30 = dVar29;
      if (0.0 < fVar42) {
        lVar18 = uVar15 - 0x180;
        lVar26 = uVar15 - 0x6c;
        lVar24 = uVar15 - 0x7c;
        lVar27 = 2;
        fVar42 = (fVar6 - fVar42) / (fVar6 + fVar42);
        fVar3 = fVar42 * fVar42;
        *(float *)(puVar10 + 0x24) = fVar42;
        *(float *)(puVar10 + 0x23) = fVar42;
        *(float *)((int)puVar10 + 0x11c) = fVar42;
        *(float *)((int)puVar10 + 0x114) = fVar42;
        fVar42 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x23) = *(float *)(puVar10 + 0x23) * fVar3;
        *(float *)((int)puVar10 + 0x11c) = *(float *)((int)puVar10 + 0x11c) * fVar42;
        *(float *)(puVar10 + 0x24) = *(float *)(puVar10 + 0x24) * fVar42 * fVar3;
        do {
          *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x104) * fVar42 * fVar42;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar42 * fVar42;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x7c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar42 = *pfVar25;
          fVar3 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x114) * fVar42;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar18 = lVar19;
        do {
          iVar23 = (int)lVar18;
          iVar12 = (int)lVar26;
          lVar18 = lVar18 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x114)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar30 = (double)FastSubRots((float)dVar30,*(float *)((int)pvVar7 + 0x54));
      if (((1.5707963705062866 <= dVar30) ||
          (fVar42 = (moby->pos).y - (pMVar8->pos).y, fVar4 = (moby->pos).x - (pMVar8->pos).x,
          22.0 < SQRT(fVar4 * fVar4 + fVar42 * fVar42))) ||
         ((*(int *)((int)pvVar7 + 0x50) != -1 &&
          (iVar23 = MB_IsPntInCuboid
                              ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x50)),
          iVar23 == 0)))) {
        if (moby->animationId != '\0') {
          uVar20 = MB_randRange(7,0xd);
          MB_SetAnimation(lVar16,0,0,uVar20);
        }
        moby->state = '\x01';
      }
      else {
        Delt((float)dVar28,g_FrameTime * 6.0,(float *)((int)pvVar7 + 0x68));
        fVar42 = (pMVar8->pos).x - (moby->pos).x;
        fVar4 = (pMVar8->pos).y - (moby->pos).y;
        dVar30 = ABS((double)fVar42);
        dVar31 = ABS((double)fVar4);
        *(float *)(puVar10 + 0x1a) = fVar42;
        *(float *)((int)puVar10 + 0xd4) = fVar4;
        *(float *)(puVar10 + 0x1b) = (float)(dVar30 - dVar31);
        fVar42 = *(float *)((int)pvVar7 + 0x54);
        uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x1a));
        if ((double)*(float *)(puVar10 + 0x1b) - dVar29 < 0.0) {
          dVar28 = dVar31;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar31 = ABS((double)*(float *)((int)puVar10 + 0xd4));
        if ((double)*(float *)(puVar10 + 0x1b) - dVar29 < 0.0) {
          dVar31 = dVar30;
        }
        if (dVar29 < dVar28) {
          lVar18 = uVar15 - 0x180;
          lVar26 = uVar15 - 0x8c;
          lVar24 = uVar15 - 0x9c;
          lVar27 = 2;
          fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
          fVar6 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x20) = fVar3;
          *(float *)(puVar10 + 0x1f) = fVar3;
          *(float *)((int)puVar10 + 0xfc) = fVar3;
          *(float *)((int)puVar10 + 0xf4) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar6;
          *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3;
          *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar3 * fVar3;
            iVar23 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar26 = uVar15 - 0x9c;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar24 = lVar26;
          do {
            fVar3 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar23 = (int)lVar19;
            iVar12 = (int)lVar26;
            lVar19 = lVar19 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar23 + 0xf4)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar5 + fVar4);
        }
        dVar28 = (double)FastDiffRots(dVar29,(double)fVar42);
        dVar29 = (double)(*(float *)((int)pvVar7 + 0x6c) * 0.017453292);
        if ((dVar28 <= dVar29) &&
           (dVar30 = (double)(*(float *)((int)pvVar7 + 0x6c) * -0.017453292), dVar29 = dVar28,
           dVar28 < dVar30)) {
          dVar29 = dVar30;
        }
        dVar29 = (double)FastWrapRot((float)dVar29,*(float *)((int)pvVar7 + 0x54));
        fVar42 = OrganicDeltAng
                           ((float)dVar29,g_FrameTimeSq * 12.566371,g_FrameTimeSq * 12.566371,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar7 + 0x60));
        M29_0032e710((double)fVar42,lVar16);
        iVar23 = *(int *)((int)pvVar7 + 0x5c);
        if ((((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
            (cVar2 = *(char *)(iVar23 + 0x20), cVar2 == -3 || cVar2 == -2)) || (cVar2 == '\x02')) {
          if (moby->animationId != '\0') {
            uVar20 = MB_randRange(7,0xd);
            MB_SetAnimation(lVar16,0,0,uVar20);
          }
          *(undefined4 *)((int)pvVar7 + 100) = 0x3f800000;
          moby->state = '\x05';
        }
      }
    }
    else if (uVar1 == '\x01') {
      fVar42 = (pMVar8->pos).x - (moby->pos).x;
      fVar4 = (pMVar8->pos).y - (moby->pos).y;
      fVar5 = ABS(fVar42);
      fVar3 = ABS(fVar4);
      *(float *)(puVar10 + 0x1d) = fVar42;
      *(float *)((int)puVar10 + 0xec) = fVar4;
      *(float *)(puVar10 + 0x1e) = fVar5 - fVar3;
      fVar42 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar10 + 0x1d));
      if (*(float *)(puVar10 + 0x1e) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar10 + 0xec));
      if (*(float *)(puVar10 + 0x1e) - 0.0 < 0.0) {
        fVar11 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar18 = uVar15 - 0x180;
        lVar24 = uVar15 - 0x5c;
        lVar26 = uVar15 - 0x4c;
        lVar27 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar10 + 0x28) = fVar4;
        *(float *)(puVar10 + 0x27) = fVar4;
        *(float *)((int)puVar10 + 0x13c) = fVar4;
        *(float *)((int)puVar10 + 0x134) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x27) = *(float *)(puVar10 + 0x27) * fVar5;
        *(float *)((int)puVar10 + 0x13c) = *(float *)((int)puVar10 + 0x13c) * fVar4;
        *(float *)(puVar10 + 0x28) = *(float *)(puVar10 + 0x28) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x124) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar18 = lVar18 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar15 - 0x5c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x134) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar18 = 2;
        do {
          iVar23 = (int)lVar19;
          iVar12 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar42 = fVar42 + *(float *)(iVar23 + 0x134) + *(float *)(iVar12 + 4) +
                   *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar42 = (fVar42 + 0.7853982) * fVar6 + fVar3;
      }
      dVar29 = (double)FastSubRots(fVar42,*(float *)((int)pvVar7 + 0x54));
      if (((dVar29 < 1.5707963705062866) &&
          (fVar42 = (moby->pos).y - (pMVar8->pos).y, fVar4 = (moby->pos).x - (pMVar8->pos).x,
          (double)SQRT(fVar4 * fVar4 + fVar42 * fVar42) < dVar28)) &&
         ((*(int *)((int)pvVar7 + 0x50) == -1 ||
          (iVar23 = MB_IsPntInCuboid
                              ((Vec4 *)&g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x50)),
          iVar23 != 0)))) {
        *(undefined4 *)((int)pvVar7 + 0x68) = 0x41000000;
        if (moby->animationId != '\x01') {
          uVar20 = MB_randRange(0,3);
          uVar21 = MB_randRange(7,0xd);
          MB_SetAnimation(lVar16,1,uVar20,uVar21);
        }
        moby->state = '\x03';
      }
      fVar42 = OrganicDeltAng
                         (*(float *)((int)pvVar7 + 0x54),g_FrameTimeSq * 12.566371,
                          g_FrameTimeSq * 12.566371,g_FrameTime * 12.566371,
                          &(moby->rotation).z,0x720000,(float *)((int)pvVar7 + 0x60));
      iVar23 = *(int *)((int)pvVar7 + 0x5c);
      if (((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
         ((cVar2 = *(char *)(iVar23 + 0x20), cVar2 == -3 || cVar2 == -2 || (cVar2 == '\x02')))) {
        if (moby->animationId != '\0') {
          uVar20 = MB_randRange((double)fVar42,7,0xd);
          MB_SetAnimation(lVar16,0,0,uVar20);
        }
        *(undefined4 *)((int)pvVar7 + 100) = 0x3f800000;
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\0') {
      moby->scale = moby->pClass->gScale * 1.5;
      uVar22 = FUN_00354638(lVar16);
      *(undefined4 *)((int)pvVar7 + 0x5c) = uVar22;
      *(f32 *)((int)pvVar7 + 0x54) = (moby->rotation).z;
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar16,0,0,10);
      }
      moby->state = '\x01';
    }
  }
  iVar23 = *(int *)((int)pvVar7 + 0x5c);
  if (((iVar23 == 0) || (*(short *)(iVar23 + 0xa6) != 0x24)) ||
     (*(char *)(iVar23 + 0x20) == -3 || *(char *)(iVar23 + 0x20) == -2)) {
    *(undefined4 *)((int)pvVar7 + 0x5c) = 0;
  }
  else {
    *(f32 *)(iVar23 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar23 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar23 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar23 + 0x4c) = (moby->rotation).w;
    iVar23 = *(int *)((int)pvVar7 + 0x5c);
    puVar13 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    uVar33 = puVar13[2];
    uVar32 = puVar13[1];
    uVar22 = *puVar13;
    puVar14 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    uVar37 = puVar14[3];
    uVar36 = puVar14[2];
    uVar35 = puVar14[1];
    uVar34 = *puVar14;
    puVar14 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    uVar41 = puVar14[3];
    uVar40 = puVar14[2];
    uVar39 = puVar14[1];
    uVar38 = *puVar14;
    puVar14 = (undefined4 *)(iVar23 + 0xc0U & 0xfffffff0);
    puVar14[3] = puVar13[3];
    puVar14[2] = uVar33;
    puVar14[1] = uVar32;
    *puVar14 = uVar22;
    puVar13 = (undefined4 *)(iVar23 + 0xd0U & 0xfffffff0);
    puVar13[3] = uVar37;
    puVar13[2] = uVar36;
    puVar13[1] = uVar35;
    *puVar13 = uVar34;
    puVar13 = (undefined4 *)(iVar23 + 0xe0U & 0xfffffff0);
    puVar13[3] = uVar41;
    puVar13[2] = uVar40;
    puVar13[1] = uVar39;
    *puVar13 = uVar38;
  }
  return;
}


