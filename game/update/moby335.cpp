// game/update/moby335.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x349ae4-0x34a228
// shared update function UpdateMoby_{335_337_338}; registered for oClasses 335, 337, 338
#include <stdio.h>
#include "game/update/moby335.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby291.h"
#include "game/update/moby327.h"
#include "idol/fastfunc.h"

// 0x0349ae4 (0x14 bytes)
void M338_00349ae4(void)

{
  DAT_0083fefc = 0x10000;
  return;
}


// shared update function, registered for oClasses 335, 337, 338
// 0x0349b38 (0x6f0 bytes)
// strings: 006564ac: 'ammo was:%d is now:%d\n' | 006564c4: 'boost count was:%d is now:%d\n' | 006564e4: 'HP was:%f ' | 006564f4: ' is now:%f\n' | 00656504: 'Unknown type of item moby: %d\n'

/* Moby 335
   Moby 337
   Moby 338 */

void UpdateMoby_335(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  MOBY_OCLASSES MVar3;
  short sVar4;
  void *pvVar5;
  MobyClass *pMVar6;
  float fVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar5 = moby->pVar;
  if (pvVar5 == (void *)0x0) {
    return;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    iVar9 = FastDecTimerS32((int)pvVar5 + 0x40);
    if (iVar9 != 0) {
      moby->state = '\x04';
      (moby->pos).x = *(f32 *)((int)pvVar5 + 0x20);
      pMVar6 = moby->pClass;
      (moby->pos).y = *(f32 *)((int)pvVar5 + 0x24);
      (moby->pos).z = *(f32 *)((int)pvVar5 + 0x28);
      (moby->pos).w = *(f32 *)((int)pvVar5 + 0x2c);
      moby->collision = pMVar6->collision;
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x04') {
    fVar22 = moby->pClass->gScale;
    fVar7 = DAT_0071f408 * 0.08 * (fVar22 - moby->scale) + moby->scale;
    moby->scale = fVar7;
    if (fVar22 - fVar7 < 0.002) {
      moby->scale = fVar22;
      moby->state = '\x01';
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x03') {
    iVar9 = FastDecTimerS32((int)pvVar5 + 4);
    if (iVar9 != 0) {
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
    goto LAB_0034a01c;
  }
  if (uVar1 == '\x02') {
    fVar22 = moby->scale * (DAT_0071f408 * -0.089999974 + 1.0);
    moby->scale = fVar22;
    if (fVar22 < 0.0015) {
      if (*(int *)((int)pvVar5 + 0x3c) == 0) {
        DeleteMoby(moby);
        return;
      }
      *(int *)((int)pvVar5 + 0x40) = *(int *)((int)pvVar5 + 0x3c);
      (moby->pos).x = 2.0;
      (moby->pos).y = 2.0;
      (moby->pos).z = 2.0;
      moby->collision = (ushort *)0x0;
      moby->state = '\x05';
    }
    goto LAB_0034a01c;
  }
  if (uVar1 != '\x01') {
    if (uVar1 == '\0') {
      fVar2 = (moby->pos).x;
      moby->state = '\x01';
      *(f32 *)((int)pvVar5 + 0x20) = fVar2;
      *(f32 *)((int)pvVar5 + 0x24) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x28) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x10) = (moby->rotation).x;
      *(f32 *)((int)pvVar5 + 0x14) = (moby->rotation).y;
      *(f32 *)((int)pvVar5 + 0x18) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar5 + 4) = 0;
      if (*(int *)((int)pvVar5 + 0x44) < 1) {
        *(float *)((int)pvVar5 + 0x44) = (moby->scale * 2.3) / moby->pClass->gScale;
      }
      if (*(int *)((int)pvVar5 + 0x48) < 1) {
        *(float *)((int)pvVar5 + 0x48) = (moby->scale * 0.06) / moby->pClass->gScale;
      }
    }
    goto LAB_0034a01c;
  }
  if (DAT_0096b2d0 == 0) goto LAB_0034a01c;
  dVar11 = (double)MB_BSphereGap((longlong)(int)moby,DAT_0096b2d0);
  uVar8 = (ulonglong)DAT_0096b2da;
  if (((0.0 < dVar11) ||
      (fVar7 = (moby->pos).y - *(float *)(DAT_0096b2d0 + 0x14),
      fVar22 = (moby->pos).x - *(float *)(DAT_0096b2d0 + 0x10),
      *(float *)((int)pvVar5 + 0x44) <= SQRT(fVar22 * fVar22 + fVar7 * fVar7))) ||
     (*(float *)((int)pvVar5 + 0x48) <= ABS(*(float *)(DAT_0096b2d0 + 0x18) - (moby->pos).z)))
  goto LAB_0034a01c;
  MVar3 = moby->oClass;
  if ((short)MVar3 < 0x151) {
    if (MVar3 == 0x14f) {
      sVar4 = *(short *)((int)pvVar5 + 2);
      lVar10 = (ulonglong)DAT_0096b2d6 +
               (longlong)sVar4 +
               (ZERO_MASK((-1 - sVar4)) & (ulonglong)DAT_0096b2d8 - (longlong)sVar4);
      lVar10 = lVar10 + ((longlong)((ulonglong)DAT_0096b2d7 - (longlong)(int)lVar10) >> 0x3f &
                        (ulonglong)DAT_0096b2d7 - lVar10);
      printf("ammo was:%d is now:%d\n",(ulonglong)DAT_0096b2d6,lVar10);
      DAT_0096b2d6 = (byte)lVar10;
    }
    else {
LAB_00349e8c:
      printf("Unknown type of item moby: %d\n",MVar3);
    }
  }
  else if ((short)MVar3 < 0x152) {
    printf("HP was:%f ",(double)DAT_0096b2dc);
    if (*(short *)((int)pvVar5 + 2) == -1) {
      dVar11 = (double)DAT_0096b2e4;
    }
    else {
      dVar11 = (double)FastIntToDouble();
    }
    DAT_0096b2dc = (float)((double)DAT_0096b2dc + dVar11);
    dVar11 = (double)DAT_0096b2dc;
    if ((double)DAT_0096b2e0 < (double)DAT_0096b2dc) {
      DAT_0096b2dc = DAT_0096b2e0;
      dVar11 = (double)DAT_0096b2e0;
    }
    printf(" is now:%f\n",dVar11);
  }
  else {
    if (0x152 < (short)MVar3) goto LAB_00349e8c;
    sVar4 = *(short *)((int)pvVar5 + 2);
    lVar10 = (ulonglong)DAT_0096b2d9 +
             (longlong)sVar4 +
             (ZERO_MASK((-1 - sVar4)) & (ulonglong)DAT_0096b2db - (longlong)sVar4);
    lVar10 = lVar10 + ((longlong)(uVar8 - (longlong)(int)lVar10) >> 0x3f & uVar8 - lVar10);
    printf("boost count was:%d is now:%d\n",uVar8,lVar10);
    DAT_0096b2da = (byte)lVar10;
  }
  moby->state = '\x02';
  fVar22 = DAT_0071f408 * 0.20000005;
  moby->collision = (ushort *)0x0;
  moby->scale = moby->scale * (fVar22 + 1.0);
LAB_0034a01c:
  if (moby->state != '\x05') {
    if (((*(byte *)((int)pvVar5 + 1) & 1) == 0) || (DAT_0083be04 == 0)) {
      dVar11 = (double)*(float *)((int)pvVar5 + 0x28);
    }
    else {
      dVar11 = (double)FUN_00342d38((longlong)(int)moby + 0x10);
    }
    if (*(int *)((int)pvVar5 + 8) != 0) {
      dVar12 = (double)FastIntToDouble(worldUpdateTime);
      fVar22 = MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 8) * DAT_0071f408) * dVar12));
      dVar12 = (double)FastWrapRot(*(float *)((int)pvVar5 + 0x18),fVar22);
      (moby->rotation).z = (float)dVar12;
    }
    dVar18 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar17 = 0.008333025500178337;
    dVar12 = -0.16666656732559204;
    dVar20 = 3.141592502593994;
    dVar21 = -3.141592502593994;
    if (*(int *)((int)pvVar5 + 0xc) != 0) {
      dVar13 = (double)FastIntToDouble(worldUpdateTime);
      fVar22 = MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 0xc) * DAT_0071f408) * dVar13));
      dVar15 = (double)fVar22;
      dVar13 = (double)(float)(dVar20 - dVar15);
      if (dVar15 - (double)(float)(dVar20 - dVar15) < 0.0) {
        dVar13 = dVar15;
      }
      dVar14 = (double)(float)(dVar21 - dVar15);
      if ((double)(float)(dVar21 - dVar15) - dVar13 < 0.0) {
        dVar14 = dVar13;
      }
      dVar13 = (double)(float)(dVar14 * dVar14);
      dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
      dVar15 = (double)(float)(dVar13 * dVar16);
      (moby->pos).z =
           (float)((double)*(float *)((int)pvVar5 + 0x30) *
                   (double)(float)((double)(float)(dVar13 * dVar15) * dVar19 +
                                  (double)(float)(dVar15 * dVar18 +
                                                 (double)(float)(dVar16 * dVar17 +
                                                                (double)(float)((double)(float)(
                                                  dVar13 * dVar14) * dVar12 + dVar14)))) + dVar11);
    }
    if (*(int *)((int)pvVar5 + 0x34) != 0) {
      dVar11 = (double)FastIntToDouble(worldUpdateTime);
      fVar22 = MB_WrapRot
                         ((float)((double)(*(float *)((int)pvVar5 + 0x34) * DAT_0071f408) * dVar11))
      ;
      dVar13 = (double)fVar22;
      dVar11 = (double)(float)(dVar20 - dVar13);
      if (dVar13 - (double)(float)(dVar20 - dVar13) < 0.0) {
        dVar11 = dVar13;
      }
      dVar20 = (double)(float)(dVar21 - dVar13);
      if ((double)(float)(dVar21 - dVar13) - dVar11 < 0.0) {
        dVar20 = dVar11;
      }
      dVar11 = (double)(float)(dVar20 * dVar20);
      dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar20));
      dVar21 = (double)(float)(dVar11 * dVar13);
      dVar11 = (double)FastWrapRot
                                 (*(float *)((int)pvVar5 + 0x14),
                                  *(float *)((int)pvVar5 + 0x38) *
                                  (float)((double)(float)(dVar11 * dVar21) * dVar19 +
                                         (double)(float)(dVar21 * dVar18 +
                                                        (double)(float)(dVar13 * dVar17 +
                                                                       (double)(float)((double)(
                                                  float)(dVar11 * dVar20) * dVar12 + dVar20)))));
      (moby->rotation).y = (float)dVar11;
    }
  }
  return;
}


