// game/update/moby737.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4381a0-0x438738
#include <math.h>
#include <stdio.h>
#include "game/update/moby737.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1130.h"
#include "idol/fastfunc.h"

// 0x04381a0 (0x14 bytes)
void M737_004381a0(void)

{
  DAT_0085a2d8 = 0x10000;
  return;
}


// 0x04381b8 (0xe8 bytes)
// strings: 0096c074: 'None'

void M737_004381b8(void)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == QUARK_0398) || (MVar1 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}


// 0x04382a8 (0x490 bytes)
// strings: 0096c074: 'None' | 00657de0: 'cutscene moby class %d maya instance %d: cutsceneCameraInitPos INVALID\nDeleting Cutscene!\n'

/* Moby 737 */

void UpdateMoby_737(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  ushort uVar3;
  float *pos;
  float fVar4;
  undefined4 uVar5;
  Cuboid *pCVar6;
  short sVar8;
  int iVar7;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 in_LR;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> local_50;
  GPiece<16> local_40;
  
  pos = (float *)moby->pVar;
  uVar10 = ZEXT48(pos);
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar7 = 0;
    puVar9 = &DAT_0095cd50;
    sVar8 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar2 = ((MobyInstance *)puVar9[0x5e])->oClass;
        if (((MVar2 == QUARK_0398) || (MVar2 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar9[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar8 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (iVar7 < sVar8);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (pos[9] == -NAN) {
        printf("cutscene moby class %d maya instance %d: cutsceneCameraInitPos INVALID\nDeleting Cutscene!\n"
                     ,moby->oClass,(ulonglong)(uint)moby->field71_0xa8 & 0xffff);
        DeleteMoby(moby);
      }
      else {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar11 = loadVectorLeftIndexed(0x2c,uVar10);
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar12 = loadVectorRightIndexed(0x3c,uVar10);
        auVar13 = loadVectorLeftIndexed(in_LR,0x4382a0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = vectorConvertFromSignedFixedPointWord(auVar11 | auVar12,0);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorAddFloatingPoint
                            (auVar11,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x2c,uVar10
                          );
        *(undefined4 *)((uint)(pos + 0xb) & 0xfffffffc) = uVar5;
        moby->drawDistance = 0xff;
        moby->updateDistance = -1;
        moby->state = '\x01';
      }
    }
    else {
      uVar3 = moby->uid;
      if (((&g_Checkpoint.objState[0])[(short)uVar3] == '\0') &&
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pos[8]);
        if ((iVar7 != 0) || (moby->setByGroup == '\x01')) {
          fVar4 = pos[10];
          if (fVar4 == -NAN) {
            Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
          }
          else {
            Hero_Warp(&Cuboids[(int)fVar4].pos.x,&Cuboids[(int)fVar4].rot.x,0x72,1);
          }
          if (pos[0xc] == 0.0) {
            SetCameraPosition(&Cuboids[(int)pos[9]].pos,&Cuboids[(int)pos[9]].rot,0,0,0);
          }
          else {
            SetCameraPosition(local_50,local_40,2,pos[0xd],0);
          }
          LetterBoxOn = 1;
          moby->setByGroup = '\x01';
          moby->state = '\x02';
          pCVar6 = Cuboids;
          fVar4 = pos[9];
          *pos = Cuboids[(int)fVar4].pos.x;
          pos[1] = pCVar6[(int)fVar4].pos.y;
          pos[2] = pCVar6[(int)fVar4].pos.z;
          pos[3] = pCVar6[(int)fVar4].pos.w;
          pos[4] = pCVar6[(int)fVar4].rot.x;
          pos[5] = pCVar6[(int)fVar4].rot.y;
          pos[6] = pCVar6[(int)fVar4].rot.z;
          pos[7] = pCVar6[(int)fVar4].rot.w;
        }
      }
      else {
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 < 3) {
    iVar7 = FastDecTimerS32(uVar10 + 0x2c);
    if ((iVar7 == 0) && (moby->setByGroup == '\x01')) {
      Camera_SetMobyDrivenTargetPos(pos);
      Camera_SetMobyDrivenTargetRot(pos + 4);
    }
    else {
      if (pos[0xc] == 0.0) {
        Camera_DeactivateMobyDrivenCam(0);
      }
      else {
        Camera_DeactivateMobyDrivenCam(2);
      }
      Hero_TransitionToDefault();
      LetterBoxOn = 0;
      moby->state = '\x03';
      moby->setByGroup = '\0';
    }
  }
  else if ((bVar1 < 4) && (moby->setByGroup == '\x01')) {
    moby->state = '\x01';
  }
  return;
}


