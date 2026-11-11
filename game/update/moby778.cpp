// game/update/moby778.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4598f8-0x459d4c
#include "game/update/moby778.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"

// 0x04598f8 (0x14 bytes)
void M778_004598f8(void)

{
  DAT_00873954 = 0x10000;
  return;
}


// 0x0459950 (0x32c bytes)
/* Moby 778 */

void UpdateMoby_778(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r7;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_d0;
  GPiece<32> local_c0;
  
  piVar1 = (int *)moby->pVar;
  iVar2 = MB_damage(moby,0x10000,0);
  moby->damage = -1;
  if ((iVar2 != 0) && (dVar5 = 0.0, 0 < *(int *)(iVar2 + 0x2c))) {
    MB_randInt((piVar1[1] - *piVar1) + 1);
    PlayMobySound(0,0,moby);
    iVar2 = 0;
    dVar6 = 1.5;
    dVar7 = 3.0;
    dVar8 = 125000.0;
    dVar9 = 175000.0;
    dVar10 = 0.5;
    do {
      MB_randRot();
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randRot();
      MB_randRangeFloat((float)dVar6,(float)dVar7);
      MB_randRangeFloat((float)dVar5,(float)dVar7);
      uVar4 = MB_randRangeFloat((float)dVar8,(float)dVar9);
      iVar3 = MB_randRange(0x2d,0x3c);
      SpawnPart_22
                (uVar4,local_d0,local_c0,0x207f7f7f,0x272727,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar10)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x96);
    M778_00459c80(moby);
    DeleteMoby(moby);
  }
  return;
}


// 0x0459c80 (0xcc bytes)
MobyInstance * M778_00459c80(int param_1)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = CreateMoby(BROKEN_PIPE_030B);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = ' ';
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    puVar2 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    (pMVar4->rotation).y = fVar1;
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    *puVar2 = 0xffffffff;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


