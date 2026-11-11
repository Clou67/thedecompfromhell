// game/update/moby1402.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x26d3cc-0x26d8d8
#include "game/update/moby1402.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"
#include "game/update/moby1251.h"

// 0x026d3cc (0x14 bytes)
void M1402_0026d3cc(void)

{
  DAT_0079ccf4 = 0x10000;
  return;
}


// 0x026d3e0 (0x88 bytes)
void M1402_0026d3e0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar3 = g_MobyInstance;
  do {
    uVar2 = *puVar4 & 0x7fff;
    pMVar3[uVar2].pos.z = *(f32 *)(param_1 + 0x18);
    pMVar3 = g_MobyInstance;
    if (g_MobyInstance[uVar2].oClass == 0x57a) {
      *(undefined4 *)(&DAT_00fa43c8 + *(int *)((int)g_MobyInstance[uVar2].pVar + 0x1c) * 0x11a0) =
           *(undefined4 *)(param_1 + 0x18);
    }
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x026d478 (0x460 bytes)
/* Moby 1402 */

void UpdateMoby_1402(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  ushort uVar3;
  float *pfVar4;
  f32 fVar5;
  uint uVar6;
  float fVar7;
  MobyInstance *pMVar8;
  ushort *puVar9;
  
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_00fa8a44 != 0) {
        DAT_0096bd90 = (char)DAT_00fa8a44;
      }
      MVar2 = moby->modeBits;
      pfVar4[7] = DAT_00fa8a40;
      moby->drawDistance = 0;
      DAT_00fa8a40 = (float)((int)DAT_00fa8a40 + 1);
      moby->collision = (ushort *)0x0;
      moby->modeBits = MVar2 | DISABLED;
      moby->updateDistance = -1;
      moby->state = '\x01';
    }
    else {
      fVar7 = pfVar4[2];
      if (g_MiscLevelFlags.field126_0x7e != 0) {
        fVar7 = (float)((int)fVar7 + 1U & 1);
        pfVar4[2] = fVar7;
      }
      DAT_00fa8a40 = 0.0;
      if ((fVar7 == 0.0) || (DAT_0096bd90 != '\0')) {
        moby->state = '\x03';
        (moby->pos).z = pfVar4[1];
      }
      else {
        moby->state = '\x02';
        (moby->pos).z = *pfVar4;
      }
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      moby->state = '\x03';
      DAT_00fa8a44 = 1;
    }
    moby->setByGroup = '\x02';
    puVar9 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
    pMVar8 = g_MobyInstance;
    do {
      uVar6 = *puVar9 & 0x7fff;
      pMVar8[uVar6].pos.z = (moby->pos).z;
      pMVar8 = g_MobyInstance;
      if (g_MobyInstance[uVar6].oClass == 0x57a) {
        *(f32 *)(&DAT_00fa43c8 + *(int *)((int)g_MobyInstance[uVar6].pVar + 0x1c) * 0x11a0) =
             (moby->pos).z;
      }
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar3);
    OrganicDelt
              (*pfVar4,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 4.0,
               &(moby->pos).z,0x720000,pfVar4 + 6);
    fVar5 = (moby->pos).z;
    fVar7 = (moby->pos).z;
    uVar6 = (int)fVar5 >> 0x1f;
    if ((0.1 < ABS(fVar7 - *pfVar4)) &&
       (((g_heroStateType == 0x11 || (g_heroStateType == 0x12)) &&
        ((int)(FLOAT_ORDER(g_heroWaterZ)) < (int)((uVar6 >> 1 ^ (uint)fVar5) - uVar6))))) {
      g_heroWaterZ = fVar7;
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      DAT_00fa8a44 = 0;
      moby->state = '\x02';
      if (pfVar4[2] == 0.0) {
        g_MiscLevelFlags.field126_0x7e = 1;
      }
    }
    OrganicDelt
              (pfVar4[1],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 4.0,
               &(moby->pos).z,0x720000,pfVar4 + 6);
    puVar9 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
    pMVar8 = g_MobyInstance;
    do {
      uVar6 = *puVar9 & 0x7fff;
      pMVar8[uVar6].pos.z = (moby->pos).z;
      pMVar8 = g_MobyInstance;
      if (g_MobyInstance[uVar6].oClass == 0x57a) {
        *(f32 *)(&DAT_00fa43c8 + *(int *)((int)g_MobyInstance[uVar6].pVar + 0x1c) * 0x11a0) =
             (moby->pos).z;
      }
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar3);
    moby->setByGroup = '\x01';
  }
  fVar7 = pfVar4[5];
  if ((int)fVar7 < 1) {
    if (-1 < (int)fVar7) {
      RegisterFuncForMoby(&PTR_M1403_0026dd28_0070a388,moby);
    }
  }
  else if ((int)fVar7 < 2) {
    DAT_00fa8a48 = DAT_0079cd28 * g_FrameTime + DAT_00fa8a48;
    if (1.0 < DAT_00fa8a48) {
      DAT_00fa8a48 = DAT_00fa8a48 - 1.0;
    }
    RegisterFuncForMoby(&PTR_M1403_0026d8d8_0070a378,moby);
  }
  else if ((int)fVar7 < 3) {
    RegisterFuncForMoby(&PTR_M1403_0026db00_0070a380,moby);
  }
  return;
}


