// game/update/moby17.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2acf90-0x2ad088
#include "game/update/moby17.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/mUnk.h"

// 0x02acf90 (0xf8 bytes)
/* Moby 17 */

ulonglong UpdateMoby_17(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)(int)moby;
  bVar1 = moby->state;
  pvVar2 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    FUN_004d3720(uVar3,pvVar2);
    uVar3 = 0x406ccccd;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0x406ccccd;
  }
  else if (bVar1 < 2) {
    uVar3 = FUN_004d3870(uVar3,pvVar2);
    if ((int)uVar3 != 0) {
      uVar3 = 2;
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (uVar3 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar3 = (ulonglong)*(ushort *)((int)pvVar2 + 4);
    if (*(ushort *)((int)pvVar2 + 4) == 2) {
      Help_Kill();
      MB_UnlockItem(3,1);
      iVar4 = Help_QueueMessage(STR_YOUR_THRUSTER_PACK_INCLUDES_THE_0x2AFB,0x3d);
      uVar3 = (ulonglong)iVar4;
    }
  }
  return uVar3;
}


