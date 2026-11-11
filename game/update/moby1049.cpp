// game/update/moby1049.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x1a1e24-0x1a2394
#include "game/update/moby1049.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"

// 0x01a1e24 (0x6c bytes)
void FUN_001a1e24(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      pMVar4 = g_MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      MVar1 = g_MobyInstance[uVar3].modeBits;
      g_MobyInstance[uVar3].state = '\x12';
      pMVar4[uVar3].collision = (ushort *)0x0;
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x01a1e90 (0x7c bytes)
void FUN_001a1e90(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  ushort *puVar6;
  
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar5 = g_MobyInstance;
      uVar3 = *puVar6 & 0x7fff;
      if (g_MobyInstance[uVar3].state == '\x12') {
        pMVar4 = g_MobyInstance + uVar3;
        MVar1 = g_MobyInstance[uVar3].modeBits;
        g_MobyInstance[uVar3].state = '\0';
        pMVar5[uVar3].collision = pMVar4->pClass->collision;
        pMVar5[uVar3].modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x01a1f0c (0x14 bytes)
void M1049_001a1f0c(void)

{
  DAT_007406b8 = 0x10000;
  return;
}


// 0x01a1f28 (0x134 bytes)
MobyInstance *
M1049_001a1f28(f32 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  MobyModeBit MVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = CreateMoby(0x419);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar3 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).y = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).z = (float)dVar5;
    (pMVar4->pos).x = *param_1;
    (pMVar4->pos).y = param_1[1];
    (pMVar4->pos).z = param_1[2];
    (pMVar4->pos).w = param_1[3];
    *puVar3 = *param_2;
    MVar2 = pMVar4->modeBits;
    puVar3[1] = param_2[1];
    uVar1 = param_2[2];
    puVar3[4] = param_3;
    puVar3[2] = uVar1;
    uVar1 = param_2[3];
    pMVar4->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    puVar3[3] = uVar1;
    pMVar4->alpha = '0';
    UpdateMobyTransform(pMVar4);
    SpawnPart_26
              (0x411e848000000000,pMVar4,&DAT_001a1f20,0xffffffff800040ff,0x80,0xffffffffffffffff);
  }
  return pMVar4;
}


// 0x01a2090 (0x2f0 bytes)
/* Moby 1049 */

void UpdateMoby_1049(MobyInstance *moby)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  float *pfVar3;
  MobyClass *pMVar4;
  f32 fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  GPiece<24> local_30;
  
  lVar7 = (longlong)(int)moby;
  pfVar3 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar3;
  (moby->pos).y = (moby->pos).y + pfVar3[1];
  pMVar4 = moby->pClass;
  (moby->pos).z = (moby->pos).z + pfVar3[2];
  pfVar3[2] = -(DAT_0071f418 * 9.8 - pfVar3[2]);
  fVar1 = moby->scale;
  (moby->rotation).z = g_FrameTime * 6.2831855 + (moby->rotation).z;
  if (fVar1 < pMVar4->gScale * 2.8) {
    moby->scale = fVar1 * 1.2;
  }
  if (worldUpdateTime % 3 == 0) {
    SpawnPart_61(0x41186a0000000000,0x4014000000000000,lVar7,0);
  }
  iVar8 = CollLine(local_30,lVar7 + 0x10,0,pfVar3[4],0);
  if ((iVar8 == 0) &&
     (iVar8 = CollSphere(0x3fb99999a0000000,lVar7 + 0x10,&DAT_001a205c,0,pfVar3[4]),
     iVar8 == 0)) {
LAB_001a22c8:
    fVar5 = (moby->pos).x;
    uVar6 = (int)fVar5 >> 0x1f;
    iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
    if ((((0x3fffffff < iVar8) && (iVar8 < 0x447f4001)) &&
        (fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar8 < 0x447f4001 && 0x3fffffff < iVar8)) &&
       ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x3fffffff < iVar8 && (iVar8 < 0x447f4001)))) {
      return;
    }
    DeleteMoby(moby);
  }
  else {
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      MVar2 = (g_CollOutput.pMoby)->oClass;
      if ((MVar2 == 0x419 || MVar2 == 0x415) || (MVar2 == BLARGIAN_SNAGGLEBEAST)) goto LAB_001a22c8;
    }
    if (moby->enabled == '\0') {
      PlayMobySound(0,0,moby);
    }
    else {
      MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff3333340000000,
                 0x4024000000000000,lVar7,pfVar3,0,0,1,0,3,5);
    }
    DeleteMoby(moby);
  }
  return;
}


// 0x01a2380 (0x14 bytes)
void M1049_001a2380(void)

{
  DAT_00740728 = 0x10000;
  return;
}


