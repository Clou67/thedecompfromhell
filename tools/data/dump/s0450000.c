//==== 00450c14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M761_00450c14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M761_00450c14(void)

{
  DAT_00872124 = 0x10000;
  return;
}



//==== 00450c28  ns=mobyupdate_helpers  size=0x38
// sig: undefined M761_00450c28(void)
// callers(0): 
// callees(2): 0017d488 stub::CALL_STUB_0017d488; 0017d4b8 water::WaterSheet_DrawAll

void mobyupdate_helpers::M761_00450c28(void)

{
  stub::CALL_STUB_0017d488();
  water::WaterSheet_DrawAll(4,(WaterSheet *)&PTR_DAT_008732e0);
  return;
}



//==== 00450c90  ns=mobyupdate_unsorted  size=0x224
// sig: undefined UpdateMoby_761(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 00502730 fastfunc::FastIntToDouble

/* Moby 761 */

void mobyupdate_unsorted::UpdateMoby_761(MobyInstance *moby)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  double dVar14;
  
  if (DAT_010ccec4 == 0) {
    DAT_010ccec4 = 1;
    ppuVar6 = &PTR_DAT_008732e0;
    iVar13 = 0;
    piVar8 = &DAT_008732ec;
    ppuVar7 = ppuVar6;
    piVar9 = piVar8;
    do {
      puVar12 = *ppuVar7;
      iVar11 = 0;
      if (0 < *piVar9) {
        do {
          fVar1 = *(float *)(puVar12 + 8);
          iVar11 = iVar11 + 1;
          puVar2 = ppuVar7[3];
          *(float *)(puVar12 + 8) = fVar1 - 0.45;
          *(float *)(puVar12 + 0xc) = fVar1 - 0.45;
          puVar12 = puVar12 + 0x10;
        } while (iVar11 < (int)puVar2);
      }
      iVar13 = iVar13 + 1;
      piVar9 = piVar9 + 0x18;
      ppuVar7 = ppuVar7 + 0x18;
    } while (iVar13 < 4);
    bVar10 = true;
    iVar13 = 0;
    do {
      puVar12 = *ppuVar6;
      iVar11 = 0;
      bVar10 = (bool)(bVar10 ^ 1);
      if (0 < *piVar8) {
        do {
          if (bVar10) {
            fVar1 = *(float *)(puVar12 + 8) + 0.05;
            fVar3 = *(float *)(puVar12 + 0xc) - 0.05;
            fVar4 = *(float *)(puVar12 + 0x18) - 0.05;
            fVar5 = *(float *)(puVar12 + 0x1c) + 0.05;
          }
          else {
            fVar1 = *(float *)(puVar12 + 8) - 0.05;
            fVar3 = *(float *)(puVar12 + 0xc) + 0.05;
            fVar4 = *(float *)(puVar12 + 0x18) + 0.05;
            fVar5 = *(float *)(puVar12 + 0x1c) - 0.05;
          }
          *(float *)(puVar12 + 8) = fVar1;
          *(float *)(puVar12 + 0xc) = fVar3;
          iVar11 = iVar11 + 2;
          *(float *)(puVar12 + 0x18) = fVar4;
          bVar10 = (bool)(bVar10 ^ 1);
          *(float *)(puVar12 + 0x1c) = fVar5;
          puVar12 = puVar12 + 0x20;
        } while (iVar11 < (int)ppuVar6[3]);
      }
      iVar13 = iVar13 + 1;
      piVar8 = piVar8 + 0x18;
      ppuVar6 = ppuVar6 + 0x18;
    } while (iVar13 < 4);
  }
  dVar14 = (double)fastfunc::FastIntToDouble(worldUpdateTime & 0x3f);
  fVar1 = (float)(dVar14 - 32.0) * 0.09817477;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = fVar4 * fVar4;
  fVar3 = fVar1 * fVar1 * fVar4;
  fVar5 = fVar1 * fVar3;
  DAT_0087333c = (fVar1 * fVar5 * 2.601887e-06 +
                 fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4)
                 * 0.5 + 0.5;
  DAT_0087339c = DAT_0087333c;
  DAT_008733fc = DAT_0087333c;
  DAT_0087345c = DAT_0087333c;
  RegisterFuncForMoby(&PTR_M761_00450c28_0070e850,moby);
  return;
}



//==== 00450eb4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M762_00450eb4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M762_00450eb4(void)

{
  DAT_008734ac = 0x10000;
  return;
}



//==== 00450f20  ns=mobyupdate_unsorted  size=0x6dc
// sig: undefined UpdateMoby_762(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 00425540 FUN_00425540
// strings: 008734e0: '_$62' (raw)

/* Moby 762 */

void mobyupdate_unsorted::UpdateMoby_762(MobyInstance *moby)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
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
  undefined1 local_130 [16];
  undefined4 local_120 [4];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  longlong local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  
  iVar5 = mobyutil::MB_damage(moby,0x800000,0);
  if (moby->state == 0) {
    if (MiscLevelFlags.field21_0x15 == 0) {
      moby->state = '\x01';
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if ((moby->state < 2) && (iVar5 != 0)) {
    MiscLevelFlags.field21_0x15 = 1;
    sound::PlayMobySound(0,0,moby);
    iVar5 = 0;
    dVar26 = 0.0;
    dVar24 = -1.0;
    dVar25 = 1.0;
    dVar18 = 3.141592502593994;
    dVar19 = -3.141592502593994;
    dVar20 = -0.16666656732559204;
    dVar21 = 0.008333025500178337;
    dVar22 = -0.0001980741071747616;
    dVar23 = 2.601886990305502e-06;
    local_f8 = -2.0;
    local_100 = 2.0;
    local_108 = 1.570796251296997;
    dVar30 = 1.5;
    dVar29 = 3.5;
    dVar28 = 210000.0;
    dVar27 = 0.5;
    local_110 = 4.0;
    do {
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      mobyutil::MB_randRangeFloat((float)local_f8,(float)local_100);
      mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      mobyutil::MB_randRangeFloat((float)dVar26,(float)local_110);
      mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar29);
      uVar3 = DAT_008734e4;
      uVar2 = DAT_008734e0;
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar29);
      dVar7 = (double)(float)(dVar7 * dVar28);
      iVar6 = mobyutil::MB_randRange(0x78,0xf0);
      local_f0 = (longlong)(int)(animationSpeed * (float)((double)(longlong)iVar6 + dVar27));
      partupd::SpawnPart_22(dVar7,local_130,local_140,uVar2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 200);
    iVar5 = 0;
    dVar27 = 5.0;
    dVar28 = 0.05000000074505806;
    uVar17 = 0x3fe8000000000000;
    fVar1 = 0.15;
    do {
      dVar16 = (double)fVar1;
      dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar9 = (double)mobyutil::MB_randRangeFloat((float)local_f8,(float)local_100);
      dVar11 = (double)(float)((double)(moby->rotation).z + local_108);
      local_dc = (float)dVar23;
      dVar29 = (double)(float)(dVar18 - dVar11);
      if (dVar11 - (double)(float)(dVar18 - dVar11) < 0.0) {
        dVar29 = dVar11;
      }
      dVar12 = (double)(float)(dVar19 - dVar11);
      if ((double)(float)(dVar19 - dVar11) - dVar29 < 0.0) {
        dVar12 = dVar29;
      }
      dVar29 = (double)(float)(dVar12 * dVar12);
      dVar15 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar12));
      dVar11 = (double)(float)(dVar29 * dVar15);
      dVar15 = (double)(float)((double)(float)(dVar29 * dVar11) * dVar23 +
                              (double)(float)(dVar11 * dVar22 +
                                             (double)(float)(dVar15 * dVar21 +
                                                            (double)(float)((double)(float)(dVar29 *
                                                                                           dVar12) *
                                                                            dVar20 + dVar12))));
      dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar25);
      dVar12 = (double)(moby->rotation).z;
      local_cc = (float)dVar18;
      local_e0 = (float)dVar19;
      dVar29 = (double)(float)(dVar18 - dVar12);
      if (dVar12 - (double)(float)(dVar18 - dVar12) < 0.0) {
        dVar29 = dVar12;
      }
      dVar18 = (double)(float)(dVar19 - dVar12);
      if ((double)(float)(dVar19 - dVar12) - dVar29 < 0.0) {
        dVar18 = dVar29;
      }
      local_d0 = (float)dVar20;
      local_d4 = (float)dVar21;
      local_d8 = (float)dVar22;
      dVar19 = (double)(float)(dVar18 * dVar18);
      dVar12 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
      dVar29 = (double)(float)(dVar19 * dVar12);
      dVar12 = (double)(float)((double)(float)(dVar19 * dVar29) * dVar23 +
                              (double)(float)(dVar29 * dVar22 +
                                             (double)(float)(dVar12 * dVar21 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar18) *
                                                                            dVar20 + dVar18))));
      dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)local_110);
      dVar29 = (double)(moby->pos).x;
      dVar23 = (double)(moby->pos).y;
      dVar22 = (double)(moby->pos).z;
      dVar18 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar27);
      dVar21 = (double)SQRT((float)(dVar8 * dVar8 +
                                   (double)(float)(dVar30 * dVar30 + (double)(float)(dVar7 * dVar7))
                                   ));
      dVar20 = (double)(float)((double)(float)(dVar18 * (double)mobyutil::g_FrameTime) / dVar21);
      dVar18 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar18 = (double)(float)(dVar8 * dVar20);
      }
      dVar13 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar13 = (double)(float)(dVar7 * dVar20);
      }
      dVar14 = dVar26;
      if (dVar26 - dVar21 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar18 = (double)(float)(dVar8 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar13 = (double)(float)(dVar7 * dVar20);
      }
      if (dVar21 - dVar26 < 0.0) {
        dVar14 = (double)(float)(dVar30 * dVar20);
      }
      lVar4 = mobyutil::MB_randInt(3);
      local_120[2] = 0x2ba;
      local_120[1] = 0x2b9;
      local_120[0] = 0x2b8;
      uVar2 = *(undefined4 *)((int)local_120 + (int)(lVar4 << 2));
      local_c8 = (float)dVar16;
      uVar10 = mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar16);
      mobyutil::MB_randRange(0x3c,0xb4);
      FUN_00425540(uVar10,dVar25,dVar25,uVar17,
                   CONCAT44((float)(dVar9 * dVar15 + dVar29),(float)(dVar11 * dVar12 + dVar23)),
                   CONCAT44((float)(dVar19 + dVar22),(float)dVar26),
                   CONCAT44((float)dVar14,(float)dVar13),CONCAT44((float)dVar18,(float)dVar26),uVar2
                  );
      dVar19 = (double)local_e0;
      iVar5 = iVar5 + 1;
      dVar23 = (double)local_dc;
      dVar22 = (double)local_d8;
      dVar21 = (double)local_d4;
      dVar20 = (double)local_d0;
      dVar18 = (double)local_cc;
      fVar1 = local_c8;
    } while (iVar5 < 0x32);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004515fc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M763_004515fc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M763_004515fc(void)

{
  DAT_00873534 = 0x10000;
  return;
}



//==== 00451618  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M763_00451618(void)
// callers(0): 
// callees(2): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M763_00451618(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_randInt(2);
  iVar1 = (int)(animationSpeed * 8.5);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      if (*(char *)(param_1 + 0x53) == '\x03') {
        return;
      }
      mobyutil::MB_SetAnimation(param_1,3,0,iVar1);
      return;
    }
  }
  else if (iVar2 < 2) {
    if (*(char *)(param_1 + 0x53) == '\x0f') {
      return;
    }
    mobyutil::MB_SetAnimation(param_1,0xf,0,iVar1);
    return;
  }
  if (*(char *)(param_1 + 0x53) != '\x10') {
    mobyutil::MB_SetAnimation(param_1,0x10,0,iVar1);
  }
  return;
}



//==== 00451730  ns=mobyupdate_helpers  size=0x3ec
// sig: undefined M763_00451730(void)
// callers(1): 00451bc8 mobyupdate_unsorted::UpdateMoby_763
// callees(9): 000fc620 mobyutil::MB_randInt; 00104298 mobyutil::MB_SetGroupField; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M763_00451730(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 in_LR;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_50 [4];
  float local_4c;
  float local_48;
  float local_44 [3];
  
  pvVar2 = param_1->pVar;
  uVar9 = ZEXT48(pvVar2);
  if (*(int *)((int)pvVar2 + 0x38) != 0) {
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    auVar11 = loadVectorLeftIndexed(in_LR,0x451714);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x214,uVar9);
    *(undefined4 *)((int)pvVar2 + 0x214U & 0xfffffffc) = uVar4;
  }
  uVar1 = param_1->state;
  if ((uVar1 != '\v' && uVar1 != '\t') && (uVar1 != '\0')) {
    iVar8 = fastfunc::FastDecTimerS32(uVar9 + 0x214);
    uVar4 = 0x41a00000;
    if (iVar8 != 0) {
      uVar4 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar2 + 0x1fc) = uVar4;
  }
  iVar8 = mobyutil::MB_damage(param_1,0x330000,0);
  dVar10 = 0.0;
  local_4c = 0.0;
  mobyutil::MB_HandleDamage(param_1,iVar8,uVar9 + 0x20,0,auStack_50,&local_4c,0,4);
  if ((iVar8 != 0) && (param_1->state != 'c')) {
    if (param_1->group != -1) {
      mobyutil::MB_SetGroupField(param_1->group,7);
    }
    if (local_4c != 0.0) {
      fVar5 = *(float *)((int)pvVar2 + 0x20) - local_4c;
      *(undefined4 *)((int)pvVar2 + 0x80) = 0x3c03126f;
      *(undefined4 *)((int)pvVar2 + 0x84) = 0x3a03126f;
      *(float *)((int)pvVar2 + 0x20) = fVar5;
      fVar7 = DAT_0087355c;
      fVar6 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x94) = 9;
      *(float *)((int)pvVar2 + 0x88) = fVar7 * fVar6;
      fVar7 = DAT_00873558;
      *(undefined1 *)((int)pvVar2 + 0xad) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa0) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0xa8) = 0x3f800000;
      *(float *)((int)pvVar2 + 0x8c) = fVar7 * fVar6;
      if (dVar10 < (double)fVar5) {
        mobyutil::MB_randInt(0x100);
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),local_44,uVar9 + 0x88
                   ,uVar9 + 0x8c);
        mobyutil::MB_StartKick((double)local_44[0],param_1,uVar9 + 0x70);
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        *(undefined4 *)((int)pvVar2 + 0xc0) = DAT_00873568;
        *(undefined4 *)((int)pvVar2 + 0xc4) = DAT_0087356c;
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar2 + 0x67) = 0xfa;
        auVar11 = loadVectorLeftIndexed(0x18,0x451714);
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                             auVar12);
        auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
        auVar11 = vectorSplatHalfWord(auVar11,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x26,uVar9);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar3;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
      }
      else {
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar5 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar2 + 0x88) = mobyutil::g_FrameTime * 8.0;
        *(float *)((int)pvVar2 + 0x8c) = fVar5 * 10.0;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_48,
                   uVar9 + 0x88,uVar9 + 0x8c);
        mobyutil::MB_StartKick((double)local_48,param_1,uVar9 + 0x70);
        *(undefined4 *)((int)pvVar2 + 0xc0) = 0x41300000;
        *(undefined4 *)((int)pvVar2 + 0xc4) = 0x41900000;
        param_1->state = 'c';
        *(undefined1 *)((int)pvVar2 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
      }
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar9 + 0x60);
  return;
}



//==== 00451bc8  ns=mobyupdate_unsorted  size=0x1b84
// sig: undefined UpdateMoby_763(MobyInstance * moby)
// callers(0): 
// callees(31): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 001118d8 mobyutil::MB_getTarget; 001136c8 mobyutil::DoMeander; 00113e88 mobyutil::MB_MayaFrameTrigger; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00451730 mobyupdate_helpers::M763_00451730; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e8030 FUN_005e8030; 005e81f0 FUN_005e81f0; 005e8338 FUN_005e8338

/* Moby 763 */

void mobyupdate_unsorted::UpdateMoby_763(MobyInstance *moby)

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
  MobyClass *pMVar10;
  f32 fVar11;
  MobyInstance *victim;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined2 uVar22;
  uint uVar20;
  int iVar21;
  ulonglong uVar19;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_110 [16];
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [16];
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  f32 local_d0;
  f32 local_cc;
  float local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [80];
  uint local_60;
  undefined1 auStack_50 [8];
  longlong local_48;
  
  lVar16 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M763_00451730();
  mobyutil::MB_getTarget((double)*(float *)((int)pvVar8 + 0x1fc),lVar16);
  bVar1 = moby->state;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  lVar23 = (ulonglong)local_60 +
           ((LZCOUNT(-local_60) << 0x3a) >> 0x3f & ZEXT48(g_heroMobyPtr) - (ulonglong)local_60);
  victim = (MobyInstance *)lVar23;
  if (8 < bVar1) {
    if (bVar1 == 99) {
      uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if ((uVar20 & 0x40) == 0) {
        dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
        fVar11 = (moby->pos).z;
        uVar20 = (int)fVar11 >> 0x1f;
        if ((dVar24 <= 37.0) || (moby->updateId != moby->animationId)) {
          if ((int)((uVar20 >> 1 ^ (uint)fVar11) - uVar20) < 0x41200000) {
            mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          goto LAB_004536f0;
        }
      }
      moby->unk58 = 0.0;
      mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
      moby->state = '\x0f';
      moby->modeBits = moby->modeBits | TRANSPARENT;
      goto LAB_004536f0;
    }
    if (bVar1 == 0xf) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar1 == 0xe) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        uVar19 = mobyutil::MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar8 + 0x1f8);
        if ((uVar19 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar8 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
        dVar24 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
        iVar21 = mobyutil::MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (-1 < iVar21) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_004536f0;
          }
        }
        else if (iVar21 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 0xd) {
      puVar9 = moby->pClass->collision;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      moby->collision = puVar9;
      uVar17 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
      mobyutil::OrganicDeltAngSpeed
                (uVar17,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_00451b1c,
                 (int)pvVar8 + 0x1f0);
      if ((moby->field43_0x70 & 2U) == 0) goto LAB_004536f0;
      uVar19 = mobyutil::MB_randInt(0x100);
      fVar3 = *(float *)((int)pvVar8 + 0x1f8);
      if ((uVar19 & 1) != 0) {
        fVar3 = -fVar3;
        *(float *)((int)pvVar8 + 0x1f8) = fVar3;
      }
      *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
      dVar24 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
      *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
      moby->state = '\x04';
      iVar21 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (iVar21 < 0) {
LAB_00452478:
          if (uVar2 != '\x10') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
          }
        }
        else if (uVar2 != '\x03') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
        }
      }
      else {
        if (1 < iVar21) goto LAB_00452478;
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
      }
      moby->setByGroup = '\0';
      goto LAB_004536f0;
    }
    if (bVar1 == 0xc) {
      uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
      if ((uVar20 & 1) != 0) {
        moby->state = '\x0e';
        if (moby->animationId == '\t') {
          return;
        }
        mobyutil::MB_SetAnimation(lVar16,9,8,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 0xb) {
      uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x1d0) - fVar3),
                            (double)(*(float *)((int)pvVar8 + 0x1d4) - fVar4));
      mobyutil::OrganicDeltAngSpeed
                (uVar17,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar16,
                 &DAT_00451b1c,(int)pvVar8 + 0x1f0);
      fVar4 = (victim->pos).y - *(float *)((int)pvVar8 + 0x1d4);
      fVar3 = (victim->pos).z;
      fVar5 = (victim->pos).x - *(float *)((int)pvVar8 + 0x1d0);
      fVar6 = fVar3 - *(float *)((int)pvVar8 + 0x1d8);
      if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x1fc))
          && (ABS(*(float *)((int)pvVar8 + 0x1d8) - fVar3) < 8.0)) || (moby->setByGroup == '\x02'))
      {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,2);
        }
        dVar26 = (double)DAT_00873564;
        dVar24 = (double)DAT_0071f418;
        *(undefined4 *)((int)pvVar8 + 0x84) = 0;
        moby->drawDistance = 0x40;
        *(float *)((int)pvVar8 + 0x80) = (float)(dVar26 * dVar24);
        fVar3 = DAT_00873560 * mobyutil::g_FrameTime;
        *(float *)((int)pvVar8 + 0x88) = fVar3;
        dVar24 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar16 + 0x10,(int)pvVar8 + 0x1d0,0x870000
                                    ,&DAT_00720000,auStack_50);
        *(float *)((int)pvVar8 + 0x8c) = (float)dVar24;
        *(undefined1 *)((int)pvVar8 + 0xad) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar8 + 0x94) = 5;
        mobyutil::MB_StartKick((double)fVar3,lVar16,(int)pvVar8 + 0x70,5,8,1,0);
        MVar7 = moby->modeBits;
        pMVar10 = moby->pClass;
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41200000;
        moby->state = '\f';
        moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
        moby->collision = pMVar10->collision;
      }
      goto LAB_004536f0;
    }
    if (bVar1 == 10) {
      dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
      if (29.0 < dVar24) {
        moby->state = '\x04';
        iVar21 = mobyutil::MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (-1 < iVar21) {
            if (uVar2 == '\x03') {
              return;
            }
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
            return;
          }
        }
        else if (iVar21 < 2) {
          if (uVar2 == '\x0f') {
            return;
          }
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          return;
        }
        if (uVar2 == '\x10') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
        return;
      }
      goto LAB_004536f0;
    }
    if (bVar1 != 9) goto LAB_004536f0;
    fVar4 = (victim->pos).y - fVar4;
    fVar3 = (victim->pos).x - fVar3;
    fVar6 = (victim->pos).z;
    fVar12 = fVar6 - fVar5;
    if (((SQRT(fVar12 * fVar12 + fVar3 * fVar3 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x1fc))
        && (ABS(fVar5 - fVar6) < 8.0)) && (iVar21 = mobyutil::MB_randInt(0x13), iVar21 == 0)) {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      moby->state = '\r';
      if (moby->animationId != '\a') {
        mobyutil::MB_SetAnimation(lVar16,7,0,1);
      }
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      goto LAB_004536f0;
    }
    bVar1 = moby->setByGroup;
    if ((bVar1 & 1) == 0) {
LAB_00452290:
      if (bVar1 != 7) goto LAB_004536f0;
    }
    else {
      iVar21 = fastfunc::FastDecTimerS16((int)pvVar8 + 0x218);
      if (iVar21 == 0) {
        bVar1 = moby->setByGroup;
        goto LAB_00452290;
      }
    }
    moby->state = '\r';
    if (moby->animationId != '\a') {
      mobyutil::MB_SetAnimation(lVar16,7,0,1);
    }
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    goto LAB_004536f0;
  }
  if (bVar1 == 7) {
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar20 & 1) != 0) {
      moby->state = '\n';
      if (moby->animationId == '\r') {
        return;
      }
      mobyutil::MB_SetAnimation(lVar16,0xd,8,3);
      return;
    }
    fVar11 = (moby->pos).z;
    uVar20 = (int)fVar11 >> 0x1f;
    if ((int)((uVar20 >> 1 ^ (uint)fVar11) - uVar20) < 0x41d80000) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 6) {
    uVar17 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x1d0) - fVar3),
                          (double)(*(float *)((int)pvVar8 + 0x1d4) - fVar4));
    mobyutil::OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar16);
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar5 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar12 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
      fVar12 = fVar5;
    }
    dVar24 = 2.0;
    local_b8 = 0;
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = fVar12 * fVar12;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar12;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar5 * fVar6;
    local_bc = (fVar4 * fVar15 * 2.601887e-06 +
               fVar15 * -0.0001980741 +
               fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12) * 2.0;
    local_c0 = (fVar5 * fVar13 * 2.601887e-06 +
               fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_c0,auStack_b0);
    fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    if (((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < dVar24) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(lVar16,0,0,3);
    }
    fVar3 = (victim->pos).y - *(float *)((int)pvVar8 + 0x1d4);
    fVar4 = (victim->pos).x - *(float *)((int)pvVar8 + 0x1d0);
    fVar5 = (victim->pos).z - *(float *)((int)pvVar8 + 0x1d8);
    if (*(float *)((int)pvVar8 + 0x1fc) <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
      if (moby->setByGroup == '\x01') {
        moby->state = '\x04';
        iVar21 = mobyutil::MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar21 < 1) {
          if (iVar21 < 0) {
LAB_00453400:
            if (uVar2 != '\x10') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
            }
          }
          else if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
        }
        else {
          if (1 < iVar21) goto LAB_00453400;
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
          }
        }
      }
    }
    else {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      moby->state = '\x04';
      iVar21 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (iVar21 < 0) {
LAB_004532e4:
          if (uVar2 != '\x10') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
          }
        }
        else if (uVar2 != '\x03') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
        }
      }
      else {
        if (1 < iVar21) goto LAB_004532e4;
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
      }
    }
    moby->setByGroup = '\0';
    goto LAB_004536f0;
  }
  if (bVar1 == 5) {
    g_heroMobyPtr->unk58 = 1.3;
    uVar17 = FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                          (double)((victim->pos).y - (moby->pos).y));
    dVar24 = 0.20000000298023224;
    mobyutil::OrganicDeltAngSpeed
              (uVar17,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar16,&DAT_00451b1c,
               (int)pvVar8 + 0x1f0);
    if (((moby->updateId == moby->animationId) &&
        (iVar21 = mobyutil::MB_MayaFrameTrigger(13.0,moby), iVar21 != 0)) &&
       (ABS((moby->pos).z - (victim->pos).z) < 0.5)) {
      fVar3 = (moby->pos).y;
      fVar4 = (victim->pos).y;
      fVar5 = (moby->pos).x;
      fVar13 = fVar3 - fVar4;
      fVar6 = (victim->pos).x;
      fVar12 = fVar5 - fVar6;
      if (SQRT(fVar12 * fVar12 + fVar13 * fVar13) < 2.0) {
        dVar26 = (double)FUN_005e8338((double)(fVar6 - fVar5),(double)(fVar4 - fVar3));
        dVar26 = (double)fastfunc::FastSubRots((float)dVar26,(moby->rotation).z);
        if (dVar26 < 0.2617993950843811) {
          fVar3 = (moby->rotation).z;
          fVar4 = fVar3 + 1.5707963;
          fVar5 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar5 = fVar3;
          }
          fVar6 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar6 = fVar4;
          }
          fVar12 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
            fVar12 = fVar5;
          }
          local_d8 = 0;
          fVar3 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
            fVar3 = fVar6;
          }
          fVar4 = fVar12 * fVar12;
          fVar5 = fVar3 * fVar3;
          fVar14 = fVar4 * fVar4 * fVar12;
          fVar6 = fVar5 * fVar5 * fVar3;
          fVar15 = fVar4 * fVar14;
          fVar13 = fVar5 * fVar6;
          local_dc = (float)((double)(fVar4 * fVar15 * 2.601887e-06 +
                                     fVar15 * -0.0001980741 +
                                     fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12)
                            * dVar24);
          local_e0 = (float)((double)(fVar5 * fVar13 * 2.601887e-06 +
                                     fVar13 * -0.0001980741 +
                                     fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                            dVar24);
          local_d0 = (victim->pos).x;
          local_cc = (victim->pos).y;
          local_c4 = (victim->pos).w;
          local_c8 = (victim->pos).z + 0.75;
          mobyutil::CollDamageMobyDirect(1.0,victim,moby,1,0x451b1c,&local_d0,&local_e0);
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) &&
       (fVar3 = (moby->pos).y - (victim->pos).y, fVar4 = (moby->pos).x - (victim->pos).x,
       2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
      moby->state = '\x04';
      iVar21 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (-1 < iVar21) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
      }
      else if (iVar21 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_004536f0;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 4) {
    dVar26 = (double)FUN_005e8338((double)((victim->pos).x - fVar3),
                                  (double)((victim->pos).y - fVar4));
    dVar25 = (double)fastfunc::FastDiffRots(dVar26,(double)(moby->rotation).z);
    dVar24 = 0.6981316804885864;
    if ((dVar25 <= 0.6981316804885864) && (dVar24 = dVar25, dVar25 < -0.6981316804885864)) {
      dVar24 = -0.6981316804885864;
    }
    *(float *)((int)pvVar8 + 0x1b8) = (float)dVar24;
    mobyutil::OrganicDeltAngSpeed
              ((double)(float)(dVar26 + (double)*(float *)((int)pvVar8 + 500)),0x3fa99999a0000000,
               0x3fd3333340000000,0x3fc99999a0000000,lVar16);
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar5 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar6 = fVar4;
    }
    fVar12 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
      fVar12 = fVar5;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = fVar12 * fVar12;
    fVar5 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar12;
    local_f8 = 0;
    fVar6 = fVar5 * fVar5 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar5 * fVar6;
    local_fc = (fVar4 * fVar15 * 2.601887e-06 +
               fVar15 * -0.0001980741 +
               fVar14 * 0.0083330255 + fVar4 * fVar12 * -0.16666657 + fVar12) * 2.0;
    local_100 = (fVar5 * fVar13 * 2.601887e-06 +
                fVar13 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 2.0;
    iVar21 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_100,
                        auStack_f0);
    if (iVar21 == 2) {
      moby->state = '\x06';
      moby->setByGroup = '\0';
    }
    else {
      iVar21 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x210);
      if (iVar21 != 0) {
        dVar24 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        fVar3 = animationSpeed;
        *(float *)((int)pvVar8 + 500) = -*(float *)((int)pvVar8 + 500);
        *(int *)((int)pvVar8 + 0x210) = (int)(fVar3 * ((float)(longlong)dVar24 + 0.5));
      }
      fVar3 = (victim->pos).y;
      fVar4 = (victim->pos).x;
      fVar12 = (moby->pos).y - fVar3;
      fVar6 = (moby->pos).x - fVar4;
      fVar5 = (victim->pos).z;
      fVar4 = fVar4 - *(float *)((int)pvVar8 + 0x1d0);
      fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x1d4);
      fVar13 = fVar5 - *(float *)((int)pvVar8 + 0x1d8);
      if (1.5 <= SQRT(fVar6 * fVar6 + fVar12 * fVar12)) {
        if ((*(float *)((int)pvVar8 + 0x1fc) + 5.5 <=
             SQRT(fVar13 * fVar13 + fVar4 * fVar4 + fVar3 * fVar3)) ||
           (4.4 <= ABS((moby->pos).z - fVar5))) {
          if ((moby->setByGroup != '\x01') && (iVar21 = mobyutil::MB_randInt(9), iVar21 == 0)) {
            moby->state = '\x06';
          }
        }
        else if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,1);
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          local_48 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 5.5));
        }
      }
      moby->setByGroup = '\0';
    }
    goto LAB_004536f0;
  }
  if (bVar1 == 3) {
    uVar17 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
    mobyutil::OrganicDeltAngSpeed
              (uVar17,0x3f9eb851e0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_00451b1c,(int)pvVar8 + 0x1f0)
    ;
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x04';
      iVar21 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar21 < 1) {
        if (-1 < iVar21) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_004536f0;
        }
      }
      else if (iVar21 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_004536f0;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar16,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_004536f0;
  }
  if (bVar1 != 1) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar8 + 0x20c) == 0) {
        if (*(int *)((int)pvVar8 + 0x1dc) == 0) {
          FUN_005e7e98((int)pvVar8 + 0x1d0,lVar16 + 0x10);
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar16,0,0,3);
          }
        }
        else {
          moby->drawDistance = 0;
          moby->state = '\v';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          moby->collision = (ushort *)0x0;
        }
      }
      else {
        FUN_005e7e98((int)pvVar8 + 0x1d0,lVar16 + 0x10);
        moby->state = '\t';
        if (moby->animationId != '\f') {
          mobyutil::MB_SetAnimation(lVar16,0xc,0,3);
        }
        moby->collision = (ushort *)0x0;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x40000000;
      *(undefined4 *)((int)pvVar8 + 0x214) = 0;
      *(undefined4 *)((int)pvVar8 + 0x208) = 0;
      *(undefined1 *)((int)pvVar8 + 0x29) = 1;
      *(undefined1 *)((int)pvVar8 + 0x58) = 8;
      *(undefined1 *)((int)pvVar8 + 0x5a) = 5;
      *(undefined4 *)((int)pvVar8 + 0x90) = 0x200;
      *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f000000;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
      *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd8) = 0x3f000000;
      *(undefined4 *)((int)pvVar8 + 0xd0) = 0x38d;
      fVar3 = mobyutil::g_FrameTime * 5.5;
      *(uint *)((int)pvVar8 + 0x108) = *(uint *)((int)pvVar8 + 0x108) | 0x10;
      *(float *)((int)pvVar8 + 0xf4) = fVar3;
      FUN_005e7e98((int)pvVar8 + 0x120,lVar16 + 0x10);
      uVar17 = idol::GetAnimDuration(0x78);
      uVar18 = idol::GetAnimDuration(700);
      uVar22 = mobyutil::MB_randRange(uVar17,uVar18);
      *(undefined2 *)((int)pvVar8 + 0x21c) = uVar22;
      uVar20 = rand();
      if ((uVar20 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
    }
    goto LAB_004536f0;
  }
  FUN_005e81f0(auStack_110,lVar23 + 0x10,lVar16 + 0x10);
  dVar26 = (double)(moby->rotation).z;
  dVar24 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                (double)((victim->pos).y - (moby->pos).y));
  dVar24 = (double)fastfunc::FastSubRots((float)dVar26,(float)dVar24);
  dVar25 = (double)*(float *)((int)pvVar8 + 0x1fc);
  dVar26 = (double)FUN_005e8030(auStack_110);
  if ((dVar26 < dVar25) && (ABS((moby->pos).z - (victim->pos).z) < 4.0)) {
    moby->state = '\x03';
    if (0.9599310755729675 <= dVar24) {
      if (moby->animationId != '\x11') {
        uVar17 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar16,0x11,0,uVar17);
      }
    }
    else {
      if (moby->animationId != '\x02') {
        uVar17 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar16,2,0,uVar17);
      }
      moby->unk58 = 1.55;
    }
    goto LAB_004536f0;
  }
  bVar1 = moby->setByGroup;
  if ((bVar1 & 1) == 0) {
LAB_00451fec:
    if (bVar1 != 7) {
      if (moby->animationId != '\x0f') {
        local_48 = (longlong)(int)(animationSpeed * 14.5);
        mobyutil::MB_SetAnimation(lVar16,0xf,0,(int)(animationSpeed * 14.5));
      }
      local_48 = (longlong)(int)(animationSpeed * 20.5);
      if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar8 + 0x21c)) {
        mobyutil::Delt(mobyutil::g_FrameTime * 2.5,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x134)
                      );
      }
      else {
        mobyutil::Delt(0.0,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x134));
      }
      moby->unk58 = 0.8;
      mobyutil::DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar16,(int)pvVar8 + 0x120);
      goto LAB_004536f0;
    }
  }
  else {
    iVar21 = mobyutil::MB_randInt(0x13);
    if (iVar21 != 0) {
      bVar1 = moby->setByGroup;
      goto LAB_00451fec;
    }
  }
  uVar19 = mobyutil::MB_randInt(0x100);
  fVar3 = *(float *)((int)pvVar8 + 0x1f8);
  if ((uVar19 & 1) != 0) {
    fVar3 = -fVar3;
    *(float *)((int)pvVar8 + 0x1f8) = fVar3;
  }
  *(float *)((int)pvVar8 + 500) = fVar3 * 0.017453292;
  dVar24 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
  *(int *)((int)pvVar8 + 0x210) = (int)(animationSpeed * ((float)(longlong)dVar24 + 0.5));
  moby->state = '\x03';
  if (moby->animationId != '\x02') {
    mobyutil::MB_SetAnimation(lVar16,2,0,3);
  }
  moby->setByGroup = '\0';
LAB_004536f0:
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar16,(int)pvVar8 + 0x150,
             0);
  return;
}



//==== 0045374c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M765_0045374c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M765_0045374c(void)

{
  DAT_008735bc = 0x10000;
  return;
}



//==== 00453760  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_765(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 765 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_765(MobyInstance *moby)

{
  return moby;
}



//==== 004537a0  ns=mobyupdate_unsorted  size=0x3c4
// sig: undefined UpdateMoby_{768_769}(MobyInstance * moby)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* Moby 768
   Moby 769 */

void mobyupdate_unsorted::UpdateMoby__768_769_(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = moby->state;
  pfVar7 = (float *)moby->pVar;
  if (uVar2 == '\x04') {
    if ((pfVar7[5] <=
         SQRT((*pfVar7 - g_heroPosition.x) * (*pfVar7 - g_heroPosition.x) +
              (pfVar7[1] - g_heroPosition.y) * (pfVar7[1] - g_heroPosition.y))) ||
       (2.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
      fVar3 = pfVar7[4] - 1.0 / (animationSpeed * 20.0);
      pfVar7[4] = fVar3;
      if (fVar3 <= 0.0) {
        pfVar7[4] = 0.0;
        moby->state = '\x01';
      }
    }
    else {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x03') {
    fVar3 = pfVar7[1] - g_heroPosition.y;
    fVar4 = *pfVar7 - g_heroPosition.x;
    if (((pfVar7[5] * 1.1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) &&
        (fVar3 = pfVar7[1] - GameCamera.posY, fVar4 = *pfVar7 - GameCamera.posX,
        pfVar7[5] * 1.1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) &&
       (moby->state = '\x04', moby->oClass == DOOR_LEFT)) {
      sound::PlayMobySound(0,0,moby);
    }
  }
  else if (uVar2 == '\x02') {
    fVar3 = pfVar7[4] + 1.0 / (animationSpeed * 20.0);
    pfVar7[4] = fVar3;
    if (1.0 <= fVar3) {
      pfVar7[4] = 1.0;
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    if (((SQRT((*pfVar7 - g_heroPosition.x) * (*pfVar7 - g_heroPosition.x) +
               (pfVar7[1] - g_heroPosition.y) * (pfVar7[1] - g_heroPosition.y)) < pfVar7[5]) &&
        (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) &&
       (moby->state = '\x02', moby->oClass == DOOR_LEFT)) {
      sound::PlayMobySound(0,0,moby);
    }
  }
  else if (uVar2 == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    fVar3 = (moby->pos).w;
    pfVar7[4] = 0.0;
    pfVar7[3] = fVar3;
    moby->state = '\x01';
  }
  fVar3 = (moby->rotation).z;
  fVar4 = fVar3 + 1.5707963;
  fVar5 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar5 = fVar4;
  }
  fVar10 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
    fVar10 = fVar5;
  }
  fVar4 = -2.0;
  fVar5 = pfVar7[4];
  bVar1 = moby->oClass == DOOR_LEFT;
  fVar11 = fVar10 * fVar10;
  fVar12 = fVar11 * fVar11 * fVar10;
  fVar13 = fVar11 * fVar12;
  fVar6 = fVar4;
  if (bVar1) {
    fVar6 = 2.0;
  }
  fVar8 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar8 = fVar3;
  }
  fVar9 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
    fVar9 = fVar8;
  }
  fVar3 = fVar9 * fVar9;
  fVar8 = fVar3 * fVar3 * fVar9;
  fVar14 = fVar3 * fVar8;
  if (bVar1) {
    fVar4 = 2.0;
  }
  (moby->pos).x =
       (fVar11 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
       fVar5 * fVar6 + *pfVar7;
  (moby->pos).y =
       (fVar3 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9) * fVar5
       * fVar4 + pfVar7[1];
  return;
}



//==== 00453b64  ns=mobyupdate_helpers  size=0x14
// sig: undefined M769_00453b64(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M769_00453b64(void)

{
  DAT_0087362c = 0x10000;
  return;
}



//==== 00453bc8  ns=mobyupdate_unsorted  size=0x760
// sig: undefined UpdateMoby_77(MobyInstance * moby)
// callers(0): 
// callees(12): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 000fea60 mobyutil::MB_randSphere; 001009b0 mobyutil::MB_MoveAndCollide; 00105870 mobyutil::DamageSphereAtPos; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00131100 partupd::SpawnPart_60; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt

/* Moby 77 */

void mobyupdate_unsorted::UpdateMoby_77(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar20;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
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
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x120;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar16;
  puVar11[0x26] = in_LR;
  puVar11[0x23] = in_f31;
  puVar11[0x22] = unaff_r31;
  puVar11[0x21] = unaff_r30;
  puVar11[0x20] = unaff_r29;
  puVar11[0x1f] = unaff_r28;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  iVar20 = mobyutil::MB_damage(lVar17,0x330000,0);
  if (iVar20 == 0) {
    if (moby->state == '\x01') goto LAB_00453d7c;
  }
  else {
    moby->state = '\x04';
    moby->damage = -1;
  }
  mobyutil::MB_randSphere(0,(double)(mobyutil::g_FrameTime * 2.0),uVar16 - 0xa0);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar11 + 0x12) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0x94) = fVar2;
  fVar2 = (moby->pos).w;
  *(float *)(puVar11 + 0x13) = fVar3;
  fVar5 = DAT_00873660;
  *(f32 *)((int)puVar11 + 0x9c) = fVar2;
  if (DAT_010c5124 == 0) {
    moby->state = '\x01';
    moby->collision = (ushort *)0x0;
    return;
  }
  puVar11[0x1c] = (longlong)DAT_0087365c;
  *(float *)(puVar11 + 0x13) = fVar3 + fVar5;
  uVar10 = DAT_00873654;
  dVar31 = (double)DAT_00873658;
  fastfunc::FastDoubleToInt
            ((double)(longlong)(animationSpeed * ((float)(longlong)puVar11[0x1c] + 0.5)));
  mobyutil::MB_randInt(0xff);
  partupd::SpawnPart_60(dVar31,uVar16 - 0x90,uVar16 - 0xa0,uVar10);
  piVar9 = *(int **)((int)pvVar8 + 0x6c);
  if (piVar9 != (int *)0x0) {
    if (*piVar9 == worldUpdateTime) goto LAB_00453d7c;
    *piVar9 = worldUpdateTime;
  }
  RegisterFuncForMoby(&PTR_M771_00454680_0070e8e8,moby);
LAB_00453d7c:
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    mobyutil::MB_SpawnExplosionSparks(0x3fd0000000000000,0x402a000000000000,lVar17,lVar17 + 0x10);
    puVar11[0xe] = 0;
    mobyutil::DamageSphereAtPos
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar17,lVar17 + 0x10);
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (uVar1 == '\x03') {
    fVar5 = g_heroPosition.x - (moby->pos).x;
    fVar4 = g_heroPosition.y - (moby->pos).y;
    fVar3 = *(float *)((int)pvVar8 + 100);
    fVar6 = ABS(fVar5);
    fVar7 = ABS(fVar4);
    *(float *)(puVar11 + 0x16) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar4;
    *(float *)(puVar11 + 0x17) = fVar6 - fVar7;
    dVar31 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar11 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xb4) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar11 + 0x16));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)((int)puVar11 + 0xb4));
    if (*(float *)(puVar11 + 0x17) - 0.0 < 0.0) {
      fVar13 = fVar6;
    }
    dVar29 = dVar31;
    if (0.0 < fVar5) {
      lVar23 = uVar16 - 0x110;
      lVar21 = uVar16 - 0x54;
      lVar22 = uVar16 - 100;
      lVar26 = 2;
      fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x19) = fVar5;
      *(float *)(puVar11 + 0x18) = fVar5;
      *(float *)((int)puVar11 + 0xc4) = fVar5;
      *(float *)((int)puVar11 + 0xbc) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar6;
      *(float *)((int)puVar11 + 0xc4) = *(float *)((int)puVar11 + 0xc4) * fVar5;
      *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x19) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 0xbc) = *(float *)((int)lVar23 + 0xac) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar23 = uVar16 - 100;
      lVar26 = 4;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar23;
      lVar22 = lVar19;
      do {
        fVar5 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar22 + 0xbc) = *(float *)((int)lVar22 + 0xbc) * fVar5;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar6;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar12 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xbc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar4);
    }
    dVar27 = (double)fastfunc::FastWrapRot(fVar3,(float)dVar29);
    fVar7 = DAT_00969da8;
    fVar4 = DAT_00873650;
    fVar5 = mobyutil::g_FrameTime;
    fVar3 = (float)(dVar27 + 1.570796251296997);
    dVar29 = (double)(float)(3.141592502593994 - dVar27);
    if (dVar27 - (double)(float)(3.141592502593994 - dVar27) < 0.0) {
      dVar29 = dVar27;
    }
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    dVar28 = (double)(float)(-3.141592502593994 - dVar27);
    if ((double)(float)(-3.141592502593994 - dVar27) - dVar29 < 0.0) {
      dVar28 = dVar29;
    }
    fVar13 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar13 = fVar6;
    }
    dVar27 = (double)(float)(dVar28 * dVar28);
    fVar15 = fVar13 * fVar13;
    dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
    fVar6 = fVar15 * fVar15 * fVar13;
    dVar29 = (double)(float)(dVar27 * dVar30);
    fVar14 = fVar15 * fVar6;
    fVar3 = (moby->pos).z;
    *(undefined4 *)(puVar11 + 0x15) = 0;
    fVar3 = fVar3 - fVar7;
    *(float *)((int)puVar11 + 0xa4) =
         fVar4 * fVar5 *
         ((float)(dVar27 * dVar29) * 2.601887e-06 +
         (float)(dVar29 * -0.0001980741071747616 +
                (double)(float)(dVar30 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar27 * dVar28) *
                                               -0.16666656732559204 + dVar28))));
    *(float *)(puVar11 + 0x14) =
         fVar4 * fVar5 *
         (fVar15 * fVar14 * 2.601887e-06 +
         fVar14 * -0.0001980741 + fVar6 * 0.0083330255 + fVar15 * fVar13 * -0.16666657 + fVar13);
    if (fVar3 <= 0.6) {
      if (fVar3 < 0.4) {
        *(float *)(puVar11 + 0x15) = mobyutil::g_FrameTime * 3.0;
      }
    }
    else {
      *(float *)(puVar11 + 0x15) = mobyutil::g_FrameTime * -3.0;
    }
    mobyutil::MB_MoveAndCollide(0x3fd0000000000000,0x3fd0000000000000,dVar31,lVar17,uVar16 - 0x80);
    fVar3 = DAT_00969db4 - (moby->pos).y;
    fVar5 = hero::g_heroCGPos - (moby->pos).x;
    if ((SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 0.5) ||
       (iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0x68), iVar20 != 0)) {
      moby->state = '\x04';
    }
    else if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
            (moby->animationId != '\x02')) {
      puVar11[0x1c] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar17,2,0,*(undefined4 *)((int)puVar11 + 0xe4));
    }
  }
  else if (uVar1 == '\x02') {
    (moby->pos).z = mobyutil::g_FrameTime * 2.0 + (moby->pos).z;
    iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0x68);
    if (iVar20 != 0) {
      moby->state = '\x03';
      if (moby->animationId != '\x01') {
        puVar11[0x1c] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar17,1,0,*(undefined4 *)((int)puVar11 + 0xe4));
      }
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x10,0x453b78);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x68,uVar25)
      ;
      *(undefined4 *)((int)pvVar8 + 0x68U & 0xfffffffc) = uVar10;
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 00454348  ns=Global  size=0x330
// sig: undefined FUN_00454348(void)
// callers(2): 00364a00 mobyupdate_unsorted::UpdateMoby_408; 0044f060 mobyupdate_unsorted::UpdateMoby_76
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation

undefined8 FUN_00454348(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort *puVar16;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  MobyInstance *pMVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  puVar9[0x16] = unaff_r30;
  puVar9[0x17] = unaff_r31;
  puVar9[0x15] = unaff_r29;
  puVar9[0x14] = unaff_r28;
  puVar16 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar20 = MobyInstance + (*puVar16 & 0x7fff);
    if (pMVar20->state == '\x01') {
      pMVar20->state = '\x02';
      if (pMVar20->animationId != '\0') {
        mobyutil::MB_SetAnimation(pMVar20,0,0,0);
      }
      pMVar20->enabled = '\0';
      pvVar7 = pMVar20->pVar;
      pMVar20->modeBits = pMVar20->modeBits | DISABLED;
      pMVar20->collision = pMVar20->pClass->collision;
      dVar22 = (double)mobyutil::MB_randRangeFloat(-15.0,15.0);
      auVar23 = ZEXT416(0xffffffff);
      auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      *(float *)((int)pvVar7 + 100) = (float)(dVar22 * 0.01745329238474369);
      auVar23 = loadVectorLeftIndexed(0xc,0x454328);
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar1 = *param_2;
      auVar23 = vectorMultiplyAddFloatingPoint
                          (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                           auVar24);
      auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
      auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x68,
                         ZEXT48(pvVar7));
      *(undefined4 *)((int)pvVar7 + 0x68U & 0xfffffffc) = uVar8;
      (pMVar20->pos).x = fVar1;
      fVar2 = param_2[1];
      (pMVar20->pos).y = fVar2;
      fVar3 = param_2[2];
      (pMVar20->pos).z = fVar3;
      (pMVar20->pos).w = param_2[3];
      (pMVar20->pos).z = fVar3 - 1.0;
      fVar1 = g_heroPosition.x - fVar1;
      fVar2 = g_heroPosition.y - fVar2;
      fVar3 = ABS(fVar1);
      fVar5 = ABS(fVar2);
      *(float *)(puVar9 + 0xe) = fVar1;
      *(float *)((int)puVar9 + 0x74) = fVar2;
      *(float *)(puVar9 + 0xf) = fVar3 - fVar5;
      fVar1 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar18 = uVar12 - 0xb0;
        lVar14 = uVar12 - 0x44;
        lVar13 = uVar12 - 0x34;
        lVar21 = 2;
        fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar9 + 0x11) = fVar2;
        *(float *)(puVar9 + 0x10) = fVar2;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)((int)puVar9 + 0x7c) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar4;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar2;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar2 * fVar2;
          iVar10 = (int)lVar14;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
          lVar13 = lVar13 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar18 = uVar12 - 0x44;
        pfVar19 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar13 = lVar18;
        lVar14 = lVar15;
        do {
          fVar2 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar2;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar13 = 2;
        do {
          iVar10 = (int)lVar15;
          lVar15 = lVar15 + 0x10;
          iVar11 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar3;
      }
      (pMVar20->rotation).z = fVar1;
      return 1;
    }
    uVar6 = *puVar16;
    puVar16 = puVar16 + 1;
  } while (-1 < (short)uVar6);
  return 0;
}



//==== 00454680  ns=mobyupdate_helpers  size=0x610
// sig: undefined M771_00454680(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M771_00454680(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  ulonglong *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar26;
  ulonglong unaff_r30;
  ushort *puVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1f0;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar16;
  puVar10[0x40] = in_LR;
  puVar10[0x3c] = unaff_r30;
  puVar10[0x3d] = unaff_r31;
  puVar10[0x3b] = unaff_r29;
  puVar10[0x3a] = unaff_r28;
  puVar10[0x39] = unaff_r27;
  puVar10[0x38] = unaff_r26;
  puVar10[0x37] = unaff_r25;
  puVar10[0x36] = unaff_r24;
  puVar10[0x35] = unaff_r23;
  uVar17 = draw::GetEffectTex(8);
  puVar10[0x27] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar10[0x28] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar10[0x26] = uVar17;
  uVar17 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar10[0x29] = uVar17;
  bVar2 = *(byte *)(param_1 + 0x21);
  lVar22 = uVar16 - 0xe0;
  puVar19 = &DAT_00873770;
  puVar21 = &DAT_00873774;
  lVar28 = 2;
  lVar24 = uVar16 - 0xdc;
  lVar18 = lVar1;
  do {
    uVar3 = *puVar21;
    *(undefined4 *)((int)lVar18 + 0x110) = *puVar19;
    uVar4 = puVar19[2];
    *(undefined4 *)((int)lVar18 + 0x114) = uVar3;
    puVar19 = puVar19 + 4;
    uVar3 = puVar21[2];
    lVar18 = lVar18 + 0x10;
    *(undefined4 *)((int)lVar22 + 8) = uVar4;
    puVar21 = puVar21 + 4;
    *(undefined4 *)((int)lVar24 + 8) = uVar3;
    lVar22 = lVar22 + 0x10;
    lVar24 = lVar24 + 0x10;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  puVar27 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
  do {
    pMVar15 = MobyInstance;
    uVar12 = *puVar27 & 0x7fff;
    if (MobyInstance[uVar12].state != '\x01') {
      fVar13 = 0.0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x74) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0;
      fVar7 = GameCamera.posX - pMVar15[uVar12].pos.x;
      fVar8 = GameCamera.posY - pMVar15[uVar12].pos.y;
      fVar5 = ABS(fVar7);
      fVar6 = ABS(fVar8);
      *(float *)((int)puVar10 + 0x15c) = fVar7;
      *(float *)(puVar10 + 0x2c) = fVar8;
      *(float *)((int)puVar10 + 0x164) = fVar5 - fVar6;
      uVar17 = (ulonglong)(*(uint *)((int)puVar10 + 0x15c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x164) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x2c) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)((int)puVar10 + 0x15c));
      if (*(float *)((int)puVar10 + 0x164) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = ABS(*(float *)(puVar10 + 0x2c));
      if (*(float *)((int)puVar10 + 0x164) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar14 = fVar13;
      if (0.0 < fVar7) {
        lVar18 = uVar16 - 0x1e0;
        lVar28 = 2;
        lVar22 = uVar16 - 0x68;
        lVar24 = uVar16 - 0x58;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x194) = fVar7;
        *(float *)((int)puVar10 + 0x18c) = fVar7;
        *(float *)(puVar10 + 0x32) = fVar7;
        *(float *)(puVar10 + 0x31) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x18c) = *(float *)((int)puVar10 + 0x18c) * fVar6;
        *(float *)(puVar10 + 0x32) = *(float *)(puVar10 + 0x32) * fVar7;
        *(float *)((int)puVar10 + 0x194) = *(float *)((int)puVar10 + 0x194) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x178) * fVar7 * fVar7;
          iVar25 = (int)lVar22;
          lVar18 = lVar18 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = uVar16 - 0x68;
        lVar28 = 4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar22 = lVar24;
        do {
          fVar7 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x188) = *(float *)((int)lVar18 + 0x188) * fVar7;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar22 = 2;
        lVar18 = lVar1;
        fVar7 = fVar13;
        do {
          iVar25 = (int)lVar18;
          iVar26 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar25 + 0x188) + *(float *)(iVar26 + 4) +
                  *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar14 = (fVar7 + 0.7853982) * fVar8 + fVar5;
      }
      *(float *)(puVar10 + 0xf) = fVar14;
      fVar7 = pMVar15[uVar12].pos.y - GameCamera.posY;
      fVar8 = pMVar15[uVar12].pos.x - GameCamera.posX;
      fVar5 = GameCamera.posZ - pMVar15[uVar12].pos.z;
      fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
      *(float *)((int)puVar10 + 0x154) = fVar5;
      fVar5 = ABS(fVar5);
      fVar8 = ABS(fVar7);
      *(float *)(puVar10 + 0x2a) = fVar7;
      *(float *)(puVar10 + 0x2b) = fVar8 - fVar5;
      uVar17 = (ulonglong)(*(uint *)(puVar10 + 0x2a) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x2b) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x154) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar10 + 0x2a));
      if (*(float *)(puVar10 + 0x2b) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar6 = ABS(*(float *)((int)puVar10 + 0x154));
      if (*(float *)(puVar10 + 0x2b) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      if (0.0 < fVar7) {
        lVar18 = uVar16 - 0x1e0;
        lVar28 = 2;
        lVar22 = uVar16 - 0x88;
        lVar24 = uVar16 - 0x78;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x174) = fVar7;
        *(float *)((int)puVar10 + 0x16c) = fVar7;
        *(float *)(puVar10 + 0x2e) = fVar7;
        *(float *)(puVar10 + 0x2d) = fVar7;
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x16c) = *(float *)((int)puVar10 + 0x16c) * fVar6;
        *(float *)(puVar10 + 0x2e) = *(float *)(puVar10 + 0x2e) * fVar7;
        *(float *)((int)puVar10 + 0x174) = *(float *)((int)puVar10 + 0x174) * fVar7 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x158) * fVar7 * fVar7;
          iVar25 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar25 + 4) * fVar7 * fVar7;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = uVar16 - 0x88;
        lVar28 = 4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar1;
        lVar22 = lVar24;
        do {
          fVar7 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x168) = *(float *)((int)lVar18 + 0x168) * fVar7;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar22 = 2;
        lVar18 = lVar1;
        do {
          iVar25 = (int)lVar18;
          iVar26 = (int)lVar24;
          lVar18 = lVar18 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar13 = fVar13 + *(float *)(iVar25 + 0x168) + *(float *)(iVar26 + 4) +
                   *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar13 = (fVar13 + 0.7853982) * fVar5 + fVar8;
      }
      *(float *)((int)puVar10 + 0x74) = -fVar13;
      fastfunc::FastEulerToMtx1(uVar16 - 0x170,uVar16 - 0x180);
      *(f32 *)(puVar10 + 0x16) = pMVar15[uVar12].pos.x;
      *(f32 *)((int)puVar10 + 0xb4) = pMVar15[uVar12].pos.y;
      fVar8 = DAT_00873660;
      fVar7 = pMVar15[uVar12].pos.z;
      *(float *)(puVar10 + 0x17) = fVar7;
      puVar19 = &DAT_00873670;
      iVar26 = 0;
      *(f32 *)((int)puVar10 + 0xbc) = pMVar15[uVar12].pos.w;
      *(undefined4 *)((int)puVar10 + 0xbc) = 0x3f800000;
      iVar25 = 0;
      *(float *)(puVar10 + 0x17) = fVar7 + fVar8;
      do {
        lVar22 = uVar16 - 0x130;
        lVar24 = 4;
        lVar18 = lVar1;
        puVar21 = puVar19;
        do {
          *(undefined4 *)((int)lVar18 + 0x100) = *(undefined4 *)((int)&DAT_00873790 + iVar25);
          lVar18 = lVar18 + 4;
          puVar20 = (undefined4 *)lVar22;
          *puVar20 = *puVar21;
          puVar20[1] = puVar21[1];
          puVar20[2] = puVar21[2];
          puVar11 = puVar21 + 3;
          puVar21 = puVar21 + 4;
          puVar20[3] = *puVar11;
          lVar22 = lVar22 + 0x10;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        draw::FastDrawQuad(uVar16 - 0x130,uVar16 - 0x170,0,EffectTexHeaders,9);
        iVar26 = iVar26 + 1;
        iVar25 = iVar25 + 4;
        puVar19 = puVar19 + 0x10;
      } while (iVar26 < 4);
    }
    uVar9 = *puVar27;
    puVar27 = puVar27 + 1;
  } while (-1 < (short)uVar9);
  return;
}



//==== 00454c90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M771_00454c90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M771_00454c90(void)

{
  DAT_008737ec = 0x10000;
  return;
}



//==== 00454cb0  ns=mobyupdate_helpers  size=0x2c8
// sig: undefined M771_00454cb0(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
mobyupdate_helpers::M771_00454cb0
          (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
          float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  MobyInstance *pMVar12;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xe0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x1e] = in_LR;
  puVar6[0x19] = in_f29;
  puVar6[0x1a] = in_f30;
  puVar6[0x1b] = in_f31;
  puVar6[0x13] = unaff_r26;
  puVar6[0x17] = unaff_r30;
  puVar6[0x16] = unaff_r29;
  puVar6[0x15] = unaff_r28;
  puVar6[0x14] = unaff_r27;
  puVar6[0x18] = unaff_r31;
  pMVar12 = mobyfunc::CreateMoby(0x303);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0x7e;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x01';
    pfVar16 = (float *)pMVar12->pVar;
    (pMVar12->pos).x = *param_5;
    (pMVar12->pos).y = param_5[1];
    (pMVar12->pos).z = param_5[2];
    (pMVar12->pos).w = param_5[3];
    fVar4 = *param_4;
    fVar1 = *param_4;
    *pfVar16 = fVar1;
    fVar1 = ABS(fVar1);
    fVar5 = param_4[1];
    fVar3 = ABS(param_4[1]);
    pfVar16[1] = param_4[1];
    pfVar16[2] = param_4[2];
    fVar2 = param_4[3];
    pfVar16[6] = param_8;
    pfVar16[3] = fVar2;
    pfVar16[4] = param_6;
    pfVar16[5] = param_7;
    fVar2 = 0.0;
    pfVar16[10] = 0.0;
    pfVar16[7] = (float)param_1;
    pfVar16[8] = (float)param_2;
    pfVar16[9] = (float)param_3;
    *(float *)(puVar6 + 0xe) = fVar1 - fVar3;
    uVar10 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar10 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar15 = uVar9 - 0xd0;
      lVar14 = uVar9 - 0x6c;
      lVar13 = uVar9 - 0x5c;
      lVar17 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)(puVar6 + 0xf) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      *(float *)((int)puVar6 + 0x74) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
      *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar4;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 100) * fVar4 * fVar4;
        iVar7 = (int)lVar14;
        lVar15 = lVar15 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar15 = uVar9 - 0x6c;
      pfVar16 = (float *)&DAT_007358e0;
      lVar17 = 4;
      lVar13 = lVar15;
      lVar14 = lVar11;
      do {
        fVar4 = *pfVar16;
        fVar3 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar14 + 0x74) = *(float *)((int)lVar14 + 0x74) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = 2;
      do {
        iVar7 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar8 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar7 + 0x74) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar12->rotation).z = fVar2;
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 00454fb0  ns=mobyupdate_unsorted  size=0x5d0
// sig: undefined UpdateMoby_771(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00105c08 mobyutil::CollDamageMobyDirect; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001118d8 mobyutil::MB_getTarget; 00121740 partupd::SpawnPart_4; 004fff60 fastfunc::FastDecTimerS32

/* Moby 771 */

void mobyupdate_unsorted::UpdateMoby_771(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float *impact;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  ulonglong in_f31;
  
  lVar23 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x2b] = in_f31;
  puVar9[0x2a] = unaff_r31;
  bVar1 = moby->state;
  puVar9[0x29] = unaff_r30;
  impact = (float *)moby->pVar;
  puVar9[0x28] = unaff_r29;
  puVar9[0x27] = unaff_r28;
  puVar9[0x26] = unaff_r27;
  puVar9[0x25] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      *(float *)(puVar9 + 0xe) = fVar2;
      fVar4 = (moby->pos).z;
      *(float *)((int)puVar9 + 0x74) = fVar3;
      fVar5 = (moby->pos).w;
      fVar7 = impact[5];
      *(f32 *)(puVar9 + 0xf) = fVar4;
      *(f32 *)((int)puVar9 + 0x7c) = fVar5;
      if (fVar7 == 0.0) {
        mobyutil::MB_getTarget(0x4034000000000000,lVar23,&DAT_00454f78,uVar13 - 0xd0);
        if (*(float *)(puVar9 + 0x1a) != 0.0) {
          impact[5] = *(float *)(puVar9 + 0x1a);
        }
      }
      else {
        fVar2 = *(float *)((int)fVar7 + 0x10) - fVar2;
        fVar3 = *(float *)((int)fVar7 + 0x14) - fVar3;
        uVar18 = ZEXT48(&mobyutil::g_atanQuadrantTable);
        fVar6 = ABS(fVar2);
        fVar7 = ABS(fVar3);
        *(float *)(puVar9 + 0x1c) = fVar2;
        *(float *)((int)puVar9 + 0xe4) = fVar3;
        *(float *)(puVar9 + 0x1d) = fVar6 - fVar7;
        dVar25 = 0.0;
        uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar9 + 0x1c));
        if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
          fVar2 = fVar7;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
        fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        fVar11 = ABS(*(float *)((int)puVar9 + 0xe4));
        if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
          fVar11 = fVar6;
        }
        if (0.0 < fVar2) {
          lVar21 = uVar13 - 0x150;
          lVar20 = uVar13 - 0x74;
          lVar19 = uVar13 - 100;
          lVar24 = 2;
          fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
          fVar6 = fVar2 * fVar2;
          *(float *)(puVar9 + 0x1f) = fVar2;
          *(float *)(puVar9 + 0x1e) = fVar2;
          *(float *)((int)puVar9 + 0xf4) = fVar2;
          *(float *)((int)puVar9 + 0xec) = fVar2;
          fVar2 = fVar6 * fVar6;
          *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar6;
          *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar2;
          *(float *)(puVar9 + 0x1f) = *(float *)(puVar9 + 0x1f) * fVar2 * fVar6;
          do {
            *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
            iVar17 = (int)lVar20;
            lVar21 = lVar21 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar2 * fVar2;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          uVar18 = uVar13 - 0x74;
          pfVar22 = (float *)&DAT_007358e0;
          lVar20 = 4;
          uVar14 = uVar18;
          lVar19 = lVar15;
          do {
            fVar2 = *pfVar22;
            fVar6 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xec) * fVar2;
            lVar19 = lVar19 + 8;
            *(float *)((int)uVar14 + 4) = *(float *)((int)uVar14 + 4) * fVar6;
            uVar14 = uVar14 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar19 = 2;
          do {
            iVar17 = (int)lVar15;
            lVar15 = lVar15 + 0x10;
            iVar10 = (int)uVar18;
            uVar18 = uVar18 + 0x10;
            dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar17 + 0xec)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar3);
        }
        mobyutil::OrganicDeltAngSpeed
                  (dVar25,(double)impact[7],(double)impact[8],(double)impact[9],lVar23,uVar18,
                   impact + 10);
      }
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar3 = impact[1] * impact[1];
      lVar23 = lVar23 + 0x10;
      fVar7 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar7 = fVar2;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar2 = fVar6 * fVar6;
      fVar7 = fVar2 * fVar2 * fVar6;
      fVar11 = fVar2 * fVar7;
      fVar7 = (fVar2 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
              SQRT(*impact * *impact + fVar3);
      *impact = fVar7;
      fVar2 = (moby->rotation).z;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar11 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar11 = fVar6;
      }
      fVar2 = fVar11 * fVar11;
      fVar6 = fVar2 * fVar2 * fVar11;
      fVar12 = fVar2 * fVar6;
      impact[1] = (fVar2 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar6 * 0.0083330255 + fVar2 * fVar11 * -0.16666657 + fVar11) *
                  SQRT(fVar7 * fVar7 + fVar3);
      fVar2 = (moby->pos).z;
      (moby->pos).x = (moby->pos).x + fVar7;
      (moby->pos).y = (moby->pos).y + impact[1];
      fVar3 = impact[2];
      *(undefined4 *)((int)puVar9 + 0x8c) = 0;
      *(undefined4 *)(puVar9 + 0x11) = 0;
      *(undefined4 *)((int)puVar9 + 0x84) = 0;
      *(undefined4 *)(puVar9 + 0x10) = 0;
      (moby->pos).z = fVar2 + fVar3;
      iVar17 = mobyutil::MB_randRange(0xf,0x16);
      puVar9[0x22] = (longlong)iVar17;
      dVar25 = 0.5;
      puVar9[0x22] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar9[0x22] + 0.5))
      ;
      uVar8 = *(undefined4 *)((int)puVar9 + 0x114);
      uVar16 = mobyutil::MB_randRange(0x14,0x23);
      partupd::SpawnPart_4(lVar23,uVar13 - 0xe0,0x6f00afff,0xff,uVar8,0x28,uVar16,1);
      iVar17 = mobyutil::MB_randRange(0x1e,0x3c);
      puVar9[0x22] = (longlong)iVar17;
      puVar9[0x22] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar9[0x22] + dVar25));
      uVar8 = *(undefined4 *)((int)puVar9 + 0x114);
      uVar16 = mobyutil::MB_randRange(0x32,0x4b);
      partupd::SpawnPart_4(lVar23,uVar13 - 0xe0,0x1fffffff,0x4f4f4f,uVar8,0x28,uVar16,0);
      fVar2 = impact[4];
      *(float *)(puVar9 + 0xe) = *(float *)(puVar9 + 0xe) - *impact;
      *(float *)((int)puVar9 + 0x74) = *(float *)((int)puVar9 + 0x74) - impact[1];
      *(float *)(puVar9 + 0xf) = *(float *)(puVar9 + 0xf) - impact[2];
      iVar17 = collproc::CollLine(lVar23,uVar13 - 0xf0,0x10,fVar2,0);
      if ((iVar17 != 0) && (CollOutput.pMoby != (MobyInstance *)impact[4])) {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::CollDamageMobyDirect
                    (1.0,CollOutput.pMoby,moby,0x10001,0x10000,&CollOutput.ip.x,impact);
        }
        moby->state = '\x02';
      }
      iVar17 = fastfunc::FastDecTimerS32(impact + 6);
      if (iVar17 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    mobyutil::MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar23,lVar23 + 0x10,&DAT_00454f78,
               0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00455580  ns=mobyupdate_helpers  size=0x100
// sig: undefined M774_00455580(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M774_00455580(int param_1)

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
        if (((MVar1 == *(MOBY_OCLASSES *)(param_1 + 0xa6)) || (MVar1 == AGNOGG_BUCKWASH)) &&
           (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00873810;
          DAT_00a1bfa4 = DAT_00873810;
          DAT_00a1bfa8 = DAT_00873810;
          sVar2 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}



//==== 004556e0  ns=mobyupdate_unsorted  size=0xcc4
// sig: undefined UpdateMoby_774(MobyInstance * moby)
// callers(0): 
// callees(20): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 001523d8 respawn::SaveCheckpointMobyVar; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658220: 'Water Pump Worker' | 00658238: 'Big Turret Guy' | 00658248: 'Mystery 774'

/* Moby 774 */

void mobyupdate_unsorted::UpdateMoby_774(MobyInstance *moby)

{
  u8 uVar1;
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
  lVar16 = uVar13 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar13;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x23] = unaff_r30;
  puVar10[0x24] = unaff_r31;
  pvVar9 = moby->pVar;
  uVar24 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        MVar8 = ((MobyInstance *)puVar23[0x5e])->oClass;
        if (((MVar8 == moby->oClass) || (MVar8 == AGNOGG_BUCKWASH)) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar23[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00873810;
          DAT_00a1bfa4 = DAT_00873810;
          DAT_00a1bfa8 = DAT_00873810;
          sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 32.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x1a';
  }
  uVar1 = moby->state;
  if (uVar1 != '\x06') {
    if (uVar1 == '\x05') {
      if (g_gameMode != GAME_MODE_SCENE) {
        if (*(short *)((int)pvVar9 + 6) == 2) {
          g_heroPosition.z = 46.0;
          g_heroPosition.x = 130.5;
          g_heroPosition.y = 299.5;
          moby->state = '\x06';
        }
        else {
          moby->state = '\x04';
        }
      }
    }
    else if (uVar1 == '\x04') {
      iVar17 = FUN_004d3870(moby,uVar24);
      if (iVar17 != 0) {
        moby->state = '\x05';
        *(undefined1 *)((int)pvVar9 + 8) = 0;
      }
    }
    else {
      if (uVar1 == '\x03') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (uVar1 == '\x02') {
        if (g_gameMode != GAME_MODE_SCENE) {
          if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
            mobyfunc::SetLevelFlag();
            iVar17 = *(int *)((int)pvVar9 + 0x4c);
            if (iVar17 != -1) {
              respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar17].pos,(Vec4 *)&Cuboids[iVar17].rot);
            }
          }
          moby->state = '\x01';
          if (*(short *)((int)pvVar9 + 4) == 4) {
            mobyutil::MB_UnlockLevel(Aridia);
            mobyutil::MB_ToastMessageByIndex(2);
            moby->state = '\x03';
            respawn::SaveCheckpointMobyVar(&moby->state,1,moby,1,(int *)&DAT_00a53560);
            memcard::memcard_Save(0,-1);
          }
        }
      }
      else if (uVar1 == '\x01') {
        iVar17 = FUN_004d3870(moby,uVar24);
        if (iVar17 != 0) {
          mobyutil::MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
          moby->state = '\x02';
        }
      }
      else if (uVar1 == '\0') {
        moby->updateDistance = -1;
        *(undefined4 *)((int)pvVar9 + 0x44) = 0;
        if (Level == Novalis) {
          if (g_SeenPlanets.Aridia != '\0') {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          *(char **)((int)pvVar9 + 0x20) = "Water Pump Worker";
          moby->state = '\x01';
        }
        else if (Level == Batalia) {
          *(char **)((int)pvVar9 + 0x20) = "Big Turret Guy";
          moby->state = '\x04';
        }
        else {
          *(char **)((int)pvVar9 + 0x20) = "Mystery 774";
          moby->state = '\a';
        }
        FUN_004d3720(moby,uVar24);
      }
    }
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00456300;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00455dac:
    if (*(int *)((int)pvVar9 + 0x164) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x164) = 0;
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
    *(float *)(puVar10 + 0x11) = fVar3;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x6c;
      lVar19 = uVar13 - 0x7c;
      lVar25 = 2;
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
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar13 - 0x7c;
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
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_00455dac;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar24 + 0x164);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x20,0x455680);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x164,uVar24
                         );
      *(undefined4 *)((int)pvVar9 + 0x164U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x168);
  if (iVar17 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x168) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x164) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x150);
    fVar3 = *(float *)((int)pvVar9 + 0x154);
    fVar5 = *(float *)((int)pvVar9 + 0x158);
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
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar32) - ABS(dVar30));
  dVar31 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar28 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = dVar31;
  if (0.0 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar19 = uVar13 - 0x9c;
    lVar22 = uVar13 - 0x8c;
    lVar25 = 2;
    fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
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
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0x9c;
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
      lVar15 = lVar15 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar28 = (double)fastfunc::FastDiffRots(dVar27,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar29;
  fVar2 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar30 * dVar30)));
  dVar30 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar30 - ABS(dVar29));
  uVar14 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar31 < 0.0) {
    dVar26 = ABS(dVar29);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar22 = uVar13 - 0xac;
    lVar19 = uVar13 - 0xbc;
    lVar25 = 2;
    fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
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
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xbc;
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
      iVar12 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar3 + fVar2);
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
  *(float *)((int)pvVar9 + 0xb8) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar9 + 0x138) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar9 + 0xb4) = (float)(dVar29 * 1.25);
LAB_00456300:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x50,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xd0,1);
  return;
}



//==== 004563a4  ns=mobyupdate_helpers  size=0xc0
// sig: undefined M775_004563a4(void)
// callers(0): 
// callees(2): 00112e18 mobyutil::MB_UnlockItem; 005cd098 libc::printf
// strings: 00658254: "WARNING! - Moby 774 wasn't expecting a M774_ShipChallengeDone call.  Please tell Jason you saw this.\n"

undefined4 * mobyupdate_helpers::M775_004563a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) == '\x06' || *(char *)(param_1 + 0x20) == '\x04') {
    if (param_2 == 0) {
      *(undefined2 *)(iVar1 + 2) = 5;
    }
    else {
      *(undefined2 *)(iVar1 + 2) = 6;
      mobyutil::MB_UnlockItem(0x1b,1);
    }
    puVar2 = &hero::g_heroMtx;
    g_heroPosition.x = 128.6;
    g_heroPosition.z = 39.8;
    g_heroPosition.y = 316.0;
    *(undefined1 *)(iVar1 + 8) = 1;
    *(undefined1 *)(param_1 + 0x20) = 4;
  }
  else {
    puVar2 = (undefined4 *)
             libc::printf(
                         "WARNING! - Moby 774 wasn\'t expecting a M774_ShipChallengeDone call.  Please tell Jason you saw this.\n"
                         );
  }
  return puVar2;
}



//==== 00456464  ns=mobyupdate_helpers  size=0x14
// sig: undefined M775_00456464(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M775_00456464(void)

{
  DAT_00873860 = 0x10000;
  return;
}



//==== 00456478  ns=Global  size=0xd0
// sig: undefined FUN_00456478(void)
// callers(9): 00097370 hero::Hero_SpawnWaterSplash; 0010b030 mobyutil::MB_UpdateKick; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00297798 mobyupdate_unsorted::UpdateMoby_1546; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 00342db8 mobyupdate_unsorted::UpdateMoby_327_BataliaOcean; 00352e88 mobyupdate_helpers::M35_00352e88; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0045c680 mobyupdate_unsorted::UpdateMoby_787
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_00456478(double param_1,f32 *param_2)

{
  MobyInstance *pMVar1;
  double dVar2;
  
  pMVar1 = mobyfunc::CreateMoby(SPLASH_EFFECT);
  if (pMVar1 != (MobyInstance *)0x0) {
    mobyutil::MB_CopyHeroLights(pMVar1);
    mobyfunc::SetColorOfMoby(pMVar1,0x28,0x28,0x46);
    pMVar1->updateDistance = -1;
    pMVar1->drawDistance = 0x40;
    pMVar1->scale = (float)((double)pMVar1->scale * param_1);
    (pMVar1->pos).x = *param_2;
    (pMVar1->pos).y = param_2[1];
    (pMVar1->pos).z = param_2[2];
    (pMVar1->pos).w = param_2[3];
    dVar2 = (double)mobyutil::MB_randRot();
    (pMVar1->rotation).z = (float)dVar2;
    mobyfunc::UpdateMobyTransform(pMVar1);
  }
  return pMVar1;
}



//==== 00456550  ns=mobyupdate_unsorted  size=0x5c
// sig: undefined UpdateMoby_775(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 775 */

void mobyupdate_unsorted::UpdateMoby_775(MobyInstance *moby)

{
  byte bVar1;
  
  bVar1 = moby->alpha - 3;
  moby->alpha = bVar1;
  moby->scale = moby->scale * 1.025;
  if (bVar1 < 4) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 004565b8  ns=mobyupdate_helpers  size=0x98
// sig: undefined M776_004565b8(void)
// callers(1): 00456fe0 mobyupdate_unsorted::UpdateMoby_776
// callees(0): 

void mobyupdate_helpers::M776_004565b8(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 in_r0;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    auVar4 = loadVectorLeftIndexed(in_r0,0x4565b0);
    puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    do {
      auVar5 = loadVectorLeftIndexed(0x388c,0x870000);
      auVar6 = ZEXT416(0xffffffff);
      auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar5,0);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar6 = vectorAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar5);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xff;
      cVar2 = storeVectorElementByteIndexed
                        (auVar6 | auVar6 << 8 | auVar6 << 0x10 | auVar6 << 0x18 | auVar6 << 0x20 |
                         auVar6 << 0x28 | auVar6 << 0x30 | auVar6 << 0x38 | auVar6 << 0x40 |
                         auVar6 << 0x48 | auVar6 << 0x50 | auVar6 << 0x58 | auVar6 << 0x60 |
                         auVar6 << 0x68 | auVar6 << 0x70 | auVar6 << 0x78,0xbc,
                         ZEXT48(MobyInstance + (*puVar3 & 0x7fff)));
      MobyInstance[*puVar3 & 0x7fff].setByGroup = cVar2;
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 00456650  ns=mobyupdate_helpers  size=0x60
// sig: undefined M776_00456650(void)
// callers(1): 00456fe0 mobyupdate_unsorted::UpdateMoby_776
// callees(0): 

void mobyupdate_helpers::M776_00456650(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      if (MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 004566e8  ns=mobyupdate_helpers  size=0x88c
// sig: undefined M776_004566e8(void)
// callers(1): 00456fe0 mobyupdate_unsorted::UpdateMoby_776
// callees(12): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M776_004566e8(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  float fVar14;
  undefined4 uVar17;
  float *pfVar18;
  longlong lVar15;
  longlong lVar16;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar16 = uVar25 - 0x100;
  puVar13 = (ulonglong *)lVar16;
  *puVar13 = uVar25;
  puVar13[0x22] = in_LR;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r30;
  puVar13[0x1e] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar26 = ZEXT48(pvVar6);
  iVar19 = *(int *)((int)pvVar6 + 0x38);
  puVar13[0x1c] = unaff_r29;
  if (iVar19 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x184) = uVar17;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar26 + 0x184);
  if (param_1->state != '\x11') {
    pfVar18 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,pfVar18,uVar26 + 0x20,5,puVar13 + 0xe,0,0,4);
    if (pfVar18 != (float *)0x0) {
      uVar10 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar18[0xb] >> 0x1f;
      fVar2 = pfVar18[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar18[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar10)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        auVar32 = loadVectorLeftIndexed(0x20,0x4566b0);
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x26,uVar26);
        *(undefined2 *)((int)pvVar6 + 0x26) = uVar12;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
      }
      else {
        MVar5 = param_1->modeBits;
        dVar28 = 0.0;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\f') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(param_1,0xc,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\x11';
        fVar2 = DAT_0071f418 * 26.0;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = mobyutil::g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        if (((uint)pfVar18[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar18;
          fVar7 = (param_1->pos).y - pfVar18[1];
          dVar31 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar7);
          *(float *)((int)puVar13 + 0x74) = fVar2;
          *(float *)(puVar13 + 0xf) = fVar7;
          *(float *)((int)puVar13 + 0x7c) = (float)(dVar31 - dVar30);
          uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1d) & 4;
          uVar23 = uVar20 << 2;
          dVar29 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar23);
          dVar30 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar29) {
            lVar15 = uVar25 - 0xf0;
            lVar24 = uVar25 - 0x6c;
            lVar21 = uVar25 - 0x7c;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x12) = fVar3;
            *(float *)(puVar13 + 0x11) = fVar3;
            *(float *)((int)puVar13 + 0x8c) = fVar3;
            *(float *)((int)puVar13 + 0x84) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x11) = *(float *)(puVar13 + 0x11) * fVar4;
            *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar3;
            *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x74) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x7c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0x84) = *(float *)((int)lVar15 + 0x84) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0x84)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        else {
          fVar2 = pfVar18[4];
          fVar7 = pfVar18[5];
          dVar30 = ABS((double)pfVar18[4]);
          dVar29 = ABS((double)pfVar18[5]);
          uVar23 = ZEXT48(&mobyutil::g_atanQuadrantTable);
          *(float *)(puVar13 + 0x10) = (float)(dVar30 - dVar29);
          uVar20 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar31 = dVar30;
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar15 = uVar25 - 0xf0;
            lVar24 = uVar25 - 0x4c;
            lVar21 = uVar25 - 0x5c;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x16) = fVar3;
            *(float *)(puVar13 + 0x15) = fVar3;
            *(float *)((int)puVar13 + 0xac) = fVar3;
            *(float *)((int)puVar13 + 0xa4) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar4;
            *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar3;
            *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0x94) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar21 = lVar21 + 8;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar21 = 4;
            uVar25 = uVar25 - 0x5c;
            pfVar18 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            uVar23 = uVar25;
            do {
              fVar3 = *pfVar18;
              fVar4 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar15 + 0xa4) = *(float *)((int)lVar15 + 0xa4) * fVar3;
              lVar15 = lVar15 + 8;
              *(float *)((int)uVar23 + 4) = *(float *)((int)uVar23 + 4) * fVar4;
              uVar23 = uVar23 + 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            lVar15 = 2;
            do {
              iVar19 = (int)lVar16;
              iVar8 = (int)uVar25;
              lVar16 = lVar16 + 0x10;
              uVar25 = uVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xa4)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        mobyutil::MB_StartKick(dVar28,param_1,uVar26 + 0x60,uVar23,0xc,1,0);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        mobyutil::MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar22 = &DAT_004566b0;
    fVar2 = 42.0;
  }
  else if (*(int *)((int)pvVar6 + 0x184) == 0) {
    puVar22 = (undefined4 *)(uint)param_1->state;
    if (param_1->state == 1) {
      fVar2 = *(float *)((int)pvVar6 + 0x188);
    }
    else {
      fVar2 = *(float *)((int)pvVar6 + 0x178);
    }
  }
  else {
    puVar22 = &DAT_004566b0;
    fVar2 = *(float *)((int)pvVar6 + 0x178) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x180) = fVar2;
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    iVar19 = mobyutil::MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    if (iVar19 != 2) {
      iVar8 = *(int *)((int)pvVar6 + 0x194);
      fVar2 = g_heroPosition.y - Cuboids[iVar8].pos.y;
      fVar7 = g_heroPosition.x - Cuboids[iVar8].pos.x;
      fVar3 = g_heroPosition.z - Cuboids[iVar8].pos.z;
      fVar14 = Cuboids[iVar8].imatrix.v2.x * fVar3 +
               Cuboids[iVar8].imatrix.v0.x * fVar7 + Cuboids[iVar8].imatrix.v1.x * fVar2;
      fVar4 = Cuboids[iVar8].imatrix.v2.y * fVar3 +
              Cuboids[iVar8].imatrix.v0.y * fVar7 + Cuboids[iVar8].imatrix.v1.y * fVar2;
      fVar2 = Cuboids[iVar8].imatrix.v2.z * fVar3 +
              Cuboids[iVar8].imatrix.v0.z * fVar7 + Cuboids[iVar8].imatrix.v1.z * fVar2;
      if (((((fVar14 <= -1.0) || (0.0 <= fVar14)) || (fVar4 <= -1.0)) ||
          ((1.0 <= fVar4 || (fVar2 <= -1.0)))) || (1.0 <= fVar2)) {
        *(undefined4 *)((int)pvVar6 + 0x104) = 2;
      }
    }
  }
  else {
    bVar1 = param_1->state == '\x01';
    if ((bVar1) && (-1 < *(int *)((int)pvVar6 + 0x18c))) {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x18c)];
      iVar19 = mobyutil::MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
    else if ((bVar1) || (*(int *)((int)pvVar6 + 0x17c) < 0)) {
      iVar19 = mobyutil::MB_getTarget(param_1,puVar22,uVar26 + 0xc0);
    }
    else {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x17c)];
      iVar19 = mobyutil::MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
  }
  if ((iVar19 != 2) &&
     ((fVar2 = *(float *)((int)pvVar6 + 0x134) - *(float *)((int)pvVar6 + 0xc4),
      fVar7 = *(float *)((int)pvVar6 + 0x130) - *(float *)((int)pvVar6 + 0xc0),
      *(float *)((int)pvVar6 + 0x180) < SQRT(fVar7 * fVar7 + fVar2 * fVar2) ||
      (param_1->enabled == '\0')))) {
    *(undefined4 *)((int)pvVar6 + 0x104) = 2;
  }
  if (*(int *)((int)pvVar6 + 0x100) == 0) {
    *(MobyInstance **)((int)pvVar6 + 0x100) = g_heroMobyPtr;
  }
  return;
}



//==== 00456fe0  ns=mobyupdate_unsorted  size=0x18b8
// sig: undefined UpdateMoby_776(MobyInstance * moby)
// callers(0): 
// callees(28): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100ef8 mobyutil::MB_MoveAndCollide2; 00106150 mobyutil::MB_RegisterLameShadow; 00109c30 mobyutil::OrganicDelt; 00109ec0 mobyutil::DeltAng; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110488 mobyutil::ClampVec3Magnitude; 004565b8 mobyupdate_helpers::M776_004565b8; 00456650 mobyupdate_helpers::M776_00456650; 004566e8 mobyupdate_helpers::M776_004566e8; 004fff60 fastfunc::FastDecTimerS32; 00500060 fastfunc::FastDecTimerS8; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338

/* Moby 776 */

void mobyupdate_unsorted::UpdateMoby_776(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  u8 uVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  f32 fVar9;
  undefined4 uVar10;
  MobyModeBit MVar11;
  void *pvVar12;
  Spline *pSVar13;
  Cuboid *pCVar14;
  float fVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  int unused1;
  int in_r5;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  float fVar33;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [64];
  undefined1 local_c0 [48];
  float local_90;
  float local_8c;
  longlong local_88;
  
  lVar16 = (longlong)(int)moby;
  pvVar12 = moby->pVar;
  uVar21 = ZEXT48(pvVar12);
  mobyupdate_helpers::M776_004566e8();
  dVar25 = 1.0;
  iVar18 = *(int *)((int)pvVar12 + 0x100);
  moby->unk58 = 1.0;
  dVar24 = 0.5;
  mobyutil::MB_RegisterLameShadow(0.5,moby);
  bVar3 = moby->state;
  bVar4 = moby->animationId;
  if (bVar3 < 9) {
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        *(undefined4 *)((int)pvVar12 + 0x30) = 0x3e800000;
        *(undefined4 *)((int)pvVar12 + 0x20) = 0x3f800000;
        *(undefined1 *)((int)pvVar12 + 0x28) = 0;
        *(undefined1 *)((int)pvVar12 + 0x29) = 1;
        *(undefined2 *)((int)pvVar12 + 0x24) = 1;
        fVar6 = (moby->pos).x;
        MVar11 = moby->modeBits;
        *(f32 *)((int)pvVar12 + 0x130) = fVar6;
        fVar7 = (moby->pos).y;
        *(f32 *)((int)pvVar12 + 0x134) = fVar7;
        fVar8 = (moby->pos).z;
        moby->modeBits = MVar11 | CAN_BE_AUTO_TARGETED;
        *(f32 *)((int)pvVar12 + 0x138) = fVar8;
        fVar9 = (moby->pos).w;
        iVar18 = *(int *)((int)pvVar12 + 0x174);
        *(f32 *)((int)pvVar12 + 0x13c) = fVar9;
        *(f32 *)((int)pvVar12 + 0x140) = fVar6;
        *(f32 *)((int)pvVar12 + 0x144) = fVar7;
        *(f32 *)((int)pvVar12 + 0x148) = fVar8;
        *(f32 *)((int)pvVar12 + 0x14c) = fVar9;
        if (iVar18 < 1) {
          if (-1 < iVar18) {
            moby->state = '\x06';
            uVar5 = moby->animationId;
            (moby->pos).z = (moby->pos).z + 2.0;
            if (uVar5 != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else if (iVar18 < 2) {
          moby->state = '\x01';
        }
        else if (iVar18 < 3) {
          moby->state = '\r';
          uVar5 = moby->animationId;
          (moby->pos).z = Cuboids[*(int *)((int)pvVar12 + 0x194)].pos.z;
          if (uVar5 != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar3 < 2) {
        if (((*(int *)((int)pvVar12 + 0x104) != 2) || (*(int *)((int)pvVar12 + 0x174) == 0)) &&
           (moby->state = '\x02', bVar4 != 1)) {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else if (bVar3 < 3) {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
          if (moby->animationId != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        moby->unk58 = 4.0;
        fVar33 = mobyutil::OrganicDelt
                           (*(float *)((int)pvVar12 + 0x138) + 2.0,DAT_0071f418 * 18.0,
                            DAT_0071f418 * 18.0,mobyutil::g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                            (float *)((int)pvVar12 + 0x128));
        if (fVar33 == 0.0) {
          moby->state = ((byte)((LZCOUNT(-*(int *)((int)pvVar12 + 0x174)) << 0x3a) >> 0x3f) & 2) + 4
          ;
        }
      }
    }
    else if (bVar3 < 6) {
      if (bVar3 < 5) {
        moby->unk58 = 4.0;
        iVar18 = *(int *)((int)pvVar12 + 0x158);
        pSVar13 = Splines[*(int *)((int)pvVar12 + 0x150)];
        dVar29 = (double)pSVar13->points[iVar18].y;
        dVar30 = (double)pSVar13->points[iVar18].x;
        fVar33 = (float)(dVar29 - (double)(moby->pos).y);
        dVar28 = (double)pSVar13->points[iVar18].z;
        dVar27 = (double)pSVar13->points[iVar18].w;
        local_90 = SQRT(*(float *)((int)pvVar12 + 0x128) * *(float *)((int)pvVar12 + 0x128) +
                        *(float *)((int)pvVar12 + 0x120) * *(float *)((int)pvVar12 + 0x120) +
                        *(float *)((int)pvVar12 + 0x124) * *(float *)((int)pvVar12 + 0x124));
        fVar1 = (float)(dVar30 - (double)(moby->pos).x);
        fVar2 = (float)(dVar28 - (double)(moby->pos).z);
        dVar26 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33);
        uVar23 = 0;
        local_8c = 0.0;
        dVar22 = (double)FUN_005e8338();
        mobyutil::OrganicDeltAng
                  ((float)dVar22,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
                   mobyutil::g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar12 + 0x170));
        dVar22 = (double)FUN_005e8338((double)(float)(dVar30 - (double)(moby->pos).x),
                                      (double)(float)(dVar29 - (double)(moby->pos).y));
        dVar22 = (double)fastfunc::FastSubRots((float)dVar22,(moby->rotation).z);
        if (0.7853981852531433 <= dVar22) {
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
        }
        else {
          mobyutil::OrganicDelt
                    ((float)dVar26,DAT_0071f418 * 20.0,DAT_0071f418 * 20.0,
                     mobyutil::g_FrameTime * 20.0,&local_8c,0x720000,&local_90);
          *(float *)((int)pvVar12 + 0x120) = (float)(dVar30 - (double)(moby->pos).x);
          *(float *)((int)pvVar12 + 0x124) = (float)(dVar29 - (double)(moby->pos).y);
          fVar33 = (moby->pos).z;
          *(float *)((int)pvVar12 + 300) = (float)dVar27;
          *(float *)((int)pvVar12 + 0x128) = (float)(dVar28 - (double)fVar33);
          mobyutil::ClampVec3Magnitude((double)local_90,(Vec4 *)((int)pvVar12 + 0x120));
        }
        mobyutil::MB_MoveAndCollide2(dVar24,uVar23,lVar16,uVar21 + 0x120);
        if (dVar26 < dVar25) {
          iVar18 = *(int *)((int)pvVar12 + 0x158);
          iVar20 = iVar18 + 1;
          *(int *)((int)pvVar12 + 0x158) = iVar20;
          if ((int)Splines[*(int *)((int)pvVar12 + 0x150)]->points[iVar18].w < 1) {
            if (iVar20 == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
              moby->state = '\x06';
              mobyutil::GetGroundZ(dVar24,lVar16 + 0x10,0);
              *(float *)((int)pvVar12 + 0x130) = CollOutput.ip.x;
              *(float *)((int)pvVar12 + 0x134) = CollOutput.ip.y;
              *(float *)((int)pvVar12 + 0x138) = CollOutput.ip.z;
              *(float *)((int)pvVar12 + 0x13c) = CollOutput.ip.w;
              *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
              *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
              *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
              *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
            }
          }
          else {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar16,6,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        mobyutil::OrganicDeltAng
                  ((float)dVar25,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
                   mobyutil::g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar12 + 0x170));
        if ((moby->field43_0x70 & 2U) != 0) {
          lVar17 = fastfunc::FastDoubleToInt
                             ((double)Splines[*(int *)((int)pvVar12 + 0x150)]->points
                                      [*(int *)((int)pvVar12 + 0x158) + -1].w);
          if (MobyInstance + *(int *)((int)pvVar12 + (int)(lVar17 << 2) + 0x15c) !=
              (MobyInstance *)0x0) {
            mobyupdate_helpers::M776_00456650();
          }
          if (*(int *)((int)pvVar12 + 0x158) == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
            moby->state = '\x06';
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
            mobyutil::GetGroundZ(dVar24,lVar16 + 0x10,0);
            *(float *)((int)pvVar12 + 0x130) = CollOutput.ip.x;
            *(float *)((int)pvVar12 + 0x134) = CollOutput.ip.y;
            *(float *)((int)pvVar12 + 0x138) = CollOutput.ip.z;
            *(float *)((int)pvVar12 + 0x13c) = CollOutput.ip.w;
            *(f32 *)((int)pvVar12 + 0x140) = (moby->pos).x;
            *(f32 *)((int)pvVar12 + 0x144) = (moby->pos).y;
            *(f32 *)((int)pvVar12 + 0x148) = (moby->pos).z;
            *(f32 *)((int)pvVar12 + 0x14c) = (moby->pos).w;
          }
          else {
            moby->state = '\x04';
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
    }
    else if (6 < bVar3) {
      if (bVar3 < 8) {
        iVar20 = *(int *)((int)pvVar12 + 0x104);
        dVar24 = 4.0;
        moby->unk58 = 4.0;
        if (((iVar20 == 2) ||
            (fVar33 = (moby->pos).y - *(float *)(iVar18 + 0x14),
            fVar1 = (moby->pos).x - *(float *)(iVar18 + 0x10),
            SQRT(fVar1 * fVar1 + fVar33 * fVar33) <= 3.0)) ||
           (iVar18 = fastfunc::FastDecTimerS8(lVar16 + 0xbc), iVar18 == 0)) {
          iVar18 = fastfunc::FastDecTimerS32(uVar21 + 0x198);
          if (iVar18 != 0) {
            dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar24,6.0);
            dVar25 = (double)mobyutil::MB_randRot();
            dVar22 = (double)mathfunc::cosf((float)dVar25);
            dVar25 = (double)FUN_005e8128(dVar25);
            dVar26 = (double)mobyutil::MB_randRangeFloat(1.5,2.5);
            fVar33 = (float)(dVar26 + (double)*(float *)((int)pvVar12 + 0x138));
            *(float *)((int)pvVar12 + 0x140) =
                 (float)(dVar22 * dVar24 + (double)*(float *)((int)pvVar12 + 0x130));
            *(float *)((int)pvVar12 + 0x144) =
                 (float)(dVar25 * dVar24 + (double)*(float *)((int)pvVar12 + 0x134));
            *(float *)((int)pvVar12 + 0x148) = fVar33;
            *(float *)((int)pvVar12 + 0x14c) = fVar33;
            moby->state = '\x06';
          }
        }
        else {
          if (moby->group != -1) {
            mobyupdate_helpers::M776_004565b8(lVar16);
          }
          moby->state = '\t';
          if (moby->animationId != '\a') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        uVar31 = 0;
        mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,(uint)bVar4,
                          in_r5,0);
        uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar16);
        dVar25 = (double)mathfunc::cosf((moby->rotation).z);
        dVar27 = 6.0;
        *(float *)((int)pvVar12 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar25);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        dVar26 = (double)mobyutil::g_FrameTime;
        dVar25 = (double)(float)(dVar26 * dVar27);
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(float *)((int)pvVar12 + 0x124) = (float)(dVar25 * dVar22);
        dVar27 = 2.0;
        dVar22 = (double)((*(float *)((int)pvVar12 + 0x138) + 2.0) - (moby->pos).z);
        if ((dVar22 <= dVar25) &&
           (dVar26 = (double)(float)(dVar26 * -6.0), dVar25 = dVar22, dVar22 < dVar26)) {
          dVar25 = dVar26;
        }
        *(float *)((int)pvVar12 + 0x128) = (float)dVar25;
        mobyutil::MB_MoveAndCollide2(dVar24,uVar31,lVar16,uVar21 + 0x120);
        fVar33 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
        fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
        if ((double)SQRT(fVar1 * fVar1 + fVar33 * fVar33) < dVar27) {
          moby->state = '\x06';
        }
      }
    }
  }
  else if (bVar3 < 0xe) {
    if (bVar3 < 0xb) {
      if (bVar3 < 10) {
        uVar23 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_00456f74,uVar21 + 0x170);
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\n';
          if (moby->animationId != '\x05') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
          }
          uVar21 = mobyutil::MB_randInt(0xff);
          uVar10 = 0xbe860a92;
          if ((uVar21 & 1) != 0) {
            uVar10 = 0x3e860a92;
          }
          *(undefined4 *)((int)pvVar12 + 400) = uVar10;
        }
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
        uVar23 = fastfunc::FastWrapRot((float)dVar25,*(float *)((int)pvVar12 + 400));
        iVar20 = (int)pvVar12 + 0x170;
        dVar25 = 6.2831854820251465;
        mobyutil::OrganicDeltAngSpeed
                  (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar16);
        fVar15 = mobyutil::g_FrameTime;
        fVar33 = (float)((double)*(float *)(iVar18 + 0x18) + dVar24);
        fVar1 = (moby->pos).z;
        fVar2 = *(float *)(iVar18 + 0x14);
        uVar10 = *(undefined4 *)(iVar18 + 0x1c);
        lVar17 = uVar21 + 0x120;
        *(float *)((int)pvVar12 + 0x120) = *(float *)(iVar18 + 0x10) - (moby->pos).x;
        if (fVar33 - fVar1 < 0.0) {
          fVar1 = -((fVar1 - fVar33) * 4.0 - fVar33);
        }
        *(float *)((int)pvVar12 + 0x124) = fVar2 - (moby->pos).y;
        fVar33 = (moby->pos).z;
        *(undefined4 *)((int)pvVar12 + 300) = uVar10;
        *(float *)((int)pvVar12 + 0x128) = fVar1 - fVar33;
        FUN_005e7f98((double)(fVar15 * 10.0),lVar17,lVar17);
        dVar22 = (double)mathfunc::cosf((moby->rotation).z);
        *(float *)((int)pvVar12 + 0x120) =
             (float)(dVar22 * (double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                           *(float *)((int)pvVar12 + 0x120) +
                                           *(float *)((int)pvVar12 + 0x124) *
                                           *(float *)((int)pvVar12 + 0x124)));
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        *(float *)((int)pvVar12 + 0x124) =
             (float)(dVar22 * (double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                           *(float *)((int)pvVar12 + 0x120) +
                                           *(float *)((int)pvVar12 + 0x124) *
                                           *(float *)((int)pvVar12 + 0x124)));
        mobyutil::MB_MoveAndCollide2(dVar24,0,lVar16);
        unused1 = (int)lVar17;
        dVar24 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar12 + 0x120) *
                                                   *(float *)((int)pvVar12 + 0x120) +
                                                   *(float *)((int)pvVar12 + 0x124) *
                                                   *(float *)((int)pvVar12 + 0x124)),
                                      (double)*(float *)((int)pvVar12 + 0x128));
        mobyutil::DeltAng((float)-dVar24,(float)((double)mobyutil::g_FrameTime * dVar25),
                          &(moby->rotation).y,unused1,iVar20,0);
        fVar33 = (moby->pos).y - *(float *)(iVar18 + 0x14);
        fVar1 = (moby->pos).x - *(float *)(iVar18 + 0x10);
        if (DAT_00873888 <= SQRT(fVar1 * fVar1 + fVar33 * fVar33)) {
          if (*(int *)((int)pvVar12 + 0x104) == 2) {
            if (moby->animationId != '\x05') {
              local_88 = (longlong)(int)(animationSpeed * 20.5);
              mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 20.5));
            }
            moby->state = '\b';
          }
        }
        else {
          moby->state = '\v';
          *(undefined4 *)((int)pvVar12 + 300) = 0;
          *(undefined4 *)((int)pvVar12 + 0x128) = 0;
          *(undefined4 *)((int)pvVar12 + 0x124) = 0;
          *(undefined4 *)((int)pvVar12 + 0x120) = 0;
          if (moby->animationId != '\r') {
            local_88 = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation(lVar16,0xd,4,(int)(animationSpeed * 5.5));
          }
        }
      }
    }
    else if (bVar3 < 0xc) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\f', bVar4 != 0xe)) {
        local_88 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar16,0xe,4,(int)(animationSpeed * 5.5));
      }
    }
    else if (bVar3 < 0xd) {
      uVar23 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar16,&DAT_00720000,uVar21 + 0x170);
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      mobyfunc::GetBonePosition(lVar16,0,auStack_110);
      collproc::CollMobySphere(0x3fc99999a0000000,auStack_110);
      if ((*(int *)((int)pvVar12 + 0x104) == 2) || ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x05') {
          local_88 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 20.5));
        }
        moby->state = '\b';
      }
    }
    else {
      uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 0.7853982),lVar16);
      dVar25 = (double)mathfunc::cosf((moby->rotation).z);
      dVar26 = 4.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar25);
      dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)mobyutil::g_FrameTime;
      lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
      *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar22 * dVar26) * dVar25);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      fVar33 = (float)(dVar22 * 6.0);
      fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
      if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar22 * -6.0))) {
        fVar33 = (float)(dVar22 * -6.0);
      }
      *(float *)((int)pvVar12 + 0x128) = fVar33;
      mobyutil::MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
      if ((*(int *)((int)pvVar12 + 0x104) != 2) &&
         (iVar18 = fastfunc::FastDecTimerS8(lVar16 + 0xbc), iVar18 != 0)) {
        if (moby->group != -1) {
          mobyupdate_helpers::M776_004565b8(lVar16);
        }
        moby->state = '\x0e';
        if (moby->animationId != '\x05') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar3 < 0x10) {
    if (bVar3 < 0xf) {
      pCVar14 = Cuboids + *(int *)((int)pvVar12 + 0x194);
      if (moby->group != -1) {
        mobyupdate_helpers::M776_004565b8(lVar16);
      }
      dVar30 = (double)((pCVar14->pos).x + (pCVar14->matrix).v0.x);
      dVar29 = (double)((pCVar14->pos).y + (pCVar14->matrix).v0.y);
      dVar28 = (double)((pCVar14->pos).z + (pCVar14->matrix).v0.z);
      uVar23 = FUN_005e8338((double)(float)(dVar30 - (double)(moby->pos).x),
                            (double)(float)(dVar29 - (double)(moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 3.1415927),lVar16);
      dVar22 = (double)mathfunc::cosf((moby->rotation).z);
      dVar27 = 4.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar22);
      dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar26 = (double)mobyutil::g_FrameTime;
      lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
      *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar26 * dVar27) * dVar22);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
      fVar33 = (float)(dVar26 * 6.0);
      if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar26 * -6.0))) {
        fVar33 = (float)(dVar26 * -6.0);
      }
      *(float *)((int)pvVar12 + 0x128) = fVar33;
      mobyutil::MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
      fVar33 = (float)((double)(moby->pos).y - dVar29);
      fVar1 = (float)((double)(moby->pos).x - dVar30);
      fVar2 = (float)((double)(moby->pos).z - dVar28);
      if (((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33) < dVar25) &&
         (moby->state = '\x0f', moby->animationId != '\t')) {
        local_88 = (longlong)(int)(animationSpeed * 2.5);
        mobyutil::MB_SetAnimation(lVar16,9,0,(int)(animationSpeed * 2.5));
      }
    }
    else {
      if (moby->group != -1) {
        mobyupdate_helpers::M776_004565b8(lVar16);
      }
      pCVar14 = Cuboids + *(int *)((int)pvVar12 + 0x194);
      dVar32 = (double)((pCVar14->pos).x - (pCVar14->matrix).v0.x);
      dVar30 = (double)((pCVar14->pos).y - (pCVar14->matrix).v0.y);
      dVar29 = (double)((pCVar14->pos).z - (pCVar14->matrix).v0.z);
      uVar23 = FUN_005e8338((double)(float)(dVar32 - (double)(moby->pos).x),
                            (double)(float)(dVar30 - (double)(moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar23,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar16);
      dVar22 = (double)mathfunc::cosf((moby->rotation).z);
      dVar28 = 6.0;
      *(float *)((int)pvVar12 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar22);
      dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar27 = (double)mobyutil::g_FrameTime;
      dVar22 = (double)(float)(dVar27 * dVar28);
      *(float *)((int)pvVar12 + 0x124) = (float)(dVar22 * dVar26);
      *(undefined4 *)((int)pvVar12 + 0x128) = 0;
      dVar26 = (double)(Cuboids[*(int *)((int)pvVar12 + 0x194)].pos.z - (moby->pos).z);
      if ((dVar26 <= dVar22) &&
         (dVar27 = (double)(float)(dVar27 * -6.0), dVar22 = dVar26, dVar26 < dVar27)) {
        dVar22 = dVar27;
      }
      *(float *)((int)pvVar12 + 0x128) = (float)dVar22;
      mobyutil::MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120);
      mobyfunc::GetBonePosition(lVar16,0,auStack_100);
      collproc::CollMobySphere(0x3fc99999a0000000,auStack_100,&DAT_00456f74,0,lVar16,local_c0);
      fVar33 = (float)((double)(moby->pos).y - dVar30);
      fVar1 = (float)((double)(moby->pos).x - dVar32);
      fVar2 = (float)((double)(moby->pos).z - dVar29);
      if ((((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar33 * fVar33) < dVar25) ||
          (hero::g_heroStateType == 7)) && (moby->state = '\x10', moby->animationId != '\x05')) {
        local_88 = (longlong)(int)(animationSpeed * 2.5);
        mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 2.5));
      }
    }
  }
  else if (bVar3 < 0x11) {
    uVar23 = FUN_005e8338((double)(*(float *)((int)pvVar12 + 0x130) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar12 + 0x134) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar23,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 0.7853982),lVar16);
    dVar25 = (double)mathfunc::cosf((moby->rotation).z);
    dVar26 = 4.0;
    *(float *)((int)pvVar12 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar25);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar22 = (double)mobyutil::g_FrameTime;
    lVar17 = ((ulonglong)*(uint *)((int)pvVar12 + 0x194) & 0x1ffffff) << 7;
    *(float *)((int)pvVar12 + 0x124) = (float)((double)(float)(dVar22 * dVar26) * dVar25);
    *(undefined4 *)((int)pvVar12 + 0x128) = 0;
    fVar33 = (float)(dVar22 * 6.0);
    fVar1 = *(float *)((int)&(Cuboids->pos).z + (int)lVar17) - (moby->pos).z;
    if ((fVar1 <= fVar33) && (fVar33 = fVar1, fVar1 < (float)(dVar22 * -6.0))) {
      fVar33 = (float)(dVar22 * -6.0);
    }
    *(float *)((int)pvVar12 + 0x128) = fVar33;
    mobyutil::MB_MoveAndCollide2(dVar24,0,lVar16,uVar21 + 0x120,lVar17,0x200);
    fVar33 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
    fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
    if (SQRT(fVar1 * fVar1 + fVar33 * fVar33) < 2.0) {
      moby->state = '\r';
    }
  }
  else if ((bVar3 < 0x12) &&
          (uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60)),
          (uVar19 & 1) != 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00458898  ns=mobyupdate_helpers  size=0x14
// sig: undefined M777_00458898(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M777_00458898(void)

{
  DAT_008738dc = 0x10000;
  return;
}



//==== 004588b8  ns=mobyupdate_helpers  size=0x20c
// sig: undefined M777_004588b8(void)
// callers(1): 00458b00 mobyupdate_unsorted::UpdateMoby_777
// callees(6): 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M777_004588b8(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_20 [8];
  
  pvVar2 = param_1->pVar;
  uVar7 = ZEXT48(pvVar2);
  if (param_1->state != '\x06') {
    iVar6 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar6,uVar7 + 0x20,5,auStack_20,0,0,4);
    if (iVar6 != 0) {
      uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
      uVar4 = (int)*(uint *)(iVar6 + 0x2c) >> 0x1f;
      fVar1 = *(float *)(iVar6 + 0x2c);
      if (((int)((uVar4 >> 1 ^ *(uint *)(iVar6 + 0x2c)) - uVar4) <
           (int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3)) &&
         (*(short *)(*(int *)(iVar6 + 0x20) + 0xa6) != 0xac)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        *(undefined1 *)((int)pvVar2 + 199) = 0xfa;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *(float *)((int)pvVar2 + 0x20) = *(float *)((int)pvVar2 + 0x20) - fVar1;
        auVar8 = loadVectorLeftIndexed(in_LR,0x4588b0);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar8,0x26,uVar7);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar5;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0xc0);
      }
      else {
        *(undefined1 *)((int)pvVar2 + 199) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar7 + 0xc0);
        mobyutil::MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
        param_1->state = '\x06';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar7 + 0xc0);
  iVar6 = mobyutil::MB_getTargetInArea
                    (0x4059400000000000,param_1,uVar7 + 0xd0,&DAT_004588b0,0,0,
                     Splines[*(int *)((int)pvVar2 + 400)]->points,
                     Splines[*(int *)((int)pvVar2 + 400)]->cnt);
  if ((iVar6 != 2) && (param_1->enabled == '\0')) {
    *(undefined4 *)((int)pvVar2 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar2 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar2 + 0x110) = g_heroMobyPtr;
  }
  return;
}



//==== 00458b00  ns=mobyupdate_unsorted  size=0xdf8
// sig: undefined UpdateMoby_777(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00110488 mobyutil::ClampVec3Magnitude; 00110b70 mobyutil::MB_IsPntInCuboid; 004588b8 mobyupdate_helpers::M777_004588b8; 00470690 FUN_00470690; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 006582cc: 'ERROR!! Moby class %d maya instance %d has no path set; deleted\n'

/* Moby 777 */

void mobyupdate_unsorted::UpdateMoby_777(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  MobyInstance *pMVar9;
  Spline *pSVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined2 uVar20;
  int iVar19;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
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
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0x1a0;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar14;
  puVar12[0x36] = in_LR;
  puVar12[0x2f] = in_f27;
  puVar12[0x30] = in_f28;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x2d] = unaff_r30;
  puVar12[0x2e] = unaff_r31;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  iVar19 = *(int *)((int)pvVar8 + 0x140);
  puVar12[0x2c] = unaff_r29;
  puVar12[0x2b] = unaff_r28;
  puVar12[0x2a] = unaff_r27;
  if (iVar19 == -1) {
    libc::printf("ERROR!! Moby class %d maya instance %d has no path set; deleted\n",moby->oClass,
                 (ulonglong)(uint)moby->field71_0xa8 & 0xffff);
    mobyfunc::DeleteMoby(moby);
  }
  else {
    mobyupdate_helpers::M777_004588b8(lVar15);
    uVar1 = moby->state;
    pMVar9 = *(MobyInstance **)((int)pvVar8 + 0x110);
    if (uVar1 == '\x06') {
      mobyfunc::DeleteMoby(moby);
    }
    else if (uVar1 == '\x04') {
      fastfunc::FastDecTimerS32(uVar24 + 0x19c);
      fVar3 = (pMVar9->pos).x - (moby->pos).x;
      fVar2 = (pMVar9->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x14) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar2;
      *(float *)(puVar12 + 0x15) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x14));
      if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0xa4));
      if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar28 = dVar26;
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar23 = uVar14 - 0xcc;
        lVar21 = uVar14 - 0xdc;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1a) = fVar3;
        *(float *)(puVar12 + 0x19) = fVar3;
        *(float *)((int)puVar12 + 0xcc) = fVar3;
        *(float *)((int)puVar12 + 0xc4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar4;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar3;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xb4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0xdc;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xc4) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar13 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xc4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar28,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 12.566371),lVar15,&DAT_00458ac4,uVar24 + 0x198);
      if ((*(int *)((int)pvVar8 + 0x114) != 2) &&
         (iVar19 = fastfunc::FastDecTimerS32(uVar24 + 0x19c), iVar19 != 0)) {
        *(f32 *)(puVar12 + 0x10) = (pMVar9->pos).x;
        *(f32 *)((int)puVar12 + 0x84) = (pMVar9->pos).y;
        fVar3 = (pMVar9->pos).z;
        *(float *)(puVar12 + 0x11) = fVar3;
        *(f32 *)((int)puVar12 + 0x8c) = (pMVar9->pos).w;
        *(float *)(puVar12 + 0x11) = fVar3 + 1.2;
        collproc::CollLine(lVar15 + 0x10,uVar14 - 0x120,0,lVar15,0);
        if (CollOutput.pMoby == pMVar9) {
          fVar2 = *(float *)((int)puVar12 + 0x84) - (moby->pos).y;
          fVar7 = *(float *)(puVar12 + 0x10) - (moby->pos).x;
          fVar4 = *(float *)(puVar12 + 0x11) - (moby->pos).z;
          fVar3 = DAT_00873904 * mobyutil::g_FrameTime;
          *(float *)(puVar12 + 0x12) = fVar7;
          *(float *)((int)puVar12 + 0x94) = fVar2;
          *(float *)(puVar12 + 0x13) = fVar4;
          *(undefined4 *)((int)puVar12 + 0x9c) = *(undefined4 *)((int)puVar12 + 0x8c);
          fVar5 = animationSpeed;
          dVar29 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
          fVar3 = (float)((double)fVar3 / dVar29);
          dVar28 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar28 = (double)(fVar7 * fVar3);
          }
          dVar30 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar30 = (double)(fVar2 * fVar3);
          }
          dVar31 = dVar26;
          if (dVar26 - dVar29 < 0.0) {
            dVar31 = (double)(fVar4 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar28 = (double)(fVar7 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar30 = (double)(fVar2 * fVar3);
          }
          if (dVar29 - dVar26 < 0.0) {
            dVar31 = (double)(fVar4 * fVar3);
          }
          *(float *)(puVar12 + 0x12) = (float)dVar28;
          *(float *)((int)puVar12 + 0x94) = (float)dVar30;
          *(float *)(puVar12 + 0x13) = (float)dVar31;
          puVar12[0x25] = (longlong)(int)(fVar5 * 300.5);
          FUN_00470690(0x3ff0000000000000,uVar14 - 0x110,lVar15 + 0x10,lVar15,pMVar9,
                       *(undefined4 *)((int)puVar12 + 300));
        }
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x3900,0x870000);
        auVar33 = vectorConvertFromSignedFixedPointWord(auVar32,0);
        auVar32 = loadVectorLeftIndexed(4,0x458ac4);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorAddFloatingPoint
                            (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x19c,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0x19cU & 0xfffffffc) = uVar11;
      }
      iVar19 = *(int *)((int)pvVar8 + 0x158);
      fVar3 = (moby->pos).x;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x144)];
      fVar2 = (moby->pos).y;
      fVar7 = (moby->pos).z;
      fVar4 = pSVar10->points[iVar19].x;
      fVar5 = pSVar10->points[iVar19].y;
      fVar6 = pSVar10->points[iVar19].z;
      *(float *)((int)puVar12 + 0x7c) = pSVar10->points[iVar19].w;
      *(float *)(puVar12 + 0xe) = fVar4 - fVar3;
      *(float *)((int)puVar12 + 0x74) = fVar5 - fVar2;
      *(float *)(puVar12 + 0xf) = fVar6 - fVar7;
      mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 8.0),(Vec4 *)(puVar12 + 0xe));
      fVar3 = *(float *)((int)puVar12 + 0x74);
      fVar2 = *(float *)(puVar12 + 0xe);
      fVar7 = *(float *)(puVar12 + 0xf);
      (moby->pos).x = (moby->pos).x + fVar2;
      (moby->pos).y = (moby->pos).y + fVar3;
      (moby->pos).z = (moby->pos).z + fVar7;
      if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3) < mobyutil::g_FrameTime) &&
         (iVar19 = *(int *)((int)pvVar8 + 0x158) + 1,
         iVar19 < Splines[*(int *)((int)pvVar8 + 0x144)]->cnt)) {
        *(int *)((int)pvVar8 + 0x158) = iVar19;
      }
    }
    else if (uVar1 == '\x03') {
      iVar19 = *(int *)((int)pvVar8 + 0x158);
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      dVar31 = (double)pSVar10->points[iVar19].x;
      dVar30 = (double)pSVar10->points[iVar19].y;
      fVar3 = (float)(dVar31 - (double)(moby->pos).x);
      fVar2 = (float)(dVar30 - (double)(moby->pos).y);
      dVar29 = (double)pSVar10->points[iVar19].z;
      dVar28 = (double)pSVar10->points[iVar19].w;
      pfVar22 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)(puVar12 + 0x16) = fVar2;
      *(float *)((int)puVar12 + 0xb4) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)((int)puVar12 + 0xb4) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar12 + 0x16));
      if (*(float *)((int)puVar12 + 0xb4) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar27 = dVar26;
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar21 = uVar14 - 0xbc;
        lVar23 = uVar14 - 0xac;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x1e) = fVar3;
        *(float *)(puVar12 + 0x1d) = fVar3;
        *(float *)((int)puVar12 + 0xec) = fVar3;
        *(float *)((int)puVar12 + 0xe4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar4;
        *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar3;
        *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xd4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0xbc;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xe4) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar19 + 0xe4)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar27,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 12.566371),lVar15,pfVar22,uVar24 + 0x198);
      fVar2 = (float)(dVar30 - (double)(moby->pos).y);
      fVar7 = (float)(dVar31 - (double)(moby->pos).x);
      fVar4 = (float)(dVar29 - (double)(moby->pos).z);
      fVar3 = mobyutil::g_FrameTime * 8.0;
      *(float *)((int)pvVar8 + 300) = (float)dVar28;
      dVar29 = (double)SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
      fVar3 = (float)((double)fVar3 / dVar29);
      dVar28 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar28 = (double)(fVar2 * fVar3);
      }
      dVar30 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar30 = (double)(fVar7 * fVar3);
      }
      dVar31 = dVar26;
      if (dVar26 - dVar29 < 0.0) {
        dVar31 = (double)(fVar4 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar28 = (double)(fVar2 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar30 = (double)(fVar7 * fVar3);
      }
      if (dVar29 - dVar26 < 0.0) {
        dVar31 = (double)(fVar4 * fVar3);
      }
      *(float *)((int)pvVar8 + 0x124) = (float)dVar28;
      *(float *)((int)pvVar8 + 0x120) = (float)dVar30;
      *(float *)((int)pvVar8 + 0x128) = (float)dVar31;
      (moby->pos).x = (float)((double)(moby->pos).x + dVar30);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x124);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x128);
      if (dVar29 < 0.5) {
        iVar19 = *(int *)((int)pvVar8 + 0x158) + 1;
        if (iVar19 < Splines[*(int *)((int)pvVar8 + 0x140)]->cnt) {
          *(int *)((int)pvVar8 + 0x158) = iVar19;
        }
        else {
          *(undefined4 *)((int)pvVar8 + 0x158) = 0;
          moby->state = '\x04';
          if (moby->animationId != '\x06') {
            mobyutil::MB_SetAnimation(lVar15,6,0,0);
          }
        }
      }
    }
    else if (uVar1 == '\x02') {
      fVar3 = (pMVar9->pos).x - (moby->pos).x;
      fVar2 = (pMVar9->pos).y - (moby->pos).y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x17) = fVar3;
      *(float *)((int)puVar12 + 0xbc) = fVar2;
      *(float *)(puVar12 + 0x18) = fVar4 - fVar7;
      dVar26 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar12 + 0x17));
      if (*(float *)(puVar12 + 0x18) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0xbc));
      if (*(float *)(puVar12 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar17 = uVar14 - 400;
        lVar21 = uVar14 - 0x9c;
        lVar23 = uVar14 - 0x8c;
        lVar25 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x22) = fVar3;
        *(float *)(puVar12 + 0x21) = fVar3;
        *(float *)((int)puVar12 + 0x10c) = fVar3;
        *(float *)((int)puVar12 + 0x104) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar4;
        *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar3;
        *(float *)(puVar12 + 0x22) = *(float *)(puVar12 + 0x22) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0xf4) * fVar3 * fVar3;
          iVar19 = (int)lVar21;
          lVar17 = lVar17 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar23 = uVar14 - 0x9c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar23;
        do {
          fVar3 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0x104) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar17 = 2;
        do {
          iVar19 = (int)lVar18;
          iVar13 = (int)lVar23;
          lVar18 = lVar18 + 0x10;
          lVar23 = lVar23 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar19 + 0x104)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar26,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 3.1415927),lVar15,&DAT_00720000,uVar24 + 0x198);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId == '\x04')) {
        puVar12[0x25] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar15,5,0,*(undefined4 *)((int)puVar12 + 300));
      }
      fVar3 = mobyutil::g_FrameTime * 4.0 + (moby->pos).z;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      (moby->pos).z = fVar3;
      fVar2 = (moby->pos).y - pSVar10->points[0].y;
      fVar7 = (moby->pos).x - pSVar10->points[0].x;
      fVar3 = fVar3 - pSVar10->points[0].z;
      if ((SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) < 0.5) &&
         (moby->state = '\x03', moby->animationId != '\x05')) {
        puVar12[0x25] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar15,5,0,*(undefined4 *)((int)puVar12 + 300));
      }
    }
    else if (uVar1 == '\x01') {
      iVar19 = mobyutil::MB_IsPntInCuboid
                         ((Vec4 *)&pMVar9->pos,(longlong)*(int *)((int)pvVar8 + 0x148));
      if (iVar19 != 0) {
        moby->state = '\x02';
        if (moby->animationId != '\x04') {
          puVar12[0x25] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar15,4,0,*(undefined4 *)((int)puVar12 + 300));
        }
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
      }
    }
    else if (uVar1 == '\0') {
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(undefined4 *)((int)pvVar8 + 0x20) = 0x41100000;
      uVar20 = fastfunc::FastDoubleToInt(0x4022000000000000);
      *(undefined2 *)((int)pvVar8 + 0x24) = uVar20;
      *(undefined1 *)((int)pvVar8 + 0x28) = 2;
      pSVar10 = Splines[*(int *)((int)pvVar8 + 0x140)];
      (moby->pos).x = pSVar10->points[0].x;
      (moby->pos).y = pSVar10->points[0].y;
      (moby->pos).z = pSVar10->points[0].z;
      (moby->pos).w = pSVar10->points[0].w;
      auVar32 = loadVectorLeftIndexed(4,0x458ac4);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x3900,0x870000);
      auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      (moby->pos).z = (float)dVar26;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorAddFloatingPoint(auVar32,auVar35);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x19c,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x19cU & 0xfffffffc) = uVar11;
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(lVar15,2,0,0);
      }
      moby->state = '\x01';
    }
  }
  return;
}



//==== 004598f8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M778_004598f8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M778_004598f8(void)

{
  DAT_00873954 = 0x10000;
  return;
}



//==== 00459950  ns=mobyupdate_unsorted  size=0x32c
// sig: undefined UpdateMoby_778(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 00126dd8 partupd::SpawnPart_22; 0015d12c sound::PlayMobySound; 00459c80 mobyupdate_helpers::M778_00459c80

/* Moby 778 */

void mobyupdate_unsorted::UpdateMoby_778(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r7;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_d0 [16];
  undefined1 local_c0 [32];
  
  piVar1 = (int *)moby->pVar;
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  moby->damage = -1;
  if ((iVar2 != 0) && (dVar5 = 0.0, 0 < *(int *)(iVar2 + 0x2c))) {
    mobyutil::MB_randInt((piVar1[1] - *piVar1) + 1);
    sound::PlayMobySound(0,0,moby);
    iVar2 = 0;
    dVar6 = 1.5;
    dVar7 = 3.0;
    dVar8 = 125000.0;
    dVar9 = 175000.0;
    dVar10 = 0.5;
    do {
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
      mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar7);
      uVar4 = mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      iVar3 = mobyutil::MB_randRange(0x2d,0x3c);
      partupd::SpawnPart_22
                (uVar4,local_d0,local_c0,0x207f7f7f,0x272727,in_r7,
                 (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar10)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x96);
    mobyupdate_helpers::M778_00459c80(moby);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00459c80  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M778_00459c80(void)
// callers(1): 00459950 mobyupdate_unsorted::UpdateMoby_778
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M778_00459c80(int param_1)

{
  f32 fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = mobyfunc::CreateMoby(BROKEN_PIPE_030B);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = ' ';
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    (pMVar4->pos).x = *(f32 *)(param_1 + 0x10);
    puVar2 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar4->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar1;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).x = *(f32 *)(param_1 + 0x40);
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    (pMVar4->rotation).y = fVar1;
    (pMVar4->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_1 + 0x4c);
    *puVar2 = 0xffffffff;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00459d68  ns=mobyupdate_unsorted  size=0x288
// sig: undefined UpdateMoby_779(MobyInstance * moby)
// callers(0): 
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00126dd8 partupd::SpawnPart_22; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound

/* Moby 779 */

void mobyupdate_unsorted::UpdateMoby_779(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 in_r7;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  
  piVar1 = (int *)moby->pVar;
  iVar2 = sound::IsMobyPlayingSound(moby,*piVar1);
  if (iVar2 == 0) {
    iVar2 = sound::PlayMobySound(0,4,moby);
    *piVar1 = iVar2;
  }
  iVar2 = 0;
  dVar5 = 1.2000000476837158;
  dVar6 = 0.800000011920929;
  dVar7 = 125000.0;
  dVar8 = 175000.0;
  dVar9 = 0.5;
  do {
    mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar5);
    mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar5);
    uVar4 = mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar3 = mobyutil::MB_randRange(0x2d,0x3c);
    partupd::SpawnPart_22
              (uVar4,local_90,local_80,0x207f7f7f,0x272727,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)iVar3 + dVar9)));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



//==== 00459ff0  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M78_00459ff0(void)
// callers(3): 0020fda8 mobyupdate_unsorted::UpdateMoby_1226; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0045a108 mobyupdate_unsorted::UpdateMoby_78
// callees(1): 0015cdb0 sound::sound_Kill

void mobyupdate_helpers::M78_00459ff0(MobyInstance *param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = param_1->levelFlagIdx;
  uVar2 = param_1->uid;
  param_1->collision = (ushort *)0x0;
  (&DAT_00a53964)[(short)uVar2] = bVar1 + 2;
  if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
    (&DAT_00a545c4)[(short)uVar2] = bVar1 + 2;
  }
  bVar1 = param_1->setByGroup;
  if (((bVar1 != 0xff) && (sound::g_SoundChannels[bVar1].pMoby == param_1)) &&
     (sound::g_SoundChannels[bVar1].state != '\0')) {
    sound::sound_Kill((uint)bVar1);
  }
  param_1->setByGroup = -1;
  param_1->state = '\x02';
  return;
}



//==== 0045a108  ns=mobyupdate_unsorted  size=0x8ec
// sig: undefined UpdateMoby_78(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00133bf8 partupd::SpawnPart_71; 0015d12c sound::PlayMobySound; 00459ff0 mobyupdate_helpers::M78_00459ff0; 005010c0 fastfunc::FastNormalizeRMtx4; 00502758 fastfunc::FastDoubleToInt

/* Moby 78 */

void mobyupdate_unsorted::UpdateMoby_78(MobyInstance *moby)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  float *pfVar9;
  float fVar10;
  int iVar16;
  ulonglong uVar11;
  int iVar17;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [4];
  float local_15c;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_144;
  float local_13c;
  float local_138;
  float local_134;
  float local_12c;
  float local_128;
  float local_124;
  double local_100;
  
  bVar5 = moby->state;
  pfVar9 = (float *)moby->pVar;
  if (bVar5 == 0) {
    uVar8 = moby->uid;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
    if (((&DAT_00a545c4)[(short)uVar8] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar8 >> 5) << 2)) &
        1 << (uVar8 & 0x1f)) == 0)) {
      moby->state = '\x01';
    }
    else {
      moby->collision = (ushort *)0x0;
      moby->setByGroup = -1;
      moby->state = '\x03';
    }
  }
  else if (bVar5 < 2) {
    if (((pfVar9[4] == -NAN) || (MobyInstance[(int)pfVar9[4]].state != '\x02')) &&
       (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
      if ((sound::g_SoundChannels[(byte)moby->setByGroup].pMoby != moby) ||
         (sound::g_SoundChannels[(byte)moby->setByGroup].state == '\0')) {
        iVar16 = sound::PlayMobySound(0,4,moby);
        moby->setByGroup = (char)iVar16;
      }
      dVar25 = (double)(DAT_00969db4 - (moby->pos).y);
      dVar23 = (double)(hero::g_heroCGPos - (moby->pos).x);
      dVar22 = (double)DAT_00969dbc;
      dVar21 = (double)(DAT_00969db8 - (moby->pos).z);
      fastfunc::FastNormalizeRMtx4(auStack_160,(longlong)(int)moby + 0xc0);
      iVar16 = 0;
      fVar10 = (float)((double)local_12c * dVar22 +
                      (double)(float)((double)local_13c * dVar21 +
                                     (double)(float)((double)local_15c * dVar23 +
                                                    (double)(float)((double)local_14c * dVar25))));
      dVar18 = (double)(float)((double)local_128 * dVar22 +
                              (double)(float)((double)local_138 * dVar21 +
                                             (double)(float)((double)local_158 * dVar23 +
                                                            (double)(float)((double)local_148 *
                                                                           dVar25))));
      dVar20 = 0.0;
      dVar19 = 30.5;
      local_100 = -5.0;
      do {
        mobyutil::MB_randRangeFloat(-0.25,0.25);
        dVar24 = 5.0;
        dVar26 = local_100;
        mobyutil::MB_randRangeFloat(-5.0,5.0);
        mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar24);
        uVar11 = mobyutil::MB_randInt(0x20);
        iVar17 = mobyutil::MB_randInt(0x20);
        uVar12 = mobyutil::MB_randInt(0x10);
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar13 = fastfunc::FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 2) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)));
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar14 = fastfunc::FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 1) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
        uVar1 = (uint)((double)animationSpeed * dVar19);
        uVar15 = fastfunc::FastDoubleToInt
                           ((double)(longlong)
                                    (int)(((int)uVar1 >> 2) +
                                         (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)));
        partupd::SpawnPart_71
                  (local_190,local_180,local_170,
                   (int)((uVar11 & 0xffffffff) << 8) + 0x6000U | iVar17 + 0x60U |
                   (int)((uVar12 & 0xffffffff) << 0x10) + 0x200000U | 0x60000000,0x60808080,uVar13,
                   uVar14,uVar15);
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x10);
      if (((5.0 <= ABS(fVar10)) || (dVar18 <= dVar20)) || (5.0 <= dVar18)) {
        *(undefined1 *)pfVar9 = 0;
        *(undefined1 *)((int)pfVar9 + 1) = 0;
        *(undefined1 *)((int)pfVar9 + 2) = 0;
        *(undefined1 *)((int)pfVar9 + 3) = 0;
        *(undefined1 *)(pfVar9 + 1) = 0;
        *(undefined1 *)((int)pfVar9 + 5) = 0;
        *(undefined1 *)((int)pfVar9 + 6) = 0;
        *(undefined1 *)((int)pfVar9 + 7) = 0;
        *(undefined1 *)(pfVar9 + 2) = 0;
        *(undefined1 *)((int)pfVar9 + 9) = 0;
        *(undefined1 *)((int)pfVar9 + 10) = 0;
        *(undefined1 *)((int)pfVar9 + 0xb) = 0;
        *(undefined1 *)(pfVar9 + 3) = 0;
        *(undefined1 *)((int)pfVar9 + 0xd) = 0;
        *(undefined1 *)((int)pfVar9 + 0xe) = 0;
        *(undefined1 *)((int)pfVar9 + 0xf) = 0;
      }
      else {
        fVar6 = (moby->transform).v2.w;
        fVar7 = (moby->transform).v1.w;
        fVar2 = (float)((double)(moby->transform).v2.x * dVar18 +
                       (double)((moby->transform).v1.x * fVar10));
        fVar3 = (float)((double)(moby->transform).v2.y * dVar18 +
                       (double)((moby->transform).v1.y * fVar10));
        fVar4 = (float)((double)(moby->transform).v2.z * dVar18 +
                       (double)((moby->transform).v1.z * fVar10));
        *pfVar9 = fVar2;
        pfVar9[1] = fVar3;
        pfVar9[2] = fVar4;
        pfVar9[3] = fVar7 * fVar10 +
                    (float)((double)fVar6 * dVar18 +
                           (double)(float)((double)local_124 * dVar22 +
                                          (double)(float)((double)local_134 * dVar21 +
                                                         (double)(float)((double)local_154 * dVar23
                                                                        + (double)(float)((double)
                                                  local_144 * dVar25)))));
        *pfVar9 = fVar2 + (moby->pos).x;
        pfVar9[1] = fVar3 + (moby->pos).y;
        pfVar9[2] = fVar4 + (moby->pos).z;
      }
      RegisterFuncForMoby(&PTR_M786_0045aa28_0070e9c0,moby);
    }
    else {
      mobyupdate_helpers::M78_00459ff0((longlong)(int)moby);
    }
  }
  else if (bVar5 < 3) {
    fVar10 = pfVar9[5];
    pfVar9[5] = (float)((int)fVar10 + 1);
    if ((int)fVar10 < 0x3d) {
      *(undefined1 *)pfVar9 = 0;
      *(undefined1 *)((int)pfVar9 + 1) = 0;
      *(undefined1 *)((int)pfVar9 + 2) = 0;
      *(undefined1 *)((int)pfVar9 + 3) = 0;
      *(undefined1 *)(pfVar9 + 1) = 0;
      *(undefined1 *)((int)pfVar9 + 5) = 0;
      *(undefined1 *)((int)pfVar9 + 6) = 0;
      *(undefined1 *)((int)pfVar9 + 7) = 0;
      *(undefined1 *)(pfVar9 + 2) = 0;
      *(undefined1 *)((int)pfVar9 + 9) = 0;
      *(undefined1 *)((int)pfVar9 + 10) = 0;
      *(undefined1 *)((int)pfVar9 + 0xb) = 0;
      *(undefined1 *)(pfVar9 + 3) = 0;
      *(undefined1 *)((int)pfVar9 + 0xd) = 0;
      *(undefined1 *)((int)pfVar9 + 0xe) = 0;
      *(undefined1 *)((int)pfVar9 + 0xf) = 0;
      RegisterFuncForMoby(&PTR_M786_0045aa28_0070e9c0,moby);
    }
    else {
      moby->state = '\x03';
    }
  }
  return;
}



//==== 0045aa28  ns=mobyupdate_helpers  size=0x5d4
// sig: undefined M786_0045aa28(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M786_0045aa28(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar12;
  ulonglong uVar11;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar18;
  longlong lVar17;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r16;
  float *pfVar21;
  ulonglong unaff_r17;
  int iVar22;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  float *pfVar23;
  ulonglong unaff_r23;
  int *piVar24;
  ulonglong unaff_r24;
  float *pfVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f21;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x2c0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
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
  puVar6[0x4b] = unaff_r30;
  puVar6[0x4c] = unaff_r31;
  puVar6[0x4a] = unaff_r29;
  puVar6[0x49] = unaff_r28;
  puVar6[0x48] = unaff_r27;
  puVar6[0x47] = unaff_r26;
  puVar6[0x46] = unaff_r25;
  puVar6[0x45] = unaff_r24;
  puVar6[0x44] = unaff_r23;
  puVar6[0x43] = unaff_r22;
  puVar6[0x42] = unaff_r21;
  puVar6[0x41] = unaff_r20;
  puVar6[0x40] = unaff_r19;
  puVar6[0x3f] = unaff_r18;
  puVar6[0x3e] = unaff_r17;
  puVar6[0x3d] = unaff_r16;
  iVar4 = *(int *)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar8 - 0x250,param_1 + 0xc0);
  uVar13 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar13;
  *(undefined4 *)(puVar6 + 0x15) = uVar2;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar9 = draw::GetEffectTex(0x2c);
  puVar6[0x25] = uVar9;
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar9;
  uVar9 = draw::GetEffectTex(0x2c);
  puVar6[0x37] = uVar9;
  uVar9 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar9;
  uVar9 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x36] = uVar9;
  *(undefined4 *)((int)puVar6 + 0x18c) = 0;
  lVar10 = uVar8 - 0x210;
  *(undefined4 *)((int)puVar6 + 0x184) = 0;
  puVar15 = &DAT_00873aa0;
  lVar16 = uVar8 - 0x180;
  puVar18 = &DAT_00873a60;
  lVar29 = 4;
  do {
    puVar12 = (undefined4 *)lVar10;
    *puVar12 = *puVar15;
    puVar12[1] = puVar15[1];
    puVar12[2] = puVar15[2];
    puVar7 = puVar15 + 3;
    puVar15 = puVar15 + 4;
    puVar12[3] = *puVar7;
    lVar10 = lVar10 + 0x10;
    puVar12 = (undefined4 *)lVar16;
    *puVar12 = *puVar18;
    puVar12[1] = puVar18[1];
    puVar12[2] = puVar18[2];
    puVar7 = puVar18 + 3;
    puVar18 = puVar18 + 4;
    puVar12[3] = *puVar7;
    lVar16 = lVar16 + 0x10;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  iVar26 = 0;
  uVar9 = 0;
  iVar22 = 0;
  do {
    iVar28 = (int)((uVar9 & 1) << 2);
    uVar11 = idol_draw::PackCmd(*(undefined4 *)((int)&DAT_00873a20 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a28 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a30 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a38 + iVar28),0x80);
    uVar13 = *(undefined4 *)((int)&DAT_00873a20 + iVar28);
    puVar6[0x27] = uVar11;
    uVar11 = idol_draw::PackCmd(uVar13,*(undefined4 *)((int)&DAT_00873a28 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a30 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a38 + iVar28),0x80);
    puVar6[0x39] = uVar11;
    iVar28 = *(int *)(iVar4 + 0x14);
    if (iVar28 == 0) {
      uVar13 = *(undefined4 *)((int)&DAT_00873980 + iVar26);
    }
    else {
      puVar6[0x3a] = (longlong)iVar28;
      uVar13 = fastfunc::FastLerpColor
                         ((double)((float)(longlong)puVar6[0x3a] * 0.016666668),
                          *(undefined4 *)((int)&DAT_00873980 + iVar26),0);
    }
    *(undefined4 *)(puVar6 + 0x31) = uVar13;
    *(undefined4 *)(puVar6 + 0x30) = uVar13;
    *(undefined4 *)((int)puVar6 + 0xfc) = uVar13;
    *(undefined4 *)(puVar6 + 0x1f) = uVar13;
    *(undefined4 *)((int)puVar6 + 0xf4) = uVar13;
    *(undefined4 *)(puVar6 + 0x1e) = uVar13;
    dVar45 = 360.0;
    iVar28 = 0;
    dVar44 = 180.0;
    dVar43 = 0.01745329238474369;
    pfVar21 = (float *)&DAT_00873a40;
    dVar42 = 1.570796251296997;
    dVar41 = 3.141592502593994;
    dVar40 = -3.141592502593994;
    dVar39 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.125;
    lVar10 = lVar1;
    do {
      iVar27 = 0;
      pfVar25 = (float *)((int)&DAT_008739a0 + iVar22);
      piVar24 = (int *)((int)&DAT_008739e0 + iVar22);
      lVar16 = lVar10;
      pfVar23 = pfVar21;
      do {
        iVar14 = fastfunc::FastDoubleToInt((double)(float)((double)*pfVar25 * dVar45));
        dVar31 = (double)fastfunc::FastIntToDouble(DAT_0159c330 - (DAT_0159c330 / iVar14) * iVar14);
        fVar3 = *pfVar23;
        dVar31 = (double)(float)((double)(float)(dVar31 / (double)*pfVar25) - dVar44);
        if (*piVar24 == 0) {
          dVar32 = (double)(float)(dVar31 * dVar43);
          dVar31 = (double)(float)(dVar41 - dVar32);
          if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
            dVar31 = dVar32;
          }
          dVar33 = (double)(float)(dVar40 - dVar32);
          if ((double)(float)(dVar40 - dVar32) - dVar31 < 0.0) {
            dVar33 = dVar31;
          }
        }
        else {
          dVar32 = (double)(float)(dVar31 * dVar43 + dVar42);
          dVar31 = (double)(float)(dVar41 - dVar32);
          if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
            dVar31 = dVar32;
          }
          dVar33 = (double)(float)(dVar40 - dVar32);
          if ((double)(float)(dVar40 - dVar32) - dVar31 < 0.0) {
            dVar33 = dVar31;
          }
        }
        dVar31 = (double)(float)(dVar33 * dVar33);
        iVar27 = iVar27 + 1;
        pfVar25 = pfVar25 + 1;
        piVar24 = piVar24 + 1;
        pfVar23 = pfVar23 + 1;
        dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar33));
        dVar32 = (double)(float)(dVar31 * dVar34);
        *(float *)((int)lVar16 + 0x100) =
             (float)((double)(float)((double)(float)(dVar31 * dVar32) * dVar36 +
                                    (double)(float)(dVar32 * dVar37 +
                                                   (double)(float)(dVar34 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar33) * dVar39 + dVar33)))) * dVar35 +
                    (double)fVar3);
        lVar16 = lVar16 + 4;
      } while (iVar27 < 2);
      iVar28 = iVar28 + 1;
      lVar10 = lVar10 + 8;
      pfVar21 = pfVar21 + 2;
    } while (iVar28 < 4);
    auVar46 = ZEXT416(0);
    auVar47 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar46 = loadVectorLeftIndexed(0x2c,0x45a9f4);
    auVar46 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    lVar30 = 2;
    lVar16 = uVar8 - 0x118;
    lVar29 = uVar8 - 0x1b8;
    lVar19 = uVar8 - 0x1a8;
    lVar10 = uVar8 - 0x128;
    lVar17 = uVar8 - 0x130;
    lVar20 = uVar8 - 0x120;
    do {
      auVar49 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      auVar51 = loadVectorLeftIndexed(in_LR,lVar29);
      auVar53 = loadVectorLeftIndexed(in_LR,lVar19);
      auVar52 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
      lVar29 = lVar29 + 4;
      auVar5 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
      lVar19 = lVar19 + 4;
      auVar50._0_4_ = auVar47._0_4_ + 1;
      auVar50._8_8_ = auVar47._8_8_;
      auVar50._4_4_ = auVar47._4_4_ + 1;
      auVar48._0_8_ = auVar50._0_8_;
      auVar48._12_4_ = auVar47._12_4_;
      auVar48._8_4_ = auVar47._8_4_ + 1;
      auVar47._0_12_ = auVar48._0_12_;
      auVar47._12_4_ = auVar48._12_4_ + 1;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,lVar17);
      *(undefined4 *)lVar17 = uVar13;
      lVar17 = lVar17 + 4;
      auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar51);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar53);
      auVar52 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar50 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,lVar10);
      *(undefined4 *)lVar10 = uVar13;
      uVar13 = storeVectorElementWordIndexed
                         (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0,lVar20);
      *(undefined4 *)lVar20 = uVar13;
      lVar10 = lVar10 + 4;
      uVar13 = storeVectorElementWordIndexed
                         (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar16);
      *(undefined4 *)lVar16 = uVar13;
      lVar20 = lVar20 + 4;
      lVar16 = lVar16 + 4;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    draw::FastDrawQuad(uVar8 - 0x210,uVar8 - 0x250,0,EffectTexHeaders,9);
    draw::FastDrawQuad(uVar8 - 0x180,uVar8 - 0x250,0,EffectTexHeaders,9);
    lVar16 = 4;
    lVar10 = lVar1;
    do {
      iVar28 = (int)lVar10;
      *(float *)(iVar28 + 0xb0) = *(float *)(iVar28 + 0xb0) + 0.1;
      *(float *)(iVar28 + 0x140) = *(float *)(iVar28 + 0x140) + 0.1;
      lVar10 = lVar10 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar9 = uVar9 + 1;
    iVar22 = iVar22 + 8;
    iVar26 = iVar26 + 4;
  } while ((int)uVar9 < 6);
  return;
}



//==== 0045affc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M786_0045affc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M786_0045affc(void)

{
  DAT_00873b2c = 0x10000;
  return;
}



//==== 0045b010  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M786_0045b010(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M786_0045b010(int param_1)

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



//==== 0045b190  ns=mobyupdate_unsorted  size=0x1328
// sig: undefined UpdateMoby_786(MobyInstance * moby)
// callers(0): 
// callees(33): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f1e50 mobyfunc::SetLevelFlag; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106308 mobyutil::MB_SetZBoundsFromPos; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 00168f7c update::PlayHelpMovie; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658320: 'McGuffin Surfer'

/* Moby 786 */

void mobyupdate_unsorted::UpdateMoby_786(MobyInstance *moby)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  gameMode_t gVar15;
  Cuboid *pCVar16;
  ulonglong uVar17;
  MobyInstance *pMVar21;
  ulonglong uVar18;
  int iVar22;
  undefined2 uVar23;
  longlong lVar19;
  longlong lVar20;
  short sVar26;
  float *pfVar25;
  longlong lVar24;
  longlong lVar27;
  ulonglong unaff_r26;
  undefined4 *puVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1d0;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x3c] = in_LR;
  puVar13[0x33] = in_f25;
  puVar13[0x34] = in_f26;
  puVar13[0x35] = in_f27;
  puVar13[0x36] = in_f28;
  puVar13[0x37] = in_f29;
  puVar13[0x38] = in_f30;
  puVar13[0x39] = in_f31;
  puVar13[0x32] = unaff_r31;
  puVar13[0x31] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  puVar13[0x30] = unaff_r29;
  puVar13[0x2f] = unaff_r28;
  puVar13[0x2e] = unaff_r27;
  puVar13[0x2d] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar22 = 0;
    puVar28 = &DAT_0095cd50;
    sVar26 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar28[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar28[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar26 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar22 = iVar22 + 1;
        puVar28 = puVar28 + 1;
      } while (iVar22 < sVar26);
    }
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    mobyutil::MB_UnlockItem(5,1);
    memcard::memcard_Save(0,-1);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x04') {
    mobyutil::Delt(0.0,0.1,(float *)((int)pvVar10 + 0x17c));
    boot::SceneScreenFade = *(float *)((int)pvVar10 + 0x17c);
    if (*(int *)((int)pvVar10 + 0x17c) == 0) {
      if (*(MobyInstance **)((int)pvVar10 + 0x178) != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x178));
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x03') {
    dVar37 = 1.0;
    dVar32 = 0.10000000149011612;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 0.1,DAT_0071f418 * 0.25,mobyutil::g_FrameTime * 0.5,
               (float *)((int)pvVar10 + 0x180),0x720000,(float *)((int)pvVar10 + 0x184));
    pCVar16 = Cuboids;
    iVar22 = *(int *)((int)pvVar10 + 0x158);
    iVar11 = *(int *)((int)pvVar10 + 0x15c);
    fVar4 = *(float *)((int)pvVar10 + 0x180);
    fVar5 = Cuboids[iVar22].pos.x;
    fVar7 = Cuboids[iVar11].pos.y;
    fVar8 = Cuboids[iVar22].pos.y;
    fVar6 = Cuboids[iVar11].pos.z;
    fVar9 = Cuboids[iVar22].pos.z;
    fVar3 = Cuboids[iVar11].pos.w;
    *(float *)(puVar13 + 0xe) = fVar4 * (Cuboids[iVar11].pos.x - fVar5) + fVar5;
    *(float *)((int)puVar13 + 0x74) = fVar4 * (fVar7 - fVar8) + pCVar16[iVar22].pos.y;
    fVar5 = pCVar16[iVar22].pos.z;
    *(float *)((int)puVar13 + 0x7c) = fVar3;
    *(float *)(puVar13 + 0xf) = fVar4 * (fVar6 - fVar9) + fVar5;
    dVar36 = (double)pCVar16[iVar22].rot.z;
    dVar34 = (double)pCVar16[iVar22].rot.x;
    dVar33 = (double)pCVar16[iVar22].rot.y;
    dVar35 = (double)pCVar16[iVar11].rot.x;
    dVar31 = (double)pCVar16[iVar11].rot.y;
    dVar38 = (double)fastfunc::FastDiffRots((double)pCVar16[iVar11].rot.z,dVar36);
    dVar38 = (double)fastfunc::FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar36);
    *(float *)(puVar13 + 0x11) = (float)dVar38;
    dVar38 = (double)fastfunc::FastDiffRots(dVar31,dVar33);
    dVar38 = (double)fastfunc::FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar33);
    *(float *)((int)puVar13 + 0x84) = (float)dVar38;
    dVar38 = (double)fastfunc::FastDiffRots(dVar35,dVar34);
    dVar38 = (double)fastfunc::FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar34);
    *(float *)(puVar13 + 0x10) = (float)dVar38;
    camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0xe));
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x10));
    uVar12 = (int)*(uint *)((int)pvVar10 + 0x180) >> 0x1f;
    if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0x180)) - uVar12) < 0x3f800000) {
      mobyutil::Delt(0.0,(float)dVar32,(float *)((int)pvVar10 + 0x17c));
    }
    else {
      mobyutil::Delt((float)dVar37,(float)dVar32,(float *)((int)pvVar10 + 0x17c));
      if (*(int *)((int)pvVar10 + 0x17c) == 0x3f800000) {
        moby->state = '\x04';
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      }
    }
    boot::SceneScreenFade = *(float *)((int)pvVar10 + 0x17c);
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode == GAME_MODE_SCENE) {
      if (DAT_0095cd9a == '\0') {
        fVar4 = (moby->transform).v0.y;
        fVar5 = (moby->transform).v0.x;
        fVar7 = (moby->transform).v0.z;
        fVar6 = 0.0;
        fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
        if (fVar8 == 0.0) {
          DAT_0095cd6c = (moby->transform).v0.w;
          fVar4 = fVar6;
          fVar7 = fVar6;
        }
        else {
          fVar8 = 2.5 / fVar8;
          fVar4 = fVar4 * fVar8;
          fVar6 = fVar5 * fVar8;
          DAT_0095cd6c = (moby->transform).v0.w;
          fVar7 = fVar7 * fVar8;
        }
        DAT_0095cd60 = fVar6 + (moby->pos).x;
        DAT_0095cd64 = fVar4 + (moby->pos).y;
        DAT_0095cd68 = fVar7 + (moby->pos).z;
        dVar38 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&DAT_0095cd60,0);
        DAT_0095cd68 = (float)dVar38;
        DAT_0095cd7c = 0;
        DAT_0095cd78 = 0.0;
        DAT_0095cd74 = 0;
        DAT_0095cd70 = 0;
        dVar38 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.14159);
        DAT_0095cd78 = (float)dVar38;
        DAT_0095cd9a = '\x01';
      }
    }
    else {
      moby->state = '\x01';
      if (*(short *)((int)pvVar10 + 4) == 0) {
        mobyfunc::SetLevelFlag(moby->levelFlagIdx);
        iVar22 = *(int *)((int)pvVar10 + 0x150);
        if (iVar22 != -1) {
          respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar22].pos,(Vec4 *)&Cuboids[iVar22].rot);
        }
      }
      else if (*(short *)((int)pvVar10 + 4) == 2) {
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        iVar22 = *(int *)((int)pvVar10 + 0x178);
        moby->modeBits = moby->modeBits | DISABLED;
        if (iVar22 != 0) {
          *(ushort *)(iVar22 + 0x34) = *(ushort *)(iVar22 + 0x34) | 1;
          *(undefined1 *)(*(int *)((int)pvVar10 + 0x178) + 0x31) = 0;
        }
        update::PlayHelpMovie(2);
        moby->state = '\x05';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(char *)((int)pvVar10 + 8) == '\x01') &&
       (iVar22 = mobyutil::MB_IsPntInCuboid
                           (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x154)), iVar22 != 0))
    {
      uVar2 = 0x437f0000;
    }
    else {
      uVar2 = 0x406ccccd;
    }
    *(undefined4 *)((int)pvVar10 + 0xc) = uVar2;
    iVar22 = FUN_004d3870(moby,uVar29);
    if (iVar22 == 0) {
      if ((UnlockableItems.sonicSummoner == '\0') &&
         (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 3.0)) {
        if (CHAR_ARRAY_00a1000c._112_2_ == 0) {
          CHAR_ARRAY_00a1000c[0x70] = '\0';
          CHAR_ARRAY_00a1000c[0x71] = '\x01';
          puVar13[0x2b] = (longlong)update::g_GameFrameCount;
          uVar23 = CHAR_ARRAY_00a1000c._114_2_;
          puVar13[0x2b] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x2b] + 0.5));
          iVar22 = *(int *)((int)puVar13 + 0x15c);
          if ((int)(uint)(ushort)uVar23 < iVar22 / 600) {
            sVar26 = (short)(iVar22 >> 0x1f);
            CHAR_ARRAY_00a1000c._114_2_ =
                 ((short)(iVar22 / 600) + sVar26) -
                 ((short)((short)(iVar22 / 0x2580000) + sVar26) >> 0xf);
          }
          CHAR_ARRAY_00a1000c._116_4_ =
               CHAR_ARRAY_00a1000c._116_4_ | 1 << (Level & 0x3f) | 0x80000000;
        }
        else {
          puVar13[0x2b] = (longlong)update::g_GameFrameCount;
          fVar4 = animationSpeed;
          puVar13[0x2b] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x2b] + 0.5));
          uVar23 = CHAR_ARRAY_00a1000c._114_2_;
          uVar14 = (uint)(ushort)CHAR_ARRAY_00a1000c._114_2_;
          iVar22 = *(int *)((int)puVar13 + 0x15c);
          uVar12 = (uint)(ushort)CHAR_ARRAY_00a1000c._114_2_;
          puVar13[0x2b] = (longlong)(int)((float)(longlong)(fVar4 * 18.5) * 60.0);
          if ((*(int *)((int)puVar13 + 0x15c) < (int)(iVar22 + uVar12 * -600)) ||
             (uVar14 * 600 == 0)) {
            help::Help_QueueMessage(STR_IF_YOU_WANT_TO_0x07D4,0xe);
          }
          else if ((int)(uint)(ushort)uVar23 < iVar22 / 600) {
            sVar26 = (short)(iVar22 >> 0x1f);
            CHAR_ARRAY_00a1000c._114_2_ =
                 ((short)(iVar22 / 600) + sVar26) -
                 ((short)((short)(iVar22 / 0x2580000) + sVar26) >> 0xf);
          }
        }
      }
    }
    else {
      mobyutil::MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
      moby->state = '\x02';
    }
    dVar38 = 10.5;
    uVar1 = moby->animationId;
    if (uVar1 == '\0') {
      iVar22 = fastfunc::FastDecTimerS16(uVar29 + 0x172);
      uVar1 = moby->animationId;
      if (iVar22 != 0) {
        dVar31 = (double)mobyutil::MB_randRangeFloat(1200.0,2400.0);
        uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar10 + 0x172) = uVar23;
        if (moby->animationId != '\x01') {
          puVar13[0x2b] = (longlong)(int)((double)animationSpeed * dVar38);
          mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar13 + 0x15c));
        }
        goto LAB_0045bb14;
      }
    }
    if ((uVar1 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
      puVar13[0x2b] = (longlong)(int)((double)animationSpeed * dVar38);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar13 + 0x15c));
    }
  }
  else if (uVar1 == '\0') {
    if (CHAR_ARRAY_0096c165[5] != '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(char **)((int)pvVar10 + 0x20) = "McGuffin Surfer";
    moby->state = '\x01';
    FUN_004d3720(moby,uVar29);
    mobyutil::MB_SetZBoundsFromPos(moby);
    pMVar21 = mobyfunc::CreateMoby(0x38);
    *(MobyInstance **)((int)pvVar10 + 0x178) = pMVar21;
    pMVar21->drawDistance = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x178) + 0x31) = 1;
    *(undefined8 *)(*(int *)((int)pvVar10 + 0x178) + 0x38) = *(undefined8 *)&moby->color;
    *(ushort *)(*(int *)((int)pvVar10 + 0x178) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar10 + 0x178) + 0x34) | 0x100;
  }
LAB_0045bb14:
  if (*(uint *)((int)pvVar10 + 0x178) != 0) {
    mobyfunc::GetBonePosition(moby,2,(ulonglong)*(uint *)((int)pvVar10 + 0x178) + 0x10);
    mobyfunc::GetBoneTransformations(moby,2,uVar17 - 0x140);
    fastfunc::FastApplyTransform
              ((Vec4 *)(*(int *)((int)pvVar10 + 0x178) + 0xc0),(Vec4 *)(uVar17 - 0x140));
    iVar22 = *(int *)((int)pvVar10 + 0x178);
    fVar4 = *(float *)(iVar22 + 0xd4) * DAT_00873b54;
    fVar5 = *(float *)(iVar22 + 0xd8) * DAT_00873b54;
    fVar7 = *(float *)(iVar22 + 0xc4) * DAT_00873b50;
    fVar8 = *(float *)(iVar22 + 200) * DAT_00873b50;
    fVar6 = *(float *)(iVar22 + 0xe4) * DAT_00873b58;
    fVar9 = *(float *)(iVar22 + 0xe8) * DAT_00873b58;
    *(float *)(iVar22 + 0x10) =
         *(float *)(iVar22 + 0x10) +
         *(float *)(iVar22 + 0xe0) * DAT_00873b58 +
         *(float *)(iVar22 + 0xc0) * DAT_00873b50 + *(float *)(iVar22 + 0xd0) * DAT_00873b54;
    *(float *)(iVar22 + 0x14) = *(float *)(iVar22 + 0x14) + fVar6 + fVar7 + fVar4;
    *(float *)(iVar22 + 0x18) = *(float *)(iVar22 + 0x18) + fVar9 + fVar8 + fVar5;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x178));
  }
  dVar38 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0045c40c;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).x;
  fVar7 = fVar4 - g_heroPosition.y;
  fVar8 = fVar5 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7)) {
LAB_0045beb8:
    if (*(short *)((int)pvVar10 + 0x174) != 0) {
      *(undefined2 *)((int)pvVar10 + 0x174) = 0;
      *(float *)((int)pvVar10 + 0x160) = hero::g_heroCGPos;
      *(float *)((int)pvVar10 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar10 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar10 + 0x16c) = DAT_00969dbc;
    }
  }
  else {
    fVar5 = hero::g_heroCGPos - fVar5;
    fVar4 = DAT_00969db4 - fVar4;
    fVar7 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar13 + 0x1d) = fVar5;
    *(float *)((int)puVar13 + 0xec) = fVar4;
    fVar4 = (moby->rotation).z;
    *(float *)(puVar13 + 0x1e) = fVar7 - fVar6;
    fVar5 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1d) & 4;
    fVar8 = ABS(*(float *)(puVar13 + 0x1d));
    if (*(float *)(puVar13 + 0x1e) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar3 = ABS(*(float *)((int)puVar13 + 0xec));
    if (*(float *)(puVar13 + 0x1e) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    if (0.0 < fVar8) {
      lVar19 = uVar17 - 0x1c0;
      lVar27 = uVar17 - 0x8c;
      lVar24 = uVar17 - 0x9c;
      lVar30 = 2;
      fVar7 = (fVar3 - fVar8) / (fVar3 + fVar8);
      fVar8 = fVar7 * fVar7;
      *(float *)(puVar13 + 0x28) = fVar7;
      *(float *)(puVar13 + 0x27) = fVar7;
      *(float *)((int)puVar13 + 0x13c) = fVar7;
      *(float *)((int)puVar13 + 0x134) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x27) = *(float *)(puVar13 + 0x27) * fVar8;
      *(float *)((int)puVar13 + 0x13c) = *(float *)((int)puVar13 + 0x13c) * fVar7;
      *(float *)(puVar13 + 0x28) = *(float *)(puVar13 + 0x28) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar19 + 0x134) = *(float *)((int)lVar19 + 0x124) * fVar7 * fVar7;
        iVar22 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar27 = uVar17 - 0x9c;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar27;
      do {
        fVar7 = *pfVar25;
        fVar8 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x134) = *(float *)((int)lVar19 + 0x134) * fVar7;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar24 = 2;
      lVar19 = lVar20;
      do {
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar11 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar22 + 0x134) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar6;
    }
    dVar31 = (double)fastfunc::FastSubRots(fVar4,fVar5);
    if (1.5707963705062866 <= dVar31) goto LAB_0045beb8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS16(uVar29 + 0x174);
    }
    else {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x54,0x45b104);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar23 = storeVectorElementHalfWordIndexed(auVar39,0x174,uVar29);
      *(undefined2 *)((int)pvVar10 + 0x174) = uVar23;
    }
  }
  iVar22 = fastfunc::FastDecTimerS16(uVar29 + 0x176);
  if (iVar22 != 0) {
    dVar31 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar23 = fastfunc::FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
    *(undefined2 *)((int)pvVar10 + 0x176) = uVar23;
    dVar35 = (double)(moby->rotation).z;
    dVar31 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar33 = 0.01745329238474369;
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar35,(float)(dVar31 * 0.01745329238474369));
    dVar35 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar31,(float)(dVar35 * dVar33),(float *)((int)pvVar10 + 0x160));
    *(float *)((int)pvVar10 + 0x160) = *(float *)((int)pvVar10 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar10 + 0x164) = *(float *)((int)pvVar10 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar10 + 0x168) = *(float *)((int)pvVar10 + 0x168) + (moby->pos).z;
  }
  if (*(short *)((int)pvVar10 + 0x174) == 0) {
    fVar4 = *(float *)((int)pvVar10 + 0x160);
    fVar5 = *(float *)((int)pvVar10 + 0x164);
    fVar7 = *(float *)((int)pvVar10 + 0x168);
  }
  else {
    dVar38 = 0.03999999910593033;
    fVar4 = hero::g_heroCGPos;
    fVar5 = DAT_00969db4;
    fVar7 = DAT_00969db8;
  }
  fVar4 = fVar4 - (moby->pos).x;
  dVar36 = (double)fVar4;
  fVar5 = fVar5 - (moby->pos).y;
  dVar34 = (double)fVar5;
  *(float *)((int)puVar13 + 0xdc) = fVar4;
  *(float *)(puVar13 + 0x1c) = fVar5;
  dVar33 = (double)(fVar7 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar13 + 0xe4) = (float)(ABS(dVar36) - ABS(dVar34));
  dVar35 = 0.0;
  uVar18 = (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar13 + 0xdc));
  if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
    dVar31 = ABS(dVar34);
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar32 = ABS((double)*(float *)(puVar13 + 0x1c));
  if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar37 = dVar35;
  if (0.0 < dVar31) {
    lVar19 = uVar17 - 0x1c0;
    lVar24 = uVar17 - 0xbc;
    lVar27 = uVar17 - 0xac;
    lVar30 = 2;
    fVar7 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar13 + 0x24) = fVar7;
    *(float *)(puVar13 + 0x23) = fVar7;
    *(float *)((int)puVar13 + 0x11c) = fVar7;
    *(float *)((int)puVar13 + 0x114) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar8;
    *(float *)((int)puVar13 + 0x11c) = *(float *)((int)puVar13 + 0x11c) * fVar7;
    *(float *)(puVar13 + 0x24) = *(float *)(puVar13 + 0x24) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar19 + 0x114) = *(float *)((int)lVar19 + 0x104) * fVar7 * fVar7;
      iVar22 = (int)lVar24;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar27 = uVar17 - 0xbc;
    pfVar25 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar27;
    do {
      fVar7 = *pfVar25;
      fVar8 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar19 + 0x114) = *(float *)((int)lVar19 + 0x114) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar24 = 2;
    lVar19 = lVar20;
    dVar31 = dVar35;
    do {
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar11 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0x114)) +
                        *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar37 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  dVar32 = (double)fastfunc::FastDiffRots(dVar37,(double)(moby->rotation).z);
  *(float *)((int)puVar13 + 0xd4) = (float)dVar33;
  fVar4 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34)));
  dVar34 = ABS((double)fVar4);
  *(float *)(puVar13 + 0x1a) = fVar4;
  *(float *)(puVar13 + 0x1b) = (float)(dVar34 - ABS(dVar33));
  uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar13 + 0x1a));
  if ((double)*(float *)(puVar13 + 0x1b) - dVar35 < 0.0) {
    dVar31 = ABS(dVar33);
  }
  fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar33 = ABS((double)*(float *)((int)puVar13 + 0xd4));
  if ((double)*(float *)(puVar13 + 0x1b) - dVar35 < 0.0) {
    dVar33 = dVar34;
  }
  if (dVar35 < dVar31) {
    lVar19 = uVar17 - 0x1c0;
    lVar27 = uVar17 - 0xcc;
    lVar24 = uVar17 - 0xdc;
    lVar30 = 2;
    fVar7 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar13 + 0x20) = fVar7;
    *(float *)(puVar13 + 0x1f) = fVar7;
    *(float *)((int)puVar13 + 0xfc) = fVar7;
    *(float *)((int)puVar13 + 0xf4) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar8;
    *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar7;
    *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar19 + 0xf4) = *(float *)((int)lVar19 + 0xe4) * fVar7 * fVar7;
      iVar22 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar27 = uVar17 - 0xdc;
    pfVar25 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar27;
    do {
      fVar7 = *pfVar25;
      fVar8 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar19 + 0xf4) = *(float *)((int)lVar19 + 0xf4) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar19 = 2;
    do {
      iVar22 = (int)lVar20;
      iVar11 = (int)lVar27;
      lVar20 = lVar20 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0xf4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar5 + fVar4);
  }
  dVar35 = -dVar35;
  dVar31 = 1.5707963705062866;
  if ((dVar32 <= 1.5707963705062866) && (dVar31 = dVar32, dVar32 < -1.5707963705062866)) {
    dVar31 = -1.5707963705062866;
  }
  dVar33 = 0.5235987901687622;
  if ((dVar35 <= 0.5235987901687622) && (dVar33 = dVar35, dVar35 < -0.5235987901687622)) {
    dVar33 = -0.5235987901687622;
  }
  *(float *)((int)pvVar10 + 0xa8) = (float)(dVar31 * 0.699999988079071);
  *(float *)((int)pvVar10 + 0xa4) = (float)dVar33;
  *(float *)((int)pvVar10 + 0x128) = (float)(dVar31 * 0.30000001192092896);
LAB_0045c40c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0x40300000;
  }
  dVar31 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar38),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar29 + 0x40,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar38),
             (double)(float)((double)DAT_0071f40c * dVar31),moby,uVar29 + 0xc0,1);
  return;
}



//==== 0045c4b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M787_0045c4b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M787_0045c4b8(void)

{
  DAT_00873bac = 0x10000;
  return;
}



//==== 0045c4e0  ns=Global  size=0x15c
// sig: undefined FUN_0045c4e0(void)
// callers(1): 0044cee0 mobyupdate_unsorted::UpdateMoby_751
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_0045c4e0(double param_1,f32 *param_2)

{
  float fVar1;
  undefined1 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  
  pMVar3 = mobyfunc::CreateMoby(0x313);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined1 *)pMVar3->pVar;
    mobyutil::MB_CopyHeroLights(pMVar3);
    fVar1 = pMVar3->scale;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x40;
    (pMVar3->rotation).x = 0.0;
    pMVar3->scale = (float)((double)fVar1 * param_1);
    dVar4 = (double)mobyutil::MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    fVar1 = -mobyutil::g_FrameTime;
    *(undefined4 *)(puVar2 + 0x14) = 0x78;
    *(float *)(puVar2 + 8) = fVar1;
    *(float *)(puVar2 + 0x10) = DAT_0071f418 * 15.0;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.003141593,0.06283186);
    *(float *)(puVar2 + 0x1c) = (float)dVar4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0045c680  ns=mobyupdate_unsorted  size=0x3b8
// sig: undefined UpdateMoby_787(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012ab08 partupd::SpawnPart_35; 0015d12c sound::PlayMobySound; 0017bd90 water::WaterTile_PutDrop; 00456478 FUN_00456478; 004fff60 fastfunc::FastDecTimerS32

/* Moby 787 */

void mobyupdate_unsorted::UpdateMoby_787(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  undefined1 local_b0 [16];
  Vec4 local_a0;
  float local_90;
  float local_8c;
  float local_88;
  
  pfVar8 = (float *)moby->pVar;
  pfVar8[2] = pfVar8[2] - pfVar8[4];
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  fVar4 = (moby->pos).w;
  dVar17 = (double)fVar4;
  (moby->rotation).x = (moby->rotation).x + pfVar8[7];
  fVar5 = *pfVar8;
  fVar6 = pfVar8[1];
  fVar7 = pfVar8[2];
  iVar9 = collproc::CollLine((longlong)(int)moby + 0x10,local_b0,2,0,0);
  if (iVar9 != 0) {
    iVar9 = collproc::CollHotspot();
    if (iVar9 != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (pfVar8[6] == 0.0) {
      sound::PlayMobySound(0,0,moby);
    }
    water::WaterTile_PutDrop
              ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)dVar17);
    pfVar8[6] = 1.4013e-45;
    pfVar8[5] = 1.68156e-43;
    pfVar8[2] = mobyutil::g_FrameTime * -1.5;
    pfVar8[4] = DAT_0071f418 * 0.8;
    dVar17 = 0.0;
    pfVar8[7] = 0.0;
    local_a0.x = (moby->pos).x;
    local_a0.y = (moby->pos).y;
    local_a0.z = CollOutput.ip.z;
    iVar9 = FUN_00456478(0x4000000000000000,&local_a0);
    if (iVar9 != 0) {
      *(undefined1 *)(iVar9 + 0x23) = 0x70;
    }
    iVar9 = 0;
    dVar22 = 3.0;
    dVar23 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar26 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    dVar30 = 6.5;
    do {
      dVar12 = (double)mobyutil::MB_randRot();
      dVar13 = (double)mobyutil::MB_randRangeFloat
                                 ((float)dVar17,(float)((double)mobyutil::g_FrameTime * dVar22));
      dVar15 = (double)(float)(dVar12 + dVar23);
      dVar14 = (double)(float)(dVar24 - dVar12);
      if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
        dVar14 = dVar12;
      }
      dVar18 = (double)(float)(dVar24 - dVar15);
      if (dVar15 - (double)(float)(dVar24 - dVar15) < 0.0) {
        dVar18 = dVar15;
      }
      dVar16 = (double)(float)(dVar25 - dVar12);
      if ((double)(float)(dVar25 - dVar12) - dVar14 < 0.0) {
        dVar16 = dVar14;
      }
      dVar14 = (double)(float)(dVar25 - dVar15);
      if ((double)(float)(dVar25 - dVar15) - dVar18 < 0.0) {
        dVar14 = dVar18;
      }
      dVar12 = (double)(float)(dVar16 * dVar16);
      dVar15 = (double)(float)(dVar14 * dVar14);
      dVar20 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar16));
      dVar18 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
      dVar19 = (double)(float)(dVar12 * dVar20);
      dVar21 = (double)(float)(dVar15 * dVar18);
      local_8c = (float)((double)(float)((double)(float)(dVar12 * dVar19) * dVar29 +
                                        (double)(float)(dVar19 * dVar28 +
                                                       (double)(float)(dVar20 * dVar27 +
                                                                      (double)(float)((double)(float
                                                  )(dVar12 * dVar16) * dVar26 + dVar16)))) * dVar13)
      ;
      local_90 = (float)((double)(float)((double)(float)(dVar15 * dVar21) * dVar29 +
                                        (double)(float)(dVar21 * dVar28 +
                                                       (double)(float)(dVar18 * dVar27 +
                                                                      (double)(float)((double)(float
                                                  )(dVar15 * dVar14) * dVar26 + dVar14)))) * dVar13)
      ;
      dVar14 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)mobyutil::g_FrameTime * dVar22),
                                  (float)((double)mobyutil::g_FrameTime * dVar30));
      local_88 = (float)dVar14;
      uVar10 = mobyutil::MB_randRange(0x5a,0x78);
      uVar11 = mobyutil::MB_randInt(2);
      partupd::SpawnPart_35(&local_a0,&local_90,uVar11,uVar10);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
  }
  (moby->pos).x = fVar1 + fVar5;
  (moby->pos).y = fVar2 + fVar6;
  fVar1 = pfVar8[6];
  (moby->pos).z = fVar3 + fVar7;
  (moby->pos).w = fVar4;
  if (fVar1 != 0.0) {
    moby->scale = moby->scale * 0.99;
  }
  iVar9 = fastfunc::FastDecTimerS32(pfVar8 + 5);
  if (iVar9 != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0045ca38  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M788_0045ca38(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M788_0045ca38(int param_1)

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



//==== 0045cb60  ns=mobyupdate_helpers  size=0x520
// sig: undefined M788_0045cb60(void)
// callers(1): 0045d0f8 mobyupdate_unsorted::UpdateMoby_788
// callees(7): 0006dad0 draw::FadeToBlack; 000a0c38 hero::Hero_Warp; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 00110b70 mobyutil::MB_IsPntInCuboid; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M788_0045cb60(int param_1)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  MobyInstance *pMVar19;
  Cuboid *pCVar20;
  ulonglong uVar21;
  int iVar24;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float *pfVar28;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar26 = uVar21 - 0x100;
  puVar13 = (ulonglong *)lVar26;
  *puVar13 = uVar21;
  puVar13[0x22] = in_LR;
  puVar13[0x1d] = in_f29;
  puVar13[0x1e] = in_f30;
  puVar13[0x1f] = in_f31;
  puVar13[0x1b] = unaff_r30;
  puVar13[0x1c] = unaff_r31;
  iVar10 = *(int *)(param_1 + 0x78);
  iVar24 = *(int *)(iVar10 + 0x180);
  puVar13[0x1a] = unaff_r29;
  puVar13[0x19] = unaff_r28;
  if (iVar24 == 1) {
    iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar10 + 0x148));
    if (iVar24 == 0) {
      *(undefined4 *)(iVar10 + 0x180) = 0;
      hud::Hud_SetEntryValueById(*(int *)(iVar10 + 0x160),0);
      *(undefined4 *)(iVar10 + 0x160) = 0xffffffff;
      hud::Hud_SetEntryValueById(*(int *)(iVar10 + 0x164),0);
      *(undefined4 *)(iVar10 + 0x164) = 0xffffffff;
    }
    else if (((*(int *)(iVar10 + 0x14c) == 0) && (*(int *)(iVar10 + 0x150) == 0)) &&
            (iVar24 = fastfunc::FastDecTimerS16(iVar10 + 0x168), iVar24 != 0)) {
      *(undefined4 *)(iVar10 + 0x180) = 2;
      puVar13[0x17] = (longlong)(int)(animationSpeed * 16.5);
      draw::FadeToBlack(*(undefined4 *)((int)puVar13 + 0xbc));
      hud::Hud_SetEntryValueById(*(int *)(iVar10 + 0x160),0);
      *(undefined4 *)(iVar10 + 0x160) = 0xffffffff;
      hud::Hud_SetEntryValueById(*(int *)(iVar10 + 0x164),0);
      uVar11 = *(uint *)(iVar10 + 0x154);
      *(undefined4 *)(iVar10 + 0x164) = 0xffffffff;
      pCVar20 = Cuboids;
      iVar24 = (int)(((ulonglong)uVar11 & 0x1ffffff) << 7);
      fVar1 = Cuboids[uVar11].pos.x;
      *(float *)(param_1 + 0x10) = fVar1;
      fVar2 = pCVar20[uVar11].pos.y;
      *(float *)(param_1 + 0x14) = fVar2;
      fVar3 = pCVar20[uVar11].pos.z;
      *(float *)(param_1 + 0x18) = fVar3;
      fVar4 = pCVar20[uVar11].pos.w;
      *(float *)(param_1 + 0x1c) = fVar4;
      uVar12 = *(uint *)((int)&(pCVar20->matrix).v0.x + iVar24);
      uVar11 = *(uint *)((int)&(pCVar20->matrix).v0.y + iVar24);
      fVar6 = ABS(*(float *)((int)&(pCVar20->matrix).v0.x + iVar24));
      fVar7 = ABS(*(float *)((int)&(pCVar20->matrix).v0.y + iVar24));
      *(float *)(puVar13 + 0x12) = fVar6 - fVar7;
      fVar5 = 0.0;
      uVar22 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar11 >> 0x1d) & 4;
      fVar8 = fVar6;
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
        fVar7 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar8) {
        lVar27 = uVar21 - 0xf0;
        lVar25 = uVar21 - 0x6c;
        lVar23 = uVar21 - 0x5c;
        lVar29 = 2;
        fVar7 = (fVar7 - fVar8) / (fVar7 + fVar8);
        fVar8 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x14) = fVar7;
        *(float *)(puVar13 + 0x13) = fVar7;
        *(float *)((int)puVar13 + 0x9c) = fVar7;
        *(float *)((int)puVar13 + 0x94) = fVar7;
        fVar7 = fVar8 * fVar8;
        *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar8;
        *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar7;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar7 * fVar8;
        do {
          *(float *)((int)lVar27 + 0x94) = *(float *)((int)lVar27 + 0x84) * fVar7 * fVar7;
          iVar24 = (int)lVar25;
          lVar27 = lVar27 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar24 + 4) * fVar7 * fVar7;
          lVar23 = lVar23 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar27 = uVar21 - 0x6c;
        pfVar28 = (float *)&DAT_007358e0;
        lVar29 = 4;
        lVar23 = lVar27;
        lVar25 = lVar26;
        do {
          fVar7 = *pfVar28;
          fVar8 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar25 + 0x94) = *(float *)((int)lVar25 + 0x94) * fVar7;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar8;
          lVar23 = lVar23 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar23 = 2;
        do {
          iVar24 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          iVar18 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar24 + 0x94) + *(float *)(iVar18 + 4) +
                  *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar6;
      }
      fVar6 = fVar5 + 1.5707963;
      fVar7 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar7 = fVar5;
      }
      fVar8 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar8 = fVar6;
      }
      fVar9 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar7 < 0.0) {
        fVar9 = fVar7;
      }
      fVar7 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar8 < 0.0) {
        fVar7 = fVar8;
      }
      fVar6 = fVar9 * fVar9;
      fVar8 = fVar7 * fVar7;
      fVar16 = fVar6 * fVar6 * fVar9;
      *(undefined4 *)((int)puVar13 + 0x8c) = 0;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      *(undefined4 *)((int)puVar13 + 0x84) = 0;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      fVar14 = fVar8 * fVar8 * fVar7;
      fVar17 = fVar6 * fVar16;
      fVar15 = fVar8 * fVar14;
      *(float *)((int)puVar13 + 0x74) =
           (fVar6 * fVar17 * 2.601887e-06 +
           fVar17 * -0.0001980741 + fVar16 * 0.0083330255 + fVar6 * fVar9 * -0.16666657 + fVar9) *
           1.5 + fVar2;
      *(float *)((int)puVar13 + 0x7c) = fVar4;
      *(float *)(puVar13 + 0xf) = fVar3;
      *(float *)(param_1 + 0x48) = fVar5;
      *(float *)(puVar13 + 0xe) =
           (fVar8 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7) *
           1.5 + fVar1;
      dVar30 = (double)fastfunc::FastWrapRot(fVar5,3.1415927);
      *(float *)(puVar13 + 0x11) = (float)dVar30;
      hero::Hero_Warp((float *)(puVar13 + 0xe),(float *)(puVar13 + 0x10),0,1);
      pMVar19 = MobyInstance;
      iVar24 = *(int *)(iVar10 + 0x15c);
      MobyInstance[*(int *)(iVar10 + 0x158)].setByGroup = '\x01';
      pMVar19[iVar24].setByGroup = '\x01';
      *(undefined2 *)(iVar10 + 0x36) = 2;
      *(undefined1 *)(iVar10 + 8) = 1;
    }
  }
  else if ((iVar24 == 0) &&
          (iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar10 + 0x148)),
          iVar24 != 0)) {
    *(undefined4 *)(iVar10 + 0x180) = 1;
    iVar24 = hud::RegisterHUDCallback
                       (0x15,2000,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar10 + 0x14c),100);
    *(int *)(iVar10 + 0x164) = iVar24;
    iVar24 = hud::RegisterHUDCallback
                       (0x17,0x7d1,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar10 + 0x150),7);
    *(int *)(iVar10 + 0x160) = iVar24;
  }
  return;
}



//==== 0045d0f8  ns=mobyupdate_unsorted  size=0xd68
// sig: undefined UpdateMoby_788(MobyInstance * moby)
// callers(0): 
// callees(25): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106308 mobyutil::MB_SetZBoundsFromPos; 00110b70 mobyutil::MB_IsPntInCuboid; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 0045cb60 mobyupdate_helpers::M788_0045cb60; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 00658338: 'Surfer Agent'

/* Moby 788 */

void mobyupdate_unsorted::UpdateMoby_788(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
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
  undefined2 uVar20;
  ulonglong uVar15;
  int iVar18;
  undefined4 uVar19;
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
  lVar17 = uVar14 - 0x160;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x2e] = in_LR;
  puVar10[0x27] = in_f27;
  puVar10[0x28] = in_f28;
  puVar10[0x29] = in_f29;
  puVar10[0x2a] = in_f30;
  puVar10[0x2b] = in_f31;
  puVar10[0x26] = unaff_r31;
  puVar10[0x25] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar10[0x24] = unaff_r29;
  puVar10[0x23] = unaff_r28;
  puVar10[0x22] = unaff_r27;
  puVar10[0x21] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar18 = 0;
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
        iVar18 = iVar18 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar18 < sVar23);
    }
  }
  mobyupdate_helpers::M788_0045cb60(moby);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (CHAR_ARRAY_0096c165[0x1e] != '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(undefined4 *)((int)pvVar9 + 0x180) = 0;
    *(char **)((int)pvVar9 + 0x20) = "Surfer Agent";
    moby->state = '\x01';
    moby->updateDistance = -1;
    FUN_004d3720(moby,uVar26);
    mobyutil::MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    if ((*(char *)((int)pvVar9 + 8) == '\x01') &&
       (iVar18 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x16c))
       , iVar18 != 0)) {
      uVar19 = 0x437f0000;
    }
    else {
      uVar19 = 0x40200000;
    }
    *(undefined4 *)((int)pvVar9 + 0xc) = uVar19;
    iVar18 = FUN_004d3870(moby,uVar26);
    if (iVar18 != 0) {
      mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
      moby->state = '\x02';
    }
    if (*(short *)((int)pvVar9 + 4) == 2) {
      help::Help_QueueMessage(STR_YOUVE_JUST_ACQUIRED_A_0x07D0,10);
      mobyutil::MB_UnlockItem(0x1e,1);
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    uVar2 = moby->animationId;
    dVar35 = 10.5;
    if (uVar2 == '\0') {
      iVar18 = fastfunc::FastDecTimerS16(uVar26 + 0x16a);
      uVar2 = moby->animationId;
      if (iVar18 != 0) {
        dVar28 = (double)mobyutil::MB_randRangeFloat(1200.0,2400.0);
        uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar9 + 0x16a) = uVar20;
        iVar18 = mobyutil::MB_randInt(2);
        lVar16 = ((LZCOUNT(-iVar18) << 0x3a) >> 0x3f & 1U) + 1;
        if ((uint)moby->animationId != (uint)lVar16) {
          puVar10[0x1f] = (longlong)(int)((double)animationSpeed * dVar35);
          mobyutil::MB_SetAnimation(moby,lVar16,0,*(undefined4 *)((int)puVar10 + 0xfc));
        }
        goto LAB_0045d5a0;
      }
    }
    if (uVar2 != '\0' && (moby->field43_0x70 & 2U) != 0) {
      puVar10[0x1f] = (longlong)(int)((double)animationSpeed * dVar35);
      mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar10 + 0xfc));
    }
  }
  else if (bVar1 < 3) {
    if (DAT_0095cd9a == '\0') {
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.x;
      fVar6 = (moby->transform).v0.z;
      fVar7 = 0.0;
      fVar5 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar5 == 0.0) {
        DAT_0095cd6c = (moby->transform).v0.w;
        fVar3 = fVar7;
        fVar6 = fVar7;
      }
      else {
        fVar5 = 2.5 / fVar5;
        fVar3 = fVar3 * fVar5;
        fVar7 = fVar4 * fVar5;
        DAT_0095cd6c = (moby->transform).v0.w;
        fVar6 = fVar6 * fVar5;
      }
      DAT_0095cd60 = fVar7 + (moby->pos).x;
      DAT_0095cd64 = fVar3 + (moby->pos).y;
      DAT_0095cd68 = fVar6 + (moby->pos).z + 10.0;
      dVar35 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&DAT_0095cd60,0);
      DAT_0095cd68 = (float)dVar35;
      DAT_0095cd7c = 0;
      DAT_0095cd78 = 0.0;
      DAT_0095cd74 = 0;
      DAT_0095cd70 = 0;
      dVar35 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.14159);
      DAT_0095cd78 = (float)dVar35;
      DAT_0095cd9a = '\x01';
    }
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\x01';
    }
  }
LAB_0045d5a0:
  dVar35 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0045ddbc;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_0045d868:
    if (*(int *)((int)pvVar9 + 0x188) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x188) = 0;
      *(float *)((int)pvVar9 + 0x170) = hero::g_heroCGPos;
      *(float *)((int)pvVar9 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x17c) = DAT_00969dbc;
    }
  }
  else {
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
      lVar16 = uVar14 - 0x150;
      lVar24 = uVar14 - 0x7c;
      lVar21 = uVar14 - 0x8c;
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
        iVar18 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x8c;
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
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar18 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)fastfunc::FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar28) goto LAB_0045d868;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar26 + 0x188);
    }
    else {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x38,0x45d080);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x188,uVar26
                         );
      *(undefined4 *)((int)pvVar9 + 0x188U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar26 + 0x18c);
  if (iVar18 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x18c) = uVar19;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)fastfunc::FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x170));
    *(float *)((int)pvVar9 + 0x170) = *(float *)((int)pvVar9 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x174) = *(float *)((int)pvVar9 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x178) = *(float *)((int)pvVar9 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x188) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x170);
    fVar4 = *(float *)((int)pvVar9 + 0x174);
    fVar6 = *(float *)((int)pvVar9 + 0x178);
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
  dVar31 = (double)(fVar6 - ((moby->pos).z + 2.0));
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
    lVar16 = uVar14 - 0x150;
    lVar21 = uVar14 - 0xac;
    lVar24 = uVar14 - 0x9c;
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
      iVar18 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xac;
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
      iVar18 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar12 = (int)lVar24;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar12 + 4)
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
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  if (dVar33 < dVar28) {
    lVar16 = uVar14 - 0x150;
    lVar24 = uVar14 - 0xbc;
    lVar21 = uVar14 - 0xcc;
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
      iVar18 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xcc;
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
      iVar18 = (int)lVar17;
      iVar12 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar4 + fVar3);
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
LAB_0045ddbc:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x40,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0xc0,1);
  return;
}



//==== 0045de60  ns=mobyupdate_helpers  size=0x14
// sig: undefined M789_0045de60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M789_0045de60(void)

{
  DAT_00873c1c = 0x10000;
  return;
}



//==== 0045de78  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_789(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 789 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_789(MobyInstance *moby)

{
  return moby;
}



//==== 0045de88  ns=mobyupdate_helpers  size=0x108
// sig: undefined M789_0045de88(void)
// callers(0): 
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M789_0045de88(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  MobyInstance *local_40 [4];
  
  mobyutil::MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar4 = 0x3fdcccccc0000000;
    uVar5 = 0x3fd99999a0000000;
    do {
      if ((local_40[0]->enabled != '\0') &&
         (pvVar1 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        iVar2 = 0;
        pvVar3 = pvVar1;
        do {
          mobyutil::MB_DrawGlowFX
                    (uVar4,uVar5,(int)pvVar3 + 0x330,*(undefined4 *)((int)pvVar1 + 0x360));
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((int)pvVar3 + 0x10);
        } while (iVar2 < 3);
      }
      mobyutil::MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}



//==== 0045dfb0  ns=mobyupdate_helpers  size=0x188
// sig: undefined M79_0045dfb0(void)
// callers(1): 0045e2e0 mobyupdate_unsorted::UpdateMoby_79
// callees(4): 0006d720 RegisterFuncForMoby; 000f1114 mobyfunc::GetBonePosition; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M79_0045dfb0(MobyInstance *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_1->group != -1) && (param_1->enabled != '\0')) {
    pvVar1 = param_1->pVar;
    iVar3 = 0;
    do {
      mobyfunc::GetBonePosition(param_1,iVar3,(int)pvVar1 + iVar3 * 0x10 + 0x330);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    dVar4 = (double)fastfunc::FastWrapRot
                              (*(float *)((int)pvVar1 + 0x368),mobyutil::g_FrameTime * 1.9198622);
    dVar5 = (double)(float)(3.141592502593994 - dVar4);
    if (dVar4 - (double)(float)(3.141592502593994 - dVar4) < 0.0) {
      dVar5 = dVar4;
    }
    dVar6 = (double)(float)(-3.141592502593994 - dVar4);
    if ((double)(float)(-3.141592502593994 - dVar4) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    *(float *)((int)pvVar1 + 0x368) = (float)dVar4;
    dVar4 = (double)(float)(dVar6 * dVar6);
    dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
    dVar5 = (double)(float)(dVar4 * dVar7);
    uVar2 = fastfunc::FastLerpColor
                      ((double)(((float)(dVar4 * dVar5) * 2.601887e-06 +
                                (float)(dVar5 * -0.0001980741071747616 +
                                       (double)(float)(dVar7 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar4 * dVar6)
                                                                      * -0.16666656732559204 + dVar6
                                                                     )))) * 0.5 + 0.5),0x1e1eb4,
                       0x1eb41e);
    param_1->field60_0x90 = uVar2;
    *(uint *)((int)pvVar1 + 0x360) =
         ((int)uVar2 >> 0x10 & 0xffU) << 0x10 | ((int)uVar2 >> 8 & 0xffU) << 8 | uVar2 & 0xff |
         0x30000000;
    if ((worldUpdateTime != 0) && (worldUpdateTime != **(int **)((int)pvVar1 + 0x364))) {
      **(int **)((int)pvVar1 + 0x364) = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M789_0045de88_0070ea20,param_1);
    }
  }
  return;
}



//==== 0045e140  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M789_0045e140(void)
// callers(0): 
// callees(1): 00117390 mobyutil::MB_PathEvalSpline

void mobyupdate_helpers::M789_0045e140(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte in_cr6;
  undefined8 in_LR;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar4 = (ulonglong)uVar1;
  auVar6 = ZEXT416(0xffffffff);
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar13 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(in_LR,0x45e138);
  auVar7 = loadVectorLeftIndexed(0xc,uVar4);
  auVar8 = loadVectorRightIndexed(0x1c,uVar4);
  auVar10 = vectorShiftLeftIntegerWord(auVar10,auVar10);
  auVar7 = auVar7 | auVar8;
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorReciprocalEstimateFloatingPoint(auVar7);
  auVar11 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar12 = loadVectorLeftIndexed(0x3c40,0x870000);
  auVar14 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
  auVar15 = loadVectorLeftIndexed(8,uVar4);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar7,auVar9);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar6,auVar8,auVar10);
  auVar6 = vectorShiftLeftIntegerWord(auVar13,auVar13);
  auVar13 = loadVectorRightIndexed(0x18,uVar4);
  auVar12 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar6);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  iVar2 = *(int *)param_2;
  auVar10 = loadVectorLeftIndexed(in_LR,param_2);
  auVar14 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar9);
  auVar11 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar11);
  auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar9);
  auVar6 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar14);
  dVar5 = (double)(*(float *)(uVar1 + 8) +
                  (DAT_00873c40 * mobyutil::g_FrameTime) / *(float *)(uVar1 + 0xc));
  auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar12,auVar15 | auVar13);
  auVar8 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
  uVar3 = storeVectorElementWordIndexed(auVar8,8,uVar4);
  *(undefined4 *)(uVar1 + 8 & 0xfffffffc) = uVar3;
  if (!(bool)(in_cr6 >> 1 & 1)) {
    auVar6 = vectorSubtractFloatingPoint(auVar7,auVar10);
    dVar5 = (double)(float)(dVar5 - (double)(longlong)iVar2);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,8,uVar4);
    *(undefined4 *)(uVar1 + 8 & 0xfffffffc) = uVar3;
  }
  mobyutil::MB_PathEvalSpline(dVar5,param_2,uVar4,1,param_1 + 0x10,param_1 + 0x40,0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



//==== 0045e2e0  ns=mobyupdate_unsorted  size=0x139c
// sig: undefined UpdateMoby_79(MobyInstance * moby)
// callers(0): 
// callees(12): 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 00117390 mobyutil::MB_PathEvalSpline; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 0045dfb0 mobyupdate_helpers::M79_0045dfb0; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005027bc fastfunc::FastLerpColor

/* Moby 79 */

void mobyupdate_unsorted::UpdateMoby_79(MobyInstance *moby)

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
  short sVar11;
  int *piVar12;
  void *pvVar13;
  uint *puVar14;
  f32 fVar15;
  Spline *pSVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  int iVar28;
  longlong lVar25;
  longlong lVar26;
  uint uVar29;
  ulonglong uVar27;
  int iVar30;
  float *pfVar33;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar34;
  undefined8 in_r9;
  ulonglong unaff_r24;
  longlong lVar35;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar36;
  ulonglong unaff_r28;
  ulonglong uVar37;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  u16 *puVar38;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  lVar24 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar26 = uVar27 - 0x200;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar27;
  puVar19[0x42] = in_LR;
  puVar19[0x3d] = in_f29;
  puVar19[0x3e] = in_f30;
  puVar19[0x3f] = in_f31;
  puVar19[0x39] = unaff_r28;
  puVar19[0x3c] = unaff_r31;
  piVar12 = (int *)moby->pVar;
  uVar37 = ZEXT48(piVar12);
  puVar19[0x35] = unaff_r24;
  uVar29 = (int)GameCamera.posZ >> 0x1f;
  uVar20 = uVar29 >> 1 ^ (uint)GameCamera.posZ;
  puVar19[0x3b] = unaff_r30;
  puVar19[0x3a] = unaff_r29;
  puVar19[0x38] = unaff_r27;
  puVar19[0x37] = unaff_r26;
  puVar19[0x36] = unaff_r25;
  if (0x425bffff < (int)(uVar20 - uVar29)) {
    puVar38 = (u16 *)0x0;
    iVar28 = mobyutil::MB_damage(lVar24,0x10000,0);
    bVar1 = moby->state;
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
      moby->scale = moby->pClass->gScale * DAT_00873c44;
      dVar40 = (double)mobyutil::MB_randRot();
      piVar12[7] = (int)(float)dVar40;
      piVar12[0xca] = -1;
      dVar40 = (double)mobyutil::MB_randRot();
      piVar12[0xda] = (int)(float)dVar40;
      pSVar16 = Splines[*piVar12];
      uVar36 = ZEXT48(pSVar16);
      if (pSVar16->points[0].w == -1.0) {
        fVar2 = pSVar16->points[0].x;
        fVar3 = pSVar16->points[0].y;
        fVar10 = fVar2 - pSVar16->points[pSVar16->cnt + -1].x;
        fVar9 = fVar3 - pSVar16->points[pSVar16->cnt + -1].y;
        fVar4 = ABS(fVar10);
        *(float *)((int)puVar19 + 0xcc) = fVar10;
        fVar5 = ABS(fVar9);
        *(float *)(puVar19 + 0x1a) = fVar9;
        *(float *)((int)puVar19 + 0xd4) = fVar4 - fVar5;
        dVar40 = 0.0;
        dVar46 = 0.7853981852531433;
        uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
        fVar10 = ABS(*(float *)((int)puVar19 + 0xcc));
        if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
          fVar10 = fVar5;
        }
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = ABS(*(float *)(puVar19 + 0x1a));
        if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar41 = dVar40;
        if (0.0 < fVar10) {
          lVar25 = uVar27 - 0x1f0;
          lVar35 = uVar27 - 0x78;
          lVar32 = uVar27 - 0x88;
          lVar39 = 2;
          fVar10 = (fVar5 - fVar10) / (fVar5 + fVar10);
          fVar5 = fVar10 * fVar10;
          *(float *)(puVar19 + 0x2f) = fVar10;
          *(float *)((int)puVar19 + 0x17c) = fVar10;
          *(float *)(puVar19 + 0x30) = fVar10;
          *(float *)((int)puVar19 + 0x184) = fVar10;
          fVar10 = fVar5 * fVar5;
          *(float *)((int)puVar19 + 0x17c) = *(float *)((int)puVar19 + 0x17c) * fVar5;
          *(float *)(puVar19 + 0x30) = *(float *)(puVar19 + 0x30) * fVar10;
          *(float *)((int)puVar19 + 0x184) = *(float *)((int)puVar19 + 0x184) * fVar10 * fVar5;
          do {
            *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x168) * fVar10 * fVar10;
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar10 * fVar10;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x88;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar10 = *pfVar33;
            fVar5 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x178) * fVar10;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar5;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          do {
            iVar28 = (int)lVar25;
            iVar30 = (int)lVar35;
            lVar25 = lVar25 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar28 + 0x178)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar41 = (double)((float)(dVar41 + 0.7853981852531433) * fVar9 + fVar4);
        }
        fVar2 = pSVar16->points[1].x - fVar2;
        fVar3 = pSVar16->points[1].y - fVar3;
        fVar9 = ABS(fVar2);
        fVar10 = ABS(fVar3);
        *(float *)(puVar19 + 0x18) = fVar2;
        *(float *)((int)puVar19 + 0xc4) = fVar3;
        *(float *)(puVar19 + 0x19) = fVar9 - fVar10;
        uVar34 = (ulonglong)(*(uint *)(puVar19 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xc4) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar19 + 0x18));
        if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar10;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar10 = ABS(*(float *)((int)puVar19 + 0xc4));
        if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
          fVar10 = fVar9;
        }
        fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar42 = dVar40;
        if (0.0 < fVar2) {
          lVar25 = uVar27 - 0x1f0;
          lVar32 = uVar27 - 0xa8;
          lVar35 = uVar27 - 0x98;
          lVar39 = 2;
          fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
          fVar10 = fVar2 * fVar2;
          *(float *)(puVar19 + 0x2b) = fVar2;
          *(float *)((int)puVar19 + 0x15c) = fVar2;
          *(float *)(puVar19 + 0x2c) = fVar2;
          *(float *)((int)puVar19 + 0x164) = fVar2;
          fVar2 = fVar10 * fVar10;
          *(float *)((int)puVar19 + 0x15c) = *(float *)((int)puVar19 + 0x15c) * fVar10;
          *(float *)(puVar19 + 0x2c) = *(float *)(puVar19 + 0x2c) * fVar2;
          *(float *)((int)puVar19 + 0x164) = *(float *)((int)puVar19 + 0x164) * fVar2 * fVar10;
          do {
            *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x148) * fVar2 * fVar2;
            iVar28 = (int)lVar32;
            lVar25 = lVar25 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar2 * fVar2;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0xa8;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar2 = *pfVar33;
            fVar10 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x158) * fVar2;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar10;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          do {
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar30 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar28 + 0x158)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar3 + fVar9);
        }
        dVar41 = (double)fastfunc::FastDiffRots(dVar42,dVar41);
        uVar29 = pSVar16->cnt;
        iVar28 = 1;
        pSVar16->points[0].w = (float)dVar41;
        dVar41 = dVar40;
        uVar34 = uVar36;
        if (1 < (int)(uVar29 - 1)) {
          do {
            pfVar33 = (float *)(uVar34 + 0x10);
            fVar2 = pfVar33[4];
            iVar30 = (int)uVar34;
            fVar3 = *(float *)(iVar30 + 0x24);
            fVar10 = fVar2 - *pfVar33;
            fVar9 = fVar3 - *(float *)(iVar30 + 0x14);
            dVar43 = ABS((double)fVar10);
            dVar44 = ABS((double)fVar9);
            *(float *)((int)puVar19 + 0xb4) = fVar10;
            *(float *)(puVar19 + 0x17) = fVar9;
            *(float *)((int)puVar19 + 0xbc) = (float)(dVar43 - dVar44);
            uVar31 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
            dVar42 = ABS((double)*(float *)((int)puVar19 + 0xb4));
            if ((double)*(float *)((int)puVar19 + 0xbc) - dVar40 < 0.0) {
              dVar42 = dVar44;
            }
            fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
            dVar44 = ABS((double)*(float *)(puVar19 + 0x17));
            if ((double)*(float *)((int)puVar19 + 0xbc) - dVar40 < 0.0) {
              dVar44 = dVar43;
            }
            fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            dVar43 = dVar40;
            if (dVar40 < dVar42) {
              lVar25 = uVar27 - 0x1f0;
              lVar32 = uVar27 - 200;
              lVar35 = uVar27 - 0xb8;
              lVar39 = 2;
              fVar5 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
              fVar4 = fVar5 * fVar5;
              *(float *)(puVar19 + 0x27) = fVar5;
              *(float *)((int)puVar19 + 0x13c) = fVar5;
              *(float *)(puVar19 + 0x28) = fVar5;
              *(float *)((int)puVar19 + 0x144) = fVar5;
              fVar5 = fVar4 * fVar4;
              *(float *)((int)puVar19 + 0x13c) = *(float *)((int)puVar19 + 0x13c) * fVar4;
              *(float *)(puVar19 + 0x28) = *(float *)(puVar19 + 0x28) * fVar5;
              *(float *)((int)puVar19 + 0x144) = *(float *)((int)puVar19 + 0x144) * fVar5 * fVar4;
              do {
                *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x128) * fVar5 * fVar5;
                iVar21 = (int)lVar32;
                lVar25 = lVar25 + 8;
                lVar32 = lVar32 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar27 - 200;
              pfVar33 = (float *)&DAT_007358e0;
              lVar25 = lVar26;
              lVar32 = lVar35;
              do {
                fVar5 = *pfVar33;
                fVar4 = pfVar33[1];
                pfVar33 = pfVar33 + 2;
                *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x138) * fVar5;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar4;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar25 = lVar26;
              dVar42 = dVar40;
              do {
                iVar21 = (int)lVar25;
                lVar25 = lVar25 + 0x10;
                iVar22 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar21 + 0x138)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              dVar43 = (double)((float)(dVar42 + dVar46) * fVar10 + fVar9);
            }
            fVar2 = *(float *)(iVar30 + 0x30) - fVar2;
            fVar3 = *(float *)(iVar30 + 0x34) - fVar3;
            dVar45 = ABS((double)fVar2);
            dVar44 = ABS((double)fVar3);
            *(float *)(puVar19 + 0x15) = fVar2;
            *(float *)((int)puVar19 + 0xac) = fVar3;
            *(float *)(puVar19 + 0x16) = (float)(dVar45 - dVar44);
            uVar31 = (ulonglong)(*(uint *)(puVar19 + 0x15) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar19 + 0x16) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xac) >> 0x1d) & 4;
            dVar42 = ABS((double)*(float *)(puVar19 + 0x15));
            if ((double)*(float *)(puVar19 + 0x16) - dVar40 < 0.0) {
              dVar42 = dVar44;
            }
            fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
            dVar44 = ABS((double)*(float *)((int)puVar19 + 0xac));
            if ((double)*(float *)(puVar19 + 0x16) - dVar40 < 0.0) {
              dVar44 = dVar45;
            }
            fVar3 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
            dVar45 = dVar40;
            if (dVar40 < dVar42) {
              lVar25 = uVar27 - 0x1f0;
              lVar35 = uVar27 - 0xd8;
              lVar32 = uVar27 - 0xe8;
              lVar39 = 2;
              fVar10 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
              fVar9 = fVar10 * fVar10;
              *(float *)(puVar19 + 0x23) = fVar10;
              *(float *)((int)puVar19 + 0x11c) = fVar10;
              *(float *)(puVar19 + 0x24) = fVar10;
              *(float *)((int)puVar19 + 0x124) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar9;
              *(float *)(puVar19 + 0x24) = *(float *)(puVar19 + 0x24) * fVar10;
              *(float *)((int)puVar19 + 0x124) = *(float *)((int)puVar19 + 0x124) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x108) * fVar10 * fVar10;
                iVar21 = (int)lVar32;
                lVar32 = lVar32 + 8;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar21 + 4) * fVar10 * fVar10;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar27 - 0xe8;
              pfVar33 = (float *)&DAT_007358e0;
              lVar25 = lVar26;
              lVar32 = lVar35;
              do {
                fVar10 = *pfVar33;
                fVar9 = pfVar33[1];
                pfVar33 = pfVar33 + 2;
                *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x118) * fVar10;
                lVar25 = lVar25 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar25 = lVar26;
              dVar42 = dVar40;
              do {
                iVar21 = (int)lVar25;
                iVar22 = (int)lVar35;
                lVar25 = lVar25 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar21 + 0x118)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              dVar45 = (double)((float)(dVar42 + dVar46) * fVar2 + fVar3);
            }
            dVar42 = (double)fastfunc::FastDiffRots(dVar45,dVar43);
            *(float *)(iVar30 + 0x2c) = (float)dVar42;
            iVar28 = iVar28 + 1;
            uVar29 = pSVar16->cnt;
            if (dVar41 - ABS(dVar42) < 0.0) {
              dVar41 = ABS(dVar42);
            }
            uVar34 = uVar34 + 0x10;
          } while (iVar28 < (int)(uVar29 - 1));
        }
        iVar28 = (int)(((ulonglong)uVar29 & 0xfffffff) << 4);
        fVar3 = *(float *)((int)&((Spline *)(pSVar16->points + -1))->cnt + iVar28);
        fVar2 = *(float *)((int)pSVar16->points + iVar28 + -0xc);
        fVar10 = fVar3 - *(float *)((int)(pSVar16->points + -2) + iVar28);
        fVar9 = fVar2 - *(float *)((int)pSVar16->points + iVar28 + -0x1c);
        dVar43 = ABS((double)fVar10);
        dVar44 = ABS((double)fVar9);
        *(float *)((int)puVar19 + 0x9c) = fVar10;
        *(float *)(puVar19 + 0x14) = fVar9;
        *(float *)((int)puVar19 + 0xa4) = (float)(dVar43 - dVar44);
        uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar19 + 0x14) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)((int)puVar19 + 0x9c));
        if ((double)*(float *)((int)puVar19 + 0xa4) - dVar40 < 0.0) {
          dVar42 = dVar44;
        }
        fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        dVar44 = ABS((double)*(float *)(puVar19 + 0x14));
        if ((double)*(float *)((int)puVar19 + 0xa4) - dVar40 < 0.0) {
          dVar44 = dVar43;
        }
        fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        dVar43 = dVar40;
        if (dVar40 < dVar42) {
          lVar25 = uVar27 - 0x1f0;
          lVar35 = uVar27 - 0xf8;
          lVar32 = uVar27 - 0x108;
          lVar39 = 2;
          fVar5 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar19 + 0x1f) = fVar5;
          *(float *)((int)puVar19 + 0xfc) = fVar5;
          *(float *)(puVar19 + 0x20) = fVar5;
          *(float *)((int)puVar19 + 0x104) = fVar5;
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar4;
          *(float *)(puVar19 + 0x20) = *(float *)(puVar19 + 0x20) * fVar5;
          *(float *)((int)puVar19 + 0x104) = *(float *)((int)puVar19 + 0x104) * fVar5 * fVar4;
          do {
            *(float *)((int)lVar25 + 0xf8) = *(float *)((int)lVar25 + 0xe8) * fVar5 * fVar5;
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x108;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar5 = *pfVar33;
            fVar4 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0xf8) = *(float *)((int)lVar25 + 0xf8) * fVar5;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar4;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar32 = 2;
          lVar25 = lVar26;
          dVar42 = dVar40;
          do {
            iVar28 = (int)lVar25;
            iVar30 = (int)lVar35;
            lVar25 = lVar25 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar28 + 0xf8)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar43 = (double)((float)(dVar42 + dVar46) * fVar10 + fVar9);
        }
        fVar3 = pSVar16->points[0].x - fVar3;
        fVar2 = pSVar16->points[0].y - fVar2;
        dVar45 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar2);
        *(float *)(puVar19 + 0x12) = fVar3;
        *(float *)((int)puVar19 + 0x94) = fVar2;
        *(float *)(puVar19 + 0x13) = (float)(dVar45 - dVar44);
        uVar34 = (ulonglong)(*(uint *)(puVar19 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar19 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar19 + 0x94) >> 0x1d) & 4;
        dVar42 = ABS((double)*(float *)(puVar19 + 0x12));
        if ((double)*(float *)(puVar19 + 0x13) - dVar40 < 0.0) {
          dVar42 = dVar44;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar19 + 0x94));
        if ((double)*(float *)(puVar19 + 0x13) - dVar40 < 0.0) {
          dVar44 = dVar45;
        }
        fVar3 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        if (dVar40 < dVar42) {
          lVar39 = 2;
          fVar10 = (float)(dVar44 - dVar42) / (float)(dVar44 + dVar42);
          fVar9 = fVar10 * fVar10;
          *(float *)(puVar19 + 0x1b) = fVar10;
          *(float *)((int)puVar19 + 0xdc) = fVar10;
          *(float *)(puVar19 + 0x1c) = fVar10;
          *(float *)((int)puVar19 + 0xe4) = fVar10;
          lVar35 = uVar27 - 0x1f0;
          fVar10 = fVar9 * fVar9;
          lVar25 = uVar27 - 0x128;
          lVar32 = uVar27 - 0x118;
          *(float *)((int)puVar19 + 0xdc) = *(float *)((int)puVar19 + 0xdc) * fVar9;
          *(float *)(puVar19 + 0x1c) = *(float *)(puVar19 + 0x1c) * fVar10;
          *(float *)((int)puVar19 + 0xe4) = *(float *)((int)puVar19 + 0xe4) * fVar10 * fVar9;
          do {
            *(float *)((int)lVar35 + 0xd8) = *(float *)((int)lVar35 + 200) * fVar10 * fVar10;
            iVar28 = (int)lVar25;
            lVar25 = lVar25 + 8;
            lVar35 = lVar35 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)(iVar28 + 4) * fVar10 * fVar10;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar39 = 4;
          lVar35 = uVar27 - 0x128;
          pfVar33 = (float *)&DAT_007358e0;
          lVar25 = lVar26;
          lVar32 = lVar35;
          do {
            fVar10 = *pfVar33;
            fVar9 = pfVar33[1];
            pfVar33 = pfVar33 + 2;
            *(float *)((int)lVar25 + 0xd8) = *(float *)((int)lVar25 + 0xd8) * fVar10;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
            lVar32 = lVar32 + 8;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          lVar25 = 2;
          do {
            iVar28 = (int)lVar26;
            iVar30 = (int)lVar35;
            lVar26 = lVar26 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0xd8)) +
                              *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) +
                             *(float *)(iVar30 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar40 = (double)((float)(dVar40 + dVar46) * fVar2 + fVar3);
        }
        dVar40 = (double)fastfunc::FastDiffRots(dVar40,dVar43);
        pSVar16->points[pSVar16->cnt + -1].w = (float)dVar40;
        uVar27 = uVar36;
        if (0 < pSVar16->cnt) {
          do {
            puVar38 = (u16 *)((int)puVar38 + 1);
            *(float *)((int)uVar27 + 0x1c) =
                 *(float *)((int)uVar27 + 0x1c) * (float)(1.0471975803375244 / dVar41);
            uVar27 = uVar27 + 0x10;
          } while ((int)puVar38 < pSVar16->cnt);
        }
      }
      fVar2 = pSVar16->points[0].y - pSVar16->points[1].y;
      fVar3 = pSVar16->points[0].x - pSVar16->points[1].x;
      fVar10 = pSVar16->points[0].z - pSVar16->points[1].z;
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      piVar12[3] = (int)SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar2 * fVar2);
      moby->state = '\x01';
      auVar48 = loadVectorLeftIndexed(in_LR,uVar36);
      auVar49 = loadVectorLeftIndexed(4,uVar37);
      auVar48 = vectorConvertFromSignedFixedPointWord(auVar48,0);
      auVar50 = loadVectorRightIndexed(0x14,uVar37);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar48,auVar49 | auVar50,auVar47);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar37);
      *(undefined4 *)((uint)(piVar12 + 2) & 0xfffffffc) = uVar18;
    }
    else if (bVar1 < 2) {
      dVar46 = (double)fastfunc::FastWrapRot((float)piVar12[7],mobyutil::g_FrameTime * 12.566371);
      uVar23 = DAT_00873c4c;
      uVar18 = DAT_00873c48;
      dVar40 = (double)(float)(3.141592502593994 - dVar46);
      if (dVar46 - (double)(float)(3.141592502593994 - dVar46) < 0.0) {
        dVar40 = dVar46;
      }
      dVar41 = (double)(float)(-3.141592502593994 - dVar46);
      if ((double)(float)(-3.141592502593994 - dVar46) - dVar40 < 0.0) {
        dVar41 = dVar40;
      }
      dVar40 = (double)(float)(dVar41 * dVar41);
      dVar43 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar41));
      dVar42 = (double)(float)(dVar40 * dVar43);
      piVar12[7] = (int)(float)dVar46;
      uVar29 = fastfunc::FastLerpColor
                         ((double)(((float)(dVar40 * dVar42) * 2.601887e-06 +
                                    (float)(dVar42 * -0.0001980741071747616 +
                                           (double)(float)(dVar43 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar40 * 
                                                  dVar41) * -0.16666656732559204 + dVar41))) + 1.0)
                                  * 0.5),uVar18,uVar23);
      moby->field60_0x90 = uVar29;
      pvVar13 = moby->pVar;
      uVar27 = ZEXT48(pvVar13);
      auVar47 = ZEXT416(0xffffffff);
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xffffffff);
      auVar54 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xffffffff);
      auVar51 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar48 = loadVectorLeftIndexed(0xc,uVar27);
      auVar47 = loadVectorRightIndexed(0x1c,uVar27);
      auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
      auVar48 = auVar48 | auVar47;
      auVar47 = loadVectorLeftIndexed(0x30,0x45e28c);
      auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = vectorReciprocalEstimateFloatingPoint(auVar48);
      auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
      auVar53 = loadVectorLeftIndexed(0x3c40,0x870000);
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff414,0x720000);
      auVar57 = loadVectorLeftIndexed(8,uVar27);
      auVar51 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar48,auVar49);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar47,auVar51,auVar50);
      auVar47 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorRightIndexed(0x18,uVar27);
      auVar55 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar48,auVar49);
      auVar51 = vectorMultiplyAddFloatingPoint(auVar53,auVar56,auVar47);
      auVar47 = ZEXT416(0xffffffff);
      auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar53 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar50,auVar55,auVar52);
      pSVar16 = Splines[*piVar12];
      uVar36 = ZEXT48(pSVar16);
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar50,auVar48,auVar49);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar47,auVar53);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar51,auVar57 | auVar54);
      dVar40 = (double)(*(float *)((int)pvVar13 + 8) +
                       (DAT_00873c40 * mobyutil::g_FrameTime) / *(float *)((int)pvVar13 + 0xc));
      auVar47 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      uVar18 = storeVectorElementWordIndexed(auVar50,8,uVar27);
      *(undefined4 *)((int)pvVar13 + 8U & 0xfffffffc) = uVar18;
      auVar47 = loadVectorLeftIndexed(in_LR,uVar36);
      auVar49 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      puVar19[0x33] = (longlong)pSVar16->cnt;
      auVar47 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanFloatingPoint
                (auVar50,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar47 = vectorSubtractFloatingPoint(auVar48,auVar49);
        dVar40 = (double)(float)(dVar40 - (double)(longlong)puVar19[0x33]);
        auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar18 = storeVectorElementWordIndexed
                           (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar27);
        *(undefined4 *)((int)pvVar13 + 8U & 0xfffffffc) = uVar18;
      }
      mobyutil::MB_PathEvalSpline(dVar40,uVar36,uVar36,1,lVar24 + 0x10,lVar24 + 0x40,0);
      iVar30 = piVar12[0xca];
      (moby->rotation).x = (moby->rotation).w;
      iVar30 = sound::IsMobyPlayingSound(moby,iVar30);
      if (iVar30 == 0) {
        iVar30 = sound::PlayMobySound(1,4,moby);
        piVar12[0xca] = iVar30;
      }
      uVar29 = worldUpdateTime;
      if ((worldUpdateTime & 3) == 0) {
        auVar47 = ZEXT416(0xfffffff0);
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar48 = loadVectorLeftIndexed(800,uVar37);
        auVar49 = loadVectorRightIndexed(0x330,uVar37);
        auVar50 = vectorShiftRightAlgebraicWord(auVar48 | auVar49,auVar47);
        auVar51 = loadVectorLeftIndexed(0x3c50,0x870000);
        auVar49 = vectorShiftRightWord(auVar48 | auVar49,auVar47);
        auVar47 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar48 = vectorConvertFromSignedFixedPointWord(auVar50,0);
        *(ushort *)((int)piVar12 + 0x322) = *(short *)((int)piVar12 + 0x322) + 1U & 0xf;
        auVar48 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,
                   auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar48._0_4_ = auVar49._0_4_ + 1;
          auVar48._8_8_ = auVar49._8_8_;
          auVar48._4_4_ = auVar49._4_4_ + 1;
          auVar47._0_8_ = auVar48._0_8_;
          auVar47._12_4_ = auVar49._12_4_;
          auVar47._8_4_ = auVar49._8_4_ + 1;
          auVar49._0_12_ = auVar47._0_12_;
          auVar49._12_4_ = auVar47._12_4_ + 1;
          auVar47 = vectorSplatHalfWord(auVar49,1);
          uVar17 = storeVectorElementHalfWordIndexed(auVar47,800,uVar37);
          *(undefined2 *)(piVar12 + 200) = uVar17;
        }
      }
      fVar2 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v1.z;
      fVar9 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v0.z;
      iVar30 = (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4);
      fVar4 = (moby->transform).v1.w;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->transform).v0.w;
      fVar8 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x20) =
           (moby->transform).v2.x * 0.45 +
           (moby->transform).v0.x * -1.2 + (moby->transform).v1.x * 0.4 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x24) =
           fVar9 * 0.45 + fVar3 * -1.2 + fVar2 * 0.4 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 0x2c) = fVar8 * 0.45 + fVar7 * -1.2 + fVar4 * 0.4;
      *(float *)((int)piVar12 + iVar30 + 0x28) = fVar6 * 0.45 + fVar5 * -1.2 + fVar10 * 0.4 + fVar2;
      iVar30 = (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4);
      *(undefined4 *)((int)piVar12 + (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4) + 0x2c)
           = 0x3f800000;
      fVar2 = (moby->transform).v0.y;
      fVar3 = (moby->transform).v2.y;
      fVar10 = (moby->transform).v0.z;
      fVar9 = (moby->transform).v2.z;
      fVar5 = (moby->transform).v0.w;
      fVar4 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x120) =
           (moby->transform).v2.x * -0.3 + (moby->transform).v0.x * -1.5 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x124) = fVar3 * -0.3 + fVar2 * -1.5 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 300) = fVar4 * -0.3 + fVar5 * -1.5;
      *(float *)((int)piVar12 + iVar30 + 0x128) = fVar9 * -0.3 + fVar10 * -1.5 + fVar2;
      sVar11 = *(short *)((int)piVar12 + 0x322);
      *(undefined4 *)((int)piVar12 + (int)((longlong)sVar11 << 4) + 300) = 0x3f800000;
      fVar2 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v0.y;
      iVar30 = (int)((longlong)sVar11 << 4);
      fVar10 = (moby->transform).v1.z;
      fVar9 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v0.z;
      fVar4 = (moby->transform).v1.w;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->transform).v0.w;
      fVar8 = (moby->transform).v2.w;
      *(float *)((int)piVar12 + iVar30 + 0x220) =
           (moby->transform).v2.x * 0.45 +
           (moby->transform).v0.x * -1.2 + (moby->transform).v1.x * -0.4 + (moby->pos).x;
      *(float *)((int)piVar12 + iVar30 + 0x224) =
           fVar9 * 0.45 + fVar3 * -1.2 + fVar2 * -0.4 + (moby->pos).y;
      fVar2 = (moby->pos).z;
      *(float *)((int)piVar12 + iVar30 + 0x22c) = fVar8 * 0.45 + fVar7 * -1.2 + fVar4 * -0.4;
      *(float *)((int)piVar12 + iVar30 + 0x228) =
           fVar6 * 0.45 + fVar5 * -1.2 + fVar10 * -0.4 + fVar2;
      puVar14 = (uint *)piVar12[0xc9];
      *(undefined4 *)((int)piVar12 + (int)((longlong)*(short *)((int)piVar12 + 0x322) << 4) + 0x22c)
           = 0x3f800000;
      if (uVar29 != *puVar14) {
        *puVar14 = uVar29;
        RegisterFuncForMoby(&PTR_M792_0045f698_0070ea40,moby);
      }
      fVar15 = (moby->pos).x;
      uVar29 = (int)fVar15 >> 0x1f;
      if ((0x40ffffff < (int)((uVar29 >> 1 ^ (uint)fVar15) - uVar29)) &&
         (fVar15 = (moby->pos).y, uVar29 = (int)fVar15 >> 0x1f,
         0x40ffffff < (int)((uVar29 >> 1 ^ (uint)fVar15) - uVar29))) {
        puVar38 = moby->pClass->collision;
      }
      moby->collision = puVar38;
      if ((iVar28 != 0) && (0 < *(int *)(iVar28 + 0x2c))) {
        moby->state = '\x02';
      }
    }
    else if (bVar1 < 3) {
      sound::PlayMobySound(0,0,moby);
      fVar4 = DAT_00873c5c;
      fVar5 = DAT_0071f408;
      fVar2 = (moby->transform).v0.z;
      fVar3 = (moby->transform).v0.x;
      fVar9 = DAT_00873c58 * DAT_0071f408;
      fVar10 = (moby->transform).v0.y;
      *(float *)((int)puVar19 + 0x8c) = (moby->transform).v0.w;
      lVar32 = lVar24 + 0x10;
      lVar25 = lVar24 + 0x40;
      fVar2 = fVar2 * fVar9;
      lVar26 = uVar27 - 0x180;
      *(float *)(puVar19 + 0x11) = fVar2;
      *(float *)(puVar19 + 0x10) = fVar3 * fVar9;
      *(float *)((int)puVar19 + 0x84) = fVar10 * fVar9;
      fVar3 = animationSpeed;
      *(float *)(puVar19 + 0x11) = fVar4 * fVar5 + fVar2;
      fVar2 = DAT_0071f418;
      dVar42 = 90.5;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(fVar3 * 90.5);
      dVar41 = 12.0;
      mobyutil::MB_SpawnDebrisMoby
                ((double)(fVar2 * 12.0),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      dVar40 = (double)animationSpeed;
      dVar46 = (double)DAT_0071f418;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(dVar40 * dVar42);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)(dVar46 * dVar41),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      dVar40 = (double)animationSpeed;
      dVar46 = (double)DAT_0071f418;
      puVar19[0xe] = ZEXT48(&DAT_00a15d30);
      puVar19[0xf] = ZEXT48(&DAT_00a15d30);
      puVar19[0x33] = (longlong)(int)(dVar40 * dVar42);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)(dVar46 * dVar41),lVar24,0x72e,lVar32,lVar25,
                 *(undefined4 *)((int)puVar19 + 0x19c),0,in_r9,lVar26);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (DAT_00873c54 != 0) {
      mobyupdate_helpers::M79_0045dfb0(lVar24);
    }
  }
  return;
}



//==== 0045f698  ns=mobyupdate_helpers  size=0x438
// sig: undefined M792_0045f698(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502910 fastfunc::FastCheckBsphereInView; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0096c074: 'None'

void mobyupdate_helpers::M792_0045f698(int param_1)

{
  longlong lVar1;
  byte bVar2;
  f32 fVar3;
  ushort uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  MobyInstance *pMVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  longlong lVar19;
  void *pvVar20;
  ulonglong unaff_r24;
  undefined4 *puVar21;
  ulonglong unaff_r25;
  undefined4 *puVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ushort *puVar24;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  float local_990 [612];
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0xa10;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar10;
  puVar6[0x144] = in_LR;
  puVar6[0x13f] = in_f29;
  puVar6[0x140] = in_f30;
  puVar6[0x141] = in_f31;
  puVar6[0x13e] = unaff_r31;
  puVar6[0x13a] = unaff_r27;
  iVar13 = DAT_010cced0;
  puVar6[0x13d] = unaff_r30;
  puVar6[0x13c] = unaff_r29;
  puVar6[0x13b] = unaff_r28;
  puVar6[0x139] = unaff_r26;
  puVar6[0x138] = unaff_r25;
  puVar6[0x137] = unaff_r24;
  puVar6[0x136] = unaff_r23;
  puVar6[0x135] = unaff_r22;
  puVar6[0x134] = unaff_r21;
  if (iVar13 == 0) {
    DAT_00873c50 = 5.0;
    if (Cheats[2] != '\0') {
      DAT_00873c50 = 16.0;
    }
    iVar13 = 0;
    lVar17 = lVar1;
    do {
      uVar11 = draw::GetEffectTex(0x13);
      iVar23 = (int)lVar17;
      *(undefined8 *)(iVar23 + 0x118) = uVar11;
      uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar23 + 0x120) = uVar11;
      uVar11 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar23 + 0x110) = uVar11;
      uVar11 = idol_draw::PackCmd(DAT_010cced8,DAT_00873c60,DAT_010ccedc,DAT_00873c64,0x80);
      *(undefined8 *)(iVar23 + 0x128) = uVar11;
      dVar26 = (double)fastfunc::FastIntToDouble(worldUpdateTime + 3U & 3);
      dVar30 = 1.0;
      dVar29 = 0.0;
      iVar23 = 0;
      puVar22 = &DAT_00873c70;
      puVar21 = &DAT_00873c74;
      dVar26 = (double)(float)(dVar26 / (double)(DAT_00873c50 * 4.0));
      lVar18 = lVar17;
      lVar19 = lVar17;
      do {
        uVar12 = *puVar21;
        *(undefined4 *)((int)lVar19 + 0xf0) = *puVar22;
        *(undefined4 *)((int)lVar19 + 0xf4) = uVar12;
        dVar27 = (double)fastfunc::FastIntToDouble((iVar13 - (iVar23 >> 1)) + 1);
        dVar28 = (double)(float)(dVar27 / (double)(float)((double)DAT_00873c50 + dVar26));
        dVar27 = dVar30;
        if ((dVar28 <= dVar30) && (dVar27 = dVar28, dVar28 < dVar29)) {
          dVar27 = dVar29;
        }
        uVar12 = fastfunc::FastLerpColor(dVar27,DAT_00873c68,PTR_DAT_00873c6c);
        iVar23 = iVar23 + 1;
        *(undefined4 *)((int)lVar18 + 0xe0) = uVar12;
        puVar22 = puVar22 + 2;
        lVar19 = lVar19 + 8;
        puVar21 = puVar21 + 2;
        lVar18 = lVar18 + 4;
      } while (iVar23 < 4);
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 0x90;
    } while (iVar13 < 0x10);
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar6 + 0x84) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0x3e19999a;
    *(undefined4 *)((int)puVar6 + 0x8c) = 0;
    bVar2 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)(puVar6 + 0x12) = 0;
    *(undefined4 *)((int)puVar6 + 0x94) = 0;
    *(undefined4 *)(puVar6 + 0x13) = 0xbe19999a;
    *(undefined4 *)((int)puVar6 + 0x9c) = 0;
    uVar11 = 0x4080000000000000;
    puVar24 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
    do {
      pMVar9 = MobyInstance;
      uVar14 = *puVar24 & 0x7fff;
      if ((MobyInstance[uVar14].oClass == SCENERY_SHIP) && (MobyInstance[uVar14].state == '\x01')) {
        pvVar5 = MobyInstance[uVar14].pVar;
        *(f32 *)(puVar6 + 0xe) = MobyInstance[uVar14].pos.x;
        *(f32 *)((int)puVar6 + 0x74) = pMVar9[uVar14].pos.y;
        fVar3 = pMVar9[uVar14].pos.z;
        *(undefined4 *)((int)puVar6 + 0x7c) = 0x41a00000;
        *(f32 *)(puVar6 + 0xf) = fVar3;
        iVar13 = fastfunc::FastCheckBsphereInView(uVar11,uVar10 - 0x9a0);
        if ((iVar13 != -1) && (lVar17 = 0, 0 < *(short *)((int)pvVar5 + 800))) {
          lVar19 = uVar10 - 0x970;
          lVar18 = lVar1;
          do {
            uVar4 = *(ushort *)((int)pvVar5 + 0x322);
            iVar13 = 0;
            pvVar20 = pvVar5;
            do {
              if (DAT_010cced4 == 0) {
                uVar14 = 0;
                lVar15 = lVar18 + 0xa0;
                lVar25 = 4;
                do {
                  uVar8 = uVar14 & 1;
                  uVar7 = (uint)(((longlong)((int)uVar14 >> 1) +
                                  (((ulonglong)uVar4 - lVar17) + 0xf & 0xf) & 0xffffffff) << 4) &
                          0xf0;
                  uVar14 = uVar14 + 1;
                  pfVar16 = (float *)lVar15;
                  *pfVar16 = *(float *)((int)pvVar20 + uVar7 + 0x20) + local_990[uVar8 * 4];
                  pfVar16[1] = *(float *)((int)pvVar20 + uVar7 + 0x24) + local_990[uVar8 * 4 + 1];
                  pfVar16[2] = *(float *)((int)pvVar20 + uVar7 + 0x28) + local_990[uVar8 * 4 + 2];
                  pfVar16[3] = *(float *)((int)pvVar20 + uVar7 + 0x2c);
                  lVar15 = lVar15 + 0x10;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                draw::FastDrawQuad(lVar19,0,0,EffectTexHeaders,9);
              }
              iVar13 = iVar13 + 1;
              pvVar20 = (void *)((int)pvVar20 + 0x100);
            } while (iVar13 < 3);
            lVar17 = lVar17 + 1;
            lVar19 = lVar19 + 0x90;
            lVar18 = lVar18 + 0x90;
          } while ((int)lVar17 < (int)*(short *)((int)pvVar5 + 800));
        }
      }
      uVar4 = *puVar24;
      puVar24 = puVar24 + 1;
    } while (-1 < (short)uVar4);
  }
  return;
}



//==== 0045fad0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M792_0045fad0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M792_0045fad0(void)

{
  DAT_00873cdc = 0x10000;
  return;
}



//==== 0045fb08  ns=mobyupdate_unsorted  size=0x8a4
// sig: undefined UpdateMoby_792(MobyInstance * moby)
// callers(0): 
// callees(7): 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 00112900 mobyutil::MB_GetOrientation; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 792 */

void mobyupdate_unsorted::UpdateMoby_792(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x150;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x2c] = in_LR;
  puVar13[0x29] = unaff_r31;
  puVar13[0x28] = unaff_r30;
  pMVar24 = MobyInstance;
  pvVar12 = moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  iVar19 = *(int *)((int)pvVar12 + 0xa0);
  fVar5 = (moby->rotation).x;
  *(f32 *)((int)puVar13 + 0x7c) = (moby->pos).w;
  puVar13[0x27] = unaff_r29;
  fVar6 = (moby->rotation).y;
  pMVar24 = pMVar24 + iVar19;
  *(float *)(puVar13 + 0xe) = -fVar2;
  *(f32 *)(puVar13 + 0x10) = fVar5;
  fVar5 = (moby->rotation).z;
  *(float *)((int)puVar13 + 0x74) = -fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar6;
  *(float *)(puVar13 + 0xf) = -fVar4;
  fVar6 = (moby->rotation).w;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  puVar13[0x26] = unaff_r28;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  mobyfunc::GetBonePosition(pMVar24,0,uVar16 - 0xc0);
  fVar2 = *(float *)(puVar13 + 0x12);
  fVar3 = *(float *)((int)puVar13 + 0x94);
  (moby->pos).x = fVar2;
  fVar4 = *(float *)(puVar13 + 0x13);
  (moby->pos).y = fVar3;
  fVar5 = *(f32 *)((int)puVar13 + 0x9c);
  uVar1 = moby->state;
  (moby->pos).z = fVar4;
  (moby->pos).w = fVar5;
  if (uVar1 == '\x06') goto LAB_00460344;
  if (uVar1 == '\x05') {
LAB_0045fe14:
    if ((((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) && (moby->setByGroup == '\0'))
       || ((fVar3 = fVar3 - g_heroPosition.y, fVar2 = fVar2 - g_heroPosition.x,
           SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 16.0 &&
           (((uVar1 == '\x05' && (g_heroPosition.z < fVar4 - 5.0)) ||
            ((uVar1 == '\x03' && (fVar4 + 5.0 < g_heroPosition.z)))))))) {
      if ((uVar1 == '\x05') || (uVar1 == '\x01')) {
        moby->state = '\x02';
        mobyutil::MB_SetAnimationNoBlend(pMVar24,0,0);
        iVar19 = sound::PlayMobySound(2,4,pMVar24);
        *(int *)((int)pvVar12 + 0xa4) = iVar19;
      }
      else {
        moby->state = '\x04';
        mobyutil::MB_SetAnimationNoBlend(pMVar24,2,0);
        iVar19 = sound::PlayMobySound(0,4,pMVar24);
        *(int *)((int)pvVar12 + 0xa4) = iVar19;
      }
    }
    else if (g_standingOnMoby != moby) {
      moby->setByGroup = '\0';
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 == '\x03') goto LAB_0045fe14;
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
            moby->state = '\x05';
          }
        }
        else if (uVar1 == '\0') {
          mobyfunc::GetBoneTransformations(pMVar24,0,uVar16 - 0xb0);
          fVar2 = ABS(*(float *)(puVar13 + 0x14));
          fVar4 = ABS(*(float *)((int)puVar13 + 0xa4));
          *(float *)((int)puVar13 + 0xe4) = fVar2 - fVar4;
          fVar7 = 0.0;
          uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
          fVar3 = fVar2;
          if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
            fVar3 = fVar4;
          }
          fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (0.0 < fVar3) {
            lVar17 = uVar16 - 0x140;
            lVar21 = uVar16 - 0x48;
            lVar23 = uVar16 - 0x38;
            lVar25 = 2;
            fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x114) = fVar3;
            *(float *)((int)puVar13 + 0x10c) = fVar3;
            *(float *)(puVar13 + 0x22) = fVar3;
            *(float *)(puVar13 + 0x21) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar4;
            *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar3;
            *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0xf8) * fVar3 * fVar3;
              iVar19 = (int)lVar21;
              lVar17 = lVar17 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
              lVar23 = lVar23 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar23 = uVar16 - 0x48;
            pfVar22 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar21 = lVar23;
            do {
              fVar3 = *pfVar22;
              fVar4 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar17 + 0x108) = *(float *)((int)lVar17 + 0x108) * fVar3;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
              lVar21 = lVar21 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar14 = (int)lVar23;
              lVar18 = lVar18 + 0x10;
              lVar23 = lVar23 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar19 + 0x108) + *(float *)(iVar14 + 4) +
                      *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            fVar7 = (fVar7 + 0.7853982) * fVar10 + fVar2;
          }
          (moby->rotation).z = fVar7;
          moby->state = '\x01';
          mobyutil::MB_SetAnimation(pMVar24,3,0,0);
        }
        goto LAB_00460344;
      }
    }
    mobyfunc::GetBoneTransformations(pMVar24,0,uVar16 - 0xb0);
    fVar10 = ABS(*(float *)(puVar13 + 0x14));
    fVar9 = ABS(*(float *)((int)puVar13 + 0xa4));
    *(float *)(puVar13 + 0x1c) = fVar10 - fVar9;
    fVar2 = 0.0;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    uVar20 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
    fVar15 = fVar10;
    if (*(float *)(puVar13 + 0x1c) - 0.0 < 0.0) {
      fVar15 = fVar9;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (*(float *)(puVar13 + 0x1c) - 0.0 < 0.0) {
      fVar9 = fVar10;
    }
    if (0.0 < fVar15) {
      lVar17 = uVar16 - 0x140;
      lVar23 = uVar16 - 0x58;
      lVar21 = uVar16 - 0x68;
      lVar25 = 2;
      fVar10 = (fVar9 - fVar15) / (fVar9 + fVar15);
      fVar9 = fVar10 * fVar10;
      *(float *)((int)puVar13 + 0xf4) = fVar10;
      *(float *)((int)puVar13 + 0xec) = fVar10;
      *(float *)(puVar13 + 0x1e) = fVar10;
      *(float *)(puVar13 + 0x1d) = fVar10;
      fVar10 = fVar9 * fVar9;
      *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar9;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar10 * fVar9;
      do {
        *(float *)((int)lVar17 + 0xe8) = *(float *)((int)lVar17 + 0xd8) * fVar10 * fVar10;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar10 * fVar10;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar23 = uVar16 - 0x68;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar10 = *pfVar22;
        fVar9 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xe8) = *(float *)((int)lVar17 + 0xe8) * fVar10;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar9;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar14 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar19 + 0xe8) + *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8)
                + *(float *)(iVar14 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar11 + fVar8;
    }
    (moby->rotation).z = fVar2;
    if ((SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
              (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) < 1.5) &&
       (g_heroPosition.z < fVar7 - 1.5)) {
      iVar19 = *(int *)((int)pvVar12 + 0xa4);
      pMVar24->unk58 = 0.0;
      if ((iVar19 != -1) &&
         ((sound::g_SoundChannels[iVar19].pMoby == pMVar24 &&
          (sound::g_SoundChannels[iVar19].state != '\0')))) {
        sound::sound_Kill(iVar19);
      }
      *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar7 = (moby->pos).z;
    }
    if ((pMVar24->unk58 == 0.0) &&
       ((2.0 < SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
                    (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) ||
        (fVar7 - 1.25 < g_heroPosition.z)))) {
      pMVar24->unk58 = 1.0;
      if (moby->state == '\x02') {
        iVar19 = sound::PlayMobySound(2,4,pMVar24);
      }
      else {
        iVar19 = sound::PlayMobySound(0,4,pMVar24);
      }
      *(int *)((int)pvVar12 + 0xa4) = iVar19;
    }
    if ((pMVar24->field43_0x70 & 2U) != 0) {
      iVar19 = *(int *)((int)pvVar12 + 0xa4);
      if (((iVar19 != -1) && (sound::g_SoundChannels[iVar19].pMoby == pMVar24)) &&
         (sound::g_SoundChannels[iVar19].state != '\0')) {
        sound::sound_Kill(iVar19);
      }
      *(undefined4 *)((int)pvVar12 + 0xa4) = 0xffffffff;
      if (moby->state == '\x02') {
        moby->state = '\x03';
        mobyutil::MB_SetAnimation(pMVar24,1,0,0);
        sound::PlayMobySound(3,0,pMVar24);
      }
      else {
        moby->state = '\x05';
        mobyutil::MB_SetAnimation(pMVar24,3,0,0);
        sound::PlayMobySound(1,0,pMVar24);
      }
      moby->setByGroup = '\x01';
    }
  }
LAB_00460344:
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  *(float *)(puVar13 + 0xe) = *(float *)(puVar13 + 0xe) + (moby->pos).x;
  *(float *)((int)puVar13 + 0x74) = *(float *)((int)puVar13 + 0x74) + fVar2;
  *(float *)(puVar13 + 0xf) = *(float *)(puVar13 + 0xf) + fVar3;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar12 + 0x60),(Vec4 *)(puVar13 + 0xe),uVar16 - 0xd0,
             (longlong)(int)moby + 0x40);
  return;
}



