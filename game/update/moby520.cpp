// game/update/moby520.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3ab498-0x3aba28
#include "game/update/moby520.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1488.h"
#include "idol/fastfunc.h"

// 0x03ab498 (0x14 bytes)
void M520_003ab498(void)

{
  DAT_00843704 = 0x10000;
  return;
}


// 0x03ab4e8 (0x38c bytes)
// strings: 003ab4e0: '?333Ax'

void M520_003ab4e8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  MobyInstance *pMoby;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> local_60;
  
  pMoby = (MobyInstance *)param_1;
  PlayMobySound(0,0,pMoby);
  uVar12 = 0x3fd3333340000000;
  uVar4 = 0x3ff028f5c0000000;
  uVar6 = 0x3fa99999a0000000;
  uVar8 = 0x40e86a0000000000;
  SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,local_90);
  iVar3 = 0;
  uVar10 = 0x3ff11eb860000000;
  do {
    SpawnPart_13(uVar12,uVar4,uVar10,uVar6,uVar8,local_90);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  dVar5 = 0.0;
  dVar7 = -0.625;
  dVar9 = 0.625;
  dVar11 = 1.25;
  uVar4 = 0x3fe3333340000000;
  do {
    MB_randRangeFloat((float)dVar7,(float)dVar9);
    MB_randRangeFloat((float)dVar7,(float)dVar9);
    MB_randRangeFloat((float)dVar5,(float)dVar11);
    M1488_0028cce0(uVar12,uVar4,param_1,local_80,local_70,&DAT_00a15d30,0x165,in_r8,in_r9,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  uVar4 = 0x3fd99999a0000000;
  uVar6 = 0x3fe6666660000000;
  do {
    MB_randRangeFloat((float)dVar7,(float)dVar9);
    MB_randRangeFloat((float)dVar7,(float)dVar9);
    MB_randRangeFloat((float)dVar5,(float)dVar11);
    iVar2 = MB_randInt(2);
    M1488_0028cce0(uVar4,uVar6,param_1,local_80,local_60,&DAT_00a15d30,iVar2 + 0x166,in_r8,in_r9,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  auVar13 = ZEXT416(0xffffffff);
  auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
  pMoby->state = '\x02';
  pMoby->collision = (ushort *)0x0;
  auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  pMoby->modeBits = pMoby->modeBits | DISABLED;
  auVar13 = loadVectorLeftIndexed(0x34,0x3ab4b0);
  auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar14
                      );
  auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
  auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xff;
  cVar1 = storeVectorElementByteIndexed
                    (auVar13 | auVar13 << 8 | auVar13 << 0x10 | auVar13 << 0x18 | auVar13 << 0x20 |
                     auVar13 << 0x28 | auVar13 << 0x30 | auVar13 << 0x38 | auVar13 << 0x40 |
                     auVar13 << 0x48 | auVar13 << 0x50 | auVar13 << 0x58 | auVar13 << 0x60 |
                     auVar13 << 0x68 | auVar13 << 0x70 | auVar13 << 0x78,0xbc,param_1);
  pMoby->setByGroup = cVar1;
  return;
}


// 0x03ab874 (0xb4 bytes)
MobyInstance * M520_003ab874(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = CreateMoby(0x208);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    MVar3 = pMVar4->modeBits;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->modeBits = MVar3 | CAN_BE_AUTO_TARGETED;
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = fVar2;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x03ab940 (0xe8 bytes)
/* Moby 520 */

void UpdateMoby_520(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if (iVar3 != 0) {
      M520_003ab4e8(lVar2);
    }
  }
  else if (bVar1 < 3) {
    SpawnPart_13
              (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff11eb860000000,0x3fa99999a0000000,
               0x40e86a0000000000,lVar2 + 0x10);
    iVar3 = FastDecTimerS8(lVar2 + 0xbc);
    if (iVar3 != 0) {
      DeleteMoby(moby);
    }
  }
  return;
}


