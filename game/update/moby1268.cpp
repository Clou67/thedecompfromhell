// game/update/moby1268.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x235530-0x235a08
#include "game/update/moby1268.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "game/update/moby849.h"

// 0x0235530 (0x58 bytes)
void M1268_00235530(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x0235588 (0x58 bytes)
void M1268_00235588(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x02355e0 (0xd0 bytes)
undefined8
M1268_002355e0
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00486828();
  uVar1 = M849_0048acb8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_2->state == '\a') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\a';
  }
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x68) == 6)) {
    PlayMobySound(2,0,param_2);
  }
  return uVar1;
}


// 0x02356b0 (0x38 bytes)
void M1268_002356b0(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x02356e8 (0x40 bytes)
longlong M1268_002356e8(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x0235728 (0x14 bytes)
void M1268_00235728(void)

{
  DAT_0078d918 = 0x10000;
  return;
}


// 0x0235740 (0xb0 bytes)
void M1268_00235740(undefined8 param_1,int param_2)

{
  if (param_2 < 3) {
    if (0 < param_2) {
      if (1 < param_2) {
        MB_ShowPersistentMessage(0xb,0x2b0d);
        return;
      }
      MB_ShowPersistentMessage(0xb,0x2b0d);
      return;
    }
  }
  else {
    if (param_2 < 4) {
      MB_ShowPersistentMessage(0xb,0x2b0d);
      return;
    }
    if (param_2 < 5) {
      MB_ShowPersistentMessage(0xb,0x2b0b);
      return;
    }
  }
  MB_ShowPersistentMessage(0xb,0x2b0c);
  return;
}


// 0x02357f8 (0x210 bytes)
/* Moby 1268 */

void UpdateMoby_1268(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  
  piVar2 = (int *)moby->pVar;
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_0078d93c;
  if (bVar1 == 0) {
    if ((piVar2[2] == -1) || (g_LevelFlags[Level][piVar2[2]] == -1)) {
      moby->state = '\x01';
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->state = '\x02';
      moby->modeBits = moby->modeBits | DISABLED;
    }
    if (moby->animationId != '\x02') {
      MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 < 2) {
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (M1268_00235740(moby,*(undefined2 *)(piVar2 + 1)),
        (g_Pad.buttonsPressedThisFrame & TRIANGLE) != 0)) && (g_HelpMsgOwner == 0xb)) {
      if (*(short *)(piVar2 + 1) == 1) {
        g_MiscLevelFlags.field85_0x55 = 1;
      }
      Hero_Warp(&Cuboids[*piVar2].pos.x,&Cuboids[*piVar2].rot.x,0,1);
    }
  }
  else if ((bVar1 < 3) && (g_LevelFlags[Level][piVar2[2]] == -1)) {
    moby->collision = moby->pClass->collision;
    moby->state = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


