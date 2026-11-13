// game/update/moby1139.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1dbf60-0x1dc0b8
#include "game/update/moby1139.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x01dbf60 (0x158 bytes)
/* Moby 1139 */

void UpdateMoby_1139(MobyInstance *moby)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  GPiece<40> local_50;
  
  if (moby->state == 0) {
    moby->updateDistance = -0x80;
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else if (((moby->state < 2) &&
           (iVar1 = FastCheckBsphereInView(0x4060000000000000,local_50), iVar1 != -1)) &&
          (g_heroStateType == 0x16)) {
    iVar1 = 0;
    do {
      uVar2 = MB_randRot();
      uVar3 = MB_randRot();
      SpawnPart_67(uVar2,uVar3,moby,&DAT_00a15d30);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}


