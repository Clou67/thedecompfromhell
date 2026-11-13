// game/update/moby1316.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x245824-0x245a3c
#include "game/update/moby1316.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/update/moby1118.h"
#include "idol/mUnk.h"

// 0x0245824 (0x14 bytes)
void M1316_00245824(void)

{
  DAT_0078e37c = 0x10000;
  return;
}


// 0x0245840 (0x1fc bytes)
/* Moby 1316 */

ulonglong UpdateMoby_1316(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = (ulonglong)(int)moby;
  bVar1 = moby->state;
  pvVar5 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | MIRROR;
    FUN_004d3720(uVar6,pvVar5);
    uVar6 = 0x406ccccd;
    *(undefined4 *)((int)pvVar5 + 0xc) = 0x406ccccd;
  }
  else if (bVar1 < 2) {
    iVar7 = FUN_004d3870(uVar6,pvVar5);
    uVar6 = (ulonglong)(byte)moby->levelFlagIdx;
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    if (iVar7 != 0) {
      moby->state = '\x02';
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) &&
        (fVar3 = g_heroPosition.y - fVar3, fVar2 = g_heroPosition.x - fVar2,
        fVar4 = g_heroPosition.z - fVar4, SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) < 4.0)
        ) && (ABS(fVar4) < 4.0)) {
      SetLevelFlag();
      SetSpawnPoint
                ((Vec4 *)&Cuboids[*(int *)((int)pvVar5 + 0x48)].pos,
                 (Vec4 *)&Cuboids[*(int *)((int)pvVar5 + 0x48)].rot);
      iVar7 = memcard_Save(0,-1);
      uVar6 = (ulonglong)iVar7;
    }
  }
  else if ((bVar1 < 3) && (uVar6 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar6 = (ulonglong)*(ushort *)((int)pvVar5 + 4);
    if (*(ushort *)((int)pvVar5 + 4) == 2) {
      g_MiscLevelFlags.Raritanium = false;
      MB_UnlockItem(0x23,1);
      MB_UnlockTrophy(THESE_ARE_NOT_THE_DROIDS);
      iVar7 = Help_QueueMessage(STR_THE_PERSUADER_IS_AN_0x2AF9,0x3b);
      uVar6 = (ulonglong)iVar7;
    }
  }
  return uVar6;
}


