// game/update/moby1421.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x272f40-0x2736bc
#include <stdio.h>
#include <string.h>
#include "game/update/moby1421.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/inittransition.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update/camera19.h"
#include "idol/fastfunc.h"

// 0x0272f40 (0x394 bytes)
void M1421_00272f40(void)

{
  bool bVar1;
  undefined8 uVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  char acStack_90 [104];
  
  bVar1 = false;
  lVar4 = 0;
  if (g_SceneId == 3) {
    dVar7 = (double)animationSpeed;
    dVar8 = 181.5;
    if (((int)(dVar7 * 181.5) < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < (int)(dVar7 * 260.5))) {
      uVar2 = help_msg_string_by_index(STR_SON_);
      snprintf(acStack_90,"%s",uVar2);
      bVar1 = true;
      dVar7 = (double)animationSpeed;
      lVar4 = (longlong)(g_SpaceSceneFrame - (int)(dVar7 * dVar8) >> 2);
    }
    dVar8 = 450.5;
    if (((int)(dVar7 * 450.5) < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < (int)(dVar7 * 640.5))) {
      uVar2 = help_msg_string_by_index(STR_YOU_HAVE_DONE_WELL_);
      snprintf(acStack_90,"%s",uVar2);
      bVar1 = true;
      dVar7 = (double)animationSpeed;
      lVar4 = (longlong)(g_SpaceSceneFrame - (int)(dVar7 * dVar8) >> 2);
    }
    dVar8 = 750.5;
    if (((int)(dVar7 * 750.5) < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < (int)(dVar7 * 930.5))) {
      uVar2 = help_msg_string_by_index(STR_THERE_IS_STILL_MORE_0x526C);
      snprintf(acStack_90,"%s",uVar2);
      lVar4 = (longlong)(g_SpaceSceneFrame - (int)((double)animationSpeed * dVar8) >> 2);
    }
    else if (!bVar1) {
      return;
    }
  }
  else {
    if (g_SceneId != 4) {
      return;
    }
    dVar7 = 2300.5;
    if (g_SpaceSceneFrame <= (int)(animationSpeed * 2300.5)) {
      return;
    }
    if ((int)(animationSpeed * 2400.5) <= g_SpaceSceneFrame) {
      return;
    }
    uVar2 = help_msg_string_by_index(STR_YOU_ALREADY_HAVE_);
    snprintf(acStack_90,"%s",uVar2);
    lVar4 = (longlong)(g_SpaceSceneFrame - (int)((double)animationSpeed * dVar7) >> 2);
  }
  sVar3 = strlen(acStack_90);
  lVar5 = (longlong)(int)sVar3;
  lVar6 = lVar4;
  if ((((int)sVar3 <= (int)lVar4) && (lVar6 = lVar5, (int)sVar3 < (int)lVar4)) &&
     ((lVar5 - lVar4 & 4U) != 0)) {
    lVar6 = (longlong)(int)(sVar3 - 1);
  }
  FontPrintLarge(DAT_007a9e80 + 1,DAT_007a9e84 + 1,DAT_007a9e8c,acStack_90,lVar6);
  FontPrintLarge(DAT_007a9e80,DAT_007a9e84,DAT_007a9e88,acStack_90,lVar6);
  return;
}


// 0x02732d4 (0x14 bytes)
void M1421_002732d4(void)

{
  DAT_007a9edc = 0x10000;
  return;
}


// 0x02732f8 (0x3c4 bytes)
/* Moby 1421 */

void UpdateMoby_1421(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  fVar2 = (moby->rotation).y;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      if (((g_heroType == '\0') && (uVar3 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar3] == '\0')) &&
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        piVar4[1] = (int)fVar2;
        moby->state = '\x01';
      }
      else {
        dVar8 = (double)FastWrapRot(fVar2,-1.3962634);
        (moby->rotation).y = (float)dVar8;
        moby->state = '\x03';
      }
    }
    else if (((g_heroType == '\0') && (uVar3 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar3] == '\0')) &&
            ((*(uint *)(&g_LevelObjBits +
                       Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)) &
             1 << (uVar3 & 0x1f)) == 0)) {
      iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[3]);
      if ((((iVar7 != 0) || (g_SeenPlanets.Hoven != 0)) && (0 < *piVar4)) && (0 < piVar4[4])) {
        uVar3 = moby->uid;
        iVar6 = (int)((longlong)((int)(short)moby->uid >> 5) << 2);
        iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
        uVar5 = *(uint *)(&g_CheckpointBits + iVar7);
        *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) =
             *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) | 1 << (moby->uid & 0x1f);
        *(uint *)(&g_CheckpointBits + iVar7) = uVar5 | 1 << (uVar3 & 0x1f);
        iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar4[3]);
        if (iVar7 != 0) {
          Cam19_Enable(piVar4[4]);
        }
        iVar7 = FastDoubleToInt((double)(animationSpeed * 90.0));
        piVar4[2] = iVar7;
        moby->state = '\x02';
      }
    }
    else {
      dVar8 = (double)FastWrapRot(fVar2,-1.3962634);
      (moby->rotation).y = (float)dVar8;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 3) {
    dVar8 = (double)FastWrapRot(fVar2,-1.3962634 / (animationSpeed * 90.0));
    (moby->rotation).y = (float)dVar8;
    iVar7 = FastDecTimerS32(piVar4 + 2);
    if (iVar7 != 0) {
      moby->state = '\x03';
    }
  }
  else if ((((bVar1 < 4) && (g_heroType == '\0')) &&
           (uVar3 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar3] == '\0')) &&
          ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2)
                     ) & 1 << (uVar3 & 0x1f)) == 0)) {
    dVar8 = (double)FastWrapRot(fVar2,1.3962634);
    (moby->rotation).y = (float)dVar8;
    moby->state = '\0';
  }
  return;
}


