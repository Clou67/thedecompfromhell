// game/update/moby1324.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x249c50-0x24a5d4
#include "game/update/moby1324.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/update/moby1118.h"
#include "game/update/moby1323.h"
#include "game/water.h"

// 0x0249c50 (0x30 bytes)
void M1324_00249c50(void)

{
  WaterTile_DrawAll(&DAT_00f15dc0,0x80);
  return;
}


// 0x0249c80 (0x14 bytes)
void M1324_00249c80(void)

{
  DAT_0078e53c = 0x10000;
  return;
}


// 0x0249cb0 (0x924 bytes)
// strings: 00a1000c: 'None'

/* Moby 1324 */

void UpdateMoby_1324(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  byte bVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  piVar1 = (int *)moby->pVar;
  moby->updateDistance = -1;
  iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x17]);
  if ((iVar4 != 0) &&
     ((((g_heroStateType == 0 || (g_heroStateType == 1)) &&
       (HelpData.piece<632,2>() == 0)) && (CHAR_ARRAY_00a0feec.piece<160,2>() == 0)))) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      if ((((&DAT_00721008)[iVar5 * 0x13] == 0) && (iVar5 != 0x18 && iVar5 != 8)) &&
         ((&UnlockableItems.field0_0x0)[iVar5] != '\0')) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x25);
    if (1 < iVar4) {
      Help_QueueMessage(STR_TRY_THE_GADGETRON_QUICKSELECT_0x4E25,0x4f);
    }
  }
  iVar4 = piVar1[0x15];
  bVar6 = (iVar4 == 1) << 1;
  if (iVar4 < 1) {
    if (((-1 < iVar4) &&
        (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x12]), iVar4 != 0)) &&
       (g_heroState == SWINGING_YELLOW_SWINGSHOT)) {
      piVar1[0x15] = 1;
    }
  }
  else if (iVar4 < 2) {
    if (g_framesGroundedCnt == 0) {
      iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x13]);
      if (iVar4 != 0) {
        MB_UnlockSkillPoint(1);
      }
    }
    else {
      piVar1[0x15] = 0;
    }
  }
  if (((((HelpData.piece<96,2>() == 0) &&
        (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]), iVar4 != 0)) &&
       (g_LevelFlags[Level][*piVar1] != -1)) &&
      ((UnlockableItems.pyrocitor != '\0' && (5 < (int)(&DAT_00a0fcd4)[*piVar1])))) &&
     ((int)(animationSpeed * 18000.5) <
      (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
           (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<130,2>() * -600))) {
    Help_QueueMessage(STR_HAVING_TROUBLE_WITH_THE_0x07D2,0xc);
  }
  iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x10]);
  if (iVar4 == 0) {
    if (piVar1[0x16] == 0) goto LAB_0024a048;
  }
  else {
    piVar1[0x16] = 1;
  }
  if (((ushort)CHAR_ARRAY_00a0feec.piece<64,2>() < 3) &&
     ((HelpData.piece<612,4>() & 1 << (Level & 0x3f)) == 0)) {
    Help_QueueMessage(STR_YOU_CAN_USE__0x4E22,0x4c);
  }
  if ((g_GameSettings.CameraUpDown.piece<0,1>() == '\0') || (g_GameSettings.CameraLeftRight.piece<0,1>() == '\0'))
  {
    HelpData[0x3b0] = -1;
    HelpData[0x3b1] = -1;
  }
  else if ((HelpData.piece<948,4>() & 1 << (Level & 0x3f)) == 0) {
    Help_QueueMessage(STR_IF_YOUD_LIKE_YOU_0x4E2C,0x76);
  }
LAB_0024a048:
  if ((((HelpData.piece<104,2>() == 0) &&
       (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[4]), iVar4 != 0)) &&
      (g_LevelFlags[Level][*piVar1] != -1)) && (UnlockableItems.pyrocitor == '\0')) {
    lVar3 = (longlong)(*piVar1 << 2);
    auVar7 = loadVectorLeftIndexed(lVar3,0xa0fcd4);
    auVar8 = loadVectorRightIndexed(lVar3 + 0x10,0xa0fcd4);
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar7 | auVar8,0);
    auVar7 = loadVectorLeftIndexed(8,0x249c98);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
               auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    if (!(bool)(bVar6 >> 1 & 1)) {
      Help_QueueMessage(STR_HAVING_TROUBLE_WITH_THE_0x07D3,0xd);
    }
  }
  if (HelpData.piece<128,2>() == 0) {
    iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[6]);
    if (iVar4 != 0) {
      HelpData[0x80] = -1;
      HelpData[0x81] = -1;
    }
    if (((g_heroState != SWINGING_YELLOW_SWINGSHOT) && (DAT_0096bd70 == 0x2c)) &&
       (g_heroStateTimer == 1)) {
      piVar1[0xc] = piVar1[0xc] + 1;
    }
    if ((1 < piVar1[0xc]) &&
       (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]), iVar4 != 0)) {
      Help_QueueMessage(STR_TO_SWING_FARTHER_PRESS_0x07D6,0x10);
    }
  }
  if ((UnlockableItems.swingshot == '\0') &&
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[5]), iVar4 != 0)) {
    iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar4 + (uint)(ushort)HelpData.piece<138,2>() * -600)) ||
       ((uint)(ushort)HelpData.piece<138,2>() * 600 == 0)) {
      Help_QueueMessage(STR_YOU_WILL_NEED_A_0x07D7,0x11);
    }
    else if ((int)(uint)(ushort)HelpData.piece<138,2>() < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      HelpData.piece<138,2>() =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if ((UnlockableItems.swingshot == '\0') ||
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[5]), iVar4 == 0)) {
    iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[7]);
    if (iVar4 != 0) {
      HelpData[0x90] = -1;
      HelpData[0x91] = -1;
    }
  }
  else if (HelpData.piece<144,2>() == 0) {
    HelpData[0x90] = '\0';
    HelpData[0x91] = '\x01';
    iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)HelpData.piece<146,2>() < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      HelpData.piece<146,2>() =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    HelpData.piece<148,4>() = HelpData.piece<148,4>() | 1 << (Level & 0x3f) | 0x80000000;
  }
  else {
    iVar4 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar4 + (uint)(ushort)HelpData.piece<146,2>() * -600)) ||
       ((uint)(ushort)HelpData.piece<146,2>() * 600 == 0)) {
      Help_QueueMessage(STR_THE_AREA_AHEAD_OF_0x07D8,0x12);
    }
    else if ((int)(uint)(ushort)HelpData.piece<146,2>() < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      HelpData.piece<146,2>() =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if ((((HelpData.piece<560,2>() == 0) || (HelpData.piece<568,2>() == 0)) &&
      (g_heroState == MOVEMENT_LOCKED)) &&
     ((g_standingOnMoby != 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x267)))) {
    if (HelpData.piece<560,2>() == 0) {
      Help_QueueMessage(STR_LASERS_ARE_MOUNTED_ON_0x07DB,0x46);
    }
    else if ((HelpData.piece<568,2>() == 0) &&
            (iVar4 = piVar1[0x14], piVar1[0x14] = iVar4 + 1,
            (int)(animationSpeed * 600.5) < iVar4 + 1)) {
      Help_QueueMessage(STR_USE__TO_CONTROL_0x07DC,0x47);
    }
  }
  if ((g_MiscLevelFlags.field20_0x14 == 0) &&
     (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x11]), iVar4 != 0)) {
    g_MiscLevelFlags.field20_0x14 = 1;
  }
  piVar1[8] = (int)g_heroPosition.x;
  piVar1[9] = (int)g_heroPosition.y;
  piVar1[10] = (int)g_heroPosition.z;
  piVar1[0xb] = (int)g_heroPosition.w;
  return;
}


