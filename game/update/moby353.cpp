// game/update/moby353.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x354478-0x354634
#include "game/update/moby353.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"

// 0x0354478 (0x1a8 bytes)
/* Moby 353 */

void UpdateMoby_353(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  f32 *pfVar3;
  float fVar4;
  
  bVar1 = moby->state;
  pfVar3 = (f32 *)moby->pVar;
  if (bVar1 == 0) {
    *pfVar3 = (moby->pos).x;
    pfVar3[1] = (moby->pos).y;
    pfVar3[2] = (moby->pos).z;
    pfVar3[3] = (moby->pos).w;
    uVar2 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar2] != '\0') ||
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) != 0)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).y + -g_FrameTime;
    (moby->pos).y = fVar4;
    if (fVar4 <= pfVar3[1] + -3.75) {
      bVar1 = moby->levelFlagIdx;
      uVar2 = moby->uid;
      (&DAT_00a53964)[(short)uVar2] = bVar1 + 2;
      if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1))))
      {
        (&DAT_00a545c4)[(short)uVar2] = bVar1 + 2;
      }
      moby->state = '\x02';
      if (Level == Orxon) {
        g_MiscLevelFlags.field80_0x50 = 1;
      }
    }
  }
  else if (bVar1 < 3) {
    (moby->pos).y = pfVar3[1] + -3.75;
  }
  return;
}


// 0x0354620 (0x14 bytes)
void M353_00354620(void)

{
  DAT_00840408 = 0x10000;
  return;
}


