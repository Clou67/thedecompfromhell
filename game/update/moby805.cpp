// game/update/moby805.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x465d10-0x466090
#include "game/update/moby805.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"

// 0x0465d10 (0x380 bytes)
/* Moby 805 */

void UpdateMoby_805_CheckpointManager(MobyInstance *moby)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  LevelId LVar7;
  int iVar9;
  ulonglong uVar8;
  uint uVar10;
  double dVar11;
  Vec4 local_30;
  
  uVar10 = 0;
  piVar4 = (int *)moby->pVar;
  uVar5 = piVar4[2];
  if ((uVar5 & 8) != 0) {
    return;
  }
  if (moby->setByGroup == '\0') {
    moby->setByGroup = '\x01';
    piVar4[5] = 0;
    return;
  }
  if ((piVar4[6] != -1) && (g_LevelFlags[Level][piVar4[6]] != -1)) {
    return;
  }
  if (((uVar5 & 2) != 0) && (g_heroType != '\x01')) {
    return;
  }
  if ((((uVar5 & 4) != 0) && (g_heroType != '\x03')) && (g_heroType != '\0')) {
    return;
  }
  if ((((uVar5 & 0x10) != 0) && (1 < g_heroStateType)) && (g_heroStateType != 9)) {
    return;
  }
  if ((Level == Quartu) && (g_heroType == '\x02')) {
    return;
  }
  iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar4);
  LVar7 = Level;
  uVar8 = (ulonglong)Level;
  if (iVar9 != 0) {
    uVar10 = (uint)(ZERO_MASK(piVar4[5])) & 1;
  }
  piVar4[5] = (uint)(iVar9 != 0);
  if (((uVar10 == 0) && (uVar2 = moby->uid, (&g_Checkpoint.objState[0])[(short)uVar2] == '\0')) &&
     ((*(uint *)(&g_LevelObjBits + LVar7 * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
      1 << (uVar2 & 0x1f)) == 0)) {
    piVar4[3] = 0;
  }
  else if ((piVar4[3] == 0) || (piVar4[4] != 0)) {
    piVar4[3] = 1;
    SetLevelFlag(moby->levelFlagIdx);
    local_30.x = (moby->pos).x;
    local_30.y = (moby->pos).y;
    local_30.z = (moby->pos).z;
    local_30.w = (moby->pos).w;
    dVar11 = (double)GetGroundZ(0x3fe0000000000000,&local_30,0);
    fVar1 = (moby->pos).z;
    local_30.z = (float)dVar11;
    if (2.0 < ABS((float)((double)fVar1 - dVar11))) {
      local_30.z = fVar1;
    }
    SetSpawnPoint(&local_30,(Vec4 *)&moby->rotation);
    uVar2 = moby->uid;
    (&g_CheckpointLive.objState[0])[(short)uVar2] = 0;
    (&g_Checkpoint.objState[0])[(short)uVar2] = 0;
    iVar6 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar8 = (ulonglong)Level;
    uVar3 = moby->uid;
    iVar9 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
    uVar5 = *(uint *)(&g_CheckpointBits + iVar9);
    *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) =
         *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar6) & ~(1 << (uVar2 & 0x1f));
    *(uint *)(&g_CheckpointBits + iVar9) = uVar5 & ~(1 << (uVar3 & 0x1f));
  }
  if ((moby->state == '\0') &&
     (g_LevelFlags[0][(int)(uVar8 << 4) + (uint)(byte)moby->levelFlagIdx] == -1)) {
    moby->state = '\x01';
  }
  return;
}


