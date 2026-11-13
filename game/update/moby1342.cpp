// game/update/moby1342.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x24fcec-0x250c54
#include "game/update/moby1342.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x024fcec (0x14 bytes)
void M1342_0024fcec(void)

{
  DAT_0079b59c = 0x10000;
  return;
}


// 0x024fd10 (0xf44 bytes)
// strings: 00a1000c: 'None'

/* Moby 1342 */

void UpdateMoby_1342(MobyInstance *moby)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  piVar1 = (int *)moby->pVar;
  FastDecTimerS32(ZEXT48(piVar1) + 0x58);
  if (moby->state == 0) {
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1e]);
    if ((iVar6 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
      g_MiscLevelFlags.field26_0x1a = 1;
    }
    if (g_MiscLevelFlags.field26_0x1a == 0) {
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
      if (((iVar6 != 0) &&
          (((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_Help.state == 0))
          )) && ((g_Help.message_id == -1 && ((HelpData.piece<164,4>() & 0x80000000) == 0)))) {
        Help_QueueMessage(STR_TRY_USING_THE_GLIDE_0x0BB8,0x14);
      }
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[3]);
      if (((iVar6 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
         ((g_Help.state == 0 &&
          ((g_Help.message_id == -1 && ((HelpData.piece<172,4>() & 0x80000000) == 0)))))) {
        Help_QueueMessage(STR_TRY_USING_THE_HELI_PACKS_0x0BB9,0x15);
      }
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[6]);
      if ((iVar6 != 0) &&
         ((((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_Help.state == 0))
          && ((g_Help.message_id == -1 && ((HelpData.piece<188,4>() & 0x80000000) == 0)))))) {
        Help_QueueMessage(STR_YOULL_NEED_YOUR_NEW_0x0BBB,0x17);
      }
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xc]);
    if (((iVar6 != 0) && (CHAR_ARRAY_00a0feec.piece<24,2>() == 0)) &&
       ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[0x18] = '\0';
      CHAR_ARRAY_00a0feec[0x19] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<26,2>() < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec.piece<26,2>() =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec.piece<28,4>() = CHAR_ARRAY_00a0feec.piece<28,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[9]);
    if ((((iVar6 == 0) || (CHAR_ARRAY_00a0feec.piece<24,2>() != 0)) || (g_heroStateType < 2)) ||
       ((g_heroStateType == 9 || (piVar1[0x16] != 0)))) {
      if ((piVar1[0x16] != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
        piVar1[0x16] = 0;
      }
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      piVar1[0x14] = piVar1[0x14] + 1;
      auVar9 = loadVectorLeftIndexed(4,0x24fd00);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x58,
                         ZEXT48(piVar1));
      *(undefined4 *)((uint)(piVar1 + 0x16) & 0xfffffffc) = uVar2;
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[9]);
    if (((((iVar6 != 0) && (CHAR_ARRAY_00a0feec.piece<24,2>() == 0)) &&
         ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
        (((piVar1[0x14] % 6 == 0 && piVar1[0x14] != 0 && (g_Help.state == 0)) &&
         (g_Help.message_id == -1)))) && (HelpData.piece<176,2>() == 0)) {
      Help_QueueMessage(STR_THIS_IS_A_JUMP_0x0BBA,0x16);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[10]);
    if (((((iVar6 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
         (g_Help.state == 0)) &&
        ((g_Help.message_id == -1 && (HelpData.piece<192,2>() == 0)))) &&
       ((int)(animationSpeed * 216000.5) <
        (int)((int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5)) +
             (uint)(ushort)CHAR_ARRAY_00a0feec.piece<74,2>() * -600))) {
      Help_QueueMessage(STR_DID_YOU_KNOW_THAT_0x0BBC,0x18);
    }
    iVar8 = 0;
    iVar7 = 0;
    for (iVar6 = MobyUpdateChainStart; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x28)) {
      if (((*(int *)(iVar6 + 0x24) != 0) && (*(short *)(*(int *)(iVar6 + 0x24) + 0x46) == 5)) &&
         (fVar3 = *(float *)(iVar6 + 0x14) - g_heroPosition.y,
         fVar4 = *(float *)(iVar6 + 0x10) - g_heroPosition.x,
         SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 8.0)) {
        iVar8 = iVar8 + 1;
      }
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xf]);
    if ((((iVar6 == 0) || (iVar8 != 0)) ||
        ((1 < g_heroStateType && (g_heroStateType != 9)))) ||
       (((g_heroState == WEAPON_FIRST_PERSON_VIEW || (UnlockableItems.blaster == '\0')) ||
        ((iVar6 = Hero_GetWeaponAmmo(0xf), iVar6 < 0x15 ||
         ((((g_Help.state != 0 || (g_Help.message_id != -1)) ||
           (HelpData.piece<592,2>() != 0)) || (CHAR_ARRAY_00a0feec.piece<152,2>() != 0)))))))) {
      if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
        if (CHAR_ARRAY_00a0feec.piece<152,2>() != -1) {
          CHAR_ARRAY_00a0feec.piece<152,2>() = CHAR_ARRAY_00a0feec.piece<152,2>() + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<154,2>() < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a0feec.piece<154,2>() =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec.piece<156,4>() = CHAR_ARRAY_00a0feec.piece<156,4>() | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    else {
      Help_QueueMessage(STR_YOU_CAN_ACCURATELY_AIM_0x4E20,0x4a);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xe]);
    if (((iVar6 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
       ((DAT_00a1a854 < 3 &&
        (((g_Help.state == 0 && (g_Help.message_id == -1)) &&
         (HelpData.piece<512,2>() == 0)))))) {
      Help_QueueMessage(STR_TO_ENTER_LOOK_AROUND_MODE_0x03EC,0x40);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xe]);
    if (((iVar6 != 0) &&
        (((g_heroStateType < 2 || (g_heroStateType == 9)) &&
         (g_heroState == FIRST_PERSON_VIEW)))) &&
       (((DAT_00a1a850 == -1 && (g_Help.state == 0)) &&
        ((g_Help.message_id == -1 &&
         ((HelpData.piece<512,2>() != 0 && (HelpData.piece<520,2>() == 0)))))))) {
      Help_QueueMessage(STR_YOU_CAN_ALSO_USE_0x03ED,0x41);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x10]);
    if (((iVar6 != 0) &&
        (((g_heroStateType < 2 || (g_heroStateType == 9)) && (g_Help.state == 0))))
       && ((g_Help.message_id == -1 && (HelpData.piece<672,2>() == 0)))) {
      Help_QueueMessage(STR_THESE_MOVING_WALLS_ALSO_0x0BC0,0x54);
    }
    if (((g_gameMode == GAME_MODE_NORMAL) && (CHAR_ARRAY_0096c165[0xc] != '\0')) &&
       ((g_Help.state == 0 && ((g_Help.message_id == -1 && (HelpData.piece<200,2>() == 0)))
        ))) {
      Help_QueueMessage(STR_CONGRATULATIONS_ON_YOUR_NEW_0x0BBD,0x19);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xd]);
    if (((iVar6 != 0) && (CHAR_ARRAY_00a0feec.piece<120,2>() == 0)) &&
       ((g_heroStateType < 2 || (g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[0x78] = '\0';
      CHAR_ARRAY_00a0feec[0x79] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<122,2>() < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec.piece<122,2>() =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec.piece<124,4>() = CHAR_ARRAY_00a0feec.piece<124,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    if ((DAT_0096a668 != 0) && (CHAR_ARRAY_00a0feec.piece<120,2>() == 0)) {
      DAT_0096a668 = 0;
      piVar1[0x15] = piVar1[0x15] + 1;
    }
    if ((CHAR_ARRAY_00a0feec.piece<120,2>() == 0) &&
       (((((g_heroStateType < 2 || (g_heroStateType == 9)) && (2 < piVar1[0x15])) &&
         ((g_Help.state == 0 && (g_Help.message_id == -1)))) &&
        (HelpData.piece<208,2>() == 0)))) {
      Help_QueueMessage(STR_WHEN_USING_THE_SWINGSHOT_0x0BBE,0x1a);
    }
    if ((g_heroState == UNK_74) && (CHAR_ARRAY_00a0feec.piece<128,2>() == 0)) {
      CHAR_ARRAY_00a0feec[0x80] = '\0';
      CHAR_ARRAY_00a0feec[0x81] = '\x01';
      iVar6 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec.piece<130,2>() < iVar6 / 600) {
        sVar5 = (short)(iVar6 >> 0x1f);
        CHAR_ARRAY_00a0feec.piece<130,2>() =
             ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf);
      }
      CHAR_ARRAY_00a0feec.piece<132,4>() = CHAR_ARRAY_00a0feec.piece<132,4>() | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0xb]);
    if ((((iVar6 != 0) && (CHAR_ARRAY_00a0feec.piece<128,2>() == 0)) && (g_heroStateType == 6)) &&
       (((g_CurrentWeapon == 8 && (g_Help.state == 0)) &&
        ((g_Help.message_id == -1 && (HelpData.piece<216,2>() == 0)))))) {
      Help_QueueMessage(STR_YOU_CAN_USE_THE_0x0BBF,0x1b);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x11]);
    if ((((iVar6 != 0) && ((g_heroStateType < 2 || (g_heroStateType == 9)))) &&
        (g_Help.state == 0)) &&
       ((g_Help.message_id == -1 && (HelpData.piece<968,2>() == 0)))) {
      Help_QueueMessage(STR_TO_QUICKLY_CENTER_THE_0x4E2F,0x79);
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1f]);
    if (((iVar6 != 0) &&
        (((g_heroStateType == 0 || (g_heroStateType == 1)) &&
         (HelpData.piece<632,2>() == 0)))) && (CHAR_ARRAY_00a0feec.piece<160,2>() == 0)) {
      iVar6 = 0;
      do {
        if ((((&DAT_00721008)[iVar6 * 0x13] == 0) && (iVar6 != 0x18 && iVar6 != 8)) &&
           ((&UnlockableItems.field0_0x0)[iVar6] != '\0')) {
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x25);
      if (1 < iVar7) {
        Help_QueueMessage(STR_TRY_THE_GADGETRON_QUICKSELECT_0x4E25,0x4f);
      }
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1c]);
    if (iVar6 != 0) {
      g_MiscLevelFlags.field24_0x18 = 1;
    }
    iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[0x1d]);
    if (iVar6 != 0) {
      MB_UnlockSkillPoint(3);
    }
  }
  return;
}


