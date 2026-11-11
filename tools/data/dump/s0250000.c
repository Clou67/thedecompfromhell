//==== 00250c54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1343_00250c54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1343_00250c54(void)

{
  DAT_0079b60c = 0x10000;
  return;
}



//==== 00250c88  ns=mobyupdate_unsorted  size=0xe70
// sig: undefined UpdateMoby_1343(MobyInstance * moby)
// callers(0): 
// callees(2): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a0feec: 'None'

/* Moby 1343 */

ulonglong mobyupdate_unsorted::UpdateMoby_1343(MobyInstance *moby)

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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar10 = (ulonglong)(int)moby;
  piVar2 = (int *)moby->pVar;
  if (moby->state == 0) {
    uVar10 = 0xff;
    moby->updateDistance = -1;
    moby->state = '\x01';
    piVar2[5] = -1;
  }
  else if (moby->state < 2) {
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    LVar8 = Level;
    if ((((iVar11 != 0) && (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)) &&
       (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      if (piVar2[5] == -1) {
        piVar2[5] = g_deathCount;
        if (CHAR_ARRAY_00a0feec._192_2_ != -1) {
          CHAR_ARRAY_00a0feec._192_2_ = CHAR_ARRAY_00a0feec._192_2_ + 1;
        }
        iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._194_2_ < iVar11 / 600) {
          sVar7 = (short)(iVar11 >> 0x1f);
          CHAR_ARRAY_00a0feec._194_2_ =
               ((short)(iVar11 / 600) + sVar7) -
               ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
        }
        CHAR_ARRAY_00a0feec._196_4_ = CHAR_ARRAY_00a0feec._196_4_ | 1 << (LVar8 & 0x3f) | 0x80000000
        ;
      }
      else if (2 < (ushort)CHAR_ARRAY_00a0feec._192_2_) {
        if ((UnlockableItems.gloveOfDoom != '\0') || (CHAR_ARRAY_00a1000c._232_2_ != 0)) {
          if ((UnlockableItems.gloveOfDoom != '\0') &&
             (((int)(animationSpeed * 18000.5) <
               (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
                    (uint)(ushort)CHAR_ARRAY_00a0fdc4._162_2_ * -600) &&
              (CHAR_ARRAY_00a1000c._224_2_ == 0)))) {
            help::Help_QueueMessage(STR_MAY_I_SUGGEST_YOU_0x0FA0,0x1c);
          }
        }
        else {
          help::Help_QueueMessage(STR_WHY_NOT_TRY_GADGETRONS_0x0FA1,0x1d);
        }
      }
    }
    if ((((ushort)CHAR_ARRAY_00a1000c._528_2_ < 4) &&
        (((iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xd]), iVar11 != 0
          || (iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xe]),
             iVar11 != 0)) && (DAT_0096bd70 == 0x3b)))) &&
       ((hero::g_heroStateTimer == 0 && (MobyUpdateChainStart != 0)))) {
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
            help::Help_QueueMessage(STR_TO_USE_THE_BOLT_0x03EE,0x42);
          }
        }
        iVar11 = *(int *)(iVar11 + 0x28);
      } while (iVar11 != 0);
    }
    if ((((CHAR_ARRAY_0096c165[9] != '\0') && (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)
        ) && (CHAR_ARRAY_00a1000c._240_2_ == 0)) {
      help::Help_QueueMessage(STR_THE_SUCK_CANNON_CAN_0x0FA2,0x1e);
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xf]);
    if (((iVar11 != 0) && (CHAR_ARRAY_00a0feec._248_2_ == 0)) &&
       ((help::g_HelpState == 0 && ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._952_2_ == 0)))
        ))) {
      help::Help_QueueMessage(STR_BY_DOUBLE_TAPPING__YOU_0x4E2D,0x77);
    }
    iVar11 = piVar2[0x12];
    if (((iVar11 != -1) && (MobyInstance[iVar11].oClass == TRESSPASSER_PAD)) &&
       (MobyInstance[iVar11].state == '\x04')) {
      MiscLevelFlags.field28_0x1c = 1;
    }
    iVar11 = piVar2[0x13];
    if (((iVar11 != -1) && (MobyInstance[iVar11].oClass == TRESSPASSER_PAD)) &&
       (MobyInstance[iVar11].state == '\x04')) {
      MiscLevelFlags.field29_0x1d = 1;
    }
    iVar11 = piVar2[0x10];
    if (((iVar11 != -1) && (MobyInstance[iVar11].oClass == BOLT_CRANK)) &&
       (MobyInstance[iVar11].state == '\x05')) {
      MiscLevelFlags.field30_0x1e = 1;
    }
    iVar11 = piVar2[0x11];
    if (((iVar11 != -1) && (MobyInstance[iVar11].oClass == BOLT_CRANK)) &&
       (MobyInstance[iVar11].state == '\x05')) {
      MiscLevelFlags.field31_0x1f = 1;
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    uVar9 = CHAR_ARRAY_00a1000c._258_2_;
    if (((iVar11 == 0) || ((1 < hero::g_heroStateType && (hero::g_heroStateType != 9)))) ||
       ((help::g_HelpState != 0 || (help::g_HelpCurId != -1)))) {
      if ((piVar2[3] != 0) &&
         (iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]), iVar11 == 0)) {
        piVar2[3] = 0;
      }
    }
    else if (UnlockableItems.trespasser == '\0') {
      iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar11 + (uint)(ushort)CHAR_ARRAY_00a1000c._250_2_ * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c._250_2_ * 600 == 0)) {
        help::Help_QueueMessage(STR_YOULL_NEED_A_GADGETRON_0x0FA3,0x1f);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._250_2_ < iVar11 / 600) {
        sVar7 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a1000c._250_2_ =
             ((short)(iVar11 / 600) + sVar7) - ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf)
        ;
      }
    }
    else {
      iVar11 = piVar2[0x12];
      if (((iVar11 == -1) || (MobyInstance[iVar11].oClass != TRESSPASSER_PAD)) ||
         (MobyInstance[iVar11].state != '\x04')) {
        if ((piVar2[3] == 0) && (CHAR_ARRAY_00a0feec._136_2_ == 0)) {
          bVar1 = CHAR_ARRAY_00a1000c._256_2_ == 0;
          piVar2[2] = piVar2[2] + 1;
          if (bVar1) {
            CHAR_ARRAY_00a1000c[0x100] = '\0';
            CHAR_ARRAY_00a1000c[0x101] = '\x01';
            iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
            if ((int)(uint)(ushort)uVar9 < iVar11 / 600) {
              sVar7 = (short)(iVar11 >> 0x1f);
              CHAR_ARRAY_00a1000c._258_2_ =
                   ((short)(iVar11 / 600) + sVar7) -
                   ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
            }
            CHAR_ARRAY_00a1000c._260_4_ =
                 CHAR_ARRAY_00a1000c._260_4_ | 1 << (Level & 0x3f) | 0x80000000;
          }
          else {
            iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
            if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
                 (int)(iVar11 + (uint)(ushort)uVar9 * -600)) || ((uint)(ushort)uVar9 * 600 == 0)) {
              help::Help_QueueMessage(STR_USE_YOUR_GADGETRON_TRESPASSER_0x0FA4,0x20);
            }
            else if ((int)(uint)(ushort)uVar9 < iVar11 / 600) {
              sVar7 = (short)(iVar11 >> 0x1f);
              CHAR_ARRAY_00a1000c._258_2_ =
                   ((short)(iVar11 / 600) + sVar7) -
                   ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
            }
          }
        }
      }
      else {
        if (CHAR_ARRAY_00a0feec._136_2_ != -1) {
          CHAR_ARRAY_00a0feec._136_2_ = CHAR_ARRAY_00a0feec._136_2_ + 1;
        }
        iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._138_2_ < iVar11 / 600) {
          sVar7 = (short)(iVar11 >> 0x1f);
          CHAR_ARRAY_00a0feec._138_2_ =
               ((short)(iVar11 / 600) + sVar7) -
               ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf);
        }
        CHAR_ARRAY_00a0feec._140_4_ = CHAR_ARRAY_00a0feec._140_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0x14]);
    if (((iVar11 != 0) &&
        ((((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))
         && ((help::g_HelpCurId == -1 &&
             ((int)(animationSpeed * 216000.5) <
              (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
                   (uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ * -600))))))) &&
       ((CHAR_ARRAY_00a1000c._540_4_ & 1 << (Level & 0x3f)) == 0)) {
      help::Help_QueueMessage(STR_YOU_CAN_VIEW_A_0x03EF,0x43);
    }
    if ((CHAR_ARRAY_00a1000c._560_2_ == 0) || (CHAR_ARRAY_00a1000c._568_2_ == 0)) {
      if ((g_heroState == MOVEMENT_LOCKED) &&
         (((g_standingOnMoby != 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x267)) &&
          (iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]), iVar11 != 0))))
      {
        if (CHAR_ARRAY_00a1000c._560_2_ == 0) {
          help::Help_QueueMessage(STR_LASERS_ARE_MOUNTED_ON_0x07DB,0x46);
        }
        else if ((CHAR_ARRAY_00a1000c._568_2_ == 0) &&
                (iVar11 = piVar2[7], piVar2[7] = iVar11 + 1,
                (int)(animationSpeed * 1800.5) < iVar11 + 1)) {
          help::Help_QueueMessage(STR_USE__TO_CONTROL_0x07DC,0x47);
        }
      }
      else {
        piVar2[7] = 0;
      }
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xc]);
    if (((iVar11 != 0) && (CHAR_ARRAY_00a0feec._200_2_ == 0)) &&
       ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
      CHAR_ARRAY_00a0feec[200] = '\0';
      CHAR_ARRAY_00a0feec[0xc9] = '\x01';
      iVar11 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._202_2_ < iVar11 / 600) {
        sVar7 = (short)(iVar11 >> 0x1f);
        CHAR_ARRAY_00a0feec._202_2_ =
             ((short)(iVar11 / 600) + sVar7) - ((short)((short)(iVar11 / 0x2580000) + sVar7) >> 0xf)
        ;
      }
      CHAR_ARRAY_00a0feec._204_4_ = CHAR_ARRAY_00a0feec._204_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xb]);
    if ((((iVar11 == 0) || (CHAR_ARRAY_00a0feec._200_2_ != 0)) || (hero::g_heroStateType < 2)) ||
       ((hero::g_heroStateType == 9 || (piVar2[10] != 0)))) {
      if ((piVar2[10] != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) {
        piVar2[10] = 0;
      }
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      piVar2[9] = piVar2[9] + 1;
      auVar14 = loadVectorLeftIndexed(0x1c,0x250c68);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x28,
                         ZEXT48(piVar2));
      *(undefined4 *)((uint)(piVar2 + 10) & 0xfffffffc) = uVar3;
    }
    iVar11 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[0xb]);
    uVar10 = (ulonglong)iVar11;
    if ((((iVar11 != 0) &&
         (uVar10 = (ulonglong)(ushort)CHAR_ARRAY_00a0feec._200_2_, CHAR_ARRAY_00a0feec._200_2_ == 0)
         ) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
       ((((uVar10 = (ulonglong)(uint)piVar2[9], 2 < piVar2[9] &&
          (uVar10 = (ulonglong)(uint)help::g_HelpState, help::g_HelpState == 0)) &&
         (uVar10 = (ulonglong)(uint)help::g_HelpCurId, help::g_HelpCurId == -1)) &&
        (CHAR_ARRAY_00a1000c._584_2_ == 0)))) {
      iVar11 = help::Help_QueueMessage(STR_YOU_CAN_KICK_OFF_0x0FA5,0x49);
      uVar10 = (ulonglong)iVar11;
    }
  }
  return uVar10;
}



//==== 00251af8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1344_00251af8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1344_00251af8(void)

{
  DAT_0079b67c = 0x10000;
  return;
}



//==== 00251b20  ns=mobyupdate_unsorted  size=0x604
// sig: undefined UpdateMoby_1344(MobyInstance * moby)
// callers(0): 
// callees(2): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a1000c: 'None'

/* Moby 1344 */

char * mobyupdate_unsorted::UpdateMoby_1344(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  
  piVar2 = (int *)moby->pVar;
  iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[7]);
  DAT_00fa3840 = (uint)LZCOUNT(iVar7) >> 5 ^ 1;
  bVar1 = moby->state;
  pcVar8 = (char *)(uint)bVar1;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
    pcVar8 = (char *)0xff;
  }
  else if (bVar1 < 2) {
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
    if ((iVar7 != 0) &&
       ((((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) && (help::g_HelpState == 0))
        && ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._424_2_ == 0)))))) {
      help::Help_QueueMessage(STR_YOU_CAN_TIPTOE_TO_0x2710,0x35);
    }
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    if ((((iVar7 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
        (help::g_HelpState == 0)) && (help::g_HelpCurId == -1)) {
      if ((MiscLevelFlags.PremiumNanotech != false) || (CHAR_ARRAY_00a1000c._440_2_ != 0)) {
        if ((MiscLevelFlags.PremiumNanotech != false) &&
           ((MiscLevelFlags.UltraNanotech == false && (CHAR_ARRAY_00a1000c._448_2_ == 0)))) {
          help::Help_QueueMessage(STR_THIS_DISPENSER_ALSO_CARRIES_0x2713,0x38);
        }
      }
      else {
        help::Help_QueueMessage(STR_THIS_IS_A_PREMIUM_0x2712,0x37);
      }
    }
    if ((((g_gameMode == GAME_MODE_NORMAL) && (CHAR_ARRAY_0096c165[0x1c] != '\0')) &&
        (help::g_HelpState == 0)) &&
       ((help::g_HelpCurId == -1 && (CHAR_ARRAY_00a1000c._432_2_ == 0)))) {
      help::Help_QueueMessage(STR_THESE_MAGNEBOOTS_ARE_A_0x2711,0x36);
    }
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[2]);
    if (((iVar7 != 0) && ((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)))) &&
       ((UnlockableItems.devastator == '\0' &&
        (((help::g_HelpState == 0 && (help::g_HelpCurId == -1)) &&
         (CHAR_ARRAY_00a1000c._736_2_ == 0)))))) {
      help::Help_QueueMessage(STR_THE_DEVASTATOR_MANUFACTURED_EXCLUSIVELY_0x2715,0x5c);
    }
    bVar5 = false;
    pcVar8 = MobyUpdateChainStart;
    if (MobyUpdateChainStart != (char *)0x0) {
      do {
        if ((*(short *)(pcVar8 + 0xa6) == 0x359) && (pcVar8[0x20] != '\x01')) {
          bVar5 = true;
        }
        pcVar8 = *(char **)(pcVar8 + 0x28);
      } while (pcVar8 != (char *)0x0);
      pcVar8 = (char *)0x0;
      if (bVar5) {
        iVar7 = piVar2[4];
        if (((iVar7 != -1) &&
            (fVar3 = g_heroPosition.y - MobyInstance[iVar7].pos.y,
            fVar4 = g_heroPosition.x - MobyInstance[iVar7].pos.x,
            SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 15.0)) &&
           ((iVar7 = piVar2[5], iVar7 != -1 &&
            ((fVar3 = g_heroPosition.y - MobyInstance[iVar7].pos.y,
             fVar4 = g_heroPosition.x - MobyInstance[iVar7].pos.x,
             SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 15.0 && (CHAR_ARRAY_00a1000c._848_2_ == 0)))))) {
          help::Help_QueueMessage(STR_GADGE_BOTS_CANT_CLIMB_BUT_0x2717,0x6a);
        }
        pcVar8 = (char *)mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[6]);
        if ((pcVar8 != (char *)0x0) && (iVar7 = piVar2[8], iVar7 != -1)) {
          pcVar8 = (char *)(uint)MobyInstance[iVar7].oClass;
          if ((MobyInstance[iVar7].oClass == DOOR_03F7) &&
             (pcVar8 = (char *)(uint)MobyInstance[iVar7].state, MobyInstance[iVar7].state != 4)) {
            pcVar8 = CHAR_ARRAY_00a1000c;
            if (CHAR_ARRAY_00a1000c._856_2_ == 0) {
              CHAR_ARRAY_00a1000c[0x358] = '\0';
              CHAR_ARRAY_00a1000c[0x359] = '\x01';
              iVar7 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
              if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._858_2_ < iVar7 / 600) {
                sVar6 = (short)(iVar7 >> 0x1f);
                CHAR_ARRAY_00a1000c._858_2_ =
                     ((short)(iVar7 / 600) + sVar6) -
                     ((short)((short)(iVar7 / 0x2580000) + sVar6) >> 0xf);
              }
              CHAR_ARRAY_00a1000c._860_4_ =
                   CHAR_ARRAY_00a1000c._860_4_ | 1 << (Level & 0x3f) | 0x80000000;
            }
            else {
              iVar7 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
              if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
                   (int)(iVar7 + (uint)(ushort)CHAR_ARRAY_00a1000c._858_2_ * -600)) ||
                 ((uint)(ushort)CHAR_ARRAY_00a1000c._858_2_ * 600 == 0)) {
                pcVar8 = (char *)help::Help_QueueMessage(STR_USE_THE_ENTER_COMMAND_0x2718,0x6b);
              }
              else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._858_2_ < iVar7 / 600) {
                sVar6 = (short)(iVar7 >> 0x1f);
                CHAR_ARRAY_00a1000c._858_2_ =
                     ((short)(iVar7 / 600) + sVar6) -
                     ((short)((short)(iVar7 / 0x2580000) + sVar6) >> 0xf);
              }
            }
          }
        }
      }
    }
  }
  return pcVar8;
}



//==== 00252124  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1345_00252124(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1345_00252124(void)

{
  DAT_0079b6ec = 0x10000;
  return;
}



//==== 00252140  ns=mobyupdate_unsorted  size=0x1c0
// sig: undefined UpdateMoby_1345(MobyInstance * moby)
// callers(0): 
// callees(6): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 001129d0 mobyutil::MB_ScaledVecWrapper; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 1345 */

void mobyupdate_unsorted::UpdateMoby_1345(MobyInstance *moby)

{
  int *piVar1;
  MobyInstance *pMVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == 0) {
    if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      moby->state = '\x01';
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (moby->state < 2) {
    iVar4 = mobyutil::MB_ScaledVecWrapper(0x4048000000000000,moby);
    if (iVar4 != -1) {
      RegisterFuncForMoby(&PTR_M1346_00252318_00709f48,moby);
    }
    uVar3 = (ulonglong)(uint)piVar1[1];
    if (piVar1[1] == 0xffffffff) {
      iVar4 = sound::PlayMobySound(0,4,moby);
      uVar3 = (ulonglong)iVar4;
      piVar1[1] = iVar4;
    }
    iVar4 = *piVar1;
    if (-1 < iVar4) {
      if ((((int)uVar3 != -1) &&
          (iVar5 = (int)(uVar3 << 7) - (int)(uVar3 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar5 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar5 + 4) != '\0')) {
        sound::sound_Kill((int)uVar3);
        iVar4 = *piVar1;
      }
      pMVar2 = MobyInstance;
      piVar1[1] = -1;
      if (pMVar2[iVar4].state == '\a') {
        if (moby->levelFlagIdx != -1) {
          mobyfunc::SetLevelFlag();
        }
        sound::PlayMobySound(1,0,moby);
        moby->state = '\x02';
        moby->collision = (ushort *)0x0;
      }
    }
  }
  return;
}



//==== 00252318  ns=mobyupdate_helpers  size=0x3a0
// sig: undefined M1346_00252318(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1346_00252318(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r25;
  int iVar19;
  ulonglong unaff_r26;
  int iVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar1 = uVar9 - 0x250;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar9;
  puVar7[0x4c] = in_LR;
  puVar7[0x43] = in_f25;
  puVar7[0x44] = in_f26;
  puVar7[0x45] = in_f27;
  puVar7[0x46] = in_f28;
  puVar7[0x47] = in_f29;
  puVar7[0x48] = in_f30;
  puVar7[0x49] = in_f31;
  puVar7[0x42] = unaff_r31;
  puVar7[0x3f] = unaff_r28;
  puVar7[0x41] = unaff_r30;
  puVar7[0x40] = unaff_r29;
  puVar7[0x3e] = unaff_r27;
  puVar7[0x3d] = unaff_r26;
  puVar7[0x3c] = unaff_r25;
  fastfunc::FastMtxCopyNoTranslate(uVar9 - 0x1e0,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar7 + 0xa4) = uVar2;
  *(undefined4 *)(puVar7 + 0x15) = uVar3;
  dVar24 = 1.0;
  *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
  uVar10 = draw::GetEffectTex(0xe);
  puVar7[0x37] = uVar10;
  puVar7[0x25] = uVar10;
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x38] = uVar10;
  puVar7[0x26] = uVar10;
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x36] = uVar10;
  puVar7[0x24] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_00fa3848,DAT_0079b738,DAT_00fa384c,DAT_0079b73c,0x80);
  puVar7[0x27] = uVar10;
  uVar10 = idol_draw::PackCmd(DAT_00fa3850,DAT_0079b740,DAT_00fa3854,DAT_0079b744,0x80);
  puVar7[0x39] = uVar10;
  uVar2 = DAT_0079b710;
  *(undefined4 *)((int)puVar7 + 0xfc) = DAT_0079b710;
  *(undefined4 *)(puVar7 + 0x1f) = uVar2;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar2;
  uVar3 = DAT_0079b714;
  *(undefined4 *)(puVar7 + 0x1e) = uVar2;
  *(undefined4 *)((int)puVar7 + 0x18c) = uVar3;
  *(undefined4 *)(puVar7 + 0x31) = uVar3;
  lVar15 = uVar9 - 0x110;
  *(undefined4 *)((int)puVar7 + 0x184) = uVar3;
  puVar14 = &DAT_0079b770;
  *(undefined4 *)(puVar7 + 0x30) = uVar3;
  lVar13 = uVar9 - 0x1a0;
  puVar11 = &DAT_0079b7b0;
  lVar21 = 4;
  lVar18 = lVar1;
  puVar12 = &DAT_0079b750;
  pfVar17 = (float *)&DAT_0079b74c;
  do {
    puVar16 = (undefined4 *)lVar15;
    *puVar16 = *puVar14;
    puVar16[1] = puVar14[1];
    puVar16[2] = puVar14[2];
    puVar8 = puVar14 + 3;
    puVar14 = puVar14 + 4;
    puVar16[3] = *puVar8;
    lVar15 = lVar15 + 0x10;
    puVar16 = (undefined4 *)lVar13;
    *puVar16 = *puVar11;
    puVar16[1] = puVar11[1];
    puVar16[2] = puVar11[2];
    puVar8 = puVar11 + 3;
    puVar11 = puVar11 + 4;
    puVar16[3] = *puVar8;
    fVar4 = *pfVar17;
    lVar13 = lVar13 + 0x10;
    iVar20 = (int)lVar18;
    *(float *)(iVar20 + 0x100) = fVar4;
    uVar2 = *puVar12;
    pfVar17 = pfVar17 + 2;
    *(float *)(iVar20 + 400) = fVar4;
    puVar12 = puVar12 + 2;
    *(undefined4 *)(iVar20 + 0x104) = uVar2;
    *(undefined4 *)(iVar20 + 0x194) = uVar2;
    lVar18 = lVar18 + 8;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  dVar25 = -0.5;
  dVar26 = 0.5;
  iVar20 = 0;
  dVar27 = -0.20000000298023224;
  dVar28 = 0.20000000298023224;
  do {
    dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
    lVar15 = 4;
    lVar18 = lVar1;
    lVar13 = lVar1;
    puVar12 = &DAT_0079b750;
    pfVar17 = (float *)&DAT_0079b74c;
    do {
      iVar19 = (int)lVar13;
      fVar4 = *(float *)(iVar19 + 0xb8);
      fVar5 = *(float *)(iVar19 + 0x148);
      fVar6 = *pfVar17;
      pfVar17 = pfVar17 + 2;
      *(undefined4 *)((int)lVar18 + 0x104) = *puVar12;
      puVar12 = puVar12 + 2;
      *(float *)(iVar19 + 0xb8) = (float)((double)fVar4 + dVar24);
      *(float *)(iVar19 + 0x148) = (float)((double)fVar5 + dVar24);
      *(float *)((int)lVar18 + 0x100) = (float)((double)fVar6 + dVar22);
      lVar13 = lVar13 + 0x10;
      lVar18 = lVar18 + 8;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar22 = 0.0;
    iVar19 = -3;
    dVar23 = dVar22;
    do {
      puVar7[0x3a] = (longlong)iVar19;
      *(float *)((int)puVar7 + 0xb4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      *(float *)((int)puVar7 + 0xc4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      dVar22 = dVar23;
      if (iVar19 < 4) {
        dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
      }
      iVar19 = iVar19 + 1;
      puVar7[0x3a] = (longlong)iVar19;
      uVar2 = EffectTexHeaders;
      *(float *)((int)puVar7 + 0xd4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      *(float *)((int)puVar7 + 0xe4) = (float)((double)(longlong)puVar7[0x3a] + dVar22);
      draw::FastDrawQuad(uVar9 - 0x1a0,uVar9 - 0x1e0,0,uVar2,9);
    } while (iVar19 < 3);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 5);
  return;
}



//==== 002526b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1346_002526b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1346_002526b8(void)

{
  DAT_0079b83c = 0x10000;
  return;
}



//==== 00252710  ns=mobyupdate_unsorted  size=0xd38
// sig: undefined UpdateMoby_1346(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 00229a90 FUN_00229a90; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502b08 fastfunc::FastVecAddSelf

/* Moby 1346 */

void mobyupdate_unsorted::UpdateMoby_1346(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  int *piVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  MobyInstance *pMVar22;
  longlong lVar20;
  longlong lVar21;
  MobyInstance *pMVar23;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x1b0;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar19;
  puVar15[0x38] = in_LR;
  puVar15[0x32] = in_f28;
  puVar15[0x33] = in_f29;
  puVar15[0x34] = in_f30;
  puVar15[0x35] = in_f31;
  puVar15[0x31] = unaff_r31;
  puVar15[0x30] = unaff_r30;
  bVar1 = moby->state;
  piVar13 = (int *)moby->pVar;
  fVar2 = (moby->rotation).z;
  puVar15[0x2f] = unaff_r29;
  puVar15[0x2e] = unaff_r28;
  puVar15[0x2d] = unaff_r27;
  puVar15[0x2c] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar12 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar12] == '\0') &&
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2)
                    ) & 1 << (uVar12 & 0x1f)) == 0)) {
        if (piVar13[1] == -1) {
          mobyfunc::DeleteMoby(moby);
        }
        else {
          piVar13[4] = 0;
          moby->state = '\x01';
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 3) {
    uVar12 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar12] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2))
        & 1 << (uVar12 & 0x1f)) == 0)) {
      pMVar23 = (MobyInstance *)0x0;
      if (((piVar13[1] != -1) &&
          (pMVar22 = MobyInstance + piVar13[1], pMVar22 != (MobyInstance *)0x0)) &&
         (pMVar22->state != 0xfd && pMVar22->state != 0xfe)) {
        pMVar23 = pMVar22;
      }
      if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[2] != -1)) &&
         ((pMVar22 = MobyInstance + piVar13[2], pMVar22 != (MobyInstance *)0x0 &&
          (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
        pMVar23 = pMVar22;
      }
      if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[3] != -1)) &&
         ((pMVar22 = MobyInstance + piVar13[3], pMVar22 != (MobyInstance *)0x0 &&
          (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
        pMVar23 = pMVar22;
      }
      if (pMVar23 == (MobyInstance *)0x0) {
        moby->state = '\x03';
        if (piVar13[5] != -1) {
          MobyInstance[piVar13[5]].state = '\x01';
          piVar13[5] = -1;
        }
      }
      else {
        dVar35 = 3.1415927410125732;
        dVar29 = (double)fastfunc::FastWrapRot(fVar2,3.1415927);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        (moby->rotation).z = (float)dVar29;
        fVar2 = (pMVar23->pos).x - fVar2;
        fVar3 = (pMVar23->pos).y - fVar3;
        fVar4 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)((int)puVar15 + 0xc4) = fVar2;
        *(float *)(puVar15 + 0x19) = fVar3;
        *(float *)((int)puVar15 + 0xcc) = fVar4 - fVar10;
        dVar34 = 0.0;
        dVar33 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xc4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0xcc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar15 + 0x19) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar15 + 0xc4));
        if (*(float *)((int)puVar15 + 0xcc) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar5 = ABS(*(float *)(puVar15 + 0x19));
        if (*(float *)((int)puVar15 + 0xcc) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        dVar30 = dVar34;
        if (0.0 < fVar2) {
          lVar20 = uVar19 - 0x1a0;
          lVar25 = uVar19 - 0x80;
          lVar27 = uVar19 - 0x70;
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar4 = fVar2 * fVar2;
          *(float *)((int)puVar15 + 0x13c) = fVar2;
          *(float *)((int)puVar15 + 0x134) = fVar2;
          *(float *)(puVar15 + 0x27) = fVar2;
          *(float *)(puVar15 + 0x26) = fVar2;
          fVar2 = fVar4 * fVar4;
          *(float *)((int)puVar15 + 0x134) = *(float *)((int)puVar15 + 0x134) * fVar4;
          *(float *)(puVar15 + 0x27) = *(float *)(puVar15 + 0x27) * fVar2;
          *(float *)((int)puVar15 + 0x13c) = *(float *)((int)puVar15 + 0x13c) * fVar2 * fVar4;
          do {
            *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x120) * fVar2 * fVar2;
            iVar16 = (int)lVar25;
            lVar20 = lVar20 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar19 - 0x80;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar2 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0x130) = *(float *)((int)lVar20 + 0x130) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          do {
            iVar16 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar17 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar16 + 0x130)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar10 + fVar3);
        }
        dVar30 = (double)mobyutil::MB_DeltAngSpeed
                                   (dVar29,dVar30,
                                    (double)(float)((double)DAT_0071f418 * 1.5707963705062866),
                                    (double)(float)((double)DAT_0071f418 * dVar35),
                                    (double)(mobyutil::g_FrameTime * 0.7853982),&DAT_002526d0,
                                    &DAT_00720000,piVar13 + 4);
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        (moby->rotation).z = (float)dVar30;
        fVar2 = (pMVar23->pos).x - fVar2;
        fVar3 = (pMVar23->pos).y - fVar3;
        dVar31 = ABS((double)fVar2);
        dVar32 = ABS((double)fVar3);
        *(float *)(puVar15 + 0x17) = fVar2;
        *(float *)((int)puVar15 + 0xbc) = fVar3;
        *(float *)(puVar15 + 0x18) = (float)(dVar31 - dVar32);
        uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1d) & 4;
        dVar29 = ABS((double)*(float *)(puVar15 + 0x17));
        if ((double)*(float *)(puVar15 + 0x18) - dVar34 < 0.0) {
          dVar29 = dVar32;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar32 = ABS((double)*(float *)((int)puVar15 + 0xbc));
        if ((double)*(float *)(puVar15 + 0x18) - dVar34 < 0.0) {
          dVar32 = dVar31;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar31 = dVar34;
        if (dVar34 < dVar29) {
          lVar20 = uVar19 - 0x1a0;
          lVar27 = uVar19 - 0x90;
          lVar25 = uVar19 - 0xa0;
          lVar28 = 2;
          fVar10 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
          fVar4 = fVar10 * fVar10;
          *(float *)((int)puVar15 + 0x11c) = fVar10;
          *(float *)((int)puVar15 + 0x114) = fVar10;
          *(float *)(puVar15 + 0x23) = fVar10;
          *(float *)(puVar15 + 0x22) = fVar10;
          fVar10 = fVar4 * fVar4;
          *(float *)((int)puVar15 + 0x114) = *(float *)((int)puVar15 + 0x114) * fVar4;
          *(float *)(puVar15 + 0x23) = *(float *)(puVar15 + 0x23) * fVar10;
          *(float *)((int)puVar15 + 0x11c) = *(float *)((int)puVar15 + 0x11c) * fVar10 * fVar4;
          do {
            *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x100) * fVar10 * fVar10;
            iVar16 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar10 * fVar10;
            lVar27 = lVar27 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar27 = uVar19 - 0xa0;
          pfVar26 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar25 = lVar27;
          do {
            fVar10 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar20 + 0x110) = *(float *)((int)lVar20 + 0x110) * fVar10;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar25 = 2;
          lVar20 = lVar21;
          dVar29 = dVar34;
          do {
            iVar16 = (int)lVar20;
            iVar17 = (int)lVar27;
            lVar20 = lVar20 + 0x10;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x110)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar31 = (double)((float)(dVar29 + dVar33) * fVar2 + fVar3);
        }
        dVar29 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar31);
        if (dVar29 < 0.04363323003053665) {
          fVar2 = (moby->rotation).z;
          fVar3 = fVar2 + 1.5707963;
          fVar10 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar10 = fVar2;
          }
          fVar4 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar4 = fVar3;
          }
          fVar5 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
            fVar5 = fVar10;
          }
          fVar2 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
            fVar2 = fVar4;
          }
          fVar3 = fVar5 * fVar5;
          fVar10 = fVar2 * fVar2;
          fVar18 = fVar3 * fVar3 * fVar5;
          *(undefined4 *)(puVar15 + 0x11) = 0;
          fVar4 = fVar10 * fVar10 * fVar2;
          fVar11 = fVar3 * fVar18;
          fVar6 = fVar10 * fVar4;
          *(float *)((int)puVar15 + 0x84) =
               (fVar3 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar18 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5)
               * 1.5;
          *(float *)(puVar15 + 0x10) =
               (fVar10 * fVar6 * 2.601887e-06 +
               fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar10 * fVar2 * -0.16666657 + fVar2)
               * 1.5;
          fastfunc::FastVecAddSelf(uVar19 - 0x120,uVar19 - 0x130,(longlong)(int)moby + 0x10);
          fVar2 = (pMVar23->pos).x;
          fVar3 = *(float *)(puVar15 + 0x10);
          fVar10 = (pMVar23->pos).y;
          fVar4 = *(float *)((int)puVar15 + 0x84);
          fVar5 = fVar2 - fVar3;
          fVar6 = fVar10 - fVar4;
          dVar30 = ABS((double)fVar5);
          dVar31 = ABS((double)fVar6);
          *(float *)((int)puVar15 + 0xac) = fVar5;
          *(float *)(puVar15 + 0x16) = fVar6;
          fVar5 = *(float *)(puVar15 + 0x11);
          *(float *)((int)puVar15 + 0xb4) = (float)(dVar30 - dVar31);
          fVar18 = mobyutil::g_FrameTime * 40.0;
          fVar6 = (pMVar23->pos).z;
          uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)((int)puVar15 + 0xac));
          if ((double)*(float *)((int)puVar15 + 0xb4) - dVar34 < 0.0) {
            dVar29 = dVar31;
          }
          fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar31 = ABS((double)*(float *)(puVar15 + 0x16));
          if ((double)*(float *)((int)puVar15 + 0xb4) - dVar34 < 0.0) {
            dVar31 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar30 = dVar34;
          if (dVar34 < dVar29) {
            lVar20 = uVar19 - 0x1a0;
            lVar27 = uVar19 - 0xb0;
            lVar25 = uVar19 - 0xc0;
            lVar28 = 2;
            fVar8 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar15 + 0xfc) = fVar8;
            *(float *)((int)puVar15 + 0xf4) = fVar8;
            *(float *)(puVar15 + 0x1f) = fVar8;
            *(float *)(puVar15 + 0x1e) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar9;
            *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar8;
            *(float *)((int)puVar15 + 0xfc) = *(float *)((int)puVar15 + 0xfc) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xe0) * fVar8 * fVar8;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar8 * fVar8;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar27 = uVar19 - 0xc0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar25 = lVar27;
            do {
              fVar8 = *pfVar26;
              fVar9 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar20 + 0xf0) = *(float *)((int)lVar20 + 0xf0) * fVar8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar25 = 2;
            lVar20 = lVar21;
            dVar29 = dVar34;
            do {
              iVar16 = (int)lVar20;
              iVar17 = (int)lVar27;
              lVar20 = lVar20 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xf0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            dVar30 = (double)((float)(dVar29 + dVar33) * fVar11 + fVar7);
          }
          fVar4 = fVar4 - fVar10;
          fVar3 = fVar3 - fVar2;
          fVar6 = fVar6 - fVar5;
          fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
          *(float *)((int)puVar15 + 0xa4) = fVar6;
          dVar32 = ABS((double)fVar6);
          dVar31 = ABS((double)fVar2);
          *(float *)(puVar15 + 0x14) = fVar2;
          *(float *)(puVar15 + 0x15) = (float)(dVar31 - dVar32);
          uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar15 + 0x14));
          if ((double)*(float *)(puVar15 + 0x15) - dVar34 < 0.0) {
            dVar29 = dVar32;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar32 = ABS((double)*(float *)((int)puVar15 + 0xa4));
          if ((double)*(float *)(puVar15 + 0x15) - dVar34 < 0.0) {
            dVar32 = dVar31;
          }
          fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          if (dVar34 < dVar29) {
            lVar20 = uVar19 - 0x1a0;
            lVar27 = uVar19 - 0xd0;
            lVar25 = uVar19 - 0xe0;
            lVar28 = 2;
            fVar10 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
            fVar4 = fVar10 * fVar10;
            *(float *)((int)puVar15 + 0xdc) = fVar10;
            *(float *)((int)puVar15 + 0xd4) = fVar10;
            *(float *)(puVar15 + 0x1b) = fVar10;
            *(float *)(puVar15 + 0x1a) = fVar10;
            fVar10 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar4;
            *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar10;
            *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar10 * fVar4;
            do {
              *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xc0) * fVar10 * fVar10;
              iVar16 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar16 + 4) * fVar10 * fVar10;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar27 = uVar19 - 0xe0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar25 = lVar27;
            do {
              fVar10 = *pfVar26;
              fVar4 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar20 + 0xd0) = *(float *)((int)lVar20 + 0xd0) * fVar10;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
              lVar25 = lVar25 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar20 = 2;
            do {
              iVar16 = (int)lVar21;
              iVar17 = (int)lVar27;
              lVar21 = lVar21 + 0x10;
              lVar27 = lVar27 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar16 + 0xd0)) +
                                *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                               *(float *)(iVar17 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar34 = (double)((float)(dVar34 + dVar33) * fVar2 + fVar3);
          }
          mobyutil::MB_SphericalToVector
                    (fVar18,(float)dVar30,(float)dVar34,(float *)(puVar15 + 0xe));
          fVar2 = animationSpeed;
          *(undefined4 *)(puVar15 + 8) = *(undefined4 *)(puVar15 + 0x10);
          *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(puVar15 + 0x11);
          *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(puVar15 + 0xe);
          *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)(puVar15 + 0xf);
          *(undefined4 *)((int)puVar15 + 0x44) = *(undefined4 *)((int)puVar15 + 0x84);
          *(undefined4 *)((int)puVar15 + 0x4c) = *(undefined4 *)((int)puVar15 + 0x8c);
          *(undefined4 *)((int)puVar15 + 0x54) = *(undefined4 *)((int)puVar15 + 0x74);
          *(undefined4 *)((int)puVar15 + 0x5c) = *(undefined4 *)((int)puVar15 + 0x7c);
          puVar15[0x2a] = (longlong)(int)(fVar2 * 30.5);
          FUN_00229a90((longlong)(int)moby,&DAT_00720000,puVar15[8],puVar15[9],puVar15[10],
                       puVar15[0xb],*(undefined4 *)((int)puVar15 + 0x154));
          if (pMVar23 == MobyInstance + piVar13[1]) {
            piVar13[1] = -1;
          }
          else if (pMVar23 == MobyInstance + piVar13[2]) {
            piVar13[2] = -1;
          }
          else {
            piVar13[3] = -1;
          }
        }
        dVar29 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)dVar35);
        (moby->rotation).z = (float)dVar29;
      }
      if (*piVar13 != -1) {
        MobyInstance[*piVar13].setByGroup = '\x01';
        *piVar13 = -1;
      }
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    pMVar23 = (MobyInstance *)0x0;
    if ((((piVar13[1] != -1) &&
         (pMVar22 = MobyInstance + piVar13[1], pMVar22 != (MobyInstance *)0x0)) &&
        (pMVar22->state != 0xfe)) &&
       ((pMVar22->state != 0xfd && (pMVar23 = pMVar22, pMVar22 != (MobyInstance *)0x0)))) {
      mobyfunc::DeleteMoby(pMVar22);
    }
    if (((pMVar23 == (MobyInstance *)0x0) && (piVar13[2] != -1)) &&
       ((pMVar22 = MobyInstance + piVar13[2], pMVar22 != (MobyInstance *)0x0 &&
        (pMVar22->state != 0xfd && pMVar22->state != 0xfe)))) {
      pMVar23 = pMVar22;
    }
    if (pMVar23 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar23);
    }
    uVar12 = moby->uid;
    iVar17 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
    iVar16 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
    uVar14 = *(uint *)(&DAT_00a54dd0 + iVar16);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar17) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar17) | 1 << (uVar12 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar16) = uVar14 | 1 << (uVar12 & 0x1f);
  }
  return;
}



//==== 00253448  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1347_00253448(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1347_00253448(void)

{
  DAT_0079b8ac = 0x10000;
  return;
}



//==== 00253480  ns=mobyupdate_unsorted  size=0xba4
// sig: undefined UpdateMoby_1347(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid; 0047ebac FUN_0047ebac
// strings: 00a1000c: 'None'

/* Moby 1347 */

void mobyupdate_unsorted::UpdateMoby_1347(MobyInstance *moby)

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
  iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x14]);
  if (iVar5 != 0) {
    if ((hero::g_heroStateType == 0x12) &&
       (fVar3 = pfVar2[0x1a], pfVar2[0x1a] = (float)((int)fVar3 + 1),
       (int)(animationSpeed * 360.5) < (int)fVar3)) {
      if ((CHAR_ARRAY_00a1000c._548_4_ & 1 << (Level & 0x3f)) == 0) {
        help::Help_QueueMessage(STR_PRESS__TO_DIVE_0x03F0,0x44);
      }
    }
    else if ((hero::g_heroStateType == 0x11) || (MiscLevelFlags.field13_0xd != 0)) {
      CHAR_ARRAY_00a1000c[0x220] = -1;
      CHAR_ARRAY_00a1000c[0x221] = -1;
    }
  }
  iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x10]);
  if (((iVar5 != 0) &&
      ((int)((float)(longlong)(animationSpeed * 3600.5) * 60.0) <
       (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
            (uint)(ushort)CHAR_ARRAY_00a0feec._74_2_ * -600))) &&
     ((CHAR_ARRAY_00a1000c._580_4_ & 1 << (Level & 0x3f)) == 0)) {
    help::Help_QueueMessage(STR_PRESS_THE_SELECT_BUTTON_0x07DD,0x48);
  }
  dVar6 = (double)animationSpeed;
  dVar7 = 60.5;
  if (((worldUpdateTime < (int)(dVar6 * 60.5)) && (CHAR_ARRAY_00a0feec._96_2_ != 0)) &&
     ((CHAR_ARRAY_00a0feec._88_2_ == 0 && ((CHAR_ARRAY_00a1000c._652_4_ & 0x80000000) == 0)))) {
    help::Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_PUSH_0x4E27,0x51);
    dVar6 = (double)animationSpeed;
  }
  if ((worldUpdateTime < (int)(dVar6 * dVar7)) && (CHAR_ARRAY_00a0feec._232_2_ != 0)) {
    if ((CHAR_ARRAY_00a1000c._916_4_ & 0x80000000) == 0) {
      help::Help_QueueMessage(STR_WHEN_YOURE_UNDERWATER_DONT_0x4E28,0x72);
    }
    CHAR_ARRAY_00a0feec[0xe8] = '\0';
    CHAR_ARRAY_00a0feec[0xe9] = '\0';
  }
  if (((UnlockableItems.hydrodisplacer == '\0') &&
      (iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[9]), iVar5 != 0)) &&
     (g_standingOnMoby == 0)) {
    iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a1000c._282_2_ * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c._282_2_ * 600 == 0)) {
      help::Help_QueueMessage(STR_TO_PROGRESS_ANY_FURTHER_0x138A,0x23);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._282_2_ < iVar5 / 600) {
      sVar4 = (short)(iVar5 >> 0x1f);
      CHAR_ARRAY_00a1000c._282_2_ =
           ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
    }
  }
  if (UnlockableItems.hydrodisplacer != '\0') {
    iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[9]);
    if ((iVar5 != 0) && (g_standingOnMoby == 0)) {
      if (CHAR_ARRAY_00a1000c._288_2_ == 0) {
        CHAR_ARRAY_00a1000c[0x120] = '\0';
        CHAR_ARRAY_00a1000c[0x121] = '\x01';
        iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._290_2_ < iVar5 / 600) {
          sVar4 = (short)(iVar5 >> 0x1f);
          CHAR_ARRAY_00a1000c._290_2_ =
               ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._292_4_ = CHAR_ARRAY_00a1000c._292_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
             (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a1000c._290_2_ * -600)) ||
           ((uint)(ushort)CHAR_ARRAY_00a1000c._290_2_ * 600 == 0)) {
          help::Help_QueueMessage(STR_IF_YOU_EQUIP_THE_0x138B,0x24);
        }
        else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._290_2_ < iVar5 / 600) {
          sVar4 = (short)(iVar5 >> 0x1f);
          CHAR_ARRAY_00a1000c._290_2_ =
               ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf)
          ;
        }
      }
    }
    if (hero::g_heroStateType == 0x13) {
      CHAR_ARRAY_00a1000c[0x120] = -1;
      CHAR_ARRAY_00a1000c[0x121] = -1;
    }
  }
  if ((ushort)CHAR_ARRAY_00a1000c._304_2_ < 2) {
    if (g_LevelFlags[Level][(int)pfVar2[8]] == -1) {
      if (CHAR_ARRAY_00a1000c._296_2_ != -1) {
        CHAR_ARRAY_00a1000c._296_2_ = CHAR_ARRAY_00a1000c._296_2_ + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._298_2_ < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a1000c._298_2_ =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a1000c._300_4_ = CHAR_ARRAY_00a1000c._300_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    else if ((2 < (int)(&DAT_00a0fcd4)[(int)pfVar2[8]]) &&
            (iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xb]),
            iVar5 != 0)) {
      iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      iVar1 = (int)(animationSpeed * 18000.5);
      if ((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4._130_2_ * -600)) &&
         ((((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4._122_2_ * -600) &&
            (iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4._162_2_ * -600))) &&
           (iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4._82_2_ * -600))) &&
          ((iVar1 < (int)(iVar5 + (uint)(ushort)CHAR_ARRAY_00a0fdc4._138_2_ * -600) &&
           ((CHAR_ARRAY_00a1000c._308_4_ & 0x80000000) == 0)))))) {
        help::Help_QueueMessage(STR_NEED_SOMETHING_MORE_POWERFUL_0x138D,0x26);
      }
    }
  }
  if (((MiscLevelFlags.Zoomerator != false) && (CHAR_ARRAY_00a1000c._272_2_ == 0)) &&
     (hero::g_heroStateType == 0x16)) {
    help::Help_QueueMessage(STR_SINCE_YOU_NOW_HAVE_0x1389,0x22);
  }
  if (CHAR_ARRAY_00a1000c._752_2_ == 0) {
    if ((g_heroState == HELI_PACK_FWD_JUMP) &&
       ((iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xd]), iVar5 != 0
        || (iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xe]),
           iVar5 != 0)))) {
      if (CHAR_ARRAY_00a1000c._752_2_ != -1) {
        CHAR_ARRAY_00a1000c._752_2_ = CHAR_ARRAY_00a1000c._752_2_ + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._754_2_ < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a1000c._754_2_ =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a1000c._756_4_ = CHAR_ARRAY_00a1000c._756_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    if (hero::g_heroStateType == 0x12) {
      iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)(pfVar2 + 4),(longlong)(int)pfVar2[0xd]);
      if ((iVar5 != 0) ||
         (iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)(pfVar2 + 4),(longlong)(int)pfVar2[0xe]),
         iVar5 != 0)) {
        pfVar2[7] = 0.0;
        pfVar2[6] = 0.0;
        pfVar2[5] = 0.0;
        pfVar2[4] = 0.0;
        pfVar2[0x18] = (float)((int)pfVar2[0x18] + 1);
      }
    }
    else if ((1 < (int)pfVar2[0x18]) &&
            ((iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xd]),
             iVar5 != 0 ||
             (iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0xe]),
             iVar5 != 0)))) {
      help::Help_QueueMessage(STR_YOULL_NEED_THE_STRETCH_0x138E,0x5e);
    }
  }
  if ((((CHAR_ARRAY_00a0feec._144_2_ == 0) && (CHAR_ARRAY_00a1000c._592_2_ == 0)) &&
      (UnlockableItems.blaster != '\0')) &&
     ((iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[0x12]), iVar5 != 0
      && (0x13 < (int)currentAmmoArray.blaster)))) {
    help::Help_QueueMessage(STR_YOU_CAN_ACCURATELY_AIM_0x4E20,0x4a);
  }
  if ((((pfVar2[0x15] != -NAN) && (g_LevelFlags[Level][(int)pfVar2[0x16]] == -1)) &&
      (g_LevelFlags[Level][(int)pfVar2[8]] == -1)) &&
     ((worldUpdateTime < 5 ||
      ((g_standingOnMoby != 0 &&
       ((*(short *)(g_standingOnMoby + 0xa6) == 0x3e6 ||
        (*(short *)(g_standingOnMoby + 0xa6) == 0x33e)))))))) {
    FUN_0047ebac(MobyInstance + (int)pfVar2[0x15]);
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



//==== 00254024  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1348_00254024(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1348_00254024(void)

{
  DAT_0079b91c = 0x10000;
  return;
}



//==== 00254048  ns=mobyupdate_unsorted  size=0x5bc
// sig: undefined UpdateMoby_1348(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00110b70 mobyutil::MB_IsPntInCuboid
// strings: 00a1000c: 'None'

/* Moby 1348 */

void mobyupdate_unsorted::UpdateMoby_1348(MobyInstance *moby)

{
  int iVar1;
  u8 uVar2;
  int *piVar3;
  MobyInstance *pMVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  piVar3 = (int *)moby->pVar;
  if ((CHAR_ARRAY_00a1000c._336_2_ == 0) &&
     (iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[9]), iVar6 != 0)) {
    help::Help_QueueMessage(STR_JUMP_THEN_PRESS_AND_0x1773,0x2a);
  }
  if (CHAR_ARRAY_00a1000c._328_2_ == 0) {
    iVar6 = 0;
    piVar7 = piVar3;
    do {
      if ((*piVar7 != -1) && (MobyInstance[*piVar7].state != '\x01')) {
        help::Help_QueueMessage(STR_YOU_HAVE_JUST_ACTIVATED_0x1772,0x29);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 6);
  }
  if ((CHAR_ARRAY_00a1000c._368_2_ == 0) || (CHAR_ARRAY_00a1000c._376_2_ == 0)) {
    if ((MobyInstance + piVar3[10] == (MobyInstance *)0x0) ||
       ((uVar2 = MobyInstance[piVar3[10]].state, uVar2 == 0xfe || (uVar2 == 0xfd)))) {
      if (UnlockableItems.taunter == '\0') {
        help::Help_QueueMessage(STR_NEED_A_LITTLE_HELP_0x1778,0x2f);
        if (CHAR_ARRAY_00a1000c._368_2_ != -1) {
          CHAR_ARRAY_00a1000c._368_2_ = CHAR_ARRAY_00a1000c._368_2_ + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._370_2_ < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a1000c._370_2_ =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._372_4_ = CHAR_ARRAY_00a1000c._372_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
      else {
        help::Help_QueueMessage(STR_NEED_A_LITTLE_HELP_0x1777,0x2e);
        if (CHAR_ARRAY_00a1000c._376_2_ != -1) {
          CHAR_ARRAY_00a1000c._376_2_ = CHAR_ARRAY_00a1000c._376_2_ + 1;
        }
        iVar6 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._378_2_ < iVar6 / 600) {
          sVar5 = (short)(iVar6 >> 0x1f);
          CHAR_ARRAY_00a1000c._378_2_ =
               ((short)(iVar6 / 600) + sVar5) - ((short)((short)(iVar6 / 0x2580000) + sVar5) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a1000c._380_4_ = CHAR_ARRAY_00a1000c._380_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
      }
    }
  }
  iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[8]);
  if ((iVar6 != 0) &&
     (iVar6 = mobyutil::MB_CountActiveMobysByGroup(piVar3[6],0xffffffffffffffff), iVar6 == 0)) {
    iVar6 = 0;
    dVar10 = 0.5;
    dVar9 = 18.5;
    dVar8 = 60.0;
    piVar7 = piVar3;
    do {
      pMVar4 = MobyInstance + *piVar7;
      if (*piVar7 == -1) {
LAB_00254554:
        if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->state == 0xfe)) || (pMVar4->state == 0xfd))
        goto LAB_00254570;
      }
      else {
        if (pMVar4 != (MobyInstance *)0x0) {
          uVar2 = pMVar4->state;
          if ((uVar2 != 0xfd && uVar2 != 0xfe) && (uVar2 != '\x01')) {
            if (CHAR_ARRAY_00a1000c._320_2_ == 0) {
              if (CHAR_ARRAY_00a1000c._320_2_ != -1) {
                CHAR_ARRAY_00a1000c[0x140] = '\0';
                CHAR_ARRAY_00a1000c[0x141] = '\x01';
              }
              iVar1 = (int)(animationSpeed *
                           (float)((double)(longlong)update::g_GameFrameCount + dVar10));
              if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._322_2_ < iVar1 / 600) {
                sVar5 = (short)(iVar1 >> 0x1f);
                CHAR_ARRAY_00a1000c._322_2_ =
                     ((short)(iVar1 / 600) + sVar5) -
                     ((short)((short)(iVar1 / 0x2580000) + sVar5) >> 0xf);
              }
              CHAR_ARRAY_00a1000c._324_4_ =
                   CHAR_ARRAY_00a1000c._324_4_ | 1 << (Level & 0x3f) | 0x80000000;
            }
            else {
              iVar1 = (int)((double)animationSpeed *
                           (double)(float)((double)(longlong)update::g_GameFrameCount + dVar10));
              if (((int)((double)(longlong)((double)animationSpeed * dVar9) * dVar8) <
                   (int)(iVar1 + (uint)(ushort)CHAR_ARRAY_00a1000c._322_2_ * -600)) ||
                 ((uint)(ushort)CHAR_ARRAY_00a1000c._322_2_ * 600 == 0)) {
                help::Help_QueueMessage(STR_USE_THE_ENTER_COMMAND_0x1771,0x28);
              }
              else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._322_2_ < iVar1 / 600) {
                sVar5 = (short)(iVar1 >> 0x1f);
                CHAR_ARRAY_00a1000c._322_2_ =
                     ((short)(iVar1 / 600) + sVar5) -
                     ((short)((short)(iVar1 / 0x2580000) + sVar5) >> 0xf);
              }
            }
          }
          goto LAB_00254554;
        }
LAB_00254570:
        CHAR_ARRAY_00a1000c[0x140] = -1;
        CHAR_ARRAY_00a1000c[0x141] = -1;
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < 6);
  }
  if (MiscLevelFlags.field37_0x25 == 0) {
    if ((piVar3[0xb] != -1) && (MobyInstance[piVar3[0xb]].setByGroup != '\0')) {
      MiscLevelFlags.field37_0x25 = 1;
    }
  }
  return;
}



//==== 00254604  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1349_00254604(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1349_00254604(void)

{
  DAT_0079b98c = 0x10000;
  return;
}



//==== 00254630  ns=mobyupdate_unsorted  size=0x768
// sig: undefined UpdateMoby_1349(MobyInstance * moby)
// callers(0): 
// callees(3): 0007b310 help::Help_QueueMessage; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint
// strings: 00a1000c: 'None'

/* Moby 1349 */

void mobyupdate_unsorted::UpdateMoby_1349(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = piVar1[4];
  if (iVar3 < 1) {
    if (((-1 < iVar3) &&
        (iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[2]), iVar3 != 0)) &&
       (hero::g_heroStateType == 0xf)) {
      piVar1[4] = 1;
    }
  }
  else if (iVar3 < 2) {
    if (g_heroState == GRINDRAIL_DAMAGE) {
      piVar1[4] = 0;
    }
    else {
      iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[3]);
      if (iVar3 != 0) {
        mobyutil::MB_UnlockSkillPoint(0xb);
      }
    }
  }
  if ((UnlockableItems.grindboots == '\0') &&
     (iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar3 != 0)) {
    iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c._386_2_ * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c._386_2_ * 600 == 0)) {
      help::Help_QueueMessage(STR_THERE_IS_NOTHING_YOU_0x1F40,0x30);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._386_2_ < iVar3 / 600) {
      sVar2 = (short)(iVar3 >> 0x1f);
      CHAR_ARRAY_00a1000c._386_2_ =
           ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  if (((UnlockableItems.grindboots != '\0') &&
      (iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1), iVar3 != 0)) &&
     (MiscLevelFlags.field47_0x2f == 0)) {
    if (CHAR_ARRAY_00a1000c._392_2_ == 0) {
      CHAR_ARRAY_00a1000c[0x188] = '\0';
      CHAR_ARRAY_00a1000c[0x189] = '\x01';
      iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._394_2_ < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c._394_2_ =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
      CHAR_ARRAY_00a1000c._396_4_ = CHAR_ARRAY_00a1000c._396_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    else {
      iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c._394_2_ * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c._394_2_ * 600 == 0)) {
        help::Help_QueueMessage(STR_YOU_CAN_USE_YOUR_0x1F41,0x31);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._394_2_ < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c._394_2_ =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
    }
  }
  if (((UnlockableItems.magneboots == '\0') &&
      (iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]), iVar3 != 0)) &&
     (g_SeenPlanets.Orxon != '\0')) {
    iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
         (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c._402_2_ * -600)) ||
       ((uint)(ushort)CHAR_ARRAY_00a1000c._402_2_ * 600 == 0)) {
      help::Help_QueueMessage(STR_YOU_WILL_NEED_A_0x1F42,0x32);
    }
    else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._402_2_ < iVar3 / 600) {
      sVar2 = (short)(iVar3 >> 0x1f);
      CHAR_ARRAY_00a1000c._402_2_ =
           ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
    }
  }
  else if (((UnlockableItems.magneboots != '\0') &&
           (iVar3 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar1[1]), iVar3 != 0)) &&
          (g_SeenPlanets.Orxon != '\0')) {
    if (CHAR_ARRAY_00a1000c._896_2_ == 0) {
      CHAR_ARRAY_00a1000c[0x380] = '\0';
      CHAR_ARRAY_00a1000c[0x381] = '\x01';
      iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._898_2_ < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c._898_2_ =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
      CHAR_ARRAY_00a1000c._900_4_ = CHAR_ARRAY_00a1000c._900_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    else {
      iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if (((int)((float)(longlong)(animationSpeed * 18.5) * 60.0) <
           (int)(iVar3 + (uint)(ushort)CHAR_ARRAY_00a1000c._898_2_ * -600)) ||
         ((uint)(ushort)CHAR_ARRAY_00a1000c._898_2_ * 600 == 0)) {
        help::Help_QueueMessage(STR_YOU_CAN_USE_YOUR_0x1F45,0x70);
      }
      else if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._898_2_ < iVar3 / 600) {
        sVar2 = (short)(iVar3 >> 0x1f);
        CHAR_ARRAY_00a1000c._898_2_ =
             ((short)(iVar3 / 600) + sVar2) - ((short)((short)(iVar3 / 0x2580000) + sVar2) >> 0xf);
      }
    }
  }
  if (DAT_00969f78 * -1.0 < 0.1) {
    CHAR_ARRAY_00a1000c[0x380] = -1;
    CHAR_ARRAY_00a1000c[0x381] = -1;
  }
  if ((MiscLevelFlags.field47_0x2f == 0) && (hero::g_heroStateType == 0xf)) {
    MiscLevelFlags.field47_0x2f = 1;
  }
  return;
}



//==== 00254d98  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1349_00254d98(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1349_00254d98(void)

{
  DAT_0079b9fc = 0x10000;
  return;
}



//==== 00254db8  ns=mobyupdate_helpers  size=0x44
// sig: undefined M1349_00254db8(void)
// callers(0): 
// callees(1): 00109ec0 mobyutil::DeltAng

double mobyupdate_helpers::M1349_00254db8(double param_1,int param_2)

{
  float fVar1;
  
  fVar1 = mobyutil::DeltAng((float)param_1,mobyutil::g_FrameTime * 12.566371,
                            (float *)(param_2 + 0x40),0x254db0,0x720000,0);
  return (double)fVar1;
}



//==== 00254e00  ns=mobyupdate_helpers  size=0x90
// sig: undefined M1349_00254e00(void)
// callers(0): 
// callees(1): 00117390 mobyutil::MB_PathEvalSpline

void mobyupdate_helpers::M1349_00254e00(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(param_1 + 0x40);
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 4);
  mobyutil::MB_PathEvalSpline
            ((double)*(float *)(*(int *)(param_1 + 0x78) + 8),Splines[iVar1],iVar1 * 4,0,
             param_1 + 0x10,param_1 + 0x40,0);
  *(float *)(param_1 + 0x40) = (float)dVar2;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) - 0.4;
  return;
}



//==== 00254ea0  ns=mobyupdate_unsorted  size=0x3a0
// sig: undefined UpdateMoby_135(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 00109ec0 mobyutil::DeltAng; 00110b70 mobyutil::MB_IsPntInCuboid; 00117390 mobyutil::MB_PathEvalSpline

/* Moby 135 */

void mobyupdate_unsorted::UpdateMoby_135(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  void *pvVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 in_LR;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar12 = (longlong)(int)moby;
  piVar8 = (int *)moby->pVar;
  uVar15 = ZEXT48(piVar8);
  bVar1 = moby->state;
  pSVar10 = Splines[piVar8[1]];
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        if ((piVar8[1] == -1) || (pSVar10->cnt == 0)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (*piVar8 == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->state = '\x01';
        iVar13 = mobyutil::MB_randInt(2);
        fVar2 = pSVar10->points[0].x;
        fVar3 = pSVar10->points[1].x;
        fVar4 = pSVar10->points[0].y;
        fVar5 = pSVar10->points[1].y;
        fVar6 = pSVar10->points[0].z;
        fVar7 = pSVar10->points[1].z;
        if (iVar13 != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        fVar4 = fVar4 - fVar5;
        fVar6 = fVar6 - fVar7;
        fVar2 = fVar2 - fVar3;
        pvVar9 = moby->pVar;
        piVar8[3] = (int)((DAT_0079ba20 * mobyutil::g_FrameTime) /
                         SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar4 * fVar4));
        iVar13 = *(int *)((int)pvVar9 + 4);
        dVar16 = (double)(moby->rotation).x;
        mobyutil::MB_PathEvalSpline
                  ((double)*(float *)((int)pvVar9 + 8),Splines[iVar13],iVar13,0,lVar12 + 0x10,
                   lVar12 + 0x40,0);
        (moby->rotation).x = (float)dVar16;
        (moby->pos).z = (moby->pos).z - 0.4;
        (moby->rotation).x = DAT_0079ba24 * 0.017453292;
      }
      mobyutil::DeltAng(DAT_0079ba24 * 0.017453292,mobyutil::g_FrameTime * 12.566371,
                        &(moby->rotation).x,0x254e90,0x720000,0);
      iVar13 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar8);
      if (iVar13 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    auVar17 = loadVectorLeftIndexed(8,uVar15);
    auVar18 = loadVectorLeftIndexed(0xc,uVar15);
    auVar19 = loadVectorRightIndexed(0x18,uVar15);
    auVar21 = loadVectorRightIndexed(0x1c,uVar15);
    auVar20 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar10));
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar18 = vectorAddFloatingPoint(auVar17 | auVar19,auVar18 | auVar21);
    pvVar9 = moby->pVar;
    auVar17 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    vectorCompareGreaterThanFloatingPoint
              (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    uVar11 = storeVectorElementWordIndexed(auVar18,8,uVar15);
    *(undefined4 *)((uint)(piVar8 + 2) & 0xfffffffc) = uVar11;
    dVar16 = (double)(moby->rotation).x;
    if (bVar1 != 0) {
      moby->state = '\x03';
    }
    mobyutil::MB_PathEvalSpline
              ((double)*(float *)((int)pvVar9 + 8),Splines[*(int *)((int)pvVar9 + 4)],0xc,0,
               lVar12 + 0x10,lVar12 + 0x40,0);
    (moby->rotation).x = (float)dVar16;
    (moby->pos).z = (moby->pos).z - 0.4;
    mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).x,0x254e90,0x720000,0)
    ;
  }
  else if (bVar1 < 4) {
    fVar2 = (float)piVar8[2];
    piVar8[2] = (int)(fVar2 - (float)piVar8[3]);
    if (fVar2 - (float)piVar8[3] < 0.0) {
      moby->state = '\x01';
      piVar8[2] = 0;
    }
    dVar16 = (double)(moby->rotation).x;
    lVar14 = ((ulonglong)*(uint *)((int)moby->pVar + 4) & 0x3fffffff) << 2;
    mobyutil::MB_PathEvalSpline
              ((double)*(float *)((int)moby->pVar + 8),*(undefined4 *)((int)Splines + (int)lVar14),
               lVar14,0,lVar12 + 0x10,lVar12 + 0x40,0);
    (moby->rotation).x = (float)dVar16;
    (moby->pos).z = (moby->pos).z - 0.4;
    mobyutil::DeltAng(DAT_0079ba24 * 0.017453292,mobyutil::g_FrameTime * 12.566371,
                      &(moby->rotation).x,0x254e90,0x7a0000,0);
  }
  return;
}



//==== 00255240  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1350_00255240(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1350_00255240(void)

{
  DAT_0079ba74 = 0x10000;
  return;
}



//==== 00255258  ns=mobyupdate_unsorted  size=0x70
// sig: undefined UpdateMoby_1350(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00104214 mobyutil::MB_CountActiveMobysByGroup; 0011b728 mobyutil::MB_UnlockSkillPoint

/* Moby 1350 */

void mobyupdate_unsorted::UpdateMoby_1350(MobyInstance *moby)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  if (*moby->pVar == -1) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    iVar1 = *(int *)((int)moby->pVar + 4);
    if ((iVar1 != -1) &&
       (iVar1 = mobyutil::MB_CountActiveMobysByGroup(iVar1,0xffffffffffffffff), iVar1 == 0)) {
      mobyutil::MB_UnlockSkillPoint(0x13);
    }
  }
  return;
}



//==== 002552c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1351_002552c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1351_002552c8(void)

{
  DAT_0079bae4 = 0x10000;
  return;
}



//==== 002552e8  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1351(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1351 */

void mobyupdate_unsorted::UpdateMoby_1351(MobyInstance *moby)

{
  float fVar1;
  
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_standingOnMoby == moby)) && (g_framesNotGrounded == 0)) &&
          (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
    fVar1 = (moby->pos).z;
    moby->state = '\x02';
    (moby->pos).z = fVar1 - 0.3;
  }
  return;
}



//==== 00255368  ns=mobyupdate_helpers  size=0x28
// sig: undefined M1352_00255368(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1352_00255368(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x547) && (*(char *)(param_1 + 0x20) == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00255390  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1352_00255390(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1352_00255390(void)

{
  DAT_0079bb54 = 0x10000;
  return;
}



//==== 002553b8  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1352_002553b8(void)
// callers(1): 00255550 mobyupdate_unsorted::UpdateMoby_1352
// callees(2): 000fec94 mobyutil::MB_catmullRom; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1352_002553b8(int param_1)

{
  float fVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  float *pfVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  
  piVar3 = *(int **)(param_1 + 0x78);
  puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar3];
  if (puVar7 != (ushort *)0x0) {
    dVar8 = (double)fastfunc::FastIntToDouble(piVar3[1]);
    dVar8 = (double)mobyutil::MB_catmullRom
                              (0xbff0000000000000,0,0x3ff0000000000000,0,
                               -(double)(float)(dVar8 * (double)(float)piVar3[2] - 1.0));
    pfVar6 = (float *)&DAT_00fa3e08;
    do {
      pMVar5 = MobyInstance;
      fVar1 = *pfVar6;
      dVar9 = (double)(float)((double)fVar1 - 20.0);
      uVar4 = *puVar7 & 0x7fff;
      pfVar6 = pfVar6 + 1;
      MobyInstance[uVar4].modeBits =
           MobyInstance[uVar4].modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      pMVar5[uVar4].pos.z = (float)((double)(float)((double)fVar1 - dVar9) * dVar8 + dVar9);
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 002554b0  ns=mobyupdate_helpers  size=0x90
// sig: undefined M1352_002554b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1352_002554b0(int param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  f32 *pfVar6;
  
  puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[**(int **)(param_1 + 0x78)];
  if (puVar5 != (ushort *)0x0) {
    pfVar6 = (f32 *)&DAT_00fa3e08;
    do {
      pMVar4 = MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      *pfVar6 = MobyInstance[uVar3].pos.z;
      fVar1 = pMVar4[uVar3].pos.z;
      pMVar4[uVar3].modeBits = pMVar4[uVar3].modeBits | (UNK_40|DISABLED);
      pMVar4[uVar3].pos.z = fVar1 - 20.0;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      pfVar6 = pfVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 00255550  ns=mobyupdate_unsorted  size=0x300
// sig: undefined UpdateMoby_1352(MobyInstance * moby)
// callers(0): 
// callees(5): 0003fba8 camera::camera19::Cam19_Enable; 000efb38 mobyfunc::DeleteMoby; 002553b8 mobyupdate_helpers::M1352_002553b8; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble

/* Moby 1352 */

void mobyupdate_unsorted::UpdateMoby_1352(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  f32 *pfVar10;
  ushort *puVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 == 0) {
    if (piVar4[3] < 0) {
      mobyfunc::DeleteMoby(moby);
    }
    else if (*piVar4 < 0) {
      mobyfunc::DeleteMoby(moby);
    }
    else if (piVar4[4] < 0) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      uVar3 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar3] == '\0') &&
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar3 >> 5) << 2))
          & 1 << (uVar3 & 0x1f)) == 0)) {
        moby->state = '\x01';
        puVar11 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar4];
        if (puVar11 != (ushort *)0x0) {
          pfVar10 = (f32 *)&DAT_00fa3e08;
          do {
            pMVar9 = MobyInstance;
            uVar5 = *puVar11 & 0x7fff;
            *pfVar10 = MobyInstance[uVar5].pos.z;
            fVar2 = pMVar9[uVar5].pos.z;
            pMVar9[uVar5].modeBits = pMVar9[uVar5].modeBits | (UNK_40|DISABLED);
            pMVar9[uVar5].pos.z = fVar2 - 20.0;
            uVar3 = *puVar11;
            puVar11 = puVar11 + 1;
            pfVar10 = pfVar10 + 1;
          } while (-1 < (short)uVar3);
        }
      }
      else {
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 < 2) {
    if (MobyInstance[piVar4[3]].state == '\x02') {
      uVar3 = moby->uid;
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      iVar8 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      iVar7 = (int)((longlong)((int)(short)uVar3 >> 5) << 2);
      uVar5 = *(uint *)(&DAT_00a54dd0 + iVar7);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar3 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar7) = uVar5 | 1 << (uVar3 & 0x1f);
      moby->state = '\x02';
      auVar13 = loadVectorLeftIndexed(4,0x255540);
      auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                           auVar14);
      fVar2 = animationSpeed * 120.5;
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,4,
                         ZEXT48(piVar4));
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar6;
      dVar12 = (double)fastfunc::FastIntToDouble((int)fVar2);
      piVar4[2] = (int)(float)(1.0 / dVar12);
      camera::camera19::Cam19_Enable(piVar4[4]);
    }
  }
  else if (bVar1 < 3) {
    fastfunc::FastDecTimerS32(ZEXT48(piVar4) + 4);
    mobyupdate_helpers::M1352_002553b8(moby);
    if (piVar4[1] == 0) {
      moby->state = '\x03';
    }
  }
  return;
}



//==== 00255850  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1353_00255850(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1353_00255850(void)

{
  DAT_0079bbc4 = 0x10000;
  return;
}



//==== 00255868  ns=mobyupdate_unsorted  size=0x69c
// sig: undefined UpdateMoby_1353_GemlikManager(MobyInstance * moby)
// callers(0): 
// callees(10): 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 00112c20 mobyutil::MB_UnlockLevel; 00112dc0 mobyutil::MB_UnlockTrophy; 0011ccc8 music::music_SetTransition; 0015e2ec space::SetupSpaceShipVars; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie

/* Moby 1353 */

void mobyupdate_unsorted::UpdateMoby_1353_GemlikManager(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  MobyInstance *pMVar4;
  Cuboid *pCVar5;
  int iVar6;
  
  bVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      moby->state = '\a';
    }
    else if (bVar1 == 5) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar6 = piVar2[5];
        if (iVar6 != -1) {
          MobyInstance[iVar6].modeBits =
               MobyInstance[iVar6].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        pCVar5 = Cuboids;
        pMVar4 = MobyInstance;
        iVar6 = piVar2[2];
        if ((iVar6 != -1) && (iVar3 = piVar2[4], iVar3 != -1)) {
          MobyInstance[iVar3].pos.x = Cuboids[iVar6].pos.x;
          pMVar4[iVar3].pos.y = pCVar5[iVar6].pos.y;
          pMVar4[iVar3].pos.z = pCVar5[iVar6].pos.z;
          pMVar4[iVar3].pos.w = pCVar5[iVar6].pos.w;
          hero::Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0,1);
          hero::g_heroInvisible = 1;
          *(undefined4 *)((int)pMVar4[iVar3].pVar + 0x7c) = 0x3f7d70a4;
          boot::SceneScreenFade = 0.99;
          pMVar4[iVar3].state = '\x02';
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      if (MiscLevelFlags.GemlikRelated2 == 0) {
        if (*piVar2 == -1) {
          moby->state = '\a';
        }
        else {
          iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar2);
          if (iVar6 != 0) {
            MiscLevelFlags.GemlikRelated2 = 1;
            iVar6 = piVar2[5];
            if (iVar6 != -1) {
              MobyInstance[iVar6].modeBits = MobyInstance[iVar6].modeBits | (UNK_40|DISABLED);
            }
            moby->state = '\x05';
            update::mode_sceneInit(1);
          }
        }
      }
      else {
        moby->state = '\x06';
      }
      if ((moby->state != '\x04') && (piVar2[3] != -1)) {
        mobyfunc::DeleteMoby(MobyInstance + piVar2[3]);
      }
    }
    else if (bVar1 == 3) {
      moby->state = '\x04';
    }
    else if (bVar1 == 2) {
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 1) {
      if (MiscLevelFlags.GemlikRelated1 == 0) {
        MiscLevelFlags.GemlikRelated1 = 1;
        moby->state = '\x02';
        update::mode_sceneInit(0);
      }
      else {
        moby->state = '\x03';
      }
    }
    else if ((bVar1 == 0) && (g_gameMode == GAME_MODE_NORMAL)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0xe) {
    moby->modeBits = moby->modeBits | NO_UPDATE;
  }
  else if (bVar1 == 0xd) {
    if (piVar2[4] == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else if ((&DAT_00a202c0)[(byte)MobyInstance[piVar2[4]].levelFlagIdx] == -1) {
      if (piVar2[8] != -1) {
        mobyfunc::DeleteMoby(MobyInstance + piVar2[8]);
      }
      moby->state = '\x0e';
    }
  }
  else if (bVar1 == 0xc) {
    moby->state = '\r';
  }
  else if (bVar1 == 0xb) {
    if (piVar2[4] == -1) {
      moby->state = '\f';
    }
    else {
      pMVar4 = MobyInstance + piVar2[4];
      if ((((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != FIGHTER_JET_0045)) ||
          (pMVar4->state == 0xfe)) || (pMVar4->state == 0xfd)) {
        memcard::memcard_Save(0,-1);
        moby->state = '\f';
      }
    }
  }
  else if (bVar1 == 10) {
    if (g_gameMode != GAME_MODE_SCENE) {
      iVar6 = piVar2[4];
      if (iVar6 != -1) {
        MobyInstance[iVar6].modeBits =
             MobyInstance[iVar6].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|DISABLED);
      }
      mobyutil::MB_UnlockLevel(Oltanis);
      iVar6 = piVar2[8];
      if (iVar6 != -1) {
        MobyInstance[iVar6].modeBits =
             MobyInstance[iVar6].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        space::SetupSpaceShipVars();
        g_heroSpawnPosition.z = 316.72;
        g_heroSpawnRot.z = 2.77;
        g_heroSpawnPosition.x = 464.66;
        g_heroSpawnPosition.y = 580.68;
      }
      draw::LetterBoxOn = 0;
      moby->state = '\v';
    }
  }
  else if (bVar1 == 9) {
    if (g_gameMode != GAME_MODE_SCENE) {
      update::mode_sceneInit(3);
      moby->state = '\n';
    }
  }
  else if (bVar1 == 8) {
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\t';
      update::PlayInfobotMovie(0xe);
    }
  }
  else if (bVar1 == 7) {
    if (MiscLevelFlags.GemlikRelated3 == 0) {
      if (piVar2[5] == -1) {
        moby->state = '\r';
      }
      else {
        pMVar4 = MobyInstance + piVar2[5];
        if (((pMVar4 == (MobyInstance *)0x0) || (pMVar4->oClass != QWARKS_STARFIGHTER_PART_0184)) ||
           ((pMVar4->state == 0xfe || (pMVar4->state == 0xfd)))) {
          iVar6 = piVar2[4];
          if (iVar6 != -1) {
            MobyInstance[iVar6].modeBits = MobyInstance[iVar6].modeBits | NO_UPDATE;
          }
          hero::Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0x72,1);
          MiscLevelFlags.GemlikRelated3 = 1;
          mobyutil::MB_UnlockTrophy(ALL_QWARKD_UP);
          iVar6 = piVar2[8];
          if (iVar6 != -1) {
            MobyInstance[iVar6].modeBits = MobyInstance[iVar6].modeBits | (UNK_40|DISABLED);
          }
          music::music_SetTransition(0,5);
          moby->state = '\b';
          update::mode_sceneInit(2);
        }
      }
    }
    else {
      moby->state = '\f';
    }
  }
  return;
}



//==== 00255f04  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1354_00255f04(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1354_00255f04(void)

{
  DAT_0079bc34 = 0x10000;
  return;
}



//==== 00255f30  ns=mobyupdate_helpers  size=0x338
// sig: undefined M1354_00255f30(void)
// callers(1): 002563b0 mobyupdate_unsorted::UpdateMoby_1354
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1354_00255f30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int iVar7;
  undefined8 uVar6;
  undefined1 uVar8;
  undefined8 in_r9;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_90 [56];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar10 = (ulonglong)uVar1;
  *(float *)(uVar1 + 8) = *(float *)(uVar1 + 8) + 0.1;
  dVar13 = 0.0;
  iVar9 = 0;
  lVar11 = uVar10 + 0x40;
  *(float *)(uVar1 + 8) = *(float *)(uVar1 + 8) - 0.1;
  dVar14 = 255.0;
  auVar19 = loadVectorLeftIndexed(0x10,0x255f18);
  dVar15 = 255.5;
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  dVar16 = 0.5;
  do {
    iVar4 = (int)uVar10;
    fVar5 = *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x30);
    dVar12 = (double)fVar5;
    *(float *)(iVar4 + 0x20) = fVar5;
    if (dVar12 < dVar14) {
      if (dVar12 <= dVar13) {
        *(float *)(iVar4 + 0x20) = (float)(dVar12 + dVar14);
      }
    }
    else {
      *(float *)(iVar4 + 0x20) = (float)(dVar12 - dVar14);
    }
    iVar7 = fastfunc::FastDecTimerS32(uVar10 + 0x40);
    iVar2 = *(int *)(iVar4 + 0x40);
    dVar12 = (double)animationSpeed;
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar7 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
      iVar2 = (int)(dVar12 * dVar15);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0,lVar11);
      *(undefined4 *)((uint)lVar11 & 0xfffffffc) = uVar3;
    }
    dVar12 = (double)fastfunc::FastIntToDouble((int)(dVar12 * dVar15) - iVar2);
    uVar6 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar16 - (double)(float)(dVar12 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar15)))),0x4040ffff,0x1040ffff)
    ;
    uVar8 = fastfunc::FastDoubleToInt((double)*(float *)(iVar4 + 0x20));
    partupd::SpawnPart_59((double)*(float *)(iVar4 + 0x50),local_90,uVar6,uVar8,0x35,1,2,in_r9,0);
    iVar9 = iVar9 + 1;
    lVar11 = lVar11 + 4;
    uVar10 = uVar10 + 4;
  } while (iVar9 < 4);
  return;
}



//==== 00256278  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1354_00256278(void)
// callers(1): 002563b0 mobyupdate_unsorted::UpdateMoby_1354
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1354_00256278(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = mobyutil::MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)((int)uVar5 + 0x20) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x30) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x34) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x38) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x256268);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x40;
  auVar8 = loadVectorLeftIndexed(4,0x256268);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x256268);
  auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7._0_4_ = iVar4 + auVar9._0_4_;
    auVar7._8_8_ = in_vs39._8_8_;
    auVar7._4_4_ = iVar10 + auVar9._4_4_;
    auVar16._0_8_ = auVar7._0_8_;
    auVar16._8_4_ = iVar11 + auVar9._8_4_;
    auVar16._12_4_ = iVar12 + auVar9._12_4_;
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8._0_4_;
    iVar10 = iVar10 + auVar8._4_4_;
    iVar11 = iVar11 + auVar8._8_4_;
    iVar12 = iVar12 + auVar8._12_4_;
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x50) = 0x40000000;
  *(undefined4 *)(uVar1 + 0x54) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x58) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x5c) = 0x40000000;
  return;
}



//==== 002563b0  ns=mobyupdate_unsorted  size=0x37c
// sig: undefined UpdateMoby_1354(MobyInstance * moby)
// callers(0): 
// callees(12): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 00167e60 update::mode_sceneInit; 00255f30 mobyupdate_helpers::M1354_00255f30; 00256278 mobyupdate_helpers::M1354_00256278; 00502578 fastfunc::FastWrapRot

/* Moby 1354 */

void mobyupdate_unsorted::UpdateMoby_1354(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  longlong lVar9;
  double dVar10;
  
  lVar9 = (longlong)(int)moby;
  bVar1 = moby->state;
  pfVar7 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        mobyupdate_helpers::M1354_00256278(lVar9);
        mobyutil::GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
        (moby->rotation).x = 0.0;
        (moby->rotation).y = -1.5707964;
        (moby->pos).z = CollOutput.ip.z + DAT_0079bc58;
        *pfVar7 = (moby->pos).x;
        pfVar7[1] = (moby->pos).y;
        pfVar7[2] = (moby->pos).z;
        pfVar7[3] = (moby->pos).w;
        moby->state = '\x01';
      }
    }
    else {
      dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).z,DAT_0079bc5c);
      (moby->rotation).z = (float)dVar10;
      fVar2 = *pfVar7;
      (moby->pos).x = fVar2;
      fVar3 = pfVar7[1];
      (moby->pos).y = fVar3;
      fVar4 = pfVar7[2];
      fVar5 = (moby->transform).v1.x;
      (moby->pos).z = fVar4;
      fVar6 = (moby->transform).v1.y;
      (moby->pos).w = pfVar7[3];
      fVar6 = fVar6 * DAT_0079bc60;
      fVar8 = (moby->transform).v1.z * DAT_0079bc60;
      (moby->pos).x = fVar5 * DAT_0079bc60 + fVar2;
      (moby->pos).y = fVar6 + fVar3;
      (moby->pos).z = fVar8 + fVar4;
      mobyupdate_helpers::M1354_00255f30(lVar9);
      if (((worldUpdateTime == (worldUpdateTime / 10) * 10) &&
          (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
          SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 1.0)) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
        pfVar7[6] = (float)((uint)LZCOUNT((uint)UnlockableItems.morphORay) >> 5 ^ 1);
        mobyutil::MB_UnlockItem(0x15,1);
        update::mode_sceneInit(6);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode == GAME_MODE_SCENE) {
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
        mobyfunc::SetLevelFlag();
        memcard::memcard_Save(0,-1);
      }
      if (pfVar7[6] == 0.0) {
        mobyutil::MB_ToastMessage(0x36b2,0xffffffffffffffff);
      }
      else {
        mobyutil::MB_ToastMessage(0x53e0,0xffffffffffffffff);
      }
      help::Help_QueueMessage(STR_CONGRATULATIONS_YOU_JUST_FOUND_0x36B0,0x7a);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if ((bVar1 < 4) &&
          (mobyutil::Delt(0.0,moby->pClass->gScale * 0.02,&moby->scale), moby->scale == 0.0)) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0025672c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1355_0025672c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1355_0025672c(void)

{
  DAT_0079bcb0 = 0x10000;
  return;
}



//==== 00256748  ns=mobyupdate_helpers  size=0x134
// sig: undefined M1355_00256748(void)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1355_00256748(MobyInstance *param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  byte in_cr6;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar5 = worldUpdateTime;
  pvVar2 = param_1->pVar;
  uVar7 = ZEXT48(pvVar2);
  uVar6 = *(ushort *)((int)pvVar2 + 0x166);
  if ((worldUpdateTime & 3) == 0) {
    auVar8 = ZEXT416(0xfffffff0);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    uVar6 = uVar6 + 1 & 0xf;
    auVar9 = loadVectorLeftIndexed(0x164,uVar7);
    auVar10 = loadVectorRightIndexed(0x174,uVar7);
    *(ushort *)((int)pvVar2 + 0x166) = uVar6;
    auVar11 = vectorShiftRightAlgebraicWord(auVar9 | auVar10,auVar8);
    auVar12 = loadVectorLeftIndexed(in_LR,0x256740);
    auVar10 = vectorShiftRightWord(auVar9 | auVar10,auVar8);
    auVar8 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = vectorConvertFromSignedFixedPointWord(auVar11,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
               auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar8._0_4_ = auVar10._0_4_ + 1;
      auVar8._8_8_ = auVar10._8_8_;
      auVar8._4_4_ = auVar10._4_4_ + 1;
      auVar9._0_8_ = auVar8._0_8_;
      auVar9._12_4_ = auVar10._12_4_;
      auVar9._8_4_ = auVar10._8_4_ + 1;
      auVar10._0_12_ = auVar9._0_12_;
      auVar10._12_4_ = auVar9._12_4_ + 1;
      auVar8 = vectorSplatHalfWord(auVar10,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x164,uVar7);
      *(undefined2 *)((int)pvVar2 + 0x164) = uVar3;
    }
  }
  iVar4 = (int)((longlong)(short)uVar6 << 4);
  *(f32 *)((int)pvVar2 + iVar4 + 0x10) = (param_1->pos).x;
  *(f32 *)((int)pvVar2 + iVar4 + 0x14) = (param_1->pos).y;
  *(f32 *)((int)pvVar2 + iVar4 + 0x18) = (param_1->pos).z;
  *(f32 *)((int)pvVar2 + iVar4 + 0x1c) = (param_1->pos).w;
  bVar1 = DAT_00fa3f08 != uVar5;
  *(undefined4 *)((int)pvVar2 + (int)((longlong)*(short *)((int)pvVar2 + 0x166) << 4) + 0x1c) =
       0x3f800000;
  if (bVar1) {
    DAT_00fa3f08 = uVar5;
    RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,param_1);
    RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,param_1);
  }
  return;
}



//==== 002568a0  ns=mobyupdate_helpers  size=0x18c
// sig: undefined M1355_002568a0(void)
// callers(1): 00256f38 mobyupdate_unsorted::UpdateMoby_1355
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot

void mobyupdate_helpers::M1355_002568a0(int param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *(uint *)(param_1 + 0x78);
  dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_0079bce8,DAT_0079bcec);
  dVar8 = (double)mobyutil::MB_randRot();
  fVar1 = (float)(dVar8 + 1.570796251296997);
  dVar9 = (double)(float)(3.141592502593994 - dVar8);
  if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
    dVar9 = dVar8;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar11 = (double)(float)(-3.141592502593994 - dVar8);
  if ((double)(float)(-3.141592502593994 - dVar8) - dVar9 < 0.0) {
    dVar11 = dVar9;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar8 = (double)(float)(dVar11 * dVar11);
  fVar6 = fVar5 * fVar5;
  dVar10 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
  fVar1 = fVar6 * fVar6 * fVar5;
  dVar9 = (double)(float)(dVar8 * dVar10);
  fVar4 = fVar6 * fVar1;
  dVar11 = (double)((float)(dVar8 * dVar9) * 2.601887e-06 +
                   (float)(dVar9 * -0.0001980741071747616 +
                          (double)(float)(dVar10 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar8 * dVar11) *
                                                         -0.16666656732559204 + dVar11))));
  dVar8 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                  fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5
                  );
  dVar9 = (double)mobyutil::MB_randRangeFloat(DAT_0079bce0,DAT_0079bce4);
  *param_2 = (float)(dVar8 * dVar7 + (double)*(float *)(uVar2 + 0x120));
  param_2[1] = (float)(dVar11 * dVar7 + (double)*(float *)(uVar2 + 0x124));
  fVar1 = (float)(dVar9 + (double)*(float *)(uVar2 + 0x128));
  param_2[2] = fVar1;
  auVar12 = ZEXT416(0xffffffff);
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  param_2[3] = fVar1;
  auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
  auVar12 = loadVectorLeftIndexed(0x1c,0x25687c);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar12 = vectorMultiplyAddFloatingPoint
                      (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,auVar13
                      );
  auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x160,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x160 & 0xfffffffc) = uVar3;
  return;
}



//==== 00256a60  ns=mobyupdate_helpers  size=0x478
// sig: undefined M1355_00256a60(void)
// callers(1): 00256f38 mobyupdate_unsorted::UpdateMoby_1355
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

undefined8 mobyupdate_helpers::M1355_00256a60(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  undefined8 uVar14;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xf0;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar12;
  puVar7[0x20] = in_LR;
  puVar7[0x19] = in_f27;
  puVar7[0x1a] = in_f28;
  puVar7[0x1b] = in_f29;
  puVar7[0x1c] = in_f30;
  puVar7[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  dVar25 = (double)fVar1;
  fVar2 = param_2[1] - *(float *)(param_1 + 0x14);
  dVar26 = (double)fVar2;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  *(float *)(puVar7 + 0xe) = fVar1;
  puVar7[0x16] = unaff_r29;
  *(float *)((int)puVar7 + 0x74) = fVar2;
  iVar6 = *(int *)(param_1 + 0x78);
  fVar1 = param_2[2];
  *(float *)(puVar7 + 0xf) = (float)(ABS(dVar25) - ABS(dVar26));
  dVar28 = 0.0;
  dVar27 = (double)(fVar1 - *(float *)(param_1 + 0x18));
  uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar1 = *(float *)(iVar6 + 0x148);
  dVar22 = ABS((double)*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    dVar22 = ABS(dVar26);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar23 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    dVar23 = ABS(dVar25);
  }
  puVar7[0x15] = unaff_r28;
  dVar24 = dVar28;
  pfVar17 = param_2;
  if (0.0 < dVar22) {
    lVar20 = uVar12 - 0xe0;
    lVar19 = uVar12 - 0x74;
    lVar16 = uVar12 - 100;
    lVar21 = 2;
    fVar3 = (float)(dVar23 - dVar22) / (float)(dVar23 + dVar22);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    *(float *)(puVar7 + 0x10) = fVar3;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)((int)puVar7 + 0x7c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar3 * fVar3;
      iVar15 = (int)lVar19;
      lVar20 = lVar20 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar20 = uVar12 - 0x74;
    pfVar17 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar20;
    lVar19 = lVar13;
    do {
      fVar3 = *pfVar17;
      fVar4 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar3;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    dVar22 = dVar28;
    do {
      iVar15 = (int)lVar13;
      iVar8 = (int)lVar20;
      lVar13 = lVar13 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0x7c)) + *(float *)(iVar8 + 4)
                        + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar24 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
    pfVar17 = (float *)lVar20;
  }
  dVar22 = (double)fastfunc::FastWrapRot((float)dVar24,fVar1);
  mobyutil::OrganicDeltAng
            ((float)dVar22,*(float *)(iVar6 + 0x150),*(float *)(iVar6 + 0x150),
             *(float *)(iVar6 + 0x154),(float *)(param_1 + 0x48),(int)pfVar17,
             (float *)(iVar6 + 0x140));
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar4 = fVar5;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar1 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar5 = fVar1 * fVar1;
  fVar3 = fVar5 * fVar5 * fVar1;
  fVar10 = fVar2 * fVar2 * fVar4;
  fVar9 = fVar5 * fVar3;
  fVar11 = fVar2 * fVar10;
  *(float *)(param_1 + 0x10) =
       DAT_0079bcd8 * mobyutil::g_FrameTime *
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar1 * -0.16666657 + fVar1) +
       *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) =
       DAT_0079bcd8 * mobyutil::g_FrameTime *
       (fVar2 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) +
       *(float *)(param_1 + 0x14);
  mobyutil::OrganicDelt
            (param_2[2],*(float *)(iVar6 + 0x158),*(float *)(iVar6 + 0x158),
             *(float *)(iVar6 + 0x15c),(float *)(param_1 + 0x18),0x7a0000,(float *)(iVar6 + 0x144));
  *(float *)(param_1 + 0x44) = DAT_0079bcf0 * *(float *)(iVar6 + 0x144);
  if ((SQRT((float)(dVar27 * dVar27 +
                   (double)(float)(dVar25 * dVar25 + (double)(float)(dVar26 * dVar26)))) < 2.0) ||
     (iVar15 = fastfunc::FastDecTimerS32(iVar6 + 0x160), iVar15 != 0)) {
    uVar14 = 1;
  }
  else {
    iVar15 = *(int *)(iVar6 + 0x16c);
    if (iVar15 != 0) {
      dVar27 = (double)(*(float *)(param_1 + 0x14) - *(float *)(iVar15 + 0x14));
      dVar26 = (double)(*(float *)(param_1 + 0x10) - *(float *)(iVar15 + 0x10));
      dVar22 = (double)*(float *)(param_1 + 0x1c);
      dVar25 = (double)SQRT((float)(dVar26 * dVar26 + (double)(float)(dVar27 * dVar27)));
      if (dVar25 < 4.5) {
        dVar23 = (double)mobyutil::MB_randRangeFloat(15.0,20.0);
        fVar1 = *(float *)(*(int *)(iVar6 + 0x16c) + 0x10);
        fVar2 = *(float *)(*(int *)(iVar6 + 0x16c) + 0x14);
        param_2[3] = (float)dVar22;
        dVar27 = (double)(float)(dVar27 * (double)(float)(dVar23 / dVar25));
        dVar26 = (double)(float)(dVar26 * (double)(float)(dVar23 / dVar25));
        dVar22 = dVar28;
        if (dVar28 - dVar25 < 0.0) {
          dVar22 = dVar27;
        }
        dVar23 = dVar28;
        if (dVar28 - dVar25 < 0.0) {
          dVar23 = dVar26;
        }
        if (dVar25 - dVar28 < 0.0) {
          dVar22 = dVar27;
        }
        if (dVar25 - dVar28 < 0.0) {
          dVar23 = dVar26;
        }
        param_2[1] = (float)(dVar22 + (double)fVar2);
        *param_2 = (float)(dVar23 + (double)fVar1);
      }
    }
    uVar14 = 0;
  }
  return uVar14;
}



//==== 00256f38  ns=mobyupdate_unsorted  size=0xcb4
// sig: undefined UpdateMoby_1355(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00109ec0 mobyutil::DeltAng; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 002568a0 mobyupdate_helpers::M1355_002568a0; 00256a60 mobyupdate_helpers::M1355_00256a60; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 1355 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1355(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar23;
  int iVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar25;
  ushort uVar26;
  undefined *in_r5;
  ulonglong uVar27;
  ulonglong uVar28;
  float *pfVar30;
  longlong lVar29;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  byte in_cr6;
  byte bVar32;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar45 [16];
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar22 = uVar20 - 0x170;
  puVar17 = (ulonglong *)lVar22;
  *puVar17 = uVar20;
  puVar17[0x30] = in_LR;
  puVar17[0x29] = in_f27;
  puVar17[0x2a] = in_f28;
  puVar17[0x2b] = in_f29;
  puVar17[0x2c] = in_f30;
  puVar17[0x2d] = in_f31;
  puVar17[0x28] = unaff_r31;
  puVar17[0x27] = unaff_r30;
  bVar3 = moby->state;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  puVar17[0x26] = unaff_r29;
  if (bVar3 != 4) {
    in_r5 = &DAT_00720000;
    dVar34 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).x,
                                DAT_0079bcd4 * 0.017453292 * mobyutil::g_FrameTime);
    (moby->rotation).x = (float)dVar34;
    bVar3 = moby->state;
  }
  fVar51 = DAT_0071f418;
  if ((g_gameMode == GAME_MODE_SCENE) && (update::g_SceneId == 3)) {
    puVar23 = (undefined4 *)mobyfunc::DeleteMoby(moby);
  }
  else if (bVar3 == 4) {
    fVar51 = (moby->rotation).y;
    if (fVar51 - 0.87266463 < 0.0) {
      fVar51 = 0.87266463;
    }
    fVar51 = mobyutil::DeltAng(fVar51,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,0x720000
                               ,(int)in_r5,0);
    iVar24 = fastfunc::FastDecTimerS32((double)fVar51,uVar31 + 0x160);
    puVar19 = worldUpdateTime;
    if (iVar24 == 0) {
      pvVar11 = moby->pVar;
      uVar20 = ZEXT48(pvVar11);
      uVar26 = *(ushort *)((int)pvVar11 + 0x166);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        uVar26 = uVar26 + 1 & 0xf;
        *(ushort *)((int)pvVar11 + 0x166) = uVar26;
        auVar48 = loadVectorLeftIndexed(0x164,uVar20);
        auVar49 = loadVectorRightIndexed(0x174,uVar20);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar50._0_4_ = auVar49._0_4_ + 1;
          auVar50._8_8_ = auVar49._8_8_;
          auVar50._4_4_ = auVar49._4_4_ + 1;
          auVar48._0_8_ = auVar50._0_8_;
          auVar48._12_4_ = auVar49._12_4_;
          auVar48._8_4_ = auVar49._8_4_ + 1;
          auVar42._0_12_ = auVar48._0_12_;
          auVar42._12_4_ = auVar48._12_4_ + 1;
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar20);
          *(undefined2 *)((int)pvVar11 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)(short)uVar26 << 4);
      *(f32 *)((int)pvVar11 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar11 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar11 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar11 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar11 + (int)((longlong)*(short *)((int)pvVar11 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      puVar23 = DAT_00fa3f08;
      if (DAT_00fa3f08 != puVar19) {
        DAT_00fa3f08 = puVar19;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        puVar23 = (undefined4 *)RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
    }
    else {
      moby->state = '\x02';
      *(undefined2 *)((int)pvVar11 + 0x164) = 0;
      uVar16 = *(undefined4 *)((int)pvVar11 + 0x16c);
      puVar17[0x12] = 2;
      puVar17[0x14] = 0;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0xffffffffffffffff;
      puVar17[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff8000000000000,0x3fe0000000000000,
                 0x4022000000000000,0x3ff0000000000000,0x4014000000000000,uVar16,&DAT_00a15d30,
                 lVar21 + 0x10,2,0,10,3,0x10);
      auVar42 = ZEXT416(0);
      (moby->pos).x = GameCamera.posX;
      (moby->pos).y = GameCamera.posY;
      fVar51 = GameCamera.posZ;
      (moby->pos).w = (f32)GameCamera.field8_0x14c;
      (moby->pos).z = fVar51 + 20.0;
      auVar48 = loadVectorLeftIndexed(0x18,0x256ed8);
      auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                 auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60);
      puVar23 = (undefined4 *)0x18;
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar23 = (undefined4 *)0x0;
        do {
          puVar23 = (undefined4 *)((int)puVar23 + 1);
          fVar4 = (moby->pos).x;
          puVar17[0x23] = (longlong)(int)puVar23;
          iVar24 = (int)uVar31;
          *(f32 *)(iVar24 + 0x10) = fVar4;
          *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
          uVar31 = uVar31 + 0x10;
        } while ((float)(longlong)puVar17[0x23] < 4.0);
      }
    }
  }
  else {
    bVar32 = (bVar3 == 2) << 1;
    if (bVar3 == 3) {
      fVar51 = *(float *)((int)pvVar11 + 0x124) - (moby->pos).y;
      fVar1 = *(float *)((int)pvVar11 + 0x120) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar11 + 0x128) - (moby->pos).z;
      fVar5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar51 * fVar51);
      dVar41 = 0.0;
      dVar40 = 1.0;
      fVar6 = (DAT_0079bcdc * mobyutil::g_FrameTime) / fVar5;
      dVar34 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar34 = (double)(fVar51 * fVar6);
      }
      dVar35 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar35 = (double)(fVar1 * fVar6);
      }
      dVar37 = dVar41;
      if (0.0 - fVar5 < 0.0) {
        dVar37 = (double)(fVar2 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar34 = (double)(fVar51 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar35 = (double)(fVar1 * fVar6);
      }
      if (fVar5 - 0.0 < 0.0) {
        dVar37 = (double)(fVar2 * fVar6);
      }
      mobyutil::Delt(1.0,mobyutil::g_FrameTime,(float *)((int)pvVar11 + 0x14c));
      dVar38 = (double)*(float *)((int)pvVar11 + 0x14c);
      fVar51 = (float)(dVar38 * (double)(float)(dVar35 - (double)*(float *)((int)pvVar11 + 0x130)) +
                      (double)*(float *)((int)pvVar11 + 0x130));
      dVar35 = (double)fVar51;
      fVar1 = (float)(dVar38 * (double)(float)(dVar34 - (double)*(float *)((int)pvVar11 + 0x134)) +
                     (double)*(float *)((int)pvVar11 + 0x134));
      dVar36 = (double)fVar1;
      fVar2 = (float)(dVar38 * (double)(float)(dVar37 - (double)*(float *)((int)pvVar11 + 0x138)) +
                     (double)*(float *)((int)pvVar11 + 0x138));
      dVar37 = (double)fVar2;
      *(float *)((int)puVar17 + 0xcc) = fVar51;
      *(float *)(puVar17 + 0x1a) = fVar1;
      fVar1 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar51 = (float)((double)(moby->pos).z + dVar37);
      *(float *)((int)puVar17 + 0xd4) = (float)(ABS(dVar35) - ABS(dVar36));
      uVar13 = *(uint *)((int)puVar17 + 0xcc);
      fVar6 = *(float *)((int)puVar17 + 0xcc);
      uVar14 = *(uint *)(puVar17 + 0x1a);
      (moby->pos).x = (float)((double)fVar1 + dVar35);
      (moby->pos).y = (float)((double)fVar5 + dVar36);
      (moby->pos).z = fVar51;
      pvVar12 = moby->pVar;
      uVar27 = ZEXT48(pvVar12);
      fVar1 = (moby->transform).v0.x;
      uVar28 = (ulonglong)(uVar13 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(uVar14 >> 0x1d) & 4;
      dVar34 = ABS((double)fVar6);
      if ((double)*(float *)((int)puVar17 + 0xd4) - dVar41 < 0.0) {
        dVar34 = ABS(dVar36);
      }
      fVar5 = (moby->transform).v0.y;
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar38 = ABS((double)*(float *)(puVar17 + 0x1a));
      if ((double)*(float *)((int)puVar17 + 0xd4) - dVar41 < 0.0) {
        dVar38 = ABS(dVar35);
      }
      fVar7 = (moby->transform).v0.z;
      dVar39 = dVar41;
      if (dVar41 < dVar34) {
        lVar21 = uVar20 - 0x160;
        lVar25 = uVar20 - 0x78;
        lVar29 = uVar20 - 0x68;
        lVar33 = 2;
        fVar9 = (float)(dVar38 - dVar34) / (float)(dVar38 + dVar34);
        fVar8 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0x104) = fVar9;
        *(float *)((int)puVar17 + 0xfc) = fVar9;
        *(float *)(puVar17 + 0x20) = fVar9;
        *(float *)(puVar17 + 0x1f) = fVar9;
        fVar9 = fVar8 * fVar8;
        *(float *)((int)puVar17 + 0xfc) = *(float *)((int)puVar17 + 0xfc) * fVar8;
        *(float *)(puVar17 + 0x20) = *(float *)(puVar17 + 0x20) * fVar9;
        *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar9 * fVar8;
        do {
          *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xe8) * fVar9 * fVar9;
          iVar24 = (int)lVar25;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar9 * fVar9;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar20 - 0x78;
        pfVar30 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar25 = lVar29;
        do {
          fVar9 = *pfVar30;
          fVar8 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar21 + 0xf8) = *(float *)((int)lVar21 + 0xf8) * fVar9;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
          lVar25 = lVar25 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar25 = 2;
        lVar21 = lVar22;
        dVar34 = dVar41;
        do {
          iVar24 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar18 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xf8)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar39 = (double)((float)(dVar34 + 0.7853981852531433) * fVar10 + fVar6);
      }
      *(float *)((int)puVar17 + 0xc4) = fVar2;
      (moby->rotation).z = (float)dVar39;
      dVar37 = ABS(dVar37);
      fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36)));
      dVar35 = ABS((double)fVar2);
      *(float *)(puVar17 + 0x18) = fVar2;
      *(float *)(puVar17 + 0x19) = (float)(dVar35 - dVar37);
      uVar28 = (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar17 + 0x18));
      if ((double)*(float *)(puVar17 + 0x19) - dVar41 < 0.0) {
        dVar34 = dVar37;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      dVar37 = ABS((double)*(float *)((int)puVar17 + 0xc4));
      if ((double)*(float *)(puVar17 + 0x19) - dVar41 < 0.0) {
        dVar37 = dVar35;
      }
      fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      dVar35 = dVar41;
      if (dVar41 < dVar34) {
        lVar21 = uVar20 - 0x160;
        lVar29 = uVar20 - 0x88;
        lVar25 = uVar20 - 0x98;
        lVar33 = 2;
        fVar10 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
        fVar9 = fVar10 * fVar10;
        *(float *)((int)puVar17 + 0xe4) = fVar10;
        *(float *)((int)puVar17 + 0xdc) = fVar10;
        *(float *)(puVar17 + 0x1c) = fVar10;
        *(float *)(puVar17 + 0x1b) = fVar10;
        fVar10 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0xdc) = *(float *)((int)puVar17 + 0xdc) * fVar9;
        *(float *)(puVar17 + 0x1c) = *(float *)(puVar17 + 0x1c) * fVar10;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar10 * fVar9;
        do {
          *(float *)((int)lVar21 + 0xd8) = *(float *)((int)lVar21 + 200) * fVar10 * fVar10;
          iVar24 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar24 + 4) * fVar10 * fVar10;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar20 - 0x98;
        pfVar30 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar25 = lVar29;
        do {
          fVar10 = *pfVar30;
          fVar9 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar21 + 0xd8) = *(float *)((int)lVar21 + 0xd8) * fVar10;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
          lVar25 = lVar25 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar21 = 2;
        dVar34 = dVar41;
        do {
          iVar24 = (int)lVar22;
          iVar18 = (int)lVar29;
          lVar22 = lVar22 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar24 + 0xd8)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar6);
      }
      (moby->rotation).y = (float)-dVar35;
      puVar23 = worldUpdateTime;
      uVar26 = *(ushort *)((int)pvVar12 + 0x166);
      dVar34 = (double)(fVar7 * fVar7 + fVar1 * fVar1 + fVar5 * fVar5);
      if ((double)(float)SQRT(dVar34) != dVar41) {
        dVar41 = 1.0 / SQRT(dVar34);
        dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41 - dVar40
                                                 ) * (double)(float)(dVar41 * 0.5) + dVar41);
        dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41 - dVar40
                                                 ) * (double)(float)(dVar41 * 0.5) + dVar41);
        dVar41 = (double)(fVar7 * (float)(-(double)(float)((double)(float)(dVar34 * dVar41) * dVar41
                                                          - dVar40) * (double)(float)(dVar41 * 0.5)
                                         + dVar41));
      }
      dVar34 = (double)(float)(dVar41 + (double)fVar51);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        uVar26 = uVar26 + 1 & 0xf;
        *(ushort *)((int)pvVar12 + 0x166) = uVar26;
        auVar48 = loadVectorLeftIndexed(0x164,uVar27);
        auVar49 = loadVectorRightIndexed(0x174,uVar27);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(bVar32 >> 1 & 1)) {
          auVar46._0_4_ = auVar49._0_4_ + 1;
          auVar46._8_8_ = auVar49._8_8_;
          auVar46._4_4_ = auVar49._4_4_ + 1;
          auVar47._0_8_ = auVar46._0_8_;
          auVar47._12_4_ = auVar49._12_4_;
          auVar47._8_4_ = auVar49._8_4_ + 1;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = auVar47._12_4_ + 1;
          auVar42 = vectorSplatHalfWord(auVar49,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar27);
          *(undefined2 *)((int)pvVar12 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)(short)uVar26 << 4);
      *(f32 *)((int)pvVar12 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar12 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar12 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar12 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar12 + (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      if (DAT_00fa3f08 != puVar23) {
        DAT_00fa3f08 = puVar23;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        puVar23 = (undefined4 *)RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
      if (dVar34 < (double)*(float *)((int)pvVar11 + 0x128)) {
        sound::PlayMobySound(1,0,moby);
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        moby->state = '\x04';
        auVar48 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x44,0x256ed8);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar51 = *(float *)((int)pvVar11 + 0x128);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar48);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x160,
                            uVar31);
        *(undefined4 *)((int)pvVar11 + 0x160U & 0xfffffffc) = uVar16;
        fVar51 = fVar51 + 0.7;
        puVar23 = &DAT_00256ed8;
        if ((moby->pos).z < fVar51) {
          (moby->pos).z = fVar51;
        }
      }
    }
    else if (bVar3 == 2) {
      iVar24 = mobyupdate_helpers::M1355_00256a60(lVar21,uVar31 + 0x110);
      if (iVar24 != 0) {
        mobyupdate_helpers::M1355_002568a0(lVar21,uVar31 + 0x110);
      }
      puVar19 = worldUpdateTime;
      pvVar12 = moby->pVar;
      uVar20 = ZEXT48(pvVar12);
      if (((uint)worldUpdateTime & 3) == 0) {
        auVar42 = ZEXT416(0xfffffff0);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        *(ushort *)((int)pvVar12 + 0x166) = *(short *)((int)pvVar12 + 0x166) + 1U & 0xf;
        auVar48 = loadVectorLeftIndexed(0x164,uVar20);
        auVar49 = loadVectorRightIndexed(0x174,uVar20);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar42);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar42);
        auVar42 = loadVectorLeftIndexed(0x18,0x256ed8);
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
        if ((bool)(bVar32 >> 1 & 1)) {
          auVar43._0_4_ = auVar49._0_4_ + 1;
          auVar43._8_8_ = auVar49._8_8_;
          auVar43._4_4_ = auVar49._4_4_ + 1;
          auVar44._0_8_ = auVar43._0_8_;
          auVar44._12_4_ = auVar49._12_4_;
          auVar44._8_4_ = auVar49._8_4_ + 1;
          auVar45._0_12_ = auVar44._0_12_;
          auVar45._12_4_ = auVar44._12_4_ + 1;
          auVar42 = vectorSplatHalfWord(auVar45,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x164,uVar20);
          *(undefined2 *)((int)pvVar12 + 0x164) = uVar15;
        }
      }
      iVar24 = (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4);
      *(f32 *)((int)pvVar12 + iVar24 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar12 + iVar24 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar12 + iVar24 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar12 + iVar24 + 0x1c) = (moby->pos).w;
      *(undefined4 *)((int)pvVar12 + (int)((longlong)*(short *)((int)pvVar12 + 0x166) << 4) + 0x1c)
           = 0x3f800000;
      if (DAT_00fa3f08 != puVar19) {
        DAT_00fa3f08 = puVar19;
        RegisterFuncForMoby(&PTR_M1356_00257d50_0070a058,moby);
        RegisterFuncForMoby(&PTR_M1356_00258108_0070a060,moby);
      }
      puVar23 = (undefined4 *)mobyutil::MB_randInt(DAT_0079bcf4);
      if (puVar23 == (undefined4 *)0x0) {
        moby->state = '\x03';
        fVar51 = (moby->rotation).z + 1.5707963;
        fVar1 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar1 = fVar51;
        }
        fVar2 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar51 = fVar2 * fVar2;
        fVar6 = DAT_0079bcd8 * mobyutil::g_FrameTime;
        fVar1 = fVar51 * fVar51 * fVar2;
        fVar5 = fVar51 * fVar1;
        *(float *)((int)pvVar11 + 0x130) =
             fVar6 * (fVar51 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar51 * fVar2 * -0.16666657 + fVar2);
        fVar51 = (moby->rotation).z;
        fVar1 = 3.1415925 - fVar51;
        if (fVar51 - (3.1415925 - fVar51) < 0.0) {
          fVar1 = fVar51;
        }
        *(undefined4 *)((int)pvVar11 + 0x138) = *(undefined4 *)((int)pvVar11 + 0x144);
        *(undefined4 *)((int)pvVar11 + 0x14c) = 0;
        fVar2 = -3.1415925 - fVar51;
        if ((-3.1415925 - fVar51) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar51 = fVar2 * fVar2;
        fVar1 = fVar51 * fVar51 * fVar2;
        fVar5 = fVar51 * fVar1;
        *(float *)((int)pvVar11 + 0x134) =
             fVar6 * (fVar51 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar1 * 0.0083330255 + fVar51 * fVar2 * -0.16666657 + fVar2);
        puVar23 = (undefined4 *)0x0;
      }
    }
    else {
      puVar23 = (undefined4 *)(uint)bVar3;
      if (bVar3 == 0) {
        *(float *)((int)pvVar11 + 0x150) = DAT_0071f418 * 3.1415927;
        fVar1 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar11 + 0x154) = mobyutil::g_FrameTime * 12.566371;
        *(float *)((int)pvVar11 + 0x158) = fVar51 * 10.0;
        *(float *)((int)pvVar11 + 0x15c) = fVar1 * 10.0;
        dVar34 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar11 + 0x168) = (float)dVar34;
        *(f32 *)((int)pvVar11 + 0x120) = (moby->pos).x;
        fVar4 = (moby->pos).y;
        moby->drawDistance = 0xff;
        *(f32 *)((int)pvVar11 + 0x124) = fVar4;
        fVar51 = (moby->pos).z;
        *(float *)((int)pvVar11 + 0x128) = fVar51;
        *(f32 *)((int)pvVar11 + 300) = (moby->pos).w;
        *(float *)((int)pvVar11 + 0x128) = fVar51 + 5.0;
        dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar31 + 0x120,0);
        *(float *)((int)pvVar11 + 0x128) = (float)dVar34;
        mobyupdate_helpers::M1355_002568a0(lVar21,uVar31 + 0x110);
        moby->state = '\x01';
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
        puVar23 = (undefined4 *)0x1;
      }
    }
  }
  return puVar23;
}



//==== 00257bf0  ns=Global  size=0x14c
// sig: undefined FUN_00257bf0(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(0): 

undefined8 FUN_00257bf0(undefined4 param_1,longlong param_2,f32 *param_3)

{
  ushort uVar1;
  void *pvVar2;
  u16 *puVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  MobyInstance *pMVar6;
  undefined8 in_r0;
  undefined8 uVar7;
  ushort *puVar8;
  void *pvVar9;
  int iVar10;
  byte in_cr6;
  undefined1 auVar11 [16];
  
  puVar8 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar8 == (ushort *)0x0) {
    uVar7 = 1;
  }
  else {
    auVar4 = ZEXT416(0);
    uVar7 = 1;
    auVar11 = loadVectorLeftIndexed(in_r0,0x257bec);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    do {
      pMVar6 = MobyInstance;
      uVar5 = *puVar8 & 0x7fff;
      if ((MobyInstance[uVar5].oClass == DREK_FIGHT_MISSILE) &&
         (MobyInstance[uVar5].state == '\x01')) {
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,
                   auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
        uVar7 = 0;
        MobyInstance[uVar5].pos.x = *param_3;
        iVar10 = 0;
        pvVar2 = pMVar6[uVar5].pVar;
        pMVar6[uVar5].pos.y = param_3[1];
        pMVar6[uVar5].pos.z = param_3[2];
        pMVar6[uVar5].pos.w = param_3[3];
        pvVar9 = pvVar2;
        if ((bool)(in_cr6 >> 1 & 1)) {
          do {
            iVar10 = iVar10 + 1;
            *(f32 *)((int)pvVar9 + 0x10) = pMVar6[uVar5].pos.x;
            *(f32 *)((int)pvVar9 + 0x14) = pMVar6[uVar5].pos.y;
            *(f32 *)((int)pvVar9 + 0x18) = pMVar6[uVar5].pos.z;
            *(f32 *)((int)pvVar9 + 0x1c) = pMVar6[uVar5].pos.w;
            pvVar9 = (void *)((int)pvVar9 + 0x10);
          } while ((float)(longlong)iVar10 < 4.0);
        }
        *(undefined4 *)((int)pvVar2 + 0x16c) = param_1;
        pMVar6[uVar5].enabled = '\x01';
        pMVar6[uVar5].modeBits =
             pMVar6[uVar5].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        puVar3 = (pMVar6[uVar5].pClass)->collision;
        pMVar6[uVar5].state = '\x02';
        pMVar6[uVar5].collision = puVar3;
      }
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
    } while (-1 < (short)uVar1);
  }
  return uVar7;
}



//==== 00257d50  ns=mobyupdate_helpers  size=0x394
// sig: undefined M1356_00257d50(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1356_00257d50(int param_1)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  void *pvVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  short sVar11;
  uint uVar10;
  float *pfVar12;
  ulonglong unaff_r23;
  longlong lVar13;
  ulonglong unaff_r24;
  longlong lVar14;
  ulonglong unaff_r25;
  longlong lVar15;
  ulonglong unaff_r26;
  undefined4 *puVar16;
  ulonglong unaff_r27;
  undefined4 *puVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  int iVar19;
  ulonglong unaff_r31;
  ushort *puVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  float local_990 [612];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa00;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x142] = in_LR;
  puVar5[0x13c] = in_f28;
  puVar5[0x13d] = in_f29;
  puVar5[0x13e] = in_f30;
  puVar5[0x13f] = in_f31;
  puVar5[0x13b] = unaff_r31;
  iVar19 = DAT_00fa3f0c;
  puVar5[0x13a] = unaff_r30;
  puVar5[0x139] = unaff_r29;
  puVar5[0x138] = unaff_r28;
  puVar5[0x137] = unaff_r27;
  puVar5[0x136] = unaff_r26;
  puVar5[0x135] = unaff_r25;
  puVar5[0x134] = unaff_r24;
  puVar5[0x133] = unaff_r23;
  if (iVar19 == 0) {
    iVar19 = 0;
    lVar13 = lVar1;
    do {
      uVar8 = draw::GetEffectTex(0x13);
      iVar18 = (int)lVar13;
      *(undefined8 *)(iVar18 + 0x108) = uVar8;
      uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar18 + 0x110) = uVar8;
      uVar8 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar18 + 0x100) = uVar8;
      uVar8 = idol_draw::PackCmd(DAT_00fa3f14,DAT_0079bcf8,DAT_00fa3f18,DAT_0079bcfc,0x80);
      *(undefined8 *)(iVar18 + 0x118) = uVar8;
      dVar22 = (double)fastfunc::FastIntToDouble(worldUpdateTime + 3U & 3);
      iVar18 = 0;
      puVar17 = &DAT_0079bd08;
      dVar27 = 0.25;
      puVar16 = &DAT_0079bd0c;
      dVar26 = 1.0;
      dVar25 = 0.0;
      dVar22 = (double)(float)(dVar22 * 0.0625);
      lVar14 = lVar13;
      lVar15 = lVar13;
      do {
        uVar9 = *puVar16;
        *(undefined4 *)((int)lVar15 + 0xe0) = *puVar17;
        *(undefined4 *)((int)lVar15 + 0xe4) = uVar9;
        dVar23 = (double)fastfunc::FastIntToDouble((iVar19 - (iVar18 >> 1)) + 1);
        dVar24 = (double)(float)(dVar23 * dVar27 + dVar22);
        dVar23 = dVar26;
        if ((dVar24 <= dVar26) && (dVar23 = dVar24, dVar24 < dVar25)) {
          dVar23 = dVar25;
        }
        uVar9 = fastfunc::FastLerpColor(dVar23,DAT_0079bd00,DAT_0079bd04);
        iVar18 = iVar18 + 1;
        *(undefined4 *)((int)lVar14 + 0xd0) = uVar9;
        puVar17 = puVar17 + 2;
        lVar15 = lVar15 + 8;
        puVar16 = puVar16 + 2;
        lVar14 = lVar14 + 4;
      } while (iVar18 < 4);
      iVar19 = iVar19 + 1;
      lVar13 = lVar13 + 0x90;
    } while (iVar19 < 0x10);
    *(undefined4 *)(puVar5 + 0xe) = 0;
    bVar2 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)((int)puVar5 + 0x74) = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0x3e19999a;
    *(undefined4 *)((int)puVar5 + 0x7c) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
    *(undefined4 *)((int)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0xbe19999a;
    *(undefined4 *)((int)puVar5 + 0x8c) = 0;
    puVar20 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
    do {
      do {
      } while (MobyInstance[*puVar20 & 0x7fff].oClass != DREK_FIGHT_MISSILE);
      pvVar4 = MobyInstance[*puVar20 & 0x7fff].pVar;
      lVar14 = 0;
      sVar11 = *(short *)((int)pvVar4 + 0x164);
      lVar13 = lVar1;
      if (0 < sVar11) {
        do {
          lVar13 = lVar13 + 0x90;
          uVar3 = *(ushort *)((int)pvVar4 + 0x166);
          if (DAT_00fa3f10 == 0) {
            uVar10 = 0;
            lVar21 = 4;
            lVar15 = lVar13;
            do {
              uVar7 = uVar10 & 1;
              uVar6 = (uint)(((longlong)((int)uVar10 >> 1) +
                              (((ulonglong)uVar3 - lVar14) + 0xf & 0xf) & 0xffffffff) << 4) & 0xf0;
              uVar10 = uVar10 + 1;
              pfVar12 = (float *)lVar15;
              *pfVar12 = *(float *)((int)pvVar4 + uVar6 + 0x10) + local_990[uVar7 * 4];
              pfVar12[1] = *(float *)((int)pvVar4 + uVar6 + 0x14) + local_990[uVar7 * 4 + 1];
              pfVar12[2] = *(float *)((int)pvVar4 + uVar6 + 0x18) + local_990[uVar7 * 4 + 2];
              pfVar12[3] = *(float *)((int)pvVar4 + uVar6 + 0x1c);
              lVar15 = lVar15 + 0x10;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            draw::FastDrawQuad(lVar13,0,0,EffectTexHeaders,9);
            sVar11 = *(short *)((int)pvVar4 + 0x164);
          }
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 < (int)sVar11);
      }
      uVar3 = *puVar20;
      puVar20 = puVar20 + 1;
    } while (-1 < (short)uVar3);
  }
  return;
}



//==== 00258108  ns=mobyupdate_helpers  size=0x2d8
// sig: undefined M1356_00258108(void)
// callers(0): 
// callees(3): 00119028 mobyutil::MB_DrawGlowFX; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1356_00258108(int param_1)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  ushort *puVar7;
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
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 local_80 [24];
  
  if (DAT_00fa3f0c == 0) {
    dVar14 = 3.141592502593994;
    dVar15 = -3.141592502593994;
    puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar16 = -0.16666656732559204;
    dVar17 = 0.008333025500178337;
    dVar18 = -0.0001980741071747616;
    dVar19 = 2.601886990305502e-06;
    dVar20 = 0.5;
    dVar12 = (double)(DAT_0079bd28 * 0.017453292 * mobyutil::g_FrameTime);
    uVar21 = 0;
    dVar13 = (double)(DAT_0079bd2c * 0.017453292 * mobyutil::g_FrameTime);
    do {
      pMVar5 = MobyInstance;
      uVar4 = *puVar7 & 0x7fff;
      if (MobyInstance[uVar4].oClass == DREK_FIGHT_MISSILE) {
        pvVar3 = MobyInstance[uVar4].pVar;
        dVar8 = (double)*(float *)((int)pvVar3 + 0x168);
        dVar10 = (double)(float)(dVar14 - dVar8);
        if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
          dVar10 = dVar8;
        }
        dVar9 = (double)(float)(dVar15 - dVar8);
        if ((double)(float)(dVar15 - dVar8) - dVar10 < 0.0) {
          dVar9 = dVar10;
        }
        dVar10 = (double)(float)(dVar9 * dVar9);
        dVar11 = (double)(float)(dVar10 * (double)(float)(dVar10 * dVar9));
        dVar8 = (double)(float)(dVar10 * dVar11);
        uVar6 = fastfunc::FastLerpColor
                          ((double)(float)((double)(float)((double)(float)(dVar10 * dVar8) * dVar19
                                                          + (double)(float)(dVar8 * dVar18 +
                                                                           (double)(float)(dVar11 * 
                                                  dVar17 + (double)(float)((double)(float)(dVar10 * 
                                                  dVar9) * dVar16 + dVar9)))) * dVar20 + dVar20),
                           DAT_0079bd30,DAT_0079bd34);
        bVar1 = pMVar5[uVar4].state;
        if (bVar1 < 4) {
          if (1 < bVar1) {
            mobyutil::MB_DrawGlowFX((double)DAT_0079bd38,uVar21,local_80,uVar6);
            dVar10 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x168),(float)dVar12);
            *(float *)((int)pvVar3 + 0x168) = (float)dVar10;
          }
        }
        else if (bVar1 < 5) {
          mobyutil::MB_DrawGlowFX((double)DAT_0079bd38,uVar21,local_80,uVar6);
          dVar10 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar3 + 0x168),(float)dVar13);
          *(float *)((int)pvVar3 + 0x168) = (float)dVar10;
        }
      }
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 002583e8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1356_002583e8(void)
// callers(0): 
// callees(1): 001167c8 mobyutil::MB_UpdateManipulatorRot

void mobyupdate_helpers::M1356_002583e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x144) = *(undefined4 *)(iVar1 + 0x17c);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,iVar1 + 0xe0,2);
  return;
}



//==== 00258440  ns=mobyupdate_helpers  size=0x178
// sig: undefined M1356_00258440(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(3): 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline; 00502758 fastfunc::FastDoubleToInt

bool mobyupdate_helpers::M1356_00258440(int param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  double dVar9;
  float local_40 [2];
  longlong local_38;
  
  iVar2 = *(int *)(param_1 + 0x78);
  local_38 = (longlong)*(int *)(iVar2 + 0x168);
  dVar9 = (double)((float)local_38 + *(float *)(iVar2 + 0x16c) +
                  *(float *)(iVar2 + 0x170) / *(float *)(iVar2 + 0x174));
  iVar8 = fastfunc::FastDoubleToInt(dVar9);
  local_38 = (longlong)iVar8;
  *(int *)(iVar2 + 0x168) = iVar8;
  uVar3 = *param_2;
  bVar1 = (int)((ulonglong)uVar3 - 1) <= iVar8;
  *(float *)(iVar2 + 0x16c) = (float)(dVar9 - (double)local_38);
  if (!bVar1) {
    mobyutil::MB_PathEvalSpline
              (dVar9,param_2,(ulonglong)uVar3 - 1,0,param_1 + 0x10,param_1 + 0x40,0);
    uVar3 = *param_2;
    *(undefined4 *)(iVar2 + 0x194) = *(undefined4 *)(param_1 + 0x18);
    pfVar6 = (float *)(param_2 + uVar3 * 4);
    local_40[0] = 0.0;
    fVar4 = *(float *)(param_1 + 0x14) - pfVar6[1];
    fVar5 = *(float *)(param_1 + 0x10) - *pfVar6;
    fVar7 = *(float *)(param_1 + 0x18) - pfVar6[2];
    mobyutil::OrganicDelt
              (SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4),DAT_0079bd4c * DAT_0071f418,
               DAT_0079bd4c * DAT_0071f418,DAT_0079bd48 * mobyutil::g_FrameTime,local_40,0x7a0000,
               (float *)(iVar2 + 0x170));
  }
  return bVar1;
}



//==== 002585c0  ns=mobyupdate_helpers  size=0x21c
// sig: undefined M1356_002585c0(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(0): 

void mobyupdate_helpers::M1356_002585c0(int *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x60;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  iVar13 = *param_1;
  iVar12 = 0;
  piVar11 = param_1;
  if (0 < iVar13 + -1) {
    do {
      fVar2 = (float)piVar11[9];
      fVar3 = (float)piVar11[5];
      fVar5 = ABS((float)piVar11[8] - (float)piVar11[4]);
      fVar4 = ABS(fVar2 - fVar3);
      *(float *)(puVar7 + 6) = (float)piVar11[8] - (float)piVar11[4];
      *(float *)((int)puVar7 + 0x34) = fVar2 - fVar3;
      *(float *)(puVar7 + 7) = fVar5 - fVar4;
      fVar2 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x34) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar7 + 6));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar7 + 0x34));
      if (*(float *)(puVar7 + 7) - 0.0 < 0.0) {
        fVar8 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar10 - 0x50;
        lVar14 = uVar10 - 0x14;
        lVar16 = uVar10 - 0x24;
        lVar19 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar7 + 9) = fVar3;
        *(float *)(puVar7 + 8) = fVar3;
        *(float *)((int)puVar7 + 0x44) = fVar3;
        *(float *)((int)puVar7 + 0x3c) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar7 + 8) = *(float *)(puVar7 + 8) * fVar5;
        *(float *)((int)puVar7 + 0x44) = *(float *)((int)puVar7 + 0x44) * fVar3;
        *(float *)(puVar7 + 9) = *(float *)(puVar7 + 9) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x2c) * fVar3 * fVar3;
          iVar13 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar17 = uVar10 - 0x24;
        lVar19 = 4;
        pfVar18 = (float *)&DAT_007358e0;
        lVar14 = lVar17;
        lVar16 = lVar1;
        do {
          fVar3 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x3c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar16 = 2;
        lVar14 = lVar1;
        do {
          iVar13 = (int)lVar14;
          iVar9 = (int)lVar17;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                  + *(float *)(iVar9 + 0xc);
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar4;
      }
      iVar13 = *param_1;
      iVar12 = iVar12 + 1;
      piVar11[7] = (int)fVar2;
      piVar11 = piVar11 + 4;
    } while (iVar12 < iVar13 + -1);
  }
  if (1 < iVar13) {
    param_1[iVar13 * 4 + 3] = param_1[iVar13 * 4 + -1];
  }
  return;
}



//==== 002587f8  ns=mobyupdate_helpers  size=0x3e8
// sig: undefined M1356_002587f8(void)
// callers(1): 00258c50 mobyupdate_unsorted::UpdateMoby_1356
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fe4f0 mobyutil::MB_randRangeSigned; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M1356_002587f8(MobyInstance *param_1)

{
  void *pvVar1;
  int iVar2;
  float fVar3;
  MobyInstance *pMVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_30;
  float local_2c;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  param_1->scale = param_1->pClass->gScale * DAT_0079bd40;
  if (param_1->state < 6 && 1 < param_1->state) {
    iVar5 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 400));
    if (iVar5 == 0) {
      iVar5 = sound::PlayMobySound(0,4,param_1);
      *(int *)((int)pvVar1 + 400) = iVar5;
    }
  }
  else {
    iVar5 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar1 + 400));
    if (iVar5 != 0) {
      iVar5 = *(int *)((int)pvVar1 + 400);
      if (((iVar5 != -1) && (sound::g_SoundChannels[iVar5].pMoby == param_1)) &&
         (sound::g_SoundChannels[iVar5].state != '\0')) {
        sound::sound_Kill(iVar5);
      }
      *(undefined4 *)((int)pvVar1 + 400) = 0xffffffff;
    }
  }
  dVar9 = 0.0;
  local_2c = 0.0;
  uVar6 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar5 = mobyutil::MB_HandleDamage(param_1,uVar6,uVar8 + 0x20,0,&local_30,&local_2c,0,4);
  if ((local_30 == 1) || (param_1->state == '\b')) goto LAB_00258af8;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_2c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if (((double)fVar3 <= dVar9) ||
     ((g_heroType == '\x02' &&
      (0x3fffffff <
       (int)(((uint)((int)local_2c >> 0x1f) >> 1 ^ (uint)local_2c) - ((int)local_2c >> 0x1f)))))) {
LAB_00258a20:
    sound::PlayMobySound(3,0,param_1);
    if (g_heroType != '\x02') {
      sound::PlayMobySound(2,0,param_1);
    }
    iVar5 = 0;
    uVar7 = uVar8;
    do {
      iVar2 = *(int *)((int)uVar7 + 0xc0);
      if (-1 < iVar2) {
        mobyfunc::DeleteMoby(MobyInstance + iVar2);
      }
      iVar5 = iVar5 + 1;
      uVar7 = uVar7 + 4;
    } while (iVar5 < 4);
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    param_1->state = '\b';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(0x10,0x2587dc);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x160,uVar8);
    *(undefined4 *)((int)pvVar1 + 0x160U & 0xfffffffc) = uVar6;
    *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
  }
  else if (iVar5 < 3) {
    if (0 < iVar5) goto LAB_00258a20;
  }
  else if (iVar5 < 9) {
    sound::PlayMobySound(3,0,param_1);
    *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    dVar9 = (double)mobyutil::MB_randRangeSigned(0x403e000000000000,0x4049000000000000);
    *(float *)((int)pvVar1 + 0x188) = (float)(dVar9 * 0.01745329238474369) * mobyutil::g_FrameTime;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar8 + 0x60);
LAB_00258af8:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar8 + 0x60);
  if ((*(int *)((int)pvVar1 + 0xd0) == -1) || (hero::g_heroStateType == 0x16)) {
    *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
  }
  else {
    mobyutil::MB_getTargetInArea
              (0x4060000000000000,param_1,uVar8 + 0x70,&DAT_002587dc,0,0,
               Splines[*(int *)((int)pvVar1 + 0xd0)]->points,
               Splines[*(int *)((int)pvVar1 + 0xd0)]->cnt);
  }
  pMVar4 = g_heroMobyPtr;
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(float *)((int)pvVar1 + 0x70) = g_heroPosition.x;
    fVar3 = g_heroPosition.y;
    *(MobyInstance **)((int)pvVar1 + 0xb0) = pMVar4;
    *(float *)((int)pvVar1 + 0x74) = fVar3;
    *(float *)((int)pvVar1 + 0x78) = g_heroPosition.z;
    *(float *)((int)pvVar1 + 0x7c) = g_heroPosition.w;
  }
  return;
}



//==== 00258c50  ns=mobyupdate_unsorted  size=0xd04
// sig: undefined UpdateMoby_1356(MobyInstance * moby)
// callers(0): 
// callees(18): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 00104e44 mobyutil::PointInsideComplexPoly; 00109c30 mobyutil::OrganicDelt; 0010e030 mobyutil::MB_genericExplosion; 001167c8 mobyutil::MB_UpdateManipulatorRot; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 00258440 mobyupdate_helpers::M1356_00258440; 002585c0 mobyupdate_helpers::M1356_002585c0; 002587f8 mobyupdate_helpers::M1356_002587f8; 003a4858 FUN_003a4858; 003fd8d8 FUN_003fd8d8; 003fd918 FUN_003fd918; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* Moby 1356 */

void mobyupdate_unsorted::UpdateMoby_1356(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  u16 *puVar8;
  void *pvVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  int iVar17;
  u8 uVar20;
  int iVar18;
  MobyInstance *pMVar19;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  undefined8 uVar35;
  ulonglong in_f31;
  double dVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  
  lVar16 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x170;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar21;
  puVar12[0x30] = in_LR;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x2b] = unaff_r31;
  puVar12[0x29] = unaff_r29;
  puVar12[0x2a] = unaff_r30;
  puVar12[0x28] = unaff_r28;
  puVar12[0x27] = unaff_r27;
  puVar12[0x26] = unaff_r26;
  pvVar7 = moby->pVar;
  uVar28 = ZEXT48(pvVar7);
  dVar30 = (double)mobyupdate_helpers::M1356_002587f8();
  fVar43 = mobyutil::g_FrameTime;
  bVar1 = moby->state;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x41400000;
      *(undefined2 *)((int)pvVar7 + 0x24) = 0xc;
      *(undefined1 *)((int)pvVar7 + 0x28) = 3;
      if (*(int *)((int)pvVar7 + 0xd8) != -1) {
        mobyupdate_helpers::M1356_002585c0(Splines[*(int *)((int)pvVar7 + 0xd8)]);
      }
      if (*(int *)((int)pvVar7 + 0xdc) != -1) {
        mobyupdate_helpers::M1356_002585c0(Splines[*(int *)((int)pvVar7 + 0xdc)]);
      }
      *(undefined4 *)((int)pvVar7 + 0x16c) = 0;
      fVar2 = DAT_0079bd48;
      fVar43 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar7 + 0x168) = 0;
      *(float *)((int)pvVar7 + 0x170) = fVar2 * fVar43;
      *(f32 *)((int)pvVar7 + 0x194) = (moby->pos).z;
      if (*(int *)((int)pvVar7 + 0xd8) == -1) {
        moby->state = '\x06';
      }
      else {
        pSVar10 = Splines[*(int *)((int)pvVar7 + 0xd8)];
        fVar43 = pSVar10->points[0].y - pSVar10->points[1].y;
        fVar2 = pSVar10->points[0].x - pSVar10->points[1].x;
        fVar5 = pSVar10->points[0].z - pSVar10->points[1].z;
        MVar6 = moby->modeBits;
        *(float *)((int)pvVar7 + 0x174) = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar43 * fVar43);
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        (moby->pos).z = pSVar10->points[0].z;
        fVar43 = pSVar10->points[0].w;
        moby->enabled = '\0';
        (moby->pos).w = fVar43;
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 2) {
      if ((g_gameMode == GAME_MODE_NORMAL) &&
         ((*(int *)((int)pvVar7 + 0xd4) == -1 ||
          (iVar18 = mobyutil::PointInsideComplexPoly
                              (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar7 + 0xd4)]->points
                               ,Splines[*(int *)((int)pvVar7 + 0xd4)]->cnt), iVar18 != 0)))) {
        MVar6 = moby->modeBits;
        iVar18 = 0;
        moby->state = '\x02';
        moby->enabled = '\x01';
        puVar8 = moby->pClass->collision;
        *(undefined4 *)(puVar12 + 0x18) = 0;
        moby->collision = puVar8;
        moby->modeBits =
             MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        *(undefined4 *)((int)puVar12 + 0xc4) = 0;
        *(undefined4 *)(puVar12 + 0x19) = 0x40490fd0;
        *(undefined4 *)((int)puVar12 + 0xcc) = 0;
        do {
          iVar17 = *(int *)((int)uVar28 + 0xc0);
          if (-1 < iVar17) {
            FUN_003fd8d8(MobyInstance + iVar17,lVar16,&DAT_0079bd50,uVar21 - 0xb0);
          }
          iVar18 = iVar18 + 1;
          uVar28 = uVar28 + 4;
        } while (iVar18 < 4);
      }
    }
    else if (bVar1 < 3) {
      iVar18 = (int)(-1 - (longlong)*(int *)((int)pvVar7 + 0xc0) >> 0x3f);
      iVar18 = ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 0xc4) >> 0x3f) & iVar18 + 1U) - iVar18;
      iVar18 = iVar18 + ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 200) >> 0x3f) & 1U - iVar18);
      iVar18 = iVar18 + ((uint)(-1 - (longlong)*(int *)((int)pvVar7 + 0xcc) >> 0x3f) & 1U - iVar18);
      pSVar10 = Splines[*(int *)((int)pvVar7 + 0xd8)];
      if (iVar18 != 0) {
        auVar38 = ZEXT416(0xffffffff);
        auVar42 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x168,uVar28);
        auVar39 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar10));
        auVar41 = loadVectorRightIndexed(0x178,uVar28);
        auVar40 = loadVectorLeftIndexed(0x174,uVar28);
        auVar38 = vectorSubtractUnsignedWordModulo(auVar39,auVar38 | auVar41);
        auVar39 = loadVectorRightIndexed(0x184,uVar28);
        auVar38 = vectorConvertFromSignedFixedPointWord(auVar38,0);
        auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(in_LR,0x258be0);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar40 | auVar39,auVar41);
        auVar38 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                   auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          fVar43 = mobyutil::OrganicDelt
                             (1.5707964,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                              mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),
                              0x720000,(float *)((int)pvVar7 + 0x180));
          dVar30 = (double)fVar43;
        }
      }
      iVar17 = mobyupdate_helpers::M1356_00258440(dVar30,lVar16,ZEXT48(pSVar10));
      if (iVar17 != 0) {
        uVar20 = '\x03';
        if (iVar18 == 0) {
          uVar20 = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar7 + 0xdc)) << 0x3a) >> 0x3f) & 2) + 4;
        }
        moby->state = uVar20;
      }
    }
    else {
      iVar18 = fastfunc::FastDecTimerS32(uVar28 + 0x184);
      if (iVar18 != 0) {
        iVar18 = 0;
        fVar43 = (moby->rotation).z;
        uVar21 = uVar28;
        do {
          if (-1 < *(int *)((int)uVar21 + 0xc0)) {
            pMVar19 = MobyInstance + *(int *)((int)pvVar7 + iVar18 * 4 + 0xc0);
            fastfunc::FastWrapRot(fVar43,3.14159);
            puVar12[0x24] = (longlong)(int)(animationSpeed * 90.5);
            FUN_003fd918(pMVar19,*(undefined4 *)((int)puVar12 + 0x124));
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            *(undefined4 *)((int)pvVar7 + iVar18 * 4 + 0xc0) = 0xffffffff;
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(0x18,0x258be0);
            auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar38 = vectorMultiplyAddFloatingPoint
                                (auVar41,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                         auVar38 << 0x60,auVar39);
            auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
            auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x184,
                                uVar28);
            *(undefined4 *)((int)pvVar7 + 0x184U & 0xfffffffc) = uVar11;
            break;
          }
          if (iVar18 == 3) {
            moby->state = ((byte)((LZCOUNT(-1 - *(int *)((int)pvVar7 + 0xdc)) << 0x3a) >> 0x3f) & 2)
                          + 4;
          }
          iVar18 = iVar18 + 1;
          uVar21 = uVar21 + 4;
        } while (iVar18 < 4);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      fVar43 = Splines[*(int *)((int)pvVar7 + 0xdc)]->points[0].w;
      dVar30 = (double)fVar43;
      mobyutil::OrganicDelt
                (fVar43,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,
                 (int)Splines[*(int *)((int)pvVar7 + 0xdc)],(float *)((int)pvVar7 + 0x178));
      dVar30 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar30);
      if (dVar30 < 0.009999999776482582) {
        moby->state = '\x05';
        *(undefined4 *)((int)pvVar7 + 0x168) = 0;
        *(undefined4 *)((int)pvVar7 + 0x16c) = 0;
      }
    }
    else if (bVar1 < 6) {
      fVar43 = mobyutil::OrganicDelt
                         (0.0,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),0x720000,
                          (float *)((int)pvVar7 + 0x180));
      iVar18 = mobyupdate_helpers::M1356_00258440
                         ((double)fVar43,lVar16,Splines[*(int *)((int)pvVar7 + 0xdc)]);
      if (iVar18 != 0) {
        if (*(int *)((int)pvVar7 + 0xd0) == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->state = '\x06';
      }
    }
    else {
      dVar36 = 0.0;
      dVar34 = 6.2831854820251465;
      mobyutil::OrganicDelt
                (0.0,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 mobyutil::g_FrameTime * 6.2831855,(float *)((int)pvVar7 + 0x17c),0x258be0,
                 (float *)((int)pvVar7 + 0x180));
      fVar43 = *(float *)((int)pvVar7 + 0x70) - (moby->pos).x;
      fVar2 = *(float *)((int)pvVar7 + 0x74) - (moby->pos).y;
      dVar31 = ABS((double)fVar43);
      dVar33 = ABS((double)fVar2);
      *(float *)(puVar12 + 0x1e) = fVar43;
      *(float *)((int)puVar12 + 0xf4) = fVar2;
      *(float *)(puVar12 + 0x1f) = (float)(dVar31 - dVar33);
      fVar43 = DAT_0071f418;
      dVar32 = (double)mobyutil::g_FrameTime;
      uVar26 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
      dVar30 = ABS((double)*(float *)(puVar12 + 0x1e));
      if ((double)*(float *)(puVar12 + 0x1f) - dVar36 < 0.0) {
        dVar30 = dVar33;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)((int)puVar12 + 0xf4));
      if ((double)*(float *)(puVar12 + 0x1f) - dVar36 < 0.0) {
        dVar33 = dVar31;
      }
      dVar31 = dVar36;
      if (dVar36 < dVar30) {
        lVar22 = uVar21 - 0x160;
        lVar24 = uVar21 - 0x74;
        lVar27 = uVar21 - 100;
        lVar29 = 2;
        fVar3 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x21) = fVar3;
        *(float *)(puVar12 + 0x20) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar3;
        *(float *)((int)puVar12 + 0xfc) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar4;
        *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xec) * fVar3 * fVar3;
          iVar18 = (int)lVar24;
          lVar22 = lVar22 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar27 = uVar21 - 0x74;
        pfVar25 = (float *)&DAT_007358e0;
        lVar22 = lVar23;
        lVar24 = lVar27;
        do {
          fVar3 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar22 + 0xfc) = *(float *)((int)lVar22 + 0xfc) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar22 = 2;
        dVar30 = dVar36;
        do {
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          iVar17 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0xfc)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar5 + fVar2);
      }
      mobyutil::OrganicDelt
                ((float)dVar31,fVar43 * 3.1415927,fVar43 * 3.1415927,(float)(dVar32 * dVar34),
                 &(moby->rotation).z,0x260000,(float *)((int)pvVar7 + 0x178));
      fVar43 = mobyutil::OrganicDelt
                         ((float)dVar36,DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
                          (float)((double)mobyutil::g_FrameTime * dVar34),&(moby->rotation).x,
                          0x720000,(float *)((int)pvVar7 + 0x188));
      iVar18 = fastfunc::FastDecTimerS32((double)fVar43,uVar28 + 0x164);
      if ((iVar18 != 0) && (*(int *)((int)pvVar7 + 0xb4) != 2)) {
        moby->state = '\a';
      }
    }
  }
  else if (bVar1 < 8) {
    mobyfunc::GetBonePosition(lVar16,1,uVar21 - 0xa0);
    fVar2 = *(float *)((int)pvVar7 + 0x70) - *(float *)(puVar12 + 0x1a);
    *(float *)(puVar12 + 0x1c) = fVar2;
    fVar5 = *(float *)((int)pvVar7 + 0x74) - *(float *)((int)puVar12 + 0xd4);
    *(float *)((int)puVar12 + 0xe4) = fVar5;
    fVar3 = *(float *)((int)pvVar7 + 0x78) - *(float *)(puVar12 + 0x1b);
    fVar4 = DAT_0079bd44 * mobyutil::g_FrameTime;
    *(float *)(puVar12 + 0x1d) = fVar3;
    *(undefined4 *)((int)puVar12 + 0xec) = *(undefined4 *)((int)pvVar7 + 0x7c);
    fVar43 = 0.0;
    fVar15 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar4 = fVar4 / fVar15;
    fVar14 = fVar43;
    if (0.0 - fVar15 < 0.0) {
      fVar14 = fVar2 * fVar4;
    }
    fVar13 = fVar43;
    if (0.0 - fVar15 < 0.0) {
      fVar13 = fVar5 * fVar4;
    }
    if (0.0 - fVar15 < 0.0) {
      fVar43 = fVar3 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar14 = fVar2 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar13 = fVar5 * fVar4;
    }
    if (fVar15 - 0.0 < 0.0) {
      fVar43 = fVar3 * fVar4;
    }
    *(float *)(puVar12 + 0x1c) = fVar14;
    *(float *)((int)puVar12 + 0xe4) = fVar13;
    *(float *)(puVar12 + 0x1d) = fVar43;
    sound::PlayMobySound(1,0,moby);
    puVar12[0x24] = (longlong)(int)(animationSpeed * 45.5);
    FUN_003a4858(lVar16,uVar21 - 0x90,uVar21 - 0xa0,uVar28 + 0x70,
                 *(undefined4 *)((int)puVar12 + 0x124));
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    moby->state = '\x06';
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar38 = loadVectorLeftIndexed(0x30,0x258be0);
    auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar39);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x164,uVar28);
    *(undefined4 *)((int)pvVar7 + 0x164U & 0xfffffffc) = uVar11;
  }
  else if (bVar1 < 9) {
    uVar37 = 0x4000000000000000;
    *(float *)((int)pvVar7 + 0x194) =
         -(mobyutil::g_FrameTime * 2.0 - *(float *)((int)pvVar7 + 0x194));
    (moby->rotation).x = fVar43 * 0.2617994 + (moby->rotation).x;
    iVar18 = fastfunc::FastDecTimerS32(uVar28 + 0x160);
    if ((iVar18 != 0) || (g_heroType == '\x02')) {
      lVar22 = lVar16 + 0x10;
      uVar35 = 0;
      puVar12[0x12] = 0xffffffffffffffff;
      puVar12[0x14] = 0;
      puVar12[0x15] = 0;
      puVar12[0x16] = 0xffffffffffffffff;
      puVar12[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4010000000000000,0x4004000000000000,0x4022000000000000,uVar37,0,lVar16,
                 &DAT_00a15d30,lVar22,0,0xffffffffffffffff,0x14,0xc,8);
      lVar23 = lVar16 + 0x40;
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,lVar16,0x634,lVar22,lVar23,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,lVar16,0x635,lVar22,lVar23,0,0);
      puVar12[0xe] = ZEXT48(&DAT_00a15d30);
      puVar12[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby(uVar35,lVar16,0x636,lVar22,lVar23,0,0);
      mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  dVar31 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar7 + 0x18c),
                              DAT_0079bd90 * 0.017453292 * mobyutil::g_FrameTime);
  *(float *)((int)pvVar7 + 0x18c) = (float)dVar31;
  dVar30 = (double)(float)(3.141592502593994 - dVar31);
  if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
    dVar30 = dVar31;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar31);
  if ((double)(float)(-3.141592502593994 - dVar31) - dVar30 < 0.0) {
    dVar32 = dVar30;
  }
  pvVar9 = moby->pVar;
  dVar31 = (double)(float)(dVar32 * dVar32);
  dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar32));
  dVar30 = (double)(float)(dVar31 * dVar33);
  (moby->pos).z =
       DAT_0079bd94 *
       ((float)(dVar31 * dVar30) * 2.601887e-06 +
       (float)(dVar30 * -0.0001980741071747616 +
              (double)(float)(dVar33 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar31 * dVar32) * -0.16666656732559204
                                            + dVar32)))) + *(float *)((int)pvVar7 + 0x194);
  *(undefined4 *)((int)pvVar9 + 0x144) = *(undefined4 *)((int)pvVar9 + 0x17c);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar16,(int)pvVar9 + 0xe0,2)
  ;
  return;
}



//==== 00259954  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1357_00259954(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1357_00259954(void)

{
  DAT_0079bde4 = 0x10000;
  return;
}



//==== 00259970  ns=mobyupdate_helpers  size=0x1e8
// sig: undefined M1357_00259970(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1357_00259970(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  uVar6 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar7 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
  fVar1 = 10.0;
  uVar8 = (int)*(uint *)(param_1 + 0x18) >> 0x1f;
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x18);
  g_heroPosition.w = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x10);
  if ((int)((uVar6 >> 1 ^ *(uint *)(param_1 + 0x10)) - uVar6) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
    fVar9 = fVar1;
  }
  fVar5 = 1013.0;
  if (1013.0 < fVar9) {
    *(undefined4 *)(param_1 + 0x10) = 0x447d4000;
    fVar9 = fVar5;
  }
  fVar11 = *(float *)(param_1 + 0x14);
  if ((int)((uVar7 >> 1 ^ *(uint *)(param_1 + 0x14)) - uVar7) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x14) = 0x41200000;
    fVar11 = fVar1;
  }
  if (1013.0 < fVar11) {
    *(undefined4 *)(param_1 + 0x14) = 0x447d4000;
    fVar11 = fVar5;
  }
  fVar10 = *(float *)(param_1 + 0x18);
  if ((int)((uVar8 >> 1 ^ *(uint *)(param_1 + 0x18)) - uVar8) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x18) = 0x41200000;
    fVar10 = fVar1;
  }
  if (1013.0 < fVar10) {
    *(undefined4 *)(param_1 + 0x18) = 0x447d4000;
    fVar10 = fVar5;
  }
  pMVar12 = g_heroMobyPtr;
  g_heroPosition.x =
       fVar9 - (*(float *)(param_1 + 0xe0) * fVar4 +
               *(float *)(param_1 + 0xc0) * fVar2 + *(float *)(param_1 + 0xd0) * fVar3);
  g_heroPosition.y =
       fVar11 - (*(float *)(param_1 + 0xe4) * fVar4 +
                *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0xd4) * fVar3);
  g_heroPosition.z =
       fVar10 - (*(float *)(param_1 + 0xe8) * fVar4 +
                *(float *)(param_1 + 200) * fVar2 + *(float *)(param_1 + 0xd8) * fVar3);
  (g_heroMobyPtr->rotation).x = *(f32 *)(param_1 + 0x40);
  (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
  (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
  (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
  g_heroRotation.x = *(float *)(param_1 + 0x40);
  g_heroRotation.y = *(float *)(param_1 + 0x44);
  g_heroRotation.z = *(float *)(param_1 + 0x48);
  g_heroRotation.w = *(float *)(param_1 + 0x4c);
  return;
}



//==== 00259b58  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1357_00259b58(void)
// callers(0): 
// callees(1): 000f1114 mobyfunc::GetBonePosition

void mobyupdate_helpers::M1357_00259b58(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar1 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
  uVar11 = puVar1[3];
  uVar10 = puVar1[2];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  puVar1 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
  uVar14 = puVar1[2];
  uVar13 = puVar1[1];
  uVar12 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar14;
  puVar2[1] = uVar13;
  *puVar2 = uVar12;
  puVar1 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
  puVar1[3] = uVar11;
  puVar1[2] = uVar10;
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  pMVar3 = g_heroMobyPtr;
  *(f32 *)(param_1 + 0x40) = (g_heroMobyPtr->rotation).x;
  *(f32 *)(param_1 + 0x44) = (pMVar3->rotation).y;
  *(f32 *)(param_1 + 0x48) = (pMVar3->rotation).z;
  *(f32 *)(param_1 + 0x4c) = (pMVar3->rotation).w;
  mobyfunc::GetBonePosition(pMVar3,5,param_1 + 0x10);
  return;
}



//==== 00259bf0  ns=mobyupdate_helpers  size=0x784
// sig: undefined M1357_00259bf0(void)
// callers(1): 0025a470 mobyupdate_unsorted::UpdateMoby_1357
// callees(4): 0002f064 camera0::Cam0_SetCamPull; 000fe398 mobyutil::MB_EaseOutPow; 0010a050 mobyutil::AccelDeltAng; 00502578 fastfunc::FastWrapRot

bool mobyupdate_helpers::M1357_00259bf0(undefined8 param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *n;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar24;
  float fVar25;
  float fVar26;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xd0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x1c] = in_LR;
  puVar6[0x18] = in_f30;
  puVar6[0x19] = in_f31;
  puVar6[0x16] = unaff_r30;
  puVar6[0x17] = unaff_r31;
  fVar25 = hero::g_heroPadStick;
  bVar1 = hero::g_heroPadStick == 0.0;
  bVar2 = DAT_0096ba04 == 0.0;
  dVar24 = 0.0;
  puVar6[0x15] = unaff_r29;
  if (bVar1 && bVar2) {
    if ((g_downButtons & R1) != 0) {
      camera0::Cam0_SetCamPull(0);
      hero::g_heroIdealRotZ = GameCamera.rot.radius;
      dVar18 = (double)mobyutil::AccelDeltAng
                                 ((double)GameCamera.rot.radius,
                                  (double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * mobyutil::g_FrameTime),
                                  0x969d78,&DAT_00720000,&DAT_00969e64);
      DAT_00969e68 = (float)dVar18;
    }
  }
  else {
    if ((g_downButtons & R1) == 0) {
      fVar4 = ABS(-DAT_0096ba04);
      fVar3 = ABS(-fVar25);
      *(float *)(puVar6 + 0xe) = -DAT_0096ba04;
      *(float *)((int)puVar6 + 0x74) = -fVar25;
      *(float *)(puVar6 + 0xf) = fVar4 - fVar3;
      uVar15 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
      fVar25 = ABS(*(float *)(puVar6 + 0xe));
      if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
        fVar25 = fVar3;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
      if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar18 = dVar24;
      if (0.0 < fVar25) {
        lVar11 = uVar10 - 0xc0;
        lVar16 = uVar10 - 0x44;
        lVar13 = uVar10 - 0x54;
        lVar17 = 2;
        fVar25 = (fVar5 - fVar25) / (fVar5 + fVar25);
        fVar5 = fVar25 * fVar25;
        *(float *)(puVar6 + 0x11) = fVar25;
        *(float *)(puVar6 + 0x10) = fVar25;
        *(float *)((int)puVar6 + 0x84) = fVar25;
        *(float *)((int)puVar6 + 0x7c) = fVar25;
        fVar25 = fVar5 * fVar5;
        *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
        *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar25;
        *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar25 * fVar5;
        do {
          *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x6c) * fVar25 * fVar25;
          iVar7 = (int)lVar13;
          lVar13 = lVar13 + 8;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar7 + 4) * fVar25 * fVar25;
          lVar16 = lVar16 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar17 = 4;
        lVar16 = uVar10 - 0x54;
        pfVar14 = (float *)&DAT_007358e0;
        lVar11 = lVar12;
        lVar13 = lVar16;
        do {
          fVar25 = *pfVar14;
          fVar5 = pfVar14[1];
          pfVar14 = pfVar14 + 2;
          *(float *)((int)lVar11 + 0x7c) = *(float *)((int)lVar11 + 0x7c) * fVar25;
          lVar11 = lVar11 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
          lVar13 = lVar13 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        lVar11 = 2;
        do {
          iVar7 = (int)lVar12;
          iVar8 = (int)lVar16;
          lVar12 = lVar12 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar18 = (double)((float)(dVar18 + (double)*(float *)(iVar7 + 0x7c)) +
                            *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc))
          ;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        dVar18 = (double)((float)(dVar18 + 0.7853981852531433) * fVar3 + fVar4);
      }
      hero::g_heroIdealRotZ = (float)dVar18;
      dVar18 = (double)fastfunc::FastWrapRot((float)dVar18,GameCamera.rot.radius);
      hero::g_heroIdealRotZ = (float)dVar18;
      dVar18 = (double)mobyutil::AccelDeltAng
                                 (dVar18,(double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * mobyutil::g_FrameTime),
                                  0x969d78,&DAT_00720000,&DAT_00969e64);
      DAT_00969e68 = (float)dVar18;
      fVar3 = (g_heroMobyPtr->transform).v0.y;
      fVar4 = (g_heroMobyPtr->transform).v0.x;
      fVar25 = (g_heroMobyPtr->transform).v0.z;
      dVar21 = (double)*param_2;
      dVar23 = (double)param_2[1];
      dVar20 = (double)SQRT(fVar25 * fVar25 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar25 = param_2[2];
      dVar18 = dVar24;
      dVar19 = dVar24;
      if (dVar20 != dVar24) {
        fVar5 = (float)((double)(DAT_0079be8c * DAT_0071f418 * hero::g_heroPadMagnitude) / dVar20);
        dVar18 = (double)(fVar4 * fVar5);
        dVar19 = (double)(fVar3 * fVar5);
      }
    }
    else {
      camera0::Cam0_SetCamPull(0);
      hero::g_heroIdealRotZ = GameCamera.rot.radius;
      dVar18 = (double)mobyutil::AccelDeltAng
                                 ((double)GameCamera.rot.radius,
                                  (double)(DAT_0079be1c * DAT_0071f40c),
                                  (double)(DAT_0079be20 * DAT_0071f40c),
                                  (double)(DAT_0079be18 * 0.017453292 * mobyutil::g_FrameTime),
                                  0x969d78,&DAT_007a0000,&DAT_00969e64);
      pMVar9 = g_heroMobyPtr;
      DAT_00969e68 = (float)dVar18;
      fVar4 = (g_heroMobyPtr->transform).v1.y;
      fVar5 = (g_heroMobyPtr->transform).v1.x;
      fVar25 = (g_heroMobyPtr->transform).v1.z;
      dVar21 = (double)SQRT(fVar25 * fVar25 + fVar5 * fVar5 + fVar4 * fVar4);
      fVar25 = param_2[2];
      fVar3 = (float)(-(double)(DAT_0079be8c * DAT_0071f418 * hero::g_heroPadStick) / dVar21);
      dVar19 = (double)(fVar4 * fVar3);
      dVar20 = (double)(fVar5 * fVar3);
      dVar18 = dVar24;
      if (dVar24 - dVar21 < 0.0) {
        dVar18 = dVar19;
      }
      dVar22 = dVar24;
      if (dVar24 - dVar21 < 0.0) {
        dVar22 = dVar20;
      }
      if (dVar21 - dVar24 < 0.0) {
        dVar18 = dVar19;
      }
      if (dVar21 - dVar24 < 0.0) {
        dVar22 = dVar20;
      }
      dVar23 = (double)(float)((double)param_2[1] + dVar18);
      dVar21 = (double)(float)((double)*param_2 + dVar22);
      param_2[1] = (float)((double)param_2[1] + dVar18);
      *param_2 = (float)((double)*param_2 + dVar22);
      fVar3 = (pMVar9->transform).v0.y;
      fVar4 = (pMVar9->transform).v0.x;
      fVar5 = (pMVar9->transform).v0.z;
      dVar20 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      dVar18 = dVar24;
      dVar19 = dVar24;
      if (dVar20 != dVar24) {
        fVar5 = (float)(-(double)(DAT_0079be8c * DAT_0071f418 * DAT_0096ba04) / dVar20);
        dVar18 = (double)(fVar4 * fVar5);
        dVar19 = (double)(fVar3 * fVar5);
      }
    }
    param_2[2] = fVar25;
    *param_2 = (float)(dVar21 + dVar18);
    param_2[1] = (float)(dVar23 + dVar19);
  }
  if ((g_buttonsPressedThisFrame & CROSS) == 0) {
    if ((g_downButtons & CROSS) == 0) {
      n = (undefined *)0x0;
      param_2[0xf] = 0.0;
    }
    else {
      n = (undefined *)param_2[0xf];
      if (0 < (int)n) {
        n = &DAT_007a0000;
        dVar18 = -(double)(DAT_0079beb8 * DAT_0071f418 - param_2[0xf]);
        param_2[0xf] = (float)dVar18;
        if (dVar18 < dVar24) {
          n = (undefined *)0x0;
          param_2[0xf] = 0.0;
        }
      }
    }
  }
  else {
    n = &DAT_007a0000;
    param_2[0xf] = DAT_0079beb4 * DAT_0071f418;
  }
  fVar25 = mobyutil::MB_EaseOutPow(DAT_00964a68,(int)n);
  dVar18 = (double)fVar25;
  fVar26 = mobyutil::MB_EaseOutPow(DAT_00964a6c,(int)n);
  fVar25 = DAT_0079be9c * DAT_0071f418 * (float)(dVar18 - (double)fVar26) + param_2[0xf] +
           param_2[2];
  param_2[2] = fVar25;
  fVar5 = (DAT_0079bea4 - 1.0) * DAT_0071f408 + 1.0;
  fVar3 = param_2[1] * fVar5;
  fVar4 = *param_2 * fVar5;
  fVar25 = fVar25 * fVar5;
  *param_2 = fVar4;
  param_2[1] = fVar3;
  param_2[2] = fVar25;
  fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  if (DAT_0079be88 * mobyutil::g_FrameTime < fVar5) {
    fVar5 = (DAT_0079be88 * mobyutil::g_FrameTime) / fVar5;
    fVar4 = fVar4 * fVar5;
    fVar3 = fVar3 * fVar5;
    *param_2 = fVar4;
    param_2[1] = fVar3;
  }
  if (DAT_0079be94 * mobyutil::g_FrameTime < fVar25) {
    fVar25 = fVar25 * ((DAT_0079beac * DAT_0071f408 *
                       (DAT_0079be94 * mobyutil::g_FrameTime - fVar25)) / fVar25 + 1.0);
    param_2[2] = fVar25;
  }
  pMVar9 = g_heroMobyPtr;
  g_heroPosition.x = (g_heroMobyPtr->pos).x + fVar4;
  g_heroPosition.y = (g_heroMobyPtr->pos).y + fVar3;
  g_heroPosition.z = (g_heroMobyPtr->pos).z + fVar25;
  g_heroPosition.w = (g_heroMobyPtr->pos).w;
  (g_heroMobyPtr->pos).x = g_heroPosition.x;
  (pMVar9->pos).y = g_heroPosition.y;
  (pMVar9->pos).z = g_heroPosition.z;
  param_2[2] = -(DAT_0079beb0 * DAT_0071f418 - param_2[2]);
  fVar25 = param_2[0xd] - DAT_0079be54;
  param_2[0xd] = fVar25;
  fVar25 = fVar25 - (DAT_0079be58 * (float)(dVar18 - (double)fVar26) +
                    DAT_0079be5c * hero::g_heroPadMagnitude);
  param_2[0xd] = fVar25;
  bVar1 = (double)fVar25 < dVar24;
  if (bVar1) {
    param_2[0xd] = 0.0;
  }
  return bVar1;
}



//==== 0025a374  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M1357_0025a374(void)
// callers(0): 
// callees(3): 0006a634 draw::DrawRectOverlay; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1357_0025a374(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar2 = (double)fastfunc::FastIntToDouble((longlong)draw::g_FrameBufHeight + -0x40);
  dVar2 = (double)(float)(dVar2 * (double)(*(float *)(iVar1 + 0x34) / DAT_0079be50));
  draw::DrawRectOverlay
            (0x1e,draw::g_FrameBufHeight + -0x1e,draw::g_FrameBufWidth + -0x32,
             draw::g_FrameBufWidth + -0x1e,0x60800000);
  iVar1 = fastfunc::FastDoubleToInt(dVar2);
  draw::DrawRectOverlay
            ((draw::g_FrameBufHeight - iVar1) + -0x20,draw::g_FrameBufHeight + -0x20,
             draw::g_FrameBufWidth + -0x30,draw::g_FrameBufWidth + -0x20,0x40000080);
  return;
}



//==== 0025a470  ns=mobyupdate_unsorted  size=0x864
// sig: undefined UpdateMoby_1357(MobyInstance * moby)
// callers(0): 
// callees(11): 0002f414 camera0::Cam0_SetCamOfsZ; 00059e20 collproc::CollSphere; 0006d720 RegisterFuncForMoby; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00259bf0 mobyupdate_helpers::M1357_00259bf0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 1357 */

void mobyupdate_unsorted::UpdateMoby_1357(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  undefined1 *puVar3;
  f32 fVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  MobyInstance *pMVar9;
  float fVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  pMVar9 = g_heroMobyPtr;
  lVar11 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar3 = (undefined1 *)moby->pVar;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      (moby->pos).z = (moby->pos).z + DAT_0079be60;
      mobyfunc::GetBonePosition(pMVar9,5,puVar3 + 0x10);
      *(float *)(puVar3 + 0x10) = *(float *)(puVar3 + 0x10) - g_heroPosition.x;
      *(float *)(puVar3 + 0x14) = *(float *)(puVar3 + 0x14) - g_heroPosition.y;
      *(float *)(puVar3 + 0x18) = *(float *)(puVar3 + 0x18) - g_heroPosition.z;
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar11,0,0,10);
      }
      moby->state = '\x01';
    }
    else if (bVar1 < 2) {
      dVar14 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).z,
                                  DAT_0079be64 * 0.017453292 * mobyutil::g_FrameTime);
      (moby->rotation).z = (float)dVar14;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar8 * fVar8 + fVar2 * fVar2) < DAT_0079be68) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar11,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else {
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar18 = puVar6[3];
      uVar17 = puVar6[2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar22 = puVar6[3];
      uVar21 = puVar6[2];
      uVar20 = puVar6[1];
      uVar19 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar25 = puVar6[2];
      uVar24 = puVar6[1];
      uVar23 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar25;
      puVar7[1] = uVar24;
      *puVar7 = uVar23;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar18;
      puVar6[2] = uVar17;
      puVar6[1] = uVar16;
      *puVar6 = uVar15;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar22;
      puVar6[2] = uVar21;
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
      pMVar9 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar9->rotation).y;
      (moby->rotation).z = (pMVar9->rotation).z;
      (moby->rotation).w = (pMVar9->rotation).w;
      mobyfunc::GetBonePosition(pMVar9,5,lVar11 + 0x10);
      if ((g_standingOnMoby != 0) && (*(short *)(g_standingOnMoby + 0xa6) == 0x54e)) {
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(lVar11,1,0,10);
        }
        moby->state = '\x04';
      }
      if (((0 < *(int *)(puVar3 + 0x34)) && ((g_buttonsPressedThisFrame & CROSS) != 0)) &&
         (g_framesNotGrounded != 0)) {
        hero::TransitionMovement(0x32,0);
        hero::Hero_TransAnim(20.0,0x13,0);
        g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        *(float *)(puVar3 + 8) = DAT_0079be78 * mobyutil::g_FrameTime;
        *(float *)(puVar3 + 0x3c) = DAT_0079beb4 * DAT_0071f418;
        camera0::Cam0_SetCamOfsZ(0x3fc99999a0000000,0x3f747ae140000000,&DAT_007a0000,0);
        DAT_00fa3f24 = DAT_0071d508;
        DAT_00fa3f28 = DAT_0071d50c;
        DAT_0071d508 = DAT_0079be70;
        DAT_0071d50c = DAT_0079be74;
        *(undefined4 *)(puVar3 + 0x30) = DAT_0079be7c;
        moby->state = '\x06';
      }
    }
  }
  else if (bVar1 < 5) {
    if (3 < bVar1) {
      fVar2 = *(float *)(puVar3 + 0x34) + DAT_0079be4c;
      *(float *)(puVar3 + 0x34) = fVar2;
      if (DAT_0079be50 < fVar2) {
        *(float *)(puVar3 + 0x34) = DAT_0079be50;
      }
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar18 = puVar6[3];
      uVar17 = puVar6[2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar22 = puVar6[3];
      uVar21 = puVar6[2];
      uVar20 = puVar6[1];
      uVar19 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar25 = puVar6[2];
      uVar24 = puVar6[1];
      uVar23 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar25;
      puVar7[1] = uVar24;
      *puVar7 = uVar23;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar18;
      puVar6[2] = uVar17;
      puVar6[1] = uVar16;
      *puVar6 = uVar15;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar22;
      puVar6[2] = uVar21;
      puVar6[1] = uVar20;
      *puVar6 = uVar19;
      pMVar9 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar9->rotation).y;
      (moby->rotation).z = (pMVar9->rotation).z;
      (moby->rotation).w = (pMVar9->rotation).w;
      mobyfunc::GetBonePosition(pMVar9,5,lVar11 + 0x10);
      if ((g_standingOnMoby == 0) || (*(short *)(g_standingOnMoby + 0xa6) != 0x54e)) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar11,0,0,10);
        }
        moby->state = '\x02';
      }
      if ((0 < *(int *)(puVar3 + 0x34)) && ((g_buttonsPressedThisFrame & CROSS) != 0)) {
        hero::TransitionMovement(0x32,0);
        hero::Hero_TransAnim(20.0,0x13,0);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar11,0,0,10);
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        uVar15 = DAT_0079be84;
        *(float *)(puVar3 + 0x3c) = DAT_0079beb4 * DAT_0071f418;
        fVar8 = DAT_0079be80;
        fVar2 = mobyutil::g_FrameTime;
        *(undefined4 *)(puVar3 + 0x30) = uVar15;
        *(float *)(puVar3 + 8) = fVar8 * fVar2;
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 < 7) {
    iVar12 = mobyupdate_helpers::M1357_00259bf0(0x3ff0000000000000,lVar11,puVar3);
    puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
    uVar18 = puVar6[3];
    uVar17 = puVar6[2];
    uVar16 = puVar6[1];
    uVar15 = *puVar6;
    puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
    uVar22 = puVar6[3];
    uVar21 = puVar6[2];
    uVar20 = puVar6[1];
    uVar19 = *puVar6;
    puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
    uVar25 = puVar6[2];
    uVar24 = puVar6[1];
    uVar23 = *puVar6;
    puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
    puVar7[3] = puVar6[3];
    puVar7[2] = uVar25;
    puVar7[1] = uVar24;
    *puVar7 = uVar23;
    puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
    puVar6[3] = uVar18;
    puVar6[2] = uVar17;
    puVar6[1] = uVar16;
    *puVar6 = uVar15;
    puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
    puVar6[3] = uVar22;
    puVar6[2] = uVar21;
    puVar6[1] = uVar20;
    *puVar6 = uVar19;
    pMVar9 = g_heroMobyPtr;
    (moby->rotation).x = (g_heroMobyPtr->rotation).x;
    (moby->rotation).y = (pMVar9->rotation).y;
    (moby->rotation).z = (pMVar9->rotation).z;
    (moby->rotation).w = (pMVar9->rotation).w;
    mobyfunc::GetBonePosition(pMVar9,5,lVar11 + 0x10);
    iVar13 = fastfunc::FastDecTimerS32(puVar3 + 0x30);
    if (((iVar13 != 0) || (iVar12 != 0)) &&
       ((dVar14 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroPosition,0),
        (double)g_heroPosition.z <= dVar14 || (iVar12 != 0)))) {
      *(undefined4 *)(puVar3 + 0x30) = 0;
      hero::TransitionMovement(0,1);
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar11,0,0,10);
      }
      moby->state = '\x02';
    }
    iVar12 = collproc::CollSphere((double)DAT_0079bea8,lVar11 + 0x10,&DAT_007a0000,2,g_heroMobyPtr);
    if (iVar12 != 0) {
      *(float *)(puVar3 + 0x10) = g_heroPosition.x - (moby->pos).x;
      *(float *)(puVar3 + 0x14) = g_heroPosition.y - (moby->pos).y;
      *(float *)(puVar3 + 0x18) = g_heroPosition.z - (moby->pos).z;
      *(float *)(puVar3 + 0x1c) = g_heroPosition.w;
      fVar2 = CollOutput.push.x;
      (moby->pos).x = CollOutput.push.x;
      fVar8 = CollOutput.push.y;
      (moby->pos).y = CollOutput.push.y;
      fVar10 = CollOutput.push.z;
      (moby->pos).z = CollOutput.push.z;
      g_heroPosition.w = CollOutput.push.w;
      (moby->pos).w = CollOutput.push.w;
      g_heroPosition.x = fVar2 + *(float *)(puVar3 + 0x10);
      g_heroPosition.y = fVar8 + *(float *)(puVar3 + 0x14);
      g_heroPosition.z = fVar10 + *(float *)(puVar3 + 0x18);
    }
  }
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar2 = 10.0;
  fVar8 = (moby->pos).x;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).x = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).x = 1013.0;
  }
  fVar4 = (moby->pos).y;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).y;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).y = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).y = 1013.0;
  }
  fVar4 = (moby->pos).z;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).z;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).z = 10.0;
    fVar8 = fVar2;
  }
  if (1013.0 < fVar8) {
    (moby->pos).z = 1013.0;
  }
  if (2 < moby->state) {
    RegisterFuncForMoby(&PTR_M1357_0025a374_0070a0b0,moby);
  }
  return;
}



//==== 0025acd4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1357_0025acd4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1357_0025acd4(void)

{
  DAT_0079bf08 = 0x10000;
  return;
}



//==== 0025ace8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1357_0025ace8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1357_0025ace8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar7 + 0xe8);
  fVar2 = *(float *)(iVar7 + 0xd4);
  fVar3 = *(float *)(iVar7 + 0xc4);
  fVar4 = *(float *)(iVar7 + 0xd8);
  fVar5 = *(float *)(iVar7 + 200);
  uVar6 = *(undefined4 *)(iVar7 + 0xdc);
  *(float *)(param_1 + 0x10) =
       fVar1 * (*(float *)(iVar7 + 0xd0) - *(float *)(iVar7 + 0xc0)) + *(float *)(iVar7 + 0xc0);
  *(float *)(param_1 + 0x14) = fVar1 * (fVar2 - fVar3) + *(float *)(iVar7 + 0xc4);
  fVar2 = *(float *)(iVar7 + 200);
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar4 - fVar5) + fVar2;
  return;
}



//==== 0025ad40  ns=mobyupdate_helpers  size=0x4c
// sig: undefined M1357_0025ad40(void)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage

void mobyupdate_helpers::M1357_0025ad40(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = mobyutil::MB_damage(param_1,0x330000,0);
  if (iVar1 != 0) {
    mobyfunc::DeleteMoby((MobyInstance *)param_1);
  }
  return;
}



//==== 0025add0  ns=mobyupdate_unsorted  size=0x514
// sig: undefined UpdateMoby_136(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00105870 mobyutil::DamageSphereAtPos; 0010675c mobyutil::MB_damage; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00502578 fastfunc::FastWrapRot

/* Moby 136 */

void mobyupdate_unsorted::UpdateMoby_136(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined8 in_r7;
  undefined8 in_r8;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_40 [32];
  
  pvVar8 = moby->pVar;
  iVar10 = mobyutil::MB_damage(moby,0x330000,0);
  if (iVar10 != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    mobyutil::OrganicDelt
              (0.0,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,mobyutil::g_FrameTime * 8.0,
               (float *)((int)pvVar8 + 0xe8),0x720000,(float *)((int)pvVar8 + 0xec));
    pvVar9 = moby->pVar;
    fVar2 = *(float *)((int)pvVar9 + 0xe8);
    fVar3 = *(float *)((int)pvVar9 + 0xd4);
    fVar4 = *(float *)((int)pvVar9 + 0xc4);
    fVar5 = *(float *)((int)pvVar9 + 0xd8);
    fVar6 = *(float *)((int)pvVar9 + 200);
    fVar7 = *(f32 *)((int)pvVar9 + 0xdc);
    (moby->pos).x =
         fVar2 * (*(float *)((int)pvVar9 + 0xd0) - *(float *)((int)pvVar9 + 0xc0)) +
         *(float *)((int)pvVar9 + 0xc0);
    (moby->pos).y = fVar2 * (fVar3 - fVar4) + *(float *)((int)pvVar9 + 0xc4);
    fVar3 = *(float *)((int)pvVar9 + 200);
    (moby->pos).w = fVar7;
    (moby->pos).z = fVar2 * (fVar5 - fVar6) + fVar3;
    mobyutil::DamageSphereAtPos
              (0x3fe3333340000000,0x3ff0000000000000,0x3ff0000000000000,moby,local_40,pvVar9,1,in_r7
               ,in_r8,0,1);
    if (*(int *)((int)pvVar8 + 0xe8) < 1) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x03') {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,mobyutil::g_FrameTime * 8.0,
               (float *)((int)pvVar8 + 0xe8),0x720000,(float *)((int)pvVar8 + 0xec));
    pvVar9 = moby->pVar;
    fVar2 = *(float *)((int)pvVar9 + 0xe8);
    fVar3 = *(float *)((int)pvVar9 + 0xd4);
    fVar4 = *(float *)((int)pvVar9 + 0xc4);
    fVar5 = *(float *)((int)pvVar9 + 0xd8);
    fVar6 = *(float *)((int)pvVar9 + 200);
    fVar7 = *(f32 *)((int)pvVar9 + 0xdc);
    (moby->pos).x =
         fVar2 * (*(float *)((int)pvVar9 + 0xd0) - *(float *)((int)pvVar9 + 0xc0)) +
         *(float *)((int)pvVar9 + 0xc0);
    (moby->pos).y = fVar2 * (fVar3 - fVar4) + *(float *)((int)pvVar9 + 0xc4);
    fVar3 = *(float *)((int)pvVar9 + 200);
    (moby->pos).w = fVar7;
    (moby->pos).z = fVar2 * (fVar5 - fVar6) + fVar3;
    fVar2 = g_heroPosition.y - *(float *)((int)pvVar8 + 0xc4);
    fVar3 = g_heroPosition.x - *(float *)((int)pvVar8 + 0xc0);
    fVar4 = g_heroPosition.z - *(float *)((int)pvVar8 + 200);
    if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) /
        SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) < (float)(longlong)(animationSpeed * 25.5)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x02')) {
      mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (uVar1 == '\x01') {
    iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xe0));
    if ((iVar10 != 0) && (moby->state = '\x02', moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar8 + 0xe0) == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      *(f32 *)((int)pvVar8 + 0xc0) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0xc4) = (moby->pos).y;
      *(f32 *)((int)pvVar8 + 200) = (moby->pos).z;
      *(f32 *)((int)pvVar8 + 0xcc) = (moby->pos).w;
      fVar2 = -1.5707964;
      if (*(int *)((int)pvVar8 + 0xe4) != 0) {
        fVar2 = 1.5707964;
      }
      dVar11 = (double)fastfunc::FastWrapRot(fVar2,(moby->rotation).z);
      fVar2 = (float)(dVar11 + 1.570796251296997);
      dVar13 = (double)(float)(3.141592502593994 - dVar11);
      if (dVar11 - (double)(float)(3.141592502593994 - dVar11) < 0.0) {
        dVar13 = dVar11;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      dVar12 = (double)(float)(-3.141592502593994 - dVar11);
      if ((double)(float)(-3.141592502593994 - dVar11) - dVar13 < 0.0) {
        dVar12 = dVar13;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar13 = (double)(float)(dVar12 * dVar12);
      fVar5 = fVar4 * fVar4;
      dVar14 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar12));
      fVar2 = fVar5 * fVar5 * fVar4;
      dVar11 = (double)(float)(dVar13 * dVar14);
      fVar3 = fVar5 * fVar2;
      *(float *)((int)pvVar8 + 0xd4) =
           ((float)(dVar13 * dVar11) * 2.601887e-06 +
           (float)(dVar11 * -0.0001980741071747616 +
                  (double)(float)(dVar14 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar13 * dVar12) *
                                                 -0.16666656732559204 + dVar12)))) * 2.0 +
           *(float *)((int)pvVar8 + 0xc4);
      *(float *)((int)pvVar8 + 0xd0) =
           (fVar5 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 2.0
           + *(float *)((int)pvVar8 + 0xc0);
      *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 200) + 0.5;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 0025b2e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1373_0025b2e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1373_0025b2e4(void)

{
  DAT_0079bf78 = 0x10000;
  return;
}



//==== 0025b328  ns=mobyupdate_unsorted  size=0x968
// sig: undefined UpdateMoby_a_lot_12(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot

/* Moby 1359
   Moby 1360
   Moby 1361
   Moby 1362
   Moby 1363
   Moby 1364
   Moby 1367
   Moby 1369
   Moby 1372
   Moby 1373 */

void mobyupdate_unsorted::UpdateMoby_a_lot_12(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  f32 *pfVar4;
  f32 handle;
  int iVar5;
  f32 fVar6;
  undefined1 local_60 [16];
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  undefined1 local_40 [16];
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  pfVar4 = (f32 *)moby->pVar;
  if ((pfVar4[6] == -NAN) || (fVar6 = pfVar4[7], fVar6 == -NAN)) {
    mobyfunc::DeleteMoby(moby);
  }
  else if (g_gameMode != GAME_MODE_SCENE) {
    uVar1 = moby->state;
    if (uVar1 == '\x05') {
      if ((moby->pClass->SoundDefs != (void *)0x0) &&
         (iVar5 = sound::IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
        fVar6 = (f32)sound::PlayMobySound(0,4,moby);
        pfVar4[8] = fVar6;
      }
      iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]);
      if (((iVar5 == 0) &&
          (iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[6]),
          iVar5 == 0)) &&
         ((pfVar4[4] == -NAN ||
          (iVar5 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)&MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]),
          iVar5 == 0)))) {
        if (ABS(pfVar4[5]) <= mobyutil::g_FrameTime * 3.0) {
          fVar2 = 0.0;
        }
        else {
          fVar2 = -1.0;
          if (moby->setByGroup != '\0') {
            fVar2 = 1.0;
          }
          fVar2 = -(mobyutil::g_FrameTime * 3.0 * fVar2 - pfVar4[5]);
        }
        MVar3 = moby->oClass;
        pfVar4[5] = fVar2;
        if (((MVar3 == DOOR_055D || MVar3 == DOOR_055C) || (MVar3 == DOOR_0557)) ||
           (MVar3 == DOOR_0559)) {
          fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
        }
        fastfunc::FastVecAdd(&local_30,pfVar4,local_40);
        (moby->pos).x = local_30;
        (moby->pos).y = local_2c;
        (moby->pos).z = local_28;
        (moby->pos).w = local_24;
        if (pfVar4[5] == 0.0) {
          fVar6 = pfVar4[8];
          if (((fVar6 != -NAN) && (sound::g_SoundChannels[(int)fVar6].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar6].state != '\0')) {
            sound::sound_Kill((int)fVar6);
          }
          pfVar4[8] = -NAN;
          moby->state = '\x01';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\x04') {
      handle = pfVar4[8];
      if (((handle != -NAN) && (sound::g_SoundChannels[(int)handle].pMoby == moby)) &&
         (sound::g_SoundChannels[(int)handle].state != '\0')) {
        sound::sound_Kill((int)handle);
        fVar6 = pfVar4[7];
      }
      pfVar4[8] = -NAN;
      iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)fVar6);
      if (((iVar5 == 0) &&
          (iVar5 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[7]),
          iVar5 == 0)) &&
         ((pfVar4[4] == -NAN ||
          (iVar5 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)&MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]),
          iVar5 == 0)))) {
        if ((moby->pClass->SoundDefs != (void *)0x0) &&
           (iVar5 = sound::IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
          fVar6 = (f32)sound::PlayMobySound(0,4,moby);
          pfVar4[8] = fVar6;
        }
        moby->state = '\x05';
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->pClass->SoundDefs != (void *)0x0) &&
         (iVar5 = sound::IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
        fVar6 = (f32)sound::PlayMobySound(0,4,moby);
        pfVar4[8] = fVar6;
      }
      fVar2 = -1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = 1.0;
      }
      MVar3 = moby->oClass;
      pfVar4[5] = mobyutil::g_FrameTime * 3.0 * fVar2 + pfVar4[5];
      if (((MVar3 == DOOR_055D || MVar3 == DOOR_055C) || (MVar3 == DOOR_0557)) ||
         (MVar3 == DOOR_0559)) {
        fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
      }
      fastfunc::FastVecAdd(&local_50,pfVar4,local_60);
      (moby->pos).x = local_50;
      (moby->pos).y = local_4c;
      (moby->pos).z = local_48;
      (moby->pos).w = local_44;
      if (0x40000000 < (uint)ABS(pfVar4[5])) {
        fVar6 = pfVar4[8];
        if (((fVar6 != -NAN) && (sound::g_SoundChannels[(int)fVar6].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar6].state != '\0')) {
          sound::sound_Kill((int)fVar6);
        }
        pfVar4[8] = -NAN;
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x01') {
      fVar6 = pfVar4[8];
      pfVar4[5] = 0.0;
      if (((fVar6 != -NAN) && (sound::g_SoundChannels[(int)fVar6].pMoby == moby)) &&
         (sound::g_SoundChannels[(int)fVar6].state != '\0')) {
        sound::sound_Kill((int)fVar6);
      }
      fVar6 = (moby->rotation).x;
      pfVar4[8] = -NAN;
      if ((((uint)ABS(fVar6) < 0x3f490fdb) || (g_onMagnerail != 0)) &&
         ((iVar5 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]), iVar5 != 0
          || ((pfVar4[4] != -NAN &&
              (iVar5 = mobyutil::MB_IsPntInCuboid
                                 ((Vec4 *)&MobyInstance[(int)pfVar4[4]].pos,(longlong)(int)pfVar4[6]
                                 ), iVar5 != 0)))))) {
        if ((moby->pClass->SoundDefs != (void *)0x0) &&
           (iVar5 = sound::IsMobyPlayingSound(moby,(int)pfVar4[8]), iVar5 == 0)) {
          fVar6 = (f32)sound::PlayMobySound(0,4,moby);
          pfVar4[8] = fVar6;
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 == '\0') {
      MVar3 = moby->oClass;
      if ((((MVar3 == DOOR_0551 || MVar3 == DOOR_0550) || (MVar3 == DOOR_0553)) ||
          (MVar3 == DOOR_0557)) || (MVar3 == DOOR_055D)) {
        moby->setByGroup = '\x01';
      }
      *pfVar4 = (moby->pos).x;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  return;
}



//==== 0025bc90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1373_0025bc90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1373_0025bc90(void)

{
  DAT_0079bfe8 = 0x10000;
  return;
}



//==== 0025bca8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1366(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1366 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1366(MobyInstance *moby)

{
  return moby;
}



//==== 0025bcf8  ns=mobyupdate_unsorted  size=0xaf4
// sig: undefined UpdateMoby_1368(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 00131100 partupd::SpawnPart_60; 00135f90 partupd::SpawnPart_80; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots
// strings: 00a1000c: 'None'

/* Moby 1368 */

void mobyupdate_unsorted::UpdateMoby_1368(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  float fVar13;
  short sVar14;
  float fVar15;
  undefined2 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar27 = uVar17 - 0x180;
  puVar12 = (ulonglong *)lVar27;
  *puVar12 = uVar17;
  puVar12[0x32] = in_LR;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  puVar12[0x2b] = unaff_r31;
  bVar1 = moby->state;
  puVar12[0x2a] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar28 = ZEXT48(pfVar9);
  puVar12[0x29] = unaff_r29;
  puVar12[0x28] = unaff_r28;
  puVar12[0x27] = unaff_r27;
  puVar12[0x26] = unaff_r26;
  if (bVar1 != 0) {
    if (1 < bVar1) {
      return;
    }
    dVar35 = (double)mobyutil::MB_randRangeFloat
                               (mobyutil::g_FrameTime * 2.0,mobyutil::g_FrameTime * 10.0);
    dVar30 = -3.1415927410125732;
    dVar36 = 3.1415927410125732;
    dVar34 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar36 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar36);
    mobyutil::MB_SphericalToVector
              ((float)dVar35,(float)dVar34,(float)dVar36,(float *)(uVar17 - 0xd0));
    uVar37 = 0x4008000000000000;
    mobyutil::MB_randInt(0x4008000000000000,0xff);
    partupd::SpawnPart_60(uVar37,lVar18 + 0x10,uVar17 - 0xd0,0x60ff3020);
    iVar20 = fastfunc::FastDecTimerS32(uVar28 + 0x38);
    if (iVar20 == 0) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  moby->enabled = '\0';
  fVar15 = DAT_00969db4;
  fVar13 = hero::g_heroCGPos;
  fVar2 = pfVar9[5];
  fVar3 = pfVar9[4];
  fVar4 = DAT_00969db4 - fVar2;
  fVar5 = hero::g_heroCGPos - fVar3;
  moby->drawDistance = 0;
  dVar35 = 0.5;
  fVar6 = DAT_00969db8 - 0.5;
  if (SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 8.0) {
    fVar3 = (fVar3 - fVar13) * 0.99 + fVar13;
    fVar2 = (fVar2 - fVar15) * 0.99 + fVar15;
    pfVar9[4] = fVar3;
    pfVar9[5] = fVar2;
    pfVar9[6] = (pfVar9[6] - fVar6) * 0.99 + fVar6;
  }
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).x;
  fVar13 = fVar4 - fVar2;
  fVar6 = fVar5 - fVar3;
  if (4.0 < SQRT(fVar6 * fVar6 + fVar13 * fVar13)) {
    fVar3 = fVar3 - fVar5;
    fVar2 = fVar2 - fVar4;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar12 + 0x1e) = fVar3;
    *(float *)((int)puVar12 + 0xf4) = fVar2;
    *(float *)(puVar12 + 0x1f) = fVar5 - fVar4;
    dVar34 = 0.0;
    fVar2 = (moby->rotation).z;
    dVar36 = 0.7853981852531433;
    uVar26 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x1e));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar6 = ABS(*(float *)((int)puVar12 + 0xf4));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    dVar30 = dVar34;
    if (0.0 < fVar3) {
      lVar19 = uVar17 - 0x170;
      lVar25 = uVar17 - 0x74;
      lVar22 = uVar17 - 0x84;
      lVar29 = 2;
      fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x21) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar3;
      *(float *)((int)puVar12 + 0x104) = fVar3;
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar6;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3;
      *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar19 + 0xfc) = *(float *)((int)lVar19 + 0xec) * fVar3 * fVar3;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar25 = uVar17 - 0x84;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar27;
      lVar22 = lVar25;
      do {
        fVar3 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0xfc) = *(float *)((int)lVar19 + 0xfc) * fVar3;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar19 = 2;
      do {
        iVar20 = (int)lVar27;
        iVar24 = (int)lVar25;
        lVar27 = lVar27 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0xfc)) +
                          *(float *)(iVar24 + 4) + *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar5);
    }
    dVar30 = (double)fastfunc::FastSubRots(fVar2,(float)dVar30);
    if (dVar30 < dVar36) {
      fVar3 = pfVar9[5] - (moby->pos).y;
      fVar4 = pfVar9[4] - (moby->pos).x;
      fVar5 = pfVar9[6] - (moby->pos).z;
      pfVar9[3] = pfVar9[7];
      dVar30 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = (float)((double)pfVar9[0x10] / dVar30);
      dVar36 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar36 = (double)(fVar4 * fVar2);
      }
      dVar31 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar31 = (double)(fVar3 * fVar2);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar30 < 0.0) {
        dVar32 = (double)(fVar5 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar36 = (double)(fVar4 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar31 = (double)(fVar3 * fVar2);
      }
      if (dVar30 - dVar34 < 0.0) {
        dVar32 = (double)(fVar5 * fVar2);
      }
      *pfVar9 = (float)dVar36;
      pfVar9[1] = (float)dVar31;
      pfVar9[2] = (float)dVar32;
    }
  }
  fVar3 = *pfVar9;
  dVar34 = (double)(moby->pos).x;
  fVar2 = (float)(dVar34 + (double)fVar3);
  dVar36 = (double)fVar2;
  fVar4 = pfVar9[1];
  fVar5 = pfVar9[2];
  dVar31 = (double)(moby->pos).y;
  dVar32 = (double)(moby->pos).z;
  *(float *)(puVar12 + 0x10) = fVar2;
  fVar7 = (moby->pos).w;
  dVar33 = (double)(float)(dVar31 + (double)pfVar9[1]);
  lVar27 = uVar17 - 0x100;
  *(float *)((int)puVar12 + 0x84) = (float)(dVar31 + (double)pfVar9[1]);
  fVar2 = pfVar9[2];
  *(f32 *)((int)puVar12 + 0x8c) = fVar7;
  dVar30 = (double)(float)(dVar32 + (double)fVar2);
  *(float *)(puVar12 + 0x12) = (float)((double)fVar3 * -20.0 + dVar34);
  *(float *)((int)puVar12 + 0x94) = (float)((double)fVar4 * -20.0 + dVar31);
  *(float *)(puVar12 + 0x13) = (float)((double)fVar5 * -20.0 + dVar32);
  *(f32 *)((int)puVar12 + 0x9c) = fVar7;
  *(float *)(puVar12 + 0x11) = (float)(dVar32 + (double)fVar2);
  *(f32 *)((int)puVar12 + 0xac) = fVar7;
  *(float *)(puVar12 + 0x14) = (float)((double)(float)(dVar34 - dVar36) * dVar35 + dVar36);
  *(float *)((int)puVar12 + 0xa4) = (float)((double)(float)(dVar31 - dVar33) * dVar35 + dVar33);
  *(float *)(puVar12 + 0x15) = (float)((double)(float)(dVar32 - dVar30) * dVar35 + dVar30);
  uVar26 = (longlong)(int)pfVar9[0xe] + -0x3c >> 0x3f & (longlong)(0x3c - (int)pfVar9[0xe] >> 2);
  partupd::SpawnPart_80(lVar27,1,uVar26);
  partupd::SpawnPart_80(uVar17 - 0xe0,1,uVar26);
  partupd::SpawnPart_80(lVar27,0,uVar26);
  *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) + 0.25;
  uVar37 = 0x4018000000000000;
  mobyutil::SetCollDamIn(0x4018000000000000,uVar17 - 0xc0,lVar18,1);
  *(MOBY_OCLASSES *)((int)puVar12 + 0xda) = moby->oClass;
  fVar7 = *(f32 *)((int)puVar12 + 0x84);
  (moby->pos).x = *(f32 *)(puVar12 + 0x10);
  fVar8 = *(f32 *)(puVar12 + 0x11);
  (moby->pos).y = fVar7;
  fVar7 = *(f32 *)((int)puVar12 + 0x8c);
  (moby->pos).z = fVar8;
  (moby->pos).w = fVar7;
  CollOutput.pMoby = (MobyInstance *)0x0;
  iVar20 = collproc::CollLine(uVar17 - 0xf0,lVar27,0,lVar18,uVar17 - 0xc0);
  if ((iVar20 != 0) || (iVar20 = collproc::CollSphere(dVar35,lVar18 + 0x10), iVar20 != 0)) {
    if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
       (CollOutput.pMoby != (MobyInstance *)pfVar9[0xf])) {
      if (((g_onMagnerail != 0) && (CollOutput.pMoby == g_heroMobyPtr)) &&
         (CHAR_ARRAY_00a1000c._1112_2_ == 0)) {
        CHAR_ARRAY_00a1000c[0x458] = '\0';
        CHAR_ARRAY_00a1000c[0x459] = '\x01';
        puVar12[0x24] = (longlong)update::g_GameFrameCount;
        uVar16 = CHAR_ARRAY_00a1000c._1114_2_;
        puVar12[0x24] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x24] + dVar35));
        iVar20 = *(int *)((int)puVar12 + 0x124);
        if ((int)(uint)(ushort)uVar16 < iVar20 / 600) {
          sVar14 = (short)(iVar20 >> 0x1f);
          CHAR_ARRAY_00a1000c._1114_2_ =
               ((short)(iVar20 / 600) + sVar14) -
               ((short)((short)(iVar20 / 0x2580000) + sVar14) >> 0xf);
        }
        CHAR_ARRAY_00a1000c._1116_4_ =
             CHAR_ARRAY_00a1000c._1116_4_ | 1 << (Level & 0x3f) | 0x80000000;
      }
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      puVar12[0xe] = 0;
      mobyutil::DamageSphereAtPos(0x3fe8000000000000,uVar37,0,lVar18,lVar18 + 0x10,&DAT_0025bcb0,1);
      if (((g_onMagnerail != 0) && (CollOutput.pMoby == g_heroMobyPtr)) &&
         (CHAR_ARRAY_00a1000c._1112_2_ == 0)) {
        CHAR_ARRAY_00a1000c[0x458] = '\0';
        CHAR_ARRAY_00a1000c[0x459] = '\x01';
        puVar12[0x24] = (longlong)update::g_GameFrameCount;
        uVar16 = CHAR_ARRAY_00a1000c._1114_2_;
        puVar12[0x24] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x24] + dVar35));
        iVar20 = *(int *)((int)puVar12 + 0x124);
        if ((int)(uint)(ushort)uVar16 < iVar20 / 600) {
          sVar14 = (short)(iVar20 >> 0x1f);
          CHAR_ARRAY_00a1000c._1114_2_ =
               ((short)(iVar20 / 600) + sVar14) -
               ((short)((short)(iVar20 / 0x2580000) + sVar14) >> 0xf);
        }
        CHAR_ARRAY_00a1000c._1116_4_ =
             CHAR_ARRAY_00a1000c._1116_4_ | 1 << (Level & 0x3f) | 0x80000000;
      }
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x28,0x25bcb0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28)
      ;
      *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
      moby->state = '\x01';
      return;
    }
    if ((CollOutput.pMoby == (MobyInstance *)0x0) &&
       (fVar2 = (moby->pos).y - *(float *)((int)pfVar9[0xf] + 0x14),
       fVar3 = (moby->pos).x - *(float *)((int)pfVar9[0xf] + 0x10),
       10.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      auVar38 = loadVectorLeftIndexed(0x28,0x25bcb0);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28)
      ;
      *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
      moby->state = '\x01';
      return;
    }
  }
  auVar38 = ZEXT416(0xffffffff);
  auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
  auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar38 = loadVectorLeftIndexed(0x30,0x25bcb0);
  auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  fVar2 = pfVar9[0xe];
  auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar38 = vectorMultiplyAddFloatingPoint
                      (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,auVar39
                      );
  auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
  puVar12[0x24] = (longlong)(int)(animationSpeed * 70.5);
  if (*(int *)((int)puVar12 + 0x124) < (int)fVar2) {
    fVar7 = (moby->pos).x;
    uVar10 = (int)fVar7 >> 0x1f;
    iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10;
    if (((iVar20 < 0x445e8001) &&
        (fVar7 = (moby->pos).y, uVar10 = (int)fVar7 >> 0x1f,
        iVar24 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar24 < 0x445e8001)) &&
       (fVar7 = (moby->pos).z, uVar10 = (int)fVar7 >> 0x1f,
       iVar21 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar21 < 0x445e8001)) {
      if (((0x429fffff < iVar20) && (0x429fffff < iVar20)) &&
         ((0x429fffff < iVar24 && (0x429fffff < iVar21)))) goto LAB_0025c634;
    }
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x38,uVar28);
    *(undefined4 *)((uint)(pfVar9 + 0xe) & 0xfffffffc) = uVar11;
  }
LAB_0025c634:
  iVar20 = fastfunc::FastDecTimerS32(uVar28 + 0x38);
  if (((iVar20 == 0) &&
      (fVar7 = (moby->pos).x, uVar10 = (int)fVar7 >> 0x1f,
      iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar20 < 0x44720001)) &&
     ((fVar7 = (moby->pos).y, uVar10 = (int)fVar7 >> 0x1f,
      iVar24 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar24 < 0x44720001 &&
      (fVar7 = (moby->pos).z, uVar10 = (int)fVar7 >> 0x1f,
      iVar21 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10, iVar21 < 0x44720001)))) {
    if ((((0x411fffff < iVar20) && (0x411fffff < iVar20)) && (0x411fffff < iVar24)) &&
       (0x411fffff < iVar21)) {
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 0025c7f8  ns=Global  size=0x50c
// sig: undefined FUN_0025c7f8(void)
// callers(1): 003516d0 mobyupdate_unsorted::UpdateMoby_347
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_0025c7f8(double param_1,float param_2,undefined8 param_3,f32 *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  MobyInstance *pMVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0xf0;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x20] = in_LR;
  puVar9[0x1d] = in_f31;
  puVar9[0x1a] = unaff_r29;
  puVar9[0x1c] = unaff_r31;
  puVar9[0x1b] = unaff_r30;
  pMVar15 = mobyfunc::CreateMoby(DOOR_0550|BLARG_HEAVY_INTERCEPTOR_0008);
  if (pMVar15 != (MobyInstance *)0x0) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    uVar16 = *(undefined8 *)((int)param_2 + 0x38);
    pMVar15->state = '\0';
    pMVar15->color = (int)((ulonglong)uVar16 >> 0x20);
    pMVar15->light = (int)uVar16;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    (pMVar15->pos).x = *param_4;
    pfVar22 = (float *)pMVar15->pVar;
    (pMVar15->pos).y = param_4[1];
    (pMVar15->pos).z = param_4[2];
    (pMVar15->pos).w = param_4[3];
    pfVar22[0x10] = (float)param_1;
    fVar1 = *param_5;
    pfVar22[4] = fVar1;
    fVar2 = param_5[1];
    pfVar22[5] = fVar2;
    fVar3 = param_5[2];
    pfVar22[6] = fVar3;
    fVar4 = param_5[3];
    pfVar22[7] = fVar4;
    auVar25 = loadVectorLeftIndexed(in_LR,0x25c7ec);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x38,
                       ZEXT48(pfVar22));
    *(undefined4 *)((uint)(pfVar22 + 0xe) & 0xfffffffc) = uVar8;
    pfVar22[0xf] = param_2;
    fVar2 = fVar2 - (pMVar15->pos).y;
    fVar1 = fVar1 - (pMVar15->pos).x;
    fVar3 = fVar3 - (pMVar15->pos).z;
    fVar12 = 0.0;
    pfVar22[3] = fVar4;
    dVar24 = (double)SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar4 = (float)(param_1 / dVar24);
    fVar6 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar6 = fVar1 * fVar4;
    }
    fVar5 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar5 = fVar2 * fVar4;
    }
    fVar7 = fVar12;
    if (0.0 - dVar24 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar6 = fVar1 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar5 = fVar2 * fVar4;
    }
    if (dVar24 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    *pfVar22 = fVar6;
    pfVar22[1] = fVar5;
    pfVar22[2] = fVar7;
    fVar4 = (pMVar15->pos).x;
    fVar1 = (pMVar15->pos).y;
    fVar2 = *param_5 - fVar4;
    fVar3 = param_5[1] - fVar1;
    fVar5 = ABS(fVar2);
    fVar7 = ABS(fVar3);
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar5 - fVar7;
    fVar2 = (pMVar15->pos).z;
    uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar6 = ABS(*(float *)((int)puVar9 + 0x7c));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar13 = fVar12;
    if (0.0 < fVar6) {
      lVar21 = uVar14 - 0xe0;
      lVar20 = uVar14 - 0x48;
      lVar18 = uVar14 - 0x38;
      lVar23 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar6;
      *(float *)((int)puVar9 + 0xac) = fVar6;
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)(puVar9 + 0x15) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar7;
      *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar6;
      *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar21 + 0xa8) = *(float *)((int)lVar21 + 0x98) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x48;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar21;
      lVar20 = lVar17;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xa8) = *(float *)((int)lVar20 + 0xa8) * fVar6;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar17;
      fVar6 = fVar12;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar13 = (fVar6 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar15->rotation).z = fVar13;
    fVar1 = fVar1 - param_5[1];
    fVar4 = fVar4 - *param_5;
    fVar2 = param_5[2] - fVar2;
    fVar4 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
    *(float *)((int)puVar9 + 0x74) = fVar2;
    fVar2 = ABS(fVar2);
    fVar1 = ABS(fVar4);
    *(float *)(puVar9 + 0xe) = fVar4;
    *(float *)(puVar9 + 0xf) = fVar1 - fVar2;
    uVar19 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar3 = ABS(*(float *)((int)puVar9 + 0x74));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar21 = uVar14 - 0xe0;
      lVar18 = uVar14 - 0x58;
      lVar20 = uVar14 - 0x68;
      lVar23 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x94) = fVar4;
      *(float *)((int)puVar9 + 0x8c) = fVar4;
      *(float *)(puVar9 + 0x12) = fVar4;
      *(float *)(puVar9 + 0x11) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar3;
      *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4;
      *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x88) = *(float *)((int)lVar21 + 0x78) * fVar4 * fVar4;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x68;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar21;
      lVar20 = lVar17;
      do {
        fVar4 = *pfVar22;
        fVar3 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0x88) = *(float *)((int)lVar20 + 0x88) * fVar4;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar12 = fVar12 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) +
                 *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar12 = (fVar12 + 0.7853982) * fVar2 + fVar1;
    }
    (pMVar15->rotation).y = -fVar12;
  }
  return;
}



//==== 0025cd04  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1371_0025cd04(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1371_0025cd04(void)

{
  DAT_0079c058 = 0x10000;
  return;
}



//==== 0025cd18  ns=Global  size=0xe0
// sig: undefined FUN_0025cd18(void)
// callers(2): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00301d00 mobyupdate_unsorted::UpdateMoby_233
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00500250 fastfunc::FastMemSetZero

MobyInstance * FUN_0025cd18(MobyInstance *param_1)

{
  f32 fVar1;
  void *pvVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(BLARG_COMMANDER_055B);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    (pMVar3->pos).x = (param_1->pos).x;
    (pMVar3->pos).y = (param_1->pos).y;
    pvVar2 = pMVar3->pVar;
    (pMVar3->pos).z = (param_1->pos).z;
    fVar1 = (param_1->pos).w;
    pMVar3->drawDistance = 0x7f;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = (param_1->rotation).x;
    (pMVar3->rotation).y = (param_1->rotation).y;
    fVar1 = (param_1->rotation).z;
    pMVar3->field80_0xb8 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = (param_1->rotation).w;
    fastfunc::FastMemSetZero(pvVar2,0x20);
    *(int *)((int)pvVar2 + 0x10) = (int)pvVar2 + 0x20;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0025ce40  ns=Global  size=0x278
// sig: undefined FUN_0025ce40(void)
// callers(2): 0001cb80 mobyupdate_unsorted::UpdateMoby_326; 00301d00 mobyupdate_unsorted::UpdateMoby_233
// callees(7): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

void FUN_0025ce40(undefined8 param_1,MobyInstance *param_2)

{
  float fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_50 [8];
  
  pvVar3 = param_2->pVar;
  iVar9 = mobyutil::MB_randInt(3);
  if (iVar9 == 0) {
    sound::PlayMobySound(1,0x20,param_2);
  }
  *(undefined4 *)((int)pvVar3 + 0x48) = 0x3f333333;
  uVar10 = fastfunc::FastDoubleToInt(0x4086666660000000);
  MVar2 = param_2->modeBits;
  *(undefined4 *)((int)pvVar3 + 0x40) = uVar10;
  *(undefined4 *)((int)pvVar3 + 0x6c) = 0;
  param_2->updateDistance = -1;
  param_2->modeBits =
       MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|DISABLED);
  dVar11 = (double)fastfunc::FastWrapRot((param_2->rotation).z,3.1415927);
  fVar8 = DAT_0071f418;
  fVar4 = DAT_0071f418 * 40.0;
  fVar1 = (float)(dVar11 + 1.570796251296997);
  *(float *)((int)pvVar3 + 0x30) = fVar4;
  *(float *)((int)pvVar3 + 0x34) = fVar8 * 100.0;
  dVar16 = 2.0;
  dVar13 = (double)(float)(3.141592502593994 - dVar11);
  if (dVar11 - (double)(float)(3.141592502593994 - dVar11) < 0.0) {
    dVar13 = dVar11;
  }
  *(undefined1 *)((int)pvVar3 + 0x5d) = 0;
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  dVar12 = (double)(float)(-3.141592502593994 - dVar11);
  if ((double)(float)(-3.141592502593994 - dVar11) - dVar13 < 0.0) {
    dVar12 = dVar13;
  }
  *(float *)((int)pvVar3 + 0x3c) = SQRT(fVar4 * 4.0);
  *(undefined4 *)((int)pvVar3 + 0x44) = 1;
  fVar4 = (SQRT(fVar4 * 4.0) * 2.0) / fVar4;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  dVar13 = (double)(float)(dVar12 * dVar12);
  fVar7 = fVar6 * fVar6;
  fVar1 = fVar7 * fVar7 * fVar6;
  dVar15 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar12));
  fVar5 = fVar7 * fVar1;
  dVar14 = (double)(float)(dVar13 * dVar15);
  *(float *)((int)pvVar3 + 0x38) = fVar8 * 100.0 * 0.5 * fVar4 + 3.0 / fVar4;
  mobyutil::MB_VecAtan2Angles
            (CONCAT44(fVar7 * fVar5 * 2.601887e-06 +
                      fVar5 * -0.0001980741 +
                      fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6,
                      (float)(dVar13 * dVar14) * 2.601887e-06 +
                      (float)(dVar14 * -0.0001980741071747616 +
                             (double)(float)(dVar15 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar13 * dVar12) *
                                                            -0.16666656732559204 + dVar12)))),
             0x3f80000045afdf66,local_50,(int)pvVar3 + 0x38,(int)pvVar3 + 0x3c);
  mobyutil::MB_StartKick((double)(float)dVar11,param_2,(int)pvVar3 + 0x20);
  MVar2 = param_2->modeBits;
  *(undefined4 *)((int)pvVar3 + 0x70) = 0xbf800000;
  *(undefined4 *)((int)pvVar3 + 0x74) = 0xbf800000;
  dVar13 = (double)mobyutil::g_FrameTime;
  param_2->modeBits =
       MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  *(float *)((int)pvVar3 + 0x6c) = (float)(dVar13 * dVar16);
  mobyutil::MB_SetAnimation(param_2,1,0,0);
  return;
}



//==== 0025d0d0  ns=mobyupdate_unsorted  size=0x190
// sig: undefined UpdateMoby_1371(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00502578 fastfunc::FastWrapRot

/* Moby 1371 */

void mobyupdate_unsorted::UpdateMoby_1371(MobyInstance *moby)

{
  MobyModeBit MVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined1 local_40 [24];
  
  pvVar2 = moby->pVar;
  if (moby->animationId == '\x01') {
    uVar4 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar2 + 0x20));
    dVar6 = 4.363323211669922;
    dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 4.363323);
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)fastfunc::FastWrapRot
                              ((moby->rotation).y,(float)((double)mobyutil::g_FrameTime * dVar6));
    MVar1 = moby->modeBits;
    (moby->rotation).y = (float)dVar5;
    moby->modeBits =
         MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    if ((uVar4 & 0x61) == 0) {
      fVar3 = (moby->pos).z;
      uVar4 = (int)fVar3 >> 0x1f;
      if ((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < 0x40a00000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,moby,ZEXT48(pvVar2) + 0x20,local_40,&DAT_0025d0b8,0,5,2,4);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0025d260  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1377_0025d260(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1377_0025d260(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 0025d3a8  ns=mobyupdate_unsorted  size=0xb70
// sig: undefined UpdateMoby_1377(MobyInstance * moby)
// callers(0): 
// callees(18): 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00110b70 mobyutil::MB_IsPntInCuboid; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 1377 */

void mobyupdate_unsorted::UpdateMoby_1377(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  gameMode_t gVar12;
  ulonglong uVar13;
  int iVar17;
  ulonglong uVar14;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  short sVar21;
  float *pfVar20;
  longlong lVar19;
  longlong lVar22;
  ulonglong unaff_r25;
  undefined4 *puVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  puVar9[0x23] = unaff_r28;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  puVar9[0x20] = unaff_r25;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar23[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar23[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    FUN_004d3720(moby,uVar24 + 0x20);
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x41a00000;
    moby->updateDistance = -1;
  }
  else if (bVar1 < 2) {
    if ((((g_framesNotGrounded == 0) &&
         (hero::g_heroStateType != 0x16 && hero::g_heroStateType != 0xf)) &&
        (iVar17 = mobyutil::MB_IsPntInCuboid
                            (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x160)), iVar17 != 0))
       && (iVar17 = FUN_004d3870(moby,uVar24 + 0x20), iVar17 != 0)) {
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    hero::Hero_Warp((float *)&DAT_0079c080,(float *)&DAT_0079c090,0,1);
    help::Help_QueueMessage(STR_THE_GADGETRON_MAP_O_MATIC_CAN_0x3E82,0x84);
    mobyutil::MB_UnlockItem(0x21,1);
    mobyfunc::SetLevelFlag(moby->levelFlagIdx);
    respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
    memcard::memcard_Save(0,-1);
    moby->state = '\x03';
  }
  if ((MiscLevelFlags.field112_0x70 == 0) &&
     (iVar17 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x164)),
     iVar17 != 0)) {
    MiscLevelFlags.field112_0x70 = 1;
  }
  if ((MiscLevelFlags.field113_0x71 == 0) && (hero::g_heroStateType == 0xf)) {
    MiscLevelFlags.field113_0x71 = 1;
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0025de70;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0025d91c:
    if (*(int *)((int)pvVar8 + 0x168) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x168) = 0;
      *(float *)((int)pvVar8 + 0x170) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x17c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x150;
      lVar19 = uVar13 - 0x8c;
      lVar22 = uVar13 - 0x7c;
      lVar25 = 2;
      fVar5 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar13 - 0x8c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        iVar11 = (int)lVar22;
        lVar15 = lVar15 + 0x10;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_0025d91c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar24 + 0x168);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x18,0x25d354);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x168,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x168U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x16c);
  if (iVar17 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x16c) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar8 + 0x170));
    *(float *)((int)pvVar8 + 0x170) = *(float *)((int)pvVar8 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x174) = *(float *)((int)pvVar8 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x178) = *(float *)((int)pvVar8 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x168) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x170);
    fVar3 = *(float *)((int)pvVar8 + 0x174);
    fVar5 = *(float *)((int)pvVar8 + 0x178);
  }
  else {
    dVar33 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar32 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar30 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.5));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar32) - ABS(dVar30));
  dVar31 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar28 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = dVar31;
  if (0.0 < dVar26) {
    lVar15 = uVar13 - 0x150;
    lVar22 = uVar13 - 0x9c;
    lVar19 = uVar13 - 0xac;
    lVar25 = 2;
    fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xac;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar19 = 2;
    lVar15 = lVar16;
    dVar26 = dVar31;
    do {
      iVar17 = (int)lVar15;
      iVar11 = (int)lVar22;
      lVar15 = lVar15 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar28 = (double)fastfunc::FastDiffRots(dVar27,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar29;
  fVar2 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar30 * dVar30)));
  dVar30 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar30 - ABS(dVar29));
  uVar14 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar26 = ABS(dVar29);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x150;
    lVar19 = uVar13 - 0xcc;
    lVar22 = uVar13 - 0xbc;
    lVar25 = 2;
    fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xcc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar11 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar31 = -dVar31;
  dVar26 = 1.5707963705062866;
  if ((dVar28 <= 1.5707963705062866) && (dVar26 = dVar28, dVar28 < -1.5707963705062866)) {
    dVar26 = -1.5707963705062866;
  }
  dVar29 = 0.5235987901687622;
  if ((dVar31 <= 0.5235987901687622) && (dVar29 = dVar31, dVar31 < -0.5235987901687622)) {
    dVar29 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 200) = (float)(dVar26 * 0.699999988079071);
  *(float *)((int)pvVar8 + 0xc4) = (float)dVar29;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar26 * 0.30000001192092896);
LAB_0025de70:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x60,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xe0,2);
  return;
}



//==== 0025df18  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1378_0025df18(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1378_0025df18(void)

{
  DAT_0079c0ec = 0x10000;
  return;
}



//==== 0025df48  ns=mobyupdate_unsorted  size=0x22c
// sig: undefined UpdateMoby_1378(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 005010c0 fastfunc::FastNormalizeRMtx4

/* Moby 1378 */

void mobyupdate_unsorted::UpdateMoby_1378(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  
  if (moby->state == 0) {
    moby->enabled = '\0';
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (moby->state < 2) {
    fVar1 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar4 = fVar1 - g_heroPosition.y;
    fVar5 = fVar2 - g_heroPosition.x;
    fVar3 = (moby->pos).z;
    fVar6 = fVar3 - g_heroPosition.z;
    dVar11 = 8.0;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 8.0) {
      dVar10 = (double)(DAT_00969db4 - fVar1);
      dVar8 = (double)DAT_00969dbc;
      dVar9 = (double)(hero::g_heroCGPos - fVar2);
      dVar7 = (double)(DAT_00969db8 - fVar3);
      fastfunc::FastNormalizeRMtx4(&local_80,(longlong)(int)moby + 0xc0);
      fVar1 = (float)((double)local_50 * dVar8 +
                     (double)(float)((double)local_60 * dVar7 +
                                    (double)(float)((double)local_80 * dVar9 +
                                                   (double)(float)((double)local_70 * dVar10))));
      fVar2 = (float)((double)local_4c * dVar8 +
                     (double)(float)((double)local_5c * dVar7 +
                                    (double)(float)((double)local_7c * dVar9 +
                                                   (double)(float)((double)local_6c * dVar10))));
      dVar7 = (double)(float)((double)local_48 * dVar8 +
                             (double)(float)((double)local_58 * dVar7 +
                                            (double)(float)((double)local_78 * dVar9 +
                                                           (double)(float)((double)local_68 * dVar10
                                                                          ))));
      if ((((fVar1 <= -5.0) || (5.0 <= fVar1)) || (dVar7 <= 0.0)) || (dVar11 <= dVar7)) {
        if (0.0 < fVar2) {
          DAT_0096bfab = 0;
        }
      }
      else {
        DAT_0096bfab = fVar2 < 0.5;
      }
    }
    RegisterFuncForMoby(&PTR_M1379_0025e1a8_0070a150,moby);
  }
  return;
}



//==== 0025e1a8  ns=mobyupd::update1379  size=0x5e0
// sig: undefined M1379_0025e1a8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupd::update1379::M1379_0025e1a8(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r17;
  float *pfVar19;
  ulonglong unaff_r18;
  int iVar20;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  float *pfVar21;
  ulonglong unaff_r24;
  int *piVar22;
  ulonglong unaff_r25;
  float *pfVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar26;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f21;
  double dVar33;
  ulonglong in_f22;
  double dVar34;
  ulonglong in_f23;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x2a0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar7;
  puVar6[0x56] = in_LR;
  puVar6[0x49] = in_f21;
  puVar6[0x4a] = in_f22;
  puVar6[0x4b] = in_f23;
  puVar6[0x4c] = in_f24;
  puVar6[0x4d] = in_f25;
  puVar6[0x4e] = in_f26;
  puVar6[0x4f] = in_f27;
  puVar6[0x50] = in_f28;
  puVar6[0x51] = in_f29;
  puVar6[0x52] = in_f30;
  puVar6[0x53] = in_f31;
  puVar6[0x47] = unaff_r30;
  puVar6[0x48] = unaff_r31;
  puVar6[0x46] = unaff_r29;
  puVar6[0x45] = unaff_r28;
  puVar6[0x44] = unaff_r27;
  puVar6[0x43] = unaff_r26;
  puVar6[0x42] = unaff_r25;
  puVar6[0x41] = unaff_r24;
  puVar6[0x40] = unaff_r23;
  puVar6[0x3f] = unaff_r22;
  puVar6[0x3e] = unaff_r21;
  puVar6[0x3d] = unaff_r20;
  puVar6[0x3c] = unaff_r19;
  puVar6[0x3b] = unaff_r18;
  puVar6[0x3a] = unaff_r17;
  pfVar19 = *(float **)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar7 - 0x230,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar8 = draw::GetEffectTex(0x2c);
  puVar6[0x25] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar8;
  uVar8 = draw::GetEffectTex(0x2c);
  puVar6[0x37] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x36] = uVar8;
  *(undefined4 *)((int)puVar6 + 0x18c) = 0;
  *(undefined4 *)((int)puVar6 + 0x184) = 0;
  lVar12 = uVar7 - 0x1f0;
  puVar14 = &DAT_0079c240;
  lVar15 = uVar7 - 0x160;
  puVar17 = &DAT_0079c200;
  lVar27 = 4;
  lVar9 = lVar1;
  do {
    puVar13 = (undefined4 *)lVar12;
    *puVar13 = *puVar14;
    puVar13[1] = puVar14[1];
    puVar13[2] = puVar14[2];
    puVar13[3] = puVar14[3];
    puVar13 = (undefined4 *)lVar15;
    *puVar13 = *puVar17;
    puVar13[1] = puVar17[1];
    puVar13[2] = puVar17[2];
    puVar13[3] = puVar17[3];
    iVar20 = (int)lVar9;
    lVar12 = lVar12 + 0x10;
    puVar14 = puVar14 + 4;
    lVar15 = lVar15 + 0x10;
    puVar17 = puVar17 + 4;
    *(float *)(iVar20 + 0xb0) = *(float *)(iVar20 + 0xb0) * *pfVar19;
    *(float *)(iVar20 + 0x140) = *(float *)(iVar20 + 0x140) * *pfVar19;
    *(float *)(iVar20 + 0xb8) = *(float *)(iVar20 + 0xb8) * pfVar19[1];
    *(float *)(iVar20 + 0x148) = *(float *)(iVar20 + 0x148) * pfVar19[1];
    lVar9 = lVar9 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  if (0 < DAT_0079c110) {
    iVar24 = 0;
    uVar8 = 0;
    iVar20 = 0;
    do {
      iVar26 = (int)((uVar8 & 1) << 2);
      uVar10 = idol_draw::PackCmd(*(undefined4 *)((int)&DAT_0079c1b4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1bc + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1c4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1cc + iVar26),0x80);
      uVar2 = *(undefined4 *)((int)&DAT_0079c1b4 + iVar26);
      puVar6[0x27] = uVar10;
      uVar10 = idol_draw::PackCmd(uVar2,*(undefined4 *)((int)&DAT_0079c1bc + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1c4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1cc + iVar26),0x80);
      puVar6[0x39] = uVar10;
      uVar2 = *(undefined4 *)((int)&DAT_0079c114 + iVar24);
      iVar26 = 0;
      *(undefined4 *)(puVar6 + 0x31) = uVar2;
      *(undefined4 *)(puVar6 + 0x30) = uVar2;
      *(undefined4 *)((int)puVar6 + 0xfc) = uVar2;
      *(undefined4 *)(puVar6 + 0x1f) = uVar2;
      pfVar19 = (float *)&DAT_0079c1d4;
      *(undefined4 *)((int)puVar6 + 0xf4) = uVar2;
      *(undefined4 *)(puVar6 + 0x1e) = uVar2;
      dVar43 = 360.0;
      dVar42 = 180.0;
      dVar41 = 0.01745329238474369;
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar34 = 2.601886990305502e-06;
      dVar33 = 0.125;
      lVar9 = lVar1;
      do {
        iVar25 = 0;
        pfVar23 = (float *)((int)&DAT_0079c134 + iVar20);
        piVar22 = (int *)((int)&DAT_0079c174 + iVar20);
        lVar12 = lVar9;
        pfVar21 = pfVar19;
        do {
          iVar11 = fastfunc::FastDoubleToInt((double)(float)((double)*pfVar23 * dVar43));
          dVar29 = (double)fastfunc::FastIntToDouble
                                     (DAT_0159c330 - (DAT_0159c330 / iVar11) * iVar11);
          fVar4 = *pfVar21;
          dVar29 = (double)(float)((double)(float)(dVar29 / (double)*pfVar23) - dVar42);
          if (*piVar22 == 0) {
            dVar30 = (double)(float)(dVar29 * dVar41);
            dVar29 = (double)(float)(dVar39 - dVar30);
            if (dVar30 - (double)(float)(dVar39 - dVar30) < 0.0) {
              dVar29 = dVar30;
            }
            dVar31 = (double)(float)(dVar38 - dVar30);
            if ((double)(float)(dVar38 - dVar30) - dVar29 < 0.0) {
              dVar31 = dVar29;
            }
          }
          else {
            dVar30 = (double)(float)(dVar29 * dVar41 + dVar40);
            dVar29 = (double)(float)(dVar39 - dVar30);
            if (dVar30 - (double)(float)(dVar39 - dVar30) < 0.0) {
              dVar29 = dVar30;
            }
            dVar31 = (double)(float)(dVar38 - dVar30);
            if ((double)(float)(dVar38 - dVar30) - dVar29 < 0.0) {
              dVar31 = dVar29;
            }
          }
          dVar29 = (double)(float)(dVar31 * dVar31);
          iVar25 = iVar25 + 1;
          pfVar23 = pfVar23 + 1;
          piVar22 = piVar22 + 1;
          pfVar21 = pfVar21 + 1;
          dVar32 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar31));
          dVar30 = (double)(float)(dVar29 * dVar32);
          *(float *)((int)lVar12 + 0x100) =
               (float)((double)(float)((double)(float)(dVar29 * dVar30) * dVar34 +
                                      (double)(float)(dVar30 * dVar35 +
                                                     (double)(float)(dVar32 * dVar36 +
                                                                    (double)(float)((double)(float)(
                                                  dVar29 * dVar31) * dVar37 + dVar31)))) * dVar33 +
                      (double)fVar4);
          lVar12 = lVar12 + 4;
        } while (iVar25 < 2);
        iVar26 = iVar26 + 1;
        pfVar19 = pfVar19 + 2;
        lVar9 = lVar9 + 8;
      } while (iVar26 < 4);
      auVar44 = ZEXT416(0);
      auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = loadVectorLeftIndexed(0x28,0x25e174);
      lVar28 = 2;
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      lVar27 = uVar7 - 0x110;
      lVar15 = uVar7 - 0x198;
      lVar9 = uVar7 - 0x108;
      lVar16 = uVar7 - 0x188;
      lVar12 = uVar7 - 0xf8;
      lVar18 = uVar7 - 0x100;
      do {
        auVar47 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar49 = loadVectorLeftIndexed(in_LR,lVar15);
        auVar51 = loadVectorLeftIndexed(in_LR,lVar16);
        lVar15 = lVar15 + 4;
        auVar50 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        lVar16 = lVar16 + 4;
        auVar5 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48._0_4_ = auVar45._0_4_ + 1;
        auVar48._8_8_ = auVar45._8_8_;
        auVar48._4_4_ = auVar45._4_4_ + 1;
        auVar46._0_8_ = auVar48._0_8_;
        auVar46._12_4_ = auVar45._12_4_;
        auVar46._8_4_ = auVar45._8_4_ + 1;
        auVar45._0_12_ = auVar46._0_12_;
        auVar45._12_4_ = auVar46._12_4_ + 1;
        uVar2 = storeVectorElementWordIndexed
                          (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar27);
        *(undefined4 *)lVar27 = uVar2;
        lVar27 = lVar27 + 4;
        auVar50 = vectorMultiplyAddFloatingPoint(auVar47,auVar44,auVar49);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar44,auVar51);
        auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar9);
        *(undefined4 *)lVar9 = uVar2;
        uVar2 = storeVectorElementWordIndexed
                          (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0,lVar18);
        *(undefined4 *)lVar18 = uVar2;
        uVar2 = storeVectorElementWordIndexed
                          (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,lVar12);
        *(undefined4 *)lVar12 = uVar2;
        lVar9 = lVar9 + 4;
        lVar12 = lVar12 + 4;
        lVar18 = lVar18 + 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      draw::FastDrawQuad(uVar7 - 0x1f0,uVar7 - 0x230,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar7 - 0x160,uVar7 - 0x230,0,EffectTexHeaders,9);
      lVar12 = 4;
      lVar9 = lVar1;
      do {
        iVar26 = (int)lVar9;
        *(float *)(iVar26 + 0xb4) = *(float *)(iVar26 + 0xb4) + 0.1;
        *(float *)(iVar26 + 0x144) = *(float *)(iVar26 + 0x144) + 0.1;
        lVar9 = lVar9 + 0x10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      uVar8 = uVar8 + 1;
      iVar20 = iVar20 + 8;
      iVar24 = iVar24 + 4;
    } while ((int)uVar8 < DAT_0079c110);
  }
  return;
}



//==== 0025e788  ns=mobyupd::update1379  size=0x14
// sig: undefined M1379_0025e788(void)
// callers(0): 
// callees(0): 

void mobyupd::update1379::M1379_0025e788(void)

{
  DAT_0079c2cc = 0x10000;
  return;
}



//==== 0025e7a0  ns=mobyupd::update1379  size=0x4
// sig: undefined M1379_0025e7a0(void)
// callers(0): 
// callees(0): 

void mobyupd::update1379::M1379_0025e7a0(void)

{
  return;
}



//==== 0025e7a4  ns=mobyupd::update1379  size=0x2a8
// sig: undefined M1379_DrawShapeScaled(void)
// callers(1): 002611a0 mobyupd::update1379::M1379_Hud_Draw
// callees(3): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs

void mobyupd::update1379::M1379_DrawShapeScaled
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  iVar3 = EffectTexHeaders;
  auVar12._0_4_ = (float)param_2;
  auVar12._4_4_ = (float)param_2;
  auVar12._8_4_ = (float)param_2;
  auVar12._12_4_ = (float)param_2;
  auVar11._0_4_ = (float)param_1;
  auVar11._4_4_ = (float)param_1;
  auVar11._8_4_ = (float)param_1;
  auVar11._12_4_ = (float)param_1;
  uVar4 = 0x70;
  auVar10._0_4_ = (float)param_3;
  auVar10._4_4_ = (float)param_3;
  auVar10._8_4_ = (float)param_3;
  auVar10._12_4_ = (float)param_3;
  iVar5 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}



//==== 0025ea4c  ns=mobyupd::update1379  size=0x314
// sig: undefined M1379_DrawShapeRotated(void)
// callers(2): 0025f120 mobyupd::update1379::M1379_0025f120; 0025fbd0 mobyupd::update1379::M1379_ScanTargets
// callees(4): 000685c4 draw::GetEffectTex; 004d6948 idol_draw::ResetPassState; 004d6d00 idol_draw::SetTextureUnitRegs; 00500ca4 fastfunc::FastEulerToMtx1

void mobyupd::update1379::M1379_DrawShapeRotated
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = draw::GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  fastfunc::FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}



//==== 0025ed68  ns=mobyupd::update1379  size=0x84
// sig: undefined M1379_0025ed68(void)
// callers(0): 
// callees(1): 0006e740 draw::Sprite_DrawRotated

void mobyupd::update1379::M1379_0025ed68
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}



//==== 0025edf8  ns=mobyupd::update1379  size=0x228
// sig: undefined M1379_0025edf8(void)
// callers(1): 002611a0 mobyupd::update1379::M1379_Hud_Draw
// callees(3): 000685c4 draw::GetEffectTex; 0006e740 draw::Sprite_DrawRotated; 00502578 fastfunc::FastWrapRot

void mobyupd::update1379::M1379_0025edf8
               (double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  draw::GetEffectTex(0x2e);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)fastfunc::FastWrapRot((float)param_4,1.5707964);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)fastfunc::FastWrapRot((float)dVar1,(float)dVar3);
  draw::Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}



//==== 0025f028  ns=mobyupd::update1379  size=0xe0
// sig: undefined M1379_WorldToScreen(void)
// callers(0): 
// callees(2): 00065490 draw::ScreenPosFromWorldSpace; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1379::M1379_WorldToScreen
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  draw::ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = fastfunc::FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = fastfunc::FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}



//==== 0025f120  ns=mobyupd::update1379  size=0x284
// sig: undefined M1379_0025f120(void)
// callers(0): 
// callees(5): 0025ea4c mobyupd::update1379::M1379_DrawShapeRotated; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1379::M1379_0025f120
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  fastfunc::FastDiffRots(0x3ff921fb60000000,dVar8);
  fastfunc::FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt();
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_7 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)fastfunc::FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1379_DrawShapeRotated
              ((double)(longlong)(iVar6 + 0x1b0),
               (double)(longlong)(iVar7 + draw::g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
               param_6);
  }
  return;
}



//==== 0025f3c8  ns=mobyupd::update1379  size=0x4e0
// sig: undefined M1379_0025f3c8(void)
// callers(1): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 00110950 mobyutil::MB_RandomizeVector; 001349f0 partupd::SpawnPart_74

void mobyupd::update1379::M1379_0025f3c8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [6];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    mobyfunc::GetBonePosition(param_1,iVar2,local_100);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    mobyutil::MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c5f0,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_0079c600,1);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_0079c610,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      mobyutil::MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c5f0,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_e0,local_110,&DAT_0079c600,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_d0,local_110,&DAT_0079c610,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c620,1);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
      partupd::SpawnPart_74(param_1,local_100,local_110,&DAT_0079c630,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



//==== 0025f8c0  ns=mobyupd::update1379  size=0x2a0
// sig: undefined M1379_DrawRadarIcon(void)
// callers(1): 0025fbd0 mobyupd::update1379::M1379_ScanTargets
// callees(6): 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 00500ca4 fastfunc::FastEulerToMtx1; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

void mobyupd::update1379::M1379_DrawRadarIcon
               (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5,
               int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a0 [16];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_60;
  float local_5c;
  float local_58;
  
  fastfunc::FastDiffRots(0x3ff921fb60000000);
  fastfunc::FastEulerToMtx1(&local_90,auStack_a0);
  fVar2 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar8 = (double)((local_5c * fVar1 + local_8c * fVar3 + local_7c * fVar2) * 0.071428575);
  fVar4 = (local_60 * fVar1 + local_90 * fVar3 + local_80 * fVar2) * 0.071428575;
  fVar1 = (local_58 * fVar1 + local_88 * fVar3 + local_78 * fVar2) * 0.071428575;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + (float)(dVar8 * dVar8));
  iVar6 = fastfunc::FastDoubleToInt
                    ((double)((float)(longlong)
                                     (int)(((uint)((LZCOUNT(-(uint)(byte)Cheats[4]) << 0x3a) >> 0x3f
                                                  ) & 2) - 1) * fVar4));
  iVar7 = fastfunc::FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)fastfunc::FastIntToDouble(param_5 >> 0x18 & 0xff);
      fastfunc::FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    iVar5 = (int)(param_4 << 4);
    iVar7 = iVar7 + draw::g_ScreenHeight;
    draw::GetEffectTex(param_6 + *(short *)(iVar5 + 0x79c640) + 0x28);
    draw::Sprite_DrawShapeWrapper
              ((iVar6 - *(short *)(iVar5 + 0x79c64c)) + 0x1b0,
               (iVar7 - *(short *)(iVar5 + 0x79c64e)) + -0x50,*(undefined2 *)(iVar5 + 0x79c646),
               *(undefined2 *)(iVar5 + 0x79c648),*(undefined2 *)(iVar5 + 0x79c642),
               *(undefined2 *)(iVar5 + 0x79c644),*(undefined2 *)(iVar5 + 0x79c646),
               *(undefined2 *)(iVar5 + 0x79c648));
  }
  return;
}



//==== 0025fbd0  ns=mobyupd::update1379  size=0x12cc
// sig: undefined M1379_ScanTargets(void)
// callers(1): 00260ea8 mobyupd::update1379::M1379_UpdateTargetLock
// callees(9): 00065490 draw::ScreenPosFromWorldSpace; 0010de78 mobyutil::MB_WrapRot; 0025ea4c mobyupd::update1379::M1379_DrawShapeRotated; 0025f8c0 mobyupd::update1379::M1379_DrawRadarIcon; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

int mobyupd::update1379::M1379_ScanTargets
              (ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  longlong lVar10;
  longlong lVar11;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  int in_r10;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar20;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  int iVar21;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar22;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong uVar27;
  double dVar28;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar29;
  ulonglong in_f24;
  undefined8 uVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  undefined8 uVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  undefined8 uVar34;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  float fVar40;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x2c0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x5a] = in_LR;
  puVar6[0x4d] = in_f21;
  puVar6[0x4e] = in_f22;
  puVar6[0x4f] = in_f23;
  puVar6[0x50] = in_f24;
  puVar6[0x51] = in_f25;
  puVar6[0x52] = in_f26;
  puVar6[0x53] = in_f27;
  puVar6[0x54] = in_f28;
  puVar6[0x55] = in_f29;
  puVar6[0x56] = in_f30;
  puVar6[0x57] = in_f31;
  puVar6[0x40] = unaff_r19;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  puVar6[0x48] = unaff_r27;
  dVar39 = 100000.0;
  puVar6[0x3c] = unaff_r15;
  iVar5 = MobyUpdateChainStart;
  iVar20 = 0;
  puVar6[0x46] = unaff_r25;
  iVar22 = 0x7fffffff;
  puVar6[0x35] = (ulonglong)*(uint *)((int)puVar6 + 0x334);
  puVar6[0x44] = unaff_r23;
  puVar6[0x36] = param_1;
  puVar6[0x45] = unaff_r24;
  puVar6[0x3d] = unaff_r16;
  puVar6[0x4c] = unaff_r31;
  puVar6[0x4b] = unaff_r30;
  puVar6[0x4a] = unaff_r29;
  puVar6[0x49] = unaff_r28;
  puVar6[0x47] = unaff_r26;
  puVar6[0x43] = unaff_r22;
  puVar6[0x42] = unaff_r21;
  puVar6[0x41] = unaff_r20;
  puVar6[0x3f] = unaff_r18;
  puVar6[0x3e] = unaff_r17;
  puVar6[0x3b] = unaff_r14;
  if (iVar5 != 0) {
    iVar20 = 0;
    iVar21 = 0;
    dVar38 = 0.0625;
    dVar36 = 0.0007812500116415322;
    uVar34 = 0x3ff0000000000000;
    dVar33 = 0.05000000074505806;
    uVar32 = 0x3ff4ccccc0000000;
    bVar7 = false;
    dVar31 = 4.0;
    uVar30 = 0x4000000000000000;
    uVar29 = 0x4004000000000000;
    do {
      if (((((*(ushort *)(iVar5 + 0x34) & 0x1000) != 0) && (*(char *)(iVar5 + 0x31) != '\0')) &&
          (*(int *)(iVar5 + 0x24) != 0)) && (*(short *)(*(int *)(iVar5 + 0x24) + 0x46) == 5)) {
        draw::ScreenPosFromWorldSpace(uVar9 - 0x1f0,iVar5 + 0x10);
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar12 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar6 + 0x1a) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar13 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar6 + 0xd4) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        fVar1 = GameCamera.orientMtx.right.y;
        fVar2 = GameCamera.orientMtx.right.x;
        *(float *)(puVar6 + 0xe) = GameCamera.orientMtx.right.x;
        fVar4 = GameCamera.orientMtx.right.z;
        *(float *)((int)puVar6 + 0x74) = fVar1;
        fVar3 = GameCamera.orientMtx.right.w;
        *(float *)(puVar6 + 0xf) = fVar4;
        *(float *)((int)puVar6 + 0x7c) = fVar3;
        fVar40 = *(float *)(iVar5 + 0xc);
        *(float *)((int)puVar6 + 0x7c) = fVar3;
        fVar40 = (float)((double)fVar40 * dVar36);
        iVar23 = iVar12 - *(int *)(param_2 + 0xe0);
        iVar24 = iVar13 - *(int *)(param_2 + 0xe4);
        fVar1 = fVar1 * fVar40;
        fVar4 = fVar4 * fVar40;
        iVar23 = iVar23 * ((iVar23 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar6 + 0xe) = fVar2 * fVar40;
        *(float *)((int)puVar6 + 0x74) = fVar1;
        *(float *)(puVar6 + 0xf) = fVar4;
        *(float *)(puVar6 + 0xe) = fVar2 * fVar40 + *(float *)(iVar5 + 0x10);
        *(float *)((int)puVar6 + 0x74) = fVar1 + *(float *)(iVar5 + 0x14);
        fVar40 = *(float *)(iVar5 + 0x18);
        puVar6[0x39] = (longlong)iVar24 * (longlong)(int)((iVar24 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar6 + 0xf) = fVar4 + fVar40;
        draw::ScreenPosFromWorldSpace(uVar9 - 0x200,uVar9 - 0x250);
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar24 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar6 + 0x18) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar14 = fastfunc::FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar6 + 0xc4) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        dVar26 = (double)fastfunc::FastIntToDouble
                                   ((iVar24 - iVar12) * (iVar24 - iVar12) +
                                    (iVar14 - iVar13) * (iVar14 - iVar13));
        iVar12 = fastfunc::FastDoubleToInt((double)(float)SQRT(dVar26));
        if ((iVar23 < iVar12 + 0x1c) && (iVar13 = (int)puVar6[0x39], iVar13 < iVar12 + 0x1c)) {
          if (in_r10 == 0) {
            if ((iVar5 != (int)puVar6[0x35]) &&
               (iVar12 = iVar23 * iVar23 + iVar13 * iVar13, iVar12 < iVar22)) {
              iVar20 = iVar5;
              iVar22 = iVar12;
            }
          }
          else if (iVar5 == in_r10) {
            iVar20 = iVar5;
            iVar22 = 0;
          }
        }
      }
      sVar15 = *(short *)(iVar5 + 0xa6);
      if (sVar15 < 399) {
        if (sVar15 < 0x184) {
          if (sVar15 == 0x15b) {
            *(undefined4 *)(puVar6 + 0x12) = *(undefined4 *)(iVar5 + 0x10);
            *(undefined4 *)((int)puVar6 + 0x94) = *(undefined4 *)(iVar5 + 0x14);
            fVar40 = *(float *)(iVar5 + 0x18);
            *(float *)(puVar6 + 0x13) = fVar40;
            *(undefined4 *)((int)puVar6 + 0x9c) = *(undefined4 *)(iVar5 + 0x1c);
            *(float *)(puVar6 + 0x13) = (float)((double)fVar40 + dVar31);
            draw::ScreenPosFromWorldSpace(uVar9 - 0x240,uVar9 - 0x230);
            if (*(char *)(iVar5 + 0x31) != '\0') {
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar8 = worldUpdateTime;
              uVar18 = puVar6[0x37];
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
              dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18)
                                      * dVar38);
              dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
              dVar35 = (double)(float)(dVar26 * dVar38);
              dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
              fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
              M1379_DrawShapeRotated(dVar37,dVar35,uVar30,(double)fVar40,&DAT_0079c578,0x1e);
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar8 = worldUpdateTime;
              uVar18 = puVar6[0x37];
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
              dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18)
                                      * dVar38);
              dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
              dVar35 = (double)(float)(dVar26 * dVar38);
              dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
              fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
              M1379_DrawShapeRotated(dVar37,dVar35,uVar29,-(double)fVar40,&DAT_0079c578,0x1e);
              bVar7 = true;
            }
            fVar40 = *(float *)(iVar5 + 0x14) - g_heroPosition.y;
            fVar1 = *(float *)(iVar5 + 0x10) - g_heroPosition.x;
            fVar4 = *(float *)(iVar5 + 0x18) - g_heroPosition.z;
            dVar26 = (double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar40 * fVar40);
            if (dVar26 < dVar39) {
              dVar39 = dVar26;
              iVar21 = iVar5;
            }
            M1379_DrawRadarIcon(param_4,uVar9 - 0x230,iVar5,0,0x70808080,
                                *(undefined4 *)(param_2 + 0x104));
            *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
          }
          else if (sVar15 == 0xe4) {
LAB_00260074:
            M1379_DrawRadarIcon(param_4,param_3,iVar5,2,0x70808080,*(undefined4 *)(param_2 + 0x104))
            ;
          }
          else if (sVar15 == 0xe0) {
LAB_0026004c:
            M1379_DrawRadarIcon(param_4,param_3,iVar5,2,0x70808080,*(undefined4 *)(param_2 + 0x104))
            ;
          }
          else {
            if (sVar15 == 0x6f) goto LAB_00260460;
            if (sVar15 == 0x53) {
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70007080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
            else {
              if (sVar15 != 0x52) goto LAB_00260634;
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70004080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
          }
        }
        else {
          if (sVar15 < 0x185) goto LAB_002600ec;
          if (0x18c < sVar15) goto LAB_00260634;
        }
      }
      else if (sVar15 < 0x4be) {
        if (sVar15 < 0x192) {
          if (sVar15 < 0x191) goto LAB_00260674;
        }
        else if (sVar15 != 0x3eb) goto LAB_00260634;
LAB_002600ec:
        draw::ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
        iVar12 = SCREEN_PROJECTION_MAP_Y;
        sVar15 = *(short *)(iVar5 + 0xa6);
        if ((sVar15 != 0x184) && (*(char *)(iVar5 + 0x31) != '\0')) {
          puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
          uVar8 = worldUpdateTime;
          uVar18 = puVar6[0x37];
          puVar6[0x37] = (longlong)iVar12;
          dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18) *
                                  dVar38);
          dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
          dVar35 = (double)(float)(dVar26 * dVar38);
          dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
          fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
          M1379_DrawShapeRotated(dVar37,dVar35,uVar34,(double)fVar40,&DAT_0079c578,0x1e);
          uVar18 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
          puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
          uVar8 = worldUpdateTime;
          uVar27 = puVar6[0x37];
          puVar6[0x37] = uVar18;
          dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar27) *
                                  dVar38);
          dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
          dVar35 = (double)(float)(dVar26 * dVar38);
          dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
          fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
          M1379_DrawShapeRotated(dVar37,dVar35,uVar32,-(double)fVar40,&DAT_0079c578,0x1e);
          sVar15 = *(short *)(iVar5 + 0xa6);
        }
        if (sVar15 != 0x191) {
          *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
        }
        M1379_DrawRadarIcon(param_4,param_3,iVar5,0,0x70808080,*(undefined4 *)(param_2 + 0x104));
      }
      else {
        if (sVar15 < 0x4c4) {
          if (sVar15 < 0x4c0) {
            if (sVar15 < 0x4bf) {
LAB_00260460:
              if ((*(ushort *)(iVar5 + 0x34) & 1) == 0) {
                draw::ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
                iVar12 = SCREEN_PROJECTION_MAP_Y;
                if (*(char *)(iVar5 + 0x31) != '\0') {
                  puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
                  uVar8 = worldUpdateTime;
                  uVar18 = puVar6[0x37];
                  puVar6[0x37] = (longlong)iVar12;
                  dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) -
                                                   (float)(longlong)uVar18) * dVar38);
                  dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
                  dVar35 = (double)(float)(dVar26 * dVar38);
                  dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
                  fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
                  M1379_DrawShapeRotated(dVar37,dVar35,uVar34,-(double)fVar40,&DAT_0079c578,0x1e);
                }
                M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,
                                    *(undefined4 *)(param_2 + 0x104));
              }
            }
            else if (((*(ushort *)(iVar5 + 0x34) & 1) == 0) && (1 < *(byte *)(iVar5 + 0x20))) {
              draw::ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
              iVar12 = SCREEN_PROJECTION_MAP_Y;
              if (*(char *)(iVar5 + 0x31) != '\0') {
                puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar8 = worldUpdateTime;
                uVar18 = puVar6[0x37];
                puVar6[0x37] = (longlong)iVar12;
                dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) -
                                                 (float)(longlong)uVar18) * dVar38);
                dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
                dVar35 = (double)(float)(dVar26 * dVar38);
                dVar26 = (double)fastfunc::FastIntToDouble(dVar26,uVar8);
                fVar40 = mobyutil::MB_WrapRot((float)(dVar26 * dVar33));
                M1379_DrawShapeRotated(dVar37,dVar35,uVar34,-(double)fVar40,&DAT_0079c578,0x1e);
              }
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
            goto LAB_00260674;
          }
          if (sVar15 == 0x4c2) goto LAB_0026004c;
        }
        else if (sVar15 < 0x534) {
          if (sVar15 < 0x504) {
            if (sVar15 < 0x4c5) goto LAB_00260074;
          }
          else if (sVar15 < 0x505) goto LAB_002600ec;
        }
        else if (sVar15 < 0x53b) goto LAB_00260674;
LAB_00260634:
        if ((*(int *)(iVar5 + 0x24) != 0) && (*(short *)(*(int *)(iVar5 + 0x24) + 0x46) == 5)) {
          M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,*(undefined4 *)(param_2 + 0x104));
        }
      }
LAB_00260674:
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if ((!bVar7) && (iVar21 != 0)) {
      *(undefined4 *)(puVar6 + 0x16) = *(undefined4 *)(iVar21 + 0x10);
      *(undefined4 *)((int)puVar6 + 0xb4) = *(undefined4 *)(iVar21 + 0x14);
      fVar40 = *(float *)(iVar21 + 0x18);
      *(float *)(puVar6 + 0x17) = fVar40;
      *(undefined4 *)((int)puVar6 + 0xbc) = *(undefined4 *)(iVar21 + 0x1c);
      *(float *)(puVar6 + 0x17) = (float)((double)fVar40 + dVar31);
      draw::ScreenPosFromWorldSpace(uVar9 - 0x220,uVar9 - 0x210);
      fastfunc::FastNormalizeRMtx4(uVar9 - 0x1e0,0x951710);
      fVar40 = *(float *)(iVar21 + 0x14) - g_heroPosition.y;
      fVar1 = *(float *)(iVar21 + 0x10) - g_heroPosition.x;
      fVar4 = *(float *)(iVar21 + 0x18) - g_heroPosition.z;
      dVar36 = 0.0;
      fVar2 = -(*(float *)(puVar6 + 0x23) * *(float *)(iVar21 + 0x1c) +
               *(float *)(puVar6 + 0x21) * fVar4 +
               *(float *)(puVar6 + 0x1d) * fVar1 + *(float *)(puVar6 + 0x1f) * fVar40);
      fVar40 = -(*(float *)((int)puVar6 + 0x114) * *(float *)(iVar21 + 0x1c) +
                *(float *)((int)puVar6 + 0x104) * fVar4 +
                *(float *)((int)puVar6 + 0xe4) * fVar1 + *(float *)((int)puVar6 + 0xf4) * fVar40);
      fVar1 = SQRT(fVar40 * fVar40 + fVar2 * fVar2);
      dVar33 = (double)(fVar2 * (160.0 / fVar1));
      dVar31 = (double)(fVar40 * (160.0 / fVar1));
      dVar39 = dVar36;
      if (0.0 - fVar1 < 0.0) {
        dVar39 = dVar33;
      }
      dVar38 = dVar36;
      if (0.0 - fVar1 < 0.0) {
        dVar38 = dVar31;
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar39 = dVar33;
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar38 = dVar31;
      }
      *(float *)(puVar6 + 0x27) = (float)dVar38;
      *(float *)((int)puVar6 + 0x13c) = (float)dVar39;
      *(float *)(puVar6 + 0x28) = (float)(ABS(dVar38) - ABS(dVar39));
      dVar33 = 0.7853981852531433;
      uVar18 = (ulonglong)(*(uint *)(puVar6 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x13c) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)(puVar6 + 0x27));
      if (*(float *)(puVar6 + 0x28) - 0.0 < 0.0) {
        dVar31 = ABS(dVar39);
      }
      fVar40 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar6 + 0x13c));
      if (*(float *)(puVar6 + 0x28) - 0.0 < 0.0) {
        dVar26 = ABS(dVar38);
      }
      fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar35 = dVar36;
      if (0.0 < dVar31) {
        lVar10 = uVar9 - 0x2b0;
        lVar19 = uVar9 - 300;
        lVar16 = uVar9 - 0x13c;
        lVar25 = 2;
        fVar4 = (float)(dVar26 - dVar31) / (float)(dVar26 + dVar31);
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar6 + 0x32) = fVar4;
        *(float *)(puVar6 + 0x31) = fVar4;
        *(float *)((int)puVar6 + 0x18c) = fVar4;
        *(float *)((int)puVar6 + 0x184) = fVar4;
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x31) = *(float *)(puVar6 + 0x31) * fVar2;
        *(float *)((int)puVar6 + 0x18c) = *(float *)((int)puVar6 + 0x18c) * fVar4;
        *(float *)(puVar6 + 0x32) = *(float *)(puVar6 + 0x32) * fVar4 * fVar2;
        do {
          *(float *)((int)lVar10 + 0x184) = *(float *)((int)lVar10 + 0x174) * fVar4 * fVar4;
          iVar5 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x13c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar2 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x184) = *(float *)((int)lVar10 + 0x184) * fVar4;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        lVar10 = lVar11;
        dVar31 = dVar36;
        do {
          iVar5 = (int)lVar10;
          iVar22 = (int)lVar19;
          lVar10 = lVar10 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar5 + 0x184)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar35 = (double)((float)(dVar31 + 0.7853981852531433) * fVar40 + fVar1);
      }
      uVar29 = fastfunc::FastWrapRot((float)dVar35,1.5707964);
      iVar5 = (int)puVar6[0x36];
      fVar1 = *(float *)(iVar21 + 0x10) - *(float *)(iVar5 + 0x10);
      fVar2 = *(float *)(iVar21 + 0x14) - *(float *)(iVar5 + 0x14);
      fVar3 = *(float *)(iVar5 + 0x14) - *(float *)(iVar21 + 0x14);
      fVar4 = *(float *)(iVar5 + 0x10) - *(float *)(iVar21 + 0x10);
      fVar40 = *(float *)(iVar21 + 0x18);
      dVar26 = ABS((double)fVar1);
      dVar31 = ABS((double)fVar2);
      *(float *)((int)puVar6 + 300) = fVar1;
      *(float *)(puVar6 + 0x26) = fVar2;
      fVar40 = *(float *)(iVar5 + 0x18) - fVar40;
      dVar37 = (double)(float)(dVar38 + 256.0);
      *(float *)((int)puVar6 + 0x134) = (float)(dVar26 - dVar31);
      fVar1 = *(float *)(param_2 + 0x38);
      uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 300) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x134) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar6 + 0x26) >> 0x1d) & 4;
      dVar35 = (double)(float)(dVar39 + 208.0);
      dVar38 = (double)SQRT(fVar40 * fVar40 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar40 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar39 = ABS((double)*(float *)((int)puVar6 + 300));
      if ((double)*(float *)((int)puVar6 + 0x134) - dVar36 < 0.0) {
        dVar39 = dVar31;
      }
      dVar31 = ABS((double)*(float *)(puVar6 + 0x26));
      if ((double)*(float *)((int)puVar6 + 0x134) - dVar36 < 0.0) {
        dVar31 = dVar26;
      }
      dVar26 = dVar36;
      if (dVar36 < dVar39) {
        lVar10 = uVar9 - 0x2b0;
        lVar16 = uVar9 - 0x15c;
        lVar19 = uVar9 - 0x14c;
        lVar25 = 2;
        fVar2 = (float)(dVar31 - dVar39) / (float)(dVar31 + dVar39);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x2e) = fVar2;
        *(float *)(puVar6 + 0x2d) = fVar2;
        *(float *)((int)puVar6 + 0x16c) = fVar2;
        *(float *)((int)puVar6 + 0x164) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar6 + 0x2d) = *(float *)(puVar6 + 0x2d) * fVar3;
        *(float *)((int)puVar6 + 0x16c) = *(float *)((int)puVar6 + 0x16c) * fVar2;
        *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar10 + 0x164) = *(float *)((int)lVar10 + 0x154) * fVar2 * fVar2;
          iVar22 = (int)lVar16;
          lVar10 = lVar10 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x15c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x164) = *(float *)((int)lVar10 + 0x164) * fVar2;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        lVar10 = lVar11;
        dVar39 = dVar36;
        do {
          iVar22 = (int)lVar10;
          lVar10 = lVar10 + 0x10;
          iVar12 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar22 + 0x164)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar39 + dVar33) * fVar4 + fVar40);
      }
      dVar31 = (double)fastfunc::FastDiffRots(dVar26,(double)fVar1);
      fVar1 = *(float *)(iVar5 + 0x14) - *(float *)(iVar21 + 0x14);
      fVar4 = *(float *)(iVar5 + 0x10) - *(float *)(iVar21 + 0x10);
      dVar31 = ABS(dVar31);
      fVar2 = *(float *)(iVar21 + 0x18) - *(float *)(iVar5 + 0x18);
      dVar28 = ABS((double)fVar2);
      fVar40 = *(float *)(param_2 + 0x34);
      *(float *)((int)puVar6 + 0x124) = fVar2;
      fVar1 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
      dVar26 = ABS((double)fVar1);
      *(float *)(puVar6 + 0x24) = fVar1;
      *(float *)(puVar6 + 0x25) = (float)(dVar26 - dVar28);
      uVar18 = (ulonglong)(*(uint *)(puVar6 + 0x24) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x25) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x124) >> 0x1d) & 4;
      dVar39 = ABS((double)*(float *)(puVar6 + 0x24));
      if ((double)*(float *)(puVar6 + 0x25) - dVar36 < 0.0) {
        dVar39 = dVar28;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar28 = ABS((double)*(float *)((int)puVar6 + 0x124));
      if ((double)*(float *)(puVar6 + 0x25) - dVar36 < 0.0) {
        dVar28 = dVar26;
      }
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (dVar36 < dVar39) {
        lVar10 = uVar9 - 0x2b0;
        lVar16 = uVar9 - 0x17c;
        lVar19 = uVar9 - 0x16c;
        lVar25 = 2;
        fVar2 = (float)(dVar28 - dVar39) / (float)(dVar28 + dVar39);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x2a) = fVar2;
        *(float *)(puVar6 + 0x29) = fVar2;
        *(float *)((int)puVar6 + 0x14c) = fVar2;
        *(float *)((int)puVar6 + 0x144) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar6 + 0x29) = *(float *)(puVar6 + 0x29) * fVar3;
        *(float *)((int)puVar6 + 0x14c) = *(float *)((int)puVar6 + 0x14c) * fVar2;
        *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar10 + 0x144) = *(float *)((int)lVar10 + 0x134) * fVar2 * fVar2;
          iVar5 = (int)lVar16;
          lVar10 = lVar10 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x17c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x144) = *(float *)((int)lVar10 + 0x144) * fVar2;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar10 = 2;
        do {
          iVar5 = (int)lVar11;
          iVar22 = (int)lVar19;
          lVar11 = lVar11 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar5 + 0x144)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        dVar36 = (double)((float)(dVar36 + dVar33) * fVar1 + fVar4);
      }
      dVar39 = (double)fastfunc::FastDiffRots(-dVar36,(double)fVar40);
      dVar31 = (double)fastfunc::FastWrapRot
                                 (*(float *)(param_2 + 0x114),
                                  0.1 / (SQRT((float)(dVar31 * dVar31 +
                                                     (double)(float)(ABS(dVar39) * ABS(dVar39)))) *
                                        0.31830987));
      dVar39 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar39 = dVar31;
      }
      dVar33 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar39 < 0.0) {
        dVar33 = dVar39;
      }
      *(float *)(param_2 + 0x114) = (float)dVar31;
      dVar39 = (double)(float)(dVar33 * dVar33);
      dVar36 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar33));
      dVar31 = (double)(float)(dVar39 * dVar36);
      fastfunc::FastDoubleToInt
                ((double)(((float)(dVar39 * dVar31) * 2.601887e-06 +
                           (float)(dVar31 * -0.0001980741071747616 +
                                  (double)(float)(dVar36 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar39 * dVar33) *
                                                                 -0.16666656732559204 + dVar33))) +
                          1.4) * 53.0));
      M1379_DrawShapeRotated
                (dVar37,dVar35,(double)((float)(240.0 / dVar38) + 1.5),uVar29,&DAT_0079c490,3);
    }
  }
  return iVar20;
}



