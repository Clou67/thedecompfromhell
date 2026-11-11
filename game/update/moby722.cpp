// game/update/moby722.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x434898-0x435170
#include "game/update/moby722.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby639.h"
#include "idol/fastfunc.h"
#include "sdk/lUnk.h"

// 0x0434898 (0x1c0 bytes)
MobyInstance *
FUN_00434898(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 in_stack_00000074;
  
  pMVar3 = CreateMoby(0x2d2);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->drawDistance = 0x7f;
    fVar1 = pMVar3->scale;
    puVar2[4] = param_1;
    pMVar3->updateDistance = '\x7f';
    pMVar3->enabled = '\x01';
    pMVar3->scale = fVar1 * 0.5;
    SetColorOfMoby(pMVar3,0x7f,0x7f,0x7f);
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).y = (float)dVar4;
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    uStack00000054 = (undefined4)param_5;
    uStack0000005c = (undefined4)param_6;
    puVar2[5] = in_stack_00000074;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    *puVar2 = uStack00000050;
    puVar2[1] = uStack00000054;
    puVar2[2] = uStack00000058;
    puVar2[3] = uStack0000005c;
    SpawnPart_26(0x4109a28000000000,pMVar3);
    SpawnPart_26(0x40fc32c000000000,pMVar3);
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x0434a88 (0x3d4 bytes)
uint M722_00434a88
               (double param_1,double param_2,MobyInstance *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  GPiece<16> local_100;
  undefined4 local_f0 [12];
  longlong local_c0;
  
  dVar10 = 0.0;
  iVar7 = 0;
  dVar11 = 8.0;
  dVar12 = 10.0;
  dVar13 = (double)(float)(param_1 * 400000.0);
  dVar14 = 15.5;
  dVar15 = 20.5;
  dVar16 = 25.5;
  dVar17 = 30.5;
  uStack00000040 = param_5;
  uStack00000048 = param_6;
  do {
    dVar8 = (double)MB_randRangeFloat((float)dVar11,(float)dVar12);
    local_f0[0] = 0x4f008fff;
    local_f0[1] = 0x4f008fff;
    local_f0[3] = 0x4f006fff;
    dVar9 = (double)(float)(dVar8 * (double)g_FrameTime);
    local_f0[2] = 0x4f007fff;
    local_f0[4] = 0x2fffffff;
    local_f0[5] = 0x2fffffff;
    local_f0[6] = 0x2f005f7f;
    local_f0[7] = 0x2f004f7f;
    local_f0[8] = 0x2f003f7f;
    local_f0[9] = 0x2f00004f;
    local_f0[10] = 0x2f000000;
    local_f0[0xb] = 0x3f000000;
    lVar5 = MB_randInt(dVar8,(double)g_FrameTime,6);
    uVar3 = *(undefined4 *)((int)local_f0 + (int)(lVar5 << 2));
    lVar5 = MB_randInt(6);
    uVar4 = *(undefined4 *)((int)local_f0 + (int)(lVar5 << 2) + 0x18);
    iVar1 = (int)((double)animationSpeed * dVar15);
    local_c0 = (longlong)iVar1;
    MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
    iVar1 = (int)((double)animationSpeed * dVar17);
    local_c0 = (longlong)iVar1;
    MB_randRange((int)((double)animationSpeed * dVar16),iVar1);
    uVar6 = SpawnPart_11
                      (dVar13,(double)(float)(dVar9 * param_1),&stack0x00000040,local_100,uVar3,
                       uVar4);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  if (param_3 != (MobyInstance *)0x0) {
    local_c0 = (longlong)(int)((double)animationSpeed * dVar15);
    FUN_001d4d88((double)(float)(param_1 * 2.0),param_3,&stack0x00000040,local_100,0x30,
                 (int)((double)animationSpeed * dVar15),0x7f,0,0x40);
    local_c0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88((double)(float)(param_1 * 1.5),param_3,&stack0x00000040,local_100);
    bVar2 = param_3->state;
    uVar6 = (uint)bVar2;
    if ((bVar2 != 0xfd && bVar2 != 0xfe) && (param_8 != -1)) {
      uVar6 = PlayMobySound(param_8,0,param_3);
    }
  }
  if (param_2 != dVar10) {
    dVar11 = 13.0;
    if (dVar10 - param_2 < 0.0) {
      dVar11 = param_2;
    }
    DAT_0085a004 = (float)dVar11;
    DAT_0085a008 = (float)dVar11;
    DAT_0085a000 = (float)dVar11;
    uVar6 = FUN_003fda38(&DAT_00859fe0,&stack0x00000040,0,0);
  }
  return uVar6;
}


// 0x0434e70 (0x300 bytes)
/* Moby 722 */

void UpdateMoby_722(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  GPiece<16> local_70;
  GPiece<56> local_60;
  
  lVar6 = (longlong)(int)moby;
  pfVar1 = (float *)moby->pVar;
  pfVar1[2] = pfVar1[2] - 2.0 / (animationSpeed * 10.0 * animationSpeed * 10.0);
  fVar2 = (moby->pos).x + *pfVar1;
  (moby->pos).x = fVar2;
  fVar3 = (moby->pos).y + pfVar1[1];
  (moby->pos).y = fVar3;
  fVar4 = (moby->pos).z + pfVar1[2];
  (moby->pos).z = fVar4;
  uVar9 = 0;
  if (((fVar3 < 0.0 || fVar2 < 0.0) || (fVar4 < 0.0)) ||
     (64.0 < SQRT((fVar2 - GameCamera.posX) * (fVar2 - GameCamera.posX) +
                  (fVar3 - GameCamera.posY) * (fVar3 - GameCamera.posY)))) {
    DeleteMoby(moby);
    return;
  }
  iVar7 = FastDecTimerS32(pfVar1 + 5);
  if (iVar7 != 0) {
    M722_00434a88(0x3fe0000000000000,uVar9,lVar6);
    DeleteMoby(moby);
    return;
  }
  iVar7 = CollLine(local_70,lVar6 + 0x10,0,pfVar1[4],local_60);
  fVar2 = g_CollOutput.ip.x;
  if (iVar7 != 0) {
    (moby->pos).x = g_CollOutput.ip.x;
    fVar3 = g_CollOutput.ip.y;
    (moby->pos).y = g_CollOutput.ip.y;
    fVar4 = g_CollOutput.ip.z;
    (moby->pos).z = g_CollOutput.ip.z;
    fVar5 = g_CollOutput.ip.w;
    (moby->pos).w = g_CollOutput.ip.w;
    M722_00434a88
              (0x3fe0000000000000,uVar9,lVar6,&DAT_00434e5c,CONCAT44(fVar2,fVar3),
               CONCAT44(fVar4,fVar5));
    DeleteMoby(moby);
    return;
  }
  uVar8 = 0x3fe0000000000000;
  iVar7 = CollMobySphere
                    (0x3fe0000000000000,lVar6 + 0x10,&DAT_00434e5c,0x10,pfVar1[4],local_60);
  if (iVar7 == 0) {
    return;
  }
  M722_00434a88(uVar8,uVar9,lVar6);
  DeleteMoby(moby);
  return;
}


