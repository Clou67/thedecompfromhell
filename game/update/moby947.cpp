// game/update/moby947.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4c70d0-0x4c74a4
#include <stdio.h>
#include "game/update/moby947.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1090.h"
#include "idol/fastfunc.h"

// 0x04c70d0 (0x3d4 bytes)
// strings: 00658d34: 'Moby947 maya instance %d HAS NO PATH!!!\n\n\nMoron.\nMobyDeleted\n'

/* Moby 947 */

void UpdateMoby_947(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  Vec4 local_50;
  int local_40;
  GPiece<12> auStack_3c;
  
  piVar2 = (int *)moby->pVar;
  if (*piVar2 == -1) {
    printf("Moby947 maya instance %d HAS NO PATH!!!\n\n\nMoron.\nMobyDeleted\n",moby->uid);
    DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    pSVar3 = Splines[*piVar2];
    moby->updateDistance = -1;
    if (bVar1 == 0) {
      if (piVar2[3] != -1) {
        DeletePointLight(piVar2[3]);
        piVar2[3] = -1;
      }
      iVar9 = piVar2[4];
      if (((iVar9 != -1) && (g_SoundChannels[iVar9].pMoby == moby)) &&
         (g_SoundChannels[iVar9].state != '\0')) {
        sound_Kill(iVar9);
      }
      piVar2[4] = -1;
      iVar9 = FastDecTimerS32(ZEXT48(piVar2) + 8);
      if (iVar9 != 0) {
        moby->state = '\x01';
        piVar2[1] = 0;
      }
    }
    else if (bVar1 < 2) {
      fVar5 = pSVar3->points[0].y - pSVar3->points[1].y;
      fVar6 = pSVar3->points[0].x - pSVar3->points[1].x;
      fVar7 = pSVar3->points[0].z - pSVar3->points[1].z;
      dVar11 = 5.0;
      fVar8 = g_FrameTime * 5.0 + (float)piVar2[1];
      dVar10 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      piVar2[1] = (int)fVar8;
      MB_PathPosAtDist
                ((double)fVar8,dVar10,&DAT_00720000,bVar1,pSVar3,&local_40,auStack_3c,&local_50);
      iVar9 = piVar2[3];
      if (iVar9 == -1) {
        iVar9 = CreatePointLight2
                          (3.0,0,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,&local_50)
        ;
        piVar2[3] = iVar9;
      }
      else {
        PointLights[iVar9].pos.x = local_50.x;
        PointLights[iVar9].pos.y = local_50.y;
        PointLights[iVar9].pos.w = 3.0;
        PointLights[iVar9].pos.z = local_50.z;
        PointLights[iVar9].color.x = 1.0;
        PointLights[iVar9].color.y = 1.0;
        PointLights[iVar9].color.z = 0.5;
        PointLights[iVar9].color.w = 0.0;
      }
      iVar9 = MB_randInt(2);
      if (iVar9 == 0) {
        if ((worldUpdateTime & 1) != 0) {
          FUN_001bc0b0((double)(float)piVar2[1],
                       (double)(float)((double)g_FrameTime * dVar11),dVar10,moby,&local_50
                       ,pSVar3);
        }
        iVar9 = IsMobyPlayingSound(moby,piVar2[4]);
        if (iVar9 == 0) {
          iVar9 = sound_MobyPlay_oClass(0,0xc,moby,0x442);
          piVar2[4] = iVar9;
          if (iVar9 != -1) {
            iVar9 = (int)((longlong)iVar9 << 7) - (int)((longlong)iVar9 << 4);
            *(float *)((int)g_SoundChannels + iVar9 + 0x20) = local_50.x;
            *(float *)((int)g_SoundChannels + iVar9 + 0x24) = local_50.y;
            *(float *)((int)g_SoundChannels + iVar9 + 0x28) = local_50.z;
            *(float *)((int)g_SoundChannels + iVar9 + 0x2c) = local_50.w;
          }
        }
        else {
          iVar9 = piVar2[4];
          g_SoundChannels[iVar9].pos[0] = local_50.x;
          g_SoundChannels[iVar9].pos[1] = local_50.y;
          g_SoundChannels[iVar9].pos[2] = local_50.z;
          g_SoundChannels[iVar9].pos[3] = local_50.w;
        }
        if (local_40 == pSVar3->cnt + -1) {
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          moby->state = '\0';
          auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          auVar12 = loadVectorLeftIndexed(0x14,0x4c70b8);
          auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorMultiplyAddFloatingPoint
                              (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60
                               ,auVar13);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,8,
                             ZEXT48(piVar2));
          *(undefined4 *)((uint)(piVar2 + 2) & 0xfffffffc) = uVar4;
        }
      }
    }
  }
  return;
}


