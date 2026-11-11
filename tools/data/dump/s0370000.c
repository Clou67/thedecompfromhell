//==== 00370f9c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M428_00370f9c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M428_00370f9c(void)

{
  DAT_008414cc = 0x10000;
  return;
}



//==== 00370ff0  ns=Global  size=0x334
// sig: undefined SpawnMoby_428_Feather(void)
// callers(2): 003216b8 FUN_003216b8; 00321a20 mobyupdate_unsorted::UpdateMoby_270
// callees(9): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 0010c000 mobyutil::MB_CopyHeroLights; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand
// strings: 00370fb4: '?333@@' (raw)

MobyInstance * SpawnMoby_428_Feather(undefined8 param_1,f32 *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  MobyInstance *pMVar5;
  uint uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pMVar5 = mobyfunc::CreateMoby(FEATHER);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = '@';
    pMVar5->drawDistance = 0x20;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    pMVar5->modeBits = pMVar5->modeBits | CAN_BE_AUTO_TARGETED;
    pMVar5->setByGroup = '\0';
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    pfVar1 = (float *)pMVar5->pVar;
    (pMVar5->pos).z = param_2[2];
    (pMVar5->pos).w = param_2[3];
    dVar9 = 0.699999988079071;
    dVar8 = (double)mobyutil::MB_randRangeFloat(0.2,0.7);
    (pMVar5->pos).z = (float)((double)(pMVar5->pos).z + dVar8);
    (pMVar5->pos).x = *param_3 * 3.0 + (pMVar5->pos).x;
    (pMVar5->pos).y = param_3[1] * 3.0 + (pMVar5->pos).y;
    *pfVar1 = *param_3;
    pfVar1[1] = param_3[1];
    pfVar1[2] = param_3[2];
    pfVar1[3] = param_3[3];
    dVar10 = 0.1745329201221466;
    dVar8 = (double)mobyutil::MB_randRangeSigned(0x3fc6571840000000,0x3fe0c15240000000);
    (pMVar5->rotation).y = (float)dVar8;
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar10,0.7853982);
    (pMVar5->rotation).x = (float)dVar8;
    dVar10 = 200.0;
    dVar8 = (double)mobyutil::MB_randRangeFloat(200.0,370.0);
    fVar2 = mobyutil::g_FrameTime;
    dVar11 = 0.01745329238474369;
    pfVar1[9] = -NAN;
    pfVar1[0xb] = (float)(dVar8 * 0.01745329238474369) * fVar2;
    uVar6 = rand();
    if ((uVar6 & 1) != 0) {
      pfVar1[9] = 1.4013e-45;
      (pMVar5->rotation).y = -(pMVar5->rotation).y;
    }
    dVar8 = (double)mobyutil::MB_randRot();
    (pMVar5->rotation).z = (float)dVar8;
    dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar10,550.0);
    pfVar1[10] = -((float)(dVar8 * dVar11) * mobyutil::g_FrameTime);
    dVar8 = (double)mobyutil::MB_randRot();
    pfVar1[4] = (float)dVar8;
    dVar8 = (double)mobyutil::MB_randRot();
    pfVar1[5] = (float)dVar8;
    uVar3 = fastfunc::FastDoubleToInt((double)(float)((double)(longlong)DAT_008414f4 * dVar9));
    uVar4 = fastfunc::FastDoubleToInt((double)((float)(longlong)DAT_008414f4 * 1.2));
    iVar7 = mobyutil::MB_randRange(uVar3,uVar4);
    pfVar1[7] = (float)(int)(animationSpeed * ((float)(longlong)iVar7 + 0.5));
    fVar2 = pMVar5->scale * DAT_008414f0;
    pMVar5->scale = fVar2;
    if (g_goldWeaponsArray.morphORay != '\0') {
      pMVar5->scale = fVar2 * 2.0;
    }
    dVar8 = (double)mobyutil::MB_randRangeFloat(-1.2,-0.4);
    pfVar1[8] = (float)(dVar8 * (double)mobyutil::g_FrameTime);
    mobyfunc::UpdateMobyTransform(pMVar5);
    mobyutil::MB_CopyHeroLights(pMVar5);
  }
  return pMVar5;
}



//==== 00371330  ns=mobyupdate_unsorted  size=0x1a8
// sig: undefined UpdateMoby_428(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 004fff60 fastfunc::FastDecTimerS32; 00500060 fastfunc::FastDecTimerS8; 00502578 fastfunc::FastWrapRot

/* Moby 428 */

void mobyupdate_unsorted::UpdateMoby_428(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  fVar2 = pfVar1[1] * DAT_008414f8;
  *pfVar1 = *pfVar1 * DAT_008414f8;
  pfVar1[1] = fVar2;
  fVar2 = -(DAT_0071f418 * 15.0 - pfVar1[2]);
  pfVar1[2] = fVar2;
  if (fVar2 < pfVar1[8]) {
    pfVar1[2] = pfVar1[8];
  }
  dVar4 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar1[10]);
  fVar2 = pfVar1[9];
  (moby->rotation).z = (float)dVar4;
  dVar4 = (double)fastfunc::FastWrapRot
                            ((moby->rotation).x,pfVar1[0xb] * (float)(longlong)(int)fVar2);
  (moby->rotation).x = (float)dVar4;
  if (0.7853981852531433 < ABS(dVar4)) {
    pfVar1[9] = (float)-(int)pfVar1[9];
  }
  iVar3 = fastfunc::FastDecTimerS32(pfVar1 + 7);
  if ((iVar3 == 0) && (moby->enabled != '\0')) {
    if (((int)pfVar1[7] < (int)(animationSpeed * 30.5)) &&
       (iVar3 = fastfunc::FastDecTimerS8((longlong)(int)moby + 0x23), iVar3 != 0)) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 003714d8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M429_003714d8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M429_003714d8(void)

{
  DAT_00841564 = 0x10000;
  return;
}



//==== 00371520  ns=mobyupdate_unsorted  size=0x9d4
// sig: undefined UpdateMoby_429(MobyInstance * moby)
// callers(0): 
// callees(9): 000c8444 hud::RegisterHUDCallback; 000c90a0 hud::Hud_ShowEntryById; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 0044cddc FUN_0044cddc; 004d3870 FUN_004d3870
// strings: 006567a8: 'Deserter' | 006567b8: 'Soldier' | 0037150c: '?fff?' (raw)

/* Moby 429 */

void mobyupdate_unsorted::UpdateMoby_429(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  u8 uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  int *piVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  float fVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x120;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x26] = in_LR;
  puVar12[0x21] = in_f29;
  puVar12[0x22] = in_f30;
  puVar12[0x23] = in_f31;
  puVar12[0x20] = unaff_r31;
  puVar12[0x1f] = unaff_r30;
  uVar3 = moby->state;
  pfVar9 = (float *)moby->pVar;
  puVar12[0x1e] = unaff_r29;
  puVar12[0x1d] = unaff_r28;
  puVar12[0x1c] = unaff_r27;
  if (uVar3 == '\x05') {
    fVar19 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if ((3.0 <= SQRT(fVar5 * fVar5 + fVar19 * fVar19)) || (pfVar9[0x4b] != 4.2039e-45)) {
      pfVar9[0x4c] = -NAN;
    }
    else {
      bVar4 = moby->levelFlagIdx;
      uVar8 = moby->uid;
      (&DAT_00a53964)[(short)uVar8] = bVar4 + 2;
      if ((bVar4 == 0xff) || (((&DAT_00a202c0)[bVar4] != -1 && (g_LevelFlags[Level][bVar4] == -1))))
      {
        (&DAT_00a545c4)[(short)uVar8] = bVar4 + 2;
      }
      if (pfVar9[0x4c] == -NAN) {
        fVar19 = (float)hud::RegisterHUDCallback
                                  (0xc,0,&PTR_PromptHud_Init_00705750,&PTR_PromptHud_Update_00705758
                                   ,&PTR_Draw_PromptMsg_00705788,(int *)0x0,0);
        pfVar9[0x4c] = fVar19;
      }
      else {
        hud::Hud_ShowEntryById((int)pfVar9[0x4c],10);
      }
      if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (999 < g_boltCount)) {
        g_boltCount = g_boltCount + -1000;
        FUN_0044cddc(MobyInstance + (int)pfVar9[0x4d]);
        moby->state = '\x06';
      }
    }
  }
  else if (uVar3 == '\x04') {
    piVar10 = (int *)pfVar9[0x18];
    iVar18 = *piVar10;
    iVar23 = (int)pfVar9[0x14] + iVar18 + (int)*(char *)(pfVar9 + 0x15);
    fVar24 = (float)(iVar23 - (iVar23 / iVar18) * iVar18);
    fVar19 = (float)piVar10[(int)fVar24 * 4 + 4] - (moby->pos).x;
    fVar5 = (float)piVar10[(int)fVar24 * 4 + 5] - (moby->pos).y;
    pfVar21 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar6 = ABS(fVar19);
    fVar7 = ABS(fVar5);
    *(float *)(puVar12 + 0xe) = fVar19;
    *(float *)((int)puVar12 + 0x74) = fVar5;
    *(float *)(puVar12 + 0xf) = fVar6 - fVar7;
    dVar27 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
    fVar19 = ABS(*(float *)(puVar12 + 0xe));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar19 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar1 = ABS(*(float *)((int)puVar12 + 0x74));
    if (*(float *)(puVar12 + 0xf) - 0.0 < 0.0) {
      fVar1 = fVar6;
    }
    dVar30 = dVar27;
    if (0.0 < fVar19) {
      lVar16 = uVar14 - 0x110;
      lVar22 = uVar14 - 0x88;
      lVar20 = uVar14 - 0x98;
      lVar25 = 2;
      fVar19 = (fVar1 - fVar19) / (fVar1 + fVar19);
      fVar6 = fVar19 * fVar19;
      *(float *)((int)puVar12 + 0x94) = fVar19;
      *(float *)((int)puVar12 + 0x8c) = fVar19;
      *(float *)(puVar12 + 0x12) = fVar19;
      *(float *)(puVar12 + 0x11) = fVar19;
      fVar19 = fVar6 * fVar6;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar6;
      *(float *)(puVar12 + 0x12) = *(float *)(puVar12 + 0x12) * fVar19;
      *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0x94) * fVar19 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar19 * fVar19;
        iVar18 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar19 * fVar19;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar14 - 0x98;
      pfVar21 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar20 = lVar22;
      do {
        fVar19 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar19;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar23 = (int)lVar22;
        lVar17 = lVar17 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0x88)) +
                          *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) + *(float *)(iVar23 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar30,0x3fa99999a0000000,0x3fecccccc0000000,0x3fe0000000000000,moby,pfVar21,
               pfVar9 + 0x4a);
    dVar28 = (double)(moby->pos).y;
    iVar18 = (int)pfVar9[0x18] + (int)fVar24 * 0x10;
    dVar29 = (double)(moby->pos).x;
    dVar31 = (double)(moby->pos).z;
    fVar5 = (float)((double)*(float *)(iVar18 + 0x14) - dVar28);
    fVar7 = (float)((double)*(float *)(iVar18 + 0x10) - dVar29);
    fVar6 = (float)((double)*(float *)(iVar18 + 0x18) - dVar31);
    dVar33 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    fVar19 = (float)((double)(DAT_00841588 * mobyutil::g_FrameTime) / dVar33);
    dVar30 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar30 = (double)(fVar19 * fVar5);
    }
    dVar32 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar32 = (double)(fVar19 * fVar7);
    }
    dVar26 = dVar27;
    if (dVar27 - dVar33 < 0.0) {
      dVar26 = (double)(fVar19 * fVar6);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar30 = (double)(fVar19 * fVar5);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar32 = (double)(fVar19 * fVar7);
    }
    if (dVar33 - dVar27 < 0.0) {
      dVar26 = (double)(fVar19 * fVar6);
    }
    fVar19 = (float)(dVar28 + dVar30);
    fVar5 = (float)(dVar29 + dVar32);
    fVar7 = (float)(dVar31 + dVar26);
    fVar6 = (float)((double)fVar19 - (double)*(float *)(iVar18 + 0x14));
    fVar1 = (float)((double)fVar5 - (double)*(float *)(iVar18 + 0x10));
    fVar2 = (float)((double)fVar7 - (double)*(float *)(iVar18 + 0x18));
    (moby->pos).x = fVar5;
    (moby->pos).y = fVar19;
    (moby->pos).z = fVar7;
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6) < 0.2) {
      if ((int)fVar24 < *(int *)pfVar9[0x18] + -1) {
        pfVar9[0x14] = fVar24;
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (uVar3 == '\x03') {
    dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((12.0 <= dVar27) && (dVar27 <= 30.0)) {
      fVar19 = *(float *)((int)pfVar9[0x18] + 0x20) - (moby->pos).x;
      fVar5 = *(float *)((int)pfVar9[0x18] + 0x24) - (moby->pos).y;
      fVar6 = ABS(fVar19);
      fVar7 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x7c) = fVar19;
      *(float *)(puVar12 + 0x10) = fVar5;
      *(float *)((int)puVar12 + 0x84) = fVar6 - fVar7;
      dVar27 = 0.0;
      uVar15 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
      fVar19 = ABS(*(float *)((int)puVar12 + 0x7c));
      if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
        fVar19 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar24 = ABS(*(float *)(puVar12 + 0x10));
      if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
        fVar24 = fVar6;
      }
      if (0.0 < fVar19) {
        lVar16 = uVar14 - 0x110;
        lVar20 = uVar14 - 0x78;
        lVar22 = uVar14 - 0x68;
        lVar25 = 2;
        fVar19 = (fVar24 - fVar19) / (fVar24 + fVar19);
        fVar6 = fVar19 * fVar19;
        *(float *)((int)puVar12 + 0xb4) = fVar19;
        *(float *)((int)puVar12 + 0xac) = fVar19;
        *(float *)(puVar12 + 0x16) = fVar19;
        *(float *)(puVar12 + 0x15) = fVar19;
        fVar19 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar6;
        *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar19;
        *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar19 * fVar6;
        do {
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar19 * fVar19;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar19 * fVar19;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar22 = uVar14 - 0x78;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar19 = *pfVar21;
          fVar6 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar19;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar23 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xa8)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar5);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar27,0x3fa99999a0000000,0x3fecccccc0000000,0x3fe0000000000000,moby,&DAT_003714f0,
                 pfVar9 + 0x4a);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x02') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 6.5);
        mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
      moby->state = '\x04';
    }
  }
  else if (uVar3 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      *(undefined1 *)(pfVar9 + 0x22) = 0xff;
      if (moby->animationId != '\x03') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 6.5);
        mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
      moby->state = '\x03';
    }
  }
  else if (uVar3 == '\x01') {
    if ((((uint)pfVar9[0x49] & 1) != 0) && (iVar18 = FUN_004d3870(moby,pfVar9 + 0x20), iVar18 != 0))
    {
      moby->state = '\x02';
    }
  }
  else if (uVar3 == '\0') {
    fVar19 = pfVar9[0x49];
    pfVar9[0x49] = (float)((uint)fVar19 | 1);
    if (pfVar9[0x30] == 0.0) {
      pfVar9[0x49] = (float)((uint)fVar19 & 0xfffffffe);
    }
    uVar13 = g_heroMobyPtr->light;
    moby->color = g_heroMobyPtr->color;
    moby->light = uVar13;
    mobyutil::MB_InitDefaultParams(pfVar9);
    pfVar9[0x11] = 0.25;
    pfVar9[0xf] = 0.03;
    pfVar9[0x10] = 0.3;
    fVar19 = DAT_00841588 * mobyutil::g_FrameTime;
    pfVar9[3] = 2.0;
    pfVar9[2] = 2.0;
    pfVar9[0xe] = (float)((uint)pfVar9[0xe] | 8);
    pfVar9[9] = fVar19;
    if ((int)pfVar9[0x19] < 0) {
      moby->state = '\x05';
    }
    else {
      pSVar11 = Splines[(int)pfVar9[0x19]];
      pfVar9[0x18] = (float)pSVar11;
      (moby->pos).x = pSVar11->points[0].x;
      (moby->pos).y = pSVar11->points[0].y;
      (moby->pos).z = pSVar11->points[0].z;
      fVar19 = pSVar11->points[0].w;
      pfVar9[0x14] = 0.0;
      (moby->pos).w = fVar19;
      moby->state = '\x03';
      if (moby->animationId != '\x03') {
        puVar12[0x19] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar12 + 0xcc));
      }
    }
    if (pfVar9[0x4b] == 4.2039e-45) {
      pfVar9[0x4c] = -NAN;
      pfVar9[0x28] = (float)"Deserter";
    }
    else {
      pfVar9[0x28] = (float)"Soldier";
    }
  }
  return;
}



//==== 00371ef4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M430_00371ef4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M430_00371ef4(void)

{
  DAT_008415d8 = 0x10000;
  return;
}



//==== 00371f28  ns=mobyupdate_unsorted  size=0x6c4
// sig: undefined UpdateMoby_430(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots

/* Moby 430 */

void mobyupdate_unsorted::UpdateMoby_430(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  float local_60;
  float local_5c;
  float local_58;
  f32 local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  pMVar17 = MobyInstance;
  piVar8 = (int *)moby->pVar;
  fVar9 = moby->animationBlend;
  if (piVar8 == (int *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') {
        fVar7 = -(mobyutil::g_FrameTime * 2.0 - (float)piVar8[6]);
        piVar8[6] = (int)fVar7;
        if (fVar7 < 0.0) {
          piVar8[6] = 0;
          fVar7 = 0.0;
        }
        moby->animationBlend = fVar7;
        dVar20 = (double)(float)piVar8[3];
        dVar19 = (double)fastfunc::FastAddRots((float)piVar8[1] * 0.017453292 * (float)piVar8[6]);
        dVar19 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar19);
        fVar7 = moby->animationBlend;
        (moby->rotation).z = (float)dVar19;
        if (fVar7 == fVar9) {
          iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 != 0) {
            iVar18 = piVar8[5];
            if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar18].state != '\0')) {
              sound::sound_Kill(iVar18);
            }
            piVar8[5] = -1;
          }
        }
        else if ((piVar8[6] == 0x3f800000) || (piVar8[6] == 0)) {
          iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 != 0) {
            iVar18 = piVar8[5];
            if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar18].state != '\0')) {
              sound::sound_Kill(iVar18);
            }
            piVar8[5] = -1;
          }
        }
        else {
          iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
          if (iVar18 == 0) {
            iVar18 = sound::PlayMobySound(0,4,moby);
            piVar8[5] = iVar18;
          }
        }
        if (piVar8[6] == 0x3f800000) {
          moby->state = '\x04';
        }
      }
      else {
        if (uVar1 == '\x02') {
          iVar18 = piVar8[2];
          if (iVar18 == -1) {
            return;
          }
          iVar11 = piVar8[4];
          if (iVar11 == -1) {
            return;
          }
          fVar9 = MobyInstance[iVar18].pos.y;
          fVar7 = MobyInstance[iVar18].pos.x;
          fVar3 = Cuboids[iVar11].pos.y;
          fVar4 = Cuboids[iVar11].pos.x;
          fVar5 = fVar9 - fVar3;
          fVar6 = fVar7 - fVar4;
          if (0.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
            fVar3 = fVar3 - fVar9;
            fVar5 = MobyInstance[iVar18].pos.z;
            fVar4 = fVar4 - fVar7;
            fVar14 = Cuboids[iVar11].pos.z - fVar5;
            fVar6 = 0.0;
            fVar16 = SQRT(fVar14 * fVar14 + fVar4 * fVar4 + fVar3 * fVar3);
            fVar15 = (mobyutil::g_FrameTime * 5.0) / fVar16;
            fVar13 = fVar6;
            if (0.0 - fVar16 < 0.0) {
              fVar13 = fVar14 * fVar15;
            }
            fVar12 = fVar6;
            if (0.0 - fVar16 < 0.0) {
              fVar12 = fVar3 * fVar15;
            }
            if (0.0 - fVar16 < 0.0) {
              fVar6 = fVar4 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar13 = fVar14 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar12 = fVar3 * fVar15;
            }
            if (fVar16 - 0.0 < 0.0) {
              fVar6 = fVar4 * fVar15;
            }
            MobyInstance[iVar18].pos.z = fVar5 + fVar13;
            pMVar17[iVar18].pos.y = fVar9 + fVar12;
            pMVar17[iVar18].pos.x = fVar7 + fVar6;
            return;
          }
          piVar8[6] = 0x3f800000;
          moby->state = '\x03';
          piVar8[2] = -1;
          return;
        }
        if (uVar1 == '\x01') {
          iVar18 = *piVar8;
          if ((iVar18 != -1) && (MobyInstance[iVar18].oClass == BOLT_CRANK)) {
            pfVar10 = (float *)MobyInstance[iVar18].pVar;
            moby->animationBlend = *pfVar10;
            dVar20 = (double)(float)piVar8[3];
            dVar19 = (double)fastfunc::FastAddRots((float)piVar8[1] * 0.017453292 * *pfVar10);
            dVar19 = (double)fastfunc::FastWrapRot((float)dVar20,(float)dVar19);
            fVar7 = moby->animationBlend;
            (moby->rotation).z = (float)dVar19;
            if (fVar7 == fVar9) {
              iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 != 0) {
                iVar18 = piVar8[5];
                if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
                   (sound::g_SoundChannels[iVar18].state != '\0')) {
                  sound::sound_Kill(iVar18);
                }
                piVar8[5] = -1;
              }
            }
            else if ((*pfVar10 == 1.0) || (*pfVar10 == 0.0)) {
              iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 != 0) {
                iVar18 = piVar8[5];
                if (((iVar18 != -1) && (sound::g_SoundChannels[iVar18].pMoby == moby)) &&
                   (sound::g_SoundChannels[iVar18].state != '\0')) {
                  sound::sound_Kill(iVar18);
                }
                piVar8[5] = -1;
              }
            }
            else {
              iVar18 = sound::IsMobyPlayingSound(moby,piVar8[5]);
              if (iVar18 == 0) {
                iVar18 = sound::PlayMobySound(0,4,moby);
                piVar8[5] = iVar18;
              }
            }
            if ((*pfVar10 == 1.0) && (piVar8[4] != -1)) {
              moby->state = '\x02';
            }
          }
        }
        else if (uVar1 == '\0') {
          mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
          fVar2 = (moby->rotation).z;
          moby->unk58 = 0.0;
          piVar8[3] = (int)fVar2;
          moby->state = '\x01';
        }
      }
      if (piVar8[2] != -1) {
        mobyfunc::GetBonePosition(moby,0,&local_60);
        mobyfunc::GetBonePosition(moby,1,&local_50);
        pMVar17 = MobyInstance;
        iVar18 = piVar8[2];
        MobyInstance[iVar18].pos.x = local_60 + local_50;
        pMVar17[iVar18].pos.y = local_5c + local_4c;
        pMVar17[iVar18].pos.z = local_58 + local_48;
        pMVar17[iVar18].pos.w = local_54;
        pMVar17 = MobyInstance;
        iVar18 = piVar8[2];
        fVar9 = MobyInstance[iVar18].pos.y;
        fVar7 = MobyInstance[iVar18].pos.z;
        MobyInstance[iVar18].pos.x = MobyInstance[iVar18].pos.x * 0.5;
        pMVar17[iVar18].pos.y = fVar9 * 0.5;
        pMVar17[iVar18].pos.z = fVar7 * 0.5;
        dVar19 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
        MobyInstance[piVar8[2]].rotation.z = (float)dVar19;
      }
    }
  }
  return;
}



//==== 003725f8  ns=mobyupdate_unsorted  size=0x2a0
// sig: undefined UpdateMoby_431(MobyInstance * moby)
// callers(0): 
// callees(6): 000ef810 mobyfunc::InitMobyInstance; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 0010675c mobyutil::MB_damage; 004fff60 fastfunc::FastDecTimerS32

/* Moby 431 */

void mobyupdate_unsorted::UpdateMoby_431(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  f32 fVar4;
  ushort uVar5;
  void *pvVar6;
  MobyClass *pMVar7;
  MobyInstance *moby_00;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *puVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pvVar6 = moby->pVar;
  uVar13 = ZEXT48(pvVar6);
  iVar11 = mobyutil::MB_damage(moby,0x210000,0);
  bVar1 = moby->state;
  if (iVar11 == 0) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0x54,uVar13);
        auVar16 = loadVectorRightIndexed(100,uVar13);
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar14 | auVar16,auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x50,uVar13
                          );
        *(undefined4 *)((int)pvVar6 + 0x50U & 0xfffffffc) = uVar8;
        moby->state = '\x01';
        return;
      }
      iVar11 = fastfunc::FastDecTimerS32(uVar13 + 0x50);
      if (iVar11 == 0) {
        return;
      }
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = loadVectorLeftIndexed(0x54,uVar13);
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar16 = loadVectorRightIndexed(100,uVar13);
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar17,auVar15 | auVar16,auVar14);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x50,uVar13);
      *(undefined4 *)((int)pvVar6 + 0x50U & 0xfffffffc) = uVar8;
      bVar1 = moby->group;
      puVar12 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
      if (puVar12 == (ushort *)0x0) {
        return;
      }
      uVar5 = *puVar12;
      do {
        moby_00 = MobyInstance + (uVar5 & 0x7fff);
        if (0x7f < moby_00->state) {
          pvVar6 = moby_00->pVar;
          uVar13 = ZEXT48(pvVar6);
          mobyfunc::InitMobyInstance(moby_00,0xfc);
          moby_00->pVar = pvVar6;
          moby_00->group = bVar1;
          auVar14 = ZEXT416(0xfffffff0);
          uVar9 = g_heroMobyPtr->color;
          uVar10 = g_heroMobyPtr->light;
          moby_00->updateDistance = '@';
          moby_00->color = uVar9;
          moby_00->light = uVar10;
          moby_00->drawDistance = 0x40;
          fVar2 = (moby->pos).z;
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).w;
          pMVar7 = moby_00->pClass;
          (moby_00->pos).x = (moby->pos).x;
          (moby_00->pos).y = fVar3;
          (moby_00->pos).w = fVar4;
          (moby_00->pos).z = fVar2 + 5.0;
          moby_00->collision = pMVar7->collision;
          auVar15 = loadVectorLeftIndexed(0x24,uVar13);
          auVar16 = loadVectorRightIndexed(0x34,uVar13);
          auVar14 = vectorShiftRightAlgebraicWord
                              (auVar15 | auVar16,
                               auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
          auVar14 = vectorConvertFromSignedFixedPointWord(auVar14,0);
          auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x20,
                             uVar13);
          *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar8;
          fVar3 = (moby->rotation).z;
          moby_00->state = '\x03';
          (moby_00->rotation).z = fVar3;
          moby_00->modeBits = CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED;
          uVar13 = mobyutil::MB_randInt(0xff);
          if ((uVar13 & 1) != 0) {
            moby_00->modeBits = moby_00->modeBits | MIRROR;
          }
          mobyfunc::UpdateMobyTransform(moby_00);
          return;
        }
        uVar5 = puVar12[1];
        puVar12 = puVar12 + 1;
      } while (-2 < (short)uVar5);
      return;
    }
    if (bVar1 != 99) {
      return;
    }
  }
  else {
    moby->state = 'c';
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00372898  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1052_00372898(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1052_00372898(void)

{
  DAT_00841648 = 0x10000;
  return;
}



//==== 003728b8  ns=mobyupdate_unsorted  size=0x3cc
// sig: undefined UpdateMoby_{432_1052}(MobyInstance * moby)
// callers(0): 
// callees(7): 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fddc0 mobyutil::MB_SetAnimation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 432
   Moby 1052 */

void mobyupdate_unsorted::UpdateMoby__432_1052_(MobyInstance *moby)

{
  byte bVar1;
  MOBY_OCLASSES MVar2;
  int *piVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  MobyClass *pMVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = (int *)moby->pVar;
  fVar4 = moby->animationBlend;
  if (piVar3 == (int *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    if (bVar1 == 0) {
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
      MVar2 = moby->oClass;
      moby->unk58 = 0.0;
      moby->state = '\x01';
      piVar3[1] = -1;
      if (MVar2 == EUDORA_BRIDGE) {
        moby->oClass = BRIDGE_041C;
        uVar8 = (uint)DAT_00a358dc;
        moby->mClass = DAT_00a358dc;
        pMVar7 = MobyClasses[uVar8];
        moby->field44_0x71 = -1;
        moby->pClass = pMVar7;
        moby->scale = pMVar7->gScale;
        mobyfunc::UpdateMobyFrameData(moby);
        moby->collision = moby->pClass->collision;
        mobyfunc::PostUpdateMobyLockTransform(moby);
      }
    }
    else if (bVar1 < 2) {
      iVar9 = *piVar3;
      if ((iVar9 != -1) && (MobyInstance[iVar9].oClass == BOLT_CRANK)) {
        pfVar5 = (float *)MobyInstance[iVar9].pVar;
        fVar6 = *pfVar5;
        moby->animationBlend = *pfVar5;
        if (fVar6 == fVar4) {
          iVar9 = sound::IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 != 0) {
            iVar9 = piVar3[1];
            if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar9].state != '\0')) {
              sound::sound_Kill(iVar9);
            }
            piVar3[1] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar9 = sound::IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 != 0) {
            iVar9 = piVar3[1];
            if (((iVar9 != -1) && (sound::g_SoundChannels[iVar9].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar9].state != '\0')) {
              sound::sound_Kill(iVar9);
            }
            piVar3[1] = -1;
          }
          sound::PlayMobySound(1,0,moby);
          if ((moby->oClass == BRIDGE_041C) && (*pfVar5 == 1.0)) {
            moby->oClass = EUDORA_BRIDGE;
            uVar8 = (uint)DAT_00a35670;
            moby->mClass = DAT_00a35670;
            pMVar7 = MobyClasses[uVar8];
            moby->field44_0x71 = -1;
            moby->pClass = pMVar7;
            moby->scale = pMVar7->gScale;
            mobyfunc::UpdateMobyFrameData(moby);
            moby->collision = moby->pClass->collision;
            mobyfunc::PostUpdateMobyLockTransform(moby);
            moby->state = '\x02';
          }
        }
        else {
          iVar9 = sound::IsMobyPlayingSound(moby,piVar3[1]);
          if (iVar9 == 0) {
            iVar9 = sound::PlayMobySound(0,4,moby);
            piVar3[1] = iVar9;
          }
        }
      }
    }
    else if ((bVar1 < 3) && (iVar9 = sound::IsMobyPlayingSound(moby,piVar3[1]), iVar9 != 0)) {
      iVar9 = piVar3[1];
      if ((iVar9 != -1) &&
         ((sound::g_SoundChannels[iVar9].pMoby == moby &&
          (sound::g_SoundChannels[iVar9].state != '\0')))) {
        sound::sound_Kill(iVar9);
      }
      piVar3[1] = -1;
    }
  }
  return;
}



//==== 00372c88  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_433(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 433 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_433(MobyInstance *moby)

{
  return moby;
}



//==== 00372c8c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M434_00372c8c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M434_00372c8c(void)

{
  DAT_008416b8 = 0x10000;
  return;
}



//==== 00372cb0  ns=mobyupdate_unsorted  size=0x538
// sig: undefined UpdateMoby_434(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 434 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_434(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  MobyInstance *pMVar6;
  int iVar7;
  
  piVar4 = (int *)moby->pVar;
  fVar2 = moby->animationBlend;
  if (piVar4 == (int *)0x0) {
    pMVar6 = (MobyInstance *)mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar1 = moby->state;
    pMVar6 = (MobyInstance *)(uint)bVar1;
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 300.5));
        pMVar6 = (MobyInstance *)0x0;
        moby->unk58 = 0.0;
        moby->state = '\x01';
        piVar4[2] = -1;
      }
    }
    else if (bVar1 < 2) {
      pMVar6 = (MobyInstance *)*piVar4;
      if ((pMVar6 != (MobyInstance *)0xffffffff) &&
         (pMVar6 = MobyInstance + (int)pMVar6, pMVar6->oClass == BOLT_CRANK)) {
        pfVar5 = (float *)pMVar6->pVar;
        if (pMVar6->state == '\x03') {
          fVar3 = *pfVar5;
          moby->animationBlend = 1.0 - fVar3;
          fVar3 = 1.0 - fVar3;
        }
        else {
          fVar3 = fVar2;
          if (*pfVar5 == 1.0) {
            if ((((piVar4[1] != -1) && (piVar4[3] == 0)) &&
                ((hero::g_heroStateType < 2 ||
                 ((hero::g_heroStateType == 9 || (hero::g_heroStateType == 0xc)))))) &&
               (g_standingOnMoby == MobyInstance + piVar4[1])) {
              moby->state = '\x02';
            }
          }
          else {
            moby->state = '\x02';
          }
        }
        if (fVar3 == fVar2) {
          pMVar6 = (MobyInstance *)sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 != (MobyInstance *)0x0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (sound::g_SoundChannels[iVar7].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar7].state != '\0')) {
              sound::sound_Kill(iVar7);
            }
            pMVar6 = (MobyInstance *)0xffffffff;
            piVar4[2] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar7 = sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (iVar7 != 0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (sound::g_SoundChannels[iVar7].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar7].state != '\0')) {
              sound::sound_Kill(iVar7);
            }
            piVar4[2] = -1;
          }
          pMVar6 = (MobyInstance *)sound::PlayMobySound(1,0,moby);
        }
        else {
          pMVar6 = (MobyInstance *)sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 == (MobyInstance *)0x0) {
            pMVar6 = (MobyInstance *)sound::PlayMobySound(0,4,moby);
            piVar4[2] = (int)pMVar6;
          }
        }
      }
    }
    else if (bVar1 < 3) {
      fVar3 = mobyutil::g_FrameTime * 0.5 + fVar2;
      moby->animationBlend = fVar3;
      if (1.0 < fVar3) {
        moby->animationBlend = 1.0;
        fVar3 = 1.0;
      }
      pMVar6 = (MobyInstance *)*piVar4;
      if ((pMVar6 != (MobyInstance *)0xffffffff) &&
         (pMVar6 = MobyInstance + (int)pMVar6, pMVar6->oClass == BOLT_CRANK)) {
        pfVar5 = (float *)pMVar6->pVar;
        if (pMVar6->state == '\x03') {
          fVar3 = 1.0 - *pfVar5;
          moby->state = '\x01';
          moby->animationBlend = fVar3;
        }
        else {
          *pfVar5 = 1.0 - fVar3;
          pfVar5[6] = pfVar5[0xc] * 6.2831855 * (1.0 - fVar3);
          fVar3 = moby->animationBlend;
        }
        if (fVar3 == fVar2) {
          pMVar6 = (MobyInstance *)sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 != (MobyInstance *)0x0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (sound::g_SoundChannels[iVar7].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar7].state != '\0')) {
              sound::sound_Kill(iVar7);
            }
            pMVar6 = (MobyInstance *)0xffffffff;
            piVar4[2] = -1;
          }
        }
        else if ((*pfVar5 == 1.0) || (*pfVar5 == 0.0)) {
          iVar7 = sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (iVar7 != 0) {
            iVar7 = piVar4[2];
            if (((iVar7 != -1) && (sound::g_SoundChannels[iVar7].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar7].state != '\0')) {
              sound::sound_Kill(iVar7);
            }
            piVar4[2] = -1;
          }
          pMVar6 = (MobyInstance *)sound::PlayMobySound(1,0,moby);
        }
        else {
          pMVar6 = (MobyInstance *)sound::IsMobyPlayingSound(moby,piVar4[2]);
          if (pMVar6 == (MobyInstance *)0x0) {
            pMVar6 = (MobyInstance *)sound::PlayMobySound(0,4,moby);
            piVar4[2] = (int)pMVar6;
          }
        }
      }
    }
    if (piVar4[1] != -1) {
      pMVar6 = (MobyInstance *)mobyfunc::GetBonePosition(moby,0,&MobyInstance[piVar4[1]].pos);
    }
  }
  return pMVar6;
}



//==== 003731e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M435_003731e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M435_003731e8(void)

{
  DAT_00841728 = 0x10000;
  return;
}



//==== 00373230  ns=mobyupdate_helpers  size=0x46c
// sig: undefined M435_00373230(void)
// callers(1): 00373720 mobyupdate_unsorted::UpdateMoby_435
// callees(7): 000efa28 mobyfunc::CreateMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010e030 mobyutil::MB_genericExplosion; 003509b0 FUN_003509b0; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M435_00373230(int param_1,longlong param_2,int param_3,int param_4)

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
  float *pfVar13;
  ulonglong uVar14;
  MobyInstance *pMVar16;
  undefined8 uVar15;
  longlong lVar17;
  int iVar18;
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
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  
  dVar27 = 6.0;
  dVar29 = 15.0;
  lVar17 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x20;
  dVar28 = 1.0;
  if (param_4 == 0) {
    mobyutil::MB_genericExplosion
              (0,0,0x4024000000000000,0x4018000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,param_1,lVar17,param_1 + 0x10,&DAT_00373200,0xffffffffffffffff,
               0x2d,0x1e,0x1e);
  }
  else {
    mobyutil::MB_genericExplosion
              (0,0,0x4018000000000000,0x4010000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,param_1,lVar17,param_1 + 0x10,0xffffffffffffffff,&DAT_00373200,
               0x1e,0x14,0x14);
  }
  if (0 < param_3) {
    iVar18 = 0;
    dVar22 = -1.0;
    dVar23 = 12.0;
    dVar24 = 18.0;
    dVar25 = 60.0;
    dVar26 = 90.0;
    do {
      if (param_4 == 0) {
        uVar14 = mobyutil::MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          pMVar16 = mobyfunc::CreateMoby(0x311);
        }
        else {
          pMVar16 = mobyfunc::CreateMoby(DOOR_LEFT|BOLT_CIRCLENUT);
        }
      }
      else {
        uVar14 = mobyutil::MB_randInt(0xff);
        if ((uVar14 & 1) == 0) {
          pMVar16 = mobyfunc::CreateMoby(0x30f);
        }
        else {
          pMVar16 = mobyfunc::CreateMoby(0x30e);
        }
      }
      pMVar16->drawDistance = 0x40;
      pMVar16->updateDistance = '@';
      pMVar16->enabled = '\x01';
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      pMVar16->color = (int)((ulonglong)uVar15 >> 0x20);
      pMVar16->light = (int)uVar15;
      dVar19 = (double)mobyutil::MB_randRot();
      (pMVar16->rotation).x = (float)dVar19;
      dVar19 = (double)mobyutil::MB_randRot();
      (pMVar16->rotation).y = (float)dVar19;
      dVar19 = (double)mobyutil::MB_randRot();
      (pMVar16->rotation).z = (float)dVar19;
      dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
      dVar20 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
      dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar28);
      pfVar13 = (float *)((int)&(Cuboids->matrix).v0.x + (int)(param_2 << 7));
      fVar1 = pfVar13[5];
      fVar2 = pfVar13[6];
      fVar3 = pfVar13[1];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[2];
      fVar6 = pfVar13[3];
      fVar7 = pfVar13[9];
      fVar8 = pfVar13[10];
      fVar9 = pfVar13[0xb];
      fVar10 = pfVar13[0xd];
      fVar11 = pfVar13[0xe];
      fVar12 = pfVar13[0xf];
      (pMVar16->pos).x =
           (float)((double)pfVar13[8] * dVar21 +
                  (double)(float)((double)*pfVar13 * dVar19 +
                                 (double)(float)((double)pfVar13[4] * dVar20))) + pfVar13[0xc];
      (pMVar16->pos).y =
           (float)((double)fVar7 * dVar21 +
                  (double)(float)((double)fVar3 * dVar19 + (double)(float)((double)fVar1 * dVar20)))
           + fVar10;
      (pMVar16->pos).z =
           (float)((double)fVar8 * dVar21 +
                  (double)(float)((double)fVar5 * dVar19 + (double)(float)((double)fVar2 * dVar20)))
           + fVar11;
      (pMVar16->pos).w =
           (float)((double)fVar9 * dVar21 +
                  (double)(float)((double)fVar6 * dVar19 + (double)(float)((double)fVar4 * dVar20)))
           + fVar12;
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar23),
                 (float)((double)mobyutil::g_FrameTime * dVar29));
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar27),
                 (float)((double)mobyutil::g_FrameTime * dVar24));
      mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar26);
      uVar15 = fastfunc::FastDoubleToInt();
      FUN_003509b0(pMVar16,param_1,local_b0,local_c0,uVar15);
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_3);
  }
  return;
}



//==== 00373720  ns=mobyupdate_unsorted  size=0x1720
// sig: undefined UpdateMoby_435(MobyInstance * moby)
// callers(0): 
// callees(23): 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00109af0 mobyutil::Delt; 00109ec0 mobyutil::DeltAng; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 00117238 mobyutil::MB_AddVectorSphere; 00121740 partupd::SpawnPart_4; 0015d12c sound::PlayMobySound; 003509b0 FUN_003509b0; 00373230 mobyupdate_helpers::M435_00373230; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 435 */

Spline * mobyupdate_unsorted::UpdateMoby_435(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  MOBY_OCLASSES MVar10;
  void *pvVar11;
  int *piVar12;
  f32 fVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  longlong lVar21;
  int iVar25;
  Spline *pSVar26;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar27;
  int iVar28;
  MobyInstance *pMVar29;
  ushort *puVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  Vec4 local_160;
  Vec4 local_150;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  Vec4 local_130;
  Vec4 local_120;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  Vec4 local_100;
  Vec4 local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  f32 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  
  lVar21 = (longlong)(int)moby;
  iVar28 = 0;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  iVar25 = mobyutil::MB_damage(lVar21,0x210000);
  bVar2 = moby->state;
  fVar3 = (moby->rotation).x;
  uVar27 = (uint)bVar2;
  if ((iVar25 == 0) || (uVar27 == 4)) {
    if (uVar27 == 6) {
      if (MobyInstancePermEnd < moby) {
        mobyutil::MB_genericExplosion
                  (0,0,0x4008000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar21,uVar31 + 0x20,lVar21 + 0x10,1,0xffffffffffffffff,0xf,10
                   ,10);
      }
      pSVar26 = (Spline *)mobyfunc::DeleteMoby(moby);
    }
    else if (bVar2 == 5) {
      dVar32 = 0.5235987901687622;
      mobyutil::DeltAng(*(float *)((int)pvVar11 + 0x44),mobyutil::g_FrameTime * 0.5235988,
                        &(moby->rotation).z,5,iVar28,0);
      mobyutil::DeltAng(-*(float *)((int)pvVar11 + 0x40),
                        (float)((double)mobyutil::g_FrameTime * dVar32),&(moby->rotation).y,uVar27,
                        iVar28,0);
      dVar32 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 6.2831855);
      (moby->rotation).x = (float)dVar32;
      mobyutil::MB_SphericalToVector
                (DAT_0084174c * 2.0 * mobyutil::g_FrameTime,(moby->rotation).z,-(moby->rotation).y,
                 (float *)((int)pvVar11 + 0x20));
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar11 + 0x20);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
      iVar25 = stub::STUB_00055ac0_RET_0(lVar21 + 0x10,0x400,2,lVar21,0);
      if (iVar25 == 0) {
        fVar13 = (moby->pos).x;
        uVar27 = (int)fVar13 >> 0x1f;
        iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27;
        if (((0x409fffff < iVar25) && (iVar25 < 0x43fa0001)) &&
           (fVar13 = (moby->pos).y, uVar27 = (int)fVar13 >> 0x1f,
           iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27,
           iVar25 < 0x43fa0001 && 0x409fffff < iVar25)) {
          fVar13 = (moby->pos).z;
          uVar27 = (int)fVar13 >> 0x1f;
          iVar25 = (uVar27 >> 1 ^ (uint)fVar13) - uVar27;
          if ((0x409fffff < iVar25) && (iVar25 < 0x43fa0001)) {
            fVar4 = g_heroPosition.y - (moby->pos).y;
            fVar3 = g_heroPosition.x - (moby->pos).x;
            fVar5 = g_heroPosition.z - (moby->pos).z;
            if (16.0 <= SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4)) {
              return (Spline *)&DAT_0037369c;
            }
            moby->state = '\x06';
            return (Spline *)0x6;
          }
        }
        pSVar26 = (Spline *)0x6;
        moby->state = '\x06';
      }
      else {
        pSVar26 = (Spline *)0x6;
        moby->state = '\x06';
      }
    }
    else {
      pSVar26 = (Spline *)g_gameMode;
      if (bVar2 == 4) {
        if (g_gameMode == GAME_MODE_NORMAL) {
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          iVar25 = *piVar12;
          iVar28 = *(int *)((int)pvVar11 + 0x50) + iVar25 + (int)*(char *)((int)pvVar11 + 0x54);
          iVar28 = iVar28 - (iVar28 / iVar25) * iVar25;
          uVar22 = FUN_005e8338((double)((float)piVar12[iVar28 * 4 + 4] - (moby->pos).x),
                                (double)((float)piVar12[iVar28 * 4 + 5] - (moby->pos).y));
          dVar33 = 1.0;
          mobyutil::OrganicDeltAngSpeed
                    (uVar22,0x3fb99999a0000000,0x3ff4ccccc0000000,0x3ff0000000000000,lVar21,
                     &DAT_0037369c,uVar31 + 0x80);
          iVar25 = *(int *)((int)pvVar11 + 0x60) + iVar28 * 0x10;
          fVar3 = *(float *)(iVar25 + 0x14) - (moby->pos).y;
          fVar4 = *(float *)(iVar25 + 0x10) - (moby->pos).x;
          dVar32 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                        (double)((moby->pos).z - *(float *)(iVar25 + 0x18)));
          (moby->rotation).y = (float)dVar32;
          pMVar29 = MobyInstance;
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          if (*(int *)((int)pvVar11 + 0x50) == *piVar12 + -1) {
            pSVar26 = (Spline *)&mobyutil::g_MobyGroups;
            puVar30 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
            if (puVar30 != (ushort *)0x0) {
              uVar9 = *puVar30;
              bVar15 = false;
              (&MiscLevelFlags.field44_0x2c)[*(int *)((int)pvVar11 + 0x90)] = 1;
              pMVar29 = pMVar29 + (uVar9 & 0x7fff);
              dVar38 = 0.0;
              dVar46 = 12.0;
              dVar44 = 8.0;
              dVar42 = 0.7853981852531433;
              dVar45 = 10.0;
              dVar36 = 20.0;
              dVar34 = 60.0;
              dVar32 = 90.0;
              uVar23 = 0x4022000000000000;
              uVar22 = 0x402e000000000000;
              while( true ) {
                if ((pMVar29->state < 0x7f) && (pMVar29 != moby)) {
                  MVar10 = pMVar29->oClass;
                  if ((short)MVar10 < 0x229 && 0x222 < (short)MVar10) {
                    local_d4 = 0.0;
                    local_d8 = 0.0;
                    local_dc = 0.0;
                    local_e0 = 0.0;
                    MVar10 = pMVar29->oClass;
                    if (MVar10 == 0x228) {
                      local_d0 = 0;
                      local_cc = 0;
                      local_c8 = 0;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x227) {
                      local_d0 = 0;
                      local_cc = 0xbfd51eb8;
                      local_c8 = 0x3f245a1d;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x226) {
                      local_d0 = 0;
                      local_cc = 0;
                      local_c8 = 0x3f79999a;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x225) {
                      local_d0 = 0xc0000000;
                      local_c4 = 0;
                      local_cc = 0xbf9374bc;
                      local_c8 = 0xbfe2d0e5;
                    }
                    else if (MVar10 == 0x224) {
                      local_d0 = 0xc0c00000;
                      local_cc = 0x40c00000;
                      local_c8 = 0xbfe2d0e5;
                      local_c4 = 0;
                    }
                    else if (MVar10 == 0x223) {
                      local_d0 = 0xc0552f1b;
                      local_c4 = 0;
                      local_cc = 0x40552f1b;
                      local_c8 = 0x3e8ccccd;
                    }
                    fVar13 = (pMVar29->bSphere).rad;
                    uVar27 = (int)fVar13 >> 0x1f;
                    if ((int)((uVar27 >> 1 ^ (uint)fVar13) - uVar27) < 0x44bb8001) {
                      fVar4 = (pMVar29->pos).x - (moby->pos).x;
                      fVar5 = (pMVar29->pos).y - (moby->pos).y;
                      dVar35 = (double)mobyutil::g_FrameTime;
                      dVar41 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
                      local_d4 = (pMVar29->pos).w;
                      local_d8 = 0.0;
                      fVar3 = (float)((double)(float)(dVar35 * dVar46) / dVar41);
                      dVar37 = (double)(fVar4 * fVar3);
                      dVar39 = (double)(fVar5 * fVar3);
                      dVar43 = dVar38;
                      if (dVar38 - dVar41 < 0.0) {
                        dVar43 = dVar37;
                      }
                      dVar40 = dVar38;
                      if (dVar38 - dVar41 < 0.0) {
                        dVar40 = dVar39;
                      }
                      if (dVar41 - dVar38 < 0.0) {
                        dVar43 = dVar37;
                      }
                      if (dVar41 - dVar38 < 0.0) {
                        dVar40 = dVar39;
                      }
                      local_e0 = (float)dVar43;
                      local_dc = (float)dVar40;
                      dVar43 = (double)mobyutil::MB_randRangeFloat
                                                 ((float)(dVar35 * dVar44),(float)(dVar35 * dVar46))
                      ;
                      local_d8 = (float)dVar43;
                      pMVar29->collision = (ushort *)0x0;
                      dVar43 = (double)FUN_005e8338((double)local_e0,(double)local_dc);
                      dVar35 = (double)FUN_005e8338((double)(GameCamera.posX - (moby->pos).x),
                                                    (double)(GameCamera.posY - (moby->pos).y));
                      dVar43 = (double)fastfunc::FastSubRots((float)dVar43,(float)dVar35);
                      if (dVar42 <= dVar43) {
                        mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar32);
                        uVar24 = fastfunc::FastDoubleToInt();
                        FUN_003509b0(pMVar29,lVar21,&local_e0,&local_d0,uVar24);
                      }
                      else {
                        mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar36);
                        uVar24 = fastfunc::FastDoubleToInt();
                        FUN_003509b0(pMVar29,lVar21,&local_e0,&local_d0,uVar24);
                      }
                    }
                    else {
                      mobyfunc::DeleteMoby(pMVar29);
                    }
                  }
                  else if (MVar10 == SHUTTLE_01A8) {
                    local_b4 = 0;
                    bVar15 = true;
                    local_b8 = 0;
                    local_bc = 0;
                    local_c0 = 0;
                    mobyutil::MB_genericExplosion
                              (dVar38,dVar38,dVar46,dVar44,uVar23,dVar33,uVar22,pMVar29,&local_c0,
                               &pMVar29->pos);
                    mobyfunc::DeleteMoby(pMVar29);
                  }
                }
                uVar9 = *puVar30;
                puVar30 = puVar30 + 1;
                if ((short)uVar9 < -1) break;
                pMVar29 = MobyInstance + (*puVar30 & 0x7fff);
              }
              if (bVar15) {
                mobyupdate_helpers::M435_00373230
                          (lVar21,*(undefined4 *)((int)pvVar11 + 0x88),0x1e,1);
              }
              else {
                mobyupdate_helpers::M435_00373230
                          (lVar21,*(undefined4 *)((int)pvVar11 + 0x88),0x1e,0);
              }
              sound::PlayMobySound(2,0,moby);
              pSVar26 = (Spline *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            fVar3 = (moby->pos).y;
            fVar4 = (moby->pos).x;
            fVar18 = (float)piVar12[iVar28 * 4 + 5] - fVar3;
            fVar5 = (moby->pos).z;
            fVar7 = (float)piVar12[iVar28 * 4 + 4] - fVar4;
            fVar17 = (float)piVar12[iVar28 * 4 + 6] - fVar5;
            fVar1 = 0.0;
            fVar6 = SQRT(fVar17 * fVar17 + fVar7 * fVar7 + fVar18 * fVar18);
            fVar19 = (DAT_00841754 * mobyutil::g_FrameTime) / fVar6;
            fVar8 = fVar1;
            if (0.0 - fVar6 < 0.0) {
              fVar8 = fVar18 * fVar19;
            }
            fVar16 = fVar1;
            if (0.0 - fVar6 < 0.0) {
              fVar16 = fVar7 * fVar19;
            }
            if (0.0 - fVar6 < 0.0) {
              fVar1 = fVar17 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar8 = fVar18 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar16 = fVar7 * fVar19;
            }
            if (fVar6 - 0.0 < 0.0) {
              fVar1 = fVar17 * fVar19;
            }
            fVar3 = fVar3 + fVar8;
            fVar4 = fVar4 + fVar16;
            fVar5 = fVar5 + fVar1;
            fVar1 = fVar3 - (float)piVar12[iVar28 * 4 + 5];
            fVar6 = fVar4 - (float)piVar12[iVar28 * 4 + 4];
            fVar7 = fVar5 - (float)piVar12[iVar28 * 4 + 6];
            (moby->pos).x = fVar4;
            (moby->pos).y = fVar3;
            (moby->pos).z = fVar5;
            dVar32 = 0.5;
            if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1) < 0.5) {
              *(int *)((int)pvVar11 + 0x50) = iVar28;
            }
            local_100.x = 0.0;
            local_100.y = 0.0;
            local_100.z = 0.0;
            local_100.w = 0.0;
            dVar45 = -1.0;
            dVar34 = (double)mobyutil::MB_randRangeFloat(-1.0,(float)dVar33);
            local_100.x = (float)dVar34;
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_100.y = (float)dVar34;
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_100.z = (float)dVar34;
            dVar36 = 2.0;
            mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 2.0),&local_100);
            iVar25 = mobyutil::MB_randRange(0x1e,0x2d);
            iVar25 = (int)(animationSpeed * (float)((double)(longlong)iVar25 + dVar32));
            local_b0 = (longlong)iVar25;
            uVar22 = mobyutil::MB_randRange(0x28,0x46);
            partupd::SpawnPart_4(lVar21 + 0x10,&local_100,0x6f00afff,0xff,iVar25,0x28,uVar22,1);
            local_f0.x = 0.0;
            local_f0.y = 0.0;
            local_f0.z = 0.0;
            local_f0.w = 0.0;
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.x = (float)dVar34;
            dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.y = (float)dVar34;
            dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar45,(float)dVar33);
            local_f0.z = (float)dVar33;
            mobyutil::ClampVec3Magnitude
                      ((double)(float)((double)mobyutil::g_FrameTime * dVar36),&local_f0);
            iVar25 = mobyutil::MB_randRange(0x3c,0x78);
            iVar25 = (int)(animationSpeed * (float)((double)(longlong)iVar25 + dVar32));
            local_b0 = (longlong)iVar25;
            uVar22 = mobyutil::MB_randRange(100,0x96);
            pSVar26 = (Spline *)
                      partupd::SpawnPart_4
                                (lVar21 + 0x10,&local_f0,0x1fffffff,0x4f4f4f,iVar25,0x28,uVar22,0);
          }
        }
      }
      else if (bVar2 == 3) {
        if (g_gameMode == GAME_MODE_NORMAL) {
          piVar12 = *(int **)((int)pvVar11 + 0x60);
          iVar25 = *piVar12 + -1;
          pSVar26 = (Spline *)&hero::g_heroMtx;
          if ((SQRT((g_heroPosition.z - (float)piVar12[iVar25 * 4 + 6]) *
                    (g_heroPosition.z - (float)piVar12[iVar25 * 4 + 6]) +
                    (g_heroPosition.x - (float)piVar12[iVar25 * 4 + 4]) *
                    (g_heroPosition.x - (float)piVar12[iVar25 * 4 + 4]) +
                    (g_heroPosition.y - (float)piVar12[iVar25 * 4 + 5]) *
                    (g_heroPosition.y - (float)piVar12[iVar25 * 4 + 5])) <
               *(float *)((int)pvVar11 + 0x8c)) &&
             (pSVar26 = (Spline *)fastfunc::FastDecTimerS32(uVar31 + 0x94), pSVar26 != (Spline *)0x0
             )) {
            moby->drawDistance = 0x40;
            moby->state = '\x04';
            fVar3 = (moby->pos).x;
            moby->collision = moby->pClass->collision;
            dVar32 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar11 + 0x60) + 0x20)
                                                  - fVar3),
                                          (double)(*(float *)(*(int *)((int)pvVar11 + 0x60) + 0x24)
                                                  - (moby->pos).y));
            (moby->rotation).z = (float)dVar32;
            pSVar26 = (Spline *)sound::PlayMobySound(1,0,moby);
          }
        }
      }
      else if (uVar27 == 2) {
        iVar25 = *(int *)(*(int *)((int)pvVar11 + 0x4c) + 0x78);
        dVar32 = (double)fastfunc::FastWrapRot(fVar3,mobyutil::g_FrameTime * 6.2831855);
        (moby->rotation).x = (float)dVar32;
        fVar3 = moby->pClass->gScale;
        mobyutil::Delt(fVar3 * 3.0,fVar3 / (float)(longlong)(animationSpeed * 180.5),&moby->scale);
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        local_130.x = *(float *)(iVar28 + 0x10) - (moby->pos).x;
        local_130.y = *(float *)(iVar28 + 0x14) - (moby->pos).y;
        local_130.w = *(float *)(iVar28 + 0x1c);
        local_130.z = (*(float *)(iVar28 + 0x18) + 5.0) - (moby->pos).z;
        mobyutil::ClampVec3Magnitude
                  ((double)(*(float *)(iVar25 + 0x98) * mobyutil::g_FrameTime),&local_130);
        local_120.x = local_130.x - *(float *)((int)pvVar11 + 0x20);
        local_120.y = local_130.y - *(float *)((int)pvVar11 + 0x24);
        local_120.w = local_130.w;
        local_120.z = local_130.z - *(float *)((int)pvVar11 + 0x28);
        mobyutil::ClampVec3Magnitude((double)(DAT_00841750 * 4.0 * DAT_0071f418),&local_120);
        fVar3 = *(float *)((int)pvVar11 + 0x20) + local_120.x;
        *(float *)((int)pvVar11 + 0x20) = fVar3;
        *(float *)((int)pvVar11 + 0x24) = *(float *)((int)pvVar11 + 0x24) + local_120.y;
        *(float *)((int)pvVar11 + 0x28) = *(float *)((int)pvVar11 + 0x28) + local_120.z;
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
        dVar32 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x20) *
                                                   *(float *)((int)pvVar11 + 0x20) +
                                                   *(float *)((int)pvVar11 + 0x24) *
                                                   *(float *)((int)pvVar11 + 0x24)),
                                      (double)*(float *)((int)pvVar11 + 0x28));
        (moby->rotation).y = (float)-dVar32;
        dVar32 = (double)FUN_005e8338((double)*(float *)((int)pvVar11 + 0x20),
                                      (double)*(float *)((int)pvVar11 + 0x24));
        (moby->rotation).z = (float)dVar32;
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        fVar3 = (moby->pos).y - *(float *)(iVar28 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar28 + 0x10);
        fVar5 = (moby->pos).z - *(float *)(iVar28 + 0x18);
        if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_00841758) {
          *(int *)(iVar25 + 0x58) = *(int *)(iVar25 + 0x58) + -0x3c;
          *(undefined4 *)((int)pvVar11 + 0x2c) = 0;
          *(undefined4 *)((int)pvVar11 + 0x28) = 0;
          *(undefined4 *)((int)pvVar11 + 0x24) = 0;
          *(undefined4 *)((int)pvVar11 + 0x20) = 0;
          sound::PlayMobySound(0,0,moby);
          moby->state = '\x06';
        }
        dVar33 = 0.0;
        dVar32 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_00841760);
        dVar34 = (double)(float)(dVar32 * (double)mobyutil::g_FrameTime);
        dVar32 = (double)mobyutil::MB_randRot();
        uVar20 = DAT_0084177c;
        uVar14 = DAT_00841778;
        fVar4 = (moby->transform).v2.y;
        fVar3 = (float)(dVar32 + 1.570796251296997);
        fVar5 = (moby->transform).v2.x;
        fVar6 = (moby->transform).v2.z;
        fVar7 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar7 = fVar3;
        }
        dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar1 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
          fVar1 = fVar7;
        }
        fVar3 = (moby->transform).v1.x;
        fVar7 = (moby->transform).v1.y;
        fVar8 = (moby->transform).v1.z;
        fVar19 = fVar1 * fVar1;
        fVar17 = fVar19 * fVar19 * fVar1;
        fVar18 = fVar19 * fVar17;
        dVar45 = dVar33;
        dVar42 = dVar33;
        dVar44 = dVar33;
        if (dVar36 != dVar33) {
          fVar1 = (float)((double)(float)(dVar34 * (double)(fVar19 * fVar18 * 2.601887e-06 +
                                                           fVar18 * -0.0001980741 +
                                                           fVar17 * 0.0083330255 +
                                                           fVar19 * fVar1 * -0.16666657 + fVar1)) /
                         dVar36);
          dVar45 = (double)(fVar5 * fVar1);
          dVar42 = (double)(fVar4 * fVar1);
          dVar44 = (double)(fVar6 * fVar1);
        }
        dVar36 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar36 = dVar32;
        }
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7);
        dVar46 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar36 < 0.0) {
          dVar46 = dVar36;
        }
        dVar32 = (double)(float)(dVar46 * dVar46);
        dVar43 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar46));
        dVar36 = (double)(float)(dVar32 * dVar43);
        fVar4 = (float)((double)(float)(dVar34 * (double)((float)(dVar32 * dVar36) * 2.601887e-06 +
                                                         (float)(dVar36 * -0.0001980741071747616 +
                                                                (double)(float)(dVar43 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar32 * dVar46) *
                                                                  -0.16666656732559204 + dVar46)))))
                       / dVar38);
        local_104 = DAT_00841770;
        dVar32 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        dVar36 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        local_108 = (float)(dVar44 + dVar32);
        local_10c = (float)(dVar42 + dVar34);
        local_110 = (float)(dVar45 + dVar36);
        iVar25 = (int)(animationSpeed * ((float)(longlong)DAT_0084176c + 0.5));
        local_b0 = (longlong)iVar25;
        uVar22 = fastfunc::FastDoubleToInt();
        uVar23 = fastfunc::FastDoubleToInt((double)DAT_00841774);
        pSVar26 = (Spline *)
                  partupd::SpawnPart_4
                            (lVar21 + 0x10,&local_110,uVar14,uVar20,iVar25,uVar22,uVar23,1);
      }
      else if (uVar27 == 1) {
        iVar25 = *(int *)(*(int *)((int)pvVar11 + 0x4c) + 0x78);
        dVar32 = (double)fastfunc::FastWrapRot(fVar3,mobyutil::g_FrameTime * 6.2831855);
        iVar28 = *(int *)((int)pvVar11 + 0x4c);
        (moby->rotation).x = (float)dVar32;
        local_170 = *(float *)(iVar28 + 0x10);
        local_16c = *(float *)(iVar28 + 0x14);
        local_164 = *(float *)(iVar28 + 0x1c);
        local_168 = *(float *)(iVar28 + 0x18) + 5.0;
        dVar32 = (double)FUN_005e8338((double)((moby->pos).x - local_170),
                                      (double)((moby->pos).y - local_16c));
        fVar3 = local_16c - (moby->pos).y;
        fVar4 = local_170 - (moby->pos).x;
        dVar33 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                      (double)((moby->pos).z - local_168));
        mobyutil::MB_AddVectorSphere(&local_170,&local_170);
        local_160.x = local_170 - (moby->pos).x;
        local_160.y = local_16c - (moby->pos).y;
        local_160.z = local_168 - (moby->pos).z;
        local_160.w = local_164;
        mobyutil::ClampVec3Magnitude
                  ((double)(*(float *)(iVar25 + 0x98) * mobyutil::g_FrameTime),&local_160);
        local_150.x = local_160.x - *(float *)((int)pvVar11 + 0x20);
        local_150.y = local_160.y - *(float *)((int)pvVar11 + 0x24);
        local_150.w = local_160.w;
        local_150.z = local_160.z - *(float *)((int)pvVar11 + 0x28);
        mobyutil::ClampVec3Magnitude((double)(DAT_00841750 * DAT_0071f418),&local_150);
        fVar3 = *(float *)((int)pvVar11 + 0x20) + local_150.x;
        *(float *)((int)pvVar11 + 0x20) = fVar3;
        *(float *)((int)pvVar11 + 0x24) = *(float *)((int)pvVar11 + 0x24) + local_150.y;
        *(float *)((int)pvVar11 + 0x28) = *(float *)((int)pvVar11 + 0x28) + local_150.z;
        (moby->pos).x = (moby->pos).x + fVar3;
        (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar11 + 0x24);
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x28);
        dVar34 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x20) *
                                                   *(float *)((int)pvVar11 + 0x20) +
                                                   *(float *)((int)pvVar11 + 0x24) *
                                                   *(float *)((int)pvVar11 + 0x24)),
                                      (double)*(float *)((int)pvVar11 + 0x28));
        (moby->rotation).y = (float)-dVar34;
        dVar34 = (double)FUN_005e8338((double)*(float *)((int)pvVar11 + 0x20),
                                      (double)*(float *)((int)pvVar11 + 0x24));
        (moby->rotation).z = (float)dVar34;
        dVar32 = (double)fastfunc::FastSubRots((float)dVar32,*(float *)((int)pvVar11 + 0x44));
        dVar34 = 0.0872664600610733;
        if ((dVar32 < 0.0872664600610733) &&
           (dVar32 = (double)fastfunc::FastSubRots((float)dVar33,*(float *)((int)pvVar11 + 0x40)),
           dVar32 < dVar34)) {
          moby->state = '\x02';
        }
        dVar33 = 0.0;
        dVar32 = (double)mobyutil::MB_randRangeFloat(0.0,DAT_00841760);
        dVar34 = (double)(float)(dVar32 * (double)mobyutil::g_FrameTime);
        dVar32 = (double)mobyutil::MB_randRot();
        uVar20 = DAT_0084177c;
        uVar14 = DAT_00841778;
        fVar4 = (moby->transform).v2.y;
        fVar3 = (float)(dVar32 + 1.570796251296997);
        fVar5 = (moby->transform).v2.x;
        fVar6 = (moby->transform).v2.z;
        fVar7 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar7 = fVar3;
        }
        dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar1 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar7 < 0.0) {
          fVar1 = fVar7;
        }
        fVar3 = (moby->transform).v1.x;
        fVar7 = (moby->transform).v1.y;
        fVar8 = (moby->transform).v1.z;
        fVar19 = fVar1 * fVar1;
        fVar17 = fVar19 * fVar19 * fVar1;
        fVar18 = fVar19 * fVar17;
        dVar45 = dVar33;
        dVar42 = dVar33;
        dVar44 = dVar33;
        if (dVar36 != dVar33) {
          fVar1 = (float)((double)(float)(dVar34 * (double)(fVar19 * fVar18 * 2.601887e-06 +
                                                           fVar18 * -0.0001980741 +
                                                           fVar17 * 0.0083330255 +
                                                           fVar19 * fVar1 * -0.16666657 + fVar1)) /
                         dVar36);
          dVar45 = (double)(fVar5 * fVar1);
          dVar42 = (double)(fVar4 * fVar1);
          dVar44 = (double)(fVar6 * fVar1);
        }
        dVar36 = (double)(float)(3.141592502593994 - dVar32);
        if (dVar32 - (double)(float)(3.141592502593994 - dVar32) < 0.0) {
          dVar36 = dVar32;
        }
        dVar38 = (double)SQRT(fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7);
        dVar46 = (double)(float)(-3.141592502593994 - dVar32);
        if ((double)(float)(-3.141592502593994 - dVar32) - dVar36 < 0.0) {
          dVar46 = dVar36;
        }
        dVar32 = (double)(float)(dVar46 * dVar46);
        dVar43 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar46));
        dVar36 = (double)(float)(dVar32 * dVar43);
        fVar4 = (float)((double)(float)(dVar34 * (double)((float)(dVar32 * dVar36) * 2.601887e-06 +
                                                         (float)(dVar36 * -0.0001980741071747616 +
                                                                (double)(float)(dVar43 * 
                                                  0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar32 * dVar46) *
                                                                  -0.16666656732559204 + dVar46)))))
                       / dVar38);
        local_134 = DAT_00841770;
        dVar32 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        dVar34 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        dVar36 = dVar33;
        if (dVar33 - dVar38 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar32 = (double)(fVar8 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar34 = (double)(fVar7 * fVar4);
        }
        if (dVar38 - dVar33 < 0.0) {
          dVar36 = (double)(fVar3 * fVar4);
        }
        local_138 = (float)(dVar44 + dVar32);
        local_13c = (float)(dVar42 + dVar34);
        local_140 = (float)(dVar45 + dVar36);
        iVar25 = (int)(animationSpeed * ((float)(longlong)DAT_0084176c + 0.5));
        local_b0 = (longlong)iVar25;
        uVar22 = fastfunc::FastDoubleToInt();
        uVar23 = fastfunc::FastDoubleToInt((double)DAT_00841774);
        pSVar26 = (Spline *)
                  partupd::SpawnPart_4
                            (lVar21 + 0x10,&local_140,uVar14,uVar20,iVar25,uVar22,uVar23,1);
      }
      else {
        pSVar26 = (Spline *)(uint)(byte)moby->group;
        if (uVar27 == 0) {
          if ((&MiscLevelFlags.field44_0x2c)[*(int *)((int)pvVar11 + 0x90)] == 0) {
            if (*(int *)((int)pvVar11 + 0x90) == 0) {
              auVar47 = ZEXT416(0xffffffff);
              auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
              auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar47 = loadVectorLeftIndexed(8,0x37369c);
              auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar47 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
              auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar14 = storeVectorElementWordIndexed
                                 (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x94
                                  ,uVar31);
              *(undefined4 *)((int)pvVar11 + 0x94U & 0xfffffffc) = uVar14;
            }
            pSVar26 = Splines[*(int *)((int)pvVar11 + 100)];
            *(Spline **)((int)pvVar11 + 0x60) = pSVar26;
            (moby->pos).x = pSVar26->points[0].x;
            (moby->pos).y = pSVar26->points[0].y;
            (moby->pos).z = pSVar26->points[0].z;
            fVar3 = pSVar26->points[0].w;
            *(undefined4 *)((int)pvVar11 + 0x50) = 1;
            (moby->pos).w = fVar3;
            moby->drawDistance = 0;
            moby->collision = (ushort *)0x0;
            moby->state = '\x03';
          }
          else {
            puVar30 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
            do {
              mobyfunc::DeleteMoby(MobyInstance + (*puVar30 & 0x7fff));
              uVar9 = *puVar30;
              puVar30 = puVar30 + 1;
              pSVar26 = (Spline *)(int)(short)uVar9;
            } while (-2 < (short)uVar9);
          }
        }
      }
    }
  }
  else {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_SpawnExplosionSparks
              (0x3fe0000000000000,0x402a000000000000,lVar21,lVar21 + 0x10,&DAT_0037369c,
               0xffffffffffffffff);
    pSVar26 = (Spline *)mobyfunc::DeleteMoby(moby);
  }
  return pSVar26;
}



//==== 00374e80  ns=mobyupdate_helpers  size=0x5a4
// sig: undefined M436_00374e80(void)
// callers(0): 
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00110488 mobyutil::ClampVec3Magnitude; 001229a8 partupd::SpawnPart_8; 00123390 partupd::SpawnPart_11

void mobyupdate_helpers::M436_00374e80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
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
  Vec4 local_140;
  undefined1 local_130 [16];
  undefined4 local_120 [24];
  longlong local_c0;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    iVar5 = 0;
    param_1 = param_1 + 0x10;
    dVar16 = 0.0;
    dVar17 = -1.0;
    dVar18 = 1.0;
    dVar7 = 8.0;
    dVar8 = 10.0;
    uVar9 = 0x41186a0000000000;
    dVar10 = 15.5;
    dVar11 = 20.5;
    dVar19 = 45.5;
    dVar12 = 60.5;
    dVar13 = 5.5;
    dVar14 = 10.5;
    dVar15 = 0.5;
    do {
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      local_120[0] = 0x4f008fff;
      local_120[1] = 0x4f008fff;
      local_120[2] = 0x4f007fff;
      local_120[3] = 0x4f006fff;
      local_120[4] = 0x2fffffff;
      local_120[5] = 0x2fffffff;
      local_120[6] = 0x2f005f7f;
      local_120[7] = 0x2f004f7f;
      local_120[8] = 0x2f003f7f;
      local_120[9] = 0x2f00004f;
      local_120[10] = 0x2f000000;
      local_120[0xb] = 0x3f000000;
      dVar6 = (double)mobyutil::MB_randRangeFloat
                                ((float)((double)mobyutil::g_FrameTime * dVar7),
                                 (float)((double)mobyutil::g_FrameTime * dVar8));
      mobyutil::ClampVec3Magnitude(dVar6,&local_140);
      lVar4 = mobyutil::MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2));
      lVar4 = mobyutil::MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar11);
      local_c0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar10),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar12);
      local_c0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
      partupd::SpawnPart_11(uVar9,dVar6,param_1,&local_140,uVar2,uVar3);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_c0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar11);
      local_c0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar10),iVar1);
      partupd::SpawnPart_11
                (uVar9,(double)(float)(dVar6 * dVar15),param_1,&local_140,0x7fffffff,0xffffff);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x14);
    iVar5 = 0;
    dVar7 = 3.0;
    uVar9 = 0x41086a0000000000;
    dVar8 = 30.5;
    do {
      local_120[0xc] = 0x4f008fff;
      local_120[0xd] = 0x4f008fff;
      local_120[0xe] = 0x4f007fff;
      local_120[0xf] = 0x4f006fff;
      local_120[0x10] = 0x2fffffff;
      local_120[0x11] = 0x2fffffff;
      local_120[0x12] = 0x2f005f7f;
      local_120[0x13] = 0x2f004f7f;
      local_120[0x14] = 0x2f003f7f;
      local_120[0x15] = 0x2f00004f;
      local_120[0x16] = 0x2f000000;
      local_120[0x17] = 0x3f000000;
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
      mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar7);
      lVar4 = mobyutil::MB_randInt(6);
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x30);
      lVar4 = mobyutil::MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2) + 0x48);
      iVar1 = (int)((double)animationSpeed * dVar19);
      local_c0 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar8),iVar1);
      partupd::SpawnPart_8(uVar9,param_1,local_130,uVar2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x32);
  }
  return;
}



//==== 00375430  ns=Global  size=0x4b0
// sig: undefined FUN_00375430(void)
// callers(3): 00385e78 mobyupdate_unsorted::UpdateMoby_444; 003935e8 mobyupdate_unsorted::UpdateMoby_462; 00395438 mobyupdate_unsorted::UpdateMoby_463
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_00375430(double param_1,double param_2,float *param_3,undefined4 param_4,undefined8 param_5,
            undefined8 param_6,undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyClass *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar20;
  longlong lVar18;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x100;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar14;
  puVar10[0x22] = in_LR;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  puVar10[0x1d] = unaff_r31;
  puVar10[0x1b] = unaff_r29;
  puVar10[0x1c] = unaff_r30;
  puVar10[0x1a] = unaff_r28;
  pMVar15 = mobyfunc::CreateMoby(ROCKET_01B3);
  if (pMVar15 != (MobyInstance *)0x0) {
    fVar1 = *param_3;
    (pMVar15->pos).x = fVar1;
    fVar2 = param_3[1];
    (pMVar15->pos).y = fVar2;
    fVar3 = param_3[2];
    (pMVar15->pos).z = fVar3;
    (pMVar15->pos).w = param_3[3];
    fVar2 = GameCamera.posY - fVar2;
    fVar1 = GameCamera.posX - fVar1;
    pvVar8 = pMVar15->pVar;
    fVar3 = GameCamera.posZ - fVar3;
    fVar7 = ABS(fVar3);
    *(float *)(puVar10 + 0x10) = fVar3;
    fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    fVar4 = ABS(fVar3);
    *(float *)((int)puVar10 + 0x7c) = fVar3;
    *(float *)((int)puVar10 + 0x84) = fVar4 - fVar7;
    fVar3 = 0.0;
    uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar10 + 0x7c));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar5 = ABS(*(float *)(puVar10 + 0x10));
    if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar11 = fVar3;
    if (0.0 < fVar6) {
      lVar19 = uVar14 - 0xf0;
      lVar18 = uVar14 - 0x48;
      lVar21 = uVar14 - 0x58;
      lVar22 = 2;
      fVar6 = (fVar5 - fVar6) / (fVar5 + fVar6);
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0xb4) = fVar6;
      *(float *)((int)puVar10 + 0xac) = fVar6;
      *(float *)(puVar10 + 0x16) = fVar6;
      *(float *)(puVar10 + 0x15) = fVar6;
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
      *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar6;
      *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar6 * fVar5;
      do {
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0x98) * fVar6 * fVar6;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar18 = uVar14 - 0x58;
      pfVar20 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar21 = lVar18;
      do {
        fVar6 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar19 + 0xa8) = *(float *)((int)lVar19 + 0xa8) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar21 = 2;
      lVar19 = lVar16;
      fVar6 = fVar3;
      do {
        iVar12 = (int)lVar19;
        iVar13 = (int)lVar18;
        lVar19 = lVar19 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar12 + 0xa8) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar11 = (fVar6 + 0.7853982) * fVar7 + fVar4;
    }
    (pMVar15->rotation).y = -fVar11;
    *(float *)(puVar10 + 0xe) = fVar1;
    *(float *)((int)puVar10 + 0x74) = fVar2;
    *(float *)(puVar10 + 0xf) = ABS(fVar1) - ABS(fVar2);
    uVar17 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar6 = ABS(fVar2);
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar7 = ABS(fVar1);
    }
    if (0.0 < fVar6) {
      lVar19 = uVar14 - 0xf0;
      lVar18 = uVar14 - 0x68;
      lVar21 = uVar14 - 0x78;
      lVar22 = 2;
      fVar1 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar6 = fVar1 * fVar1;
      *(float *)((int)puVar10 + 0x94) = fVar1;
      *(float *)((int)puVar10 + 0x8c) = fVar1;
      *(float *)(puVar10 + 0x12) = fVar1;
      *(float *)(puVar10 + 0x11) = fVar1;
      fVar1 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x8c) = *(float *)((int)puVar10 + 0x8c) * fVar6;
      *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) * fVar1;
      *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar1 * fVar6;
      do {
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x78) * fVar1 * fVar1;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar1 * fVar1;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar18 = uVar14 - 0x78;
      pfVar20 = (float *)&DAT_007358e0;
      lVar19 = lVar16;
      lVar21 = lVar18;
      do {
        fVar1 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar19 + 0x88) = *(float *)((int)lVar19 + 0x88) * fVar1;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar19 = 2;
      do {
        iVar12 = (int)lVar16;
        iVar13 = (int)lVar18;
        lVar16 = lVar16 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar12 + 0x88) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar4 + fVar2;
    }
    pMVar9 = pMVar15->pClass;
    (pMVar15->rotation).z = fVar3;
    fVar2 = DAT_0084178c;
    fVar1 = pMVar9->gScale;
    pMVar15->updateDistance = -1;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x01';
    pMVar15->drawDistance = 0xff;
    lVar16 = (longlong)DAT_00841780;
    lVar19 = (longlong)DAT_00841784;
    lVar21 = (longlong)DAT_00841788;
    pMVar15->scale = fVar1 * fVar2;
    mobyfunc::SetColorOfMoby(pMVar15,lVar16,lVar19,lVar21);
    *(float *)((int)pvVar8 + 0x40) = (float)param_1;
    *(float *)((int)pvVar8 + 0x44) = (float)param_2;
    *(undefined4 *)((int)pvVar8 + 0x4c) = param_4;
    *(undefined4 *)((int)pvVar8 + 0x48) = 0x428c0000;
    *(undefined4 *)((int)pvVar8 + 0x20) = *param_7;
    *(undefined4 *)((int)pvVar8 + 0x24) = param_7[1];
    *(undefined4 *)((int)pvVar8 + 0x28) = param_7[2];
    *(undefined4 *)((int)pvVar8 + 0x2c) = param_7[3];
    mobyfunc::UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}



//==== 003758e0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M436_003758e0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M436_003758e0(void)

{
  DAT_008417dc = 0x10000;
  return;
}



//==== 00375900  ns=mobyupdate_unsorted  size=0x6d0
// sig: undefined UpdateMoby_436_UmbrisInfobot???(MobyInstance * moby)
// callers(0): 
// callees(10): 000a0c38 hero::Hero_Warp; 000e4b78 map::Map_RevealRect; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 00112c20 mobyutil::MB_UnlockLevel; 0011ccc8 music::music_SetTransition; 0015ea84 space::ChangeLevel; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie
// strings: 003758f8: '?fff`'

/* Moby 436 */

void mobyupdate_unsorted::UpdateMoby_436_UmbrisInfobot___(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  MobyInstance *pMVar13;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar12 = piVar3[6];
        if (iVar12 != -1) {
          hero::Hero_Warp(&Cuboids[iVar12].pos.x,&Cuboids[iVar12].rot.x,0,1);
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      if (g_gameMode != GAME_MODE_SCENE) {
        iVar12 = piVar3[3];
        if (iVar12 != -1) {
          MobyInstance[iVar12].modeBits = MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x06';
        update::mode_sceneInit(2);
      }
    }
    else if (bVar1 == 4) {
      if (MiscLevelFlags.UmbrisRelated2 == 0) {
        if (*piVar3 == -1) {
          moby->state = '\b';
        }
        else {
          iVar12 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3);
          if (iVar12 != 0) {
            MiscLevelFlags.UmbrisRelated2 = 1;
            iVar12 = piVar3[3];
            if (iVar12 != -1) {
              MobyInstance[iVar12].modeBits = MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
            }
            iVar12 = piVar3[5];
            if (iVar12 != -1) {
              MobyInstance[iVar12].modeBits = MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
            }
            moby->state = '\x05';
            update::mode_sceneInit(1);
          }
        }
      }
      else {
        moby->state = '\a';
      }
      if ((moby->state != '\x04') && (piVar3[2] != -1)) {
        mobyfunc::DeleteMoby(MobyInstance + piVar3[2]);
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
      if (MiscLevelFlags.UmbrisRelated1 == 0) {
        MiscLevelFlags.UmbrisRelated1 = 1;
        moby->state = '\x02';
        update::mode_sceneInit(0);
      }
      else {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 0) {
      if ((MiscLevelFlags.UmbrisRelated2 != 0) && (piVar3[2] != -1)) {
        mobyfunc::DeleteMoby(MobyInstance + piVar3[2]);
      }
      if (g_gameMode == GAME_MODE_NORMAL) {
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 == 0xd) {
    mobyfunc::DeleteMoby(moby);
  }
  else if (bVar1 == 0xc) {
    if (((piVar3[4] != -1) && (pMVar13 = MobyInstance + piVar3[4], pMVar13 != (MobyInstance *)0x0))
       && (pMVar13->state != 0xfd && pMVar13->state != 0xfe)) {
      mobyfunc::DeleteMoby(pMVar13);
    }
    moby->state = '\r';
  }
  else {
    if (bVar1 != 0xb) {
      if (bVar1 != 10) {
        if (bVar1 == 9) {
          if (g_gameMode == GAME_MODE_SCENE) {
            return;
          }
          moby->state = '\n';
          update::PlayInfobotMovie(8);
          return;
        }
        if (bVar1 != 8) {
          if (bVar1 != 7) {
            return;
          }
          iVar12 = piVar3[3];
          if (iVar12 != -1) {
            MobyInstance[iVar12].modeBits =
                 MobyInstance[iVar12].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          iVar12 = piVar3[5];
          if (iVar12 != -1) {
            MobyInstance[iVar12].modeBits =
                 MobyInstance[iVar12].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          }
          music::music_SetTransition(2,4);
          moby->state = '\b';
          return;
        }
        if (MiscLevelFlags.UmbrisRelated3 == 0) {
          if (((piVar3[3] == -1) || (MobyInstance + piVar3[3] == (MobyInstance *)0x0)) ||
             ((uVar2 = MobyInstance[piVar3[3]].state, uVar2 == 0xfe || (uVar2 == 0xfd)))) {
            if (piVar3[1] == -1) {
              moby->state = '\r';
            }
            else {
              iVar12 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[1]);
              if (iVar12 != 0) {
                hero::Hero_Warp(&Cuboids[piVar3[7]].pos.x,&Cuboids[piVar3[7]].rot.x,0x72,1);
                MiscLevelFlags.UmbrisRelated3 = 1;
                moby->state = '\t';
                update::mode_sceneInit(3);
              }
            }
          }
        }
        else {
          moby->state = '\f';
        }
        if (moby->state == '\b') {
          return;
        }
        iVar12 = piVar3[4];
        if (iVar12 == -1) {
          return;
        }
        MobyInstance[iVar12].modeBits = MobyInstance[iVar12].modeBits | (UNK_40|DISABLED);
        return;
      }
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\v';
        update::mode_sceneInit(4);
      }
    }
    if (g_gameMode != GAME_MODE_SCENE) {
      iVar12 = piVar3[7];
      if (iVar12 != -1) {
        hero::Hero_Warp(&Cuboids[iVar12].pos.x,&Cuboids[iVar12].rot.x,0,1);
      }
      fVar11 = g_heroPosition.z;
      fVar10 = g_heroPosition.y;
      fVar9 = g_heroPosition.x;
      if (piVar3[4] != -1) {
        pMVar13 = MobyInstance + piVar3[4];
        fVar4 = g_heroPosition.y - (pMVar13->pos).y;
        fVar5 = g_heroPosition.x - (pMVar13->pos).x;
        fVar6 = g_heroPosition.z - (pMVar13->pos).z;
        (pMVar13->pos).w = g_heroPosition.w;
        fVar8 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        fVar7 = (float)0x3f666666 / fVar8;
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar6 = fVar6 * fVar7;
        }
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar4 = fVar4 * fVar7;
        }
        if ((float)0x3f666666 - fVar8 < 0.0) {
          fVar5 = fVar5 * fVar7;
        }
        (pMVar13->pos).z = fVar11 + fVar6;
        (pMVar13->pos).y = fVar10 + fVar4;
        (pMVar13->pos).x = fVar9 + fVar5;
        mobyfunc::DeleteMoby(pMVar13);
      }
      map::Map_RevealRect(0x87,0xc,0x56,0x3c);
      mobyutil::MB_UnlockLevel(Batalia);
      memcard::memcard_Save(0,8);
      space::ChangeLevel(Batalia);
      moby->state = '\f';
    }
  }
  return;
}



//==== 00375fd0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M437_00375fd0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M437_00375fd0(void)

{
  DAT_0084184c = 0x10000;
  return;
}



//==== 00375ff8  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M437_00375ff8(void)
// callers(1): 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(0): 

void mobyupdate_helpers::M437_00375ff8(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar4 = 0.0;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar6) == 0.0) {
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar6);
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar2 = fVar2 * fVar4;
    fVar1 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *param_2 = fVar2 + g_heroPosition.x;
  param_2[1] = fVar1 + g_heroPosition.y;
  fVar1 = g_heroPosition.z;
  param_2[3] = fVar5;
  param_2[2] = fVar4 + fVar1;
  return;
}



//==== 003760e8  ns=mobyupdate_helpers  size=0x1bc
// sig: undefined M437_003760e8(void)
// callers(1): 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(1): 000ff6b8 mobyutil::CollLineValidate

void mobyupdate_helpers::M437_003760e8(undefined8 param_1,float *param_2)

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
  int iVar12;
  double dVar13;
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar9 = 0.0;
  fVar4 = (g_heroMobyPtr->transform).v2.x;
  fVar5 = (g_heroMobyPtr->transform).v2.y;
  fVar6 = (g_heroMobyPtr->transform).v2.z;
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar8 == 0.0) {
    fVar7 = (g_heroMobyPtr->transform).v1.w;
    fVar3 = fVar9;
    fVar1 = fVar9;
    fVar2 = fVar9;
  }
  else {
    fVar8 = 1.1 / fVar8;
    fVar7 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar2 * fVar8;
    fVar1 = fVar1 * fVar8;
    fVar3 = fVar3 * fVar8;
  }
  fVar11 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar8 = fVar9;
  fVar10 = fVar9;
  if (SQRT(fVar11) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar11);
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar10 = fVar4 * fVar9;
    fVar8 = fVar5 * fVar9;
    fVar9 = fVar6 * fVar9;
  }
  param_2[3] = fVar7;
  *param_2 = fVar2 + fVar10;
  param_2[1] = fVar1 + fVar8;
  param_2[2] = fVar3 + fVar9;
  *param_2 = fVar2 + fVar10 + g_heroPosition.x;
  param_2[1] = fVar1 + fVar8 + g_heroPosition.y;
  fVar1 = fVar3 + fVar9 + g_heroPosition.z;
  if (param_2[0x1a] == 0.0) {
    dVar13 = (double)DAT_010c515c;
    param_2[2] = fVar1;
    iVar12 = mobyutil::CollLineValidate
                       (dVar13,0x4000000000000000,param_2,&DAT_003760d0,&DAT_010c5154,param_1,0);
    if (iVar12 != 0) {
      param_2[2] = CollOutput.ip.z;
    }
  }
  else {
    param_2[2] = fVar1 + 1.0;
  }
  return;
}



//==== 003762b8  ns=mobyupdate_helpers  size=0x26c
// sig: undefined M437_003762b8(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

undefined8 mobyupdate_helpers::M437_003762b8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  uVar1 = *param_2;
  *(undefined4 *)(puVar9 + 0xe) = uVar1;
  uVar2 = param_2[1];
  *(undefined4 *)((int)puVar9 + 0x74) = uVar2;
  uVar3 = param_2[3];
  fVar4 = (float)param_2[2];
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
  *(undefined4 *)(puVar9 + 0x10) = uVar1;
  *(undefined4 *)((int)puVar9 + 0x84) = uVar2;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar3;
  *(float *)(puVar9 + 0xf) = fVar4 + 1.0;
  *(float *)(puVar9 + 0x11) = fVar4 - 1.0;
  iVar15 = collproc::CollLine(uVar12 - 0x50,uVar12 - 0x40,2,param_1,0);
  fVar4 = CollOutput.normal.z;
  if (iVar15 != 0) {
    fVar7 = ABS(CollOutput.normal.z);
    fVar5 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar6 = ABS(fVar5);
    *(float *)(puVar9 + 0x12) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar7 - fVar6;
    fVar5 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
    fVar4 = fVar7;
    if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar6 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar9 + 0x12));
    if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
      fVar10 = fVar7;
    }
    if (0.0 < fVar4) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x18;
      lVar17 = uVar12 - 0x28;
      lVar20 = 2;
      fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar7;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x88) * fVar4 * fVar4;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x28;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar7 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar15 + 0x98) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar6;
    }
    if (fVar5 < 0.5) {
      return 1;
    }
  }
  return 0;
}



//==== 00376538  ns=mobyupdate_helpers  size=0x98
// sig: undefined M437_00376538(void)
// callers(0): 
// callees(1): 00100ef8 mobyutil::MB_MoveAndCollide2

void mobyupdate_helpers::M437_00376538(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)(param_2 + 0x18) = -(DAT_0071f418 * 29.7 - *(float *)(param_2 + 0x18));
  uVar1 = DAT_010c5154;
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) * (DAT_0071f408 * -0.050000012 + 1.0);
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) * (DAT_0071f408 * -0.050000012 + 1.0);
  mobyutil::MB_MoveAndCollide2
            (0x3fd3333340000000,(double)DAT_010c5184,param_1,param_2 + 0x10,&DAT_00376524,uVar1,
             &DAT_00720000,0);
  return;
}



//==== 003765e0  ns=mobyupdate_helpers  size=0x648
// sig: undefined M437_003765e0(void)
// callers(1): 00376c48 mobyupdate_helpers::M437_00376c48
// callees(3): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 005026a0 fastfunc::FastSubRots
// strings: 003765d0: 'Nnk(' (raw)

MobyInstance *
mobyupdate_helpers::M437_003765e0
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 param_7,float *param_8,int param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *moby;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  int *piVar12;
  longlong lVar11;
  int iVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x160;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  puVar7[0x2e] = in_LR;
  puVar7[0x21] = in_f21;
  puVar7[0x22] = in_f22;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x1d] = unaff_r28;
  pMVar18 = (MobyInstance *)0x0;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1c] = unaff_r27;
  puVar7[0x1f] = unaff_r30;
  moby = MobyUpdateChainStart;
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1b] = unaff_r26;
  dVar26 = 1000000000.0;
  for (; moby != (MobyInstance *)0x0; moby = (MobyInstance *)moby->pChain) {
    if ((((moby->drawDistance != 0) &&
         (piVar12 = (int *)mobyutil::MB_GetPvarsIfMobyHasThem(moby),
         (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) && (moby->pClass != (MobyClass *)0x0)) &&
       ((((short)moby->pClass->mode_bits == 5 && (piVar12 != (int *)0x0)) &&
        (dVar23 = 0.0, 0 < *piVar12)))) {
      fVar2 = param_8[1];
      fVar5 = fVar2 - (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = *param_8 - fVar3;
      fVar6 = param_8[2] - (moby->pos).z;
      dVar25 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      if (dVar25 < param_3) {
        fVar5 = fVar3 - *param_8;
        *(float *)(puVar7 + 0xe) = fVar3;
        fVar3 = (moby->pos).y;
        fVar2 = fVar3 - fVar2;
        *(float *)((int)puVar7 + 0x74) = fVar3;
        fVar3 = (moby->pos).z;
        *(float *)(puVar7 + 0xf) = fVar3;
        *(f32 *)((int)puVar7 + 0x7c) = (moby->pos).w;
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar7 + 0x8c) = fVar5;
        fVar4 = ABS(fVar2);
        *(float *)(puVar7 + 0x12) = fVar2;
        *(float *)((int)puVar7 + 0x94) = fVar6 - fVar4;
        *(float *)(puVar7 + 0xf) = fVar3 + 0.4;
        fVar2 = *(float *)(param_9 + 8);
        dVar24 = 0.7853981852531433;
        uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar5 = ABS(*(float *)((int)puVar7 + 0x8c));
        if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar9 = ABS(*(float *)(puVar7 + 0x12));
        if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
          fVar9 = fVar6;
        }
        dVar20 = dVar23;
        if (0.0 < fVar5) {
          lVar11 = uVar10 - 0x150;
          lVar17 = uVar10 - 0x98;
          lVar14 = uVar10 - 0xa8;
          lVar19 = 2;
          fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar7 + 0xc4) = fVar5;
          *(float *)((int)puVar7 + 0xbc) = fVar5;
          *(float *)(puVar7 + 0x18) = fVar5;
          *(float *)(puVar7 + 0x17) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar6;
          *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar5;
          *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar5 * fVar5;
            iVar13 = (int)lVar14;
            lVar14 = lVar14 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar17 = uVar10 - 0xa8;
          pfVar15 = (float *)&DAT_007358e0;
          lVar11 = lVar1;
          lVar14 = lVar17;
          do {
            fVar5 = *pfVar15;
            fVar6 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar5;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar11 = lVar1;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar17;
            lVar11 = lVar11 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar20 = (double)fastfunc::FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = param_8[2];
        fVar3 = *(float *)(param_9 + 4);
        if ((dVar20 < (double)(float)(param_1 * param_1)) ||
           ((dVar25 < param_4 && (dVar20 < (double)(float)(param_5 * param_5))))) {
          *(float *)(puVar7 + 0x10) = (float)dVar25;
          dVar21 = ABS((double)(*(float *)(puVar7 + 0xf) - fVar2));
          *(float *)((int)puVar7 + 0x84) = *(float *)(puVar7 + 0xf) - fVar2;
          *(float *)(puVar7 + 0x11) = (float)(ABS(dVar25) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
          if ((double)*(float *)(puVar7 + 0x11) - dVar23 < 0.0) {
            dVar22 = dVar21;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar7 + 0x84));
          if ((double)*(float *)(puVar7 + 0x11) - dVar23 < 0.0) {
            dVar21 = ABS(dVar25);
          }
          fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar22) {
            lVar11 = uVar10 - 0x150;
            lVar14 = uVar10 - 200;
            lVar17 = uVar10 - 0xb8;
            lVar19 = 2;
            fVar4 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar7 + 0xa4) = fVar4;
            *(float *)((int)puVar7 + 0x9c) = fVar4;
            *(float *)(puVar7 + 0x14) = fVar4;
            *(float *)(puVar7 + 0x13) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar6;
            *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
            *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar4 * fVar4;
              iVar13 = (int)lVar14;
              lVar11 = lVar11 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar17 = uVar10 - 200;
            pfVar15 = (float *)&DAT_007358e0;
            lVar11 = lVar1;
            lVar14 = lVar17;
            do {
              fVar4 = *pfVar15;
              fVar6 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar4;
              lVar11 = lVar11 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar11 = lVar1;
            do {
              iVar13 = (int)lVar11;
              iVar8 = (int)lVar17;
              lVar11 = lVar11 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar13 + 0x98)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar23 = (double)((float)(dVar23 + dVar24) * fVar2 + fVar5);
          }
          dVar23 = (double)fastfunc::FastSubRots(fVar3,(float)dVar23);
          dVar23 = (double)(float)(dVar23 * dVar23);
          if ((((dVar23 < (double)(float)(param_2 * param_2)) ||
               ((dVar25 < param_4 && (dVar23 < (double)(float)(param_6 * param_6))))) &&
              (fVar2 = param_8[1] - *(float *)((int)puVar7 + 0x74),
              dVar23 = (double)((float)(dVar20 * dVar23) *
                               SQRT(SQRT((param_8[2] - *(float *)(puVar7 + 0xf)) *
                                         (param_8[2] - *(float *)(puVar7 + 0xf)) +
                                         (*param_8 - *(float *)(puVar7 + 0xe)) *
                                         (*param_8 - *(float *)(puVar7 + 0xe)) + fVar2 * fVar2))),
              dVar23 < dVar26)) &&
             ((iVar13 = collproc::CollLine(param_8,uVar10 - 0xf0,0,param_7,0), iVar13 == 0 ||
              ((((CollOutput.pMoby != (MobyInstance *)0x0 && (CollOutput.pMoby != g_heroMobyPtr)) &&
                ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
               ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
            dVar26 = dVar23;
            pMVar18 = moby;
          }
        }
      }
    }
  }
  return pMVar18;
}



//==== 00376c48  ns=mobyupdate_helpers  size=0xb40
// sig: undefined M437_00376c48(void)
// callers(1): 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(5): 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 002a5158 mobyupdate_helpers::M1633_002a5158; 003765e0 mobyupdate_helpers::M437_003765e0; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M437_00376c48(longlong param_1,longlong param_2)

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
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar19;
  MobyInstance *moby;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1f0;
  puVar14 = (ulonglong *)lVar18;
  *puVar14 = uVar16;
  puVar14[0x40] = in_LR;
  puVar14[0x33] = in_f21;
  puVar14[0x34] = in_f22;
  puVar14[0x35] = in_f23;
  puVar14[0x36] = in_f24;
  puVar14[0x37] = in_f25;
  puVar14[0x38] = in_f26;
  puVar14[0x39] = in_f27;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  puVar14[0x31] = unaff_r30;
  puVar14[0x32] = unaff_r31;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  iVar19 = fastfunc::FastDecTimerS16(param_2 + 0x4e);
  if (iVar19 != 0) {
    *(undefined4 *)((int)puVar14 + 0x8c) = 0;
    *(undefined4 *)(puVar14 + 0x11) = 0;
    *(undefined4 *)((int)puVar14 + 0x84) = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar39 = loadVectorLeftIndexed(0x10,param_1);
    auVar40 = loadVectorLeftIndexed(0x1884,0x840000);
    auVar42 = loadVectorLeftIndexed(0x14,param_1);
    auVar41 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x80,lVar18);
    *(undefined4 *)(puVar14 + 0x10) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x84,lVar18);
    *(undefined4 *)((int)puVar14 + 0x84) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar18);
    *(undefined4 *)(puVar14 + 0x11) = uVar13;
    fVar1 = DAT_0084187c;
    fVar5 = DAT_00841878;
    auVar39 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x88,lVar18);
    *(undefined4 *)(puVar14 + 0x11) = uVar13;
    moby = (MobyInstance *)
           M437_003765e0((double)(fVar5 * 0.017453292),(double)(fVar1 * 0.017453292),
                         (double)DAT_00841874,0x4000000000000000,0x400921fb60000000,
                         0x400921fb60000000,param_1,uVar16 - 0x170,param_1 + 0x40);
    iVar19 = (int)param_2;
    if (moby == (MobyInstance *)0x0) {
      *(undefined4 *)(iVar19 + 0x68) = 0;
    }
    else {
      *(MobyInstance **)(iVar19 + 0x68) = moby;
      iVar20 = (int)param_1;
      if (g_heroPosition.z + 1.1 < *(float *)(iVar20 + 0x18)) {
        fVar5 = (moby->pos).x - *(float *)(iVar20 + 0x10);
        fVar1 = (moby->pos).y - *(float *)(iVar20 + 0x14);
        fVar6 = ABS(fVar5);
        fVar11 = ABS(fVar1);
        *(float *)(puVar14 + 0x18) = fVar5;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        fVar5 = *(float *)(iVar20 + 0x48);
        *(float *)(puVar14 + 0x19) = fVar6 - fVar11;
        dVar34 = 0.0;
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x18));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar1 = fVar11;
        }
        fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar2 = ABS(*(float *)((int)puVar14 + 0xc4));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar27 = dVar34;
        if (0.0 < fVar1) {
          lVar17 = uVar16 - 0x1e0;
          lVar25 = uVar16 - 0x94;
          lVar22 = uVar16 - 0xa4;
          lVar26 = 2;
          fVar1 = (fVar2 - fVar1) / (fVar2 + fVar1);
          fVar2 = fVar1 * fVar1;
          *(float *)(puVar14 + 0x2b) = fVar1;
          *(float *)(puVar14 + 0x2a) = fVar1;
          *(float *)((int)puVar14 + 0x154) = fVar1;
          *(float *)((int)puVar14 + 0x14c) = fVar1;
          fVar1 = fVar2 * fVar2;
          *(float *)(puVar14 + 0x2a) = *(float *)(puVar14 + 0x2a) * fVar2;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar1;
          *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar1 * fVar2;
          do {
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar1 * fVar1;
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar25 = uVar16 - 0xa4;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar25;
          do {
            fVar1 = *pfVar23;
            fVar2 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * fVar1;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar2;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar22 = 2;
          lVar17 = lVar18;
          do {
            iVar20 = (int)lVar17;
            iVar15 = (int)lVar25;
            lVar17 = lVar17 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x14c)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar11 + fVar6);
        }
        dVar27 = (double)fastfunc::FastSubRots(fVar5,(float)dVar27);
        if ((dVar27 < 0.5235987901687622) && (g_gameMode != GAME_MODE_SCENE)) {
          dVar37 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar27 = (double)(moby->pos).z;
          iVar20 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          uVar13 = *(undefined4 *)((int)puVar14 + 0x8c);
          if (iVar20 == 0) {
            dVar33 = (double)DAT_00841884;
            dVar28 = dVar27;
          }
          else {
            dVar28 = (double)*(float *)(iVar20 + 0x10);
            dVar33 = dVar27;
          }
          fVar1 = (float)(dVar36 - (double)*(float *)((int)puVar14 + 0x84));
          fVar11 = (float)(dVar37 - (double)*(float *)(puVar14 + 0x10));
          fVar6 = (float)((double)(float)(dVar33 + dVar28) - (double)*(float *)(puVar14 + 0x11));
          dVar30 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar1 * fVar1);
          fVar5 = (float)((double)DAT_00841880 / dVar30);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          dVar29 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar29 = (double)(fVar11 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar29 = (double)(fVar11 * fVar5);
          }
          fVar1 = (float)((double)*(float *)((int)puVar14 + 0x84) + dVar27);
          fVar11 = (float)((double)*(float *)(puVar14 + 0x10) + dVar29);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          fVar2 = (float)(dVar36 - (double)fVar1);
          fVar3 = (float)(dVar37 - (double)fVar11);
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar3);
          fVar5 = (float)((double)*(float *)(puVar14 + 0x11) + dVar27);
          *(float *)((int)puVar14 + 0xb4) = fVar3;
          *(float *)(puVar14 + 0x17) = fVar2;
          *(float *)(puVar14 + 0x10) = fVar11;
          *(float *)((int)puVar14 + 0x84) = fVar1;
          *(float *)((int)puVar14 + 0xbc) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x11) = fVar5;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0xb4));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar32 = ABS((double)*(float *)(puVar14 + 0x17));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar32 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar31 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0xc4;
            lVar25 = uVar16 - 0xb4;
            lVar26 = 2;
            fVar4 = (float)(dVar32 - dVar27) / (float)(dVar32 + dVar27);
            fVar8 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)(puVar14 + 0x26) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            *(float *)((int)puVar14 + 300) = fVar4;
            fVar4 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar8;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar4;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar4 * fVar8;
            do {
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar4 * fVar4;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xc4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar4 = *pfVar23;
              fVar8 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar4;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 300)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar31 = (double)((float)(dVar27 + dVar35) * fVar6 + fVar7);
          }
          fVar6 = (float)((double)fVar1 - dVar36);
          fVar7 = (float)((double)fVar11 - dVar37);
          fVar4 = (float)((double)(float)(dVar33 + dVar28) - (double)fVar5);
          *(float *)((int)puVar14 + 0xac) = fVar4;
          dVar37 = ABS((double)fVar4);
          fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
          dVar36 = ABS((double)fVar6);
          *(float *)(puVar14 + 0x15) = fVar6;
          *(float *)(puVar14 + 0x16) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)(puVar14 + 0x15));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar27 = dVar37;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar14 + 0xac));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar28 = dVar36;
          }
          fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar33 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0xd4;
            lVar22 = uVar16 - 0xe4;
            lVar26 = 2;
            fVar9 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar10 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x23) = fVar9;
            *(float *)(puVar14 + 0x22) = fVar9;
            *(float *)((int)puVar14 + 0x114) = fVar9;
            *(float *)((int)puVar14 + 0x10c) = fVar9;
            fVar9 = fVar10 * fVar10;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar10;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar9;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar9 * fVar10;
            do {
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar9 * fVar9;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar9 * fVar9;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xe4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar9 = *pfVar23;
              fVar10 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar9;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar10;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              iVar15 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x10c)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar33 = (double)((float)(dVar27 + dVar35) * fVar7 + fVar8);
          }
          *(float *)((int)puVar14 + 0x9c) = fVar3;
          *(float *)((int)puVar14 + 0xa4) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x14) = fVar2;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x9c));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar28 = ABS((double)*(float *)(puVar14 + 0x14));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar28 = dVar30;
          }
          dVar30 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0x104;
            lVar25 = uVar16 - 0xf4;
            lVar26 = 2;
            fVar7 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar8 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1f) = fVar7;
            *(float *)(puVar14 + 0x1e) = fVar7;
            *(float *)((int)puVar14 + 0xf4) = fVar7;
            *(float *)((int)puVar14 + 0xec) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar8;
            *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar7;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar7 * fVar7;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x104;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar7 = *pfVar23;
              fVar8 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar7;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0xec)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar30 = (double)((float)(dVar27 + dVar35) * fVar3 + fVar2);
          }
          *(float *)((int)puVar14 + 0x94) = fVar4;
          *(float *)(puVar14 + 0x12) = fVar6;
          *(float *)(puVar14 + 0x13) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
          uVar21 = uVar24 << 2 | 0x735900;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x94));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar27 = dVar36;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar36 = ABS((double)*(float *)(puVar14 + 0x12));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar36 = dVar37;
          }
          fVar2 = *(float *)((int)uVar21 + 4);
          if (dVar34 < dVar36) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0x114;
            lVar22 = uVar16 - 0x124;
            lVar26 = 2;
            fVar3 = (float)(dVar27 - dVar36) / (float)(dVar27 + dVar36);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x1b) = fVar3;
            *(float *)(puVar14 + 0x1a) = fVar3;
            *(float *)((int)puVar14 + 0xd4) = fVar3;
            *(float *)((int)puVar14 + 0xcc) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar7;
            *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar3;
            *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x124;
            uVar21 = ZEXT48(&DAT_007358e0);
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              pfVar23 = (float *)uVar21;
              fVar3 = pfVar23[1];
              uVar21 = uVar21 + 8;
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * *pfVar23;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar17 = 2;
            do {
              iVar20 = (int)lVar18;
              iVar15 = (int)lVar25;
              lVar18 = lVar18 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xcc)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar34 = (double)((float)(dVar34 + dVar35) * fVar6 + fVar2);
          }
          *(float *)(puVar14 + 8) = fVar11;
          *(float *)(puVar14 + 9) = fVar5;
          *(float *)((int)puVar14 + 0x44) = fVar1;
          *(undefined4 *)((int)puVar14 + 0x4c) = uVar13;
          M1633_002a5158(dVar31,-dVar33,dVar30,-dVar34,param_1,uVar21,puVar14[8],puVar14[9]);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x1870,0x840000);
          auVar40 = vectorConvertFromSignedFixedPointWord(auVar39,0);
          auVar39 = loadVectorLeftIndexed(0x1c,0x376c28);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar38);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x4e,param_2);
          *(undefined2 *)(iVar19 + 0x4e) = uVar12;
          *(int *)(iVar19 + 100) = *(int *)(iVar19 + 100) + 1;
        }
      }
    }
  }
  return;
}



//==== 003777f8  ns=mobyupdate_helpers  size=0xf24
// sig: undefined M437_003777f8(void)
// callers(1): 00378778 mobyupdate_unsorted::UpdateMoby_437
// callees(5): 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100ef8 mobyutil::MB_MoveAndCollide2; 005c8318 rand

void mobyupdate_helpers::M437_003777f8(int param_1,float *param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  short sVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x170;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x30] = in_LR;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  fVar3 = *param_2;
  puVar7[0x27] = unaff_r30;
  fVar4 = *(float *)(param_1 + 0x10);
  puVar7[0x28] = unaff_r31;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar3 = fVar3 - fVar4;
  dVar27 = (double)fVar3;
  cVar1 = *(char *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_1 + 0xbc);
  fVar8 = param_2[1] - fVar5;
  dVar26 = (double)fVar8;
  dVar29 = (double)(param_2[2] - *(float *)(param_1 + 0x18));
  puVar7[0x26] = unaff_r29;
  fVar6 = g_heroPosition.x;
  fVar9 = g_heroPosition.y;
  if (cVar1 == '\x06') {
    fVar6 = param_2[0xc];
    fVar9 = param_2[0xd];
  }
  dVar28 = 0.7853981852531433;
  dVar25 = (double)SQRT((fVar4 - fVar6) * (fVar4 - fVar6) + (fVar5 - fVar9) * (fVar5 - fVar9));
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(float *)((int)puVar7 + 0x94) = fVar3;
      *(float *)(puVar7 + 0x13) = fVar8;
      *(float *)((int)puVar7 + 0x9c) = (float)(ABS(dVar27) - ABS(dVar26));
      dVar28 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1d) & 4;
      dVar29 = ABS((double)*(float *)((int)puVar7 + 0x94));
      if (*(float *)((int)puVar7 + 0x9c) - 0.0 < 0.0) {
        dVar29 = ABS(dVar26);
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar26 = ABS((double)*(float *)(puVar7 + 0x13));
      if (*(float *)((int)puVar7 + 0x9c) - 0.0 < 0.0) {
        dVar26 = ABS(dVar27);
      }
      if (0.0 < dVar29) {
        lVar12 = uVar11 - 0x160;
        lVar16 = uVar11 - 0x70;
        lVar19 = uVar11 - 0x60;
        lVar21 = 2;
        fVar5 = (float)(dVar26 - dVar29) / (float)(dVar26 + dVar29);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x10c) = fVar5;
        *(float *)((int)puVar7 + 0x104) = fVar5;
        *(float *)(puVar7 + 0x21) = fVar5;
        *(float *)(puVar7 + 0x20) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar6;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar5;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar12 + 0x100) = *(float *)((int)lVar12 + 0xf0) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar12 = lVar12 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0x70;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar5 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0x100) = *(float *)((int)lVar12 + 0x100) * fVar5;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar12 = 2;
        do {
          iVar14 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar14 + 0x100)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar28,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                 (double)(mobyutil::g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
      if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
        bVar2 = *(byte *)(param_1 + 0x53);
        iVar14 = rand();
        if ((uint)bVar2 != iVar14 % 3) {
          iVar14 = rand();
          puVar7[0x24] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(param_1,iVar14 % 3,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
      }
      if (dVar25 <= 1.2999999523162842) {
        return;
      }
      if (*(char *)(param_1 + 0x53) != '\x05') {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
      *(undefined1 *)(param_1 + 0xbc) = 2;
      return;
    }
  }
  else if (bVar2 < 4) {
    fVar6 = param_2[0x1a];
    if (fVar6 == 0.0) {
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)((int)puVar7 + 0x8c) = fVar8;
      *(float *)(puVar7 + 0x12) = (float)(ABS(dVar27) - ABS(dVar26));
      dVar23 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar7 + 0x11));
      if (*(float *)(puVar7 + 0x12) - 0.0 < 0.0) {
        dVar24 = ABS(dVar26);
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar22 = ABS((double)*(float *)((int)puVar7 + 0x8c));
      if (*(float *)(puVar7 + 0x12) - 0.0 < 0.0) {
        dVar22 = ABS(dVar27);
      }
      if (0.0 < dVar24) {
        lVar12 = uVar11 - 0x160;
        lVar16 = uVar11 - 0x90;
        lVar19 = uVar11 - 0x80;
        lVar21 = 2;
        fVar5 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0xec) = fVar5;
        *(float *)((int)puVar7 + 0xe4) = fVar5;
        *(float *)(puVar7 + 0x1d) = fVar5;
        *(float *)(puVar7 + 0x1c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar6;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar5;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar12 + 0xe0) = *(float *)((int)lVar12 + 0xd0) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar12 = lVar12 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar5 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0xe0) = *(float *)((int)lVar12 + 0xe0) * fVar5;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar14 = (int)lVar12;
          iVar10 = (int)lVar19;
          lVar12 = lVar12 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar14 + 0xe0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar23,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                 (double)(mobyutil::g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    }
    else {
      fVar4 = *(float *)((int)fVar6 + 0x10) - fVar4;
      fVar5 = *(float *)((int)fVar6 + 0x14) - fVar5;
      fVar8 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar5;
      *(float *)((int)puVar7 + 0x84) = fVar8 - fVar6;
      dVar24 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar7 + 0x7c));
      if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar7 + 0x10));
      if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      if (0.0 < fVar3) {
        lVar12 = uVar11 - 0x160;
        lVar19 = uVar11 - 0xa0;
        lVar16 = uVar11 - 0xb0;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0xcc) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar3;
        *(float *)(puVar7 + 0x19) = fVar3;
        *(float *)(puVar7 + 0x18) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar6;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar3;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar12 + 0xc0) = *(float *)((int)lVar12 + 0xb0) * fVar3 * fVar3;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0xc0) = *(float *)((int)lVar12 + 0xc0) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar14 = (int)lVar12;
          lVar12 = lVar12 + 0x10;
          iVar10 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0xc0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar4);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar24,(double)(DAT_008418b4 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_008418b8 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_008418bc * 0.017453292 * mobyutil::g_FrameTime),param_1,&DAT_00720000,
                 &DAT_010c5168);
    }
    dVar24 = (double)(DAT_0071f408 * 0.04);
    if (dVar25 <= 1.2999999523162842) {
      fVar3 = 0.25;
    }
    else {
      fVar3 = 0.13;
    }
    dVar23 = (double)(DAT_0071f40c * fVar3);
    fVar3 = (float)((double)(float)(dVar27 * dVar24 - (double)param_2[4]) * dVar23 +
                   (double)param_2[4]);
    fVar4 = (float)((double)(float)(dVar26 * dVar24 - (double)param_2[5]) * dVar23 +
                   (double)param_2[5]);
    fVar5 = (float)((double)(float)((double)(float)(dVar29 * dVar24 - (double)param_2[6]) * dVar23)
                    * (double)(DAT_0071f408 * -0.100000024 + 1.0) + (double)param_2[6]);
    param_2[4] = fVar3;
    param_2[5] = fVar4;
    param_2[6] = fVar5;
    if (*(char *)(param_1 + 0x20) == '\x06') {
      fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (mobyutil::g_FrameTime * 2.7 < fVar6) {
        fVar6 = (mobyutil::g_FrameTime * 2.7) / fVar6;
        param_2[4] = fVar3 * fVar6;
        param_2[5] = fVar4 * fVar6;
        param_2[6] = fVar5 * fVar6;
      }
    }
    uVar15 = mobyutil::MB_MoveAndCollide2
                       (0x3ff0000000000000,(double)DAT_010c5184,param_1,param_2 + 4,DAT_010c5154,
                        DAT_010c5154);
    fVar3 = animationSpeed;
    dVar26 = (double)SQRT(param_2[6] * param_2[6] +
                          param_2[4] * param_2[4] + param_2[5] * param_2[5]);
    if (uVar15 == 0) {
      dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
      if (DAT_00841890 <= (float)((double)*(float *)(param_1 + 0x18) - dVar26)) {
        if (*(char *)(param_1 + 0x53) != '\x05') {
          puVar7[0x24] = (longlong)(int)(animationSpeed * 7.5);
          mobyutil::MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
        *(undefined2 *)((int)param_2 + 0x4a) = 0;
      }
      else if (*(char *)(param_1 + 0x53) != '\x03') {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 11.5);
        mobyutil::MB_SetAnimation(param_1,3,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
    }
    else {
      dVar27 = 0.004999999888241291;
      if (dVar26 < 0.004999999888241291) {
        sVar20 = *(short *)((int)param_2 + 0x4a) + 1;
        *(short *)((int)param_2 + 0x4a) = sVar20;
        puVar7[0x24] = (longlong)(int)(fVar3 * 20.5);
        if ((*(int *)((int)puVar7 + 0x124) < (int)sVar20) && (*(char *)(param_1 + 0x31) == '\0')) {
          *(float *)(param_1 + 0x10) = *param_2;
          *(float *)(param_1 + 0x14) = param_2[1];
          *(undefined2 *)((int)param_2 + 0x4a) = 0;
          *(float *)(param_1 + 0x18) = param_2[2];
          *(float *)(param_1 + 0x1c) = param_2[3];
        }
      }
      dVar29 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
      bVar2 = *(byte *)(param_1 + 0x53);
      if (((uVar15 & 2) != 0) ||
         ((float)((double)*(float *)(param_1 + 0x18) - dVar29) < DAT_00841890)) {
        if (dVar27 <= dVar26) {
          if (bVar2 != 3) {
            puVar7[0x24] = (longlong)(int)(animationSpeed * 11.5);
            mobyutil::MB_SetAnimation(param_1,3,0,*(undefined4 *)((int)puVar7 + 0x124));
          }
        }
        else if ((2 < bVar2) && (iVar14 = rand(), (uint)bVar2 != iVar14 % 3)) {
          iVar14 = rand();
          puVar7[0x24] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(param_1,iVar14 % 3,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
      }
      else if (bVar2 != 5) {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
    }
    if (*(char *)(param_1 + 0x20) == '\x06') {
      return;
    }
    if (1.100000023841858 <= dVar25) {
      return;
    }
    fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x10);
    fVar4 = g_heroPosition.y - *(float *)(param_1 + 0x14);
    fVar6 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)(puVar7 + 0xe) = fVar3;
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar6 - fVar5;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x160;
      lVar16 = uVar11 - 0xd0;
      lVar19 = uVar11 - 0xc0;
      lVar21 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xac) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar6;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3;
      *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar12 + 0xa0) = *(float *)((int)lVar12 + 0x90) * fVar3 * fVar3;
        iVar14 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0xd0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar17;
        fVar6 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar12 + 0xa0) = *(float *)((int)lVar12 + 0xa0) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar14 = (int)lVar13;
        iVar10 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0xa0)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar26 = (double)((float)(dVar26 + dVar28) * fVar5 + fVar4);
    }
    fVar3 = (float)(dVar26 + 1.570796251296997);
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar27 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar27 = dVar26;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar29 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar27 < 0.0) {
      dVar29 = dVar27;
    }
    fVar6 = fVar5 * fVar5;
    dVar26 = (double)(float)(dVar29 * dVar29);
    fVar3 = fVar6 * fVar6 * fVar5;
    dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
    fVar4 = fVar6 * fVar3;
    dVar27 = (double)(float)(dVar26 * dVar28);
    param_2[4] = -((float)(1.100000023841858 - dVar25) *
                   (fVar6 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * DAT_0071f40c * 0.1
                  - param_2[4]);
    param_2[5] = -((float)(1.100000023841858 - dVar25) *
                   ((float)(dVar26 * dVar27) * 2.601887e-06 +
                   (float)(dVar27 * -0.0001980741071747616 +
                          (double)(float)(dVar28 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar26 * dVar29) *
                                                         -0.16666656732559204 + dVar29)))) *
                   DAT_0071f40c * 0.1 - param_2[5]);
    return;
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  if (1.2999999523162842 < dVar25) {
    *(undefined1 *)(param_1 + 0xbc) = 2;
  }
  return;
}



//==== 00378778  ns=mobyupdate_unsorted  size=0x1b10
// sig: undefined UpdateMoby_437(MobyInstance * moby)
// callers(0): 
// callees(26): 00057820 collproc::CollLine; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f00a0 mobyfunc::MB_GetCollPrimWorld; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100ef8 mobyutil::MB_MoveAndCollide2; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00106150 mobyutil::MB_RegisterLameShadow; 00110950 mobyutil::MB_RandomizeVector; 00110b70 mobyutil::MB_IsPntInCuboid; 0012f8c0 partupd::SpawnPart_53; 00375ff8 mobyupdate_helpers::M437_00375ff8; 003760e8 mobyupdate_helpers::M437_003760e8; 00376c48 mobyupdate_helpers::M437_00376c48; 003777f8 mobyupdate_helpers::M437_003777f8; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005cd098 libc::printf
// strings: 006567f0: 'mouse already completed\n' | 00656810: 'no start house! killing mouse\n'

/* Moby 437 */

void mobyupdate_unsorted::UpdateMoby_437(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  ushort uVar9;
  float *pfVar10;
  float fVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar23;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong lVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar20 = uVar21 - 0x210;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar21;
  puVar14[0x44] = in_LR;
  puVar14[0x41] = in_f31;
  puVar14[0x40] = unaff_r31;
  puVar14[0x3f] = unaff_r30;
  puVar14[0x3e] = unaff_r29;
  puVar14[0x3d] = unaff_r28;
  puVar14[0x3c] = unaff_r27;
  puVar14[0x3b] = unaff_r26;
  puVar14[0x3a] = unaff_r25;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar10 = (float *)moby->pVar;
  uVar27 = ZEXT48(pfVar10);
  if (pfVar10 == (float *)0x0) {
    return;
  }
  fVar11 = pfVar10[0x14];
  if (fVar11 != -NAN) {
    if (moby->state < 5) {
      fVar2 = g_heroPosition.x - MobyInstance[(int)fVar11].pos.x;
      fVar4 = g_heroPosition.y - MobyInstance[(int)fVar11].pos.y;
      fVar6 = ABS(fVar2);
      fVar3 = ABS(fVar4);
      *(float *)(puVar14 + 0x20) = fVar2;
      *(float *)((int)puVar14 + 0x104) = fVar4;
      *(float *)(puVar14 + 0x21) = fVar6 - fVar3;
      fVar2 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar14 + 0x20));
      if (*(float *)(puVar14 + 0x21) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)((int)puVar14 + 0x104));
      if (*(float *)(puVar14 + 0x21) - 0.0 < 0.0) {
        fVar15 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar21 - 0x200;
        lVar24 = uVar21 - 0x98;
        lVar25 = uVar21 - 0x88;
        lVar28 = 2;
        fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x184) = fVar4;
        *(float *)((int)puVar14 + 0x17c) = fVar4;
        *(float *)(puVar14 + 0x30) = fVar4;
        *(float *)(puVar14 + 0x2f) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
        *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar4;
        *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x168) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar19 = lVar19 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar21 - 0x98;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar25;
        do {
          fVar4 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x178) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          iVar16 = (int)lVar25;
          lVar19 = lVar19 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar23 + 0x178) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
    }
    else {
      fVar2 = (moby->pos).x - MobyInstance[(int)fVar11].pos.x;
      fVar4 = (moby->pos).y - MobyInstance[(int)fVar11].pos.y;
      fVar6 = ABS(fVar2);
      fVar3 = ABS(fVar4);
      *(float *)((int)puVar14 + 0x10c) = fVar2;
      *(float *)(puVar14 + 0x22) = fVar4;
      *(float *)((int)puVar14 + 0x114) = fVar6 - fVar3;
      fVar2 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar14 + 0x10c));
      if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)(puVar14 + 0x22));
      if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
        fVar15 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar21 - 0x200;
        lVar25 = uVar21 - 0x68;
        lVar24 = uVar21 - 0x78;
        lVar28 = 2;
        fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1a4) = fVar4;
        *(float *)((int)puVar14 + 0x19c) = fVar4;
        *(float *)(puVar14 + 0x34) = fVar4;
        *(float *)(puVar14 + 0x33) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar4;
        *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x188) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar21 - 0x78;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar25;
        do {
          fVar4 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x198) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar16 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar23 + 0x198) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
    }
    *(float *)MobyInstance[(int)fVar11].pVar = fVar2;
    fVar11 = pfVar10[0x14];
  }
  if (fVar11 != -NAN) {
    MobyInstance[(int)fVar11].collision = (ushort *)0x0;
  }
  bVar1 = moby->state;
  if (9 < bVar1) {
    if ((0xf < bVar1) && (0x12 < bVar1)) {
      if (bVar1 < 0x14) {
        fVar11 = DAT_0071f408 * -0.050000012 + 1.0;
        pfVar10[6] = -(DAT_0071f418 * 29.7 - pfVar10[6]);
        pfVar10[4] = pfVar10[4] * fVar11 * fVar11;
        pfVar10[5] = pfVar10[5] * fVar11 * fVar11;
        uVar21 = mobyutil::MB_MoveAndCollide2
                           (0x3fd3333340000000,(double)DAT_010c5184,moby,uVar27 + 0x10,&DAT_0037871c
                            ,DAT_010c5154,&DAT_010c5154,0);
        if ((uVar21 & 2) != 0) {
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          pMVar17 = MobyInstance;
          fVar11 = pfVar10[0x14];
          *pfVar10 = MobyInstance[(int)fVar11].pos.x;
          pfVar10[1] = pMVar17[(int)fVar11].pos.y;
          pfVar10[2] = pMVar17[(int)fVar11].pos.z;
          pfVar10[3] = pMVar17[(int)fVar11].pos.w;
          moby->state = '\x14';
        }
      }
      else if (bVar1 < 0x15) {
        DAT_010c51a4 = (MobyInstance *)0x0;
        fVar11 = *pfVar10 - (moby->pos).x;
        fVar2 = pfVar10[1] - (moby->pos).y;
        fVar6 = ABS(fVar11);
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xdc) = fVar11;
        *(float *)(puVar14 + 0x1c) = fVar2;
        *(float *)((int)puVar14 + 0xe4) = fVar6 - fVar4;
        dVar31 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1c) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar14 + 0xdc));
        if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)(puVar14 + 0x1c));
        if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        if (0.0 < fVar11) {
          lVar19 = uVar21 - 0x200;
          lVar25 = uVar21 - 0xe8;
          lVar24 = uVar21 - 0xf8;
          lVar28 = 2;
          fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
          fVar6 = fVar11 * fVar11;
          *(float *)((int)puVar14 + 0x124) = fVar11;
          *(float *)((int)puVar14 + 0x11c) = fVar11;
          *(float *)(puVar14 + 0x24) = fVar11;
          *(float *)(puVar14 + 0x23) = fVar11;
          fVar11 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar6;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar11;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar11 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar11 * fVar11;
            iVar23 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar21 - 0xf8;
          pfVar26 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar24 = lVar25;
          do {
            fVar11 = *pfVar26;
            fVar6 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar11;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar23 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar16 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x118)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar31,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
        dVar31 = (double)(moby->pos).z;
        uVar21 = mobyutil::MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
        (moby->pos).z = (float)dVar31;
        if ((uVar21 & 4) != 0) {
          if (moby->animationId != '\0') {
            puVar14[0x37] = (longlong)(int)(animationSpeed * 6.5);
            mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1bc));
          }
          MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x01';
          moby->drawDistance = 0;
          moby->state = '\x01';
        }
      }
    }
    goto LAB_0037a214;
  }
  if (3 < bVar1) {
    if (bVar1 < 7) {
      if (bVar1 < 5) {
        hero::TransitionMovement(0,1);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        fVar11 = pfVar10[0x14];
        if (fVar11 != -NAN) {
          MobyInstance[(int)fVar11].modeBits =
               MobyInstance[(int)fVar11].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x05';
        if (((DAT_0096ae10 != 0) && (*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1)) &&
           (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2)) {
          *(undefined1 *)(pfVar10 + 0x12) = 0xff;
          *(undefined1 *)(DAT_0096ae10 + 0x20) = 2;
        }
      }
      else if (bVar1 < 6) {
        if ((((DAT_0096ae10 == 0) || (DAT_0096ae38 != 5)) ||
            ((hero::g_heroStateType == 0x14 || hero::g_heroStateType == 0x16 ||
             ((g_heroType != '\0' ||
              (iVar23 = fastfunc::FastDecTimerS32(uVar27 + 0x60), iVar23 != 0)))))) ||
           (DAT_0084188c <= (int)pfVar10[0x19])) {
          if (moby->animationId != '\x05') {
            puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar14 + 0x1bc));
          }
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          *(short *)(pfVar10 + 0x13) = (short)DAT_00841894;
          moby->state = '\x06';
          if (pfVar10[0x14] != -NAN) {
            MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x05';
          }
        }
        else {
          mobyupdate_helpers::M437_003760e8(moby,uVar27);
          mobyupdate_helpers::M437_003777f8(moby,uVar27);
        }
        mobyupdate_helpers::M437_00376c48(moby,uVar27);
      }
      else {
        iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x4c);
        if (iVar23 == 0) {
          *(undefined4 *)(puVar14 + 0x18) = 0;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
          fVar5 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          *(undefined4 *)((int)puVar14 + 0xcc) = 0;
          fVar7 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x16) = fVar5;
          fVar5 = (moby->pos).z;
          *(f32 *)((int)puVar14 + 0xb4) = fVar7;
          fVar7 = (moby->pos).w;
          *(f32 *)(puVar14 + 0x17) = fVar5;
          *(f32 *)((int)puVar14 + 0xbc) = fVar7;
          mobyutil::MB_RandomizeVector(DAT_008418a0,(float *)(uVar21 - 0x160));
          rand();
          rand();
          rand();
          rand();
          uVar22 = mobyutil::MB_randRange(DAT_00841898,DAT_0084189c);
          uVar29 = mobyutil::MB_randRangeFloat(DAT_008418a4,DAT_008418a8);
          partupd::SpawnPart_53
                    (uVar29,0x3f50624de0000000,(double)(DAT_008418b0 * DAT_0071f418),uVar21 - 0x160,
                     uVar22);
          iVar23 = 0x80 / DAT_00841894;
          moby->modeBits = moby->modeBits | DRAW_TRANSPARENT_WEIRD;
          moby->alpha = moby->alpha - (char)iVar23;
          dVar31 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,mobyutil::g_FrameTime * 25.132742);
          (moby->rotation).z = (float)dVar31;
        }
        else {
          moby->alpha = -0x80;
          (moby->pos).x = pfVar10[0xc];
          (moby->pos).y = pfVar10[0xd];
          (moby->pos).z = pfVar10[0xe];
          (moby->pos).w = pfVar10[0xf];
          *pfVar10 = pfVar10[0xc];
          pfVar10[1] = pfVar10[0xd];
          pfVar10[2] = pfVar10[0xe];
          pfVar10[3] = pfVar10[0xf];
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          moby->state = '\x13';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
                NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
      }
    }
    goto LAB_0037a214;
  }
  if (bVar1 == 0) {
    *(undefined1 *)pfVar10 = 0;
    *(undefined1 *)((int)pfVar10 + 1) = 0;
    *(undefined1 *)((int)pfVar10 + 2) = 0;
    *(undefined1 *)((int)pfVar10 + 3) = 0;
    *(undefined1 *)(pfVar10 + 1) = 0;
    *(undefined1 *)((int)pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 7) = 0;
    *(undefined1 *)(pfVar10 + 2) = 0;
    *(undefined1 *)((int)pfVar10 + 9) = 0;
    *(undefined1 *)((int)pfVar10 + 10) = 0;
    *(undefined1 *)((int)pfVar10 + 0xb) = 0;
    *(undefined1 *)(pfVar10 + 3) = 0;
    *(undefined1 *)((int)pfVar10 + 0xd) = 0;
    *(undefined1 *)((int)pfVar10 + 0xe) = 0;
    *(undefined1 *)((int)pfVar10 + 0xf) = 0;
    *(undefined1 *)(pfVar10 + 4) = 0;
    *(undefined1 *)((int)pfVar10 + 0x11) = 0;
    *(undefined1 *)((int)pfVar10 + 0x12) = 0;
    *(undefined1 *)((int)pfVar10 + 0x13) = 0;
    *(undefined1 *)(pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 0x15) = 0;
    *(undefined1 *)((int)pfVar10 + 0x16) = 0;
    *(undefined1 *)((int)pfVar10 + 0x17) = 0;
    *(undefined1 *)(pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 0x19) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
    *(undefined1 *)(pfVar10 + 7) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
    *(undefined2 *)((int)pfVar10 + 0x4a) = 0;
    *(undefined2 *)(pfVar10 + 0x13) = 0;
    if (moby->animationId != '\0') {
      puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1bc));
    }
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    pMVar17 = MobyInstance;
    fVar11 = pfVar10[0x14];
    if (fVar11 == -NAN) {
      libc::printf("no start house! killing mouse\n");
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar2 = MobyInstance[(int)fVar11].pos.x;
    (moby->pos).x = fVar2;
    (moby->pos).y = pMVar17[(int)fVar11].pos.y;
    fVar4 = pMVar17[(int)fVar11].pos.z;
    (moby->pos).z = fVar4;
    (moby->pos).w = pMVar17[(int)fVar11].pos.w;
    uVar9 = moby->uid;
    (moby->pos).z = fVar4 + 0.02;
    if (((&DAT_00a545c4)[(short)uVar9] != '\0') ||
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
        1 << (uVar9 & 0x1f)) != 0)) {
      libc::printf("mouse already completed\n");
      mobyfunc::DeleteMoby(moby);
      return;
    }
    pfVar10[8] = fVar2;
    pfVar10[9] = (moby->pos).y;
    pfVar10[10] = (moby->pos).z;
    pfVar10[0xb] = (moby->pos).w;
    pfVar10[0xc] = (moby->pos).x;
    pfVar10[0xd] = (moby->pos).y;
    pfVar10[0xe] = (moby->pos).z;
    pfVar10[0xf] = (moby->pos).w;
    mobyutil::MB_InitDefaultParams((float *)&DAT_010c5154);
    mobyfunc::MB_GetCollPrimWorld(moby,0,uVar21 - 0x138,uVar21 - 400,uVar21 - 0x140,uVar21 - 0x13c);
    DAT_010c515c = 0x3e19999a;
    DAT_010c5160 = 0x3e19999a;
    DAT_010c5168 = DAT_0071f408 * 0.4;
    DAT_010c5164 = DAT_0071f408 * 0.01;
    DAT_010c5178 = mobyutil::g_FrameTime * 2.7;
    DAT_010c5170 = DAT_010c5164;
    iVar23 = fastfunc::FastDoubleToInt((double)(*(float *)(puVar14 + 0x1a) * 1024.0));
    DAT_010c5154 = iVar23 + 1;
    DAT_010c518c = DAT_010c518c | 8;
    DAT_010c5158 = 0x3e99999a;
    DAT_010c5184 = 0.005;
    DAT_010c5190 = DAT_0071f418 * 11.519173;
    DAT_010c5198 = mobyutil::g_FrameTime * 11.519173;
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    DAT_010c5194 = DAT_0071f418 * 3.1415927;
    auVar32 = loadVectorLeftIndexed(0x28,0x37871c);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010c519c = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x48,
                              0x10c5154);
    DAT_010c517c = 0x40490fdb;
    moby->state = '\x01';
    moby->drawDistance = 0;
    goto LAB_0037a214;
  }
  if (bVar1 < 2) {
    if ((UnlockableItems.sonicSummoner != '\0') && (DAT_0096ae38 == 5)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      pfVar10[0x19] = 0.0;
      auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x1888,0x840000);
      auVar33 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = loadVectorLeftIndexed(0x2c,0x37871c);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar31 = 0.5;
      auVar32 = vectorAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x60,uVar27)
      ;
      *(undefined4 *)((uint)(pfVar10 + 0x18) & 0xfffffffc) = uVar13;
      if ((moby->enabled != '\0') &&
         (((moby->field43_0x70 & 2U) != 0 &&
          (bVar1 = moby->animationId, iVar23 = rand(), (uint)bVar1 != iVar23 % 3)))) {
        iVar23 = rand();
        puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,iVar23 % 3,0,*(undefined4 *)((int)puVar14 + 0x1bc));
      }
      if (pfVar10[0x14] != -NAN) {
        iVar23 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[0x10]);
        MobyInstance[(int)pfVar10[0x14]].setByGroup =
             ((byte)((LZCOUNT(-iVar23) << 0x3a) >> 0x3f) & 0xfe) + 3;
      }
      if ((DAT_0096ae10 != 0) && (DAT_0096ae38 == 5)) {
        fVar11 = g_heroPosition.x - (moby->pos).x;
        fVar2 = g_heroPosition.y - (moby->pos).y;
        fVar6 = ABS(fVar11);
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xf4) = fVar11;
        *(float *)(puVar14 + 0x1f) = fVar2;
        *(float *)((int)puVar14 + 0xfc) = fVar6 - fVar4;
        dVar30 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar14 + 0xf4));
        if (*(float *)((int)puVar14 + 0xfc) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)(puVar14 + 0x1f));
        if (*(float *)((int)puVar14 + 0xfc) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        if (0.0 < fVar11) {
          lVar19 = uVar21 - 0x200;
          lVar24 = uVar21 - 0xb8;
          lVar25 = uVar21 - 0xa8;
          lVar28 = 2;
          fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
          fVar6 = fVar11 * fVar11;
          *(float *)((int)puVar14 + 0x164) = fVar11;
          *(float *)((int)puVar14 + 0x15c) = fVar11;
          *(float *)(puVar14 + 0x2c) = fVar11;
          *(float *)(puVar14 + 0x2b) = fVar11;
          fVar11 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6;
          *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar11;
          *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar11 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x148) * fVar11 * fVar11;
            iVar23 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar21 - 0xb8;
          pfVar26 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar24 = lVar25;
          do {
            fVar11 = *pfVar26;
            fVar6 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x158) * fVar11;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar23 = (int)lVar20;
            iVar16 = (int)lVar25;
            lVar20 = lVar20 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x158)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar2);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar30,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                   (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
        pMVar17 = MobyInstance;
        fVar6 = g_heroPosition.y;
        fVar4 = g_heroPosition.x;
        fVar2 = pfVar10[0x14];
        *(f32 *)(puVar14 + 0x12) = MobyInstance[(int)fVar2].pos.x;
        *(f32 *)((int)puVar14 + 0x94) = pMVar17[(int)fVar2].pos.y;
        fVar11 = pMVar17[(int)fVar2].pos.z;
        *(float *)(puVar14 + 0x13) = fVar11;
        fVar5 = pMVar17[(int)fVar2].pos.w;
        *(float *)(puVar14 + 0x14) = fVar4;
        *(f32 *)((int)puVar14 + 0x9c) = fVar5;
        fVar2 = g_heroPosition.z;
        *(float *)((int)puVar14 + 0xa4) = fVar6;
        fVar4 = g_heroPosition.w;
        *(float *)(puVar14 + 0x15) = fVar2;
        *(float *)((int)puVar14 + 0xac) = fVar4;
        *(float *)(puVar14 + 0x13) = (float)((double)fVar11 + dVar31);
        *(float *)(puVar14 + 0x15) = fVar2 + 0.2;
        iVar23 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[0x10]);
        if ((iVar23 != 0) &&
           ((iVar23 = collproc::CollLine(uVar21 - 0x180,uVar21 - 0x170,0,moby,0), iVar23 == 0 ||
            (CollOutput.pMoby == g_heroMobyPtr)))) {
          mobyupdate_helpers::M437_00375ff8(moby,uVar27);
          if ((DAT_0096ae10 != 0) &&
             ((*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1 &&
              (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2)))) {
            *(undefined1 *)(DAT_0096ae10 + 0x20) = 1;
          }
          DAT_010c51a4 = moby;
          hero::TransitionMovement(0x1f,0);
          hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0,0);
          if (pfVar10[0x14] == -NAN) {
            moby->drawDistance = 0xff;
            moby->state = '\x03';
          }
          else {
            MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x05';
            moby->state = '\x02';
          }
        }
      }
    }
    goto LAB_0037a214;
  }
  if (bVar1 < 3) {
    if (pfVar10[0x14] == -NAN) {
      *(undefined2 *)(pfVar10 + 0x13) = 0;
      moby->drawDistance = 0xff;
      moby->state = '\x03';
    }
    else if (MobyInstance[(int)pfVar10[0x14]].state == '\x05') {
      moby->state = '\x03';
      *(undefined2 *)(pfVar10 + 0x13) = 0;
      moby->drawDistance = 0xff;
    }
    goto LAB_0037a214;
  }
  mobyupdate_helpers::M437_00375ff8(moby,uVar27);
  fVar11 = *pfVar10 - (moby->pos).x;
  fVar2 = pfVar10[1] - (moby->pos).y;
  fVar6 = ABS(fVar11);
  fVar4 = ABS(fVar2);
  *(float *)(puVar14 + 0x1d) = fVar11;
  *(float *)((int)puVar14 + 0xec) = fVar2;
  *(float *)(puVar14 + 0x1e) = fVar6 - fVar4;
  dVar31 = 0.0;
  uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1d) & 4;
  fVar11 = ABS(*(float *)(puVar14 + 0x1d));
  if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
    fVar11 = fVar4;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)((int)puVar14 + 0xec));
  if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  if (0.0 < fVar11) {
    lVar19 = uVar21 - 0x200;
    lVar24 = uVar21 - 0xd8;
    lVar25 = uVar21 - 200;
    lVar28 = 2;
    fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
    fVar6 = fVar11 * fVar11;
    *(float *)((int)puVar14 + 0x144) = fVar11;
    *(float *)((int)puVar14 + 0x13c) = fVar11;
    *(float *)(puVar14 + 0x28) = fVar11;
    *(float *)(puVar14 + 0x27) = fVar11;
    fVar11 = fVar6 * fVar6;
    *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar6;
    *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar11;
    *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar11 * fVar6;
    do {
      *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar11 * fVar11;
      iVar23 = (int)lVar24;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar21 - 0xd8;
    pfVar26 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar25;
    do {
      fVar11 = *pfVar26;
      fVar6 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * fVar11;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
      lVar24 = lVar24 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar19 = 2;
    do {
      iVar23 = (int)lVar20;
      iVar16 = (int)lVar25;
      lVar20 = lVar20 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x138)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
  }
  mobyutil::OrganicDeltAngSpeed
            (dVar31,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
             (double)(mobyutil::g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
  uVar21 = mobyutil::MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
  if ((uVar21 & 6) == 0) {
    fVar11 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    if (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar11 - g_heroPosition.y) * (fVar11 - g_heroPosition.y)) < 1.0) goto LAB_0037980c;
  }
  else {
LAB_0037980c:
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    *(undefined1 *)(pfVar10 + 4) = 0;
    *(undefined1 *)((int)pfVar10 + 0x11) = 0;
    *(undefined1 *)((int)pfVar10 + 0x12) = 0;
    *(undefined1 *)((int)pfVar10 + 0x13) = 0;
    *(undefined1 *)(pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 0x15) = 0;
    *(undefined1 *)((int)pfVar10 + 0x16) = 0;
    *(undefined1 *)((int)pfVar10 + 0x17) = 0;
    *(undefined1 *)(pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 0x19) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
    *(undefined1 *)(pfVar10 + 7) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
    moby->state = '\x04';
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = loadVectorLeftIndexed(0x3c,0x37871c);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = vectorSplatHalfWord(auVar32,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x4c,uVar27);
    *(undefined2 *)(pfVar10 + 0x13) = uVar12;
    fVar2 = (moby->pos).x;
    fVar11 = (moby->pos).y;
  }
  if (((0.4 < SQRT((fVar2 - pfVar10[0xc]) * (fVar2 - pfVar10[0xc]) +
                   (fVar11 - pfVar10[0xd]) * (fVar11 - pfVar10[0xd]))) &&
      (*(short *)(pfVar10 + 0x13) == 0)) && (DAT_010c5158 = 0x3f333333, moby->animationId != '\x03')
     ) {
    puVar14[0x37] = (longlong)(int)(animationSpeed * 3.5);
    mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar14 + 0x1bc));
  }
LAB_0037a214:
  mobyutil::MB_RegisterLameShadow(0.3,moby);
  fVar11 = pfVar10[0x14];
  if (fVar11 != -NAN) {
    MobyInstance[(int)fVar11].collision = (MobyInstance[(int)fVar11].pClass)->collision;
  }
  return;
}



//==== 0037a2b8  ns=mobyupdate_helpers  size=0x23c
// sig: undefined M438_0037a2b8(void)
// callers(0): 
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00242738 MB_SpawnBolts

void mobyupdate_helpers::M438_0037a2b8(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
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
  double dVar21;
  double dVar22;
  Vec4 local_90;
  
  lVar2 = 1000;
  dVar12 = 0.0;
  dVar13 = 3.0;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  dVar21 = 4.0;
  dVar22 = 12.0;
  do {
    lVar1 = (longlong)(int)lVar2;
    lVar1 = (lVar1 + -0x32 >> 0x3f &
            (lVar1 + -0x14 >> 0x3f & (lVar1 + -5 >> 0x3f & 0xfffffffffffffffcU) - 0xf) - 0x1e) +
            0x32;
    lVar2 = lVar2 - lVar1;
    dVar3 = (double)mobyutil::MB_randRot();
    dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar13);
    dVar6 = (double)(float)(dVar3 + dVar14);
    dVar5 = (double)(float)(dVar15 - dVar3);
    if (dVar3 - (double)(float)(dVar15 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar8 = (double)(float)(dVar15 - dVar6);
    if (dVar6 - (double)(float)(dVar15 - dVar6) < 0.0) {
      dVar8 = dVar6;
    }
    dVar7 = (double)(float)(dVar16 - dVar3);
    if ((double)(float)(dVar16 - dVar3) - dVar5 < 0.0) {
      dVar7 = dVar5;
    }
    dVar5 = (double)(float)(dVar16 - dVar6);
    if ((double)(float)(dVar16 - dVar6) - dVar8 < 0.0) {
      dVar5 = dVar8;
    }
    dVar3 = (double)(float)(dVar7 * dVar7);
    local_90.z = *(float *)(param_1 + 0x18);
    dVar6 = (double)(float)(dVar5 * dVar5);
    dVar10 = (double)(float)(dVar3 * (double)(float)(dVar3 * dVar7));
    dVar8 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar5));
    dVar9 = (double)(float)(dVar3 * dVar10);
    dVar11 = (double)(float)(dVar6 * dVar8);
    local_90.y = (float)((double)(float)((double)(float)(dVar3 * dVar9) * dVar20 +
                                        (double)(float)(dVar9 * dVar19 +
                                                       (double)(float)(dVar10 * dVar18 +
                                                                      (double)(float)((double)(float
                                                  )(dVar3 * dVar7) * dVar17 + dVar7)))) * dVar4 +
                        (double)*(float *)(param_1 + 0x14));
    local_90.x = (float)((double)(float)((double)(float)(dVar6 * dVar11) * dVar20 +
                                        (double)(float)(dVar11 * dVar19 +
                                                       (double)(float)(dVar8 * dVar18 +
                                                                      (double)(float)((double)(float
                                                  )(dVar6 * dVar5) * dVar17 + dVar5)))) * dVar4 +
                        (double)*(float *)(param_1 + 0x10));
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar22);
    local_90.z = (float)((double)local_90.z + dVar5);
    MB_SpawnBolts(param_1,&local_90,&DAT_00a15d30,0,(uint)lVar1,0);
  } while (0 < (int)lVar2);
  return;
}



//==== 0037a4f4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M438_0037a4f4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M438_0037a4f4(void)

{
  DAT_0084190c = 0x10000;
  return;
}



//==== 0037a520  ns=mobyupdate_helpers  size=0x36c
// sig: undefined M438_0037a520(void)
// callers(1): 0037a8b8 mobyupdate_unsorted::UpdateMoby_438
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M438_0037a520(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  dVar11 = 0.0;
  mobyutil::MB_randSphere(0,(double)(DAT_0084193c * mobyutil::g_FrameTime),local_70);
  mobyutil::MB_randRangeFloat(DAT_00841950,DAT_00841954);
  mobyutil::MB_randRangeFloat(DAT_00841958,DAT_0084195c);
  uVar2 = DAT_00841964;
  uVar1 = DAT_00841960;
  dVar10 = 1.0;
  mobyutil::MB_randRangeFloat((float)dVar11,1.0);
  uVar3 = fastfunc::FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_0084196c;
  uVar1 = DAT_00841968;
  mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
  uVar4 = fastfunc::FastLerpColor(uVar1,uVar2);
  dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar10);
  uVar5 = fastfunc::FastDoubleToInt
                    ((double)(animationSpeed *
                             (float)((double)(longlong)DAT_00841940 * dVar11 + dVar10)));
  dVar12 = (double)(longlong)DAT_00841944;
  dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_0084194c,DAT_0084194c);
  uVar6 = fastfunc::FastDoubleToInt
                    ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar10))));
  dVar12 = (double)(longlong)DAT_00841948;
  dVar11 = (double)mobyutil::MB_randRangeFloat(-DAT_0084194c,DAT_0084194c);
  uVar7 = fastfunc::FastDoubleToInt
                    ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar10))));
  iVar8 = partupd::SpawnPart_2(local_60,local_90,local_80,uVar3,uVar4,uVar5,uVar6,uVar7);
  if (iVar8 != 0) {
    cVar9 = fastfunc::FastDoubleToInt(0x4020000000000000);
    *(char *)(iVar8 + 9) = cVar9 + -0x70;
  }
  return;
}



//==== 0037a8b8  ns=mobyupdate_unsorted  size=0x6d8
// sig: undefined UpdateMoby_438(MobyInstance * moby)
// callers(0): 
// callees(9): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fe4f0 mobyutil::MB_randRangeSigned; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00117390 mobyutil::MB_PathEvalSpline; 0011b728 mobyutil::MB_UnlockSkillPoint; 0037a520 mobyupdate_helpers::M438_0037a520; 00502578 fastfunc::FastWrapRot

/* Moby 438 */

void mobyupdate_unsorted::UpdateMoby_438(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  Spline *pSVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  u16 *puVar20;
  int iVar21;
  int iVar23;
  longlong lVar22;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  byte bVar29;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  undefined8 uVar33;
  ulonglong in_f30;
  undefined8 uVar34;
  ulonglong in_f31;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x140;
  puVar15 = (ulonglong *)lVar19;
  *puVar15 = uVar17;
  puVar15[0x2a] = in_LR;
  puVar15[0x25] = in_f29;
  puVar15[0x26] = in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x24] = unaff_r31;
  puVar15[0x22] = unaff_r29;
  puVar15[0x23] = unaff_r30;
  piVar11 = (int *)moby->pVar;
  uVar28 = ZEXT48(piVar11);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar15 + 0x18) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  iVar21 = *piVar11;
  *(f32 *)((int)puVar15 + 0xc4) = fVar2;
  iVar23 = iVar21 * 4;
  fVar2 = (moby->pos).w;
  *(f32 *)(puVar15 + 0x19) = fVar3;
  *(f32 *)((int)puVar15 + 0xcc) = fVar2;
  bVar1 = moby->state;
  pSVar12 = Splines[iVar21];
  uVar27 = ZEXT48(pSVar12);
  bVar29 = (bVar1 == 2) << 1;
  if (bVar1 == 0) {
    if (iVar21 == -1) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar4 = pSVar12->points[0].y - pSVar12->points[1].y;
    fVar9 = pSVar12->points[0].x - pSVar12->points[1].x;
    fVar5 = pSVar12->points[0].z - pSVar12->points[1].z;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    fVar7 = DAT_00841930 * mobyutil::g_FrameTime;
    auVar36 = loadVectorLeftIndexed(in_LR,uVar27);
    auVar37 = loadVectorLeftIndexed(4,uVar28);
    auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
    auVar38 = loadVectorRightIndexed(0x14,uVar28);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar37 | auVar38,auVar36,auVar35);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,4,uVar28);
    *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
    piVar11[2] = (int)(fVar7 / SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar4 * fVar4));
    dVar31 = (double)mobyutil::MB_randRangeSigned(0,0x4014000000000000);
    piVar11[3] = (int)(float)dVar31;
    iVar23 = 0xff;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (1 < bVar1) {
    if (bVar1 < 3) {
      uVar34 = 0x402e000000000000;
      piVar11[6] = (int)-(DAT_0071f418 * 15.0 - (float)piVar11[6]);
      dVar31 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 7.330383);
      (moby->rotation).x = (float)((double)(moby->rotation).x + dVar31);
      fVar4 = (moby->pos).x;
      fVar7 = SQRT((float)piVar11[4] * (float)piVar11[4] + (float)piVar11[5] * (float)piVar11[5]);
      fVar9 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      uVar13 = piVar11[6];
      fVar8 = ABS((float)piVar11[6]);
      fVar16 = ABS(fVar7);
      *(float *)(puVar15 + 0x1c) = fVar7;
      *(float *)((int)puVar15 + 0xe4) = fVar16 - fVar8;
      dVar31 = 0.0;
      uVar27 = (ulonglong)(*(uint *)(puVar15 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar15 + 0x1c));
      if (*(float *)((int)puVar15 + 0xe4) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar6 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (*(float *)((int)puVar15 + 0xe4) - 0.0 < 0.0) {
        fVar8 = fVar16;
      }
      dVar32 = dVar31;
      if (0.0 < fVar7) {
        lVar25 = uVar17 - 0x130;
        lVar24 = uVar17 - 0x58;
        lVar22 = uVar17 - 0x48;
        lVar30 = 2;
        fVar7 = (fVar8 - fVar7) / (fVar8 + fVar7);
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0xf4) = fVar7;
        *(float *)((int)puVar15 + 0xec) = fVar7;
        *(float *)(puVar15 + 0x1e) = fVar7;
        *(float *)(puVar15 + 0x1d) = fVar7;
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar8;
        *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar7;
        *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar7 * fVar8;
        do {
          *(float *)((int)lVar25 + 0xe8) = *(float *)((int)lVar25 + 0xd8) * fVar7 * fVar7;
          iVar21 = (int)lVar24;
          lVar25 = lVar25 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar21 + 4) * fVar7 * fVar7;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar25 = uVar17 - 0x58;
        pfVar26 = (float *)&DAT_007358e0;
        lVar30 = 4;
        lVar22 = lVar25;
        lVar24 = lVar19;
        do {
          fVar7 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar24 + 0xe8) = *(float *)((int)lVar24 + 0xe8) * fVar7;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar22 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar23 = (int)lVar25;
          lVar19 = lVar19 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar21 + 0xe8)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar10 + fVar6);
      }
      (moby->rotation).y = (float)-dVar32;
      (moby->pos).x = fVar4 + (float)piVar11[4];
      (moby->pos).y = fVar9 + (float)piVar11[5];
      fVar5 = fVar5 + (float)piVar11[6];
      (moby->pos).z = fVar5;
      uVar33 = 0x4024000000000000;
      if (fVar5 < 10.0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar21 = collproc::CollSphere(0x3ff4000000000000,lVar18 + 0x10,&DAT_0037a88c,0,lVar18);
      if (iVar21 != 0) {
        puVar15[0x12] = 0xffffffffffffffff;
        puVar15[0x14] = 1;
        puVar15[0x15] = 1;
        puVar15[0x16] = 0xffffffffffffffff;
        puVar15[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (dVar31,dVar31,uVar33,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
                   uVar34,lVar18,uVar28 + 0x10,lVar18 + 0x10,0,&DAT_0037a88c,0x14,0x28,0x10);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0037adb4;
  }
  mobyutil::MB_PathEvalSpline
            ((double)(float)piVar11[1],uVar27,iVar23,1,lVar18 + 0x10,lVar18 + 0x40,0);
  fVar4 = (moby->pos).z;
  auVar35 = loadVectorLeftIndexed(in_LR,uVar27);
  auVar37 = vectorConvertFromSignedFixedPointWord(auVar35,0);
  (moby->rotation).y = (moby->rotation).y * 0.5;
  auVar35 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
  (moby->pos).z = fVar4 + (float)piVar11[3];
  auVar36 = loadVectorLeftIndexed(4,uVar28);
  auVar38 = loadVectorRightIndexed(0x14,uVar28);
  auVar40 = loadVectorLeftIndexed(8,uVar28);
  auVar39 = loadVectorRightIndexed(0x18,uVar28);
  auVar38 = vectorAddFloatingPoint(auVar36 | auVar38,auVar40 | auVar39);
  auVar36 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
  uVar14 = storeVectorElementWordIndexed(auVar36,4,uVar28);
  *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
  if (!(bool)(bVar29 >> 1 & 1)) {
    auVar35 = vectorSubtractFloatingPoint(auVar38,auVar37);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,4,uVar28);
    *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
  }
LAB_0037adb4:
  fVar2 = (moby->pos).x;
  uVar13 = (int)fVar2 >> 0x1f;
  if ((((int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000) ||
      (fVar2 = (moby->pos).y, uVar13 = (int)fVar2 >> 0x1f,
      (int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000)) ||
     (fVar2 = (moby->pos).z, uVar13 = (int)fVar2 >> 0x1f,
     (int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000)) {
    puVar20 = (u16 *)0x0;
  }
  else {
    puVar20 = moby->pClass->collision;
  }
  moby->collision = puVar20;
  iVar21 = mobyutil::MB_damage(lVar18,0x10000,0);
  if ((iVar21 != 0) && (moby->state != '\x02')) {
    if (g_heroState == TURRET_PLANE_UI) {
      mobyutil::MB_UnlockSkillPoint(0xc);
    }
    fVar4 = (moby->pos).y;
    fVar9 = (moby->pos).z;
    fVar5 = (moby->pos).x - *(float *)(puVar15 + 0x18);
    *(f32 *)((int)puVar15 + 0xdc) = (moby->pos).w;
    *(float *)((int)puVar15 + 0xd4) = fVar4 - *(float *)((int)puVar15 + 0xc4);
    *(float *)(puVar15 + 0x1b) = fVar9 - *(float *)(puVar15 + 0x19);
    *(float *)(puVar15 + 0x1a) = fVar5;
    piVar11[4] = (int)fVar5;
    piVar11[5] = *(int *)((int)puVar15 + 0xd4);
    fVar4 = *(float *)(puVar15 + 0x1b);
    piVar11[6] = (int)fVar4;
    piVar11[7] = *(int *)((int)puVar15 + 0xdc);
    fVar9 = mobyutil::g_FrameTime;
    puVar15[0x12] = 0xffffffffffffffff;
    puVar15[0x14] = 1;
    puVar15[0x15] = 1;
    puVar15[0x16] = 0xffffffffffffffff;
    puVar15[0x17] = 0;
    piVar11[6] = (int)(fVar9 * 2.0 + fVar4);
    mobyutil::MB_genericExplosion
              (0,0,0x4024000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar18,uVar17 - 0x70,lVar18 + 0x10,&DAT_0037a88c,1,0x14,0x28,0x10)
    ;
    moby->state = '\x02';
  }
  moby->damage = -1;
  if (moby->enabled != '\0') {
    mobyupdate_helpers::M438_0037a520(lVar18,uVar17 - 0x80);
  }
  return;
}



//==== 0037af90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M439_0037af90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M439_0037af90(void)

{
  DAT_008419bc = 0x10000;
  return;
}



//==== 0037afa8  ns=Global  size=0xbc
// sig: undefined FUN_0037afa8(void)
// callers(1): 00433450 mobyupdate_unsorted::UpdateMoby_717
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_0037afa8(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  
  pMVar3 = mobyfunc::CreateMoby(HOVERBOARD_01B7);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar3->state = '\x02';
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar3->pos).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x40);
    (pMVar3->pos).w = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x4c);
    (pMVar3->rotation).z = fVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).w = fVar2;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0037b090  ns=mobyupdate_unsorted  size=0x4d8
// sig: undefined UpdateMoby_439(MobyInstance * moby)
// callers(0): 
// callees(7): 0007b310 help::Help_QueueMessage; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00121740 partupd::SpawnPart_4; 001268f8 partupd::SpawnPart_21
// strings: 00a0feec: 'None'

/* Moby 439 */

void mobyupdate_unsorted::UpdateMoby_439(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f28;
  double dVar13;
  ulonglong in_f29;
  double dVar14;
  ulonglong in_f30;
  double dVar15;
  ulonglong in_f31;
  double dVar16;
  undefined1 auVar17 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar11 - 0x100);
  *puVar6 = uVar11;
  puVar6[0x22] = in_LR;
  puVar6[0x1c] = in_f28;
  puVar6[0x1d] = in_f29;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1b] = unaff_r31;
  bVar1 = moby->state;
  puVar6[0x1a] = unaff_r30;
  pfVar4 = (float *)moby->pVar;
  puVar6[0x19] = unaff_r29;
  puVar6[0x18] = unaff_r28;
  puVar6[0x17] = unaff_r27;
  puVar6[0x16] = unaff_r26;
  iVar10 = DAT_00969e7c;
  if (bVar1 == 0) {
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar7 = g_heroPosition.x - (moby->pos).x;
    fVar8 = g_heroPosition.z - (moby->pos).z;
    if (((SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3) < 5.5) && (3 < (int)worldUpdateTime))
       && (hero::g_heroStateType != 0x16 && hero::g_heroStateType != 0x15)) {
      hero::g_heroBoardMoby = moby;
      hero::TransitionMovement(0x6b,1);
      if (pfVar4[0x14] == 0.0) {
        pfVar4[4] = (moby->pos).x;
        pfVar4[5] = (moby->pos).y;
        pfVar4[6] = (moby->pos).z;
        pfVar4[7] = (moby->pos).w;
      }
      moby->state = '\x01';
      moby->updateDistance = -1;
    }
  }
  else if (bVar1 < 2) {
    if (((((pfVar4[0x14] == 0.0) && (MiscLevelFlags.Zoomerator != false)) &&
         (CHAR_ARRAY_00a0feec._240_2_ == 0)) &&
        ((DAT_00a1a864 != 0 &&
         (puVar6[0x14] = (longlong)(int)(animationSpeed * 1200.5),
         *(int *)((int)puVar6 + 0xa4) < iVar10)))) && (CHAR_ARRAY_00a1000c._760_2_ == 0)) {
      help::Help_QueueMessage(STR_TO_PERFORM_TRICKS_HOLD_0x138F,0x5f);
    }
    if (hero::g_heroStateType != 0x16) {
      moby->updateDistance = '\x10';
      if (pfVar4[0x14] == 0.0) {
        (moby->pos).x = pfVar4[4];
        (moby->pos).y = pfVar4[5];
        (moby->pos).z = pfVar4[6];
        (moby->pos).w = pfVar4[7];
      }
      moby->state = '\0';
    }
  }
  fVar3 = (moby->pos).x;
  dVar14 = (double)((moby->pos).y - pfVar4[1]);
  dVar13 = (double)(fVar3 - *pfVar4);
  dVar16 = (double)(moby->pos).w;
  dVar15 = (double)((moby->pos).z - pfVar4[2]);
  *pfVar4 = fVar3;
  pfVar4[1] = (moby->pos).y;
  pfVar4[2] = (moby->pos).z;
  pfVar4[3] = (moby->pos).w;
  if ((moby->setByGroup != '\x02') &&
     (SQRT((float)(dVar15 * dVar15 +
                  (double)(float)(dVar13 * dVar13 + (double)(float)(dVar14 * dVar14)))) < 2.0)) {
    mobyfunc::GetBonePosition(moby,worldUpdateTime & 1,uVar11 - 0x90);
    mobyutil::MB_randRot();
    cVar2 = moby->setByGroup;
    *(float *)(puVar6 + 0x10) = (float)dVar13;
    auVar17 = loadVectorLeftIndexed(0x1a0c,0x840000);
    *(float *)((int)puVar6 + 0x84) = (float)dVar14;
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    *(float *)(puVar6 + 0x11) = (float)dVar15;
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x8c,
                       uVar11 - 0x100);
    *(undefined4 *)((int)puVar6 + 0x8c) = uVar5;
    uVar9 = DAT_008419f4;
    uVar5 = DAT_008419f0;
    fVar3 = animationSpeed;
    if (cVar2 == '\0') {
      puVar6[0x14] = (longlong)(int)(animationSpeed * 10.5);
      puVar6[0x14] = (longlong)(int)(fVar3 * 13.5);
      uVar12 = mobyutil::MB_randRange
                         (*(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      partupd::SpawnPart_4(uVar11 - 0x90,uVar11 - 0x80,uVar5,uVar9,uVar12,0xf,0xf,1);
    }
    else {
      *(float *)((int)puVar6 + 0x9c) = (float)dVar16;
      fVar3 = animationSpeed;
      *(float *)(puVar6 + 0x12) = (float)(dVar13 * 0.9200000166893005);
      *(float *)((int)puVar6 + 0x94) = (float)(dVar14 * 0.9200000166893005);
      *(float *)(puVar6 + 0x13) = (float)(dVar15 * 0.9200000166893005);
      uVar5 = DAT_008419f4;
      puVar6[0x14] = (longlong)(int)(fVar3 * 15.5);
      puVar6[0x14] = (longlong)(int)(fVar3 * 18.5);
      uVar12 = mobyutil::MB_randRange
                         (*(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      partupd::SpawnPart_4(uVar11 - 0x90,uVar11 - 0x70,0x5032f0d2,uVar5,uVar12,0x1e,0x14,1);
      uVar9 = DAT_008419f4;
      uVar5 = DAT_008419f0;
      dVar13 = (double)animationSpeed;
      uVar12 = 0x40cd4c0000000000;
      puVar6[0x14] = (longlong)(int)(dVar13 * 8.5);
      puVar6[0x14] = (longlong)(int)(dVar13 * 17.5);
      mobyutil::MB_randRange
                ((longlong)(int)(dVar13 * 17.5),dVar13,0x40cd4c0000000000,
                 *(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      partupd::SpawnPart_21(uVar12,uVar11 - 0x90,uVar11 - 0x80,uVar5,uVar9);
    }
  }
  moby->setByGroup = '\0';
  return;
}



//==== 0037b568  ns=mobyupdate_helpers  size=0x14
// sig: undefined M439_0037b568(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M439_0037b568(void)

{
  DAT_00841a60 = 0x10000;
  return;
}



//==== 0037b5b0  ns=mobyupdate_helpers  size=0x618
// sig: undefined M44_0037b5b0(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(2): 001167c8 mobyutil::MB_UpdateManipulatorRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M44_0037b5b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong unaff_r29;
  char cVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  double dVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x110;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x24] = in_LR;
  puVar7[0x1c] = in_f26;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1a] = unaff_r30;
  puVar7[0x1b] = unaff_r31;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar7[0x19] = unaff_r29;
  cVar16 = *(char *)(param_1 + 0x20);
  if ((*(short *)(iVar5 + 0x194) == 0) || (iVar6 = *(int *)(iVar5 + 400), iVar6 == 0)) {
    if ((*(short *)(iVar5 + 0x19c) == 0) || (iVar6 = *(int *)(iVar5 + 0x198), iVar6 == 0)) {
      if (*(char *)(iVar5 + 0x19f) == '\0') {
        dVar26 = 0.0;
        dVar19 = dVar26;
        goto LAB_0037baac;
      }
      fVar1 = *(float *)(iVar5 + 0x100);
      fVar2 = *(float *)(iVar5 + 0x104);
      dVar26 = (double)*(float *)(iVar5 + 0x108);
    }
    else {
      fVar1 = *(float *)(iVar6 + 0x10);
      fVar2 = *(float *)(iVar6 + 0x14);
      dVar26 = (double)*(float *)(iVar6 + 0x18);
    }
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x10);
    fVar2 = *(float *)(iVar6 + 0x14);
    dVar26 = (double)*(float *)(iVar6 + 0x18);
  }
  fVar1 = fVar1 - *(float *)(param_1 + 0x10);
  dVar24 = (double)fVar1;
  fVar2 = fVar2 - *(float *)(param_1 + 0x14);
  dVar23 = (double)fVar2;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar2;
  dVar25 = (double)(*(float *)(param_1 + 0x18) + 1.0);
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar24) - ABS(dVar23));
  dVar21 = 0.0;
  dVar22 = 0.7853981852531433;
  uVar14 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar19 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar23);
  }
  dVar20 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar20 = ABS(dVar24);
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar18 = dVar21;
  if (0.0 < dVar19) {
    lVar10 = uVar9 - 0x100;
    lVar12 = uVar9 - 0x68;
    lVar15 = uVar9 - 0x58;
    lVar17 = 2;
    fVar3 = (float)(dVar20 - dVar19) / (float)(dVar20 + dVar19);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0xb4) = fVar3;
    *(float *)((int)puVar7 + 0xac) = fVar3;
    *(float *)(puVar7 + 0x16) = fVar3;
    *(float *)(puVar7 + 0x15) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar4;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar3;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar3 * fVar3;
      iVar6 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar9 - 0x68;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar3 = *pfVar13;
      fVar4 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar3;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    dVar19 = dVar21;
    do {
      iVar6 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar18 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar2);
  }
  dVar19 = (double)fastfunc::FastDiffRots(dVar18,(double)*(float *)(param_1 + 0x48));
  dVar20 = ABS((double)(float)(dVar26 - dVar25));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar26 - dVar25);
  cVar16 = *(char *)(param_1 + 0x20);
  fVar1 = SQRT((float)(dVar24 * dVar24 + (double)(float)(dVar23 * dVar23)));
  dVar23 = ABS((double)fVar1);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)(puVar7 + 0xf) = (float)(dVar23 - dVar20);
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar26 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar26 = dVar20;
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar24 = dVar23;
  }
  if (dVar21 < dVar26) {
    lVar10 = uVar9 - 0x100;
    lVar15 = uVar9 - 0x78;
    lVar12 = uVar9 - 0x88;
    lVar17 = 2;
    fVar3 = (float)(dVar24 - dVar26) / (float)(dVar24 + dVar26);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar3;
    *(float *)((int)puVar7 + 0x8c) = fVar3;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar4;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar3;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar3 * fVar3;
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar9 - 0x88;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar3 = *pfVar13;
      fVar4 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * fVar3;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar11;
      iVar8 = (int)lVar15;
      lVar11 = lVar11 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar6 + 0x88)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar21 = (double)((float)(dVar21 + dVar22) * fVar1 + fVar2);
  }
  dVar21 = -dVar21;
  if ((cVar16 == '\x10') || (cVar16 == '\x11')) {
    dVar26 = 1.5707963705062866;
    if ((dVar19 <= 1.5707963705062866) && (dVar26 = dVar19, dVar19 < -1.5707963705062866)) {
      dVar26 = -1.5707963705062866;
    }
  }
  else {
    dVar26 = 1.0471975803375244;
    if ((dVar19 <= 1.0471975803375244) && (dVar26 = dVar19, dVar19 < -1.0471975803375244)) {
      dVar26 = -1.0471975803375244;
    }
  }
  dVar19 = 0.5235987901687622;
  if ((dVar21 <= 0.5235987901687622) && (dVar19 = dVar21, dVar21 < -0.5235987901687622)) {
    dVar19 = -0.5235987901687622;
  }
LAB_0037baac:
  if ((cVar16 == '\x10') || (cVar16 == '\x11')) {
    *(float *)(iVar5 + 0x288) = (float)dVar26;
    if (dVar26 <= 1.0471975803375244) {
      dVar21 = dVar26;
      if (dVar26 < -1.0471975803375244) {
        *(undefined4 *)(iVar5 + 0x288) = 0xbf860a92;
        dVar21 = -1.0471975803375244;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x288) = 0x3f860a92;
      dVar21 = 1.0471975803375244;
    }
    dVar21 = dVar26 - dVar21;
  }
  else {
    dVar21 = dVar26 * 0.699999988079071;
    *(float *)(iVar5 + 0x288) = (float)(dVar26 * 0.30000001192092896);
  }
  *(float *)(iVar5 + 0x208) = (float)dVar21;
  *(float *)(iVar5 + 0x204) = (float)dVar19;
  dVar19 = 0.019999999552965164;
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar5 + 0x1a0,1);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar19),
             (double)(float)((double)DAT_0071f40c * dVar26),param_1,iVar5 + 0x220,0);
  return;
}



//==== 0037bbe8  ns=mobyupdate_helpers  size=0x278
// sig: undefined M44_0037bbe8(void)
// callers(2): 0037be68 mobyupdate_helpers::M44_0037be68; 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 005025e0 fastfunc::FastDiffRots

undefined8
mobyupdate_helpers::M44_0037bbe8
          (double param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 1;
  dVar3 = (double)fastfunc::FastDiffRots((double)*(float *)(param_2 + 0x48),param_1);
  dVar3 = -dVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(float *)(param_3 + 0x174) = (float)param_1;
  *(undefined4 *)(param_3 + 0x170) = uVar1;
  *(undefined4 *)(param_3 + 0x144) = 0;
  *(undefined1 *)(param_3 + 0x15c) = param_5;
  *(char *)(param_3 + 0x15d) = (char)param_6;
  *(float *)(param_3 + 0x178) = (float)dVar3;
  if ((2.094395160675049 < dVar3) || (dVar3 < -2.094395160675049)) {
    *(undefined1 *)(param_2 + 0x20) = 8;
    if (0.0 < dVar3) {
      *(float *)(param_3 + 0x178) = (float)(dVar3 + -6.2831854820251465);
    }
    if (*(char *)(param_2 + 0x53) != '\f') {
      mobyutil::MB_SetAnimation(param_2,0xc,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (-0.7853981852531433 <= dVar3) {
    if (dVar3 <= 0.7853981852531433) {
      *(undefined1 *)(param_2 + 0x20) = param_5;
      if ((uint)*(byte *)(param_2 + 0x53) != (uint)param_6) {
        mobyutil::MB_SetAnimation(param_2,param_6,0,(int)(animationSpeed * 10.5));
      }
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x20) = 7;
      if (*(char *)(param_2 + 0x53) != '\v') {
        mobyutil::MB_SetAnimation(param_2,0xb,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 6;
    if (*(char *)(param_2 + 0x53) != '\n') {
      mobyutil::MB_SetAnimation(param_2,10,0,(int)(animationSpeed * 10.5));
    }
  }
  return uVar2;
}



//==== 0037be68  ns=mobyupdate_helpers  size=0x214
// sig: undefined M44_0037be68(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(1): 0037bbe8 mobyupdate_helpers::M44_0037bbe8

void mobyupdate_helpers::M44_0037be68
               (int param_1,undefined8 param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xa0;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar9;
  puVar5[0x16] = in_LR;
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar3 = ABS(fVar4);
  fVar1 = ABS(fVar2);
  *(float *)(puVar5 + 0xe) = fVar4;
  *(float *)((int)puVar5 + 0x74) = fVar2;
  *(float *)(puVar5 + 0xf) = fVar3 - fVar1;
  dVar17 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar8 = fVar3;
  }
  if (0.0 < fVar2) {
    lVar13 = uVar9 - 0x90;
    lVar11 = uVar9 - 0x14;
    lVar12 = uVar9 - 0x24;
    lVar16 = 2;
    fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar2;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x7c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
    *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar13 = uVar9 - 0x24;
    lVar16 = 4;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar13;
    lVar12 = lVar10;
    do {
      fVar2 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar13;
      lVar10 = lVar10 + 0x10;
      lVar13 = lVar13 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  M44_0037bbe8(dVar17,param_1,param_2,param_2,param_4,param_5);
  return;
}



//==== 0037c07c  ns=mobyupdate_helpers  size=0x13c
// sig: undefined M44_0037c07c(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(0): 

undefined8 mobyupdate_helpers::M44_0037c07c(int param_1)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x128);
  if (iVar2 == -1) {
    uVar8 = 0;
  }
  else if (*(int *)((int)MobyInstance[iVar2].pVar + 8) == 0) {
    if (*(byte *)(param_1 + 0x21) == 0xff) {
      uVar8 = 1;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x14) - MobyInstance[iVar2].pos.y;
      fVar4 = *(float *)(param_1 + 0x10) - MobyInstance[iVar2].pos.x;
      puVar9 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
      if (puVar9 == (ushort *)0x0) {
        uVar8 = 1;
      }
      else {
        do {
          uVar7 = *puVar9 & 0x7fff;
          if (MobyInstance[uVar7].state == '\x0e') {
            return 0;
          }
          if (((MobyInstance[uVar7].setByGroup == '\x01') &&
              (iVar2 = *(int *)((int)MobyInstance[uVar7].pVar + 0x128), iVar2 != -1)) &&
             (fVar5 = MobyInstance[uVar7].pos.y - MobyInstance[iVar2].pos.y,
             fVar6 = MobyInstance[uVar7].pos.x - MobyInstance[iVar2].pos.x,
             SQRT(fVar6 * fVar6 + fVar5 * fVar5) < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
            return 0;
          }
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar1);
        uVar8 = 1;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



//==== 0037c1c0  ns=mobyupdate_helpers  size=0x98
// sig: undefined M439_0037c1c0(void)
// callers(0): 
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M439_0037c1c0(int param_1,int param_2)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 in_LR;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x78);
    if ((*(short *)(uVar1 + 0x19c) == 0) || (iVar3 = mobyutil::MB_randInt(0x10), iVar3 == 0)) {
      auVar4 = ZEXT416(0xffffffff);
      auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
      *(int *)(uVar1 + 0x198) = param_1;
      auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
      auVar4 = loadVectorLeftIndexed(in_LR,0x37c1b8);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar4 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
      auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
      auVar4 = vectorSplatHalfWord(auVar4,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar4,0x19c,(ulonglong)uVar1);
      *(undefined2 *)(uVar1 + 0x19c) = uVar2;
    }
  }
  return;
}



//==== 0037c268  ns=mobyupdate_helpers  size=0x25c
// sig: undefined M44_0037c268(void)
// callers(2): 0037cfe0 mobyupdate_helpers::M44_0037cfe0; 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(2): 00057820 collproc::CollLine; 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M44_0037c268(MobyInstance *param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  MobyInstance *pMVar9;
  ushort *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar5 = uVar7 - 0x30;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  pvVar2 = param_1->pVar;
  if (g_heroState == ANIM_TARGET_WALK) {
    *(undefined2 *)((int)pvVar2 + 0x156) = 0;
  }
  else if (param_1->group == 0xff) {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(lVar5,0x37c258);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x156,ZEXT48(pvVar2));
    *(undefined2 *)((int)pvVar2 + 0x156) = uVar3;
  }
  else {
    puVar10 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
    if (puVar10 != (ushort *)0x0) {
      auVar11 = loadVectorLeftIndexed(8,0x37c258);
      auVar14 = loadVectorLeftIndexed(lVar5,0x37c258);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar11 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      do {
        uVar4 = *puVar10 & 0x7fff;
        if ((MobyInstance[uVar4].state < 0x80) && (MobyInstance[uVar4].oClass == SENTRY_BOT)) {
          iVar8 = collproc::CollLine(uVar7 - 0x50,uVar7 - 0x60,2,0,0);
          if (iVar8 == 0) {
            auVar14 = ZEXT416(0xffffffff);
            auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
            auVar13 = vectorShiftLeftIntegerWord(auVar14,auVar14);
            auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar12,auVar13);
            pMVar9 = MobyInstance + uVar4;
            pvVar2 = pMVar9->pVar;
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = vectorSplatHalfWord(auVar13,1);
            uVar3 = storeVectorElementHalfWordIndexed(auVar13,0x156,ZEXT48(pvVar2));
            *(undefined2 *)((int)pvVar2 + 0x156) = uVar3;
            *(undefined1 *)((int)pvVar2 + 0x15b) = 0;
            if (param_1 != pMVar9) {
              pvVar2 = pMVar9->pVar;
              if (*(short *)((int)pvVar2 + 0x19c) != 0) {
                iVar8 = mobyutil::MB_randInt(0x10);
                if (iVar8 != 0) goto LAB_0037c480;
                auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              }
              auVar13 = ZEXT416(0xffffffff);
              auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
              auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
              *(MobyInstance **)((int)pvVar2 + 0x198) = param_1;
              auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
              auVar14 = vectorMultiplyAddFloatingPoint
                                  (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                                   auVar11,auVar13);
              auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
              auVar14 = vectorSplatHalfWord(auVar14,1);
              uVar3 = storeVectorElementHalfWordIndexed(auVar14,0x19c,ZEXT48(pvVar2));
              *(undefined2 *)((int)pvVar2 + 0x19c) = uVar3;
            }
          }
        }
LAB_0037c480:
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 0037c500  ns=mobyupdate_helpers  size=0x5b0
// sig: undefined M44_0037c500(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(4): 001009b0 mobyutil::MB_MoveAndCollide; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 005026a0 fastfunc::FastSubRots

bool mobyupdate_helpers::M44_0037c500(double param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar14;
  puVar7[0x24] = in_LR;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1e] = unaff_r31;
  fVar1 = *param_4;
  puVar7[0x1d] = unaff_r30;
  fVar2 = param_4[1];
  fVar3 = *(float *)(param_2 + 0x14);
  fVar1 = fVar1 - *(float *)(param_2 + 0x10);
  puVar7[0x1b] = unaff_r28;
  fVar2 = fVar2 - fVar3;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar7 + 0x8c) = fVar1;
  puVar7[0x1c] = unaff_r29;
  *(float *)(puVar7 + 0x12) = fVar2;
  iVar6 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar7 + 0x94) = fVar4 - fVar3;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x8c));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar1 = fVar3;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar5 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  dVar26 = 0.7853981852531433;
  dVar22 = dVar25;
  if (0.0 < fVar1) {
    lVar15 = uVar14 - 0x100;
    lVar18 = uVar14 - 0x48;
    lVar17 = uVar14 - 0x58;
    lVar21 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar1;
    *(float *)((int)puVar7 + 0xbc) = fVar1;
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)(puVar7 + 0x17) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar1;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar15 + 0xb8) = *(float *)((int)lVar15 + 0xa8) * fVar1 * fVar1;
      iVar8 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar14 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar18;
    do {
      fVar1 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar15 + 0xb8) = *(float *)((int)lVar15 + 0xb8) * fVar1;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar17 = 2;
    lVar15 = lVar16;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xb8)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar2);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar22,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             mobyutil::g_FrameTime * 6.981317,(float *)(param_2 + 0x48),0x37c4c4,
             (float *)(iVar6 + 0x138));
  fVar1 = *param_4 - *(float *)(param_2 + 0x10);
  fVar2 = param_4[1] - *(float *)(param_2 + 0x14);
  dVar23 = ABS((double)fVar1);
  dVar24 = ABS((double)fVar2);
  *(float *)(puVar7 + 0x10) = fVar1;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  fVar1 = *(float *)(param_2 + 0x48);
  *(float *)(puVar7 + 0x11) = (float)(dVar23 - dVar24);
  uVar20 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
  dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
  if ((double)*(float *)(puVar7 + 0x11) - dVar25 < 0.0) {
    dVar22 = dVar24;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x84));
  if ((double)*(float *)(puVar7 + 0x11) - dVar25 < 0.0) {
    dVar24 = dVar23;
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar23 = dVar25;
  if (dVar25 < dVar22) {
    lVar15 = uVar14 - 0x100;
    lVar18 = uVar14 - 0x68;
    lVar17 = uVar14 - 0x78;
    lVar21 = 2;
    fVar4 = (float)(dVar24 - dVar22) / (float)(dVar24 + dVar22);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar15 + 0x98) = *(float *)((int)lVar15 + 0x88) * fVar4 * fVar4;
      iVar8 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar18 = lVar18 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar21 = 4;
    lVar18 = uVar14 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar17 = lVar18;
    do {
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar15 + 0x98) = *(float *)((int)lVar15 + 0x98) * fVar4;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar15 = 2;
    dVar22 = dVar25;
    do {
      iVar8 = (int)lVar16;
      iVar9 = (int)lVar18;
      lVar16 = lVar16 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar23 = (double)((float)(dVar22 + dVar26) * fVar2 + fVar3);
  }
  dVar22 = (double)fastfunc::FastSubRots(fVar1,(float)dVar23);
  if (dVar26 <= dVar22) {
    mobyutil::Delt((float)dVar25,DAT_0071f418 * 9.0,(float *)(iVar6 + 0x134));
  }
  else {
    mobyutil::Delt((float)param_1,DAT_0071f418 * 9.0,(float *)(iVar6 + 0x134));
  }
  fVar4 = mobyutil::g_FrameTime;
  fVar1 = *(float *)(param_2 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar10 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar10 * fVar10;
  fVar3 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar10;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar3 * fVar5;
  *(float *)(puVar7 + 0xe) =
       (fVar3 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x134);
  fVar1 = *(float *)(iVar6 + 0x134);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1;
  *(float *)(puVar7 + 0xf) = fVar4 * -0.5;
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar25,param_2,uVar14 - 0xa0);
  fVar1 = *(float *)(param_2 + 0x14) - param_4[1];
  fVar2 = *(float *)(param_2 + 0x10) - *param_4;
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 0.2;
}



//==== 0037cac8  ns=mobyupdate_helpers  size=0x418
// sig: undefined M44_0037cac8(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(2): 00057820 collproc::CollLine; 005026a0 fastfunc::FastSubRots

MobyInstance * mobyupdate_helpers::M44_0037cac8(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  int iVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ushort *puVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  MobyInstance *pMVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x110;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar15;
  puVar11[0x24] = in_LR;
  puVar11[0x1f] = in_f29;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x19] = unaff_r26;
  puVar11[0x1c] = unaff_r29;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar11[0x1e] = unaff_r31;
  puVar11[0x1b] = unaff_r28;
  iVar17 = *(int *)(iVar10 + 0x17c);
  puVar11[0x1d] = unaff_r30;
  puVar11[0x1a] = unaff_r27;
  puVar11[0x18] = unaff_r25;
  if (iVar17 == -1) {
    pMVar23 = (MobyInstance *)0x0;
  }
  else {
    puVar22 = (ushort *)(&mobyutil::g_MobyGroups)[iVar17];
    if (puVar22 == (ushort *)0x0) {
      pMVar23 = (MobyInstance *)0x0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      pMVar23 = (MobyInstance *)0x0;
      *(undefined4 *)(puVar11 + 0xe) = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar11 + 0x74) = uVar2;
      *(undefined4 *)((int)puVar11 + 0x7c) = uVar3;
      dVar28 = 1.0;
      *(float *)(puVar11 + 0xf) = *(float *)(param_1 + 0x18) + 1.0;
      dVar29 = 0.0;
      dVar30 = dVar29;
      do {
        uVar13 = *puVar22 & 0x7fff;
        if ((MobyInstance[uVar13].oClass == 0x27b) &&
           (MobyInstance[uVar13].state < 0x10 && 5 < MobyInstance[uVar13].state)) {
          fVar4 = MobyInstance[uVar13].pos.x - *(float *)(param_1 + 0x10);
          fVar8 = MobyInstance[uVar13].pos.y - *(float *)(param_1 + 0x14);
          dVar26 = ABS((double)fVar4);
          dVar27 = ABS((double)fVar8);
          *(float *)(puVar11 + 0x12) = fVar4;
          *(float *)((int)puVar11 + 0x94) = fVar8;
          fVar4 = *(float *)(param_1 + 0x48);
          *(float *)(puVar11 + 0x13) = (float)(dVar26 - dVar27);
          uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x12));
          if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
            dVar25 = dVar27;
          }
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar27 = ABS((double)*(float *)((int)puVar11 + 0x94));
          if ((double)*(float *)(puVar11 + 0x13) - dVar29 < 0.0) {
            dVar27 = dVar26;
          }
          fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar26 = dVar29;
          if (dVar29 < dVar25) {
            lVar16 = uVar15 - 0x100;
            lVar21 = uVar15 - 100;
            lVar18 = uVar15 - 0x74;
            lVar24 = 2;
            fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
            fVar7 = fVar6 * fVar6;
            *(float *)(puVar11 + 0x15) = fVar6;
            *(float *)(puVar11 + 0x14) = fVar6;
            *(float *)((int)puVar11 + 0xa4) = fVar6;
            *(float *)((int)puVar11 + 0x9c) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar7;
            *(float *)((int)puVar11 + 0xa4) = *(float *)((int)puVar11 + 0xa4) * fVar6;
            *(float *)(puVar11 + 0x15) = *(float *)(puVar11 + 0x15) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x8c) * fVar6 * fVar6;
              iVar17 = (int)lVar18;
              lVar18 = lVar18 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar15 - 0x74;
            pfVar19 = (float *)&DAT_007358e0;
            lVar16 = lVar1;
            lVar18 = lVar21;
            do {
              fVar6 = *pfVar19;
              fVar7 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x9c) * fVar6;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
              lVar18 = lVar18 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar18 = 2;
            lVar16 = lVar1;
            dVar25 = dVar29;
            do {
              iVar17 = (int)lVar16;
              iVar12 = (int)lVar21;
              lVar16 = lVar16 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0x9c)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            dVar26 = (double)((float)(dVar25 + 0.7853981852531433) * fVar8 + fVar5);
          }
          dVar25 = (double)fastfunc::FastSubRots(fVar4,(float)dVar26);
          pMVar14 = MobyInstance;
          if ((MobyInstance[uVar13].state == '\a') || (MobyInstance[uVar13].state == '\x0f')) {
            *(undefined2 *)(iVar10 + 0x194) = 1;
          }
          else if ((*(short *)(iVar10 + 0x194) == 0) && (1.2217304706573486 <= dVar25))
          goto LAB_0037ce70;
          *(f32 *)(puVar11 + 0x10) = pMVar14[uVar13].pos.x;
          *(f32 *)((int)puVar11 + 0x84) = pMVar14[uVar13].pos.y;
          *(f32 *)(puVar11 + 0x11) = pMVar14[uVar13].pos.z;
          *(f32 *)((int)puVar11 + 0x8c) = pMVar14[uVar13].pos.w;
          *(float *)(puVar11 + 0xf) = (float)((double)*(float *)(puVar11 + 0xf) + dVar28);
          iVar17 = collproc::CollLine(uVar15 - 0xa0,uVar15 - 0x90,2,0,0);
          if (iVar17 == 0) {
            fVar4 = *(float *)((int)puVar11 + 0x74) - *(float *)((int)puVar11 + 0x84);
            dVar25 = (double)SQRT((*(float *)(puVar11 + 0xf) - *(float *)(puVar11 + 0x11)) *
                                  (*(float *)(puVar11 + 0xf) - *(float *)(puVar11 + 0x11)) +
                                  (*(float *)(puVar11 + 0xe) - *(float *)(puVar11 + 0x10)) *
                                  (*(float *)(puVar11 + 0xe) - *(float *)(puVar11 + 0x10)) +
                                  fVar4 * fVar4);
            if ((pMVar23 == (MobyInstance *)0x0) || (dVar25 < dVar30)) {
              pMVar23 = MobyInstance + uVar13;
              dVar30 = dVar25;
            }
          }
        }
LAB_0037ce70:
        uVar9 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar9);
      if ((*(short *)(iVar10 + 0x194) == 0) && (8.0 < dVar30)) {
        pMVar23 = (MobyInstance *)0x0;
      }
    }
  }
  return pMVar23;
}



//==== 0037cee0  ns=mobyupdate_helpers  size=0xd4
// sig: undefined M44_0037cee0(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(0): 

undefined8 mobyupdate_helpers::M44_0037cee0(int param_1)

{
  ushort uVar1;
  void *pvVar2;
  ushort *puVar3;
  MobyInstance *pMVar4;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      do {
        pMVar4 = MobyInstance + (*puVar3 & 0x7fff);
        if ((((pMVar4->oClass == SENTRY_BOT && pMVar4 != (MobyInstance *)0x0) &&
             (pMVar4->state != 0xfd && pMVar4->state != 0xfe)) && (pMVar4->setByGroup == '\0')) &&
           (((pvVar2 = pMVar4->pVar, *(int *)((int)pvVar2 + 0x144) == 0 &&
             (*(int *)((int)pvVar2 + 0x124) != -1)) &&
            (*(int *)(*(int *)(param_1 + 0x78) + 0x13c) <= *(int *)((int)pvVar2 + 0x13c))))) {
          return 0;
        }
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return 1;
}



//==== 0037cfe0  ns=mobyupdate_helpers  size=0xc10
// sig: undefined M44_0037cfe0(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(13): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 0037c268 mobyupdate_helpers::M44_0037c268; 00500108 fastfunc::FastDecTimerF32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M44_0037cfe0(MobyInstance *param_1,int param_2)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  MobyInstance *pMVar19;
  longlong lVar14;
  longlong lVar15;
  char cVar20;
  float *pfVar22;
  longlong lVar21;
  byte bVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar10 = (ulonglong *)lVar15;
  *puVar10 = uVar13;
  puVar10[0x2e] = in_LR;
  puVar10[0x2b] = in_f31;
  puVar10[0x29] = unaff_r30;
  puVar10[0x2a] = unaff_r31;
  uVar1 = param_1->state;
  puVar10[0x28] = unaff_r29;
  pvVar8 = param_1->pVar;
  uVar26 = ZEXT48(pvVar8);
  puVar10[0x27] = unaff_r28;
  puVar10[0x26] = unaff_r27;
  if (uVar1 != '\0') {
    param_1->scale = param_1->pClass->gScale * DAT_00841a84;
    dVar31 = 0.0;
    *(undefined4 *)((int)puVar10 + 0x84) = 0;
    iVar16 = mobyutil::MB_damage(param_1,0x330000,0);
    iVar17 = mobyutil::MB_HandleDamage
                       (param_1,iVar16,uVar26 + 0x20,0,puVar10 + 0x10,(int)puVar10 + 0x84,0,4);
    if ((*(int *)(puVar10 + 0x10) != 1) && (param_1->state != '\x17')) {
      if (g_heroType == '\0') {
        M44_0037c268(param_1);
      }
      fVar7 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar10 + 0x84);
      *(float *)((int)pvVar8 + 0x20) = fVar7;
      iVar17 = iVar17 + ((uint)((LZCOUNT(0x47 - (uint)*(ushort *)(*(int *)(iVar16 + 0x20) + 0xa6))
                                << 0x3a) >> 0x3f) & 3U - iVar17);
      if ((double)fVar7 <= dVar31) {
        iVar17 = 1;
      }
      uVar18 = fastfunc::FastDoubleToInt(0x4080000000000000);
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      fVar2 = DAT_00841a88;
      fVar7 = DAT_0071f418;
      *(undefined4 *)((int)pvVar8 + 0x90) = uVar18;
      *(undefined1 *)((int)pvVar8 + 0xad) = 0;
      *(undefined4 *)((int)pvVar8 + 0x94) = 9;
      *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar7;
      if (iVar17 < 3) {
        if ((-1 < iVar17) && (0 < iVar17)) {
          fVar7 = DAT_00841a8c * DAT_0071f418;
          param_1->modeBits =
               param_1->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(float *)((int)pvVar8 + 0x80) = fVar7;
          fVar7 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar8 + 0x88) = DAT_00841a9c * mobyutil::g_FrameTime;
          *(float *)((int)pvVar8 + 0x8c) = DAT_00841a98 * fVar7;
          fVar2 = DAT_00841aa0;
          *(undefined4 *)((int)pvVar8 + 0xc0) = 0x41000000;
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41800000;
          *(float *)((int)pvVar8 + 0x84) = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
          dVar29 = ABS((double)fVar7);
          dVar30 = ABS((double)fVar2);
          *(float *)((int)puVar10 + 0x9c) = fVar7;
          *(float *)(puVar10 + 0x14) = fVar2;
          *(float *)((int)puVar10 + 0xa4) = (float)(dVar29 - dVar30);
          uVar24 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)((int)puVar10 + 0x9c));
          if ((double)*(float *)((int)puVar10 + 0xa4) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar30 = ABS((double)*(float *)(puVar10 + 0x14));
          if ((double)*(float *)((int)puVar10 + 0xa4) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (dVar31 < dVar28) {
            lVar14 = uVar13 - 0x150;
            lVar21 = uVar13 - 0x8c;
            lVar25 = uVar13 - 0x7c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x1c) = fVar3;
            *(float *)(puVar10 + 0x1b) = fVar3;
            *(float *)((int)puVar10 + 0xdc) = fVar3;
            *(float *)((int)puVar10 + 0xd4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar5;
            *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar3;
            *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xc4) * fVar3 * fVar3;
              iVar17 = (int)lVar21;
              lVar14 = lVar14 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar13 - 0x8c;
            pfVar22 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar21 = lVar25;
            do {
              fVar3 = *pfVar22;
              fVar5 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar14 + 0xd4) = *(float *)((int)lVar14 + 0xd4) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar14 = lVar15;
            dVar28 = dVar31;
            do {
              iVar17 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar11 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xd4)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          *(float *)((int)puVar10 + 0x8c) = (float)dVar29;
          uVar18 = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)(puVar10 + 7) = uVar18;
          uVar18 = *(undefined4 *)(iVar16 + 0x1c);
          *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)puVar10 + 0x3c) = uVar18;
          mobyutil::MB_VecAtan2Angles
                    (puVar10[6],puVar10[7],uVar13 - 0xd4,uVar26 + 0x88,uVar26 + 0x8c);
          mobyutil::MB_StartKick((double)*(float *)((int)puVar10 + 0x8c),param_1,uVar26 + 0x70);
          param_1->state = '\x17';
          param_1->setByGroup = '\x02';
          *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
        }
      }
      else if (iVar17 < 0xb) {
        if (iVar17 < 9) {
          *(float *)((int)pvVar8 + 0x80) = fVar2 * fVar7;
          fVar7 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar8 + 0x88) = DAT_00841a94 * mobyutil::g_FrameTime;
          *(float *)((int)pvVar8 + 0x8c) = DAT_00841a90 * fVar7;
          fVar2 = DAT_010c51ac;
          *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
          *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
          *(float *)((int)pvVar8 + 0x84) = fVar2 * fVar7;
          fVar7 = (param_1->pos).x - *(float *)(*(int *)(iVar16 + 0x20) + 0x10);
          fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar16 + 0x20) + 0x14);
          dVar29 = ABS((double)fVar7);
          dVar30 = ABS((double)fVar2);
          *(float *)(puVar10 + 0x15) = fVar7;
          *(float *)((int)puVar10 + 0xac) = fVar2;
          *(float *)(puVar10 + 0x16) = (float)(dVar29 - dVar30);
          uVar24 = (ulonglong)(*(uint *)(puVar10 + 0x15) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar10 + 0x16) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar10 + 0xac) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)(puVar10 + 0x15));
          if ((double)*(float *)(puVar10 + 0x16) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar10 + 0xac));
          if ((double)*(float *)(puVar10 + 0x16) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar29 = dVar31;
          if (dVar31 < dVar28) {
            lVar14 = uVar13 - 0x150;
            lVar21 = uVar13 - 0x6c;
            lVar25 = uVar13 - 0x5c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar10 + 0x20) = fVar3;
            *(float *)(puVar10 + 0x1f) = fVar3;
            *(float *)((int)puVar10 + 0xfc) = fVar3;
            *(float *)((int)puVar10 + 0xf4) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar10 + 0x1f) = *(float *)(puVar10 + 0x1f) * fVar5;
            *(float *)((int)puVar10 + 0xfc) = *(float *)((int)puVar10 + 0xfc) * fVar3;
            *(float *)(puVar10 + 0x20) = *(float *)(puVar10 + 0x20) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xe4) * fVar3 * fVar3;
              iVar17 = (int)lVar21;
              lVar14 = lVar14 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar13 - 0x6c;
            pfVar22 = (float *)&DAT_007358e0;
            lVar14 = lVar15;
            lVar21 = lVar25;
            do {
              fVar3 = *pfVar22;
              fVar5 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar14 + 0xf4) = *(float *)((int)lVar14 + 0xf4) * fVar3;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
              lVar21 = lVar21 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 2;
            lVar14 = lVar15;
            dVar28 = dVar31;
            do {
              iVar17 = (int)lVar14;
              lVar14 = lVar14 + 0x10;
              iVar11 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar17 + 0xf4)) +
                                *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                               *(float *)(iVar11 + 0xc));
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
          }
          *(float *)(puVar10 + 0x11) = (float)dVar29;
          uVar18 = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)(puVar10 + 7) = uVar18;
          uVar18 = *(undefined4 *)(iVar16 + 0x1c);
          *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)puVar10 + 0x3c) = uVar18;
          mobyutil::MB_VecAtan2Angles
                    (puVar10[6],puVar10[7],uVar13 - 0xd8,uVar26 + 0x88,uVar26 + 0x8c);
          mobyutil::MB_StartKick((double)*(float *)(puVar10 + 0x11),param_1,uVar26 + 0x70);
          param_1->state = '\x15';
          param_1->setByGroup = '\x02';
          *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
        }
        else {
          *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        }
      }
      mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x60);
    if (param_2 == 0) {
      if (*(int *)((int)pvVar8 + 0x38) != 0) {
        dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
        iVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        puVar10[0x23] = (longlong)iVar16;
        uVar24 = puVar10[0x23];
        *(undefined4 *)((int)pvVar8 + 0x38) = 0;
        *(float *)((int)pvVar8 + 0x130) = (float)(longlong)uVar24;
      }
      fastfunc::FastDecTimerF32(uVar26 + 0x130);
      fVar7 = (param_1->pos).y;
      fVar2 = (param_1->pos).x;
      fVar3 = (param_1->pos).z;
      fVar6 = fVar7 - DAT_00969db4;
      fVar5 = fVar2 - hero::g_heroCGPos;
      fVar12 = fVar3 - DAT_00969db8;
      if (64.0 <= SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar6 * fVar6)) {
        *(undefined1 *)((int)pvVar8 + 0x15a) = 0;
      }
      else {
        fVar4 = (param_1->pos).w;
        *(float *)(puVar10 + 0xe) = fVar2;
        *(float *)((int)puVar10 + 0x74) = fVar7;
        *(f32 *)((int)puVar10 + 0x7c) = fVar4;
        iVar16 = *(int *)((int)pvVar8 + 300);
        pMVar19 = (MobyInstance *)0x0;
        *(float *)(puVar10 + 0xf) = fVar3 + 1.0;
        if (iVar16 != -1) {
          pMVar19 = MobyInstance + iVar16;
        }
        uVar18 = collproc::CollLine(uVar13 - 0xf0,&hero::g_heroCGPos,2,pMVar19,0);
        *(char *)((int)pvVar8 + 0x15a) = (char)((ulonglong)(LZCOUNT(uVar18) << 0x20) >> 0x25);
      }
      pSVar9 = Splines[*(int *)((int)pvVar8 + 0x120)];
      iVar16 = mobyutil::MB_getTargetInArea
                         (0x4060000000000000,param_1,uVar26 + 0xd0,pSVar9,0,0,pSVar9->points,
                          pSVar9->cnt);
      if (iVar16 == 2) {
        *(undefined1 *)((int)pvVar8 + 0x19f) = 0;
        *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
        *(undefined2 *)((int)pvVar8 + 0x158) = 0;
      }
      else {
        fVar7 = *(float *)((int)pvVar8 + 0xd0) - (param_1->pos).x;
        fVar2 = *(float *)((int)pvVar8 + 0xd4) - (param_1->pos).y;
        dVar29 = ABS((double)fVar7);
        dVar30 = ABS((double)fVar2);
        *(float *)(puVar10 + 0x12) = fVar7;
        *(float *)((int)puVar10 + 0x94) = fVar2;
        fVar7 = (param_1->rotation).z;
        *(float *)(puVar10 + 0x13) = (float)(dVar29 - dVar30);
        uVar26 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar10 + 0x12));
        if ((double)*(float *)(puVar10 + 0x13) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        dVar30 = ABS((double)*(float *)((int)puVar10 + 0x94));
        if ((double)*(float *)(puVar10 + 0x13) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (dVar31 < dVar28) {
          lVar14 = uVar13 - 0x150;
          lVar25 = uVar13 - 0x9c;
          lVar21 = uVar13 - 0xac;
          lVar27 = 2;
          fVar5 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
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
            *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xa4) * fVar5 * fVar5;
            iVar16 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar13 - 0xac;
          pfVar22 = (float *)&DAT_007358e0;
          lVar14 = lVar15;
          lVar21 = lVar25;
          do {
            fVar5 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar14 + 0xb4) = *(float *)((int)lVar14 + 0xb4) * fVar5;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar14 = 2;
          do {
            iVar16 = (int)lVar15;
            iVar17 = (int)lVar25;
            lVar15 = lVar15 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0xb4)) +
                              *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                             *(float *)(iVar17 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar31 = (double)fastfunc::FastSubRots(fVar7,(float)dVar31);
        if ((((dVar31 < 1.5707963705062866) &&
             ((g_onMagnerail == 0 || (ABS((param_1->pos).z - *(float *)((int)pvVar8 + 0xd8)) < 4.0))
             )) || (param_1->state == '\x10')) || (cVar20 = '\0', param_1->state == '\x11')) {
          cVar20 = *(char *)((int)pvVar8 + 0x15a);
        }
        iVar16 = *(int *)((int)pvVar8 + 0x114);
        if (iVar16 != 1) {
          if (g_heroType == '\x03') {
            bVar23 = *(byte *)((int)pvVar8 + 0x15e);
            if (1 < bVar23) {
              *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
            }
          }
          else {
            bVar23 = 0;
            *(undefined1 *)((int)pvVar8 + 0x15e) = 0;
          }
        }
        else {
          bVar23 = *(char *)((int)pvVar8 + 0x15b) + 1;
          *(byte *)((int)pvVar8 + 0x15e) = bVar23;
        }
        *(undefined1 *)((int)pvVar8 + 0x19f) = 1;
        if (cVar20 == '\0') {
          if (*(char *)((int)pvVar8 + 0x15a) == '\0') {
            *(undefined1 *)((int)pvVar8 + 0x15b) = 1;
          }
          *(undefined1 *)((int)pvVar8 + 0x19f) = 0;
          *(undefined2 *)((int)pvVar8 + 0x158) = 0;
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
        }
        else if ((((*(short *)((int)pvVar8 + 0x156) == 0) ||
                  (*(char *)((int)pvVar8 + 0x15b) != '\0')) && (g_heroType == '\x03')) ||
                ((bVar23 != 0 && (iVar16 != 1)))) {
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
          *(undefined2 *)((int)pvVar8 + 0x158) = 1;
        }
        else if ((g_heroType != '\x03') && (iVar16 != 2)) {
          *(undefined1 *)((int)pvVar8 + 0x15b) = 0;
        }
        if (g_gameMode == GAME_MODE_SCENE) {
          *(undefined4 *)((int)pvVar8 + 0x114) = 2;
        }
      }
      if (*(int *)((int)pvVar8 + 0x110) == 0) {
        *(MobyInstance **)((int)pvVar8 + 0x110) = g_heroMobyPtr;
      }
    }
  }
  return;
}



//==== 0037dc48  ns=mobyupdate_unsorted  size=0x286c
// sig: undefined UpdateMoby_44(MobyInstance * moby)
// callers(0): 
// callees(48): 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000efff8 mobyfunc::MB_GetAnimSeqTriggerLength; 000f1114 mobyfunc::GetBonePosition; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000f1364 mobyfunc::GetMobyJointsWorldMtx; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010b030 mobyutil::MB_UpdateKick; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 00119ac0 mobyutil::MB_SetScaleCheat; 0015d12c sound::PlayMobySound; 00364690 mobyupdate_helpers::M408_00364690; 003655c0 FUN_003655c0; 0037b5b0 mobyupdate_helpers::M44_0037b5b0; 0037bbe8 mobyupdate_helpers::M44_0037bbe8; 0037be68 mobyupdate_helpers::M44_0037be68; 0037c07c mobyupdate_helpers::M44_0037c07c; 0037c268 mobyupdate_helpers::M44_0037c268; 0037c500 mobyupdate_helpers::M44_0037c500; 0037cac8 mobyupdate_helpers::M44_0037cac8; 0037cee0 mobyupdate_helpers::M44_0037cee0; 0037cfe0 mobyupdate_helpers::M44_0037cfe0; 00459ff0 mobyupdate_helpers::M78_00459ff0; 004c0208 FUN_004c0208; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98

/* Moby 44 */

void mobyupdate_unsorted::UpdateMoby_44(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  longlong lVar4;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar13;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  MobyInstance *pMVar18;
  short sVar19;
  void *pvVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStack_160 [16];
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [48];
  undefined1 local_70 [4];
  undefined1 local_6c [20];
  
  lVar4 = (longlong)(int)moby;
  if (DAT_010c51b0 != 0) {
    return;
  }
  pvVar20 = moby->pVar;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  uVar16 = 0;
  iVar12 = 0;
  if (*(int *)((int)pvVar20 + 0x2d0) == -1) {
    if (*(int *)((int)pvVar20 + 0x2d8) != -1) {
      uVar15 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,0xffffffffffffffff);
      uVar16 = (ulonglong)(int)uVar15;
      if (*(int *)((int)pvVar20 + 0x2dc) != -1) {
        uVar10 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2dc));
        uVar16 = (ulonglong)(int)(uVar15 | uVar10);
      }
    }
  }
  else {
    iVar8 = mobyutil::MB_IsPntInCuboid
                      ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2d0));
    uVar16 = (ulonglong)(LZCOUNT(iVar8) << 0x20) >> 0x25;
    if (*(int *)((int)pvVar20 + 0x2d4) != -1) {
      iVar9 = mobyutil::MB_IsPntInCuboid
                        ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar20 + 0x2d4));
      uVar16 = (ulonglong)((LZCOUNT(iVar8) & LZCOUNT(iVar9)) << 0x20) >> 0x25;
    }
  }
  mobyupdate_helpers::M44_0037cfe0(lVar4,uVar16);
  if (((int)uVar16 != 0) && (moby->state != '\x17' && moby->state != '\x15')) {
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
  moby->collision = moby->pClass->collision;
  uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 0x110);
  mobyutil::MB_SetScaleCheat(0x4004000000000000,(int)pvVar20 + 0x1a0);
  if ((moby->enabled != '\0') &&
     (dVar21 = (double)FUN_005e8548(lVar4 + 0x10,0x951500), dVar21 < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar4);
    moby->shadow = '\x16';
  }
  if (g_heroState == ANIM_TARGET_WALK) {
    *(undefined2 *)((int)pvVar20 + 0x156) = 0;
  }
  fastfunc::FastDecTimerS16((int)pvVar20 + 0x154);
  fastfunc::FastDecTimerS16((int)pvVar20 + 0x156);
  fastfunc::FastDecTimerS16((int)pvVar20 + 0x19c);
  if (((*(short *)((int)pvVar20 + 0x156) != 0) && (*(int *)((int)pvVar20 + 0x128) != -1)) &&
     (*(int *)((int)MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) {
    mobyupdate_helpers::M408_00364690(MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
  }
  if (moby->setByGroup == '\0') {
    *(undefined1 *)((int)pvVar20 + 0x15f) = 0;
  }
  bVar2 = moby->state;
  if (bVar2 < 0xd) {
    if (4 < bVar2) {
      if (bVar2 < 10) {
        if (bVar2 < 6) {
          if ((moby->field43_0x70 & 2U) != 0) {
            uVar13 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)((int)pvVar20 + 0x154) = uVar13;
            if (*(int *)((int)pvVar20 + 0x150) != -1) {
              mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 0x150));
              *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
            }
            if (*(int *)((int)pvVar20 + 300) != -1) {
              mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 300));
              *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
            }
            bVar2 = *(byte *)((int)pvVar20 + 0x15c);
            moby->state = bVar2;
            if (bVar2 < 3) {
              if ((1 < bVar2) && (moby->animationId != '\0')) {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
              }
            }
            else if ((bVar2 == 4) && (moby->animationId != '\r')) {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0xd,0,uVar5);
            }
          }
        }
        else if (bVar2 < 9) {
          if (*(int *)((int)pvVar20 + 0x114) != 2) {
            dVar23 = (double)(moby->rotation).z;
            dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                          (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y))
            ;
            dVar21 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar21);
            if (dVar21 < 0.5235987901687622) {
              moby->setByGroup = '\x01';
              if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
                *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
                moby->state = '\v';
                *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
                if (moby->animationId != '\x01') {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
                }
              }
              else {
                moby->state = '\x10';
                if (moby->animationId != '\x03') {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
                }
              }
              goto LAB_00380248;
            }
          }
          bVar2 = moby->updateId;
          puVar17 = (undefined *)0x0;
          if (bVar2 < 0xb) {
            if (9 < bVar2) {
              puVar17 = &DAT_00841b28;
            }
          }
          else if (bVar2 < 0xc) {
            puVar17 = (undefined *)0x841aa8;
          }
          else if (bVar2 < 0xd) {
            puVar17 = (undefined *)0x841ba8;
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            if (bVar2 == moby->animationId && puVar17 != (undefined *)0x0) {
              dVar21 = (double)mobyfunc::BlendAnimFrame(moby);
              lVar6 = fastfunc::FastDoubleToInt();
              dVar23 = (double)fastfunc::FastIntToDouble();
              iVar8 = (int)(lVar6 << 2);
              dVar21 = (double)fastfunc::FastWrapRot
                                         (*(float *)((int)pvVar20 + 0x170),
                                          ((*(float *)(puVar17 + iVar8 + 4) -
                                           *(float *)(puVar17 + iVar8)) * (float)(dVar21 - dVar23) +
                                          *(float *)(puVar17 + iVar8)) * 0.017453292);
              (moby->rotation).z = (float)dVar21;
            }
          }
          else {
            fVar24 = mobyfunc::MB_GetAnimSeqTriggerLength((uint)moby->mClass,(uint)bVar2);
            lVar6 = fastfunc::FastDoubleToInt((double)fVar24);
            if (puVar17 != (undefined *)0x0) {
              dVar21 = (double)fastfunc::FastWrapRot
                                         (*(float *)((int)pvVar20 + 0x170),
                                          *(float *)(puVar17 + (int)(lVar6 << 2)) * 0.017453292);
              (moby->rotation).z = (float)dVar21;
            }
            moby->state = *(u8 *)((int)pvVar20 + 0x15c);
            uVar3 = *(u8 *)((int)pvVar20 + 0x15d);
            if (moby->animationId != uVar3) {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,uVar3,0,uVar5);
            }
          }
        }
        else {
          dVar21 = (double)FUN_005e8548(lVar4 + 0x10,(int)pvVar20 + 0x160);
          if (dVar21 <= 0.20000000298023224) {
            if (*(int *)((int)pvVar20 + 0x124) == -1) {
              mobyupdate_helpers::M44_0037bbe8
                        ((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20);
            }
            else {
              moby->setByGroup = '\0';
              *(undefined4 *)((int)pvVar20 + 0x144) = 0;
              mobyupdate_helpers::M44_0037be68
                        (lVar4,pvVar20,
                         Splines[*(int *)((int)pvVar20 + 0x124)]->points +
                         *(int *)((int)pvVar20 + 0x13c),2,0);
            }
          }
          else {
            mobyupdate_helpers::M44_0037c500
                      ((double)(mobyutil::g_FrameTime * 2.0),lVar4,&DAT_0037dbf0,
                       (int)pvVar20 + 0x160);
          }
        }
      }
      else if (bVar2 < 0xb) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->state = '\x02';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
            }
            uVar13 = idol::GetAnimDuration(0x168);
            *(undefined2 *)((int)pvVar20 + 0x196) = uVar13;
            *(undefined2 *)((int)pvVar20 + 0x194) = 0;
          }
        }
        else {
          moby->setByGroup = '\x01';
          if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
            *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
            moby->state = '\v';
            *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
            *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
            if (moby->animationId != '\x01') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
            }
          }
          else {
            moby->state = '\x10';
            if (moby->animationId != '\x03') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
            }
          }
        }
      }
      else if (bVar2 < 0xc) {
        if (*(int *)((int)pvVar20 + 0x128) != -1) {
          FUN_003655c0(MobyInstance + *(int *)((int)pvVar20 + 0x128));
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          if (g_heroState == ANIM_TARGET_WALK) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            mobyupdate_helpers::M44_0037c268(lVar4);
            if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
                (*(int *)((int)MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
               (iVar8 = mobyupdate_helpers::M44_0037c07c(lVar4), iVar8 == 0)) {
              uVar3 = *(u8 *)((int)pvVar20 + 0x15c);
              if (uVar3 == '\x10') {
                mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
              }
              else {
                if (uVar3 != 0xff) {
                  moby->state = uVar3;
                }
                uVar3 = *(u8 *)((int)pvVar20 + 0x15d);
                if ((uVar3 != 0xff) && (moby->animationId != uVar3)) {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,uVar3,0,uVar5);
                }
              }
            }
            else {
              moby->state = '\x0e';
              if (moby->animationId != '\x0e') {
                uVar5 = idol::GetAnimDuration(0x14);
                mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
              }
            }
          }
        }
      }
      else if (g_heroState == ANIM_TARGET_WALK) {
        moby->state = '\t';
        if (moby->animationId != '\r') {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,0xd,0,uVar5);
        }
        if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
           (*(int *)((int)MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) {
          mobyupdate_helpers::M408_00364690
                    (MobyInstance + *(int *)((int)pvVar20 + 0x128),0xffffffffffffffff);
        }
      }
      else {
        bVar1 = *(int *)((int)pvVar20 + 0x114) == 2;
        if ((bVar1) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
          if (*(short *)((int)pvVar20 + 0x156) == 0) {
            moby->state = '\t';
            if (moby->animationId != '\r') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0xd,0,uVar5);
            }
            if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
               (pMVar18 = MobyInstance + *(int *)((int)pvVar20 + 0x128),
               *(int *)((int)pMVar18->pVar + 8) != 0)) {
              uVar5 = idol::GetAnimDuration(0x1e);
              mobyupdate_helpers::M408_00364690(pMVar18,uVar5);
            }
          }
          else if (*(char *)((int)pvVar20 + 0x15a) == '\0') {
            if (*(int *)((int)pvVar20 + 0x124) != -1) {
              if (*(int *)((int)pvVar20 + 0x144) != 0) {
                iVar8 = *(int *)((int)pvVar20 + 0x13c) + 1;
                *(int *)((int)pvVar20 + 0x13c) =
                     iVar8 - (iVar8 / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                             Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
              }
              *(undefined4 *)((int)pvVar20 + 0x144) = 0;
              uVar11 = idol::GetAnimDuration(0x3c);
              *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
              moby->setByGroup = '\x01';
              if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
                *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
                moby->state = '\v';
                *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
                if (moby->animationId != '\x01') {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
                }
              }
              else {
                moby->state = '\r';
                if (moby->animationId != '\x0e') {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
                }
              }
            }
          }
          else if ((bVar1) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0xc,0);
          }
          else {
            mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
          }
        }
        else {
          mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
        }
      }
      goto LAB_00380248;
    }
    if (bVar2 == 0) {
      if ((*(int *)((int)pvVar20 + 0x120) == -1) ||
         (Splines[*(int *)((int)pvVar20 + 0x120)]->cnt == 0)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(undefined4 *)((int)pvVar20 + 0x20) = 0x40400000;
      *(undefined2 *)((int)pvVar20 + 0x24) = 3;
      *(undefined1 *)((int)pvVar20 + 0x28) = 2;
      *(undefined1 *)((int)pvVar20 + 0x29) = 0;
      FUN_005e7e98((int)pvVar20 + 0x160,lVar4 + 0x10);
      iVar8 = *(int *)((int)pvVar20 + 0x148);
      *(f32 *)((int)pvVar20 + 0x16c) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar20 + 0x144) = 1;
      iVar9 = 0;
      *(uint *)((int)pvVar20 + 0x148) = iVar8 + ((uint)((longlong)iVar8 + -5 >> 0x3f) & 5U - iVar8);
      moby->state = '\x02';
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      pvVar14 = pvVar20;
      do {
        if (*(int *)((int)pvVar14 + 0x180) != -1) {
          moby->state = '\x01';
          break;
        }
        iVar9 = iVar9 + 1;
        pvVar14 = (void *)((int)pvVar14 + 4);
      } while (iVar9 < 4);
      moby->setByGroup = '\0';
      goto LAB_00380248;
    }
    if (bVar2 < 2) {
      iVar8 = 0;
      pvVar14 = pvVar20;
      do {
        if (1 < MobyInstance[*(int *)((int)pvVar14 + 0x180)].state) {
          moby->state = '\x02';
          break;
        }
        iVar8 = iVar8 + 1;
        pvVar14 = (void *)((int)pvVar14 + 4);
      } while (iVar8 < 4);
      goto LAB_00380248;
    }
    if (3 < bVar2) {
      lVar6 = ZEXT48(Splines[*(int *)((int)pvVar20 + 0x124)]) +
              ((ulonglong)*(uint *)((int)pvVar20 + 0x13c) & 0xfffffff) * 0x10;
      iVar8 = mobyupdate_helpers::M44_0037c500
                        ((double)(mobyutil::g_FrameTime * 2.0),lVar4,lVar6,
                         lVar6 + 0x10U & 0xffffffff);
      if (iVar8 == 0) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          if ((*(short *)((int)pvVar20 + 0x156) == 0) || (*(char *)((int)pvVar20 + 0x15b) != '\0'))
          {
            if (*(short *)((int)pvVar20 + 0x19c) == 0) {
              if ((*(short *)((int)pvVar20 + 0x158) == 0) || (g_heroState != HOLOGUISE_WAVE)) {
                iVar8 = fastfunc::FastDecTimerS16((int)pvVar20 + 0x196);
                if (iVar8 != 0) {
                  uVar16 = mobyupdate_helpers::M44_0037cac8(lVar4);
                  *(int *)((int)pvVar20 + 400) = (int)uVar16;
                  if ((int)uVar16 != 0) {
                    if (*(short *)((int)pvVar20 + 0x194) == 0) {
                      idol::GetAnimDuration(0x96);
                      iVar8 = mobyutil::MB_randInt();
                      if (iVar8 != 0) goto LAB_00380248;
                      uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 400);
                    }
                    mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,10,0xf);
                  }
                }
              }
              else if (((*(int *)((int)pvVar20 + 0x150) != -1) ||
                       (*(int *)((int)pvVar20 + 300) != -1)) ||
                      (*(short *)((int)pvVar20 + 0x154) == 0)) {
                *(u8 *)((int)pvVar20 + 0x15c) = moby->state;
                *(undefined1 *)((int)pvVar20 + 0x15d) = 0xd;
                moby->state = '\x05';
                if (moby->animationId != '\x02') {
                  uVar5 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar4,2,0,uVar5);
                }
              }
            }
            else {
              mobyupdate_helpers::M44_0037be68
                        (lVar4,pvVar20,(ulonglong)*(uint *)((int)pvVar20 + 0x198) + 0x10,10,0xf);
            }
          }
          else if (*(char *)((int)pvVar20 + 0x15a) == '\0') {
            uVar11 = idol::GetAnimDuration(0x3c);
            *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
            moby->setByGroup = '\x01';
            if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
              *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
              moby->state = '\v';
              *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
              *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
              if (moby->animationId != '\x01') {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
              }
            }
            else {
              moby->state = '\r';
              if (moby->animationId != '\x0e') {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
              }
            }
          }
          else {
            mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
          }
        }
        else {
          moby->setByGroup = '\x01';
          if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
            *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
            moby->state = '\v';
            *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
            *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
            if (moby->animationId != '\x01') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
            }
          }
          else {
            moby->state = '\x10';
            if (moby->animationId != '\x03') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
            }
          }
        }
      }
      else {
        moby->state = '\x02';
        *(undefined4 *)((int)pvVar20 + 0x144) = 1;
        if (moby->animationId != '\0') {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
        }
      }
      goto LAB_00380248;
    }
    if (*(int *)((int)pvVar20 + 0x114) != 2) {
      moby->setByGroup = '\x01';
      if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
        *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
        moby->state = '\v';
        *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
        *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
        if (moby->animationId != '\x01') {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
        }
      }
      else {
        moby->state = '\x10';
        if (moby->animationId != '\x03') {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
        }
      }
      goto LAB_00380248;
    }
    if ((*(short *)((int)pvVar20 + 0x156) != 0) && (*(char *)((int)pvVar20 + 0x15b) == '\0')) {
      if ((*(char *)((int)pvVar20 + 0x15a) == '\0') && (*(int *)((int)pvVar20 + 0x124) != -1)) {
        if (*(int *)((int)pvVar20 + 0x144) != 0) {
          iVar8 = *(int *)((int)pvVar20 + 0x13c) + 1;
          *(int *)((int)pvVar20 + 0x13c) =
               iVar8 - (iVar8 / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                       Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
        }
        *(undefined4 *)((int)pvVar20 + 0x144) = 0;
        moby->setByGroup = '\x01';
        if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
          *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
          moby->state = '\v';
          *(undefined1 *)((int)pvVar20 + 0x15c) = 0xd;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 0xe;
          if (moby->animationId != '\x01') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
          }
        }
        else {
          moby->state = '\r';
          if (moby->animationId != '\x0e') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
          }
        }
      }
      else {
        mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x10,3);
      }
      goto LAB_00380248;
    }
    if (*(short *)((int)pvVar20 + 0x19c) != 0) {
      mobyupdate_helpers::M44_0037be68
                (lVar4,pvVar20,(ulonglong)*(uint *)((int)pvVar20 + 0x198) + 0x10,10,0xf);
      goto LAB_00380248;
    }
    iVar8 = fastfunc::FastDecTimerS16((int)pvVar20 + 0x196);
    if (iVar8 != 0) {
      uVar16 = mobyupdate_helpers::M44_0037cac8(lVar4);
      *(int *)((int)pvVar20 + 400) = (int)uVar16;
      if ((int)uVar16 != 0) {
        if (*(short *)((int)pvVar20 + 0x194) == 0) {
          idol::GetAnimDuration(0x96);
          iVar8 = mobyutil::MB_randInt();
          if (iVar8 != 0) goto LAB_0037e34c;
          uVar16 = (ulonglong)*(uint *)((int)pvVar20 + 400);
        }
        mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,10,0xf);
        goto LAB_00380248;
      }
    }
LAB_0037e34c:
    if (moby->state == '\x02') {
      bVar1 = *(int *)((int)pvVar20 + 0x124) == -1;
      if (bVar1) {
        if ((*(short *)((int)pvVar20 + 0x158) == 0) || (g_heroState != HOLOGUISE_WAVE)) {
          if (bVar1) {
            mobyupdate_helpers::M44_0037bbe8((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20)
            ;
          }
        }
        else if (((*(int *)((int)pvVar20 + 0x150) != -1) || (*(int *)((int)pvVar20 + 300) != -1)) ||
                ((*(short *)((int)pvVar20 + 0x154) == 0 &&
                 (iVar8 = mobyutil::MB_randInt(0x78), iVar8 == 0)))) {
          *(undefined1 *)((int)pvVar20 + 0x15c) = 2;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\x02') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,2,0,uVar5);
          }
        }
      }
      else if ((*(int *)((int)pvVar20 + 0x144) == 0) ||
              (iVar8 = mobyupdate_helpers::M44_0037cee0(lVar4), iVar8 != 0)) {
        uVar11 = idol::GetAnimDuration(*(undefined4 *)((int)pvVar20 + 0x148));
        *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
        moby->state = '\x03';
      }
    }
    else if ((moby->state == '\x03') &&
            (iVar8 = fastfunc::FastDecTimerS32((int)pvVar20 + 0x14c), iVar8 != 0)) {
      iVar8 = *(int *)((int)pvVar20 + 0x13c);
      if (*(int *)((int)pvVar20 + 0x144) != 0) {
        iVar8 = (iVar8 + 1) -
                ((iVar8 + 1) / Splines[*(int *)((int)pvVar20 + 0x124)]->cnt) *
                Splines[*(int *)((int)pvVar20 + 0x124)]->cnt;
        *(int *)((int)pvVar20 + 0x13c) = iVar8;
      }
      *(undefined4 *)((int)pvVar20 + 0x144) = 0;
      mobyupdate_helpers::M44_0037be68
                (lVar4,pvVar20,Splines[*(int *)((int)pvVar20 + 0x124)]->points + iVar8,4,0xd);
    }
    goto LAB_00380248;
  }
  if (bVar2 < 0x13) {
    if (bVar2 < 0x10) {
      if (bVar2 < 0xe) {
        lVar6 = ZEXT48(Splines[*(int *)((int)pvVar20 + 0x124)]) +
                ((ulonglong)*(uint *)((int)pvVar20 + 0x13c) & 0xfffffff) * 0x10;
        iVar8 = mobyupdate_helpers::M44_0037c500
                          ((double)(mobyutil::g_FrameTime * 3.5),lVar4,lVar6,
                           lVar6 + 0x10U & 0xffffffff);
        if (iVar8 == 0) {
          if ((*(int *)((int)pvVar20 + 0x114) == 2) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            if (*(short *)((int)pvVar20 + 0x156) == 0) {
              moby->state = '\t';
              if (moby->animationId != '\r') {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,0xd,0,uVar5);
              }
              if ((*(int *)((int)pvVar20 + 0x128) != -1) &&
                 (pMVar18 = MobyInstance + *(int *)((int)pvVar20 + 0x128),
                 *(int *)((int)pMVar18->pVar + 8) != 0)) {
                uVar5 = idol::GetAnimDuration(0x1e);
                mobyupdate_helpers::M408_00364690(pMVar18,uVar5);
              }
            }
            else {
              uVar11 = idol::GetAnimDuration(0x3c);
              *(undefined4 *)((int)pvVar20 + 0x14c) = uVar11;
            }
          }
          else {
            moby->setByGroup = '\x01';
            if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
              *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
              moby->state = '\v';
              *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
              *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
              if (moby->animationId != '\x01') {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
              }
            }
            else {
              moby->state = '\x10';
              if (moby->animationId != '\x03') {
                uVar5 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
              }
            }
          }
        }
        else {
          moby->state = '\f';
          *(undefined4 *)((int)pvVar20 + 0x144) = 1;
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
      }
      else if (bVar2 < 0xf) {
        FUN_003655c0(MobyInstance + *(int *)((int)pvVar20 + 0x128));
        FUN_005e81f0(auStack_160,&MobyInstance[*(int *)((int)pvVar20 + 0x128)].pos,lVar4 + 0x10);
        dVar21 = (double)FUN_005e8030(auStack_160);
        FUN_005e7f98((double)(float)(dVar21 - 1.5),auStack_160,auStack_160);
        FUN_005e7f54(auStack_160,auStack_160,lVar4 + 0x10);
        iVar8 = mobyupdate_helpers::M44_0037c500
                          ((double)(mobyutil::g_FrameTime * 4.0),lVar4,&DAT_00720000,auStack_160);
        if ((iVar8 != 0) && (moby->state = '\x0f', moby->animationId != '\t')) {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,9,0,uVar5);
        }
      }
      else {
        if ((moby->updateId == moby->animationId) &&
           (dVar21 = (double)mobyfunc::BlendAnimFrame(moby), 12.0 <= dVar21)) {
          mobyupdate_helpers::M408_00364690(MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          mobyupdate_helpers::M408_00364690(MobyInstance + *(int *)((int)pvVar20 + 0x128),0xb4);
          mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,uVar16 + 0x10,0x14,0xe);
        }
      }
      goto LAB_00380248;
    }
    if (bVar2 < 0x11) {
      *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
      *(undefined2 *)((int)pvVar20 + 0x194) = 0;
      mobyupdate_helpers::M44_0037c268(lVar4);
      if ((moby->field43_0x70 & 2U) != 0) {
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x11';
          *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
          if (moby->animationId != '\x04') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,4,0,uVar5);
          }
        }
      }
      goto LAB_00380248;
    }
    if (0x11 < bVar2) {
      *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
      *(undefined2 *)((int)pvVar20 + 0x194) = 0;
      mobyupdate_helpers::M44_0037c268(lVar4);
      if ((moby->field43_0x70 & 2U) != 0) {
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x13';
          *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
          if (moby->animationId != '\x06') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,6,0,uVar5);
          }
        }
      }
      goto LAB_00380248;
    }
    *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
    *(undefined2 *)((int)pvVar20 + 0x194) = 0;
    mobyupdate_helpers::M44_0037c268(lVar4);
    if (((*(char *)((int)pvVar20 + 0x19e) == '\0') &&
        (dVar21 = (double)mobyfunc::BlendAnimFrame(moby), 0.8500000238418579 <= dVar21)) &&
       (dVar21 < 3.0)) {
      mobyfunc::GetMobyJointsWorldMtx(lVar4,1,local_6c,auStack_b0);
      mobyfunc::GetMobyJointsWorldPos(lVar4,1,local_6c,auStack_100);
      FUN_005e7f98(-(double)(DAT_00841aa4 * mobyutil::g_FrameTime),&local_120,auStack_a0);
      iVar8 = (int)pvVar20 + 0x100;
      FUN_005e81f0(&local_110,iVar8,auStack_100);
      FUN_005e7f98((double)(DAT_00841aa4 * mobyutil::g_FrameTime),&local_110,&local_110);
      dVar21 = (double)FUN_005e8338((double)local_120,(double)local_11c);
      dVar23 = (double)FUN_005e8338((double)local_110,(double)local_10c);
      dVar21 = (double)fastfunc::FastSubRots((float)dVar21,(float)dVar23);
      dVar23 = 0.7853981852531433;
      if (0.7853981852531433 < dVar21) {
LAB_0037fa90:
        FUN_004c0208(lVar4,&local_120,auStack_100,iVar8);
      }
      else {
        uVar5 = FUN_005e7ebc(&local_120);
        dVar21 = (double)FUN_005e8338(uVar5,(double)local_118);
        uVar5 = FUN_005e7ebc(&local_110);
        dVar22 = (double)FUN_005e8338(uVar5,(double)local_108);
        dVar21 = (double)fastfunc::FastSubRots((float)dVar21,(float)dVar22);
        if (dVar23 < dVar21) goto LAB_0037fa90;
        FUN_004c0208(lVar4,&local_110,auStack_100,iVar8);
      }
      *(undefined1 *)((int)pvVar20 + 0x19e) = 1;
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (g_heroState == ANIM_TARGET_WALK) {
        moby->state = '\f';
        if (moby->animationId != '\0') {
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
        }
      }
      else if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
               (*(int *)((int)MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
              (iVar8 = mobyupdate_helpers::M44_0037c07c(lVar4), iVar8 == 0)) {
        dVar23 = (double)(moby->rotation).z;
        dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
        dVar21 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar21);
        if (dVar21 <= 0.7853981852531433) {
          if (*(int *)((int)pvVar20 + 0x114) == 2) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            moby->state = '\x12';
            if (moby->animationId != '\x05') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,5,0,uVar5);
            }
          }
        }
        else {
          mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x12,5);
        }
      }
      else {
        moby->state = '\x0e';
        if (moby->animationId != '\x0e') {
          uVar5 = idol::GetAnimDuration(0x14);
          mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
        }
      }
      *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
    }
    goto LAB_00380248;
  }
  if (0x15 < bVar2) {
    if ((bVar2 == 0x17) &&
       (uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar20 + 0x70)),
       (uVar15 & 0x160) != 0)) {
      if (*(int *)((int)pvVar20 + 300) != -1) {
        mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 300));
        *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
      }
      if (*(int *)((int)pvVar20 + 0x150) != -1) {
        mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 0x150));
        *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
      }
      sound::PlayMobySound(0xd,0,moby);
      mobyutil::MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0037dbf0,
                 0xffffffffffffffff);
      mobyutil::MB_SpawnBoltsFromCrate(lVar4,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00380248;
  }
  if (0x13 < bVar2) {
    if (bVar2 < 0x15) {
      dVar21 = (double)FUN_005e8548(lVar4 + 0x10,(int)pvVar20 + 0x160);
      if (dVar21 <= 0.20000000298023224) {
        if (*(short *)((int)pvVar20 + 0x156) == 0) {
          moby->setByGroup = '\0';
          *(undefined4 *)((int)pvVar20 + 0x144) = 0;
          if (*(int *)((int)pvVar20 + 0x124) == -1) {
            mobyupdate_helpers::M44_0037bbe8((double)*(float *)((int)pvVar20 + 0x16c),lVar4,pvVar20)
            ;
          }
          else {
            mobyupdate_helpers::M44_0037be68
                      (lVar4,pvVar20,
                       Splines[*(int *)((int)pvVar20 + 0x124)]->points +
                       *(int *)((int)pvVar20 + 0x13c),2,0);
          }
        }
        else {
          dVar23 = (double)(moby->rotation).z;
          dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                        (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
          dVar21 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar21);
          if ((dVar21 <= 0.7853981852531433) || (*(char *)((int)pvVar20 + 0x15b) != '\0')) {
            moby->state = '\f';
            if (moby->animationId != '\0') {
              uVar5 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
            }
          }
          else {
            mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
          }
        }
      }
      else {
        mobyupdate_helpers::M44_0037c500
                  ((double)(mobyutil::g_FrameTime * 3.0),lVar4,&DAT_0037dbf0,(int)pvVar20 + 0x160);
      }
    }
    else {
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar20 + 0x70));
      if ((uVar15 & 0x40) != 0) {
        uVar5 = 0x3fe0000000000000;
        mobyutil::GetGroundZ(0x3fe0000000000000,lVar4 + 0x10,0);
        iVar12 = collproc::CollHotspot();
        if ((iVar12 != -1) || ((moby->pos).z <= *(float *)((int)pvVar20 + 0x168) - 5.0)) {
          if (*(int *)((int)pvVar20 + 300) != -1) {
            mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 300));
            *(undefined4 *)((int)pvVar20 + 300) = 0xffffffff;
          }
          if (*(int *)((int)pvVar20 + 0x150) != -1) {
            mobyupdate_helpers::M78_00459ff0(MobyInstance + *(int *)((int)pvVar20 + 0x150));
            *(undefined4 *)((int)pvVar20 + 0x150) = 0xffffffff;
          }
          sound::PlayMobySound(0xd,0,moby);
          mobyutil::MB_SpawnExplosionSparks
                    (uVar5,0x402a000000000000,lVar4,lVar4 + 0x10,&DAT_0037dbf0,0xffffffffffffffff);
          mobyutil::MB_SpawnBoltsFromCrate(lVar4,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (g_heroState == ANIM_TARGET_WALK) {
          moby->state = '\f';
          if (moby->animationId == '\0') {
            return;
          }
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
          return;
        }
        moby->setByGroup = '\x01';
        if (*(char *)((int)pvVar20 + 0x15f) == '\0') {
          *(undefined1 *)((int)pvVar20 + 0x15f) = 1;
          moby->state = '\v';
          *(undefined1 *)((int)pvVar20 + 0x15c) = 0x10;
          *(undefined1 *)((int)pvVar20 + 0x15d) = 3;
          if (moby->animationId == '\x01') {
            return;
          }
          uVar5 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar4,1,0,uVar5);
          return;
        }
        moby->state = '\x10';
        if (moby->animationId == '\x03') {
          return;
        }
        uVar5 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_00380248;
  }
  *(undefined2 *)((int)pvVar20 + 0x19c) = 0;
  *(undefined2 *)((int)pvVar20 + 0x194) = 0;
  mobyupdate_helpers::M44_0037c268(lVar4);
  if (((*(char *)((int)pvVar20 + 0x19e) == '\0') &&
      (dVar21 = (double)mobyfunc::BlendAnimFrame(moby), 0.8500000238418579 <= dVar21)) &&
     (dVar21 < 3.0)) {
    mobyfunc::GetMobyJointsWorldMtx(lVar4,1,local_70,auStack_f0);
    mobyfunc::GetMobyJointsWorldPos(lVar4,1,local_70,auStack_130);
    FUN_005e7f98((double)(DAT_00841aa4 * mobyutil::g_FrameTime),&local_150,auStack_e0);
    iVar8 = (int)pvVar20 + 0x100;
    FUN_005e81f0(&local_140,iVar8,auStack_130);
    FUN_005e7f98((double)(DAT_00841aa4 * mobyutil::g_FrameTime),&local_140,&local_140);
    dVar21 = (double)FUN_005e8338((double)local_150,(double)local_14c);
    dVar23 = (double)FUN_005e8338((double)local_140,(double)local_13c);
    dVar21 = (double)fastfunc::FastSubRots((float)dVar21,(float)dVar23);
    dVar23 = 0.7853981852531433;
    if (0.7853981852531433 < dVar21) {
LAB_0037f704:
      FUN_004c0208(lVar4,&local_150,auStack_130,iVar8);
    }
    else {
      uVar5 = FUN_005e7ebc(&local_150);
      dVar21 = (double)FUN_005e8338(uVar5,(double)local_148);
      uVar5 = FUN_005e7ebc(&local_140);
      dVar22 = (double)FUN_005e8338(uVar5,(double)local_138);
      dVar21 = (double)fastfunc::FastSubRots((float)dVar21,(float)dVar22);
      if (dVar23 < dVar21) goto LAB_0037f704;
      FUN_004c0208(lVar4,&local_140,auStack_130,iVar8);
    }
    *(undefined1 *)((int)pvVar20 + 0x19e) = 1;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    if (g_heroState == ANIM_TARGET_WALK) {
      moby->state = '\f';
      if (moby->animationId != '\0') {
        uVar5 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
      }
    }
    else if (((*(int *)((int)pvVar20 + 0x128) == -1) ||
             (*(int *)((int)MobyInstance[*(int *)((int)pvVar20 + 0x128)].pVar + 8) != 0)) ||
            (iVar8 = mobyupdate_helpers::M44_0037c07c(lVar4), iVar8 == 0)) {
      dVar23 = (double)(moby->rotation).z;
      dVar21 = (double)FUN_005e8338((double)(*(float *)((int)pvVar20 + 0xd0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar20 + 0xd4) - (moby->pos).y));
      dVar21 = (double)fastfunc::FastSubRots((float)dVar23,(float)dVar21);
      if (dVar21 <= 0.7853981852531433) {
        if (*(int *)((int)pvVar20 + 0x114) == 2) {
          moby->state = '\f';
          if (moby->animationId != '\0') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,0,0,uVar5);
          }
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\x03') {
            uVar5 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar4,3,0,uVar5);
          }
        }
      }
      else {
        mobyupdate_helpers::M44_0037be68(lVar4,pvVar20,(int)pvVar20 + 0xd0,0x10,3);
      }
    }
    else {
      moby->state = '\x0e';
      if (moby->animationId != '\x0e') {
        uVar5 = idol::GetAnimDuration(0x14);
        mobyutil::MB_SetAnimation(lVar4,0xe,0,uVar5);
      }
    }
    *(undefined1 *)((int)pvVar20 + 0x19e) = 0;
  }
LAB_00380248:
  mobyupdate_helpers::M44_0037b5b0(lVar4);
  sVar19 = 0;
  if ((*(short *)((int)pvVar20 + 0x156) == 0) && (*(int *)((int)pvVar20 + 0x114) == 2)) {
    if (*(short *)((int)pvVar20 + 0x158) != 0) {
      sVar19 = 1;
    }
  }
  else {
    sVar19 = 2;
  }
  if ((DAT_010c51a8 != worldUpdateTime) || (DAT_0096bfc0 < sVar19)) {
    DAT_010c51a8 = worldUpdateTime;
    DAT_0096bfc0 = sVar19;
  }
  uVar5 = idol::GetAnimDuration(0xaa);
  if (sVar19 == 2) {
    uVar5 = idol::GetAnimDuration(0x32);
  }
  else if (sVar19 == 1) {
    uVar5 = idol::GetAnimDuration(0x5a);
  }
  dVar21 = (double)fastfunc::FastIntToDouble(uVar5);
  dVar21 = (double)FUN_005e8128((double)((float)((double)(longlong)
                                                         (worldUpdateTime -
                                                         (worldUpdateTime / (int)uVar5) * (int)uVar5
                                                         ) / dVar21) * 2.0 * 3.1415927 + -3.1415927)
                               );
  iVar8 = fastfunc::FastDoubleToInt((double)(float)(dVar21 * 20.0));
  lVar6 = fastfunc::FastDoubleToInt((double)(float)(dVar21 * 70.0));
  lVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar21 * 10.0));
  iVar8 = iVar8 + 0x32;
  lVar6 = lVar6 + 0xb4;
  uVar16 = lVar6 + (0xff - (longlong)(int)lVar6 >> 0x3f & 0xffU - lVar6);
  uVar10 = (uint)uVar16;
  uVar15 = iVar8 + ((uint)(0xff - (longlong)iVar8 >> 0x3f) & 0xffU - iVar8);
  if (sVar19 == 2) {
    uVar16 = (longlong)((int)uVar15 >> 1) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 1) != 0);
    uVar15 = uVar10;
  }
  uVar15 = fastfunc::FastLerpColor
                     (0x3fb99999a0000000,moby->field60_0x90,
                      (uint)((uVar16 & 0xffffffff) << 8) | uVar15 |
                      (uint)((lVar7 + 0x14U & 0xffffffff) << 0x10) | 0x80000000);
  moby->field60_0x90 = uVar15;
  do {
    mobyfunc::GetBonePosition(lVar4,iVar12 + 4,(int)pvVar20 + 0x2a0);
    iVar12 = iVar12 + 1;
    pvVar20 = (void *)((int)pvVar20 + 0x10);
  } while (iVar12 < 3);
  RegisterFuncForMoby(&PTR_M440_003805d0_0070cbb8,moby);
  return;
}



