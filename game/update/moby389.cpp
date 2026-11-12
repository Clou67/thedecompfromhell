// game/update/moby389.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3621c8-0x3627a4
// shared update function UpdateMoby_a_lot_11; registered for oClasses 389, 390, 391, 392, 393, 394, 395, 396, 399, 400, 401
#include "game/update/moby389.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03621c8 (0x154 bytes)
longlong M388_003621c8(int param_1,undefined8 param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  undefined8 in_LR;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  GPiece<16> auVar9;
  undefined4 uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  GPiece<16> auVar13;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  GPiece<16> auVar18;
  
  pMVar7 = CreateMoby(param_3);
  if (pMVar7 != (MobyInstance *)0x0) {
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = pMVar7->pClass->gScale;
    fVar3 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\0';
    pvVar4 = pMVar7->pVar;
    pMVar7->scale = (fVar2 * fVar1) / fVar3;
    *(int *)((int)pvVar4 + 0x44) = (int)param_2;
    GetBonePosition(param_1,param_2,(longlong)(int)pMVar7 + 0x10);
    *(int *)((int)pvVar4 + 0x3c) = param_1;
    UpdateMobyTransform(pMVar7);
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar5 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar11 = puVar5[2];
    uVar10 = puVar5[1];
    uVar8 = *puVar5;
    puVar6 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar16 = puVar6[3];
    uVar15 = puVar6[2];
    uVar14 = puVar6[1];
    uVar12 = *puVar6;
    puVar6 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar21 = puVar6[3];
    uVar20 = puVar6[2];
    uVar19 = puVar6[1];
    uVar17 = *puVar6;
    puVar6 = (undefined4 *)((uint)&pMVar7->transform & 0xfffffff0);
    puVar6[3] = puVar5[3];
    puVar6[2] = uVar11;
    puVar6[1] = uVar10;
    *puVar6 = uVar8;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v1 & 0xfffffff0);
    puVar5[3] = uVar16;
    puVar5[2] = uVar15;
    puVar5[1] = uVar14;
    *puVar5 = uVar12;
    auVar9 = ZEXT416(0xffffffff);
    auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v2 & 0xfffffff0);
    puVar5[3] = uVar21;
    puVar5[2] = uVar20;
    puVar5[1] = uVar19;
    *puVar5 = uVar17;
    auVar9 = loadVectorLeftIndexed(in_LR,0x3621c0);
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar18,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x40,ZEXT48(pvVar4)
                      );
    *(undefined4 *)((int)pvVar4 + 0x40U & 0xfffffffc) = uVar8;
    UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}


// shared update function, registered for oClasses 389, 390, 391, 392, 393, 394, 395, 396, 399, 400, 401
// 0x0362338 (0x430 bytes)
/* Moby 389
   Moby 390
   Moby 391
   Moby 392
   Moby 393
   Moby 394
   Moby 395
   Moby 396
   Moby 399
   Moby 400
   Moby 401 */

void UpdateMoby_389(MobyInstance *moby)

{
  u8 uVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  MobyModeBit MVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  double dVar10;
  
  lVar7 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  iVar9 = *(int *)((int)pvVar3 + 0x3c);
  if ((((iVar9 == 0) || (*(short *)(iVar9 + 0xa6) != 0x184)) || (*(char *)(iVar9 + 0x20) == -2)) ||
     (*(char *)(iVar9 + 0x20) == -3)) {
    DeleteMoby(moby);
    return;
  }
  iVar9 = *(int *)((int)pvVar3 + 0x3c);
  MVar6 = moby->modeBits &
          (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
           DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT
          |NO_POST_UPDATE);
  uVar1 = moby->state;
  moby->modeBits = MVar6;
  moby->modeBits = MVar6 | *(MobyModeBit *)(iVar9 + 0x34) & (NO_UPDATE|DISABLED);
  if (uVar1 == '\x04') {
    MB_genericExplosion
              (0x4000000000000000,0x4010000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar7,(int)pvVar3 + 0x10,0,1
               ,0xffffffffffffffff,10,3,0x10);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 != '\x03') {
    if (uVar1 == '\x02') {
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar3 + 0x20) = 0;
      *(undefined1 *)((int)pvVar3 + 0x21) = 0;
      *(undefined1 *)((int)pvVar3 + 0x22) = 0;
      *(undefined1 *)((int)pvVar3 + 0x23) = 0;
      *(undefined1 *)((int)pvVar3 + 0x24) = 0;
      *(undefined1 *)((int)pvVar3 + 0x25) = 0;
      *(undefined1 *)((int)pvVar3 + 0x26) = 0;
      *(undefined1 *)((int)pvVar3 + 0x27) = 0;
      *(undefined1 *)((int)pvVar3 + 0x28) = 0;
      *(undefined1 *)((int)pvVar3 + 0x29) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2a) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2b) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2c) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2d) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2e) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2f) = 0;
      return;
    }
    iVar9 = *(int *)((int)pvVar3 + 0x3c);
    moby->scale = (moby->pClass->gScale * *(float *)(iVar9 + 0x2c)) /
                  *(float *)(*(int *)(iVar9 + 0x24) + 0x24);
    uVar8 = *(undefined8 *)(iVar9 + 0x38);
    moby->color = (int)((ulonglong)uVar8 >> 0x20);
    moby->light = (int)uVar8;
    return;
  }
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x18);
  *(float *)((int)pvVar3 + 0x10) = *(float *)((int)pvVar3 + 0x10) * 0.995;
  *(float *)((int)pvVar3 + 0x14) = *(float *)((int)pvVar3 + 0x14) * 0.995;
  *(float *)((int)pvVar3 + 0x18) = *(float *)((int)pvVar3 + 0x18) * 0.995;
  iVar9 = CollSphere(0x4000000000000000,lVar7 + 0x10,&DAT_0036231c,0,lVar7);
  if ((iVar9 != 0) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((((MVar2 = (g_CollOutput.pMoby)->oClass,
          MVar2 != QWARKS_STARFIGHTER_PART_0184 && MVar2 != 0x191 &&
          (MVar2 != QWARKS_STARFIGHTER_PART_0185)) &&
         ((MVar2 != QWARKS_STARFIGHTER_PART_0186 &&
          ((MVar2 != QWARKS_STARFIGHTER_PART_0187 && (MVar2 != QWARKS_STARFIGHTER_PART_0188)))))) &&
        (MVar2 != QWARKS_STARFIGHTER_PART_0189)) &&
       ((((MVar2 != QWARKS_STARFIGHTER_PART_018A && (MVar2 != QWARKS_STARFIGHTER_PART_018B)) &&
         (MVar2 != QWARKS_STARFIGHTER_PART_018C)) &&
        ((MVar2 != QWARKS_STARFIGHTER_PART_018F && (MVar2 != QWARKS_STARFIGHTER_PART_0190))))))))))
  {
    FastVecReflect((int)pvVar3 + 0x10,(int)pvVar3 + 0x10,0xa10980);
    moby->state = '\x04';
  }
  dVar10 = (double)FastWrapRot((moby->rotation).x,*(float *)((int)pvVar3 + 0x30));
  (moby->rotation).x = (float)dVar10;
  dVar10 = (double)FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x34));
  (moby->rotation).y = (float)dVar10;
  dVar10 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar3 + 0x38));
  (moby->rotation).z = (float)dVar10;
  *(float *)((int)pvVar3 + 0x30) = *(float *)((int)pvVar3 + 0x30) * 0.999;
  *(float *)((int)pvVar3 + 0x34) = *(float *)((int)pvVar3 + 0x34) * 0.999;
  *(float *)((int)pvVar3 + 0x38) = *(float *)((int)pvVar3 + 0x38) * 0.999;
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5;
  if (((iVar9 < 0x41200000) || (0x447d4000 < iVar9)) ||
     ((fVar4 = (moby->pos).y, uVar5 = (int)fVar4 >> 0x1f, iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5
      , 0x447d4000 < iVar9 || iVar9 < 0x41200000 ||
      ((fVar4 = (moby->pos).z, uVar5 = (int)fVar4 >> 0x1f,
       iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, iVar9 < 0x41200000 || (0x447d4000 < iVar9)))))) {
    DeleteMoby(moby);
    return;
  }
  iVar9 = FastDecTimerS32((int)pvVar3 + 0x40);
  if (iVar9 == 0) {
    return;
  }
  if (moby->enabled != '\0') {
    return;
  }
  DeleteMoby(moby);
  return;
}


// 0x0362770 (0x34 bytes)
void M401_00362770(void)

{
  ____Draw_EffectStrip_M401(0x408f400000000000,&DAT_00362768,0x2b);
  return;
}


