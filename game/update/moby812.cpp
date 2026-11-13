// game/update/moby812.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x46d4e0-0x46d658
#include "game/update/moby812.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x046d4e0 (0x178 bytes)
/* Moby 812 */

void UpdateMoby_812(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Vec4 local_40;
  
  lVar2 = (longlong)(int)moby;
  lVar3 = lVar2 + 0x40;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 0x5c) = 1;
    if (-1 < *(int *)((int)pvVar1 + 0x80)) {
      MB_PlatformWorldToLocal
                (lVar2,g_MobyInstance + *(int *)((int)pvVar1 + 0x80),lVar2 + 0x10,lVar3,
                 (int)pvVar1 + 0x60,(int)pvVar1 + 0x70);
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    dVar6 = (double)(moby->pos).x;
    dVar5 = (double)(moby->pos).y;
    dVar4 = (double)(moby->pos).z;
    MB_PlatformGetDelta
              (lVar2,g_MobyInstance + *(int *)((int)pvVar1 + 0x80),(int)pvVar1 + 0x60,
               (int)pvVar1 + 0x70,lVar2 + 0x10,lVar3);
    local_40.x = (float)((double)(moby->pos).x - dVar6);
    local_40.y = (float)((double)(moby->pos).y - dVar5);
    local_40.w = (moby->pos).w;
    local_40.z = (float)((double)(moby->pos).z - dVar4);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x20),&local_40,ZEXT48(&stack0x00000000) - 0x50,lVar3)
    ;
  }
  return;
}


