// game/update/moby1352.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x255368-0x255850
#include "game/update/moby1352.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update/camera19.h"
#include "idol/fastfunc.h"

// 0x0255368 (0x28 bytes)
undefined8 M1352_00255368(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x547) && (*(char *)(param_1 + 0x20) == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0255390 (0x14 bytes)
void M1352_00255390(void)

{
  DAT_0079bb54 = 0x10000;
  return;
}


// 0x02553b8 (0xf4 bytes)
void M1352_002553b8(int param_1)

{
  float fVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  float *pfVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  
  piVar3 = *(int **)(param_1 + 0x78);
  puVar7 = (ushort *)(&g_MobyGroups)[*piVar3];
  if (puVar7 != (ushort *)0x0) {
    dVar8 = (double)FastIntToDouble(piVar3[1]);
    dVar8 = (double)MB_catmullRom
                              (0xbff0000000000000,0,0x3ff0000000000000,0,
                               -(double)(float)(dVar8 * (double)(float)piVar3[2] - 1.0));
    pfVar6 = (float *)&DAT_00fa3e08;
    do {
      pMVar5 = g_MobyInstance;
      fVar1 = *pfVar6;
      dVar9 = (double)(float)((double)fVar1 - 20.0);
      uVar4 = *puVar7 & 0x7fff;
      pfVar6 = pfVar6 + 1;
      g_MobyInstance[uVar4].modeBits =
           g_MobyInstance[uVar4].modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      pMVar5[uVar4].pos.z = (float)((double)(float)((double)fVar1 - dVar9) * dVar8 + dVar9);
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x02554b0 (0x90 bytes)
void M1352_002554b0(int param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  f32 *pfVar6;
  
  puVar5 = (ushort *)(&g_MobyGroups)[**(int **)(param_1 + 0x78)];
  if (puVar5 != (ushort *)0x0) {
    pfVar6 = (f32 *)&DAT_00fa3e08;
    do {
      pMVar4 = g_MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      *pfVar6 = g_MobyInstance[uVar3].pos.z;
      fVar1 = pMVar4[uVar3].pos.z;
      pMVar4[uVar3].modeBits = pMVar4[uVar3].modeBits | (UNK_40|DISABLED);
      pMVar4[uVar3].pos.z = fVar1 - 20.0;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x0255550 (0x300 bytes)
/* Moby 1352 */

void UpdateMoby_1352(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  f32 *pfVar10;
  ushort *puVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 == 0) {
    if (piVar4[3] < 0) {
      DeleteMoby(moby);
    }
    else if (*piVar4 < 0) {
      DeleteMoby(moby);
    }
    else if (piVar4[4] < 0) {
      DeleteMoby(moby);
    }
    else {
      uVar3 = moby->uid;
      if (((&g_Checkpoint.objState[0])[(short)uVar3] == '\0') &&
         ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        moby->state = '\x01';
        puVar11 = (ushort *)(&g_MobyGroups)[*piVar4];
        if (puVar11 != (ushort *)0x0) {
          pfVar10 = (f32 *)&DAT_00fa3e08;
          do {
            pMVar9 = g_MobyInstance;
            uVar5 = *puVar11 & 0x7fff;
            *pfVar10 = g_MobyInstance[uVar5].pos.z;
            fVar2 = pMVar9[uVar5].pos.z;
            pMVar9[uVar5].modeBits = pMVar9[uVar5].modeBits | (UNK_40|DISABLED);
            pMVar9[uVar5].pos.z = fVar2 - 20.0;
            uVar3 = *puVar11;
            puVar11 = puVar11 + 1;
            pfVar10 = pfVar10 + 1;
          } while (-1 < (short)uVar3);
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 2) {
    if (g_MobyInstance[piVar4[3]].state == '\x02') {
      uVar3 = moby->uid;
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar5 = *(uint *)(&g_CheckpointBits + iVar7);
      *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar8) =
           *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar8) | 1 << (uVar3 & 0x1f);
      *(uint *)(&g_CheckpointBits + iVar7) = uVar5 | 1 << (uVar3 & 0x1f);
      moby->state = '\x02';
      auVar13 = loadVectorLeftIndexed(4,0x255540);
      auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      fVar2 = animationSpeed * 120.5;
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,4,
                         ZEXT48(piVar4));
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar6;
      dVar12 = (double)FastIntToDouble((int)fVar2);
      piVar4[2] = (int)(float)(1.0 / dVar12);
      Cam19_Enable(piVar4[4]);
    }
  }
  else if (bVar1 < 3) {
    FastDecTimerS32(ZEXT48(piVar4) + 4);
    M1352_002553b8(moby);
    if (piVar4[1] == 0) {
      moby->state = '\x03';
    }
  }
  return;
}


