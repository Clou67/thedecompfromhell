// game/update/moby1641.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2a6a04-0x2a6bd0
#include "game/update/moby1641.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02a6a04 (0x14 bytes)
void M1641_002a6a04(void)

{
  DAT_007acb24 = 0x10000;
  return;
}


// 0x02a6a18 (0x1b8 bytes)
/* Moby 1641 */

void UpdateMoby_1641(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<48> local_60;
  
  pvVar1 = moby->pVar;
  iVar2 = 0;
  if (0 < *(int *)((int)pvVar1 + 0x14)) {
    do {
      MB_randRangeFloat(-*(float *)((int)pvVar1 + 4),*(float *)((int)pvVar1 + 4));
      FastEulerToMtx(local_60,(longlong)(int)moby + 0x40);
      MB_randRangeFloat
                (*(float *)((int)pvVar1 + 0x18) * g_FrameTime,
                 *(float *)((int)pvVar1 + 0x1c) * g_FrameTime);
      MB_randRangeFloat
                (*(float *)((int)pvVar1 + 0x20) * g_FrameTime,
                 *(float *)((int)pvVar1 + 0x24) * g_FrameTime);
      SpawnPart_77
                ((double)*(float *)((int)pvVar1 + 0xc),local_80,local_70,
                 *(undefined4 *)((int)pvVar1 + 0x10));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)pvVar1 + 0x14));
  }
  return;
}


