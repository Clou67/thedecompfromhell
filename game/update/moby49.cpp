// game/update/moby49.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x39fcb8-0x3a01cc
#include "game/update/moby49.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby487.h"
#include "idol/fastfunc.h"

// 0x039fcb8 (0x514 bytes)
/* Moby 49 */

void UpdateMoby_49(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar12;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar13;
  undefined8 uVar14;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<72> auStack_70;
  
  lVar9 = (longlong)(int)moby;
  pfVar8 = (float *)moby->pVar;
  if ((pfVar8[4] == 0.0) &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 15.0)) {
    sound_MobyPlay_oClass(9,0,moby,0x27e);
    pfVar8[4] = 1.4013e-45;
  }
  if (moby->state == '\0') {
    dVar13 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar13;
    fVar1 = (moby->pos).x;
    fVar2 = *pfVar8;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar6 = pfVar8[1];
    fVar7 = pfVar8[2];
    uVar14 = 0x3ff0000000000000;
    if ((g_heroType == '\x02') && (iVar12 = MB_randInt(5), iVar12 != 0)) {
      uVar14 = 0;
    }
    SetCollDamIn(uVar14,auStack_70,lVar9,0x10003);
    iVar12 = CollLine(local_b0,local_c0,0x10,lVar9,auStack_70);
    if (((iVar12 == 0) && (iVar12 = FastDecTimerS32(pfVar8 + 5), iVar12 == 0)) ||
       (g_CollOutput.pMoby == (MobyInstance *)pfVar8[6])) {
      (moby->pos).x = fVar1 + fVar2;
      (moby->pos).y = fVar3 + fVar6;
      (moby->pos).z = fVar4 + fVar7;
      (moby->pos).w = fVar5;
      MB_randSphere
                ((double)(DAT_00843288 * g_FrameTime),
                 (double)(DAT_00843288 * g_FrameTime),local_a0);
      MB_randSphere
                ((double)(DAT_0084328c * g_FrameTime),
                 (double)(DAT_0084328c * g_FrameTime),local_a0);
      dVar13 = (double)MB_randRangeFloat(DAT_00843270,DAT_00843274);
      uVar14 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      dVar13 = (double)MB_randRangeFloat(DAT_00843278,DAT_0084327c);
      uVar10 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      dVar13 = (double)MB_randRangeFloat(DAT_00843280,DAT_00843284);
      uVar11 = FastDoubleToInt((double)(float)(dVar13 * (double)animationSpeed));
      SpawnPart_2
                (lVar9 + 0x10,local_90,local_80,DAT_00843260,DAT_00843264,uVar14,uVar10,uVar11);
    }
    else {
      sound_MobyPlay_oClass(8,0,moby,0x27e);
      FUN_001d4d88((double)DAT_00843298,lVar9,lVar9 + 0x10,&DAT_00a15d30,DAT_008432a0 & 0xff,
                   (int)(animationSpeed * ((float)(longlong)DAT_0084329c + 0.5)),DAT_008432a4 & 0xff
                   ,DAT_008432a8 & 0xff,DAT_010c9258 & 0xff);
      DeleteMoby(moby);
    }
  }
  return;
}


