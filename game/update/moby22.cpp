// game/update/moby22.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2f7690-0x2f7c68
#include "game/update/moby22.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"

// 0x02f7690 (0x5d8 bytes)
// strings: 00a0feec: 'None'

/* Moby 22 */

void UpdateMoby_22(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  short sVar8;
  
  moby->updateDistance = -1;
  piVar2 = (int *)moby->pVar;
  if (DAT_007fef4c == 1) {
    CHAR_ARRAY_00a0feec[0x100] = '\0';
    CHAR_ARRAY_00a0feec[0x101] = '\0';
    DAT_007fef4c = 0;
  }
  iVar3 = piVar2[6];
  if ((((iVar3 != -1) && (iVar4 = piVar2[7], iVar4 != -1)) &&
      (g_MobyInstance[iVar3].oClass == SPAWN_POINT)) && (g_MobyInstance[iVar4].oClass == SPAWN_POINT)) {
    pvVar5 = g_MobyInstance[iVar3].pVar;
    pvVar6 = g_MobyInstance[iVar4].pVar;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      *(uint *)((int)pvVar5 + 8) = *(uint *)((int)pvVar5 + 8) | 8;
      *(uint *)((int)pvVar6 + 8) = *(uint *)((int)pvVar6 + 8) & 0xfffffff7;
    }
    else {
      *(uint *)((int)pvVar5 + 8) = *(uint *)((int)pvVar5 + 8) & 0xfffffff7;
      *(uint *)((int)pvVar6 + 8) = *(uint *)((int)pvVar6 + 8) | 8;
    }
  }
  uVar1 = moby->uid;
  if (((&g_Checkpoint.objState[0])[(short)uVar1] != '\0') ||
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) != 0)) {
    if (UnlockableItems.o2Mask == '\0') {
      if ((g_gameMode == GAME_MODE_NORMAL) &&
         ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<256,2>() < (int)(animationSpeed * 300.5))) {
        if ((ushort)CHAR_ARRAY_00a0feec.piece<256,2>() < 0xffff) {
          CHAR_ARRAY_00a0feec.piece<256,2>() = CHAR_ARRAY_00a0feec.piece<256,2>() + 1;
        }
        iVar3 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<258,2>() < iVar3 / 600) {
          sVar8 = (short)(iVar3 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<258,2>() =
               ((short)(iVar3 / 600) + sVar8) - ((short)((short)(iVar3 / 0x2580000) + sVar8) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec.piece<260,4>() = CHAR_ARRAY_00a0feec.piece<260,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
        MB_ShowPersistentMessage(1,0x53f1);
      }
      if (g_heroType == '\x01') {
        CHAR_ARRAY_00a0feec[0x100] = SUB21(CHAR_ARRAY_00a0feec.piece<256,2>(),1);
        CHAR_ARRAY_00a0feec[0x101] = (char)CHAR_ARRAY_00a0feec.piece<256,2>();
        CHAR_ARRAY_00a0feec[0x102] = SUB21(CHAR_ARRAY_00a0feec.piece<258,2>(),1);
        CHAR_ARRAY_00a0feec[0x103] = (char)CHAR_ARRAY_00a0feec.piece<258,2>();
        CHAR_ARRAY_00a0feec[0x104] = SUB41(CHAR_ARRAY_00a0feec.piece<260,4>(),3);
        CHAR_ARRAY_00a0feec[0x105] = SUB41(CHAR_ARRAY_00a0feec.piece<260,4>(),2);
        CHAR_ARRAY_00a0feec[0x106] = SUB41(CHAR_ARRAY_00a0feec.piece<260,4>(),1);
        CHAR_ARRAY_00a0feec[0x107] = (char)CHAR_ARRAY_00a0feec.piece<260,4>();
        return;
      }
    }
    else {
      g_MobyInstance[*piVar2].modeBits = g_MobyInstance[*piVar2].modeBits | DISABLED;
      g_MobyInstance[*piVar2].modeBits = g_MobyInstance[*piVar2].modeBits | NO_UPDATE;
      g_MobyInstance[*piVar2].collision = (ushort *)0x0;
    }
  }
  uVar1 = moby->uid;
  iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  iVar3 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  uVar7 = *(uint *)(&g_CheckpointBits + iVar3);
  *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) =
       *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
  *(uint *)(&g_CheckpointBits + iVar3) = uVar7 | 1 << (uVar1 & 0x1f);
  if ((piVar2[2] != -1) && (iVar3 = *piVar2, iVar3 != -1)) {
    if (UnlockableItems.o2Mask == '\0') {
      g_MobyInstance[iVar3].collision = (g_MobyInstance[iVar3].pClass)->collision;
      if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) || (piVar2[5] == -1)) {
        Hero_Warp(&Cuboids[piVar2[5]].pos.x,&Cuboids[piVar2[5]].rot.x,0,1);
      }
      else {
        Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0,1);
      }
      SetHeroType(1,0x43,g_MobyInstance + *piVar2);
      music_SetTransition(2,4);
    }
    else if (g_heroType == '\x01') {
      Hero_RevertToRatchet();
      Hero_Warp(&Cuboids[piVar2[1]].pos.x,&Cuboids[piVar2[1]].rot.x,0,1);
      music_SetTransition(0,5);
      g_MobyInstance[*piVar2].modeBits = g_MobyInstance[*piVar2].modeBits | DISABLED;
      g_MobyInstance[*piVar2].modeBits = g_MobyInstance[*piVar2].modeBits | NO_UPDATE;
      g_MobyInstance[*piVar2].collision = (ushort *)0x0;
      DAT_0096bfab = 1;
      DeleteMoby(moby);
    }
    else {
      DAT_0096bfab = 1;
      DeleteMoby(moby);
    }
  }
  return;
}


