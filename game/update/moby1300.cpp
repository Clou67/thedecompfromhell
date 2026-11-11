// game/update/moby1300.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x242738-0x242ba4
#include "game/update/moby1300.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby13.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x0242738 (0x454 bytes)
// inlined: FastRSqrt @0x242a58
// strings: 00242708: '?&ff_q333_q@' (raw) | 0024270c: '?333_q@' (raw)

MobyInstance *
MB_SpawnBolts(MobyInstance *moby,Vec4 *param_2,undefined4 *param_3,uint param_4,uint boltValue,
             undefined1 param_6)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float angle;
  float fVar7;
  uint uVar8;
  MobyInstance *boltMoby;
  MobyInstance *pMVar9;
  undefined2 uVar11;
  int iVar10;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  if (boltValue == 0x32) {
    boltMoby = CreateMoby(BOLT_CIRCLENUT);
    fVar3 = 0.6;
  }
  else if (boltValue == 0x14) {
    boltMoby = CreateMoby(BOLT_STARNUT);
    fVar3 = 0.75;
  }
  else if (boltValue == 5) {
    boltMoby = CreateMoby(BOLT_HEXNUT);
    fVar3 = 0.7;
  }
  else {
    boltMoby = CreateMoby(BOLT);
    fVar3 = 0.65;
  }
  if (boltMoby == (MobyInstance *)0x0) {
    g_boltCount = g_boltCount + boltValue;
    g_totalBoltsCollected = g_totalBoltsCollected + boltValue;
  }
  else {
    pvVar1 = boltMoby->pVar;
    *(undefined1 *)((int)pvVar1 + 0x40) = param_6;
    pMVar9 = moby;
    if (moby != (MobyInstance *)0x0) {
      pMVar2 = moby->field80_0xb8;
      while (pMVar2 != (MobyInstance *)0x0) {
        pMVar9 = pMVar9->field80_0xb8;
        pMVar2 = pMVar9->field80_0xb8;
      }
    }
    boltMoby->field80_0xb8 = pMVar9;
    boltMoby->field46_0x73 = '\x14';
    boltMoby->updateDistance = '@';
    boltMoby->drawDistance = 0x40;
    boltMoby->enabled = '\x01';
    boltMoby->state = '\x01';
    boltMoby->modeBits = boltMoby->modeBits | LOCK_ROTATION;
    boltMoby->scale = boltMoby->pClass->gScale * fVar3;
    FastEulerToMtx(&boltMoby->transform,&boltMoby->rotation);
    if ((moby->modeBits & HAS_SPECIAL_VARS) == NONE) {
      uVar8 = moby->light;
      boltMoby->color = moby->color;
      boltMoby->light = uVar8;
    }
    else {
      iVar10 = *(int *)((int)moby->pVar + 0xc);
      if (iVar10 == 0) {
        uVar8 = moby->light;
        boltMoby->color = moby->color;
        boltMoby->light = uVar8;
      }
      else {
        SetColorOfMoby
                  (boltMoby,(ulonglong)*(byte *)(iVar10 + 4),(ulonglong)*(byte *)(iVar10 + 5),
                   (ulonglong)*(byte *)(iVar10 + 6));
      }
    }
    uVar11 = MB_randRange(0,(int)(animationSpeed * 600.5));
    *(undefined2 *)((int)pvVar1 + 0x6e) = uVar11;
    *(undefined2 *)((int)pvVar1 + 0x6c) = 0xffff;
    (boltMoby->pos).x = param_2->x;
    (boltMoby->pos).y = param_2->y;
    (boltMoby->pos).z = param_2->z;
    (boltMoby->pos).w = param_2->w;
    *(undefined4 *)((int)pvVar1 + 0x20) = *param_3;
    *(undefined4 *)((int)pvVar1 + 0x24) = param_3[1];
    *(undefined4 *)((int)pvVar1 + 0x28) = param_3[2];
    *(undefined4 *)((int)pvVar1 + 0x2c) = param_3[3];
    iVar10 = MB_randInt(2);
    if (iVar10 != 0) {
      *(byte *)((int)pvVar1 + 0x55) = *(byte *)((int)pvVar1 + 0x55) | 1;
    }
    dVar12 = (double)MB_randRot();
    *(float *)((int)pvVar1 + 0x50) = (float)dVar12;
    dVar12 = (double)MB_randRot();
    *(float *)((int)pvVar1 + 0x58) = (float)dVar12;
    *(f32 *)((int)pvVar1 + 0x68) = (boltMoby->pos).z;
    dVar15 = 0.0;
    dVar12 = (double)MB_randRangeFloat(0.0,DAT_0078e0b0);
    fVar3 = (moby->pos).x - (boltMoby->pos).x;
    fVar5 = (moby->pos).z - (boltMoby->pos).z;
    fVar6 = (moby->pos).y - (boltMoby->pos).y;
    dVar16 = 0.01745329238474369;
    fVar4 = fVar5 * *(float *)((int)pvVar1 + 0x20) - fVar3 * *(float *)((int)pvVar1 + 0x28);
    fVar5 = fVar6 * *(float *)((int)pvVar1 + 0x28) - fVar5 * *(float *)((int)pvVar1 + 0x24);
    fVar3 = fVar3 * *(float *)((int)pvVar1 + 0x24) - fVar6 * *(float *)((int)pvVar1 + 0x20);
    angle = (float)(dVar12 * 0.01745329238474369) * g_FrameTime;
    fVar6 = fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4;
    dVar12 = dVar15;
    dVar13 = dVar15;
    dVar14 = dVar15;
    if ((double)SQRT(fVar6) != dVar15) {
      fVar7 = 1.0 / SQRT(fVar6);
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      fVar7 = -(fVar6 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
      dVar12 = (double)(fVar5 * fVar7);
      dVar13 = (double)(fVar4 * fVar7);
      dVar14 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)pvVar1 + 0x30) = (float)dVar12;
    *(float *)((int)pvVar1 + 0x34) = (float)dVar13;
    *(float *)((int)pvVar1 + 0x38) = (float)dVar14;
    *(undefined4 *)((int)pvVar1 + 0x3c) = 0;
    MB_AxisAngleToQuat(angle,(float *)((int)pvVar1 + 0x30),(float *)((int)pvVar1 + 0x30));
    if ((param_4 & 2) != 0) {
      dVar12 = dVar15;
      if ((param_4 & 0x10) != 0) {
        dVar13 = (double)MB_randRangeFloat(-30.0,30.0);
        dVar15 = (double)(float)(dVar13 * dVar16);
      }
      M16_00240f38(dVar15,dVar12,boltMoby,g_heroMobyPtr);
    }
    UpdateMobyTransform(boltMoby);
  }
  return boltMoby;
}


// 0x0242b8c (0x14 bytes)
void M1300_00242b8c(void)

{
  DAT_0078e14c = 0x10000;
  return;
}


// 0x0242ba0 (0x4 bytes)
/* Moby 1300 */

MobyInstance * UpdateMoby_1300(MobyInstance *moby)

{
  return moby;
}


