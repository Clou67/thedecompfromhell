// idol/mUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 245 functions, 0x4d27b0-0x4efdf4
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "idol/mUnk.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initonce.h"
#include "game/loaders.h"
#include "game/main.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fUnk.h"
#include "idol/fastfunc.h"
#include "idol/idol.h"
#include "idol/idol_draw.h"
#include "idol/mUnk2.h"
#include "idol/mathfunc.h"
#include "idol/shrubfunc.h"
#include "idol/tiefunc.h"
#include "sdk/cell.h"
#include "sdk/fUnk3.h"
#include "sdk/lUnk.h"
#include "sdk/libcgb/cgb.h"
#include "sdk/libcgc/libcgc_cell_localize.h"
#include "sdk/libgcm_cmd/SetWriteCommandLabel.safe.h"
#include "sdk/libgcm_cmd/gcminit.h"
#include "sdk/libgcm_cmd/marker.h"
#include "sdk/mUnk3.h"
#include "sdk/sUnk2.h"
#include "sdk/sce.h"
#include "sdk/sys.h"
#include "sdk/tUnk.h"
#include "sdk/xUnk5.h"

// 0x04d27b0 (0x66c bytes)
void idol_draw::DrawGalacticMapFrame(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  STUB_0006d704(0);
  uVar5 = PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar5);
  uVar5 = FUN_00502f98(1,5,4,0,0,0,0,0);
  SetGSReg(0x16,uVar5);
  DrawFlatOverlay(0,0,0x200,0x1c0,0x80000000,0);
                    /* Galactic map texture = 0xe */
  uVar5 = GetIconFrameTex(0xe99a,0xe);
  Hud_DrawEffectTexQuadUV(uVar5,0,0,param_2 - param_1,param_4 - param_3,0,0,0x80);
  uVar5 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar5);
                    /* Some kind of overlay texture */
  uVar5 = GetIconFrameTex(0xe99a,0xf);
  Hud_DrawEffectTexQuadUV
            (uVar5,0,0,param_2 - param_1,param_4 - param_3,g_MainLoopFrames & 0xfff,0,0x80);
  uVar5 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  SetGSReg(6,uVar5);
  dVar16 = 22.5;
  dVar15 = 8.5;
  dVar14 = 1000.0;
  uVar9 = 1;
  do {
    iVar3 = (int)((uVar9 & 0xffffffff) << 4);
    iVar1 = *(int *)(iVar3 + 0x735394);
    iVar2 = (int)uVar9;
    if ((iVar1 != 0) &&
       ((iVar6 = 3, (&VisitedPlanets.Veldin)[iVar2] != '\0' ||
        (iVar6 = ((uint)(ZERO_MASK((uint)(byte)(&g_SeenPlanets.Veldin)[iVar2])) &
                 0xfffffffe) + 2, iVar6 != 0)))) {
      iVar10 = *(int *)(iVar3 + 0x735398);
      if (Cutscene != 0) {
        iVar10 = (iVar10 * 0x1c0) / 0x1a0;
      }
      if (iVar6 == 3) {
LAB_004d2ae8:
                    /* Like a target texture or something lol like a crosshair type shi */
        uVar5 = GetIconFrameTex(0xe99a,0xc);
        DrawSprite(uVar5,iVar1 + -5,iVar10 + -5,10,10,0x80);
      }
      else if (iVar6 == 2) {
        iVar6 = (int)((double)animationSpeed * dVar16);
        iVar7 = iVar6 + (int)((double)animationSpeed * dVar15);
        if ((int)(g_MainLoopFrames - ((int)g_MainLoopFrames / iVar7) * iVar7) < iVar6) goto LAB_004d2ae8;
      }
      if (iVar2 == g_SelectedLevel) {
        iVar7 = *(int *)(iVar3 + 0x73539c);
        iVar8 = *(int *)(iVar3 + 0x7353a0);
        iVar13 = iVar1 + iVar7;
        iVar12 = iVar10 + iVar8;
        iVar6 = (int)((double)SQRT((float)(longlong)iVar7 * (float)(longlong)iVar7 +
                                   (float)(longlong)iVar8 * (float)(longlong)iVar8) * dVar14);
        iVar7 = iVar13 + (-iVar7 * (iVar6 + -8000)) / iVar6;
        iVar11 = iVar12 + (-iVar8 * (iVar6 + -8000)) / iVar6;
        uVar5 = help_msg_string_by_index(g_PlanetsPage[iVar2].subPlanetNameId);
        iVar6 = FontLen((char *)uVar5,-1);
        uVar4 = (uint)(ZERO_MASK((0xc - iVar2))) & 0xfffffff3;
        iVar8 = iVar12 + 7;
        iVar3 = iVar13 + iVar6 + (*(int *)(iVar3 + 0x73539c) >> 0x1f & iVar6 * -2);
        Hud_DrawEffectTexLine(iVar7 + 7,iVar11 + 7,iVar13 + 7,iVar8,0x80000000,0);
        Hud_DrawEffectTexLine(iVar13 + 7,iVar8,iVar3 + 7,iVar8,0x80000000,0);
        iVar6 = iVar13 + ((uint)((longlong)iVar3 - (longlong)iVar13 >> 0x3f) & iVar3 - iVar13);
        FontPrintMediumLeft
                  (DAT_008f9334 + uVar4 + iVar6 + 1,(iVar12 - DAT_008f9330) + 1,0x80000000,uVar5,
                   0xffffffffffffffff);
        iVar8 = iVar12 + 6;
        Hud_DrawEffectTexLine(iVar7 + 6,iVar11 + 6,iVar13 + 6,iVar8,0x80f0f0f0,0);
        Hud_DrawEffectTexLine(iVar13 + 6,iVar8,iVar3 + 6,iVar8,0x80f0f0f0,0);
        FontPrintMediumLeft
                  (DAT_008f9334 + uVar4 + iVar6,iVar12 - DAT_008f9330,0x80f0f0f0,uVar5,
                   0xffffffffffffffff);
                    /* Green circle */
        uVar5 = GetIconFrameTex(0xe99a,0xd);
        DrawSprite(uVar5,iVar1 + -10,iVar10 + -10,0x14,0x14,0x80);
      }
    }
    uVar9 = (ulonglong)(iVar2 + 1);
    if (0x13 < iVar2 + 1) {
      STUB_0006d708();
      return;
    }
  } while( true );
}


// 0x04d2e1c (0x14 bytes)
void FUN_004d2e1c(void)

{
  DAT_008f9384 = 0x10000;
  return;
}


// 0x04d2e30 (0x214 bytes)
// strings: 0096c165: 'None' | 0071fb2c: '������������'

void UnlockPurchasableItem(void)

{
  byte bVar1;
  uint uVar2;
  LevelId LVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  if ((int)Level < 0x13) {
    if (UnlockableItems.bombGlove == '\0') {
      MB_UnlockItem(10,1);
      g_purchasableVendorItems[0] = 'J';
      g_equippedItem = BOMB_GLOVE;
    }
    LVar3 = Level;
    iVar5 = 0;
    iVar4 = 0;
    do {
      bVar1 = g_purchasableVendorItems[iVar5];
      if (bVar1 != 0xff) {
        if ((bVar1 & 0x3f) != 10) {
          iVar7 = 0;
          puVar6 = &DAT_00737bf0;
          do {
            if (*puVar6 == (bVar1 & 0x3f)) break;
            iVar7 = iVar7 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar7 < 0x13);
          if ((iVar7 == 0x13) || ((bVar1 & 0x3f) == 0)) {
            g_purchasableVendorItems[iVar5] = -1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xc);
    uVar2 = (&DAT_00737bf0)[LVar3];
    if (uVar2 != 0) {
      while( true ) {
        bVar1 = g_purchasableVendorItems[iVar4];
        if (bVar1 == 0xff || (bVar1 & 0x3f) == uVar2) break;
        iVar4 = iVar4 + 1;
      }
      if (bVar1 == 0xff) {
        g_purchasableVendorItems[iVar4] = (char)uVar2;
      }
    }
  }
  else {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      (&UnlockableItems.field0_0x0)[iVar4] = '\x01';
      CHAR_ARRAY_0096c165[iVar4] = '\x01';
      iVar4 = iVar5;
    } while (iVar5 < 0x25);
    builtin_strncpy(g_purchasableVendorItems,"JPOTQNKRMYXS",0xc);
    UINT_ARRAY_0096c1dc[0] = 0xf;
    UINT_ARRAY_0096c1dc[1] = 0xc;
    DAT_0096c1e4 = 0xd;
    DAT_0096c1e8 = 0xb;
    DAT_0096c1ec = 0x11;
    DAT_0096c1f0 = 10;
    DAT_0096c1f4 = 0x10;
    DAT_0096c1f8 = 0x13;
  }
  return;
}


// 0x04d3044 (0x154 bytes)
void FUN_004d3044(void)

{
  music_LoadCoreBank();
  VU1_setBufSizeByLevel();
  InitMemSlots();
  g_GsRamAlloc = GSmem.base;
  g_GsRamBase = GSmem.base;
  FastMemSet(&g_CollJointCacheKeys,0xffffffff87654321,0x10);
  FastMemSet(&MobyClassLookup,0xffffffffffffffff,0x800);
  FastMemSet(&MobyTexLookup,0xffffffffffffffff,0xe00);
  FastMemSet(&MobyMipDists,0,0xe0);
  FastMemSet(&TieClassLookup,0xffffffffffffffff,0xc00);
  FastMemSet(&DAT_00e59410,0xffffffffffffffff,0x800);
  FastMemSet(&DAT_00e58c10,0,0x80);
  InitViewContext();
  UpdateViewContext();
  VU1_initChain();
  FillPartUpdateTable();
  STUB_001754dc();
  UnlockPurchasableItem();
  if (Level != Veldin) {
    MB_UnlockLevel(Level);
  }
  g_FrameCount = g_FrameCount + 0xb4;
  return;
}


// 0x04d3198 (0x14 bytes)
void FUN_004d3198(void)

{
  DAT_008f93f4 = 0x10000;
  return;
}


// 0x04d31b0 (0x4e8 bytes)
// strings: 00658e50: '%d%s%03d' | 0096c165: 'None'

void Dialog_Advance(undefined8 param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  StringId *pSVar4;
  StringId SVar5;
  undefined4 uVar6;
  char *__src;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  StringId *pSVar11;
  undefined2 uVar12;
  undefined *local_170 [4];
  undefined *local_160;
  undefined *local_15c;
  char acStack_158 [32];
  char acStack_138 [264];
  
  uVar6 = worldUpdateTime;
  sVar1 = *(short *)(param_2 + 0x36);
  iVar7 = *(int *)(param_2 + 0x3c);
  pSVar4 = (StringId *)(iVar7 + sVar1 * 0x1c);
  if (iVar7 == 0) {
    return;
  }
  pSVar11 = pSVar4;
  if (param_3 != 0) {
    *(short *)(param_2 + 4) = sVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    sVar2 = *(short *)((int)pSVar4 + 6);
    if (sVar1 != sVar2) {
      pSVar11 = (StringId *)(iVar7 + sVar2 * 0x1c);
      SVar5 = pSVar4[4];
      *(short *)(param_2 + 0x36) = sVar2;
      *(byte *)(param_2 + 8) = (byte)*(undefined2 *)(pSVar11 + 4) & 1;
      if ((SVar5 & 0x40000) != STR_TO_USE_YOUR_BOMB_0x0000) {
        g_DialogMoby = (undefined4)param_1;
        g_DialogLine = param_2;
        if ((*(undefined2 *)(pSVar11 + 1) & 0x4000) == STR_TO_USE_YOUR_BOMB_0x0000) {
          Hud_UnregisterById(DAT_008f9418);
          DAT_008f9418 = -1;
          mode_sceneInit((int)(short)*(undefined2 *)(pSVar11 + 1));
        }
        else {
          PlayInfobotMovie((int)(short)*(undefined2 *)(pSVar11 + 1) ^ 0x4000);
        }
      }
    }
  }
  pcVar8 = g_ScratchBuf;
  if (*(short *)(param_2 + 0x36) == -1) {
    return;
  }
  DAT_00a15c18 = *pSVar11;
  if (*(undefined2 *)(pSVar11 + 2) == STR_INFOBOT_FOR_PLANET_NOVALIS_0x0006) {
    local_170[3] = &DAT_00658e40;
    local_170[0] = &DAT_00658e38;
    local_170[1] = &DAT_00658e38;
    local_170[2] = &DAT_00658e38;
    local_160 = &DAT_00658e38;
    local_15c = &DAT_00658e40;
    __src = (char *)help_msg_string_by_index(DAT_00a15c18);
    strcpy(pcVar8,__src);
    iVar7 = FUN_005c8700(pcVar8,&DAT_00658e48);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 1) = 0x73;
    }
    uVar9 = (longlong)(int)g_Language / 6 + ((longlong)(int)g_Language >> 0x3f) & 0xffffffff;
    uVar3 = *(ushort *)(&DAT_00737d44 + (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3);
    snprintf(acStack_158,"%d%s%03d",uVar3 / 1000,
                   ZEXT48(local_170[(int)((ulonglong)g_Language +
                                         (uVar9 - ((longlong)(uVar9 << 0x20) >> 0x3f)) * -6)]),
                   (uint)uVar3 + (uVar3 / 1000) * -1000);
    snprintf(acStack_138,pcVar8,acStack_158);
  }
  else {
    pcVar8 = (char *)help_msg_string_by_index(DAT_00a15c18);
    snprintf(acStack_138,pcVar8);
  }
  if (DAT_00a15c18 == STR_TO_USE_YOUR_BOMB_0x0000) {
    if (DAT_008f9418 != -1) {
      Hud_UnregisterById(DAT_008f9418);
      DAT_008f9418 = -1;
    }
  }
  else {
    GetHelpLen(acStack_138);
  }
  uVar12 = *(undefined2 *)(pSVar11 + 2);
  if (uVar12 == STR_TO_USE_YOUR_BOMB_0x0000) {
    return;
  }
  if (uVar12 == STR_INFOBOT_FOR_PLANET_NOVALIS_0x0006) {
    uVar10 = 0;
    if (((int)(uint)*(ushort *)
                     (&DAT_00737d44 + (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3) <=
         g_boltCount) && (iVar7 = MB_GetUnspentGoldBolts(), 3 < iVar7)) {
      uVar10 = 1;
    }
LAB_004d3600:
    if (uVar10 != 0) {
      uVar12 = *(undefined2 *)(pSVar11 + 3);
      goto LAB_004d3614;
    }
  }
  else {
    if (uVar12 == STR_GADGETRONS_OMNIWRENCH_8000_INCLUDES_0x0005) {
      iVar7 = MB_GetUnspentGoldBolts();
      uVar10 = (uint)((ulonglong)((longlong)iVar7 - (longlong)*(short *)((int)pSVar11 + 10)) >> 0x3f
                     ) ^ 1;
      goto LAB_004d3600;
    }
    if (uVar12 == STR_TO_PERFORM_A_POWERFUL_0x0004) {
      uVar10 = ((uint)(&g_MiscLevelFlags.Zoomerator)[*(short *)((int)pSVar11 + 10)] != 0);
      goto LAB_004d3600;
    }
    if (uVar12 == STR_WELCOME_TO_THE_GADGETRON_0x0003) {
      uVar10 = 0;
      if (((&UnlockableItems.field0_0x0)[*(short *)((int)pSVar11 + 10)] != '\0') &&
         (CHAR_ARRAY_0096c165[*(short *)((int)pSVar11 + 10)] == '\0')) {
        uVar10 = 1;
      }
      goto LAB_004d3600;
    }
    if (uVar12 == STR_THATS_NANOTECH_WHENEVER_YOU_0x0002) {
      uVar10 = ((uint)(&UnlockableItems.field0_0x0)[*(short *)((int)pSVar11 + 10)] != 0);
      goto LAB_004d3600;
    }
    if (uVar12 == STR_YOU_JUST_PICKED_UP_0x0001) {
      uVar10 = (uint)((ulonglong)
                      ((longlong)g_boltCount -
                      (longlong)
                      *(int *)(&DAT_00737d30 +
                              (int)((longlong)*(short *)((int)pSVar11 + 10) << 3) * 3)) >> 0x3f) ^ 1
      ;
      goto LAB_004d3600;
    }
  }
  uVar12 = *(undefined2 *)((int)pSVar11 + 0xe);
LAB_004d3614:
  if (uVar12 != *(short *)(param_2 + 0x36)) {
    *(undefined2 *)(param_2 + 0x36) = uVar12;
    *(undefined4 *)(param_2 + 0x38) = worldUpdateTime;
    *(byte *)(param_2 + 8) =
         (byte)*(undefined2 *)
                (*(int *)(param_2 + 0x3c) +
                 ((int)((longlong)(short)uVar12 << 5) - (int)((longlong)(short)uVar12 << 2)) + 0x10)
         & 1;
    Dialog_Advance(param_1,param_2,0);
  }
  return;
}


// 0x04d3698 (0x88 bytes)
int FUN_004d3698(int param_1)

{
  int iVar1;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    iVar1 = 0;
  }
  else {
    for (iVar1 = *(int *)(&DAT_00738138 + Level * 4); iVar1 < *(int *)(&DAT_0073813c + Level * 4);
        iVar1 = iVar1 + 1) {
      if (*(int *)(&g_MissionMobys + iVar1 * 4) == param_1) {
        return iVar1;
      }
    }
    iVar1 = -1;
  }
  return iVar1;
}


// 0x04d3720 (0x13c bytes)
// strings: 0096c24c: 'None'

ulonglong FUN_004d3720(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  short sVar3;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    uVar1 = 0;
LAB_004d37b0:
    iVar2 = (int)((uVar1 & 0xffffffff) << 2);
    if (*(int *)(&DAT_008fa1ac + iVar2) == 0) {
      uVar1 = 0xffffffffffffffff;
    }
    else {
      *(undefined1 *)(param_2 + 9) = 1;
      sVar3 = 0;
      *(undefined4 *)(param_2 + 0x38) = worldUpdateTime;
      *(undefined2 *)(param_2 + 4) = 0xffff;
      iVar2 = *(int *)(&DAT_008fa1ac + iVar2);
      *(undefined2 *)(param_2 + 0x36) = 0;
      *(int *)(param_2 + 0x3c) = iVar2;
      if ((*(int *)(g_MissionTargets + (int)((uVar1 & 0xffffffff) << 4) + 0xc) != 0) &&
         (*(short *)(iVar2 + 8) == 0)) {
        sVar3 = *(short *)(iVar2 + 6);
        *(short *)(param_2 + 0x36) = sVar3;
      }
      *(byte *)(param_2 + 8) =
           (byte)*(undefined2 *)
                  (iVar2 + ((int)((longlong)sVar3 << 5) - (int)((longlong)sVar3 << 2)) + 0x10) & 1;
    }
  }
  else {
    for (iVar2 = *(int *)(&DAT_00738138 + Level * 4); iVar2 < *(int *)(&DAT_0073813c + Level * 4);
        iVar2 = iVar2 + 1) {
      uVar1 = (ulonglong)iVar2;
      if (*(int *)(&g_MissionMobys + iVar2 * 4) == param_1) {
        if (iVar2 == -1) {
          return uVar1;
        }
        goto LAB_004d37b0;
      }
    }
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


// 0x04d3870 (0x80c bytes)
// inlined: FastAtan2 @0x4d3a54, FastAtan2 @0x4d3c24
// strings: 0096c24c: 'None'

undefined8 FUN_004d3870(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  char *pcVar11;
  PlayerState PVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x110;
  puVar9 = (ulonglong *)lVar21;
  *puVar9 = uVar20;
  puVar9[0x24] = in_LR;
  puVar9[0x20] = in_f30;
  puVar9[0x21] = in_f31;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  PVar12 = g_heroState;
  puVar9[0x1d] = unaff_r29;
  if (PVar12 == VISIBOMB_CONTROL) {
    uVar13 = 0;
  }
  else if (g_heroHealth == 0) {
    uVar13 = 0;
  }
  else {
    if (*(char *)(param_2 + 9) == '\0') {
      FUN_004d3720(param_1,param_2);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      if (param_2 == 0) {
        uVar13 = 0;
      }
      else if (*(short *)(param_2 + 0x36) == -1) {
        uVar13 = 0;
      }
      else if (*(char *)(param_2 + 8) == -1) {
        uVar13 = 0;
      }
      else {
        fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
        fVar5 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
        fVar2 = *(float *)(param_1 + 0x18) - g_heroPosition.z;
        if (SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar1 * fVar1) <= *(float *)(param_2 + 0xc) * 2.0)
        {
          if (*(char *)(param_2 + 8) == '\0') {
            fVar1 = g_heroPosition.x - *(float *)(param_1 + 0x10);
            fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x14);
            fVar3 = ABS(fVar1);
            fVar5 = ABS(fVar2);
            *(float *)((int)puVar9 + 0x7c) = fVar1;
            *(float *)(puVar9 + 0x10) = fVar2;
            *(float *)((int)puVar9 + 0x84) = fVar3 - fVar5;
            dVar26 = 0.0;
            uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
            fVar2 = ABS(*(float *)((int)puVar9 + 0x7c));
            if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
              fVar2 = fVar5;
            }
            fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
            fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            fVar4 = ABS(*(float *)(puVar9 + 0x10));
            if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
              fVar4 = fVar3;
            }
            dVar27 = 0.7853981852531433;
            dVar23 = dVar26;
            if (0.0 < fVar2) {
              lVar14 = uVar20 - 0x100;
              lVar16 = uVar20 - 0x68;
              lVar19 = uVar20 - 0x58;
              lVar22 = 2;
              fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
              fVar3 = fVar2 * fVar2;
              *(float *)((int)puVar9 + 0xb4) = fVar2;
              *(float *)((int)puVar9 + 0xac) = fVar2;
              *(float *)(puVar9 + 0x16) = fVar2;
              *(float *)(puVar9 + 0x15) = fVar2;
              fVar2 = fVar3 * fVar3;
              *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
              *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
              *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
              do {
                *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
                iVar15 = (int)lVar16;
                lVar14 = lVar14 + 8;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
                lVar19 = lVar19 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar22 = 4;
              lVar19 = uVar20 - 0x68;
              pfVar17 = (float *)&DAT_007358e0;
              lVar14 = lVar21;
              lVar16 = lVar19;
              do {
                fVar2 = *pfVar17;
                fVar3 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
                lVar16 = lVar16 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar16 = 2;
              lVar14 = lVar21;
              do {
                iVar15 = (int)lVar14;
                lVar14 = lVar14 + 0x10;
                iVar10 = (int)lVar19;
                lVar19 = lVar19 + 0x10;
                dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0xa8)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar1);
            }
            dVar23 = (double)FastSubRots((float)dVar23,*(float *)(param_1 + 0x48));
            fVar2 = g_heroRotation.z;
            if ((double)*(float *)(param_2 + 0xc) < dVar23) {
              return 0;
            }
            fVar1 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
            fVar5 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
            dVar24 = ABS((double)fVar1);
            dVar25 = ABS((double)fVar5);
            *(float *)(puVar9 + 0xe) = fVar1;
            *(float *)((int)puVar9 + 0x74) = fVar5;
            *(float *)(puVar9 + 0xf) = (float)(dVar24 - dVar25);
            uVar18 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
            dVar23 = ABS((double)*(float *)(puVar9 + 0xe));
            if ((double)*(float *)(puVar9 + 0xf) - dVar26 < 0.0) {
              dVar23 = dVar25;
            }
            fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
            dVar25 = ABS((double)*(float *)((int)puVar9 + 0x74));
            if ((double)*(float *)(puVar9 + 0xf) - dVar26 < 0.0) {
              dVar25 = dVar24;
            }
            fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
            if (dVar26 < dVar23) {
              lVar14 = uVar20 - 0x100;
              lVar19 = uVar20 - 0x78;
              lVar16 = uVar20 - 0x88;
              lVar22 = 2;
              fVar3 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
              fVar4 = fVar3 * fVar3;
              *(float *)((int)puVar9 + 0x94) = fVar3;
              *(float *)((int)puVar9 + 0x8c) = fVar3;
              *(float *)(puVar9 + 0x12) = fVar3;
              *(float *)(puVar9 + 0x11) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
              *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar3;
              *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x78) * fVar3 * fVar3;
                iVar15 = (int)lVar16;
                lVar16 = lVar16 + 8;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
                lVar19 = lVar19 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar22 = 4;
              lVar19 = uVar20 - 0x88;
              pfVar17 = (float *)&DAT_007358e0;
              lVar14 = lVar21;
              lVar16 = lVar19;
              do {
                fVar3 = *pfVar17;
                fVar4 = pfVar17[1];
                pfVar17 = pfVar17 + 2;
                *(float *)((int)lVar14 + 0x88) = *(float *)((int)lVar14 + 0x88) * fVar3;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
                lVar16 = lVar16 + 8;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
              lVar14 = 2;
              do {
                iVar15 = (int)lVar21;
                iVar10 = (int)lVar19;
                lVar21 = lVar21 + 0x10;
                lVar19 = lVar19 + 0x10;
                dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0x88)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              dVar26 = (double)((float)(dVar26 + dVar27) * fVar1 + fVar5);
            }
            dVar26 = (double)FastSubRots((float)dVar26,fVar2);
            if (1.5700000524520874 < dVar26) {
              return 0;
            }
          }
          Dialog_Advance(param_1,param_2,0);
          if (worldUpdateTime < DAT_00a15c14) {
            uVar13 = 0;
          }
          else if ((*(char *)(param_2 + 8) == '\0') && ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0)
                  ) {
            iVar15 = Hud_ShowEntryById(DAT_008f9418,10);
            if (iVar15 != 0) {
              DAT_008f9418 = RegisterHUDCallback
                                       (0xc,0,&PTR_PromptHud_Init_00705750,
                                        &PTR_PromptHud_Update_00705758,&PTR_Draw_PromptMsg_00705788,
                                        (int *)0x0,0);
            }
            sVar7 = *(short *)(*(int *)(param_2 + 0x3c) +
                               ((int)((longlong)*(short *)(param_2 + 0x36) << 5) -
                               (int)((longlong)*(short *)(param_2 + 0x36) << 2)) + 8);
            if ((sVar7 == 1) || (sVar7 == 6)) {
              iVar15 = RegisterHUDCallback
                                 (2,0x754e,&PTR_BoltHud_Init_00705810,&PTR_BoltHud_Update_00705818,
                                  &PTR_Draw_BoltCountUI_00705820,&g_boltCount,9999999);
              puVar9[0x19] = (longlong)(int)(animationSpeed * 60.5);
              Hud_ShowEntryById(iVar15,*(int *)((int)puVar9 + 0xcc));
            }
            uVar13 = 0;
          }
          else {
            if (((int)Level < 0) || (0x12 < (int)Level)) {
              uVar20 = 0;
            }
            else {
              uVar8 = *(uint *)(&DAT_00738138 + Level * 4);
              uVar20 = (ulonglong)uVar8;
              if ((int)uVar8 < *(int *)(&DAT_0073813c + Level * 4)) {
                lVar21 = ((ulonglong)uVar8 & 0x3fffffff) << 2;
                do {
                  if (*(int *)(&g_MissionMobys + (int)lVar21) == param_1) goto LAB_004d3e20;
                  uVar20 = uVar20 + 1;
                  lVar21 = lVar21 + 4;
                } while ((int)uVar20 < *(int *)(&DAT_0073813c + Level * 4));
              }
              uVar20 = 0xffffffffffffffff;
            }
LAB_004d3e20:
            iVar15 = (int)(uVar20 << 4);
            if (*(int *)(g_MissionTargets + iVar15 + 0xc) == 0) {
              pcVar11 = g_MissionTargets + iVar15 + 0xc;
              pcVar11[0] = '\0';
              pcVar11[1] = '\0';
              pcVar11[2] = '\0';
              pcVar11[3] = '\x01';
            }
            iVar15 = *(int *)(param_2 + 0x3c) +
                     ((int)((longlong)*(short *)(param_2 + 0x36) << 5) -
                     (int)((longlong)*(short *)(param_2 + 0x36) << 2));
            g_DialogMoby = param_1;
            g_DialogLine = param_2;
            if ((*(ushort *)(iVar15 + 0x10) & 8) != 0) {
              if (*(short *)(iVar15 + 8) == 1) {
                g_boltCount = g_boltCount -
                              *(int *)(&DAT_00737d30 +
                                      (int)((longlong)*(short *)(iVar15 + 10) << 3) * 3);
              }
              else if (*(short *)(iVar15 + 8) == 4) {
                (&g_MiscLevelFlags.Zoomerator)[*(short *)(iVar15 + 10)] = false;
              }
            }
            uVar6 = *(ushort *)(iVar15 + 4);
            if (uVar6 == 0xffff) {
              Dialog_Advance(param_1,param_2,1);
            }
            else if ((uVar6 & 0x4000) == 0) {
              g_DialogMoby = param_1;
              g_DialogLine = param_2;
              Hud_UnregisterById(DAT_008f9418);
              DAT_008f9418 = -1;
              mode_sceneInit((int)*(short *)(iVar15 + 4));
            }
            else {
              g_DialogMoby = param_1;
              g_DialogLine = param_2;
              PlayInfobotMovie((int)(short)uVar6 ^ 0x4000);
            }
            uVar13 = 1;
          }
        }
        else {
          uVar13 = 0;
        }
      }
    }
    else {
      uVar13 = 0;
    }
  }
  return uVar13;
}


// 0x04d407c (0x9c bytes)
// strings: 0096c24c: 'None'

void FUN_004d407c(int param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (((int)Level < 0) || (0x12 < (int)Level)) {
    uVar1 = 0;
LAB_004d4100:
    *(undefined4 *)(g_MissionTargets + uVar1 * 0x10 + 0xc) = param_2;
  }
  else {
    uVar1 = *(uint *)(&DAT_00738138 + Level * 4);
    if ((int)uVar1 < *(int *)(&DAT_0073813c + Level * 4)) {
      lVar2 = ((ulonglong)uVar1 & 0x3fffffff) << 2;
      do {
        if (*(int *)(&g_MissionMobys + (int)lVar2) == param_1) {
          if (uVar1 == 0xffffffff) {
            return;
          }
          goto LAB_004d4100;
        }
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 4;
      } while ((int)uVar1 < *(int *)(&DAT_0073813c + Level * 4));
    }
  }
  return;
}


// 0x04d4118 (0x14 bytes)
void FUN_004d4118(void)

{
  DAT_008fa3dc = 0x10000;
  return;
}


// 0x04d4138 (0x1e8 bytes)
MobyInstance *
FUN_004d4138(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined4 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte in_stack_00000077;
  
  pMVar3 = CreateMoby(EXPLOSION_04A8);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar4 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar5 = (double)MB_randRangeFloat((float)dVar7,(float)dVar6);
    dVar6 = (double)MB_randRangeFloat((float)dVar7,(float)dVar6);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->alpha = in_stack_00000077;
    SetColorOfMoby(pMVar3,param_7 & 0xff,param_8 & 0xff,param_9 & 0xff);
    fVar1 = pMVar3->scale;
    puVar2[4] = param_2;
    puVar2[5] = param_6;
    *(short *)(puVar2 + 7) = (short)param_6;
    *(ushort *)((int)puVar2 + 0x1e) = (ushort)in_stack_00000077;
    puVar2[6] = (float)((double)fVar1 * param_1);
    pMVar3->scale = 0.0;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    (pMVar3->pos).w = param_3[3];
    *puVar2 = *param_4;
    puVar2[1] = param_4[1];
    puVar2[2] = param_4[2];
    puVar2[3] = param_4[3];
    (pMVar3->rotation).x = (float)dVar4;
    (pMVar3->rotation).y = (float)dVar5;
    (pMVar3->rotation).z = (float)dVar6;
    (pMVar3->rotation).w = 0.0;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x04d4328 (0xdc bytes)
void FUN_004d4328(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_r0;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  iVar2 = (int)param_1;
  auVar3 = ZEXT416(0xffffffff);
  auVar7 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar9 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = loadVectorLeftIndexed(in_r0,(ulonglong)*(uint *)(iVar2 + 8));
  auVar5 = loadVectorLeftIndexed(4,(ulonglong)*(uint *)(iVar2 + 8));
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar6 = vectorConvertFromUnsignedFixedPointWord(auVar5,0);
  auVar3 = loadVectorLeftIndexed(in_r0,0x4d4320);
  auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar3 = ZEXT416(0xffffffff);
  auVar11 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar13 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = ZEXT416(0xffffffff);
  auVar5 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar11 = vectorReciprocalEstimateFloatingPoint(auVar4);
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar6);
  auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar3 = ZEXT416(0xffffffff);
  auVar16 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar4,auVar7);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar10,auVar6,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar3,auVar8);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar14,auVar9);
  auVar3 = ZEXT416(0xffffffff);
  auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar11 = loadVectorLeftIndexed(0x14,param_1);
  auVar10 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar4,auVar7);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar12);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar13);
  auVar13 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = ZEXT416(0xffffffff);
  auVar15 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
  auVar12 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar14 = loadVectorLeftIndexed(0x18,param_1);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar4,auVar7);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar4 = vectorShiftLeftIntegerWord(auVar15,auVar15);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar8,auVar3,auVar10);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar9,auVar5,auVar13);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar3,auVar11,auVar12);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar14,auVar4);
  auVar4 = vectorCompareGreaterThanFloatingPoint(auVar5,auVar3);
  auVar3 = vectorConditionalSelect(auVar5,auVar3,auVar4);
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar1 = storeVectorElementWordIndexed
                    (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x28,param_1);
  *(undefined4 *)(iVar2 + 0x28U & 0xfffffffc) = uVar1;
  *(undefined4 *)(iVar2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x20) = 0x3f800000;
  return;
}


// 0x04d4404 (0x18 bytes)
void FUN_004d4404(undefined8 param_1,int param_2)

{
  if (*(int *)(param_2 + 0xa0) != 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  return;
}


// 0x04d441c (0x84 bytes)
void FUN_004d441c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  bVar1 = *param_1;
  bVar2 = param_1[1];
  param_2[2] = 0x10303;
  uVar4 = *(undefined4 *)(param_1 + 8);
  param_2[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
  param_2[3] = (uint)bVar2 * 0x8000 - 0x8000 | 0x80000000;
  uVar3 = *(undefined4 *)(param_1 + 4);
  param_2[5] = 0x2062000;
  param_2[4] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = *(uint *)(param_1 + 0x10) | 0x100000;
  return;
}


// 0x04d44a0 (0x9c bytes)
bool FUN_004d44a0(undefined2 param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_4 + (param_2 * param_5 + 0x7fU & 0xffffff80));
  *puVar2 = 0xa1;
  puVar2[1] = 1;
  puVar2[3] = 0;
  puVar2[2] = 2;
  puVar2[0xe] = 1;
  *(undefined2 *)(puVar2 + 8) = param_1;
  *(undefined4 *)(puVar2 + 4) = 0xaae4;
  iVar1 = g_pIdolDraw;
  *(short *)(puVar2 + 10) = (short)param_2;
  *(undefined2 *)(puVar2 + 0xc) = 1;
  *(int *)(puVar2 + 0x10) = param_5;
  param_4 = param_4 - *(int *)(iVar1 + 0x4a8);
  *(int *)(puVar2 + 0x14) = param_4;
  if (param_4 != 0) {
    *param_3 = puVar2;
  }
  return param_4 != 0;
}


// 0x04d453c (0x190 bytes)
void FUN_004d453c(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,uint *param_6,
                 int *param_7)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar4 = iVar7 + ((uint)(ZERO_MASK(*(int *)(param_1 + 0x18))) & -iVar7);
  uVar1 = *(int *)(param_1 + 0xc) + 0xfU & 0xfffffff0;
  uVar6 = iVar7 + ((uint)(ZERO_MASK(*(int *)(param_1 + 0x3c))) & -iVar7);
  iVar5 = uVar1 + ((uint)(ZERO_MASK(*(int *)(param_1 + 0x24))) & -uVar1);
  uVar1 = *(int *)(param_1 + 8) * uVar4 + 0x7f & 0xffffff80;
  uVar2 = uVar6 * *(int *)(param_1 + 8) + 0x7f & 0xffffff80;
  uVar3 = (longlong)*(int *)(param_1 + 0x10) * (longlong)iVar5 + 0x7fU & 0xffffff80;
  iVar7 = uVar1 + 0x80 + ((uint)(ZERO_MASK(uVar1)) & uVar1 - (uVar1 + 0x80));
  *param_4 = iVar7;
  iVar7 = uVar2 + 0x80 + ((uint)(ZERO_MASK(uVar2)) & uVar2 - (uVar2 + 0x80)) +
          iVar7;
  uVar3 = uVar3 + 0x80 + (ZERO_MASK((int)uVar3) & uVar3 - (uVar3 + 0x80));
  *param_2 = iVar7;
  *param_3 = iVar7 + (int)uVar3;
  *param_5 = iVar7 + (int)((uVar3 & 0xffffffff) << 1);
  *param_6 = uVar4 | uVar6;
  *param_7 = iVar5;
  return;
}


// 0x04d46cc (0x474 bytes)
undefined8 FUN_004d46cc(int param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c [3];
  
  FUN_004d453c(param_3,&local_70,&local_6c,&local_68,&local_64,&local_60,local_5c);
  iVar9 = local_64 * *param_3 + 0x80;
  *(int *)(param_1 + 0x58) = iVar9;
  uVar7 = idol::AllocateMemAlign(param_2,iVar9,0x80);
  iVar9 = 0;
  param_3[0x28] = (int)uVar7;
  *(int *)(param_1 + 0x54) = (int)uVar7;
  if (0 < *param_3) {
    puVar10 = &DAT_010ee1c0;
    puVar11 = &DAT_010ee1e4;
    puVar12 = &DAT_010ee208;
    puVar6 = puVar10;
    piVar13 = param_3;
    piVar14 = param_3;
    do {
      if (piVar13[6] != 0) {
        piVar13[7] = (int)uVar7;
        iVar8 = param_3[1];
        iVar3 = param_3[2];
        piVar13[8] = local_60;
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x1e,uVar7);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x1e];
        *puVar10 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar10[2] = 0x10303;
        puVar10[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar10[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar10[5] = 0x2062000;
        puVar10[4] = uVar5;
        puVar10[6] = *(undefined4 *)(pbVar4 + 8);
        puVar10[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[9] != 0) {
        piVar13[10] = (int)(uVar7 + local_70);
        iVar8 = param_3[3];
        iVar3 = param_3[4];
        piVar13[0xb] = local_5c[0];
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x1f,uVar7 + local_70 & 0xffffffff);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x1f];
        *puVar11 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar11[2] = 0x10303;
        puVar11[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar11[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar11[5] = 0x2062000;
        puVar11[4] = uVar5;
        puVar11[6] = *(undefined4 *)(pbVar4 + 8);
        puVar11[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[0xc] != 0) {
        iVar8 = param_3[3];
        iVar3 = param_3[4];
        piVar13[0xe] = local_5c[0];
        piVar13[0xd] = (int)(uVar7 + local_6c);
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x20,uVar7 + local_6c & 0xffffffff);
        if (iVar8 == 0) goto LAB_004d4af4;
        pbVar4 = (byte *)piVar14[0x20];
        *puVar12 = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar12[2] = 0x10303;
        puVar12[1] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar12[3] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar12[5] = 0x2062000;
        puVar12[4] = uVar5;
        puVar12[6] = *(undefined4 *)(pbVar4 + 8);
        puVar12[7] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      if (piVar13[0xf] != 0) {
        piVar13[0x10] = (int)(uVar7 + local_68);
        iVar8 = param_3[1];
        iVar3 = param_3[2];
        piVar13[0x11] = local_60;
        iVar8 = FUN_004d44a0(iVar8,iVar3,piVar14 + 0x21,uVar7 + local_68 & 0xffffffff);
        if (iVar8 == 0) {
LAB_004d4af4:
          if (param_3[0x28] != 0) {
            param_3[0x28] = 0;
          }
          return 0;
        }
        pbVar4 = (byte *)piVar14[0x21];
        puVar6[0x24] = *(undefined4 *)(pbVar4 + 0x14);
        bVar1 = *pbVar4;
        bVar2 = pbVar4[1];
        puVar6[0x26] = 0x10303;
        puVar6[0x25] = (uint)bVar2 << 0x10 | (uint)bVar1 << 8 | 0x8028 | 2;
        puVar6[0x27] = (uint)pbVar4[1] * 0x8000 - 0x8000 | 0x80000000;
        uVar5 = *(undefined4 *)(pbVar4 + 4);
        puVar6[0x29] = 0x2062000;
        puVar6[0x28] = uVar5;
        puVar6[0x2a] = *(undefined4 *)(pbVar4 + 8);
        puVar6[0x2b] = *(uint *)(pbVar4 + 0x10) | 0x100000;
      }
      piVar14[0x22] = 0;
      iVar9 = iVar9 + 1;
      piVar13 = piVar13 + 0xc;
      puVar10 = puVar10 + 0x24;
      puVar11 = puVar11 + 0x24;
      puVar12 = puVar12 + 0x24;
      uVar7 = uVar7 + local_64 & 0xffffffff;
      piVar14 = piVar14 + 5;
      puVar6 = puVar6 + 0x24;
    } while (iVar9 < *param_3);
  }
  param_3[0x29] = local_64;
  return 1;
}


// 0x04d4b40 (0x54 bytes)
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

void FUN_004d4b40(int param_1)

{
  print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
             (ulonglong)*(uint *)(param_1 + 0x58));
  FUN_004fe61c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x54));
  return;
}


// 0x04d4b94 (0xf4 bytes)
void FUN_004d4b94(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  iVar1 = 0;
  if (0 < DAT_010ee118) {
    piVar8 = &DAT_010ee130;
    piVar3 = &DAT_010ee154;
    puVar9 = &DAT_010ee134;
    puVar2 = &DAT_010ee158;
    piVar7 = &DAT_010ee13c;
    puVar6 = &DAT_010ee140;
    piVar5 = &DAT_010ee148;
    puVar4 = &DAT_010ee14c;
    do {
      if (*piVar8 != 0) {
        *puVar9 = 0;
      }
      if (*piVar7 != 0) {
        *puVar6 = 0;
      }
      if (*piVar5 != 0) {
        *puVar4 = 0;
      }
      if (*piVar3 != 0) {
        *puVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0xc;
      piVar8 = piVar8 + 0xc;
      piVar3 = piVar3 + 0xc;
      puVar9 = puVar9 + 0xc;
      piVar7 = piVar7 + 0xc;
      puVar6 = puVar6 + 0xc;
      piVar5 = piVar5 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 < DAT_010ee118);
  }
  FUN_004fe61c(*param_1,param_1[0x13]);
  return;
}


// 0x04d4c88 (0x144 bytes)
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

void FUN_004d4c88(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  
  if (param_1[2] != 0) {
    param_1[4] = 1;
    FUN_005ee638(param_1[2]);
    iVar9 = DAT_010ee118;
    param_1[2] = 0;
    if (0 < iVar9) {
      piVar4 = &DAT_010ee118;
      iVar9 = 0;
      puVar5 = &DAT_010ee140;
      puVar3 = &DAT_010ee14c;
      piVar8 = &DAT_010ee130;
      piVar2 = &DAT_010ee154;
      puVar7 = &DAT_010ee134;
      puVar1 = &DAT_010ee158;
      piVar6 = &DAT_010ee13c;
      do {
        piVar4 = piVar4 + 0xc;
        if (*piVar8 != 0) {
          *puVar7 = 0;
        }
        if (*piVar6 != 0) {
          *puVar5 = 0;
        }
        if (*piVar4 != 0) {
          *puVar3 = 0;
        }
        if (*piVar2 != 0) {
          *puVar1 = 0;
        }
        iVar9 = iVar9 + 1;
        puVar3 = puVar3 + 0xc;
        piVar8 = piVar8 + 0xc;
        piVar2 = piVar2 + 0xc;
        puVar7 = puVar7 + 0xc;
        piVar6 = piVar6 + 0xc;
        puVar5 = puVar5 + 0xc;
        puVar1 = puVar1 + 0xc;
      } while (iVar9 < DAT_010ee118);
    }
    FUN_004fe61c(*param_1,param_1[0x13]);
    print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
               (ulonglong)(uint)param_1[0x16]);
    FUN_004fe61c(param_1[1],param_1[0x15]);
  }
  return;
}


// 0x04d4dd0 (0x48c bytes)
// strings: 00658ec8: 'OpenBinkFile -- Errors %s\n'

int BinkPlayer_Open(BinkPlayer *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  size_t sVar6;
  int32_t iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  undefined8 in_LR;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  cellSysutilCheckCallback();
  uVar5 = FUN_005f3984(param_2,param_3);
  puVar1 = (undefined4 *)param_1;
  puVar1[2] = uVar5;
  cellSysutilCheckCallback();
  uVar4 = FUN_005ea348();
  sVar6 = strlen((char *)uVar4);
  if (sVar6 != 0) {
    iVar7 = printf("OpenBinkFile -- Errors %s\n",uVar4);
    do {
      iVar7 = cellSysutilCheckCallback(iVar7);
    } while( true );
  }
  lVar20 = ZEXT48(g_pGame) + 0x7c;
  *puVar1 = (int)lVar20;
  uVar4 = FUN_0050436c(g_pGame);
  iVar21 = 0;
  piVar22 = &DAT_010ee118;
  puVar1[1] = (int)uVar4;
  FUN_005ea3e8(puVar1[2],&DAT_010ee118);
  iVar8 = 0;
  bVar3 = false;
  if (0 < DAT_010ee118) {
    piVar9 = &DAT_010ee130;
    puVar10 = &DAT_010ee138;
    puVar15 = &DAT_010ee150;
    puVar11 = &DAT_010ee134;
    puVar16 = &DAT_010ee14c;
    piVar12 = &DAT_010ee13c;
    piVar17 = &DAT_010ee154;
    puVar13 = &DAT_010ee144;
    puVar18 = &DAT_010ee15c;
    puVar14 = &DAT_010ee140;
    puVar19 = &DAT_010ee158;
    iVar21 = 0;
    do {
      piVar22 = piVar22 + 0xc;
      if (*piVar9 != 0) {
        uVar2 = DAT_010ee11c + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee120;
        *puVar10 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar11 = uVar5;
        if (!bVar3) {
          bVar3 = true;
          puVar1[0x13] = uVar5;
        }
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar12 != 0) {
        uVar2 = DAT_010ee124 + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee128;
        *puVar13 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar14 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar22 != 0) {
        uVar2 = DAT_010ee124 + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee128;
        *puVar15 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar16 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      if (*piVar17 != 0) {
        uVar2 = DAT_010ee11c + 0xfU & 0xfffffff0;
        iVar23 = uVar2 * DAT_010ee120;
        *puVar18 = uVar2;
        iVar23 = iVar23 * 4;
        uVar5 = idol::AllocateMemAlign(lVar20,iVar23,0x10);
        *puVar19 = uVar5;
        iVar21 = iVar23 + iVar21;
        FUN_004fe6ec(lVar20,iVar23);
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 0xc;
      puVar10 = puVar10 + 0xc;
      puVar11 = puVar11 + 0xc;
      puVar16 = puVar16 + 0xc;
      piVar12 = piVar12 + 0xc;
      piVar17 = piVar17 + 0xc;
      puVar13 = puVar13 + 0xc;
      puVar18 = puVar18 + 0xc;
      puVar14 = puVar14 + 0xc;
      puVar15 = puVar15 + 0xc;
      puVar19 = puVar19 + 0xc;
    } while (iVar8 < DAT_010ee118);
  }
  puVar1[0x14] = iVar21;
  FUN_004fe6ec(lVar20,iVar21);
  FUN_004d46cc(param_1,uVar4,&DAT_010ee118);
  FUN_005ea4dc(puVar1[2],&DAT_010ee118);
  auVar24 = ZEXT416(0xffffffff);
  auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = loadVectorLeftIndexed(in_LR,(ulonglong)(uint)puVar1[2]);
  auVar26 = loadVectorLeftIndexed(4,(ulonglong)(uint)puVar1[2]);
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
  auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  auVar24 = loadVectorLeftIndexed(in_LR,0x4d4dcc);
  auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar37 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar30,auVar30);
  auVar24 = vectorReciprocalEstimateFloatingPoint(auVar25);
  auVar30 = vectorReciprocalEstimateFloatingPoint(auVar27);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar25,auVar28);
  auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar29);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar34,auVar31);
  auVar24 = ZEXT416(0xffffffff);
  auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar33 = loadVectorLeftIndexed(0x14,param_1);
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar25,auVar28);
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar32);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar24);
  auVar32 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar24 = ZEXT416(0xffffffff);
  auVar36 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar35 = loadVectorLeftIndexed(0x18,param_1);
  auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar25,auVar28);
  auVar26 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar27,auVar28);
  auVar25 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar29,auVar24,auVar34);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar30,auVar26,auVar32);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar31);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar35,auVar25);
  auVar25 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar24);
  auVar24 = vectorConditionalSelect(auVar26,auVar24,auVar25);
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar5 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x28,param_1);
  *(undefined4 *)((uint)(puVar1 + 10) & 0xfffffffc) = uVar5;
  puVar1[7] = 0x3f800000;
  puVar1[8] = 0x3f800000;
  puVar1[4] = 2;
  FUN_005f0a98();
  return puVar1[2];
}


// 0x04d525c (0xac bytes)
// strings: 00658eec: '/%s/ps3data/movies/mpeg%d.bik'

void FUN_004d525c(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar2;
  undefined8 uVar1;
  char acStack_120 [128];
  GPiece<128> auStack_a0;
  
  iVar2 = snprintf(acStack_120,"/%s/ps3data/movies/mpeg%d.bik",
                         ZEXT48((&PTR_DAT_008fa400)[*(int *)(param_1 + 0x5c)]),param_2);
  uVar1 = FileSys_Get(iVar2);
  FileSys_ResolvePath(uVar1,acStack_120,auStack_a0);
  BinkPlayer_Open(param_1,auStack_a0,param_3 | 0x84000);
  return;
}


// 0x04d5310 (0x130 bytes)
// strings: 00658eec: '/%s/ps3data/movies/mpeg%d.bik'

undefined4 FUN_004d5310(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int iVar2;
  undefined8 uVar1;
  char acStack_140 [128];
  GPiece<128> auStack_c0;
  int local_40 [8];
  
  local_40[0] = param_3;
  if (param_3 == 1) {
    local_40[0] = 0;
  }
  FUN_005ea398(1,local_40);
  iVar2 = snprintf(acStack_140,"/%s/ps3data/movies/mpeg%d.bik",
                         ZEXT48((&PTR_DAT_008fa400)[*(int *)(param_1 + 0x5c)]),param_2);
  uVar1 = FileSys_Get(iVar2);
  FileSys_ResolvePath(uVar1,acStack_140,auStack_c0);
  BinkPlayer_Open(param_1,auStack_c0,param_4 | 0x84000);
  FUN_005ed898(*(undefined4 *)(param_1 + 8),local_40[0],
               (int)((float)(longlong)(int)g_GameSettings.MusicVolume * 0.0009765625 * 32768.0));
  return *(undefined4 *)(param_1 + 8);
}


// 0x04d5448 (0xd4 bytes)
int BinkPlayer_Start(BinkPlayer *param_1,char *param_2,int param_3,int param_4)

{
  int local_30 [6];
  
  local_30[0] = param_3;
  if (param_3 == 1) {
    local_30[0] = 0;
  }
  FUN_005ea398(1,local_30);
  BinkPlayer_Open(param_1,param_2,param_4 | 0x84000);
  FUN_005ed898(*(undefined4 *)(param_1 + 8),local_30[0],
               (int)((float)(longlong)(int)g_GameSettings.MusicVolume * 0.0009765625 * 32768.0));
  return *(undefined4 *)(param_1 + 8);
}


// 0x04d551c (0x8 bytes)
undefined4 FUN_004d551c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


// 0x04d5524 (0xc bytes)
int BinkPlayer_GetState(BinkPlayer *param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


// 0x04d5530 (0x28 bytes)
void FUN_004d5530(undefined8 param_1,undefined8 param_2)

{
  FUN_005ee638(param_2);
  return;
}


// 0x04d5558 (0x3c bytes)
undefined4 * FUN_004d5558(undefined8 param_1,int param_2)

{
  return &DAT_010ee1c0 + param_2 * 9 + DAT_010ee12c * 0x24;
}


// 0x04d5594 (0x2ec bytes)
void FUN_004d5594(undefined8 param_1,uint param_2)

{
  RsxCmd *pRVar1;
  RsxCmd *pRVar2;
  RsxCmd *pRVar3;
  RsxCmd *pRVar4;
  RsxCmd *pRVar5;
  RsxCmd *pRVar6;
  RsxCmd RVar7;
  RenderingStep *pRVar8;
  short sVar9;
  short sVar10;
  
  param_2 = param_2 & 0xff;
  sVar10 = ((ushort)(ZERO_MASK(param_2)) & 0x14) + 0x1ec;
  sVar9 = ((ushort)(ZERO_MASK(param_2)) & 0xffec) + 0x14;
  FUN_004d6bb0(HUD_Pass,0,&DAT_010ee1c0 + DAT_010ee12c * 0x24);
  FUN_004d6bb0(HUD_Pass,1,&DAT_010ee1e4 + DAT_010ee12c * 0x24);
  FUN_004d6bb0(HUD_Pass,2,&DAT_010ee208 + DAT_010ee12c * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar1 = HUD_Pass->command;
  HUD_Pass->command = pRVar1 + 2;
  pRVar2 = HUD_Pass->command;
  HUD_Pass->command = pRVar2 + 6;
  pRVar3 = HUD_Pass->command;
  HUD_Pass->command = pRVar3 + 2;
  pRVar4 = HUD_Pass->command;
  HUD_Pass->command = pRVar4 + 2;
  pRVar5 = HUD_Pass->command;
  HUD_Pass->command = pRVar5 + 2;
  pRVar8 = HUD_Pass;
  pRVar6 = HUD_Pass->command;
  *pRVar1 = 0x41948;
  pRVar8->command = pRVar6 + 2;
  pRVar8 = HUD_Pass;
  pRVar1[1] = 0xffffffff;
  pRVar1 = pRVar8->command;
  *pRVar2 = 0x400c1714;
  pRVar2[1] = 0;
  pRVar8->command = pRVar1 + 2;
  pRVar8 = HUD_Pass;
  pRVar2[2] = 0;
  pRVar2[3] = 0;
  pRVar2[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2[5] = 8;
  pRVar2 = pRVar8->command;
  *pRVar3 = 0x41904;
  pRVar3[1] = 0;
  *pRVar4 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar8->command = pRVar2 + 2;
  pRVar8 = HUD_Pass;
  RVar7 = (((uint)(ZERO_MASK(param_2)) & 0x10) + 400) * 0x10000;
  pRVar4[1] = (int)sVar9;
  *pRVar5 = 0x41904;
  pRVar3 = pRVar8->command;
  pRVar5[1] = 0x10000;
  *pRVar6 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar6[1] = RVar7 | (int)sVar9;
  *pRVar1 = 0x41904;
  pRVar8->command = pRVar3 + 2;
  pRVar8 = HUD_Pass;
  pRVar1[1] = 0x10001;
  *pRVar2 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2[1] = RVar7 | (int)sVar10;
  pRVar1 = pRVar8->command;
  *pRVar3 = 0x41904;
  pRVar3[1] = 1;
  pRVar8->command = pRVar1 + 2;
  pRVar8 = HUD_Pass;
  *pRVar1 = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar1[1] = (int)sVar10;
  pRVar1 = pRVar8->command;
  *pRVar1 = NV4097_SET_BEGIN_END_x1;
  pRVar1[1] = 0;
  pRVar8->command = pRVar1 + 2;
  return;
}


// 0x04d5880 (0xb4 bytes)
void FUN_004d5880(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = g_pIdolDraw;
  uVar1 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_pIdolDraw + 0xc)) << 0x20) >> 0x25;
  if (DAT_010ee154 == 0) {
    idol_draw::BindFragmentProgram(g_pIdolDraw,HUD_Pass,0x14);
    FUN_004d5594(param_1,uVar1);
  }
  else {
    FUN_004d5594(param_1,uVar1);
  }
  idol_draw::BindFragmentProgram(iVar2,HUD_Pass,0xc);
  return;
}


// 0x04d5934 (0xb4 bytes)
void FUN_004d5934(undefined8 param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = g_pIdolDraw;
  uVar1 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_pIdolDraw + 0xc)) << 0x20) >> 0x25;
  if (DAT_010ee154 == 0) {
    idol_draw::BindFragmentProgram(g_pIdolDraw,HUD_Pass,0x14);
    FUN_004d5594(param_1,uVar1);
  }
  else {
    FUN_004d5594(param_1,uVar1);
  }
  idol_draw::BindFragmentProgram(iVar2,HUD_Pass,0xc);
  return;
}


// 0x04d59e8 (0x324 bytes)
// strings: 00658e78: 'BINK Player' | 00658e88: 'Freeing textures from movie.  Size in bytes giving back: %d\n'

int BinkPlayer_DrawFrame(BinkPlayer *param_1)

{
  RsxCmd *pRVar1;
  ulonglong uVar2;
  bool bVar3;
  RenderingStep *pRVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  
  cellSysutilCheckCallback();
  pRVar4 = DepthPass;
  bVar3 = false;
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar4->command[1] = 0xff000000;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar4->command[1] = 0xffffff00;
  pRVar4->command = pRVar4->command + 2;
  pRVar4 = DepthPass;
  *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar4->command[1] = 0xf3;
  pRVar1 = pRVar4->command;
  pRVar4->command = pRVar1 + 2;
  pRVar1[2] = NV4097_NO_OPERATION_x1;
  pRVar4->command[1] = 0;
  iVar5 = param_1[4];
  pRVar4->command = pRVar4->command + 2;
  iVar6 = param_1[2];
  if ((iVar5 != 1) && (bVar3 = false, iVar5 != 0)) {
    bVar3 = true;
    iVar5 = FUN_005edea0();
    iVar6 = param_1[2];
    if (iVar5 == 0) {
      param_1[4] = 3;
      FUN_005f0a98();
      while (iVar5 = FUN_005ef740(param_1[2]), iVar5 != 0) {
        FUN_005efeb0(param_1[2]);
        FUN_005f0a98(param_1[2]);
      }
      FUN_005efeb0(param_1[2]);
      iVar6 = param_1[2];
      if (*(int *)(iVar6 + 0xc) == *(int *)(iVar6 + 8)) {
        if (iVar6 != 0) {
          param_1[4] = 1;
          FUN_005ee638();
          param_1[2] = 0;
          if (0 < DAT_010ee118) {
            piVar10 = &DAT_010ee118;
            iVar5 = 0;
            puVar11 = &DAT_010ee140;
            puVar9 = &DAT_010ee14c;
            piVar14 = &DAT_010ee130;
            piVar8 = &DAT_010ee154;
            puVar13 = &DAT_010ee134;
            puVar7 = &DAT_010ee158;
            piVar12 = &DAT_010ee13c;
            do {
              piVar10 = piVar10 + 0xc;
              if (*piVar14 != 0) {
                *puVar13 = 0;
              }
              if (*piVar12 != 0) {
                *puVar11 = 0;
              }
              if (*piVar10 != 0) {
                *puVar9 = 0;
              }
              if (*piVar8 != 0) {
                *puVar7 = 0;
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 0xc;
              piVar14 = piVar14 + 0xc;
              piVar8 = piVar8 + 0xc;
              puVar13 = puVar13 + 0xc;
              piVar12 = piVar12 + 0xc;
              puVar11 = puVar11 + 0xc;
              puVar7 = puVar7 + 0xc;
            } while (iVar5 < DAT_010ee118);
          }
          FUN_004fe61c(*param_1,param_1[0x13]);
          print_tty2("BINK Player","Freeing textures from movie.  Size in bytes giving back: %d\n",
                     (ulonglong)(uint)param_1[0x16]);
          FUN_004fe61c(param_1[1],param_1[0x15]);
        }
        return 1;
      }
    }
  }
  iVar5 = g_pIdolDraw;
  if (bVar3 && iVar6 != 0) {
    uVar2 = (ulonglong)(LZCOUNT(*(undefined4 *)(g_pIdolDraw + 0xc)) << 0x20) >> 0x25;
    if (DAT_010ee154 == 0) {
      idol_draw::BindFragmentProgram(g_pIdolDraw,HUD_Pass,0x14);
      FUN_004d5594(param_1,uVar2);
    }
    else {
      FUN_004d5594(param_1,uVar2);
    }
    idol_draw::BindFragmentProgram(iVar5,HUD_Pass,0xc);
  }
  return 0;
}


// 0x04d5d0c (0x50 bytes)
void BinkPlayer_Stop(BinkPlayer *param_1)

{
  if (*(int *)(param_1 + 0x5c) != -1) {
    FUN_005ee638(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_005ef8f0();
  }
  return;
}


// 0x04d5d5c (0x24 bytes)
void BinkPlayer_Init(BinkPlayer *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x44000000;
  *(undefined4 *)(param_1 + 0x18) = 0x43d00000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return;
}


// 0x04d5d80 (0x24 bytes)
void FUN_004d5d80(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x44000000;
  *(undefined4 *)(param_1 + 0x18) = 0x43d00000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  return;
}


// 0x04d5da4 (0x4 bytes)
void FUN_004d5da4(BinkPlayer *param_1,int param_2)

{
  return;
}


// 0x04d5da8 (0x4 bytes)
void FUN_004d5da8(void)

{
  return;
}


// 0x04d5dac (0x3c bytes)
void FUN_004d5dac(undefined8 param_1,uint param_2)

{
  RenderingStep *pRVar1;
  
  pRVar1 = HUD_Pass;
  *HUD_Pass->command = (param_2 & 0xff) * 0x20 + 0x1a0c | NV4097_SET_OBJECT_x1;
  pRVar1->command[1] = 0;
  pRVar1->command = pRVar1->command + 2;
  return;
}


// 0x04d5df0 (0x58 bytes)
void FUN_004d5df0(void)

{
  if (*DAT_010ef520 != DAT_010ef520[1]) {
    do {
      syscall();
    } while (*DAT_010ef520 != DAT_010ef520[1]);
  }
  return;
}


// 0x04d5e48 (0x164 bytes)
// strings: 00658f40: 'Renderer timed out\n'

void FUN_004d5e48(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 40000;
  iVar2 = *(int *)(DAT_010ef520 + 8);
  while (iVar2 != param_1) {
    syscall();
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      printf("Renderer timed out\n");
    }
    iVar2 = *(int *)(DAT_010ef520 + 8);
  }
  lVar1 = sys_time_get_system_time();
  if ((longlong)((ZERO_MASK((0x32 - *(int *)(g_pIdolDraw + 0x18))) & 4000U) + 18000)
      < lVar1 - DAT_010ef500) {
    iVar2 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar2 + ((uint)(0x14 - (longlong)iVar2 >> 0x3f) & 0x14U - iVar2);
  }
  else {
    iVar2 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar2 + (iVar2 >> 0x1f & -iVar2);
  }
  g_PartNoShrink.piece<0,1>() = (char)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar1;
  return;
}


// 0x04d5fac (0x38 bytes)
undefined8 FUN_004d5fac(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == *param_2) {
    if (param_1[2] == param_2[2]) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x04d5fe4 (0x5e4 bytes)
void idol_draw::DrawDepth(RenderingStep *param_1,ulonglong param_2)

{
  RsxCmd *pRVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_1[0xb].commandLen = (int)(param_2 >> 0x20);
  param_1[0xb].command = (RsxCmd *)(int)param_2;
  uVar2 = (uint)param_2 & 0xff;
  pRVar1 = param_1->command;
  DAT_010ee318 = param_2;
  if (uVar2 < 0x62) {
    if (uVar2 == 0x48) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x10001;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if (uVar2 == 0x44) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x3030303;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if (uVar2 == 0x42) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x8006800b;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x3020302;
      param_1->command[2] = 0x10001;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
    else if ((param_2 & 0xff) == 0) {
      *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
      param_1->command[1] = 0x80068006;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 2;
      pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      param_1->command[1] = 0x10001;
      param_1->command[2] = 0;
      pRVar1 = param_1->command;
      param_1->command = pRVar1 + 3;
      pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      param_1->command[1] = 1;
      param_1->command = param_1->command + 2;
    }
  }
  else if (uVar2 == 0xa1) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x8006800b;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x7e) {
    *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x3020302;
    param_1->command[2] = 0x3030303;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x68) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 100) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x80068006;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80038003;
    param_1->command[2] = 0x80048004;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 0;
    param_1->command = param_1->command + 2;
  }
  else if (uVar2 == 0x62) {
    lVar3 = (param_2 >> 0x20 & 0xff) + 1;
    uVar4 = lVar3 + (0xff - lVar3 >> 0x3f & 0xffU - lVar3);
    *pRVar1 = NV4097_SET_BLEND_COLOR_x1;
    param_1->command[1] =
         (RsxCmd)uVar4 | (RsxCmd)((uVar4 & 0xffffffff) << 8) |
         (RsxCmd)((uVar4 & 0xffffffff) << 0x10) | (RsxCmd)((uVar4 & 0xffffffff) << 0x18);
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_EQUATION_x1;
    param_1->command[1] = 0x8006800b;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 2;
    pRVar1[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    param_1->command[1] = 0x80030000;
    param_1->command[2] = 0x10001;
    pRVar1 = param_1->command;
    param_1->command = pRVar1 + 3;
    pRVar1[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    param_1->command[1] = 1;
    param_1->command = param_1->command + 2;
  }
  return;
}


// 0x04d65c8 (0x6c bytes)
void FUN_004d65c8(int param_1,ulonglong param_2)

{
  int iVar1;
  
  if ((param_2 & 1) == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40a70;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 1;
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    **(undefined4 **)(param_1 + 8) = 0x40a70;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar1 = *(int *)(param_1 + 8);
  }
  *(ulonglong *)(param_1 + 0xd0) = param_2;
  *(int *)(param_1 + 8) = iVar1 + 8;
  DAT_010ee308 = param_2;
  return;
}


// 0x04d6634 (0xd0 bytes)
void FUN_004d6634(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 >> 1 & 7;
  if ((int)uVar3 == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar2 = *(int *)(param_1 + 8) + 8;
  }
  else if ((param_2 & 1) == 0) {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    iVar2 = *(int *)(param_1 + 8) + 8;
  }
  else {
    **(undefined4 **)(param_1 + 8) = 0x40304;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 1;
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar2 + 8;
    uVar1 = *(undefined4 *)(&DAT_00658f1c + (int)(uVar3 << 2));
    *(undefined4 *)(iVar2 + 8) = 0x80308;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = uVar1;
    *(uint *)(*(int *)(param_1 + 8) + 8) = (uint)(param_2 >> 4) & 0xff;
    iVar2 = *(int *)(param_1 + 8) + 0xc;
  }
  *(ulonglong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 8) = iVar2;
  DAT_010ee2f0 = param_2;
  return;
}


// 0x04d6704 (0x68 bytes)
void FUN_004d6704(ulonglong param_1,int *param_2,int *param_3)

{
  *param_2 = ((uint)(ZERO_MASK((1 - ((uint)param_1 & 3)))) & 2) + 1;
  *param_3 = ((uint)(ZERO_MASK((1 - ((uint)(param_1 >> 2) & 3)))) & 2) + 1;
  return;
}


// 0x04d676c (0x11c bytes)
void FUN_004d676c(RenderingStep *param_1,int param_2,u8 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    *(undefined4 **)(param_1 + 0xc0) = param_3;
  }
  if ((param_2 & 0xffffffff) < 4) {
    iVar4 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(iVar4 + 0x14) = *param_3;
    *(undefined4 *)(iVar4 + 0x18) = uVar1;
    *(undefined4 *)(iVar4 + 0x1c) = uVar2;
    *(undefined4 *)(iVar4 + 0x20) = uVar3;
    uVar1 = param_3[5];
    uVar2 = param_3[6];
    uVar3 = param_3[7];
    *(undefined4 *)(iVar4 + 0x24) = param_3[4];
    *(undefined4 *)(iVar4 + 0x28) = uVar1;
    *(undefined4 *)(iVar4 + 0x2c) = uVar2;
    *(undefined4 *)(iVar4 + 0x30) = uVar3;
    *(undefined4 *)(iVar4 + 0x34) = param_3[8];
  }
  **(uint **)(param_1 + 8) = (int)((param_2 & 0xffffffff) << 5) + 0x1a00U | 0x1c0000;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *param_3;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = param_3[1];
  *(uint *)(*(int *)(param_1 + 8) + 0xc) = (uint)((param_5 & 0xffffffff) << 8) | 0x10000 | param_4;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = param_3[3];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = param_3[4];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = param_3[5];
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c) = param_3[6];
  *(uint *)(*(int *)(param_1 + 8) + 0x20) = (int)((param_2 & 0xffffffff) << 2) + 0x1840U | 0x40000;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x24) = param_3[7];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
  return;
}


// 0x04d6888 (0xc0 bytes)
void FUN_004d6888(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  if ((int)param_2 == 0) {
    *(ulonglong *)(param_1 + 0xa8) = param_4;
    TexSamplerFlags = param_4;
  }
  FUN_004d676c(param_1,param_2,param_3,(ZERO_MASK((1 - ((uint)param_4 & 3))) & 2U) + 1
               ,(ZERO_MASK((1 - ((uint)(param_4 >> 2) & 3))) & 2U) + 1);
  return;
}


// 0x04d6948 (0x268 bytes)
void idol_draw::ResetPassState(RenderingStep *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  RsxCmd *pRVar9;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  
  if ((DAT_010ee318 != -1) &&
     (lVar10.piece<0,4>() = param_1[0xb].commandLen, lVar10.piece<4,4>() = param_1[0xb].command,
     DAT_010ee318 != lVar10)) {
    DrawDepth(param_1,DAT_010ee318);
  }
  iVar1.piece<0,1>() = param_1[0xc].field0_0x0;
  iVar1.piece<1,1>() = param_1[0xc].field1_0x1;
  iVar1.piece<2,1>() = param_1[0xc].field2_0x2;
  iVar1.piece<3,1>() = param_1[0xc].field3_0x3;
  if (((iVar1 == 0) && (DAT_010ee308 != 0xffffffffffffffff)) &&
     (uVar7.piece<0,4>() = param_1[10].command, uVar7.piece<4,4>() = param_1[10].callback, DAT_010ee308 != uVar7))
  {
    if ((DAT_010ee308 & 1) == 0) {
      *param_1->command = NV4097_SET_DEPTH_MASK_x1;
      param_1->command[1] = 1;
      pRVar9 = param_1->command;
    }
    else {
      *param_1->command = NV4097_SET_DEPTH_MASK_x1;
      param_1->command[1] = 0;
      pRVar9 = param_1->command;
    }
    param_1[10].command = (RsxCmd *)DAT_010ee308.piece<0,4>();
    param_1[10].callback = (undefined *)DAT_010ee308.piece<4,4>();
    param_1->command = pRVar9 + 2;
  }
  puVar2 = DAT_010ee2f8;
  if ((DAT_010ee2f8 != (undefined *)0x0) && (DAT_010ee2f8 != param_1[9].callback)) {
    param_1[8].command = (RsxCmd *)TexSamplerFlags.piece<0,4>();
    param_1[8].callback = (undefined *)TexSamplerFlags.piece<4,4>();
    FUN_004d676c(param_1,0,puVar2,
                 (ZERO_MASK((1 - ((uint)TexSamplerFlags & 3))) & 2U) + 1,
                 (ZERO_MASK((1 - ((uint)(TexSamplerFlags >> 2) & 3))) & 2U) + 1);
  }
  if ((DAT_010ee2fc != 0) && (DAT_010ee2fc != param_1[9].field7_0x10)) {
    FUN_004d676c(param_1,1,DAT_010ee2fc,
                 (ZERO_MASK((1 - ((uint)DAT_010ee2e8 & 3))) & 2U) + 1,
                 (ZERO_MASK((1 - ((uint)(DAT_010ee2e8 >> 2) & 3))) & 2U) + 1);
  }
  if ((DAT_010ee310 != -1) && (DAT_010ee310 != *(longlong *)&param_1[10].field7_0x10)) {
    *(longlong *)&param_1[10].field7_0x10 = DAT_010ee310;
  }
  if (((DAT_010ee328 != '\0') && (DAT_010ee2f0 != -1)) &&
     (lVar11.piece<0,4>() = param_1[9].commandLen, lVar11.piece<4,4>() = param_1[9].command,
     DAT_010ee2f0 != lVar11)) {
    FUN_004d6634(param_1,DAT_010ee2f0);
  }
  if ((DAT_010ee300 != -1) &&
     (lVar8.piece<0,1>() = param_1[10].field0_0x0, lVar8.piece<1,1>() = param_1[10].field1_0x1,
     lVar8.piece<2,1>() = param_1[10].field2_0x2, lVar8.piece<3,1>() = param_1[10].field3_0x3,
     lVar8.piece<4,4>() = param_1[10].commandLen, DAT_010ee300 != lVar8)) {
    uVar3 = DAT_010ee300.piece<1,1>();
    uVar4 = DAT_010ee300.piece<2,1>();
    uVar5 = DAT_010ee300.piece<3,1>();
    uVar6 = DAT_010ee300.piece<4,4>();
    param_1[10].field0_0x0 = DAT_010ee300.piece<0,1>();
    param_1[10].field1_0x1 = uVar3;
    param_1[10].field2_0x2 = uVar4;
    param_1[10].field3_0x3 = uVar5;
    param_1[10].commandLen = uVar6;
  }
  return;
}


// 0x04d6bb0 (0x150 bytes)
void FUN_004d6bb0(RenderingStep *param_1,ulonglong param_2,RsxCmd *param_3)

{
  RsxCmd RVar1;
  RsxCmd RVar2;
  RsxCmd RVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    param_1[9].callback = (undefined *)param_3;
  }
  if (((3 < (param_2 & 0xffffffff)) ||
      (iVar4 = (int)(param_2 << 5) + (int)(param_2 << 2),
      *(RsxCmd *)(&param_1[1].field0_0x0 + iVar4) != *param_3)) ||
     (*(RsxCmd *)((int)&param_1[1].command + iVar4) != param_3[2])) {
    if ((param_2 & 0xffffffff) < 4) {
      iVar4 = (int)(param_2 << 5) + (int)(param_2 << 2);
      RVar1 = param_3[1];
      RVar2 = param_3[2];
      RVar3 = param_3[3];
      *(RsxCmd *)(&param_1[1].field0_0x0 + iVar4) = *param_3;
      *(RsxCmd *)((int)&param_1[1].commandLen + iVar4) = RVar1;
      *(RsxCmd *)((int)&param_1[1].command + iVar4) = RVar2;
      *(RsxCmd *)((int)&param_1[1].callback + iVar4) = RVar3;
      RVar1 = param_3[5];
      RVar2 = param_3[6];
      RVar3 = param_3[7];
      *(RsxCmd *)((int)&param_1[1].field7_0x10 + iVar4) = param_3[4];
      *(RsxCmd *)(&param_1[2].field0_0x0 + iVar4) = RVar1;
      *(RsxCmd *)((int)&param_1[2].commandLen + iVar4) = RVar2;
      *(RsxCmd *)((int)&param_1[2].command + iVar4) = RVar3;
      *(RsxCmd *)((int)&param_1[2].callback + iVar4) = param_3[8];
    }
    *param_1->command = (int)((param_2 & 0xffffffff) << 5) + 0x1a00 | NV4097_SET_OBJECT_x7;
    param_1->command[1] = *param_3;
    param_1->command[2] = param_3[1];
    param_1->command[3] = param_3[2];
    param_1->command[4] = param_3[3];
    param_1->command[5] = param_3[4];
    param_1->command[6] = param_3[5];
    param_1->command[7] = param_3[6];
    param_1->command[8] = (int)((param_2 & 0xffffffff) << 2) + 0x1840 | NV4097_SET_OBJECT_x1;
    param_1->command[9] = param_3[7];
    param_1->command = param_1->command + 10;
  }
  return;
}


// 0x04d6d00 (0x160 bytes)
void idol_draw::SetTextureUnitRegs(int param_1,ulonglong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_2 == 0) {
    DAT_010ee2f8 = param_3;
    *(int **)(param_1 + 0xc0) = param_3;
  }
  if (((3 < (param_2 & 0xffffffff)) ||
      (iVar3 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2),
      *(int *)(iVar3 + 0x14) != *param_3)) || (*(int *)(iVar3 + 0x1c) != param_3[2])) {
    if ((param_2 & 0xffffffff) < 4) {
      iVar4 = param_1 + (int)(param_2 << 5) + (int)(param_2 << 2);
      iVar3 = param_3[1];
      iVar1 = param_3[2];
      iVar2 = param_3[3];
      *(int *)(iVar4 + 0x14) = *param_3;
      *(int *)(iVar4 + 0x18) = iVar3;
      *(int *)(iVar4 + 0x1c) = iVar1;
      *(int *)(iVar4 + 0x20) = iVar2;
      iVar3 = param_3[5];
      iVar1 = param_3[6];
      iVar2 = param_3[7];
      *(int *)(iVar4 + 0x24) = param_3[4];
      *(int *)(iVar4 + 0x28) = iVar3;
      *(int *)(iVar4 + 0x2c) = iVar1;
      *(int *)(iVar4 + 0x30) = iVar2;
      *(int *)(iVar4 + 0x34) = param_3[8];
    }
    **(uint **)(param_1 + 8) = (int)((param_2 & 0xffffffff) << 5) + 0x1a00U | 0x1c0000;
    *(int *)(*(int *)(param_1 + 8) + 4) = *param_3;
    *(uint *)(*(int *)(param_1 + 8) + 8) = param_3[1] & 0xffffU | 0x14000;
    *(int *)(*(int *)(param_1 + 8) + 0xc) = param_3[2];
    *(int *)(*(int *)(param_1 + 8) + 0x10) = param_3[3];
    *(int *)(*(int *)(param_1 + 8) + 0x14) = param_3[4];
    *(int *)(*(int *)(param_1 + 8) + 0x18) = param_3[5];
    *(int *)(*(int *)(param_1 + 8) + 0x1c) = param_3[6];
    *(uint *)(*(int *)(param_1 + 8) + 0x20) = (int)((param_2 & 0xffffffff) << 2) + 0x1840U | 0x40000
    ;
    *(int *)(*(int *)(param_1 + 8) + 0x24) = param_3[7];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
  }
  return;
}


// 0x04d6e60 (0xd0 bytes)
void idol_draw::BindTexture(RenderingStep *param_1,int param_2,void *param_3,u64 param_4)

{
  GPiece<48> local_30;
  
  SetTextureUnitRegs(param_1,param_2,local_30);
  return;
}


// 0x04d6f50 (0x138 bytes)
void FUN_004d6f50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  iVar3 = (int)param_1;
  auVar5.piece<0,4>() = param_2;
  auVar5.piece<4,4>() = param_2;
  auVar5.piece<8,4>() = param_2;
  auVar5.piece<12,4>() = param_2;
  if (*(char *)(iVar3 + 0x185a4) != '\0') {
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    auVar4 = vectorConvertFromSignedFixedPointWord(auVar5,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar11 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar5 = loadVectorLeftIndexed(4,0x4d6f30);
    auVar6 = loadVectorLeftIndexed(8,0x4d6f30);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar7 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = loadVectorLeftIndexed(0x185a8,param_1);
    auVar6 = loadVectorLeftIndexed(0x30,0x4d6f30);
    auVar12 = loadVectorLeftIndexed(0xc,0x4d6f30);
    auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar8,auVar7);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar5,auVar8,auVar9);
    auVar8 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0x10,0x4d6f30);
    *(int *)(iVar3 + 0x1a80) = param_2;
    auVar6 = vectorMultiplyAddFloatingPoint(auVar4,auVar12,auVar5);
    auVar4 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    iVar1 = *(int *)(iVar3 + 0x4a0);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar10);
    auVar9 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = ZEXT416(0xffffffff);
    auVar10 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar5 = vectorAddFloatingPoint
                       (auVar8,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
    auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar5,auVar9);
    auVar5 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = vectorSubtractFloatingPoint(auVar8,auVar12);
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x1a78,param_1);
    *(undefined4 *)(iVar3 + 0x1a78U & 0xfffffffc) = uVar2;
    auVar5 = loadVectorLeftIndexed(0x14,0x4d6f30);
    auVar4 = loadVectorLeftIndexed(0x18,0x4d6f30);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar10);
    auVar5 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
    auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x1a84,param_1);
    *(undefined4 *)(iVar3 + 0x1a84U & 0xfffffffc) = uVar2;
    if (param_2 == 0 && iVar1 == 1) {
      *(undefined4 *)(iVar3 + 0x4a4) = 0;
    }
    else if ((0 < param_2) && (iVar1 == 0)) {
      *(undefined4 *)(iVar3 + 0x4a4) = 1;
    }
  }
  return;
}


// 0x04d7088 (0x118 bytes)
void FUN_004d7088(u8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  param_1[3] = 1;
  *param_1 = &PTR_PTR_00661710;
  param_1[7] = 0;
  param_1[0x107] = param_1 + 0x108;
  memset(param_1 + 0x108,0xff,0x80);
  DAT_00902e9c = param_1;
  *param_1 = &PTR_PTR_00661840;
  lVar2 = 3;
  puVar1 = param_1;
  do {
    puVar1[0x680] = 0;
    puVar1[0x681] = 0;
    puVar1[0x682] = 0;
    puVar1[0x683] = 0;
    *(undefined1 *)(puVar1 + 0x684) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a11) = 0;
    puVar1[0x685] = 0;
    puVar1[0x686] = &DAT_0066173c;
    puVar1[0x687] = 0;
    puVar1[0x688] = 0;
    puVar1 = puVar1 + 9;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x8b7] = 0x42a00000;
  param_1[0x8ba] = 0x437a0000;
  param_1[0x8b8] = 0x3f333333;
  param_1[0x8b9] = 0x3dcccccd;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  g_pIdolDraw = param_1;
  param_1[0x69e] = 0x3ac49ba6;
  param_1[0x69f] = 0x3f000000;
  param_1[0x6a2] = 0;
  param_1[0x6a0] = 0;
  param_1[0x6a1] = 0x3f800000;
  return;
}


// 0x04d71a0 (0x20 bytes)
void FUN_004d71a0(void)

{
  FUN_004d7088();
  return;
}


// 0x04d71c0 (0x114 bytes)
void * FUN_004d71c0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  GPiece<4> auStack_c0;
  GPiece<96> auStack_bc;
  GPiece<60> auStack_5c;
  
  uVar1 = FUN_0050436c(g_pGame);
  uVar2 = idol::AllocateMemAlign(uVar1,0x60,0x40);
  pvVar3 = (void *)idol::AllocateMemAlign(uVar1,0x30,0x40);
  *(int *)(param_1 + 0x1859c) = (int)(void *)uVar2 - *(int *)(param_1 + 0x4a8);
  *(int *)(param_1 + 0x185a0) = (int)pvVar3 - *(int *)(param_1 + 0x4a8);
  cellGcmAddressToOffset(uVar2,auStack_c0);
  memcpy(auStack_bc,&DAT_008fa56c,0x60);
  memcpy(auStack_5c,&DAT_008fa5cc,0x30);
  memcpy((void *)uVar2,auStack_bc,0x60);
  pvVar3 = memcpy(pvVar3,auStack_5c,0x30);
  return pvVar3;
}


// 0x04d72d4 (0x4 bytes)
void FUN_004d72d4(void)

{
  return;
}


// 0x04d72d8 (0x18c bytes)
void FUN_004d72d8(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x185a4) == '\0') {
    *(undefined4 *)(param_1 + 0x185d0) = 0;
    *(undefined4 *)(param_1 + 0x185c4) = 0;
    *(undefined4 *)(param_1 + 0x185c8) = 0;
    *(undefined4 *)(param_1 + 0x185cc) = 0;
  }
  else {
    lVar3 = ((ulonglong)*(uint *)(param_1 + 0x185ac) - 1 & 0xffffffc0) + 0x40;
    iVar1 = cellGcmGetTiledPitchSize
                      ((lVar3 + (ZERO_MASK(*(uint *)(param_1 + 0x185ac)) & -lVar3)
                       & 0x3fffffffU) << 2);
    *(int *)(param_1 + 0x185c4) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x185a4) = 0;
    }
    else {
      iVar2 = (*(int *)(param_1 + 0x185b0) - 1U & 0xffffffe0) + 0x20;
      iVar2 = iVar1 * (iVar2 + ((uint)(ZERO_MASK(*(int *)(param_1 + 0x185b0))) &
                               -iVar2));
      iVar4 = (iVar2 - 1U & 0xffff0000) + 0x10000;
      *(uint *)(param_1 + 0x185c8) = iVar4 + ((uint)(ZERO_MASK(iVar2)) & -iVar4);
      *(undefined4 *)(param_1 + 0x185cc) = 6;
      *(int *)(param_1 + 0x185d0) = iVar1 * 0x2e8;
    }
  }
  return;
}


// 0x04d7464 (0xce4 bytes)
// strings: 00658f54: 'FrameMem' | 00658f64: 'Resolution ID reported by the system = %d\n' | 00658f94: 'Aspect ID reported by the system     = %d\n' | 00658fc4: 'Scanmode ID reported by the system   = %d\n' | 00658ff4: '1080 was the mode reported by the system, check if 720 is available\n' | 0065903c: '720 is available, using it\n' | 0065905c: '720 is not available, using 1080\n' | 00659084: 'the system provided mode is available - using it\n' | 006590bc: 'the system provided mode is not available - picking a new mode from the available\n' | 00659114: '%d video modes are available\n' | 00659134: 'Mode %d: Resolution ID %d, Aspect %d, Scan %d\n' | 00659164: 'Picked mode %d: Resolution ID %d, Aspect %d, Scan %d\n' | 0065919c: 'ERROR: cellVideoOutConfigure() failed. (0x%x)\n'

void FUN_004d7464(int param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  int iVar7;
  ulonglong uVar5;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  GPiece<4> auStack_250;
  GPiece<4> auStack_24c;
  byte local_248;
  byte abStack_22c [6];
  ushort auStack_226 [209];
  ushort local_84;
  ushort local_82;
  ushort local_80;
  ushort local_7e;
  GPiece<8> auStack_7c;
  byte local_74;
  byte local_73;
  byte local_71;
  ushort local_6e;
  byte abStack_6c [36];
  
  uVar3 = idol::AllocateMemAlign(param_2,0x100000,0x100000);
  uVar6 = FUN_004fe048(param_2);
  uVar4 = FUN_004fe5ec(param_2);
  FUN_0050f034(0x10000,uVar6,uVar4);
  uVar4 = FUN_004fe5ec(param_2);
  cellGcmAddressToOffset(uVar4,auStack_250);
  uVar6 = FUN_004fe5ec(param_2);
  *(undefined4 *)(param_1 + 0x4a8) = uVar6;
  FUN_004fe5ec(param_2);
  FUN_004fe6ec(param_2,0x10000);
  cellGcmMapEaIoAddress(uVar3,0xef00000,0x100000);
  uVar12 = 0;
  iVar8 = param_1;
  do {
    iVar7 = idol::kalloc(param_2,0x180000);
    *(int *)(iVar8 + 0x4b0) = iVar7;
    *(int *)(iVar8 + 0x4b8) = iVar7;
    *(undefined4 *)(iVar8 + 0x4bc) = 0;
    *(undefined4 *)(iVar8 + 0x4c0) = 0x180000;
    *(int *)(iVar8 + 0x4b4) = iVar7 + 0x180000;
    memset(iVar8 + 0x4c4,0,0x90);
    *(undefined4 *)(iVar8 + 0x5a0) = 0;
    iVar7 = idol::kalloc(param_2,0x80000);
    *(int *)(iVar8 + 0x5a8) = iVar7;
    *(int *)(iVar8 + 0x5b0) = iVar7;
    *(undefined4 *)(iVar8 + 0x5b4) = 0;
    *(undefined4 *)(iVar8 + 0x5b8) = 0x80000;
    *(int *)(iVar8 + 0x5ac) = iVar7 + 0x80000;
    memset(iVar8 + 0x5bc,0,0x90);
    *(undefined4 *)(iVar8 + 0x698) = 1;
    iVar7 = idol::kalloc(param_2,0x300000);
    *(int *)(iVar8 + 0x6a0) = iVar7;
    *(int *)(iVar8 + 0x6a8) = iVar7;
    *(undefined4 *)(iVar8 + 0x6ac) = 0;
    *(undefined4 *)(iVar8 + 0x6b0) = 0x300000;
    *(int *)(iVar8 + 0x6a4) = iVar7 + 0x300000;
    memset(iVar8 + 0x6b4,0,0x90);
    *(undefined4 *)(iVar8 + 0x790) = 2;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0x798) = iVar7;
    *(int *)(iVar8 + 0x7a0) = iVar7;
    *(undefined4 *)(iVar8 + 0x7a4) = 0;
    *(undefined4 *)(iVar8 + 0x7a8) = 0x100000;
    *(int *)(iVar8 + 0x79c) = iVar7 + 0x100000;
    memset(iVar8 + 0x7ac,0,0x90);
    *(undefined4 *)(iVar8 + 0x888) = 3;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0x890) = iVar7;
    *(int *)(iVar8 + 0x898) = iVar7;
    *(undefined4 *)(iVar8 + 0x89c) = 0;
    *(int *)(iVar8 + 0x894) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0x8a0) = 0x100000;
    memset(iVar8 + 0x8a4,0,0x90);
    *(undefined4 *)(iVar8 + 0x980) = 4;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xc70) = iVar7;
    *(int *)(iVar8 + 0xc78) = iVar7;
    *(undefined4 *)(iVar8 + 0xc7c) = 0;
    *(undefined4 *)(iVar8 + 0xc80) = 0x100000;
    *(int *)(iVar8 + 0xc74) = iVar7 + 0x100000;
    memset(iVar8 + 0xc84,0,0x90);
    *(undefined4 *)(iVar8 + 0xd60) = 8;
    iVar7 = idol::kalloc(param_2,0x400000);
    *(int *)(iVar8 + 0xd68) = iVar7;
    *(int *)(iVar8 + 0xd70) = iVar7;
    *(undefined4 *)(iVar8 + 0xd74) = 0;
    *(undefined4 *)(iVar8 + 0xd78) = 0x400000;
    *(int *)(iVar8 + 0xd6c) = iVar7 + 0x400000;
    memset(iVar8 + 0xd7c,0,0x90);
    *(undefined4 *)(iVar8 + 0xe58) = 9;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xa80) = iVar7;
    *(int *)(iVar8 + 0xa88) = iVar7;
    *(undefined4 *)(iVar8 + 0xa8c) = 0;
    *(int *)(iVar8 + 0xa84) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0xa90) = 0x100000;
    memset(iVar8 + 0xa94,0,0x90);
    *(undefined4 *)(iVar8 + 0xb70) = 6;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xb78) = iVar7;
    *(int *)(iVar8 + 0xb80) = iVar7;
    *(undefined4 *)(iVar8 + 0xb84) = 0;
    *(undefined4 *)(iVar8 + 0xb88) = 0x100000;
    *(int *)(iVar8 + 0xb7c) = iVar7 + 0x100000;
    memset(iVar8 + 0xb8c,0,0x90);
    *(undefined4 *)(iVar8 + 0xc68) = 7;
    iVar7 = idol::kalloc(param_2,0x200000);
    *(int *)(iVar8 + 0x988) = iVar7;
    *(int *)(iVar8 + 0x990) = iVar7;
    *(undefined4 *)(iVar8 + 0x994) = 0;
    *(undefined4 *)(iVar8 + 0x998) = 0x200000;
    *(int *)(iVar8 + 0x98c) = iVar7 + 0x200000;
    memset(iVar8 + 0x99c,0,0x90);
    *(undefined4 *)(iVar8 + 0xa78) = 5;
    iVar7 = idol::kalloc(param_2,0x100000);
    *(int *)(iVar8 + 0xe60) = iVar7;
    *(int *)(iVar8 + 0xe68) = iVar7;
    *(undefined4 *)(iVar8 + 0xe6c) = 0;
    *(int *)(iVar8 + 0xe64) = iVar7 + 0x100000;
    *(undefined4 *)(iVar8 + 0xe70) = 0x100000;
    memset(iVar8 + 0xe74,0,0x90);
    uVar12 = uVar12 + 1;
    *(undefined4 *)(iVar8 + 0xf50) = 10;
    iVar8 = iVar8 + 0xaa8;
  } while (uVar12 < 2);
  uVar12 = 0;
  iVar8 = param_1;
  do {
    uVar3 = idol::AllocateMemAlign(param_2,0xa00000,0x80);
    FUN_004fe39c(iVar8 + 0x1a00,uVar3,0xa00000,"FrameMem",0,param_2);
    uVar12 = uVar12 + 1;
    iVar8 = iVar8 + 0x24;
  } while (uVar12 < 3);
  cellGcmGetConfiguration(&DAT_010ef508);
  DAT_010ef520 = (int *)cellGcmGetControlRegister();
  FUN_00504374(g_pGame,DAT_010ef508,DAT_010ef510);
  uVar5 = ZEXT48(g_pGame);
  *(undefined4 *)(param_1 + 0x4ac) = DAT_010ef508;
  *(undefined4 *)(param_1 + 4) = 0x500;
  *(undefined4 *)(param_1 + 8) = 0x2d0;
  cellVideoOutGetState(0,0,auStack_7c);
  printf("Resolution ID reported by the system = %d\n",(ulonglong)local_74);
  printf("Aspect ID reported by the system     = %d\n",(ulonglong)local_71);
  printf("Scanmode ID reported by the system   = %d\n",(ulonglong)local_73);
  if ((local_74 == 1) || ((9 < local_74 && (local_74 < 0xe)))) {
    printf("1080 was the mode reported by the system, check if 720 is available\n");
    iVar8 = cellVideoOutGetResolutionAvailability(0,2,0,0);
    if (iVar8 == 0) {
      printf("720 is not available, using 1080\n");
      *(undefined1 *)(param_1 + 0x11) = 1;
      local_74 = 1;
    }
    else {
      printf("720 is available, using it\n");
      *(undefined1 *)(param_1 + 0x11) = 2;
      local_74 = 2;
    }
  }
  else {
    *(byte *)(param_1 + 0x11) = local_74;
  }
  uVar12 = (uint)local_71;
  iVar8 = cellVideoOutGetResolutionAvailability(0,local_74,(uint)local_71,0);
  if (iVar8 == 0) {
    printf(
                "the system provided mode is not available - picking a new mode from the available\n"
                );
    cellVideoOutGetDeviceInfo(0,0,auStack_24c);
    printf("%d video modes are available\n",(ulonglong)local_248);
    uVar11 = 0;
    if (local_248 != 0) {
      do {
        iVar8 = (int)(uVar11 << 3);
        printf("Mode %d: Resolution ID %d, Aspect %d, Scan %d\n",uVar11,
                     (ulonglong)abStack_22c[iVar8],(ulonglong)abStack_22c[iVar8 + 3],
                     (ulonglong)abStack_22c[iVar8 + 1]);
        uVar11 = uVar11 + 1 & 0xffffffff;
      } while (uVar11 < local_248);
    }
    memcpy(abStack_6c,&DAT_008fa5fc,0x21);
    uVar9 = 0;
    uVar12 = (uint)local_71;
    do {
      uVar11 = 0;
      if (local_248 != 0) {
        iVar8 = uVar9 * 3;
        do {
          iVar7 = (int)(uVar11 << 3);
          if (((abStack_22c[iVar7] == abStack_6c[iVar8]) &&
              (abStack_22c[iVar7 + 3] == abStack_6c[iVar8 + 2])) &&
             (abStack_22c[iVar7 + 1] == abStack_6c[iVar8 + 1])) {
            printf("Picked mode %d: Resolution ID %d, Aspect %d, Scan %d\n",uVar11,
                         (ulonglong)abStack_22c[iVar7],(ulonglong)abStack_22c[iVar7 + 3],
                         (ulonglong)abStack_22c[iVar7 + 1]);
            uVar1 = *(ushort *)(abStack_22c + iVar7 + 6);
            uVar12 = (uint)abStack_22c[iVar7 + 3];
            *(byte *)(param_1 + 0x11) = abStack_22c[iVar7];
            uVar9 = 0xb;
            *(uint *)(param_1 + 0x18) =
                 ((uint)(ZERO_MASK((uVar1 & 2))) & 10) + 0x32;
            break;
          }
          uVar11 = uVar11 + 1 & 0xffffffff;
        } while (uVar11 < (uint)local_248);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0xb);
  }
  else {
    printf("the system provided mode is available - using it\n");
    *(uint *)(param_1 + 0x18) = ((uint)(ZERO_MASK((local_6e & 2))) & 10) + 0x32;
  }
  *(uint *)(param_1 + 0xc) = (uVar12 != 1);
  cellVideoOutGetResolution(*(undefined1 *)(param_1 + 0x11),&local_84);
  uVar6 = cellGcmGetTiledPitchSize((ulonglong)local_84 << 2);
  *(undefined4 *)(param_1 + 0x22ec) = 0;
  *(undefined4 *)(param_1 + 0x22f0) = 0;
  *(undefined4 *)(param_1 + 0x22f4) = 0;
  *(undefined1 *)(param_1 + 0x22ec) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x22f8) = uVar6;
  *(undefined1 *)(param_1 + 0x22ed) = 0;
  *(char *)(param_1 + 0x22ee) = (char)uVar12;
  uVar3 = cellVideoOutConfigure(0,param_1 + 0x22ec,0,0);
  if ((int)uVar3 != 0) {
    printf("ERROR: cellVideoOutConfigure() failed. (0x%x)\n",uVar3);
  }
  iVar8 = cellVideoOutGetResolutionAvailability(0,0x81,0,0);
  *(byte *)(param_1 + 0x185a4) = (byte)((ulonglong)(LZCOUNT(iVar8) << 0x20) >> 0x25) ^ 1;
  if (iVar8 == 0) {
    *(uint *)(param_1 + 0x185ac) = (uint)local_84;
    *(uint *)(param_1 + 0x185b0) = (uint)local_82;
  }
  else {
    cellSysmoduleLoadModule(0x31);
    cellVideoOutGetScreenSize(0,param_1 + 0x185a8);
    cellSysmoduleUnloadModule(0x31);
    cellVideoOutGetResolution(0x81,&local_80);
    *(uint *)(param_1 + 0x185ac) = (uint)local_80;
    *(uint *)(param_1 + 0x185b0) = (uint)local_7e;
    *(uint *)(param_1 + 0x185b4) = (uint)local_80;
    *(uint *)(param_1 + 0x185b8) =
         (uint)local_7e +
         ((uint)(ZERO_MASK((0x5be - (uint)local_7e))) & 0x2d0 - local_7e);
    FUN_004d72d8(param_1);
    *(undefined1 *)(param_1 + 0x11) = 0x81;
  }
  cellGcmSetFlipMode(2);
  FUN_004e54e8(param_1 + 0x1d38,local_84,local_82,*(undefined4 *)(param_1 + 0x185ac),
               *(undefined4 *)(param_1 + 0x185b0),8);
  FUN_004e54e8(param_1 + 0x1e8c,local_84,local_82,*(undefined4 *)(param_1 + 0x185ac),
               *(undefined4 *)(param_1 + 0x185b0),8);
  FUN_004e40d8(param_1 + 0x1be4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,2,3)
  ;
  FUN_004e40d8(param_1 + 0x2134,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,2,0)
  ;
  FUN_004e580c(param_1 + 0x1a90,0x200,0x200);
  FUN_004e40d8(param_1 + 0x1fe0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0,8,0,0,0)
  ;
  uVar3 = idol::AllocateMemAlign(uVar5 + 0x7c,0x40,0x80);
  *(int *)(param_1 + 0x18594) = (int)uVar3;
  cellGcmAddressToOffset(uVar3,param_1 + 0x18598);
  puVar2 = *(undefined4 **)(param_1 + 0x18594);
  *puVar2 = 0xbf800000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xbf800000;
  puVar2[5] = 0xbf800000;
  puVar2[6] = 0;
  puVar2[7] = 0x3f800000;
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0xbf800000;
  puVar2[10] = 0x3f800000;
  puVar2[0xb] = 0x3f800000;
  puVar2[0xc] = 0x3f800000;
  puVar2[0xd] = 0x3f800000;
  puVar2[0xe] = 0x3f800000;
  puVar2[0xf] = 0;
  uVar6 = idol::AllocateMemAlign(uVar5 + 0x7c,0x200000,0x80);
  iVar8 = *(int *)(param_1 + 0x4b0);
  iVar7 = *(int *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x2288) = uVar6;
  *(undefined4 *)(param_1 + 0x1a6c) = 0;
  *(undefined4 *)(param_1 + 0x1a70) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  puVar10 = (uint *)FUN_0050e794();
  *puVar10 = iVar8 - iVar7 & 0x7fffffffU | 0x20000000;
  iVar8 = *(int *)(param_1 + 0x1a6c);
  iVar7 = param_1 + iVar8 * 0xaa8;
  DepthPass = (RenderingStep *)(iVar7 + 0x4b0);
  OceanForwardPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x5a8);
  ForwardPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x6a0);
  M_Depth = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x798);
  M_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x890);
  ShadowPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0x988);
  MobyDepth = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xa80);
  MobyPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xb78);
  HUD_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xe60);
  DL_DepthPass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xc70);
  DL_Pass = (RenderingStep *)(param_1 + iVar8 * 0xaa8 + 0xd68);
  uVar6 = *(undefined4 *)(param_1 + 0x1a70);
  FrameHeap = param_1 + (int)((ulonglong)*(uint *)(param_1 + 0x14) % 3) * 0x24 + 0x1a00;
  **(undefined4 **)(iVar7 + 0x4b8) = 0x40050;
  *(undefined4 *)(*(int *)(iVar7 + 0x4b8) + 4) = uVar6;
  *(int *)(iVar7 + 0x4b8) = *(int *)(iVar7 + 0x4b8) + 8;
  *(int *)(param_1 + 0x1a74) = *(int *)(param_1 + 0x1a70);
  *(int *)(param_1 + 0x1a70) = *(int *)(param_1 + 0x1a70) + 1;
  sync(0);
  *DAT_010ef520 = (int)DepthPass->command - *(int *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x185f0) = 0x2000;
  uVar6 = idol::AllocateMemAlign(param_2,0x20000,0x10);
  *(undefined4 *)(param_1 + 0x185f8) = uVar6;
  uVar6 = idol::AllocateMemAlign(param_2,*(int *)(param_1 + 0x185f0) << 4,0x10);
  *(undefined4 *)(param_1 + 0x185fc) = uVar6;
  if (*DAT_010ef520 != DAT_010ef520[1]) {
    do {
      syscall();
    } while (*DAT_010ef520 != DAT_010ef520[1]);
  }
  return;
}


// 0x04d8148 (0x170 bytes)
void * FUN_004d8148(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  GPiece<4> auStack_d0;
  GPiece<96> auStack_cc;
  GPiece<60> auStack_6c;
  
  *(undefined1 *)(param_1 + 0x6164) = 0;
  *(undefined1 *)((int)param_1 + 0x18591) = 0;
  FUN_004d7464(param_1);
  (*(code *)**(undefined4 **)(*param_1 + 0xc))(param_1);
  uVar1 = FUN_0050436c(g_pGame);
  uVar2 = idol::AllocateMemAlign(uVar1,0x60,0x40);
  pvVar3 = (void *)idol::AllocateMemAlign(uVar1,0x30,0x40);
  param_1[0x6167] = (int)(void *)uVar2 - param_1[0x12a];
  param_1[0x6168] = (int)pvVar3 - param_1[0x12a];
  cellGcmAddressToOffset(uVar2,auStack_d0);
  memcpy(auStack_cc,&DAT_008fa56c,0x60);
  memcpy(auStack_6c,&DAT_008fa5cc,0x30);
  memcpy((void *)uVar2,auStack_cc,0x60);
  pvVar3 = memcpy(pvVar3,auStack_6c,0x30);
  param_1[0x8b6] = 0;
  return pvVar3;
}


// 0x04d82b8 (0x134 bytes)
void idol_draw::BindFragmentProgram(undefined8 param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar4 = (int)(param_3 << 3) * 3;
  uVar2 = *(uint *)((int)&DAT_010ee670 + iVar4);
  **(undefined4 **)(param_2 + 8) = 0x408e4;
  *(uint *)(*(int *)(param_2 + 8) + 4) = uVar2 & 0x1fffffff | 1;
  iVar9 = *(int *)(param_2 + 8);
  uVar3 = *(undefined4 *)(iVar4 + 0x10ee674);
  *(int *)(param_2 + 8) = iVar9 + 8;
  *(undefined4 *)(iVar9 + 8) = 0x41ff4;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = uVar3;
  uVar1 = *(ushort *)(iVar4 + 0x10ee678);
  puVar5 = (uint *)(*(int *)(param_2 + 8) + 8);
  uVar7 = (ulonglong)*(ushort *)(iVar4 + 0x10ee67a);
  uVar6 = (ulonglong)*(ushort *)(iVar4 + 0x10ee67c);
  *(uint **)(param_2 + 8) = puVar5;
  if (uVar1 != 0) {
    iVar9 = 0;
    uVar8 = (ulonglong)uVar1;
    do {
      if ((uVar8 & 1) != 0) {
        *puVar5 = iVar9 + 0xb40U | 0x40000;
        *(uint *)(*(int *)(param_2 + 8) + 4) = (uint)(uVar6 << 4) & 0x10 | (uint)uVar7 & 1;
        puVar5 = (uint *)(*(int *)(param_2 + 8) + 8);
        *(uint **)(param_2 + 8) = puVar5;
      }
      uVar2 = (uint)uVar8;
      uVar7 = (uVar7 << 0x20) >> 0x21;
      uVar6 = (uVar6 << 0x20) >> 0x21;
      iVar9 = iVar9 + 4;
      uVar8 = (uVar8 << 0x20) >> 0x21;
    } while (uVar2 >> 1 != 0);
  }
  uVar7 = (ulonglong)*(byte *)(iVar4 + 0x10ee684);
  uVar2 = *(uint *)(iVar4 + 0x10ee680);
  *puVar5 = 0x41d60;
  *(uint *)(*(int *)(param_2 + 8) + 4) =
       uVar2 | (uint)((uVar7 + ((longlong)(uVar7 - 2) >> 0x3f & 2 - uVar7) & 0xffffffff) << 0x18);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  return;
}


// 0x04d83ec (0x2b4 bytes)
void idol_draw::BindVertexProgram(undefined8 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined *puVar12;
  uint uVar13;
  GPiece<4> local_50;
  GPiece<2> local_4c;
  ushort local_4a;
  ushort local_48;
  ushort local_46;
  byte local_44;
  
  puVar12 = &DAT_010ee330 + param_3 * 0x30;
  puVar7 = (undefined4 *)FUN_0050f3b8(puVar12);
  FUN_0050f2b0(puVar12,&local_4a);
  uVar8 = 0;
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar10 = puVar1 + 3;
  iVar4 = (local_48 & 7) * 4;
  *puVar1 = 0x81e9c;
  puVar1[1] = (uint)local_4a;
  puVar1[2] = (uint)local_4a;
  uVar13 = 0;
  *(uint **)(param_2 + 8) = puVar10;
  if (local_48 >> 3 != 0) {
    do {
      uVar2 = *(uint *)(param_2 + 8);
      *puVar10 = (uint)&DAT_00800b80;
      FUN_005e6424((ulonglong)uVar2 + 4,puVar7,0x40);
      FUN_005e6424((ulonglong)*(uint *)(param_2 + 8) + 0x44,puVar7 + 0x10,0x40);
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 0x20;
      puVar10 = (uint *)(*(int *)(param_2 + 8) + 0x84);
      *(uint **)(param_2 + 8) = puVar10;
    } while (uVar8 < local_48 >> 3);
  }
  if ((local_48 & 7) != 0) {
    *puVar10 = (local_48 & 7) << 0x14 | 0xb80;
    if ((local_48 & 7) != 0) {
      iVar9 = 0;
      iVar11 = iVar4;
      do {
        iVar9 = iVar9 + 4;
        iVar11 = iVar11 + -1;
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *(undefined4 *)(*(int *)(param_2 + 8) + iVar9) = uVar3;
      } while (0 < iVar11);
    }
    puVar10 = (uint *)(*(int *)(param_2 + 8) + (iVar4 + 1) * 4);
    *(uint **)(param_2 + 8) = puVar10;
  }
  iVar4 = *(int *)(param_2 + 8);
  *puVar10 = 0x41ff0;
  iVar11 = *(int *)(param_2 + 8);
  *(uint *)(iVar4 + 4) = (uint)local_46;
  *(int *)(param_2 + 8) = iVar11 + 8;
  if (local_44 < 0x21) {
    iVar4 = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 8) = 0x41ef8;
    *(undefined4 *)(iVar4 + 4) = 0x20ffff;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    *(undefined4 *)(iVar11 + 8) = 0x41ef8;
    *(undefined4 *)(iVar4 + 4) = 0x30ffff;
  }
  *(int *)(param_2 + 8) = iVar4 + 8;
  uVar8 = FUN_0050f3c0(puVar12);
  if (uVar8 != 0) {
    do {
      FUN_0050f3c8(puVar12,uVar13,local_4c,local_50);
      puVar1 = *(undefined4 **)(param_2 + 8);
      uVar13 = uVar13 + 1;
      *(undefined4 **)(param_2 + 8) = puVar1 + 2;
      puVar1[1] = 0;
      *puVar1 = 0x141efc;
      uVar6 = uRam0000000c;
      uVar5 = uRam00000008;
      uVar3 = uRam00000004;
      puVar1[2] = uRam00000000;
      puVar1[3] = uVar3;
      puVar1[4] = uVar5;
      puVar1[5] = uVar6;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0x10;
    } while (uVar13 < uVar8);
  }
  return;
}


// 0x04d86b0 (0xc4 bytes)
void FUN_004d86b0(int param_1)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  RsxCmd *pRVar3;
  RsxCmd *pRVar4;
  longlong lVar5;
  RsxCmd local_10 [4];
  
  pRVar2 = HUD_Pass;
  pRVar4 = local_10;
  lVar5 = 2;
  *HUD_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar2->command[1] = 0x12;
  pRVar3 = pRVar2->command + 2;
  pRVar2->command = pRVar3;
  do {
    *pRVar3 = *pRVar4;
    pRVar3 = pRVar2->command;
    pRVar2->command = pRVar3 + 1;
    pRVar1 = pRVar4 + 1;
    pRVar4 = pRVar4 + 2;
    pRVar3[1] = *pRVar1;
    pRVar3 = pRVar2->command + 1;
    pRVar2->command = pRVar3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x04d8774 (0x3dc bytes)
void FUN_004d8774(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  RsxCmd *pRVar5;
  RenderingStep *pRVar6;
  
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar6->command[1] = 0x203;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_SHADE_MODE_x1;
  pRVar6->command[1] = 0x1d01;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  pRVar6->command = pRVar6->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,ShadowPass,iVar3,iVar4);
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar6->command[1] = *(byte *)(param_1 + 0x84e) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x2139) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x213a) + 0xfeed0000;
  pRVar6->command[2] = *(byte *)((int)param_1 + 0x213b) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar6->command[1] = *(byte *)((int)param_1 + 0x215d) + 0xfeed0000;
  pRVar5 = pRVar6->command;
  uVar1 = *(ushort *)(param_1 + 0x85a);
  uVar2 = *(ushort *)((int)param_1 + 0x216a);
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = (RsxCmd)&DAT_00180208;
  pRVar6->command[1] =
       (uint)*(byte *)((int)param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x857) << 5 |
       (uint)*(byte *)(param_1 + 0x84d) << 8 | (uint)*(byte *)((int)param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar6->command[2] = param_1[0x853];
  pRVar6->command[3] = param_1[0x84f];
  pRVar6->command[4] = param_1[0x858];
  pRVar6->command[5] = param_1[0x850];
  pRVar6->command[6] = param_1[0x854];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 7;
  pRVar5[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar6->command[1] = param_1[0x859];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar6->command[1] = param_1[0x855];
  pRVar6->command[2] = param_1[0x856];
  pRVar6->command[3] = param_1[0x851];
  pRVar6->command[4] = param_1[0x852];
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 5;
  pRVar5[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar6->command[1] = (uint)*(byte *)((int)param_1 + 0x2137);
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar6->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216e),*(undefined2 *)(param_1 + 0x85b));
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar6->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x85a),*(undefined2 *)(param_1 + 0x85b));
  pRVar6->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216a),*(undefined2 *)((int)param_1 + 0x216e));
  pRVar5 = pRVar6->command;
  pRVar6->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar6->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x216a) - (*(ushort *)((int)param_1 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar6->command[1] = 0x10000;
  pRVar6->command = pRVar6->command + 2;
  return;
}


// 0x04d8b50 (0x268 bytes)
void FUN_004d8b50(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x30,0x10);
  iVar2 = (int)(param_2 << 2);
  *puVar4 = 0xbf800000;
  puVar4[1] = 0x40400000;
  puVar4[3] = 0xbf800000;
  puVar4[2] = 0;
  puVar4[4] = 0x40400000;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  puVar4[5] = 0xbf800000;
  puVar4[6] = 0x40000000;
  puVar4[7] = 0x3f800000;
  puVar4[8] = 0xbf800000;
  puVar4[9] = 0xbf800000;
  puVar4[10] = 0;
  puVar4[0xb] = 0x3f800000;
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0x1022;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0x1022;
  uVar3 = (int)puVar4 - *(int *)(param_1 + 0x4a8);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar3 | 0x80000000;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar3 + 8 | 0x80000000;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x14) = 6;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 0x18;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  puVar4 = *(undefined4 **)(iVar1 + 8);
  *(undefined4 **)(iVar1 + 8) = puVar4 + 1;
  *puVar4 = 0x40041814;
  puVar4 = *(undefined4 **)(iVar1 + 8);
  *(undefined4 **)(iVar1 + 8) = puVar4 + 1;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  *puVar4 = 0x2000000;
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar2);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 8;
  return;
}


// 0x04d8db8 (0x5f4 bytes)
void FUN_004d8db8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  RsxCmd *pRVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RenderingStep *pRVar12;
  ulonglong uVar13;
  
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x2138) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x2139) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar12->command[1] = *(byte *)(param_1 + 0x213a) + 0xfeed0000;
  pRVar12->command[2] = *(byte *)(param_1 + 0x213b) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar12->command[1] = *(byte *)(param_1 + 0x215d) + 0xfeed0000;
  pRVar7 = pRVar12->command;
  uVar5 = *(ushort *)(param_1 + 0x2168);
  uVar6 = *(ushort *)(param_1 + 0x216a);
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = (RsxCmd)&DAT_00180208;
  pRVar12->command[1] =
       (uint)*(byte *)(param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x215c) << 5 |
       (uint)*(byte *)(param_1 + 0x2134) << 8 | (uint)*(byte *)(param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar5) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x18);
  pRVar12->command[2] = *(RsxCmd *)(param_1 + 0x214c);
  pRVar12->command[3] = *(RsxCmd *)(param_1 + 0x213c);
  pRVar12->command[4] = *(RsxCmd *)(param_1 + 0x2160);
  pRVar12->command[5] = *(RsxCmd *)(param_1 + 0x2140);
  pRVar12->command[6] = *(RsxCmd *)(param_1 + 0x2150);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 7;
  pRVar7[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar12->command[1] = *(RsxCmd *)(param_1 + 0x2164);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar12->command[1] = *(RsxCmd *)(param_1 + 0x2154);
  pRVar12->command[2] = *(RsxCmd *)(param_1 + 0x2158);
  pRVar12->command[3] = *(RsxCmd *)(param_1 + 0x2144);
  pRVar12->command[4] = *(RsxCmd *)(param_1 + 0x2148);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 5;
  pRVar7[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar12->command[1] = (uint)*(byte *)(param_1 + 0x2137);
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x216e),*(undefined2 *)(param_1 + 0x216c));
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x2168),*(undefined2 *)(param_1 + 0x216c));
  pRVar12->command[2] =
       CONCAT22(*(undefined2 *)(param_1 + 0x216a),*(undefined2 *)(param_1 + 0x216e));
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar12->command[1] =
       (uint)*(ushort *)(param_1 + 0x216a) - (*(ushort *)(param_1 + 0x216a) >> 0xc & 1) | 0x1000;
  pRVar12->command = pRVar12->command + 2;
  bVar1 = *(byte *)(param_1 + 0x1cca);
  uVar13 = (ulonglong)*(byte *)(param_1 + 0x1cbc) | 0x40;
  RVar8 = *(RsxCmd *)(param_1 + 0x1cd0);
  *(char *)(param_1 + 0x1cbc) = (char)uVar13;
  bVar2 = *(byte *)(param_1 + 0x1cbd);
  bVar3 = *(byte *)(param_1 + 0x1cbf);
  bVar4 = *(byte *)(param_1 + 0x1cbe);
  RVar11 = *(RsxCmd *)(param_1 + 0x1cc4);
  RVar9 = *(RsxCmd *)(param_1 + 0x1cc0);
  RVar10 = *(RsxCmd *)(param_1 + 0x1ccc);
  uVar5 = *(ushort *)(param_1 + 0x1cc8);
  *pRVar12->command = (RsxCmd)&DAT_00081a00;
  pRVar12->command[1] = RVar8;
  pRVar12->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (RsxCmd)(uVar13 << 8) |
       (uint)bVar3 << 2 | (uint)bVar4 << 4;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 3;
  pRVar7[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar12->command[1] = RVar11;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = (RsxCmd)&DAT_00041840;
  pRVar12->command[1] = RVar10 | (uint)uVar5 << 0x14;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar12->command[1] = RVar9;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar12->command[1] = 0x80060000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar12->command[1] = 0x10030303;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar12->command[1] = (RsxCmd)&DAT_01012000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_INVALIDATE_L2_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_COLOR_MASK_x1;
  pRVar12->command[1] = 0x1000000;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_FUNC_x1;
  pRVar12->command[1] = 0x207;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_FUNC_x3;
  pRVar12->command[1] = 0x207;
  pRVar12->command[2] = 0xff;
  pRVar12->command[3] = 0xff;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 4;
  pRVar7[4] = NV4097_SET_STENCIL_MASK_x1;
  pRVar12->command[1] = 0xff;
  pRVar7 = pRVar12->command;
  pRVar12->command = pRVar7 + 2;
  pRVar7[2] = NV4097_SET_STENCIL_OP_FAIL_x3;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0;
  pRVar12->command = pRVar12->command + 4;
  idol_draw::BindVertexProgram(param_1,pRVar12,0xd);
  idol_draw::BindFragmentProgram(param_1,pRVar12,0x11);
  FUN_004d8b50(param_1,5);
  return;
}


// 0x04d93ac (0x1c3c bytes)
// strings: 006591cc: 'Frame' | 006591d4: 'DepthPass' | 006591e4: 'OceanForwardPass' | 006591fc: 'ForwardPass' | 0065920c: 'M_Depth' | 00659214: 'M_Pass' | 0065921c: 'ShadowPass' | 0065922c: 'MobyDepth' | 0065923c: 'Moby' | 00659244: 'DL_Depth' | 00659254: 'DL_Pass' | 0065925c: 'HUD'

void idol_draw::Render_SetupPasses(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  RsxCmd RVar5;
  int iVar6;
  RenderingStep *pRVar7;
  
  RsxCmd_DebugStr_Marker(DepthPass,"Frame");
  RsxCmd_DebugStr_Marker(DepthPass,"DepthPass");
  RsxCmd_DebugStr_Marker(OceanForwardPass,"OceanForwardPass");
  RsxCmd_DebugStr_Marker(ForwardPass,"ForwardPass");
  RsxCmd_DebugStr_Marker(M_Depth,"M_Depth");
  RsxCmd_DebugStr_Marker(M_Pass,"M_Pass");
  RsxCmd_DebugStr_Marker(ShadowPass,"ShadowPass");
  RsxCmd_DebugStr_Marker(MobyDepth,"MobyDepth");
  RsxCmd_DebugStr_Marker(MobyPass,"Moby");
  RsxCmd_DebugStr_Marker(DL_DepthPass,"DL_Depth");
  RsxCmd_DebugStr_Marker(DL_Pass,"DL_Pass");
  RsxCmd_DebugStr_Marker(HUD_Pass,"HUD");
  FUN_004d8db8(param_1);
  FUN_004d8774(param_1);
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_INVALIDATE_VERTEX_CACHE_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_INVALIDATE_VERTEX_FILE_x1;
  pRVar7->command[1] = 0;
  iVar4 = param_1[1];
  pRVar7->command = pRVar7->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,DepthPass,iVar4,param_1[2]);
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,ForwardPass,param_1[1],param_1[2]);
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ANTI_ALIASING_CONTROL_x1;
  pRVar7->command[1] = 0xffff0001;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_MASK_MRT_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = 0x10101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  FUN_005e85f0(MobyDepth,1);
  pRVar7 = MobyDepth;
  *MobyDepth->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 0xbe;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = MobyPass;
  *MobyPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = M_Pass;
  *M_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar7->command[1] = *(byte *)(param_1 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1bea) + 0xfeed0000;
  pRVar7->command[2] = *(byte *)((int)param_1 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar7->command[1] = *(byte *)((int)param_1 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar7->command;
  uVar1 = *(ushort *)(param_1 + 0x706);
  uVar2 = *(ushort *)((int)param_1 + 0x1c1a);
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar7->command[1] =
       (uint)*(byte *)((int)param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x703) << 5 |
       (uint)*(byte *)(param_1 + 0x6f9) << 8 | (uint)*(byte *)((int)param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar7->command[2] = param_1[0x6ff];
  pRVar7->command[3] = param_1[0x6fb];
  pRVar7->command[4] = param_1[0x704];
  pRVar7->command[5] = param_1[0x6fc];
  pRVar7->command[6] = param_1[0x700];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar7->command[1] = param_1[0x705];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar7->command[1] = param_1[0x701];
  pRVar7->command[2] = param_1[0x702];
  pRVar7->command[3] = param_1[0x6fd];
  pRVar7->command[4] = param_1[0x6fe];
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar7->command[1] = (uint)*(byte *)((int)param_1 + 0x1be7);
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar7->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x707));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar7->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x706),*(undefined2 *)(param_1 + 0x707));
  pRVar7->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x1c1a),*(undefined2 *)((int)param_1 + 0x1c1e));
  pRVar3 = pRVar7->command;
  pRVar7->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar7->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x1c1a) - (*(ushort *)((int)param_1 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar7->command = pRVar7->command + 2;
  BindVertexProgram(param_1,DepthPass,9);
  BindFragmentProgram(param_1,DepthPass,0xf);
  BindVertexProgram(param_1,M_Depth,9);
  BindFragmentProgram(param_1,M_Depth,0xf);
  BindVertexProgram(param_1,MobyDepth,9);
  BindFragmentProgram(param_1,MobyDepth,0xf);
  BindVertexProgram(param_1,DL_DepthPass,9);
  BindFragmentProgram(param_1,DL_DepthPass,0xf);
  pRVar7 = DepthPass;
  RVar5 = param_1[0x106];
  *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar7->command[1] = RVar5;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar7->command[1] = 0xffffff00;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_DEPTH_FUNC_x1;
  pRVar7->command[1] = 0x203;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_SHADE_MODE_x1;
  pRVar7->command[1] = 0x1d01;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = M_Depth;
  *M_Depth->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 0xff;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = DepthPass;
  *DepthPass->command = NV4097_SET_ZCULL_EN_x1;
  pRVar7->command[1] = 3;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = (RsxCmd)&DAT_01010101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = OceanForwardPass;
  *OceanForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar7->command[1] = (RsxCmd)&DAT_01010101;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_FUNC_x2;
  pRVar7->command[1] = 0x206;
  pRVar7->command[2] = 1;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 1;
  iVar4 = param_1[1];
  iVar6 = param_1[2];
  pRVar7->command = pRVar7->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,HUD_Pass,iVar4,iVar6);
  FUN_004d86b0(param_1);
  BindVertexProgram(param_1,HUD_Pass,0xc);
  BindFragmentProgram(param_1,HUD_Pass,0xc);
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar7->command[1] = 1;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar7->command[1] = 0x80068006;
  pRVar7->command = pRVar7->command + 2;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar7->command[1] = 0x3020302;
  pRVar7->command[2] = 0x3030303;
  pRVar7->command = pRVar7->command + 3;
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  return;
}


// 0x04dafe8 (0x948 bytes)
// strings: 00659260: 'Wait Flip' | 00659270: 'Wait Done'

void idol_draw::Gfx_DrawSurface(int *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  if (param_3 != '\0') {
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Flip");
    RsxCmd_WritePass(HUD_Pass);
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x40064;
    pRVar13->command[1] = 0x10;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = 0x40068;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Done");
    RsxCmd_WritePass(HUD_Pass);
  }
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = param_2[4] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = param_2[5] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = param_2[6] + 0xfeed0000;
  pRVar13->command[2] = param_2[7] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = param_2[0x29] + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  uVar6 = *(ushort *)(param_2 + 0x34);
  uVar7 = *(ushort *)(param_2 + 0x36);
  pRVar8[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)param_2[2] | (uint)param_2[0x28] << 5 | (uint)*param_2 << 8 | (uint)param_2[1] << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x18);
  pRVar13->command[3] = *(RsxCmd *)(param_2 + 8);
  pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x2c);
  pRVar13->command[5] = *(RsxCmd *)(param_2 + 0xc);
  pRVar13->command[6] = *(RsxCmd *)(param_2 + 0x1c);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 7;
  pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x30);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x20);
  pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x24);
  pRVar13->command[3] = *(RsxCmd *)(param_2 + 0x10);
  pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x14);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 5;
  pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)param_2[3];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x3a),*(undefined2 *)(param_2 + 0x38));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x38));
  pRVar13->command[2] = CONCAT22(*(undefined2 *)(param_2 + 0x36),*(undefined2 *)(param_2 + 0x3a));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)(param_2 + 0x36) - (*(ushort *)(param_2 + 0x36) >> 0xc & 1) | 0x1000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  bVar1 = *(byte *)((int)param_1 + 0x1c6a);
  RVar9 = param_1[0x71c];
  bVar2 = *(byte *)((int)param_1 + 0x1c5d);
  bVar3 = *(byte *)(param_1 + 0x717);
  bVar4 = *(byte *)((int)param_1 + 0x1c5f);
  bVar5 = *(byte *)((int)param_1 + 0x1c5e);
  RVar12 = param_1[0x719];
  RVar10 = param_1[0x718];
  RVar11 = param_1[0x71b];
  uVar6 = *(ushort *)(param_1 + 0x71a);
  *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar9;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar10;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar13->command[1] = 0x80000000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar13->command[1] = 0x40030303;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar13->command[1] = 0x2022000;
  pRVar13->command = pRVar13->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))
            (param_1,HUD_Pass,*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x36));
  BindVertexProgram(param_1,HUD_Pass,0);
  BindFragmentProgram(param_1,HUD_Pass,0);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41744;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41684;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41748;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41688;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x4174c;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x4168c;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = 0;
  pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[5] = 8;
  pRVar13->command = pRVar13->command + 6;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  return;
}


// 0x04db930 (0xf98 bytes)
// strings: 00659260: 'Wait Flip' | 00659270: 'Wait Done'

void idol_draw::Gfx_DrawStereoSurface(int *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd *pRVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd RVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  if (param_3 != '\0') {
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Flip");
    RsxCmd_WritePass(HUD_Pass);
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x40064;
    pRVar13->command[1] = 0x10;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = 0x40068;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
    RsxCmd_DebugStr_Marker(HUD_Pass,"Wait Done");
    RsxCmd_WritePass(HUD_Pass);
  }
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  BindVertexProgram(param_1,HUD_Pass,0);
  BindFragmentProgram(param_1,HUD_Pass,0);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41744;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41684;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x41748;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x41688;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x4174c;
  pRVar13->command[1] = 2;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = 0x4168c;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x84e) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x2139) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x213a) + 0xfeed0000;
  pRVar13->command[2] = *(byte *)((int)param_1 + 0x213b) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = *(byte *)((int)param_1 + 0x215d) + 0xfeed0000;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  uVar6 = *(ushort *)(param_1 + 0x85a);
  uVar7 = *(ushort *)((int)param_1 + 0x216a);
  pRVar8[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)*(byte *)((int)param_1 + 0x2136) | (uint)*(byte *)(param_1 + 0x857) << 5 |
       (uint)*(byte *)(param_1 + 0x84d) << 8 | (uint)*(byte *)((int)param_1 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = param_1[0x853];
  pRVar13->command[3] = param_1[0x84f];
  pRVar13->command[4] = param_1[0x858];
  pRVar13->command[5] = param_1[0x850];
  pRVar13->command[6] = param_1[0x854];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 7;
  pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = param_1[0x859];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = param_1[0x855];
  pRVar13->command[2] = param_1[0x856];
  pRVar13->command[3] = param_1[0x851];
  pRVar13->command[4] = param_1[0x852];
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 5;
  pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)*(byte *)((int)param_1 + 0x2137);
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216e),*(undefined2 *)(param_1 + 0x85b));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_1 + 0x85a),*(undefined2 *)(param_1 + 0x85b));
  pRVar13->command[2] =
       CONCAT22(*(undefined2 *)((int)param_1 + 0x216a),*(undefined2 *)((int)param_1 + 0x216e));
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)((int)param_1 + 0x216a) - (*(ushort *)((int)param_1 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  bVar1 = *(byte *)((int)param_1 + 0x1c6a);
  RVar9 = param_1[0x71c];
  bVar2 = *(byte *)((int)param_1 + 0x1c5d);
  bVar3 = *(byte *)(param_1 + 0x717);
  bVar4 = *(byte *)((int)param_1 + 0x1c5f);
  bVar5 = *(byte *)((int)param_1 + 0x1c5e);
  RVar12 = param_1[0x719];
  RVar10 = param_1[0x718];
  RVar11 = param_1[0x71b];
  uVar6 = *(ushort *)(param_1 + 0x71a);
  *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar9;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 3;
  pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
  pRVar8 = pRVar13->command;
  pRVar13->command = pRVar8 + 2;
  pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar10;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar13->command[1] = 0x80000000;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar13->command[1] = 0x40030303;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar13->command[1] = 0x2022000;
  pRVar13->command = pRVar13->command + 2;
  (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,HUD_Pass,param_1[1],param_1[2]);
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = 0;
  pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[5] = 8;
  pRVar13->command = pRVar13->command + 6;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0xbf800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0xbf800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = 0xc1510;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0;
  pRVar13->command[3] = DAT_008fa550;
  pRVar13->command = pRVar13->command + 4;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar13->command[1] = 0x3f800000;
  pRVar13->command[2] = 0x3f800000;
  pRVar13->command = pRVar13->command + 3;
  pRVar13 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar13->command[1] = 0;
  pRVar13->command = pRVar13->command + 2;
  pRVar13 = HUD_Pass;
  if (param_2 != (byte *)(param_1 + 0x84d)) {
    *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
    pRVar13->command[1] = param_2[4] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
    pRVar13->command[1] = param_2[5] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
    pRVar13->command[1] = param_2[6] + 0xfeed0000;
    pRVar13->command[2] = param_2[7] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
    pRVar13->command[1] = param_2[0x29] + 0xfeed0000;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    uVar6 = *(ushort *)(param_2 + 0x34);
    uVar7 = *(ushort *)(param_2 + 0x36);
    pRVar8[2] = (RsxCmd)&DAT_00180208;
    pRVar13->command[1] =
         (uint)param_2[2] | (uint)param_2[0x28] << 5 | (uint)*param_2 << 8 | (uint)param_2[1] << 0xc
         | (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
    pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x18);
    pRVar13->command[3] = *(RsxCmd *)(param_2 + 8);
    pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x2c);
    pRVar13->command[5] = *(RsxCmd *)(param_2 + 0xc);
    pRVar13->command[6] = *(RsxCmd *)(param_2 + 0x1c);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 7;
    pRVar8[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
    pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x30);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_SURFACE_PITCH_C_x4;
    pRVar13->command[1] = *(RsxCmd *)(param_2 + 0x20);
    pRVar13->command[2] = *(RsxCmd *)(param_2 + 0x24);
    pRVar13->command[3] = *(RsxCmd *)(param_2 + 0x10);
    pRVar13->command[4] = *(RsxCmd *)(param_2 + 0x14);
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 5;
    pRVar8[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
    pRVar13->command[1] = (uint)param_2[3];
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_WINDOW_OFFSET_x1;
    pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x3a),*(undefined2 *)(param_2 + 0x38));
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
    pRVar13->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x38));
    pRVar13->command[2] = CONCAT22(*(undefined2 *)(param_2 + 0x36),*(undefined2 *)(param_2 + 0x3a));
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_SHADER_WINDOW_x1;
    pRVar13->command[1] =
         (uint)*(ushort *)(param_2 + 0x36) - (*(ushort *)(param_2 + 0x36) >> 0xc & 1) | 0x1000;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    bVar1 = *(byte *)((int)param_1 + 0x21ba);
    RVar9 = param_1[0x870];
    bVar2 = *(byte *)((int)param_1 + 0x21ad);
    bVar3 = *(byte *)(param_1 + 0x86b);
    bVar4 = *(byte *)((int)param_1 + 0x21af);
    bVar5 = *(byte *)((int)param_1 + 0x21ae);
    RVar12 = param_1[0x86d];
    RVar10 = param_1[0x86c];
    RVar11 = param_1[0x86f];
    uVar6 = *(ushort *)(param_1 + 0x86e);
    *HUD_Pass->command = (RsxCmd)&DAT_00081a00;
    pRVar13->command[1] = RVar9;
    pRVar13->command[2] =
         (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 |
         (uint)bVar4 << 2 | (uint)bVar5 << 4;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 3;
    pRVar8[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
    pRVar13->command[1] = RVar12;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = (RsxCmd)&DAT_00041840;
    pRVar13->command[1] = RVar11 | (uint)uVar6 << 0x14;
    pRVar8 = pRVar13->command;
    pRVar13->command = pRVar8 + 2;
    pRVar8[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
    pRVar13->command[1] = RVar10;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
    pRVar13->command[1] = 0x80000000;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
    pRVar13->command[1] = 0x40030303;
    pRVar13->command = pRVar13->command + 2;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_TEXTURE_FILTER_x1;
    pRVar13->command[1] = 0x2022000;
    pRVar13->command = pRVar13->command + 2;
    (*(code *)**(undefined4 **)(*param_1 + 0x10))
              (param_1,HUD_Pass,*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x36));
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0x400c1714;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = 0;
    pRVar13->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar13->command[5] = 8;
    pRVar13->command = pRVar13->command + 6;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0xbf800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0xbf800000;
    pRVar13->command[2] = 0xbf800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0xbf800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = 0xc1510;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0;
    pRVar13->command[3] = DAT_008fa550;
    pRVar13->command = pRVar13->command + 4;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
    pRVar13->command[1] = 0x3f800000;
    pRVar13->command[2] = 0x3f800000;
    pRVar13->command = pRVar13->command + 3;
    pRVar13 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar13->command[1] = 0;
    pRVar13->command = pRVar13->command + 2;
  }
  return;
}


// 0x04dc8c8 (0xd4 bytes)
void idol_draw::Gfx_Present(int *param_1,int param_2)

{
  if ((*(char *)(param_1 + 4) != '\0') && ((param_1[0x69b] & 1U) != 0)) {
    (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  }
  if (param_2 != 0) {
    if (param_1[0x747] == (uint)*(ushort *)(param_2 + 0x34)) {
      Gfx_DrawSurface(param_1,param_2,0);
    }
    else {
      Gfx_DrawStereoSurface(param_1,param_2,0);
    }
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1);
  return;
}


// 0x04dc99c (0x1e4 bytes)
// strings: 00658f40: 'Renderer timed out\n' | 0065927c: 'cellVideoOutConfigure() failed. (0x%08X)\n'

void idol_draw::Gfx_ReconfigureVideoOut(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  
  iVar5 = 40000;
  iVar4 = *(int *)(param_1 + 0x1a74);
  iVar1 = *(int *)(DAT_010ef520 + 8);
  while (iVar1 != iVar4) {
    syscall();
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) {
      printf("Renderer timed out\n");
    }
    iVar1 = *(int *)(DAT_010ef520 + 8);
  }
  lVar2 = sys_time_get_system_time();
  if ((longlong)((ZERO_MASK((0x32 - *(int *)(g_pIdolDraw + 0x18))) & 4000U) + 18000)
      < lVar2 - DAT_010ef500) {
    iVar4 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar4 + ((uint)(0x14 - (longlong)iVar4 >> 0x3f) & 0x14U - iVar4);
  }
  else {
    iVar4 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar4 + (iVar4 >> 0x1f & -iVar4);
  }
  g_PartNoShrink.piece<0,1>() = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar2;
  uVar3 = cellVideoOutConfigure(0,param_1 + 0x22ec,0,0);
  if ((int)uVar3 != 0) {
    printf("cellVideoOutConfigure() failed. (0x%08X)\n",uVar3);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x22ec);
  FUN_004e535c(param_1 + 0x1d38,1);
  FUN_004e535c(param_1 + 0x1e8c,1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  cellGcmSetVBlankHandler(0);
  return;
}


// 0x04dcb80 (0x250 bytes)
// strings: 00658f40: 'Renderer timed out\n' | 0065927c: 'cellVideoOutConfigure() failed. (0x%08X)\n'

uint idol_draw::Gfx_EnableSpecialVideoOutMode(int param_1)

{
  int iVar1;
  uint uVar4;
  longlong lVar2;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  GPiece<16> local_30;
  
  uVar4 = (uint)*(byte *)(param_1 + 0x185a4);
  if (*(byte *)(param_1 + 0x185a4) != 0) {
    iVar6 = 40000;
    iVar5 = *(int *)(param_1 + 0x1a74);
    iVar1 = *(int *)(DAT_010ef520 + 8);
    while (iVar1 != iVar5) {
      syscall();
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        printf("Renderer timed out\n");
      }
      iVar1 = *(int *)(DAT_010ef520 + 8);
    }
    lVar2 = sys_time_get_system_time();
    if ((longlong)
        ((ZERO_MASK((0x32 - *(int *)(g_pIdolDraw + 0x18))) & 4000U) + 18000) <
        lVar2 - DAT_010ef500) {
      iVar5 = DAT_010ef4fc + 5;
      DAT_010ef4fc = iVar5 + ((uint)(0x14 - (longlong)iVar5 >> 0x3f) & 0x14U - iVar5);
    }
    else {
      iVar5 = DAT_010ef4fc + -1;
      DAT_010ef4fc = iVar5 + (iVar5 >> 0x1f & -iVar5);
    }
    g_PartNoShrink.piece<0,1>() = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
    DAT_010ef500 = lVar2;
    uVar3 = cellVideoOutConfigure(0,local_30,0,0);
    if ((int)uVar3 == 0) {
      *(undefined1 *)(param_1 + 0x11) = 0x81;
      FUN_004e5db0(param_1 + 0x1d38,*(undefined4 *)(param_1 + 0x185d0),
                   *(undefined4 *)(param_1 + 0x185cc));
      FUN_004e5db0(param_1 + 0x1e8c,*(undefined4 *)(param_1 + 0x185d0),
                   *(undefined4 *)(param_1 + 0x185cc));
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x18591) = 0;
      uVar4 = cellGcmSetVBlankHandler(&PTR_FUN_0070fd60);
    }
    else {
      uVar4 = printf("cellVideoOutConfigure() failed. (0x%08X)\n",uVar3);
    }
  }
  return uVar4;
}


// 0x04dcdd0 (0x3cc bytes)
void idol_draw::Gfx_DrawLoadingBar(int param_1)

{
  int iVar1;
  RsxCmd *pRVar2;
  RsxCmd RVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  RsxCmd RVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x185f4) != 0) {
    BindVertexProgram(param_1,DL_Pass,0xb);
    BindFragmentProgram(param_1,DL_Pass,0x12);
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar4->command[1] = 0x1032;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar4->command[1] = 0x1044;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    iVar8 = *(int *)(param_1 + 0x4a8);
    iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x1a6c) * 4 + 0x185f8);
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
    RVar10 = iVar1 - iVar8;
    pRVar4->command[1] = RVar10 | 0x80000000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4168c;
    pRVar4->command[1] = RVar10 + 0xc | 0x80000000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x400c1714;
    pRVar4->command[1] = 0;
    pRVar4->command[2] = 0;
    pRVar4->command[3] = 0;
    pRVar4->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar4->command[5] = 8;
    pRVar4->command = pRVar4->command + 6;
    pRVar4 = DL_Pass;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x185f4) - 0x100;
    uVar11 = (uVar5 & (longlong)((int)uVar5 >> 0x1f)) + 0x100;
    uVar6 = *(uint *)(param_1 + 0x185f4) - uVar11;
    uVar6 = uVar6 & ~(longlong)((int)uVar6 >> 0x1f);
    pRVar2 = DL_Pass->command;
    uVar7 = uVar6 - (uVar6 & 0xffffff00);
    uVar5 = (uVar6 << 0x20) >> 0x28;
    iVar8 = (int)uVar7;
    DL_Pass->command = pRVar2 + 1;
    *pRVar2 = (((uint)uVar6 >> 8) + ((iVar8 != 0)) +
              (((int)uVar11 != 0))) * 0x40000 | 0x40001814;
    uVar9 = 0;
    if ((int)uVar11 != 0) {
      pRVar2 = pRVar4->command;
      pRVar4->command = pRVar2 + 1;
      *pRVar2 = (int)((uVar11 & 0xffffffff) << 0x18) - 0x1000000;
      uVar9 = uVar11;
    }
    RVar10 = (RsxCmd)uVar9;
    if ((uint)uVar6 >> 8 != 0) {
      do {
        pRVar2 = pRVar4->command;
        RVar3 = (RsxCmd)uVar9;
        uVar5 = uVar5 - 1;
        uVar9 = uVar9 + 0x100;
        RVar10 = (RsxCmd)uVar9;
        pRVar4->command = pRVar2 + 1;
        *pRVar2 = RVar3 | 0xff000000;
      } while (0 < (int)uVar5);
    }
    if (iVar8 != 0) {
      pRVar2 = pRVar4->command;
      pRVar4->command = pRVar2 + 1;
      *pRVar2 = RVar10 | (int)((uVar7 & 0xffffffff) << 0x18) - 0x1000000;
    }
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar4->command[1] = 2;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = 0x4174c;
    pRVar4->command[1] = 2;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar4->command[1] = 1;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DL_Pass;
    *DL_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar4->command[1] = 1;
    pRVar4->command = pRVar4->command + 2;
    *(undefined4 *)(param_1 + 0x185f4) = 0;
  }
  return;
}


// 0x04dd19c (0x554 bytes)
void idol_draw::Gfx_SetupUIRenderTarget(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd RVar10;
  RsxCmd *pRVar11;
  RsxCmd RVar12;
  RenderingStep *pRVar13;
  
  pRVar13 = ShadowPass;
  bVar1 = *(byte *)(param_1 + 0x21ba);
  RVar8 = *(RsxCmd *)(param_1 + 0x21c0);
  bVar2 = *(byte *)(param_1 + 0x21ad);
  bVar3 = *(byte *)(param_1 + 0x21ac);
  bVar4 = *(byte *)(param_1 + 0x21af);
  bVar5 = *(byte *)(param_1 + 0x21ae);
  RVar12 = *(RsxCmd *)(param_1 + 0x21b4);
  RVar9 = *(RsxCmd *)(param_1 + 0x21b0);
  RVar10 = *(RsxCmd *)(param_1 + 0x21bc);
  uVar6 = *(ushort *)(param_1 + 0x21b8);
  *ShadowPass->command = (RsxCmd)&DAT_00081a00;
  pRVar13->command[1] = RVar8;
  pRVar13->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar13->command[1] = RVar12;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = (RsxCmd)&DAT_00041840;
  pRVar13->command[1] = RVar10 | (uint)uVar6 << 0x14;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar13->command[1] = RVar9;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1be8) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1be9) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1bea) + 0xfeed0000;
  pRVar13->command[2] = *(byte *)(param_1 + 0x1beb) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar13->command[1] = *(byte *)(param_1 + 0x1c0d) + 0xfeed0000;
  pRVar11 = pRVar13->command;
  uVar6 = *(ushort *)(param_1 + 0x1c18);
  pRVar13->command = pRVar11 + 2;
  uVar7 = *(ushort *)(param_1 + 0x1c1a);
  pRVar11[2] = (RsxCmd)&DAT_00180208;
  pRVar13->command[1] =
       (uint)*(byte *)(param_1 + 0x1be6) | (uint)*(byte *)(param_1 + 0x1c0c) << 5 |
       (uint)*(byte *)(param_1 + 0x1be4) << 8 | (uint)*(byte *)(param_1 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar6) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar7) & 0xffffffff) << 0x18);
  pRVar13->command[2] = *(RsxCmd *)(param_1 + 0x1bfc);
  pRVar13->command[3] = *(RsxCmd *)(param_1 + 0x1bec);
  pRVar13->command[4] = *(RsxCmd *)(param_1 + 0x1c10);
  pRVar13->command[5] = *(RsxCmd *)(param_1 + 0x1bf0);
  pRVar13->command[6] = *(RsxCmd *)(param_1 + 0x1c00);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 7;
  pRVar11[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar13->command[1] = *(RsxCmd *)(param_1 + 0x1c14);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar13->command[1] = *(RsxCmd *)(param_1 + 0x1c04);
  pRVar13->command[2] = *(RsxCmd *)(param_1 + 0x1c08);
  pRVar13->command[3] = *(RsxCmd *)(param_1 + 0x1bf4);
  pRVar13->command[4] = *(RsxCmd *)(param_1 + 0x1bf8);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 5;
  pRVar11[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar13->command[1] = (uint)*(byte *)(param_1 + 0x1be7);
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c1e),*(undefined2 *)(param_1 + 0x1c1c));
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar13->command[1] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c18),*(undefined2 *)(param_1 + 0x1c1c));
  pRVar13->command[2] =
       CONCAT22(*(undefined2 *)(param_1 + 0x1c1a),*(undefined2 *)(param_1 + 0x1c1e));
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar13->command[1] =
       (uint)*(ushort *)(param_1 + 0x1c1a) - (*(ushort *)(param_1 + 0x1c1a) >> 0xc & 1) | 0x1000;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_COLOR_MASK_x1;
  pRVar13->command[1] = 0x10101;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_EQUATION_x1;
  pRVar13->command[1] = 0x80068006;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar13->command[1] = 0;
  pRVar13->command[2] = 0x302;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_FUNC_x2;
  pRVar13->command[1] = 0x206;
  pRVar13->command[2] = 1;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 0;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_BLEND_ENABLE_x1;
  pRVar13->command[1] = 1;
  pRVar13->command = pRVar13->command + 2;
  BindVertexProgram(param_1,pRVar13,0xd);
  BindFragmentProgram(param_1,pRVar13,3);
  FUN_004d8b50(param_1,5);
  *pRVar13->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar13->command[1] = 0x3020302;
  pRVar13->command[2] = 0x3030303;
  pRVar11 = pRVar13->command;
  pRVar13->command = pRVar11 + 3;
  pRVar11[3] = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar13->command[1] = 1;
  pRVar13->command = pRVar13->command + 2;
  return;
}


// 0x04dd6f0 (0x1ec bytes)
void idol_draw::Gfx_SubmitHudDrawCommands
               (undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,uint *param_5,
               uint param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  uint *puVar11;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar9 = uVar6 - 0x110;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar6;
  puVar5[0x24] = in_LR;
  puVar5[0x1f] = unaff_r29;
  puVar5[0x20] = unaff_r30;
  puVar5[0x21] = unaff_r31;
  puVar5[0x1e] = unaff_r28;
  puVar5[0x1d] = unaff_r27;
  puVar5[0x1c] = unaff_r26;
  puVar5[0x1b] = unaff_r25;
  puVar5[0x1a] = unaff_r24;
  puVar5[0x19] = unaff_r23;
  puVar5[0x18] = unaff_r22;
  if ((int)param_4 != -1) {
    *(undefined4 *)(puVar5 + 0xe) = 0x20;
    FUN_0050f500(ZEXT48(&DAT_010eeb08) + param_3 * 0x30 & 0xffffffff,param_4,uVar6 - 0x9c,
                 uVar6 - 0xa0);
    uVar7 = 0;
    if (*(int *)(puVar5 + 0xe) != 0) {
      do {
        puVar2 = *(undefined4 **)(param_2 + 8);
        *(undefined4 **)(param_2 + 8) = puVar2 + 2;
        iVar3 = *(int *)((int)&DAT_010ee670 + (int)(param_3 << 3) * 3);
        uVar1 = *(ushort *)((int)lVar9 + 0x74);
        *puVar2 = 0x4630c;
        uVar8 = iVar3 + (uint)uVar1;
        puVar2[2] = 0x86300;
        puVar2[1] = uVar8 & 0xffffffc0;
        iVar3 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar3 + 0xc;
        *(undefined4 *)(iVar3 + 4) = 0xb;
        *(undefined4 *)(iVar3 + 8) = 0x10001000;
        *(undefined4 *)(iVar3 + 0xc) = 0xca304;
        iVar3 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar3 + 0x10;
        *(uint *)(iVar3 + 4) = uVar8 >> 2 & 0xf;
        *(uint *)(iVar3 + 8) = param_6 | 0x10000;
        *(uint *)(iVar3 + 0xc) = param_6 | 0x10000;
        *(uint *)(iVar3 + 0x10) = (param_6 + 1) * 0x40000 & 0xfff80000 | 0xa400;
        puVar11 = (uint *)(*(int *)(param_2 + 8) + 4);
        *(int *)(param_2 + 8) = (int)puVar11 + (int)(((ulonglong)(param_6 + 1) & 0xfffffffe) << 2);
        uVar8 = param_6;
        puVar10 = param_5;
        if (param_6 != 0) {
          do {
            uVar4 = *puVar10;
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
            *puVar11 = uVar4 << 0x10 | uVar4 >> 0x10;
            puVar11 = puVar11 + 1;
          } while (0 < (int)uVar8);
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 2;
      } while (uVar7 < *(uint *)(puVar5 + 0xe));
    }
  }
  return;
}


// 0x04dd8e0 (0x2c8 bytes)
void FUN_004dd8e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  iVar15 = 0;
  uVar6 = *(uint *)(param_1 + 0x1a6c);
  iVar12 = 0;
  iVar8 = 0;
  iVar9 = param_1;
  iVar10 = param_1;
  iVar11 = param_1;
  do {
    piVar5 = (int *)((uVar6 ^ 1) * 0xaa8 + param_1 + 0x4b0 + iVar12);
    if (iVar15 == 0) {
      memcpy((void *)(**(int **)((int)&DepthPass + iVar8) + 0x30),(void *)(*piVar5 + 0x30),
                   *(size_t *)(iVar9 + 0x22fc) - 0x30);
    }
    else {
      memcpy((void *)**(undefined4 **)((int)&DepthPass + iVar8),(void *)*piVar5,
                   *(size_t *)(iVar9 + 0x22fc));
    }
    iVar14 = iVar11 + 0x24e0;
    uVar13 = 0;
    if (*(int *)(iVar9 + 0x184e0) != 0) {
      do {
        (*(int **)((int)&DepthPass + iVar8))[2] =
             **(int **)((int)&DepthPass + iVar8) + *(int *)(iVar14 + 0x14);
        idol_draw::Gfx_SubmitHudDrawCommands
                  (param_1,*(undefined4 *)((int)&DepthPass + iVar8),*(undefined4 *)(iVar14 + 0x18),
                   *(undefined4 *)(iVar14 + 0x10),iVar14,*(undefined1 *)(iVar14 + 0x1c));
        uVar13 = uVar13 + 1;
        iVar14 = iVar14 + 0x20;
      } while (uVar13 < *(uint *)(iVar8 + param_1 + 0x184e0));
    }
    piVar5 = (int *)(iVar10 + 0x2380);
    uVar13 = 0;
    if (*(int *)(iVar9 + 0x2354) != 0) {
      do {
        iVar7 = 0;
        lVar16 = 2;
        (*(int **)((int)&DepthPass + iVar8))[2] = **(int **)((int)&DepthPass + iVar8) + *piVar5;
        iVar14 = *(int *)((int)&DepthPass + iVar8);
        do {
          *(undefined4 *)(*(int *)(iVar14 + 8) + iVar7) = 0;
          iVar1 = *(int *)(iVar14 + 8) + iVar7;
          iVar7 = iVar7 + 8;
          *(undefined4 *)(iVar1 + 4) = 0;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        uVar13 = uVar13 + 1;
        piVar5 = piVar5 + 1;
        *(int *)(iVar14 + 8) = *(int *)(iVar14 + 8) + 0x10;
      } while (uVar13 < *(uint *)(iVar8 + param_1 + 0x2354));
    }
    puVar2 = (undefined4 *)((int)&DepthPass + iVar8);
    piVar5 = (int *)(iVar9 + 0x22fc);
    iVar15 = iVar15 + 1;
    iVar12 = iVar12 + 0xf8;
    iVar11 = iVar11 + 0x2000;
    iVar8 = iVar8 + 4;
    iVar10 = iVar10 + 0x20;
    iVar9 = iVar9 + 4;
    ((int *)*puVar2)[2] = *(int *)*puVar2 + *piVar5;
    iVar14 = g_pIdolDraw;
    pRVar4 = HUD_Pass;
  } while (iVar15 < 0xb);
  if ((*(int *)(param_1 + 0x1858c) != 0) &&
     (uVar6 = 0, iVar9 = param_1, *(int *)(param_1 + 0x1858c) != 0)) {
    do {
      uVar6 = uVar6 + 1;
      pfVar3 = (float *)(*(int *)pRVar4 + *(int *)(iVar9 + 0x1850c));
      *pfVar3 = *(float *)(iVar14 + 0x1a84) * 2.0 + *pfVar3;
      iVar9 = iVar9 + 4;
    } while (uVar6 < *(uint *)(param_1 + 0x1858c));
  }
  *(undefined4 *)(param_1 + 0x1858c) = 0;
  return;
}


// 0x04ddba8 (0xd98 bytes)
// strings: 00658f40: 'Renderer timed out\n'

void idol_draw::BuildAndFlipFrame(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  RenderingStep *pRVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  RenderingStep **ppRVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 local_60 [4];
  
  bVar8 = true;
  iVar7 = (int)param_1;
  uVar9 = (ulonglong)*(uint *)(iVar7 + 0x1a6c);
  uVar15 = param_1 + uVar9 * 0x154 + 0x1d38 & 0xffffffff;
  uVar16 = uVar9;
  if (*(int *)(iVar7 + 0x4a0) == 1) {
    uVar16 = (ulonglong)(*(uint *)(iVar7 + 0x14) >> 1) & 1;
    uVar15 = uVar16;
    if ((0 < *(int *)(iVar7 + 0x1a8c)) &&
       (uVar15 = (ulonglong)DAT_008fa554, DAT_008fa554 == 0xffffffff)) {
      DAT_008fa554 = (uint)uVar16;
      uVar9 = (ulonglong)*(uint *)(iVar7 + 0x1a6c);
      uVar15 = uVar16;
    }
    uVar15 = param_1 + uVar15 * 0x154 + 0x1d38 & 0xffffffff;
    if ((*(char *)(iVar7 + 0x18591) == '\0') || ((uVar9 & 1) == 0)) {
      ppRVar13 = &DepthPass;
      lVar20 = 0xb;
      lVar12 = param_1;
      do {
        pRVar4 = *ppRVar13;
        ppRVar13 = ppRVar13 + 1;
        *(int *)((int)lVar12 + 0x22fc) = (int)pRVar4->command - *(int *)pRVar4;
        *(uint *)((int)lVar12 + 9000) = pRVar4->commandLen - *(int *)pRVar4;
        lVar12 = lVar12 + 4;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      *(undefined1 *)(iVar7 + 0x18591) = 1;
      bVar8 = false;
    }
    else {
      FUN_004edcfc(&DAT_01111700);
      FUN_004dd8e0(param_1);
      if (*(int *)(iVar7 + 0x1a8c) < 1) {
        uVar15 = param_1 + uVar16 * 0x154 + 0x1d74 & 0xffffffff;
      }
      else {
        uVar15 = param_1 + (ulonglong)DAT_008fa554 * 0x154 + 0x1d74 & 0xffffffff;
      }
    }
  }
  if ((*(uint *)(iVar7 + 0x1a6c) & 1) != 0) {
    lVar20 = 0xb;
    lVar12 = param_1;
    do {
      iVar14 = (int)lVar12;
      *(undefined4 *)(iVar14 + 0x2354) = 0;
      lVar12 = lVar12 + 4;
      *(undefined4 *)(iVar14 + 0x184e0) = 0;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  Gfx_SetupUIRenderTarget(param_1);
  if (*(int *)(iVar7 + 0x1d1c) == *(int *)(iVar7 + 0x1e70)) {
    Gfx_DrawSurface(param_1,uVar15,0);
  }
  else {
    Gfx_DrawStereoSurface(param_1,uVar15,0);
  }
  pRVar4 = HUD_Pass;
  ppRVar13 = &DepthPass;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1be8) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1bea) + 0xfeed0000;
  pRVar4->command[2] = *(byte *)(iVar7 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar4->command[1] = *(byte *)(iVar7 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  uVar1 = *(ushort *)(iVar7 + 0x1c18);
  uVar2 = *(ushort *)(iVar7 + 0x1c1a);
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar4->command[1] =
       (uint)*(byte *)(iVar7 + 0x1be6) | (uint)*(byte *)(iVar7 + 0x1c0c) << 5 |
       (uint)*(byte *)(iVar7 + 0x1be4) << 8 | (uint)*(byte *)(iVar7 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar4->command[2] = *(RsxCmd *)(iVar7 + 0x1bfc);
  pRVar4->command[3] = *(RsxCmd *)(iVar7 + 0x1bec);
  pRVar4->command[4] = *(RsxCmd *)(iVar7 + 0x1c10);
  pRVar4->command[5] = *(RsxCmd *)(iVar7 + 0x1bf0);
  pRVar4->command[6] = *(RsxCmd *)(iVar7 + 0x1c00);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar4->command[1] = *(RsxCmd *)(iVar7 + 0x1c14);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar4->command[1] = *(RsxCmd *)(iVar7 + 0x1c04);
  pRVar4->command[2] = *(RsxCmd *)(iVar7 + 0x1c08);
  pRVar4->command[3] = *(RsxCmd *)(iVar7 + 0x1bf4);
  pRVar4->command[4] = *(RsxCmd *)(iVar7 + 0x1bf8);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar4->command[1] = (uint)*(byte *)(iVar7 + 0x1be7);
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar4->command[1] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c1e),*(undefined2 *)(iVar7 + 0x1c1c));
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar4->command[1] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c18),*(undefined2 *)(iVar7 + 0x1c1c));
  pRVar4->command[2] = CONCAT22(*(undefined2 *)(iVar7 + 0x1c1a),*(undefined2 *)(iVar7 + 0x1c1e));
  pRVar3 = pRVar4->command;
  pRVar4->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar4->command[1] =
       (uint)*(ushort *)(iVar7 + 0x1c1a) - (*(ushort *)(iVar7 + 0x1c1a) >> 0xc & 1) | 0x1000;
  pRVar4->command = pRVar4->command + 2;
  RsxCmd_WritePass(DepthPass);
  RsxCmd_WritePass(OceanForwardPass);
  RsxCmd_WritePass(ForwardPass);
  RsxCmd_WritePass(M_Depth);
  RsxCmd_WritePass(M_Pass);
  RsxCmd_WritePass(ShadowPass);
  RsxCmd_WritePass(MobyDepth);
  RsxCmd_WritePass(MobyPass);
  RsxCmd_WritePass(DL_DepthPass);
  RsxCmd_WritePass(DL_Pass);
  RsxCmd_WritePass(HUD_Pass);
  RsxCmd_WritePass(DepthPass);
  Gfx_DrawLoadingBar(param_1);
  lVar12 = 10;
  iVar14 = 0;
  do {
    pRVar4 = *ppRVar13;
    ppRVar13 = ppRVar13 + 1;
    *pRVar4->command =
         **(int **)((int)&OceanForwardPass + iVar14) - *(int *)(iVar7 + 0x4a8) | 0x20000000;
    pRVar4->command = pRVar4->command + 1;
    pRVar4 = HUD_Pass;
    lVar12 = lVar12 + -1;
    iVar14 = iVar14 + 4;
  } while (lVar12 != 0);
  lVar20 = 0xb;
  lVar12 = param_1 + ((ulonglong)*(uint *)(iVar7 + 0x1a6c) ^ 1) * 0xaa8;
  uVar15 = lVar12 + 0x4b0U & 0xffffffff;
  uVar9 = uVar15;
  do {
    piVar10 = (int *)uVar9;
    piVar10[2] = *piVar10;
    piVar10[1] = *piVar10 + piVar10[4];
    uVar9 = uVar9 + 0xf8;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (bVar8) {
    if (*(int *)(iVar7 + 0x1a8c) < 1) {
      idol::GcmFlipCommand_Thunk
                (pRVar4,*(uint *)(iVar7 + ((int)(uVar16 << 6) + (int)(uVar16 << 2)) * 5 + 0x1e50) &
                        0xff);
      *pRVar4->command = 0x40064;
      pRVar4->command[1] = 0x10;
      pRVar3 = pRVar4->command;
      pRVar4->command = pRVar3 + 2;
      pRVar3[2] = 0x40068;
      pRVar4->command[1] = 0;
      pRVar4->command = pRVar4->command + 2;
      DAT_008fa554 = 0xffffffff;
    }
    else {
      *(int *)(iVar7 + 0x1a8c) = *(int *)(iVar7 + 0x1a8c) + -1;
    }
  }
  else {
    FUN_004edc68(&DAT_01111700,pRVar4);
  }
  RsxCmd_WritePass(pRVar4);
  iVar14 = *(int *)(iVar7 + 0x1a74);
  iVar17 = 40000;
  iVar11 = DAT_010ef520[2];
  while (iVar11 != iVar14) {
    syscall();
    iVar17 = iVar17 + -1;
    if (iVar17 == 0) {
      printf("Renderer timed out\n");
    }
    iVar11 = DAT_010ef520[2];
  }
  lVar20 = sys_time_get_system_time();
  if ((longlong)((ZERO_MASK((0x32 - *(int *)(g_pIdolDraw + 0x18))) & 4000U) + 18000)
      < lVar20 - DAT_010ef500) {
    iVar14 = DAT_010ef4fc + 5;
    DAT_010ef4fc = iVar14 + ((uint)(0x14 - (longlong)iVar14 >> 0x3f) & 0x14U - iVar14);
  }
  else {
    iVar14 = DAT_010ef4fc + -1;
    DAT_010ef4fc = iVar14 + (iVar14 >> 0x1f & -iVar14);
  }
  g_PartNoShrink.piece<0,1>() = (undefined1)((ulonglong)(LZCOUNT(DAT_010ef4fc) << 0x20) >> 0x25);
  DAT_010ef500 = lVar20;
  if ((*(int *)(iVar7 + 0x4a4) != *(int *)(iVar7 + 0x4a0)) && ((*(uint *)(iVar7 + 0x1a6c) & 1) == 0)
     ) {
    if (*(int *)(iVar7 + 0x4a4) == 1) {
      if (*(char *)(iVar7 + 0x185a4) == '\0') {
        *(undefined4 *)(iVar7 + 0x4a4) = 0;
      }
      else {
        Gfx_EnableSpecialVideoOutMode(param_1);
      }
    }
    else {
      Gfx_ReconfigureVideoOut(param_1);
    }
    *(undefined4 *)(iVar7 + 0x4a0) = *(undefined4 *)(iVar7 + 0x4a4);
  }
  FUN_004edcfc(&DAT_01111700);
  iVar14 = (int)lVar12;
  uVar5 = *(undefined4 *)(iVar7 + 0x1a70);
  **(undefined4 **)(iVar14 + 0x4b8) = 0x40050;
  *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4) = uVar5;
  *(int *)(iVar14 + 0x4b8) = *(int *)(iVar14 + 0x4b8) + 8;
  *(uint *)(iVar7 + 0x1a6c) = *(uint *)(iVar7 + 0x1a6c) ^ 1;
  *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
  if (*(int *)(iVar7 + 0x4a0) == 0) {
    iVar11 = 0;
    lVar12 = 2;
    do {
      *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + iVar11) = 0;
      iVar17 = *(int *)(iVar14 + 0x4b8) + iVar11;
      iVar11 = iVar11 + 8;
      *(undefined4 *)(iVar17 + 4) = 0;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    puVar18 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 0x10);
    *(undefined4 **)(iVar14 + 0x4b8) = puVar18;
  }
  else {
    FUN_0050f074(uVar15,0x44,1);
    puVar18 = *(undefined4 **)(iVar14 + 0x4b8);
  }
  lVar12 = 2;
  *puVar18 = 0x141efc;
  puVar18 = local_60;
  *(undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4) = 0x11;
  puVar19 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 8);
  *(undefined4 **)(iVar14 + 0x4b8) = puVar19;
  do {
    *puVar19 = *puVar18;
    iVar11 = *(int *)(iVar14 + 0x4b8);
    *(int *)(iVar14 + 0x4b8) = iVar11 + 4;
    puVar19 = puVar18 + 1;
    puVar18 = puVar18 + 2;
    *(undefined4 *)(iVar11 + 4) = *puVar19;
    puVar19 = (undefined4 *)(*(int *)(iVar14 + 0x4b8) + 4);
    *(undefined4 **)(iVar14 + 0x4b8) = puVar19;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  *pRVar4->command = *(int *)(iVar14 + 0x4b0) - *(int *)(iVar7 + 0x4a8) | 0x20000000;
  pRVar4->command = pRVar4->command + 1;
  sync(0);
  *DAT_010ef520 = *(int *)(iVar14 + 0x4b8) - *(int *)(iVar7 + 0x4a8);
  uVar6 = *(uint *)(iVar7 + 0x1a6c);
  param_1 = param_1 + (ulonglong)uVar6 * 0xaa8;
  *(int *)(iVar7 + 0x1a74) = *(int *)(iVar7 + 0x1a70);
  *(int *)(iVar7 + 0x1a70) = *(int *)(iVar7 + 0x1a70) + 1;
  uVar15 = param_1 + 0x4b0;
  OceanForwardPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x5a8);
  DepthPass = (RenderingStep *)uVar15;
  ForwardPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x6a0);
  M_Depth = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x798);
  M_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x890);
  ShadowPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0x988);
  MobyDepth = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xa80);
  MobyPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xb78);
  DL_DepthPass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xc70);
  DL_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xd68);
  HUD_Pass = (RenderingStep *)(iVar7 + uVar6 * 0xaa8 + 0xe60);
  uVar15 = uVar15 & 0xffffffff;
  FrameHeap = (undefined4 *)(iVar7 + (*(uint *)(iVar7 + 0x14) % 3) * 0x24 + 0x1a00);
  memset(uVar15 + 0x14,0,0x90);
  memset(uVar15 + 0xa8,0xff,0x48);
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x574) = 0;
  *(undefined4 *)(iVar7 + 0x570) = 0;
  pRVar4 = OceanForwardPass;
  memset(OceanForwardPass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = ForwardPass;
  memset(ForwardPass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = M_Depth;
  memset(M_Depth + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = M_Pass;
  memset(M_Pass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = ShadowPass;
  memset(ShadowPass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = MobyDepth;
  memset(MobyDepth + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = MobyPass;
  memset(MobyPass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = DL_DepthPass;
  memset(DL_DepthPass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = DL_Pass;
  memset(DL_Pass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  pRVar4 = HUD_Pass;
  memset(HUD_Pass + 1,0,0x90);
  memset(&pRVar4[8].command,0xff,0x48);
  pRVar4[9].field7_0x10 = 0;
  pRVar4[9].callback = (undefined *)0x0;
  FUN_004fe61c(FrameHeap,*FrameHeap);
  return;
}


// 0x04de940 (0x84 bytes)
// strings: 006592a8: 'Shutting down graphic system ...\n' | 006592d0: 'ERROR: cellSpursEventFlagDetachLv2EventQueue failed: 0x%x\n' | 00659310: 'ERROR: cellSpursFinalize failed: 0x%x\n'

void FUN_004de940(void)

{
  undefined8 uVar1;
  
  print_tty2("Shutting down graphic system ...\n");
  uVar1 = cellSpursEventFlagDetachLv2EventQueue(&DAT_01111580);
  if ((int)uVar1 != 0) {
    print_tty2("ERROR: cellSpursEventFlagDetachLv2EventQueue failed: 0x%x\n",uVar1);
  }
  uVar1 = cellSpursFinalize(PTR_DAT_008fa624);
  if ((int)uVar1 != 0) {
    print_tty2("ERROR: cellSpursFinalize failed: 0x%x\n",uVar1);
  }
  return;
}


// 0x04de9c4 (0xec bytes)
longlong FUN_004de9c4(undefined8 param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  GPiece<8> local_c0;
  GPiece<136> auStack_b8;
  
  uVar1 = FUN_0050f434(&DAT_010eeb08 + param_2 * 0x30);
  lVar3 = 0;
  if (uVar1 != 0) {
    do {
      FUN_0050f6e4(&DAT_010eeb08 + param_2 * 0x30,lVar3,auStack_b8,local_c0);
      iVar2 = FUN_005cc784(param_3,auStack_b8);
      if (iVar2 == 0) {
        return lVar3;
      }
      uVar4 = (int)lVar3 + 1;
      lVar3 = (longlong)(int)uVar4;
    } while (uVar4 < uVar1);
  }
  return 0xffffffff;
}


// 0x04deab8 (0x124 bytes)
void FUN_004deab8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  RenderingStep *pRVar4;
  ulonglong uVar5;
  RsxCmd *pRVar6;
  longlong lVar7;
  RsxCmd *pRVar8;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar1 = uVar5 - 0xa0;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar5;
  *(undefined4 *)(puVar3 + 0x10) = param_3;
  *(undefined4 *)((int)puVar3 + 0x84) = param_3;
  *(undefined4 *)(puVar3 + 0x11) = param_3;
  *(undefined4 *)((int)puVar3 + 0x8c) = param_3;
  auVar12 = ZEXT416(0xffffffff);
  auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar11 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = *(undefined1 (*) [16])(puVar3 + 0x10);
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined4 *)((int)puVar3 + 0x84) = param_2;
  auVar13 = vectorConvertFromUnsignedFixedPointWord(auVar12,0);
  *(undefined4 *)(puVar3 + 0x11) = param_2;
  *(undefined4 *)((int)puVar3 + 0x8c) = param_2;
  auVar12 = loadVectorLeftIndexed(0x80,0x4deab0);
  auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  puVar3[0x13] = unaff_r31;
  pRVar4 = HUD_Pass;
  auVar16 = vectorConvertFromUnsignedFixedPointWord(*(undefined1 (*) [16])(puVar3 + 0x10),0);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar11);
  puVar3[0x12] = unaff_r30;
  auVar15 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  pRVar6 = pRVar4->command;
  lVar7 = uVar5 - 0x30;
  lVar9 = 2;
  auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar10);
  uVar2 = storeVectorElementWordIndexed(auVar12,0x70,lVar1);
  *(undefined4 *)(puVar3 + 0xe) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar11,0x74,lVar1);
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar12,0x78,lVar1);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  auVar12 = loadVectorLeftIndexed(4,0x4deab0);
  auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,auVar15
                      );
  uVar2 = storeVectorElementWordIndexed(auVar12,0x7c,lVar1);
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  *pRVar6 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar4->command[1] = 0x12;
  pRVar6 = pRVar4->command + 2;
  pRVar4->command = pRVar6;
  do {
    pRVar8 = (RsxCmd *)lVar7;
    *pRVar6 = *pRVar8;
    pRVar6 = pRVar4->command;
    pRVar4->command = pRVar6 + 1;
    lVar7 = lVar7 + 8;
    pRVar6[1] = pRVar8[1];
    pRVar6 = pRVar4->command + 1;
    pRVar4->command = pRVar6;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}


// 0x04debdc (0x14c bytes)
void FUN_004debdc(undefined8 param_1,byte *param_2,byte *param_3,int param_4,ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  
  uVar6 = param_5 & 0xffffffff;
  while (1 < uVar6) {
    pbVar11 = param_2 + param_4 * 4;
    uVar5 = (uint)((int)param_5 * param_4) >> 1;
    pbVar13 = param_2 + 4;
    pbVar9 = pbVar11 + 4;
    uVar7 = 0;
    pbVar8 = param_3;
    pbVar15 = param_3;
    if (uVar5 != 0) {
      do {
        lVar17 = 4;
        pbVar16 = param_2;
        pbVar14 = pbVar13;
        pbVar12 = pbVar11;
        pbVar10 = pbVar9;
        do {
          bVar1 = *pbVar16;
          bVar2 = *pbVar14;
          pbVar15 = pbVar8 + 1;
          bVar3 = *pbVar12;
          pbVar16 = pbVar16 + 1;
          bVar4 = *pbVar10;
          pbVar14 = pbVar14 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar10 = pbVar10 + 1;
          *pbVar8 = (byte)((int)((uint)bVar1 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4) >> 2);
          lVar17 = lVar17 + -1;
          pbVar8 = pbVar15;
        } while (lVar17 != 0);
        uVar7 = uVar7 + 1;
        param_2 = param_2 + 8;
        pbVar13 = pbVar13 + 8;
        pbVar11 = pbVar11 + 8;
        pbVar9 = pbVar9 + 8;
      } while (uVar7 < uVar5);
    }
    param_5 = (param_5 << 0x20) >> 0x21;
    param_2 = param_3;
    param_3 = pbVar15;
    uVar6 = param_5;
  }
  return;
}


// 0x04ded28 (0x288 bytes)
// strings: 00659340: 'ERROR: open file %s\n'

void FUN_004ded28(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  size_t __n;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *__src;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  GPiece<3> local_80;
  undefined1 uStack_7d;
  undefined4 local_7c;
  GPiece<12> auStack_78;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar4 = FUN_005c52f0(param_3,&DAT_00659338);
  if ((int)uVar4 == 0) {
    print_tty2("ERROR: open file %s\n",param_3);
  }
  else {
    FUN_005c5364(auStack_78,1,0x12,uVar4);
    uVar2 = CONCAT11(local_6b,local_6c);
    uVar3 = CONCAT11(local_69,local_6a);
    uVar5 = FUN_004fe5ec(param_4);
    iVar10 = (uint)uVar3 * (uint)uVar2;
    __n = iVar10 * 8;
    __src = (undefined1 *)idol::AllocateMemAlign(param_4,__n,0x40);
    iVar10 = iVar10 * 4;
    FUN_005c5364(__src,1,iVar10,uVar4);
    FUN_005c4f10(uVar4);
    if (uVar3 != 0) {
      uVar9 = 0;
      puVar6 = __src;
      do {
        uVar7 = (uint)uVar2;
        puVar8 = puVar6;
        if (uVar2 != 0) {
          do {
            uVar7 = uVar7 - 1;
            uVar1 = puVar8[2];
            puVar6 = puVar8 + 4;
            puVar8[2] = *puVar8;
            *puVar8 = uVar1;
            puVar8 = puVar6;
          } while (0 < (int)uVar7);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
    FUN_004debdc(param_1,__src,__src + iVar10,(uint)uVar2,(uint)uVar3);
    puVar6 = __src;
    if ((int)param_5 != 0) {
      puVar6 = (undefined1 *)idol::AllocateMemAlign(param_5,__n,0x40);
      memcpy(puVar6,__src,__n);
      FUN_004fe61c(param_4,uVar5);
    }
    FUN_0053a154(0x8058,local_80,&local_7c,0,1);
    *param_2 = uStack_7d;
    param_2[1] = 10;
    param_2[2] = 2;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = local_7c;
    *(ushort *)(param_2 + 8) = uVar2;
    *(ushort *)(param_2 + 10) = uVar3;
    *(undefined2 *)(param_2 + 0xc) = 1;
    *(uint *)(param_2 + 0x10) = (uint)uVar2 << 2;
    param_2[0xe] = (char)((ulonglong)(LZCOUNT((int)param_5) << 0x20) >> 0x25);
    cellGcmAddressToOffset(puVar6,param_2 + 0x14);
  }
  return;
}


// 0x04defb0 (0x190 bytes)
void FUN_004defb0(undefined8 param_1,undefined1 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 *__src;
  undefined4 *puVar2;
  longlong lVar3;
  GPiece<3> local_50;
  undefined1 uStack_4d;
  undefined4 local_4c;
  
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar1 = FUN_004fe5ec(param_4);
  __src = (undefined4 *)idol::AllocateMemAlign(param_4,0x40,0x40);
  lVar3 = 2;
  puVar2 = __src;
  do {
    *puVar2 = param_3;
    puVar2[1] = param_3;
    puVar2[2] = param_3;
    puVar2[3] = param_3;
    puVar2[4] = param_3;
    puVar2[5] = param_3;
    puVar2[6] = param_3;
    puVar2[7] = param_3;
    puVar2 = puVar2 + 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = __src;
  if ((int)param_5 != 0) {
    puVar2 = (undefined4 *)idol::AllocateMemAlign(param_5,0x40,0x40);
    memcpy(puVar2,__src,0x40);
    FUN_004fe61c(param_4,uVar1);
  }
  FUN_0053a154(0x8058,local_50,&local_4c,0,1);
  param_2[2] = 2;
  *param_2 = uStack_4d;
  param_2[1] = 1;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = local_4c;
  *(undefined2 *)(param_2 + 8) = 4;
  *(undefined2 *)(param_2 + 10) = 4;
  *(undefined2 *)(param_2 + 0xc) = 1;
  *(undefined4 *)(param_2 + 0x10) = 0x10;
  param_2[0xe] = (char)((ulonglong)(LZCOUNT((int)param_5) << 0x20) >> 0x25);
  cellGcmAddressToOffset(puVar2,param_2 + 0x14);
  return;
}


// 0x04df1c0 (0x2d0 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df1c0(double param_1,double param_2,double param_3,int param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  *(float *)(param_4 + 0x410) = (float)param_2;
  *(float *)(param_4 + 0x414) = (float)param_3;
  fVar1 = 1.3333334;
  if (*(int *)(param_4 + 0xc) == 1) {
    fVar1 = 1.7777777;
  }
  dVar3 = (double)fVar1;
  auVar6.piece<0,4>() = (float)param_2;
  auVar6.piece<4,4>() = (float)param_2;
  auVar6.piece<8,4>() = (float)param_2;
  auVar6.piece<12,4>() = (float)param_2;
  auVar17.piece<0,4>() = (float)param_3;
  auVar17.piece<4,4>() = (float)param_3;
  auVar17.piece<8,4>() = (float)param_3;
  auVar17.piece<12,4>() = (float)param_3;
  dVar2 = (double)FUN_005dd1f4(-(double)((float)(param_1 * 0.01745329238474369) * 0.5 - 1.5707964));
  auVar13 = _DAT_004df1b0;
  auVar9 = _DAT_004df170;
  auVar4 = vectorSubtractFloatingPoint(auVar6,auVar17);
  fVar1 = (float)(dVar2 / dVar3);
  auVar7 = ZEXT416(0xffffffff);
  auVar5 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar19 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar7 = ZEXT416(0xffffffff);
  auVar16 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0);
  auVar21 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar11 = vectorReciprocalEstimateFloatingPoint(auVar4);
  auVar7 = loadVectorLeftIndexed(0x14,0x4df140);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar14 = vectorAddFloatingPoint(auVar17,auVar6);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar4,auVar8);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar11,auVar7,auVar5);
  auVar7 = ZEXT416(0xffffffff);
  auVar11 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = ZEXT416(0xffffffff);
  auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar17,auVar6,auVar7);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar5,auVar4,auVar8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar12);
  auVar12 = vectorShiftLeftIntegerWord(auVar19,auVar19);
  auVar5 = vectorShiftLeftIntegerWord(auVar16,auVar16);
  auVar7 = ZEXT416(0xffffffff);
  auVar17 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar4,auVar8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar7,auVar10);
  auVar7.piece<0,4>() = fVar1;
  auVar7.piece<4,4>() = fVar1;
  auVar7.piece<8,4>() = fVar1;
  auVar7.piece<12,4>() = fVar1;
  auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar16 = vectorPermute(auVar7,auVar21,_DAT_004df160);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar14,auVar6,auVar5);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar6,auVar12);
  auVar7 = loadVectorLeftIndexed(0x40,0x4df140);
  auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorPermute(auVar4,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,
                         _DAT_004df190);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar6,auVar8,auVar17);
  auVar10 = vectorPermute(auVar4,auVar21,_DAT_004df1a0);
  auVar4.piece<0,4>() = (float)dVar2;
  auVar4.piece<4,4>() = (float)dVar2;
  auVar4.piece<8,4>() = (float)dVar2;
  auVar4.piece<12,4>() = (float)dVar2;
  *(undefined1 (*) [16])(param_4 + 0x60U & 0xfffffff0) = auVar16;
  auVar12 = vectorPermute(auVar4,auVar21,auVar9);
  auVar8 = vectorPermute(auVar7,auVar21,auVar13);
  *(undefined1 (*) [16])(param_4 + 0x70U & 0xfffffff0) = auVar12;
  *(undefined1 (*) [16])(param_4 + 0x80U & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(param_4 + 0x90U & 0xfffffff0) = auVar8;
  auVar9 = *(undefined1 (*) [16])(param_4 + 0xa0U & 0xfffffff0);
  auVar13 = *(undefined1 (*) [16])(param_4 + 0xb0U & 0xfffffff0);
  auVar7 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar6 = auVar9 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar17 = auVar13 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar4 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = *(undefined1 (*) [16])(param_4 + 0xc0U & 0xfffffff0);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar21);
  auVar7 = auVar9 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar6 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = *(undefined1 (*) [16])(param_4 + 0xd0U & 0xfffffff0);
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar17 = auVar5 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar21);
  auVar4 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar6 = auVar23 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar9 = auVar9 & (GPiece<16>)0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar21);
  auVar17 = auVar13 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar12,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar21);
  auVar13 = auVar13 & (GPiece<16>)0xffffffff;
  auVar6 = auVar23 & (GPiece<16>)0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar19);
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar15);
  auVar7 = auVar5 & (GPiece<16>)0xffffffff;
  auVar4 = auVar5 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,auVar20)
  ;
  auVar9 = auVar23 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar18
                      );
  auVar5 = vectorMultiplyAddFloatingPoint
                     (auVar10,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar11);
  auVar11 = vectorMultiplyAddFloatingPoint
                      (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar22);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar10,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar14);
  auVar7 = vectorMultiplyAddFloatingPoint
                     (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar12);
  auVar4 = vectorAddFloatingPoint(auVar19,auVar16);
  auVar9 = vectorAddFloatingPoint(auVar15,auVar13);
  auVar6 = vectorAddFloatingPoint(auVar5,auVar11);
  auVar7 = vectorAddFloatingPoint(auVar17,auVar7);
  *(undefined1 (*) [16])(param_4 + 0xe0U & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_4 + 0xf0U & 0xfffffff0) = auVar9;
  *(undefined1 (*) [16])(param_4 + 0x100U & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_4 + 0x110U & 0xfffffff0) = auVar7;
  return;
}


// 0x04df600 (0x62c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df600(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  GPiece<32> auVar1;
  GPiece<32> auVar2;
  GPiece<32> auVar3;
  GPiece<32> auVar4;
  GPiece<32> auVar5;
  GPiece<32> auVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  GPiece<16> auVar10;
  undefined4 in_vr2_32_0;
  undefined4 uVar11;
  undefined4 in_vr2_32_1;
  undefined4 uVar12;
  undefined4 in_vr2_32_2;
  undefined4 uVar13;
  undefined4 in_vr2_32_3;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  auVar14 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar10 = ZEXT416(0);
  auVar27 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar15 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar16 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar20 = vectorMergeLowWord(auVar14,auVar15);
  auVar21 = vectorMergeLowWord(auVar16,auVar17);
  auVar18 = vectorMergeHighWord(auVar14,auVar15);
  auVar19 = vectorMergeHighWord(auVar16,auVar17);
  auVar23 = vectorPermute(auVar20,auVar21,_DAT_004df4d0);
  auVar25 = vectorPermute(auVar21,auVar20,_DAT_004df4e0);
  auVar33 = vectorPermute(auVar16,auVar14,_DAT_004df4f0);
  auVar28 = vectorPermute(auVar17,auVar15,_DAT_004df520);
  auVar22 = vectorPermute(auVar16,auVar14,_DAT_004df490);
  auVar10 = vectorPermute(auVar17,auVar15,_DAT_004df4c0);
  auVar31 = vectorPermute(auVar18,auVar19,_DAT_004df4d0);
  auVar30 = vectorPermute(auVar19,auVar18,_DAT_004df4e0);
  auVar1.piece<0,16>() = auVar23;
  auVar1.piece<16,16>() = auVar23;
  auVar2.piece<0,16>() = auVar25;
  auVar2.piece<16,16>() = auVar25;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar25,auVar27);
  auVar35 = vectorPermute(auVar16,auVar14,_DAT_004df4b0);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar28,auVar27);
  auVar29 = vectorPermute(auVar17,auVar15,_DAT_004df4a0);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar22,auVar10,auVar27);
  auVar22 = vectorPermute(auVar19,auVar18,_DAT_004df4d0);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar31,auVar30,auVar27);
  auVar30 = vectorPermute(auVar18,auVar19,_DAT_004df4e0);
  auVar32 = vectorPermute(auVar17,auVar15,_DAT_004df500);
  auVar10 = vectorPermute(auVar16,auVar14,_DAT_004df510);
  auVar24 = vectorPermute(auVar16,auVar14,_DAT_004df4a0);
  auVar26 = vectorPermute(auVar15,auVar17,_DAT_004df4b0);
  auVar28 = vectorPermute(auVar15,auVar17,_DAT_004df490);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar1.piece<8,16>(),auVar2.piece<8,16>(),auVar23);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar10,auVar33);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar35,auVar25);
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar30,auVar34);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar27);
  auVar32 = vectorPermute(auVar16,auVar14,_DAT_004df500);
  auVar22 = vectorPermute(auVar16,auVar14,_DAT_004df4c0);
  auVar10 = vectorPermute(auVar16,auVar14,_DAT_004df520);
  auVar29 = vectorPermute(auVar18,auVar19,_DAT_004df540);
  auVar26 = vectorMergeHighWord(auVar33,auVar31);
  auVar14 = vectorPermute(auVar23,auVar25,_DAT_004df550);
  auVar16 = vectorPermute(auVar23,auVar25,_DAT_004df560);
  auVar34 = vectorPermute(auVar33,auVar31,_DAT_004df570);
  auVar24 = vectorPermute(auVar18,auVar19,_DAT_004df530);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar26,auVar27);
  auVar26 = vectorPermute(auVar15,auVar17,_DAT_004df510);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar22,auVar30);
  auVar22 = vectorPermute(auVar15,auVar17,_DAT_004df4f0);
  auVar17 = vectorPermute(auVar20,auVar21,_DAT_004df540);
  auVar3.piece<0,16>() = auVar29;
  auVar3.piece<16,16>() = auVar29;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar24,auVar33,auVar27);
  auVar15 = vectorMultiplyAddFloatingPoint(auVar32,auVar26,auVar27);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar3.piece<4,16>(),auVar31,auVar27);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar16,auVar34,auVar14);
  auVar16 = vectorPermute(auVar20,auVar21,_DAT_004df530);
  auVar4.piece<0,16>() = auVar24;
  auVar4.piece<16,16>() = auVar24;
  auVar26 = vectorPermute(auVar19,auVar18,_DAT_004df530);
  auVar5.piece<0,16>() = auVar17;
  auVar5.piece<16,16>() = auVar17;
  auVar19 = vectorPermute(auVar19,auVar18,_DAT_004df540);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar22,auVar10,auVar15);
  auVar6.piece<0,16>() = auVar16;
  auVar6.piece<16,16>() = auVar16;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar16,auVar23,auVar27);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar5.piece<4,16>(),auVar25,auVar27);
  auVar16 = vectorPermute(auVar21,auVar20,_DAT_004df530);
  auVar20 = vectorPermute(auVar21,auVar20,_DAT_004df540);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar33,auVar32);
  auVar10 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar22 = vectorSubtractFloatingPoint
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar4.piece<4,16>(),auVar31,auVar30);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar6.piece<4,16>(),auVar25,auVar18);
  auVar10 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar23,auVar24);
  auVar18 = loadVectorLeftIndexed(0xf0,0x4df490);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar19,auVar28,auVar21);
  auVar23 = vectorSubtractFloatingPoint
                      (auVar22,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar28,auVar33);
  auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar15,auVar30);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar20,auVar15,auVar10);
  auVar10 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = ZEXT416(2);
  auVar24 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar10 = vectorReciprocalEstimateFloatingPoint(auVar23);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar10,auVar30);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar23,auVar10,auVar10);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar17,auVar10,auVar27);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar10,auVar27);
  auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar10,auVar27);
  auVar10 = vectorMultiplyAddFloatingPoint(auVar22,auVar10,auVar27);
  iVar7 = (int)param_1;
  *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0) = auVar14;
  *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0) = auVar10;
  auVar10 = loadVectorLeftIndexed(0x124,0x4df490);
  auVar22 = loadVectorLeftIndexed(0xf4,0x4df490);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = loadVectorLeftIndexed(0x128,0x4df490);
  auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = vectorConvertToSignedFixedPointWordSaturate
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0);
  auVar10 = loadVectorLeftIndexed(300,0x4df490);
  auVar23 = loadVectorLeftIndexed(0x130,0x4df490);
  auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = vectorConvertFromSignedFixedPointWord(auVar19,0);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar22 = loadVectorLeftIndexed(0x134,0x4df490);
  auVar14 = loadVectorLeftIndexed(0x138,0x4df490);
  auVar25 = loadVectorLeftIndexed(0x13c,0x4df490);
  auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar16,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar15
                      );
  auVar10 = loadVectorLeftIndexed(0x140,0x4df490);
  auVar16 = loadVectorLeftIndexed(0x144,0x4df490);
  auVar15 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = ZEXT416(3);
  auVar17 = loadVectorLeftIndexed(0x120,0x4df490);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar19 = vectorLogicalAnd(auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
  auVar10 = ZEXT416(1);
  auVar21 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar20,auVar20,auVar27);
  auVar10.piece<0,4>() = auVar21.piece<0,4>() + auVar19.piece<0,4>();
  auVar10.piece<8,8>() = auVar18.piece<8,8>();
  auVar10.piece<4,4>() = auVar21.piece<4,4>() + auVar19.piece<4,4>();
  auVar17.piece<0,8>() = auVar10.piece<0,8>();
  auVar17.piece<8,4>() = auVar21.piece<8,4>() + auVar19.piece<8,4>();
  auVar17.piece<12,4>() = auVar21.piece<12,4>() + auVar19.piece<12,4>();
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar31,
                       auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar31,
                       auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar20,auVar27);
  auVar25 = vectorLogicalAnd(auVar17,auVar21);
  auVar14 = vectorLogicalAnd(auVar19,auVar21);
  auVar10 = vectorLogicalAnd(auVar19,auVar24);
  auVar19 = vectorCompareEqualToUnsignedWord(auVar25,auVar27);
  auVar18 = vectorCompareEqualToUnsignedWord(auVar14,auVar27);
  auVar25 = vectorCompareEqualToUnsignedWord(auVar10,auVar27);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (auVar22,auVar31,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar23,auVar31,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60
                      );
  auVar14 = vectorLogicalAnd(auVar17,auVar24);
  auVar17 = vectorCompareEqualToUnsignedWord(auVar14,auVar27);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar10,auVar31,auVar30);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar22,auVar33,auVar20);
  auVar14 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar10 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar14 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar15 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar19 = vectorConditionalSelect(auVar23,auVar16,auVar19);
  auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar18);
  auVar16 = vectorConditionalSelect(auVar28 ^ auVar19,auVar19,auVar17);
  auVar25 = vectorConditionalSelect(auVar28 ^ auVar23,auVar23,auVar25);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar27);
  auVar10 = auVar14 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar17 = vectorLogicalAnd(auVar16,_DAT_004df590);
  auVar14 = auVar14 & (GPiece<16>)0xffffffff;
  auVar23 = auVar15 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar19 = vectorConditionalSelect(auVar17,auVar25,_DAT_004df5a0);
  auVar17 = vectorLogicalAnd(auVar25 ^ auVar28,_DAT_004df590);
  auVar25 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar21 = vectorConditionalSelect(auVar17,auVar16,_DAT_004df5a0);
  auVar16 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar33 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar27);
  auVar22 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar23 = auVar16 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar18
                      );
  auVar10 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar15 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar27);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar15 = auVar15 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                       auVar28);
  auVar22 = auVar16 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar14 = auVar17 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5e0,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                       auVar27);
  auVar16 = auVar16 & (GPiece<16>)0xffffffff;
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar27
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar33
                      );
  auVar15 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                       auVar30);
  auVar10 = auVar17 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 & (GPiece<16>)0xffffffff;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar18
                      );
  auVar16 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar23);
  auVar22 = vectorAddFloatingPoint(auVar20,auVar28);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar31
                      );
  auVar10 = vectorMultiplyAddFloatingPoint
                      (_DAT_004df5f0,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar14);
  auVar14 = vectorAddFloatingPoint(auVar25,auVar15);
  auVar25 = vectorAddFloatingPoint(auVar18,auVar16);
  *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0) = auVar22;
  auVar10 = vectorAddFloatingPoint(auVar23,auVar10);
  *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0) = auVar14;
  auVar20 = *(undefined1 (*) [16])(iVar7 + 0x60U & 0xfffffff0);
  auVar21 = *(undefined1 (*) [16])(iVar7 + 0x70U & 0xfffffff0);
  *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0) = auVar10;
  auVar25 = *(undefined1 (*) [16])(iVar7 + 0xa0U & 0xfffffff0);
  auVar15 = *(undefined1 (*) [16])(iVar7 + 0xb0U & 0xfffffff0);
  auVar10 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar25 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar14 = auVar25 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar23 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar15 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar16 = *(undefined1 (*) [16])(iVar7 + 0xc0U & 0xfffffff0);
  auVar19 = *(undefined1 (*) [16])(iVar7 + 0x80U & 0xfffffff0);
  auVar17 = *(undefined1 (*) [16])(iVar7 + 0xd0U & 0xfffffff0);
  auVar30 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar22 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar16 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar23 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar25 & (GPiece<16>)0xffffffff;
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar27
                      );
  auVar10 = auVar15 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,auVar28
                      );
  auVar15 = auVar15 & (GPiece<16>)0xffffffff;
  auVar22 = auVar17 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar20,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar27
                      );
  auVar26 = *(undefined1 (*) [16])(iVar7 + 0x90U & 0xfffffff0);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar33
                      );
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar27
                      );
  auVar22 = auVar16 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar16 = auVar16 & (GPiece<16>)0xffffffff;
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar30
                      );
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar31
                      );
  auVar10 = auVar17 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 & (GPiece<16>)0xffffffff;
  auVar15 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar24
                      );
  auVar16 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auVar18
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,auVar23
                      );
  auVar10 = vectorAddFloatingPoint(auVar28,auVar14);
  auVar14 = vectorMultiplyAddFloatingPoint
                      (auVar26,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar25
                      );
  auVar23 = vectorAddFloatingPoint(auVar21,auVar20);
  auVar25 = vectorAddFloatingPoint(auVar15,auVar16);
  auVar22 = vectorAddFloatingPoint(auVar22,auVar14);
  *(undefined1 (*) [16])(iVar7 + 0xe0U & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(iVar7 + 0xf0U & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])(iVar7 + 0x100U & 0xfffffff0) = auVar25;
  *(undefined1 (*) [16])(iVar7 + 0x110U & 0xfffffff0) = auVar22;
  FUN_004feb98(param_1 + 800,param_1 + 0xe0);
  puVar8 = (undefined4 *)(iVar7 + 0x20U & 0xfffffff0);
  puVar8[3] = in_vr2_32_3;
  puVar8[2] = in_vr2_32_2;
  puVar8[1] = in_vr2_32_1;
  *puVar8 = in_vr2_32_0;
  puVar8 = (undefined4 *)(param_5 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x30U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  puVar8 = (undefined4 *)(param_5 + 0x10 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x40U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  puVar8 = (undefined4 *)(param_5 + 0x20 & 0xfffffff0);
  uVar13 = puVar8[2];
  uVar12 = puVar8[1];
  uVar11 = *puVar8;
  puVar9 = (undefined4 *)(iVar7 + 0x50U & 0xfffffff0);
  puVar9[3] = puVar8[3];
  puVar9[2] = uVar13;
  puVar9[1] = uVar12;
  *puVar9 = uVar11;
  return;
}


// 0x04dfc2c (0x4 bytes)
void FUN_004dfc2c(void)

{
  return;
}


// 0x04dfe70 (0xe04 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfe70(double param_1,int *param_2,int param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  GPiece<32> auVar3;
  GPiece<32> auVar4;
  GPiece<32> auVar5;
  GPiece<32> auVar6;
  GPiece<32> auVar7;
  GPiece<32> auVar8;
  RenderingStep *pRVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  RsxCmd *pRVar13;
  RsxCmd *pRVar14;
  longlong lVar15;
  GPiece<16> in_vs34;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auStack_380;
  GPiece<16> auStack_340;
  GPiece<16> auStack_330;
  GPiece<16> auStack_320;
  GPiece<16> auStack_310;
  GPiece<16> auStack_300;
  GPiece<16> auStack_2f0;
  GPiece<16> auStack_2e0;
  GPiece<16> auStack_2d0;
  GPiece<16> auStack_2c0;
  GPiece<16> auStack_2b0;
  GPiece<16> auStack_2a0;
  GPiece<16> auStack_290;
  GPiece<16> auStack_280;
  GPiece<16> auStack_270;
  GPiece<16> auStack_260;
  GPiece<16> auStack_250;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar10 = uVar12 - 0x50;
  puVar11 = (undefined4 *)lVar10;
  puVar11[3] = in_vr31_32_3;
  puVar11[2] = in_vr31_32_2;
  puVar11[1] = in_vr31_32_1;
  *puVar11 = in_vr31_32_0;
  (*(code *)**(undefined4 **)(*param_2 + 0x10))(param_2,ShadowPass,0x200,0x200);
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar9->command[1] = *(byte *)(param_2 + 0x6a5) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1a95) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1a96) + 0xfeed0000;
  pRVar9->command[2] = *(byte *)((int)param_2 + 0x1a97) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 3;
  pRVar14[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar9->command[1] = *(byte *)((int)param_2 + 0x1ab9) + 0xfeed0000;
  pRVar14 = pRVar9->command;
  uVar1 = *(ushort *)(param_2 + 0x6b1);
  pRVar9->command = pRVar14 + 2;
  uVar2 = *(ushort *)((int)param_2 + 0x1ac6);
  pRVar14[2] = (RsxCmd)&DAT_00180208;
  pRVar9->command[1] =
       (uint)*(byte *)((int)param_2 + 0x1a92) | (uint)*(byte *)(param_2 + 0x6ae) << 5 |
       (uint)*(byte *)(param_2 + 0x6a4) << 8 | (uint)*(byte *)((int)param_2 + 0x1a91) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar9->command[2] = param_2[0x6aa];
  pRVar9->command[3] = param_2[0x6a6];
  pRVar9->command[4] = param_2[0x6af];
  pRVar9->command[5] = param_2[0x6a7];
  pRVar9->command[6] = param_2[0x6ab];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 7;
  pRVar14[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar9->command[1] = param_2[0x6b0];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar9->command[1] = param_2[0x6ac];
  pRVar9->command[2] = param_2[0x6ad];
  pRVar9->command[3] = param_2[0x6a8];
  pRVar9->command[4] = param_2[0x6a9];
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 5;
  pRVar14[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar9->command[1] = (uint)*(byte *)((int)param_2 + 0x1a93);
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar9->command[1] =
       CONCAT22(*(undefined2 *)((int)param_2 + 0x1aca),*(undefined2 *)(param_2 + 0x6b2));
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar9->command[1] = CONCAT22(*(undefined2 *)(param_2 + 0x6b1),*(undefined2 *)(param_2 + 0x6b2));
  pRVar9->command[2] =
       CONCAT22(*(undefined2 *)((int)param_2 + 0x1ac6),*(undefined2 *)((int)param_2 + 0x1aca));
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 3;
  pRVar14[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar9->command[1] =
       (uint)*(ushort *)((int)param_2 + 0x1ac6) - (*(ushort *)((int)param_2 + 0x1ac6) >> 0xc & 1) |
       0x1000;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar9->command[1] = 0xffffff00;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar9->command[1] = 1;
  pRVar14 = pRVar9->command;
  pRVar9->command = pRVar14 + 2;
  pRVar14[2] = NV4097_NO_OPERATION_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar9->command[1] = 1;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar9->command[1] = 0;
  pRVar9->command = pRVar9->command + 2;
  pRVar9 = ShadowPass;
  *ShadowPass->command = NV4097_SET_ZCULL_EN_x1;
  pRVar9->command[1] = 3;
  pRVar9->command = pRVar9->command + 2;
  idol_draw::BindVertexProgram(param_2,ShadowPass,9);
  idol_draw::BindFragmentProgram(param_2,ShadowPass,0xf);
  auVar16 = loadVectorLeftIndexed(lVar10,param_4);
  auVar19 = ZEXT416(0);
  auVar46 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar17 = loadVectorLeftIndexed(8,param_4);
  auVar18 = loadVectorLeftIndexed(4,param_4);
  auVar19 = loadVectorLeftIndexed(0x20,0x4dfc30);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar47 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = vectorPermute(auVar18,auVar17,_DAT_004dfc30);
  auVar23 = vectorPermute(auVar16,auStack_380,_DAT_004dfc30);
  auVar19 = SPLAT(auVar19) ^ auVar47;
  auVar23 = vectorPermute(auVar21,auVar23,_DAT_004dfc40);
  auVar25 = vectorPermute(auVar18,auVar16,_DAT_004dfc80);
  auVar21 = vectorPermute(auVar19,auVar19,_DAT_004dfc80);
  auVar27 = vectorPermute(auVar17,auVar16,_DAT_004dfc30);
  auVar19 = vectorPermute(auVar19,auVar18,_DAT_004dfc80);
  auVar24 = vectorPermute(auVar16,auVar16,_DAT_004dfc80);
  auVar21 = vectorPermute(auVar25,auVar21,_DAT_004dfc40);
  auVar26 = vectorPermute(auVar18,auStack_380,_DAT_004dfc30);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar46);
  auVar26 = vectorPermute(auVar27,auVar26,_DAT_004dfc40);
  auVar21 = vectorPermute(auVar19,auVar24,_DAT_004dfc90);
  auVar19 = vectorPermute(auVar16,auVar18,_DAT_004dfc30);
  auVar16 = vectorPermute(auVar17,auStack_380,_DAT_004dfc30);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar26,auVar21,auVar25);
  auVar18 = vectorPermute(auVar19,auVar16,_DAT_004dfc40);
  auVar19 = loadVectorLeftIndexed(0x90,0x4dfc30);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar21,auVar21,auVar46);
  auVar16 = vectorPermute(auVar21,auVar21,_DAT_004dfca0);
  auVar17 = vectorPermute(auVar21,auVar21,_DAT_004dfcb0);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar25);
  auVar19 = loadVectorLeftIndexed(0x94,0x4dfc30);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar48 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar16);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar16);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar24,auVar46);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar16,auVar48);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar19);
  auVar17 = vectorCompareEqualToFloatingPoint(auVar16,auVar16);
  auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar19,auVar46);
  auVar16 = vectorPermute(auVar19,auVar19,_DAT_004dfc60);
  auVar19 = vectorPermute(auVar19,auVar19,_DAT_004dfc70);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar26,auVar46);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar23,auVar16);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar46);
  auVar16 = vectorPermute(auVar17,auVar17,_DAT_004dfca0);
  auVar21 = vectorPermute(auVar17,auVar17,_DAT_004dfcb0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar19);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar21,auVar19);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar16 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar19);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar16,auVar24,auVar46);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar19,auVar48);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar21,auVar16);
  auVar21 = vectorCompareEqualToFloatingPoint(auVar19,auVar19);
  auVar19 = vectorConditionalSelect(auVar16,auVar19,auVar21);
  vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar46);
  auVar25.piece<0,4>() = (float)param_1;
  auVar25.piece<4,4>() = (float)param_1;
  auVar25.piece<8,4>() = (float)param_1;
  auVar25.piece<12,4>() = (float)param_1;
  auVar19 = loadVectorLeftIndexed(0x98,0x4dfc30);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar25,auVar46);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar16,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar46
                      );
  vectorSubtractFloatingPoint(in_vs34,auVar19);
  FUN_005e9008(uVar12 - 0x280,uVar12 - 0x350,uVar12 - 0x360,uVar12 - 0x370);
  auVar45 = _DAT_004dfe10;
  auVar27 = _DAT_004dfe00;
  auVar26 = _DAT_004dfdf0;
  auVar24 = _DAT_004dfde0;
  auVar17 = vectorMergeHighWord(auStack_280,auStack_270);
  auVar18 = vectorMergeHighWord(auStack_260,auStack_250);
  auVar20 = vectorMergeLowWord(auStack_280,auStack_270);
  auVar22 = vectorMergeLowWord(auStack_260,auStack_250);
  auVar21 = vectorPermute(auVar20,auVar22,_DAT_004dfd10);
  auVar39 = vectorPermute(auVar17,auVar18,_DAT_004dfd10);
  auVar23 = vectorPermute(auVar18,auVar17,_DAT_004dfd20);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfcd0);
  auVar16 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd00);
  auVar29 = vectorPermute(auVar22,auVar20,_DAT_004dfd20);
  auVar49 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd30);
  auVar34 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd60);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar23,auVar46);
  auVar3.piece<0,16>() = auVar21;
  auVar3.piece<16,16>() = auVar21;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar21,auVar29,auVar46);
  auVar4.piece<0,16>() = auVar29;
  auVar4.piece<16,16>() = auVar29;
  auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar34,auVar46);
  auVar19 = vectorPermute(auVar18,auVar17,_DAT_004dfd10);
  auVar16 = vectorPermute(auVar17,auVar18,_DAT_004dfd20);
  auVar34 = vectorPermute(auStack_260,auStack_280,_DAT_004dfcf0);
  auVar29 = vectorPermute(auStack_250,auStack_270,_DAT_004dfce0);
  auVar35 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd50);
  auVar49 = vectorPermute(auStack_250,auStack_270,_DAT_004dfd40);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar19,auVar16,auVar40);
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar34,auVar23);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar3.piece<8,16>(),auVar4.piece<8,16>(),auVar39);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfce0);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar35,auVar50);
  auVar16 = vectorPermute(auStack_270,auStack_250,_DAT_004dfcf0);
  auVar29 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd00);
  auVar39 = vectorPermute(auStack_270,auStack_250,_DAT_004dfcd0);
  auVar41 = vectorPermute(auStack_270,auStack_250,_DAT_004dfd50);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar16 = vectorPermute(auStack_270,auStack_250,_DAT_004dfd30);
  auVar50 = vectorMergeHighWord(auVar40,auVar28);
  auVar51 = vectorPermute(auVar40,auVar28,_DAT_004dfdb0);
  auVar49 = vectorPermute(auVar23,auVar21,_DAT_004dfd90);
  auVar30 = vectorPermute(auVar23,auVar21,_DAT_004dfda0);
  auVar35 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd40);
  auVar19 = vectorPermute(auStack_260,auStack_280,_DAT_004dfd60);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar49,auVar50,auVar46);
  auVar43 = vectorPermute(auVar17,auVar18,_DAT_004dfd70);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar29,auVar34);
  auVar50 = vectorPermute(auVar18,auVar17,_DAT_004dfd70);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar41,auVar46);
  auVar5.piece<0,16>() = auVar43;
  auVar5.piece<16,16>() = auVar43;
  auVar38 = auVar47 ^ auVar25;
  auVar49 = vectorMultiplyAddFloatingPoint(auVar30,auVar51,auVar49);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar46);
  auVar51 = vectorPermute(auVar17,auVar18,_DAT_004dfd80);
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar19,auVar39);
  auVar19 = loadVectorLeftIndexed(0x1a0,0x4dfc30);
  auVar34 = vectorPermute(auVar18,auVar17,_DAT_004dfd80);
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar49 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar5.piece<4,16>(),auVar28,auVar35);
  auVar18 = auVar49 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar49 = vectorSubtractFloatingPoint
                      (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
  auVar16 = vectorPermute(auVar38,auStack_2e0,_DAT_004dfdc0);
  auVar6.piece<0,16>() = auVar51;
  auVar6.piece<16,16>() = auVar51;
  auVar19 = vectorPermute(auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auStack_2d0,
                          _DAT_004dfdc0);
  auVar43 = vectorPermute(auVar25,auStack_2c0,_DAT_004dfdc0);
  auVar30 = vectorPermute(auVar46,auStack_2b0,_DAT_004dfdc0);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar6.piece<4,16>(),auVar28,auVar46);
  auVar41 = vectorPermute(auVar20,auVar22,_DAT_004dfd80);
  auVar19 = vectorMergeHighWord(auVar16,auVar19);
  auVar16 = vectorPermute(auVar38,auStack_2a0,_DAT_004dfdc0);
  auVar17 = vectorPermute(auVar25,auStack_290,_DAT_004dfdc0);
  auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar29,auVar35);
  auVar35 = vectorPermute(auVar20,auVar22,_DAT_004dfd70);
  auVar49 = vectorSubtractFloatingPoint
                      (auVar49,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
  auVar18 = vectorMergeHighWord(auVar43,auVar30);
  auVar16 = vectorMergeHighWord(auVar19,auVar16);
  auVar7.piece<0,16>() = auVar41;
  auVar7.piece<16,16>() = auVar41;
  auVar8.piece<0,16>() = auVar35;
  auVar8.piece<16,16>() = auVar35;
  auVar19 = vectorMergeHighWord(auVar18,auVar17);
  auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar40,auVar28);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar23,auVar46);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar7.piece<4,16>(),auVar21,auVar46);
  auVar28 = vectorPermute(auVar22,auVar20,_DAT_004dfd70);
  auVar40 = vectorSubtractFloatingPoint(auVar19,auVar16);
  auVar20 = vectorPermute(auVar22,auVar20,_DAT_004dfd80);
  auVar17 = vectorAddFloatingPoint(auVar19,auVar16);
  auVar22 = vectorReciprocalEstimateFloatingPoint(auVar49);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar18);
  auVar18 = vectorNegativeMultiplySubtractFloatingPoint(auVar8.piece<4,16>(),auVar21,auVar35);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar23,auVar30);
  auVar16 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar22,auVar48);
  auVar34 = vectorReciprocalEstimateFloatingPoint(auVar40);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar39,auVar18);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar20,auVar39,auVar19);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar22,auVar22);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar34,auVar48);
  lVar15 = 8;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar50,auVar16,auVar46);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar29,auVar16,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar16,auVar46);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar23,auVar34,auVar34);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar46);
  auVar19 = auVar18 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar30 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar20 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar39 = vectorAddFloatingPoint(auVar29,auVar29);
  auVar16 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = auVar21 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar51 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar29 = vectorConditionalSelect(auVar29 ^ auVar47,auVar29,_DAT_004dfde0);
  auVar16 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar29 = vectorMultiplyAddFloatingPoint(auVar17,auVar29,auVar46);
  auVar16 = auVar23 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar36 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar16 = loadVectorLeftIndexed(0x1f0,0x4dfc30);
  auVar17 = loadVectorLeftIndexed(500,0x4dfc30);
  auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = vectorPermute(auVar25,auStack_320,_DAT_004dfdc0);
  auVar34 = vectorPermute(auVar38,auStack_340,_DAT_004dfdc0);
  auVar22 = vectorPermute(auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,auStack_330,
                          _DAT_004dfdc0);
  auVar16 = vectorPermute(auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auStack_310,
                          _DAT_004dfdc0);
  auVar17 = vectorMergeHighWord(auVar34,auVar22);
  auVar34 = vectorMergeHighWord(auVar49,auVar16);
  auVar40 = vectorPermute(auVar38,auStack_300,_DAT_004dfdc0);
  auVar16 = vectorPermute(auVar25,auStack_2f0,_DAT_004dfdc0);
  auVar22 = vectorLogicalAnd(auVar39,_DAT_004dfdf0);
  auVar49 = vectorLogicalAnd(auVar39,_DAT_004dfe00);
  auVar25 = vectorMergeHighWord(auVar17,auVar40);
  auVar34 = vectorMergeHighWord(auVar34,auVar16);
  auVar16 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar22,auVar43,auVar46);
  auVar16 = auVar18 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar40 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
  auVar44 = vectorMultiplyAddFloatingPoint
                      (auVar49,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar46
                      );
  auVar28 = vectorSubtractFloatingPoint(auVar34,auVar25);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar22,auVar17,auVar46);
  auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar40,auVar46);
  auVar19 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar19 = auVar21 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar41 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar34 = vectorAddFloatingPoint(auVar34,auVar25);
  auVar25 = vectorLogicalAnd(auVar39,_DAT_004dfde0);
  auVar39 = vectorConditionalSelect(auVar29,auVar48,_DAT_004dfe10);
  auVar52 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar46);
  auVar18 = auVar18 & (GPiece<16>)0xffffffff;
  auVar29 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar22,auVar32,auVar46);
  auVar21 = auVar21 & (GPiece<16>)0xffffffff;
  auVar31 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar33 = vectorMultiplyAddFloatingPoint(auVar49,auVar41,auVar46);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar49,auVar36,auVar46);
  auVar38 = vectorMultiplyAddFloatingPoint(auVar25,auVar51,auVar38);
  auVar37 = vectorReciprocalEstimateFloatingPoint(auVar28);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar30,auVar35);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar29,auVar50);
  auVar19 = auVar23 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar50 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar23 = auVar23 & (GPiece<16>)0xffffffff;
  auVar42 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar22 = vectorAddFloatingPoint(auVar22,auVar49);
  auVar19 = auVar20 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar35 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar37,auVar48);
  auVar28 = vectorMultiplyAddFloatingPoint(auVar25,auVar35,auVar52);
  auVar19 = auVar20 & (GPiece<16>)0xffffffff;
  auVar52 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  auVar18 = vectorMultiplyAddFloatingPoint(auVar25,auVar50,auVar18);
  auVar19 = auVar20 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar39,auVar31,auVar33);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar39,auVar52,auVar44);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar39,auVar42,auVar21);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar49,auVar37,auVar37);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x48) & 0xfffffff0) = auVar22;
  auVar23 = vectorAddFloatingPoint(auVar38,auVar23);
  auVar39 = vectorAddFloatingPoint(auVar28,auVar20);
  auVar21 = vectorAddFloatingPoint(auVar18,auVar21);
  auVar20 = vectorAddFloatingPoint(auVar25,auVar25);
  auVar18 = vectorConditionalSelect(auVar25 ^ auVar47,auVar25,auVar24);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar34,auVar18,auVar46);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0) = auVar39;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0) = auVar23;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0) = auVar21;
  pRVar9 = ShadowPass;
  auVar21 = *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x48) & 0xfffffff0);
  auVar18 = vectorConditionalSelect(auVar18,auVar48,auVar45);
  auVar26 = vectorLogicalAnd(auVar20,auVar26);
  auVar27 = vectorLogicalAnd(auVar20,auVar27);
  auVar45 = vectorLogicalAnd(auVar20,auVar24);
  auVar25 = vectorMergeHighWord(auVar21,*(undefined1 (*) [16])
                                         ((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0));
  auVar24 = vectorMergeHighWord(*(undefined1 (*) [16])
                                 ((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0),
                                *(undefined1 (*) [16])
                                 ((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0));
  auVar21 = vectorMergeLowWord(auVar21,*(undefined1 (*) [16])
                                        ((uint)(param_2 + param_3 * 0x10 + 0x50) & 0xfffffff0));
  auVar23 = vectorMergeLowWord(*(undefined1 (*) [16])
                                ((uint)(param_2 + param_3 * 0x10 + 0x4c) & 0xfffffff0),
                               *(undefined1 (*) [16])
                                ((uint)(param_2 + param_3 * 0x10 + 0x54) & 0xfffffff0));
  vectorMergeHighWord(auVar25,auVar24);
  vectorMergeLowWord(auVar25,auVar24);
  vectorMergeHighWord(auVar21,auVar23);
  vectorMergeLowWord(auVar21,auVar23);
  lVar10 = uVar12 - 0x240;
  *ShadowPass->command = 0x441efc;
  pRVar9->command[1] = 0;
  pRVar14 = pRVar9->command + 2;
  pRVar9->command = pRVar14;
  do {
    pRVar13 = (RsxCmd *)lVar10;
    *pRVar14 = *pRVar13;
    pRVar14 = pRVar9->command;
    pRVar9->command = pRVar14 + 1;
    lVar10 = lVar10 + 8;
    pRVar14[1] = pRVar13[1];
    pRVar14 = pRVar9->command + 1;
    pRVar9->command = pRVar14;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  auVar21 = ZEXT416(0);
  auVar39 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = vectorMultiplyAddFloatingPoint(auVar27,auVar40,auVar39);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar26,auVar17,auVar39);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar16,auVar39);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar43,auVar39);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar41,auVar39);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar29,auVar21);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar45,auVar30,auVar17);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auVar27,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,auVar39
                      );
  auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar32,auVar39);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar36,auVar39);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar45,auVar35,auVar23);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar45,auVar51,auVar25);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar18,auVar31,auVar24);
  auVar17 = vectorAddFloatingPoint(auVar17,auVar16);
  auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar52,auVar19);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar45,auVar50,auVar26);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar42,auVar29);
  auVar26 = vectorAddFloatingPoint(auVar23,auVar25);
  auVar19 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = vectorAddFloatingPoint(auVar21,auVar16);
  auVar16 = auVar17 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar27 = vectorAddFloatingPoint(auVar27,auVar18);
  auVar45 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar39);
  auVar19 = auVar17 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 & (GPiece<16>)0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar16 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar26 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar21 = auVar26 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar23 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar24 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar22 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar16 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar39);
  auVar34 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar45);
  auVar19 = auVar24 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar18 = auVar27 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                       auVar39);
  auVar25 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                       auVar39);
  auVar24 = auVar24 & (GPiece<16>)0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe30,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar39);
  auVar26 = auVar26 & (GPiece<16>)0xffffffff;
  auVar45 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar20);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe40,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar39);
  auVar16 = auVar27 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar27 = auVar27 & (GPiece<16>)0xffffffff;
  auVar20 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar22);
  auVar39 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                       auVar49);
  auVar26 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar23);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                       auVar25);
  auVar21 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe50,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                       auVar29);
  auVar18 = vectorAddFloatingPoint(auVar34,auVar45);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (_DAT_004dfe60,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                       auVar17);
  auVar16 = vectorAddFloatingPoint(auVar26,auVar23);
  auVar17 = vectorAddFloatingPoint(auVar20,auVar39);
  auVar19 = vectorAddFloatingPoint(auVar21,auVar19);
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x88) & 0xfffffff0) = auVar18;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x8c) & 0xfffffff0) = auVar16;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x90) & 0xfffffff0) = auVar17;
  *(undefined1 (*) [16])((uint)(param_2 + param_3 * 0x10 + 0x94) & 0xfffffff0) = auVar19;
  return;
}


// 0x04e0d50 (0xc20 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0d50(double param_1,double param_2,int param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  GPiece<16> in_vs34;
  GPiece<16> auVar17;
  GPiece<16> in_vs35;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auStack00000060;
  GPiece<16> auStack_180;
  GPiece<16> auStack_170;
  GPiece<16> auStack_160;
  undefined4 local_150 [16];
  GPiece<16> local_110;
  GPiece<16> auStack_100;
  GPiece<16> auStack_f0;
  GPiece<16> auStack_e0;
  
  auVar18 = ZEXT416(0);
  auVar21.piece<0,4>() = (float)param_2;
  auVar21.piece<4,4>() = (float)param_2;
  auVar21.piece<8,4>() = (float)param_2;
  auVar21.piece<12,4>() = (float)param_2;
  iVar9 = *(int *)((int)&DepthPass + (int)(param_4 << 2));
  auVar22.piece<0,4>() = (float)param_1;
  auVar22.piece<4,4>() = (float)param_1;
  auVar22.piece<8,4>() = (float)param_1;
  auVar22.piece<12,4>() = (float)param_1;
  auVar18 = vectorMultiplyAddFloatingPoint
                      (in_vs35,auVar22,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60
                      );
  puVar14 = local_150;
  lVar16 = 8;
  auVar18 = vectorSubtractFloatingPoint(in_vs34,auVar18);
  auVar17 = *(undefined1 (*) [16])(param_3 + 0xe0U & 0xfffffff0);
  auVar19 = *(undefined1 (*) [16])(param_3 + 0x100U & 0xfffffff0);
  auVar20 = *(undefined1 (*) [16])(param_3 + 0xf0U & 0xfffffff0);
  auVar23 = vectorMergeHighWord(auVar17,auVar19);
  auVar24 = *(undefined1 (*) [16])(param_3 + 0x110U & 0xfffffff0);
  auVar17 = vectorMergeLowWord(auVar17,auVar19);
  auVar19 = vectorMergeHighWord(auVar20,auVar24);
  auVar20 = vectorMergeLowWord(auVar20,auVar24);
  vectorMergeHighWord(auVar23,auVar19);
  vectorMergeLowWord(auVar23,auVar19);
  vectorMergeHighWord(auVar17,auVar20);
  vectorMergeLowWord(auVar17,auVar20);
  **(undefined4 **)(iVar9 + 8) = 0x441efc;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  puVar15 = (undefined4 *)(*(int *)(iVar9 + 8) + 8);
  *(undefined4 **)(iVar9 + 8) = puVar15;
  do {
    *puVar15 = *puVar14;
    iVar7 = *(int *)(iVar9 + 8);
    *(int *)(iVar9 + 8) = iVar7 + 4;
    puVar15 = puVar14 + 1;
    puVar14 = puVar14 + 2;
    *(undefined4 *)(iVar7 + 4) = *puVar15;
    puVar15 = (undefined4 *)(*(int *)(iVar9 + 8) + 4);
    *(undefined4 **)(iVar9 + 8) = puVar15;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  auVar17 = ZEXT416(0);
  auVar33 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar19 = loadVectorLeftIndexed(0x120,0x4e0c80);
  auVar17 = in_vs35 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = SPLAT(auVar17) ^
            SPLAT(auVar19);
  auVar20 = vectorPermute(in_vs35,in_vs35,_DAT_004e0c90);
  auVar19 = vectorPermute(in_vs35,auVar17,_DAT_004e0cb0);
  auVar24 = vectorPermute(in_vs35,in_vs35,_DAT_004e0ca0);
  auVar17 = vectorPermute(auVar17,in_vs35,_DAT_004e0cc0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar20,auVar19,auVar33);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar17,auVar19);
  auVar30 = loadVectorLeftIndexed(0x70,0x4e0c80);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar33);
  auVar23 = vectorPermute(auVar19,auVar19,_DAT_004e0cd0);
  auVar29 = vectorPermute(auVar19,auVar19,_DAT_004e0ce0);
  puVar15 = (undefined4 *)local_110;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar17);
  auVar17 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = loadVectorLeftIndexed(0x74,0x4e0c80);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar23);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar23 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar17);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar23,auVar17,auVar33);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar23,auVar30,auVar33);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar23,auVar17,auVar32);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar29,auVar23);
  auVar29 = vectorCompareEqualToFloatingPoint(auVar17,auVar17);
  auVar17 = vectorConditionalSelect(auVar23,auVar17,auVar29);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar19,auVar17,auVar33);
  auVar19 = vectorPermute(auVar17,auVar17,_DAT_004e0c90);
  auVar17 = vectorPermute(auVar17,auVar17,_DAT_004e0ca0);
  auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar24,auVar33);
  auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar20,auVar19);
  auVar20 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar33);
  auVar17 = vectorPermute(auVar19,auVar19,_DAT_004e0cd0);
  auVar23 = vectorPermute(auVar19,auVar19,_DAT_004e0ce0);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar20);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar23,auVar23,auVar17);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar20 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar17);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar17,auVar33);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar20,auVar30,auVar33);
  auVar17 = vectorNegativeMultiplySubtractFloatingPoint(auVar20,auVar17,auVar32);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar23,auVar20);
  auVar23 = vectorCompareEqualToFloatingPoint(auVar17,auVar17);
  auVar17 = vectorConditionalSelect(auVar20,auVar17,auVar23);
  vectorMultiplyAddFloatingPoint(auVar19,auVar17,auVar33);
  auStack00000060 = in_vs35;
  FUN_005e9008(puVar15,auStack_170,&stack0x00000040,auStack_160);
  auVar17 = ZEXT416(0xffffffff);
  auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = auStack00000060 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar19 = vectorAddFloatingPoint
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar32);
  auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar18 = auVar18 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar17 = loadVectorLeftIndexed(0x78,0x4e0c80);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = vectorSubtractFloatingPoint
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,auVar21);
  auVar18 = vectorMultiplyAddFloatingPoint(auVar22,auVar19,auVar20);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar21
                      );
  auVar30 = vectorMultiplyAddFloatingPoint(local_110,auVar33,auVar33);
  auVar18 = vectorPermute(auVar22,auVar18,_DAT_004e0d00);
  auVar18 = vectorPermute(auVar18,auStack_180,_DAT_004e0d10);
  auVar20 = vectorLogicalAnd(auVar18,_DAT_004e0d20);
  auVar23 = vectorLogicalAnd(auVar18,_DAT_004e0d30);
  auVar24 = vectorLogicalAnd(auVar18,_DAT_004e0d40);
  auVar18 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar20 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar23 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar19 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar33);
  auVar18 = auVar24 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar25 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar33);
  auVar26 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar33);
  auVar21 = auVar20 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                       auVar33);
  auVar20 = auVar20 & (GPiece<16>)0xffffffff;
  auVar19 = vectorMultiplyAddFloatingPoint
                      (local_110,auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,
                       auVar33);
  auVar22 = auVar24 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auStack_100,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar33);
  auVar18 = auVar23 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar28 = vectorMultiplyAddFloatingPoint(auStack_100,auVar33,auVar33);
  auVar23 = auVar23 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 & (GPiece<16>)0xffffffff;
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                       auVar29);
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                       auVar25);
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                       auVar26);
  auVar20 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                       auVar27);
  auVar19 = vectorMultiplyAddFloatingPoint
                      (auStack_f0,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                       auVar19);
  auVar18 = vectorMultiplyAddFloatingPoint
                      (auStack_e0,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                       auVar31);
  auVar23 = vectorMultiplyAddFloatingPoint(auStack_f0,auVar33,auVar30);
  auVar24 = vectorMultiplyAddFloatingPoint(auStack_e0,auVar32,auVar28);
  lVar16 = 8;
  auVar21 = vectorAddFloatingPoint(auVar17,auVar21);
  auVar22 = vectorAddFloatingPoint(auVar29,auVar20);
  auVar18 = vectorAddFloatingPoint(auVar19,auVar18);
  auVar17 = vectorAddFloatingPoint(auVar23,auVar24);
  auVar19 = vectorMergeHighWord(auVar21,auVar18);
  auVar18 = vectorMergeLowWord(auVar21,auVar18);
  auVar20 = vectorMergeHighWord(auVar22,auVar17);
  auVar21 = vectorMergeLowWord(auVar22,auVar17);
  vectorMergeHighWord(auVar19,auVar20);
  vectorMergeLowWord(auVar19,auVar20);
  vectorMergeHighWord(auVar18,auVar21);
  vectorMergeLowWord(auVar18,auVar21);
  **(undefined4 **)(iVar9 + 8) = &DAT_00041834;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x901;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041830;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x404;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_0004183c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 1;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40324;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40328;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 1;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc0330;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x207;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0xff;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x4032c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc033c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x1e00;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x1e01;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x441efc;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 4;
  puVar14 = (undefined4 *)(*(int *)(iVar9 + 8) + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14;
  do {
    *puVar14 = *puVar15;
    iVar7 = *(int *)(iVar9 + 8);
    *(int *)(iVar9 + 8) = iVar7 + 4;
    puVar14 = puVar15 + 1;
    puVar15 = puVar15 + 2;
    *(undefined4 *)(iVar7 + 4) = *puVar14;
    iVar7 = *(int *)(iVar9 + 8);
    puVar14 = (undefined4 *)(iVar7 + 4);
    *(undefined4 **)(iVar9 + 8) = puVar14;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *(undefined4 *)(iVar7 + 4) = 0x41740;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xc32;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar10 = *(uint *)(param_3 + 0x1859c);
  *(undefined4 *)(iVar7 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar11 = *(undefined4 *)(param_3 + 0x185a0);
  *(undefined4 *)(iVar7 + 8) = 0x8181c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x11;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x14) = 8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x1c;
  *(undefined4 *)(iVar7 + 0x18) = 0x40041824;
  puVar14 = *(undefined4 **)(iVar9 + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14 + 1;
  *puVar14 = 0x17000000;
  **(undefined4 **)(iVar9 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0xc0330;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x202;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0xff;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0xff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x10;
  *(undefined4 *)(iVar7 + 0x10) = 0x40324;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x1000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a0c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a08;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x40030404;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a14;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01012000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a1c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0xffffffff;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a2c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a28;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x40030505;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a34;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01012000;
  *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 8;
  uVar12 = (ulonglong)*(byte *)(param_3 + 0x1b08) & 0xffffffffffffffbf;
  bVar1 = *(byte *)(param_3 + 0x1b16);
  uVar11 = *(undefined4 *)(param_3 + 0x1b1c);
  *(char *)(param_3 + 0x1b08) = (char)uVar12;
  *(byte *)(param_3 + 0x220c) = *(byte *)(param_3 + 0x220c) & 0xbf;
  bVar2 = *(byte *)(param_3 + 0x1b09);
  bVar3 = *(byte *)(param_3 + 0x1b0b);
  bVar4 = *(byte *)(param_3 + 0x1b0a);
  uVar13 = *(undefined4 *)(param_3 + 0x1b10);
  uVar8 = *(undefined4 *)(param_3 + 0x1b0c);
  uVar10 = *(uint *)(param_3 + 0x1b18);
  uVar6 = *(ushort *)(param_3 + 0x1b14);
  **(undefined4 **)(iVar9 + 8) = &DAT_00081a00;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(uint *)(*(int *)(iVar9 + 8) + 8) =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)(uVar12 << 8) |
       (uint)bVar3 << 2 | (uint)bVar4 << 4;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x41a18;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar13;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041840;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | (uint)uVar6 << 0x14;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a10;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar8;
  iVar7 = *(int *)(iVar9 + 8);
  uVar11 = *(undefined4 *)(param_3 + 0x2220);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  bVar1 = *(byte *)(param_3 + 0x221a);
  bVar2 = *(byte *)(param_3 + 0x220d);
  bVar3 = *(byte *)(param_3 + 0x220c);
  bVar4 = *(byte *)(param_3 + 0x220f);
  bVar5 = *(byte *)(param_3 + 0x220e);
  uVar13 = *(undefined4 *)(param_3 + 0x2214);
  uVar8 = *(undefined4 *)(param_3 + 0x2210);
  uVar10 = *(uint *)(param_3 + 0x221c);
  uVar6 = *(ushort *)(param_3 + 0x2218);
  *(undefined4 *)(iVar7 + 8) = 0x81a20;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(uint *)(*(int *)(iVar9 + 8) + 8) =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x41a38;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar13;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_00041844;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | (uint)uVar6 << 0x14;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41a30;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40320;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x80068006;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x80314;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x10001;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x10001;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 **)(iVar7 + 0xc) = &DAT_00041830;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0x405;
  iVar7 = *(int *)(iVar9 + 8);
  uVar10 = *(uint *)(param_3 + 0x1859c);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar9 + 8) + 4) = uVar10 | 0x80000000;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  uVar11 = *(undefined4 *)(param_3 + 0x185a0);
  *(undefined4 *)(iVar7 + 8) = 0x8181c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = uVar11;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0x11;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0xc;
  *(undefined4 *)(iVar7 + 0xc) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x10) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 0x14) = 8;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 0x1c;
  *(undefined4 *)(iVar7 + 0x18) = 0x40041824;
  puVar14 = *(undefined4 **)(iVar9 + 8);
  *(undefined4 **)(iVar9 + 8) = puVar14 + 1;
  *puVar14 = 0x17000000;
  **(undefined4 **)(iVar9 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40328;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 **)(iVar7 + 8) = &DAT_0004183c;
  *(undefined4 *)(*(int *)(iVar9 + 8) + 4) = 0;
  iVar7 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar7 + 8;
  *(undefined4 *)(iVar7 + 8) = 0x40324;
  *(undefined **)(*(int *)(iVar9 + 8) + 4) = &DAT_01010101;
  *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 8;
  return;
}


// 0x04e1970 (0xf0 bytes)
void FUN_004e1970(int param_1,longlong param_2,undefined4 param_3,undefined4 param_4,void *param_5,
                 longlong param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(uint *)(param_1 + 0x1a6c) & 1) == 0) {
    iVar3 = (int)(param_2 << 2);
    piVar4 = (int *)(param_1 + iVar3 + 0x184e0);
    iVar2 = param_1 + (int)(param_2 << 0xd) + *piVar4 * 0x20;
    *(undefined4 *)(iVar2 + 0x24f8) = param_3;
    *(undefined4 *)(iVar2 + 0x24f0) = param_4;
    *(char *)(iVar2 + 0x24fc) = (char)param_6;
    memcpy((void *)(iVar2 + 0x24e0),param_5,(size_t)(param_6 << 2));
    piVar1 = *(int **)((int)&DepthPass + iVar3);
    *(int *)(iVar2 + 0x24f4) = piVar1[2] - *piVar1;
    *piVar4 = *piVar4 + 1;
  }
  return;
}


// 0x04e1b80 (0xca8 bytes)
// strings: 00659358: 'ViewToShadow0' | 00659368: 'ViewToShadow1' | 00659378: 'ViewToShadow2' | 00659388: 'ViewToShadow3' | 00659398: 'Stereo3dParams'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1b80(undefined8 param_1,undefined8 param_2,int *param_3,int param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  RsxCmd *pRVar5;
  GPiece<32> auVar6;
  GPiece<32> auVar7;
  GPiece<32> auVar8;
  GPiece<32> auVar9;
  GPiece<32> auVar10;
  GPiece<32> auVar11;
  RenderingStep *pRVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auStack_180;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar13 = uVar15 - 0x70;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  (*(code *)**(undefined4 **)(*param_3 + 0x10))(param_3,ShadowPass,param_3[1],param_3[2]);
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar12->command[1] = *(byte *)(param_3 + 0x84e) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x2139) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x213a) + 0xfeed0000;
  pRVar12->command[2] = *(byte *)((int)param_3 + 0x213b) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar12->command[1] = *(byte *)((int)param_3 + 0x215d) + 0xfeed0000;
  pRVar5 = pRVar12->command;
  uVar3 = *(ushort *)(param_3 + 0x85a);
  pRVar12->command = pRVar5 + 2;
  uVar4 = *(ushort *)((int)param_3 + 0x216a);
  pRVar5[2] = (RsxCmd)&DAT_00180208;
  pRVar12->command[1] =
       (uint)*(byte *)((int)param_3 + 0x2136) | (uint)*(byte *)(param_3 + 0x857) << 5 |
       (uint)*(byte *)(param_3 + 0x84d) << 8 | (uint)*(byte *)((int)param_3 + 0x2135) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar3) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar4) & 0xffffffff) << 0x18);
  pRVar12->command[2] = param_3[0x853];
  pRVar12->command[3] = param_3[0x84f];
  pRVar12->command[4] = param_3[0x858];
  pRVar12->command[5] = param_3[0x850];
  pRVar12->command[6] = param_3[0x854];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 7;
  pRVar5[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar12->command[1] = param_3[0x859];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar12->command[1] = param_3[0x855];
  pRVar12->command[2] = param_3[0x856];
  pRVar12->command[3] = param_3[0x851];
  pRVar12->command[4] = param_3[0x852];
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 5;
  pRVar5[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar12->command[1] = (uint)*(byte *)((int)param_3 + 0x2137);
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar12->command[1] =
       CONCAT22(*(undefined2 *)((int)param_3 + 0x216e),*(undefined2 *)(param_3 + 0x85b));
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 2;
  pRVar5[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar12->command[1] = CONCAT22(*(undefined2 *)(param_3 + 0x85a),*(undefined2 *)(param_3 + 0x85b));
  pRVar12->command[2] =
       CONCAT22(*(undefined2 *)((int)param_3 + 0x216a),*(undefined2 *)((int)param_3 + 0x216e));
  pRVar5 = pRVar12->command;
  pRVar12->command = pRVar5 + 3;
  pRVar5[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar12->command[1] =
       (uint)*(ushort *)((int)param_3 + 0x216a) - (*(ushort *)((int)param_3 + 0x216a) >> 0xc & 1) |
       0x1000;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  auVar29 = ZEXT416(0);
  auVar37 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  *ShadowPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ShadowPass;
  *ShadowPass->command = NV4097_SET_COLOR_MASK_x1;
  pRVar12->command[1] = 0x10101;
  auVar21 = *(undefined1 (*) [16])((uint)(param_3 + 0x28) & 0xfffffff0);
  auVar22 = *(undefined1 (*) [16])((uint)(param_3 + 0x2c) & 0xfffffff0);
  auVar23 = *(undefined1 (*) [16])((uint)(param_3 + 0x30) & 0xfffffff0);
  auVar24 = *(undefined1 (*) [16])((uint)(param_3 + 0x34) & 0xfffffff0);
  pRVar12->command = pRVar12->command + 2;
  auVar27 = vectorMergeLowWord(auVar21,auVar22);
  auVar28 = vectorMergeLowWord(auVar23,auVar24);
  auVar25 = vectorMergeHighWord(auVar21,auVar22);
  auVar26 = vectorMergeHighWord(auVar23,auVar24);
  auVar29 = vectorPermute(auVar23,auVar21,_DAT_004e1a60);
  auVar31 = vectorPermute(auVar24,auVar22,_DAT_004e1a90);
  auVar33 = vectorPermute(auVar27,auVar28,_DAT_004e1aa0);
  auVar34 = vectorPermute(auVar28,auVar27,_DAT_004e1ab0);
  auVar41 = vectorPermute(auVar23,auVar21,_DAT_004e1ac0);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar37);
  auVar29 = vectorPermute(auVar24,auVar22,_DAT_004e1af0);
  auVar38 = vectorPermute(auVar25,auVar26,_DAT_004e1aa0);
  auVar31 = vectorPermute(auVar26,auVar25,_DAT_004e1ab0);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar37);
  auVar6.piece<0,16>() = auVar34;
  auVar6.piece<16,16>() = auVar34;
  auVar35 = vectorMultiplyAddFloatingPoint(auVar41,auVar29,auVar37);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar38,auVar31,auVar37);
  auVar7.piece<0,16>() = auVar33;
  auVar7.piece<16,16>() = auVar33;
  auVar33 = vectorPermute(auVar23,auVar21,_DAT_004e1a80);
  auVar38 = vectorPermute(auVar24,auVar22,_DAT_004e1a70);
  auVar29 = vectorPermute(auVar26,auVar25,_DAT_004e1aa0);
  auVar31 = vectorPermute(auVar25,auVar26,_DAT_004e1ab0);
  auVar34 = vectorPermute(auVar23,auVar21,_DAT_004e1ae0);
  auVar39 = vectorPermute(auVar24,auVar22,_DAT_004e1ad0);
  auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar33,auVar30);
  auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar7.piece<8,16>(),auVar6.piece<8,16>(),auVar32);
  auVar32 = vectorPermute(auVar23,auVar21,_DAT_004e1a70);
  auVar36 = vectorPermute(auVar22,auVar24,_DAT_004e1a80);
  auVar33 = vectorPermute(auVar22,auVar24,_DAT_004e1a60);
  auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar34,auVar35);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar42);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar36,auVar37);
  auVar43 = vectorPermute(auVar23,auVar21,_DAT_004e1ad0);
  auVar34 = vectorPermute(auVar23,auVar21,_DAT_004e1a90);
  auVar31 = vectorPermute(auVar23,auVar21,_DAT_004e1af0);
  auVar21 = vectorMergeHighWord(auVar38,auVar41);
  auVar39 = vectorPermute(auVar38,auVar41,_DAT_004e1b40);
  auVar29 = vectorPermute(auVar35,auVar30,_DAT_004e1b20);
  auVar23 = vectorPermute(auVar35,auVar30,_DAT_004e1b30);
  auVar42 = vectorPermute(auVar25,auVar26,_DAT_004e1b10);
  auVar32 = vectorPermute(auVar27,auVar28,_DAT_004e1b10);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar21,auVar37);
  auVar40 = vectorPermute(auVar22,auVar24,_DAT_004e1ae0);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar34,auVar36);
  auVar21 = vectorPermute(auVar22,auVar24,_DAT_004e1ac0);
  auVar8.piece<0,16>() = auVar42;
  auVar8.piece<16,16>() = auVar42;
  auVar22 = vectorPermute(auVar25,auVar26,_DAT_004e1b00);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar43,auVar40,auVar37);
  auVar40 = vectorPermute(auVar26,auVar25,_DAT_004e1b00);
  auVar26 = vectorPermute(auVar26,auVar25,_DAT_004e1b10);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar22,auVar38,auVar37);
  auVar9.piece<0,16>() = auVar22;
  auVar9.piece<16,16>() = auVar22;
  auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar39,auVar29);
  auVar29 = vectorPermute(auVar27,auVar28,_DAT_004e1b00);
  auVar10.piece<0,16>() = auVar32;
  auVar10.piece<16,16>() = auVar32;
  auVar39 = vectorMultiplyAddFloatingPoint(auVar8.piece<4,16>(),auVar41,auVar37);
  auVar11.piece<0,16>() = auVar29;
  auVar11.piece<16,16>() = auVar29;
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar21,auVar31,auVar24);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar29,auVar35,auVar37);
  auVar24 = vectorPermute(auVar28,auVar27,_DAT_004e1b00);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar10.piece<4,16>(),auVar30,auVar37);
  auVar27 = vectorPermute(auVar28,auVar27,_DAT_004e1b10);
  auVar29 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = auVar25 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar21 = auVar25 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar25 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar38,auVar39);
  auVar31 = vectorSubtractFloatingPoint
                      (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                       auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
  auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar11.piece<4,16>(),auVar30,auVar22);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar35,auVar34);
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar9.piece<4,16>(),auVar41,auVar36);
  auVar34 = loadVectorLeftIndexed(0xf0,0x4e1a60);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar26,auVar33,auVar25);
  auVar22 = vectorSubtractFloatingPoint
                      (auVar31,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar23,auVar28);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar27,auVar23,auVar29);
  auVar23 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar33,auVar30);
  auVar29 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x88) & 0xfffffff0);
  auVar38 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x8c) & 0xfffffff0);
  auVar41 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x90) & 0xfffffff0);
  auVar30 = vectorReciprocalEstimateFloatingPoint(auVar22);
  auVar29 = vectorNegativeMultiplySubtractFloatingPoint
                      (auVar22,auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                      );
  auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar30);
  auVar28 = *(undefined1 (*) [16])((uint)(param_3 + param_4 * 0x10 + 0x94) & 0xfffffff0);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar29,auVar37);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar32,auVar29,auVar37);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar21,auVar29,auVar37);
  auVar25 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar37);
  auVar29 = auVar23 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar31 = auVar24 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar21 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar37
                      );
  auVar29 = auVar32 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar22 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar37
                      );
  auVar31 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar37
                      );
  auVar21 = auVar25 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar37
                      );
  auVar42 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar37
                      );
  auVar29 = auVar23 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,auVar37
                      );
  auVar23 = auVar23 & (GPiece<16>)0xffffffff;
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar37
                      );
  auVar31 = auVar24 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar37
                      );
  auVar24 = auVar24 & (GPiece<16>)0xffffffff;
  auVar21 = auVar32 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 & (GPiece<16>)0xffffffff;
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar35
                      );
  auVar30 = auVar25 >> 0x20 & (GPiece<16>)0xffffffff;
  auVar25 = auVar25 & (GPiece<16>)0xffffffff;
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,auVar39
                      );
  auVar22 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,auVar27
                      );
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,auVar26
                      );
  auVar21 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar42
                      );
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar36
                      );
  auVar24 = vectorMultiplyAddFloatingPoint
                      (auVar41,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,auVar34
                      );
  auVar29 = vectorMultiplyAddFloatingPoint
                      (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,auVar38
                      );
  auVar30 = vectorAddFloatingPoint(auVar22,auVar33);
  auVar31 = vectorAddFloatingPoint(auVar26,auVar21);
  auVar22 = vectorAddFloatingPoint(auVar32,auVar23);
  auVar29 = vectorAddFloatingPoint(auVar24,auVar29);
  auVar23 = vectorMergeHighWord(auVar30,auVar31);
  auVar31 = vectorMergeLowWord(auVar30,auVar31);
  auVar21 = vectorMergeHighWord(auVar22,auVar29);
  auVar29 = vectorMergeLowWord(auVar22,auVar29);
  vectorMergeHighWord(auVar23,auVar21);
  vectorMergeLowWord(auVar23,auVar21);
  vectorMergeHighWord(auVar31,auVar29);
  vectorMergeLowWord(auVar31,auVar29);
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x240,uVar15 - 0x160);
      iVar17 = FUN_005cc784("ViewToShadow0",uVar15 - 0x240);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1c0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x2c0,uVar15 - 0x164);
      iVar17 = FUN_005cc784("ViewToShadow1",uVar15 - 0x2c0);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1b0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x340,uVar15 - 0x168);
      iVar17 = FUN_005cc784("ViewToShadow2",uVar15 - 0x340);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x1a0,4)
  ;
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      FUN_0050f6e4(&DAT_010eef28,uVar19,uVar15 - 0x3c0,uVar15 - 0x16c);
      iVar17 = FUN_005cc784("ViewToShadow3",uVar15 - 0x3c0);
      uVar18 = uVar19;
      if (iVar17 == 0) break;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)(int)uVar20;
      uVar18 = 0xffffffffffffffff;
    } while (uVar20 < uVar16);
  }
  idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 400,4);
  uVar16 = FUN_0050f434(&DAT_010eef28);
  uVar18 = 0xffffffffffffffff;
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      uVar18 = uVar19;
      FUN_0050f6e4(&DAT_010eef28,uVar18,uVar15 - 0x440,uVar15 - 0x170);
      iVar17 = FUN_005cc784("Stereo3dParams",uVar15 - 0x440);
      if (iVar17 == 0) break;
      uVar20 = (int)uVar18 + 1;
      uVar18 = 0xffffffffffffffff;
      uVar19 = (longlong)(int)uVar20;
    } while (uVar20 < uVar16);
  }
  fVar1 = (float)param_3[0x69e];
  fVar2 = (float)param_3[0x69f];
  if (*(char *)(param_3 + 4) == '\0') {
    uVar18 = uVar18 & 0xffffffff;
    idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x13c,4);
    if (param_3[0x6a2] == 1) {
      idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x15c,4);
    }
    else if (param_3[0x6a2] == 2) {
      idol_draw::Gfx_SubmitHudDrawCommands(param_3,ShadowPass,0x16,uVar18,uVar15 - 0x14c,4);
    }
  }
  else {
    if ((param_3[0x69b] & 1U) == 0) {
      iVar17 = param_3[0x613d];
      param_3[iVar17 * 8 + 0x313e] = 0x16;
      param_3[iVar17 * 8 + 0x313c] = (int)uVar18;
      *(undefined1 *)(param_3 + iVar17 * 8 + 0x313f) = 4;
      param_3[iVar17 * 8 + 0x3138] = (int)-fVar1;
      param_3[iVar17 * 8 + 0x3139] = (int)(fVar1 * fVar2);
      param_3[iVar17 * 8 + 0x313a] = 0;
      param_3[iVar17 * 8 + 0x313b] = 0;
      param_3[iVar17 * 8 + 0x313d] = (int)ShadowPass->command - *(int *)ShadowPass;
      param_3[0x613d] = param_3[0x613d] + 1;
    }
    idol_draw::Gfx_SubmitHudDrawCommands
              (param_3,ShadowPass,0x16,uVar18 & 0xffffffff,uVar15 - 0x14c,4);
  }
  idol_draw::BindVertexProgram(param_3,ShadowPass,0xf);
  idol_draw::BindFragmentProgram(param_3,ShadowPass,0x16);
  auVar29 = loadVectorLeftIndexed(lVar13,param_5);
  auVar31 = loadVectorLeftIndexed(4,param_5);
  auVar21 = loadVectorLeftIndexed(8,param_5);
  auVar29 = vectorPermute(auVar29,auVar31,_DAT_004e1b60);
  auVar31 = vectorPermute(auVar21,auStack_180,_DAT_004e1b60);
  vectorPermute(auVar29,auVar31,_DAT_004e1b70);
  FUN_004e0d50(param_1,param_2,param_3,5);
  return;
}


// 0x04e2860 (0x18c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2860(double param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined4 in_r8;
  longlong lVar8;
  GPiece<16> in_vs34;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<88> local_70;
  
  uVar2 = *(uint *)(param_2 + 0x185f4);
  auVar9.piece<0,4>() = (float)param_1;
  auVar9.piece<4,4>() = (float)param_1;
  auVar9.piece<8,4>() = (float)param_1;
  auVar9.piece<12,4>() = (float)param_1;
  if (uVar2 < *(int *)(param_2 + 0x185f0) - 4U) {
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x70,0x4e2830);
    auVar13 = *(undefined1 (*) [16])(param_2 + 0xa0U & 0xfffffff0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar14 = *(undefined1 (*) [16])(param_2 + 0xd0U & 0xfffffff0);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0xb0U & 0xfffffff0);
    auVar16 = *(undefined1 (*) [16])(param_2 + 0xc0U & 0xfffffff0);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar9,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar11 = vectorPermute(auVar13,auVar16,_DAT_004e2840);
    auVar12 = vectorPermute(auVar15,auVar14,_DAT_004e2840);
    auVar9 = ZEXT416(0);
    auVar17 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar9 = vectorMergeHighWord(auVar11,auVar12);
    auVar11 = vectorPermute(auVar13,auVar16,_DAT_004e2850);
    auVar12 = vectorPermute(auVar15,auVar14,_DAT_004e2850);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar17);
    auVar11 = vectorMergeHighWord(auVar11,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar17);
    uVar1 = *(uint *)(param_2 + *(int *)(param_2 + 0x1a6c) * 4 + 0x185f8);
    auVar11 = vectorSubtractFloatingPoint(in_vs34,auVar9);
    auVar9 = vectorAddFloatingPoint(in_vs34,auVar9);
    *(uint *)(param_2 + 0x185f4) = uVar2 + 4;
    uVar7 = (ulonglong)uVar1 + ((ulonglong)uVar2 & 0xfffffff) * 0x10 & 0xffffffff;
    pauVar6 = (undefined1 (*) [16])local_70;
    lVar5 = uVar7 + 4;
    lVar4 = uVar7 + 8;
    lVar8 = 4;
    vectorSubtractFloatingPoint(auVar11,auVar10);
    vectorSubtractFloatingPoint(auVar9,auVar10);
    vectorAddFloatingPoint(auVar9,auVar10);
    vectorAddFloatingPoint(auVar11,auVar10);
    do {
      auVar11 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      auVar9 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar10 = auVar11 >> 0x40 & (GPiece<16>)0xffffffff;
      auVar11 = auVar11 >> 0x20 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar7);
      *(undefined4 *)((uint)uVar7 & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,lVar5);
      *(undefined4 *)((uint)lVar5 & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar3;
      lVar5 = lVar5 + 0x10;
      *(undefined4 *)((uint)uVar7 + 0xc) = in_r8;
      lVar4 = lVar4 + 0x10;
      uVar7 = uVar7 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}


// 0x04e2a60 (0x2e0 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2a60(double param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  undefined4 in_r10;
  longlong lVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> in_vs34;
  GPiece<16> in_vs35;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<128> local_90;
  
  uVar1 = *(uint *)(param_2 + 0x185f4);
  auVar10.piece<0,4>() = (float)param_1;
  auVar10.piece<4,4>() = (float)param_1;
  auVar10.piece<8,4>() = (float)param_1;
  auVar10.piece<12,4>() = (float)param_1;
  if (uVar1 < *(int *)(param_2 + 0x185f0) - 4U) {
    auVar11 = vectorSubtractFloatingPoint(in_vs35,in_vs34);
    auVar13 = vectorSubtractFloatingPoint(in_vs34,in_vs35);
    auVar14 = ZEXT416(0);
    auVar12 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar12);
    auVar15 = vectorPermute(auVar11,auVar11,_DAT_004e2a00);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar12);
    auVar17 = vectorPermute(auVar13,auVar13,_DAT_004e2a00);
    auVar8 = vectorPermute(auVar11,auVar11,_DAT_004e2a10);
    auVar9 = vectorPermute(auVar13,auVar13,_DAT_004e2a10);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar15,auVar14);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar17,auVar17,auVar16);
    auVar14 = loadVectorLeftIndexed(0x30,0x4e29f0);
    auVar18 = loadVectorLeftIndexed(0x34,0x4e29f0);
    auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar17 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar18 = *(undefined1 (*) [16])(param_2 + 0xa0U & 0xfffffff0);
    auVar20 = *(undefined1 (*) [16])(param_2 + 0xb0U & 0xfffffff0);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar15);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar16);
    auVar22 = *(undefined1 (*) [16])(param_2 + 0xc0U & 0xfffffff0);
    auVar25 = *(undefined1 (*) [16])(param_2 + 0xd0U & 0xfffffff0);
    auVar23 = vectorPermute(auVar22,auVar18,_DAT_004e29f0);
    auVar24 = vectorPermute(auVar20,auVar25,_DAT_004e29f0);
    auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
    auVar8 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar15);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar9,auVar12);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar8,auVar15,auVar12);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar14,auVar17,auVar12);
    auVar21 = vectorMultiplyAddFloatingPoint(auVar8,auVar17,auVar12);
    pauVar5 = (undefined1 (*) [16])local_90;
    lVar7 = 4;
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar9,auVar19);
    auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar15,auVar19);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar16,auVar14);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar21,auVar8);
    auVar21 = vectorPermute(auVar23,auVar24,_DAT_004e2a50);
    auVar16 = vectorCompareEqualToFloatingPoint(auVar9,auVar9);
    auVar9 = vectorConditionalSelect(auVar14,auVar9,auVar16);
    auVar14 = vectorCompareEqualToFloatingPoint(auVar15,auVar15);
    auVar15 = vectorConditionalSelect(auVar8,auVar15,auVar14);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar12);
    auVar9 = vectorPermute(auVar20,auVar22,_DAT_004e29f0);
    auVar14 = vectorPermute(auVar18,auVar25,_DAT_004e29f0);
    auVar11 = vectorMultiplyAddFloatingPoint(auVar13,auVar15,auVar12);
    auVar13 = vectorPermute(auVar9,auVar14,_DAT_004e2a50);
    auVar14 = vectorPermute(auVar8,auVar8,_DAT_004e2a30);
    auVar9 = vectorPermute(auVar8,auVar8,_DAT_004e2a40);
    auVar8 = vectorPermute(auVar11,auVar11,_DAT_004e2a30);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar14,auVar21,auVar12);
    auVar11 = vectorPermute(auVar11,auVar11,_DAT_004e2a40);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar21,auVar12);
    auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar13,auVar14);
    auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar8);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar12);
    auVar16 = vectorPermute(auVar9,auVar9,_DAT_004e2a00);
    auVar8 = vectorPermute(auVar9,auVar9,_DAT_004e2a10);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar12);
    auVar13 = vectorPermute(auVar11,auVar11,_DAT_004e2a00);
    auVar18 = vectorPermute(auVar11,auVar11,_DAT_004e2a10);
    auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar16,auVar15);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar14);
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    uVar6 = (ulonglong)*(uint *)(param_2 + *(int *)(param_2 + 0x1a6c) * 4 + 0x185f8) +
            ((ulonglong)uVar1 & 0xfffffff) * 0x10 & 0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar15);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar18,auVar18,auVar13);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar10,auVar17,auVar14);
    lVar4 = uVar6 + 4;
    auVar10 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar10 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar15 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar13);
    auVar16 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar8);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar16,auVar8,auVar12);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar12);
    auVar13 = vectorNegativeMultiplySubtractFloatingPoint(auVar15,auVar13,auVar19);
    auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar16,auVar8,auVar19);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar15);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar8,auVar17,auVar16);
    auVar8 = vectorCompareEqualToFloatingPoint(auVar13,auVar13);
    auVar13 = vectorConditionalSelect(auVar15,auVar13,auVar8);
    auVar8 = vectorCompareEqualToFloatingPoint(auVar10,auVar10);
    auVar8 = vectorConditionalSelect(auVar16,auVar10,auVar8);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar13,auVar12);
    auVar9 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar12);
    auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar14,auVar12);
    auVar10 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar12);
    vectorAddFloatingPoint(in_vs34,auVar8);
    vectorSubtractFloatingPoint(in_vs34,auVar8);
    vectorSubtractFloatingPoint(in_vs35,auVar10);
    vectorAddFloatingPoint(in_vs35,auVar10);
    *(uint *)(param_2 + 0x185f4) = uVar1 + 4;
    lVar3 = uVar6 + 8;
    do {
      auVar8 = *pauVar5;
      pauVar5 = pauVar5 + 1;
      auVar10 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = auVar8 >> 0x40 & (GPiece<16>)0xffffffff;
      auVar8 = auVar8 >> 0x20 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0,uVar6);
      *(undefined4 *)((uint)uVar6 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0,lVar3);
      *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
      *(undefined4 *)((uint)uVar6 + 0xc) = in_r10;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x10;
      uVar6 = uVar6 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}


// 0x04e2de0 (0x334 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2de0(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> in_vs34;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 uStack_174;
  
  if (*(uint *)(param_4 + 0x185f4) < *(int *)(param_4 + 0x185f0) - 4U) {
    auVar21 = in_vs34;
    FUN_004e2860(param_2,param_4);
    puVar3 = &DAT_004e2d40;
    dVar8 = 0.0;
    vectorAddFloatingPoint(in_vs34,_DAT_004e2d40);
    dVar7 = 6.2831854820251465;
    dVar6 = 0.39269909262657166;
    vectorAddFloatingPoint(in_vs34,_DAT_004e2d50);
    dVar9 = dVar8;
    auVar13 = _DAT_004e2d70;
    auVar15 = _DAT_004e2d80;
    auVar17 = _DAT_004e2da0;
    auVar18 = _DAT_004e2db0;
    auVar19 = _DAT_004e2dc0;
    auVar20 = _DAT_004e2dd0;
    auVar23 = _DAT_004e2d90;
    do {
      uVar2 = _FSin(dVar9,puVar3,1);
      dVar5 = (double)(float)(extraout_f1 * param_1);
      dVar4 = (double)_FSin(dVar9,uVar2,0);
      fVar1 = (float)(dVar4 * param_1);
      dVar4 = (double)fVar1;
      auVar16.piece<0,4>() = local_180;
      auVar16.piece<4,4>() = local_17c;
      auVar16.piece<8,4>() = local_178;
      auVar16.piece<12,4>() = uStack_174;
      auVar22.piece<0,4>() = fVar1;
      auVar22.piece<4,4>() = fVar1;
      auVar22.piece<8,4>() = fVar1;
      auVar22.piece<12,4>() = fVar1;
      auVar12.piece<0,4>() = (float)dVar5;
      auVar12.piece<4,4>() = (float)dVar5;
      auVar12.piece<8,4>() = (float)dVar5;
      auVar12.piece<12,4>() = (float)dVar5;
      auVar10 = vectorPermute(auVar22,auVar12,auVar13);
      auVar11 = ZEXT416(0);
      auVar14 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = vectorPermute(auVar10,auVar14,auVar15);
      auVar16 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar16,auVar21);
      FUN_004e2a60(param_3,param_4);
      auVar11 = vectorPermute(auVar22,auVar12,auVar17);
      auVar11 = vectorPermute(auVar11,auVar14,auVar18);
      auVar16 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar16,auVar21);
      FUN_004e2a60(param_3,param_4);
      auVar11 = vectorPermute(auVar22,auVar12,auVar19);
      local_180 = (float)dVar8;
      auVar11 = vectorPermute(auVar11,auVar14,auVar20);
      local_17c = (float)dVar5;
      local_178 = (float)dVar4;
      auVar11 = vectorPermute(auVar11,auVar16,auVar23);
      vectorAddFloatingPoint(auVar11,in_vs34);
      puVar3 = (undefined *)FUN_004e2a60(param_3,param_4);
      dVar9 = (double)(float)(dVar9 + dVar6);
    } while (dVar9 < dVar7);
  }
  return;
}


// 0x04e3114 (0x64 bytes)
void FUN_004e3114(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x1a6c) & 1) == 0) {
    iVar3 = (int)(param_2 << 2);
    iVar2 = param_1 + iVar3;
    piVar1 = *(int **)((int)&DepthPass + iVar3);
    *(int *)(param_1 + (int)(param_2 << 5) + *(int *)(iVar2 + 0x2354) * 4 + 0x2380) =
         piVar1[2] - *piVar1;
    *(int *)(iVar2 + 0x2354) = *(int *)(iVar2 + 0x2354) + 1;
  }
  return;
}


// 0x04e3178 (0x50 bytes)
void FUN_004e3178(int param_1)

{
  RsxCmd *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1858c);
  pRVar1 = HUD_Pass->command;
  iVar2 = *(int *)HUD_Pass;
  *(int *)(param_1 + 0x1858c) = iVar3 + 1;
  *(int *)(param_1 + iVar3 * 4 + 0x1850c) = (int)pRVar1 + (4 - iVar2);
  return;
}


// 0x04e31c8 (0x174 bytes)
void FUN_004e31c8(void)

{
  void *__src;
  size_t __n;
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 local_50 [4];
  
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_008fa448;
  puVar4 = &DAT_010ee630;
  puVar5 = &DAT_010ee330;
  do {
    FUN_0050f130(*ppuVar3,*puVar4,puVar5);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x30;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_008fa488;
  puVar4 = &DAT_010ef438;
  puVar5 = &DAT_010eeb08;
  puVar6 = &DAT_010ee670;
  do {
    FUN_0050f130(*ppuVar3,*puVar4,puVar5);
    __src = (void *)FUN_0050f3b8(puVar5);
    __n = FUN_0050f3ac(puVar5);
    uVar1 = idol::AllocateMemAlign(ZEXT48(g_pGame) + 0x7c,__n,0x40);
    memcpy((void *)uVar1,__src,__n);
    cellGcmAddressToOffset(uVar1,local_50);
    FUN_0050f300(puVar5,puVar6);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    *puVar6 = local_50[0];
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x30;
    puVar6 = puVar6 + 6;
  } while (iVar2 < 0x31);
  return;
}


// 0x04e3348 (0x1f0 bytes)
void FUN_004e3348(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  auVar4 = ZEXT416(0xffffffff);
  auVar9 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar3.piece<0,4>() = param_4;
  auVar3.piece<4,4>() = param_4;
  auVar3.piece<8,4>() = param_4;
  auVar3.piece<12,4>() = param_4;
  auVar4 = loadVectorLeftIndexed(0x30,0x4e333c);
  auVar6 = loadVectorLeftIndexed(4,0x4e333c);
  auVar8 = loadVectorLeftIndexed(8,0x4e333c);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar5 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar4 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar3 = vectorLogicalAnd(auVar3,auVar5);
  auVar4.piece<0,4>() = param_3;
  auVar4.piece<4,4>() = param_3;
  auVar4.piece<8,4>() = param_3;
  auVar4.piece<12,4>() = param_3;
  **(undefined4 **)(param_2 + 8) = &DAT_00080a00;
  auVar6 = vectorLogicalAnd(auVar4,auVar5);
  auVar4 = ZEXT416(0xffffffff);
  auVar9 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  auVar5 = vectorConvertFromUnsignedFixedPointWord(auVar3,0);
  auVar3 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  *(int *)(*(int *)(param_2 + 8) + 4) = param_3 << 0x10;
  auVar4 = vectorConvertFromUnsignedFixedPointWord(auVar6,0);
  auVar6 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  *(int *)(*(int *)(param_2 + 8) + 8) = param_4 << 0x10;
  iVar1 = *(int *)(param_2 + 8);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar4,auVar7,auVar6);
  *(int *)(param_2 + 8) = iVar1 + 0xc;
  *(undefined4 *)(iVar1 + 0xc) = 0x80394;
  auVar7 = vectorMultiplyAddFloatingPoint(auVar5,auVar7,auVar10);
  auVar4 = ZEXT416(0xffffffff);
  auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  auVar4 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  *(undefined4 *)(*(int *)(param_2 + 8) + 8) = 0x3f800000;
  auVar4 = vectorMultiplyAddFloatingPoint
                     (auVar5,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar4);
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0xc;
  *(undefined4 *)(iVar1 + 0xc) = 0x200a20;
  uVar2 = storeVectorElementWordIndexed(auVar6,4,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar7,8,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 8 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x10) = 0;
  uVar2 = storeVectorElementWordIndexed(auVar6,0x14,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x14 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar4,0x18,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x18 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x1c) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x24) = 0x200a20;
  uVar2 = storeVectorElementWordIndexed(auVar6,4,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 4 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar7,8,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 8 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x10) = 0;
  uVar2 = storeVectorElementWordIndexed(auVar6,0x14,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x14 & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed(auVar4,0x18,(ulonglong)*(uint *)(param_2 + 8));
  *(undefined4 *)(*(uint *)(param_2 + 8) + 0x18 & 0xfffffffc) = uVar2;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x1c) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 0x24;
  *(undefined4 *)(iVar1 + 0x24) = 0x808c0;
  *(int *)(*(int *)(param_2 + 8) + 4) = param_3 << 0x10;
  *(int *)(*(int *)(param_2 + 8) + 8) = param_4 << 0x10;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 0xc;
  return;
}


// 0x04e3538 (0x160 bytes)
// strings: 00659340: 'ERROR: open file %s\n' | 006593a8: 'ERROR: memory allocation failed\n'

longlong FUN_004e3538(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  uVar2 = FUN_005c52f0(param_2,&DAT_00659338);
  if ((int)uVar2 == 0) {
    print_tty2("ERROR: open file %s\n",param_2);
    lVar3 = 0;
  }
  else {
    FUN_005c5568(uVar2,0,2);
    uVar4 = FUN_005c55dc(uVar2);
    uVar4 = uVar4 & 0xffffffff;
    FUN_005c5568(uVar2,0,0);
    uVar1 = (undefined4)(uVar4 << 1);
    lVar3 = idol::AllocateMemAlign(param_4,uVar1,0x100000);
    if ((int)lVar3 == 0) {
      print_tty2("ERROR: memory allocation failed\n");
      lVar3 = 0;
    }
    else {
      *param_3 = uVar1;
      FUN_005c5364(lVar3,1,uVar4,uVar2);
      FUN_005c4f10(uVar2);
      FUN_004debdc(param_1,lVar3,lVar3 + uVar4 & 0xffffffff,0x200,0x200);
    }
  }
  return lVar3;
}


// 0x04e3698 (0x4 bytes)
void FUN_004e3698(void)

{
  return;
}


// 0x04e369c (0x4c bytes)
void FUN_004e369c(void)

{
  int iVar1;
  
  iVar1 = DAT_008fa568 + 1;
  if (DAT_008fa568 == 1) {
    FUN_004edccc(&DAT_01111700);
    iVar1 = 0;
  }
  DAT_008fa568 = iVar1;
  return;
}


// 0x04e36e8 (0x62c bytes)
void FUN_004e36e8(void)

{
  DAT_010ee630 = DAT_00901bb8 - DAT_00901b18;
  DAT_010ee634 = DAT_00901d81 - DAT_00901bb8;
  DAT_010ee638 = DAT_00901f80 - DAT_00901d81;
  DAT_010ee63c = DAT_00902430 - DAT_00902319;
  DAT_010ee640 = DAT_00902621 - DAT_00902430;
  DAT_010ee644 = DAT_0090283f - DAT_00902621;
  DAT_010ee648 = DAT_00902b46 - DAT_0090283f;
  DAT_010ee64c = DAT_009018e8 - DAT_0090171a;
  DAT_010ee650 = DAT_00902319 - DAT_009020eb;
  DAT_010ee654 = DAT_00901b18 - DAT_009019a1;
  DAT_010ee658 = DAT_00902d01 - DAT_00902b46;
  DAT_010ee65c = DAT_009019a1 - DAT_009018e8;
  DAT_010ee660 = DAT_009020eb - DAT_00902013;
  DAT_010ee664 = DAT_00902013 - DAT_00901f80;
  DAT_010ee668 = DAT_0090171a - DAT_0090165d;
  DAT_010ee66c = DAT_00902e8f - DAT_00902d01;
  DAT_010ef438 = DAT_008fda8a - DAT_008fda12;
  DAT_010ef43c = DAT_008fda12 - DAT_008fd931;
  DAT_010ef440 = DAT_0090154f - DAT_009014f6;
  DAT_010ef444 = DAT_008ff8ba - DAT_008ff841;
  DAT_010ef448 = DAT_008ffc0d - DAT_008ffaa6;
  DAT_010ef44c = DAT_008fd862 - DAT_008fd778;
  DAT_010ef450 = DAT_0090018b - DAT_009000c1;
  DAT_010ef454 = DAT_0090027a - DAT_0090018b;
  DAT_010ef458 = DAT_008ffdd4 - DAT_008ffd1a;
  DAT_010ef45c = DAT_00900304 - DAT_0090027a;
  DAT_010ef460 = DAT_0090034a - DAT_00900304;
  DAT_010ef464 = DAT_0090165d - DAT_0090154f;
  DAT_010ef468 = DAT_008ffaa6 - DAT_008ffa1c;
  DAT_010ef46c = DAT_008ffa1c - DAT_008ff8ba;
  DAT_010ef470 = DAT_008ffd1a - DAT_008ffc0d;
  DAT_010ef474 = DAT_008fd931 - DAT_008fd8a8;
  DAT_010ef478 = DAT_008fdbcc - DAT_008fda8a;
  DAT_010ef47c = DAT_008fdd0e - DAT_008fdbcc;
  DAT_010ef480 = DAT_008fd8a8 - DAT_008fd862;
  DAT_010ef484 = DAT_008fd629 - DAT_008fd4a0;
  DAT_010ef488 = DAT_008fd778 - DAT_008fd629;
  DAT_010ef48c = DAT_009014f6 - DAT_0090034a;
  DAT_010ef490 = DAT_009000c1 - DAT_008ffdd4;
  DAT_010ef494 = DAT_008fde2b - DAT_008fdd0e;
  DAT_010ef498 = DAT_008fdf48 - DAT_008fde2b;
  DAT_010ef49c = DAT_008fe065 - DAT_008fdf48;
  DAT_010ef4a0 = DAT_008fe1a2 - DAT_008fe065;
  DAT_010ef4a4 = DAT_008fe2bf - DAT_008fe1a2;
  DAT_010ef4a8 = DAT_008fe636 - DAT_008fe519;
  DAT_010ef4ac = DAT_008fe753 - DAT_008fe636;
  DAT_010ef4b0 = DAT_008fe860 - DAT_008fe753;
  DAT_010ef4b4 = DAT_008fe3dc - DAT_008fe2bf;
  DAT_010ef4b8 = DAT_008fe519 - DAT_008fe3dc;
  DAT_010ef4bc = DAT_008ff332 - DAT_008ff215;
  DAT_010ef4c0 = DAT_008ff45f - DAT_008ff332;
  DAT_010ef4c4 = DAT_008fe96d - DAT_008fe860;
  DAT_010ef4c8 = DAT_008fea6a - DAT_008fe96d;
  DAT_010ef4cc = DAT_008feb87 - DAT_008fea6a;
  DAT_010ef4d0 = DAT_008feca4 - DAT_008feb87;
  DAT_010ef4d4 = DAT_008fedc1 - DAT_008feca4;
  DAT_010ef4d8 = DAT_008feebe - DAT_008fedc1;
  DAT_010ef4dc = DAT_008fefdb - DAT_008feebe;
  DAT_010ef4e0 = DAT_008ff0f8 - DAT_008fefdb;
  DAT_010ef4e4 = DAT_008ff215 - DAT_008ff0f8;
  DAT_010ef4e8 = DAT_008ff519 - DAT_008ff45f;
  DAT_010ef4ec = DAT_008ff5e3 - DAT_008ff519;
  DAT_010ef4f0 = DAT_008ff6ad - DAT_008ff5e3;
  DAT_010ef4f4 = DAT_008ff777 - DAT_008ff6ad;
  DAT_010ef4f8 = DAT_008ff841 - DAT_008ff777;
  return;
}


// 0x04e3d20 (0x54 bytes)
void FUN_004e3d20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 < 4) {
    if (2 < param_1) {
      *param_2 = 2;
      *param_3 = 1;
      return;
    }
  }
  else if (param_1 < 6) {
    *param_2 = 2;
    *param_3 = 2;
    return;
  }
  *param_2 = 1;
  *param_3 = 1;
  return;
}


// 0x04e3d74 (0x78 bytes)
void FUN_004e3d74(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = FUN_0050436c(g_pGame);
  iVar2 = (param_2 - (param_2 & 0xfffff)) + 0x100000;
  idol::AllocateMemAlign
            (uVar1,iVar2 + ((uint)(ZERO_MASK((param_2 & 0xfffff))) &
                           param_2 - iVar2),0x10000);
  return;
}


// 0x04e3dec (0x38 bytes)
undefined8 FUN_004e3dec(int param_1)

{
  if (param_1 < 2) {
    if (0 < param_1) {
      return 2;
    }
  }
  else if (param_1 < 3) {
    return 4;
  }
  return 1;
}


// 0x04e3e24 (0xc4 bytes)
undefined8
FUN_004e3e24(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4,
            undefined1 param_5,uint *param_6)

{
  undefined8 uVar1;
  
  uVar1 = idol::AllocateMemAlign(ZEXT48(g_pGame) + 0x7c,(int)(param_2 >> 0x20),0x10000);
  cellGcmAddressToOffset(uVar1,param_6);
  cellGcmSetTile
            (param_4,0,*param_6,param_2 >> 0x20,param_2 & 0xffffffff,param_3 >> 0x20 & 0xff,
             *param_6 >> 0x10,param_5);
  return uVar1;
}


// 0x04e3ee8 (0x144 bytes)
void FUN_004e3ee8(uint *param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 2;
  if (param_6 < 4) {
    if (2 < param_6) {
      iVar3 = 2;
      iVar4 = 1;
      uVar2 = 7;
      goto LAB_004e3f74;
    }
  }
  else {
    if (param_6 < 5) {
      uVar2 = 8;
      iVar3 = 2;
      goto LAB_004e3f74;
    }
    if (param_6 < 6) {
      uVar2 = 8;
      iVar3 = 2;
      goto LAB_004e3f74;
    }
  }
  iVar3 = 1;
  uVar2 = 0;
  iVar4 = 1;
LAB_004e3f74:
  uVar2 = (uint)(ZERO_MASK((8 - param_5))) & uVar2;
  uVar1 = cellGcmGetTiledPitchSize(param_7 * (param_3 + 0x3fU & 0xffffffc0) * iVar3);
  param_1[1] = uVar1;
  *param_1 = uVar1 * (param_4 + 0x3fU & 0xffffffc0) * iVar4 + 0xffff & 0xffff0000;
  param_1[2] = uVar2 + ((uint)(ZERO_MASK((2 - param_5))) & -uVar2);
  return;
}


// 0x04e402c (0xac bytes)
undefined8 FUN_004e402c(int param_1)

{
  if (param_1 < 10) {
    if (param_1 < 6) {
      if (0 < param_1) {
        if (param_1 < 4) {
          return 2;
        }
        return 3;
      }
    }
    else if (7 < param_1) {
      if (8 < param_1) {
        return 1;
      }
      return 4;
    }
  }
  else {
    if (param_1 < 0xd) {
      if (param_1 < 0xb) {
        return 2;
      }
      if (0xb < param_1) {
        return 0x10;
      }
      return 8;
    }
    if (param_1 < 0x10) {
      if (0xd < param_1) {
        return 3;
      }
      return 4;
    }
    if (param_1 < 0x11) {
      return 4;
    }
  }
  return 0;
}


// 0x04e40d8 (0x6f4 bytes)
void FUN_004e40d8(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  longlong lVar16;
  char in_stack_00000077;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 uStack_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 uStack_79;
  
  param_1[0x4a] = param_2;
  param_1[0x4c] = param_3;
  uVar13 = param_2 + 0x3fU & 0xffffffc0;
  uVar3 = param_3 + 0x3fU & 0xffffffc0;
  iVar11 = (int)param_5;
  param_1[0x4e] = uVar13;
  param_1[0x50] = uVar3;
  if (iVar11 == 0) {
    param_1[0x52] = 0x40;
    param_1[0x47] = 0;
    param_1[0x3c] = 0;
  }
  else {
    if (param_4 == 0) {
      uVar4 = FUN_004e402c(param_5);
      FUN_004e3ee8(&local_90,param_1,uVar13,uVar3,param_5,param_8,uVar4);
      param_1[0x52] = local_8c;
      param_1[0x47] = local_90;
      uVar13 = DAT_010ef528;
      uVar5 = ZEXT48(g_pGame);
      uVar3 = DAT_010ef528 + 1;
      param_1[0x43] = DAT_010ef528;
      DAT_010ef528 = uVar3;
      uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_90,0x10000);
      cellGcmAddressToOffset(uVar4,param_1 + 0x3e);
      cellGcmSetTile
                (uVar13 & 0xff,0,param_1[0x3e],local_90,local_8c,uStack_85,
                 (uint)param_1[0x3e] >> 0x10,0);
    }
    else {
      iVar6 = FUN_004e402c(param_5);
      uVar13 = param_1[0x4e] * iVar6 * param_1[0x50];
      param_1[0x52] = param_1[0x4e] * iVar6;
      param_1[0x47] = uVar13;
      pvVar2 = g_pGame;
      param_1[0x43] = 0xffffffff;
      uVar4 = FUN_0050436c(pvVar2);
      iVar6 = (uVar13 - (uVar13 & 0xfffff)) + 0x100000;
      uVar4 = idol::AllocateMemAlign
                        (uVar4,iVar6 + ((uint)(ZERO_MASK((uVar13 & 0xfffff))) &
                                       uVar13 - iVar6),0x10000);
    }
    param_1[0x3c] = (int)uVar4;
    if (in_stack_00000077 != '\0') {
      uVar13 = DAT_010ef530 & 0xff;
      uVar3 = DAT_010ef530 + 1;
      param_1[0x46] = DAT_010ef530;
      DAT_010ef530 = uVar3;
      cellGcmSetDisplayBuffer(uVar13,param_1[0x3e],param_1[0x52],param_1[0x4a],param_1[0x4c]);
    }
  }
  iVar14 = (int)param_7;
  iVar6 = (int)param_8;
  if (iVar14 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
  }
  else if (param_6 == 0) {
    if (iVar14 < 2) {
      if (iVar14 < 1) {
LAB_004e433c:
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      if (2 < iVar14) goto LAB_004e433c;
      uVar4 = 4;
    }
    FUN_004e3ee8(&local_84,param_1,param_1[0x4e],param_1[0x50],param_7,param_8,uVar4);
    param_1[0x54] = local_80;
    param_1[0x49] = local_84;
    iVar7 = DAT_010ef52c + 1;
    param_1[0x45] = DAT_010ef52c;
    DAT_010ef52c = iVar7;
    uVar13 = DAT_010ef528;
    if ((iVar6 == 5) || (iVar6 == 4)) {
      uVar1 = 0xc;
    }
    else if (iVar6 == 3) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = uStack_79;
      if (iVar6 == 0) {
        uVar1 = 9;
      }
    }
    if (iVar14 == 0) {
      uVar1 = 0;
    }
    uVar5 = ZEXT48(g_pGame);
    uVar3 = DAT_010ef528 + 1;
    param_1[0x44] = DAT_010ef528;
    DAT_010ef528 = uVar3;
    uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_84,0x10000);
    cellGcmAddressToOffset(uVar4,param_1 + 0x42);
    cellGcmSetTile
              (uVar13 & 0xff,0,param_1[0x42],local_84,local_80,uVar1,(uint)param_1[0x42] >> 0x10,2);
    param_1[0x3d] = (int)uVar4;
    cellGcmSetZcull
              (param_1[0x45] & 0xff,param_1[0x42],param_1[0x4e],param_1[0x50],DAT_008fa620,2,param_8
               ,0);
    DAT_008fa620 = DAT_008fa620 + param_1[0x4e] * param_1[0x50];
  }
  else {
    if (iVar14 < 2) {
      if (iVar14 < 1) {
LAB_004e44f0:
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
    }
    else {
      if (2 < iVar14) goto LAB_004e44f0;
      iVar7 = 4;
    }
    uVar13 = param_1[0x4e] * iVar7 * param_1[0x50];
    param_1[0x54] = param_1[0x4e] * iVar7;
    pvVar2 = g_pGame;
    param_1[0x49] = uVar13;
    param_1[0x45] = 0xffffffff;
    param_1[0x44] = 0xffffffff;
    uVar4 = FUN_0050436c(pvVar2);
    iVar7 = (uVar13 - (uVar13 & 0xfffff)) + 0x100000;
    uVar8 = idol::AllocateMemAlign
                      (uVar4,iVar7 + ((uint)(ZERO_MASK((uVar13 & 0xfffff))) &
                                     uVar13 - iVar7),0x10000);
    param_1[0x3d] = uVar8;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar16 = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)(ZERO_MASK(iVar11)) & 8U - (char)param_5);
  *(char *)(param_1 + 1) = (char)param_4;
  *(byte *)((int)param_1 + 3) = (byte)((ulonglong)(LZCOUNT(iVar11) << 0x20) >> 0x25) ^ 1;
  iVar7 = (int)param_1 + 1;
  param_1[2] = param_1[0x3e];
  puVar10 = param_1 + 1;
  param_1[6] = param_1[0x52];
  do {
    *(undefined1 *)(iVar7 + 4) = 0;
    puVar10[2] = 0;
    iVar7 = iVar7 + 1;
    puVar10[6] = 0x40;
    puVar10 = puVar10 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if (iVar14 == 0) {
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    uVar12 = 0x40;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar8 = param_1[0x42];
  }
  else {
    uVar8 = param_1[0x42];
    *(char *)(param_1 + 10) = (char)param_7;
    uVar12 = param_1[0x54];
    *(char *)((int)param_1 + 0x29) = (char)param_6;
    param_1[0xb] = uVar8;
  }
  param_1[0xc] = uVar12;
  *(undefined1 *)param_1 = 1;
  *(char *)((int)param_1 + 1) = (char)param_8;
  *(short *)(param_1 + 0xd) = (short)param_2;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  if (iVar6 < 4) {
    if (2 < iVar6) {
      sVar15 = 2;
      sVar9 = 1;
      goto LAB_004e46cc;
    }
  }
  else if (iVar6 < 6) {
    sVar15 = 2;
    sVar9 = 2;
    goto LAB_004e46cc;
  }
  sVar15 = 1;
  sVar9 = 1;
LAB_004e46cc:
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  sVar15 = (short)param_2 * sVar15;
  sVar9 = (short)param_3 * sVar9;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(short *)(param_1 + 0x20) = sVar15;
  param_1[0x1f] = 0xaae4;
  *(byte *)(param_1 + 0x1e) = ((byte)(ZERO_MASK((9 - iVar11))) & 0xfc) + 0xa5;
  *(short *)((int)param_1 + 0x82) = sVar9;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  if (iVar14 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 0xa5;
    param_1[0x37] = 0xa993;
    *(undefined1 *)((int)param_1 + 0xd9) = 1;
    *(undefined1 *)((int)param_1 + 0xda) = 2;
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    *(short *)(param_1 + 0x38) = sVar15;
    *(short *)((int)param_1 + 0xe2) = sVar9;
    *(undefined2 *)(param_1 + 0x39) = 1;
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    param_1[0x3a] = param_1[0x54];
    param_1[0x3b] = uVar8;
  }
  return;
}


// 0x04e47cc (0x3ec bytes)
void FUN_004e47cc(undefined4 *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,char param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  longlong lVar13;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 uStack_65;
  
  param_1[0x4a] = param_2;
  uVar4 = param_2 + 0x3fU & 0xffffffc0;
  param_1[0x4c] = param_3;
  uVar5 = param_3 + 0x3fU & 0xffffffc0;
  iVar9 = (int)param_5;
  param_1[0x4e] = uVar4;
  param_1[0x50] = uVar5;
  if (iVar9 == 0) {
    param_1[0x52] = 0x40;
    param_1[0x47] = 0;
    param_1[0x3c] = 0;
  }
  else {
    uVar6 = FUN_004e402c(param_5);
    FUN_004e3ee8(&local_70,param_1,uVar4,uVar5,param_5,param_7,uVar6);
    param_1[0x52] = local_6c;
    param_1[0x47] = local_70;
    uVar4 = DAT_010ef528;
    uVar7 = ZEXT48(g_pGame);
    uVar5 = DAT_010ef528 + 1;
    param_1[0x43] = DAT_010ef528;
    DAT_010ef528 = uVar5;
    uVar6 = idol::AllocateMemAlign(uVar7 + 0x7c,local_70,0x10000);
    cellGcmAddressToOffset(uVar6,param_1 + 0x3e);
    cellGcmSetTile
              (uVar4 & 0xff,0,param_1[0x3e],local_70,local_6c,uStack_65,(uint)param_1[0x3e] >> 0x10,
               0);
    param_1[0x3c] = (int)uVar6;
    if (param_8 != '\0') {
      uVar4 = DAT_010ef530 & 0xff;
      uVar5 = DAT_010ef530 + 1;
      param_1[0x46] = DAT_010ef530;
      DAT_010ef530 = uVar5;
      cellGcmSetDisplayBuffer(uVar4,param_1[0x3e],param_1[0x52],param_1[0x4e],param_1[0x50]);
    }
  }
  if (param_6 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
  }
  else {
    param_1[0x54] = *(undefined4 *)(param_6 + 0x150);
    param_1[0x49] = *(undefined4 *)(param_6 + 0x124);
    uVar1 = *(undefined4 *)(param_6 + 0xf4);
    param_1[0x45] = *(undefined4 *)(param_6 + 0x114);
    uVar2 = *(undefined4 *)(param_6 + 0x110);
    param_1[0x3d] = uVar1;
    param_1[0x44] = uVar2;
    param_1[0x42] = *(undefined4 *)(param_6 + 0x108);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar13 = 3;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)(ZERO_MASK(iVar9)) & 8U - (char)param_5);
  *(byte *)((int)param_1 + 3) = (byte)((ulonglong)(LZCOUNT(iVar9) << 0x20) >> 0x25) ^ 1;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar10 = (int)param_1 + 1;
  param_1[2] = param_1[0x3e];
  puVar8 = param_1 + 1;
  param_1[6] = param_1[0x52];
  do {
    *(undefined1 *)(iVar10 + 4) = 0;
    puVar8[2] = 0;
    puVar8[6] = 0x40;
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  if (param_6 == 0) {
    *(undefined1 *)(param_1 + 10) = 1;
    param_1[0xc] = 0x40;
  }
  else {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_6 + 0x28);
    param_1[0xb] = param_1[0x42];
    param_1[0xc] = param_1[0x54];
    uVar1 = *(undefined4 *)(param_6 + 0xdc);
    uVar2 = *(undefined4 *)(param_6 + 0xe0);
    uVar3 = *(undefined4 *)(param_6 + 0xe4);
    param_1[0x36] = *(undefined4 *)(param_6 + 0xd8);
    param_1[0x37] = uVar1;
    param_1[0x38] = uVar2;
    param_1[0x39] = uVar3;
    uVar1 = *(undefined4 *)(param_6 + 0xec);
    param_1[0x3a] = *(undefined4 *)(param_6 + 0xe8);
    param_1[0x3b] = uVar1;
  }
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(char *)((int)param_1 + 1) = (char)param_7;
  *(undefined1 *)param_1 = 1;
  *(short *)(param_1 + 0xd) = (short)param_2;
  iVar10 = (int)param_7;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  if (iVar10 < 4) {
    if (2 < iVar10) {
      sVar12 = 1;
      sVar11 = 2;
      goto LAB_004e4b14;
    }
  }
  else if (iVar10 < 6) {
    sVar12 = 2;
    sVar11 = 2;
    goto LAB_004e4b14;
  }
  sVar11 = 1;
  sVar12 = 1;
LAB_004e4b14:
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(short *)(param_1 + 0x20) = (short)param_2 * sVar11;
  param_1[0x1f] = 0xaae4;
  *(byte *)(param_1 + 0x1e) = ((byte)(ZERO_MASK((9 - iVar9))) & 0xfc) + 0xa5;
  *(short *)((int)param_1 + 0x82) = (short)param_3 * sVar12;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  return;
}


// 0x04e4bb8 (0x184 bytes)
undefined8
FUN_004e4bb8(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined8 param_6,int *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uStack00000038;
  
  lVar3 = 0;
  iVar6 = 0;
  *param_7 = 0;
  lVar8 = (longlong)(int)param_2 * (longlong)param_5;
  if (1 < param_8) {
    lVar10 = (param_2 & 0x1fffffff) * 8;
    piVar7 = param_7 + 1;
    iVar9 = param_8 - 1;
    do {
      uVar4 = lVar3 + lVar8;
      uVar11 = uVar4 & lVar10 - 1U;
      iVar9 = iVar9 + -1;
      lVar3 = uVar4 + (lVar10 - uVar11);
      lVar3 = lVar3 + (ZERO_MASK((int)uVar11) & uVar4 - lVar3);
      iVar6 = (int)lVar3;
      *piVar7 = iVar6;
      piVar7 = piVar7 + 1;
    } while (0 < iVar9);
  }
  uVar2 = (int)lVar8 + iVar6;
  iVar6 = (int)param_2 * 0x20;
  uVar1 = uVar2 & iVar6 - 1U;
  iVar6 = uVar2 + (iVar6 - uVar1);
  uVar1 = iVar6 + ((uint)(ZERO_MASK(uVar1)) & uVar2 - iVar6);
  iVar6 = (uVar1 - (uVar1 & 0xffff)) + 0x10000;
  uStack00000038 = param_2;
  uVar5 = idol::AllocateMemAlign
                    (ZEXT48(g_pGame) + 0x7c,
                     iVar6 + ((uint)(ZERO_MASK((uVar1 & 0xffff))) & uVar1 - iVar6),
                     0x10000);
  cellGcmAddressToOffset(uVar5,param_7);
  if (1 < param_8) {
    piVar7 = param_7 + 1;
    iVar6 = param_8 - 1;
    do {
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar7 + *param_7;
      piVar7 = piVar7 + 1;
    } while (0 < iVar6);
  }
  return uVar5;
}


// 0x04e4d3c (0x620 bytes)
void FUN_004e4d3c(undefined4 *param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                 int param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  int in_stack_00000074;
  undefined4 uStack_dc;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  param_1[0x4a] = param_2;
  param_1[0x4c] = param_3;
  uVar11 = param_2 + 0x3fU & 0xffffffc0;
  uVar12 = param_3 + 0x3fU & 0xffffffc0;
  iVar10 = (int)param_5;
  param_1[0x4e] = uVar11;
  param_1[0x50] = uVar12;
  if ((iVar10 != 0) && (param_4 == 0)) {
    uVar4 = FUN_004e402c(param_5);
    FUN_004e3ee8(&local_90,param_1,uVar11,uVar12,param_5,param_8,uVar4);
    param_1[0x47] = local_90;
    param_1[0x52] = local_8c;
    uVar11 = DAT_010ef528;
    uVar12 = DAT_010ef528 + 1;
    param_1[0x43] = DAT_010ef528;
    DAT_010ef528 = uVar12;
    uVar6 = FUN_004e4bb8(param_1,CONCAT44(local_90,local_8c),CONCAT44(local_88,uStack_dc),
                         param_1[0x50],uVar11,0,param_1 + 0x3e,in_stack_00000074);
    param_1[0x3c] = uVar6;
    uVar11 = param_1[0x4e];
    uVar12 = param_1[0x50];
  }
  iVar13 = (int)param_7;
  if (iVar13 == 0) {
    param_1[0x54] = 0x40;
    param_1[0x49] = 0;
    param_1[0x3d] = 0;
    goto LAB_004e50b4;
  }
  if (param_6 != 0) {
    if (iVar13 < 2) {
      if (iVar13 < 1) {
LAB_004e5028:
        iVar7 = 1;
      }
      else {
        iVar7 = 2;
      }
    }
    else {
      if (2 < iVar13) goto LAB_004e5028;
      iVar7 = 4;
    }
    uVar12 = uVar11 * iVar7 * uVar12;
    param_1[0x54] = uVar11 * iVar7;
    param_1[0x49] = uVar12;
    param_1[0x45] = 0xffffffff;
    pvVar3 = g_pGame;
    param_1[0x44] = 0xffffffff;
    uVar4 = FUN_0050436c(pvVar3);
    iVar7 = (uVar12 - (uVar12 & 0xfffff)) + 0x100000;
    uVar6 = idol::AllocateMemAlign
                      (uVar4,iVar7 + ((uint)(ZERO_MASK((uVar12 & 0xfffff))) &
                                     uVar12 - iVar7),0x10000);
    param_1[0x3d] = uVar6;
    goto LAB_004e50b4;
  }
  if (iVar13 < 2) {
    if (iVar13 < 1) {
LAB_004e4ea4:
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    if (2 < iVar13) goto LAB_004e4ea4;
    uVar4 = 4;
  }
  FUN_004e3ee8(&local_84,param_1,uVar11,uVar12,param_7,param_8,uVar4);
  param_1[0x54] = local_80;
  param_1[0x49] = local_84;
  iVar7 = DAT_010ef52c + 1;
  param_1[0x45] = DAT_010ef52c;
  DAT_010ef52c = iVar7;
  uVar11 = DAT_010ef528;
  uVar5 = ZEXT48(g_pGame);
  uVar12 = DAT_010ef528 + 1;
  param_1[0x44] = DAT_010ef528;
  DAT_010ef528 = uVar12;
  uVar4 = idol::AllocateMemAlign(uVar5 + 0x7c,local_84,0x10000);
  cellGcmAddressToOffset(uVar4,param_1 + 0x42);
  cellGcmSetTile
            (uVar11 & 0xff,0,param_1[0x42],local_84,local_80,
             ((uint)(ZERO_MASK(iVar10)) & 0xfffffff7) + 9 & 0xff,
             (uint)param_1[0x42] >> 0x10,2);
  param_1[0x3d] = (int)uVar4;
  cellGcmSetZcull
            (param_1[0x45] & 0xff,param_1[0x42],param_1[0x4e],param_1[0x50],DAT_008fa620,2,param_8,0
            );
  DAT_008fa620 = DAT_008fa620 + param_1[0x4e] * param_1[0x50];
LAB_004e50b4:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)((int)param_1 + 2) =
       (char)param_5 + ((byte)(ZERO_MASK(iVar10)) & 8U - (char)param_5);
  if (in_stack_00000074 == 2) {
    *(undefined1 *)((int)param_1 + 3) = 0x13;
  }
  else if (in_stack_00000074 == 3) {
    *(undefined1 *)((int)param_1 + 3) = 0x17;
  }
  else if (in_stack_00000074 == 4) {
    *(undefined1 *)((int)param_1 + 3) = 0x1f;
  }
  puVar8 = param_1;
  puVar9 = param_1;
  iVar10 = in_stack_00000074;
  if (0 < in_stack_00000074) {
    do {
      uVar6 = puVar9[0x3e];
      *(char *)(puVar8 + 1) = (char)param_4;
      iVar10 = iVar10 + -1;
      uVar1 = param_1[0x52];
      puVar9[2] = uVar6;
      puVar9[6] = uVar1;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = puVar9 + 1;
    } while (0 < iVar10);
  }
  if (in_stack_00000074 < 4) {
    iVar10 = in_stack_00000074 + (int)param_1;
    puVar8 = param_1 + in_stack_00000074;
    iVar7 = 4 - in_stack_00000074;
    do {
      iVar7 = iVar7 + -1;
      *(undefined1 *)(iVar10 + 4) = 0;
      puVar8[2] = 0;
      puVar8[6] = 0x40;
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (0 < iVar7);
  }
  if (iVar13 == 0) {
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    uVar6 = 0x40;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    *(char *)(param_1 + 10) = (char)param_7;
    uVar6 = param_1[0x54];
    param_1[0xb] = param_1[0x42];
    *(char *)((int)param_1 + 0x29) = (char)param_6;
  }
  param_1[0xc] = uVar6;
  *(char *)((int)param_1 + 1) = (char)param_8;
  uVar15 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0xd) = uVar15;
  uVar14 = (undefined2)param_3;
  *(undefined2 *)((int)param_1 + 0x36) = uVar14;
  *(undefined1 *)param_1 = 1;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xa5;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x1f] = 0xaae4;
  *(undefined2 *)(param_1 + 0x20) = uVar15;
  *(undefined2 *)((int)param_1 + 0x82) = uVar14;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = param_1[0x52];
  param_1[0x23] = param_1[0x3e];
  if (1 < in_stack_00000074) {
    puVar8 = param_1 + 6;
    puVar9 = param_1 + 1;
    in_stack_00000074 = in_stack_00000074 + -1;
    do {
      *(undefined1 *)(puVar8 + 0x1e) = 0xa5;
      in_stack_00000074 = in_stack_00000074 + -1;
      *(undefined1 *)((int)puVar8 + 0x79) = 1;
      *(undefined1 *)((int)puVar8 + 0x7a) = 2;
      *(undefined1 *)((int)puVar8 + 0x7b) = 0;
      puVar8[0x1f] = 0xaae4;
      *(undefined2 *)(puVar8 + 0x20) = uVar15;
      *(undefined2 *)((int)puVar8 + 0x82) = uVar14;
      *(undefined2 *)(puVar8 + 0x21) = 1;
      *(undefined1 *)((int)puVar8 + 0x86) = 0;
      puVar8[0x22] = param_1[0x52];
      puVar2 = puVar9 + 0x3e;
      puVar9 = puVar9 + 1;
      puVar8[0x23] = *puVar2;
      puVar8 = puVar8 + 6;
    } while (0 < in_stack_00000074);
  }
  if (iVar13 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 0xa5;
    *(undefined1 *)((int)param_1 + 0xd9) = 1;
    *(undefined1 *)((int)param_1 + 0xda) = 2;
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    param_1[0x37] = 0xa993;
    *(undefined2 *)(param_1 + 0x38) = uVar15;
    *(undefined2 *)((int)param_1 + 0xe2) = uVar14;
    *(undefined2 *)(param_1 + 0x39) = 1;
    *(undefined1 *)((int)param_1 + 0xe6) = 0;
    param_1[0x3a] = param_1[0x54];
    param_1[0x3b] = param_1[0x42];
  }
  return;
}


// 0x04e535c (0xfc bytes)
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e535c(int param_1,char param_2)

{
  int iVar2;
  int32_t iVar3;
  ulonglong uVar1;
  
  if (param_2 != '\0') {
    cellGcmUnbindTile(*(uint *)(param_1 + 0x10c) & 0xff);
  }
  iVar2 = cellGcmSetTileInfo
                    (*(uint *)(param_1 + 0x10c) & 0xff,0,*(undefined4 *)(param_1 + 0xf8),
                     *(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x148),0,0,0);
  if (iVar2 == 0) {
    iVar2 = cellGcmBindTile(*(uint *)(param_1 + 0x10c) & 0xff);
    if (iVar2 == 0) {
      iVar2 = cellGcmSetDisplayBuffer
                        (*(uint *)(param_1 + 0x118) & 0xff,*(undefined4 *)(param_1 + 0xf8),
                         *(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x128),
                         *(undefined4 *)(param_1 + 0x130));
      if (iVar2 == 0) {
        uVar1 = (ulonglong)*(uint *)(param_1 + 0x148);
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x148);
      }
      else {
        iVar3 = printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar1 = (ulonglong)iVar3;
      }
    }
    else {
      iVar3 = printf("cellGcmBindTile() failed.\n");
      uVar1 = (ulonglong)iVar3;
    }
  }
  else {
    iVar3 = printf("cellGcmSetTileInfo() failed.\n");
    uVar1 = (ulonglong)iVar3;
  }
  return uVar1;
}


// 0x04e5458 (0x90 bytes)
undefined8 FUN_004e5458(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (param_2 - (param_2 & 0xfffff)) + 0x100000;
  uVar1 = idol::AllocateMemAlign
                    (ZEXT48(g_pGame) + 0x7c,
                     iVar2 + ((uint)(ZERO_MASK((param_2 & 0xfffff))) &
                             param_2 - iVar2),0x10000);
  cellGcmAddressToOffset(uVar1,param_3);
  return uVar1;
}


// 0x04e54e8 (0x324 bytes)
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e54e8(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                      undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  int32_t iVar7;
  ulonglong uVar5;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_44;
  undefined4 local_40;
  
  param_1[0x4a] = param_2;
  param_1[0x4e] = param_2 + 0x3fU & 0xffffffc0;
  param_1[0x50] = param_3 + 0x3fU & 0xffffffc0;
  param_1[0x4c] = param_3;
  param_1[0x4b] = param_4;
  param_1[0x4d] = param_5;
  param_1[0x4f] = param_4 + 0x3fU & 0xffffffc0;
  param_1[0x51] = param_5 + 0x3fU & 0xffffffc0;
  iVar6 = DAT_010ef530 + 1;
  param_1[0x46] = DAT_010ef530;
  DAT_010ef530 = iVar6;
  uVar1 = param_1[0x4e];
  uVar2 = param_1[0x50];
  uVar4 = FUN_004e402c(param_6);
  FUN_004e3ee8(&local_50,param_1,uVar1,uVar2,param_6,0,uVar4);
  param_1[0x52] = local_4c;
  param_1[0x47] = local_50;
  iVar6 = DAT_010ef528 + 1;
  param_1[0x43] = DAT_010ef528;
  DAT_010ef528 = iVar6;
  uVar1 = param_1[0x4f];
  uVar2 = param_1[0x51];
  uVar4 = FUN_004e402c(param_6);
  FUN_004e3ee8(&local_44,param_1,uVar1,uVar2,param_6,0,uVar4);
  uVar3 = local_44 +
          ((uint)((longlong)((ulonglong)local_44 - (ulonglong)(uint)param_1[0x47]) >> 0x3f) &
          param_1[0x47] - local_44);
  param_1[0x48] = local_44;
  param_1[0x53] = local_40;
  iVar6 = (uVar3 - (uVar3 & 0xfffff)) + 0x100000;
  uVar4 = idol::AllocateMemAlign
                    (ZEXT48(g_pGame) + 0x7c,
                     iVar6 + ((uint)(ZERO_MASK((uVar3 & 0xfffff))) & uVar3 - iVar6)
                     ,0x10000);
  cellGcmAddressToOffset(uVar4,param_1 + 0x3e);
  param_1[0x3c] = (int)uVar4;
  *param_1 = 0;
  iVar6 = (int)param_1 + 1;
  param_1[1] = 0;
  puVar8 = param_1 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar9 = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_1[0x3e];
  do {
    *(undefined1 *)(iVar6 + 4) = 0;
    puVar8[2] = 0;
    puVar8[6] = 0x40;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0x40;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = 0;
  *(short *)(param_1 + 0xd) = (short)param_2;
  *(short *)((int)param_1 + 0x36) = (short)param_3;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  iVar6 = cellGcmSetTileInfo
                    (param_1[0x43] & 0xff,0,param_1[0x3e],param_1[0x47],param_1[0x52],0,0,0);
  if (iVar6 == 0) {
    iVar6 = cellGcmBindTile(param_1[0x43] & 0xff);
    if (iVar6 == 0) {
      iVar6 = cellGcmSetDisplayBuffer
                        (param_1[0x46] & 0xff,param_1[0x3e],param_1[0x52],param_1[0x4a],
                         param_1[0x4c]);
      if (iVar6 == 0) {
        uVar5 = (ulonglong)(uint)param_1[0x52];
        param_1[6] = param_1[0x52];
      }
      else {
        iVar7 = printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar5 = (ulonglong)iVar7;
      }
    }
    else {
      iVar7 = printf("cellGcmBindTile() failed.\n");
      uVar5 = (ulonglong)iVar7;
    }
  }
  else {
    iVar7 = printf("cellGcmSetTileInfo() failed.\n");
    uVar5 = (ulonglong)iVar7;
  }
  return uVar5;
}


// 0x04e580c (0x228 bytes)
void FUN_004e580c(undefined4 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  undefined2 uVar7;
  
  iVar6 = (int)param_2;
  param_1[0x4a] = iVar6;
  param_1[0x4e] = iVar6;
  param_1[0x4c] = iVar6;
  param_1[0x50] = iVar6;
  iVar5 = cellGcmGetTiledPitchSize((param_2 & 0x3fffffff) << 2);
  param_1[0x54] = iVar5;
  param_1[0x49] = iVar5 * (iVar6 + 0x1fU & 0xffffffe0) + 0xffff & 0xffff0000;
  iVar5 = DAT_010ef528 + 1;
  param_1[0x44] = DAT_010ef528;
  DAT_010ef528 = iVar5;
  uVar1 = param_1[0x49];
  iVar5 = (uVar1 - (uVar1 & 0xfffff)) + 0x100000;
  uVar4 = idol::AllocateMemAlign
                    (ZEXT48(g_pGame) + 0x7c,
                     iVar5 + ((uint)(ZERO_MASK((uVar1 & 0xfffff))) & uVar1 - iVar5)
                     ,0x10000);
  cellGcmAddressToOffset(uVar4,param_1 + 0x42);
  param_1[0x3d] = (int)uVar4;
  cellGcmSetTile(param_1[0x44] & 0xff,0,param_1[0x42],param_1[0x49],param_1[0x54],10,0,2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[6] = 0x40;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[7] = 0x40;
  *(undefined1 *)((int)param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[8] = 0x40;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[9] = 0x40;
  uVar2 = param_1[0x42];
  *(undefined1 *)(param_1 + 10) = 2;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  uVar3 = param_1[0x54];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 1) = 0;
  uVar7 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0xd) = uVar7;
  *(undefined2 *)((int)param_1 + 0x36) = uVar7;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0xb0;
  *(undefined1 *)((int)param_1 + 0x79) = 1;
  *(undefined1 *)((int)param_1 + 0x7a) = 2;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  param_1[0x1f] = 0xaae4;
  *(undefined2 *)(param_1 + 0x20) = uVar7;
  *(undefined2 *)((int)param_1 + 0x82) = uVar7;
  *(undefined2 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  param_1[0x22] = uVar3;
  param_1[0x23] = uVar2;
  *(undefined1 *)(param_1 + 0x36) = 0xa5;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  *(undefined1 *)((int)param_1 + 0xda) = 2;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  param_1[0x37] = 0xa993;
  *(short *)(param_1 + 0x38) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0xe2) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar2;
  return;
}


// 0x04e5a34 (0x228 bytes)
void FUN_004e5a34(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar2 = *(uint *)(param_2 + 0x128) >> 1;
  param_1[0x4a] = uVar2;
  uVar2 = uVar2 + 0x3f & 0xffffffc0;
  uVar3 = *(uint *)(param_2 + 0x130) >> 1;
  param_1[0x4e] = uVar2;
  uVar4 = uVar3 + 0x3f & 0xffffffc0;
  param_1[0x4c] = uVar3;
  param_1[0x50] = uVar4;
  uVar5 = FUN_004e402c(8);
  FUN_004e3ee8(&local_40,param_1,uVar2,uVar4,8,4,uVar5);
  uVar8 = *(undefined4 *)(param_2 + 0xf0);
  param_1[0x47] = local_40;
  param_1[0x52] = local_3c;
  uVar6 = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x3c] = uVar8;
  param_1[0x3e] = uVar6;
  uVar8 = 0;
  uVar10 = 0;
  if (*(int *)(param_2 + 0x124) != 0) {
    FUN_004e3ee8(&local_34,param_1,param_1[0x4e],param_1[0x50],2,4,4);
    uVar6 = param_1[0x3e];
    uVar8 = local_30;
    uVar10 = local_34;
  }
  param_1[0x54] = uVar8;
  param_1[0x49] = uVar10;
  uVar8 = *(undefined4 *)(param_2 + 0xf4);
  param_1[0x45] = *(undefined4 *)(param_2 + 0x114);
  uVar10 = *(undefined4 *)(param_2 + 0x108);
  param_1[0x3d] = uVar8;
  *param_1 = 0;
  param_1[0x42] = uVar10;
  param_1[1] = 0;
  iVar9 = (int)param_1 + 1;
  param_1[3] = 0;
  lVar11 = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((int)param_1 + 2) = 8;
  *(undefined1 *)((int)param_1 + 3) = 1;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[6] = local_3c;
  puVar7 = param_1 + 1;
  do {
    *(undefined1 *)(iVar9 + 4) = 0;
    puVar7[2] = 0;
    iVar9 = iVar9 + 1;
    puVar7[6] = 0x40;
    puVar7 = puVar7 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x28);
  uVar8 = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = param_1[0x54];
  param_1[0xb] = uVar8;
  uVar1 = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((int)param_1 + 0x29) = uVar1;
  *(undefined1 *)((int)param_1 + 1) = 4;
  *(short *)(param_1 + 0xd) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0x36) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0xa5;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  *(undefined1 *)((int)param_1 + 0xda) = 2;
  *(undefined1 *)((int)param_1 + 0xdb) = 0;
  param_1[0x37] = 0xa993;
  *(short *)(param_1 + 0x38) = (short)param_1[0x4a];
  *(short *)((int)param_1 + 0xe2) = (short)param_1[0x4c];
  *(undefined2 *)(param_1 + 0x39) = 1;
  *(undefined1 *)((int)param_1 + 0xe6) = 0;
  param_1[0x3a] = param_1[0x54];
  param_1[0x3b] = param_1[0x42];
  return;
}


// 0x04e5c5c (0x78 bytes)
void FUN_004e5c5c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x150) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  return;
}


// 0x04e5cd4 (0x64 bytes)
undefined8 FUN_004e5cd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 in_r8;
  
  uVar1 = idol::AllocateMemAlign
                    (ZEXT48(g_pGame) + 0x7c,(int)((ulonglong)param_2 >> 0x20),0x10000);
  cellGcmAddressToOffset(uVar1,in_r8);
  return uVar1;
}


// 0x04e5d38 (0x38 bytes)
undefined8 FUN_004e5d38(int param_1)

{
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if (param_1 < 6) {
    return 2;
  }
  return 1;
}


// 0x04e5d70 (0x40 bytes)
undefined8 FUN_004e5d70(int param_1)

{
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else {
    if (param_1 < 4) {
      return 1;
    }
    if (param_1 < 6) {
      return 2;
    }
  }
  return 1;
}


// 0x04e5db0 (0x190 bytes)
// strings: 006593cc: 'cellGcmSetTileInfo() failed.\n' | 006593ec: 'cellGcmBindTile() failed.\n' | 0065940c: 'cellGcmSetDisplayBuffer() failed.\n'

ulonglong FUN_004e5db0(undefined4 *param_1,int param_2,undefined2 param_3)

{
  int iVar2;
  int32_t iVar3;
  ulonglong uVar1;
  
  cellGcmUnbindTile(param_1[0x43] & 0xff);
  iVar2 = cellGcmSetTileInfo
                    (param_1[0x43] & 0xff,0,param_1[0x3e],param_1[0x48],param_1[0x53],0,
                     (uint)param_1[0x3e] >> 0x10,0);
  if (iVar2 == 0) {
    iVar2 = cellGcmBindTile(param_1[0x43] & 0xff);
    if (iVar2 == 0) {
      iVar2 = cellGcmSetDisplayBuffer
                        (param_1[0x46] & 0xff,param_1[0x3e],param_1[0x53],param_1[0x4b],
                         param_1[0x4d]);
      if (iVar2 == 0) {
        param_1[6] = param_1[0x53];
        param_1[0xf] = *param_1;
        param_1[0x11] = param_1[2];
        param_1[0x10] = param_1[1];
        param_1[0x12] = param_1[3];
        param_1[0x13] = param_1[4];
        param_1[0x14] = param_1[5];
        param_1[0x16] = param_1[7];
        param_1[0x17] = param_1[8];
        param_1[0x18] = param_1[9];
        param_1[0x15] = param_1[6];
        uVar1 = (ulonglong)(uint)param_1[0xc];
        param_1[0x19] = param_1[10];
        param_1[0x1a] = param_1[0xb];
        param_1[0x1b] = param_1[0xc];
        param_1[0x1d] = param_1[0xe];
        param_1[0x1c] = param_1[0xd];
        param_1[0x11] = param_1[0x3e] + param_2;
        *(undefined2 *)((int)param_1 + 0x76) = param_3;
      }
      else {
        iVar3 = printf("cellGcmSetDisplayBuffer() failed.\n");
        uVar1 = (ulonglong)iVar3;
      }
    }
    else {
      iVar3 = printf("cellGcmBindTile() failed.\n");
      uVar1 = (ulonglong)iVar3;
    }
  }
  else {
    iVar3 = printf("cellGcmSetTileInfo() failed.\n");
    uVar1 = (ulonglong)iVar3;
  }
  return uVar1;
}


// 0x04e5f40 (0xd4 bytes)
// strings: 00659430: 'MainMem' | 00659438: 'From Startup Heap'

void FUN_004e5f40(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c [3];
  
  *(undefined4 *)(param_1 + 0xc4) = DAT_00902e9c;
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*g_pHWSystem + 0x14))(g_pHWSystem,local_1c,&local_20);
  param_1 = param_1 + 0x58;
  FUN_004fe39c(param_1,local_1c[0],local_20,"MainMem",1,0);
  FUN_004fe778(param_1,"From Startup Heap");
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*g_pHWSystem + 0x18))(g_pHWSystem,param_1);
  return;
}


// 0x04e6014 (0x24 bytes)
void FUN_004e6014(void)

{
  sys_time_get_system_time();
  return;
}


// 0x04e6038 (0x1bc bytes)
// strings: 0065944c: 'cellSysutilGetSystemParamInt() get language error 0x%x\n'

/* WARNING: Removing unreachable block (ram,0x004e61bc) */
/* WARNING: Removing unreachable block (ram,0x004e61b0) */
/* WARNING: Removing unreachable block (ram,0x004e60dc) */
/* WARNING: Removing unreachable block (ram,0x004e60e4) */
/* WARNING: Removing unreachable block (ram,0x004e61c8) */
/* WARNING: Removing unreachable block (ram,0x004e60ec) */
/* WARNING: Removing unreachable block (ram,0x004e60f4) */
/* WARNING: Removing unreachable block (ram,0x004e60fc) */
/* WARNING: Removing unreachable block (ram,0x004e61a4) */
/* WARNING: Removing unreachable block (ram,0x004e6104) */
/* WARNING: Removing unreachable block (ram,0x004e610c) */
/* WARNING: Removing unreachable block (ram,0x004e618c) */
/* WARNING: Removing unreachable block (ram,0x004e6114) */
/* WARNING: Removing unreachable block (ram,0x004e611c) */
/* WARNING: Removing unreachable block (ram,0x004e6180) */
/* WARNING: Removing unreachable block (ram,0x004e6198) */
/* WARNING: Removing unreachable block (ram,0x004e6120) */
/* WARNING: Removing unreachable block (ram,0x004e6138) */
/* WARNING: Removing unreachable block (ram,0x004e6150) */
/* WARNING: Removing unreachable block (ram,0x004e6168) */
/* WARNING: Removing unreachable block (ram,0x004e615c) */
/* WARNING: Removing unreachable block (ram,0x004e6144) */
/* WARNING: Removing unreachable block (ram,0x004e612c) */
/* WARNING: Removing unreachable block (ram,0x004e6174) */

int FUN_004e6038(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<8> local_10;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  if (iVar2 == -1) {
    uVar1 = cellSysutilGetSystemParamInt(0x111,local_10);
    if ((int)uVar1 < 0) {
      print_tty("cellSysutilGetSystemParamInt() get language error 0x%x\n",uVar1);
    }
    iVar2 = 1;
    *(undefined4 *)(param_1 + 0xcc) = 1;
  }
  return iVar2;
}


// 0x04e61f4 (0x1d4 bytes)
// strings: 00659488: '1080' (raw) | 00659490: '1600x1080' | 006594a0: '1440x1080' | 006594b0: '1280x1080' | 006594c0: '960x1080' | 006594e8: 'I - ' (raw) | 006594f0: 'P - ' (raw) | 006594f8: '%dx%d - ' | 00659508: '4:3\n' (raw) | 00659510: '16:9\n'

void FUN_004e61f4(ulonglong param_1)

{
  uint uVar1;
  char cVar2;
  ushort local_20;
  ushort local_1e;
  
  cVar2 = (char)(param_1 >> 0x38);
  if (cVar2 == '\r') {
    print_tty2("960x1080");
  }
  else if (cVar2 == '\f') {
    print_tty2("1280x1080");
  }
  else if (cVar2 == '\v') {
    print_tty2("1440x1080");
  }
  else if (cVar2 == '\n') {
    print_tty2("1600x1080");
  }
  else if (cVar2 == '\x05') {
    print_tty2("576");
  }
  else if (cVar2 == '\x04') {
    print_tty2("480");
  }
  else if (cVar2 == '\x02') {
    print_tty2("720");
  }
  else if (cVar2 == '\x01') {
    print_tty2("1080");
  }
  if ((param_1 & 0xff000000000000) == 0) {
    print_tty2("I - ");
  }
  else if (((ushort)(param_1 >> 0x30) & 0xff) < 2) {
    print_tty2("P - ");
  }
  cellVideoOutGetResolution(param_1 >> 0x38,&local_20);
  print_tty2("%dx%d - ",(ulonglong)local_20,(ulonglong)local_1e);
  uVar1 = (uint)(param_1 >> 0x20) & 0xff;
  if (uVar1 < 2) {
    if ((param_1 & 0xff00000000) != 0) {
      print_tty2("4:3\n");
    }
  }
  else if (uVar1 < 3) {
    print_tty2("16:9\n");
  }
  return;
}


// 0x04e63c8 (0x8 bytes)
undefined8 FUN_004e63c8(void)

{
  return 0xac00000;
}


// 0x04e63d0 (0x8 bytes)
undefined8 FUN_004e63d0(void)

{
  return 0x80000;
}


// 0x04e63d8 (0x54 bytes)
// strings: 00659518: '~~~~~~~~~~~~~~~~~~~mem_info - total %9d, available %9d - %s ~~~~~~~~~~~~~~~~~~~~~~\n'

int32_t FUN_004e63d8(undefined8 param_1,undefined8 param_2)

{
  int32_t iVar1;
  uint local_10;
  uint local_c;
  
  syscall_sys_memory_get_user_memory_size(&local_10);
  iVar1 = printf("~~~~~~~~~~~~~~~~~~~mem_info - total %9d, available %9d - %s ~~~~~~~~~~~~~~~~~~~~~~\n"
                       ,(ulonglong)local_10,(ulonglong)local_c,param_2);
  return iVar1;
}


// 0x04e642c (0x10 bytes)
undefined4 FUN_004e642c(void)

{
  return DAT_0159b388;
}


// 0x04e643c (0x78 bytes)
// strings: 0065956c: 'GetHeap'

void FUN_004e643c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1,"GetHeap");
  iVar1 = param_1[1];
  *param_2 = param_1[2];
  *param_3 = iVar1;
  return;
}


// 0x04e64b4 (0x1d8 bytes)
// strings: 00659594: "Couldn't initialize SPU units.\n" | 00659574: 'MainSpurs' | 006595b4: 'ERROR: cellSpursEventFlagInitializeIWL failed: 0x%x\n' | 006595ec: 'ERROR: cellSpursEventFlagAttachLv2EventQueue failed: 0x%x\n' | 00659584: 'GhettoSpurs'

void FUN_004e64b4(void)

{
  int iVar2;
  size_t sVar3;
  undefined8 uVar1;
  undefined8 local_230;
  GPiece<512> auStack_228;
  int local_28 [4];
  
  iVar2 = syscall_sys_ppu_thread_get_priority(6,0);
  if (iVar2 == 0) {
    cellSysmoduleLoadModule(10);
    sys_ppu_thread_get_id(&local_230);
    syscall_sys_ppu_thread_get_priority(local_230,local_28);
    _cellSpursAttributeInitialize(auStack_228,2,0x330000,DAT_008fa628,0x7f,local_28[0] + -2,0)
    ;
    sVar3 = strlen("MainSpurs");
    cellSpursAttributeSetNamePrefix(auStack_228,"MainSpurs",sVar3);
    cellSpursInitializeWithAttribute(PTR_DAT_008fa624,auStack_228);
    uVar1 = _cellSpursEventFlagInitialize(PTR_DAT_008fa624,0,&DAT_01111580,0,1);
    if ((int)uVar1 != 0) {
      print_tty("ERROR: cellSpursEventFlagInitializeIWL failed: 0x%x\n",uVar1);
    }
    uVar1 = cellSpursEventFlagAttachLv2EventQueue(&DAT_01111580);
    if ((int)uVar1 != 0) {
      print_tty("ERROR: cellSpursEventFlagAttachLv2EventQueue failed: 0x%x\n",uVar1);
    }
    _cellSpursAttributeInitialize(auStack_228,2,0x330000,1,0x80,local_28[0] + -1,0);
    sVar3 = strlen("GhettoSpurs");
    cellSpursAttributeSetNamePrefix(auStack_228,"GhettoSpurs",sVar3);
    cellSpursInitializeWithAttribute(PTR_DAT_008fa62c,auStack_228);
  }
  else {
    FUN_004ffd4c(4,"Couldn\'t initialize SPU units.\n");
  }
  return;
}


// 0x04e668c (0xa8 bytes)
// strings: 00659628: 'ERROR: InitNetwork failed\n' | 00659658: '*** init_network succeeded! ***\n'

/* WARNING: Removing unreachable block (ram,0x004e66d0) */
/* WARNING: Removing unreachable block (ram,0x004e6704) */
/* WARNING: Removing unreachable block (ram,0x004e66f0) */

void FUN_004e668c(void)

{
  GPiece<16> local_20;
  
  cellNetCtlInit();
  cellNetCtlGetState(local_20);
  return;
}


// 0x04e6734 (0x3c bytes)
// strings: 0065967c: 'Shutting down SPURS\n'

void FUN_004e6734(void)

{
  print_tty2("Shutting down SPURS\n");
  cellSpursFinalize(PTR_DAT_008fa624);
  return;
}


// 0x04e6770 (0x14c bytes)
// strings: 00659694: 'sys_mmapper_allocate_memory() failed: %d\n' | 006596c4: 'sys_mmapper_map_memory() failed: %d\n'

void FUN_004e6770(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0xc4) != '\x01') {
    uVar2 = *(uint *)(param_1 + 0x104);
    uVar5 = 0;
    uVar3 = 0;
    iVar4 = param_1;
    if (uVar2 != 0) {
      do {
        uVar1 = sys_mmapper_allocate_memory
                          (*(undefined4 *)(param_1 + 0x108),0x400,iVar4 + 0xd0);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_memory() failed: %d\n",uVar1);
        }
        uVar3 = uVar3 + 1;
        uVar2 = *(uint *)(param_1 + 0x104);
        iVar4 = iVar4 + 4;
      } while (uVar3 < uVar2);
    }
    iVar4 = param_1;
    if (uVar2 != 0) {
      do {
        uVar1 = sys_mmapper_map_memory
                          (*(int *)(param_1 + 200) + *(int *)(param_1 + 0x100) +
                           *(int *)(param_1 + 0x108) * uVar5,*(undefined4 *)(iVar4 + 0xd0),0x40000);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_map_memory() failed: %d\n",uVar1);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0x104));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}


// 0x04e68bc (0x22c bytes)
// strings: 006596ec: 'Allocating a new 256MB address space.\n' | 00659714: 'sys_mmapper_allocate_address() failed: %d\n' | 00659744: 'Allocating physical memory blocks.\n' | 00659694: 'sys_mmapper_allocate_memory() failed: %d\n' | 0065976c: 'Mapping the physical memory blocks to the address space.\n' | 006596c4: 'sys_mmapper_map_memory() failed: %d\n'

void FUN_004e68bc(u8 *param_1,int param_2,int param_3,int param_4)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  GPiece<4> auStack_20;
  uint local_1c;
  
  *(int *)(param_1 + 0x104) = param_2;
  *(int *)(param_1 + 0x108) = (int)((param_3 & 0xffffffff) << 0x14);
  printf("Allocating a new 256MB address space.\n");
  iVar2 = syscall_sys_mmapper_allocate_address(0x10000000,0x400,0,param_1 + 200);
  if (iVar2 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_address() failed: %d\n",iVar2);
  }
  printf("Allocating physical memory blocks.\n");
  syscall_sys_mmapper_allocate_address(auStack_20);
  uVar5 = (ulonglong)local_1c & 0xfff00000;
  uVar5 = (uVar5 + ((longlong)(0x10000000 - uVar5) >> 0x3f & 0x10000000 - uVar5) +
          (param_4 & 0xfff) * -0x100000) - (longlong)param_2 * (longlong)*(int *)(param_1 + 0x108);
  iVar2 = (int)uVar5;
  *(int *)(param_1 + 0x100) = iVar2;
  uVar1 = sys_mmapper_allocate_memory(uVar5 & 0xffffffff,0x400,param_1 + 0xcc);
  if ((int)uVar1 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_allocate_memory() failed: %d\n",uVar1);
  }
  printf("Mapping the physical memory blocks to the address space.\n");
  uVar1 = sys_mmapper_map_memory
                    (*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc),0x40000);
  if ((int)uVar1 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_mmapper_map_memory() failed: %d\n",uVar1);
  }
  lVar6 = 3;
  iVar3 = param_1;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    *(undefined1 *)(iVar4 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined1 *)(iVar4 + 0x111) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined1 *)(iVar4 + 0x112) = 0;
    *(undefined4 *)(iVar3 + 0x128) = 0;
    *(undefined1 *)(iVar4 + 0x113) = 0;
    iVar3 = iVar3 + 0x10;
    iVar4 = iVar4 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)(param_1 + 0xc4) = 0;
  FUN_004e6770(param_1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 200);
  *(int *)(param_1 + 4) = iVar2 + *(int *)(param_1 + 0x108) * param_2;
  cellSysmoduleLoadModule(0x3e);
  cellSysmoduleLoadModule(0x33);
  cellSysmoduleLoadModule(0x45);
  cellSysmoduleLoadModule(0x3a);
  cellSysmoduleLoadModule(9);
  cellSysmoduleLoadModule(0x1e);
  return;
}


// 0x04e6ae8 (0x158 bytes)
// strings: 006597a8: 'Unmapping the temporary memory blocks from the address space.\n' | 006597e8: 'sys_mmapper_unmap_memory() failed: %d\n' | 00659810: 'Freeing the temporary physical memory block.\n' | 00659840: 'sys_mmapper_free_memory() failed: %d\n'

void FUN_004e6ae8(int param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  GPiece<16> auStack_40;
  
  if (*(char *)(param_1 + 0xc4) != '\0') {
    printf("Unmapping the temporary memory blocks from the address space.\n");
    uVar2 = 0;
    if (*(int *)(param_1 + 0x104) != 0) {
      do {
        uVar1 = sys_mmapper_unmap_memory
                          (*(int *)(param_1 + 200) + *(int *)(param_1 + 0x100) +
                           *(int *)(param_1 + 0x108) * uVar2,auStack_40);
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_unmap_memory() failed: %d\n",uVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x104));
    }
    printf("Freeing the temporary physical memory block.\n");
    uVar2 = 0;
    iVar3 = param_1;
    if (*(int *)(param_1 + 0x104) != 0) {
      do {
        uVar1 = sys_mmapper_free_memory(*(undefined4 *)(iVar3 + 0xd0));
        if ((int)uVar1 != 0) {
          FUN_005ccf90(&DAT_00905738,"sys_mmapper_free_memory() failed: %d\n",uVar1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(uint *)(param_1 + 0x104));
    }
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  return;
}


// 0x04e6c40 (0x1b0 bytes)
// strings: 00659868: 'Creating a memory container.\n' | 00659888: 'sys_memory_container_create() failed: %d\n'

undefined4 FUN_004e6c40(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  uVar1 = *(uint *)(param_1 + 0x104);
  uVar7 = ((param_2 + *(uint *)(param_1 + 0x108)) - 1) / *(uint *)(param_1 + 0x108);
  uVar5 = uVar7;
  iVar6 = param_1;
  if (uVar1 != 0) {
    do {
      if (*(char *)(iVar6 + 0x110) == '\0') {
        uVar2 = uVar8;
        iVar3 = iVar6;
        if (uVar1 < uVar5) {
          return 0;
        }
        for (; (uVar2 < uVar5 && (*(char *)(iVar3 + 0x110) == '\0')); iVar3 = iVar3 + 1) {
          uVar2 = uVar2 + 1;
        }
        if (uVar2 == uVar5) {
          if ((int)uVar8 < 0) {
            return 0;
          }
          uVar7 = uVar8 + uVar7;
          if (uVar1 < uVar7) {
            return 0;
          }
          printf("Creating a memory container.\n");
          iVar6 = param_1 + uVar8 * 4;
          syscall();
          if (iVar6 + 0x11c == 0) {
            if (uVar8 < uVar7) {
              iVar4 = uVar8 + param_1;
              iVar9 = uVar7 - uVar8;
              iVar3 = iVar6;
              do {
                *(undefined1 *)(iVar4 + 0x110) = 1;
                iVar9 = iVar9 + -1;
                iVar4 = iVar4 + 1;
                *(undefined4 *)(iVar3 + 0x11c) = *(undefined4 *)(uVar8 * 4 + param_1 + 0x11c);
                iVar3 = iVar3 + 4;
              } while (0 < iVar9);
            }
            return *(undefined4 *)(iVar6 + 0x11c);
          }
          FUN_005ccf90(&DAT_00905738,"sys_memory_container_create() failed: %d\n",iVar6 + 0x11c);
          return 0;
        }
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (uVar8 < uVar1);
  }
  return 0;
}


// 0x04e6df0 (0xbc bytes)
// strings: 006598b4: 'Destroying a memory container.\n' | 006598d4: 'sys_memory_container_destroy() failed: %d\n'

void FUN_004e6df0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x104);
  uVar2 = 0;
  iVar3 = param_1;
  iVar4 = param_1;
  if (uVar1 != 0) {
    do {
      if ((*(char *)(iVar4 + 0x110) != '\0') && (*(int *)(iVar3 + 0x11c) == param_2)) {
        *(undefined1 *)(iVar4 + 0x110) = 0;
        uVar1 = *(uint *)(param_1 + 0x104);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (uVar2 < uVar1);
  }
  printf("Destroying a memory container.\n");
  syscall();
  if (param_2 != 0) {
    FUN_005ccf90(&DAT_00905738,"sys_memory_container_destroy() failed: %d\n",param_2);
  }
  return;
}


// 0x04e6eac (0x12c bytes)
// strings: 006599d8: '### CELL_SAVEDATA_ERROR_BROKEN Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n' | 00659a40: '### CELL_SAVEDATA_ERROR_FAILURE Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n'

int32_t FUN_004e6eac(int param_1,int param_2)

{
  int32_t iVar1;
  
  if (param_1 < -0x7ffd4bfd) {
    if (param_1 < -0x7ffd4bff) {
      return param_2;
    }
    if (-0x7ffd4bff < param_1) {
      *(undefined4 *)(param_2 + 0x468) = 0xc;
      return param_2;
    }
  }
  else if (param_1 < -0x7ffd4bf9) {
    if (param_1 < -0x7ffd4bfb) {
      if (param_1 < -0x7ffd4bfc) {
        *(undefined4 *)(param_2 + 0x468) = 0xc;
        return param_2;
      }
    }
    else if (param_1 < -0x7ffd4bfa) {
      return param_2;
    }
  }
  else {
    if (param_1 < -0x7ffd4bf7) {
      if (-0x7ffd4bf9 < param_1) {
        return param_2;
      }
      *(undefined4 *)(param_2 + 0x468) = 0xc;
      iVar1 = printf(
                          "### CELL_SAVEDATA_ERROR_FAILURE Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n"
                          );
      return iVar1;
    }
    if (-0x7ffd4bf4 < param_1) {
      return param_2;
    }
  }
  *(undefined4 *)(param_2 + 0x468) = 0xc;
  iVar1 = printf(
                      "### CELL_SAVEDATA_ERROR_BROKEN Error Occurred!  Setting ErrorState to PS3_SAVETYPE_ERR_CORRUPTION\n"
                      );
  return iVar1;
}


// 0x04e6fd8 (0xcc bytes)
// strings: 00659aa4: 'CELL_SAVEDATA_ERROR_NOSPACE Occurred\n' | 00659acc: 'PS3_SAVETYPE_ERR_NO_SPACE Occurred\n'

void FUN_004e6fd8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_3;
  if (*param_2 != 0) {
    if (*param_2 == 1) {
      g_memcardSaveSysState = 6;
      iVar2 = g_memcardSaveSysState;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x468);
      iVar2 = g_memcardSaveSysState;
      if (iVar1 < 0xc) {
        if (10 < iVar1) {
          printf("PS3_SAVETYPE_ERR_NO_SPACE Occurred\n");
          *param_2 = -0x7ffd4bfb;
          g_memcardSaveSysState = 0xb;
          iVar2 = g_memcardSaveSysState;
        }
      }
      else if (iVar1 < 0xd) {
        printf("CELL_SAVEDATA_ERROR_NOSPACE Occurred\n");
        *param_2 = -0x7ffd4bfa;
        g_memcardSaveSysState = 0xc;
        iVar2 = g_memcardSaveSysState;
      }
    }
  }
  g_memcardSaveSysState = iVar2;
  return;
}


// 0x04e70a4 (0xcc bytes)
// strings: 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n'

void FUN_004e70a4(uint *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_1);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_1[1]);
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      uVar1 = (ulonglong)param_1[2] + uVar2 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar2,uVar1 & 0xffffffff,
                 uVar1 + 0x20 & 0xffffffff);
      uVar2 = uVar2 + 1 & 0xffffffff;
    } while (uVar2 < param_1[1]);
  }
  return;
}


// 0x04e7170 (0x218 bytes)
// strings: 00659bb0: 'Dump CellSaveDataStatGet in CellSaveDataStatCallback--------------------\n' | 00659c00: '\tget->dir.dirName : %s\n' | 00659c18: '\tget->isNewData: %d\n' | 00659c30: '\tget->hddFreeSizeKB 0x%x\n' | 00659c50: '\tget->sizeKB : 0x%x\n' | 00659c68: '\tget->sysSizeKB : 0x%x\n' | 00659c80: '\tget->bind : %d\n' | 00659c98: '\tget->dir : dirName : %s  atime : %lld mtime : %lld ctime : %lld\n' | 00659ce0: '\tget->fileListNum: %d\n' | 00659cf8: '\t%3d  FILENAME: %s   type : %d  size : %lld  atime : %lld mtime : %lld ctime : %lld\n' | 00659d50: '\tget->fileNum: %d\n' | 00659d70: '\tPARAM.SFO:TITLE: %s\n' | 00659d88: '\tPARAM.SFO:SUB_TITLE: %s\n' | 00659da8: '\tPARAM.SFO:DETAIL: %s\n' | 00659dc0: '\tPARAM.SFO:ATTRIBUTE: %d\n' | 00659de0: '\tPARAM.SFO:LIST_PARAM: %s\n'

void FUN_004e7170(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  print_tty2("Dump CellSaveDataStatGet in CellSaveDataStatCallback--------------------\n");
  print_tty2("\tget->dir.dirName : %s\n",param_1 + 8);
  print_tty2("\tget->isNewData: %d\n",(ulonglong)(uint)param_1[1]);
  print_tty2("\tget->hddFreeSizeKB 0x%x\n",*param_1);
  print_tty2("\tget->sizeKB : 0x%x\n",param_1[0x195]);
  print_tty2("\tget->sysSizeKB : 0x%x\n",param_1[0x196]);
  print_tty2("\tget->bind : %d\n",(ulonglong)(uint)param_1[0x194]);
  print_tty2("\tget->dir : dirName : %s  atime : %lld mtime : %lld ctime : %lld\n",param_1 + 8,
             *(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6))
  ;
  print_tty2("\tget->fileListNum: %d\n",(ulonglong)(uint)param_1[0x198]);
  uVar2 = 0;
  if (param_1[0x198] != 0) {
    do {
      iVar1 = param_1[0x199] + uVar2 * 0x38;
      print_tty2("\t%3d  FILENAME: %s   type : %d  size : %lld  atime : %lld mtime : %lld ctime : %lld\n"
                 ,uVar2,iVar1 + 0x28,(ulonglong)*(uint *)(param_1[0x199] + uVar2 * 0x38),
                 *(undefined8 *)(iVar1 + 8),*(undefined8 *)(iVar1 + 0x10),
                 *(undefined8 *)(iVar1 + 0x18),*(undefined8 *)(iVar1 + 0x20));
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x198]);
  }
  print_tty2("\tget->fileNum: %d\n",(ulonglong)(uint)param_1[0x197]);
  print_tty2("\n");
  print_tty2("\tPARAM.SFO:TITLE: %s\n",param_1 + 0x10);
  print_tty2("\tPARAM.SFO:SUB_TITLE: %s\n",param_1 + 0x30);
  print_tty2("\tPARAM.SFO:DETAIL: %s\n",param_1 + 0x50);
  print_tty2("\tPARAM.SFO:ATTRIBUTE: %d\n",(ulonglong)(uint)param_1[0x150]);
  print_tty2("\tPARAM.SFO:LIST_PARAM: %s\n",param_1 + 0x152);
  print_tty2("\n");
  return;
}


// 0x04e7388 (0x7c bytes)
void FUN_004e7388(u8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_PTR_006618d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  param_1[0x118] = 1;
  param_1[0x115] = 4;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


// 0x04e7404 (0x130 bytes)
SaveDataInfo * idol::GetSaveData(void)

{
  SaveDataInfo *puVar1;
  SaveDataInfo *pSVar1;
  
  pSVar1 = GameSavePtr;
  if (GameSavePtr == (SaveDataInfo *)0x0) {
    pSVar1 = (SaveDataInfo *)0x0;
    puVar1 = (SaveDataInfo *)Idol_New(0x478);
    if (puVar1 != (SaveDataInfo *)0x0) {
      puVar1->loadResult = 0;
      puVar1->field0_0x0 = &PTR_PTR_006618d0;
      puVar1->callbackArg = 0;
      puVar1->field3_0xc = 0;
      puVar1->onLoad = 0;
      puVar1->unk14 = 0;
      puVar1->unk18 = 0;
      puVar1->result = 0;
      puVar1->unk458 = 0;
      puVar1->unk45c = 0;
      puVar1->unk45d = 0;
      puVar1->flags = 1;
      puVar1->unk454 = 4;
      memset(&puVar1->unk430,0,0x20);
      puVar1->unk20[0] = 0;
      puVar1->unk20[1] = 0;
      puVar1->unk20[2] = 0;
      puVar1->unk20[3] = 0;
      puVar1->unk20[4] = 0;
      puVar1->unk20[5] = 0;
      puVar1->unk20[6] = 0;
      puVar1->unk20[7] = 0;
      puVar1->unk20[8] = 0;
      puVar1->unk20[9] = 0;
      puVar1->unk20[10] = 0;
      puVar1->unk20[11] = 0;
      puVar1->unk20[12] = 0;
      puVar1->unk20[13] = 0;
      puVar1->unk20[14] = 0;
      puVar1->unk20[15] = 0;
      pSVar1 = puVar1;
    }
  }
  GameSavePtr = pSVar1;
  return pSVar1;
}


// 0x04e7534 (0x160 bytes)
void FUN_004e7534(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  cellGameContentErrorDialog(param_1,0x2cf,0);
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  g_memcardSaveBusy = 0;
  DAT_01111604 = 0;
  sys_ppu_thread_exit(0);
  return;
}


// 0x04e7694 (0x7c bytes)
void FUN_004e7694(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_PTR_006618d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x114] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  param_1[0x118] = 1;
  param_1[0x115] = 4;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}


// 0x04e7710 (0x28 bytes)
void FUN_004e7710(SaveDataInfo *param_1)

{
  cellSysmoduleUnloadModule(0x33);
  return;
}


// 0x04e7738 (0x34 bytes)
void FUN_004e7738(u8 *param_1,int param_2)

{
  *param_1 = &PTR_PTR_006618d0;
  cellSysmoduleUnloadModule(0x33);
  return;
}


// 0x04e776c (0x54 bytes)
void FUN_004e776c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618d0;
    cellSysmoduleUnloadModule(0x33);
    FUN_005e387c(param_1);
  }
  return;
}


// 0x04e77c0 (0x34 bytes)
void FUN_004e77c0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006618d0;
  cellSysmoduleUnloadModule(0x33);
  return;
}


// 0x04e77f4 (0x68 bytes)
// strings: 00659dfc: '%s failed: status = 0x%x\n'

undefined8 FUN_004e77f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 != '\0') {
    cellSysmoduleUnloadModule(0x33);
  }
  print_tty2("%s failed: status = 0x%x\n",param_2,param_3);
  return param_3;
}


// 0x04e785c (0x94 bytes)
// strings: 00659e18: '****Auto Save Game Data ****\n' | 00659e48: 'AutoSaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659e70: 'thr_SaveSystem_AutoSave'

void FUN_004e785c(void)

{
  int iVar1;
  GPiece<16> auStack_10;
  
  print_tty2("****Auto Save Game Data ****\n");
  DAT_01111604 = 1;
  g_memcardSaveBusy = 3;
  iVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_AutoSaveGameData_00710038,0,0x3e9,0x4000,0,
                     "AutoSaveGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","thr_SaveSystem_AutoSave",
               0xffffffffffffffff);
  }
  return;
}


// 0x04e78f0 (0x30 bytes)
undefined8 FUN_004e78f0(int param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (g_memcardSaveBusy == 0) {
    if (param_3 != 0) {
      *(int *)(param_1 + 0x450) = param_3;
    }
    *(undefined4 *)(param_1 + 0x458) = param_2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x04e7920 (0x84 bytes)
// strings: 00659e98: 'LoadGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659ec0: 'list load thread create failed %d\n'

void FUN_004e7920(void)

{
  int iVar1;
  GPiece<16> auStack_10;
  
  DAT_01111604 = 1;
  g_memcardSaveBusy = 2;
  iVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_LoadGameData_00710048,0,0x3e9,0x4000,0,
                     "LoadGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","list load thread create failed %d\n",0xffffffffffffffff
              );
  }
  return;
}


// 0x04e79a4 (0x90 bytes)
// strings: 00659ee4: '****Save Game Data ****\n' | 00659f0c: 'SaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659f34: 'thr_SaveSystem_Save'

void FUN_004e79a4(void)

{
  int iVar1;
  GPiece<16> auStack_10;
  
  print_tty2("****Save Game Data ****\n");
  DAT_01111604 = 1;
  g_memcardSaveBusy = 1;
  iVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_SaveGameData_00710030,0,0x3e9,0x4000,0,
                     "SaveGameData(void*)");
  if (iVar1 != 0) {
    print_tty2("%s failed: status = 0x%x\n","thr_SaveSystem_Save",0xffffffffffffffff);
  }
  return;
}


// 0x04e7a34 (0x268 bytes)
// strings: 00659ee4: '****Save Game Data ****\n' | 00659f0c: 'SaveGameData(void*)' | 00659dfc: '%s failed: status = 0x%x\n' | 00659f34: 'thr_SaveSystem_Save' | 00659e98: 'LoadGameData(void*)' | 00659ec0: 'list load thread create failed %d\n' | 00659e18: '****Auto Save Game Data ****\n' | 00659e48: 'AutoSaveGameData(void*)' | 00659e70: 'thr_SaveSystem_AutoSave'

void idol::SaveSystem_PS::RunSaveSystem(SaveDataInfo *param_1,int saveArg,char *param_3,int param_4,int (*param_5)(int),int (*param_6)(int),int (*param_7)(int,char *),int (*param_8)(int))

{
  int iVar1;
  undefined4 uVar2;
  GPiece<8> auStack_30;
  GPiece<8> auStack_28;
  GPiece<8> auStack_20;
  
  if ((g_memcardSaveBusy == 0) && (DAT_01111604 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = param_5;
    *(undefined4 *)(param_1 + 0x14) = param_6;
    *(undefined4 *)(param_1 + 0x10) = param_7;
    *(undefined4 *)(param_1 + 0x18) = param_8;
    uVar2 = (undefined4)param_4;
    iVar1 = (int)param_3;
    if (saveArg < 2) {
      if (-1 < saveArg) {
        if (saveArg < 1) {
          if (g_memcardSaveBusy == 0) {
            if (iVar1 != 0) {
              *(int *)(param_1 + 0x450) = iVar1;
            }
            *(undefined4 *)(param_1 + 0x458) = uVar2;
          }
          print_tty2("****Save Game Data ****\n");
          DAT_01111604 = '\x01';
          g_memcardSaveBusy = 1;
          iVar1 = sys_ppu_thread_create
                            (auStack_20,&PTR_SaveGameData_00710030,0,0x3e9,0x4000,0,
                             "SaveGameData(void*)");
          if (iVar1 != 0) {
            print_tty2("%s failed: status = 0x%x\n","thr_SaveSystem_Save",
                       0xffffffffffffffff);
          }
        }
        else {
          memset(param_3,0xf,param_4);
          if (g_memcardSaveBusy == 0) {
            if (iVar1 != 0) {
              *(int *)(param_1 + 0x450) = iVar1;
            }
            *(undefined4 *)(param_1 + 0x458) = uVar2;
          }
          DAT_01111604 = '\x01';
          g_memcardSaveBusy = 2;
          iVar1 = sys_ppu_thread_create
                            (auStack_28,&PTR_LoadGameData_00710048,0,0x3e9,0x4000,0,
                             "LoadGameData(void*)");
          if (iVar1 != 0) {
            print_tty2("%s failed: status = 0x%x\n","list load thread create failed %d\n",
                       0xffffffffffffffff);
          }
        }
      }
    }
    else if (saveArg == 3) {
      if (g_memcardSaveBusy == 0) {
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x450) = iVar1;
        }
        *(undefined4 *)(param_1 + 0x458) = uVar2;
      }
      print_tty2("****Auto Save Game Data ****\n");
      DAT_01111604 = '\x01';
      g_memcardSaveBusy = 3;
      iVar1 = sys_ppu_thread_create
                        (auStack_30,&PTR_AutoSaveGameData_00710038,0,0x3e9,0x4000,0,
                         "AutoSaveGameData(void*)");
      if (iVar1 != 0) {
        print_tty2("%s failed: status = 0x%x\n","thr_SaveSystem_AutoSave",
                   0xffffffffffffffff);
      }
    }
  }
  return;
}


// 0x04e7c9c (0x78 bytes)
// strings: 00659f58: 'thr_SaveSystem_CheckExisting()' | 00659f78: 'Really fatal error trying to spawn off fatal error thread\n'

int idol::registerSavesystemCallback(void)

{
  int iVar1;
  GPiece<16> auStack_10;
  
  DAT_01111604 = 1;
  g_memcardSaveBusy = 2;
  iVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_thr_SaveSystem_CheckExisting_00710050,0,0x3e9,0x4000,0,
                     "thr_SaveSystem_CheckExisting()");
  if (iVar1 != 0) {
    iVar1 = printf("Really fatal error trying to spawn off fatal error thread\n");
  }
  return iVar1;
}


// 0x04e7d14 (0x4 bytes)
void FUN_004e7d14(void)

{
  return;
}


// 0x04e7d18 (0x7c bytes)
// strings: 00659fb4: 'Fatalexit_memcardThread()' | 00659f78: 'Really fatal error trying to spawn off fatal error thread\n'

int SaveData_FatalExit(SaveDataInfo *param_1,int param_2)

{
  int iVar1;
  GPiece<16> auStack_10;
  
  DAT_01111604 = 1;
  g_memcardSaveBusy = 4;
  iVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_FUN_0070ff48,param_2,0x3e9,0x4000,0,
                     "Fatalexit_memcardThread()");
  if (iVar1 != 0) {
    iVar1 = printf("Really fatal error trying to spawn off fatal error thread\n");
  }
  return iVar1;
}


// 0x04e7d94 (0x70 bytes)
// strings: 00659fe0: 'OnSave Callback about to occur\n'

int SaveData_CallOnSave(SaveDataInfo *param_1)

{
  undefined4 uVar1;
  
  print_tty2("OnSave Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0xc) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}


// 0x04e7e04 (0x68 bytes)
// strings: 0065a010: 'OnSaving Callback about to occur\n'

undefined4 FUN_004e7e04(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("OnSaving Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x14))();
  }
  return uVar1;
}


// 0x04e7e6c (0x78 bytes)
// strings: 0065a044: 'OnLoad Callback about to occur\n'

int SaveData_CallOnLoad(SaveDataInfo *param_1)

{
  undefined4 uVar1;
  
  print_tty2("OnLoad Callback about to occur\n");
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x450);
  if (*(undefined4 **)(param_1 + 0x10) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}


// 0x04e7ee4 (0x70 bytes)
// strings: 0065a074: 'OnLoading Callback about to occur\n'

undefined4 FUN_004e7ee4(int param_1)

{
  undefined4 uVar1;
  
  print_tty2("OnLoading Callback about to occur\n");
  if (*(undefined4 **)(param_1 + 0x18) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 8));
  }
  return uVar1;
}


// 0x04e7f54 (0x48 bytes)
void FUN_004e7f54(int param_1,undefined8 param_2)

{
  strcpy(param_1 + 0x430,param_2,0x20);
  *(undefined1 *)(param_1 + 0x44f) = 0;
  *(undefined1 *)(param_1 + 0x45c) = 1;
  return;
}


// 0x04e7f9c (0x13c bytes)
// strings: 0065a0b0: '---###---Invalid File ID for SaveGame Utility!---###---\n' | 0065a0f0: '%s%s' (raw)

void FUN_004e7f9c(SaveDataInfo *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00504c58(g_pHWSystem);
  *(int *)(param_1 + 0x454) = (int)param_2;
  if ((int)param_2 == 0) {
    PTR_Elf64_Ehdr_008fa648 = DAT_008fa64c;
    snprintf((char *)(param_1 + 0x464),"rc1");
    if (*(int *)(param_1 + 0x454) != 4) {
      memcpy((void *)(param_1 + 0x20),(void *)((int)&PTR_DAT_00659900 + (int)(param_2 << 4)),
                   0x10);
      DAT_008fa6a4 = PTR_Elf64_Ehdr_008fa648;
      *(undefined1 *)(param_1 + 0x45d) = 1;
      *(undefined **)(param_1 + 0x46c) = DAT_008fa6a4;
      snprintf(&DAT_008fa6c8,"%s%s",uVar1,
                     (ulonglong)*(uint *)((int)&PTR_s__RC1_SAVEDATA_006599c8 + (int)(param_2 << 2)))
      ;
      strcpy(&DAT_008fa708,&DAT_008fa6c8,0x20);
    }
  }
  else {
    print_tty2("---###---Invalid File ID for SaveGame Utility!---###---\n");
    *(undefined4 *)(param_1 + 0x454) = 4;
  }
  return;
}


// 0x04e80d8 (0x70 bytes)
void SaveData_SetTitle(SaveDataInfo *param_1,const char *param_2)

{
  memset(param_1 + 0x30,0,0x400);
  strcpy(param_1 + 0x30,param_2,0x400);
  *(undefined1 *)(param_1 + 0x42f) = 0;
  return;
}


// 0x04e8148 (0x6c bytes)
// strings: 008fa728: 'Ratchet & Clank Save'

void SaveData_SetDialogStrings(SaveDataInfo *param_1,char *param_2,char *param_3)

{
  DAT_008fa63c = param_2;
  *(int *)(param_1 + 0x474) = (int)param_3;
  memset(s_Ratchet___Clank_Save_008fa728,0,0x400);
  strcpy(s_Ratchet___Clank_Save_008fa728,param_3,0x400);
  return;
}


// 0x04e81b4 (0x20 bytes)
void FUN_004e81b4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *param_2 = param_1;
  param_2[0xb] = param_3;
  param_2[10] = param_4;
  param_2[9] = param_4;
  param_2[2] = param_5;
  param_2[1] = 0;
  return;
}


// 0x04e81d4 (0x18 bytes)
void FUN_004e81d4(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}


// 0x04e81ec (0x1f4 bytes)
// strings: 0065a0f8: 'file %s open error : 0x%x\n' | 0065a118: 'file %s get stat error : 0x%x\n' | 0065a138: 'file %s read error : 0x%x\n' | 0065a158: 'file %s close error : 0x%x\n' | 0065a178: 'made it through fileAllocLoad --- file is %s\n'

undefined8 idol::fileAllocLoad(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_70;
  GPiece<36> auStack_68;
  longlong local_44;
  undefined4 local_34 [3];
  
  iVar2 = *param_3;
  *param_3 = 0;
  uVar1 = cellFsOpen(param_1,0,local_34,0,0);
  if ((int)uVar1 == 0) {
    uVar1 = cellFsFstat(local_34[0],auStack_68);
    if ((int)uVar1 == 0) {
      uVar1 = cellFsRead(local_34[0],param_2,local_44,&local_70);
      if (((int)uVar1 == 0) && (local_44 == local_70)) {
        uVar1 = cellFsClose(local_34[0]);
        if ((int)uVar1 == 0) {
          if (iVar2 == 0x20000) {
            memset(param_2 + local_44 & 0xffffffff,0,0x20000U - local_44 & 0xffffffff);
            iVar2 = 0x20000;
          }
          else {
            iVar2 = (int)local_44;
          }
          *param_3 = iVar2;
          printf("made it through fileAllocLoad --- file is %s\n",param_1);
          uVar1 = 0;
        }
        else {
          print_tty2("file %s close error : 0x%x\n",param_1,uVar1);
          uVar1 = 0xffffffffffffffff;
        }
      }
      else {
        print_tty2("file %s read error : 0x%x\n",param_1,uVar1);
        cellFsClose(local_34[0]);
        uVar1 = 0xffffffffffffffff;
      }
    }
    else {
      print_tty2("file %s get stat error : 0x%x\n",param_1,uVar1);
      cellFsClose(local_34[0]);
      uVar1 = 0xffffffffffffffff;
    }
  }
  else {
    print_tty2("file %s open error : 0x%x\n",param_1,uVar1);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


// 0x04e83e0 (0x90 bytes)
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n'

bool FUN_004e83e0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 5;
  param_1[1] = 3;
  param_1[7] = 0;
  param_1[8] = 0xf0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar1 = FUN_005d5838(0xf0);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
  }
  return iVar1 != 0;
}


// 0x04e8470 (0x130 bytes)
void idol::NewSaveData(int param_1,int *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(undefined4 *)(iVar1 + 0x500) = 0;
  memset(iVar1,0,0x80);
  strcpy(iVar1,DAT_008fa63c,0x80);
  iVar1 = *param_2 + 0x80;
  *(undefined1 *)(*param_2 + 0x7f) = 0;
  memset(iVar1,0,0x80);
  strcpy(iVar1,*(undefined4 *)(param_1 + 0x474),0x80);
  iVar1 = *param_2 + 0x100;
  *(undefined1 *)(*param_2 + 0xff) = 0;
  memset(iVar1,0,0x400);
  strcpy(iVar1,param_3 + 0xa0,0x400);
  iVar1 = *param_2;
  *(undefined1 *)(iVar1 + 0x4ff) = 0;
  strcpy(iVar1 + 0x508,param_3 + 0x4a0,8);
  iVar1 = *param_2;
  *(undefined1 *)(iVar1 + 0x50f) = 0;
  *(undefined1 *)(iVar1 + 0x504) = 0;
  *(undefined1 *)(iVar1 + 0x505) = 0;
  *(undefined1 *)(iVar1 + 0x506) = 0;
  *(undefined1 *)(iVar1 + 0x507) = 0;
  return;
}


// 0x04e85a0 (0x174 bytes)
// strings: 0065a1d4: '**** thr_SaveSystem_AutoSave() Finished ****\n'

void FUN_004e85a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_005d580c(*(int *)(param_1 + 0x24));
  }
  print_tty2("**** thr_SaveSystem_AutoSave() Finished ****\n");
  g_memcardSaveBusy = 0;
  DAT_01111604 = 0;
  return;
}


// 0x04e8714 (0x35c bytes)
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a204: '-----------------Result of SaveDataList2 %d-----------------\n'

void idol::SaveSystem_PS::SaveGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  GPiece<256> auStack_160;
  uint local_60;
  GPiece<16> local_5c;
  GPiece<52> local_4c;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  local_60 = 0xffffffff;
  if ((GameSavePtr[0x118] & 2) == 0) {
    if ((GameSavePtr[0x118] & 1) != 0) {
      strcpy(auStack_160,&DAT_008fa6c8,0x20);
    }
  }
  else if ((*(char *)(GameSavePtr + 0x117) != '\0') && (GameSavePtr + 0x10c != (undefined4 *)0x0)) {
    strcpy(auStack_160,GameSavePtr + 0x10c,0x20);
  }
  DAT_01111610 = 2;
  DAT_01111614 = 4;
  DAT_01111618 = 0;
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
  }
  else {
    g_memcardSaveSysState = 5;
    local_60 = cellSaveDataUserListSave
                         (0,0,local_5c,local_4c,&PTR_SaveDataListCallback_00710058,
                          &PTR_SaveDataStatusListCallback_00710060,&PTR_FUN_00710068,0xffffffff);
    print_tty2("-----------------Result of SaveDataList2 %d-----------------\n",(ulonglong)local_60)
    ;
  }
  puVar1[2] = local_60;
  FUN_004e6eac(local_60,puVar1);
  FUN_004e6fd8(puVar1,&local_60,0);
  puVar1[2] = local_60;
  FUN_004e85a0(local_4c);
  sys_ppu_thread_exit(0);
  return;
}


// 0x04e8a70 (0x2a8 bytes)
// strings: 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a244: '####### ERROR FROM AUTO SAVE #### Error Code %#x\n'

void idol::SaveSystem_PS::AutoSaveGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar2;
  GPiece<40> local_60;
  GPiece<32> auStack_38;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = &PTR_PTR_006618d0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[0x114] = 0;
      puVar3[0x116] = 0;
      *(undefined1 *)(puVar3 + 0x117) = 0;
      *(undefined1 *)((int)puVar3 + 0x45d) = 0;
      puVar3[0x118] = 1;
      puVar3[0x115] = 4;
      memset(puVar3 + 0x10c,0,0x20);
      *(undefined1 *)(puVar3 + 8) = 0;
      *(undefined1 *)((int)puVar3 + 0x21) = 0;
      *(undefined1 *)((int)puVar3 + 0x22) = 0;
      *(undefined1 *)((int)puVar3 + 0x23) = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      *(undefined1 *)((int)puVar3 + 0x25) = 0;
      *(undefined1 *)((int)puVar3 + 0x26) = 0;
      *(undefined1 *)((int)puVar3 + 0x27) = 0;
      *(undefined1 *)(puVar3 + 10) = 0;
      *(undefined1 *)((int)puVar3 + 0x29) = 0;
      *(undefined1 *)((int)puVar3 + 0x2a) = 0;
      *(undefined1 *)((int)puVar3 + 0x2b) = 0;
      *(undefined1 *)(puVar3 + 0xb) = 0;
      *(undefined1 *)((int)puVar3 + 0x2d) = 0;
      *(undefined1 *)((int)puVar3 + 0x2e) = 0;
      *(undefined1 *)((int)puVar3 + 0x2f) = 0;
      puVar1 = puVar3;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  DAT_01111610 = 4;
  DAT_01111614 = 4;
  DAT_01111618 = 0;
  if ((*(char *)(GameSavePtr + 0x117) == '\0') || (GameSavePtr + 0x10c == (undefined4 *)0x0)) {
    g_memcardSaveSysState = 5;
  }
  else {
    strcpy(auStack_38,GameSavePtr + 0x10c,0x20);
    iVar4 = FUN_005d5838(0xf0);
    if (iVar4 == 0) {
      print_tty2("Allocation failed for save game buffer!\n");
      g_memcardSaveSysState = 5;
    }
    else {
      g_memcardSaveSysState = 5;
      uVar2 = cellSaveDataUserAutoSave
                        (0,0,auStack_38,1,local_60,&PTR_SaveDataStatusListCallback_00710060,
                         &PTR_FUN_00710068,0xffffffff);
      iVar4 = (int)uVar2;
      puVar1[2] = iVar4;
      if (iVar4 == 0) {
        g_memcardSaveSysState = 3;
      }
      else if (iVar4 == 1) {
        g_memcardSaveSysState = 6;
      }
      else {
        printf("####### ERROR FROM AUTO SAVE #### Error Code %#x\n",uVar2);
      }
    }
  }
  FUN_004e85a0(local_60);
  sys_ppu_thread_exit(0);
  return;
}


// 0x04e8d18 (0x64 bytes)
void FUN_004e8d18(int param_1,undefined4 *param_2)

{
  if ((((param_1 == 4) || (param_1 == 6)) || (param_1 == 5)) ||
     ((param_1 == 10 || (param_1 == 0xb)))) {
    DAT_008fabb8 = 0x10;
    *param_2 = &DAT_008fabb8;
    DAT_008fabbc = 1;
    DAT_008fabc8 = 0;
    DAT_008fabc4 = 0;
    DAT_008fabcc = 0;
  }
  else {
    *param_2 = 0;
  }
  return;
}


// 0x04e8d7c (0x2c0 bytes)
// strings: 0065a5e0: '*---- Starting thr_SaveSystem_Load() ----*\n' | 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a620: '####Alloc failed in thr_SaveSystem_Load()####\n' | 0065a660: 'cellSaveDataListLoad2() : 0x%x\n'

void idol::SaveSystem_PS::LoadGameData(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  GPiece<4> local_160;
  GPiece<16> local_15c;
  GPiece<44> local_14c;
  GPiece<256> auStack_120;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  print_tty2("*---- Starting thr_SaveSystem_Load() ----*\n");
  strcpy(auStack_120,&DAT_008fa6c8,0x100);
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
    printf("####Alloc failed in thr_SaveSystem_Load()####\n");
  }
  else {
    g_memcardSaveSysState = 5;
    DAT_01111614 = 4;
    DAT_01111618 = 0;
    DAT_01111610 = 3;
    uVar4 = cellSaveDataUserListLoad
                      (0,0,local_15c,local_14c,&PTR_FUN_00710070,&PTR_cb_data_status_load_00710078,
                       &PTR_cb_file_operation_load_00710080,0xffffffff);
    puVar1[2] = uVar4;
    puVar1[1] = puVar1[0x114];
    FUN_004e6eac(uVar4,puVar1);
    FUN_004e6fd8(puVar1,local_160,1);
    puVar1[2] = uVar4;
    print_tty2("cellSaveDataListLoad2() : 0x%x\n",(ulonglong)uVar4);
  }
  FUN_004e85a0(local_14c);
  sys_ppu_thread_exit(0);
  return;
}


// 0x04e903c (0x2a0 bytes)
// strings: 0065a930: '*---- Starting thr_SaveSystem_CheckExisting() ----*\n' | 0065a1a8: 'Allocation failed for save game buffer!\n' | 0065a978: '####Alloc failed in thr_SaveSystem_CheckExisting()####\n'

void idol::thr_SaveSystem_CheckExisting(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  GPiece<4> local_160;
  GPiece<16> local_15c;
  GPiece<44> local_14c;
  GPiece<256> auStack_120;
  
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  puVar1 = GameSavePtr;
  print_tty2("*---- Starting thr_SaveSystem_CheckExisting() ----*\n");
  strcpy(auStack_120,&DAT_008fa6c8,0x100);
  iVar3 = FUN_005d5838(0xf0);
  if (iVar3 == 0) {
    print_tty2("Allocation failed for save game buffer!\n");
    printf("####Alloc failed in thr_SaveSystem_CheckExisting()####\n");
  }
  else {
    g_memcardSaveSysState = 5;
    DAT_01111614 = 4;
    DAT_01111618 = 0;
    DAT_01111610 = 7;
    uVar4 = cellSaveDataListAutoLoad
                      (0,0,local_15c,local_14c,&PTR_FUN_00710088,&PTR_FUN_00710090,
                       &PTR_cb_file_operation_load_00710080,0xffffffff);
    FUN_004e6eac(uVar4,puVar1);
    FUN_004e6fd8(puVar1,local_160,5);
    puVar1[2] = uVar4;
  }
  FUN_004e85a0(local_14c);
  sys_ppu_thread_exit(0);
  return;
}


// 0x04e92dc (0x56c bytes)
// strings: 0065a278: '\n***Inside SaveDataListCallback***\n' | 0065a2a0: 'FOUND TOO MUCH DATA! (Hard to believe!)' | 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n' | 0065a2c8: '%s%s' (raw) | 0065a2d0: '/%s/ps3data/SAVEDATA/maps/map[%d].png' | 0065a2f8: '/%s/ps3data/SAVEDATA/ICON0.PNG' | 0065a318: '***End of SaveDataListCallback***\n'

void idol::SaveDataListCallback(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar6;
  ulonglong uVar4;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar5;
  ulonglong uVar10;
  undefined **ppuVar11;
  uint uVar12;
  GPiece<128> auStack_190;
  GPiece<8> local_110;
  char acStack_108 [32];
  char acStack_e8 [96];
  
  puVar3 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)Idol_New(0x478);
    puVar3 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = &PTR_PTR_006618d0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[0x114] = 0;
      puVar6[0x116] = 0;
      *(undefined1 *)(puVar6 + 0x117) = 0;
      *(undefined1 *)((int)puVar6 + 0x45d) = 0;
      puVar6[0x118] = 1;
      puVar6[0x115] = 4;
      memset(puVar6 + 0x10c,0,0x20);
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x21) = 0;
      *(undefined1 *)((int)puVar6 + 0x22) = 0;
      *(undefined1 *)((int)puVar6 + 0x23) = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined1 *)((int)puVar6 + 0x25) = 0;
      *(undefined1 *)((int)puVar6 + 0x26) = 0;
      *(undefined1 *)((int)puVar6 + 0x27) = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      *(undefined1 *)((int)puVar6 + 0x29) = 0;
      *(undefined1 *)((int)puVar6 + 0x2a) = 0;
      *(undefined1 *)((int)puVar6 + 0x2b) = 0;
      *(undefined1 *)(puVar6 + 0xb) = 0;
      *(undefined1 *)((int)puVar6 + 0x2d) = 0;
      *(undefined1 *)((int)puVar6 + 0x2e) = 0;
      *(undefined1 *)((int)puVar6 + 0x2f) = 0;
      puVar3 = puVar6;
    }
  }
  GameSavePtr = puVar3;
  uVar2 = g_pSaveBuffer;
  puVar3 = GameSavePtr;
  uVar1 = GameSavePtr[0x118];
  DAT_01111620 = 0;
  DAT_01111624 = (undefined *)0x0;
  DAT_01111628 = (undefined4 *)0x0;
  DAT_0111162c = 0;
  DAT_01111630 = 0;
  DAT_01111634 = 0;
  DAT_01111638 = 0;
  DAT_0111163c = 0;
  print_tty2("\n***Inside SaveDataListCallback***\n");
  uVar4 = (ulonglong)param_2[1];
  if (uVar4 < *param_2) {
    print_tty2("FOUND TOO MUCH DATA! (Hard to believe!)");
    uVar4 = (ulonglong)param_2[1];
  }
  param_3[3] = param_2[2];
  *param_3 = 1;
  param_3[1] = 0;
  param_3[2] = (int)uVar4 + ((uint)((longlong)(0x800 - uVar4) >> 0x3f) & 0x800U - (int)uVar4);
  param_3[5] = 0;
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_2);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_2[1]);
  uVar7 = param_2[1];
  if (uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar10 = (ulonglong)param_2[2] + uVar4 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar4,uVar10 & 0xffffffff,
                 uVar10 + 0x20 & 0xffffffff);
      uVar7 = param_2[1];
      uVar4 = uVar4 + 1 & 0xffffffff;
    } while (uVar4 < uVar7);
  }
  if (4 < uVar7) {
    param_3[4] = 0;
    goto LAB_004e97e0;
  }
  ppuVar11 = &PTR_DAT_0065996c;
  uVar7 = 0;
  do {
    snprintf(acStack_108,"%s%s",&DAT_008fa6c8,ZEXT48(*ppuVar11));
    uVar12 = 0;
    if (param_2[1] != 0) {
      iVar9 = 0;
      uVar12 = 0;
      do {
        iVar8 = FUN_005cc784(acStack_108,param_2[2] + iVar9);
        if (iVar8 == 0) break;
        uVar12 = uVar12 + 1;
        iVar9 = iVar9 + 0x30;
      } while (uVar12 < param_2[1]);
    }
    if (uVar12 == param_2[1]) break;
    uVar7 = uVar7 + 1;
    ppuVar11 = ppuVar11 + 1;
  } while (uVar7 < 5);
  if ((4 < uVar7) || ((uVar1 & 1) == 0)) {
    param_3[4] = 0;
    goto LAB_004e97e0;
  }
  param_3[4] = &DAT_01111620;
  memset(&DAT_008fa6e8,0,0x20);
  snprintf(&DAT_008fa6e8,"%s%s",&DAT_008fa6c8,ZEXT48((&PTR_DAT_0065996c)[uVar7]));
  DAT_01111624 = &DAT_008fa6e8;
  memset(acStack_e8,0,0x60);
  iVar9 = puVar3[7];
  iVar8 = puVar3[0x115];
  if (iVar8 < 1) {
    if ((-1 < iVar8) && ((iVar9 < 0 || (0x12 < iVar9)))) goto LAB_004e975c;
LAB_004e973c:
    iVar9 = snprintf(acStack_e8,"/%s/ps3data/SAVEDATA/maps/map[%d].png",puVar3 + 0x119,iVar9);
  }
  else {
    if (iVar8 < 2) {
      if ((iVar9 < 0) || (0x1a < iVar9)) goto LAB_004e975c;
      goto LAB_004e973c;
    }
    if (3 < iVar8) goto LAB_004e973c;
LAB_004e975c:
    iVar9 = snprintf(acStack_e8,"/%s/ps3data/SAVEDATA/ICON0.PNG",puVar3 + 0x119);
  }
  uVar5 = FileSys_Get(iVar9);
  FileSys_ResolvePath(uVar5,acStack_e8,auStack_190);
  DAT_0111162c = 0;
  DAT_01111628 = &DAT_01111630;
  DAT_01111620 = 0;
  DAT_01111630 = DAT_008fa63c;
  fileAllocLoad(auStack_190,g_pSaveBuffer,local_110);
  DAT_01111634 = 0;
  DAT_01111638 = uVar2;
  DAT_0111163c = 0;
LAB_004e97e0:
  print_tty2("***End of SaveDataListCallback***\n");
  *param_1 = 0;
  return;
}


// 0x04e9848 (0x558 bytes)
// strings: 0065a33c: '\n***Inside SaveDataStatusListCallback***\n' | 0065a36c: 'Data %s is already exist.\n' | 0065a38c: 'checking size of %s ...\n' | 008fa660: 'ICON0.PNG' | 008fa684: 'PIC1.PNG' | 0065a3ac: '    file %s already exists. DIFF_SIZEKB : %d\n' | 0065a3dc: '    file %s is not exist. DIFF_SIZEKB : %d\n' | 0065a40c: '***HDD size check error. needs %d KB disc space more.\n' | 0065a444: '-------- NEW SAVE DATA ------------' | 0065a46c: 'HDD size check error. needs %d KB disc space more.\n' | 0065a4a4: '***End SaveDataStatusListCallback***\n'

void idol::SaveDataStatusListCallback(undefined4 *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar5;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  print_tty2("\n***Inside SaveDataStatusListCallback***\n");
  puVar4 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)Idol_New(0x478);
    puVar4 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6[1] = 0;
      *puVar6 = &PTR_PTR_006618d0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[0x114] = 0;
      puVar6[0x116] = 0;
      *(undefined1 *)(puVar6 + 0x117) = 0;
      *(undefined1 *)((int)puVar6 + 0x45d) = 0;
      puVar6[0x118] = 1;
      puVar6[0x115] = 4;
      memset(puVar6 + 0x10c,0,0x20);
      *(undefined1 *)(puVar6 + 8) = 0;
      *(undefined1 *)((int)puVar6 + 0x21) = 0;
      *(undefined1 *)((int)puVar6 + 0x22) = 0;
      *(undefined1 *)((int)puVar6 + 0x23) = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined1 *)((int)puVar6 + 0x25) = 0;
      *(undefined1 *)((int)puVar6 + 0x26) = 0;
      *(undefined1 *)((int)puVar6 + 0x27) = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      *(undefined1 *)((int)puVar6 + 0x29) = 0;
      *(undefined1 *)((int)puVar6 + 0x2a) = 0;
      *(undefined1 *)((int)puVar6 + 0x2b) = 0;
      *(undefined1 *)(puVar6 + 0xb) = 0;
      *(undefined1 *)((int)puVar6 + 0x2d) = 0;
      *(undefined1 *)((int)puVar6 + 0x2e) = 0;
      *(undefined1 *)((int)puVar6 + 0x2f) = 0;
      puVar4 = puVar6;
    }
  }
  GameSavePtr = puVar4;
  puVar4 = GameSavePtr;
  piVar1 = (int *)param_1[4];
  uVar11 = GameSavePtr[0x118];
  iVar2 = *piVar1;
  if (((iVar2 == 6) || (iVar2 == 4)) || (iVar2 == 2)) {
    param_3[1] = 1;
    uVar3 = param_2[1];
    *param_3 = (uint)(param_2 + 0x10);
    if (uVar3 == 0) {
      if ((uVar11 & 1) != 0) {
        param_3[1] = 3;
      }
      print_tty2("Data %s is already exist.\n",param_2 + 8);
      uVar11 = 0;
      DAT_01111608 = 0;
      uVar13 = (ulonglong)*param_2;
      iVar8 = 0;
      uVar14 = uVar13;
      do {
        print_tty2("checking size of %s ...\n",PTR_DAT_008fabb0 + iVar8 + 4);
        uVar12 = 0;
        if (param_2[0x198] != 0) {
          iVar10 = 0;
          do {
            iVar7 = FUN_005cc784(PTR_DAT_008fabb0 + iVar8 + 4,param_2[0x199] + iVar10 + 0x28);
            if (iVar7 == 0) break;
            uVar12 = uVar12 + 1;
            iVar10 = iVar10 + 0x38;
          } while ((uVar12 & 0xffffffff) < (ulonglong)param_2[0x198]);
        }
        if ((uVar12 & 0xffffffff) < (ulonglong)param_2[0x198]) {
          uVar12 = (ulonglong)
                   (int)((*(int *)(PTR_DAT_008fabb0 + iVar8) + 0x3ffU >> 10) -
                        (int)(*(longlong *)
                               (param_2[0x199] + ((int)(uVar12 << 6) - (int)(uVar12 << 3)) + 8) +
                              0x3ffU >> 10));
          print_tty2("    file %s already exists. DIFF_SIZEKB : %d\n",PTR_DAT_008fabb0 + iVar8 + 4,
                     uVar12);
        }
        else {
          uVar12 = ((ulonglong)*(uint *)(PTR_DAT_008fabb0 + iVar8) + 0x3ff << 0x20) >> 0x2a;
          print_tty2("    file %s is not exist. DIFF_SIZEKB : %d\n",PTR_DAT_008fabb0 + iVar8 + 4,
                     uVar12);
          DAT_01111608 = 1;
        }
        uVar14 = uVar14 - uVar12;
        uVar11 = uVar11 + 1;
        iVar8 = iVar8 + 0x24;
        uVar13 = uVar13 + ((longlong)(int)uVar14 - (longlong)(int)uVar13 >> 0x3f & uVar14 - uVar13);
      } while (uVar11 < 3);
      iVar8 = (int)uVar13;
      if (iVar8 < 0) {
        param_1[2] = iVar8;
        puVar4[0x11a] = 0xb;
        *param_1 = 0xffffffff;
        print_tty2("***HDD size check error. needs %d KB disc space more.\n",-iVar8);
        return;
      }
    }
    else {
      print_tty2("-------- NEW SAVE DATA ------------");
      NewSaveData(puVar4,param_3,&DAT_008fa708);
      lVar5 = 0;
      lVar15 = 3;
      puVar9 = (uint *)PTR_DAT_008fabb0;
      do {
        uVar11 = *puVar9;
        puVar9 = puVar9 + 9;
        lVar5 = lVar5 + (((ulonglong)uVar11 + 0x3ff << 0x20) >> 0x2a);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      iVar8 = *param_2 - ((int)lVar5 + param_2[0x196]);
      if (iVar8 < 0) {
        param_1[2] = iVar8;
        *param_1 = 0xffffffff;
        puVar4[0x11a] = 0xb;
        print_tty2("HDD size check error. needs %d KB disc space more.\n",-iVar8);
        return;
      }
      DAT_01111608 = 0;
    }
    if (((iVar2 == 4) || (iVar2 == 6)) || ((iVar2 == 5 || ((iVar2 == 10 || (iVar2 == 0xb)))))) {
      puVar6 = &DAT_008fabb8;
      DAT_008fabb8 = 0x10;
      DAT_008fabbc = 1;
      DAT_008fabc8 = 0;
      DAT_008fabc4 = 0;
      DAT_008fabcc = 0;
    }
    else {
      puVar6 = (undefined4 *)0x0;
    }
    uVar11 = *param_3;
    param_3[2] = (uint)puVar6;
    memset((ulonglong)uVar11 + 0x100,0,0x400);
    strcpy((ulonglong)uVar11 + 0x100,puVar4 + 0xc,0x400);
    *(undefined1 *)(*param_3 + 0x4ff) = 0;
    if (*piVar1 != 10) {
      strcpy(puVar4 + 0x10c,param_2 + 8,0x20);
      *(undefined1 *)((int)puVar4 + 0x44f) = 0;
      *(undefined1 *)(puVar4 + 0x117) = 1;
    }
    param_1[4] = &DAT_008fa708;
    print_tty2("***End SaveDataStatusListCallback***\n");
    *param_1 = 0;
  }
  else {
    *param_1 = 0xfffffffe;
  }
  return;
}


// 0x04e9da0 (0x440 bytes)
// strings: 0065a4cc: '\n***Inside SaveFileOpListCallback***\n' | 0065a010: 'OnSaving Callback about to occur\n' | 0065a4f4: '*--- Saving Icon0.png ---*\n' | 0065a2d0: '/%s/ps3data/SAVEDATA/maps/map[%d].png' | 0065a514: '####User was dumb enough to eject disk -- file load error. File: %s\n' | 0065a55c: '*--- Saving Pic1.png ---*\n' | 0065a57c: '/%s/ps3data/SAVEDATA/%s' | 0065a594: '*--- Saving Application Save Data ...\n' | 0065a5bc: '***End SaveFilOpListCallback***\n'

void FUN_004e9da0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar3;
  GPiece<8> local_840;
  char acStack_838 [1024];
  GPiece<1040> auStack_438;
  
  print_tty2("\n***Inside SaveFileOpListCallback***\n");
  puVar2 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)Idol_New(0x478);
    puVar2 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      *puVar4 = &PTR_PTR_006618d0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[0x114] = 0;
      puVar4[0x116] = 0;
      *(undefined1 *)(puVar4 + 0x117) = 0;
      *(undefined1 *)((int)puVar4 + 0x45d) = 0;
      puVar4[0x118] = 1;
      puVar4[0x115] = 4;
      memset(puVar4 + 0x10c,0,0x20);
      *(undefined1 *)(puVar4 + 8) = 0;
      *(undefined1 *)((int)puVar4 + 0x21) = 0;
      *(undefined1 *)((int)puVar4 + 0x22) = 0;
      *(undefined1 *)((int)puVar4 + 0x23) = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      *(undefined1 *)((int)puVar4 + 0x26) = 0;
      *(undefined1 *)((int)puVar4 + 0x27) = 0;
      *(undefined1 *)(puVar4 + 10) = 0;
      *(undefined1 *)((int)puVar4 + 0x29) = 0;
      *(undefined1 *)((int)puVar4 + 0x2a) = 0;
      *(undefined1 *)((int)puVar4 + 0x2b) = 0;
      *(undefined1 *)(puVar4 + 0xb) = 0;
      *(undefined1 *)((int)puVar4 + 0x2d) = 0;
      *(undefined1 *)((int)puVar4 + 0x2e) = 0;
      *(undefined1 *)((int)puVar4 + 0x2f) = 0;
      puVar2 = puVar4;
    }
  }
  GameSavePtr = puVar2;
  puVar2 = GameSavePtr;
  *param_1 = 0;
  iVar5 = param_1[4];
  if (DAT_01111608 < 1) {
    if (DAT_01111608 < 0) {
LAB_004ea180:
      param_1[1] = 0x21;
      *param_1 = 1;
      print_tty2("***End SaveFilOpListCallback***\n");
      return;
    }
    print_tty2("*--- Saving Pic1.png ---*\n");
    iVar5 = snprintf(acStack_838,"/%s/ps3data/SAVEDATA/%s",puVar2 + 0x119,
                           (ulonglong)*(uint *)(iVar5 + 0x4a8) + 0x28);
    uVar3 = FileSys_Get(iVar5);
    FileSys_ResolvePath(uVar3,acStack_838,auStack_438);
    iVar5 = idol::fileAllocLoad(auStack_438,g_pSaveBuffer,local_840);
    uVar1 = g_pSaveBuffer;
    if (iVar5 == 0) {
      *param_3 = 1;
      param_3[0xb] = uVar1;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 4;
      param_3[1] = 0;
    }
    else {
      print_tty2("####User was dumb enough to eject disk -- file load error. File: %s\n",acStack_838
                );
      *param_3 = 1;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 4;
      param_3[1] = 0;
    }
  }
  else if (DAT_01111608 < 2) {
    print_tty2("OnSaving Callback about to occur\n");
    if ((undefined4 *)puVar2[5] != (undefined4 *)0x0) {
      (**(code **)puVar2[5])();
    }
    print_tty2("*--- Saving Icon0.png ---*\n");
    iVar5 = snprintf(acStack_838,"/%s/ps3data/SAVEDATA/maps/map[%d].png",puVar2 + 0x119,
                           puVar2[7]);
    uVar3 = FileSys_Get(iVar5);
    FileSys_ResolvePath(uVar3,acStack_838,auStack_438);
    iVar5 = idol::fileAllocLoad(auStack_438,g_pSaveBuffer,local_840);
    uVar1 = g_pSaveBuffer;
    if (iVar5 == 0) {
      *param_3 = 1;
      param_3[0xb] = uVar1;
      param_3[10] = 0x20000;
      param_3[9] = 0x20000;
      param_3[2] = 2;
      param_3[1] = 0;
    }
    else {
      print_tty2("####User was dumb enough to eject disk -- file load error. File: %s\n",acStack_838
                );
      *param_3 = 1;
      param_3[0xb] = 0;
      param_3[10] = 0;
      param_3[9] = 0;
      param_3[2] = 2;
      param_3[1] = 0;
    }
  }
  else {
    if (2 < DAT_01111608) goto LAB_004ea180;
    print_tty2("*--- Saving Application Save Data ...\n");
    *param_3 = 1;
    param_3[0xb] = puVar2[0x114];
    param_3[10] = *(undefined4 *)(*(int *)(iVar5 + 0x4a8) + 0x48);
    param_3[9] = *(undefined4 *)(*(int *)(iVar5 + 0x4a8) + 0x48);
    iVar5 = *(int *)(iVar5 + 0x4a8);
    param_3[8] = 0;
    param_3[2] = 0;
    param_3[7] = iVar5 + 0x4c;
    memcpy(param_3 + 3,puVar2 + 8,0x10);
    param_3[1] = 0;
  }
  param_1[1] = 0x21;
  DAT_01111608 = DAT_01111608 + 1;
  return;
}


// 0x04ea1e0 (0x140 bytes)
// strings: 0065a680: '*---- Starting LoadDataListCallback() ---*' | 00659af0: 'Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n' | 00659b60: '\tget->dirNum : %d\n' | 00659b78: '\tget->dirListNum: %d\n' | 00659b90: '\t%4d  DIRNAME: %s\t\tPARAM: %s\n'

void FUN_004ea1e0(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  print_tty2("*---- Starting LoadDataListCallback() ---*");
  print_tty2(
            "Dump CellSaveDataListGet in the CellSaveDataListCallback or CellSaveDataListCallback--------------------\n"
            );
  print_tty2("\tget->dirNum : %d\n",(ulonglong)*param_2);
  print_tty2("\tget->dirListNum: %d\n",(ulonglong)param_2[1]);
  uVar1 = (ulonglong)param_2[1];
  uVar2 = 0;
  if (param_2[1] != 0) {
    do {
      uVar1 = (ulonglong)param_2[2] + uVar2 * 0x30;
      print_tty2("\t%4d  DIRNAME: %s\t\tPARAM: %s\n",uVar2,uVar1 & 0xffffffff,
                 uVar1 + 0x20 & 0xffffffff);
      uVar1 = (ulonglong)param_2[1];
      uVar2 = uVar2 + 1 & 0xffffffff;
    } while (uVar2 < uVar1);
  }
  param_3[3] = param_2[2];
  *param_3 = 1;
  param_3[1] = 0;
  param_3[5] = 0;
  param_3[2] = (int)uVar1 + ((uint)((longlong)(0x800 - uVar1) >> 0x3f) & 0x800U - (int)uVar1);
  param_3[4] = 0;
  *param_1 = 0;
  return;
}


// 0x04ea320 (0x5bc bytes)
// strings: 0065a6b8: 'cb_data_status_load() start\n' | 0065a6d8: '############## USER THAT CREATED SAVE IS NOT THE SAME AS THE ONE WHO IS LOADING IT!!! Disabling Trophies!!!!!\n' | 0065a748: '############## SAVE DATA HAS NO OWNER INFORMATION  Disabling Trophies!!!!!!\n' | 0065a798: '############## LOCALLY OWNED FILE. NO ACCT ID IN OWNER INFO.\n' | 0065a2c8: '%s%s' (raw) | 0065a7d8: '#### list load error. Past our marker for folders ####\n' | 0065a810: 'unknown userdata value : %d\n' | 0065a830: 'Data %s is not found.\n' | 008fa6a8: 'USR-DATA' | 0065a848: 'found [%s]\n' | 0065a858: '    size mismatch : expected[%u] != listed[%llu]\n' | 0065a890: '%s is not found\n'

void idol::cb_data_status_load(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  char acStack_90 [40];
  
  bVar3 = false;
  puVar4 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)Idol_New(0x478);
    puVar4 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = 0;
      *puVar5 = &PTR_PTR_006618d0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[0x114] = 0;
      puVar5[0x116] = 0;
      *(undefined1 *)(puVar5 + 0x117) = 0;
      *(undefined1 *)((int)puVar5 + 0x45d) = 0;
      puVar5[0x118] = 1;
      puVar5[0x115] = 4;
      memset(puVar5 + 0x10c,0,0x20);
      *(undefined1 *)(puVar5 + 8) = 0;
      *(undefined1 *)((int)puVar5 + 0x21) = 0;
      *(undefined1 *)((int)puVar5 + 0x22) = 0;
      *(undefined1 *)((int)puVar5 + 0x23) = 0;
      *(undefined1 *)(puVar5 + 9) = 0;
      *(undefined1 *)((int)puVar5 + 0x25) = 0;
      *(undefined1 *)((int)puVar5 + 0x26) = 0;
      *(undefined1 *)((int)puVar5 + 0x27) = 0;
      *(undefined1 *)(puVar5 + 10) = 0;
      *(undefined1 *)((int)puVar5 + 0x29) = 0;
      *(undefined1 *)((int)puVar5 + 0x2a) = 0;
      *(undefined1 *)((int)puVar5 + 0x2b) = 0;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      *(undefined1 *)((int)puVar5 + 0x2d) = 0;
      *(undefined1 *)((int)puVar5 + 0x2e) = 0;
      *(undefined1 *)((int)puVar5 + 0x2f) = 0;
      puVar4 = puVar5;
    }
  }
  GameSavePtr = puVar4;
  iVar9 = TrophyMgr;
  puVar4 = GameSavePtr;
  print_tty2("cb_data_status_load() start\n");
  uVar1 = *(uint *)(param_2 + 0x650);
  if (((uVar1 & 0x10) == 0) && ((uVar1 & 0x200) == 0)) {
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x400) == 0) {
        *(undefined1 *)(iVar9 + 0x18c) = 1;
        puVar4[0x118] = 1;
      }
      else {
        printf("############## LOCALLY OWNED FILE. NO ACCT ID IN OWNER INFO.\n");
        puVar4[0x118] = 1;
      }
    }
    else {
      printf("############## SAVE DATA HAS NO OWNER INFORMATION  Disabling Trophies!!!!!!\n");
      *(undefined1 *)(iVar9 + 0x18c) = 0;
      puVar4[0x118] = 2;
    }
  }
  else {
    printf(
                "############## USER THAT CREATED SAVE IS NOT THE SAME AS THE ONE WHO IS LOADING IT!!! Disabling Trophies!!!!!\n"
                );
    *(undefined1 *)(iVar9 + 0x18c) = 0;
    puVar4[0x118] = 2;
  }
  FUN_004e7170(param_2);
  piVar2 = (int *)param_1[4];
  if (*piVar2 == 3) {
    iVar9 = param_2 + 0x20;
    iVar11 = 0;
    ppuVar8 = &PTR_DAT_0065996c;
    do {
      snprintf(acStack_90,"%s%s",&DAT_008fa6c8,ZEXT48(*ppuVar8));
      iVar6 = FUN_005cc784(acStack_90,iVar9);
      if (iVar6 == 0) break;
      iVar11 = iVar11 + 1;
      ppuVar8 = ppuVar8 + 1;
    } while (iVar11 < 5);
    if (4 < iVar11) {
      printf("#### list load error. Past our marker for folders ####\n");
    }
    if (*(int *)(param_2 + 4) == 0) {
      iVar11 = (&DAT_008fa64c)[puVar4[0x115]];
      if (*(uint *)(param_2 + 0x660) < *(uint *)(param_2 + 0x65c)) {
        *param_1 = 0xfffffffd;
      }
      else {
        uVar10 = 0;
        if (*(uint *)(param_2 + 0x660) != 0) {
          iVar6 = 0;
          do {
            if ((!bVar3) &&
               (iVar7 = FUN_005cc784(*(int *)(param_2 + 0x664) + iVar6 + 0x28,
                                     ZEXT48(PTR_DAT_008fabb0) + 0x4c), iVar7 == 0)) {
              print_tty2("found [%s]\n",*(int *)(param_2 + 0x664) + iVar6 + 0x28);
              bVar3 = true;
              if (*(longlong *)(*(int *)(param_2 + 0x664) + iVar6 + 8) != (longlong)iVar11) {
                print_tty2("    size mismatch : expected[%u] != listed[%llu]\n",(longlong)iVar11,
                           *(undefined8 *)
                            (*(int *)(param_2 + 0x664) + ((int)(uVar10 << 6) - (int)(uVar10 << 3)) +
                            8));
                *param_1 = 0xfffffffd;
                return;
              }
            }
            uVar10 = uVar10 + 1;
            iVar6 = iVar6 + 0x38;
          } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x660));
          if (bVar3) {
            puVar4 = GameSavePtr;
            if (GameSavePtr == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)Idol_New(0x478);
              puVar4 = (undefined4 *)0x0;
              if (puVar5 != (undefined4 *)0x0) {
                puVar5[1] = 0;
                *puVar5 = &PTR_PTR_006618d0;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[0x114] = 0;
                puVar5[0x116] = 0;
                *(undefined1 *)(puVar5 + 0x117) = 0;
                *(undefined1 *)((int)puVar5 + 0x45d) = 0;
                puVar5[0x118] = 1;
                puVar5[0x115] = 4;
                memset(puVar5 + 0x10c,0,0x20);
                *(undefined1 *)(puVar5 + 8) = 0;
                *(undefined1 *)((int)puVar5 + 0x21) = 0;
                *(undefined1 *)((int)puVar5 + 0x22) = 0;
                *(undefined1 *)((int)puVar5 + 0x23) = 0;
                *(undefined1 *)(puVar5 + 9) = 0;
                *(undefined1 *)((int)puVar5 + 0x25) = 0;
                *(undefined1 *)((int)puVar5 + 0x26) = 0;
                *(undefined1 *)((int)puVar5 + 0x27) = 0;
                *(undefined1 *)(puVar5 + 10) = 0;
                *(undefined1 *)((int)puVar5 + 0x29) = 0;
                *(undefined1 *)((int)puVar5 + 0x2a) = 0;
                *(undefined1 *)((int)puVar5 + 0x2b) = 0;
                *(undefined1 *)(puVar5 + 0xb) = 0;
                *(undefined1 *)((int)puVar5 + 0x2d) = 0;
                *(undefined1 *)((int)puVar5 + 0x2e) = 0;
                *(undefined1 *)((int)puVar5 + 0x2f) = 0;
                puVar4 = puVar5;
              }
            }
            GameSavePtr = puVar4;
            puVar4 = GameSavePtr;
            strcpy(GameSavePtr + 0x10c,iVar9,0x20);
            *(undefined1 *)((int)puVar4 + 0x44f) = 0;
            *(undefined1 *)(puVar4 + 0x117) = 1;
            piVar2[2] = (int)&DAT_008fa708;
            *piVar2 = 0;
            piVar2[1] = 4;
            param_3[1] = 1;
            *param_3 = param_2 + 0x40;
            *param_1 = 0;
            param_1[4] = piVar2;
            DAT_01111608 = 2;
            return;
          }
        }
        print_tty2("%s is not found\n",ZEXT48(PTR_DAT_008fabb0) + 0x4c);
        *param_1 = 0xfffffffd;
      }
    }
    else {
      print_tty2("Data %s is not found.\n",iVar9);
      *param_1 = 0xfffffffc;
    }
  }
  else {
    print_tty2("unknown userdata value : %d\n",*piVar2);
    *param_1 = 0xfffffffe;
  }
  return;
}


// 0x04ea8dc (0x274 bytes)
// strings: 0065a8a4: 'cb_file_operation_load() start\n' | 0065a8c4: 'FAILURE TO LOAD Saved Game!!\n' | 0065a8e4: 'SAVE_OPERATION_STEP_END\n' | 0065a904: '*---- Finished File Operation Step ----*\n'

void idol::cb_file_operation_load(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)Idol_New(0x478);
    puVar7 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[1] = 0;
      *puVar8 = &PTR_PTR_006618d0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[0x114] = 0;
      puVar8[0x116] = 0;
      *(undefined1 *)(puVar8 + 0x117) = 0;
      *(undefined1 *)((int)puVar8 + 0x45d) = 0;
      puVar8[0x118] = 1;
      puVar8[0x115] = 4;
      memset(puVar8 + 0x10c,0,0x20);
      *(undefined1 *)(puVar8 + 8) = 0;
      *(undefined1 *)((int)puVar8 + 0x21) = 0;
      *(undefined1 *)((int)puVar8 + 0x22) = 0;
      *(undefined1 *)((int)puVar8 + 0x23) = 0;
      *(undefined1 *)(puVar8 + 9) = 0;
      *(undefined1 *)((int)puVar8 + 0x25) = 0;
      *(undefined1 *)((int)puVar8 + 0x26) = 0;
      *(undefined1 *)((int)puVar8 + 0x27) = 0;
      *(undefined1 *)(puVar8 + 10) = 0;
      *(undefined1 *)((int)puVar8 + 0x29) = 0;
      *(undefined1 *)((int)puVar8 + 0x2a) = 0;
      *(undefined1 *)((int)puVar8 + 0x2b) = 0;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      *(undefined1 *)((int)puVar8 + 0x2d) = 0;
      *(undefined1 *)((int)puVar8 + 0x2e) = 0;
      *(undefined1 *)((int)puVar8 + 0x2f) = 0;
      puVar7 = puVar8;
    }
  }
  GameSavePtr = puVar7;
  iVar6 = DAT_01111608;
  puVar7 = GameSavePtr;
  print_tty2("cb_file_operation_load() start\n");
  bVar5 = false;
  piVar1 = (int *)param_1[4];
  iVar2 = piVar1[2];
  *param_1 = 0;
  if (iVar6 == 2) {
    if ((*piVar1 != 0) || (piVar1[1] != 4)) {
      *param_1 = 0xfffffffe;
      DAT_01111604 = 0;
      printf("FAILURE TO LOAD Saved Game!!\n");
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x4a8) + 0x48);
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    memcpy(param_3 + 3,puVar7 + 8,0x10);
    *param_3 = 0;
    uVar4 = puVar7[0x114];
    param_3[10] = uVar3;
    param_3[0xb] = uVar4;
    iVar2 = *(int *)(iVar2 + 0x4a8);
    param_3[9] = uVar3;
    param_3[2] = 0;
    param_3[1] = 0;
    param_3[7] = iVar2 + 0x4c;
  }
  else {
    print_tty2("SAVE_OPERATION_STEP_END\n");
    bVar5 = true;
    *param_1 = 1;
  }
  param_1[1] = 0x21;
  DAT_01111608 = DAT_01111608 + 1;
  print_tty2("*---- Finished File Operation Step ----*\n");
  if (bVar5) {
    DAT_01111604 = 0;
  }
  return;
}


// 0x04eab50 (0x168 bytes)
// strings: 0065a9c0: 'Found %d existing saves...'

void FUN_004eab50(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  print_tty2("Found %d existing saves...",(ulonglong)*param_2);
  puVar1 = GameSavePtr;
  if (GameSavePtr == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)Idol_New(0x478);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_PTR_006618d0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[0x114] = 0;
      puVar2[0x116] = 0;
      *(undefined1 *)(puVar2 + 0x117) = 0;
      *(undefined1 *)((int)puVar2 + 0x45d) = 0;
      puVar2[0x118] = 1;
      puVar2[0x115] = 4;
      memset(puVar2 + 0x10c,0,0x20);
      *(undefined1 *)(puVar2 + 8) = 0;
      *(undefined1 *)((int)puVar2 + 0x21) = 0;
      *(undefined1 *)((int)puVar2 + 0x22) = 0;
      *(undefined1 *)((int)puVar2 + 0x23) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      *(undefined1 *)((int)puVar2 + 0x25) = 0;
      *(undefined1 *)((int)puVar2 + 0x26) = 0;
      *(undefined1 *)((int)puVar2 + 0x27) = 0;
      *(undefined1 *)(puVar2 + 10) = 0;
      *(undefined1 *)((int)puVar2 + 0x29) = 0;
      *(undefined1 *)((int)puVar2 + 0x2a) = 0;
      *(undefined1 *)((int)puVar2 + 0x2b) = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      *(undefined1 *)((int)puVar2 + 0x2d) = 0;
      *(undefined1 *)((int)puVar2 + 0x2e) = 0;
      *(undefined1 *)((int)puVar2 + 0x2f) = 0;
      puVar1 = puVar2;
    }
  }
  GameSavePtr = puVar1;
  GameSavePtr[0x11c] = *param_2;
  *param_1 = 1;
  return;
}


// 0x04eacb8 (0x4 bytes)
void FUN_004eacb8(void)

{
  return;
}


// 0x04eacbc (0x18 bytes)
void FUN_004eacbc(void)

{
  DAT_008fa6a4 = PTR_Elf64_Ehdr_008fa648;
  return;
}


// 0x04eacd4 (0x108 bytes)
undefined8 FUN_004eacd4(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 1) != '\0') {
    fVar1 = (float)param_2[6];
    param_2[6] = (int)(float)((double)fVar1 + param_1);
    if (0 < param_2[7] && (float)param_2[7] <= (float)((double)fVar1 + param_1)) {
      (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2);
      if ((undefined4 *)param_2[4] != (undefined4 *)0x0) {
        (**(code **)param_2[4])(2);
      }
    }
    else if (((undefined4 *)param_2[5] != (undefined4 *)0x0) &&
            (iVar2 = (**(code **)param_2[5])(), iVar2 != 0)) {
      (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2);
    }
  }
  return 0;
}


// 0x04eaddc (0x88 bytes)
undefined4 * FUN_004eaddc(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (g_pMsgDialog == (undefined4 *)0x0) {
    DAT_01111644 = (undefined4)param_1;
    puVar1 = (undefined4 *)FUN_004fe218(0x20,param_1);
    g_pMsgDialog = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_PTR_00661910;
      g_pMsgDialog = puVar1;
    }
  }
  return g_pMsgDialog;
}


// 0x04eae64 (0x134 bytes)
// strings: 0065a9dc: 'In messageCallback\n'

void FUN_004eae64(int param_1)

{
  print_tty2("In messageCallback\n");
  *(undefined1 *)(g_pMsgDialog + 4) = 0;
  if (param_1 < 2) {
    if (0 < param_1) {
      if (*(undefined4 **)(g_pMsgDialog + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(g_pMsgDialog + 0x10))(0);
      return;
    }
  }
  else {
    if (param_1 < 3) {
      if (*(undefined4 **)(g_pMsgDialog + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(g_pMsgDialog + 0x10))(1);
      return;
    }
    if (param_1 < 4) {
      if (*(undefined4 **)(g_pMsgDialog + 0x10) == (undefined4 *)0x0) {
        return;
      }
      (*(code *)**(undefined4 **)(g_pMsgDialog + 0x10))(4);
      return;
    }
  }
  if (*(undefined4 **)(g_pMsgDialog + 0x10) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(g_pMsgDialog + 0x10))(3);
  }
  return;
}


// 0x04eaf98 (0xf0 bytes)
void FUN_004eaf98(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_2 + 0x20))();
  uVar1 = FUN_005051d8(&DAT_0159b38c,uVar1);
  (*(code *)**(undefined4 **)(*param_2 + 0x10))
            (param_1,param_2,uVar1,param_4,param_5,*(undefined4 **)(*param_2 + 0x10),param_7,param_8
             ,param_9);
  return;
}


// 0x04eb088 (0x124 bytes)
undefined8
FUN_004eb088(double param_1,int param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 param_6,char param_7,undefined4 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar2 = 0;
    if ((0 < param_4) && (param_4 < 2)) {
      uVar2 = 3;
    }
    uVar3 = uVar2;
    if (param_5 < 2) {
      if (-1 < param_5) {
        if (param_5 < 1) {
          uVar3 = uVar2 | 0xa0;
        }
        else {
          uVar3 = uVar2 | 0x90;
          if (param_7 == '\0') {
            uVar3 = uVar2 | 400;
          }
        }
      }
    }
    else if (param_5 < 3) {
      uVar3 = uVar2 | 0x80;
    }
    uVar1 = cellMsgDialogOpen2(uVar3,param_3,&PTR_FUN_007100b0,0,0);
    if (-1 < (int)uVar1) {
      *(float *)(param_2 + 0x1c) = (float)param_1;
      uVar1 = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x10) = param_8;
      *(undefined4 *)(param_2 + 0x14) = param_9;
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


// 0x04eb1ac (0x38 bytes)
void FUN_004eb1ac(int param_1)

{
  cellMsgDialogAbort();
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


// 0x04eb1e4 (0x40 bytes)
undefined8 FUN_004eb1e4(int *param_1)

{
  (*(code *)**(undefined4 **)(*param_1 + 0x1c))();
  return 0;
}


// 0x04eb224 (0x104 bytes)
void FUN_004eb224(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(ushort *)(param_2 + 0xc);
  *(int *)(param_1 + 8) = param_2 + 0x10;
  pvVar3 = g_pGame;
  *(uint *)(param_1 + 0xc) = (uint)uVar1;
                    /* WARNING: Load size is inaccurate */
  lVar4 = (*(code *)**(undefined4 **)(*pvVar3 + 0xc))(pvVar3);
  iVar5 = (int)lVar4;
  if ((*(int *)((int)g_pHWSystem + 0xc0) == 0) &&
     (((iVar5 == 0 || (iVar5 == 4)) || (iVar5 == 5)))) {
    lVar4 = 1;
  }
  else if (*(int *)((int)g_pHWSystem + 0xc0) == 1 && iVar5 == 0) {
    lVar4 = 1;
  }
  uVar7 = (uint)*(ushort *)(param_2 + 0xc);
  iVar5 = 0;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    iVar6 = param_2 + (int)(lVar4 << 2);
    iVar8 = param_2;
    do {
      iVar2 = *(int *)(iVar8 + 0x10);
      if (iVar2 != 0) {
        if ((int)lVar4 != 0) {
          iVar2 = *(int *)(iVar6 + 0x10);
        }
        *(int *)(iVar8 + 0x10) = iVar2 + param_2;
        uVar7 = (uint)*(ushort *)(param_2 + 0xc);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x80;
      iVar8 = iVar8 + 0x80;
    } while (iVar5 < (int)uVar7);
  }
  return;
}


// 0x04eb328 (0x30 bytes)
undefined4 FUN_004eb328(int param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xc) < (int)param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + (int)(param_2 << 7));
  }
  return uVar1;
}


// 0x04eb358 (0x5c bytes)
void FUN_004eb358(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 0x20))();
  FUN_005051d8(&DAT_0159b38c,uVar1);
  return;
}


// 0x04eb3b8 (0x22c bytes)
void FUN_004eb3b8(int param_1)

{
  if ((*(float *)(param_1 + 8) == 0.0) && (*(float *)(param_1 + 0xc) == 0.0)) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = 1;
  }
  if (*(float *)(param_1 + 8) < 0.0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x8000;
  }
  if (0.0 < *(float *)(param_1 + 8)) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x2000;
  }
  if (*(float *)(param_1 + 0xc) < 0.0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x1000;
  }
  if (0.0 < *(float *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x4000;
  }
  return;
}


// 0x04eb5e4 (0x94 bytes)
// strings: 0065aa1c: 'ERROR: (Initialize) cellPadInit() 0x%x\n'

void FUN_004eb5e4(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = cellPadInit(4);
  if ((int)uVar1 != 0) {
    print_tty("ERROR: (Initialize) cellPadInit() 0x%x\n",uVar1);
  }
  iVar2 = 0;
  do {
    memset(&DAT_009664ac,0,0x84);
    cellPadGetData(0,&DAT_009664ac);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


// 0x04eb678 (0x40 bytes)
// strings: 0065aa50: 'ERROR: (Terminate) cellPadEnd() 0x%x\n'

void FUN_004eb678(void)

{
  undefined8 uVar1;
  
  uVar1 = cellPadEnd();
  if ((int)uVar1 != 0) {
    print_tty("ERROR: (Terminate) cellPadEnd() 0x%x\n",uVar1);
  }
  return;
}


// 0x04eb6e8 (0xa6c bytes)
// inlined: FastAtan2 @0x4ebcc0
void FUN_004eb6e8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float *pfVar9;
  char *pcVar10;
  ulonglong uVar11;
  float fVar12;
  short sVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined4 *puVar17;
  longlong lVar16;
  int iVar18;
  char cVar19;
  float fVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar25;
  ulonglong unaff_r29;
  float fVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  undefined8 uStack00000040;
  ulonglong uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined4 in_stack_000000c0;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar29 = uVar11 - 0x140;
  puVar8 = (ulonglong *)lVar29;
  *puVar8 = uVar11;
  puVar8[0x2a] = in_LR;
  puVar8[0x25] = in_f29;
  puVar8[0x26] = in_f30;
  puVar8[0x27] = in_f31;
  puVar8[0x24] = unaff_r31;
  puVar8[0x23] = unaff_r30;
  pfVar9 = (float *)param_2;
  fVar26 = pfVar9[0x92];
  puVar8[0x22] = unaff_r29;
  fVar3 = pfVar9[0x2c];
  puVar8[0x21] = unaff_r28;
  pfVar9[0x2b] = fVar26;
  pfVar9[0x2f] = fVar3;
  puVar8[0x20] = unaff_r27;
  fVar26 = (float)((uint)(param_4 >> 0x20) & 0xffff | (uint)((param_4 >> 0x30) << 8));
  iVar23 = 0;
  pfVar9[0x28] = fVar26;
  lVar27 = 2;
  pfVar9[0x2c] = fVar26;
  dVar34 = 0.0;
  puVar8[0x1f] = unaff_r26;
  lVar16 = param_2;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[7] = 0;
    lVar16 = lVar16 + 0x20;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  auVar35 = ZEXT416(0xfffffff0);
  auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = ZEXT416(0);
  auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = loadVectorLeftIndexed(8,0x4eb6b8);
  iVar18 = 0;
  auVar37 = loadVectorLeftIndexed(4,0x4eb6b8);
  auVar39 = loadVectorLeftIndexed(0xc,0x4eb6b8);
  auVar41 = loadVectorLeftIndexed(0x10,0x4eb6b8);
  uVar14 = uVar11 + 0x4c & 0xffffffff;
  auVar42 = loadVectorLeftIndexed(0x14,0x4eb6b8);
  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar41 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar21 = uVar14;
  lVar16 = param_2;
  do {
    auVar42 = loadVectorLeftIndexed(in_LR,uVar21);
    uVar2 = *(ushort *)uVar21;
    auVar42 = vectorShiftRightWord(auVar42,auVar38);
    lVar27 = (ulonglong)uVar2 - 0x7f;
    auVar42 = vectorSubtractUnsignedWordModulo
                        (auVar42,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60);
    iVar25 = (int)lVar27;
    auVar43 = vectorSubtractUnsignedWordModulo(auVar40,auVar42);
    auVar44 = vectorCompareGreaterThanSignedWord(auVar40,auVar42);
    auVar42 = vectorConditionalSelect(auVar42,auVar43,auVar44);
    if (0x2f < (int)(iVar25 + ((uint)(lVar27 >> 0x3f) & iVar25 * -2))) {
      auVar43 = vectorSubtractUnsignedWordModulo
                          (auVar42,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
      auVar42 = ZEXT416(0xffffffff);
      auVar44 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar42 = vectorConvertFromSignedFixedPointWord(auVar43,0);
      auVar43 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar43);
      auVar43 = vectorCompareGreaterThanFloatingPoint(auVar36,auVar42);
      auVar43 = vectorConditionalSelect(auVar36,auVar42,auVar43);
      auVar42 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar7 = storeVectorElementWordIndexed
                        (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar16);
      *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
      if (uVar2 < 0x7f) {
        auVar42 = (SPLAT(auVar41) ^ auVar43) >>
                  0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0,lVar16);
        *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
      }
    }
    iVar18 = iVar18 + 1;
    uVar21 = uVar21 + 2;
    lVar16 = lVar16 + 4;
  } while (iVar18 < 0x10);
  lVar27 = uVar14 + 8;
  lVar16 = param_2 + 0x10;
  lVar28 = 6;
  auVar35 = loadVectorLeftIndexed(0x18,0x4eb6b8);
  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  do {
    auVar41 = loadVectorLeftIndexed(in_LR,lVar27);
    auVar37 = ZEXT416(0xffffffff);
    auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar36 = loadVectorRightIndexed(0x10,lVar27);
    auVar42 = loadVectorLeftIndexed(in_LR,lVar27 + 2);
    auVar40 = loadVectorRightIndexed(0x10,lVar27 + 2);
    lVar22 = lVar16 + 4;
    auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar41 = vectorShiftRightWord(auVar41 | auVar36,auVar38);
    lVar27 = lVar27 + 4;
    auVar37 = ZEXT416(0xffffffff);
    auVar43 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
    auVar36 = vectorShiftRightWord(auVar42 | auVar40,auVar38);
    auVar37 = vectorConvertFromUnsignedFixedPointWord(auVar41,0);
    auVar40 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar41 = vectorConvertFromUnsignedFixedPointWord(auVar36,0);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar39);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar40);
    auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0,lVar16);
    *(undefined4 *)((uint)lVar16 & 0xfffffffc) = uVar7;
    lVar16 = lVar16 + 8;
    uVar7 = storeVectorElementWordIndexed
                      (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0,lVar22);
    *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar7;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  if (*DAT_008fabd0 != '\0') {
    fVar26 = pfVar9[0x28];
    pfVar9[2] = -pfVar9[2];
    *pfVar9 = -*pfVar9;
    if (((uint)fVar26 & 0x8000) == 0) {
      if (((uint)fVar26 & 0x2000) != 0) {
        fVar26 = (float)((uint)fVar26 & 0xffffdfff | 0x8000);
        pfVar9[0x28] = fVar26;
      }
    }
    else {
      fVar26 = (float)((uint)fVar26 & 0xffff7fff | 0x2000);
      pfVar9[0x28] = fVar26;
    }
    pfVar9[0x2c] = fVar26;
  }
  lVar27 = 4;
  lVar16 = param_2;
  do {
    puVar17 = (undefined4 *)lVar16;
    puVar17[0x10] = *puVar17;
    puVar17[0x11] = puVar17[1];
    puVar17[0x12] = puVar17[2];
    puVar17[0x13] = puVar17[3];
    lVar16 = lVar16 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  lVar22 = 8;
  lVar27 = uVar11 + 0x40;
  lVar28 = uVar11 + 0x44;
  lVar16 = lVar29;
  do {
    uVar7 = *(undefined4 *)lVar28;
    uVar4 = ((undefined4 *)lVar27)[2];
    iVar18 = (int)lVar16;
    *(undefined4 *)(iVar18 + 0x38) = *(undefined4 *)lVar27;
    lVar27 = lVar27 + 0x10;
    uVar5 = ((undefined4 *)lVar28)[2];
    *(undefined4 *)(iVar18 + 0x3c) = uVar7;
    *(undefined4 *)(iVar18 + 0x40) = uVar4;
    lVar28 = lVar28 + 0x10;
    *(undefined4 *)(iVar18 + 0x44) = uVar5;
    lVar16 = lVar16 + 0x10;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  *(undefined4 *)(puVar8 + 0x17) = in_stack_000000c0;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_004eb3b8(param_2,puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb],puVar8[0xc],puVar8[0xd])
  ;
  fVar26 = pfVar9[0x28];
  fVar20 = (float)((uint)fVar26 & ~(uint)pfVar9[0x2b]);
  fVar3 = pfVar9[0x2c];
  fVar12 = (float)((uint)pfVar9[0x2b] & ~(uint)fVar26);
  pfVar9[0x29] = fVar20;
  pfVar9[0x2a] = fVar12;
  pfVar9[0x34] = (float)((fVar26 == 0));
  pfVar9[0x2d] = (float)((uint)fVar3 & ~(uint)pfVar9[0x2f]);
  pfVar9[0x30] = fVar26;
  pfVar9[0x35] = (float)((((uint)fVar26 & 0xf000) == 0));
  pfVar9[0x2e] = (float)((uint)pfVar9[0x2f] & ~(uint)fVar3);
  pcVar10 = DAT_008fabd0;
  pfVar9[0x31] = fVar20;
  pfVar9[0x32] = fVar12;
  pfVar9[0x92] = fVar26;
  if (*pcVar10 != '\0') {
    pfVar9[0x12] = -pfVar9[0x12];
    pfVar9[0x10] = -pfVar9[0x10];
    if (((uint)fVar26 & 0x8000) == 0) {
      if (((uint)fVar26 & 0x2000) != 0) {
        pfVar9[0x30] = (float)((uint)fVar26 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x30] = (float)((uint)fVar26 & 0xffff7fff | 0x2000);
    }
    if (((uint)fVar20 & 0x8000) == 0) {
      if (((uint)fVar20 & 0x2000) != 0) {
        pfVar9[0x31] = (float)((uint)fVar20 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x31] = (float)((uint)fVar20 & 0xffff7fff | 0x2000);
    }
    if (((uint)fVar12 & 0x8000) == 0) {
      if (((uint)fVar12 & 0x2000) != 0) {
        pfVar9[0x32] = (float)((uint)fVar12 & 0xffffdfff | 0x8000);
      }
    }
    else {
      pfVar9[0x32] = (float)((uint)fVar12 & 0xffff7fff | 0x2000);
    }
  }
  if (pfVar9[0x33] == 1.4013e-45) {
    *pfVar9 = 0.0;
    pfVar9[0x28] = (float)((uint)fVar26 & 0xffffafcf);
    pfVar9[0x29] = (float)((uint)fVar20 & 0xffffafcf);
    pfVar9[0x2a] = (float)((uint)fVar12 & 0xffffafcf);
    pfVar9[1] = 0.0;
    pfVar9[0x33] = 0.0;
  }
  else if (pfVar9[0x33] == 2.8026e-45) {
    pfVar9[0x28] = (float)((uint)fVar26 & 0x900);
    pfVar9[0x2c] = (float)((uint)fVar3 & 0x900);
    pfVar9[2] = 0.0;
    pfVar9[0x29] = (float)((uint)fVar20 & 0x900);
    pfVar9[0x2a] = (float)((uint)fVar12 & 0x900);
    pfVar9[3] = 0.0;
    pfVar9[0x35] = 1.4013e-45;
    pfVar9[0x33] = 0.0;
  }
  fVar26 = pfVar9[2];
  fVar3 = pfVar9[3];
  dVar30 = (double)pfVar9[2];
  dVar31 = (double)pfVar9[3];
  dVar33 = ABS(dVar30);
  dVar32 = ABS(dVar31);
  *(float *)(puVar8 + 0x18) = (float)(dVar33 - dVar32);
  fVar12 = SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31)));
  uVar14 = (ulonglong)((uint)fVar26 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x18) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4;
  dVar30 = dVar33;
  if ((double)*(float *)(puVar8 + 0x18) - dVar34 < 0.0) {
    dVar30 = dVar32;
  }
  fVar26 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  if ((double)*(float *)(puVar8 + 0x18) - dVar34 < 0.0) {
    dVar32 = dVar33;
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (dVar34 < dVar30) {
    lVar16 = uVar11 - 0x130;
    lVar22 = 2;
    lVar27 = uVar11 - 0x7c;
    lVar28 = uVar11 - 0x6c;
    fVar20 = (float)(dVar32 - dVar30) / (float)(dVar32 + dVar30);
    fVar1 = fVar20 * fVar20;
    *(float *)(puVar8 + 0x1a) = fVar20;
    *(float *)(puVar8 + 0x19) = fVar20;
    *(float *)((int)puVar8 + 0xcc) = fVar20;
    *(float *)((int)puVar8 + 0xc4) = fVar20;
    fVar20 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar1;
    *(float *)((int)puVar8 + 0xcc) = *(float *)((int)puVar8 + 0xcc) * fVar20;
    *(float *)(puVar8 + 0x1a) = *(float *)(puVar8 + 0x1a) * fVar20 * fVar1;
    do {
      *(float *)((int)lVar16 + 0xc4) = *(float *)((int)lVar16 + 0xb4) * fVar20 * fVar20;
      iVar18 = (int)lVar27;
      lVar16 = lVar16 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)(iVar18 + 4) * fVar20 * fVar20;
      lVar28 = lVar28 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar28 = uVar11 - 0x7c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = lVar29;
    lVar27 = lVar28;
    do {
      fVar20 = *pfVar15;
      fVar1 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar16 + 0xc4) = *(float *)((int)lVar16 + 0xc4) * fVar20;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar1;
      lVar27 = lVar27 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar29;
      iVar25 = (int)lVar28;
      lVar29 = lVar29 + 0x10;
      lVar28 = lVar28 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar18 + 0xc4)) + *(float *)(iVar25 + 4)
                        + *(float *)(iVar25 + 8) + *(float *)(iVar25 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar26 + fVar3);
  }
  sVar13 = *(short *)((int)pfVar9 + 0x8e);
  *(float *)((int)pfVar9 + (int)((longlong)sVar13 << 2) + 0x1d0) = fVar12;
  *(float *)((int)pfVar9 + (int)((longlong)sVar13 << 2) + 0x158) = (float)dVar34;
  if (0.9 < fVar12) {
    sVar13 = *(short *)((int)pfVar9 + 0x8e);
    iVar18 = 1;
    fVar26 = pfVar9[0x29];
    iVar25 = 1;
    puVar8[0x1d] = (longlong)(int)(animationSpeed * 4.5);
    if (1 < *(int *)((int)puVar8 + 0xec)) {
      do {
        uVar6 = (int)pfVar9[(((sVar13 - iVar18) + 0x1e) / 0x1e) * -0x1e + (sVar13 - iVar18) + 0x92]
                >> 0x1f;
        iVar24 = (uVar6 >> 1 ^
                 (uint)pfVar9[(((sVar13 - iVar18) + 0x1e) / 0x1e) * -0x1e + (sVar13 - iVar18) + 0x92
                             ]) - uVar6;
        if (0x3f666666 < iVar24) break;
        if (iVar24 < 0x3e800000) {
          fVar26 = (float)((uint)fVar26 | 0x10000);
          pfVar9[0x29] = fVar26;
          break;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)((int)puVar8 + 0xec));
    }
    if (((uint)fVar26 & 0x10000) == 0) {
      dVar30 = 5.5;
      dVar32 = 0.9599310755729675;
      for (; puVar8[0x1d] = (longlong)(int)((double)animationSpeed * dVar30),
          iVar25 < *(int *)((int)puVar8 + 0xec); iVar25 = iVar25 + 1) {
        dVar31 = (double)FastSubRots
                                   (pfVar9[(((sVar13 - iVar25) + 0x1e) / 0x1e) * -0x1e +
                                           (sVar13 - iVar25) + 0x74],(float)dVar34);
        if (dVar32 < dVar31) {
          pfVar9[0x29] = (float)((uint)pfVar9[0x29] | 0x10000);
          break;
        }
        sVar13 = *(short *)((int)pfVar9 + 0x8e);
      }
    }
  }
  fVar26 = pfVar9[0x93];
  lVar29 = 0x10;
  fVar3 = pfVar9[0x28];
  pfVar9[(int)pfVar9[0x11a] + 0x9c] = pfVar9[0x2c];
  pfVar9[(int)fVar26 + 0x95] = fVar3;
  do {
    puVar17 = (undefined4 *)param_2;
    param_2 = param_2 + 4;
    iVar18 = iVar23 + (int)pfVar9[0x11a] * 0x40 + 0x28c;
    iVar23 = iVar23 + 4;
    *(undefined4 *)((int)pfVar9 + iVar18) = *puVar17;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  fVar26 = pfVar9[0x11a];
  iVar23 = *(short *)((int)pfVar9 + 0x8e) + 1;
  fVar3 = pfVar9[0x24];
  sVar13 = (short)(iVar23 >> 0x1f);
  pfVar9[0x94] = (float)((int)fVar26 +
                        ((uint)((longlong)((int)pfVar9[0x94] + 1) - (longlong)(int)fVar26 >> 0x3f) &
                        ((int)pfVar9[0x94] + 1) - (int)fVar26));
  pfVar9[0x93] = (float)(((int)pfVar9[0x93] + 1) % 7);
  *(float *)((int)pfVar9 + (int)((longlong)*(short *)((int)pfVar9 + 0x8e) << 2) + 0xe0) =
       pfVar9[0x29];
  fVar26 = pfVar9[0x28];
  *(short *)((int)pfVar9 + 0x8e) =
       (short)iVar23 +
       (((short)(iVar23 / 0x1e) + sVar13) - ((short)((short)(iVar23 / 0x1e0000) + sVar13) >> 0xf)) *
       -0x1e;
  pfVar9[0x24] = (float)(((uint)((longlong)((int)fVar3 + 1) + -0x1e >> 0x3f) & (int)fVar3 - 0x1dU) +
                        0x1e);
  if (*(char *)((int)pfVar9 + 0x44e) != '\0') {
    if ((fVar26 == 0.0) || (fVar26 != pfVar9[0x2b])) {
      *(undefined1 *)((int)pfVar9 + 0x44f) = *(undefined1 *)((int)pfVar9 + 0x44d);
    }
    else {
      cVar19 = *(char *)((int)pfVar9 + 0x44f) + -1;
      *(char *)((int)pfVar9 + 0x44f) = cVar19;
      if ((cVar19 == '\0') || (cVar19 == -1)) {
        *(char *)((int)pfVar9 + 0x44f) = *(char *)((int)pfVar9 + 0x44e);
        pfVar9[0x29] = fVar26;
      }
    }
  }
  return;
}


// 0x04ec160 (0x3e4 bytes)
// strings: 0065aa80: 'ERROR: (pad.cpp) cellPadGetInfo() error 0x%x\n' | 0065aab8: 'ERROR: (Update) 0x%x\n'

void idol::Pad_PS_Update(int param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  longlong lVar9;
  longlong lVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar13;
  int iVar14;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar15;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar15 = uVar6 - 0x1f0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar6;
  puVar4[0x40] = in_LR;
  puVar4[0x3c] = unaff_r30;
  puVar4[0x3d] = unaff_r31;
  puVar4[0x3a] = unaff_r28;
  puVar4[0x3b] = unaff_r29;
  uVar8 = cellPadGetInfo2(uVar6 - 0x120);
  uVar7 = puVar4[5];
  if ((int)uVar8 == 0) {
    iVar10 = 0;
    uVar13 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    do {
      iVar14 = (int)((uVar13 & 0xffffffff) << 2);
      if ((*(uint *)((int)puVar4 + iVar14 + 0xdc) & 1) != 0) {
        iVar10 = iVar10 + 1;
        *(int *)(param_1 + 4) = iVar10;
      }
      if ((*(uint *)((int)puVar4 + iVar14 + 0x114) & 4) != 0) {
        cellPadSetPortSetting(uVar13,6);
        uVar7 = puVar4[5];
        iVar10 = *(int *)(param_1 + 4);
      }
      piVar5 = g_pMsgDialog;
      iVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)iVar14;
    } while (iVar14 < 4);
    puVar4[5] = uVar7;
    (*(code *)**(undefined4 **)(*piVar5 + 8))(0x3f90624de0000000);
    uVar7 = puVar4[5];
    if (*(int *)(param_1 + 4) == 0) {
      FUN_0050544c(&DAT_0159b38c,1,&DAT_0065aab0);
      piVar5 = g_pMsgDialog;
      iVar10 = *g_pMsgDialog;
      puVar4[5] = uVar7;
      (*(code *)**(undefined4 **)(iVar10 + 0xc))
                (0,piVar5,7,0,2,*(undefined4 **)(iVar10 + 0xc),1,0,&PTR_FUN_00710138);
    }
    iVar10 = (int)(param_2 << 2);
    uVar1 = *(uint *)((int)puVar4 + iVar10 + 0xdc);
    if (uVar1 == 0) {
      *(undefined4 *)(param_3 + 0x9c) = 0;
      *(undefined1 *)(param_3 + 0x458) = 0;
      FUN_005055e8(param_1,param_3);
    }
    else if ((uVar1 & 1) == 0) {
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(param_3 + 0x9c) = 0;
        FUN_005055e8(param_1,param_3);
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x9c) = 1;
      *(undefined1 *)(param_3 + 0x458) = 1;
      uVar8 = cellPadGetData(param_2 & 0xffffffff,uVar6 - 0xa4);
      if ((int)uVar8 != 0) {
        print_tty("ERROR: (Update) 0x%x\n",uVar8);
        *(undefined4 *)(param_3 + 0x9c) = 3;
      }
      if (*(int *)((int)puVar4 + 0x14c) == 0) {
        lVar15 = 0x10;
        iVar14 = 0;
        do {
          iVar11 = iVar14;
          uVar2 = *(undefined4 *)(iVar11 + param_3 + 0x4e0);
          *(undefined4 *)((int)puVar4 + iVar11 + 0x40) = *(undefined4 *)(iVar11 + param_3 + 0x4dc);
          *(undefined4 *)((int)puVar4 + iVar11 + 0x44) = uVar2;
          lVar15 = lVar15 + -1;
          iVar14 = iVar11 + 8;
        } while (lVar15 != 0);
        *(undefined4 *)((int)puVar4 + iVar11 + 0x48) = *(undefined4 *)(param_3 + iVar11 + 8 + 0x4dc)
        ;
        FUN_004eb6e8(param_1,param_3,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],
                     puVar4[0xd]);
      }
      else {
        lVar12 = uVar6 - 0xa4;
        lVar9 = uVar6 - 0xa0;
        lVar16 = 8;
        do {
          iVar14 = (int)lVar15;
          uVar2 = *(undefined4 *)((int)lVar12 + 8);
          *(undefined4 *)(iVar14 + 0x40) = *(undefined4 *)(iVar14 + 0x14c);
          uVar3 = *(undefined4 *)((int)lVar9 + 8);
          lVar12 = lVar12 + 0x10;
          *(undefined4 *)(iVar14 + 0x44) = *(undefined4 *)(iVar14 + 0x150);
          lVar9 = lVar9 + 0x10;
          *(undefined4 *)(iVar14 + 0x48) = uVar2;
          *(undefined4 *)(iVar14 + 0x4c) = uVar3;
          lVar15 = lVar15 + 0x10;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        *(undefined4 *)(puVar4 + 0x18) = *(undefined4 *)((int)puVar4 + 0x1cc);
        FUN_004eb6e8(param_1,param_3,puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],puVar4[0xc],
                     puVar4[0xd]);
        lVar15 = 0x10;
        iVar14 = 0;
        do {
          iVar11 = iVar14;
          uVar2 = *(undefined4 *)((int)puVar4 + iVar11 + 0x150);
          *(undefined4 *)(iVar11 + param_3 + 0x4dc) = *(undefined4 *)((int)puVar4 + iVar11 + 0x14c);
          *(undefined4 *)(iVar11 + param_3 + 0x4e0) = uVar2;
          lVar15 = lVar15 + -1;
          iVar14 = iVar11 + 8;
        } while (lVar15 != 0);
        *(undefined4 *)(param_3 + iVar11 + 8 + 0x4dc) =
             *(undefined4 *)((int)puVar4 + iVar11 + 0x154);
        memcpy((void *)(param_3 + 0x474),puVar4 + 0x2a,0x28);
      }
    }
    if ((puVar4[0x1b] & 0x100000000) == 0) {
      *(undefined1 *)(param_3 + 0x560) = 0;
      *(undefined1 *)(param_3 + 0x88) = 0;
      *(undefined1 *)(param_3 + 0x89) = 0;
    }
    else {
      if ((*(uint *)((int)puVar4 + iVar10 + 0xdc) & 1) != 0) {
        FUN_005055e8(param_1,param_3);
      }
      *(undefined1 *)(param_3 + 0x560) = 1;
    }
  }
  else {
    print_tty("ERROR: (pad.cpp) cellPadGetInfo() error 0x%x\n",uVar8);
  }
  return;
}


// 0x04ec544 (0x20 bytes)
ulonglong FUN_004ec544(void)

{
  return (ulonglong)-(longlong)*(int *)(g_pPadDriver + 4) >> 0x3f;
}


// 0x04ec568 (0x184 bytes)
// strings: 0065aad8: 'WwsLightTfrag'

void FUN_004ec568(u8 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  GPiece<16> local_30;
  
  puVar1 = param_1 + 0x120208;
  *param_1 = 0;
  FUN_004f4d1c(puVar1,param_1 + 0x20,0x80000,"WwsLightTfrag");
  if (DAT_01592384 == '\0') {
    FUN_004f1c18(puVar1,PTR_DAT_008fa624,local_30,DAT_008fa628,0x10,0);
  }
  else {
    FUN_004f1c18(puVar1,PTR_DAT_008fa624,local_30,1,0x10,0);
  }
  iVar3 = 0;
  cVar4 = '@';
  param_1[0x120317] = 0;
  param_1[0x120316] = 0;
  param_1[0x120318] = 0;
  do {
    puVar1 = (undefined4 *)cellGcmGetLabelAddress(cVar4);
    param_1[0x12002a] = puVar1;
    *puVar1 = 1;
    puVar1 = (undefined4 *)cellGcmGetLabelAddress(cVar4 + '\x05');
    iVar3 = iVar3 + 1;
    puVar2 = param_1 + 0x12002f;
    cVar4 = cVar4 + '\x01';
    param_1 = param_1 + 1;
    *puVar2 = puVar1;
    *puVar1 = 1;
  } while (iVar3 < 5);
  return;
}


// 0x04ec6ec (0x158 bytes)
void * idol_draw::InitFrameRenderState
                 (int param_1,void *param_2,int param_3,void *param_4,int param_5,void *param_6,
                 longlong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(int *)(param_1 + 0x480810) = param_3;
  *(int *)(param_1 + 0x480814) = param_5;
  if (param_3 != 0) {
    memcpy((void *)(param_1 + 0x4800d0),param_2,param_3 << 6);
  }
  if (param_5 != 0) {
    memcpy((void *)((int)&DAT_004804d0 + param_1),param_4,param_5 << 5);
  }
  puVar1 = (undefined4 *)(param_1 + 0x4806b0U & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x4806c0U & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  iVar3 = DAT_00902e9c;
  puVar1 = (undefined4 *)(DAT_00902e9c + 0x20U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x480700U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806d0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x40U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806e0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  puVar1 = (undefined4 *)(iVar3 + 0x50U & 0xfffffff0);
  uVar7 = puVar1[2];
  uVar6 = puVar1[1];
  uVar5 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x4806f0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar7;
  puVar2[1] = uVar6;
  *puVar2 = uVar5;
  pvVar4 = memcpy((void *)(param_1 + 0x480710),param_6,(size_t)(param_7 << 4));
  return pvVar4;
}


// 0x04ec844 (0x60 bytes)
void FUN_004ec844(int *param_1,longlong param_2)

{
  if ((*(char *)(g_pIdolDraw + 0x10) == '\0') || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
    **(undefined4 **)((int)param_1 + (int)(param_2 << 2) + *param_1 * 0x14 + 0x4800a8) = 0;
  }
  return;
}


// 0x04ec8a4 (0x3e0 bytes)
void FUN_004ec8a4(int *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  GPiece<32> local_a0;
  undefined8 local_80;
  GPiece<32> auStack_78;
  
  bVar1 = *(char *)(g_pIdolDraw + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
    if (param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002a] = 0;
      }
    }
    else {
      FUN_004f0e44(auStack_78,
                   param_1 + *param_1 * 0x80000 + param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,
                   0x10000);
      lVar8 = FUN_004f5308(&DAT_01111680);
      lVar9 = ((ulonglong)param_3 & 0xfffffff) * 0x10;
      uVar4 = lVar9 + ((ulonglong)param_3 & 0x3f) * -0x10 + 0x400 & 0xffffffff;
      uVar5 = lVar8 + 0x10U & 0xffffffff;
      lVar9 = uVar4 + (ZERO_MASK((param_3 & 0x3f)) & lVar9 - uVar4);
      uVar6 = uVar5 + 2 & 0xffffffff;
      uVar4 = (ulonglong)(lVar9 << 0x20) >> 0x2a;
      param_1[*param_1 * 5 + 0x120020] = 1;
      FUN_004f0e94(auStack_78);
      FUN_004f0f10(auStack_78,0,1,0x10,lVar8);
      FUN_004f0f10(auStack_78,1,1,uVar5,2);
      FUN_004f0f10(auStack_78,2,1,uVar6,uVar4);
      FUN_004f0f10(auStack_78,3,1,uVar6 + uVar4 & 0xffffffff,0x50);
      FUN_004f12bc(auStack_78,0,0,&DAT_01111680,0);
      FUN_004f1018(auStack_78,1,0,param_1 + 0x120034,0x750,0);
      FUN_004f1018(auStack_78,2,0,param_2,lVar9,0);
      FUN_004f1074(auStack_78,3,0,0,0,0);
      FUN_004f10c8(auStack_78,0xf);
      FUN_004f1198(auStack_78,0,0);
      FUN_004f121c(auStack_78,local_a0,0x20);
      FUN_004f1144(&local_80,auStack_78);
      *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
           local_80;
      uVar7 = DAT_01592381;
      iVar2 = *param_1;
      iVar3 = param_1[iVar2 + 0x120316];
      param_1[iVar2 + 0x120316] = iVar3 + 1;
      *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar7;
    }
  }
  return;
}


// 0x04ecc84 (0x4c0 bytes)
void FUN_004ecc84(int *param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  GPiece<32> local_f0;
  undefined8 local_d0;
  GPiece<56> auStack_c8;
  
  bVar1 = *(char *)(g_pIdolDraw + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002b] = 0;
      }
    }
    else {
      lVar10 = FUN_004f5308(&DAT_01111688);
      uVar11 = (int)param_3 + 0x3ff;
      uVar13 = ((int)uVar11 >> 10) + (uint)((int)uVar11 < 0 && (uVar11 & 0x3ff) != 0);
      uVar11 = 0;
      uVar5 = lVar10 + 0x10U & 0xffffffff;
      param_1[*param_1 * 5 + 0x120021] = uVar13;
      if (uVar13 != 0) {
        uVar12 = (param_3 & 0xffffffff) / (ulonglong)uVar13 + 1;
        uVar6 = uVar5 + 2 & 0xffffffff;
        do {
          FUN_004f0e44(auStack_c8,
                       param_1 + *param_1 * 0x80000 +
                                 param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,0x10000);
          lVar15 = uVar12 + ((longlong)((param_3 & 0xffffffff) - (uVar12 & 0xffffffff)) >> 0x3f &
                            param_3 - uVar12);
          uVar4 = lVar15 * 0x50 & 0xffffffff;
          uVar7 = lVar15 * 0x50 & 0x3ff;
          uVar8 = (uVar4 - uVar7) + 0x400 & 0xffffffff;
          lVar14 = uVar8 + (ZERO_MASK((int)uVar7) & uVar4 - uVar8);
          uVar4 = (ulonglong)(lVar14 << 0x20) >> 0x2a;
          uVar7 = uVar4 + uVar6 & 0xffffffff;
          FUN_004f0e94(auStack_c8);
          FUN_004f0f10(auStack_c8,0,1,0x10,lVar10);
          FUN_004f0f10(auStack_c8,1,1,uVar5,2);
          FUN_004f0f10(auStack_c8,2,1,uVar6,uVar4);
          FUN_004f0f10(auStack_c8,3,1,uVar7,0xf8 - uVar7 & 0xffffffff);
          FUN_004f12bc(auStack_c8,0,0,&DAT_01111688,0);
          FUN_004f1018(auStack_c8,1,0,param_1 + 0x120034,0x750,0);
          FUN_004f1018(auStack_c8,2,0,param_2,lVar14,0);
          FUN_004f1074(auStack_c8,3,0,0,0,0);
          FUN_004f10c8(auStack_c8,0xf);
          FUN_004f1198(auStack_c8,0,0);
          FUN_004f121c(auStack_c8,local_f0,0x20);
          FUN_004f1144(&local_d0,auStack_c8);
          uVar11 = uVar11 + 1;
          param_3 = param_3 - lVar15;
          *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
               local_d0;
          uVar9 = DAT_01592380;
          iVar2 = *param_1;
          iVar3 = param_1[iVar2 + 0x120316];
          param_1[iVar2 + 0x120316] = iVar3 + 1;
          *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar9;
          param_2 = param_2 + lVar15 * 0x50 & 0xffffffff;
        } while (uVar11 < uVar13);
      }
    }
  }
  return;
}


// 0x04ed144 (0x3e8 bytes)
void FUN_004ed144(int *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  GPiece<32> local_a0;
  undefined8 local_80;
  GPiece<32> auStack_78;
  
  bVar1 = *(char *)(g_pIdolDraw + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002c] = 0;
      }
    }
    else {
      FUN_004f0e44(auStack_78,
                   param_1 + *param_1 * 0x80000 + param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,
                   0x10000);
      lVar9 = FUN_004f5308(&DAT_01111698);
      uVar4 = param_3 * 0x50 & 0xffffffff;
      uVar5 = param_3 * 0x50 & 0x3ff;
      uVar6 = lVar9 + 0x10U & 0xffffffff;
      uVar7 = (uVar4 - uVar5) + 0x400 & 0xffffffff;
      lVar10 = uVar7 + (ZERO_MASK((int)uVar5) & uVar4 - uVar7);
      uVar5 = uVar6 + 2 & 0xffffffff;
      uVar4 = (ulonglong)(lVar10 << 0x20) >> 0x2a;
      param_1[*param_1 * 5 + 0x120022] = 1;
      FUN_004f0e94(auStack_78);
      FUN_004f0f10(auStack_78,0,1,0x10,lVar9);
      FUN_004f0f10(auStack_78,1,1,uVar6,2);
      FUN_004f0f10(auStack_78,2,1,uVar5,uVar4);
      FUN_004f0f10(auStack_78,3,1,uVar5 + uVar4 & 0xffffffff,0x50);
      FUN_004f12bc(auStack_78,0,0,&DAT_01111698,0);
      FUN_004f1018(auStack_78,1,0,param_1 + 0x120034,0x750,0);
      FUN_004f1018(auStack_78,2,0,param_2,lVar10,0);
      FUN_004f1074(auStack_78,3,0,0,0,0);
      FUN_004f10c8(auStack_78,0xf);
      FUN_004f1198(auStack_78,0,0);
      FUN_004f121c(auStack_78,local_a0,0x20);
      FUN_004f1144(&local_80,auStack_78);
      *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
           local_80;
      uVar8 = DAT_01592383;
      iVar2 = *param_1;
      iVar3 = param_1[iVar2 + 0x120316];
      param_1[iVar2 + 0x120316] = iVar3 + 1;
      *(undefined1 *)(param_1 + iVar2 * 0x80 + iVar3 * 4 + 0x120218) = uVar8;
    }
  }
  return;
}


// 0x04ed52c (0x53c bytes)
void FUN_004ed52c(int *param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  GPiece<32> local_110;
  undefined8 local_f0;
  GPiece<24> auStack_e8;
  ulonglong local_d0;
  
  bVar1 = *(char *)(g_pIdolDraw + 0x10) == '\0';
  if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
    if ((int)param_3 == 0) {
      if ((bVar1) || ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) == 0)) {
        *(undefined4 *)param_1[*param_1 * 5 + 0x12002d] = 0;
      }
    }
    else {
      lVar7 = FUN_004f5308(&DAT_01111690);
      uVar9 = ((longlong)(4 - param_3) >> 0x3f & 4U) + 1;
      uVar11 = (param_3 & 0xffffffff) / uVar9;
      iVar10 = (int)uVar9;
      uVar13 = (longlong)(int)uVar11 * (longlong)iVar10;
      uVar12 = 0;
      param_1[*param_1 * 5 + 0x120023] = iVar10;
      if (iVar10 != 0) {
        uVar3 = (lVar7 + 0x10U & 0xffffffff) + 2 & 0xffffffff;
        uVar14 = param_3;
        local_d0 = param_2;
        do {
          FUN_004f0e44(auStack_e8,
                       param_1 + *param_1 * 0x80000 +
                                 param_1[*param_1 + 0x120316] * 0x4000 + 0x20020,0x10000);
          uVar8 = uVar11 + ((longlong)((uVar13 & 0xffffffff) - (param_3 & 0xffffffff)) >> 0x3f & 1U)
          ;
          lVar16 = uVar8 + ((longlong)((uVar14 & 0xffffffff) - (uVar8 & 0xffffffff)) >> 0x3f &
                           uVar14 - uVar8);
          uVar8 = lVar16 * 0xb0 & 0xffffffff;
          uVar4 = lVar16 * 0xb0 & 0x3ff;
          uVar5 = (uVar8 - uVar4) + 0x400 & 0xffffffff;
          lVar15 = uVar5 + (ZERO_MASK((int)uVar4) & uVar8 - uVar5);
          uVar8 = (ulonglong)(lVar15 << 0x20) >> 0x2a;
          uVar4 = uVar8 + uVar3 & 0xffffffff;
          FUN_004f0e94(auStack_e8);
          FUN_004f0f10(auStack_e8,0,1,0x10,lVar7);
          FUN_004f0f10(auStack_e8,1,1,(int)(lVar7 + 0x10U),2);
          FUN_004f0f10(auStack_e8,2,1,uVar3,uVar8);
          FUN_004f0f10(auStack_e8,3,1,uVar4,0xf8 - uVar4 & 0xffffffff);
          FUN_004f12bc(auStack_e8,0,0,&DAT_01111690,0);
          FUN_004f1018(auStack_e8,1,0,param_1 + 0x120034,0x750,0);
          FUN_004f1018(auStack_e8,2,0,local_d0,lVar15,0);
          FUN_004f1074(auStack_e8,3,0,0,0,0);
          FUN_004f10c8(auStack_e8,0xf);
          FUN_004f1198(auStack_e8,0,0);
          FUN_004f121c(auStack_e8,local_110,0x20);
          FUN_004f1144(&local_f0,auStack_e8);
          uVar12 = uVar12 + 1;
          *(undefined8 *)(param_1 + *param_1 * 0x80 + param_1[*param_1 + 0x120316] * 4 + 0x120216) =
               local_f0;
          uVar6 = DAT_01592382;
          iVar10 = *param_1;
          uVar14 = uVar14 - lVar16;
          iVar2 = param_1[iVar10 + 0x120316];
          param_1[iVar10 + 0x120316] = iVar2 + 1;
          *(undefined1 *)(param_1 + iVar10 * 0x80 + iVar2 * 4 + 0x120218) = uVar6;
          local_d0 = local_d0 + lVar16 * 0xb0 & 0xffffffff;
          uVar13 = uVar13 + ((longlong)((uVar13 & 0xffffffff) - (param_3 & 0xffffffff)) >> 0x3f & 1U
                            );
        } while ((uVar12 & 0xffffffff) < uVar9);
      }
    }
  }
  return;
}


// 0x04eda68 (0x200 bytes)
// strings: 0065aae8: 'TfragWait' | 0065aaf8: 'TieWait' | 0065ab00: 'ShrubWait' | 0065ab10: 'MobyWait' | 0065ab20: 'Assertion failed at %s(%d): %s\n' | 0065ab40: 'j:/Ratchet/Source/CommonRC1/PS3/Ratchet_PS/LightSetup.cpp'

void idol_draw::Insert_WaitCmd_Marker(uint *param_1,RenderingStep *param_2,longlong param_3)

{
  undefined4 uVar1;
  RsxCmd *pRVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  
  if ((*(char *)(g_pIdolDraw + 0x10) != '\0') && ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) != 0)) {
    return;
  }
  uVar4 = param_3 + (ulonglong)*param_1 * 5 + 0x40;
  uVar3 = (uint)uVar4 & 0xff;
  if (uVar3 == 0x48) {
LAB_004edb54:
    RsxCmd_DebugStr_Marker(param_2,"MobyWait");
  }
  else {
    if (uVar3 == 0x47) {
LAB_004edb3c:
      RsxCmd_DebugStr_Marker(param_2,"ShrubWait");
      goto LAB_004edba0;
    }
    if (uVar3 == 0x46) {
LAB_004edb24:
      RsxCmd_DebugStr_Marker(param_2,"TieWait");
      goto LAB_004edba0;
    }
    if (uVar3 != 0x45) {
      if (uVar3 == 0x43) goto LAB_004edb54;
      if (uVar3 == 0x42) goto LAB_004edb3c;
      if (uVar3 == 0x41) goto LAB_004edb24;
      if (uVar3 != 0x40) {
        print_tty("Assertion failed at %s(%d): %s\n",
                  "j:/Ratchet/Source/CommonRC1/PS3/Ratchet_PS/LightSetup.cpp",0x212,&DAT_0065ab80);
        trapWord(0x1f,in_LR,in_LR);
        goto LAB_004edba0;
      }
    }
    RsxCmd_DebugStr_Marker(param_2,"TfragWait");
  }
LAB_004edba0:
  uVar1.piece<0,1>() = param_2[0xc].field0_0x0;
  uVar1.piece<1,1>() = param_2[0xc].field1_0x1;
  uVar1.piece<2,1>() = param_2[0xc].field2_0x2;
  uVar1.piece<3,1>() = param_2[0xc].field3_0x3;
  FUN_004e3114(g_pIdolDraw,uVar1);
  *param_2->command = 0x40064;
  param_2->command[1] = (RsxCmd)((uVar4 & 0xffffffff) << 4) & 0xff0;
  pRVar2 = param_2->command;
  param_2->command = pRVar2 + 2;
  pRVar2[2] = 0x40068;
  param_2->command[1] = 0;
  uVar3 = *param_1;
  param_2->command = param_2->command + 2;
  **(undefined4 **)((int)param_1 + (int)(param_3 << 2) + uVar3 * 0x14 + 0x4800a8) = 1;
  RsxCmd_WritePass(param_2);
  return;
}


// 0x04edc68 (0x64 bytes)
void FUN_004edc68(int param_1,int param_2)

{
  int iVar1;
  
  **(undefined4 **)(param_2 + 8) = 0x40064;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0x440;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_2 + 8) = iVar1 + 8;
  *(undefined4 *)(iVar1 + 8) = 0x40068;
  *(undefined4 *)(*(int *)(param_2 + 8) + 4) = 0;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 8;
  **(undefined4 **)(param_1 + 0x4800b8) = 1;
  return;
}


// 0x04edccc (0x18 bytes)
void FUN_004edccc(int param_1)

{
  **(undefined4 **)(param_1 + 0x4800b8) = 0;
  return;
}


// 0x04edce4 (0x18 bytes)
void FUN_004edce4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x480c60) = *(int *)(param_1 + 0x480c60) + param_2;
  return;
}


// 0x04edcfc (0x34 bytes)
void FUN_004edcfc(int param_1)

{
  idol_draw::CmdQueue_WaitForSpaceAndSync(param_1 + 0x480820);
  return;
}


// 0x04edd30 (0x94 bytes)
void FUN_004edd30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  idol_draw::CmdQueue_WaitForSpaceAndSync(param_1 + 0x480820);
  lVar4 = 5;
  iVar1 = param_1;
  do {
    puVar2 = (undefined4 *)(iVar1 + 0x4800a8);
    puVar3 = (undefined4 *)(iVar1 + 0x4800bc);
    iVar1 = iVar1 + 4;
    puVar3 = (undefined4 *)*puVar3;
    *(undefined4 *)*puVar2 = 0;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(int *)(param_1 + 0x480c60) = *(int *)(param_1 + 0x480c60) + -1;
  return;
}


// 0x04eddc4 (0x270 bytes)
void idol_draw::Spurs_FlushAndSwapQueue(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  GPiece<8> auStack_40;
  GPiece<8> auStack_38;
  
  if ((*(char *)(g_pIdolDraw + 0x10) != '\0') && ((*(uint *)(g_pIdolDraw + 0x1a6c) & 1) != 0)) {
    return;
  }
  if (param_1[0x120318] != 0) {
    CmdQueue_WaitForSpaceAndSync(param_1 + 0x120208);
    lVar10 = 5;
    puVar5 = param_1;
    do {
      puVar6 = puVar5 + 0x12002a;
      puVar7 = puVar5 + 0x12002f;
      puVar5 = puVar5 + 1;
      *(undefined4 *)*puVar6 = 0;
      *(undefined4 *)*puVar7 = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    param_1[0x120318] = param_1[0x120318] - 1;
  }
  puVar5 = param_1 + 0x120208;
  CmdQueue_WaitForSpaceAndSync(puVar5);
  CmdQueue_Reset(puVar5);
  if (param_1 + 0x120316 != (uint *)0x0) {
    uVar8 = 0;
    uVar1 = *param_1;
    bVar2 = false;
    if (param_1[uVar1 + 0x120316] != 0) {
      iVar9 = 0;
      do {
        iVar3 = iVar9 + uVar1 * 0x200;
        puVar4 = (undefined8 *)((int)param_1 + iVar3 + 0x480858);
        if (*(char *)((int)param_1 + iVar3 + 0x480860) == '\0') {
          CmdQueue_PushEntry(auStack_38,puVar5,*puVar4);
        }
        else {
          CmdQueue_PushEntry_Blocking(auStack_40,puVar5,*puVar4);
          bVar2 = true;
        }
        uVar1 = *param_1;
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x10;
      } while (uVar8 < (param_1 + 0x120316)[uVar1]);
      if (bVar2) {
        CmdQueue_Submit(puVar5,1);
        CmdQueue_WaitForSpaceAndSync(puVar5);
        goto LAB_004edfdc;
      }
    }
    CmdQueue_Submit(puVar5,DAT_008fa628);
  }
LAB_004edfdc:
  uVar1 = *param_1;
  *param_1 = (uint)(1 - (ulonglong)uVar1);
  *(undefined4 *)((int)param_1 + (int)((1 - (ulonglong)uVar1 & 0xffffffff) << 2) + 0x480c58) = 0;
  return;
}


// 0x04ee034 (0x6c bytes)
void FUN_004ee034(void)

{
  FUN_004f539c(&DAT_01111698,2);
  FUN_004f539c(&DAT_01111690,2);
  FUN_004f539c(&DAT_01111688,2);
  FUN_004f539c(&DAT_01111680,2);
  return;
}


// 0x04ee0a8 (0x138 bytes)
// strings: 0065ab84: 'JobLightTfrag' | 0065ab94: 'JobLightTie' | 0065aba4: 'JobSkinLightMoby' | 0065abbc: 'JobLightShrubs'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ee0a8(void)

{
  undefined8 in_LR;
  GPiece<16> auVar1;
  
  FUN_004f5898(&DAT_01111680,&DAT_0090a180,0x1690,"JobLightTfrag");
  FUN_004f5898(&DAT_01111688,&DAT_0090b880,0x1e10,"JobLightTie");
  FUN_004f5898(&DAT_01111690,&DAT_00907080,0x3090,"JobSkinLightMoby");
  FUN_004f5898(&DAT_01111698,&DAT_00905900,0x1710,"JobLightShrubs");
  uRam011116ac = 0;
  uRam011116a8 = 0;
  uRam011116a4 = 0;
  _DAT_011116a0 = 0;
  auVar1 = loadVectorLeftIndexed(in_LR,0x4ee0a0);
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  _DAT_011116b0 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = loadVectorLeftIndexed(4,0x4ee0a0);
  DAT_01591f20 = 0;
  auVar1 = auVar1 >> 0x60 & (GPiece<16>)0xffffffff;
  DAT_01591f24 = 0;
  DAT_01591f28 = 0xffffffff;
  DAT_01591f2c = 0xffffffff;
  _DAT_011116c0 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_01591f40 = 0;
  return;
}


// 0x04ee1e0 (0x18c bytes)
void FUN_004ee1e0(u8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[9] = 0;
  param_1[0x130] = 0;
  DAT_008fabd4 = param_1;
  memset((int)param_1 + 0x29,0,0x80);
  memset((int)param_1 + 0xa9,0,0x80);
  memset((int)param_1 + 0x129,0,0x80);
  memset((int)param_1 + 0x1a9,0,0x80);
  memset((int)param_1 + 0x229,0,0x80);
  memset((int)param_1 + 0x2a9,0,0x80);
  memset((int)param_1 + 0x329,0,0x80);
  memset((int)param_1 + 0x3a9,0,0x80);
  *(undefined1 *)((int)param_1 + 0x429) = 0;
  *(undefined1 *)((int)param_1 + 0x42a) = 0;
  *(undefined1 *)((int)param_1 + 0x42b) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined1 *)((int)param_1 + 0x42d) = 0;
  *(undefined1 *)((int)param_1 + 0x42e) = 0;
  *(undefined1 *)((int)param_1 + 0x42f) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((int)param_1 + 0x431) = 0;
  *(undefined1 *)((int)param_1 + 0x432) = 0;
  memset((int)param_1 + 0x433,0,0x80);
  *(undefined1 *)((int)param_1 + 0x4b3) = 0;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined1 *)((int)param_1 + 0x4b5) = 0;
  *(undefined1 *)((int)param_1 + 0x4b6) = 0;
  *(undefined1 *)((int)param_1 + 0x4b7) = 0;
  *(undefined1 *)(param_1 + 0x12e) = 0;
  return;
}


// 0x04ee36c (0x20 bytes)
void FUN_004ee36c(void)

{
  FUN_004ee1e0();
  return;
}


// 0x04ee38c (0x70 bytes)
// strings: 0065abcc: 'GameContent' | 0065abdc: 'gamecontent thread create failed %d\n'

undefined8 FUN_004ee38c(undefined4 param_1)

{
  undefined8 uVar1;
  GPiece<16> auStack_10;
  
  uVar1 = sys_ppu_thread_create
                    (auStack_10,&PTR_FUN_00710298,param_1,0x3e9,0x4000,0,"GameContent");
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    print_tty("gamecontent thread create failed %d\n",uVar1);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}


// 0x04ee3fc (0x198 bytes)
// strings: 0065abcc: 'GameContent' | 0065abdc: 'gamecontent thread create failed %d\n'

undefined8 FUN_004ee3fc(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  GPiece<8> auStack_10;
  
  iVar1 = *param_1;
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      cellSysutilCheckCallback();
    }
  }
  else if (iVar1 < 2) {
    uVar2 = sys_ppu_thread_create
                      (auStack_10,&PTR_FUN_00710298,param_1,0x3e9,0x4000,0,"GameContent");
    if ((int)uVar2 == 0) {
      param_1[2] = 1;
    }
    else {
      print_tty("gamecontent thread create failed %d\n",uVar2);
    }
    *param_1 = 2;
  }
  else if ((iVar1 < 3) && (cellSysutilCheckCallback(), param_1[2] == 0)) {
    *param_1 = 0;
  }
  if (*param_1 == 0) {
    iVar1 = param_1[1];
    if (iVar1 == 5) {
      param_1[1] = 6;
      *param_1 = 1;
    }
    else if (iVar1 == 4) {
      param_1[1] = 6;
      *param_1 = 1;
    }
    else if (iVar1 == 3) {
      param_1[1] = 6;
      *param_1 = 0;
    }
    else if (iVar1 == 2) {
      param_1[1] = 4;
      *param_1 = 1;
    }
    else if (iVar1 == 1) {
      param_1[1] = 4;
      *param_1 = 1;
    }
    else if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 1;
    }
  }
  syscall();
  return 0x640;
}


// 0x04ee594 (0x54 bytes)
void FUN_004ee594(u8 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
  while (iVar1 != 6) {
    FUN_004ee3fc(param_1);
    iVar1 = *(int *)(param_1 + 4);
  }
  return;
}


// 0x04ee5e8 (0x58 bytes)
void FUN_004ee5e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[0x131] = param_2;
  param_1[1] = 3;
  *param_1 = 1;
  param_1[7] = param_3;
  param_1[8] = param_4;
  do {
    FUN_004ee3fc(param_1);
  } while (param_1[1] != 6);
  return;
}


// 0x04ee640 (0x1c bytes)
int FUN_004ee640(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    param_1 = param_1 + 0xa9;
  }
  else {
    param_1 = param_1 + 0x2a9;
  }
  return param_1;
}


// 0x04ee65c (0x1bc bytes)
// strings: 0065ac04: 'cellGameBootCheck() Error: 0x%x\n' | 0065ac2c: '  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065accc: '*********************Error, you requested %d kbytes, there were only %d free\n'

bool FUN_004ee65c(int param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  GPiece<40> auStack_48;
  
  if (param_3 != '\0') {
    uVar4 = cellGameBootCheck(&local_60,&local_5c,&local_58,auStack_48);
    if ((int)uVar4 < 0) {
      print_tty("cellGameBootCheck() Error: 0x%x\n",uVar4);
      return (bool)2;
    }
    print_tty2("  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n",(ulonglong)local_60,
               (ulonglong)local_5c,auStack_48);
    print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",local_58,local_54,local_50)
    ;
    *(undefined4 *)(param_1 + 0x4c0) = local_58;
    uVar4 = cellGameContentPermit(param_1 + 0x29,param_1 + 0xa9);
    if ((int)uVar4 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar4);
      return (bool)2;
    }
    *(undefined4 *)(param_1 + 0x4c0) = local_58;
  }
  uVar1 = *(uint *)(param_1 + 0x4c0);
  if (uVar1 < param_2) {
    print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
              param_2,uVar1);
    uVar3 = param_2 - uVar1;
    iVar2 = (uVar3 - (uVar3 & 0x3ff)) + 0x400;
    print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
              param_2,uVar1);
    cellGameContentErrorDialog
              (0x66,iVar2 + ((uint)(ZERO_MASK((uVar3 & 0x3ff))) & uVar3 - iVar2),0)
    ;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  }
  return uVar1 < param_2;
}


// 0x04ee818 (0x13c bytes)
// strings: 0065ad1c: 'GetHddGameParameters() Error: 0x%x\n' | 0065ad44: 'Trying as game data\n' | 0065ad5c: 'GetHddGameParameters() as GameData Error: 0x%x\n' | 0065ad8c: 'cellGameDataCheck() hdd game is not found\n' | 0065adbc: 'cellGameContentPermit() HddGame Error: 0x%x\n' | 0065adec: '  m_hddGamePath:[%s]\n' | 0065ae04: '  m_hddGameUserPath:[%s]\n'

void FUN_004ee818(longlong param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00504d48(g_pHWSystem);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 4);
    uVar2 = cellGameDataCheck(2,uVar1,0);
    if ((int)uVar2 < 0) {
      print_tty("GetHddGameParameters() Error: 0x%x\n",uVar2);
      print_tty("Trying as game data\n");
      uVar2 = cellGameDataCheck(3,uVar1,0);
      if ((int)uVar2 < 0) {
        print_tty("GetHddGameParameters() as GameData Error: 0x%x\n",uVar2);
        return;
      }
    }
    if ((int)uVar2 == 2) {
      print_tty("cellGameDataCheck() hdd game is not found\n");
    }
    uVar2 = cellGameContentPermit(param_1 + 0x329,param_1 + 0x3a9);
    if ((int)uVar2 < 0) {
      print_tty("cellGameContentPermit() HddGame Error: 0x%x\n",uVar2);
    }
    else {
      print_tty2("  m_hddGamePath:[%s]\n",param_1 + 0x329);
      print_tty2("  m_hddGameUserPath:[%s]\n",param_1 + 0x3a9);
    }
  }
  return;
}


// 0x04ee954 (0x4 bytes)
void FUN_004ee954(void)

{
  return;
}


// 0x04ee958 (0x2a4 bytes)
// strings: 0065ae20: 'DATA' (raw) | 0065ae28: 'CreateGameData Error: 0x%x\n' | 0065ae48: 'GameData exists\n' | 0065ae60: 'Creating new gamedata\n' | 0065accc: '*********************Error, you requested %d kbytes, there were only %d free\n' | 0065ae78: '01.00' | 0065ae80: 'cellGameCreateGameData() Error: 0x%x\n' | 0065aea8: 'cellGameCreateGameData() OK\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065aec8: 'cellGameContentPermit() OK\n' | 0065aee8: '  m_gameDataPath:[%s]\n' | 0065af00: '  m_gameDataUserPath:[%s]\n'

void FUN_004ee958(int param_1)

{
  char *__src;
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  GPiece<16> local_180;
  char acStack_170 [128];
  GPiece<128> auStack_f0;
  GPiece<12> auStack_70;
  GPiece<76> auStack_64;
  
  __src = (char *)FUN_00504c58(g_pHWSystem);
  strcpy(acStack_170,__src);
  iVar2 = FUN_00504d90(g_pHWSystem);
  if (iVar2 == 0) {
    FUN_005cc44c(acStack_170,&DAT_0065ae20);
  }
  uVar1 = cellGameDataCheck(3,acStack_170,local_180);
  if ((int)uVar1 < 0) {
    print_tty("CreateGameData Error: 0x%x\n",uVar1);
  }
  else {
    if ((int)uVar1 == 2) {
      print_tty2("Creating new gamedata\n");
      uVar3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20);
      if (0 < (int)uVar3) {
        iVar2 = (uVar3 - (uVar3 & 0x3ff)) + 0x400;
        iVar2 = iVar2 + ((uint)(ZERO_MASK((uVar3 & 0x3ff))) & uVar3 - iVar2);
        print_tty("*********************Error, you requested %d kbytes, there were only %d free\n",
                  iVar2,0);
        cellGameContentErrorDialog(0x66,iVar2,0);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
        return;
      }
      memset(auStack_f0,0,0xd4);
      strcpy(auStack_f0,param_1 + 0x433,0x7f);
      strcpy(auStack_70,param_1 + 0x429,9);
      strcpy(auStack_64,"01.00",5);
      uVar1 = cellGameCreateGameData(auStack_f0,param_1 + 0x229,param_1 + 0x2a9);
      if ((int)uVar1 < 0) {
        print_tty("cellGameCreateGameData() Error: 0x%x\n",uVar1);
      }
      else {
        print_tty2("cellGameCreateGameData() OK\n");
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
    else {
      print_tty2("GameData exists\n");
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
    uVar1 = cellGameContentPermit(param_1 + 0x229,param_1 + 0x2a9);
    if ((int)uVar1 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    }
    else {
      print_tty2("cellGameContentPermit() OK\n");
      print_tty2("  m_gameDataPath:[%s]\n",param_1 + 0x229);
      print_tty2("  m_gameDataUserPath:[%s]\n",param_1 + 0x2a9);
    }
  }
  return;
}


// 0x04eebfc (0x1cc bytes)
// strings: 0065ae20: 'DATA' (raw) | 0065ae28: 'CreateGameData Error: 0x%x\n' | 0065ae48: 'GameData exists\n' | 0065af1c: 'cellGameGetSizeKB() Error: 0x%x\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065aec8: 'cellGameContentPermit() OK\n' | 0065aee8: '  m_gameDataPath:[%s]\n' | 0065af00: '  m_gameDataUserPath:[%s]\n'

/* WARNING: Removing unreachable block (ram,0x004eecd8) */
/* WARNING: Removing unreachable block (ram,0x004eed10) */
/* WARNING: Removing unreachable block (ram,0x004eecf4) */

void FUN_004eebfc(int param_1)

{
  char *__src;
  int iVar2;
  undefined8 uVar1;
  GPiece<12> local_ac;
  char acStack_a0 [136];
  
  __src = (char *)FUN_00504c58(g_pHWSystem);
  strcpy(acStack_a0,__src);
  iVar2 = FUN_00504d90(g_pHWSystem);
  if (iVar2 == 0) {
    FUN_005cc44c(acStack_a0,&DAT_0065ae20);
  }
  uVar1 = cellGameDataCheck(3,acStack_a0,local_ac);
  if ((int)uVar1 < 0) {
    print_tty("CreateGameData Error: 0x%x\n",uVar1);
  }
  else {
    if ((int)uVar1 == 0) {
      print_tty2("GameData exists\n");
      *(undefined1 *)(param_1 + 0x19) = 1;
      print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",0,0,0);
    }
    uVar1 = cellGameContentPermit(param_1 + 0x229,param_1 + 0x2a9);
    if ((int)uVar1 < 0) {
      print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    }
    else {
      print_tty2("cellGameContentPermit() OK\n");
      print_tty2("  m_gameDataPath:[%s]\n",param_1 + 0x229);
      print_tty2("  m_gameDataUserPath:[%s]\n",param_1 + 0x2a9);
    }
  }
  return;
}


// 0x04eedc8 (0x138 bytes)
// strings: 0065af40: 'Error getting Title 0x%x\n' | 0065af60: 'Error getting Title ID 0x%x\n' | 0065af80: 'Error getting version 0x%x\n' | 0065afa0: 'Error getting parental level 0x%x\n' | 0065afc8: 'Overriding titleId, setting to %s\n'

void FUN_004eedc8(int param_1)

{
  char *__src;
  undefined8 uVar1;
  char *__dest;
  
  uVar1 = cellGameGetParamString(1,param_1 + 0x433,0x80);
  if ((int)uVar1 < 0) {
    print_tty("Error getting Title 0x%x\n",uVar1);
  }
  __dest = (char *)(param_1 + 0x429);
  uVar1 = cellGameGetParamString(100,__dest,10);
  if ((int)uVar1 < 0) {
    print_tty("Error getting Title ID 0x%x\n",uVar1);
  }
  uVar1 = cellGameGetParamString(0x65,param_1 + 0x4b3,6);
  if ((int)uVar1 < 0) {
    print_tty("Error getting version 0x%x\n",uVar1);
  }
  uVar1 = cellGameGetParamInt(0x66,param_1 + 0x4bc);
  if ((int)uVar1 < 0) {
    print_tty("Error getting parental level 0x%x\n",uVar1);
  }
  __src = *(char **)(param_1 + 0x14);
  if (((__src != (char *)0x0) && (*__src != '\0')) && (*(char *)(param_1 + 0x429) == '\0')) {
    strcpy(__dest,__src);
    print_tty2("Overriding titleId, setting to %s\n",__dest);
  }
  return;
}


// 0x04eef00 (0x278 bytes)
// strings: 0065ac04: 'cellGameBootCheck() Error: 0x%x\n' | 0065ac2c: '  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n' | 0065ac6c: '  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n' | 0065aca4: 'cellGameContentPermit() Error: 0x%x\n' | 0065afec: '  contentInfoPath:[%s]\n' | 0065b004: '  usrdirPath:[%s]\n' | 0065b01c: '/app_home' | 0065b02c: '/dev_hdd0/game/%s/USRDIR' | 0065b04c: '/dev_hdd0/game/%s' | 0065b064: '/dev_bdvd/PS3_GAME/USRDIR' | 0065b084: '/dev_bdvd/PS3_GAME' | 0065b09c: '/EBOOT.BIN'

undefined8 FUN_004eef00(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t sVar3;
  int iVar4;
  char *__dest;
  char *__dest_00;
  uint local_470;
  uint local_46c;
  GPiece<16> local_468;
  GPiece<32> auStack_458;
  char acStack_438 [1032];
  
  uVar1 = cellGameBootCheck(&local_470,&local_46c,local_468,auStack_458);
  if ((int)uVar1 < 0) {
    print_tty("cellGameBootCheck() Error: 0x%x\n",uVar1);
    return uVar1;
  }
  print_tty2("  get_type = [%d] get_attributes = [0x%08x] dirName = [%s]\n",(ulonglong)local_470,
             (ulonglong)local_46c,auStack_458);
  print_tty2("  hddFreeSizeKB = [%d] sizeKB = [%d] sysSizeKB = [%d]\n",0,0,0);
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  FUN_004eedc8(param_1);
  __dest = (char *)(param_1 + 0x29);
  __dest_00 = (char *)(param_1 + 0xa9);
  uVar1 = cellGameContentPermit(__dest,__dest_00);
  if ((int)uVar1 < 0) {
    print_tty("cellGameContentPermit() Error: 0x%x\n",uVar1);
    return uVar1;
  }
  print_tty2("  contentInfoPath:[%s]\n",__dest);
  print_tty2("  usrdirPath:[%s]\n",__dest_00);
  uVar2 = FileSys_Get();
  sVar3 = strlen("/app_home");
  iVar4 = FUN_005ccb28(__dest_00,"/app_home",sVar3);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        snprintf(__dest_00,"/dev_hdd0/game/%s/USRDIR",(ulonglong)*(uint *)(param_1 + 0x14));
        snprintf(__dest,"/dev_hdd0/game/%s",(ulonglong)*(uint *)(param_1 + 0x14));
        strcpy(acStack_438,__dest_00);
      }
      else if (iVar4 == 2) {
        strcpy(acStack_438,"/dev_bdvd/PS3_GAME/USRDIR");
        strcpy(__dest_00,"/dev_bdvd/PS3_GAME/USRDIR");
        strcpy(__dest,"/dev_bdvd/PS3_GAME");
      }
      goto LAB_004ef128;
    }
  }
  strcpy(acStack_438,__dest_00);
LAB_004ef128:
  FUN_005cc44c(acStack_438,"/EBOOT.BIN");
  FUN_004ef3bc(uVar2,acStack_438);
  return uVar1;
}


// 0x04ef178 (0xa0 bytes)
void FUN_004ef178(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 < 3) {
    if (0 < iVar1) {
      if (iVar1 < 2) {
        FUN_004eef00(param_1);
      }
      else {
        FUN_004eebfc(param_1);
      }
    }
  }
  else if (iVar1 < 4) {
    FUN_004ee958(param_1);
  }
  else if (iVar1 < 5) {
    FUN_004ee818(param_1);
  }
  param_1[2] = 0;
  *param_1 = 0;
  sys_ppu_thread_exit(0);
  return;
}


// 0x04ef218 (0x30 bytes)
void FUN_004ef218(undefined4 param_1)

{
  FUN_004ef178(param_1);
  sys_ppu_thread_exit(0);
  return;
}


// 0x04ef248 (0xac bytes)
longlong FUN_004ef248(longlong param_1)

{
  int iVar1;
  
  iVar1 = memcmp(&DAT_0065b0a8,(void *)param_1,3);
  if (iVar1 == 0) {
    param_1 = FUN_005c8700(param_1 + 3,&DAT_0065b0b0);
    param_1 = param_1 + 1;
  }
  else {
    iVar1 = memcmp(&DAT_0065b0b8,(void *)param_1,3);
    if (iVar1 == 0) {
      param_1 = FUN_005c8700(param_1 + 3,&DAT_0065b0c0);
      param_1 = param_1 + 1;
    }
  }
  return param_1;
}


// 0x04ef2f4 (0x2c bytes)
void FUN_004ef2f4(undefined8 param_1)

{
  memset(param_1,0,0x300);
  return;
}


// 0x04ef320 (0x2c bytes)
void FUN_004ef320(undefined8 param_1)

{
  memset(param_1,0,0x300);
  return;
}


// 0x04ef34c (0x70 bytes)
u8 *FileSys_Get(void)

{
  if (DAT_01592400 == '\0') {
    memset(&DAT_01592408,0,0x300);
    DAT_01592400 = '\x01';
  }
  if (DAT_008fabd8 == (undefined *)0x0) {
    DAT_008fabd8 = &DAT_01592408;
  }
  return;
}


// 0x04ef3bc (0x114 bytes)
// strings: 0065b0c4: 'Executing %s\n' | 0065b0d4: '/app_home' | 0065b0e4: '/dev_bdvd'

char * FUN_004ef3bc(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  
  print_tty2("Executing %s\n");
  pcVar4 = (char *)param_2;
  sVar1 = strlen(pcVar4);
  sVar2 = strlen("/app_home");
  iVar3 = FUN_005ccb28(param_2,"/app_home",sVar2);
  if (iVar3 == 0) {
    pcVar4 = strcpy(param_1,"/app_home");
  }
  else {
    sVar2 = strlen("/dev_bdvd");
    iVar3 = FUN_005ccb28(param_2,"/dev_bdvd",sVar2);
    if (iVar3 == 0) {
      strcpy(param_1,pcVar4);
      pcVar4 = (char *)0x0;
      param_1[sVar1 - 10] = '\0';
    }
    else {
      strcpy(param_1,pcVar4);
      pcVar4 = (char *)0x0;
      param_1[sVar1 - 10] = '\0';
    }
  }
  return pcVar4;
}


// 0x04ef4d0 (0x214 bytes)
// strings: 0065b0f0: '/dev_hdd0' | 0065b100: '/dev_hdd1' | 0065b0d4: '/app_home' | 0065b0e4: '/dev_bdvd'

char *FileSys_ResolvePath(u8 *param_1,const char *param_2,char *param_3)

{
  int iVar1;
  char *__dest;
  
  if (param_2 != (char *)0x0) {
    iVar1 = memcmp(param_2,"/dev_hdd0",9);
    __dest = (char *)param_3;
    if (iVar1 == 0) {
      param_1 = strcpy(__dest,param_2);
    }
    else {
      iVar1 = memcmp(param_2,"/dev_hdd1",9);
      if (iVar1 == 0) {
        param_1 = strcpy(__dest,param_2);
      }
      else {
        iVar1 = memcmp(param_2,"/app_home",9);
        if (iVar1 == 0) {
          param_1 = strcpy(__dest,param_2);
        }
        else {
          iVar1 = memcmp(param_2,"/dev_bdvd",9);
          if (iVar1 == 0) {
            param_1 = strcpy(__dest,param_2);
          }
          else if (*param_2 == '/') {
            strcpy(__dest,param_1);
            FUN_005cc44c(param_3,&DAT_0065b0c0);
            param_1 = (char *)FUN_005cc44c(param_3,param_2 + 1);
          }
          else {
            iVar1 = memcmp(&DAT_0065b0a8,param_2,3);
            if (iVar1 == 0) {
              iVar1 = FUN_005c8700(param_2 + 3,&DAT_0065b0b0);
              param_2 = (char *)(iVar1 + 1);
            }
            else {
              iVar1 = memcmp(&DAT_0065b0b8,param_2,3);
              if (iVar1 == 0) {
                iVar1 = FUN_005c8700(param_2 + 3,&DAT_0065b0c0);
                param_2 = (char *)(iVar1 + 1);
              }
            }
            strcpy(__dest,param_1);
            FUN_005cc44c(param_3,&DAT_0065b0c0);
            param_1 = (char *)FUN_005cc44c(param_3,param_2);
          }
        }
      }
    }
  }
  return param_1;
}


// 0x04ef6e4 (0x4c bytes)
char * FUN_004ef6e4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char acStack_50 [64];
  
  FileSys_ResolvePath(param_1,param_2,acStack_50);
  pcVar1 = strcpy((char *)param_2,acStack_50);
  return pcVar1;
}


// 0x04ef730 (0x448 bytes)
// strings: 0065b10c: 'NPWR02335' (raw) | 0065b10d: 'PWR02335' (raw) | 0065b10e: 'WR02335' (raw) | 0065b10f: 'R02335' (raw) | 0065b110: '02335' (raw) | 0065b111: '2335' (raw) | 0065b118: 'NPWR02346' (raw) | 0065b119: 'PWR02346' (raw) | 0065b11a: 'WR02346' (raw) | 0065b11b: 'R02346' (raw) | 0065b11c: '02346' (raw) | 0065b11d: '2346' (raw) | 0065b124: 'NPWR02347' (raw) | 0065b125: 'PWR02347' (raw) | 0065b126: 'WR02347' (raw) | 0065b127: 'R02347' (raw) | 0065b128: '02347' (raw) | 0065b129: '2347' (raw) | 0065b130: 'NPWR02348' (raw) | 0065b131: 'PWR02348' (raw) | 0065b132: 'WR02348' (raw) | 0065b133: 'R02348' (raw) | 0065b134: '02348' (raw) | 0065b135: '2348' (raw)

void FUN_004ef730(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 < 2) {
    if (-1 < param_2) {
      if (param_2 < 1) {
        *(undefined1 *)(param_1 + 4) = 0x4e;
        *(undefined1 *)(param_1 + 5) = 0x50;
        *(undefined1 *)(param_1 + 6) = 0x57;
        *(undefined1 *)(param_1 + 7) = 0x52;
        *(undefined1 *)(param_1 + 8) = 0x30;
        *(undefined1 *)(param_1 + 9) = 0x32;
        *(undefined1 *)(param_1 + 10) = 0x33;
        *(undefined1 *)(param_1 + 0xb) = 0x33;
        lVar4 = 0x50;
        *(undefined1 *)(param_1 + 0xc) = 0x35;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        iVar3 = 0;
        do {
          uVar1 = (&DAT_0065b33d)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b33c)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 2;
        } while (lVar4 != 0);
        iVar2 = 0x40;
        iVar3 = 0;
        do {
          iVar2 = iVar2 + -1;
          uVar1 = (&DAT_0065b13d)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b13c)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
          iVar3 = iVar3 + 2;
        } while (iVar2 != 0);
      }
      else {
        *(undefined1 *)(param_1 + 4) = 0x4e;
        *(undefined1 *)(param_1 + 5) = 0x50;
        *(undefined1 *)(param_1 + 6) = 0x57;
        *(undefined1 *)(param_1 + 7) = 0x52;
        *(undefined1 *)(param_1 + 8) = 0x30;
        *(undefined1 *)(param_1 + 9) = 0x32;
        *(undefined1 *)(param_1 + 10) = 0x33;
        *(undefined1 *)(param_1 + 0xb) = 0x34;
        lVar4 = 0x50;
        *(undefined1 *)(param_1 + 0xc) = 0x36;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        iVar3 = 0;
        do {
          uVar1 = (&DAT_0065b3dd)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b3dc)[iVar3];
          *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 2;
        } while (lVar4 != 0);
        iVar2 = 0x40;
        iVar3 = 0;
        do {
          iVar2 = iVar2 + -1;
          uVar1 = (&DAT_0065b1bd)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b1bc)[iVar3];
          *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
          iVar3 = iVar3 + 2;
        } while (iVar2 != 0);
      }
    }
  }
  else if (param_2 < 3) {
    *(undefined1 *)(param_1 + 4) = 0x4e;
    *(undefined1 *)(param_1 + 5) = 0x50;
    *(undefined1 *)(param_1 + 6) = 0x57;
    *(undefined1 *)(param_1 + 7) = 0x52;
    *(undefined1 *)(param_1 + 8) = 0x30;
    *(undefined1 *)(param_1 + 9) = 0x32;
    *(undefined1 *)(param_1 + 10) = 0x33;
    *(undefined1 *)(param_1 + 0xb) = 0x34;
    lVar4 = 0x50;
    *(undefined1 *)(param_1 + 0xc) = 0x37;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b47d)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b47c)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
    iVar2 = 0x40;
    iVar3 = 0;
    do {
      iVar2 = iVar2 + -1;
      uVar1 = (&DAT_0065b23d)[iVar3];
      *(undefined1 *)(param_1 + iVar3 + 0xb0) = (&DAT_0065b23c)[iVar3];
      *(undefined1 *)(param_1 + iVar3 + 0xb1) = uVar1;
      iVar3 = iVar3 + 2;
    } while (iVar2 != 0);
  }
  else if (param_2 < 4) {
    *(undefined1 *)(param_1 + 4) = 0x4e;
    *(undefined1 *)(param_1 + 5) = 0x50;
    *(undefined1 *)(param_1 + 6) = 0x57;
    *(undefined1 *)(param_1 + 7) = 0x52;
    *(undefined1 *)(param_1 + 8) = 0x30;
    *(undefined1 *)(param_1 + 9) = 0x32;
    *(undefined1 *)(param_1 + 10) = 0x33;
    *(undefined1 *)(param_1 + 0xb) = 0x34;
    lVar4 = 0x50;
    *(undefined1 *)(param_1 + 0xc) = 0x38;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b51d)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x10) = (&DAT_0065b51c)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0x11) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
    lVar4 = 0x40;
    iVar3 = 0;
    do {
      uVar1 = (&DAT_0065b2bd)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0xb0) = (&DAT_0065b2bc)[iVar3];
      *(undefined1 *)(iVar3 + param_1 + 0xb1) = uVar1;
      lVar4 = lVar4 + -1;
      iVar3 = iVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}


// 0x04efb80 (0x244 bytes)
// strings: 0065b5bb: '4ERROR: (Initialize()) SSL Failed to Initialize' | 0065b5fc: 'ERROR: (Initialize()) Unable to create http client... (0x%x)\n' | 0065b64c: 'ERROR: (Initialize()) cellSSLCertificationLoader... (0x%x)\n' | 0065b69c: 'ERROR: (Initialize()) creating cellSSLCertificationLoader... (0x%x)\n' | 0065b6f4: 'ERROR: (Initialize()) Unable to create https client... (0x%x)\n'

undefined1
FUN_004efb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 local_30;
  GPiece<12> local_2c;
  
  FUN_004ef730(param_1,param_3);
  cellSysmoduleLoadModule(4);
  cellSysmoduleLoadModule(0x16);
                    /* WARNING: Load size is inaccurate */
  (*(code *)**(undefined4 **)(*g_pHWSystem + 0x1c))(g_pHWSystem,1);
  uVar1 = idol::kalloc(param_2,0x40000);
  iVar3 = cellSslInit(uVar1,0x40000);
  if (iVar3 < 0) {
    FUN_004ffd4c(6,"ERROR: (Initialize()) SSL Failed to Initialize");
    *param_4 = 1;
  }
  uVar1 = idol::kalloc(param_2,0x10000);
  uVar1 = cellHttpInit(uVar1,0x10000);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (Initialize()) Unable to create http client... (0x%x)\n",
                 uVar1);
    *param_4 = 1;
  }
  uVar1 = cellSslCertificateLoader(0x7fbb7fffff,0,0,&local_30);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (Initialize()) cellSSLCertificationLoader... (0x%x)\n",uVar1
                );
    *param_4 = 1;
  }
  uVar1 = idol::kalloc(param_2,local_30);
  uVar1 = cellSslCertificateLoader(0x7fbb7fffff,uVar1,local_30,0);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,
                 "ERROR: (Initialize()) creating cellSSLCertificationLoader... (0x%x)\n"
                 ,uVar1);
    *param_4 = 1;
  }
  uVar1 = cellHttpsInit(1,local_2c);
  if ((int)uVar1 != 0) {
    FUN_004ffd4c(6,"ERROR: (Initialize()) Unable to create https client... (0x%x)\n",
                 uVar1);
    *param_4 = 1;
  }
  uVar1 = FUN_004f75d8(param_2);
  uVar2 = FUN_004f5b40(param_2);
  FUN_004f7d7c(uVar1,1);
  FUN_004f5be4(uVar2);
  return *param_4;
}


// 0x04efdc8 (0x2c bytes)
void FUN_004efdc8(int param_1)

{
  if (param_1 == 0) {
    GameShutDown();
  }
  return;
}


