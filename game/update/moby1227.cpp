// game/update/moby1227.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x210c3c-0x210ce4
#include "game/update/moby1227.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0210c3c (0x8c bytes)
undefined8 M1227_00210c3c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].setByGroup == '\0') &&
         (*(int *)((int)g_MobyInstance[*puVar2 & 0x7fff].pVar + 0x144) == 0)) {
        return 0;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}


// 0x0210cc8 (0x14 bytes)
void M1227_00210cc8(void)

{
  DAT_0076849c = 0x10000;
  return;
}


// 0x0210ce0 (0x4 bytes)
/* Moby 1227 */

MobyInstance * UpdateMoby_1227(MobyInstance *moby)

{
  return moby;
}


