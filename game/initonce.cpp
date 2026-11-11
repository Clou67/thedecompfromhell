// game/initonce.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0xd88e4-0xd93a8
#include <stdio.h>
#include "game/initonce.h"
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mesh.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/sUnk.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/moby998.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "sdk/fios.h"
#include "sdk/sce.h"

// 0x00d88e4 (0x14 bytes)
void SECTION_HEADER_INITONCE(void)

{
  DAT_00724610 = 0x10000;
  return;
}


// 0x00d88f8 (0x4 bytes)
void STUB_000d88f8(...)

{
  return;
}


// 0x00d88fc (0xd4 bytes)
ulonglong ____Unused_InitOnce_RunSysCallWait(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  GPiece<16> local_30;
  
  uVar4 = 1;
  uVar1 = FUN_005031a8(param_2);
  uVar2 = FUN_005031bc(local_30,1);
  if ((int)uVar2 != 0) {
    do {
      iVar3 = FUN_0050315c_RET_0(uVar2);
    } while (-1 < iVar3);
    uVar4 = FUN_00503164(uVar1,0,0);
    FUN_00503214(uVar1);
    uVar4 = uVar4 >> 0x3f ^ 1;
  }
  return uVar4;
}


// 0x00d89d0 (0x218 bytes)
// strings: 006521ac: 'MemSlots'

void InitMemSlots(void)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  undefined4 *puVar5;
  
  pvVar1 = g_pGame;
  if (DAT_00724634 == '\0') {
    uVar2 = FUN_0050436c(g_pGame);
    puVar4 = (undefined4 *)FUN_004fe27c(0x24,uVar2,0x10);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x11) = 0;
      puVar4[5] = 0;
      puVar4[7] = 0;
      puVar4[6] = &DAT_0066173c;
      puVar4[8] = 0;
      puVar5 = puVar4;
    }
    MemSlots_IMSeqMem_descriptor = puVar5;
    uVar2 = idol::AllocateMemAlign(uVar2,&DAT_00ec4080,0x10);
    uVar3 = FUN_0050436c(pvVar1);
    FUN_004fe39c(puVar5,uVar2,&DAT_00ec4080,"MemSlots",0,uVar3);
    DAT_00724634 = '\x01';
  }
  FUN_004fe61c(MemSlots_IMSeqMem_descriptor,*MemSlots_IMSeqMem_descriptor);
  DAT_00a108d8 = FUN_004fe5ec(MemSlots_IMSeqMem_descriptor);
  DAT_00a108e4 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x64000,0x80);
  DAT_00a108e8 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x60000,0x80);
  DAT_00a108ec = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x200000,0x80);
  Gameplay = DAT_00a108ec;
  g_NpcBuffer = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x800000,0x80);
  DAT_00a1090c = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10910 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10914 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  return;
}


// 0x00d8be8 (0x7c0 bytes)
// strings: 006521b8: 'loaded irx modules\n' | 006521ac: 'MemSlots' | 006521d0: 'Unsupported language.  Going to English\n'

void InitOnce(void)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  GPiece<8> auStack_30;
  
  pvVar1 = g_pGame;
  if (g_HasInited == 0) {
    return;
  }
  g_HasInited = 0;
  STUB_00503080();
  STUB_00503070(1);
  STUB_005031a4(1);
  STUB_0050321c(0);
  STUB_00503114();
  STUB_00503218();
  STUB_00503118();
  STUB_005031fc(6);
  STUB_005031f8(0);
  STUB_00503204();
  cellSysutilCheckCallback();
  STUB_0050307c(0,0xb,(ZERO_MASK(Cutscene)) + 0xd,9);
  STUB_000e9138();
  ResetFrameBufferInfo();
  STUB_00174bd8(&DAT_00a10690);
  STUB_004d04c8();
  iVar8 = (DAT_010ea104 & 0x1fffff) * -0x800 + 0x10000000;
  STUB_004d04c0(DAT_010ea100,DAT_010ea104,iVar8);
  cellSysutilCheckCallback();
  FlushCache(0);
  STUB_000e9150(iVar8,&DAT_00cd4000);
  FlushCache(0);
  printf("loaded irx modules\n");
  STUB_005031f8(0);
  pad_Init();
  STUB_00503208(&PTR_____Unused_Respawn_IncCounter_a53504_00707950);
  pvVar2 = g_pGame;
  DAT_00e5aa64 = 0x160000;
  if (DAT_00724634 == '\0') {
    uVar3 = FUN_0050436c(g_pGame);
    puVar5 = (undefined4 *)FUN_004fe27c(0x24,uVar3,0x10);
    puVar7 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *(undefined1 *)((int)puVar5 + 0x11) = 0;
      puVar5[5] = 0;
      puVar5[6] = &DAT_0066173c;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar7 = puVar5;
    }
    MemSlots_IMSeqMem_descriptor = puVar7;
    uVar3 = idol::AllocateMemAlign(uVar3,&DAT_00ec4080,0x10);
    uVar4 = FUN_0050436c(pvVar2);
    FUN_004fe39c(puVar7,uVar3,&DAT_00ec4080,"MemSlots",0,uVar4);
    DAT_00724634 = '\x01';
  }
  FUN_004fe61c(MemSlots_IMSeqMem_descriptor,*MemSlots_IMSeqMem_descriptor);
  DAT_00a108d8 = FUN_004fe5ec(MemSlots_IMSeqMem_descriptor);
  DAT_00a108e4 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x64000,0x80);
  DAT_00a108e8 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x60000,0x80);
  DAT_00a108ec = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x200000,0x80);
  Gameplay = DAT_00a108ec;
  g_NpcBuffer = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x800000,0x80);
  DAT_00a1090c = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10910 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  DAT_00a10914 = idol::AllocateMemAlign(MemSlots_IMSeqMem_descriptor,0x100000,0x80);
  STUB_005031f8(0);
  cellSysutilCheckCallback();
  STUB_004d04d0(Level);
  InitViewContext();
  UpdateViewContext();
  VU1_initChain();
  STUB_005031f8(0);
  sound_Init();
  FastMemSet(&g_CollMobyJointCache,0xffffffff80808080,0x100);
  sceGsSetDefLoadImage(auStack_30,0x3ffb,1,0x12,0,0,8,8);
  FlushCache(0);
  sceGsExecLoadImage(auStack_30,&g_CollMobyJointCache);
  sceGsSyncPath(0,0);
  LoadDebugFont();
  puVar7 = DAT_00927200;
  *DAT_00927204 = 0x82;
  *puVar7 = 0;
  STUB_001655a0();
  InitAlphaPal();
  cellSysutilCheckCallback();
                    /* WARNING: Load size is inaccurate */
  iVar6 = (*(code *)**(undefined4 **)(*g_pGame + 0xc))();
  iVar8 = *(int *)((int)g_pHWSystem + 0xc0);
  if (iVar8 == 1) {
    if (iVar6 == 5) {
      g_Language = 5;
    }
    else if (iVar6 == 4) {
      g_Language = 3;
    }
    else if (iVar6 == 3) {
      g_Language = 4;
    }
    else if (iVar6 == 2) {
      g_Language = 2;
    }
    else {
      if (iVar6 != 1) {
        printf("Unsupported language.  Going to English\n");
      }
      g_Language = 0;
      DAT_0159c350 = 0;
      g_JapaneseMode = false;
    }
  }
  if (iVar8 != 0) goto japanese_mode;
  if (iVar6 < 2) {
    if (iVar6 < 1) goto LAB_000d91dc;
  }
  else {
    if (iVar6 < 3) {
      g_Language = 2;
      goto japanese_mode;
    }
    if (iVar6 < 4) {
      g_Language = 4;
      goto japanese_mode;
    }
LAB_000d91dc:
    printf("Unsupported language.  Going to English\n");
  }
  g_Language = 0;
  DAT_0159c350 = 0;
  g_JapaneseMode = false;
japanese_mode:
  if (iVar8 == 3) {
    g_Language = 6;
    DAT_0159c350 = 0;
    g_JapaneseMode = true;
  }
  cellSysutilCheckCallback();
  uVar3 = FUN_0050436c(pvVar1);
  g_pLocaleBuffer = (int *)idol::AllocateMemAlign(uVar3,0x40000,0x80);
  uVar3 = FUN_0050436c(pvVar1);
  DAT_00a10920 = idol::AllocateMemAlign(uVar3,0x300000,0x80);
  uVar3 = FUN_0050436c(pvVar1);
  SaveDataPtr = idol::AllocateMemAlign(uVar3,0x300000,0x80);
  iVar8 = (int)pvVar1 + 0x7c;
  DAT_00a10924 = idol::AllocateMemAlign(iVar8,0x300000,0x80);
  DAT_00a10930 = idol::AllocateMemAlign(iVar8,0x100000,0x80);
  DAT_00a2080c = 0;
  DAT_00a20810 = idol::AllocateMemAlign(iVar8,0x300000,0x80);
  DAT_00a20814 = idol::AllocateMemAlign(iVar8,0x40000,0x80);
  DAT_00a20818 = 0;
  DAT_00a2081c = 0;
  uVar3 = FUN_0050436c(pvVar1);
  g_MapRevealMask = idol::AllocateMemAlign(uVar3,0x8000,0x20);
  g_totalBoltsCollected = 0;
  DAT_0096ca08 = 0;
  uVar3 = FUN_0050436c(pvVar1);
  FUN_00508578(&TEX_BASE,uVar3,iVar8);
  memcard_InitSaveMsg();
  InitMenuTextIds();
  return;
}


