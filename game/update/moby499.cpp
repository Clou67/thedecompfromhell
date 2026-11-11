// game/update/moby499.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3a38c8-0x3a3be0
#include "game/update/moby499.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03a38c8 (0xdc bytes)
MobyInstance * FUN_003a38c8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  f32 fVar1;
  short sVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = CreateMoby(GUN_01F3);
  if (pMVar3 != (MobyInstance *)0x0) {
    sVar2 = *(short *)(param_1 + 0x32);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = sVar2;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = 0.0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).z = fVar1;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    fStack00000044 = (f32)param_3;
    fStack0000004c = (f32)param_4;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x03a39a4 (0x4 bytes)
/* Moby 499 */

MobyInstance * UpdateMoby_499(MobyInstance *moby)

{
  return moby;
}


// 0x03a39a8 (0x238 bytes)
void M499_003a39a8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<16> local_50;
  GPiece<16> local_40;
  GPiece<16> local_30;
  
  MB_randSphere
            ((double)(DAT_0084346c * g_FrameTime),
             (double)(DAT_0084346c * g_FrameTime),local_50);
  MB_randSphere
            ((double)(DAT_00843470 * g_FrameTime),
             (double)(DAT_00843470 * g_FrameTime),local_50);
  dVar4 = (double)MB_randRangeFloat(DAT_00843454,DAT_00843458);
  uVar1 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)MB_randRangeFloat(DAT_0084345c,DAT_00843460);
  uVar2 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  dVar4 = (double)MB_randRangeFloat(DAT_00843464,DAT_00843468);
  uVar3 = FastDoubleToInt((double)(float)(dVar4 * (double)animationSpeed));
  SpawnPart_2(param_1 + 0x10,local_40,local_30,DAT_00843444,DAT_00843448,uVar1,uVar2,uVar3)
  ;
  return;
}


