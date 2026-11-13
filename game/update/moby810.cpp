// game/update/moby810.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x46cf30-0x46d4dc
#include "game/update/moby810.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x046cf30 (0x268 bytes)
MobyInstance *
FUN_0046cf30(double param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float *outQuat;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  float fStack00000040;
  float fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float local_50;
  float local_4c;
  float local_48;
  f32 local_44;
  
  pMVar3 = CreateMoby(0x51);
  if (pMVar3 != (MobyInstance *)0x0) {
    fStack00000044 = (float)param_4;
    (pMVar3->pos).y = fStack00000044;
    local_4c = *(float *)((int)param_2 + 0x14);
    fStack0000004c = (f32)param_5;
    (pMVar3->rotation).z = (float)param_1;
    local_4c = fStack00000044 - local_4c;
    (pMVar3->pos).w = fStack0000004c;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    outQuat = (float *)pMVar3->pVar;
    fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    local_50 = fStack00000040 - *(float *)((int)param_2 + 0x10);
    (pMVar3->pos).z = fStack00000048;
    local_44 = fStack0000004c;
    dVar9 = 0.0;
    local_48 = 0.0;
    dVar4 = (double)MB_randRangeFloat(DAT_0071f408 * 0.075,DAT_0071f408 * 0.2);
    dVar6 = (double)SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c);
    fVar1 = (float)(dVar4 / dVar6);
    dVar4 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar4 = (double)(local_50 * fVar1);
    }
    dVar5 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar5 = (double)(local_4c * fVar1);
    }
    dVar7 = dVar9;
    if (dVar9 - dVar6 < 0.0) {
      dVar7 = (double)(local_48 * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar4 = (double)(local_50 * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar5 = (double)(local_4c * fVar1);
    }
    if (dVar6 - dVar9 < 0.0) {
      dVar7 = (double)(local_48 * fVar1);
    }
    local_50 = (float)dVar4;
    local_4c = (float)dVar5;
    local_48 = (float)dVar7;
    dVar4 = (double)MB_randRangeSigned(dVar9,0x3fe921fb60000000,&DAT_00970000);
    MB_RotateQuatAxisAngle((float)dVar4,outQuat,&local_50);
    dVar4 = (double)MB_randRangeFloat(DAT_0071f408 * 0.05,DAT_0071f408 * 0.32);
    outQuat[2] = (float)dVar4;
    uVar8 = 0x3fa1df46a0000000;
    dVar4 = (double)MB_randRangeSigned(dVar9,0x3fa1df46a0000000);
    outQuat[5] = (float)dVar4;
    dVar4 = (double)MB_randRangeSigned(dVar9,uVar8);
    outQuat[6] = (float)dVar4;
    dVar4 = (double)MB_randRangeSigned(dVar9,uVar8);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    outQuat[7] = (float)dVar4;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x1c,0x46cf0c);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = vectorSplatHalfWord(auVar10,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar10,0x10,ZEXT48(outQuat));
    *(undefined2 *)(outQuat + 4) = uVar2;
    outQuat[8] = param_2;
    *(undefined2 *)((int)outQuat + 0x12) = 0xffff;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x046d198 (0x14 bytes)
void M810_0046d198(void)

{
  DAT_00877708 = 0x10000;
  return;
}


// 0x046d1d0 (0x30c bytes)
/* Moby 810 */

void UpdateMoby_810(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_60;
  longlong local_50;
  
  pvVar2 = moby->pVar;
  if (moby->state == 0) {
    local_50 = (longlong)DAT_00877744;
    dVar8 = (double)MB_randRangeFloat((float)(longlong)DAT_00877740,(float)local_50);
    uVar6 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar2 + 0x78) = uVar6;
    dVar8 = (double)MB_randRot();
    *(float *)((int)pvVar2 + 0x60) = (float)dVar8;
    dVar8 = (double)MB_randRot();
    *(float *)((int)pvVar2 + 0x6c) = (float)dVar8;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    iVar7 = FastDecTimerS32((int)pvVar2 + 0x78);
    if (iVar7 != 0) {
      PlayMobySound(0,0,moby);
      local_50 = (longlong)DAT_00877744;
      dVar8 = (double)MB_randRangeFloat((float)(longlong)DAT_00877740,(float)local_50);
      uVar6 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar2 + 0x78) = uVar6;
    }
    dVar12 = 0.01745329238474369;
    dVar11 = (double)(moby->pos).x;
    dVar10 = (double)(moby->pos).y;
    dVar9 = (double)(moby->pos).z;
    dVar8 = (double)FastWrapRot
                              (*(float *)((int)pvVar2 + 0x60),
                               DAT_00877730 * 0.017453292 * g_FrameTime);
    *(float *)((int)pvVar2 + 0x60) = (float)dVar8;
    dVar8 = (double)FastWrapRot
                              (*(float *)((int)pvVar2 + 0x6c),
                               (float)((double)DAT_00877734 * dVar12) * g_FrameTime);
    *(float *)((int)pvVar2 + 0x6c) = (float)dVar8;
    fVar1 = *(float *)((int)pvVar2 + 0x60);
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    fVar5 = fVar1 * fVar3;
    (moby->rotation).y =
         (float)((double)DAT_00877738 * dVar12) *
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
    fVar1 = *(float *)((int)pvVar2 + 0x6c);
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    local_60.x = (float)((double)(moby->pos).x - dVar11);
    local_60.y = (float)((double)(moby->pos).y - dVar10);
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    local_60.w = (moby->pos).w;
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    local_60.z = (float)((double)(moby->pos).z - dVar9);
    fVar5 = fVar1 * fVar3;
    (moby->rotation).x =
         (float)((double)DAT_0087773c * dVar12) *
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar2 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x70,
               (longlong)(int)moby + 0x40);
  }
  return;
}


