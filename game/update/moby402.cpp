// game/update/moby402.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x362820-0x362dcc
#include <stdio.h>
#include "game/update/moby402.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby291.h"
#include "game/update/moby327.h"

// 0x0362820 (0x110 bytes)
MobyInstance * FUN_00362820(int param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x192);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->scale = pMVar3->pClass->gScale * 0.1;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    uVar1 = param_3[3];
    puVar2[4] = param_1;
    puVar2[3] = uVar1;
    *(int *)(*(int *)(param_1 + 0x78) + 0xc) = *(int *)(*(int *)(param_1 + 0x78) + 0xc) + 1;
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x0362968 (0x464 bytes)
// strings: 00656690: '402:Moby wandered out of world\n'

/* Moby 402 */

void UpdateMoby_402(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_r6;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  GPiece<48> auStack_70;
  
  lVar7 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar4 = (float *)moby->pVar;
    iVar11 = 0;
    fVar5 = pfVar4[4];
    if (((fVar5 != 0.0) && (*(short *)((int)fVar5 + 0xa6) == 0x178)) &&
       (*(char *)((int)fVar5 + 0x20) != -3 && *(char *)((int)fVar5 + 0x20) != -2)) {
      iVar11 = *(int *)((int)fVar5 + 0x78);
    }
    moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
    if (pfVar4 != (float *)0x0) {
      pfVar4[5] = (float)((int)pfVar4[5] + 1);
      dVar16 = 1.0;
      SetCollDamIn(0x3ff0000000000000,auStack_70,lVar7,0x30000,in_r6,pfVar4);
      uVar15 = 0x3fe8000000000000;
      lVar10 = lVar7 + 0x10;
      CollMobySphere(0x3fe8000000000000,lVar10);
      uVar8 = CollSphere(uVar15,lVar10);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x10) < (int)pfVar4[5])) {
        if (*(int *)(iVar11 + 0xc) < 0x1f) {
          *(float *)(iVar11 + 0x10) = pfVar4[5];
        }
        else {
          uVar8 = uVar8 | 4;
          *(undefined4 *)(iVar11 + 0x10) = 0;
        }
      }
      iVar9 = MB_damage(lVar7,0xffffffffffffffff,0);
      dVar12 = (double)(moby->pos).z;
      if (iVar9 != 0) {
        uVar8 = uVar8 | 2;
        g_CollOutput.pMoby = (MobyInstance *)0x0;
      }
      if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
         (((MVar3 = (g_CollOutput.pMoby)->oClass,
           MVar3 == (ROCKET_0100|BEIGE_SHIP) || MVar3 == (ROCKET_0100|YELLOW_SHIP) ||
           (MVar3 == 0x17a)) || (MVar3 == 0x179)))) {
        uVar8 = uVar8 & 0xfffffffe;
      }
      if (uVar8 == 0) {
        dVar13 = dVar12;
        if (DAT_0083be04 != 0) {
          dVar13 = (double)FUN_00342d38(lVar10);
          dVar12 = (double)(moby->pos).z;
        }
        dVar14 = (double)pfVar4[2];
        if ((double)(float)(dVar12 + dVar14) < dVar13) {
          fVar5 = (float)((double)(float)(dVar13 - (double)(float)(dVar12 + dVar14)) *
                          0.20000000298023224 + dVar14);
          dVar14 = (double)fVar5;
          pfVar4[2] = fVar5;
          *pfVar4 = *pfVar4 * 0.9;
          pfVar4[1] = pfVar4[1] * 0.9;
          if (moby->state == '\0') {
            PlayMobySound(0,0,moby);
            moby->state = moby->state + '\x01';
            dVar14 = (double)pfVar4[2];
          }
        }
        dVar16 = (double)(float)((double)DAT_0071f408 * -0.004999995231628418 + dVar16);
        fVar1 = (float)((double)*pfVar4 * dVar16);
        fVar2 = (float)((double)pfVar4[1] * dVar16);
        *pfVar4 = fVar1;
        pfVar4[1] = fVar2;
        fVar5 = (float)(dVar14 * dVar16 - (double)(g_FrameTimeSq * 9.8));
        pfVar4[2] = fVar5;
        fVar6 = SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
        if (0.6 < fVar6) {
          fVar6 = 0.6 / fVar6;
          fVar1 = fVar1 * fVar6;
          *pfVar4 = fVar1;
          pfVar4[1] = fVar2 * fVar6;
          pfVar4[2] = fVar5 * fVar6;
        }
        fVar1 = (moby->pos).x + fVar1;
        (moby->pos).x = fVar1;
        fVar5 = (moby->pos).y + pfVar4[1];
        (moby->pos).y = fVar5;
        fVar2 = (moby->pos).z + pfVar4[2];
        (moby->pos).z = fVar2;
        if ((((2.0 <= fVar1 && 2.0 <= fVar2) && (2.0 <= fVar5)) &&
            (fVar1 <= 510.0 && fVar2 <= 510.0)) && (fVar5 <= 510.0)) {
          return;
        }
        (moby->pos).x = 3.0;
        (moby->pos).y = 3.0;
        (moby->pos).z = 3.0;
        printf("402:Moby wandered out of world\n");
        DeleteMoby(moby);
      }
      else {
        if (moby->enabled != '\0') {
          MB_genericExplosion
                    (0x4000000000000000,dVar16,0x4010000000000000,0x4000000000000000,
                     0x4022000000000000,dVar16,0x402e000000000000,lVar7,pfVar4,0,1,
                     0xffffffffffffffff,0x14,5,0x10);
        }
        if (iVar11 != 0) {
          *(int *)(*(int *)((int)pfVar4[4] + 0x78) + 0xc) =
               *(int *)(*(int *)((int)pfVar4[4] + 0x78) + 0xc) + -1;
        }
        DeleteMoby(moby);
      }
    }
  }
  return;
}


