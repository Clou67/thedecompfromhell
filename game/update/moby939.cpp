// game/update/moby939.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4c467c-0x4c4978
#include "game/update/moby939.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby938.h"
#include "game/update/moby982.h"
#include "idol/fastfunc.h"

// 0x04c467c (0x14 bytes)
void M939_004c467c(void)

{
  DAT_008f4cb0 = 0x10000;
  return;
}


// 0x04c4698 (0x214 bytes)
/* Moby 939 */

void UpdateMoby_939(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_60 [4];
  GPiece<32> local_50;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\0') {
    iVar2 = MB_randRange(DAT_008f4cd4,DAT_008f4cd8);
    *piVar1 = (int)(animationSpeed * ((float)(longlong)iVar2 + 0.5));
    moby->state = '\x01';
  }
  iVar2 = FastDecTimerS32(piVar1);
  if (iVar2 != 0) {
    dVar5 = (double)(moby->rotation).z;
    dVar3 = (double)MB_randRangeFloat(-DAT_008f4cdc,DAT_008f4cdc);
    dVar4 = 0.01745329238474369;
    dVar3 = (double)FastWrapRot((float)dVar5,(float)(dVar3 * 0.01745329238474369));
    dVar5 = (double)MB_randRangeFloat(DAT_008f4ce0,DAT_008f4ce4);
    dVar4 = (double)(float)(dVar5 * dVar4);
    dVar5 = (double)MB_randRangeFloat(DAT_008f4ce8,DAT_008f4cec);
    MB_SphericalToVector
              ((float)(dVar5 * (double)g_FrameTime),(float)dVar3,(float)dVar4,local_60);
    FUN_004c2b28(moby,local_50,local_60);
    PlayMobySound(0,0,moby);
    iVar2 = MB_randRange(DAT_008f4cd4,DAT_008f4cd8);
    *piVar1 = (int)(animationSpeed * ((float)(longlong)iVar2 + 0.5));
  }
  return;
}


// 0x04c48b8 (0xc0 bytes)
void M939_004c48b8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar4 = (ulonglong)uVar1;
  auVar5 = ZEXT416(0xffffffff);
  auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
  auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  *(undefined4 *)(uVar1 + 0x10) = 0xc0490fda;
  auVar5 = loadVectorLeftIndexed(in_LR,0x4c48b0);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar3 = 0;
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
  auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
  auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x14,uVar4);
  *(undefined4 *)(uVar1 + 0x14 & 0xfffffffc) = uVar2;
  *(char *)(param_1 + 0xbc) =
       (char)((ulonglong)(LZCOUNT((uint)*(byte *)(param_1 + 0xbc)) << 0x20) >> 0x25);
  do {
    if (*(int *)uVar4 != -1) {
      FUN_004c82d0(g_MobyInstance + *(int *)uVar4);
    }
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 4;
  } while (iVar3 < 4);
  return;
}


