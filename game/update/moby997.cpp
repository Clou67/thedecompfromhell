// game/update/moby997.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4cf014-0x4cf144
#include "game/update/moby997.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"

// 0x04cf014 (0x14 bytes)
void M997_004cf014(void)

{
  DAT_008f90cc = 0x10000;
  return;
}


// 0x04cf030 (0x114 bytes)
/* Moby 997 */

void UpdateMoby_997(MobyInstance *moby)

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
    if (((&g_Checkpoint.objState[0])[(short)uVar2] != '\0') ||
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) != 0)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->pos).z + g_FrameTime;
    (moby->pos).z = fVar4;
    if (pfVar3[2] + 4.0 <= fVar4) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    (moby->pos).z = pfVar3[2] + 4.0;
  }
  return;
}


