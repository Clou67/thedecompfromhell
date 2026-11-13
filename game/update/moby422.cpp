// game/update/moby422.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x36887c-0x368c84
#include "game/update/moby422.h"
#include "game/collproc.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"

// 0x036887c (0x14 bytes)
void M422_0036887c(void)

{
  DAT_00840fbc = 0x10000;
  return;
}


// 0x03688a8 (0x3dc bytes)
// strings: 00a1000c: 'None'

/* Moby 422 */

uint UpdateMoby_422(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ushort uVar7;
  uint uVar6;
  
  piVar1 = (int *)moby->pVar;
  iVar4 = MB_CountActiveMobysByGroup(piVar1[3],0xffffffffffffffff);
  if (iVar4 == 0) {
    MB_UnlockSkillPoint(0x14);
  }
  if (HelpData.piece<872,2>() == 0) {
    if (g_heroState == THRUSTER_PACK_HOVER) {
      HelpData[0x368] = '\0';
      HelpData[0x369] = '\x01';
    }
    iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)HelpData.piece<874,2>() < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      HelpData.piece<874,2>() =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    HelpData.piece<876,4>() = HelpData.piece<876,4>() | 1 << (Level & 0x3f) | 0x80000000;
    iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
    if (iVar4 != 0) {
      Help_QueueMessage(STR_YOUR_THRUSTER_PACK_UPGRADE_GIVES_0x2EE3,0x6d);
    }
  }
  if (((HelpData.piece<880,2>() == 0) ||
      (((ushort)HelpData.piece<880,2>() < 2 &&
       ((int)(animationSpeed * 72000.5) <
        (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
             (uint)(ushort)HelpData.piece<882,2>() * -600))))) &&
     (g_heroState == THRUSTER_PACK_HOVER)) {
    iVar5 = 0;
    iVar4 = piVar1[1] + 1;
    piVar1[1] = iVar4;
    if (((g_Pad.downButtons & (R2|L2)) != 0) &&
       (0x3e99999a <
        (int)(FLOAT_ORDER(g_heroPadMagnitude)))) {
      iVar5 = piVar1[2] + 1;
    }
    piVar1[2] = iVar5;
    uVar7 = HelpData.piece<880,2>();
    fVar3 = animationSpeed;
    if ((int)(animationSpeed * 40.5) < iVar5) {
      piVar1[1] = 0;
      if (uVar7 != -1) {
        HelpData.piece<880,2>() = uVar7 + 1;
        uVar7 = HelpData.piece<880,2>();
      }
      iVar4 = (int)(fVar3 * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)HelpData.piece<882,2>() < iVar4 / 600) {
        sVar2 = (short)(iVar4 >> 0x1f);
        HelpData.piece<882,2>() =
             ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
      }
      HelpData.piece<884,4>() = HelpData.piece<884,4>() | 1 << (Level & 0x3f) | 0x80000000;
      iVar4 = piVar1[1];
    }
    if ((int)((uint)uVar7 * (int)(fVar3 * 7200.5) + (int)(fVar3 * 1800.5)) < iVar4) {
      Help_QueueMessage(STR_TRY_USING__OR_0x2EE4,0x6e);
    }
  }
  uVar6 = (uint)UnlockableItems.hydroPack;
  if ((UnlockableItems.hydroPack != '\0') &&
     (uVar6 = (uint)(ushort)HelpData.piece<496,2>(), HelpData.piece<496,2>() == 0)) {
    uVar6 = Help_QueueMessage(STR_YOUR_HYDRO_PACK_WILL_AUTOMATICALLY_0x2EE0,0x3e);
  }
  return uVar6;
}


