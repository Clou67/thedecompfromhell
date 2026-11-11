// game/update/moby1632.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2a4e7c-0x2a5144
#include "game/update/moby1632.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"

// 0x02a4e7c (0x14 bytes)
void M1632_002a4e7c(void)

{
  DAT_007ac95c = 0x10000;
  return;
}


// 0x02a4e90 (0xf0 bytes)
MobyInstance * FUN_002a4e90(double param_1,int param_2,f32 *param_3)

{
  int *piVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = CreateMoby(0x660);
  if (pMVar2 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar2->pVar;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    piVar1[0x18] = param_2;
    pMVar2->scale = (float)((double)pMVar2->pClass->gScale * param_1);
    (pMVar2->pos).x = *param_3;
    (pMVar2->pos).y = param_3[1];
    (pMVar2->pos).z = param_3[2];
    (pMVar2->pos).w = param_3[3];
    if (param_2 != 0) {
      piVar1[0x19] = (int)*(short *)(param_2 + 0xa6);
    }
    *piVar1 = (int)(piVar1 + 8);
    pMVar2->modeBits = pMVar2->modeBits | HAS_SPECIAL_VARS;
    UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}


// 0x02a4fa0 (0x1a4 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 1632 */

void UpdateMoby_1632(MobyInstance *moby)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  GPiece<16> auStack_20;
  
  pvVar1 = moby->pVar;
  iVar3 = *(int *)((int)pvVar1 + 0x60);
  if ((((iVar3 == 0) || ((int)*(short *)(iVar3 + 0xa6) != *(int *)((int)pvVar1 + 100))) ||
      (*(char *)(iVar3 + 0x20) == -2)) || (*(char *)(iVar3 + 0x20) == -3)) {
    DeleteMoby(moby);
  }
  else {
    uVar2 = MB_damage(moby,0xffffffffffffffff,0);
    iVar3 = (int)uVar2;
    if (iVar3 != 0) {
      auVar4 = loadVectorLeftIndexed(0x10,uVar2);
      auVar5 = loadVectorRightIndexed(0x20,uVar2);
      auVar7 = loadVectorLeftIndexed(0x18,uVar2);
      auVar6 = loadVectorLeftIndexed(0x14,uVar2);
      auVar8 = loadVectorRightIndexed(0x24,uVar2);
      auVar10 = loadVectorRightIndexed(0x28,uVar2);
      auVar9 = loadVectorLeftIndexed(0x1c,uVar2);
      auVar11 = loadVectorRightIndexed(0x2c,uVar2);
      auVar12 = loadVectorLeftIndexed(0x30,uVar2);
      auVar13 = loadVectorRightIndexed(0x40,uVar2);
      auVar4 = vectorMergeHighWord(auVar4 | auVar5,auVar6 | auVar8);
      auVar5 = vectorMergeHighWord(auVar7 | auVar10,auVar9 | auVar11);
      auVar4 = vectorPermute(auVar4,auVar5,_DAT_002a4f80);
      auVar5 = vectorPermute(auVar12 | auVar13,auStack_20,_DAT_002a4f90);
      local_70 = auVar4.piece<0,8>();
      local_68 = auVar4.piece<8,8>();
      local_50 = auVar5.piece<0,8>();
      local_48 = auVar5.piece<8,8>();
      CollDamageMobyDirect
                (*(undefined4 *)((int)pvVar1 + 0x60),0x40,local_70,local_68,
                 *(undefined8 *)(iVar3 + 0x20),*(undefined8 *)(iVar3 + 0x28),local_50,local_48);
    }
    moby->damage = -1;
  }
  return;
}


