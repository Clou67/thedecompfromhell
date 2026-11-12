// game/memcard.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 32 functions, 0xe6b08-0xe9114
#include <stdio.h>
#include <string.h>
#include "game/memcard.h"
#include "game/boot.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/sce.h"

// 0x00e6b08 (0x14 bytes)
void SECTION_HEADER_MEMCARD(void)

{
  DAT_0072666c = 0x10000;
  return;
}


// 0x00e6b1c (0x15c bytes)
// strings: 0071f970: '/BASCUS-97199RATCHET' | 0071f985: '/BASCUS-97199RATCHET/*' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET' | 0071fa03: '/BASCUS-97199RATCHET/save%d.bin'

void memcard_GetName(char *buff)

{
  int iVar1;
  int iVar2;
  
  if (buff[0x12] == 'E') {
    s__BASCUS_97199RATCHET_0071f970[2] = 'E';
  }
  else if (buff[0x12] == 'P') {
    s__BASCUS_97199RATCHET_0071f970[2] = 'I';
  }
  iVar1 = 3;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xd];
    iVar1 = iVar2;
  } while (iVar2 < 7);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xd];
    iVar1 = iVar2;
  } while (iVar2 < 0xb);
  iVar1 = 0xb;
  do {
    iVar2 = iVar1 + 1;
    s__BASCUS_97199RATCHET_0071f970[iVar1] = buff[iVar1 + 0xe];
    iVar1 = iVar2;
  } while (iVar2 < 0xd);
  strcpy(s__BASCUS_97199RATCHET___0071f985,s__BASCUS_97199RATCHET_0071f970,0xd);
  strcpy(s__BASCUS_97199RATCHET_icon_sys_0071f99c,s__BASCUS_97199RATCHET_0071f970,0xd);
  strcpy(s__BASCUS_97199RATCHET_static_ico_0071f9ba,s__BASCUS_97199RATCHET_0071f970,0xd);
  strcpy(s__BASCUS_97199RATCHET_BASCUS_9719_0071f9da,s__BASCUS_97199RATCHET_0071f970,0xd);
  strcpy(s__BASCUS_97199RATCHET_BASCUS_9719_0071f9da + 0x14,s__BASCUS_97199RATCHET_0071f970,
               0xd);
  strcpy(s__BASCUS_97199RATCHET_save_d_bin_0071fa03,s__BASCUS_97199RATCHET_0071f970,0xd);
  return;
}


// 0x00e6c78 (0x8 bytes)
undefined8 STUB_000e6c78(...)

{
  return 0;
}


// 0x00e6c80 (0x58 bytes)
int memcard_GetDataSize(mc_data *mcd)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 8;
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    uVar3 = 8;
    do {
      piVar1 = (int *)((int)&mcd[1].addr + iVar2);
      uVar3 = uVar3 + *(int *)((int)&mcd->size + iVar2) + 0xb & 0xfffffffc;
      iVar2 = iVar2 + 0x10;
    } while (*piVar1 != 0);
  }
  return uVar3 + 8;
}


// 0x00e6cd8 (0x30c bytes)
int memcard_RestoreData(char *addr,int index,mc_data *mcd)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  void *__s1;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  piVar7 = (int *)(addr + 8);
  lVar9 = 8;
  iVar3 = 8;
  uVar6 = 0;
  uVar5 = 8;
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    do {
      iVar10 = *(int *)((int)&mcd[1].addr + iVar2);
      *(undefined4 *)((int)&mcd->mark + iVar2) = 0;
      iVar2 = iVar2 + 0x10;
    } while (iVar10 != 0);
  }
  iVar10 = 0;
  iVar2 = *piVar7;
  while (iVar2 != -1) {
    uVar4 = 0;
    while ((iVar3 = (int)((uVar4 & 0xfffffff) << 4), *(int *)((int)&mcd->addr + iVar3) != 0 &&
           (*(int *)((int)&mcd->iff + iVar3) != *piVar7))) {
      uVar4 = uVar4 + 1;
    }
    if (*(int *)((int)&mcd->addr + iVar3) == 0) {
      iVar10 = iVar10 + 1;
    }
    else {
      piVar1 = (int *)((int)&mcd->size + iVar3);
      iVar2 = piVar7[1];
      __s1 = (void *)(*(int *)((int)&mcd->addr + iVar3) + index * *piVar1);
      if (iVar2 == *piVar1) {
        lVar8 = (longlong)*piVar1;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 1;
      }
      else if (iVar2 < *piVar1) {
        lVar8 = (longlong)iVar2;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 0xffffffff;
      }
      else {
        lVar8 = (longlong)*piVar1;
        *(undefined4 *)((int)&mcd->mark + iVar3) = 0xfffffffe;
      }
      iVar3 = memcmp(__s1,piVar7 + 2,(size_t)lVar8);
      if (iVar3 != 0) {
        g_loaderr = g_loaderr + 1;
      }
      FastMemCopy32(__s1,piVar7 + 2,lVar8);
      lVar9 = (lVar8 + 3U & 0xfffffffc) + lVar9 + 8;
    }
    iVar3 = (int)lVar9;
    piVar7 = (int *)((int)piVar7 + (piVar7[1] + 3U & 0xfffffffc) + 8);
    iVar2 = *piVar7;
  }
  if (mcd->addr != (void *)0x0) {
    iVar2 = 0;
    uVar5 = 8;
    do {
      piVar1 = (int *)((int)&mcd[1].addr + iVar2);
      uVar5 = uVar5 + *(int *)((int)&mcd->size + iVar2) + 0xb & 0xfffffffc;
      iVar2 = iVar2 + 0x10;
    } while (*piVar1 != 0);
  }
  if (iVar3 + 8 != uVar5 + 8) {
    iVar10 = iVar10 + 1;
  }
  while ((iVar3 = (int)((uVar6 & 0xfffffff) << 4), *(int *)((int)&mcd->addr + iVar3) != 0 &&
         (*(int *)((int)&mcd->iff + iVar3) != piVar7[2]))) {
    if (*(int *)((int)&mcd->mark + iVar3) < 1) {
      iVar10 = iVar10 + 1;
    }
    uVar6 = uVar6 + 1;
  }
  *(int *)(&DAT_0071fad8 + DAT_0071faf0 * 0xc0) = iVar10;
  return iVar10;
}


// 0x00e6fe4 (0x170 bytes)
// strings: 00652ba0: 'Out of date save!\n'


void memcard_RestoreGame(char *addr)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int index;
  char *addr_00;
  
  uVar6 = 8;
  ppuVar3 = &mc_gamedata;
  index = 0;
  uVar5 = 8;
  if (mc_gamedata != (undefined *)0x0) {
    iVar4 = 0;
    do {
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 4;
      piVar2 = (int *)(iVar4 + 0x7266a0);
      uVar6 = (uint)(*ppuVar1 + uVar6 + 0xb) & 0xfffffffc;
      iVar4 = iVar4 + 0x10;
    } while (*piVar2 != 0);
  }
  ppuVar3 = &mc_leveldata;
  if (mc_leveldata != (undefined *)0x0) {
    iVar4 = 0;
    do {
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 4;
      piVar2 = (int *)(iVar4 + 0x7269b0);
      uVar5 = (uint)(*ppuVar1 + uVar5 + 0xb) & 0xfffffffc;
      iVar4 = iVar4 + 0x10;
    } while (*piVar2 != 0);
  }
  if (*(int *)addr == uVar6 + 8) {
    if (*(int *)(addr + 4) == uVar5 + 8) {
      memcard_RestoreData(addr + 8,0,(mc_data *)&mc_gamedata);
      addr_00 = addr + 8 + uVar6 + 8;
      do {
        memcard_RestoreData(addr_00,index,(mc_data *)&mc_leveldata);
        index = index + 1;
        addr_00 = addr_00 + uVar5 + 8;
      } while (index < 0x14);
    }
    else {
      printf("Out of date save!\n");
    }
  }
  else {
    printf("Out of date save!\n");
  }
  return;
}


// 0x00e7154 (0x4e4 bytes)
// strings: 0096c074: 'None' | 0071fb2c: '������������'

void memcard_SetupNewGameGlobals(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 4;
  g_heroMaxNanotech = 4;
  DAT_0071fb24 = 1;
  DAT_0071fb59 = 1;
  g_GameSettings.Stereo = 1;
  DAT_0071fb58 = 1;
  g_GameSettings.MusicVolume = 0x2cc;
  g_GameSettings.SfxVolume = 0x400;
  Level = Veldin;
  g_boltCount = 0;
  g_ChallengeMode = 0;
  g_FrameCount = 0;
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  memset(&g_MiscLevelFlags,0,0x80);
  memset(Cheats,0,0xc);
  memset(g_SkillPoints,0,0x20);
  memset(&currentAmmoArray,0,0x25);
  memset(&UnlockableItems,0,0x25);
  memset(CHAR_ARRAY_0096c165,0,0x25);
  memset(g_purchasableVendorItems,0,0xc);
  memset(UINT_ARRAY_0096c1dc,0,8);
  memset(&g_SeenPlanets,0,0x14);
  memset(GalacticMap,0,0x50);
  memset(g_KeyLevelFlags,0,0x790);
  memset(CHAR_ARRAY_00a1000c,0,0x4a0);
  memset(CHAR_ARRAY_00a0feec,0,0x120);
  memset(CHAR_ARRAY_00a0fdc4,0,0x128);
  DAT_0071fb24 = 1;
  DAT_0071fb59 = 1;
  DAT_0071fb58 = 1;
  g_GameSettings.CameraLeftRight = 1;
  DAT_00969c98 = 0;
  DAT_00969c9c = 0;
  DAT_00969ca4 = 0;
  g_GameSettings.CameraUpDown = 1;
  g_GameSettings.CameraSpeed = 1;
  memset(&g_goldWeaponsArray,0,0x28);
  g_goodiesMenuActive = 0;
  memset(&g_equippedItem,0,0x1c);
  g_GameSettings.Stereo = 1;
  g_GameSettings.MusicVolume = 0x2cc;
  g_GameSettings.SfxVolume = 0x400;
  DAT_00969c78 = 0;
  memset(&DAT_0096c080,0,0xc);
  memset(&DAT_00a0f51c,0,0x94);
  memset(&DAT_00a0f5b0,0,0x94);
  memset(&DAT_00a0f644,0,0x94);
  DAT_00a0f6dc = 0;
  g_GameFrameCount = 0;
  g_deathCount = 0;
  g_boltMiningTimer = 0;
  g_boltsMined = 0;
  g_HelpLogCount = 1;
  memset(&g_HelpLog,0,0x96);
  puVar1 = &DAT_0072b330;
  memset(&DAT_0072b330,0,0x714);
  DAT_0072b330 = 0x5277;
  DAT_0072b33c = 0x5278;
  DAT_0072b348 = 0x52b9;
  DAT_0072b354 = 0x52c0;
  do {
    iVar2 = iVar2 + -1;
    puVar1[1] = 1;
    puVar1 = puVar1 + 6;
  } while (iVar2 != 0);
  memset(&VisitedPlanets,0,0x14);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    memset(&DAT_0096ca34 + iVar4 * 0x8000,0,0x8000);
    memset(g_LevelFlags[0] + iVar2,0,0x10);
    memset(&g_LevelObjBits + iVar3,0,0x100);
    memset(&g_NavSlots + iVar3,0,0x100);
    memset(&DAT_00a0cbc4 + iVar2,0,0x10);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 0x10;
  } while (iVar4 < 0x14);
  return;
}


// 0x00e7638 (0x84 bytes)
void memcard_ResetGame(void)

{
  LoadMusic2(1);
  memcard_SetupNewGameGlobals();
  LoadMusic2(1);
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  Level = Veldin;
  return;
}


// 0x00e76bc (0x10 bytes)
int memcard_GetSaveSysState(void)

{
  return g_memcardSaveSysState;
}


// 0x00e76cc (0x178 bytes)
void memcard_Update(void)

{
  int iVar2;
  undefined8 uVar1;
  
  MB_CountGoldBolts();
  iVar2 = MB_CountGoldWeapons();
  if ((uint)g_memcardRestoredBolts < g_totalBoltsCollected) {
    DAT_00a2308d = '\0';
  }
  if (DAT_00a23094 < iVar2) {
    DAT_00a2308e = '\0';
  }
  if ((iVar2 == 10) && (DAT_00a2308e != '\x01')) {
    MB_UnlockTrophy(RACHET_KING_MIDAS);
  }
  if ((1000000 < g_totalBoltsCollected) && (DAT_00a2308d != '\x01')) {
    MB_UnlockTrophy(BOLT_COLLECTOR);
  }
  if (g_memcardSaveSysState != 5) {
    if (((g_FrontEnd == '\0') || (DAT_00a23098 != '\0')) || (g_memcardSaveSysState != 0xb)) {
      if ((g_FrontEnd != '\0') && (g_memcardSaveSysState == 0xc)) {
        g_gameMode = GAME_MODE_NORMAL;
        idol::GetSaveData();
        g_memcardSaveSysState = 5;
      }
    }
    else {
      DAT_00a23098 = '\x01';
      iVar2 = idol::GetSaveData();
      if (*(int *)(iVar2 + 0x468) == 0xb) {
        uVar1 = idol::GetSaveData();
        FUN_004e7d18(uVar1,0x66);
      }
    }
  }
  return;
}


// 0x00e7844 (0x8 bytes)
undefined8 STUB_000e7844(...)

{
  return 0;
}


// 0x00e784c (0x138 bytes)
int memcard_PrepData(char *addr,int index,mc_data *mcd)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  pcVar4 = addr + 8;
  uVar6 = 0;
  if (mcd->addr != (void *)0x0) {
    iVar7 = 0;
    uVar6 = 0;
    do {
      piVar5 = (int *)((int)&mcd->size + iVar7);
      iVar2 = *(int *)((int)&mcd->addr + iVar7);
      iVar1 = *piVar5;
      *(undefined4 *)pcVar4 = *(undefined4 *)((int)&mcd->iff + iVar7);
      *(int *)(pcVar4 + 4) = *piVar5;
      FastMemCopy32(pcVar4 + 8,iVar2 + index * iVar1,*piVar5);
      piVar3 = (int *)((int)&mcd[1].addr + iVar7);
      pcVar4 = (char *)((uint)(pcVar4 + 8 + *piVar5 + 3) & 0xfffffffc);
      uVar6 = uVar6 + *piVar5 + 0xb & 0xfffffffc;
      iVar7 = iVar7 + 0x10;
    } while (*piVar3 != 0);
  }
  pcVar4[0] = -1;
  pcVar4[1] = -1;
  pcVar4[2] = -1;
  pcVar4[3] = -1;
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  addr[4] = '\0';
  addr[5] = '\0';
  addr[6] = '\0';
  addr[7] = '\0';
  *(uint *)addr = uVar6 + 8;
  return uVar6 + 0x10;
}


// 0x00e7984 (0x134 bytes)
void memcard_MakeWholeSave(char *addr)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuVar6;
  int index;
  char *addr_00;
  
  uVar4 = 8;
  ppuVar6 = &mc_gamedata;
  index = 0;
  if (mc_gamedata != (undefined *)0x0) {
    iVar3 = 0;
    uVar4 = 8;
    do {
      ppuVar1 = ppuVar6 + 1;
      ppuVar6 = ppuVar6 + 4;
      piVar2 = (int *)(iVar3 + 0x7266a0);
      uVar4 = (uint)(*ppuVar1 + uVar4 + 0xb) & 0xfffffffc;
      iVar3 = iVar3 + 0x10;
    } while (*piVar2 != 0);
  }
  uVar5 = 8;
  ppuVar6 = &mc_leveldata;
  *(uint *)addr = uVar4 + 8;
  if (mc_leveldata != (undefined *)0x0) {
    iVar3 = 0;
    uVar5 = 8;
    do {
      ppuVar1 = ppuVar6 + 1;
      ppuVar6 = ppuVar6 + 4;
      piVar2 = (int *)(iVar3 + 0x7269b0);
      uVar5 = (uint)(*ppuVar1 + uVar5 + 0xb) & 0xfffffffc;
      iVar3 = iVar3 + 0x10;
    } while (*piVar2 != 0);
  }
  *(uint *)(addr + 4) = uVar5 + 8;
  iVar3 = memcard_PrepData(addr + 8,0,(mc_data *)&mc_gamedata);
  addr_00 = addr + 8 + iVar3;
  do {
    iVar3 = memcard_PrepData(addr_00,index,(mc_data *)&mc_leveldata);
    index = index + 1;
    addr_00 = addr_00 + iVar3;
  } while (index < 0x14);
  return;
}


// 0x00e7ab8 (0x10 bytes)
int memcard_ReturnLang(void)

{
  return g_Language;
}


// 0x00e7ac8 (0xa4 bytes)
// strings: 00652bb4: 'rc1/ps3data/global/locale/SaveMsg_UTF8.dat'

void memcard_InitSaveMsg(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cellSysutilCheckCallback();
  uVar1 = FUN_005038e0();
  FUN_00503a3c(uVar1,&DAT_00a2088d,1,&PTR_memcard_ReturnLang_00705f10,
               "rc1/ps3data/global/locale/SaveMsg_UTF8.dat");
  uVar2 = FUN_00503bd0(uVar1,6000);
  uVar1 = FUN_00503bd0(uVar1,0x1773);
  uVar3 = idol::GetSaveData();
  FUN_004e8148(uVar3,uVar2,uVar1);
  return;
}


// 0x00e7b6c (0x24 bytes)
/* WARNING: Removing unreachable block (ram,0x000e7b88) */

undefined8 STUB_000e7b6c(...)

{
  return 0;
}


// 0x00e7b90 (0x104 bytes)
/* WARNING: Removing unreachable block (ram,0x000e7bb8) */

void memcard_RestoreInfo(char *addr,int slot,int index)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(index * 0x1c + 0x71fa5c + slot * 0xc0) = 1;
  (&DAT_0071fa44)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x10);
  (&DAT_0071fa48)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x1c);
  puVar1 = (undefined4 *)(index * 0x1c + 0x71fa54 + slot * 0xc0);
  (&DAT_0071fa4c)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x28);
  (&DAT_0071fa50)[index * 7 + slot * 0x30] = *(undefined4 *)(addr + 0x34);
  *puVar1 = *(undefined4 *)(addr + 0x40);
  puVar1[1] = *(undefined4 *)(addr + 0x44);
  return;
}


// 0x00e7c94 (0xb4 bytes)
// strings: 00652be0: 'FAILZ!'


char * memcard_GetSaveMsgString(int idx)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (idx < 2) {
    if (-1 < idx) {
      if (0 < idx) {
        uVar1 = FUN_005038e0();
        pcVar2 = (char *)FUN_00503bd0(uVar1,2000);
        return pcVar2;
      }
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,1000);
      return pcVar2;
    }
  }
  else {
    if (idx < 3) {
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,0x1773);
      return pcVar2;
    }
    if (idx < 4) {
      uVar1 = FUN_005038e0();
      pcVar2 = (char *)FUN_00503bd0(uVar1,3000);
      return pcVar2;
    }
  }
  return "FAILZ!";
}


// 0x00e7d48 (0x110 bytes)
void memcard_ConvertSaveMsgString(char *str,void *arg)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *str;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = str[uVar4];
  }
  if (g_JapaneseMode) {
    uVar4 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  }
  iVar3 = g_memcardStrBufIdx * 0x400;
  g_memcardStrBufIdx = (g_memcardStrBufIdx + 1) % 5;
  memset(g_memcardStrBufs + iVar3,0,0x400);
  uVar2 = FUN_005038e0();
  FUN_00503ccc(uVar2,str,uVar4,g_memcardStrBufs + iVar3,0x400,arg);
  return;
}


// 0x00e7e58 (0x338 bytes)
char * memcard_FixupAccentChars(char *str)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = *str;
  iVar3 = 0;
  do {
    if (cVar1 == '\0') {
      return str;
    }
    bVar2 = str[iVar3];
    if (0x80 < bVar2) {
      if (bVar2 < 0x97) {
        if (bVar2 < 0x8b) {
          if (bVar2 < 0x85) {
            if (bVar2 < 0x82) {
              if (0x80 < bVar2) {
                str[iVar3] = -0x40;
              }
            }
            else if (bVar2 < 0x83) {
LAB_000e8098:
              str[iVar3] = -0x37;
            }
            else if (bVar2 < 0x84) {
              str[iVar3] = -0x3c;
            }
            else {
              str[iVar3] = -0x1f;
            }
          }
          else if (bVar2 < 0x88) {
            if (bVar2 < 0x86) {
              str[iVar3] = -0x20;
            }
            else if (bVar2 < 0x87) {
              str[iVar3] = -0x1e;
            }
            else {
              str[iVar3] = -0x1c;
            }
          }
          else {
            if (bVar2 < 0x89) goto LAB_000e8098;
            if (bVar2 < 0x8a) {
              str[iVar3] = -0x38;
            }
            else {
              str[iVar3] = -0x36;
            }
          }
        }
        else if (bVar2 == 0x96) {
          str[iVar3] = -0x12;
        }
        else if (bVar2 == 0x95) {
          str[iVar3] = -0x14;
        }
        else if (bVar2 == 0x92) {
          str[iVar3] = -0x32;
        }
        else if (bVar2 == 0x91) {
          str[iVar3] = -0x34;
        }
        else if (bVar2 != 0x8f) {
          if (bVar2 == 0x8e) {
            str[iVar3] = -0x16;
          }
          else if (bVar2 == 0x8d) {
            str[iVar3] = -0x18;
          }
          else if (bVar2 == 0x8c) {
            str[iVar3] = -0x17;
          }
        }
      }
      else if (bVar2 < 0xa4) {
        if (bVar2 < 0x9d) {
          if (bVar2 < 0x99) {
            if (bVar2 < 0x98) {
              str[iVar3] = -0x11;
            }
            else {
              str[iVar3] = -0x2d;
            }
          }
          else if (0x9a < bVar2) {
            if (bVar2 < 0x9c) {
              str[iVar3] = -0x2a;
            }
            else {
              str[iVar3] = -0xd;
            }
          }
        }
        else if (bVar2 < 0xa0) {
          if (bVar2 < 0x9e) {
            str[iVar3] = -0xe;
          }
          else if (bVar2 < 0x9f) {
            str[iVar3] = -0xc;
          }
          else {
            str[iVar3] = -10;
          }
        }
        else if (bVar2 < 0xa1) {
          str[iVar3] = -0x26;
        }
        else if (0xa2 < bVar2) {
          str[iVar3] = -0x24;
        }
      }
      else if (bVar2 < 0xaa) {
        if (bVar2 < 0xa7) {
          if (bVar2 < 0xa6) {
            str[iVar3] = -7;
          }
          else {
            str[iVar3] = -5;
          }
        }
        else if (bVar2 < 0xa8) {
          str[iVar3] = -4;
        }
        else if (bVar2 < 0xa9) {
          str[iVar3] = -0x2f;
        }
        else {
          str[iVar3] = -0xf;
        }
      }
      else if (bVar2 < 0xad) {
        if (bVar2 < 0xab) {
          str[iVar3] = -0x39;
        }
        else if (bVar2 < 0xac) {
          str[iVar3] = -0x19;
        }
        else {
          str[iVar3] = -0x21;
        }
      }
      else if (bVar2 == 0xc5) {
        str[iVar3] = -0x4c;
      }
    }
    iVar3 = iVar3 + 1;
    cVar1 = str[iVar3];
  } while( true );
}


// 0x00e8190 (0xd8 bytes)
// strings: 00652bf0: '%s %s'

int memcard_ConstructPlanetString(char *buf,int id)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  StringId helpmsg;
  
  helpmsg = id + STR_PLANET;
  if ((id == 0xc || id == 0x10) || (id == 6)) {
    uVar1 = help_msg_string_by_index(helpmsg);
    iVar3 = snprintf(buf,"%s",uVar1);
  }
  else {
    if (id == 0) {
      helpmsg = STR_VELDIN;
    }
    uVar1 = help_msg_string_by_index(STR_PLANET);
    uVar2 = help_msg_string_by_index(helpmsg);
    iVar3 = snprintf(buf,"%s %s",uVar1,uVar2);
  }
  return iVar3;
}


// 0x00e8268 (0x590 bytes)
// strings: 00652c08: '%s %d' | 00652c10: ' - %s%d:%s%d\n%s: %d\n%s' | 00652bf0: '%s %s' | 00652c28: 'Ratchet & Clank' | 00652c38: '%s - %s' | 00652c40: '%s\n%s %s%d:%s%d\n%s: %d\n%s%s%s'


char * memcard_ConstructSaveString(char *buf)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar8;
  StringId helpmsg;
  uint uVar9;
  LevelId LVar10;
  int iVar11;
  longlong lVar12;
  GPiece<4> local_1c4;
  char acStack_1c0 [8];
  char acStack_1b8 [8];
  char acStack_1b0 [64];
  char acStack_170 [64];
  byte local_130 [64];
  char acStack_f0 [136];
  
  iVar8 = g_FrameCount / 0x34bc0;
  lVar12 = (longlong)iVar8;
  iVar11 = g_FrameCount / 0xe10 - ((int)(lVar12 << 6) - (int)(lVar12 << 2));
  if (iVar11 < 10) {
    puVar2 = &DAT_00652bf8;
  }
  else {
    puVar2 = &DAT_00652c00;
  }
  snprintf(acStack_1c0,"%s",puVar2);
  if (iVar8 < 10) {
    puVar2 = &DAT_00652bf8;
  }
  else {
    puVar2 = &DAT_00652c00;
  }
  snprintf(acStack_1b8,"%s",puVar2);
  LVar10 = Level;
  if (g_JapaneseMode == false) {
    pcVar5 = memcard_GetSaveMsgString(1);
    snprintf(acStack_170,"%s %d",pcVar5,g_ChallengeMode);
    if (g_FrontEnd != '\0') {
      LVar10 = LVar10 + Novalis;
    }
    if (((int)LVar10 < 0) || (0x12 < (int)LVar10)) {
      snprintf(acStack_1b0,"Ratchet & Clank");
    }
    else {
      helpmsg = LVar10 + 0x4ecc;
      if (((LVar10 == Kalebo) || (LVar10 == Hoven)) || (LVar10 == Blarg)) {
        uVar3 = help_msg_string_by_index(helpmsg);
        snprintf(acStack_1b0,"%s",uVar3);
      }
      else {
        if (LVar10 == Veldin) {
          helpmsg = STR_VELDIN;
        }
        uVar3 = help_msg_string_by_index(STR_PLANET);
        uVar4 = help_msg_string_by_index(helpmsg);
        snprintf(acStack_1b0,"%s %s",uVar3,uVar4);
      }
    }
    pcVar5 = memcard_GetSaveMsgString(3);
    snprintf((char *)local_130,"%s",pcVar5);
    if ((0x60 < local_130[0]) && (local_130[0] < 0x7b)) {
      local_130[0] = local_130[0] - 0x20;
    }
    uVar3 = help_msg_string_by_index(LVar10 + 0x4eb9);
    snprintf(acStack_f0,"%s - %s",uVar3,acStack_1b0);
    pcVar5 = memcard_FixupAccentChars(acStack_f0);
    uVar9 = 0;
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      uVar9 = uVar9 + 1;
      cVar1 = pcVar5[uVar9];
    }
    if (g_JapaneseMode != false) {
      uVar9 = ((int)uVar9 >> 1) + (uint)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    }
    iVar8 = g_memcardStrBufIdx * 0x400;
    g_memcardStrBufIdx = (g_memcardStrBufIdx + 1) % 5;
    memset(g_memcardStrBufs + iVar8,0,0x400);
    uVar3 = FUN_005038e0();
    uVar3 = FUN_00503ccc(uVar3,pcVar5,uVar9,g_memcardStrBufs + iVar8,0x400,local_1c4);
    FUN_00504d90(g_pHWSystem);
    pcVar5 = memcard_GetSaveMsgString(0);
    snprintf(buf,"%s\n%s %s%d:%s%d\n%s: %d\n%s%s%s",uVar3,pcVar5,acStack_1b8,lVar12,
                   acStack_1c0,iVar11);
  }
  else {
    pcVar5 = memcard_GetSaveMsgString(0);
    pcVar6 = memcard_GetSaveMsgString(3);
    pcVar7 = memcard_GetSaveMsgString(1);
    snprintf(acStack_170,"%s %d",pcVar7,g_ChallengeMode);
    strcpy(buf,pcVar5);
    snprintf(buf," - %s%d:%s%d\n%s: %d\n%s",acStack_1b8,lVar12,acStack_1c0,iVar11,pcVar6,
                   g_boltCount);
  }
  return buf;
}


// 0x00e87f8 (0x74 bytes)
void memcard_SetSaveDialogStrings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_005038e0();
  uVar1 = FUN_00503bd0(uVar1,6000);
  uVar2 = FUN_005038e0();
  uVar2 = FUN_00503bd0(uVar2,0x1773);
  uVar3 = idol::GetSaveData();
  FUN_004e8148(uVar3,uVar2,uVar1);
  return;
}


// 0x00e886c (0x1c bytes)
int memcard_IsSaveSystemIdle(void)

{
  return (uint)(g_memcardSaveBusy == 0);
}


// 0x00e8888 (0x21c bytes)
// strings: 00a244a8: 'None'

void memcard_PerformOperation(int mode)

{
  undefined4 uVar1;
  LevelId LVar2;
  int iVar3;
  int iVar7;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  LevelId LVar8;
  char *pcVar9;
  char *addr;
  
  if (g_memcardSaveBusy != 0) {
    return;
  }
  iVar7 = idol::GetSaveData();
  uVar1 = *(undefined4 *)(iVar7 + 0x46c);
  memset(g_memcardSaveString,0,0x100);
  uVar4 = FUN_005038e0();
  uVar4 = FUN_00503bd0(uVar4,6000);
  uVar5 = FUN_005038e0();
  uVar5 = FUN_00503bd0(uVar5,0x1773);
  uVar6 = idol::GetSaveData();
  FUN_004e8148(uVar6,uVar5,uVar4);
  if (g_FrontEnd != '\0') {
    *(undefined4 *)(iVar7 + 0x460) = 1;
  }
  iVar3 = SaveDataPtr;
  LVar2 = Level;
  addr = (char *)(SaveDataPtr + 0x100000);
  if (mode != 4) {
    if (mode != 3) {
      if (mode == 2) {
        return;
      }
      if (mode == 1) goto LAB_000e8a34;
      if (mode != 0) {
        return;
      }
    }
    if (g_loadingPlanet != 0) {
      Level = g_newlevelnum;
    }
    LVar8 = Level;
    if ((int)Level < 0) {
      LVar8 = Veldin;
    }
    *(LevelId *)(iVar7 + 0x1c) = LVar8;
    pcVar9 = memcard_ConstructSaveString(g_memcardSaveString);
    FUN_004e80d8(iVar7,pcVar9);
    DAT_008fabb4 = iVar3;
    Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    memset(addr,0xf,uVar1);
    memcard_MakeWholeSave(addr);
  }
LAB_000e8a34:
  Level = LVar2;
  idol::SaveSystem_PS::RunSaveSystem
            (iVar7,mode,addr,uVar1,&PTR_memcard_printGameSaved_00705f88,
             &PTR_memcard_print_SavingGameCB_PS3_00705f90,&PTR_memcard_RestoreSaveGame_00705f80,
             &PTR_memcard_print_LoadingCB_PS3_00705f98);
  return;
}


// 0x00e8aa4 (0x1c4 bytes)
// strings: 0071f9ba: '/BASCUS-97199RATCHET/static.ico' | 0071f99c: '/BASCUS-97199RATCHET/icon.sys' | 0071f9da: '/BASCUS-97199RATCHET/BASCUS-97199RATCHET'


int memcard_Save(int force,int level)

{
  LevelId LVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  
  if ((int)Level < 0x14) {
    Map_SaveLevelObjectState();
    Map_SaveRevealMask(&DAT_0096ca34 + Level * 0x8000);
    g_memcardGameSaved = g_memcardGameSaved | force;
    if (g_memcardGameSaved == 0) {
      if (force != 0) {
        memcard_PerformOperation(0);
      }
    }
    else {
      if (force == 0) {
        g_CardStateFlags = g_CardStateFlags | 0x200;
      }
      cVar5 = '\0';
      g_CardStateFlags = g_CardStateFlags | 0x200;
      DAT_0071faf4 = Level;
      if (-1 < level) {
        cVar5 = (&VisitedPlanets.Veldin)[level];
        Level = level;
        if ((&VisitedPlanets.Veldin)[level] == '\0') {
          (&VisitedPlanets.Veldin)[level] = '\x01';
        }
      }
      LVar1 = Level;
      iVar4 = DAT_0071fa38;
      (&DAT_0071fa48)[DAT_0071fa38 * 7] = g_boltCount;
      uVar3 = g_FrameCount;
      uVar2 = g_ChallengeMode;
      (&DAT_0071fa44)[iVar4 * 7] = LVar1;
      (&DAT_0071fa4c)[iVar4 * 7] = uVar2;
      (&DAT_0071fa50)[iVar4 * 7] = uVar3;
      if (-1 < level) {
        Level = DAT_0071faf4;
        (&VisitedPlanets.Veldin)[LVar1] = cVar5;
      }
      memcard_PerformOperation(3);
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


// 0x00e8c68 (0x38 bytes)
// strings: 00652c64: 'User agrees.  Time for the pain!\n'

void memcard_print_TimeForPain(void)

{
  print_tty2("User agrees.  Time for the pain!\n");
  g_memcardWaitDialog = 0;
  return;
}


// 0x00e8ca0 (0x280 bytes)
// strings: 00652c88: ' Restoring saved game...\n' | 00652ca8: '\n Restored game from Idol/memcard.cpp \n'

undefined8 memcard_RestoreSaveGame(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  memset(&g_memcardRestoredBolts,0,8);
  memset(&DAT_00a2308d,0,2);
  printf(" Restoring saved game...\n");
  if ((int)param_1 == 0) {
    memcard_RestoreGame(param_2);
    g_memcardRestoredBolts = g_totalBoltsCollected;
    if (999999 < g_totalBoltsCollected) {
      DAT_00a2308d = 1;
    }
    DAT_00a23094 = MB_CountGoldWeapons();
    if (DAT_00a23094 == 10) {
      DAT_00a2308e = 1;
    }
    if (*(char *)(g_viewMtxPtr + 0x185a4) == '\0') {
      DAT_00a52e64 = 0;
    }
    else {
      FUN_004d6f50(g_viewMtxPtr,DAT_00a52e64);
    }
    g_memcardGameSaved = 1;
    print_tty2("\n Restored game from Idol/memcard.cpp \n");
    uVar1 = FUN_005038e0();
    uVar1 = FUN_00503bd0(uVar1,6000);
    uVar2 = FUN_005038e0();
    uVar2 = FUN_00503bd0(uVar2,0x1773);
    uVar3 = idol::GetSaveData();
    FUN_004e8148(uVar3,uVar2,uVar1);
    iVar4 = idol::GetSaveData();
    if ((*(uint *)(iVar4 + 0x460) & 1) == 0) {
      *(undefined1 *)(TrophyMgr + 0x18c) = 0;
      uVar1 = FUN_005038e0();
      uVar1 = FUN_00503bd0(uVar1,5000);
      cellMsgDialogOpen2(1,uVar1,&PTR_memcard_print_TimeForPain_00705f78,0,0);
      g_memcardWaitDialog = 1;
      do {
        UpdatePad();
        UpdateOcclusion(0);
        cellSysutilCheckCallback();
        Render_DispatchJob();
      } while (g_memcardWaitDialog == 1);
    }
  }
  else if ((int)param_1 != 1) {
    g_memcardGameSaved = 0;
    g_newlevelnum = 0xffffffff;
    g_loadingPlanet = 1;
    g_CutscenePlaying = 1;
  }
  return param_1;
}


// 0x00e8f20 (0x4c bytes)
// strings: 00652cd0: '\n Game has been saved!\n'

undefined8 memcard_printGameSaved(undefined8 param_1)

{
  printf("\n Game has been saved!\n");
  g_memcardGameSaved = 1;
  return param_1;
}


// 0x00e8f6c (0x30 bytes)
// strings: 00652ce8: '###### PS3_SavingGame Callback in Idol/memcard.cpp####\n'

undefined8 memcard_print_SavingGameCB_PS3(void)

{
  print_tty2("###### PS3_SavingGame Callback in Idol/memcard.cpp####\n");
  return 0;
}


// 0x00e8f9c (0x3c bytes)
// strings: 00652d20: '####### LoadingCB_PS3 Callback has been called#####\n'

undefined8 memcard_print_LoadingCB_PS3(undefined8 param_1)

{
  print_tty2("####### LoadingCB_PS3 Callback has been called#####\n");
  return param_1;
}


// 0x00e8fd8 (0x13c bytes)
int memcard_PollSaveResult(void)

{
  int iVar1;
  
  if ((g_memcardSaveBusy != 0) || (g_memcardPollDone != '\0')) {
    return -1;
  }
  if (g_memcardSaveSysState != 0xc) {
    if (g_memcardSaveSysState != 0xb) {
      if (g_memcardSaveSysState == 6) {
        g_memcardPollDone = '\x01';
        return 1;
      }
      if (g_memcardSaveSysState == 5) {
        return 0;
      }
      if (g_memcardSaveSysState != 3) {
        if (g_memcardSaveSysState == 1) {
          idol::GetSaveData();
          iVar1 = FUN_004e7e6c();
          g_memcardPollDone = '\x01';
          return iVar1;
        }
        if (g_memcardSaveSysState != 0) {
          return 0;
        }
      }
      idol::GetSaveData();
      iVar1 = FUN_004e7d94();
      g_memcardPollDone = '\x01';
      return iVar1;
    }
    g_memcardPollDone = '\x01';
    iVar1 = idol::GetSaveData();
    if (*(int *)(iVar1 + 0x468) == 0xb) {
      DAT_00a23099 = 1;
    }
  }
  g_memcardPollDone = '\x01';
  iVar1 = idol::GetSaveData();
  if (*(int *)(iVar1 + 0x468) == 0xc) {
    DAT_00a23099 = 1;
  }
  return 2;
}


