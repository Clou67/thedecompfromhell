// game/update/moby166.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2a8258-0x2a8464
#include "game/update/moby166.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02a8258 (0x20c bytes)
/* Moby 166 */

void UpdateMoby_166(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  int iVar5;
  void *pvVar6;
  
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar1 + 4) = DAT_00faf850;
    pMVar3 = g_MobyInstance;
    pMVar4 = g_MobyInstance + *(int *)((int)pvVar1 + 0x10);
    *(undefined4 *)((int)pvVar1 + 8) = 3;
    *(MobyInstance **)((int)pvVar1 + 0x20) = pMVar4;
    *(MobyInstance **)((int)pvVar1 + 0x24) = pMVar3 + *(int *)((int)pvVar1 + 0x14);
    *(MobyInstance **)((int)pvVar1 + 0x28) = pMVar3 + *(int *)((int)pvVar1 + 0x18);
    *(MobyInstance **)((int)pvVar1 + 0x2c) = pMVar3 + *(int *)((int)pvVar1 + 0x1c);
  }
  else if (moby->state < 2) {
    iVar5 = MB_damage(moby,0x10000,0);
    FastDecTimerS32((int)pvVar1 + 0xc);
    if ((iVar5 != 0) && (*(int *)((int)pvVar1 + 0xc) == 0)) {
      moby->damage = -1;
      iVar5 = *(int *)((int)pvVar1 + 8) + -1;
      *(undefined4 *)((int)pvVar1 + 0xc) = DAT_00faf854;
      *(int *)((int)pvVar1 + 8) = iVar5;
      if (iVar5 < 1) {
        DeleteMoby(moby);
        return;
      }
    }
    if (((((*(char *)(*(int *)((int)pvVar1 + 0x20) + 0x20) == 'P') ||
          (*(char *)(*(int *)((int)pvVar1 + 0x24) + 0x20) == 'P')) ||
         (*(char *)(*(int *)((int)pvVar1 + 0x28) + 0x20) == 'P')) ||
        (*(char *)(*(int *)((int)pvVar1 + 0x2c) + 0x20) == 'P')) &&
       (iVar5 = FastDecTimerS32((int)pvVar1 + 4), iVar5 != 0)) {
      iVar5 = 0;
      *(undefined4 *)((int)pvVar1 + 4) = DAT_00faf850;
      pvVar6 = pvVar1;
      do {
        if (*(char *)(*(int *)((int)pvVar6 + 0x20) + 0x20) == 'P') {
          *(undefined1 *)(*(int *)((int)pvVar1 + iVar5 * 4 + 0x20) + 0x20) = 0x51;
          iVar2 = *(int *)((int)pvVar1 + iVar5 * 4 + 0x20);
          *(f32 *)(iVar2 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar2 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar2 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar2 + 0x1c) = (moby->pos).w;
          *(undefined1 *)(*(int *)((int)pvVar1 + iVar5 * 4 + 0x20) + 0xa4) = 0xff;
          return;
        }
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 4);
    }
  }
  return;
}


