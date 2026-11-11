// game/update/moby161.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2a3d6c-0x2a403c
#include <stdlib.h>
#include "game/update/moby161.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02a3d6c (0x14 bytes)
void M161_002a3d6c(void)

{
  DAT_007ac89c = 0x10000;
  return;
}


// 0x02a3d80 (0x158 bytes)
MobyInstance * M161_002a3d80(f32 *param_1)

{
  f32 fVar1;
  uint *puVar2;
  MobyInstance *pMVar3;
  int iVar4;
  
  pMVar3 = CreateMoby(0xa1);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (uint *)pMVar3->pVar;
    pMVar3->updateDistance = '@';
    pMVar3->drawDistance = 0x40;
    pMVar3->enabled = '\x01';
    SetColorOfMoby(pMVar3,0x80,0x80,0x80);
    pMVar3->alpha = -0x80;
    pMVar3->unk58 = 1.0;
    (pMVar3->pos).x = *param_1;
    fVar1 = param_1[1];
    pMVar3->collision = (ushort *)0x0;
    (pMVar3->pos).y = fVar1;
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    *(undefined1 *)&(pMVar3->rotation).x = 0;
    (pMVar3->pos).w = fVar1;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).y = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).z = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).w = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 3) = 0;
    iVar4 = rand();
    *puVar2 = iVar4 + 0x1eU & 0xff;
    UpdateMobyTransform(pMVar3);
    pMVar3->modeBits = pMVar3->modeBits | NO_POST_UPDATE;
  }
  return pMVar3;
}


// 0x02a3ee0 (0x15c bytes)
/* Moby 161 */

void UpdateMoby_161(MobyInstance *moby)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  if (moby != (MobyInstance *)0x0) {
    piVar1 = (int *)moby->pVar;
    moby->collision = (ushort *)0x0;
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 3.5));
      }
      iVar3 = rand();
      fVar2 = animationSpeed * ((float)(longlong)(int)(iVar3 + 0x1eU & 0xff) + 0.5);
      iVar3 = (int)fVar2;
      *piVar1 = (int)fVar2;
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\0')) {
      MB_SetAnimation(moby,0,0,(int)(animationSpeed * 3.5));
      iVar3 = *piVar1;
    }
    *piVar1 = iVar3 + -1;
    PostUpdateMobyLockTransform(moby);
  }
  return;
}


