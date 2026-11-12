// game/update/moby1633.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2a5158-0x2a5770
#include "game/update/moby1633.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02a5158 (0x168 bytes)
void M1633_002a5158
               (double param_1,double param_2,double param_3,double param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  undefined8 in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = CreateMoby(0x661);
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    puVar1 = (undefined4 *)pMVar3->pVar;
    fStack00000044 = (f32)param_7;
    fStack0000004c = (f32)param_8;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    puVar1[4] = param_5;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x7f;
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = (float)param_4;
    (pMVar3->rotation).z = (float)param_3;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_7 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_8 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = (float)param_1;
    puVar1[3] = (float)param_2;
    auVar5 = loadVectorLeftIndexed(in_LR,0x2a5150);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = vectorSplatHalfWord(auVar5,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,0x14,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 5) = uVar2;
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,0x16,ZEXT48(puVar1));
    *(undefined2 *)((int)puVar1 + 0x16) = uVar2;
    pMVar3->alpha = '@';
    pMVar3->modeBits = pMVar3->modeBits | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD);
    pMVar3->scale = pMVar3->scale * 0.5;
  }
  return;
}


// 0x02a52f8 (0x478 bytes)
// inlined: FastRSqrt @0x2a55d4
/* Moby 1633 */

void UpdateMoby_1633(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> local_a0;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  MobyInstance *local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  MOBY_OCLASSES local_66;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_50;
  
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  uVar4 = (int)moby->scale >> 0x1f;
  fVar3 = moby->pClass->gScale;
  uVar5 = (int)fVar3 >> 0x1f;
  dVar9 = (double)(moby->rotation).z;
  fVar1 = (moby->rotation).y;
  if ((int)((uVar4 >> 1 ^ (uint)moby->scale) - uVar4) < (int)((uVar5 >> 1 ^ (uint)fVar3) - uVar5)) {
    moby->scale = DAT_0071f408 * 0.21 * moby->pClass->gScale + moby->scale;
  }
  local_50 = (longlong)(int)(animationSpeed * 1.5);
  dVar10 = dVar9;
  if ((int)*(short *)((int)pvVar2 + 0x14) <
      (int)(animationSpeed * 35.5) - (int)(animationSpeed * 1.5)) {
    dVar10 = (double)*(float *)((int)pvVar2 + 8);
    fVar1 = *(float *)((int)pvVar2 + 0xc);
  }
  dVar13 = (double)fVar1;
  dVar12 = 4.71238899230957;
  dVar11 = 3.1415927410125732;
  dVar9 = (double)MB_DeltAngSpeed
                            (dVar9,dVar10,(double)(g_FrameTimeSq * 4.712389),
                             (double)(g_FrameTimeSq * 3.1415927),
                             (double)(g_FrameTime * 3.1415927),0x2a0000,
                             *(short *)((int)pvVar2 + 0x14),uVar8);
  (moby->rotation).z = (float)dVar9;
  dVar9 = (double)MB_DeltAngSpeed
                            ((double)(moby->rotation).y,dVar13,
                             (double)(float)((double)g_FrameTimeSq * dVar12),
                             (double)(float)((double)g_FrameTimeSq * dVar11),
                             (double)(float)((double)g_FrameTime * dVar11));
  (moby->rotation).y = (float)dVar9;
  MB_SphericalToVector
            (g_FrameTime * 40.0,(moby->rotation).z,(float)-dVar9,&local_90);
  local_90 = (moby->pos).x + local_90;
  local_8c = (moby->pos).y + local_8c;
  local_88 = (moby->pos).z + local_88;
  (moby->pos).x = local_90;
  (moby->pos).y = local_8c;
  (moby->pos).z = local_88;
  if (2.0 <= local_90) {
    if ((((local_90 <= 1021.0) && (2.0 <= local_8c)) && (local_8c <= 1021.0)) &&
       ((2.0 <= local_88 && (local_88 <= 1021.0)))) {
      local_80 = 0.0;
      if ((local_8c < 0.0 || local_90 < 0.0) ||
         ((local_88 < 0.0 ||
          (64.0 < SQRT((local_90 - GameCamera.posX) * (local_90 - GameCamera.posX) +
                       (local_8c - GameCamera.posY) * (local_8c - GameCamera.posY)))))) {
        DeleteMoby(moby);
        return;
      }
      local_8c = local_8c - g_heroPosition.y;
      local_90 = local_90 - g_heroPosition.x;
      local_6c = 0x10001;
      local_64 = 0x3f000000;
      local_60 = 1;
      fVar1 = local_90 * local_90 + local_8c * local_8c;
      local_7c = local_80;
      if (SQRT(fVar1) != 0.0) {
        local_7c = 1.0 / SQRT(fVar1);
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_80 = local_90 * local_7c;
        local_7c = local_8c * local_7c;
      }
      local_78 = 0x3f800000;
      local_74 = 0x45afdf66;
      local_66 = moby->oClass;
      local_68 = 1;
      local_67 = 1;
      local_70 = moby;
      iVar7 = FastDecTimerS16(uVar8 + 0x14);
      if (iVar7 != 0) {
        DeleteMoby(moby);
        return;
      }
      iVar7 = CollLine(local_a0,(longlong)(int)moby + 0x10,0,
                                 *(undefined4 *)((int)pvVar2 + 0x10),&local_80);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = CollHotspot();
      if (iVar7 == 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0x30,0x2a52c0);
        auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                             auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        if ((int)*(short *)((int)pvVar2 + 0x14) <= (int)(animationSpeed * 3.5)) {
          return;
        }
        auVar14 = vectorSplatHalfWord(auVar14,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar14,0x14,uVar8);
        *(undefined2 *)((int)pvVar2 + 0x14) = uVar6;
        return;
      }
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      DeleteMoby(moby);
      return;
    }
  }
  DeleteMoby(moby);
  return;
}


