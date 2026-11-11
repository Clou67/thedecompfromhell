// game/respawn.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x151d48-0x15251c
#include "game/respawn.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0151d48 (0x14 bytes)
void SECTION_HEADER_RESPAWN____(void)

{
  DAT_00731734 = 0x10000;
  return;
}


// 0x0151d60 (0x38 bytes)
undefined8 ____Unused_Respawn_IncCounter_a53504(void)

{
  DAT_00a53504 = DAT_00a53504 + 1;
  DAT_00a53508 = DAT_00a53500 + *DAT_00927200;
  return 0;
}


// 0x0151d98 (0x74 bytes)
longlong ____NAVG_AllocSlot_a0e11c(longlong param_1,int param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = -1;
  if (-1 < param_2) {
    iVar2 = (int)(param_1 << 8);
    lVar3 = 0x3f;
    do {
      iVar4 = (int)(lVar3 << 2);
      sVar1 = *(short *)(&DAT_00a0e11c + iVar2 + iVar4);
      if (sVar1 == 0 || (int)sVar1 == param_2 + 1) {
        if ((int)lVar3 < 0) {
          return lVar3;
        }
        *(short *)(&DAT_00a0e11c + iVar2 + iVar4) = (short)(param_2 + 1);
        return lVar3;
      }
      iVar4 = (int)lVar3 + -1;
      lVar3 = (longlong)iVar4;
    } while (-1 < iVar4);
  }
  return lVar3;
}


// 0x0151e0c (0x64 bytes)
void ClearCheckpointData(void)

{
  FastMemSet(&DAT_00a53510,0,0xc60);
  FastMemSet(&g_CheckpointSet,0,0xc60);
  FastMemSet(&DAT_00a54dd0,0,0x100);
  return;
}


// 0x0151e70 (0x210 bytes)
void SetSpawnPoint(Vec4 *pos,Vec4 *rot)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  FastMemCopy32(&DAT_00a541c0,&DAT_00a53560,0x404);
  uVar7 = 0;
  iVar4 = Level * 0x10;
  iVar5 = Level * 0x100;
  do {
    bVar1 = (&DAT_00a53964)[uVar7];
    if ((bVar1 != 0) && ((bVar1 == 1 || (*(char *)(bVar1 + 0xa0ca82 + iVar4) == -1)))) {
      iVar6 = (int)(((ulonglong)(uint)((int)uVar7 >> 5) & 0x3fffffff) << 2);
      (&DAT_00a545c4)[uVar7] = bVar1;
      uVar3 = 1 << (uVar7 & 0x1f);
      uVar2 = *(uint *)(&DAT_00a0cd1c + iVar5 + iVar6);
      *(uint *)(&DAT_00a54dd0 + iVar6) = *(uint *)(&DAT_00a54dd0 + iVar6) | uVar3;
      *(uint *)(&DAT_00a0cd1c + iVar5 + iVar6) = uVar2 | uVar3;
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x7ff);
  g_CheckpointPosition.pos.x = pos->x;
  g_CheckpointPosition.pos.y = pos->y;
  g_CheckpointPosition.pos.z = pos->z;
  g_CheckpointSet = 1;
  g_CheckpointPosition.pos.w = pos->w;
  g_CheckpointPosition.rot.x = rot->x;
  g_CheckpointPosition.rot.y = rot->y;
  g_CheckpointPosition.rot.z = rot->z;
  g_CheckpointPosition.rot.w = rot->w;
  g_CheckpointPosition.colorReadOnly = (ABGR)g_heroMobyPtr->color;
  g_CheckpointPosition.light = (ABGR)g_heroMobyPtr->light;
  g_CheckpointPosition.heroType = (uint)g_heroType;
  g_CheckpointPosition.colorManipulator = g_heroMobyPtr->colorManipulator;
  g_CheckpointPosition.field12_0x3c = (int)DAT_0096bfac;
  g_CheckpointPosition.field5_0x2c = DAT_009637c4;
  g_CheckpointPosition.field6_0x30 = DAT_009637c8;
  g_CheckpointPosition.field7_0x31 = DAT_009637c9;
  g_CheckpointPosition.field8_0x32 = DAT_009637ca;
  g_CheckpointPosition.heroMobyPtr = g_heroMobyPtr;
  DAT_00a54dc4 = (int)g_PendingTrack +
                 ((uint)(ZERO_MASK((-1 - g_PendingTrack))) &
                 (int)g_MusicPlaying.track - (int)g_PendingTrack);
  return;
}


// 0x0152080 (0x48 bytes)
MobyInstance * FindMobyByUID(int unused,int uid)

{
  MobyInstance *pMVar1;
  
  pMVar1 = g_MobyInstance;
  if (g_MobyInstance != MobyInstancePermEnd) {
    do {
      if ((short)pMVar1->uid == uid) {
        return pMVar1;
      }
      pMVar1 = pMVar1 + 1;
    } while (pMVar1 != MobyInstancePermEnd);
  }
  return (MobyInstance *)0x0;
}


// 0x01520c8 (0xe0 bytes)
void RestoreMobyVarList(int *list)

{
  int iVar1;
  MobyInstance *pMVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  iVar1 = *list;
  piVar4 = list;
  if (0 < iVar1) {
    do {
      for (pMVar2 = g_MobyInstance; pMVar2 != MobyInstancePermEnd; pMVar2 = pMVar2 + 1) {
        if (pMVar2->uid == *(ushort *)(piVar4 + 4)) {
          if (pMVar2 != (MobyInstance *)0x0) {
            if (*(short *)((int)piVar4 + 0xe) == 1) {
              iVar1 = piVar4[1];
            }
            else {
              iVar1 = piVar4[1];
              pMVar2 = (MobyInstance *)pMVar2->pVar;
            }
            FastMemCopy32
                      ((int)&(pMVar2->bSphere).x + iVar1,piVar4 + 2,*(undefined2 *)(piVar4 + 3));
            iVar1 = *list;
          }
          break;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (iVar3 < iVar1);
  }
  return;
}


// 0x01521a8 (0x28 bytes)
void RestoreSavedMobyVars(void)

{
  RestoreMobyVarList((int *)&DAT_00a541c0);
  return;
}


// 0x01521d0 (0x208 bytes)
void RestoreCheckpoint(void)

{
  MobyInstance *pMVar1;
  MobyInstance *pMVar2;
  ulonglong uVar3;
  MOBY_OCLASSES MVar4;
  undefined8 in_LR;
  
  if (g_CheckpointSet == 0) {
    FastMemSet(&DAT_00a53510,0,0xc60);
    return;
  }
  FastMemCopy32(&DAT_00a53510,&g_CheckpointSet,0xc60);
  g_heroPosition.z = g_CheckpointPosition.pos.z;
  pMVar2 = g_heroMobyPtr;
  g_heroPosition.x = g_CheckpointPosition.pos.x;
  g_heroPosition.y = g_CheckpointPosition.pos.y;
  g_heroMobyPtr->color = (uint)g_CheckpointPosition.colorReadOnly;
  g_heroPosition.w = g_CheckpointPosition.pos.w;
  pMVar2->light = (uint)g_CheckpointPosition.light;
  g_heroRotation.x = g_CheckpointPosition.rot.x;
  pMVar2->colorManipulator = g_CheckpointPosition.colorManipulator;
  g_heroRotation.y = g_CheckpointPosition.rot.y;
  g_heroRotation.z = g_CheckpointPosition.rot.z;
  g_heroRotation.w = g_CheckpointPosition.rot.w;
  DAT_009637c4 = g_CheckpointPosition.field5_0x2c;
  DAT_009637cb = DAT_009637cb | 7;
  DAT_009637c8 = g_CheckpointPosition.field6_0x30;
  DAT_009637c9 = g_CheckpointPosition.field7_0x31;
  DAT_009637ca = g_CheckpointPosition.field8_0x32;
  g_MusicPlaying.track = (short)DAT_00a54dc4;
  if ((g_CheckpointPosition.heroType == 0) || (g_CheckpointPosition.heroType == 3))
  goto LAB_00152394;
  MVar4 = RATCHET;
  uVar3 = 0;
  pMVar1 = g_MobyInstance;
  if (g_CheckpointPosition.heroType < 2) {
    if (g_CheckpointPosition.heroType < 1) {
LAB_00152324:
      trapWord(0x1f,in_LR,in_LR);
    }
    else {
      MVar4 = CLANK_0057;
    }
  }
  else {
    if (2 < g_CheckpointPosition.heroType) goto LAB_00152324;
    MVar4 = GIANT_CLANK;
  }
  for (; pMVar1 < MobyInstancePermEnd; pMVar1 = pMVar1 + 1) {
    if (pMVar1->oClass == MVar4) {
      SetHeroType(g_CheckpointPosition.heroType,g_CheckpointPosition.field12_0x3c,
                        (MobyInstance *)
                        ((int)&(g_MobyInstance->bSphere).x + (int)((uVar3 & 0xffffffff) << 8)));
      pMVar2 = g_heroMobyPtr;
      break;
    }
    uVar3 = uVar3 + 1;
  }
LAB_00152394:
  UpdateMobyTransform(pMVar2);
  FastEulerToMtx(&g_heroMobyPtr->transform,&g_heroRotation);
  Camera_resetToFollow();
  RestoreMobyVarList((int *)&DAT_00a541c0);
  return;
}


// 0x01523d8 (0x144 bytes)
void SaveCheckpointMobyVar(void *data,int size,MobyInstance *moby,int isMoby,int *list)

{
  ushort uVar1;
  MOBY_OCLASSES MVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = (longlong)isMoby;
  uVar4 = (undefined2)isMoby;
  uVar1 = moby->uid;
  MVar2 = moby->oClass;
  if (isMoby != 1) {
    moby = (MobyInstance *)moby->pVar;
  }
  iVar3 = 0;
  iVar6 = (int)(short)((short)data - (short)moby);
  piVar5 = list;
  if (0 < *list) {
    do {
      if ((((piVar5[1] == iVar6) && ((uint)*(ushort *)(piVar5 + 3) == size)) &&
          (uVar1 == *(ushort *)(piVar5 + 4))) &&
         ((MVar2 == *(MOBY_OCLASSES *)((int)piVar5 + 0x12) &&
          (lVar7 = (longlong)*(short *)((int)piVar5 + 0xe), *(short *)((int)piVar5 + 0xe) != 0)))) {
        FastMemCopy32(piVar5 + 2,data,size);
        return;
      }
      uVar4 = (undefined2)lVar7;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar3 < *list);
  }
  iVar3 = *list;
  *list = iVar3 + 1;
  list[iVar3 * 4 + 1] = iVar6;
  FastMemCopy32(list + iVar3 * 4 + 2,data,size);
  *(short *)(list + iVar3 * 4 + 3) = (short)size;
  *(undefined2 *)((int)list + iVar3 * 0x10 + 0xe) = uVar4;
  *(ushort *)(list + iVar3 * 4 + 4) = uVar1;
  *(MOBY_OCLASSES *)((int)list + iVar3 * 0x10 + 0x12) = MVar2;
  return;
}


