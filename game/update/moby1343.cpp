// game/update/moby1343.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x250c54-0x251af8
#include "game/update/moby1343.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1118.h"

// 0x0250c54 (0x14 bytes)
void M1343_00250c54(void)

{
  DAT_0079b60c = 0x10000;
  return;
}


// 0x0250c88 (0xe70 bytes)
// strings: 00a0feec: 'None'

/* Moby 1343 */

ulonglong UpdateMoby_1343(MobyInstance *moby)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  LevelId LVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar10 = (ulonglong)(int)moby;
  piVar2 = (int *)moby->pVar;
  if (moby->state == 0) {
    uVar10 = 0xff;
    moby->updateDistance = -1;
    moby->state = '\x01';
    piVar2[5] = -1;
  }
  else if (moby->state < 2) {
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    LVar8 = Level;
    if ((((iVar11 != 0) && (g_HelpState == 0)) && (g_HelpCurId == -1)) &&
       (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      if (piVar2[5] == -1) {
        piVar2[5] = g_deathCount;
        if (CHAR_ARRAY_00a0feec.piece<192,2>() != -1) {
          CHAR_ARRAY_00a0feec.piece<192,2>() = CHAR_ARRAY_00a0feec.piece<192,2>() + 1;
        }
        iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<194,2>() < iVar11 / 600) {
          sVar7 = (short)(iVar11 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<194,2>() =
               ((short)(iVar11 / 600) + sVar7) -
               ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
        }
        CHAR_ARRAY_00a0feec.piece<196,4>() = CHAR_ARRAY_00a0feec.piece<196,4>() | 1 << (LVar8 & 0x3f) | 0x80000000
        ;
      }
      else if (2 < (ushort)CHAR_ARRAY_00a0feec.piece<192,2>()) {
        if ((UnlockableItems.gloveOfDoom != '\0') || (CHAR_ARRAY_00a1000c.piece<232,2>() != 0)) {
          if ((UnlockableItems.gloveOfDoom != '\0') &&
             (((int)(animationSpeed * 18000.5) <
               (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
                    (uint)(ushort)CHAR_ARRAY_00a0fdc4.piece<162,2>() * -600) &&
              (CHAR_ARRAY_00a1000c.piece<224,2>() == 0)))) {
            Help_QueueMessage(STR_MAY_I_SUGGEST_YOU_0x0FA0,0x1c);
          }
        }
        else {
          Help_QueueMessage(STR_WHY_NOT_TRY_GADGETRONS_0x0FA1,0x1d);
        }
      }
    }
    if ((((ushort)CHAR_ARRAY_00a1000c.piece<528,2>() < 4) &&
        (((iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xd]), iVar11 != 0
          || (iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xe]),
             iVar11 != 0)) && (DAT_0096bd70 == 0x3b)))) &&
       ((g_heroStateTimer == 0 && (MobyUpdateChainStart != 0)))) {
      dVar13 = 3.0;
      iVar11 = MobyUpdateChainStart;
      do {
        if (((*(short *)(iVar11 + 0xa6) == 0x118) &&
            (fVar4 = *(float *)(iVar11 + 0x14) - g_heroPosition.y,
            fVar5 = *(float *)(iVar11 + 0x10) - g_heroPosition.x,
            fVar6 = *(float *)(iVar11 + 0x18) - g_heroPosition.z,
            (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < dVar13)) &&
           (**(int **)(iVar11 + 0x78) != 0x3f800000)) {
          iVar12 = piVar2[8] + 1;
          piVar2[8] = iVar12;
          if ((iVar12 == 3) || (iVar12 == 6)) {
            Help_QueueMessage(STR_TO_USE_THE_BOLT_0x03EE,0x42);
          }
        }
        iVar11 = *(int *)(iVar11 + 0x28);
      } while (iVar11 != 0);
    }
    if ((((CHAR_ARRAY_0096c165[9] != '\0') && (g_HelpState == 0)) && (g_HelpCurId == -1)
        ) && (CHAR_ARRAY_00a1000c.piece<240,2>() == 0)) {
      Help_QueueMessage(STR_THE_SUCK_CANNON_CAN_0x0FA2,0x1e);
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xf]);
    if (((iVar11 != 0) && (CHAR_ARRAY_00a0feec.piece<248,2>() == 0)) &&
       ((g_HelpState == 0 && ((g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c.piece<952,2>() == 0)))
        ))) {
      Help_QueueMessage(STR_BY_DOUBLE_TAPPING__YOU_0x4E2D,0x77);
    }
    iVar11 = piVar2[0x12];
    if (((iVar11 != -1) && (g_MobyInstance[iVar11].oClass == TRESSPASSER_PAD)) &&
       (g_MobyInstance[iVar11].state == '\x04')) {
      g_MiscLevelFlags.field28_0x1c = 1;
    }
    iVar11 = piVar2[0x13];
    if (((iVar11 != -1) && (g_MobyInstance[iVar11].oClass == TRESSPASSER_PAD)) &&
       (g_MobyInstance[iVar11].state == '\x04')) {
      g_MiscLevelFlags.field29_0x1d = 1;
    }
    iVar11 = piVar2[0x10];
    if (((iVar11 != -1) && (g_MobyInstance[iVar11].oClass == BOLT_CRANK)) &&
       (g_MobyInstance[iVar11].state == '\x05')) {
      g_MiscLevelFlags.field30_0x1e = 1;
    }
    iVar11 = piVar2[0x11];
    if (((iVar11 != -1) && (g_MobyInstance[iVar11].oClass == BOLT_CRANK)) &&
       (g_MobyInstance[iVar11].state == '\x05')) {
      g_MiscLevelFlags.field31_0x1f = 1;
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    uVar9 = CHAR_ARRAY_00a1000c.piece<258,2>();
    if (((iVar11 == 0) || ((1 < g_heroStateType && (g_heroStateType != 9)))) ||
       ((g_HelpState != 0 || (g_HelpCurId != -1)))) {
      if ((piVar2[3] != 0) &&
         (iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]), iVar11 == 0)) {
        piVar2[3] = 0;
      }
    }
    else if (UnlockableItems.trespasser == '\0') {
      iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar11 + (uint)(ushort)CHAR_ARRAY_00a1000c.piece<250,2>() * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c.piece<250,2>() * 600 == 0)) {
        Help_QueueMessage(STR_YOULL_NEED_A_GADGETRON_0x0FA3,0x1f);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c.piece<250,2>() < iVar11 / 600) {
        sVar7 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a1000c.piece<250,2>() =
             ((short)(iVar11 / 600) + sVar7) - ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf)
        ;
      }
    }
    else {
      iVar11 = piVar2[0x12];
      if (((iVar11 == -1) || (g_MobyInstance[iVar11].oClass != TRESSPASSER_PAD)) ||
         (g_MobyInstance[iVar11].state != '\x04')) {
        if ((piVar2[3] == 0) && (CHAR_ARRAY_00a0feec.piece<136,2>() == 0)) {
          bVar1 = CHAR_ARRAY_00a1000c.piece<256,2>() == 0;
          piVar2[2] = piVar2[2] + 1;
          if (bVar1) {
            CHAR_ARRAY_00a1000c[0x100] = '\0';
            CHAR_ARRAY_00a1000c[0x101] = '\x01';
            iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
            if ((int)(uint)(ushort)uVar9 < iVar11 / 600) {
              sVar7 = (short)(iVar11 >> 0x1f);
              CHAR_ARRAY_00a1000c.piece<258,2>() =
                   ((short)(iVar11 / 600) + sVar7) -
                   ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
            }
            CHAR_ARRAY_00a1000c.piece<260,4>() =
                 CHAR_ARRAY_00a1000c.piece<260,4>() | 1 << (Level & 0x3f) | 0x80000000;
          }
          else {
            iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
            if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
                 (int)(iVar11 + (uint)(ushort)uVar9 * -600)) || ((uint)(ushort)uVar9 * 600 == 0)) {
              Help_QueueMessage(STR_USE_YOUR_GADGETRON_TRESPASSER_0x0FA4,0x20);
            }
            else if ((int)(uint)(ushort)uVar9 < iVar11 / 600) {
              sVar7 = (short)(iVar11 >> 0x1f);
              CHAR_ARRAY_00a1000c.piece<258,2>() =
                   ((short)(iVar11 / 600) + sVar7) -
                   ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
            }
          }
        }
      }
      else {
        if (CHAR_ARRAY_00a0feec.piece<136,2>() != -1) {
          CHAR_ARRAY_00a0feec.piece<136,2>() = CHAR_ARRAY_00a0feec.piece<136,2>() + 1;
        }
        iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<138,2>() < iVar11 / 600) {
          sVar7 = (short)(iVar11 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<138,2>() =
               ((short)(iVar11 / 600) + sVar7) -
               ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
        }
        CHAR_ARRAY_00a0feec.piece<140,4>() = CHAR_ARRAY_00a0feec.piece<140,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0x14]);
    if (((iVar11 != 0) &&
        ((((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_HelpState == 0))
         && ((g_HelpCurId == -1 &&
             ((int)(animationSpeed * 216000.5) <
              (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
                   (uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() * -600))))))) &&
       ((CHAR_ARRAY_00a1000c.piece<540,4>() & 1 << (Level & 0x3f)) == 0)) {
      Help_QueueMessage(STR_YOU_CAN_VIEW_A_0x03EF,0x43);
    }
    if ((CHAR_ARRAY_00a1000c.piece<560,2>() == 0) || (CHAR_ARRAY_00a1000c.piece<568,2>() == 0)) {
      if ((g_heroState == MOVEMENT_LOCKED) &&
         (((g_standingOnMoby != 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x267)) &&
          (iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]), iVar11 != 0))))
      {
        if (CHAR_ARRAY_00a1000c.piece<560,2>() == 0) {
          Help_QueueMessage(STR_LASERS_ARE_MOUNTED_ON_0x07DB,0x46);
        }
        else if ((CHAR_ARRAY_00a1000c.piece<568,2>() == 0) &&
                (iVar11 = piVar2[7], piVar2[7] = iVar11 + 1,
                (int)(animationSpeed * 1800.5) < iVar11 + 1)) {
          Help_QueueMessage(STR_USE__TO_CONTROL_0x07DC,0x47);
        }
      }
      else {
        piVar2[7] = 0;
      }
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xc]);
    if (((iVar11 != 0) && (CHAR_ARRAY_00a0feec.piece<200,2>() == 0)) &&
       ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[200] = '\0';
      CHAR_ARRAY_00a0feec[0xc9] = '\x01';
      iVar11 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<202,2>() < iVar11 / 600) {
        sVar7 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a0feec.piece<202,2>() =
             ((short)(iVar11 / 600) + sVar7) - ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf)
        ;
      }
      CHAR_ARRAY_00a0feec.piece<204,4>() = CHAR_ARRAY_00a0feec.piece<204,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xb]);
    if ((((iVar11 == 0) || (CHAR_ARRAY_00a0feec.piece<200,2>() != 0)) || (g_heroStateType < 2)) ||
       ((g_heroStateType == 9 || (piVar2[10] != 0)))) {
      if ((piVar2[10] != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
        piVar2[10] = 0;
      }
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      piVar2[9] = piVar2[9] + 1;
      auVar14 = loadVectorLeftIndexed(0x1c,0x250c68);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x28,
                         ZEXT48(piVar2));
      *(undefined4 *)((uint)(piVar2 + 10) & 0xfffffffc) = uVar3;
    }
    iVar11 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xb]);
    uVar10 = (ulonglong)iVar11;
    if ((((iVar11 != 0) &&
         (uVar10 = (ulonglong)(ushort)CHAR_ARRAY_00a0feec.piece<200,2>(), CHAR_ARRAY_00a0feec.piece<200,2>() == 0)
         ) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
       ((((uVar10 = (ulonglong)(uint)piVar2[9], 2 < piVar2[9] &&
          (uVar10 = (ulonglong)(uint)g_HelpState, g_HelpState == 0)) &&
         (uVar10 = (ulonglong)(uint)g_HelpCurId, g_HelpCurId == -1)) &&
        (CHAR_ARRAY_00a1000c.piece<584,2>() == 0)))) {
      iVar11 = Help_QueueMessage(STR_YOU_CAN_KICK_OFF_0x0FA5,0x49);
      uVar10 = (ulonglong)iVar11;
    }
  }
  return uVar10;
}


