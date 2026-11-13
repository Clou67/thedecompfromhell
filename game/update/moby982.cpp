// game/update/moby982.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4c82d0-0x4c84b4
#include "game/update/moby982.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"

// 0x04c82d0 (0x14 bytes)
void FUN_004c82d0(int param_1)

{
  *(char *)(param_1 + 0xbc) =
       (char)((ulonglong)(LZCOUNT((uint)*(byte *)(param_1 + 0xbc)) << 0x20) >> 0x25);
  return;
}


// 0x04c8310 (0x1a4 bytes)
/* Moby 982 */

void UpdateMoby_982(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (moby->state < 2) {
                    /* WARNING: Load size is inaccurate */
    iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*moby->pVar);
    if (iVar5 == 0) {
      WaterPlaneActive = 0;
    }
    else {
      DAT_00e5aa90 = g_heroPosition.x;
      WaterPlaneActive = 1;
      DAT_00e5aa94 = g_heroPosition.y;
      DAT_00e5aa9c = 0x42400000;
      DAT_00969ebe = 5;
      fVar1 = (float)(longlong)(worldUpdateTime % 0x168) * 0.017444445 - 3.14;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = fVar3 * fVar3;
      fVar2 = fVar1 * fVar1 * fVar3;
      fVar4 = fVar1 * fVar2;
      DAT_00e5aa98 = (fVar1 * fVar4 * 2.601887e-06 +
                     fVar4 * -0.0001980741 +
                     fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 0.25 + 59.5;
    }
  }
  return;
}


