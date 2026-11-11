// game/update/moby83.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x47e100-0x47e760
#include "game/update/moby83.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x047e100 (0x660 bytes)
/* Moby 83 */

void UpdateMoby_83(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  void *pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  GPiece<16> local_90;
  GPiece<64> auStack_80;
  
  dVar18 = 2.0;
  pvVar6 = moby->pVar;
  moby->scale = DAT_0071f408 * 0.1 * (moby->pClass->gScale * 2.0 - moby->scale) + moby->scale;
  if ((((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\x02')) &&
     (moby->animationId != '\x02')) {
    MB_SetAnimation(moby,2,0,10);
  }
  if (DAT_0096b2d0 != 0) {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar4 = fVar1 - *(float *)(DAT_0096b2d0 + 0x14);
    fVar3 = (moby->pos).z;
    fVar7 = fVar2 - *(float *)(DAT_0096b2d0 + 0x10);
    fVar8 = fVar3 - *(float *)(DAT_0096b2d0 + 0x18);
    fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4);
    if ((fVar4 < 60.0) && (moby->enabled != '\0')) {
      fVar1 = *(float *)(DAT_0096b2d0 + 0x14) - fVar1;
      fVar3 = *(float *)(DAT_0096b2d0 + 0x18) - fVar3;
      fVar2 = *(float *)(DAT_0096b2d0 + 0x10) - fVar2;
      fVar7 = -(fVar4 * 0.016666668 - 1.0);
      fVar4 = 0.0;
      if (1.0 - fVar7 < 0.0) {
        fVar7 = 1.0;
      }
      fVar10 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar8 = (g_FrameTime * 1.5 * fVar7) / fVar10;
      fVar7 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar7 = fVar8 * fVar3;
      }
      fVar9 = fVar4;
      if (0.0 - fVar10 < 0.0) {
        fVar9 = fVar8 * fVar1;
      }
      if (0.0 - fVar10 < 0.0) {
        fVar4 = fVar8 * fVar2;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar7 = fVar8 * fVar3;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar9 = fVar8 * fVar1;
      }
      if (fVar10 - 0.0 < 0.0) {
        fVar4 = fVar8 * fVar2;
      }
      *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x68) + fVar7;
      *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 100) + fVar9;
      *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x60) + fVar4;
    }
  }
  if (*(int *)((int)pvVar6 + 0x70) < (int)(animationSpeed * 360.5) + -9) {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x68);
    *(float *)((int)pvVar6 + 0x60) = *(float *)((int)pvVar6 + 0x60) * 0.945;
    *(float *)((int)pvVar6 + 100) = *(float *)((int)pvVar6 + 100) * 0.945;
    *(float *)((int)pvVar6 + 0x68) = *(float *)((int)pvVar6 + 0x68) * 0.945;
    fVar1 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).z;
  }
  else {
    fVar1 = (moby->pos).x + *(float *)((int)pvVar6 + 0x60);
    (moby->pos).x = fVar1;
    fVar2 = (moby->pos).y + *(float *)((int)pvVar6 + 100);
    (moby->pos).y = fVar2;
    fVar3 = (moby->pos).z + *(float *)((int)pvVar6 + 0x68);
    (moby->pos).z = fVar3;
  }
  dVar16 = (double)fVar1;
  dVar15 = (double)fVar2;
  dVar14 = (double)fVar3;
  if (((dVar16 < dVar18) || (1021.0 < dVar16)) ||
     ((dVar15 < dVar18 || (((1021.0 < dVar15 || (dVar14 < dVar18)) || (1021.0 < dVar14)))))) {
    DeleteMoby(moby);
    return;
  }
  iVar13 = *(int *)((int)pvVar6 + 0x74);
  if (((iVar13 != 0) && (*(char *)(iVar13 + 0x20) != -3 && *(char *)(iVar13 + 0x20) != -2)) &&
     (fVar1 = (float)(dVar15 - (double)*(float *)(iVar13 + 0x14)),
     fVar2 = (float)(dVar16 - (double)*(float *)(iVar13 + 0x10)),
     fVar3 = (float)(dVar14 - (double)*(float *)(iVar13 + 0x18)),
     8.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1))) {
    uVar19 = 0x4030000000000000;
    SetCollDamIn(0x4030000000000000,auStack_80,moby,0x30000);
    uVar17 = 0x3ffb333340000000;
    uVar11 = CollMobySphere(0x3ffb333340000000,local_90);
    uVar12 = CollSphere(uVar17,local_90);
    uVar11 = uVar11 | uVar12;
    iVar13 = MB_damage(moby,0xffffffffffffffff,0);
    if ((iVar13 != 0) &&
       (fVar1 = *(float *)((int)pvVar6 + 0x20) - *(float *)(iVar13 + 0x2c),
       *(float *)((int)pvVar6 + 0x20) = fVar1, fVar1 <= 0.0)) {
      uVar11 = uVar11 | 0x2000;
      g_CollOutput.pMoby = (MobyInstance *)0x0;
    }
    if (((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
        ((((((((MVar5 = (g_CollOutput.pMoby)->oClass,
               MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|SEEKER) && MVar5 != 0x504 &&
               (MVar5 != 0x535)) && (MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|SUCKCANNON_0036))) &&
             ((MVar5 != (PLANETBUSTER_MAXIMUS_PART_0500|HANGAR_DOOR_0037) && (MVar5 != 0x538)))) &&
            (MVar5 != ROCKET_0052)) &&
           (((MVar5 != MINE_0053 && (MVar5 != 0x539)) &&
            ((MVar5 != 0x53a &&
             (((MVar5 != 0x191 && (MVar5 != QWARKS_STARFIGHTER_PART_0184)) &&
              (MVar5 != QWARKS_STARFIGHTER_PART_0185)))))))) &&
          ((MVar5 != QWARKS_STARFIGHTER_PART_0186 && (MVar5 != QWARKS_STARFIGHTER_PART_0187)))) &&
         ((MVar5 != QWARKS_STARFIGHTER_PART_0188 &&
          (((MVar5 != QWARKS_STARFIGHTER_PART_0189 && (MVar5 != QWARKS_STARFIGHTER_PART_018A)) &&
           ((MVar5 != QWARKS_STARFIGHTER_PART_018B &&
            (((MVar5 != QWARKS_STARFIGHTER_PART_018C && (MVar5 != QWARKS_STARFIGHTER_PART_018F)) &&
             (MVar5 != QWARKS_STARFIGHTER_PART_0190)))))))))))) && (uVar11 != 0)) {
      if (moby->enabled != '\0') {
        if ((uVar11 & 0x2000) == 0) {
          MB_genericExplosion
                    (0x4010000000000000,uVar19,0x401c000000000000,0x4010000000000000,
                     0x3ff0000000000000,0x3ff0000000000000,0x402e000000000000,moby,
                     (int)pvVar6 + 0x60,0,0,0xffffffffffffffff,0x14,5,0x10);
        }
        else {
          MB_genericExplosion
                    (0,0,0,0,0,0x3ff0000000000000,0,moby,(int)pvVar6 + 0x60,0,3,0,5,2,7);
        }
      }
      DeleteMoby(moby);
      return;
    }
  }
  iVar13 = FastDecTimerS32((int)pvVar6 + 0x70);
  if (iVar13 == 0) {
    return;
  }
  if (moby->enabled != '\0') {
    return;
  }
  DeleteMoby(moby);
  return;
}


