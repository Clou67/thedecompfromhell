// game/update/moby1149.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1e0448-0x1e05a4
#include "game/update/moby1149.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update.h"

// 0x01e0448 (0x14 bytes)
void M1149_001e0448(void)

{
  DAT_00764d10 = 0x10000;
  return;
}


// 0x01e0460 (0x144 bytes)
/* Moby 1149 */

void UpdateMoby_1149(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = moby->uid;
  piVar2 = (int *)moby->pVar;
  if (((&g_Checkpoint.objState[0])[(short)uVar1] == '\0') &&
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) == 0)) {
    iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar5 != 0) && (piVar2[1] != -1)) {
      uVar1 = moby->uid;
      iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar3 = *(uint *)(&g_CheckpointBits + iVar5);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar5) = uVar3 | 1 << (uVar1 & 0x1f);
      mode_sceneInit(piVar2[1]);
    }
  }
  return;
}


