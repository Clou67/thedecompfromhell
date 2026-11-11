// game/update/moby1347.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x253448-0x254024
#include <math.h>
#include "game/update/moby1347.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby831.h"
#include "game/vendor.h"

// 0x0253448 (0x14 bytes)
void M1347_00253448(void)

{
  DAT_0079b8ac = 0x10000;
  return;
}


// 0x0253480 (0xba4 bytes)
// strings: 00a1000c: 'None'

/* Moby 1347 */

void UpdateMoby_1347(MobyInstance *moby)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  pfVar2 = (float *)moby->pVar;
  moby->updateDistance = -1;
  iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x14]);
  if (iVar5 != 0) {
    if ((g_heroStateType == 0x12) &&
       (fVar3 = pfVar2[0x1a], pfVar2[0x1a] = (float)((int)fVar3 + 1),
       (int)(animationSpeed * 360.5) < (int)fVar3)) {
      if ((CHAR_ARRAY_00a1000c.piece<548,4>() & 1 << (Level & 0x3f)) == 0) {
        Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
      }
    }
    else if ((g_heroStateType == 0x11) || (g_MiscLevelFlags.field13_0xd != 0)) {
      CHAR_ARRAY_00a1000c[0x220] = -1;
      CHAR_ARRAY_00a1000c[0x221] = -1;
    }
  }
  iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x10]);
  if (((iVar5 != 0) &&
      ((int)((float)(longlong)(animationSpeed * 3600.5) * 60.0) <
       (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
            (uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() * -600))) &&
     ((CHAR_ARRAY_00a1000c.piece<580,4>() & 1 << (Level & 0x3f)) == 0)) {
    Help_QueueMessage(STR_PRESS_THE_SELECT_BUTTON_0x07DD,0x48);
  }
  dVar6 = (double)animationSpeed;
  dVar7 = 60.5;
  if (((worldUpdateTime < (int)(dVar6 * 60.5)) && (CHAR_ARRAY_00a0feec.piece<96,2>() != 0)) &&
     ((CHAR_ARRAY_00a0feec.piece<88,2>() == 0 && ((CHAR_ARRAY_00a1000c.piece<652,4>() & 0x80000000) == 0)))) {
    Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_PUSH_0x4E27,0x51);
    dVar6 = (double)animationSpeed;
  }
  if ((worldUpdateTime < (int)(dVar6 * dVar7)) && (CHAR_ARRAY_00a0feec.piece<232,2>() != 0)) {
    if ((CHAR_ARRAY_00a1000c.piece<916,4>() & 0x80000000) == 0) {
      Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_DONT_0x4E28,0x72);
    }
    CHAR_ARRAY_00a0feec[0xe8] = '\0';
    CHAR_ARRAY_00a0feec[0xe9] = '\0';
  }
  if (((UnlockableItems.hydrodisplacer == '\0') &&
      (iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[9]), iVar5 != 0)) &&
     (g_standingOnMoby == 0)) {
    iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<282,2>() * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<282,2>() * 600 == 0)) {
      Help_QueueMessage(STR_TO_PROGRESS_ANY_FURTHER_0x138A,0x23);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<282,2>() < iVar5 / 600) {
      sVar4 = (short)(iVar5 >> 0x1f);
      CHAR_ARRAY_00a1000c.piece<282,2>() =
           ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
    }
  }
  if (UnlockableItems.hydrodisplacer != '\0') {
    iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[9]);
    if ((iVar5 != 0) && (g_standingOnMoby == 0)) {
      if (CHAR_ARRAY_00a1000c.piece<288,2>() == 0) {
        CHAR_ARRAY_00a1000c[0x120] = '\0';
        CHAR_ARRAY_00a1000c[0x121] = '\x01';
        iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<290,2>() < iVar5 / 600) {
          sVar4 = (short)(iVar5 >> 0x1f);
          CHAR_ARRAY_00a1000c.piece<290,2>() =
               ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c.piece<292,4>() = CHAR_ARRAY_00a1000c.piece<292,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<290,2>() * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<290,2>() * 600 == 0)) {
          Help_QueueMessage(STR_IF_YOU_EQUIP_THE_0x138B,0x24);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<290,2>() < iVar5 / 600) {
          sVar4 = (short)(iVar5 >> 0x1f);
          CHAR_ARRAY_00a1000c.piece<290,2>() =
               ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf)
          ;
        }
      }
    }
    if (g_heroStateType == 0x13) {
      CHAR_ARRAY_00a1000c[0x120] = -1;
      CHAR_ARRAY_00a1000c[0x121] = -1;
    }
  }
  if ((ushort)CHAR_ARRAY_00a1000c.piece<304,2>() < 2) {
    if (g_LevelFlags[Level][(int)pfVar2[8]] == -1) {
      if (CHAR_ARRAY_00a1000c.piece<296,2>() != -1) {
        CHAR_ARRAY_00a1000c.piece<296,2>() = CHAR_ARRAY_00a1000c.piece<296,2>() + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<298,2>() < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<298,2>() =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a1000c.piece<300,4>() = CHAR_ARRAY_00a1000c.piece<300,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    else if ((2 < (int)(&DAT_00a0fcd4)[(int)pfVar2[8]]) &&
            (iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xb]),
            iVar5 != 0)) {
      iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      iVar1 = (int)(animationSpeed * 18000.5);
      if ((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<130,2>() * -600)) &&
         ((((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<122,2>() * -600) &&
            (iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<162,2>() * -600))) &&
           (iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<82,2>() * -600))) &&
          ((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<138,2>() * -600) &&
           ((CHAR_ARRAY_00a1000c.piece<308,4>() & 0x80000000) == 0)))))) {
        Help_QueueMessage(STR_NEED_SOMETHING_MORE_POWERFUL_0x138D,0x26);
      }
    }
  }
  if (((g_MiscLevelFlags.Zoomerator != false) && (CHAR_ARRAY_00a1000c.piece<272,2>() == 0)) &&
     (g_heroStateType == 0x16)) {
    Help_QueueMessage(STR_SINCE_YOU_NOW_HAVE_0x1389,0x22);
  }
  if (CHAR_ARRAY_00a1000c.piece<752,2>() == 0) {
    if ((g_heroState == HELI_PACK_FWD_JUMP) &&
       ((iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xd]), iVar5 != 0
        || (iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xe]),
           iVar5 != 0)))) {
      if (CHAR_ARRAY_00a1000c.piece<752,2>() != -1) {
        CHAR_ARRAY_00a1000c.piece<752,2>() = CHAR_ARRAY_00a1000c.piece<752,2>() + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<754,2>() < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<754,2>() =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a1000c.piece<756,4>() = CHAR_ARRAY_00a1000c.piece<756,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    if (g_heroStateType == 0x12) {
      iVar5 = MB_IsPntInCuboid((Vec4 *)(pfVar2 + 4),(longlong)(int)pfVar2[0xd]);
      if ((iVar5 != 0) ||
         (iVar5 = MB_IsPntInCuboid((Vec4 *)(pfVar2 + 4),(longlong)(int)pfVar2[0xe]),
         iVar5 != 0)) {
        pfVar2[7] = 0.0;
        pfVar2[6] = 0.0;
        pfVar2[5] = 0.0;
        pfVar2[4] = 0.0;
        pfVar2[0x18] = (float)((int)pfVar2[0x18] + 1);
      }
    }
    else if ((1 < (int)pfVar2[0x18]) &&
            ((iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xd]),
             iVar5 != 0 ||
             (iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xe]),
             iVar5 != 0)))) {
      Help_QueueMessage(STR_YOULL_NEED_THE_STRETCH_0x138E,0x5e);
    }
  }
  if ((((CHAR_ARRAY_00a0feec.piece<144,2>() == 0) && (CHAR_ARRAY_00a1000c.piece<592,2>() == 0)) &&
      (UnlockableItems.blaster != '\0')) &&
     ((iVar5 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x12]), iVar5 != 0
      && (0x13 < (int)currentAmmoArray.blaster)))) {
    Help_QueueMessage(STR_YOU_CAN_ACCURATELY_AIM_0x4E20,0x4a);
  }
  if ((((pfVar2[0x15] != -NAN) && (g_LevelFlags[Level][(int)pfVar2[0x16]] == -1)) &&
      (g_LevelFlags[Level][(int)pfVar2[8]] == -1)) &&
     ((worldUpdateTime < 5 ||
      ((g_standingOnMoby != 0 &&
       ((*(short *)(g_standingOnMoby + 0xa6) == 0x3e6 ||
        (*(short *)(g_standingOnMoby + 0xa6) == 0x33e)))))))) {
    FUN_0047ebac(g_MobyInstance + (int)pfVar2[0x15]);
    pfVar2[0x15] = -NAN;
  }
  *pfVar2 = g_heroPosition.x;
  sVar4 = g_framesNotGrounded;
  pfVar2[1] = g_heroPosition.y;
  pfVar2[2] = g_heroPosition.z;
  pfVar2[3] = g_heroPosition.w;
  if (sVar4 == 0) {
    pfVar2[4] = g_heroPosition.x;
    pfVar2[5] = g_heroPosition.y;
    pfVar2[6] = g_heroPosition.z;
    pfVar2[7] = g_heroPosition.w;
  }
  return;
}


