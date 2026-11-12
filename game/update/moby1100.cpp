// game/update/moby1100.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1bddd0-0x1be048
#include "game/update/moby1100.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "idol/fastfunc.h"

// 0x01bddd0 (0x14 bytes)
void M1100_001bddd0(void)

{
  DAT_00763d68 = 0x10000;
  return;
}


// 0x01bddf0 (0x258 bytes)
/* Moby 1100 */

void UpdateMoby_1100(MobyInstance *moby)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CollDamageOut *pCVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float local_b0 [4];
  float local_a0;
  float local_90;
  float local_80;
  
  uVar1 = moby->uid;
  if (((&g_Checkpoint.objState[0])[(short)uVar1] == '\0') &&
     ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) == 0)) {
    iVar5 = 0;
    moby->drawDistance = 0x80;
    pCVar6 = CollDamage;
    dVar14 = 0.25;
    do {
      if ((pCVar6->pVictimMoby == moby) && ((pCVar6->damageFlags & 0x20000) != 0)) {
        pMVar2 = pCVar6->pDamager;
        if ((pMVar2->oClass == VISIBOMB_MISSILE) || (pMVar2->oClass == GOLD_DEVASTATOR_MISSILE)) {
          dVar13 = (double)(moby->pos).y;
          dVar12 = (double)(moby->pos).x;
          dVar11 = (double)(pMVar2->pos).y;
          dVar10 = (double)(pMVar2->pos).x;
          dVar9 = (double)(moby->pos).z;
          dVar8 = (double)(pMVar2->pos).z;
          dVar7 = (double)(moby->pos).w;
          FastNormalizeRMtx4(local_b0,(longlong)(int)moby + 0xc0);
          if (dVar14 < (double)(float)((double)local_80 * dVar7 +
                                      (double)(local_90 * (float)(dVar9 - dVar8) +
                                              local_b0[0] * (float)(dVar12 - dVar10) +
                                              local_a0 * (float)(dVar13 - dVar11)))) {
            uVar1 = moby->uid;
            iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
            iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
            uVar3 = *(uint *)(&g_CheckpointBits + iVar5);
            *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) =
                 *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
            *(uint *)(&g_CheckpointBits + iVar5) = uVar3 | 1 << (uVar1 & 0x1f);
            DeleteMoby(moby);
            return;
          }
          pCVar6->pVictimMoby = (MobyInstance *)0x0;
        }
        else {
          pCVar6->pVictimMoby = (MobyInstance *)0x0;
        }
      }
      iVar5 = iVar5 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar5 < 0x40);
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


