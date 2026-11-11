// game/update/moby1040.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x195a48-0x195da8
#include "game/update/moby1040.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby104.h"
#include "idol/fastfunc.h"

// 0x0195a48 (0x360 bytes)
/* Moby 1040 */

void UpdateMoby_1040(MobyInstance *moby)

{
  float fVar1;
  MobyModeBit MVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar10;
  int iVar11;
  undefined8 uVar9;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  GPiece<24> auStack_60;
  
  piVar3 = (int *)moby->pVar;
  iVar10 = MB_damage((longlong)(int)moby,0x330000,0);
  if (iVar10 != 0) {
    iVar10 = 0;
    dVar13 = 1.0;
    dVar14 = 0.0;
    do {
      MB_randSphere
                ((double)(DAT_0074026c * g_FrameTime),
                 (double)(DAT_00740270 * g_FrameTime),auStack_60);
      uVar12 = MB_randRangeFloat(DAT_0074028c,DAT_00740290);
      iVar11 = MB_randInt(2);
      uVar8 = DAT_00740288;
      uVar7 = DAT_00740284;
      uVar6 = DAT_00740280;
      uVar5 = DAT_0074027c;
      if (iVar11 == 0) {
        MB_randRangeFloat((float)dVar14,(float)dVar13);
        uVar9 = FastLerpColor(uVar7,uVar8);
      }
      else {
        MB_randRangeFloat((float)dVar14,(float)dVar13);
        uVar9 = FastLerpColor(uVar5,uVar6);
      }
      MB_randInt(0xff);
      SpawnPart_60(uVar12,(longlong)(int)moby + 0x10,auStack_60,uVar9);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x28);
    PlayMobySound(1,0,moby);
    iVar10 = piVar3[0x18];
    if (((iVar10 != -1) && (g_SoundChannels[iVar10].pMoby == moby)) &&
       (g_SoundChannels[iVar10].state != '\0')) {
      sound_Kill(iVar10);
    }
    piVar3[0x18] = -1;
    DeleteMoby(moby);
    return;
  }
  if (moby->state == 0) {
    SetColorOfMoby(moby,0x80,0x80,0x80);
    fVar4 = DAT_00740268;
    MVar2 = moby->modeBits;
    fVar1 = moby->pClass->gScale;
    *piVar3 = (int)(piVar3 + 8);
    moby->state = '\x01';
    moby->modeBits = MVar2 | HAS_SPECIAL_VARS;
    piVar3[0x18] = -1;
    moby->scale = fVar1 * fVar4;
  }
  else if (1 < moby->state) goto LAB_00195d40;
  dVar14 = 0.01745329238474369;
  dVar13 = (double)FastWrapRot
                             ((moby->rotation).x,DAT_0074025c * 0.017453292 * g_FrameTime)
  ;
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)FastWrapRot
                             ((moby->rotation).y,
                              (float)((double)DAT_00740260 * dVar14) * g_FrameTime);
  (moby->rotation).y = (float)dVar13;
  dVar13 = (double)FastWrapRot
                             ((moby->rotation).z,
                              (float)((double)DAT_00740264 * dVar14) * g_FrameTime);
  (moby->rotation).z = (float)dVar13;
LAB_00195d40:
  iVar10 = IsMobyPlayingSound(moby,piVar3[0x18]);
  if (iVar10 == 0) {
    iVar10 = PlayMobySound(0,4,moby);
    piVar3[0x18] = iVar10;
  }
  return;
}


