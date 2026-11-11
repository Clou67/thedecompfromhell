//==== 004b01cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M918_004b01cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M918_004b01cc(void)

{
  DAT_008f42f0 = 0x10000;
  return;
}



//==== 004b0218  ns=mobyupdate_helpers  size=0x2cc
// sig: undefined M918_004b0218(void)
// callers(2): 004b04e4 mobyupdate_helpers::M918_004b04e4; 004b0698 mobyupdate_unsorted::UpdateMoby_918
// callees(1): 001167c8 mobyutil::MB_UpdateManipulatorRot

void mobyupdate_helpers::M918_004b0218(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x50);
  puVar2[3] = in_vr31_32_3;
  puVar2[2] = in_vr31_32_2;
  puVar2[1] = in_vr31_32_1;
  *puVar2 = in_vr31_32_0;
  auVar27 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x50,0x4b01e0);
  auVar26 = loadVectorLeftIndexed(4,0x4b01e0);
  auVar25 = loadVectorLeftIndexed(8,0x4b01e0);
  auVar24 = loadVectorLeftIndexed(0xc,0x4b01e0);
  auVar22 = loadVectorLeftIndexed(0x10,0x4b01e0);
  auVar18 = loadVectorLeftIndexed(0x14,0x4b01e0);
  auVar19 = loadVectorLeftIndexed(0x18,0x4b01e0);
  auVar20 = loadVectorLeftIndexed(0x1c,0x4b01e0);
  iVar5 = 0;
  auVar21 = loadVectorLeftIndexed(0x20,0x4b01e0);
  lVar4 = param_2 + 0x1b0;
  auVar17 = loadVectorLeftIndexed(0x24,0x4b01e0);
  lVar3 = param_2 + 0x1a4;
  dVar7 = 0.05000000074505806;
  dVar6 = 0.30000001192092896;
  auVar23 = loadVectorLeftIndexed(0x30,0x4b01e0);
  auVar16 = loadVectorLeftIndexed(0x34,0x4b01e0);
  auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  do {
    auVar16 = loadVectorLeftIndexed(0x47c0,0x10e0000);
    if (g_BoobsSize != 0) {
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar10 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar16,0);
      auVar16 = ZEXT416(0xffffffff);
      auVar12 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar16 = loadVectorLeftIndexed(0x710,0xa10000);
      auVar16 = vectorLogicalAnd(auVar16,auVar27);
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar16,0);
      auVar16 = ZEXT416(0xffffffff);
      auVar14 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar28,auVar26);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar23,auVar9);
      auVar10 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorSubtractFloatingPoint(auVar24,auVar9);
      auVar13 = vectorSubtractFloatingPoint(auVar22,auVar9);
      auVar15 = vectorCompareGreaterThanFloatingPoint(auVar16,auVar9);
      auVar16 = vectorConditionalSelect(auVar16,auVar9,auVar15);
      auVar9 = vectorCompareGreaterThanFloatingPoint(auVar16,auVar13);
      auVar9 = vectorConditionalSelect(auVar13,auVar16,auVar9);
      auVar13 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar16 = vectorCompareGreaterThanFloatingPoint(auVar8,auVar25);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = vectorConditionalSelect(auVar8,auVar25,auVar16);
      auVar16 = ZEXT416(0xffffffff);
      auVar14 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = ZEXT416(0xffffffff);
      auVar15 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      uVar1 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar1;
      auVar16 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar10);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar16,auVar12);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar9);
      auVar9 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar13);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar16);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar14);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar20,auVar8);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar8);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar9);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar3);
      *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar1;
    }
    mobyutil::MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar7),
               (double)(float)((double)DAT_0071f40c * dVar6),param_1,param_2 + 0x140,iVar5 + 2);
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 0x80;
    lVar3 = lVar3 + 0x80;
    param_2 = param_2 + 0x80;
  } while (iVar5 < 2);
  return;
}



//==== 004b04e4  ns=mobyupdate_helpers  size=0x134
// sig: undefined M918_004b04e4(void)
// callers(0): 
// callees(2): 000f0ea8 mobyfunc::AttachManipulator; 004b0218 mobyupdate_helpers::M918_004b0218
// strings: 0096c074: 'None'

void mobyupdate_helpers::M918_004b04e4(int param_1)

{
  MobyInstance *moby;
  int iVar1;
  undefined4 *puVar2;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0' || g_BoobsSize != 0)) {
    iVar1 = 0;
    puVar2 = &DAT_0095cd50;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        moby = (MobyInstance *)puVar2[0x5e];
        if (moby->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) {
          if ((Cheats[0] != '\0') && (DAT_00a1bf81 == '\0')) {
            mobyfunc::AttachManipulator(moby,0,&DAT_00a1bf80);
            DAT_00a1bfa0 = 0x40300000;
            DAT_00a1bfa4 = 0x40300000;
            DAT_00a1bfa8 = 0x40300000;
          }
          if (g_BoobsSize != 0) {
            M918_004b0218(moby,*(undefined4 *)(param_1 + 0x78));
          }
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
  }
  return;
}



//==== 004b0698  ns=mobyupdate_unsorted  size=0x127c
// sig: undefined UpdateMoby_918(MobyInstance * moby)
// callers(0): 
// callees(23): 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112a38 mobyutil::MB_ToastMessage; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 0011ccc8 music::music_SetTransition; 0015d2d4 sound::sound_CorePlay; 004b0218 mobyupdate_helpers::M918_004b0218; 004d3698 FUN_004d3698; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 006589e0: 'Race Girl'

/* Moby 918 */

void mobyupdate_unsorted::UpdateMoby_918(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  MobyInstance *moby_00;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  undefined4 uVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r25;
  undefined4 *puVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 400;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar14;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x29] = unaff_r28;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar10[0x2b] = unaff_r30;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x28] = unaff_r27;
  puVar10[0x27] = unaff_r26;
  puVar10[0x26] = unaff_r25;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0' || g_BoobsSize != 0)) {
    iVar19 = 0;
    puVar24 = &DAT_0095cd50;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        moby_00 = (MobyInstance *)puVar24[0x5e];
        if (moby_00->oClass == moby->oClass) {
          if ((Cheats[0] != '\0') && (DAT_00a1bf81 == '\0')) {
            mobyfunc::AttachManipulator(moby_00,0,&DAT_00a1bf80);
            DAT_00a1bfa0 = 0x40300000;
            DAT_00a1bfa4 = 0x40300000;
            DAT_00a1bfa8 = 0x40300000;
          }
          if (g_BoobsSize != 0) {
            mobyupdate_helpers::M918_004b0218(moby_00,moby->pVar);
          }
        }
        iVar19 = iVar19 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar19 < boot::g_SpaceSceneMobyCnt._0_2_);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (moby->animationId != '\0') {
        puVar10[0x24] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar10 + 0x124));
      }
      dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      (moby->pos).z = (float)dVar27;
      if ((g_KeyLevelFlags._268_4_ == 0) || (g_KeyLevelFlags._284_4_ == 0)) {
        lVar17 = FUN_004d3698(lVar15);
        *(undefined2 *)(*(int *)(&DAT_008fa1ac + (int)(lVar17 << 2)) + 4) = 0xd;
      }
      *(char **)((int)pvVar9 + 0x20) = "Race Girl";
      moby->state = '\x01';
      FUN_004d3720(lVar15,uVar25);
      mobyutil::MB_SetZBoundsFromPos(lVar15);
    }
    else {
      if (g_heroState != VISIBOMB_CONTROL) {
        iVar19 = FUN_004d3870(lVar15,uVar25);
        if (iVar19 != 0) {
          mobyutil::MB_SetPointAheadOfMoby(0x4000000000000000,lVar15);
          moby->state = '\x03';
        }
        if (*(short *)((int)pvVar9 + 0x36) == 3) {
          *(undefined2 *)((int)pvVar9 + 4) = 3;
          iVar19 = worldUpdateTime;
          *(undefined2 *)((int)pvVar9 + 0x36) = 2;
          *(int *)((int)pvVar9 + 0x38) = iVar19;
          moby->setByGroup = '\0';
          hero::Hero_Warp((float *)&DAT_008f4320,(float *)&DAT_008f4330,0,1);
          DAT_0096b9e0 = DAT_008f4340;
          DAT_0096b9e4 = DAT_008f4344;
          DAT_0096b9e8 = DAT_008f4348;
          DAT_0096b9ec = DAT_008f434c;
          DAT_0096b9f0 = DAT_008f4350;
          DAT_0096b9f4 = DAT_008f4354;
          DAT_0096b9f8 = DAT_008f4358;
          DAT_0096b9fc = DAT_008f435c;
          DAT_0096bd8c = 1;
          music::music_SetTransition(2,6);
        }
      }
      cVar2 = moby->setByGroup;
      if (cVar2 == '\x01') {
        hero::Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
        music::music_SetTransition(0,8);
        iVar19 = worldUpdateTime;
        if (MiscLevelFlags.Zoomerator == false) {
          *(undefined2 *)((int)pvVar9 + 4) = *(undefined2 *)((int)pvVar9 + 0x36);
          *(undefined2 *)((int)pvVar9 + 0x36) = 4;
          *(int *)((int)pvVar9 + 0x38) = iVar19;
          *(undefined1 *)((int)pvVar9 + 8) = 1;
        }
        moby->setByGroup = '\0';
      }
      else if (cVar2 == '\x02') {
        music::music_SetTransition(0,8);
        hero::Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
        moby->setByGroup = '\0';
      }
      else if (cVar2 == '\x03') {
        music::music_SetTransition(0,8);
        moby->setByGroup = '\0';
        hero::Hero_Warp((float *)&DAT_008f4320,(float *)&DAT_008f4330,0,1);
        DAT_0096b9e0 = DAT_008f4340;
        DAT_0096b9e4 = DAT_008f4344;
        DAT_0096b9e8 = DAT_008f4348;
        DAT_0096b9ec = DAT_008f434c;
        DAT_0096b9f0 = DAT_008f4350;
        DAT_0096b9f4 = DAT_008f4354;
        DAT_0096b9f8 = DAT_008f4358;
        DAT_0096b9fc = DAT_008f435c;
      }
      if (((moby->animationId == '\0') || (moby->animationId == '\x02')) &&
         (iVar19 = fastfunc::FastDecTimerS32(uVar25 + 0x244), iVar19 != 0)) {
        dVar27 = (double)mobyutil::MB_randRangeFloat(1200.0,2400.0);
        uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar9 + 0x244) = uVar20;
        if (moby->animationId != '\x01') {
          puVar10[0x24] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar10 + 0x124));
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        iVar19 = mobyutil::MB_randInt(2);
        uVar16 = (LZCOUNT(-iVar19) << 0x3a) >> 0x3f & 2;
        if ((uint)moby->animationId != (uint)uVar16) {
          puVar10[0x24] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,uVar16,0,*(undefined4 *)((int)puVar10 + 0x124));
        }
      }
    }
  }
  else if (bVar1 == 3) {
    if ((g_gameMode != GAME_MODE_SCENE) && (moby->state = '\x01', *(short *)((int)pvVar9 + 4) == 4))
    {
      MiscLevelFlags.Zoomerator = true;
      puVar10[0x24] = (longlong)(int)(animationSpeed * 300.5);
      mobyutil::MB_ToastMessage(0x1395,*(undefined4 *)((int)puVar10 + 0x124));
      if (g_SkillPoints[9] != '\0') {
        sound::sound_CorePlay(1,0,(MobyInstance *)0x0);
        mobyutil::MB_ToastMessage(0x53d6,0xffffffffffffffff);
      }
      memcard::memcard_Save(0,-1);
    }
  }
  else if (moby->setByGroup != '\0') {
    hero::Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
    moby->setByGroup = '\0';
  }
  dVar27 = 0.019999999552965164;
  if ((moby->animationId != '\0') && (moby->animationId != '\x02')) goto LAB_004b153c;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_004b0fe8:
    if (*(int *)((int)pvVar9 + 0x248) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x248) = 0;
      *(float *)((int)pvVar9 + 0x250) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x254) = DAT_00969db4;
      *(float *)((int)pvVar9 + 600) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x25c) = DAT_00969dbc;
    }
  }
  else {
    fVar4 = hero::g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar10 + 0x94) = fVar4;
    *(float *)(puVar10 + 0x13) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)((int)puVar10 + 0x9c) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x13));
    if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar17 = uVar14 - 0x180;
      lVar21 = uVar14 - 0x90;
      lVar23 = uVar14 - 0x80;
      lVar26 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x10c) = fVar6;
      *(float *)((int)puVar10 + 0x104) = fVar6;
      *(float *)(puVar10 + 0x21) = fVar6;
      *(float *)(puVar10 + 0x20) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar7;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar6;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0xf0) * fVar6 * fVar6;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0x90;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0x100) * fVar6;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar12 = (int)lVar23;
        lVar17 = lVar17 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0x100) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar28) goto LAB_004b0fe8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar25 + 0x248);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x34,0x4b0618);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x248,uVar25
                         );
      *(undefined4 *)((int)pvVar9 + 0x248U & 0xfffffffc) = uVar20;
    }
  }
  iVar19 = fastfunc::FastDecTimerS32(uVar25 + 0x24c);
  if (iVar19 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x24c) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x250));
    *(float *)((int)pvVar9 + 0x250) = *(float *)((int)pvVar9 + 0x250) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x254) = *(float *)((int)pvVar9 + 0x254) + (moby->pos).y;
    *(float *)((int)pvVar9 + 600) = *(float *)((int)pvVar9 + 600) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x248) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x250);
    fVar4 = *(float *)((int)pvVar9 + 0x254);
    fVar6 = *(float *)((int)pvVar9 + 600);
  }
  else {
    dVar27 = 0.029999999329447746;
    fVar3 = hero::g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar34 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar32 = (double)fVar4;
  *(float *)(puVar10 + 0x11) = fVar3;
  *(float *)((int)puVar10 + 0x8c) = fVar4;
  dVar31 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)(puVar10 + 0x12) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar10 + 0x11));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar10 + 0x8c));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar17 = uVar14 - 0x180;
    lVar23 = uVar14 - 0xa0;
    lVar21 = uVar14 - 0xb0;
    lVar26 = 2;
    fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xec) = fVar6;
    *(float *)((int)puVar10 + 0xe4) = fVar6;
    *(float *)(puVar10 + 0x1d) = fVar6;
    *(float *)(puVar10 + 0x1c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar7;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar6;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xd0) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xb0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar23;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xe0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xe0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)(puVar10 + 0x10) = (float)dVar31;
  fVar3 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar3);
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)((int)puVar10 + 0x84) = (float)(dVar32 - ABS(dVar31));
  uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if ((double)*(float *)((int)puVar10 + 0x84) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar31 = ABS((double)*(float *)(puVar10 + 0x10));
  if ((double)*(float *)((int)puVar10 + 0x84) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar17 = uVar14 - 0x180;
    lVar21 = uVar14 - 0xd0;
    lVar23 = uVar14 - 0xc0;
    lVar26 = 2;
    fVar6 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xcc) = fVar6;
    *(float *)((int)puVar10 + 0xc4) = fVar6;
    *(float *)(puVar10 + 0x19) = fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar7;
    *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar6;
    *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xb0) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xd0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar23;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xc0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0xc0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xa8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xa4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x128) = (float)(dVar28 * 0.4000000059604645);
LAB_004b153c:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 15.0) {
    fVar3 = g_heroPosition.y - fVar3;
    fVar4 = g_heroPosition.x - fVar4;
    fVar6 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)(puVar10 + 0xe) = fVar4;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0xf) = fVar5 - fVar6;
    fVar4 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar7) {
      lVar17 = uVar14 - 0x180;
      lVar23 = uVar14 - 0xe0;
      lVar21 = uVar14 - 0xf0;
      lVar26 = 2;
      fVar7 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar5 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0xac) = fVar7;
      *(float *)((int)puVar10 + 0xa4) = fVar7;
      *(float *)(puVar10 + 0x15) = fVar7;
      *(float *)(puVar10 + 0x14) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar5;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar7;
      *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar7 * fVar7;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0xf0;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar7 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * fVar7;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar12 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0xa0) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar6;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar3,fVar4);
    if (dVar28 < 1.2217304706573486) {
      if ((g_heroState == FLIP_JUMP) && (hero::g_heroStateTimer == 0xf)) {
        iVar19 = *(int *)((int)pvVar9 + 0x260) + 1;
        g_BoobsSize = iVar19 + ((uint)(0x14 - (longlong)iVar19 >> 0x3f) & 0x14U - iVar19);
        *(int *)((int)pvVar9 + 0x260) = g_BoobsSize;
      }
      iVar19 = hero::g_heroStateTimer;
      if (((g_heroState == CROUCHING) &&
          (puVar10[0x24] = (longlong)(int)(animationSpeed * 20.5),
          *(int *)((int)puVar10 + 0x124) < iVar19)) &&
         (worldUpdateTime == (worldUpdateTime / 10) * 10)) {
        iVar19 = *(int *)((int)pvVar9 + 0x260) + -1;
        g_BoobsSize = iVar19 + (iVar19 >> 0x1f & -iVar19);
        *(int *)((int)pvVar9 + 0x260) = g_BoobsSize;
      }
    }
  }
  if (g_gameMode != GAME_MODE_SCENE) {
    mobyupdate_helpers::M918_004b0218(lVar15,uVar25);
    if (Cheats[0] != '\0') {
      *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
    }
    dVar28 = 0.30000001192092896;
    mobyutil::MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar27),
               (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar15,uVar25 + 0x40,0);
    mobyutil::MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar27),
               (double)(float)((double)DAT_0071f40c * dVar28),lVar15,uVar25 + 0xc0,1);
  }
  return;
}



//==== 004b1914  ns=mobyupdate_helpers  size=0x14
// sig: undefined M919_004b1914(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M919_004b1914(void)

{
  DAT_008f43ac = 0x10000;
  return;
}



//==== 004b1928  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M919_004b1928(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M919_004b1928(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008f43d0;
          DAT_00a1bfa4 = DAT_008f43d0;
          DAT_00a1bfa8 = DAT_008f43d0;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 004b1a88  ns=mobyupdate_unsorted  size=0xbb8
// sig: undefined UpdateMoby_919(MobyInstance * moby)
// callers(0): 
// callees(18): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00106308 mobyutil::MB_SetZBoundsFromPos; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 006589f4: 'Bouncer'

/* Moby 919 */

void mobyupdate_unsorted::UpdateMoby_919(MobyInstance *moby)

{
  u8 uVar1;
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
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  short sVar21;
  float *pfVar20;
  longlong lVar19;
  longlong lVar22;
  ulonglong unaff_r26;
  undefined4 *puVar23;
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
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar23[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar23[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008f43d0;
          DAT_00a1bfa4 = DAT_008f43d0;
          DAT_00a1bfa8 = DAT_008f43d0;
          sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  if (moby->state == 0) {
    if (g_SeenPlanets.Umbris != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(char **)((int)pvVar8 + 0x20) = "Bouncer";
    moby->state = '\x01';
    FUN_004d3720(moby,uVar24);
    *(undefined4 *)((int)pvVar8 + 0xc) = 0x406ccccd;
    mobyutil::MB_SetZBoundsFromPos(moby);
  }
  else if (moby->state < 2) {
    iVar17 = FUN_004d3870(moby,uVar24);
    if (iVar17 != 0) {
      mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
    }
    if (*(short *)((int)pvVar8 + 4) == 5) {
      mobyutil::MB_UnlockLevel(Umbris);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    uVar1 = moby->animationId;
    dVar33 = 10.5;
    if (uVar1 == '\0') {
      iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x144);
      uVar1 = moby->animationId;
      if (iVar17 != 0) {
        dVar26 = (double)mobyutil::MB_randRangeFloat(1200.0,2400.0);
        uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar8 + 0x144) = uVar18;
        iVar17 = mobyutil::MB_randInt(2);
        lVar15 = ((LZCOUNT(-iVar17) << 0x3a) >> 0x3f & 1U) + 1;
        if ((uint)moby->animationId != (uint)lVar15) {
          puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar33);
          mobyutil::MB_SetAnimation(moby,lVar15,0,*(undefined4 *)((int)puVar9 + 0xfc));
        }
        goto LAB_004b1d88;
      }
    }
    if (uVar1 != '\0' && (moby->field43_0x70 & 2U) != 0) {
      puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar33);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
  }
LAB_004b1d88:
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b259c;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b2050:
    if (*(int *)((int)pvVar8 + 0x148) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x148) = 0;
      *(float *)((int)pvVar8 + 0x150) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x15c) = DAT_00969dbc;
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
    if (1.5707963705062866 <= dVar26) goto LAB_004b2050;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar24 + 0x148);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x28,0x4b1a20);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x148,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x148U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x14c);
  if (iVar17 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x14c) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar8 + 0x150));
    *(float *)((int)pvVar8 + 0x150) = *(float *)((int)pvVar8 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x154) = *(float *)((int)pvVar8 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x158) = *(float *)((int)pvVar8 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x148) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x150);
    fVar3 = *(float *)((int)pvVar8 + 0x154);
    fVar5 = *(float *)((int)pvVar8 + 0x158);
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
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.0));
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
  *(float *)((int)pvVar8 + 0xa4) = (float)dVar29;
  *(float *)((int)pvVar8 + 0xa8) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar8 + 0x128) = (float)(dVar26 * 0.5);
LAB_004b259c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x40,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xc0,1);
  return;
}



//==== 004b2640  ns=mobyupdate_helpers  size=0x14
// sig: undefined M919_004b2640(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M919_004b2640(void)

{
  DAT_008f4420 = 0x10000;
  return;
}



//==== 004b2670  ns=mobyupdate_unsorted  size=0x5f0
// sig: undefined UpdateMoby_92(MobyInstance * moby)
// callers(0): 
// callees(3): 00110b70 mobyutil::MB_IsPntInCuboid; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 92 */

void mobyupdate_unsorted::UpdateMoby_92(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 *pfVar4;
  int iVar6;
  ulonglong uVar5;
  f32 fVar7;
  double dVar8;
  
  uVar1 = moby->state;
  pfVar4 = (f32 *)moby->pVar;
  if (uVar1 == '\x05') {
    if (g_SeenPlanets.Kalebo == 0) {
      if (g_heroType != '\x02') {
        fVar7 = pfVar4[2];
        moby->state = '\x01';
        (moby->pos).z = fVar7;
        DAT_00a20828 = 0;
      }
    }
    else {
      DAT_00a20828 = 1;
      (moby->pos).z = pfVar4[2] - DAT_008f4444;
    }
  }
  else if (uVar1 == '\x04') {
    dVar8 = (double)(DAT_008f4444 * 1.6666666 * mobyutil::g_FrameTime);
    if (pfVar4[8] != -NAN) {
      dVar8 = (double)(float)(dVar8 * 5.0);
    }
    fVar7 = pfVar4[7];
    uVar5 = (ulonglong)(uint)fVar7;
    if ((sound::g_SoundChannels[(int)fVar7].pMoby != moby) ||
       (sound::g_SoundChannels[(int)fVar7].state == '\0')) {
      fVar7 = (f32)sound::PlayMobySound(0,4,moby);
      uVar5 = (ulonglong)(int)fVar7;
      pfVar4[7] = fVar7;
    }
    fVar2 = pfVar4[6];
    pfVar4[6] = (float)((double)fVar2 - dVar8);
    if ((float)((double)fVar2 - dVar8) < 0.0) {
      if ((((int)uVar5 != -1) &&
          (iVar6 = (int)(uVar5 << 7) - (int)(uVar5 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar6 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar6 + 4) != '\0')) {
        sound::sound_Kill((int)uVar5);
      }
      pfVar4[7] = -NAN;
      pfVar4[6] = 0.0;
      moby->state = '\x01';
      if (pfVar4[8] != -NAN) {
        moby->state = '\x05';
        DAT_00a20828 = 0;
      }
    }
    fVar2 = -1.0;
    if (pfVar4[8] == -NAN) {
      fVar2 = 1.0;
    }
    fVar7 = pfVar4[4];
    (moby->pos).z = pfVar4[6] * fVar2 + pfVar4[2];
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)fVar7);
    if ((iVar6 != 0) ||
       (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[4]),
       iVar6 != 0)) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (pfVar4[8] != -NAN) {
      DAT_00a20828 = 1;
    }
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[5]);
    if ((((iVar6 == 0) &&
         (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar4[5]),
         iVar6 == 0)) ||
        (iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[8]), iVar6 != 0))
       && (pfVar4[10] == 0.0)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    dVar8 = (double)(DAT_008f4444 * 1.6666666 * mobyutil::g_FrameTime);
    if (pfVar4[8] != -NAN) {
      dVar8 = (double)(float)(dVar8 * 5.0);
    }
    fVar7 = pfVar4[7];
    uVar5 = (ulonglong)(uint)fVar7;
    if ((sound::g_SoundChannels[(int)fVar7].pMoby != moby) ||
       (fVar2 = DAT_008f4444, sound::g_SoundChannels[(int)fVar7].state == '\0')) {
      fVar7 = (f32)sound::PlayMobySound(0,4,moby);
      fVar2 = DAT_008f4444;
      uVar5 = (ulonglong)(int)fVar7;
      pfVar4[7] = fVar7;
    }
    fVar3 = (float)((double)pfVar4[6] + dVar8);
    pfVar4[6] = fVar3;
    if (fVar2 < fVar3) {
      if ((((int)uVar5 != -1) &&
          (iVar6 = (int)(uVar5 << 7) - (int)(uVar5 << 4),
          *(MobyInstance **)((int)sound::g_SoundChannels + iVar6 + 0x18) == moby)) &&
         (*(char *)((int)sound::g_SoundChannels + iVar6 + 4) != '\0')) {
        sound::sound_Kill((int)uVar5);
        fVar2 = DAT_008f4444;
      }
      pfVar4[6] = fVar2;
      pfVar4[7] = -NAN;
      moby->state = '\x03';
      fVar3 = pfVar4[6];
    }
    fVar2 = -1.0;
    if (pfVar4[8] == -NAN) {
      fVar2 = 1.0;
    }
    (moby->pos).z = fVar3 * fVar2 + pfVar4[2];
  }
  else if (uVar1 == '\x01') {
    pfVar4[6] = 0.0;
    if (pfVar4[8] != -NAN) {
      DAT_00a20828 = 0;
    }
    if (pfVar4[9] == -NAN) {
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[4]);
      if ((iVar6 != 0) && ((pfVar4[8] == -NAN || (g_heroType == '\x02')))) {
        moby->state = '\x02';
      }
    }
    else if ((((MobyInstance + (int)pfVar4[9] == (MobyInstance *)0x0) ||
              (uVar1 = MobyInstance[(int)pfVar4[9]].state, uVar1 == 0xfe)) || (uVar1 == 0xfd)) &&
            (DAT_010c512c == 0)) {
      moby->state = '\x02';
      pfVar4[10] = 1.4013e-45;
    }
    fVar2 = DAT_008f4444;
    if ((g_SeenPlanets.Kalebo != 0) && (pfVar4[8] != -NAN)) {
      fVar3 = pfVar4[2];
      moby->state = '\x05';
      (moby->pos).z = fVar3 - fVar2;
    }
  }
  else if (uVar1 == '\0') {
    *pfVar4 = (moby->pos).x;
    pfVar4[1] = (moby->pos).y;
    pfVar4[2] = (moby->pos).z;
    pfVar4[3] = (moby->pos).w;
    moby->state = '\x01';
    pfVar4[10] = 0.0;
    fVar2 = (moby->pos).z;
    if (pfVar4[8] != -NAN) {
      moby->updateDistance = -1;
    }
    fVar3 = DAT_008f4444;
    if ((g_SeenPlanets.Kalebo != 0) && (pfVar4[8] != -NAN)) {
      moby->state = '\x05';
      (moby->pos).z = fVar2 - fVar3;
    }
  }
  return;
}



//==== 004b2c60  ns=mobyupdate_helpers  size=0x14
// sig: undefined M920_004b2c60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M920_004b2c60(void)

{
  DAT_008f4494 = 0x10000;
  return;
}



//==== 004b2c78  ns=mobyupdate_helpers  size=0xe8
// sig: undefined M920_004b2c78(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M920_004b2c78(void)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == QUARK_0398) || (MVar1 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}



//==== 004b2db8  ns=mobyupdate_unsorted  size=0xb54
// sig: undefined UpdateMoby_{447_920}(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00110b70 mobyutil::MB_IsPntInCuboid; 001167c8 mobyutil::MB_UpdateManipulatorRot; 004d407c FUN_004d407c; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 0096c074: 'None' | 00658a0c: 'Warning: Captain Quark has no Hero Detect Cuboid!\n' | 00658a44: 'Warning: Captain Quark has not Cutscene moby\n' | 00658a74: 'Warning: Captain Quark has not Segment Switch\n'

/* Moby 447
   Moby 920 */

void mobyupdate_unsorted::UpdateMoby__447_920_(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar22;
  float *pfVar21;
  longlong lVar20;
  longlong lVar23;
  ulonglong unaff_r26;
  undefined4 *puVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar8 = ((MobyInstance *)puVar24[0x5e])->oClass;
        if (((MVar8 == QUARK_0398) || (MVar8 == QUARK_01BF)) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar24[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40066666;
          DAT_00a1bfa4 = 0x40066666;
          DAT_00a1bfa8 = 0x40066666;
          sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar18 = iVar18 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar18 < sVar22);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      if (*(int *)((int)pvVar9 + 0x120) == -1) {
        libc::printf("Warning: Captain Quark has no Hero Detect Cuboid!\n");
      }
      if (*(int *)((int)pvVar9 + 0x128) == -1) {
        libc::printf("Warning: Captain Quark has not Cutscene moby\n");
      }
      if (*(int *)((int)pvVar9 + 0x124) == -1) {
        libc::printf("Warning: Captain Quark has not Segment Switch\n");
      }
      else if (MobyInstance[*(int *)((int)pvVar9 + 0x124)].state != '\0') {
        if (*(int *)((int)pvVar9 + 0x128) != -1) {
          MobyInstance[*(int *)((int)pvVar9 + 0x128)].state = '\x03';
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->state = '\x01';
    }
    else if ((*(int *)((int)pvVar9 + 0x120) != -1) &&
            (iVar18 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x120)),
            iVar18 != 0)) {
      FUN_004d407c(moby,1);
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    moby->state = '\x03';
  }
  dVar34 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b3868;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b3314:
    if (*(int *)((int)pvVar9 + 0x118) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x118) = 0;
      *(float *)((int)pvVar9 + 0x100) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x104) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x108) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x10c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar10 + 0x11) = fVar3;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x140;
      lVar20 = uVar14 - 0x7c;
      lVar23 = uVar14 - 0x6c;
      lVar26 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1c) = fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)((int)puVar10 + 0xdc) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0x7c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar23;
      do {
        fVar5 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar12 = (int)lVar23;
        lVar16 = lVar16 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar27 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar27) goto LAB_004b3314;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar25 + 0x118);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x1c,0x4b2d60);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x118,uVar25
                         );
      *(undefined4 *)((int)pvVar9 + 0x118U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar25 + 0x11c);
  if (iVar18 != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x11c) = uVar19;
    dVar32 = (double)(moby->rotation).z;
    dVar27 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar30 = 0.01745329238474369;
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar32,(float)(dVar27 * 0.01745329238474369));
    dVar32 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar27,(float)(dVar32 * dVar30),(float *)((int)pvVar9 + 0x100));
    *(float *)((int)pvVar9 + 0x100) = *(float *)((int)pvVar9 + 0x100) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x104) = *(float *)((int)pvVar9 + 0x104) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x108) = *(float *)((int)pvVar9 + 0x108) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x118) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x100);
    fVar3 = *(float *)((int)pvVar9 + 0x104);
    fVar5 = *(float *)((int)pvVar9 + 0x108);
  }
  else {
    dVar34 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar33 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar31 = (double)fVar3;
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar30 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar33) - ABS(dVar31));
  dVar32 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar27 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar29 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (0.0 < dVar27) {
    lVar16 = uVar14 - 0x140;
    lVar23 = uVar14 - 0x8c;
    lVar20 = uVar14 - 0x9c;
    lVar26 = 2;
    fVar5 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)(puVar10 + 0x17) = fVar5;
    *(float *)((int)puVar10 + 0xbc) = fVar5;
    *(float *)((int)puVar10 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0x9c;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    lVar16 = lVar17;
    dVar27 = dVar32;
    do {
      iVar18 = (int)lVar16;
      iVar12 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar28 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar29 = (double)fastfunc::FastDiffRots(dVar28,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar30;
  fVar2 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)));
  dVar31 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar31 - ABS(dVar30));
  uVar15 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar32 < 0.0) {
    dVar27 = ABS(dVar30);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar32 < dVar27) {
    lVar16 = uVar14 - 0x140;
    lVar20 = uVar14 - 0xbc;
    lVar23 = uVar14 - 0xac;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x14) = fVar5;
    *(float *)(puVar10 + 0x13) = fVar5;
    *(float *)((int)puVar10 + 0x9c) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xbc;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar32 = -dVar32;
  dVar27 = 1.5707963705062866;
  if ((dVar29 <= 1.5707963705062866) && (dVar27 = dVar29, dVar29 < -1.5707963705062866)) {
    dVar27 = -1.5707963705062866;
  }
  dVar30 = 0.5235987901687622;
  if ((dVar32 <= 0.5235987901687622) && (dVar30 = dVar32, dVar32 < -0.5235987901687622)) {
    dVar30 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0x68) = (float)(dVar27 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 100) = (float)dVar30;
  *(float *)((int)pvVar9 + 0xe8) = (float)(dVar27 * 0.4000000059604645);
LAB_004b3868:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0x70) = 0x40300000;
  }
  dVar27 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar25,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * dVar27),moby,uVar25 + 0x80,1);
  return;
}



//==== 004b390c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M921_004b390c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M921_004b390c(void)

{
  DAT_008f4504 = 0x10000;
  return;
}



//==== 004b3950  ns=mobyupdate_helpers  size=0x6b4
// sig: undefined M921_004b3950(void)
// callers(1): 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(3): 000fc620 mobyutil::MB_randInt; 000fe484 mobyutil::MB_randRange; 00126f50 partupd::SpawnPart_23
// strings: 004b3928: '?fffHCP' (raw)

void mobyupdate_helpers::M921_004b3950(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar5;
  undefined1 uVar7;
  int iVar6;
  undefined8 uVar4;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_120 [72];
  
  cVar1 = *(char *)(param_1 + 0x20);
  if ((cVar1 != '\x03' && cVar1 != '\0') && (cVar1 != '\x01')) {
    iVar6 = 0;
    iVar9 = 0;
    uVar15 = 0x3fc99999a0000000;
    uVar14 = 0x3ff0000000000000;
    uVar13 = 0x3fecccccc0000000;
    uVar12 = 0x41086a0000000000;
    auVar22 = loadVectorLeftIndexed(0x10,0x4b3920);
    auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    do {
      mobyutil::MB_randInt(0x10);
      mobyutil::MB_randInt(2);
      uVar3 = partupd::SpawnPart_23(uVar15,uVar14,uVar13,uVar12,local_120);
      iVar5 = (int)uVar3;
      if (iVar5 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar22,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar19 = vectorSplatHalfWord(auVar18,1);
        auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar19,10,uVar3);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar3);
        *(undefined1 *)(iVar5 + 0x2b) = uVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar6 = 0;
    dVar17 = 2.5;
    dVar10 = 100000.0;
    uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    uVar3 = 0x3fa99999a0000000;
    dVar11 = 20000.0;
    dVar16 = dVar10;
    do {
      iVar5 = partupd::SpawnPart_23(uVar3,uVar14,uVar14,dVar10,local_120);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 10) = (short)uVar8;
        uVar7 = mobyutil::MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar7;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
      }
      iVar6 = iVar6 + 1;
      dVar10 = (double)(float)(dVar10 - dVar11);
      uVar8 = uVar8 << 1;
    } while (iVar6 < 3);
    mobyutil::MB_randRange(0x40,0x80);
    iVar6 = mobyutil::MB_randInt(3);
    if (iVar6 != 0) {
      mobyutil::MB_randInt(4);
      mobyutil::MB_randInt(2);
      uVar4 = partupd::SpawnPart_23(uVar3,uVar14,uVar14,0x41124f8000000000,local_120);
      iVar6 = (int)uVar4;
      if (iVar6 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = loadVectorLeftIndexed(0x28,0x4b3920);
        auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar21 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar18 = vectorMultiplyAddFloatingPoint(auVar20,auVar21,auVar19);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar18,10,uVar4);
        *(undefined2 *)(iVar6 + 10) = uVar2;
        iVar5 = mobyutil::MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar6 + 3) = 0x44;
        }
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        *(undefined1 *)(iVar6 + 0x2a) = 0x40;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        *(undefined4 *)(iVar6 + 0x24) = 2;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar21,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xff;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar6 + 0x2b) = uVar7;
      }
    }
    iVar6 = 0;
    do {
      mobyutil::MB_randInt(0x10);
      mobyutil::MB_randInt(2);
      uVar4 = partupd::SpawnPart_23(uVar15,uVar14,uVar13,uVar12,local_120);
      iVar5 = (int)uVar4;
      if (iVar5 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar22,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar19 = vectorSplatHalfWord(auVar18,1);
        auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar19,10,uVar4);
        *(undefined2 *)(iVar5 + 10) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
        uVar7 = storeVectorElementByteIndexed
                          (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                           auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                           auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                           auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,
                           0x2b,uVar4);
        *(undefined1 *)(iVar5 + 0x2b) = uVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    uVar8 = (ulonglong)(uint)(int)((double)animationSpeed * dVar17);
    do {
      iVar6 = partupd::SpawnPart_23(uVar3,uVar14,uVar14,dVar16,local_120);
      if (iVar6 != 0) {
        *(short *)(iVar6 + 10) = (short)uVar8;
        uVar7 = mobyutil::MB_randInt(0xff);
        *(undefined1 *)(iVar6 + 8) = uVar7;
        *(undefined4 *)(iVar6 + 0x24) = 2;
        *(undefined1 *)(iVar6 + 0x2a) = 0x7f;
        *(char *)(iVar6 + 0x2b) = (char)*(undefined2 *)(iVar6 + 10);
      }
      iVar9 = iVar9 + 1;
      dVar16 = (double)(float)(dVar16 - dVar11);
      uVar8 = uVar8 << 1;
    } while (iVar9 < 3);
  }
  return;
}



//==== 004b4020  ns=mobyupdate_helpers  size=0x644
// sig: undefined M921_004b4020(void)
// callers(1): 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(7): 0003fbd4 camera::camera19::Cam19_Disable; 000efb38 mobyfunc::DeleteMoby; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist; 0015cdb0 sound::sound_Kill; 005025e0 fastfunc::FastDiffRots

undefined8 mobyupdate_helpers::M921_004b4020(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int iVar14;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar17;
  ulonglong uVar15;
  float *pfVar18;
  longlong lVar16;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar23;
  ulonglong in_f26;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x140;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar10;
  puVar9[0x2a] = in_LR;
  puVar9[0x20] = in_f24;
  puVar9[0x21] = in_f25;
  puVar9[0x22] = in_f26;
  puVar9[0x23] = in_f27;
  puVar9[0x24] = in_f28;
  puVar9[0x25] = in_f29;
  puVar9[0x26] = in_f30;
  puVar9[0x27] = in_f31;
  puVar9[0x1f] = unaff_r31;
  puVar9[0x1e] = unaff_r30;
  pvVar7 = param_1->pVar;
  iVar17 = *(int *)((int)pvVar7 + 0x68);
  uVar8 = *(uint *)((int)pvVar7 + 0x8c);
  fVar1 = mobyutil::g_FrameTime * DAT_008f4540;
  puVar9[0x1d] = unaff_r29;
  puVar9[0x1c] = unaff_r28;
  puVar9[0x1b] = unaff_r27;
  iVar14 = mobyutil::MB_PathMoveDist
                     ((double)fVar1,Splines[iVar17],uVar10 - 0xd0,(int)pvVar7 + 0x60,
                      (int)pvVar7 + 100,iVar17 * 4,uVar8 >> 0x1f);
  iVar17 = *(int *)((int)pvVar7 + 0x8c);
  if ((iVar17 == 0) ||
     ((iVar14 == 0 && (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x13)))) {
    dVar23 = 0.0;
    mobyutil::AccelDelt(*(float *)(puVar9 + 0xe),DAT_008f4544,DAT_008f4548,0.0,&(param_1->pos).x,
                        iVar17,(float *)((int)pvVar7 + 0x70));
    mobyutil::AccelDelt(*(float *)((int)puVar9 + 0x74),DAT_008f4544,DAT_008f4548,(float)dVar23,
                        &(param_1->pos).y,iVar17,(float *)((int)pvVar7 + 0x74));
    mobyutil::AccelDelt(*(float *)(puVar9 + 0xf),DAT_008f4544,DAT_008f4548,(float)dVar23,
                        &(param_1->pos).z,iVar17,(float *)((int)pvVar7 + 0x78));
    fVar2 = *(float *)(puVar9 + 0xe) - (param_1->pos).x;
    dVar28 = (double)fVar2;
    dVar29 = (double)*(float *)(puVar9 + 0xf);
    fVar6 = *(float *)((int)puVar9 + 0x74) - (param_1->pos).y;
    dVar27 = (double)fVar6;
    dVar26 = (double)(param_1->pos).z;
    fVar1 = (param_1->rotation).z;
    dVar24 = ABS(dVar28);
    if ((0.009999999776482582 < dVar24) && (dVar21 = ABS(dVar27), 0.009999999776482582 < dVar21)) {
      *(float *)((int)puVar9 + 0x8c) = fVar2;
      *(float *)(puVar9 + 0x12) = fVar6;
      *(float *)((int)puVar9 + 0x94) = (float)(dVar24 - dVar21);
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
      dVar22 = ABS((double)*(float *)((int)puVar9 + 0x8c));
      if ((double)*(float *)((int)puVar9 + 0x94) - dVar23 < 0.0) {
        dVar22 = dVar21;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar21 = ABS((double)*(float *)(puVar9 + 0x12));
      if ((double)*(float *)((int)puVar9 + 0x94) - dVar23 < 0.0) {
        dVar21 = dVar24;
      }
      dVar25 = 0.7853981852531433;
      dVar24 = dVar23;
      if (dVar23 < dVar22) {
        lVar12 = uVar10 - 0x130;
        lVar19 = uVar10 - 0x78;
        lVar16 = uVar10 - 0x88;
        lVar20 = 2;
        fVar3 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xc4) = fVar3;
        *(float *)((int)puVar9 + 0xbc) = fVar3;
        *(float *)(puVar9 + 0x18) = fVar3;
        *(float *)(puVar9 + 0x17) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
        *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar3 * fVar3;
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar10 - 0x88;
        pfVar18 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar3 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar17 = (int)lVar12;
          iVar14 = (int)lVar19;
          lVar12 = lVar12 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0xb8)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar21 = (double)fastfunc::FastDiffRots((double)fVar1,dVar24);
      mobyutil::OrganicDeltAngSpeed(dVar24,(double)DAT_008f4544,(double)DAT_008f4548,dVar23,param_1)
      ;
      fVar6 = DAT_008f4548;
      fVar2 = DAT_008f4544;
      dVar22 = ABS((double)(float)(dVar29 - dVar26));
      *(float *)((int)puVar9 + 0x84) = (float)(dVar29 - dVar26);
      fVar1 = SQRT((float)(dVar28 * dVar28 + (double)(float)(dVar27 * dVar27)));
      dVar24 = ABS((double)fVar1);
      *(float *)(puVar9 + 0x10) = fVar1;
      *(float *)(puVar9 + 0x11) = (float)(dVar24 - dVar22);
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
      pfVar18 = (float *)((uint)(uVar15 << 2) | 0x735900);
      dVar29 = ABS((double)*(float *)(puVar9 + 0x10));
      if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
        dVar29 = dVar22;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar9 + 0x84));
      if ((double)*(float *)(puVar9 + 0x11) - dVar23 < 0.0) {
        dVar26 = dVar24;
      }
      fVar3 = pfVar18[1];
      dVar24 = dVar23;
      if (dVar23 < dVar29) {
        lVar12 = uVar10 - 0x130;
        lVar19 = uVar10 - 0x98;
        lVar16 = uVar10 - 0xa8;
        lVar20 = 2;
        fVar4 = (float)(dVar26 - dVar29) / (float)(dVar26 + dVar29);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)((int)puVar9 + 0x9c) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        *(float *)(puVar9 + 0x13) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
        *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar4 * fVar4;
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar10 - 0xa8;
        pfVar18 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar4;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar12 = 2;
        dVar29 = dVar23;
        do {
          iVar17 = (int)lVar13;
          iVar14 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar17 + 0x98)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar24 = (double)((float)(dVar29 + dVar25) * fVar1 + fVar3);
      }
      mobyutil::AccelDelt((float)-dVar24,fVar2,fVar6,(float)dVar23,&(param_1->rotation).y,
                          (int)pfVar18,(float *)((int)pvVar7 + 0x84));
      fVar1 = (float)(dVar21 / (double)DAT_008f4550);
      if (1.0 - (float)(dVar21 / (double)DAT_008f4550) < 0.0) {
        fVar1 = 1.0;
      }
      if (fVar1 - -1.0 < 0.0) {
        fVar1 = -1.0;
      }
      mobyutil::AccelDelt(DAT_008f454c * fVar1,0.003,DAT_008f4548,(float)dVar23,
                          &(param_1->rotation).x,0x8f0000,(float *)((int)pvVar7 + 0x80));
    }
    uVar11 = 0;
  }
  else {
    camera::camera19::Cam19_Disable(*(int *)((int)pvVar7 + 0x90));
    iVar17 = *(int *)((int)pvVar7 + 0x6c);
    if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == param_1)) &&
       (sound::g_SoundChannels[iVar17].state != '\0')) {
      sound::sound_Kill(iVar17);
    }
    *(undefined4 *)((int)pvVar7 + 0x6c) = 0xffffffff;
    mobyfunc::DeleteMoby(param_1);
    uVar11 = 1;
  }
  return uVar11;
}



//==== 004b4670  ns=mobyupdate_helpers  size=0x298
// sig: undefined M921_004b4670(void)
// callers(1): 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(0): 

void mobyupdate_helpers::M921_004b4670(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  Spline *pSVar13;
  longlong lVar12;
  int iVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar15 = 0;
  pSVar8 = Splines[*(int *)(iVar6 + 0x68)];
  pSVar13 = pSVar8;
  if (0 < pSVar8->cnt + -1) {
    do {
      fVar1 = pSVar13->points[0].y - pSVar13->points[1].y;
      fVar2 = pSVar13->points[0].x - pSVar13->points[1].x;
      fVar3 = pSVar13->points[0].z - pSVar13->points[1].z;
      iVar7 = pSVar8->cnt;
      iVar15 = iVar15 + 1;
      pSVar13->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar13 = (Spline *)pSVar13->points;
    } while (iVar15 < iVar7 + -1);
  }
  *(undefined4 *)(iVar6 + 0x60) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 100) = 0;
  fVar2 = pSVar8->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar8->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar8->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar8->points[0].w;
  fVar2 = pSVar8->points[1].x - fVar2;
  fVar3 = pSVar8->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar9 + 6) = fVar2;
  *(float *)((int)puVar9 + 0x34) = fVar3;
  *(float *)(puVar9 + 7) = fVar4 - fVar5;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar9 + 6));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)((int)puVar9 + 0x34));
  if (*(float *)(puVar9 + 7) - 0.0 < 0.0) {
    fVar10 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar18 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x14;
    lVar17 = uVar11 - 0x24;
    lVar20 = 2;
    fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar9 + 9) = fVar2;
    *(float *)(puVar9 + 8) = fVar2;
    *(float *)((int)puVar9 + 0x44) = fVar2;
    *(float *)((int)puVar9 + 0x3c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar9 + 8) = *(float *)(puVar9 + 8) * fVar4;
    *(float *)((int)puVar9 + 0x44) = *(float *)((int)puVar9 + 0x44) * fVar2;
    *(float *)(puVar9 + 9) = *(float *)(puVar9 + 9) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x3c) = *(float *)((int)lVar18 + 0x2c) * fVar2 * fVar2;
      iVar15 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar11 - 0x24;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar18;
    lVar17 = lVar12;
    do {
      fVar2 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x3c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar15 = (int)lVar12;
      iVar7 = (int)lVar18;
      lVar12 = lVar12 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar15 + 0x3c) + *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
              *(float *)(iVar7 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0x78) = 0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
  *(undefined4 *)(iVar6 + 0x70) = 0;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x80) = 0;
  return;
}



//==== 004b4930  ns=mobyupdate_unsorted  size=0xd9c
// sig: undefined UpdateMoby_921(MobyInstance * moby)
// callers(0): 
// callees(18): 0003fba8 camera::camera19::Cam19_Enable; 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004b3950 mobyupdate_helpers::M921_004b3950; 004b4020 mobyupdate_helpers::M921_004b4020; 004b4670 mobyupdate_helpers::M921_004b4670; 004b62f8 FUN_004b62f8; 004b6304 FUN_004b6304; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 005cd098 libc::printf
// strings: 00658aac: 'Enemy Fighter (moby921) with no flyPath. UID: %d - RAR\n' | 00658ae4: 'Enemy Fighter (moby921) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 921 */

void mobyupdate_unsorted::UpdateMoby_921(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  MobyModeBit MVar13;
  void *pvVar14;
  MobyClass *pMVar15;
  uint uVar16;
  Spline *pSVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  int iVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  longlong lVar24;
  longlong lVar25;
  int iVar27;
  float *pfVar29;
  longlong lVar28;
  longlong lVar30;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar31;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x150;
  puVar19 = (ulonglong *)lVar25;
  *puVar19 = uVar22;
  puVar19[0x2c] = in_LR;
  puVar19[0x28] = in_f30;
  puVar19[0x29] = in_f31;
  puVar19[0x27] = unaff_r31;
  uVar1 = moby->state;
  puVar19[0x26] = unaff_r30;
  pvVar14 = moby->pVar;
  uVar32 = ZEXT48(pvVar14);
  puVar19[0x25] = unaff_r29;
  puVar19[0x24] = unaff_r28;
  puVar19[0x23] = unaff_r27;
  puVar19[0x22] = unaff_r26;
  if ((uVar1 == '\0') &&
     ((uVar12 = moby->uid, (&DAT_00a545c4)[(short)uVar12] != '\0' ||
      ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar12 >> 5) << 2)) &
       1 << (uVar12 & 0x1f)) != 0)))) {
    FUN_004b6304(MobyInstance + *(int *)((int)pvVar14 + 0x8c));
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar26 = mobyutil::MB_damage(lVar23,0x800000,0);
  moby->damage = -1;
  if (((iVar26 != 0) && (*(int *)((int)pvVar14 + 0x8c) == -1)) && (moby->state != '\x03')) {
    if ((Level == Oltanis) &&
       (ShipsKilledCounts.Oltanis = ShipsKilledCounts.Oltanis + 1, 2 < ShipsKilledCounts.Oltanis)) {
      mobyutil::MB_UnlockSkillPoint(0x18);
    }
    moby->state = '\x03';
    mobyutil::MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar23,lVar23 + 0x10,&DAT_004b4908,
               0xffffffffffffffff);
    iVar26 = *(int *)((int)pvVar14 + 0x6c);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (((iVar26 != -1) && (sound::g_SoundChannels[iVar26].pMoby == moby)) &&
       (sound::g_SoundChannels[iVar26].state != '\0')) {
      sound::sound_Kill(iVar26);
    }
    *(undefined4 *)((int)pvVar14 + 0x6c) = 0xffffffff;
  }
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (*(int *)((int)pvVar14 + 0x68) == -1) {
        libc::printf("Enemy Fighter (moby921) with no flyPath. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar14 + 0x68)]->cnt == 0) {
        libc::printf("Enemy Fighter (moby921) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (((*(int *)((int)pvVar14 + 0x98) < 0) || (*(int *)((int)pvVar14 + 0x9c) < 0)) ||
         (*(int *)((int)pvVar14 + 0xa0) < 0)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M921_004b4670(lVar23);
      if (*(int *)((int)pvVar14 + 0x8c) == 0) {
        moby->state = '\x02';
        moby->updateDistance = -0x80;
      }
      else {
        moby->state = '\x01';
        moby->updateDistance = -1;
        pMVar21 = MobyInstance;
        iVar26 = *(int *)((int)pvVar14 + 0x8c);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        pMVar21[iVar26].modeBits = pMVar21[iVar26].modeBits | (UNK_40|DISABLED);
        *(undefined4 *)((int)pvVar14 + 0x94) = 0;
      }
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      *(undefined4 *)((int)pvVar14 + 0x6c) = 0xffffffff;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x4554,0x8f0000);
      moby->drawDistance = 0x80;
      auVar39 = vectorConvertFromSignedFixedPointWord(auVar40,0);
      auVar40 = loadVectorLeftIndexed(8,0x4b4908);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = vectorAddFloatingPoint
                          (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar41);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x7c,uVar32)
      ;
      *(undefined4 *)((int)pvVar14 + 0x7cU & 0xfffffffc) = uVar18;
    }
    else if ((((g_LevelFlags[Level][*(int *)((int)pvVar14 + 0x98)] == -1) &&
              (g_LevelFlags[Level][*(int *)((int)pvVar14 + 0x9c)] == -1)) &&
             ((g_LevelFlags[Level][*(int *)((int)pvVar14 + 0xa0)] == -1 &&
              ((DAT_00969fec == 0 && (g_standingOnMoby == 0)))))) &&
            (iVar26 = mobyutil::MB_IsPntInCuboid
                                (&g_heroPosition,(longlong)*(int *)((int)pvVar14 + 0xa4)),
            pMVar21 = MobyInstance, iVar26 != 0)) {
      iVar26 = *(int *)((int)pvVar14 + 0x8c);
      pMVar31 = MobyInstance + *(int *)((int)MobyInstance[iVar26].pVar + 4);
      fVar3 = (pMVar31->pos).x;
      *(float *)(puVar19 + 0xe) = fVar3;
      fVar4 = (pMVar31->pos).y;
      *(float *)((int)puVar19 + 0x74) = fVar4;
      fVar5 = (pMVar31->pos).z;
      *(float *)(puVar19 + 0xf) = fVar5;
      *(f32 *)((int)puVar19 + 0x7c) = (pMVar31->pos).w;
      fVar5 = fVar5 + 4.0;
      *(float *)(puVar19 + 0xf) = fVar5;
      fVar6 = GameCamera.rot.elevation;
      fVar4 = GameCamera.posY - fVar4;
      fVar3 = GameCamera.posX - fVar3;
      fVar5 = fVar5 - GameCamera.posZ;
      fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      *(float *)((int)puVar19 + 0x9c) = fVar5;
      fVar5 = ABS(fVar5);
      fVar4 = ABS(fVar3);
      *(float *)(puVar19 + 0x13) = fVar3;
      *(float *)(puVar19 + 0x14) = fVar4 - fVar5;
      dVar38 = 0.0;
      uVar32 = (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar19 + 0x13));
      if (*(float *)(puVar19 + 0x14) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar7 = ABS(*(float *)((int)puVar19 + 0x9c));
      if (*(float *)(puVar19 + 0x14) - 0.0 < 0.0) {
        fVar7 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar35 = dVar38;
      if (0.0 < fVar3) {
        lVar24 = uVar22 - 0x140;
        lVar30 = uVar22 - 0x5c;
        lVar28 = uVar22 - 0x6c;
        lVar33 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar7 = fVar3 * fVar3;
        *(float *)(puVar19 + 0x1e) = fVar3;
        *(float *)(puVar19 + 0x1d) = fVar3;
        *(float *)((int)puVar19 + 0xec) = fVar3;
        *(float *)((int)puVar19 + 0xe4) = fVar3;
        fVar3 = fVar7 * fVar7;
        *(float *)(puVar19 + 0x1d) = *(float *)(puVar19 + 0x1d) * fVar7;
        *(float *)((int)puVar19 + 0xec) = *(float *)((int)puVar19 + 0xec) * fVar3;
        *(float *)(puVar19 + 0x1e) = *(float *)(puVar19 + 0x1e) * fVar3 * fVar7;
        do {
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xd4) * fVar3 * fVar3;
          iVar27 = (int)lVar28;
          lVar28 = lVar28 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar30 = uVar22 - 0x6c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar28 = lVar30;
        do {
          fVar3 = *pfVar29;
          fVar7 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar24 + 0xe4) = *(float *)((int)lVar24 + 0xe4) * fVar3;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar28 = 2;
        lVar24 = lVar25;
        do {
          iVar27 = (int)lVar24;
          iVar20 = (int)lVar30;
          lVar24 = lVar24 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar27 + 0xe4)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar34 = (double)fastfunc::FastSubRots(fVar6,(float)-dVar35);
      fVar3 = (pMVar31->pos).x - GameCamera.posX;
      fVar4 = (pMVar31->pos).y - GameCamera.posY;
      dVar36 = ABS((double)fVar3);
      dVar37 = ABS((double)fVar4);
      *(float *)((int)puVar19 + 0x8c) = fVar3;
      *(float *)(puVar19 + 0x12) = fVar4;
      *(float *)((int)puVar19 + 0x94) = (float)(dVar36 - dVar37);
      fVar3 = GameCamera.rot.radius;
      uVar32 = (ulonglong)(*(uint *)((int)puVar19 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1d) & 4;
      dVar35 = ABS((double)*(float *)((int)puVar19 + 0x8c));
      if ((double)*(float *)((int)puVar19 + 0x94) - dVar38 < 0.0) {
        dVar35 = dVar37;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      dVar37 = ABS((double)*(float *)(puVar19 + 0x12));
      if ((double)*(float *)((int)puVar19 + 0x94) - dVar38 < 0.0) {
        dVar37 = dVar36;
      }
      if (dVar38 < dVar35) {
        lVar24 = uVar22 - 0x140;
        lVar28 = uVar22 - 0x8c;
        lVar30 = uVar22 - 0x7c;
        lVar33 = 2;
        fVar6 = (float)(dVar37 - dVar35) / (float)(dVar37 + dVar35);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar19 + 0x1a) = fVar6;
        *(float *)(puVar19 + 0x19) = fVar6;
        *(float *)((int)puVar19 + 0xcc) = fVar6;
        *(float *)((int)puVar19 + 0xc4) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)(puVar19 + 0x19) = *(float *)(puVar19 + 0x19) * fVar7;
        *(float *)((int)puVar19 + 0xcc) = *(float *)((int)puVar19 + 0xcc) * fVar6;
        *(float *)(puVar19 + 0x1a) = *(float *)(puVar19 + 0x1a) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar24 + 0xc4) = *(float *)((int)lVar24 + 0xb4) * fVar6 * fVar6;
          iVar27 = (int)lVar28;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar27 + 4) * fVar6 * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar30 = uVar22 - 0x8c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar28 = lVar30;
        do {
          fVar6 = *pfVar29;
          fVar7 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar24 + 0xc4) = *(float *)((int)lVar24 + 0xc4) * fVar6;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
          lVar28 = lVar28 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar24 = 2;
        do {
          iVar27 = (int)lVar25;
          iVar20 = (int)lVar30;
          lVar25 = lVar25 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar27 + 0xc4)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar4);
      }
      dVar38 = (double)fastfunc::FastSubRots(fVar3,(float)dVar38);
      if (((dVar38 < 0.48869219422340393) && (dVar34 < 0.3490658402442932)) &&
         (iVar27 = collproc::CollLine(0x951500,uVar22 - 0xe0,0x12,pMVar31,0), iVar27 == 0)) {
        uVar12 = moby->uid;
        iVar20 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
        iVar27 = (int)((longlong)((int)(short)uVar12 >> 5) << 2);
        MVar13 = moby->modeBits;
        uVar16 = *(uint *)(&DAT_00a54dd0 + iVar27);
        *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar20) =
             *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar20) | 1 << (uVar12 & 0x1f);
        pMVar15 = moby->pClass;
        moby->modeBits =
             MVar13 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                       DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                       HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        *(uint *)(&DAT_00a54dd0 + iVar27) = uVar16 | 1 << (uVar12 & 0x1f);
        moby->collision = pMVar15->collision;
        pMVar21[iVar26].modeBits =
             pMVar21[iVar26].modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->state = '\x02';
        camera::camera19::Cam19_Enable(*(int *)((int)pvVar14 + 0x90));
        pMVar31->drawDistance = 0xff;
        pMVar31->updateDistance = -1;
      }
    }
  }
  else if (bVar2 < 3) {
    iVar26 = mobyupdate_helpers::M921_004b4020(lVar23);
    if (iVar26 != 0) {
      return;
    }
    iVar26 = *(int *)((int)pvVar14 + 0x8c);
    if ((iVar26 != 0) && (*(int *)((int)pvVar14 + 0x94) < 2)) {
      if ((*(int *)((int)pvVar14 + 0x94) == 0) && (0x37 < *(int *)((int)pvVar14 + 0x60))) {
        *(undefined4 *)((int)pvVar14 + 0x94) = 1;
      }
      pMVar21 = MobyInstance;
      fVar3 = (moby->transform).v2.x;
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.y;
      fVar8 = (moby->transform).v0.z;
      fVar9 = (moby->pos).x;
      fVar10 = (moby->pos).y;
      fVar11 = (moby->pos).z;
      MobyInstance[iVar26].pos.w = (moby->pos).w;
      pMVar21[iVar26].pos.x = fVar9 + fVar6 * 0.21 + fVar3 * -1.24;
      pMVar21[iVar26].pos.y = fVar10 + fVar7 * 0.21 + fVar4 * -1.24;
      pMVar21[iVar26].pos.z = fVar11 + fVar8 * 0.21 + fVar5 * -1.24;
      pMVar21[iVar26].rotation.x = (moby->rotation).x;
      pMVar21[iVar26].rotation.y = (moby->rotation).y;
      pMVar21[iVar26].rotation.z = (moby->rotation).z;
      pMVar21[iVar26].rotation.w = (moby->rotation).w;
      if (*(int *)((int)pvVar14 + 0x94) == 1) {
        FUN_004b62f8(MobyInstance + *(int *)((int)pvVar14 + 0x8c));
        *(undefined4 *)((int)pvVar14 + 0x94) = 2;
      }
    }
  }
  else if ((bVar2 < 4) && (iVar26 = fastfunc::FastDecTimerS32(uVar32 + 0x7c), iVar26 != 0)) {
    iVar26 = *(int *)((int)pvVar14 + 0x68);
    auVar40 = ZEXT416(0xffffffff);
    auVar41 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x4554,0x8f0000);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar39 = vectorConvertFromSignedFixedPointWord(auVar40,0);
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    pSVar17 = Splines[iVar26];
    moby->collision = moby->pClass->collision;
    auVar40 = loadVectorLeftIndexed(8,0x4b4908);
    auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = vectorAddFloatingPoint
                        (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
    auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar39,auVar40,auVar41);
    auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
    auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar18 = storeVectorElementWordIndexed
                       (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x7c,uVar32);
    *(undefined4 *)((int)pvVar14 + 0x7cU & 0xfffffffc) = uVar18;
    moby->state = '\x02';
    *(undefined4 *)((int)pvVar14 + 0x60) = 0;
    fVar3 = 0.0;
    *(undefined4 *)((int)pvVar14 + 100) = 0;
    fVar4 = pSVar17->points[0].x;
    (moby->pos).x = fVar4;
    fVar5 = pSVar17->points[0].y;
    (moby->pos).y = fVar5;
    (moby->pos).z = pSVar17->points[0].z;
    (moby->pos).w = pSVar17->points[0].w;
    fVar4 = pSVar17->points[1].x - fVar4;
    fVar5 = pSVar17->points[1].y - fVar5;
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar19 + 0x10) = fVar4;
    *(float *)((int)puVar19 + 0x84) = fVar5;
    *(float *)(puVar19 + 0x11) = fVar6 - fVar7;
    uVar32 = (ulonglong)(*(uint *)(puVar19 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar19 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar19 + 0x84) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar19 + 0x10));
    if (*(float *)(puVar19 + 0x11) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
    fVar7 = ABS(*(float *)((int)puVar19 + 0x84));
    if (*(float *)(puVar19 + 0x11) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar24 = uVar22 - 0x140;
      lVar28 = uVar22 - 0xac;
      lVar30 = uVar22 - 0x9c;
      lVar33 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar19 + 0x16) = fVar4;
      *(float *)(puVar19 + 0x15) = fVar4;
      *(float *)((int)puVar19 + 0xac) = fVar4;
      *(float *)((int)puVar19 + 0xa4) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar19 + 0x15) = *(float *)(puVar19 + 0x15) * fVar7;
      *(float *)((int)puVar19 + 0xac) = *(float *)((int)puVar19 + 0xac) * fVar4;
      *(float *)(puVar19 + 0x16) = *(float *)(puVar19 + 0x16) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar24 + 0xa4) = *(float *)((int)lVar24 + 0x94) * fVar4 * fVar4;
        iVar26 = (int)lVar28;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar30 = uVar22 - 0xac;
      pfVar29 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar28 = lVar30;
      do {
        fVar4 = *pfVar29;
        fVar7 = pfVar29[1];
        pfVar29 = pfVar29 + 2;
        *(float *)((int)lVar24 + 0xa4) = *(float *)((int)lVar24 + 0xa4) * fVar4;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar24 = 2;
      do {
        iVar26 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar27 = (int)lVar30;
        lVar30 = lVar30 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar26 + 0xa4) + *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8)
                + *(float *)(iVar27 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar6;
    }
    (moby->rotation).z = fVar3;
    *(undefined4 *)((int)pvVar14 + 0x78) = 0;
    *(undefined4 *)((int)pvVar14 + 0x74) = 0;
    *(undefined4 *)((int)pvVar14 + 0x70) = 0;
    *(undefined4 *)((int)pvVar14 + 0x88) = 0;
    *(undefined4 *)((int)pvVar14 + 0x84) = 0;
    *(undefined4 *)((int)pvVar14 + 0x80) = 0;
  }
  mobyupdate_helpers::M921_004b3950(lVar23);
  uVar1 = moby->state;
  if (((uVar1 != '\0') && (uVar1 != '\x03')) &&
     ((uVar1 != '\x01' &&
      (iVar26 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar14 + 0x6c)), iVar26 == 0)))) {
    iVar26 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar14 + 0x6c) = iVar26;
  }
  return;
}



//==== 004b56cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M922_004b56cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M922_004b56cc(void)

{
  DAT_008f45a4 = 0x10000;
  return;
}



//==== 004b5710  ns=mobyupdate_helpers  size=0x49c
// sig: undefined M922_004b5710(void)
// callers(1): 004b5bd8 mobyupdate_unsorted::UpdateMoby_922
// callees(3): 000fc620 mobyutil::MB_randInt; 000fe484 mobyutil::MB_randRange; 00126f50 partupd::SpawnPart_23
// strings: 004b56e8: '?fffHCP' (raw)

void mobyupdate_helpers::M922_004b5710(void)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar7;
  int iVar6;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_d0 [48];
  
  iVar5 = 0;
  iVar6 = 0;
  uVar9 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar11 = 0x3fecccccc0000000;
  uVar12 = 0x41086a0000000000;
  auVar17 = loadVectorLeftIndexed(0x10,0x4b56e0);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    mobyutil::MB_randInt(0x10);
    mobyutil::MB_randInt(2);
    uVar3 = partupd::SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_d0);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar16 = vectorSplatHalfWord(auVar15,1);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xff;
      uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar2;
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      uVar7 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,
                         uVar3);
      *(undefined1 *)(iVar4 + 0x2b) = uVar7;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
  fVar1 = 100000.0;
  uVar9 = 0x3fa99999a0000000;
  dVar13 = 20000.0;
  do {
    dVar10 = (double)fVar1;
    iVar5 = partupd::SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_d0);
    if (iVar5 != 0) {
      *(short *)(iVar5 + 10) = (short)uVar8;
      uVar7 = mobyutil::MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar7;
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
    }
    iVar6 = iVar6 + 1;
    fVar1 = (float)(dVar10 - dVar13);
    uVar8 = uVar8 << 1;
  } while (iVar6 < 3);
  mobyutil::MB_randRange(0x40,0x80);
  iVar5 = mobyutil::MB_randInt(3);
  if (iVar5 != 0) {
    mobyutil::MB_randInt(4);
    mobyutil::MB_randInt(2);
    uVar9 = partupd::SpawnPart_23(uVar9,uVar14,uVar14,0x41124f8000000000,local_d0);
    iVar5 = (int)uVar9;
    if (iVar5 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x28,0x4b56e0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar15);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = vectorSplatHalfWord(auVar17,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar17,10,uVar9);
      *(undefined2 *)(iVar5 + 10) = uVar2;
      iVar6 = mobyutil::MB_randInt(2);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar5 + 3) = 0x44;
      }
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      *(undefined1 *)(iVar5 + 0x2a) = 0x40;
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      *(undefined4 *)(iVar5 + 0x24) = 2;
      auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar15,auVar18,auVar17);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xff;
      uVar7 = storeVectorElementByteIndexed
                        (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                         auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                         auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                         auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,0x2b,
                         uVar9);
      *(undefined1 *)(iVar5 + 0x2b) = uVar7;
    }
  }
  return;
}



//==== 004b5bd8  ns=mobyupdate_unsorted  size=0x720
// sig: undefined UpdateMoby_922(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 00103ab0 mobyutil::MB_LerpRot; 0010e030 mobyutil::MB_genericExplosion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004b5710 mobyupdate_helpers::M922_004b5710; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 922 */

void mobyupdate_unsorted::UpdateMoby_922(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x180;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x32] = in_LR;
  puVar9[0x2a] = in_f26;
  puVar9[0x2b] = in_f27;
  puVar9[0x2c] = in_f28;
  puVar9[0x2d] = in_f29;
  puVar9[0x2e] = in_f30;
  puVar9[0x2f] = in_f31;
  puVar9[0x29] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x28] = unaff_r30;
  piVar7 = (int *)moby->pVar;
  puVar9[0x27] = unaff_r29;
  puVar9[0x26] = unaff_r28;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*piVar7 < 0) {
        mobyfunc::DeleteMoby(moby);
      }
      else if (piVar7[1] < 0) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        fVar2 = (moby->pos).z;
        auVar31 = ZEXT416(0xffffffff);
        auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        moby->updateDistance = -1;
        moby->state = '\x01';
        piVar7[2] = -1;
        auVar31 = loadVectorLeftIndexed(0x45e0,0x8f0000);
        auVar32 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        (moby->pos).z = fVar2 + 1.5;
        auVar31 = loadVectorLeftIndexed(4,0x4b5bac);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = vectorAddFloatingPoint
                            (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar33);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0xc,
                           ZEXT48(piVar7));
        *(undefined4 *)((uint)(piVar7 + 3) & 0xfffffffc) = uVar8;
      }
    }
  }
  else if (bVar1 < 3) {
    iVar18 = *piVar7;
    dVar29 = (double)(Cuboids[iVar18].pos.y - (moby->pos).y);
    dVar30 = (double)(Cuboids[iVar18].pos.x - (moby->pos).x);
    dVar27 = (double)(Cuboids[iVar18].pos.z - (moby->pos).z);
    dVar23 = (double)(float)(dVar30 * dVar30 + (double)(float)(dVar29 * dVar29));
    dVar25 = (double)SQRT((float)(dVar27 * dVar27 + dVar23));
    fastfunc::FastDecTimerS32(ZEXT48(piVar7) + 0xc);
    dVar24 = (double)(mobyutil::g_FrameTime * DAT_008f45d8);
    if ((dVar25 < dVar24) || (dVar26 = 0.0, dVar25 <= 0.0)) {
      iVar18 = piVar7[2];
      if ((iVar18 != -1) &&
         ((sound::g_SoundChannels[iVar18].pMoby == moby &&
          (sound::g_SoundChannels[iVar18].state != '\0')))) {
        sound::sound_Kill(iVar18);
      }
      pMVar11 = MobyInstance;
      piVar7[2] = -1;
      if (pMVar11 + piVar7[1] != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(pMVar11 + piVar7[1]);
      }
      pCVar12 = Cuboids;
      iVar18 = *piVar7;
      fVar2 = (moby->transform).v0.x;
      (moby->pos).x = Cuboids[iVar18].pos.x;
      (moby->pos).y = pCVar12[iVar18].pos.y;
      fVar3 = (moby->transform).v0.y;
      (moby->pos).z = pCVar12[iVar18].pos.z;
      fVar4 = pCVar12[iVar18].pos.w;
      *(float *)(puVar9 + 0x18) = fVar2;
      (moby->pos).w = fVar4;
      fVar2 = (moby->transform).v0.w;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar2;
      *(undefined4 *)(puVar9 + 0x19) = 0x3f800000;
      puVar9[0x12] = 0;
      puVar9[0x14] = 1;
      puVar9[0x15] = 10;
      puVar9[0x16] = 0xffffffffffffffff;
      puVar9[0x17] = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4024000000000000,0x4018000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x403e000000000000,lVar14,uVar13 - 0xc0,lVar14 + 0x10,&DAT_004b5bac,0,0x14,10,0xc);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      dVar25 = (double)fastfunc::FastWrapRot((moby->rotation).x,0.034906585);
      *(float *)(puVar9 + 0x1c) = (float)dVar27;
      (moby->rotation).x = (float)dVar25;
      fVar2 = (moby->rotation).y;
      dVar25 = ABS((double)(float)SQRT(dVar23));
      *(float *)((int)puVar9 + 0xdc) = (float)SQRT(dVar23);
      *(float *)((int)puVar9 + 0xe4) = (float)(dVar25 - ABS(dVar27));
      dVar28 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0xdc));
      if ((double)*(float *)((int)puVar9 + 0xe4) - dVar26 < 0.0) {
        dVar23 = ABS(dVar27);
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar27 = ABS((double)*(float *)(puVar9 + 0x1c));
      if ((double)*(float *)((int)puVar9 + 0xe4) - dVar26 < 0.0) {
        dVar27 = dVar25;
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar25 = dVar26;
      if (dVar26 < dVar23) {
        lVar16 = uVar13 - 0x170;
        lVar21 = uVar13 - 0x68;
        lVar19 = uVar13 - 0x78;
        lVar22 = 2;
        fVar5 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x114) = fVar5;
        *(float *)((int)puVar9 + 0x10c) = fVar5;
        *(float *)(puVar9 + 0x22) = fVar5;
        *(float *)(puVar9 + 0x21) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar6;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar5;
        *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0xf8) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar13 - 0x78;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0x108) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar23 = dVar26;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar18 + 0x108)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar25 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar4);
      }
      dVar23 = (double)mobyutil::MB_LerpRot((double)fVar2,-dVar25,(double)DAT_008f45dc);
      *(float *)(puVar9 + 0x1a) = (float)dVar30;
      *(float *)((int)puVar9 + 0xd4) = (float)dVar29;
      (moby->rotation).y = (float)dVar23;
      fVar2 = (moby->rotation).z;
      *(float *)(puVar9 + 0x1b) = (float)(ABS(dVar30) - ABS(dVar29));
      dVar25 = (double)DAT_008f45dc;
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)(puVar9 + 0x1a));
      if ((double)*(float *)(puVar9 + 0x1b) - dVar26 < 0.0) {
        dVar23 = ABS(dVar29);
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar27 = ABS((double)*(float *)((int)puVar9 + 0xd4));
      if ((double)*(float *)(puVar9 + 0x1b) - dVar26 < 0.0) {
        dVar27 = ABS(dVar30);
      }
      fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar26 < dVar23) {
        lVar16 = uVar13 - 0x170;
        lVar21 = uVar13 - 0x88;
        lVar19 = uVar13 - 0x98;
        lVar22 = 2;
        fVar5 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xf4) = fVar5;
        *(float *)((int)puVar9 + 0xec) = fVar5;
        *(float *)(puVar9 + 0x1e) = fVar5;
        *(float *)(puVar9 + 0x1d) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar6;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar5;
        *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xd8) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar13 - 0x98;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar6 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xe8) = *(float *)((int)lVar16 + 0xe8) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar10 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar18 + 0xe8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar26 + dVar28) * fVar3 + fVar4);
      }
      dVar23 = (double)mobyutil::MB_LerpRot((double)fVar2,dVar26,dVar25);
      fVar2 = (moby->transform).v0.x;
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.z;
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      (moby->rotation).z = (float)dVar23;
      (moby->pos).x = (float)((double)fVar2 * dVar24 + (double)fVar5);
      (moby->pos).y = (float)((double)fVar3 * dVar24 + (double)fVar6);
      (moby->pos).z = (float)((double)fVar4 * dVar24 + (double)(moby->pos).z);
      mobyupdate_helpers::M922_004b5710(lVar14);
      iVar18 = sound::IsMobyPlayingSound(moby,piVar7[2]);
      if (iVar18 == 0) {
        iVar18 = sound::PlayMobySound(1,4,moby);
        piVar7[2] = iVar18;
      }
    }
  }
  return;
}



//==== 004b62f8  ns=Global  size=0xc
// sig: undefined FUN_004b62f8(void)
// callers(1): 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(0): 

void FUN_004b62f8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}



//==== 004b6304  ns=Global  size=0x78
// sig: undefined FUN_004b6304(void)
// callers(1): 004b4930 mobyupdate_unsorted::UpdateMoby_921
// callees(1): 000efb38 mobyfunc::DeleteMoby

void FUN_004b6304(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  moby = MobyInstance + *(int *)((int)param_1->pVar + 4);
  if ((moby != (MobyInstance *)0x0) && (moby->state < 0x80)) {
    mobyfunc::DeleteMoby(moby);
  }
  if (param_1->state < 0x80) {
    mobyfunc::DeleteMoby(param_1);
  }
  return;
}



//==== 004b63a8  ns=mobyupdate_helpers  size=0x2fc
// sig: undefined M923_004b63a8(void)
// callers(1): 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(2): 000fc620 mobyutil::MB_randInt; 00126f50 partupd::SpawnPart_23

void mobyupdate_helpers::M923_004b63a8(void)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 local_80 [48];
  
  iVar5 = 0;
  iVar7 = 0;
  uVar9 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar11 = 0x3fecccccc0000000;
  uVar12 = 0x40f86a0000000000;
  auVar17 = loadVectorLeftIndexed(0x10,0x4b6380);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  do {
    mobyutil::MB_randInt(0x10);
    mobyutil::MB_randInt(2);
    uVar3 = partupd::SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_80);
    iVar4 = (int)uVar3;
    if (iVar4 != 0) {
      auVar15 = ZEXT416(0xffffffff);
      auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar16 = vectorSplatHalfWord(auVar15,1);
      auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xff;
      uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
      *(undefined2 *)(iVar4 + 10) = uVar2;
      *(undefined4 *)(iVar4 + 0x24) = 2;
      *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
      uVar6 = storeVectorElementByteIndexed
                        (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                         auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                         auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                         auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,
                         uVar3);
      *(undefined1 *)(iVar4 + 0x2b) = uVar6;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
  fVar1 = 80000.0;
  uVar9 = 0x3fa99999a0000000;
  dVar13 = 20000.0;
  do {
    dVar10 = (double)fVar1;
    iVar5 = partupd::SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_80);
    if (iVar5 != 0) {
      *(short *)(iVar5 + 10) = (short)uVar8;
      uVar6 = mobyutil::MB_randInt(0xff);
      *(undefined1 *)(iVar5 + 8) = uVar6;
      *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
      *(undefined4 *)(iVar5 + 0x24) = 2;
      *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
    }
    iVar7 = iVar7 + 1;
    fVar1 = (float)(dVar10 - dVar13);
    uVar8 = uVar8 << 1;
  } while (iVar7 < 3);
  return;
}



//==== 004b66b8  ns=mobyupdate_helpers  size=0x384
// sig: undefined M923_004b66b8(void)
// callers(1): 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(3): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

undefined8 mobyupdate_helpers::M923_004b66b8(int param_1)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar17;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 in_r7;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xe0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = in_f31;
  puVar8[0x19] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  puVar8[0x1a] = unaff_r31;
  fVar4 = DAT_008f45e8;
  fVar5 = mobyutil::g_FrameTime;
  cVar2 = *(char *)(param_1 + 0x20);
  bVar1 = Level == Kalebo;
  fVar3 = *(float *)(iVar6 + 0xf8);
  puVar8[0x18] = unaff_r29;
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  if (bVar1) {
    fVar4 = 20.0;
  }
  dVar27 = 0.0;
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar5;
  }
  fVar9 = fVar5;
  if (0.0 - fVar3 < 0.0) {
    fVar9 = fVar3;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar9 = fVar3;
  }
  if (cVar2 == '\x05') {
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  }
  lVar14 = uVar11 - 0x70;
  uVar12 = mobyutil::MB_PathMoveDist
                     ((double)(fVar9 * fVar4),pSVar7,lVar14,iVar6 + 0xd0,iVar6 + 0xd4,in_r7,0);
  iVar17 = (int)lVar14;
  mobyutil::AccelDelt(*(float *)(puVar8 + 0xe),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x10),iVar17,(float *)(iVar6 + 0xe4));
  mobyutil::AccelDelt(*(float *)((int)puVar8 + 0x74),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x14),iVar17,(float *)(iVar6 + 0xe8));
  mobyutil::AccelDelt(*(float *)(puVar8 + 0xf),DAT_008f45ec,DAT_008f45f0,(float)dVar27,
                      (float *)(param_1 + 0x18),iVar17,(float *)(iVar6 + 0xec));
  fVar3 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
  dVar25 = (double)DAT_008f45ec;
  dVar26 = (double)DAT_008f45f0;
  dVar22 = ABS((double)fVar3);
  if ((0.009999999776482582 < dVar22) &&
     (dVar23 = ABS((double)fVar4), 0.009999999776482582 < dVar23)) {
    *(float *)(puVar8 + 0x10) = fVar3;
    *(float *)((int)puVar8 + 0x84) = fVar4;
    *(float *)(puVar8 + 0x11) = (float)(dVar22 - dVar23);
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    uVar15 = uVar20 << 2 | 0x735900;
    dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)(puVar8 + 0x11) - dVar27 < 0.0) {
      dVar24 = dVar23;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
    if ((double)*(float *)(puVar8 + 0x11) - dVar27 < 0.0) {
      dVar23 = dVar22;
    }
    fVar4 = *(float *)((int)uVar15 + 4);
    dVar22 = dVar27;
    if (dVar27 < dVar24) {
      lVar14 = uVar11 - 0xd0;
      lVar16 = uVar11 - 0x54;
      lVar19 = uVar11 - 0x44;
      lVar21 = 2;
      fVar5 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar9 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x13) = fVar5;
      *(float *)(puVar8 + 0x12) = fVar5;
      *(float *)((int)puVar8 + 0x94) = fVar5;
      *(float *)((int)puVar8 + 0x8c) = fVar5;
      fVar5 = fVar9 * fVar9;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar9;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar5;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar5 * fVar9;
      do {
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x7c) * fVar5 * fVar5;
        iVar17 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar11 - 0x54;
      uVar15 = ZEXT48(&DAT_007358e0);
      lVar21 = 4;
      lVar14 = lVar13;
      lVar16 = lVar19;
      do {
        pfVar18 = (float *)uVar15;
        fVar5 = pfVar18[1];
        uVar15 = uVar15 + 8;
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x8c) * *pfVar18;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar14 = 2;
      do {
        iVar17 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar4);
    }
    mobyutil::OrganicDeltAngSpeed(dVar22,dVar25,dVar26,dVar27,param_1,uVar15,iVar6 + 0xf0);
  }
  return uVar12;
}



//==== 004b6a40  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M923_004b6a40(void)
// callers(1): 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(0): 

void mobyupdate_helpers::M923_004b6a40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar6 = *(int *)(iVar5 + 0xf4);
  if (iVar6 != 0) {
    fVar1 = *(float *)(param_1 + 0xc4);
    fVar2 = *(float *)(param_1 + 0xc0);
    fVar3 = *(float *)(param_1 + 200);
    fVar4 = 0.0;
    fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar9 = DAT_008f45f4 / fVar11;
    fVar7 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar7 = fVar2 * fVar9;
    }
    fVar8 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    fVar10 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar7 = fVar2 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar9;
    }
    *(float *)(iVar6 + 0x10) = *(float *)(param_1 + 0x10) + fVar7;
    *(float *)(iVar6 + 0x14) = *(float *)(param_1 + 0x14) + fVar8;
    *(float *)(iVar6 + 0x18) = *(float *)(param_1 + 0x18) + fVar10;
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    fVar1 = *(float *)(param_1 + 0xe4);
    fVar2 = *(float *)(param_1 + 0xe0);
    fVar3 = *(float *)(param_1 + 0xe8);
    iVar5 = *(int *)(iVar5 + 0xf4);
    fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar9 = DAT_008f45f8 / fVar11;
    fVar7 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar7 = fVar3 * fVar9;
    }
    fVar8 = fVar4;
    if (0.0 - fVar11 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (0.0 - fVar11 < 0.0) {
      fVar4 = fVar2 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar8 = fVar1 * fVar9;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar4 = fVar2 * fVar9;
    }
    *(float *)(iVar5 + 0x18) = *(float *)(iVar5 + 0x18) + fVar7;
    *(float *)(iVar5 + 0x14) = *(float *)(iVar5 + 0x14) + fVar8;
    *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) + fVar4;
  }
  return;
}



//==== 004b6b88  ns=mobyupdate_helpers  size=0x314
// sig: undefined M923_004b6b88(void)
// callers(1): 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(0): 

void mobyupdate_helpers::M923_004b6b88(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  longlong lVar12;
  Spline *pSVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar13 = 0;
  pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  pSVar15 = pSVar7;
  if (0 < pSVar7->cnt + -1) {
    do {
      fVar1 = pSVar15->points[0].y - pSVar15->points[1].y;
      fVar2 = pSVar15->points[0].x - pSVar15->points[1].x;
      fVar3 = pSVar15->points[0].z - pSVar15->points[1].z;
      iVar13 = iVar13 + 1;
      pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar15 = (Spline *)pSVar15->points;
    } while (iVar13 < pSVar7->cnt + -1);
  }
  *(undefined4 *)(iVar6 + 0xd0) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0xd4) = 0;
  fVar2 = pSVar7->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar7->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar7->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar7->points[0].w;
  fVar2 = pSVar7->points[1].x - fVar2;
  fVar3 = pSVar7->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar8 + 6) = fVar2;
  *(float *)((int)puVar8 + 0x34) = fVar3;
  *(float *)(puVar8 + 7) = fVar4 - fVar5;
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar2) {
    lVar18 = uVar11 - 0x50;
    lVar14 = uVar11 - 0x14;
    lVar17 = uVar11 - 0x24;
    lVar20 = 2;
    fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)(puVar8 + 9) = fVar2;
    *(float *)(puVar8 + 8) = fVar2;
    *(float *)((int)puVar8 + 0x44) = fVar2;
    *(float *)((int)puVar8 + 0x3c) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar4;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar2;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x3c) = *(float *)((int)lVar18 + 0x2c) * fVar2 * fVar2;
      iVar13 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar11 - 0x24;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar18;
    lVar17 = lVar12;
    do {
      fVar2 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x3c) = *(float *)((int)lVar17 + 0x3c) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar4;
      lVar14 = lVar14 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar13 = (int)lVar12;
      iVar10 = (int)lVar18;
      lVar12 = lVar12 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar13 + 0x3c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  if (*(int *)(iVar6 + 0xfc) != 1) {
    iVar13 = 0;
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
    pSVar15 = pSVar7;
    if (0 < pSVar7->cnt + -1) {
      do {
        fVar1 = pSVar15->points[0].y - pSVar15->points[1].y;
        fVar2 = pSVar15->points[0].x - pSVar15->points[1].x;
        fVar3 = pSVar15->points[0].z - pSVar15->points[1].z;
        iVar13 = iVar13 + 1;
        pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        pSVar15 = (Spline *)pSVar15->points;
      } while (iVar13 < pSVar7->cnt + -1);
    }
  }
  return;
}



//==== 004b6ec0  ns=mobyupdate_unsorted  size=0xcb4
// sig: undefined UpdateMoby_923(MobyInstance * moby)
// callers(0): 
// callees(19): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00109b40 mobyutil::AccelDelt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 004b63a8 mobyupdate_helpers::M923_004b63a8; 004b66b8 mobyupdate_helpers::M923_004b66b8; 004b6a40 mobyupdate_helpers::M923_004b6a40; 004b6b88 mobyupdate_helpers::M923_004b6b88; 004bfdf8 FUN_004bfdf8; 004bff20 FUN_004bff20; 005cd098 libc::printf
// strings: 00658b38: 'MineBot (moby923) with no flyPath. UID: %d - RAR\n' | 00658b70: 'MineBot (moby923) with a flyPath that has no points. UID: %d - RAR\n' | 00658bb8: 'MineBot (moby923) with no exitPath. UID: %d - RAR\n' | 00658bf0: 'MineBot (moby923) with a exitPath that has no points. UID: %d - RAR\n' | 00658c38: 'MineBot (moby923) with no activation cuboid. UID: %d - RAR\n'

/* Moby 923 */

void mobyupdate_unsorted::UpdateMoby_923(MobyInstance *moby)

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
  f32 fVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  u8 uVar22;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar23;
  Vec4 *unused;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  float fVar31;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x150;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar14;
  puVar12[0x2c] = in_LR;
  puVar12[0x27] = in_f29;
  puVar12[0x28] = in_f30;
  puVar12[0x29] = in_f31;
  puVar12[0x26] = unaff_r31;
  bVar1 = moby->field43_0x70;
  puVar12[0x23] = unaff_r28;
  pvVar7 = moby->pVar;
  puVar12[0x25] = unaff_r30;
  puVar12[0x24] = unaff_r29;
  puVar12[0x22] = unaff_r27;
  puVar12[0x21] = unaff_r26;
  if (((bVar1 & 2) != 0) && (moby->updateId == moby->animationId && moby->updateId == '\x01')) {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar15,4,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  if (((DAT_00969f1c == moby) && (moby->animationId != '\x01')) && (moby->updateId != '\x01')) {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  iVar19 = mobyutil::MB_damage(lVar15,0x210000,0);
  uVar22 = moby->state;
  if ((iVar19 != 0) && (uVar22 != '\x06')) {
    *(undefined4 *)((int)pvVar7 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
    fVar31 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar7 + 0x88) = mobyutil::g_FrameTime * 24.0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x8c) = fVar31 * 12.0;
    fVar31 = (moby->pos).x - g_heroPosition.x;
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar31);
    fVar5 = ABS(fVar2);
    *(float *)(puVar12 + 0x11) = fVar31;
    *(float *)((int)puVar12 + 0x8c) = fVar2;
    *(float *)(puVar12 + 0x12) = fVar3 - fVar5;
    dVar28 = 0.0;
    uVar24 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
    uVar16 = uVar24 << 2;
    fVar31 = ABS(*(float *)(puVar12 + 0x11));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar31 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar16);
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar12 + 0x8c));
    if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar31) {
      lVar17 = uVar14 - 0x140;
      lVar25 = uVar14 - 0x6c;
      lVar23 = uVar14 - 0x7c;
      lVar27 = 2;
      fVar31 = (fVar4 - fVar31) / (fVar4 + fVar31);
      fVar3 = fVar31 * fVar31;
      *(float *)(puVar12 + 0x1c) = fVar31;
      *(float *)(puVar12 + 0x1b) = fVar31;
      *(float *)((int)puVar12 + 0xdc) = fVar31;
      *(float *)((int)puVar12 + 0xd4) = fVar31;
      fVar31 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar3;
      *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar31;
      *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar31 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar31 * fVar31;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar31 * fVar31;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar14 - 0x7c;
      uVar16 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        pfVar26 = (float *)uVar16;
        fVar31 = pfVar26[1];
        uVar16 = uVar16 + 8;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * *pfVar26;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar31;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xd4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::MB_StartKick(dVar28,lVar15,(int)pvVar7 + 0x70,uVar16,1,1,0);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
    mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
    uVar22 = '\x06';
    moby->state = '\x06';
  }
  moby->damage = -1;
  if (uVar22 == '\x06') {
    uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar21 & 3) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_004b6e9c,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar10 = (moby->pos).z;
    uVar21 = (int)fVar10 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar10) - uVar21) < 0x40a00000) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar22 == '\x05') {
    iVar19 = mobyupdate_helpers::M923_004b66b8(lVar15);
    if (iVar19 == 0) {
      mobyupdate_helpers::M923_004b63a8(lVar15);
    }
    else {
      MVar6 = moby->modeBits;
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar7 + 0xd0) = 0;
      iVar19 = *(int *)((int)pvVar7 + 0xd8);
      moby->modeBits = MVar6 | (UNK_40|DISABLED);
      fVar31 = 0.0;
      *(undefined4 *)((int)pvVar7 + 0xf0) = 0;
      *(undefined4 *)((int)pvVar7 + 0xd4) = 0;
      *(undefined4 *)((int)pvVar7 + 0xec) = 0;
      *(undefined4 *)((int)pvVar7 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar7 + 0xe4) = 0;
      pSVar11 = Splines[iVar19];
      fVar2 = pSVar11->points[0].x;
      (moby->pos).x = fVar2;
      fVar5 = pSVar11->points[0].y;
      (moby->pos).y = fVar5;
      (moby->pos).z = pSVar11->points[0].z;
      (moby->pos).w = pSVar11->points[0].w;
      fVar2 = pSVar11->points[1].x - fVar2;
      fVar5 = pSVar11->points[1].y - fVar5;
      fVar3 = ABS(fVar2);
      fVar4 = ABS(fVar5);
      *(float *)(puVar12 + 0xe) = fVar2;
      *(float *)((int)puVar12 + 0x74) = fVar5;
      *(float *)(puVar12 + 0xf) = fVar3 - fVar4;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar12 + 0xe));
      if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar4;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = ABS(*(float *)((int)puVar12 + 0x74));
      if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar17 = uVar14 - 0x140;
        lVar23 = uVar14 - 0xbc;
        lVar25 = uVar14 - 0xac;
        lVar27 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar12 + 0x14) = fVar2;
        *(float *)(puVar12 + 0x13) = fVar2;
        *(float *)((int)puVar12 + 0x9c) = fVar2;
        *(float *)((int)puVar12 + 0x94) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar4;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar14 - 0xbc;
        pfVar26 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar4 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar31 = fVar31 + *(float *)(iVar19 + 0x94) + *(float *)(iVar13 + 4) +
                   *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar31 = (fVar31 + 0.7853982) * fVar5 + fVar3;
      }
      (moby->rotation).z = fVar31;
    }
  }
  else if (uVar22 == '\x04') {
    if (*(int *)((int)pvVar7 + 0xfc) == 0) {
      mobyupdate_helpers::M923_004b6a40(lVar15);
    }
    iVar19 = mobyupdate_helpers::M923_004b66b8(lVar15);
    if (iVar19 != 0) {
      moby->state = '\x03';
      mobyutil::MB_SetAnimation(lVar15,3,0,5);
    }
    mobyupdate_helpers::M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\x03') {
    pvVar9 = moby->pVar;
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0xd8)];
    if (*(int *)((int)pvVar9 + 0xfc) == 0) {
      mobyupdate_helpers::M923_004b6a40(lVar15);
    }
    dVar30 = 0.0;
    unused = pSVar11->points + pSVar11->cnt + -1;
    dVar29 = (double)unused->y;
    dVar28 = (double)unused->z;
    mobyutil::AccelDelt(unused->x,DAT_008f45ec,DAT_008f45f0,0.0,&(moby->pos).x,(int)unused,
                        (float *)((int)pvVar9 + 0xe4));
    mobyutil::AccelDelt((float)dVar29,DAT_008f45ec,DAT_008f45f0,(float)dVar30,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar9 + 0xe8));
    fVar31 = mobyutil::AccelDelt((float)dVar28,DAT_008f45ec,DAT_008f45f0,(float)dVar30,
                                 &(moby->pos).z,(int)unused,(float *)((int)pvVar9 + 0xec));
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      if (*(int *)((int)pvVar9 + 0xfc) == 1) {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar9 + 0xf0) = 0;
        mobyutil::MB_SetAnimationNoBlend(lVar15,4,0);
      }
      else {
        if (*(int *)((int)pvVar9 + 0xf4) != 0) {
          FUN_004bff20((double)fVar31);
          *(undefined4 *)((int)pvVar9 + 0xf4) = 0;
        }
        moby->state = '\x05';
        mobyutil::MB_SetAnimation(lVar15,0,0,0x14);
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
        *(undefined4 *)((int)pvVar9 + 0xd4) = 0;
      }
    }
    mobyupdate_helpers::M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\x02') {
    iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0xe0));
    if (iVar19 != 0) {
      if (*(int *)((int)pvVar7 + 0xfc) == 1) {
        mobyutil::MB_SetAnimationNoBlend(lVar15,0,0);
      }
      else {
        uVar20 = FUN_004bfdf8(lVar15,lVar15 + 0x10);
        *(undefined4 *)((int)pvVar7 + 0xf4) = uVar20;
        mobyupdate_helpers::M923_004b6a40(lVar15);
        mobyutil::MB_SetAnimationNoBlend(lVar15,2,0);
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar8 = moby->pClass->collision;
      moby->state = '\x04';
      moby->collision = puVar8;
    }
  }
  else if (uVar22 == '\x01') {
    fVar31 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar31);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar12 + 0x7c) = fVar31;
    *(float *)(puVar12 + 0x10) = fVar2;
    *(float *)((int)puVar12 + 0x84) = fVar3 - fVar5;
    dVar28 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
    fVar31 = ABS(*(float *)((int)puVar12 + 0x7c));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar31 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar12 + 0x10));
    if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar31) {
      lVar17 = uVar14 - 0x140;
      lVar25 = uVar14 - 0x8c;
      lVar23 = uVar14 - 0x9c;
      lVar27 = 2;
      fVar31 = (fVar4 - fVar31) / (fVar4 + fVar31);
      fVar3 = fVar31 * fVar31;
      *(float *)(puVar12 + 0x18) = fVar31;
      *(float *)(puVar12 + 0x17) = fVar31;
      *(float *)((int)puVar12 + 0xbc) = fVar31;
      *(float *)((int)puVar12 + 0xb4) = fVar31;
      fVar31 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar3;
      *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar31;
      *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar31 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar31 * fVar31;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar31 * fVar31;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar14 - 0x9c;
      pfVar26 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar31 = *pfVar26;
        fVar3 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar31;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar13 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar28,0x3f747ae140000000,0x3fc99999a0000000,lVar15,&DAT_004b6e9c,(int)pvVar7 + 0xf0)
    ;
    mobyupdate_helpers::M923_004b63a8(lVar15);
  }
  else if (uVar22 == '\0') {
    if (*(int *)((int)pvVar7 + 0xfc) == 2) {
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar7 + 0xf0) = 0;
      mobyutil::MB_SetAnimationNoBlend(lVar15,4,0);
    }
    else {
      if (*(int *)((int)pvVar7 + 0xd8) == -1) {
        libc::printf("MineBot (moby923) with no flyPath. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar7 + 0xd8)]->cnt == 0) {
        libc::printf("MineBot (moby923) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar7 + 0xfc) != 1) {
        if (*(int *)((int)pvVar7 + 0xdc) == -1) {
          libc::printf("MineBot (moby923) with no exitPath. UID: %d - RAR\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar7 + 0xdc)]->cnt == 0) {
          libc::printf("MineBot (moby923) with a exitPath that has no points. UID: %d - RAR\n",
                       moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      if (*(int *)((int)pvVar7 + 0xe0) == -1) {
        libc::printf("MineBot (moby923) with no activation cuboid. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M923_004b6b88(lVar15);
      moby->state = '\x02';
      moby->updateDistance = -0x80;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    *(undefined4 *)((int)pvVar7 + 0xf4) = 0;
  }
  mobyutil::MB_ColorDyingMoby(lVar15,(int)pvVar7 + 0x60);
  return;
}



//==== 004b7b74  ns=mobyupdate_helpers  size=0x14
// sig: undefined M924_004b7b74(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M924_004b7b74(void)

{
  DAT_008f4664 = 0x10000;
  return;
}



//==== 004b7b88  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M924_004b7b88(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M924_004b7b88(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
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



//==== 004b7ce0  ns=mobyupdate_unsorted  size=0xce8
// sig: undefined UpdateMoby_924(MobyInstance * moby)
// callers(0): 
// callees(18): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00110b70 mobyutil::MB_IsPntInCuboid; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658c7c: 'Scrap Merchant'

/* Moby 924 */

void mobyupdate_unsorted::UpdateMoby_924(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  gameMode_t gVar14;
  ulonglong uVar15;
  int iVar19;
  ulonglong uVar16;
  undefined4 uVar20;
  longlong lVar17;
  longlong lVar18;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x150;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar15;
  puVar11[0x2c] = in_LR;
  puVar11[0x25] = in_f27;
  puVar11[0x26] = in_f28;
  puVar11[0x27] = in_f29;
  puVar11[0x28] = in_f30;
  puVar11[0x29] = in_f31;
  puVar11[0x24] = unaff_r31;
  puVar11[0x23] = unaff_r30;
  gVar14 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar11[0x22] = unaff_r29;
  puVar11[0x21] = unaff_r28;
  puVar11[0x20] = unaff_r27;
  puVar11[0x1f] = unaff_r26;
  if ((gVar14 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar19 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar25[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar19 = iVar19 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar19 < sVar23);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_SeenPlanets.Quartu != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      uVar8 = moby->uid;
      if (((&DAT_00a545c4)[(short)uVar8] != '\0') ||
         ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2))
          & 1 << (uVar8 & 0x1f)) != 0)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x44) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar9 + 0x48) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(char **)((int)pvVar9 + 0x20) = "Scrap Merchant";
      FUN_004d3720(moby,uVar26);
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar9 + 8) = 1;
    }
    else {
      if ((*(char *)((int)pvVar9 + 8) == '\x01') &&
         (iVar19 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x40)), iVar19 != 0))
      {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
          mobyfunc::SetLevelFlag();
          respawn::SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x44)].pos,
                     (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x44)].rot);
        }
        uVar20 = 0x437f0000;
      }
      else {
        uVar20 = 0x40400000;
      }
      *(undefined4 *)((int)pvVar9 + 0xc) = uVar20;
      iVar19 = FUN_004d3870(moby,uVar26);
      if (iVar19 != 0) {
        iVar19 = *(int *)((int)pvVar9 + 0x48);
        DAT_0095cd9a = 1;
        DAT_0095cd60 = Cuboids[iVar19].pos.x;
        DAT_0095cd64 = Cuboids[iVar19].pos.y;
        DAT_0095cd68 = Cuboids[iVar19].pos.z;
        DAT_0095cd6c = Cuboids[iVar19].pos.w;
        DAT_0095cd7c = 0;
        DAT_0095cd74 = 0;
        DAT_0095cd70 = 0;
        DAT_0095cd78 = Cuboids[iVar19].rot.z;
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if ((g_gameMode != GAME_MODE_SCENE) && (moby->state = '\x01', *(short *)((int)pvVar9 + 4) == 4))
    {
      mobyutil::MB_UnlockLevel(Quartu);
      mobyutil::MB_ToastMessageByIndex(0xf);
      uVar8 = moby->uid;
      iVar13 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      iVar19 = (int)((longlong)((int)(short)uVar8 >> 5) << 2);
      uVar10 = *(uint *)(&DAT_00a54dd0 + iVar19);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar13) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar13) | 1 << (uVar8 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar19) = uVar10 | 1 << (uVar8 & 0x1f);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  dVar35 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b8924;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b83d0:
    if (*(int *)((int)pvVar9 + 0x160) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x160) = 0;
      *(float *)((int)pvVar9 + 0x150) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x15c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = hero::g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar11 + 0x11) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar17 = uVar15 - 0x140;
      lVar21 = uVar15 - 0x7c;
      lVar24 = uVar15 - 0x6c;
      lVar27 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)(puVar11 + 0x1b) = fVar5;
      *(float *)((int)puVar11 + 0xdc) = fVar5;
      *(float *)((int)puVar11 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar6;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar5;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar5 * fVar5;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar15 - 0x7c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar24;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar5;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar13 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar19 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_004b83d0;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar26 + 0x160);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x20,0x4b7c7c);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x160,uVar26
                         );
      *(undefined4 *)((int)pvVar9 + 0x160U & 0xfffffffc) = uVar20;
    }
  }
  iVar19 = fastfunc::FastDecTimerS32(uVar26 + 0x164);
  if (iVar19 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x164) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x160) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x150);
    fVar3 = *(float *)((int)pvVar9 + 0x154);
    fVar5 = *(float *)((int)pvVar9 + 0x158);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar34 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar32 = (double)fVar3;
  *(float *)((int)puVar11 + 0x7c) = fVar2;
  *(float *)(puVar11 + 0x10) = fVar3;
  dVar31 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar16 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar30 = ABS((double)*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar24 = uVar15 - 0x8c;
    lVar21 = uVar15 - 0x9c;
    lVar27 = 2;
    fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x18) = fVar5;
    *(float *)(puVar11 + 0x17) = fVar5;
    *(float *)((int)puVar11 + 0xbc) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar5;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0x9c;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar17;
      iVar13 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0x74) = (float)dVar31;
  fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar2);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)(puVar11 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar16 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar17 = uVar15 - 0x140;
    lVar21 = uVar15 - 0xbc;
    lVar24 = uVar15 - 0xac;
    lVar27 = 2;
    fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar5;
    *(float *)((int)puVar11 + 0x9c) = fVar5;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
      iVar19 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar15 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar24;
    do {
      fVar5 = *pfVar22;
      fVar6 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar17 = 2;
    do {
      iVar19 = (int)lVar18;
      iVar13 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xb8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xb4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x138) = (float)(dVar28 * 0.4000000059604645);
LAB_004b8924:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x50,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xd0,1);
  return;
}



//==== 004b89c8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M925_004b89c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M925_004b89c8(void)

{
  DAT_008f46d4 = 0x10000;
  return;
}



//==== 004b89e0  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M925_004b89e0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M925_004b89e0(int param_1)

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
          mobyfunc::AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
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



//==== 004b8b48  ns=mobyupdate_unsorted  size=0xc38
// sig: undefined UpdateMoby_925(MobyInstance * moby)
// callers(0): 
// callees(20): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658c94: 'Shifty Salesman'

/* Moby 925 */

void mobyupdate_unsorted::UpdateMoby_925(MobyInstance *moby)

{
  u8 uVar1;
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
  longlong lVar14;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  longlong lVar17;
  short sVar22;
  float *pfVar21;
  longlong lVar20;
  longlong lVar23;
  ulonglong unaff_r26;
  undefined4 *puVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar24[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar24[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar22 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar18 = iVar18 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar18 < sVar22);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 40.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar14);
    moby->shadow = ' ';
  }
  if (moby->state == 0) {
    if (UnlockableItems.ryno != '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    (moby->pos).z = (moby->pos).z + 0.5;
    dVar27 = (double)mobyutil::GetGroundZ(lVar14 + 0x10,0);
    (moby->pos).z = (float)dVar27;
    *(char **)((int)pvVar8 + 0x20) = "Shifty Salesman";
    moby->state = '\x01';
    FUN_004d3720(lVar14,uVar25);
  }
  else if (moby->state < 2) {
    iVar18 = FUN_004d3870(lVar14,uVar25);
    if (iVar18 != 0) {
      mobyutil::MB_SetPointAheadOfMoby(0x4000000000000000,lVar14);
    }
    if ((*(short *)((int)pvVar8 + 4) == 3) || (*(short *)((int)pvVar8 + 4) == 4)) {
      mobyutil::MB_UnlockItem(0x17,1);
      mobyutil::MB_UnlockTrophy(ULTIMATE_ANIMAL);
      mobyutil::MB_ToastMessage(0x1396,0xffffffffffffffff);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    dVar27 = 10.5;
    uVar1 = moby->animationId;
    if (uVar1 == '\0') {
      iVar18 = fastfunc::FastDecTimerS32(uVar25 + 0x154);
      uVar1 = moby->animationId;
      if (iVar18 != 0) {
        dVar28 = (double)mobyutil::MB_randRangeFloat(1200.0,2400.0);
        uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar8 + 0x154) = uVar19;
        if (moby->animationId != '\x01') {
          puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar27);
          mobyutil::MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
        }
        goto LAB_004b8ec0;
      }
    }
    if ((uVar1 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
      puVar9[0x1f] = (longlong)(int)((double)animationSpeed * dVar27);
      mobyutil::MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
  }
LAB_004b8ec0:
  dVar27 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004b96dc;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004b9188:
    if (*(int *)((int)pvVar8 + 0x158) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x158) = 0;
      *(float *)((int)pvVar8 + 0x140) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x144) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x148) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x14c) = DAT_00969dbc;
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
    uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar13 - 0x150;
      lVar20 = uVar13 - 0x8c;
      lVar23 = uVar13 - 0x7c;
      lVar26 = 2;
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
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar5 * fVar5;
        iVar18 = (int)lVar20;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar13 - 0x8c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar23;
      do {
        fVar5 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar11 = (int)lVar23;
        lVar16 = lVar16 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar28) goto LAB_004b9188;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar25 + 0x158);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x30,0x4b8ad4);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x158,uVar25
                         );
      *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar25 + 0x15c);
  if (iVar18 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x15c) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar8 + 0x140));
    *(float *)((int)pvVar8 + 0x140) = *(float *)((int)pvVar8 + 0x140) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x144) = *(float *)((int)pvVar8 + 0x144) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x148) = *(float *)((int)pvVar8 + 0x148) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x158) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x140);
    fVar3 = *(float *)((int)pvVar8 + 0x144);
    fVar5 = *(float *)((int)pvVar8 + 0x148);
  }
  else {
    dVar27 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar34 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar32 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar31 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar16 = uVar13 - 0x150;
    lVar23 = uVar13 - 0x9c;
    lVar20 = uVar13 - 0xac;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
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
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xac;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    lVar16 = lVar17;
    dVar28 = dVar33;
    do {
      iVar18 = (int)lVar16;
      iVar11 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar31;
  fVar2 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar16 = uVar13 - 0x150;
    lVar20 = uVar13 - 0xcc;
    lVar23 = uVar13 - 0xbc;
    lVar26 = 2;
    fVar5 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
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
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar5 * fVar5;
      iVar18 = (int)lVar20;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xcc;
    pfVar21 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar5;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar16 = 2;
    do {
      iVar18 = (int)lVar17;
      iVar11 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xa8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar8 + 0xa4) = (float)dVar31;
  *(float *)((int)pvVar8 + 0x128) = (float)(dVar28 * 0.4000000059604645);
LAB_004b96dc:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar14,uVar25 + 0x40,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * dVar28),lVar14,uVar25 + 0xc0,1);
  return;
}



//==== 004b9780  ns=mobyupdate_helpers  size=0x14
// sig: undefined M926_004b9780(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M926_004b9780(void)

{
  DAT_008f4744 = 0x10000;
  return;
}



//==== 004b9798  ns=mobyupdate_unsorted  size=0x114
// sig: undefined UpdateMoby_926(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870
// strings: 0096c165: 'None'

/* Moby 926 */

void mobyupdate_unsorted::UpdateMoby_926(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = moby->pVar;
  bVar1 = moby->state;
  iVar3 = (int)pvVar2 + 0x20;
  if (bVar1 == 0) {
    if (UnlockableItems.mapOMatic == '\x01') {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      moby->state = '\x01';
      FUN_004d3720(moby,iVar3);
    }
  }
  else if (bVar1 < 2) {
    iVar3 = FUN_004d3870(moby,iVar3);
    if (iVar3 != 0) {
      moby->state = '\x02';
    }
    if (*(short *)((int)pvVar2 + 0x56) == 1) {
      UnlockableItems.mapOMatic = '\x01';
      CHAR_ARRAY_0096c165[0x21] = '\x01';
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
  }
  return;
}



//==== 004b98ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M927_004b98ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M927_004b98ac(void)

{
  DAT_008f47b4 = 0x10000;
  return;
}



//==== 004b98e0  ns=mobyupdate_helpers  size=0x7d4
// sig: undefined M927_004b98e0(void)
// callers(1): 004ba118 mobyupdate_unsorted::UpdateMoby_927
// callees(11): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M927_004b98e0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1d] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  dVar24 = 0.0;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1b] = unaff_r28;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar13 = mobyutil::MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\t')) {
    fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
    *(float *)((int)pvVar5 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = fastfunc::FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
    fVar1 = DAT_008f47d8;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar5 + 0xad) = 0;
    *(undefined4 *)((int)pvVar5 + 0x94) = 9;
    *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f47d8 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar5 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x88) = DAT_008f47e8 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f47e4;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)(puVar7 + 0x10) = fVar4;
        *(float *)((int)puVar7 + 0x84) = fVar1;
        *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x58;
          lVar15 = uVar9 - 0x68;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xa4) = fVar2;
          *(float *)((int)puVar7 + 0x9c) = fVar2;
          *(float *)(puVar7 + 0x14) = fVar2;
          *(float *)(puVar7 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
          *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
          *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x68;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x84,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        *(float *)((int)pvVar5 + 0x88) = DAT_008f47e0 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f47dc;
        *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar5 + 0xc4) = 0x40c00000;
        *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)((int)puVar7 + 0x8c) = fVar4;
        *(float *)(puVar7 + 0x12) = fVar1;
        *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x38;
          lVar15 = uVar9 - 0x48;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xc4) = fVar2;
          *(float *)((int)puVar7 + 0xbc) = fVar2;
          *(float *)(puVar7 + 0x18) = fVar2;
          *(float *)(puVar7 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x48;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar7 + 0xf) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x88,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    dVar24 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar5 + 0x194) = uVar14;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar19 + 0x194);
  if (*(int *)((int)pvVar5 + 0x194) == 0) {
    fVar4 = *(float *)((int)pvVar5 + 0x18c);
  }
  else {
    fVar4 = *(float *)((int)pvVar5 + 0x18c) + 6.0;
  }
  *(float *)((int)pvVar5 + 0x198) = fVar4;
  pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
  iVar12 = mobyutil::MB_getTargetInArea
                     (param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,pSVar6->cnt);
  if ((iVar12 != 2) &&
     ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar5 + 0x124),
      fVar1 = (param_1->pos).x - *(float *)((int)pvVar5 + 0x120),
      *(float *)((int)pvVar5 + 0x198) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
    *(undefined4 *)((int)pvVar5 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar5 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004ba118  ns=mobyupdate_unsorted  size=0x12bc
// sig: undefined UpdateMoby_927(MobyInstance * moby)
// callers(0): 
// callees(17): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 001059f0 mobyutil::DamageSphereAtBone; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 004b98e0 mobyupdate_helpers::M927_004b98e0; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand

/* Moby 927 */

void mobyupdate_unsorted::UpdateMoby_927(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar24;
  longlong lVar23;
  longlong lVar25;
  undefined8 in_r8;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  float fVar34;
  
  lVar18 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1b0;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar16;
  puVar11[0x38] = in_LR;
  puVar11[0x35] = in_f31;
  puVar11[0x34] = unaff_r31;
  puVar11[0x33] = unaff_r30;
  pvVar9 = moby->pVar;
  dVar33 = 1.0;
  puVar11[0x32] = unaff_r29;
  moby->unk58 = 1.0;
  mobyupdate_helpers::M927_004b98e0();
  bVar2 = moby->state;
  iVar22 = *(int *)((int)pvVar9 + 0x160);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x40400000;
      *(undefined1 *)((int)pvVar9 + 0x28) = 2;
      fVar3 = (moby->pos).x;
      *(undefined2 *)((int)pvVar9 + 0x24) = 3;
      *(f32 *)((int)pvVar9 + 0x170) = fVar3;
      *(f32 *)((int)pvVar9 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x17c) = (moby->pos).w;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xd0));
      *(undefined4 *)((int)pvVar9 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar9 + 0xd8) = 0x3f000000;
      uVar20 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar9 + 0xd0) = uVar20;
      *(float *)((int)pvVar9 + 0xf4) = mobyutil::g_FrameTime * 4.0;
      uVar21 = rand();
      if ((uVar21 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      if (*(int *)((int)pvVar9 + 0x188) == 0) {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(lVar18,1,0,5);
        }
      }
      else {
        moby->state = '\x01';
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        fVar34 = pSVar10->points[0].z;
        (moby->pos).w = pSVar10->points[0].w;
        (moby->pos).z = (float)((double)fVar34 - dVar33);
      }
    }
    else if (bVar2 < 2) {
      fVar34 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].x - (moby->pos).x;
      fVar5 = Splines[*(int *)((int)pvVar9 + 0x184)]->points[1].y - (moby->pos).y;
      fVar6 = ABS(fVar34);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar11 + 0xf4) = fVar34;
      *(float *)(puVar11 + 0x1f) = fVar5;
      *(float *)((int)puVar11 + 0xfc) = fVar6 - fVar7;
      dVar33 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1d) & 4;
      fVar34 = ABS(*(float *)((int)puVar11 + 0xf4));
      if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
        fVar34 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)(puVar11 + 0x1f));
      if (*(float *)((int)puVar11 + 0xfc) - 0.0 < 0.0) {
        fVar8 = fVar6;
      }
      dVar28 = dVar33;
      if (0.0 < fVar34) {
        lVar23 = uVar16 - 0x1a0;
        lVar25 = uVar16 - 0x50;
        lVar27 = uVar16 - 0x40;
        lVar26 = 2;
        fVar34 = (fVar8 - fVar34) / (fVar8 + fVar34);
        fVar6 = fVar34 * fVar34;
        *(float *)((int)puVar11 + 0x16c) = fVar34;
        *(float *)((int)puVar11 + 0x164) = fVar34;
        *(float *)(puVar11 + 0x2d) = fVar34;
        *(float *)(puVar11 + 0x2c) = fVar34;
        fVar34 = fVar6 * fVar6;
        *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar6;
        *(float *)(puVar11 + 0x2d) = *(float *)(puVar11 + 0x2d) * fVar34;
        *(float *)((int)puVar11 + 0x16c) = *(float *)((int)puVar11 + 0x16c) * fVar34 * fVar6;
        do {
          *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x150) * fVar34 * fVar34;
          iVar22 = (int)lVar25;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar34 * fVar34;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar27 = uVar16 - 0x50;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar19;
        lVar25 = lVar27;
        do {
          fVar34 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 0x160) = *(float *)((int)lVar23 + 0x160) * fVar34;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar23 = 2;
        do {
          iVar22 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x160)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar5);
      }
      fVar34 = mobyutil::OrganicDeltAng
                         ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar9 + 0x1a0));
      if ((*(int *)((int)pvVar9 + 0x164) != 2) &&
         (iVar22 = mobyutil::MB_randInt((double)fVar34,9), iVar22 == 0)) {
        moby->state = '\x06';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar18,0,0,5);
        }
        pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
        fVar5 = pSVar10->points[1].x - (moby->pos).x;
        *(float *)((int)pvVar9 + 0x40) = fVar5;
        fVar7 = pSVar10->points[1].y - (moby->pos).y;
        *(float *)((int)pvVar9 + 0x44) = fVar7;
        *(float *)((int)pvVar9 + 0x48) = pSVar10->points[1].z - (moby->pos).z;
        dVar32 = (double)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
        *(float *)((int)pvVar9 + 0x4c) = pSVar10->points[1].w;
        fVar6 = DAT_008f47f4 * mobyutil::g_FrameTime;
        fVar34 = (float)((double)fVar6 / dVar32);
        dVar29 = (double)(fVar5 * fVar34);
        dVar30 = (double)(fVar7 * fVar34);
        dVar28 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar28 = dVar29;
        }
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = dVar30;
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar28 = dVar29;
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = dVar30;
        }
        *(float *)((int)pvVar9 + 0x40) = (float)dVar28;
        *(float *)((int)pvVar9 + 0x44) = (float)dVar31;
        dVar33 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar6,-(double)(DAT_008f47f8 * DAT_0071f418),
                                    lVar18 + 0x10,pSVar10->points + 1,0x8f0000,&DAT_00720000,0);
        *(float *)((int)pvVar9 + 0x48) = (float)dVar33;
      }
    }
    else if (bVar2 < 3) {
      bVar1 = *(int *)((int)pvVar9 + 0x164) == 2;
      if (bVar1) {
        if ((bVar1) && (*(int *)((int)pvVar9 + 0x188) != 0)) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar18,0,0,5);
          }
          pSVar10 = Splines[*(int *)((int)pvVar9 + 0x184)];
          fVar5 = pSVar10->points[0].x - (moby->pos).x;
          *(float *)((int)pvVar9 + 0x40) = fVar5;
          fVar7 = pSVar10->points[0].y - (moby->pos).y;
          *(float *)((int)pvVar9 + 0x44) = fVar7;
          *(float *)((int)pvVar9 + 0x48) = pSVar10->points[0].z - (moby->pos).z;
          dVar33 = (double)SQRT(fVar5 * fVar5 + fVar7 * fVar7);
          *(float *)((int)pvVar9 + 0x4c) = pSVar10->points[0].w;
          fVar6 = DAT_008f47f4 * mobyutil::g_FrameTime;
          fVar34 = (float)((double)fVar6 / dVar33);
          fVar5 = fVar5 * fVar34;
          fVar7 = fVar7 * fVar34;
          fVar34 = 0.0;
          if (0.0 - dVar33 < 0.0) {
            fVar34 = fVar5;
          }
          fVar8 = 0.0;
          if (0.0 - dVar33 < 0.0) {
            fVar8 = fVar7;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar34 = fVar5;
          }
          if (dVar33 - 0.0 < 0.0) {
            fVar8 = fVar7;
          }
          *(float *)((int)pvVar9 + 0x40) = fVar34;
          *(float *)((int)pvVar9 + 0x44) = fVar8;
          dVar33 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)fVar6,-(double)(DAT_008f47f8 * DAT_0071f418),
                                      lVar18 + 0x10,pSVar10->points,0x8f0000,&DAT_00720000,0);
          *(float *)((int)pvVar9 + 0x48) = (float)dVar33;
        }
      }
      else {
        dVar33 = (double)mobyutil::MB_randRangeFloat(-DAT_008f47f0,DAT_008f47f0);
        *(float *)((int)pvVar9 + 0x19c) = (float)(dVar33 * 0.01745329238474369);
        moby->state = '\x03';
        if (moby->animationId != '\x03') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
    }
    else {
      fVar34 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar34 - *(float *)(iVar22 + 0x14);
      fVar7 = fVar5 - *(float *)(iVar22 + 0x10);
      if (DAT_008f47ec <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
        fVar5 = *(float *)(iVar22 + 0x10) - fVar5;
        fVar34 = *(float *)(iVar22 + 0x14) - fVar34;
        fVar7 = ABS(fVar5);
        fVar6 = ABS(fVar34);
        *(float *)(puVar11 + 0x1d) = fVar5;
        *(float *)((int)puVar11 + 0xec) = fVar34;
        *(float *)(puVar11 + 0x1e) = fVar7 - fVar6;
        fVar34 = 0.0;
        uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)(puVar11 + 0x1d));
        if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar11 + 0xec));
        if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
          fVar13 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar18 = uVar16 - 0x1a0;
          lVar23 = uVar16 - 0x70;
          lVar25 = uVar16 - 0x60;
          lVar27 = 2;
          fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x14c) = fVar5;
          *(float *)((int)puVar11 + 0x144) = fVar5;
          *(float *)(puVar11 + 0x29) = fVar5;
          *(float *)(puVar11 + 0x28) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar7;
          *(float *)(puVar11 + 0x29) = *(float *)(puVar11 + 0x29) * fVar5;
          *(float *)((int)puVar11 + 0x14c) = *(float *)((int)puVar11 + 0x14c) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x140) = *(float *)((int)lVar18 + 0x130) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar16 - 0x70;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar7 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x140) = *(float *)((int)lVar18 + 0x140) * fVar5;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar22 = (int)lVar19;
            iVar12 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar34 = fVar34 + *(float *)(iVar22 + 0x140) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
        }
        dVar28 = (double)fastfunc::FastWrapRot(fVar34,*(float *)((int)pvVar9 + 0x19c));
        mobyutil::OrganicDeltAng
                  ((float)dVar28,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar9 + 0x1a0));
        fVar34 = (moby->rotation).z;
        fVar5 = fVar34 + 1.5707963;
        fVar7 = 3.1415925 - fVar34;
        if (fVar34 - (3.1415925 - fVar34) < 0.0) {
          fVar7 = fVar34;
        }
        fVar6 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = -3.1415925 - fVar34;
        if ((-3.1415925 - fVar34) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar34 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
          fVar34 = fVar6;
        }
        fVar5 = fVar8 * fVar8;
        fVar7 = fVar34 * fVar34;
        fVar14 = fVar5 * fVar5 * fVar8;
        *(undefined4 *)(puVar11 + 0x13) = 0;
        fVar6 = fVar7 * fVar7 * fVar34;
        fVar15 = fVar5 * fVar14;
        fVar13 = fVar7 * fVar6;
        *(float *)((int)puVar11 + 0x94) =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) *
             2.0;
        *(float *)(puVar11 + 0x12) =
             (fVar7 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar34 * -0.16666657 + fVar34)
             * 2.0;
        mobyutil::MB_UpdateNavMove
                  (dVar33,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x12,puVar11 + 0x14);
      }
      else {
        moby->state = '\x04';
        uVar20 = DAT_008f47fc;
        if (moby->animationId != '\x06') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar18,6,uVar20,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
      if (*(int *)((int)pvVar9 + 0x164) == 2) {
        moby->state = '\x05';
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 5) {
      fVar34 = *(float *)(iVar22 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar22 + 0x14) - (moby->pos).y;
      fVar7 = ABS(fVar34);
      fVar6 = ABS(fVar5);
      *(float *)((int)puVar11 + 0xdc) = fVar34;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)((int)puVar11 + 0xe4) = fVar7 - fVar6;
      fVar34 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar11 + 0xdc));
      if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)(puVar11 + 0x1c));
      if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
        fVar13 = fVar7;
      }
      if (0.0 < fVar5) {
        lVar23 = uVar16 - 0x1a0;
        lVar27 = uVar16 - 0x80;
        lVar25 = uVar16 - 0x90;
        lVar26 = 2;
        fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
        fVar7 = fVar5 * fVar5;
        *(float *)((int)puVar11 + 300) = fVar5;
        *(float *)((int)puVar11 + 0x124) = fVar5;
        *(float *)(puVar11 + 0x25) = fVar5;
        *(float *)(puVar11 + 0x24) = fVar5;
        fVar5 = fVar7 * fVar7;
        *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar7;
        *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x25) * fVar5;
        *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar5 * fVar7;
        do {
          *(float *)((int)lVar23 + 0x120) = *(float *)((int)lVar23 + 0x110) * fVar5 * fVar5;
          iVar22 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
          lVar27 = lVar27 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar27 = uVar16 - 0x90;
        pfVar24 = (float *)&DAT_007358e0;
        lVar23 = lVar19;
        lVar25 = lVar27;
        do {
          fVar5 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar23 + 0x120) = *(float *)((int)lVar23 + 0x120) * fVar5;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar23 = 2;
        do {
          iVar22 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar34 = fVar34 + *(float *)(iVar22 + 0x120) + *(float *)(iVar12 + 4) +
                   *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
      }
      mobyutil::OrganicDeltAng
                (fVar34,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x1a0));
      dVar28 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((dVar28 < 18.0) || (24.0 < dVar28)) {
        if ((dVar28 < 40.0) || (48.0 < dVar28)) {
          if (((moby->field43_0x70 & 2U) != 0) &&
             (moby->state = '\x03', moby->animationId != '\x03')) {
            puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar11 + 0x184));
          }
        }
        else {
          puVar11[0xe] = 0;
          mobyutil::DamageSphereAtBone
                    (0x3fd0000000000000,dVar33,dVar33,lVar18,0,&DAT_004ba0b4,1,0,in_r8,0,1);
        }
      }
      else {
        puVar11[0xe] = 0;
        mobyutil::DamageSphereAtBone
                  (0x3fd0000000000000,dVar33,dVar33,lVar18,1,0,1,&DAT_004ba0b4,in_r8,0,1);
      }
    }
    else if (bVar2 < 6) {
      fVar34 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar6 = fVar34 - *(float *)((int)pvVar9 + 0x174);
      fVar7 = fVar5 - *(float *)((int)pvVar9 + 0x170);
      if (dVar33 <= (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
        fVar5 = *(float *)((int)pvVar9 + 0x170) - fVar5;
        fVar34 = *(float *)((int)pvVar9 + 0x174) - fVar34;
        fVar7 = ABS(fVar5);
        fVar6 = ABS(fVar34);
        *(float *)(puVar11 + 0x1a) = fVar5;
        *(float *)((int)puVar11 + 0xd4) = fVar34;
        *(float *)(puVar11 + 0x1b) = fVar7 - fVar6;
        fVar34 = 0.0;
        uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)(puVar11 + 0x1a));
        if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        fVar13 = ABS(*(float *)((int)puVar11 + 0xd4));
        if (*(float *)(puVar11 + 0x1b) - 0.0 < 0.0) {
          fVar13 = fVar7;
        }
        if (0.0 < fVar5) {
          lVar18 = uVar16 - 0x1a0;
          lVar23 = uVar16 - 0xb0;
          lVar25 = uVar16 - 0xa0;
          lVar27 = 2;
          fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
          fVar7 = fVar5 * fVar5;
          *(float *)((int)puVar11 + 0x10c) = fVar5;
          *(float *)((int)puVar11 + 0x104) = fVar5;
          *(float *)(puVar11 + 0x21) = fVar5;
          *(float *)(puVar11 + 0x20) = fVar5;
          fVar5 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x104) = *(float *)((int)puVar11 + 0x104) * fVar7;
          *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar5;
          *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar5 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x100) = *(float *)((int)lVar18 + 0xf0) * fVar5 * fVar5;
            iVar22 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar16 - 0xb0;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar23 = lVar25;
          do {
            fVar5 = *pfVar24;
            fVar7 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x100) = *(float *)((int)lVar18 + 0x100) * fVar5;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar22 = (int)lVar19;
            iVar12 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar34 = fVar34 + *(float *)(iVar22 + 0x100) + *(float *)(iVar12 + 4) +
                     *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar34 = (fVar34 + 0.7853982) * fVar8 + fVar6;
        }
        mobyutil::OrganicDeltAng
                  (fVar34,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar9 + 0x1a0));
        fVar34 = (moby->rotation).z;
        fVar5 = fVar34 + 1.5707963;
        fVar7 = 3.1415925 - fVar34;
        if (fVar34 - (3.1415925 - fVar34) < 0.0) {
          fVar7 = fVar34;
        }
        fVar6 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = -3.1415925 - fVar34;
        if ((-3.1415925 - fVar34) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar34 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
          fVar34 = fVar6;
        }
        fVar5 = fVar8 * fVar8;
        fVar7 = fVar34 * fVar34;
        fVar14 = fVar5 * fVar5 * fVar8;
        *(undefined4 *)(puVar11 + 0x17) = 0;
        fVar6 = fVar7 * fVar7 * fVar34;
        fVar15 = fVar5 * fVar14;
        fVar13 = fVar7 * fVar6;
        *(float *)((int)puVar11 + 0xb4) =
             (fVar5 * fVar15 * 2.601887e-06 +
             fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) *
             2.0;
        *(float *)(puVar11 + 0x16) =
             (fVar7 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar7 * fVar34 * -0.16666657 + fVar34)
             * 2.0;
        mobyutil::MB_UpdateNavMove
                  (dVar33,moby,(MobyInstance *)((int)pvVar9 + 0xd0),puVar11 + 0x16,puVar11 + 0x18);
      }
      else {
        moby->state = '\x02';
        if (moby->animationId != '\x01') {
          puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar11 + 0x184));
        }
      }
    }
    else {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar9 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar9 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar9 + 0x48);
      fVar34 = -(DAT_008f47f8 * DAT_0071f418 - *(float *)((int)pvVar9 + 0x48));
      *(float *)((int)pvVar9 + 0x48) = fVar34;
      if (fVar34 < 0.0) {
        fVar34 = (moby->pos).z;
        fVar3 = (moby->pos).y;
        *(f32 *)(puVar11 + 0x10) = (moby->pos).x;
        fVar4 = (moby->pos).w;
        *(f32 *)((int)puVar11 + 0x84) = fVar3;
        *(f32 *)((int)puVar11 + 0x8c) = fVar4;
        *(float *)(puVar11 + 0x11) = (float)((double)fVar34 + dVar33);
        dVar28 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar16 - 0x130,0);
        if ((double)(moby->pos).z < dVar28) {
          if (moby->state == '\x06') {
            (moby->pos).z = (float)dVar28;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = (float)(dVar28 - dVar33);
          }
        }
      }
    }
  }
  else if (bVar2 < 9) {
    uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar21 & 0x40) == 0) {
      if ((uVar21 & 0x120) == 0) {
        if (*(short *)((int)pvVar9 + 0xae) == 2) {
          moby->unk58 = DAT_008f4800;
        }
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        puVar11[0x30] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar11 + 0x184));
      }
    }
  }
  else if ((bVar2 < 10) &&
          (uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar21 & 0x160) != 0)) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar18,lVar18 + 0x10,&DAT_004ba0b4,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004bb3d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M990_004bb3d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M990_004bb3d4(void)

{
  DAT_008f4850 = 0x10000;
  return;
}



//==== 004bb3f8  ns=mobyupdate_unsorted  size=0x428
// sig: undefined UpdateMoby_{93_990}(MobyInstance * moby)
// callers(0): 
// callees(4): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 93
   Moby 990 */

void mobyupdate_unsorted::UpdateMoby__93_990_(MobyInstance *moby)

{
  u8 uVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  MobyInstance *moby_00;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  bVar3 = false;
  pfVar2 = (float *)moby->pVar;
  bVar5 = false;
  bVar4 = false;
  fVar7 = pfVar2[5];
  if (fVar7 == -NAN) {
    if (moby->state == '\0') goto LAB_004bb5a0;
    iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[1]);
    bVar4 = bVar5;
    if ((iVar6 == 0) &&
       (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[1]),
       iVar6 == 0)) {
      iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar2[2]);
      moby_00 = MobyUpdateChainStart;
      if ((iVar6 == 0) &&
         (iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)(int)pfVar2[2]),
         moby_00 = MobyUpdateChainStart, iVar6 == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar3 = true;
      moby_00 = MobyUpdateChainStart;
    }
    for (; moby_00 != (MobyInstance *)0x0; moby_00 = (MobyInstance *)moby_00->pChain) {
      iVar6 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
      if (iVar6 != 0) {
        iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&moby_00->pos,(longlong)(int)pfVar2[1]);
        if (iVar6 == 0) {
          iVar6 = mobyutil::MB_IsPntInCuboid((Vec4 *)&moby_00->pos,(longlong)(int)pfVar2[2]);
          if (iVar6 == 0) {
            bVar4 = true;
          }
        }
        else {
          bVar3 = true;
        }
      }
    }
    if (!bVar3) goto LAB_004bb5a0;
  }
  else {
    if ((MobyInstance[(int)fVar7].oClass != THRUSTER_PACK_LOCK) ||
       (MobyInstance[(int)fVar7].state != '\x02')) goto LAB_004bb5a0;
    bVar3 = true;
  }
  bVar4 = false;
LAB_004bb5a0:
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    dVar8 = (double)fastfunc::FastWrapRot
                              (pfVar2[3],
                               -((DAT_008f4874 / DAT_008f4878) * 0.017453292 * mobyutil::g_FrameTime
                                ));
    pfVar2[3] = (float)dVar8;
    if (0.0 < dVar8) {
      pfVar2[3] = 0.0;
      moby->state = '\x01';
    }
    if (pfVar2[4] == 0.0) {
      fVar7 = pfVar2[3];
    }
    else {
      fVar7 = -pfVar2[3];
    }
    dVar8 = (double)fastfunc::FastWrapRot(*pfVar2,fVar7);
    (moby->rotation).z = (float)dVar8;
    if (bVar3) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (bVar4) {
      moby->state = '\x04';
      fVar7 = (float)sound::PlayMobySound(0,0,moby);
      pfVar2[6] = fVar7;
    }
  }
  else if (uVar1 == '\x02') {
    dVar9 = 0.01745329238474369;
    dVar8 = (double)fastfunc::FastWrapRot
                              (pfVar2[3],
                               (DAT_008f4874 / DAT_008f4878) * 0.017453292 * mobyutil::g_FrameTime);
    pfVar2[3] = (float)dVar8;
    if (dVar8 < (double)(float)((double)DAT_008f4874 * dVar9)) {
      pfVar2[3] = (float)((double)DAT_008f4874 * dVar9);
      moby->state = '\x03';
    }
    if (pfVar2[4] == 0.0) {
      fVar7 = pfVar2[3];
    }
    else {
      fVar7 = -pfVar2[3];
    }
    dVar8 = (double)fastfunc::FastWrapRot(*pfVar2,fVar7);
    (moby->rotation).z = (float)dVar8;
  }
  else if (uVar1 == '\x01') {
    pfVar2[3] = 0.0;
    (moby->rotation).z = *pfVar2;
    if (bVar3) {
      moby->state = '\x02';
      fVar7 = (float)sound::PlayMobySound(0,0,moby);
      pfVar2[6] = fVar7;
    }
  }
  else if (uVar1 == '\0') {
    fVar7 = pfVar2[4];
    if (fVar7 != 0.0) {
      fVar7 = pfVar2[4];
      moby->modeBits = moby->modeBits | MIRROR;
    }
    if (fVar7 == 0.0) {
      fVar7 = -0.017453292;
    }
    else {
      fVar7 = 0.017453292;
    }
    dVar8 = (double)fastfunc::FastWrapRot((moby->rotation).z,DAT_008f4874 * fVar7);
    *pfVar2 = (float)dVar8;
    pfVar2[3] = 0.0;
    (moby->rotation).z = (float)dVar8;
    moby->state = '\x01';
  }
  return;
}



//==== 004bb820  ns=mobyupdate_helpers  size=0x14
// sig: undefined M990_004bb820(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M990_004bb820(void)

{
  DAT_008f48c8 = 0x10000;
  return;
}



//==== 004bb840  ns=mobyupdate_helpers  size=0x74
// sig: undefined M990_004bb840(void)
// callers(0): 
// callees(2): 0010434c mobyutil::MB_SetGroupActive; 001d0f24 FUN_001d0f24

void mobyupdate_helpers::M990_004bb840(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  do {
    mobyutil::MB_SetGroupActive(*(int *)(iVar2 + 0x60),0,0,0);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  FUN_001d0f24(0x4059000000000000);
  return;
}



//==== 004bb8b8  ns=mobyupdate_helpers  size=0x80
// sig: undefined M990_004bb8b8(void)
// callers(0): 
// callees(2): 0010434c mobyutil::MB_SetGroupActive; 001d0f24 FUN_001d0f24

void mobyupdate_helpers::M990_004bb8b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  do {
    mobyutil::MB_SetGroupActive(*(int *)(iVar2 + 0x60),1,1,1);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x10);
  HeroDeathHeight = 0x42940000;
  FUN_001d0f24(0x4053000000000000);
  return;
}



//==== 004bb948  ns=mobyupdate_unsorted  size=0x49c
// sig: undefined UpdateMoby_930(MobyInstance * moby)
// callers(0): 
// callees(7): 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 0010434c mobyutil::MB_SetGroupActive; 001d0f24 FUN_001d0f24; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870
// strings: 00a1000c: 'None'

/* Moby 930 */

ulonglong mobyupdate_unsorted::UpdateMoby_930(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  pvVar6 = moby->pVar;
  if (moby->state == 0) {
    moby->updateDistance = -1;
    moby->state = '\x01';
    FUN_004d3720(moby,(int)pvVar6 + 0x20);
    pvVar7 = moby->pVar;
    iVar5 = 0;
    *(undefined4 *)((int)pvVar6 + 0x2c) = 0x406ccccd;
    do {
      mobyutil::MB_SetGroupActive(*(int *)((int)pvVar7 + 0x60),0,0,0);
      iVar5 = iVar5 + 1;
      pvVar7 = (void *)((int)pvVar7 + 4);
    } while (iVar5 < 0x10);
    uVar4 = FUN_001d0f24(0x4059000000000000);
  }
  else if (moby->state < 2) {
    HeroDeathHeight = 0x42c80000;
    if (hero::g_heroStateType != 0xf) {
      HeroDeathHeight = 0x42e60000;
    }
    FUN_004d3870(moby,(int)pvVar6 + 0x20);
    uVar8 = 0x4053000000000000;
    if (*(short *)((int)pvVar6 + 0x56) == 3) {
      *(undefined2 *)((int)pvVar6 + 0x24) = 3;
      uVar3 = worldUpdateTime;
      *(undefined2 *)((int)pvVar6 + 0x56) = 2;
      *(undefined4 *)((int)pvVar6 + 0x58) = uVar3;
      iVar5 = 0;
      moby->setByGroup = '\0';
      hero::Hero_Warp((float *)&DAT_008f48f0,(float *)&DAT_008f4900,0,1);
      DAT_0096b9e0 = DAT_008f4910;
      DAT_0096b9e4 = DAT_008f4914;
      DAT_0096b9e8 = DAT_008f4918;
      DAT_0096b9ec = DAT_008f491c;
      DAT_0096b9f0 = DAT_008f4920;
      DAT_0096b9f4 = DAT_008f4924;
      DAT_0096b9f8 = DAT_008f4928;
      DAT_0096b9fc = DAT_008f492c;
      pvVar6 = moby->pVar;
      moby->state = '\x02';
      do {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),1,1,1);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(uVar8);
    }
    if (hero::g_heroStateType == 0x16) {
      pvVar6 = moby->pVar;
      moby->state = '\x02';
      iVar5 = 0;
      do {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),1,1,1);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      HeroDeathHeight = 0x42940000;
      FUN_001d0f24(uVar8);
    }
    uVar4 = (ulonglong)UnlockableItems.hologuise;
    if ((UnlockableItems.hologuise != '\0') &&
       (uVar2 = CHAR_ARRAY_00a1000c._1012_4_ & 1 << (Level & 0x3f), uVar4 = (ulonglong)uVar2,
       uVar2 == 0)) {
      iVar5 = help::Help_QueueMessage(STR_THE_HOLOGUISE_IS_A_0x3E80,0x7e);
      uVar4 = (ulonglong)iVar5;
    }
  }
  else {
    if (hero::g_heroStateType == 0) {
      iVar5 = 0;
      moby->state = '\x01';
      pvVar7 = pvVar6;
      do {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar7 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar7 = (void *)((int)pvVar7 + 4);
      } while (iVar5 < 0x10);
      FUN_001d0f24(0x4059000000000000);
    }
    bVar1 = moby->setByGroup;
    if (bVar1 == 1) {
      moby->state = '\x01';
      hero::Hero_Warp((float *)&DAT_008f4910,(float *)&DAT_008f4920,0,1);
      moby->setByGroup = '\0';
      uVar3 = worldUpdateTime;
      if (UnlockableItems.hologuise == '\0') {
        *(undefined2 *)((int)pvVar6 + 0x24) = *(undefined2 *)((int)pvVar6 + 0x56);
        *(undefined2 *)((int)pvVar6 + 0x56) = 4;
        *(undefined4 *)((int)pvVar6 + 0x58) = uVar3;
        *(undefined1 *)((int)pvVar6 + 0x28) = 1;
        UnlockableItems.hologuise = '\x01';
        CHAR_ARRAY_0096c165[0x1f] = '\x01';
        memcard::memcard_Save(0,-1);
      }
      iVar5 = 0;
      pvVar6 = moby->pVar;
      do {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      FUN_001d0f24(0x4059000000000000);
      bVar1 = moby->setByGroup;
    }
    uVar4 = (ulonglong)bVar1;
    if (bVar1 == 2) {
      moby->state = '\x01';
      hero::Hero_Warp((float *)&DAT_008f4910,(float *)&DAT_008f4920,0,1);
      iVar5 = 0;
      pvVar6 = moby->pVar;
      moby->setByGroup = '\0';
      do {
        mobyutil::MB_SetGroupActive(*(int *)((int)pvVar6 + 0x60),0,0,0);
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 0x10);
      uVar4 = FUN_001d0f24(0x4059000000000000);
    }
  }
  return uVar4;
}



//==== 004bbde4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M931_004bbde4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M931_004bbde4(void)

{
  DAT_008f497c = 0x10000;
  return;
}



//==== 004bbe20  ns=mobyupdate_helpers  size=0x648
// sig: undefined M931_004bbe20(void)
// callers(1): 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(1): 001118d8 mobyutil::MB_getTarget

double mobyupdate_helpers::M931_004bbe20(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x150;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2c] = in_LR;
  puVar9[0x27] = in_f29;
  puVar9[0x28] = in_f30;
  puVar9[0x29] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x24] = unaff_r29;
  puVar9[0x25] = unaff_r30;
  mobyutil::MB_getTarget(param_1,param_2,uVar13 - 0xe0);
  fVar2 = *(float *)((int)puVar9 + 0x74);
  dVar23 = 0.0;
  fVar6 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(puVar9 + 0xe);
  bVar12 = true;
  param_2[3] = 0.0;
  iVar8 = MobyUpdateChainStart;
  fVar3 = fVar3 - fVar4;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  fVar5 = *(float *)(puVar9 + 0xf);
  fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6);
  dVar24 = dVar23;
  dVar25 = dVar23;
  dVar26 = dVar23;
  dVar27 = dVar23;
  if (iVar8 != 0) {
    do {
      if ((iVar8 != param_1) && (*(short *)(iVar8 + 0xa6) == *(short *)(param_1 + 0xa6))) {
        fVar6 = *(float *)(iVar8 + 0x14);
        fVar7 = *(float *)(iVar8 + 0x10);
        fVar1 = fVar6 - *(float *)(param_1 + 0x14);
        fVar10 = fVar7 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar10 * fVar10 + fVar1 * fVar1) < 3.0) {
          dVar27 = (double)(float)(dVar27 + 6.0);
          fVar7 = (float)((double)(*(float *)(param_1 + 0x10) - fVar7) * 6.0 + dVar24);
          dVar24 = (double)fVar7;
          fVar6 = (float)((double)(*(float *)(param_1 + 0x14) - fVar6) * 6.0 + dVar25);
          dVar25 = (double)fVar6;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar8 + 0x18)) * 6.0 +
                         dVar26);
          dVar26 = (double)fVar1;
          *param_2 = fVar7;
          param_2[1] = fVar6;
          param_2[2] = fVar1;
          fVar7 = *(float *)(iVar8 + 0x10);
          fVar6 = *(float *)(iVar8 + 0x14);
        }
        if (SQRT((fVar7 - fVar4) * (fVar7 - fVar4) + (fVar6 - fVar2) * (fVar6 - fVar2)) < fVar3) {
          bVar12 = false;
        }
      }
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
    if (!bVar12) {
      fVar6 = *(float *)(param_1 + 0x14) - fVar2;
      fVar7 = *(float *)(param_1 + 0x10) - fVar4;
      fVar5 = *(float *)(param_1 + 0x18) - fVar5;
      dVar22 = dVar23;
      if (10.5 - fVar3 < 0.0) {
        dVar22 = -10.0;
      }
      if (fVar3 - 9.5 < 0.0) {
        dVar22 = 10.0;
      }
      fVar1 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      param_2[3] = 0.0;
      fVar3 = 1.0 / (float)(dVar27 + 10.0);
      fVar10 = (float)(dVar22 * 10.0) / fVar1;
      dVar27 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      dVar22 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      dVar21 = dVar23;
      if (0.0 - fVar1 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar27 = (double)(fVar10 * fVar5);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar22 = (double)(fVar10 * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar21 = (double)(fVar10 * fVar7);
      }
      fVar5 = (float)(dVar26 + dVar27) * fVar3;
      fVar6 = (float)(dVar25 + dVar22) * fVar3;
      fVar3 = (float)(dVar24 + dVar21) * fVar3;
      param_2[2] = fVar5;
      param_2[1] = fVar6;
      *param_2 = fVar3;
      fVar3 = fVar3 + *(float *)(param_1 + 0x10);
      *param_2 = fVar3;
      fVar6 = fVar6 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar6;
      fVar5 = fVar5 + *(float *)(param_1 + 0x18);
      goto LAB_004bc09c;
    }
  }
  *param_2 = fVar4;
  param_2[1] = fVar2;
  param_2[3] = *(float *)((int)puVar9 + 0x7c);
  fVar6 = fVar2;
  fVar3 = fVar4;
LAB_004bc09c:
  param_2[2] = fVar5;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14) - fVar6;
  if (1.0 <= SQRT((fVar5 - fVar3) * (fVar5 - fVar3) + fVar7 * fVar7)) {
    fVar6 = fVar6 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar3 - fVar5);
    fVar4 = ABS(fVar6);
    *(float *)(puVar9 + 0x18) = fVar3 - fVar5;
    *(float *)((int)puVar9 + 0xc4) = fVar6;
    *(float *)(puVar9 + 0x19) = fVar7 - fVar4;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x18));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)((int)puVar9 + 0xc4));
    if (*(float *)(puVar9 + 0x19) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar19 = uVar13 - 0x68;
      lVar16 = uVar13 - 0x78;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0xe4) = fVar2;
      *(float *)((int)puVar9 + 0xdc) = fVar2;
      *(float *)(puVar9 + 0x1c) = fVar2;
      *(float *)(puVar9 + 0x1b) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar4;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar2;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 200) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x78;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xd8) = *(float *)((int)lVar14 + 0xd8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xd8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  else {
    *param_2 = fVar5;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fVar4 = fVar4 - *(float *)(param_1 + 0x10);
    fVar2 = fVar2 - *(float *)(param_1 + 0x14);
    fVar5 = ABS(fVar4);
    fVar3 = ABS(fVar2);
    *(float *)((int)puVar9 + 0xcc) = fVar4;
    *(float *)(puVar9 + 0x1a) = fVar2;
    *(float *)((int)puVar9 + 0xd4) = fVar5 - fVar3;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = ABS(*(float *)(puVar9 + 0x1a));
    if (*(float *)((int)puVar9 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar14 = uVar13 - 0x140;
      lVar16 = uVar13 - 0x58;
      lVar19 = uVar13 - 0x48;
      lVar20 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x104) = fVar2;
      *(float *)((int)puVar9 + 0xfc) = fVar2;
      *(float *)(puVar9 + 0x20) = fVar2;
      *(float *)(puVar9 + 0x1f) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xfc) = *(float *)((int)puVar9 + 0xfc) * fVar4;
      *(float *)(puVar9 + 0x20) = *(float *)(puVar9 + 0x20) * fVar2;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xe8) * fVar2 * fVar2;
        iVar8 = (int)lVar16;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar13 - 0x58;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0xf8) = *(float *)((int)lVar14 + 0xf8) * fVar2;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar8 + 0xf8)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar3 + fVar5);
    }
  }
  return dVar23;
}



//==== 004bc480  ns=mobyupdate_helpers  size=0x824
// sig: undefined M931_004bc480(void)
// callers(1): 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(11): 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 001158b0 mobyutil::MB_SetupJumpArc; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M931_004bc480(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyClass *pMVar5;
  void *pvVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x100;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x22] = in_LR;
  puVar7[0x1f] = in_f31;
  puVar7[0x1e] = unaff_r31;
  pMVar5 = param_1->pClass;
  puVar7[0x1d] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  param_1->scale = DAT_008f49cc * pMVar5->gScale;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  puVar7[0x1c] = unaff_r29;
  puVar7[0x1b] = unaff_r28;
  *(undefined4 *)((int)pvVar6 + 0x1c8) = 0;
  iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar13 = mobyutil::MB_HandleDamage
                     (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
  if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\n')) {
    fVar4 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar7 + 0x74);
    iVar13 = iVar13 + ((uint)((LZCOUNT(0x100 - (uint)*(ushort *)(iVar12 + 0x2a)) << 0x3a) >> 0x3f) &
                      9U - iVar13);
    *(float *)((int)pvVar6 + 0x20) = fVar4;
    if ((double)fVar4 <= dVar24) {
      iVar13 = 1;
    }
    uVar14 = fastfunc::FastDoubleToInt(0x40a4000000000000);
    *(undefined4 *)((int)pvVar6 + 0x98) = 0x40200000;
    fVar1 = DAT_008f49a0;
    fVar4 = DAT_0071f418;
    *(undefined4 *)((int)pvVar6 + 0x90) = uVar14;
    *(undefined4 *)((int)pvVar6 + 0x84) = 0x3a03126f;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x80) = fVar1 * fVar4;
    fVar4 = mobyutil::g_FrameTime;
    if (iVar13 < 3) {
      if ((-1 < iVar13) && (0 < iVar13)) {
        fVar4 = DAT_008f49a0 * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar6 + 0x80) = fVar4;
        fVar4 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x88) = DAT_008f49b0 * mobyutil::g_FrameTime;
        fVar1 = DAT_008f49ac;
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
        *(float *)((int)pvVar6 + 0x8c) = fVar1 * fVar4;
        fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)(puVar7 + 0x10) = fVar4;
        *(float *)((int)puVar7 + 0x84) = fVar1;
        *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
        if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x58;
          lVar15 = uVar9 - 0x68;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xa4) = fVar2;
          *(float *)((int)puVar7 + 0x9c) = fVar2;
          *(float *)(puVar7 + 0x14) = fVar2;
          *(float *)(puVar7 + 0x13) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
          *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
          *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x68;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x84,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
        param_1->state = '\n';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xf0;
        mobyutil::MB_DistributeBolts(param_1,2,3,0,0xffffffffffffffff);
      }
    }
    else if (iVar13 < 0xb) {
      if (iVar13 < 9) {
        fVar1 = DAT_008f49a8 * mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar6 + 0x1c8) = 1;
        *(float *)((int)pvVar6 + 0x88) = fVar1;
        *(float *)((int)pvVar6 + 0x8c) = DAT_008f49a4 * fVar4;
        mobyutil::MB_SetupJumpArc
                  (0x4010000000000000,0x3ff0000000000000,&DAT_004bc468,0x4c0000,uVar19 + 0x70);
        iVar13 = *(int *)(iVar12 + 0x20);
        *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40400000;
        *(undefined4 *)((int)pvVar6 + 0xc4) = 0x40c00000;
        fVar4 = (param_1->pos).x - *(float *)(iVar13 + 0x10);
        fVar1 = (param_1->pos).y - *(float *)(iVar13 + 0x14);
        dVar21 = ABS((double)fVar4);
        dVar22 = ABS((double)fVar1);
        *(float *)((int)puVar7 + 0x8c) = fVar4;
        *(float *)(puVar7 + 0x12) = fVar1;
        *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
        uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar23 = dVar22;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
        if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
          dVar22 = dVar21;
        }
        fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (dVar24 < dVar23) {
          lVar10 = uVar9 - 0xf0;
          lVar18 = uVar9 - 0x38;
          lVar15 = uVar9 - 0x48;
          lVar20 = 2;
          fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
          fVar3 = fVar2 * fVar2;
          *(float *)((int)puVar7 + 0xc4) = fVar2;
          *(float *)((int)puVar7 + 0xbc) = fVar2;
          *(float *)(puVar7 + 0x18) = fVar2;
          *(float *)(puVar7 + 0x17) = fVar2;
          fVar2 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
          do {
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
            lVar18 = lVar18 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar20 = 4;
          lVar18 = uVar9 - 0x48;
          pfVar16 = (float *)&DAT_007358e0;
          lVar10 = lVar11;
          lVar15 = lVar18;
          do {
            fVar2 = *pfVar16;
            fVar3 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
            lVar10 = lVar10 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar10 = 2;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar18;
            lVar11 = lVar11 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
        }
        *(float *)(puVar7 + 0xf) = (float)dVar24;
        uVar14 = *(undefined4 *)(iVar12 + 0x18);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
        *(undefined4 *)(puVar7 + 7) = uVar14;
        uVar14 = *(undefined4 *)(iVar12 + 0x1c);
        *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
        *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
        mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x88,uVar19 + 0x88,uVar19 + 0x8c);
        mobyutil::MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      }
      else {
        *(undefined4 *)((int)pvVar6 + 0x1c8) = 1;
        *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
      }
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  fVar1 = DAT_008f49d0;
  iVar12 = 0x8f0000;
  fVar4 = param_1->pClass->gScale;
  *(undefined4 *)((int)pvVar6 + 0x164) = 0;
  param_1->scale = fVar4 * fVar1;
  if ((param_1->state == '\x01') || (iVar12 = *(int *)((int)pvVar6 + 0x1d0), iVar12 == -1)) {
    if (param_1->state == '\x01') {
      uVar14 = *(undefined4 *)((int)pvVar6 + 0x174);
    }
    else {
      uVar14 = *(undefined4 *)((int)pvVar6 + 0x178);
    }
    *(undefined4 *)((int)pvVar6 + 0x1b8) = uVar14;
    mobyutil::MB_getTarget(param_1,iVar12,uVar19 + 0x120);
  }
  else {
    *(undefined4 *)((int)pvVar6 + 0x1b8) = *(undefined4 *)((int)pvVar6 + 0x178);
    mobyutil::MB_getTargetInArea
              (param_1,uVar19 + 0x120,uVar19 + 0x120,0,0,Splines[iVar12]->points,
               Splines[iVar12]->cnt);
  }
  fVar4 = (param_1->pos).y - *(float *)((int)pvVar6 + 0x124);
  fVar1 = (param_1->pos).x - *(float *)((int)pvVar6 + 0x120);
  fVar2 = (param_1->pos).z - *(float *)((int)pvVar6 + 0x128);
  if (*(float *)((int)pvVar6 + 0x1b8) < SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4)) {
    *(undefined4 *)((int)pvVar6 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x160) = g_heroMobyPtr;
  }
  return;
}



//==== 004bcd20  ns=mobyupdate_unsorted  size=0x1ba0
// sig: undefined UpdateMoby_931(MobyInstance * moby)
// callers(0): 
// callees(33): 00057820 collproc::CollLine; 00065468 stub::STUB_00065468; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104e44 mobyutil::PointInsideComplexPoly; 0010581c mobyutil::SetCollDamIn; 00105d58 mobyutil::MB_CollLineMulti; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010d7a0 mobyutil::MB_PathFollowToPos; 00113e88 mobyutil::MB_MayaFrameTrigger; 00470690 FUN_00470690; 004bbe20 mobyupdate_helpers::M931_004bbe20; 004bc480 mobyupdate_helpers::M931_004bc480; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 005c8318 rand; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e84c0 FUN_005e84c0

/* WARNING: Type propagation algorithm not settling */
/* Moby 931 */

void mobyupdate_unsorted::UpdateMoby_931(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  uint uVar12;
  MobyModeBit MVar16;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar11;
  Spline *pSVar17;
  Vec4 *pVVar18;
  ulonglong uVar19;
  byte in_cr6;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  Vec4 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [16];
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 auStack_90 [48];
  float local_60;
  int local_5c;
  longlong local_58;
  
  lVar10 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  mobyupdate_helpers::M931_004bc480();
  bVar1 = moby->state;
  iVar13 = *(int *)((int)pvVar5 + 0x160);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x41400000;
        *(undefined2 *)((int)pvVar5 + 0x24) = 0xc;
        *(undefined1 *)((int)pvVar5 + 0x28) = 3;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x42b40000;
        *(ushort *)((int)pvVar5 + 0x3e) = *(ushort *)((int)pvVar5 + 0x3e) | 2;
        uVar12 = rand();
        MVar16 = moby->modeBits;
        if ((uVar12 & 1) != 0) {
          MVar16 = MVar16 | MIRROR;
          moby->modeBits = MVar16;
        }
        if (*(int *)((int)pvVar5 + 0x1cc) != -1) {
          moby->collision = (ushort *)0x0;
          moby->modeBits = MVar16 | (UNK_40|DISABLED);
        }
        if ((*(int *)((int)pvVar5 + 0x180) == -1) || (*(int *)((int)pvVar5 + 0x184) == -1)) {
          *(undefined4 *)((int)pvVar5 + 0x1d4) = 1;
        }
        if (*(int *)((int)pvVar5 + 0x170) != -1) {
          pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
          (moby->pos).x = pSVar6->points[0].x;
          (moby->pos).y = pSVar6->points[0].y;
          (moby->pos).z = pSVar6->points[0].z;
          (moby->pos).w = pSVar6->points[0].w;
        }
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar10,0,0,5);
        }
      }
      else {
        if (*(int *)((int)pvVar5 + 0x1cc) != -1) {
          iVar13 = mobyutil::MB_CountActiveMobysByGroup(*(int *)((int)pvVar5 + 0x1cc),10);
          if (iVar13 != 0) {
            return;
          }
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        if ((*(int *)((int)pvVar5 + 0x164) != 2) && (*(int *)((int)pvVar5 + 0x170) != -1)) {
          moby->state = '\x02';
          if (moby->animationId != '\x04') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          }
          iVar14 = 0;
          pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
          iVar13 = pSVar6->cnt;
          pSVar17 = pSVar6;
          if (0 < iVar13 + -2) {
            do {
              fVar27 = pSVar17->points[0].y - pSVar17->points[1].y;
              fVar3 = pSVar17->points[0].x - pSVar17->points[1].x;
              fVar4 = pSVar17->points[0].z - pSVar17->points[1].z;
              iVar14 = iVar14 + 1;
              pSVar17->points[0].w = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar27 * fVar27);
              iVar13 = pSVar6->cnt;
              pSVar17 = (Spline *)pSVar17->points;
            } while (iVar14 < iVar13 + -2);
          }
          fVar27 = pSVar6->points[0].x;
          (moby->pos).x = fVar27;
          pVVar18 = pSVar6->points + iVar13 + -1;
          (moby->pos).y = pSVar6->points[0].y;
          (moby->pos).z = pSVar6->points[0].z;
          (moby->pos).w = pSVar6->points[0].w;
          *(float *)((int)pvVar5 + 0x40) = pVVar18->x - fVar27;
          *(float *)((int)pvVar5 + 0x44) = pVVar18->y - (moby->pos).y;
          *(float *)((int)pvVar5 + 0x48) = pVVar18->z - (moby->pos).z;
          *(float *)((int)pvVar5 + 0x4c) = pVVar18->w;
          FUN_005e84c0((double)(DAT_008f49b4 * mobyutil::g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
          dVar20 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(DAT_008f49b4 * mobyutil::g_FrameTime),
                                      -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                      pSVar6->points + pSVar6->cnt + -1);
          *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
        }
      }
    }
    else if (bVar1 < 3) {
      dVar24 = (double)(mobyutil::g_FrameTime * 12.0);
      pSVar6 = Splines[*(int *)((int)pvVar5 + 0x170)];
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar6,lVar10 + 0x10,local_150,&local_5c,
                 &local_60);
      dVar20 = (double)fastfunc::FastIntToDouble(local_5c);
      dVar22 = (double)pSVar6->points[0].w;
      dVar23 = (double)((float)(dVar20 * dVar22 + (double)local_60) + 2.0);
      local_5c = fastfunc::FastDoubleToInt((double)(float)(dVar23 / dVar22));
      dVar20 = (double)fastfunc::FastIntToDouble();
      dVar22 = (double)pSVar6->points[0].w;
      local_60 = (float)(-(double)(float)(dVar20 * dVar22 - dVar23) / dVar22);
      if (local_5c < pSVar6->cnt + -1) {
        fVar7 = (pSVar6->points[local_5c + 1].x - pSVar6->points[local_5c].x) * local_60;
        fVar8 = (pSVar6->points[local_5c + 1].y - pSVar6->points[local_5c].y) * local_60;
        fVar9 = (pSVar6->points[local_5c + 1].z - pSVar6->points[local_5c].z) * local_60;
        fVar27 = pSVar6->points[local_5c].x;
        fVar3 = pSVar6->points[local_5c].y;
        fVar4 = pSVar6->points[local_5c].z;
        if (local_5c + 1 < pSVar6->cnt + -8) {
          dVar20 = (double)(moby->rotation).z;
          uVar21 = FUN_005e8338((double)(pSVar6->points[local_5c + 1].x - (moby->pos).x),
                                (double)(pSVar6->points[local_5c + 1].y - (moby->pos).y));
          dVar20 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar20,uVar21,0x3f847ae140000000,0x3fd3333340000000,
                                      0x3fb99999a0000000);
          (moby->rotation).z = (float)dVar20;
        }
        fVar3 = (fVar8 + fVar3) - (moby->pos).y;
        fVar7 = (fVar7 + fVar27) - (moby->pos).x;
        fVar27 = (fVar9 + fVar4) - (moby->pos).z;
        dVar20 = (double)SQRT(fVar27 * fVar27 + fVar7 * fVar7 + fVar3 * fVar3);
        if (dVar24 - dVar20 < 0.0) {
          dVar20 = dVar24;
        }
        FUN_005e7f98(dVar20,local_160,local_160);
        (moby->pos).x = (moby->pos).x + fVar7;
        (moby->pos).y = (moby->pos).y + fVar3;
        (moby->pos).z = (moby->pos).z + fVar27;
      }
      else {
        dVar20 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar10 + 0x10,0);
        uVar2 = moby->animationId;
        if ((double)(moby->pos).z < dVar20) {
          (moby->pos).z = (float)dVar20;
        }
        moby->state = '\x04';
        if (uVar2 != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (bVar1 < 4) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
      fVar27 = -(DAT_008f49b8 * DAT_0071f418 - *(float *)((int)pvVar5 + 0x48));
      *(float *)((int)pvVar5 + 0x48) = fVar27;
      if ((fVar27 < 0.0) &&
         (dVar20 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_140,0),
         (double)(moby->pos).z < dVar20)) {
        uVar2 = moby->animationId;
        (moby->pos).z = (float)dVar20;
        moby->state = '\x04';
        if (uVar2 != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else if (*(int *)((int)pvVar5 + 0x164) != 2) {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar27 = mobyutil::OrganicDeltAng
                         ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      iVar14 = fastfunc::FastDecTimerS32((double)fVar27,uVar19 + 0x1c0);
      uVar2 = moby->animationId;
      if (iVar14 != 0) {
        if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
          fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
          fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
          fVar27 = SQRT(fVar3 * fVar3 + fVar27 * fVar27);
          if (fVar27 < DAT_008f49c4) {
            moby->state = '\a';
            if (uVar2 == '\x01') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar10,1,0,(int)(animationSpeed * 10.5));
            return;
          }
          if (fVar27 < DAT_008f49c8) {
            moby->state = '\b';
            if (uVar2 == '\x13') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
            return;
          }
        }
        moby->state = '\x05';
        if (uVar2 != '\x06') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,6,0,(int)(animationSpeed * 20.5));
        }
        fVar27 = DAT_008f49d4;
        *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
        moby->unk58 = fVar27;
      }
    }
  }
  else if (bVar1 == 10) {
    uVar12 = 0;
    if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
      uVar12 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
    }
    else {
      moby->unk58 = 1.0;
    }
    if (((uVar12 & 0x40) != 0) ||
       ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 9) {
    uVar12 = 0;
    if (*(int *)((int)pvVar5 + 0x1d8) == 0) {
      uVar12 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
    }
    else {
      moby->unk58 = 1.0;
    }
    if (((uVar12 & 0x40) != 0) ||
       ((*(int *)((int)pvVar5 + 0x1d8) != 0 && ((moby->field43_0x70 & 2U) != 0)))) {
      if (*(int *)((int)pvVar5 + 0x1d4) == 0) {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        uVar12 = *(int *)((int)pvVar5 + 0x1b0) + 1;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        iVar14 = *(int *)((int)pvVar5 + (uVar12 * 4 & 4) + 0x180);
        *(uint *)((int)pvVar5 + 0x1b0) = uVar12 & 1;
        pSVar6 = Splines[iVar14];
        local_a0 = pSVar6->points[iVar13].x;
        local_9c = pSVar6->points[iVar13].y;
        local_98 = pSVar6->points[iVar13].z;
        local_94 = pSVar6->points[iVar13].w;
        dVar20 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_a0,0);
        local_98 = (float)dVar20;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
        }
        *(float *)((int)pvVar5 + 0x40) = local_a0 - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = local_9c - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = local_98 - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = local_94;
        FUN_005e84c0((double)(DAT_008f49b4 * mobyutil::g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        dVar20 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * mobyutil::g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,&local_a0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\0') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
    }
  }
  else if (bVar1 == 8) {
    dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAng
              ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar5 + 0x1bc));
    if ((moby->field43_0x70 & 2U) == 0) {
      dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
      mobyfunc::GetBonePosition(lVar10,0,&local_b0);
      if ((20.0 <= dVar20) && (dVar20 <= 30.0)) {
        local_c0 = (moby->pos).x;
        local_bc = (moby->pos).y;
        local_b4 = (moby->pos).w;
        local_b8 = (moby->pos).z + 0.5;
        dVar20 = (double)mathfunc::cosf((moby->rotation).z);
        local_d0 = (float)dVar20;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_cc = (float)dVar20;
        local_c8 = 0;
        mobyutil::SetCollDamIn(0x4010000000000000,auStack_90,lVar10,0x10001);
        collproc::CollLine(&local_c0,&local_b0,0,lVar10,auStack_90);
        mobyutil::MB_CollLineMulti(&local_c0,&local_b0,&local_c0,uVar19 + 0x1a0,lVar10,auStack_90,5)
        ;
        stub::STUB_00065468(&local_c0,&local_b0);
        *(undefined4 *)((int)pvVar5 + 0x1a0) = local_b0;
        *(undefined4 *)((int)pvVar5 + 0x1a4) = local_ac;
        *(undefined4 *)((int)pvVar5 + 0x1a8) = local_a8;
        *(undefined4 *)((int)pvVar5 + 0x1ac) = local_a4;
      }
    }
    else {
      fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      fVar27 = SQRT(fVar3 * fVar3 + fVar27 * fVar27);
      if (((DAT_008f49c8 <= fVar27) || (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
         (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1 <=
          *(int *)((int)pvVar5 + 0x1b4))) {
        if ((DAT_008f49c8 < fVar27) && (moby->state = '\x04', moby->animationId != '\0')) {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4) + 1;
        *(int *)((int)pvVar5 + 0x1b4) = iVar13;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        }
        pSVar6 = Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)];
        *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
        FUN_005e84c0((double)(DAT_008f49b4 * mobyutil::g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
        dVar20 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * mobyutil::g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                    Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13,
                                    *(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
    }
  }
  else if (bVar1 == 7) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      uVar21 = mobyupdate_helpers::M931_004bbe20
                         ((double)*(float *)((int)pvVar5 + 0x1b8),lVar10,&local_100);
      fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14);
      fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10);
      if ((SQRT(fVar3 * fVar3 + fVar27 * fVar27) < DAT_008f49c8) &&
         (moby->state = '\b', moby->animationId != '\x13')) {
        local_58 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
      }
    }
    mobyutil::OrganicDeltAngSpeed
              (uVar21,(double)(DAT_0071f418 * 1.0471976),(double)(DAT_0071f418 * 3.1415927),
               (double)(mobyutil::g_FrameTime * 3.1415927),lVar10);
    local_110.x = (moby->pos).x;
    local_110.y = (moby->pos).y;
    local_110.z = (moby->pos).z;
    local_110.w = (moby->pos).w;
    fastfunc::FastVecSub(&local_f0,&local_100,lVar10 + 0x10);
    local_100 = local_f0;
    local_fc = local_ec;
    local_f8 = local_e8;
    local_f4 = local_e4;
    FUN_005e7f98((double)(mobyutil::g_FrameTime * 6.5),&local_100,&local_100);
    fastfunc::FastVecAddSelf(auStack_e0,&local_100,lVar10 + 0x10);
    iVar13 = mobyutil::CollMovingSphere
                       (0x4002000000000000,0x3fe8000000000000,0x3fe0000000000000,0x3fe0c15240000000,
                        lVar10,&local_110,&local_100);
    if ((iVar13 == 0) ||
       (iVar13 = mobyutil::PointInsideComplexPoly
                           (&local_110,(Vec4 *)Splines[*(int *)((int)pvVar5 + 0x1b0)]->points,
                            Splines[*(int *)((int)pvVar5 + 0x1b0)]->cnt), iVar13 != 0)) {
      (moby->pos).x = local_110.x;
      (moby->pos).y = local_110.y;
      (moby->pos).z = local_110.z;
      uVar2 = moby->animationId;
      (moby->pos).w = local_110.w;
      moby->state = '\x04';
      if (uVar2 != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 12.5);
        mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 12.5));
      }
    }
    else {
      (moby->pos).x = local_110.x;
      (moby->pos).y = local_110.y;
      (moby->pos).z = local_110.z;
      (moby->pos).w = local_110.w;
    }
  }
  else if (bVar1 == 6) {
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      fVar27 = mobyutil::OrganicDeltAng
                         ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x1bc));
      dVar20 = (double)fVar27;
      if ((((*(int *)((int)pvVar5 + 0x1d8) != 0) ||
           (fVar27 = (moby->pos).y - *(float *)(iVar13 + 0x14),
           fVar3 = (moby->pos).x - *(float *)(iVar13 + 0x10),
           dVar20 = (double)SQRT(fVar3 * fVar3 + fVar27 * fVar27), 8.0 <= dVar20)) ||
          (*(int *)((int)pvVar5 + 0x1d4) != 0)) ||
         (Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)]->cnt + -1 <=
          *(int *)((int)pvVar5 + 0x1b4))) {
        iVar13 = fastfunc::FastDecTimerS32(dVar20,uVar19 + 0x1c0);
        if (iVar13 != 0) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar10,6,0,(int)(animationSpeed * 20.5));
          }
          fVar27 = DAT_008f49d4;
          *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
          moby->unk58 = fVar27;
        }
      }
      else {
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        iVar13 = *(int *)((int)pvVar5 + 0x1b4) + 1;
        *(int *)((int)pvVar5 + 0x1b4) = iVar13;
        if (moby->animationId != '\x04') {
          local_58 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
        }
        pSVar6 = Splines[*(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180)];
        *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
        *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
        *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
        *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
        FUN_005e84c0((double)(DAT_008f49b4 * mobyutil::g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
        iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
        dVar20 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)(DAT_008f49b4 * mobyutil::g_FrameTime),
                                    -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                    Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13,
                                    *(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
        *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
      }
    }
  }
  else if (bVar1 == 5) {
    if (*(int *)((int)pvVar5 + 0x164) == 2) {
      moby->state = '\x04';
      if (moby->animationId != '\0') {
        local_58 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar13 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar13 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar20,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x1bc));
      dVar20 = 10.0;
      iVar14 = mobyutil::MB_MayaFrameTrigger(10.0,moby);
      if (iVar14 == 0) {
        iVar14 = mobyutil::MB_MayaFrameTrigger(40.0,moby);
        fVar27 = (moby->pos).x;
        fVar3 = (moby->pos).y;
        uVar2 = moby->animationId;
        if (iVar14 == 0) {
          auVar25 = loadVectorLeftIndexed(0x1c4,uVar19);
          auVar26 = loadVectorRightIndexed(0x1d4,uVar19);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x44,0x4bcca4);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                     auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
          if ((!(bool)(in_cr6 >> 1 & 1)) && ((moby->field43_0x70 & 2U) != 0)) {
            moby->state = '\x06';
            if (uVar2 != '\b') {
              local_58 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar10,8,0,(int)(animationSpeed * 10.5));
            }
            uVar15 = fastfunc::FastDoubleToInt
                               ((double)(animationSpeed * *(float *)((int)pvVar5 + 0x188) * 60.0));
            *(undefined4 *)((int)pvVar5 + 0x1c0) = uVar15;
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1d8) != 0) {
            return;
          }
          fVar7 = fVar3 - *(float *)(iVar13 + 0x14);
          fVar4 = fVar27 - *(float *)(iVar13 + 0x10);
          fVar4 = SQRT(fVar4 * fVar4 + fVar7 * fVar7);
          if (fVar4 < DAT_008f49c4) {
            moby->state = '\a';
            if (uVar2 == '\x01') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar10,1,0,(int)(animationSpeed * 10.5));
            return;
          }
          if (fVar4 < DAT_008f49c8) {
            moby->state = '\b';
            if (uVar2 == '\x13') {
              return;
            }
            local_58 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar10,0x13,0,(int)(animationSpeed * 10.5));
            return;
          }
          fVar3 = fVar3 - *(float *)(iVar13 + 0x14);
          fVar27 = fVar27 - *(float *)(iVar13 + 0x10);
          if ((double)SQRT(fVar27 * fVar27 + fVar3 * fVar3) <= dVar20) {
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1c8) == 0) {
            return;
          }
          if (*(int *)((int)pvVar5 + 0x1d4) != 0) {
            return;
          }
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
          uVar11 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0) + 1 & 1;
          *(int *)((int)pvVar5 + 0x1b0) = (int)uVar11;
          if (moby->animationId != '\x04') {
            local_58 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar10,4,0,(int)(animationSpeed * 20.5));
            uVar11 = (ulonglong)*(uint *)((int)pvVar5 + 0x1b0);
          }
          iVar13 = *(int *)((int)pvVar5 + 0x1b4);
          pSVar6 = Splines[*(int *)((int)pvVar5 + (int)(uVar11 << 2) + 0x180)];
          *(float *)((int)pvVar5 + 0x40) = pSVar6->points[iVar13].x - (moby->pos).x;
          *(float *)((int)pvVar5 + 0x44) = pSVar6->points[iVar13].y - (moby->pos).y;
          *(float *)((int)pvVar5 + 0x48) = pSVar6->points[iVar13].z - (moby->pos).z;
          *(float *)((int)pvVar5 + 0x4c) = pSVar6->points[iVar13].w;
          FUN_005e84c0((double)(DAT_008f49b4 * mobyutil::g_FrameTime),uVar19 + 0x40,uVar19 + 0x40);
          iVar13 = *(int *)((int)pvVar5 + *(int *)((int)pvVar5 + 0x1b0) * 4 + 0x180);
          dVar20 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(DAT_008f49b4 * mobyutil::g_FrameTime),
                                      -(double)(DAT_008f49b8 * DAT_0071f418),lVar10 + 0x10,
                                      Splines[iVar13]->points + *(int *)((int)pvVar5 + 0x1b4),iVar13
                                      ,*(int *)((int)pvVar5 + 0x1b4) * 0x10,0);
          *(float *)((int)pvVar5 + 0x48) = (float)dVar20;
          return;
        }
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      mobyfunc::GetBonePosition(lVar10,uVar21,local_130);
      dVar20 = 0.5;
      FUN_005e7f98((double)(DAT_008f49c0 * mobyutil::g_FrameTime),local_120,local_120);
      iVar14 = (int)(animationSpeed * (float)((double)(longlong)DAT_008f49bc + dVar20));
      local_58 = (longlong)iVar14;
      FUN_00470690(0x4008000000000000,local_120,local_130,lVar10,iVar13,iVar14);
      *(int *)((int)pvVar5 + 0x1c4) = *(int *)((int)pvVar5 + 0x1c4) + 1;
    }
  }
  return;
}



//==== 004be8c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M932_004be8c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M932_004be8c0(void)

{
  DAT_008f4a24 = 0x10000;
  return;
}



//==== 004be908  ns=mobyupdate_helpers  size=0x870
// sig: undefined M932_004be908(void)
// callers(1): 004bf1d0 mobyupdate_unsorted::UpdateMoby_932
// callees(9): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M932_004be908(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  Spline *pSVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar10;
  longlong lVar11;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x110;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x24] = in_LR;
  puVar7[0x21] = in_f31;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  pvVar5 = param_1->pVar;
  uVar19 = ZEXT48(pvVar5);
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1d] = unaff_r28;
  iVar12 = fastfunc::FastDecTimerS32(uVar19 + 0x184);
  fVar4 = animationSpeed;
  if (iVar12 == 2) {
    param_1->state = '\x05';
  }
  else {
    iVar12 = *(int *)((int)pvVar5 + 0x184);
    puVar7[0x1b] = (longlong)(int)(animationSpeed * 10.5);
    if (((((iVar12 == *(int *)((int)puVar7 + 0xdc)) ||
          (puVar7[0x1b] = (longlong)(int)(fVar4 * 20.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) ||
         (puVar7[0x1b] = (longlong)(int)(fVar4 * 40.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) ||
        ((puVar7[0x1b] = (longlong)(int)(fVar4 * 60.5), iVar12 == *(int *)((int)puVar7 + 0xdc) ||
         (puVar7[0x1b] = (longlong)(int)(fVar4 * 120.5), iVar12 == *(int *)((int)puVar7 + 0xdc)))))
       || (puVar7[0x1b] = (longlong)(int)(fVar4 * 179.5), iVar12 == *(int *)((int)puVar7 + 0xdc))) {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
    }
    dVar24 = 0.0;
    *(undefined4 *)((int)puVar7 + 0x74) = 0;
    iVar12 = mobyutil::MB_damage(param_1,0x330000,0);
    iVar13 = mobyutil::MB_HandleDamage
                       (param_1,iVar12,uVar19 + 0x20,0,puVar7 + 0xe,(int)puVar7 + 0x74,0,4);
    if ((*(int *)(puVar7 + 0xe) != 1) && (param_1->state != '\x04')) {
      fVar4 = *(float *)((int)pvVar5 + 0x20) - *(float *)((int)puVar7 + 0x74);
      *(float *)((int)pvVar5 + 0x20) = fVar4;
      if ((double)fVar4 <= dVar24) {
        iVar13 = 1;
      }
      uVar14 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f000000;
      fVar1 = DAT_008f4a48;
      fVar4 = DAT_0071f418;
      *(undefined4 *)((int)pvVar5 + 0x90) = uVar14;
      *(undefined4 *)((int)pvVar5 + 0x84) = 0x3a03126f;
      *(undefined1 *)((int)pvVar5 + 0xad) = 0;
      *(undefined4 *)((int)pvVar5 + 0x94) = 9;
      *(float *)((int)pvVar5 + 0x80) = fVar1 * fVar4;
      fVar4 = mobyutil::g_FrameTime;
      if (iVar13 < 3) {
        if ((-1 < iVar13) && (0 < iVar13)) {
          fVar4 = DAT_008f4a48 * DAT_0071f418;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar5 + 0x80) = fVar4;
          fVar4 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar5 + 0x88) = DAT_008f4a58 * mobyutil::g_FrameTime;
          fVar1 = DAT_008f4a54;
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x41600000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x41e00000;
          *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
          fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
          fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
          dVar21 = ABS((double)fVar4);
          dVar22 = ABS((double)fVar1);
          *(float *)(puVar7 + 0x10) = fVar4;
          *(float *)((int)puVar7 + 0x84) = fVar1;
          *(float *)(puVar7 + 0x11) = (float)(dVar21 - dVar22);
          uVar17 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
          dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
          if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
            dVar23 = dVar22;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
          dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
          if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
            dVar22 = dVar21;
          }
          fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
          if (dVar24 < dVar23) {
            lVar10 = uVar9 - 0x100;
            lVar15 = uVar9 - 0x78;
            lVar18 = uVar9 - 0x68;
            lVar20 = 2;
            fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
            fVar3 = fVar2 * fVar2;
            *(float *)((int)puVar7 + 0xa4) = fVar2;
            *(float *)((int)puVar7 + 0x9c) = fVar2;
            *(float *)(puVar7 + 0x14) = fVar2;
            *(float *)(puVar7 + 0x13) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar3;
            *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
            *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x88) * fVar2 * fVar2;
              iVar13 = (int)lVar15;
              lVar10 = lVar10 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar20 = 4;
            lVar18 = uVar9 - 0x78;
            pfVar16 = (float *)&DAT_007358e0;
            lVar10 = lVar11;
            lVar15 = lVar18;
            do {
              fVar2 = *pfVar16;
              fVar3 = pfVar16[1];
              pfVar16 = pfVar16 + 2;
              *(float *)((int)lVar10 + 0x98) = *(float *)((int)lVar10 + 0x98) * fVar2;
              lVar10 = lVar10 + 8;
              *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
              lVar15 = lVar15 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar10 = 2;
            do {
              iVar13 = (int)lVar11;
              iVar8 = (int)lVar18;
              lVar11 = lVar11 + 0x10;
              lVar18 = lVar18 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
          }
          *(float *)((int)puVar7 + 0x7c) = (float)dVar24;
          uVar14 = *(undefined4 *)(iVar12 + 0x18);
          *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
          *(undefined4 *)(puVar7 + 7) = uVar14;
          uVar14 = *(undefined4 *)(iVar12 + 0x1c);
          *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
          *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
          mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x94,uVar19 + 0x88,uVar19 + 0x8c);
          mobyutil::MB_StartKick((double)*(float *)((int)puVar7 + 0x7c),param_1,uVar19 + 0x70);
          param_1->state = '\x04';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xf0;
        }
      }
      else if (iVar13 < 0xb) {
        if (iVar13 < 9) {
          *(float *)((int)pvVar5 + 0x88) = DAT_008f4a50 * mobyutil::g_FrameTime;
          fVar1 = DAT_008f4a4c;
          *(undefined4 *)((int)pvVar5 + 0xc0) = 0x40400000;
          *(undefined4 *)((int)pvVar5 + 0xc4) = 0x40c00000;
          *(float *)((int)pvVar5 + 0x8c) = fVar1 * fVar4;
          fVar4 = (param_1->pos).x - *(float *)(*(int *)(iVar12 + 0x20) + 0x10);
          fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar12 + 0x20) + 0x14);
          dVar21 = ABS((double)fVar4);
          dVar22 = ABS((double)fVar1);
          *(float *)((int)puVar7 + 0x8c) = fVar4;
          *(float *)(puVar7 + 0x12) = fVar1;
          *(float *)((int)puVar7 + 0x94) = (float)(dVar21 - dVar22);
          uVar17 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
          dVar23 = ABS((double)*(float *)((int)puVar7 + 0x8c));
          if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
            dVar23 = dVar22;
          }
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
          dVar22 = ABS((double)*(float *)(puVar7 + 0x12));
          if ((double)*(float *)((int)puVar7 + 0x94) - dVar24 < 0.0) {
            dVar22 = dVar21;
          }
          fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
          if (dVar24 < dVar23) {
            lVar10 = uVar9 - 0x100;
            lVar15 = uVar9 - 0x58;
            lVar18 = uVar9 - 0x48;
            lVar20 = 2;
            fVar2 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
            fVar3 = fVar2 * fVar2;
            *(float *)((int)puVar7 + 0xc4) = fVar2;
            *(float *)((int)puVar7 + 0xbc) = fVar2;
            *(float *)(puVar7 + 0x18) = fVar2;
            *(float *)(puVar7 + 0x17) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar3;
            *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar2;
            *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xa8) * fVar2 * fVar2;
              iVar13 = (int)lVar15;
              lVar10 = lVar10 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)(iVar13 + 4) * fVar2 * fVar2;
              lVar18 = lVar18 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar20 = 4;
            lVar18 = uVar9 - 0x58;
            pfVar16 = (float *)&DAT_007358e0;
            lVar10 = lVar11;
            lVar15 = lVar18;
            do {
              fVar2 = *pfVar16;
              fVar3 = pfVar16[1];
              pfVar16 = pfVar16 + 2;
              *(float *)((int)lVar10 + 0xb8) = *(float *)((int)lVar10 + 0xb8) * fVar2;
              lVar10 = lVar10 + 8;
              *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
              lVar15 = lVar15 + 8;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            lVar10 = 2;
            do {
              iVar13 = (int)lVar11;
              iVar8 = (int)lVar18;
              lVar11 = lVar11 + 0x10;
              lVar18 = lVar18 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0xb8)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
          }
          *(float *)(puVar7 + 0xf) = (float)dVar24;
          uVar14 = *(undefined4 *)(iVar12 + 0x18);
          *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(iVar12 + 0x10);
          *(undefined4 *)(puVar7 + 7) = uVar14;
          uVar14 = *(undefined4 *)(iVar12 + 0x1c);
          *(undefined4 *)((int)puVar7 + 0x34) = *(undefined4 *)(iVar12 + 0x14);
          *(undefined4 *)((int)puVar7 + 0x3c) = uVar14;
          mobyutil::MB_VecAtan2Angles(puVar7[6],puVar7[7],uVar9 - 0x98,uVar19 + 0x88,uVar19 + 0x8c);
          mobyutil::MB_StartKick((double)*(float *)(puVar7 + 0xf),param_1,uVar19 + 0x70);
          param_1->state = '\x03';
          *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
        }
        else {
          *(undefined1 *)((int)pvVar5 + 0x67) = 0xfa;
        }
      }
      mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
    *(undefined4 *)((int)pvVar5 + 0x188) = 0x41400000;
    pSVar6 = Splines[*(int *)((int)pvVar5 + 0x180)];
    iVar12 = mobyutil::MB_getTargetInArea
                       (0x4028000000000000,param_1,uVar19 + 0x120,pSVar6,0,0,pSVar6->points,
                        pSVar6->cnt);
    if ((iVar12 != 2) &&
       ((fVar4 = (param_1->pos).y - *(float *)((int)pvVar5 + 0x124),
        fVar1 = (param_1->pos).x - *(float *)((int)pvVar5 + 0x120),
        *(float *)((int)pvVar5 + 0x188) < SQRT(fVar1 * fVar1 + fVar4 * fVar4) ||
        (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar5 + 0x128)))))) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 2;
    }
    if (*(int *)((int)pvVar5 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar5 + 0x160) = g_heroMobyPtr;
    }
  }
  return;
}



//==== 004bf1d0  ns=mobyupdate_unsorted  size=0x64c
// sig: undefined UpdateMoby_932(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 004be908 mobyupdate_helpers::M932_004be908; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00658cd4: 'Kamakazie with an invalid boudPath. UID = %d'

/* Moby 932 */

void mobyupdate_unsorted::UpdateMoby_932(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x150;
  puVar8 = (ulonglong *)lVar18;
  *puVar8 = uVar14;
  puVar8[0x2c] = in_LR;
  puVar8[0x29] = unaff_r31;
  puVar8[0x28] = unaff_r30;
  puVar8[0x27] = unaff_r29;
  pvVar7 = moby->pVar;
  mobyupdate_helpers::M932_004be908();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    *(undefined4 *)((int)puVar8 + 0xec) = 0;
    *(undefined4 *)(puVar8 + 0x1d) = 0;
    *(undefined4 *)((int)puVar8 + 0xe4) = 0;
    *(undefined4 *)(puVar8 + 0x1c) = 0;
    puVar8[0x12] = 0xffffffffffffffff;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar19,uVar14 - 0x70,
               lVar19 + 0x10,0,&DAT_004bf178,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x04') {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x160) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_004bf178,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x41) == 0) {
      if ((uVar16 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = *(float *)(*(int *)((int)pvVar7 + 0x160) + 0x10) - (moby->pos).x;
    fVar4 = *(float *)(*(int *)((int)pvVar7 + 0x160) + 0x14) - (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar3 = ABS(fVar4);
    *(float *)(puVar8 + 0x1e) = fVar2;
    *(float *)((int)puVar8 + 0xf4) = fVar4;
    *(float *)(puVar8 + 0x1f) = fVar5 - fVar3;
    fVar2 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0xf4) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0x1e));
    if (*(float *)(puVar8 + 0x1f) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0xf4));
    if (*(float *)(puVar8 + 0x1f) - 0.0 < 0.0) {
      fVar9 = fVar5;
    }
    if (0.0 < fVar4) {
      lVar21 = uVar14 - 0x140;
      lVar19 = uVar14 - 0x44;
      lVar20 = uVar14 - 0x54;
      lVar23 = 2;
      fVar4 = (fVar9 - fVar4) / (fVar9 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x21) = fVar4;
      *(float *)(puVar8 + 0x20) = fVar4;
      *(float *)((int)puVar8 + 0x104) = fVar4;
      *(float *)((int)puVar8 + 0xfc) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar5;
      *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar4;
      *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar21 + 0xfc) = *(float *)((int)lVar21 + 0xec) * fVar4 * fVar4;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar21 = uVar14 - 0x54;
      lVar23 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar18;
      do {
        fVar4 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xfc) = *(float *)((int)lVar20 + 0xfc) * fVar4;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0xfc) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar6 + fVar3;
    }
    mobyutil::OrganicDeltAng
              (fVar2,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 0x18c));
    fVar2 = (moby->rotation).z;
    fVar4 = fVar2 + 1.5707963;
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar3 = fVar4;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
      fVar2 = fVar3;
    }
    fVar4 = fVar6 * fVar6;
    fVar5 = fVar2 * fVar2;
    fVar12 = fVar4 * fVar4 * fVar6;
    *(undefined4 *)(puVar8 + 0x19) = 0;
    fVar3 = fVar5 * fVar5 * fVar2;
    fVar13 = fVar4 * fVar12;
    fVar9 = fVar5 * fVar3;
    *(float *)((int)puVar8 + 0xc4) =
         (fVar4 * fVar13 * 2.601887e-06 +
         fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * 2.0
    ;
    *(float *)(puVar8 + 0x18) =
         (fVar5 * fVar9 * 2.601887e-06 +
         fVar9 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),puVar8 + 0x18,
               puVar8 + 0x1a);
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar7 + 0x164) != 2) {
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
      if (*(int *)((int)pvVar7 + 0x184) == 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0xc,0x4bf178);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x184,
                            ZEXT48(pvVar7));
        *(undefined4 *)((int)pvVar7 + 0x184U & 0xfffffffc) = uVar15;
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar7 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar7 + 0x24) = 3;
    *(undefined1 *)((int)pvVar7 + 0x28) = 2;
    if (*(int *)((int)pvVar7 + 0x180) == -1) {
      libc::printf("Kamakazie with an invalid boudPath. UID = %d",moby->uid);
      mobyfunc::DeleteMoby(moby);
    }
    else {
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar7 + 0xd0));
      *(undefined4 *)((int)pvVar7 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar7 + 0xd8) = 0x3f000000;
      uVar15 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar7 + 0xd0) = uVar15;
      *(float *)((int)pvVar7 + 0xf4) = mobyutil::g_FrameTime * 4.0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar8[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar8 + 0x124));
      }
    }
  }
  return;
}



//==== 004bf81c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M933_004bf81c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M933_004bf81c(void)

{
  DAT_008f4aa8 = 0x10000;
  return;
}



//==== 004bf890  ns=mobyupdate_unsorted  size=0x554
// sig: undefined UpdateMoby_933(MobyInstance * moby)
// callers(0): 
// callees(12): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109b40 mobyutil::AccelDelt; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00500250 fastfunc::FastMemSetZero; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView
// strings: 008f4ad4: '=VwP' (raw)

/* Moby 933 */

void mobyupdate_unsorted::UpdateMoby_933(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar11;
  ulonglong uVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong in_f31;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  lVar9 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar10 - 0x150);
  *puVar8 = uVar10;
  puVar8[0x2c] = in_LR;
  puVar8[0x29] = in_f31;
  puVar8[0x28] = unaff_r31;
  bVar1 = moby->state;
  puVar8[0x27] = unaff_r30;
  piVar6 = (int *)moby->pVar;
  puVar8[0x26] = unaff_r29;
  puVar8[0x25] = unaff_r28;
  if (bVar1 == 0) {
    piVar6[1] = -0x40800000;
    if (*piVar6 == 0) {
      dVar12 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
      (moby->pos).z = (float)(dVar12 + 0.699999988079071);
      dVar12 = (double)mobyutil::MB_randRangeFloat(0.010471975,0.02094395);
      piVar6[4] = (int)(float)dVar12;
      dVar15 = 0.006981316953897476;
      dVar12 = (double)mobyutil::MB_randRangeFloat(0.006981317,0.013962634);
      piVar6[5] = (int)(float)dVar12;
      dVar12 = (double)mobyutil::MB_randRangeFloat(0.0034906585,(float)dVar15);
      piVar6[6] = (int)(float)dVar12;
      moby->state = '\x01';
    }
    else if (0x7f < *(byte *)(*piVar6 + 0x20)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (Level == Kalebo) {
      fVar4 = (float)piVar6[1];
      dVar12 = 0.0;
      if (piVar6[1] < 0) {
        dVar15 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
        fVar4 = (float)(dVar15 + 0.699999988079071);
        piVar6[1] = (int)fVar4;
      }
      mobyutil::AccelDelt(fVar4,DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,(float)dVar12,&(moby->pos).z,
                          0x4bf830,(float *)(piVar6 + 2));
      if ((MobyInstancePermEnd < moby) && (hero::g_heroStateType != 0xf)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    iVar11 = mobyutil::MB_damage(lVar9,0x230000,0);
    fastfunc::FastMemSetZero(uVar10 - 0x70,0x40);
    *(undefined2 *)((int)puVar8 + 0xe4) = 1;
    auVar17 = loadVectorLeftIndexed(0x28,0x4bf830);
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xe0,
                       uVar10 - 0x150);
    *(undefined4 *)(puVar8 + 0x1c) = uVar7;
    *(undefined4 *)(puVar8 + 0x1e) = 0x3f000000;
    *(undefined1 *)((int)puVar8 + 0x11a) = 7;
    *(undefined1 *)((int)puVar8 + 0x11b) = 0xff;
    mobyutil::MB_HandleDamage(moby,iVar11,uVar10 - 0x70,0,puVar8 + 0x24,0,0,4);
    if ((((1 < *(int *)(puVar8 + 0x24)) && (iVar11 != 0)) &&
        (*(short *)(*(int *)(iVar11 + 0x20) + 0xa6) != 0x283)) || (DAT_00969f1c == moby)) {
      uVar16 = 0;
      *(undefined4 *)((int)puVar8 + 0xcc) = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((int)puVar8 + 0xc4) = 0;
      *(undefined4 *)(puVar8 + 0x18) = 0;
      sound::PlayMobySound(0,0,moby);
      if (DAT_00969f1c == moby) {
        puVar8[0x12] = 0xffffffffffffffff;
        puVar8[0x14] = 1;
        puVar8[0x15] = 1;
        puVar8[0x16] = 0xffffffffffffffff;
        puVar8[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar9,uVar10 - 0x90,
                   lVar9 + 0x10,0xffffffffffffffff,1,10,0x14,0x3c);
      }
      else {
        puVar8[0x12] = 0xffffffffffffffff;
        puVar8[0x14] = 1;
        puVar8[0x15] = 1;
        puVar8[0x16] = 0xffffffffffffffff;
        puVar8[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar16,uVar16,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar9,uVar10 - 0x90,lVar9 + 0x10,
                   0xffffffffffffffff,1,10,0x14,0x3c);
      }
      if (moby < MobyInstancePermEnd) {
        moby->damage = -1;
        moby->state = '\x02';
        moby->collision = (ushort *)0x0;
        moby->updateDistance = -1;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 3) {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar8 + 0x1a) = (moby->pos).x;
    fVar3 = (moby->pos).z;
    *(f32 *)((int)puVar8 + 0xd4) = fVar2;
    *(f32 *)(puVar8 + 0x1b) = fVar3;
    *(undefined4 *)((int)puVar8 + 0xdc) = 0x40400000;
    iVar11 = fastfunc::FastCheckBsphereInView(0x4050000000000000,uVar10 - 0x80);
    if (iVar11 == -1) {
      moby->state = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      moby->collision = moby->pClass->collision;
    }
  }
  dVar15 = (double)fastfunc::FastWrapRot((float)piVar6[3],DAT_008f4ad4);
  dVar12 = (double)(float)(3.141592502593994 - dVar15);
  if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
    dVar12 = dVar15;
  }
  dVar13 = (double)(float)(-3.141592502593994 - dVar15);
  if ((double)(float)(-3.141592502593994 - dVar15) - dVar12 < 0.0) {
    dVar13 = dVar12;
  }
  piVar6[3] = (int)(float)dVar15;
  dVar15 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar13));
  dVar12 = (double)(float)(dVar15 * dVar14);
  dVar12 = (double)((float)(dVar15 * dVar12) * 2.601887e-06 +
                   (float)(dVar12 * -0.0001980741071747616 +
                          (double)(float)(dVar14 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar15 * dVar13) *
                                                         -0.16666656732559204 + dVar13))));
  iVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 48.0));
  uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar12 * 32.0));
  fVar4 = (moby->rotation).x;
  fVar5 = (float)piVar6[4];
  moby->field60_0x90 =
       (int)((uVar10 & 0xffffffff) << 8) + 0x3000U | iVar11 + 0xcfU |
       (int)((uVar10 & 0xffffffff) << 0x10) + 0x300000U | 0xff000000;
  dVar12 = (double)fastfunc::FastWrapRot(fVar4,fVar5);
  (moby->rotation).x = (float)dVar12;
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)piVar6[5]);
  (moby->rotation).y = (float)dVar12;
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)piVar6[6]);
  (moby->rotation).z = (float)dVar12;
  return;
}



//==== 004bfdf8  ns=Global  size=0x128
// sig: undefined FUN_004bfdf8(void)
// callers(2): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_004bfdf8(int param_1,f32 *param_2)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  
  pMVar3 = mobyfunc::CreateMoby(MINE_03A5);
  if (pMVar3 != (MobyInstance *)0x0) {
    piVar2 = (int *)pMVar3->pVar;
    *piVar2 = param_1;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[1] = -0x40800000;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.010471975,0.02094395);
    piVar2[4] = (int)(float)dVar4;
    dVar5 = 0.006981316953897476;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.006981317,0.013962634);
    piVar2[5] = (int)(float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.0034906585,(float)dVar5);
    piVar2[6] = (int)(float)dVar4;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    pMVar3->updateDistance = -1;
    (pMVar3->rotation).z = fVar1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 004bff20  ns=Global  size=0xc
// sig: undefined FUN_004bff20(void)
// callers(2): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot; 004b6ec0 mobyupdate_unsorted::UpdateMoby_923
// callees(0): 

void FUN_004bff20(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



//==== 004bff2c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M934_004bff2c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M934_004bff2c(void)

{
  DAT_008f4b24 = 0x10000;
  return;
}



//==== 004bff60  ns=mobyupdate_unsorted  size=0x290
// sig: undefined UpdateMoby_934(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010581c mobyutil::SetCollDamIn; 00105870 mobyutil::DamageSphereAtPos; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001314c8 partupd::SpawnPart_61; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 934 */

void mobyupdate_unsorted::UpdateMoby_934(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  undefined8 in_r8;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 local_70 [16];
  undefined1 auStack_60 [48];
  
  lVar9 = (longlong)(int)moby;
  pfVar8 = (float *)moby->pVar;
  if (pfVar8 == (float *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  else if (moby->state == '\0') {
    dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 6.2831855);
    (moby->rotation).x = (float)dVar12;
    fVar1 = (moby->pos).x;
    fVar2 = *pfVar8;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar6 = pfVar8[1];
    fVar7 = pfVar8[2];
    uVar14 = 0x4000000000000000;
    mobyutil::SetCollDamIn(0x4000000000000000,auStack_60,lVar9,1);
    lVar11 = lVar9 + 0x10;
    iVar10 = collproc::CollLine(lVar11,local_70,0,lVar9,auStack_60);
    if ((((iVar10 == 0) &&
         (iVar10 = collproc::CollSphere(0x3fd3333340000000,lVar11,&DAT_004bff40,0,lVar9),
         iVar10 == 0)) && (iVar10 = fastfunc::FastDecTimerS32(pfVar8 + 0xe), iVar10 == 0)) ||
       ((CollOutput.pMoby == (MobyInstance *)0x0 ||
        (CollOutput.pMoby == (MobyInstance *)pfVar8[0xf])))) {
      (moby->pos).x = fVar1 + fVar2;
      (moby->pos).y = fVar3 + fVar6;
      (moby->pos).z = fVar4 + fVar7;
      (moby->pos).w = fVar5;
      if (worldUpdateTime % 3 == 0) {
        partupd::SpawnPart_61(0x40dd4c0000000000,0x3fb99999a0000000,lVar9,0);
      }
    }
    else {
      uVar13 = 0x3fe0000000000000;
      if ((CollOutput.pMoby)->oClass != SPIKEBALL) {
        mobyutil::DamageSphereAtPos
                  (0x3fe0000000000000,uVar14,0,lVar9,lVar11,&DAT_004bff40,1,0,in_r8,0,1);
      }
      mobyutil::MB_SpawnExplosionSparks
                (uVar13,0x402a000000000000,lVar9,lVar11,&DAT_004bff40,0xffffffffffffffff);
      sound::PlayMobySound(0,0,moby);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



