// game/update/moby236.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x304bb8-0x304d2c
#include "game/update/moby236.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x0304bb8 (0xe0 bytes)
MobyInstance * M236_00304bb8(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(AMMOCRATE_00E0|VENDOR_GUY);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pvVar3 = pMVar4->pVar;
    pMVar4->alpha = '0';
    pMVar4->scale = pMVar4->scale * 0.5;
    SetColorOfMoby(pMVar4,0xff,0x80,0);
    (pMVar4->pos).x = *param_2;
    MVar2 = pMVar4->modeBits;
    (pMVar4->pos).y = param_2[1];
    fVar1 = param_2[2];
    *(undefined4 *)((int)pvVar3 + 4) = 0xfffffec0;
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_2[3];
    pMVar4->modeBits = MVar2 | (DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION);
  }
  return pMVar4;
}


// 0x0304c98 (0x94 bytes)
/* Moby 236 */

void UpdateMoby_236(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = piVar1[1];
  iVar2 = *piVar1 + iVar3;
  *piVar1 = iVar2;
  if (iVar2 < 0x1001) {
    if (iVar2 < 0) {
      iVar3 = iVar3 + 0x1000;
      *piVar1 = iVar2 + 0x1000;
    }
  }
  else {
    iVar3 = iVar3 + -0x1000;
    *piVar1 = iVar2 + -0x1000;
  }
  MB_AddShortPairOffset(moby->pClass,0,iVar3);
  moby->modeBits = moby->modeBits | (DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION);
  return;
}


