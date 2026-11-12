// game/update/moby930.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4bb948-0x4bbde4
#include "game/update/moby930.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1111.h"
#include "game/update/moby1399.h"
#include "idol/mUnk.h"

// 0x04bb948 (0x49c bytes)
// strings: 00a1000c: 'None'

/* Moby 930 */

ulonglong UpdateMoby_930(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  pvVar6 = moby->pVar;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
    FUN_004d3720(moby,(int)pvVar6 + 0x20);
    pvVar7 = moby->pVar;
    iVar5 = 0;
    *(undefined4 *)((int)pvVar6 + 0x2c) = 0x406ccccd;
    do {
      MB_SetGroupActive(*(int *)((int)pvVar7 + 0x60),0,0,0);
      iVar5 = iVar5 + 1;
      pvVar7 = (void *)((int)pvVar7 + 4);
    } while (iVar5 < 0x10);
    uVar4 = FUN_001d0f24(0x4059000000000000);
  }
  else if (moby->state < 2) {
    HeroDeathHeight = 0x42c80000;
    if (g_heroStateType != 0xf) {
      HeroDeathHeight = 0x42e60000;
    }
    FUN_004d3870(moby,(int)pvVar6 + 0x20);
    uVar8 = 0x4053000000000000;
    if (*(short *)((int)pvVar6 + 0x56) == 3) {
      *(undefined2 *)((int)pvVar6 + 0x24) = 3;
      uVar3 = worldUpdateTime;
      *(undefined2 *)((int)pvVar6 + 0x56) = 2;
      *(undefined4 *)((int)pvVar6 + 0x58) = uVar3;
      iVar5 = 0;
      moby->setByGroup = '\0';
      Hero_Warp((float *)&DAT_008f48f0,(float *)&DAT_008f4900,0,1);
      DAT_0096b9e0 = DAT_008f4910;
      DAT_0096b9e4 = DAT_008f4914;
      DAT_0096b9e8 = DAT_008f4918;
      DAT_0096b9ec = DAT_008f491c;
      DAT_0096b9f0 = DAT_008f4920;
      DAT_0096b9f4 = DAT_008f4924;
      DAT_0096b9f8 = DAT_008f4928;
      DAT_0096b9fc = DAT_008f492c;
      pvVar6 = moby->pVar;
      moby->state = '\x02';
      do {
        MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),1,1,1);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(uVar8);
    }
    if (g_heroStateType == 0x16) {
      pvVar6 = moby->pVar;
      moby->state = '\x02';
      iVar5 = 0;
      do {
        MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),1,1,1);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(uVar8);
    }
    uVar4 = (ulonglong)UnlockableItems.hologuise;
    if ((UnlockableItems.hologuise != '\0') &&
       (uVar2 = HelpData.piece<1012,4>() & 1 << (Level & 0x3f), uVar4 = (ulonglong)uVar2,
       uVar2 == 0)) {
      iVar5 = Help_QueueMessage(STR_THE_HOLOGUISE_IS_A_0x3E80,0x7e);
      uVar4 = (ulonglong)iVar5;
    }
  }
  else {
    if (g_heroStateType == 0) {
      iVar5 = 0;
      moby->state = '\x01';
      pvVar7 = pvVar6;
      do {
        MB_SetGroupActive(*(int *)((int)pvVar7 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar7 = (void *)((int)pvVar7 + 4);
      } while (iVar5 < 0x10);
      FUN_001d0f24(0x4059000000000000);
    }
    bVar1 = moby->setByGroup;
    if (bVar1 == 1) {
      moby->state = '\x01';
      Hero_Warp((float *)&DAT_008f4910,(float *)&DAT_008f4920,0,1);
      moby->setByGroup = '\0';
      uVar3 = worldUpdateTime;
      if (UnlockableItems.hologuise == '\0') {
        *(undefined2 *)((int)pvVar6 + 0x24) = *(undefined2 *)((int)pvVar6 + 0x56);
        *(undefined2 *)((int)pvVar6 + 0x56) = 4;
        *(undefined4 *)((int)pvVar6 + 0x58) = uVar3;
        *(undefined1 *)((int)pvVar6 + 0x28) = 1;
        UnlockableItems.hologuise = '\x01';
        CHAR_ARRAY_0096c165[0x1f] = '\x01';
        memcard_Save(0,-1);
      }
      iVar5 = 0;
      pvVar6 = moby->pVar;
      do {
        MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      FUN_001d0f24(0x4059000000000000);
      bVar1 = moby->setByGroup;
    }
    uVar4 = (ulonglong)bVar1;
    if (bVar1 == 2) {
      moby->state = '\x01';
      Hero_Warp((float *)&DAT_008f4910,(float *)&DAT_008f4920,0,1);
      iVar5 = 0;
      pvVar6 = moby->pVar;
      moby->setByGroup = '\0';
      do {
        MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      uVar4 = FUN_001d0f24(0x4059000000000000);
    }
  }
  return uVar4;
}


