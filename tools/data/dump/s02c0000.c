//==== 002c0b34  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1819_002c0b34(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1819_002c0b34(void)

{
  DAT_007b7ed8 = 0x10000;
  return;
}



//==== 002c0b48  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1819(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1819 */

void mobyupdate_unsorted::UpdateMoby_1819(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x71d,1,0x71d,1,5,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x71c);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c0c40  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1820(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1820 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1820(MobyInstance *moby)

{
  return moby;
}



//==== 002c0c60  ns=mobyupdate_unsorted  size=0x554
// sig: undefined UpdateMoby_1826(MobyInstance * moby)
// callers(0): 
// callees(6): 0006d720 RegisterFuncForMoby; 00109c30 mobyutil::OrganicDelt; 00112900 mobyutil::MB_GetOrientation; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 1826 */

void mobyupdate_unsorted::UpdateMoby_1826(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  Cylinder *pCVar10;
  f32 *val;
  int iVar11;
  longlong lVar12;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  Vec4 local_30;
  
  pCVar10 = Cylinders;
  local_50.x = -(moby->pos).x;
  fVar5 = (moby->pos).z;
  local_50.y = -(moby->pos).y;
  fVar2 = (moby->pos).z;
  pvVar6 = moby->pVar;
  uVar7 = (int)fVar5 >> 0x1f;
  local_50.z = -fVar2;
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  if (pvVar6 == (void *)0x0) {
    return;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar11 = *(int *)((int)pvVar6 + 0xa0);
      *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
      fVar2 = pCVar10[iVar11].matrix.v2.z;
      *(float *)((int)pvVar6 + 0xa8) = fVar2 + pCVar10[iVar11].pos.z;
      fVar4 = DAT_007b7efc;
      fVar3 = pCVar10[iVar11].pos.z;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      (moby->pos).z = fVar2 + fVar3 + fVar4;
    }
  }
  else if (bVar1 < 3) {
    iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
    if (iVar11 != 0) {
      sound::sound_Kill(*(int *)((int)pvVar6 + 0xb4));
      *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 20.0) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      fVar2 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].matrix.v2.z * fVar2 +
              Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.z + DAT_007b7efc;
      if (ABS(g_heroPosition.z - fVar2) < 1.0) {
        moby->setByGroup = moby->setByGroup + 1U & 1;
        *(float *)((int)pvVar6 + 0xa8) = fVar2;
        *(undefined4 *)((int)pvVar6 + 0xb0) = 0;
        moby->state = '\x03';
        goto LAB_002c1150;
      }
    }
    if ((g_standingOnMoby == moby) && (g_framesNotGrounded == 0)) {
      fVar2 = 1.0;
      if (moby->setByGroup != '\0') {
        fVar2 = -1.0;
      }
      moby->setByGroup = moby->setByGroup + 1U & 1;
      fVar9 = DAT_007b7efc;
      fVar3 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].matrix.v2.z;
      fVar4 = Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.z;
      *(undefined4 *)((int)pvVar6 + 0xb0) = 0;
      *(float *)((int)pvVar6 + 0xa8) = fVar3 * fVar2 + fVar4 + fVar9;
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    fVar3 = g_heroPosition.y - Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.y;
    fVar4 = g_heroPosition.x - Cylinders[*(int *)((int)pvVar6 + 0xa0)].pos.x;
    val = &(moby->pos).z;
    iVar11 = (int)pvVar6 + 0xb0;
    if (((2.25 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) ||
        (1.0 < ABS((fVar2 - g_heroPosition.z) - 2.0))) ||
       (uVar8 = (int)*(uint *)((int)pvVar6 + 0xa8) >> 0x1f,
       (int)((uVar7 >> 1 ^ (uint)fVar5) - uVar7) <
       (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0xa8)) - uVar8))) {
      local_30.z = mobyutil::OrganicDelt
                             (*(float *)((int)pvVar6 + 0xa8),DAT_007b7f0c * DAT_0071f418,
                              DAT_007b7f0c * DAT_0071f418,DAT_007b7f08 * mobyutil::g_FrameTime,val,
                              iVar11,(float *)iVar11);
    }
    else {
      fVar3 = DAT_007b7f0c * 4.0 * DAT_0071f418;
      local_30.z = mobyutil::OrganicDelt
                             (fVar2,fVar3,fVar3,DAT_007b7f08 * mobyutil::g_FrameTime,val,iVar11,
                              (float *)iVar11);
    }
    lVar12 = (longlong)(int)moby + 0x40;
    local_30.w = 0.0;
    local_30.y = 0.0;
    local_30.x = 0.0;
    mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar6 + 0x60),&local_30,lVar12,lVar12);
    if (local_30.z == 0.0) {
      iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
      if (iVar11 != 0) {
        sound::sound_Kill(*(int *)((int)pvVar6 + 0xb4));
        *(undefined4 *)((int)pvVar6 + 0xb4) = 0xffffffff;
      }
    }
    else {
      iVar11 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0xb4));
      if (iVar11 == 0) {
        iVar11 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0xb4) = iVar11;
      }
    }
    if (((moby->pos).z == *(f32 *)((int)pvVar6 + 0xa8)) &&
       ((g_standingOnMoby != moby || (g_framesNotGrounded != 0)))) {
      *(undefined4 *)((int)pvVar6 + 0x7c) = 0;
      *(undefined4 *)((int)pvVar6 + 0x78) = 0;
      *(undefined4 *)((int)pvVar6 + 0x74) = 0;
      *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      moby->state = '\x02';
    }
    else if (*(int *)((int)pvVar6 + 0xb0) != 0) {
      RegisterFuncForMoby(&PTR_M1827_002c11e8_0070b020,moby);
    }
  }
LAB_002c1150:
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 002c11e8  ns=mobyupdate_helpers  size=0x7c0
// sig: undefined M1827_002c11e8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502648 fastfunc::FastAddRots; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

ulonglong mobyupdate_helpers::M1827_002c11e8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong unaff_r24;
  int iVar17;
  ulonglong unaff_r25;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f19;
  double dVar25;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar26;
  ulonglong in_f22;
  double dVar27;
  ulonglong in_f23;
  double dVar28;
  ulonglong in_f24;
  double dVar29;
  ulonglong in_f25;
  double dVar30;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar15 = uVar10 - 0x240;
  puVar6 = (ulonglong *)lVar15;
  *puVar6 = uVar10;
  puVar6[0x4a] = in_LR;
  puVar6[0x3b] = in_f19;
  puVar6[0x3c] = in_f20;
  puVar6[0x3d] = in_f21;
  puVar6[0x3e] = in_f22;
  puVar6[0x3f] = in_f23;
  puVar6[0x40] = in_f24;
  puVar6[0x41] = in_f25;
  puVar6[0x42] = in_f26;
  puVar6[0x43] = in_f27;
  puVar6[0x44] = in_f28;
  puVar6[0x45] = in_f29;
  puVar6[0x46] = in_f30;
  puVar6[0x47] = in_f31;
  puVar6[0x39] = unaff_r30;
  lVar8 = uVar10 - 0xc0;
  puVar9 = (undefined4 *)lVar8;
  puVar9[3] = in_vr31_32_3;
  puVar9[2] = in_vr31_32_2;
  puVar9[1] = in_vr31_32_1;
  *puVar9 = in_vr31_32_0;
  puVar6[0x36] = unaff_r27;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x35] = unaff_r26;
  uVar12 = DAT_007b7f28;
  uVar4 = DAT_007b7f24;
  fVar1 = *(float *)(iVar5 + 0xb0);
  fVar2 = Cylinders[*(int *)(iVar5 + 0xa0)].pos.z;
  fVar3 = Cylinders[*(int *)(iVar5 + 0xa0)].matrix.v2.z;
  fVar7 = DAT_007b7f08 * mobyutil::g_FrameTime;
  dVar36 = (double)((fVar2 - fVar3) + *(float *)(iVar5 + 0xb8));
  dVar28 = (double)(fVar2 + fVar3 + *(float *)(iVar5 + 0xb8));
  puVar6[0x3a] = unaff_r31;
  puVar6[0x38] = unaff_r29;
  puVar6[0x37] = unaff_r28;
  puVar6[0x34] = unaff_r25;
  puVar6[0x33] = unaff_r24;
  uVar12 = fastfunc::FastLerpColor((double)(ABS(fVar1) / fVar7),uVar4,uVar12);
  fastfunc::FastMtxCopyNoTranslate(uVar10 - 0x1d0,param_1 + 0xc0);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar4;
  *(float *)(puVar6 + 0x15) = (float)dVar36;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar11 = draw::GetEffectTex(0xe);
  puVar6[0x25] = uVar11;
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar11;
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_010a0bd0,DAT_007b7f1c,DAT_010a0bd4,DAT_007b7f20,0x80);
  puVar6[0x27] = uVar11;
  auVar40 = loadVectorLeftIndexed(lVar8,0x2c11b4);
  auVar43 = ZEXT416(0);
  auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar43 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar16 = 0;
  auVar40 = loadVectorLeftIndexed(4,0x2c11b4);
  dVar29 = 0.01745329238474369;
  auVar48 = loadVectorLeftIndexed(8,0x2c11b4);
  dVar30 = 1.570796251296997;
  auVar50 = loadVectorLeftIndexed(0xc,0x2c11b4);
  dVar31 = 3.141592502593994;
  auVar47 = loadVectorLeftIndexed(0x10,0x2c11b4);
  dVar32 = -3.141592502593994;
  auVar42 = loadVectorLeftIndexed(0x14,0x2c11b4);
  dVar33 = -0.16666656732559204;
  auVar44 = loadVectorLeftIndexed(0x18,0x2c11b4);
  dVar34 = 0.008333025500178337;
  puVar14 = &DAT_007b7f34;
  auVar45 = loadVectorLeftIndexed(0x1c,0x2c11b4);
  puVar9 = &DAT_007b7f38;
  dVar35 = -0.0001980741071747616;
  lVar13 = uVar10 - 400;
  auVar46 = loadVectorLeftIndexed(0x20,0x2c11b4);
  uVar11 = uVar10 - 0x18c;
  dVar37 = 2.601886990305502e-06;
  auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar49 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
  auVar40 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar48 = auVar50 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar50 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar47 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar44 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar45 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  auVar48 = auVar46 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar46 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
  dVar36 = (double)*(float *)(puVar6 + 0x15);
  lVar8 = lVar15;
  auVar48 = auVar39;
  do {
    uVar4 = *puVar9;
    *(undefined4 *)((int)lVar8 + 0x100) = *puVar14;
    *(undefined4 *)((int)lVar8 + 0x104) = uVar4;
    iVar17 = (int)lVar15;
    if ((uVar16 & 1) == 0) {
      auVar41 = loadVectorLeftIndexed(0x7f14,0x7b0000);
      auVar41 = vectorSubtractFloatingPoint
                          (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      *(float *)(iVar17 + 0xb8) = -DAT_007b7f18;
    }
    else {
      *(float *)(iVar17 + 0xb8) = DAT_007b7f18;
      auVar41 = loadVectorLeftIndexed(0x7f14,0x7b0000);
    }
    auVar52 = ZEXT416(0xffffffff);
    auVar51 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(1);
    auVar38 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar54 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar56 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar53 = vectorShiftRightAlgebraicWord(auVar48,auVar38);
    auVar51 = loadVectorLeftIndexed(0x7f30,0x7b0000);
    auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar51,auVar49,auVar52);
    auVar57 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar56 = vectorConvertFromSignedFixedPointWord(auVar53,0);
    auVar52 = ZEXT416(0xffffffff);
    auVar60 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar51 = vectorMultiplyAddFloatingPoint(auVar51,auVar49,auVar55);
    auVar52 = ZEXT416(0xffffffff);
    auVar55 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar53 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar58 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar59 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar53 = vectorMultiplyAddFloatingPoint
                        (auVar54,auVar56,
                         auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar51,auVar56,auVar57);
    auVar54._0_4_ = auVar48._0_4_ + auVar38._0_4_;
    auVar54._8_8_ = auVar48._8_8_;
    auVar54._4_4_ = auVar48._4_4_ + auVar38._4_4_;
    auVar51._0_8_ = auVar54._0_8_;
    auVar51._12_4_ = auVar48._12_4_;
    auVar51._8_4_ = auVar48._8_4_ + auVar38._8_4_;
    auVar48._0_12_ = auVar51._0_12_;
    auVar48._12_4_ = auVar51._12_4_ + auVar38._12_4_;
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    uVar16 = uVar16 + 1;
    puVar14 = puVar14 + 2;
    puVar9 = puVar9 + 2;
    lVar8 = lVar8 + 8;
    auVar41 = vectorSubtractFloatingPoint(auVar50,auVar53);
    auVar56 = vectorSubtractFloatingPoint(auVar47,auVar53);
    auVar57 = vectorSubtractFloatingPoint(auVar50,auVar52);
    auVar51 = vectorCompareGreaterThanFloatingPoint(auVar41,auVar53);
    auVar51 = vectorConditionalSelect(auVar41,auVar53,auVar51);
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar57,auVar52);
    auVar54 = vectorSubtractFloatingPoint(auVar47,auVar52);
    auVar52 = vectorConditionalSelect(auVar57,auVar52,auVar41);
    auVar41 = ZEXT416(0xffffffff);
    auVar53 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar51,auVar56);
    auVar51 = vectorConditionalSelect(auVar56,auVar51,auVar41);
    auVar56 = vectorShiftLeftIntegerWord(auVar60,auVar60);
    auVar62 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar51,auVar51,auVar55);
    auVar41 = ZEXT416(0xffffffff);
    auVar57 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar52,auVar54);
    auVar52 = vectorConditionalSelect(auVar54,auVar52,auVar41);
    auVar41 = ZEXT416(0xffffffff);
    auVar54 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar56 = vectorMultiplyAddFloatingPoint(auVar52,auVar52,auVar56);
    auVar54 = vectorShiftLeftIntegerWord(auVar54,auVar54);
    auVar60 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar53,auVar51,auVar58);
    auVar41 = ZEXT416(0xffffffff);
    auVar58 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar61 = vectorShiftLeftIntegerWord(auVar57,auVar57);
    auVar54 = vectorMultiplyAddFloatingPoint(auVar56,auVar52,auVar54);
    auVar57 = vectorMultiplyAddFloatingPoint(auVar53,auVar55,auVar59);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar55,auVar42,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar55 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar59 = vectorMultiplyAddFloatingPoint(auVar56,auVar54,auVar62);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar54,auVar42,auVar52);
    auVar54 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar58 = vectorMultiplyAddFloatingPoint(auVar53,auVar57,auVar60);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar57,auVar44,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar57 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar55 = vectorMultiplyAddFloatingPoint(auVar56,auVar59,auVar55);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar59,auVar44,auVar52);
    auVar53 = vectorMultiplyAddFloatingPoint(auVar53,auVar58,auVar61);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar58,auVar45,auVar51);
    auVar41 = ZEXT416(0xffffffff);
    auVar58 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    auVar54 = vectorMultiplyAddFloatingPoint(auVar56,auVar55,auVar54);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar55,auVar45,auVar52);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar53,auVar46,auVar51);
    auVar53 = vectorShiftLeftIntegerWord(auVar58,auVar58);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar54,auVar46,auVar41);
    auVar51 = vectorMultiplyAddFloatingPoint(auVar52,auVar38,auVar57);
    auVar52 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar53);
    auVar41 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0,lVar13);
    *(undefined4 *)lVar13 = uVar4;
    lVar13 = lVar13 + 0x10;
    auVar41 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0,uVar11);
    *(undefined4 *)uVar11 = uVar4;
    *(undefined4 *)(iVar17 + 0xbc) = 0x3f800000;
    uVar11 = uVar11 + 0x10;
    lVar15 = lVar15 + 0x10;
  } while ((int)uVar16 < 4);
  iVar17 = 1;
  if (dVar36 < dVar28) {
    do {
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar40 = loadVectorLeftIndexed(0x7f30,0x7b0000);
      auVar48 = vectorReciprocalEstimateFloatingPoint(auVar40);
      puVar6[0x28] = (longlong)(worldUpdateTime % 0x78);
      auVar43 = loadVectorLeftIndexed(0x2c,0x2c11b4);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      uVar11 = 0x28;
      auVar43 = ZEXT416(0xffffffff);
      auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      iVar17 = -iVar17;
      iVar18 = 0;
      auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar43,auVar44);
      auVar43 = ZEXT416(0xffffffff);
      auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = loadVectorLeftIndexed(0x28,0x2c11b4);
      uVar19 = puVar6[0x28];
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      dVar27 = 360.0;
      auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar45);
      dVar20 = (double)DAT_007b7f30;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar40,auVar42);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar44);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar47);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar39,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        puVar6[0x28] = (longlong)iVar17;
        dVar26 = 1.5707963705062866;
        dVar36 = (double)((float)(longlong)puVar6[0x28] * (float)(longlong)uVar19 * 0.026179917);
        do {
          puVar6[0x28] = (longlong)iVar18;
          dVar25 = (double)(longlong)puVar6[0x28];
          dVar20 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)(dVar20 * dVar29) * dVar25 + dVar36));
          dVar21 = (double)(float)(dVar20 + dVar30);
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)DAT_007b7f30;
          dVar21 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
          dVar22 = (double)(float)(dVar21 * dVar24);
          *(float *)(puVar6 + 0xe) =
               (float)((double)(float)(dVar21 * dVar22) * dVar37 +
                      (double)(float)(dVar22 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar21 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar21 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)(dVar20 * dVar29) * dVar25 + dVar36));
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar22 = (double)DAT_007b7f30;
          *(undefined4 *)(puVar6 + 0xf) = 0;
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
          dVar21 = (double)(float)(dVar20 * dVar24);
          *(float *)((int)puVar6 + 0x74) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar20 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar22 * dVar29) *
                                                              dVar25 + dVar26) + dVar36));
          dVar21 = (double)(float)(dVar20 + dVar30);
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar22 = (double)DAT_007b7f30;
          dVar23 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar23 = dVar20;
          }
          dVar20 = (double)(float)(dVar23 * dVar23);
          dVar24 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
          dVar21 = (double)(float)(dVar20 * dVar24);
          *(float *)(puVar6 + 0x10) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar24 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar23)
                                                                    * dVar33 + dVar23))));
          dVar21 = (double)fastfunc::FastAddRots
                                     ((float)((double)(float)((double)(float)(dVar22 * dVar29) *
                                                              dVar25 + dVar26) + dVar36));
          uVar4 = EffectTexHeaders;
          *(undefined4 *)(puVar6 + 0x11) = 0;
          *(undefined4 *)(puVar6 + 0x13) = 0x3f800000;
          *(undefined4 *)((int)puVar6 + 0xfc) = uVar12;
          *(undefined4 *)(puVar6 + 0x1f) = uVar12;
          *(undefined4 *)((int)puVar6 + 0xf4) = uVar12;
          *(undefined4 *)(puVar6 + 0x1e) = uVar12;
          dVar20 = (double)(float)(dVar31 - dVar21);
          if (dVar21 - (double)(float)(dVar31 - dVar21) < 0.0) {
            dVar20 = dVar21;
          }
          dVar25 = (double)(float)(dVar32 - dVar21);
          if ((double)(float)(dVar32 - dVar21) - dVar20 < 0.0) {
            dVar25 = dVar20;
          }
          dVar20 = (double)(float)(dVar25 * dVar25);
          dVar23 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar25));
          dVar21 = (double)(float)(dVar20 * dVar23);
          *(float *)((int)puVar6 + 0x84) =
               (float)((double)(float)(dVar20 * dVar21) * dVar37 +
                      (double)(float)(dVar21 * dVar35 +
                                     (double)(float)(dVar23 * dVar34 +
                                                    (double)(float)((double)(float)(dVar20 * dVar25)
                                                                    * dVar33 + dVar25))));
          draw::FastDrawQuad(uVar10 - 400,uVar10 - 0x1d0,0,uVar4,9);
          dVar20 = (double)DAT_007b7f30;
          iVar18 = iVar18 + 1;
          uVar11 = (ulonglong)iVar18;
          puVar6[0x28] = uVar11;
        } while ((float)(longlong)puVar6[0x28] < (float)(dVar27 / dVar20));
        dVar36 = (double)*(float *)(puVar6 + 0x15);
      }
      fVar1 = (float)(dVar36 + (double)*(float *)(iVar5 + 0xbc));
      dVar36 = (double)fVar1;
      *(float *)(puVar6 + 0x15) = fVar1;
    } while (dVar36 < dVar28);
  }
  return uVar11;
}



//==== 002c19a8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1827_002c19a8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1827_002c19a8(void)

{
  DAT_007b7fa0 = 0x10000;
  return;
}



//==== 002c19c0  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1827(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1827 */

void mobyupdate_unsorted::UpdateMoby_1827(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x725,1,0x725,1,1,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x724);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c1ab8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1828(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1828 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1828(MobyInstance *moby)

{
  return moby;
}



//==== 002c1abc  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1834(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1834 */

void mobyupdate_unsorted::UpdateMoby_1834(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x72c,1,0x72c,1,1,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x72b);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c1bb4  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1835(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1835 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1835(MobyInstance *moby)

{
  return moby;
}



//==== 002c1bd0  ns=mobyupdate_helpers  size=0x3e8
// sig: undefined M1843_002c1bd0(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1843_002c1bd0(int param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  void *pvVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong lVar14;
  ulonglong unaff_r23;
  longlong lVar15;
  ulonglong unaff_r24;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar17;
  int iVar18;
  ulonglong unaff_r27;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  int iVar22;
  ushort *puVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  float local_9a0 [616];
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa10;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x144] = in_LR;
  puVar6[0x13e] = in_f28;
  puVar6[0x13f] = in_f29;
  puVar6[0x140] = in_f30;
  puVar6[0x141] = in_f31;
  puVar6[0x13d] = unaff_r31;
  cVar2 = *(char *)(param_1 + 0x21);
  puVar6[0x13c] = unaff_r30;
  puVar6[0x13b] = unaff_r29;
  puVar6[0x13a] = unaff_r28;
  puVar6[0x139] = unaff_r27;
  puVar6[0x138] = unaff_r26;
  puVar6[0x137] = unaff_r25;
  puVar6[0x136] = unaff_r24;
  puVar6[0x135] = unaff_r23;
  puVar6[0x134] = unaff_r22;
  puVar6[0x133] = unaff_r21;
  if (cVar2 != -1) {
    DAT_007b7fd4 = 5.0;
    if (Cheats[2] != '\0') {
      DAT_007b7fd4 = 16.0;
    }
    iVar22 = 0;
    dVar30 = 4.0;
    dVar29 = 1.0;
    dVar28 = 0.0;
    lVar14 = lVar1;
    do {
      uVar8 = draw::GetEffectTex(0x13);
      iVar21 = (int)lVar14;
      *(undefined8 *)(iVar21 + 0x108) = uVar8;
      uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar21 + 0x110) = uVar8;
      uVar8 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar21 + 0x100) = uVar8;
      uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
      *(undefined8 *)(iVar21 + 0x118) = uVar8;
      dVar25 = (double)fastfunc::FastIntToDouble(worldUpdateTime + 3U & 3);
      iVar21 = 0;
      puVar19 = &DAT_007b7fd8;
      puVar17 = &DAT_007b7fdc;
      dVar25 = (double)(float)(dVar25 / (double)(float)((double)DAT_007b7fd4 * dVar30));
      lVar15 = lVar14;
      lVar16 = lVar14;
      do {
        uVar9 = *puVar17;
        *(undefined4 *)((int)lVar16 + 0xe0) = *puVar19;
        *(undefined4 *)((int)lVar16 + 0xe4) = uVar9;
        dVar26 = (double)fastfunc::FastIntToDouble((iVar22 - (iVar21 >> 1)) + 1);
        dVar27 = (double)(float)((double)(float)(dVar26 / (double)DAT_007b7fd4) + dVar25);
        dVar26 = dVar29;
        if ((dVar27 <= dVar29) && (dVar26 = dVar27, dVar27 < dVar28)) {
          dVar26 = dVar28;
        }
        uVar9 = fastfunc::FastLerpColor(dVar26,0xffffffff8c28aa28,0x144646);
        iVar21 = iVar21 + 1;
        *(undefined4 *)((int)lVar15 + 0xd0) = uVar9;
        puVar19 = puVar19 + 2;
        lVar16 = lVar16 + 8;
        puVar17 = puVar17 + 2;
        lVar15 = lVar15 + 4;
      } while (iVar21 < 4);
      iVar22 = iVar22 + 1;
      lVar14 = lVar14 + 0x90;
    } while (iVar22 < 0x10);
    bVar3 = *(byte *)(param_1 + 0x21);
    *(undefined4 *)(puVar6 + 0xe) = 0;
    *(undefined4 *)((int)puVar6 + 0x74) = 0;
    *(undefined4 *)(puVar6 + 0xf) = 0x3e800000;
    *(undefined4 *)((int)puVar6 + 0x7c) = 0;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *(undefined4 *)((int)puVar6 + 0x84) = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xbe800000;
    *(undefined4 *)((int)puVar6 + 0x8c) = 0;
    puVar23 = (ushort *)(&mobyutil::g_MobyGroups)[bVar3];
    do {
      uVar20 = *puVar23 & 0x7fff;
      if ((MobyInstance[uVar20].enabled != '\0') &&
         (MobyInstance[uVar20].oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        pvVar5 = MobyInstance[uVar20].pVar;
        iVar22 = 0;
        lVar15 = lVar1;
        lVar14 = lVar1;
        if (0 < *(int *)((int)pvVar5 + 0x2c0)) {
          do {
            iVar18 = 0;
            iVar21 = (int)pvVar5 + 0xc0;
            uVar20 = (*(int *)((int)pvVar5 + 0x2c4) - iVar22) + 0xf;
            do {
              uVar10 = 0;
              lVar16 = lVar15 + 0x90;
              lVar24 = 4;
              do {
                uVar7 = uVar10 & 1;
                uVar12 = ((int)uVar10 >> 1) +
                         uVar20 + (((int)uVar20 >> 4) +
                                  (uint)((int)uVar20 < 0 && (uVar20 & 0xf) != 0)) * -0x10;
                pfVar13 = (float *)((uVar12 + (((int)uVar12 >> 4) +
                                              (uint)((int)uVar12 < 0 && (uVar12 & 0xf) != 0)) *
                                              -0x10) * 0x10 + iVar21);
                uVar10 = uVar10 + 1;
                pfVar11 = (float *)lVar16;
                *pfVar11 = *pfVar13 + local_9a0[uVar7 * 4];
                pfVar11[1] = pfVar13[1] + local_9a0[uVar7 * 4 + 1];
                pfVar11[2] = pfVar13[2] + local_9a0[uVar7 * 4 + 2];
                pfVar11[3] = pfVar13[3];
                lVar16 = lVar16 + 0x10;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              draw::FastDrawQuad(lVar14 + 0x90,0,0,EffectTexHeaders,9);
              iVar18 = iVar18 + 1;
              iVar21 = iVar21 + 0x100;
            } while (iVar18 < 2);
            iVar22 = iVar22 + 1;
            lVar15 = lVar15 + 0x90;
            lVar14 = lVar14 + 0x90;
          } while (iVar22 < *(int *)((int)pvVar5 + 0x2c0));
        }
      }
      uVar4 = *puVar23;
      puVar23 = puVar23 + 1;
    } while (-1 < (short)uVar4);
  }
  return;
}



//==== 002c1fc8  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1843_002c1fc8(void)
// callers(1): 002c3118 mobyupdate_unsorted::UpdateMoby_1843
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1843_002c1fc8(MobyInstance *param_1)

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
  float fVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte in_cr6;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar14 = worldUpdateTime;
  pvVar11 = param_1->pVar;
  uVar15 = ZEXT48(pvVar11);
  bVar1 = worldUpdateTime != 0;
  uVar16 = (ulonglong)*(uint *)((int)pvVar11 + 0x2c4);
  if ((worldUpdateTime & 3) == 0) {
    uVar16 = uVar16 + 1;
    auVar17 = loadVectorLeftIndexed(0x2c0,uVar15);
    auVar18 = loadVectorRightIndexed(0x2d0,uVar15);
    auVar19 = loadVectorLeftIndexed(0x7fd4,0x7b0000);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar16 = uVar16 + ((longlong)((int)uVar16 >> 4) +
                      (ulonglong)((int)uVar16 < 0 && (uVar16 & 0xf) != 0)) * -0x10;
    *(int *)((int)pvVar11 + 0x2c4) = (int)uVar16;
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
               auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar19 = ZEXT416(SUB164(auVar17 | auVar18,0xc) + 1) & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x2c0,uVar15
                         );
      *(undefined4 *)((int)pvVar11 + 0x2c0U & 0xfffffffc) = uVar13;
    }
  }
  iVar12 = (int)(uVar16 << 4);
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 + 0xc0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * 0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 + 0xc4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * 0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 + 0xcc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * 0.7;
  *(float *)((int)pvVar11 + iVar12 + 200) = fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * 0.7 + fVar2;
  iVar12 = *(int *)((int)pvVar11 + 0x2c4);
  *(undefined4 *)((int)pvVar11 + iVar12 * 0x10 + 0xcc) = 0x3f800000;
  fVar2 = (param_1->transform).v1.y;
  fVar3 = (param_1->transform).v0.y;
  fVar4 = (param_1->transform).v1.z;
  fVar5 = (param_1->transform).v2.y;
  fVar6 = (param_1->transform).v0.z;
  fVar7 = (param_1->transform).v1.w;
  fVar8 = (param_1->transform).v2.z;
  fVar9 = (param_1->transform).v0.w;
  fVar10 = (param_1->transform).v2.w;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c0) =
       (param_1->transform).v2.x * 0.3 +
       (param_1->transform).v0.x * -1.2 + (param_1->transform).v1.x * -0.7 + (param_1->pos).x;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c4) =
       fVar5 * 0.3 + fVar3 * -1.2 + fVar2 * -0.7 + (param_1->pos).y;
  fVar2 = (param_1->pos).z;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1cc) = fVar10 * 0.3 + fVar9 * -1.2 + fVar7 * -0.7;
  *(float *)((int)pvVar11 + iVar12 * 0x10 + 0x1c8) =
       fVar8 * 0.3 + fVar6 * -1.2 + fVar4 * -0.7 + fVar2;
  *(undefined4 *)((int)pvVar11 + *(int *)((int)pvVar11 + 0x2c4) * 0x10 + 0x1cc) = 0x3f800000;
  if ((bVar1) && (uVar14 != **(uint **)((int)pvVar11 + 0x2c8))) {
    **(uint **)((int)pvVar11 + 0x2c8) = uVar14;
    RegisterFuncForMoby(&PTR_M1843_002c1bd0_0070b050,param_1);
  }
  return;
}



//==== 002c2230  ns=mobyupdate_helpers  size=0xb40
// sig: undefined M1843_002c2230(void)
// callers(1): 002c3118 mobyupdate_unsorted::UpdateMoby_1843
// callees(4): 00109c30 mobyutil::OrganicDelt; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1843_002c2230(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  Spline *pSVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar31;
  ulonglong uVar29;
  longlong lVar30;
  int iVar32;
  float *pfVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f14;
  double dVar40;
  ulonglong in_f15;
  double dVar41;
  ulonglong in_f16;
  double dVar42;
  ulonglong in_f17;
  double dVar43;
  ulonglong in_f18;
  double dVar44;
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  double dVar46;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar27 = uVar25 - 0x220;
  puVar18 = (ulonglong *)lVar27;
  *puVar18 = uVar25;
  puVar18[0x46] = in_LR;
  puVar18[0x32] = in_f14;
  puVar18[0x33] = in_f15;
  puVar18[0x34] = in_f16;
  puVar18[0x35] = in_f17;
  puVar18[0x36] = in_f18;
  puVar18[0x37] = in_f19;
  puVar18[0x38] = in_f20;
  puVar18[0x39] = in_f21;
  puVar18[0x3a] = in_f22;
  puVar18[0x3b] = in_f23;
  puVar18[0x3c] = in_f24;
  puVar18[0x3d] = in_f25;
  puVar18[0x3e] = in_f26;
  puVar18[0x3f] = in_f27;
  puVar18[0x40] = in_f28;
  puVar18[0x41] = in_f29;
  puVar18[0x42] = in_f30;
  puVar18[0x43] = in_f31;
  puVar18[0x31] = unaff_r31;
  puVar18[0x30] = unaff_r30;
  iVar15 = *(int *)(param_1 + 0x78);
  iVar16 = *(int *)(iVar15 + 100);
  pSVar17 = Splines[*(int *)(iVar15 + 0x60)];
  iVar31 = pSVar17->cnt;
  iVar32 = (iVar16 + 1) - ((iVar16 + 1) / iVar31) * iVar31;
  dVar46 = (double)pSVar17->points[iVar16].x;
  dVar45 = (double)pSVar17->points[iVar16].y;
  dVar43 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 4) * 4);
  dVar42 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 5) * 4);
  iVar31 = (iVar16 + 2) - ((iVar16 + 2) / iVar31) * iVar31;
  fVar1 = (float)(dVar46 - dVar43);
  fVar2 = (float)(dVar45 - dVar42);
  dVar44 = (double)pSVar17->points[iVar16].z;
  dVar35 = (double)*(float *)((int)pSVar17 + (iVar32 * 4 + 6) * 4);
  dVar41 = 0.0;
  fVar4 = *(float *)((int)pSVar17 + (iVar31 * 4 + 4) * 4);
  fVar5 = *(float *)((int)pSVar17 + (iVar31 * 4 + 5) * 4);
  fVar6 = *(float *)((int)pSVar17 + (iVar31 * 4 + 6) * 4);
  *(float *)(puVar18 + 0x1d) = fVar1;
  *(float *)((int)puVar18 + 0xec) = fVar2;
  *(undefined4 *)((int)puVar18 + 0x7c) = 0;
  *(float *)(puVar18 + 0x1e) = ABS(fVar1) - ABS(fVar2);
  *(undefined4 *)(puVar18 + 0xf) = 0;
  *(undefined4 *)((int)puVar18 + 0x74) = 0;
  *(undefined4 *)(puVar18 + 0xe) = 0;
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xec) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar18 + 0x1d));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar3 = ABS(fVar2);
  }
  fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar7 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  fVar14 = ABS(*(float *)((int)puVar18 + 0xec));
  if (*(float *)(puVar18 + 0x1e) - 0.0 < 0.0) {
    fVar14 = ABS(fVar1);
  }
  dVar36 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xbc;
    lVar28 = uVar25 - 0xcc;
    lVar34 = 2;
    fVar3 = (fVar14 - fVar3) / (fVar14 + fVar3);
    fVar14 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x154) = fVar3;
    *(float *)(puVar18 + 0x2b) = fVar3;
    *(float *)((int)puVar18 + 0x15c) = fVar3;
    *(float *)(puVar18 + 0x2c) = fVar3;
    fVar3 = fVar14 * fVar14;
    *(float *)(puVar18 + 0x2b) = *(float *)(puVar18 + 0x2b) * fVar14;
    *(float *)((int)puVar18 + 0x15c) = *(float *)((int)puVar18 + 0x15c) * fVar3;
    *(float *)(puVar18 + 0x2c) = *(float *)(puVar18 + 0x2c) * fVar3 * fVar14;
    do {
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x144) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xcc;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar14 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x154) = *(float *)((int)lVar26 + 0x154) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar14;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0x154)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar13 + fVar7);
  }
  fVar4 = (float)(dVar43 - (double)fVar4);
  fVar5 = (float)(dVar42 - (double)fVar5);
  *(float *)((int)puVar18 + 0xdc) = fVar4;
  *(float *)(puVar18 + 0x1c) = fVar5;
  *(float *)((int)puVar18 + 0xe4) = ABS(fVar4) - ABS(fVar5);
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x1c) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)((int)puVar18 + 0xdc));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar3 = ABS(fVar5);
  }
  fVar7 = ABS(*(float *)(puVar18 + 0x1c));
  if (*(float *)((int)puVar18 + 0xe4) - 0.0 < 0.0) {
    fVar7 = ABS(fVar4);
  }
  fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar13 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar37 = dVar41;
  if (0.0 < fVar3) {
    lVar26 = uVar25 - 0x210;
    lVar30 = uVar25 - 0xdc;
    lVar28 = uVar25 - 0xec;
    lVar34 = 2;
    fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x134) = fVar3;
    *(float *)(puVar18 + 0x27) = fVar3;
    *(float *)((int)puVar18 + 0x13c) = fVar3;
    *(float *)(puVar18 + 0x28) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x27) = *(float *)(puVar18 + 0x27) * fVar7;
    *(float *)((int)puVar18 + 0x13c) = *(float *)((int)puVar18 + 0x13c) * fVar3;
    *(float *)(puVar18 + 0x28) = *(float *)(puVar18 + 0x28) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x124) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar28 = lVar28 + 8;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0xec;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x134) = *(float *)((int)lVar26 + 0x134) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar16 + 0x134)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar14 + fVar13);
  }
  fVar3 = (float)(dVar35 - dVar44);
  dVar40 = (double)fVar3;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  *(float *)((int)puVar18 + 0xd4) = fVar3;
  dVar38 = ABS((double)fVar1);
  *(float *)(puVar18 + 0x1a) = fVar1;
  *(float *)(puVar18 + 0x1b) = (float)(dVar38 - ABS(dVar40));
  uVar29 = (ulonglong)(*(uint *)(puVar18 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xd4) >> 0x1d) & 4;
  dVar47 = ABS((double)*(float *)(puVar18 + 0x1a));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar47 = ABS(dVar40);
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  dVar39 = ABS((double)*(float *)((int)puVar18 + 0xd4));
  if (*(float *)(puVar18 + 0x1b) - 0.0 < 0.0) {
    dVar39 = dVar38;
  }
  fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar38 = dVar41;
  if (0.0 < dVar47) {
    lVar26 = uVar25 - 0x210;
    lVar28 = uVar25 - 0x10c;
    lVar30 = uVar25 - 0xfc;
    lVar34 = 2;
    fVar3 = (float)(dVar39 - dVar47) / (float)(dVar39 + dVar47);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar18 + 0x114) = fVar3;
    *(float *)(puVar18 + 0x23) = fVar3;
    *(float *)((int)puVar18 + 0x11c) = fVar3;
    *(float *)(puVar18 + 0x24) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)(puVar18 + 0x23) = *(float *)(puVar18 + 0x23) * fVar7;
    *(float *)((int)puVar18 + 0x11c) = *(float *)((int)puVar18 + 0x11c) * fVar3;
    *(float *)(puVar18 + 0x24) = *(float *)(puVar18 + 0x24) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x104) * fVar3 * fVar3;
      iVar16 = (int)lVar28;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 0x10c;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar3 = *pfVar33;
      fVar7 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0x114) = *(float *)((int)lVar26 + 0x114) * fVar3;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar7;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar28 = 2;
    lVar26 = lVar27;
    dVar47 = dVar41;
    do {
      iVar16 = (int)lVar26;
      iVar31 = (int)lVar30;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar16 + 0x114)) +
                        *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar38 = (double)((float)(dVar47 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar1 = (float)((double)fVar6 - dVar35);
  fVar2 = ABS(fVar1);
  *(float *)(puVar18 + 0x19) = fVar1;
  fVar1 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = ABS(fVar1);
  *(float *)((int)puVar18 + 0xc4) = fVar1;
  *(float *)((int)puVar18 + 0xcc) = fVar4 - fVar2;
  uVar29 = (ulonglong)(*(uint *)((int)puVar18 + 0xc4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0xcc) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x19) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar18 + 0xc4));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
  fVar5 = ABS(*(float *)(puVar18 + 0x19));
  if (*(float *)((int)puVar18 + 0xcc) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
  dVar35 = dVar41;
  if (0.0 < fVar1) {
    lVar34 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)((int)puVar18 + 0xf4) = fVar1;
    *(float *)(puVar18 + 0x1f) = fVar1;
    *(float *)((int)puVar18 + 0xfc) = fVar1;
    *(float *)(puVar18 + 0x20) = fVar1;
    lVar28 = uVar25 - 0x210;
    fVar1 = fVar5 * fVar5;
    lVar26 = uVar25 - 300;
    lVar30 = uVar25 - 0x11c;
    *(float *)(puVar18 + 0x1f) = *(float *)(puVar18 + 0x1f) * fVar5;
    *(float *)((int)puVar18 + 0xfc) = *(float *)((int)puVar18 + 0xfc) * fVar1;
    *(float *)(puVar18 + 0x20) = *(float *)(puVar18 + 0x20) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar28 + 0xf4) = *(float *)((int)lVar28 + 0xe4) * fVar1 * fVar1;
      iVar16 = (int)lVar26;
      lVar26 = lVar26 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar16 + 4) * fVar1 * fVar1;
      lVar30 = lVar30 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar34 = 4;
    lVar30 = uVar25 - 300;
    pfVar33 = (float *)&DAT_007358e0;
    lVar26 = lVar27;
    lVar28 = lVar30;
    do {
      fVar1 = *pfVar33;
      fVar5 = pfVar33[1];
      pfVar33 = pfVar33 + 2;
      *(float *)((int)lVar26 + 0xf4) = *(float *)((int)lVar26 + 0xf4) * fVar1;
      lVar26 = lVar26 + 8;
      *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar5;
      lVar28 = lVar28 + 8;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    lVar26 = 2;
    do {
      iVar16 = (int)lVar27;
      iVar31 = (int)lVar30;
      lVar27 = lVar27 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar16 + 0xf4)) + *(float *)(iVar31 + 4)
                        + *(float *)(iVar31 + 8) + *(float *)(iVar31 + 0xc));
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar2 + fVar4);
  }
  dVar35 = (double)fastfunc::FastDiffRots(dVar35,dVar38);
  dVar35 = (double)fastfunc::FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar38);
  *(float *)((int)puVar18 + 0x74) = (float)dVar35;
  dVar35 = (double)fastfunc::FastDiffRots(dVar37,dVar36);
  dVar35 = (double)fastfunc::FastWrapRot
                             ((float)(dVar35 * (double)*(float *)(iVar15 + 0x68)),(float)dVar36);
  uVar8 = *(undefined4 *)((int)puVar18 + 0x74);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar18 + 0xe);
  uVar9 = *(undefined4 *)((int)puVar18 + 0x7c);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  *(float *)(puVar18 + 0xf) = (float)dVar35;
  *(float *)(param_1 + 0x48) = (float)dVar35;
  if (0 < *(int *)(iVar15 + 0x6c)) {
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar35,3.14159);
    *(float *)(param_1 + 0x48) = (float)dVar35;
    *(float *)(param_1 + 0x44) = -*(float *)(param_1 + 0x44);
  }
  dVar35 = (double)*(float *)(iVar15 + 0x68);
  dVar44 = (double)(float)(dVar35 * dVar40 + dVar44);
  dVar43 = (double)(float)(dVar35 * (double)(float)(dVar43 - dVar46) + dVar46);
  dVar35 = (double)(float)(dVar35 * (double)(float)(dVar42 - dVar45) + dVar45);
  fastfunc::FastEulerToMtx1(uVar25 - 0x1a0,uVar25 - 0x1b0);
  fVar1 = *(float *)(iVar15 + 0x70);
  fVar2 = *(float *)((int)puVar18 + 0x94);
  fVar13 = fVar1 + 1.5707963;
  fVar4 = *(float *)(puVar18 + 0x12);
  fVar5 = *(float *)((int)puVar18 + 0xa4);
  fVar6 = *(float *)(puVar18 + 0x13);
  fVar3 = *(float *)(puVar18 + 0x14);
  fVar7 = *(float *)(puVar18 + 0x15);
  fVar14 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar14 = fVar1;
  }
  dVar42 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar19 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar14 < 0.0) {
    fVar19 = fVar14;
  }
  fVar1 = 3.1415925 - fVar13;
  if (fVar13 - (3.1415925 - fVar13) < 0.0) {
    fVar1 = fVar13;
  }
  fVar14 = *(float *)(iVar15 + 0x78);
  fVar20 = fVar19 * fVar19;
  fVar21 = -3.1415925 - fVar13;
  if ((-3.1415925 - fVar13) - fVar1 < 0.0) {
    fVar21 = fVar1;
  }
  dVar46 = (double)SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x10);
  fVar12 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(puVar18 + 0x18) = 0;
  fVar1 = fVar20 * fVar20 * fVar19;
  fVar13 = fVar21 * fVar21;
  fVar24 = fVar20 * fVar1;
  fVar22 = fVar13 * fVar13 * fVar21;
  fVar23 = fVar13 * fVar22;
  fVar1 = (float)((double)(fVar14 * (fVar20 * fVar24 * 2.601887e-06 +
                                    fVar24 * -0.0001980741 +
                                    fVar1 * 0.0083330255 + fVar20 * fVar19 * -0.16666657 + fVar19))
                 / dVar42);
  fVar13 = (float)((double)(fVar14 * (fVar13 * fVar23 * 2.601887e-06 +
                                     fVar23 * -0.0001980741 +
                                     fVar22 * 0.0083330255 + fVar13 * fVar21 * -0.16666657 + fVar21)
                           ) / dVar46);
  dVar45 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  dVar36 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  dVar37 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar45 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar36 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar37 = (double)(fVar6 * fVar1);
  }
  dVar42 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  dVar47 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar38 = dVar41;
  if (dVar41 - dVar46 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar42 = (double)(fVar5 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar38 = (double)(fVar7 * fVar13);
  }
  if (dVar46 - dVar41 < 0.0) {
    dVar47 = (double)(fVar3 * fVar13);
  }
  dVar45 = (double)(float)(dVar42 + (double)(float)(dVar45 + dVar35));
  dVar35 = (double)(float)(dVar38 + (double)(float)(dVar37 + dVar44));
  dVar42 = (double)(float)(dVar47 + (double)(float)(dVar36 + dVar43));
  fVar1 = (float)((double)fVar10 - dVar45);
  fVar2 = (float)((double)fVar12 - dVar35);
  fVar4 = (float)((double)fVar11 - dVar42);
  mobyutil::OrganicDelt
            (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1),DAT_0071f418 * 10.0,
             DAT_0071f418 * 10.0,mobyutil::g_FrameTime * 20.0,(float *)(puVar18 + 0x18),0x720000,
             (float *)(iVar15 + 0x80));
  fVar2 = (float)(dVar45 - (double)*(float *)(param_1 + 0x14));
  fVar4 = (float)(dVar42 - (double)*(float *)(param_1 + 0x10));
  fVar5 = (float)(dVar35 - (double)*(float *)(param_1 + 0x18));
  dVar42 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar15 + 0x80) / dVar42);
  dVar35 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  dVar43 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  dVar44 = dVar41;
  if (dVar41 - dVar42 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar35 = (double)(fVar5 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar43 = (double)(fVar2 * fVar1);
  }
  if (dVar42 - dVar41 < 0.0) {
    dVar44 = (double)(fVar4 * fVar1);
  }
  *(float *)(param_1 + 0x18) = (float)((double)*(float *)(param_1 + 0x18) + dVar35);
  *(float *)(param_1 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar43);
  *(float *)(param_1 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar44);
  return;
}



//==== 002c2d80  ns=mobyupdate_helpers  size=0x314
// sig: undefined M1843_002c2d80(void)
// callers(1): 002c3118 mobyupdate_unsorted::UpdateMoby_1843
// callees(4): 00059e20 collproc::CollSphere; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 0011b728 mobyutil::MB_UnlockSkillPoint

void mobyupdate_helpers::M1843_002c2d80(int param_1)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  PlayerState PVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  PVar4 = g_heroState;
  if (g_heroState == TURRET_PLANE_UI) {
    uVar7 = *(ushort *)(param_1 + 0x34) | 0x1000;
  }
  else {
    uVar7 = *(ushort *)(param_1 + 0x34) & 0xefff;
  }
  *(ushort *)(param_1 + 0x34) = uVar7;
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      if (PVar4 != TURRET_PLANE_UI) {
        *(undefined1 *)(param_1 + 0x20) = 4;
        *(ushort *)(param_1 + 0x34) = uVar7 | 1;
        *(undefined4 *)(param_1 + 0x94) = 0;
      }
      iVar6 = collproc::CollSphere(0x3ff0000000000000,param_1 + 0x10,&DAT_002c2d70,0,param_1);
      if ((iVar6 != 0) && (*(undefined1 *)(param_1 + 0x20) = 6, *(char *)(param_1 + 0x53) != '\x01')
         ) {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else {
    if (DAT_00a257f4 != -1) {
      DAT_00a257f4 = DAT_00a257f4 + 1;
    }
    iVar2 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if ((int)(uint)DAT_00a257f6 < iVar2 / 600) {
      sVar3 = (short)(iVar2 >> 0x1f);
      DAT_00a257f6 = ((short)(iVar2 / 600) + sVar3) -
                     ((short)((short)(iVar2 / 0x2580000) + sVar3) >> 0xf);
    }
    DAT_00a257f8 = DAT_00a257f8 | 1 << (Level & 0x3f) | 0x80000000;
    if (((Level == Pokitaru) && (*(int *)(iVar5 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar5 + 0x20) + 0xa6) == 0xac)) {
      ShipsKilledCounts.Pokitaru = ShipsKilledCounts.Pokitaru + 1;
      if (2 < ShipsKilledCounts.Pokitaru) {
        mobyutil::MB_UnlockSkillPoint(0x12);
      }
    }
    bVar1 = *(int *)(iVar6 + 0x88) == 0;
    if ((bVar1) || (*(char *)(param_1 + 0x20) == '\x06')) {
      if ((bVar1) &&
         ((*(char *)(param_1 + 0x20) != '\x02' &&
          (*(undefined1 *)(param_1 + 0x20) = 2, *(char *)(param_1 + 0x53) != '\x01')))) {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 6;
      if (*(char *)(param_1 + 0x53) != '\x01') {
        mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 002c3118  ns=mobyupdate_unsorted  size=0x156c
// sig: undefined UpdateMoby_1843(MobyInstance * moby)
// callers(0): 
// callees(19): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 0015d12c sound::PlayMobySound; 00187e00 FUN_00187e00; 002c1fc8 mobyupdate_helpers::M1843_002c1fc8; 002c2230 mobyupdate_helpers::M1843_002c2230; 002c2d80 mobyupdate_helpers::M1843_002c2d80; 002f9610 FUN_002f9610; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1843 */

void mobyupdate_unsorted::UpdateMoby_1843(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
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
  void *pvVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char acVar27 [4];
  ulonglong uVar28;
  int iVar29;
  int iVar31;
  longlong lVar30;
  float *pfVar34;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar35;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar36;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar47;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar48;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  double dVar51;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar52;
  
  lVar30 = (longlong)(int)moby;
  uVar28 = ZEXT48(&stack0x00000000);
  lVar36 = uVar28 - 0x280;
  puVar21 = (ulonglong *)lVar36;
  *puVar21 = uVar28;
  puVar21[0x52] = in_LR;
  puVar21[0x3e] = in_f14;
  puVar21[0x3f] = in_f15;
  puVar21[0x40] = in_f16;
  puVar21[0x41] = in_f17;
  puVar21[0x42] = in_f18;
  puVar21[0x43] = in_f19;
  puVar21[0x44] = in_f20;
  puVar21[0x45] = in_f21;
  puVar21[0x46] = in_f22;
  puVar21[0x47] = in_f23;
  puVar21[0x48] = in_f24;
  puVar21[0x49] = in_f25;
  puVar21[0x4a] = in_f26;
  puVar21[0x4b] = in_f27;
  puVar21[0x4c] = in_f28;
  puVar21[0x4d] = in_f29;
  puVar21[0x4e] = in_f30;
  puVar21[0x4f] = in_f31;
  puVar21[0x3d] = unaff_r31;
  puVar21[0x3c] = unaff_r30;
  puVar21[0x3b] = unaff_r29;
  puVar21[0x3a] = unaff_r28;
  puVar21[0x39] = unaff_r27;
  pvVar19 = moby->pVar;
  mobyupdate_helpers::M1843_002c2d80();
  fVar7 = g_heroPosition.z;
  fVar6 = GameCamera.rot.elevation;
  fVar5 = GameCamera.rot.azimuth;
  bVar3 = moby->state;
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      moby->updateDistance = -1;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      moby->drawDistance = 0xff;
      if (iVar29 == 0) {
        moby->state = '\x01';
        dVar40 = (double)mobyutil::MB_randRangeSigned(0x3fd3333340000000,0x3fe0000000000000);
        *(float *)((int)pvVar19 + 0x6c) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar19 + 0x70) = (float)dVar40;
        dVar40 = (double)mobyutil::MB_randRangeSigned(0x404e000000000000,0x405e000000000000);
        *(float *)((int)pvVar19 + 0x74) =
             (float)(dVar40 * 0.01745329238474369) * mobyutil::g_FrameTime;
        dVar40 = (double)mobyutil::MB_randRangeFloat(8.0,12.0);
        *(float *)((int)pvVar19 + 0x78) = (float)dVar40;
      }
      else {
        moby->state = '\x04';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else if (bVar3 < 3) {
      mobyupdate_helpers::M1843_002c1fc8(lVar30);
      fVar5 = *(float *)((int)pvVar19 + 0x68) + *(float *)((int)pvVar19 + 0x6c);
      *(float *)((int)pvVar19 + 0x68) = fVar5;
      if (fVar5 <= 1.0) {
        if (fVar5 < 0.0) {
          *(float *)((int)pvVar19 + 0x68) = fVar5 + 1.0;
          iVar29 = Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
          iVar31 = *(int *)((int)pvVar19 + 100) + iVar29 + -1;
          *(int *)((int)pvVar19 + 100) = iVar31 - (iVar31 / iVar29) * iVar29;
        }
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 100) + 1;
        *(float *)((int)pvVar19 + 0x68) = fVar5 - 1.0;
        *(int *)((int)pvVar19 + 100) =
             iVar29 - (iVar29 / Splines[*(int *)((int)pvVar19 + 0x60)]->cnt) *
                      Splines[*(int *)((int)pvVar19 + 0x60)]->cnt;
      }
      fastfunc::FastWrapRot(*(float *)((int)pvVar19 + 0x70),*(float *)((int)pvVar19 + 0x74));
      mobyupdate_helpers::M1843_002c2230(lVar30);
      if (moby->state == '\x02') {
        lVar36 = lVar30 + 0x10;
        mobyutil::MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_002c3094,
                   0xffffffffffffffff);
        iVar29 = mobyutil::MB_randInt(2);
        if (iVar29 == 0) {
          FUN_002f9610(lVar36,0xe4);
        }
        else {
          FUN_002f9610(lVar36,0xe0);
        }
        sound::PlayMobySound(1,0,moby);
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
      else if ((moby->enabled == '\0') &&
              (fVar5 = (moby->pos).y - g_heroPosition.y, fVar6 = (moby->pos).x - g_heroPosition.x,
              fVar7 = (moby->pos).z - g_heroPosition.z,
              SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 32.0)) {
        moby->state = '\x03';
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
    else {
      iVar29 = fastfunc::FastCheckBsphereInView(0x4080000000000000,lVar30 + 0x10);
      if ((iVar29 != -1) ||
         (fVar5 = (moby->pos).y - g_heroPosition.y, fVar6 = (moby->pos).x - g_heroPosition.x,
         fVar7 = (moby->pos).z - g_heroPosition.z,
         SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) <= 32.0)) {
        *(undefined4 *)((int)pvVar19 + 0x84) = 0;
      }
      else {
        iVar29 = *(int *)((int)pvVar19 + 0x84) + 1;
        *(int *)((int)pvVar19 + 0x84) = iVar29;
        puVar21[0x37] = (longlong)(int)(animationSpeed * 60.5);
        if (*(int *)((int)puVar21 + 0x1bc) < iVar29) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            puVar21[0x37] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar30,0,0,*(undefined4 *)((int)puVar21 + 0x1bc));
          }
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
          moby->collision = moby->pClass->collision;
        }
      }
    }
  }
  else if (bVar3 < 6) {
    if (4 < bVar3) {
      dVar40 = 0.0;
      uVar20 = (int)GameCamera.rot.elevation >> 0x1f;
      *(undefined4 *)(puVar21 + 0x1c) = 0;
      *(float *)(puVar21 + 0x10) = fVar5;
      fVar5 = GameCamera.rot.radius;
      *(float *)((int)puVar21 + 0x84) = GameCamera.rot.elevation;
      acVar27 = GameCamera.field10_0x15c;
      iVar29 = (uVar20 >> 1 ^ (uint)fVar6) - uVar20;
      *(float *)(puVar21 + 0x11) = fVar5;
      *(char (*) [4])((int)puVar21 + 0x8c) = acVar27;
      *(undefined4 *)(puVar21 + 0x10) = 0;
      if (iVar29 < 0x3e860a93) {
        if (iVar29 < -0x3e860a92) {
          *(undefined4 *)((int)puVar21 + 0x84) = 0xbe860a92;
        }
      }
      else {
        *(undefined4 *)((int)puVar21 + 0x84) = 0x3e860a92;
      }
      fastfunc::FastEulerToMtx(uVar28 - 0x1d0,uVar28 - 0x200);
      fVar7 = g_heroPosition.z;
      fVar5 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
      dVar52 = (double)g_heroPosition.w;
      fVar6 = g_heroPosition.y - *(float *)((int)pvVar19 + 0xb4);
      *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
      fVar7 = fVar7 - *(float *)((int)pvVar19 + 0xb8);
      *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
      *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
      *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
      iVar29 = *(int *)((int)pvVar19 + 0x88);
      (moby->pos).x = (moby->pos).x + fVar5;
      (moby->pos).y = (moby->pos).y + fVar6;
      (moby->pos).z = (moby->pos).z + fVar7;
      puVar21[0x37] = (longlong)iVar29;
      *(float *)(puVar21 + 0x35) = fVar5;
      *(float *)((int)puVar21 + 0x1a4) = fVar6;
      *(float *)(puVar21 + 0x34) = fVar7;
      *(undefined4 *)((int)puVar21 + 0x1ac) = 0x3f490fdb;
      dVar41 = (double)fastfunc::FastWrapRot(0.7853982,(float)(longlong)puVar21[0x37] * 1.5707964);
      fVar5 = *(float *)((int)puVar21 + 0xc4);
      fVar6 = *(float *)(puVar21 + 0x18);
      fVar7 = *(float *)(puVar21 + 0x19);
      dVar46 = (double)(float)(3.141592502593994 - dVar41);
      if (dVar41 - (double)(float)(3.141592502593994 - dVar41) < 0.0) {
        dVar46 = dVar41;
      }
      dVar44 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      dVar51 = (double)(float)(-3.141592502593994 - dVar41);
      if ((double)(float)(-3.141592502593994 - dVar41) - dVar46 < 0.0) {
        dVar51 = dVar46;
      }
      dVar46 = (double)(float)(dVar51 * dVar51);
      *(undefined4 *)((int)puVar21 + 0x7c) = *(undefined4 *)((int)puVar21 + 0xcc);
      dVar49 = (double)(float)(dVar46 * (double)(float)(dVar46 * dVar51));
      dVar50 = (double)(float)(dVar46 * dVar49);
      fVar8 = *(float *)((int)puVar21 + 0xd4);
      fVar9 = *(float *)(puVar21 + 0x1a);
      fVar10 = *(float *)((int)puVar21 + 0xb4);
      fVar11 = *(float *)(puVar21 + 0x1b);
      fVar12 = *(float *)(puVar21 + 0x16);
      fVar13 = *(float *)(puVar21 + 0x17);
      fVar2 = (float)((double)(((float)(dVar46 * dVar50) * 2.601887e-06 +
                               (float)(dVar50 * -0.0001980741071747616 +
                                      (double)(float)(dVar49 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar46 * dVar51
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar51))
                                      )) * 8.0) / dVar44);
      dVar46 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      dVar51 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar51 = (double)(fVar5 * fVar2);
      }
      dVar49 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar46 = (double)(fVar6 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar51 = (double)(fVar5 * fVar2);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar49 = (double)(fVar7 * fVar2);
      }
      *(float *)(puVar21 + 0xe) = (float)dVar46;
      *(float *)((int)puVar21 + 0x74) = (float)dVar51;
      *(float *)(puVar21 + 0xf) = (float)dVar49;
      bVar3 = DAT_0096b2ef;
      fVar5 = (float)(dVar41 + 1.570796251296997);
      dVar41 = (double)SQRT(fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8);
      fVar6 = (moby->pos).y;
      fVar7 = (moby->pos).x;
      fVar2 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar2 = fVar5;
      }
      dVar44 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10);
      dVar48 = (double)GameCamera.posY;
      fVar14 = (moby->pos).z;
      dVar50 = (double)GameCamera.posX;
      fVar15 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
        fVar15 = fVar2;
      }
      fVar2 = fVar15 * fVar15;
      fVar16 = fVar2 * fVar2 * fVar15;
      fVar17 = fVar2 * fVar16;
      fVar5 = (float)(20.0 / dVar44);
      dVar43 = (double)GameCamera.posZ;
      *(char (*) [4])((int)puVar21 + 0x7c) = GameCamera.field8_0x14c;
      pfVar34 = (float *)((int)pvVar19 + 0x6c);
      puVar21[0x36] = (ulonglong)dVar52;
      fVar2 = (float)((double)((fVar2 * fVar17 * 2.601887e-06 +
                               fVar17 * -0.0001980741 +
                               fVar16 * 0.0083330255 + fVar2 * fVar15 * -0.16666657 + fVar15) * 8.0)
                     / dVar41);
      dVar52 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      dVar42 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar47 = dVar40;
      if (dVar40 - dVar44 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar52 = (double)(fVar10 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar47 = (double)(fVar13 * fVar5);
      }
      if (dVar44 - dVar40 < 0.0) {
        dVar42 = (double)(fVar12 * fVar5);
      }
      dVar44 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar44 = (double)(fVar8 * fVar2);
      }
      dVar45 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar45 = (double)(fVar9 * fVar2);
      }
      dVar39 = dVar40;
      if (dVar40 - dVar41 < 0.0) {
        dVar39 = (double)(fVar11 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar44 = (double)(fVar8 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar45 = (double)(fVar9 * fVar2);
      }
      if (dVar41 - dVar40 < 0.0) {
        dVar39 = (double)(fVar11 * fVar2);
      }
      dVar41 = (double)(float)((double)(float)((double)(float)(dVar48 + dVar51) + dVar44) + dVar52);
      dVar46 = (double)(float)((double)(float)((double)(float)(dVar50 + dVar46) + dVar45) + dVar42);
      dVar52 = (double)(float)((double)(float)((double)(float)(dVar43 + dVar49) + dVar39) + dVar47);
      fVar5 = (float)(dVar41 - (double)fVar6);
      fVar6 = (float)(dVar46 - (double)fVar7);
      fVar7 = (float)(dVar52 - (double)fVar14);
      *(float *)((int)puVar21 + 0x74) = fVar5;
      *(float *)(puVar21 + 0xe) = fVar6;
      *(float *)(puVar21 + 0xf) = fVar7;
      fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      if ((bVar3 & 2) == 0) {
        if (moby->setByGroup == '\0') {
          mobyutil::OrganicDelt
                    (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 5.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
        else {
          mobyutil::OrganicDelt
                    (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 15.0,
                     (float *)(puVar21 + 0x1c),0x720000,pfVar34);
        }
      }
      else {
        mobyutil::OrganicDelt
                  (fVar5,DAT_0071f418 * 2.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime,
                   (float *)(puVar21 + 0x1c),0x720000,pfVar34);
      }
      mobyutil::ClampVec3Magnitude((double)*(float *)((int)pvVar19 + 0x6c),(Vec4 *)(puVar21 + 0xe));
      fVar5 = (moby->pos).x + *(float *)(puVar21 + 0xe);
      dVar49 = (double)fVar5;
      fVar6 = (moby->pos).y + *(float *)((int)puVar21 + 0x74);
      dVar44 = (double)fVar6;
      cVar4 = moby->setByGroup;
      fVar7 = (moby->pos).z + *(float *)(puVar21 + 0xf);
      dVar51 = (double)fVar7;
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar6;
      (moby->pos).z = fVar7;
      fVar5 = DAT_0071f418;
      if (cVar4 == '\0') {
        dVar46 = (double)g_heroPosition.y;
        dVar41 = (double)(float)((double)g_heroPosition.x - dVar49);
        dVar50 = (double)(float)(dVar46 - dVar44);
        *(float *)(puVar21 + 0x20) = (float)((double)g_heroPosition.x - dVar49);
        *(float *)((int)puVar21 + 0x104) = (float)(dVar46 - dVar44);
        dVar52 = (double)(float)((double)g_heroPosition.z - dVar51);
        *(float *)(puVar21 + 0x21) = (float)(ABS(dVar41) - ABS(dVar50));
        uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x20) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar21 + 0x21) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0x104) >> 0x1d) & 4;
        dVar46 = ABS((double)*(float *)(puVar21 + 0x20));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar46 = ABS(dVar50);
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
        dVar51 = ABS((double)*(float *)((int)puVar21 + 0x104));
        if ((double)*(float *)(puVar21 + 0x21) - dVar40 < 0.0) {
          dVar51 = ABS(dVar41);
        }
        fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar44 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar35 = uVar28 - 0x114;
          lVar38 = uVar28 - 0x104;
          lVar37 = 2;
          fVar2 = (float)(dVar51 - dVar46) / (float)(dVar51 + dVar46);
          fVar8 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2f) = fVar2;
          *(float *)(puVar21 + 0x2e) = fVar2;
          *(float *)((int)puVar21 + 0x174) = fVar2;
          *(float *)((int)puVar21 + 0x16c) = fVar2;
          fVar2 = fVar8 * fVar8;
          *(float *)(puVar21 + 0x2e) = *(float *)(puVar21 + 0x2e) * fVar8;
          *(float *)((int)puVar21 + 0x174) = *(float *)((int)puVar21 + 0x174) * fVar2;
          *(float *)(puVar21 + 0x2f) = *(float *)(puVar21 + 0x2f) * fVar2 * fVar8;
          do {
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x15c) * fVar2 * fVar2;
            iVar29 = (int)lVar35;
            lVar33 = lVar33 + 8;
            lVar35 = lVar35 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar2 * fVar2;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x114;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar2 = *pfVar34;
            fVar8 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x16c) = *(float *)((int)lVar33 + 0x16c) * fVar2;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar8;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar29 = (int)lVar33;
            lVar33 = lVar33 + 0x10;
            iVar31 = (int)lVar38;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar29 + 0x16c)) +
                              *(float *)(iVar31 + 4) + *(float *)(iVar31 + 8) +
                             *(float *)(iVar31 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar44 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar6 +
                           fVar7);
        }
        dVar49 = 12.566370964050293;
        mobyutil::OrganicDeltAng
                  ((float)dVar44,fVar5 * 12.566371,fVar5 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x2c3094,
                   (float *)((int)pvVar19 + 0x8c));
        *(float *)(puVar21 + 0x1f) = (float)dVar52;
        dVar51 = (double)mobyutil::g_FrameTime;
        dVar44 = (double)DAT_0071f418;
        fVar5 = SQRT((float)(dVar41 * dVar41 + (double)(float)(dVar50 * dVar50)));
        dVar41 = ABS((double)fVar5);
        *(float *)((int)puVar21 + 0xf4) = fVar5;
        *(float *)((int)puVar21 + 0xfc) = (float)(dVar41 - ABS(dVar52));
        uVar32 = (ulonglong)(*(uint *)((int)puVar21 + 0xf4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar21 + 0xfc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar21 + 0x1f) >> 0x1d) & 4;
        iVar29 = (int)(uVar32 << 2);
        dVar46 = ABS((double)*(float *)((int)puVar21 + 0xf4));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar46 = ABS(dVar52);
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar29);
        dVar52 = ABS((double)*(float *)(puVar21 + 0x1f));
        if ((double)*(float *)((int)puVar21 + 0xfc) - dVar40 < 0.0) {
          dVar52 = dVar41;
        }
        fVar6 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
        dVar41 = dVar40;
        if (dVar40 < dVar46) {
          lVar33 = uVar28 - 0x270;
          lVar38 = uVar28 - 0x124;
          lVar35 = uVar28 - 0x134;
          lVar37 = 2;
          fVar7 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
          fVar2 = fVar7 * fVar7;
          *(float *)(puVar21 + 0x2b) = fVar7;
          *(float *)(puVar21 + 0x2a) = fVar7;
          *(float *)((int)puVar21 + 0x154) = fVar7;
          *(float *)((int)puVar21 + 0x14c) = fVar7;
          fVar7 = fVar2 * fVar2;
          *(float *)(puVar21 + 0x2a) = *(float *)(puVar21 + 0x2a) * fVar2;
          *(float *)((int)puVar21 + 0x154) = *(float *)((int)puVar21 + 0x154) * fVar7;
          *(float *)(puVar21 + 0x2b) = *(float *)(puVar21 + 0x2b) * fVar7 * fVar2;
          do {
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x13c) * fVar7 * fVar7;
            iVar29 = (int)lVar35;
            lVar35 = lVar35 + 8;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar38 + 4) = *(float *)(iVar29 + 4) * fVar7 * fVar7;
            lVar38 = lVar38 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar37 = 4;
          lVar38 = uVar28 - 0x134;
          pfVar34 = (float *)&DAT_007358e0;
          lVar33 = lVar36;
          lVar35 = lVar38;
          do {
            fVar7 = *pfVar34;
            fVar2 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar33 + 0x14c) = *(float *)((int)lVar33 + 0x14c) * fVar7;
            lVar33 = lVar33 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar2;
            lVar35 = lVar35 + 8;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          lVar35 = 2;
          lVar33 = lVar36;
          dVar46 = dVar40;
          do {
            iVar31 = (int)lVar33;
            iVar22 = (int)lVar38;
            lVar33 = lVar33 + 0x10;
            iVar29 = (int)lVar33;
            lVar38 = lVar38 + 0x10;
            dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 0x14c)) +
                              *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                             *(float *)(iVar22 + 0xc));
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          dVar41 = (double)((float)(dVar46 + (double)*(float *)((int)puVar21 + 0x1ac)) * fVar5 +
                           fVar6);
        }
        mobyutil::OrganicDeltAng
                  ((float)-dVar41,(float)(dVar44 * dVar49),(float)(dVar44 * dVar49),
                   (float)(dVar51 * dVar49),&(moby->rotation).y,iVar29,
                   (float *)((int)pvVar19 + 0x90));
        if (worldUpdateTime == (worldUpdateTime / 10) * 10) {
          dVar48 = (double)*(float *)(puVar21 + 0x35);
          dVar50 = (double)*(float *)((int)puVar21 + 0x1a4);
          dVar49 = (double)*(float *)(puVar21 + 0x34);
          sound::PlayMobySound(2,0,moby);
          mobyutil::Delt((float)dVar40,0.25,(float *)((int)pvVar19 + 0x94));
          dVar51 = (double)g_heroPosition.x;
          dVar44 = (double)g_heroPosition.z;
          fVar5 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          dVar41 = (double)SQRT((float)(dVar49 * dVar49 +
                                       (double)(float)(dVar48 * dVar48 +
                                                      (double)(float)(dVar50 * dVar50))));
          bVar1 = worldUpdateTime == (worldUpdateTime / 0x14) * 0x14;
          dVar52 = (double)(float)((double)*(float *)((int)pvVar19 + 0x94) / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(float)(dVar50 * dVar52);
          }
          dVar43 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          dVar42 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(float)(dVar50 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar43 = (double)(float)(dVar48 * dVar52);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar42 = (double)(float)(dVar49 * dVar52);
          }
          puVar21[0x32] = (ulonglong)(double)(float)(dVar46 + (double)g_heroPosition.y);
          puVar21[0x33] = (ulonglong)(double)(float)(dVar43 + dVar51);
          if (bVar1) {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_007b8000;
            fVar24 = DAT_007b800c;
            fVar25 = DAT_007b8004;
            fVar26 = DAT_007b8008;
          }
          else {
            fVar2 = (moby->transform).v0.x;
            fVar8 = (moby->transform).v1.x;
            fVar9 = (moby->transform).v2.x;
            fVar10 = (moby->transform).v0.y;
            fVar11 = (moby->transform).v1.y;
            fVar12 = (moby->transform).v2.y;
            fVar13 = (moby->transform).v0.z;
            fVar14 = (moby->transform).v1.z;
            fVar15 = (moby->transform).v2.z;
            fVar16 = (moby->transform).v0.w;
            fVar17 = (moby->transform).v1.w;
            fVar18 = (moby->transform).v2.w;
            fVar23 = DAT_007b8010;
            fVar24 = DAT_007b801c;
            fVar25 = DAT_007b8014;
            fVar26 = DAT_007b8018;
          }
          fVar10 = fVar11 * fVar25 + fVar12 * fVar26 + fVar10 * fVar23 + fVar6;
          fVar5 = fVar8 * fVar25 + fVar9 * fVar26 + fVar2 * fVar23 + fVar5;
          fVar8 = fVar14 * fVar25 + fVar15 * fVar26 + fVar13 * fVar23 + fVar7;
          fVar6 = (float)((double)puVar21[0x32] - (double)fVar10);
          fVar7 = (float)((double)puVar21[0x33] - (double)fVar5);
          fVar2 = (float)(dVar42 + dVar44) - fVar8;
          *(float *)((int)puVar21 + 0xac) =
               fVar17 * fVar25 + fVar18 * fVar26 + fVar16 * fVar23 + fVar24;
          fVar9 = DAT_007b7fd0 * mobyutil::g_FrameTime;
          *(float *)(puVar21 + 0x14) = fVar5;
          *(float *)((int)puVar21 + 0xa4) = fVar10;
          *(float *)(puVar21 + 0x15) = fVar8;
          *(float *)((int)puVar21 + 0x9c) = (float)(double)puVar21[0x36];
          dVar41 = (double)SQRT(fVar2 * fVar2 + fVar7 * fVar7 + fVar6 * fVar6);
          fVar5 = (float)((double)fVar9 / dVar41);
          dVar46 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          dVar52 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          dVar51 = dVar40;
          if (dVar40 - dVar41 < 0.0) {
            dVar51 = (double)(fVar7 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar46 = (double)(fVar2 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar52 = (double)(fVar6 * fVar5);
          }
          if (dVar41 - dVar40 < 0.0) {
            dVar51 = (double)(fVar7 * fVar5);
          }
          *(float *)(puVar21 + 0x13) = (float)(dVar46 + (double)*(float *)(puVar21 + 0x34));
          *(float *)((int)puVar21 + 0x94) =
               (float)(dVar52 + (double)*(float *)((int)puVar21 + 0x1a4));
          *(float *)(puVar21 + 0x12) = (float)(dVar51 + (double)*(float *)(puVar21 + 0x35));
          iVar29 = FUN_00187e00(0x4060000000000000,0xbff0000000000000,0x4024000000000000,lVar30,
                                uVar28 - 0x1f0,uVar28 - 0x1e0);
          fVar5 = *(float *)((int)puVar21 + 0x1ac);
          if (iVar29 != 0) {
            fVar6 = *(float *)((int)puVar21 + 0x94) - *(float *)((int)puVar21 + 0x1a4);
            fVar7 = *(float *)(puVar21 + 0x12) - *(float *)(puVar21 + 0x35);
            *(float *)(puVar21 + 0x12) = fVar7;
            *(float *)((int)puVar21 + 0x94) = fVar6;
            fVar2 = *(float *)(puVar21 + 0x13) - *(float *)(puVar21 + 0x34);
            fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
            *(float *)((int)puVar21 + 0xec) = fVar2;
            *(float *)(puVar21 + 0x13) = fVar2;
            dVar41 = ABS((double)fVar6);
            *(float *)(puVar21 + 0x1d) = fVar6;
            *(float *)(puVar21 + 0x1e) = (float)(dVar41 - ABS((double)fVar2));
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x1d) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar21 + 0x1e) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xec) >> 0x1d) & 4;
            dVar46 = ABS((double)*(float *)(puVar21 + 0x1d));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar46 = ABS((double)fVar2);
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
            dVar52 = ABS((double)*(float *)((int)puVar21 + 0xec));
            if ((double)*(float *)(puVar21 + 0x1e) - dVar40 < 0.0) {
              dVar52 = dVar41;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            dVar41 = dVar40;
            if (dVar40 < dVar46) {
              lVar30 = uVar28 - 0x270;
              lVar33 = uVar28 - 0x154;
              lVar35 = uVar28 - 0x144;
              lVar38 = 2;
              fVar2 = (float)(dVar52 - dVar46) / (float)(dVar52 + dVar46);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x27) = fVar2;
              *(float *)(puVar21 + 0x26) = fVar2;
              *(float *)((int)puVar21 + 0x134) = fVar2;
              *(float *)((int)puVar21 + 300) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x26) = *(float *)(puVar21 + 0x26) * fVar8;
              *(float *)((int)puVar21 + 0x134) = *(float *)((int)puVar21 + 0x134) * fVar2;
              *(float *)(puVar21 + 0x27) = *(float *)(puVar21 + 0x27) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 0x11c) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar30 = lVar30 + 8;
                lVar33 = lVar33 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x154;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 300) = *(float *)((int)lVar30 + 300) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar33 = 2;
              lVar30 = lVar36;
              dVar46 = dVar40;
              do {
                iVar31 = (int)lVar30;
                lVar30 = lVar30 + 0x10;
                iVar22 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                dVar46 = (double)((float)(dVar46 + (double)*(float *)(iVar31 + 300)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
              dVar41 = (double)((float)(dVar46 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x44) = (float)-dVar41;
            dVar52 = ABS((double)*(float *)(puVar21 + 0x12));
            dVar46 = ABS((double)*(float *)((int)puVar21 + 0x94));
            *(float *)((int)puVar21 + 0xe4) = (float)(dVar52 - dVar46);
            uVar32 = (ulonglong)(*(uint *)(puVar21 + 0x12) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0xe4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar21 + 0x94) >> 0x1d) & 4;
            dVar41 = dVar52;
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar41 = dVar46;
            }
            fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
            if ((double)*(float *)((int)puVar21 + 0xe4) - dVar40 < 0.0) {
              dVar46 = dVar52;
            }
            fVar7 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
            if (dVar40 < dVar41) {
              lVar30 = uVar28 - 0x270;
              lVar33 = uVar28 - 0x174;
              lVar35 = uVar28 - 0x164;
              lVar38 = 2;
              fVar2 = (float)(dVar46 - dVar41) / (float)(dVar46 + dVar41);
              fVar8 = fVar2 * fVar2;
              *(float *)(puVar21 + 0x23) = fVar2;
              *(float *)(puVar21 + 0x22) = fVar2;
              *(float *)((int)puVar21 + 0x114) = fVar2;
              *(float *)((int)puVar21 + 0x10c) = fVar2;
              fVar2 = fVar8 * fVar8;
              *(float *)(puVar21 + 0x22) = *(float *)(puVar21 + 0x22) * fVar8;
              *(float *)((int)puVar21 + 0x114) = *(float *)((int)puVar21 + 0x114) * fVar2;
              *(float *)(puVar21 + 0x23) = *(float *)(puVar21 + 0x23) * fVar2 * fVar8;
              do {
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0xfc) * fVar2 * fVar2;
                iVar31 = (int)lVar33;
                lVar30 = lVar30 + 8;
                lVar33 = lVar33 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar31 + 4) * fVar2 * fVar2;
                lVar35 = lVar35 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar38 = 4;
              lVar35 = uVar28 - 0x174;
              pfVar34 = (float *)&DAT_007358e0;
              lVar30 = lVar36;
              lVar33 = lVar35;
              do {
                fVar2 = *pfVar34;
                fVar8 = pfVar34[1];
                pfVar34 = pfVar34 + 2;
                *(float *)((int)lVar30 + 0x10c) = *(float *)((int)lVar30 + 0x10c) * fVar2;
                lVar30 = lVar30 + 8;
                *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar8;
                lVar33 = lVar33 + 8;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              lVar30 = 2;
              do {
                iVar31 = (int)lVar36;
                iVar22 = (int)lVar35;
                lVar36 = lVar36 + 0x10;
                lVar35 = lVar35 + 0x10;
                dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar31 + 0x10c)) +
                                  *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                                 *(float *)(iVar22 + 0xc));
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
              dVar40 = (double)((float)(dVar40 + (double)fVar5) * fVar6 + fVar7);
            }
            *(float *)(iVar29 + 0x48) = (float)dVar40;
          }
        }
        if (moby->enabled == '\0') {
          moby->state = '\x04';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
        }
      }
      else {
        if (moby->enabled != '\0') {
          dVar49 = (double)(moby->pos).x;
          dVar44 = (double)(moby->pos).y;
          dVar51 = (double)(moby->pos).z;
          *(int *)((int)pvVar19 + 0x98) = *(int *)((int)pvVar19 + 0x98) + 1;
        }
        if ((SQRT((float)(dVar52 - dVar51) * (float)(dVar52 - dVar51) +
                  (float)(dVar46 - dVar49) * (float)(dVar46 - dVar49) +
                  (float)(dVar41 - dVar44) * (float)(dVar41 - dVar44)) < 2.0) ||
           (iVar29 = *(int *)((int)pvVar19 + 0x98),
           puVar21[0x37] = (longlong)(int)(animationSpeed * 120.5),
           *(int *)((int)puVar21 + 0x1bc) < iVar29)) {
          moby->setByGroup = '\0';
        }
      }
    }
  }
  else if (bVar3 < 7) {
    fVar6 = g_heroPosition.x - *(float *)((int)pvVar19 + 0xb0);
    fVar5 = *(float *)((int)pvVar19 + 0xb8);
    fVar2 = g_heroPosition.y - *(float *)((int)pvVar19 + 0xb4);
    *(float *)((int)pvVar19 + 0xb0) = g_heroPosition.x;
    *(float *)((int)pvVar19 + 0xb4) = g_heroPosition.y;
    *(float *)((int)pvVar19 + 0xb8) = g_heroPosition.z;
    *(float *)((int)pvVar19 + 0xbc) = g_heroPosition.w;
    lVar36 = lVar30 + 0x10;
    (moby->pos).x = (moby->pos).x + fVar6;
    (moby->pos).y = (moby->pos).y + fVar2;
    (moby->pos).z = (moby->pos).z + (fVar7 - fVar5);
    mobyutil::MB_SpawnExplosionSparks
              (0x4000000000000000,0x402a000000000000,lVar30,lVar36,&DAT_002c3094,0xffffffffffffffff)
    ;
    iVar29 = mobyutil::MB_randInt(2);
    if (iVar29 == 0) {
      FUN_002f9610(lVar36,0xe4);
    }
    else {
      FUN_002f9610(lVar36,0xe0);
    }
    sound::PlayMobySound(1,0,moby);
    moby->state = '\x04';
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | DISABLED;
  }
  return;
}



//==== 002c4684  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1844_002c4684(void)
// callers(0): 
// callees(0): 

short mobyupdate_helpers::M1844_002c4684(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  sVar3 = 0;
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    if ((MobyInstance[*puVar2 & 0x7fff].oClass == BLARG_SHIP_0733) &&
       (MobyInstance[*puVar2 & 0x7fff].state == '\x05')) {
      sVar3 = sVar3 + 1;
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return sVar3;
}



//==== 002c4728  ns=Global  size=0x4dc
// sig: undefined FUN_002c4728(void)
// callers(1): 003516d0 mobyupdate_unsorted::UpdateMoby_347
// callees(4): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot

MobyInstance * FUN_002c4728(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char acVar11 [4];
  int iVar12;
  ushort *puVar13;
  MobyInstance *pMVar14;
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
  undefined1 local_100 [16];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  
  puVar13 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  while (((uVar7 = *puVar13 & 0x7fff, MobyInstance[uVar7].oClass != BLARG_SHIP_0733 ||
          (MobyInstance[uVar7].state != '\x04')) || (iVar12 = mobyutil::MB_randInt(10), iVar12 != 0)
         )) {
    uVar4 = *puVar13;
    puVar13 = puVar13 + 1;
    if ((short)uVar4 < 0) {
      return (MobyInstance *)0x0;
    }
  }
  pMVar14 = MobyInstance + uVar7;
  pvVar5 = pMVar14->pVar;
  dVar23 = 0.0;
  fastfunc::FastEulerToMtx(&local_f0,local_100);
  dVar16 = (double)fastfunc::FastWrapRot
                             (0.7853982,(float)(longlong)*(int *)((int)pvVar5 + 0x88) * 1.5707964);
  acVar11 = GameCamera.field8_0x14c;
  fVar1 = (float)(dVar16 + 1.570796251296997);
  dVar29 = (double)(float)(3.141592502593994 - dVar16);
  if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
    dVar29 = dVar16;
  }
  dVar22 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar16);
  if ((double)(float)(-3.141592502593994 - dVar16) - dVar29 < 0.0) {
    dVar17 = dVar29;
  }
  dVar29 = (double)(float)(dVar17 * dVar17);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar21 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
  dVar28 = (double)GameCamera.posX;
  dVar27 = (double)GameCamera.posY;
  dVar26 = (double)GameCamera.posZ;
  dVar25 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar17));
  fVar9 = fVar3 * fVar3;
  dVar16 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
  dVar24 = (double)(float)(dVar29 * dVar25);
  fVar8 = fVar9 * fVar9 * fVar3;
  fVar10 = fVar9 * fVar8;
  fVar1 = (float)((double)(((float)(dVar29 * dVar24) * 2.601887e-06 +
                           (float)(dVar24 * -0.0001980741071747616 +
                                  (double)(float)(dVar25 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar29 * dVar17) *
                                                                 -0.16666656732559204 + dVar17)))) *
                          12.0) / dVar22);
  fVar2 = (float)(6.0 / dVar16);
  fVar3 = (float)((double)((fVar9 * fVar10 * 2.601887e-06 +
                           fVar10 * -0.0001980741 +
                           fVar8 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3) * 12.0) /
                 dVar21);
  dVar29 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  dVar17 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar24 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar22 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  dVar25 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar19 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar20 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  dVar15 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  dVar18 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  *(float *)((int)pvVar5 + 0xb0) = g_heroPosition.x;
  *(float *)((int)pvVar5 + 0xb4) = g_heroPosition.y;
  *(float *)((int)pvVar5 + 0xb8) = g_heroPosition.z;
  *(float *)((int)pvVar5 + 0xbc) = g_heroPosition.w;
  (pMVar14->pos).w = (f32)acVar11;
  pMVar14->state = '\x05';
  pMVar14->setByGroup = '\x01';
  (pMVar14->pos).z = (float)(dVar22 + (double)(float)(dVar20 + (double)(float)(dVar26 + dVar17)));
  (pMVar14->pos).y = (float)(dVar25 + (double)(float)(dVar15 + (double)(float)(dVar27 + dVar29)));
  (pMVar14->pos).x = (float)(dVar19 + (double)(float)(dVar18 + (double)(float)(dVar28 + dVar24)));
  fVar1 = mobyutil::g_FrameTime * 20.0;
  *(undefined4 *)((int)pvVar5 + 0x94) = 0x40a00000;
  *(float *)((int)pvVar5 + 0x6c) = fVar1;
  if (pMVar14->animationId != '\0') {
    mobyutil::MB_SetAnimation(pMVar14,0,0,(int)(animationSpeed * 10.5));
  }
  puVar6 = pMVar14->pClass->collision;
  pMVar14->modeBits =
       pMVar14->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  pMVar14->collision = puVar6;
  return pMVar14;
}



//==== 002c4c04  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1844_002c4c04(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1844_002c4c04(void)

{
  DAT_007b806c = 0x10000;
  return;
}



//==== 002c4c18  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1844(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1844 */

void mobyupdate_unsorted::UpdateMoby_1844(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x736,1,0x737,1,1,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x735);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c4d10  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1845(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1845 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1845(MobyInstance *moby)

{
  return moby;
}



//==== 002c4d28  ns=mobyupdate_helpers  size=0x254
// sig: undefined M1848_002c4d28(void)
// callers(1): 002c4f7c mobyupdate_helpers::M1848_002c4f7c
// callees(0): 

void mobyupdate_helpers::M1848_002c4d28
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar9 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar9 * fVar5;
      }
      fVar2 = *param_2;
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      fVar11 = --(fVar2 * fVar2) + --(fVar3 * fVar3) + --(fVar4 * fVar4);
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = -(fVar2 * fVar8);
        fVar10 = -(fVar3 * fVar8);
        fVar8 = -(fVar4 * fVar8);
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0 + DAT_010a0be0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0 + DAT_010a0be4;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}



//==== 002c4f7c  ns=mobyupdate_helpers  size=0x19c
// sig: undefined M1848_002c4f7c(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 00174f80 vuchain::SetGSReg; 002c4d28 mobyupdate_helpers::M1848_002c4d28; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1848_002c4f7c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = draw::GetEffectTex(0x28);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  stub::STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007bd310;
  puVar5 = &DAT_007b8090;
  ppuVar4 = &PTR_DAT_007bd2fc;
  ppuVar7 = &PTR_DAT_007bd324;
  ppuVar6 = &PTR_DAT_007bd2e8;
  do {
    M1848_002c4d28(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010a0bf0);
    draw::DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010a0bf0,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 5);
  return;
}



//==== 002c5128  ns=mobyupdate_unsorted  size=0x108
// sig: undefined UpdateMoby_1848(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

/* Moby 1848 */

void mobyupdate_unsorted::UpdateMoby_1848(MobyInstance *moby)

{
  if (moby->state == 0) {
    DAT_010a0be0 = 0.0;
    DAT_010a0be4 = 0.0;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    DAT_010a0be0 = DAT_0071f424 * 0.025 + DAT_010a0be0;
    DAT_010a0be4 = DAT_0071f424 * 0.025 + DAT_010a0be4;
    if (1.0 < DAT_010a0be0) {
      DAT_010a0be0 = DAT_010a0be0 - 1.0;
    }
    if (DAT_010a0be0 < -1.0) {
      DAT_010a0be0 = DAT_010a0be0 + 1.0;
    }
    if (1.0 < DAT_010a0be4) {
      DAT_010a0be4 = DAT_010a0be4 - 1.0;
    }
    if (DAT_010a0be4 < -1.0) {
      DAT_010a0be4 = DAT_010a0be4 + 1.0;
    }
    RegisterFuncForMoby(&PTR_M1848_002c4f7c_0070b0a8,moby);
  }
  return;
}



//==== 002c5230  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1849(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1849 */

void mobyupdate_unsorted::UpdateMoby_1849(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x73b,1,0x73b,1,7,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x73a);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c5358  ns=mobyupdate_helpers  size=0xa60
// sig: undefined M185_002c5358(void)
// callers(1): 002c7328 mobyupdate_unsorted::UpdateMoby_185
// callees(5): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

MobyInstance *
mobyupdate_helpers::M185_002c5358
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          float *param_5,float *param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *moby;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  int iVar16;
  longlong lVar14;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f21;
  double dVar30;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar37;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 0x1e0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar13;
  puVar9[0x3e] = in_LR;
  puVar9[0x31] = in_f21;
  puVar9[0x32] = in_f22;
  puVar9[0x33] = in_f23;
  puVar9[0x34] = in_f24;
  puVar9[0x35] = in_f25;
  puVar9[0x36] = in_f26;
  puVar9[0x37] = in_f27;
  puVar9[0x38] = in_f28;
  puVar9[0x39] = in_f29;
  puVar9[0x3a] = in_f30;
  puVar9[0x3b] = in_f31;
  puVar9[0x28] = unaff_r23;
  puVar9[0x27] = unaff_r22;
  puVar9[0x30] = unaff_r31;
  puVar9[0x2b] = unaff_r26;
  puVar9[0x2f] = unaff_r30;
  uVar11 = uVar13 + 0x40 & 0xffffffff;
  puVar9[0x2e] = unaff_r29;
  pMVar21 = g_heroMobyPtr;
  dVar37 = (double)DAT_007bd344;
  *(f32 *)(puVar9 + 0xe) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar9 + 0x74) = (pMVar21->pos).y;
  *(f32 *)(puVar9 + 0xf) = (pMVar21->pos).z;
  *(f32 *)((int)puVar9 + 0x7c) = (pMVar21->pos).w;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  puVar9[0x2d] = unaff_r28;
  puVar9[0x2c] = unaff_r27;
  puVar9[0x2a] = unaff_r25;
  puVar9[0x29] = unaff_r24;
  puVar9[0x26] = unaff_r21;
  *(float *)(puVar9 + 0xf) = fStack00000048;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  iVar15 = collproc::CollLine(uVar13 - 0x170,uVar11,6,pMVar21,0);
  if (iVar15 == 0) {
    pMVar21 = (MobyInstance *)0x0;
    if (DAT_00a49344 != (MobyInstance *)0x0) {
      iVar15 = 0;
      moby = DAT_00a49344;
      do {
        if ((moby->state < 0x80) &&
           (moby->oClass != BLARGIAN_SNAGGLEBEAST && moby->oClass != DREK_FINAL_BOSS_ROBOT)) {
          *(f32 *)(puVar9 + 0x10) = (moby->pos).x;
          *(f32 *)((int)puVar9 + 0x84) = (moby->pos).y;
          *(f32 *)(puVar9 + 0x11) = (moby->pos).z;
          *(f32 *)((int)puVar9 + 0x8c) = (moby->pos).w;
          iVar16 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
          fVar2 = *(float *)(puVar9 + 0x10);
          fVar3 = *(float *)((int)puVar9 + 0x84);
          if (iVar16 != 0) {
            fVar8 = *(float *)(puVar9 + 0x11) + *(float *)(iVar16 + 0x10);
            *(float *)(puVar9 + 0x11) = fVar8;
            if ((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) {
              fVar6 = fVar2 - fStack00000040;
              fVar4 = fVar3 - fStack00000044;
              fVar5 = ABS(fVar6);
              fVar7 = ABS(fVar4);
              *(float *)(puVar9 + 0x17) = fVar6;
              *(float *)((int)puVar9 + 0xbc) = fVar4;
              *(float *)(puVar9 + 0x18) = fVar5 - fVar7;
              dVar32 = 0.0;
              uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
              fVar6 = ABS(*(float *)(puVar9 + 0x17));
              if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
                fVar6 = fVar7;
              }
              fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              fVar12 = ABS(*(float *)((int)puVar9 + 0xbc));
              if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
                fVar12 = fVar5;
              }
              dVar33 = 0.7853981852531433;
              dVar29 = dVar32;
              if (0.0 < fVar6) {
                lVar14 = uVar13 - 0x1d0;
                lVar17 = uVar13 - 0xdc;
                lVar20 = uVar13 - 0xcc;
                lVar22 = 2;
                fVar6 = (fVar12 - fVar6) / (fVar12 + fVar6);
                fVar5 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x22) = fVar6;
                *(float *)(puVar9 + 0x21) = fVar6;
                *(float *)((int)puVar9 + 0x10c) = fVar6;
                *(float *)((int)puVar9 + 0x104) = fVar6;
                fVar6 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar5;
                *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar6;
                *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar6 * fVar5;
                do {
                  *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0xf4) * fVar6 * fVar6;
                  iVar16 = (int)lVar17;
                  lVar14 = lVar14 + 8;
                  lVar17 = lVar17 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
                  lVar20 = lVar20 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar22 = 4;
                lVar20 = uVar13 - 0xdc;
                pfVar18 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar17 = lVar20;
                do {
                  fVar6 = *pfVar18;
                  fVar5 = pfVar18[1];
                  pfVar18 = pfVar18 + 2;
                  *(float *)((int)lVar14 + 0x104) = *(float *)((int)lVar14 + 0x104) * fVar6;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
                  lVar17 = lVar17 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar17 = 2;
                lVar14 = lVar1;
                do {
                  iVar16 = (int)lVar14;
                  lVar14 = lVar14 + 0x10;
                  iVar10 = (int)lVar20;
                  lVar20 = lVar20 + 0x10;
                  dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x104)) +
                                    *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                   *(float *)(iVar10 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar4);
              }
              fVar3 = fStack00000044 - fVar3;
              fVar2 = fStack00000040 - fVar2;
              fVar8 = fVar8 - fStack00000048;
              fVar6 = ABS(fVar8);
              *(float *)(puVar9 + 0x16) = fVar8;
              fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
              fVar3 = ABS(fVar2);
              *(float *)((int)puVar9 + 0xac) = fVar2;
              *(float *)((int)puVar9 + 0xb4) = fVar3 - fVar6;
              uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
              fVar2 = ABS(*(float *)((int)puVar9 + 0xac));
              if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
                fVar2 = fVar6;
              }
              fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
              fVar6 = ABS(*(float *)(puVar9 + 0x16));
              if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
                fVar6 = fVar3;
              }
              fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
              dVar36 = dVar32;
              if (0.0 < fVar2) {
                lVar14 = uVar13 - 0x1d0;
                lVar20 = uVar13 - 0xec;
                lVar17 = uVar13 - 0xfc;
                lVar22 = 2;
                fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
                fVar6 = fVar2 * fVar2;
                *(float *)(puVar9 + 0x1e) = fVar2;
                *(float *)(puVar9 + 0x1d) = fVar2;
                *(float *)((int)puVar9 + 0xec) = fVar2;
                *(float *)((int)puVar9 + 0xe4) = fVar2;
                fVar2 = fVar6 * fVar6;
                *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar6;
                *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar2;
                *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2 * fVar6;
                do {
                  *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xd4) * fVar2 * fVar2;
                  iVar16 = (int)lVar17;
                  lVar17 = lVar17 + 8;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
                  lVar20 = lVar20 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar22 = 4;
                lVar20 = uVar13 - 0xfc;
                pfVar18 = (float *)&DAT_007358e0;
                lVar14 = lVar1;
                lVar17 = lVar20;
                do {
                  fVar2 = *pfVar18;
                  fVar6 = pfVar18[1];
                  pfVar18 = pfVar18 + 2;
                  *(float *)((int)lVar14 + 0xe4) = *(float *)((int)lVar14 + 0xe4) * fVar2;
                  lVar14 = lVar14 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
                  lVar17 = lVar17 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                lVar17 = 2;
                lVar14 = lVar1;
                do {
                  iVar16 = (int)lVar14;
                  iVar10 = (int)lVar20;
                  lVar14 = lVar14 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0xe4)) +
                                    *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                   *(float *)(iVar10 + 0xc));
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar8 + fVar3);
              }
              dVar23 = (double)fastfunc::FastSubRots(*param_5,(float)dVar29);
              fVar2 = fStack00000044 - *(float *)((int)puVar9 + 0x84);
              dVar35 = (double)SQRT((fStack00000048 - *(float *)(puVar9 + 0x11)) *
                                    (fStack00000048 - *(float *)(puVar9 + 0x11)) +
                                    (fStack00000040 - *(float *)(puVar9 + 0x10)) *
                                    (fStack00000040 - *(float *)(puVar9 + 0x10)) + fVar2 * fVar2);
              if (dVar35 < 2.5) {
                fVar3 = (moby->pos).x - g_heroPosition.x;
                fVar8 = (moby->pos).y - g_heroPosition.y;
                fVar2 = (g_heroMobyPtr->rotation).z;
                dVar27 = ABS((double)fVar3);
                dVar28 = ABS((double)fVar8);
                *(float *)(puVar9 + 0x14) = fVar3;
                *(float *)((int)puVar9 + 0xa4) = fVar8;
                *(float *)(puVar9 + 0x15) = (float)(dVar27 - dVar28);
                uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
                         (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
                         (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
                dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
                if ((double)*(float *)(puVar9 + 0x15) - dVar32 < 0.0) {
                  dVar24 = dVar28;
                }
                fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
                dVar28 = ABS((double)*(float *)((int)puVar9 + 0xa4));
                if ((double)*(float *)(puVar9 + 0x15) - dVar32 < 0.0) {
                  dVar28 = dVar27;
                }
                fVar8 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
                dVar27 = dVar32;
                if (dVar32 < dVar24) {
                  lVar14 = uVar13 - 0x1d0;
                  lVar17 = uVar13 - 0x11c;
                  lVar20 = uVar13 - 0x10c;
                  lVar22 = 2;
                  fVar6 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
                  fVar4 = fVar6 * fVar6;
                  *(float *)(puVar9 + 0x1a) = fVar6;
                  *(float *)(puVar9 + 0x19) = fVar6;
                  *(float *)((int)puVar9 + 0xcc) = fVar6;
                  *(float *)((int)puVar9 + 0xc4) = fVar6;
                  fVar6 = fVar4 * fVar4;
                  *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
                  *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar6;
                  *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar6 * fVar4;
                  do {
                    *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xb4) * fVar6 * fVar6;
                    iVar16 = (int)lVar17;
                    lVar14 = lVar14 + 8;
                    lVar17 = lVar17 + 8;
                    *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
                    lVar20 = lVar20 + 8;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  lVar22 = 4;
                  lVar20 = uVar13 - 0x11c;
                  pfVar18 = (float *)&DAT_007358e0;
                  lVar14 = lVar1;
                  lVar17 = lVar20;
                  do {
                    fVar6 = *pfVar18;
                    fVar4 = pfVar18[1];
                    pfVar18 = pfVar18 + 2;
                    *(float *)((int)lVar14 + 0xc4) = *(float *)((int)lVar14 + 0xc4) * fVar6;
                    lVar14 = lVar14 + 8;
                    *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
                    lVar17 = lVar17 + 8;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                  lVar17 = 2;
                  lVar14 = lVar1;
                  dVar24 = dVar32;
                  do {
                    iVar16 = (int)lVar14;
                    lVar14 = lVar14 + 0x10;
                    iVar10 = (int)lVar20;
                    lVar20 = lVar20 + 0x10;
                    dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar16 + 0xc4)) +
                                      *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                     *(float *)(iVar10 + 0xc));
                    lVar17 = lVar17 + -1;
                  } while (lVar17 != 0);
                  dVar27 = (double)((float)(dVar24 + dVar33) * fVar3 + fVar8);
                }
                dVar33 = (double)fastfunc::FastSubRots(fVar2,(float)dVar27);
                if (((dVar33 < 1.0471975803375244) &&
                    (ABS(fStack00000048 - *(float *)(puVar9 + 0x11)) < 2.0)) &&
                   (iVar16 = collproc::CollLine(uVar11,uVar13 - 0x160,6,g_heroMobyPtr,0),
                   iVar16 == 0)) {
                  *param_6 = (float)-dVar36;
                  *param_5 = (float)dVar29;
                  return moby;
                }
              }
              if (dVar35 <= dVar37) {
                mobyutil::MB_SphericalToVector
                          ((float)dVar35,*param_5,DAT_00969fc4 * 0.5 + *param_6,
                           (float *)(puVar9 + 0x12));
                fVar2 = *(float *)((int)puVar9 + 0x94) + fStack00000044;
                fVar3 = fVar2 - *(float *)((int)puVar9 + 0x84);
                fVar8 = (*(float *)(puVar9 + 0x12) + fStack00000040) - *(float *)(puVar9 + 0x10);
                *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) + fStack00000040;
                *(float *)((int)puVar9 + 0x94) = fVar2;
                fVar2 = (*(float *)(puVar9 + 0x13) + fStack00000048) - *(float *)(puVar9 + 0x11);
                *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) + fStack00000048;
                dVar34 = 1.0;
                dVar27 = -1.0;
                dVar24 = (double)(SQRT(fVar2 * fVar2 + fVar8 * fVar8 + fVar3 * fVar3) /
                                 (float)(dVar35 * 2.0));
                dVar31 = 1.5707963705062866;
                dVar28 = 0.01745329238474369;
                dVar33 = dVar24;
                if (dVar24 - dVar32 < 0.0) {
                  dVar33 = ABS(dVar24);
                }
                dVar25 = dVar34;
                if (dVar24 - dVar32 < 0.0) {
                  dVar25 = dVar27;
                }
                dVar24 = (double)(float)(1.0 - dVar33);
                if ((double)(float)(1.0 - dVar33) - dVar32 < 0.0) {
                  dVar24 = dVar32;
                }
                dVar33 = (double)((float)(-(double)(((float)((double)(float)(dVar33 * dVar33) *
                                                            dVar33) * DAT_007358cc +
                                                    (float)((double)(float)(dVar33 * dVar33) *
                                                            (double)DAT_007358c8 +
                                                           (double)(float)(dVar33 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (float)SQRT(dVar24) - 1.5707964) * dVar25) * 2.0);
                if (((double)(DAT_007bd340 * 0.017453292) < dVar33) &&
                   (iVar16 = mobyutil::MB_GetPvarsIfMobyHasThem(moby), iVar16 != 0)) {
                  dVar25 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar16 + 10));
                  dVar26 = (double)(float)((double)(float)(dVar25 * 0.125) / dVar35);
                  dVar24 = dVar26;
                  if (dVar26 - dVar32 < 0.0) {
                    dVar24 = ABS(dVar26);
                  }
                  dVar30 = dVar34;
                  if (dVar26 - dVar32 < 0.0) {
                    dVar30 = dVar27;
                  }
                  dVar27 = (double)(float)(dVar34 - dVar24);
                  if ((double)(float)(dVar34 - dVar24) - dVar32 < 0.0) {
                    dVar27 = dVar32;
                  }
                  if (((double)(float)(dVar25 * 0.125) < dVar35) &&
                     (dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(
                                                  dVar24 * dVar24) * dVar24) * DAT_007358cc +
                                                  (float)((double)(float)(dVar24 * dVar24) *
                                                          (double)DAT_007358c8 +
                                                         (double)(float)(dVar24 * (double)
                                                  DAT_007358c4 + (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar27) - dVar31) * dVar30 -
                                               dVar33), dVar33 < dVar32)) {
                    dVar33 = dVar32;
                  }
                }
                if ((dVar33 < (double)(float)((double)DAT_007bd340 * dVar28)) &&
                   (((iVar16 = collproc::CollLine(uVar11,uVar13 - 0x160,6,param_1,0), iVar16 == 0 ||
                     ((CollOutput.pMoby != (MobyInstance *)0x0 && (CollOutput.pMoby == moby)))) &&
                    (*param_6 = (float)-dVar36, dVar37 = dVar35, pMVar21 = moby,
                    dVar23 < 0.1745329201221466)))) {
                  *param_5 = (float)dVar29;
                }
              }
            }
          }
        }
        moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar15);
        iVar15 = iVar15 + 4;
      } while (moby != (MobyInstance *)0x0);
    }
  }
  else {
    pMVar21 = (MobyInstance *)0x0;
  }
  return pMVar21;
}



//==== 002c5db8  ns=mobyupdate_helpers  size=0x17c
// sig: undefined M1849_002c5db8(void)
// callers(1): 002c5f88 mobyupdate_helpers::M185_002c5f88
// callees(1): 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1849_002c5db8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  if (DAT_010a10a0 != 0) {
    DAT_010a10a0 = 0;
    dVar12 = (double)fastfunc::FastIntToDouble(0xc);
    DAT_010a1300 = (float)((double)DAT_007bd344 / dVar12);
    pfVar8 = (float *)&DAT_010a10c0;
    lVar11 = 0xb;
    DAT_010a10c0 = *puVar2;
    uVar1 = *(undefined4 *)(param_1 + 0xdc);
    DAT_010a10c4 = puVar2[1];
    DAT_010a10c8 = puVar2[2];
    fVar3 = -(DAT_010a1300 * *(float *)(param_1 + 0xd0));
    DAT_010a10cc = puVar2[3];
    fVar4 = -(DAT_010a1300 * *(float *)(param_1 + 0xd4));
    fVar5 = -(DAT_010a1300 * *(float *)(param_1 + 0xd8));
    pfVar6 = pfVar8;
    do {
      pfVar6[4] = *pfVar8 + fVar3;
      pfVar6[5] = pfVar8[1] + fVar4;
      pfVar6[6] = pfVar8[2] + fVar5;
      pfVar7 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      pfVar6[7] = *pfVar7;
      lVar11 = lVar11 + -1;
      pfVar6 = pfVar6 + 4;
    } while (lVar11 != 0);
    DAT_010a2210 = 0;
    DAT_010a22b4 = 0;
    DAT_010a2214 = 0;
    DAT_010a2218 = 0;
    DAT_010a1304 = 0;
    iVar9 = 0;
    do {
      iVar10 = iVar9 + 1;
      (&DAT_010a22b0)[iVar9] = 0;
      (&DAT_010a2250)[iVar9 * 4] = fVar3;
      (&DAT_010a2254)[iVar9 * 4] = fVar4;
      (&DAT_010a2258)[iVar9 * 4] = fVar5;
      (&DAT_010a225c)[iVar9 * 4] = uVar1;
      iVar9 = iVar10;
    } while (iVar10 < 3);
  }
  return;
}



//==== 002c5f88  ns=mobyupdate_helpers  size=0x1364
// sig: undefined M185_002c5f88(void)
// callers(2): 0029a5a8 mobyupdate_unsorted::UpdateMoby_1563; 002c7328 mobyupdate_unsorted::UpdateMoby_185
// callees(15): 00057820 collproc::CollLine; 0006d7e0 draw::RegisterPostDraw; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe610 mobyutil::MB_SphericalToVector; 0010de78 mobyutil::MB_WrapRot; 001113e0 mobyutil::MB_RotateQuatAxisAngle; 0012f8c0 partupd::SpawnPart_53; 00135678 partupd::SpawnPart_78; 002c5db8 mobyupdate_helpers::M1849_002c5db8; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 002c5f38: '?fff' (raw)

void mobyupdate_helpers::M185_002c5f88(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar14;
  longlong lVar13;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  float *pfVar19;
  int iVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float afStack_140 [4];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120 [6];
  longlong local_108;
  
  pfVar9 = *(float **)((int)param_1 + 0x78);
  M1849_002c5db8();
  DAT_010a1304 = mobyutil::MB_WrapRot(DAT_010a1304 + DAT_007bd354);
  mobyutil::MB_SphericalToVector(DAT_010a1300,pfVar9[0x12],pfVar9[0x13],&local_1b0);
  if (((MobyInstance *)pfVar9[4] == (MobyInstance *)0x0) ||
     (iVar14 = mobyutil::MB_GetPvarsIfMobyHasThem((MobyInstance *)pfVar9[4]), iVar14 == 0)) {
    mobyutil::MB_SphericalToVector(DAT_007bd344,pfVar9[0x12],pfVar9[0x13],&local_1a0);
    local_1a0 = local_1a0 + *pfVar9;
    local_19c = local_19c + pfVar9[1];
    fVar10 = pfVar9[2];
  }
  else {
    fVar10 = pfVar9[4];
    local_1a0 = *(float *)((int)fVar10 + 0x10);
    local_19c = *(float *)((int)fVar10 + 0x14);
    local_198 = *(float *)((int)fVar10 + 0x18);
    local_194 = *(undefined4 *)((int)fVar10 + 0x1c);
    fVar10 = *(float *)(iVar14 + 0x10);
  }
  local_198 = local_198 + fVar10;
  fVar10 = pfVar9[4];
  dVar38 = (double)DAT_007bd344;
  if (fVar10 == 0.0) {
    iVar14 = collproc::CollLine(pfVar9,&local_1a0,0x14,g_heroMobyPtr,0);
    DAT_010a10c0 = *pfVar9;
    if (iVar14 != 0) {
      dVar38 = (double)SQRT((CollOutput.ip.x - DAT_010a10c0) * (CollOutput.ip.x - DAT_010a10c0) +
                            (CollOutput.ip.y - pfVar9[1]) * (CollOutput.ip.y - pfVar9[1]));
    }
  }
  else {
    DAT_010a10c0 = *pfVar9;
    fVar2 = *(float *)((int)fVar10 + 0x14) - pfVar9[1];
    fVar10 = *(float *)((int)fVar10 + 0x10) - DAT_010a10c0;
    dVar38 = (double)SQRT(fVar10 * fVar10 + fVar2 * fVar2);
  }
  DAT_010a1300 = (float)((double)DAT_007bd34c * dVar38);
  lVar21 = 1;
  DAT_010a10c4 = pfVar9[1];
  DAT_010a10c8 = pfVar9[2];
  DAT_010a10cc = pfVar9[3];
  DAT_010a1180 = *pfVar9;
  DAT_010a1184 = pfVar9[1];
  DAT_010a1188 = pfVar9[2];
  DAT_010a118c = pfVar9[3];
  DAT_010a1240 = *pfVar9;
  DAT_010a1244 = pfVar9[1];
  DAT_010a1248 = pfVar9[2];
  DAT_010a124c = pfVar9[3];
  do {
    iVar15 = (int)lVar21;
    iVar14 = iVar15 * 0x10;
    pfVar18 = &DAT_010a10c0 + iVar15 * 4;
    pfVar19 = (float *)(iVar14 + 0x10a10b0);
    dVar32 = (double)(*pfVar18 - *pfVar19);
    dVar36 = (double)((&DAT_010a10c4)[iVar15 * 4] - *(float *)(iVar14 + 0x10a10b4));
    dVar35 = (double)((&DAT_010a10c8)[iVar15 * 4] - (float)(&DAT_010a10b8)[iVar15 * 4]);
    dVar22 = (double)fastfunc::FastIntToDouble(lVar21);
    dVar23 = (double)local_1b0;
    dVar37 = (double)(float)(dVar22 * (double)DAT_007bd34c);
    dVar24 = (double)local_1ac;
    dVar25 = (double)local_1a8;
    dVar22 = (double)(float)(dVar37 * -0.4999999701976776 + 0.8999999761581421);
    if ((DAT_007bd350 < iVar15) && (fVar10 = pfVar9[4], fVar10 != 0.0)) {
      fVar2 = *(float *)((int)fVar10 + 0x14) - (&DAT_010a10c4)[iVar15 * 4];
      fVar44 = *(float *)((int)fVar10 + 0x10) - *pfVar18;
      fVar4 = *(float *)((int)fVar10 + 0x18) - (&DAT_010a10c8)[iVar15 * 4];
      dVar26 = 0.0;
      local_1a4 = *(undefined4 *)((int)fVar10 + 0x1c);
      fVar10 = SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
      fVar5 = DAT_010a1300 / fVar10;
      dVar33 = dVar26;
      if (0.0 - fVar10 < 0.0) {
        dVar33 = (double)(fVar5 * fVar4);
      }
      dVar29 = dVar26;
      if (0.0 - fVar10 < 0.0) {
        dVar29 = (double)(fVar5 * fVar2);
      }
      if (0.0 - fVar10 < 0.0) {
        dVar26 = (double)(fVar5 * fVar44);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar33 = (double)(fVar5 * fVar4);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar29 = (double)(fVar5 * fVar2);
      }
      if (fVar10 - 0.0 < 0.0) {
        dVar26 = (double)(fVar5 * fVar44);
      }
      local_1a8 = (float)((double)(float)(dVar33 - dVar25) * 0.20000000298023224 + dVar25);
      dVar25 = (double)local_1a8;
      local_1ac = (float)((double)(float)(dVar29 - dVar24) * 0.20000000298023224 + dVar24);
      dVar24 = (double)local_1ac;
      local_1b0 = (float)((double)(float)(dVar26 - dVar23) * 0.20000000298023224 + dVar23);
      dVar23 = (double)local_1b0;
    }
    fVar10 = (float)(dVar22 * (double)(float)(dVar24 - dVar36) + dVar36);
    fVar2 = (float)(dVar22 * (double)(float)(dVar23 - dVar32) + dVar32);
    fVar44 = (float)(dVar22 * (double)(float)(dVar25 - dVar35) + dVar35);
    dVar22 = 0.0;
    fVar4 = SQRT(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
    if (fVar4 == 0.0) {
      local_170 = *pfVar19;
      *pfVar18 = local_170;
      (&DAT_010a10c4)[iVar15 * 4] = (float)*(undefined4 *)(iVar14 + 0x10a10b4);
      (&DAT_010a10c8)[iVar15 * 4] = (float)(&DAT_010a10b8)[iVar15 * 4];
      uVar3 = *(undefined4 *)(iVar14 + 0x10a10bc);
    }
    else {
      fVar4 = DAT_010a1300 / fVar4;
      local_170 = fVar4 * fVar2 + *pfVar19;
      *pfVar18 = local_170;
      (&DAT_010a10c4)[iVar15 * 4] = fVar4 * fVar10 + *(float *)(iVar14 + 0x10a10b4);
      (&DAT_010a10c8)[iVar15 * 4] = fVar4 * fVar44 + (float)(&DAT_010a10b8)[iVar15 * 4];
      uVar3 = *(undefined4 *)(iVar14 + 0x10a10bc);
    }
    (&DAT_010a10cc)[iVar15 * 4] = (float)uVar3;
    local_170 = local_170 - *pfVar19;
    local_16c = (&DAT_010a10c4)[iVar15 * 4] - *(float *)(iVar14 + 0x10a10b4);
    local_168 = (&DAT_010a10c8)[iVar15 * 4] - (float)(&DAT_010a10b8)[iVar15 * 4];
    fVar2 = hero::g_heroGravityDir * local_16c - DAT_00969f74 * local_170;
    iVar20 = 0;
    fVar44 = DAT_00969f74 * local_168 - DAT_00969f78 * local_16c;
    iVar14 = 0x10a1310;
    fVar10 = DAT_00969f78 * local_170 - hero::g_heroGravityDir * local_168;
    local_164 = (&DAT_010a10cc)[iVar15 * 4];
    local_154 = 0.0;
    fVar4 = SQRT(fVar2 * fVar2 + fVar44 * fVar44 + fVar10 * fVar10);
    fVar5 = (float)((double)(float)((double)DAT_007bd368 - (double)DAT_007bd364) * dVar37 +
                   (double)DAT_007bd364) / fVar4;
    dVar23 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar23 = (double)(fVar44 * fVar5);
    }
    dVar24 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar24 = (double)(fVar10 * fVar5);
    }
    dVar25 = dVar22;
    if (0.0 - fVar4 < 0.0) {
      dVar25 = (double)(fVar2 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar23 = (double)(fVar44 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar24 = (double)(fVar10 * fVar5);
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar25 = (double)(fVar2 * fVar5);
    }
    local_160 = (float)dVar23;
    local_15c = (float)dVar24;
    local_158 = (float)dVar25;
    do {
      local_108 = (longlong)iVar20;
      mobyutil::MB_RotateQuatAxisAngle((float)local_108 * DAT_007bd360,&local_150,&local_160);
      dVar25 = (double)*pfVar18;
      pfVar19 = (float *)(iVar14 + (int)(lVar21 << 8) + (int)(lVar21 << 6));
      iVar20 = iVar20 + 1;
      iVar14 = iVar14 + 0x10;
      *pfVar19 = (float)((double)local_150 + dVar25);
      dVar24 = (double)(&DAT_010a10c4)[iVar15 * 4];
      pfVar19[1] = (float)((double)local_14c + dVar24);
      dVar23 = (double)(&DAT_010a10c8)[iVar15 * 4];
      pfVar19[2] = (float)((double)local_148 + dVar23);
      pfVar19[3] = local_144;
    } while (iVar20 < 0x14);
    dVar26 = (double)local_154;
    dVar33 = (double)(&DAT_010a10cc)[iVar15 * 4];
    fVar10 = local_168 * local_168 + local_170 * local_170 + local_16c * local_16c;
    dVar32 = dVar22;
    dVar35 = dVar22;
    dVar36 = dVar22;
    if ((double)SQRT(fVar10) != dVar22) {
      fVar2 = 1.0 / SQRT(fVar10);
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar36 = (double)(local_170 * fVar2);
      dVar35 = (double)(local_16c * fVar2);
      dVar32 = (double)(local_168 * fVar2);
    }
    fVar10 = local_158 * local_158 + local_160 * local_160 + local_15c * local_15c;
    dVar29 = dVar22;
    dVar30 = dVar22;
    dVar31 = dVar22;
    if ((double)SQRT(fVar10) != dVar22) {
      fVar2 = 1.0 / SQRT(fVar10);
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar10 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar29 = (double)(local_160 * fVar2);
      dVar30 = (double)(local_15c * fVar2);
      dVar31 = (double)(local_158 * fVar2);
    }
    dVar28 = (double)(float)(dVar35 * dVar31 - (double)(float)(dVar32 * dVar30));
    dVar27 = (double)(float)(dVar32 * dVar29 - (double)(float)(dVar36 * dVar31));
    dVar35 = (double)(float)(dVar36 * dVar30 - (double)(float)(dVar35 * dVar29));
    dVar36 = (double)(float)((double)(float)((double)DAT_007bd380 - (double)DAT_007bd37c) * dVar37 +
                            (double)DAT_007bd37c);
    dVar32 = (double)fastfunc::FastIntToDouble(lVar21);
    fVar44 = mobyutil::MB_WrapRot((float)((double)DAT_007bd358 * dVar32 + (double)DAT_010a1304));
    fVar10 = fVar44 + 1.5707963;
    fVar2 = 3.1415925 - fVar44;
    if (fVar44 - (3.1415925 - fVar44) < 0.0) {
      fVar2 = fVar44;
    }
    lVar21 = (longlong)(iVar15 + 1);
    fVar4 = 3.1415925 - fVar10;
    if (fVar10 - (3.1415925 - fVar10) < 0.0) {
      fVar4 = fVar10;
    }
    fVar5 = -3.1415925 - fVar44;
    if ((-3.1415925 - fVar44) - fVar2 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = -3.1415925 - fVar10;
    if ((-3.1415925 - fVar10) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    fVar10 = fVar5 * fVar5;
    fVar44 = fVar2 * fVar2;
    fVar7 = fVar10 * fVar10 * fVar5;
    fVar4 = fVar44 * fVar44 * fVar2;
    fVar1 = fVar10 * fVar7;
    fVar6 = fVar44 * fVar4;
    dVar32 = (double)(float)(dVar36 * (double)(fVar10 * fVar1 * 2.601887e-06 +
                                              fVar1 * -0.0001980741 +
                                              fVar7 * 0.0083330255 +
                                              fVar10 * fVar5 * -0.16666657 + fVar5));
    dVar36 = (double)(float)(dVar36 * (double)(fVar44 * fVar6 * 2.601887e-06 +
                                              fVar6 * -0.0001980741 +
                                              fVar4 * 0.0083330255 +
                                              fVar44 * fVar2 * -0.16666657 + fVar2));
    fVar10 = (float)(dVar26 * dVar32 + dVar33);
    (&DAT_010a118c)[iVar15 * 4] = fVar10;
    (&DAT_010a1180)[iVar15 * 4] =
         (float)(dVar28 * dVar36 + (double)(float)(dVar29 * dVar32 + dVar25));
    (&DAT_010a1184)[iVar15 * 4] =
         (float)(dVar27 * dVar36 + (double)(float)(dVar30 * dVar32 + dVar24));
    (&DAT_010a1188)[iVar15 * 4] =
         (float)(dVar35 * dVar36 + (double)(float)(dVar31 * dVar32 + dVar23));
    (&DAT_010a124c)[iVar15 * 4] = fVar10;
    (&DAT_010a1240)[iVar15 * 4] =
         (float)((double)(float)(dVar29 * dVar32 + -(double)(float)(dVar36 * dVar28)) + dVar25);
    (&DAT_010a1244)[iVar15 * 4] =
         (float)((double)(float)(dVar30 * dVar32 + -(double)(float)(dVar36 * dVar27)) + dVar24);
    (&DAT_010a1248)[iVar15 * 4] =
         (float)((double)(float)(dVar31 * dVar32 + -(double)(float)(dVar36 * dVar35)) + dVar23);
  } while (iVar15 + 1 < 0xc);
  draw::RegisterPostDraw(&PTR_M1850_002c8ff8_0070b0f8,param_1);
  dVar24 = 0.10000000149011612;
  dVar23 = (double)mobyutil::MB_randRangeFloat(0.1,2.0);
  lVar21 = mobyutil::MB_randInt(2);
  lVar21 = lVar21 + ((LZCOUNT(-(int)lVar21) << 0x3a) >> 0x3f & ((int)lVar21 + -1) - lVar21);
  iVar14 = mobyutil::MB_randInt(2);
  if (iVar14 == 0) {
    local_190 = DAT_010a1230;
    local_18c = DAT_010a1234;
    local_188 = DAT_010a1238;
    local_184 = DAT_010a123c;
    dVar25 = 30.5;
    local_108 = (longlong)(int)(animationSpeed * 30.5);
    uVar34 = 0x3f689374c0000000;
    partupd::SpawnPart_53
              ((double)(float)(dVar23 * dVar24),dVar23,0x3f689374c0000000,&local_190,
               (int)(animationSpeed * 30.5));
    lVar21 = -lVar21;
    local_108 = (longlong)(int)((double)animationSpeed * dVar25);
    partupd::SpawnPart_53
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),uVar34,&local_190,
               (int)((double)animationSpeed * dVar25));
  }
  iVar14 = mobyutil::MB_randInt(2);
  if (iVar14 == 0) {
    local_190 = DAT_010a12f0;
    local_18c = DAT_010a12f4;
    local_188 = DAT_010a12f8;
    local_184 = DAT_010a12fc;
    dVar25 = 30.5;
    local_108 = (longlong)(int)(animationSpeed * 30.5);
    uVar34 = 0x3f689374c0000000;
    partupd::SpawnPart_53
              ((double)(float)(dVar23 * dVar24),dVar23,0x3f689374c0000000,&local_190,
               (int)(animationSpeed * 30.5));
    lVar21 = -lVar21;
    local_108 = (longlong)(int)((double)animationSpeed * dVar25);
    partupd::SpawnPart_53
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),uVar34,&local_190,
               (int)((double)animationSpeed * dVar25));
  }
  fVar2 = DAT_010a10d4 - DAT_010a10c4;
  fVar44 = DAT_010a10d0 - DAT_010a10c0;
  fVar4 = DAT_010a10d8 - DAT_010a10c8;
  local_174 = DAT_010a10dc;
  dVar32 = (double)SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
  fVar10 = (float)((double)(DAT_0071f408 * DAT_007bd384) / dVar32);
  dVar25 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar25 = (double)(fVar44 * fVar10);
  }
  dVar35 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar35 = (double)(fVar2 * fVar10);
  }
  dVar36 = dVar22;
  if (dVar22 - dVar32 < 0.0) {
    dVar36 = (double)(fVar4 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar25 = (double)(fVar44 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar35 = (double)(fVar2 * fVar10);
  }
  if (dVar32 - dVar22 < 0.0) {
    dVar36 = (double)(fVar4 * fVar10);
  }
  local_180 = (float)dVar25;
  local_17c = (float)dVar35;
  local_178 = (float)dVar36;
  iVar14 = mobyutil::MB_randInt(2);
  if (iVar14 == 0) {
    fVar2 = *(float *)((int)param_1 + 0xd4);
    fVar44 = *(float *)((int)param_1 + 0xd0);
    fVar4 = *(float *)((int)param_1 + 0xd8);
    local_184 = DAT_010a10cc;
    dVar32 = (double)SQRT(fVar4 * fVar4 + fVar44 * fVar44 + fVar2 * fVar2);
    local_120[0] = 0x7f207f7f;
    local_120[1] = 0x7f7f2020;
    local_120[2] = 0x7f20207f;
    local_120[3] = 0x7f7f207f;
    local_120[4] = 0x7f7f7f20;
    fVar10 = (float)((double)DAT_007bd390 / dVar32);
    dVar25 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar25 = (double)(fVar4 * fVar10);
    }
    dVar35 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar35 = (double)(fVar2 * fVar10);
    }
    dVar36 = dVar22;
    if (dVar22 - dVar32 < 0.0) {
      dVar36 = (double)(fVar44 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar25 = (double)(fVar4 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar35 = (double)(fVar2 * fVar10);
    }
    if (dVar32 - dVar22 < 0.0) {
      dVar36 = (double)(fVar44 * fVar10);
    }
    local_188 = (float)((double)DAT_010a10c8 + dVar25);
    local_18c = (float)((double)DAT_010a10c4 + dVar35);
    local_190 = (float)((double)DAT_010a10c0 + dVar36);
    lVar13 = mobyutil::MB_randInt(5);
    uVar3 = *(undefined4 *)((int)local_120 + (int)(lVar13 << 2));
    dVar25 = (double)mobyutil::MB_randRangeSigned(dVar22,(double)DAT_007bd38c);
    dVar32 = (double)mobyutil::MB_randRangeSigned(dVar22,(double)DAT_007bd38c);
    mobyutil::MB_RotateQuatAxisAngle((float)dVar32,afStack_140,&local_180);
    local_124 = 0;
    local_130 = DAT_00969f74 * local_178 - DAT_00969f78 * local_17c;
    local_128 = hero::g_heroGravityDir * local_17c - DAT_00969f74 * local_180;
    local_12c = DAT_00969f78 * local_180 - hero::g_heroGravityDir * local_178;
    mobyutil::MB_RotateQuatAxisAngle((float)dVar25,afStack_140,afStack_140);
    lVar13 = fastfunc::FastDoubleToInt
                       ((double)((float)(dVar38 * 1.2000000476837158) /
                                (DAT_0071f408 * DAT_007bd384)));
    lVar16 = (longlong)((int)lVar13 * 3);
    uVar17 = (LZCOUNT(-(int)pfVar9[4]) << 0x3a) >> 0x3f & lVar13 - lVar16;
    lVar13 = lVar16 + uVar17;
    partupd::SpawnPart_78
              ((double)(float)(dVar23 * dVar24),dVar23,&local_190,lVar13,lVar16,uVar17,uVar3,0,
               lVar21,afStack_140);
    partupd::SpawnPart_78
              ((double)(float)(dVar23 * 0.07000000029802322),
               (double)(float)(dVar23 * 0.699999988079071),&local_190,lVar13);
  }
  iVar14 = fastfunc::FastDecTimerS32(&DAT_010a22b4);
  if (iVar14 != 0) {
    uVar17 = 0;
    auVar39 = loadVectorLeftIndexed(0xffffffffffffd394,0x7c0000);
    auVar40 = loadVectorLeftIndexed(0x10,0x2c5f34);
    auVar42 = vectorConvertFromSignedFixedPointWord(auVar39,0);
    auVar39 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = ZEXT416(0xffffffff);
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar39,auVar39);
    auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    dVar38 = 0.5;
    auVar39 = vectorAddFloatingPoint(auVar42,auVar41);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar43);
    auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
    auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    DAT_010a22b4 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x22b4,
                              0x10a0000);
    do {
      iVar14 = (int)uVar17;
      if ((&DAT_010a22b0)[iVar14] == '\0') {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0xffffffffffffd39c,0x7c0000);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar39,0);
        (&DAT_010a22b0)[iVar14] = 1;
        fVar10 = DAT_007bd3ac;
        iVar20 = (int)((uVar17 & 0xffffffff) << 2);
        auVar39 = vectorAddFloatingPoint(auVar39,auVar41);
        iVar15 = DAT_007bd3b0 >> 0x18;
        auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar42);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           (longlong)iVar20,0x10a2280);
        *(undefined4 *)(&DAT_010a2280 + iVar20) = uVar3;
        *(undefined4 *)(&DAT_010a2298 + iVar20) = 0;
        *(float *)(&DAT_010a22a4 + iVar20) = fVar10;
        dVar23 = (double)fastfunc::FastIntToDouble(iVar15);
        *(float *)(&DAT_010a228c + iVar20) = (float)dVar23;
        (&DAT_010a2220)[iVar14 * 4] = *pfVar9;
        (&DAT_010a2224)[iVar14 * 4] = pfVar9[1];
        (&DAT_010a2228)[iVar14 * 4] = pfVar9[2];
        (&DAT_010a222c)[iVar14 * 4] = pfVar9[3];
        uVar3 = DAT_010a10dc;
        fVar10 = DAT_010a10d4 - DAT_010a10c4;
        fVar2 = DAT_010a10d0 - DAT_010a10c0;
        fVar44 = DAT_010a10d8 - DAT_010a10c8;
        dVar35 = (double)(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
        dVar23 = dVar22;
        dVar25 = dVar22;
        dVar32 = dVar22;
        if ((double)(float)SQRT(dVar35) != dVar22) {
          dVar23 = 1.0 / SQRT(dVar35);
          dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0)
                                   * (double)(float)(dVar38 * dVar23) + dVar23);
          dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0)
                                   * (double)(float)(dVar38 * dVar23) + dVar23);
          fVar4 = (float)(-(double)(float)((double)(float)(dVar35 * dVar23) * dVar23 - 1.0) *
                          (double)(float)(dVar38 * dVar23) + dVar23);
          dVar32 = (double)(fVar4 * fVar2);
          dVar25 = (double)(fVar4 * fVar10);
          dVar23 = (double)(fVar4 * fVar44);
        }
        (&DAT_010a2250)[iVar14 * 4] = (float)dVar32;
        (&DAT_010a2254)[iVar14 * 4] = (float)dVar25;
        (&DAT_010a2258)[iVar14 * 4] = (float)dVar23;
        (&DAT_010a225c)[iVar14 * 4] = uVar3;
        break;
      }
      uVar17 = (ulonglong)(iVar14 + 1);
    } while (iVar14 + 1 < 3);
  }
  iVar14 = 0;
  dVar23 = 1.0;
  dVar38 = 0.5;
  do {
    if ((&DAT_010a22b0)[iVar14] != '\0') {
      iVar20 = iVar14 * 4;
      iVar15 = fastfunc::FastDecTimerS32(&DAT_010a2280 + iVar20);
      fVar4 = DAT_010a1300;
      fVar44 = DAT_007bd398;
      fVar2 = DAT_007bd344;
      fVar10 = mobyutil::g_FrameTime;
      dVar25 = (double)DAT_007bd3a8;
      dVar32 = (double)DAT_007bd3ac;
      if (iVar15 == 0) {
        if (*(int *)(&DAT_010a2280 + iVar20) < DAT_007bd3a0) {
          *(float *)(&DAT_010a228c + iVar20) = *(float *)(&DAT_010a228c + iVar20) - DAT_007bd3b8;
        }
        fVar5 = fVar10 * fVar44 + *(float *)(&DAT_010a2298 + iVar20);
        dVar35 = (double)(fVar5 / fVar2);
        *(float *)(&DAT_010a2298 + iVar20) = fVar5;
        if (dVar23 - dVar35 < 0.0) {
          dVar35 = dVar23;
        }
        *(float *)(&DAT_010a22a4 + iVar20) =
             (float)((double)(float)(dVar25 - dVar32) * dVar35 + dVar32);
        if (fVar5 < fVar2) {
          lVar21 = fastfunc::FastDoubleToInt((double)(fVar5 / fVar4));
          dVar25 = (double)fastfunc::FastIntToDouble();
          fVar4 = *(float *)(&DAT_010a2298 + iVar20);
          dVar32 = (double)DAT_010a1300;
          iVar15 = (int)(lVar21 << 4);
          fVar10 = *(float *)((int)&DAT_010a10c0 + iVar15);
          (&DAT_010a2220)[iVar14 * 4] = fVar10;
          fVar2 = *(float *)((int)&DAT_010a10c4 + iVar15);
          (&DAT_010a2224)[iVar14 * 4] = fVar2;
          fVar44 = *(float *)((int)&DAT_010a10c8 + iVar15);
          (&DAT_010a2228)[iVar14 * 4] = fVar44;
          uVar3 = *(undefined4 *)((int)&DAT_010a10cc + iVar15);
          (&DAT_010a222c)[iVar14 * 4] = uVar3;
          if ((int)lVar21 == 0xb) {
            fVar7 = fVar44;
            fVar1 = *(float *)((int)&DAT_010a10b8 + iVar15);
            fVar6 = fVar2;
            fVar11 = *(float *)(iVar15 + 0x10a10b4);
            fVar5 = fVar10;
            fVar12 = *(float *)(iVar15 + 0x10a10b0);
            uVar8 = uVar3;
          }
          else {
            fVar5 = *(float *)((int)&DAT_010a10d0 + iVar15);
            fVar6 = *(float *)((int)&DAT_010a10d4 + iVar15);
            fVar7 = *(float *)((int)&DAT_010a10d8 + iVar15);
            uVar8 = *(undefined4 *)((int)&DAT_010a10dc + iVar15);
            fVar1 = fVar44;
            fVar11 = fVar2;
            fVar12 = fVar10;
          }
          fVar6 = fVar6 - fVar11;
          fVar7 = fVar7 - fVar1;
          fVar5 = fVar5 - fVar12;
          dVar36 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
          dVar35 = (double)(float)SQRT(dVar36);
          if (dVar35 != dVar22) {
            dVar37 = 1.0 / SQRT(dVar36);
            (&DAT_010a222c)[iVar14 * 4] = uVar3;
            dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            dVar36 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar37) * dVar37 -
                                                     dVar23) * (double)(float)(dVar37 * dVar38) +
                                    dVar37);
            fVar1 = (float)(dVar36 / dVar35);
            fVar4 = (float)(dVar36 * -(double)(float)(dVar25 * dVar32 - (double)fVar4));
            (&DAT_010a2220)[iVar14 * 4] = fVar4 * fVar5 + fVar10;
            (&DAT_010a2224)[iVar14 * 4] = fVar4 * fVar6 + fVar2;
            (&DAT_010a2228)[iVar14 * 4] = fVar4 * fVar7 + fVar44;
            dVar32 = (double)(float)(&DAT_010a2250)[iVar14 * 4];
            dVar25 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar25 = (double)(fVar6 * fVar1);
            }
            dVar36 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar36 = (double)(fVar5 * fVar1);
            }
            dVar37 = dVar22;
            if (dVar22 - dVar35 < 0.0) {
              dVar37 = (double)(fVar7 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar25 = (double)(fVar6 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar36 = (double)(fVar5 * fVar1);
            }
            if (dVar35 - dVar22 < 0.0) {
              dVar37 = (double)(fVar7 * fVar1);
            }
            fVar10 = (float)((double)(float)(dVar25 - (double)(float)(&DAT_010a2254)[iVar14 * 4]) *
                             dVar24 + (double)(float)(&DAT_010a2254)[iVar14 * 4]);
            fVar2 = (float)((double)(float)(dVar36 - dVar32) * dVar24 + dVar32);
            fVar44 = (float)((double)(float)(dVar37 - (double)(float)(&DAT_010a2258)[iVar14 * 4]) *
                             dVar24 + (double)(float)(&DAT_010a2258)[iVar14 * 4]);
            dVar36 = (double)(fVar44 * fVar44 + fVar2 * fVar2 + fVar10 * fVar10);
            dVar25 = dVar22;
            dVar32 = dVar22;
            dVar35 = dVar22;
            if ((double)(float)SQRT(dVar36) != dVar22) {
              dVar25 = 1.0 / SQRT(dVar36);
              dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 -
                                                       dVar23) * (double)(float)(dVar25 * dVar38) +
                                      dVar25);
              dVar25 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 -
                                                       dVar23) * (double)(float)(dVar25 * dVar38) +
                                      dVar25);
              fVar4 = (float)(-(double)(float)((double)(float)(dVar36 * dVar25) * dVar25 - dVar23) *
                              (double)(float)(dVar25 * dVar38) + dVar25);
              dVar35 = (double)(fVar2 * fVar4);
              dVar32 = (double)(fVar10 * fVar4);
              dVar25 = (double)(fVar44 * fVar4);
            }
            (&DAT_010a2250)[iVar14 * 4] = (float)dVar35;
            (&DAT_010a2254)[iVar14 * 4] = (float)dVar32;
            (&DAT_010a2258)[iVar14 * 4] = (float)dVar25;
            (&DAT_010a225c)[iVar14 * 4] = uVar8;
          }
        }
        else {
          fVar10 = fVar10 * fVar44;
          (&DAT_010a2220)[iVar14 * 4] =
               (float)(&DAT_010a2250)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2220)[iVar14 * 4];
          (&DAT_010a2224)[iVar14 * 4] =
               (float)(&DAT_010a2254)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2224)[iVar14 * 4];
          (&DAT_010a2228)[iVar14 * 4] =
               (float)(&DAT_010a2258)[iVar14 * 4] * fVar10 + (float)(&DAT_010a2228)[iVar14 * 4];
        }
      }
      else {
        (&DAT_010a22b0)[iVar14] = 0;
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3);
  return;
}



//==== 002c7328  ns=mobyupdate_unsorted  size=0xc78
// sig: undefined UpdateMoby_185(MobyInstance * moby)
// callers(0): 
// callees(23): 000855b8 hero::Hero_EndFiringAnim; 00099ea8 hero::Hero_PlayFiringAnim; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000c8964 hud::Hud_UnregisterById; 000da308 lights::CreatePointLight3; 000da9e8 lights::DeletePointLight; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 002c5358 mobyupdate_helpers::M185_002c5358; 002c5f88 mobyupdate_helpers::M185_002c5f88; 00320bf8 mobyupd::update270::SpawnMoby_270_Chicken; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 00a0fdc4: 'None'

/* Moby 185 */

void mobyupdate_unsorted::UpdateMoby_185(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  bool bVar14;
  short sVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  MobyInstance *moby_00;
  float *pfVar24;
  float fVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar30 = ZEXT48(&stack0x00000000);
  lVar23 = uVar30 - 0x180;
  puVar12 = (ulonglong *)lVar23;
  *puVar12 = uVar30;
  puVar12[0x32] = in_LR;
  puVar12[0x2f] = in_f31;
  puVar12[0x2a] = unaff_r27;
  puVar12[0x2e] = unaff_r31;
  puVar12[0x2d] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar32 = ZEXT48(pfVar9);
  uVar1 = moby->state;
  puVar12[0x2c] = unaff_r29;
  iVar20 = DAT_0096ad94;
  puVar12[0x2b] = unaff_r28;
  puVar12[0x29] = unaff_r26;
  if (uVar1 == '\0') {
    moby->state = '\x01';
    DAT_010a10a4 = 0xffffffff;
    DAT_010a10ac = -1;
    DAT_010a10a8 = 0;
  }
  bVar14 = true;
  if ((moby->animationId == '\0') && (dVar34 = (double)mobyfunc::BlendAnimFrame(moby), dVar34 < 6.0)
     ) {
    bVar14 = false;
  }
  fastfunc::FastDecTimerS16(uVar32 + 0x1c);
  if (((((hero::g_heroStateType == 0) || (hero::g_heroStateType == 1)) ||
       (hero::g_heroStateType == 0xc)) ||
      ((hero::g_heroStateType == 4 || (hero::g_heroStateType == 5)))) &&
     (((g_downButtons & DAT_0096ad80) != 0 && (bVar14 && iVar20 != 3)))) {
    if (DAT_0096bd88 == '\0') {
      hero::Hero_PlayFiringAnim();
    }
    if (*(short *)((int)pfVar9 + 0x1e) == 0) {
      *(undefined2 *)((int)pfVar9 + 0x1e) = 1;
      uVar10 = CHAR_ARRAY_00a0fdc4._10_2_;
      if (CHAR_ARRAY_00a0fdc4._8_2_ != -1) {
        CHAR_ARRAY_00a0fdc4._8_2_ = CHAR_ARRAY_00a0fdc4._8_2_ + 1;
      }
      puVar12[0x27] = (longlong)update::g_GameFrameCount;
      puVar12[0x27] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar12[0x27] + 0.5));
      iVar26 = *(int *)((int)puVar12 + 0x13c);
      if ((int)(uint)(ushort)uVar10 < iVar26 / 600) {
        sVar15 = (short)(iVar26 >> 0x1f);
        CHAR_ARRAY_00a0fdc4._10_2_ =
             ((short)(iVar26 / 600) + sVar15) -
             ((short)((short)(iVar26 / 0x2580000) + sVar15) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4._12_4_ = CHAR_ARRAY_00a0fdc4._12_4_ | 1 << (Level & 0x3f) | 0x80000000;
    }
    if (*(short *)(pfVar9 + 7) == 0) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(8,0x2c72ec);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar10 = storeVectorElementHalfWordIndexed(auVar41,0x1c,uVar32);
      *(undefined2 *)(pfVar9 + 7) = uVar10;
    }
    mobyfunc::GetBonePosition(moby,0,uVar32);
    if (g_heroState == FIRST_PERSON_VIEW) {
      hero::TransitionMovement(0x1e,1);
    }
    dVar34 = 0.0;
    if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE))
    {
      fastfunc::FastApplyTransform((Vec4 *)(uVar30 - 0x110),(Vec4 *)&GameCamera);
      fastfunc::FastNormalizeRMtx4(uVar30 - 0xe0,uVar30 - 0x110);
      dVar40 = (double)*(float *)(puVar12 + 0x18);
      dVar39 = (double)*(float *)((int)puVar12 + 0xc4);
      dVar38 = (double)*(float *)(puVar12 + 0x19);
    }
    else if (DAT_0096bfa8 == 1) {
      dVar40 = -(double)(moby->transform).v1.x;
      dVar39 = -(double)(moby->transform).v1.y;
      dVar38 = -(double)(moby->transform).v1.z;
    }
    else {
      dVar40 = (double)DAT_0096a320;
      dVar39 = (double)DAT_0096a324;
      dVar38 = (double)DAT_0096a328;
    }
    *(float *)((int)puVar12 + 0xec) = (float)dVar40;
    *(float *)(puVar12 + 0x1e) = (float)dVar39;
    *(float *)((int)puVar12 + 0xf4) = (float)(ABS(dVar40) - ABS(dVar39));
    uVar31 = (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1d) & 4;
    dVar37 = ABS((double)*(float *)((int)puVar12 + 0xec));
    if ((double)*(float *)((int)puVar12 + 0xf4) - dVar34 < 0.0) {
      dVar37 = ABS(dVar39);
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
    fVar25 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
    dVar36 = ABS((double)*(float *)(puVar12 + 0x1e));
    if ((double)*(float *)((int)puVar12 + 0xf4) - dVar34 < 0.0) {
      dVar36 = ABS(dVar40);
    }
    dVar35 = dVar34;
    if (dVar34 < dVar37) {
      lVar22 = uVar30 - 0x170;
      lVar28 = uVar30 - 0x68;
      lVar29 = uVar30 - 0x58;
      lVar33 = 2;
      fVar3 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x124) = fVar3;
      *(float *)((int)puVar12 + 0x11c) = fVar3;
      *(float *)(puVar12 + 0x24) = fVar3;
      *(float *)(puVar12 + 0x23) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar4;
      *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar3;
      *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar22 + 0x118) = *(float *)((int)lVar22 + 0x108) * fVar3 * fVar3;
        iVar26 = (int)lVar28;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar30 - 0x68;
      pfVar24 = (float *)&DAT_007358e0;
      lVar22 = lVar23;
      lVar28 = lVar29;
      do {
        fVar3 = *pfVar24;
        fVar4 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar22 + 0x118) = *(float *)((int)lVar22 + 0x118) * fVar3;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar28 = 2;
      lVar22 = lVar23;
      dVar37 = dVar34;
      do {
        iVar26 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar13 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0x118)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      dVar35 = (double)((float)(dVar37 + 0.7853981852531433) * fVar8 + fVar25);
    }
    pfVar9[0x12] = (float)dVar35;
    *(float *)((int)puVar12 + 0xe4) = (float)dVar38;
    fVar25 = SQRT((float)(dVar40 * dVar40 + (double)(float)(dVar39 * dVar39)));
    dVar40 = ABS((double)fVar25);
    *(float *)(puVar12 + 0x1c) = fVar25;
    *(float *)(puVar12 + 0x1d) = (float)(dVar40 - ABS(dVar38));
    uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1d) & 4;
    uVar31 = uVar27 << 2;
    dVar39 = ABS((double)*(float *)(puVar12 + 0x1c));
    if ((double)*(float *)(puVar12 + 0x1d) - dVar34 < 0.0) {
      dVar39 = ABS(dVar38);
    }
    fVar25 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar31);
    dVar38 = ABS((double)*(float *)((int)puVar12 + 0xe4));
    if ((double)*(float *)(puVar12 + 0x1d) - dVar34 < 0.0) {
      dVar38 = dVar40;
    }
    fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
    dVar40 = dVar34;
    if (dVar34 < dVar39) {
      lVar22 = uVar30 - 0x170;
      lVar29 = uVar30 - 0x78;
      lVar28 = uVar30 - 0x88;
      lVar33 = 2;
      fVar3 = (float)(dVar38 - dVar39) / (float)(dVar38 + dVar39);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x104) = fVar3;
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar3;
      *(float *)(puVar12 + 0x1f) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar4;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar3;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar22 + 0xf8) = *(float *)((int)lVar22 + 0xe8) * fVar3 * fVar3;
        iVar26 = (int)lVar28;
        lVar28 = lVar28 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar29 = uVar30 - 0x88;
      uVar31 = ZEXT48(&DAT_007358e0);
      lVar22 = lVar23;
      lVar28 = lVar29;
      do {
        pfVar24 = (float *)uVar31;
        fVar3 = pfVar24[1];
        uVar31 = uVar31 + 8;
        *(float *)((int)lVar22 + 0xf8) = *(float *)((int)lVar22 + 0xf8) * *pfVar24;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar3;
        lVar28 = lVar28 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar22 = 2;
      dVar38 = dVar34;
      do {
        iVar26 = (int)lVar23;
        iVar13 = (int)lVar29;
        lVar23 = lVar23 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar26 + 0xf8)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar40 = (double)((float)(dVar38 + 0.7853981852531433) * fVar25 + fVar8);
    }
    *(float *)(puVar12 + 8) = *pfVar9;
    *(float *)((int)puVar12 + 0x44) = pfVar9[1];
    *(float *)(puVar12 + 9) = pfVar9[2];
    pfVar9[0x13] = (float)dVar40;
    *(float *)((int)puVar12 + 0x4c) = pfVar9[3];
    uVar30 = puVar12[8];
    moby_00 = (MobyInstance *)
              mobyupdate_helpers::M185_002c5358
                        (moby,uVar31,uVar30,puVar12[9],uVar32 + 0x48,uVar32 + 0x4c);
    fastfunc::FastDecTimerS32(uVar32 + 0x44);
    if ((pfVar9[4] != 0.0) &&
       ((cVar2 = *(char *)((int)pfVar9[4] + 0x20), cVar2 == -2 || (cVar2 == -3)))) {
      pfVar9[4] = 0.0;
      pfVar9[0x11] = 0.0;
    }
    if ((moby_00 != (MobyInstance *)0x0) || (pfVar9[0x11] != 0.0)) {
      if ((moby_00 != (MobyInstance *)0x0) &&
         ((pfVar24 = (float *)mobyutil::MB_GetPvarsIfMobyHasThem(moby_00),
          moby_00 != (MobyInstance *)pfVar9[4] && (pfVar9[0x11] == 0.0)))) {
        pfVar9[4] = (float)moby_00;
        dVar38 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(pfVar24 + 1));
        pfVar9[5] = (float)dVar38;
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        pfVar9[6] = *pfVar24;
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(0x14,0x2c72ec);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x44,
                            uVar32);
        *(undefined4 *)((uint)(pfVar9 + 0x11) & 0xfffffffc) = uVar11;
        if (dVar38 <= 1.0) {
          pfVar9[6] = 0.0;
        }
        fVar25 = (float)hud::RegisterHUDCallback
                                  (4,0x7533,&PTR_Moby185Hud_Init_00705738,
                                   &PTR_Moby185Hud_Update_00705740,&PTR_Draw_Moby185Meter_00705748,
                                   &DAT_010a10b8,10000);
        pfVar9[0xd] = fVar25;
      }
      dVar38 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.morphORay);
      uVar30 = ZEXT48(&DAT_00720000);
      dVar38 = -(double)(DAT_007bd348 * mobyutil::g_FrameTime *
                         (float)(dVar38 * 0.33000001311302185 + 1.0) - pfVar9[6]);
      pfVar9[6] = (float)dVar38;
      if (dVar38 < dVar34) {
        pfVar9[6] = 0.0;
        dVar38 = dVar34;
      }
      iVar26 = fastfunc::FastDoubleToInt((double)((float)(dVar38 * 10000.0) / pfVar9[5]));
      DAT_010a10b8 = 10000 - iVar26;
    }
    fVar25 = pfVar9[4];
    if ((fVar25 != 0.0) && ((int)pfVar9[6] < 1)) {
      if ((Level == Rilgar) && (*(short *)((int)fVar25 + 0xa6) == 0x271)) {
        mobyutil::MB_UnlockSkillPoint(8);
        fVar25 = pfVar9[4];
      }
      mobyupd::update270::SpawnMoby_270_Chicken(fVar25);
      pfVar9[4] = 0.0;
    }
    mobyupdate_helpers::M185_002c5f88(moby);
    uVar32 = (ulonglong)DAT_010a10a4;
    if (DAT_010a10a4 == 0xffffffff) {
      uVar32 = lights::CreatePointLight3
                         (0x401e000000000000,dVar34,(Vec4 *)&moby->pos,ZEXT48(&DAT_002c72ec),uVar30,
                          0x207f7f);
      DAT_010a10a4 = (uint)uVar32;
    }
    if (-1 < (int)uVar32) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x28,0x2c72ec);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      iVar26 = (int)((uVar32 & 0xffffffff) << 5);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_010a10a8 = storeVectorElementWordIndexed
                               (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x10a8
                                ,0x10a0000);
      fVar8 = (moby->transform).v1.y;
      fVar3 = (moby->transform).v1.x;
      fVar4 = (moby->transform).v1.z;
      fVar5 = *pfVar9;
      fVar6 = pfVar9[1];
      fVar7 = pfVar9[2];
      *(undefined4 *)((int)&PointLights[0].pos.w + iVar26) = 0x40f00000;
      dVar39 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar8 * fVar8);
      fVar25 = (float)(-0.5 / dVar39);
      dVar38 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar38 = (double)(fVar4 * fVar25);
      }
      dVar40 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar40 = (double)(fVar8 * fVar25);
      }
      dVar37 = dVar34;
      if (dVar34 - dVar39 < 0.0) {
        dVar37 = (double)(fVar3 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar38 = (double)(fVar4 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar40 = (double)(fVar8 * fVar25);
      }
      if (dVar39 - dVar34 < 0.0) {
        dVar37 = (double)(fVar3 * fVar25);
      }
      *(float *)((int)&PointLights[0].pos.z + iVar26) = (float)((double)fVar7 + dVar38);
      *(float *)((int)&PointLights[0].pos.y + iVar26) = (float)((double)fVar6 + dVar40);
      *(float *)((int)&PointLights[0].pos.x + iVar26) = (float)((double)fVar5 + dVar37);
    }
    iVar26 = sound::IsMobyPlayingSound(moby,DAT_010a10ac);
    if (iVar26 == 0) {
      DAT_010a10ac = sound::PlayMobySound(0,4,moby);
    }
    goto LAB_002c7f44;
  }
  pfVar9[4] = 0.0;
  *(undefined2 *)((int)pfVar9 + 0x1e) = 0;
  pfVar9[0x11] = 0.0;
  if (pfVar9[0xd] != -NAN) {
    hud::Hud_UnregisterById((int)pfVar9[0xd]);
    pfVar9[0xd] = -NAN;
  }
  iVar26 = DAT_010a10a8;
  uVar21 = DAT_010a10a4;
  DAT_010a10a0 = 1;
  if ((int)DAT_010a10a4 < 0) {
LAB_002c7ea4:
    if ((-1 < (int)DAT_010a10a4) && (DAT_010a10a8 == 0)) {
      lights::DeletePointLight(DAT_010a10a4);
      DAT_010a10a4 = 0xffffffff;
    }
  }
  else {
    fVar25 = (moby->transform).v1.y;
    fVar8 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar17 = 0.0;
    fVar4 = *pfVar9;
    fVar5 = pfVar9[1];
    fVar6 = pfVar9[2];
    fVar7 = SQRT(fVar3 * fVar3 + fVar8 * fVar8 + fVar25 * fVar25);
    PointLights[DAT_010a10a4].pos.w = 7.5;
    fVar16 = -0.5 / fVar7;
    fVar18 = fVar17;
    if (0.0 - fVar7 < 0.0) {
      fVar18 = fVar3 * fVar16;
    }
    fVar19 = fVar17;
    if (0.0 - fVar7 < 0.0) {
      fVar19 = fVar25 * fVar16;
    }
    if (0.0 - fVar7 < 0.0) {
      fVar17 = fVar8 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar18 = fVar3 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar19 = fVar25 * fVar16;
    }
    if (fVar7 - 0.0 < 0.0) {
      fVar17 = fVar8 * fVar16;
    }
    PointLights[uVar21].pos.z = fVar6 + fVar18;
    PointLights[uVar21].pos.y = fVar5 + fVar19;
    PointLights[uVar21].pos.x = fVar4 + fVar17;
    dVar34 = (double)fastfunc::FastIntToDouble(iVar26);
    uVar21 = DAT_010a10a4;
    fVar25 = (float)(dVar34 * 0.05000000074505806);
    PointLights[DAT_010a10a4].color.y = fVar25;
    PointLights[uVar21].color.x = fVar25;
    PointLights[uVar21].color.z = fVar25 * 0.25;
    iVar26 = fastfunc::FastDecTimerS32(&DAT_010a10a8);
    if (iVar26 == 0) goto LAB_002c7ea4;
    lights::DeletePointLight(DAT_010a10a4);
    DAT_010a10a4 = 0xffffffff;
  }
  if (-1 < DAT_010a10ac) {
    if (((DAT_010a10ac != -1) && (sound::g_SoundChannels[DAT_010a10ac].pMoby == moby)) &&
       (sound::g_SoundChannels[DAT_010a10ac].state != '\0')) {
      sound::sound_Kill(DAT_010a10ac);
    }
    DAT_010a10ac = -1;
  }
  hero::Hero_EndFiringAnim();
LAB_002c7f44:
  if ((iVar20 == 3) && (-1 < (int)DAT_010a10a4)) {
    lights::DeletePointLight(DAT_010a10a4);
    DAT_010a10a4 = 0xffffffff;
  }
  return;
}



//==== 002c7fb8  ns=mobyupdate_helpers  size=0x4a4
// sig: undefined M1850_002c7fb8(void)
// callers(1): 002c8ff8 mobyupdate_helpers::M1850_002c8ff8
// callees(5): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1850_002c7fb8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
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
  float local_120 [36];
  
  draw::GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar26 = 0.0;
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd0);
  fVar3 = *(float *)(param_1 + 0xd8);
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar29 = (double)DAT_010a10cc;
  dVar28 = (double)(float)GameCamera.field8_0x14c;
  fVar5 = DAT_007bd448 / fVar4;
  dVar21 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar21 = (double)(fVar1 * fVar5);
  }
  dVar22 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar22 = (double)(fVar2 * fVar5);
  }
  dVar23 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar23 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar21 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar22 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar23 = (double)(fVar3 * fVar5);
  }
  dVar19 = (double)(float)((double)DAT_010a10c4 + dVar21);
  dVar18 = (double)(float)((double)DAT_010a10c0 + dVar22);
  dVar20 = (double)(float)((double)DAT_010a10c8 + dVar23);
  fVar1 = (float)((double)GameCamera.posY - dVar19);
  fVar2 = (float)((double)GameCamera.posX - dVar18);
  fVar3 = (float)((double)GameCamera.posZ - dVar20);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar21 = dVar26;
  dVar22 = dVar26;
  dVar23 = dVar26;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar21 = (double)(fVar5 * fVar2);
    dVar22 = (double)(fVar5 * fVar1);
    dVar23 = (double)(fVar5 * fVar3);
  }
  fVar1 = (float)((double)DAT_00969f78 * dVar21 -
                 (double)(float)((double)hero::g_heroGravityDir * dVar23));
  fVar2 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar22));
  fVar3 = (float)((double)hero::g_heroGravityDir * dVar22 -
                 (double)(float)((double)DAT_00969f74 * dVar21));
  pfVar9 = local_120;
  pfVar10 = (float *)&DAT_007bd400;
  lVar11 = 4;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar15 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar15 = (double)(fVar2 * fVar5);
  }
  dVar17 = dVar26;
  if (0.0 - fVar4 < 0.0) {
    dVar17 = (double)(fVar1 * fVar5);
  }
  if (0.0 - fVar4 < 0.0) {
    dVar26 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar15 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar17 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar26 = (double)(fVar3 * fVar5);
  }
  dVar27 = (double)(float)(dVar21 * dVar17 - (double)(float)(dVar22 * dVar15));
  dVar24 = (double)(float)(dVar22 * dVar26 - (double)(float)(dVar23 * dVar17));
  dVar25 = (double)(float)(dVar23 * dVar15 - (double)(float)(dVar21 * dVar26));
  pfVar7 = pfVar10;
  pfVar8 = pfVar9;
  do {
    dVar13 = (double)(pfVar7[1] * DAT_007bd440);
    dVar14 = (double)(*pfVar7 * DAT_007bd440);
    dVar12 = (double)(pfVar7[2] * DAT_007bd440);
    dVar16 = (double)pfVar7[3];
    pfVar7 = pfVar7 + 4;
    pfVar8[3] = (float)(dVar16 * dVar29 + (double)(float)(dVar14 * dVar28));
    *pfVar8 = (float)(dVar16 * dVar18 +
                     (double)(float)(dVar12 * dVar24 +
                                    (double)(float)(dVar14 * dVar21 +
                                                   (double)(float)(dVar13 * dVar15))));
    pfVar8[1] = (float)(dVar16 * dVar19 +
                       (double)(float)(dVar12 * dVar25 +
                                      (double)(float)(dVar14 * dVar22 +
                                                     (double)(float)(dVar13 * dVar17))));
    pfVar8[2] = (float)(dVar16 * dVar20 +
                       (double)(float)(dVar12 * dVar27 +
                                      (double)(float)(dVar14 * dVar23 +
                                                     (double)(float)(dVar13 * dVar26))));
    pfVar8 = pfVar8 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_120,0,0,EffectTexHeaders,9);
  uVar6 = EffectTexHeaders;
  lVar11 = 4;
  do {
    dVar13 = (double)(pfVar10[1] * DAT_007bd444);
    dVar14 = (double)(*pfVar10 * DAT_007bd444);
    dVar12 = (double)(pfVar10[2] * DAT_007bd444);
    dVar16 = (double)pfVar10[3];
    pfVar10 = pfVar10 + 4;
    pfVar9[3] = (float)(dVar16 * dVar29 + (double)(float)(dVar14 * dVar28));
    *pfVar9 = (float)(dVar16 * dVar18 +
                     (double)(float)(dVar12 * dVar24 +
                                    (double)(float)(dVar14 * dVar21 +
                                                   (double)(float)(dVar13 * dVar15))));
    pfVar9[1] = (float)(dVar16 * dVar19 +
                       (double)(float)(dVar12 * dVar25 +
                                      (double)(float)(dVar14 * dVar22 +
                                                     (double)(float)(dVar13 * dVar17))));
    pfVar9[2] = (float)(dVar16 * dVar20 +
                       (double)(float)(dVar12 * dVar27 +
                                      (double)(float)(dVar14 * dVar23 +
                                                     (double)(float)(dVar13 * dVar26))));
    pfVar9 = pfVar9 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  draw::FastDrawQuad(local_120,0,0,uVar6,9);
  return;
}



//==== 002c8468  ns=mobyupdate_helpers  size=0x390
// sig: undefined M1850_002c8468(void)
// callers(1): 002c8ff8 mobyupdate_helpers::M1850_002c8ff8
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00502758 fastfunc::FastDoubleToInt; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1850_002c8468(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
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
  float local_100 [38];
  
  draw::GetEffectTex(8);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  dVar25 = 0.0;
  dVar24 = 1.0;
  uVar14 = 0;
  do {
    iVar9 = (int)uVar14;
    if ((&DAT_010a22b0)[iVar9] != '\0') {
      iVar10 = (int)((uVar14 & 0xffffffff) << 2);
      fastfunc::FastDoubleToInt((double)*(float *)(&DAT_010a228c + iVar10));
      dVar16 = (double)(float)(&DAT_010a2250)[iVar9 * 4];
      dVar18 = (double)(float)(&DAT_010a2258)[iVar9 * 4];
      dVar17 = (double)(float)(&DAT_010a2254)[iVar9 * 4];
      fVar7 = -(float)((double)DAT_00969f78 * dVar16) -
              -(float)((double)hero::g_heroGravityDir * dVar18);
      fVar8 = -(float)((double)hero::g_heroGravityDir * dVar17) -
              -(float)((double)DAT_00969f74 * dVar16);
      fVar11 = -(float)((double)DAT_00969f74 * dVar18) - -(float)((double)DAT_00969f78 * dVar17);
      fVar2 = (float)(&DAT_010a2220)[iVar9 * 4];
      fVar3 = (float)(&DAT_010a2224)[iVar9 * 4];
      fVar4 = (float)(&DAT_010a2228)[iVar9 * 4];
      fVar5 = (float)(&DAT_010a222c)[iVar9 * 4];
      fVar6 = (float)(&DAT_010a225c)[iVar9 * 4];
      dVar19 = (double)(fVar8 * fVar8 + fVar11 * fVar11 + fVar7 * fVar7);
      dVar20 = dVar25;
      dVar21 = dVar25;
      dVar22 = dVar25;
      if ((double)(float)SQRT(dVar19) != dVar25) {
        dVar20 = 1.0 / SQRT(dVar19);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        dVar20 = (double)(float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24
                                                 ) * (double)(float)(dVar20 * 0.5) + dVar20);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar19 * dVar20) * dVar20 - dVar24) *
                        (double)(float)(dVar20 * 0.5) + dVar20);
        dVar22 = (double)(fVar11 * fVar1);
        dVar21 = (double)(fVar7 * fVar1);
        dVar20 = (double)(fVar8 * fVar1);
      }
      lVar15 = 4;
      pfVar12 = (float *)&DAT_007bd400;
      pfVar13 = local_100;
      do {
        fVar8 = *(float *)(&DAT_010a22a4 + iVar10);
        dVar23 = (double)(pfVar12[1] * fVar8);
        dVar19 = (double)(*pfVar12 * fVar8);
        fVar8 = pfVar12[2] * fVar8;
        fVar7 = pfVar12[3];
        pfVar12 = pfVar12 + 4;
        pfVar13[3] = fVar7 * fVar5 + (float)(dVar19 * (double)fVar6);
        *pfVar13 = fVar7 * fVar2 +
                   (float)(dVar17 * dVar20 - (double)(float)(dVar18 * dVar21)) * fVar8 +
                   (float)(dVar19 * dVar16 + (double)(float)(dVar23 * dVar22));
        pfVar13[1] = fVar7 * fVar3 +
                     (float)(dVar18 * dVar22 - (double)(float)(dVar16 * dVar20)) * fVar8 +
                     (float)(dVar19 * dVar17 + (double)(float)(dVar23 * dVar21));
        pfVar13[2] = fVar7 * fVar4 +
                     (float)(dVar16 * dVar21 - (double)(float)(dVar17 * dVar22)) * fVar8 +
                     (float)(dVar19 * dVar18 + (double)(float)(dVar23 * dVar20));
        pfVar13 = pfVar13 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      draw::FastDrawQuad(local_100,0,0,EffectTexHeaders,9);
    }
    uVar14 = (ulonglong)(iVar9 + 1);
  } while (iVar9 + 1 < 3);
  return;
}



//==== 002c8808  ns=mobyupdate_helpers  size=0x7d8
// sig: undefined M1850_002c8808(void)
// callers(1): 002c8ff8 mobyupdate_helpers::M1850_002c8ff8
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1850_002c8808(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  undefined1 local_1d0 [144];
  undefined1 local_140 [144];
  
  draw::GetEffectTex(DAT_007bd3ec);
  idol_draw::PackCmd(0,2,0,1,0x80);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  draw::GetEffectTex(DAT_007bd3f0);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      draw::FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  return;
}



//==== 002c8ff8  ns=mobyupdate_helpers  size=0x584
// sig: undefined M1850_002c8ff8(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 002c7fb8 mobyupdate_helpers::M1850_002c7fb8; 002c8468 mobyupdate_helpers::M1850_002c8468; 002c8808 mobyupdate_helpers::M1850_002c8808; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 007bd3cc: '?fff' (raw)

void mobyupdate_helpers::M1850_002c8ff8(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  undefined1 local_140 [152];
  
  DAT_010a22b8 = -(DAT_0071f408 * DAT_007bd3dc - DAT_010a22b8);
  dVar11 = -8.0;
  if (DAT_010a22b8 <= -8.0) {
    DAT_010a22b8 = DAT_010a22b8 + 8.0;
  }
  M1850_002c8808((double)DAT_007bd3c4,(double)DAT_007bd3c8,(double)DAT_007bd3cc,&DAT_010a1180,
                 DAT_007bd3bc,DAT_007bd3c0);
  M1850_002c8808((double)DAT_007bd3c4,(double)DAT_007bd3c8,(double)DAT_007bd3cc,&DAT_010a1240,
                 DAT_007bd3bc,DAT_007bd3c0);
  M1850_002c8468(param_1);
  M1850_002c7fb8(param_1);
  draw::GetEffectTex(DAT_007bd3e8);
  stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  dVar10 = -(double)(DAT_0071f408 * DAT_007bd374 - DAT_010a2210);
  if (dVar10 <= dVar11) {
    dVar10 = dVar10 + 8.0;
  }
  DAT_010a2210 = (float)dVar10;
  DAT_010a2214 = -(DAT_0071f408 * DAT_007bd378 - DAT_010a2214);
  if (DAT_010a2214 <= -7.0) {
    DAT_010a2214 = DAT_010a2214 + 7.0;
  }
  DAT_010a2218 = DAT_0071f408 * DAT_007bd378 + DAT_010a2218;
  if (5.0 <= DAT_010a2218) {
    DAT_010a2218 = DAT_010a2218 - 5.0;
  }
  iVar5 = 2;
  iVar7 = 0x280;
  do {
    dVar11 = 0.0;
    pfVar8 = (float *)(iVar7 + 0x10a1310);
    pfVar9 = (float *)(iVar7 + 0x10a11d0);
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      pfVar4 = (float *)((iVar6 % 0x14) * 0x10 + 0x10a1310 + iVar7);
      fVar1 = *pfVar4;
      fVar2 = pfVar4[1];
      fVar3 = pfVar4[2];
      if ((double)(((*pfVar8 - fVar1) * (pfVar9[1] - fVar2) -
                   (pfVar8[1] - fVar2) * (*pfVar9 - fVar1)) * (fVar3 - GameCamera.posZ) +
                  ((pfVar8[1] - fVar2) * (pfVar9[2] - fVar3) -
                  (pfVar8[2] - fVar3) * (pfVar9[1] - fVar2)) * (fVar1 - GameCamera.posX) +
                  ((pfVar8[2] - fVar3) * (*pfVar9 - fVar1) - (*pfVar8 - fVar1) * (pfVar9[2] - fVar3)
                  ) * (fVar2 - GameCamera.posY)) < dVar11) {
        draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
        draw::FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      }
      pfVar8 = pfVar8 + 4;
      pfVar9 = pfVar9 + 4;
    } while (iVar6 < 0x14);
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x140;
  } while (iVar5 < 0xc);
  return;
}



//==== 002c957c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1850_002c957c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1850_002c957c(void)

{
  DAT_007bd49c = 0x10000;
  return;
}



//==== 002c9590  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1850(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1850 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1850(MobyInstance *moby)

{
  return moby;
}



//==== 002c9594  ns=mobyupdate_unsorted  size=0xe8
// sig: undefined UpdateMoby_1855(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0015d12c sound::PlayMobySound

/* Moby 1855 */

void mobyupdate_unsorted::UpdateMoby_1855(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x742,1,0x742,1,0xb,2);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c967c  ns=mobyupdate_unsorted  size=0xd4
// sig: undefined UpdateMoby_1856(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1856 */

void mobyupdate_unsorted::UpdateMoby_1856(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnReplacementMoby(moby,0x741);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c9750  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1857(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1857 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1857(MobyInstance *moby)

{
  return moby;
}



//==== 002c9754  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1859(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1859 */

void mobyupdate_unsorted::UpdateMoby_1859(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x745,1,0x745,1,0xb,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x744);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002c9860  ns=mobyupdate_helpers  size=0x104
// sig: undefined M186_002c9860(void)
// callers(1): 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(2): 00059e20 collproc::CollSphere; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M186_002c9860(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 local_40 [16];
  
  dVar2 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar2 = (double)(float)(dVar2 * 0.5 + 1.0);
  dVar3 = 0.20000000298023224;
  iVar1 = collproc::CollSphere
                    ((double)(float)(dVar2 * 0.19990000128746033),local_40,&DAT_002c9850,param_2,
                     param_1);
  if (iVar1 != 0) {
    CollOutput.push.z = -(float)(dVar2 * dVar3 - (double)CollOutput.push.z);
  }
  return;
}



//==== 002c9964  ns=mobyupdate_helpers  size=0x34
// sig: undefined M1859_002c9964(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1859_002c9964(int param_1)

{
  DAT_0096bbb0 = *(undefined4 *)(param_1 + 0x40);
  DAT_0096bbb4 = *(undefined4 *)(param_1 + 0x44);
  DAT_0096bbe8 = *(undefined4 *)(param_1 + 0x4c);
  DAT_0096bbb8 = *(undefined4 *)(param_1 + 0x48);
  DAT_0096bbc4 = *(undefined4 *)(param_1 + 0x5c);
  return;
}



//==== 002c9998  ns=mobyupdate_helpers  size=0x34
// sig: undefined M1859_002c9998(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1859_002c9998(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x40) = DAT_0096bbb0;
  uVar2 = DAT_0096bbe8;
  *(undefined4 *)(param_1 + 0x44) = DAT_0096bbb4;
  uVar1 = DAT_0096bbb8;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = DAT_0096bbc4;
  return;
}



//==== 002c99cc  ns=mobyupdate_helpers  size=0x54
// sig: undefined M1859_002c99cc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1859_002c99cc(undefined4 *param_1)

{
  DAT_0096bc00 = param_1[0x14];
  DAT_0096bc04 = param_1[0x15];
  DAT_0096bc08 = param_1[0x16];
  DAT_0096bc1f = *(undefined1 *)(param_1 + 0x1a);
  DAT_0096bc20 = param_1[0x11];
  DAT_0096bbf0 = *param_1;
  DAT_0096bbf4 = param_1[1];
  DAT_0096bbf8 = param_1[2];
  DAT_0096bbfc = param_1[3];
  return;
}



//==== 002c9a20  ns=mobyupdate_helpers  size=0x34
// sig: undefined M1859_002c9a20(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1859_002c9a20(int param_1)

{
  *(undefined4 *)(param_1 + 0x50) = DAT_0096bc00;
  *(undefined4 *)(param_1 + 0x54) = DAT_0096bc04;
  *(undefined4 *)(param_1 + 0x58) = DAT_0096bc08;
  *(undefined1 *)(param_1 + 0x68) = DAT_0096bc1f;
  *(undefined4 *)(param_1 + 0x44) = DAT_0096bc20;
  return;
}



//==== 002c9a68  ns=mobyupdate_helpers  size=0x144
// sig: undefined M1859_002c9a68(void)
// callers(2): 002ca268 mobyupdate_helpers::M186_002ca268; 002cb1e0 mobyupdate_helpers::M186_002cb1e0
// callees(2): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot

double mobyupdate_helpers::M1859_002c9a68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  iVar1 = collproc::CollLine(local_20,local_30,6,param_2,0);
  if (iVar1 == 0) {
    dVar2 = 0.0;
  }
  else if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
           ((CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
          ((short)(CollOutput.pMoby)->pClass->mode_bits != 5)) {
    iVar1 = collproc::CollHotspot();
    dVar2 = (double)CollOutput.ip.z;
    if (iVar1 < 4) {
      if (iVar1 < 2) {
        if (iVar1 < 0) {
          return dVar2;
        }
      }
      else if (iVar1 < 3) {
        return dVar2;
      }
    }
    else if (iVar1 < 0xb) {
      if (iVar1 != 8) {
        return dVar2;
      }
    }
    else if (0xd < iVar1) {
      return dVar2;
    }
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)CollOutput.ip.z;
  }
  return dVar2;
}



//==== 002c9be0  ns=mobyupdate_helpers  size=0x640
// sig: undefined M186_002c9be0(void)
// callers(1): 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(2): 00057820 collproc::CollLine; 005026a0 fastfunc::FastSubRots
// strings: 002c9bb0: 'Nnk(B ' (raw)

MobyInstance *
mobyupdate_helpers::M186_002c9be0
          (int param_1,float *param_2,int param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  int iVar20;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar12;
  puVar8[0x2e] = in_LR;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1e] = unaff_r22;
  puVar8[0x22] = unaff_r26;
  puVar8[0x21] = unaff_r25;
  bVar11 = true;
  puVar8[0x27] = unaff_r31;
  puVar8[0x23] = unaff_r27;
  pMVar21 = (MobyInstance *)0x0;
  puVar8[0x20] = unaff_r24;
  puVar8[0x1c] = unaff_r20;
  dVar29 = 1000000000.0;
  puVar8[0x26] = unaff_r30;
  pMVar7 = DAT_00a49344;
  puVar8[0x25] = unaff_r29;
  puVar8[0x24] = unaff_r28;
  puVar8[0x1f] = unaff_r23;
  puVar8[0x1d] = unaff_r21;
  if (pMVar7 != (MobyInstance *)0x0) {
    iVar20 = 0;
    do {
      if ((pMVar7->pClass != (MobyClass *)0x0) && ((short)pMVar7->pClass->mode_bits == 5)) {
        fVar2 = param_2[1];
        fVar6 = fVar2 - (pMVar7->pos).y;
        fVar3 = (pMVar7->pos).x;
        fVar4 = *param_2 - fVar3;
        fVar5 = param_2[2] - (pMVar7->pos).z;
        dVar28 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
        if (dVar28 <= 40.0) {
          if (30.0 < dVar28) {
            bVar11 = false;
          }
          fVar6 = fVar3 - *param_2;
          *(float *)(puVar8 + 0xe) = fVar3;
          fVar3 = (pMVar7->pos).y;
          fVar2 = fVar3 - fVar2;
          *(float *)((int)puVar8 + 0x74) = fVar3;
          fVar3 = (pMVar7->pos).z;
          *(float *)(puVar8 + 0xf) = fVar3;
          fVar4 = ABS(fVar6);
          *(f32 *)((int)puVar8 + 0x7c) = (pMVar7->pos).w;
          *(float *)((int)puVar8 + 0x8c) = fVar6;
          fVar6 = ABS(fVar2);
          *(float *)(puVar8 + 0x12) = fVar2;
          fVar2 = *(float *)(param_3 + 8);
          *(float *)((int)puVar8 + 0x94) = fVar4 - fVar6;
          *(float *)(puVar8 + 0xf) = fVar3 + 0.4;
          dVar26 = 0.0;
          dVar27 = 0.7853981852531433;
          uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)((int)puVar8 + 0x8c));
          if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
            fVar3 = fVar6;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          fVar5 = ABS(*(float *)(puVar8 + 0x12));
          if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar24 = dVar26;
          if (0.0 < fVar3) {
            lVar13 = uVar12 - 0x150;
            lVar19 = uVar12 - 0x98;
            lVar17 = uVar12 - 0xa8;
            lVar22 = 2;
            fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
            fVar5 = fVar3 * fVar3;
            *(float *)((int)puVar8 + 0xc4) = fVar3;
            *(float *)((int)puVar8 + 0xbc) = fVar3;
            *(float *)(puVar8 + 0x18) = fVar3;
            *(float *)(puVar8 + 0x17) = fVar3;
            fVar3 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar5;
            *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
            *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar5;
            do {
              *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar3 * fVar3;
              iVar9 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar12 - 0xa8;
            pfVar18 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar17 = lVar19;
            do {
              fVar3 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar3;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xb8)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar4);
          }
          dVar23 = (double)fastfunc::FastSubRots(fVar2,(float)dVar24);
          fVar2 = param_2[2];
          *(float *)(puVar8 + 0x10) = (float)dVar28;
          dVar25 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar2));
          *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar2;
          *(float *)(puVar8 + 0x11) = (float)(ABS(dVar28) - dVar25);
          fVar2 = *(float *)(param_3 + 4);
          uVar16 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
          dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
          if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
            dVar24 = dVar25;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar25 = ABS((double)*(float *)((int)puVar8 + 0x84));
          if ((double)*(float *)(puVar8 + 0x11) - dVar26 < 0.0) {
            dVar25 = ABS(dVar28);
          }
          fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          dVar28 = dVar26;
          if (dVar26 < dVar24) {
            lVar13 = uVar12 - 0x150;
            lVar19 = uVar12 - 0xb8;
            lVar17 = uVar12 - 200;
            lVar22 = 2;
            fVar4 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
            fVar5 = fVar4 * fVar4;
            *(float *)((int)puVar8 + 0xa4) = fVar4;
            *(float *)((int)puVar8 + 0x9c) = fVar4;
            *(float *)(puVar8 + 0x14) = fVar4;
            *(float *)(puVar8 + 0x13) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar5;
            *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
            *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
              iVar9 = (int)lVar17;
              lVar17 = lVar17 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
              lVar19 = lVar19 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar22 = 4;
            lVar19 = uVar12 - 200;
            pfVar18 = (float *)&DAT_007358e0;
            lVar13 = lVar1;
            lVar17 = lVar19;
            do {
              fVar4 = *pfVar18;
              fVar5 = pfVar18[1];
              pfVar18 = pfVar18 + 2;
              *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar17 = 2;
            lVar13 = lVar1;
            do {
              iVar9 = (int)lVar13;
              iVar10 = (int)lVar19;
              lVar13 = lVar13 + 0x10;
              lVar19 = lVar19 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar9 + 0x98)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar28 = (double)((float)(dVar28 + dVar27) * fVar3 + fVar6);
          }
          dVar28 = (double)fastfunc::FastSubRots(fVar2,(float)dVar28);
          if (bVar11) {
            uVar15 = 1;
            if (ABS((pMVar7->pos).z - *(float *)(param_1 + 0x18)) <= 8.0) {
              uVar14 = collproc::CollLine(param_2,uVar12 - 0xf0,6,pMVar7,0);
              uVar15 = (uint)LZCOUNT(uVar14) >> 5 ^ 1;
            }
          }
          else {
            uVar15 = (uint)LZCOUNT((uint)(byte)pMVar7->enabled) >> 5;
          }
          if ((param_5 != '\0') || (uVar15 == 0)) {
            fVar2 = param_2[1] - *(float *)((int)puVar8 + 0x74);
            dVar27 = (double)SQRT((param_2[2] - *(float *)(puVar8 + 0xf)) *
                                  (param_2[2] - *(float *)(puVar8 + 0xf)) +
                                  (*param_2 - *(float *)(puVar8 + 0xe)) *
                                  (*param_2 - *(float *)(puVar8 + 0xe)) + fVar2 * fVar2);
            if (3.25 - ((pMVar7->pos).z - *(float *)(param_1 + 0x18)) < 0.0) {
              dVar27 = (double)(float)(dVar27 + 15.0);
            }
            if (uVar15 != 0) {
              dVar26 = 5.0;
            }
            dVar28 = (double)(float)(dVar23 * dVar23 +
                                    (double)(float)(dVar28 * dVar28 +
                                                   (double)(float)(dVar26 + dVar27)));
            if (dVar28 < dVar29) {
              dVar29 = dVar28;
              pMVar21 = pMVar7;
            }
          }
        }
      }
      pMVar7 = *(MobyInstance **)((int)&DAT_00a49348 + iVar20);
      iVar20 = iVar20 + 4;
    } while (pMVar7 != (MobyInstance *)0x0);
    if (pMVar21 != (MobyInstance *)0x0) {
      return pMVar21;
    }
  }
  fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
  fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
  if (3.2 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
    pMVar21 = g_heroMobyPtr;
  }
  return pMVar21;
}



//==== 002ca268  ns=mobyupdate_helpers  size=0xc38
// sig: undefined M186_002ca268(void)
// callers(1): 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(6): 00057820 collproc::CollLine; 002c9a68 mobyupdate_helpers::M1859_002c9a68; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

double mobyupdate_helpers::M186_002ca268
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,int param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *in_r10;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar20;
  ulonglong unaff_r25;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  double dVar38;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar39;
  ulonglong in_f20;
  double dVar40;
  ulonglong in_f21;
  double dVar41;
  ulonglong in_f22;
  double dVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  double dVar44;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar20 = uVar12 - 0x1b0;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar12;
  puVar8[0x38] = in_LR;
  puVar8[0x24] = in_f14;
  puVar8[0x25] = in_f15;
  puVar8[0x26] = in_f16;
  puVar8[0x27] = in_f17;
  puVar8[0x28] = in_f18;
  puVar8[0x29] = in_f19;
  puVar8[0x2a] = in_f20;
  puVar8[0x2b] = in_f21;
  puVar8[0x2c] = in_f22;
  puVar8[0x2d] = in_f23;
  puVar8[0x2e] = in_f24;
  puVar8[0x2f] = in_f25;
  puVar8[0x30] = in_f26;
  puVar8[0x31] = in_f27;
  puVar8[0x32] = in_f28;
  puVar8[0x33] = in_f29;
  puVar8[0x34] = in_f30;
  puVar8[0x35] = in_f31;
  puVar8[0x23] = unaff_r31;
  puVar8[0x22] = unaff_r30;
  puVar8[0x1e] = unaff_r26;
  dVar46 = 0.0;
  puVar8[0x21] = unaff_r29;
  dVar45 = 6.2831854820251465;
  pfVar6 = *(float **)((int)puVar8 + 0x22c);
  puVar8[0x20] = unaff_r28;
  puVar8[0x1f] = unaff_r27;
  puVar8[0x1d] = unaff_r25;
  puVar8[0x1c] = unaff_r24;
  puVar8[0x1b] = unaff_r23;
  puVar8[0x18] = (ulonglong)(double)(float)(param_2 / param_3);
  dVar25 = param_1;
  dVar23 = dVar46;
  iVar13 = fastfunc::FastDoubleToInt(param_3);
  iVar7 = *(int *)(param_7 + 0x78);
  *pfVar6 = 0.0;
  dVar26 = param_1;
  if (in_r10 != (float *)0x0) {
    fVar5 = *in_r10 - *(float *)(param_7 + 0x10);
    fVar1 = in_r10[1] - *(float *)(param_7 + 0x14);
    dVar26 = ABS((double)fVar5);
    dVar27 = ABS((double)fVar1);
    *(float *)(puVar8 + 0x12) = fVar5;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)(puVar8 + 0x13) = (float)(dVar26 - dVar27);
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
    dVar48 = ABS((double)*(float *)(puVar8 + 0x12));
    if ((double)*(float *)(puVar8 + 0x13) - dVar23 < 0.0) {
      dVar48 = dVar27;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar8 + 0x94));
    if ((double)*(float *)(puVar8 + 0x13) - dVar23 < 0.0) {
      dVar27 = dVar26;
    }
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar26 = dVar23;
    if (dVar23 < dVar48) {
      lVar21 = uVar12 - 0x1a0;
      lVar19 = uVar12 - 0x104;
      lVar16 = uVar12 - 0x114;
      lVar22 = 2;
      fVar2 = (float)(dVar27 - dVar48) / (float)(dVar27 + dVar48);
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar4;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar21 + 0x9c) = *(float *)((int)lVar21 + 0x8c) * fVar2 * fVar2;
        iVar14 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x114;
      pfVar17 = (float *)&DAT_007358e0;
      lVar21 = lVar20;
      lVar16 = lVar19;
      do {
        fVar2 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar21 + 0x9c) = *(float *)((int)lVar21 + 0x9c) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar21 = 2;
      do {
        iVar14 = (int)lVar20;
        iVar15 = (int)lVar19;
        lVar20 = lVar20 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0x9c)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  dVar48 = (double)(float)(param_2 * 0.5);
  *(undefined4 *)(puVar8 + 0x19) = 0x3f000000;
  fastfunc::FastWrapRot((float)param_1,(float)(param_2 * 0.5));
  dVar27 = (double)fastfunc::FastDiffRots(param_1,dVar48);
  dVar39 = 3.141592502593994;
  dVar38 = 1.570796251296997;
  dVar40 = -3.141592502593994;
  fVar5 = (float)(dVar26 + 1.570796251296997);
  dVar41 = -0.16666656732559204;
  dVar42 = 0.008333025500178337;
  dVar43 = -0.0001980741071747616;
  dVar44 = 2.601886990305502e-06;
  lVar21 = uVar12 - 0x140;
  lVar20 = uVar12 - 0x130;
  dVar48 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar48 = dVar26;
  }
  fVar1 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar1 = fVar5;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar48 < 0.0) {
    dVar24 = dVar48;
  }
  fVar2 = *param_8;
  fVar4 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar1 < 0.0) {
    fVar4 = fVar1;
  }
  dVar48 = (double)(float)(dVar24 * dVar24);
  fVar5 = param_8[1];
  fVar1 = param_8[2];
  fVar3 = param_8[3];
  fVar11 = fVar4 * fVar4;
  dVar34 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar24));
  fVar9 = fVar11 * fVar11 * fVar4;
  dVar32 = (double)(float)(dVar48 * dVar34);
  fVar10 = fVar11 * fVar9;
  dVar24 = (double)((float)(dVar48 * dVar32) * 2.601887e-06 +
                   (float)(dVar32 * -0.0001980741071747616 +
                          (double)(float)(dVar34 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar48 * dVar24) *
                                                         -0.16666656732559204 + dVar24))));
  dVar48 = (double)(fVar11 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar11 * fVar4 * -0.16666657 + fVar4);
  *(float *)(puVar8 + 0x10) = (float)(dVar48 * param_5 + (double)fVar2);
  dVar32 = 2.0;
  *(float *)((int)puVar8 + 0x84) = (float)(dVar24 * param_5 + (double)fVar5);
  *(float *)((int)puVar8 + 0x8c) = fVar3;
  *(float *)(puVar8 + 0xf) = (float)((double)fVar1 + param_4);
  *(float *)(puVar8 + 0xe) = (float)(dVar48 * param_6 + (double)fVar2);
  *(float *)((int)puVar8 + 0x74) = (float)(dVar24 * param_6 + (double)fVar5);
  *(float *)((int)puVar8 + 0x7c) = fVar3;
  *(float *)(puVar8 + 0x11) = (float)(param_4 * 2.0 + (double)fVar1);
  iVar14 = collproc::CollLine(lVar21,lVar20,4,param_7,0);
  dVar48 = dVar26;
  if (iVar14 == 0) {
    dVar24 = (double)M1859_002c9a68(lVar20,param_7);
    dVar26 = dVar25;
    if (dVar24 != dVar23) {
      *pfVar6 = (float)param_5;
      dVar26 = dVar48;
      dVar23 = param_5;
    }
  }
  else {
    if ((CollOutput.pMoby == *(MobyInstance **)(iVar7 + 0x38)) ||
       (((CollOutput.pMoby != (MobyInstance *)0x0 &&
         ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
        ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))) {
      *pfVar6 = 100.0;
      return dVar26;
    }
    fVar5 = *(float *)((int)puVar8 + 0x74) - CollOutput.ip.y;
    fVar5 = SQRT((*(float *)(puVar8 + 0xf) - CollOutput.ip.z) *
                 (*(float *)(puVar8 + 0xf) - CollOutput.ip.z) +
                 (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) *
                 (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) + fVar5 * fVar5);
    dVar23 = (double)fVar5;
    dVar45 = dVar46;
    if ((double)*pfVar6 < dVar23) {
      *pfVar6 = fVar5;
    }
  }
  if (0 < iVar13) {
    iVar14 = 0;
    do {
      dVar24 = (double)(float)(dVar27 + dVar38);
      dVar25 = (double)(float)(dVar39 - dVar27);
      if (dVar27 - (double)(float)(dVar39 - dVar27) < 0.0) {
        dVar25 = dVar27;
      }
      dVar34 = (double)(float)(dVar39 - dVar24);
      if (dVar24 - (double)(float)(dVar39 - dVar24) < 0.0) {
        dVar34 = dVar24;
      }
      fVar5 = *param_8;
      dVar29 = (double)(float)(dVar40 - dVar27);
      if ((double)(float)(dVar40 - dVar27) - dVar25 < 0.0) {
        dVar29 = dVar25;
      }
      dVar28 = (double)(float)(dVar29 * dVar29);
      dVar25 = (double)(float)(dVar40 - dVar24);
      if ((double)(float)(dVar40 - dVar24) - dVar34 < 0.0) {
        dVar25 = dVar34;
      }
      fVar1 = param_8[1];
      fVar2 = param_8[2];
      fVar4 = param_8[3];
      *(float *)((int)puVar8 + 0x8c) = fVar4;
      dVar34 = (double)(float)(dVar25 * dVar25);
      dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar29));
      dVar35 = (double)(float)(dVar28 * dVar24);
      dVar33 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar25));
      *(float *)(puVar8 + 0xf) = (float)((double)fVar2 + param_4);
      *(float *)(puVar8 + 0x11) = (float)(param_4 * dVar32 + (double)fVar2);
      *(float *)((int)puVar8 + 0x7c) = fVar4;
      dVar30 = (double)(float)(dVar34 * dVar33);
      dVar24 = (double)(float)((double)(float)(dVar28 * dVar35) * dVar44 +
                              (double)(float)(dVar35 * dVar43 +
                                             (double)(float)(dVar24 * dVar42 +
                                                            (double)(float)((double)(float)(dVar28 *
                                                                                           dVar29) *
                                                                            dVar41 + dVar29))));
      dVar25 = (double)(float)((double)(float)(dVar34 * dVar30) * dVar44 +
                              (double)(float)(dVar30 * dVar43 +
                                             (double)(float)(dVar33 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar25) *
                                                                            dVar41 + dVar25))));
      *(float *)((int)puVar8 + 0x74) = (float)(dVar24 * param_6 + (double)fVar1);
      *(float *)((int)puVar8 + 0x84) = (float)(dVar24 * param_5 + (double)fVar1);
      *(float *)(puVar8 + 0xe) = (float)(dVar25 * param_6 + (double)fVar5);
      *(float *)(puVar8 + 0x10) = (float)(dVar25 * param_5 + (double)fVar5);
      iVar15 = collproc::CollLine(lVar21,lVar20,4,param_7,0);
      if (iVar15 == 0) {
        dVar24 = (double)M1859_002c9a68(lVar20,param_7);
        dVar25 = dVar27;
        if ((dVar24 != dVar46) &&
           (((dVar24 = (double)fastfunc::FastSubRots((float)dVar27,(float)dVar48), dVar25 = dVar27,
             dVar24 < dVar45 || (dVar23 < param_5)) &&
            (dVar26 = dVar27, dVar45 = dVar24, dVar23 = param_5, (double)*pfVar6 < param_5)))) {
          *pfVar6 = (float)param_5;
        }
      }
      else {
        if ((CollOutput.pMoby == *(MobyInstance **)(iVar7 + 0x38)) ||
           (((CollOutput.pMoby != (MobyInstance *)0x0 &&
             ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
            ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))) {
          *pfVar6 = 100.0;
          return dVar27;
        }
        fVar5 = *(float *)((int)puVar8 + 0x74) - CollOutput.ip.y;
        dVar24 = (double)SQRT((*(float *)(puVar8 + 0xf) - CollOutput.ip.z) *
                              (*(float *)(puVar8 + 0xf) - CollOutput.ip.z) +
                              (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) *
                              (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) + fVar5 * fVar5);
        dVar25 = dVar27;
        if (dVar24 <= dVar23) {
          if (((dVar23 == dVar24) &&
              (dVar34 = (double)fastfunc::FastSubRots((float)dVar27,(float)dVar48), dVar25 = dVar27,
              dVar34 < dVar45)) &&
             (dVar26 = dVar27, dVar45 = dVar34, dVar23 = dVar24, (double)*pfVar6 < dVar24)) {
            *pfVar6 = (float)dVar24;
          }
        }
        else {
          dVar45 = (double)fastfunc::FastSubRots((float)dVar27,(float)dVar48);
          dVar26 = dVar27;
          dVar23 = dVar24;
          if ((double)*pfVar6 < dVar24) {
            *pfVar6 = (float)dVar24;
          }
        }
      }
      dVar27 = (double)fastfunc::FastWrapRot((float)dVar25,(float)(double)puVar8[0x18]);
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  dVar45 = (double)fastfunc::FastDiffRots(dVar26,0x3ff921fb60000000);
  dVar23 = (double)(float)(dVar26 + dVar38);
  dVar46 = (double)(float)(dVar45 + dVar38);
  dVar25 = (double)(float)(dVar39 - dVar45);
  if (dVar45 - (double)(float)(dVar39 - dVar45) < 0.0) {
    dVar25 = dVar45;
  }
  dVar48 = (double)(float)(dVar39 - dVar23);
  if (dVar23 - (double)(float)(dVar39 - dVar23) < 0.0) {
    dVar48 = dVar23;
  }
  dVar27 = (double)(float)(dVar39 - dVar46);
  if (dVar46 - (double)(float)(dVar39 - dVar46) < 0.0) {
    dVar27 = dVar46;
  }
  dVar24 = (double)(float)(dVar40 - dVar45);
  if ((double)(float)(dVar40 - dVar45) - dVar25 < 0.0) {
    dVar24 = dVar25;
  }
  dVar25 = (double)(float)(dVar39 - dVar26);
  if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
    dVar25 = dVar26;
  }
  dVar32 = (double)(float)(dVar40 - dVar23);
  if ((double)(float)(dVar40 - dVar23) - dVar48 < 0.0) {
    dVar32 = dVar48;
  }
  dVar23 = (double)(float)(dVar40 - dVar46);
  if ((double)(float)(dVar40 - dVar46) - dVar27 < 0.0) {
    dVar23 = dVar27;
  }
  dVar48 = (double)(float)(dVar24 * dVar24);
  dVar34 = (double)(float)(dVar32 * dVar32);
  dVar27 = (double)(float)(dVar23 * dVar23);
  dVar46 = (double)(float)(dVar40 - dVar26);
  if ((double)(float)(dVar40 - dVar26) - dVar25 < 0.0) {
    dVar46 = dVar25;
  }
  dVar28 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar24));
  dVar36 = (double)(float)(dVar46 * dVar46);
  dVar37 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar23));
  dVar29 = (double)(float)(dVar48 * dVar28);
  dVar30 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar32));
  dVar25 = (double)(float)(dVar27 * dVar37);
  dVar47 = (double)(float)(dVar34 * dVar30);
  dVar33 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar46));
  fVar4 = param_8[3];
  dVar35 = 0.125;
  dVar31 = (double)(float)(dVar36 * dVar33);
  fVar5 = (float)((double)(float)((double)(float)(dVar48 * dVar29) * dVar44 +
                                 (double)(float)(dVar29 * dVar43 +
                                                (double)(float)(dVar28 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar48 * dVar24) * dVar41 + dVar24)))) * param_6 +
                 (double)param_8[1]);
  fVar1 = (float)(param_4 * 0.125 + (double)param_8[2]);
  fVar2 = (float)((double)(float)((double)(float)(dVar27 * dVar25) * dVar44 +
                                 (double)(float)(dVar25 * dVar43 +
                                                (double)(float)(dVar37 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar27 * dVar23) * dVar41 + dVar23)))) * param_6 +
                 (double)*param_8);
  *(float *)(puVar8 + 0x10) =
       (float)((double)(float)((double)(float)(dVar34 * dVar47) * dVar44 +
                              (double)(float)(dVar47 * dVar43 +
                                             (double)(float)(dVar30 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar32) *
                                                                            dVar41 + dVar32)))) *
               param_5 + (double)fVar2);
  dVar25 = 0.11999999731779099;
  *(float *)((int)puVar8 + 0x8c) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar1;
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)((int)puVar8 + 0x74) = fVar5;
  *(float *)((int)puVar8 + 0x7c) = fVar4;
  *(float *)((int)puVar8 + 0x84) =
       (float)((double)(float)((double)(float)(dVar36 * dVar31) * dVar44 +
                              (double)(float)(dVar31 * dVar43 +
                                             (double)(float)(dVar33 * dVar42 +
                                                            (double)(float)((double)(float)(dVar36 *
                                                                                           dVar46) *
                                                                            dVar41 + dVar46)))) *
               param_5 + (double)fVar5);
  *(float *)(puVar8 + 0x11) = fVar1 + 0.12;
  iVar13 = collproc::CollLine(lVar21,lVar20,4,param_7,0);
  if (((iVar13 != 0) && (CollOutput.pMoby != *(MobyInstance **)(iVar7 + 0x38))) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((CollOutput.pMoby)->pClass == (MobyClass *)0x0 ||
       ((short)(CollOutput.pMoby)->pClass->mode_bits != 5)))))) {
    fVar5 = *(float *)((int)puVar8 + 0x74) - CollOutput.ip.y;
    dVar26 = (double)fastfunc::FastWrapRot
                               ((float)dVar26,
                                ((float)(param_5 -
                                        (double)SQRT((*(float *)(puVar8 + 0xf) - CollOutput.ip.z) *
                                                     (*(float *)(puVar8 + 0xf) - CollOutput.ip.z) +
                                                     (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) *
                                                     (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) +
                                                     fVar5 * fVar5)) * 3.1415927) /
                                (float)(param_5 * 3.0));
  }
  dVar27 = 3.1415927410125732;
  dVar23 = (double)fastfunc::FastWrapRot((float)dVar45,3.1415927);
  dVar46 = (double)(float)(dVar23 + dVar38);
  dVar48 = (double)(float)(dVar26 + dVar38);
  dVar45 = (double)(float)(dVar39 - dVar23);
  if (dVar23 - (double)(float)(dVar39 - dVar23) < 0.0) {
    dVar45 = dVar23;
  }
  dVar38 = (double)(float)(dVar39 - dVar26);
  if (dVar26 - (double)(float)(dVar39 - dVar26) < 0.0) {
    dVar38 = dVar26;
  }
  dVar24 = (double)(float)(dVar39 - dVar46);
  if (dVar46 - (double)(float)(dVar39 - dVar46) < 0.0) {
    dVar24 = dVar46;
  }
  dVar32 = (double)(float)(dVar39 - dVar48);
  if (dVar48 - (double)(float)(dVar39 - dVar48) < 0.0) {
    dVar32 = dVar48;
  }
  dVar39 = (double)(float)(dVar40 - dVar23);
  if ((double)(float)(dVar40 - dVar23) - dVar45 < 0.0) {
    dVar39 = dVar45;
  }
  dVar45 = (double)(float)(dVar40 - dVar26);
  if ((double)(float)(dVar40 - dVar26) - dVar38 < 0.0) {
    dVar45 = dVar38;
  }
  dVar38 = (double)(float)(dVar39 * dVar39);
  dVar23 = (double)(float)(dVar40 - dVar46);
  if ((double)(float)(dVar40 - dVar46) - dVar24 < 0.0) {
    dVar23 = dVar24;
  }
  dVar24 = (double)(float)(dVar45 * dVar45);
  dVar46 = (double)(float)(dVar40 - dVar48);
  if ((double)(float)(dVar40 - dVar48) - dVar32 < 0.0) {
    dVar46 = dVar32;
  }
  fVar2 = *param_8;
  fVar1 = param_8[1];
  dVar40 = (double)(float)(dVar23 * dVar23);
  dVar34 = (double)(float)(dVar46 * dVar46);
  dVar29 = (double)(float)(dVar38 * (double)(float)(dVar38 * dVar39));
  dVar31 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar45));
  fVar5 = (float)(param_4 * dVar35 + (double)param_8[2]);
  dVar32 = (double)(float)(dVar38 * dVar29);
  dVar30 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar23));
  dVar28 = (double)(float)(dVar24 * dVar31);
  dVar48 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar46));
  dVar35 = (double)(float)(dVar40 * dVar30);
  fVar4 = param_8[3];
  dVar33 = (double)(float)(dVar34 * dVar48);
  *(float *)((int)puVar8 + 0x8c) = fVar4;
  *(float *)(puVar8 + 0xf) = fVar5;
  fVar1 = (float)((double)(float)((double)(float)(dVar38 * dVar32) * dVar44 +
                                 (double)(float)(dVar32 * dVar43 +
                                                (double)(float)(dVar29 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar38 * dVar39) * dVar41 + dVar39)))) * param_6 +
                 (double)fVar1);
  *(float *)(puVar8 + 0x11) = (float)((double)fVar5 + dVar25);
  fVar5 = (float)((double)(float)((double)(float)(dVar40 * dVar35) * dVar44 +
                                 (double)(float)(dVar35 * dVar43 +
                                                (double)(float)(dVar30 * dVar42 +
                                                               (double)(float)((double)(float)(
                                                  dVar40 * dVar23) * dVar41 + dVar23)))) * param_6 +
                 (double)fVar2);
  *(float *)((int)puVar8 + 0x74) = fVar1;
  *(float *)((int)puVar8 + 0x7c) = fVar4;
  *(float *)(puVar8 + 0xe) = fVar5;
  *(float *)((int)puVar8 + 0x84) =
       (float)((double)(float)((double)(float)(dVar24 * dVar28) * dVar44 +
                              (double)(float)(dVar28 * dVar43 +
                                             (double)(float)(dVar31 * dVar42 +
                                                            (double)(float)((double)(float)(dVar24 *
                                                                                           dVar45) *
                                                                            dVar41 + dVar45)))) *
               param_5 + (double)fVar1);
  *(float *)(puVar8 + 0x10) =
       (float)((double)(float)((double)(float)(dVar34 * dVar33) * dVar44 +
                              (double)(float)(dVar33 * dVar43 +
                                             (double)(float)(dVar48 * dVar42 +
                                                            (double)(float)((double)(float)(dVar34 *
                                                                                           dVar46) *
                                                                            dVar41 + dVar46)))) *
               param_5 + (double)fVar5);
  iVar13 = collproc::CollLine(lVar21,lVar20,4,param_7,0);
  if (((iVar13 != 0) && (CollOutput.pMoby != *(MobyInstance **)(iVar7 + 0x38))) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((CollOutput.pMoby)->pClass == (MobyClass *)0x0 ||
       ((short)(CollOutput.pMoby)->pClass->mode_bits != 5)))))) {
    fVar5 = *(float *)((int)puVar8 + 0x74) - CollOutput.ip.y;
    dVar26 = (double)fastfunc::FastDiffRots
                               (dVar26,(double)((float)((double)(float)(param_5 -
                                                                       (double)SQRT((*(float *)(
                                                  puVar8 + 0xf) - CollOutput.ip.z) *
                                                  (*(float *)(puVar8 + 0xf) - CollOutput.ip.z) +
                                                  (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) *
                                                  (*(float *)(puVar8 + 0xe) - CollOutput.ip.x) +
                                                  fVar5 * fVar5)) * dVar27) / (float)(param_5 * 3.0)
                                               ));
  }
  dVar25 = (double)fastfunc::FastSubRots((float)dVar26,*(float *)(param_7 + 0x48));
  if (2.5132741928100586 < dVar25) {
    dVar45 = (double)*(float *)(puVar8 + 0x19);
    dVar25 = (double)fastfunc::FastDiffRots(dVar26,(double)*(float *)(param_7 + 0x48));
    dVar26 = (double)fastfunc::FastWrapRot(*(float *)(param_7 + 0x48),(float)(dVar25 * dVar45));
  }
  return dVar26;
}



//==== 002caea0  ns=mobyupdate_helpers  size=0x28
// sig: undefined M1859_002caea0(void)
// callers(0): 
// callees(1): 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1859_002caea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fastfunc::FastIntToDouble(param_3);
  return;
}



//==== 002caee0  ns=mobyupdate_helpers  size=0x2e0
// sig: undefined M186_002caee0(void)
// callers(2): 002cb1e0 mobyupdate_helpers::M186_002cb1e0; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(1): 00108180 mobyutil::MB_computeLobVelocity

void mobyupdate_helpers::M186_002caee0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar14 = uVar19 - 0xb0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar19;
  puVar8[0x18] = in_LR;
  fVar13 = 0.0;
  param_2[0xc] = 0.0;
  fVar1 = *param_3;
  *param_2 = fVar1;
  fVar2 = param_3[1];
  param_2[1] = fVar2;
  fVar3 = param_3[2];
  param_2[2] = fVar3;
  param_2[3] = param_3[3];
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar10 = fVar4 - fVar2;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar9 = fVar5 - fVar1;
  fVar7 = param_2[7];
  puVar8[0x15] = unaff_r31;
  dVar25 = (double)param_2[8];
  fVar9 = SQRT(fVar9 * fVar9 + fVar10 * fVar10);
  fVar3 = ((float)((double)(float)((double)fVar7 * 35.0) * dVar25) / (ABS(fVar3 - fVar6) + 1.0)) *
          (fVar9 * fVar9 + 0.25);
  dVar23 = (double)fVar3;
  param_2[5] = fVar3;
  if (dVar25 < dVar23) {
    param_2[5] = param_2[8];
    dVar23 = dVar25;
  }
  fVar1 = fVar1 - fVar5;
  fVar2 = fVar2 - fVar4;
  fVar3 = ABS(fVar1);
  fVar4 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar3 - fVar4;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  uVar15 = uVar17 << 2 | 0x735900;
  lVar16 = uVar17 << 2;
  fVar1 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar16);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)((int)uVar15 + 4);
  if (0.0 < fVar1) {
    lVar20 = uVar19 - 0xa0;
    lVar18 = uVar19 - 0x34;
    lVar16 = uVar19 - 0x24;
    lVar22 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x11) = fVar1;
    *(float *)(puVar8 + 0x10) = fVar1;
    *(float *)((int)puVar8 + 0x84) = fVar1;
    *(float *)((int)puVar8 + 0x7c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar4;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar1;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar20 + 0x7c) = *(float *)((int)lVar20 + 0x6c) * fVar1 * fVar1;
      iVar11 = (int)lVar18;
      lVar20 = lVar20 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar11 + 4) * fVar1 * fVar1;
      lVar16 = lVar16 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    uVar15 = uVar19 - 0x34;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = 4;
    uVar19 = uVar15;
    lVar16 = lVar14;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)uVar19 + 4) = *(float *)((int)uVar19 + 4) * fVar4;
      uVar19 = uVar19 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = 2;
    lVar18 = 2;
    do {
      iVar11 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar12 = (int)uVar15;
      uVar15 = uVar15 + 0x10;
      fVar13 = fVar13 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
               + *(float *)(iVar12 + 0xc);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    fVar13 = (fVar13 + 0.7853982) * fVar2 + fVar3;
  }
  param_2[6] = fVar13;
  dVar25 = (double)mobyutil::MB_computeLobVelocity
                             (dVar23,-(double)fVar7,param_1 + 0x10,param_2,uVar15,lVar16,0);
  param_2[4] = (float)dVar25;
  dVar24 = (double)(mobyutil::g_FrameTime * 7.0);
  dVar23 = dVar25;
  if (dVar24 < dVar25) {
    param_2[4] = mobyutil::g_FrameTime * 7.0;
    dVar23 = dVar24;
  }
  *(undefined1 *)((int)param_2 + 0x2f) = 0;
  param_2[5] = param_2[5] * (float)(dVar25 / dVar23);
  return;
}



//==== 002cb1e0  ns=mobyupdate_helpers  size=0x644
// sig: undefined M186_002cb1e0(void)
// callers(2): 002cb1e0 mobyupdate_helpers::M186_002cb1e0; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(7): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00104b7c mobyutil::MB_BallisticTicksToHeight; 002c9a68 mobyupdate_helpers::M1859_002c9a68; 002caee0 mobyupdate_helpers::M186_002caee0; 002cb1e0 mobyupdate_helpers::M186_002cb1e0; 00502730 fastfunc::FastIntToDouble

undefined8
mobyupdate_helpers::M186_002cb1e0(int param_1,undefined4 *param_2,float *param_3,char param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 local_90 [24];
  
  fVar4 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar5 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = (*(float *)(param_1 + 0x2c) * 5.2) / *(float *)(*(int *)(param_1 + 0x24) + 0x24);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar2 - fVar3 < 0.0) {
    fVar4 = fVar4 * (fVar2 / fVar3);
  }
  if (fVar2 - fVar3 < 0.0) {
    fVar5 = fVar5 * (fVar2 / fVar3);
  }
  dVar12 = 0.5;
  bVar1 = 0.5 < SQRT(fVar5 * 0.5 * fVar5 * 0.5 + fVar4 * 0.5 * fVar4 * 0.5);
  dVar8 = (double)M1859_002c9a68(local_f0,param_1);
  dVar9 = 0.0;
  if (dVar8 == 0.0) {
    uVar6 = 0;
    if (bVar1) {
      uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
    }
  }
  else if ((float)(dVar8 - (double)*(float *)(param_1 + 0x18)) <=
           (*(float *)(param_1 + 0x2c) * 3.0) / *(float *)(*(int *)(param_1 + 0x24) + 0x24)) {
    dVar11 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                     CollOutput.normal.x * CollOutput.normal.x +
                     CollOutput.normal.y * CollOutput.normal.y);
    dVar8 = dVar9;
    dVar10 = dVar9;
    if ((float)SQRT(dVar11) != 0.0) {
      dVar8 = 1.0 / SQRT(dVar11);
      dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                              (double)(float)(dVar12 * dVar8) + dVar8);
      dVar8 = (double)(float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                              (double)(float)(dVar12 * dVar8) + dVar8);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar11 * dVar8) * dVar8 - 1.0) *
                      (double)(float)(dVar12 * dVar8) + dVar8);
      dVar9 = (double)(CollOutput.normal.x * fVar2);
      dVar8 = (double)(CollOutput.normal.y * fVar2);
      dVar10 = (double)(CollOutput.normal.z * fVar2);
    }
    if ((double)(float)(ABS(dVar9) + ABS(dVar8)) <= ABS(dVar10)) {
      dVar8 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
      dVar9 = (double)(float)(dVar8 * dVar12 + 1.0);
      dVar8 = 0.20000000298023224;
      iVar7 = collproc::CollSphere
                        ((double)(float)(dVar9 * 0.19990000128746033),local_90,&DAT_002cb1c0,6,
                         param_1);
      if (iVar7 == 0) {
        if ((param_4 == '\0') ||
           (iVar7 = collproc::CollLine(local_e0,local_d0,6,param_1,0), iVar7 != 0)) {
          DAT_0096bc00 = param_2[0x14];
          DAT_0096bc04 = param_2[0x15];
          DAT_0096bc08 = param_2[0x16];
          DAT_0096bc1f = *(undefined1 *)(param_2 + 0x1a);
          DAT_0096bc20 = param_2[0x11];
          DAT_0096bbf0 = *param_2;
          DAT_0096bbf4 = param_2[1];
          DAT_0096bbf8 = param_2[2];
          DAT_0096bbfc = param_2[3];
          M186_002caee0(param_1,&DAT_0096bbf0,local_f0);
          param_2[0x14] = DAT_0096bc00;
          param_2[0x15] = DAT_0096bc04;
          param_2[0x16] = DAT_0096bc08;
          *(undefined1 *)(param_2 + 0x1a) = DAT_0096bc1f;
          param_2[0x11] = DAT_0096bc20;
          mobyutil::MB_BallisticTicksToHeight((double)DAT_0096bc0c,param_1 + 0x10,auStack_a0,0xc0,0)
          ;
          fastfunc::FastIntToDouble(10);
          fastfunc::FastIntToDouble(10);
          iVar7 = collproc::CollLine(local_e0,local_b0,6,param_1,0);
          if ((iVar7 == 0) || (CollOutput.pMoby == (MobyInstance *)param_2[0xe])) {
            iVar7 = collproc::CollLine(local_b0,local_d0,6,param_1,0);
            if ((iVar7 == 0) || (CollOutput.pMoby == (MobyInstance *)param_2[0xe])) {
              uVar6 = 1;
              *(undefined1 *)(param_1 + 0xbc) = 0xd;
            }
            else {
              uVar6 = 0;
              if (bVar1) {
                uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
              }
            }
          }
          else {
            uVar6 = 0;
            if (bVar1) {
              uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
            }
          }
        }
        else {
          uVar6 = 0;
          if (bVar1) {
            uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
          }
        }
      }
      else {
        CollOutput.push.z = -(float)(dVar9 * dVar8 - (double)CollOutput.push.z);
        uVar6 = 0;
        if (bVar1) {
          uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
        }
      }
    }
    else {
      uVar6 = 0;
      if (bVar1) {
        uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
      }
    }
  }
  else {
    uVar6 = 0;
    if (bVar1) {
      uVar6 = M186_002cb1e0(param_1,param_2,local_c0,1);
    }
  }
  return uVar6;
}



//==== 002cb828  ns=Global  size=0x100
// sig: undefined FUN_002cb828(void)
// callers(1): 002ff240 mobyupdate_unsorted::UpdateMoby_230
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_002cb828(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(DOOM_BOT);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pvVar3 = pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar4->drawDistance = 0xff;
    (pMVar4->pos).w = fVar1;
    *(undefined4 *)((int)pvVar3 + 0x10) = *param_3;
    *(undefined4 *)((int)pvVar3 + 0x14) = param_3[1];
    uVar2 = param_3[2];
    *(undefined4 *)((int)pvVar3 + 0x60) = param_1;
    *(undefined4 *)((int)pvVar3 + 0x18) = uVar2;
    *(undefined4 *)((int)pvVar3 + 0x1c) = param_3[3];
    mobyfunc::UpdateMobyTransform(pMVar4);
    mobyutil::MB_CopyHeroLights(pMVar4);
    pMVar4->scale = pMVar4->pClass->gScale * 0.1;
  }
  return pMVar4;
}



//==== 002cb930  ns=mobyupdate_helpers  size=0x120
// sig: undefined M186_002cb930(void)
// callers(1): 002cbaf8 mobyupdate_unsorted::UpdateMoby_186
// callees(2): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot

undefined1 mobyupdate_helpers::M186_002cb930(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  iVar1 = collproc::CollLine(local_20,local_30,6,param_1,0);
  if (iVar1 != 0) {
    if (((CollOutput.pMoby == (MobyInstance *)0x0) ||
        ((CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
       ((short)(CollOutput.pMoby)->pClass->mode_bits != 5)) {
      iVar1 = collproc::CollHotspot();
      if (iVar1 < 4) {
        if (iVar1 < 2) {
          if (iVar1 < 0) {
            return uVar2;
          }
        }
        else if (iVar1 < 3) {
          return uVar2;
        }
      }
      else if (iVar1 < 0xb) {
        if (iVar1 != 8) {
          return uVar2;
        }
      }
      else if (0xd < iVar1) {
        return uVar2;
      }
      uVar2 = 0xb;
    }
    else {
      uVar2 = 0xb;
    }
  }
  return uVar2;
}



//==== 002cbaf8  ns=mobyupdate_unsorted  size=0x1e60
// sig: undefined UpdateMoby_186(MobyInstance * moby)
// callers(0): 
// callees(35): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100ef8 mobyutil::MB_MoveAndCollide2; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 001095b8 mobyutil::MB_updateJump; 0010e030 mobyutil::MB_genericExplosion; 001122e0 mobyutil::MB_PlatformLocalToWorld; 0015d12c sound::PlayMobySound; 002c9860 mobyupdate_helpers::M186_002c9860; 002c9be0 mobyupdate_helpers::M186_002c9be0; 002ca268 mobyupdate_helpers::M186_002ca268; 002caee0 mobyupdate_helpers::M186_002caee0; 002cb1e0 mobyupdate_helpers::M186_002cb1e0; 002cb930 mobyupdate_helpers::M186_002cb930; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf; 005e7ed8 FUN_005e7ed8; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8e80 FUN_005e8e80
// strings: 00655b34: 'Hey, M186 init should be earlier!\n' | 002cbaa0: '?333>' (raw) | 00655b5c: 'main loop squirm! should never get here!\n'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 186 */

void mobyupdate_unsorted::UpdateMoby_186(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar13;
  u8 uVar15;
  float fVar14;
  ulonglong uVar12;
  float *pfVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  uint local_a0;
  
  lVar11 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar5 = (float *)moby->pVar;
  if (pfVar5 == (float *)0x0) {
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  fVar6 = (moby->pos).x;
  uVar8 = (int)fVar6 >> 0x1f;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
  dVar26 = 2.0;
  if ((((iVar13 < 0x40000000) || (0x447f4000 < iVar13)) ||
      (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x447f4000 < iVar13 || iVar13 < 0x40000000)) ||
     ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar13 = mobyutil::MB_damage(lVar11,&DAT_00800001,0);
  if (iVar13 != 0) {
    moby->state = '\v';
  }
  dVar18 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar25 = 1.0;
  dVar27 = (double)(float)(dVar18 + 1.0);
  dVar24 = 0.05000000074505806;
  moby->scale = (float)((double)(float)((double)moby->pClass->gScale * dVar27 - (double)moby->scale)
                        * 0.05000000074505806 + (double)moby->scale);
  dVar18 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
  dVar23 = 0.5;
  uVar15 = moby->updateId;
  dVar18 = (double)(float)(dVar18 * 0.5 + dVar25);
  if (((uVar15 == '\0') || (uVar15 == '\x06')) || (dVar19 = dVar25, uVar15 == '\a')) {
    dVar19 = (double)(float)(dVar18 / dVar27);
  }
  moby->unk58 = (float)dVar19;
  if (moby->state != '\v') {
    iVar13 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * 183.29600524902344));
    fVar14 = DAT_0071f408;
    DAT_0096bba0 = iVar13 + 1;
    DAT_0096bbd0 = 0.0;
    DAT_0096bba4 = (float)(dVar27 * 0.1979999989271164 + 0.019999999552965164);
    if (moby->state == '\0') {
      DAT_0096bba8 = (float)(dVar27 * 0.25);
      DAT_0096bbdc = DAT_0071f408 * 0.02;
      DAT_0096bbac = DAT_0096bba8;
      pfVar5[0x11] = DAT_0071f408 * 0.2;
      DAT_0096bbe0 = fVar14 * 0.01;
      DAT_0096bbbc = (float)(dVar27 * 0.009999999776482582) * fVar14;
      pfVar5[0x10] = DAT_0096bbbc;
      DAT_0096bbc0 = 0.3;
      pfVar5[0x17] = (float)((double)(fVar14 * 0.066) * dVar18);
      DAT_0096bbc8 = 0x40490fdb;
      DAT_0096bbe4 = fVar14 * 0.045;
      DAT_0096bc0c = DAT_0071f418 * 29.7;
      DAT_0096bc14 = 0x40f00000;
      DAT_0096bc18 = 0x41380000;
      _DAT_0096bc1c = 0x2030400;
      DAT_0096bc10 = (float)(dVar27 * 0.10000000149011612);
      DAT_0096bc24 = DAT_0096bbdc;
      DAT_0096bc28 = DAT_0096bbe0;
      DAT_0096bc2c = DAT_0096bbe4;
      pfVar5[0xe] = 0.0;
      moby->state = '\x0e';
      pfVar5[0xc] = 0.0;
      DAT_0096bbb0 = pfVar5[0x10];
      pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
      DAT_0096bbb4 = pfVar5[0x11];
      DAT_0096bbb8 = pfVar5[0x12];
      DAT_0096bbe8 = pfVar5[0x13];
      DAT_0096bbc4 = pfVar5[0x17];
      DAT_0096bc00 = pfVar5[0x14];
      DAT_0096bc04 = pfVar5[0x15];
      DAT_0096bc08 = pfVar5[0x16];
      _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
      DAT_0096bc20 = pfVar5[0x11];
      DAT_0096bbf0 = *pfVar5;
      DAT_0096bbf4 = pfVar5[1];
      DAT_0096bbf8 = pfVar5[2];
      DAT_0096bbfc = pfVar5[3];
      if (moby->animationId != '\x05') {
        mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
      }
    }
    if (moby->state == '\r') {
      if (((pfVar5[0x18] == 0.0) || (cVar1 = *(char *)((int)pfVar5[0x18] + 0x20), cVar1 == -2)) ||
         (cVar1 == -3)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      fVar6 = (moby->pos).x;
      uVar8 = (int)fVar6 >> 0x1f;
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
      if (((iVar13 < 0x447f4001 && 0x3fffffff < iVar13) &&
          (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
          iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
             iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar14 = pfVar5[0xd];
    pfVar5[0xd] = (float)((int)fVar14 + 1);
    if ((int)(animationSpeed * 3600.5) < (int)fVar14 + 1) {
      moby->state = '\v';
    }
    fastfunc::FastDecTimerS32(pfVar5 + 0xc);
    pfVar5[8] = (moby->pos).x;
    pfVar5[9] = (moby->pos).y;
    pfVar5[10] = (moby->pos).z;
    pfVar5[0xb] = (moby->pos).w;
    iVar13 = mobyupdate_helpers::M186_002c9860(lVar11,5,0);
    fVar14 = (moby->pos).z;
    if (iVar13 != 0) {
      if (CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_002cc0e0:
        (moby->pos).x = CollOutput.push.x;
        (moby->pos).y = CollOutput.push.y;
        fVar3 = CollOutput.push.z - fVar14;
        (moby->pos).z = CollOutput.push.z;
        (moby->pos).w = CollOutput.push.w;
        if (0.6 < ABS(fVar3)) {
          (moby->pos).z = fVar14 + 0.01;
        }
        pfVar16 = pfVar5 + 4;
        pfVar5[4] = CollOutput.normal.x;
        pfVar5[5] = CollOutput.normal.y;
        pfVar5[6] = CollOutput.normal.z;
        pfVar5[7] = CollOutput.normal.w;
        FUN_005e8e80((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        FUN_005e7ed8((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        moby->state = '\b';
        fVar14 = animationSpeed;
        if (pfVar5[0xe] != 0.0) {
          pfVar5[0xf] = pfVar5[0xe];
          pfVar5[0xc] = (float)((int)pfVar5[0xc] + 500);
        }
        if (moby->animationId != '\x05') {
          mobyutil::MB_SetAnimation(lVar11,5,0,(int)(fVar14 * 5.5));
        }
      }
      else if (CollOutput.poly < 0) {
        if (((((CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) == NONE) ||
            ((CollOutput.pMoby)->pClass == (MobyClass *)0x0)) ||
           ((short)(CollOutput.pMoby)->pClass->mode_bits != 5)) {
          if (CollOutput.poly < 0) goto LAB_002cc0e0;
        }
        else {
          moby->state = '\v';
        }
      }
    }
    fVar6 = (moby->pos).z;
    uVar8 = (int)fVar6 >> 0x1f;
    if ((int)((uVar8 >> 1 ^ (uint)fVar6) - uVar8) < 0x3dcccccd) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (4000 < (int)pfVar5[0xc]) {
      moby->state = '\v';
    }
  }
  lVar17 = lVar11 + 0x10;
  dVar19 = (double)mobyutil::GetGroundZ(dVar23,lVar17,0);
  uVar22 = 0;
  if ((dVar19 != 0.0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
    mobyutil::MB_PlatformLocalToWorld
              (lVar11,CollOutput.pMoby,lVar17,lVar11 + 0x40,lVar17,lVar11 + 0x40);
  }
  bVar2 = moby->state;
  if (bVar2 < 8) {
    if (1 < bVar2) {
      if (bVar2 < 6) {
        pMVar7 = (MobyInstance *)pfVar5[0xe];
        dVar26 = dVar18;
        if ((pMVar7 != (MobyInstance *)0x0) && (pMVar7->state != 0xfd && pMVar7->state != 0xfe)) {
          dVar24 = (double)(pMVar7->pos).z;
          iVar13 = mobyutil::MB_GetPvarsIfMobyHasThem(pMVar7);
          if (iVar13 != 0) {
            dVar19 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar13 + 10));
            dVar24 = (double)(float)(dVar24 + (double)*(float *)(iVar13 + 0x10));
            dVar18 = (double)(float)(dVar19 * 0.125 + dVar18);
          }
          fVar3 = (moby->pos).y;
          fVar14 = pfVar5[0xe];
          fVar4 = (moby->pos).x;
          fVar9 = fVar3 - *(float *)((int)fVar14 + 0x14);
          dVar19 = (double)(moby->pos).z;
          fVar10 = fVar4 - *(float *)((int)fVar14 + 0x10);
          fVar14 = (float)(dVar19 - (double)*(float *)((int)fVar14 + 0x18));
          if ((double)SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar9 * fVar9) < dVar18) {
            iVar13 = collproc::CollSphere(dVar26,lVar17);
            fVar4 = (moby->pos).x;
            fVar3 = (moby->pos).y;
            dVar19 = (double)(moby->pos).z;
            if (iVar13 != 0) {
              moby->state = '\v';
              goto LAB_002cd86c;
            }
          }
          fVar3 = fVar3 - *(float *)((int)pfVar5[0xe] + 0x14);
          fVar4 = fVar4 - *(float *)((int)pfVar5[0xe] + 0x10);
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)(dVar18 * dVar23)) &&
             (ABS((float)(dVar24 - (double)(float)(dVar26 * 0.10000000149011612 + dVar19))) <
              (float)(dVar18 * dVar23))) {
            DAT_0096bc00 = pfVar5[0x14];
            DAT_0096bc04 = pfVar5[0x15];
            DAT_0096bc08 = pfVar5[0x16];
            _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
            DAT_0096bc20 = pfVar5[0x11];
            DAT_0096bbf0 = *pfVar5;
            DAT_0096bbf4 = pfVar5[1];
            DAT_0096bbf8 = pfVar5[2];
            DAT_0096bbfc = pfVar5[3];
            mobyupdate_helpers::M186_002caee0
                      (lVar11,&DAT_0096bbf0,(ulonglong)(uint)pfVar5[0xe] + 0x10);
            pfVar5[0x14] = DAT_0096bc00;
            pfVar5[0x15] = DAT_0096bc04;
            fVar14 = pfVar5[0xe];
            pfVar5[0x16] = DAT_0096bc08;
            *(undefined1 *)(pfVar5 + 0x1a) = DAT_0096bc1f;
            pfVar5[0x11] = DAT_0096bc20;
            *pfVar5 = *(float *)((int)fVar14 + 0x10);
            pfVar5[1] = *(float *)((int)fVar14 + 0x14);
            pfVar5[2] = *(float *)((int)fVar14 + 0x18);
            pfVar5[3] = *(float *)((int)fVar14 + 0x1c);
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
            if (moby->animationId != '\0') {
              mobyutil::MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
            }
            moby->state = '\x06';
          }
        }
        iVar13 = mobyutil::MB_randInt(4);
        if (iVar13 == 0) {
          fVar14 = (float)mobyupdate_helpers::M186_002c9be0
                                    (lVar11,local_f0,lVar11 + 0x40,pfVar5[0xf],1);
          pfVar5[0xe] = fVar14;
        }
        dVar18 = 0.10000000149011612;
        pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar26);
        moby->state = '\x04';
        if (pfVar5[0xe] == 0.0) {
          uVar22 = mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
          iVar13 = mobyutil::MB_randInt(4);
          if (iVar13 == 0) {
            uVar20 = 0x3ffd9163e0000000;
            uVar21 = 0x4010000000000000;
            dVar27 = (double)(float)(dVar27 * 0.3499999940395355);
            dVar24 = (double)fastfunc::FastIntToDouble
                                       (0x3fd6666660000000,0x3ffd9163e0000000,0x4010000000000000,
                                        DAT_0096bba0);
            dVar24 = (double)mobyupdate_helpers::M186_002ca268
                                       (uVar22,uVar20,uVar21,dVar27,uVar21,
                                        (double)(float)(dVar24 * 0.0009765625),lVar11,lVar17);
            pfVar5[0x19] = (float)dVar24;
          }
          else {
            local_a0 = 0x40a00000;
          }
        }
        pMVar7 = (MobyInstance *)pfVar5[0xe];
        if (((pMVar7 == (MobyInstance *)0x0) || (pMVar7 == g_heroMobyPtr)) ||
           ((pMVar7->state != 0xfd && pMVar7->state != 0xfe &&
            (((pMVar7->pClass != (MobyClass *)0x0 && ((short)pMVar7->pClass->mode_bits == 5)) &&
             ((pMVar7->modeBits & CAN_BE_AUTO_TARGETED) != NONE)))))) {
          uVar15 = moby->state;
          if (pMVar7 == (MobyInstance *)0x0) {
            moby->state = '\x05';
            if (moby->animationId != '\x06') {
              mobyutil::MB_SetAnimation(lVar11,6,0,(int)(animationSpeed * 10.5));
            }
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
          }
          else {
            iVar13 = mobyutil::MB_randInt(4);
            if ((iVar13 == 0) &&
               (iVar13 = mobyupdate_helpers::M186_002cb1e0
                                   (lVar11,pfVar5,(ulonglong)(uint)pfVar5[0xe] + 0x10,1),
               iVar13 != 0)) {
              fVar14 = pfVar5[0xe];
              *pfVar5 = *(float *)((int)fVar14 + 0x10);
              pfVar5[1] = *(float *)((int)fVar14 + 0x14);
              pfVar5[2] = *(float *)((int)fVar14 + 0x18);
              pfVar5[3] = *(float *)((int)fVar14 + 0x1c);
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
              if (moby->animationId != '\0') {
                mobyutil::MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
              }
              moby->state = '\x06';
              goto LAB_002cd86c;
            }
            pMVar7 = (MobyInstance *)pfVar5[0xe];
            fVar14 = (moby->pos).y - (pMVar7->pos).y;
            fVar3 = (moby->pos).x - (pMVar7->pos).x;
            dVar24 = (double)SQRT(fVar3 * fVar3 + fVar14 * fVar14);
            if (pMVar7 == g_heroMobyPtr) {
              moby->state = '\x05';
              if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x06')) {
                mobyutil::MB_SetAnimation(lVar11,6,0,(int)((double)animationSpeed * dVar23));
              }
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
            }
            if (8.0 <= dVar24) {
              if (dVar24 <= 20.0) {
                moby->state = '\x04';
                if (moby->animationId != '\a') {
                  mobyutil::MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
                }
                pfVar5[0x17] = (float)((double)(float)((double)DAT_0071f408 * dVar18) * dVar26);
              }
              else {
                moby->state = '\x05';
                if (moby->animationId != '\0') {
                  mobyutil::MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 10.5));
                }
                pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
              }
            }
            else {
              moby->state = '\x04';
              if (moby->animationId != '\a') {
                mobyutil::MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
              }
              pfVar5[0x17] = (float)((double)(float)((double)DAT_0071f408 * dVar18) * dVar26);
            }
            iVar13 = mobyutil::MB_randInt(4);
            if (iVar13 == 0) {
              dVar24 = (double)(moby->rotation).z;
              uVar21 = 0x3ffd9163e0000000;
              uVar20 = 0x3fd6666660000000;
              uVar22 = 0x4010000000000000;
              dVar23 = (double)fastfunc::FastIntToDouble
                                         (0x4010000000000000,0x3fd6666660000000,DAT_0096bba0);
              dVar23 = (double)mobyupdate_helpers::M186_002ca268
                                         (dVar24,uVar21,uVar22,uVar20,uVar22,
                                          (double)(float)(dVar23 * 0.0009765625),lVar11,lVar17);
              pfVar5[0x19] = (float)dVar23;
            }
            else {
              local_a0 = 0x40a00000;
            }
          }
          if ((moby->state == '\x04') && (uVar15 == '\x05')) {
            moby->state = '\f';
            if (moby->animationId != '\x01') {
              mobyutil::MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            dVar27 = (double)(moby->pos).y;
            dVar23 = (double)FUN_005e8128((double)pfVar5[0x19]);
            dVar24 = 5.0;
            pfVar5[1] = (float)(dVar23 * 5.0 + dVar27);
            dVar27 = (double)(moby->pos).x;
            dVar23 = (double)mathfunc::cosf(pfVar5[0x19]);
            DAT_0096bbb0 = pfVar5[0x10];
            *pfVar5 = (float)(dVar23 * dVar24 + dVar27);
            pfVar5[2] = (float)((double)(moby->pos).z + dVar25);
            DAT_0096bbb4 = pfVar5[0x11];
            DAT_0096bbb8 = pfVar5[0x12];
            DAT_0096bbe8 = pfVar5[0x13];
            DAT_0096bbc4 = pfVar5[0x17];
            mobyutil::OrganicDeltAngSpeed
                      ((double)pfVar5[0x19],(double)DAT_0096bbdc,(double)DAT_0096bbe0,
                       (double)DAT_0096bbe4,lVar11,DAT_0096bbe8,pfVar5 + 0x11);
            iVar13 = collproc::CollLine(local_e0,local_d0,6,lVar11,0);
            dVar23 = (double)(moby->pos).z;
            if (((iVar13 == 0) || (CollOutput.pMoby == (MobyInstance *)pfVar5[0xe])) ||
               (((CollOutput.pMoby != (MobyInstance *)0x0 &&
                 ((CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
                ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))) {
              uVar12 = mobyutil::MB_UpdateNavMoveTurning(lVar11,&DAT_0096bba0,pfVar5,pfVar5 + 4);
              if (dVar25 < ABS((double)(float)((double)(moby->pos).z - dVar23))) {
                (moby->pos).z = (float)dVar23;
                iVar13 = mobyupdate_helpers::M186_002c9860(lVar11,5,0);
                if (iVar13 != 0) {
                  (moby->pos).x = CollOutput.push.x;
                  (moby->pos).y = CollOutput.push.y;
                  dVar24 = (double)CollOutput.push.z;
                  (moby->pos).z = CollOutput.push.z;
                  (moby->pos).w = CollOutput.push.w;
                  if (dVar25 < ABS((double)(float)(dVar24 - dVar23))) {
                    (moby->pos).z = (float)dVar23;
                  }
                }
              }
            }
            else {
              uVar12 = 2;
              local_a0 = 0;
              pfVar5[4] = (moby->pos).x - *pfVar5;
              fVar14 = (moby->pos).y;
              pfVar5[6] = 0.01;
              pfVar5[5] = fVar14 - pfVar5[1];
              FUN_005e7f98(dVar18,pfVar5 + 4,pfVar5 + 4);
            }
            pfVar5[0x10] = DAT_0096bbb0;
            pfVar5[0x11] = DAT_0096bbb4;
            pfVar5[0x12] = DAT_0096bbb8;
            pfVar5[0x13] = DAT_0096bbe8;
            pfVar5[0x17] = DAT_0096bbc4;
            if (((uVar12 & 2) != 0) ||
               ((int)(((uint)((int)local_a0 >> 0x1f) >> 1 ^ local_a0) - ((int)local_a0 >> 0x1f)) <
                0x40800000)) {
              iVar13 = mobyupdate_helpers::M186_002cb1e0(lVar11,pfVar5,pfVar5,0);
              if (iVar13 == 0) {
                if (pfVar5[0xe] != 0.0) {
                  pfVar5[0xf] = pfVar5[0xe];
                  pfVar5[0xc] = (float)((int)pfVar5[0xc] + 500);
                }
                pfVar5[4] = (moby->pos).x - *pfVar5;
                fVar14 = (moby->pos).y;
                pfVar5[6] = 0.01;
                pfVar5[5] = fVar14 - pfVar5[1];
                FUN_005e7f98(dVar18,pfVar5 + 4,pfVar5 + 4);
                moby->state = '\b';
                if (moby->animationId != '\x05') {
                  mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
                }
                goto LAB_002cd86c;
              }
              pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.066) * dVar26);
              if (moby->animationId != '\0') {
                mobyutil::MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 2.5));
              }
              moby->state = '\x06';
            }
          }
          uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
          moby->state = uVar15;
        }
        else {
          pfVar5[0xe] = 0.0;
          moby->state = '\x02';
          pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.0273) * dVar26);
        }
      }
      else if (bVar2 < 7) {
        dVar18 = (double)FUN_005e8338((double)(*pfVar5 - (moby->pos).x),
                                      (double)(pfVar5[1] - (moby->pos).y));
        DAT_0096bbb0 = pfVar5[0x10];
        DAT_0096bbb4 = pfVar5[0x11];
        DAT_0096bbb8 = pfVar5[0x12];
        DAT_0096bbe8 = pfVar5[0x13];
        DAT_0096bbc4 = pfVar5[0x17];
        mobyutil::OrganicDeltAngSpeed
                  (dVar18,(double)(float)((double)DAT_0096bbdc * dVar26),
                   (double)(float)((double)DAT_0096bbe0 * dVar23),
                   (double)(float)((double)DAT_0096bbe4 * dVar26),lVar11,DAT_0096bbe8,&DAT_0096bbb4)
        ;
        pfVar5[0x10] = DAT_0096bbb0;
        pfVar5[0x11] = DAT_0096bbb4;
        pfVar5[0x12] = DAT_0096bbb8;
        pfVar5[0x13] = DAT_0096bbe8;
        pfVar5[0x17] = DAT_0096bbc4;
        dVar26 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar18);
        if (dVar26 < 0.0872664600610733) {
          mobyutil::MB_SetAnimation(lVar11,DAT_0096bc1c,0,(int)(animationSpeed * 3.5));
          moby->state = '\a';
        }
        uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      else {
        DAT_0096bc00 = pfVar5[0x14];
        DAT_0096bc04 = pfVar5[0x15];
        DAT_0096bc08 = pfVar5[0x16];
        _DAT_0096bc1c = CONCAT31(_DAT_0096bc1c,*(undefined1 *)(pfVar5 + 0x1a));
        DAT_0096bc20 = pfVar5[0x11];
        DAT_0096bbf0 = *pfVar5;
        DAT_0096bbf4 = pfVar5[1];
        DAT_0096bbf8 = pfVar5[2];
        DAT_0096bbfc = pfVar5[3];
        iVar13 = mobyutil::MB_updateJump(lVar11,&DAT_0096bbf0);
        if (iVar13 == 4) {
          moby->state = '\x04';
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 3.5));
          }
          pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
        }
        pfVar5[0x14] = DAT_0096bc00;
        pfVar5[0x15] = DAT_0096bc04;
        pfVar5[0x16] = DAT_0096bc08;
        *(undefined1 *)(pfVar5 + 0x1a) = DAT_0096bc1f;
        pfVar5[0x11] = DAT_0096bc20;
        uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      goto LAB_002cd86c;
    }
    if (bVar2 == 0) {
      libc::printf("Hey, M186 init should be earlier!\n");
      moby->state = '\x01';
      goto LAB_002cd86c;
    }
  }
  else {
    if (0xb < bVar2) {
      if (bVar2 < 0xe) {
        if (bVar2 < 0xd) {
          if ((moby->field43_0x70 & 2U) != 0) {
            moby->state = '\x04';
            if (moby->animationId != '\a') {
              mobyutil::MB_SetAnimation(lVar11,7,0,(int)(animationSpeed * 10.5));
            }
            pfVar5[0x17] = (float)((double)(DAT_0071f408 * 0.1) * dVar18);
          }
        }
        else {
          libc::printf("main loop squirm! should never get here!\n");
        }
      }
      else if (bVar2 < 0xf) {
        iVar13 = collproc::CollSphere((double)(float)(dVar27 * dVar23),lVar17);
        if (((iVar13 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
           ((CollOutput.pMoby)->oClass == DOOM_BOT)) {
          fVar14 = CollOutput.push.y - (moby->pos).y;
          fVar3 = CollOutput.push.x - (moby->pos).x;
          fVar4 = CollOutput.push.z - (moby->pos).z;
          FUN_005e7f98((double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar14 * fVar14) * 1.1),
                       local_b0,local_b0);
          (moby->pos).x = (moby->pos).x + fVar3;
          (moby->pos).y = (moby->pos).y + fVar14;
          (moby->pos).z = (moby->pos).z + 0.0;
        }
        pfVar16 = pfVar5 + 4;
        DAT_0096bbb0 = pfVar5[0x10];
        pfVar5[6] = -(DAT_0071f418 * 9.0 - pfVar5[6]);
        DAT_0096bbb4 = pfVar5[0x11];
        DAT_0096bbb8 = pfVar5[0x12];
        DAT_0096bbe8 = pfVar5[0x13];
        DAT_0096bbc4 = pfVar5[0x17];
        uVar12 = mobyutil::MB_MoveAndCollide2
                           ((double)(float)(dVar27 * 0.699999988079071),(double)DAT_0096bbd0,lVar11,
                            pfVar16,&DAT_002cba54,DAT_0096bba0);
        if ((uVar12 & 2) != 0) {
          pfVar5[6] = 0.0;
          pfVar5[4] = (float)((double)pfVar5[4] * dVar23);
          pfVar5[5] = (float)((double)pfVar5[5] * dVar23);
        }
        FUN_005e8e80((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
        if ((uVar12 & 2) == 0) {
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
          }
        }
        else {
          moby->state = '\x02';
        }
        uVar22 = FUN_005e8338((double)pfVar5[4],(double)pfVar5[5]);
        mobyutil::OrganicDeltAngSpeed
                  (uVar22,(double)DAT_0096bbbc,(double)DAT_0096bbc0,(double)DAT_0096bbc4,lVar11);
        pfVar5[0x10] = DAT_0096bbb0;
        pfVar5[0x11] = DAT_0096bbb4;
        pfVar5[0x12] = DAT_0096bbb8;
        pfVar5[0x13] = DAT_0096bbe8;
        pfVar5[0x17] = DAT_0096bbc4;
        uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
        moby->state = uVar15;
      }
      else {
        moby->state = '\0';
      }
      goto LAB_002cd86c;
    }
    if (bVar2 < 9) {
      pfVar16 = pfVar5 + 4;
      DAT_0096bbb0 = pfVar5[0x10];
      pfVar5[6] = -(DAT_0071f418 * 9.0 - pfVar5[6]);
      DAT_0096bbb4 = pfVar5[0x11];
      DAT_0096bbb8 = pfVar5[0x12];
      DAT_0096bbe8 = pfVar5[0x13];
      DAT_0096bbc4 = pfVar5[0x17];
      uVar12 = mobyutil::MB_MoveAndCollide2
                         ((double)(float)(dVar27 * 0.699999988079071),(double)DAT_0096bbd0,lVar11,
                          pfVar16,&DAT_002cba54,DAT_0096bba0);
      if ((uVar12 & 2) != 0) {
        pfVar5[6] = 0.0;
        pfVar5[4] = (float)((double)pfVar5[4] * dVar23);
        pfVar5[5] = (float)((double)pfVar5[5] * dVar23);
      }
      FUN_005e7ed8((double)(float)((double)DAT_0071f408 * dVar24),pfVar16,pfVar16);
      if ((moby->field43_0x70 & 2U) != 0) {
        if ((uVar12 & 2) == 0) {
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 5.5));
          }
        }
        else {
          moby->state = '\x02';
        }
      }
      uVar22 = FUN_005e8338((double)pfVar5[4],(double)pfVar5[5]);
      mobyutil::OrganicDeltAngSpeed
                (uVar22,(double)DAT_0096bbbc,(double)DAT_0096bbc0,(double)DAT_0096bbc4,lVar11);
      pfVar5[0x10] = DAT_0096bbb0;
      pfVar5[0x11] = DAT_0096bbb4;
      pfVar5[0x12] = DAT_0096bbb8;
      pfVar5[0x13] = DAT_0096bbe8;
      pfVar5[0x17] = DAT_0096bbc4;
      uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
      moby->state = uVar15;
      goto LAB_002cd86c;
    }
    if (10 < bVar2) {
      fVar6 = (moby->pos).x;
      uVar8 = (int)fVar6 >> 0x1f;
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
      if (((iVar13 < 0x447f4001 && 0x3fffffff < iVar13) &&
          (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
          iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
             iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        mobyutil::MB_genericExplosion
                  (uVar22,uVar22,(double)(float)(dVar18 * dVar26),dVar18,0x4022000000000000,dVar25,
                   0x402e000000000000,lVar11,local_c0,lVar17,1,5,5,2,4);
        uVar21 = collproc::CollMobySphere(dVar18,lVar17);
        uVar22._0_4_ = (moby->pos).x;
        uVar22._4_4_ = (moby->pos).y;
        uVar20._0_4_ = (moby->pos).z;
        uVar20._4_4_ = (moby->pos).w;
        mobyutil::MB_DamageMobyList
                  (0x4008000000000000,dVar25,dVar25,lVar11,2,uVar22,uVar20,&DAT_00a14a00,uVar21,0,
                   0x10000);
        if (g_goldWeaponsArray.gloveOfDoom == '\0') {
          sound::PlayMobySound(0,0,moby);
        }
        else {
          sound::PlayMobySound(4,0,moby);
        }
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    moby->state = '\x02';
  }
  uVar15 = mobyupdate_helpers::M186_002cb930(lVar11);
  moby->state = uVar15;
LAB_002cd86c:
  fVar6 = (moby->pos).x;
  uVar8 = (int)fVar6 >> 0x1f;
  iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8;
  if (((0x447f4000 < iVar13 || iVar13 < 0x40000000) ||
      (fVar6 = (moby->pos).y, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, 0x447f4000 < iVar13 || iVar13 < 0x40000000)) ||
     ((fVar6 = (moby->pos).z, uVar8 = (int)fVar6 >> 0x1f,
      iVar13 = (uVar8 >> 1 ^ (uint)fVar6) - uVar8, iVar13 < 0x40000000 || (0x447f4000 < iVar13)))) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002cd95c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1860_002cd95c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1860_002cd95c(void)

{
  DAT_007bd50c = 0x10000;
  return;
}



//==== 002cd970  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1860(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1860 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1860(MobyInstance *moby)

{
  return moby;
}



//==== 002cd974  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_1862(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1862 */

void mobyupdate_unsorted::UpdateMoby_1862(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x748,1,0x748,1,0xb,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x747);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002cda6c  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1863(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1863 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1863(MobyInstance *moby)

{
  return moby;
}



//==== 002cda70  ns=mobyupdate_unsorted  size=0x130
// sig: undefined UpdateMoby_1873(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1873 */

void mobyupdate_unsorted::UpdateMoby_1873(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = mobyutil::MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyutil::MB_DistributeBoltsNearHero(moby);
    mobyutil::MB_SpawnDebris(moby,0x753,1,0x753,1,0xb,2);
    mobyutil::MB_SpawnDebris(moby,0x756,1,0x756,1,1,2);
    mobyutil::MB_SpawnReplacementMoby(moby,0x752);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002cdba0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1874(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1874 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1874(MobyInstance *moby)

{
  return moby;
}



//==== 002cdbb0  ns=mobyupdate_unsorted  size=0x148
// sig: undefined UpdateMoby_1876(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011aa78 mobyutil::MB_SpawnDebris; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound

/* Moby 1876 */

void mobyupdate_unsorted::UpdateMoby_1876(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)(int)moby;
  iVar3 = mobyutil::MB_damage(lVar2,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_SpawnBoltsFromCrate(lVar2,0,0xffffffffffffffff);
    mobyutil::MB_DistributeBoltsNearHero(lVar2);
    mobyutil::MB_SpawnDebrisMoby(0,lVar2,0x753,lVar2 + 0x10,lVar2 + 0x40,0,0);
    mobyutil::MB_SpawnDebris(lVar2,0x756,1,0x756,1,1,2);
    mobyutil::MB_SpawnReplacementMoby(lVar2,0x755);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002cdcf8  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1877(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1877 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1877(MobyInstance *moby)

{
  return moby;
}



//==== 002cdcfc  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1879(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1879 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1879(MobyInstance *moby)

{
  return moby;
}



//==== 002cdd18  ns=mobyupdate_helpers  size=0x1d8
// sig: undefined M188_002cdd18(void)
// callers(1): 002cdef0 mobyupdate_unsorted::UpdateMoby_188
// callees(5): 000efb38 mobyfunc::DeleteMoby; 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt; 00112e18 mobyutil::MB_UnlockItem; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M188_002cdd18(double param_1,MobyInstance *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = param_2->state;
  if (bVar1 == 0) {
    mobyutil::GetGroundZ(0x3fe0000000000000,&param_2->pos,0);
    (param_2->rotation).x = 1.5707964;
    (param_2->rotation).y = 3.1415927;
    fVar2 = CollOutput.ip.z;
    fVar3 = DAT_007bd530;
    param_2->state = '\x01';
    param_1 = (double)(fVar2 + fVar3);
    (param_2->pos).z = fVar2 + fVar3;
  }
  else if (bVar1 < 2) {
    param_1 = (double)fastfunc::FastWrapRot((param_2->rotation).z,DAT_010a22c0);
    (param_2->rotation).z = (float)param_1;
    if ((((worldUpdateTime == (worldUpdateTime / 10) * 10) && (g_heroHealth != 0)) &&
        (fVar3 = (param_2->pos).y - g_heroPosition.y, fVar2 = (param_2->pos).x - g_heroPosition.x,
        param_1 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3), param_1 < 1.0)) &&
       (param_1 = ABS((double)((param_2->pos).z - g_heroPosition.z)), param_1 < 2.0)) {
      param_1 = (double)mobyutil::MB_UnlockItem(0x1a,1);
      param_2->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    fVar3 = mobyutil::Delt(0.0,param_2->pClass->gScale * 0.02,&param_2->scale);
    param_1 = (double)fVar3;
    if (param_2->scale == 0.0) {
      param_1 = (double)mobyfunc::DeleteMoby(param_2);
    }
  }
  return param_1;
}



//==== 002cdef0  ns=mobyupdate_unsorted  size=0x60
// sig: undefined UpdateMoby_188(MobyInstance * moby)
// callers(0): 
// callees(1): 002cdd18 mobyupdate_helpers::M188_002cdd18

/* Moby 188 */

void mobyupdate_unsorted::UpdateMoby_188(MobyInstance *moby)

{
  if (*(int *)((int)moby->pVar + 4) == 0) {
    moby->setByGroup =
         (byte)((ulonglong)(LZCOUNT(g_downButtons & DAT_0096ad80) << 0x20) >> 0x25) ^ 1;
  }
  else {
    mobyupdate_helpers::M188_002cdd18();
  }
  return;
}



//==== 002cdf60  ns=mobyupdate_helpers  size=0xac
// sig: undefined M1880_002cdf60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1880_002cdf60(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x2cdf50);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar3 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = ZEXT416(0xffffffff);
  auVar5 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,auVar2);
  auVar4 = loadVectorLeftIndexed(8,0x2cdf50);
  auVar1 = ZEXT416(0xffffffff);
  auVar2 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar2 = vectorShiftLeftIntegerWord(auVar2,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar6 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar6 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar8 = loadVectorLeftIndexed(4,0x2cdf50);
  auVar7 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_007bd580 = 0x10000;
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar8 = vectorReciprocalEstimateFloatingPoint(auVar3);
  auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar3,auVar4);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar8,auVar9,auVar2);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar3,auVar4);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar2,auVar8,auVar5);
  auVar3 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar3,auVar4);
  auVar3 = vectorMultiplyAddFloatingPoint(auVar2,auVar3,auVar6);
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar3,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar7);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010a22c0 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,0x22c0,
                            0x10a0000);
  return;
}



//==== 002ce010  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1880(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1880 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1880(MobyInstance *moby)

{
  return moby;
}



//==== 002ce014  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1882(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1882 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1882(MobyInstance *moby)

{
  return moby;
}



//==== 002ce020  ns=Global  size=0x310
// sig: undefined FUN_002ce020(void)
// callers(1): 002cf460 mobyupdate_unsorted::UpdateMoby_1886
// callees(7): 000f31a8 mobyfunc::UpdateMobyTransform; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010c000 mobyutil::MB_CopyHeroLights; 00486828 FUN_00486828; 005cd098 libc::printf
// strings: 00655b98: 'Moby 1885 UID:%d could not find a moby to respawn at time %d!\n'

MobyInstance * FUN_002ce020(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  uint uVar6;
  MobyInstance *pMVar7;
  short sVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  MobyInstance *local_40 [2];
  
  if (param_1 == 0) {
    pMVar7 = (MobyInstance *)0x0;
  }
  else {
    pMVar7 = (MobyInstance *)0x0;
    iVar5 = *(int *)(param_1 + 0x78);
    local_40[0] = (MobyInstance *)0x0;
    iVar4 = mobyutil::MB_GetFirstMobyInGroup(local_40,*(int *)(iVar5 + 0x94),'\x01','\x01');
    if (iVar4 == 0) {
      *(char *)(iVar5 + 0x91) = *(char *)(iVar5 + 0x91) + '\x01';
      fStack00000044 = (f32)param_3;
      fStack0000004c = (f32)param_4;
      (local_40[0]->pos).y = fStack00000044;
      (local_40[0]->pos).w = fStack0000004c;
      fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
      fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
      (local_40[0]->pos).x = fStack00000040;
      (local_40[0]->pos).z = fStack00000048;
      (local_40[0]->pos).w = 0.0;
      local_40[0]->state = '\0';
      local_40[0]->setByGroup = '\0';
      local_40[0]->modeBits = *(MobyModeBit *)&local_40[0]->pClass->mode_bits;
      local_40[0]->scale = local_40[0]->pClass->gScale;
      local_40[0]->updateDistance = -1;
      local_40[0]->drawDistance = 0xff;
      local_40[0]->enabled = '\x01';
      if (local_40[0]->pClass->unk_ptr != 0) {
        local_40[0]->modeBits = local_40[0]->modeBits | HAS_GLOW;
      }
      if (local_40[0]->pClass->shadow != '\0') {
        local_40[0]->modeBits = local_40[0]->modeBits | DRAW_SHADOW;
      }
      local_40[0]->occlIndex = 0x7f80;
      local_40[0]->field44_0x71 = -1;
      local_40[0]->field45_0x72 = -1;
      local_40[0]->damage = -1;
      if (*(char *)(iVar5 + 0x93) != '\0') {
        local_40[0]->scale = local_40[0]->pClass->gScale * 0.1;
      }
      mobyutil::MB_SetAnimationNoBlend(local_40[0],0,0);
      iVar5 = FUN_00486828(local_40[0]);
      sVar8 = *(short *)(param_1 + 0xb4);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x94) = 0;
        *(undefined2 *)(iVar5 + 0x68) = 0;
        *(undefined4 *)(iVar5 + 0x6c) = 0;
      }
      sVar1._0_1_ = local_40[0]->field76_0xb4;
      sVar1._1_1_ = local_40[0]->field77_0xb5;
      if (sVar8 < sVar1) {
        local_40[0]->field76_0xb4 = (char)((ushort)sVar8 >> 8);
        local_40[0]->field77_0xb5 = (char)sVar8;
      }
      sVar8._0_1_ = local_40[0]->field76_0xb4;
      sVar8._1_1_ = local_40[0]->field77_0xb5;
      if (sVar8 < 1) {
        local_40[0]->field76_0xb4 = '\0';
        local_40[0]->field77_0xb5 = '\x01';
      }
      sVar8 = *(short *)(param_1 + 0xb4) - *(short *)&local_40[0]->field76_0xb4;
      *(short *)(param_1 + 0xb4) = sVar8;
      if (sVar8 < 0) {
        *(undefined2 *)(param_1 + 0xb4) = 1;
      }
      local_40[0]->collision = local_40[0]->pClass->collision;
      mobyutil::MB_CopyHeroLights(local_40[0]);
      mobyfunc::UpdateMobyTransform(local_40[0]);
      pMVar7 = local_40[0];
      uVar3 = mobyutil::MB_GetPvarsIfMobyHasThem(local_40[0]);
      uVar6 = (uint)uVar3;
      if (uVar6 != 0) {
        auVar9 = ZEXT416(0xfffffff0);
        auVar10 = loadVectorLeftIndexed(4,uVar3);
        auVar11 = loadVectorRightIndexed(0x14,uVar3);
        auVar9 = vectorShiftRightAlgebraicWord
                           (auVar10 | auVar11,
                            auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60);
        auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar3);
        *(undefined4 *)(uVar6 & 0xfffffffc) = uVar2;
        *(undefined4 *)(uVar6 + 0x30) = 0;
        *(undefined4 *)(uVar6 + 0x34) = 0;
      }
    }
    else {
      libc::printf("Moby 1885 UID:%d could not find a moby to respawn at time %d!\n",
                   *(undefined2 *)(param_1 + 0xb2),worldUpdateTime);
    }
  }
  return pMVar7;
}



//==== 002ce340  ns=mobyupdate_helpers  size=0x16c
// sig: undefined M1885_002ce340(void)
// callers(0): 
// callees(5): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M1885_002ce340(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  
  iVar3 = mobyutil::MB_damage(param_1,0xc30000,0);
  mobyutil::MB_HandleDamage(param_1,iVar3,param_2 + 0x20,0,local_20,0,0,4);
  if (local_20[0] < 2) goto LAB_002ce478;
  iVar2 = (int)param_2;
  fVar1 = *(float *)(iVar2 + 0x20) - *(float *)(iVar3 + 0x2c);
  *(float *)(iVar2 + 0x20) = fVar1;
  if (0.0 < fVar1) {
    *(undefined1 *)(iVar2 + 0x67) = 0x5a;
    mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
    goto LAB_002ce478;
  }
  if (Level == Gemlik) {
    if (4.0 <= ABS(g_heroPosition.z - 248.0)) goto LAB_002ce444;
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0x200,0xffffffffffffffff);
  }
  else {
LAB_002ce444:
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  param_1->state = '\x02';
  *(undefined1 *)(iVar2 + 0x67) = 0x78;
  mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
LAB_002ce478:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 002ce4ac  ns=mobyupdate_helpers  size=0xa8
// sig: undefined M1885_002ce4ac(void)
// callers(0): 
// callees(1): 00104214 mobyutil::MB_CountActiveMobysByGroup

ulonglong mobyupdate_helpers::M1885_002ce4ac(undefined8 param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = mobyutil::MB_CountActiveMobysByGroup(*(undefined4 *)(param_2 + 0x94),0xffffffffffffffff);
  uVar2 = 0;
  *(char *)(param_2 + 0x91) = cVar1;
  uVar4 = 0xffffffffffffffff;
  do {
    iVar3 = *(int *)((int)((uVar2 & 0xffffffff) << 2) + param_2 + 0xb0);
    uVar5 = uVar2;
    if (((iVar3 != 0) && (*(short *)(iVar3 + 0xa6) == 0x75e)) &&
       (*(char *)(iVar3 + 0x20) != -3 && *(char *)(iVar3 + 0x20) != -2)) {
      cVar1 = cVar1 + '\x01';
      *(char *)(param_2 + 0x91) = cVar1;
      uVar5 = uVar4;
    }
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
    uVar4 = uVar5;
  } while (iVar3 < 0x14);
  return uVar5;
}



//==== 002ce590  ns=mobyupdate_unsorted  size=0xc54
// sig: undefined UpdateMoby_1885(MobyInstance * moby)
// callers(0): 
// callees(21): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 000fe8c8 mobyutil::MB_randCircle; 000ffb70 mobyutil::GetGroundZ; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 00111ba0 mobyutil::MB_getTargetInArea; 0011a560 mobyutil::MB_SpawnDebrisMoby; 002cf208 mobyupdate_helpers::M1885_002cf208; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 1885 */

void mobyupdate_unsorted::UpdateMoby_1885(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  float fVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar16;
  Vec4 *pVVar17;
  byte bVar20;
  ulonglong uVar15;
  uint uVar18;
  undefined4 uVar19;
  int32_t iVar21;
  ulonglong uVar22;
  Cuboid *pCVar23;
  longlong lVar24;
  Cuboid *pCVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  MobyInstance *local_50;
  int local_4c;
  int local_48 [4];
  
  lVar14 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar28 = ZEXT48(pvVar5);
  iVar16 = mobyutil::MB_damage(lVar14,0xc30000,0);
  mobyutil::MB_HandleDamage(moby,iVar16,uVar28 + 0x20,0,local_48,0,0,4);
  if (1 < local_48[0]) {
    fVar1 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar16 + 0x2c);
    *(float *)((int)pvVar5 + 0x20) = fVar1;
    if (fVar1 <= 0.0) {
      if ((Level != Gemlik) || (4.0 <= ABS(g_heroPosition.z - 248.0))) {
        mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      }
      else {
        mobyutil::MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
      }
      moby->state = '\x02';
      *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
      mobyutil::MB_UpdateLightsTransition(lVar14,uVar28 + 0x60);
    }
    else {
      *(undefined1 *)((int)pvVar5 + 0x67) = 0x5a;
      mobyutil::MB_UpdateLightsTransition(lVar14,uVar28 + 0x60);
    }
  }
  lVar24 = uVar28 + 0x60;
  moby->damage = -1;
  mobyutil::MB_ColorDyingMoby(lVar14,lVar24);
  bVar20 = moby->state;
  if (bVar20 == 0) {
    local_50 = (MobyInstance *)0x0;
    while (iVar16 = mobyutil::MB_GetFirstMobyInGroup
                              (&local_50,*(int *)((int)pvVar5 + 0x94),'\0','\0'), iVar16 == 0) {
      mobyfunc::DeleteMoby(local_50);
    }
    moby->state = '\x01';
  }
  else if (bVar20 < 2) {
    iVar16 = mobyutil::MB_damage(lVar14,0xc30000,0);
    mobyutil::MB_HandleDamage(moby,iVar16,uVar28 + 0x20,0,&local_4c,0,0,4);
    if (1 < local_4c) {
      fVar1 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar16 + 0x2c);
      *(float *)((int)pvVar5 + 0x20) = fVar1;
      if (fVar1 <= 0.0) {
        if ((Level != Gemlik) || (4.0 <= ABS(g_heroPosition.z - 248.0))) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
        }
        else {
          mobyutil::MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
        }
        moby->state = '\x02';
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar14,lVar24);
      }
      else {
        *(undefined1 *)((int)pvVar5 + 0x67) = 0x5a;
        mobyutil::MB_UpdateLightsTransition(lVar14,lVar24);
      }
    }
    moby->damage = -1;
    mobyutil::MB_ColorDyingMoby(lVar14,lVar24);
    iVar16 = fastfunc::FastDecTimerS16(uVar28 + 0x8e);
    if (iVar16 != 0) {
      iVar16 = mobyutil::MB_randInt(7);
      if (iVar16 == 0) {
        iVar21 = 0;
        pVVar17 = (Vec4 *)0x0;
        lVar24 = ((LZCOUNT(-1 - *(int *)((int)pvVar5 + 0x84)) << 0x3a) >> 0x3f) + 1;
        if (*(int *)((int)pvVar5 + 0x88) != -1) {
          pVVar17 = Splines[*(int *)((int)pvVar5 + 0x88)]->points;
          iVar21 = Splines[*(int *)((int)pvVar5 + 0x88)]->cnt;
        }
        mobyutil::MB_getTargetInArea
                  ((double)*(float *)((int)pvVar5 + 0x80),lVar14,uVar28 + 0x100,lVar24,
                   uVar28 + 0x84 +
                   ((LZCOUNT(-1 - *(int *)((int)pvVar5 + 0x84)) << 0x3a) >> 0x3f & -(uVar28 + 0x84))
                   ,lVar24,pVVar17,iVar21);
      }
      else {
        iVar16 = *(int *)((int)pvVar5 + 0x140);
        if ((iVar16 == 0) || (*(char *)(iVar16 + 0x20) == -3 || *(char *)(iVar16 + 0x20) == -2)) {
          *(undefined4 *)((int)pvVar5 + 0x140) = 0;
          *(undefined4 *)((int)pvVar5 + 0x144) = 2;
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x100) = *(undefined4 *)(iVar16 + 0x10);
          *(undefined4 *)((int)pvVar5 + 0x104) = *(undefined4 *)(iVar16 + 0x14);
          *(undefined4 *)((int)pvVar5 + 0x108) = *(undefined4 *)(iVar16 + 0x18);
          *(undefined4 *)((int)pvVar5 + 0x10c) = *(undefined4 *)(iVar16 + 0x1c);
        }
      }
      if (*(int *)((int)pvVar5 + 0x144) != 2) {
        bVar20 = mobyutil::MB_CountActiveMobysByGroup
                           (*(undefined4 *)((int)pvVar5 + 0x94),0xffffffffffffffff);
        uVar15 = 0;
        *(byte *)((int)pvVar5 + 0x91) = bVar20;
        iVar16 = 0;
        uVar22 = uVar28;
        uVar26 = 0xffffffffffffffff;
        do {
          iVar6 = *(int *)((int)uVar22 + 0xb0);
          uVar27 = uVar15;
          if (((iVar6 != 0) && (*(short *)(iVar6 + 0xa6) == 0x75e)) &&
             (*(char *)(iVar6 + 0x20) != -3 && *(char *)(iVar6 + 0x20) != -2)) {
            bVar20 = bVar20 + 1;
            *(byte *)((int)pvVar5 + 0x91) = bVar20;
            uVar27 = uVar26;
          }
          uVar15 = uVar15 + 1;
          uVar22 = uVar22 + 4;
          uVar26 = uVar27;
        } while ((int)uVar15 < 0x14);
        if (((bVar20 < *(byte *)((int)pvVar5 + 0x90)) && ((int)uVar27 != -1)) &&
           ((bVar20 == 0 ||
            (((int)(((uint)((int)DAT_00a10718 >> 0x1f) >> 1 ^ DAT_00a10718) -
                   ((int)DAT_00a10718 >> 0x1f)) < 0x3f59999a &&
             ((int)(((uint)((int)DAT_00a10714 >> 0x1f) >> 1 ^ DAT_00a10714) -
                   ((int)DAT_00a10714 >> 0x1f)) < 0x3f59999a)))))) {
          pCVar25 = (Cuboid *)0x0;
          if (*(char *)((int)pvVar5 + 0x92) == '\0') {
            uVar18 = mobyutil::MB_randRange(0,3);
            do {
              iVar6 = *(int *)((int)pvVar5 +
                              (uVar18 + (((int)uVar18 >> 2) +
                                        (uint)((int)uVar18 < 0 && (uVar18 & 3) != 0)) * -4) * 4 +
                              0xa0);
              if (iVar6 != -1) {
                pCVar25 = Cuboids + iVar6;
                if (pCVar25 != (Cuboid *)0x0) {
                  local_90 = (pCVar25->pos).x;
                  local_8c = (pCVar25->pos).y;
                  local_88 = (pCVar25->pos).z;
                  local_84 = (pCVar25->pos).w;
                  goto LAB_002ceda0;
                }
                break;
              }
              iVar16 = iVar16 + 1;
              uVar18 = uVar18 + 1;
            } while (iVar16 < 4);
            dVar30 = (double)*(float *)((int)pvVar5 + 0x80);
            if ((double)*(float *)((int)pvVar5 + 0x80) - 3.0 < 0.0) {
              dVar30 = 3.0;
            }
            mobyutil::MB_randCircle(dVar30,&local_90);
            local_90 = local_90 + (moby->pos).x;
            local_8c = local_8c + (moby->pos).y;
            local_88 = local_88 + (moby->pos).z;
          }
          else {
            fVar1 = 100000.0;
            uVar22 = uVar28;
            pCVar25 = (Cuboid *)0x0;
            do {
              iVar6 = *(int *)((int)uVar22 + 0xa0);
              if (iVar6 != -1) {
                pCVar23 = Cuboids + iVar6;
                fVar2 = g_heroPosition.y - (pCVar23->pos).y;
                fVar3 = g_heroPosition.x - (pCVar23->pos).x;
                fVar7 = g_heroPosition.z - (pCVar23->pos).z;
                fVar2 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2);
                if (fVar2 < fVar1) {
                  fVar1 = fVar2;
                  pCVar25 = pCVar23;
                }
              }
              iVar16 = iVar16 + 1;
              uVar22 = uVar22 + 4;
            } while (iVar16 < 4);
            if (pCVar25 == (Cuboid *)0x0) {
              fVar1 = (moby->pos).x;
              fVar2 = (moby->pos).y;
              fVar3 = (moby->pos).z;
              local_84 = *(float *)((int)pvVar5 + 0x10c);
              fVar12 = (*(float *)((int)pvVar5 + 0x100) - fVar1) * 0.5;
              fVar10 = (*(float *)((int)pvVar5 + 0x104) - fVar2) * 0.5;
              fVar7 = (*(float *)((int)pvVar5 + 0x108) - fVar3) * 0.5;
              uVar18 = (int)*(uint *)((int)pvVar5 + 0x80) >> 0x1f;
              if ((0x40400000 < (int)((uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x80)) - uVar18)) &&
                 (fVar4 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar10 * fVar10), 3.0 < fVar4)) {
                fVar4 = 3.0 / fVar4;
                fVar12 = fVar12 * fVar4;
                fVar10 = fVar10 * fVar4;
                fVar7 = fVar7 * fVar4;
              }
              fVar13 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar10 * fVar10);
              fVar4 = fVar12;
              fVar9 = fVar7;
              fVar11 = fVar10;
              if ((fVar13 < 3.0) && (fVar4 = 0.0, fVar9 = fVar4, fVar11 = fVar4, fVar13 != 0.0)) {
                fVar13 = 3.0 / fVar13;
                fVar4 = fVar12 * fVar13;
                fVar9 = fVar7 * fVar13;
                fVar11 = fVar10 * fVar13;
              }
              local_90 = fVar4 + fVar1;
              local_8c = fVar11 + fVar2;
              local_88 = fVar9 + fVar3;
            }
            else {
              local_90 = (pCVar25->pos).x;
              local_8c = (pCVar25->pos).y;
              local_88 = (pCVar25->pos).z;
              local_84 = (pCVar25->pos).w;
            }
          }
LAB_002ceda0:
          if (pCVar25 != (Cuboid *)0x0) {
            dVar35 = -1.0;
            dVar33 = 1.0;
            dVar30 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
            fVar1 = (pCVar25->matrix).v0.x;
            fVar2 = (pCVar25->matrix).v0.y;
            fVar3 = (pCVar25->matrix).v0.z;
            dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar33);
            local_90 = (float)((double)(pCVar25->matrix).v1.x * dVar33 +
                              (double)(float)((double)fVar1 * dVar30 + (double)local_90));
            local_8c = (float)((double)(pCVar25->matrix).v1.y * dVar33 +
                              (double)(float)((double)fVar2 * dVar30 + (double)local_8c));
            local_88 = (float)((double)(pCVar25->matrix).v1.z * dVar33 +
                              (double)(float)((double)fVar3 * dVar30 + (double)local_88));
          }
          dVar33 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_90,0);
          dVar35 = 0.0;
          dVar30 = (double)local_88;
          if (dVar33 != 0.0) {
            dVar30 = dVar33;
          }
          fVar7 = local_8c - (moby->pos).y;
          fVar3 = local_90 - (moby->pos).x;
          fVar2 = (float)(dVar30 - (double)(moby->pos).z);
          dVar33 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar7 * fVar7);
          dVar34 = (double)(float)((double)(mobyutil::g_FrameTime * 0.6) * dVar33);
          fVar1 = (float)(dVar34 / dVar33);
          dVar30 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar30 = (double)(fVar3 * fVar1);
          }
          dVar31 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar31 = (double)(fVar7 * fVar1);
          }
          dVar32 = dVar35;
          if (0.0 - dVar33 < 0.0) {
            dVar32 = (double)(fVar2 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar30 = (double)(fVar3 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar31 = (double)(fVar7 * fVar1);
          }
          if (dVar33 - 0.0 < 0.0) {
            dVar32 = (double)(fVar2 * fVar1);
          }
          fVar2 = (float)dVar30;
          fVar3 = (float)dVar31;
          fVar7 = (float)dVar32;
          mobyfunc::GetBonePosition(lVar14,0,local_70);
          local_54 = local_84;
          dVar33 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3);
          fVar1 = (float)(0.05000000074505806 / dVar33);
          dVar30 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar30 = (double)(fVar2 * fVar1);
          }
          dVar31 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          dVar32 = dVar35;
          if (dVar35 - dVar33 < 0.0) {
            dVar32 = (double)(fVar7 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar30 = (double)(fVar2 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          if (dVar33 - dVar35 < 0.0) {
            dVar32 = (double)(fVar7 * fVar1);
          }
          local_60 = (float)dVar30;
          local_5c = (float)dVar31;
          local_58 = (float)dVar32;
          mobyutil::MB_RandomizeVector(0.025,&local_60);
          mobyutil::MB_computeLobVelocity(dVar34,(double)(DAT_0071f418 * -9.8),local_70,&local_90);
          uVar19 = mobyupdate_helpers::M1885_002cf208
                             (lVar14,local_70,local_80,*(undefined1 *)((int)pvVar5 + 0x93),
                              uVar27 & 0xff);
          auVar39 = ZEXT416(0xffffffff);
          auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar37 = loadVectorLeftIndexed(0x8c,uVar28);
          auVar38 = loadVectorRightIndexed(0x9c,uVar28);
          auVar39 = ZEXT416(0xfffffff0);
          auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
          *(undefined4 *)((int)pvVar5 + (int)(uVar27 << 2) + 0xb0) = uVar19;
          auVar37 = vectorShiftRightAlgebraicWord
                              (auVar37 | auVar38,
                               auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
          auVar39 = loadVectorLeftIndexed(0x10,0x2ce554);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = vectorConvertFromSignedFixedPointWord(auVar37,0);
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar37,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar39,0x8e,uVar28);
          *(undefined2 *)((int)pvVar5 + 0x8e) = uVar8;
          *(char *)((int)pvVar5 + 0x91) = *(char *)((int)pvVar5 + 0x91) + '\x01';
        }
      }
    }
  }
  else if (bVar20 < 3) {
    uVar36 = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4020000000000000,0x4010000000000000,0x4032000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar14,uVar28 + 0x70,0,1,0xffffffffffffffff,0x1e,8,0x14);
    lVar29 = lVar14 + 0x10;
    lVar24 = lVar14 + 0x40;
    mobyutil::MB_SpawnDebrisMoby(uVar36,lVar14,0x6c5,lVar29,lVar24,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar36,lVar14,0x6c6,lVar29,lVar24,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar36,lVar14,0x6c7,lVar29,lVar24,0,0);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002cf1e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1886_002cf1e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1886_002cf1e4(void)

{
  DAT_007bd5f0 = 0x10000;
  return;
}



//==== 002cf208  ns=mobyupdate_helpers  size=0x198
// sig: undefined M1885_002cf208(void)
// callers(1): 002ce590 mobyupdate_unsorted::UpdateMoby_1885
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance *
mobyupdate_helpers::M1885_002cf208
          (undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined1 param_4,undefined1 param_5
          )

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  pMVar3 = mobyfunc::CreateMoby(SPAWNER_EGG);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[4] = param_1;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    dVar6 = -3.1415927410125732;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar5);
    (pMVar3->rotation).y = (float)dVar4;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    puVar1[5] = 0;
    auVar9 = loadVectorLeftIndexed(8,0x2cf1f8);
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0x18,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 6) = uVar2;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x40;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->scale = pMVar3->pClass->gScale * 0.3;
    *(undefined1 *)((int)puVar1 + 0x1b) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a) = param_4;
    *(undefined1 *)(puVar1 + 7) = param_5;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 002cf3a0  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1886_002cf3a0(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M1886_002cf3a0(MobyInstance *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (((iVar1 != 0) && (*(short *)(iVar1 + 0xa6) == 0x75d)) &&
     (*(char *)(iVar1 + 0x20) != -3 && *(char *)(iVar1 + 0x20) != -2)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x78) + (uint)*(byte *)(param_2 + 0x1c) * 4 + 0xb0) = 0;
  }
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 002cf460  ns=mobyupdate_unsorted  size=0x11b0
// sig: undefined UpdateMoby_1886(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000ffb70 mobyutil::GetGroundZ; 00106150 mobyutil::MB_RegisterLameShadow; 0010de78 mobyutil::MB_WrapRot; 0015d12c sound::PlayMobySound; 002ce020 FUN_002ce020; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00500608 fastfunc::FastVecNormalize

/* Moby 1886 */

void mobyupdate_unsorted::UpdateMoby_1886(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float *pfVar7;
  MobyInstance *pMVar8;
  MobyClass *pMVar9;
  f32 fVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  longlong lVar18;
  longlong lVar19;
  int iVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r28;
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
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x160;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
  puVar13[0x2e] = in_LR;
  puVar13[0x2b] = in_f31;
  puVar13[0x2a] = unaff_r31;
  puVar13[0x29] = unaff_r30;
  pfVar7 = (float *)moby->pVar;
  puVar13[0x28] = unaff_r29;
  puVar13[0x27] = unaff_r28;
  fastfunc::FastDecTimerU8((int)pfVar7 + 0x1b);
  fVar34 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  *(float *)(puVar13 + 0xe) = fVar34;
  fVar4 = (moby->pos).z;
  *(float *)((int)puVar13 + 0x74) = fVar3;
  fVar5 = (moby->pos).w;
  bVar2 = moby->state;
  *(float *)(puVar13 + 0xf) = fVar4;
  *(f32 *)((int)puVar13 + 0x7c) = fVar5;
  if (bVar2 == 0) {
    moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
    fVar34 = fVar34 + *pfVar7;
    (moby->pos).x = fVar34;
    fVar3 = fVar3 + pfVar7[1];
    (moby->pos).y = fVar3;
    fVar4 = fVar4 + pfVar7[2];
    (moby->pos).z = fVar4;
    fVar6 = *pfVar7;
    dVar33 = 0.0;
    fVar14 = SQRT(pfVar7[2] * pfVar7[2] + fVar6 * fVar6 + pfVar7[1] * pfVar7[1]);
    if (fVar14 == 0.0) {
      *(float *)(puVar13 + 0x10) = fVar6;
      *(float *)((int)puVar13 + 0x84) = pfVar7[1];
      *(float *)(puVar13 + 0x11) = pfVar7[2];
      fVar6 = pfVar7[3];
      dVar29 = dVar33;
      dVar32 = dVar33;
      dVar30 = dVar33;
    }
    else {
      fVar14 = 0.2 / fVar14;
      dVar29 = (double)(fVar6 * fVar14);
      *(float *)(puVar13 + 0x10) = fVar6 * fVar14;
      dVar32 = (double)(pfVar7[1] * fVar14);
      *(float *)((int)puVar13 + 0x84) = pfVar7[1] * fVar14;
      dVar30 = (double)(pfVar7[2] * fVar14);
      *(float *)(puVar13 + 0x11) = pfVar7[2] * fVar14;
      fVar6 = pfVar7[3];
    }
    *(float *)((int)puVar13 + 0x8c) = fVar6;
    moby->collision = (ushort *)0x0;
    fVar6 = pfVar7[4];
    *(float *)(puVar13 + 0x10) = (float)(dVar29 + (double)fVar34);
    *(float *)((int)puVar13 + 0x84) = (float)(dVar32 + (double)fVar3);
    *(float *)(puVar13 + 0x11) = (float)(dVar30 + (double)fVar4);
    *(undefined4 *)((int)fVar6 + 0x94) = 0;
    iVar20 = collproc::CollLine(uVar17 - 0xf0,uVar17 - 0xe0,4,lVar18,0);
    fVar34 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    if (iVar20 != 0) {
      fVar14 = CollOutput.ip.y - *(float *)((int)puVar13 + 0x84);
      fVar15 = CollOutput.ip.x - *(float *)(puVar13 + 0x10);
      fVar16 = CollOutput.ip.z - *(float *)(puVar13 + 0x11);
      *(float *)(puVar13 + 0x10) = fVar15;
      *(float *)((int)puVar13 + 0x84) = fVar14;
      fVar6 = CollOutput.ip.w;
      *(float *)(puVar13 + 0x11) = fVar16;
      *(float *)((int)puVar13 + 0x8c) = fVar6;
      pMVar8 = CollOutput.pMoby;
      bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
      dVar32 = (double)SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
      fVar6 = (float)(0.2150000035762787 / dVar32);
      dVar29 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar29 = (double)(fVar15 * fVar6);
      }
      dVar30 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar30 = (double)(fVar14 * fVar6);
      }
      dVar28 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar28 = (double)(fVar16 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar29 = (double)(fVar15 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar30 = (double)(fVar14 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar28 = (double)(fVar16 * fVar6);
      }
      *(float *)(puVar13 + 0x10) = (float)dVar29;
      *(float *)((int)puVar13 + 0x84) = (float)dVar30;
      *(float *)(puVar13 + 0x11) = (float)dVar28;
      (moby->pos).x = (float)((double)fVar34 + dVar29);
      (moby->pos).y = (float)((double)fVar3 + dVar30);
      (moby->pos).z = (float)((double)fVar4 + dVar28);
      if (bVar1) {
        fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
        fVar3 = CollOutput.normal.z;
        dVar32 = ABS((double)CollOutput.normal.z);
        fVar34 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                      CollOutput.normal.y * CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x15) = fVar34;
        *(float *)((int)puVar13 + 0xac) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0xac) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x15));
        if ((double)*(float *)((int)puVar13 + 0xac) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar33;
        if (dVar33 < dVar29) {
          lVar22 = uVar17 - 0x150;
          lVar25 = uVar17 - 0x50;
          lVar27 = uVar17 - 0x40;
          lVar26 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x11c) = fVar4;
          *(float *)((int)puVar13 + 0x114) = fVar4;
          *(float *)(puVar13 + 0x23) = fVar4;
          *(float *)(puVar13 + 0x22) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar6;
          *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar4;
          *(float *)((int)puVar13 + 0x11c) = *(float *)((int)puVar13 + 0x11c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x100) * fVar4 * fVar4;
            iVar20 = (int)lVar25;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar27 = uVar17 - 0x50;
          pfVar23 = (float *)&DAT_007358e0;
          lVar22 = lVar19;
          lVar25 = lVar27;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x110) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar25 = 2;
          lVar22 = lVar19;
          dVar29 = dVar33;
          do {
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x110)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar32 = (double)((float)(dVar29 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar32 < 0.6981316804885864) && (iVar20 = collproc::CollHotspot(), iVar20 == -1)) {
          fVar34 = pfVar7[1] * 0.5;
          fVar3 = *pfVar7 * 0.5;
          fVar4 = pfVar7[2] * 0.5;
          *pfVar7 = fVar3;
          pfVar7[1] = fVar34;
          pfVar7[2] = fVar4;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar34 * fVar34) < 0.025) {
            moby->state = '\x01';
          }
        }
      }
      else if (pMVar8->oClass == SPAWNER_EGG) {
        dVar29 = (double)mobyutil::MB_randRangeFloat(0.9,1.1);
        pfVar7[2] = (float)((double)pfVar7[2] * dVar29);
      }
      else {
        fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
        fVar3 = CollOutput.normal.z;
        dVar32 = ABS((double)CollOutput.normal.z);
        fVar34 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                      CollOutput.normal.y * CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x14) = fVar34;
        *(float *)((int)puVar13 + 0xa4) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0xa4) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x14));
        if ((double)*(float *)((int)puVar13 + 0xa4) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar33;
        if (dVar33 < dVar29) {
          lVar22 = uVar17 - 0x150;
          lVar25 = uVar17 - 0x70;
          lVar27 = uVar17 - 0x60;
          lVar26 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xfc) = fVar4;
          *(float *)((int)puVar13 + 0xf4) = fVar4;
          *(float *)(puVar13 + 0x1f) = fVar4;
          *(float *)(puVar13 + 0x1e) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar6;
          *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar4;
          *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xe0) * fVar4 * fVar4;
            iVar20 = (int)lVar25;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar27 = uVar17 - 0x70;
          pfVar23 = (float *)&DAT_007358e0;
          lVar22 = lVar19;
          lVar25 = lVar27;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xf0) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar25 = 2;
          lVar22 = lVar19;
          dVar29 = dVar33;
          do {
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xf0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar32 = (double)((float)(dVar29 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar32 < 0.6981316804885864) && (iVar20 = collproc::CollHotspot(), iVar20 == -1)) {
          *pfVar7 = *pfVar7 * 1.2;
          pfVar7[1] = pfVar7[1] * 1.2;
          pfVar7[2] = pfVar7[2] * 1.2;
        }
      }
      if (*(char *)((int)pfVar7 + 0x1b) == '\0') {
        sound::PlayMobySound(0,0,moby);
        *(undefined1 *)((int)pfVar7 + 0x1b) = 0xc;
      }
    }
    iVar20 = collproc::CollSphere(0x3fc99999a0000000,lVar18 + 0x10,&DAT_002cf40c,4,lVar18);
    if (iVar20 != 0) {
      fVar4 = CollOutput.ip.y - CollOutput.push.y;
      dVar32 = (double)CollOutput.push.x;
      fVar3 = (float)((double)CollOutput.ip.x - dVar32);
      fVar6 = CollOutput.ip.z - CollOutput.push.z;
      *(float *)(puVar13 + 0x10) = fVar3;
      *(float *)((int)puVar13 + 0x84) = fVar4;
      fVar34 = CollOutput.ip.w;
      *(float *)(puVar13 + 0x11) = fVar6;
      *(float *)((int)puVar13 + 0x8c) = fVar34;
      pMVar8 = CollOutput.pMoby;
      bVar1 = CollOutput.pMoby == (MobyInstance *)0x0;
      dVar30 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
      fVar34 = (float)(0.014999999664723873 / dVar30);
      dVar29 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar29 = (double)(fVar3 * fVar34);
      }
      dVar28 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar28 = (double)(fVar4 * fVar34);
      }
      dVar31 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar31 = (double)(fVar6 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar29 = (double)(fVar3 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar28 = (double)(fVar4 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar31 = (double)(fVar6 * fVar34);
      }
      *(float *)(puVar13 + 0x10) = (float)dVar29;
      *(float *)((int)puVar13 + 0x84) = (float)dVar28;
      *(float *)(puVar13 + 0x11) = (float)dVar31;
      (moby->pos).x = (float)(dVar32 + dVar29);
      (moby->pos).y = (float)((double)CollOutput.push.y + dVar28);
      (moby->pos).z = (float)((double)CollOutput.push.z + dVar31);
      (moby->pos).w = CollOutput.push.w;
      if (bVar1) {
        fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
        fVar3 = CollOutput.normal.z;
        dVar32 = ABS((double)CollOutput.normal.z);
        fVar34 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                      CollOutput.normal.y * CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x13) = fVar34;
        *(float *)((int)puVar13 + 0x9c) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0x9c) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x13));
        if ((double)*(float *)((int)puVar13 + 0x9c) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar33 < dVar29) {
          lVar18 = uVar17 - 0x150;
          lVar22 = uVar17 - 0x90;
          lVar25 = uVar17 - 0x80;
          lVar27 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xdc) = fVar4;
          *(float *)((int)puVar13 + 0xd4) = fVar4;
          *(float *)(puVar13 + 0x1b) = fVar4;
          *(float *)(puVar13 + 0x1a) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar6;
          *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
          *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xd0) = *(float *)((int)lVar18 + 0xc0) * fVar4 * fVar4;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar17 - 0x90;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar22 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0xd0) = *(float *)((int)lVar18 + 0xd0) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar20 = (int)lVar19;
            iVar21 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xd0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar33 < 0.6981316804885864) && (iVar20 = collproc::CollHotspot(), iVar20 == -1)) {
          fVar34 = pfVar7[1] * 0.5;
          fVar3 = *pfVar7 * 0.5;
          fVar4 = pfVar7[2] * 0.5;
          *pfVar7 = fVar3;
          pfVar7[1] = fVar34;
          pfVar7[2] = fVar4;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar34 * fVar34) < 0.025) {
            moby->state = '\x01';
          }
        }
      }
      else if (pMVar8->oClass == SPAWNER_EGG) {
        dVar33 = (double)mobyutil::MB_randRangeFloat(0.9,1.1);
        pfVar7[2] = (float)((double)pfVar7[2] * dVar33);
      }
      else {
        fastfunc::FastVecNormalize(pfVar7,pfVar7,0xa10980);
        fVar3 = CollOutput.normal.z;
        dVar32 = ABS((double)CollOutput.normal.z);
        fVar34 = SQRT(CollOutput.normal.x * CollOutput.normal.x +
                      CollOutput.normal.y * CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x12) = fVar34;
        *(float *)((int)puVar13 + 0x94) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0x94) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x12));
        if ((double)*(float *)((int)puVar13 + 0x94) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar33 < dVar29) {
          lVar18 = uVar17 - 0x150;
          lVar22 = uVar17 - 0xb0;
          lVar25 = uVar17 - 0xa0;
          lVar27 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xbc) = fVar4;
          *(float *)((int)puVar13 + 0xb4) = fVar4;
          *(float *)(puVar13 + 0x17) = fVar4;
          *(float *)(puVar13 + 0x16) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar6;
          *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar4;
          *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xb0) = *(float *)((int)lVar18 + 0xa0) * fVar4 * fVar4;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar17 - 0xb0;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar22 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0xb0) = *(float *)((int)lVar18 + 0xb0) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar20 = (int)lVar19;
            iVar21 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xb0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar33 < 0.6981316804885864) && (iVar20 = collproc::CollHotspot(), iVar20 == -1)) {
          *pfVar7 = *pfVar7 * 1.2;
          pfVar7[1] = pfVar7[1] * 1.2;
          pfVar7[2] = pfVar7[2] * 1.2;
        }
      }
      if (*(char *)((int)pfVar7 + 0x1b) == '\0') {
        sound::PlayMobySound(0,0,moby);
        *(undefined1 *)((int)pfVar7 + 0x1b) = 0xc;
      }
    }
    iVar21 = 0;
    iVar20 = *(int *)((int)pfVar7[4] + 0x78);
    do {
      pMVar8 = *(MobyInstance **)(iVar20 + 0xb0);
      if (((pMVar8 != (MobyInstance *)0x0 && pMVar8 != moby) && (pMVar8->oClass == SPAWNER_EGG)) &&
         (pMVar8->state != 0xfd && pMVar8->state != 0xfe)) {
        fVar34 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar4 = fVar34 - (pMVar8->pos).y;
        fVar6 = fVar3 - (pMVar8->pos).x;
        fVar14 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
        if (fVar14 < 1.8) {
          fVar14 = (1.8 - fVar14) * (DAT_0071f408 * -0.5 + 1.0);
          (moby->pos).x = fVar6 * fVar14 + fVar3;
          (moby->pos).y = fVar4 * fVar14 + fVar34;
        }
      }
      iVar21 = iVar21 + 1;
      iVar20 = iVar20 + 4;
    } while (iVar21 < 0x14);
    iVar20 = fastfunc::FastDecTimerS16(pfVar7 + 6);
    if (iVar20 != 0) {
      moby->state = '\x02';
    }
    fVar34 = mobyutil::MB_WrapRot(*pfVar7);
    (moby->rotation).x = fVar34;
    fVar34 = mobyutil::MB_WrapRot(pfVar7[1]);
    pMVar9 = moby->pClass;
    (moby->rotation).y = fVar34;
    moby->collision = pMVar9->collision;
    *(undefined4 *)((int)pfVar7[4] + 0x94) = *(undefined4 *)(*(int *)((int)pfVar7[4] + 0x24) + 0x10)
    ;
    pfVar7[2] = -(DAT_0071f418 * 9.8 - pfVar7[2]);
    (moby->rotation).x = DAT_0071f408 * 0.01 + (moby->rotation).x;
    (moby->rotation).y = DAT_0071f408 * 0.02 + (moby->rotation).y;
  }
  else if (bVar2 < 2) {
    dVar33 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
    fVar34 = pfVar7[4];
    (moby->pos).z = (float)(dVar33 + 0.20000000298023224);
    *(f32 *)(puVar13 + 8) = (moby->pos).x;
    fVar5 = (moby->pos).y;
    *(float *)(puVar13 + 9) = (float)(dVar33 + 0.20000000298023224);
    (moby->pos).w = 0.0;
    *(f32 *)((int)puVar13 + 0x44) = fVar5;
    *(undefined4 *)((int)puVar13 + 0x4c) = 0;
    fVar34 = (float)FUN_002ce020(fVar34,0,puVar13[8],puVar13[9]);
    pfVar7[5] = fVar34;
    moby->state = '\x02';
  }
  else if (bVar2 < 3) {
    fVar3 = pfVar7[5];
    fVar34 = -(DAT_0071f408 * 0.05 * moby->scale - moby->scale);
    moby->scale = fVar34;
    if ((fVar3 != 0.0) && (*(char *)((int)pfVar7 + 0x1a) != '\0')) {
      *(float *)((int)fVar3 + 0x2c) =
           DAT_0071f408 * 0.05 *
           (*(float *)(*(int *)((int)fVar3 + 0x24) + 0x24) - *(float *)((int)fVar3 + 0x2c)) +
           *(float *)((int)fVar3 + 0x2c);
      fVar34 = moby->scale;
    }
    if (fVar34 < DAT_0071f408 * 0.05 * moby->pClass->gScale) {
      fVar34 = pfVar7[5];
      moby->scale = 0.0001;
      if ((((fVar34 == 0.0) ||
           (*(char *)((int)fVar34 + 0x20) == -3 || *(char *)((int)fVar34 + 0x20) == -2)) ||
          (*(char *)((int)pfVar7 + 0x1a) == '\0')) ||
         (*(float *)(*(int *)((int)fVar34 + 0x24) + 0x24) - 0.01 <= *(float *)((int)fVar34 + 0x2c)))
      {
        fVar34 = pfVar7[4];
        if (((fVar34 != 0.0) && (*(short *)((int)fVar34 + 0xa6) == 0x75d)) &&
           (*(char *)((int)fVar34 + 0x20) != -3 && *(char *)((int)fVar34 + 0x20) != -2)) {
          *(undefined4 *)(*(int *)((int)fVar34 + 0x78) + (uint)*(byte *)(pfVar7 + 7) * 4 + 0xb0) = 0
          ;
        }
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  mobyutil::MB_RegisterLameShadow((moby->scale * 0.3) / moby->pClass->gScale,moby);
  fVar5 = (moby->pos).z;
  fVar10 = (moby->pos).y;
  uVar11 = (int)fVar5 >> 0x1f;
  fVar34 = 5.0;
  uVar12 = (int)fVar10 >> 0x1f;
  iVar20 = (uVar11 >> 1 ^ (uint)fVar5) - uVar11;
  if ((iVar20 < 0x40a00000) || (0x43fa0000 < iVar20)) {
    fVar34 = pfVar7[4];
    if ((fVar34 != 0.0) &&
       ((*(short *)((int)fVar34 + 0xa6) == 0x75d &&
        (*(char *)((int)fVar34 + 0x20) != -3 && *(char *)((int)fVar34 + 0x20) != -2)))) {
      *(undefined4 *)(*(int *)((int)fVar34 + 0x78) + (uint)*(byte *)(pfVar7 + 7) * 4 + 0xb0) = 0;
    }
    mobyfunc::DeleteMoby(moby);
  }
  else {
    fVar5 = (moby->pos).x;
    uVar11 = (int)fVar5 >> 0x1f;
    fVar3 = (moby->pos).x;
    if ((int)((uVar11 >> 1 ^ (uint)fVar5) - uVar11) < 0x40a00000) {
      (moby->pos).x = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).x = 1018.0;
    }
    fVar3 = (moby->pos).y;
    if ((int)((uVar12 >> 1 ^ (uint)fVar10) - uVar12) < 0x40a00000) {
      (moby->pos).y = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).y = 1018.0;
    }
    fVar3 = (moby->pos).z;
    if (iVar20 < 0x40a00000) {
      (moby->pos).z = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).z = 1018.0;
    }
  }
  return;
}



