// game/update/moby1469.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x286128-0x286aa0
#include "game/update/moby1469.h"
#include "game/collproc.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"
#include "game/update/moby408.h"

// 0x0286128 (0x14 bytes)
void M1469_00286128(void)

{
  DAT_007aad4c = 0x10000;
  return;
}


// 0x0286158 (0x948 bytes)
// strings: 00a1000c: 'None'

/* Moby 1469 */

void UpdateMoby_1469(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  short sVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_LR;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  pvVar3 = moby->pVar;
  uVar12 = ZEXT48(pvVar3);
  if (moby->state == 0) {
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    moby->updateDistance = -1;
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(in_LR,0x286140);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar13 = vectorMultiplyAddFloatingPoint
                        (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar14);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x34,uVar12);
    *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    if (((((((*(int *)((int)pvVar3 + 0x10) != -1) &&
            (pMVar6 = g_MobyInstance + *(int *)((int)pvVar3 + 0x10), pMVar6 != (MobyInstance *)0x0))
           && (pMVar6->oClass == SPIKEBALL)) &&
          ((uVar1 = pMVar6->state, uVar1 != 0xfd && uVar1 != 0xfe && (uVar1 != '\x03')))) &&
         ((iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0xc))
          , iVar7 != 0 && ((g_heroStateType < 2 || (g_heroStateType == 9)))))) &&
        (g_Help.state == 0)) && (g_Help.message_id == -1)) {
      if (UnlockableItems.hologuise == '\0') {
        iVar7 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar7 + (uint)(ushort)HelpData.piece<986,2>() * -600)) ||
           ((uint)(ushort)HelpData.piece<986,2>() * 600 == 0)) {
          Help_QueueMessage(STR_YOULL_NEED_THE_GADGETRON_0x3A98,0x7b);
        }
        else if ((int)(uint)(ushort)HelpData.piece<986,2>() < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          HelpData.piece<986,2>() =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
      else if (HelpData.piece<992,2>() == 0) {
        HelpData[0x3e0] = '\0';
        HelpData[0x3e1] = '\x01';
        iVar7 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)HelpData.piece<994,2>() < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          HelpData.piece<994,2>() =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        HelpData.piece<996,4>() = HelpData.piece<996,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar7 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar7 + (uint)(ushort)HelpData.piece<994,2>() * -600)) ||
           ((uint)(ushort)HelpData.piece<994,2>() * 600 == 0)) {
          Help_QueueMessage(STR_TIME_TO_USE_THE_0x3A99,0x7c);
        }
        else if ((int)(uint)(ushort)HelpData.piece<994,2>() < iVar7 / 600) {
          sVar5 = (short)(iVar7 >> 0x1f);
          HelpData.piece<994,2>() =
               ((short)(iVar7 / 600) + sVar5) - ((short)((short)(iVar7 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
      }
    }
    if ((((DAT_00a15f34 != 0) && (g_Help.state == 0)) && (g_Help.message_id == -1)) &&
       (HelpData.piece<1096,2>() == 0)) {
      Help_QueueMessage(STR_IF_A_SENTRY_BOT_PRESSES_0x3A9F,0x89);
      DAT_00a15f34 = 0;
    }
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x54));
    if (((iVar7 != 0) && (g_heroType == '\x03')) &&
       ((DAT_0096bfc0 == 0 && ((DAT_010c512c == 0 && (HelpData.piece<1088,2>() == 0)))))) {
      Help_QueueMessage(STR_YOU_WILL_HAVE_TO_0x3A9E,0x88);
    }
    uVar11 = 0xffffffffffffffff;
    iVar9 = 0;
    iVar7 = -1;
    uVar10 = uVar12;
    do {
      iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)uVar10);
      if (iVar8 != 0) {
        iVar8 = *(int *)((int)pvVar3 + 0x3c) + 1;
        iVar7 = *(int *)((int)pvVar3 + iVar9 * 4);
        uVar11 = (ulonglong)*(uint *)((int)pvVar3 + iVar9 * 4 + 0x10);
        goto LAB_00286698;
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + 4;
    } while (iVar9 < 1);
    iVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x40) = 0xffffffff;
LAB_00286698:
    *(int *)((int)pvVar3 + 0x3c) = iVar8;
    if ((((((int)uVar11 != -1) &&
          (iVar9 = (int)&(g_MobyInstance->bSphere).x + (int)(uVar11 << 8), iVar9 != 0)) &&
         (*(short *)(iVar9 + 0xa6) == 0x4e)) &&
        (((cVar2 = *(char *)(iVar9 + 0x20), cVar2 != -3 && cVar2 != -2 && (cVar2 != '\x03')) &&
         (((*(int *)((int)pvVar3 + 0x34) < iVar8 && iVar7 != -1 &&
           (iVar7 != *(int *)((int)pvVar3 + 0x40))) &&
          (((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_Help.state == 0))
          )))))) && ((g_Help.message_id == -1 && (UnlockableItems.hologuise != '\0')))) {
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = loadVectorLeftIndexed(0x10,0x286140);
      auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x34,uVar12);
      *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
      if ((HelpData.piece<1004,4>() & 0x80000000) == 0) {
        Help_QueueMessage(STR_WHILE_WEARING_THE_HOLOGUISE_0x3A9A,0x7d);
      }
      *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
      *(int *)((int)pvVar3 + 0x40) = iVar7;
    }
    if ((g_heroMobyPtr->updateId == '\f') && (g_heroType == '\x02')) {
      g_MiscLevelFlags.field111_0x6f = 1;
    }
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x1c));
    if (((((iVar7 != 0) && (g_heroType == '\x02')) && (g_MiscLevelFlags.field111_0x6f == 0)) &&
        ((g_Help.state == 0 && (g_Help.message_id == -1)))) &&
       ((HelpData.piece<1028,4>() & 0x80000000) == 0)) {
      Help_QueueMessage(STR_WHEN_YOUR_ENERGY_BAR_0x3A9C,0x80);
    }
    iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20));
    if (((iVar7 != 0) && (g_Help.state == 0)) &&
       ((g_Help.message_id == -1 &&
        ((UnlockableItems.hydroPack == '\0' &&
         ((HelpData.piece<1044,4>() & 1 << (Level & 0x3f)) == 0)))))) {
      Help_QueueMessage(STR_YOU_WILL_NEED_A_0x3A9D,0x82);
    }
    iVar9 = 0;
    iVar7 = -1;
    do {
      iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar12 + 0x20));
      if (iVar8 != 0) {
        iVar8 = *(int *)((int)pvVar3 + 0x38) + 1;
        iVar7 = *(int *)((int)pvVar3 + iVar9 * 4 + 0x20);
        *(int *)((int)pvVar3 + 0x38) = iVar8;
        iVar7 = iVar7 + ((uint)(ZERO_MASK((iVar7 - *(int *)((int)pvVar3 + 0x40)))) &
                        -iVar7 - 1U);
        if (g_heroState != HYDRO_PACK_MOVING) goto LAB_002869a0;
        break;
      }
      iVar9 = iVar9 + 1;
      uVar12 = uVar12 + 4;
    } while (iVar9 < 3);
    iVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    *(undefined4 *)((int)pvVar3 + 0x40) = 0xffffffff;
LAB_002869a0:
    if (((((int)(animationSpeed * 3600.5) < iVar8 && iVar7 != -1) &&
         (iVar9 = Hero_IsSwimming(), iVar9 != 0)) && (g_Help.state == 0)) &&
       ((g_Help.message_id == -1 && (UnlockableItems.hydroPack != '\0')))) {
      Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x4E2E,0x78);
      *(int *)((int)pvVar3 + 0x40) = iVar7;
      *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    }
    if ((g_MiscLevelFlags.field110_0x6e == 0) &&
       (iVar7 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x2c)),
       iVar7 != 0)) {
      g_MiscLevelFlags.field110_0x6e = 1;
    }
  }
  return;
}


