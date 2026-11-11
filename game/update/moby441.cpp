// game/update/moby441.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x384148-0x384adc
// shared update function UpdateMoby_a_lot_7; registered for oClasses 441, 442, 443, 445, 448, 449, 450, 451, 464, 465
#include "game/update/moby441.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0384148 (0x34 bytes)
int FUN_00384148(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xbc) = 1;
  iVar1 = TransitionMovement(0x32,1);
  return iVar1;
}


// 0x038417c (0x14 bytes)
void M465_0038417c(void)

{
  DAT_00841efc = 0x10000;
  return;
}


// shared update function, registered for oClasses 441, 442, 443, 445, 448, 449, 450, 451, 464, 465
// 0x03841e8 (0x7cc bytes)
/* Moby 441
   Moby 442
   Moby 443
   Moby 445
   Moby 448
   Moby 449
   Moby 450
   Moby 451
   Moby 464
   Moby 465 */

void UpdateMoby_441(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  f32 fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar11;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  undefined4 local_a0 [2];
  longlong local_98;
  
  bVar1 = moby->state;
  pfVar3 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return;
    }
    dVar16 = -1.5707963705062866;
    dVar15 = 1.5707963705062866;
    dVar13 = (double)MB_randRangeFloat
                               (g_FrameTime * -1.5707964,g_FrameTime * 1.5707964
                               );
    pfVar3[4] = (float)dVar13;
    dVar13 = (double)MB_randRangeFloat
                               ((float)((double)g_FrameTime * dVar16),
                                (float)((double)g_FrameTime * dVar15));
    pfVar3[5] = (float)dVar13;
    dVar13 = (double)MB_randRangeFloat
                               ((float)(longlong)(animationSpeed * 90.5),
                                (float)(longlong)(animationSpeed * 150.5));
    pfVar3[6] = (float)(int)dVar13;
    moby->state = '\x02';
  }
  else if (2 < bVar1) {
    if (3 < bVar1) {
      return;
    }
    pfVar3[2] = -(DAT_0071f418 * 10.8 * 0.5 - pfVar3[2]);
    fVar2 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar3;
    (moby->pos).y = (moby->pos).y + pfVar3[1];
    (moby->pos).z = (moby->pos).z + pfVar3[2];
    dVar13 = (double)FastWrapRot(fVar2,pfVar3[4]);
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)FastWrapRot((moby->rotation).y,pfVar3[5]);
    fVar4 = (moby->pos).x;
    (moby->rotation).y = (float)dVar13;
    uVar6 = (int)fVar4 >> 0x1f;
    iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
    if ((((0x40ffffff < iVar12) &&
         (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
         iVar11 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, 0x40ffffff < iVar11)) &&
        (fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
        0x40ffffff < (int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6))) &&
       ((iVar12 < 0x43fa0001 && (iVar11 < 0x43fa0001)))) {
      return;
    }
    DeleteMoby(moby);
    return;
  }
  pfVar3[2] = -(DAT_0071f418 * 10.8 * 0.5 - pfVar3[2]);
  fVar2 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *pfVar3;
  (moby->pos).y = (moby->pos).y + pfVar3[1];
  (moby->pos).z = (moby->pos).z + pfVar3[2];
  dVar13 = (double)FastWrapRot(fVar2,pfVar3[4]);
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)FastWrapRot((moby->rotation).y,pfVar3[5]);
  fVar4 = (moby->pos).x;
  (moby->rotation).y = (float)dVar13;
  uVar6 = (int)fVar4 >> 0x1f;
  dVar13 = 8.0;
  iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
  if (((iVar12 < 0x41000000) ||
      (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
      iVar11 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, iVar11 < 0x41000000)) ||
     ((0x43fa0000 < iVar11 || 0x43fa0000 < iVar12 ||
      (fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
      0x43fa0000 < (int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6))))) {
    DeleteMoby(moby);
  }
  else {
    iVar12 = MB_randInt(3);
    if (iVar12 == 0) {
      local_a0[0] = 0x2f000000;
      local_a0[1] = 0x3f000000;
      lVar8 = MB_randInt(2);
      dVar15 = (double)animationSpeed;
      uVar14 = 0x41186a0000000000;
      uVar5 = *(undefined4 *)((int)local_a0 + (int)(lVar8 << 2));
      local_98 = (longlong)(int)(dVar15 * 20.5);
      MB_randRange
                (local_98,dVar15,0x41186a0000000000,(int)(dVar15 * 15.5),(int)(dVar15 * 20.5));
      local_98 = (longlong)(int)(animationSpeed * 30.5);
      MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
      dVar13 = (double)MB_randRangeFloat((float)dVar13,16.0);
      SpawnPart_11
                (uVar14,(double)(float)(dVar13 * (double)g_FrameTime),
                 (longlong)(int)moby + 0x10,local_e0,0x2f3f3f7f,uVar5);
    }
    fVar4 = (moby->pos).z;
    uVar6 = (int)fVar4 >> 0x1f;
    if ((int)((uVar6 >> 1 ^ (uint)fVar4) - uVar6) < 0x41733333) {
      iVar12 = 0;
      if (0 < DAT_00841f20) {
        dVar13 = -3.0;
        dVar15 = 3.0;
        do {
          MB_randRot();
          MB_randRangeFloat((float)dVar13,(float)dVar15);
          MB_randRangeFloat((float)dVar13,(float)dVar15);
          uVar7 = DAT_00841f28;
          uVar5 = DAT_00841f24;
          local_98 = (longlong)(DAT_00841f38 << 1);
          dVar16 = (double)MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f38,(float)local_98);
          uVar14 = FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          local_98 = (longlong)(DAT_00841f3c << 1);
          dVar16 = (double)MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f3c,(float)local_98);
          uVar9 = FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          local_98 = (longlong)(DAT_00841f40 << 1);
          dVar16 = (double)MB_randRangeFloat
                                     ((float)(longlong)DAT_00841f40,(float)local_98);
          uVar10 = FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
          SpawnPart_2(local_b0,local_d0,local_c0,uVar5,uVar7,uVar14,uVar9,uVar10);
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00841f20);
      }
      moby->state = '\x03';
    }
  }
  return;
}


// 0x03849b8 (0x124 bytes)
MobyInstance *
M465_003849b8
          (int param_1,MOBY_OCLASSES param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  uint uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  f32 local_24;
  
  pMVar5 = CreateMoby(param_2);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->drawDistance = 0xff;
    pMVar4 = g_heroMobyPtr;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar5->modeBits = pMVar5->modeBits | CAN_BE_DAMAGED;
    uVar2 = pMVar4->color;
    uVar3 = pMVar4->light;
    (pMVar5->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar5->color = uVar2;
    pMVar5->light = uVar3;
    (pMVar5->rotation).y = fVar1;
    (pMVar5->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar5->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar5,param_3,&local_40);
    GetBonePosition(param_1,param_4,&local_30);
    (pMVar5->pos).x = local_30 - local_40;
    (pMVar5->pos).y = local_2c - local_3c;
    (pMVar5->pos).z = local_28 - local_38;
    (pMVar5->pos).w = local_24;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


