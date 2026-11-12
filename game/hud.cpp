// game/hud.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 112 functions, 0xc8274-0xd88e4
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "game/hud.h"
#include "game/boot.h"
#include "game/crt0.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x00c8274 (0x14 bytes)
void SECTION_HEADER_HUD(void)

{
  DAT_0072390c = 0x10000;
  return;
}


// 0x00c8288 (0x48 bytes)
int Hud_FindIconIndex(int iconId)

{
  int iVar1;
  
  iVar1 = 0;
  while ((uint)IconTableEntry[iVar1].iconId != iconId && IconTableEntry[iVar1].iconId != 0xffff) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


// 0x00c82d0 (0x6c bytes)
void HudEntry_SetIcon(uint *param_1,uint param_2)

{
  ushort uVar1;
  IconTableEntries *pIVar2;
  int iVar3;
  IconTableEntries *pIVar4;
  ulonglong uVar5;
  
  pIVar2 = IconTableEntry;
  uVar5 = 0;
  pIVar4 = IconTableEntry;
  while (pIVar4->iconId != param_2 && pIVar4->iconId != 0xffff) {
    pIVar4 = pIVar4 + 1;
    uVar5 = uVar5 + 1;
  }
  iVar3 = (int)((uVar5 & 0x1fffffff) << 3);
  uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar3);
  *(short *)(param_1 + 0x10) = (short)uVar5;
  *param_1 = (uint)uVar1;
  *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)((int)&pIVar2->baseIdx + iVar3);
  param_1[0x11] = (uint)*(ushort *)((int)&pIVar2->variantsCnt + iVar3);
  return;
}


// 0x00c833c (0x108 bytes)
void HudEntry_Reset(uint *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  IconTableEntries *pIVar3;
  IconTableEntries *pIVar4;
  int iVar5;
  ulonglong uVar6;
  
  pIVar3 = IconTableEntry;
  uVar6 = 0;
  puVar2 = (undefined4 *)param_1[0xc];
  pIVar4 = IconTableEntry;
  while ((uint)pIVar4->iconId != param_1[8] && pIVar4->iconId != 0xffff) {
    pIVar4 = pIVar4 + 1;
    uVar6 = uVar6 + 1;
  }
  iVar5 = (int)((uVar6 & 0x1fffffff) << 3);
  uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar5);
  *(short *)(param_1 + 0x10) = (short)uVar6;
  *param_1 = (uint)uVar1;
  *(undefined1 *)((int)param_1 + 0x42) = *(undefined1 *)((int)&pIVar3->baseIdx + iVar5);
  uVar1 = *(ushort *)((int)&pIVar3->variantsCnt + iVar5);
  param_1[1] = param_1[9];
  param_1[0x11] = (uint)uVar1;
  param_1[4] = (uint)puVar2;
  param_1[5] = param_1[0xd];
  param_1[6] = param_1[0xe];
  param_1[3] = param_1[0xb];
  param_1[2] = param_1[10];
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)*puVar2)(param_1);
  }
  param_1[0x1a] = 0;
  return;
}


// 0x00c8444 (0x134 bytes)
int RegisterHUDCallback
              (uint param_1,int param_2,void *fn1,void *fn2,void *hudFn,int *varChanged,int varCount
              )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  HudElement *pHVar4;
  int iVar5;
  
  uVar2 = param_1 & 0xf;
  uVar3 = param_1 & 0xfff0;
  if ((g_gameMode == GAME_MODE_VENDOR && uVar2 != 2) && (uVar2 != 0)) {
    iVar5 = 0;
  }
  else {
    if (((HudEntries[uVar2].regPValue != varChanged) ||
        (((HudEntries[uVar2].regMaxValue != varCount || (HudEntries[uVar2].regIconId != param_2)) ||
         (HudEntries[uVar2].regValue != uVar3)))) ||
       (((HudEntries[uVar2].regInitCb != fn1 || (HudEntries[uVar2].regUpdateCb != fn2)) ||
        (HudEntries[uVar2].regDrawCb != hudFn)))) {
      HudEntries[uVar2].regPValue = varChanged;
      HudEntries[uVar2].regMaxValue = varCount;
      HudEntries[uVar2].regIconId = param_2;
      HudEntries[uVar2].regValue = uVar3;
      HudEntries[uVar2].regInitCb = fn1;
      HudEntries[uVar2].regUpdateCb = fn2;
      HudEntries[uVar2].regDrawCb = hudFn;
      uVar1 = HudEntries[uVar2].value;
      iVar5 = DAT_00a1bfc0 + 1;
      *(int *)&HudEntries[uVar2].field_0x64 = DAT_00a1bfc0;
      DAT_00a1bfc0 = iVar5;
      HudEntries[uVar2].showTimer = 0;
      pHVar4 = HudEntries + uVar2;
      pHVar4->animA = '\0';
      pHVar4->animB = '\0';
      *(undefined2 *)&pHVar4->field_0x72 = 0;
      HudEntries[uVar2].locked = 1;
      if ((uVar3 & uVar1 & 0x20) != 0) {
        HudEntry_Reset(HudEntries + uVar2);
      }
    }
    iVar5 = *(int *)&HudEntries[uVar2].field_0x64;
  }
  return iVar5;
}


// 0x00c8578 (0x4c bytes)
int RegisterHeroHealthHUDCallbacks(void)

{
  int iVar1;
  
  iVar1 = RegisterHUDCallback(1,0x7535,&PTR_HealthHud_Init_007057f0,&PTR_HealthHud_Update_007057f8,
                              &PTR_Draw_NanotechUI_00705800,&g_heroHealth,8);
  return iVar1;
}


// 0x00c85c4 (0x2c bytes)
void HudScratch_Reset(void)

{
  DAT_00a1bfd0 = DAT_00a108e4;
  DAT_00a1bfd4 = DAT_00a108e4 + 0x64000;
  return;
}


// 0x00c85f0 (0x68 bytes)
int HudScratch_Alloc(int size)

{
  int iVar1;
  
  if (DAT_00a1bfd0 == 0) {
    DAT_00a1bfd4 = DAT_00a108e4 + 0x64000;
    DAT_00a1bfd0 = DAT_00a108e4;
  }
  if (DAT_00a1bfd4 - DAT_00a1bfd0 < size) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00a1bfd0;
    DAT_00a1bfd0 = DAT_00a1bfd0 + (size + 0xfU & 0xfffffff0);
  }
  return iVar1;
}


// 0x00c8658 (0x1b8 bytes)
void Hud_InitBanks(void)

{
  astruct *paVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
                    /* CORRESPONDING FUNCTION IN PS2 : 0x1fee88 */
  lVar3 = 0;
  DAT_00a1bfc0 = 0;
  DAT_00a1bfc4 = 0;
  do {
    iVar2 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
    *(undefined4 *)(&HudEntries[0].field_0x64 + iVar2) = 0xffffffff;
    *(undefined4 *)((int)&HudEntries[0].regIconId + iVar2) = 0x10000;
    RegisterHUDCallback((uint)lVar3,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    iVar4 = (uint)lVar3 + 1;
    *(undefined4 *)((int)&HudEntries[0].showTimer + iVar2) = 0;
    *(undefined4 *)((int)&HudEntries[0].value + iVar2) = 0;
    lVar3 = (longlong)iVar4;
    *(undefined4 *)((int)&HudEntries[0].regValue + iVar2) = 0;
    *(undefined4 *)((int)&HudEntries[0].id + iVar2) = 0xfffffffa;
  } while (iVar4 < 0xd);
  paVar1 = DAT_00a1bfd0;
  if (HudBankMain == (astruct *)0x0) {
    if (DAT_00a1bfd0 == (astruct *)0x0) {
      DAT_00a1bfd4 = &DAT_00a108e4[0x307c].field_0x4;
      DAT_00a1bfd0 = DAT_00a108e4;
    }
    HudBankMain = (astruct *)0x0;
    paVar1 = DAT_00a1bfd0;
    if (0x27ff < (int)DAT_00a1bfd4 - (int)DAT_00a1bfd0) {
      paVar1 = (astruct *)&DAT_00a1bfd0[0x136].field_0xa;
      HudBankMain = DAT_00a1bfd0;
    }
    DAT_00a1bfd0 = paVar1;
    if (DAT_00a1bfd0 == (astruct *)0x0) {
      DAT_00a1bfd4 = &DAT_00a108e4[0x307c].field_0x4;
      DAT_00a1bfd0 = DAT_00a108e4;
    }
    DAT_00a1bff8 = (astruct *)0x0;
    paVar1 = DAT_00a1bfd0;
    if (0x13ff < (int)DAT_00a1bfd4 - (int)DAT_00a1bfd0) {
      paVar1 = (astruct *)&DAT_00a1bfd0[0x9b].field_0x5;
      DAT_00a1bff8 = DAT_00a1bfd0;
    }
  }
  DAT_00a1bfd0 = paVar1;
  DAT_00a1bff4 = &HudBankMain[0x136].field_0xa;
  DAT_00a1bff0 = HudBankMain;
  FastMemSetZero(HudBankMain,0x2800);
  HudBankMain->field32_0x20 = 0xff;
  return;
}


// 0x00c8810 (0x4 bytes)
void STUB_000c8810(...)

{
  return;
}


// 0x00c8814 (0x4 bytes)
void STUB_000c8814(...)

{
  return;
}


// 0x00c8818 (0x4 bytes)
void STUB_000c8818(...)

{
  return;
}


// 0x00c881c (0x4 bytes)
void STUB_000c881c(...)

{
  return;
}


// 0x00c8820 (0xa0 bytes)
void Hud_SwapMobyBank(int bank)

{
  astruct *paVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = MobyInstanceEnd;
  pMVar3 = MobyInstancePermEnd;
  uVar2 = DAT_00a1bff8;
  paVar1 = HudBankMain;
  if ((bank & 0xffU) != (uint)DAT_00a1bffc) {
    DAT_00a1bffc = (byte)((ulonglong)(LZCOUNT((uint)DAT_00a1bffc) << 0x20) >> 0x25);
    HudBankMain = (astruct *)g_MobyInstance;
    g_MobyInstance = (MobyInstance *)paVar1;
    MobyInstancePermEnd = DAT_00a1bff0;
    DAT_00a1bff0 = pMVar3;
    MobyInstanceEnd = DAT_00a1bff4;
    DAT_00a1bff4 = pMVar4;
    DAT_00a1bff8 = DAT_00a390b0;
    DAT_00a390b0 = uVar2;
  }
  return;
}


// 0x00c88c0 (0xa4 bytes)
void Hud_ResetAllEntries(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    RegisterHUDCallback(uVar1,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    HudEntries[uVar1].showTimer = 0;
    HudEntries[uVar1].id = -6;
    HudEntry_Reset(HudEntries + uVar1);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xd);
  return;
}


// 0x00c8964 (0x90 bytes)
int Hud_UnregisterById(int id)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = 0;
  do {
    uVar2 = (uint)lVar1;
    if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar1 << 7) + (int)(lVar1 << 4)) == id) break;
    uVar2 = uVar2 + 1;
    lVar1 = (longlong)(int)uVar2;
  } while ((int)uVar2 < 0xd);
  if ((int)uVar2 < 0xd) {
    RegisterHUDCallback(uVar2,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
  }
  return (int)((int)uVar2 < 0xd);
}


// 0x00c89f4 (0xd0 bytes)
HudElement * Hud_SetEntryIconById(int param_1,uint param_2)

{
  ushort uVar1;
  IconTableEntries *pIVar2;
  int iVar3;
  HudElement *pHVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  
  pIVar2 = IconTableEntry;
  iVar5 = 0;
  iVar3 = 0;
  piVar6 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar6 == param_1) break;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 0x24;
  } while (iVar5 < 0xd);
  if (iVar5 < 0xd) {
    pHVar4 = HudEntries + iVar5;
    uVar7 = 0;
    while( true ) {
      uVar8 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar3);
      if (uVar8 == param_2 || uVar8 == 0xffff) break;
      iVar3 = iVar3 + 8;
      uVar7 = uVar7 + 1;
    }
    iVar3 = (int)((uVar7 & 0x1fffffff) << 3);
    uVar1 = *(ushort *)((int)&IconTableEntry->iconId + iVar3);
    HudEntries[iVar5].iconIdx = (short)uVar7;
    pHVar4->iconId = (uint)uVar1;
    HudEntries[iVar5].iconBaseIdx = *(char *)((int)&pIVar2->baseIdx + iVar3);
    HudEntries[iVar5].iconVariantsCnt = (uint)*(ushort *)((int)&pIVar2->variantsCnt + iVar3);
    HudEntries[iVar5].regIconId = HudEntries[iVar5].iconId;
  }
  else {
    pHVar4 = (HudElement *)0x0;
  }
  return pHVar4;
}


// 0x00c8ac4 (0x64 bytes)
void Hud_RestoreEntryCallbackById(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0;
  piVar2 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar2 == param_1) {
      iVar1 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
      *(undefined4 *)((int)&HudEntries[0].showTimer + iVar1) = 0;
      *(undefined4 *)((int)&HudEntries[0].displayedValue + iVar1) =
           *(undefined4 *)((int)&HudEntries[0].targetValue + iVar1);
      *(undefined4 *)((int)&HudEntries[0].targetValue + iVar1) =
           *(undefined4 *)((int)&HudEntries[0].maxValue + iVar1);
      return;
    }
    lVar3 = lVar3 + 1;
    piVar2 = piVar2 + 0x24;
  } while ((int)lVar3 < 0xd);
  return;
}


// 0x00c8b28 (0x60 bytes)
void Hud_SetEntryValueById(int id,int value)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 0;
  piVar3 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar3 == id) break;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x24;
  } while ((int)lVar2 < 0xd);
  if ((int)lVar2 < 0xd) {
    iVar1 = (int)(lVar2 << 7) + (int)(lVar2 << 4);
    *(int *)((int)&HudEntries[0].regValue + iVar1) = value;
    if (*(int *)((int)&HudEntries[0].locked + iVar1) == 0) {
      *(int *)((int)&HudEntries[0].value + iVar1) = value;
    }
  }
  return;
}


// 0x00c8b88 (0x70 bytes)
int HudEntry_ApplyAlignment(int entry,int *x,int *y)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(entry + 0x60);
  iVar2 = *(int *)(entry + 0x58);
  if (((uVar3 & 1) == 0) && ((uVar3 & 2) == 0)) {
    *y = *y - (*(int *)(entry + 0x5c) >> 1);
    uVar3 = *(uint *)(entry + 0x60);
  }
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 8) == 0) {
      iVar2 = iVar2 >> 1;
      iVar1 = *x;
    }
    else {
      iVar1 = *x;
    }
    *x = iVar1 - iVar2;
  }
  return 0;
}


// 0x00c8c08 (0x208 bytes)
void HudEntry_GetSlideOffset
               (int param_1,int *param_2,int *param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  iVar5 = 0;
  lVar6 = (param_4 - param_5) +
          (ZERO_MASK(*(int *)(param_1 + 0x7c)) &
          (param_5 + param_4) - (param_4 - param_5));
  uVar2 = *(uint *)(param_1 + 0x60);
  iVar4 = 0;
  lVar6 = lVar6 + ((longlong)(int)lVar6 >> 0x3f & -lVar6);
  iVar3 = (int)(lVar6 + (0x17 - (longlong)(int)lVar6 >> 0x3f & 0x17U - lVar6)) * 4;
  if (*(int *)(param_1 + 0x7c) == 0) {
    fVar1 = *(float *)(&DAT_007242c0 + iVar3);
  }
  else {
    fVar1 = *(float *)(&DAT_00724260 + iVar3);
  }
  dVar9 = (double)fVar1;
  dVar10 = 0.5;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      dVar7 = 20.0;
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) != 0) {
          dVar8 = (double)FastIntToDouble(*(undefined4 *)(param_1 + 0x58));
          iVar5 = FastDoubleToInt
                            ((double)(float)(dVar9 * (double)(float)(dVar8 + dVar7) + dVar10));
        }
      }
      else {
        dVar8 = (double)FastIntToDouble(*(undefined4 *)(param_1 + 0x58));
        iVar5 = FastDoubleToInt
                          ((double)(float)(dVar9 * (double)(float)(dVar8 + dVar7) + dVar10));
        iVar5 = -iVar5;
      }
    }
    else {
      dVar7 = (double)FastIntToDouble(*(undefined4 *)(param_1 + 0x5c));
      iVar4 = FastDoubleToInt
                        ((double)(float)(dVar9 * (double)(float)(dVar7 + 52.0) + dVar10));
    }
  }
  else {
    dVar7 = (double)FastIntToDouble(*(undefined4 *)(param_1 + 0x5c));
    iVar4 = FastDoubleToInt
                      ((double)(float)(dVar9 * (double)(float)(dVar7 + 52.0) + dVar10));
    iVar4 = -iVar4;
  }
  *param_2 = *param_2 + iVar5;
  *param_3 = *param_3 + iVar4;
  return;
}


// 0x00c8e10 (0x124 bytes)
void HudEntry_CalcNumberSize(int entry)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  int iVar4;
  
  piVar1 = *(int **)(entry + 0xc);
  iVar4 = *(int *)(entry + 8);
  if ((piVar1 == (int *)0x0) || (((uint)piVar1 & 3) != 0)) {
    iVar3 = 99999;
  }
  else {
    iVar3 = *piVar1;
    iVar3 = iVar3 + ((uint)((longlong)iVar4 - (longlong)iVar3 >> 0x3f) & iVar4 - iVar3);
  }
  *(int *)(entry + 0x78) = iVar3;
  *(int *)(entry + 0x74) = iVar3;
  lVar2 = 0;
  for (; 9 < iVar4; iVar4 = iVar4 / 10) {
    lVar2 = lVar2 + 1;
  }
  if (((*(uint *)(entry + 0x60) & 3) == 0) && ((*(uint *)(entry + 0x60) & 0xc) != 0)) {
    iVar4 = *(int *)(entry + 0x58);
    iVar3 = (int)lVar2 * 0xc + *(int *)(entry + 0x5c) + 0xc;
    iVar4 = iVar4 + ((uint)((longlong)iVar4 + -0xe >> 0x3f) & 0xeU - iVar4);
  }
  else {
    iVar3 = *(int *)(entry + 0x5c);
    iVar4 = (int)(lVar2 << 4) + (int)lVar2 * -2 + *(int *)(entry + 0x58) + 0xe;
    iVar3 = iVar3 + ((uint)((longlong)iVar3 + -0xc >> 0x3f) & 0xcU - iVar3);
  }
  *(int *)(entry + 0x5c) = iVar3;
  *(int *)(entry + 0x58) = iVar4;
  return;
}


// 0x00c8f40 (0x74 bytes)
void HudEntry_InitCounter(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xc8f34);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xc8f34);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00c8fc0 (0x80 bytes)
void HudEntry_InitCounter32(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xc8fb4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xc8fb4);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00c9040 (0x60 bytes)
void Hud_SetEntryPosById
               (int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
               undefined2 param_5)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar3 = 0;
  piVar2 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar2 == param_1) break;
    lVar3 = lVar3 + 1;
    piVar2 = piVar2 + 0x24;
  } while ((int)lVar3 < 0xd);
  if ((int)lVar3 < 0xd) {
    iVar1 = (int)(lVar3 << 7) + (int)(lVar3 << 4);
    *(undefined4 *)((int)&HudEntries[0].width + iVar1) = param_2;
    *(undefined4 *)((int)&HudEntries[0].height + iVar1) = param_3;
    *(undefined2 *)((int)&HudEntries[0].offsX + iVar1) = param_4;
    *(undefined2 *)((int)&HudEntries[0].offsY + iVar1) = param_5;
  }
  return;
}


// 0x00c90a0 (0x90 bytes)
int Hud_ShowEntryById(int id,int time)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)&HudEntries[0].field_0x64;
  do {
    if (*piVar3 == id) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x24;
  } while (iVar2 < 0xd);
  if ((iVar2 < 0xd) && (HudEntries[iVar2].locked == 0)) {
    iVar1 = 0;
    HudEntries[iVar2].showTimer =
         time + ((uint)((longlong)time - (longlong)HudEntries[iVar2].showTimer >> 0x3f) &
                HudEntries[iVar2].showTimer - time);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


// 0x00c9138 (0x23c bytes)
uint HudIcon_GetAnimFrame(short *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  
  uVar5 = 0;
  psVar6 = (short *)((int)&IconTableEntry->iconId + (int)((longlong)*param_1 << 3));
  if (*psVar6 != -1) {
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar5 = (uint)(ushort)psVar6[2];
      }
      else {
        iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
        uVar5 = (uint)(ushort)psVar6[2] +
                (iVar4 - (iVar4 / (int)(uint)(ushort)psVar6[1]) * (uint)(ushort)psVar6[1]);
      }
    }
    else if (bVar1 < 3) {
      uVar2 = psVar6[1];
      iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
      iVar3 = iVar4 / (int)((uint)uVar2 * 2 + -2);
      iVar4 = iVar4 - (iVar3 * (uint)uVar2 * 2 + iVar3 * -2);
      iVar3 = ((uint)uVar2 * 2 - iVar4) + -2;
      uVar5 = iVar3 + ((uint)((longlong)((longlong)iVar4 - (ulonglong)uVar2) >> 0x3f) &
                      iVar4 - iVar3) + (uint)(ushort)psVar6[2];
    }
    else if (bVar1 < 4) {
      if (*(int *)(param_1 + 6) < worldUpdateTime) {
        iVar4 = (worldUpdateTime - *(int *)(param_1 + 6)) / (int)(uint)*(byte *)((int)psVar6 + 7);
        iVar3 = (uint)(ushort)psVar6[1] * 2;
        if (iVar4 < iVar3 + -2) {
          iVar3 = (iVar3 - iVar4) + -2;
          uVar5 = iVar3 + ((uint)((longlong)((longlong)iVar4 - (ulonglong)(ushort)psVar6[1]) >> 0x3f
                                 ) & iVar4 - iVar3) + (uint)(ushort)psVar6[2];
        }
        else {
          uVar5 = (uint)(ushort)psVar6[2];
          iVar4 = MB_randInt((int)(animationSpeed * 30.5));
          *(uint *)(param_1 + 6) =
               (uint)(ushort)psVar6[1] * 2 + (int)(animationSpeed * 10.5) + iVar4;
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 2);
      }
    }
  }
  *(uint *)(param_1 + 2) = uVar5;
  return uVar5;
}


// 0x00c9390 (0x310 bytes)
void HudEntry_UpdateCounter(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  char cVar8;
  uint uVar7;
  int iVar10;
  longlong lVar9;
  undefined8 in_LR;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  iVar4 = (int)param_1;
  iVar10 = *(int *)(iVar4 + 0x78);
  iVar1 = *(int *)(iVar4 + 0x6c);
  iVar2 = *(int *)(iVar4 + 0x74);
  if (*(int **)(iVar4 + 0xc) != (int *)0x0) {
    iVar10 = **(int **)(iVar4 + 0xc);
    iVar10 = iVar10 + (iVar10 >> 0x1f & -iVar10);
    iVar10 = iVar10 + ((uint)((longlong)*(int *)(iVar4 + 8) - (longlong)iVar10 >> 0x3f) &
                      *(int *)(iVar4 + 8) - iVar10);
    *(int *)(iVar4 + 0x78) = iVar10;
  }
  if (iVar2 != iVar10) {
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = loadVectorLeftIndexed(in_LR,0xc9374);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                         auVar13);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    if (0x17 < iVar1) {
      lVar9 = (longlong)(iVar2 - iVar10);
      lVar9 = lVar9 + (lVar9 >> 0x3f & lVar9 * -2);
      iVar10 = (int)lVar9;
      if (iVar10 != 0) {
        dVar11 = (double)FastIntToDouble(lVar9);
        lVar9 = FastDoubleToInt
                          ((double)(SQRT((float)(dVar11 * 0.03999999910593033)) * 5.0));
        iVar1 = *(int *)(iVar4 + 0x74);
        iVar10 = iVar10 * (int)(animationSpeed * 2.5);
        if ((int)lVar9 < iVar10 / (int)(animationSpeed * 10.5)) {
          lVar9 = (longlong)(iVar10 / (int)(animationSpeed * 10.5));
        }
        lVar6 = lVar9 + ((longlong)(int)lVar9 + -1 >> 0x3f & 1U - lVar9);
        lVar9 = (ulonglong)*(byte *)(iVar4 + 0x73) +
                lVar6 + (0x79 - (longlong)(int)lVar9 >> 0x3f & 0x79U - lVar6);
        cVar8 = (char)lVar9;
        *(char *)(iVar4 + 0x73) = cVar8;
        uVar7 = (uint)lVar9 & 0xff;
        if ((int)(animationSpeed * 2.5) < (int)uVar7) {
          iVar10 = (int)uVar7 / (int)(animationSpeed * 2.5);
          fVar5 = animationSpeed * 2.5;
          *(uint *)(iVar4 + 0x74) =
               iVar1 + iVar10 +
               ((uint)((longlong)*(int *)(iVar4 + 0x78) - (longlong)iVar1 >> 0x3f) &
               (iVar1 - iVar10) - (iVar1 + iVar10));
          *(char *)(iVar4 + 0x73) = cVar8 - (char)iVar10 * (char)(int)fVar5;
        }
      }
    }
  }
  if (*(int *)(iVar4 + 0x7c) < (int)(animationSpeed * 5.5)) {
    cVar8 = *(char *)(iVar4 + 0x71);
    if ((cVar8 != '\0') || (*(char *)(iVar4 + 0x70) != '\0')) {
      *(undefined4 *)(iVar4 + 0x6c) = 1;
    }
    if (cVar8 == '\0') {
      if (*(char *)(iVar4 + 0x70) != '\0') {
        *(char *)(iVar4 + 0x70) = *(char *)(iVar4 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar4 + 0x71) = cVar8 + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x70) < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x71) < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar4 + 0x71) = *(byte *)(iVar4 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}


// 0x00c96b0 (0x170 bytes)
void HudEntry_UpdateCounterSlide(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 in_LR;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  iVar5 = (int)param_1;
  iVar8 = *(int *)(iVar5 + 0x78);
  iVar3 = *(int *)(iVar5 + 0x6c);
  bVar1 = *(byte *)(iVar5 + 0x70);
  uVar7 = (uint)bVar1;
  bVar2 = *(byte *)(iVar5 + 0x71);
  uVar6 = (uint)bVar2;
  if (*(int **)(iVar5 + 0xc) != (int *)0x0) {
    iVar8 = **(int **)(iVar5 + 0xc);
    iVar8 = iVar8 + (iVar8 >> 0x1f & -iVar8);
    iVar8 = iVar8 + ((uint)((longlong)*(int *)(iVar5 + 8) - (longlong)iVar8 >> 0x3f) &
                    *(int *)(iVar5 + 8) - iVar8);
    *(int *)(iVar5 + 0x78) = iVar8;
  }
  if (*(int *)(iVar5 + 0x74) != iVar8) {
    auVar10 = ZEXT416(0xffffffff);
    auVar9 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = loadVectorLeftIndexed(in_LR,0xc96a0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar9);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
    if (0x17 < iVar3) {
      *(int *)(iVar5 + 0x74) = iVar8;
    }
  }
  if (*(int *)(iVar5 + 0x7c) < (int)(animationSpeed * 5.5)) {
    if ((uVar6 != 0) || (uVar7 != 0)) {
      *(undefined4 *)(iVar5 + 0x6c) = 1;
    }
    if (uVar6 == 0) {
      if (uVar7 != 0) {
        *(byte *)(iVar5 + 0x70) = bVar1 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar2 - 1;
    }
  }
  else if ((int)uVar7 < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar5 + 0x70) = bVar1 + 1;
  }
  else if ((int)uVar6 < (int)(animationSpeed * 8.5)) {
    *(byte *)(iVar5 + 0x71) = bVar2 + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}


// 0x00c9820 (0x4 bytes)
void STUB_000c9820(...)

{
  return;
}


// 0x00c9824 (0x324 bytes)
int HudEntry_DrawLargeNumber
              (int param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<4> local_a0;
  GPiece<4> local_9c;
  GPiece<16> local_98;
  
  iVar12 = 0;
  if (((*(uint *)(param_1 + 0x60) & 3) == 0) && ((*(uint *)(param_1 + 0x60) & 0xc) != 0)) {
    iVar9 = 0;
    iVar8 = 0xc;
    iVar11 = 0;
    iVar10 = *(int *)(param_1 + 0x58) + -0xe >> 1;
  }
  else {
    iVar8 = 0;
    iVar11 = *(int *)(param_1 + 0x5c) + -0xc >> 1;
    iVar9 = 0xe;
    iVar10 = 0;
  }
  lVar6 = 0;
  if (9 < param_2) {
    lVar6 = 0;
    do {
      lVar6 = (longlong)((int)lVar6 + 1);
      param_2 = param_2 / 10;
    } while (9 < param_2);
  }
  lVar1 = lVar6 << 4;
  iVar5 = (int)lVar6;
  if (-1 < iVar5) {
    do {
      iVar7 = (int)lVar6;
      iVar2 = iVar7 * iVar8 + param_4;
      iVar3 = iVar7 * iVar9 + param_3 + iVar12;
      HudEntry_GetSlideOffset(param_1,local_a0,local_9c,param_5,lVar6);
      FontPrintLarge
                (iVar3 + iVar10 + -1,iVar2 + iVar11 + 1,0xc0000000,local_98,0xffffffffffffffff);
      FontPrintLarge(iVar3 + iVar10,iVar2 + iVar11,0xc0008080,local_98,0xffffffffffffffff);
      if (((iVar5 - iVar7 == 5) && (5 < iVar5)) || ((iVar5 - iVar7 == 2 && (2 < iVar5)))) {
        puVar4 = &DAT_006520d0;
        if ((g_Language == 3) || (g_Language == 5)) {
          puVar4 = &DAT_006520d8;
        }
        FontPrintLarge
                  (iVar3 + iVar10 + -5,iVar2 + iVar11 + 1,0xc0000000,puVar4,0xffffffffffffffff);
        FontPrintLarge
                  (iVar3 + iVar10 + -4,iVar2 + iVar11,0xc0008080,puVar4,0xffffffffffffffff);
        iVar12 = iVar12 + -4;
      }
      lVar6 = (longlong)(iVar7 + -1);
    } while (-1 < iVar7 + -1);
  }
  return (int)lVar1 + iVar5 * -2 + 0xe;
}


// 0x00c9b48 (0xec bytes)
undefined4 Draw_LargeNumberHud(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GPiece<4> local_10;
  GPiece<4> local_c;
  
  iVar4 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x58);
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    iVar3 = iVar3 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  if ((uVar1 & 4) == 0) {
    iVar4 = iVar4 - (iVar2 + ((uint)(ZERO_MASK((uVar1 & 8))) & (iVar2 >> 1) - iVar2
                             ));
  }
  HudEntry_DrawLargeNumber
            (param_1,*(undefined4 *)(param_1 + 0x74),iVar4,iVar3,*(undefined4 *)(param_1 + 0x6c));
  HudEntry_GetSlideOffset(param_1,local_10,local_c,*(undefined4 *)(param_1 + 0x6c),0);
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00c9c34 (0xc8 bytes)
undefined4 ____Unused_HudEntry_GetSlideField58(int param_1)

{
  GPiece<4> local_10;
  GPiece<4> local_c;
  
  HudEntry_GetSlideOffset(param_1,local_10,local_c,*(undefined4 *)(param_1 + 0x6c),0);
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00c9d28 (0x280 bytes)
void OxygenHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 in_LR;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  auVar18 = ZEXT416(0xffffffff);
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  iVar2 = 0;
  auVar18 = loadVectorLeftIndexed(in_LR,0xc9cfc);
  auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar19 = loadVectorLeftIndexed(4,0xc9cfc);
  auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = ZEXT416((uint)(auVar18.piece<0,4>() + auVar19.piece<0,4>())) & (GPiece<16>)0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  dVar10 = 2.0;
  dVar11 = 232.0;
  dVar12 = 116.0;
  dVar13 = 17.0;
  pfVar3 = (float *)&DAT_00a1c1a0;
  dVar14 = -0.4000000059604645;
  dVar15 = 0.4000000059604645;
  dVar16 = -0.6000000238418579;
  pfVar5 = (float *)&DAT_00a1c1a8;
  dVar17 = 0.6000000238418579;
  pfVar4 = (float *)&DAT_00a1c1a4;
  pfVar6 = (float *)&DAT_00a1c1ac;
  do {
    if (iVar2 < 10) {
      dVar7 = (double)DAT_00724320;
    }
    else if (iVar2 < 0x14) {
      dVar7 = (double)DAT_00724324;
    }
    else {
      dVar7 = (double)DAT_00724328;
    }
    dVar8 = (double)(-(float)(dVar7 * dVar10 - dVar11) / (float)(longlong)DAT_0072432c);
    dVar9 = (double)(float)((double)(longlong)(iVar2 - (iVar2 / DAT_0072432c) * DAT_0072432c) *
                            dVar8 + (double)(float)(dVar7 - dVar12));
    dVar8 = (double)(float)(dVar9 + dVar8);
    dVar7 = (double)MB_randRangeFloat((float)(dVar7 - dVar13),(float)(dVar13 - dVar7));
    *pfVar3 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar9,(float)dVar8);
    *pfVar4 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    pfVar6 = pfVar6 + 4;
  } while (iVar2 < 100);
  return;
}


// 0x00c9fb0 (0x144 bytes)
void OxygenHud_Update(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  
  HudEntry_UpdateCounter();
  fVar9 = DAT_00724328;
  fVar8 = DAT_00724324;
  fVar7 = DAT_00724320;
  iVar10 = g_MainLoopFrames +
           (((int)g_MainLoopFrames >> 1) + (uint)((int)g_MainLoopFrames < 0 && (g_MainLoopFrames & 1) != 0)) *
           -2;
  pfVar11 = (float *)(&DAT_00a1c1a0 + iVar10 * 4);
  for (; iVar10 < 100; iVar10 = iVar10 + 2) {
    fVar3 = fVar7;
    if ((9 < iVar10) && (fVar3 = fVar9, iVar10 < 0x1e)) {
      fVar3 = fVar8;
    }
    fVar1 = pfVar11[2];
    fVar4 = fVar3 - 17.0;
    fVar2 = pfVar11[3];
    fVar3 = fVar3 - 116.0;
    fVar5 = *pfVar11 + fVar1;
    fVar6 = pfVar11[1] + fVar2;
    *pfVar11 = fVar5;
    pfVar11[1] = fVar6;
    if (fVar5 < fVar4) {
      fVar1 = -fVar1;
      *pfVar11 = fVar4;
      pfVar11[2] = fVar1;
      fVar5 = fVar4;
    }
    if (-fVar4 < fVar5) {
      *pfVar11 = -fVar4;
      pfVar11[2] = -fVar1;
    }
    if (fVar6 < fVar3) {
      fVar2 = -fVar2;
      pfVar11[1] = fVar3;
      pfVar11[3] = fVar2;
      fVar6 = fVar3;
    }
    if (-fVar3 < fVar6) {
      pfVar11[1] = -fVar3;
      pfVar11[3] = -fVar2;
    }
    pfVar11 = pfVar11 + 8;
  }
  return;
}


// 0x00ca0f4 (0x2c8 bytes)
void Hud_DrawTexQuad_v2
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = param_4 + param_2 & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00ca3bc (0x28 bytes)
void Hud_DrawTexQuad_v2_Fixed(undefined8 param_1,int param_2,int param_3)

{
  Hud_DrawTexQuad_v2(param_1,param_2 >> 4,param_3 >> 4);
  return;
}


// 0x00ca3e4 (0x80 bytes)
int GetIconFrameTex(uint param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  IconTableEntries *pIVar3;
  
                    /* The UiTexCategory categories can be inspected closer in replanetizer via it's
                       UI textures tab in the textureframe */
  uVar1 = 0;
  pIVar3 = IconTableEntry;
  while (pIVar3->iconId != param_1 && pIVar3->iconId != 0xffff) {
    pIVar3 = pIVar3 + 1;
    uVar1 = uVar1 + 1;
  }
  iVar2 = (int)((uVar1 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) ||
     ((int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar2) <= param_2)) {
    param_2 = 0;
  }
  else {
    param_2 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + param_2;
  }
  return param_2;
}


// 0x00ca464 (0x2c8 bytes)
void Hud_DrawTexQuad_v3
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = param_4 + param_2 & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00ca72c (0x324 bytes)
void DrawFlatOverlay
               (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5,
               int param_6)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = EffectTexHeaders;
  iVar5 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] =
       (RsxCmd)((param_5 >> 8 & 0xff) << 8) |
       (RsxCmd)((param_5 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((param_5 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)param_5 & 0xff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  if (param_6 == 0) {
    RVar1 = param_1 - 1 & 0xffff;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 - 1 & 0xffffffff) << 0x10) | RVar1;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    RVar2 = param_3 - 1 & 0xffff;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 - 1 & 0xffffffff) << 0x10) | RVar1;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 - 1 & 0xffffffff) << 0x10) | RVar2;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 - 1 & 0xffffffff) << 0x10) | RVar2;
    pRVar3->command = pRVar3->command + 2;
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
    pRVar3 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar3->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar3->command = pRVar3->command + 2;
  }
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00caa88 (0x778 bytes)
// strings: 0072433c: '?fff' (raw)

uint DrawOxygenMeter(uint *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  IconTableEntries *pIVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int local_a0;
  uint local_9c [5];
  
  uVar4 = DAT_00724330;
  iVar16 = 0;
  iVar6 = 0;
  local_9c[0] = param_1[0x15];
  uVar11 = param_1[0x18];
  bVar1 = *(byte *)(g_viewMtxPtr + 0x11);
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    iVar6 = -0x50;
    if (bVar1 == 5) {
      iVar6 = -0x3c;
    }
  }
  else if (bVar1 == 5) {
    iVar6 = 0x14;
  }
  local_a0 = param_1[0x14] +
             iVar6 + ((uint)(ZERO_MASK((0x81 - (uint)bVar1))) & 0x14U - iVar6);
  param_1[0x16] = DAT_00724330;
  uVar9 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar11 & 1) == 0) && ((uVar11 & 2) == 0)) {
    local_9c[0] = local_9c[0] - ((int)uVar9 >> 1);
  }
  if ((uVar11 & 4) == 0) {
    local_a0 = local_a0 -
               (uVar4 + ((uint)(ZERO_MASK((uVar11 & 8))) &
                        ((int)uVar4 >> 1) - uVar4));
  }
  HudEntry_GetSlideOffset(param_1,&local_a0,local_9c,param_1[0x1b],0);
  uVar4 = DAT_00724330 * 0xd0;
  uVar9 = DAT_00724334 * 0xea0;
  uVar12 = DAT_00724330 * 0x260;
  uVar11 = DAT_00724334 * 0xa0;
  iVar6 = (local_a0 + *(short *)(param_1 + 0x12)) * 0x10 +
          ((int)uVar4 >> 6) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3f) != 0);
  iVar7 = (local_9c[0] + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  DrawFlatOverlay(iVar6,iVar7,
                  iVar6 + ((int)uVar12 >> 6) + (uint)((int)uVar12 < 0 && (uVar12 & 0x3f) != 0),
                  iVar7 + ((int)uVar9 >> 8) + (uint)((int)uVar9 < 0 && (uVar9 & 0xff) != 0),
                  0x80684c2f,1);
  uVar11 = 0;
  if ((int)(param_1[0x1d] * 3) < 0x2711) {
    iVar6 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
    uVar11 = (uint)((ulonglong)
                    ((longlong)((g_MainLoopFrames + -1) - ((g_MainLoopFrames + -1) / iVar6) * iVar6) -
                    (longlong)(int)(animationSpeed * 0.75 * 60.0)) >> 0x3f);
  }
  uVar15 = 0;
  if ((int)(param_1[0x1d] * 3) < 0x2711) {
    iVar6 = (int)((float)(longlong)(animationSpeed * 1.5) * 60.0);
    uVar15 = (ulonglong)
             ((longlong)(g_MainLoopFrames - (g_MainLoopFrames / iVar6) * iVar6) -
             (longlong)(int)(animationSpeed * 0.75 * 60.0)) >> 0x3f;
  }
  if (uVar11 == 0 && (uint)uVar15 == 1) {
    Hero_PlaySound(0xb,0);
  }
  uVar5 = 0;
  iVar6 = 0;
  while( true ) {
    uVar11 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar6);
    if (uVar11 == *param_1 || uVar11 == 0xffff) break;
    iVar6 = iVar6 + 8;
    uVar5 = uVar5 + 1;
  }
  iVar6 = (int)((uVar5 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar6) == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((uint)uVar15 < (uint)*(ushort *)((int)&IconTableEntry->unknown + iVar6)) {
      lVar8 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar6) + uVar15;
    }
  }
  Hud_DrawTexQuad_v3(lVar8,local_a0 + *(short *)(param_1 + 0x12),
                     local_9c[0] + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,
                     0x80);
  dVar27 = 16.0;
  uVar15 = 0;
  fVar2 = (float)(longlong)(int)DAT_00724330 * DAT_00724338 * 0.5;
  fVar3 = (float)(longlong)(int)DAT_00724334 * DAT_0072433c * 0.5;
  dVar30 = (double)(fVar2 * 0.05882353 * 16.0);
  dVar22 = (double)(fVar3 * 0.00862069 * 16.0);
  dVar31 = (double)(((1.0 - DAT_00724338) * 0.5 * (float)(longlong)(int)DAT_00724330 +
                    fVar2 + (float)(longlong)(local_a0 + *(short *)(param_1 + 0x12))) * 16.0);
  dVar29 = (double)(((1.0 - DAT_0072433c) * 0.5 * (float)(longlong)(int)DAT_00724334 +
                    fVar3 + (float)(longlong)
                                   (int)(local_9c[0] + (int)*(short *)((int)param_1 + 0x4a))) * 16.0
                   );
  dVar28 = -(double)((float)(longlong)(int)(10000 - param_1[0x1d]) * 0.0001 * 2.0 * 116.0 - 116.0);
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar15 = uVar15 + 1;
  }
  iVar6 = (int)((uVar15 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar6) == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar6)) {
      lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar6) + 2;
    }
  }
  dVar18 = (double)DAT_00724328;
  iVar6 = 0;
  dVar25 = (double)DAT_00724320;
  dVar17 = (double)DAT_00724324;
  pfVar14 = (float *)&DAT_00a1c1a4;
  pfVar13 = (float *)&DAT_00a1c1a0;
  dVar21 = 32.0;
  dVar20 = 0.0625;
  dVar23 = (double)(float)(dVar18 - dVar17);
  dVar24 = (double)(float)(dVar17 - dVar25);
  dVar19 = dVar18;
  dVar26 = dVar25;
  do {
    if (iVar6 == 0) {
      dVar31 = -(double)(float)(dVar26 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar26 * dVar27 - dVar29);
      dVar28 = (double)(float)(dVar25 + dVar28);
      iVar16 = (int)(dVar25 * dVar21);
    }
    else if (iVar6 == 10) {
      dVar31 = -(double)(float)(dVar24 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar24 * dVar27 - dVar29);
      iVar16 = (int)(dVar17 * dVar21);
      dVar28 = (double)(float)(dVar28 + (double)(float)(dVar17 - dVar25));
    }
    else if (iVar6 == 0x1e) {
      dVar31 = -(double)(float)(dVar23 * dVar27 - dVar31);
      dVar29 = -(double)(float)(dVar23 * dVar27 - dVar29);
      dVar28 = (double)(float)(dVar28 + (double)(float)(dVar18 - dVar17));
      iVar16 = (int)(dVar19 * dVar21);
      dVar18 = dVar19;
    }
    if ((double)*pfVar14 <= dVar28) {
      Hud_DrawTexQuad_v2(lVar8,(int)((double)*pfVar13 * dVar30 + dVar31) >> 4,
                         (int)(dVar29 + -(double)(float)((double)pfVar13[1] * dVar22)) >> 4,
                         (int)((double)(longlong)iVar16 * dVar20),
                         (int)((double)(longlong)iVar16 * dVar20),0x80);
      dVar18 = (double)DAT_00724328;
      dVar25 = (double)DAT_00724320;
      dVar17 = (double)DAT_00724324;
      dVar19 = dVar18;
    }
    iVar6 = iVar6 + 1;
    pfVar14 = pfVar14 + 4;
    pfVar13 = pfVar13 + 4;
  } while (iVar6 < 100);
  return param_1[0x16];
}


// 0x00cb228 (0x280 bytes)
void Moby185Hud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 in_LR;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  auVar18 = ZEXT416(0xffffffff);
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  iVar2 = 0;
  auVar18 = loadVectorLeftIndexed(in_LR,0xcb200);
  auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar19
                      );
  auVar19 = loadVectorLeftIndexed(4,0xcb200);
  auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = ZEXT416((uint)(auVar18.piece<0,4>() + auVar19.piece<0,4>())) & (GPiece<16>)0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  dVar10 = 2.0;
  dVar11 = 232.0;
  dVar12 = 116.0;
  dVar13 = 17.0;
  pfVar3 = (float *)&DAT_00a1c1a0;
  dVar14 = -0.4000000059604645;
  dVar15 = 0.4000000059604645;
  dVar16 = -0.6000000238418579;
  pfVar5 = (float *)&DAT_00a1c1a8;
  dVar17 = 0.6000000238418579;
  pfVar4 = (float *)&DAT_00a1c1a4;
  pfVar6 = (float *)&DAT_00a1c1ac;
  do {
    if (iVar2 < 10) {
      dVar7 = (double)DAT_00724320;
    }
    else if (iVar2 < 0x14) {
      dVar7 = (double)DAT_00724324;
    }
    else {
      dVar7 = (double)DAT_00724328;
    }
    dVar8 = (double)(-(float)(dVar7 * dVar10 - dVar11) / (float)(longlong)DAT_0072432c);
    dVar9 = (double)(float)((double)(longlong)(iVar2 - (iVar2 / DAT_0072432c) * DAT_0072432c) *
                            dVar8 + (double)(float)(dVar7 - dVar12));
    dVar8 = (double)(float)(dVar9 + dVar8);
    dVar7 = (double)MB_randRangeFloat((float)(dVar7 - dVar13),(float)(dVar13 - dVar7));
    *pfVar3 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar9,(float)dVar8);
    *pfVar4 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)dVar7;
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar14,(float)dVar15);
    *pfVar5 = (float)((double)*pfVar5 + dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 4;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
    *pfVar6 = (float)((double)*pfVar6 + dVar7);
    pfVar6 = pfVar6 + 4;
  } while (iVar2 < 100);
  return;
}


// 0x00cb4b0 (0x144 bytes)
void Moby185Hud_Update(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  
  HudEntry_UpdateCounterSlide();
  fVar9 = DAT_00724328;
  fVar8 = DAT_00724324;
  fVar7 = DAT_00724320;
  iVar10 = g_MainLoopFrames +
           (((int)g_MainLoopFrames >> 1) + (uint)((int)g_MainLoopFrames < 0 && (g_MainLoopFrames & 1) != 0)) *
           -2;
  pfVar11 = (float *)(&DAT_00a1c1a0 + iVar10 * 4);
  for (; iVar10 < 100; iVar10 = iVar10 + 2) {
    fVar3 = fVar7;
    if ((9 < iVar10) && (fVar3 = fVar9, iVar10 < 0x1e)) {
      fVar3 = fVar8;
    }
    fVar1 = pfVar11[2];
    fVar4 = fVar3 - 17.0;
    fVar2 = pfVar11[3];
    fVar3 = fVar3 - 116.0;
    fVar5 = *pfVar11 + fVar1;
    fVar6 = pfVar11[1] + fVar2;
    *pfVar11 = fVar5;
    pfVar11[1] = fVar6;
    if (fVar5 < fVar4) {
      fVar1 = -fVar1;
      *pfVar11 = fVar4;
      pfVar11[2] = fVar1;
      fVar5 = fVar4;
    }
    if (-fVar4 < fVar5) {
      *pfVar11 = -fVar4;
      pfVar11[2] = -fVar1;
    }
    if (fVar6 < fVar3) {
      fVar2 = -fVar2;
      pfVar11[1] = fVar3;
      pfVar11[3] = fVar2;
      fVar6 = fVar3;
    }
    if (-fVar3 < fVar6) {
      pfVar11[1] = -fVar3;
      pfVar11[3] = -fVar2;
    }
    pfVar11 = pfVar11 + 8;
  }
  return;
}


// 0x00cb620 (0x4cc bytes)
// strings: 0072433c: '?fff' (raw)

uint Draw_Moby185Meter(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 uVar9;
  IconTableEntries *pIVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  int local_90;
  uint local_8c [5];
  
  uVar5 = DAT_00724330;
  iVar13 = 0;
  local_90 = 0;
  local_8c[0] = param_1[0x15];
  uVar2 = param_1[0x18];
  bVar1 = *(char *)(g_viewMtxPtr + 0x11) == '\x05';
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    local_90 = -0x50;
    if (bVar1) {
      local_90 = -0x3c;
    }
  }
  else if (bVar1) {
    local_90 = 0x14;
  }
  local_90 = param_1[0x14] + local_90;
  param_1[0x16] = DAT_00724330;
  uVar6 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar2 & 1) == 0) && ((uVar2 & 2) == 0)) {
    local_8c[0] = local_8c[0] - ((int)uVar6 >> 1);
  }
  if ((uVar2 & 4) == 0) {
    local_90 = local_90 -
               (uVar5 + ((uint)(ZERO_MASK((uVar2 & 8))) & ((int)uVar5 >> 1) - uVar5
                        ));
  }
  HudEntry_GetSlideOffset(param_1,&local_90,local_8c,param_1[0x1b],0);
  uVar7 = 0;
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar7 = uVar7 + 1;
  }
  iVar8 = (int)((uVar7 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar8) != 0) {
      uVar9 = *(undefined2 *)((int)&IconTableEntry->variantsCnt + iVar8);
    }
  }
  Hud_DrawTexQuad_v3(uVar9,local_90 + *(short *)(param_1 + 0x12),
                     local_8c[0] + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,
                     0x80);
  dVar20 = 16.0;
  fVar3 = (float)(longlong)(int)DAT_00724330 * DAT_00724338 * 0.5;
  fVar4 = (float)(longlong)(int)DAT_00724334 * DAT_0072433c * 0.5;
  dVar23 = (double)(fVar3 * 0.05882353 * 16.0);
  dVar17 = (double)(fVar4 * 0.00862069 * 16.0);
  uVar7 = 0;
  dVar24 = (double)(((1.0 - DAT_00724338) * 0.5 * (float)(longlong)(int)DAT_00724330 +
                    fVar3 + (float)(longlong)(local_90 + *(short *)(param_1 + 0x12))) * 16.0);
  dVar22 = (double)(((1.0 - DAT_0072433c) * 0.5 * (float)(longlong)(int)DAT_00724334 +
                    fVar4 + (float)(longlong)
                                   (int)(local_8c[0] + (int)*(short *)((int)param_1 + 0x4a))) * 16.0
                   );
  dVar21 = -(double)((float)(longlong)(int)(10000 - param_1[0x1d]) * 0.0001 * 2.0 * 116.0 - 116.0);
  pIVar10 = IconTableEntry;
  while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
    pIVar10 = pIVar10 + 1;
    uVar7 = uVar7 + 1;
  }
  iVar8 = (int)((uVar7 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
      lVar14 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
    }
  }
  iVar8 = 0;
  dVar18 = (double)DAT_00724320;
  pfVar12 = (float *)&DAT_00a1c1a4;
  dVar16 = 32.0;
  pfVar11 = (float *)&DAT_00a1c1a0;
  dVar15 = 0.0625;
  dVar19 = dVar18;
  do {
    if (iVar13 == 0) {
      dVar24 = -(double)(float)(dVar19 * dVar20 - dVar24);
      dVar22 = -(double)(float)(dVar19 * dVar20 - dVar22);
      dVar21 = (double)(float)(dVar18 + dVar21);
      iVar8 = (int)(dVar18 * dVar16);
    }
    if ((double)*pfVar12 <= dVar21) {
      Hud_DrawTexQuad_v2(lVar14,(int)((double)*pfVar11 * dVar23 + dVar24) >> 4,
                         (int)(dVar22 + -(double)(float)((double)pfVar11[1] * dVar17)) >> 4,
                         (int)((double)(longlong)iVar8 * dVar15),
                         (int)((double)(longlong)iVar8 * dVar15),0x80);
      dVar18 = (double)DAT_00724320;
    }
    iVar13 = iVar13 + 1;
    pfVar12 = pfVar12 + 4;
    pfVar11 = pfVar11 + 4;
  } while (iVar13 < 100);
  return param_1[0x16];
}


// 0x00cbaf8 (0x80 bytes)
void PromptHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xcbaec);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xcbaec);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00cbb78 (0x20 bytes)
void PromptHud_Update(void)

{
  HudEntry_UpdateCounter();
  return;
}


// 0x00cbb98 (0x2c8 bytes)
void Hud_DrawTexQuad
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               int param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = param_6 << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  RVar2 = param_4 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00cbe60 (0x290 bytes)
void Hud_DrawTexHeaderQuad
               (int param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               ulonglong param_6)

{
  uint uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  uVar1 = *(uint *)(param_1 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = (RsxCmd)((param_6 & 0xffffffff) << 0x18) | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  RVar2 = param_4 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = uVar1 >> 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00cc0f0 (0x58 bytes)
void DrawSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  return;
}


// 0x00cc148 (0x200 bytes)
void Hud_DrawTextBox
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  IconTableEntries *pIVar4;
  longlong lVar5;
  
  uVar2 = 0;
  lVar5 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7580 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar2 = uVar2 + 1;
  }
  iVar1 = (int)((uVar2 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar1) == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar1) != 0) {
      uVar2 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar1);
    }
  }
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7580 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar1 = (int)((uVar3 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar1) != -1) &&
     (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar1))) {
    lVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar1) + 1;
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar5 << 2)) * 0x24,param_1,
             param_2,0x20,param_4,param_5);
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar2 << 2)) * 0x24,
             (int)param_1 + 0x20,param_2,param_3 + -0x40,param_4,param_5);
  Hud_DrawTexQuad(lVar5,param_3 + (int)param_1 + -0x20,param_2,0x20,param_4,param_5);
  return;
}


// 0x00cc348 (0xd8 bytes)
void Hud_DrawTextBoxCentered
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)((int)param_3 >> 0x18);
  iVar1 = FontPrintLargeCenter
                    ((int)param_1 + 1,(int)param_2 + 1,param_3 & 0xff000000,param_4,
                     0xffffffffffffffff);
  Hud_DrawTextBox(iVar1 + -0x20,(int)param_2 + -8,((int)param_1 - (iVar1 + -0x20)) * 2,0x20,
                  lVar2 + (0x50 - lVar2 >> 0x3f & 0x50U - lVar2));
  FontPrintLargeCenter(param_1,param_2,param_3,param_4,0xffffffffffffffff);
  return;
}


// 0x00cc450 (0x950 bytes)
// strings: 006520dc: '%s: %d:%02d:%02d' | 006520f4: '%s: %d'

undefined4 Draw_PromptMsg(int param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar8;
  ulonglong uVar13;
  IconTableEntries *pIVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  char acStack_a0 [64];
  
                    /* Used for drawing UI such as "Open gadgetron Vendor" or "Enter ship" etc. */
  iVar20 = DAT_00724340 + ((uint)(ZERO_MASK(Cutscene)) & 8) + 10;
  dVar21 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  fVar1 = (float)(dVar21 / (double)(animationSpeed * 8.0));
  if (fVar1 - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 - fVar1 < 0.0) {
    fVar1 = 1.0;
  }
  uVar7 = FastDoubleToInt((double)(fVar1 * 128.0));
  uVar3 = (uint)((uVar7 & 0xffffffff) << 0x18);
  uVar9 = uVar3 | 0x40f040;
  lVar18 = 0;
  for (iVar19 = 0;
      (cVar2 = (&DAT_00a1c020)[iVar19], cVar2 != '\x01' && (iVar19 < 0x80 && cVar2 != '\0'));
      iVar19 = iVar19 + 1) {
  }
  if (cVar2 == '\x01') {
    (&DAT_00a1c020)[iVar19] = 0;
    iVar10 = FontLen(&DAT_00a1c020,-1);
    lVar17 = (longlong)(0xe0 - (iVar10 >> 1));
    iVar11 = FontLen((char *)(iVar19 + 0xa1c021),-1);
    lVar15 = (longlong)(0xe0 - (iVar11 >> 1));
    lVar16 = (longlong)iVar11 + (lVar17 - lVar15 >> 0x3f & (longlong)iVar10 - (longlong)iVar11);
    lVar15 = lVar15 + (lVar17 - lVar15 >> 0x3f & lVar17 - lVar15);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar10 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar13 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    iVar10 = (int)lVar15;
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar13 << 2)) * 0x24,
               iVar10 + 0x20,iVar20,lVar16,0x36,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
        lVar17 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar17 << 2)) * 0x24,lVar15,
               iVar20,0x20,0x36,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar11) != -1) &&
       (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11))) {
      lVar18 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
    Hud_DrawTexQuad(lVar18,iVar10 + (int)lVar16 + 0x20,iVar20,0x20,0x36,uVar7);
    FontPrintMediumCenter(0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    FontPrintMediumCenter
              (0x100,iVar20 + 0x1b,uVar9,(char *)(iVar19 + 0xa1c021),0xffffffffffffffff);
  }
  else {
    iVar19 = FontLen(&DAT_00a1c020,-1);
    iVar10 = -(iVar19 >> 1) + 0xe0;
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
        lVar15 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar15 << 2)) * 0x24,iVar10,
               iVar20,0x20,0x20,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
        uVar13 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar13 << 2)) * 0x24,
               -(iVar19 >> 1) + 0x100,iVar20,iVar19,0x20,uVar7);
    uVar13 = 0;
    for (pIVar14 = IconTableEntry; pIVar14->iconId != 0x7580 && pIVar14->iconId != 0xffff;
        pIVar14 = pIVar14 + 1) {
      uVar13 = uVar13 + 1;
    }
    iVar11 = (int)((uVar13 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar11) != -1) &&
       (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11))) {
      lVar18 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
    Hud_DrawTexQuad(lVar18,iVar10 + iVar19 + 0x20,iVar20,0x20,0x20,uVar7);
    if ((Level == Hoven) && (g_JapaneseMode != false)) {
      FontPrintCenterScaledMedium
                (0x3feb333340000000,0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    }
    else {
      FontPrintMediumCenter(0x100,iVar20 + 8,uVar9,&DAT_00a1c020,0xffffffffffffffff);
    }
  }
  if ((Level == Rilgar) || (Level == Kalebo)) {
    fVar1 = 115.7;
    fVar4 = 287.0;
    fVar5 = 119.5;
    if (Level == Rilgar) {
      fVar1 = 294.5;
      fVar4 = 225.4;
      fVar5 = 100.0;
    }
    if (SQRT((g_heroPosition.z - fVar5) * (g_heroPosition.z - fVar5) +
             (g_heroPosition.x - fVar1) * (g_heroPosition.x - fVar1) +
             (g_heroPosition.y - fVar4) * (g_heroPosition.y - fVar4)) < 5.0) {
      DAT_00a15c88 = iVar20 + 100;
      uVar6 = (uint)LZCOUNT(Level - Kalebo) >> 3 & 4;
      iVar19 = *(int *)((int)&g_RaceBestTime + uVar6);
      iVar10 = *(int *)((int)&g_RaceBestScore + uVar6);
      if (iVar19 != 0) {
        uVar6 = (uint)(ZERO_MASK(g_IsPal)) & 600;
        iVar12 = uVar6 + 3000;
        iVar11 = iVar19 / iVar12;
        iVar19 = iVar19 - iVar11 * iVar12;
        uVar6 = (uVar6 + 0xbb9) * 0x111 >> 0xe;
        iVar12 = iVar19 / (int)uVar6;
        uVar8 = help_msg_string_by_index(STR_BEST_TIME);
        snprintf(acStack_a0,"%s: %d:%02d:%02d",uVar8,iVar11,iVar12,
                       (int)((iVar19 - iVar12 * uVar6) * 100) / (int)uVar6);
        lVar18 = (longlong)((int)uVar9 >> 0x18);
        lVar18 = lVar18 + (0x50 - lVar18 >> 0x3f & 0x50U - lVar18);
        iVar19 = FontPrintLargeCenter(0x101,iVar20 + 0x29,uVar3,acStack_a0,0xffffffffffffffff)
        ;
        Hud_DrawTextBox((longlong)(iVar19 + -0x20),iVar20 + 0x20,
                        (int)(0x100 - (longlong)(iVar19 + -0x20)) * 2,0x20,lVar18);
        FontPrintLargeCenter(0x100,iVar20 + 0x28,uVar9,acStack_a0,0xffffffffffffffff);
        if (iVar10 != 0) {
          uVar8 = help_msg_string_by_index(STR_BEST_SCORE);
          snprintf(acStack_a0,"%s: %d",uVar8,iVar10);
          iVar19 = FontPrintLargeCenter
                             (0x101,iVar20 + 0x49,uVar3,acStack_a0,0xffffffffffffffff);
          Hud_DrawTextBox((longlong)(iVar19 + -0x20),iVar20 + 0x40,
                          (int)(0x100 - (longlong)(iVar19 + -0x20)) * 2,0x20,lVar18);
          FontPrintLargeCenter(0x100,iVar20 + 0x48,uVar9,acStack_a0,0xffffffffffffffff);
        }
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00ccda0 (0x64 bytes)
// strings: 006520fc: '(Message too long_)'

char * GetHelpLen(char *param_1)

{
  size_t length;
  char *pcVar1;
  
  length = strlen(param_1);
  if (length < 0x50) {
    strcpy(&DAT_00a1c020,"(Message too long_)");
  }
  pcVar1 = strcpy(&DAT_00a1c020,param_1);
  return pcVar1;
}


// 0x00cce10 (0x74 bytes)
void Moby849Hud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xcce04);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xcce04);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00cce90 (0xe8 bytes)
void Moby849Hud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  HudEntry_UpdateCounter();
  *(uint *)((int)param_1 + 8) =
       ((uint)((longlong)-(ulonglong)g_goldWeaponsArray.suckCannon >> 0x3f) & 5) + 5;
  auVar2 = loadVectorLeftIndexed(in_LR,0xcce84);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  if ((g_CurrentWeapon == 9) && (g_heroType == '\0')) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(4,0xcce84);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3.piece<0,4>() = auVar4.piece<0,4>() + auVar2.piece<0,4>();
    auVar3.piece<8,8>() = auVar2.piece<8,8>();
    auVar3.piece<4,4>() = auVar4.piece<4,4>() + auVar2.piece<4,4>();
    auVar2.piece<0,8>() = 0;
    auVar2.piece<8,8>() = auVar3.piece<0,8>();
    auVar2 = auVar2 << 0x40;
  }
  else {
    auVar3 = loadVectorLeftIndexed(0x7c,param_1);
    auVar4 = vectorCompareGreaterThanSignedWord(auVar3,auVar2);
    auVar2 = vectorConditionalSelect(auVar3,auVar2,auVar4);
  }
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)((int)param_1 + 0x7cU & 0xfffffffc) = uVar1;
  return;
}


// 0x00ccf78 (0x30 bytes)
void DrawFlatOverlay_Fixed(int param_1,int param_2,int param_3,int param_4)

{
  DrawFlatOverlay(param_1 >> 4,param_2 >> 4,param_3 >> 4,param_4 >> 4);
  return;
}


// 0x00ccfa8 (0x3e8 bytes)
uint Draw_Moby849Meter(uint *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar6;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  int local_40;
  uint local_3c;
  
  uVar3 = DAT_00724330;
  uVar12 = 0;
  iVar9 = 0;
  local_3c = param_1[0x15];
  uVar11 = param_1[0x18];
  bVar2 = *(byte *)(g_viewMtxPtr + 0x11);
  if (*(int *)(g_viewMtxPtr + 0xc) == 0) {
    iVar9 = -0x50;
    if (bVar2 == 5) {
      iVar9 = -0x3c;
    }
  }
  else if (bVar2 == 5) {
    iVar9 = 0x14;
  }
  local_40 = param_1[0x14] +
             iVar9 + ((uint)(ZERO_MASK((0x81 - (uint)bVar2))) & 0x14U - iVar9);
  param_1[0x16] = DAT_00724330;
  uVar4 = DAT_00724334;
  param_1[0x17] = DAT_00724334;
  if (((uVar11 & 1) == 0) && ((uVar11 & 2) == 0)) {
    local_3c = local_3c - ((int)uVar4 >> 1);
  }
  if ((uVar11 & 4) == 0) {
    local_40 = local_40 -
               (uVar3 + ((uint)(ZERO_MASK((uVar11 & 8))) &
                        ((int)uVar3 >> 1) - uVar3));
  }
  HudEntry_GetSlideOffset(param_1,&local_40,&local_3c,param_1[0x1b],0);
  uVar3 = DAT_00724330 * 0xd0;
  uVar4 = DAT_00724330 * 0x260;
  uVar10 = DAT_00724334 * 0xea0;
  uVar11 = DAT_00724334 * 0xa0;
  iVar7 = (local_40 + *(short *)(param_1 + 0x12)) * 0x10 +
          ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar3 & 0x3f) != 0);
  iVar8 = (local_3c + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  iVar9 = iVar7 + ((int)uVar4 >> 6) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3f) != 0);
  DrawFlatOverlay(iVar7,iVar8,iVar9,
                  iVar8 + ((int)uVar10 >> 8) + (uint)((int)uVar10 < 0 && (uVar10 & 0xff) != 0),
                  0x80000000,1);
  uVar11 = DAT_00724334 * 0xf40;
  iVar9 = iVar9 >> 4;
  iVar8 = (local_3c + (int)*(short *)((int)param_1 + 0x4a)) * 0x10 +
          ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
  DrawFlatOverlay(iVar7 >> 4,iVar8 >> 4,iVar9,
                  iVar8 - (int)(param_1[0x1d] * DAT_00724334 * 0xea0) / (int)(param_1[2] << 8) >> 4,
                  0x80829e00,1);
  iVar8 = 1;
  if (1 < (int)param_1[0x1d]) {
    do {
      uVar11 = DAT_00724334 * 0xf40;
      iVar1 = (int)(DAT_00724334 * iVar8 * 0xea0) / (int)(param_1[2] << 8);
      iVar5 = ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0);
      DrawFlatOverlay(iVar7 >> 4,
                      (((int)((ulonglong)local_3c + (longlong)*(short *)((int)param_1 + 0x4a)) *
                        0x10 + iVar5) - iVar1) + -0x10 >> 4,iVar9,
                      (int)(((local_3c * 0x10 +
                              (int)(((longlong)*(short *)((int)param_1 + 0x4a) & 0xffffffffU) << 4)
                             + iVar5) - iVar1) + 0x10) >> 4,0x80000000,1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_1[0x1d]);
  }
  uVar6 = 0;
  iVar9 = 0;
  while (uVar11 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar9),
        uVar11 != *param_1 && uVar11 != 0xffff) {
    iVar9 = iVar9 + 8;
    uVar6 = uVar6 + 1;
  }
  iVar9 = (int)((uVar6 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar9) != -1) &&
     (*(short *)((int)&IconTableEntry->unknown + iVar9) != 0)) {
    uVar12 = *(undefined2 *)((int)&IconTableEntry->variantsCnt + iVar9);
  }
  Hud_DrawTexQuad_v3(uVar12,local_40 + *(short *)(param_1 + 0x12),
                     local_3c + (int)*(short *)((int)param_1 + 0x4a),DAT_00724330,DAT_00724334,0x80)
  ;
  return param_1[0x16];
}


// 0x00cd398 (0xec bytes)
void QuickSelectHud_Init(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_r0;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  uVar2 = DAT_00723930;
  auVar8 = ZEXT416(0xffffffff);
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  DAT_00a1c080 = 8;
  iVar3 = (int)param_1;
  *(undefined2 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x58) = uVar2;
  uVar2 = DAT_00723934;
  *(undefined2 *)(iVar3 + 0x4a) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = uVar2;
  *(undefined4 *)(iVar3 + 0x74) = 0xfffffffe;
  auVar8 = loadVectorLeftIndexed(in_r0,0xcd390);
  auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint
                     (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
  DAT_00a1c190 = &PTR_DAT_00723b08;
  lVar7 = 8;
  puVar6 = UINT_ARRAY_0096c1dc;
  puVar5 = &DAT_00723980;
  puVar4 = &DAT_00723998;
  auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x78,param_1);
  *(undefined4 *)(iVar3 + 0x78U & 0xfffffffc) = uVar2;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  DAT_00a1c084 = 0;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 7;
    *puVar5 = (uint)*(ushort *)(&DAT_00721038 + uVar1 * 0x4c);
    puVar5 = puVar5 + 7;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}


// 0x00cd4b8 (0xa00 bytes)
// inlined: FastAtan2 @0xcd674
// strings: 00a0feec: 'None'

void UpdateQuickSelect(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  short sVar11;
  undefined2 uVar12;
  int iVar13;
  undefined *puVar14;
  byte bVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar23;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f25;
  undefined8 uVar28;
  ulonglong in_f26;
  double dVar29;
  ulonglong in_f27;
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar20 = uVar22 - 0x120;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar22;
  puVar8[0x26] = in_LR;
  puVar8[0x1d] = in_f25;
  puVar8[0x1e] = in_f26;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  auVar34 = ZEXT416(0xffffffff);
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  puVar8[0x1c] = unaff_r31;
  auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  puVar8[0x18] = unaff_r27;
  auVar34 = loadVectorLeftIndexed(in_LR,0xcd484);
  auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar35
                      );
  auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
  auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  iVar9 = (int)param_1;
  uVar7 = storeVectorElementWordIndexed
                    (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar9 + 0x7cU & 0xfffffffc) = uVar7;
  puVar8[0x1b] = unaff_r30;
  puVar8[0x1a] = unaff_r29;
  puVar8[0x19] = unaff_r28;
  puVar8[0x17] = unaff_r26;
  puVar8[0x16] = unaff_r25;
  *(undefined4 *)(iVar9 + 0x6c) = 0x18;
  iVar13 = FastDecTimerS16(&DAT_0096bfb2);
  if (iVar13 != 0) {
    DAT_0096560c = 2;
    DAT_00965b70 = 2;
    DAT_009660d4 = 2;
    DAT_00966638 = 2;
  }
  dVar29 = 0.0;
  fVar10 = SQRT(g_Pad.unk048 * g_Pad.unk048 + g_Pad.unk04c * g_Pad.unk04c);
  fVar5 = g_Pad.unk048 / fVar10;
  fVar3 = g_Pad.unk04c;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = g_Pad.unk04c / fVar10;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar3 = g_Pad.unk04c / fVar10;
  }
  fVar2 = g_Pad.unk048;
  if (0.0 - fVar10 < 0.0) {
    fVar2 = fVar5;
  }
  *(float *)((int)puVar8 + 0x74) = fVar3;
  if (fVar10 - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)(puVar8 + 0xf) = ABS(fVar2) - ABS(fVar3);
  dVar33 = 0.7853981852531433;
  uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar3 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar27 = dVar29;
  if (0.0 < fVar4) {
    lVar23 = uVar22 - 0x110;
    lVar16 = uVar22 - 0xa4;
    lVar19 = uVar22 - 0x94;
    lVar25 = 2;
    fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar8 + 0x11) = fVar3;
    *(float *)(puVar8 + 0x10) = fVar3;
    *(float *)((int)puVar8 + 0x84) = fVar3;
    *(float *)((int)puVar8 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar3;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar23 + 0x7c) = *(float *)((int)lVar23 + 0x6c) * fVar3 * fVar3;
      iVar13 = (int)lVar16;
      lVar23 = lVar23 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar19 = uVar22 - 0xa4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar23 = lVar20;
    lVar16 = lVar19;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar23 + 0x7c) = *(float *)((int)lVar23 + 0x7c) * fVar3;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar23 = 2;
    do {
      iVar13 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      iVar6 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar13 + 0x7c)) + *(float *)(iVar6 + 4)
                        + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
  }
  puVar14 = *(undefined **)(iVar9 + 0x78);
  bVar1 = puVar14 != (undefined *)0x0;
  if ((int)puVar14 >> 0x18 == 0) {
    if (((g_Pad.pressedButton & 0xf000) == 0) && (0.5 <= fVar10)) {
      puVar14 = puVar14 + -1;
      *(undefined **)(iVar9 + 0x78) = puVar14;
      if (bVar1) goto LAB_000cd7cc;
    }
    puVar14 = &DAT_010000ff;
    *(undefined4 *)(iVar9 + 0x74) = 0xffffffff;
    *(undefined **)(iVar9 + 0x78) = &DAT_010000ff;
  }
LAB_000cd7cc:
  iVar13 = DAT_00a1c080;
  lVar23 = 0;
  uVar21 = *(uint *)(iVar9 + 0x74);
  uVar22 = (ulonglong)uVar21;
  lVar20 = 0;
  if (((int)puVar14 >> 0x18 != 1) || ((g_Pad.unk0c0 & 0x10) == 0)) goto LAB_000cdbc8;
  if (fVar10 <= 0.9) {
    if ((g_Pad.unk0d8 == 0) && ((g_Pad.pressedButton & 0xf000) != 0)) {
      if ((g_Pad.pressedButton & 0x1000) != 0) {
        if (uVar21 == 0xffffffff) {
          uVar22 = (ulonglong)DAT_00723ae0;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + uVar21 * 0x1c + 0x10);
        }
      }
      if ((g_Pad.pressedButton & 0x4000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723ae4;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x14);
        }
      }
      if ((g_Pad.pressedButton & 0x8000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723ad8;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 8);
        }
      }
      iVar13 = (int)uVar22;
      if (((g_Pad.pressedButton & 0x2000) != 0) && (iVar13 = DAT_00723adc, (int)uVar22 != -1)) {
        iVar13 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                          ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0xc);
      }
      *(int *)(iVar9 + 0x74) = iVar13;
    }
  }
  else {
    puVar8[0x14] = (longlong)DAT_00a1c080;
    dVar30 = 3.1415927410125732;
    uVar28 = 0x3ff921fb60000000;
    dVar32 = (double)((float)(dVar27 + 3.1415927410125732) + 3.1415927 + 1.5707964 +
                     (float)(3.1415927410125732 / (double)(longlong)puVar8[0x14]));
    dVar31 = (double)(float)(dVar32 * (double)(float)((double)(longlong)puVar8[0x14] *
                                                     0.15915493667125702));
    dVar26 = (double)FastIntToDouble(iVar13);
    puVar8[0x14] = (longlong)(int)uVar21;
    dVar26 = (double)(float)((double)(float)((double)((float)(longlong)puVar8[0x14] * 6.2831855) /
                                            dVar26) - dVar30);
    if (uVar21 != 0xffffffff) {
      dVar27 = (double)FastDiffRots(dVar27,uVar28);
      dVar27 = (double)FastSubRots((float)dVar26,(float)dVar27);
      if (dVar27 <= 0.5890486240386963) goto LAB_000cdb48;
    }
    iVar13 = DAT_00a1c080;
    puVar8[0x14] = (longlong)(int)dVar31;
    uVar24 = *(int *)((int)puVar8 + 0xa4) - (*(int *)((int)puVar8 + 0xa4) / iVar13) * iVar13;
    if ((uVar24 & 1) == 0) {
      iVar13 = FastDoubleToInt(dVar31);
      puVar8[0x14] = (longlong)iVar13;
      if ((float)(dVar31 - (double)(longlong)puVar8[0x14]) <= 1.0 - DAT_00724348) {
        if ((float)(dVar31 - (double)(longlong)puVar8[0x14]) < DAT_00724348) {
          uVar24 = uVar24 - 1;
        }
      }
      else {
        uVar24 = uVar24 + 1;
      }
      uVar24 = (DAT_00a1c080 + uVar24) -
               ((int)(DAT_00a1c080 + uVar24) / DAT_00a1c080) * DAT_00a1c080;
    }
    puVar8[0x14] = (longlong)(int)uVar24;
    *(uint *)(iVar9 + 0x74) = uVar24;
    dVar33 = (double)FastAddRots
                               ((float)(dVar32 - (double)(float)((double)(longlong)puVar8[0x14] *
                                                                 dVar33 + 0.39269909262657166)));
    lVar23 = -1;
    DAT_00a1c7e0 = (float)dVar33;
    if (dVar29 < dVar33) {
      lVar23 = 1;
    }
  }
LAB_000cdb48:
  uVar22 = (ulonglong)*(uint *)(iVar9 + 0x74);
  iVar13 = *(int *)(DAT_00a1c190 + DAT_00a1c084 * 4);
  if (*(int *)(iVar13 + *(uint *)(iVar9 + 0x74) * 0x1c) == 0 && (int)lVar23 != 0) {
    uVar18 = (uVar22 + lVar23) -
             (longlong)((int)(uVar22 + lVar23) / DAT_00a1c080) * (longlong)DAT_00a1c080;
    iVar6 = (int)uVar18;
    if (*(int *)(iVar13 + iVar6 * 0x1c) != 0) {
      *(int *)(iVar9 + 0x74) = iVar6;
      uVar22 = uVar18;
    }
  }
LAB_000cdbc8:
  if ((uint)uVar22 == uVar21) {
    if ((int)(uint)*(byte *)(iVar9 + 0x71) < DAT_00724344) {
      *(byte *)(iVar9 + 0x71) = *(byte *)(iVar9 + 0x71) + 1;
    }
  }
  else {
    *(undefined1 *)(iVar9 + 0x71) = 0;
  }
  if ((g_Pad.unk0c0 & 0x10) == 0) {
    if (-1 < (int)(uint)uVar22) {
      iVar13 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                        ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x18);
      if (iVar13 != 0) {
        if ((g_CurrentWeapon != iVar13) && (CHAR_ARRAY_00a0feec.piece<160,2>() != -1)) {
          CHAR_ARRAY_00a0feec.piece<160,2>() = CHAR_ARRAY_00a0feec.piece<160,2>() + 1;
        }
        puVar8[0x14] = (longlong)g_GameFrameCount;
        uVar12 = CHAR_ARRAY_00a0feec.piece<162,2>();
        puVar8[0x14] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar8[0x14] + 0.5));
        iVar6 = *(int *)((int)puVar8 + 0xa4);
        if ((int)(uint)(ushort)uVar12 < iVar6 / 600) {
          sVar11 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<162,2>() =
               ((short)(iVar6 / 600) + sVar11) -
               ((short)((short)(iVar6 / 0x2580000) + sVar11) >> 0xf);
        }
        CHAR_ARRAY_00a0feec.piece<164,4>() = CHAR_ARRAY_00a0feec.piece<164,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
        iVar6 = iVar13;
        if (iVar13 == 0x18) {
          DAT_0096bcd5 = 1;
          iVar6 = DAT_0096bd98;
        }
        DAT_0096bd98 = iVar6;
        if ((&DAT_00737d38)[iVar13 * 0xc] != 0) {
          uVar21 = (&currentAmmoArray.field0_0x0)[iVar13];
          (&currentAmmoArray.field0_0x0)[iVar13] =
               uVar21 + ((uint)((longlong)
                                ((ulonglong)(ushort)(&DAT_00737d3e)[iVar13 * 0xc] -
                                (longlong)(int)uVar21) >> 0x3f) &
                        (ushort)(&DAT_00737d3e)[iVar13 * 0xc] - uVar21);
        }
      }
    }
    bVar15 = *(byte *)(iVar9 + 0x70);
    if (bVar15 != 0) {
      bVar15 = bVar15 - 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  else {
    bVar15 = *(byte *)(iVar9 + 0x70);
    if ((int)(uint)bVar15 < DAT_00724344) {
      bVar15 = bVar15 + 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  if (bVar15 == 0) {
    DAT_00a1c090 = *(undefined4 *)(iVar9 + 0x74);
    DAT_00a1c08c = *(undefined4 *)(iVar9 + 0x78);
    do {
      uVar21 = (uint)lVar20;
      if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar20 << 7) + (int)(lVar20 << 4)) ==
          *(int *)(iVar9 + 100)) break;
      uVar21 = uVar21 + 1;
      lVar20 = (longlong)(int)uVar21;
    } while ((int)uVar21 < 0xd);
    if ((int)uVar21 < 0xd) {
      RegisterHUDCallback(uVar21,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
    }
    *(undefined4 *)(iVar9 + 0x6c) = 0xfffffffa;
    DAT_00a1c088 = g_MainLoopFrames;
  }
  return;
}


// 0x00cdeb8 (0x270 bytes)
void HudEntry_DrawIcon
               (int param_1,longlong param_2,int param_3,int param_4,uint param_5,undefined8 param_6
               )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (-1 < (int)param_2) {
    uVar2 = param_5 & 2;
    param_3 = param_3 + *(short *)(param_1 + 0x48);
    iVar6 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_2 << 2)) * 0x24;
    param_4 = param_4 + *(short *)(param_1 + 0x4a);
    uVar1 = *(uint *)(iVar6 + 0x18);
    uVar10 = (ulonglong)(uVar1 >> 2) & 0x3fff;
    lVar12 = (longlong)(param_4 - (int)uVar10);
    uVar3 = uVar1 >> 0x12;
    lVar12 = lVar12 + (ZERO_MASK((param_5 & 1)) & param_4 - lVar12);
    lVar11 = (longlong)(int)(param_3 - uVar3);
    lVar11 = lVar11 + (ZERO_MASK((param_5 & 1)) & param_3 - lVar11);
    lVar7 = (longlong)(int)((int)lVar12 + (uVar1 >> 3 & 0x1fff));
    lVar9 = (longlong)(int)((int)lVar11 + (uVar1 >> 0x13));
    param_5 = param_5 & 4;
    lVar7 = lVar7 + (ZERO_MASK(uVar2) & lVar12 - lVar7);
    lVar9 = lVar9 + (ZERO_MASK(uVar2) & lVar11 - lVar9);
    lVar12 = (longlong)((int)lVar7 - (int)uVar10);
    uVar10 = uVar10 + (ZERO_MASK(uVar2) &
                      ((ulonglong)(uVar1 >> 1) & 0x7fff) - uVar10);
    uVar4 = uVar10 & 0x7fffffff;
    uVar8 = (ulonglong)uVar3 +
            (ZERO_MASK(uVar2) & (ulonglong)(uVar1 >> 0x11) - (ulonglong)uVar3);
    uVar5 = uVar8 & 0x7fffffff;
    lVar11 = (longlong)(int)((int)lVar9 - uVar3);
    Hud_DrawTexHeaderQuad
              (iVar6,lVar11 + (ZERO_MASK(param_5) & lVar9 - lVar11),
               lVar12 + (ZERO_MASK(param_5) & lVar7 - lVar12),
               uVar5 * 2 + (ZERO_MASK(param_5) & uVar8 + uVar5 * -2),
               uVar4 * 2 + (ZERO_MASK(param_5) & uVar10 + uVar4 * -2),param_6);
  }
  return;
}


// 0x00ce170 (0xe4c bytes)
// strings: 00652110: '%d/%d'

undefined4 Draw_QuickSelectHud(int param_1)

{
  short sVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  undefined8 uVar10;
  char *__s;
  size_t sVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  IconTableEntries *pIVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  char acStack_120 [80];
  longlong local_d0;
  
  dVar28 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  dVar29 = (double)FastIntToDouble(DAT_00724344);
  dVar43 = (double)(float)(dVar28 / dVar29);
  dVar28 = 1.0;
  dVar29 = dVar28;
  if ((dVar43 <= 1.0) && (dVar29 = dVar43, dVar43 < 0.0)) {
    dVar29 = 0.0;
  }
  dVar43 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  dVar30 = (double)FastIntToDouble(DAT_00724344);
  dVar43 = (double)(float)(dVar43 / dVar30);
  if ((dVar43 <= dVar28) && (dVar28 = dVar43, dVar43 < 0.0)) {
    dVar28 = 0.0;
  }
  dVar43 = (double)FastIntToDouble
                             (worldUpdateTime - (worldUpdateTime / DAT_0072436c) * DAT_0072436c);
  dVar30 = (double)FastIntToDouble(DAT_0072436c);
  dVar42 = 3.141592502593994;
  dVar41 = -3.141592502593994;
  dVar40 = -0.16666656732559204;
  dVar39 = 0.008333025500178337;
  dVar38 = -0.0001980741071747616;
  dVar37 = 2.601886990305502e-06;
  dVar36 = (double)(float)(dVar29 * 128.0);
  fVar3 = (float)(dVar43 / dVar30) * 6.28318 - 3.14159;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  fVar3 = fVar6 * fVar6 * fVar5;
  fVar4 = fVar6 * fVar3;
  dVar30 = (double)(fVar6 * fVar4);
  dVar43 = (double)(fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  dVar35 = (double)(float)(dVar30 * 2.601886990305502e-06 + dVar43);
  uVar7 = FastDoubleToInt(dVar36,dVar43,dVar30);
  uVar8 = FastDoubleToInt
                    ((double)(float)(dVar36 * (double)(float)(dVar35 * 0.125 + 0.875)));
  iVar11 = *(int *)(param_1 + 0x50);
  uVar18 = *(uint *)(param_1 + 0x60);
  iVar26 = *(int *)(param_1 + 0x54);
  if (((uVar18 & 1) == 0) && ((uVar18 & 2) == 0)) {
    iVar26 = iVar26 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  iVar12 = iVar11 - *(int *)(param_1 + 0x58);
  uVar9 = 0;
  iVar27 = 0;
  lVar19 = (longlong)iVar11 +
           (ZERO_MASK((uVar18 & 4)) &
           (longlong)
           (int)(iVar12 + ((uint)(ZERO_MASK((uVar18 & 8))) &
                          (iVar11 - (*(int *)(param_1 + 0x58) >> 1)) - iVar12)) - (longlong)iVar11);
  lVar24 = (longlong)
           (int)(((int)DAT_00723930 >> 1) + (uint)((int)DAT_00723930 < 0 && (DAT_00723930 & 1) != 0)
                );
  lVar22 = (longlong)
           (int)(((int)DAT_00723934 >> 1) + (uint)((int)DAT_00723934 < 0 && (DAT_00723934 & 1) != 0)
                );
  for (iVar11 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar11),
      sVar1 != -0x16cc && sVar1 != -1; iVar11 = iVar11 + 8) {
    uVar9 = uVar9 + 1;
  }
  iVar11 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,lVar19,
             iVar26,lVar24,lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar11 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
    }
  }
  iVar11 = (int)lVar19;
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,DAT_00723934 + iVar26,-lVar24,-lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar12 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar12) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,iVar26,-lVar24,lVar22,uVar7);
  uVar9 = 0;
  for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe934 && pIVar17->iconId != 0xffff;
      pIVar17 = pIVar17 + 1) {
    uVar9 = uVar9 + 1;
  }
  iVar12 = (int)((uVar9 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar12) != 0) {
      uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,lVar19,
             DAT_00723934 + iVar26,lVar24,-lVar22,uVar7);
  iVar12 = 0;
  if (0 < DAT_00a1c080) {
    iVar14 = 0;
    do {
      local_d0 = (longlong)DAT_00a1c080;
      dVar30 = (double)FastWrapRot
                                 (((float)(longlong)iVar12 * 2.0 * 3.1415927) / (float)local_d0 -
                                  3.1415927,1.5707964);
      dVar36 = (double)(float)(dVar30 + 1.570796251296997);
      dVar43 = (double)(float)(dVar42 - dVar30);
      if (dVar30 - (double)(float)(dVar42 - dVar30) < 0.0) {
        dVar43 = dVar30;
      }
      dVar35 = (double)(float)(dVar42 - dVar36);
      if (dVar36 - (double)(float)(dVar42 - dVar36) < 0.0) {
        dVar35 = dVar36;
      }
      dVar31 = (double)(float)(dVar41 - dVar30);
      if ((double)(float)(dVar41 - dVar30) - dVar43 < 0.0) {
        dVar31 = dVar43;
      }
      dVar30 = (double)(float)(dVar31 * dVar31);
      dVar43 = (double)(float)(dVar41 - dVar36);
      if ((double)(float)(dVar41 - dVar36) - dVar35 < 0.0) {
        dVar43 = dVar35;
      }
      dVar36 = (double)(float)(dVar43 * dVar43);
      dVar35 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar31));
      dVar33 = (double)(float)(dVar30 * dVar35);
      dVar34 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar43));
      iVar25 = *(int *)(param_1 + 0x74);
      dVar32 = (double)(float)(dVar36 * dVar34);
      iVar20 = (int)(DAT_0072434c *
                    (float)((double)(float)(dVar30 * dVar33) * dVar37 +
                           (double)(float)(dVar33 * dVar38 +
                                          (double)(float)(dVar35 * dVar39 +
                                                         (double)(float)((double)(float)(dVar30 * 
                                                  dVar31) * dVar40 + dVar31)))));
      local_d0 = (longlong)iVar20;
      iVar23 = DAT_00723938 + iVar11 +
               (int)(DAT_0072434c *
                     (float)((double)(float)(dVar36 * dVar32) * dVar37 +
                            (double)(float)(dVar32 * dVar38 +
                                           (double)(float)(dVar34 * dVar39 +
                                                          (double)(float)((double)(float)(dVar36 * 
                                                  dVar43) * dVar40 + dVar43)))) * DAT_0072437c);
      iVar20 = DAT_0072393c + iVar26 + iVar20;
      if ((iVar25 == iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar14) != 0))
      {
        uVar9 = 0;
        for (pIVar17 = IconTableEntry; pIVar17->iconId != 0xe99c && pIVar17->iconId != 0xffff;
            pIVar17 = pIVar17 + 1) {
          uVar9 = uVar9 + 1;
        }
        iVar25 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar25) == -1) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if (*(short *)((int)&IconTableEntry->unknown + iVar25) != 0) {
            uVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar25);
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar9 << 2)) * 0x24,
                   iVar23 + -0x13,iVar20 + -0x13,0x26,0x26,uVar8);
        iVar25 = *(int *)(param_1 + 0x74);
      }
      if (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar14) != 0) {
        uVar10 = uVar7;
        if (iVar12 != iVar25) {
          local_d0 = (longlong)(int)uVar7;
          uVar10 = FastDoubleToInt((double)((float)local_d0 * DAT_00724378));
        }
        iVar25 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
        uVar9 = 0;
        iVar15 = 0;
        lVar19 = (ZERO_MASK((uint)(&g_goldWeaponsArray.field0_0x0)[*(int *)(iVar25 + iVar14 + 0x18)]) & 0xfffffffffffffffcU) + 4;
        while (uVar18 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar15),
              uVar18 != *(uint *)(iVar25 + iVar14) && uVar18 != 0xffff) {
          iVar15 = iVar15 + 8;
          uVar9 = uVar9 + 1;
        }
        iVar25 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar25) == -1) {
          lVar22 = 0;
        }
        else {
          lVar22 = 0;
          if ((int)lVar19 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar25)) {
            lVar22 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar25) + lVar19;
          }
        }
        HudEntry_DrawIcon(param_1,lVar22,iVar23,iVar20,1,uVar10);
      }
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0x1c;
    } while (iVar12 < DAT_00a1c080);
  }
  iVar12 = *(int *)(param_1 + 0x74);
  if ((-1 < iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c) != 0)) {
    dVar28 = (double)(float)(dVar29 * dVar28);
    uVar7 = FastLerpColor(dVar28,DAT_00a1c7e4,DAT_00724358);
    uVar18 = UINT_ARRAY_0096c1dc[iVar12];
    if ((&DAT_00737d38)[uVar18 * 0xc] != 0) {
      uVar2 = (&currentAmmoArray.field0_0x0)[uVar18];
      snprintf(acStack_120,"%d/%d",uVar2,(ulonglong)(ushort)(&DAT_00737d3e)[uVar18 * 0xc]);
      if (uVar2 == 0) {
        uVar8 = FastLerpColor(dVar28,DAT_0072435c,DAT_00724360);
      }
      else {
        uVar8 = FastLerpColor(dVar28,DAT_00724364,DAT_00724368);
      }
      FontPrintMediumCenter
                (DAT_00723938 + iVar11 + 1,DAT_0072393c + iVar26 + 0xd,uVar7,acStack_120,
                 0xffffffffffffffff);
      FontPrintMediumCenter
                (DAT_00723938 + iVar11,DAT_0072393c + iVar26 + 0xc,uVar8,acStack_120,
                 0xffffffffffffffff);
    }
    uVar8 = FastLerpColor(dVar28,PTR_DAT_00724350,DAT_00724354);
    iVar25 = 0;
    iVar14 = *(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c + 0x18);
    iVar20 = iVar14 * 0x4c;
    if ((&g_goldWeaponsArray.field0_0x0)[iVar14] == '\0') {
      __s = (char *)help_msg_string_by_index((int)*(short *)((int)&DAT_00721044 + iVar20 + 2))
      ;
    }
    else {
      __s = (char *)help_msg_string_by_index((int)*(short *)(&DAT_00721048 + iVar20));
    }
    if ((__s != (char *)0x0) && (sVar13 = strlen(__s), sVar13 != 0)) {
      sVar13 = strlen(__s);
      iVar14 = 0;
      pcVar16 = __s;
      if (0 < (int)sVar13) {
        do {
          if (pcVar16[1] == '-') {
            iVar25 = iVar14 + 2;
            pcVar16 = pcVar16 + 2;
            if (iVar25 != 0) goto LAB_000cedd8;
            break;
          }
          iVar14 = iVar14 + 1;
          pcVar16 = pcVar16 + 1;
        } while (iVar14 < (int)sVar13);
      }
      pcVar16 = __s;
      pcVar21 = __s;
      if (0 < (int)sVar13) {
        do {
          pcVar16 = pcVar21 + 1;
          if (*pcVar16 == ' ') {
            iVar25 = iVar27 + 1;
            pcVar16 = pcVar21 + 2;
            break;
          }
          iVar27 = iVar27 + 1;
          pcVar21 = pcVar16;
        } while (iVar27 < (int)sVar13);
      }
LAB_000cedd8:
      iVar27 = DAT_00724370;
      if (((&DAT_00737d38)[UINT_ARRAY_0096c1dc[iVar12] * 0xc] == 0) &&
         (iVar27 = DAT_00a1c7e8, iVar25 != 0)) {
        iVar27 = DAT_00724374;
      }
      iVar27 = iVar27 + DAT_0072393c + iVar26;
      if (iVar25 == 0) {
        FontPrintMediumCenter
                  (DAT_00723938 + iVar11 + 1,iVar27 + 1,uVar7,__s,0xffffffffffffffff);
        FontPrintMediumCenter(DAT_00723938 + iVar11,iVar27,uVar8,__s,0xffffffffffffffff);
      }
      else {
        FontPrintMediumCenter(DAT_00723938 + iVar11 + 1,iVar27 + 1,uVar7,__s,iVar25);
        FontPrintMediumCenter(DAT_00723938 + iVar11,iVar27,uVar8,__s,iVar25);
        FontPrintMediumCenter
                  (DAT_00723938 + iVar11 + 1,iVar27 + 0x11,uVar7,pcVar16,0xffffffffffffffff);
        FontPrintMediumCenter
                  (DAT_00723938 + iVar11,iVar27 + 0x10,uVar8,pcVar16,0xffffffffffffffff);
      }
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00cefc0 (0x8c bytes)
void ClankCommandHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  DAT_00a1c080 = 4;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x58) = DAT_00723930;
  uVar1 = DAT_00723934;
  *(undefined4 *)(iVar2 + 0x74) = 0xfffffffe;
  *(undefined4 *)(iVar2 + 0x5c) = uVar1;
  auVar3 = loadVectorLeftIndexed(in_r0,0xcefbc);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  DAT_00a1c190 = &PTR_DAT_00723b0c;
  *(undefined2 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x4a) = 0;
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x78,param_1);
  *(undefined4 *)(iVar2 + 0x78U & 0xfffffffc) = uVar1;
  DAT_00a1c084 = 0;
  return;
}


// 0x00cf070 (0x638 bytes)
// inlined: FastAtan2 @0xcf1d0
void ClankCommandHud_Update(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar23;
  ulonglong uVar22;
  longlong lVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar17 = uVar22 - 0xc0;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar22;
  puVar8[0x1a] = in_LR;
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  puVar8[0x17] = unaff_r31;
  auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar26 = loadVectorLeftIndexed(in_LR,0xcf04c);
  auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar27
                      );
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0x6c) = 0x18;
  auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar7 = storeVectorElementWordIndexed
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar9 + 0x7cU & 0xfffffffc) = uVar7;
  DAT_0096560c = 2;
  DAT_00965b70 = 2;
  DAT_009660d4 = 2;
  DAT_00966638 = 2;
  fVar2 = 0.0;
  lVar13 = 0;
  fVar10 = SQRT(g_Pad.unk048 * g_Pad.unk048 + g_Pad.unk04c * g_Pad.unk04c);
  fVar6 = g_Pad.unk048 / fVar10;
  fVar4 = g_Pad.unk04c;
  if (0.0 - fVar10 < 0.0) {
    fVar4 = g_Pad.unk04c / fVar10;
  }
  if (fVar10 - 0.0 < 0.0) {
    fVar4 = g_Pad.unk04c / fVar10;
  }
  fVar3 = g_Pad.unk048;
  if (0.0 - fVar10 < 0.0) {
    fVar3 = fVar6;
  }
  *(float *)((int)puVar8 + 0x74) = fVar4;
  if (fVar10 - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  *(float *)(puVar8 + 0xe) = fVar3;
  *(float *)(puVar8 + 0xf) = ABS(fVar3) - ABS(fVar4);
  uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar5 = ABS(fVar4);
  }
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = ABS(fVar3);
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (0.0 < fVar5) {
    lVar16 = uVar22 - 0xb0;
    lVar21 = uVar22 - 0x44;
    lVar24 = uVar22 - 0x34;
    lVar25 = 2;
    fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x11) = fVar4;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)((int)puVar8 + 0x7c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar4;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
      iVar11 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
      lVar24 = lVar24 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar24 = uVar22 - 0x44;
    pfVar23 = (float *)&DAT_007358e0;
    lVar25 = 4;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar4 = *pfVar23;
      fVar5 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar4;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar16 = 2;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      fVar2 = fVar2 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
              *(float *)(iVar12 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
  }
  puVar18 = *(undefined **)(iVar9 + 0x78);
  bVar1 = puVar18 != (undefined *)0x0;
  if (((int)puVar18 >> 0x18 == 0) && (DAT_00a1bfe4 != 0)) {
    if (((g_Pad.pressedButton & 0xf000) == 0) && (0.5 <= fVar10)) {
      puVar18 = puVar18 + -1;
      *(undefined **)(iVar9 + 0x78) = puVar18;
      if (bVar1) goto LAB_000cf338;
    }
    puVar18 = &DAT_010000ff;
    *(undefined4 *)(iVar9 + 0x74) = 0xffffffff;
    *(undefined **)(iVar9 + 0x78) = &DAT_010000ff;
  }
LAB_000cf338:
  iVar11 = DAT_00a1c080;
  uVar14 = *(uint *)(iVar9 + 0x74);
  uVar22 = (ulonglong)uVar14;
  if ((int)puVar18 >> 0x18 == 1) {
    if (0.9 < fVar10) {
      puVar8[0x14] = (longlong)DAT_00a1c080;
      puVar8[0x14] = (longlong)
                     (int)((fVar2 + 3.1415927 + 3.1415927 + 1.5707964 +
                           3.1415927 / (float)(longlong)puVar8[0x14]) *
                          (float)(longlong)puVar8[0x14] * 0.15915494);
      uVar22 = (ulonglong)*(uint *)((int)puVar8 + 0xa4) -
               (longlong)((int)*(uint *)((int)puVar8 + 0xa4) / iVar11) * (longlong)iVar11;
      *(int *)(iVar9 + 0x74) = (int)uVar22;
    }
    if ((g_Pad.pressedButton & 0xf000) != 0) {
      if ((g_Pad.pressedButton & 0x1000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723afc;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x10);
        }
      }
      if ((g_Pad.pressedButton & 0x4000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723b00;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x14);
        }
      }
      if ((g_Pad.pressedButton & 0x8000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723af4;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 8);
        }
      }
      if ((g_Pad.pressedButton & 0x2000) != 0) {
        if ((int)uVar22 == -1) {
          uVar22 = (ulonglong)DAT_00723af8;
        }
        else {
          uVar22 = (ulonglong)
                   *(uint *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                             ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0xc);
        }
      }
      *(int *)(iVar9 + 0x74) = (int)uVar22;
    }
  }
  uVar19 = (uint)uVar22;
  if (uVar19 == uVar14) {
    if ((int)(uint)*(byte *)(iVar9 + 0x71) < DAT_00724344) {
      *(byte *)(iVar9 + 0x71) = *(byte *)(iVar9 + 0x71) + 1;
    }
  }
  else {
    *(undefined1 *)(iVar9 + 0x71) = 0;
  }
  if ((g_Pad.unk0c0 & 0x10) == 0) {
    DAT_0096bfa0 = 0;
    if (uVar19 != 0xffffffff) {
      DAT_0096bfa0 = *(undefined4 *)
                      (*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) +
                       ((int)(uVar22 << 5) - (int)(uVar22 << 2)) + 0x18);
    }
    bVar15 = *(byte *)(iVar9 + 0x70);
    if (bVar15 != 0) {
      bVar15 = bVar15 - 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  else {
    bVar15 = *(byte *)(iVar9 + 0x70);
    if ((int)(uint)bVar15 < DAT_00724344) {
      bVar15 = bVar15 + 1;
      *(byte *)(iVar9 + 0x70) = bVar15;
    }
  }
  if (bVar15 == 0) {
    DAT_00a1c08c = *(undefined4 *)(iVar9 + 0x78);
    do {
      uVar14 = (uint)lVar13;
      if (*(int *)(&HudEntries[0].field_0x64 + (int)(lVar13 << 7) + (int)(lVar13 << 4)) ==
          *(int *)(iVar9 + 100)) break;
      uVar14 = uVar14 + 1;
      lVar13 = (longlong)(int)uVar14;
    } while ((int)uVar14 < 0xd);
    DAT_00a1c090 = uVar19;
    if ((int)uVar14 < 0xd) {
      RegisterHUDCallback(uVar14,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,0);
    }
    *(undefined4 *)(iVar9 + 0x6c) = 0xfffffffa;
    DAT_00a1c088 = g_MainLoopFrames;
  }
  return;
}


// 0x00cf6f0 (0xba4 bytes)
// strings: 000cf7c0: 'HC/q`' (raw)

undefined4 Draw_ClankCommandHud(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar11;
  longlong lVar9;
  int iVar12;
  int iVar13;
  undefined8 uVar10;
  size_t sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  IconTableEntries *pIVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  StringId local_e0 [4];
  longlong local_d0;
  
  dVar26 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x70));
  dVar27 = (double)FastIntToDouble(DAT_00724344);
  dVar41 = (double)(float)(dVar26 / dVar27);
  dVar26 = 1.0;
  dVar27 = dVar26;
  if ((dVar41 <= 1.0) && (dVar27 = dVar41, dVar41 < 0.0)) {
    dVar27 = 0.0;
  }
  dVar41 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  dVar28 = (double)FastIntToDouble(DAT_00724344);
  dVar41 = (double)(float)(dVar41 / dVar28);
  if ((dVar41 <= dVar26) && (dVar26 = dVar41, dVar41 < 0.0)) {
    dVar26 = 0.0;
  }
  dVar41 = (double)FastIntToDouble
                             (worldUpdateTime - (worldUpdateTime / DAT_0072436c) * DAT_0072436c);
  dVar28 = (double)FastIntToDouble(DAT_0072436c);
  dVar40 = 3.141592502593994;
  dVar39 = -3.141592502593994;
  dVar38 = -0.16666656732559204;
  dVar37 = 0.008333025500178337;
  dVar36 = -0.0001980741071747616;
  dVar35 = 2.601886990305502e-06;
  dVar34 = (double)(float)(dVar27 * 128.0);
  fVar2 = (float)(dVar41 / dVar28) * 6.28318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar2;
  dVar28 = (double)(fVar5 * fVar3);
  dVar41 = (double)(fVar3 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4);
  dVar33 = (double)(float)(dVar28 * 2.601886990305502e-06 + dVar41);
  uVar6 = FastDoubleToInt(dVar34,dVar41,dVar28);
  uVar7 = FastDoubleToInt
                    ((double)(float)(dVar34 * (double)(float)(dVar33 * 0.125 + 0.875)));
  iVar11 = *(int *)(param_1 + 0x50);
  uVar17 = *(uint *)(param_1 + 0x60);
  iVar25 = *(int *)(param_1 + 0x54);
  if (((uVar17 & 1) == 0) && ((uVar17 & 2) == 0)) {
    iVar25 = iVar25 - (*(int *)(param_1 + 0x5c) >> 1);
  }
  iVar12 = iVar11 - *(int *)(param_1 + 0x58);
  uVar8 = 0;
  lVar19 = (longlong)iVar11 +
           (ZERO_MASK((uVar17 & 4)) &
           (longlong)
           (int)(iVar12 + ((uint)(ZERO_MASK((uVar17 & 8))) &
                          (iVar11 - (*(int *)(param_1 + 0x58) >> 1)) - iVar12)) - (longlong)iVar11);
  lVar24 = (longlong)
           (int)(((int)DAT_00723930 >> 1) + (uint)((int)DAT_00723930 < 0 && (DAT_00723930 & 1) != 0)
                );
  lVar22 = (longlong)
           (int)(((int)DAT_00723934 >> 1) + (uint)((int)DAT_00723934 < 0 && (DAT_00723934 & 1) != 0)
                );
  for (iVar11 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar11),
      sVar1 != -0x16cc && sVar1 != -1; iVar11 = iVar11 + 8) {
    uVar8 = uVar8 + 1;
  }
  iVar11 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,lVar19,
             iVar25,lVar24,lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar11 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
    }
  }
  iVar11 = (int)lVar19;
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,DAT_00723934 + iVar25,-lVar24,-lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar12 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar12)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
             DAT_00723930 + iVar11,iVar25,-lVar24,lVar22,uVar6);
  uVar8 = 0;
  for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe934 && pIVar18->iconId != 0xffff;
      pIVar18 = pIVar18 + 1) {
    uVar8 = uVar8 + 1;
  }
  iVar12 = (int)((uVar8 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar12) == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar12)) {
      lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar12) + 1;
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,lVar19,
             DAT_00723934 + iVar25,lVar24,-lVar22,uVar6);
  iVar12 = 0;
  if (0 < DAT_00a1c080) {
    iVar20 = 0;
    do {
      local_d0 = (longlong)DAT_00a1c080;
      dVar28 = (double)FastWrapRot
                                 (((float)(longlong)iVar12 * 2.0 * 3.1415927) / (float)local_d0 -
                                  3.1415927,1.5707964);
      dVar34 = (double)(float)(dVar28 + 1.570796251296997);
      dVar41 = (double)(float)(dVar40 - dVar28);
      if (dVar28 - (double)(float)(dVar40 - dVar28) < 0.0) {
        dVar41 = dVar28;
      }
      dVar33 = (double)(float)(dVar40 - dVar34);
      if (dVar34 - (double)(float)(dVar40 - dVar34) < 0.0) {
        dVar33 = dVar34;
      }
      dVar29 = (double)(float)(dVar39 - dVar28);
      if ((double)(float)(dVar39 - dVar28) - dVar41 < 0.0) {
        dVar29 = dVar41;
      }
      dVar28 = (double)(float)(dVar29 * dVar29);
      dVar41 = (double)(float)(dVar39 - dVar34);
      if ((double)(float)(dVar39 - dVar34) - dVar33 < 0.0) {
        dVar41 = dVar33;
      }
      dVar34 = (double)(float)(dVar41 * dVar41);
      dVar33 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar29));
      dVar31 = (double)(float)(dVar28 * dVar33);
      dVar32 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar41));
      iVar13 = *(int *)(param_1 + 0x74);
      dVar30 = (double)(float)(dVar34 * dVar32);
      iVar21 = (int)(DAT_0072434c *
                    (float)((double)(float)(dVar28 * dVar31) * dVar35 +
                           (double)(float)(dVar31 * dVar36 +
                                          (double)(float)(dVar33 * dVar37 +
                                                         (double)(float)((double)(float)(dVar28 * 
                                                  dVar29) * dVar38 + dVar29)))));
      local_d0 = (longlong)iVar21;
      iVar23 = DAT_00723938 + iVar11 +
               (int)(DAT_0072434c *
                     (float)((double)(float)(dVar34 * dVar30) * dVar35 +
                            (double)(float)(dVar30 * dVar36 +
                                           (double)(float)(dVar32 * dVar37 +
                                                          (double)(float)((double)(float)(dVar34 * 
                                                  dVar41) * dVar38 + dVar41)))) * DAT_0072437c);
      iVar21 = DAT_0072393c + iVar25 + iVar21;
      if ((iVar13 == iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar20) != 0))
      {
        uVar8 = 0;
        for (pIVar18 = IconTableEntry; pIVar18->iconId != 0xe99c && pIVar18->iconId != 0xffff;
            pIVar18 = pIVar18 + 1) {
          uVar8 = uVar8 + 1;
        }
        iVar13 = (int)((uVar8 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar13) == -1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if (*(short *)((int)&IconTableEntry->unknown + iVar13) != 0) {
            uVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar13);
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar8 << 2)) * 0x24,
                   iVar23 + -0x13,iVar21 + -0x13,0x26,0x26,uVar7);
        iVar13 = *(int *)(param_1 + 0x74);
      }
      if (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar20) != 0) {
        uVar10 = uVar6;
        if (iVar12 != iVar13) {
          local_d0 = (longlong)(int)uVar6;
          uVar10 = FastDoubleToInt((double)((float)local_d0 * DAT_00724378));
        }
        if (DAT_00a1bfe4 == 0) {
          uVar8 = 0;
          iVar16 = 0;
          iVar13 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
          iVar15 = *(int *)(iVar13 + iVar20 + 4) + 4;
          while (uVar17 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar16),
                uVar17 != *(uint *)(iVar13 + iVar20) && uVar17 != 0xffff) {
            iVar16 = iVar16 + 8;
            uVar8 = uVar8 + 1;
          }
          iVar13 = (int)((uVar8 & 0x1fffffff) << 3);
          if (*(short *)((int)&IconTableEntry->iconId + iVar13) == -1) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            if (iVar15 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar13)) {
              iVar16 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar13) + iVar15;
            }
          }
          HudEntry_DrawIcon(param_1,iVar16,iVar23,iVar21,1,uVar6);
        }
        else {
          iVar15 = *(int *)(DAT_00a1c084 * 4 + DAT_00a1c190);
          uVar8 = 0;
          iVar16 = 0;
          iVar13 = *(int *)(iVar15 + iVar20 + 4);
          while (uVar17 = (uint)*(ushort *)((int)&IconTableEntry->iconId + iVar16),
                uVar17 != *(uint *)(iVar15 + iVar20) && uVar17 != 0xffff) {
            iVar16 = iVar16 + 8;
            uVar8 = uVar8 + 1;
          }
          iVar15 = (int)((uVar8 & 0x1fffffff) << 3);
          if (*(short *)((int)&IconTableEntry->iconId + iVar15) == -1) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            if (iVar13 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar15)) {
              iVar16 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + iVar13;
            }
          }
          HudEntry_DrawIcon(param_1,iVar16,iVar23,iVar21,1,uVar10);
        }
      }
      iVar12 = iVar12 + 1;
      iVar20 = iVar20 + 0x1c;
    } while (iVar12 < DAT_00a1c080);
  }
  iVar12 = *(int *)(param_1 + 0x74);
  if (((-1 < iVar12) && (*(int *)(*(int *)(DAT_00a1c190 + DAT_00a1c084 * 4) + iVar12 * 0x1c) != 0))
     && (-1 < iVar12)) {
    local_e0[0] = STR_WAIT;
    local_e0[3] = 0x521e;
    local_e0[2] = 0x521f;
    local_e0[1] = 0x521d;
    uVar6 = help_msg_string_by_index(local_e0[iVar12]);
    if (((char *)uVar6 != (char *)0x0) && (sVar14 = strlen((char *)uVar6), sVar14 != 0)) {
      dVar26 = (double)(float)(dVar27 * dVar26);
      uVar7 = FastLerpColor(dVar26,PTR_DAT_00724384,DAT_00724388);
      uVar10 = FastLerpColor(dVar26,0,0xffffffff80000000);
      iVar25 = DAT_0072438c + iVar25 + DAT_0072393c;
      FontPrintMediumCenter
                (DAT_00723938 + iVar11 + -1,iVar25 + -1,uVar10,uVar6,0xffffffffffffffff);
      FontPrintMediumCenter(DAT_00723938 + iVar11,iVar25,uVar7,uVar6,0xffffffffffffffff);
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00d02a0 (0xb8 bytes)
void HealthHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0294);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0294);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x40;
  *(undefined4 *)(entry + 0x5c) = 0x40;
  *(undefined2 *)(entry + 0x48) = 0x20;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c180 = 0;
  *(undefined2 **)(entry + 0x80) = &DAT_00a1c180;
  DAT_00a1c182 = 0;
  DAT_00a1c186 = 1;
  DAT_00a1c184 = 0;
  return;
}


// 0x00d0360 (0x264 bytes)
void HealthHud_Update(longlong param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  short sVar6;
  int iVar5;
  undefined8 in_LR;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  iVar3 = (int)param_1;
  iVar5 = *(int *)(iVar3 + 0x78);
  if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
    iVar5 = **(int **)(iVar3 + 0xc);
    psVar1 = *(short **)(iVar3 + 0x80);
    *(int *)(iVar3 + 0x78) = iVar5 + (iVar5 >> 0x1f & -iVar5);
    sVar6 = psVar1[1] + psVar1[2];
    psVar1[1] = sVar6;
    sVar4 = psVar1[2] + psVar1[3];
    *psVar1 = (short)(*psVar1 + 1) + (short)((*psVar1 + 1) / 0x3c) * -0x3c;
    psVar1[2] = sVar4;
    if (sVar4 < 0x3d) {
      if (sVar4 < -0x3c) {
        sVar4 = -0x3c;
        psVar1[2] = -0x3c;
      }
    }
    else {
      sVar4 = 0x3c;
      psVar1[2] = 0x3c;
    }
    if ((0x7ff < sVar6) && (0 < sVar4)) {
      psVar1[3] = -1;
    }
    if (0xfff < sVar6) {
      sVar6 = 0xfff;
      psVar1[1] = 0xfff;
    }
    if ((sVar6 < 0x7ff) && (sVar4 < 0)) {
      psVar1[3] = 1;
    }
    if (sVar6 < 0) {
      psVar1[1] = 0;
    }
    iVar5 = *(int *)(iVar3 + 0x78);
    iVar5 = iVar5 + ((uint)((longlong)*(int *)(iVar3 + 8) - (longlong)iVar5 >> 0x3f) &
                    *(int *)(iVar3 + 8) - iVar5);
    *(int *)(iVar3 + 0x78) = iVar5;
  }
  if ((*(int *)(iVar3 + 0x74) != iVar5) || (*(int *)(iVar3 + 0x74) == 1)) {
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = loadVectorLeftIndexed(in_LR,0xd0358);
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar3 + 0x7cU & 0xfffffffc) = uVar2;
    *(int *)(iVar3 + 0x74) = iVar5;
  }
  if (*(int *)(iVar3 + 0x7c) < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar3 + 0x6c) = 1;
    if (*(char *)(iVar3 + 0x71) == '\0') {
      if (*(char *)(iVar3 + 0x70) == '\0') {
        *(undefined4 *)(iVar3 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar3 + 0x70) = *(char *)(iVar3 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar3 + 0x71) = *(char *)(iVar3 + 0x71) + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar3 + 0x70) < DAT_00724390) {
    *(byte *)(iVar3 + 0x70) = *(byte *)(iVar3 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar3 + 0x71) < DAT_00724390) {
    *(byte *)(iVar3 + 0x71) = *(byte *)(iVar3 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}


// 0x00d05e0 (0x898 bytes)
// strings: 000d06cc: 'HC e`' (raw)

undefined4 Draw_NanotechUI(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  IconTableEntries *pIVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  short *psVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  if ((g_heroType == 2) || (g_heroState == TURRET_PLANE_UI)) {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = *(int *)(param_1 + 0x78);
    iVar6 = DAT_007243d8 + ((uint)(ZERO_MASK(Cutscene)) & 8) + 10;
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar12 = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      dVar23 = (double)FastIntToDouble();
      dVar24 = (double)FastIntToDouble(DAT_00724390);
      dVar26 = (double)(float)(dVar23 / dVar24);
      dVar23 = 1.0;
      dVar24 = dVar23;
      if ((dVar26 <= 1.0) && (dVar24 = dVar26, dVar26 < 0.0)) {
        dVar24 = 0.0;
      }
      dVar26 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
      dVar25 = (double)FastIntToDouble(DAT_00724390);
      dVar26 = (double)(float)(dVar26 / dVar25);
      if ((dVar26 <= dVar23) && (dVar23 = dVar26, dVar26 < 0.0)) {
        dVar23 = 0.0;
      }
      uVar7 = FastDoubleToInt((double)(float)(dVar23 * 128.0));
      uVar8 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007243f0 * dVar24));
      psVar5 = *(short **)(param_1 + 0x80);
      lVar15 = (longlong)((int)*psVar5 >> 1);
      lVar15 = lVar15 + (ZERO_MASK(iVar4) & 0x1eU - lVar15);
      iVar17 = g_heroMaxNanotech +
               ((uint)(ZERO_MASK((1 - (uint)g_heroType))) &
               g_clankMaxNanotech - g_heroMaxNanotech);
      if (iVar17 == 8) {
        psVar21 = &DAT_007243b8;
        dVar24 = (double)(float)(dVar24 * 48.0);
        lVar9 = FastDoubleToInt(dVar24);
        lVar10 = FastDoubleToInt(dVar24);
      }
      else if (iVar17 == 5) {
        psVar21 = (short *)0x7243a4;
        lVar9 = FastDoubleToInt((double)(float)(dVar24 * 32.0));
        lVar10 = FastDoubleToInt((double)(float)(dVar24 * 16.0));
      }
      else {
        psVar21 = (short *)0x724394;
        lVar9 = FastDoubleToInt((double)(float)(dVar24 * 48.0));
        lVar10 = 0;
      }
      uVar19 = 0;
      iVar18 = DAT_007243e0 + iVar6;
      for (iVar11 = 0; sVar2 = *(short *)((int)&IconTableEntry->iconId + iVar11),
          sVar2 != 0x7580 && sVar2 != -1; iVar11 = iVar11 + 8) {
        uVar19 = uVar19 + 1;
      }
      iVar11 = (int)((uVar19 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar11)) {
          lVar20 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11) + 1;
        }
      }
      uVar19 = 0;
      for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
          pIVar13 = pIVar13 + 1) {
        uVar19 = uVar19 + 1;
      }
      iVar11 = (int)((uVar19 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar11) == -1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar11) != 0) {
          uVar19 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar11);
        }
      }
      Hud_DrawTexQuad(lVar20,(int)lVar9 + iVar3,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      iVar11 = (int)(uVar19 << 2);
      iVar22 = iVar3 - (int)lVar9;
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + iVar11) * 0x24,iVar22,iVar18,
                 (int)(lVar9 << 1),DAT_007243ec,uVar8);
      iVar16 = (int)(lVar20 << 2);
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + iVar16) * 0x24,
                 iVar22 - DAT_007243ec,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      iVar22 = (int)lVar10;
      if (iVar22 != 0) {
        iVar18 = DAT_007243dc + iVar18;
        Hud_DrawTexQuad(lVar20,iVar22 + iVar3,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + iVar11) * 0x24,iVar3 - iVar22,
                   iVar18,(int)(lVar10 << 1),DAT_007243ec,uVar8);
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + iVar16) * 0x24,
                   (iVar3 - iVar22) - DAT_007243ec,iVar18,DAT_007243ec,DAT_007243ec,uVar8);
      }
      iVar11 = 0;
      if (0 < iVar17) {
        do {
          uVar19 = 0;
          for (iVar18 = 0; sVar2 = *(short *)((int)&IconTableEntry->iconId + iVar18),
              sVar2 != 0x7536 && sVar2 != -1; iVar18 = iVar18 + 8) {
            uVar19 = uVar19 + 1;
          }
          iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
          iVar16 = (int)lVar15;
          if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
            iVar22 = 0;
          }
          else {
            iVar22 = 0;
            if (iVar16 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
              iVar22 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + iVar16;
            }
          }
          HudEntry_DrawIcon(param_1,iVar22,*psVar21 + iVar3,psVar21[1] + iVar6,1,uVar7);
          lVar9 = lVar15;
          if (iVar16 != 0x1e) {
            uVar19 = 0;
            for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7536 && pIVar13->iconId != 0xffff;
                pIVar13 = pIVar13 + 1) {
              uVar19 = uVar19 + 1;
            }
            iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
            if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (0x1e < *(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
                lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + 0x1e;
              }
            }
            HudEntry_DrawIcon(param_1,lVar9,*psVar21 + iVar3,psVar21[1] + iVar6,1,uVar7);
            sVar2 = *psVar21;
            uVar19 = 0;
            sVar1 = psVar21[1];
            for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7536 && pIVar13->iconId != 0xffff;
                pIVar13 = pIVar13 + 1) {
              uVar19 = uVar19 + 1;
            }
            iVar18 = (int)((uVar19 & 0x1fffffff) << 3);
            if (*(short *)((int)&IconTableEntry->iconId + iVar18) == -1) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              if (0x1f < *(ushort *)((int)&IconTableEntry->unknown + iVar18)) {
                lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar18) + 0x1f;
              }
            }
            uVar8 = FastDoubleToInt
                              ((double)(float)((double)(longlong)((int)psVar5[1] >> 4) * dVar23));
            Hud_DrawTexHeaderQuad
                      (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,
                       (int)sVar2 + iVar3 + 0xe,sVar1 + iVar6 + -0x11,0x22,0x22,uVar8);
            lVar9 = 0x1e;
            if (iVar4 != iVar11 + 1) {
              uVar14 = (uint)(lVar15 + 6);
              lVar9 = lVar15 + 6 +
                      ((longlong)((int)uVar14 / 0x1e + ((int)uVar14 >> 0x1f)) +
                      (ulonglong)(uVar14 >> 0x1f)) * -0x1e;
            }
          }
          iVar11 = iVar11 + 1;
          psVar21 = psVar21 + 2;
          lVar15 = lVar9;
        } while (iVar11 < iVar17);
      }
      uVar12 = *(undefined4 *)(param_1 + 0x58);
    }
  }
  return uVar12;
}


// 0x00d0e80 (0x74 bytes)
void AmmoHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0e78);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0e78);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00d0f00 (0x94 bytes)
void BoltHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd0ef4);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd0ef4);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x20;
  *(undefined4 *)(entry + 0x5c) = 0x20;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c188 = 0;
  *(undefined2 **)(entry + 0x80) = &DAT_00a1c188;
  return;
}


// 0x00d0fa0 (0x15c bytes)
void BoltHud_Update(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined8 in_r0;
  int iVar8;
  int iVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  iVar7 = g_boltCount;
  iVar5 = (int)param_1;
  iVar8 = **(short **)(iVar5 + 0x80) + 1;
  bVar1 = *(int *)(iVar5 + 0x74) != g_boltCount;
  sVar6 = (short)(iVar8 >> 0x1f);
  iVar9 = *(int *)(iVar5 + 0x7c);
  **(short **)(iVar5 + 0x80) =
       (short)iVar8 +
       (((short)(iVar8 / 0x3c) + sVar6) - ((short)((short)(iVar8 / 0x3c0000) + sVar6) >> 0xf)) *
       -0x3c;
  bVar2 = *(byte *)(iVar5 + 0x70);
  bVar3 = *(byte *)(iVar5 + 0x71);
  if (bVar1) {
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    *(int *)(iVar5 + 0x74) = iVar7;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_r0,0xd0f94);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    iVar9 = (int)(animationSpeed * 90.5);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
  }
  if (iVar9 < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar5 + 0x6c) = 1;
    if (bVar3 == 0) {
      if (bVar2 == 0) {
        *(undefined4 *)(iVar5 + 0x6c) = 0xfffffffa;
      }
      else {
        *(byte *)(iVar5 + 0x70) = bVar2 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar3 - 1;
    }
  }
  else if ((int)(uint)bVar2 < DAT_007243f4) {
    *(byte *)(iVar5 + 0x70) = bVar2 + 1;
  }
  else if ((int)(uint)bVar3 < DAT_007243f8) {
    *(byte *)(iVar5 + 0x71) = bVar3 + 1;
  }
  return;
}


// 0x00d1110 (0x6bc bytes)
// strings: 000d1108: '?333`'

undefined4 Draw_BoltCountUI(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar9;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar10;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar11;
  IconTableEntries *pIVar12;
  longlong lVar13;
  char *__format;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  char acStack_a0 [40];
  
  psVar1 = *(short **)(param_1 + 0x80);
  if (g_heroState == TURRET_PLANE_UI) {
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  else if (*(char *)(param_1 + 0x70) == '\0') {
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x50);
    lVar13 = (ZERO_MASK(Cutscene) & 8U) + 10;
    dVar16 = (double)FastIntToDouble();
    dVar17 = (double)FastIntToDouble(DAT_007243f4);
    dVar19 = (double)(float)(dVar16 / dVar17);
    dVar16 = 1.0;
    dVar17 = dVar16;
    if ((dVar19 <= 1.0) && (dVar17 = dVar19, dVar19 < 0.0)) {
      dVar17 = 0.0;
    }
    dVar19 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar18 = (double)FastIntToDouble(DAT_007243f8);
    dVar19 = (double)(float)(dVar19 / dVar18);
    if ((dVar19 <= dVar16) && (dVar16 = dVar19, dVar19 < 0.0)) {
      dVar16 = 0.0;
    }
    iVar9 = FastDoubleToInt((double)(float)(dVar17 * 128.0));
    uVar5 = FastDoubleToInt((double)((float)(longlong)iVar9 * 0.7));
    iVar15 = 1;
    for (iVar9 = g_boltCount; 9 < iVar9; iVar9 = iVar9 / 10) {
      iVar15 = iVar15 + 1;
    }
    iVar9 = FastDoubleToInt
                      ((double)(float)((double)(longlong)(DAT_0072441c * iVar15) * dVar17));
    uVar6 = 0;
    bVar4 = false;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexQuad(lVar7,iVar2 + -0xc,lVar13,0x20,0x20,uVar5);
    uVar6 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar6 << 2)) * 0x24,
               (iVar2 - iVar9) + -0x1c,lVar13,iVar9 + 0x10,0x20,uVar5);
    uVar6 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7580 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar7 << 2)) * 0x24,
               (iVar2 - iVar9) + -0x3c,lVar13,0x20,0x20,uVar5);
    uVar6 = 0;
    iVar9 = (int)*psVar1 >> 1;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x754f && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar6 = uVar6 + 1;
    }
    iVar10 = (int)((uVar6 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (iVar9 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + (longlong)iVar9
        ;
      }
    }
    HudEntry_DrawIcon(param_1,lVar7,iVar2 + -0x20,lVar13,0,0x80);
    uVar5 = FastLerpColor(dVar16,PTR_DAT_007243fc,DAT_00724400);
    uVar8 = FastLerpColor(dVar16,0,0xffffffff80000000);
    snprintf(acStack_a0,"%d",g_boltCount);
    iVar9 = (int)lVar13;
    FontPrintMediumRight
              (DAT_00724404 + iVar2 + 1,DAT_00724408 + iVar9 + 1,uVar8,acStack_a0,0xffffffffffffffff
              );
    FontPrintMediumRight
              (DAT_00724404 + iVar2,DAT_00724408 + iVar9,uVar5,acStack_a0,0xffffffffffffffff);
    if ((g_Language == 3) || (g_Language == 5)) {
      __format = ".";
    }
    else {
      bVar4 = true;
      __format = "\'";
    }
    snprintf(acStack_a0,__format);
    iVar10 = DAT_00724414;
    iVar3 = DAT_00724418;
    if (bVar4) {
      iVar10 = DAT_0072440c;
      iVar3 = DAT_00724410;
    }
    iVar14 = 3;
    if (3 < iVar15) {
      do {
        FontPrintMediumRight
                  (((iVar10 + iVar2) - DAT_0072441c * iVar14) + 2,iVar3 + iVar9 + 2,uVar8,acStack_a0
                   ,0xffffffffffffffff);
        FontPrintMediumRight
                  ((iVar10 + iVar2) - DAT_0072441c * iVar14,iVar3 + iVar9,uVar5,acStack_a0,
                   0xffffffffffffffff);
        iVar14 = iVar14 + 3;
      } while (iVar14 < iVar15);
    }
    uVar11 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar11;
}


// 0x00d17d8 (0xb4 bytes)
void UnusedIconHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd17cc);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd17cc);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  entry = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(entry + 0x58) = 0x40;
  *(undefined4 *)(entry + 0x5c) = 0x40;
  *(undefined2 *)(entry + 0x48) = 0x20;
  *(undefined2 *)(entry + 0x4a) = 0;
  HudEntry_CalcNumberSize(entry);
  DAT_00a1c170 = 0;
  *(undefined4 **)(entry + 0x80) = &DAT_00a1c170;
  DAT_00a1c17c = 0;
  DAT_00a1c174 = 0;
  DAT_00a1c178 = 0;
  return;
}


// 0x00d1898 (0x2f4 bytes)
void UnusedIconHud_Update(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  iVar4 = (int)param_1;
  piVar1 = *(int **)(iVar4 + 0x80);
  iVar7 = *(int *)(iVar4 + 0x78);
  iVar2 = *(int *)(iVar4 + 0x74);
  iVar5 = *(int *)(iVar4 + 0x6c);
  if (*(int **)(iVar4 + 0xc) != (int *)0x0) {
    iVar7 = **(int **)(iVar4 + 0xc);
    iVar7 = iVar7 + (iVar7 >> 0x1f & -iVar7);
    iVar7 = iVar7 + ((uint)((longlong)*(int *)(iVar4 + 8) - (longlong)iVar7 >> 0x3f) &
                    *(int *)(iVar4 + 8) - iVar7);
    *(int *)(iVar4 + 0x78) = iVar7;
  }
  if ((iVar2 != iVar7) && (piVar1[1] == 0)) {
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(in_LR,0xd188c);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    if (iVar5 < 0) {
      *piVar1 = iVar7 + ((uint)((longlong)iVar7 - (longlong)iVar2 >> 0x3f) & iVar2 - iVar7);
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x78);
      piVar1[2] = 0x80;
      iVar5 = *(int *)(iVar4 + 0x6c);
    }
    if (0x17 < iVar5) {
      piVar1[1] = 0x80;
      iVar7 = *(int *)(iVar4 + 0x78);
      *piVar1 = iVar7 + ((uint)((longlong)iVar7 - (longlong)*(int *)(iVar4 + 0x74) >> 0x3f) &
                        *(int *)(iVar4 + 0x74) - iVar7);
    }
  }
  piVar1[3] = piVar1[3] + DAT_00724424;
  if (piVar1[1] != 0) {
    auVar9 = ZEXT416(0xffffffff);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = loadVectorLeftIndexed(in_LR,0xd188c);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    iVar2 = DAT_00724420;
    iVar7 = piVar1[1];
    piVar1[2] = 0;
    piVar1[1] = iVar7 - iVar2;
    if (iVar7 - iVar2 < 1) {
      piVar1[1] = 0;
      piVar1[2] = 0x80;
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar4 + 0x78);
    }
  }
  if (piVar1[2] != 0) {
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar8 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar9 = loadVectorLeftIndexed(4,0xd188c);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar7 = *(int *)(iVar4 + 0x6c);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar4 + 0x7cU & 0xfffffffc) = uVar3;
    uVar6 = piVar1[2];
    if (0x18 < iVar7) {
      uVar6 = uVar6 - DAT_00724420;
    }
    piVar1[2] = (uint)(-(longlong)(int)uVar6 >> 0x3f) & uVar6;
  }
  if (*(int *)(iVar4 + 0x7c) < (int)(animationSpeed * 5.5)) {
    if (*(char *)(iVar4 + 0x71) == '\0') {
      if (*(char *)(iVar4 + 0x70) == '\0') {
        *(undefined4 *)(iVar4 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar4 + 0x70) = *(char *)(iVar4 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar4 + 0x71) = *(char *)(iVar4 + 0x71) + -1;
    }
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x70) < DAT_007243f4) {
    *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(iVar4 + 0x71) < DAT_007243f8) {
    *(byte *)(iVar4 + 0x71) = *(byte *)(iVar4 + 0x71) + 1;
  }
  HudIcon_GetAnimFrame(param_1 + 0x40);
  return;
}


// 0x00d1b8c (0x268 bytes)
undefined4 UnusedIconHud_Draw(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int local_30;
  int local_2c [3];
  
  iVar1 = *(int *)(param_1 + 0x74);
  local_30 = *(int *)(param_1 + 0x50);
  piVar2 = *(int **)(param_1 + 0x80);
  local_2c[0] = *(int *)(param_1 + 0x54);
  uVar3 = *(uint *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x58);
  if (((uVar3 & 1) == 0) && ((uVar3 & 2) == 0)) {
    local_2c[0] = local_2c[0] - (*(int *)(param_1 + 0x5c) >> 1);
  }
  if ((uVar3 & 4) == 0) {
    local_30 = local_30 -
               (iVar4 + ((uint)(ZERO_MASK((uVar3 & 8))) & (iVar4 >> 1) - iVar4));
  }
  HudEntry_GetSlideOffset(param_1,&local_30,local_2c,*(undefined4 *)(param_1 + 0x6c),0);
  iVar1 = (((uint)(1 - (longlong)iVar1 >> 0x3f) & iVar1 - 1U) + 1) * 3;
  HudEntry_DrawIcon(param_1,(uint)*(ushort *)
                                   ((int)&IconTableEntry->variantsCnt +
                                   (int)((longlong)*(short *)(param_1 + 0x40) << 3)) + iVar1 + -3,
                    local_30,local_2c[0],1,0x80);
  uVar3 = piVar2[3];
  lVar5 = (longlong)
          (int)(0x80 - (uVar3 + (((int)uVar3 >> 8) + (uint)((int)uVar3 < 0 && (uVar3 & 0xff) != 0))
                                * -0x100));
  HudEntry_DrawIcon(param_1,(uint)*(ushort *)
                                   ((int)&IconTableEntry->variantsCnt +
                                   (int)((longlong)*(short *)(param_1 + 0x40) << 3)) + iVar1 + -2,
                    local_30,local_2c[0],1,lVar5 + (lVar5 >> 0x3f & lVar5 * -2));
  iVar1 = piVar2[1];
  if ((iVar1 != 0) || (piVar2[2] != 0)) {
    iVar4 = 0x80 - iVar1;
    if (iVar1 == 0) {
      iVar4 = piVar2[2];
    }
    HudEntry_DrawIcon(param_1,*(int *)(param_1 + 0x44) +
                              (((uint)(1 - (longlong)*piVar2 >> 0x3f) & *piVar2 - 1U) + 1) * 3 + -1,
                      local_30,local_2c[0],1,iVar4);
  }
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00d1df4 (0x1f4 bytes)
undefined4 Draw_MobyMeterHud(int param_1)

{
  uint uVar1;
  int local_20;
  int local_1c [3];
  
  local_20 = *(int *)(param_1 + 0x50);
  local_1c[0] = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 200;
  *(undefined4 *)(param_1 + 0x5c) = 0x20;
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    local_1c[0] = local_1c[0] + -0x10;
  }
  if ((uVar1 & 4) == 0) {
    local_20 = local_20 - (((uint)(ZERO_MASK((uVar1 & 8))) & 0xffffff9c) + 200);
  }
  HudEntry_GetSlideOffset(param_1,&local_20,local_1c,*(undefined4 *)(param_1 + 0x6c),0);
  DrawFlatOverlay(local_20,local_1c[0],
                  (*(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x74)) / *(int *)(param_1 + 8) +
                  local_20 + 1,local_1c[0] + 0x12,0x803030f0,0);
  DrawFlatOverlay(local_20 + -1,local_1c[0] + -1,local_20 + 0xcb,local_1c[0],0x80ffffff,0);
  DrawFlatOverlay(local_20 + 0xcb,local_1c[0],local_20 + 0xca,local_1c[0] + 0x13,0x80ffffff,0);
  DrawFlatOverlay(local_20 + 0xcb,local_1c[0] + 0x12,local_20 + -1,local_1c[0] + 0x13,0x80ffffff,0);
  DrawFlatOverlay(local_20 + -1,local_1c[0] + 0x12,local_20,local_1c[0] + -1,0x80ffffff,0);
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00d1ff0 (0x90 bytes)
void TrickHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int entry;
  undefined8 in_LR;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  
  entry = (int)param_1;
  auVar2 = ZEXT416(0xffffffff);
  auVar2 = auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar2 = loadVectorLeftIndexed(in_LR,0xd1fe8);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = auVar2 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar3);
  auVar3 = loadVectorLeftIndexed(4,0xd1fe8);
  auVar2 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar2 = ZEXT416((uint)(auVar2.piece<0,4>() + auVar3.piece<0,4>())) & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x7c,param_1);
  *(undefined4 *)(entry + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined2 *)(entry + 0x48) = 0;
  *(undefined2 *)(entry + 0x4a) = 0;
  DAT_00a1c810 = 0xffffffff;
  DAT_00a1c80c = 0xffffffff;
  DAT_00a1c808 = 0xffffffff;
  DAT_00a1c804 = 0xffffffff;
  HudEntry_CalcNumberSize(entry);
  return;
}


// 0x00d20a0 (0x44c bytes)
void TrickHud_Update(undefined8 param_1)

{
  longlong lVar1;
  byte bVar2;
  int *piVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x90;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x14] = in_LR;
  puVar5[0x11] = unaff_r31;
  auVar11 = loadVectorLeftIndexed(0x74,param_1);
  iVar6 = (int)param_1;
  piVar3 = *(int **)(iVar6 + 0xc);
  auVar11 = vectorConvertFromSignedFixedPointWord(auVar11,0);
  auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar8 = storeVectorElementWordIndexed
                    (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar5 + 0xe) = uVar8;
  puVar5[0xf] = (longlong)*piVar3;
  Delt((float)(longlong)puVar5[0xf],6.0,(float *)(puVar5 + 0xe));
  uVar8 = FastDoubleToInt((double)*(float *)(puVar5 + 0xe));
  bVar2 = *(byte *)(iVar6 + 0x72);
  *(undefined4 *)(iVar6 + 0x74) = uVar8;
  fVar7 = animationSpeed;
  if (bVar2 == 0) {
    if (5 < g_framesNotGrounded) {
      auVar12 = loadVectorLeftIndexed(0x70c,0x969ce0);
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar12,0);
      auVar11 = loadVectorLeftIndexed(4,0xd2080);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                 auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar11 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        DAT_00a1c7f4 = 0;
        DAT_00a1c7ec = storeVectorElementWordIndexed
                                 (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                  0xffffffffffffc7ec,0xa20000);
        DAT_00a1c7f0 = 0;
        DAT_00a1c7f8 = 0;
        DAT_00a1c7fc = 0;
        DAT_00a1c800 = 0;
        *(undefined1 *)(iVar6 + 0x72) = 1;
        uVar8 = DAT_00724428;
        *(undefined1 *)(iVar6 + 0x70) = 0;
        *(char *)(iVar6 + 0x71) = (char)uVar8;
      }
    }
  }
  else if (bVar2 < 2) {
    if (*(byte *)(iVar6 + 0x70) < 10) {
      *(byte *)(iVar6 + 0x70) = *(byte *)(iVar6 + 0x70) + 1;
    }
    if (*(char *)(iVar6 + 0x71) != '\0') {
      *(char *)(iVar6 + 0x71) = *(char *)(iVar6 + 0x71) + -1;
    }
    DAT_00a1c7f0 = DAT_0096a3d0;
    DAT_00a1c7f4 = DAT_0096a3c0;
    DAT_00a1c7f8 = DAT_0096a3c4;
    DAT_00a1c7fc = DAT_0096a3c8;
    DAT_00a1c800 = DAT_0096a3cc;
    if (DAT_00a1c7ec < DAT_0096a3ec) {
      DAT_00a1c7ec = DAT_0096a3ec;
      *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
    }
    if ((g_framesGroundedCnt != 0) || ((0x6c < (int)g_heroState && ((int)g_heroState < 0x70)))) {
      DAT_00a1c814 = 0;
      DAT_0096a3d0 = 0;
      DAT_0096a3ec = 0;
      DAT_0096a3c0 = 0;
      DAT_0096a3c4 = 0;
      DAT_0096a3c8 = 0;
      DAT_0096a3cc = 0;
      DAT_0096a3e0 = 0;
      DAT_0096a3e4 = 0;
      DAT_0096a3e8 = 0;
      if (g_heroState == HOVERBOARD_RIDING) {
        if (2 < DAT_00a1c7f0) {
          DAT_00a1c810 = DAT_00a1c80c;
          DAT_00a1c80c = DAT_00a1c808;
          DAT_00a1c808 = DAT_00a1c804;
          DAT_00a1c804 = 0xffffffff;
        }
        *(undefined1 *)(iVar6 + 0x72) = 3;
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
        auVar11 = loadVectorLeftIndexed(8,0xd2080);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xff;
        uVar4 = storeVectorElementByteIndexed
                          (auVar11 | auVar11 << 8 | auVar11 << 0x10 | auVar11 << 0x18 |
                           auVar11 << 0x20 | auVar11 << 0x28 | auVar11 << 0x30 | auVar11 << 0x38 |
                           auVar11 << 0x40 | auVar11 << 0x48 | auVar11 << 0x50 | auVar11 << 0x58 |
                           auVar11 << 0x60 | auVar11 << 0x68 | auVar11 << 0x70 | auVar11 << 0x78,
                           0x70,param_1);
        *(undefined1 *)(iVar6 + 0x70) = uVar4;
      }
      else {
        *(undefined1 *)(iVar6 + 0x72) = 2;
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(char *)(iVar6 + 0x71) = (char)DAT_00724428;
        auVar11 = loadVectorLeftIndexed(0xc,0xd2080);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar13);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xff;
        uVar4 = storeVectorElementByteIndexed
                          (auVar11 | auVar11 << 8 | auVar11 << 0x10 | auVar11 << 0x18 |
                           auVar11 << 0x20 | auVar11 << 0x28 | auVar11 << 0x30 | auVar11 << 0x38 |
                           auVar11 << 0x40 | auVar11 << 0x48 | auVar11 << 0x50 | auVar11 << 0x58 |
                           auVar11 << 0x60 | auVar11 << 0x68 | auVar11 << 0x70 | auVar11 << 0x78,
                           0x70,param_1);
        *(undefined1 *)(iVar6 + 0x70) = uVar4;
      }
    }
  }
  else if (bVar2 < 4) {
    bVar9 = *(byte *)(iVar6 + 0x70);
    if (bVar9 == 0) {
      bVar9 = 0;
      DAT_00a1c814 = 0;
      DAT_00a1c7f4 = 0;
      DAT_00a1c7ec = 0;
      DAT_00a1c7f0 = 0;
      DAT_00a1c7f8 = 0;
      DAT_00a1c7fc = 0;
      DAT_00a1c800 = 0;
      *(undefined1 *)(iVar6 + 0x72) = 0;
    }
    else if (bVar2 == 3) {
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      puVar5[0xf] = (longlong)(int)(animationSpeed * 110.5);
      if ((uint)bVar9 == *(uint *)((int)puVar5 + 0x7c)) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        g_RaceScore = g_RaceScore + DAT_00a1c814;
        iVar10 = DAT_0096a544 + DAT_00a1c814 * 5;
        auVar13 = loadVectorLeftIndexed(0x14,0xd2080);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = vectorMultiplyAddFloatingPoint
                            (auVar11,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                             auVar12);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar14 = loadVectorLeftIndexed(0x18,0xd2080);
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar11 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        DAT_0096a544 = iVar10;
        puVar5[0xf] = (longlong)(int)((float)(longlong)(fVar7 * 17.5) * 60.0);
        if (*(int *)((int)puVar5 + 0x7c) < iVar10) {
          auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
          DAT_0096a544 = storeVectorElementWordIndexed
                                   (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                                    0x864,0x969ce0);
        }
      }
    }
    *(byte *)(iVar6 + 0x70) = bVar9 - 1;
  }
  return;
}


// 0x00d24ec (0x2d0 bytes)
void Hud_DrawEffectTexQuad(int tex,int x,int y,int w,int h,int alpha)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int iVar4;
  
  iVar4 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)((longlong)tex << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar4);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  iVar4 = *(int *)(iVar4 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = alpha << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = y << 0x10 | x & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = (RsxCmd)((longlong)w << 1) & 0xfffe;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = iVar4 << 0x10;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)(((longlong)h + (longlong)y & 0xffffffffU) << 0x10) | x & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar2 = w + x & 0xffff;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = iVar4 << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)(((longlong)h + (longlong)y & 0xffffffffU) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = y << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00d27f8 (0xe00 bytes)
// strings: 00652124: 'x%d %s' | 00652134: '%s + %d %s' | 00652144: '%s + %s + %d Flips'

undefined4 Draw_HoverboardTrickHud(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar15;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char *__format;
  int iVar16;
  int iVar17;
  int iVar18;
  IconTableEntries *pIVar19;
  int *piVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong unaff_r29;
  longlong lVar24;
  ulonglong unaff_r30;
  uint uVar25;
  int iVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar27;
  double dVar28;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar21 = uVar11 - 0x1b0;
  puVar6 = (ulonglong *)lVar21;
  *puVar6 = uVar11;
  puVar6[0x38] = in_LR;
  puVar6[0x35] = in_f31;
  puVar6[0x34] = unaff_r31;
  puVar6[0x32] = unaff_r29;
  puVar6[0x27] = (ulonglong)*(byte *)(param_1 + 0x70);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  bVar1 = g_heroStateType != 0x16;
  puVar6[0x33] = unaff_r30;
  puVar6[0x31] = unaff_r28;
  puVar6[0x30] = unaff_r27;
  puVar6[0x2f] = unaff_r26;
  puVar6[0x2e] = unaff_r25;
  puVar6[0x2d] = unaff_r24;
  puVar6[0x2c] = unaff_r23;
  puVar6[0x2b] = unaff_r22;
  puVar6[0x2a] = unaff_r21;
  dVar28 = (double)((float)(longlong)puVar6[0x27] * 0.1);
  if (1.0 - (double)((float)(longlong)puVar6[0x27] * 0.1) < 0.0) {
    dVar28 = 1.0;
  }
  if (bVar1) {
    return uVar5;
  }
  if (*(char *)(param_1 + 0x72) == '\0') goto LAB_000d316c;
  snprintf((char *)(puVar6 + 0x17),"%d",DAT_00a1c7ec * 0x168);
  dVar27 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
  puVar6[0x27] = (longlong)DAT_00724428;
  bVar2 = *(byte *)(param_1 + 0x72);
  iVar15 = DAT_0072444c;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
LAB_000d2944:
      iVar15 = FastLerpColor
                         ((double)(float)(dVar27 / (double)(longlong)
                                                           (animationSpeed *
                                                           ((float)(longlong)puVar6[0x27] + 0.5))),
                          PTR_DAT_00724440,PTR_DAT_00724444);
    }
  }
  else if (bVar2 == 3) goto LAB_000d2944;
  uVar12 = FastDoubleToInt((double)(float)(dVar28 * 128.0));
  iVar17 = DAT_00a1c7f0;
  iVar16 = DAT_00a1c7ec;
  iVar26 = (int)((uVar12 & 0xffffffff) << 0x18);
  cVar3 = *(char *)(param_1 + 0x72);
  uVar25 = iVar15 + iVar26;
  if ((cVar3 == '\x01') || (cVar3 == '\x02')) {
    lVar21 = uVar11 - 0xf8;
    FontPrintLargeCenter(DAT_00724460 + 1,DAT_00724464 + 1,iVar26,lVar21,0xffffffffffffffff);
    FontPrintLargeCenter(DAT_00724460,DAT_00724464,uVar25,lVar21,0xffffffffffffffff);
    iVar15 = DAT_00a1c7f0;
    uVar13 = help_msg_string_by_index
                       ((int)(ZERO_MASK((1 - DAT_00a1c7f0))) + STR_POSES);
    snprintf((char *)lVar21,"x%d %s",iVar15,uVar13);
    FontPrintLargeCenter(DAT_00724468 + 1,DAT_0072446c + 1,iVar26,lVar21,0xffffffffffffffff);
    FontPrintLargeCenter(DAT_00724468,DAT_0072446c,uVar25,lVar21,0xffffffffffffffff);
    goto LAB_000d316c;
  }
  if (cVar3 != '\x03') goto LAB_000d316c;
  bVar1 = DAT_00a1c7f0 == 1;
  iVar15 = (int)uVar25 >> 0x18;
  if (DAT_00a1c7f0 == 3) {
    iVar26 = (int)(ZERO_MASK(DAT_00a1c7f8)) + 3;
    iVar26 = iVar26 + ((uint)(ZERO_MASK(DAT_00a1c7fc)) & 1U - iVar26);
    iVar26 = iVar26 + ((uint)(ZERO_MASK(DAT_00a1c800)) & -iVar26);
    if (-1 < iVar26) {
LAB_000d2b88:
      lVar21 = 0;
      if (DAT_00a1c7ec < 4) {
        if (1 < DAT_00a1c7ec) {
          lVar21 = 1;
        }
      }
      else {
        lVar21 = 2;
      }
      iVar26 = iVar26 + (int)lVar21 + (int)(lVar21 << 2);
      lVar24 = uVar11 - 0xf8;
      DAT_00a1c814 = *(int *)(&DAT_00724478 + iVar26 * 4) /
                     (int)(((uint)(ZERO_MASK((iVar26 - DAT_00a1c808))) & 1) + 1 +
                           ((uint)(ZERO_MASK((iVar26 - DAT_00a1c80c))) & 1) +
                          ((uint)(ZERO_MASK((iVar26 - DAT_00a1c810))) & 1));
      DAT_00a1c804 = iVar26;
      snprintf((char *)lVar24,"%d",DAT_00a1c814);
      iVar17 = DAT_00724474;
      iVar16 = DAT_00724470;
      lVar21 = (longlong)iVar15;
      iVar18 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar24,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar15 + -0x20,iVar17 + -0x20,(iVar16 - (iVar15 + -0x20)) * 2,0x20,lVar21);
      FontPrintLargeCenter(iVar16,iVar18,uVar25,lVar24,0xffffffffffffffff);
      uVar13 = help_msg_string_by_index(iVar26 + STR_CALL_ME_SALLY);
      snprintf((char *)lVar24,"%s",uVar13);
      iVar15 = DAT_00724474;
      lVar22 = (longlong)DAT_00724470;
      iVar26 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar24,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar26 + -0x20),iVar15 + -8,(int)(lVar22 - (iVar26 + -0x20)) * 2,
                      0x20,lVar21);
      FontPrintLargeCenter(lVar22,iVar15,uVar25,lVar24,0xffffffffffffffff);
      goto LAB_000d316c;
    }
  }
  else if (DAT_00a1c7f0 == 4) {
    iVar26 = 4;
    goto LAB_000d2b88;
  }
  if (0 < DAT_00a1c7f0) {
    iVar18 = 0;
    piVar20 = &DAT_00a1c7f4;
    iVar26 = 0;
    do {
      if (iVar17 <= iVar26) break;
      if (*piVar20 != 0) {
        *(int *)((int)lVar21 + 0x70) = iVar18;
        iVar26 = iVar26 + 1;
        lVar21 = lVar21 + 4;
      }
      iVar18 = iVar18 + 1;
      piVar20 = piVar20 + 1;
    } while (iVar18 < 4);
    if (bVar1) {
      DAT_00a1c814 = iVar16 * 10;
      lVar22 = uVar11 - 0xf8;
      snprintf((char *)lVar22,"%d",DAT_00a1c814);
      iVar26 = DAT_00724474;
      lVar21 = (longlong)iVar15;
      lVar24 = (longlong)DAT_00724470;
      iVar16 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar15 + -0x20),iVar26 + -0x20,(int)(lVar24 - (iVar15 + -0x20)) * 2
                      ,0x20,lVar21);
      FontPrintLargeCenter(lVar24,iVar16,uVar25,lVar22,0xffffffffffffffff);
      uVar13 = help_msg_string_by_index(*(int *)(puVar6 + 0xe) + STR_GONZO);
      iVar15 = DAT_00a1c7ec;
      uVar14 = help_msg_string_by_index
                         ((int)(ZERO_MASK((0x168 - DAT_00a1c7ec))) + STR_FLIPS);
      snprintf((char *)lVar22,"%s + %d %s",uVar13,iVar15,uVar14);
      iVar26 = DAT_00724474;
      iVar15 = DAT_00724470;
      iVar16 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,lVar21);
      FontPrintLargeCenter(iVar15,iVar26,uVar25,lVar22,0xffffffffffffffff);
    }
    else {
      DAT_00a1c814 = iVar16 * 0x14;
      lVar22 = uVar11 - 0xf8;
      snprintf((char *)lVar22,"%d",DAT_00a1c814);
      iVar26 = DAT_00724474;
      lVar21 = (longlong)iVar15;
      lVar24 = (longlong)DAT_00724470;
      iVar16 = DAT_00724474 + -0x18;
      lVar21 = lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21);
      iVar15 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + -0x17,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar15 + -0x20),iVar26 + -0x20,(int)(lVar24 - (iVar15 + -0x20)) * 2
                      ,0x20,lVar21);
      FontPrintLargeCenter(lVar24,iVar16,uVar25,lVar22,0xffffffffffffffff);
      uVar13 = help_msg_string_by_index(*(int *)(puVar6 + 0xe) + STR_GONZO);
      uVar14 = help_msg_string_by_index(*(int *)((int)puVar6 + 0x74) + STR_GONZO);
      snprintf((char *)lVar22,"%s + %s + %d Flips",uVar13,uVar14,DAT_00a1c7ec);
      iVar26 = DAT_00724474;
      iVar15 = DAT_00724470;
      iVar16 = FontPrintLargeCenter
                         (DAT_00724470 + 1,DAT_00724474 + 1,uVar25 & 0xff000000,lVar22,
                          0xffffffffffffffff);
      Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,lVar21);
      FontPrintLargeCenter(iVar15,iVar26,uVar25,lVar22,0xffffffffffffffff);
    }
  }
LAB_000d316c:
  iVar15 = *(int *)(param_1 + 0x50);
  iVar26 = *(int *)(param_1 + 0x54);
  uVar25 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  if (((uVar25 & 1) == 0) && ((uVar25 & 2) == 0)) {
    iVar26 = iVar26 + -0x20;
  }
  uVar12 = 0;
  lVar21 = (longlong)iVar15 +
           (ZERO_MASK((uVar25 & 4)) &
           (longlong)
           (int)(iVar15 + -0x100 +
                ((uint)(ZERO_MASK((uVar25 & 8))) &
                (iVar15 + -0x80) - (iVar15 + -0x100))) - (longlong)iVar15);
  uVar23 = 0;
  for (iVar15 = 0; sVar4 = *(short *)((int)&IconTableEntry->iconId + iVar15),
      sVar4 != 0x7558 && sVar4 != -1; iVar15 = iVar15 + 8) {
    uVar12 = uVar12 + 1;
  }
  iVar15 = (int)((uVar12 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar15) == -1) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar15)) {
      iVar16 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + 1;
    }
  }
  Hud_DrawEffectTexQuad
            (iVar16,(int)lVar21,iVar26,
             (*(int *)(param_1 + 0x74) * 0xdd) / *(int *)(param_1 + 8) + 0x1b,0x40,0x80);
  uVar12 = 0;
  for (pIVar19 = IconTableEntry; pIVar19->iconId != 0x7558 && pIVar19->iconId != 0xffff;
      pIVar19 = pIVar19 + 1) {
    uVar12 = uVar12 + 1;
  }
  iVar15 = (int)((uVar12 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar15) != -1) &&
     (*(short *)((int)&IconTableEntry->unknown + iVar15) != 0)) {
    uVar23 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15);
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar23 << 2)) * 0x24,lVar21,
             iVar26,0x100,0x40,0x80);
  bVar2 = DAT_0096a58e;
  fVar7 = animationSpeed;
  puVar6[0x27] = (longlong)(int)(animationSpeed * 120.5);
  iVar15 = worldUpdateTime;
  if (*(int *)((int)puVar6 + 0x13c) < (int)(uint)bVar2) {
    lVar21 = (longlong)(fVar7 * 60.5);
    puVar6[0x27] = (longlong)(int)(fVar7 * 60.5);
    dVar28 = (double)FastIntToDouble
                               (iVar15 - (iVar15 / *(int *)((int)puVar6 + 0x13c)) *
                                         *(int *)((int)puVar6 + 0x13c));
    fVar7 = (float)(dVar28 / (double)lVar21) * 6.28318 - 3.14159;
    fVar8 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar8 = fVar7;
    }
    fVar9 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
      fVar9 = fVar8;
    }
    fVar7 = fVar9 * fVar9;
    fVar8 = fVar7 * fVar7 * fVar9;
    fVar10 = fVar7 * fVar8;
    uVar12 = FastLerpColor
                       ((double)((fVar7 * fVar10 * 2.601887e-06 +
                                 fVar10 * -0.0001980741 +
                                 fVar8 * 0.0083330255 + fVar7 * fVar9 * -0.16666657 + fVar9) * 0.5 +
                                0.5),DAT_00724458,DAT_0072445c);
    lVar24 = uVar11 - 0x138;
    __format = (char *)help_msg_string_by_index(STR_WRONG_WAY_);
    snprintf((char *)lVar24,__format);
    iVar15 = DAT_00724454;
    iVar26 = DAT_00724450 + 1;
    iVar17 = DAT_00724454 + 1;
    iVar16 = FontPrintLargeCenter
                       (DAT_00724450 + 2,DAT_00724454 + 2,0xffffffff80000000,lVar24,
                        0xffffffffffffffff);
    Hud_DrawTextBox((longlong)(iVar16 + -0x20),iVar15 + -7,
                    (int)((longlong)iVar26 - (longlong)(iVar16 + -0x20)) * 2,0x20,0xffffffffffffff80
                   );
    FontPrintLargeCenter((longlong)iVar26,iVar17,0xffffffff80000000,lVar24,0xffffffffffffffff)
    ;
    iVar26 = DAT_00724454;
    iVar15 = DAT_00724450;
    lVar21 = (longlong)((int)uVar12 >> 0x18);
    iVar16 = FontPrintLargeCenter
                       (DAT_00724450 + 1,DAT_00724454 + 1,uVar12 & 0xff000000,lVar24,
                        0xffffffffffffffff);
    Hud_DrawTextBox(iVar16 + -0x20,iVar26 + -8,(iVar15 - (iVar16 + -0x20)) * 2,0x20,
                    lVar21 + (0x50 - lVar21 >> 0x3f & 0x50U - lVar21));
    FontPrintLargeCenter(iVar15,iVar26,uVar12,lVar24,0xffffffffffffffff);
  }
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00d3610 (0x6f8 bytes)
// strings: 007244bc: '?333_q333' (raw) | 007244c0: '?333' (raw)

undefined4 Draw_MobyHealthBarHud(int param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  IconTableEntries *pIVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar18 = DAT_007244b4;
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  lVar16 = 3;
  lVar11 = (ZERO_MASK(Cutscene) & 8U) + 10;
  lVar13 = (longlong)((g_ScreenHeight - (int)lVar11) + -0x20);
  if ((Level == Umbris) || (Level == Gemlik)) {
    lVar16 = 6;
  }
  uVar17 = lVar16 + (ZERO_MASK((0x12 - Level)) & 7U - lVar16);
  if (*(char *)(param_1 + 0x70) != '\0') {
    lVar13 = lVar13 + (ZERO_MASK((0xd - Level)) & lVar11 - lVar13);
    dVar19 = (double)FastIntToDouble(*(char *)(param_1 + 0x70));
    dVar21 = 1.0;
    dVar20 = (double)(float)(dVar19 * 0.125);
    dVar19 = dVar21;
    if ((dVar20 <= 1.0) && (dVar19 = dVar20, dVar20 < 0.0)) {
      dVar19 = 0.0;
    }
    dVar19 = (double)(float)(dVar19 * 128.0);
    uVar3 = FastDoubleToInt(dVar19);
    uVar4 = FastDoubleToInt(dVar19);
    iVar6 = 0;
    iVar18 = iVar18 - (int)((uVar17 & 0xffffffff) << 4);
    iVar7 = (int)uVar17;
    uVar15 = 0;
    iVar2 = (int)lVar13;
    if (0 < iVar7) {
      iVar14 = iVar18;
      do {
        uVar9 = 0;
        for (iVar10 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar10),
            sVar1 != 0x7562 && sVar1 != -1; iVar10 = iVar10 + 8) {
          uVar9 = uVar9 + 1;
        }
        iVar10 = (int)((uVar9 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (3 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
            lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 3;
          }
        }
        Hud_DrawTexQuad(lVar11,iVar14,iVar2 + 6,0x20,0x12,uVar3);
        iVar6 = iVar6 + 1;
        iVar14 = iVar14 + 0x20;
      } while (iVar6 < iVar7);
    }
    iVar6 = 0;
    uVar5 = 0xffffffff800000ff;
    if (*(int *)(param_1 + 0x74) != 0) {
      dVar19 = (double)FastIntToDouble(*(undefined4 *)(param_1 + 8));
      dVar22 = (double)(float)((double)(longlong)*(int *)(param_1 + 0x74) / dVar19);
      dVar19 = (double)FastIntToDouble(uVar17);
      dVar19 = (double)(float)(dVar21 / dVar19);
      dVar20 = (double)(float)((double)(longlong)(iVar7 + -1) * dVar19);
      if (dVar22 <= dVar20) {
        if (dVar22 < dVar19) {
          dVar22 = (double)(float)((double)DAT_007244c0 * (double)(float)(dVar22 - dVar19) + dVar19)
          ;
        }
      }
      else {
        dVar22 = (double)(float)((double)DAT_007244bc * (double)(float)(dVar22 - dVar20) + dVar20);
      }
      iVar6 = FastDoubleToInt
                        ((double)(float)((double)(longlong)(int)((uVar17 & 0xffffffff) << 5) *
                                        dVar22));
      if (dVar22 <= 0.5) {
        uVar5 = FastLerpColor
                          ((double)(float)(dVar22 * 2.0),0xffffffff800000ff,0xffffffff8000ffff);
      }
      else {
        uVar5 = FastLerpColor
                          ((double)(float)((double)(float)(dVar22 * 2.0) - dVar21),
                           0xffffffff8000ffff,0xffffffff8000ff00);
      }
    }
    DrawFlatOverlay(iVar18,iVar2 + 8,iVar6 + iVar18,iVar2 + 0x1a,uVar5,0);
    iVar14 = 0;
    iVar6 = iVar18;
    if (0 < iVar7 + -1) {
      do {
        uVar17 = 0;
        for (iVar10 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar10),
            sVar1 != 0x7562 && sVar1 != -1; iVar10 = iVar10 + 8) {
          uVar17 = uVar17 + 1;
        }
        iVar10 = (int)((uVar17 & 0x1fffffff) << 3);
        if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
            lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
          }
        }
        Hud_DrawTexHeaderQuad
                  (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,
                   iVar6,lVar13,0x20,0x20,uVar4);
        iVar14 = iVar14 + 1;
        iVar6 = iVar6 + 0x20;
      } while (iVar14 < iVar7 + -1);
    }
    uVar17 = 0;
    for (iVar7 = 0; sVar1 = *(short *)((int)&IconTableEntry->iconId + iVar7),
        sVar1 != 0x7562 && sVar1 != -1; iVar7 = iVar7 + 8) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
        lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 2;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,iVar6,
               lVar13,0x20,0x20,uVar4);
    uVar17 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7562 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      if (4 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
        lVar11 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 4;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar11 << 2)) * 0x24,
               iVar18 + -0x28,iVar2 + -8,0x30,0x30,uVar3);
    uVar17 = 0;
    for (pIVar12 = IconTableEntry; pIVar12->iconId != 0x7562 && pIVar12->iconId != 0xffff;
        pIVar12 = pIVar12 + 1) {
      uVar17 = uVar17 + 1;
    }
    iVar7 = (int)((uVar17 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
       (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0)) {
      uVar15 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar15 << 2)) * 0x24,
               iVar18 + -0x28,iVar2 + -8,0x30,0x30,uVar3);
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}


// 0x00d3d10 (0xd4 bytes)
void MetalDetectorHud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  iVar2 = (int)param_1;
  if (g_MetalDetectorSpotIsClose == '\0') {
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    if (*(char *)(iVar2 + 0x71) == '\0') {
      if (*(char *)(iVar2 + 0x70) == '\0') {
        *(undefined4 *)(iVar2 + 0x6c) = 0xfffffffa;
      }
      else {
        *(char *)(iVar2 + 0x70) = *(char *)(iVar2 + 0x70) + -1;
      }
    }
    else {
      *(char *)(iVar2 + 0x71) = *(char *)(iVar2 + 0x71) + -1;
    }
  }
  else {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_r0,0xd3d08);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar2 + 0x7cU & 0xfffffffc) = uVar1;
    if ((int)(uint)*(byte *)(iVar2 + 0x70) < DAT_00724390) {
      *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) + 1;
    }
    else if ((int)(uint)*(byte *)(iVar2 + 0x71) < DAT_00724390) {
      *(byte *)(iVar2 + 0x71) = *(byte *)(iVar2 + 0x71) + 1;
    }
  }
  return;
}


// 0x00d3e20 (0x6c4 bytes)
// strings: 00652158: '!'

undefined4 Draw_MetalDetectorHud(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar9;
  ulonglong uVar7;
  int iVar10;
  longlong lVar8;
  int iVar11;
  undefined4 uVar12;
  IconTableEntries *pIVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  char acStack_90 [32];
  
  iVar11 = *(int *)(param_1 + 0x50);
  iVar16 = (g_ScreenHeight - (((uint)(ZERO_MASK(Cutscene)) & 8) + 10)) +
           -0x20;
  if ((g_heroType == '\x02') || (g_heroState == TURRET_PLANE_UI)) {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else if (*(char *)(param_1 + 0x70) == '\0') {
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    dVar17 = (double)FastIntToDouble();
    dVar18 = (double)FastIntToDouble(DAT_00724390);
    dVar20 = (double)(float)(dVar17 / dVar18);
    dVar17 = 1.0;
    dVar18 = dVar17;
    if ((dVar20 <= 1.0) && (dVar18 = dVar20, dVar20 < 0.0)) {
      dVar18 = 0.0;
    }
    dVar20 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar19 = (double)FastIntToDouble(DAT_00724390);
    dVar20 = (double)(float)(dVar20 / dVar19);
    if ((dVar20 <= dVar17) && (dVar17 = dVar20, dVar20 < 0.0)) {
      dVar17 = 0.0;
    }
    uVar5 = FastDoubleToInt((double)(float)(dVar17 * 128.0));
    uVar6 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007244c4 * dVar18));
    iVar15 = DAT_007244cc + iVar11;
    iVar9 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007244c8 * dVar18));
    uVar7 = 0;
    iVar14 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar10 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar10)) {
        lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 1;
      }
    }
    Hud_DrawTexQuad(lVar8,iVar15 + 0x10,iVar16,0x20,0x20,uVar6);
    uVar7 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar10 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar10) == -1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar10) != 0) {
        uVar7 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10);
      }
    }
    iVar15 = iVar15 - iVar9;
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar7 << 2)) * 0x24,iVar15,
               iVar16,iVar9 + 0x10,0x20,uVar6);
    uVar7 = 0;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x7580 && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar9 = (int)((uVar7 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar9) == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar9)) {
        lVar8 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar9) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar8 << 2)) * 0x24,
               iVar15 + -0x20,iVar16,0x20,0x20,uVar6);
    uVar7 = 0;
    iVar9 = worldUpdateTime % 0x3c >> 1;
    for (pIVar13 = IconTableEntry; pIVar13->iconId != 0x754f && pIVar13->iconId != 0xffff;
        pIVar13 = pIVar13 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar15 = (int)((uVar7 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar15) != -1) &&
       (iVar9 < (int)(uint)*(ushort *)((int)&IconTableEntry->unknown + iVar15))) {
      iVar14 = (uint)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar15) + iVar9;
    }
    HudEntry_DrawIcon(param_1,iVar14,iVar11 + -0x20,iVar16,0,uVar5);
    snprintf(acStack_90,"!");
    iVar11 = DAT_007244d0 + iVar11;
    iVar16 = DAT_007244d4 + iVar16;
    iVar9 = (int)(animationSpeed * ((float)(longlong)DAT_007244e0 + 0.5));
    dVar18 = (double)FastIntToDouble(iVar9);
    fVar1 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar9) * iVar9) / dVar18
                   ) * 6.28318 - 3.14159;
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    dVar18 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                      fVar4 * -0.0001980741 +
                      fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 4.0 - 3.0);
    if (dVar18 - 0.0 < 0.0) {
      dVar18 = 0.0;
    }
    dVar17 = (double)(float)(dVar17 * dVar18);
    uVar5 = FastLerpColor(dVar17,0,0xffffffff80000000);
    uVar6 = FastLerpColor(dVar17,DAT_007244d8,DAT_007244dc);
    FontPrintLarge(iVar11 + 1,iVar16 + 1,uVar5,acStack_90,0xffffffffffffffff);
    FontPrintLarge(iVar11,iVar16,uVar6,acStack_90,0xffffffffffffffff);
    uVar12 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar12;
}


// 0x00d44e4 (0x344 bytes)
undefined4 Draw_GiantClankHealthHUD(int param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int tex;
  IconTableEntries *pIVar4;
  longlong lVar5;
  int local_30;
  int local_2c;
  
  local_30 = *(int *)(param_1 + 0x50);
  local_2c = *(int *)(param_1 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  if (((uVar1 & 1) == 0) && ((uVar1 & 2) == 0)) {
    local_2c = local_2c + -0x20;
  }
  if ((uVar1 & 4) == 0) {
    local_30 = local_30 - (((uint)(ZERO_MASK((uVar1 & 8))) & 0xffffff80) + 0x100);
  }
  HudEntry_GetSlideOffset(param_1,&local_30,&local_2c,*(undefined4 *)(param_1 + 0x6c),0);
  uVar3 = 0;
  lVar5 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) {
    tex = 0;
  }
  else {
    tex = 0;
    if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar2)) {
      tex = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + 1;
    }
  }
  Hud_DrawEffectTexQuad
            (tex,local_30,local_2c,(*(int *)(param_1 + 0x74) * 0xdd) / *(int *)(param_1 + 8) + 0x1b,
             0x40,0x80);
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if (*(short *)((int)&IconTableEntry->iconId + iVar2) == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(short *)((int)&IconTableEntry->unknown + iVar2) != 0) {
      uVar3 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2);
    }
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar3 << 2)) * 0x24,local_30,
             local_2c,0x100,0x40,0x80);
  uVar3 = 0;
  for (pIVar4 = IconTableEntry; pIVar4->iconId != 0x7558 && pIVar4->iconId != 0xffff;
      pIVar4 = pIVar4 + 1) {
    uVar3 = uVar3 + 1;
  }
  iVar2 = (int)((uVar3 & 0x1fffffff) << 3);
  if ((*(short *)((int)&IconTableEntry->iconId + iVar2) != -1) &&
     (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar2))) {
    lVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar2) + 2;
  }
  Hud_DrawTexHeaderQuad
            (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar5 << 2)) * 0x24,local_30,
             local_2c,0x20,0x20,
             (ZERO_MASK((uint)DAT_0096b316) & 0xffffffffffffff80U) + 0x80);
  return *(undefined4 *)(param_1 + 0x58);
}


// 0x00d4838 (0x5c8 bytes)
// strings: 00652110: '%d/%d'

uint Draw_AmmoCounter(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  longlong lVar6;
  uint uVar9;
  IconTableEntries *pIVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char acStack_a0 [40];
  
  uVar1 = param_1[0x14];
  uVar9 = param_1[0x16];
  lVar11 = (ZERO_MASK(Cutscene) & 8U) + 10;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    dVar12 = (double)FastIntToDouble(*(char *)(param_1 + 0x1c),uVar9);
    dVar13 = (double)FastIntToDouble(DAT_007244e4);
    dVar15 = (double)(float)(dVar12 / dVar13);
    dVar12 = 1.0;
    dVar13 = dVar12;
    if ((dVar15 <= 1.0) && (dVar13 = dVar15, dVar15 < 0.0)) {
      dVar13 = 0.0;
    }
    dVar15 = (double)FastIntToDouble(*(undefined1 *)((int)param_1 + 0x71));
    dVar14 = (double)FastIntToDouble(DAT_007244e8);
    dVar15 = (double)(float)(dVar15 / dVar14);
    if ((dVar15 <= dVar12) && (dVar12 = dVar15, dVar15 < 0.0)) {
      dVar12 = 0.0;
    }
    uVar3 = FastDoubleToInt((double)(float)(dVar13 * 128.0));
    uVar4 = FastDoubleToInt((double)((float)(longlong)(int)uVar3 * 0.7));
    iVar2 = DAT_007244f0;
    if ((int)param_1[2] < 100) {
      iVar2 = DAT_007244ec;
    }
    iVar7 = FastDoubleToInt((double)(float)((double)(longlong)iVar2 * dVar13));
    uVar5 = 0;
    uVar9 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
        lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar6 << 2)) * 0x24,
               uVar1 - 0x1c,lVar11,0x20,0x20,uVar4);
    uVar5 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (*(short *)((int)&IconTableEntry->unknown + iVar8) != 0) {
        uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8);
      }
    }
    Hud_DrawTexHeaderQuad
              (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,uVar1 + 4
               ,lVar11,uVar1 + iVar7,0x20,uVar4);
    uVar5 = 0;
    for (pIVar10 = IconTableEntry; pIVar10->iconId != 0x7580 && pIVar10->iconId != 0xffff;
        pIVar10 = pIVar10 + 1) {
      uVar5 = uVar5 + 1;
    }
    iVar8 = (int)((uVar5 & 0x1fffffff) << 3);
    if (*(short *)((int)&IconTableEntry->iconId + iVar8) == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar8)) {
        lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar8) + 1;
      }
    }
    Hud_DrawTexQuad(lVar6,uVar1 + iVar7 + uVar1 + 4,lVar11,0x20,0x20,uVar4);
    uVar5 = 0;
    pIVar10 = IconTableEntry;
    while ((uint)pIVar10->iconId != *param_1 && pIVar10->iconId != 0xffff) {
      pIVar10 = pIVar10 + 1;
      uVar5 = uVar5 + 1;
    }
    iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
    if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
       (3 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
      uVar9 = *(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 3;
    }
    param_1[0x11] = uVar9;
    HudEntry_DrawIcon(param_1,uVar9,uVar1,lVar11,0,uVar3);
    uVar9 = param_1[0x1d];
    snprintf(acStack_a0,"%d/%d",uVar9,param_1[2]);
    if (uVar9 == 0) {
      uVar3 = FastLerpColor(dVar12,DAT_007244fc,DAT_00724500);
    }
    else {
      uVar3 = FastLerpColor(dVar12,PTR_DAT_007244f4,DAT_007244f8);
    }
    uVar4 = FastLerpColor(dVar12,0,0xffffffff80000000);
    FontPrintMediumRight
              (DAT_00724504 + uVar1 + iVar2 + 1,DAT_00724508 + (int)lVar11 + 1,uVar4,acStack_a0,
               0xffffffffffffffff);
    FontPrintMediumRight
              (DAT_00724504 + uVar1 + iVar2,DAT_00724508 + (int)lVar11,uVar3,acStack_a0,
               0xffffffffffffffff);
    uVar9 = param_1[0x16];
  }
  return uVar9;
}


// 0x00d4e08 (0xd4 bytes)
void MobyCounterHud_Init(int param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x7c) < (int)(animationSpeed * 5.5)) {
    cVar1 = *(char *)(param_1 + 0x71);
    cVar2 = *(char *)(param_1 + 0x70);
    if ((cVar1 != '\0') || (cVar2 != '\0')) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        *(char *)(param_1 + 0x70) = cVar2 + -1;
      }
    }
    else {
      *(char *)(param_1 + 0x71) = cVar1 + -1;
    }
  }
  else if ((int)(uint)*(byte *)(param_1 + 0x70) < (int)(animationSpeed * 8.5)) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) + 1;
  }
  else if ((int)(uint)*(byte *)(param_1 + 0x71) < (int)(animationSpeed * 8.5)) {
    *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) + 1;
  }
  *(undefined4 *)(param_1 + 0x74) = **(undefined4 **)(param_1 + 0xc);
  return;
}


// 0x00d4ef0 (0x7e4 bytes)
// strings: 000d4ee8: '?333`'

undefined4 Draw_MobyCounterHud(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar8;
  IconTableEntries *pIVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char acStack_a0 [40];
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  else {
    iVar12 = *(int *)(param_1 + 0x58);
    bVar1 = 0x100 < (int)(*(int *)(param_1 + 0x50) +
                         ((uint)(ZERO_MASK((*(uint *)(param_1 + 0x60) & 4))) &
                         -(iVar12 + ((uint)(ZERO_MASK((*(uint *)(param_1 + 0x60) & 8))) & (iVar12 >> 1) - iVar12))));
    iVar12 = DAT_0072450c;
    if (bVar1) {
      iVar12 = DAT_00724510;
    }
    iVar2 = -(((uint)(ZERO_MASK(Cutscene)) & 8) + 10);
    iVar13 = iVar2 + 0x180;
    dVar14 = (double)FastIntToDouble();
    dVar15 = (double)FastIntToDouble(DAT_007244e4);
    dVar17 = (double)(float)(dVar14 / dVar15);
    dVar14 = 1.0;
    dVar15 = dVar14;
    if ((dVar17 <= 1.0) && (dVar15 = dVar17, dVar17 < 0.0)) {
      dVar15 = 0.0;
    }
    dVar17 = (double)FastIntToDouble(*(undefined1 *)(param_1 + 0x71));
    dVar16 = (double)FastIntToDouble(DAT_007244e8);
    dVar17 = (double)(float)(dVar17 / dVar16);
    if ((dVar17 <= dVar14) && (dVar14 = dVar17, dVar17 < 0.0)) {
      dVar14 = 0.0;
    }
    snprintf(acStack_a0,"%d",*(undefined4 *)(param_1 + 0x74));
    iVar7 = FastDoubleToInt((double)(float)(dVar15 * 128.0));
    uVar3 = FastDoubleToInt((double)((float)(longlong)iVar7 * 0.7));
    iVar7 = DAT_00724520;
    if (9 < *(int *)(param_1 + 8)) {
      iVar7 = DAT_00724524;
    }
    iVar11 = iVar12 + 4;
    uVar4 = FastDoubleToInt((double)(float)((double)(longlong)iVar7 * dVar15));
    if (bVar1) {
      uVar5 = 0;
      lVar10 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
          lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
        }
      }
      Hud_DrawTexQuad(lVar6,iVar11,iVar13,0x20,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0) {
          uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
        }
      }
      iVar11 = iVar11 - (int)uVar4;
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,iVar11,
                 iVar13,uVar4,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
         (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
        lVar10 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar10 << 2)) * 0x24,
                 iVar11 + -0x20,iVar13,0x20,0x20,uVar3);
    }
    else {
      uVar5 = 0;
      lVar10 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7)) {
          lVar6 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
        }
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar6 << 2)) * 0x24,
                 iVar12 + -0x1c,iVar13,0x20,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if (*(short *)((int)&IconTableEntry->iconId + iVar7) == -1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (*(short *)((int)&IconTableEntry->unknown + iVar7) != 0) {
          uVar5 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7);
        }
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(uVar5 << 2)) * 0x24,iVar11,
                 iVar13,uVar4,0x20,uVar3);
      uVar5 = 0;
      for (pIVar9 = IconTableEntry; pIVar9->iconId != 0x7580 && pIVar9->iconId != 0xffff;
          pIVar9 = pIVar9 + 1) {
        uVar5 = uVar5 + 1;
      }
      iVar7 = (int)((uVar5 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar7) != -1) &&
         (1 < *(ushort *)((int)&IconTableEntry->unknown + iVar7))) {
        lVar10 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar7) + 1;
      }
      Hud_DrawTexQuad(lVar10,(int)uVar4 + iVar11,iVar13,0x20,0x20,uVar3);
    }
    if (bVar1) {
      HudEntry_DrawIcon(param_1,*(undefined4 *)(param_1 + 0x44),iVar12 + -0x16,iVar13,0,0x80);
    }
    else {
      HudEntry_DrawIcon(param_1,*(undefined4 *)(param_1 + 0x44),iVar12,iVar13,0,0x80);
    }
    uVar3 = FastLerpColor(dVar14,PTR_DAT_00724518,DAT_0072451c);
    uVar4 = FastLerpColor(dVar14,0,0xffffffff80000000);
    if (bVar1) {
      FontPrintMediumRight(iVar12 + -0x19,iVar2 + 0x189,uVar4,acStack_a0,0xffffffffffffffff);
      FontPrintMediumRight(iVar12 + -0x1a,iVar2 + 0x188,uVar3,acStack_a0,0xffffffffffffffff);
    }
    else {
      FontPrintMediumRight(iVar12 + 0x43,iVar2 + 0x189,uVar4,acStack_a0,0xffffffffffffffff);
      FontPrintMediumRight(iVar12 + 0x42,iVar2 + 0x188,uVar3,acStack_a0,0xffffffffffffffff);
    }
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}


// 0x00d56d8 (0x3c8 bytes)
int UpdateAllGameplayHUD(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  HudElement *pHVar9;
  int iVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar14;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0x50;
  puVar3 = (undefined4 *)lVar2;
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  if (g_HudHideCounter == 0) {
    uVar4 = (ulonglong)g_CurrentWeapon +
            (ZERO_MASK((uint)(ushort)(&DAT_00737d38)[g_CurrentWeapon * 0xc]) &
            -(ulonglong)g_CurrentWeapon);
    iVar6 = (int)uVar4;
    if ((g_heroType == '\0') && (iVar6 != 0)) {
      DAT_0072452c = iVar6;
      g_HudAmmoEntryId =
           RegisterHUDCallback(0x10,iVar6 + 60000,&PTR_AmmoHud_Init_00705808,
                               &PTR_AmmoHud_Update_007058d8,&PTR_Draw_AmmoCounter_00705888,
                               (int *)((int)&currentAmmoArray.field0_0x0 +
                                      (int)((uVar4 & 0xffffffff) << 2)),
                               (uint)(ushort)(&DAT_00737d3e)[iVar6 * 0xc]);
    }
    else if (g_heroType == '\x02') {
      if (g_HudAmmoEntryId != -1) {
        lVar5 = 0;
        piVar8 = (int *)&HudEntries[0].field_0x64;
        do {
          if (*piVar8 == g_HudAmmoEntryId) break;
          lVar5 = lVar5 + 1;
          piVar8 = piVar8 + 0x24;
        } while ((int)lVar5 < 0xd);
        if ((int)lVar5 < 0xd) {
          iVar6 = (int)(lVar5 << 7) + (int)(lVar5 << 4);
          *(undefined4 *)((int)&HudEntries[0].regValue + iVar6) = 0;
          if (*(int *)((int)&HudEntries[0].locked + iVar6) == 0) {
            *(undefined4 *)((int)&HudEntries[0].value + iVar6) = 0;
          }
        }
        g_HudAmmoEntryId = -1;
      }
      iVar6 = RegisterHUDCallback(0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                                  &PTR_HudEntry_UpdateCounter_007056c8,
                                  &PTR_Draw_GiantClankHealthHUD_00705880,&g_GiantClankHealth,200);
      DAT_0096b314 = (undefined2)iVar6;
    }
    else if (g_HudAmmoEntryId != -1) {
      lVar5 = 0;
      piVar8 = (int *)&HudEntries[0].field_0x64;
      do {
        if (*piVar8 == g_HudAmmoEntryId) break;
        lVar5 = lVar5 + 1;
        piVar8 = piVar8 + 0x24;
      } while ((int)lVar5 < 0xd);
      if ((int)lVar5 < 0xd) {
        iVar6 = (int)(lVar5 << 7) + (int)(lVar5 << 4);
        *(undefined4 *)((int)&HudEntries[0].regValue + iVar6) = 0;
        if (*(int *)((int)&HudEntries[0].locked + iVar6) == 0) {
          *(undefined4 *)((int)&HudEntries[0].value + iVar6) = 0;
        }
      }
      g_HudAmmoEntryId = -1;
    }
  }
  iVar6 = 0;
  pHVar9 = HudEntries;
  iVar10 = 0;
  auVar14 = loadVectorLeftIndexed(lVar2,0xd56d4);
  dVar11 = 10.5;
  lVar2 = 0x723b8c;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    if ((pHVar9->value & 0x10U) != 0 || DAT_00a1bfc4 != 0) {
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      if (pHVar9->showTimer < (int)((double)animationSpeed * dVar11)) {
        auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar1 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0,lVar2);
        *(undefined4 *)lVar2 = uVar1;
      }
    }
    iVar7 = pHVar9->showTimer;
    if (0 < iVar7) {
      iVar7 = iVar7 + -1;
      pHVar9->showTimer = iVar7;
    }
    if (iVar7 < 1) {
      iVar7 = pHVar9->id;
      if (-6 < iVar7) {
        iVar7 = iVar7 + -1;
        pHVar9->id = iVar7;
      }
    }
    else {
      iVar7 = pHVar9->id;
      iVar10 = iVar10 + 1;
      if (iVar7 < 0x1e) {
        iVar7 = iVar7 + 1;
        pHVar9->id = iVar7;
      }
    }
    if (iVar7 == -6 && pHVar9->locked != 0) {
      HudEntry_Reset(pHVar9);
    }
    if (param_1 != 0) {
      if ((undefined4 *)pHVar9->updateCb != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
        (**pHVar9->updateCb)(pHVar9);
      }
    }
    iVar6 = iVar6 + 1;
    lVar2 = lVar2 + 0x90;
    pHVar9 = pHVar9 + 1;
  } while (iVar6 < 0xd);
  return iVar10;
}


// 0x00d5aa0 (0x98 bytes)
void Hud_ClearAmmoEntry(void)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  if (g_HudAmmoEntryId != -1) {
    lVar1 = 0;
    piVar3 = (int *)&HudEntries[0].field_0x64;
    do {
      if (*piVar3 == g_HudAmmoEntryId) break;
      lVar1 = lVar1 + 1;
      piVar3 = piVar3 + 0x24;
    } while ((int)lVar1 < 0xd);
    if ((int)lVar1 < 0xd) {
      iVar2 = (int)(lVar1 << 7) + (int)(lVar1 << 4);
      *(undefined4 *)((int)&HudEntries[0].regValue + iVar2) = 0;
      if (*(int *)((int)&HudEntries[0].locked + iVar2) == 0) {
        *(undefined4 *)((int)&HudEntries[0].value + iVar2) = 0;
      }
    }
    g_HudAmmoEntryId = -1;
  }
  DAT_0072452c = 0;
  g_HudHideCounter = g_HudHideCounter + 1;
  return;
}


// 0x00d5b38 (0xc0 bytes)
void Hud_ResetAllEntriesHidden(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    RegisterHUDCallback(uVar1,0xffff,(void *)0x0,(void *)0x0,(void *)0x0,(int *)0x0,1);
    HudEntries[uVar1].showTimer = 0;
    HudEntries[uVar1].id = -6;
    HudEntry_Reset(HudEntries + uVar1);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xd);
  g_HudHideCounter = 1;
  g_HudAmmoEntryId = -1;
  DAT_0072452c = 0;
  return;
}


// 0x00d5bf8 (0x20 bytes)
void Hud_DecHideCounter(void)

{
  if (g_HudHideCounter != 0) {
    g_HudHideCounter = g_HudHideCounter + -1;
  }
  return;
}


// 0x00d5c20 (0x330 bytes)
void DrawGameplayHud(void)

{
  int iVar1;
  int iVar2;
  int iter;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  void **callback;
  HudElement *arg;
  
  if (DAT_00a1bfe8 == 0 && LetterBoxOn == 0) {
    arg = HudEntries;
    callback = &HudEntries[0].drawCb;
    DAT_00a1bfcc = 0xfffff0;
    iter = 0;
    do {
      if ((undefined4 *)*callback != (undefined4 *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* run HUD render cb */
        (***callback)(arg);
      }
      iVar1 = DAT_00a15c88;
      iter = iter + 1;
      callback = callback + 0x24;
      arg = arg + 1;
    } while (iter < 0xd);
    if ((DAT_00a15c84 == 0 && g_toastMsgTimer == 0) || (g_gameMode != GAME_MODE_NORMAL)) {
      DAT_00a15c88 = 100;
    }
    else {
      if (g_toastMsgTimer == 0) {
        lVar3 = (ulonglong)DAT_00a15c84 - (longlong)(0x80 / (int)(animationSpeed * 8.5));
        uVar4 = lVar3 + ((longlong)(int)lVar3 >> 0x3f & -lVar3);
      }
      else {
        lVar3 = (ulonglong)DAT_00a15c84 + (longlong)(0x80 / (int)(animationSpeed * 8.5));
        uVar4 = lVar3 + (0x80 - (longlong)(int)lVar3 >> 0x3f & 0x80U - lVar3);
      }
                    /* shows ammo toast message when collecting ammo */
      iter = (int)((uVar4 & 0xffffffff) << 0x18);
      DAT_00a15c84 = (uint)uVar4;
      iVar5 = iter + 0xf0f0f0;
      lVar3 = (longlong)(iVar5 >> 0x18);
      lVar3 = lVar3 + (0x50 - lVar3 >> 0x3f & 0x50U - lVar3);
      iVar2 = FontPrintLargeCenter
                        (0x101,DAT_00a15c88 + 1,iter,&g_toastMsgBuff,0xffffffffffffffff);
      Hud_DrawTextBox((longlong)(iVar2 + -0x20),iVar1 + -8,
                      (int)(0x100 - (longlong)(iVar2 + -0x20)) * 2,0x20,lVar3);
      FontPrintLargeCenter(0x100,iVar1,iVar5,&g_toastMsgBuff,0xffffffffffffffff);
      iVar1 = DAT_00a15c88;
      if ((DAT_00a15cdc != '\0') && (1000 < g_toastMsgTimer)) {
        iter = FontPrintLargeCenter
                         (0x101,DAT_00a15c88 + 1,iter,&DAT_00a15cdc,0xffffffffffffffff);
        Hud_DrawTextBox((longlong)(iter + -0x20),iVar1 + -8,
                        (int)(0x100 - (longlong)(iter + -0x20)) * 2,0x20,lVar3);
        FontPrintLargeCenter(0x100,iVar1,iVar5,&DAT_00a15cdc,0xffffffffffffffff);
      }
      if (g_toastMsgTimer != 0) {
        g_toastMsgTimer = g_toastMsgTimer + -1;
      }
      if (g_toastMsgTimer == 1000) {
        g_toastMsgTimer = 0;
      }
    }
  }
  else {
    DAT_00a1bfe8 = 0;
  }
  return;
}


// 0x00d5f58 (0x64 bytes)
void RaceHud_Init(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar3 = loadVectorLeftIndexed(in_r0,0xd5f50);
  auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  auVar4 = loadVectorLeftIndexed(4,0xd5f50);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar3 = ZEXT416((uint)(auVar3.piece<0,4>() + auVar4.piece<0,4>())) & (GPiece<16>)0xffffffff;
  iVar2 = (int)param_1;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
  *(undefined4 *)(iVar2 + 0x7cU & 0xfffffffc) = uVar1;
  *(undefined4 *)(iVar2 + 0x58) = 0x80;
  *(undefined4 *)(iVar2 + 0x5c) = 0x80;
  *(undefined2 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x4a) = 0;
  return;
}


// 0x00d5fc0 (0x5c bytes)
void RaceHud_Update(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 in_r0;
  undefined4 uVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  
  uVar2 = 0xfffffffa;
  if (g_heroStateType == 0x16) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(in_r0,0xd5fbc);
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = 5;
    auVar3 = vectorMultiplyAddFloatingPoint
                       (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x7c,param_1);
    *(undefined4 *)((int)param_1 + 0x7cU & 0xfffffffc) = uVar1;
  }
  *(undefined4 *)((int)param_1 + 0x6c) = uVar2;
  return;
}


// 0x00d6020 (0x128 bytes)
void AmmoHud_Update(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 in_r0;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  iVar5 = (int)param_1;
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  iVar3 = **(int **)(iVar5 + 0xc);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  iVar6 = iVar3 + (iVar3 >> 0x1f & -iVar3);
  *(uint *)(iVar5 + 0x74) =
       iVar6 + ((uint)((longlong)*(int *)(iVar5 + 8) - (longlong)iVar3 >> 0x3f) &
               *(int *)(iVar5 + 8) - iVar6);
  auVar7 = loadVectorLeftIndexed(in_r0,0xd601c);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  bVar1 = *(byte *)(iVar5 + 0x70);
  bVar2 = *(byte *)(iVar5 + 0x71);
  auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
  auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
  if (*(int *)(iVar5 + 0x7c) < (int)(animationSpeed * 5.5)) {
    *(undefined4 *)(iVar5 + 0x6c) = 1;
    if (bVar2 == 0) {
      if (bVar1 == 0) {
        *(undefined4 *)(iVar5 + 0x6c) = 0xfffffffa;
      }
      else {
        *(byte *)(iVar5 + 0x70) = bVar1 - 1;
      }
    }
    else {
      *(byte *)(iVar5 + 0x71) = bVar2 - 1;
    }
  }
  else {
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x7c,param_1);
    *(undefined4 *)(iVar5 + 0x7cU & 0xfffffffc) = uVar4;
    if ((int)(uint)bVar1 < DAT_007244e4) {
      *(byte *)(iVar5 + 0x70) = bVar1 + 1;
    }
    else if ((int)(uint)bVar2 < DAT_007244e8) {
      *(byte *)(iVar5 + 0x71) = bVar2 + 1;
    }
  }
  return;
}


// 0x00d6148 (0x5c8 bytes)
// strings: 0065215c: '%s: ' | 00652164: ' %d/3' | 0065216c: ' %s:  '

undefined4 Draw_RaceLapPlaceHud(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  IconTableEntries *pIVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char acStack_a0 [8];
  char acStack_98 [64];
  
  bVar1 = false;
  lVar9 = 0;
  if ((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05')) {
    bVar1 = true;
  }
  if (*(int *)(param_1 + 0x6c) < 1) {
    uVar5 = 0;
  }
  else {
    iVar11 = g_ScreenHeight - (((uint)(ZERO_MASK(Cutscene)) & 8) + 10);
    iVar10 = iVar11 - DAT_00724534;
    iVar11 = iVar11 - DAT_00724550;
    if (bVar1) {
      iVar10 = iVar10 - DAT_00724580;
      iVar11 = iVar11 - DAT_00724580;
    }
    Hud_DrawTextBox(DAT_00a1c818,iVar10,DAT_00724538,DAT_0072453c,DAT_00724540);
    iVar10 = DAT_0072454c;
    uVar2 = help_msg_string_by_index(STR_LAP);
    snprintf(acStack_98,"%s: ",uVar2);
    iVar6 = iVar11 + 1;
    FontPrintLarge(iVar10 + -1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    FontPrintLarge(iVar10,iVar11,DAT_00724544,acStack_98,0xffffffffffffffff);
    iVar4 = FontLen(acStack_98,-1);
    lVar7 = (longlong)DAT_0096a57a + 1;
    snprintf(acStack_98," %d/3",lVar7 + (3 - lVar7 >> 0x3f & 3U - lVar7));
    FontPrintLarge(iVar10 + iVar4 + -1,iVar11 + 2,0x80000000,acStack_98,0xffffffffffffffff);
    FontPrintLarge(iVar10 + iVar4,iVar11,DAT_00724548,acStack_98,0xffffffffffffffff);
    iVar10 = DAT_0072455c;
    iVar4 = g_RacePlace + -1;
    uVar2 = help_msg_string_by_index
                      (iVar4 + ((uint)(4 - (longlong)iVar4 >> 0x3f) & 4U - iVar4) + STR_ST);
    snprintf(acStack_98,"%s",uVar2);
    iVar4 = FontLen(acStack_98,-1);
    iVar10 = iVar10 - iVar4;
    FontPrintLarge(iVar10 + 1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    FontPrintLarge(iVar10,iVar11,DAT_00724548,acStack_98,0xffffffffffffffff);
    uVar2 = help_msg_string_by_index(STR_PLACE);
    snprintf(acStack_98," %s:  ",uVar2);
    iVar4 = FontLen(acStack_98,-1);
    FontPrintLarge((iVar10 - iVar4) + 1,iVar6,0x80000000,acStack_98,0xffffffffffffffff);
    FontPrintLarge(iVar10 - iVar4,iVar11,DAT_00724544,acStack_98,0xffffffffffffffff);
    if (Level == Kalebo) {
      snprintf(acStack_a0,"%d",(ulonglong)DAT_0096a5ae);
      lVar7 = (ZERO_MASK(Cutscene) & 8U) + 10;
      iVar11 = *(int *)(param_1 + 0x50);
      if (g_MiscLevelFlags.Zoomerator != false) {
        lVar7 = (longlong)DAT_00724570;
        iVar11 = DAT_0072456c;
      }
      Hud_DrawTextBox(iVar11 + -0x18,lVar7,DAT_00724574,0x20,0x60);
      uVar3 = 0;
      for (pIVar8 = IconTableEntry; pIVar8->iconId != 0x7558 && pIVar8->iconId != 0xffff;
          pIVar8 = pIVar8 + 1) {
        uVar3 = uVar3 + 1;
      }
      iVar10 = (int)((uVar3 & 0x1fffffff) << 3);
      if ((*(short *)((int)&IconTableEntry->iconId + iVar10) != -1) &&
         (2 < *(ushort *)((int)&IconTableEntry->unknown + iVar10))) {
        lVar9 = (ulonglong)*(ushort *)((int)&IconTableEntry->variantsCnt + iVar10) + 2;
      }
      Hud_DrawTexHeaderQuad
                (EffectTexHeaders + *(int *)(TexturePointerArray + (int)(lVar9 << 2)) * 0x24,iVar11,
                 lVar7,0x20,0x20,0x80);
      FontPrintLarge(iVar11 + 0x29,(int)lVar7 + 8,0x80000000,acStack_a0,0xffffffffffffffff);
      iVar10 = (int)lVar7 + 7;
      if (DAT_0096a5ae == 0) {
        FontPrintLarge(iVar11 + 0x28,iVar10,0x80202080,acStack_a0,0xffffffffffffffff);
      }
      else {
        FontPrintLarge(iVar11 + 0x28,iVar10,0x80e08060,acStack_a0,0xffffffffffffffff);
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar5;
}


// 0x00d6710 (0x4e8 bytes)
// strings: 006520f4: '%s: %d' | 0065215c: '%s: ' | 00652174: ' %d' | 0065217c: '%s:  0:00:00' | 0065218c: '%s:  ' | 00652194: '%d:%02d:%02d'

undefined4 Draw_RaceTimeScoreHud(int param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  char acStack_a0 [72];
  
  bVar2 = false;
  uVar8 = 0;
  if ((*(char *)(g_viewMtxPtr + 0x11) == '\x04') || (*(char *)(g_viewMtxPtr + 0x11) == '\x05')) {
    bVar2 = true;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    uVar3 = (uint)(ZERO_MASK(g_IsPal)) & 600;
    iVar5 = uVar3 + 3000;
    iVar1 = g_RaceTime / iVar5;
    iVar6 = g_RaceTime - iVar1 * iVar5;
    uVar3 = (uVar3 + 0xbb9) * 0x111 >> 0xe;
    iVar5 = iVar6 / (int)uVar3;
    iVar12 = g_ScreenHeight - (((uint)(ZERO_MASK(Cutscene)) & 8) + 10);
    iVar9 = iVar12 - DAT_0072458c;
    iVar11 = iVar12 - DAT_007245a8;
    iVar12 = iVar12 - DAT_007245b8;
    if (bVar2) {
      iVar9 = (iVar9 - DAT_00724580) + -3;
      iVar11 = (iVar11 - DAT_00724580) + -3;
      iVar12 = (iVar12 - DAT_00724580) + -3;
    }
    if (g_MiscLevelFlags.Zoomerator) {
      Hud_DrawTextBox(DAT_00724588,iVar9,DAT_00724590,DAT_00724594,DAT_00724598);
      iVar9 = DAT_007245a4;
      uVar4 = help_msg_string_by_index(STR_SCORE);
      snprintf(acStack_a0,"%s: %d",uVar4,g_RaceScore);
      iVar7 = FontLen(acStack_a0,-1);
      iVar9 = iVar9 - (iVar7 >> 1);
      uVar4 = help_msg_string_by_index(STR_SCORE);
      snprintf(acStack_a0,"%s: ",uVar4);
      FontPrintLarge(iVar9 + 1,iVar11 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
      FontPrintLarge(iVar9,iVar11,DAT_0072459c,acStack_a0,0xffffffffffffffff);
      iVar7 = FontLen(acStack_a0,-1);
      snprintf(acStack_a0," %d",g_RaceScore);
      FontPrintLarge(iVar9 + iVar7 + 1,iVar11 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
      FontPrintLarge(iVar9 + iVar7,iVar11,DAT_007245a0,acStack_a0,0xffffffffffffffff);
    }
    iVar9 = DAT_007245a4;
    uVar4 = help_msg_string_by_index(STR_TIME);
    snprintf(acStack_a0,"%s:  0:00:00",uVar4);
    iVar11 = FontLen(acStack_a0,-1);
    iVar9 = iVar9 - (iVar11 >> 1);
    lVar10 = (longlong)iVar9 +
             (ZERO_MASK((2 - g_Language)) &
             (longlong)(iVar9 + -0x14) - (longlong)iVar9);
    uVar4 = help_msg_string_by_index(STR_TIME);
    snprintf(acStack_a0,"%s:  ",uVar4);
    iVar9 = (int)lVar10;
    FontPrintLarge(iVar9 + 1,iVar12 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
    FontPrintLarge(lVar10,iVar12,DAT_0072459c,acStack_a0,0xffffffffffffffff);
    iVar11 = FontLen(acStack_a0,-1);
    iVar9 = iVar9 + iVar11;
    snprintf(acStack_a0,"%d:%02d:%02d",iVar1,iVar5,
                   (int)((iVar6 - iVar5 * uVar3) * 100) / (int)uVar3);
    FontPrintLarge(iVar9 + 1,iVar12 + 1,0x80000000,acStack_a0,0xffffffffffffffff);
    FontPrintLarge(iVar9,iVar12,DAT_007245a0,acStack_a0,0xffffffffffffffff);
    uVar8 = *(undefined4 *)(param_1 + 0x58);
  }
  return uVar8;
}


// 0x00d6bf8 (0x1c bytes)
int Hud_GetTexIndex(int idx)

{
  return *(int *)(TexturePointerArray + (int)((longlong)idx << 2));
}


// 0x00d6c14 (0x2c8 bytes)
void Hud_DrawTexQuad4Pt
               (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
               int param_7,int param_8)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  RVar1 = param_6 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (param_7 >> 4) << 0x10 | RVar1;
  RVar2 = param_2 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_3 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (in_stack_00000074 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = param_8 >> 4 & 0xffff;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_5 >> 4) << 0x10 | RVar2;
  RVar2 = param_4 >> 4 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (in_stack_00000074 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_5 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (param_7 >> 4) << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (param_3 >> 4) << 0x10 | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00d6edc (0x80 bytes)
void Hud_DrawEffectTexQuad4Pt(longlong param_1)

{
  Hud_DrawTexQuad4Pt(EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  return;
}


// 0x00d6f5c (0x2c0 bytes)
void Hud_DrawTexQuadF
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8,undefined8 param_9)

{
  RenderingStep *pRVar1;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_9,0x13c);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 8;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_5;
  pRVar1->command[2] = (RsxCmd)(float)param_6;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_1;
  pRVar1->command[2] = (RsxCmd)(float)param_2;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_5;
  pRVar1->command[2] = (RsxCmd)(float)param_8;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_1;
  pRVar1->command[2] = (RsxCmd)(float)param_4;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_7;
  pRVar1->command[2] = (RsxCmd)(float)param_8;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_3;
  pRVar1->command[2] = (RsxCmd)(float)param_4;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar1->command[1] = (RsxCmd)(float)param_7;
  pRVar1->command[2] = (RsxCmd)(float)param_6;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar1->command[1] = (RsxCmd)(float)param_3;
  pRVar1->command[2] = (RsxCmd)(float)param_2;
  pRVar1->command = pRVar1->command + 3;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}


// 0x00d721c (0x300 bytes)
void Hud_DrawEffectTexQuadUV
               (longlong param_1,RsxCmd param_2,ulonglong param_3,int param_4,longlong param_5,
               RsxCmd param_6,ulonglong param_7,int param_8)

{
  uint uVar1;
  RsxCmd RVar2;
  RsxCmd RVar3;
  RenderingStep *pRVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar5);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar4 = HUD_Pass;
  uVar1 = *(uint *)(iVar5 + 0x18);
  *HUD_Pass->command = 0x41948;
  pRVar4->command[1] = param_8 << 0x18 | 0x808080;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar4->command[1] = 0;
  uVar6 = param_7 + (uVar1 >> 0x10);
  pRVar4->command[2] = 0;
  pRVar4->command[3] = 0;
  pRVar4->command[4] = NV4097_SET_BEGIN_END_x1;
  RVar2 = param_6 + uVar1 & 0xffff;
  pRVar4->command[5] = 8;
  pRVar4->command = pRVar4->command + 6;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((uVar6 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((uVar6 & 0xffffffff) << 0x10) | RVar2;
  RVar3 = param_4 + param_2 & 0xffff;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_5 + param_3 & 0xffffffff) << 0x10) | RVar3;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar4->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | RVar2;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar4->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar3;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar4->command[1] = 0;
  pRVar4->command = pRVar4->command + 2;
  return;
}


// 0x00d751c (0x2e0 bytes)
void Hud_DrawTexQuadUV
               (undefined8 param_1,RsxCmd param_2,ulonglong param_3,uint param_4,uint param_5,
               int param_6,longlong param_7,RsxCmd param_8)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  uint in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_1);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  uVar4 = (ulonglong)in_stack_00000074 + (ulonglong)(uint)(1 << (param_5 & 0x3f));
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = in_stack_00000074 << 0x10 | param_8 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | param_8 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  RVar1 = param_8 + (1 << (param_4 & 0x3f)) & 0xffff;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_7 + param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | RVar1;
  RVar2 = param_6 + param_2 & 0xffff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_7 + param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = in_stack_00000074 << 0x10 | RVar1;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar3->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x00d77fc (0x68 bytes)
void Hud_DrawEffectTexHeaderQuadUV(int param_1)

{
  Hud_DrawTexQuadUV(EffectTexHeaders + param_1 * 0x24);
  return;
}


// 0x00d7864 (0x40 bytes)
void Hud_DrawTexQuadUV_Fixed(undefined8 param_1,int param_2,int param_3)

{
  Hud_DrawTexQuadUV(param_1,param_2 >> 4,param_3 >> 4);
  return;
}


// 0x00d78a4 (0x378 bytes)
void Hud_DrawTexQuadF_v2
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  int in_stack_0000007c;
  
  auVar4.piece<0,4>() = param_10;
  auVar4.piece<4,4>() = param_10;
  auVar4.piece<8,4>() = param_10;
  auVar4.piece<12,4>() = param_10;
  auVar7.piece<0,4>() = (float)param_5;
  auVar7.piece<4,4>() = (float)param_5;
  auVar7.piece<8,4>() = (float)param_5;
  auVar7.piece<12,4>() = (float)param_5;
  auVar5.piece<0,4>() = param_11;
  auVar5.piece<4,4>() = param_11;
  auVar5.piece<8,4>() = param_11;
  auVar5.piece<12,4>() = param_11;
  auVar6.piece<0,4>() = (float)param_6;
  auVar6.piece<4,4>() = (float)param_6;
  auVar6.piece<8,4>() = (float)param_6;
  auVar6.piece<12,4>() = (float)param_6;
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,param_7);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  auVar3 = ZEXT416(1);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar3,auVar5);
  *HUD_Pass->command = 0x400c1714;
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  auVar5 = vectorAddFloatingPoint(auVar6,auVar5);
  pRVar2->command[3] = 0;
  auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar4);
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  auVar3 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = vectorConvertFromUnsignedFixedPointWord(auVar4,0);
  pRVar2->command[5] = 8;
  pRVar2->command = pRVar2->command + 6;
  pRVar2 = HUD_Pass;
  auVar3 = vectorAddFloatingPoint(auVar7,auVar3);
  *HUD_Pass->command = 0x81888;
  pRVar2->command[1] = (RsxCmd)(float)param_5;
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  pRVar2->command[2] = (RsxCmd)(float)param_6;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)param_1;
  pRVar2->command[2] = (RsxCmd)(float)param_2;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  pRVar2->command[1] = (RsxCmd)(float)param_5;
  uVar1 = storeVectorElementWordIndexed(auVar5,8,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)param_1;
  pRVar2->command[2] = (RsxCmd)(float)(param_4 + param_2);
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  uVar1 = storeVectorElementWordIndexed(auVar3,4,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  uVar1 = storeVectorElementWordIndexed(auVar5,8,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)(param_3 + param_1);
  pRVar2->command[2] = (RsxCmd)(float)(param_4 + param_2);
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x81888;
  uVar1 = storeVectorElementWordIndexed(auVar3,4,ZEXT48(pRVar2->command));
  *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
  pRVar2->command[2] = (RsxCmd)(float)param_6;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar2->command[1] = (RsxCmd)(float)(param_3 + param_1);
  pRVar2->command[2] = (RsxCmd)(float)param_2;
  pRVar2->command = pRVar2->command + 3;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x00d7c38 (0x334 bytes)
void Hud_DrawTexQuadF_v3
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  RsxCmd *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RenderingStep *pRVar6;
  RsxCmd in_r8;
  ulonglong in_r9;
  undefined8 in_r10;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar8 = param_5;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar7 = (double)(float)(dVar8 * dVar9);
  fVar1 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar1;
  dVar12 = (double)((float)(dVar8 * dVar7) * 2.601887e-06 +
                   (float)(dVar7 * -0.0001980741071747616 +
                          (double)(float)(dVar9 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar8 = (double)(fVar5 * fVar3 * 2.601887e-06 +
                  fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                  );
  dVar11 = (double)(float)(param_4 * dVar12 + param_1);
  dVar9 = -(double)(float)(param_4 * dVar12 - param_1);
  dVar7 = (double)(float)(param_4 * dVar8 + param_2);
  dVar10 = -(double)(float)(param_4 * dVar8 - param_2);
  dVar8 = -(double)(float)(param_3 * dVar8);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,in_r10);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0x80808080;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar6->command[1] = 0;
  pRVar6->command[2] = 0;
  pRVar6->command[3] = 0;
  pRVar6->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[5] = 8;
  pRVar6->command = pRVar2 + 6;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10);
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10) | in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  return;
}


// 0x00d7f88 (0x39c bytes)
void Hud_DrawTexQuadF_v4(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,int param_7,int param_8)

{
  float fVar1;
  RsxCmd *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  RenderingStep *pRVar6;
  RsxCmd in_r8;
  ulonglong in_r9;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<48> local_80;
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar8 = param_5;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar7 = (double)(float)(dVar8 * dVar9);
  fVar1 = fVar5 * fVar5 * fVar4;
  fVar3 = fVar5 * fVar1;
  dVar12 = (double)((float)(dVar8 * dVar7) * 2.601887e-06 +
                   (float)(dVar7 * -0.0001980741071747616 +
                          (double)(float)(dVar9 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar8 = (double)(fVar5 * fVar3 * 2.601887e-06 +
                  fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                  );
  dVar11 = (double)(float)(param_4 * dVar12 + param_1);
  dVar9 = -(double)(float)(param_4 * dVar12 - param_1);
  dVar7 = (double)(float)(param_4 * dVar8 + param_2);
  dVar10 = -(double)(float)(param_4 * dVar8 - param_2);
  dVar8 = -(double)(float)(param_3 * dVar8);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,local_80);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0x80808080;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar6->command[1] = 0;
  pRVar6->command[2] = 0;
  pRVar6->command[3] = 0;
  pRVar6->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[5] = 8;
  pRVar6->command = pRVar2 + 6;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 - dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)-(float)(param_3 * dVar12 - dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10);
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar9 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar10);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2 = pRVar6->command;
  pRVar2[1] = (RsxCmd)((in_r9 & 0xffffffff) << 0x10) | in_r8 & 0xffff;
  pRVar6->command = pRVar2 + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar6->command[1] = (RsxCmd)(float)(dVar11 + dVar8);
  pRVar2 = pRVar6->command;
  pRVar2[2] = (RsxCmd)(float)(param_3 * dVar12 + dVar7);
  pRVar6->command = pRVar2 + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar6->command;
  pRVar2[1] = 0;
  pRVar6->command = pRVar2 + 2;
  return;
}


// 0x00d8328 (0x3c bytes)
void Hud_DrawTexQuadF_v4_Fixed(double param_1,double param_2,double param_3,double param_4)

{
  Hud_DrawTexQuadF_v4((double)(float)(param_1 * 0.0625),(double)(float)(param_2 * 0.0625),
                      (double)(float)(param_3 * 0.0625),(double)(float)(param_4 * 0.0625));
  return;
}


// 0x00d8364 (0x2f4 bytes)
void DrawSprite2(longlong param_1,RsxCmd param_2,ulonglong param_3,RsxCmd param_4,
                     ulonglong param_5,RsxCmd param_6,ulonglong param_7,RsxCmd param_8)

{
  RenderingStep *pRVar1;
  int in_stack_00000074;
  int in_stack_0000007c;
  
  idol_draw::SetTextureUnitRegs
            (HUD_Pass,0,
             EffectTexHeaders + *(int *)(TexturePointerArray + (int)(param_1 << 2)) * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] = in_stack_0000007c << 0x18 | 0x808080;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 8;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_6 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = in_stack_00000074 << 0x10 | param_6 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_5 & 0xffffffff) << 0x10) | param_2 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = in_stack_00000074 << 0x10 | param_8 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_5 & 0xffffffff) << 0x10) | param_4 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = (RsxCmd)((param_7 & 0xffffffff) << 0x10) | param_8 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1->command[1] = (RsxCmd)((param_3 & 0xffffffff) << 0x10) | param_4 & 0xffff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}


// 0x00d8658 (0x4 bytes)
void STUB_000d8658(...)

{
  return;
}


// 0x00d865c (0x284 bytes)
void Hud_DrawEffectTexLine
               (RsxCmd param_1,ulonglong param_2,RsxCmd param_3,ulonglong param_4,ulonglong param_5,
               int param_6)

{
  RenderingStep *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = EffectTexHeaders;
  iVar3 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar2 + iVar3 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar1->command[1] =
       (RsxCmd)((param_5 >> 8 & 0xff) << 8) |
       (RsxCmd)((param_5 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((param_5 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)param_5 & 0xff;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar1->command[1] = 0;
  pRVar1->command[2] = 0;
  pRVar1->command[3] = 0;
  pRVar1->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[5] = 2;
  pRVar1->command = pRVar1->command + 6;
  pRVar1 = HUD_Pass;
  if (param_6 == 0) {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_2 - 8 & 0xffffffff) << 0x10) | param_1 - 8 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
    pRVar1 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_4 - 8 & 0xffffffff) << 0x10) | param_3 - 8 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
    pRVar1 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1->command[1] = (RsxCmd)((param_4 & 0xffffffff) << 0x10) | param_3 & 0xffff;
    pRVar1->command = pRVar1->command + 2;
  }
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}


// 0x00d88e0 (0x4 bytes)
void STUB_000d88e0(...)

{
  return;
}


