// game/update/moby1000.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x18150c-0x1817a4
#include "game/update/moby1000.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x018150c (0x110 bytes)
void M1000_0018150c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float afStack_30 [6];
  
  iVar1 = *(int *)(param_1 + 0x78);
  GetEffectTex(0x15);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  idol_draw::PackCmd(DAT_00e5af08,DAT_0073b698,DAT_00e5af0c,DAT_0073b69c,0x80);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0x24)) {
    do {
      uVar2 = (*(int *)(iVar1 + 0x20) - iVar3) + 0x40;
      MB_decompressVector
                (afStack_30,
                 (int *)((uVar2 + (((int)uVar2 >> 6) + (uint)((int)uVar2 < 0 && (uVar2 & 0x3f) != 0)
                                  ) * -0x40) * 4 + iVar1 + 0x30));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar1 + 0x24));
  }
  return;
}


// 0x0181628 (0x17c bytes)
// strings: 00a1000c: 'None'

/* Moby 1000 */

char * UpdateMoby_1000(MobyInstance *moby)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  char *pcVar4;
  
  piVar2 = (int *)moby->pVar;
  if (0 < worldUpdateTime) {
    if (DAT_00f08e20 == 0) {
      MB_UnlockSkillPoint(0xe);
    }
    DAT_00f08e20 = 0;
  }
  pcVar4 = HelpData;
  if (HelpData.piece<728,2>() == 0) {
    if (UnlockableItems.devastator != '\0') {
      HelpData[0x2d8] = '\0';
      HelpData[0x2d9] = '\x01';
    }
    iVar1 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)HelpData.piece<730,2>() < iVar1 / 600) {
      sVar3 = (short)(iVar1 >> 0x1f);
      HelpData.piece<730,2>() =
           ((short)(iVar1 / 600) + sVar3) - ((short)((short)(iVar1 / 0x2580000) + sVar3) >> 0xf);
    }
    HelpData.piece<732,4>() = HelpData.piece<732,4>() | 1 << (Level & 0x3f) | 0x80000000;
    pcVar4 = (char *)MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if (pcVar4 != (char *)0x0) {
      pcVar4 = (char *)Help_QueueMessage(STR_THE_GADGETRON_DEVASTATOR_IS_0x2329,0x5b);
    }
  }
  return pcVar4;
}


