// game/update/moby604.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x3d8af0-0x3d919c
#include "game/update/moby604.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby849.h"

// 0x03d8af0 (0x58 bytes)
void M604_003d8af0(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\v') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\v';
  }
  return;
}


// 0x03d8b48 (0x58 bytes)
void M604_003d8b48(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\v') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xb;
  }
  return;
}


// 0x03d8ba0 (0x58 bytes)
void M604_003d8ba0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\v') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xb;
  }
  return;
}


// 0x03d8bf8 (0x38 bytes)
void M604_003d8bf8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xb;
  return;
}


// 0x03d8c30 (0x40 bytes)
longlong M604_003d8c30(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03d8c70 (0x14 bytes)
void M604_003d8c70(void)

{
  DAT_008536d4 = 0x10000;
  return;
}


// 0x03d8ca0 (0x4fc bytes)
/* Moby 604 */

void UpdateMoby_604(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  double dVar5;
  
  if (moby != (MobyInstance *)0x0) {
    pfVar4 = (float *)moby->pVar;
    if ((((pfVar4 != (float *)0x0) && (moby->state != '\0')) &&
        (UnlockableItems.sonicSummoner != '\0')) && (DAT_0096ae38 == 5)) {
      dVar5 = (double)MB_DeltAngSpeed
                                ((double)(moby->rotation).z,(double)*pfVar4,
                                 (double)(g_FrameTimeSq * 6.2831855),
                                 (double)(g_FrameTimeSq * 5.7595863),0,&DAT_003d8c88,&DAT_00720000,
                                 pfVar4 + 1);
      (moby->rotation).z = (float)dVar5;
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(moby,0,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x01';
      }
    }
    else if (uVar1 == '\x06') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((moby->setByGroup == '\a') || (moby->setByGroup == '\x01')) {
          if (moby->animationId != '\x06') {
            MB_SetAnimation(moby,6,0,(int)(animationSpeed * 3.5));
          }
          moby->state = '\a';
        }
        else {
          if (moby->animationId != '\x02') {
            MB_SetAnimation(moby,2,0,(int)(animationSpeed * 3.5));
          }
          moby->state = '\x03';
        }
      }
    }
    else if (uVar1 == '\x05') {
      cVar2 = moby->setByGroup;
      if (((cVar2 == '\x06' || cVar2 == '\x03') || (cVar2 == '\a')) || (cVar2 == '\x01')) {
        if (moby->animationId != '\x05') {
          MB_SetAnimation(moby,5,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x04') {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x03') {
      cVar2 = moby->setByGroup;
      if ((cVar2 == '\x04') || (cVar2 == '\x05')) {
        if (moby->animationId != '\x03') {
          MB_SetAnimation(moby,3,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x04';
      }
      else if ((cVar2 == '\a') || (cVar2 == '\x01')) {
        if (moby->animationId != '\x06') {
          MB_SetAnimation(moby,6,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\a';
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x02') {
          MB_SetAnimation(moby,2,0,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x03';
      }
    }
    else if (uVar1 == '\x01') {
      cVar2 = moby->setByGroup;
      if ((cVar2 == '\x04' || cVar2 == '\x03') || (cVar2 == '\x05')) {
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,(int)(animationSpeed * 0.5));
      }
      fVar3 = (moby->rotation).z;
      moby->state = '\x01';
      *pfVar4 = fVar3;
    }
  }
  return;
}


