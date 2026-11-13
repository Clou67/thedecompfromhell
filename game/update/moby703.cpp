// game/update/moby703.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x429228-0x429654
// shared update function UpdateMoby_{703_715}; registered for oClasses 703, 715
#include "game/update/moby703.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0429228 (0x58 bytes)
undefined8 M715_00429228(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// shared update function, registered for oClasses 703, 715
// 0x0429290 (0x3b0 bytes)
/* Moby 703
   Moby 715 */

void UpdateMoby_703(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  undefined2 uVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  Vec4 local_60;
  longlong local_50;
  
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  dVar11 = (double)(moby->pos).x;
  dVar12 = (double)(moby->pos).y;
  dVar13 = (double)(moby->pos).z;
  FastDecTimerS16(uVar7 + 0xa6);
  if (moby->state == '\0') {
    auVar14 = ZEXT416(0xffffffff);
    auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    *(undefined1 *)((int)pvVar3 + 0x28) = 4;
    *(undefined2 *)((int)pvVar3 + 0x24) = 0;
    fVar2 = (moby->pos).z;
    *(undefined2 *)((int)pvVar3 + 0x3e) = 0xd;
    *(f32 *)((int)pvVar3 + 0xa0) = fVar2;
    moby->setByGroup = *(char *)((int)pvVar3 + 0xa4);
    auVar14 = loadVectorLeftIndexed(in_LR,0x429280);
    auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar14,0xa6,uVar7);
    *(undefined2 *)((int)pvVar3 + 0xa6) = uVar4;
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    *(undefined4 *)((int)pvVar3 + 0xb4) = 0xffffffff;
  }
  bVar1 = moby->setByGroup;
  if (bVar1 == 0) {
    if (*(short *)((int)pvVar3 + 0xa6) == 0) {
      moby->setByGroup = '\x02';
      dVar9 = 60.0;
      iVar6 = FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0xb0) * 60.0));
      dVar10 = 0.5;
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + 0.5));
      local_50 = (longlong)iVar6;
      dVar8 = (double)FastIntToDouble(iVar6);
      *(float *)((int)pvVar3 + 0xac) = (float)((double)*(float *)((int)pvVar3 + 0xa8) / dVar8);
      iVar6 = FastDoubleToInt
                        ((double)(float)((double)*(float *)((int)pvVar3 + 0xb0) * dVar9));
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar10));
      local_50 = (longlong)iVar6;
      *(short *)((int)pvVar3 + 0xa6) = (short)iVar6;
      PlayMobySound(0,0,moby);
    }
  }
  else if (bVar1 < 2) {
    if (*(short *)((int)pvVar3 + 0xa6) == 0) {
      moby->setByGroup = '\x02';
      dVar9 = 60.0;
      iVar6 = FastDoubleToInt((double)(*(float *)((int)pvVar3 + 0xb0) * 60.0));
      dVar10 = 0.5;
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + 0.5));
      local_50 = (longlong)iVar6;
      dVar8 = (double)FastIntToDouble(iVar6);
      *(float *)((int)pvVar3 + 0xac) = -(float)((double)*(float *)((int)pvVar3 + 0xa8) / dVar8);
      iVar6 = FastDoubleToInt
                        ((double)(float)((double)*(float *)((int)pvVar3 + 0xb0) * dVar9));
      iVar6 = (int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar10));
      local_50 = (longlong)iVar6;
      *(short *)((int)pvVar3 + 0xa6) = (short)iVar6;
      PlayMobySound(1,0,moby);
    }
  }
  else if ((bVar1 < 3) &&
          ((moby->pos).z = (moby->pos).z - *(float *)((int)pvVar3 + 0xac),
          *(short *)((int)pvVar3 + 0xa6) == 0)) {
    uVar5 = (ulonglong)(longlong)*(int *)((int)pvVar3 + 0xac) >> 0x3f ^ 1;
    moby->setByGroup = (char)uVar5;
    if ((uint)uVar5 == (uint)*(byte *)((int)pvVar3 + 0xa4)) {
      (moby->pos).z = *(f32 *)((int)pvVar3 + 0xa0);
    }
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar14 = loadVectorLeftIndexed(in_LR,0x429280);
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar14 = vectorMultiplyAddFloatingPoint
                        (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                         auVar15);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
    auVar14 = vectorSplatHalfWord(auVar14,1);
    uVar4 = storeVectorElementHalfWordIndexed(auVar14,0xa6,uVar7);
    *(undefined2 *)((int)pvVar3 + 0xa6) = uVar4;
  }
  local_60.x = (float)((double)(moby->pos).x - dVar11);
  local_60.y = (float)((double)(moby->pos).y - dVar12);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar13);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x60),&local_60,(longlong)(int)moby + 0x40,
             (longlong)(int)moby + 0x40);
  return;
}


// 0x0429640 (0x14 bytes)
void M715_00429640(void)

{
  DAT_00857bd0 = 0x10000;
  return;
}


