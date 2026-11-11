//==== 00260ea8  ns=mobyupd::update1379  size=0x2b8
// sig: undefined M1379_UpdateTargetLock(void)
// callers(1): 002611a0 mobyupd::update1379::M1379_Hud_Draw
// callees(2): 0025fbd0 mobyupd::update1379::M1379_ScanTargets; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1379::M1379_UpdateTargetLock(undefined8 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40 [32];
  
  if (g_gameMode != GAME_MODE_FREEZE && g_gameMode != GAME_MODE_PAUSE) {
    fastfunc::FastDecTimerS32(param_2 + 0x8c);
  }
  if (((((*(int *)(param_2 + 0x8c) == 0) || (iVar3 = *(int *)(param_2 + 0x88), iVar3 == 0)) ||
       ((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x128))) ||
      ((*(char *)(iVar3 + 0x20) == -3 || *(char *)(iVar3 + 0x20) == -2 ||
       (*(char *)(iVar3 + 0x31) == '\0')))) ||
     (((pad_Repeat & 0x2000) != 0 || (DAT_0096b2d6 == '\0')))) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  iVar2 = M1379_ScanTargets(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2
                            ,0x951500,local_40);
  iVar3 = *(int *)(param_2 + 0x88);
  if (((iVar2 != iVar3) && (500 < *(int *)(param_2 + 0x8c))) || (DAT_0096b2d6 == '\0')) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  if ((iVar2 != 0) &&
     (((iVar3 == 0 || ((*(short *)(iVar3 + 0xa6) != 0x3eb && (*(short *)(iVar2 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x88) = iVar2;
    *(int *)(param_2 + 0x128) = (int)*(short *)(iVar2 + 0xa6);
    *(undefined4 *)(param_2 + 0x8c) = DAT_0079c478;
    iVar3 = iVar2;
  }
  fVar1 = animationSpeed;
  if (iVar2 == iVar3) {
    *(undefined4 *)(param_2 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x118) + 1;
    *(int *)(param_2 + 0x118) = iVar2;
    if ((int)(fVar1 * 60.5) < iVar2) {
      *(undefined4 *)(param_2 + 0xec) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
      return;
    }
  }
  if (((iVar3 != 0) && (*(int *)(param_2 + 0x84) == 0)) &&
     (((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x128) ||
      ((*(char *)(iVar3 + 0x20) == -2 || (*(char *)(iVar3 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  return;
}



//==== 002611a0  ns=mobyupd::update1379  size=0x828
// sig: undefined M1379_Hud_Draw(void)
// callers(0): 
// callees(17): 00065490 draw::ScreenPosFromWorldSpace; 000685c4 draw::GetEffectTex; 0006a5c4 draw::Sprite_DrawShapeWrapper; 0006e740 draw::Sprite_DrawRotated; 00070834 draw::FontPrintSmallCenter; 0007b740 help::help_msg_string_by_index; 0010de78 mobyutil::MB_WrapRot; 00174f80 vuchain::SetGSReg; 0025e7a4 mobyupd::update1379::M1379_DrawShapeScaled; 0025edf8 mobyupd::update1379::M1379_0025edf8; 00260ea8 mobyupd::update1379::M1379_UpdateTargetLock; 004d82b8 idol_draw::BindFragmentProgram; 004dd6f0 idol_draw::Gfx_SubmitHudDrawCommands; 004de9c4 FUN_004de9c4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd
// strings: 0065556c: 'minHealth'

void mobyupd::update1379::M1379_Hud_Draw(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar12;
  ulonglong unaff_r25;
  longlong lVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar15;
  ulonglong uVar16;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar17;
  ulonglong in_f31;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  
  uVar16 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar16 - 0x150);
  *puVar3 = uVar16;
  puVar3[0x2c] = in_LR;
  puVar3[0x25] = in_f27;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x24] = unaff_r31;
  puVar3[0x22] = unaff_r29;
  puVar3[0x23] = unaff_r30;
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar14 = (ulonglong)uVar1;
  puVar3[0x21] = unaff_r28;
  puVar3[0x20] = unaff_r27;
  puVar3[0x1f] = unaff_r26;
  puVar3[0x1e] = unaff_r25;
  puVar3[0x1d] = unaff_r24;
  puVar3[0x1c] = unaff_r23;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar6);
  uVar4 = g_viewMtxPtr;
  idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0xd);
  auVar23 = ZEXT416(0xffffffff);
  auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar21 = loadVectorLeftIndexed(0xf4,uVar14);
  auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar22 = loadVectorRightIndexed(0x104,uVar14);
  auVar23 = loadVectorLeftIndexed(in_LR,0x261160);
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar21 | auVar22,0);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar24
                      );
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0xc0,
                     uVar16 - 0x150);
  *(undefined4 *)(puVar3 + 0x18) = uVar2;
  uVar6 = FUN_004de9c4(uVar4,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar4,HUD_Pass,0xd,uVar6,uVar16 - 0x90,1);
  uVar7 = draw::GetEffectTex(*(int *)(uVar1 + 0x104) + 0x28);
  iVar9 = draw::g_ScreenHeight;
  puVar3[0xe] = 0x70808080;
  puVar3[0xf] = uVar7;
  draw::Sprite_DrawShapeWrapper(0x170,iVar9 + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar4,HUD_Pass,0xc);
  uVar7 = draw::GetEffectTex(*(int *)(uVar1 + 0x104) + 0x29);
  iVar9 = draw::g_ScreenHeight;
  puVar3[0xe] = 0x70808080;
  puVar3[0xf] = uVar7;
  draw::Sprite_DrawShapeWrapper(0x170,iVar9 + -0x90,0x80,0x80,0,0,0x80,0x80);
  uVar6 = idol_draw::PackCmd(0,2,0,1,0x80);
  vuchain::SetGSReg(3,uVar6);
  M1379_UpdateTargetLock(param_1,uVar14);
  if (*(uint *)(uVar1 + 0x88) != 0) {
    draw::ScreenPosFromWorldSpace(uVar16 - 0xa0,(ulonglong)*(uint *)(uVar1 + 0x88) + 0x10);
    puVar3[0x19] = (longlong)SCREEN_PROJECTION_MAP_X;
    dVar18 = 0.0625;
    uVar6 = fastfunc::FastDoubleToInt
                      ((double)((*(float *)(puVar3 + 0x16) - (float)(longlong)puVar3[0x19]) * 0.0625
                               ));
    puVar3[0x19] = (longlong)SCREEN_PROJECTION_MAP_Y;
    uVar8 = fastfunc::FastDoubleToInt
                      ((double)(float)((double)(*(float *)((int)puVar3 + 0xb4) -
                                               (float)(longlong)puVar3[0x19]) * dVar18));
    if (DAT_0079c47c < *(int *)(uVar1 + 0x8c)) {
      dVar18 = (double)fastfunc::FastIntToDouble(*(int *)(uVar1 + 0x8c) - DAT_0079c47c);
      dVar15 = (double)fastfunc::FastIntToDouble(DAT_0079c480);
      dVar19 = (double)((float)(dVar18 / dVar15) * 5.0 + 1.0);
      dVar18 = (double)((1.0 - (float)(dVar18 / dVar15)) * 2.0);
      dVar15 = 1.0 - dVar18;
      if (dVar15 < 0.0) {
        dVar18 = 1.0;
      }
      fastfunc::FastDoubleToInt
                ((double)(float)(dVar18 * 96.0),0x3ff0000000000000,dVar15,0x4014000000000000);
      uVar6 = fastfunc::FastIntToDouble(uVar6);
      uVar8 = fastfunc::FastIntToDouble(uVar8);
      dVar18 = (double)fastfunc::FastIntToDouble(worldUpdateTime);
      fVar25 = mobyutil::MB_WrapRot((float)(dVar18 * 0.03333333507180214));
      M1379_0025edf8(uVar6,uVar8,dVar19,(double)fVar25);
      *(undefined4 *)(uVar1 + 0xec) = 0;
    }
    else {
      puVar3[0x19] = (longlong)(int)(animationSpeed * 20.5);
      uVar6 = fastfunc::FastIntToDouble(uVar6);
      uVar8 = fastfunc::FastIntToDouble(uVar8);
      M1379_0025edf8(uVar6,uVar8,0x3ff0000000000000,0);
      *(undefined4 *)(uVar1 + 0xec) = *(undefined4 *)(uVar1 + 0x88);
    }
  }
  iVar9 = 0;
  lVar12 = 0x40;
  lVar13 = 0x18;
  if (DAT_0096b2d7 != 0) {
    uVar6 = 0x3fe0000000000000;
    do {
      puVar3[0x19] = (longlong)(int)lVar12;
      bVar5 = DAT_0096b2d6;
      uVar16 = puVar3[0x19];
      puVar3[0x19] = (longlong)(int)lVar13;
      if (iVar9 < (int)(uint)bVar5) {
        M1379_DrawShapeScaled
                  ((double)(longlong)puVar3[0x19],(double)(longlong)uVar16,uVar6,&DAT_0079c49c,0x19)
        ;
      }
      else {
        M1379_DrawShapeScaled
                  ((double)(longlong)puVar3[0x19],(double)(longlong)uVar16,uVar6,&DAT_0079c49c,0x19)
        ;
      }
      iVar11 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar9;
      iVar10 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar9;
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + ((LZCOUNT(iVar11) << 0x3a) >> 0x3f & 0x2eU - lVar12) + 0x12;
      lVar13 = lVar13 + ((LZCOUNT(iVar10) << 0x3a) >> 0x3f & 0x1eU);
    } while (iVar9 < (int)(uint)DAT_0096b2d7);
  }
  iVar9 = *(int *)(uVar1 + 0xe0);
  iVar10 = *(int *)(uVar1 + 0xe4);
  draw::GetEffectTex(0x11);
  puVar3[0x19] = (longlong)iVar9;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  uVar16 = puVar3[0x19];
  puVar3[0x19] = (longlong)iVar10;
  dVar20 = 40.0;
  dVar17 = 0.0;
  dVar19 = 0.5;
  puVar3[0x14] = 0;
  dVar15 = (double)(longlong)uVar16;
  dVar18 = (double)(longlong)puVar3[0x19];
  draw::Sprite_DrawRotated
            ((float)(longlong)uVar16,(float)(longlong)puVar3[0x19],40.0,40.0,0.0,0.5,0.5);
  draw::GetEffectTex(0x12);
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  draw::Sprite_DrawRotated((float)dVar15,(float)dVar18,dVar20,dVar20,dVar17,dVar19,dVar19);
  draw::GetEffectTex(8);
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  draw::Sprite_DrawRotated((float)dVar15,(float)dVar18,10.0,10.0,dVar17,dVar19,dVar19);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      uVar6 = help::help_msg_string_by_index(STR_WARNING_SHIP_NEEDS_REPAIR);
      draw::FontPrintSmallCenter(0x100,0x186,0x80000080,uVar6,100);
    }
  }
  if (*(char *)(param_1 + 0x20) == '\b') {
    uVar6 = help::help_msg_string_by_index(STR_MISSION_COMPLETED);
    draw::FontPrintSmallCenter(0x100,200,0x80005080,uVar6,100);
  }
  fVar25 = (DAT_0096b2dc - *(float *)(uVar1 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar25) < 0.0) {
    fVar25 = fVar25 / ABS(fVar25);
  }
  fVar25 = *(float *)(uVar1 + 0xf0) + fVar25;
  *(float *)(uVar1 + 0xf0) = fVar25;
  iVar9 = fastfunc::FastDoubleToInt((double)((fVar25 * 251.0) / DAT_0096b2e0));
  iVar9 = iVar9 + 2;
  iVar9 = iVar9 + ((uint)(0xfd - (longlong)iVar9 >> 0x3f) & 0xfdU - iVar9);
  *(uint *)(uVar1 + 0xf4) = iVar9 + ((uint)((longlong)iVar9 + -2 >> 0x3f) & 2U - iVar9);
  return;
}



//==== 002619e0  ns=mobyupd::update1379  size=0x2fc
// sig: undefined M1379_UpdateGunsMissiles(void)
// callers(1): 00262730 mobyupd::update1379::M1379_UpdateFlight
// callees(7): 00065490 draw::ScreenPosFromWorldSpace; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupd::update1379::M1379_UpdateGunsMissiles
               (double param_1,double param_2,MobyInstance *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  mobyutil::MB_SphericalToVector
            (DAT_0079c37c * DAT_0079c3b0,(float)param_1,(float)param_2,&local_90);
  local_90 = local_90 + *param_4;
  local_8c = local_8c + param_4[1];
  local_88 = local_88 + param_4[2];
  iVar5 = fastfunc::FastDecTimerS32(param_4 + 0x20);
  if ((iVar5 != 0) && ((pad_DownButtons & 0x84) != 0)) {
    sound::PlayMobySound(3,0,param_3);
    dVar7 = 0.0;
    fVar6 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar1 = 2.2 / fVar6;
    dVar9 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    dVar8 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (0.0 - fVar6 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    mobyfunc::GetBonePosition(param_3,(*(byte *)((int)param_4 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar7);
    local_7c = (float)((double)local_7c + dVar8);
    local_78 = (float)((double)local_78 + dVar9);
    mobyupdate_helpers::M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    param_4[0x20] = DAT_0079c380;
    *(byte *)((int)param_4 + 0x61) = *(byte *)((int)param_4 + 0x61) ^ 1;
  }
  fVar4 = 0.0;
  local_64 = local_84;
  fVar3 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_90 * fVar2;
  fVar6 = local_8c * fVar2;
  fVar2 = local_88 * fVar2;
  local_90 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_90 = fVar1;
  }
  local_8c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_8c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_90 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_8c = fVar6;
  }
  local_88 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_88 = fVar2;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  draw::ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar9 = 0.0625;
  fVar6 = (float)fastfunc::FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  param_4[0x38] = fVar6;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)fastfunc::FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar9));
  param_4[0x39] = fVar6;
  return;
}



//==== 00261ce8  ns=mobyupd::update1379  size=0x1d4
// sig: undefined M1379_UpdateMissiles(void)
// callers(1): 00262730 mobyupd::update1379::M1379_UpdateFlight
// callees(4): 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 00334aa8 mobyupdate_helpers::Spawn_Moby295; 004fff60 fastfunc::FastDecTimerS32

void mobyupd::update1379::M1379_UpdateMissiles(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 local_50 [32];
  
  iVar2 = fastfunc::FastDecTimerS32(param_2 + 0x84);
  if (((iVar2 != 0) && ((pad_DownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    uVar1 = *(short *)(param_2 + 0x6a) + 1U & 3;
    *(ushort *)(param_2 + 0x6a) = uVar1;
    mobyfunc::GetBonePosition(param_1,(longlong)(short)uVar1 + 7,local_50);
    iVar2 = mobyupdate_helpers::Spawn_Moby295
                      ((double)(DAT_0079c384 * DAT_0079c3b0),param_1,local_50,
                       *(undefined4 *)(param_2 + 0xec),param_1 + 0x40,&DAT_00261cdc,
                       (int)(animationSpeed * 300.5));
    if (iVar2 != 0) {
      sound::PlayMobySound(2,0,(MobyInstance *)param_1);
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      *(undefined4 *)(param_2 + 0x84) = DAT_0079c388;
    }
  }
  return;
}



//==== 00261ec8  ns=mobyupd::update1379  size=0xcc
// sig: undefined M1379_BlendByDist(void)
// callers(0): 
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyupd::update1379::M1379_BlendByDist
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  char in_r6;
  int in_r9;
  double dVar1;
  double dVar2;
  
  if (param_4 < param_1) {
    dVar2 = (double)((float)(param_1 - param_4) / (float)(param_5 - param_4));
    if (dVar2 - 0.0 < 0.0) {
      dVar2 = 0.0;
    }
    if (1.0 - dVar2 < 0.0) {
      dVar2 = 1.0;
    }
    if (1 < in_r9) {
      in_r9 = in_r9 + -1;
      do {
        in_r9 = in_r9 + -1;
        dVar2 = (double)(float)(dVar2 * dVar2);
      } while (0 < in_r9);
    }
    if (in_r6 == '\0') {
      param_2 = (double)(float)((double)(float)(1.0 - dVar2) * param_2 +
                               (double)(float)(dVar2 * param_3));
    }
    else {
      dVar1 = (double)fastfunc::FastDiffRots(param_3,param_2);
      param_2 = (double)fastfunc::FastWrapRot((float)param_2,(float)(dVar2 * dVar1));
    }
  }
  return param_2;
}



//==== 00261f94  ns=mobyupd::update1379  size=0x70
// sig: undefined M1379_00261f94(void)
// callers(0): 
// callees(2): 00059e20 collproc::CollSphere; 000f1114 mobyfunc::GetBonePosition

void mobyupd::update1379::M1379_00261f94
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_30 [16];
  
  mobyfunc::GetBonePosition(param_2,param_3,auStack_30);
  collproc::CollSphere(param_1,auStack_30,param_3,param_5,param_6);
  return;
}



//==== 00262030  ns=mobyupd::update1379  size=0x6a0
// sig: undefined M1379_00262030(void)
// callers(1): 00262730 mobyupd::update1379::M1379_UpdateFlight
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupd::update1379::M1379_00262030(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  Cuboid *pCVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x120;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar15;
  puVar7[0x26] = in_LR;
  puVar7[0x21] = in_f29;
  puVar7[0x22] = in_f30;
  puVar7[0x23] = in_f31;
  lVar13 = uVar15 - 0x50;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(lVar13,0x262004);
  fVar8 = animationSpeed * 60.5;
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  puVar7[0x1e] = unaff_r29;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar9 = (int)param_1;
  uVar5 = *(uint *)(iVar9 + 0x78);
  uVar23 = (ulonglong)uVar5;
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  fVar1 = *(float *)(uVar5 + 100);
  auVar33 = loadVectorLeftIndexed(100,uVar23);
  auVar34 = loadVectorRightIndexed(0x74,uVar23);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  fVar2 = *(float *)(uVar5 + 0x10);
  auVar36 = loadVectorLeftIndexed(0x10,uVar23);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
  fVar3 = *(float *)(uVar5 + 0x14);
  auVar32 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorRightIndexed(0x20,uVar23);
  fVar4 = *(float *)(iVar9 + 0x10);
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  fVar1 = fVar1 * (float)(longlong)fVar8;
  auVar37 = vectorMultiplyAddFloatingPoint(auVar33 | auVar34,auVar31,auVar32);
  auVar31 = loadVectorLeftIndexed(0x14,uVar23);
  auVar32 = loadVectorRightIndexed(0x24,uVar23);
  auVar33 = loadVectorLeftIndexed(0x10,param_1);
  pCVar22 = Cuboids + *(int *)(uVar5 + 300);
  uVar16 = ZEXT48(pCVar22);
  auVar34 = loadVectorLeftIndexed(0x14,param_1);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar35,auVar37,auVar33);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar31 | auVar32,auVar37,auVar34);
  auVar32 = loadVectorLeftIndexed(0x30,uVar16);
  fVar8 = (fVar2 * fVar1 + fVar4) - (pCVar22->pos).x;
  fVar10 = (fVar3 * fVar1 + *(float *)(iVar9 + 0x14)) - (pCVar22->pos).y;
  auVar33 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar32 = loadVectorLeftIndexed(0x34,uVar16);
  auVar35 = loadVectorLeftIndexed(0x18,uVar23);
  auVar32 = vectorSubtractFloatingPoint(auVar31,auVar32);
  auVar36 = loadVectorRightIndexed(0x28,uVar23);
  fVar1 = (pCVar22->matrix).v0.x;
  fVar2 = (pCVar22->matrix).v0.y;
  auVar38 = loadVectorLeftIndexed(0x28,uVar16);
  auVar34 = loadVectorLeftIndexed(0x38,uVar16);
  auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x70,lVar18);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  auVar33 = vectorAddFloatingPoint(auVar38,auVar34);
  uVar6 = storeVectorElementWordIndexed
                    (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,lVar18);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  auVar31 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(puVar7 + 0xf) = ABS(fVar8) - ABS(fVar10);
  dVar27 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35 | auVar36,auVar37,auVar31);
  auVar32 = vectorSubtractFloatingPoint(auVar34,auVar38);
  dVar29 = (double)SQRT(fVar8 * fVar8 + fVar10 * fVar10);
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar12 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar12 = ABS(fVar10);
  }
  dVar28 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  puVar7[0x1d] = unaff_r28;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar1 = ABS(fVar8);
  }
  dVar26 = dVar27;
  if (0.0 < fVar12) {
    lVar17 = uVar15 - 0x110;
    lVar21 = uVar15 - 0x94;
    lVar19 = uVar15 - 0xa4;
    lVar24 = 2;
    fVar1 = (fVar1 - fVar12) / (fVar1 + fVar12);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar7 + 0x11) = fVar1;
    *(float *)(puVar7 + 0x10) = fVar1;
    *(float *)((int)puVar7 + 0x84) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar1;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar1 * fVar1;
      iVar9 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar15 - 0xa4;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar20;
      fVar2 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    do {
      iVar9 = (int)lVar18;
      iVar11 = (int)lVar21;
      lVar18 = lVar18 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  uVar25 = fastfunc::FastWrapRot((float)dVar26,3.14159);
  auVar34 = loadVectorLeftIndexed(0x10,0x262004);
  auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  if ((double)(float)(dVar28 - 10.0) < dVar29) {
    dVar30 = (double)(((float)(dVar29 - dVar28) + 10.0) * 0.1);
    dVar28 = (double)fastfunc::FastDiffRots(uVar25,(double)*(float *)(uVar5 + 0x38));
    dVar26 = 1.0;
    dVar29 = dVar26;
    if ((dVar30 <= 1.0) && (dVar29 = dVar30, dVar30 < dVar27)) {
      dVar29 = dVar27;
    }
    if (dVar28 <= dVar27) {
      fVar1 = *param_2;
    }
    else {
      fVar1 = *param_2;
      dVar26 = -1.0;
    }
    *param_2 = (float)((double)(float)(dVar26 - (double)fVar1) * dVar29 + (double)fVar1);
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  auVar37 = vectorSubtractFloatingPoint(auVar33,auVar34);
  auVar35 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    auVar33 = vectorAddFloatingPoint(auVar32,auVar34);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar36,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = vectorSubtractFloatingPoint(auVar32,auVar31);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(0x14,0x262004);
      auVar35 = loadVectorLeftIndexed(0x34,uVar23);
      auVar32 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = vectorAddFloatingPoint(auVar33,auVar34);
      auVar31 = loadVectorLeftIndexed(0x18,0x262004);
      auVar36 = loadVectorRightIndexed(0x44,uVar23);
      auVar38 = loadVectorLeftIndexed(0x20,0x262004);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar39);
      auVar31 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x24,0x262004);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = vectorAddFloatingPoint
                          (auVar35 | auVar36,
                           auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar34,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar37);
      auVar31 = auVar33;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = auVar39;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar31 = ZEXT416(0);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        }
      }
      auVar34 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanFloatingPoint(auVar35,auVar33);
      auVar34 = auVar33;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar34 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        auVar34 = auVar32;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar32 = ZEXT416(0);
          auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        }
      }
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = ZEXT416(0xffffffff);
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = loadVectorLeftIndexed(lVar13,param_3);
      auVar32 = vectorSubtractFloatingPoint(auVar33,auVar36);
      auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar33);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar36);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
      *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
      DAT_0096b2ef = DAT_0096b2ef | 2;
    }
  }
  else {
    auVar32 = vectorSubtractFloatingPoint(auVar31,auVar33);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x14,0x262004);
    auVar35 = loadVectorLeftIndexed(0x34,uVar23);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = vectorAddFloatingPoint(auVar32,auVar34);
    auVar36 = loadVectorRightIndexed(0x44,uVar23);
    auVar37 = loadVectorLeftIndexed(0x20,0x262004);
    auVar34 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar33);
    auVar31 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = loadVectorLeftIndexed(0x18,0x262004);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar36 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar35 | auVar36);
    auVar31 = ZEXT416(0xffffffff);
    auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar31 = loadVectorLeftIndexed(0x24,0x262004);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar36,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar35);
    auVar31 = auVar33;
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar31 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar34;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      }
    }
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar33 = auVar35;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar32 = ZEXT416(0);
        auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      }
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar32 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = loadVectorLeftIndexed(lVar13,param_3);
    auVar33 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar34 = loadVectorLeftIndexed(0x1c,0x262004);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
    auVar31 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar35);
    auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar35);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
    *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  return;
}



//==== 00262730  ns=mobyupd::update1379  size=0x1ac8
// sig: undefined M1379_UpdateFlight(void)
// callers(1): 00264238 mobyupd::update1379::UpdateMoby_1379_JetFighterFleet
// callees(18): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00059e20 collproc::CollSphere; 000668d0 draw::UpdateViewContext; 0006d720 RegisterFuncForMoby; 000fe610 mobyutil::MB_SphericalToVector; 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002619e0 mobyupd::update1379::M1379_UpdateGunsMissiles; 00261ce8 mobyupd::update1379::M1379_UpdateMissiles; 00262030 mobyupd::update1379::M1379_00262030; 00500608 fastfunc::FastVecNormalize; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 0079c350: '@&ff=' (raw)

void mobyupd::update1379::M1379_UpdateFlight(MobyInstance *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  MOBY_OCLASSES MVar14;
  f32 fVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar18;
  Cuboid *pCVar19;
  float fVar20;
  float fVar21;
  CONTROLLER_INPUT CVar22;
  MobyInstance *pMVar23;
  ulonglong uVar24;
  int iVar27;
  longlong lVar25;
  longlong lVar26;
  int iVar30;
  ulonglong uVar28;
  float *pfVar31;
  longlong lVar29;
  longlong lVar32;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  float fVar52;
  
  uVar24 = ZEXT48(&stack0x00000000);
  lVar26 = uVar24 - 0x300;
  puVar18 = (ulonglong *)lVar26;
  *puVar18 = uVar24;
  puVar18[0x62] = in_LR;
  puVar18[0x54] = in_f20;
  puVar18[0x55] = in_f21;
  puVar18[0x56] = in_f22;
  puVar18[0x57] = in_f23;
  puVar18[0x58] = in_f24;
  puVar18[0x59] = in_f25;
  puVar18[0x5a] = in_f26;
  puVar18[0x5b] = in_f27;
  puVar18[0x5c] = in_f28;
  puVar18[0x5d] = in_f29;
  puVar18[0x5e] = in_f30;
  puVar18[0x5f] = in_f31;
  puVar18[0x53] = unaff_r31;
  puVar18[0x52] = unaff_r30;
  dVar43 = 0.0;
  *(undefined4 *)(puVar18 + 0x18) = 0;
  *(undefined4 *)((int)puVar18 + 0xc4) = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((int)puVar18 + 0xcc) = 0;
  uVar42 = 0x4020000000000000;
  cVar2 = param_1->setByGroup;
  fVar52 = mobyutil::g_FrameTime * 8.0 * DAT_0079c3b0;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  puVar18[0x51] = unaff_r29;
  puVar18[0x50] = unaff_r28;
  puVar18[0x4f] = unaff_r27;
  puVar18[0x4e] = unaff_r26;
  puVar18[0x4d] = unaff_r25;
  puVar18[0x4c] = unaff_r24;
  *(float *)(puVar18 + 0x19) = fVar52;
  fVar4 = DAT_0079c3b0;
  fVar52 = DAT_0079c308;
  if (cVar2 == '\0') {
    if (DAT_0079c310 < *(short *)(param_2 + 0x68)) {
      if ((pad_Repeat & 0x40) == 0) {
        if ((DAT_00964af8 & 0x40) != 0) {
          iVar27 = *(int *)(param_2 + 0x10c);
          if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == param_1)) &&
             (sound::g_SoundChannels[iVar27].state != '\0')) {
            sound::sound_Kill(iVar27);
          }
          *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
        }
      }
      else {
        iVar27 = *(int *)(param_2 + 0x10c);
        if (((iVar27 != -1) && (sound::g_SoundChannels[iVar27].pMoby == param_1)) &&
           (sound::g_SoundChannels[iVar27].state != '\0')) {
          sound::sound_Kill(iVar27);
        }
        *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
        iVar27 = sound::PlayMobySound(1,4,param_1);
        *(int *)(param_2 + 0x10c) = iVar27;
      }
      if ((pad_DownButtons & 0x40) == 0) {
        fVar52 = *(float *)(param_2 + 100);
        if (DAT_0079c314 * DAT_0079c3b0 - DAT_0079c30c * DAT_0079c3b0 <= fVar52) {
          fVar4 = DAT_0079c314 * DAT_0079c3b0;
          if (fVar4 < fVar52) {
            fVar4 = (DAT_0079c314 * DAT_0079c3b0 - fVar52) * DAT_0079c320 + fVar52;
          }
        }
        else {
          fVar4 = DAT_0079c30c * DAT_0079c3b0 + fVar52;
        }
        *(float *)(param_2 + 100) = fVar4;
      }
      else {
        fVar52 = DAT_0079c31c * DAT_0079c3b0 + *(float *)(param_2 + 100);
        *(float *)(param_2 + 100) = fVar52;
        if (DAT_0079c318 * DAT_0079c3b0 < fVar52) {
          *(float *)(param_2 + 100) = DAT_0079c318 * DAT_0079c3b0;
        }
      }
    }
    else {
      *(short *)(param_2 + 0x68) = *(short *)(param_2 + 0x68) + 1;
      *(float *)(param_2 + 100) = fVar52 * fVar4 + *(float *)(param_2 + 100);
    }
  }
  else {
    *(undefined4 *)(param_2 + 100) = 0x38d1b717;
  }
  fVar5 = DAT_0096ba04;
  fVar6 = hero::g_heroPadStick;
  fVar4 = DAT_0079c3d4;
  fVar52 = DAT_0079c3c4;
  if (DAT_0079c324 < *(short *)(param_2 + 0x68)) {
    CVar22 = g_downButtons & L3;
    *(float *)(puVar18 + 0x2a) = hero::g_heroPadStick;
    *(float *)((int)puVar18 + 0x154) = fVar5;
    fVar9 = DAT_0079c3d8;
    fVar8 = DAT_0079c3c8;
    fVar7 = DAT_0079c33c;
    if (CVar22 != 0) {
      fVar5 = fVar5 / DAT_0079c334;
      fVar52 = DAT_0079c340 * (fVar6 / DAT_0079c338);
      *(float *)(puVar18 + 0x2a) = fVar6 / DAT_0079c338;
      *(float *)(puVar18 + 0x2a) = fVar52;
      *(float *)((int)puVar18 + 0x154) = fVar5;
      *(float *)((int)puVar18 + 0x154) = fVar7 * fVar5;
      fVar4 = fVar9;
      fVar52 = fVar8;
    }
    dVar50 = (double)fVar52;
    dVar48 = (double)fVar4;
    M1379_00262030(param_1,uVar24 - 0x1b0,uVar24 - 0x1ac);
    mobyutil::AccelDelt(*(float *)(puVar18 + 0x2a),DAT_0079c3bc,DAT_0079c3c0,(float)dVar50,
                        (float *)(param_2 + 0x6c),0x7a0000,(float *)(param_2 + 0x90));
    mobyutil::AccelDelt(*(float *)((int)puVar18 + 0x154),DAT_0079c3cc,DAT_0079c3d0,(float)dVar48,
                        (float *)(param_2 + 0x70),0x7a0000,(float *)(param_2 + 0x94));
    mobyutil::AccelDeltAng
              ((double)(*(float *)(param_2 + 0x6c) * DAT_0079c39c),(double)DAT_0079c3dc,
               (double)DAT_0079c3e0,(double)DAT_0079c3e4,param_2 + 0x30,&DAT_007a0000,param_2 + 0x98
              );
    dVar48 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(param_2 + 0x34),
                                (double)(*(float *)(param_2 + 0x70) * DAT_0079c334));
    *(float *)(param_2 + 0x34) = (float)dVar48;
    dVar48 = (double)fastfunc::FastDiffRots
                               ((double)*(float *)(param_2 + 0x38),
                                (double)(*(float *)(param_2 + 0x6c) * DAT_0079c338));
    *(float *)(param_2 + 0x38) = (float)dVar48;
    uVar16 = (int)*(uint *)(param_2 + 0x34) >> 0x1f;
    fVar15 = (param_1->rotation).y;
    uVar17 = (int)fVar15 >> 0x1f;
    iVar30 = (uVar16 >> 1 ^ *(uint *)(param_2 + 0x34)) - uVar16;
    iVar27 = (uVar17 >> 1 ^ (uint)fVar15) - uVar17;
    if (iVar30 < 0x3fb2b8c3) {
      if (iVar30 < -0x3fb2b8c2) {
        *(undefined4 *)(param_2 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x34) = 0x3fb2b8c2;
    }
    if (iVar27 < 0x3fb2b8c3) {
      if (iVar27 < -0x3fb2b8c2) {
        (param_1->rotation).y = -1.3962634;
      }
    }
    else {
      (param_1->rotation).y = 1.3962634;
    }
  }
  fVar52 = 310.0;
  fVar4 = 500.0;
  fVar5 = DAT_0079c678;
  fVar6 = DAT_0079c674;
  fVar7 = DAT_0079c670;
  if (*(int *)(param_2 + 0x110) != -1) {
    pCVar19 = Cuboids + *(int *)(param_2 + 0x110);
    fVar52 = (pCVar19->matrix).v2.y;
    fVar6 = (pCVar19->matrix).v0.y + (pCVar19->matrix).v1.y;
    fVar4 = (pCVar19->matrix).v2.x;
    fVar7 = (pCVar19->matrix).v0.x + (pCVar19->matrix).v1.x;
    fVar5 = (pCVar19->matrix).v2.z;
    fVar8 = (pCVar19->matrix).v0.z + (pCVar19->matrix).v1.z;
    fVar52 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar52 * fVar52);
    fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar5 = (pCVar19->pos).z;
    fVar6 = (pCVar19->pos).y;
    fVar7 = (pCVar19->pos).x;
  }
  dVar51 = (double)fVar52;
  dVar49 = (double)fVar4;
  dVar47 = (double)fVar7;
  dVar46 = (double)fVar6;
  dVar45 = (double)fVar5;
  dVar34 = (double)(param_1->pos).x;
  dVar37 = (double)(param_1->pos).y;
  dVar38 = (double)DAT_0079c670;
  dVar40 = ABS((double)(float)(dVar47 - dVar34));
  dVar39 = ABS((double)(float)(dVar46 - dVar37));
  *(float *)(puVar18 + 0x31) = (float)(dVar47 - dVar34);
  dVar48 = (double)DAT_0079c674;
  *(float *)((int)puVar18 + 0x18c) = (float)(dVar46 - dVar37);
  *(float *)(puVar18 + 0x32) = (float)(dVar40 - dVar39);
  dVar50 = (double)*(float *)(param_2 + 0x38);
  dVar44 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x31) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x32) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x18c) >> 0x1d) & 4;
  dVar38 = (double)SQRT((float)(dVar34 - dVar38) * (float)(dVar34 - dVar38) +
                        (float)(dVar37 - dVar48) * (float)(dVar37 - dVar48));
  dVar48 = ABS((double)*(float *)(puVar18 + 0x31));
  if ((double)*(float *)(puVar18 + 0x32) - dVar43 < 0.0) {
    dVar48 = dVar39;
  }
  fVar52 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar39 = ABS((double)*(float *)((int)puVar18 + 0x18c));
  if ((double)*(float *)(puVar18 + 0x32) - dVar43 < 0.0) {
    dVar39 = dVar40;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = dVar43;
  if (dVar43 < dVar48) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 0xcc;
    lVar32 = uVar24 - 0xbc;
    lVar33 = 2;
    fVar5 = (float)(dVar39 - dVar48) / (float)(dVar39 + dVar48);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x48) = fVar5;
    *(float *)(puVar18 + 0x47) = fVar5;
    *(float *)((int)puVar18 + 0x23c) = fVar5;
    *(float *)((int)puVar18 + 0x234) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x47) = *(float *)(puVar18 + 0x47) * fVar6;
    *(float *)((int)puVar18 + 0x23c) = *(float *)((int)puVar18 + 0x23c) * fVar5;
    *(float *)(puVar18 + 0x48) = *(float *)(puVar18 + 0x48) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x234) = *(float *)((int)lVar25 + 0x224) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0xcc;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x234) = *(float *)((int)lVar25 + 0x234) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar48 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar27 + 0x234)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar40 = (double)((float)(dVar48 + 0.7853981852531433) * fVar52 + fVar4);
  }
  dVar48 = 50.0;
  if (50.0 < dVar38) {
    dVar34 = (double)((float)(dVar38 - 50.0) / (float)(dVar49 - 50.0));
    if (dVar34 - dVar43 < 0.0) {
      dVar34 = dVar43;
    }
    if (1.0 - dVar34 < 0.0) {
      dVar34 = 1.0;
    }
    fVar52 = (float)(dVar34 * dVar34) * (float)(dVar34 * dVar34);
    fVar52 = fVar52 * fVar52;
    dVar37 = (double)(fVar52 * fVar52);
    dVar34 = (double)fastfunc::FastDiffRots(dVar40,dVar50);
    dVar50 = (double)fastfunc::FastWrapRot((float)dVar50,(float)(dVar37 * dVar34));
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  *(float *)(param_2 + 0x38) = (float)dVar50;
  dVar41 = ABS((double)(float)(dVar46 - dVar37));
  dVar40 = ABS((double)(float)(dVar47 - dVar34));
  *(float *)((int)puVar18 + 0x17c) = (float)(dVar47 - dVar34);
  *(float *)(puVar18 + 0x30) = (float)(dVar46 - dVar37);
  dVar39 = (double)(param_1->rotation).z;
  *(float *)((int)puVar18 + 0x184) = (float)(dVar40 - dVar41);
  uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x17c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x184) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x30) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar18 + 0x17c));
  if ((double)*(float *)((int)puVar18 + 0x184) - dVar43 < 0.0) {
    dVar50 = dVar41;
  }
  fVar52 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar41 = ABS((double)*(float *)(puVar18 + 0x30));
  if ((double)*(float *)((int)puVar18 + 0x184) - dVar43 < 0.0) {
    dVar41 = dVar40;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar32 = uVar24 - 0xdc;
    lVar29 = uVar24 - 0xec;
    lVar33 = 2;
    fVar5 = (float)(dVar41 - dVar50) / (float)(dVar41 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x44) = fVar5;
    *(float *)(puVar18 + 0x43) = fVar5;
    *(float *)((int)puVar18 + 0x21c) = fVar5;
    *(float *)((int)puVar18 + 0x214) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x43) = *(float *)(puVar18 + 0x43) * fVar6;
    *(float *)((int)puVar18 + 0x21c) = *(float *)((int)puVar18 + 0x21c) * fVar5;
    *(float *)(puVar18 + 0x44) = *(float *)(puVar18 + 0x44) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x214) = *(float *)((int)lVar25 + 0x204) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0xec;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x214) = *(float *)((int)lVar25 + 0x214) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      iVar30 = (int)lVar32;
      lVar25 = lVar25 + 0x10;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x214)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar40 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
  }
  if (dVar48 < dVar38) {
    dVar50 = (double)((float)(dVar38 - dVar48) / (float)(dVar49 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)fastfunc::FastDiffRots(dVar40,dVar39);
    dVar39 = (double)fastfunc::FastWrapRot((float)dVar39,(float)(dVar34 * dVar50));
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  dVar40 = (double)(param_1->pos).z;
  (param_1->rotation).z = (float)dVar39;
  dVar38 = (double)*(float *)(param_2 + 0x34);
  *(float *)((int)puVar18 + 0x174) = (float)(dVar45 - dVar40);
  fVar52 = SQRT((float)(dVar34 - dVar47) * (float)(dVar34 - dVar47) +
                (float)(dVar37 - dVar46) * (float)(dVar37 - dVar46));
  dVar39 = ABS((double)(float)(dVar45 - dVar40));
  dVar49 = ABS((double)fVar52);
  *(float *)(puVar18 + 0x2e) = fVar52;
  *(float *)(puVar18 + 0x2f) = (float)(dVar49 - dVar39);
  uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x2e) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x2f) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x174) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)(puVar18 + 0x2e));
  if ((double)*(float *)(puVar18 + 0x2f) - dVar43 < 0.0) {
    dVar50 = dVar39;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar52 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar41 = ABS((double)*(float *)((int)puVar18 + 0x174));
  if ((double)*(float *)(puVar18 + 0x2f) - dVar43 < 0.0) {
    dVar41 = dVar49;
  }
  dVar49 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 0x10c;
    lVar32 = uVar24 - 0xfc;
    lVar33 = 2;
    fVar5 = (float)(dVar41 - dVar50) / (float)(dVar41 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x40) = fVar5;
    *(float *)(puVar18 + 0x3f) = fVar5;
    *(float *)((int)puVar18 + 0x1fc) = fVar5;
    *(float *)((int)puVar18 + 500) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x3f) = *(float *)(puVar18 + 0x3f) * fVar6;
    *(float *)((int)puVar18 + 0x1fc) = *(float *)((int)puVar18 + 0x1fc) * fVar5;
    *(float *)(puVar18 + 0x40) = *(float *)(puVar18 + 0x40) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 500) = *(float *)((int)lVar25 + 0x1e4) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0x10c;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 500) = *(float *)((int)lVar25 + 500) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 500)) + *(float *)(iVar30 + 4)
                        + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar49 = (double)((float)(dVar50 + dVar44) * fVar4 + fVar52);
  }
  if (dVar48 < dVar39) {
    dVar50 = (double)((float)(dVar39 - dVar48) / (float)(dVar51 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)fastfunc::FastDiffRots(-dVar49,dVar38);
    dVar38 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar34 * dVar50));
    dVar40 = (double)(param_1->pos).z;
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  fVar52 = SQRT((float)(dVar34 - dVar47) * (float)(dVar34 - dVar47) +
                (float)(dVar37 - dVar46) * (float)(dVar37 - dVar46));
  *(float *)(puVar18 + 0x2d) = (float)(dVar45 - dVar40);
  *(float *)(param_2 + 0x34) = (float)dVar38;
  dVar37 = (double)(param_1->rotation).y;
  dVar34 = ABS((double)(float)(dVar45 - dVar40));
  dVar39 = ABS((double)fVar52);
  *(float *)((int)puVar18 + 0x164) = fVar52;
  *(float *)((int)puVar18 + 0x16c) = (float)(dVar39 - dVar34);
  uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x164) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x16c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x2d) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar18 + 0x164));
  if ((double)*(float *)((int)puVar18 + 0x16c) - dVar43 < 0.0) {
    dVar50 = dVar34;
  }
  fVar52 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar40 = ABS((double)*(float *)(puVar18 + 0x2d));
  if ((double)*(float *)((int)puVar18 + 0x16c) - dVar43 < 0.0) {
    dVar40 = dVar39;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 300;
    lVar32 = uVar24 - 0x11c;
    lVar33 = 2;
    fVar5 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x3c) = fVar5;
    *(float *)(puVar18 + 0x3b) = fVar5;
    *(float *)((int)puVar18 + 0x1dc) = fVar5;
    *(float *)((int)puVar18 + 0x1d4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x3b) = *(float *)(puVar18 + 0x3b) * fVar6;
    *(float *)((int)puVar18 + 0x1dc) = *(float *)((int)puVar18 + 0x1dc) * fVar5;
    *(float *)(puVar18 + 0x3c) = *(float *)(puVar18 + 0x3c) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x1d4) = *(float *)((int)lVar25 + 0x1c4) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 300;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x1d4) = *(float *)((int)lVar25 + 0x1d4) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1d4)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar39 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
  }
  if (dVar48 < dVar34) {
    dVar50 = (double)((float)(dVar34 - dVar48) / (float)(dVar51 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)fastfunc::FastDiffRots(-dVar39,dVar37);
    dVar37 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar34 * dVar50));
    dVar38 = (double)*(float *)(param_2 + 0x34);
  }
  (param_1->rotation).y = (float)dVar37;
  mobyutil::MB_SphericalToVector
            (*(float *)(param_2 + 100),*(float *)(param_2 + 0x38),(float)-dVar38,
             (float *)(puVar18 + 0x1a));
  fVar52 = *(float *)((int)puVar18 + 0xd4);
  fVar4 = *(float *)(puVar18 + 0x1a);
  fVar5 = *(float *)(puVar18 + 0x1b);
  fVar6 = *(float *)(param_2 + 100);
  fVar7 = *(float *)(param_2 + 0x70);
  fVar8 = *(float *)(param_2 + 0x6c);
  fVar9 = (param_1->pos).x;
  fVar10 = (param_1->pos).y;
  fVar11 = (param_1->pos).z;
  cVar2 = param_1->setByGroup;
  bVar3 = *(byte *)(param_2 + 0x60);
  fVar20 = fVar5 * fVar5 + fVar4 * fVar4 + fVar52 * fVar52;
  if ((double)SQRT(fVar20) == dVar43) {
    uVar12 = *(undefined4 *)((int)puVar18 + 0xdc);
    dVar50 = dVar43;
    dVar34 = dVar43;
    dVar37 = dVar43;
  }
  else {
    fVar21 = 1.0 / SQRT(fVar20);
    uVar12 = *(undefined4 *)((int)puVar18 + 0xdc);
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    dVar37 = (double)(fVar4 * fVar21);
    dVar34 = (double)(fVar52 * fVar21);
    dVar50 = (double)(fVar5 * fVar21);
  }
  *(float *)(param_2 + 0x10) = (float)dVar37;
  *(float *)(param_2 + 0x14) = (float)dVar34;
  *(float *)(param_2 + 0x18) = (float)dVar50;
  *(undefined4 *)(param_2 + 0x1c) = uVar12;
  if (cVar2 == '\0') {
    (param_1->pos).x = fVar9 + fVar4;
    (param_1->pos).y = fVar10 + fVar52;
    (param_1->pos).z = fVar11 + fVar5;
  }
  dVar50 = (double)(fVar6 - DAT_0079c314);
  fVar52 = DAT_0079c318 - DAT_0079c314;
  *(undefined4 *)((int)puVar18 + 0x10c) = 0;
  *(undefined4 *)((int)puVar18 + 0x114) = 0;
  *(undefined4 *)((int)puVar18 + 0x11c) = 0;
  if (dVar50 - dVar43 < 0.0) {
    dVar50 = dVar43;
  }
  fVar52 = (float)(dVar50 / (double)fVar52);
  dVar38 = (double)fVar52;
  *(float *)(param_2 + 0xc4) = fVar52;
  fVar9 = DAT_0079c424;
  fVar52 = fVar8 * DAT_0079c3a0 * DAT_0079c3ac;
  fVar4 = DAT_0079c350 * DAT_0079c3ac;
  fVar5 = (fVar7 * DAT_0079c44c + DAT_0079c348) * DAT_0079c3ac;
  fVar6 = -(float)((double)DAT_0079c450 * dVar38 - -(double)(fVar7 * DAT_0079c448 - DAT_0079c344)) *
          DAT_0079c3ac;
  *(float *)(puVar18 + 0x22) = DAT_0079c34c * DAT_0079c3ac;
  *(float *)((int)puVar18 + 0x104) = fVar52;
  *(float *)(puVar18 + 0x21) = fVar5;
  *(float *)(puVar18 + 0x23) = fVar4;
  *(float *)(puVar18 + 0x20) = fVar6;
  mobyutil::AccelDelt(*(float *)(puVar18 + (uint)bVar3 * 2 + 0x20),fVar9,DAT_0079c428,DAT_0079c42c,
                      (float *)(param_2 + 0xb4),0x7a0000,(float *)(param_2 + 200));
  mobyutil::AccelDelt(*(float *)((int)puVar18 + (uint)*(byte *)(param_2 + 0x60) * 0x10 + 0x104),
                      DAT_0079c430,DAT_0079c434,DAT_0079c438,(float *)(param_2 + 0xb8),0x7a0000,
                      (float *)(param_2 + 0xcc));
  fVar52 = mobyutil::AccelDelt(*(float *)(puVar18 + (uint)*(byte *)(param_2 + 0x60) * 2 + 0x21),
                               DAT_0079c43c,DAT_0079c440,DAT_0079c444,(float *)(param_2 + 0xbc),
                               0x7a0000,(float *)(param_2 + 0xd0));
  dVar37 = (double)*(float *)(param_2 + 0xb4);
  dVar34 = (double)*(float *)(param_2 + 0xb8);
  dVar50 = (double)*(float *)(param_2 + 0xbc);
  fastfunc::FastEulerToMtx((double)fVar52,uVar24 - 0x1e0,param_2 + 0x30);
  fVar52 = (param_1->pos).x;
  fVar4 = (param_1->pos).y;
  fVar5 = (param_1->pos).z;
  *(f32 *)((int)puVar18 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar18 + 0x1e) =
       fVar52 + (float)((double)*(float *)(puVar18 + 0x28) * dVar50 +
                       (double)(float)((double)*(float *)(puVar18 + 0x24) * dVar37 +
                                      (double)(float)((double)*(float *)(puVar18 + 0x26) * dVar34)))
  ;
  *(float *)((int)puVar18 + 0xf4) =
       fVar4 + (float)((double)*(float *)((int)puVar18 + 0x144) * dVar50 +
                      (double)(float)((double)*(float *)((int)puVar18 + 0x124) * dVar37 +
                                     (double)(float)((double)*(float *)((int)puVar18 + 0x134) *
                                                    dVar34)));
  *(float *)(puVar18 + 0x1f) =
       fVar5 + (float)((double)*(float *)(puVar18 + 0x29) * dVar50 +
                      (double)(float)((double)*(float *)(puVar18 + 0x25) * dVar37 +
                                     (double)(float)((double)*(float *)(puVar18 + 0x27) * dVar34)));
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar18 + 0x1e));
  uVar35 = fastfunc::FastWrapRot
                     (*(float *)(param_2 + 0x30) * DAT_0079c358,
                      *(float *)(param_2 + 0x6c) * DAT_0079c354);
  uVar36 = fastfunc::FastWrapRot(*(float *)(param_2 + 0x34),DAT_0079c35c);
  uVar36 = fastfunc::FastDiffRots(uVar36,(double)(*(float *)(param_2 + 0x70) * DAT_0079c334));
  dVar50 = (double)*(float *)(param_2 + 0x38);
  mobyutil::AccelDeltAng
            (uVar35,(double)DAT_0079c400,(double)DAT_0079c404,(double)DAT_0079c408,param_2 + 0x20,
             &DAT_007a0000,param_2 + 0xa0);
  mobyutil::AccelDeltAng
            (uVar36,(double)DAT_0079c40c,(double)DAT_0079c410,(double)DAT_0079c414,param_2 + 0x24,
             &DAT_007a0000,param_2 + 0xa4);
  mobyutil::AccelDeltAng
            (dVar50,(double)DAT_0079c418,(double)DAT_0079c41c,(double)DAT_0079c420,param_2 + 0x28,
             &DAT_007a0000,param_2 + 0xa8);
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(puVar18 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  uVar13 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(puVar18 + 0x1d) = uVar12;
  *(undefined4 *)((int)puVar18 + 0xe4) = uVar13;
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar18 + 0x1c));
  mobyutil::AccelDelt((float)((double)(float)((double)DAT_0079c458 - (double)DAT_0079c454) * dVar38
                             + (double)DAT_0079c454),DAT_0079c45c,DAT_0079c460,DAT_0079c464,
                      (float *)(param_2 + 0xb0),0x7a0000,(float *)(param_2 + 0xc0));
  fVar52 = *(float *)(param_2 + 0xb0) * 0.5;
  fVar5 = fVar52 + 1.5707963;
  fVar4 = 3.1415925 - fVar52;
  if (fVar52 - (3.1415925 - fVar52) < 0.0) {
    fVar4 = fVar52;
  }
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar52;
  if ((-3.1415925 - fVar52) - fVar4 < 0.0) {
    fVar7 = fVar4;
  }
  fVar4 = fVar7 * fVar7;
  fVar52 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar52 = fVar6;
  }
  fVar5 = fVar52 * fVar52;
  fVar6 = fVar4 * fVar4 * fVar7;
  fVar8 = fVar4 * fVar6;
  fVar9 = fVar5 * fVar5 * fVar52;
  fVar10 = fVar5 * fVar9;
  ViewContext.xratio =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7) /
       (fVar5 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar52 * -0.16666657 + fVar52);
  draw::UpdateViewContext();
  dVar50 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0x30),*(float *)(param_2 + 0x6c) * DAT_0079c470);
  (param_1->rotation).x = (float)dVar50;
  dVar50 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0x34),
                              -(*(float *)(param_2 + 0x70) * DAT_0079c474));
  (param_1->rotation).y = (float)dVar50;
  dVar50 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0x38),
                              -(*(float *)(param_2 + 0x6c) * DAT_00fa3f2c));
  (param_1->rotation).z = (float)dVar50;
  iVar27 = collproc::CollSphere(0x3ff3333340000000,&param_1->pos);
  if ((iVar27 != 0) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((MVar14 = (CollOutput.pMoby)->oClass, MVar14 != 0x192 && MVar14 != RATCHET &&
        (MVar14 != AMMOCRATE_04C2)) &&
       ((MVar14 != 0x4c3 && ((MVar14 != ROCKET_0052 && (MVar14 != MINE_0053)))))))))) {
    (param_1->pos).x = CollOutput.push.x;
    (param_1->pos).y = CollOutput.push.y;
    (param_1->pos).z = CollOutput.push.z;
    (param_1->pos).w = CollOutput.push.w;
    fastfunc::FastVecNormalize(uVar24 - 0x230,uVar24 - 0x230,0xa10980);
    dVar37 = ABS((double)*(float *)(puVar18 + 0x1a));
    dVar50 = ABS((double)*(float *)((int)puVar18 + 0xd4));
    dVar38 = (double)*(float *)(param_2 + 0x38);
    *(float *)(puVar18 + 0x2c) = (float)(dVar37 - dVar50);
    uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar18 + 0x2c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar18 + 0xd4) >> 0x1d) & 4;
    dVar34 = dVar37;
    if ((double)*(float *)(puVar18 + 0x2c) - dVar43 < 0.0) {
      dVar34 = dVar50;
    }
    fVar52 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    if ((double)*(float *)(puVar18 + 0x2c) - dVar43 < 0.0) {
      dVar50 = dVar37;
    }
    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = dVar43;
    if (dVar43 < dVar34) {
      lVar25 = uVar24 - 0x2f0;
      lVar32 = uVar24 - 0x13c;
      lVar29 = uVar24 - 0x14c;
      lVar33 = 2;
      fVar5 = (float)(dVar50 - dVar34) / (float)(dVar50 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar18 + 0x38) = fVar5;
      *(float *)(puVar18 + 0x37) = fVar5;
      *(float *)((int)puVar18 + 0x1bc) = fVar5;
      *(float *)((int)puVar18 + 0x1b4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar18 + 0x37) = *(float *)(puVar18 + 0x37) * fVar6;
      *(float *)((int)puVar18 + 0x1bc) = *(float *)((int)puVar18 + 0x1bc) * fVar5;
      *(float *)(puVar18 + 0x38) = *(float *)(puVar18 + 0x38) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x1b4) = *(float *)((int)lVar25 + 0x1a4) * fVar5 * fVar5;
        iVar27 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
        lVar32 = lVar32 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar32 = uVar24 - 0x14c;
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar29 = lVar32;
      do {
        fVar5 = *pfVar31;
        fVar6 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar25 + 0x1b4) = *(float *)((int)lVar25 + 0x1b4) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar29 = 2;
      lVar25 = lVar26;
      dVar50 = dVar43;
      do {
        iVar27 = (int)lVar25;
        iVar30 = (int)lVar32;
        lVar25 = lVar25 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1b4)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar37 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
    }
    dVar50 = (double)fastfunc::FastDiffRots(dVar37,dVar38);
    dVar50 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar50 * (double)DAT_0079c328));
    fVar52 = *(float *)((int)puVar18 + 0xd4);
    fVar4 = *(float *)(puVar18 + 0x1a);
    *(float *)(param_2 + 0x38) = (float)dVar50;
    dVar38 = (double)*(float *)(param_2 + 0x34);
    dVar50 = ABS((double)*(float *)(puVar18 + 0x1b));
    fVar52 = SQRT(fVar4 * fVar4 + fVar52 * fVar52);
    dVar37 = ABS((double)fVar52);
    *(float *)(puVar18 + 0x2b) = fVar52;
    *(float *)((int)puVar18 + 0x15c) = (float)(dVar37 - dVar50);
    uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x2b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar18 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar18 + 0x1b) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar18 + 0x2b));
    if ((double)*(float *)((int)puVar18 + 0x15c) - dVar43 < 0.0) {
      dVar34 = dVar50;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar52 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar18 + 0x15c) - dVar43 < 0.0) {
      dVar50 = dVar37;
    }
    dVar37 = dVar43;
    if (dVar43 < dVar34) {
      lVar25 = uVar24 - 0x2f0;
      lVar29 = uVar24 - 0x16c;
      lVar32 = uVar24 - 0x15c;
      lVar33 = 2;
      fVar5 = (float)(dVar50 - dVar34) / (float)(dVar50 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar18 + 0x34) = fVar5;
      *(float *)(puVar18 + 0x33) = fVar5;
      *(float *)((int)puVar18 + 0x19c) = fVar5;
      *(float *)((int)puVar18 + 0x194) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar18 + 0x33) = *(float *)(puVar18 + 0x33) * fVar6;
      *(float *)((int)puVar18 + 0x19c) = *(float *)((int)puVar18 + 0x19c) * fVar5;
      *(float *)(puVar18 + 0x34) = *(float *)(puVar18 + 0x34) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x194) = *(float *)((int)lVar25 + 0x184) * fVar5 * fVar5;
        iVar27 = (int)lVar29;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
        lVar32 = lVar32 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar32 = uVar24 - 0x16c;
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar29 = lVar32;
      do {
        fVar5 = *pfVar31;
        fVar6 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar25 + 0x194) = *(float *)((int)lVar25 + 0x194) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      dVar50 = dVar43;
      do {
        iVar27 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar30 = (int)lVar32;
        lVar32 = lVar32 + 0x10;
        dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x194)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar37 = (double)((float)(dVar50 + dVar44) * fVar4 + fVar52);
    }
    dVar50 = (double)fastfunc::FastDiffRots(-dVar37,dVar38);
    dVar50 = (double)fastfunc::FastWrapRot((float)dVar38,(float)(dVar50 * (double)DAT_0079c32c));
    *(float *)(param_2 + 0x34) = (float)dVar50;
    pMVar23 = CollOutput.pMoby;
    bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
    *(float *)(param_2 + 100) = *(float *)(param_2 + 100) * DAT_0079c36c;
    if ((bVar1) || (pMVar23->oClass == DREKS_FLEET_TURRET)) {
      DAT_0096b2dc = 0.0;
      puVar18[0x12] = 0xffffffffffffffff;
      puVar18[0x14] = 1;
      puVar18[0x15] = 1;
      puVar18[0x16] = 0xffffffffffffffff;
      puVar18[0x17] = 0;
      mobyutil::MB_genericExplosion
                (uVar42,0x4059000000000000,0x4030000000000000,uVar42,0x4022000000000000,
                 0x3ff0000000000000,dVar48,param_1,uVar24 - 0x240,0,0,&DAT_002626d0,0x1e,10,0x18);
      *(short *)(param_2 + 0x62) = (short)DAT_0079c488;
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
    }
    else if (*(int *)(param_2 + 0xdc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - DAT_0079c370;
      if ((double)DAT_0096b2dc < dVar43) {
        fastfunc::FastVecNormalize(uVar24 - 0x240,uVar24 - 0x230,0xa10980);
        fVar52 = mobyutil::g_FrameTime;
        fVar4 = *(float *)((int)puVar18 + 0xc4);
        fVar5 = *(float *)(puVar18 + 0x18);
        fVar6 = *(float *)(puVar18 + 0x19);
        dVar34 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        puVar18[0x12] = 0xffffffffffffffff;
        puVar18[0x14] = 1;
        puVar18[0x15] = 1;
        puVar18[0x16] = 0xffffffffffffffff;
        puVar18[0x17] = 0;
        fVar52 = (float)((double)(fVar52 * 2.0) / dVar34);
        dVar50 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar50 = (double)(fVar5 * fVar52);
        }
        dVar37 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar37 = (double)(fVar4 * fVar52);
        }
        dVar38 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar38 = (double)(fVar6 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar50 = (double)(fVar5 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar37 = (double)(fVar4 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar38 = (double)(fVar6 * fVar52);
        }
        *(float *)(puVar18 + 0x18) = (float)dVar50;
        *(float *)((int)puVar18 + 0xc4) = (float)dVar37;
        *(float *)(puVar18 + 0x19) = (float)dVar38;
        mobyutil::MB_genericExplosion
                  (uVar42,0x4059000000000000,0x4030000000000000,uVar42,0x4022000000000000,
                   0x3ff0000000000000,dVar48,param_1,uVar24 - 0x240,0,&DAT_002626d0,1,0x1e,10,0x18);
        param_1->state = '\a';
      }
      *(undefined4 *)(param_2 + 0xdc) = DAT_0079c46c;
    }
  }
  RegisterFuncForMoby(&PTR_M1379_Hud_Draw_0070a1b8,param_1);
  M1379_UpdateMissiles(param_1,param_2);
  uVar42 = fastfunc::FastWrapRot
                     (*(float *)(param_2 + 0x28),-(*(float *)(param_2 + 0x6c) * 0.14285715));
  dVar43 = (double)fastfunc::FastWrapRot
                             (*(float *)(param_2 + 0x24),
                              *(float *)(param_2 + 0x70) * -0.14285715 - 0.1);
  M1379_UpdateGunsMissiles(uVar42,-dVar43,param_1,param_2);
  return;
}



//==== 00264238  ns=mobyupd::update1379  size=0x17d8
// sig: undefined UpdateMoby_1379_JetFighterFleet(MobyInstance * moby)
// callers(0): 
// callees(34): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b7d8 help::Help_Suspend; 0007b868 help::Help_Resume; 00083950 hero::HandleHeroDeath; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000f20f0 mobyutil::MB_BSphereGap; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fe610 mobyutil::MB_SphericalToVector; 0010434c mobyutil::MB_SetGroupActive; 00104430 mobyutil::MB_SetClassActive; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011afac mobyutil::MB_RequestHelpMessage; 0011b0b0 mobyutil::MB_ClearHelpMessage; 0011ccc8 music::music_SetTransition; 00151e70 respawn::SetSpawnPoint; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0025f3c8 mobyupd::update1379::M1379_0025f3c8; 00262730 mobyupd::update1379::M1379_UpdateFlight; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005cd098 libc::printf
// strings: 00655578: 'no final place for jet during victory, so use init pos\n' | 006555b0: 'no final place for hero during victory, so just fall\n'

/* Moby 1379 */

void mobyupd::update1379::UpdateMoby_1379_JetFighterFleet(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  MobyClass *pMVar8;
  f32 fVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar20;
  longlong lVar18;
  longlong lVar19;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
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
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1a0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar16;
  puVar12[0x36] = in_LR;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x30] = unaff_r31;
  puVar12[0x2f] = unaff_r30;
  puVar12[0x2e] = unaff_r29;
  puVar12[0x2d] = unaff_r28;
  puVar12[0x2c] = unaff_r27;
  puVar12[0x2b] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    out = (float *)moby->pVar;
    uVar26 = ZEXT48(out);
    fastfunc::FastDecTimerS32(uVar26 + 0xdc);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar20 = mobyutil::MB_damage(lVar17,0x30001,0), iVar20 != 0 && (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar20 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar20 + 0x2c)) - uVar10) <
          (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
               ((int)DAT_0096b2dc >> 0x1f))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar20 + 0x2c);
        if ((*(uint *)(iVar20 + 0x30) & 1) != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          GameCamera.offset0.amp = 1.0;
          auVar35 = loadVectorLeftIndexed(in_LR,0x2641f8);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,
                          0x9513c0);
          dVar33 = (double)(*(float *)(iVar20 + 0x2c) * DAT_0079c398);
          mobyutil::MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar12 + 0x18));
          fVar21 = *(float *)(iVar20 + 0x14);
          fVar3 = *(float *)(iVar20 + 0x10);
          fVar4 = *(float *)(iVar20 + 0x18);
          fVar5 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar21 * fVar21);
          if (mobyutil::g_FrameTime * 3.0 < fVar13) {
            fVar13 = (mobyutil::g_FrameTime * 3.0) / fVar13;
            fVar3 = fVar3 * fVar13;
            fVar21 = fVar21 * fVar13;
            fVar4 = fVar4 * fVar13;
            *(float *)(iVar20 + 0x10) = fVar3;
            *(float *)(iVar20 + 0x14) = fVar21;
            *(float *)(iVar20 + 0x18) = fVar4;
          }
          (moby->pos).x = fVar5 + fVar3;
          (moby->pos).y = fVar6 + fVar21;
          (moby->pos).z = fVar7 + fVar4;
          fastfunc::FastVecNormalize(uVar16 - 0xe0,uVar16 - 0xe0,iVar20 + 0x10);
          fVar4 = ABS(*(float *)(puVar12 + 0x18));
          fVar3 = ABS(*(float *)((int)puVar12 + 0xc4));
          dVar31 = (double)out[0xe];
          *(float *)(puVar12 + 0x1e) = fVar4 - fVar3;
          dVar30 = 0.0;
          uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
          fVar21 = fVar4;
          if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
            fVar21 = fVar3;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
            fVar3 = fVar4;
          }
          dVar28 = dVar30;
          if (0.0 < fVar21) {
            lVar18 = uVar16 - 400;
            lVar23 = uVar16 - 0x6c;
            lVar25 = uVar16 - 0x5c;
            lVar27 = 2;
            fVar21 = (fVar3 - fVar21) / (fVar3 + fVar21);
            fVar3 = fVar21 * fVar21;
            *(float *)(puVar12 + 0x28) = fVar21;
            *(float *)(puVar12 + 0x27) = fVar21;
            *(float *)((int)puVar12 + 0x13c) = fVar21;
            *(float *)((int)puVar12 + 0x134) = fVar21;
            fVar21 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar3;
            *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar21;
            *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar21 * fVar3;
            do {
              *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x124) * fVar21 * fVar21;
              iVar20 = (int)lVar23;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar21 * fVar21;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0x6c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar21 = *pfVar24;
              fVar3 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x134) * fVar21;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar23 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x134)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar5);
          }
          dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar31);
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((float)dVar31,
                                      (float)((double)(float)(dVar28 * (double)DAT_0079c328) *
                                             dVar33));
          out[0xe] = (float)dVar31;
          dVar32 = (double)out[0xd];
          dVar31 = ABS((double)*(float *)(puVar12 + 0x19));
          fVar21 = SQRT(*(float *)(puVar12 + 0x18) * *(float *)(puVar12 + 0x18) +
                        *(float *)((int)puVar12 + 0xc4) * *(float *)((int)puVar12 + 0xc4));
          dVar29 = ABS((double)fVar21);
          *(float *)(puVar12 + 0x1d) = fVar21;
          *(float *)((int)puVar12 + 0xec) = (float)(dVar29 - dVar31);
          uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
          fVar21 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar28 = ABS((double)*(float *)(puVar12 + 0x1d));
          if ((double)*(float *)((int)puVar12 + 0xec) - dVar30 < 0.0) {
            dVar28 = dVar31;
          }
          if ((double)*(float *)((int)puVar12 + 0xec) - dVar30 < 0.0) {
            dVar31 = dVar29;
          }
          fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (dVar30 < dVar28) {
            lVar18 = uVar16 - 400;
            lVar23 = uVar16 - 0x8c;
            lVar25 = uVar16 - 0x7c;
            lVar27 = 2;
            fVar4 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x24) = fVar4;
            *(float *)(puVar12 + 0x23) = fVar4;
            *(float *)((int)puVar12 + 0x11c) = fVar4;
            *(float *)((int)puVar12 + 0x114) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar5;
            *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar4;
            *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x104) * fVar4 * fVar4;
              iVar20 = (int)lVar23;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0x8c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar5 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x114) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar23 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              iVar14 = (int)lVar25;
              lVar18 = lVar18 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x114)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar21 + fVar3);
          }
          dVar30 = (double)fastfunc::FastDiffRots(dVar30,dVar32);
          dVar33 = (double)fastfunc::FastWrapRot
                                     ((float)dVar32,
                                      (float)((double)(float)(dVar30 * (double)DAT_0079c32c) *
                                             dVar33));
          out[0xd] = (float)dVar33;
        }
      }
      else {
        mobyutil::MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(uVar16 - 0xd0));
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        GameCamera.offset0.amp = 0.2;
        auVar35 = loadVectorLeftIndexed(0x14,0x2641f8);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,0x9513c0
                       );
        uVar34 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        auVar35 = loadVectorLeftIndexed(0x18,0x2641f8);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar35,0x62,uVar26);
        *(undefined2 *)((int)out + 0x62) = uVar11;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 1;
        puVar12[0x15] = 1;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar34,uVar34,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar17,uVar16 - 0xd0,0,0xffffffffffffffff,1
                   ,10,3,0x10);
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar35 = ZEXT416(0xffffffff);
      auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffc394,0x7a0000);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar36);
      auVar35 = loadVectorLeftIndexed(0x20,0x2641f8);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar35 = ZEXT416(0xffffffff);
      auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar44 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar39);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar39 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x30,0x2641f8);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar43,auVar41);
      auVar41 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar39);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar42);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar41);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1608
                                ,0x969ce0);
    }
    bVar2 = moby->state;
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          moby->state = '\x01';
          *(undefined1 *)(out + 0x18) = 0;
          moby->scale = moby->pClass->gScale;
          out[8] = out[0xc];
          out[9] = out[0xd];
          fVar4 = ABS(ViewContext.xratio);
          uVar10 = (uint)ViewContext.xratio >> 0x1d;
          *(undefined4 *)(puVar12 + 0x1c) = 0x3f800000;
          *(float *)((int)puVar12 + 0xe4) = 1.0 - fVar4;
          fVar21 = 0.0;
          uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar10 & 4;
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = ABS(*(float *)(puVar12 + 0x1c));
          if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
            fVar4 = 1.0;
          }
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (0.0 < fVar5) {
            lVar18 = uVar16 - 400;
            lVar25 = uVar16 - 0x9c;
            lVar23 = uVar16 - 0xac;
            lVar27 = 2;
            fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x20) = fVar4;
            *(float *)(puVar12 + 0x1f) = fVar4;
            *(float *)((int)puVar12 + 0xfc) = fVar4;
            *(float *)((int)puVar12 + 0xf4) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar5;
            *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar4;
            *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar4 * fVar4;
              iVar20 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0xac;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar5 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              lVar19 = lVar19 + 0x10;
              iVar14 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              fVar21 = fVar21 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar21 = (fVar21 + 0.7853982) * fVar3 + fVar6;
          }
          out[0x30] = 0.0;
          out[0x2b] = fVar21 * 2.0;
          out[0x2c] = fVar21 * 2.0;
          out[0xc] = (moby->rotation).x;
          out[0xd] = (moby->rotation).y;
          out[0xe] = (moby->rotation).z;
          out[0xf] = (moby->rotation).w;
          out[0x14] = (moby->rotation).x;
          out[0x15] = (moby->rotation).y;
          out[0x16] = (moby->rotation).z;
          out[0x17] = (moby->rotation).w;
          out[0x10] = (moby->pos).x;
          out[0x11] = (moby->pos).y;
          out[0x12] = (moby->pos).z;
          out[0x13] = (moby->pos).w;
          DAT_00fa4330 = 1;
          out[0x3e] = 1.4013e-45;
          out[0x3a] = 1.4013e-45;
          if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1))
          {
            moby->state = '\t';
          }
          if (0 < (int)out[0x47]) {
            mobyutil::MB_SetGroupActive((int)out[0x47],0,0,0);
          }
          mobyutil::MB_SetClassActive(SPAWN_POINT,1,1,-1);
          out[0x49] = -NAN;
        }
        else {
          dVar33 = (double)mobyutil::MB_BSphereGap(lVar17,g_heroMobyPtr);
          if (((((double)DAT_0079c2f0 <= dVar33) ||
               (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI)) ||
              (g_heroType != '\0')) ||
             ((iVar20 = mobyutil::MB_ShowPersistentMessage(7,0x53e4), iVar20 == 0 ||
              ((g_buttonsPressedThisFrame & TRIANGLE) == 0)))) {
            if (out[0x4c] != 0.0) {
              mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,out + 0x4c);
              boot::SceneScreenFade = out[0x4c];
            }
          }
          else {
            mobyutil::MB_ClearHelpMessage((MobyInstance *)0x7);
            hero::TransitionMovement(0x32,1);
            moby->state = '\x02';
            out[0x49] = -NAN;
          }
          mobyutil::MB_RegisterLameShadow(DAT_0079c3ac * DAT_0079c364,moby);
        }
      }
      else if (bVar2 < 3) {
        mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,out + 0x4c);
        boot::SceneScreenFade = out[0x4c];
        if (out[0x4c] == 1.0) {
          DAT_0096b2d4 = moby->oClass;
          DAT_0096b2ee = 1;
          DAT_0096b2d6 = (undefined1)DAT_0079c374;
          DAT_0096b2d7 = (undefined1)DAT_0079c378;
          DAT_0096b2dc = DAT_0079c368;
          DAT_0096b2d0 = moby;
          DAT_0096b2d8 = DAT_0096b2d7;
          out[0x3c] = 0.0;
          out[0x3d] = 3.57331e-43;
          DAT_0096b2e4 = 0x42c80000;
          DAT_0096b2e0 = DAT_0079c394;
          DAT_0096b2d9 = 3;
          DAT_0096b2da = 3;
          DAT_0096b2db = 3;
          DAT_0096b2ef = 0;
          music::music_SetTransition(2,4);
          fVar21 = out[0x48];
          if (fVar21 != -NAN) {
            hero::Hero_Warp(&Cuboids[(int)fVar21].pos.x,&Cuboids[(int)fVar21].rot.x,0x32,1);
            pCVar15 = Cuboids;
            fVar21 = out[0x48];
            (moby->pos).x = Cuboids[(int)fVar21].pos.x;
            (moby->pos).y = pCVar15[(int)fVar21].pos.y;
            (moby->pos).z = pCVar15[(int)fVar21].pos.z;
            (moby->pos).w = pCVar15[(int)fVar21].pos.w;
            fVar21 = out[0x48];
            (moby->rotation).x = pCVar15[(int)fVar21].rot.x;
            (moby->rotation).y = pCVar15[(int)fVar21].rot.y;
            (moby->rotation).z = pCVar15[(int)fVar21].rot.z;
            (moby->rotation).w = pCVar15[(int)fVar21].rot.w;
          }
          mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
          camera::SetCameraPosition(lVar17 + 0x10,lVar17 + 0x40,1,0,0);
          fVar21 = DAT_0079c2f4;
          *(undefined2 *)(out + 0x1a) = 0;
          out[0x19] = fVar21;
          out[0x1b] = 0.0;
          out[0x1c] = 0.0;
          out[0x21] = 0.0;
          out[0x20] = 0.0;
          moby->drawDistance = 0xff;
          fVar21 = (moby->rotation).z;
          moby->updateDistance = -1;
          out[10] = fVar21;
          out[0xe] = fVar21;
          fVar3 = DAT_0079c3ac;
          fVar21 = DAT_0079c344;
          out[0x2e] = 0.0;
          out[0x2d] = fVar21 * fVar3;
          out[0x2f] = DAT_0079c348 * fVar3;
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          mobyutil::MB_SphericalToVector(DAT_0079c2f4,out[0xe],-out[0xd],out);
          if (0 < (int)out[0x47]) {
            mobyutil::MB_SetGroupActive((int)out[0x47],1,1,1);
          }
          mobyutil::MB_SetClassActive(SPAWN_POINT,0,0,-1);
          pMVar8 = moby->pClass;
          (moby->pos).z = (moby->pos).z + 3.0;
          moby->scale = pMVar8->gScale * DAT_0079c3ac;
          hero::g_heroInvisible = 1;
          if (out[0x42] == -NAN) {
            fVar21 = (float)sound::PlayMobySound(0,4,moby);
            out[0x42] = fVar21;
          }
          help::Help_Suspend();
          OcclMode = 2;
          M1379_UpdateFlight(lVar17,uVar26);
          moby->state = '\x04';
        }
      }
      else if (3 < bVar2) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
        OcclMode = 2;
        if ((sound::g_SoundChannels[(int)out[0x42]].pMoby != moby) ||
           (sound::g_SoundChannels[(int)out[0x42]].state == '\0')) {
          out[0x42] = -NAN;
          fVar21 = (float)sound::PlayMobySound(0,4,moby);
          out[0x42] = fVar21;
        }
        M1379_UpdateFlight(lVar17,uVar26);
        if ((int)out[0x3a] < 1) {
          out[0x3e] = DAT_0079c484;
          moby->state = '\b';
        }
        if (out[0x4c] != 0.0) {
          mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,out + 0x4c);
          boot::SceneScreenFade = out[0x4c];
        }
        if ((DAT_0096b2ef & 1) != 0) {
          moby->state = '\x05';
        }
      }
    }
    else if (bVar2 < 8) {
      if (bVar2 < 6) {
        hero::g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
        hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        pMVar8 = moby->pClass;
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        (moby->rotation).w = out[0x17];
        moby->scale = pMVar8->gScale;
        mobyfunc::PostUpdateMobyLockTransform(moby);
        hero::Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        music::music_SetTransition(0,5);
        fVar21 = out[0x42];
        if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
          sound::sound_Kill((int)fVar21);
        }
        fVar21 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
          sound::sound_Kill((int)fVar21);
        }
        out[0x43] = -NAN;
        moby->state = '\x01';
        out[0x4c] = 0.99;
        boot::SceneScreenFade = 0.99;
      }
      else if (6 < bVar2) {
        mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
        OcclMode = 2;
        iVar20 = fastfunc::FastDecTimerS16(uVar26 + 0x62);
        if (iVar20 != 0) {
          help::Help_Resume();
          g_heroMobyPtr->collisionMesh = (float *)0x0;
          hero::HandleHeroDeath();
          camera::camera5::Camera_DeactivateMobyDrivenCam(0);
          music::music_SetTransition(0,5);
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          (moby->rotation).w = out[0x17];
          mobyfunc::PostUpdateMobyLockTransform(moby);
          fVar21 = out[0x42];
          if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
            sound::sound_Kill((int)fVar21);
          }
          fVar21 = out[0x43];
          out[0x42] = -NAN;
          if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
             (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
            sound::sound_Kill((int)fVar21);
          }
          out[0x43] = -NAN;
          moby->state = '\0';
        }
      }
    }
    else if (bVar2 < 9) {
      mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
      OcclMode = 2;
      M1379_UpdateFlight(lVar17,uVar26);
      iVar20 = fastfunc::FastDecTimerS32(uVar26 + 0xf8);
      fVar21 = out[0x4c];
      if (iVar20 != 0) {
        mobyutil::Delt(1.0,mobyutil::g_FrameTime * 4.0,out + 0x4c);
        fVar21 = out[0x4c];
        boot::SceneScreenFade = fVar21;
      }
      if (1.0 <= fVar21) {
        hero::g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
        music::music_SetTransition(0,5);
        pCVar15 = Cuboids;
        fVar21 = out[0x40];
        if (fVar21 == -NAN) {
          libc::printf("no final place for jet during victory, so use init pos\n");
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          fVar21 = out[0x17];
        }
        else {
          (moby->pos).x = Cuboids[(int)fVar21].pos.x;
          (moby->pos).y = pCVar15[(int)fVar21].pos.y;
          fVar3 = pCVar15[(int)fVar21].pos.z;
          (moby->pos).z = fVar3;
          (moby->pos).w = pCVar15[(int)fVar21].pos.w;
          fVar21 = out[0x40];
          (moby->rotation).x = pCVar15[(int)fVar21].rot.x;
          (moby->rotation).y = pCVar15[(int)fVar21].rot.y;
          (moby->rotation).z = pCVar15[(int)fVar21].rot.z;
          fVar21 = pCVar15[(int)fVar21].rot.w;
          (moby->pos).z = fVar3 + 0.57318;
        }
        pMVar8 = moby->pClass;
        (moby->rotation).w = fVar21;
        moby->scale = pMVar8->gScale;
        mobyfunc::PostUpdateMobyLockTransform(moby);
        if (out[0x3f] == -NAN) {
          libc::printf("no final place for hero during victory, so just fall\n");
        }
        else {
          if (0 < (int)out[0x47]) {
            mobyutil::MB_SetGroupActive((int)out[0x47],0,0,0);
          }
          mobyutil::MB_SetClassActive(SPAWN_POINT,1,1,-1);
          hero::Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        }
        if (moby->levelFlagIdx != -1) {
          mobyfunc::SetLevelFlag();
        }
        fVar21 = out[0x42];
        if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
          sound::sound_Kill((int)fVar21);
        }
        fVar21 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar21 != -NAN) && (sound::g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (sound::g_SoundChannels[(int)fVar21].state != '\0')) {
          sound::sound_Kill((int)fVar21);
        }
        out[0x43] = -NAN;
        respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
        moby->state = '\t';
      }
    }
    else if (bVar2 < 10) {
      if (out[0x4c] == 0.0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,out + 0x4c);
      boot::SceneScreenFade = out[0x4c];
    }
    fVar9 = (moby->pos).x;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar3 = 15.0;
    fVar21 = (moby->pos).x;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).x = 15.0;
      fVar21 = fVar3;
    }
    fVar4 = 1008.0;
    if (1008.0 < fVar21) {
      (moby->pos).x = 1008.0;
      fVar21 = fVar4;
    }
    fVar9 = (moby->pos).y;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar5 = (moby->pos).y;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).y = 15.0;
      fVar5 = fVar3;
    }
    if (1008.0 < fVar5) {
      (moby->pos).y = 1008.0;
      fVar5 = fVar4;
    }
    fVar9 = (moby->pos).z;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar6 = (moby->pos).z;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).z = 15.0;
      fVar6 = fVar3;
    }
    if (1008.0 < fVar6) {
      (moby->pos).z = 1008.0;
      fVar6 = fVar4;
    }
    bVar2 = moby->state;
    if (bVar2 == 4) {
      g_heroPosition.w = (moby->pos).w;
      g_heroRotation.x = out[0xc];
      g_heroRotation.y = out[0xd];
      g_heroRotation.z = out[0xe];
      g_heroRotation.w = out[0xf];
      g_heroPosition.x = fVar21;
      g_heroPosition.y = fVar5;
      g_heroPosition.z = fVar6;
    }
    if ((2 < bVar2) && (bVar2 < 5)) {
      M1379_0025f3c8(lVar17,uVar26);
    }
  }
  return;
}



//==== 00265a10  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1380_00265a10(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1380_00265a10(void)

{
  DAT_0079c6cc = 0x10000;
  return;
}



//==== 00265a28  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M1380_00265a28(void)
// callers(1): 00265e20 mobyupdate_unsorted::UpdateMoby_1380
// callees(0): 

void mobyupdate_helpers::M1380_00265a28(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float *pfVar17;
  Spline *pSVar18;
  longlong lVar19;
  
  iVar16 = *(int *)(param_1 + 0x78);
  if ((g_onMagnerail != 0) && (g_standingOnMoby == param_1)) {
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xd0);
    fVar3 = *(float *)(param_1 + 0xe0);
    pfVar17 = (float *)&DAT_0079c6f0;
    fVar4 = *(float *)(param_1 + 0xc4);
    lVar19 = 0xb;
    pSVar18 = Splines[*(int *)(iVar16 + 0x80)];
    fVar5 = *(float *)(param_1 + 0xd4);
    fVar6 = *(float *)(param_1 + 0xe4);
    fVar7 = *(float *)(param_1 + 200);
    fVar8 = *(float *)(param_1 + 0xd8);
    fVar9 = *(float *)(param_1 + 0xe8);
    fVar10 = *(float *)(param_1 + 0x10);
    fVar11 = *(float *)(param_1 + 0x14);
    fVar12 = *(float *)(param_1 + 0x18);
    do {
      fVar13 = *pfVar17;
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[1];
      pSVar18->points[0].w = 1.0;
      pfVar17 = pfVar17 + 4;
      pSVar18->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
      pSVar18->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
      pSVar18->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
      pSVar18 = (Spline *)pSVar18->points;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    DAT_0096bfba = (undefined2)*(undefined4 *)(iVar16 + 0x80);
  }
  return;
}



//==== 00265b38  ns=mobyupdate_helpers  size=0x29c
// sig: undefined M1380_00265b38(void)
// callers(1): 00265e20 mobyupdate_unsorted::UpdateMoby_1380
// callees(0): 

void mobyupdate_helpers::M1380_00265b38(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  char acVar10 [4];
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar11;
  fVar2 = GameCamera.posX - *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
  param_2[1] = fVar5;
  fVar7 = SQRT(fVar2 * fVar2 + fVar5 * fVar5);
  param_2[2] = GameCamera.posZ - *(float *)(param_1 + 0x18);
  acVar10 = GameCamera.field8_0x14c;
  *(char (*) [4])(param_2 + 3) = GameCamera.field8_0x14c;
  fVar1 = 0.0;
  fVar3 = fVar1;
  fVar4 = fVar1;
  if (fVar7 != 0.0) {
    fVar4 = 2.5 / fVar7;
    *(char (*) [4])(param_2 + 3) = acVar10;
    fVar3 = fVar2 * fVar4;
    fVar4 = fVar5 * fVar4;
  }
  *param_2 = fVar3;
  param_2[1] = fVar4;
  param_2[2] = 1.5;
  *param_2 = fVar3 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar4 + *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  fVar3 = *param_2;
  param_2[2] = fVar2 + 1.5;
  param_3[2] = 0;
  fVar2 = DAT_00969db4 - param_2[1];
  fVar4 = ABS(hero::g_heroCGPos - fVar3);
  *(float *)(puVar6 + 6) = hero::g_heroCGPos - fVar3;
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar6 + 0x34) = fVar2;
  *(float *)(puVar6 + 7) = fVar4 - fVar3;
  uVar14 = (ulonglong)(*(uint *)(puVar6 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar6 + 6));
  if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar5 = ABS(*(float *)((int)puVar6 + 0x34));
  if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar11 - 0x50;
    lVar15 = uVar11 - 0x24;
    lVar13 = uVar11 - 0x14;
    lVar18 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar6 + 9) = fVar2;
    *(float *)(puVar6 + 8) = fVar2;
    *(float *)((int)puVar6 + 0x44) = fVar2;
    *(float *)((int)puVar6 + 0x3c) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar6 + 8) = *(float *)(puVar6 + 8) * fVar5;
    *(float *)((int)puVar6 + 0x44) = *(float *)((int)puVar6 + 0x44) * fVar2;
    *(float *)(puVar6 + 9) = *(float *)(puVar6 + 9) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x2c) * fVar2 * fVar2;
      iVar8 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x3c) = *(float *)((int)lVar15 + 0x3c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar8 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar8 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
              *(float *)(iVar9 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  param_3[2] = fVar1;
  param_3[1] = 0;
  return;
}



//==== 00265e20  ns=mobyupdate_unsorted  size=0x8c8
// sig: undefined UpdateMoby_1380(MobyInstance * moby)
// callers(0): 
// callees(17): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 00109c30 mobyutil::OrganicDelt; 0010de78 mobyutil::MB_WrapRot; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00265a28 mobyupdate_helpers::M1380_00265a28; 00265b38 mobyupdate_helpers::M1380_00265b38; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 1380 */

void mobyupdate_unsorted::UpdateMoby_1380(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  void *pvVar4;
  char cVar5;
  MobyInstance *pMVar6;
  short sVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar13;
  int iVar14;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  Vec4 local_80;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  local_80.x = -(moby->pos).x;
  fVar20 = (moby->pos).z;
  local_80.y = -(moby->pos).y;
  pvVar4 = moby->pVar;
  local_80.z = -fVar20;
  local_80.w = (moby->pos).w;
  local_70 = (moby->rotation).x;
  local_6c = (moby->rotation).y;
  local_68 = (moby->rotation).z;
  local_64 = (moby->rotation).w;
  if (*(int *)((int)pvVar4 + 0x7c) == 0) {
    fVar3 = 1.0;
    fVar20 = 1.0 - (fVar20 - *(float *)((int)pvVar4 + 100)) /
                   (*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100));
    if ((fVar20 <= 1.0) && (fVar3 = fVar20, fVar20 < 0.0)) {
      fVar3 = 0.0;
    }
    (moby->rotation).y = fVar3 * 3.1415927;
    fVar20 = mobyutil::MB_WrapRot(fVar3 * 3.1415927);
    (moby->rotation).y = fVar20;
  }
  bVar1 = moby->state;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      dVar15 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar4 + 0x78) = (float)dVar15;
      *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
      if (*(int *)((int)pvVar4 + 0x80) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar4 + 0x80)]->cnt != 0xb) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->state = '\x06';
      goto LAB_00266674;
    }
    if (bVar1 < 2) {
      dVar19 = 1.0;
      dVar15 = (double)*(float *)((int)pvVar4 + 0x70);
      mobyutil::OrganicDelt
                (1.0,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 (float *)((int)pvVar4 + 0x70),0x720000,(float *)((int)pvVar4 + 0x74));
      uVar13 = (int)*(uint *)((int)pvVar4 + 0x70) >> 0x1f;
      if ((int)((uVar13 >> 1 ^ *(uint *)((int)pvVar4 + 0x70)) - uVar13) < 0x3f800000) {
        dVar19 = (double)((float)(dVar19 - (double)*(float *)((int)pvVar4 + 0x70)) /
                         (float)(dVar19 - dVar15));
        mobyupdate_helpers::M1380_00265b38(lVar9,uVar8 - 0x60,uVar8 - 0x50);
        local_60 = (float)(dVar19 * (double)(float)((double)GameCamera.posX - (double)local_60) +
                          (double)local_60);
        local_5c = (float)(dVar19 * (double)(float)((double)GameCamera.posY - (double)local_5c) +
                          (double)local_5c);
        local_58 = (float)(dVar19 * (double)(float)((double)GameCamera.posZ - (double)local_58) +
                          (double)local_58);
        dVar15 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.elevation,(double)local_4c);
        dVar15 = (double)fastfunc::FastWrapRot((float)(dVar19 * dVar15),local_4c);
        local_4c = (float)dVar15;
        dVar15 = (double)fastfunc::FastDiffRots((double)GameCamera.rot.radius,(double)local_48);
        dVar15 = (double)fastfunc::FastWrapRot((float)(dVar19 * dVar15),local_48);
        local_48 = (float)dVar15;
        camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x60));
        camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x50));
      }
      else {
        uVar2 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar2;
      }
      goto LAB_00266674;
    }
    mobyupdate_helpers::M1380_00265a28(lVar9);
  }
  else {
    if (7 < bVar1) {
      if (bVar1 < 10) {
        iVar14 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
        if (iVar14 != 0) {
          sound::sound_Kill(*(int *)((int)pvVar4 + 0x6c));
          *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
        }
        if (g_standingOnMoby != moby) {
          moby->state = ((byte)((LZCOUNT(9 - (uint)moby->state) << 0x3a) >> 0x3f) & 1) + 6;
        }
      }
      goto LAB_00266674;
    }
    if (5 < bVar1) {
      dVar19 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar4 + 0x78),mobyutil::g_FrameTime * 6.2831855);
      dVar15 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar15 = dVar19;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar15 < 0.0) {
        dVar16 = dVar15;
      }
      dVar15 = (double)(float)(dVar16 * dVar16);
      dVar18 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
      dVar17 = (double)(float)(dVar15 * dVar18);
      *(float *)((int)pvVar4 + 0x78) = (float)dVar19;
      lVar10 = fastfunc::FastDoubleToInt
                         ((double)((((float)(dVar15 * dVar17) * 2.601887e-06 +
                                    (float)(dVar17 * -0.0001980741071747616 +
                                           (double)(float)(dVar18 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar15 * 
                                                  dVar16) * -0.16666656732559204 + dVar16)))) * 4.0
                                   - 3.0) * 128.0));
      sVar7 = g_onMagnerail;
      pMVar6 = g_standingOnMoby;
      fVar20 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      lVar11 = lVar10 + (lVar10 + -0x20 >> 0x3f & 0x20U - lVar10);
      uVar12 = lVar11 + (0x80 - lVar10 >> 0x3f & 0x80U - lVar11);
      moby->field60_0x90 =
           (uint)((uVar12 & 0xffffffff) << 8) | (uint)uVar12 | (uint)((uVar12 & 0xffffffff) << 0x10)
           | 0x80000000;
      if ((sVar7 != 0) || (*(int *)((int)pvVar4 + 0x7c) == 0)) {
        if ((pMVar6 != moby) ||
           ((g_framesNotGrounded != 0 ||
            (0.5 <= SQRT((g_heroPosition.x - fVar20) * (g_heroPosition.x - fVar20) +
                         (g_heroPosition.y - fVar3) * (g_heroPosition.y - fVar3)))))) {
          if (moby->state == '\x06') {
            fVar20 = SQRT((fVar20 - g_heroPosition.x) * (fVar20 - g_heroPosition.x) +
                          (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y));
            if (((ABS(hero::g_heroGroundZ - *(float *)((int)pvVar4 + 100)) <
                  ABS(*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100)) * 0.5) &&
                (fVar20 < 32.0)) && (2.0 < fVar20)) {
              moby->state = '\x03';
              moby->setByGroup = '\0';
              *(undefined4 *)((int)pvVar4 + 0x68) = 0;
            }
          }
          else if ((((moby->state == '\a') &&
                    (fVar20 = SQRT((fVar20 - g_heroPosition.x) * (fVar20 - g_heroPosition.x) +
                                   (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)),
                    ABS(hero::g_heroGroundZ - *(float *)((int)pvVar4 + 0x60)) <
                    ABS(*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100)) * 0.5)) &&
                   (fVar20 < 32.0)) && (2.0 < fVar20)) {
            moby->state = '\x02';
            moby->setByGroup = '\0';
            *(undefined4 *)((int)pvVar4 + 0x68) = 0;
          }
        }
        else {
          sound::PlayMobySound(1,0,moby);
          moby->state = (char)((LZCOUNT(7 - (uint)moby->state) << 0x3a) >> 0x3f) + '\x03';
        }
      }
      goto LAB_00266674;
    }
  }
  uVar13 = fastfunc::FastLerpColor(0x3fb99999a0000000,moby->field60_0x90,0xffffffff80808040);
  moby->field60_0x90 = uVar13;
  if ((moby->state == '\x02') && (g_standingOnMoby != moby)) {
    moby->state = '\x04';
  }
  else if ((moby->state == '\x03') && (g_standingOnMoby != moby)) {
    moby->state = '\x05';
  }
  iVar14 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
  if (iVar14 == 0) {
    iVar14 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar4 + 0x6c) = iVar14;
  }
  if ((moby->state == '\x02') || (moby->state == '\x04')) {
    fVar20 = *(float *)((int)pvVar4 + 0x60);
  }
  else {
    fVar20 = *(float *)((int)pvVar4 + 100);
  }
  dVar15 = (double)fVar20;
  mobyutil::OrganicDelt
            (fVar20,DAT_0071f418 * 0.3,DAT_0071f418 * 0.3,mobyutil::g_FrameTime * 3.0,&(moby->pos).z
             ,0x720000,(float *)((int)pvVar4 + 0x68));
  if (ABS((float)((double)(moby->pos).z - dVar15)) == 0.0) {
    bVar1 = moby->state;
    cVar5 = (char)((LZCOUNT(2 - (uint)bVar1) << 0x3a) >> 0x3f) + '\t';
    cVar5 = cVar5 + ((byte)((LZCOUNT(5 - (uint)bVar1) << 0x3a) >> 0x3f) & 7U - cVar5);
    moby->state = cVar5 + ((byte)((LZCOUNT(4 - (uint)bVar1) << 0x3a) >> 0x3f) & 6U - cVar5);
    if (moby->setByGroup != '\0') {
      hero::TransitionMovement(0,0);
    }
    iVar14 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
    if (iVar14 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar4 + 0x6c));
      *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
    }
  }
LAB_00266674:
  local_80.x = local_80.x + (moby->pos).x;
  local_80.y = local_80.y + (moby->pos).y;
  local_80.z = local_80.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_80,uVar8 - 0x70,lVar9 + 0x40);
  return;
}



//==== 002666e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1381_002666e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1381_002666e8(void)

{
  DAT_0079c7ec = 0x10000;
  return;
}



//==== 00266758  ns=mobyupdate_unsorted  size=0x7c4
// sig: undefined UpdateMoby_1381(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00109c30 mobyutil::OrganicDelt; 00116d1c mobyutil::MB_StoreChildOffsets; 00116eb8 mobyutil::MB_UpdateChildMobys; 002a0dec FUN_002a0dec; 00425540 FUN_00425540; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 1381 */

void mobyupdate_unsorted::UpdateMoby_1381(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  f32 fVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  MobyInstance *pMVar13;
  Cuboid *pCVar14;
  int iVar15;
  ushort *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 in_LR;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  
  pvVar7 = moby->pVar;
  uVar18 = ZEXT48(pvVar7);
  if (pvVar7 != (void *)0x0) {
    dVar19 = (double)(DAT_0079c814 * DAT_0071f418);
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar7 + 0x340);
      *(float *)((int)pvVar7 + 0x340) = -(DAT_0071f418 * 5.0 - *(float *)((int)pvVar7 + 0x340));
      fVar8 = (moby->pos).z;
      uVar9 = (int)fVar8 >> 0x1f;
      if ((int)((uVar9 >> 1 ^ (uint)fVar8) - uVar9) < 0x41a00000) {
        iVar15 = 0;
        if (0 < *(int *)((int)pvVar7 + 0x338)) {
          do {
            FUN_002a0dec(MobyInstance + *(int *)((int)uVar18 + 0x50));
            iVar15 = iVar15 + 1;
            uVar18 = uVar18 + 0x30;
          } while (iVar15 < *(int *)((int)pvVar7 + 0x338));
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if (uVar1 == '\x02') {
      if (DAT_0079c810 != 0) {
        uVar9 = (int)*(uint *)((int)pvVar7 + 0x330) >> 0x1f;
        iVar15 = (int)pvVar7 + 0x334;
        if ((int)((uVar9 >> 1 ^ *(uint *)((int)pvVar7 + 0x330)) - uVar9) < 0x3fc00000) {
          fVar27 = mobyutil::OrganicDelt
                             (1.5,DAT_0079c814 * DAT_0071f418,DAT_0079c818 * DAT_0071f418,
                              DAT_0079c81c * mobyutil::g_FrameTime,(float *)((int)pvVar7 + 0x330U),
                              iVar15,(float *)iVar15);
          dVar19 = (double)fVar27;
        }
        else {
          fVar27 = mobyutil::OrganicDelt
                             (2.0,DAT_0079c820 * DAT_0071f418,DAT_0079c824 * DAT_0071f418,
                              DAT_0079c828 * mobyutil::g_FrameTime,(float *)((int)pvVar7 + 0x330U),
                              iVar15,(float *)iVar15);
          dVar19 = (double)fVar27;
        }
      }
      uVar9 = (int)*(uint *)((int)pvVar7 + 0x330) >> 0x1f;
      iVar15 = (uVar9 >> 1 ^ *(uint *)((int)pvVar7 + 0x330)) - uVar9;
      if (((int)(((uint)((int)DAT_0079c83c >> 0x1f) >> 1 ^ DAT_0079c83c) -
                ((int)DAT_0079c83c >> 0x1f)) < iVar15) && (*(int *)((int)pvVar7 + 0x344) == 0)) {
        auVar24 = loadVectorLeftIndexed(0xffffffffffffc840,0x7a0000);
        auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x344,
                            uVar18);
        *(undefined4 *)((int)pvVar7 + 0x344U & 0xfffffffc) = uVar10;
      }
      if (((int)(((uint)((int)DAT_0079c838 >> 0x1f) >> 1 ^ DAT_0079c838) -
                ((int)DAT_0079c838 >> 0x1f)) < iVar15) && (*(int *)((int)pvVar7 + 8) != 0)) {
        moby->state = '\x04';
      }
      fVar27 = animationSpeed;
      iVar15 = 0;
      bVar12 = false;
      uVar17 = uVar18;
      if (0 < *(int *)((int)pvVar7 + 0x338)) {
        do {
          if (g_standingOnMoby == MobyInstance + *(int *)((int)uVar17 + 0x50)) {
            iVar15 = *(int *)((int)pvVar7 + 0x350) + 1;
            *(int *)((int)pvVar7 + 0x350) = iVar15;
            dVar19 = (double)(longlong)(int)(fVar27 * 30.5);
            if ((int)(fVar27 * 30.5) < iVar15) {
              *(undefined4 *)((int)pvVar7 + 0x348) = 1;
            }
            bVar12 = true;
            break;
          }
          iVar15 = iVar15 + 1;
          uVar17 = uVar17 + 0x30;
        } while (iVar15 < *(int *)((int)pvVar7 + 0x338));
      }
      if (g_standingOnMoby != (MobyInstance *)0x0) {
        if (g_standingOnMoby->oClass == 0x764) {
          bVar12 = true;
        }
        if ((g_standingOnMoby->oClass == moby->oClass) && (g_standingOnMoby->state == '\x04')) {
          bVar12 = true;
        }
      }
      if (((!bVar12 && *(int *)((int)pvVar7 + 0x348) != 0) && (g_framesNotGrounded == 0)) &&
         (iVar15 = fastfunc::FastDecTimerS32(dVar19,uVar18 + 0x34c), iVar15 != 0)) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\0') {
      *(f32 *)((int)pvVar7 + 0x10) = (moby->pos).x;
      *(f32 *)((int)pvVar7 + 0x14) = (moby->pos).y;
      *(f32 *)((int)pvVar7 + 0x18) = (moby->pos).z;
      *(f32 *)((int)pvVar7 + 0x1c) = (moby->pos).w;
      *(f32 *)((int)pvVar7 + 0x20) = (moby->rotation).x;
      *(f32 *)((int)pvVar7 + 0x24) = (moby->rotation).y;
      *(f32 *)((int)pvVar7 + 0x28) = (moby->rotation).z;
      *(f32 *)((int)pvVar7 + 0x2c) = (moby->rotation).w;
      pMVar13 = MobyInstance;
      puVar16 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      if (puVar16 == (ushort *)0x0) {
        return;
      }
      iVar15 = 0;
      uVar17 = uVar18;
      do {
        if (pMVar13[*puVar16 & 0x7fff].oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
          *(uint *)((int)uVar17 + 0x50) = *puVar16 & 0x7fff;
          iVar15 = iVar15 + 1;
          uVar17 = uVar17 + 0x30;
        }
        uVar6 = *puVar16;
        puVar16 = puVar16 + 1;
      } while (iVar15 < 0x10 && -1 < (short)uVar6);
      *(undefined4 *)((int)pvVar7 + 0x348) = 0;
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      *(undefined4 *)((int)pvVar7 + 0x350) = 0;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(in_LR,0x266700);
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar24 = vectorMultiplyAddFloatingPoint
                          (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                           auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x34c,uVar18
                         );
      *(undefined4 *)((int)pvVar7 + 0x34cU & 0xfffffffc) = uVar10;
      *(int *)((int)pvVar7 + 0x338) = iVar15;
      mobyutil::MB_StoreChildOffsets(moby,uVar18 + 0x30,iVar15);
      moby->state = '\x01';
    }
    pCVar14 = Cuboids;
    if ((moby->state == '\x02') || (moby->state == '\x01')) {
      iVar15 = *(int *)((int)pvVar7 + 4);
      fVar27 = *(float *)((int)pvVar7 + 0x14);
      fVar11 = *(float *)((int)pvVar7 + 0x330) * 0.5;
      fVar2 = Cuboids[iVar15].pos.y;
      fVar3 = Cuboids[iVar15].pos.z;
      fVar4 = *(float *)((int)pvVar7 + 0x18);
      fVar5 = Cuboids[iVar15].pos.w;
      (moby->pos).x =
           fVar11 * (Cuboids[iVar15].pos.x - *(float *)((int)pvVar7 + 0x10)) +
           *(float *)((int)pvVar7 + 0x10);
      (moby->pos).y = fVar11 * (fVar2 - fVar27) + *(float *)((int)pvVar7 + 0x14);
      fVar27 = *(float *)((int)pvVar7 + 0x18);
      (moby->pos).w = fVar5;
      (moby->pos).z = fVar11 * (fVar3 - fVar4) + fVar27;
      fVar11 = *(float *)((int)pvVar7 + 0x330) * 0.5;
      fVar27 = pCVar14[iVar15].rot.y;
      fVar2 = *(float *)((int)pvVar7 + 0x24);
      fVar3 = pCVar14[iVar15].rot.z;
      fVar4 = *(float *)((int)pvVar7 + 0x28);
      fVar5 = pCVar14[iVar15].rot.w;
      (moby->rotation).x =
           fVar11 * (pCVar14[iVar15].rot.x - *(float *)((int)pvVar7 + 0x20)) +
           *(float *)((int)pvVar7 + 0x20);
      (moby->rotation).y = fVar11 * (fVar27 - fVar2) + *(float *)((int)pvVar7 + 0x24);
      fVar27 = *(float *)((int)pvVar7 + 0x28);
      (moby->rotation).w = fVar5;
      (moby->rotation).z = fVar11 * (fVar3 - fVar4) + fVar27;
    }
    mobyutil::MB_UpdateChildMobys(moby,uVar18 + 0x30,*(undefined4 *)((int)pvVar7 + 0x338));
    dVar19 = 0.0;
    if ((*(int *)((int)pvVar7 + 0x344) != 0) && (moby->state != '\x04')) {
      *(float *)((int)pvVar7 + 0x344) = *(float *)((int)pvVar7 + 0x344) + 0.25;
      fastfunc::FastDoubleToInt();
      iVar15 = mobyutil::MB_randInt();
      if (iVar15 == 0) {
        dVar20 = (double)mobyutil::MB_randRangeFloat(-1.0471976,1.0471976);
        dVar20 = (double)fastfunc::FastWrapRot((float)dVar20,GameCamera.rot.radius);
        dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar19,20.0);
        fVar27 = (float)(dVar20 + 1.570796251296997);
        dVar19 = (double)(float)(3.141592502593994 - dVar20);
        if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
          dVar19 = dVar20;
        }
        fVar2 = 3.1415925 - fVar27;
        if (fVar27 - (3.1415925 - fVar27) < 0.0) {
          fVar2 = fVar27;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar20);
        if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
          dVar22 = dVar19;
        }
        fVar3 = -3.1415925 - fVar27;
        if ((-3.1415925 - fVar27) - fVar2 < 0.0) {
          fVar3 = fVar2;
        }
        dVar19 = (double)(float)(dVar22 * dVar22);
        fVar4 = fVar3 * fVar3;
        dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar22));
        fVar27 = fVar4 * fVar4 * fVar3;
        dVar20 = (double)(float)(dVar19 * dVar23);
        fVar2 = fVar4 * fVar27;
        fVar27 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar27 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
                         dVar21 + (double)g_heroPosition.x);
        FUN_00425540((double)DAT_0079c844,0x4000000000000000,0x3ff0000000000000,0x3fe8000000000000,
                     CONCAT44(fVar27,(float)((double)((float)(dVar19 * dVar20) * 2.601887e-06 +
                                                     (float)(dVar20 * -0.0001980741071747616 +
                                                            (double)(float)(dVar23 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar19 * dVar22) *
                                                                  -0.16666656732559204 + dVar22))))
                                             * dVar21 + (double)g_heroPosition.y)),
                     CONCAT44(g_heroPosition.z + 15.0,fVar27),CONCAT44(DAT_00a15d30,DAT_00a15d34),
                     CONCAT44(DAT_00a15d38,DAT_00a15d3c),0x2b8);
      }
    }
  }
  return;
}



//==== 00266f20  ns=mobyupdate_helpers  size=0x140
// sig: undefined M1387_00266f20(void)
// callers(1): 00267060 FUN_00267060
// callees(0): 

void mobyupdate_helpers::M1387_00266f20(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  uVar5 = (ulonglong)(byte)(&DAT_00e577f0)[param_1];
  if (*(short *)((&DAT_00e574f0)[(byte)(&DAT_00e577f0)[param_1]] + 0x24) != 0) {
    iVar6 = 0;
    iVar4 = (int)(param_2 << 7);
    do {
      iVar8 = *(int *)(*(int *)((int)&DAT_00e574f0 + (int)(uVar5 << 2)) + 0x20) + iVar6;
      fVar1 = *(float *)(iVar8 + 0x44) - *(float *)((int)&(Cuboids->pos).y + iVar4);
      fVar2 = *(float *)(iVar8 + 0x40) - *(float *)((int)&(Cuboids->pos).x + iVar4);
      fVar3 = *(float *)(iVar8 + 0x48) - *(float *)((int)&(Cuboids->pos).z + iVar4);
      if ((ABS(*(float *)((int)&(Cuboids->imatrix).v2.x + iVar4) * fVar3 +
               *(float *)((int)&(Cuboids->imatrix).v0.x + iVar4) * fVar2 +
               *(float *)((int)&(Cuboids->imatrix).v1.x + iVar4) * fVar1) < 1.0) &&
         (ABS(*(float *)((int)&(Cuboids->imatrix).v2.y + iVar4) * fVar3 +
              *(float *)((int)&(Cuboids->imatrix).v0.y + iVar4) * fVar2 +
              *(float *)((int)&(Cuboids->imatrix).v1.y + iVar4) * fVar1) < 1.0)) {
        *(undefined4 *)(iVar8 + 0x4c) = 0;
        *(undefined4 *)
         (*(int *)((&DAT_00e574f0)[(byte)(&DAT_00e577f0)[param_1]] + 0x20) + iVar6 + 0x54) =
             0x3f800000;
        uVar5 = (ulonglong)(byte)(&DAT_00e577f0)[param_1];
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < (int)(uint)*(ushort *)(*(int *)((int)&DAT_00e574f0 + (int)(uVar5 << 2)) + 0x24)
            );
  }
  return;
}



//==== 00267060  ns=Global  size=0xa0
// sig: undefined FUN_00267060(void)
// callers(1): 002766e0 mobyupdate_unsorted::UpdateMoby_1422
// callees(2): 00266f20 mobyupdate_helpers::M1387_00266f20; 002a0d8c mobyupdate_helpers::M1584_002a0d8c

void FUN_00267060(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((*(short *)(param_1 + 0xa6) == 0x565) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if (*(int *)(iVar1 + 0xc) != -1) {
      mobyupdate_helpers::M1387_00266f20(0x802,*(int *)(iVar1 + 0xc));
      mobyupdate_helpers::M1387_00266f20(0x908,*(undefined4 *)(iVar1 + 0xc));
      mobyupdate_helpers::M1387_00266f20(0x954,*(undefined4 *)(iVar1 + 0xc));
    }
    *(undefined1 *)(param_1 + 0x20) = 2;
    mobyupdate_helpers::M1584_002a0d8c(*(undefined1 *)(param_1 + 0x21),1);
  }
  return;
}



//==== 00267100  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1387_00267100(void)
// callers(1): 00275240 mobyupdate_helpers::M1422_00275240
// callees(1): 00116eb8 mobyutil::MB_UpdateChildMobys

void mobyupdate_helpers::M1387_00267100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(short *)(param_1 + 0xa6) == 0x565) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(iVar1 + 0x330) = 0;
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  mobyutil::MB_UpdateChildMobys(param_1,iVar1 + 0x30,*(undefined4 *)(iVar1 + 0x338));
  return;
}



//==== 00267158  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1387_00267158(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1387_00267158(void)

{
  DAT_0079c898 = 0x10000;
  return;
}



//==== 00267178  ns=mobyupdate_unsorted  size=0x188
// sig: undefined UpdateMoby_1387(MobyInstance * moby)
// callers(0): 
// callees(1): 000f31a8 mobyfunc::UpdateMobyTransform

/* Moby 1387 */

void mobyupdate_unsorted::UpdateMoby_1387(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar9 = (float *)moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar4 = *pfVar9;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.x;
    fVar7 = (moby->transform).v2.z;
    fVar8 = 0.0;
    moby->modeBits = moby->modeBits | (LOCK_ROTATION|DISABLED);
    fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar14 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    fVar4 = (fVar4 * 0.25) / fVar13;
    fVar12 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar12 = fVar2 * fVar4;
    }
    fVar11 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar11 = fVar1 * fVar4;
    }
    fVar10 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar3 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar12 = fVar2 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar11 = fVar1 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar4;
    }
    (moby->transform).v1.x = fVar12;
    (moby->transform).v1.y = fVar11;
    (moby->transform).v1.z = fVar10;
    fVar1 = pfVar9[1];
    moby->state = '\x01';
    fVar2 = (fVar1 * 0.25) / fVar14;
    fVar1 = fVar8;
    if (0.0 - fVar14 < 0.0) {
      fVar1 = fVar6 * fVar2;
    }
    fVar3 = fVar8;
    if (0.0 - fVar14 < 0.0) {
      fVar3 = fVar5 * fVar2;
    }
    if (0.0 - fVar14 < 0.0) {
      fVar8 = fVar7 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar1 = fVar6 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar3 = fVar5 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar8 = fVar7 * fVar2;
    }
    (moby->transform).v2.x = fVar1;
    (moby->transform).v2.y = fVar3;
    (moby->transform).v2.z = fVar8;
    mobyfunc::UpdateMobyTransform(moby);
  }
  return;
}



//==== 00267300  ns=Global  size=0x30
// sig: undefined FUN_00267300(void)
// callers(1): 003b1338 mobyupdate_unsorted::UpdateMoby_546
// callees(0): 

void FUN_00267300(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0xa6) == 0x56b) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    }
  }
  return;
}



//==== 00267348  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1388_00267348(void)
// callers(1): 00267798 mobyupdate_unsorted::UpdateMoby_1388
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1388_00267348(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  undefined8 in_r9;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 local_90 [56];
  
  dVar12 = 0.5;
  dVar13 = 0.0;
  iVar8 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.5) - 0.5;
  lVar10 = uVar9 + 0x30;
  dVar14 = 255.0;
  auVar18 = loadVectorLeftIndexed(0x14,0x267330);
  dVar15 = 255.5;
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
    dVar11 = (double)fVar4;
    *(float *)(iVar3 + 0x10) = fVar4;
    if (dVar11 < dVar14) {
      if (dVar11 <= dVar13) {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar14);
      }
    }
    else {
      *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar14);
    }
    iVar6 = fastfunc::FastDecTimerS32(uVar9 + 0x30);
    iVar1 = *(int *)(iVar3 + 0x30);
    dVar11 = (double)animationSpeed;
    auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar6 != 0) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar17);
      iVar1 = (int)(dVar11 * dVar15);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar11 = (double)fastfunc::FastIntToDouble((int)(dVar11 * dVar15) - iVar1);
    uVar5 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar12 - (double)(float)(dVar11 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar15)))),0x4040ffff,0x1040ffff)
    ;
    uVar7 = fastfunc::FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
    partupd::SpawnPart_59((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}



//==== 00267668  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1388_00267668(void)
// callers(1): 00267798 mobyupdate_unsorted::UpdateMoby_1388
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1388_00267668(int param_1)

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
    *(float *)((int)uVar5 + 0x10) = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x24) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x28) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x2c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x26765c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x26765c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x26765c);
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
  *(undefined4 *)(uVar1 + 0x40) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x44) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x48) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x4c) = 0x40200000;
  return;
}



//==== 00267798  ns=mobyupdate_unsorted  size=0x1fc
// sig: undefined UpdateMoby_1388(MobyInstance * moby)
// callers(0): 
// callees(8): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00112a38 mobyutil::MB_ToastMessage; 00112e18 mobyutil::MB_UnlockItem; 00167e60 update::mode_sceneInit; 00267348 mobyupdate_helpers::M1388_00267348; 00267668 mobyupdate_helpers::M1388_00267668; 00502578 fastfunc::FastWrapRot
// strings: 0096c165: 'None'

/* Moby 1388 */

void mobyupdate_unsorted::UpdateMoby_1388(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  MobyClass *pMVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964);
  pMVar3 = moby->pClass;
  (moby->rotation).z = (float)dVar5;
  bVar1 = moby->state;
  moby->scale = pMVar3->gScale * DAT_0079c8bc;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      mobyupdate_helpers::M1388_00267668(moby);
      if (CHAR_ARRAY_0096c165[0x22] == '\0') {
        fVar2 = (moby->pos).z;
        moby->state = '\x01';
        (moby->pos).z = fVar2 + 1.0;
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyupdate_helpers::M1388_00267348(moby);
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar4 * fVar4 + fVar2 * fVar2) < 3.0) {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        update::mode_sceneInit(5);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode != GAME_MODE_SCENE) {
      mobyutil::MB_ToastMessage(0x3aa3,0xffffffffffffffff);
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(0xc,0x267788);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
      g_toastMsgTimer =
           storeVectorElementWordIndexed
                     (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x5c80,0xa10000);
      mobyutil::MB_UnlockItem(0x22,1);
      memcard::memcard_Save(0,-1);
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00267994  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1446_00267994(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1446_00267994(void)

{
  DAT_0079c90c = 0x10000;
  return;
}



//==== 002679a8  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1446_002679a8(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1446_002679a8(int param_1)

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



//==== 00267af8  ns=mobyupdate_unsorted  size=0xf24
// sig: undefined UpdateMoby_{1389_1446}(MobyInstance * moby)
// callers(0): 
// callees(26): 000836ac hero::Hero_RevertToRatchet; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fe610 mobyutil::MB_SphericalToVector; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00106308 mobyutil::MB_SetZBoundsFromPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 0011ccc8 music::music_SetTransition; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None'

/* Moby 1389
   Moby 1446 */

void mobyupdate_unsorted::UpdateMoby__1389_1446_(MobyInstance *moby)

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
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  MobyInstance *pMVar18;
  ulonglong uVar15;
  int iVar19;
  undefined4 uVar20;
  longlong lVar16;
  longlong lVar17;
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
  uVar26 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar19 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar25[0x5e],1,&DAT_00a1bf80);
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
  cVar2 = g_heroType;
  if (*(int *)((int)pvVar9 + 0x14c) == -1) {
    return;
  }
  if (g_heroType != '\x02') {
    MobyInstance[*(int *)((int)pvVar9 + 0x14c)].collision = (ushort *)0x0;
    MobyInstance[*(int *)((int)pvVar9 + 0x14c)].modeBits =
         MobyInstance[*(int *)((int)pvVar9 + 0x14c)].modeBits | (UNK_40|DISABLED);
  }
  bVar1 = moby->state;
  if (bVar1 == 9) {
    moby->collision = (ushort *)0x0;
    moby->updateDistance = '\0';
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else {
    moby->collision = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    mobyutil::MB_SetZBoundsFromPos(moby);
    bVar1 = moby->state;
    cVar2 = g_heroType;
  }
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0xc) = 0x41a00000;
      FUN_004d3720(moby,uVar26);
      pMVar18 = MobyUpdateChainStart;
      if (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x280)] == -1) {
        if (g_SeenPlanets.Kalebo == 0) {
          moby->state = '\x03';
          for (; pMVar18 != (MobyInstance *)0x0; pMVar18 = (MobyInstance *)pMVar18->pChain) {
            if ((((uint)(byte)pMVar18->levelFlagIdx == *(uint *)((int)pvVar9 + 0x280)) &&
                (pMVar18 != moby)) && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
              mobyfunc::DeleteMoby(pMVar18);
            }
          }
        }
        else {
          moby->state = '\t';
        }
      }
    }
    else if (bVar1 < 2) {
      iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x27c));
      if ((iVar19 != 0) &&
         (((hero::g_heroStateType < 2 || (hero::g_heroStateType == 9)) &&
          (iVar19 = FUN_004d3870(moby,uVar26), iVar19 != 0)))) {
        mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x280));
        pMVar18 = MobyUpdateChainStart;
        moby->state = '\x02';
        moby->unk58 = 0.0;
        for (; pMVar18 != (MobyInstance *)0x0; pMVar18 = (MobyInstance *)pMVar18->pChain) {
          if ((((uint)(byte)pMVar18->levelFlagIdx == *(uint *)((int)pvVar9 + 0x280)) &&
              (pMVar18 != moby)) && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
            mobyfunc::DeleteMoby(pMVar18);
          }
        }
      }
    }
    else if (bVar1 < 3) {
      if (g_gameMode != GAME_MODE_SCENE) {
        sVar23 = *(short *)((int)pvVar9 + 4);
        moby->unk58 = 1.0;
        if (sVar23 == 0) {
          iVar19 = *(int *)((int)pvVar9 + 0x150);
          if (iVar19 != -1) {
            respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar19].pos,(Vec4 *)&Cuboids[iVar19].rot);
          }
          moby->state = '\x03';
        }
        else {
          moby->state = '\t';
        }
      }
    }
    else if (cVar2 == '\x02') {
      if (((*(int *)((int)pvVar9 + 0x158) != -1) &&
          (pMVar18 = MobyInstance + *(int *)((int)pvVar9 + 0x158), pMVar18 != (MobyInstance *)0x0))
         && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
        mobyfunc::DeleteMoby(pMVar18);
        *(undefined4 *)((int)pvVar9 + 0x158) = 0xffffffff;
      }
      iVar19 = mobyutil::MB_CountActiveMobysByGroup(*(undefined4 *)((int)pvVar9 + 0x144),0x40);
      if ((iVar19 == 0) &&
         (iVar19 = mobyutil::MB_CountActiveMobysByGroup(*(undefined4 *)((int)pvVar9 + 0x148),0x40),
         iVar19 == 0)) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        moby->state = '\x04';
        auVar36 = loadVectorLeftIndexed(in_LR,0x267a9c);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x15c,
                            uVar26);
        *(undefined4 *)((int)pvVar9 + 0x15cU & 0xfffffffc) = uVar20;
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      iVar19 = fastfunc::FastDecTimerS32(uVar26 + 0x15c);
      if (iVar19 != 0) {
        hero::Hero_RevertToRatchet();
        mobyutil::MB_SetAnimationNoBlend(MobyInstance + *(int *)((int)pvVar9 + 0x14c),0,0);
        *(undefined4 *)((int)pvVar9 + 0x140) = 1;
        *(undefined2 *)((int)pvVar9 + 0x36) = 1;
        *(undefined1 *)((int)pvVar9 + 8) = 1;
        mobyutil::MB_UnlockLevel(Kalebo);
        mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x284));
        music::music_SetTransition(0,5);
        iVar19 = *(int *)((int)pvVar9 + 0x154);
        if (iVar19 != -1) {
          hero::Hero_Warp(&Cuboids[iVar19].pos.x,&Cuboids[iVar19].rot.x,0,1);
          respawn::SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x154)].pos,
                     (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x154)].rot);
        }
        moby->state = '\x05';
      }
    }
    else if (bVar1 < 6) {
      update::mode_sceneInit(1);
      moby->state = '\x06';
    }
    else if (g_gameMode != GAME_MODE_SCENE) {
      update::PlayInfobotMovie(0x10);
      moby->state = '\a';
    }
  }
  else {
    if (bVar1 < 8) {
      if (g_gameMode != GAME_MODE_SCENE) {
        mobyutil::MB_ToastMessageByIndex(0x10);
        update::mode_sceneInit(2);
        moby->state = '\b';
      }
    }
    else if (8 < bVar1) goto LAB_0026817c;
    memcard::memcard_Save(0,-1);
    moby->state = '\t';
  }
LAB_0026817c:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  dVar35 = 0.019999999552965164;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 8.0) {
    fVar4 = hero::g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x11) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x140;
      lVar24 = uVar14 - 0x6c;
      lVar21 = uVar14 - 0x7c;
      lVar27 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1c) = fVar6;
      *(float *)(puVar10 + 0x1b) = fVar6;
      *(float *)((int)puVar10 + 0xdc) = fVar6;
      *(float *)((int)puVar10 + 0xd4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar7;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar6;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar6 * fVar6;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x7c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar19 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar3,fVar4);
    if (dVar28 < 1.5707963705062866) {
      if (SQRT(DAT_00969de8 * DAT_00969de8 +
               DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4) <= 0.01) {
        fastfunc::FastDecTimerS32(uVar26 + 0x274);
      }
      else {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(in_LR,0x267a9c);
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x274,
                            uVar26);
        *(undefined4 *)((int)pvVar9 + 0x274U & 0xfffffffc) = uVar20;
      }
      goto LAB_00268458;
    }
  }
  if (*(int *)((int)pvVar9 + 0x274) != 0) {
    *(undefined4 *)((int)pvVar9 + 0x274) = 0;
    *(float *)((int)pvVar9 + 0x260) = hero::g_heroCGPos;
    *(float *)((int)pvVar9 + 0x264) = DAT_00969db4;
    *(float *)((int)pvVar9 + 0x268) = DAT_00969db8;
    *(undefined4 *)((int)pvVar9 + 0x26c) = DAT_00969dbc;
  }
LAB_00268458:
  iVar19 = fastfunc::FastDecTimerS32(uVar26 + 0x278);
  if (iVar19 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x278) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x260));
    *(float *)((int)pvVar9 + 0x260) = *(float *)((int)pvVar9 + 0x260) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x264) = *(float *)((int)pvVar9 + 0x264) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x268) = *(float *)((int)pvVar9 + 0x268) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x274) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x260);
    fVar4 = *(float *)((int)pvVar9 + 0x264);
    fVar6 = *(float *)((int)pvVar9 + 0x268);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar3 = hero::g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar34 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar32 = (double)fVar4;
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)(puVar10 + 0x10) = fVar4;
  dVar31 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar16 = uVar14 - 0x140;
    lVar24 = uVar14 - 0x8c;
    lVar21 = uVar14 - 0x9c;
    lVar27 = 2;
    fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    *(float *)(puVar10 + 0x17) = fVar6;
    *(float *)((int)puVar10 + 0xbc) = fVar6;
    *(float *)((int)puVar10 + 0xb4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar7;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0x9c;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar16 = lVar17;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar16;
      iVar12 = (int)lVar24;
      lVar16 = lVar16 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar31;
  fVar3 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar3);
  *(float *)(puVar10 + 0xe) = fVar3;
  *(float *)(puVar10 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar15 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar16 = uVar14 - 0x140;
    lVar21 = uVar14 - 0xbc;
    lVar24 = uVar14 - 0xac;
    lVar27 = 2;
    fVar6 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)(puVar10 + 0x13) = fVar6;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar7;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar16 = 2;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
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
  *(float *)((int)pvVar9 + 0x1c8) = (float)(dVar28 * 0.5);
  *(float *)((int)pvVar9 + 0x248) = (float)(dVar28 * 0.5);
  *(float *)((int)pvVar9 + 0x1c4) = (float)(dVar31 * 1.25);
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0x1d0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x160,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0x1e0,0);
  return;
}



//==== 00268a1c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1446_00268a1c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1446_00268a1c(void)

{
  DAT_0079c97c = 0x10000;
  return;
}



//==== 00268a30  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1390(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1390 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1390(MobyInstance *moby)

{
  return moby;
}



//==== 00268a34  ns=mobyupdate_helpers  size=0x4
// sig: undefined M1392_00268a34(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1392_00268a34(void)

{
  return;
}



//==== 00268a48  ns=mobyupdate_helpers  size=0x148
// sig: undefined M1392_00268a48(void)
// callers(2): 00268ba0 mobyupdate_helpers::M1392_00268ba0; 00268d90 mobyupdate_helpers::M1392_00268d90
// callees(1): 00109c30 mobyutil::OrganicDelt

undefined8 mobyupdate_helpers::M1392_00268a48(double param_1,int param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float target;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_40 [2];
  
  dVar9 = (double)(param_3[1] - *(float *)(param_2 + 0x14));
  dVar8 = (double)(*param_3 - *(float *)(param_2 + 0x10));
  dVar6 = 0.0;
  local_40[0] = 0.0;
  target = SQRT((float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9)));
  dVar7 = (double)target;
  iVar1 = *(int *)(param_2 + 0x78);
  mobyutil::OrganicDelt
            (target,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,(float)param_1,local_40,0,
             (float *)(iVar1 + 0x324));
  dVar4 = (double)(float)((double)*(float *)(iVar1 + 0x324) / dVar7);
  dVar9 = (double)(float)(dVar9 * dVar4);
  dVar8 = (double)(float)(dVar8 * dVar4);
  dVar4 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar4 = dVar9;
  }
  dVar5 = dVar6;
  if (dVar6 - dVar7 < 0.0) {
    dVar5 = dVar8;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar4 = dVar9;
  }
  if (dVar7 - dVar6 < 0.0) {
    dVar5 = dVar8;
  }
  *(float *)(param_2 + 0x14) = (float)((double)*(float *)(param_2 + 0x14) + dVar4);
  *(float *)(param_2 + 0x10) = (float)((double)*(float *)(param_2 + 0x10) + dVar5);
  if ((0.10000000149011612 <= dVar7) ||
     (uVar2 = (int)*(uint *)(iVar1 + 0x324) >> 0x1f,
     0x3dcccccc < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x324)) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



//==== 00268ba0  ns=mobyupdate_helpers  size=0x1b4
// sig: undefined M1392_00268ba0(void)
// callers(0): 
// callees(2): 00110488 mobyutil::ClampVec3Magnitude; 00268a48 mobyupdate_helpers::M1392_00268a48

void mobyupdate_helpers::M1392_00268ba0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  Vec4 local_30;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(iVar1 + 0x2f4);
  local_30.x = g_heroPosition.x - Cuboids[iVar2].pos.x;
  local_30.y = g_heroPosition.y - Cuboids[iVar2].pos.y;
  local_30.w = g_heroPosition.w;
  local_30.z = 0.0;
  if (hero::g_heroStateType == 0xf) {
    mobyutil::ClampVec3Magnitude((double)DAT_0079ca28,&local_30);
  }
  else {
    mobyutil::ClampVec3Magnitude((double)DAT_0079ca24,&local_30);
  }
  iVar1 = *(int *)(iVar1 + 0x2f4);
  local_30.x = local_30.x + Cuboids[iVar1].pos.x;
  fVar3 = *(float *)(param_1 + 0x10) - local_30.x;
  local_30.y = local_30.y + Cuboids[iVar1].pos.y;
  fVar4 = *(float *)(param_1 + 0x14) - local_30.y;
  local_30.z = local_30.z + Cuboids[iVar1].pos.z;
  dVar6 = (double)(mobyutil::g_FrameTime * 20.0);
  dVar5 = (double)(mobyutil::g_FrameTime * 6.0 *
                   ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) - DAT_0079ca04) / DAT_0079ca04) +
                  DAT_00969e40);
  if ((dVar5 <= dVar6) && (dVar6 = dVar5, dVar5 < (double)(mobyutil::g_FrameTime * 5.0))) {
    dVar6 = (double)(mobyutil::g_FrameTime * 5.0);
  }
  M1392_00268a48(dVar6,param_1,&local_30);
  return;
}



//==== 00268d90  ns=mobyupdate_helpers  size=0x670
// sig: undefined M1392_00268d90(void)
// callers(0): 
// callees(3): 00268a48 mobyupdate_helpers::M1392_00268a48; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1392_00268d90(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  float fVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x110;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x24] = in_LR;
  puVar12[0x1f] = in_f29;
  puVar12[0x20] = in_f30;
  puVar12[0x21] = in_f31;
  puVar12[0x1e] = unaff_r31;
  puVar12[0x1c] = unaff_r29;
  puVar12[0x1d] = unaff_r30;
  iVar10 = *(int *)(param_1 + 0x78);
  iVar11 = *(int *)(iVar10 + 0x2f4);
  fVar2 = Cuboids[iVar11].pos.x;
  fVar3 = Cuboids[iVar11].pos.y;
  fVar4 = g_heroPosition.x - fVar2;
  fVar7 = g_heroPosition.y - fVar3;
  fVar8 = ABS(fVar4);
  fVar5 = ABS(fVar7);
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  *(float *)(puVar12 + 0x12) = fVar7;
  *(float *)((int)puVar12 + 0x94) = fVar8 - fVar5;
  dVar28 = 0.0;
  uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar7 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar7 = fVar5;
  }
  fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar14 = ABS(*(float *)(puVar12 + 0x12));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar14 = fVar8;
  }
  dVar26 = dVar28;
  if (0.0 < fVar7) {
    lVar17 = uVar16 - 0x100;
    lVar19 = uVar16 - 0x58;
    lVar20 = uVar16 - 0x48;
    lVar23 = 2;
    fVar7 = (fVar14 - fVar7) / (fVar14 + fVar7);
    fVar8 = fVar7 * fVar7;
    *(float *)((int)puVar12 + 0xc4) = fVar7;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)(puVar12 + 0x18) = fVar7;
    *(float *)(puVar12 + 0x17) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar8;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar7;
    *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar7 * fVar7;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar7 * fVar7;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x58;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar7 = *pfVar21;
      fVar8 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * fVar7;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar8;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar13 = (int)lVar20;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar11 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar9 + fVar5);
  }
  fVar4 = fVar4 - fVar2;
  fVar6 = fVar6 - fVar3;
  fVar7 = ABS(fVar4);
  fVar3 = ABS(fVar6);
  *(float *)(puVar12 + 0x10) = fVar4;
  *(float *)((int)puVar12 + 0x84) = fVar6;
  *(float *)(puVar12 + 0x11) = fVar7 - fVar3;
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar12 + 0x10));
  if (*(float *)(puVar12 + 0x11) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar4 = ABS(*(float *)((int)puVar12 + 0x84));
  if (*(float *)(puVar12 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  fVar7 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar27 = dVar28;
  if (0.0 < fVar2) {
    lVar17 = uVar16 - 0x100;
    lVar20 = uVar16 - 0x68;
    lVar19 = uVar16 - 0x78;
    lVar23 = 2;
    fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
    fVar4 = fVar2 * fVar2;
    *(float *)((int)puVar12 + 0xa4) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    fVar2 = fVar4 * fVar4;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar4;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2;
    *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar2 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar2 * fVar2;
      iVar11 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar20 = uVar16 - 0x78;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar20;
    do {
      fVar2 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar11 = (int)lVar18;
      iVar13 = (int)lVar20;
      lVar18 = lVar18 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar11 + 0x98)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar7);
  }
  dVar24 = (double)fastfunc::FastDiffRots(dVar27,dVar26);
  if (dVar28 <= dVar24) {
    uVar25 = fastfunc::FastWrapRot((float)dVar26,2.3561945);
  }
  else {
    uVar25 = fastfunc::FastWrapRot((float)dVar26,-2.3561945);
  }
  dVar26 = (double)fastfunc::FastDiffRots(uVar25,dVar27);
  dVar28 = 0.1745329201221466;
  if ((dVar26 <= 0.1745329201221466) && (dVar28 = dVar26, dVar26 < -0.1745329201221466)) {
    dVar28 = -0.1745329201221466;
  }
  dVar26 = (double)fastfunc::FastWrapRot((float)dVar28,(float)dVar27);
  pCVar15 = Cuboids;
  fVar3 = DAT_0079ca20;
  fVar4 = DAT_0079ca1c;
  fVar2 = (float)(dVar26 + 1.570796251296997);
  dVar28 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar28 = dVar26;
  }
  fVar7 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar7 = fVar2;
  }
  dVar27 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
    dVar27 = dVar28;
  }
  fVar5 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar6 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
    fVar6 = fVar7;
  }
  dVar28 = (double)(float)(dVar27 * dVar27);
  fVar9 = fVar6 * fVar6;
  fVar2 = fVar9 * fVar9 * fVar6;
  fVar7 = fVar9 * fVar2;
  fVar2 = fVar9 * fVar7 * 2.601887e-06 +
          fVar7 * -0.0001980741 + fVar2 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6;
  if (*(char *)(param_1 + 0x20) == '\x02') {
    fVar2 = fVar2 * DAT_0079ca1c;
    *(float *)(puVar12 + 0xe) = fVar2;
    fVar3 = fVar4;
  }
  else {
    fVar2 = fVar2 * DAT_0079ca20;
    *(float *)(puVar12 + 0xe) = fVar2;
  }
  dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
  iVar10 = *(int *)(iVar10 + 0x2f4);
  *(undefined4 *)(puVar12 + 0xf) = 0;
  dVar26 = (double)(float)(dVar28 * dVar24);
  bVar1 = hero::g_heroStateType == 0xf;
  fVar3 = ((float)(dVar28 * dVar26) * 2.601887e-06 +
          (float)(dVar26 * -0.0001980741071747616 +
                 (double)(float)(dVar24 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar28 * dVar27) *
                                                -0.16666656732559204 + dVar27)))) * fVar3;
  *(float *)((int)puVar12 + 0x74) = fVar3;
  *(float *)(puVar12 + 0xe) = fVar2 + pCVar15[iVar10].pos.x;
  *(float *)((int)puVar12 + 0x74) = fVar3 + pCVar15[iVar10].pos.y;
  *(float *)(puVar12 + 0xf) = pCVar15[iVar10].pos.z;
  if (bVar1) {
    fVar2 = 20.0;
  }
  else {
    fVar8 = fVar8 - g_heroPosition.y;
    fVar5 = fVar5 - g_heroPosition.x;
    fVar2 = SQRT(fVar5 * fVar5 + fVar8 * fVar8);
    fVar3 = DAT_0079ca10;
    if ((fVar2 <= DAT_0079ca10) && (fVar3 = fVar2, fVar2 < DAT_0079ca14)) {
      fVar3 = DAT_0079ca14;
    }
    fVar2 = (DAT_0079ca08 - DAT_0079ca0c) *
            (1.0 - (fVar3 - DAT_0079ca14) / (DAT_0079ca10 - DAT_0079ca14)) + DAT_0079ca0c;
  }
  M1392_00268a48((double)(mobyutil::g_FrameTime * fVar2),param_1,uVar16 - 0xa0);
  return;
}



//==== 00269420  ns=mobyupdate_helpers  size=0x36c
// sig: undefined M1392_00269420(void)
// callers(0): 
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 003bb4a8 FUN_003bb4a8; 003d5518 mobyupdate_helpers::M587_003d5518; 003d5544 mobyupdate_helpers::M587_003d5544

ulonglong mobyupdate_helpers::M1392_00269420(int param_1)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [40];
  
  puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0x348)];
  if (puVar7 == (ushort *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    dVar10 = 60.5;
    dVar11 = 0.5;
    dVar12 = 0.5235987901687622;
    uVar13 = 0x3fe921fb60000000;
    dVar14 = 0.3490658402442932;
    do {
      uVar1 = *puVar7;
      if (MobyInstance[uVar1 & 0x7fff].oClass == FLOATING_PLATFORM_024B) {
        iVar5 = M587_003d5518(MobyInstance + (uVar1 & 0x7fff));
        pMVar6 = MobyInstance + (uVar1 & 0x7fff);
        fVar2 = (pMVar6->pos).y - g_heroPosition.y;
        fVar3 = (pMVar6->pos).x - g_heroPosition.x;
        uVar4 = (LZCOUNT(-iVar5) << 0x3a) >> 0x3f & uVar4;
        if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) < DAT_0079c9f0) &&
           (iVar5 = M587_003d5544(pMVar6,(int)((double)animationSpeed * dVar10),
                                  (int)((double)animationSpeed *
                                       (double)(float)((double)(longlong)DAT_0079c9f4 + dVar11))),
           iVar5 != 0)) {
          uVar8 = mobyutil::MB_randRangeSigned(dVar12,uVar13);
          dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar14,(float)dVar12);
          FUN_003bb4a8(uVar8,-dVar9,local_c0,local_b0,local_a0);
        }
      }
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (-1 < (short)uVar1);
  }
  return uVar4;
}



//==== 00269790  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1392_00269790(void)
// callers(0): 
// callees(1): 000fc620 mobyutil::MB_randInt

int mobyupdate_helpers::M1392_00269790
              (int param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  byte in_cr6;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar11 [16];
  
  puVar3 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x30);
  puVar3[3] = in_vr31_32_3;
  puVar3[2] = in_vr31_32_2;
  puVar3[1] = in_vr31_32_1;
  *puVar3 = in_vr31_32_0;
  uVar1 = *(uint *)(param_1 + 0x78);
  puVar6 = &DAT_0026978c;
  iVar7 = 0;
  auVar11 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x30,0x26978c);
  iVar8 = *(int *)(uVar1 + 0x300);
  auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  do {
    if (99 < iVar7) {
      return iVar8;
    }
    lVar4 = mobyutil::MB_randInt(6,puVar6,param_3,param_4);
    param_4 = 0x30c;
    iVar5 = (int)lVar4;
    auVar9 = loadVectorLeftIndexed(0x2fc,(ulonglong)uVar1);
    auVar10 = loadVectorRightIndexed(0x30c,(ulonglong)uVar1);
    if (iVar5 == 5) {
      iVar8 = 0x10;
    }
    else if (iVar5 == 4) {
      iVar8 = 0xf;
    }
    else if (iVar5 == 3) {
      iVar8 = 0xe;
    }
    else if (iVar5 == 2) {
      iVar8 = 0xd;
    }
    else if (iVar5 == 1) {
      iVar8 = 0xc;
    }
    else if (iVar5 == 0) {
      iVar8 = 0xb;
    }
    param_3 = (ulonglong)*(uint *)(uVar1 + 0x2fc) * 2;
    puVar6 = (undefined *)
             (int)*(short *)((int)(lVar4 << 1) + 0x79c9a0 +
                            (int)((ulonglong)*(uint *)(uVar1 + 0x2fc) * 3) * 4);
    if ((iVar8 == 0xd) && (*(int *)(uVar1 + 0x300) == 0xd)) {
      puVar6 = (undefined *)0x0;
    }
    if (iVar8 == 0xd) {
      uVar2 = (int)*(uint *)(uVar1 + 0x340) >> 0x1f;
      param_4 = (longlong)(int)uVar2;
      param_3 = (ulonglong)(uVar2 >> 1 ^ *(uint *)(uVar1 + 0x340)) - param_4;
      if (0x41c7ffff < (int)param_3) {
        auVar9 = vectorConvertFromSignedFixedPointWord(auVar9 | auVar10,0);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11);
        if ((bool)(in_cr6 >> 1 & 1)) {
          puVar6 = (undefined *)0x0;
        }
      }
    }
    if ((iVar8 == 0x10) && (*(int *)(uVar1 + 0x314) != 0)) {
      puVar6 = (undefined *)0x0;
    }
    iVar7 = iVar7 + 1;
  } while (puVar6 == (undefined *)0x0);
  return iVar8;
}



//==== 00269938  ns=mobyupdate_helpers  size=0x208
// sig: undefined M1392_00269938(void)
// callers(0): 
// callees(2): 00109c30 mobyutil::OrganicDelt; 004fff60 fastfunc::FastDecTimerS32

double mobyupdate_helpers::M1392_00269938(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  Cuboid *unused;
  double dVar7;
  float fVar8;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(camera::ImportCameras + *(int *)(iVar2 + 0x1e4) * 0x20 + 0x1c);
  fastfunc::FastDecTimerS32(iVar2 + 0x310);
  unused = (Cuboid *)&DAT_007a0000;
  cVar1 = *(char *)(param_1 + 0x20);
  dVar7 = (double)DAT_0079ca40;
  fVar8 = DAT_0079ca3c;
  if ((cVar1 == '\x10') || (cVar1 == '\r')) {
    if ((((hero::g_heroStateType == 0xf) || (g_heroState == GRINDRAIL_DAMAGE)) &&
        (*(int *)(iVar2 + 0x314) == 0)) &&
       ((uVar4 = (int)*(uint *)(iVar2 + 0x340) >> 0x1f,
        (int)((uVar4 >> 1 ^ *(uint *)(iVar2 + 0x340)) - uVar4) < 0x41c80001 &&
        (*(int *)(iVar2 + 0x310) == 0)))) {
      unused = (Cuboid *)&DAT_007a0000;
      dVar7 = (double)DAT_0079ca48;
      fVar8 = DAT_0079ca44;
    }
    else {
      unused = Cuboids + *(int *)(iVar2 + 0x2f4);
      fVar5 = g_heroPosition.y - (unused->pos).y;
      fVar6 = g_heroPosition.x - (unused->pos).x;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 28.0) {
        unused = (Cuboid *)&DAT_007a0000;
        dVar7 = (double)DAT_0079ca50;
        fVar8 = DAT_0079ca4c;
      }
    }
  }
  else if ((cVar1 == '\a') || (cVar1 == '\x05')) {
    unused = (Cuboid *)&DAT_007a0000;
    dVar7 = (double)DAT_0079ca58;
    fVar8 = DAT_0079ca54;
  }
  mobyutil::OrganicDelt
            (fVar8,DAT_0079ca38 * DAT_0071f418,DAT_0079ca38 * DAT_0071f418,
             DAT_0079ca34 * mobyutil::g_FrameTime,(float *)(iVar3 + 0x34),(int)unused,
             (float *)(iVar2 + 0x328));
  fVar8 = mobyutil::OrganicDelt
                    ((float)dVar7,DAT_0079ca38 * DAT_0071f418,DAT_0079ca38 * DAT_0071f418,
                     DAT_0079ca34 * mobyutil::g_FrameTime,(float *)(iVar3 + 0x38),(int)unused,
                     (float *)(iVar2 + 0x32c));
  return (double)fVar8;
}



//==== 00269b40  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1392_00269b40(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1392_00269b40(void)

{
  DAT_0079caa8 = 0x10000;
  return;
}



//==== 00269b60  ns=mobyupdate_unsorted  size=0x1a4
// sig: undefined UpdateMoby_1392(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d720 RegisterFuncForMoby; 00109af0 mobyutil::Delt; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 1392 */

void mobyupdate_unsorted::UpdateMoby_1392(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    piVar2[3] = 0x3f800000;
  }
  else if (bVar1 < 2) {
    RegisterFuncForMoby(&PTR_M1394_00269d18_0070a2e0,moby);
    iVar3 = sound::IsMobyPlayingSound(moby,piVar2[1]);
    if (iVar3 == 0) {
      iVar3 = sound::PlayMobySound(0,4,moby);
      piVar2[1] = iVar3;
    }
    iVar3 = *piVar2;
    if (((iVar3 != -1) && (MobyInstance[iVar3].oClass == TRESSPASSER_PAD)) &&
       (2 < MobyInstance[iVar3].state)) {
      moby->state = '\x02';
      iVar3 = piVar2[1];
      moby->collision = (ushort *)0x0;
      iVar3 = sound::IsMobyPlayingSound(moby,iVar3);
      if (iVar3 != 0) {
        iVar3 = piVar2[1];
        if (((iVar3 != -1) && (sound::g_SoundChannels[iVar3].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar3].state != '\0')) {
          sound::sound_Kill(iVar3);
        }
        piVar2[1] = -1;
      }
    }
  }
  else if (bVar1 < 3) {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)(piVar2 + 3));
  }
  return;
}



//==== 00269d18  ns=mobyupdate_helpers  size=0x448
// sig: undefined M1394_00269d18(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1394_00269d18(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar13;
  ulonglong uVar11;
  undefined4 uVar14;
  longlong lVar12;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar22;
  ulonglong unaff_r29;
  longlong lVar23;
  ulonglong unaff_r30;
  int iVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar31 [16];
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar23 = uVar9 - 0x370;
  puVar4 = (ulonglong *)lVar23;
  *puVar4 = uVar9;
  puVar4[0x70] = in_LR;
  puVar4[0x6b] = in_f29;
  puVar4[0x6c] = in_f30;
  puVar4[0x6d] = in_f31;
  lVar7 = uVar9 - 0x50;
  puVar8 = (undefined4 *)lVar7;
  puVar8[3] = in_vr31_32_3;
  puVar8[2] = in_vr31_32_2;
  puVar8[1] = in_vr31_32_1;
  *puVar8 = in_vr31_32_0;
  puVar4[0x6a] = unaff_r31;
  puVar4[0x68] = unaff_r29;
  puVar4[0x69] = unaff_r30;
  puVar4[0x67] = unaff_r28;
  puVar4[0x66] = unaff_r27;
  iVar24 = *(int *)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar9 - 0x300,param_1 + 0xc0);
  uVar14 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar4 + 0xa4) = uVar14;
  *(undefined4 *)(puVar4 + 0x15) = uVar2;
  *(undefined4 *)((int)puVar4 + 0xac) = 0x3f800000;
  fVar1 = DAT_0079cae8 * mobyutil::g_FrameTime + *(float *)(iVar24 + 8);
  dVar25 = (double)*(float *)(iVar24 + 0xc);
  *(float *)(iVar24 + 8) = fVar1;
  if (1.0 < fVar1) {
    *(float *)(iVar24 + 8) = fVar1 - 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  dVar27 = 0.25;
  auVar30 = loadVectorLeftIndexed(8,0x269d04);
  auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  dVar26 = (double)((48.0 - SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1)) * 0.25);
  if ((dVar26 <= dVar25) && (dVar25 = dVar26, dVar26 < 0.0)) {
    dVar25 = 0.0;
  }
  iVar22 = 0;
  auVar31 = ZEXT416(0);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  do {
    uVar10 = draw::GetEffectTex(0xe);
    iVar13 = (int)lVar23;
    *(undefined8 *)(iVar13 + 0x128) = uVar10;
    uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    *(undefined8 *)(iVar13 + 0x130) = uVar10;
    uVar10 = FUN_00502f08(0,0,0,0,0,0);
    *(undefined8 *)(iVar13 + 0x120) = uVar10;
    uVar10 = idol_draw::PackCmd(DAT_00fa4348,DAT_0079caec,DAT_00fa434c,DAT_0079caf0,0x80);
    *(undefined8 *)(iVar13 + 0x138) = uVar10;
    auVar29 = vectorConvertFromSignedFixedPointWord(auVar31,0);
    puVar4[0x5e] = (longlong)iVar22;
    dVar26 = (double)(float)((double)(longlong)puVar4[0x5e] * dVar27 +
                            (double)*(float *)(iVar24 + 8));
    iVar13 = fastfunc::FastDoubleToInt(dVar26);
    puVar4[0x5e] = (longlong)iVar13;
    dVar26 = (double)(float)(dVar26 - (double)(longlong)puVar4[0x5e]);
    uVar11 = fastfunc::FastLerpColor(dVar26,DAT_0079cad0,DAT_0079cad4);
    uVar14 = fastfunc::FastLerpColor(dVar25,uVar11 & 0xffffff);
    uVar21 = 0;
    lVar20 = 0x79caf4;
    puVar8 = &DAT_0079cb20;
    uVar11 = lVar23 + 0xb0U & 0xffffffff;
    puVar19 = &DAT_0079caf8;
    lVar12 = lVar23 + 0x100;
    lVar15 = lVar23;
    lVar17 = lVar23;
    lVar18 = lVar23;
    do {
      auVar28 = loadVectorLeftIndexed(lVar7,lVar20);
      uVar2 = *puVar19;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar28);
      auVar28 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar12);
      *(undefined4 *)lVar12 = uVar3;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar2;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      puVar16 = (undefined4 *)uVar11;
      *puVar16 = *puVar8;
      puVar16[1] = puVar8[1];
      puVar16[2] = puVar8[2];
      puVar16[3] = puVar8[3];
      iVar13 = (int)lVar15;
      if ((uVar21 & 1) == 0) {
        fVar1 = -(float)((double)DAT_0079cadc * dVar26 - (double)*(float *)(iVar13 + 0xb8));
      }
      else {
        fVar1 = (float)((double)DAT_0079cadc * dVar26 + (double)*(float *)(iVar13 + 0xb8));
      }
      uVar21 = uVar21 + 1;
      *(float *)(iVar13 + 0xb8) = fVar1;
      uVar11 = uVar11 + 0x10;
      lVar20 = lVar20 + 8;
      lVar12 = lVar12 + 8;
      lVar18 = lVar18 + 8;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      lVar15 = lVar15 + 0x10;
      puVar8 = puVar8 + 4;
    } while ((int)uVar21 < 4);
    iVar22 = iVar22 + 1;
    lVar23 = lVar23 + 0x90;
    auVar29._0_4_ = auVar31._0_4_ + 1;
    auVar29._8_8_ = auVar31._8_8_;
    auVar29._4_4_ = auVar31._4_4_ + 1;
    auVar28._0_8_ = auVar29._0_8_;
    auVar28._12_4_ = auVar31._12_4_;
    auVar28._8_4_ = auVar31._8_4_ + 1;
    auVar31._0_12_ = auVar28._0_12_;
    auVar31._12_4_ = auVar28._12_4_ + 1;
  } while (iVar22 < 4);
  iVar24 = 0;
  do {
    uVar14 = EffectTexHeaders;
    lVar23 = uVar9 - 0x300;
    *(float *)(puVar4 + 0x15) = *(float *)(puVar4 + 0x15) + DAT_0079cad8;
    draw::FastDrawQuad(uVar9 - 0x2c0,lVar23,0,uVar14,9);
    draw::FastDrawQuad(uVar9 - 0x230,lVar23,0,EffectTexHeaders,9);
    draw::FastDrawQuad(uVar9 - 0x1a0,lVar23,0,EffectTexHeaders,9);
    draw::FastDrawQuad(uVar9 - 0x110,lVar23,0,EffectTexHeaders,9);
    iVar24 = iVar24 + 1;
  } while (iVar24 < 3);
  return;
}



//==== 0026a168  ns=mobyupdate_unsorted  size=0xe8
// sig: undefined UpdateMoby_1394(MobyInstance * moby)
// callers(0): 
// callees(3): 00229438 FUN_00229438; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1394 */

void mobyupdate_unsorted::UpdateMoby_1394(MobyInstance *moby)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  
  puVar1 = (undefined4 *)moby->pVar;
  dVar4 = 60.0;
  if (moby->state == 0) {
    uVar2 = fastfunc::FastDoubleToInt((double)(animationSpeed * (float)puVar1[1] * 60.0));
    *puVar1 = uVar2;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if ((moby->state < 2) && (iVar3 = fastfunc::FastDecTimerS32(puVar1), iVar3 != 0)) {
    uVar2 = fastfunc::FastDoubleToInt
                      ((double)(animationSpeed * (float)((double)DAT_0079cb60 * dVar4)));
    *puVar1 = uVar2;
    FUN_00229438((longlong)(int)moby,(longlong)(int)moby + 0x10);
  }
  return;
}



//==== 0026a268  ns=mobyupdate_unsorted  size=0x5e8
// sig: undefined UpdateMoby_1395(MobyInstance * moby)
// callers(0): 
// callees(9): 00103ab0 mobyutil::MB_LerpRot; 001099ec mobyutil::Lerp; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 0026a854 FUN_0026a854; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Moby 1395 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1395(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  MobyInstance *pMVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  undefined4 *puVar13;
  uint uVar14;
  longlong lVar11;
  int iVar15;
  uint uVar16;
  ulonglong uVar12;
  short sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  
  bVar1 = moby->state;
  puVar13 = (undefined4 *)(uint)bVar1;
  puVar5 = (uint *)moby->pVar;
  uVar20 = ZEXT48(puVar5);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*puVar5 == 0) {
        uVar14 = FUN_0026a854(moby);
        fVar29 = (moby->transform).v0.x;
        fVar2 = (moby->pos).x;
        *puVar5 = uVar14;
        fVar10 = DAT_0079cb64;
        fVar3 = (moby->transform).v0.y;
        fVar4 = (moby->transform).v0.z;
        *(float *)(uVar14 + 0x10) = fVar29 * DAT_0079cb64 + fVar2;
        *(float *)(uVar14 + 0x14) = fVar3 * fVar10 + (moby->pos).y;
        *(float *)(uVar14 + 0x18) = fVar4 * fVar10 + (moby->pos).z;
        *(f32 *)(uVar14 + 0x1c) = (moby->pos).w;
      }
      iVar15 = 0;
      auVar22 = ZEXT416(0);
      auVar26 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      do {
        fVar29 = DAT_0079cb64;
        iVar9 = (int)uVar20;
        if (*(int *)(iVar9 + 4) == 0) {
          fVar2 = (moby->pos).x;
          pMVar6 = MobyInstance + *(int *)(iVar9 + 0x28);
          fVar10 = (moby->transform).v0.x * DAT_0079cb64;
          fVar3 = (moby->transform).v0.y;
          auVar22 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          fVar4 = (moby->transform).v0.z;
          *(MobyInstance **)(iVar9 + 4) = pMVar6;
          (pMVar6->pos).x = fVar10 + fVar2;
          (pMVar6->pos).y = fVar3 * fVar29 + (moby->pos).y;
          (pMVar6->pos).z = fVar4 * fVar29 + (moby->pos).z;
          (pMVar6->pos).w = (moby->pos).w;
          auVar23 = loadVectorLeftIndexed(0xffffffffffffcb68,0x7a0000);
          auVar24 = loadVectorLeftIndexed(0x4350,0xfa0000);
          uVar14 = *(uint *)(iVar9 + 4);
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar22,auVar24);
          auVar23 = loadVectorLeftIndexed(0x18,(ulonglong)uVar14);
          auVar22 = vectorAddFloatingPoint(auVar22,auVar23);
          auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x18,
                             (ulonglong)uVar14);
          *(undefined4 *)(uVar14 + 0x18 & 0xfffffffc) = uVar8;
        }
        iVar15 = iVar15 + 1;
        uVar20 = uVar20 + 4;
        auVar27._0_4_ = auVar26._0_4_ + 1;
        auVar27._8_8_ = auVar26._8_8_;
        auVar27._4_4_ = auVar26._4_4_ + 1;
        auVar25._0_8_ = auVar27._0_8_;
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_4_ = auVar26._8_4_ + 1;
        auVar26._0_12_ = auVar25._0_12_;
        auVar26._12_4_ = auVar25._12_4_ + 1;
      } while (iVar15 < 6);
      puVar13 = (undefined4 *)0xffffffff;
      puVar5[0x10] = 0xffffffff;
      if (*puVar5 != 0) {
        puVar13 = (undefined4 *)0x1;
        moby->state = '\x01';
      }
    }
    else {
      puVar13 = (undefined4 *)(uint)MobyInstance[puVar5[7]].state;
      if (MobyInstance[puVar5[7]].state == 2) {
        moby->state = '\x02';
        lVar11 = (longlong)DAT_0079cb70;
        auVar22 = ZEXT416(0xffffffff);
        auVar26 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
        *(undefined2 *)((int)puVar5 + 0x22) = 5;
        auVar22 = loadVectorLeftIndexed(0xffffffffffffcb70,0x7a0000);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
        auVar22 = loadVectorLeftIndexed(in_LR,0x26a250);
        auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = vectorAddFloatingPoint
                            (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
        auVar23 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar22,auVar23);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        fVar29 = animationSpeed * ((float)lVar11 + 0.5);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar22,0x20,uVar20);
        *(undefined2 *)(puVar5 + 8) = uVar7;
        dVar21 = (double)fastfunc::FastIntToDouble((short)(int)fVar29);
        pMVar6 = *(MobyInstance **)
                  ((int)puVar5 + (int)((longlong)*(short *)((int)puVar5 + 0x22) << 2) + 4);
        puVar5[9] = (uint)(float)(1.0 / dVar21);
        puVar13 = (undefined4 *)sound::sound_MobyPlay_oClass(0,0,pMVar6,0x575);
      }
    }
  }
  else if (bVar1 < 3) {
    iVar15 = *(int *)((int)puVar5 + (int)((longlong)*(short *)((int)puVar5 + 0x22) << 2) + 4);
    fastfunc::FastDecTimerS16(uVar20 + 0x20);
    dVar21 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(puVar5 + 8));
    dVar21 = (double)mobyutil::MB_LerpRot
                               (0x3ff921fb60000000,0,
                                (double)(float)(dVar21 * (double)(float)puVar5[9]));
    *(float *)(iVar15 + 0x44) = (float)dVar21;
    puVar13 = (undefined4 *)(uint)*(ushort *)(puVar5 + 8);
    if (*(ushort *)(puVar5 + 8) == 0) {
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0xffffffffffffcb70,0x7a0000);
      auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar22 = loadVectorLeftIndexed(in_LR,0x26a250);
      auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      sVar17 = *(short *)((int)puVar5 + 0x22) + -1;
      auVar23 = vectorAddFloatingPoint(auVar23,auVar22);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar26,auVar23,auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = vectorSplatHalfWord(auVar23,1);
      uVar7 = storeVectorElementHalfWordIndexed(auVar23,0x20,uVar20);
      *(undefined2 *)(puVar5 + 8) = uVar7;
      *(short *)((int)puVar5 + 0x22) = sVar17;
      if (sVar17 < 0) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        moby->state = '\x03';
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0xffffffffffffcb74,0x7a0000);
        auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar22 = vectorAddFloatingPoint(auVar23,auVar22);
        auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar22,auVar24);
        auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
        fVar29 = animationSpeed * ((float)(longlong)DAT_0079cb74 + 0.5);
        auVar22 = vectorSplatHalfWord(auVar22,1);
        uVar7 = storeVectorElementHalfWordIndexed(auVar22,0x20,uVar20);
        *(undefined2 *)(puVar5 + 8) = uVar7;
        dVar21 = (double)fastfunc::FastIntToDouble((short)(int)fVar29);
        puVar13 = &DAT_0026a250;
        puVar5[9] = (uint)(float)(1.0 / dVar21);
      }
      else {
        puVar13 = (undefined4 *)
                  sound::sound_MobyPlay_oClass
                            (0,0,*(MobyInstance **)((int)puVar5 + (int)((longlong)sVar17 << 2) + 4),
                             0x575);
      }
    }
  }
  else if (bVar1 < 4) {
    uVar14 = *puVar5;
    uVar19 = (ulonglong)uVar14;
    iVar15 = sound::IsMobyPlayingSound(moby,puVar5[0x10]);
    if (iVar15 == 0) {
      uVar16 = sound::PlayMobySound(0,4,moby);
      puVar5[0x10] = uVar16;
    }
    fastfunc::FastDecTimerS16(uVar20 + 0x20);
    dVar21 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(puVar5 + 8));
    fVar29 = mobyutil::Lerp(DAT_0079cb6c * 0.017453292,0.0,
                            (float)(dVar21 * (double)(float)puVar5[9]));
    *(float *)(uVar14 + 0x44) = fVar29;
    auVar22 = ZEXT416(0);
    auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    lVar11 = 6;
    uVar12 = uVar20;
    do {
      auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar24 = loadVectorLeftIndexed(0xffffffffffffcb68,0x7a0000);
      auVar26 = loadVectorLeftIndexed(0x4350,0xfa0000);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
      auVar23 = loadVectorLeftIndexed(0xe0,uVar19);
      auVar24 = loadVectorLeftIndexed(0x10,uVar19);
      uVar16 = *(uint *)((int)uVar12 + 4);
      uVar18 = (ulonglong)uVar16;
      uVar12 = uVar12 + 4;
      auVar27 = loadVectorLeftIndexed(0xe4,uVar19);
      auVar28 = loadVectorLeftIndexed(0xe8,uVar19);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar24);
      auVar23._0_4_ = auVar22._0_4_ + 1;
      auVar23._8_8_ = auVar22._8_8_;
      auVar23._4_4_ = auVar22._4_4_ + 1;
      auVar24._0_8_ = auVar23._0_8_;
      auVar24._12_4_ = auVar22._12_4_;
      auVar24._8_4_ = auVar22._8_4_ + 1;
      auVar22._0_12_ = auVar24._0_12_;
      auVar22._12_4_ = auVar24._12_4_ + 1;
      auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x10,uVar18);
      *(undefined4 *)(uVar16 + 0x10 & 0xfffffffc) = uVar8;
      auVar23 = loadVectorLeftIndexed(0x14,uVar19);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar27,auVar26,auVar23);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x14,uVar18);
      *(undefined4 *)(uVar16 + 0x14 & 0xfffffffc) = uVar8;
      auVar23 = loadVectorLeftIndexed(0x18,uVar19);
      auVar23 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar23);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x18,uVar18);
      *(undefined4 *)(uVar16 + 0x18 & 0xfffffffc) = uVar8;
      *(undefined4 *)(uVar16 + 0x1c) = *(undefined4 *)(uVar14 + 0x1c);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar13 = (undefined4 *)(uint)*(ushort *)(puVar5 + 8);
    if (*(ushort *)(puVar5 + 8) == 0) {
      uVar14 = puVar5[0x10];
      if (((uVar14 != 0xffffffff) && (sound::g_SoundChannels[uVar14].pMoby == moby)) &&
         (sound::g_SoundChannels[uVar14].state != '\0')) {
        sound::sound_Kill(uVar14);
      }
      puVar13 = (undefined4 *)0x2;
      puVar5[0x10] = 0xffffffff;
      moby->state = '\x04';
      iVar15 = 0;
      do {
        iVar9 = (int)uVar20;
        iVar15 = iVar15 + 1;
        uVar20 = uVar20 + 4;
        *(undefined1 *)(*(int *)(iVar9 + 4) + 0x20) = 2;
      } while (iVar15 < 6);
    }
  }
  return puVar13;
}



//==== 0026a850  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1396(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1396 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1396(MobyInstance *moby)

{
  return moby;
}



//==== 0026a854  ns=Global  size=0xb4
// sig: undefined FUN_0026a854(void)
// callers(1): 0026a268 mobyupdate_unsorted::UpdateMoby_1395
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_0026a854(int param_1)

{
  f32 fVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = mobyfunc::CreateMoby(PLANETBUSTER_MAXIMUS_PART_0500|RED_SHIP_2);
  if (pMVar2 != (MobyInstance *)0x0) {
    (pMVar2->pos).x = *(f32 *)(param_1 + 0x10);
    (pMVar2->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar2->pos).z = *(f32 *)(param_1 + 0x18);
    (pMVar2->pos).w = *(f32 *)(param_1 + 0x1c);
    (pMVar2->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar2->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    pMVar2->drawDistance = 0x40;
    (pMVar2->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x4c);
    pMVar2->updateDistance = '@';
    (pMVar2->rotation).w = fVar1;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    mobyfunc::UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}



//==== 0026a908  ns=mobyupdate_unsorted  size=0x64
// sig: undefined UpdateMoby_1397(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1397 */

void mobyupdate_unsorted::UpdateMoby_1397(MobyInstance *moby)

{
  void *pvVar1;
  
  if (moby->state == '\0') {
    pvVar1 = moby->pVar;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0;
    *(undefined2 *)((int)pvVar1 + 0x24) = 0;
    *(undefined1 *)((int)pvVar1 + 0x28) = 4;
    *(undefined2 *)((int)pvVar1 + 0x3e) = 0;
    moby->state = '\x01';
  }
  else if (moby->state == '\x02') {
    *(undefined2 *)((int)moby->pVar + 0x3e) = 5;
    moby->state = '\x03';
  }
  return;
}



//==== 0026a978  ns=mobyupdate_unsorted  size=0x410
// sig: undefined UpdateMoby_{1399_1451_1899}(MobyInstance * moby)
// callers(0): 
// callees(10): 000836ac hero::Hero_RevertToRatchet; 00086b60 hero::SetHeroType; 000a0c38 hero::Hero_Warp; 000efb38 mobyfunc::DeleteMoby; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000ffb70 mobyutil::GetGroundZ; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011ccc8 music::music_SetTransition; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit

/* Moby 1399
   Moby 1451
   Moby 1899 */

void mobyupdate_unsorted::UpdateMoby__1399_1451_1899_(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  int iVar4;
  u16 *puVar5;
  MobyInstance *pMVar6;
  u8 uVar7;
  double dVar8;
  Vec4 local_30;
  
  pMVar6 = MobyInstance;
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    iVar4 = *(int *)((int)pvVar3 + 0x60);
    if (iVar4 == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      uVar7 = '\x01';
      MVar2 = MobyInstance[iVar4].modeBits;
      MobyInstance[iVar4].collision = (ushort *)0x0;
      pMVar6[iVar4].enabled = '\0';
      pMVar6[iVar4].modeBits = MVar2 | DISABLED;
      if ((Level == Veldin2) && (g_LevelFlags[0x12][(byte)moby->levelFlagIdx] == -1)) {
        uVar7 = '\x03';
      }
      moby->state = uVar7;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0xffffffff;
    }
  }
  else if (bVar1 < 2) {
    moby->state = '\x02';
  }
  else if (bVar1 < 3) {
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) &&
        (g_gameMode != GAME_MODE_SCENE)) && (g_heroState != VISIBOMB_CONTROL)) {
      if (g_heroType == '\0') {
        mobyutil::MB_ShowPersistentMessage(4,0x3aa4);
      }
      else if ((g_heroType == '\x02') && (Level != Veldin2)) {
        mobyutil::MB_ShowPersistentMessage(4,0x3aa5);
      }
      if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (mobyutil::g_HelpMsgOwner == 4)) {
        if ((g_heroType == '\x02') && (Level == Quartu)) {
          pMVar6 = MobyInstance + *(int *)((int)pvVar3 + 0x60);
          pMVar6->collision = (ushort *)0x0;
          pMVar6->enabled = '\0';
          pMVar6->modeBits = pMVar6->modeBits | DISABLED;
          hero::Hero_RevertToRatchet();
          mobyutil::MB_SetAnimationNoBlend(pMVar6,0,0);
          if (Level == Quartu) {
            update::mode_sceneInit(9);
            music::music_SetTransition(0,5);
          }
        }
        else if (g_heroType == '\0') {
          local_30.x = (moby->pos).x;
          local_30.y = (moby->pos).y;
          local_30.z = (moby->pos).z;
          pMVar6 = MobyInstance + *(int *)((int)pvVar3 + 0x60);
          local_30.w = (moby->pos).w;
          dVar8 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_30,0);
          local_30.z = (float)(dVar8 + 0.10000000149011612);
          if (Level == Quartu) {
            respawn::SetSpawnPoint(&local_30,(Vec4 *)&moby->rotation);
          }
          hero::Hero_Warp(&local_30.x,&(moby->rotation).x,0,1);
          puVar5 = pMVar6->pClass->collision;
          pMVar6->enabled = '\x01';
          pMVar6->collision = puVar5;
          pMVar6->modeBits =
               pMVar6->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          hero::SetHeroType(2,0x5a,pMVar6);
          if (Level == Quartu) {
            update::mode_sceneInit(8);
            DAT_0096b9e0 = g_heroPosition.x;
            DAT_0096b9e4 = g_heroPosition.y;
            DAT_0096b9e8 = g_heroPosition.z;
            DAT_0096b9ec = g_heroPosition.w;
            DAT_0096b9f0 = g_heroRotation.x;
            DAT_0096b9f4 = g_heroRotation.y;
            DAT_0096b9f8 = g_heroRotation.z;
            DAT_0096b9fc = g_heroRotation.w;
            music::music_SetTransition(2,4);
          }
          else if (Level == Veldin2) {
            update::mode_sceneInit(6);
            DAT_0096b9e0 = g_heroPosition.x;
            DAT_0096b9e4 = g_heroPosition.y;
            DAT_0096b9e8 = g_heroPosition.z;
            DAT_0096b9ec = g_heroPosition.w;
            DAT_0096b9f0 = g_heroRotation.x;
            DAT_0096b9f4 = g_heroRotation.y;
            DAT_0096b9f8 = g_heroRotation.z;
            DAT_0096b9fc = g_heroRotation.w;
            moby->state = '\x03';
          }
        }
      }
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x68) = 0xffffffff;
    }
  }
  return;
}



//==== 0026ad88  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1899_0026ad88(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1899_0026ad88(void)

{
  DAT_0079cbc4 = 0x10000;
  return;
}



//==== 0026adc8  ns=mobyupdate_helpers  size=0x174
// sig: undefined M1400_0026adc8(void)
// callers(1): 0026af90 mobyupdate_unsorted::UpdateMoby_1400
// callees(1): 000fcbe8 mobyutil::MB_randRangeFloat

void mobyupdate_helpers::M1400_0026adc8(int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double in_f27;
  double dVar6;
  double dVar7;
  
  fVar1 = 2.5;
  fVar2 = 3.0;
  dVar5 = 2.0;
  dVar4 = 20.0;
  if (param_1 == 0) {
    fVar1 = 5.0;
    fVar2 = 8.0;
    dVar5 = 4.0;
    dVar4 = 2.0;
  }
  dVar7 = (double)fVar1;
  dVar6 = (double)DAT_0079cbf4;
  if ((double)DAT_0079cbf4 - 0.0 < 0.0) {
    dVar6 = dVar5;
  }
  dVar5 = (double)DAT_0079cbf8;
  if ((double)DAT_0079cbf8 - 0.0 < 0.0) {
    dVar5 = (double)fVar2;
  }
  dVar3 = (double)mobyutil::MB_randRangeFloat
                            (-(float)((double)mobyutil::g_FrameTime * dVar7),
                             (float)((double)mobyutil::g_FrameTime * dVar7));
  DAT_00fa4360 = (float)dVar3;
  dVar3 = (double)mobyutil::MB_randRangeFloat
                            (-(float)((double)mobyutil::g_FrameTime * dVar7),
                             (float)((double)mobyutil::g_FrameTime * dVar7));
  DAT_00fa4364 = (float)dVar3;
  dVar4 = (double)mobyutil::MB_randRangeFloat
                            ((float)((double)animationSpeed * dVar4),
                             (float)((double)animationSpeed * 10.0));
  fVar1 = (float)((double)mobyutil::g_FrameTime * dVar7);
  DAT_00fa4370 = (float)dVar4;
  DAT_00fa4374 = (int)((double)(SQRT(DAT_00fa4360 * DAT_00fa4360 + DAT_00fa4364 * DAT_00fa4364) /
                               SQRT((float)(in_f27 * in_f27 +
                                           (double)(fVar1 * fVar1 + fVar1 * fVar1)))) *
                       (double)(float)(dVar5 - dVar6) + dVar6);
  return;
}



//==== 0026af90  ns=mobyupdate_unsorted  size=0xc40
// sig: undefined UpdateMoby_1400(MobyInstance * moby)
// callers(0): 
// callees(9): 000fcbe8 mobyutil::MB_randRangeFloat; 00117238 mobyutil::MB_AddVectorSphere; 00118d60 mobyutil::MB_SampleByteGrid; 00118e38 mobyutil::MB_SpawnGridParticles; 0011ffb0 partupd::SpawnPart_0; 00134540 partupd::SpawnPart_73; 0026adc8 mobyupdate_helpers::M1400_0026adc8; 00500108 fastfunc::FastDecTimerF32; 00502a64 fastfunc::FastVecSub

/* Moby 1400 */

void mobyupdate_unsorted::UpdateMoby_1400(MobyInstance *moby)

{
  uint uVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  char acVar5 [4];
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
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
  undefined1 local_140 [16];
  float local_130;
  float local_12c;
  float local_128;
  char local_124 [4];
  float local_120;
  float local_11c;
  double local_110;
  undefined4 local_108;
  longlong local_100;
  
  if ((int)Level < 0xd) {
    if ((int)Level < 0xc) {
LAB_0026b040:
      iVar10 = 0;
      goto LAB_0026b044;
    }
  }
  else if (Level != 0x200) goto LAB_0026b040;
  iVar10 = 1;
LAB_0026b044:
  if (iVar10 != 1) {
    local_108 = 0x3e19999a;
    fVar3 = mobyutil::g_FrameTime * 2.0;
  }
  else {
    local_108 = 0x3e4ccccd;
    fVar3 = mobyutil::g_FrameTime;
  }
  dVar24 = (double)fVar3;
  dVar27 = 0.0;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x02';
    moby->updateDistance = -1;
    mobyupdate_helpers::M1400_0026adc8(iVar10);
  }
  else if (moby->state == '\x02') {
    iVar6 = fastfunc::FastDecTimerF32(&DAT_00fa4370);
    if (iVar6 != 0) {
      mobyupdate_helpers::M1400_0026adc8(iVar10);
    }
    iVar6 = DAT_00fa4374;
    DAT_00a52b90 = GameCamera.posX - *(float *)((int)pvVar2 + 0x30);
    DAT_00a52b94 = GameCamera.posY - *(float *)((int)pvVar2 + 0x34);
    DAT_00a52b98 = GameCamera.posZ - *(float *)((int)pvVar2 + 0x38);
    local_130 = GameCamera.posX;
    local_12c = GameCamera.posY;
    local_128 = GameCamera.posZ;
    DAT_00a52b9c[0] = GameCamera.field8_0x14c[0];
    DAT_00a52b9c[1] = GameCamera.field8_0x14c[1];
    DAT_00a52b9c[2] = GameCamera.field8_0x14c[2];
    DAT_00a52b9c[3] = GameCamera.field8_0x14c[3];
    local_124[0] = GameCamera.field8_0x14c[0];
    local_124[1] = GameCamera.field8_0x14c[1];
    local_124[2] = GameCamera.field8_0x14c[2];
    local_124[3] = GameCamera.field8_0x14c[3];
    mobyutil::MB_AddVectorSphere(&local_130,&local_130);
    iVar9 = 0;
    iVar7 = 0;
    local_128 = GameCamera.posZ + DAT_0079cbec;
    if (0 < iVar6) {
      dVar26 = -dVar24;
      dVar17 = 6.2831854820251465;
      dVar18 = 3.141592502593994;
      dVar19 = -3.141592502593994;
      dVar20 = -0.16666656732559204;
      dVar21 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      dVar25 = 8.0;
      local_110 = 1.570796251296997;
      do {
        acVar5 = local_124;
        fVar4 = local_128;
        fVar3 = local_12c;
        dVar29 = (double)local_130;
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar12 = (double)(float)(dVar11 + local_110);
        dVar11 = (double)(float)(dVar18 - dVar12);
        if (dVar12 - (double)(float)(dVar18 - dVar12) < 0.0) {
          dVar11 = dVar12;
        }
        dVar13 = (double)(float)(dVar19 - dVar12);
        if ((double)(float)(dVar19 - dVar12) - dVar11 < 0.0) {
          dVar13 = dVar11;
        }
        dVar11 = (double)(float)(dVar13 * dVar13);
        dVar14 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar13));
        dVar12 = (double)(float)(dVar11 * dVar14);
        dVar14 = (double)(float)((double)(float)(dVar11 * dVar12) * dVar23 +
                                (double)(float)(dVar12 * dVar22 +
                                               (double)(float)(dVar14 * dVar21 +
                                                              (double)(float)((double)(float)(dVar11
                                                                                             * 
                                                  dVar13) * dVar20 + dVar13))));
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar27,DAT_0079cbf0);
        dVar30 = (double)fVar3;
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar11 = (double)(float)(dVar18 - dVar13);
        if (dVar13 - (double)(float)(dVar18 - dVar13) < 0.0) {
          dVar11 = dVar13;
        }
        dVar28 = (double)(float)(dVar19 - dVar13);
        if ((double)(float)(dVar19 - dVar13) - dVar11 < 0.0) {
          dVar28 = dVar11;
        }
        dVar13 = (double)(float)(dVar28 * dVar28);
        dVar11 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar28));
        dVar15 = (double)(float)(dVar13 * dVar11);
        dVar28 = (double)(float)((double)(float)(dVar13 * dVar15) * dVar23 +
                                (double)(float)(dVar15 * dVar22 +
                                               (double)(float)(dVar11 * dVar21 +
                                                              (double)(float)((double)(float)(dVar13
                                                                                             * 
                                                  dVar28) * dVar20 + dVar28))));
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar27,DAT_0079cbf0);
        fastfunc::FastVecSub(&local_120,local_140,0x951500);
        dVar13 = (double)SQRT(local_120 * local_120 + local_11c * local_11c);
        if (dVar25 < dVar13) {
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        }
        else {
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        }
        DAT_00a52ba0 = GameCamera.posZ - DAT_0079cc04;
        dVar11 = (double)mobyutil::MB_SampleByteGrid
                                   (CONCAT44((float)(dVar14 * dVar12 + dVar29),
                                             (float)(dVar28 * dVar11 + dVar30)),
                                    CONCAT44(fVar4,acVar5));
        if (dVar11 < (double)(GameCamera.posZ + DAT_0079cbec)) {
          if (dVar11 - (double)DAT_00a52ba0 < 0.0) {
            dVar11 = (double)DAT_00a52ba0;
          }
          uVar8 = 0;
          if (dVar25 < dVar13) {
            uVar8 = DAT_0079cc00;
          }
          if (iVar10 == 0) {
            partupd::SpawnPart_0(dVar11,local_140,uVar8);
          }
          if (iVar10 == 1) {
            partupd::SpawnPart_73(dVar11,local_140,uVar8);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
    iVar9 = 0;
    local_128 = GameCamera.posZ + DAT_0079cbec;
    local_130 = GameCamera.posX;
    local_12c = GameCamera.posY;
    local_124[0] = GameCamera.field8_0x14c[0];
    local_124[1] = GameCamera.field8_0x14c[1];
    local_124[2] = GameCamera.field8_0x14c[2];
    local_124[3] = GameCamera.field8_0x14c[3];
    uVar1 = (uint)((float)(longlong)iVar6 * 1.4);
    local_100 = (longlong)(int)uVar1;
    if (0 < (int)uVar1) {
      dVar11 = -dVar24;
      dVar26 = 6.2831854820251465;
      dVar25 = 1.570796251296997;
      dVar23 = 3.141592502593994;
      dVar22 = -3.141592502593994;
      dVar21 = -0.16666656732559204;
      dVar20 = 0.008333025500178337;
      dVar19 = -0.0001980741071747616;
      dVar18 = 2.601886990305502e-06;
      dVar17 = 8.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar24);
        acVar5 = local_124;
        fVar4 = local_128;
        fVar3 = local_12c;
        dVar13 = (double)local_130;
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar26);
        dVar29 = (double)(float)(dVar12 + dVar25);
        dVar12 = (double)(float)(dVar23 - dVar29);
        if (dVar29 - (double)(float)(dVar23 - dVar29) < 0.0) {
          dVar12 = dVar29;
        }
        dVar14 = (double)(float)(dVar22 - dVar29);
        if ((double)(float)(dVar22 - dVar29) - dVar12 < 0.0) {
          dVar14 = dVar12;
        }
        dVar12 = (double)(float)(dVar14 * dVar14);
        dVar30 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar14));
        dVar29 = (double)(float)(dVar12 * dVar30);
        dVar30 = (double)(float)((double)(float)(dVar12 * dVar29) * dVar18 +
                                (double)(float)(dVar29 * dVar19 +
                                               (double)(float)(dVar30 * dVar20 +
                                                              (double)(float)((double)(float)(dVar12
                                                                                             * 
                                                  dVar14) * dVar21 + dVar14))));
        dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar17);
        dVar28 = (double)fVar3;
        dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar26);
        dVar12 = (double)(float)(dVar23 - dVar14);
        if (dVar14 - (double)(float)(dVar23 - dVar14) < 0.0) {
          dVar12 = dVar14;
        }
        dVar15 = (double)(float)(dVar22 - dVar14);
        if ((double)(float)(dVar22 - dVar14) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar15 * dVar15);
        dVar16 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
        dVar14 = (double)(float)(dVar12 * dVar16);
        dVar14 = (double)(float)((double)(float)(dVar12 * dVar14) * dVar18 +
                                (double)(float)(dVar14 * dVar19 +
                                               (double)(float)(dVar16 * dVar20 +
                                                              (double)(float)((double)(float)(dVar12
                                                                                             * 
                                                  dVar15) * dVar21 + dVar15))));
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar17);
        DAT_00a52ba0 = GameCamera.posZ - DAT_0079cc04;
        dVar12 = (double)mobyutil::MB_SampleByteGrid
                                   (CONCAT44((float)(dVar30 * dVar29 + dVar13),
                                             (float)(dVar14 * dVar12 + dVar28)),
                                    CONCAT44(fVar4,acVar5));
        if (dVar12 < (double)(GameCamera.posZ + DAT_0079cbec)) {
          if (dVar12 - (double)DAT_00a52ba0 < 0.0) {
            dVar12 = (double)DAT_00a52ba0;
          }
          if (iVar10 == 0) {
            partupd::SpawnPart_0(dVar12,local_140,0);
          }
          if (iVar10 == 1) {
            partupd::SpawnPart_73(dVar12,local_140,0);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar1);
    }
    if (iVar10 != 1) {
      local_130 = GameCamera.posX;
      local_12c = GameCamera.posY;
      local_128 = GameCamera.posZ;
      local_124[0] = GameCamera.field8_0x14c[0];
      local_124[1] = GameCamera.field8_0x14c[1];
      local_124[2] = GameCamera.field8_0x14c[2];
      local_124[3] = GameCamera.field8_0x14c[3];
      dVar24 = 30.0;
      mobyutil::MB_AddVectorSphere(&local_130,&local_130);
      iVar10 = 0;
      local_128 = GameCamera.posZ + DAT_0079cbec;
      if (0 < (int)uVar1) {
        dVar25 = 6.2831854820251465;
        dVar23 = 1.570796251296997;
        dVar22 = 3.141592502593994;
        dVar21 = -3.141592502593994;
        dVar20 = -0.16666656732559204;
        dVar19 = 0.008333025500178337;
        dVar18 = -0.0001980741071747616;
        dVar17 = 2.601886990305502e-06;
        do {
          acVar5 = local_124;
          fVar4 = local_128;
          fVar3 = local_12c;
          dVar12 = (double)local_130;
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar11 = (double)(float)(dVar26 + dVar23);
          dVar26 = (double)(float)(dVar22 - dVar11);
          if (dVar11 - (double)(float)(dVar22 - dVar11) < 0.0) {
            dVar26 = dVar11;
          }
          dVar29 = (double)(float)(dVar21 - dVar11);
          if ((double)(float)(dVar21 - dVar11) - dVar26 < 0.0) {
            dVar29 = dVar26;
          }
          dVar26 = (double)(float)(dVar29 * dVar29);
          dVar13 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
          dVar11 = (double)(float)(dVar26 * dVar13);
          dVar13 = (double)(float)((double)(float)(dVar26 * dVar11) * dVar17 +
                                  (double)(float)(dVar11 * dVar18 +
                                                 (double)(float)(dVar13 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar29) * dVar20 + dVar29))));
          dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar24);
          dVar14 = (double)fVar3;
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar26 = (double)(float)(dVar22 - dVar29);
          if (dVar29 - (double)(float)(dVar22 - dVar29) < 0.0) {
            dVar26 = dVar29;
          }
          dVar30 = (double)(float)(dVar21 - dVar29);
          if ((double)(float)(dVar21 - dVar29) - dVar26 < 0.0) {
            dVar30 = dVar26;
          }
          dVar26 = (double)(float)(dVar30 * dVar30);
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar30));
          dVar29 = (double)(float)(dVar26 * dVar28);
          dVar29 = (double)(float)((double)(float)(dVar26 * dVar29) * dVar17 +
                                  (double)(float)(dVar29 * dVar18 +
                                                 (double)(float)(dVar28 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar30) * dVar20 + dVar30))));
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar24);
          mobyutil::MB_SpawnGridParticles
                    (CONCAT44((float)(dVar13 * dVar11 + dVar12),(float)(dVar29 * dVar26 + dVar14)),
                     CONCAT44(fVar4,acVar5));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar1);
      }
      local_130 = GameCamera.posX;
      local_12c = GameCamera.posY;
      local_128 = GameCamera.posZ;
      local_124[0] = GameCamera.field8_0x14c[0];
      local_124[1] = GameCamera.field8_0x14c[1];
      local_124[2] = GameCamera.field8_0x14c[2];
      local_124[3] = GameCamera.field8_0x14c[3];
      mobyutil::MB_AddVectorSphere(&local_130,&local_130);
      local_128 = GameCamera.posZ + DAT_0079cbec;
      if (0 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0))) {
        dVar25 = 6.2831854820251465;
        dVar23 = 1.570796251296997;
        dVar22 = 3.141592502593994;
        dVar21 = -3.141592502593994;
        dVar20 = -0.16666656732559204;
        dVar19 = 0.008333025500178337;
        dVar18 = -0.0001980741071747616;
        dVar17 = 2.601886990305502e-06;
        dVar24 = 8.0;
        do {
          acVar5 = local_124;
          fVar4 = local_128;
          fVar3 = local_12c;
          dVar12 = (double)local_130;
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar11 = (double)(float)(dVar26 + dVar23);
          dVar26 = (double)(float)(dVar22 - dVar11);
          if (dVar11 - (double)(float)(dVar22 - dVar11) < 0.0) {
            dVar26 = dVar11;
          }
          dVar29 = (double)(float)(dVar21 - dVar11);
          if ((double)(float)(dVar21 - dVar11) - dVar26 < 0.0) {
            dVar29 = dVar26;
          }
          dVar26 = (double)(float)(dVar29 * dVar29);
          dVar13 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
          dVar11 = (double)(float)(dVar26 * dVar13);
          dVar13 = (double)(float)((double)(float)(dVar26 * dVar11) * dVar17 +
                                  (double)(float)(dVar11 * dVar18 +
                                                 (double)(float)(dVar13 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar29) * dVar20 + dVar29))));
          dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar24);
          dVar14 = (double)fVar3;
          dVar29 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar25);
          dVar26 = (double)(float)(dVar22 - dVar29);
          if (dVar29 - (double)(float)(dVar22 - dVar29) < 0.0) {
            dVar26 = dVar29;
          }
          dVar30 = (double)(float)(dVar21 - dVar29);
          if ((double)(float)(dVar21 - dVar29) - dVar26 < 0.0) {
            dVar30 = dVar26;
          }
          dVar26 = (double)(float)(dVar30 * dVar30);
          dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar30));
          dVar29 = (double)(float)(dVar26 * dVar28);
          dVar29 = (double)(float)((double)(float)(dVar26 * dVar29) * dVar17 +
                                  (double)(float)(dVar29 * dVar18 +
                                                 (double)(float)(dVar28 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar26 * dVar30) * dVar20 + dVar30))));
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar24);
          mobyutil::MB_SpawnGridParticles
                    (CONCAT44((float)(dVar13 * dVar11 + dVar12),(float)(dVar29 * dVar26 + dVar14)),
                     CONCAT44(fVar4,acVar5));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
      }
    }
  }
  *(float *)((int)pvVar2 + 0x30) = GameCamera.posX;
  *(float *)((int)pvVar2 + 0x34) = GameCamera.posY;
  *(float *)((int)pvVar2 + 0x38) = GameCamera.posZ;
  *(char (*) [4])((int)pvVar2 + 0x3c) = GameCamera.field8_0x14c;
  return;
}



//==== 0026bbd0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1401_0026bbd0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1401_0026bbd0(void)

{
  DAT_0079cc54 = 0x10000;
  return;
}



//==== 0026bc10  ns=mobyupdate_helpers  size=0x2fc
// sig: undefined M1401_0026bc10(void)
// callers(1): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot
// callees(2): 000fc620 mobyutil::MB_randInt; 00126f50 partupd::SpawnPart_23

void mobyupdate_helpers::M1401_0026bc10(void)

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
  auVar17 = loadVectorLeftIndexed(0x10,0x26bbe8);
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



//==== 0026bf18  ns=mobyupdate_helpers  size=0x350
// sig: undefined M1401_0026bf18(void)
// callers(1): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot
// callees(3): 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00109b40 mobyutil::AccelDelt; 0010ce18 mobyutil::MB_PathMoveDist

undefined8 mobyupdate_helpers::M1401_0026bf18(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *unused;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 in_r7;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
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
  ulonglong in_f31;
  double dVar26;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar12 = uVar17 - 0xf0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar17;
  puVar8[0x20] = in_LR;
  puVar8[0x1d] = in_f31;
  puVar8[0x1c] = unaff_r31;
  puVar8[0x1a] = unaff_r29;
  puVar8[0x1b] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  cVar1 = *(char *)(param_1 + 0x20);
  fVar2 = mobyutil::g_FrameTime * DAT_0079cc78;
  puVar8[0x19] = unaff_r28;
  puVar8[0x18] = unaff_r27;
  puVar8[0x17] = unaff_r26;
  if (cVar1 == '\x05') {
    pSVar7 = Splines[*(int *)(iVar6 + 0xdc)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd8)];
  }
  uVar11 = mobyutil::MB_PathMoveDist
                     ((double)fVar2,pSVar7,uVar17 - 0x80,iVar6 + 0xd0,iVar6 + 0xd4,in_r7,0);
  unused = &DAT_00270000;
  dVar26 = 0.0;
  mobyutil::AccelDelt(*(float *)(puVar8 + 0xe),DAT_0079cc7c,DAT_0079cc80,0.0,
                      (float *)(param_1 + 0x10),0x270000,(float *)(iVar6 + 0xe4));
  mobyutil::AccelDelt(*(float *)((int)puVar8 + 0x74),DAT_0079cc7c,DAT_0079cc80,(float)dVar26,
                      (float *)(param_1 + 0x14),(int)unused,(float *)(iVar6 + 0xe8));
  mobyutil::AccelDelt(*(float *)(puVar8 + 0xf),DAT_0079cc7c,DAT_0079cc80,(float)dVar26,
                      (float *)(param_1 + 0x18),(int)unused,(float *)(iVar6 + 0xec));
  fVar2 = *(float *)(puVar8 + 0xe) - *(float *)(param_1 + 0x10);
  dVar22 = (double)DAT_0079cc7c;
  fVar5 = *(float *)((int)puVar8 + 0x74) - *(float *)(param_1 + 0x14);
  dVar21 = (double)DAT_0079cc80;
  dVar23 = ABS((double)fVar2);
  if ((0.009999999776482582 < dVar23) &&
     (dVar25 = ABS((double)fVar5), 0.009999999776482582 < dVar25)) {
    *(float *)(puVar8 + 0x10) = fVar2;
    *(float *)((int)puVar8 + 0x84) = fVar5;
    *(float *)(puVar8 + 0x11) = (float)(dVar23 - dVar25);
    uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
    uVar13 = uVar15 << 2 | 0x735900;
    dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
      dVar24 = dVar25;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar2 = *(float *)((int)uVar13 + 4);
    dVar25 = ABS((double)*(float *)((int)puVar8 + 0x84));
    if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
      dVar25 = dVar23;
    }
    dVar23 = dVar26;
    if (dVar26 < dVar24) {
      lVar18 = uVar17 - 0xe0;
      lVar16 = uVar17 - 100;
      lVar14 = uVar17 - 0x54;
      lVar20 = 2;
      fVar3 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar3;
      *(float *)((int)puVar8 + 0x94) = fVar3;
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar13 = uVar17 - 100;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = 4;
      uVar17 = uVar13;
      lVar14 = lVar12;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x8c) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)uVar17 + 4) = *(float *)((int)uVar17 + 4) * fVar4;
        uVar17 = uVar17 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)uVar13;
        lVar12 = lVar12 + 0x10;
        uVar13 = uVar13 + 0x10;
        dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar9 + 0x8c)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed(dVar23,dVar22,dVar21,dVar26,param_1,uVar13,iVar6 + 0xf0);
  }
  return uVar11;
}



//==== 0026c270  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M1401_0026c270(void)
// callers(1): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot
// callees(0): 

void mobyupdate_helpers::M1401_0026c270(int param_1)

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
    fVar9 = DAT_0079cc84 / fVar11;
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
    fVar9 = DAT_0079cc88 / fVar11;
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



//==== 0026c3b8  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1401_0026c3b8(void)
// callers(1): 0026c6f0 mobyupdate_unsorted::UpdateMoby_1401_MineBot
// callees(0): 

void mobyupdate_helpers::M1401_0026c3b8(int param_1)

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



//==== 0026c6f0  ns=mobyupdate_unsorted  size=0xcdc
// sig: undefined UpdateMoby_1401_MineBot(MobyInstance * moby)
// callers(0): 
// callees(19): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00109b40 mobyutil::AccelDelt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 0026bc10 mobyupdate_helpers::M1401_0026bc10; 0026bf18 mobyupdate_helpers::M1401_0026bf18; 0026c270 mobyupdate_helpers::M1401_0026c270; 0026c3b8 mobyupdate_helpers::M1401_0026c3b8; 004bfdf8 FUN_004bfdf8; 004bff20 FUN_004bff20; 005cd098 libc::printf
// strings: 00655628: 'MineBot (moby1401) with no flyPath. UID: %d - RAR\n' | 00655660: 'MineBot (moby1401) with a flyPath that has no points. UID: %d - RAR\n' | 006556a8: 'MineBot (moby1401) with no exitPath. UID: %d - RAR\n' | 006556e0: 'MineBot (moby1401) with a exitPath that has no points. UID: %d - RAR\n' | 00655728: 'MineBot (moby1401) with no activation cuboid. UID: %d - RAR\n'

/* Moby 1401 */

void mobyupdate_unsorted::UpdateMoby_1401_MineBot(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  u16 *puVar9;
  void *pvVar10;
  f32 fVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  Vec4 *unused;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  float fVar30;
  
  lVar16 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x150;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar15;
  puVar13[0x2c] = in_LR;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x26] = unaff_r31;
  bVar1 = moby->field43_0x70;
  puVar13[0x23] = unaff_r28;
  pvVar8 = moby->pVar;
  puVar13[0x25] = unaff_r30;
  puVar13[0x24] = unaff_r29;
  puVar13[0x22] = unaff_r27;
  puVar13[0x21] = unaff_r26;
  if (((bVar1 & 2) != 0) && (moby->updateId == moby->animationId && moby->updateId == '\x01')) {
    puVar13[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar16,4,0,*(undefined4 *)((int)puVar13 + 0xfc));
  }
  if (((DAT_00969f1c == moby) && (moby->animationId != '\x01')) && (moby->updateId != '\x01')) {
    puVar13[0x1f] = (longlong)(int)(animationSpeed * 5.5);
    mobyutil::MB_SetAnimation(lVar16,1,0,*(undefined4 *)((int)puVar13 + 0xfc));
  }
  iVar19 = mobyutil::MB_damage(lVar16,0x210000,0);
  if ((iVar19 == 0) && (*(int *)((int)pvVar8 + 0xf4) != 0)) {
    iVar19 = mobyutil::MB_damage(*(int *)((int)pvVar8 + 0xf4),0x210000,0);
  }
  if ((iVar19 != 0) && (moby->state != '\x06')) {
    *(undefined4 *)((int)pvVar8 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar8 + 0x84) = 0x3a03126f;
    fVar30 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar8 + 0x88) = mobyutil::g_FrameTime * 24.0;
    *(undefined1 *)((int)pvVar8 + 0xad) = 0;
    *(undefined4 *)((int)pvVar8 + 0x94) = 1;
    pfVar24 = (float *)&mobyutil::g_atanQuadrantTable;
    *(float *)((int)pvVar8 + 0x8c) = fVar30 * 12.0;
    fVar30 = (moby->pos).x - g_heroPosition.x;
    fVar5 = (moby->pos).y - g_heroPosition.y;
    fVar3 = ABS(fVar30);
    fVar6 = ABS(fVar5);
    *(float *)(puVar13 + 0x11) = fVar30;
    *(float *)((int)puVar13 + 0x8c) = fVar5;
    *(float *)(puVar13 + 0x12) = fVar3 - fVar6;
    dVar27 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar30 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar30 = fVar6;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    if (0.0 < fVar30) {
      lVar17 = uVar15 - 0x140;
      lVar23 = uVar15 - 0x7c;
      lVar25 = uVar15 - 0x6c;
      lVar26 = 2;
      fVar30 = (fVar6 - fVar30) / (fVar6 + fVar30);
      fVar6 = fVar30 * fVar30;
      *(float *)(puVar13 + 0x1c) = fVar30;
      *(float *)(puVar13 + 0x1b) = fVar30;
      *(float *)((int)puVar13 + 0xdc) = fVar30;
      *(float *)((int)puVar13 + 0xd4) = fVar30;
      fVar30 = fVar6 * fVar6;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar6;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar30;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar30 * fVar6;
      do {
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar30 * fVar30;
        iVar19 = (int)lVar23;
        lVar17 = lVar17 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar30 * fVar30;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar15 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar30 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar30;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar23 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar14 = (int)lVar25;
        lVar17 = lVar17 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar3);
    }
    mobyutil::MB_StartKick(dVar27,lVar16,(int)pvVar8 + 0x70,pfVar24,1,1,0);
    *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
    mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    moby->state = '\x06';
  }
  uVar2 = moby->state;
  moby->damage = -1;
  if (uVar2 == '\x06') {
    uVar21 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar21 & 3) != 0) {
      mobyutil::MB_SpawnExplosionSparks
                (0x3ff0000000000000,0x402a000000000000,lVar16,lVar16 + 0x10,&DAT_0026c6cc,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar11 = (moby->pos).z;
    uVar21 = (int)fVar11 >> 0x1f;
    if ((int)((uVar21 >> 1 ^ (uint)fVar11) - uVar21) < 0x40a00000) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar2 == '\x05') {
    iVar19 = mobyupdate_helpers::M1401_0026bf18(lVar16);
    if (iVar19 == 0) {
      mobyupdate_helpers::M1401_0026bc10(lVar16);
    }
    else {
      MVar7 = moby->modeBits;
      moby->state = '\x02';
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pvVar8 + 0xd0) = 0;
      iVar19 = *(int *)((int)pvVar8 + 0xd8);
      moby->modeBits = MVar7 | (UNK_40|DISABLED);
      fVar30 = 0.0;
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0;
      *(undefined4 *)((int)pvVar8 + 0xd4) = 0;
      *(undefined4 *)((int)pvVar8 + 0xec) = 0;
      *(undefined4 *)((int)pvVar8 + 0xe8) = 0;
      *(undefined4 *)((int)pvVar8 + 0xe4) = 0;
      pSVar12 = Splines[iVar19];
      fVar5 = pSVar12->points[0].x;
      (moby->pos).x = fVar5;
      fVar6 = pSVar12->points[0].y;
      (moby->pos).y = fVar6;
      (moby->pos).z = pSVar12->points[0].z;
      (moby->pos).w = pSVar12->points[0].w;
      fVar5 = pSVar12->points[1].x - fVar5;
      fVar6 = pSVar12->points[1].y - fVar6;
      fVar3 = ABS(fVar5);
      fVar4 = ABS(fVar6);
      *(float *)(puVar13 + 0xe) = fVar5;
      *(float *)((int)puVar13 + 0x74) = fVar6;
      *(float *)(puVar13 + 0xf) = fVar3 - fVar4;
      uVar22 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar13 + 0xe));
      if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar4 = ABS(*(float *)((int)puVar13 + 0x74));
      if (*(float *)(puVar13 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar5) {
        lVar17 = uVar15 - 0x140;
        lVar23 = uVar15 - 0xbc;
        lVar25 = uVar15 - 0xac;
        lVar26 = 2;
        fVar5 = (fVar4 - fVar5) / (fVar4 + fVar5);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x14) = fVar5;
        *(float *)(puVar13 + 0x13) = fVar5;
        *(float *)((int)puVar13 + 0x9c) = fVar5;
        *(float *)((int)puVar13 + 0x94) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar5;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
          iVar19 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar25 = lVar25 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar25 = uVar15 - 0xbc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar5 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar30 = fVar30 + *(float *)(iVar19 + 0x94) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar30 = (fVar30 + 0.7853982) * fVar6 + fVar3;
      }
      (moby->rotation).z = fVar30;
    }
  }
  else if (uVar2 == '\x04') {
    if (*(int *)((int)pvVar8 + 0xfc) == 0) {
      mobyupdate_helpers::M1401_0026c270(lVar16);
    }
    iVar19 = mobyupdate_helpers::M1401_0026bf18(lVar16);
    if (iVar19 != 0) {
      moby->state = '\x03';
      mobyutil::MB_SetAnimation(lVar16,3,0,5);
    }
    mobyupdate_helpers::M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\x03') {
    pvVar10 = moby->pVar;
    pSVar12 = Splines[*(int *)((int)pvVar10 + 0xd8)];
    if (*(int *)((int)pvVar10 + 0xfc) == 0) {
      mobyupdate_helpers::M1401_0026c270(lVar16);
    }
    dVar29 = 0.0;
    unused = pSVar12->points + pSVar12->cnt + -1;
    dVar28 = (double)unused->y;
    dVar27 = (double)unused->z;
    mobyutil::AccelDelt(unused->x,DAT_0079cc7c,DAT_0079cc80,0.0,&(moby->pos).x,(int)unused,
                        (float *)((int)pvVar10 + 0xe4));
    mobyutil::AccelDelt((float)dVar28,DAT_0079cc7c,DAT_0079cc80,(float)dVar29,&(moby->pos).y,
                        (int)unused,(float *)((int)pvVar10 + 0xe8));
    fVar30 = mobyutil::AccelDelt((float)dVar27,DAT_0079cc7c,DAT_0079cc80,(float)dVar29,
                                 &(moby->pos).z,(int)unused,(float *)((int)pvVar10 + 0xec));
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      if (*(int *)((int)pvVar10 + 0xfc) == 1) {
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar10 + 0xf0) = 0;
        mobyutil::MB_SetAnimationNoBlend(lVar16,4,0);
      }
      else {
        if (*(int *)((int)pvVar10 + 0xf4) != 0) {
          FUN_004bff20((double)fVar30);
          *(undefined4 *)((int)pvVar10 + 0xf4) = 0;
        }
        moby->state = '\x05';
        mobyutil::MB_SetAnimation(lVar16,0,0,0x14);
        *(undefined4 *)((int)pvVar10 + 0xd0) = 0;
        *(undefined4 *)((int)pvVar10 + 0xd4) = 0;
      }
    }
    mobyupdate_helpers::M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\x02') {
    iVar19 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xe0));
    if (iVar19 != 0) {
      if (*(int *)((int)pvVar8 + 0xfc) == 1) {
        mobyutil::MB_SetAnimationNoBlend(lVar16,0,0);
      }
      else {
        uVar20 = FUN_004bfdf8(lVar16,lVar16 + 0x10);
        *(undefined4 *)((int)pvVar8 + 0xf4) = uVar20;
        mobyupdate_helpers::M1401_0026c270(lVar16);
        mobyutil::MB_SetAnimationNoBlend(lVar16,2,0);
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      puVar9 = moby->pClass->collision;
      moby->state = '\x04';
      moby->collision = puVar9;
    }
  }
  else if (uVar2 == '\x01') {
    fVar30 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar30);
    fVar6 = ABS(fVar5);
    *(float *)((int)puVar13 + 0x7c) = fVar30;
    *(float *)(puVar13 + 0x10) = fVar5;
    *(float *)((int)puVar13 + 0x84) = fVar3 - fVar6;
    dVar27 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar30 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar30 = fVar6;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar30) {
      lVar17 = uVar15 - 0x140;
      lVar25 = uVar15 - 0x8c;
      lVar23 = uVar15 - 0x9c;
      lVar26 = 2;
      fVar30 = (fVar4 - fVar30) / (fVar4 + fVar30);
      fVar3 = fVar30 * fVar30;
      *(float *)(puVar13 + 0x18) = fVar30;
      *(float *)(puVar13 + 0x17) = fVar30;
      *(float *)((int)puVar13 + 0xbc) = fVar30;
      *(float *)((int)puVar13 + 0xb4) = fVar30;
      fVar30 = fVar3 * fVar3;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar3;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar30;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar30 * fVar3;
      do {
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar30 * fVar30;
        iVar19 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar19 + 4) * fVar30 * fVar30;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar15 - 0x9c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar23 = lVar25;
      do {
        fVar30 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar30;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        iVar14 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xb4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar27,0x3f747ae140000000,0x3fc99999a0000000,lVar16,&DAT_0026c6cc,(int)pvVar8 + 0xf0)
    ;
    mobyupdate_helpers::M1401_0026bc10(lVar16);
  }
  else if (uVar2 == '\0') {
    if (*(int *)((int)pvVar8 + 0xfc) == 2) {
      moby->state = '\x01';
      *(undefined4 *)((int)pvVar8 + 0xf0) = 0;
      mobyutil::MB_SetAnimationNoBlend(lVar16,4,0);
    }
    else {
      if (*(int *)((int)pvVar8 + 0xd8) == -1) {
        libc::printf("MineBot (moby1401) with no flyPath. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar8 + 0xd8)]->cnt == 0) {
        libc::printf("MineBot (moby1401) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar8 + 0xfc) != 1) {
        if (*(int *)((int)pvVar8 + 0xdc) == -1) {
          libc::printf("MineBot (moby1401) with no exitPath. UID: %d - RAR\n",moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar8 + 0xdc)]->cnt == 0) {
          libc::printf("MineBot (moby1401) with a exitPath that has no points. UID: %d - RAR\n",
                       moby->uid);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      if (*(int *)((int)pvVar8 + 0xe0) == -1) {
        libc::printf("MineBot (moby1401) with no activation cuboid. UID: %d - RAR\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M1401_0026c3b8(lVar16);
      moby->state = '\x02';
      moby->updateDistance = -0x80;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
  }
  mobyutil::MB_ColorDyingMoby(lVar16,(int)pvVar8 + 0x60);
  return;
}



//==== 0026d3cc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1402_0026d3cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1402_0026d3cc(void)

{
  DAT_0079ccf4 = 0x10000;
  return;
}



//==== 0026d3e0  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1402_0026d3e0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1402_0026d3e0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar3 = MobyInstance;
  do {
    uVar2 = *puVar4 & 0x7fff;
    pMVar3[uVar2].pos.z = *(f32 *)(param_1 + 0x18);
    pMVar3 = MobyInstance;
    if (MobyInstance[uVar2].oClass == 0x57a) {
      *(undefined4 *)(&DAT_00fa43c8 + *(int *)((int)MobyInstance[uVar2].pVar + 0x1c) * 0x11a0) =
           *(undefined4 *)(param_1 + 0x18);
    }
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 0026d478  ns=mobyupdate_unsorted  size=0x460
// sig: undefined UpdateMoby_1402(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 00109c30 mobyutil::OrganicDelt

/* Moby 1402 */

void mobyupdate_unsorted::UpdateMoby_1402(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  ushort uVar3;
  float *pfVar4;
  f32 fVar5;
  uint uVar6;
  float fVar7;
  MobyInstance *pMVar8;
  ushort *puVar9;
  
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_00fa8a44 != 0) {
        DAT_0096bd90 = (char)DAT_00fa8a44;
      }
      MVar2 = moby->modeBits;
      pfVar4[7] = DAT_00fa8a40;
      moby->drawDistance = 0;
      DAT_00fa8a40 = (float)((int)DAT_00fa8a40 + 1);
      moby->collision = (ushort *)0x0;
      moby->modeBits = MVar2 | DISABLED;
      moby->updateDistance = -1;
      moby->state = '\x01';
    }
    else {
      fVar7 = pfVar4[2];
      if (MiscLevelFlags.field126_0x7e != 0) {
        fVar7 = (float)((int)fVar7 + 1U & 1);
        pfVar4[2] = fVar7;
      }
      DAT_00fa8a40 = 0.0;
      if ((fVar7 == 0.0) || (DAT_0096bd90 != '\0')) {
        moby->state = '\x03';
        (moby->pos).z = pfVar4[1];
      }
      else {
        moby->state = '\x02';
        (moby->pos).z = *pfVar4;
      }
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      moby->state = '\x03';
      DAT_00fa8a44 = 1;
    }
    moby->setByGroup = '\x02';
    puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
    pMVar8 = MobyInstance;
    do {
      uVar6 = *puVar9 & 0x7fff;
      pMVar8[uVar6].pos.z = (moby->pos).z;
      pMVar8 = MobyInstance;
      if (MobyInstance[uVar6].oClass == 0x57a) {
        *(f32 *)(&DAT_00fa43c8 + *(int *)((int)MobyInstance[uVar6].pVar + 0x1c) * 0x11a0) =
             (moby->pos).z;
      }
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar3);
    mobyutil::OrganicDelt
              (*pfVar4,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
               &(moby->pos).z,0x720000,pfVar4 + 6);
    fVar5 = (moby->pos).z;
    fVar7 = (moby->pos).z;
    uVar6 = (int)fVar5 >> 0x1f;
    if ((0.1 < ABS(fVar7 - *pfVar4)) &&
       (((hero::g_heroStateType == 0x11 || (hero::g_heroStateType == 0x12)) &&
        ((int)(((uint)((int)hero::g_heroWaterZ >> 0x1f) >> 1 ^ (uint)hero::g_heroWaterZ) -
              ((int)hero::g_heroWaterZ >> 0x1f)) < (int)((uVar6 >> 1 ^ (uint)fVar5) - uVar6))))) {
      hero::g_heroWaterZ = fVar7;
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      DAT_00fa8a44 = 0;
      moby->state = '\x02';
      if (pfVar4[2] == 0.0) {
        MiscLevelFlags.field126_0x7e = 1;
      }
    }
    mobyutil::OrganicDelt
              (pfVar4[1],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
               &(moby->pos).z,0x720000,pfVar4 + 6);
    puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
    pMVar8 = MobyInstance;
    do {
      uVar6 = *puVar9 & 0x7fff;
      pMVar8[uVar6].pos.z = (moby->pos).z;
      pMVar8 = MobyInstance;
      if (MobyInstance[uVar6].oClass == 0x57a) {
        *(f32 *)(&DAT_00fa43c8 + *(int *)((int)MobyInstance[uVar6].pVar + 0x1c) * 0x11a0) =
             (moby->pos).z;
      }
      uVar3 = *puVar9;
      puVar9 = puVar9 + 1;
    } while (-1 < (short)uVar3);
    moby->setByGroup = '\x01';
  }
  fVar7 = pfVar4[5];
  if ((int)fVar7 < 1) {
    if (-1 < (int)fVar7) {
      RegisterFuncForMoby(&PTR_M1403_0026dd28_0070a388,moby);
    }
  }
  else if ((int)fVar7 < 2) {
    DAT_00fa8a48 = DAT_0079cd28 * mobyutil::g_FrameTime + DAT_00fa8a48;
    if (1.0 < DAT_00fa8a48) {
      DAT_00fa8a48 = DAT_00fa8a48 - 1.0;
    }
    RegisterFuncForMoby(&PTR_M1403_0026d8d8_0070a378,moby);
  }
  else if ((int)fVar7 < 3) {
    RegisterFuncForMoby(&PTR_M1403_0026db00_0070a380,moby);
  }
  return;
}



//==== 0026d8d8  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1403_0026d8d8(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0079de28: '@PPP' (raw)

void mobyupdate_helpers::M1403_0026d8d8(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = draw::GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  fastfunc::FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079cf80;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079cf82;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79cd30);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79cd34);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79cd38);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79cd3c);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(iVar4 + 0x79d110) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(iVar4 + 0x79d114);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    draw::FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x19);
  return;
}



//==== 0026db00  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1403_0026db00(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0079de28: '@PPP' (raw)

void mobyupdate_helpers::M1403_0026db00(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = draw::GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  fastfunc::FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079d590;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079d592;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79d240);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79d244);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79d248);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79d24c);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(iVar4 + 0x79d7f0) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(iVar4 + 0x79d7f4);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    draw::FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x26);
  return;
}



//==== 0026dd28  ns=mobyupdate_helpers  size=0x228
// sig: undefined M1403_0026dd28(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0079de28: '@PPP' (raw)

void mobyupdate_helpers::M1403_0026dd28(int param_1)

{
  float *pfVar1;
  ulonglong *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short *psVar9;
  short *psVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar15;
  ulonglong unaff_r31;
  short *psVar16;
  ulonglong in_LR;
  longlong lVar17;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar7 - 0x180);
  *puVar2 = uVar7;
  puVar2[0x32] = in_LR;
  puVar2[0x2f] = unaff_r31;
  puVar2[0x2e] = unaff_r30;
  uVar6 = DAT_0079de24;
  pfVar1 = *(float **)(param_1 + 0x78);
  puVar2[0x2d] = unaff_r29;
  puVar2[0x2c] = unaff_r28;
  puVar2[0x2b] = unaff_r27;
  puVar2[0x2a] = unaff_r26;
  puVar2[0x29] = unaff_r25;
  uVar8 = draw::GetEffectTex(uVar6);
  puVar2[0x25] = uVar8;
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar2[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar2[0x24] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fa8a4c,DAT_0079de18,DAT_00fa8a50,DAT_0079de1c,DAT_0079de20);
  puVar2[0x27] = uVar8;
  fastfunc::FastMtx4Identity((float *)(puVar2 + 0xe));
  iVar14 = 0;
  psVar15 = &DAT_0079dbb0;
  *(float *)(puVar2 + 0x15) = *(float *)(param_1 + 0x18) - *pfVar1;
  uVar6 = DAT_0079de28;
  psVar16 = &DAT_0079dbb2;
  *(undefined4 *)((int)puVar2 + 0xfc) = DAT_0079de28;
  *(undefined4 *)(puVar2 + 0x1f) = uVar6;
  *(undefined4 *)((int)puVar2 + 0xf4) = uVar6;
  *(undefined4 *)(puVar2 + 0x1e) = uVar6;
  do {
    lVar17 = 4;
    lVar11 = uVar7 - 0xd0;
    lVar13 = uVar7 - 0x180;
    psVar10 = psVar15;
    psVar9 = psVar16;
    do {
      iVar4 = (int)((longlong)*psVar9 << 3);
      iVar5 = (int)((longlong)*psVar10 << 4);
      psVar10 = psVar10 + 2;
      psVar9 = psVar9 + 2;
      puVar12 = (undefined4 *)lVar11;
      *puVar12 = *(undefined4 *)(iVar5 + 0x79d9a0);
      puVar12[1] = *(undefined4 *)(iVar5 + 0x79d9a4);
      puVar12[2] = *(undefined4 *)(iVar5 + 0x79d9a8);
      puVar12[3] = *(undefined4 *)(iVar5 + 0x79d9ac);
      lVar11 = lVar11 + 0x10;
      fVar3 = *(float *)(&DAT_0079dd10 + iVar4) + DAT_00fa8a48;
      *(undefined4 *)((int)lVar13 + 0x104) = *(undefined4 *)(&DAT_0079dd14 + iVar4);
      *(float *)((int)lVar13 + 0x100) = fVar3;
      lVar13 = lVar13 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    draw::FastDrawQuad(uVar7 - 0xd0,uVar7 - 0x110,0,EffectTexHeaders,9);
    iVar14 = iVar14 + 1;
    psVar15 = psVar15 + 8;
    psVar16 = psVar16 + 8;
  } while (iVar14 < 0x16);
  return;
}



//==== 0026df50  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1403_0026df50(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1403_0026df50(void)

{
  DAT_0079de78 = 0x10000;
  return;
}



//==== 0026df78  ns=mobyupdate_unsorted  size=0x318
// sig: undefined UpdateMoby_1403(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 0010d7a0 mobyutil::MB_PathFollowToPos; 00138238 path::GetPathPnt

/* Moby 1403 */

void mobyupdate_unsorted::UpdateMoby_1403(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  Spline *pSVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar10;
  float *pfVar11;
  MobyInstance *pMVar12;
  longlong lVar9;
  int iVar13;
  Spline *pSVar14;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  uint local_20;
  int local_1c;
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == '\0') {
    moby->updateDistance = -1;
    if (piVar3[1] != -1) {
      iVar13 = 0;
      pSVar4 = Splines[piVar3[1]];
      iVar10 = pSVar4->cnt;
      pSVar14 = pSVar4;
      if (0 < iVar10) {
        do {
          iVar13 = iVar13 + 1;
          pfVar11 = (float *)((int)pSVar4 + ((iVar13 - (iVar13 / iVar10) * iVar10) * 4 + 4) * 4);
          fVar6 = pSVar14->points[0].y - pfVar11[1];
          fVar7 = pSVar14->points[0].x - *pfVar11;
          fVar8 = pSVar14->points[0].z - pfVar11[2];
          pSVar14->points[0].w = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
          iVar10 = pSVar4->cnt;
          pSVar14 = (Spline *)pSVar14->points;
        } while (iVar13 < iVar10);
      }
    }
    piVar3[2] = 0;
    piVar3[3] = 0;
    moby->state = '\x01';
    piVar3[4] = 0;
  }
  if (*piVar3 == -1) {
    return;
  }
  pMVar12 = MobyInstance + *piVar3;
  if (pMVar12 == (MobyInstance *)0x0) {
LAB_0026e0a0:
    mobyfunc::DeleteMoby(moby);
    return;
  }
  bVar1 = pMVar12->state;
  if ((bVar1 == 0xfe) || (bVar1 == 0xfd)) goto LAB_0026e0a0;
  if (bVar1 < 7) {
    (moby->pos).x = (pMVar12->pos).x;
    (moby->pos).y = (pMVar12->pos).y;
    (moby->pos).z = (pMVar12->pos).z;
    (moby->pos).w = (pMVar12->pos).w;
    return;
  }
  piVar3[4] = piVar3[4] + 1;
  if (piVar3[1] == -1) {
    return;
  }
  uVar2 = moby->state;
  pSVar4 = Splines[piVar3[1]];
  if (uVar2 == '\x01') {
    mobyutil::MB_PathFollowToPos
              (0x4059000000000000,0x3ff0000000000000,0,pSVar4,&pMVar12->pos,&local_30,&local_1c,
               &local_20,&DAT_0026df68,0);
    if (((local_1c <= piVar3[2]) &&
        (uVar5 = piVar3[3] >> 0x1f,
        (int)(((uint)((int)local_20 >> 0x1f) >> 1 ^ local_20) - ((int)local_20 >> 0x1f)) <=
        (int)((uVar5 >> 1 ^ piVar3[3]) - uVar5))) && (0x1d < piVar3[4])) {
      moby->state = '\x02';
      goto LAB_0026e1b4;
    }
    piVar3[3] = local_20;
    piVar3[2] = local_1c;
    (moby->pos).x = local_30;
    (moby->pos).y = local_2c;
    (moby->pos).z = local_28;
    (moby->pos).w = local_24;
    uVar2 = moby->state;
  }
  if (uVar2 != '\x02') {
    return;
  }
LAB_0026e1b4:
  if (pSVar4->cnt + -1 <= piVar3[2]) {
    moby->state = '\x03';
    return;
  }
  lVar9 = path::GetPathPnt(DAT_0071f408 * 0.25,moby,pSVar4,(Vec4 *)&moby->pos,piVar3[2],1);
  iVar10 = (int)(lVar9 << 4);
  piVar3[2] = (int)lVar9;
  fVar6 = (moby->pos).y - *(float *)((int)&pSVar4->points[0].y + iVar10);
  fVar7 = (moby->pos).x - *(float *)((int)&pSVar4->points[0].x + iVar10);
  fVar8 = (moby->pos).z - *(float *)((int)&pSVar4->points[0].z + iVar10);
  piVar3[3] = (int)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  return;
}



//==== 0026e290  ns=mobyupdate_unsorted  size=0x114
// sig: undefined UpdateMoby_1404(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 00167e60 update::mode_sceneInit

/* Moby 1404 */

void mobyupdate_unsorted::UpdateMoby_1404(MobyInstance *moby)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  piVar1 = (int *)moby->pVar;
  if ((worldUpdateTime != 0) && (g_gameMode == GAME_MODE_NORMAL)) {
    if ((&MiscLevelFlags.field92_0x5c)[piVar1[1]] == 0) {
      iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
      fVar3 = g_heroPosition.w;
      fVar2 = g_heroPosition.y;
      if (iVar4 != 0) {
        DAT_0095cd60 = g_heroPosition.x;
        (&MiscLevelFlags.field92_0x5c)[piVar1[1]] = 1;
        DAT_0095cd64 = fVar2;
        DAT_0095cd6c = fVar3;
        DAT_0095cd68 = hero::g_heroGroundZ;
        DAT_0095cd70 = g_heroRotation.x;
        DAT_0095cd74 = g_heroRotation.y;
        DAT_0095cd9a = 1;
        DAT_0095cd78 = g_heroRotation.z;
        DAT_0095cd7c = g_heroRotation.w;
        update::mode_sceneInit(piVar1[2]);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0026e3a4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1405_0026e3a4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1405_0026e3a4(void)

{
  DAT_0079deec = 0x10000;
  return;
}



//==== 0026e3e0  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1405_0026e3e0(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1405_0026e3e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar15;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  undefined **ppuVar16;
  ulonglong unaff_r22;
  undefined **ppuVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar18;
  undefined **ppuVar19;
  ulonglong unaff_r25;
  int iVar20;
  int *piVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar22;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar24;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar24 = uVar10 - 0x150;
  puVar7 = (ulonglong *)lVar24;
  *puVar7 = uVar10;
  puVar7[0x2c] = in_LR;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x21] = unaff_r31;
  puVar7[0x1c] = unaff_r26;
  puVar7[0x20] = unaff_r30;
  uVar9 = worldUpdateTime;
  pfVar4 = *(float **)(param_1 + 0x78);
  puVar7[0x1f] = unaff_r29;
  puVar7[0x1e] = unaff_r28;
  puVar7[0x1d] = unaff_r27;
  puVar7[0x1b] = unaff_r25;
  puVar7[0x1a] = unaff_r24;
  puVar7[0x19] = unaff_r23;
  puVar7[0x18] = unaff_r22;
  puVar7[0x17] = unaff_r21;
  puVar7[0x16] = unaff_r20;
  puVar7[0x15] = unaff_r19;
  puVar7[0x14] = unaff_r18;
  puVar7[0x13] = unaff_r17;
  puVar7[0x12] = unaff_r16;
  dVar26 = (double)fastfunc::FastIntToDouble(uVar9);
  dVar37 = (double)(float)((double)(float)((double)DAT_0079ee70 * (double)mobyutil::g_FrameTime) *
                          dVar26);
  uVar11 = draw::GetEffectTex(dVar26,(double)DAT_0079ee70,(double)mobyutil::g_FrameTime,DAT_0079ee5c
                             );
  vuchain::SetGSReg(0x18,uVar11);
  uVar11 = idol_draw::PackCmd(0,1,0,1,DAT_0079ee58);
  vuchain::SetGSReg(3,uVar11);
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar11);
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar11);
  *pfVar4 = pfVar4[1];
  dVar26 = (double)fastfunc::FastWrapRot
                             (pfVar4[1],
                              (360.0 / (DAT_0079ee68 * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar4[1] = (float)dVar26;
  mobyutil::MB_GetLights(param_1,uVar10 - 0xe0,uVar10 - 0xdc,uVar10 - 0xd8);
  iVar25 = *(int *)(puVar7 + 0xf);
  iVar15 = 0;
  iVar23 = *(int *)((int)puVar7 + 0x74);
  uVar5 = *(uint *)(puVar7 + 0xe);
  uVar8 = DAT_0079ee60 << 0x18;
  iVar20 = 0;
  do {
    iVar22 = 0;
    if (0 < *(int *)((int)&DAT_0079df10 + iVar20)) {
      dVar36 = 6.2831854820251465;
      dVar35 = 3.141592502593994;
      iVar13 = 0;
      dVar34 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar32 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      iVar18 = 0;
      dVar26 = 2.601886990305502e-06;
      do {
        pfVar12 = (float *)(*(int *)((int)&PTR_DAT_0079ee40 + iVar20) + iVar13);
        dVar27 = (double)fastfunc::FastFMod((double)SQRT(*pfVar12 * *pfVar12 +
                                                         pfVar12[1] * pfVar12[1]),
                                            (double)DAT_0079ee64);
        dVar27 = (double)fastfunc::FastAddRots((float)(dVar27 * dVar36) / DAT_0079ee64);
        dVar28 = (double)fastfunc::FastWrapRot((float)dVar27,pfVar4[1]);
        fVar3 = DAT_0079ee6c;
        iVar14 = *(int *)((int)&PTR_DAT_0079ee28 + iVar20) + iVar13;
        iVar22 = iVar22 + 1;
        dVar27 = (double)(float)(dVar35 - dVar28);
        if (dVar28 - (double)(float)(dVar35 - dVar28) < 0.0) {
          dVar27 = dVar28;
        }
        fVar1 = *(float *)(param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 0x18);
        iVar6 = *(int *)((int)&PTR_DAT_0079ee38 + iVar20);
        *(float *)(*(int *)((int)&PTR_DAT_0079ee28 + iVar20) + iVar13) =
             *pfVar12 + *(float *)(param_1 + 0x10);
        iVar13 = iVar13 + 0xc;
        dVar29 = (double)(float)(dVar34 - dVar28);
        if ((double)(float)(dVar34 - dVar28) - dVar27 < 0.0) {
          dVar29 = dVar27;
        }
        dVar27 = (double)(float)(dVar29 * dVar29);
        *(float *)(iVar14 + 4) = pfVar12[1] + fVar1;
        dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar29));
        dVar28 = (double)(float)(dVar27 * dVar30);
        *(float *)(iVar14 + 8) =
             fVar3 * (float)((double)(float)(dVar27 * dVar28) * dVar26 +
                            (double)(float)(dVar28 * dVar31 +
                                           (double)(float)(dVar30 * dVar32 +
                                                          (double)(float)((double)(float)(dVar27 * 
                                                  dVar29) * dVar33 + dVar29)))) + pfVar12[2] + fVar2
        ;
        *(uint *)(iVar6 + iVar18) = uVar8 | iVar25 << 0x10 | iVar23 << 8 | uVar5;
        iVar18 = iVar18 + 4;
      } while (iVar22 < *(int *)((int)&DAT_0079df10 + iVar20));
    }
    iVar15 = iVar15 + 1;
    iVar20 = iVar20 + 4;
  } while (iVar15 < 2);
  uVar11 = 0x3ff0000000000000;
  iVar25 = 0;
  do {
    iVar15 = 0;
    iVar23 = 0;
    piVar21 = &DAT_0079df10;
    do {
      iVar20 = 0;
      if (0 < *piVar21) {
        iVar22 = 0;
        do {
          *(undefined4 *)((int)puVar7 + 0x7c) = 0x3f800000;
          *(undefined4 *)((int)puVar7 + 0x84) = 0x3f800000;
          *(undefined4 *)(puVar7 + 0x10) = 0xbf20d97c;
          fVar3 = *(float *)((int)lVar24 + 0x7c);
          *(undefined4 *)(puVar7 + 0x11) = 0x3f20d97c;
          dVar26 = (double)fastfunc::FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          fVar3 = *(float *)((int)lVar24 + 0x80);
          *(float *)(*(int *)((int)&PTR_DAT_0079ee30 + iVar23) + iVar22) =
               (float)((double)*(float *)(*(int *)((int)&PTR_DAT_0079ee48 + iVar23) + iVar22) +
                      dVar26);
          dVar26 = (double)fastfunc::FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          iVar20 = iVar20 + 1;
          iVar18 = *(int *)((int)&PTR_DAT_0079ee48 + iVar23) + iVar22;
          iVar13 = *(int *)((int)&PTR_DAT_0079ee30 + iVar23) + iVar22;
          iVar22 = iVar22 + 8;
          *(float *)(iVar13 + 4) = (float)((double)*(float *)(iVar18 + 4) + dVar26);
        } while (iVar20 < *(int *)((int)&DAT_0079df10 + iVar23));
      }
      iVar15 = iVar15 + 1;
      iVar23 = iVar23 + 4;
      piVar21 = piVar21 + 1;
    } while (iVar15 < 2);
    stub::STUB_00071170();
    iVar23 = 0;
    ppuVar19 = &PTR_DAT_0079ee28;
    ppuVar17 = &PTR_DAT_0079ee38;
    piVar21 = &DAT_0079df10;
    ppuVar16 = &PTR_DAT_0079ee30;
    do {
      draw::DrawMeshSet(*piVar21,*ppuVar19,*ppuVar17,*ppuVar16,9);
      iVar23 = iVar23 + 1;
      piVar21 = piVar21 + 1;
      ppuVar19 = ppuVar19 + 1;
      ppuVar17 = ppuVar17 + 1;
      ppuVar16 = ppuVar16 + 1;
    } while (iVar23 < 2);
    iVar25 = iVar25 + 1;
    lVar24 = lVar24 + 8;
  } while (iVar25 < 2);
  return;
}



//==== 0026e8f4  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1405(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1405 */

void mobyupdate_unsorted::UpdateMoby_1405(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1405_0026e3e0_0070a3b0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0026e9a0  ns=mobyupdate_helpers  size=0x488
// sig: undefined M1406_0026e9a0(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1406_0026e9a0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint *puVar12;
  ulonglong unaff_r23;
  float *pfVar14;
  longlong lVar13;
  ulonglong unaff_r24;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r25;
  float *pfVar17;
  float *pfVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar13 = uVar9 - 0x130;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar9;
  puVar6[0x28] = in_LR;
  puVar6[0x1e] = in_f24;
  puVar6[0x1f] = in_f25;
  puVar6[0x20] = in_f26;
  puVar6[0x21] = in_f27;
  puVar6[0x22] = in_f28;
  puVar6[0x23] = in_f29;
  puVar6[0x24] = in_f30;
  puVar6[0x25] = in_f31;
  puVar6[0x1d] = unaff_r31;
  puVar6[0x1b] = unaff_r29;
  puVar6[0x1c] = unaff_r30;
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar6[0x1a] = unaff_r28;
  puVar6[0x19] = unaff_r27;
  puVar6[0x18] = unaff_r26;
  puVar6[0x17] = unaff_r25;
  puVar6[0x16] = unaff_r24;
  puVar6[0x15] = unaff_r23;
  puVar6[0x14] = unaff_r22;
  puVar6[0x13] = unaff_r21;
  puVar6[0x12] = unaff_r20;
  dVar22 = (double)fastfunc::FastIntToDouble(uVar8);
  dVar33 = (double)(float)((double)(float)((double)DAT_0079f5b8 * (double)mobyutil::g_FrameTime) *
                          dVar22);
  uVar10 = draw::GetEffectTex(dVar22,(double)DAT_0079f5b8,(double)mobyutil::g_FrameTime,DAT_0079f5a4
                             );
  vuchain::SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_0079f5a0);
  vuchain::SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar10);
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar22 = (double)fastfunc::FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_0079f5b0 * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar16[1] = (float)dVar22;
  mobyutil::MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar21 = *(int *)(puVar6 + 0xf);
  iVar20 = *(int *)((int)puVar6 + 0x74);
  iVar19 = 0;
  uVar5 = *(uint *)(puVar6 + 0xe);
  uVar7 = DAT_0079f5a8 << 0x18;
  iVar11 = DAT_0079ee80;
  if (0 < DAT_0079ee80) {
    pfVar17 = (float *)&DAT_00fa9acc;
    pfVar18 = (float *)&DAT_0079eea0;
    dVar32 = 6.2831854820251465;
    pfVar15 = (float *)&DAT_00fa9ad0;
    dVar31 = 3.141592502593994;
    pfVar14 = (float *)&DAT_00fa9ad4;
    dVar30 = -3.141592502593994;
    puVar12 = &DAT_00faa1c0;
    dVar29 = -0.16666656732559204;
    dVar28 = 0.008333025500178337;
    dVar27 = -0.0001980741071747616;
    dVar22 = 2.601886990305502e-06;
    do {
      dVar23 = (double)fastfunc::FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]
                                                      ),(double)DAT_0079f5ac);
      dVar23 = (double)fastfunc::FastAddRots((float)(dVar23 * dVar32) / DAT_0079f5ac);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar23,pfVar16[1]);
      fVar2 = *pfVar18;
      iVar19 = iVar19 + 1;
      dVar23 = (double)(float)(dVar31 - dVar24);
      if (dVar24 - (double)(float)(dVar31 - dVar24) < 0.0) {
        dVar23 = dVar24;
      }
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[2];
      pfVar18 = pfVar18 + 3;
      *pfVar17 = fVar2 + *(float *)(param_1 + 0x10);
      fVar2 = DAT_0079f5b4;
      iVar11 = DAT_0079ee80;
      pfVar17 = pfVar17 + 3;
      dVar25 = (double)(float)(dVar30 - dVar24);
      if ((double)(float)(dVar30 - dVar24) - dVar23 < 0.0) {
        dVar25 = dVar23;
      }
      bVar1 = iVar19 < DAT_0079ee80;
      dVar23 = (double)(float)(dVar25 * dVar25);
      *pfVar15 = fVar3 + *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x18);
      pfVar15 = pfVar15 + 3;
      *puVar12 = uVar7 | iVar21 << 0x10 | iVar20 << 8 | uVar5;
      puVar12 = puVar12 + 1;
      dVar26 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
      dVar24 = (double)(float)(dVar23 * dVar26);
      *pfVar14 = fVar2 * (float)((double)(float)(dVar23 * dVar24) * dVar22 +
                                (double)(float)(dVar24 * dVar27 +
                                               (double)(float)(dVar26 * dVar28 +
                                                              (double)(float)((double)(float)(dVar23
                                                                                             * 
                                                  dVar25) * dVar29 + dVar25)))) + fVar4 + fVar3;
      pfVar14 = pfVar14 + 3;
    } while (bVar1);
  }
  iVar21 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    iVar20 = 0;
    if (0 < iVar11) {
      pfVar15 = (float *)&DAT_0079f2cc;
      pfVar14 = (float *)&DAT_00fa9ef8;
      pfVar18 = (float *)&DAT_0079f2d0;
      pfVar16 = (float *)&DAT_00fa9efc;
      do {
        *(undefined4 *)((int)puVar6 + 0x7c) = 0x3f800000;
        *(undefined4 *)((int)puVar6 + 0x84) = 0x3f800000;
        *(undefined4 *)(puVar6 + 0x10) = 0xbf20d97c;
        fVar2 = *(float *)((int)lVar13 + 0x7c);
        *(undefined4 *)(puVar6 + 0x11) = 0x3f20d97c;
        dVar22 = (double)fastfunc::FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *(float *)((int)lVar13 + 0x80);
        *pfVar14 = (float)((double)*pfVar15 + dVar22);
        dVar22 = (double)fastfunc::FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *pfVar18;
        iVar20 = iVar20 + 1;
        pfVar15 = pfVar15 + 2;
        bVar1 = iVar20 < DAT_0079ee80;
        pfVar14 = pfVar14 + 2;
        pfVar18 = pfVar18 + 2;
        *pfVar16 = (float)((double)fVar2 + dVar22);
        pfVar16 = pfVar16 + 2;
      } while (bVar1);
    }
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_0079ee80,PTR_DAT_0079f594,PTR_DAT_0079f59c,PTR_DAT_0079f598,9);
    iVar21 = iVar21 + 1;
    lVar13 = lVar13 + 8;
    iVar11 = DAT_0079ee80;
  } while (iVar21 < 2);
  return;
}



//==== 0026ee28  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1406(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1406 */

void mobyupdate_unsorted::UpdateMoby_1406(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1406_0026e9a0_0070a3c0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0026eed0  ns=mobyupdate_helpers  size=0x488
// sig: undefined M1407_0026eed0(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1407_0026eed0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  uint *puVar12;
  ulonglong unaff_r23;
  float *pfVar14;
  longlong lVar13;
  ulonglong unaff_r24;
  float *pfVar15;
  float *pfVar16;
  ulonglong unaff_r25;
  float *pfVar17;
  float *pfVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar13 = uVar9 - 0x130;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar9;
  puVar6[0x28] = in_LR;
  puVar6[0x1e] = in_f24;
  puVar6[0x1f] = in_f25;
  puVar6[0x20] = in_f26;
  puVar6[0x21] = in_f27;
  puVar6[0x22] = in_f28;
  puVar6[0x23] = in_f29;
  puVar6[0x24] = in_f30;
  puVar6[0x25] = in_f31;
  puVar6[0x1d] = unaff_r31;
  puVar6[0x1b] = unaff_r29;
  puVar6[0x1c] = unaff_r30;
  uVar8 = worldUpdateTime;
  pfVar16 = *(float **)(param_1 + 0x78);
  puVar6[0x1a] = unaff_r28;
  puVar6[0x19] = unaff_r27;
  puVar6[0x18] = unaff_r26;
  puVar6[0x17] = unaff_r25;
  puVar6[0x16] = unaff_r24;
  puVar6[0x15] = unaff_r23;
  puVar6[0x14] = unaff_r22;
  puVar6[0x13] = unaff_r21;
  puVar6[0x12] = unaff_r20;
  dVar22 = (double)fastfunc::FastIntToDouble(uVar8);
  dVar33 = (double)(float)((double)(float)((double)DAT_0079fa3c * (double)mobyutil::g_FrameTime) *
                          dVar22);
  uVar10 = draw::GetEffectTex(dVar22,(double)DAT_0079fa3c,(double)mobyutil::g_FrameTime,DAT_0079fa28
                             );
  vuchain::SetGSReg(0x18,uVar10);
  uVar10 = idol_draw::PackCmd(0,1,0,1,DAT_0079fa24);
  vuchain::SetGSReg(3,uVar10);
  uVar10 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar10);
  uVar10 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar10);
  *pfVar16 = pfVar16[1];
  dVar22 = (double)fastfunc::FastWrapRot
                             (pfVar16[1],
                              (360.0 / (DAT_0079fa34 * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar16[1] = (float)dVar22;
  mobyutil::MB_GetLights(param_1,uVar9 - 0xc0,uVar9 - 0xbc,uVar9 - 0xb8);
  iVar21 = *(int *)(puVar6 + 0xf);
  iVar20 = *(int *)((int)puVar6 + 0x74);
  iVar19 = 0;
  uVar5 = *(uint *)(puVar6 + 0xe);
  uVar7 = DAT_0079fa2c << 0x18;
  iVar11 = DAT_0079f5c0;
  if (0 < DAT_0079f5c0) {
    pfVar17 = (float *)&DAT_00faa324;
    pfVar18 = (float *)&DAT_0079f5e0;
    dVar32 = 6.2831854820251465;
    pfVar15 = (float *)&DAT_00faa328;
    dVar31 = 3.141592502593994;
    pfVar14 = (float *)&DAT_00faa32c;
    dVar30 = -3.141592502593994;
    puVar12 = &DAT_00faa6a8;
    dVar29 = -0.16666656732559204;
    dVar28 = 0.008333025500178337;
    dVar27 = -0.0001980741071747616;
    dVar22 = 2.601886990305502e-06;
    do {
      dVar23 = (double)fastfunc::FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]
                                                      ),(double)DAT_0079fa30);
      dVar23 = (double)fastfunc::FastAddRots((float)(dVar23 * dVar32) / DAT_0079fa30);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar23,pfVar16[1]);
      fVar2 = *pfVar18;
      iVar19 = iVar19 + 1;
      dVar23 = (double)(float)(dVar31 - dVar24);
      if (dVar24 - (double)(float)(dVar31 - dVar24) < 0.0) {
        dVar23 = dVar24;
      }
      fVar3 = pfVar18[1];
      fVar4 = pfVar18[2];
      pfVar18 = pfVar18 + 3;
      *pfVar17 = fVar2 + *(float *)(param_1 + 0x10);
      fVar2 = DAT_0079fa38;
      iVar11 = DAT_0079f5c0;
      pfVar17 = pfVar17 + 3;
      dVar25 = (double)(float)(dVar30 - dVar24);
      if ((double)(float)(dVar30 - dVar24) - dVar23 < 0.0) {
        dVar25 = dVar23;
      }
      bVar1 = iVar19 < DAT_0079f5c0;
      dVar23 = (double)(float)(dVar25 * dVar25);
      *pfVar15 = fVar3 + *(float *)(param_1 + 0x14);
      fVar3 = *(float *)(param_1 + 0x18);
      pfVar15 = pfVar15 + 3;
      *puVar12 = uVar7 | iVar21 << 0x10 | iVar20 << 8 | uVar5;
      puVar12 = puVar12 + 1;
      dVar26 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
      dVar24 = (double)(float)(dVar23 * dVar26);
      *pfVar14 = fVar2 * (float)((double)(float)(dVar23 * dVar24) * dVar22 +
                                (double)(float)(dVar24 * dVar27 +
                                               (double)(float)(dVar26 * dVar28 +
                                                              (double)(float)((double)(float)(dVar23
                                                                                             * 
                                                  dVar25) * dVar29 + dVar25)))) + fVar4 + fVar3;
      pfVar14 = pfVar14 + 3;
    } while (bVar1);
  }
  iVar21 = 0;
  uVar10 = 0x3ff0000000000000;
  do {
    iVar20 = 0;
    if (0 < iVar11) {
      pfVar15 = (float *)&DAT_0079f7fc;
      pfVar14 = (float *)&DAT_00faa540;
      pfVar18 = (float *)&DAT_0079f800;
      pfVar16 = (float *)&DAT_00faa544;
      do {
        *(undefined4 *)((int)puVar6 + 0x7c) = 0x3f800000;
        *(undefined4 *)((int)puVar6 + 0x84) = 0x3f800000;
        *(undefined4 *)(puVar6 + 0x10) = 0xbf20d97c;
        fVar2 = *(float *)((int)lVar13 + 0x7c);
        *(undefined4 *)(puVar6 + 0x11) = 0x3f20d97c;
        dVar22 = (double)fastfunc::FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *(float *)((int)lVar13 + 0x80);
        *pfVar14 = (float)((double)*pfVar15 + dVar22);
        dVar22 = (double)fastfunc::FastFMod((double)(float)((double)fVar2 * dVar33),uVar10);
        fVar2 = *pfVar18;
        iVar20 = iVar20 + 1;
        pfVar15 = pfVar15 + 2;
        bVar1 = iVar20 < DAT_0079f5c0;
        pfVar14 = pfVar14 + 2;
        pfVar18 = pfVar18 + 2;
        *pfVar16 = (float)((double)fVar2 + dVar22);
        pfVar16 = pfVar16 + 2;
      } while (bVar1);
    }
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_0079f5c0,PTR_DAT_0079fa18,PTR_DAT_0079fa20,PTR_DAT_0079fa1c,9);
    iVar21 = iVar21 + 1;
    lVar13 = lVar13 + 8;
    iVar11 = DAT_0079f5c0;
  } while (iVar21 < 2);
  return;
}



//==== 0026f358  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1407(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1407 */

void mobyupdate_unsorted::UpdateMoby_1407(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1407_0026eed0_0070a3d0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0026f400  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1408_0026f400(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1408_0026f400(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar15;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  undefined **ppuVar16;
  ulonglong unaff_r22;
  undefined **ppuVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar18;
  undefined **ppuVar19;
  ulonglong unaff_r25;
  int iVar20;
  int *piVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar22;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar24;
  ulonglong unaff_r31;
  int iVar25;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar24 = uVar10 - 0x150;
  puVar7 = (ulonglong *)lVar24;
  *puVar7 = uVar10;
  puVar7[0x2c] = in_LR;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x21] = unaff_r31;
  puVar7[0x1c] = unaff_r26;
  puVar7[0x20] = unaff_r30;
  uVar9 = worldUpdateTime;
  pfVar4 = *(float **)(param_1 + 0x78);
  puVar7[0x1f] = unaff_r29;
  puVar7[0x1e] = unaff_r28;
  puVar7[0x1d] = unaff_r27;
  puVar7[0x1b] = unaff_r25;
  puVar7[0x1a] = unaff_r24;
  puVar7[0x19] = unaff_r23;
  puVar7[0x18] = unaff_r22;
  puVar7[0x17] = unaff_r21;
  puVar7[0x16] = unaff_r20;
  puVar7[0x15] = unaff_r19;
  puVar7[0x14] = unaff_r18;
  puVar7[0x13] = unaff_r17;
  puVar7[0x12] = unaff_r16;
  dVar26 = (double)fastfunc::FastIntToDouble(uVar9);
  dVar37 = (double)(float)((double)(float)((double)DAT_007a1988 * (double)mobyutil::g_FrameTime) *
                          dVar26);
  uVar11 = draw::GetEffectTex(dVar26,(double)DAT_007a1988,(double)mobyutil::g_FrameTime,DAT_007a1974
                             );
  vuchain::SetGSReg(0x18,uVar11);
  uVar11 = idol_draw::PackCmd(0,1,0,1,DAT_007a1970);
  vuchain::SetGSReg(3,uVar11);
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar11);
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar11);
  *pfVar4 = pfVar4[1];
  dVar26 = (double)fastfunc::FastWrapRot
                             (pfVar4[1],
                              (360.0 / (DAT_007a1980 * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar4[1] = (float)dVar26;
  mobyutil::MB_GetLights(param_1,uVar10 - 0xe0,uVar10 - 0xdc,uVar10 - 0xd8);
  iVar25 = *(int *)(puVar7 + 0xf);
  iVar15 = 0;
  iVar23 = *(int *)((int)puVar7 + 0x74);
  uVar5 = *(uint *)(puVar7 + 0xe);
  uVar8 = DAT_007a1978 << 0x18;
  iVar20 = 0;
  do {
    iVar22 = 0;
    if (0 < *(int *)((int)&DAT_0079fa40 + iVar20)) {
      dVar36 = 6.2831854820251465;
      dVar35 = 3.141592502593994;
      iVar13 = 0;
      dVar34 = -3.141592502593994;
      dVar33 = -0.16666656732559204;
      dVar32 = 0.008333025500178337;
      dVar31 = -0.0001980741071747616;
      iVar18 = 0;
      dVar26 = 2.601886990305502e-06;
      do {
        pfVar12 = (float *)(*(int *)((int)&PTR_DAT_007a194c + iVar20) + iVar13);
        dVar27 = (double)fastfunc::FastFMod((double)SQRT(*pfVar12 * *pfVar12 +
                                                         pfVar12[1] * pfVar12[1]),
                                            (double)DAT_007a197c);
        dVar27 = (double)fastfunc::FastAddRots((float)(dVar27 * dVar36) / DAT_007a197c);
        dVar28 = (double)fastfunc::FastWrapRot((float)dVar27,pfVar4[1]);
        fVar3 = DAT_007a1984;
        iVar14 = *(int *)((int)&PTR_DAT_007a1928 + iVar20) + iVar13;
        iVar22 = iVar22 + 1;
        dVar27 = (double)(float)(dVar35 - dVar28);
        if (dVar28 - (double)(float)(dVar35 - dVar28) < 0.0) {
          dVar27 = dVar28;
        }
        fVar1 = *(float *)(param_1 + 0x14);
        fVar2 = *(float *)(param_1 + 0x18);
        iVar6 = *(int *)((int)&PTR_DAT_007a1940 + iVar20);
        *(float *)(*(int *)((int)&PTR_DAT_007a1928 + iVar20) + iVar13) =
             *pfVar12 + *(float *)(param_1 + 0x10);
        iVar13 = iVar13 + 0xc;
        dVar29 = (double)(float)(dVar34 - dVar28);
        if ((double)(float)(dVar34 - dVar28) - dVar27 < 0.0) {
          dVar29 = dVar27;
        }
        dVar27 = (double)(float)(dVar29 * dVar29);
        *(float *)(iVar14 + 4) = pfVar12[1] + fVar1;
        dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar29));
        dVar28 = (double)(float)(dVar27 * dVar30);
        *(float *)(iVar14 + 8) =
             fVar3 * (float)((double)(float)(dVar27 * dVar28) * dVar26 +
                            (double)(float)(dVar28 * dVar31 +
                                           (double)(float)(dVar30 * dVar32 +
                                                          (double)(float)((double)(float)(dVar27 * 
                                                  dVar29) * dVar33 + dVar29)))) + pfVar12[2] + fVar2
        ;
        *(uint *)(iVar6 + iVar18) = uVar8 | iVar25 << 0x10 | iVar23 << 8 | uVar5;
        iVar18 = iVar18 + 4;
      } while (iVar22 < *(int *)((int)&DAT_0079fa40 + iVar20));
    }
    iVar15 = iVar15 + 1;
    iVar20 = iVar20 + 4;
  } while (iVar15 < 3);
  uVar11 = 0x3ff0000000000000;
  iVar25 = 0;
  do {
    iVar15 = 0;
    iVar23 = 0;
    piVar21 = &DAT_0079fa40;
    do {
      iVar20 = 0;
      if (0 < *piVar21) {
        iVar22 = 0;
        do {
          *(undefined4 *)((int)puVar7 + 0x7c) = 0x3f800000;
          *(undefined4 *)((int)puVar7 + 0x84) = 0x3f800000;
          *(undefined4 *)(puVar7 + 0x10) = 0xbf20d97c;
          fVar3 = *(float *)((int)lVar24 + 0x7c);
          *(undefined4 *)(puVar7 + 0x11) = 0x3f20d97c;
          dVar26 = (double)fastfunc::FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          fVar3 = *(float *)((int)lVar24 + 0x80);
          *(float *)(*(int *)((int)&PTR_DAT_007a1934 + iVar23) + iVar22) =
               (float)((double)*(float *)(*(int *)((int)&PTR_DAT_007a1958 + iVar23) + iVar22) +
                      dVar26);
          dVar26 = (double)fastfunc::FastFMod((double)(float)((double)fVar3 * dVar37),uVar11);
          iVar20 = iVar20 + 1;
          iVar18 = *(int *)((int)&PTR_DAT_007a1958 + iVar23) + iVar22;
          iVar13 = *(int *)((int)&PTR_DAT_007a1934 + iVar23) + iVar22;
          iVar22 = iVar22 + 8;
          *(float *)(iVar13 + 4) = (float)((double)*(float *)(iVar18 + 4) + dVar26);
        } while (iVar20 < *(int *)((int)&DAT_0079fa40 + iVar23));
      }
      iVar15 = iVar15 + 1;
      iVar23 = iVar23 + 4;
      piVar21 = piVar21 + 1;
    } while (iVar15 < 3);
    stub::STUB_00071170();
    iVar23 = 0;
    ppuVar19 = &PTR_DAT_007a1928;
    ppuVar17 = &PTR_DAT_007a1940;
    piVar21 = &DAT_0079fa40;
    ppuVar16 = &PTR_DAT_007a1934;
    do {
      draw::DrawMeshSet(*piVar21,*ppuVar19,*ppuVar17,*ppuVar16,9);
      iVar23 = iVar23 + 1;
      piVar21 = piVar21 + 1;
      ppuVar19 = ppuVar19 + 1;
      ppuVar17 = ppuVar17 + 1;
      ppuVar16 = ppuVar16 + 1;
    } while (iVar23 < 3);
    iVar25 = iVar25 + 1;
    lVar24 = lVar24 + 8;
  } while (iVar25 < 2);
  return;
}



//==== 0026f914  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1408(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1408 */

void mobyupdate_unsorted::UpdateMoby_1408(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1408_0026f400_0070a3e0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0026f9c0  ns=mobyupdate_helpers  size=0x454
// sig: undefined M1409_0026f9c0(void)
// callers(0): 
// callees(12): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000f1ef0 mobyutil::MB_GetLights; 00174f80 vuchain::SetGSReg; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502798 fastfunc::FastFMod; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1409_0026f9c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar10;
  int iVar11;
  ulonglong unaff_r25;
  float *pfVar12;
  uint uVar13;
  ulonglong unaff_r26;
  float *pfVar14;
  float *pfVar15;
  ulonglong unaff_r27;
  float *pfVar16;
  ulonglong unaff_r28;
  uint *puVar17;
  ulonglong unaff_r29;
  float *pfVar18;
  ulonglong unaff_r30;
  longlong lVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar19 = uVar8 - 0x130;
  puVar5 = (ulonglong *)lVar19;
  *puVar5 = uVar8;
  puVar5[0x28] = in_LR;
  puVar5[0x1e] = in_f24;
  puVar5[0x1f] = in_f25;
  puVar5[0x20] = in_f26;
  puVar5[0x21] = in_f27;
  puVar5[0x22] = in_f28;
  puVar5[0x23] = in_f29;
  puVar5[0x24] = in_f30;
  puVar5[0x25] = in_f31;
  puVar5[0x1c] = unaff_r30;
  puVar5[0x1b] = unaff_r29;
  puVar5[0x14] = unaff_r22;
  uVar7 = worldUpdateTime;
  pfVar15 = *(float **)(param_1 + 0x78);
  puVar5[0x1d] = unaff_r31;
  puVar5[0x1a] = unaff_r28;
  puVar5[0x19] = unaff_r27;
  puVar5[0x18] = unaff_r26;
  puVar5[0x17] = unaff_r25;
  puVar5[0x16] = unaff_r24;
  puVar5[0x15] = unaff_r23;
  puVar5[0x13] = unaff_r21;
  dVar20 = (double)fastfunc::FastIntToDouble(uVar7);
  dVar31 = (double)(float)((double)(float)((double)DAT_007a2034 * (double)mobyutil::g_FrameTime) *
                          dVar20);
  uVar9 = draw::GetEffectTex(dVar20,(double)DAT_007a2034,(double)mobyutil::g_FrameTime,DAT_007a2020)
  ;
  vuchain::SetGSReg(0x18,uVar9);
  uVar9 = idol_draw::PackCmd(0,1,0,1,DAT_007a201c);
  vuchain::SetGSReg(3,uVar9);
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar9);
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar9);
  *pfVar15 = pfVar15[1];
  dVar20 = (double)fastfunc::FastWrapRot
                             (pfVar15[1],
                              (360.0 / (DAT_007a202c * animationSpeed)) * 0.017453292 *
                              mobyutil::g_FrameTime);
  pfVar15[1] = (float)dVar20;
  mobyutil::MB_GetLights(param_1,uVar8 - 0xc0,uVar8 - 0xbc,uVar8 - 0xb8);
  iVar11 = *(int *)(puVar5 + 0xf);
  iVar4 = *(int *)((int)puVar5 + 0x74);
  uVar10 = 0;
  pfVar12 = (float *)&DAT_00fac604;
  uVar13 = *(uint *)(puVar5 + 0xe);
  dVar20 = 6.2831854820251465;
  uVar6 = DAT_007a2024 << 0x18;
  dVar25 = 3.141592502593994;
  dVar26 = -3.141592502593994;
  dVar27 = -0.16666656732559204;
  dVar28 = 0.008333025500178337;
  dVar29 = -0.0001980741071747616;
  dVar30 = 2.601886990305502e-06;
  pfVar14 = (float *)&DAT_00fac608;
  pfVar16 = (float *)&DAT_00fac60c;
  puVar17 = &DAT_00facb54;
  pfVar18 = (float *)&DAT_007a19b0;
  do {
    dVar21 = (double)fastfunc::FastFMod((double)SQRT(*pfVar18 * *pfVar18 + pfVar18[1] * pfVar18[1]),
                                        (double)DAT_007a2028);
    dVar21 = (double)fastfunc::FastAddRots((float)(dVar21 * dVar20) / DAT_007a2028);
    dVar22 = (double)fastfunc::FastWrapRot((float)dVar21,pfVar15[1]);
    fVar1 = *pfVar18;
    fVar2 = pfVar18[1];
    uVar10 = uVar10 + 1;
    dVar21 = (double)(float)(dVar25 - dVar22);
    if (dVar22 - (double)(float)(dVar25 - dVar22) < 0.0) {
      dVar21 = dVar22;
    }
    fVar3 = pfVar18[2];
    pfVar18 = pfVar18 + 3;
    *pfVar12 = fVar1 + *(float *)(param_1 + 0x10);
    fVar1 = DAT_007a2030;
    pfVar12 = pfVar12 + 3;
    dVar23 = (double)(float)(dVar26 - dVar22);
    if ((double)(float)(dVar26 - dVar22) - dVar21 < 0.0) {
      dVar23 = dVar21;
    }
    *pfVar14 = fVar2 + *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    dVar21 = (double)(float)(dVar23 * dVar23);
    *puVar17 = uVar6 | iVar11 << 0x10 | iVar4 << 8 | uVar13;
    pfVar14 = pfVar14 + 3;
    puVar17 = puVar17 + 1;
    dVar22 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
    dVar24 = (double)(float)(dVar21 * dVar22);
    *pfVar16 = fVar1 * (float)((double)(float)(dVar21 * dVar24) * dVar30 +
                              (double)(float)(dVar24 * dVar29 +
                                             (double)(float)(dVar22 * dVar28 +
                                                            (double)(float)((double)(float)(dVar21 *
                                                                                           dVar23) *
                                                                            dVar27 + dVar23)))) +
               fVar3 + fVar2;
    pfVar16 = pfVar16 + 3;
  } while (uVar10 < 0x44);
  iVar11 = 0;
  uVar9 = 0x3ff0000000000000;
  do {
    uVar13 = 0;
    pfVar15 = (float *)&DAT_007a1ce0;
    pfVar12 = (float *)&DAT_00fac934;
    pfVar14 = (float *)&DAT_007a1ce4;
    pfVar16 = (float *)&DAT_00fac938;
    do {
      *(undefined4 *)((int)puVar5 + 0x7c) = 0x3f800000;
      *(undefined4 *)((int)puVar5 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x10) = 0xbf20d97c;
      fVar1 = *(float *)((int)lVar19 + 0x7c);
      *(undefined4 *)(puVar5 + 0x11) = 0x3f20d97c;
      dVar20 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *(float *)((int)lVar19 + 0x80);
      *pfVar12 = (float)((double)*pfVar15 + dVar20);
      dVar20 = (double)fastfunc::FastFMod((double)(float)((double)fVar1 * dVar31),uVar9);
      fVar1 = *pfVar14;
      uVar13 = uVar13 + 1;
      pfVar15 = pfVar15 + 2;
      pfVar12 = pfVar12 + 2;
      pfVar14 = pfVar14 + 2;
      *pfVar16 = (float)((double)fVar1 + dVar20);
      pfVar16 = pfVar16 + 2;
    } while (uVar13 < 0x44);
    stub::STUB_00071170();
    draw::DrawMeshSet(DAT_007a1990,PTR_DAT_007a2010,PTR_DAT_007a2018,PTR_DAT_007a2014,9);
    iVar11 = iVar11 + 1;
    lVar19 = lVar19 + 8;
  } while (iVar11 < 2);
  return;
}



//==== 0026fe14  ns=mobyupdate_unsorted  size=0x80
// sig: undefined UpdateMoby_1409(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d7e0 draw::RegisterPostDraw; 000f1ec8 mobyfunc::SetColorOfMoby

/* Moby 1409 */

void mobyupdate_unsorted::UpdateMoby_1409(MobyInstance *moby)

{
  if (moby->state == '\0') {
    mobyfunc::SetColorOfMoby(moby,0x40,0x40,0x40);
    moby->state = '\x01';
  }
  else {
    draw::RegisterPostDraw(&PTR_M1409_0026f9c0_0070a3f0,moby);
    moby->drawDistance = 0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 0026fe98  ns=mobyupdate_helpers  size=0x148
// sig: undefined M1410_0026fe98(void)
// callers(1): 002708f0 mobyupdate_unsorted::UpdateMoby_1410
// callees(0): 

void mobyupdate_helpers::M1410_0026fe98(int param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  Spline *pSVar22;
  float *pfVar23;
  longlong lVar24;
  
  iVar20 = *(int *)(param_1 + 0x78);
  iVar21 = *(int *)(iVar20 + 0xa0);
  if (iVar21 != -1) {
    pSVar22 = Splines[iVar21];
    if (pSVar22->cnt == 7) {
      pfVar23 = (float *)&DAT_007a2060;
      fVar1 = *(float *)(param_1 + 0xc0);
      fVar2 = *(float *)(param_1 + 0xd0);
      lVar24 = 7;
      fVar3 = *(float *)(param_1 + 0xe0);
      fVar4 = *(float *)(param_1 + 0xc4);
      fVar5 = *(float *)(param_1 + 0xd4);
      fVar6 = *(float *)(param_1 + 0xe4);
      fVar7 = *(float *)(param_1 + 200);
      fVar8 = *(float *)(param_1 + 0xd8);
      fVar9 = *(float *)(param_1 + 0xe8);
      fVar10 = *(float *)(param_1 + 0xcc);
      fVar11 = *(float *)(param_1 + 0xdc);
      fVar12 = *(float *)(param_1 + 0xec);
      fVar13 = *(float *)(param_1 + 0x10);
      fVar14 = *(float *)(param_1 + 0x14);
      fVar15 = *(float *)(param_1 + 0x18);
      do {
        fVar16 = pfVar23[1];
        fVar17 = *pfVar23;
        fVar18 = pfVar23[2];
        fVar19 = pfVar23[3];
        pfVar23 = pfVar23 + 4;
        pSVar22->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
        pSVar22->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
        pSVar22->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
        pSVar22->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
        pSVar22 = (Spline *)pSVar22->points;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      DAT_0096bfba = (undefined2)*(undefined4 *)(iVar20 + 0xa0);
    }
  }
  return;
}



