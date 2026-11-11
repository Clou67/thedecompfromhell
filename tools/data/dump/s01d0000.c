//==== 001d058c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1110_001d058c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1110_001d058c(void)

{
  DAT_007643c8 = 0x10000;
  return;
}



//==== 001d05f0  ns=mobyupdate_unsorted  size=0x928
// sig: undefined UpdateMoby_1110(MobyInstance * moby)
// callers(0): 
// callees(15): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 001042ec mobyutil::MB_SetStateByGroup; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot
// strings: 001d05e8: '?333`'

/* Moby 1110 */

void mobyupdate_unsorted::UpdateMoby_1110(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MOBY_OCLASSES MVar8;
  void *pvVar9;
  u16 *puVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 auStack_d0 [48];
  float local_a0;
  float local_9c;
  float local_98;
  int local_60;
  int local_50 [8];
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar9 = moby->pVar;
  uVar15 = ZEXT48(pvVar9);
  if (pvVar9 == (void *)0x0) {
    return;
  }
  dVar22 = 8.0;
  mobyutil::MB_getTarget(0x4020000000000000,moby,&DAT_001d05a0,&local_a0);
  if ((moby->enabled != '\0') &&
     (fVar5 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar1 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x15';
  }
  iVar14 = mobyutil::MB_damage(moby,0x230000,0);
  mobyutil::MB_HandleDamage(moby,iVar14,uVar15 + 0x20,0,local_50,0,0,4);
  bVar2 = moby->state;
  uVar3 = moby->animationId;
  fVar4 = (moby->pos).x;
  if ((((1 < local_50[0]) && (iVar14 != 0)) &&
      (sVar7 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6), sVar7 != 0x365 && sVar7 != 0x456)) &&
     (sVar7 != 0x367)) {
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
               0x401c000000000000,moby,local_100,0,0,0xffffffffffffffff,3,3,5);
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar9 + 0x60) = fVar4;
      *(f32 *)((int)pvVar9 + 100) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x68) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x6c) = (moby->pos).w;
      puVar10 = moby->pClass->collision;
      moby->state = '\x01';
      moby->collision = puVar10;
    }
    else {
      auVar24 = ZEXT416(0xffffffff);
      auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
      auVar24 = loadVectorLeftIndexed(0x1c,0x1d05a0);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar26 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
      auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar26,auVar25);
      auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
      auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x78,uVar15)
      ;
      *(undefined4 *)((int)pvVar9 + 0x78U & 0xfffffffc) = uVar11;
      dVar16 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 6.2831855);
      (moby->rotation).z = (float)dVar16;
      iVar14 = *(int *)((int)pvVar9 + 0x38);
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      if ((((iVar14 != 0) &&
           (fVar12 = fVar6 - *(float *)(iVar14 + 0x14), fVar1 = fVar5 - *(float *)(iVar14 + 0x10),
           SQRT(fVar1 * fVar1 + fVar12 * fVar12) < 20.0)) &&
          (ABS((moby->pos).z - *(float *)(iVar14 + 0x18)) < 3.0)) ||
         ((local_60 != 0 &&
          (fVar6 = fVar6 - local_9c, fVar5 = fVar5 - local_a0, fVar1 = (moby->pos).z - local_98,
          (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6) < dVar22)))) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        *(undefined4 *)((int)pvVar9 + 0x70) = 0;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x78,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x78U & 0xfffffffc) = uVar11;
        moby->setByGroup = '\x01';
        auVar24 = loadVectorLeftIndexed(0x2c,0x1d05a0);
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar26);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar11;
        moby->state = '\x03';
        if (*(int *)((int)pvVar9 + 0x74) != -1) {
          mobyutil::MB_SetStateByGroup(*(int *)((int)pvVar9 + 0x74),2);
        }
        moby->state = '\x02';
      }
    }
  }
  else {
    if (bVar2 < 3) {
      if (uVar3 != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,10);
        uVar3 = moby->animationId;
      }
      moby->state = '\x03';
    }
    else if (3 < bVar2) goto LAB_001d0ed0;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == '\x01' && uVar3 != '\x02')) {
      mobyutil::MB_SetAnimation(moby,2,0,10);
    }
    fVar5 = DAT_0071f418 * 30.0 + *(float *)((int)pvVar9 + 0x70);
    *(float *)((int)pvVar9 + 0x70) = fVar5;
    if (mobyutil::g_FrameTime * 6.0 < fVar5) {
      *(float *)((int)pvVar9 + 0x70) = mobyutil::g_FrameTime * 6.0;
    }
    if (moby->setByGroup == '\x01') {
      (moby->pos).z = DAT_0071f408 * 0.1 + (moby->pos).z;
      iVar14 = fastfunc::FastDecTimerS32(uVar15 + 0x7c);
      if (iVar14 != 0) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x2c,0x1d05a0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                            uVar15);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar11;
        moby->setByGroup = '\x02';
      }
    }
    else if (moby->setByGroup == '\x02') {
      (moby->pos).z = -(DAT_0071f408 * 0.1 - (moby->pos).z);
      iVar14 = fastfunc::FastDecTimerS32(uVar15 + 0x7c);
      if (iVar14 != 0) {
        moby->setByGroup = '\0';
      }
    }
    dVar16 = (double)(moby->pos).y;
    fVar5 = (float)((double)local_9c - dVar16);
    dVar18 = (double)(moby->pos).x;
    fVar6 = (float)((double)local_a0 - dVar18);
    dVar20 = (double)(moby->pos).z;
    fVar1 = (float)((double)local_98 - dVar20);
    dVar21 = 0.0;
    fVar12 = SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5);
    fVar13 = *(float *)((int)pvVar9 + 0x70) / fVar12;
    dVar22 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar22 = (double)(fVar6 * fVar13);
    }
    dVar17 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar17 = (double)(fVar5 * fVar13);
    }
    dVar19 = dVar21;
    if (0.0 - fVar12 < 0.0) {
      dVar19 = (double)(fVar1 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar22 = (double)(fVar6 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar17 = (double)(fVar5 * fVar13);
    }
    if (fVar12 - 0.0 < 0.0) {
      dVar19 = (double)(fVar1 * fVar13);
    }
    fVar5 = (float)(dVar18 + dVar22);
    fVar6 = (float)(dVar16 + dVar17);
    fVar1 = (float)(dVar20 + dVar19);
    (moby->pos).x = fVar5;
    (moby->pos).y = fVar6;
    (moby->pos).z = fVar1;
    fVar6 = fVar6 - *(float *)((int)pvVar9 + 100);
    fVar5 = fVar5 - *(float *)((int)pvVar9 + 0x60);
    fVar1 = fVar1 - *(float *)((int)pvVar9 + 0x68);
    if (64.0 < SQRT(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    uVar23 = 0x3ff0000000000000;
    mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_d0,moby,0x10001);
    iVar14 = collproc::CollMobySphere(local_e0);
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar1 = (moby->pos).z;
    if (((iVar14 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
       ((MVar8 = (CollOutput.pMoby)->oClass, MVar8 != MINE_0456 && MVar8 != 0x363 &&
        (((MVar8 != MINE_0458 && (MVar8 != 0x365)) &&
         (MVar8 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))))) {
      mobyutil::MB_genericExplosion
                (dVar21,dVar21,0x4000000000000000,uVar23,0x4010000000000000,uVar23,
                 0x401c000000000000,moby,local_f0,0,0xffffffffffffffff,2,3,3,5);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    iVar14 = collproc::CollSphere(local_e0);
    if (iVar14 != 0) {
      fVar6 = CollOutput.push.y - fVar6;
      fVar1 = CollOutput.push.z - (fVar1 + 0.55);
      (moby->pos).x = (moby->pos).x + (CollOutput.push.x - fVar5);
      (moby->pos).y = (moby->pos).y + fVar6;
      (moby->pos).z = (moby->pos).z + fVar1;
    }
    iVar14 = fastfunc::FastDecTimerS32(uVar15 + 0x78);
    if (iVar14 != 0) {
      mobyutil::MB_genericExplosion
                (dVar21,dVar21,0x4000000000000000,uVar23,0x4010000000000000,uVar23,
                 0x401c000000000000,moby,local_f0,0,2,&DAT_001d05a0,3,3,5);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
LAB_001d0ed0:
  mobyutil::MB_RegisterLameShadow((float)0x3f333333,moby);
  return;
}



//==== 001d0f18  ns=mobyupdate_helpers  size=0xc
// sig: undefined M1111_001d0f18(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M1111_001d0f18(void)

{
  return (double)DAT_00ef1a90;
}



//==== 001d0f24  ns=Global  size=0xc
// sig: undefined FUN_001d0f24(void)
// callers(6): 00284c20 mobyupdate_helpers::M1455_00284c20; 00284d00 mobyupdate_helpers::M1455_00284d00; 00284e60 mobyupdate_unsorted::UpdateMoby_1455; 004bb840 mobyupdate_helpers::M990_004bb840; 004bb8b8 mobyupdate_helpers::M990_004bb8b8; 004bb948 mobyupdate_unsorted::UpdateMoby_930
// callees(0): 

void FUN_001d0f24(double param_1)

{
  DAT_00ef1a94 = (float)param_1;
  return;
}



//==== 001d0f60  ns=mobyupdate_helpers  size=0xcfc
// sig: undefined M1111_Pokitaru_Ocean(void)
// callers(0): 
// callees(14): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00074604 draw::DrawMeshSet; 004d5fe4 idol_draw::DrawDepth; 004d6634 FUN_004d6634; 004d6704 FUN_004d6704; 004d676c FUN_004d676c; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0; 005d0140 libc::memset

void mobyupdate_helpers::M1111_Pokitaru_Ocean(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  RenderingStep *pRVar13;
  float fVar14;
  PlayerState PVar15;
  undefined8 uVar16;
  int iVar19;
  longlong lVar17;
  undefined4 uVar20;
  undefined8 uVar18;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar24;
  ulonglong unaff_r23;
  ulonglong uVar25;
  int iVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar36;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar37;
  ulonglong in_f23;
  double dVar38;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar17 = uVar28 - 0x280;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar28;
  puVar8[0x52] = in_LR;
  puVar8[0x3e] = in_f14;
  puVar8[0x3f] = in_f15;
  puVar8[0x40] = in_f16;
  puVar8[0x41] = in_f17;
  puVar8[0x42] = in_f18;
  puVar8[0x43] = in_f19;
  puVar8[0x44] = in_f20;
  puVar8[0x45] = in_f21;
  puVar8[0x46] = in_f22;
  puVar8[0x47] = in_f23;
  puVar8[0x48] = in_f24;
  puVar8[0x49] = in_f25;
  puVar8[0x4a] = in_f26;
  puVar8[0x4b] = in_f27;
  puVar8[0x4c] = in_f28;
  puVar8[0x4d] = in_f29;
  puVar8[0x4e] = in_f30;
  puVar8[0x4f] = in_f31;
  puVar8[0x37] = unaff_r25;
  puVar8[0x3b] = unaff_r29;
  puVar8[0x3d] = unaff_r31;
  puVar6 = *(undefined4 **)(param_1 + 0x78);
  puVar8[0x33] = unaff_r21;
  fVar1 = ViewContext.fogFarIntensity;
  *(float *)(puVar8 + 0x2c) = ViewContext.fogNearIntensity;
  PVar15 = g_heroState;
  *(float *)((int)puVar8 + 0x15c) = fVar1;
  puVar8[0x3c] = unaff_r30;
  puVar8[0x3a] = unaff_r28;
  puVar8[0x39] = unaff_r27;
  puVar8[0x38] = unaff_r26;
  puVar8[0x36] = unaff_r24;
  puVar8[0x35] = unaff_r23;
  puVar8[0x34] = unaff_r22;
  puVar8[0x32] = unaff_r20;
  puVar8[0x31] = unaff_r19;
  puVar8[0x30] = unaff_r18;
  puVar8[0x2f] = unaff_r17;
  puVar8[0x2e] = unaff_r16;
  puVar8[0x2d] = unaff_r15;
  pRVar13 = DL_Pass;
  if ((PVar15 != VISIBOMB_CONTROL) && (DAT_0071eed0 == '\0')) {
    ViewContext.fogNearIntensity = 255.0;
    ViewContext.fogFarIntensity = 249.9;
  }
  libc::memset(DL_Pass + 1,0,0x90);
  libc::memset(&pRVar13[8].command,0xff,0x48);
  pRVar13[9].field7_0x10 = 0;
  pRVar13[9].callback = (undefined *)0x0;
  uVar16 = idol_draw::PackCmd(0,1,0,1,0x32);
  idol_draw::DrawDepth(pRVar13,uVar16);
  uVar16 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  FUN_004d6634(pRVar13,uVar16);
  uVar16 = FUN_00502f08(0,0,0,0,0,0);
  FUN_004d6704(uVar16,uVar28 - 0x140,uVar28 - 0x13c);
  iVar27 = EffectTexHeaders;
  iVar19 = draw::GetEffectTex(0x16);
  FUN_004d676c(pRVar13,0,iVar27 + iVar19 * 0x24,*(undefined4 *)(puVar8 + 0x28),
               *(undefined4 *)((int)puVar8 + 0x144));
  fVar14 = GameCamera.posZ;
  fVar5 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  dVar36 = 0.0;
  dVar48 = 1.0;
  fVar1 = (float)puVar6[10];
  fVar2 = GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
          GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y;
  fVar3 = GameCamera.orientMtx.forward.w + 1.0;
  dVar34 = dVar36;
  dVar35 = dVar36;
  if (SQRT(fVar2) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar2);
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    dVar35 = (double)(GameCamera.orientMtx.forward.x * fVar9);
    dVar34 = (double)(GameCamera.orientMtx.forward.y * fVar9);
  }
  fVar2 = GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
          GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y;
  dVar31 = dVar36;
  dVar33 = dVar36;
  if (SQRT(fVar2) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar2);
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    dVar33 = (double)(GameCamera.orientMtx.right.x * fVar9);
    dVar31 = (double)(GameCamera.orientMtx.right.y * fVar9);
  }
  *(undefined4 *)(puVar8 + 0xf) = 0;
  *(float *)((int)puVar8 + 0x7c) = fVar3;
  fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar34 * dVar34)) + 0.0);
  lVar22 = uVar28 - 0x210;
  lVar29 = 4;
  fVar9 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)) + 0.0);
  dVar38 = (double)(float)(dVar34 * (double)(-75.0 / fVar2));
  dVar32 = (double)(float)(dVar35 * (double)(-75.0 / fVar2));
  dVar46 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar46 = dVar38;
  }
  dVar37 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar37 = dVar32;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar46 = dVar38;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar37 = dVar32;
  }
  dVar32 = (double)(float)(dVar34 * (double)(fVar1 / fVar2));
  dVar35 = (double)(float)(dVar35 * (double)(fVar1 / fVar2));
  dVar45 = (double)(float)(dVar31 * (double)(-87.0 / fVar9));
  dVar38 = (double)(float)(dVar33 * (double)(-87.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar45;
  }
  dVar39 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar39 = dVar38;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar45;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar39 = dVar38;
  }
  dVar38 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar38 = dVar32;
  }
  *(float *)((int)puVar8 + 0x74) = (float)(dVar46 + dVar34);
  *(float *)(puVar8 + 0xe) = (float)(dVar37 + dVar39);
  *(undefined4 *)(puVar8 + 0x13) = 0;
  *(float *)((int)puVar8 + 0x9c) = fVar3;
  if (fVar2 - 0.0 < 0.0) {
    dVar38 = dVar32;
  }
  dVar45 = (double)(float)(dVar31 * (double)(87.0 / fVar9));
  dVar32 = (double)(float)(dVar33 * (double)(87.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar45;
  }
  dVar39 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar39 = dVar32;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar45;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar39 = dVar32;
  }
  dVar32 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar32 = dVar35;
  }
  *(float *)((int)puVar8 + 0x94) = (float)(dVar46 + dVar34);
  *(float *)(puVar8 + 0x12) = (float)(dVar37 + dVar39);
  *(undefined4 *)(puVar8 + 0x11) = 0;
  *(float *)((int)puVar8 + 0x8c) = fVar3;
  if (fVar2 - 0.0 < 0.0) {
    dVar32 = dVar35;
  }
  dVar46 = (double)(float)(dVar31 * (double)(-750.0 / fVar9));
  dVar35 = (double)(float)(dVar33 * (double)(-750.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar46;
  }
  dVar37 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar37 = dVar35;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar46;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar37 = dVar35;
  }
  *(float *)((int)puVar8 + 0x84) = (float)(dVar38 + dVar34);
  *(float *)(puVar8 + 0x10) = (float)(dVar32 + dVar37);
  *(undefined4 *)(puVar8 + 0x15) = 0;
  *(float *)((int)puVar8 + 0xac) = fVar3;
  dVar35 = (double)(float)(dVar31 * (double)(750.0 / fVar9));
  dVar31 = (double)(float)(dVar33 * (double)(750.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar35;
  }
  dVar33 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar33 = dVar31;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar35;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar33 = dVar31;
  }
  *(float *)((int)puVar8 + 0xa4) = (float)(dVar38 + dVar34);
  *(float *)(puVar8 + 0x14) = (float)(dVar32 + dVar33);
  do {
    pfVar23 = (float *)lVar22;
    *pfVar23 = *pfVar23 + fVar4;
    pfVar23[1] = pfVar23[1] + fVar5;
    pfVar23[2] = pfVar23[2] + fVar14;
    lVar22 = lVar22 + 0x10;
    *(float *)((int)lVar17 + 0x78) = DAT_00ef1a90;
    lVar17 = lVar17 + 0x10;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  dVar39 = (double)*(float *)(puVar8 + 0xe);
  uVar25 = 0;
  *(float *)(puVar8 + 0x2a) = *(float *)(puVar8 + 0x10);
  dVar40 = (double)*(float *)((int)puVar8 + 0x74);
  *(float *)((int)puVar8 + 0x14c) = *(float *)((int)puVar8 + 0x84);
  dVar41 = (double)*(float *)(puVar8 + 0xf);
  dVar34 = (double)*(float *)(puVar8 + 0x14);
  *(float *)(puVar8 + 0x29) = *(float *)(puVar8 + 0x11);
  dVar42 = (double)*(float *)(puVar8 + 0x12);
  dVar35 = (double)*(float *)((int)puVar8 + 0xa4);
  dVar43 = (double)*(float *)((int)puVar8 + 0x94);
  dVar31 = (double)*(float *)(puVar8 + 0x15);
  dVar44 = (double)*(float *)(puVar8 + 0x13);
  dVar47 = 0.10000000149011612;
  dVar33 = (double)((float)((double)*(float *)(puVar8 + 0x10) - dVar39) * 0.1);
  *(undefined4 *)(puVar8 + 0x2b) = *(undefined4 *)((int)puVar8 + 0x8c);
  dVar46 = (double)((float)((double)*(float *)((int)puVar8 + 0x84) - dVar40) * 0.1);
  *(undefined4 *)((int)puVar8 + 0x154) = *(undefined4 *)((int)puVar8 + 0xac);
  dVar32 = (double)((float)((double)*(float *)(puVar8 + 0x11) - dVar41) * 0.1);
  dVar38 = (double)((float)(dVar34 - dVar42) * 0.1);
  dVar37 = (double)((float)(dVar35 - dVar43) * 0.1);
  dVar45 = (double)((float)(dVar31 - dVar44) * 0.1);
  do {
    *(float *)((int)puVar8 + 0x164) = (float)dVar31;
    dVar31 = (double)fastfunc::FastIntToDouble(uVar25);
    dVar30 = (double)fastfunc::FastIntToDouble(uVar25);
    uVar20 = fastfunc::FastLerpColor((double)(float)(dVar30 * dVar47),*puVar6,puVar6[1]);
    iVar27 = (int)((uVar25 & 0xffffffff) << 2);
    iVar19 = (int)((uVar25 & 0xffffffff) << 3);
    iVar21 = (int)uVar25 * 0xc;
    *(undefined4 *)(&DAT_00ef1d98 + iVar27) = uVar20;
    iVar26 = (int)uVar25 + 2;
    *(undefined4 *)(&DAT_00ef22a0 + iVar19) = 0;
    *(undefined4 *)(&DAT_00ef22a4 + iVar19) = 0;
    *(undefined4 *)(&DAT_00ef22a8 + iVar19) = 0;
    uVar25 = (ulonglong)iVar26;
    *(float *)(&DAT_00ef1a98 + iVar21) = (float)(dVar31 * dVar33 + dVar39);
    *(float *)(&DAT_00ef1a9c + iVar21) = (float)(dVar31 * dVar46 + dVar40);
    *(float *)(&DAT_00ef1aa0 + iVar21) = (float)(dVar31 * dVar32 + dVar41);
    *(undefined4 *)(&DAT_00ef1d9c + iVar27) = uVar20;
    *(undefined4 *)(&DAT_00ef22ac + iVar19) = 0;
    *(float *)(&DAT_00ef1aa4 + iVar21) = (float)(dVar31 * dVar38 + dVar42);
    *(float *)(&DAT_00ef1aa8 + iVar21) = (float)(dVar31 * dVar37 + dVar43);
    *(float *)(&DAT_00ef1aac + iVar21) = (float)(dVar31 * dVar45 + dVar44);
    dVar31 = (double)*(float *)((int)puVar8 + 0x164);
  } while (iVar26 < 0xc);
  draw::DrawMeshSet(0xc,&DAT_00ef1a98,&DAT_00ef1d98,&DAT_00ef22a0,9);
  uVar25 = draw::GetEffectTex(0x16);
  puVar8[0x25] = uVar25;
  uVar25 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar8[0x26] = uVar25;
  uVar25 = FUN_00502f08(0,0,0,0,0,0);
  puVar8[0x24] = uVar25;
  uVar25 = idol_draw::PackCmd(0,1,0,1,0x80);
  fVar3 = GameCamera.posZ;
  fVar1 = (float)puVar6[5];
  fVar2 = GameCamera.posZ - (float)puVar6[9];
  puVar8[0x27] = uVar25;
  if (((fVar1 < fVar2) && (g_heroState != VISIBOMB_CONTROL)) && (DAT_0071eed0 == '\0')) {
    *(undefined4 *)(puVar8 + 0x20) = 0;
    *(undefined4 *)((int)puVar8 + 0x104) = 0;
    *(undefined4 *)(puVar8 + 0x21) = 0;
    uVar20 = puVar6[1];
    *(undefined4 *)((int)puVar8 + 0x10c) = 0;
    *(undefined4 *)(puVar8 + 0x22) = 0;
    *(undefined4 *)((int)puVar8 + 0x114) = 0;
    *(undefined4 *)(puVar8 + 0x23) = 0;
    *(undefined4 *)(puVar8 + 0x1e) = uVar20;
    *(undefined4 *)((int)puVar8 + 0x11c) = 0;
    uVar7 = puVar6[2];
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar8 + 0x2a);
    *(undefined4 *)((int)puVar8 + 0xb4) = *(undefined4 *)((int)puVar8 + 0x14c);
    *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar8 + 0x29);
    *(undefined4 *)((int)puVar8 + 0xbc) = *(undefined4 *)(puVar8 + 0x2b);
    *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar8 + 0x2a);
    *(undefined4 *)((int)puVar8 + 0xc4) = *(undefined4 *)((int)puVar8 + 0x14c);
    *(undefined4 *)(puVar8 + 0x19) = *(undefined4 *)(puVar8 + 0x29);
    *(undefined4 *)((int)puVar8 + 0xcc) = *(undefined4 *)(puVar8 + 0x2b);
    fVar1 = (float)puVar6[9];
    *(float *)(puVar8 + 0x1a) = (float)dVar34;
    *(float *)((int)puVar8 + 0xd4) = (float)dVar35;
    *(float *)(puVar8 + 0x1b) = (float)dVar31;
    *(undefined4 *)((int)puVar8 + 0xdc) = *(undefined4 *)((int)puVar8 + 0x154);
    *(undefined4 *)((int)puVar8 + 0xf4) = uVar7;
    *(float *)(puVar8 + 0x1c) = (float)dVar34;
    *(float *)((int)puVar8 + 0xe4) = (float)dVar35;
    *(float *)(puVar8 + 0x1d) = (float)dVar31;
    *(undefined4 *)((int)puVar8 + 0xec) = *(undefined4 *)((int)puVar8 + 0x154);
    *(undefined4 *)(puVar8 + 0x1f) = uVar20;
    *(float *)(puVar8 + 0x19) = fVar3 - fVar1;
    *(undefined4 *)((int)puVar8 + 0xfc) = uVar7;
    iVar27 = EffectTexHeaders;
    *(float *)(puVar8 + 0x1d) = fVar3 - (float)puVar6[9];
    draw::FastDrawQuad(uVar28 - 0x1d0,0,0,iVar27,9);
  }
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  idol_draw::DrawDepth(pRVar13,uVar16);
  uVar16 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  FUN_004d6634(pRVar13,uVar16);
  uVar16 = FUN_00502f08(0,0,0,0,0,0);
  FUN_004d6704(uVar16,uVar28 - 0x140,uVar28 - 0x13c);
  uVar20 = puVar6[4];
  dVar34 = (double)(float)(dVar48 - (double)((GameCamera.posZ - DAT_00ef1a90) / (float)puVar6[0xb]))
  ;
  if (dVar48 - dVar34 < 0.0) {
    dVar34 = dVar48;
  }
  if (dVar36 <= dVar34) {
    uVar16 = fastfunc::FastLerpColor(dVar34,0,puVar6[3]);
    uVar18 = fastfunc::FastLerpColor(dVar34,0,uVar20);
    iVar27 = 0;
    do {
      iVar19 = EffectTexHeaders;
      iVar21 = draw::GetEffectTex(puVar6[7] + iVar27 + 0x28);
      FUN_004d676c(pRVar13,0,iVar19 + iVar21 * 0x24,*(undefined4 *)(puVar8 + 0x28),
                   *(undefined4 *)((int)puVar8 + 0x144));
      dVar34 = (double)(float)puVar6[6];
      dVar36 = -2.0;
      dVar35 = 2.0;
      dVar31 = (double)(float)(dVar34 * -2.0);
      if (dVar31 < (double)(float)(dVar34 * 2.0)) {
        do {
          dVar33 = (double)(float)(dVar34 * dVar36);
          uVar28 = 0;
          if (dVar33 < (double)(float)(dVar34 * dVar35)) {
            uVar28 = 0;
            dVar46 = (double)(float)(dVar31 + dVar48);
            do {
              fVar14 = DAT_00ef1a90;
              fVar4 = (float)(&DAT_007643ec)[iVar27];
              iVar19 = (int)((uVar28 & 0xffffffff) << 3);
              fVar5 = (float)(&DAT_00ef1a80)[iVar27 * 2];
              dVar32 = (double)GameCamera.posX;
              dVar38 = (double)GameCamera.posY;
              fVar2 = (float)(&DAT_00ef1a84)[iVar27 * 2];
              iVar12 = (int)uVar28;
              iVar21 = iVar12 * 0xc;
              fVar1 = (float)((double)(float)(dVar33 + dVar32) + dVar48);
              iVar11 = (int)((uVar28 + 2 & 0xffffffff) << 3);
              iVar26 = (int)(uVar28 + 2) * 0xc;
              iVar24 = iVar12 + 4;
              *(float *)(&DAT_00ef24a0 + iVar19) =
                   (float)(dVar33 / (double)(float)(dVar34 * dVar35)) * fVar4 + fVar5;
              fVar3 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e98 + iVar21) = fVar1;
              *(float *)(&DAT_00ef1e9c + iVar21) = (float)(dVar38 + dVar46);
              *(float *)(&DAT_00ef1ea0 + iVar21) = fVar14;
              iVar21 = (int)((uVar28 + 1 & 0xffffffff) << 3);
              iVar10 = (int)(uVar28 + 1) * 0xc;
              *(float *)(&DAT_00ef24a4 + iVar19) =
                   (float)(dVar31 / (double)(float)((double)fVar3 * dVar35)) * fVar4 + fVar2;
              *(float *)(&DAT_00ef24a0 + iVar21) =
                   (float)(dVar33 / (double)(float)((double)(float)puVar6[6] * dVar35)) * fVar4 +
                   fVar5;
              fVar3 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e98 + iVar10) = fVar1;
              iVar19 = (int)((uVar28 + 3 & 0xffffffff) << 3);
              *(float *)(&DAT_00ef24a4 + iVar21) =
                   ((float)((double)fVar3 + dVar31) / (float)((double)fVar3 * dVar35)) * fVar4 +
                   fVar2;
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1ea0 + iVar10) = fVar14;
              *(float *)(&DAT_00ef1e9c + iVar10) =
                   (float)((double)(float)((double)(float)((double)fVar1 + dVar31) + dVar38) +
                          dVar48);
              iVar21 = (int)(uVar28 + 3) * 0xc;
              *(float *)(&DAT_00ef24a0 + iVar11) =
                   ((float)(dVar33 + (double)(float)puVar6[6]) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar5;
              *(float *)(&DAT_00ef24a4 + iVar11) =
                   (float)(dVar31 / (double)(float)((double)(float)puVar6[6] * dVar35)) * fVar4 +
                   fVar2;
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e9c + iVar26) = (float)(dVar38 + dVar46);
              *(float *)(&DAT_00ef1ea0 + iVar26) = fVar14;
              *(float *)(&DAT_00ef1e98 + iVar26) =
                   (float)((double)(float)((double)(float)(dVar33 + (double)fVar1) + dVar32) +
                          dVar48);
              *(float *)(&DAT_00ef24a0 + iVar19) =
                   ((float)(dVar33 + (double)(float)puVar6[6]) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar5;
              *(float *)(&DAT_00ef24a4 + iVar19) =
                   ((float)((double)(float)puVar6[6] + dVar31) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar2;
              *(float *)(&DAT_00ef1e98 + iVar21) =
                   (float)((double)(float)((double)(float)(dVar33 + (double)(float)puVar6[6]) +
                                          dVar32) + dVar48);
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1ea0 + iVar21) = fVar14;
              *(float *)(&DAT_00ef1e9c + iVar21) =
                   (float)((double)(float)((double)(float)((double)fVar1 + dVar31) + dVar38) +
                          dVar48);
              if (iVar12 < iVar24) {
                lVar22 = (uVar28 & 0x3fffffff) << 2;
                lVar17 = uVar28 * 0xc;
                do {
                  dVar34 = (double)(SQRT((float)((double)*(float *)(&DAT_00ef1e98 + (int)lVar17) -
                                                dVar32) *
                                         (float)((double)*(float *)(&DAT_00ef1e98 + (int)lVar17) -
                                                dVar32) +
                                         (float)((double)*(float *)(&DAT_00ef1e9c + (int)lVar17) -
                                                dVar38) *
                                         (float)((double)*(float *)(&DAT_00ef1e9c + (int)lVar17) -
                                                dVar38)) /
                                   (float)((double)(float)puVar6[6] * dVar35));
                  if (dVar48 - dVar34 < 0.0) {
                    dVar34 = dVar48;
                  }
                  uVar20 = fastfunc::FastLerpColor(dVar34,uVar16,uVar18);
                  iVar19 = (int)lVar22;
                  dVar32 = (double)GameCamera.posX;
                  uVar28 = uVar28 + 1;
                  dVar38 = (double)GameCamera.posY;
                  lVar22 = lVar22 + 4;
                  lVar17 = lVar17 + 0xc;
                  *(undefined4 *)(&DAT_00ef2198 + iVar19) = uVar20;
                } while ((int)uVar28 < iVar24);
              }
              dVar34 = (double)(float)puVar6[6];
              uVar28 = (ulonglong)iVar24;
              dVar33 = (double)(float)(dVar33 + dVar34);
            } while (dVar33 < (double)(float)(dVar34 * dVar35));
          }
          draw::DrawMeshSet(uVar28,&DAT_00ef1e98,&DAT_00ef2198,&DAT_00ef24a0,9);
          dVar34 = (double)(float)puVar6[6];
          dVar31 = (double)(float)(dVar31 + dVar34);
        } while (dVar31 < (double)(float)(dVar34 * dVar35));
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < 2);
  }
  ViewContext.fogNearIntensity = *(float *)(puVar8 + 0x2c);
  ViewContext.fogFarIntensity = *(float *)((int)puVar8 + 0x15c);
  return;
}



//==== 001d1c90  ns=mobyupdate_unsorted  size=0x4dc
// sig: undefined UpdateMoby_1111(MobyInstance * moby)
// callers(0): 
// callees(3): 0006d720 RegisterFuncForMoby; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1111 */

void mobyupdate_unsorted::UpdateMoby_1111(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  fVar4 = DAT_00ef26b4;
  fVar1 = DAT_00ef26b0;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->updateDistance = -1;
    moby->state = '\x01';
    DAT_00ef1a80 = 0;
    DAT_00ef1a84 = 0;
    DAT_00ef1a88 = 0;
    DAT_00ef1a8c = 0;
    DAT_00ef26b0 = GameCamera.posX;
    DAT_00ef26b4 = GameCamera.posY;
    DAT_00ef26b8 = GameCamera.posZ;
    DAT_00ef26bc[0] = GameCamera.field8_0x14c[0];
    DAT_00ef26bc[1] = GameCamera.field8_0x14c[1];
    DAT_00ef26bc[2] = GameCamera.field8_0x14c[2];
    DAT_00ef26bc[3] = GameCamera.field8_0x14c[3];
    DAT_00ef1a94 = *(float *)((int)pvVar2 + 0x14);
  }
  else {
    iVar8 = ((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
            ((int)GameCamera.posZ >> 0x1f);
    if (0x43340000 < iVar8) {
      DAT_0073a960 = 0x28;
      DAT_0073a961 = 0x40;
      DAT_0073a962 = 0x90;
      DAT_0073a963 = 0x40;
      WaterFog.r = '(';
      WaterFog.g = '@';
      WaterFog.b = 0x90;
    }
    DAT_00ef26b0 = GameCamera.posX;
    DAT_00ef26b4 = GameCamera.posY;
    DAT_00ef26b8 = GameCamera.posZ;
    dVar19 = (double)(GameCamera.posX - fVar1);
    DAT_00ef26bc = GameCamera.field8_0x14c;
    dVar20 = (double)(GameCamera.posY - fVar4);
    uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
    if ((int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3) < iVar8) {
      pfVar11 = (float *)&DAT_00ef1a80;
      iVar8 = 0;
      dVar17 = 2.0;
      pfVar12 = (float *)&DAT_00ef1a84;
      dVar18 = 5.0;
      dVar21 = 1.0;
      pfVar10 = (float *)&DAT_007643ec;
      dVar22 = -1.0;
      pfVar13 = pfVar11;
      pfVar9 = pfVar12;
      do {
        dVar16 = (double)((float)((double)*pfVar10 * dVar17) /
                         (float)((double)*(float *)((int)pvVar2 + 0x18) * dVar18));
        dVar15 = (double)(float)(dVar16 * dVar19);
        dVar16 = (double)(float)(dVar16 * dVar20);
        if (dVar15 != dVar21) {
          fastfunc::FastDoubleToInt(dVar15);
          dVar14 = (double)fastfunc::FastIntToDouble();
          dVar15 = (double)(float)(dVar15 - dVar14);
        }
        if (dVar16 != dVar21) {
          fastfunc::FastDoubleToInt(dVar16);
          dVar14 = (double)fastfunc::FastIntToDouble();
          dVar16 = (double)(float)(dVar16 - dVar14);
        }
        fVar1 = *pfVar9;
        *pfVar13 = (float)((double)*pfVar13 + dVar15);
        *pfVar9 = (float)((double)fVar1 + dVar16);
        dVar15 = (double)*pfVar13;
        uVar3 = (int)*pfVar13 >> 0x1f;
        if (0x3f800000 < (int)((uVar3 >> 1 ^ (uint)*pfVar13) - uVar3)) {
          dVar16 = dVar15 - dVar21;
          dVar15 = (double)(float)dVar16;
          *pfVar13 = (float)dVar16;
        }
        if (dVar15 < dVar22) {
          *pfVar13 = (float)(dVar15 + dVar21);
        }
        dVar15 = (double)*pfVar9;
        uVar3 = (int)*pfVar9 >> 0x1f;
        if (0x3f800000 < (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
          dVar16 = dVar15 - dVar21;
          dVar15 = (double)(float)dVar16;
          *pfVar9 = (float)dVar16;
        }
        if (dVar15 < dVar22) {
          *pfVar9 = (float)(dVar15 + dVar21);
        }
        iVar8 = iVar8 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 2;
        pfVar9 = pfVar9 + 2;
      } while (iVar8 < 2);
      dVar19 = (double)fastfunc::FastIntToDouble(worldUpdateTime % 0x168);
      fVar7 = DAT_0071f424;
      fVar1 = (float)(dVar19 * 0.017444444820284843 - 3.140000104904175);
      iVar8 = 0;
      pfVar13 = (float *)&DAT_007643fc;
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar1 = fVar5 * fVar5;
      fVar4 = fVar1 * fVar1 * fVar5;
      WaterPlaneActive = 1;
      fVar6 = fVar1 * fVar4;
      DAT_00e5aa90 = 0x44000000;
      pfVar9 = (float *)&DAT_007643f8;
      DAT_00e5aa94 = 0x44000000;
      DAT_00e5aa9c = 0x44800000;
      DAT_00e5aa98 = (fVar1 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar4 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 0.25 +
                     DAT_00ef1a94;
      DAT_00ef1a90 = DAT_00e5aa98;
      do {
        fVar1 = *pfVar9 * fVar7 + *pfVar11;
        dVar19 = (double)fVar1;
        *pfVar11 = fVar1;
        if (dVar21 < dVar19) {
          dVar20 = dVar19 - dVar21;
          dVar19 = (double)(float)dVar20;
          *pfVar11 = (float)dVar20;
        }
        if (dVar19 < dVar22) {
          *pfVar11 = (float)(dVar19 + dVar21);
        }
        fVar1 = *pfVar13 * fVar7 + *pfVar12;
        dVar19 = (double)fVar1;
        *pfVar12 = fVar1;
        if (dVar21 < dVar19) {
          dVar20 = dVar19 - dVar21;
          dVar19 = (double)(float)dVar20;
          *pfVar12 = (float)dVar20;
        }
        if (dVar19 < dVar22) {
          *pfVar12 = (float)(dVar19 + dVar21);
        }
        iVar8 = iVar8 + 1;
        pfVar9 = pfVar9 + 2;
        pfVar11 = pfVar11 + 2;
        pfVar13 = pfVar13 + 2;
        pfVar12 = pfVar12 + 2;
      } while (iVar8 < 2);
      RegisterFuncForMoby(&PTR_M1111_Pokitaru_Ocean_00708d88,moby);
    }
  }
  return;
}



//==== 001d216c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1112_001d216c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1112_001d216c(void)

{
  DAT_0076445c = 0x10000;
  return;
}



//==== 001d2188  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1112_001d2188(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M1112_001d2188(MobyInstance *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 in_LR;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((int)param_2 != 0) {
    auVar3 = ZEXT416(0xffffffff);
    auVar3 = auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60;
    auVar4 = vectorShiftLeftIntegerWord(auVar3,auVar3);
    auVar3 = loadVectorLeftIndexed(0x84,param_2);
    auVar2 = vectorConvertFromSignedFixedPointWord(auVar3,0);
    auVar3 = loadVectorLeftIndexed(in_LR,0x1d2180);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar3 = vectorAddFloatingPoint
                       (auVar2,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
    auVar3 = vectorMultiplyAddFloatingPoint(auVar5,auVar3,auVar4);
    auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
    auVar3 = auVar3 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x98,
                       ZEXT48(param_1->pVar));
    *(undefined4 *)((int)param_1->pVar + 0x98U & 0xfffffffc) = uVar1;
  }
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 001d2258  ns=mobyupdate_unsorted  size=0x1530
// sig: undefined UpdateMoby_1112(void * this, MobyInstance * moby)
// callers(0): 
// callees(16): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010581c mobyutil::SetCollDamIn; 00106150 mobyutil::MB_RegisterLameShadow; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots

/* Moby 1112 */

void __thiscall mobyupdate_unsorted::UpdateMoby_1112(void *this,MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  short sVar8;
  MOBY_OCLASSES MVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
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
  double dVar32;
  double dVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x280;
  puVar14 = (ulonglong *)lVar18;
  *puVar14 = uVar16;
  puVar14[0x52] = in_LR;
  puVar14[0x4d] = in_f29;
  puVar14[0x4e] = in_f30;
  puVar14[0x4f] = in_f31;
  puVar14[0x4c] = unaff_r31;
  puVar14[0x4b] = unaff_r30;
  puVar14[0x4a] = unaff_r29;
  puVar14[0x49] = unaff_r28;
  puVar14[0x48] = unaff_r27;
  puVar14[0x47] = unaff_r26;
  if (this == (void *)0x0) {
    return;
  }
  uVar10 = *(uint *)((int)this + 0x78);
  uVar25 = (ulonglong)uVar10;
  if (uVar10 == 0) {
    return;
  }
  if (*(int *)(uVar10 + 0xa0) == 0) {
    return;
  }
  uVar11 = *(uint *)(*(int *)(uVar10 + 0xa0) + 0x78);
  uVar26 = (ulonglong)uVar11;
  mobyutil::MB_getTarget((double)*(float *)(uVar11 + 0x8c),this,moby,uVar16 - 0x180);
  if ((*(char *)((int)this + 0x31) != '\0') &&
     (fVar2 = *(float *)((int)this + 0x14) - GameCamera.posY,
     fVar3 = *(float *)((int)this + 0x10) - GameCamera.posX,
     fVar7 = *(float *)((int)this + 0x18) - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar2 * fVar2) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(this);
    *(undefined1 *)((int)this + 0x7f) = 0x15;
  }
  iVar20 = mobyutil::MB_damage(this,0x230000,0);
  mobyutil::MB_HandleDamage((MobyInstance *)this,iVar20,uVar25 + 0x20,0,puVar14 + 0x2a,0,0,4);
  if ((((1 < *(int *)(puVar14 + 0x2a)) && (iVar20 != 0)) &&
      (sVar8 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6), sVar8 != 0x458 && sVar8 != 0x363)) &&
     (sVar8 != 0x367)) {
    puVar14[0x12] = 2;
    puVar14[0x14] = 0;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
               0x401c000000000000,this,uVar25 + 0x60,0,0xffffffffffffffff,2,3,3,5);
    mobyutil::MB_SpawnBoltsFromCrate(this,0,0xffffffffffffffff);
    if (uVar11 != 0) {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x84,uVar26);
      auVar38 = loadVectorRightIndexed(0x94,uVar26);
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar38,0);
      auVar39 = loadVectorLeftIndexed(0x18,0x1d2200);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorAddFloatingPoint
                          (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,
                          (ulonglong)*(uint *)((int)this + 0x78));
      *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar13;
    }
    mobyfunc::DeleteMoby((MobyInstance *)this);
  }
  bVar1 = *(byte *)((int)this + 0x20);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (uVar11 != 0) {
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 0x1000;
        fVar2 = 0.0;
        *(undefined4 *)(uVar10 + 0x6c) = 0;
        *(undefined4 *)(uVar10 + 0x68) = 0;
        *(undefined4 *)(uVar10 + 100) = 0;
        *(undefined4 *)(uVar10 + 0x60) = 0;
        *(undefined4 *)(uVar10 + 0x70) = *(undefined4 *)((int)this + 0x10);
        *(undefined4 *)(uVar10 + 0x74) = *(undefined4 *)((int)this + 0x14);
        *(undefined4 *)(uVar10 + 0x78) = *(undefined4 *)((int)this + 0x18);
        *(undefined4 *)(uVar10 + 0x7c) = *(undefined4 *)((int)this + 0x1c);
        *(undefined4 *)((int)this + 0x44) = 0;
        fVar3 = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
        fVar5 = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
        fVar7 = ABS(fVar3);
        fVar4 = ABS(fVar5);
        *(float *)((int)puVar14 + 0x184) = fVar3;
        *(float *)(puVar14 + 0x31) = fVar5;
        *(float *)((int)puVar14 + 0x18c) = fVar7 - fVar4;
        uVar25 = (ulonglong)(*(uint *)((int)puVar14 + 0x184) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x18c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x31) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar14 + 0x184));
        if (*(float *)((int)puVar14 + 0x18c) - 0.0 < 0.0) {
          fVar3 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar5 = ABS(*(float *)(puVar14 + 0x31));
        if (*(float *)((int)puVar14 + 0x18c) - 0.0 < 0.0) {
          fVar5 = fVar7;
        }
        fVar7 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar17 = uVar16 - 0x270;
          lVar21 = uVar16 - 0x70;
          lVar24 = uVar16 - 0x60;
          lVar27 = 2;
          fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar14 + 0x21c) = fVar3;
          *(float *)((int)puVar14 + 0x214) = fVar3;
          *(float *)(puVar14 + 0x43) = fVar3;
          *(float *)(puVar14 + 0x42) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x214) = *(float *)((int)puVar14 + 0x214) * fVar5;
          *(float *)(puVar14 + 0x43) = *(float *)(puVar14 + 0x43) * fVar3;
          *(float *)((int)puVar14 + 0x21c) = *(float *)((int)puVar14 + 0x21c) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x200) * fVar3 * fVar3;
            iVar20 = (int)lVar21;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0x70;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0x210) = *(float *)((int)lVar17 + 0x210) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            iVar12 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            fVar2 = fVar2 + *(float *)(iVar20 + 0x210) + *(float *)(iVar12 + 4) +
                    *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar7;
        }
        *(float *)((int)this + 0x48) = fVar2;
        *(undefined1 *)(uVar10 + 0x29) = 0;
        *(undefined1 *)((int)this + 0xbc) = 0;
        *(undefined1 *)((int)this + 0x20) = 1;
      }
    }
    else {
      *(float *)(uVar10 + 0x60) = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
      *(float *)(uVar10 + 100) = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
      fVar2 = *(float *)((int)this + 0x18);
      *(undefined4 *)(uVar10 + 0x6c) = *(undefined4 *)(uVar10 + 0x8c);
      *(float *)(uVar10 + 0x68) = *(float *)(uVar10 + 0x88) - fVar2;
      fVar2 = *(float *)(uVar10 + 0x80) - *(float *)((int)this + 0x10);
      fVar3 = *(float *)(uVar10 + 0x84) - *(float *)((int)this + 0x14);
      fVar4 = ABS(fVar2);
      fVar7 = ABS(fVar3);
      *(float *)(puVar14 + 0x2f) = fVar2;
      *(float *)((int)puVar14 + 0x17c) = fVar3;
      *(float *)(puVar14 + 0x30) = fVar4 - fVar7;
      dVar37 = 0.0;
      uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x2f) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x30) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x17c) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar14 + 0x2f));
      if (*(float *)(puVar14 + 0x30) - 0.0 < 0.0) {
        fVar2 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)((int)puVar14 + 0x17c));
      if (*(float *)(puVar14 + 0x30) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      dVar28 = dVar37;
      if (0.0 < fVar2) {
        lVar17 = uVar16 - 0x270;
        lVar24 = uVar16 - 0x80;
        lVar21 = uVar16 - 0x90;
        lVar27 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar14 + 0x1fc) = fVar2;
        *(float *)((int)puVar14 + 500) = fVar2;
        *(float *)(puVar14 + 0x3f) = fVar2;
        *(float *)(puVar14 + 0x3e) = fVar2;
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 500) = *(float *)((int)puVar14 + 500) * fVar4;
        *(float *)(puVar14 + 0x3f) = *(float *)(puVar14 + 0x3f) * fVar2;
        *(float *)((int)puVar14 + 0x1fc) = *(float *)((int)puVar14 + 0x1fc) * fVar2 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1e0) * fVar2 * fVar2;
          iVar20 = (int)lVar21;
          lVar21 = lVar21 + 8;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar16 - 0x90;
        pfVar23 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar21 = lVar24;
        do {
          fVar2 = *pfVar23;
          fVar4 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar17 + 0x1f0) = *(float *)((int)lVar17 + 0x1f0) * fVar2;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar21 = 2;
        lVar17 = lVar18;
        do {
          iVar20 = (int)lVar17;
          iVar12 = (int)lVar24;
          lVar17 = lVar17 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1f0)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar28,(double)(DAT_0071f418 * 6.2831855),
                 (double)(mobyutil::g_FrameTime * 3.1415927),
                 (double)(mobyutil::g_FrameTime * 6.2831855),this,&DAT_00720000,uVar25 + 0xa4);
      fVar2 = *(float *)(uVar10 + 0x80);
      *(float *)((int)this + 0x10) = fVar2;
      fVar3 = *(float *)(uVar10 + 0x84);
      *(float *)((int)this + 0x14) = fVar3;
      fVar7 = *(float *)(uVar10 + 0x88);
      *(float *)((int)this + 0x18) = fVar7;
      iVar20 = *(int *)(puVar14 + 0x28);
      *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar10 + 0x8c);
      iVar12 = *(int *)(uVar10 + 0x38);
      fVar4 = *(float *)((int)this + 0x48);
      if (((iVar12 == 0) ||
          (fVar15 = fVar3 - *(float *)(iVar12 + 0x14), fVar5 = fVar2 - *(float *)(iVar12 + 0x10),
          20.0 <= SQRT(fVar5 * fVar5 + fVar15 * fVar15))) ||
         (3.0 <= ABS(fVar7 - *(float *)(iVar12 + 0x18)))) {
        if (((iVar20 == 0) ||
            (fVar15 = fVar3 - *(float *)((int)puVar14 + 0x104),
            fVar5 = fVar2 - *(float *)(puVar14 + 0x20),
            *(float *)(uVar11 + 0x8c) <=
            SQRT((fVar7 - *(float *)(puVar14 + 0x21)) * (fVar7 - *(float *)(puVar14 + 0x21)) +
                 fVar5 * fVar5 + fVar15 * fVar15))) ||
           (fVar5 = fVar3 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x14),
           fVar7 = fVar2 - *(float *)(*(int *)(uVar10 + 0xa0) + 0x10),
           SQRT(fVar7 * fVar7 + fVar5 * fVar5) <= 2.0)) goto LAB_001d373c;
        fVar2 = *(float *)(puVar14 + 0x20) - fVar2;
        fVar3 = *(float *)((int)puVar14 + 0x104) - fVar3;
        dVar29 = ABS((double)fVar2);
        dVar31 = ABS((double)fVar3);
        *(float *)((int)puVar14 + 0x16c) = fVar2;
        *(float *)(puVar14 + 0x2e) = fVar3;
        *(float *)((int)puVar14 + 0x174) = (float)(dVar29 - dVar31);
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x16c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x174) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x2e) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)((int)puVar14 + 0x16c));
        if ((double)*(float *)((int)puVar14 + 0x174) - dVar37 < 0.0) {
          dVar28 = dVar31;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
        dVar31 = ABS((double)*(float *)(puVar14 + 0x2e));
        if ((double)*(float *)((int)puVar14 + 0x174) - dVar37 < 0.0) {
          dVar31 = dVar29;
        }
        fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        if (dVar37 < dVar28) {
          lVar17 = uVar16 - 0x270;
          lVar24 = uVar16 - 0xa0;
          lVar21 = uVar16 - 0xb0;
          lVar27 = 2;
          fVar7 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
          fVar5 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0x1dc) = fVar7;
          *(float *)((int)puVar14 + 0x1d4) = fVar7;
          *(float *)(puVar14 + 0x3b) = fVar7;
          *(float *)(puVar14 + 0x3a) = fVar7;
          fVar7 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar5;
          *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar7;
          *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar7 * fVar5;
          do {
            *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1c0) * fVar7 * fVar7;
            iVar20 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar16 - 0xb0;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar21 = lVar24;
          do {
            fVar7 = *pfVar23;
            fVar5 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0x1d0) = *(float *)((int)lVar17 + 0x1d0) * fVar7;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar17 = 2;
          do {
            iVar20 = (int)lVar18;
            iVar12 = (int)lVar24;
            lVar18 = lVar18 + 0x10;
            lVar24 = lVar24 + 0x10;
            dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar20 + 0x1d0)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar2 + fVar3);
        }
        dVar37 = (double)fastfunc::FastSubRots(fVar4,(float)dVar37);
        if ((double)(*(float *)(uVar11 + 0x88) * 0.017453292) <= dVar37) goto LAB_001d373c;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        mobyutil::MB_SetAnimation(this,1,0,10);
      }
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      *(float *)(uVar10 + 0x9c) = *(float *)(uVar11 + 0x7c) * mobyutil::g_FrameTime;
      auVar39 = loadVectorLeftIndexed(0x34,0x1d2200);
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar38);
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,uVar25)
      ;
      *(undefined4 *)(uVar10 + 0x98 & 0xfffffffc) = uVar13;
      *(undefined1 *)((int)this + 0xbc) = 1;
      auVar39 = loadVectorLeftIndexed(0x38,0x1d2200);
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xac,uVar25)
      ;
      *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar13;
      *(undefined1 *)((int)this + 0x20) = 2;
    }
  }
  else if (bVar1 < 3) {
    if ((((*(byte *)((int)this + 0x70) & 2) != 0) && (*(char *)((int)this + 0x52) == '\x01')) &&
       (*(char *)((int)this + 0x53) != '\x02')) {
      mobyutil::MB_SetAnimation(this,2,0,10);
    }
    if (*(char *)((int)this + 0xbc) == '\x01') {
      *(float *)((int)this + 0x18) = DAT_0071f408 * 0.1 + *(float *)((int)this + 0x18);
      iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0xac);
      if (iVar20 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x38,0x1d2200);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar38);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xac,
                            uVar25);
        *(undefined4 *)(uVar10 + 0xac & 0xfffffffc) = uVar13;
        *(undefined1 *)((int)this + 0xbc) = 2;
      }
    }
    else if (*(char *)((int)this + 0xbc) == '\x02') {
      *(float *)((int)this + 0x18) = -(DAT_0071f408 * 0.1 - *(float *)((int)this + 0x18));
      iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0xac);
      if (iVar20 != 0) {
        *(undefined1 *)((int)this + 0xbc) = 0;
      }
    }
    fVar2 = *(float *)(puVar14 + 0x20) - *(float *)((int)this + 0x10);
    fVar3 = *(float *)((int)puVar14 + 0x104) - *(float *)((int)this + 0x14);
    fVar4 = ABS(fVar2);
    fVar7 = ABS(fVar3);
    *(float *)(puVar14 + 0x2c) = fVar2;
    *(float *)((int)puVar14 + 0x164) = fVar3;
    *(float *)(puVar14 + 0x2d) = fVar4 - fVar7;
    dVar37 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x2c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x164) >> 0x1d) & 4;
    uVar22 = uVar19 << 2 | 0x735900;
    fVar2 = ABS(*(float *)(puVar14 + 0x2c));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar2 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar3 = *(float *)((int)uVar22 + 4);
    fVar5 = ABS(*(float *)((int)puVar14 + 0x164));
    if (*(float *)(puVar14 + 0x2d) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    dVar28 = dVar37;
    if (0.0 < fVar2) {
      lVar17 = uVar16 - 0x270;
      lVar24 = uVar16 - 0xc0;
      lVar21 = uVar16 - 0xd0;
      lVar27 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar14 + 0x1bc) = fVar2;
      *(float *)((int)puVar14 + 0x1b4) = fVar2;
      *(float *)(puVar14 + 0x37) = fVar2;
      *(float *)(puVar14 + 0x36) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar4;
      *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar2;
      *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1a0) * fVar2 * fVar2;
        iVar20 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar16 - 0xd0;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar2 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar17 + 0x1b0) = *(float *)((int)lVar17 + 0x1b0) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar2;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar20 = (int)lVar17;
        iVar12 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x1b0)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
    }
    dVar35 = 3.1415927410125732;
    dVar34 = 6.2831854820251465;
    mobyutil::OrganicDeltAngSpeed
              (dVar28,(double)(DAT_0071f418 * 3.1415927),(double)(mobyutil::g_FrameTime * 3.1415927)
               ,(double)(mobyutil::g_FrameTime * 6.2831855),this,uVar22,uVar25 + 0xa4);
    fVar2 = *(float *)((int)this + 0x14) - *(float *)((int)puVar14 + 0x104);
    fVar3 = *(float *)((int)this + 0x10) - *(float *)(puVar14 + 0x20);
    fVar7 = *(float *)(puVar14 + 0x21) - *(float *)((int)this + 0x18);
    dVar33 = ABS((double)fVar7);
    fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar2 = *(float *)((int)this + 0x44);
    dVar29 = (double)DAT_0071f418;
    dVar31 = (double)mobyutil::g_FrameTime;
    *(float *)(puVar14 + 0x2b) = fVar7;
    dVar32 = ABS((double)fVar3);
    *(float *)((int)puVar14 + 0x154) = fVar3;
    *(float *)((int)puVar14 + 0x15c) = (float)(dVar32 - dVar33);
    uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1d) & 4;
    uVar22 = uVar19 << 2 | 0x735900;
    uVar19 = uVar19 << 2;
    dVar28 = ABS((double)*(float *)((int)puVar14 + 0x154));
    if ((double)*(float *)((int)puVar14 + 0x15c) - dVar37 < 0.0) {
      dVar28 = dVar33;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar19);
    dVar33 = ABS((double)*(float *)(puVar14 + 0x2b));
    if ((double)*(float *)((int)puVar14 + 0x15c) - dVar37 < 0.0) {
      dVar33 = dVar32;
    }
    fVar7 = *(float *)((int)uVar22 + 4);
    dVar32 = dVar37;
    if (dVar37 < dVar28) {
      lVar17 = uVar16 - 0x270;
      lVar24 = uVar16 - 0xe0;
      lVar21 = uVar16 - 0xf0;
      lVar27 = 2;
      fVar4 = (float)(dVar33 - dVar28) / (float)(dVar33 + dVar28);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar14 + 0x19c) = fVar4;
      *(float *)((int)puVar14 + 0x194) = fVar4;
      *(float *)(puVar14 + 0x33) = fVar4;
      *(float *)(puVar14 + 0x32) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar5;
      *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar4;
      *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 0x180) * fVar4 * fVar4;
        iVar20 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar16 - 0xf0;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar4 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar17 + 400) = *(float *)((int)lVar17 + 400) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar17 = 2;
      dVar28 = dVar37;
      do {
        iVar20 = (int)lVar18;
        iVar12 = (int)lVar24;
        lVar18 = lVar18 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 400)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      uVar19 = ZEXT48(&DAT_001d2200);
      dVar32 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar7);
    }
    dVar28 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar2,dVar32,(double)(float)(dVar29 * dVar35),
                                (double)(float)(dVar31 * dVar35),(double)(float)(dVar31 * dVar34),
                                uVar19,uVar22,uVar25 + 0xa8);
    fVar2 = *(float *)(puVar14 + 0x20);
    *(float *)((int)this + 0x44) = (float)dVar28;
    fVar3 = mobyutil::g_FrameTime;
    dVar29 = (double)(fVar2 - *(float *)((int)this + 0x10));
    dVar31 = (double)(*(float *)((int)puVar14 + 0x104) - *(float *)((int)this + 0x14));
    dVar28 = (double)(*(float *)(puVar14 + 0x21) - *(float *)((int)this + 0x18));
    if (*(char *)((int)this + 0xbc) != '\0') {
      dVar28 = dVar37;
    }
    dVar34 = (double)SQRT((float)(dVar28 * dVar28 +
                                 (double)(float)(dVar29 * dVar29 + (double)(float)(dVar31 * dVar31))
                                 ));
    dVar33 = (double)(float)((double)(DAT_0071f418 * 30.0) / dVar34);
    dVar32 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar32 = (double)(float)(dVar31 * dVar33);
    }
    dVar35 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar35 = (double)(float)(dVar29 * dVar33);
    }
    dVar30 = dVar37;
    if (dVar37 - dVar34 < 0.0) {
      dVar30 = (double)(float)(dVar28 * dVar33);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar32 = (double)(float)(dVar31 * dVar33);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar35 = (double)(float)(dVar29 * dVar33);
    }
    if (dVar34 - dVar37 < 0.0) {
      dVar30 = (double)(float)(dVar28 * dVar33);
    }
    fVar2 = (float)((double)*(float *)(uVar10 + 100) + dVar32);
    fVar7 = (float)((double)*(float *)(uVar10 + 0x60) + dVar35);
    fVar4 = (float)((double)*(float *)(uVar10 + 0x68) + dVar30);
    *(float *)(uVar10 + 0x60) = fVar7;
    *(float *)(uVar10 + 100) = fVar2;
    *(float *)(uVar10 + 0x68) = fVar4;
    fVar5 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar2 * fVar2);
    if (fVar3 * 10.0 < fVar5) {
      fVar5 = (fVar3 * 10.0) / fVar5;
      fVar7 = fVar7 * fVar5;
      *(float *)(uVar10 + 0x60) = fVar7;
      *(float *)(uVar10 + 100) = fVar2 * fVar5;
      *(float *)(uVar10 + 0x68) = fVar4 * fVar5;
    }
    fVar7 = *(float *)((int)this + 0x10) + fVar7;
    *(float *)((int)this + 0x10) = fVar7;
    fVar2 = *(float *)((int)this + 0x14) + *(float *)(uVar10 + 100);
    *(float *)((int)this + 0x14) = fVar2;
    fVar3 = *(float *)((int)this + 0x18) + *(float *)(uVar10 + 0x68);
    *(float *)((int)this + 0x18) = fVar3;
    fVar2 = fVar2 - *(float *)(uVar10 + 0x74);
    fVar7 = fVar7 - *(float *)(uVar10 + 0x70);
    fVar3 = fVar3 - *(float *)(uVar10 + 0x78);
    if (64.0 < SQRT(fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2)) {
      if (uVar11 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x84,uVar26);
        auVar38 = loadVectorRightIndexed(0x94,uVar26);
        auVar38 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar38,0);
        auVar39 = loadVectorLeftIndexed(0x18,0x1d2200);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorAddFloatingPoint
                            (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,
                            (ulonglong)*(uint *)((int)this + 0x78));
        *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar13;
      }
      mobyfunc::DeleteMoby((MobyInstance *)this);
    }
    uVar36 = 0x3ff0000000000000;
    mobyutil::SetCollDamIn(0x3ff0000000000000,uVar16 - 0x1b0,this,0x10001);
    uVar13 = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)(puVar14 + 0x18) = *(undefined4 *)((int)this + 0x10);
    uVar6 = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
    *(undefined4 *)((int)puVar14 + 0xcc) = uVar6;
    *(float *)(puVar14 + 0x19) = *(float *)((int)this + 0x18) + 0.75;
    iVar20 = collproc::CollMobySphere(uVar16 - 0x1c0);
    if (((iVar20 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
       ((MVar9 = (CollOutput.pMoby)->oClass, MVar9 != MINE_0456 && MVar9 != 0x363 &&
        (((MVar9 != MINE_0458 && (MVar9 != 0x365)) &&
         (MVar9 != BOLTCRATE_POSSIBLY_FOR_METAL_DETECTOR)))))) {
      puVar14[0x12] = 2;
      puVar14[0x14] = 0;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      mobyutil::MB_genericExplosion
                (dVar37,dVar37,0x4000000000000000,uVar36,0x4010000000000000,uVar36,
                 0x401c000000000000,this,uVar25 + 0x60,0,0xffffffffffffffff,2,3,3,5);
      if (uVar11 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = loadVectorLeftIndexed(0x84,uVar26);
        auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar38 = loadVectorRightIndexed(0x94,uVar26);
        auVar38 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar38,0);
        auVar39 = loadVectorLeftIndexed(0x18,0x1d2200);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorAddFloatingPoint
                            (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,
                            (ulonglong)*(uint *)((int)this + 0x78));
        *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar13;
      }
      mobyfunc::DeleteMoby((MobyInstance *)this);
    }
    uVar13 = *(undefined4 *)((int)this + 0x14);
    *(undefined4 *)(puVar14 + 0x18) = *(undefined4 *)((int)this + 0x10);
    uVar6 = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
    *(undefined4 *)((int)puVar14 + 0xcc) = uVar6;
    *(float *)(puVar14 + 0x19) = *(float *)((int)this + 0x18) + 0.55;
    iVar20 = collproc::CollSphere(uVar16 - 0x1c0);
    if (iVar20 != 0) {
      fVar2 = CollOutput.push.y - *(float *)((int)puVar14 + 0xc4);
      fVar3 = CollOutput.push.z - *(float *)(puVar14 + 0x19);
      *(float *)((int)this + 0x10) =
           *(float *)((int)this + 0x10) + (CollOutput.push.x - *(float *)(puVar14 + 0x18));
      *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) + fVar2;
      *(float *)((int)this + 0x18) = *(float *)((int)this + 0x18) + fVar3;
    }
    if (*(int *)(uVar10 + 0x98) == 0) {
      if (uVar11 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x84,uVar26);
        auVar38 = loadVectorRightIndexed(0x94,uVar26);
        auVar38 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar38,0);
        auVar39 = loadVectorLeftIndexed(0x18,0x1d2200);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = vectorAddFloatingPoint
                            (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,
                            (ulonglong)*(uint *)((int)this + 0x78));
        *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar13;
      }
      mobyfunc::DeleteMoby((MobyInstance *)this);
    }
  }
  else if (bVar1 < 4) {
    puVar14[0x12] = 2;
    puVar14[0x14] = 0;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
               0x401c000000000000,this,uVar25 + 0x60,0,0xffffffffffffffff,2,3,3,5);
    if (uVar11 != 0) {
      auVar39 = ZEXT416(0xffffffff);
      auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar39 = loadVectorLeftIndexed(0x84,uVar26);
      auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorRightIndexed(0x94,uVar26);
      auVar38 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar38,0);
      auVar39 = loadVectorLeftIndexed(0x18,0x1d2200);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorAddFloatingPoint
                          (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,
                          (ulonglong)*(uint *)((int)this + 0x78));
      *(undefined4 *)(*(uint *)((int)this + 0x78) + 0x98 & 0xfffffffc) = uVar13;
    }
    mobyfunc::DeleteMoby((MobyInstance *)this);
  }
LAB_001d373c:
  mobyutil::MB_RegisterLameShadow(0.7,(MobyInstance *)this);
  return;
}



//==== 001d37b8  ns=mobyupdate_unsorted  size=0x3ec
// sig: undefined UpdateMoby_{1113_1114_1115_1116}(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 00425540 FUN_00425540

/* Moby 1113
   Moby 1114
   Moby 1115
   Moby 1116 */

void mobyupdate_unsorted::UpdateMoby__1113_1114_1115_1116_(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  
  piVar6 = (int *)moby->pVar;
  iVar9 = mobyutil::MB_damage(moby,0x30000,0);
  if (((iVar9 != 0) && (iVar10 = *(int *)(iVar9 + 0x20), iVar10 != 0)) &&
     (((*(short *)(iVar10 + 0xa6) == 0x415 &&
       ((*(char *)(iVar10 + 0x20) == '\b' && (*(int *)(iVar9 + 0x2c) == 0x3f800408)))) ||
      ((*(short *)(iVar10 + 0xa6) == 0x452 &&
       ((*(char *)(iVar10 + 0x20) == '\t' && (*(int *)(iVar9 + 0x2c) == 0x3f800408)))))))) {
    fVar1 = (float)piVar6[2];
    fVar2 = (float)piVar6[1];
    iVar10 = 0;
    fVar3 = (float)piVar6[3];
    fVar4 = (moby->transform).v2.y;
    fVar5 = (moby->transform).v2.x;
    fVar8 = (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar1;
    fVar7 = (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar1;
    dVar16 = (double)(fVar5 * fVar3 + fVar7);
    if (0 < *piVar6) {
      dVar22 = -(double)(fVar5 * fVar3 + fVar7);
      dVar23 = -(double)(fVar4 * fVar3 + fVar8);
      fVar1 = (moby->transform).v2.z * fVar3 +
              (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar1;
      dVar30 = 0.5;
      dVar17 = 1.5;
      dVar18 = 5.0;
      dVar19 = 10.0;
      dVar25 = 2.0;
      dVar20 = 0.4099999964237213;
      uVar26 = 0x3ff0000000000000;
      uVar21 = 0x3fe8000000000000;
      do {
        dVar24 = (double)fVar1;
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar16);
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar23,fVar4 * fVar3 + fVar8);
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar24);
        dVar27 = (double)(moby->pos).x;
        dVar28 = (double)(moby->pos).y;
        dVar29 = (double)(moby->pos).z;
        mobyutil::MB_randSphere
                  ((double)(float)((double)mobyutil::g_FrameTime * dVar18),
                   (double)(float)((double)mobyutil::g_FrameTime * dVar19),&local_e0);
        dVar15 = (double)local_d8;
        if ((int)local_d8 < 0) {
          dVar15 = -dVar15;
          local_d8 = (float)dVar15;
        }
        if (dVar15 < (double)(float)((double)mobyutil::g_FrameTime * dVar25)) {
          local_d8 = (float)((double)mobyutil::g_FrameTime * dVar25 + dVar15);
        }
        fVar1 = (float)dVar24;
        uVar14 = mobyutil::MB_randRangeFloat((float)dVar20,(float)dVar30);
        mobyutil::MB_randRange(0x32,0x50);
        fVar2 = (float)(dVar11 * dVar30 + dVar27);
        FUN_00425540(uVar14,uVar26,uVar26,uVar21,CONCAT44(fVar2,(float)(dVar12 * dVar30 + dVar28)),
                     CONCAT44((float)(dVar13 + dVar29),fVar2),CONCAT44(local_e0,local_dc),
                     CONCAT44(local_d8,local_d4),iVar10 % 3 + 0x2b8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *piVar6);
    }
    mobyutil::MB_genericExplosion
              (0x4008000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,moby,iVar9 + 0x10,iVar9,1,
               0xffffffffffffffff,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  moby->damage = -1;
  return;
}



//==== 001d3ba8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1117_001d3ba8(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1117_001d3ba8(int param_1)

{
  if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}



//==== 001d3c28  ns=mobyupdate_unsorted  size=0x3e8
// sig: undefined UpdateMoby_1117(MobyInstance * moby)
// callers(0): 
// callees(8): 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 00112900 mobyutil::MB_GetOrientation; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1117 */

void mobyupdate_unsorted::UpdateMoby_1117(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  MobyInstance *pMVar7;
  undefined4 uVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  Vec4 local_50;
  
  pvVar5 = moby->pVar;
  dVar12 = (double)(moby->pos).x;
  dVar13 = (double)(moby->pos).y;
  dVar14 = (double)(moby->pos).z;
  if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == moby) goto LAB_001d3cb0;
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
LAB_001d3cb0:
    moby->state = '\x02';
  }
  fastfunc::FastDecTimerS32((int)pvVar5 + 0xbc);
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar11 = 0;
      *(undefined4 *)((int)pvVar5 + 0x20) = 0;
      *(undefined1 *)((int)pvVar5 + 0x28) = 4;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0;
      fVar3 = (moby->pos).z;
      *(undefined2 *)((int)pvVar5 + 0x3e) = 5;
      *(f32 *)((int)pvVar5 + 0xa0) = fVar3;
      dVar10 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar5 + 0xa8) = (float)dVar10;
      dVar10 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar5 + 0xb4) = (float)dVar10;
      dVar10 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar5 + 0xb8) = (float)dVar10;
      dVar10 = (double)mobyutil::MB_randRangeSigned
                                 (uVar11,(double)(mobyutil::g_FrameTime * 0.13962634));
      *(float *)((int)pvVar5 + 0xb0) =
           (float)((double)mobyutil::g_FrameTime * 1.5707963705062866 + dVar10);
      moby->state = '\x01';
    }
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
    mobyutil::MB_BobMotion
              (0.1,*(float *)((int)pvVar5 + 0xb0),moby,(float *)((int)pvVar5 + 0xa8),
               (float *)((int)pvVar5 + 0xac));
    mobyutil::MB_SwingMotion
              (0x3fa8209f60000000,(double)(mobyutil::g_FrameTime * 0.34906584),
               (double)(mobyutil::g_FrameTime * 0.5235988),(longlong)(int)moby,(int)pvVar5 + 0xb4,
               (int)pvVar5 + 0xb8);
    goto LAB_001d3f9c;
  }
  if (bVar2 < 3) {
    fVar4 = -(DAT_0071f418 * 2.0 - *(float *)((int)pvVar5 + 0xa4));
    *(float *)((int)pvVar5 + 0xa4) = fVar4;
    fVar6 = mobyutil::g_FrameTime * -2.0;
    if (fVar4 < fVar6) {
      *(float *)((int)pvVar5 + 0xa4) = fVar6;
      fVar4 = fVar6;
    }
    bVar1 = hero::g_heroStateType != 3;
    (moby->pos).z = (moby->pos).z + fVar4;
    pMVar7 = DAT_0096a1d8;
    if ((((bVar1) && (g_heroState != EDGE_JUMP)) &&
        (pMVar7 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar7 != moby)) {
      moby->state = '\x03';
    }
    if (*(int *)((int)pvVar5 + 0xbc) < 1) {
      sound::PlayMobySound(0,0,moby);
      uVar8 = mobyutil::MB_randRange(0x28,0x3c);
      *(undefined4 *)((int)pvVar5 + 0xbc) = uVar8;
    }
    goto LAB_001d3f9c;
  }
  if (3 < bVar2) goto LAB_001d3f9c;
  fVar4 = *(float *)((int)pvVar5 + 0xa4);
  if (*(int *)((int)pvVar5 + 0xa4) < 0) {
LAB_001d3f0c:
    fVar4 = fVar4 + DAT_0071f418;
    *(float *)((int)pvVar5 + 0xa4) = fVar4;
    fVar6 = mobyutil::g_FrameTime * 2.0;
    if (fVar6 < fVar4) {
      *(float *)((int)pvVar5 + 0xa4) = fVar6;
      fVar4 = fVar6;
    }
  }
  else {
    fVar6 = *(float *)((int)pvVar5 + 0xa0) - (moby->pos).z;
    if ((fVar4 * fVar4) / (DAT_0071f418 * 2.0 * 2.0) < fVar6) goto LAB_001d3f0c;
    if (0.0 < fVar6) {
      fVar4 = fVar4 - (fVar4 * fVar4) / (fVar6 * 2.0);
      *(float *)((int)pvVar5 + 0xa4) = fVar4;
      if (fVar4 < 0.0) {
        *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
        fVar4 = 0.0;
      }
    }
  }
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if (*(float *)((int)pvVar5 + 0xa0) <= fVar4) {
    (moby->pos).z = *(float *)((int)pvVar5 + 0xa0);
    moby->state = '\x01';
  }
LAB_001d3f9c:
  lVar9 = (longlong)(int)moby + 0x40;
  local_50.x = (float)((double)(moby->pos).x - dVar12);
  local_50.y = (float)((double)(moby->pos).y - dVar13);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar14);
  mobyutil::MB_GetOrientation((MobyInstance *)((int)pvVar5 + 0x60),&local_50,lVar9,lVar9);
  return;
}



//==== 001d4010  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1118_001d4010(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1118_001d4010(void)

{
  DAT_007644cc = 0x10000;
  return;
}



//==== 001d4048  ns=mobyupdate_helpers  size=0x284
// sig: undefined M1118_001d4048(void)
// callers(1): 001d4308 mobyupdate_unsorted::UpdateMoby_1118
// callees(4): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11

void mobyupdate_helpers::M1118_001d4048(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_d0 [16];
  undefined4 local_c0 [12];
  longlong local_90;
  
  if (0 < DAT_00764504) {
    iVar6 = 0;
    dVar9 = 8.0;
    dVar10 = 10.0;
    dVar11 = 400000.0;
    dVar12 = 15.5;
    dVar13 = 20.5;
    dVar14 = 25.5;
    dVar15 = 30.5;
    do {
      dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
      local_c0[0] = 0x4f008fff;
      local_c0[1] = 0x4f008fff;
      local_c0[2] = 0x4f007fff;
      dVar8 = (double)(float)(dVar7 * (double)mobyutil::g_FrameTime);
      local_c0[3] = 0x4f006fff;
      local_c0[4] = 0x2fffffff;
      local_c0[5] = 0x2fffffff;
      local_c0[6] = 0x2f005f7f;
      local_c0[7] = 0x2f004f7f;
      local_c0[8] = 0x2f003f7f;
      local_c0[9] = 0x2f00004f;
      local_c0[10] = 0x2f000000;
      local_c0[0xb] = 0x3f000000;
      lVar5 = mobyutil::MB_randInt(dVar7,(double)mobyutil::g_FrameTime,6);
      uVar3 = *(undefined4 *)((int)local_c0 + (int)(lVar5 << 2));
      lVar5 = mobyutil::MB_randInt(6);
      dVar7 = (double)(float)((double)DAT_00764500 * dVar11);
      uVar4 = *(undefined4 *)((int)local_c0 + (int)(lVar5 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar12);
      iVar2 = (int)((double)animationSpeed * dVar13);
      local_90 = (longlong)iVar2;
      mobyutil::MB_randRange(local_90,iVar1,(double)DAT_00764500,iVar1,iVar2);
      iVar1 = (int)((double)animationSpeed * dVar15);
      local_90 = (longlong)iVar1;
      mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
      partupd::SpawnPart_11
                (dVar7,(double)(float)((double)DAT_00764500 * dVar8),param_2,local_d0,uVar3,uVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_00764504);
  }
  return;
}



//==== 001d4308  ns=mobyupdate_unsorted  size=0x9a8
// sig: undefined UpdateMoby_1118(MobyInstance * moby)
// callers(0): 
// callees(19): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006dad0 draw::FadeToBlack; 000a0c38 hero::Hero_Warp; 000f31a8 mobyfunc::UpdateMobyTransform; 00109c30 mobyutil::OrganicDelt; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011b0b0 mobyutil::MB_ClearHelpMessage; 0015d12c sound::PlayMobySound; 0015d380 sound::sound_LevelPlay; 001ce0f0 FUN_001ce0f0; 001d4048 mobyupdate_helpers::M1118_001d4048; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

/* Moby 1118 */

MiscLevelFlags * mobyupdate_unsorted::UpdateMoby_1118(MobyInstance *moby)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  Cuboid *pCVar8;
  Cuboid *pCVar9;
  MiscLevelFlags *pMVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_d0 [4];
  float local_c0 [4];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [3];
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  longlong local_60;
  
  bVar1 = moby->state;
  pMVar10 = (MiscLevelFlags *)(uint)bVar1;
  piVar2 = (int *)moby->pVar;
  uVar12 = ZEXT48(piVar2);
  if (bVar1 == 6) {
    mobyutil::OrganicDelt
              (2.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 2.0,(float *)(piVar2 + 0xb),
               0x720000,(float *)(piVar2 + 0xc));
    iVar11 = piVar2[1];
    local_70 = Cuboids[iVar11].pos.x;
    local_64 = Cuboids[iVar11].pos.w;
    local_68 = Cuboids[iVar11].pos.z + 1.0;
    local_6c = Cuboids[iVar11].pos.y - 2.5;
    local_74 = 0;
    local_80[0] = 0.0;
    local_80[2] = g_heroRotation.z;
    local_80[1] = -0.2617994;
    camera::camera5::Camera_SetMobyDrivenTargetPos(&local_70);
    camera::camera5::Camera_SetMobyDrivenTargetRot(local_80);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4);
    if (0x3fffffff < (int)pMVar10) {
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->state = '\a';
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0x38,0x1d42cc);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      pCVar8 = Cuboids + piVar2[1];
      pCVar9 = Cuboids + piVar2[1];
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x44,uVar12);
      *(undefined4 *)((uint)(piVar2 + 0x11) & 0xfffffffc) = uVar5;
      hero::Hero_Warp(&(pCVar8->pos).x,&(pCVar9->rot).x,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      pMVar10 = (MiscLevelFlags *)FUN_001ce0f0(MobyInstance + piVar2[0xd]);
    }
  }
  else if (bVar1 == 5) {
    dVar13 = 10.5;
    local_60 = (longlong)(int)(animationSpeed * 10.5);
    if (piVar2[0x10] < (int)(animationSpeed * 10.5)) {
      iVar11 = piVar2[0x10] + 1;
      piVar2[0x10] = iVar11;
      dVar16 = (double)fastfunc::FastIntToDouble(iVar11);
      boot::SceneScreenFade =
           1.0 - (float)(dVar16 / (double)(longlong)((double)animationSpeed * dVar13));
    }
    dVar16 = (double)(float)piVar2[0xb];
    mobyutil::OrganicDelt
              (2.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 0.5,(float *)(piVar2 + 0xb),
               0x720000,(float *)(piVar2 + 0xc));
    iVar11 = *piVar2;
    local_b0 = Cuboids[iVar11].pos.x;
    local_ac = Cuboids[iVar11].pos.y;
    local_a4 = Cuboids[iVar11].pos.w;
    local_a8 = (float)piVar2[0xb] * 18.0 + Cuboids[iVar11].pos.z;
    camera::camera5::Camera_SetMobyDrivenTargetPos(&local_b0);
    camera::camera5::Camera_SetMobyDrivenTargetRot(&Cuboids[*piVar2].rot.x);
    iVar11 = 0;
    dVar16 = (double)((float)(dVar16 * 100.0) * 0.017453292);
    dVar15 = (double)((float)piVar2[0xb] * 100.0 * 0.017453292);
    do {
      iVar3 = *(int *)((int)uVar12 + 8);
      dVar14 = (double)Cuboids[iVar3].rot.z;
      if (dVar14 < dVar15 && dVar16 < dVar14) {
        mobyupdate_helpers::M1118_001d4048(moby,&Cuboids[iVar3].pos);
        sound::sound_LevelPlay(0,0,moby);
      }
      iVar11 = iVar11 + 1;
      uVar12 = uVar12 + 4;
    } while (iVar11 < 9);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)0x3f89999a;
    if (0x3f899999 < (int)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4)) {
      hero::Hero_Warp(&Cuboids[piVar2[1]].pos.x,&Cuboids[piVar2[1]].rot.x,0x72,0);
      local_60 = (longlong)(int)((double)animationSpeed * dVar13);
      draw::FadeToBlack((int)((double)animationSpeed * dVar13));
      moby->state = '\x06';
      camera::camera5::Camera_DeactivateMobyDrivenCam(3);
      iVar11 = piVar2[1];
      local_90 = Cuboids[iVar11].pos.x;
      local_84 = Cuboids[iVar11].pos.w;
      local_88 = Cuboids[iVar11].pos.z + 1.0;
      local_8c = Cuboids[iVar11].pos.y - 2.5;
      local_94 = 0;
      local_a0 = 0;
      local_98 = g_heroRotation.z;
      local_9c = 0xbe860a92;
      local_60 = (longlong)(int)(animationSpeed * 300.5);
      camera::SetCameraPosition(&local_90,&local_a0,2,(int)(animationSpeed * 300.5),0);
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      GameCamera.offset0.amp = 0.3;
      auVar17 = loadVectorLeftIndexed(0x34,0x1d42cc);
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x168,0x9513c0);
      pMVar10 = (MiscLevelFlags *)sound::sound_LevelPlay(0,0,moby);
    }
  }
  else if (bVar1 == 4) {
    iVar11 = fastfunc::FastDecTimerS32(uVar12 + 0x40);
    if (iVar11 != 0) {
      moby->state = '\x05';
      piVar2[0xb] = 0;
      piVar2[0xc] = 0;
      local_60 = (longlong)(int)(animationSpeed * 15.5);
      draw::FadeToBlack((int)(animationSpeed * 15.5));
      local_60 = (longlong)(int)(animationSpeed * 300.5);
      camera::SetCameraPosition(local_d0,local_c0,2,(int)(animationSpeed * 300.5),0);
      camera::camera5::Camera_SetCurrentAccel
                (DAT_007644f0,DAT_007644f4,DAT_00ef26c0,DAT_007644f8,DAT_007644fc,DAT_00ef26c4);
      camera::camera5::Camera_SetMobyDrivenTargetPos(local_d0);
      camera::camera5::Camera_SetMobyDrivenTargetRot(local_c0);
      draw::LetterBoxOn = 1;
    }
    dVar13 = 10.5;
    pMVar10 = (MiscLevelFlags *)(int)(animationSpeed * 10.5);
    local_60 = (longlong)(int)pMVar10;
    if (piVar2[0x10] < (int)pMVar10) {
      dVar16 = (double)fastfunc::FastIntToDouble(piVar2[0x10]);
      pMVar10 = (MiscLevelFlags *)&DAT_001d42cc;
      boot::SceneScreenFade =
           1.0 - (float)(dVar16 / (double)(longlong)((double)animationSpeed * dVar13));
    }
  }
  else if (bVar1 == 3) {
    fVar6 = g_heroPosition.y - (moby->pos).y;
    fVar7 = g_heroPosition.x - (moby->pos).x;
    pMVar10 = (MiscLevelFlags *)&DAT_001d42cc;
    if (((SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 3.7) &&
        (pMVar10 = (MiscLevelFlags *)mobyutil::MB_ShowPersistentMessage(4,0x1783),
        (g_buttonsPressedThisFrame & TRIANGLE) != 0)) && (pMVar10 != (MiscLevelFlags *)0x0)) {
      sound::PlayMobySound(2,0,moby);
      mobyutil::MB_ClearHelpMessage((MobyInstance *)0x4);
      auVar17 = ZEXT416(0xffffffff);
      auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      moby->state = '\x04';
      auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar17 = loadVectorLeftIndexed(0xc,0x1d42cc);
      pMVar10 = (MiscLevelFlags *)0x40;
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar17 = vectorMultiplyAddFloatingPoint
                          (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar18);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x40,uVar12);
      *(undefined4 *)((uint)(piVar2 + 0x10) & 0xfffffffc) = uVar5;
    }
  }
  else if (bVar1 == 2) {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime,(float *)(piVar2 + 0xb),0x720000,
               (float *)(piVar2 + 0xc));
    dVar16 = (double)((float)piVar2[0xc] * 0.7853982);
    dVar13 = (double)fastfunc::FastWrapRot((moby->rotation).x,(float)piVar2[0xc] * 0.7853982);
    iVar11 = piVar2[0xe];
    (moby->rotation).x = (float)dVar13;
    dVar13 = (double)fastfunc::FastDiffRots((double)MobyInstance[iVar11].rotation.x,dVar16);
    MobyInstance[piVar2[0xe]].rotation.x = (float)dVar13;
    dVar13 = (double)fastfunc::FastDiffRots((double)MobyInstance[piVar2[0xf]].rotation.x,dVar16);
    MobyInstance[piVar2[0xf]].rotation.x = (float)dVar13;
    mobyfunc::UpdateMobyTransform(MobyInstance + piVar2[0xe]);
    mobyfunc::UpdateMobyTransform(MobyInstance + piVar2[0xf]);
    uVar4 = piVar2[0xb] >> 0x1f;
    pMVar10 = (MiscLevelFlags *)((uVar4 >> 1 ^ piVar2[0xb]) - uVar4);
    if (0x3f7fffff < (int)pMVar10) {
      moby->state = '\x03';
      sound::PlayMobySound(1,0,moby);
      pMVar10 = &MiscLevelFlags;
      MiscLevelFlags.field34_0x22 = 1;
    }
  }
  else if (bVar1 == 0) {
    moby->updateDistance = -1;
    dVar13 = (double)fastfunc::FastDiffRots((double)(moby->rotation).x,0x3fe921fb60000000);
    pMVar10 = (MiscLevelFlags *)0x1;
    (moby->rotation).x = (float)dVar13;
    moby->state = '\x01';
    piVar2[0x12] = -1;
  }
  return pMVar10;
}



//==== 001d4cb0  ns=Global  size=0x48
// sig: undefined FUN_001d4cb0(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(1): 0015d12c sound::PlayMobySound

MobyInstance * FUN_001d4cb0(MobyInstance *param_1)

{
  if (param_1->state == '\x01') {
    param_1->state = '\x02';
    param_1 = (MobyInstance *)sound::PlayMobySound(0,0,param_1);
  }
  return param_1;
}



//==== 001d4cf8  ns=Global  size=0x2c
// sig: undefined FUN_001d4cf8(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

undefined8 FUN_001d4cf8(int param_1)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x20) == 7) {
    uVar1 = 2;
  }
  else if (*(byte *)(param_1 + 0x20) < 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 001d4d30  ns=mobyupdate_helpers  size=0x44
// sig: undefined M1192_001d4d30(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1192_001d4d30(void)

{
  DAT_00764554 = 0x10000;
  DAT_00ef26c0 = mobyutil::g_FrameTime * 12.0;
  DAT_00ef26c4 = mobyutil::g_FrameTime * 3.1415927;
  return;
}



//==== 001d4d88  ns=Global  size=0x278
// sig: undefined FUN_001d4d88(void)
// callers(17): 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110040 mobyutil::MB_SpawnExplosionSparks2; 001b6918 mobyupdate_unsorted::UpdateMoby_1077; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a0108 mobyupdate_helpers::M158_002a0108; 002ad118 mobyupdate_helpers::M170_002ad118; 002aed78 mobyupdate_helpers::M172_002aed78; 0030f810 mobyupdate_unsorted::UpdateMoby_243; 0039fbe8 mobyupdate_helpers::M487_0039fbe8; 0039fcb8 mobyupdate_unsorted::UpdateMoby_49; 003a5468 mobyupdate_helpers::M511_003a5468; 003fac98 mobyupdate_helpers::M638_003fac98; 00414c50 mobyupdate_unsorted::UpdateMoby_686; 00434a88 mobyupdate_helpers::M722_00434a88; 004c8510 mobyupdate_helpers::M983_004c8510
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00502730 fastfunc::FastIntToDouble

MobyInstance *
FUN_001d4d88(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined8 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte in_stack_00000077;
  
  pMVar3 = mobyfunc::CreateMoby(EXPLOSION_0070);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    dVar8 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar5 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar6 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->alpha = in_stack_00000077;
    mobyfunc::SetColorOfMoby(pMVar3,param_7 & 0xff,param_8 & 0xff,param_9 & 0xff);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    puVar1[6] = (float)((double)pMVar3->scale * param_1);
    pMVar3->scale = 0.0;
    puVar1[4] = param_2;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    (pMVar3->pos).w = param_3[3];
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
    (pMVar3->rotation).x = (float)dVar5;
    (pMVar3->rotation).y = (float)dVar6;
    (pMVar3->rotation).z = (float)dVar7;
    (pMVar3->rotation).w = 0.0;
    uVar4 = (undefined4)param_6;
    puVar1[5] = uVar4;
    auVar9 = loadVectorLeftIndexed(8,0x1d4d78);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9._0_4_ = uVar4;
    auVar9._4_4_ = uVar4;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar4;
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar9 = vectorSubtractUnsignedWordModulo(auVar9,auVar10);
    auVar9 = vectorSplatHalfWord(auVar9,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar9,0x1c,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 7) = uVar2;
    dVar5 = (double)fastfunc::FastIntToDouble(param_6);
    dVar6 = (double)fastfunc::FastIntToDouble(puVar1[5] - (int)*(short *)(puVar1 + 7));
    pMVar3->scale = (float)((double)(float)(dVar6 * (double)(float)puVar1[6]) / dVar5);
    *(ushort *)((int)puVar1 + 0x1e) = (ushort)in_stack_00000077;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 001d5008  ns=mobyupdate_unsorted  size=0x140
// sig: undefined UpdateMoby_{112_1192}(MobyInstance * moby)
// callers(0): 
// callees(4): 000efb38 mobyfunc::DeleteMoby; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

/* Moby 112
   Moby 1192 */

void mobyupdate_unsorted::UpdateMoby__112_1192_(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  pvVar2 = moby->pVar;
  dVar5 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0x14));
  dVar6 = (double)fastfunc::FastIntToDouble
                            (*(int *)((int)pvVar2 + 0x14) - (int)*(short *)((int)pvVar2 + 0x1c));
  fVar1 = (moby->rotation).x;
  moby->scale = (float)((double)(float)(dVar6 * (double)*(float *)((int)pvVar2 + 0x18)) / dVar5);
  dVar6 = 3.1415927410125732;
  dVar5 = (double)fastfunc::FastWrapRot(fVar1,mobyutil::g_FrameTime * 3.1415927);
  (moby->rotation).x = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot
                            ((moby->rotation).y,(float)((double)mobyutil::g_FrameTime * dVar6));
  (moby->rotation).y = (float)dVar5;
  dVar5 = (double)fastfunc::FastWrapRot
                            ((moby->rotation).z,(float)((double)mobyutil::g_FrameTime * dVar6));
  (moby->rotation).z = (float)dVar5;
  iVar4 = fastfunc::FastDecTimerS16((int)pvVar2 + 0x1c);
  if (iVar4 == 0) {
    uVar3 = *(uint *)((int)pvVar2 + 0x14);
    if ((int)*(short *)((int)pvVar2 + 0x1c) <
        (int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0))) {
      moby->alpha = (s8)(((int)*(short *)((int)pvVar2 + 0x1c) * (int)*(short *)((int)pvVar2 + 0x1e))
                        / (int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)));
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001d5168  ns=mobyupdate_helpers  size=0x324
// sig: undefined M1120_001d5168(void)
// callers(1): 001d55c8 mobyupdate_unsorted::UpdateMoby_1120
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1120_001d5168(int param_1)

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
  
  dVar12 = 0.0;
  iVar8 = 0;
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.25) - 0.25;
  lVar10 = uVar9 + 0x30;
  dVar13 = 255.0;
  auVar18 = loadVectorLeftIndexed(0x14,0x1d5148);
  dVar14 = 255.5;
  auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  dVar15 = 0.5;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x20);
    dVar11 = (double)fVar4;
    *(float *)(iVar3 + 0x10) = fVar4;
    if (dVar11 < dVar13) {
      if (dVar11 <= dVar12) {
        *(float *)(iVar3 + 0x10) = (float)(dVar11 + dVar13);
      }
    }
    else {
      *(float *)(iVar3 + 0x10) = (float)(dVar11 - dVar13);
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
      iVar1 = (int)(dVar11 * dVar14);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar11 = (double)fastfunc::FastIntToDouble((int)(dVar11 * dVar14) - iVar1);
    uVar5 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar15 - (double)(float)(dVar11 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),0x4040ffff,0x1040ffff)
    ;
    if (g_gameMode != GAME_MODE_SCENE) {
      uVar7 = fastfunc::FastDoubleToInt((double)*(float *)(iVar3 + 0x10));
      partupd::SpawnPart_59((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
    }
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}



//==== 001d5498  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1120_001d5498(void)
// callers(1): 001d55c8 mobyupdate_unsorted::UpdateMoby_1120
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1120_001d5498(int param_1)

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
  auVar14 = loadVectorLeftIndexed(in_LR,0x1d548c);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x1d548c);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x1d548c);
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



//==== 001d55c8  ns=mobyupdate_unsorted  size=0x27c
// sig: undefined UpdateMoby_1120(MobyInstance * moby)
// callers(0): 
// callees(11): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 00112e18 mobyutil::MB_UnlockItem; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit; 001d5168 mobyupdate_helpers::M1120_001d5168; 001d5498 mobyupdate_helpers::M1120_001d5498; 00502578 fastfunc::FastWrapRot; 005cd098 libc::printf
// strings: 0096c165: 'None' | 006546d4: 'Moby 1120 %d has no segment switch!\n'

/* Moby 1120 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1120(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  double dVar7;
  
  pvVar3 = moby->pVar;
  dVar7 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 1.5707964);
  (moby->rotation).z = (float)dVar7;
  bVar1 = moby->state;
  puVar6 = (undefined4 *)(uint)bVar1;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else if ((moby->modeBits & DISABLED) != NONE) {
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      mobyupdate_helpers::M1120_001d5498(moby);
      if (CHAR_ARRAY_0096c165[9] == '\0') {
        fVar2 = (moby->pos).z;
        moby->state = '\x01';
        (moby->pos).z = fVar2 + 1.0;
        puVar6 = (undefined4 *)0x1;
      }
      else {
        puVar6 = (undefined4 *)mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyupdate_helpers::M1120_001d5168(moby);
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      puVar6 = &DAT_001d55b8;
      if (SQRT(fVar5 * fVar5 + fVar2 * fVar2) < 3.0) {
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        update::mode_sceneInit(2);
        moby->state = '\x02';
        puVar6 = (undefined4 *)0x2;
      }
    }
  }
  else if (bVar1 < 3) {
    puVar6 = (undefined4 *)g_gameMode;
    if (g_gameMode != GAME_MODE_SCENE) {
      if (UnlockableItems.suckCannon == '\0') {
        mobyutil::MB_ToastMessage(0xfa7,0xffffffffffffffff);
      }
      else {
        mobyutil::MB_ToastMessage(0x53df,0xffffffffffffffff);
      }
      g_toastMsgTimer = 0xb4;
      mobyutil::MB_UnlockItem(9,1);
      mobyutil::MB_UnlockTrophy(VERY_SUCKY);
      iVar4 = *(int *)((int)pvVar3 + 4);
      if (iVar4 == -1) {
        libc::printf("Moby 1120 %d has no segment switch!\n",moby->uid);
      }
      else {
        respawn::SetSpawnPoint
                  ((Vec4 *)&MobyInstance[iVar4].pos,(Vec4 *)&MobyInstance[iVar4].rotation);
      }
      moby->state = '\x03';
      puVar6 = (undefined4 *)memcard::memcard_Save(0,-1);
    }
  }
  else if (bVar1 < 4) {
    puVar6 = (undefined4 *)mobyfunc::DeleteMoby(moby);
  }
  return puVar6;
}



//==== 001d5844  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1122_001d5844(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1122_001d5844(void)

{
  DAT_007645c4 = 0x10000;
  return;
}



//==== 001d5858  ns=Global  size=0xb0
// sig: undefined FUN_001d5858(void)
// callers(1): 0019ebd8 mobyupdate_unsorted::UpdateMoby_1047
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_001d5858(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  f32 fVar3;
  MobyInstance *pMVar4;
  undefined8 uVar5;
  
  pMVar4 = mobyfunc::CreateMoby(0x462);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar4->rotation).x = 0.0;
    (pMVar4->rotation).y = 0.0;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    (pMVar4->rotation).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar4->color = (int)((ulonglong)uVar5 >> 0x20);
    pMVar4->light = (int)uVar5;
    fVar2 = *(f32 *)(param_1 + 0x14);
    fVar3 = *(f32 *)(param_1 + 0x18);
    (pMVar4->pos).x = fVar1;
    (pMVar4->pos).y = fVar2;
    fVar1 = *(f32 *)(param_1 + 0x1c);
    (pMVar4->pos).z = fVar3;
    (pMVar4->pos).w = fVar1;
    (pMVar4->pos).z = 59.0;
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 001d5908  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1122(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1122 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1122(MobyInstance *moby)

{
  return moby;
}



//==== 001d590c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1123_001d590c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1123_001d590c(void)

{
  DAT_00764634 = 0x10000;
  return;
}



//==== 001d5928  ns=mobyupdate_helpers  size=0x370
// sig: undefined M1123_001d5928(void)
// callers(1): 001d5cc0 mobyupdate_unsorted::UpdateMoby_1123
// callees(2): 00057820 collproc::CollLine; 001057f4 mobyutil::SetCollDamIn

void mobyupdate_helpers::M1123_001d5928(undefined4 param_1)

{
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [56];
  
  mobyutil::SetCollDamIn(0x4018000000000000,auStack_b0,param_1,0x10000);
  collproc::CollLine(local_d0,local_c0,0,param_1,auStack_b0);
  collproc::CollLine(local_d0,local_c0,0,param_1,auStack_b0);
  return;
}



//==== 001d5cc0  ns=mobyupdate_unsorted  size=0x7e8
// sig: undefined UpdateMoby_1123(MobyInstance * moby)
// callers(0): 
// callees(15): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 000fea60 mobyutil::MB_randSphere; 00131100 partupd::SpawnPart_60; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 001d5928 mobyupdate_helpers::M1123_001d5928; 00500b30 fastfunc::FastMtxScaleIdentity; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 1123 */

ulonglong mobyupdate_unsorted::UpdateMoby_1123(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar17;
  float fVar18;
  float *pfVar19;
  undefined8 uVar16;
  int iVar20;
  float *pfVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r22;
  float *pfVar24;
  ulonglong unaff_r23;
  longlong lVar25;
  ulonglong unaff_r24;
  float *pfVar26;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  float *pfVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar28;
  ulonglong unaff_r29;
  int iVar29;
  ulonglong unaff_r30;
  longlong lVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  lVar22 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar25 = uVar14 - 0x390;
  puVar12 = (ulonglong *)lVar25;
  *puVar12 = uVar14;
  puVar12[0x74] = in_LR;
  puVar12[0x6d] = in_f27;
  puVar12[0x6e] = in_f28;
  puVar12[0x6f] = in_f29;
  puVar12[0x70] = in_f30;
  puVar12[0x71] = in_f31;
  puVar12[0x6c] = unaff_r31;
  puVar12[0x68] = unaff_r27;
  puVar12[0x6b] = unaff_r30;
  bVar1 = moby->state;
  uVar15 = (ulonglong)bVar1;
  pfVar8 = (float *)moby->pVar;
  pMVar9 = moby->pClass;
  puVar12[0x6a] = unaff_r29;
  puVar12[0x69] = unaff_r28;
  puVar12[0x67] = unaff_r26;
  puVar12[0x66] = unaff_r25;
  puVar12[0x65] = unaff_r24;
  puVar12[100] = unaff_r23;
  puVar12[99] = unaff_r22;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_00ef26e0 = 0x16;
      fVar5 = pMVar9->gScale * DAT_00764784;
      DAT_00ef26dc = 6.30584e-44;
      fVar18 = pfVar8[0x3c4];
      pfVar8[0x3c0] = 0.0;
      pfVar8[0x3c1] = 1.54143e-44;
      pfVar8[0x3c2] = 3.22299e-44;
      pfVar8[0x3c3] = 4.76441e-44;
      pfVar8[0x3c6] = -NAN;
      moby->scale = fVar5;
      if (fVar18 == -NAN) {
        uVar15 = 2;
        moby->state = '\x02';
      }
      else {
        uVar15 = 1;
        moby->state = '\x01';
        moby->collision = (ushort *)0x0;
      }
    }
    else if ((MobyInstance[(int)pfVar8[0x3c4]].oClass != ELECTRIC_GATE_POLES) ||
            (uVar15 = (ulonglong)MobyInstance[(int)pfVar8[0x3c4]].state,
            2 < MobyInstance[(int)pfVar8[0x3c4]].state)) {
      moby->state = '\x02';
      puVar10 = pMVar9->collision;
      uVar15 = ZEXT48(puVar10);
      moby->collision = puVar10;
    }
  }
  else if (bVar1 < 3) {
    iVar17 = sound::IsMobyPlayingSound(moby,(int)pfVar8[0x3c6]);
    if (iVar17 == 0) {
      fVar18 = (float)sound::PlayMobySound(0,4,moby);
      pfVar8[0x3c6] = fVar18;
    }
    mobyupdate_helpers::M1123_001d5928(lVar22);
    DAT_00ef26d8 = DAT_00764770 * mobyutil::g_FrameTime + DAT_00ef26d8;
    if (1.0 < DAT_00ef26d8) {
      DAT_00ef26d8 = DAT_00ef26d8 - 1.0;
    }
    iVar17 = 0;
    dVar39 = (double)DAT_00764778;
    dVar38 = 0.03333333507180214;
    dVar40 = (double)(float)(dVar39 * -0.5);
    pfVar24 = pfVar8;
    pfVar27 = pfVar8;
    do {
      if (pfVar27[0x3c0] == 0.0) {
        iVar28 = 0;
        lVar25 = uVar14 - 0x280;
        uVar16 = 0;
        pfVar26 = pfVar24;
        do {
          pfVar26[2] = 0.0;
          pfVar26[1] = 0.0;
          pfVar26[3] = 1.0;
          *pfVar26 = (float)dVar40;
          dVar40 = (double)(float)(dVar39 * dVar38 + dVar40);
          mobyutil::MB_randSphere(uVar16,(double)(DAT_00764774 * mobyutil::g_FrameTime),lVar25);
          iVar28 = iVar28 + 1;
          pfVar26 = pfVar26 + 4;
          lVar25 = lVar25 + 0x10;
        } while (iVar28 < 0x1e);
        pfVar26 = pfVar24 + 0x1e4;
        lVar25 = uVar14 - 0x280;
        lVar22 = uVar14 - 0x270;
        lVar30 = uVar14 - 0x260;
        lVar31 = 0x1c;
        do {
          pfVar21 = (float *)lVar25;
          fVar18 = *pfVar21;
          pfVar23 = (float *)lVar22;
          fVar5 = *pfVar23;
          *pfVar26 = fVar18 + fVar5;
          fVar6 = pfVar21[1];
          fVar7 = pfVar23[1];
          pfVar26[1] = fVar6 + fVar7;
          fVar2 = pfVar21[2];
          fVar3 = pfVar23[2];
          lVar22 = lVar22 + 0x10;
          pfVar26[2] = fVar2 + fVar3;
          fVar4 = pfVar21[3];
          pfVar26[3] = fVar4;
          pfVar21 = (float *)lVar30;
          fVar5 = fVar18 + fVar5 + *pfVar21;
          lVar25 = lVar25 + 0x10;
          *pfVar26 = fVar5;
          fVar6 = fVar6 + fVar7 + pfVar21[1];
          pfVar26[1] = fVar6;
          fVar18 = pfVar21[2];
          *pfVar26 = fVar5 * 0.333;
          pfVar26[3] = fVar4;
          lVar30 = lVar30 + 0x10;
          pfVar26[1] = fVar6 * 0.333;
          pfVar26[2] = (fVar2 + fVar3 + fVar18) * 0.333;
          pfVar26 = pfVar26 + 4;
          lVar31 = lVar31 + -1;
          fVar18 = DAT_00ef26dc;
        } while (lVar31 != 0);
      }
      else {
        pfVar21 = pfVar24 + 0x1e4;
        lVar25 = 0x1c;
        pfVar26 = pfVar24;
        do {
          pfVar19 = pfVar26 + 4;
          *pfVar19 = *pfVar19 + *pfVar21;
          pfVar26[5] = pfVar26[5] + pfVar21[1];
          pfVar23 = pfVar21 + 2;
          pfVar21 = pfVar21 + 4;
          pfVar26[6] = pfVar26[6] + *pfVar23;
          lVar25 = lVar25 + -1;
          pfVar26 = pfVar19;
        } while (lVar25 != 0);
        fVar18 = (float)((int)pfVar27[0x3c0] + -1);
      }
      iVar17 = iVar17 + 1;
      pfVar27[0x3c0] = fVar18;
      pfVar24 = pfVar24 + 0x78;
      pfVar27 = pfVar27 + 1;
    } while (iVar17 < 4);
    fVar18 = (moby->pos).y - GameCamera.posY;
    fVar5 = (moby->pos).x - GameCamera.posX;
    fVar6 = (moby->pos).z - GameCamera.posZ;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar18 * fVar18) < 48.0) {
      RegisterFuncForMoby(&PTR_M1124_001d64b0_00708e50,moby);
    }
    fVar18 = pfVar8[0x3c5];
    uVar15 = (ulonglong)(uint)fVar18;
    if ((-1 < (int)fVar18) &&
       (uVar15 = (ulonglong)(byte)MobyInstance[(int)fVar18].setByGroup,
       MobyInstance[(int)fVar18].setByGroup != 0)) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x03';
      fVar18 = pfVar8[0x3c6];
      if ((fVar18 != -NAN) &&
         ((sound::g_SoundChannels[(int)fVar18].pMoby == moby &&
          (sound::g_SoundChannels[(int)fVar18].state != '\0')))) {
        sound::sound_Kill((int)fVar18);
      }
      pfVar8[0x3c6] = -NAN;
      iVar17 = sound::PlayMobySound(1,0,moby);
      uVar15 = (ulonglong)iVar17;
    }
  }
  else if (bVar1 < 4) {
    lVar30 = uVar14 - 0x300;
    fastfunc::FastEulerToMtx1(lVar30,lVar22 + 0x40);
    fastfunc::FastMtxScaleIdentity((double)DAT_0076477c,uVar14 - 0x2c0);
    fastfunc::FastVecMtx4Mul(lVar30,lVar30,uVar14 - 0x2c0);
    iVar28 = 0;
    auVar46 = ZEXT416(0);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    iVar17 = 0;
    do {
      lVar30 = uVar14 - 0x2c0;
      fastfunc::FastEulerToMtx1(lVar30,&DAT_00764720 + iVar17);
      fastfunc::FastVecMtx4Mul(lVar30,uVar14 - 0x300,lVar30);
      fVar18 = (moby->pos).y;
      auVar42 = vectorConvertFromSignedFixedPointWord(auVar46,0);
      auVar43 = loadVectorLeftIndexed(0x108,lVar25);
      auVar45 = loadVectorLeftIndexed(0x18,lVar22);
      auVar44 = vectorAddFloatingPoint(auVar43,auVar45);
      iVar29 = 0;
      *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) + (moby->pos).x;
      *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) + fVar18;
      auVar43 = loadVectorLeftIndexed(0x18,0x1d5c98);
      auVar45 = loadVectorLeftIndexed(0x1c,0x1d5c98);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar43 = vectorAddFloatingPoint(auVar43,auVar44);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x108,lVar25
                         );
      *(undefined4 *)(puVar12 + 0x21) = uVar11;
      dVar41 = 1.0;
      *(undefined4 *)((int)puVar12 + 0x10c) = 0x3f800000;
      dVar40 = 0.0;
      dVar39 = 0.75;
      dVar38 = 0.5;
      do {
        dVar32 = (double)mobyutil::MB_randRangeSigned
                                   (dVar40,(double)(float)((double)DAT_00764778 * dVar39));
        fVar5 = *(float *)((int)puVar12 + 0xd4);
        fVar6 = *(float *)(puVar12 + 0x1a);
        fVar7 = *(float *)(puVar12 + 0x1b);
        dVar37 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        *(undefined4 *)((int)puVar12 + 0x7c) = *(undefined4 *)((int)puVar12 + 0xdc);
        uVar13 = DAT_0076478c;
        uVar11 = DAT_00764788;
        fVar18 = (float)(dVar32 / dVar37);
        dVar32 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar32 = (double)(fVar7 * fVar18);
        }
        dVar35 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar35 = (double)(fVar5 * fVar18);
        }
        dVar36 = dVar40;
        if (dVar40 - dVar37 < 0.0) {
          dVar36 = (double)(fVar6 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar32 = (double)(fVar7 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar35 = (double)(fVar5 * fVar18);
        }
        if (dVar37 - dVar40 < 0.0) {
          dVar36 = (double)(fVar6 * fVar18);
        }
        *(float *)(puVar12 + 0xf) = (float)(dVar32 + (double)*(float *)(puVar12 + 0x21));
        *(float *)((int)puVar12 + 0x74) = (float)(dVar35 + (double)*(float *)((int)puVar12 + 0x104))
        ;
        *(float *)(puVar12 + 0xe) = (float)(dVar36 + (double)*(float *)(puVar12 + 0x20));
        mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar41);
        uVar16 = fastfunc::FastLerpColor(uVar11,uVar13);
        uVar33 = mobyutil::MB_randRangeFloat(DAT_00764790,DAT_00764794);
        uVar15 = (ulonglong)DAT_0076479c;
        puVar12[0x5e] = (longlong)DAT_00764798;
        uVar34 = puVar12[0x5e];
        puVar12[0x5e] = uVar15;
        mobyutil::MB_randRangeFloat((float)(longlong)uVar34,(float)(longlong)puVar12[0x5e]);
        iVar20 = fastfunc::FastDoubleToInt();
        mobyutil::MB_randSphere
                  ((double)(DAT_007647a0 * mobyutil::g_FrameTime),
                   (double)(DAT_007647a4 * mobyutil::g_FrameTime),uVar14 - 0x310);
        puVar12[0x5e] = (longlong)iVar20;
        puVar12[0x5e] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar12[0x5e] + dVar38));
        mobyutil::MB_randInt(0xff);
        partupd::SpawnPart_60(uVar33,uVar14 - 800,uVar14 - 0x310,uVar16);
        iVar29 = iVar29 + 1;
      } while (iVar29 < 0x32);
      iVar28 = iVar28 + 1;
      iVar17 = iVar17 + 0x10;
      auVar43._0_4_ = auVar46._0_4_ + 1;
      auVar43._8_8_ = auVar46._8_8_;
      auVar43._4_4_ = auVar46._4_4_ + 1;
      auVar45._0_8_ = auVar43._0_8_;
      auVar45._12_4_ = auVar46._12_4_;
      auVar45._8_4_ = auVar46._8_4_ + 1;
      auVar46._0_12_ = auVar45._0_12_;
      auVar46._12_4_ = auVar45._12_4_ + 1;
    } while (iVar28 < 4);
    uVar15 = 4;
    moby->state = '\x04';
  }
  return uVar15;
}



//==== 001d64b0  ns=mobyupdate_helpers  size=0x30c
// sig: undefined M1124_001d64b0(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00077c88 draw::DrawColorGradientStrip; 00174f80 vuchain::SetGSReg; 00500b30 fastfunc::FastMtxScaleIdentity; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1124_001d64b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong unaff_r22;
  int iVar9;
  ulonglong unaff_r23;
  longlong lVar10;
  ulonglong unaff_r24;
  longlong lVar11;
  ulonglong unaff_r25;
  undefined *puVar12;
  ulonglong unaff_r26;
  longlong lVar13;
  float *pfVar14;
  ulonglong unaff_r27;
  longlong lVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar16;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar10 = uVar7 - 0x2e0;
  puVar3 = (ulonglong *)lVar10;
  *puVar3 = uVar7;
  puVar3[0x5e] = in_LR;
  lVar5 = uVar7 - 0x60;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar3[0x58] = unaff_r28;
  puVar3[0x5b] = unaff_r31;
  puVar3[0x5a] = unaff_r30;
  lVar17 = uVar7 - 0x270;
  puVar3[0x59] = unaff_r29;
  iVar1 = *(int *)(param_1 + 0x78);
  puVar3[0x57] = unaff_r27;
  puVar3[0x56] = unaff_r26;
  puVar3[0x55] = unaff_r25;
  puVar3[0x54] = unaff_r24;
  puVar3[0x53] = unaff_r23;
  puVar3[0x52] = unaff_r22;
  fastfunc::FastEulerToMtx1(lVar17,param_1 + 0x40);
  fastfunc::FastMtxScaleIdentity((double)DAT_0076477c,uVar7 - 0x230);
  fastfunc::FastVecMtx4Mul(lVar17,lVar17,uVar7 - 0x230);
  uVar8 = draw::GetEffectTex(0xe);
  vuchain::SetGSReg(0x18,uVar8);
  uVar8 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar8);
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar8);
  uVar8 = idol_draw::PackCmd(DAT_00ef26c8,DAT_00764660,DAT_00ef26cc,DAT_00764664,0x80);
  vuchain::SetGSReg(3,uVar8);
  stub::STUB_00071170();
  auVar20 = loadVectorLeftIndexed(lVar5,0x1d64a8);
  iVar9 = 0;
  auVar21 = ZEXT416(0);
  auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar20 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  lVar11 = uVar7 - 0x1f0;
  auVar21 = loadVectorLeftIndexed(4,0x1d64a8);
  iVar16 = 0;
  auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  puVar12 = &DAT_00764720;
  lVar13 = uVar7 - 0x1c0;
  lVar15 = uVar7 - 0x1b8;
  lVar17 = lVar11;
  do {
    fastfunc::FastEulerToMtx1(lVar17,puVar12);
    fastfunc::FastVecMtx4Mul(lVar17,uVar7 - 0x270,lVar17);
    pfVar14 = (float *)lVar13;
    auVar18 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    iVar9 = iVar9 + 1;
    puVar12 = puVar12 + 0x10;
    auVar19._0_4_ = auVar22._0_4_ + 1;
    auVar19._8_8_ = auVar22._8_8_;
    auVar19._4_4_ = auVar22._4_4_ + 1;
    auVar23._0_8_ = auVar19._0_8_;
    auVar23._12_4_ = auVar22._12_4_;
    auVar23._8_4_ = auVar22._8_4_ + 1;
    auVar22._0_12_ = auVar23._0_12_;
    auVar22._12_4_ = auVar23._12_4_ + 1;
    auVar18 = vectorMultiplyAddFloatingPoint(auVar18,auVar20,auVar21);
    lVar17 = lVar17 + 0x40;
    *pfVar14 = *pfVar14 + *(float *)(param_1 + 0x10);
    pfVar14[1] = pfVar14[1] + *(float *)(param_1 + 0x14);
    pfVar14[2] = pfVar14[2] + *(float *)(param_1 + 0x18);
    auVar19 = loadVectorLeftIndexed(lVar5,lVar15);
    lVar13 = lVar13 + 0x40;
    auVar18 = vectorAddFloatingPoint(auVar18,auVar19);
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0,lVar15);
    *(undefined4 *)lVar15 = uVar2;
    *(undefined4 *)((int)lVar10 + 300) = 0x3f800000;
    uVar2 = DAT_00ef26e0;
    lVar15 = lVar15 + 0x40;
    lVar10 = lVar10 + 0x40;
  } while (iVar9 < 4);
  *(undefined4 *)(puVar3 + 0x46) = DAT_00ef26dc;
  *(int *)(puVar3 + 0x47) = iVar1 + 0xf00;
  *(undefined4 *)((int)puVar3 + 0x234) = uVar2;
  puVar12 = PTR_DAT_00764674;
  *(undefined4 *)((int)puVar3 + 0x23c) = DAT_00764670;
  uVar2 = DAT_0076476c;
  *(undefined **)(puVar3 + 0x48) = puVar12;
  uVar4 = DAT_00ef26d8;
  *(undefined4 *)((int)puVar3 + 0x24c) = uVar2;
  *(undefined4 *)(puVar3 + 0x4a) = uVar4;
  *(undefined4 *)((int)puVar3 + 0x244) = 0x1e;
  *(int *)(puVar3 + 0x49) = iVar1;
  do {
    draw::DrawColorGradientStrip(uVar7 - 0xb0,lVar11);
    iVar16 = iVar16 + 1;
    lVar11 = lVar11 + 0x40;
  } while (iVar16 < 4);
  return;
}



//==== 001d67f0  ns=mobyupdate_unsorted  size=0x2e0
// sig: undefined UpdateMoby_1124(MobyInstance * moby)
// callers(0): 
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010675c mobyutil::MB_damage; 00242738 MB_SpawnBolts

/* Moby 1124 */

void mobyupdate_unsorted::UpdateMoby_1124(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint boltValue;
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
  float local_b0;
  float local_ac;
  float local_a8;
  Vec4 local_a0;
  
  fVar1 = moby->pClass->gScale;
  if (moby->setByGroup != '\0') {
    moby->setByGroup = moby->setByGroup + -1;
  }
  moby->scale = fVar1 * DAT_007647b0;
  iVar2 = mobyutil::MB_damage(moby,0x330000,0);
  if ((iVar2 != 0) && (moby->setByGroup == '\0')) {
    iVar2 = 0;
    dVar8 = 2.0;
    dVar9 = 1.570796251296997;
    dVar10 = 3.141592502593994;
    dVar11 = -3.141592502593994;
    dVar12 = -0.16666656732559204;
    dVar13 = 0.008333025500178337;
    dVar14 = -0.0001980741071747616;
    dVar15 = 2.601886990305502e-06;
    dVar16 = 0.0;
    dVar17 = 4.0;
    dVar18 = 3.0;
    dVar19 = 6.0;
    do {
      boltValue = 1;
      iVar3 = mobyutil::MB_randInt(4);
      local_a0.x = (moby->pos).x;
      local_a0.y = (moby->pos).y;
      local_a0.w = (moby->pos).w;
      if (iVar3 < 2) {
        if ((-1 < iVar3) && (0 < iVar3)) {
          boltValue = 5;
        }
      }
      else if (iVar3 < 3) {
        boltValue = 0x14;
      }
      else if (iVar3 < 4) {
        boltValue = 0x32;
      }
      local_a0.z = (float)((double)(moby->pos).z + dVar8);
      dVar4 = (double)mobyutil::MB_randRot();
      dVar5 = (double)(float)(dVar4 + dVar9);
      dVar4 = (double)(float)(dVar10 - dVar5);
      if (dVar5 - (double)(float)(dVar10 - dVar5) < 0.0) {
        dVar4 = dVar5;
      }
      dVar6 = (double)(float)(dVar11 - dVar5);
      if ((double)(float)(dVar11 - dVar5) - dVar4 < 0.0) {
        dVar6 = dVar4;
      }
      dVar4 = (double)(float)(dVar6 * dVar6);
      dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
      dVar5 = (double)(float)(dVar4 * dVar7);
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar5) * dVar15 +
                             (double)(float)(dVar5 * dVar14 +
                                            (double)(float)(dVar7 * dVar13 +
                                                           (double)(float)((double)(float)(dVar4 * 
                                                  dVar6) * dVar12 + dVar6))));
      dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
      local_b0 = (float)((double)(float)(dVar4 * (double)mobyutil::g_FrameTime) * dVar5);
      dVar5 = (double)mobyutil::MB_randRot();
      dVar4 = (double)(float)(dVar10 - dVar5);
      if (dVar5 - (double)(float)(dVar10 - dVar5) < 0.0) {
        dVar4 = dVar5;
      }
      dVar6 = (double)(float)(dVar11 - dVar5);
      if ((double)(float)(dVar11 - dVar5) - dVar4 < 0.0) {
        dVar6 = dVar4;
      }
      dVar4 = (double)(float)(dVar6 * dVar6);
      dVar7 = (double)(float)(dVar4 * (double)(float)(dVar4 * dVar6));
      dVar5 = (double)(float)(dVar4 * dVar7);
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar5) * dVar15 +
                             (double)(float)(dVar5 * dVar14 +
                                            (double)(float)(dVar7 * dVar13 +
                                                           (double)(float)((double)(float)(dVar4 * 
                                                  dVar6) * dVar12 + dVar6))));
      dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar17);
      local_a8 = 0.0;
      local_ac = (float)((double)(float)(dVar4 * (double)mobyutil::g_FrameTime) * dVar5);
      dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar19);
      local_a8 = (float)(dVar4 * (double)mobyutil::g_FrameTime);
      MB_SpawnBolts(moby,&local_a0,&local_b0,0,boltValue,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    moby->damage = -1;
  }
  return;
}



//==== 001d6b28  ns=mobyupdate_unsorted  size=0xd28
// sig: undefined UpdateMoby_1126(MobyInstance * moby)
// callers(0): 
// callees(13): 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010de78 mobyutil::MB_WrapRot; 0015d12c sound::PlayMobySound; 0049fba0 FUN_0049fba0; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* Moby 1126 */

void mobyupdate_unsorted::UpdateMoby_1126(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  f32 fVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined4 uVar22;
  longlong lVar21;
  int iVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  ulonglong in_f31;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float fVar36;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x130;
  puVar12 = (ulonglong *)lVar21;
  *puVar12 = uVar20;
  puVar12[0x28] = in_LR;
  puVar12[0x25] = in_f31;
  lVar18 = uVar20 - 0x40;
  puVar19 = (undefined4 *)lVar18;
  puVar19[3] = in_vr31_32_3;
  puVar19[2] = in_vr31_32_2;
  puVar19[1] = in_vr31_32_1;
  *puVar19 = in_vr31_32_0;
  puVar12[0x24] = unaff_r31;
  puVar12[0x23] = unaff_r30;
  puVar12[0x22] = unaff_r29;
  puVar12[0x21] = unaff_r28;
  if (moby != (MobyInstance *)0x0) {
    pvVar7 = moby->pVar;
    uVar27 = ZEXT48(pvVar7);
    if (pvVar7 != (void *)0x0) {
      uVar22 = mobyutil::MB_damage(moby,0x230000,0);
      mobyutil::MB_HandleDamage(moby,uVar22,uVar27 + 0x20,0,puVar12 + 0x12,0,0,4);
      if ((moby->state < 2) && (1 < *(int *)(puVar12 + 0x12))) {
        sound::PlayMobySound(1,0,moby);
        mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
        auVar32 = loadVectorLeftIndexed(lVar18,0x1d6ad0);
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar32,auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x26,uVar27);
        *(undefined2 *)((int)pvVar7 + 0x26) = uVar11;
        mobyutil::MB_UpdateLightsTransition(moby,uVar27 + 0x60);
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar30);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
        *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(moby,2,0,5);
        }
        moby->state = '\x02';
      }
      moby->damage = -1;
      mobyutil::MB_ColorDyingMoby(moby,uVar27 + 0x60);
      uVar1 = moby->state;
      if (uVar1 == '\x04') {
        fVar8 = (moby->pos).z;
        uVar9 = (int)fVar8 >> 0x1f;
        uVar10 = (int)*(uint *)((int)pvVar7 + 0x90) >> 0x1f;
        if ((int)((uVar9 >> 1 ^ (uint)fVar8) - uVar9) <
            (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar7 + 0x90)) - uVar10)) {
          (moby->pos).z = mobyutil::g_FrameTime * 5.0 + (moby->pos).z;
        }
        else {
          MVar6 = moby->modeBits;
          uVar1 = moby->animationId;
          (moby->pos).z = *(f32 *)((int)pvVar7 + 0x90);
          moby->modeBits = MVar6 | CAN_BE_AUTO_TARGETED;
          if (uVar1 != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,5);
          }
          moby->state = '\x01';
        }
      }
      else if (uVar1 == '\x03') {
        if (((moby->updateId != '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,0);
        }
        fVar36 = 0.7;
        fVar4 = (moby->pos).z;
        fVar3 = *(float *)((int)pvVar7 + 0x90);
        if (*(float *)((int)pvVar7 + 0x90) - 0.7 < fVar4) {
          fVar36 = mobyutil::g_FrameTime * 5.0;
          fVar3 = fVar4;
        }
        dVar29 = (double)(moby->rotation).z;
        (moby->pos).z = fVar3 - fVar36;
        fVar36 = mobyutil::MB_WrapRot
                           (*(float *)((int)pvVar7 + 0x80) + *(float *)((int)pvVar7 + 0x88));
        dVar29 = (double)fastfunc::FastSubRots((float)dVar29,fVar36);
        if (dVar29 <= (double)(mobyutil::g_FrameTime * 12.566371)) {
          fVar36 = mobyutil::MB_WrapRot
                             (*(float *)((int)pvVar7 + 0x80) + *(float *)((int)pvVar7 + 0x88));
          dVar29 = (double)fVar36;
        }
        else {
          dVar29 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,mobyutil::g_FrameTime * 12.566371);
        }
        (moby->rotation).z = (float)dVar29;
        iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          sound::PlayMobySound(2,0,moby);
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(moby,3,0,5);
          }
          moby->state = '\x04';
        }
      }
      else if (uVar1 == '\x02') {
        if (((moby->updateId != '\x04') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          mobyutil::MB_SetAnimation(moby,4,0,1);
        }
        dVar29 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 12.566371)
        ;
        (moby->rotation).z = (float)dVar29;
        iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x4c,0x1d6ad0);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = vectorSplatHalfWord(auVar30,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
          *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x01') {
        if (((moby->updateId != '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x01')) {
          mobyutil::MB_SetAnimation(moby,1,0,1);
        }
        if (*(short *)((int)pvVar7 + 0x7e) == 0) {
          fVar36 = *(float *)((int)pvVar7 + 0x8c);
          fVar4 = *(float *)((int)pvVar7 + 0x78) * 0.017453292 * mobyutil::g_FrameTime +
                  *(float *)((int)pvVar7 + 0x88);
          *(float *)((int)pvVar7 + 0x88) = fVar4;
          if (fVar36 < fVar4) {
            *(undefined2 *)((int)pvVar7 + 0x7e) = 1;
            *(float *)((int)pvVar7 + 0x88) = fVar36;
            fVar4 = fVar36;
          }
        }
        else {
          fVar4 = -(*(float *)((int)pvVar7 + 0x78) * 0.017453292 * mobyutil::g_FrameTime -
                   *(float *)((int)pvVar7 + 0x88));
          *(float *)((int)pvVar7 + 0x88) = fVar4;
          if (fVar4 < 0.0) {
            *(undefined2 *)((int)pvVar7 + 0x7e) = 0;
            *(undefined4 *)((int)pvVar7 + 0x88) = 0;
            fVar4 = 0.0;
          }
        }
        fVar36 = mobyutil::MB_WrapRot(*(float *)((int)pvVar7 + 0x80) + fVar4);
        (moby->rotation).z = fVar36;
        iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x7c);
        if (iVar23 != 0) {
          if (moby->setByGroup == '\0') {
            iVar23 = *(int *)((int)pvVar7 + 0x98);
            if ((iVar23 == 0) || ((*(ushort *)((int)pvVar7 + 0x9c) & 1) != 0)) {
              mobyfunc::GetBonePosition(moby,0,uVar20 - 0xc0);
              fVar2 = mobyutil::g_FrameTime;
              fVar36 = (moby->rotation).z;
              fVar4 = fVar36 + 1.5707963;
              fVar3 = 3.1415925 - fVar36;
              if (fVar36 - (3.1415925 - fVar36) < 0.0) {
                fVar3 = fVar36;
              }
              fVar5 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar5 = fVar4;
              }
              fVar13 = -3.1415925 - fVar36;
              if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
                fVar13 = fVar3;
              }
              fVar36 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
                fVar36 = fVar5;
              }
              fVar4 = fVar13 * fVar13;
              fVar3 = fVar36 * fVar36;
              fVar16 = fVar4 * fVar4 * fVar13;
              fVar5 = fVar3 * fVar3 * fVar36;
              fVar17 = fVar4 * fVar16;
              *(undefined4 *)(puVar12 + 0x11) = 0;
              fVar15 = fVar3 * fVar5;
              *(float *)((int)puVar12 + 0x84) =
                   fVar2 * 15.0 *
                   (fVar4 * fVar17 * 2.601887e-06 +
                   fVar17 * -0.0001980741 +
                   fVar16 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13);
              *(float *)(puVar12 + 0x10) =
                   fVar2 * 15.0 *
                   (fVar3 * fVar15 * 2.601887e-06 +
                   fVar15 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar3 * fVar36 * -0.16666657 + fVar36);
              sound::PlayMobySound(0,0,moby);
              FUN_0049fba0(uVar20 - 0xc0,uVar20 - 0xb0,moby,*(undefined1 *)((int)pvVar7 + 0x9e));
              iVar23 = *(int *)((int)pvVar7 + 0x98);
            }
            if (iVar23 == 0) {
              *(ushort *)((int)pvVar7 + 0x9c) = *(ushort *)((int)pvVar7 + 0x9c) ^ 1;
            }
            else {
              iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x9c);
              if (iVar23 != 0) {
                moby->setByGroup = '\x01';
                *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x98);
              }
            }
          }
          else {
            iVar23 = fastfunc::FastDecTimerS16(uVar27 + 0x9c);
            if (iVar23 != 0) {
              moby->setByGroup = '\0';
              *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x94);
            }
          }
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0x34,0x1d6ad0);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar31 = vectorSplatHalfWord(auVar30,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar31,0x7c,uVar27);
          *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          fVar36 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          fVar36 = SQRT(fVar4 * fVar4 + fVar36 * fVar36);
          if ((55.0 < fVar36) || ((35.0 < fVar36 && (moby->enabled == '\0')))) {
            if (fVar36 <= 80.0) {
              auVar31 = ZEXT416(2);
              auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              if (120.0 < fVar36) {
                auVar31 = ZEXT416(4);
                auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              }
              auVar32 = ZEXT416(0xfffffff0);
              auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
              auVar34 = vectorMultiplyOddUnsignedHalfWord(auVar30,auVar31);
              auVar32 = ZEXT416(0);
              auVar31 = vectorRotateLeftIntegerWord(auVar31,auVar33);
              auVar30 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar30,auVar31,
                                   auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar33);
              auVar30 = ZEXT416((uint)(auVar30._0_4_ + auVar34._0_4_)) &
                        (undefined1  [16])0xffffffff;
              auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            }
            else {
              auVar31 = ZEXT416(3);
              auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              auVar31 = ZEXT416(0xfffffff0);
              auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
              auVar31 = ZEXT416(0);
              auVar35 = vectorRotateLeftIntegerWord(auVar32,auVar34);
              auVar33 = vectorMultiplyOddUnsignedHalfWord(auVar30,auVar32);
              auVar30 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar30,auVar35,
                                   auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar34);
              auVar32._0_4_ = auVar30._0_4_ + auVar33._0_4_;
              auVar32._8_8_ = auVar30._8_8_;
              auVar32._4_4_ = auVar30._4_4_ + auVar33._4_4_;
              auVar31._0_8_ = auVar32._0_8_;
              auVar31._12_4_ = auVar30._12_4_;
              auVar31._8_4_ = auVar30._8_4_ + auVar33._8_4_;
              auVar30._0_12_ = auVar31._0_12_;
              auVar30._12_4_ = auVar31._12_4_ + auVar33._12_4_;
            }
            auVar30 = vectorSplatHalfWord(auVar30,1);
            uVar11 = storeVectorElementHalfWordIndexed(auVar30,0x7c,uVar27);
            *(undefined2 *)((int)pvVar7 + 0x7c) = uVar11;
          }
        }
      }
      else if (uVar1 == '\0') {
        iVar23 = *(int *)((int)pvVar7 + 0x70);
        if (iVar23 != -1) {
          fVar36 = MobyInstance[iVar23].pos.x - (moby->pos).x;
          fVar4 = MobyInstance[iVar23].pos.y - (moby->pos).y;
          fVar3 = ABS(fVar36);
          fVar2 = ABS(fVar4);
          *(float *)(puVar12 + 0x14) = fVar36;
          *(float *)((int)puVar12 + 0xa4) = fVar4;
          *(float *)(puVar12 + 0x15) = fVar3 - fVar2;
          fVar36 = 0.0;
          uVar27 = (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar12 + 0x14));
          if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)((int)puVar12 + 0xa4));
          if (*(float *)(puVar12 + 0x15) - 0.0 < 0.0) {
            fVar13 = fVar3;
          }
          if (0.0 < fVar4) {
            lVar18 = uVar20 - 0x120;
            lVar26 = uVar20 - 0x54;
            lVar24 = uVar20 - 100;
            lVar28 = 2;
            fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x1b) = fVar4;
            *(float *)(puVar12 + 0x1a) = fVar4;
            *(float *)((int)puVar12 + 0xd4) = fVar4;
            *(float *)((int)puVar12 + 0xcc) = fVar4;
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar3;
            *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar4;
            *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar4 * fVar3;
            do {
              *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xbc) * fVar4 * fVar4;
              iVar23 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar20 - 100;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar21;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar3 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0xcc) = *(float *)((int)lVar18 + 0xcc) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar24 = 2;
            lVar18 = lVar21;
            do {
              iVar23 = (int)lVar18;
              iVar14 = (int)lVar26;
              lVar18 = lVar18 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar36 = fVar36 + *(float *)(iVar23 + 0xcc) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            fVar36 = (fVar36 + 0.7853982) * fVar5 + fVar2;
          }
          *(float *)((int)pvVar7 + 0x80) = fVar36;
          if (fVar36 < 0.0) {
            *(float *)((int)pvVar7 + 0x80) = fVar36 + 6.2831855;
          }
        }
        iVar23 = *(int *)((int)pvVar7 + 0x74);
        if (iVar23 == -1) {
          fVar4 = *(float *)((int)pvVar7 + 0x80);
          fVar36 = fVar4 + 6.2831855;
          *(float *)((int)pvVar7 + 0x84) = fVar36;
        }
        else {
          fVar36 = MobyInstance[iVar23].pos.x - (moby->pos).x;
          fVar4 = MobyInstance[iVar23].pos.y - (moby->pos).y;
          fVar3 = ABS(fVar36);
          fVar2 = ABS(fVar4);
          *(float *)((int)puVar12 + 0x94) = fVar36;
          *(float *)(puVar12 + 0x13) = fVar4;
          *(float *)((int)puVar12 + 0x9c) = fVar3 - fVar2;
          fVar36 = 0.0;
          uVar27 = (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar12 + 0x94));
          if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
            fVar4 = fVar2;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
          fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          fVar13 = ABS(*(float *)(puVar12 + 0x13));
          if (*(float *)((int)puVar12 + 0x9c) - 0.0 < 0.0) {
            fVar13 = fVar3;
          }
          if (0.0 < fVar4) {
            lVar18 = uVar20 - 0x120;
            lVar26 = uVar20 - 0x74;
            lVar24 = uVar20 - 0x84;
            lVar28 = 2;
            fVar4 = (fVar13 - fVar4) / (fVar13 + fVar4);
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x17) = fVar4;
            *(float *)(puVar12 + 0x16) = fVar4;
            *(float *)((int)puVar12 + 0xb4) = fVar4;
            *(float *)((int)puVar12 + 0xac) = fVar4;
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x16) = *(float *)(puVar12 + 0x16) * fVar3;
            *(float *)((int)puVar12 + 0xb4) = *(float *)((int)puVar12 + 0xb4) * fVar4;
            *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar4 * fVar3;
            do {
              *(float *)((int)lVar18 + 0xac) = *(float *)((int)lVar18 + 0x9c) * fVar4 * fVar4;
              iVar23 = (int)lVar24;
              lVar24 = lVar24 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar28 = 4;
            lVar26 = uVar20 - 0x84;
            pfVar25 = (float *)&DAT_007358e0;
            lVar18 = lVar21;
            lVar24 = lVar26;
            do {
              fVar4 = *pfVar25;
              fVar3 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar18 + 0xac) = *(float *)((int)lVar18 + 0xac) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar3;
              lVar24 = lVar24 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            lVar18 = 2;
            do {
              iVar23 = (int)lVar21;
              iVar14 = (int)lVar26;
              lVar21 = lVar21 + 0x10;
              lVar26 = lVar26 + 0x10;
              fVar36 = fVar36 + *(float *)(iVar23 + 0xac) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar36 = (fVar36 + 0.7853982) * fVar5 + fVar2;
          }
          *(float *)((int)pvVar7 + 0x84) = fVar36;
          if (fVar36 < 0.0) {
            fVar36 = fVar36 + 6.2831855;
            *(float *)((int)pvVar7 + 0x84) = fVar36;
          }
          fVar4 = *(float *)((int)pvVar7 + 0x80);
          if (fVar36 < fVar4) {
            fVar36 = fVar36 + 6.2831855;
            *(float *)((int)pvVar7 + 0x84) = fVar36;
          }
        }
        *(undefined4 *)((int)pvVar7 + 0x88) = 0;
        *(float *)((int)pvVar7 + 0x8c) = fVar36 - fVar4;
        fVar36 = mobyutil::MB_WrapRot(fVar4);
        (moby->rotation).z = fVar36;
        *(f32 *)((int)pvVar7 + 0x90) = (moby->pos).z;
        *(undefined1 *)((int)pvVar7 + 0x29) = 0;
        moby->setByGroup = '\0';
        *(short *)((int)pvVar7 + 0x9c) = (short)*(undefined4 *)((int)pvVar7 + 0x94);
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,0);
        }
        moby->state = '\x01';
      }
    }
  }
  return;
}



//==== 001d7850  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1128_001d7850(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1128_001d7850(void)

{
  DAT_00764800 = 0x10000;
  return;
}



//==== 001d7870  ns=mobyupdate_unsorted  size=0x6b0
// sig: undefined UpdateMoby_1128(MobyInstance * moby)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* Moby 1128 */

undefined * mobyupdate_unsorted::UpdateMoby_1128(MobyInstance *moby)

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
  float fVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  uint uVar19;
  undefined *puVar20;
  
  uVar19 = (uint)(byte)moby->levelFlagIdx;
  pfVar13 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][uVar19] == -1)) {
    pfVar13[4] = -NAN;
    uVar19 = (uint)(byte)moby->levelFlagIdx;
  }
  puVar20 = (undefined *)0x0;
  bVar18 = false;
  if ((&DAT_00a202c0)[uVar19] == -1) {
    if (pfVar13[0xf] == 0.0) {
      bVar18 = true;
    }
    else {
      puVar20 = (undefined *)0x1;
    }
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((bVar18) ||
       ((((puVar20 == (undefined *)0x0 && (pfVar13[4] != -NAN)) &&
         (MobyInstance + (int)pfVar13[4] != (MobyInstance *)0x0)) &&
        ((bVar2 = MobyInstance[(int)pfVar13[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
         ((float)(uint)bVar2 != pfVar13[5])))))) {
      fVar3 = pfVar13[8];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[9];
      puVar20 = &DAT_00720000;
      fVar6 = 0.0;
      fVar7 = (moby->transform).v1.y;
      fVar8 = (moby->transform).v1.z;
      fVar17 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar9 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v0.z;
      fVar11 = (moby->transform).v2.y;
      fVar12 = (moby->transform).v2.z;
      fVar14 = -(pfVar13[0xb] * mobyutil::g_FrameTime) / fVar17;
      fVar16 = fVar6;
      if (0.0 - fVar17 < 0.0) {
        fVar16 = fVar14 * fVar3;
      }
      fVar15 = fVar6;
      if (0.0 - fVar17 < 0.0) {
        fVar15 = fVar14 * fVar4;
      }
      if (0.0 - fVar17 < 0.0) {
        fVar6 = fVar14 * fVar5;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar16 = fVar14 * fVar3;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar15 = fVar14 * fVar4;
      }
      if (fVar17 - 0.0 < 0.0) {
        fVar6 = fVar14 * fVar5;
      }
      (moby->pos).x =
           (moby->pos).x +
           (moby->transform).v2.x * fVar6 +
           (moby->transform).v0.x * fVar15 + (moby->transform).v1.x * fVar16;
      (moby->pos).y = (moby->pos).y + fVar11 * fVar6 + fVar9 * fVar15 + fVar7 * fVar16;
      (moby->pos).z = (moby->pos).z + fVar12 * fVar6 + fVar10 * fVar15 + fVar8 * fVar16;
      fVar3 = pfVar13[0xb] * mobyutil::g_FrameTime + pfVar13[3];
      pfVar13[3] = fVar3;
      if (fVar17 < fVar3) {
        (moby->pos).x = *pfVar13;
        fVar3 = pfVar13[0xc];
        (moby->pos).y = pfVar13[1];
        (moby->pos).z = pfVar13[2];
        (moby->pos).w = pfVar13[3];
        if (fVar3 != -NAN) {
          sound::PlayMobySound((int)pfVar13[0xd],0,moby);
        }
        if (pfVar13[0xe] != -NAN) {
          (&DAT_00a20828)[(int)pfVar13[0xe]] = 0;
        }
        puVar20 = (undefined *)0x1;
        moby->state = '\x01';
      }
    }
    else {
      if (pfVar13[0xc] != -NAN) {
        sound::PlayMobySound((int)pfVar13[0xc],0,moby);
      }
      puVar20 = (undefined *)0x2;
      moby->state = '\x02';
    }
    return puVar20;
  }
  if (uVar1 != '\x03') {
    if (uVar1 != '\x02') {
      if (uVar1 != '\x01') {
        if (uVar1 != '\0') {
          return puVar20;
        }
        *pfVar13 = (moby->pos).x;
        pfVar13[1] = (moby->pos).y;
        pfVar13[2] = (moby->pos).z;
        pfVar13[3] = (moby->pos).w;
        if (pfVar13[0xe] != -NAN) {
          (&DAT_00a20828)[(int)pfVar13[0xe]] = 0;
        }
        moby->state = '\x01';
        pfVar13[3] = 0.0;
        return (undefined *)0x1;
      }
      if (bVar18) {
        return puVar20;
      }
      if (((puVar20 == (undefined *)0x0) && (pfVar13[4] != -NAN)) &&
         (MobyInstance + (int)pfVar13[4] != (MobyInstance *)0x0)) {
        bVar2 = MobyInstance[(int)pfVar13[4]].state;
        if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((float)(uint)bVar2 != pfVar13[5])) {
          return (undefined *)(uint)bVar2;
        }
      }
      pfVar13[3] = SQRT(pfVar13[9] * pfVar13[9] + pfVar13[7] * pfVar13[7] + pfVar13[8] * pfVar13[8])
      ;
      if (pfVar13[0xc] != -NAN) {
        sound::PlayMobySound((int)pfVar13[0xc],0,moby);
      }
      moby->state = '\x02';
      return (undefined *)0x2;
    }
    if ((!bVar18) &&
       (((puVar20 != (undefined *)0x0 || (pfVar13[4] == -NAN)) ||
        ((MobyInstance + (int)pfVar13[4] == (MobyInstance *)0x0 ||
         ((bVar2 = MobyInstance[(int)pfVar13[4]].state, bVar2 == 0xfd || bVar2 == 0xfe ||
          ((float)(uint)bVar2 != pfVar13[6])))))))) {
      fVar3 = pfVar13[8];
      fVar4 = pfVar13[7];
      fVar5 = pfVar13[9];
      fVar7 = (moby->transform).v2.y * fVar5 +
              (moby->transform).v0.y * fVar4 + (moby->transform).v1.y * fVar3;
      fVar6 = (moby->transform).v2.x * fVar5 +
              (moby->transform).v0.x * fVar4 + (moby->transform).v1.x * fVar3;
      fVar4 = (moby->transform).v2.z * fVar5 +
              (moby->transform).v0.z * fVar4 + (moby->transform).v1.z * fVar3;
      fVar3 = 0.0;
      fVar9 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
      fVar5 = (pfVar13[10] * mobyutil::g_FrameTime) / fVar9;
      fVar8 = fVar3;
      if (0.0 - fVar9 < 0.0) {
        fVar8 = fVar4 * fVar5;
      }
      fVar10 = fVar3;
      if (0.0 - fVar9 < 0.0) {
        fVar10 = fVar7 * fVar5;
      }
      if (0.0 - fVar9 < 0.0) {
        fVar3 = fVar6 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar8 = fVar4 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar10 = fVar7 * fVar5;
      }
      if (fVar9 - 0.0 < 0.0) {
        fVar3 = fVar6 * fVar5;
      }
      (moby->pos).z = (moby->pos).z + fVar8;
      (moby->pos).y = (moby->pos).y + fVar10;
      (moby->pos).x = (moby->pos).x + fVar3;
      fVar3 = -(pfVar13[10] * mobyutil::g_FrameTime - pfVar13[3]);
      pfVar13[3] = fVar3;
      if (0.0 <= fVar3) {
        return &DAT_00720000;
      }
      (moby->pos).x = *pfVar13 + fVar6;
      (moby->pos).y = pfVar13[1] + fVar7;
      (moby->pos).z = pfVar13[2] + fVar4;
      (moby->pos).w = pfVar13[3];
      pfVar13[3] = 0.0;
      if (pfVar13[0xe] != -NAN) {
        (&DAT_00a20828)[(int)pfVar13[0xe]] = 1;
      }
      moby->state = '\x03';
      if (pfVar13[0xd] == -NAN) {
        return (undefined *)0xffffffff;
      }
      puVar20 = (undefined *)sound::PlayMobySound((int)pfVar13[0xc],0,moby);
      return puVar20;
    }
    if (pfVar13[0xc] != -NAN) {
      sound::PlayMobySound((int)pfVar13[0xc],0,moby);
    }
    moby->state = '\x04';
    return (undefined *)0x4;
  }
  if (!bVar18) {
    if (puVar20 != (undefined *)0x0) {
      return puVar20;
    }
    if (pfVar13[4] == -NAN) {
      return (undefined *)0xffffffff;
    }
    if (MobyInstance + (int)pfVar13[4] == (MobyInstance *)0x0) {
      return (undefined *)0x0;
    }
    bVar2 = MobyInstance[(int)pfVar13[4]].state;
    if (bVar2 == 0xfd || bVar2 == 0xfe) {
      return (undefined *)(uint)bVar2;
    }
    if ((float)(uint)bVar2 != pfVar13[6]) {
      return (undefined *)(uint)bVar2;
    }
  }
  pfVar13[3] = 0.0;
  if (pfVar13[0xc] != -NAN) {
    sound::PlayMobySound((int)pfVar13[0xc],0,moby);
  }
  moby->state = '\x04';
  return (undefined *)0x4;
}



//==== 001d7f20  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1130_001d7f20(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1130_001d7f20(void)

{
  DAT_00764870 = 0x10000;
  return;
}



//==== 001d7f38  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1130_001d7f38(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1130_001d7f38(int param_1)

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



//==== 001d8090  ns=mobyupdate_unsorted  size=0xda4
// sig: undefined UpdateMoby_1130(MobyInstance * moby)
// callers(0): 
// callees(21): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00151e70 respawn::SetSpawnPoint; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 0065471c: 'Commando'

/* Moby 1130 */

void mobyupdate_unsorted::UpdateMoby_1130(MobyInstance *moby)

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
  Cuboid *pCVar13;
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
  lVar17 = uVar14 - 0x160;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
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
     fVar5 = (moby->pos).z - GameCamera.posZ, puVar9[0x1f] = (longlong)DAT_00764894,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < (float)(longlong)puVar9[0x1f])) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = (char)(DAT_00764894 * 0xd >> 4);
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      if (moby->animationId != '\x01') {
        puVar9[0x1f] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
      }
      if ((g_SeenPlanets.Orxon != '\0') && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(undefined4 *)((int)pvVar8 + 0x2c) = 0x40400000;
      *(char **)((int)pvVar8 + 0x40) = "Commando";
      pCVar13 = Cuboids;
      if (MiscLevelFlags.field44_0x2c == 0) {
        moby->state = '\x01';
      }
      else {
        iVar18 = *(int *)((int)pvVar8 + 0x180);
        (moby->pos).x = Cuboids[iVar18].pos.x;
        (moby->pos).y = pCVar13[iVar18].pos.y;
        (moby->pos).z = pCVar13[iVar18].pos.z;
        (moby->pos).w = pCVar13[iVar18].pos.w;
        (moby->rotation).x = pCVar13[iVar18].rot.x;
        (moby->rotation).y = pCVar13[iVar18].rot.y;
        (moby->rotation).z = pCVar13[iVar18].rot.z;
        fVar2 = pCVar13[iVar18].rot.w;
        moby->state = '\x02';
        (moby->rotation).w = fVar2;
      }
      FUN_004d3720(moby,uVar25 + 0x20);
    }
    else {
      iVar18 = FUN_004d3870(moby,uVar25 + 0x20);
      pCVar13 = Cuboids;
      if (iVar18 != 0) {
        iVar18 = *(int *)((int)pvVar8 + 0x180);
        (moby->pos).x = Cuboids[iVar18].pos.x;
        (moby->pos).y = pCVar13[iVar18].pos.y;
        (moby->pos).z = pCVar13[iVar18].pos.z;
        (moby->pos).w = pCVar13[iVar18].pos.w;
        (moby->rotation).x = pCVar13[iVar18].rot.x;
        (moby->rotation).y = pCVar13[iVar18].rot.y;
        (moby->rotation).z = pCVar13[iVar18].rot.z;
        fVar2 = pCVar13[iVar18].rot.w;
        moby->state = '\x02';
        (moby->rotation).w = fVar2;
        MiscLevelFlags.field44_0x2c = 1;
      }
    }
  }
  else if (bVar1 < 3) {
    if (((moby->field43_0x70 & 2U) != 0) &&
       (bVar1 = moby->animationId, iVar18 = mobyutil::MB_randInt(2), (uint)bVar1 != iVar18 + 1U)) {
      iVar18 = mobyutil::MB_randInt(2);
      puVar9[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(moby,iVar18 + 1,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
    iVar18 = FUN_004d3870(moby,uVar25 + 0x20);
    if (iVar18 != 0) {
      moby->state = '\x03';
      mobyutil::MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
    }
  }
  else if ((bVar1 < 4) && (g_gameMode != GAME_MODE_SCENE)) {
    *(undefined1 *)((int)pvVar8 + 0x28) = 1;
    if (*(short *)((int)pvVar8 + 0x24) == 3) {
      mobyutil::MB_UnlockLevel(Orxon);
      mobyutil::MB_ToastMessageByIndex(10);
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      respawn::SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    moby->state = '\x02';
  }
  dVar34 = 0.019999999552965164;
  if (moby->animationId != '\x01') goto LAB_001d8d90;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_001d883c:
    if (*(int *)((int)pvVar8 + 0x188) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x188) = 0;
      *(float *)((int)pvVar8 + 0x160) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x16c) = DAT_00969dbc;
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
      lVar16 = uVar14 - 0x150;
      lVar20 = uVar14 - 0x8c;
      lVar23 = uVar14 - 0x7c;
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
      lVar23 = uVar14 - 0x8c;
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
    dVar27 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar27) goto LAB_001d883c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar25 + 0x188);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x24,0x1d802c);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar19 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x188,uVar25
                         );
      *(undefined4 *)((int)pvVar8 + 0x188U & 0xfffffffc) = uVar19;
    }
  }
  iVar18 = fastfunc::FastDecTimerS32(uVar25 + 0x18c);
  if (iVar18 != 0) {
    dVar27 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x18c) = uVar19;
    dVar32 = (double)(moby->rotation).z;
    dVar27 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar30 = 0.01745329238474369;
    dVar27 = (double)fastfunc::FastWrapRot((float)dVar32,(float)(dVar27 * 0.01745329238474369));
    dVar32 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar27,(float)(dVar32 * dVar30),(float *)((int)pvVar8 + 0x160));
    *(float *)((int)pvVar8 + 0x160) = *(float *)((int)pvVar8 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x164) = *(float *)((int)pvVar8 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x168) = *(float *)((int)pvVar8 + 0x168) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x188) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x160);
    fVar3 = *(float *)((int)pvVar8 + 0x164);
    fVar5 = *(float *)((int)pvVar8 + 0x168);
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
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar30 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar33) - ABS(dVar31));
  dVar32 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar27 = ABS(dVar31);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar29 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (0.0 < dVar27) {
    lVar16 = uVar14 - 0x150;
    lVar23 = uVar14 - 0x9c;
    lVar20 = uVar14 - 0xac;
    lVar26 = 2;
    fVar5 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
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
    lVar23 = uVar14 - 0xac;
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
      iVar11 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar28 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar29 = (double)fastfunc::FastDiffRots(dVar28,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar30;
  fVar2 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)));
  dVar31 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar31 - ABS(dVar30));
  uVar15 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar27 = ABS(dVar30);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar32 < dVar27) {
    lVar16 = uVar14 - 0x150;
    lVar20 = uVar14 - 0xcc;
    lVar23 = uVar14 - 0xbc;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
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
    lVar23 = uVar14 - 0xcc;
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
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar18 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
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
  *(float *)((int)pvVar8 + 200) = (float)(dVar27 * 0.6000000238418579);
  *(float *)((int)pvVar8 + 0xc4) = (float)dVar30;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar27 * 0.4000000059604645);
LAB_001d8d90:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar27 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar25 + 0x60,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * dVar27),moby,uVar25 + 0xe0,1);
  return;
}



//==== 001d8e34  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1133_001d8e34(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1133_001d8e34(void)

{
  DAT_007648e4 = 0x10000;
  return;
}



//==== 001d8e68  ns=mobyupdate_unsorted  size=0x29c
// sig: undefined UpdateMoby_1133(MobyInstance * moby)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1133 */

void mobyupdate_unsorted::UpdateMoby_1133(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  double dVar9;
  
  piVar3 = (int *)moby->pVar;
  if (piVar3 != (int *)0x0) {
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      if ((((*piVar3 != -1) && (MobyInstance + *piVar3 != (MobyInstance *)0x0)) &&
          (bVar2 = MobyInstance[*piVar3].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
         ((uint)bVar2 != piVar3[1])) {
        dVar9 = (double)fastfunc::FastDiffRots((double)(moby->rotation).y,(double)(float)piVar3[5]);
        (moby->rotation).y = (float)dVar9;
        if (dVar9 <= 0.0) {
          return;
        }
        (moby->rotation).y = 0.0;
        piVar3[6] = 0;
        moby->state = '\x01';
        return;
      }
      sound::PlayMobySound(0,0,moby);
      moby->state = '\x02';
    }
    else if (uVar1 == '\x03') {
      fVar4 = (moby->rotation).y + 1.5707963;
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar4 = fVar6 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar6;
      fVar7 = fVar4 * fVar5;
      dVar9 = (double)fastfunc::FastWrapRot
                                ((float)piVar3[6],
                                 (float)piVar3[3] * mobyutil::g_FrameTime *
                                 (fVar4 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6));
      piVar3[6] = (int)(float)dVar9;
      dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)dVar9);
      (moby->rotation).y = (float)dVar9;
      pMVar8 = MobyInstance + *piVar3;
      piVar3[6] = (int)((float)piVar3[6] * (float)piVar3[4]);
      if (((pMVar8 != (MobyInstance *)0x0) &&
          (bVar2 = pMVar8->state, bVar2 != 0xfd && bVar2 != 0xfe)) && ((uint)bVar2 == piVar3[2])) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x01') {
      if (((*piVar3 != -1) && (MobyInstance + *piVar3 != (MobyInstance *)0x0)) &&
         ((bVar2 = MobyInstance[*piVar3].state, bVar2 != 0xfd && bVar2 != 0xfe &&
          ((uint)bVar2 != piVar3[1])))) {
        return;
      }
      fVar4 = (float)piVar3[3] * mobyutil::g_FrameTime;
      piVar3[6] = (int)fVar4;
      (moby->rotation).y = fVar4;
      sound::PlayMobySound(0,0,moby);
      moby->state = '\x03';
    }
    else if (uVar1 == '\0') {
      (moby->rotation).y = 0.0;
      moby->state = '\x01';
      piVar3[6] = 0;
    }
  }
  return;
}



//==== 001d9110  ns=mobyupdate_helpers  size=0x1d0
// sig: undefined M1134_001d9110(void)
// callers(2): 001d9708 mobyupdate_helpers::M1134_001d9708; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fea60 mobyutil::MB_randSphere; 00131100 partupd::SpawnPart_60

void mobyupdate_helpers::M1134_001d9110(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if (*(char *)(param_1 + 0x20) != '\x01') {
    mobyfunc::GetBonePosition(param_1,0,local_50);
  }
  mobyutil::MB_randSphere
            ((double)(DAT_0076494c * mobyutil::g_FrameTime),
             (double)(DAT_00764950 * mobyutil::g_FrameTime),local_40);
  uVar1 = DAT_0076495c;
  dVar3 = (double)DAT_00764964;
  mobyutil::MB_randInt(0xff);
  partupd::SpawnPart_60(dVar3,local_50,local_40,uVar1);
  iVar2 = 0;
  do {
    mobyutil::MB_randSphere
              ((double)(DAT_00ef26e4 * mobyutil::g_FrameTime),
               (double)(DAT_00764954 * mobyutil::g_FrameTime),local_30);
    uVar1 = DAT_00764960;
    dVar3 = (double)DAT_00764968;
    mobyutil::MB_randInt(0xff);
    partupd::SpawnPart_60(dVar3,local_50,local_40,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



//==== 001d9310  ns=mobyupdate_helpers  size=0x3d8
// sig: undefined M1134_001d9310(void)
// callers(2): 001d9708 mobyupdate_helpers::M1134_001d9708; 001d9d48 mobyupdate_unsorted::UpdateMoby_1134
// callees(7): 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1134_001d9310(MobyInstance *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  undefined8 uVar5;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_a0 [16];
  float local_90 [12];
  
  dVar16 = 1.0;
  uVar9 = ZEXT48(param_1->pVar);
  dVar11 = dVar16;
  if (param_1->state != '\x01') {
    mobyfunc::GetBonePosition(param_1,0,local_90);
    dVar11 = (double)mobyfunc::BlendAnimFrame(param_1);
    dVar11 = (double)((float)(160.0 - dVar11) * 0.00625 * 16.0);
    if (dVar16 < dVar11) {
      dVar11 = dVar16;
    }
  }
  dVar16 = 0.0;
  iVar8 = 0;
  lVar10 = uVar9 + 0x40;
  dVar13 = 255.0;
  auVar19 = loadVectorLeftIndexed(0x24,0x1d92e0);
  dVar14 = 255.5;
  auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
  dVar15 = 0.5;
  do {
    iVar3 = (int)uVar9;
    fVar4 = *(float *)(iVar3 + 0x20) + *(float *)(iVar3 + 0x30);
    dVar12 = (double)fVar4;
    *(float *)(iVar3 + 0x20) = fVar4;
    if (dVar12 < dVar13) {
      if (dVar12 <= dVar16) {
        *(float *)(iVar3 + 0x20) = (float)(dVar12 + dVar13);
      }
    }
    else {
      *(float *)(iVar3 + 0x20) = (float)(dVar12 - dVar13);
    }
    iVar6 = fastfunc::FastDecTimerS32(uVar9 + 0x40);
    iVar1 = *(int *)(iVar3 + 0x40);
    dVar12 = (double)animationSpeed;
    auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar6 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
      iVar1 = (int)(dVar12 * dVar14);
      auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
      auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0,lVar10);
      *(undefined4 *)((uint)lVar10 & 0xfffffffc) = uVar2;
    }
    dVar12 = (double)fastfunc::FastIntToDouble((int)(dVar12 * dVar14) - iVar1);
    uVar5 = fastfunc::FastLerpColor
                      (ABS((double)(float)(dVar15 - (double)(float)(dVar12 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar14)))),DAT_00764934,
                       DAT_00764938);
    uVar7 = fastfunc::FastDoubleToInt((double)*(float *)(iVar3 + 0x20));
    partupd::SpawnPart_59
              ((double)(float)((double)*(float *)(iVar3 + 0x50) * dVar11),local_a0,uVar5,uVar7,
               DAT_00764944,DAT_00764940,2,DAT_00764940,0);
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + 4;
    uVar9 = uVar9 + 4;
  } while (iVar8 < 4);
  return;
}



//==== 001d9708  ns=mobyupdate_helpers  size=0x174
// sig: undefined M1134_001d9708(void)
// callers(1): 001d9d48 mobyupdate_unsorted::UpdateMoby_1134
// callees(4): 000fc620 mobyutil::MB_randInt; 001d9110 mobyupdate_helpers::M1134_001d9110; 001d9310 mobyupdate_helpers::M1134_001d9310; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1134_001d9708(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(float *)(param_1 + 0x2c) = *(float *)(*(int *)(param_1 + 0x24) + 0x24) * DAT_00764908;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x4c);
    fVar2 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar2 = fVar1;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = fVar3 * fVar3;
    fVar2 = fVar1 * fVar1 * fVar3;
    fVar4 = fVar1 * fVar2;
    *(float *)(param_1 + 0x18) =
         DAT_00764910 *
         (fVar1 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) +
         *(float *)(iVar5 + 0x18) + DAT_0076490c;
    dVar6 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x40),*(float *)(iVar5 + 0x68));
    *(float *)(param_1 + 0x40) = (float)dVar6;
    dVar6 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x44),*(float *)(iVar5 + 100));
    *(float *)(param_1 + 0x44) = (float)dVar6;
    dVar6 = (double)fastfunc::FastWrapRot(*(float *)(param_1 + 0x48),*(float *)(iVar5 + 0x60));
    *(float *)(param_1 + 0x48) = (float)dVar6;
    dVar6 = (double)fastfunc::FastWrapRot
                              (*(float *)(param_1 + 0x4c),
                               DAT_00764924 * 0.017453292 * mobyutil::g_FrameTime);
    *(float *)(param_1 + 0x4c) = (float)dVar6;
  }
  M1134_001d9310(param_1);
  iVar5 = mobyutil::MB_randInt(DAT_00764948);
  if (iVar5 == 0) {
    M1134_001d9110(param_1);
  }
  return;
}



//==== 001d98b8  ns=mobyupdate_helpers  size=0x30c
// sig: undefined M1134_001d98b8(void)
// callers(1): 001d9d48 mobyupdate_unsorted::UpdateMoby_1134
// callees(5): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 000efe40 mobyfunc::BlendAnimFrame; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1134_001d98b8(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  pvVar2 = param_1->pVar;
  dVar16 = 170.0;
  if (param_1->updateId == '\x01') {
    dVar16 = (double)mobyfunc::BlendAnimFrame(param_1);
  }
  iVar3 = *(int *)((int)pvVar2 + 4);
  dVar16 = (double)(float)(dVar16 * 0.0058823530562222);
  if ((iVar3 == -1) || (iVar4 = *(int *)((int)pvVar2 + 8), iVar4 == -1)) {
    dVar10 = (double)fastfunc::FastWrapRot
                               ((float)(dVar16 * 0.6981316804885864 - 0.3490658402442932),
                                g_heroRotation.z);
    fVar1 = (float)(dVar10 + 1.570796251296997);
    dVar11 = (double)(float)(3.141592502593994 - dVar10);
    if (dVar10 - (double)(float)(3.141592502593994 - dVar10) < 0.0) {
      dVar11 = dVar10;
    }
    fVar7 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar7 = fVar1;
    }
    dVar14 = (double)(float)(-3.141592502593994 - dVar10);
    if ((double)(float)(-3.141592502593994 - dVar10) - dVar11 < 0.0) {
      dVar14 = dVar11;
    }
    fVar8 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    dVar12 = (double)(float)(dVar14 * dVar14);
    fVar9 = fVar8 * fVar8;
    dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar14));
    fVar1 = fVar9 * fVar9 * fVar8;
    dVar11 = (double)(float)(dVar12 * dVar13);
    fVar7 = fVar9 * fVar1;
    local_5c = ((float)(dVar12 * dVar11) * 2.601887e-06 +
               (float)(dVar11 * -0.0001980741071747616 +
                      (double)(float)(dVar13 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar12 * dVar14) *
                                                     -0.16666656732559204 + dVar14)))) * 5.0 +
               g_heroPosition.y;
    local_60 = (fVar9 * fVar7 * 2.601887e-06 +
               fVar7 * -0.0001980741 + fVar1 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) *
               5.0 + g_heroPosition.x;
    local_44 = 0;
    local_58 = g_heroPosition.z + 1.0;
    local_48 = 0.0;
    local_4c = 0.0;
    local_50 = 0.0;
    dVar11 = (double)fastfunc::FastWrapRot((float)dVar10,3.14159);
    local_48 = (float)dVar11;
    local_4c = (float)(dVar16 * -0.17000000178813934);
  }
  else {
    dVar11 = (double)Cuboids[iVar3].pos.x;
    local_54 = Cuboids[iVar4].pos.w;
    iVar5 = *(int *)((int)pvVar2 + 4);
    iVar6 = *(int *)((int)pvVar2 + 8);
    local_60 = (float)(dVar16 * (double)(float)((double)Cuboids[iVar4].pos.x - dVar11) + dVar11);
    local_5c = (float)(dVar16 * (double)(Cuboids[iVar4].pos.y - Cuboids[iVar3].pos.y) +
                      (double)Cuboids[iVar3].pos.y);
    local_58 = (float)(dVar16 * (double)(Cuboids[iVar4].pos.z - Cuboids[iVar3].pos.z) +
                      (double)Cuboids[iVar3].pos.z);
    dVar15 = (double)Cuboids[iVar5].rot.z;
    dVar13 = (double)Cuboids[iVar5].rot.x;
    dVar12 = (double)Cuboids[iVar5].rot.y;
    dVar14 = (double)Cuboids[iVar6].rot.x;
    dVar10 = (double)Cuboids[iVar6].rot.y;
    dVar11 = (double)fastfunc::FastDiffRots((double)Cuboids[iVar6].rot.z,dVar15);
    dVar11 = (double)fastfunc::FastWrapRot((float)(dVar11 * dVar16),(float)dVar15);
    local_48 = (float)dVar11;
    dVar11 = (double)fastfunc::FastDiffRots(dVar10,dVar12);
    dVar11 = (double)fastfunc::FastWrapRot((float)(dVar11 * dVar16),(float)dVar12);
    local_4c = (float)dVar11;
    dVar11 = (double)fastfunc::FastDiffRots(dVar14,dVar13);
    dVar16 = (double)fastfunc::FastWrapRot((float)(dVar11 * dVar16),(float)dVar13);
    local_50 = (float)dVar16;
  }
  camera::camera5::Camera_SetMobyDrivenTargetPos(&local_60);
  camera::camera5::Camera_SetMobyDrivenTargetRot(&local_50);
  return;
}



//==== 001d9bd0  ns=mobyupdate_helpers  size=0x120
// sig: undefined M1134_001d9bd0(void)
// callers(2): 001d9d48 mobyupdate_unsorted::UpdateMoby_1134; 001da838 mobyupdate_helpers::Spawn_Moby1135_GoldBolt
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M1134_001d9bd0(int param_1)

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
  auVar14 = loadVectorLeftIndexed(in_LR,0x1d9bc4);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x40;
  auVar8 = loadVectorLeftIndexed(4,0x1d9bc4);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x1d9bc4);
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
  *(undefined4 *)(uVar1 + 0x50) = 0x40200000;
  *(undefined4 *)(uVar1 + 0x54) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x58) = 0x40400000;
  *(undefined4 *)(uVar1 + 0x5c) = 0x40200000;
  return;
}



//==== 001d9d48  ns=mobyupdate_unsorted  size=0xaec
// sig: undefined UpdateMoby_1134(MobyInstance * moby)
// callers(0): 
// callees(25): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006dad0 draw::FadeToBlack; 000836ac hero::Hero_RevertToRatchet; 00085300 hero::Hero_TransAnim; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 00112a38 mobyutil::MB_ToastMessage; 00112dc0 mobyutil::MB_UnlockTrophy; 0011b1b4 mobyutil::MB_CountGoldBolts; 0015d12c sound::PlayMobySound; 001d9110 mobyupdate_helpers::M1134_001d9110; 001d9310 mobyupdate_helpers::M1134_001d9310; 001d9708 mobyupdate_helpers::M1134_001d9708; 001d98b8 mobyupdate_helpers::M1134_001d98b8; 001d9bd0 mobyupdate_helpers::M1134_001d9bd0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots
// strings: 00a0ca34: 'None'

/* Moby 1134 */

void mobyupdate_unsorted::UpdateMoby_1134(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_d0;
  float local_cc;
  int local_c8;
  float local_c0 [5];
  float local_ac;
  float local_a8;
  float local_a0 [4];
  longlong local_90;
  
  bVar1 = moby->state;
  piVar5 = (int *)moby->pVar;
  fVar3 = (moby->rotation).x;
  if (bVar1 == 0) {
    if ((*piVar5 == -1) || (g_CollectedGoldBolts[Level * 4 + *piVar5] != '\0')) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      piVar5[4] = (int)(moby->pos).x;
      piVar5[5] = (int)(moby->pos).y;
      piVar5[6] = (int)(moby->pos).z;
      piVar5[7] = (int)(moby->pos).w;
      piVar5[7] = (int)(moby->rotation).z;
      dVar11 = (double)mobyutil::MB_randRot();
      (moby->rotation).x = (float)dVar11;
      dVar11 = (double)mobyutil::MB_randRot();
      (moby->rotation).y = (float)dVar11;
      dVar11 = (double)mobyutil::MB_randRot();
      (moby->rotation).z = (float)dVar11;
      dVar11 = (double)mobyutil::MB_randRot();
      (moby->rotation).w = (float)dVar11;
      fVar3 = mobyutil::g_FrameTime;
      piVar5[0x1a] = (int)(DAT_00764918 * 0.017453292 * mobyutil::g_FrameTime);
      piVar5[0x19] = (int)(DAT_0076491c * 0.017453292 * fVar3);
      piVar5[0x18] = (int)(DAT_00764920 * 0.017453292 * fVar3);
      moby->state = '\x01';
      mobyupdate_helpers::M1134_001d9bd0(moby);
    }
  }
  else if (bVar1 < 2) {
    fVar4 = (moby->rotation).w;
    moby->scale = moby->pClass->gScale * DAT_00764908;
    dVar11 = 3.141592502593994;
    dVar22 = -3.141592502593994;
    dVar23 = -0.16666656732559204;
    dVar24 = 0.008333025500178337;
    dVar25 = -0.0001980741071747616;
    fVar7 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar7 = fVar4;
    }
    fVar8 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    dVar26 = 2.601886990305502e-06;
    fVar9 = fVar8 * fVar8;
    fVar4 = fVar9 * fVar9 * fVar8;
    fVar7 = fVar9 * fVar4;
    (moby->pos).z =
         DAT_00764910 *
         (fVar9 * fVar7 * 2.601887e-06 +
         fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) +
         (float)piVar5[6] + DAT_0076490c;
    dVar20 = 0.01745329238474369;
    dVar12 = (double)fastfunc::FastWrapRot(fVar3,DAT_00764918 * 0.017453292 * mobyutil::g_FrameTime)
    ;
    (moby->rotation).x = (float)dVar12;
    dVar12 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).y,
                                (float)((double)DAT_0076491c * dVar20) * mobyutil::g_FrameTime);
    (moby->rotation).y = (float)dVar12;
    dVar12 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).z,
                                (float)((double)DAT_00764920 * dVar20) * mobyutil::g_FrameTime);
    (moby->rotation).z = (float)dVar12;
    dVar12 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).w,
                                (float)((double)DAT_00764924 * dVar20) * mobyutil::g_FrameTime);
    (moby->rotation).w = (float)dVar12;
    mobyupdate_helpers::M1134_001d9310(moby);
    iVar10 = mobyutil::MB_randInt(DAT_00764948);
    if (iVar10 == 0) {
      mobyupdate_helpers::M1134_001d9110(moby);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroHealth != 0)) &&
       ((g_heroType == '\x03' || (g_heroType == '\0')))) {
      if (*(short *)(piVar5 + 3) == 0) {
        dVar19 = 1.570796251296997;
        dVar20 = (double)((float)piVar5[7] + 1.5707963);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar18 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar18 = dVar12;
        }
        dVar20 = (double)(float)(dVar18 * dVar18);
        dVar15 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar18));
        dVar14 = (double)(float)(dVar20 * dVar15);
        dVar13 = (double)(float)piVar5[7];
        dVar12 = (double)(float)(dVar11 - dVar13);
        if (dVar13 - (double)(float)(dVar11 - dVar13) < 0.0) {
          dVar12 = dVar13;
        }
        dVar16 = (double)(float)(dVar22 - dVar13);
        if ((double)(float)(dVar22 - dVar13) - dVar12 < 0.0) {
          dVar16 = dVar12;
        }
        dVar12 = (double)(float)(dVar16 * dVar16);
        dVar17 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar16));
        dVar13 = (double)(float)(dVar12 * dVar17);
        dVar21 = 0.0;
        local_d0 = (float)((double)(float)(dVar20 * dVar14) * dVar26 +
                          (double)(float)(dVar14 * dVar25 +
                                         (double)(float)(dVar15 * dVar24 +
                                                        (double)(float)((double)(float)(dVar20 * 
                                                  dVar18) * dVar23 + dVar18)))) * 2.5 +
                   (float)piVar5[4];
        local_cc = (float)((double)(float)(dVar12 * dVar13) * dVar26 +
                          (double)(float)(dVar13 * dVar25 +
                                         (double)(float)(dVar17 * dVar24 +
                                                        (double)(float)((double)(float)(dVar12 * 
                                                  dVar16) * dVar23 + dVar16)))) * 2.5 +
                   (float)piVar5[5];
        local_c8 = piVar5[6];
        local_c0[3] = 0.0;
        local_c0[2] = 0.0;
        local_c0[1] = 0.0;
        local_c0[0] = 0.0;
        dVar12 = (double)fastfunc::FastWrapRot((float)piVar5[7],3.1415927);
        local_c0[2] = (float)dVar12;
        local_90 = (longlong)(int)(animationSpeed * 10.5);
        draw::FadeToBlack((int)(animationSpeed * 10.5));
        if (g_heroType == '\x03') {
          hero::Hero_RevertToRatchet();
        }
        hero::Hero_Warp(&local_d0,local_c0,0x72,0);
        sound::PlayMobySound(0,0,moby);
        dVar20 = (double)(float)((double)(float)piVar5[7] + dVar19);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar18 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar18 = dVar12;
        }
        dVar12 = (double)(float)(dVar18 * dVar18);
        dVar13 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar18));
        dVar20 = (double)(float)(dVar12 * dVar13);
        local_c0[4] = (float)((double)(float)(dVar12 * dVar20) * dVar26 +
                             (double)(float)(dVar20 * dVar25 +
                                            (double)(float)(dVar13 * dVar24 +
                                                           (double)(float)((double)(float)(dVar12 * 
                                                  dVar18) * dVar23 + dVar18)))) * 1.25;
        dVar18 = (double)local_c0[4];
        dVar20 = (double)(float)piVar5[7];
        local_a8 = 0.0;
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar13 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar13 = dVar12;
        }
        dVar12 = (double)(float)(dVar13 * dVar13);
        dVar14 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar13));
        dVar20 = (double)(float)(dVar12 * dVar14);
        local_ac = (float)((double)(float)(dVar12 * dVar20) * dVar26 +
                          (double)(float)(dVar20 * dVar25 +
                                         (double)(float)(dVar14 * dVar24 +
                                                        (double)(float)((double)(float)(dVar12 * 
                                                  dVar13) * dVar23 + dVar13)))) * 1.25;
        dVar13 = 1.5707963705062866;
        dVar12 = (double)fastfunc::FastWrapRot((float)piVar5[7],1.5707964);
        dVar20 = (double)(float)(dVar12 + dVar19);
        dVar14 = 4.0;
        dVar19 = (double)local_ac;
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar15 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar15 = dVar12;
        }
        dVar12 = (double)(float)(dVar15 * dVar15);
        dVar20 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar15));
        dVar16 = (double)(float)(dVar12 * dVar20);
        local_c0[4] = (float)((double)(float)((double)(float)(dVar12 * dVar16) * dVar26 +
                                             (double)(float)(dVar16 * dVar25 +
                                                            (double)(float)(dVar20 * dVar24 +
                                                                           (double)(float)((double)(
                                                  float)(dVar12 * dVar15) * dVar23 + dVar15)))) *
                              4.0 + dVar18);
        dVar20 = (double)fastfunc::FastWrapRot((float)piVar5[7],(float)dVar13);
        dVar12 = (double)(float)(dVar11 - dVar20);
        if (dVar20 - (double)(float)(dVar11 - dVar20) < 0.0) {
          dVar12 = dVar20;
        }
        dVar11 = (double)(float)(dVar22 - dVar20);
        if ((double)(float)(dVar22 - dVar20) - dVar12 < 0.0) {
          dVar11 = dVar12;
        }
        dVar22 = (double)(float)(dVar11 * dVar11);
        dVar20 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar11));
        dVar12 = (double)(float)(dVar22 * dVar20);
        local_c0[4] = local_c0[4] + (float)piVar5[4];
        local_ac = (float)((double)(float)((double)(float)(dVar22 * dVar12) * dVar26 +
                                          (double)(float)(dVar12 * dVar25 +
                                                         (double)(float)(dVar20 * dVar24 +
                                                                        (double)(float)((double)(
                                                  float)(dVar22 * dVar11) * dVar23 + dVar11)))) *
                           dVar14 + dVar19) + (float)piVar5[5];
        local_a0[3] = 0.0;
        local_a0[2] = 0.0;
        local_a0[1] = 0.0;
        local_a0[0] = 0.0;
        local_a8 = local_a8 + (float)piVar5[6] + 1.0;
        dVar11 = (double)fastfunc::FastDiffRots((double)(float)piVar5[7],dVar13);
        local_a0[2] = (float)dVar11;
        camera::SetCameraPosition(local_c0 + 4,local_a0,1,0,0);
        camera::camera5::Camera_SetMobyDrivenTargetPos(local_c0 + 4);
        camera::camera5::Camera_SetMobyDrivenTargetRot(local_a0);
        (moby->pos).x = g_heroPosition.x;
        (moby->pos).y = g_heroPosition.y;
        (moby->pos).z = g_heroPosition.z;
        (moby->pos).w = g_heroPosition.w;
        (moby->rotation).x = g_heroRotation.x;
        uVar2 = moby->animationId;
        (moby->rotation).y = g_heroRotation.y;
        (moby->rotation).z = g_heroRotation.z;
        (moby->rotation).w = g_heroRotation.w;
        if (uVar2 != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,0);
        }
        hero::Hero_TransAnim((float)dVar21,0x82,0);
        if (Cheats[5] != '\0') {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        DAT_0096bd8f = 1;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        draw::LetterBoxOn = 1;
        moby->state = '\x02';
        auVar27 = loadVectorLeftIndexed(0x4c,0x1d9cf0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x6c,
                           ZEXT48(piVar5));
        *(undefined4 *)((uint)(piVar5 + 0x1b) & 0xfffffffc) = uVar6;
      }
      else {
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        auVar27 = loadVectorLeftIndexed(0x24,0x1d9cf0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                             auVar28);
        auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        g_toastMsgTimer =
             storeVectorElementWordIndexed
                       (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x5c80,
                        0xa10000);
        mobyutil::MB_ToastMessage(0x53b3,0xffffffffffffffff);
        g_CollectedGoldBolts[Level * 4 + *piVar5] = '\x01';
        iVar10 = mobyutil::MB_CountGoldBolts();
        if (iVar10 == 0x28) {
          mobyutil::MB_UnlockTrophy(BOLT_COMMANDO);
        }
        memcard::memcard_Save(0,-1);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (bVar1 < 3) {
    mobyupdate_helpers::M1134_001d98b8(moby);
    (moby->pos).x = g_heroPosition.x;
    (moby->pos).y = g_heroPosition.y;
    (moby->pos).z = g_heroPosition.z;
    (moby->pos).w = g_heroPosition.w;
    (moby->rotation).x = g_heroRotation.x;
    uVar2 = moby->updateId;
    (moby->rotation).y = g_heroRotation.y;
    (moby->rotation).z = g_heroRotation.z;
    (moby->rotation).w = g_heroRotation.w;
    if (uVar2 == '\x01') {
      mobyupdate_helpers::M1134_001d9708(moby);
      iVar10 = mobyutil::MB_randInt(10);
      if (iVar10 == 0) {
        mobyupdate_helpers::M1134_001d9110(moby);
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,0);
        }
        iVar10 = 0;
        moby->enabled = '\0';
        moby->modeBits = moby->modeBits | DISABLED;
        do {
          mobyupdate_helpers::M1134_001d9110(moby);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 4);
      }
    }
    if ((DAT_0096a778 & 2) != 0) {
      hero::Hero_TransAnim((float)(longlong)(animationSpeed * 30.5),0,0);
    }
    if ((moby->updateId == '\0') &&
       (iVar10 = fastfunc::FastDecTimerS32(ZEXT48(piVar5) + 0x6c), iVar10 != 0)) {
      auVar27 = ZEXT416(0xffffffff);
      auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
      auVar27 = loadVectorLeftIndexed(0x24,0x1d9cf0);
      auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar27 = vectorMultiplyAddFloatingPoint
                          (auVar29,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,
                           auVar28);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
      g_toastMsgTimer =
           storeVectorElementWordIndexed
                     (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x5c80,0xa10000)
      ;
      mobyutil::MB_ToastMessage(0x53b3,0xffffffffffffffff);
      g_CollectedGoldBolts[Level * 4 + *piVar5] = '\x01';
      iVar10 = mobyutil::MB_CountGoldBolts();
      if (iVar10 == 0x28) {
        mobyutil::MB_UnlockTrophy(BOLT_COMMANDO);
      }
      draw::LetterBoxOn = 0;
      hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 001da838  ns=mobyupdate_helpers  size=0x1a8
// sig: undefined Spawn_Moby1135_GoldBolt(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000fcc68 mobyutil::MB_randRot; 001d9bd0 mobyupdate_helpers::M1134_001d9bd0

MobyInstance * mobyupdate_helpers::Spawn_Moby1135_GoldBolt(f32 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  MobyInstance *pMVar5;
  MobyInstance *pMVar6;
  double dVar7;
  
  if ((param_2 < 4) && (g_CollectedGoldBolts[Level * 4 + param_2] == '\0')) {
    pMVar6 = mobyfunc::CreateMoby(GOLD_BOLT);
    if (pMVar6 != (MobyInstance *)0x0) {
      (pMVar6->pos).x = *param_1;
      (pMVar6->pos).y = param_1[1];
      puVar1 = (uint *)pMVar6->pVar;
      (pMVar6->pos).z = param_1[2];
      pMVar5 = g_heroMobyPtr;
      (pMVar6->pos).w = param_1[3];
      uVar2 = pMVar5->color;
      uVar3 = pMVar5->light;
      pMVar6->updateDistance = '@';
      pMVar6->enabled = '\x01';
      pMVar6->color = uVar2;
      pMVar6->light = uVar3;
      pMVar6->drawDistance = 0x40;
      *puVar1 = param_2;
      puVar1[4] = (uint)(pMVar6->pos).x;
      puVar1[5] = (uint)(pMVar6->pos).y;
      puVar1[6] = (uint)(pMVar6->pos).z;
      puVar1[7] = (uint)(pMVar6->pos).w;
      puVar1[7] = (uint)(pMVar6->rotation).z;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).x = (float)dVar7;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).y = (float)dVar7;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).z = (float)dVar7;
      dVar7 = (double)mobyutil::MB_randRot();
      (pMVar6->rotation).w = (float)dVar7;
      fVar4 = mobyutil::g_FrameTime;
      puVar1[0x1a] = (uint)(DAT_00764918 * 0.017453292 * mobyutil::g_FrameTime);
      puVar1[0x19] = (uint)(DAT_0076491c * 0.017453292 * fVar4);
      puVar1[0x18] = (uint)(DAT_00764920 * 0.017453292 * fVar4);
      pMVar6->state = '\x01';
      M1134_001d9bd0(pMVar6);
    }
  }
  else {
    pMVar6 = (MobyInstance *)0x0;
  }
  return pMVar6;
}



//==== 001da9e0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1135_001da9e0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1135_001da9e0(void)

{
  DAT_007649b8 = 0x10000;
  return;
}



//==== 001da9f8  ns=mobyupdate_helpers  size=0xb4
// sig: undefined M1135_001da9f8(void)
// callers(0): 
// callees(1): 001042ec mobyutil::MB_SetStateByGroup

void mobyupdate_helpers::M1135_001da9f8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xb2);
  iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  iVar3 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  uVar2 = *(uint *)(&DAT_00a54dd0 + iVar3);
  *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) =
       *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
  *(uint *)(&DAT_00a54dd0 + iVar3) = uVar2 | 1 << (uVar1 & 0x1f);
  if (*(char *)(param_1 + 0x21) == -1) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    mobyutil::MB_SetStateByGroup(*(char *)(param_1 + 0x21),1);
  }
  return;
}



//==== 001daac8  ns=mobyupdate_helpers  size=0x1d4
// sig: undefined M1135_001daac8(void)
// callers(1): 001daee8 mobyupdate_unsorted::UpdateMoby_1135
// callees(2): 000f31a8 mobyfunc::UpdateMobyTransform; 00500b64 fastfunc::FastEulerToMtx

void mobyupdate_helpers::M1135_001daac8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar7 = 0;
  dVar13 = 0.01745329238474369;
  dVar14 = 2.4000000953674316;
  dVar15 = 1.2000000476837158;
  dVar16 = 0.0;
  dVar17 = -1.0471975803375244;
  dVar18 = 0.3490658402442932;
  iVar8 = iVar5;
  do {
    iVar6 = *(int *)(iVar8 + 0x14);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x18) =
         *(float *)(*(int *)(iVar8 + 0x14) + 0x18) + DAT_007649dc;
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) = (float)((double)DAT_007649e4 * dVar13);
    dVar12 = (double)(float)((double)*(float *)(iVar5 + 0x20) * dVar14 - dVar15);
    fastfunc::FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    iVar6 = *(int *)(iVar8 + 0x14);
    fVar2 = *(float *)(iVar6 + 0xc4);
    fVar3 = *(float *)(iVar6 + 0xc0);
    fVar4 = *(float *)(iVar6 + 200);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(dVar12 / dVar11);
    dVar12 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    dVar9 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    dVar10 = dVar16;
    if (dVar16 - dVar11 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar12 = (double)(fVar4 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar9 = (double)(fVar2 * fVar1);
    }
    if (dVar11 - dVar16 < 0.0) {
      dVar10 = (double)(fVar3 * fVar1);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar12);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar9);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    *(float *)(*(int *)(iVar8 + 0x14) + 0x44) =
         (float)((double)*(float *)(iVar5 + 0x24) * dVar17 - dVar18);
    fastfunc::FastEulerToMtx
              ((ulonglong)*(uint *)(iVar8 + 0x14) + 0xc0,(ulonglong)*(uint *)(iVar8 + 0x14) + 0x40);
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)(iVar8 + 0x14));
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar7 < 3);
  return;
}



//==== 001dac9c  ns=mobyupdate_helpers  size=0x174
// sig: undefined M1135_001dac9c(void)
// callers(1): 001daee8 mobyupdate_unsorted::UpdateMoby_1135
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M1135_001dac9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (Level == Veldin2) {
    mobyutil::MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764aec + *(int *)(iVar1 + 0x10) * 4));
  }
  else if (Level == Fleet) {
    mobyutil::MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ad0 + *(int *)(iVar1 + 0x10) * 4));
  }
  else if (Level == Kalebo) {
    mobyutil::MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ae4 + *(int *)(iVar1 + 0x10) * 4));
  }
  else {
    if (Level != Gemlik) {
      if (Level == Hoven) {
        mobyutil::MB_ShowPersistentMessage
                  (4,*(undefined4 *)(&DAT_00764ab0 + *(int *)(iVar1 + 0x10) * 4));
        return;
      }
      if (Level == Batalia) {
        mobyutil::MB_ShowPersistentMessage
                  (4,*(undefined4 *)(&DAT_00764aa8 + *(int *)(iVar1 + 0x10) * 4));
        return;
      }
      if ((Level != Umbris) && (Level != Novalis)) {
        return;
      }
    }
    mobyutil::MB_ShowPersistentMessage
              (4,*(undefined4 *)(&DAT_00764ab8 + *(int *)(iVar1 + 0x10) * 4));
  }
  return;
}



//==== 001dae10  ns=mobyupdate_helpers  size=0x58
// sig: undefined M1135_001dae10(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1135_001dae10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  do {
    iVar1 = *(int *)(iVar2 + 0x14);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x34) = *(ushort *)(iVar1 + 0x34) | 1;
      *(undefined1 *)(*(int *)(iVar2 + 0x14) + 0x31) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  return;
}



//==== 001dae68  ns=mobyupdate_helpers  size=0x60
// sig: undefined M1135_001dae68(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1135_001dae68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  iVar3 = *(int *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
  do {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
      *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x31) = 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 3);
  return;
}



//==== 001daee8  ns=mobyupdate_unsorted  size=0xa28
// sig: undefined UpdateMoby_1135(MobyInstance * moby)
// callers(0): 
// callees(15): 0006d720 RegisterFuncForMoby; 00085a10 hero::Hero_GetSpecialStateKind; 000a0c38 hero::Hero_Warp; 000aa368 hero::Hero_WalkToPos; 000efa28 mobyfunc::CreateMoby; 001042ec mobyutil::MB_SetStateByGroup; 00105870 mobyutil::DamageSphereAtPos; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 0011ccc8 music::music_SetTransition; 0015d12c sound::PlayMobySound; 001daac8 mobyupdate_helpers::M1135_001daac8; 001dac9c mobyupdate_helpers::M1135_001dac9c; 00502578 fastfunc::FastWrapRot

/* Moby 1135 */

void mobyupdate_unsorted::UpdateMoby_1135(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  u16 *puVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  byte bVar9;
  MobyInstance *pMVar8;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  f32 local_70;
  f32 local_6c;
  float local_68;
  f32 local_64;
  longlong local_60;
  
  lVar6 = (longlong)(int)moby;
  bVar13 = false;
  uVar1 = moby->uid;
  piVar2 = (int *)moby->pVar;
  if (((&DAT_00a545c4)[(short)uVar1] != '\0') ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) != 0)) {
    bVar13 = true;
  }
  bVar9 = moby->state;
  if ((bVar9 != 0) && (!bVar13 && piVar2[1] != -1)) {
    iVar7 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar2[1]);
    bVar9 = moby->state;
    if (iVar7 != 0) {
      uVar1 = moby->uid;
      iVar10 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      iVar7 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
      uVar4 = *(uint *)(&DAT_00a54dd0 + iVar7);
      *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) =
           *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar10) | 1 << (uVar1 & 0x1f);
      *(uint *)(&DAT_00a54dd0 + iVar7) = uVar4 | 1 << (uVar1 & 0x1f);
      if (moby->group == -1) {
        moby->state = '\x01';
      }
      else {
        mobyutil::MB_SetStateByGroup(moby->group,1);
      }
      iVar7 = 0;
      pvVar11 = moby->pVar;
      puVar3 = moby->pClass->collision;
      moby->enabled = '\x01';
      moby->collision = puVar3;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      do {
        iVar10 = *(int *)((int)pvVar11 + 0x14);
        if (iVar10 != 0) {
          *(ushort *)(iVar10 + 0x34) = *(ushort *)(iVar10 + 0x34) & 0xfffe;
          *(undefined1 *)(*(int *)((int)pvVar11 + 0x14) + 0x31) = 1;
        }
        iVar7 = iVar7 + 1;
        pvVar11 = (void *)((int)pvVar11 + 4);
      } while (iVar7 < 3);
      bVar9 = moby->state;
      bVar13 = true;
      if (bVar9 == 5) {
        bVar9 = 1;
        moby->state = '\x01';
        bVar13 = true;
      }
    }
  }
  if (piVar2[0xf] != 0) {
    if (g_ChallengeMode == 0) {
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      return;
    }
    moby->collision = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  if (bVar9 < 4) {
    if (bVar9 == 0) {
      iVar7 = 0;
      moby->updateDistance = -1;
      dVar15 = 2.094395160675049;
      piVar12 = piVar2;
      do {
        pMVar8 = mobyfunc::CreateMoby(GOLD_WEAPON_CASE|VENDOR);
        piVar12[5] = (int)pMVar8;
        pMVar8->drawDistance = 0x40;
        local_60 = (longlong)iVar7;
        *(undefined1 *)(piVar12[5] + 0x31) = 1;
        *(undefined8 *)(piVar12[5] + 0x38) = *(undefined8 *)&g_heroMobyPtr->color;
        *(MobyModeBit *)(piVar12[5] + 0x34) = moby->modeBits;
        iVar10 = piVar12[5];
        *(f32 *)(iVar10 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar10 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar10 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar10 + 0x1c) = (moby->pos).w;
        iVar10 = piVar12[5];
        *(f32 *)(iVar10 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar10 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar10 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar10 + 0x4c) = (moby->rotation).w;
        dVar14 = (double)fastfunc::FastWrapRot
                                   (*(float *)(piVar12[5] + 0x48),(float)((double)local_60 * dVar15)
                                   );
        piVar5 = piVar12 + 5;
        iVar7 = iVar7 + 1;
        piVar12 = piVar12 + 1;
        *(float *)(*piVar5 + 0x48) = (float)dVar14;
      } while (iVar7 < 3);
      if ((piVar2[0xe] != 0) || (bVar13)) {
        moby->state = '\x06';
      }
      else {
        iVar7 = 0;
        pvVar11 = moby->pVar;
        moby->state = '\x05';
        moby->collision = (ushort *)0x0;
        moby->enabled = '\0';
        moby->modeBits = moby->modeBits | DISABLED;
        do {
          iVar10 = *(int *)((int)pvVar11 + 0x14);
          if (iVar10 != 0) {
            *(ushort *)(iVar10 + 0x34) = *(ushort *)(iVar10 + 0x34) | 1;
            *(undefined1 *)(*(int *)((int)pvVar11 + 0x14) + 0x31) = 0;
          }
          iVar7 = iVar7 + 1;
          pvVar11 = (void *)((int)pvVar11 + 4);
        } while (iVar7 < 3);
      }
      mobyupdate_helpers::M1135_001daac8(lVar6);
      return;
    }
    if (1 < bVar9) {
      if (bVar9 < 3) {
        iVar7 = hero::Hero_GetSpecialStateKind();
        uVar4 = piVar2[8] >> 0x1f;
        iVar10 = (uVar4 >> 1 ^ piVar2[8]) - uVar4;
        dVar15 = 1.0;
        if (iVar10 < 0x3f800000) {
          fVar16 = mobyutil::OrganicDelt
                             (1.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                              DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 8),0x720000,
                              (float *)(piVar2 + 10));
          dVar15 = (double)fVar16;
        }
        else {
          uVar4 = piVar2[9] >> 0x1f;
          if ((int)((uVar4 >> 1 ^ piVar2[9]) - uVar4) < 0x3f800000) {
            fVar16 = mobyutil::OrganicDelt
                               (1.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                                DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 9),0x720000,
                                (float *)(piVar2 + 0xb));
            dVar15 = (double)fVar16;
          }
          else if ((mobyutil::g_HelpMsgOwner != 4) || (iVar10 < 0x3e800001)) {
            if (iVar7 == 2) {
              piVar2[0xd] = 0x3ff9999a;
              moby->state = '\x03';
            }
            else if (iVar7 == 0) {
              moby->state = '\x04';
            }
          }
        }
        mobyupdate_helpers::M1135_001daac8(dVar15,lVar6);
        return;
      }
      dVar15 = 0.0;
      if (piVar2[0xd] != 0) {
        RegisterFuncForMoby(&PTR_M1138_001db948_00708f10,moby);
        mobyutil::Delt((float)dVar15,mobyutil::g_FrameTime * 4.0,(float *)(piVar2 + 0xd));
        return;
      }
      pMVar8 = MobyInstance + *piVar2;
      local_70 = (pMVar8->pos).x;
      pvVar11 = pMVar8->pVar;
      local_6c = (pMVar8->pos).y;
      local_64 = (pMVar8->pos).w;
      local_68 = (pMVar8->pos).z + 0.2;
      hero::Hero_Warp(&local_70,&(pMVar8->rotation).x,0,1);
      hero::g_heroInvisible = 1;
      if ((piVar2[0x10] != -1) && (piVar2[0x11] != -1)) {
        music::music_SetTransition(piVar2[0x10],piVar2[0x11]);
      }
      pMVar8->state = '\x04';
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
      *(undefined4 *)((int)pvVar11 + 0x24) = 0x3f800000;
      *(undefined4 *)((int)pvVar11 + 0x28) = 0;
      *(undefined4 *)((int)pvVar11 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar11 + 0x34) = 0;
      sound::PlayMobySound(1,0,pMVar8);
      moby->state = '\x01';
      piVar2[8] = 0;
      piVar2[9] = 0;
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      piVar2[0xd] = 0x3ff9999a;
      mobyupdate_helpers::M1135_001daac8(lVar6);
      return;
    }
LAB_001db308:
    if ((((piVar2[2] < 0) || (g_LevelFlags[Level][piVar2[2]] == -1)) && (*piVar2 != -1)) &&
       (((g_heroType != '\x02' && (g_standingOnMoby == moby)) &&
        ((g_framesNotGrounded == 0 &&
         (mobyupdate_helpers::M1135_001dac9c(lVar6), (g_buttonsPressedThisFrame & TRIANGLE) != 0))))
       )) {
      sound::PlayMobySound(0,0,moby);
      moby->state = '\x02';
      piVar2[10] = 0;
      piVar2[0xb] = 0;
      fVar16 = (moby->rotation).z;
      piVar2[0xc] = -1;
      hero::Hero_WalkToPos(fVar16,(float *)(lVar6 + 0x10),-1,0);
      mobyutil::DamageSphereAtPos
                (0x3ff8000000000000,0x4034000000000000,0x3ff0000000000000,lVar6,lVar6 + 0x10,
                 &DAT_001daec8,0x10000);
    }
  }
  else {
    if (bVar9 < 7) {
      if (4 < bVar9) {
        if (bVar9 < 6) {
          return;
        }
        if (moby->group != -1) {
          mobyutil::MB_SetStateByGroup(moby->group,1);
        }
        moby->state = '\x01';
        goto LAB_001db308;
      }
    }
    else {
      if (bVar9 < 8) {
        uVar4 = piVar2[8] >> 0x1f;
        if ((int)((uVar4 >> 1 ^ piVar2[8]) - uVar4) < 0x3f800000) {
          mobyutil::OrganicDelt
                    (1.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                     DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 8),0x760000,
                     (float *)(piVar2 + 10));
        }
        else {
          uVar4 = piVar2[9] >> 0x1f;
          if ((int)((uVar4 >> 1 ^ piVar2[9]) - uVar4) < 0x3f800000) {
            mobyutil::OrganicDelt
                      (1.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                       DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 9),0x760000,
                       (float *)(piVar2 + 0xb));
          }
          else {
            sound::PlayMobySound(1,0,moby);
            moby->state = '\b';
            piVar2[0xd] = 0;
          }
        }
        mobyupdate_helpers::M1135_001daac8(lVar6);
        return;
      }
      if (8 < bVar9) {
        return;
      }
    }
    uVar4 = piVar2[0xd] >> 0x1f;
    dVar15 = 1.9500000476837158;
    if ((int)((uVar4 >> 1 ^ piVar2[0xd]) - uVar4) < 0x3ff9999a) {
      RegisterFuncForMoby(&PTR_M1138_001db948_00708f10,moby);
      fVar16 = mobyutil::Delt((float)dVar15,mobyutil::g_FrameTime * 4.0,(float *)(piVar2 + 0xd));
      dVar15 = (double)fVar16;
    }
    else {
      dVar15 = 0.0;
      if (piVar2[9] < 1) {
        if (piVar2[8] < 1) {
          moby->state = '\x01';
        }
        else {
          fVar16 = mobyutil::OrganicDelt
                             (0.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                              DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 8),0x720000,
                              (float *)(piVar2 + 0xb));
          dVar15 = (double)fVar16;
        }
      }
      else {
        fVar16 = mobyutil::OrganicDelt
                           (0.0,DAT_007649ec * DAT_0071f418,DAT_007649f0 * DAT_0071f418,
                            DAT_007649f4 * mobyutil::g_FrameTime,(float *)(piVar2 + 9),0x760000,
                            (float *)(piVar2 + 10));
        dVar15 = (double)fVar16;
      }
    }
    mobyupdate_helpers::M1135_001daac8(dVar15,lVar6);
  }
  return;
}



//==== 001db948  ns=mobyupdate_helpers  size=0x3a0
// sig: undefined M1138_001db948(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1138_001db948(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar26;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1a0;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar16;
  puVar7[0x36] = in_LR;
  puVar7[0x2f] = in_f27;
  puVar7[0x30] = in_f28;
  puVar7[0x31] = in_f29;
  puVar7[0x32] = in_f30;
  puVar7[0x33] = in_f31;
  puVar7[0x2b] = unaff_r28;
  puVar7[0x2e] = unaff_r31;
  puVar7[0x2c] = unaff_r29;
  puVar7[0x2d] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  fastfunc::FastMtxCopyNoTranslate(uVar16 - 0x130,param_1 + 0xc0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar7 + 0xa4) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar7 + 0x15) = uVar4;
  uVar4 = DAT_00764a04;
  *(undefined4 *)((int)puVar7 + 0xac) = uVar3;
  uVar17 = draw::GetEffectTex(uVar4);
  puVar7[0x25] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_00ef26e8,DAT_007649fc,DAT_00ef26ec,DAT_00764a00,0x80);
  puVar7[0x27] = uVar17;
  bVar2 = *(byte *)(param_1 + 0x20);
  puVar20 = &DAT_00764a0c;
  puVar18 = &DAT_00764a10;
  lVar24 = 4;
  lVar21 = lVar1;
  lVar23 = lVar1;
  do {
    uVar3 = *puVar20;
    uVar4 = *puVar18;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar23 + 0x100) = uVar3;
    uVar3 = DAT_00764a08;
    puVar18 = puVar18 + 2;
    *(undefined4 *)((int)lVar23 + 0x104) = uVar4;
    *(undefined4 *)((int)lVar21 + 0xf0) = uVar3;
    lVar23 = lVar23 + 8;
    lVar21 = lVar21 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  dVar26 = 0.10000000149011612;
  uVar22 = (int)*(uint *)(iVar6 + 0x34) >> 0x1f;
  iVar19 = (uVar22 >> 1 ^ *(uint *)(iVar6 + 0x34)) - uVar22;
  if (iVar19 < 0x3f933333) {
    dVar26 = 1.0;
    dVar25 = (double)((1.15 - *(float *)(iVar6 + 0x34)) * 2.0);
    if ((dVar25 <= 1.0) && (dVar26 = dVar25, dVar25 < 0.0)) {
      dVar26 = 0.0;
    }
    dVar26 = (double)(float)(dVar26 + 0.10000000149011612);
    if ((bVar2 < 7) || (8 < bVar2)) {
      hero::g_heroInvisible = (byte)((ulonglong)((longlong)iVar19 + -0x3f266666) >> 0x3f);
    }
  }
  iVar19 = 0;
  do {
    uVar22 = 0;
    lVar21 = lVar1;
    do {
      puVar7[0x28] = (longlong)
                     (int)(((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
                          iVar19);
      fVar5 = (float)(longlong)puVar7[0x28] * 0.19634938 - 3.14159;
      fVar9 = fVar5 + 1.5707963;
      fVar10 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar10 = fVar5;
      }
      fVar12 = 3.1415925 - fVar9;
      if (fVar9 - (3.1415925 - fVar9) < 0.0) {
        fVar12 = fVar9;
      }
      fVar11 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar5 = -3.1415925 - fVar9;
      if ((-3.1415925 - fVar9) - fVar12 < 0.0) {
        fVar5 = fVar12;
      }
      fVar9 = fVar11 * fVar11;
      fVar10 = fVar5 * fVar5;
      fVar14 = fVar9 * fVar9 * fVar11;
      fVar12 = fVar10 * fVar10 * fVar5;
      fVar15 = fVar9 * fVar14;
      fVar13 = fVar10 * fVar12;
      iVar8 = (int)lVar21;
      *(float *)(iVar8 + 0xb0) =
           (fVar10 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) *
           *(float *)(iVar6 + 0x34);
      fVar5 = *(float *)(iVar6 + 0x34);
      *(undefined4 *)(iVar8 + 0xb8) = 0;
      *(float *)(iVar8 + 0xb4) =
           (fVar9 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar9 * fVar11 * -0.16666657 + fVar11) *
           fVar5;
      if ((uVar22 & 1) == 0) {
        fVar5 = (float)((double)DAT_00764a2c - dVar26);
        fVar9 = 0.0;
      }
      else {
        fVar5 = 0.0;
        fVar9 = (float)((double)DAT_00764a2c + dVar26);
      }
      uVar22 = uVar22 + 1;
      *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
      *(float *)(iVar8 + 0xb8) = fVar9 + fVar5;
      lVar21 = lVar21 + 0x10;
    } while ((int)uVar22 < 4);
    draw::FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,EffectTexHeaders,9);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0x20);
  return;
}



//==== 001dbce8  ns=Global  size=0x50
// sig: undefined FUN_001dbce8(void)
// callers(1): 002dbf30 mobyupdate_unsorted::UpdateMoby_1923
// callees(1): 0015d12c sound::PlayMobySound

void FUN_001dbce8(MobyInstance *param_1)

{
  if (param_1->state == '\x01') {
    sound::PlayMobySound(0,0,param_1);
    param_1->state = '\a';
  }
  return;
}



//==== 001dbd38  ns=Global  size=0x58
// sig: undefined FUN_001dbd38(void)
// callers(1): 002dbf30 mobyupdate_unsorted::UpdateMoby_1923
// callees(0): 

undefined8 FUN_001dbd38(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if (bVar1 < 9 && 6 < bVar1) {
    if ((bVar1 == 8) &&
       (uVar2 = *(uint *)(*(int *)(param_1 + 0x78) + 0x34), uVar3 = (int)uVar2 >> 0x1f,
       0x3e4ccccd < (int)((uVar3 >> 1 ^ uVar2) - uVar3))) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



//==== 001dbd90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1138_001dbd90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1138_001dbd90(void)

{
  DAT_00764a84 = 0x10000;
  return;
}



//==== 001dbdb0  ns=mobyupdate_unsorted  size=0x1a8
// sig: undefined UpdateMoby_1138(MobyInstance * moby)
// callers(0): 
// callees(2): 000f1238 mobyfunc::GetMobyJointsWorldPos; 0013a9d8 pause::GetMenuScreen

/* Moby 1138 */

void mobyupdate_unsorted::UpdateMoby_1138(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined1 local_20 [16];
  
  if ((moby->field43_0x70 & 2U) != 0) {
    fVar1 = moby->unk58;
    moby->unk58 = 0.0;
    fVar3 = 1.0;
    if (0.0 - fVar1 < 0.0) {
      fVar3 = 0.0;
    }
    moby->animationBlend = fVar3;
  }
  if (DAT_00a15f39 != '\0') {
    if ((moby->field44_0x71 == '\x02') || (moby->field44_0x71 == '\x04')) {
      (moby->pos).x = 512.0;
    }
  }
  iVar8 = pause::GetMenuScreen();
  if ((iVar8 == 0xf) || (iVar8 == 0x10)) {
    if ((iVar8 == 0xf) && (moby->field44_0x71 == 'm')) {
      (moby->pos).x = 512.0;
      DAT_00ef26f0 = 0xf;
    }
    if (((iVar8 == 0x10) && (DAT_00ef26f0 == 0xf)) && (moby->field44_0x71 == 'm')) {
      (moby->pos).x = 256.0;
      DAT_00ef26f0 = 0x10;
    }
  }
  pfVar2 = (float *)moby->pVar;
  mobyfunc::GetMobyJointsWorldPos(moby,4,local_20,pfVar2);
  fVar1 = pfVar2[5] - pfVar2[1];
  fVar3 = pfVar2[9] - pfVar2[1];
  fVar4 = pfVar2[4] - *pfVar2;
  fVar5 = pfVar2[8] - *pfVar2;
  fVar6 = pfVar2[6] - pfVar2[2];
  fVar7 = pfVar2[10] - pfVar2[2];
  pfVar2[0x10] = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  pfVar2[0x11] = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  return;
}



//==== 001dbf60  ns=mobyupdate_unsorted  size=0x158
// sig: undefined UpdateMoby_1139(MobyInstance * moby)
// callers(0): 
// callees(3): 000fcc68 mobyutil::MB_randRot; 00132bb0 partupd::SpawnPart_67; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1139 */

void mobyupdate_unsorted::UpdateMoby_1139(MobyInstance *moby)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_50 [40];
  
  if (moby->state == 0) {
    moby->updateDistance = -0x80;
    moby->state = '\x01';
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else if (((moby->state < 2) &&
           (iVar1 = fastfunc::FastCheckBsphereInView(0x4060000000000000,local_50), iVar1 != -1)) &&
          (hero::g_heroStateType == 0x16)) {
    iVar1 = 0;
    do {
      uVar2 = mobyutil::MB_randRot();
      uVar3 = mobyutil::MB_randRot();
      partupd::SpawnPart_67(uVar2,uVar3,moby,&DAT_00a15d30);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}



//==== 001dc0b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1140_001dc0b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1140_001dc0b8(void)

{
  DAT_00764b40 = 0x10000;
  return;
}



//==== 001dc0d0  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1140_001dc0d0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1140_001dc0d0(int param_1)

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



//==== 001dc1f0  ns=mobyupdate_helpers  size=0x53c
// sig: undefined M1140_001dc1f0(void)
// callers(1): 001dedb0 mobyupdate_helpers::M1140_001dedb0
// callees(2): 001167c8 mobyutil::MB_UpdateManipulatorRot; 005025e0 fastfunc::FastDiffRots
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1140_001dc1f0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x24] = in_LR;
  puVar8[0x1c] = in_f26;
  puVar8[0x1d] = in_f27;
  puVar8[0x1e] = in_f28;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x1a] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x78);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x48);
  puVar8[0x19] = unaff_r29;
  if (bVar1 < 0xb) {
    if (5 < bVar1) goto LAB_001dc68c;
  }
  else if (bVar1 < 0xf) {
    if (bVar1 == 0xd) goto LAB_001dc68c;
  }
  else if (bVar1 != 0x10) goto LAB_001dc68c;
  fVar2 = g_heroPosition.x - fVar2;
  dVar23 = (double)fVar2;
  fVar3 = g_heroPosition.y - fVar3;
  dVar22 = (double)fVar3;
  dVar24 = (double)(fVar4 + 1.0);
  *(float *)((int)puVar8 + 0x7c) = fVar2;
  *(float *)(puVar8 + 0x10) = fVar3;
  dVar26 = (double)g_heroPosition.z;
  *(float *)((int)puVar8 + 0x84) = (float)(ABS(dVar23) - ABS(dVar22));
  dVar27 = 0.0;
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar8 + 0x7c));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar25 = ABS(dVar22);
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar19 = ABS((double)*(float *)(puVar8 + 0x10));
  if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar23);
  }
  dVar21 = 0.7853981852531433;
  dVar20 = dVar27;
  if (0.0 < dVar25) {
    lVar12 = uVar11 - 0x100;
    lVar14 = uVar11 - 0x68;
    lVar17 = uVar11 - 0x58;
    lVar18 = 2;
    fVar4 = (float)(dVar19 - dVar25) / (float)(dVar19 + dVar25);
    fVar6 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0xb4) = fVar4;
    *(float *)((int)puVar8 + 0xac) = fVar4;
    *(float *)(puVar8 + 0x16) = fVar4;
    *(float *)(puVar8 + 0x15) = fVar4;
    fVar4 = fVar6 * fVar6;
    *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar6;
    *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar4;
    *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar4 * fVar6;
    do {
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar17 = uVar11 - 0x68;
    pfVar15 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar6 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    lVar12 = lVar13;
    dVar25 = dVar27;
    do {
      iVar9 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar10 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar9 + 0xa8)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar20 = (double)((float)(dVar25 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar19 = (double)fastfunc::FastDiffRots(dVar20,(double)fVar5);
  dVar20 = ABS((double)(float)(dVar26 - dVar24));
  *(float *)((int)puVar8 + 0x74) = (float)(dVar26 - dVar24);
  fVar2 = SQRT((float)(dVar23 * dVar23 + (double)(float)(dVar22 * dVar22)));
  dVar22 = ABS((double)fVar2);
  *(float *)(puVar8 + 0xe) = fVar2;
  *(float *)(puVar8 + 0xf) = (float)(dVar22 - dVar20);
  uVar16 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar8 + 0xe));
  if ((double)*(float *)(puVar8 + 0xf) - dVar27 < 0.0) {
    dVar25 = dVar20;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar23 = ABS((double)*(float *)((int)puVar8 + 0x74));
  if ((double)*(float *)(puVar8 + 0xf) - dVar27 < 0.0) {
    dVar23 = dVar22;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar27 < dVar25) {
    lVar12 = uVar11 - 0x100;
    lVar17 = uVar11 - 0x78;
    lVar14 = uVar11 - 0x88;
    lVar18 = 2;
    fVar4 = (float)(dVar23 - dVar25) / (float)(dVar23 + dVar25);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)((int)puVar8 + 0x8c) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    *(float *)(puVar8 + 0x11) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar5;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
      iVar9 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar11 - 0x88;
    pfVar15 = (float *)&DAT_007358e0;
    lVar12 = lVar13;
    lVar14 = lVar17;
    do {
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar4;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar12 = 2;
    do {
      iVar9 = (int)lVar13;
      iVar10 = (int)lVar17;
      lVar13 = lVar13 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar9 + 0x88)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar27 = (double)((float)(dVar27 + dVar21) * fVar2 + fVar3);
  }
  dVar27 = -dVar27;
  dVar25 = 1.2217304706573486;
  if ((dVar19 <= 1.2217304706573486) && (dVar25 = dVar19, dVar19 < -1.2217304706573486)) {
    dVar25 = -1.2217304706573486;
  }
  dVar22 = 0.2617993950843811;
  if ((dVar27 <= 0.2617993950843811) && (dVar22 = dVar27, dVar27 < -0.5235987901687622)) {
    dVar22 = -0.5235987901687622;
  }
  *(float *)(iVar7 + 0x1c8) = (float)(dVar25 * 0.699999988079071);
  *(float *)(iVar7 + 0x1c4) = (float)dVar22;
  *(float *)(iVar7 + 0x248) = (float)(dVar25 * 0.30000001192092896);
LAB_001dc68c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)(iVar7 + 0x1d0) = 0x40300000;
  }
  dVar27 = 0.019999999552965164;
  dVar25 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar7 + 0x160,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar27),
             (double)(float)((double)DAT_0071f40c * dVar25),param_1,iVar7 + 0x1e0,1);
  return;
}



//==== 001dc730  ns=mobyupdate_helpers  size=0x53c
// sig: undefined M1140_TransitionAnim(void)
// callers(1): 001dd210 mobyupdate_helpers::M1140_001dd210
// callees(1): 000fddc0 mobyutil::MB_SetAnimation
// strings: 00764b88: '?s33' (raw)

void mobyupdate_helpers::M1140_TransitionAnim(int param_1,byte param_2)

{
  char cVar1;
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
  float fVar12;
  MobyInstance *pMVar13;
  
  iVar5 = *(int *)(param_1 + 0x78);
  *(byte *)(param_1 + 0x20) = param_2;
  cVar1 = *(char *)(param_1 + 0x53);
  if (param_2 < 9) {
    if (3 < param_2) {
      if (6 < param_2) {
        if (7 < param_2) {
          if (cVar1 != '\x03') {
            mobyutil::MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
          }
          pMVar13 = MobyInstance;
          iVar6 = *(int *)(iVar5 + (int)(((ulonglong)
                                          (LZCOUNT(*(undefined4 *)(iVar5 + 0x158)) << 0x20) >> 0x25
                                         ^ 1) << 2) + 0xf0);
          fVar2 = MobyInstance[iVar6].pos.x;
          *(float *)(iVar5 + 0x120) = fVar2;
          fVar3 = pMVar13[iVar6].pos.y;
          *(float *)(iVar5 + 0x124) = fVar3;
          fVar4 = pMVar13[iVar6].pos.z;
          *(float *)(iVar5 + 0x128) = fVar4;
          *(f32 *)(iVar5 + 300) = pMVar13[iVar6].pos.w;
          fVar7 = pMVar13[iVar6].transform.v0.y * DAT_00764b80;
          fVar8 = pMVar13[iVar6].transform.v0.z * DAT_00764b80;
          fVar9 = pMVar13[iVar6].transform.v2.y * DAT_00764b88;
          fVar10 = pMVar13[iVar6].transform.v2.z * DAT_00764b88;
          fVar11 = pMVar13[iVar6].transform.v1.y * DAT_00764b84;
          fVar12 = pMVar13[iVar6].transform.v1.z * DAT_00764b84;
          *(float *)(iVar5 + 0x120) =
               pMVar13[iVar6].transform.v1.x * DAT_00764b84 +
               pMVar13[iVar6].transform.v2.x * DAT_00764b88 +
               pMVar13[iVar6].transform.v0.x * DAT_00764b80 + fVar2;
          *(float *)(iVar5 + 0x124) = fVar11 + fVar9 + fVar7 + fVar3;
          *(float *)(iVar5 + 0x128) = fVar12 + fVar10 + fVar8 + fVar4;
          return;
        }
        if (cVar1 != '\x04') {
          mobyutil::MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 20.5));
        }
        *(undefined4 *)(iVar5 + 0x13c) = 0;
        *(undefined4 *)(iVar5 + 0x138) = 0;
        *(undefined4 *)(iVar5 + 0x134) = 0;
        *(undefined4 *)(iVar5 + 0x130) = 0;
        return;
      }
      if (4 < param_2) {
        if (cVar1 != '\x03') {
          mobyutil::MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
        }
        *(float *)(iVar5 + 0x154) = DAT_00764b74 * mobyutil::g_FrameTime;
        return;
      }
      if (cVar1 != '\x02') {
        mobyutil::MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 20.5));
      }
      *(float *)(iVar5 + 0x154) = DAT_00764b70 * mobyutil::g_FrameTime;
      return;
    }
    if (param_2 < 2) {
      if (param_2 == 0) {
        return;
      }
    }
    else if (param_2 < 3) {
      return;
    }
  }
  else if (param_2 < 0xe) {
    if (param_2 < 0xb) {
      if (9 < param_2) {
        if (cVar1 != '\x03') {
          mobyutil::MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 20.5));
        }
        pMVar13 = MobyInstance;
        iVar6 = *(int *)(iVar5 + (int)(((ulonglong)(LZCOUNT(*(undefined4 *)(iVar5 + 0x158)) << 0x20)
                                        >> 0x25 ^ 1) << 2) + 0xf0);
        fVar2 = MobyInstance[iVar6].pos.x;
        *(float *)(iVar5 + 0x120) = fVar2;
        fVar3 = pMVar13[iVar6].pos.y;
        *(float *)(iVar5 + 0x124) = fVar3;
        fVar4 = pMVar13[iVar6].pos.z;
        *(float *)(iVar5 + 0x128) = fVar4;
        *(f32 *)(iVar5 + 300) = pMVar13[iVar6].pos.w;
        fVar7 = pMVar13[iVar6].transform.v0.y * DAT_00764b90;
        fVar8 = pMVar13[iVar6].transform.v0.z * DAT_00764b90;
        fVar9 = pMVar13[iVar6].transform.v2.y * DAT_00764b98;
        fVar10 = pMVar13[iVar6].transform.v2.z * DAT_00764b98;
        fVar11 = pMVar13[iVar6].transform.v1.y * DAT_00764b94;
        fVar12 = pMVar13[iVar6].transform.v1.z * DAT_00764b94;
        *(float *)(iVar5 + 0x120) =
             pMVar13[iVar6].transform.v1.x * DAT_00764b94 +
             pMVar13[iVar6].transform.v2.x * DAT_00764b98 +
             pMVar13[iVar6].transform.v0.x * DAT_00764b90 + fVar2;
        *(float *)(iVar5 + 0x124) = fVar11 + fVar9 + fVar7 + fVar3;
        *(float *)(iVar5 + 0x128) = fVar12 + fVar10 + fVar8 + fVar4;
        return;
      }
      if (cVar1 != '\0') {
        mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
      }
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(undefined4 *)(iVar5 + 0x138) = 0;
      *(undefined4 *)(iVar5 + 0x134) = 0;
      *(undefined4 *)(iVar5 + 0x130) = 0;
      return;
    }
    if (0xc < param_2) {
      return;
    }
  }
  else {
    if (0xf < param_2) {
      if (0x10 < param_2) {
        return;
      }
      if (cVar1 != '\0') {
        mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
      }
      *(undefined4 *)(iVar5 + 0x13c) = 0;
      *(undefined4 *)(iVar5 + 0x138) = 0;
      *(undefined4 *)(iVar5 + 0x134) = 0;
      *(undefined4 *)(iVar5 + 0x130) = 0;
      return;
    }
    if (0xe < param_2) {
      return;
    }
  }
  if (cVar1 != '\0') {
    mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    param_2 = *(byte *)(param_1 + 0x20);
  }
  if (param_2 == 0xe) {
    *(undefined4 *)(iVar5 + 0x2c) = 0x41200000;
  }
  *(undefined4 *)(iVar5 + 0x13c) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  *(undefined4 *)(iVar5 + 0x130) = 0;
  if (*(char *)(param_1 + 0x20) == '\x0e') {
    *(undefined2 *)(iVar5 + 0x56) = 2;
  }
  return;
}



//==== 001dcc70  ns=mobyupdate_helpers  size=0x164
// sig: undefined8 M1140_001dcc70(MobyInstance * moby, undefined8 param_2, undefined8 param_3)
// callers(1): 001dd210 mobyupdate_helpers::M1140_001dd210
// callees(2): 00104e44 mobyutil::PointInsideComplexPoly; 00114d58 mobyutil::MB_SplineFindRouteNode

undefined8
mobyupdate_helpers::M1140_001dcc70(MobyInstance *moby,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  longlong lVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  astruct_2 *pvVar1;
  astruct_1 *pVars;
  
  pvVar1 = (astruct_2 *)moby->pVar;
  iVar3 = mobyutil::PointInsideComplexPoly
                    (param_2._4_4_,
                     (Vec4 *)Splines[*(int *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4)]->
                             points,
                     Splines[*(int *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4)]->cnt);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    local_40 = *(undefined4 *)(&pvVar1->field_0x60 + pvVar1->field335_0x158 * 4);
    uVar1 = pvVar1->field335_0x158;
    if ((int)uVar1 < 3) {
      if (1 < (int)uVar1) {
        local_3c = pvVar1->field128_0x80;
        uVar2 = 4;
        local_38 = pvVar1->field129_0x84;
        local_34 = pvVar1->field130_0x88;
      }
    }
    else if ((int)uVar1 < 4) {
      local_3c = pvVar1->field128_0x80;
      uVar2 = 3;
      local_38 = pvVar1->field129_0x84;
    }
    lVar4 = ZEXT48(pvVar1) + ((ulonglong)pvVar1->field335_0x158 & 0x3fffffff) * 4;
    iVar3 = mobyutil::MB_SplineFindRouteNode
                      (0.2,&local_40,uVar2,(longlong)*(int *)((int)lVar4 + 0x70),lVar4,&moby->pos,
                       param_2._4_4_,&pvVar1->field_0x120);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



//==== 001dcde8  ns=mobyupdate_helpers  size=0x254
// sig: undefined M1140_001dcde8(MobyInstance * param_1, undefined4 param_2)
// callers(1): 001dd210 mobyupdate_helpers::M1140_001dd210
// callees(4): 00057820 collproc::CollLine; 000ffc18 mobyutil::GetGroundZNoWater; 00104e44 mobyutil::PointInsideComplexPoly; 00110b70 mobyutil::MB_IsPntInCuboid

undefined8 mobyupdate_helpers::M1140_001dcde8(MobyInstance *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  double dVar12;
  double dVar13;
  Vec4 local_60;
  f32 local_50;
  f32 local_4c;
  float local_48;
  f32 local_44;
  
  iVar10 = 0;
  pvVar4 = param_1->pVar;
  pvVar11 = pvVar4;
  while (iVar9 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&param_1->pos,(longlong)*(int *)((int)pvVar11 + 0xf8)),
        iVar9 == 0) {
    iVar10 = iVar10 + 1;
    pvVar11 = (void *)((int)pvVar11 + 4);
    if (1 < iVar10) {
      return 0;
    }
  }
  fVar1 = (param_1->pos).y;
  fVar5 = param_2[1] - fVar1;
  fVar2 = (param_1->pos).x;
  fVar6 = *param_2 - fVar2;
  fVar3 = (param_1->pos).z;
  fVar7 = param_2[2] - fVar3;
  local_60.w = param_2[3];
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  local_60.y = fVar5;
  local_60.x = fVar6;
  local_60.z = fVar7;
  if ((4.0 < fVar8) &&
     (local_60.y = 0.0, local_60.x = local_60.y, local_60.z = local_60.y, fVar8 != 0.0)) {
    fVar8 = 4.0 / fVar8;
    local_60.y = fVar5 * fVar8;
    local_60.x = fVar6 * fVar8;
    local_60.z = fVar7 * fVar8;
  }
  local_60.x = local_60.x + fVar2;
  local_60.y = local_60.y + fVar1;
  local_60.z = local_60.z + fVar3;
  iVar10 = mobyutil::PointInsideComplexPoly
                     (&local_60,
                      (Vec4 *)Splines[*(int *)((int)pvVar4 +
                                              *(int *)((int)pvVar4 + 0x158) * 4 + 0x60)]->points,
                      Splines[*(int *)((int)pvVar4 + *(int *)((int)pvVar4 + 0x158) * 4 + 0x60)]->cnt
                     );
  if (iVar10 == 0) {
    return 0;
  }
  local_60.z = local_60.z + 5.0;
  dVar12 = (double)mobyutil::GetGroundZNoWater(&local_60);
  dVar13 = (double)(param_1->pos).z;
  if (ABS((float)(dVar12 - dVar13)) <= 0.5) {
    return 0;
  }
  local_50 = (param_1->pos).x;
  local_4c = (param_1->pos).y;
  local_44 = (param_1->pos).w;
  local_48 = (float)(dVar13 + 0.15000000596046448);
  local_60.z = (float)(dVar12 + 0.15000000596046448);
  iVar10 = collproc::CollLine(&local_50,&local_60,2,param_1,0);
  if (iVar10 == 0) {
    return 0;
  }
  *param_2 = local_60.x;
  param_2[2] = (float)dVar12;
  param_2[1] = local_60.y;
  param_2[3] = local_60.w;
  return 1;
}



//==== 001dd040  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1140_CloseToPuffoid(MobyInstance * moby)
// callers(1): 001dd210 mobyupdate_helpers::M1140_001dd210
// callees(1): 00227994 mobyupdate_helpers::MB_isSpecificState

ulonglong mobyupdate_helpers::M1140_CloseToPuffoid(MobyInstance *moby)

{
  ushort uVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  MobyInstance *pMVar8;
  undefined4 uVar9;
  int iVar10;
  short sVar12;
  ushort *puVar11;
  int iVar13;
  double dVar14;
  
  iVar10 = 0;
  pvVar2 = moby->pVar;
  uVar9 = 0;
  iVar13 = 0;
  dVar14 = 10.0;
  do {
    sVar12 = (short)*(undefined4 *)
                     ((int)pvVar2 + iVar13 + *(int *)((int)pvVar2 + 0x158) * 0x10 + 0x90);
    if ((sVar12 < 0) || (mobyutil::g_NumMobyGroups < sVar12)) break;
    puVar11 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)((longlong)sVar12 << 2));
    if (puVar11 != (ushort *)0x0) {
      do {
        uVar6 = *puVar11 & 0x7fff;
        pMVar8 = MobyInstance + uVar6;
        if ((pMVar8->state < 0x80) &&
           (((pMVar8->oClass != PUFFOID || (iVar7 = MB_isSpecificState(pMVar8), iVar7 == 0)) &&
            (fVar3 = (moby->pos).y - MobyInstance[uVar6].pos.y,
            fVar4 = (moby->pos).x - MobyInstance[uVar6].pos.x,
            fVar5 = (moby->pos).z - MobyInstance[uVar6].pos.z, uVar9 = 1,
            (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < dVar14)))) {
          return 2;
        }
        uVar1 = *puVar11;
        puVar11 = puVar11 + 1;
      } while (-1 < (short)uVar1);
    }
    iVar10 = iVar10 + 1;
    iVar13 = iVar13 + 4;
  } while (iVar10 < 4);
  return (ulonglong)(LZCOUNT(uVar9) << 0x20) >> 0x25 ^ 1;
}



//==== 001dd210  ns=mobyupdate_helpers  size=0x123c
// sig: undefined M1140_001dd210(undefined4 moby)
// callers(1): 001dedb0 mobyupdate_helpers::M1140_001dedb0
// callees(21): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000ffc18 mobyutil::GetGroundZNoWater; 00112e18 mobyutil::MB_UnlockItem; 0011440c mobyutil::MB_SplineMarkCrossings; 00119488 mobyutil::MB_SetPointAheadOfMoby; 001b6870 FUN_001b6870; 001b688c mobyupdate_helpers::M1077_001b688c; 001dc730 mobyupdate_helpers::M1140_TransitionAnim; 001dcc70 mobyupdate_helpers::M1140_001dcc70; 001dcde8 mobyupdate_helpers::M1140_001dcde8; 001dd040 mobyupdate_helpers::M1140_CloseToPuffoid; 001e348c FUN_001e348c; 00401de4 mobyupdate_helpers::M650_00401de4; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004d407c FUN_004d407c; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot
// strings: 0096c165: 'None'

void mobyupdate_helpers::M1140_001dd210(MobyInstance *moby,undefined8 param_2,undefined8 param_3)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Cuboid *pCVar16;
  Cuboid *pCVar17;
  int iVar19;
  int iVar20;
  MobyInstance *pMVar21;
  undefined8 uVar18;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  pvVar9 = moby->pVar;
  iVar19 = M1140_CloseToPuffoid(moby);
  uVar1 = moby->state;
  if ((((uVar1 == '\x03') || (uVar1 == '\x04')) || (uVar1 == '\x05')) && (iVar19 == 0)) {
    M1140_TransitionAnim(moby,6);
  }
  else {
    if (((uVar1 == '\x04') || (uVar1 == '\x05')) || (uVar1 == '\x06')) {
      local_5c = (moby->transform).v0.y;
      local_60 = (moby->transform).v0.x;
      fVar3 = (moby->transform).v0.z;
      local_58 = 0.0;
      fVar4 = SQRT(fVar3 * fVar3 + local_60 * local_60 + local_5c * local_5c);
      if (fVar4 == 0.0) {
        local_54 = (moby->transform).v0.w;
        local_5c = local_58;
        local_60 = local_58;
      }
      else {
        fVar4 = 3.0 / fVar4;
        local_58 = fVar3 * fVar4;
        local_54 = (moby->transform).v0.w;
        local_60 = local_60 * fVar4;
        local_5c = local_5c * fVar4;
      }
      local_60 = local_60 + (moby->pos).x;
      local_5c = local_5c + (moby->pos).y;
      local_58 = local_58 + (moby->pos).z;
      iVar20 = M1140_001dcde8(moby,&local_60);
      if (iVar20 != 0) {
        *(float *)((int)pvVar9 + 0x120) = local_60;
        *(float *)((int)pvVar9 + 0x124) = local_5c;
        *(float *)((int)pvVar9 + 0x128) = local_58;
        *(float *)((int)pvVar9 + 300) = local_54;
        dVar22 = (double)mobyutil::GetGroundZNoWater((int)pvVar9 + 0x120);
        param_3 = 3;
        *(float *)((int)pvVar9 + 0x128) = (float)dVar22;
        *(undefined4 *)((int)pvVar9 + 0x15c) = 3;
        M1140_TransitionAnim(moby,7);
      }
    }
    pCVar16 = Cuboids;
    bVar2 = moby->state;
    if (bVar2 < 8) {
      if (bVar2 == 7) {
        if ((moby->field43_0x70 & 2U) != 0) {
          M1140_TransitionAnim(moby,*(undefined4 *)((int)pvVar9 + 0x15c));
        }
      }
      else if (bVar2 == 6) {
        M1140_001dcc70(moby,ZEXT48(Cuboids) +
                            ((ulonglong)
                             *(uint *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0) &
                            0x1ffffff) * 0x80 + 0x30 & 0xffffffff,ZEXT48(Cuboids));
        pCVar16 = Cuboids;
        pMVar21 = MobyInstance;
        fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 1.0) {
          iVar19 = *(int *)((int)pvVar9 + 0x158);
          if (iVar19 < 2) {
            if (-1 < iVar19) {
              if (iVar19 < 1) {
                iVar19 = *(int *)((int)pvVar9 + 0xf0);
                fVar3 = MobyInstance[iVar19].pos.x;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar4 = pMVar21[iVar19].pos.y;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                fVar5 = pMVar21[iVar19].pos.z;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(f32 *)((int)pvVar9 + 300) = pMVar21[iVar19].pos.w;
                fVar6 = pMVar21[iVar19].transform.v0.y;
                fVar7 = pMVar21[iVar19].transform.v0.x;
                fVar8 = pMVar21[iVar19].transform.v0.z;
                fVar12 = 0.0;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00ef2710 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v1.y;
                fVar7 = pMVar21[iVar19].transform.v1.x;
                fVar8 = pMVar21[iVar19].transform.v1.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00764ba4 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar15 = DAT_00764ba0;
                fVar6 = pMVar21[iVar19].transform.v2.y;
                fVar7 = pMVar21[iVar19].transform.v2.x;
                fVar8 = pMVar21[iVar19].transform.v2.z;
                *(undefined4 *)((int)pvVar9 + 0x15c) = 8;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = fVar15 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (0.0 - fVar10 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                *(float *)((int)pvVar9 + 0x128) = fVar5 + fVar13;
                *(float *)((int)pvVar9 + 0x124) = fVar4 + fVar14;
                *(float *)((int)pvVar9 + 0x120) = fVar3 + fVar12;
                M1140_TransitionAnim(moby,7);
              }
              else {
                iVar19 = *(int *)((int)pvVar9 + 0xf4);
                fVar3 = MobyInstance[iVar19].pos.x;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar4 = pMVar21[iVar19].pos.y;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                fVar5 = pMVar21[iVar19].pos.z;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(f32 *)((int)pvVar9 + 300) = pMVar21[iVar19].pos.w;
                fVar6 = pMVar21[iVar19].transform.v0.y;
                fVar7 = pMVar21[iVar19].transform.v0.x;
                fVar8 = pMVar21[iVar19].transform.v0.z;
                fVar12 = 0.0;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00ef2710 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v1.y;
                fVar7 = pMVar21[iVar19].transform.v1.x;
                fVar8 = pMVar21[iVar19].transform.v1.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = -DAT_00764ba4 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                fVar11 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar11 = fVar7 * fVar15;
                }
                fVar5 = fVar5 + fVar13;
                fVar4 = fVar4 + fVar14;
                fVar3 = fVar3 + fVar11;
                *(float *)((int)pvVar9 + 0x128) = fVar5;
                *(float *)((int)pvVar9 + 0x124) = fVar4;
                *(float *)((int)pvVar9 + 0x120) = fVar3;
                fVar6 = pMVar21[iVar19].transform.v2.y;
                fVar7 = pMVar21[iVar19].transform.v2.x;
                fVar8 = pMVar21[iVar19].transform.v2.z;
                fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
                fVar15 = DAT_00764ba0 / fVar10;
                fVar13 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                fVar14 = fVar12;
                if (0.0 - fVar10 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (0.0 - fVar10 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar13 = fVar8 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar14 = fVar6 * fVar15;
                }
                if (fVar10 - 0.0 < 0.0) {
                  fVar12 = fVar7 * fVar15;
                }
                *(float *)((int)pvVar9 + 0x128) = fVar5 + fVar13;
                *(float *)((int)pvVar9 + 0x124) = fVar4 + fVar14;
                *(float *)((int)pvVar9 + 0x120) = fVar3 + fVar12;
                pCVar16[*(int *)((int)pvVar9 + 0x110)].pos.z =
                     pCVar16[*(int *)((int)pvVar9 + 0x110)].pos.z + 500.0;
                *(undefined4 *)((int)pvVar9 + 0x15c) = 8;
                M1140_TransitionAnim(moby,7);
              }
            }
          }
          else if (iVar19 < 3) {
            M1140_TransitionAnim(moby,0xb);
          }
          else if (iVar19 < 4) {
            Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z + 500.0;
            M1140_TransitionAnim(moby,0xc);
          }
        }
      }
      else if (bVar2 == 5) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) ||
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 == 0)) ||
           (iVar19 == 2)) {
          M1140_TransitionAnim(moby,3);
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 4.0) {
            M1140_TransitionAnim(moby,4);
          }
        }
      }
      else if (bVar2 == 4) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 3.0) ||
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 == 0)) ||
           (iVar19 == 2)) {
          M1140_TransitionAnim(moby,3);
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (8.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
            M1140_TransitionAnim(moby,5);
          }
        }
      }
      else if (bVar2 == 3) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (((6.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) &&
            (uVar18 = M1140_001dcc70(moby,ZEXT48(&g_heroPosition),param_3), (int)uVar18 != 0)) &&
           (iVar19 == 1)) {
          M1140_TransitionAnim(moby,4);
        }
      }
      else if (bVar2 == 2) {
        if (g_gameMode != GAME_MODE_SCENE) {
          M1140_TransitionAnim(moby,3);
        }
      }
      else if (bVar2 == 1) {
        if (*(short *)((int)pvVar9 + 0x56) == 0) {
          if ((g_framesNotGrounded == 0) &&
             (iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20), iVar19 != 0)) {
            mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
            M1140_TransitionAnim(moby,2);
          }
        }
        else {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 6.0) {
            M1140_TransitionAnim(moby,3);
          }
        }
      }
      else if (bVar2 == 0) {
        FUN_004d3720(moby,(int)pvVar9 + 0x20);
        moby->updateDistance = -1;
        mobyutil::MB_SplineMarkCrossings((int)pvVar9 + 0x60,1,*(undefined4 *)((int)pvVar9 + 0x70));
        mobyutil::MB_SplineMarkCrossings((int)pvVar9 + 100,1,*(undefined4 *)((int)pvVar9 + 0x74));
        mobyutil::MB_SplineMarkCrossings((int)pvVar9 + 0x68,1,*(undefined4 *)((int)pvVar9 + 0x78));
        *(undefined4 *)((int)pvVar9 + 0x13c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x138) = 0;
        *(undefined4 *)((int)pvVar9 + 0x134) = 0;
        *(undefined4 *)((int)pvVar9 + 0x130) = 0;
        *(undefined4 *)((int)pvVar9 + 0x14c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x148) = 0;
        *(undefined4 *)((int)pvVar9 + 0x144) = 0;
        *(undefined4 *)((int)pvVar9 + 0x140) = 0;
        pCVar16 = Cuboids;
        if ((CHAR_ARRAY_0096c165[6] == '\0') ||
           (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x10c)] != -1)) {
          if (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x10c)] == -1) {
            *(undefined4 *)((int)pvVar9 + 0x158) = 3;
            pCVar16 = Cuboids;
            iVar19 = *(int *)((int)pvVar9 + 0xec);
            (moby->pos).x = Cuboids[iVar19].pos.x;
            (moby->pos).y = pCVar16[iVar19].pos.y;
            iVar20 = *(int *)((int)pvVar9 + 0x158);
            (moby->pos).z = pCVar16[iVar19].pos.z;
            (moby->pos).w = pCVar16[iVar19].pos.w;
            iVar19 = *(int *)((int)pvVar9 + iVar20 * 4 + 0xe0);
            pMVar21 = MobyInstance + *(int *)((int)pvVar9 + 0x104);
            (moby->rotation).x = pCVar16[iVar19].rot.x;
            (moby->rotation).y = pCVar16[iVar19].rot.y;
            (moby->rotation).z = pCVar16[iVar19].rot.z;
            (moby->rotation).w = pCVar16[iVar19].rot.w;
            M650_00401de4(pMVar21);
            M1140_TransitionAnim(moby,0xe);
            pMVar21 = MobyInstance + *(int *)((int)pvVar9 + 0xf0);
            *(undefined4 *)((int)pvVar9 + 0x2c) = 0x41200000;
            M1077_001b688c(pMVar21);
            M1077_001b688c(MobyInstance + *(int *)((int)pvVar9 + 0xf4));
          }
          else if ((g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x108)] != -1) ||
                  (iVar19 = *(int *)((int)pvVar9 + 0xe4),
                  fVar3 = g_heroPosition.y - Cuboids[iVar19].pos.y,
                  fVar4 = g_heroPosition.x - Cuboids[iVar19].pos.x,
                  fVar5 = g_heroPosition.z - Cuboids[iVar19].pos.z,
                  12.0 <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
            Cuboids[*(int *)((int)pvVar9 + 0x110)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x110)].pos.z - 500.0;
            pCVar16[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 pCVar16[*(int *)((int)pvVar9 + 0x114)].pos.z - 500.0;
            *(undefined4 *)((int)pvVar9 + 0x158) = 0;
            *(undefined4 *)((int)pvVar9 + 0x2c) = 0x40a00000;
            M1140_TransitionAnim(moby,1);
          }
          else {
            *(undefined4 *)((int)pvVar9 + 0x158) = 1;
            pCVar17 = Cuboids;
            (moby->pos).x = pCVar16[iVar19].pos.x;
            (moby->pos).y = pCVar16[iVar19].pos.y;
            (moby->pos).z = pCVar16[iVar19].pos.z;
            (moby->pos).w = pCVar16[iVar19].pos.w;
            iVar19 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
            (moby->rotation).x = pCVar17[iVar19].rot.x;
            (moby->rotation).y = pCVar17[iVar19].rot.y;
            (moby->rotation).z = pCVar17[iVar19].rot.z;
            (moby->rotation).w = pCVar17[iVar19].rot.w;
            M1140_TransitionAnim(moby,6);
            Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z =
                 Cuboids[*(int *)((int)pvVar9 + 0x114)].pos.z - 500.0;
            M1077_001b688c(MobyInstance + *(int *)((int)pvVar9 + 0xf0));
          }
        }
        else {
          M1077_001b688c(MobyInstance + *(int *)((int)pvVar9 + 0xf0));
          M1077_001b688c(MobyInstance + *(int *)((int)pvVar9 + 0xf4));
          M650_00401de4(MobyInstance + *(int *)((int)pvVar9 + 0x104));
          mobyfunc::DeleteMoby(moby);
        }
      }
    }
    else if (bVar2 == 0xf) {
      if (g_gameMode != GAME_MODE_SCENE) {
        mobyutil::MB_UnlockItem(6,1);
        memcard::memcard_Save(0,-1);
        help::Help_QueueMessage(STR_THE_O2_MASK_ALLOWS_0x2AF8,0x3a);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else if (bVar2 == 0xe) {
      if (((g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x118)] == -1) &&
          (g_heroState != TURRET_PLANE_UI)) &&
         (iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20), iVar19 != 0)) {
        mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
        M1140_TransitionAnim(moby,0xf);
      }
    }
    else if (bVar2 == 0xd) {
      if (g_gameMode != GAME_MODE_SCENE) {
        M650_00401de4(MobyInstance + *(int *)((int)pvVar9 + 0x104));
        M1140_TransitionAnim(moby,0xe);
      }
    }
    else if (bVar2 == 0xc) {
      *(undefined4 *)((int)pvVar9 + 0x2c) = 0x437f0000;
      iVar19 = FUN_004d3870(moby,(int)pvVar9 + 0x20);
      if (iVar19 != 0) {
        mobyfunc::SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x10c));
        MiscLevelFlags.field84_0x54 = 1;
        FUN_004d407c(moby,2);
        pCVar16 = Cuboids;
        iVar19 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
        iVar20 = *(int *)((int)pvVar9 + *(int *)((int)pvVar9 + 0x158) * 4 + 0xe0);
        (moby->pos).x = Cuboids[iVar19].pos.x;
        (moby->pos).y = pCVar16[iVar19].pos.y;
        (moby->pos).z = pCVar16[iVar19].pos.z;
        (moby->pos).w = pCVar16[iVar19].pos.w;
        (moby->rotation).x = pCVar16[iVar20].rot.x;
        (moby->rotation).y = pCVar16[iVar20].rot.y;
        (moby->rotation).z = pCVar16[iVar20].rot.z;
        (moby->rotation).w = pCVar16[iVar20].rot.w;
        fastfunc::FastEulerToMtx(&moby->transform,&moby->rotation);
        fVar3 = (moby->transform).v0.y;
        fVar4 = (moby->transform).v0.x;
        fVar5 = (moby->transform).v0.z;
        fVar6 = 0.0;
        dVar22 = (double)(moby->rotation).x;
        dVar28 = (double)(moby->rotation).y;
        dVar29 = (double)(moby->rotation).w;
        fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        if (fVar7 == 0.0) {
          fVar5 = (moby->transform).v0.w;
          fVar4 = fVar6;
          fVar3 = fVar6;
        }
        else {
          fVar7 = 2.0 / fVar7;
          fVar6 = fVar5 * fVar7;
          fVar5 = (moby->transform).v0.w;
          fVar4 = fVar4 * fVar7;
          fVar3 = fVar3 * fVar7;
        }
        dVar27 = (double)fVar5;
        dVar26 = (double)(fVar4 + (moby->pos).x);
        dVar25 = (double)(fVar3 + (moby->pos).y);
        dVar24 = (double)(fVar6 + (moby->pos).z);
        dVar23 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.14159);
        DAT_0095cd60 = (float)dVar26;
        DAT_0095cd64 = (float)dVar25;
        DAT_0095cd68 = (float)dVar24;
        DAT_0095cd6c = (float)dVar27;
        DAT_0095cd70 = (float)dVar22;
        DAT_0095cd74 = (float)dVar28;
        DAT_0095cd78 = (float)dVar23;
        DAT_0095cd7c = (float)dVar29;
        DAT_0095cd9a = 1;
        mobyutil::MB_SetPointAheadOfMoby(0x4004000000000000,moby);
        M1140_TransitionAnim(moby,0xd);
      }
    }
    else if (bVar2 == 0xb) {
      iVar19 = FUN_001e348c(MobyInstance + *(int *)((int)pvVar9 + 0x100));
      if (iVar19 != 0) {
        *(int *)((int)pvVar9 + 0x158) = *(int *)((int)pvVar9 + 0x158) + 1;
        M1140_TransitionAnim(moby,3);
      }
    }
    else if (bVar2 == 10) {
      fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        iVar19 = *(int *)((int)pvVar9 + 0x158) + 1;
        *(int *)((int)pvVar9 + 0x158) = iVar19;
        iVar19 = *(int *)((int)pvVar9 + iVar19 * 4 + 0xd0);
        *(float *)((int)pvVar9 + 0x120) = pCVar16[iVar19].pos.x;
        *(float *)((int)pvVar9 + 0x124) = pCVar16[iVar19].pos.y;
        *(float *)((int)pvVar9 + 0x128) = pCVar16[iVar19].pos.z;
        fVar3 = pCVar16[iVar19].pos.w;
        *(undefined4 *)((int)pvVar9 + 0x15c) = 4;
        *(float *)((int)pvVar9 + 300) = fVar3;
        M1140_TransitionAnim(moby,7);
      }
    }
    else if (bVar2 == 9) {
      iVar19 = FUN_001b6870(MobyInstance +
                            *(int *)((int)pvVar9 +
                                    (int)(((ulonglong)
                                           (LZCOUNT(*(undefined4 *)((int)pvVar9 + 0x158)) << 0x20)
                                           >> 0x25 ^ 1) << 2) + 0xf0));
      if (iVar19 != 0) {
        M1140_TransitionAnim(moby,10);
      }
    }
    else if ((bVar2 == 8) &&
            (fVar3 = (moby->pos).y - *(float *)((int)pvVar9 + 0x124),
            fVar4 = (moby->pos).x - *(float *)((int)pvVar9 + 0x120),
            SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 0.5)) {
      M1140_TransitionAnim(moby,9);
    }
  }
  return;
}



//==== 001de458  ns=mobyupdate_helpers  size=0x1f4
// sig: undefined M1140_001de458(void)
// callers(1): 001dedb0 mobyupdate_helpers::M1140_001dedb0
// callees(2): 001009b0 mobyutil::MB_MoveAndCollide; 001145d8 mobyutil::MB_PushOutOfSplineWalls

void mobyupdate_helpers::M1140_001de458(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 local_50 [24];
  
  iVar2 = *(int *)(param_1 + 0x78);
  dVar4 = (double)*(float *)(param_1 + 0x10);
  uVar7 = 0x3fd3333340000000;
  dVar5 = (double)*(float *)(param_1 + 0x14);
  dVar6 = (double)*(float *)(param_1 + 0x18);
  mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fd3333340000000,0,param_1,local_50);
  cVar1 = *(char *)(param_1 + 0x20);
  if ((((cVar1 == '\x04') || (cVar1 == '\x05')) || (cVar1 == '\x06')) ||
     ((cVar1 == '\a' && (*(int *)(iVar2 + 0x15c) == 3)))) {
    mobyutil::MB_PushOutOfSplineWalls
              (uVar7,*(undefined4 *)(iVar2 + *(int *)(iVar2 + 0x158) * 4 + 0x60));
    iVar3 = *(int *)(iVar2 + 0x158);
    if (iVar3 < 3) {
      if (1 < iVar3) {
        mobyutil::MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x80));
        mobyutil::MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x84));
        mobyutil::MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x88));
      }
    }
    else if (iVar3 < 4) {
      mobyutil::MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x80));
      mobyutil::MB_PushOutOfSplineWalls(uVar7,*(undefined4 *)(iVar2 + 0x84));
    }
  }
  *(float *)(iVar2 + 0x140) = (float)((double)*(float *)(param_1 + 0x10) - dVar4);
  *(float *)(iVar2 + 0x144) = (float)((double)*(float *)(param_1 + 0x14) - dVar5);
  *(float *)(iVar2 + 0x148) = (float)((double)*(float *)(param_1 + 0x18) - dVar6);
  *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}



//==== 001de6a0  ns=mobyupdate_helpers  size=0x708
// sig: undefined M1140_001de6a0(void)
// callers(1): 001dedb0 mobyupdate_helpers::M1140_001dedb0
// callees(7): 000fddc0 mobyutil::MB_SetAnimation; 00108180 mobyutil::MB_computeLobVelocity; 0010a2e0 mobyutil::OrganicDeltAng; 00112678 mobyutil::MB_PlatformGetDelta; 00113e88 mobyutil::MB_MayaFrameTrigger; 001b67d0 FUN_001b67d0; 00401de4 mobyupdate_helpers::M650_00401de4

void mobyupdate_helpers::M1140_001de6a0(longlong param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  MobyInstance *pMoby;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  f32 *val;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  MobyInstance *pMVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar20;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xe0;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar12;
  puVar9[0x1e] = in_LR;
  puVar9[0x1b] = in_f31;
  puVar9[0x19] = unaff_r30;
  puVar9[0x1a] = unaff_r31;
  pMoby = (MobyInstance *)param_1;
  bVar1 = pMoby->state;
  pvVar6 = pMoby->pVar;
  uVar20 = ZEXT48(pvVar6);
  fVar2 = (pMoby->pos).x;
  fVar3 = (pMoby->pos).y;
  puVar9[0x18] = unaff_r29;
  puVar9[0x17] = unaff_r28;
  iVar14 = boot::g_SpaceSceneFrame;
  if (3 < bVar1) {
    if (bVar1 < 0xb) {
      if (bVar1 < 8) {
        if (6 < bVar1) {
          iVar14 = mobyutil::MB_MayaFrameTrigger(9.0,pMoby);
          if (iVar14 != 0) {
            auVar24 = ZEXT416(0xffffffff);
            auVar28 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = loadVectorLeftIndexed(0x120,uVar20);
            auVar25 = loadVectorRightIndexed(0x130,uVar20);
            auVar27 = loadVectorLeftIndexed(0x10,param_1);
            fVar2 = (pMoby->pos).x;
            auVar26 = loadVectorLeftIndexed(0x124,uVar20);
            auVar25 = vectorSubtractFloatingPoint(auVar24 | auVar25,auVar27);
            auVar27 = loadVectorRightIndexed(0x134,uVar20);
            auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
            auVar24 = ZEXT416(0xffffffff);
            auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = ZEXT416(0xffffffff);
            auVar33 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = ZEXT416(0xffffffff);
            auVar35 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            uVar7 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x130,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar7;
            auVar24 = loadVectorLeftIndexed(0x14,param_1);
            fVar3 = (pMoby->pos).y;
            auVar26 = vectorSubtractFloatingPoint(auVar26 | auVar27,auVar24);
            uVar7 = *(undefined4 *)((int)pvVar6 + 300);
            auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar24 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x134,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar8;
            auVar27 = loadVectorLeftIndexed(0x18,param_1);
            *(undefined4 *)((int)pvVar6 + 0x13c) = uVar7;
            auVar24 = loadVectorLeftIndexed(0x34,0x1de64c);
            auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar28 = vectorMultiplyAddFloatingPoint
                                (auVar30,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 |
                                         auVar24 << 0x60,auVar28);
            auVar30 = loadVectorLeftIndexed(0x3c,0x1de64c);
            auVar24 = ZEXT416(0xffffffff);
            auVar33 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar24 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
            auVar29 = loadVectorLeftIndexed(0x128,uVar20);
            auVar28 = vectorConvertFromSignedFixedPointWord(auVar24,0);
            auVar24 = vectorReciprocalEstimateFloatingPoint(auVar28);
            fVar5 = 1.0 / (float)(longlong)(animationSpeed * 60.5);
            auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar24,auVar28,auVar30);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar24,auVar32,auVar33);
            auVar32 = loadVectorRightIndexed(0x138,uVar20);
            auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar24 = ZEXT416(0xffffffff);
            auVar36 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar27 = vectorSubtractFloatingPoint(auVar29 | auVar32,auVar27);
            auVar24 = ZEXT416(0xffffffff);
            auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
            auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar29 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar30);
            auVar32 = vectorShiftLeftIntegerWord(auVar24,auVar24);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar29,auVar31);
            auVar24 = vectorNegativeMultiplySubtractFloatingPoint(auVar33,auVar28,auVar30);
            fVar3 = (*(float *)((int)pvVar6 + 0x124) - fVar3) * fVar5;
            fVar5 = (*(float *)((int)pvVar6 + 0x120) - fVar2) * fVar5;
            auVar28 = vectorMultiplyAddFloatingPoint(auVar33,auVar24,auVar34);
            auVar24 = vectorMultiplyAddFloatingPoint(auVar25,auVar28,auVar35);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar28,auVar36);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar27,auVar28,auVar32);
            auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x130,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar7;
            uVar7 = storeVectorElementWordIndexed
                              (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x134,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar7;
            uVar7 = storeVectorElementWordIndexed
                              (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x138,
                               uVar20);
            *(undefined4 *)((int)pvVar6 + 0x138U & 0xfffffffc) = uVar7;
            dVar23 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)SQRT(fVar5 * fVar5 + fVar3 * fVar3),
                                        (double)(DAT_0071f418 * -10.8),param_1 + 0x10,uVar20 + 0x120
                                        ,0x130,0x138,0);
            *(float *)((int)pvVar6 + 0x138) = (float)dVar23;
            pMoby->unk58 = 0.6666667;
          }
          fVar2 = *(float *)((int)pvVar6 + 0x138);
          if (0.0 < SQRT(fVar2 * fVar2 +
                         *(float *)((int)pvVar6 + 0x130) * *(float *)((int)pvVar6 + 0x130) +
                         *(float *)((int)pvVar6 + 0x134) * *(float *)((int)pvVar6 + 0x134))) {
            *(float *)((int)pvVar6 + 0x138) = -(DAT_0071f418 * 10.8 - fVar2);
          }
          iVar14 = mobyutil::MB_MayaFrameTrigger(29.0,pMoby);
          if (iVar14 == 0) {
            return;
          }
          *(undefined4 *)((int)pvVar6 + 0x13c) = 0;
          *(undefined4 *)((int)pvVar6 + 0x138) = 0;
          *(undefined4 *)((int)pvVar6 + 0x134) = 0;
          *(undefined4 *)((int)pvVar6 + 0x130) = 0;
          pMoby->unk58 = 1.0;
          return;
        }
      }
      else if (bVar1 == 9) {
        pMVar19 = MobyInstance +
                  *(int *)((int)pvVar6 +
                          (int)(((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar6 + 0x158)) << 0x20)
                                 >> 0x25 ^ 1) << 2) + 0xf0);
        mobyutil::MB_PlatformGetDelta
                  (param_1,pMVar19,&DAT_00764b80,&DAT_00ef2700,param_1 + 0x10,param_1 + 0x40);
        iVar14 = FUN_001b67d0(pMVar19);
        if (iVar14 == 0) {
          return;
        }
        if (pMoby->animationId == '\x05') {
          return;
        }
        puVar9[0x14] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar9 + 0xa4));
        return;
      }
      fVar2 = *(float *)((int)pvVar6 + 0x120) - fVar2;
      fVar3 = *(float *)((int)pvVar6 + 0x124) - fVar3;
      val = &(pMoby->rotation).z;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar9 + 0xe) = fVar2;
      *(float *)((int)puVar9 + 0x74) = fVar3;
      *(float *)(puVar9 + 0xf) = fVar4 - fVar5;
      dVar23 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar11 = fVar4;
      }
      dVar22 = dVar23;
      if (0.0 < fVar2) {
        lVar17 = uVar12 - 0xd0;
        lVar16 = uVar12 - 100;
        lVar15 = uVar12 - 0x54;
        lVar21 = 2;
        fVar2 = (fVar11 - fVar2) / (fVar11 + fVar2);
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
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar2 * fVar2;
          iVar14 = (int)lVar16;
          lVar17 = lVar17 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar17 = uVar12 - 100;
        pfVar18 = (float *)&DAT_007358e0;
        lVar21 = 4;
        lVar15 = lVar17;
        lVar16 = lVar13;
        do {
          fVar2 = *pfVar18;
          fVar4 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x7c) * fVar2;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
          lVar15 = lVar15 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar15 = 2;
        do {
          iVar14 = (int)lVar13;
          iVar10 = (int)lVar17;
          lVar13 = lVar13 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar14 + 0x7c)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar3);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar22,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                 mobyutil::g_FrameTime * 12.566371,val,(int)val,(float *)((int)pvVar6 + 0x150));
      fVar5 = DAT_0071f418;
      fVar2 = (pMoby->rotation).z + 1.5707963;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = fVar4 * fVar4;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar2 * fVar3;
      *(float *)((int)pvVar6 + 0x130) =
           (fVar2 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
           *(float *)((int)pvVar6 + 0x154);
      fVar2 = (pMoby->rotation).z;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = fVar4 * fVar4;
      fVar3 = fVar2 * fVar2 * fVar4;
      fVar11 = fVar2 * fVar3;
      *(float *)((int)pvVar6 + 0x134) =
           (fVar2 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
           *(float *)((int)pvVar6 + 0x154);
      dVar22 = -(double)(fVar5 * 20.0 - *(float *)((int)pvVar6 + 0x148));
      *(float *)((int)pvVar6 + 0x138) = (float)dVar22;
      if (dVar23 < dVar22) {
        *(undefined4 *)((int)pvVar6 + 0x138) = 0;
      }
    }
    else if (((bVar1 == 0xd) && (update::g_SceneId == 1)) &&
            (puVar9[0x14] = (longlong)(int)(animationSpeed * 2000.5),
            iVar14 == *(int *)((int)puVar9 + 0xa4))) {
      M650_00401de4(MobyInstance + *(int *)((int)pvVar6 + 0x104));
    }
  }
  return;
}



//==== 001dedb0  ns=mobyupdate_helpers  size=0x188
// sig: undefined M1140_001dedb0(MobyInstance * moby)
// callers(0): 
// callees(6): 000f0ea8 mobyfunc::AttachManipulator; 00106360 mobyutil::MB_SetZBoundsFromGround; 001dc1f0 mobyupdate_helpers::M1140_001dc1f0; 001dd210 mobyupdate_helpers::M1140_001dd210; 001de458 mobyupdate_helpers::M1140_001de458; 001de6a0 mobyupdate_helpers::M1140_001de6a0
// strings: 0096c074: 'None'

/* Moby 114 */

void mobyupdate_helpers::M1140_001dedb0(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar5 = 0;
    puVar6 = &DAT_0095cd50;
    sVar4 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar6[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar6[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar4 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < sVar4);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 38.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x1e';
  }
  M1140_001de6a0(moby);
  M1140_001de458(moby);
  M1140_001dd210(moby);
  M1140_001dc1f0(moby);
  return;
}



//==== 001def38  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1140_001def38(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1140_001def38(void)

{
  DAT_00764c10 = 0x10000;
  return;
}



//==== 001def50  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1140(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1140 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1140(MobyInstance *moby)

{
  return moby;
}



//==== 001def78  ns=mobyupdate_unsorted  size=0x548
// sig: undefined UpdateMoby_1142(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010ce18 mobyutil::MB_PathMoveDist; 00110b70 mobyutil::MB_IsPntInCuboid; 002ea758 FUN_002ea758; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00654750: 'ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n' | 00654790: 'ERRORS, killing moby %d \n' | 006547b0: 'spawn_amt_i: %d  spawn_each: %d\n' | 006547d8: ' spawn %d of %d at %3.3f,%3.3f,%3.3f dist:%f \n' | 00654808: 'spawn_each reduced to %d\n'

/* Moby 1142 */

void mobyupdate_unsorted::UpdateMoby_1142(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  Spline *pSVar4;
  float fVar5;
  int *piVar6;
  bool bVar7;
  int iVar9;
  int iVar10;
  longlong lVar8;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  
  piVar3 = (int *)moby->pVar;
  if (moby->state == 0) {
    iVar10 = *piVar3;
    if (iVar10 == -1) {
      libc::printf("ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n");
    }
    iVar13 = piVar3[1];
    if (iVar13 == -1) {
      libc::printf("ERROR! Moby 1142 Equilizer Ammo Spawner has no trigger cuboid!\n");
    }
    else if (iVar10 != -1) {
      piVar3[8] = 0;
      iVar9 = 0;
      iVar10 = 0;
      if (0 < Splines[iVar13]->cnt) {
        do {
          iVar9 = iVar9 + 1;
          pSVar4 = Splines[iVar13];
          iVar13 = iVar9 - (iVar9 / pSVar4->cnt) * pSVar4->cnt;
          fVar1 = *(float *)((int)&pSVar4->points[0].y + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 5) * 4);
          fVar2 = *(float *)((int)&pSVar4->points[0].x + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 4) * 4);
          fVar5 = *(float *)((int)&pSVar4->points[0].z + iVar10) -
                  *(float *)((int)pSVar4 + (iVar13 * 4 + 6) * 4);
          *(float *)((int)&pSVar4->points[0].w + iVar10) =
               SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1);
          iVar13 = piVar3[1];
          pSVar4 = Splines[iVar13];
          piVar3[8] = (int)((float)piVar3[8] + *(float *)((int)&pSVar4->points[0].w + iVar10));
          iVar10 = iVar10 + 0x10;
        } while (iVar9 < pSVar4->cnt);
      }
      moby->state = '\x01';
      return;
    }
    libc::printf("ERRORS, killing moby %d \n",moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  else if ((moby->state < 2) &&
          (iVar10 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3), iVar10 != 0)) {
    piVar11 = &DAT_00764c40;
    if (DAT_00764c40 != -1) {
      iVar10 = 0;
      do {
        lVar14 = (longlong)*piVar11;
        dVar15 = (double)fastfunc::FastIntToDouble((&currentAmmoArray.field0_0x0)[*piVar11]);
        dVar16 = (double)fastfunc::FastIntToDouble
                                   (*(undefined2 *)((int)&DAT_00737d3e + (int)(lVar14 << 3) * 3));
        dVar19 = (double)(float)(dVar15 / dVar16);
        dVar17 = (double)mobyutil::MB_randRangeFloat(0.0,(float)piVar3[8]);
        if (((double)((float)piVar3[2] * 0.01) <= dVar19) &&
           (dVar19 < (double)((float)piVar3[3] * 0.01))) {
          fVar1 = (float)(dVar16 * (double)((float)piVar3[4] * 0.01) - dVar15);
          fVar2 = (float)(dVar16 * (double)((float)piVar3[5] * 0.01));
          fVar5 = fVar2;
          if (fVar2 - fVar1 < 0.0) {
            fVar5 = fVar1;
          }
          if ((piVar3[6] == 0) && (fVar5 = fVar2, fVar1 - fVar2 < 0.0)) {
            fVar5 = fVar1;
          }
          lVar8 = fastfunc::FastDoubleToInt((double)(fVar5 + 0.5));
          iVar13 = (int)lVar8 / piVar3[7];
          lVar12 = (longlong)iVar13 + ((LZCOUNT(-iVar13) << 0x3a) >> 0x3f & lVar8 - iVar13);
          pSVar4 = Splines[piVar3[1]];
          libc::printf("spawn_amt_i: %d  spawn_each: %d\n",lVar8,lVar12);
          if (0 < (int)lVar8) {
            dVar20 = 12.0;
            dVar19 = 10.0;
            dVar16 = 0.10000000149011612;
            dVar15 = 2.0;
            do {
              bVar7 = false;
              do {
                mobyutil::MB_PathMoveDist(dVar17,pSVar4,&local_b0,local_9c,local_a0);
                iVar13 = piVar3[9];
                if (iVar13 == -1) {
                  bVar7 = true;
                }
                else {
                  fVar1 = MobyInstance[iVar13].pos.y - local_ac;
                  fVar2 = MobyInstance[iVar13].pos.x - local_b0;
                  if ((double)SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= dVar20) {
                    dVar17 = (double)(float)(dVar17 + dVar19);
                  }
                  else {
                    bVar7 = true;
                  }
                }
              } while (!bVar7);
              libc::printf(" spawn %d of %d at %3.3f,%3.3f,%3.3f dist:%f \n",lVar14,lVar12,
                           (double)local_b0,(double)local_ac,(double)local_a8,dVar17);
              FUN_002ea758(&local_b0,lVar14,lVar12,0);
              dVar18 = (double)mobyutil::MB_randRangeFloat
                                         ((float)((double)(float)piVar3[8] * dVar16),(float)dVar15);
              iVar13 = (int)lVar8 - (int)lVar12;
              dVar17 = (double)(float)(dVar17 + dVar18);
              lVar8 = (longlong)iVar13;
              if (iVar13 < (int)lVar12) {
                libc::printf("spawn_each reduced to %d\n",lVar8);
                lVar12 = lVar8;
              }
            } while (0 < iVar13);
          }
        }
        piVar11 = piVar11 + 1;
        piVar6 = (int *)((int)&DAT_00764c44 + iVar10);
        iVar10 = iVar10 + 4;
      } while (*piVar6 != -1);
    }
    moby->state = '\x02';
  }
  return;
}



//==== 001df4c0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1143_001df4c0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1143_001df4c0(void)

{
  DAT_00764c9c = 0x10000;
  return;
}



//==== 001df4e0  ns=mobyupdate_unsorted  size=0xfc
// sig: undefined UpdateMoby_1143(MobyInstance * moby)
// callers(0): 
// callees(4): 000f0ea8 mobyfunc::AttachManipulator; 000fcc68 mobyutil::MB_randRot; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot

/* Moby 1143 */

void mobyupdate_unsorted::UpdateMoby_1143(MobyInstance *moby)

{
  void *manipulator;
  float fVar1;
  double dVar2;
  double dVar3;
  
  manipulator = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->field46_0x73 = ' ';
    dVar2 = (double)mobyutil::MB_randRot();
    *(float *)((int)manipulator + 0x40) = (float)dVar2;
    mobyfunc::AttachManipulator(moby,1,manipulator);
  }
  else if (moby->state < 2) {
    fVar1 = DAT_00764cc0 * 0.017453292 * mobyutil::g_FrameTime;
    dVar3 = (double)fVar1;
    dVar2 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar1);
    (moby->rotation).z = (float)dVar2;
    dVar2 = (double)fastfunc::FastWrapRot(*(float *)((int)manipulator + 0x40),(float)(dVar3 * -2.0))
    ;
    *(float *)((int)manipulator + 0x40) = (float)dVar2;
    fastfunc::FastQuaternionToEuler((int)manipulator + 0x10,2);
  }
  return;
}



//==== 001df5e0  ns=mobyupdate_helpers  size=0x130
// sig: undefined M1144_001df5e0(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1144_001df5e0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar3 = &DAT_0095cd50;
    if ((update::g_SceneId == 3) &&
       (boot::g_SpaceSceneFrame < 0x284 && 0x1b9 < boot::g_SpaceSceneFrame)) {
      DAT_0071fbd8 = 0x3f800000;
      DAT_00a15f30 = 0xbe99999a;
    }
    iVar2 = 0;
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



//==== 001df770  ns=mobyupdate_unsorted  size=0xcd8
// sig: undefined UpdateMoby_1144(MobyInstance * moby)
// callers(0): 
// callees(19): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 00106360 mobyutil::MB_SetZBoundsFromGround; 00112c20 mobyutil::MB_UnlockLevel; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 0065482c: 'Deserter'

/* Moby 1144 */

void mobyupdate_unsorted::UpdateMoby_1144(MobyInstance *moby)

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
    puVar23 = &DAT_0095cd50;
    if ((update::g_SceneId == 3) &&
       (boot::g_SpaceSceneFrame < 0x284 && 0x1b9 < boot::g_SpaceSceneFrame)) {
      DAT_0071fbd8 = 0x3f800000;
      DAT_00a15f30 = 0xbe99999a;
    }
    iVar17 = 0;
    sVar21 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar23[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar23[0x5e],0,&DAT_00a1bf80);
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
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (moby->animationId != '\x01') {
      puVar9[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
    if ((g_SeenPlanets.Gaspar != 0) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x40800000;
    *(char **)((int)pvVar8 + 0x40) = "Deserter";
    moby->state = '\x01';
    if (-1 < *(int *)((int)pvVar8 + 100)) {
      FUN_004d3720(moby,uVar24 + 0x20);
    }
  }
  else if (bVar1 < 2) {
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 8.0) {
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if (((moby->field43_0x70 & 2U) != 0) &&
       (bVar1 = moby->animationId, iVar17 = mobyutil::MB_randInt(2), (uint)bVar1 != iVar17 + 1U)) {
      iVar17 = mobyutil::MB_randInt(2);
      puVar9[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(moby,iVar17 + 1,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
    iVar17 = g_framesGroundedCnt;
    if ((g_standingOnMoby == 0) &&
       ((puVar9[0x1f] = (longlong)(int)(animationSpeed * 30.5),
        *(int *)((int)puVar9 + 0xfc) < iVar17 || (*(short *)((int)pvVar8 + 0x56) != 0)))) {
      FUN_004d3870(moby,uVar24 + 0x20);
      mobyutil::MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
    }
    if (*(short *)((int)pvVar8 + 0x24) == 4) {
      mobyutil::MB_UnlockLevel(Gaspar);
      memcard::memcard_Save(0,-1);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\x01') goto LAB_001e03a4;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_001dfe58:
    if (*(int *)((int)pvVar8 + 0x194) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x194) = 0;
      *(float *)((int)pvVar8 + 0x180) = hero::g_heroCGPos;
      *(float *)((int)pvVar8 + 0x184) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x188) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x18c) = DAT_00969dbc;
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
      lVar22 = uVar13 - 0x7c;
      lVar19 = uVar13 - 0x8c;
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
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
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
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_001dfe58;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar24 + 0x194);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x28,0x1df710);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x194,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x194U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0x198);
  if (iVar17 != 0) {
    dVar26 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x198) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar8 + 0x180));
    *(float *)((int)pvVar8 + 0x180) = *(float *)((int)pvVar8 + 0x180) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x184) = *(float *)((int)pvVar8 + 0x184) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x188) = *(float *)((int)pvVar8 + 0x188) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x194) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x180);
    fVar3 = *(float *)((int)pvVar8 + 0x184);
    fVar5 = *(float *)((int)pvVar8 + 0x188);
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
    lVar19 = uVar13 - 0xac;
    lVar22 = uVar13 - 0x9c;
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
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
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
      lVar15 = lVar15 + 0x10;
      iVar11 = (int)lVar22;
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
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x150;
    lVar22 = uVar13 - 0xbc;
    lVar19 = uVar13 - 0xcc;
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
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
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
  *(float *)((int)pvVar8 + 0xe4) = (float)dVar29;
  *(float *)((int)pvVar8 + 0xe8) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar8 + 0x168) = (float)(dVar26 * 0.5);
LAB_001e03a4:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xf0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x80,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0x100,1);
  return;
}



