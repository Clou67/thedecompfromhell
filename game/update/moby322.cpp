// game/update/moby322.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x341da8-0x342088
#include "game/update/moby322.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby313.h"

// 0x0341da8 (0x2e0 bytes)
/* Moby 322 */

void UpdateMoby_322(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = MB_damage(moby,0x40000,0);
  if (iVar2 != 0) {
    PlayMobySound(0,0,moby);
    dVar3 = 0.0;
    iVar2 = 0;
    dVar4 = -1.0;
    dVar5 = 1.0;
    dVar6 = 8.0;
    fVar1 = 12.0;
    do {
      dVar7 = (double)fVar1;
      MB_randRangeFloat((float)dVar4,(float)dVar5);
      MB_randRangeFloat((float)dVar4,(float)dVar5);
      MB_randRangeFloat((float)dVar3,(float)dVar5);
      fVar1 = (float)dVar7;
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      FUN_0033f5c0(moby);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x28);
    DeleteMoby(moby);
  }
  return;
}


