// game/update/moby1341.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x24f118-0x24fcec
#include "game/update/moby1341.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby806.h"
#include "idol/fastfunc.h"

// 0x024f118 (0xbd4 bytes)
// strings: 00a0feec: 'None'

/* Moby 1341 */

ulonglong UpdateMoby_1341(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  pvVar3 = moby->pVar;
  FastDecTimerS32((int)pvVar3 + 0x18);
  bVar2 = moby->state;
  uVar8 = (ulonglong)bVar2;
  if (bVar2 == 0) {
    uVar8 = 0;
    *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar3 + 0x28) = 0;
  }
  else if (bVar2 < 2) {
    dVar11 = (double)animationSpeed;
    dVar13 = 400.5;
    if ((((worldUpdateTime < (int)(dVar11 * 400.5)) && (CHAR_ARRAY_00a0feec.piece<96,2>() != 0)) &&
        (CHAR_ARRAY_00a0feec.piece<88,2>() == 0)) &&
       (((int)((int)(dVar11 * (double)((float)(longlong)g_GameFrameCount + 0.5)) +
              (uint)(ushort)CHAR_ARRAY_00a0feec.piece<98,2>() * -600) < (int)(dVar11 * 1100.5) &&
        ((CHAR_ARRAY_00a1000c.piece<652,4>() & 0x80000000) == 0)))) {
      Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_PUSH_0x4E27,0x51);
      dVar11 = (double)animationSpeed;
    }
    if (((worldUpdateTime < (int)(dVar11 * dVar13)) && (CHAR_ARRAY_00a0feec.piece<232,2>() != 0)) &&
       (((int)((int)(dVar11 * (double)((float)(longlong)g_GameFrameCount + 0.5)) +
              (uint)(ushort)CHAR_ARRAY_00a0feec.piece<234,2>() * -600) < (int)(dVar11 * 1100.5) &&
        ((CHAR_ARRAY_00a1000c.piece<916,4>() & 0x80000000) == 0)))) {
      Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_DONT_0x4E28,0x72);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      bVar1 = g_SeenPlanets.Kerwan == '\0';
      if ((((bVar1) || (g_SeenPlanets.Aridia != '\0')) || (g_HelpState != 0)) ||
         ((g_HelpCurId != -1 || (CHAR_ARRAY_00a1000c.piece<32,2>() != 0)))) {
        if ((((bVar1) && ((g_SeenPlanets.Aridia != '\0' && (g_HelpState == 0)))) &&
            (g_HelpCurId == -1)) && (CHAR_ARRAY_00a1000c.piece<40,2>() == 0)) {
          Help_QueueMessage(STR_GADGETRON_INFOBOTS_GIVE_YOU_0x03E9,5);
        }
        else if ((((!bVar1) && (g_SeenPlanets.Aridia != '\0')) && (g_HelpState == 0)) &&
                (((g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c.piece<48,2>() == 0)) &&
                 (CHAR_ARRAY_00a1000c.piece<32,2>() == 0)))) {
          Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x03EA,6);
        }
      }
      else {
        Help_QueueMessage(STR_GADGETRON_INFOBOTS_GIVE_YOU_0x03E8,4);
      }
    }
    iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x3c));
    if (((iVar9 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
       ((g_HelpState == 0 &&
        (((g_HelpCurId == -1 &&
          ((int)(animationSpeed * 216000.5) <
           (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
                (uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() * -600))) &&
         ((CHAR_ARRAY_00a1000c.piece<540,4>() & 1 << (Level & 0x3f)) == 0)))))) {
      Help_QueueMessage(STR_YOU_CAN_VIEW_A_0x03EF,0x43);
    }
    iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x38));
    if ((((iVar9 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
        ((DAT_00a1a854 < 3 && ((g_HelpState == 0 && (g_HelpCurId == -1)))))) &&
       (CHAR_ARRAY_00a1000c.piece<512,2>() == 0)) {
      Help_QueueMessage(STR_TO_ENTER_LOOK_AROUND_MODE_0x03EC,0x40);
    }
    iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x38));
    if (((iVar9 != 0) &&
        (((((g_heroStateType < 2 || (g_heroStateType == 9)) &&
           (g_heroState == FIRST_PERSON_VIEW)) && ((DAT_00a1a850 == -1 && (g_HelpState == 0)))
          ) && (g_HelpCurId == -1)))) &&
       ((CHAR_ARRAY_00a1000c.piece<512,2>() != 0 && (CHAR_ARRAY_00a1000c.piece<520,2>() == 0)))) {
      Help_QueueMessage(STR_YOU_CAN_ALSO_USE_0x03ED,0x41);
    }
    if (((((ushort)CHAR_ARRAY_00a1000c.piece<528,2>() < 2) &&
         (iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x30))
         , iVar9 != 0)) && (DAT_0096bd70 == 0x3b)) &&
       ((g_heroStateTimer == 0 && (MobyUpdateChainStart != 0)))) {
      dVar11 = 3.0;
      iVar9 = MobyUpdateChainStart;
      do {
        if (((*(short *)(iVar9 + 0xa6) == 0x118) &&
            (fVar4 = *(float *)(iVar9 + 0x14) - g_heroPosition.y,
            fVar5 = *(float *)(iVar9 + 0x10) - g_heroPosition.x,
            fVar6 = *(float *)(iVar9 + 0x18) - g_heroPosition.z,
            (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < dVar11)) &&
           (**(int **)(iVar9 + 0x78) != 0x3f800000)) {
          iVar10 = *(int *)((int)pvVar3 + 0x34) + 1;
          *(int *)((int)pvVar3 + 0x34) = iVar10;
          if ((iVar10 == 3) || (iVar10 == 6)) {
            Help_QueueMessage(STR_TO_USE_THE_BOLT_0x03EE,0x42);
          }
        }
        iVar9 = *(int *)(iVar9 + 0x28);
      } while (iVar9 != 0);
    }
    if ((((g_heroStateType == 0x12) && (*(int *)((int)pvVar3 + 0x28) == 0)) &&
        (g_HelpState == 0)) &&
       ((g_HelpCurId == -1 &&
        ((iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20))
         , iVar9 != 0 ||
         (iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x24))
         , iVar9 != 0)))))) {
      *(int *)((int)pvVar3 + 0x2c) = *(int *)((int)pvVar3 + 0x2c) + 1;
      iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x20));
      if (((iVar9 == 0) || (*(int *)((int)pvVar3 + 0x2c) <= (int)(animationSpeed * 240.5))) ||
         (CHAR_ARRAY_00a0feec.piece<176,2>() != 0)) {
        iVar9 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x24));
        if (((iVar9 != 0) && ((int)(animationSpeed * 360.5) < *(int *)((int)pvVar3 + 0x2c))) &&
           (CHAR_ARRAY_00a0feec.piece<184,2>() == 0)) {
          Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
          if (CHAR_ARRAY_00a0feec.piece<184,2>() != -1) {
            CHAR_ARRAY_00a0feec.piece<184,2>() = CHAR_ARRAY_00a0feec.piece<184,2>() + 1;
          }
          iVar9 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
          if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<186,2>() < iVar9 / 600) {
            sVar7 = (short)(iVar9 >> 0x1f);
            CHAR_ARRAY_00a0feec.piece<186,2>() =
                 ((short)(iVar9 / 600) + sVar7) -
                 ((short)((short)(iVar9 / 0x2580000) + sVar7) >> 0xf);
          }
          CHAR_ARRAY_00a0feec.piece<188,4>() =
               CHAR_ARRAY_00a0feec.piece<188,4>() | 1 << (Level & 0x3f) | 0x80000000;
        }
      }
      else {
        Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
        if (CHAR_ARRAY_00a0feec.piece<176,2>() != -1) {
          CHAR_ARRAY_00a0feec.piece<176,2>() = CHAR_ARRAY_00a0feec.piece<176,2>() + 1;
        }
        iVar9 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<178,2>() < iVar9 / 600) {
          sVar7 = (short)(iVar9 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<178,2>() =
               ((short)(iVar9 / 600) + sVar7) - ((short)((short)(iVar9 / 0x2580000) + sVar7) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec.piece<180,4>() = CHAR_ARRAY_00a0feec.piece<180,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    else if (g_heroStateType == 0x11) {
      CHAR_ARRAY_00a1000c[0x220] = -1;
      CHAR_ARRAY_00a1000c[0x221] = -1;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
    }
    uVar8 = 0xa40000;
    if (MobyUpdateChainStart != 0) {
      dVar13 = 10.0;
      dVar11 = 0.5;
      uVar12 = 0x406fe00000000000;
      iVar9 = MobyUpdateChainStart;
      do {
        uVar8 = (ulonglong)*(ushort *)(iVar9 + 0xa6);
        if (((((*(ushort *)(iVar9 + 0xa6) == 0x326) &&
              (fVar4 = *(float *)(iVar9 + 0x14) - g_heroPosition.y,
              fVar5 = *(float *)(iVar9 + 0x10) - g_heroPosition.x,
              fVar6 = *(float *)(iVar9 + 0x18) - g_heroPosition.z,
              (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < dVar13)) &&
             ((uVar8 = (ulonglong)(uint)g_HelpState, g_HelpState == 0 &&
              ((uVar8 = (ulonglong)(uint)g_HelpCurId, g_HelpCurId == -1 &&
               (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c.piece<8,2>(), CHAR_ARRAY_00a1000c.piece<8,2>() == 0
               )))))) &&
            (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a1000c.piece<16,2>(), CHAR_ARRAY_00a1000c.piece<16,2>() == 0)
            ) && (uVar8 = (ulonglong)(ushort)CHAR_ARRAY_00a0feec.piece<104,2>(),
                 CHAR_ARRAY_00a0feec.piece<104,2>() == 0)) {
          iVar10 = FUN_004660a8(iVar9);
          uVar8 = (ulonglong)(uint)g_GameFrameCount;
          if (iVar10 == 0) {
            if (g_heroHealth < g_heroMaxNanotech) {
              if (CHAR_ARRAY_00a0feec.piece<104,2>() != -1) {
                CHAR_ARRAY_00a0feec.piece<104,2>() = CHAR_ARRAY_00a0feec.piece<104,2>() + 1;
              }
              iVar10 = (int)(animationSpeed *
                            (float)((double)(longlong)g_GameFrameCount + dVar11));
              if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<106,2>() < iVar10 / 600) {
                sVar7 = (short)(iVar10 >> 0x1f);
                CHAR_ARRAY_00a0feec.piece<106,2>() =
                     ((short)(iVar10 / 600) + sVar7) -
                     ((short)((short)(iVar10 / 0x2580000) + sVar7) >> 0xf);
              }
              CHAR_ARRAY_00a0feec.piece<108,4>() =
                   CHAR_ARRAY_00a0feec.piece<108,4>() | 1 << (Level & 0x3f) | 0x80000000;
              iVar10 = Help_QueueMessage(STR_YOU_JUST_PICKED_UP_0x0001,1);
              uVar8 = (ulonglong)iVar10;
            }
            else {
              uVar8 = MB_ScaledVecWrapper(uVar12,iVar9);
              if ((int)uVar8 != 0) {
                iVar10 = Help_QueueMessage(STR_THATS_NANOTECH_WHENEVER_YOU_0x0002,2);
                uVar8 = (ulonglong)iVar10;
              }
            }
          }
        }
        iVar9 = *(int *)(iVar9 + 0x28);
      } while (iVar9 != 0);
    }
  }
  return uVar8;
}


