// game/mcstate.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 27 functions, 0xe64fc-0xe6b08
#include "game/mcstate.h"
#include "game/memcard.h"
#include "game/pause.h"
#include "idol/fastfunc.h"

// 0x00e64fc (0x98 bytes)
void Map_InitColors(void)

{
  DAT_00726534 = 0x10000;
  DAT_00a20848 = FUN_00502f74_RET_0(0,0,0,0x80,0);
  DAT_00a20850 = FUN_00502f74_RET_0(0xff,0xff,0xaf,0x80,0);
  DAT_00a20854 = FUN_00502f74_RET_0(0xff,0xff,0xaf,0,0);
  return;
}


// 0x00e6598 (0x114 bytes)
void FlowState_Update(void)

{
  int iVar1;
  
  iVar1 = g_CardState;
  if ((DAT_0071fb10 != 0) || (DAT_0071fa40 != 0)) {
    DAT_00a20884 = 1;
  }
  if ((g_CardStateFlags & 0x80) != 0) {
    g_CardStateFlags = g_CardStateFlags & 0xffffff7f | 0x40;
    g_CardState = 0x15;
  }
  if ((g_CardStateFlags & 0x100) != 0) {
    g_CardStateFlags = g_CardStateFlags & 0xfffffeff | 0x40;
    g_CardState = 0x14;
  }
  (**(code **)(&g_CardStateFuncs)[g_CardState])();
  DAT_00a20880 = DAT_00a20880 + 1;
  if (g_CardState != iVar1) {
    DAT_00a20880 = 0;
  }
  return;
}


// 0x00e66ac (0x28 bytes)
void CardState_INIT(void)

{
  g_memcardGameSaved = 0;
  DAT_0071fa40 = DAT_0071fae8;
  g_CardState = 3;
  return;
}


// 0x00e66d4 (0xb8 bytes)
void CardState_GOOD_SAVE(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = g_CardStateFlags & 0xfffffff9;
  if ((g_CardStateFlags & 0x80) == 0) {
    if ((g_CardStateFlags & 0x100) == 0) {
      if (DAT_0071fa40 == 0) {
        uVar2 = g_CardStateFlags & 0x200;
        g_CardStateFlags = uVar1;
        if (uVar2 != 0) {
          g_CardStateFlags = uVar1 ^ 0x200;
          g_CardState = 0x16;
        }
      }
      else {
        g_memcardGameSaved = 0;
        g_CardState = 2;
        g_CardStateFlags = uVar1 | 1;
      }
    }
    else {
      g_CardState = 0x14;
      g_CardStateFlags = uVar1 ^ 0x100 | 0x40;
    }
  }
  else {
    g_CardState = 0x15;
    g_CardStateFlags = uVar1 ^ 0x80 | 0x40;
  }
  return;
}


// 0x00e678c (0x58 bytes)
void CardState_WARNING(void)

{
  if ((&DAT_0071fad4)[g_SaveCurCard * 0x30] == 2) {
    (&DAT_0071fad4)[g_SaveCurCard * 0x30] = 0;
  }
  if ((g_CardStateFlags & 1) == 0) {
    g_CardState = 3;
  }
  return;
}


// 0x00e67e4 (0x64 bytes)
void CardState_NOCARD(void)

{
  DAT_0071fb08 = 0xffffffff;
  DAT_0071fb0c = 0xffffffff;
  DAT_0071fa44 = 0xffffffff;
  DAT_0071fa60 = 0xffffffff;
  DAT_0071fa7c = 0xffffffff;
  DAT_0071fa98 = 0xffffffff;
  DAT_0071fab4 = 0xffffffff;
  if ((&DAT_0071fad4)[g_SaveCurCard * 0x30] == 2) {
    (&DAT_0071fad4)[g_SaveCurCard * 0x30] = 0;
  }
  g_CardState = 4;
  return;
}


// 0x00e6848 (0x24 bytes)
void CardState_WAIT_FOR_CARD(void)

{
  g_CardState = 9;
  g_CardStateFlags = g_CardStateFlags & 0xffffffdf;
  return;
}


// 0x00e686c (0x10 bytes)
void CardState_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e687c (0x10 bytes)
void CardState_PROMPT_FORMAT(void)

{
  g_CardState = 9;
  return;
}


// 0x00e688c (0x10 bytes)
void CardState_FORMAT_PENDING(void)

{
  g_CardState = 9;
  return;
}


// 0x00e689c (0x10 bytes)
void CardState_FORMATTING(void)

{
  g_CardState = 0xe;
  return;
}


// 0x00e68ac (0x10 bytes)
void CardState_FORMATTED(void)

{
  g_CardState = 10;
  return;
}


// 0x00e68bc (0x34 bytes)
void CardState_CHECK_SAVE(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 7;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xb;
  return;
}


// 0x00e68f0 (0x10 bytes)
void CardState_CHECKING_SAVE(void)

{
  g_CardState = 0x10;
  return;
}


// 0x00e6900 (0x24 bytes)
void CardState_NOSAVE(void)

{
  if ((g_CardStateFlags & 2) != 0) {
    g_CardState = 0xd;
  }
  return;
}


// 0x00e6924 (0x84 bytes)
void CardState_PROMPT_CREATE_SAVE(void)

{
  if ((g_CardStateFlags & 0x20) == 0) {
    if ((g_CardStateFlags & 0x10) != 0) {
      g_CardStateFlags = g_CardStateFlags ^ 0x10;
      g_CardState = 0xe;
    }
  }
  else {
    g_CardStateFlags = g_CardStateFlags ^ 0x20;
    g_CardState = ((uint)(ZERO_MASK((uint)g_FrontEnd)) & 0xfffffff4) + 0x18;
  }
  return;
}


// 0x00e69a8 (0x34 bytes)
void CardState_CREATE_SAVE_PENDING(void)

{
  if (DAT_0071fb08 < 0) {
    DAT_0071fb08 = 9;
    DAT_0071fb0c = 0;
  }
  g_CardState = 0xf;
  return;
}


// 0x00e69dc (0x6c bytes)
void CardState_CREATING_SAVE(void)

{
  if (DAT_0071fb10 == 0) {
    DAT_0071faec = 0;
    g_SaveCurFile = 0;
    if (DAT_0071fb08 < 0) {
      DAT_0071fb08 = 7;
      DAT_0071fb0c = 0;
    }
    g_CardState = 0x10;
  }
  else {
    g_CardState = 0x12;
    g_CardStateFlags = g_CardStateFlags | 0x40;
  }
  return;
}


// 0x00e6a48 (0x10 bytes)
void CardState_NEWCARD(void)

{
  g_CardState = 1;
  return;
}


// 0x00e6a58 (0x10 bytes)
void CardState_FORMAT_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a68 (0x10 bytes)
void CardState_CREATE_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a78 (0x10 bytes)
void CardState_NO_ROOM(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a88 (0x10 bytes)
void CardState_LOAD_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6a98 (0x10 bytes)
void CardState_SAVE_FAILED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6aa8 (0x40 bytes)
void CardState_SAVING(void)

{
  g_CardState = 1;
  if (DAT_0071fb10 != 0) {
    g_CardState = 0x15;
    g_memcardGameSaved = 0;
    g_CardStateFlags = g_CardStateFlags | 0x440;
  }
  return;
}


// 0x00e6ae8 (0x10 bytes)
void CardState_PROMPT_BEGIN_UNFORMATTED(void)

{
  g_CardState = 3;
  return;
}


// 0x00e6af8 (0x10 bytes)
void CardState_PROMPT_BEGIN_NOSAVE(void)

{
  g_CardState = 0xc;
  return;
}


