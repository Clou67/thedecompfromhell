//==== 001b07a8  ns=mobyupdate_unsorted  size=0x16fc
// sig: undefined UpdateMoby_1068(MobyInstance * moby)
// callers(0): 
// callees(24): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc948 mobyutil::MB_SplineIntersect; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 0010581c mobyutil::SetCollDamIn; 00105d58 mobyutil::MB_CollLineMulti; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001aec28 mobyupdate_helpers::M1068_001aec28; 001afa30 mobyupdate_helpers::M1068_001afa30; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338

/* Moby 1068 */

void mobyupdate_unsorted::UpdateMoby_1068(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  Vec4 *pVVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 uVar17;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined1 auStack_180 [16];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  f32 local_100;
  f32 local_fc;
  float local_f8;
  f32 local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [16];
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  undefined1 auStack_b0 [24];
  undefined1 local_98;
  undefined1 local_97;
  MOBY_OCLASSES local_96;
  undefined1 auStack_80 [24];
  undefined1 local_68;
  undefined1 local_67;
  MOBY_OCLASSES local_66;
  longlong local_50;
  
  lVar13 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar19 = ZEXT48(pvVar5);
  mobyupdate_helpers::M1068_001afa30(lVar13);
  iVar6 = *(int *)((int)pvVar5 + 0x160);
  mobyfunc::DoManipulator(0x4004000000000000,moby,1,(Manipulator *)((int)pvVar5 + 0x420));
  if ((moby->enabled != '\0') &&
     (fVar32 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar3 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar32 * fVar32) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  dVar26 = 1.0;
  moby->unk58 = 1.0;
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->state = moby->setByGroup, moby->animationId != '\0')) {
        local_50 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 == 5) {
      dVar27 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = mobyutil::OrganicDeltAng
                         ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      mobyfunc::GetBonePosition((double)fVar32,lVar13,0,&local_170);
      local_160 = (moby->pos).x;
      local_15c = (moby->pos).y;
      local_154 = (moby->pos).w;
      local_158 = (moby->pos).z + 0.3;
      dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
      fVar32 = (moby->rotation).z;
      if ((g_heroType == '\x01') && (dVar27 < 9.0)) {
        moby->unk58 = DAT_00757b74;
      }
      if ((9.0 <= dVar27) && (dVar27 <= 15.0)) {
        fVar2 = fVar32 + 1.5707963;
        fVar3 = 3.1415925 - fVar32;
        if (fVar32 - (3.1415925 - fVar32) < 0.0) {
          fVar3 = fVar32;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar8 = -3.1415925 - fVar32;
        if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
          fVar8 = fVar3;
        }
        local_148 = 0x3f800000;
        fVar32 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar32 = fVar4;
        }
        fVar2 = fVar8 * fVar8;
        local_144 = 0x45afdf66;
        fVar3 = fVar32 * fVar32;
        fVar10 = fVar2 * fVar2 * fVar8;
        fVar4 = fVar3 * fVar3 * fVar32;
        fVar11 = fVar2 * fVar10;
        fVar9 = fVar3 * fVar4;
        local_14c = fVar2 * fVar11 * 2.601887e-06 +
                    fVar11 * -0.0001980741 +
                    fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
        local_150 = fVar3 * fVar9 * 2.601887e-06 +
                    fVar9 * -0.0001980741 +
                    fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32;
        mobyutil::SetCollDamIn(dVar26,auStack_b0,lVar13,1);
        local_96 = moby->oClass;
        local_98 = 0;
        local_97 = 1;
        mobyutil::MB_CollLineMulti
                  (&local_170,&local_160,uVar19 + 0x200,&local_160,lVar13,auStack_b0,5);
      }
      *(undefined4 *)((int)pvVar5 + 0x200) = local_170;
      *(undefined4 *)((int)pvVar5 + 0x204) = local_16c;
      *(undefined4 *)((int)pvVar5 + 0x208) = local_168;
      *(undefined4 *)((int)pvVar5 + 0x20c) = local_164;
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x06';
        moby->setByGroup = '\x01';
        if (moby->animationId != '\x02') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 4) {
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = mobyutil::OrganicDeltAng
                         ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      iVar15 = fastfunc::FastDecTimerS32((double)fVar32,uVar19 + 0x19c);
      if (iVar15 == 0) {
        fVar32 = (moby->pos).y - *(float *)(iVar6 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(iVar6 + 0x10);
        if (DAT_00757b6c <= SQRT(fVar2 * fVar2 + fVar32 * fVar32)) {
          if ((*(int *)((int)pvVar5 + 0x188) != 0) &&
             (moby->state = '\v', moby->animationId != '\x01')) {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        mobyupdate_helpers::M1068_001aec28(lVar13);
        moby->state = '\x03';
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar5 + 0x164) == 2) {
          moby->state = '\x01';
          if (moby->animationId != '\0') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x04') {
            local_50 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
          }
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x7b68,0x750000);
          auVar28 = vectorConvertFromSignedFixedPointWord(auVar29,0);
          auVar29 = loadVectorLeftIndexed(0x70,0x1b0714);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorAddFloatingPoint
                              (auVar28,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                              );
          auVar29 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x19c,
                              uVar19);
          *(undefined4 *)((int)pvVar5 + 0x19cU & 0xfffffffc) = uVar14;
        }
      }
    }
    else if (bVar1 == 2) {
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      fVar32 = mobyutil::OrganicDeltAng
                         ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar5 + 0x18c));
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyupdate_helpers::M1068_001aec28((double)fVar32,lVar13);
        moby->state = '\x03';
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      if ((*(int *)((int)pvVar5 + 0x1ac) != -1) && (*(int *)((int)pvVar5 + 0x1a8) != -1)) {
        iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0x1ac))
        ;
        if (iVar15 != 0) {
          moby->state = '\x0e';
          return;
        }
        fVar32 = (moby->pos).y - *(float *)(iVar6 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(iVar6 + 0x10);
        if (7.0 < SQRT(fVar2 * fVar2 + fVar32 * fVar32)) {
          return;
        }
      }
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar26,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar5 + 0x18c));
      if (*(int *)((int)pvVar5 + 0x164) == 2) {
        if ((*(int *)((int)pvVar5 + 0x188) != 0) &&
           (moby->state = '\v', moby->animationId != '\x01')) {
          local_50 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        fVar32 = (moby->pos).y;
        fVar2 = (moby->pos).x;
        fVar3 = fVar32 - *(float *)(iVar6 + 0x14);
        fVar4 = fVar2 - *(float *)(iVar6 + 0x10);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_00757b6c) {
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar27 = (double)(moby->rotation).z;
          dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - fVar2),
                                        (double)(*(float *)(iVar6 + 0x14) - fVar32));
          dVar26 = (double)fastfunc::FastSubRots((float)dVar27,(float)dVar26);
          if ((dVar26 < 0.1745329201221466) && (moby->state = '\x02', moby->animationId != '\x03'))
          {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x40000000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 2;
      *(undefined1 *)((int)pvVar5 + 0x28) = 1;
      *(undefined4 *)((int)pvVar5 + 0x30) = 0x40000000;
      *(undefined1 *)((int)pvVar5 + 0x29) = 1;
      uVar17 = fastfunc::FastDoubleToInt(0x4028000000000000);
      *(undefined1 *)((int)pvVar5 + 0x58) = uVar17;
      uVar17 = fastfunc::FastDoubleToInt(0x402b333340000000);
      *(undefined1 *)((int)pvVar5 + 0x5a) = uVar17;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar5 + 0xc0));
      *(undefined4 *)((int)pvVar5 + 200) = 0x40000000;
      *(undefined4 *)((int)pvVar5 + 0xcc) = 0x3f000000;
      uVar14 = fastfunc::FastDoubleToInt((double)(DAT_00757b50 * 307.2));
      *(undefined4 *)((int)pvVar5 + 0xc0) = uVar14;
      fVar32 = DAT_00757b50 * 0.3;
      *(uint *)((int)pvVar5 + 0xf8) = *(uint *)((int)pvVar5 + 0xf8) | 8;
      *(float *)((int)pvVar5 + 0xc4) = fVar32;
      *(float *)((int)pvVar5 + 0xe4) = DAT_00757b70 * mobyutil::g_FrameTime;
      *(f32 *)((int)pvVar5 + 0x170) = (moby->pos).x;
      *(f32 *)((int)pvVar5 + 0x174) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x178) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x17c) = (moby->pos).w;
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 0x10) {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x60));
    if ((uVar16 & 0x160) != 0) {
      local_c0 = (moby->pos).x;
      local_b8 = (float)((double)(moby->pos).z + dVar26);
      local_bc = (moby->pos).y;
      local_b4 = (moby->pos).w;
      uVar21 = 0;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,dVar26,0x4022000000000000,dVar26,0x402e000000000000,lVar13,
                 uVar19 + 0x40,&local_c0,&DAT_001b0714,1,5,2,4);
      lVar20 = lVar13 + 0x10;
      lVar18 = lVar13 + 0x40;
      mobyutil::MB_SpawnDebrisMoby(uVar21,lVar13,0x6a6,lVar20,lVar18,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar21,lVar13,0x6a7,lVar20,lVar18,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar21,lVar13,0x6a8,lVar20,lVar18,0,0);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar1 == 0xf) {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x60));
    if ((uVar16 & 0x40) == 0) {
      if ((uVar16 & 0x120) != 0) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 0xe) {
    if (moby->animationId != '\x01') {
      local_50 = (longlong)(int)(animationSpeed * 12.5);
      mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 12.5));
    }
    fVar32 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    pVVar7 = Splines[*(int *)((int)pvVar5 + 0x1a8)]->points +
             Splines[*(int *)((int)pvVar5 + 0x1a8)]->cnt + -1;
    fVar3 = pVVar7->y;
    fVar4 = pVVar7->x;
    fVar8 = fVar32 - fVar3;
    fVar9 = fVar2 - fVar4;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8);
    if (0.25 <= dVar27) {
      uVar21 = FUN_005e8338((double)(fVar4 - fVar2),(double)(fVar3 - fVar32));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3f999999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 5.5850534),lVar13,&DAT_00720000,uVar19 + 0x18c);
      fVar32 = (moby->rotation).z;
      fVar2 = fVar32 + 1.5707963;
      fVar3 = 3.1415925 - fVar32;
      if (fVar32 - (3.1415925 - fVar32) < 0.0) {
        fVar3 = fVar32;
      }
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar8 = -3.1415925 - fVar32;
      if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
        fVar8 = fVar3;
      }
      fVar32 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar32 = fVar4;
      }
      fVar2 = fVar8 * fVar8;
      fVar3 = fVar32 * fVar32;
      if (2.0 - dVar27 < 0.0) {
        dVar27 = 2.0;
      }
      fVar10 = fVar2 * fVar2 * fVar8;
      local_188 = 0;
      fVar4 = fVar3 * fVar3 * fVar32;
      fVar11 = fVar2 * fVar10;
      fVar9 = fVar3 * fVar4;
      local_18c = (float)((double)(fVar2 * fVar11 * 2.601887e-06 +
                                  fVar11 * -0.0001980741 +
                                  fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
                         dVar27);
      local_190 = (float)((double)(fVar3 * fVar9 * 2.601887e-06 +
                                  fVar9 * -0.0001980741 +
                                  fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32) *
                         dVar27);
      mobyutil::MB_UpdateNavMove
                (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_190,auStack_180);
    }
    else {
      dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - fVar2),
                                    (double)(*(float *)(iVar6 + 0x14) - fVar32));
      mobyutil::OrganicDeltAngSpeed
                (dVar26,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 5.5850534),lVar13,&DAT_00720000,uVar19 + 0x18c);
      dVar26 = (double)fastfunc::FastSubRots((float)dVar26,(moby->rotation).z);
      if (dVar26 < 0.2617993950843811) {
        *(undefined4 *)((int)pvVar5 + 0x1ac) = 0xffffffff;
        *(undefined4 *)((int)pvVar5 + 0x18c) = 0;
        if (moby->animationId != '\0') {
          local_50 = (longlong)(int)(animationSpeed * 18.5);
          mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 18.5));
        }
        moby->state = '\x01';
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x170) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar5 + 0x174) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 0x18c);
    dVar25 = (double)(moby->rotation).z;
    fVar32 = (float)(dVar25 + 1.570796251296997);
    dVar27 = (double)(float)(3.141592502593994 - dVar25);
    if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
      dVar27 = dVar25;
    }
    fVar2 = 3.1415925 - fVar32;
    if (fVar32 - (3.1415925 - fVar32) < 0.0) {
      fVar2 = fVar32;
    }
    dVar22 = (double)(float)(-3.141592502593994 - dVar25);
    if ((double)(float)(-3.141592502593994 - dVar25) - dVar27 < 0.0) {
      dVar22 = dVar27;
    }
    fVar3 = -3.1415925 - fVar32;
    if ((-3.1415925 - fVar32) - fVar2 < 0.0) {
      fVar3 = fVar2;
    }
    dVar27 = (double)(float)(dVar22 * dVar22);
    fVar4 = fVar3 * fVar3;
    dVar24 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar22));
    fVar32 = fVar4 * fVar4 * fVar3;
    dVar23 = (double)(float)(dVar27 * dVar24);
    local_d8 = 0;
    fVar2 = fVar4 * fVar32;
    local_dc = ((float)(dVar27 * dVar23) * 2.601887e-06 +
               (float)(dVar23 * -0.0001980741071747616 +
                      (double)(float)(dVar24 * 0.008333025500178337 +
                                     (double)(float)((double)(float)(dVar27 * dVar22) *
                                                     -0.16666656732559204 + dVar22)))) * 2.0;
    local_e0 = (fVar4 * fVar2 * 2.601887e-06 +
               fVar2 * -0.0001980741 + fVar32 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3)
               * 2.0;
    dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x170) - (moby->pos).x),
                                  (double)(*(float *)((int)pvVar5 + 0x174) - (moby->pos).y));
    dVar27 = (double)fastfunc::FastSubRots((float)dVar25,(float)dVar27);
    if (dVar27 < 0.7853981852531433) {
      mobyutil::MB_UpdateNavMove
                (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_e0,auStack_d0);
      mobyutil::MB_PushOutOfSplineWalls
                (0x3fe8000000000000,*(undefined4 *)((int)pvVar5 + 0x1a4),
                 *(undefined4 *)((int)pvVar5 + 0x1a4),lVar13 + 0x10,lVar13 + 0x10);
    }
    fVar32 = *(float *)((int)pvVar5 + 0x174) - (moby->pos).y;
    fVar2 = *(float *)((int)pvVar5 + 0x170) - (moby->pos).x;
    fVar3 = *(float *)((int)pvVar5 + 0x178) - (moby->pos).z;
    if (((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar32 * fVar32) < dVar26) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xc) {
    mobyfunc::GetBonePosition(lVar13,0,&local_110);
    local_100 = (moby->pos).x;
    local_fc = (moby->pos).y;
    local_f4 = (moby->pos).w;
    local_f8 = (moby->pos).z + 1.5;
    dVar27 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((9.0 <= dVar27) && (dVar27 <= 15.0)) {
      fVar32 = (moby->rotation).z;
      fVar2 = fVar32 + 1.5707963;
      fVar3 = 3.1415925 - fVar32;
      if (fVar32 - (3.1415925 - fVar32) < 0.0) {
        fVar3 = fVar32;
      }
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar8 = -3.1415925 - fVar32;
      if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
        fVar8 = fVar3;
      }
      local_e8 = 0x3f800000;
      fVar32 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar32 = fVar4;
      }
      fVar2 = fVar8 * fVar8;
      local_e4 = 0x45afdf66;
      fVar3 = fVar32 * fVar32;
      fVar10 = fVar2 * fVar2 * fVar8;
      fVar4 = fVar3 * fVar3 * fVar32;
      fVar11 = fVar2 * fVar10;
      fVar9 = fVar3 * fVar4;
      local_ec = fVar2 * fVar11 * 2.601887e-06 +
                 fVar11 * -0.0001980741 +
                 fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8;
      local_f0 = fVar3 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 +
                 fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32;
      mobyutil::SetCollDamIn(dVar26,auStack_80,lVar13,1);
      local_66 = moby->oClass;
      local_68 = 0;
      local_67 = 1;
      mobyutil::MB_CollLineMulti
                (&local_110,&local_100,uVar19 + 0x200,&local_100,lVar13,auStack_80,5);
    }
    *(undefined4 *)((int)pvVar5 + 0x200) = local_110;
    *(undefined4 *)((int)pvVar5 + 0x204) = local_10c;
    *(undefined4 *)((int)pvVar5 + 0x208) = local_108;
    *(undefined4 *)((int)pvVar5 + 0x20c) = local_104;
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\v', moby->animationId != '\x01')) {
      local_50 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
    }
  }
  else if (bVar1 == 0xb) {
    uVar21 = FUN_005e8338((double)(*(float *)(iVar6 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar6 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 0x18c);
    fVar32 = (moby->rotation).z;
    fVar2 = fVar32 + 1.5707963;
    fVar3 = 3.1415925 - fVar32;
    if (fVar32 - (3.1415925 - fVar32) < 0.0) {
      fVar3 = fVar32;
    }
    fVar4 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar4 = fVar2;
    }
    fVar8 = -3.1415925 - fVar32;
    if ((-3.1415925 - fVar32) - fVar3 < 0.0) {
      fVar8 = fVar3;
    }
    fVar32 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
      fVar32 = fVar4;
    }
    fVar2 = fVar8 * fVar8;
    fVar3 = fVar32 * fVar32;
    fVar10 = fVar2 * fVar2 * fVar8;
    local_138 = 0;
    fVar4 = fVar3 * fVar3 * fVar32;
    fVar11 = fVar2 * fVar10;
    fVar9 = fVar3 * fVar4;
    local_13c = (fVar2 * fVar11 * 2.601887e-06 +
                fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8
                ) * 2.0;
    local_140 = (fVar3 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar32 * -0.16666657 + fVar32
                ) * 2.0;
    mobyutil::MB_UpdateNavMove
              (dVar26,moby,(MobyInstance *)((int)pvVar5 + 0xc0),&local_140,auStack_130);
    mobyutil::MB_PushOutOfSplineWalls(0x3fe8000000000000,*(undefined4 *)((int)pvVar5 + 0x1a4));
    iVar15 = mobyutil::MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar5 + 0x1a4),lVar13 + 0x10,iVar6 + 0x10,&local_120);
    bVar12 = false;
    fVar32 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    if ((iVar15 != 0) &&
       (local_11c = fVar2 - local_11c, local_120 = fVar32 - local_120,
       local_118 = (moby->pos).z - local_118,
       SQRT(local_118 * local_118 + local_120 * local_120 + local_11c * local_11c) < 0.8)) {
      bVar12 = true;
    }
    if (*(int *)((int)pvVar5 + 0x188) == 0) {
      moby->state = '\r';
    }
    else if (bVar12) {
      moby->state = '\f';
      if (moby->animationId != '\x06') {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
    else {
      fVar2 = fVar2 - *(float *)(iVar6 + 0x14);
      fVar32 = fVar32 - *(float *)(iVar6 + 0x10);
      if ((SQRT(fVar32 * fVar32 + fVar2 * fVar2) < DAT_00757b6c) &&
         (moby->state = '\f', moby->animationId != '\x06')) {
        local_50 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}



//==== 001b1eb8  ns=mobyupdate_helpers  size=0x43c
// sig: undefined M1069_001b1eb8(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1069_001b1eb8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *pfVar15;
  ulonglong unaff_r20;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined4 *puVar19;
  ulonglong unaff_r26;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar10;
  puVar9[0x3a] = in_LR;
  puVar9[0x35] = in_f29;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x31] = unaff_r28;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar9[0x34] = unaff_r31;
  puVar9[0x33] = unaff_r30;
  puVar9[0x32] = unaff_r29;
  puVar9[0x30] = unaff_r27;
  puVar9[0x2f] = unaff_r26;
  puVar9[0x2e] = unaff_r25;
  puVar9[0x2d] = unaff_r24;
  puVar9[0x2c] = unaff_r23;
  puVar9[0x2b] = unaff_r22;
  puVar9[0x2a] = unaff_r21;
  puVar9[0x29] = unaff_r20;
  uVar11 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar11);
  uVar12 = draw::GetEffectTex(DAT_00757b90);
  uVar14 = DAT_00757b90;
  puVar9[0x25] = uVar12;
  draw::GetEffectTex(uVar14);
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00e62020,DAT_00757b84,DAT_00e62024,DAT_00757b88,DAT_00757b8c);
  puVar9[0x27] = uVar12;
  fastfunc::FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_00757b9c;
    DAT_00757ba8 = DAT_00757bb8;
    dVar33 = 0.0;
    dVar25 = (double)mobyutil::MB_randRangeFloat(0.0,0.2);
    DAT_00757bb8 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_00757ba0;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x230);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x23c);
      dVar29 = (double)*pfVar15;
      pfVar22 = (float *)lVar21;
      *pfVar22 = *pfVar15;
      dVar28 = (double)pfVar15[1];
      pfVar22[1] = pfVar15[1];
      dVar27 = (double)pfVar15[2];
      pfVar22[2] = pfVar15[2];
      fVar5 = pfVar15[3];
      pfVar22[3] = fVar5;
      if (uVar24 == (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,DAT_00e62028,DAT_00757b94);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 0x214));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x210));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x218));
        pfVar22[3] = fVar5;
        dVar32 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)(dVar25 / dVar32);
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar30 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        dVar26 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        pfVar22[2] = (float)(dVar27 - dVar31);
        pfVar22[1] = (float)(dVar28 - dVar30);
        *pfVar22 = (float)(dVar29 - dVar26);
        uVar6 = DAT_00e6202c;
        uVar14 = DAT_00757b98;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,uVar6,uVar14);
      }
      uVar6 = *puVar19;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      uVar24 = uVar24 + 1;
      uVar14 = *puVar20;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)((int)lVar18 + 0x100) = uVar6;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar14;
      lVar16 = lVar16 + 0x10;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      puVar20 = puVar20 + 2;
      lVar18 = lVar18 + 8;
    } while ((int)uVar24 < 4);
    draw::FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,EffectTexHeaders,9);
    uVar14 = EffectTexHeaders;
    uVar24 = 0;
    lVar16 = lVar1;
    do {
      if (uVar24 != (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) + 0.25;
      }
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar24 < 4);
    draw::FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,uVar14,9);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 0xf);
  uVar11 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar11);
  return;
}



//==== 001b22f4  ns=Global  size=0x78
// sig: undefined FUN_001b22f4(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_001b22f4(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      pMVar4 = MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      if (MobyInstance[uVar3].state < 0x7f) {
        MVar1 = MobyInstance[uVar3].modeBits;
        MobyInstance[uVar3].state = '\x11';
        pMVar4[uVar3].collision = (ushort *)0x0;
        pMVar4[uVar3].modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      }
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 001b236c  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1069_001b236c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1069_001b236c(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  ushort *puVar6;
  
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar5 = MobyInstance;
    uVar3 = *puVar6 & 0x7fff;
    if (MobyInstance[uVar3].state == '\x11') {
      pMVar4 = MobyInstance + uVar3;
      MVar1 = MobyInstance[uVar3].modeBits;
      MobyInstance[uVar3].state = '\0';
      pMVar5[uVar3].collision = pMVar4->pClass->collision;
      pMVar5[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (-1 < (short)uVar2);
  return;
}



//==== 001b23e0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1069_001b23e0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1069_001b23e0(void)

{
  DAT_00757c48 = 0x10000;
  return;
}



//==== 001b2480  ns=mobyupdate_unsorted  size=0xc2c
// sig: undefined UpdateMoby_1069(MobyInstance * moby)
// callers(0): 
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00104298 mobyutil::MB_SetGroupField; 00109ec0 mobyutil::DeltAng; 0010de78 mobyutil::MB_WrapRot; 001120d4 mobyutil::MB_TransformBetweenFrames; 00112900 mobyutil::MB_GetOrientation; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 005c8318 rand
// strings: 001b2430: '@FffAp' (raw) | 001b2440: '@&ff' (raw)

/* Moby 1069 */

void mobyupdate_unsorted::UpdateMoby_1069(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  void *pvVar4;
  f32 fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined *unused1;
  longlong lVar17;
  int iVar18;
  MobyInstance *in_r5;
  longlong lVar19;
  MobyInstance *pMVar20;
  void *pvVar21;
  ulonglong uVar22;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  Vec4 local_c0;
  float local_b0;
  f32 local_ac;
  f32 local_a8;
  f32 local_a4;
  f32 local_a0;
  f32 local_9c;
  f32 local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pMVar20 = (MobyInstance *)0x0;
  fVar37 = (moby->pos).z;
  pvVar21 = (void *)0x0;
  local_c0.x = -(moby->pos).x;
  local_c0.y = -(moby->pos).y;
  pvVar4 = moby->pVar;
  uVar22 = ZEXT48(pvVar4);
  local_b0 = (moby->rotation).x;
  local_c0.w = (moby->pos).w;
  local_c0.z = -fVar37;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  cVar1 = moby->setByGroup;
  if (*(int *)((int)pvVar4 + 0xa0) != -1) {
    pMVar20 = MobyInstance + *(int *)((int)pvVar4 + 0xa0);
    pvVar21 = pMVar20->pVar;
    in_r5 = MobyInstance;
  }
  fVar36 = local_b0;
  if (cVar1 == '\x02') {
    moby->setByGroup = '\x03';
    moby->state = '\x02';
    *(uint *)((int)pvVar4 + 0xac) = (uint)*(byte *)((int)pvVar4 + 0xbd);
    fVar36 = (moby->rotation).x;
    fVar37 = (moby->pos).z;
    cVar1 = moby->setByGroup;
  }
  bVar2 = moby->state;
  unused1 = (undefined *)(uint)bVar2;
  if (bVar2 == 5) {
    dVar23 = (double)*(float *)((int)pvVar4 + 0xb8);
    dVar25 = (double)(fVar37 + *(float *)((int)pvVar4 + 0xb0));
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      iVar15 = *(int *)((int)pvVar4 + 0xac);
      if (iVar15 == 0) {
        sound::PlayMobySound(0,0,moby);
        iVar15 = *(int *)((int)pvVar4 + 0xac);
      }
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      in_r5 = (MobyInstance *)&DAT_00720000;
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x44,0x1b23f8);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      unused1 = (undefined *)(int)(animationSpeed * 90.5);
      local_80 = (longlong)(int)unused1;
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      if (iVar15 < (int)unused1) {
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0xac,uVar22
                          );
        *(undefined4 *)((int)pvVar4 + 0xacU & 0xfffffffc) = uVar8;
      }
    }
    if (*(int *)((int)pvVar4 + 0xac) == 0) {
      if (dVar25 < dVar23) {
        fVar37 = 0.9;
        fVar36 = (float)(dVar23 - dVar25) * 0.2;
        if ((fVar36 <= 0.9) && (fVar37 = fVar36, fVar36 < -0.9)) {
          fVar37 = -0.9;
        }
        *(float *)((int)pvVar4 + 0xb0) = *(float *)((int)pvVar4 + 0xb0) + fVar37;
      }
      unused1 = &DAT_00720000;
      fVar37 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar4 + 0xb0));
      *(float *)((int)pvVar4 + 0xb0) = fVar37;
      fVar36 = mobyutil::g_FrameTime * 5.0;
      if (fVar36 < fVar37) {
        *(float *)((int)pvVar4 + 0xb0) = fVar36;
        fVar37 = fVar36;
      }
    }
    else {
      fVar37 = 0.0;
      if (*(float *)((int)pvVar4 + 0xb8) - 2.6 < (moby->pos).z) {
        unused1 = &DAT_00720000;
        fVar37 = mobyutil::g_FrameTime * -0.25;
      }
      *(float *)((int)pvVar4 + 0xb0) = fVar37;
    }
    (moby->pos).z = (moby->pos).z + fVar37;
    dVar23 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar4 + 0xc0),0.01);
    *(float *)((int)pvVar4 + 0xc0) = (float)dVar23;
    dVar23 = (double)fastfunc::FastWrapRot((float)dVar23,0.017);
    *(float *)((int)pvVar4 + 0xc4) = (float)dVar23;
    fVar37 = *(float *)((int)pvVar4 + 0xc0);
    fVar36 = 3.1415925 - fVar37;
    if (fVar37 - (3.1415925 - fVar37) < 0.0) {
      fVar36 = fVar37;
    }
    dVar25 = (double)(float)(3.141592502593994 - dVar23);
    if (dVar23 - (double)(float)(3.141592502593994 - dVar23) < 0.0) {
      dVar25 = dVar23;
    }
    fVar9 = -3.1415925 - fVar37;
    if ((-3.1415925 - fVar37) - fVar36 < 0.0) {
      fVar9 = fVar36;
    }
    dVar26 = (double)(float)(-3.141592502593994 - dVar23);
    if ((double)(float)(-3.141592502593994 - dVar23) - dVar25 < 0.0) {
      dVar26 = dVar25;
    }
    fVar10 = fVar9 * fVar9;
    dVar25 = (double)(float)(dVar26 * dVar26);
    fVar37 = fVar10 * fVar10 * fVar9;
    dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
    fVar36 = fVar10 * fVar37;
    dVar28 = (double)(float)(dVar25 * dVar27);
    dVar23 = (double)((fVar10 * fVar36 * 2.601887e-06 +
                      fVar36 * -0.0001980741 +
                      fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) * 0.02);
    dVar25 = (double)(((float)(dVar25 * dVar28) * 2.601887e-06 +
                      (float)(dVar28 * -0.0001980741071747616 +
                             (double)(float)(dVar27 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar25 * dVar26) *
                                                            -0.16666656732559204 + dVar26)))) * 0.02
                     );
    if (*(int *)((int)pvVar4 + 0xac) != 0) {
      fastfunc::FastDecTimerS32(uVar22 + 0xac);
      fVar37 = g_heroPosition.y - (moby->pos).y;
      fVar36 = g_heroPosition.x - (moby->pos).x;
      fVar9 = g_heroPosition.z - (moby->pos).z;
      dVar26 = (double)((fVar9 * (moby->transform).v0.z +
                        fVar36 * (moby->transform).v0.x + fVar37 * (moby->transform).v0.y) * 0.03);
      dVar23 = (double)fastfunc::FastWrapRot
                                 ((float)dVar23,
                                  (fVar9 * (moby->transform).v1.z +
                                  fVar36 * (moby->transform).v1.x + fVar37 * (moby->transform).v1.y)
                                  * -0.03);
      dVar23 = (double)fastfunc::FastWrapRot((float)dVar23,(float)dVar26);
      local_a0 = (moby->rotation).x;
      local_9c = (moby->rotation).y;
      lVar17 = uVar12 - 0x90;
      lVar19 = lVar13 + 0x10;
      local_98 = (moby->rotation).z;
      local_94 = (moby->rotation).w;
      dVar26 = (double)(moby->pos).z;
      mobyutil::MB_TransformBetweenFrames(&g_heroPosition,lVar17,lVar19,uVar12 - 0xa0,lVar13 + 0x40)
      ;
      in_r5 = (MobyInstance *)lVar19;
      unused1 = (undefined *)lVar17;
      DAT_00969dd0 = local_90 - g_heroPosition.x;
      DAT_00969dd4 = local_8c - g_heroPosition.y;
      DAT_00969ddc = local_84;
      DAT_00969dd8 = (local_88 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar26);
    }
    dVar26 = 0.1745329201221466;
    mobyutil::DeltAng((float)dVar23,mobyutil::g_FrameTime * 0.17453292,&(moby->rotation).x,
                      (int)unused1,(int)in_r5,0);
    mobyutil::DeltAng((float)dVar25,(float)((double)mobyutil::g_FrameTime * dVar26),
                      &(moby->rotation).y,(int)unused1,(int)in_r5,0);
    fVar3 = (moby->rotation).x;
    fVar5 = (moby->rotation).y;
    uVar14 = (int)fVar3 >> 0x1f;
    uVar6 = (int)fVar5 >> 0x1f;
    fVar37 = (moby->rotation).x;
    if (0x3f060a92 < (int)((uVar14 >> 1 ^ (uint)fVar3) - uVar14)) {
      (moby->rotation).x = 0.5235988;
      fVar37 = 0.5235988;
    }
    if (fVar37 < -0.5235988) {
      (moby->rotation).x = -0.5235988;
    }
    fVar37 = (moby->rotation).y;
    if (0x3f060a92 < (int)((uVar6 >> 1 ^ (uint)fVar5) - uVar6)) {
      (moby->rotation).y = 0.5235988;
      fVar37 = 0.5235988;
    }
    if (fVar37 < -0.5235988) {
      (moby->rotation).y = -0.5235988;
    }
  }
  else if (bVar2 == 4) {
    if ((1 < *(byte *)((int)pvVar21 + 0xef)) || (pMVar20->state < 0xc)) {
      dVar23 = (double)mobyutil::MB_randRangeFloat
                                 (mobyutil::g_FrameTime,mobyutil::g_FrameTime * 4.0);
      *(float *)((int)pvVar4 + 0xb0) = (float)dVar23;
      dVar23 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar4 + 0xc0) = (float)dVar23;
      dVar23 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar4 + 0xc4) = (float)dVar23;
      (moby->rotation).x = 0.0;
      (moby->rotation).y = 0.0;
      moby->state = '\x05';
      *(undefined4 *)((int)pvVar4 + 0xac) = 0;
    }
  }
  else if (bVar2 == 3) {
    fVar9 = (1.3962634 - fVar36) * 0.05;
    fVar10 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar10 = fVar9;
    }
    fVar11 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    (moby->rotation).x = fVar36 + fVar9;
    fVar36 = fVar11 * fVar11;
    fVar9 = fVar36 * fVar36 * fVar11;
    fVar10 = fVar36 * fVar9;
    (moby->pos).z =
         -((fVar36 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar36 * fVar11 * -0.16666657 + fVar11) *
           3.1 - fVar37);
    fVar37 = -(*(float *)((int)pvVar4 + 0xb4) * DAT_0071f418 - *(float *)((int)pvVar4 + 0xb0));
    *(float *)((int)pvVar4 + 0xb0) = fVar37;
    fVar37 = (moby->pos).z + fVar37;
    (moby->pos).z = fVar37;
    if (fVar37 < *(float *)((int)pvVar4 + 0xb8) - 15.0) {
      if (*(char *)((int)pvVar4 + 0xbc) == '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      moby->state = '\x04';
    }
  }
  else if (bVar2 == 2) {
    dVar31 = (double)*(float *)((int)pvVar4 + 0xa4);
    dVar23 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
    fVar36 = mobyutil::MB_WrapRot((float)(dVar23 * 0.75));
    dVar30 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar28 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar26 = -0.0001980741071747616;
    dVar25 = 2.601886990305502e-06;
    dVar23 = 0.01745329238474369;
    fVar37 = 3.1415925 - fVar36;
    if (fVar36 - (3.1415925 - fVar36) < 0.0) {
      fVar37 = fVar36;
    }
    fVar9 = -3.1415925 - fVar36;
    if ((-3.1415925 - fVar36) - fVar37 < 0.0) {
      fVar9 = fVar37;
    }
    fVar10 = fVar9 * fVar9;
    fVar37 = fVar10 * fVar10 * fVar9;
    fVar36 = fVar10 * fVar37;
    dVar31 = (double)fastfunc::FastWrapRot
                               ((float)dVar31,
                                (fVar10 * fVar36 * 2.601887e-06 +
                                fVar36 * -0.0001980741 +
                                fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) *
                                0.017453292);
    (moby->rotation).x = (float)dVar31;
    dVar32 = (double)*(float *)((int)pvVar4 + 0xa8);
    dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
    fVar37 = mobyutil::MB_WrapRot((float)(dVar31 * 0.8899999856948853));
    dVar24 = (double)(fVar37 + 1.5707963);
    dVar31 = (double)(float)(dVar30 - dVar24);
    if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
      dVar31 = dVar24;
    }
    dVar30 = (double)(float)(dVar29 - dVar24);
    if ((double)(float)(dVar29 - dVar24) - dVar31 < 0.0) {
      dVar30 = dVar31;
    }
    dVar29 = (double)(float)(dVar30 * dVar30);
    dVar24 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
    dVar31 = (double)(float)(dVar29 * dVar24);
    dVar23 = (double)fastfunc::FastWrapRot
                               ((float)dVar32,
                                (float)((double)(float)((double)(float)(dVar29 * dVar31) * dVar25 +
                                                       (double)(float)(dVar31 * dVar26 +
                                                                      (double)(float)(dVar24 * 
                                                  dVar27 + (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30)))) * dVar23));
    (moby->rotation).y = (float)dVar23;
    iVar15 = fastfunc::FastDecTimerS32(uVar22 + 0xac);
    if (iVar15 != 0) {
      if (*(char *)((int)pvVar4 + 0xbe) != '\0') {
        *(undefined1 *)((int)pvVar21 + 0x19d) = *(undefined1 *)((int)pvVar4 + 0xbf);
        pMVar20->state = '\f';
      }
      moby->state = '\x03';
    }
  }
  else if (bVar2 == 1) {
    if (cVar1 == '\x01') {
      iVar15 = *(int *)((int)pvVar4 + 0xac);
      if (iVar15 == 0) {
        iVar15 = rand();
        iVar15 = iVar15 % 10;
        *(int *)((int)pvVar4 + 0xac) = iVar15;
      }
      if (*(char *)((int)pvVar4 + 0xbe) != '\0') {
        mobyutil::MB_SetGroupField(moby->group,2);
        iVar15 = *(int *)((int)pvVar4 + 0xac);
      }
      dVar31 = (double)*(float *)((int)pvVar4 + 0xa4);
      dVar23 = (double)fastfunc::FastIntToDouble(iVar15);
      fVar36 = mobyutil::MB_WrapRot((float)(dVar23 * 0.75));
      dVar30 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar25 = 2.601886990305502e-06;
      dVar23 = 0.01745329238474369;
      fVar37 = 3.1415925 - fVar36;
      if (fVar36 - (3.1415925 - fVar36) < 0.0) {
        fVar37 = fVar36;
      }
      fVar9 = -3.1415925 - fVar36;
      if ((-3.1415925 - fVar36) - fVar37 < 0.0) {
        fVar9 = fVar37;
      }
      fVar10 = fVar9 * fVar9;
      fVar37 = fVar10 * fVar10 * fVar9;
      fVar36 = fVar10 * fVar37;
      dVar31 = (double)fastfunc::FastWrapRot
                                 ((float)dVar31,
                                  (fVar10 * fVar36 * 2.601887e-06 +
                                  fVar36 * -0.0001980741 +
                                  fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) *
                                  0.017453292);
      (moby->rotation).x = (float)dVar31;
      dVar32 = (double)*(float *)((int)pvVar4 + 0xa8);
      dVar31 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
      fVar37 = mobyutil::MB_WrapRot((float)(dVar31 * 0.8899999856948853));
      dVar24 = (double)(fVar37 + 1.5707963);
      dVar31 = (double)(float)(dVar30 - dVar24);
      if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
        dVar31 = dVar24;
      }
      dVar30 = (double)(float)(dVar29 - dVar24);
      if ((double)(float)(dVar29 - dVar24) - dVar31 < 0.0) {
        dVar30 = dVar31;
      }
      dVar29 = (double)(float)(dVar30 * dVar30);
      dVar24 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
      dVar31 = (double)(float)(dVar29 * dVar24);
      dVar23 = (double)fastfunc::FastWrapRot
                                 ((float)dVar32,
                                  (float)((double)(float)((double)(float)(dVar29 * dVar31) * dVar25
                                                         + (double)(float)(dVar31 * dVar26 +
                                                                          (double)(float)(dVar24 * 
                                                  dVar27 + (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30)))) * dVar23));
      (moby->rotation).y = (float)dVar23;
    }
  }
  else if (bVar2 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x20) = 0;
    *(undefined2 *)((int)pvVar4 + 0x24) = 0;
    *(undefined1 *)((int)pvVar4 + 0x28) = 4;
    *(undefined2 *)((int)pvVar4 + 0x3e) = 0xd;
    uVar14 = rand();
    if ((uVar14 & 1) != 0) {
      dVar23 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar23;
    }
    *(f32 *)((int)pvVar4 + 0xa4) = (moby->rotation).x;
    fVar3 = (moby->rotation).y;
    *(undefined4 *)((int)pvVar4 + 200) = 0xffffffff;
    *(f32 *)((int)pvVar4 + 0xa8) = fVar3;
    moby->setByGroup = '\0';
    moby->state = '\x01';
    if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      (moby->pos).z = (moby->pos).z - 5.0;
      if (*(char *)((int)pvVar4 + 0xbc) == '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->state = '\x05';
    }
  }
  if ((moby->state == '\x05') && (iVar15 = fastfunc::FastDecTimerS32(uVar22 + 200), iVar15 != 0)) {
    uVar14 = (int)*(uint *)((int)pvVar4 + 0xcc) >> 0x1f;
    uVar6 = (int)*(uint *)((int)pvVar4 + 0xb8) >> 0x1f;
    fVar3 = (moby->pos).z;
    uVar7 = (int)fVar3 >> 0x1f;
    iVar15 = (uVar14 >> 1 ^ *(uint *)((int)pvVar4 + 0xcc)) - uVar14;
    iVar18 = (uVar6 >> 1 ^ *(uint *)((int)pvVar4 + 0xb8)) - uVar6;
    iVar16 = (uVar7 >> 1 ^ (uint)fVar3) - uVar7;
    if (((iVar18 <= iVar15) && (iVar16 < iVar18)) || ((iVar15 <= iVar18 && (iVar18 < iVar16)))) {
      sound::PlayMobySound(0,0,moby);
      iVar16 = rand();
      iVar15 = (int)(animationSpeed * 20.5);
      local_80 = (longlong)iVar15;
      *(int *)((int)pvVar4 + 200) = (iVar16 - (iVar16 / iVar15) * iVar15) + iVar15;
    }
  }
  *(f32 *)((int)pvVar4 + 0xcc) = (moby->pos).z;
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  local_c0.z = local_c0.z + (moby->pos).z;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x60),&local_c0,uVar12 - 0xb0,lVar13 + 0x40);
  return;
}



//==== 001b30ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1069_001b30ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1069_001b30ac(void)

{
  DAT_00757cb8 = 0x10000;
  return;
}



//==== 001b30e8  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M107_001b30e8(void)
// callers(1): 001b33e0 mobyupdate_unsorted::UpdateMoby_107
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M107_001b30e8
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
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
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)fastfunc::FastDiffRots(param_2,param_1);
  fastfunc::FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}



//==== 001b31d8  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M107_001b31d8(void)
// callers(1): 001b33e0 mobyupdate_unsorted::UpdateMoby_107
// callees(0): 

void mobyupdate_helpers::M107_001b31d8
               (double param_1,double param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_5[1];
  fVar2 = param_4[1];
  fVar3 = param_5[2];
  fVar4 = param_4[2];
  fVar5 = (float)(param_1 / param_2) * 3.1415925 + 1.5707963;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  fVar5 = (fVar5 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7 + 1.0)
          * 0.5;
  *(float *)(param_3 + 0x10) = (*param_5 - *param_4) * fVar5 + *param_4;
  *(float *)(param_3 + 0x14) = (fVar1 - fVar2) * fVar5 + param_4[1];
  *(float *)(param_3 + 0x18) = (fVar3 - fVar4) * fVar5 + param_4[2];
  *(float *)(param_3 + 0x1c) = param_4[3];
  return;
}



//==== 001b32c0  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1069_001b32c0(void)
// callers(0): 
// callees(2): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage

void mobyupdate_helpers::M1069_001b32c0(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\t' && param_1->state != '\b')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\b';
  }
  param_1->damage = -1;
  return;
}



//==== 001b33e0  ns=mobyupdate_unsorted  size=0xa14
// sig: undefined UpdateMoby_107(MobyInstance * moby)
// callers(0): 
// callees(10): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001b30e8 mobyupdate_helpers::M107_001b30e8; 001b31d8 mobyupdate_helpers::M107_001b31d8; 0032ca80 FUN_0032ca80; 004fff60 fastfunc::FastDecTimerS32

/* Moby 107 */

void mobyupdate_unsorted::UpdateMoby_107(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  void *pvVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  ulonglong *puVar11;
  int iVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  ulonglong uVar15;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
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
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar19 = uVar14 - 0x170;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar14;
  puVar11[0x30] = in_LR;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x2b] = unaff_r31;
  puVar11[0x2a] = unaff_r30;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  dVar30 = 0.0;
  puVar11[0x29] = unaff_r29;
  puVar11[0x28] = unaff_r28;
  puVar11[0x27] = unaff_r27;
  *(undefined4 *)(puVar11 + 0x20) = 0;
  uVar16 = mobyutil::MB_damage(moby,0x330000,0);
  mobyutil::MB_HandleDamage(moby,uVar16,uVar24 + 0x20,0,(int)puVar11 + 0xfc,puVar11 + 0x20,0,4);
  if (((*(int *)((int)puVar11 + 0xfc) != 1) && (moby->state != '\t' && moby->state != '\b')) &&
     (fVar36 = *(float *)((int)pvVar8 + 0x20) - *(float *)(puVar11 + 0x20),
     *(float *)((int)pvVar8 + 0x20) = fVar36, (double)fVar36 <= dVar30)) {
    moby->state = '\b';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  uVar15 = ZEXT48(Splines[*(int *)((int)pvVar8 + 0x70)]);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar8 + 0x90) = fVar2;
        *(f32 *)((int)pvVar8 + 0x94) = (moby->pos).y;
        *(f32 *)((int)pvVar8 + 0x98) = (moby->pos).z;
        *(f32 *)((int)pvVar8 + 0x9c) = (moby->pos).w;
        *(f32 *)((int)pvVar8 + 0x9c) = (moby->rotation).z;
      }
      else {
        iVar17 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar8 + 0x88));
        if (iVar17 != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          moby->state = '\x02';
          auVar32 = loadVectorLeftIndexed(0x78,uVar24);
          auVar33 = loadVectorRightIndexed(0x88,uVar24);
          auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar33 = vectorConvertFromSignedFixedPointWord(auVar32 | auVar33,0);
          auVar32 = loadVectorLeftIndexed(4,0x1b3390);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorAddFloatingPoint
                              (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                              );
          auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                              uVar24);
          *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar17 = fastfunc::FastDecTimerS32(uVar24 + 0xa4);
      if (iVar17 != 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        moby->state = '\x03';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
      }
    }
    else if (bVar1 < 4) {
      iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
      *(int *)((int)pvVar8 + 0xa4) = iVar17;
      puVar11[0x25] = (longlong)iVar17;
      mobyupdate_helpers::M107_001b31d8
                ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 30.5),moby,
                 uVar24 + 0x90,uVar15 + 0x10);
      if (*(int *)((int)pvVar8 + 0xa4) == 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(f32 *)((int)pvVar8 + 0xa8) = (moby->rotation).z;
        moby->state = '\x06';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
      }
    }
    else {
      iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
      puVar11[0x25] = (longlong)iVar17;
      *(int *)((int)pvVar8 + 0xa4) = iVar17;
      if (*(int *)((int)pvVar8 + 0xa0) == 0) {
        mobyupdate_helpers::M107_001b31d8
                  ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 120.5),moby,
                   uVar15 + 0x10,uVar15 + 0x20);
      }
      else {
        mobyupdate_helpers::M107_001b31d8
                  ((double)(longlong)puVar11[0x25],(double)(longlong)(animationSpeed * 120.5),moby,
                   uVar15 + 0x20,uVar15 + 0x10);
      }
      if (*(int *)((int)pvVar8 + 0xa4) == 0) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(uint *)((int)pvVar8 + 0xa0) = *(int *)((int)pvVar8 + 0xa0) + 1U & 1;
        moby->state = '\x06';
        auVar32 = loadVectorLeftIndexed(8,0x1b3390);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,
                            uVar24);
        *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
        *(f32 *)((int)pvVar8 + 0xa8) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 == 10) {
    fVar36 = mobyutil::Delt(*(float *)((int)pvVar8 + 0x98),mobyutil::g_FrameTime * 2.0,
                            &(moby->pos).z);
    if ((double)fVar36 == dVar30) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 9) {
    if (*(int *)((int)pvVar8 + 0x74) != 0) {
      *(int *)((int)pvVar8 + 0x74) = *(int *)((int)pvVar8 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar8 + 0x90);
      (moby->pos).y = *(f32 *)((int)pvVar8 + 0x94);
      fVar36 = *(float *)((int)pvVar8 + 0x98);
      (moby->pos).z = fVar36;
      (moby->pos).w = *(f32 *)((int)pvVar8 + 0x9c);
      (moby->rotation).z = *(f32 *)((int)pvVar8 + 0x9c);
      pMVar9 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar36 - 3.0;
      *(undefined4 *)((int)pvVar8 + 0xa0) = 0;
      moby->enabled = '\x01';
      puVar10 = pMVar9->collision;
      moby->state = '\n';
      moby->collision = puVar10;
    }
  }
  else if (bVar1 == 8) {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar11 + 0x1c) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar11 + 0xe4) = fVar2;
    *(f32 *)((int)puVar11 + 0xec) = fVar6;
    fVar36 = (moby->pos).z;
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 0;
    puVar11[0x15] = 7;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    *(float *)(puVar11 + 0x1d) = fVar36 + 0.75;
    mobyutil::MB_genericExplosion
              (dVar30,dVar30,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
               0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,uVar14 - 0x90,&DAT_001b3390,
               7,7,10,0x14);
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->state = '\t';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else if (bVar1 == 7) {
    iVar17 = *(int *)((int)pvVar8 + 0xa4) + -1;
    *(int *)((int)pvVar8 + 0xa4) = iVar17;
    if (iVar17 == 0) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      moby->state = '\x04';
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0xc,0x1b3390);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
    }
  }
  else if (bVar1 == 6) {
    iVar18 = *(int *)((int)pvVar8 + 0xa4) + -1;
    *(int *)((int)pvVar8 + 0xa4) = iVar18;
    iVar17 = *(int *)((int)pvVar8 + *(int *)((int)pvVar8 + 0xa0) * 4 + 0x80);
    fVar36 = Cuboids[iVar17].pos.x - (moby->pos).x;
    fVar3 = Cuboids[iVar17].pos.y - (moby->pos).y;
    dVar28 = ABS((double)fVar36);
    dVar27 = ABS((double)fVar3);
    *(float *)(puVar11 + 0x1e) = fVar36;
    *(float *)((int)puVar11 + 0xf4) = fVar3;
    *(float *)(puVar11 + 0x1f) = (float)(dVar28 - dVar27);
    uVar15 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar11 + 0x1e));
    if ((double)*(float *)(puVar11 + 0x1f) - dVar30 < 0.0) {
      dVar26 = dVar27;
    }
    fVar36 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar11 + 0xf4));
    if ((double)*(float *)(puVar11 + 0x1f) - dVar30 < 0.0) {
      dVar27 = dVar28;
    }
    fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (dVar30 < dVar26) {
      lVar22 = uVar14 - 0x160;
      lVar20 = uVar14 - 0x5c;
      lVar21 = uVar14 - 0x6c;
      lVar25 = 2;
      fVar4 = (float)(dVar27 - dVar26) / (float)(dVar27 + dVar26);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar11 + 0x22) = fVar4;
      *(float *)(puVar11 + 0x21) = fVar4;
      *(float *)((int)puVar11 + 0x10c) = fVar4;
      *(float *)((int)puVar11 + 0x104) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x21) = *(float *)(puVar11 + 0x21) * fVar5;
      *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar4;
      *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar4 * fVar4;
        iVar17 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar22 = uVar14 - 0x6c;
      lVar25 = 4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar22;
      lVar21 = lVar19;
      do {
        fVar4 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar21 + 0x104) = *(float *)((int)lVar21 + 0x104) * fVar4;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar20 = 2;
      do {
        iVar17 = (int)lVar19;
        iVar12 = (int)lVar22;
        lVar19 = lVar19 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar17 + 0x104)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar36 + fVar3);
    }
    puVar11[0x25] = (longlong)iVar18;
    dVar26 = (double)mobyupdate_helpers::M107_001b30e8
                               ((double)*(float *)((int)pvVar8 + 0xa8),dVar30,
                                (double)(longlong)puVar11[0x25],
                                (double)(longlong)(animationSpeed * 30.5),moby);
    (moby->rotation).z = (float)dVar26;
    pCVar13 = Cuboids;
    if (*(int *)((int)pvVar8 + 0xa4) == 0) {
      fVar36 = (float)(dVar30 + 1.570796251296997);
      dVar26 = (double)(float)(3.141592502593994 - dVar30);
      if (dVar30 - (double)(float)(3.141592502593994 - dVar30) < 0.0) {
        dVar26 = dVar30;
      }
      fVar3 = 3.1415925 - fVar36;
      if (fVar36 - (3.1415925 - fVar36) < 0.0) {
        fVar3 = fVar36;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar30);
      if ((double)(float)(-3.141592502593994 - dVar30) - dVar26 < 0.0) {
        dVar27 = dVar26;
      }
      fVar4 = -3.1415925 - fVar36;
      if ((-3.1415925 - fVar36) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar30 = (double)(mobyutil::g_FrameTime * 6.0);
      fVar36 = (moby->pos).z;
      dVar29 = (double)(DAT_0071f418 * 10.0);
      fVar5 = fVar4 * fVar4;
      dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      fVar2 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      fVar3 = fVar5 * fVar5 * fVar4;
      dVar26 = (double)(float)(dVar28 * dVar31);
      fVar7 = (moby->pos).w;
      iVar17 = *(int *)((int)pvVar8 + 0xa0);
      *(undefined4 *)(puVar11 + 0x1b) = 0;
      *(float *)(puVar11 + 0x19) = fVar36 + 1.0;
      fVar36 = fVar5 * fVar3;
      *(f32 *)((int)puVar11 + 0xcc) = fVar7;
      iVar17 = *(int *)((int)pvVar8 + iVar17 * 4 + 0x80);
      *(f32 *)((int)puVar11 + 0xc4) = fVar6;
      *(f32 *)(puVar11 + 0x18) = fVar2;
      *(float *)((int)puVar11 + 0xd4) =
           (float)((double)((float)(dVar28 * dVar26) * 2.601887e-06 +
                           (float)(dVar26 * -0.0001980741071747616 +
                                  (double)(float)(dVar31 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar28 * dVar27) *
                                                                 -0.16666656732559204 + dVar27)))) *
                  dVar30);
      *(float *)(puVar11 + 0x1a) =
           (float)((double)(fVar5 * fVar36 * 2.601887e-06 +
                           fVar36 * -0.0001980741 +
                           fVar3 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * dVar30);
      dVar30 = (double)mobyutil::MB_computeLobVelocity
                                 (dVar30,-dVar29,uVar14 - 0xb0,&pCVar13[iVar17].pos);
      *(float *)(puVar11 + 0x1b) = (float)dVar30;
      puVar11[0x25] = (longlong)(int)(animationSpeed * 300.5);
      FUN_0032ca80(dVar29,moby,uVar14 - 0xb0,uVar14 - 0xa0);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      moby->state = '\a';
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0xc,0x1b3390);
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xa4,uVar24)
      ;
      *(undefined4 *)((int)pvVar8 + 0xa4U & 0xfffffffc) = uVar16;
    }
  }
  return;
}



//==== 001b3df4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1070_001b3df4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1070_001b3df4(void)

{
  DAT_00757d28 = 0x10000;
  return;
}



//==== 001b3e18  ns=mobyupdate_unsorted  size=0x2e8
// sig: undefined UpdateMoby_1070(MobyInstance * moby)
// callers(0): 
// callees(4): 000b72b0 hero::TransitionMovement; 00112900 mobyutil::MB_GetOrientation; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot

/* Moby 1070 */

void mobyupdate_unsorted::UpdateMoby_1070(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_c0;
  f32 local_b0;
  float local_ac;
  f32 local_a8;
  f32 local_a4;
  float local_a0;
  float local_90;
  float local_80;
  float local_70;
  
  local_c0.x = -(moby->pos).x;
  local_c0.y = -(moby->pos).y;
  local_c0.z = -(moby->pos).z;
  pvVar3 = moby->pVar;
  local_c0.w = (moby->pos).w;
  local_b0 = (moby->rotation).x;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  *(undefined4 *)((int)pvVar3 + 0x5c) = 1;
  dVar11 = 0.01745329238474369;
  bVar1 = g_standingOnMoby == moby;
  fVar2 = DAT_00757d64 * 0.017453292 * DAT_0071f418 * DAT_00757d54 * *(float *)((int)pvVar3 + 0x60)
          + DAT_00757d60 * 0.017453292 * DAT_0071f418 * DAT_00757d50 * local_ac +
            *(float *)((int)pvVar3 + 0x60);
  *(float *)((int)pvVar3 + 0x60) = fVar2;
  if ((bVar1) && (g_framesNotGrounded == 0)) {
    dVar10 = (double)g_heroPosition.y;
    dVar9 = (double)g_heroPosition.x;
    dVar8 = (double)(moby->pos).y;
    dVar7 = (double)(moby->pos).x;
    dVar6 = (double)g_heroPosition.z;
    dVar5 = (double)(moby->pos).z;
    dVar4 = (double)g_heroPosition.w;
    fastfunc::FastNormalizeRMtx4(ZEXT48(&stack0x00000000) - 0xa0,(longlong)(int)moby + 0xc0);
    fVar2 = (float)((double)DAT_00757d5c * dVar11) * DAT_0071f418 *
            DAT_00757d4c *
            (float)((double)local_70 * dVar4 +
                   (double)(local_80 * (float)(dVar6 - dVar5) +
                           local_a0 * (float)(dVar9 - dVar7) + local_90 * (float)(dVar10 - dVar8)));
    if ((*(float *)((int)pvVar3 + 0x60) * fVar2 < 0.0) && ((moby->rotation).y * fVar2 < 0.0)) {
      fVar2 = fVar2 * 2.0;
    }
    if (0.0 <= fVar2) {
      fVar2 = (float)((double)DAT_00757d58 * dVar11) * DAT_0071f418 + fVar2;
    }
    else {
      fVar2 = -((float)((double)DAT_00757d58 * dVar11) * DAT_0071f418 - fVar2);
    }
    fVar2 = *(float *)((int)pvVar3 + 0x60) + fVar2;
    *(float *)((int)pvVar3 + 0x60) = fVar2;
    if (((float)((double)DAT_00757d68 * dVar11) < ABS((moby->rotation).y)) &&
       ((hero::g_heroStateType == 0 || (hero::g_heroStateType == 1)))) {
      hero::TransitionMovement(6,1);
      fVar2 = *(float *)((int)pvVar3 + 0x60);
    }
  }
  dVar11 = (double)fastfunc::FastWrapRot((moby->rotation).y,fVar2);
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  (moby->rotation).y = (float)dVar11;
  local_c0.z = local_c0.z + fVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x20),&local_c0,ZEXT48(&stack0x00000000) - 0xb0,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 001b4100  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1072_001b4100(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1072_001b4100(void)

{
  DAT_00757db8 = 0x10000;
  return;
}



//==== 001b4118  ns=mobyupdate_helpers  size=0x78
// sig: undefined M1072_001b4118(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1072_001b4118(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = MobyInstance;
    *(undefined4 *)
     (&DAT_00e62848 + *(int *)(*(int *)((int)&MobyInstance->pVar + iVar3) + 0x18) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}



//==== 001b4198  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M1072_001b4198(void)
// callers(1): 001b4378 mobyupdate_unsorted::UpdateMoby_1072
// callees(0): 

void mobyupdate_helpers::M1072_001b4198(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00e62840;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00e62844;
  (&DAT_00e6284c)[iVar5] = 0xff;
  (&DAT_00e6284e)[iVar5] = 0xff;
  (&DAT_00e6284d)[iVar5] = 0xff;
  (&DAT_00e6284f)[iVar5] = 0xff;
  (&DAT_00e62850)[iVar5] = 0xff;
  (&DAT_00e62851)[iVar5] = 0xff;
  (&DAT_00e62852)[iVar5] = 0xff;
  (&DAT_00e62853)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00e62840)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00e62844)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00e62850)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00e62852)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00e62851)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00e62853)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00e6284d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00e6284f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00e6284c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00e6284e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x80);
  return;
}



//==== 001b4378  ns=mobyupdate_unsorted  size=0x964
// sig: undefined UpdateMoby_1072(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 001042ec mobyutil::MB_SetStateByGroup; 00109c30 mobyutil::OrganicDelt; 001129d0 mobyutil::MB_ScaledVecWrapper; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 001b4198 mobyupdate_helpers::M1072_001b4198; 005cd098 libc::printf
// strings: 006545ac: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1072 */

void mobyupdate_unsorted::UpdateMoby_1072(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  ushort uVar7;
  float *pfVar8;
  MobyInstance *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 *puVar19;
  ulonglong uVar17;
  longlong lVar18;
  float fVar20;
  ushort *puVar21;
  int iVar22;
  undefined2 uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double in_f5;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xe0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x1e] = in_LR;
  puVar10[0x1a] = in_f30;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r31;
  puVar10[0x18] = unaff_r30;
  bVar1 = moby->state;
  pfVar8 = (float *)moby->pVar;
  puVar10[0x17] = unaff_r29;
  puVar10[0x16] = unaff_r28;
  puVar10[0x15] = unaff_r27;
  puVar10[0x14] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      pfVar8[6] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        libc::printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      fVar20 = pfVar8[6];
      moby->drawDistance = 0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (fVar20 == 0.0) {
        lVar27 = 0x10;
        puVar19 = &DAT_00e6285e;
        do {
          *puVar19 = 0;
          puVar19[0x8d0] = 0;
          puVar19[0x11a0] = 0;
          puVar19[0x1a70] = 0;
          puVar19[0x2340] = 0;
          puVar19[0x2c10] = 0;
          puVar19[0x34e0] = 0;
          puVar19[0x3db0] = 0;
          puVar19 = puVar19 + 0x4680;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        water::WaterTile_InitAll((WaterTile *)&DAT_00e62840,0x80);
        water::WaterWave_ScaleTable(1.0);
        fVar6 = DirectionalLights[0].direction1.x;
        fVar3 = ABS(DirectionalLights[0].direction1.x);
        fVar4 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        uVar15 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar20 = 0.0;
        uVar17 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar11 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar11) {
          lVar27 = uVar16 - 0xd0;
          lVar24 = uVar16 - 0x6c;
          lVar26 = uVar16 - 0x5c;
          lVar28 = 2;
          fVar3 = (fVar4 - fVar11) / (fVar4 + fVar11);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x10) = fVar3;
          *(float *)(puVar10 + 0xf) = fVar3;
          *(float *)((int)puVar10 + 0x7c) = fVar3;
          *(float *)((int)puVar10 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar10 + 0xf) = *(float *)(puVar10 + 0xf) * fVar4;
          *(float *)((int)puVar10 + 0x7c) = *(float *)((int)puVar10 + 0x7c) * fVar3;
          *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar3 * fVar3;
            iVar22 = (int)lVar24;
            lVar27 = lVar27 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x6c;
          pfVar25 = (float *)&DAT_007358e0;
          lVar27 = lVar18;
          lVar24 = lVar26;
          do {
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar3;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar27 = 2;
          do {
            iVar22 = (int)lVar18;
            iVar14 = (int)lVar26;
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
            fVar20 = fVar20 + *(float *)(iVar22 + 0x74) + *(float *)(iVar14 + 4) +
                     *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar20 = (fVar20 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar20 + 1.5707963;
        fVar3 = 3.1415925 - fVar20;
        if (fVar20 - (3.1415925 - fVar20) < 0.0) {
          fVar3 = fVar20;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar11 = -3.1415925 - fVar20;
        if ((-3.1415925 - fVar20) - fVar3 < 0.0) {
          fVar11 = fVar3;
        }
        fVar20 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar20 = fVar4;
        }
        fVar6 = fVar11 * fVar11;
        fVar3 = fVar20 * fVar20;
        fVar12 = fVar6 * fVar6 * fVar11;
        WaterTileConsts.tex0 = (int)pfVar8[3] + 0x28;
        fVar4 = fVar3 * fVar3 * fVar20;
        fVar13 = fVar6 * fVar12;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex1 = (int)pfVar8[4] + 0x28;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar6 * fVar11 * -0.16666657 + fVar11)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar20 * -0.16666657 + fVar20) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00e62840;
        WaterTileBoxes = (WaterTileBox *)&DAT_00e62040;
        WaterTileCnt = 0x80;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        fVar20 = pfVar8[6];
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = pfVar8[6];
      (&DAT_00e62840)[(int)fVar20 * 0x468] = (moby->pos).x;
      fVar20 = pfVar8[3];
      (&DAT_00e62844)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(int *)(&DAT_00e62854 + (int)fVar6 * 0x11a0) = (int)fVar20 + 0x28;
      *(int *)(&DAT_00e62858 + (int)pfVar8[6] * 0x11a0) = (int)pfVar8[4] + 0x28;
      (&DAT_00e6285c)[(int)pfVar8[6] * 0x11a0] = 0x1c;
      (&DAT_00e6285d)[(int)pfVar8[6] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00e62848 + (int)fVar6 * 0x11a0) = fVar5;
      fVar20 = pfVar8[6];
      (&DAT_00e6285e)[(int)fVar20 * 0x8d0] = 0xffff;
      water::WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00e62840 + (int)fVar20 * 0x468),
                 (BSphere *)(&DAT_00e62040 + (int)fVar20 * 0x10));
      moby->state = '\x01';
    }
    else {
      mobyupdate_helpers::M1072_001b4198(pfVar8[6]);
      moby->state = ((byte)((LZCOUNT(-(int)pfVar8[2]) << 0x3a) >> 0x3f) & 1) + 2;
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      pfVar8[7] = 1.4013e-45;
      mobyutil::MB_SetStateByGroup(moby->group,3);
    }
    moby->setByGroup = '\x02';
    if (pfVar8[7] != 0.0) {
      mobyutil::OrganicDelt
                (*pfVar8,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,pfVar8 + 5);
      puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      pMVar9 = MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar9->pos).z + iVar22) = (moby->pos).z;
        pMVar9 = MobyInstance;
        *(f32 *)(&DAT_00e62848 +
                *(int *)(*(int *)((int)&MobyInstance->pVar + iVar22) + 0x18) * 0x11a0) =
             (moby->pos).z;
        uVar7 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar22 = mobyutil::MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00e62840)[(int)pfVar8[6] * 0x468] + dVar32);
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
      water::WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00e62844)[(int)pfVar8[6] * 0x468] + dVar32),1.0,-0.05,
                 (WaterTile *)(&DAT_00e62840 + (int)pfVar8[6] * 0x468),1,(float)in_f5);
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      pfVar8[7] = 1.4013e-45;
      mobyutil::MB_SetStateByGroup(moby->group,2);
    }
    moby->setByGroup = '\x01';
    if (pfVar8[7] != 0.0) {
      mobyutil::OrganicDelt
                (pfVar8[1],DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,mobyutil::g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,pfVar8 + 5);
      puVar21 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)moby->group];
      pMVar9 = MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar9->pos).z + iVar22) = (moby->pos).z;
        pMVar9 = MobyInstance;
        *(f32 *)(&DAT_00e62848 +
                *(int *)(*(int *)((int)&MobyInstance->pVar + iVar22) + 0x18) * 0x11a0) =
             (moby->pos).z;
        uVar7 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar22 = mobyutil::MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)mobyutil::MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00e62840)[(int)pfVar8[6] * 0x468] + dVar32);
      dVar32 = (double)mobyutil::MB_randRangeFloat((float)dVar30,(float)dVar31);
      water::WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00e62844)[(int)pfVar8[6] * 0x468] + dVar32),1.0,-0.05,
                 (WaterTile *)(&DAT_00e62840 + (int)pfVar8[6] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < (int)pfVar8[6]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar22 = mobyutil::MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar22 != -1) {
      dVar32 = 1.0;
    }
    uVar23 = 0xffff;
    if (dVar32 == dVar31) {
      uVar23 = 0;
    }
    fVar20 = pfVar8[6];
    (&DAT_00e6285e)[(int)pfVar8[6] * 0x8d0] = uVar23;
    if (fVar20 == 0.0) {
      water::WaterTile_UpdateWaves((WaterTile *)&DAT_00e62840,0x80);
      RegisterFuncForMoby(&PTR_M1073_001b4cdc_007089b8,moby);
    }
  }
  return;
}



//==== 001b4cdc  ns=mobyupdate_helpers  size=0x30
// sig: undefined M1073_001b4cdc(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M1073_001b4cdc(void)

{
  water::WaterTile_DrawAll(&DAT_00e62840,0x80);
  return;
}



//==== 001b4d0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1073_001b4d0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1073_001b4d0c(void)

{
  DAT_00757e28 = 0x10000;
  return;
}



//==== 001b4d38  ns=mobyupdate_unsorted  size=0x520
// sig: undefined UpdateMoby_1073(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 000fea60 mobyutil::MB_randSphere; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1073 */

void mobyupdate_unsorted::UpdateMoby_1073(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  ulonglong unaff_r16;
  longlong lVar18;
  ulonglong unaff_r17;
  longlong lVar19;
  ulonglong unaff_r18;
  longlong lVar20;
  ulonglong unaff_r19;
  longlong lVar21;
  ulonglong unaff_r20;
  ulonglong uVar22;
  ulonglong unaff_r21;
  ulonglong uVar23;
  ulonglong unaff_r22;
  longlong lVar24;
  ulonglong unaff_r23;
  ulonglong uVar25;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar26;
  ulonglong unaff_r26;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar28;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong in_f31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar9 - 0xdc0);
  *puVar4 = uVar9;
  puVar4[0x1ba] = in_LR;
  puVar4[0x1b7] = in_f31;
  puVar4[0x1b2] = unaff_r27;
  bVar1 = moby->state;
  puVar4[0x1b6] = unaff_r31;
  pvVar2 = moby->pVar;
  uVar28 = ZEXT48(pvVar2);
  puVar4[0x1b5] = unaff_r30;
  puVar4[0x1b4] = unaff_r29;
  puVar4[0x1b3] = unaff_r28;
  puVar4[0x1b1] = unaff_r26;
  puVar4[0x1b0] = unaff_r25;
  puVar4[0x1af] = unaff_r24;
  puVar4[0x1ae] = unaff_r23;
  puVar4[0x1ad] = unaff_r22;
  puVar4[0x1ac] = unaff_r21;
  puVar4[0x1ab] = unaff_r20;
  puVar4[0x1aa] = unaff_r19;
  puVar4[0x1a9] = unaff_r18;
  puVar4[0x1a8] = unaff_r17;
  puVar4[0x1a7] = unaff_r16;
  if (bVar1 == 0) {
    if ((Level == Orxon) && (g_heroType == '\x01')) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      DAT_00eef984 = 0x16;
      iVar11 = 0;
      lVar29 = 10;
      DAT_00eef980 = 0x2d;
      do {
        iVar7 = iVar11 / 10;
        iVar10 = (int)uVar28;
        *(int *)(iVar10 + 0x12c00) = iVar7;
        *(int *)(iVar10 + 0x12cf0) = iVar7 + 0x17;
        *(int *)(iVar10 + 0x12c78) = iVar7 + 0xb;
        iVar11 = iVar11 + 0x2d;
        uVar28 = uVar28 + 4;
        *(int *)(iVar10 + 0x12d68) = iVar7 + 0x22;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    fVar8 = DAT_00757e54 * mobyutil::g_FrameTime + *(float *)((int)pvVar2 + 0x12de0);
    *(float *)((int)pvVar2 + 0x12de0) = fVar8;
    if (1.0 < fVar8) {
      *(float *)((int)pvVar2 + 0x12de0) = fVar8 - 1.0;
    }
    lVar29 = 0;
    do {
      iVar11 = 0;
      lVar20 = uVar9 - 0xdf0;
      lVar26 = 0;
      lVar19 = uVar9 - 0xd50;
      lVar18 = uVar9 - 0xcb0;
      lVar24 = 0;
      do {
        lVar27 = lVar29 * 0x78 + uVar28 + lVar26;
        iVar10 = fastfunc::FastDecTimerS32(lVar27 + 0x12c00U & 0xffffffff);
        if (iVar10 == 0) {
          lVar31 = 0x12;
          uVar23 = lVar29 * 0x2580 + uVar28 + lVar24 + 0x140 & 0xffffffff;
          lVar27 = uVar23 + 0x9604;
          lVar21 = uVar23 + 0x9608;
          do {
            pfVar14 = (float *)uVar23;
            *pfVar14 = *pfVar14 + pfVar14[0x2580];
            pfVar16 = (float *)lVar27;
            lVar27 = lVar27 + 0x140;
            pfVar14[1] = pfVar14[1] + *pfVar16;
            pfVar16 = (float *)lVar21;
            lVar21 = lVar21 + 0x140;
            pfVar14[2] = pfVar14[2] + *pfVar16;
            uVar23 = uVar23 + 0x140;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
        }
        else {
          uVar32 = 0;
          auVar39 = ZEXT416(0);
          auVar37 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          uVar25 = lVar29 * 0x2580 + uVar28 + lVar24;
          auVar39 = loadVectorLeftIndexed(8,0x1b4d20);
          iVar10 = 0;
          auVar38 = loadVectorLeftIndexed(0xc,0x1b4d20);
          auVar36 = loadVectorLeftIndexed(0x10,0x1b4d20);
          uVar23 = uVar25 & 0xffffffff;
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar40 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          uVar22 = (uVar9 - 0xdc0) + lVar24 + 0x70 & 0xffffffff;
          auVar39 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          lVar21 = uVar23 + 4;
          auVar39 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          do {
            auVar36 = ZEXT416(0xffffffff);
            auVar33 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar36 = ZEXT416(0xffffffff);
            auVar35 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            puVar5 = (undefined4 *)uVar23;
            puVar5[2] = 0;
            auVar34 = vectorConvertFromSignedFixedPointWord(auVar37,0);
            *puVar5 = 0;
            auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar35 = loadVectorLeftIndexed(0x7e50,0x750000);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar40,auVar36);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar33);
            auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar36,auVar33);
            auVar36 = (auVar36 ^ auVar39) >> 0x60 & (undefined1  [16])0xffffffff;
            uVar3 = storeVectorElementWordIndexed
                              (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0,
                               lVar21);
            *(undefined4 *)((uint)lVar21 & 0xfffffffc) = uVar3;
            puVar5[3] = 0x3f800000;
            mobyutil::MB_randSphere(uVar32,(double)(DAT_00757e4c * mobyutil::g_FrameTime),uVar22);
            iVar10 = iVar10 + 1;
            lVar21 = lVar21 + 0x140;
            uVar23 = uVar23 + 0x140;
            uVar22 = uVar22 + 0xa0;
            auVar36._0_4_ = auVar37._0_4_ + 1;
            auVar36._8_8_ = auVar37._8_8_;
            auVar36._4_4_ = auVar37._4_4_ + 1;
            auVar33._0_8_ = auVar36._0_8_;
            auVar33._12_4_ = auVar37._12_4_;
            auVar33._8_4_ = auVar37._8_4_ + 1;
            auVar37._0_12_ = auVar33._0_12_;
            auVar37._12_4_ = auVar33._12_4_ + 1;
          } while (iVar10 < 0x14);
          uVar23 = uVar25 + 0x140 & 0xffffffff;
          lVar12 = uVar23 + 0x960c;
          lVar13 = uVar23 + 0x9604;
          lVar15 = uVar23 + 0x9608;
          lVar30 = 0x12;
          lVar21 = lVar19;
          lVar31 = lVar18;
          lVar6 = lVar20;
          do {
            pfVar17 = (float *)((int)uVar23 + 0x9600);
            uVar23 = uVar23 + 0x140;
            *pfVar17 = *(float *)(lVar6 + 0xa0) + *(float *)(lVar21 + 0xa0);
            iVar10 = (int)lVar6;
            pfVar14 = (float *)lVar13;
            *pfVar14 = *(float *)(iVar10 + 0xa4) + *(float *)((int)lVar21 + 0xa4);
            pfVar16 = (float *)lVar15;
            *pfVar16 = *(float *)(iVar10 + 0xa8) + *(float *)((int)lVar21 + 0xa8);
            *(undefined4 *)lVar12 = *(undefined4 *)(iVar10 + 0xac);
            lVar12 = lVar12 + 0x140;
            *pfVar17 = *pfVar17 + *(float *)(lVar31 + 0xa0);
            *pfVar14 = *pfVar14 + *(float *)((int)lVar31 + 0xa4);
            *pfVar16 = *pfVar16 + *(float *)((int)lVar31 + 0xa8);
            *pfVar17 = *pfVar17 * 0.333;
            *pfVar14 = *pfVar14 * 0.333;
            lVar13 = lVar13 + 0x140;
            *pfVar16 = *pfVar16 * 0.333;
            lVar15 = lVar15 + 0x140;
            lVar30 = lVar30 + -1;
            lVar21 = lVar21 + 0xa0;
            lVar31 = lVar31 + 0xa0;
            lVar6 = lVar6 + 0xa0;
          } while (lVar30 != 0);
          *(undefined4 *)((int)lVar27 + 0x12c00) = DAT_00eef980;
        }
        iVar11 = iVar11 + 1;
        lVar24 = lVar24 + 0x10;
        lVar26 = lVar26 + 4;
        lVar20 = lVar20 + 0x10;
        lVar19 = lVar19 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while (iVar11 < 10);
      lVar29 = lVar29 + 1;
    } while ((int)lVar29 < 4);
  }
  return;
}



//==== 001b5258  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1075_001b5258(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1075_001b5258(void)

{
  DAT_00757ea8 = 0x10000;
  return;
}



//==== 001b5270  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1075_001b5270(void)
// callers(0): 
// callees(1): 00227994 mobyupdate_helpers::MB_isSpecificState

undefined8 mobyupdate_helpers::M1075_001b5270(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  short sVar5;
  ushort *puVar4;
  
  sVar5 = (short)*(undefined4 *)(*(int *)(param_1 + 0x78) + 0xb4);
  if (((-1 < sVar5) && (sVar5 <= mobyutil::g_NumMobyGroups)) &&
     (puVar4 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)((longlong)sVar5 << 2)),
     puVar4 != (ushort *)0x0)) {
    do {
      pMVar2 = MobyInstance + (*puVar4 & 0x7fff);
      if (((pMVar2->state < 0x80) && (pMVar2->oClass == PUFFOID)) &&
         (iVar3 = MB_isSpecificState(pMVar2), iVar3 == 0)) {
        return 0;
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return 1;
}



//==== 001b5398  ns=mobyupdate_helpers  size=0x478
// sig: undefined M1075_001b5398(void)
// callers(1): 001b5860 mobyupdate_unsorted::UpdateMoby_1075
// callees(7): 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0012a440 partupd::SpawnPart_34; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1075_001b5398(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  char *pcVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
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
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  double dVar40;
  float local_120;
  float local_11c;
  float local_118;
  Vec4 local_110;
  float local_100;
  float local_fc;
  float local_f8;
  undefined8 local_f0;
  
  pvVar3 = param_1->pVar;
  uVar12 = 0;
  do {
    lVar10 = (uVar12 & 0x3ffffff) * 0x40;
    iVar13 = (int)lVar10;
    pcVar7 = (char *)((int)pvVar3 + iVar13 + 0x101);
    cVar1 = *pcVar7;
    if (cVar1 == '\0') {
      mobyfunc::AttachManipulator(param_1,(uint32_t)uVar12,(int)pvVar3 + iVar13 + 0x100);
      cVar1 = *pcVar7;
    }
    fVar2 = 12.217304;
    if (param_1->state == '\x01') {
      fVar2 = 2.6179938;
    }
    if (cVar1 != '\0') {
      pfVar8 = (float *)((int)pvVar3 + (int)((uVar12 & 0xffffffff) << 2) + 0xf0);
      dVar14 = (double)fastfunc::FastWrapRot(*pfVar8,mobyutil::g_FrameTime * fVar2);
      *pfVar8 = (float)dVar14;
      fastfunc::FastQuaternionToEuler(lVar10 + ZEXT48(pvVar3) + 0x110 & 0xffffffff,0);
    }
    iVar13 = (uint32_t)uVar12 + 1;
    uVar12 = (ulonglong)iVar13;
  } while (iVar13 < 4);
  fVar2 = (param_1->pos).y - GameCamera.posY;
  fVar6 = (param_1->pos).x - GameCamera.posX;
  if ((SQRT(fVar6 * fVar6 + fVar2 * fVar2) <= 38.0) &&
     (((param_1->state != '\x01' || ((worldUpdateTime & 1) == 0)) &&
      (fVar4 = (param_1->pos).z, uVar5 = (int)fVar4 >> 0x1f,
      (int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x43608000)))) {
    iVar13 = 0;
    do {
      mobyfunc::GetBonePosition(param_1,iVar13,&local_120);
      iVar11 = 0;
      iVar9 = (int)((LZCOUNT(1 - (uint)param_1->state) << 0x3a) >> 0x3f) + 2;
      if (0 < iVar9) {
        uVar39 = 0;
        uVar38 = 0x3fd3333340000000;
        dVar14 = 3.1415927410125732;
        dVar31 = 2.0;
        dVar24 = 5.0;
        dVar25 = 0.4000000059604645;
        dVar26 = 1.570796251296997;
        dVar32 = 3.141592502593994;
        dVar33 = -3.141592502593994;
        dVar34 = -0.16666656732559204;
        dVar35 = 0.008333025500178337;
        dVar36 = -0.0001980741071747616;
        local_f0 = 0x3fbf46bba0000000;
        dVar37 = 2.601886990305502e-06;
        dVar27 = -2.0;
        dVar28 = 6300.0;
        dVar29 = 14700.0;
        uVar30 = 0x406bd00000000000;
        do {
          dVar15 = (double)mobyutil::MB_randRangeSigned(uVar39,uVar38);
          local_110.x = (float)((double)local_120 + dVar15);
          dVar15 = (double)mobyutil::MB_randRangeSigned(uVar39,uVar38);
          local_110.y = (float)((double)local_11c + dVar15);
          dVar15 = (double)mobyutil::MB_randRangeSigned(uVar39,uVar38);
          local_110.z = (float)((double)local_118 + dVar15);
          dVar40 = (double)(param_1->rotation).z;
          dVar15 = (double)mobyutil::MB_randRangeSigned(uVar39,local_f0);
          dVar15 = (double)fastfunc::FastWrapRot((float)dVar40,(float)(dVar15 + dVar14));
          dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar31,(float)dVar24);
          dVar40 = (double)(float)(dVar40 * (double)mobyutil::g_FrameTime);
          if (param_1->state == '\x01') {
            dVar40 = (double)(float)(dVar40 * dVar25);
          }
          dVar16 = (double)(float)(dVar15 + dVar26);
          local_f8 = 0.0;
          dVar19 = (double)(float)(dVar32 - dVar15);
          if (dVar15 - (double)(float)(dVar32 - dVar15) < 0.0) {
            dVar19 = dVar15;
          }
          dVar20 = (double)(float)(dVar32 - dVar16);
          if (dVar16 - (double)(float)(dVar32 - dVar16) < 0.0) {
            dVar20 = dVar16;
          }
          dVar18 = (double)(float)(dVar33 - dVar15);
          if ((double)(float)(dVar33 - dVar15) - dVar19 < 0.0) {
            dVar18 = dVar19;
          }
          dVar15 = (double)(float)(dVar33 - dVar16);
          if ((double)(float)(dVar33 - dVar16) - dVar20 < 0.0) {
            dVar15 = dVar20;
          }
          dVar19 = (double)(float)(dVar18 * dVar18);
          dVar16 = (double)(float)(dVar15 * dVar15);
          dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar18));
          dVar20 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar15));
          dVar21 = (double)(float)(dVar19 * dVar22);
          dVar23 = (double)(float)(dVar16 * dVar20);
          local_fc = (float)((double)(float)((double)(float)(dVar19 * dVar21) * dVar37 +
                                            (double)(float)(dVar21 * dVar36 +
                                                           (double)(float)(dVar22 * dVar35 +
                                                                          (double)(float)((double)(
                                                  float)(dVar19 * dVar18) * dVar34 + dVar18)))) *
                            dVar40);
          local_100 = (float)((double)(float)((double)(float)(dVar16 * dVar23) * dVar37 +
                                             (double)(float)(dVar23 * dVar36 +
                                                            (double)(float)(dVar20 * dVar35 +
                                                                           (double)(float)((double)(
                                                  float)(dVar16 * dVar15) * dVar34 + dVar15)))) *
                             dVar40);
          dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar31);
          local_f8 = (float)(dVar15 * (double)mobyutil::g_FrameTime);
          uVar17 = mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar29);
          partupd::SpawnPart_34(uVar17,uVar30,&local_110,&local_100);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 4);
  }
  return;
}



//==== 001b5860  ns=mobyupdate_unsorted  size=0xf68
// sig: undefined UpdateMoby_1075(MobyInstance * moby)
// callers(0): 
// callees(17): 0002e354 camera0::Cam0_SetCamHeight; 0002f3d8 camera0::Cam0_SetCamDist; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 00110488 mobyutil::ClampVec3Magnitude; 00112900 mobyutil::MB_GetOrientation; 00116b70 mobyutil::MB_SwingMotion; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 001b5398 mobyupdate_helpers::M1075_001b5398; 00227994 mobyupdate_helpers::MB_isSpecificState; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot

/* Moby 1075 */

void mobyupdate_unsorted::UpdateMoby_1075(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  f32 fVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ushort uVar24;
  void *pvVar25;
  int *piVar26;
  Spline *pSVar27;
  uint uVar28;
  ulonglong *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  MobyInstance *pMVar40;
  longlong lVar41;
  float *pfVar42;
  Spline *pSVar44;
  longlong lVar43;
  ulonglong unaff_r27;
  Spline *pSVar45;
  ulonglong unaff_r28;
  void *pvVar46;
  ulonglong unaff_r29;
  short sVar48;
  ushort *puVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar54;
  ulonglong in_f28;
  undefined8 uVar55;
  double dVar56;
  ulonglong in_f29;
  double dVar57;
  ulonglong in_f30;
  double dVar58;
  ulonglong in_f31;
  double dVar59;
  
  lVar35 = (longlong)(int)moby;
  uVar34 = ZEXT48(&stack0x00000000);
  lVar38 = uVar34 - 0x1e0;
  puVar29 = (ulonglong *)lVar38;
  *puVar29 = uVar34;
  puVar29[0x3e] = in_LR;
  puVar29[0x2d] = in_f17;
  puVar29[0x2e] = in_f18;
  puVar29[0x2f] = in_f19;
  puVar29[0x30] = in_f20;
  puVar29[0x31] = in_f21;
  puVar29[0x32] = in_f22;
  puVar29[0x33] = in_f23;
  puVar29[0x34] = in_f24;
  puVar29[0x35] = in_f25;
  puVar29[0x36] = in_f26;
  puVar29[0x37] = in_f27;
  puVar29[0x38] = in_f28;
  puVar29[0x39] = in_f29;
  puVar29[0x3a] = in_f30;
  puVar29[0x3b] = in_f31;
  puVar29[0x2b] = unaff_r30;
  pvVar25 = moby->pVar;
  puVar29[0x2c] = unaff_r31;
  dVar59 = (double)(moby->pos).x;
  dVar58 = (double)(moby->pos).y;
  dVar57 = (double)(moby->pos).z;
  fVar2 = (moby->rotation).y;
  *(f32 *)(puVar29 + 0xe) = (moby->rotation).x;
  fVar3 = (moby->rotation).z;
  *(f32 *)((int)puVar29 + 0x74) = fVar2;
  fVar2 = (moby->rotation).w;
  uVar1 = moby->state;
  *(f32 *)(puVar29 + 0xf) = fVar3;
  puVar29[0x2a] = unaff_r29;
  puVar29[0x29] = unaff_r28;
  puVar29[0x28] = unaff_r27;
  *(f32 *)((int)puVar29 + 0x7c) = fVar2;
  if (uVar1 != '\0') {
    (moby->pos).z = *(f32 *)((int)pvVar25 + 0xe4);
  }
  mobyupdate_helpers::M1075_001b5398(lVar35);
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    fVar4 = *(float *)(*(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10 + 0x18);
    if (*(int *)((int)pvVar25 + 0xb0) != 0) {
      fVar2 = (moby->pos).z;
      uVar28 = (int)fVar2 >> 0x1f;
      if ((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
               ((int)g_heroPosition.z >> 0x1f)) < (int)((uVar28 >> 1 ^ (uint)fVar2) - uVar28)) {
        mobyutil::OrganicDelt
                  (fVar4 + 1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime,&(moby->pos).z,
                   0x1b5810,(float *)((int)pvVar25 + 0xd0));
      }
      else {
        mobyutil::OrganicDelt
                  (fVar4 + 8.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime,&(moby->pos).z,
                   0x1b5810,(float *)((int)pvVar25 + 0xd0));
      }
    }
  }
  else if (uVar1 == '\x04') {
    dVar50 = (double)*(float *)(*(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10
                               + 0x18);
    mobyutil::OrganicDelt
              ((float)(dVar50 + 6.0),DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime,&(moby->pos).z,
               0x720000,(float *)((int)pvVar25 + 0xd0));
    if ((float)(dVar50 + 5.900000095367432) <= (moby->pos).z) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    sVar48 = (short)*(undefined4 *)((int)moby->pVar + 0xb4);
    if (((-1 < sVar48) && (sVar48 <= mobyutil::g_NumMobyGroups)) &&
       (puVar47 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)((longlong)sVar48 << 2)),
       puVar47 != (ushort *)0x0)) {
      do {
        pMVar40 = MobyInstance + (*puVar47 & 0x7fff);
        if (((pMVar40->state < 0x80) && (pMVar40->oClass == PUFFOID)) &&
           (iVar39 = mobyupdate_helpers::MB_isSpecificState(pMVar40), iVar39 == 0))
        goto LAB_001b6660;
        uVar24 = *puVar47;
        puVar47 = puVar47 + 1;
      } while (-1 < (short)uVar24);
    }
    if (*(int *)((int)pvVar25 + 0xb0) == 0) {
      moby->state = '\x05';
    }
    else {
      *(undefined4 *)((int)pvVar25 + 0xd0) = 0;
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    iVar39 = *(int *)((int)pvVar25 + 0xc4) + *(int *)((int)pvVar25 + 0xd4) * 0x10;
    dVar56 = (double)*(float *)(iVar39 + 0x10);
    dVar54 = (double)*(float *)(iVar39 + 0x14);
    dVar51 = (double)*(float *)(iVar39 + 0x18);
    dVar50 = (double)*(float *)(iVar39 + 0x1c);
    if (g_standingOnMoby == moby) {
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 == 0) {
        iVar39 = sound::PlayMobySound(1,4,moby);
        *(int *)((int)pvVar25 + 0xcc) = iVar39;
      }
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 200);
        if (((iVar39 != -1) && (sound::g_SoundChannels[iVar39].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar39].state != '\0')) {
          sound::sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
      }
      mobyutil::Delt(DAT_00757ecc * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                     (float *)((int)pvVar25 + 0xd0));
    }
    else {
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 == 0) {
        iVar39 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar25 + 200) = iVar39;
      }
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 0xcc);
        if (((iVar39 != -1) && (sound::g_SoundChannels[iVar39].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar39].state != '\0')) {
          sound::sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
      }
      mobyutil::Delt(0.0,DAT_0071f418 * 6.0,(float *)((int)pvVar25 + 0xd0));
    }
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(float *)((int)puVar29 + 0x9c) = (float)dVar50;
    *(float *)(puVar29 + 0x12) = (float)(dVar56 - (double)fVar4);
    *(float *)((int)puVar29 + 0x94) = (float)(dVar54 - (double)fVar5);
    *(float *)(puVar29 + 0x13) = (float)(dVar51 - (double)fVar6);
    mobyutil::ClampVec3Magnitude((double)*(float *)((int)pvVar25 + 0xd0),(Vec4 *)(puVar29 + 0x12));
    fVar4 = *(float *)(puVar29 + 0x12);
    fVar6 = (moby->pos).x + fVar4;
    fVar7 = (moby->pos).z + *(float *)(puVar29 + 0x13);
    fVar5 = *(float *)((int)puVar29 + 0x94);
    fVar8 = (moby->pos).y + fVar5;
    (moby->pos).x = fVar6;
    (moby->pos).z = fVar7;
    piVar26 = *(int **)((int)pvVar25 + 0xc4);
    (moby->pos).y = fVar8;
    if (*(int *)((int)pvVar25 + 0xd4) < *piVar26 + -1) {
      fVar4 = (float)((double)fVar8 - dVar54);
      fVar5 = (float)((double)fVar6 - dVar56);
      fVar6 = (float)((double)fVar7 - dVar51);
      if ((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <
           DAT_00757ecc * mobyutil::g_FrameTime) &&
         (iVar39 = *(int *)((int)pvVar25 + 0xd4) + 1, *(int *)((int)pvVar25 + 0xd4) = iVar39,
         piVar26[iVar39 * 4 + 7] == 0x42140000)) {
        *(undefined4 *)((int)pvVar25 + 0xc0) = 1;
      }
    }
    else if (SQRT(fVar4 * fVar4 + fVar5 * fVar5) < 0.001) {
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 0xcc));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 0xcc);
        if (((iVar39 != -1) && (sound::g_SoundChannels[iVar39].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar39].state != '\0')) {
          sound::sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
      }
      iVar39 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar25 + 200));
      if (iVar39 != 0) {
        iVar39 = *(int *)((int)pvVar25 + 200);
        if (((iVar39 != -1) && (sound::g_SoundChannels[iVar39].pMoby == moby)) &&
           (sound::g_SoundChannels[iVar39].state != '\0')) {
          sound::sound_Kill(iVar39);
        }
        *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
      }
      moby->state = '\x03';
    }
    fVar4 = (float)(dVar56 - (double)(moby->pos).x);
    fVar5 = (float)(dVar54 - (double)(moby->pos).y);
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar29 + 0x1c) = fVar4;
    *(float *)((int)puVar29 + 0xe4) = fVar5;
    *(float *)(puVar29 + 0x1d) = fVar6 - fVar7;
    fVar4 = 0.0;
    uVar36 = (ulonglong)(*(uint *)(puVar29 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar29 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar29 + 0xe4) >> 0x1d) & 4;
    fVar5 = ABS(*(float *)(puVar29 + 0x1c));
    if (*(float *)(puVar29 + 0x1d) - 0.0 < 0.0) {
      fVar5 = fVar7;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
    fVar7 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar29 + 0xe4));
    if (*(float *)(puVar29 + 0x1d) - 0.0 < 0.0) {
      fVar9 = fVar6;
    }
    if (0.0 < fVar5) {
      lVar37 = uVar34 - 0x1d0;
      lVar43 = uVar34 - 0xd8;
      lVar41 = uVar34 - 0xe8;
      lVar49 = 2;
      fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar29 + 0x104) = fVar5;
      *(float *)((int)puVar29 + 0xfc) = fVar5;
      *(float *)(puVar29 + 0x20) = fVar5;
      *(float *)(puVar29 + 0x1f) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar29 + 0xfc) = *(float *)((int)puVar29 + 0xfc) * fVar6;
      *(float *)(puVar29 + 0x20) = *(float *)(puVar29 + 0x20) * fVar5;
      *(float *)((int)puVar29 + 0x104) = *(float *)((int)puVar29 + 0x104) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar37 + 0xf8) = *(float *)((int)lVar37 + 0xe8) * fVar5 * fVar5;
        iVar39 = (int)lVar41;
        lVar41 = lVar41 + 8;
        lVar37 = lVar37 + 8;
        *(float *)((int)lVar43 + 4) = *(float *)(iVar39 + 4) * fVar5 * fVar5;
        lVar43 = lVar43 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar49 = 4;
      lVar43 = uVar34 - 0xe8;
      pfVar42 = (float *)&DAT_007358e0;
      lVar37 = lVar38;
      lVar41 = lVar43;
      do {
        fVar5 = *pfVar42;
        fVar6 = pfVar42[1];
        pfVar42 = pfVar42 + 2;
        *(float *)((int)lVar37 + 0xf8) = *(float *)((int)lVar37 + 0xf8) * fVar5;
        lVar37 = lVar37 + 8;
        *(float *)((int)lVar41 + 4) = *(float *)((int)lVar41 + 4) * fVar6;
        lVar41 = lVar41 + 8;
        lVar49 = lVar49 + -1;
      } while (lVar49 != 0);
      lVar37 = 2;
      do {
        iVar39 = (int)lVar38;
        lVar38 = lVar38 + 0x10;
        iVar33 = (int)lVar43;
        lVar43 = lVar43 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar39 + 0xf8) + *(float *)(iVar33 + 4) + *(float *)(iVar33 + 8)
                + *(float *)(iVar33 + 0xc);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
    }
    fVar5 = DAT_00757ed0 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              (fVar4,fVar5,fVar5,DAT_00757ed4 * 0.017453292 * mobyutil::g_FrameTime,
               &(moby->rotation).z,0x750000,(float *)((int)pvVar25 + 0xd8));
    if (*(int *)((int)pvVar25 + 0xc0) != 0) {
      uVar55 = 0x3f689374c0000000;
      camera0::Cam0_SetCamDist((double)DAT_00757ee0,0x3f689374c0000000,&DAT_001b5810,0);
      camera0::Cam0_SetCamHeight((double)DAT_00757ee4,uVar55);
    }
    iVar39 = 0;
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa8)];
    pSVar45 = Splines[*(int *)((int)pvVar25 + 0xac)];
    pSVar44 = pSVar27;
    if (0 < pSVar27->cnt) {
      do {
        fVar4 = pSVar45->points[0].y;
        fVar5 = pSVar45->points[0].x;
        fVar6 = (moby->transform).v1.y;
        fVar7 = pSVar45->points[0].z;
        fVar8 = (moby->transform).v0.y;
        fVar9 = (moby->transform).v1.z;
        iVar39 = iVar39 + 1;
        fVar10 = (moby->transform).v2.y;
        fVar11 = (moby->transform).v1.w;
        fVar12 = (moby->transform).v0.z;
        fVar13 = (moby->transform).v0.w;
        fVar14 = (moby->transform).v2.z;
        fVar15 = (moby->transform).v2.w;
        fVar16 = pSVar45->points[0].w;
        pSVar45 = (Spline *)pSVar45->points;
        pSVar44->points[0].x =
             (moby->transform).v2.x * fVar7 +
             (moby->transform).v0.x * fVar5 + (moby->transform).v1.x * fVar4 + (moby->pos).x;
        pSVar44->points[0].y = fVar10 * fVar7 + fVar8 * fVar5 + fVar6 * fVar4 + (moby->pos).y;
        fVar6 = (moby->pos).z;
        pSVar44->points[0].w = fVar15 * fVar7 + fVar13 * fVar5 + fVar11 * fVar4 + fVar16;
        pSVar44->points[0].z = fVar14 * fVar7 + fVar12 * fVar5 + fVar9 * fVar4 + fVar6;
        pSVar44 = (Spline *)pSVar44->points;
      } while (iVar39 < pSVar27->cnt);
    }
  }
  else if (uVar1 == '\x01') {
    if (*(int *)((int)pvVar25 + 0xb8) != 0) {
      pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa0)];
      *(Spline **)((int)pvVar25 + 0xc4) = pSVar27;
      iVar39 = pSVar27->cnt;
      fVar4 = pSVar27->points[iVar39 + -2].x;
      (moby->pos).x = fVar4;
      fVar5 = pSVar27->points[iVar39 + -2].y;
      (moby->pos).y = fVar5;
      (moby->pos).z = pSVar27->points[iVar39 + -2].z;
      piVar26 = *(int **)((int)pvVar25 + 0xc4);
      (moby->pos).w = pSVar27->points[iVar39 + -2].w;
      fVar4 = (float)piVar26[*piVar26 * 4] - fVar4;
      fVar5 = (float)piVar26[*piVar26 * 4 + 1] - fVar5;
      fVar6 = ABS(fVar4);
      *(float *)((int)puVar29 + 0xec) = fVar4;
      fVar7 = ABS(fVar5);
      *(float *)(puVar29 + 0x1e) = fVar5;
      *(float *)((int)puVar29 + 0xf4) = fVar6 - fVar7;
      fVar4 = 0.0;
      uVar36 = (ulonglong)(*(uint *)((int)puVar29 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar29 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar29 + 0x1e) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar29 + 0xec));
      if (*(float *)((int)puVar29 + 0xf4) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
      fVar7 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar29 + 0x1e));
      if (*(float *)((int)puVar29 + 0xf4) - 0.0 < 0.0) {
        fVar9 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar37 = uVar34 - 0x1d0;
        lVar41 = uVar34 - 200;
        lVar43 = uVar34 - 0xb8;
        lVar49 = 2;
        fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar29 + 0x124) = fVar5;
        *(float *)((int)puVar29 + 0x11c) = fVar5;
        *(float *)(puVar29 + 0x24) = fVar5;
        *(float *)(puVar29 + 0x23) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar29 + 0x11c) = *(float *)((int)puVar29 + 0x11c) * fVar6;
        *(float *)(puVar29 + 0x24) = *(float *)(puVar29 + 0x24) * fVar5;
        *(float *)((int)puVar29 + 0x124) = *(float *)((int)puVar29 + 0x124) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar37 + 0x118) = *(float *)((int)lVar37 + 0x108) * fVar5 * fVar5;
          iVar39 = (int)lVar41;
          lVar37 = lVar37 + 8;
          lVar41 = lVar41 + 8;
          *(float *)((int)lVar43 + 4) = *(float *)(iVar39 + 4) * fVar5 * fVar5;
          lVar43 = lVar43 + 8;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        lVar49 = 4;
        lVar43 = uVar34 - 200;
        pfVar42 = (float *)&DAT_007358e0;
        lVar37 = lVar38;
        lVar41 = lVar43;
        do {
          fVar5 = *pfVar42;
          fVar6 = pfVar42[1];
          pfVar42 = pfVar42 + 2;
          *(float *)((int)lVar37 + 0x118) = *(float *)((int)lVar37 + 0x118) * fVar5;
          lVar37 = lVar37 + 8;
          *(float *)((int)lVar41 + 4) = *(float *)((int)lVar41 + 4) * fVar6;
          lVar41 = lVar41 + 8;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        lVar37 = 2;
        do {
          iVar39 = (int)lVar38;
          iVar33 = (int)lVar43;
          lVar38 = lVar38 + 0x10;
          lVar43 = lVar43 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar39 + 0x118) + *(float *)(iVar33 + 4) +
                  *(float *)(iVar33 + 8) + *(float *)(iVar33 + 0xc);
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar7;
      }
      (moby->rotation).z = fVar4;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\0') {
    moby->drawDistance = 0xff;
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(lVar35,1,0,1);
    }
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa8)];
    pSVar45 = Splines[*(int *)((int)pvVar25 + 0xac)];
    fastfunc::FastNormalizeRMtx4(uVar34 - 0x140,lVar35 + 0xc0);
    iVar39 = 0;
    if (0 < pSVar27->cnt) {
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).z;
      fVar7 = *(float *)(puVar29 + 0x14);
      fVar8 = *(float *)(puVar29 + 0x16);
      fVar9 = *(float *)(puVar29 + 0x18);
      fVar10 = *(float *)(puVar29 + 0x1a);
      fVar11 = *(float *)((int)puVar29 + 0xa4);
      fVar12 = *(float *)((int)puVar29 + 0xb4);
      fVar13 = *(float *)((int)puVar29 + 0xc4);
      fVar14 = *(float *)((int)puVar29 + 0xd4);
      fVar15 = *(float *)(puVar29 + 0x15);
      fVar16 = *(float *)(puVar29 + 0x17);
      fVar17 = *(float *)(puVar29 + 0x19);
      fVar18 = *(float *)(puVar29 + 0x1b);
      fVar19 = *(float *)((int)puVar29 + 0xac);
      fVar20 = *(float *)((int)puVar29 + 0xbc);
      fVar21 = *(float *)((int)puVar29 + 0xcc);
      fVar22 = *(float *)((int)puVar29 + 0xdc);
      pSVar44 = pSVar27;
      do {
        fVar31 = pSVar44->points[0].y - fVar5;
        fVar30 = pSVar44->points[0].x - fVar4;
        fVar23 = pSVar44->points[0].w;
        fVar32 = pSVar44->points[0].z - fVar6;
        iVar39 = iVar39 + 1;
        pSVar44 = (Spline *)pSVar44->points;
        pSVar45->points[0].x = fVar23 * fVar10 + fVar32 * fVar9 + fVar30 * fVar7 + fVar31 * fVar8;
        pSVar45->points[0].y = fVar23 * fVar14 + fVar32 * fVar13 + fVar30 * fVar11 + fVar31 * fVar12
        ;
        pSVar45->points[0].z = fVar23 * fVar18 + fVar32 * fVar17 + fVar30 * fVar15 + fVar31 * fVar16
        ;
        pSVar45->points[0].w = fVar23 * fVar22 + fVar32 * fVar21 + fVar30 * fVar19 + fVar31 * fVar20
        ;
        pSVar45 = (Spline *)pSVar45->points;
      } while (iVar39 < pSVar27->cnt);
    }
    pSVar27 = Splines[*(int *)((int)pvVar25 + 0xa0)];
    iVar39 = 0;
    *(Spline **)((int)pvVar25 + 0xc4) = pSVar27;
    (moby->pos).x = pSVar27->points[0].x;
    (moby->pos).y = pSVar27->points[0].y;
    (moby->pos).z = pSVar27->points[0].z;
    fVar4 = pSVar27->points[0].w;
    *(undefined4 *)((int)pvVar25 + 0xd4) = 1;
    (moby->pos).w = fVar4;
    moby->state = '\x01';
    pvVar46 = pvVar25;
    do {
      dVar50 = (double)mobyutil::MB_randRot();
      iVar39 = iVar39 + 1;
      *(float *)((int)pvVar46 + 0xf0) = (float)dVar50;
      pvVar46 = (void *)((int)pvVar46 + 4);
    } while (iVar39 < 4);
    *(undefined4 *)((int)pvVar25 + 200) = 0xffffffff;
    *(undefined4 *)((int)pvVar25 + 0xcc) = 0xffffffff;
    *(uint *)((int)pvVar25 + 0x9c) = *(uint *)((int)pvVar25 + 0x9c) | 1;
  }
LAB_001b6660:
  *(f32 *)((int)pvVar25 + 0xe4) = (moby->pos).z;
  dVar56 = (double)(mobyutil::g_FrameTime * 0.43633232);
  dVar54 = (double)(mobyutil::g_FrameTime * 0.61086524);
  dVar51 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar25 + 0xe0),mobyutil::g_FrameTime * 1.5707964);
  *(float *)((int)pvVar25 + 0xe0) = (float)dVar51;
  dVar50 = (double)(float)(3.141592502593994 - dVar51);
  if (dVar51 - (double)(float)(3.141592502593994 - dVar51) < 0.0) {
    dVar50 = dVar51;
  }
  dVar52 = (double)(float)(-3.141592502593994 - dVar51);
  if ((double)(float)(-3.141592502593994 - dVar51) - dVar50 < 0.0) {
    dVar52 = dVar50;
  }
  dVar51 = (double)(float)(dVar52 * dVar52);
  dVar53 = (double)(float)(dVar51 * (double)(float)(dVar51 * dVar52));
  dVar50 = (double)(float)(dVar51 * dVar53);
  (moby->pos).z =
       ((float)(dVar51 * dVar50) * 2.601887e-06 +
       (float)(dVar50 * -0.0001980741071747616 +
              (double)(float)(dVar53 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar51 * dVar52) * -0.16666656732559204
                                            + dVar52)))) * 0.13 + (moby->pos).z;
  mobyutil::MB_SwingMotion
            (0x3fa57254c0000000,dVar56,dVar54,lVar35,(int)pvVar25 + 0xe8,(int)pvVar25 + 0xec);
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  *(f32 *)((int)puVar29 + 0x8c) = (moby->pos).w;
  *(float *)(puVar29 + 0x10) = (float)((double)fVar4 - dVar59);
  *(float *)((int)puVar29 + 0x84) = (float)((double)fVar5 - dVar58);
  *(float *)(puVar29 + 0x11) = (float)((double)fVar6 - dVar57);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar25 + 0x60),(Vec4 *)(puVar29 + 0x10),uVar34 - 0x170,
             lVar35 + 0x40);
  return;
}



//==== 001b67d0  ns=Global  size=0xa0
// sig: undefined FUN_001b67d0(void)
// callers(2): 001de6a0 mobyupdate_helpers::M1140_001de6a0; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

undefined8 FUN_001b67d0(int param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (g_standingOnMoby == param_1)) &&
     (g_framesNotGrounded == 0)) {
    *(undefined1 *)(param_1 + 0x20) = 2;
    if (*(char *)(param_1 + 0x53) != '\0') {
      mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 001b6870  ns=Global  size=0x1c
// sig: undefined FUN_001b6870(void)
// callers(3): 001dd210 mobyupdate_helpers::M1140_001dd210; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00225048 mobyupdate_helpers::M1246_00225048
// callees(0): 

bool FUN_001b6870(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x05';
}



//==== 001b688c  ns=mobyupdate_helpers  size=0x10
// sig: undefined M1077_001b688c(void)
// callers(1): 001dd210 mobyupdate_helpers::M1140_001dd210
// callees(0): 

void mobyupdate_helpers::M1077_001b688c(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xb8) = 1;
  return;
}



//==== 001b689c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1077_001b689c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1077_001b689c(void)

{
  DAT_00757f34 = 0x10000;
  return;
}



//==== 001b6918  ns=mobyupdate_unsorted  size=0x708
// sig: undefined UpdateMoby_1077(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 00105870 mobyutil::DamageSphereAtPos; 00121740 partupd::SpawnPart_4; 00123390 partupd::SpawnPart_11; 001d4d88 FUN_001d4d88; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1077 */

void mobyupdate_unsorted::UpdateMoby_1077(MobyInstance *moby)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar13;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar14;
  int iVar15;
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
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [12];
  longlong local_b0;
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  iVar13 = fastfunc::FastDecTimerS32(pfVar2 + 4);
  if (iVar13 == 0) {
    dVar26 = 0.0;
    mobyutil::MB_randRangeFloat(0.0,2.0);
    mobyutil::MB_randRot();
    uVar4 = DAT_00757f64;
    uVar3 = DAT_00757f60;
    lVar14 = lVar9 + 0x10;
    dVar25 = 20.5;
    fVar6 = animationSpeed * 20.5;
    local_b0 = (longlong)(int)fVar6;
    uVar10 = fastfunc::FastDoubleToInt((double)DAT_00757f58);
    uVar11 = fastfunc::FastDoubleToInt((double)DAT_00757f5c);
    partupd::SpawnPart_4(lVar14,local_100,uVar3,uVar4,(int)fVar6,uVar10,uVar11,1);
    (moby->pos).x = (moby->pos).x + *pfVar2;
    (moby->pos).y = (moby->pos).y + pfVar2[1];
    (moby->pos).z = (moby->pos).z + pfVar2[2];
    iVar13 = collproc::CollLine(local_110,lVar14,0,lVar9,0);
    if (iVar13 != 0) {
      fVar6 = GameCamera.posY - (moby->pos).y;
      fVar7 = GameCamera.posX - (moby->pos).x;
      fVar8 = GameCamera.posZ - (moby->pos).z;
      iVar13 = 10;
      dVar24 = 8.0;
      dVar27 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
      if (dVar27 < 8.0) {
        iVar13 = fastfunc::FastDoubleToInt(dVar27);
        iVar13 = iVar13 + 2;
      }
      dVar19 = dVar26;
      if (dVar27 - 7.0 < 0.0) {
        dVar19 = (double)(float)(7.0 - dVar27);
      }
      if (0 < iVar13) {
        iVar15 = 0;
        dVar23 = 10.0;
        uVar10 = 0x41186a0000000000;
        dVar22 = 15.5;
        dVar21 = 25.5;
        dVar20 = 30.5;
        do {
          dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar23);
          dVar17 = (double)mobyutil::g_FrameTime;
          local_e0[0] = 0x4f008fff;
          local_e0[1] = 0x4f008fff;
          local_e0[3] = 0x4f006fff;
          local_e0[4] = 0x2fffffff;
          local_e0[2] = 0x4f007fff;
          local_e0[5] = 0x2fffffff;
          dVar18 = (double)(float)(dVar16 * dVar17 - (double)(float)(dVar17 * dVar19));
          local_e0[6] = 0x2f005f7f;
          local_e0[7] = 0x2f004f7f;
          local_e0[8] = 0x2f003f7f;
          local_e0[9] = 0x2f00004f;
          local_e0[10] = 0x2f000000;
          local_e0[0xb] = 0x3f000000;
          lVar12 = mobyutil::MB_randInt(dVar16,dVar17,(double)(float)(dVar17 * dVar19),6);
          uVar3 = *(undefined4 *)((int)local_e0 + (int)(lVar12 << 2));
          lVar12 = mobyutil::MB_randInt(6);
          uVar4 = *(undefined4 *)((int)local_e0 + (int)(lVar12 << 2) + 0x18);
          iVar1 = (int)((double)animationSpeed * dVar25);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar22),iVar1);
          iVar1 = (int)((double)animationSpeed * dVar20);
          local_b0 = (longlong)iVar1;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
          partupd::SpawnPart_11(uVar10,dVar18,lVar14,local_f0,uVar3,uVar4);
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar13);
      }
      uVar5 = (int)DAT_00a10714 >> 0x1f;
      uVar10 = 0x4010000000000000;
      if (((int)((uVar5 >> 1 ^ DAT_00a10714) - uVar5) < 0x3f733333) && (9.0 < dVar27)) {
        local_b0 = (longlong)(int)(animationSpeed * 15.5);
        FUN_001d4d88(0x4010000000000000,lVar9,lVar14,local_f0,uVar5,(int)(animationSpeed * 15.5),
                     0x7f,0x7f,0x7f);
        local_b0 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(uVar10,lVar9,lVar14,local_f0);
      }
      local_b0 = (longlong)(int)((double)animationSpeed * dVar25);
      FUN_001d4d88(uVar10,lVar9,lVar14,local_f0,0x30,(int)((double)animationSpeed * dVar25),0x7f,
                   0x40,0);
      local_b0 = (longlong)(int)(animationSpeed * 27.5);
      FUN_001d4d88(0x400c000000000000,lVar9,lVar14,local_f0,0x40,(int)(animationSpeed * 27.5),0x60,
                   0x10,0);
      local_b0 = (longlong)(int)(animationSpeed * 29.5);
      FUN_001d4d88(0x4008000000000000,lVar9,lVar14,local_f0,0x20,(int)(animationSpeed * 29.5),0x20,0
                   ,0);
      mobyutil::DamageSphereAtPos(0x3ff8000000000000,0x3ff0000000000000,dVar26,lVar9,lVar14);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001b7028  ns=Global  size=0xd8
// sig: undefined FUN_001b7028(void)
// callers(1): 00190d60 mobyupdate_unsorted::UpdateMoby_1032
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_001b7028(undefined8 param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  undefined8 in_LR;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pMVar3 = mobyfunc::CreateMoby(TRANSPORT_POD_RING|ELEVATOR_0015);
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    puVar1 = (undefined4 *)pMVar3->pVar;
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    auVar4 = loadVectorLeftIndexed(in_LR,0x1b7020);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x10,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 4) & 0xfffffffc) = uVar2;
  }
  return;
}



//==== 001b7108  ns=mobyupdate_unsorted  size=0x6a8
// sig: undefined UpdateMoby_a_lot_4(MobyInstance * moby)
// callers(0): 
// callees(1): 0015d12c sound::PlayMobySound

/* Moby 129
   Moby 130
   Moby 182
   Moby 183
   Moby 360
   Moby 1063
   Moby 1078
   Moby 1079
   Moby 1131 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_a_lot_4(MobyInstance *moby)

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
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  
  pfVar12 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar12[4] = -NAN;
  }
  bVar1 = moby->state;
  pMVar17 = (MobyInstance *)(uint)bVar1;
  if (bVar1 == 4) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    if ((((pfVar12[4] != -NAN) && (MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) &&
        (bVar1 = MobyInstance[(int)pfVar12[4]].state, bVar1 != 0xfd && bVar1 != 0xfe)) &&
       ((float)(uint)bVar1 != pfVar12[5])) {
      fVar2 = pfVar12[8];
      fVar3 = pfVar12[7];
      fVar4 = pfVar12[9];
      fVar5 = 0.0;
      fVar6 = (moby->transform).v1.y;
      fVar16 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar7 = (moby->transform).v1.z;
      fVar8 = (moby->transform).v0.y;
      fVar9 = (moby->transform).v0.z;
      fVar10 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.z;
      fVar13 = -(pfVar12[0xb] * mobyutil::g_FrameTime) / fVar16;
      fVar15 = fVar5;
      if (0.0 - fVar16 < 0.0) {
        fVar15 = fVar13 * fVar2;
      }
      fVar14 = fVar5;
      if (0.0 - fVar16 < 0.0) {
        fVar14 = fVar13 * fVar3;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar5 = fVar13 * fVar4;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar15 = fVar13 * fVar2;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar14 = fVar13 * fVar3;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar5 = fVar13 * fVar4;
      }
      (moby->pos).x =
           (moby->pos).x +
           (moby->transform).v2.x * fVar5 +
           (moby->transform).v0.x * fVar14 + (moby->transform).v1.x * fVar15;
      (moby->pos).y = (moby->pos).y + fVar10 * fVar5 + fVar8 * fVar14 + fVar6 * fVar15;
      (moby->pos).z = (moby->pos).z + fVar11 * fVar5 + fVar9 * fVar14 + fVar7 * fVar15;
      fVar2 = pfVar12[0xb] * mobyutil::g_FrameTime + pfVar12[3];
      pfVar12[3] = fVar2;
      if (fVar2 <= fVar16) {
        return (MobyInstance *)&DAT_00720000;
      }
      (moby->pos).x = *pfVar12;
      fVar2 = pfVar12[0xc];
      (moby->pos).y = pfVar12[1];
      (moby->pos).z = pfVar12[2];
      (moby->pos).w = pfVar12[3];
      if (fVar2 != -NAN) {
        sound::PlayMobySound((int)pfVar12[0xd],0,moby);
      }
      if (pfVar12[0xe] != -NAN) {
        (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
      }
      moby->state = '\x01';
      return (MobyInstance *)0x1;
    }
    if (pfVar12[0xc] != -NAN) {
      sound::PlayMobySound((int)pfVar12[0xc],0,moby);
    }
    pMVar17 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 3) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 1;
    }
    pMVar17 = (MobyInstance *)pfVar12[4];
    if ((pMVar17 != (MobyInstance *)0xffffffff) &&
       (pMVar17 = MobyInstance + (int)pMVar17, pMVar17 != (MobyInstance *)0x0)) {
      bVar1 = pMVar17->state;
      pMVar17 = (MobyInstance *)(uint)bVar1;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 == pfVar12[6])) {
        pfVar12[3] = 0.0;
        if (pfVar12[0xc] != -NAN) {
          sound::PlayMobySound((int)pfVar12[0xc],0,moby);
        }
        pMVar17 = (MobyInstance *)0x4;
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 == 2) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 1;
    }
    if (((pfVar12[4] != -NAN) && (MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) &&
       ((bVar1 = MobyInstance[(int)pfVar12[4]].state, bVar1 != 0xfd && bVar1 != 0xfe &&
        ((float)(uint)bVar1 == pfVar12[6])))) {
      if (pfVar12[0xc] != -NAN) {
        sound::PlayMobySound((int)pfVar12[0xc],0,moby);
      }
      moby->state = '\x04';
      return (MobyInstance *)0x4;
    }
    fVar2 = pfVar12[8];
    fVar3 = pfVar12[7];
    fVar4 = pfVar12[9];
    pMVar17 = (MobyInstance *)&DAT_00720000;
    fVar6 = (moby->transform).v2.y * fVar4 +
            (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar2;
    fVar5 = (moby->transform).v2.x * fVar4 +
            (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar2;
    fVar3 = (moby->transform).v2.z * fVar4 +
            (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar2;
    fVar2 = 0.0;
    fVar8 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar4 = (pfVar12[10] * mobyutil::g_FrameTime) / fVar8;
    fVar7 = fVar2;
    if (0.0 - fVar8 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    fVar9 = fVar2;
    if (0.0 - fVar8 < 0.0) {
      fVar9 = fVar6 * fVar4;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar2 = fVar5 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar9 = fVar6 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar2 = fVar5 * fVar4;
    }
    (moby->pos).z = (moby->pos).z + fVar7;
    (moby->pos).y = (moby->pos).y + fVar9;
    (moby->pos).x = (moby->pos).x + fVar2;
    fVar2 = -(pfVar12[10] * mobyutil::g_FrameTime - pfVar12[3]);
    pfVar12[3] = fVar2;
    if (fVar2 < 0.0) {
      (moby->pos).x = *pfVar12 + fVar5;
      (moby->pos).y = pfVar12[1] + fVar6;
      (moby->pos).z = pfVar12[2] + fVar3;
      (moby->pos).w = pfVar12[3];
      pfVar12[3] = 0.0;
      moby->state = '\x03';
      pMVar17 = (MobyInstance *)pfVar12[0xd];
      if (pMVar17 != (MobyInstance *)0xffffffff) {
        pMVar17 = (MobyInstance *)sound::PlayMobySound((int)pfVar12[0xc],0,moby);
      }
    }
  }
  else if (bVar1 == 1) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    if ((pfVar12[4] != -NAN) && (MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) {
      bVar1 = MobyInstance[(int)pfVar12[4]].state;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 != pfVar12[5])) {
        return (MobyInstance *)(uint)bVar1;
      }
    }
    pfVar12[3] = SQRT(pfVar12[9] * pfVar12[9] + pfVar12[7] * pfVar12[7] + pfVar12[8] * pfVar12[8]);
    if (pfVar12[0xc] != -NAN) {
      sound::PlayMobySound((int)pfVar12[0xc],0,moby);
    }
    pMVar17 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 0) {
    *pfVar12 = (moby->pos).x;
    pfVar12[1] = (moby->pos).y;
    pfVar12[2] = (moby->pos).z;
    pfVar12[3] = (moby->pos).w;
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    pMVar17 = (MobyInstance *)0x1;
    moby->state = '\x01';
    pfVar12[3] = 0.0;
  }
  return pMVar17;
}



//==== 001b77b0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1131_001b77b0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1131_001b77b0(void)

{
  DAT_00757fb4 = 0x10000;
  return;
}



//==== 001b77f0  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M108_001b77f0(void)
// callers(1): 001b7b60 mobyupdate_unsorted::UpdateMoby_108
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M108_001b77f0
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
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
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)fastfunc::FastDiffRots(param_2,param_1);
  fastfunc::FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}



//==== 001b78c0  ns=mobyupdate_helpers  size=0x1a0
// sig: undefined M108_001b78c0(void)
// callers(1): 001b7b60 mobyupdate_unsorted::UpdateMoby_108
// callees(1): 00105c08 mobyutil::CollDamageMobyDirect

void mobyupdate_helpers::M108_001b78c0
               (double param_1,double param_2,MobyInstance *param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_40 [6];
  
  dVar5 = (double)*param_4;
  dVar7 = (double)(param_5[1] - param_4[1]);
  dVar8 = (double)(float)((double)*param_5 - dVar5);
  dVar6 = (double)(param_5[2] - param_4[2]);
  fVar3 = DAT_00757fd8 * mobyutil::g_FrameTime * (float)(param_2 - param_1);
  fVar4 = SQRT((float)(dVar6 * dVar6 +
                      (double)(float)(dVar8 * dVar8 + (double)(float)(dVar7 * dVar7))));
  if (fVar3 < fVar4) {
    dVar9 = (double)(fVar3 / fVar4);
    dVar10 = 0.0;
    dVar1 = dVar8 * dVar9;
    dVar2 = dVar7 * dVar9;
    dVar9 = dVar6 * dVar9;
    dVar8 = dVar10;
    if (0.0 - fVar4 < 0.0) {
      dVar8 = (double)(float)dVar1;
    }
    dVar7 = dVar10;
    if (0.0 - fVar4 < 0.0) {
      dVar7 = (double)(float)dVar2;
    }
    if (0.0 - fVar4 < 0.0) {
      dVar10 = (double)(float)dVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar8 = (double)(float)dVar1;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar7 = (double)(float)dVar2;
    }
    dVar6 = dVar10;
    if (fVar4 - 0.0 < 0.0) {
      dVar6 = (double)(float)dVar9;
    }
    if ((DAT_00969f1c == param_3) || (DAT_00969f20 == param_3)) {
      local_40[3] = 0.0;
      local_40[1] = 0.0;
      local_40[0] = 0.0;
      local_40[2] = 3.0;
      mobyutil::CollDamageMobyDirect
                (1.0,g_heroMobyPtr,param_3,1,0x40400000,&(param_3->pos).x,local_40);
      dVar5 = (double)*param_4;
    }
  }
  (param_3->pos).x = (float)(dVar5 + dVar8);
  (param_3->pos).y = (float)((double)param_4[1] + dVar7);
  (param_3->pos).z = (float)((double)param_4[2] + dVar6);
  (param_3->pos).w = param_4[3];
  return;
}



//==== 001b7a68  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1131_001b7a68(void)
// callers(0): 
// callees(2): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage

void mobyupdate_helpers::M1131_001b7a68(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\b' && param_1->state != '\a')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\a';
  }
  param_1->damage = -1;
  return;
}



//==== 001b7b60  ns=mobyupdate_unsorted  size=0x848
// sig: undefined UpdateMoby_108(MobyInstance * moby)
// callers(0): 
// callees(8): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001b77f0 mobyupdate_helpers::M108_001b77f0; 001b78c0 mobyupdate_helpers::M108_001b78c0; 004fff60 fastfunc::FastDecTimerS32

/* Moby 108 */

void mobyupdate_unsorted::UpdateMoby_108(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  void *pvVar7;
  int iVar8;
  MobyClass *pMVar9;
  u16 *puVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x140;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x2a] = in_LR;
  puVar12[0x27] = in_f31;
  puVar12[0x26] = unaff_r31;
  puVar12[0x25] = unaff_r30;
  pvVar7 = moby->pVar;
  uVar23 = ZEXT48(pvVar7);
  dVar28 = 0.0;
  puVar12[0x24] = unaff_r29;
  *(undefined4 *)(puVar12 + 0x1c) = 0;
  uVar15 = mobyutil::MB_damage(moby,0x330000,0);
  mobyutil::MB_HandleDamage(moby,uVar15,uVar23 + 0x20,0,(int)puVar12 + 0xdc,puVar12 + 0x1c,0,4);
  if (((*(int *)((int)puVar12 + 0xdc) != 1) && (moby->state != '\b' && moby->state != '\a')) &&
     (fVar33 = *(float *)((int)pvVar7 + 0x20) - *(float *)(puVar12 + 0x1c),
     *(float *)((int)pvVar7 + 0x20) = fVar33, (double)fVar33 <= dVar28)) {
    moby->state = '\a';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  pSVar11 = Splines[*(int *)((int)pvVar7 + 0x70)];
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar7 + 0x80) = fVar2;
        *(f32 *)((int)pvVar7 + 0x84) = (moby->pos).y;
        *(f32 *)((int)pvVar7 + 0x88) = (moby->pos).z;
        *(f32 *)((int)pvVar7 + 0x8c) = (moby->pos).w;
        *(f32 *)((int)pvVar7 + 0x8c) = (moby->rotation).z;
      }
      else {
        iVar16 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar7 + 0x90));
        if (iVar16 != 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          moby->state = '\x02';
          auVar30 = loadVectorLeftIndexed(0x78,uVar23);
          auVar29 = loadVectorRightIndexed(0x88,uVar23);
          auVar29 = vectorConvertFromSignedFixedPointWord(auVar30 | auVar29,0);
          auVar30 = loadVectorLeftIndexed(4,0x1b7b38);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorAddFloatingPoint
                              (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                              );
          auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar31);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                              uVar23);
          *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar16 = fastfunc::FastDecTimerS32(uVar23 + 0xa0);
      if (iVar16 != 0) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->state = '\x03';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        *(f32 *)((int)pvVar7 + 0xa4) = (moby->rotation).z;
      }
    }
    else if (bVar1 < 4) {
      iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
      *(int *)((int)pvVar7 + 0xa0) = iVar16;
      puVar12[0x21] = (longlong)iVar16;
      mobyupdate_helpers::M108_001b78c0
                ((double)(longlong)puVar12[0x21],(double)(longlong)(animationSpeed * 30.5),moby,
                 uVar23 + 0x80,pSVar11->points);
      if (*(int *)((int)pvVar7 + 0xa0) == 0) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        *(undefined4 *)((int)pvVar7 + 0x98) = 1;
        fVar2 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar7 + 0x9c) = 0;
        *(f32 *)((int)pvVar7 + 0xa4) = fVar2;
        moby->state = '\x06';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
      }
    }
    else {
      iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
      *(int *)((int)pvVar7 + 0xa0) = iVar16;
      puVar12[0x21] = (longlong)iVar16;
      mobyupdate_helpers::M108_001b78c0
                ((double)(longlong)puVar12[0x21],(double)(longlong)(animationSpeed * 90.5),moby,
                 pSVar11->points + *(int *)((int)pvVar7 + 0x9c),
                 pSVar11->points + *(int *)((int)pvVar7 + 0x98));
      if (*(int *)((int)pvVar7 + 0xa0) == 0) {
        iVar16 = *(int *)((int)pvVar7 + 0x9c);
        iVar8 = *(int *)((int)pvVar7 + 0x98);
        if (iVar16 < iVar8) {
          *(int *)((int)pvVar7 + 0x98) = iVar8 + 1;
          *(int *)((int)pvVar7 + 0x9c) = iVar16 + 1;
          if (iVar8 + 1 == pSVar11->cnt) {
            *(int *)((int)pvVar7 + 0x98) = iVar16;
          }
        }
        else {
          *(int *)((int)pvVar7 + 0x98) = iVar8 + -1;
          *(int *)((int)pvVar7 + 0x9c) = iVar16 + -1;
          if (iVar8 + -1 == -1) {
            *(undefined4 *)((int)pvVar7 + 0x98) = 1;
          }
        }
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        moby->state = '\x06';
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        auVar30 = loadVectorLeftIndexed(8,0x1b7b38);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar15 = storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        *(f32 *)((int)pvVar7 + 0xa4) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 < 8) {
    if (5 < bVar1) {
      if (bVar1 < 7) {
        iVar16 = *(int *)((int)pvVar7 + 0xa0) + -1;
        *(int *)((int)pvVar7 + 0xa0) = iVar16;
        fVar33 = pSVar11->points[*(int *)((int)pvVar7 + 0x98)].x - (moby->pos).x;
        fVar3 = pSVar11->points[*(int *)((int)pvVar7 + 0x98)].y - (moby->pos).y;
        dVar27 = ABS((double)fVar33);
        dVar25 = ABS((double)fVar3);
        *(float *)(puVar12 + 0x1a) = fVar33;
        *(float *)((int)puVar12 + 0xd4) = fVar3;
        *(float *)(puVar12 + 0x1b) = (float)(dVar27 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar12 + 0x1a));
        if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
          dVar26 = dVar25;
        }
        fVar33 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar12 + 0xd4));
        if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
          dVar25 = dVar27;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar28 < dVar26) {
          lVar21 = uVar14 - 0x130;
          lVar20 = uVar14 - 0x5c;
          lVar18 = uVar14 - 0x4c;
          lVar24 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1e) = fVar4;
          *(float *)(puVar12 + 0x1d) = fVar4;
          *(float *)((int)puVar12 + 0xec) = fVar4;
          *(float *)((int)puVar12 + 0xe4) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar5;
          *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4;
          *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar21 + 0xe4) = *(float *)((int)lVar21 + 0xd4) * fVar4 * fVar4;
            iVar8 = (int)lVar20;
            lVar21 = lVar21 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = uVar14 - 0x5c;
          pfVar22 = (float *)&DAT_007358e0;
          lVar24 = 4;
          lVar18 = lVar21;
          lVar20 = lVar17;
          do {
            fVar4 = *pfVar22;
            fVar5 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar20 + 0xe4) = *(float *)((int)lVar20 + 0xe4) * fVar4;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar5;
            lVar18 = lVar18 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar18 = 2;
          do {
            iVar8 = (int)lVar17;
            iVar13 = (int)lVar21;
            lVar17 = lVar17 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar8 + 0xe4)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar33 + fVar3);
        }
        puVar12[0x21] = (longlong)iVar16;
        dVar28 = (double)mobyupdate_helpers::M108_001b77f0
                                   ((double)*(float *)((int)pvVar7 + 0xa4),dVar28,
                                    (double)(longlong)puVar12[0x21],
                                    (double)(longlong)(animationSpeed * 30.5),moby);
        (moby->rotation).z = (float)dVar28;
        if (*(int *)((int)pvVar7 + 0xa0) == 0) {
          auVar30 = ZEXT416(0xffffffff);
          auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
          moby->state = '\x04';
          auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar30 = loadVectorLeftIndexed(0xc,0x1b7b38);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar30 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60
                               ,auVar29);
          auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
          auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar15 = storeVectorElementWordIndexed
                             (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xa0,
                              uVar23);
          *(undefined4 *)((int)pvVar7 + 0xa0U & 0xfffffffc) = uVar15;
        }
      }
      else {
        fVar2 = (moby->pos).y;
        *(f32 *)(puVar12 + 0x18) = (moby->pos).x;
        fVar6 = (moby->pos).w;
        *(f32 *)((int)puVar12 + 0xc4) = fVar2;
        *(f32 *)((int)puVar12 + 0xcc) = fVar6;
        fVar33 = (moby->pos).z;
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 0;
        puVar12[0x15] = 7;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        *(float *)(puVar12 + 0x19) = fVar33 + 0.75;
        mobyutil::MB_genericExplosion
                  (dVar28,dVar28,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
                   0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,uVar14 - 0x80,
                   &DAT_001b7b38,7,7,10,0x14);
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\b';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      }
    }
  }
  else if (bVar1 < 9) {
    if (*(int *)((int)pvVar7 + 0x74) != 0) {
      *(int *)((int)pvVar7 + 0x74) = *(int *)((int)pvVar7 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar7 + 0x80);
      (moby->pos).y = *(f32 *)((int)pvVar7 + 0x84);
      fVar33 = *(float *)((int)pvVar7 + 0x88);
      (moby->pos).z = fVar33;
      (moby->pos).w = *(f32 *)((int)pvVar7 + 0x8c);
      (moby->rotation).z = *(f32 *)((int)pvVar7 + 0x8c);
      pMVar9 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar33 - 3.0;
      *(undefined4 *)((int)pvVar7 + 0x98) = 0;
      moby->enabled = '\x01';
      puVar10 = pMVar9->collision;
      moby->state = '\t';
      moby->collision = puVar10;
    }
  }
  else if ((bVar1 < 10) &&
          (fVar33 = mobyutil::Delt(*(float *)((int)pvVar7 + 0x88),mobyutil::g_FrameTime * 2.0,
                                   &(moby->pos).z), (double)fVar33 == dVar28)) {
    moby->state = '\x01';
  }
  return;
}



//==== 001b83a8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1081_001b83a8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1081_001b83a8(void)

{
  DAT_00758028 = 0x10000;
  return;
}



//==== 001b8400  ns=mobyupdate_unsorted  size=0x131c
// sig: undefined UpdateMoby_1081(MobyInstance * moby)
// callers(0): 
// callees(4): 000fddc0 mobyutil::MB_SetAnimation; 0010a2e0 mobyutil::OrganicDeltAng; 00115bd8 mobyutil::MB_TurnHeads; 005026a0 fastfunc::FastSubRots

/* Moby 1081 */

void mobyupdate_unsorted::UpdateMoby_1081(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1f0;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar16;
  puVar9[0x40] = in_LR;
  puVar9[0x3c] = in_f30;
  puVar9[0x3d] = in_f31;
  puVar9[0x3b] = unaff_r31;
  puVar9[0x38] = unaff_r28;
  puVar9[0x3a] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  *pfVar8 = g_heroPosition.x;
  pfVar8[1] = g_heroPosition.y;
  pfVar8[2] = g_heroPosition.z;
  pfVar8[3] = g_heroPosition.w;
  uVar1 = moby->state;
  puVar9[0x39] = unaff_r29;
  if (uVar1 == '\x05') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = pfVar8[(int)pfVar8[0x4d] * 4 + 0x44] - (moby->pos).x;
    fVar3 = pfVar8[(int)pfVar8[0x4d] * 4 + 0x45] - (moby->pos).y;
    fVar5 = ABS(fVar2);
    fVar6 = ABS(fVar3);
    *(float *)(puVar9 + 0x17) = fVar2;
    *(float *)((int)puVar9 + 0xbc) = fVar3;
    *(float *)(puVar9 + 0x18) = fVar5 - fVar6;
    fVar2 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar9 + 0x17));
    if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar6 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar9 + 0xbc));
    if (*(float *)(puVar9 + 0x18) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    if (0.0 < fVar3) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 0x6c;
      lVar21 = uVar16 - 0x5c;
      lVar23 = 2;
      fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x32) = fVar3;
      *(float *)(puVar9 + 0x31) = fVar3;
      *(float *)((int)puVar9 + 0x18c) = fVar3;
      *(float *)((int)puVar9 + 0x184) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x31) = *(float *)(puVar9 + 0x31) * fVar5;
      *(float *)((int)puVar9 + 0x18c) = *(float *)((int)puVar9 + 0x18c) * fVar3;
      *(float *)(puVar9 + 0x32) = *(float *)(puVar9 + 0x32) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar18 + 0x184) = *(float *)((int)lVar18 + 0x174) * fVar3 * fVar3;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0x6c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar3 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x184) = *(float *)((int)lVar18 + 0x184) * fVar3;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x184) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar4 + fVar6;
    }
    fVar3 = DAT_00758070 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              (fVar2,fVar3,fVar3,DAT_00758074 * 0.017453292 * mobyutil::g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    fVar2 = (moby->rotation).z;
    fVar3 = fVar2 + 1.5707963;
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar4 = fVar5;
    }
    fVar2 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
      fVar2 = fVar6;
    }
    fVar5 = fVar4 * fVar4;
    fVar15 = mobyutil::g_FrameTime * 4.0;
    fVar6 = fVar2 * fVar2;
    fVar13 = fVar5 * fVar5 * fVar4;
    fVar3 = pfVar8[0x4d];
    fVar7 = fVar6 * fVar6 * fVar2;
    fVar14 = fVar5 * fVar13;
    fVar12 = fVar6 * fVar7;
    (moby->pos).y =
         fVar15 * (fVar5 * fVar14 * 2.601887e-06 +
                  fVar14 * -0.0001980741 +
                  fVar13 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) + (moby->pos).y;
    (moby->pos).x =
         fVar15 * (fVar6 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar7 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2) + (moby->pos).x;
    *pfVar8 = pfVar8[(int)fVar3 * 4 + 0x44];
    pfVar8[1] = pfVar8[(int)fVar3 * 4 + 0x45];
    pfVar8[2] = pfVar8[(int)fVar3 * 4 + 0x46];
    pfVar8[3] = pfVar8[(int)fVar3 * 4 + 0x47];
    fVar2 = (moby->pos).y - pfVar8[(int)fVar3 * 4 + 0x45];
    fVar6 = (moby->pos).z - pfVar8[(int)fVar3 * 4 + 0x46];
    fVar5 = (moby->pos).x - pfVar8[(int)fVar3 * 4 + 0x44];
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2) < 1.0) {
      pfVar8[0x4d] = (float)((int)fVar3 + 1U & 1);
    }
  }
  else if (uVar1 == '\x04') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar6 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar9 + 0x7c) = fVar2;
    *(float *)(puVar9 + 0x10) = fVar3;
    *(float *)((int)puVar9 + 0x84) = fVar6 - fVar5;
    dVar24 = 0.0;
    uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0x7c));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar9 + 0x10));
    if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    dVar25 = dVar24;
    if (0.0 < fVar2) {
      lVar18 = uVar16 - 0x1e0;
      lVar21 = uVar16 - 0xfc;
      lVar20 = uVar16 - 0x10c;
      lVar23 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
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
        *(float *)((int)lVar18 + 0xe4) = *(float *)((int)lVar18 + 0xd4) * fVar2 * fVar2;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0x10c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar2 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0xe4) = *(float *)((int)lVar18 + 0xe4) * fVar2;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar19;
      do {
        iVar10 = (int)lVar18;
        iVar11 = (int)lVar21;
        lVar18 = lVar18 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0xe4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar28 = 0.01745329238474369;
    fVar2 = DAT_00758070 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              ((float)dVar25,fVar2,fVar2,DAT_00758074 * 0.017453292 * mobyutil::g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    *(undefined1 *)((int)pfVar8 + 0x1f) = 2;
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    dVar26 = ABS((double)fVar2);
    dVar27 = ABS((double)fVar3);
    *(float *)(puVar9 + 0xe) = fVar2;
    *(float *)((int)puVar9 + 0x74) = fVar3;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar27);
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0xe));
    if ((double)*(float *)(puVar9 + 0xf) - dVar24 < 0.0) {
      dVar25 = dVar27;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    dVar27 = ABS((double)*(float *)((int)puVar9 + 0x74));
    if ((double)*(float *)(puVar9 + 0xf) - dVar24 < 0.0) {
      dVar27 = dVar26;
    }
    fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    if (dVar24 < dVar25) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 300;
      lVar21 = uVar16 - 0x11c;
      lVar23 = 2;
      fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
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
        *(float *)((int)lVar18 + 0xc4) = *(float *)((int)lVar18 + 0xb4) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 300;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar6 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0xc4) = *(float *)((int)lVar18 + 0xc4) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0xc4)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar5);
    }
    dVar24 = (double)fastfunc::FastSubRots(fVar2,(float)dVar24);
    if (dVar24 < dVar28) {
      pfVar8[0x4c] = 0.0;
      moby->state = '\x03';
      if (moby->animationId != '\x02') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 2;
    fVar2 = (moby->rotation).z;
    if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass != WRENCH_0047)
       ) {
      fVar3 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar4 = ABS(fVar6);
      *(float *)(puVar9 + 0x11) = fVar3;
      *(float *)((int)puVar9 + 0x8c) = fVar6;
      *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
      fVar3 = 0.0;
      uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar9 + 0x11));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar9 + 0x8c));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        fVar12 = fVar5;
      }
      if (0.0 < fVar6) {
        lVar18 = uVar16 - 0x1e0;
        lVar20 = uVar16 - 0xec;
        lVar21 = uVar16 - 0xdc;
        lVar23 = 2;
        fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x22) = fVar5;
        *(float *)(puVar9 + 0x21) = fVar5;
        *(float *)((int)puVar9 + 0x10c) = fVar5;
        *(float *)((int)puVar9 + 0x104) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar6;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar5;
        *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x104) = *(float *)((int)lVar18 + 0xf4) * fVar5 * fVar5;
          iVar10 = (int)lVar20;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar21 = uVar16 - 0xec;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x104) = *(float *)((int)lVar18 + 0x104) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar18 = 2;
        do {
          iVar10 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar11 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar10 + 0x104) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar24 = (double)fastfunc::FastSubRots(fVar2,fVar3);
      if ((1.7453292608261108 < dVar24) && (moby->state = '\x04', moby->animationId != '\x04')) {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,4,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x02') {
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar6 = ABS(fVar2);
    fVar5 = ABS(fVar3);
    *(float *)(puVar9 + 0x14) = fVar2;
    *(float *)((int)puVar9 + 0xa4) = fVar3;
    *(float *)(puVar9 + 0x15) = fVar6 - fVar5;
    dVar24 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x14));
    if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar9 + 0xa4));
    if (*(float *)(puVar9 + 0x15) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    dVar25 = dVar24;
    if (0.0 < fVar2) {
      lVar18 = uVar16 - 0x1e0;
      lVar20 = uVar16 - 0xac;
      lVar21 = uVar16 - 0x9c;
      lVar23 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar9 + 0x2a) = fVar2;
      *(float *)(puVar9 + 0x29) = fVar2;
      *(float *)((int)puVar9 + 0x14c) = fVar2;
      *(float *)((int)puVar9 + 0x144) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar6;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar2;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar18 + 0x144) = *(float *)((int)lVar18 + 0x134) * fVar2 * fVar2;
        iVar10 = (int)lVar20;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0xac;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar2 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x144) = *(float *)((int)lVar18 + 0x144) * fVar2;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar20 = 2;
      lVar18 = lVar19;
      do {
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 0x144)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar28 = 0.01745329238474369;
    fVar2 = DAT_00758070 * 0.017453292 * DAT_0071f418;
    mobyutil::OrganicDeltAng
              ((float)dVar25,fVar2,fVar2,DAT_00758074 * 0.017453292 * mobyutil::g_FrameTime,
               &(moby->rotation).z,0x760000,pfVar8 + 0x4c);
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = g_heroPosition.x - (moby->pos).x;
    fVar3 = g_heroPosition.y - (moby->pos).y;
    dVar26 = ABS((double)fVar2);
    dVar27 = ABS((double)fVar3);
    *(float *)((int)puVar9 + 0x94) = fVar2;
    *(float *)(puVar9 + 0x13) = fVar3;
    fVar2 = (moby->rotation).z;
    *(float *)((int)puVar9 + 0x9c) = (float)(dVar26 - dVar27);
    uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar24 < 0.0) {
      dVar25 = dVar27;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    dVar27 = ABS((double)*(float *)(puVar9 + 0x13));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar24 < 0.0) {
      dVar27 = dVar26;
    }
    if (dVar24 < dVar25) {
      lVar18 = uVar16 - 0x1e0;
      lVar21 = uVar16 - 0xbc;
      lVar20 = uVar16 - 0xcc;
      lVar23 = 2;
      fVar6 = (float)(dVar27 - dVar25) / (float)(dVar27 + dVar25);
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x26) = fVar6;
      *(float *)(puVar9 + 0x25) = fVar6;
      *(float *)((int)puVar9 + 300) = fVar6;
      *(float *)((int)puVar9 + 0x124) = fVar6;
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar4;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar6;
      *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar6 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x124) = *(float *)((int)lVar18 + 0x114) * fVar6 * fVar6;
        iVar10 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar16 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar20 = lVar21;
      do {
        fVar6 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar18 + 0x124) = *(float *)((int)lVar18 + 0x124) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
        lVar20 = lVar20 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar18 = 2;
      do {
        iVar10 = (int)lVar19;
        iVar11 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x124)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar3);
    }
    dVar24 = (double)fastfunc::FastSubRots(fVar2,(float)dVar24);
    if (dVar24 < dVar28) {
      pfVar8[0x4c] = 0.0;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\x01') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    fVar2 = (moby->rotation).z;
    if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_currentWeaponMoby->oClass == WRENCH_0047)
       ) {
      fVar3 = g_heroPosition.x - (moby->pos).x;
      fVar6 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar4 = ABS(fVar6);
      *(float *)((int)puVar9 + 0xac) = fVar3;
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar5 - fVar4;
      fVar3 = 0.0;
      uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar9 + 0xac));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
      fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)((int)puVar9 + 0xb4) - 0.0 < 0.0) {
        fVar12 = fVar5;
      }
      if (0.0 < fVar6) {
        lVar18 = uVar16 - 0x1e0;
        lVar20 = uVar16 - 0x8c;
        lVar21 = uVar16 - 0x7c;
        lVar23 = 2;
        fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x2e) = fVar5;
        *(float *)(puVar9 + 0x2d) = fVar5;
        *(float *)((int)puVar9 + 0x16c) = fVar5;
        *(float *)((int)puVar9 + 0x164) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x2d) = *(float *)(puVar9 + 0x2d) * fVar6;
        *(float *)((int)puVar9 + 0x16c) = *(float *)((int)puVar9 + 0x16c) * fVar5;
        *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar18 + 0x164) = *(float *)((int)lVar18 + 0x154) * fVar5 * fVar5;
          iVar10 = (int)lVar20;
          lVar18 = lVar18 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar21 = uVar16 - 0x8c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar18 = lVar19;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar18 + 0x164) = *(float *)((int)lVar18 + 0x164) * fVar5;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar18 = 2;
        do {
          iVar10 = (int)lVar19;
          iVar11 = (int)lVar21;
          lVar19 = lVar19 + 0x10;
          lVar21 = lVar21 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar10 + 0x164) + *(float *)(iVar11 + 4) +
                  *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar24 = (double)fastfunc::FastSubRots(fVar2,fVar3);
      if ((1.7453292608261108 < dVar24) && (moby->state = '\x02', moby->animationId != '\x03')) {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
    else {
      moby->state = '\x03';
      if (moby->animationId != '\x02') {
        puVar9[0x35] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar9 + 0x1ac));
      }
    }
  }
  else if (uVar1 == '\0') {
    *(undefined1 *)((int)pfVar8 + 0x1f) = 1;
    *(char *)(pfVar8 + 7) = (char)DAT_0075804c;
    *(char *)((int)pfVar8 + 0x1e) = (char)DAT_00758054;
    *(char *)((int)pfVar8 + 0x1d) = (char)DAT_00758050;
    pfVar8[0x44] = (moby->pos).x;
    pfVar8[0x45] = (moby->pos).y;
    pfVar8[0x46] = (moby->pos).z;
    pfVar8[0x47] = (moby->pos).w;
    pfVar8[0x48] = (moby->pos).x;
    fVar2 = (moby->pos).y;
    pfVar8[0x49] = fVar2;
    pfVar8[0x4a] = (moby->pos).z;
    pfVar8[0x4b] = (moby->pos).w;
    pfVar8[0x4d] = 1.4013e-45;
    pfVar8[0x49] = fVar2 + 7.0;
    moby->state = '\x05';
    if (moby->animationId != '\x05') {
      puVar9[0x35] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar9 + 0x1ac));
    }
  }
  mobyutil::MB_TurnHeads(moby,pfVar8);
  return;
}



//==== 001b971c  ns=mobyupdate_helpers  size=0x4
// sig: undefined M1083_001b971c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1083_001b971c(void)

{
  return;
}



//==== 001b9730  ns=mobyupdate_helpers  size=0x2a4
// sig: undefined M1083_001b9730(void)
// callers(0): 
// callees(4): 00109af0 mobyutil::Delt; 00109ec0 mobyutil::DeltAng; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

double mobyupdate_helpers::M1083_001b9730
                 (double param_1,double param_2,double param_3,double param_4,double param_5,
                 float *param_6,int param_7,float *param_8)

{
  float *unused2;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float local_70 [4];
  
  dVar5 = (double)*param_6;
  if (dVar5 <= param_4) {
    dVar1 = -param_4;
    if (dVar5 < dVar1) {
      *param_6 = (float)dVar1;
      dVar5 = dVar1;
    }
  }
  else {
    *param_6 = (float)param_4;
    dVar5 = param_4;
  }
  unused2 = param_8;
  dVar1 = (double)fastfunc::FastDiffRots(param_1,dVar5);
  dVar6 = 0.0;
  dVar5 = -param_4;
  if (0.0 - *param_8 < 0.0) {
    dVar5 = param_4;
  }
  dVar2 = (double)fastfunc::FastDiffRots(dVar5,(double)*param_6);
  dVar3 = (double)*param_8;
  dVar4 = ABS(dVar2);
  if ((double)((float)((double)(float)(dVar3 * dVar3) / param_2) * 0.5) <= dVar4) {
    local_70[0] = (float)(dVar3 + param_5);
    dVar5 = (double)local_70[0];
    if (((double)(float)(dVar5 * dVar1) < dVar6) || (dVar1 == dVar6)) {
      mobyutil::Delt((float)dVar6,(float)param_2,local_70);
      *param_8 = (float)((double)local_70[0] - param_5);
      dVar2 = dVar1;
    }
    else if ((double)((float)((double)(float)(dVar5 * dVar5) / param_2) * 0.5) <= ABS(dVar1)) {
      dVar5 = (double)(float)((double)SQRT((float)((double)(float)(param_2 * 2.0) * dVar1)) -
                             param_5);
      if (param_3 - dVar5 < 0.0) {
        dVar5 = param_3;
      }
      if (dVar6 <= dVar1) {
        mobyutil::DeltAng((float)dVar5,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar2 = dVar1;
      }
      else {
        mobyutil::DeltAng((float)-dVar5,(float)param_2,param_8,param_7,(int)unused2,0);
        dVar2 = dVar1;
      }
    }
    else {
      mobyutil::Delt((float)dVar6,(float)param_2,local_70);
      *param_8 = (float)((double)local_70[0] - param_5);
      dVar2 = dVar1;
    }
    if (ABS(dVar2) <= ABS((double)*param_8)) {
      *param_6 = (float)param_1;
    }
    else {
      dVar5 = (double)fastfunc::FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar5;
      dVar2 = (double)*param_8;
    }
  }
  else {
    mobyutil::Delt((float)dVar6,(float)param_2,param_8);
    if (dVar4 <= ABS((double)*param_8)) {
      *param_6 = (float)dVar5;
    }
    else {
      dVar5 = (double)fastfunc::FastWrapRot(*param_8,*param_6);
      *param_6 = (float)dVar5;
      dVar2 = (double)*param_8;
    }
  }
  return dVar2;
}



//==== 001b99d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1083_001b99d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1083_001b99d4(void)

{
  DAT_007580c4 = 0x10000;
  return;
}



//==== 001b9a20  ns=mobyupdate_helpers  size=0x30c
// sig: undefined M1083_001b9a20(void)
// callers(1): 001b9d68 mobyupdate_unsorted::UpdateMoby_1083
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001bb4e0 mobyupdate_helpers::M1089_001bb4e0

void mobyupdate_helpers::M1083_001b9a20(int param_1,int param_2)

{
  f32 fVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 4) = 0;
  pMVar5 = mobyfunc::CreateMoby(ALIEN_SNAPPER_CAGE_DAMAGED);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  pMVar5->color = (int)((ulonglong)uVar6 >> 0x20);
  pMVar5->light = (int)uVar6;
  pMVar5->drawDistance = 0x40;
  pMVar5->enabled = '\x01';
  fVar1 = *(f32 *)(param_1 + 0x10);
  pMVar5->modeBits = *(MobyModeBit *)(param_1 + 0x34);
  fVar2 = *(f32 *)(param_1 + 0x14);
  (pMVar5->pos).x = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x18);
  (pMVar5->pos).y = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x1c);
  (pMVar5->pos).z = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x40);
  (pMVar5->pos).w = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x44);
  (pMVar5->rotation).x = fVar1;
  fVar1 = *(f32 *)(param_1 + 0x48);
  (pMVar5->rotation).y = fVar2;
  fVar2 = *(f32 *)(param_1 + 0x4c);
  (pMVar5->rotation).z = fVar1;
  fVar3 = *(float *)(param_1 + 0x2c);
  (pMVar5->rotation).w = fVar2;
  pMVar5->scale = fVar3;
  mobyfunc::UpdateMobyTransform(pMVar5);
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
  if (param_2 != 0) {
    iVar7 = 0;
    dVar8 = 1.0;
    dVar9 = 6.0;
    fVar3 = 0.5;
    fVar4 = 4.5;
    do {
      dVar11 = (double)fVar4;
      dVar10 = (double)fVar3;
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      mobyutil::MB_randRot();
      fVar3 = (float)dVar10;
      fVar4 = (float)dVar11;
      mobyutil::MB_randRangeFloat
                ((float)((double)DAT_007580f8 + dVar10),(float)((double)DAT_007580f8 + dVar11));
      M1089_001bb4e0(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x32);
  }
  return;
}



//==== 001b9d68  ns=mobyupdate_unsorted  size=0xa2c
// sig: undefined UpdateMoby_1083(MobyInstance * moby)
// callers(0): 
// callees(13): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f48 camera::camera5::Camera_SetCurrentAccel; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0006d720 RegisterFuncForMoby; 000a0c38 hero::Hero_Warp; 000b72b0 hero::TransitionMovement; 00109c30 mobyutil::OrganicDelt; 0015d12c sound::PlayMobySound; 001b9a20 mobyupdate_helpers::M1083_001b9a20; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble

/* Moby 1083 */

void mobyupdate_unsorted::UpdateMoby_1083(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyClass *pMVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  Cuboid *pCVar30;
  ulonglong uVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float *pfVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  double dVar40;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar31 = ZEXT48(&stack0x00000000);
  lVar34 = uVar31 - 400;
  puVar13 = (ulonglong *)lVar34;
  *puVar13 = uVar31;
  puVar13[0x34] = in_LR;
  puVar13[0x25] = in_f19;
  puVar13[0x26] = in_f20;
  puVar13[0x27] = in_f21;
  puVar13[0x28] = in_f22;
  puVar13[0x29] = in_f23;
  puVar13[0x2a] = in_f24;
  puVar13[0x2b] = in_f25;
  puVar13[0x2c] = in_f26;
  puVar13[0x2d] = in_f27;
  puVar13[0x2e] = in_f28;
  puVar13[0x2f] = in_f29;
  puVar13[0x30] = in_f30;
  puVar13[0x31] = in_f31;
  puVar13[0x24] = unaff_r31;
  pMVar9 = moby->pClass;
  puVar13[0x23] = unaff_r30;
  piVar10 = (int *)moby->pVar;
  uVar1 = moby->state;
  fVar2 = pMVar9->gScale * DAT_007580f4;
  puVar13[0x22] = unaff_r29;
  puVar13[0x21] = unaff_r28;
  puVar13[0x20] = unaff_r27;
  puVar13[0x1f] = unaff_r26;
  moby->scale = fVar2;
  pCVar30 = Cuboids;
  if (uVar1 == '\x04') {
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar4 * fVar4 + fVar2 * fVar2) < 16.0) {
      iVar32 = piVar10[3];
      Cuboids[iVar32].pos.x = g_heroPosition.x;
      pCVar30[iVar32].pos.y = g_heroPosition.y;
      pCVar30[iVar32].pos.z = g_heroPosition.z;
      pCVar30[iVar32].pos.w = g_heroPosition.w;
      pCVar30[piVar10[3]].pos.z = pCVar30[piVar10[3]].pos.z - 0.5;
      piVar10[3] = -1;
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar10[9] < DAT_007580f0) {
      iVar32 = piVar10[9] + 1;
      piVar10[9] = iVar32;
      dVar40 = (double)fastfunc::FastIntToDouble(iVar32);
      puVar13[0x1c] = (longlong)DAT_007580f0;
      boot::SceneScreenFade = 1.0 - (float)(dVar40 / (double)(longlong)puVar13[0x1c]);
    }
    pCVar30 = Cuboids;
    uVar11 = piVar10[6] >> 0x1f;
    iVar32 = (uVar11 >> 1 ^ piVar10[6]) - uVar11;
    if (iVar32 < 0x3f7fff58) {
      if ((0x3d4ccccc < iVar32) && (iVar32 = piVar10[3], -1 < iVar32)) {
        Cuboids[iVar32].pos.x = g_heroPosition.x;
        pCVar30[iVar32].pos.y = g_heroPosition.y;
        pCVar30[iVar32].pos.z = g_heroPosition.z;
        pCVar30[iVar32].pos.w = g_heroPosition.w;
        pCVar30[piVar10[3]].pos.z = pCVar30[piVar10[3]].pos.z - 0.5;
        piVar10[3] = -1;
      }
      if ((piVar10[1] == 1) &&
         (fVar2 = (moby->pos).y - MobyInstance[piVar10[8]].pos.y,
         fVar4 = (moby->pos).x - MobyInstance[piVar10[8]].pos.x,
         0.1 < SQRT(fVar4 * fVar4 + fVar2 * fVar2))) {
        sound::PlayMobySound(0,0,moby);
        mobyupdate_helpers::M1083_001b9a20(moby,1);
      }
      mobyutil::OrganicDelt
                (1.0,DAT_0071f418,DAT_0071f418,mobyutil::g_FrameTime * 1.5,(float *)(piVar10 + 6),
                 0x720000,(float *)(piVar10 + 7));
      pCVar30 = Cuboids;
      fVar23 = DAT_00969ce8;
      fVar22 = DAT_00969ce4;
      fVar21 = hero::g_heroMtx;
      iVar32 = piVar10[5];
      fVar6 = DAT_00969ce4 * DAT_00969ce4;
      fVar5 = hero::g_heroMtx * hero::g_heroMtx;
      fVar2 = Cuboids[iVar32].pos.x;
      *(float *)(puVar13 + 0x12) = fVar2;
      fVar4 = pCVar30[iVar32].pos.y;
      *(float *)((int)puVar13 + 0x94) = fVar4;
      fVar3 = pCVar30[iVar32].pos.z;
      *(float *)(puVar13 + 0x13) = fVar3;
      *(float *)((int)puVar13 + 0x9c) = pCVar30[iVar32].pos.w;
      *(float *)(puVar13 + 0x14) = pCVar30[iVar32].rot.x;
      fVar8 = pCVar30[iVar32].rot.y;
      fVar16 = SQRT(fVar23 * fVar23 + fVar5 + fVar6);
      *(float *)((int)puVar13 + 0xa4) = fVar8;
      fVar5 = pCVar30[iVar32].rot.z;
      *(float *)(puVar13 + 0x15) = fVar5;
      *(float *)((int)puVar13 + 0xac) = pCVar30[iVar32].rot.w;
      fVar26 = g_heroPosition.z;
      fVar24 = g_heroPosition.x;
      fVar20 = DAT_007580fc * 0.017453292;
      *(float *)(puVar13 + 0x14) = fVar20;
      fVar29 = g_heroRotation.w;
      fVar28 = g_heroRotation.z;
      fVar27 = g_heroRotation.x;
      fVar25 = g_heroPosition.y;
      fVar6 = 0.0;
      fVar7 = (float)piVar10[6];
      *(float *)((int)puVar13 + 0x9c) = g_heroPosition.w;
      fVar17 = -2.0 / fVar16;
      fVar19 = fVar6;
      if (0.0 - fVar16 < 0.0) {
        fVar19 = fVar23 * fVar17;
      }
      fVar18 = fVar6;
      if (0.0 - fVar16 < 0.0) {
        fVar18 = fVar22 * fVar17;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar6 = fVar21 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar19 = fVar23 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar18 = fVar22 * fVar17;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar6 = fVar21 * fVar17;
      }
      *(float *)((int)puVar13 + 0x94) = fVar7 * ((fVar25 + fVar18) - fVar4) + fVar4;
      *(float *)(puVar13 + 0x12) = fVar7 * ((fVar24 + fVar6) - fVar2) + fVar2;
      *(float *)(puVar13 + 0x13) = fVar7 * ((fVar26 + fVar19 + 0.85) - fVar3) + fVar3;
      fVar2 = (float)piVar10[6];
      *(float *)((int)puVar13 + 0xac) = fVar29;
      *(float *)(puVar13 + 0x14) = fVar2 * (fVar27 - fVar20) + fVar20;
      *(float *)((int)puVar13 + 0xa4) = fVar2 * (fVar8 - fVar8) + fVar8;
      *(float *)(puVar13 + 0x15) = fVar2 * (fVar28 - fVar5) + fVar5;
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0x12));
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x14));
    }
    else {
      moby->state = '\x05';
      hero::TransitionMovement(0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      draw::LetterBoxOn = 0;
    }
  }
  else if (uVar1 == '\x02') {
    iVar32 = fastfunc::FastDecTimerS32(ZEXT48(piVar10) + 0x24);
    if (iVar32 != 0) {
      moby->state = '\x03';
      pCVar30 = Cuboids;
      draw::LetterBoxOn = 1;
      draw::LetterBoxPixels = 0x12;
      iVar32 = piVar10[5];
      *(float *)(puVar13 + 0xe) = Cuboids[iVar32].pos.x;
      *(float *)((int)puVar13 + 0x74) = pCVar30[iVar32].pos.y;
      *(float *)(puVar13 + 0xf) = pCVar30[iVar32].pos.z;
      *(float *)((int)puVar13 + 0x7c) = pCVar30[iVar32].pos.w;
      *(float *)(puVar13 + 0x10) = pCVar30[iVar32].rot.x;
      *(float *)((int)puVar13 + 0x84) = pCVar30[iVar32].rot.y;
      *(float *)(puVar13 + 0x11) = pCVar30[iVar32].rot.z;
      *(float *)((int)puVar13 + 0x8c) = pCVar30[iVar32].rot.w;
      puVar13[0x1c] = (longlong)(int)(animationSpeed * 300.5);
      camera::SetCameraPosition
                (uVar31 - 0x120,uVar31 - 0x110,1,*(undefined4 *)((int)puVar13 + 0xe4),0);
      camera::camera5::Camera_SetCurrentAccel(0.001,1.0,1.0,0.001,1.0,1.0);
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar31 - 0x120));
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar31 - 0x110));
      fVar2 = 0.0;
      iVar32 = piVar10[4];
      piVar10[6] = 0;
      pCVar30 = Cuboids;
      fVar4 = (moby->pos).x - Cuboids[iVar32].pos.x;
      fVar5 = (moby->pos).y - Cuboids[iVar32].pos.y;
      fVar3 = ABS(fVar4);
      fVar8 = ABS(fVar5);
      *(float *)(puVar13 + 0x16) = fVar4;
      *(float *)((int)puVar13 + 0xb4) = fVar5;
      *(float *)(puVar13 + 0x17) = fVar3 - fVar8;
      uVar37 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar4 = fVar8;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar37 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar37 << 2) | 0x735900) + 4);
      if (0.0 < fVar4) {
        lVar33 = uVar31 - 0x180;
        lVar35 = uVar31 - 0xd4;
        lVar38 = uVar31 - 0xc4;
        lVar39 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x19) = fVar4;
        *(float *)(puVar13 + 0x18) = fVar4;
        *(float *)((int)puVar13 + 0xc4) = fVar4;
        *(float *)((int)puVar13 + 0xbc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar5;
        *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar4;
        *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar33 + 0xbc) = *(float *)((int)lVar33 + 0xac) * fVar4 * fVar4;
          iVar14 = (int)lVar35;
          lVar33 = lVar33 + 8;
          lVar35 = lVar35 + 8;
          *(float *)((int)lVar38 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
          lVar38 = lVar38 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar39 = 4;
        lVar38 = uVar31 - 0xd4;
        pfVar36 = (float *)&DAT_007358e0;
        lVar33 = lVar34;
        lVar35 = lVar38;
        do {
          fVar4 = *pfVar36;
          fVar5 = pfVar36[1];
          pfVar36 = pfVar36 + 2;
          *(float *)((int)lVar33 + 0xbc) = *(float *)((int)lVar33 + 0xbc) * fVar4;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar35 + 4) = *(float *)((int)lVar35 + 4) * fVar5;
          lVar35 = lVar35 + 8;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        lVar33 = 2;
        do {
          iVar14 = (int)lVar34;
          iVar15 = (int)lVar38;
          lVar34 = lVar34 + 0x10;
          lVar38 = lVar38 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar14 + 0xbc) + *(float *)(iVar15 + 4) +
                  *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
      pCVar30[iVar32].rot.z = fVar2;
      hero::Hero_Warp(&pCVar30[piVar10[4]].pos.x,&pCVar30[piVar10[4]].rot.x,0x72,0);
    }
    if (piVar10[9] < DAT_007580f0) {
      dVar40 = (double)fastfunc::FastIntToDouble(piVar10[9]);
      puVar13[0x1c] = (longlong)DAT_007580f0;
      boot::SceneScreenFade = 1.0 - (float)(dVar40 / (double)(longlong)puVar13[0x1c]);
    }
  }
  else if (uVar1 == '\x01') {
    if (((-1 < piVar10[2]) && (MobyInstance[piVar10[2]].setByGroup != '\0')) || (piVar10[8] == -1))
    {
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if (32.0 <= SQRT(fVar4 * fVar4 + fVar2 * fVar2)) {
        mobyupdate_helpers::M1083_001b9a20
                  (moby,(ulonglong)(LZCOUNT(piVar10[8] + 1) << 0x20) >> 0x25 ^ 1);
        moby->state = '\x04';
      }
      else {
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        moby->state = '\x02';
        auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar41 = loadVectorLeftIndexed(4,0x1b9d2c);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                             auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar12 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x24,
                            ZEXT48(piVar10));
        *(undefined4 *)((uint)(piVar10 + 9) & 0xfffffffc) = uVar12;
      }
    }
  }
  else if (uVar1 == '\0') {
    piVar10[1] = 1;
    moby->state = '\x01';
  }
  if (piVar10[1] == 0) {
    if (*piVar10 == 0) {
      RegisterFuncForMoby(&PTR_M1089_001ba9c0_00708a90,moby);
    }
    else {
      RegisterFuncForMoby(&PTR_M1089_001ba794_00708a88,moby);
    }
  }
  else if (*piVar10 == 0) {
    RegisterFuncForMoby(&PTR_M1089_001bafc0_00708aa0,moby);
  }
  else {
    RegisterFuncForMoby(&PTR_M1089_001babf8_00708a98,moby);
  }
  return;
}



//==== 001ba794  ns=mobyupdate_helpers  size=0x22c
// sig: undefined M1089_001ba794(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1089_001ba794(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong unaff_r25;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x180);
  *puVar3 = uVar6;
  puVar3[0x32] = in_LR;
  uVar1 = DAT_00763a48;
  puVar3[0x2f] = unaff_r31;
  puVar3[0x2e] = unaff_r30;
  puVar3[0x2d] = unaff_r29;
  puVar3[0x2c] = unaff_r28;
  puVar3[0x2b] = unaff_r27;
  puVar3[0x2a] = unaff_r26;
  puVar3[0x29] = unaff_r25;
  uVar7 = draw::GetEffectTex(uVar1);
  puVar3[0x25] = uVar7;
  uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar3[0x27] = uVar7;
  fastfunc::FastMtx4Identity((float *)(puVar3 + 0xe));
  *(undefined4 *)(puVar3 + 0x15) = DAT_007580f8;
  uVar1 = DAT_00763a50;
  iVar13 = 0;
  *(undefined4 *)((int)puVar3 + 0xfc) = DAT_00763a50;
  *(undefined4 *)(puVar3 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xf4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e) = uVar1;
  psVar14 = &DAT_00758700;
  psVar15 = &DAT_00758702;
  do {
    lVar10 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar12 = uVar6 - 0x180;
    psVar9 = psVar14;
    psVar8 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar9 << 4);
      psVar9 = psVar9 + 2;
      sVar2 = *psVar8;
      psVar8 = psVar8 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar11 = (float *)lVar10;
      *pfVar11 = *(float *)(iVar5 + 0x758100) * DAT_00763a58;
      pfVar11[1] = *(float *)(iVar5 + 0x758104) * DAT_00763a58;
      pfVar11[2] = *(float *)(iVar5 + 0x758108) * DAT_00763a58;
      pfVar11[3] = *(float *)(iVar5 + 0x75810c);
      lVar10 = lVar10 + 0x10;
      uVar1 = *(undefined4 *)(iVar4 + 0x758b04);
      *(undefined4 *)((int)lVar12 + 0x100) = *(undefined4 *)(iVar4 + 0x758b00);
      *(undefined4 *)((int)lVar12 + 0x104) = uVar1;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    draw::FastDrawQuad(uVar6 - 0xd0,uVar6 - 0x110,0,EffectTexHeaders,9);
    iVar13 = iVar13 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar13 < 0x40);
  return;
}



//==== 001ba9c0  ns=mobyupdate_helpers  size=0x22c
// sig: undefined M1089_001ba9c0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1089_001ba9c0(void)

{
  undefined4 uVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong unaff_r25;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar14;
  ulonglong unaff_r31;
  short *psVar15;
  ulonglong in_LR;
  longlong lVar16;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar6 - 0x180);
  *puVar3 = uVar6;
  puVar3[0x32] = in_LR;
  uVar1 = DAT_00763a48;
  puVar3[0x2f] = unaff_r31;
  puVar3[0x2e] = unaff_r30;
  puVar3[0x2d] = unaff_r29;
  puVar3[0x2c] = unaff_r28;
  puVar3[0x2b] = unaff_r27;
  puVar3[0x2a] = unaff_r26;
  puVar3[0x29] = unaff_r25;
  uVar7 = draw::GetEffectTex(uVar1);
  puVar3[0x25] = uVar7;
  uVar7 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x26] = uVar7;
  uVar7 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x24] = uVar7;
  uVar7 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar3[0x27] = uVar7;
  fastfunc::FastMtx4Identity((float *)(puVar3 + 0xe));
  *(undefined4 *)(puVar3 + 0x15) = DAT_007580f8;
  uVar1 = DAT_00763a50;
  iVar13 = 0;
  *(undefined4 *)((int)puVar3 + 0xfc) = DAT_00763a50;
  *(undefined4 *)(puVar3 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar3 + 0xf4) = uVar1;
  *(undefined4 *)(puVar3 + 0x1e) = uVar1;
  psVar14 = &DAT_0075ab80;
  psVar15 = &DAT_0075ab82;
  do {
    lVar10 = uVar6 - 0xd0;
    lVar16 = 4;
    lVar12 = uVar6 - 0x180;
    psVar9 = psVar14;
    psVar8 = psVar15;
    do {
      iVar5 = (int)((longlong)*psVar9 << 4);
      psVar9 = psVar9 + 2;
      sVar2 = *psVar8;
      psVar8 = psVar8 + 2;
      iVar4 = (int)((longlong)sVar2 << 3);
      pfVar11 = (float *)lVar10;
      *pfVar11 = *(float *)(iVar5 + 0x75a580) * DAT_00763a58;
      pfVar11[1] = *(float *)(iVar5 + 0x75a584) * DAT_00763a58;
      pfVar11[2] = *(float *)(iVar5 + 0x75a588) * DAT_00763a58;
      pfVar11[3] = *(float *)(iVar5 + 0x75a58c);
      lVar10 = lVar10 + 0x10;
      uVar1 = *(undefined4 *)(iVar4 + 0x75af84);
      *(undefined4 *)((int)lVar12 + 0x100) = *(undefined4 *)(iVar4 + 0x75af80);
      *(undefined4 *)((int)lVar12 + 0x104) = uVar1;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    draw::FastDrawQuad(uVar6 - 0xd0,uVar6 - 0x110,0,EffectTexHeaders,9);
    iVar13 = iVar13 + 1;
    psVar14 = psVar14 + 8;
    psVar15 = psVar15 + 8;
  } while (iVar13 < 0x40);
  return;
}



//==== 001babf8  ns=mobyupdate_helpers  size=0x3b8
// sig: undefined M1089_001babf8(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1089_001babf8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  short *psVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar13 - 0x180);
  *puVar6 = uVar13;
  puVar6[0x32] = in_LR;
  puVar6[0x2a] = in_f26;
  puVar6[0x2b] = in_f27;
  puVar6[0x2c] = in_f28;
  puVar6[0x2d] = in_f29;
  puVar6[0x2e] = in_f30;
  puVar6[0x2f] = in_f31;
  uVar5 = DAT_00763a48;
  puVar6[0x29] = unaff_r31;
  puVar6[0x28] = unaff_r30;
  uVar14 = draw::GetEffectTex(uVar5);
  puVar6[0x25] = uVar14;
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar6[0x27] = uVar14;
  fastfunc::FastMtx4Identity((float *)(puVar6 + 0xe));
  uVar5 = DAT_00763a50;
  fVar4 = DAT_007580f8;
  iVar20 = 0;
  iVar21 = 0;
  *(float *)(puVar6 + 0x15) = DAT_007580f8;
  *(undefined4 *)((int)puVar6 + 0xfc) = uVar5;
  *(undefined4 *)(puVar6 + 0x1f) = uVar5;
  *(undefined4 *)((int)puVar6 + 0xf4) = uVar5;
  *(undefined4 *)(puVar6 + 0x1e) = uVar5;
  do {
    fVar7 = *(float *)((int)&DAT_00760244 + iVar21) * DAT_00763a58;
    fVar8 = *(float *)((int)&DAT_00760240 + iVar21) * DAT_00763a58;
    fVar9 = *(float *)((int)&DAT_00760248 + iVar21) * DAT_00763a58;
    fVar1 = *(float *)((int)&DAT_0076024c + iVar21);
    fVar2 = (*(float *)((int)puVar6 + 0xa4) * fVar1 +
            *(float *)((int)puVar6 + 0x94) * fVar9 +
            *(float *)((int)puVar6 + 0x74) * fVar8 + *(float *)((int)puVar6 + 0x84) * fVar7) -
            GameCamera.posY;
    fVar3 = (*(float *)(puVar6 + 0x14) * fVar1 +
            *(float *)(puVar6 + 0x12) * fVar9 +
            *(float *)(puVar6 + 0xe) * fVar8 + *(float *)(puVar6 + 0x10) * fVar7) - GameCamera.posX;
    fVar1 = (fVar4 * fVar1 +
            *(float *)(puVar6 + 0x13) * fVar9 +
            *(float *)(puVar6 + 0xf) * fVar8 + *(float *)(puVar6 + 0x11) * fVar7) - GameCamera.posZ;
    fVar9 = 0.0;
    fVar10 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar7 = fVar9;
    fVar8 = fVar9;
    if (SQRT(fVar10) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar10);
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar8 = fVar3 * fVar9;
      fVar7 = fVar2 * fVar9;
      fVar9 = fVar1 * fVar9;
    }
    fVar1 = *(float *)((int)&DAT_0075f544 + iVar21);
    fVar2 = *(float *)((int)&DAT_0075f540 + iVar21);
    fVar3 = *(float *)((int)&DAT_0075f548 + iVar21);
    if (fVar9 * (*(float *)(puVar6 + 0x13) * fVar3 +
                *(float *)(puVar6 + 0xf) * fVar2 + *(float *)(puVar6 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar6 + 0x12) * fVar3 +
                *(float *)(puVar6 + 0xe) * fVar2 + *(float *)(puVar6 + 0x10) * fVar1) +
        fVar7 * (*(float *)((int)puVar6 + 0x94) * fVar3 +
                *(float *)((int)puVar6 + 0x74) * fVar2 + *(float *)((int)puVar6 + 0x84) * fVar1) <=
        0.0) {
      psVar16 = (short *)((int)&DAT_0075d100 + iVar21);
      psVar15 = (short *)((int)&DAT_0075d102 + iVar21);
      lVar22 = 4;
      lVar17 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x180;
      do {
        iVar12 = (int)((longlong)*psVar16 << 4);
        psVar16 = psVar16 + 2;
        iVar11 = (int)((longlong)*psVar15 << 3);
        psVar15 = psVar15 + 2;
        pfVar18 = (float *)lVar17;
        *pfVar18 = *(float *)(&DAT_0075ca00 + iVar12) * DAT_00763a58;
        pfVar18[1] = *(float *)(iVar12 + 0x75ca04) * DAT_00763a58;
        pfVar18[2] = *(float *)(iVar12 + 0x75ca08) * DAT_00763a58;
        pfVar18[3] = *(float *)(iVar12 + 0x75ca0c);
        uVar5 = *(undefined4 *)(iVar11 + 0x75d704);
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)((int)lVar19 + 0x100) = *(undefined4 *)(iVar11 + 0x75d700);
        *(undefined4 *)((int)lVar19 + 0x104) = uVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      draw::FastDrawQuad(uVar13 - 0xd0,uVar13 - 0x110,0,EffectTexHeaders,9);
      fVar4 = *(float *)(puVar6 + 0x15);
    }
    iVar20 = iVar20 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar20 < 0x60);
  return;
}



//==== 001bafc0  ns=mobyupdate_helpers  size=0x3b8
// sig: undefined M1089_001bafc0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1089_001bafc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *psVar15;
  short *psVar16;
  longlong lVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong unaff_r30;
  int iVar20;
  ulonglong unaff_r31;
  int iVar21;
  ulonglong in_LR;
  longlong lVar22;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar13 - 0x180);
  *puVar6 = uVar13;
  puVar6[0x32] = in_LR;
  puVar6[0x2a] = in_f26;
  puVar6[0x2b] = in_f27;
  puVar6[0x2c] = in_f28;
  puVar6[0x2d] = in_f29;
  puVar6[0x2e] = in_f30;
  puVar6[0x2f] = in_f31;
  uVar5 = DAT_00763a48;
  puVar6[0x29] = unaff_r31;
  puVar6[0x28] = unaff_r30;
  uVar14 = draw::GetEffectTex(uVar5);
  puVar6[0x25] = uVar14;
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00eef998,DAT_00763a40,DAT_00eef99c,DAT_00763a44,DAT_00763a4c);
  puVar6[0x27] = uVar14;
  fastfunc::FastMtx4Identity((float *)(puVar6 + 0xe));
  uVar5 = DAT_00763a50;
  fVar4 = DAT_007580f8;
  iVar20 = 0;
  iVar21 = 0;
  *(float *)(puVar6 + 0x15) = DAT_007580f8;
  *(undefined4 *)((int)puVar6 + 0xfc) = uVar5;
  *(undefined4 *)(puVar6 + 0x1f) = uVar5;
  *(undefined4 *)((int)puVar6 + 0xf4) = uVar5;
  *(undefined4 *)(puVar6 + 0x1e) = uVar5;
  do {
    fVar7 = *(float *)((int)&DAT_00763444 + iVar21) * DAT_00763a58;
    fVar8 = *(float *)((int)&DAT_00763440 + iVar21) * DAT_00763a58;
    fVar9 = *(float *)((int)&DAT_00763448 + iVar21) * DAT_00763a58;
    fVar1 = *(float *)((int)&DAT_0076344c + iVar21);
    fVar2 = (*(float *)((int)puVar6 + 0xa4) * fVar1 +
            *(float *)((int)puVar6 + 0x94) * fVar9 +
            *(float *)((int)puVar6 + 0x74) * fVar8 + *(float *)((int)puVar6 + 0x84) * fVar7) -
            GameCamera.posY;
    fVar3 = (*(float *)(puVar6 + 0x14) * fVar1 +
            *(float *)(puVar6 + 0x12) * fVar9 +
            *(float *)(puVar6 + 0xe) * fVar8 + *(float *)(puVar6 + 0x10) * fVar7) - GameCamera.posX;
    fVar1 = (fVar4 * fVar1 +
            *(float *)(puVar6 + 0x13) * fVar9 +
            *(float *)(puVar6 + 0xf) * fVar8 + *(float *)(puVar6 + 0x11) * fVar7) - GameCamera.posZ;
    fVar9 = 0.0;
    fVar10 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar7 = fVar9;
    fVar8 = fVar9;
    if (SQRT(fVar10) != 0.0) {
      fVar9 = 1.0 / SQRT(fVar10);
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar9 = -(fVar10 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
      fVar8 = fVar3 * fVar9;
      fVar7 = fVar2 * fVar9;
      fVar9 = fVar1 * fVar9;
    }
    fVar1 = *(float *)((int)&DAT_00762744 + iVar21);
    fVar2 = *(float *)((int)&DAT_00762740 + iVar21);
    fVar3 = *(float *)((int)&DAT_00762748 + iVar21);
    if (fVar9 * (*(float *)(puVar6 + 0x13) * fVar3 +
                *(float *)(puVar6 + 0xf) * fVar2 + *(float *)(puVar6 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar6 + 0x12) * fVar3 +
                *(float *)(puVar6 + 0xe) * fVar2 + *(float *)(puVar6 + 0x10) * fVar1) +
        fVar7 * (*(float *)((int)puVar6 + 0x94) * fVar3 +
                *(float *)((int)puVar6 + 0x74) * fVar2 + *(float *)((int)puVar6 + 0x84) * fVar1) <=
        0.0) {
      psVar16 = (short *)((int)&DAT_00760f40 + iVar21);
      psVar15 = (short *)((int)&DAT_00760f42 + iVar21);
      lVar22 = 4;
      lVar17 = uVar13 - 0xd0;
      lVar19 = uVar13 - 0x180;
      do {
        iVar12 = (int)((longlong)*psVar16 << 4);
        psVar16 = psVar16 + 2;
        iVar11 = (int)((longlong)*psVar15 << 3);
        psVar15 = psVar15 + 2;
        pfVar18 = (float *)lVar17;
        *pfVar18 = *(float *)(&DAT_00760840 + iVar12) * DAT_00763a58;
        pfVar18[1] = *(float *)(iVar12 + 0x760844) * DAT_00763a58;
        pfVar18[2] = *(float *)(iVar12 + 0x760848) * DAT_00763a58;
        pfVar18[3] = *(float *)(iVar12 + 0x76084c);
        uVar5 = *(undefined4 *)(iVar11 + 0x761544);
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)((int)lVar19 + 0x100) = *(undefined4 *)(iVar11 + 0x761540);
        *(undefined4 *)((int)lVar19 + 0x104) = uVar5;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      draw::FastDrawQuad(uVar13 - 0xd0,uVar13 - 0x110,0,EffectTexHeaders,9);
      fVar4 = *(float *)(puVar6 + 0x15);
    }
    iVar20 = iVar20 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar20 < 0x60);
  return;
}



//==== 001bb378  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1089_001bb378(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1089_001bb378(void)

{
  DAT_00763ab0 = 0x10000;
  return;
}



//==== 001bb398  ns=mobyupdate_unsorted  size=0x128
// sig: undefined UpdateMoby_a_lot_16(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 00502578 fastfunc::FastWrapRot

/* Moby 1085
   Moby 1086
   Moby 1087
   Moby 1088
   Moby 1089 */

void mobyupdate_unsorted::UpdateMoby_a_lot_16(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  double dVar6;
  
  pfVar4 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_00763ae0;
  pfVar4[2] = -(DAT_0071f418 * 15.0 - pfVar4[2]);
  fVar1 = (moby->rotation).x;
  fVar2 = (moby->rotation).y;
  (moby->pos).x = (moby->pos).x + *pfVar4;
  fVar3 = (moby->rotation).z;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  fVar1 = fVar1 + pfVar4[4];
  (moby->rotation).x = fVar1;
  (moby->rotation).y = fVar2 + pfVar4[5];
  (moby->rotation).z = fVar3 + pfVar4[6];
  dVar6 = (double)fastfunc::FastWrapRot(fVar1,pfVar4[4]);
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar4[5]);
  (moby->rotation).y = (float)dVar6;
  dVar6 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar4[6]);
  cVar5 = moby->setByGroup;
  (moby->rotation).z = (float)dVar6;
  cVar5 = cVar5 + -1;
  moby->setByGroup = cVar5;
  if (cVar5 == '\0') {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001bb4e0  ns=mobyupdate_helpers  size=0x1e4
// sig: undefined M1089_001bb4e0(void)
// callers(3): 001afa30 mobyupdate_helpers::M1068_001afa30; 001b9a20 mobyupdate_helpers::M1083_001b9a20; 00338568 mobyupdate_helpers::M303_00338568
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
mobyupdate_helpers::M1089_001bb4e0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  float fVar2;
  MOBY_OCLASSES oClass;
  MobyInstance *pMVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  mobyutil::MB_randRangeFloat(1085.0,1089.0);
  oClass = fastfunc::FastDoubleToInt();
  pMVar3 = mobyfunc::CreateMoby(oClass);
  if (pMVar3 != (MobyInstance *)0x0) {
    fVar2 = pMVar3->pClass->gScale * DAT_00763ae0;
    puVar1 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    fStack00000044 = (f32)param_3;
    pMVar3->drawDistance = 0x7e;
    pMVar3->enabled = '\x01';
    (pMVar3->pos).y = fStack00000044;
    fStack0000004c = (f32)param_4;
    uStack00000054 = (undefined4)param_5;
    (pMVar3->pos).w = fStack0000004c;
    pMVar3->scale = fVar2;
    uStack0000005c = (undefined4)param_6;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    puVar1[1] = uStack00000054;
    *puVar1 = uStack00000050;
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    puVar1[3] = uStack0000005c;
    puVar1[2] = uStack00000058;
    dVar8 = -360.0;
    dVar7 = 360.0;
    dVar5 = (double)mobyutil::MB_randRangeFloat(-360.0,360.0);
    dVar6 = 0.01745329238474369;
    puVar1[4] = (float)(dVar5 * 0.01745329238474369) * mobyutil::g_FrameTime;
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    puVar1[5] = (float)(dVar5 * dVar6) * mobyutil::g_FrameTime;
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar7);
    puVar1[6] = (float)(dVar5 * dVar6) * mobyutil::g_FrameTime;
    dVar5 = (double)mobyutil::MB_randRangeFloat(60.0,120.0);
    cVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
    pMVar3->setByGroup = cVar4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 001bb6f0  ns=mobyupdate_helpers  size=0xc8
// sig: undefined M109_001bb6f0(void)
// callers(1): 001bb9c0 mobyupdate_unsorted::UpdateMoby_109
// callees(2): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M109_001bb6f0
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
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
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)fastfunc::FastDiffRots(param_2,param_1);
  fastfunc::FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}



//==== 001bb7e0  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M109_001bb7e0(void)
// callers(1): 001bb9c0 mobyupdate_unsorted::UpdateMoby_109
// callees(0): 

void mobyupdate_helpers::M109_001bb7e0
               (double param_1,double param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_5[1];
  fVar2 = param_4[1];
  fVar3 = param_5[2];
  fVar4 = param_4[2];
  fVar5 = (float)(param_1 / param_2) * 3.1415925 + 1.5707963;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  fVar5 = (fVar5 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7 + 1.0)
          * 0.5;
  *(float *)(param_3 + 0x10) = (*param_5 - *param_4) * fVar5 + *param_4;
  *(float *)(param_3 + 0x14) = (fVar1 - fVar2) * fVar5 + param_4[1];
  *(float *)(param_3 + 0x18) = (fVar3 - fVar4) * fVar5 + param_4[2];
  *(float *)(param_3 + 0x1c) = param_4[3];
  return;
}



//==== 001bb8c8  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M1089_001bb8c8(void)
// callers(0): 
// callees(2): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage

void mobyupdate_helpers::M1089_001bb8c8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  double dVar3;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  dVar3 = 0.0;
  local_1c = 0.0;
  uVar2 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,uVar2,ZEXT48(pvVar1) + 0x20,0,&local_20,&local_1c,0,4);
  if (((local_20 != 1) && (param_1->state != '\t' && param_1->state != '\b')) &&
     (local_1c = *(float *)((int)pvVar1 + 0x20) - local_1c,
     *(float *)((int)pvVar1 + 0x20) = local_1c, (double)local_1c <= dVar3)) {
    param_1->state = '\b';
  }
  param_1->damage = -1;
  return;
}



//==== 001bb9c0  ns=mobyupdate_unsorted  size=0x6c0
// sig: undefined UpdateMoby_109(MobyInstance * moby)
// callers(0): 
// callees(8): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001bb6f0 mobyupdate_helpers::M109_001bb6f0; 001bb7e0 mobyupdate_helpers::M109_001bb7e0; 004fff60 fastfunc::FastDecTimerS32

/* Moby 109 */

void mobyupdate_unsorted::UpdateMoby_109(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  MobyClass *pMVar4;
  u16 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 local_60 [16];
  int local_50;
  float local_4c;
  longlong local_48;
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  dVar10 = 0.0;
  local_4c = 0.0;
  uVar7 = mobyutil::MB_damage(moby,0x330000,0);
  mobyutil::MB_HandleDamage(moby,uVar7,uVar9 + 0x20,0,&local_50,&local_4c,0,4);
  if (((local_50 != 1) && (moby->state != '\t' && moby->state != '\b')) &&
     (fVar15 = *(float *)((int)pvVar3 + 0x20) - local_4c, *(float *)((int)pvVar3 + 0x20) = fVar15,
     (double)fVar15 <= dVar10)) {
    moby->state = '\b';
  }
  moby->damage = -1;
  bVar1 = moby->state;
  uVar6 = ZEXT48(Splines[*(int *)((int)pvVar3 + 0x70)]);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        fVar2 = (moby->pos).x;
        moby->state = '\x01';
        *(f32 *)((int)pvVar3 + 0x90) = fVar2;
        *(f32 *)((int)pvVar3 + 0x94) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x98) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x9c) = (moby->pos).w;
        *(f32 *)((int)pvVar3 + 0x9c) = (moby->rotation).z;
      }
      else {
        iVar8 = mobyutil::MB_IsPntInCuboid
                          ((Vec4 *)&hero::g_heroCGPos,(longlong)*(int *)((int)pvVar3 + 0x88));
        if (iVar8 != 0) {
          auVar12 = ZEXT416(0xffffffff);
          auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
          auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
          moby->state = '\x02';
          auVar12 = loadVectorLeftIndexed(0x78,uVar9);
          auVar11 = loadVectorRightIndexed(0x88,uVar9);
          auVar11 = vectorConvertFromSignedFixedPointWord(auVar12 | auVar11,0);
          auVar12 = loadVectorLeftIndexed(8,0x1bb998);
          auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar12 = vectorAddFloatingPoint
                              (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60
                              );
          auVar12 = vectorMultiplyAddFloatingPoint(auVar14,auVar12,auVar13);
          auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
          auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,
                             uVar9);
          *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
        }
      }
    }
    else if (bVar1 < 3) {
      iVar8 = fastfunc::FastDecTimerS32(uVar9 + 0xa4);
      if (iVar8 != 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        moby->state = '\x03';
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else if (bVar1 < 4) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      mobyupdate_helpers::M109_001bb7e0
                ((double)local_48,(double)(longlong)(animationSpeed * 30.5),moby,uVar9 + 0x90,
                 uVar6 + 0x10);
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        *(f32 *)((int)pvVar3 + 0xa8) = (moby->rotation).z;
        moby->state = '\x06';
        auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar11,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar13);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      if (*(int *)((int)pvVar3 + 0xa0) == 0) {
        mobyupdate_helpers::M109_001bb7e0
                  ((double)local_48,(double)(longlong)(animationSpeed * 120.5),moby,uVar6 + 0x10,
                   uVar6 + 0x20);
      }
      else {
        mobyupdate_helpers::M109_001bb7e0
                  ((double)local_48,(double)(longlong)(animationSpeed * 120.5),moby,uVar6 + 0x20,
                   uVar6 + 0x10);
      }
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar12 = ZEXT416(0xffffffff);
        auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        *(uint *)((int)pvVar3 + 0xa0) = *(int *)((int)pvVar3 + 0xa0) + 1U & 1;
        moby->state = '\x06';
        auVar12 = loadVectorLeftIndexed(0xc,0x1bb998);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint
                            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                             auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
        *(f32 *)((int)pvVar3 + 0xa8) = (moby->rotation).z;
      }
    }
  }
  else if (bVar1 == 10) {
    fVar15 = mobyutil::Delt(*(float *)((int)pvVar3 + 0x98),mobyutil::g_FrameTime * 2.0,
                            &(moby->pos).z);
    if ((double)fVar15 == dVar10) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 == 9) {
    if (*(int *)((int)pvVar3 + 0x74) != 0) {
      *(int *)((int)pvVar3 + 0x74) = *(int *)((int)pvVar3 + 0x74) + -1;
      (moby->pos).x = *(f32 *)((int)pvVar3 + 0x90);
      (moby->pos).y = *(f32 *)((int)pvVar3 + 0x94);
      fVar15 = *(float *)((int)pvVar3 + 0x98);
      (moby->pos).z = fVar15;
      (moby->pos).w = *(f32 *)((int)pvVar3 + 0x9c);
      (moby->rotation).z = *(f32 *)((int)pvVar3 + 0x9c);
      pMVar4 = moby->pClass;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      (moby->pos).z = fVar15 - 3.0;
      *(undefined4 *)((int)pvVar3 + 0xa0) = 0;
      moby->enabled = '\x01';
      puVar5 = pMVar4->collision;
      moby->state = '\n';
      moby->collision = puVar5;
    }
  }
  else if (bVar1 == 8) {
    mobyutil::MB_genericExplosion
              (dVar10,dVar10,0x3ff0000000000000,0x3fe0000000000000,0x3ff0000000000000,
               0x3fe0000000000000,0x401c000000000000,moby,&DAT_00a15d30,local_60,&DAT_001bb998,7,7,
               10,0x14);
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->state = '\t';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else {
    auVar12 = loadVectorLeftIndexed(4,0x1bb998);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    if (bVar1 == 7) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      if (iVar8 == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        moby->state = '\x04';
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
    else if (bVar1 == 6) {
      iVar8 = *(int *)((int)pvVar3 + 0xa4) + -1;
      local_48 = (longlong)iVar8;
      *(int *)((int)pvVar3 + 0xa4) = iVar8;
      dVar10 = (double)mobyupdate_helpers::M109_001bb6f0
                                 ((double)*(float *)((int)pvVar3 + 0xa8),
                                  (double)Cuboids[*(int *)((int)pvVar3 +
                                                          *(int *)((int)pvVar3 + 0xa0) * 4 + 0x80)].
                                          rot.z,(double)local_48,
                                  (double)(longlong)(animationSpeed * 30.5),moby);
      (moby->rotation).z = (float)dVar10;
      if (*(int *)((int)pvVar3 + 0xa4) == 0) {
        auVar11 = ZEXT416(0xffffffff);
        auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        moby->state = '\a';
        auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar11);
        auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
        auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xa4,uVar9)
        ;
        *(undefined4 *)((int)pvVar3 + 0xa4U & 0xfffffffc) = uVar7;
      }
    }
  }
  return;
}



//==== 001bc080  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1090_001bc080(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1090_001bc080(void)

{
  DAT_00763b30 = 0x10000;
  return;
}



//==== 001bc0b0  ns=Global  size=0x180
// sig: undefined FUN_001bc0b0(void)
// callers(1): 004c70d0 mobyupdate_unsorted::UpdateMoby_947
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00127ea8 partupd::SpawnPart_26; 00502758 fastfunc::FastDoubleToInt

MobyInstance *
FUN_001bc0b0(double param_1,double param_2,double param_3,undefined4 param_4,f32 *param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  pMVar2 = mobyfunc::CreateMoby(0x442);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->alpha = '@';
    puVar1 = (undefined4 *)pMVar2->pVar;
    (pMVar2->pos).x = *param_5;
    (pMVar2->pos).y = param_5[1];
    (pMVar2->pos).z = param_5[2];
    (pMVar2->pos).w = param_5[3];
    mobyfunc::SetColorOfMoby(pMVar2,0x7f,0x40,0);
    *puVar1 = param_6;
    puVar1[1] = (float)param_1;
    puVar1[2] = (float)param_2;
    puVar1[3] = (float)param_3;
    puVar1[4] = param_4;
    dVar7 = 5.0;
    dVar6 = 10.0;
    uVar3 = fastfunc::FastDoubleToInt((double)(10.0 / (mobyutil::g_FrameTime * 5.0)));
    puVar1[5] = uVar3;
    dVar4 = (double)mobyutil::MB_randRangeFloat(0.999,0.97);
    puVar1[6] = (float)dVar4;
    uVar5 = 0x40fec30020000000;
    fastfunc::FastDoubleToInt
              ((double)(float)(dVar6 / (double)(float)((double)mobyutil::g_FrameTime * dVar7)),
               0x40fec30020000000);
    partupd::SpawnPart_26(uVar5,pMVar2);
  }
  return pMVar2;
}



//==== 001bc250  ns=mobyupdate_unsorted  size=0x304
// sig: undefined UpdateMoby_1090(MobyInstance * moby)
// callers(0): 
// callees(8): 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 00107860 mobyutil::MB_DamageMobyList; 001150f8 mobyutil::MB_PathPosAtDist; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1090 */

void mobyupdate_unsorted::UpdateMoby_1090(MobyInstance *moby)

{
  float fVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  uint uVar7;
  MobyClass *pMVar8;
  undefined8 uVar5;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  
  puVar2 = (undefined4 *)moby->pVar;
  fVar1 = (float)puVar2[1] + (float)puVar2[2];
  puVar2[1] = fVar1;
  uVar11 = 0x3ff0000000000000;
  puVar2[2] = (float)puVar2[2] * (((float)puVar2[6] - 1.0) * DAT_0071f408 + 1.0);
  mobyutil::MB_PathPosAtDist
            ((double)fVar1,(double)(float)puVar2[3],&DAT_001bc230,&DAT_00720000,*puVar2,auStack_50,
             auStack_4c,(longlong)(int)moby + 0x10);
  dVar9 = (double)mobyutil::MB_randRot();
  (moby->rotation).x = (float)dVar9;
  dVar9 = (double)mobyutil::MB_randRot();
  (moby->rotation).y = (float)dVar9;
  dVar9 = (double)mobyutil::MB_randRot();
  (moby->rotation).z = (float)dVar9;
  iVar6 = fastfunc::FastDecTimerS32(puVar2 + 5);
  if (iVar6 == 0) {
    dVar12 = 5.0;
    dVar13 = 10.0;
    iVar6 = puVar2[5];
    uVar7 = fastfunc::FastDoubleToInt((double)(10.0 / (mobyutil::g_FrameTime * 5.0)));
    dVar9 = 0.5;
    if (iVar6 < (int)(((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0))) {
      uVar7 = fastfunc::FastDoubleToInt
                        ((double)(float)(dVar13 / (double)(float)((double)mobyutil::g_FrameTime *
                                                                 dVar12)));
      dVar12 = (double)fastfunc::FastIntToDouble
                                 (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0));
      dVar13 = (double)fastfunc::FastIntToDouble(puVar2[5]);
      pMVar8 = moby->pClass;
      fVar1 = (float)((double)(float)((double)(float)((double)pMVar8->gScale * dVar13) / dVar12) *
                     dVar9);
      moby->scale = fVar1;
    }
    else {
      iVar6 = puVar2[5];
      uVar7 = fastfunc::FastDoubleToInt
                        ((double)(float)(dVar13 / (double)(float)((double)mobyutil::g_FrameTime *
                                                                 dVar12)));
      fVar1 = moby->scale;
      pMVar8 = moby->pClass;
      if ((int)((((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * 3) < iVar6) {
        uVar7 = fastfunc::FastDoubleToInt
                          ((double)(float)(dVar13 / (double)(float)((double)mobyutil::g_FrameTime *
                                                                   dVar12)));
        dVar10 = (double)fastfunc::FastIntToDouble
                                   (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0));
        iVar6 = fastfunc::FastDoubleToInt
                          ((double)(float)(dVar13 / (double)(float)((double)mobyutil::g_FrameTime *
                                                                   dVar12)));
        dVar12 = (double)fastfunc::FastIntToDouble(iVar6 - puVar2[5]);
        pMVar8 = moby->pClass;
        fVar1 = (float)((double)(float)((double)(float)((double)pMVar8->gScale * dVar12) / dVar10) *
                       dVar9);
        moby->scale = fVar1;
      }
    }
    if (pMVar8->gScale * 0.25 < fVar1) {
      uVar5 = collproc::CollMobySphere
                        (0x3fc3333340000000,(longlong)(int)moby + 0x10,0x1c0000,0x10,puVar2[4],0);
      uVar3._0_4_ = (moby->pos).x;
      uVar3._4_4_ = (moby->pos).y;
      uVar4._0_4_ = (moby->pos).z;
      uVar4._4_4_ = (moby->pos).w;
      mobyutil::MB_DamageMobyList
                (0x4000000000000000,uVar11,uVar11,puVar2[4],puVar2[4],uVar3,uVar4,&DAT_00a14a00,
                 uVar5,0,&DAT_00810001);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001bc580  ns=mobyupdate_unsorted  size=0x240
// sig: undefined UpdateMoby_a_lot_18(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 00502730 fastfunc::FastIntToDouble

/* Moby 1091
   Moby 1092
   Moby 1093
   Moby 1094
   Moby 1095
   Moby 1096
   Moby 1097
   Moby 1098
   Moby 1103 */

void mobyupdate_unsorted::UpdateMoby_a_lot_18(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  
  pfVar6 = (float *)moby->pVar;
  if (pfVar6 == (float *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    bVar2 = moby->state;
    if (bVar2 == 0) {
      fVar3 = (moby->pos).z;
      moby->updateDistance = -1;
      moby->drawDistance = 0x200;
      pfVar6[3] = fVar3;
      moby->state = '\x01';
    }
    else if (bVar2 < 2) {
      if (g_heroState == MOVEMENT_LOCKED) {
        (moby->pos).z = pfVar6[3];
      }
      else {
        dVar9 = (double)fastfunc::FastIntToDouble(worldUpdateTime % 600);
        fVar3 = (float)(dVar9 * 0.0016666667070239782) * 6.28318;
        fVar4 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar3 = fVar5 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar5;
        fVar8 = fVar3 * fVar4;
        (moby->pos).z =
             DAT_00763b60 *
             (fVar3 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) +
             pfVar6[3];
      }
    }
    else if (bVar2 < 3) {
      fVar3 = *pfVar6;
      uVar7 = (int)pfVar6[3] >> 0x1f;
      if (0x3f800000 < (int)((uVar7 >> 1 ^ (uint)pfVar6[3]) - uVar7)) {
        fVar3 = fVar3 * 0.985;
        *pfVar6 = fVar3;
        pfVar6[1] = pfVar6[1] * 0.985;
        pfVar6[2] = pfVar6[2] * 0.985;
      }
      fVar4 = (moby->rotation).x;
      fVar5 = (moby->rotation).y;
      (moby->pos).x = (moby->pos).x + fVar3;
      fVar3 = (moby->rotation).z;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      bVar1 = g_heroState != MOVEMENT_LOCKED;
      (moby->rotation).x = fVar4 + pfVar6[4];
      (moby->rotation).y = fVar5 + pfVar6[5];
      (moby->rotation).z = fVar3 + pfVar6[6];
      if (bVar1) {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 001bc7c0  ns=mobyupdate_helpers  size=0x50
// sig: undefined M1103_001bc7c0(void)
// callers(1): 001caf98 mobyupdate_helpers::M1109_001caf98
// callees(0): 

void mobyupdate_helpers::M1103_001bc7c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x20) = 2;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = *param_3;
  puVar1[5] = param_3[1];
  puVar1[6] = param_3[2];
  puVar1[7] = param_3[3];
  return;
}



//==== 001bc810  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1103_001bc810(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1103_001bc810(void)

{
  DAT_00763bb0 = 0x10000;
  return;
}



//==== 001bc828  ns=mobyupdate_unsorted  size=0x40
// sig: undefined UpdateMoby_1099(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1099 */

void mobyupdate_unsorted::UpdateMoby_1099(MobyInstance *moby)

{
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}



//==== 001bc8c8  ns=mobyupdate_helpers  size=0xb18
// sig: undefined M1099_001bc8c8(void)
// callers(0): 
// callees(7): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00119028 mobyutil::MB_DrawGlowFX; 00500b64 fastfunc::FastEulerToMtx; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 00763bf8: '@&ff' (raw)

void mobyupdate_helpers::M1099_001bc8c8(undefined8 param_1)

{
  longlong lVar1;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined4 uVar30;
  ulonglong *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined4 uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong unaff_r19;
  int *piVar40;
  ulonglong unaff_r20;
  int *piVar41;
  ulonglong unaff_r21;
  int *piVar42;
  ulonglong unaff_r22;
  int *piVar43;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar44;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar45;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  ulonglong in_f16;
  double dVar53;
  ulonglong in_f17;
  ulonglong in_f18;
  undefined8 uVar54;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar55;
  ulonglong in_f27;
  double dVar56;
  ulonglong in_f28;
  double dVar57;
  ulonglong in_f29;
  double dVar58;
  ulonglong in_f30;
  double dVar59;
  ulonglong in_f31;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  
  uVar38 = ZEXT48(&stack0x00000000);
  lVar1 = uVar38 - 0x330;
  puVar31 = (ulonglong *)lVar1;
  *puVar31 = uVar38;
  puVar31[0x68] = in_LR;
  puVar31[0x56] = in_f16;
  puVar31[0x57] = in_f17;
  puVar31[0x58] = in_f18;
  puVar31[0x59] = in_f19;
  puVar31[0x5a] = in_f20;
  puVar31[0x5b] = in_f21;
  puVar31[0x5c] = in_f22;
  puVar31[0x5d] = in_f23;
  puVar31[0x5e] = in_f24;
  puVar31[0x5f] = in_f25;
  puVar31[0x60] = in_f26;
  puVar31[0x61] = in_f27;
  puVar31[0x62] = in_f28;
  puVar31[99] = in_f29;
  puVar31[100] = in_f30;
  puVar31[0x65] = in_f31;
  puVar31[0x55] = unaff_r31;
  puVar31[0x53] = unaff_r29;
  puVar31[0x54] = unaff_r30;
  *(undefined4 *)(puVar31 + 0xe) = 0;
  iVar32 = (int)param_1;
  iVar44 = *(int *)(iVar32 + 0x78);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  fVar2 = GameCamera.rot.radius;
  puVar31[0x2a] = ZEXT48(&GameCamera);
  *(float *)(puVar31 + 0xf) = fVar2;
  puVar31[0x52] = unaff_r28;
  puVar31[0x51] = unaff_r27;
  puVar31[0x50] = unaff_r26;
  puVar31[0x4f] = unaff_r25;
  puVar31[0x4e] = unaff_r24;
  puVar31[0x4d] = unaff_r23;
  puVar31[0x4c] = unaff_r22;
  puVar31[0x4b] = unaff_r21;
  puVar31[0x4a] = unaff_r20;
  puVar31[0x49] = unaff_r19;
  puVar31[0x2d] = 0;
  fastfunc::FastEulerToMtx(uVar38 - 0x2a0,uVar38 - 0x2c0);
  puVar31[0x2c] = 0x3f847ae140000000;
  DAT_00763d8c = DAT_00763d8c + 0.01;
  dVar46 = (double)DAT_00763d8c;
  puVar31[0x2b] = 0x3ff0000000000000;
  if (1.0 < dVar46) {
    DAT_00763d8c = (float)(dVar46 - (double)puVar31[0x2b]);
  }
  uVar39 = FUN_00502f08(0,0,0,0,0,0);
  puVar31[0x26] = uVar39;
  uVar39 = stub::STUB_00502fd4_RET_0(1,0,0,0,0,0,0);
  puVar31[0x28] = uVar39;
  uVar39 = idol_draw::PackCmd(0,1,0,1,0x40);
  puVar31[0x29] = uVar39;
  uVar39 = draw::GetEffectTex(0x18);
  puVar31[0x27] = uVar39;
  piVar43 = &DAT_00763cdc;
  piVar42 = &DAT_00763ce0;
  piVar41 = &DAT_00763ce4;
  piVar40 = &DAT_00763ce8;
  iVar45 = 0;
  do {
    iVar27 = *piVar43;
    fVar2 = *(float *)(puVar31 + 0x14);
    iVar33 = iVar27 * 0x10;
    fVar3 = *(float *)(puVar31 + 0x12);
    fVar4 = *(float *)((int)puVar31 + 0xa4);
    fVar5 = *(float *)(iVar33 + 0x763be4);
    fVar6 = *(float *)(iVar33 + 0x763be0);
    fVar7 = *(float *)(puVar31 + 0x16);
    fVar8 = *(float *)(iVar33 + 0x763be8);
    fVar9 = *(float *)(puVar31 + 0x15);
    fVar10 = *(float *)((int)puVar31 + 0x94);
    fVar11 = *(float *)(puVar31 + 0x13);
    iVar33 = *piVar42;
    fVar12 = *(float *)((int)puVar31 + 0xb4);
    iVar34 = iVar33 * 0x10;
    fVar13 = *(float *)(puVar31 + 0x17);
    iVar28 = *piVar41;
    iVar35 = iVar28 * 0x10;
    fVar14 = *(float *)(iVar34 + 0x763be4);
    fVar15 = *(float *)(iVar34 + 0x763be0);
    fVar16 = *(float *)(iVar34 + 0x763be8);
    iVar34 = *piVar40;
    fVar17 = *(float *)(iVar32 + 0x10);
    fVar18 = *(float *)(iVar35 + 0x763be0);
    fVar19 = *(float *)(iVar35 + 0x763be4);
    iVar36 = iVar34 * 0x10;
    fVar20 = *(float *)(iVar35 + 0x763be8);
    fVar21 = *(float *)(iVar36 + 0x763be0);
    fVar22 = *(float *)(iVar36 + 0x763be4);
    fVar23 = *(float *)(iVar36 + 0x763be8);
    fVar24 = *(float *)(iVar32 + 0x14);
    fVar25 = *(float *)(iVar32 + 0x18);
    *(float *)(puVar31 + 0x18) =
         (fVar7 * fVar8 + fVar3 * fVar6 + fVar2 * fVar5) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar26 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x19) = fVar25 + fVar13 * fVar8 + fVar11 * fVar6 + fVar9 * fVar5;
    *(float *)((int)puVar31 + 0xc4) =
         (fVar12 * fVar8 + fVar10 * fVar6 + fVar4 * fVar5) * fVar26 + fVar24;
    *(float *)(puVar31 + 0x1a) =
         (fVar7 * fVar16 + fVar3 * fVar15 + fVar2 * fVar14) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar5 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1b) = fVar25 + fVar13 * fVar16 + fVar11 * fVar15 + fVar9 * fVar14;
    *(float *)((int)puVar31 + 0xd4) =
         (fVar12 * fVar16 + fVar10 * fVar15 + fVar4 * fVar14) * fVar5 + fVar24;
    *(float *)(puVar31 + 0x1c) =
         (fVar7 * fVar20 + fVar3 * fVar18 + fVar2 * fVar19) * *(float *)(iVar44 + 0x90) + fVar17;
    fVar5 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1d) = fVar25 + fVar13 * fVar20 + fVar11 * fVar18 + fVar9 * fVar19;
    *(float *)((int)puVar31 + 0xe4) =
         (fVar12 * fVar20 + fVar10 * fVar18 + fVar4 * fVar19) * fVar5 + fVar24;
    fVar8 = DAT_00763d8c;
    fVar5 = *(float *)(iVar44 + 0x90);
    fVar6 = *(float *)(&DAT_00763c74 + iVar27 * 8);
    *(undefined4 *)(puVar31 + 0x20) = *(undefined4 *)(&DAT_00763cb8 + iVar27 * 4);
    *(undefined4 *)((int)puVar31 + 0x104) = *(undefined4 *)(&DAT_00763cb8 + iVar33 * 4);
    uVar30 = *(undefined4 *)(&DAT_00763cb8 + iVar28 * 4);
    *(float *)(puVar31 + 0x1e) = (fVar7 * fVar23 + fVar3 * fVar21 + fVar2 * fVar22) * fVar5 + fVar17
    ;
    fVar2 = *(float *)(iVar44 + 0x90);
    *(float *)(puVar31 + 0x1f) = fVar25 + fVar13 * fVar23 + fVar11 * fVar21 + fVar9 * fVar22;
    fVar3 = *(float *)(&DAT_00763c74 + iVar33 * 8);
    *(undefined4 *)(puVar31 + 0x21) = uVar30;
    *(undefined4 *)((int)puVar31 + 0x10c) = *(undefined4 *)(&DAT_00763cb8 + iVar34 * 4);
    fVar5 = *(float *)(&DAT_00763c74 + iVar28 * 8);
    *(undefined4 *)(puVar31 + 0x22) = *(undefined4 *)(&DAT_00763c70 + iVar27 * 8);
    *(float *)((int)puVar31 + 0x114) = fVar6 + fVar8;
    *(float *)((int)puVar31 + 0xf4) =
         (fVar12 * fVar23 + fVar10 * fVar21 + fVar4 * fVar22) * fVar2 + fVar24;
    fVar2 = *(float *)(&DAT_00763c74 + iVar34 * 8);
    *(undefined4 *)(puVar31 + 0x23) = *(undefined4 *)(&DAT_00763c70 + iVar33 * 8);
    *(float *)((int)puVar31 + 0x11c) = fVar3 + fVar8;
    uVar30 = *(undefined4 *)(&DAT_00763c70 + iVar34 * 8);
    *(undefined4 *)(puVar31 + 0x24) = *(undefined4 *)(&DAT_00763c70 + iVar28 * 8);
    *(undefined4 *)(puVar31 + 0x25) = uVar30;
    *(float *)((int)puVar31 + 0x124) = fVar5 + fVar8;
    uVar30 = EffectTexHeaders;
    *(float *)((int)puVar31 + 300) = fVar2 + fVar8;
    draw::FastDrawQuad(uVar38 - 0x270,0,1,uVar30,9);
    iVar45 = iVar45 + 1;
    piVar43 = piVar43 + 4;
    piVar42 = piVar42 + 4;
    piVar41 = piVar41 + 4;
    piVar40 = piVar40 + 4;
  } while (iVar45 < 4);
  uVar39 = draw::GetEffectTex(0x1b);
  DAT_00763d90 = (float)((double)DAT_00763d90 + (double)puVar31[0x2c]);
  dVar53 = (double)DAT_00763d90;
  puVar31[0x27] = uVar39;
  fVar2 = *(float *)(iVar44 + 0x90);
  dVar46 = dVar53;
  if ((double)puVar31[0x2b] < dVar53) {
    DAT_00763d90 = 0.0;
    dVar46 = (double)puVar31[0x2d];
    dVar53 = 0.0;
  }
  dVar60 = (double)(float)(dVar53 * 1.399999976158142 + 1.100000023841858);
  auVar82 = loadVectorLeftIndexed(0x14,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar83 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  dVar59 = (double)((float)(dVar46 * -1.2000000476837158) * fVar2);
  dVar57 = (double)((float)(dVar53 * -1.2000000476837158) * fVar2);
  uVar30 = *(undefined4 *)((int)puVar31[0x2a] + 0x158);
  *(undefined4 *)(puVar31 + 0xe) = 0;
  dVar58 = (double)((float)(dVar53 * 1.2000000476837158) * fVar2);
  *(undefined4 *)((int)puVar31 + 0x74) = 0;
  dVar56 = (double)(float)(dVar60 - 0.20000000298023224);
  *(undefined4 *)(puVar31 + 0xf) = uVar30;
  fastfunc::FastEulerToMtx(uVar38 - 0x2a0,uVar38 - 0x2c0);
  dVar53 = (double)*(float *)(puVar31 + 0x14);
  dVar47 = (double)*(float *)((int)puVar31 + 0xa4);
  dVar48 = (double)*(float *)(puVar31 + 0x15);
  dVar49 = (double)*(float *)(puVar31 + 0x12);
  dVar50 = (double)*(float *)((int)puVar31 + 0x94);
  dVar51 = (double)*(float *)(puVar31 + 0x13);
  dVar52 = (double)*(float *)(puVar31 + 0x16);
  dVar46 = (double)*(float *)((int)puVar31 + 0xb4);
  dVar55 = (double)*(float *)(puVar31 + 0x17);
  fVar2 = *(float *)(iVar32 + 0x10);
  fVar3 = *(float *)(iVar32 + 0x14);
  fVar4 = *(float *)(iVar32 + 0x18);
  *(float *)(puVar31 + 0x18) =
       fVar2 + (float)(dVar52 * dVar60 +
                      (double)(float)(dVar49 * dVar59 + (double)(float)(dVar53 * dVar59)));
  *(float *)(puVar31 + 0x1a) =
       fVar2 + (float)(dVar52 * dVar56 +
                      (double)(float)(dVar49 * dVar58 + (double)(float)(dVar53 * dVar57)));
  *(float *)((int)puVar31 + 0xc4) =
       fVar3 + (float)(dVar46 * dVar60 +
                      (double)(float)(dVar50 * dVar59 + (double)(float)(dVar47 * dVar59)));
  *(float *)(puVar31 + 0x19) =
       fVar4 + (float)(dVar55 * dVar60 +
                      (double)(float)(dVar51 * dVar59 + (double)(float)(dVar48 * dVar59)));
  *(float *)((int)puVar31 + 0xd4) =
       fVar3 + (float)(dVar46 * dVar56 +
                      (double)(float)(dVar50 * dVar58 + (double)(float)(dVar47 * dVar57)));
  *(float *)(puVar31 + 0x1b) =
       fVar4 + (float)(dVar55 * dVar56 +
                      (double)(float)(dVar51 * dVar58 + (double)(float)(dVar48 * dVar57)));
  *(float *)(puVar31 + 0x1c) =
       fVar2 + (float)(dVar52 * dVar60 +
                      (double)(float)(dVar49 * dVar57 + (double)(float)(dVar53 * dVar58)));
  *(float *)((int)puVar31 + 0xe4) =
       fVar3 + (float)(dVar46 * dVar60 +
                      (double)(float)(dVar50 * dVar57 + (double)(float)(dVar47 * dVar58)));
  *(float *)(puVar31 + 0x1d) =
       fVar4 + (float)(dVar55 * dVar60 +
                      (double)(float)(dVar51 * dVar57 + (double)(float)(dVar48 * dVar58)));
  *(float *)(puVar31 + 0x1e) =
       fVar2 + (float)(dVar52 * dVar56 +
                      (double)(float)(dVar49 * dVar58 + (double)(float)(dVar53 * dVar58)));
  *(float *)((int)puVar31 + 0xf4) =
       fVar3 + (float)(dVar46 * dVar56 +
                      (double)(float)(dVar50 * dVar58 + (double)(float)(dVar47 * dVar58)));
  *(float *)(puVar31 + 0x1f) =
       fVar4 + (float)(dVar55 * dVar56 +
                      (double)(float)(dVar51 * dVar58 + (double)(float)(dVar48 * dVar58)));
  uVar37 = EffectTexHeaders;
  auVar82 = loadVectorLeftIndexed(8,0x1bc868);
  auVar61 = loadVectorLeftIndexed(0x3d90,0x760000);
  auVar62 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar63 = loadVectorLeftIndexed(0x20,0x1bc868);
  auVar82 = ZEXT416(0);
  auVar84 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar63 = auVar63 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar61 = vectorSubtractFloatingPoint
                      (auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60,auVar61);
  auVar82 = ZEXT416(0xffffffff);
  auVar62 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar82 = loadVectorLeftIndexed(0x24,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar67 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar82 = vectorShiftLeftIntegerWord(auVar62,auVar62);
  auVar62 = loadVectorLeftIndexed(0x28,0x1bc868);
  auVar62 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar63 = vectorMultiplyAddFloatingPoint
                      (auVar61,auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60,auVar82
                      );
  auVar82 = ZEXT416(0xfffffff0);
  auVar61 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  auVar64 = vectorRotateLeftIntegerWord(auVar67,auVar61);
  auVar82 = vectorConvertToSignedFixedPointWordSaturate(auVar63,0);
  auVar63 = vectorMultiplySumSignedHalfWordModulo(auVar82,auVar64,auVar84);
  auVar82 = vectorMultiplyOddUnsignedHalfWord(auVar82,auVar67);
  auVar61 = vectorShiftLeftIntegerWord(auVar63,auVar61);
  auVar63._0_4_ = auVar61._0_4_ + auVar82._0_4_;
  auVar63._8_8_ = auVar82._8_8_;
  auVar63._4_4_ = auVar61._4_4_ + auVar82._4_4_;
  auVar82._0_8_ = 0;
  auVar82._8_8_ = auVar63._0_8_;
  auVar82 = (auVar82 << 0x40 | auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60) >>
            0x60 & (undefined1  [16])0xffffffff;
  auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x100,lVar1);
  *(undefined4 *)(puVar31 + 0x20) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x104,lVar1);
  *(undefined4 *)((int)puVar31 + 0x104) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x108,lVar1);
  *(undefined4 *)(puVar31 + 0x21) = uVar30;
  uVar30 = storeVectorElementWordIndexed(auVar82,0x10c,lVar1);
  *(undefined4 *)((int)puVar31 + 0x10c) = uVar30;
  *(undefined4 *)(puVar31 + 0x22) = 0;
  *(undefined4 *)((int)puVar31 + 0x114) = 0;
  *(undefined4 *)(puVar31 + 0x23) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 0x11c) = 0;
  *(undefined4 *)(puVar31 + 0x24) = 0;
  *(undefined4 *)((int)puVar31 + 0x124) = 0x3f800000;
  *(undefined4 *)(puVar31 + 0x25) = 0x3f800000;
  *(undefined4 *)((int)puVar31 + 300) = 0x3f800000;
  draw::FastDrawQuad(uVar38 - 0x270,0,1,uVar37,9);
  auVar62 = loadVectorLeftIndexed(0x2c,0x1bc868);
  auVar61 = loadVectorLeftIndexed(0x30,0x1bc868);
  auVar67 = loadVectorLeftIndexed(0x34,0x1bc868);
  auVar77 = loadVectorLeftIndexed(0x38,0x1bc868);
  auVar81 = loadVectorLeftIndexed(0x3c,0x1bc868);
  auVar80 = loadVectorLeftIndexed(0x40,0x1bc868);
  auVar82 = loadVectorLeftIndexed(0x50,0x1bc868);
  iVar44 = 0;
  auVar79 = loadVectorLeftIndexed(0x44,0x1bc868);
  auVar82 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar78 = loadVectorLeftIndexed(0x48,0x1bc868);
  uVar54 = 0x3fc10ff980000000;
  auVar85 = loadVectorLeftIndexed(0x54,0x1bc868);
  auVar64 = loadVectorLeftIndexed(0x58,0x1bc868);
  auVar62 = auVar62 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar63 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar61 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar61 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar67 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar67 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar77 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar77 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar81 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar81 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar80 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar80 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar79 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar79 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar78 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar78 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar85 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar85 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  auVar62 = auVar64 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar62 = auVar62 | auVar62 << 0x20 | auVar62 << 0x40 | auVar62 << 0x60;
  *(undefined1 (*) [16])(puVar31 + 0x2e) =
       auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
  do {
    auVar64 = vectorConvertFromSignedFixedPointWord(auVar84,0);
    auVar82 = ZEXT416(0xffffffff);
    auVar70 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar65 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar76 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar66 = vectorShiftLeftIntegerWord(auVar65,auVar65);
    auVar82 = ZEXT416(0xffffffff);
    auVar75 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar64 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar64,*(undefined1 (*) [16])(puVar31 + 0x2e),auVar63);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar64 = auVar64 ^ auVar62;
    auVar68 = vectorAddFloatingPoint(auVar64,auVar61);
    auVar82 = vectorSubtractFloatingPoint(auVar67,auVar64);
    auVar69 = vectorSubtractFloatingPoint(auVar77,auVar64);
    auVar71 = vectorSubtractFloatingPoint(auVar67,auVar68);
    auVar73 = vectorCompareGreaterThanFloatingPoint(auVar82,auVar64);
    auVar72 = vectorSubtractFloatingPoint(auVar77,auVar68);
    auVar82 = vectorConditionalSelect(auVar82,auVar64,auVar73);
    auVar70 = vectorShiftLeftIntegerWord(auVar70,auVar70);
    auVar64 = vectorCompareGreaterThanFloatingPoint(auVar82,auVar69);
    auVar64 = vectorConditionalSelect(auVar69,auVar82,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar69 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = vectorCompareGreaterThanFloatingPoint(auVar71,auVar68);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar64,auVar64,auVar66);
    auVar68 = vectorConditionalSelect(auVar71,auVar68,auVar82);
    auVar82 = ZEXT416(0xffffffff);
    auVar73 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar82 = ZEXT416(0xffffffff);
    auVar74 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar71 = vectorShiftLeftIntegerWord(auVar69,auVar69);
    auVar82 = vectorCompareGreaterThanFloatingPoint(auVar68,auVar72);
    auVar73 = vectorShiftLeftIntegerWord(auVar73,auVar73);
    auVar68 = vectorConditionalSelect(auVar72,auVar68,auVar82);
    auVar82 = ZEXT416(0xffffffff);
    auVar69 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar74 = vectorShiftLeftIntegerWord(auVar74,auVar74);
    auVar82 = ZEXT416(0xffffffff);
    auVar72 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorMultiplyAddFloatingPoint(auVar68,auVar68,auVar65);
    auVar82 = vectorShiftLeftIntegerWord(auVar69,auVar69);
    auVar72 = vectorShiftLeftIntegerWord(auVar72,auVar72);
    auVar69 = vectorMultiplyAddFloatingPoint(auVar66,auVar64,auVar82);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar65,auVar68,auVar70);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar66,auVar69,auVar73);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar69,auVar81,auVar64);
    auVar69 = vectorMultiplyAddFloatingPoint(auVar65,auVar82,auVar71);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar82,auVar81,auVar68);
    auVar71 = vectorShiftLeftIntegerWord(auVar76,auVar76);
    auVar70 = vectorShiftLeftIntegerWord(auVar75,auVar75);
    auVar82 = ZEXT416(0xffffffff);
    auVar75 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar74 = vectorMultiplyAddFloatingPoint(auVar66,auVar73,auVar74);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar73,auVar80,auVar64);
    auVar73 = vectorMultiplyAddFloatingPoint(auVar65,auVar69,auVar72);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar69,auVar80,auVar68);
    auVar82 = ZEXT416(0xffffffff);
    auVar72 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar69 = vectorShiftLeftIntegerWord(auVar75,auVar75);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar66,auVar74,auVar71);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar74,auVar79,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar71 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar73,auVar70);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar73,auVar79,auVar68);
    auVar70 = vectorShiftLeftIntegerWord(auVar72,auVar72);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar66,auVar78,auVar64);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar66 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar78,auVar68);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar64 = vectorMultiplyAddFloatingPoint(auVar64,auVar83,auVar70);
    auVar82 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar68 = loadVectorLeftIndexed(0xd0,param_1);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar65,auVar83,auVar69);
    auVar70 = loadVectorLeftIndexed(0xdc,param_1);
    auVar73 = loadVectorLeftIndexed(0xd4,param_1);
    auVar72 = loadVectorLeftIndexed(0xc0,param_1);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar68,auVar64,auVar66);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar70,auVar64,auVar82);
    auVar70 = vectorShiftLeftIntegerWord(auVar71,auVar71);
    auVar82 = ZEXT416(0xffffffff);
    auVar82 = auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60;
    auVar69 = loadVectorLeftIndexed(0xcc,param_1);
    auVar71 = loadVectorLeftIndexed(0xd8,param_1);
    auVar70 = vectorMultiplyAddFloatingPoint(auVar73,auVar64,auVar70);
    auVar82 = vectorShiftLeftIntegerWord(auVar82,auVar82);
    auVar73 = loadVectorLeftIndexed(0xc4,param_1);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar71,auVar64,auVar82);
    auVar74 = loadVectorLeftIndexed(200,param_1);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar72,auVar65,auVar66);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar69,auVar65,auVar68);
    auVar72 = loadVectorLeftIndexed(0xe0,param_1);
    auVar69 = loadVectorLeftIndexed(0xec,param_1);
    auVar71 = loadVectorLeftIndexed(0xe4,param_1);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar73,auVar65,auVar70);
    auVar70 = loadVectorLeftIndexed(0x8c,lVar1);
    auVar73 = loadVectorLeftIndexed(0xe8,param_1);
    uVar29 = *(uint *)(iVar32 + 0x90);
    auVar82 = vectorMultiplyAddFloatingPoint(auVar74,auVar65,auVar82);
    auVar65 = vectorMultiplyAddFloatingPoint(auVar72,auVar85,auVar64);
    auVar66 = vectorMultiplyAddFloatingPoint(auVar69,auVar85,auVar66);
    auVar68 = vectorMultiplyAddFloatingPoint(auVar71,auVar85,auVar68);
    auVar64 = vectorMultiplyAddFloatingPoint(auVar73,auVar85,auVar82);
    auVar82 = vectorAddFloatingPoint(auVar66,auVar70);
    auVar82 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar30 = storeVectorElementWordIndexed
                       (auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60,0x8c,lVar1);
    *(undefined4 *)((int)puVar31 + 0x8c) = uVar30;
    auVar82 = loadVectorLeftIndexed(0x10,param_1);
    auVar66 = loadVectorLeftIndexed(0x14,param_1);
    auVar82 = vectorAddFloatingPoint(auVar65,auVar82);
    auVar66 = vectorAddFloatingPoint(auVar68,auVar66);
    auVar65 = loadVectorLeftIndexed(0x18,param_1);
    auVar65 = vectorAddFloatingPoint(auVar64,auVar65);
    auVar82 = auVar82 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar64 = auVar66 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar65 = auVar65 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar30 = storeVectorElementWordIndexed
                       (auVar82 | auVar82 << 0x20 | auVar82 << 0x40 | auVar82 << 0x60,0x80,lVar1);
    *(undefined4 *)(puVar31 + 0x10) = uVar30;
    uVar30 = storeVectorElementWordIndexed
                       (auVar64 | auVar64 << 0x20 | auVar64 << 0x40 | auVar64 << 0x60,0x84,lVar1);
    *(undefined4 *)((int)puVar31 + 0x84) = uVar30;
    uVar30 = storeVectorElementWordIndexed
                       (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar31 + 0x11) = uVar30;
    mobyutil::MB_DrawGlowFX(uVar54,puVar31[0x2d],uVar38 - 0x2b0,uVar29 & 0xffff0000);
    iVar44 = iVar44 + 1;
    auVar64._0_4_ = auVar84._0_4_ + 1;
    auVar64._8_8_ = auVar84._8_8_;
    auVar64._4_4_ = auVar84._4_4_ + 1;
    auVar65._0_8_ = auVar64._0_8_;
    auVar65._12_4_ = auVar84._12_4_;
    auVar65._8_4_ = auVar84._8_4_ + 1;
    auVar84._0_12_ = auVar65._0_12_;
    auVar84._12_4_ = auVar65._12_4_ + 1;
  } while (iVar44 < 4);
  return;
}



//==== 001bd450  ns=mobyupdate_unsorted  size=0x980
// sig: undefined UpdateMoby_11(MobyInstance * moby)
// callers(0): 
// callees(10): 0006d7e0 draw::RegisterPostDraw; 000efa28 mobyfunc::CreateMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f31a8 mobyfunc::UpdateMobyTransform; 000fddc0 mobyutil::MB_SetAnimation; 0011aeec mobyutil::MB_ShowPersistentMessage; 0016a8f0 vendor::Spawn_Moby11_Vendor; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

/* Moby 11 */

void mobyupdate_unsorted::UpdateMoby_11(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [12];
  ulonglong uVar14;
  longlong lVar15;
  MobyInstance *pMVar19;
  uint uVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  uint uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  uint32_t animJoint;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 0xe0;
  puVar9 = (ulonglong *)lVar18;
  *puVar9 = uVar14;
  puVar9[0x1e] = in_LR;
  puVar9[0x1a] = in_f30;
  puVar9[0x1b] = in_f31;
  puVar9[0x19] = unaff_r31;
  auVar31 = loadVectorLeftIndexed(0x3d9c,0x760000);
  puVar9[0x18] = unaff_r30;
  auVar32 = loadVectorLeftIndexed(in_LR,0x1bd3e0);
  puVar8 = (undefined4 *)moby->pVar;
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = vectorAddFloatingPoint
                      (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  auVar32 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  DAT_00763d9c = storeVectorElementWordIndexed(auVar33,0x3d9c,0x760000);
  auVar32 = loadVectorLeftIndexed(4,0x1bd3e0);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
  puVar9[0x17] = unaff_r29;
  puVar9[0x16] = unaff_r28;
  puVar9[0x15] = unaff_r27;
  puVar9[0x14] = unaff_r26;
  if (!(bool)(in_cr6 >> 1 & 1)) {
    auVar32 = loadVectorLeftIndexed(8,0x1bd3e0);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    DAT_00763d9c = 0xc048f5c3;
  }
  auVar32 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0xffffffff);
  auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar32 = loadVectorLeftIndexed(0xc,0x1bd3e0);
  auVar31 = loadVectorLeftIndexed(0x10,0x1bd3e0);
  auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar32 = vectorSubtractFloatingPoint
                      (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
  auVar36 = vectorSubtractFloatingPoint
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar33);
  auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
  auVar31 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
  auVar32 = vectorConditionalSelect(auVar32,auVar33,auVar31);
  auVar31 = loadVectorLeftIndexed(0x14,0x1bd3e0);
  auVar38 = loadVectorLeftIndexed(0x18,0x1bd3e0);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar33 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar36);
  auVar36 = vectorConditionalSelect(auVar36,auVar32,auVar33);
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar33 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar34);
  auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = ZEXT416(0xffffffff);
  auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar40 = loadVectorLeftIndexed(0x1c,0x1bd3e0);
  auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar34);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar35);
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar36
                      );
  auVar31 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar36 = loadVectorLeftIndexed(0x20,0x1bd3e0);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar34,auVar37);
  auVar34 = vectorMultiplyAddFloatingPoint
                      (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32
                      );
  auVar32 = ZEXT416(0xffffffff);
  auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = loadVectorLeftIndexed(0x24,0x1bd3e0);
  auVar33 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar39);
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar34
                      );
  auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar35 = loadVectorLeftIndexed(0x28,0x1bd3e0);
  auVar32 = ZEXT416(0xfffffff0);
  auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar32 = ZEXT416(0);
  auVar36 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar31
                      );
  auVar31 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar35 = vectorRotateLeftIntegerWord(auVar38,auVar37);
  auVar33 = vectorMultiplyAddFloatingPoint
                      (auVar36,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar34
                      );
  auVar31 = loadVectorLeftIndexed(0x2c,0x1bd3e0);
  auVar36 = loadVectorLeftIndexed(0x30,0x1bd3e0);
  auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  bVar1 = moby->state;
  auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
  auVar36 = vectorMultiplySumSignedHalfWordModulo
                      (auVar33,auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                      );
  auVar32 = vectorMultiplyOddUnsignedHalfWord(auVar33,auVar38);
  auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar37);
  auVar33._0_4_ = auVar36._0_4_ + auVar32._0_4_;
  auVar33._8_8_ = auVar32._8_8_;
  auVar33._4_4_ = auVar36._4_4_ + auVar32._4_4_;
  auVar13._0_8_ = auVar33._0_8_;
  auVar13._8_4_ = auVar36._8_4_ + auVar32._8_4_;
  auVar36._8_8_ = auVar13._4_8_ << 0x20;
  auVar36._0_4_ = auVar33._0_4_ + auVar34._0_4_;
  auVar36._4_4_ = auVar33._4_4_ + auVar34._4_4_;
  auVar32._0_8_ = 0;
  auVar32._8_8_ = auVar36._0_8_;
  auVar32 = (auVar32 << 0x40 | auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60) >>
            0x60 & (undefined1  [16])0xffffffff;
  uVar21 = storeVectorElementWordIndexed
                     (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x90,lVar15);
  *(undefined4 *)((uint)&moby->field60_0x90 & 0xfffffffc) = uVar21;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        animJoint = 0;
        moby->state = '\x01';
        *puVar8 = 0;
        puVar8[1] = 0;
        pMVar19 = mobyfunc::CreateMoby(VENDOR_ORB);
        puVar8[3] = pMVar19;
        pMVar19->modeBits = pMVar19->modeBits | NO_UPDATE;
        *(undefined2 *)(puVar8[3] + 0x32) = 0x40;
        *(f32 *)(puVar8[3] + 0x10) = (moby->pos).x;
        *(f32 *)(puVar8[3] + 0x14) = (moby->pos).y;
        *(float *)(puVar8[3] + 0x18) = (moby->pos).z + 2.95;
        puVar8[0x24] = 0;
        do {
          mobyfunc::AttachManipulator
                    ((MobyInstance *)puVar8[3],animJoint,puVar8 + animJoint * 0x10 + 4);
          animJoint = animJoint + 1;
        } while ((int)animJoint < 2);
        mobyfunc::UpdateMobyTransform((MobyInstance *)puVar8[3]);
      }
      else {
        fVar2 = (float)puVar8[0x24];
        if (0 < (int)puVar8[0x24]) {
          fVar2 = fVar2 - 0.1;
          puVar8[0x24] = fVar2;
        }
        if (fVar2 <= 0.0) {
          *(ushort *)(puVar8[3] + 0x34) = *(ushort *)(puVar8[3] + 0x34) | 1;
        }
        if (((worldUpdateTime ==
              (((int)worldUpdateTime >> 3) +
              (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) &&
            (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
            SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= 16.0)) &&
           (ABS((moby->pos).z - g_heroPosition.z) <= 8.0)) {
          moby->state = '\x02';
          if (moby->animationId != '\x01') {
            mobyutil::MB_SetAnimation(lVar15,1,0,10,4);
          }
          *(ushort *)(puVar8[3] + 0x34) = *(ushort *)(puVar8[3] + 0x34) & 0xfffe;
        }
        draw::RegisterPostDraw(&PTR_M1099_001bc8c8_00708b18,moby);
        fastfunc::FastQuaternionToEuler((double)DAT_00763d94,puVar8 + 8,2);
        fastfunc::FastQuaternionToEuler((double)DAT_00763d98,puVar8 + 0x18,2);
        dVar28 = (double)fastfunc::FastWrapRot(DAT_00763d94,0.01);
        DAT_00763d94 = (float)dVar28;
        dVar28 = (double)fastfunc::FastWrapRot(DAT_00763d98,-0.02);
        DAT_00763d98 = (float)dVar28;
        *(float *)(puVar8[3] + 0x2c) =
             (float)puVar8[0x24] * *(float *)(*(int *)(puVar8[3] + 0x24) + 0x24) * 2.5;
        mobyfunc::UpdateMobyTransform((MobyInstance *)puVar8[3]);
      }
    }
  }
  else if (bVar1 < 3) {
    uVar20 = (int)puVar8[0x24] >> 0x1f;
    if ((int)((uVar20 >> 1 ^ puVar8[0x24]) - uVar20) < 0x3f800000) {
      puVar8[0x24] = (float)puVar8[0x24] + 0.1;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    dVar28 = ABS((double)((moby->pos).z - g_heroPosition.z));
    dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    if ((worldUpdateTime !=
         (((int)worldUpdateTime >> 3) +
         (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * 8) ||
       ((dVar30 <= 18.0 && (dVar28 <= 10.0)))) {
      draw::RegisterPostDraw(&PTR_M1099_001bc8c8_00708b18,moby);
      fastfunc::FastQuaternionToEuler((double)DAT_00763d94,puVar8 + 8,2);
      fastfunc::FastQuaternionToEuler((double)DAT_00763d98,puVar8 + 0x18,2);
      dVar29 = (double)fastfunc::FastWrapRot(DAT_00763d94,0.01);
      DAT_00763d94 = (float)dVar29;
      dVar29 = (double)fastfunc::FastWrapRot(DAT_00763d98,-0.02);
      DAT_00763d98 = (float)dVar29;
      *(float *)(puVar8[3] + 0x2c) =
           (float)puVar8[0x24] * *(float *)(*(int *)(puVar8[3] + 0x24) + 0x24) * 2.5;
      mobyfunc::UpdateMobyTransform((MobyInstance *)puVar8[3]);
      fVar2 = g_heroRotation.z;
      uVar20 = 1;
      if ((hero::g_heroStateType != 0) &&
         ((g_heroState != STOPPING && (hero::g_heroStateType != 1)))) {
        uVar20 = 0;
      }
      if ((g_heroState == VISIBOMB_CONTROL) || (g_heroState == TURRET_PLANE_UI)) {
        uVar20 = 0;
      }
      uVar26 = (uint)((LZCOUNT(-(uint)g_heroType) << 0x3a) >> 0x3f) & uVar20;
      uVar20 = (uint)((LZCOUNT(1 - (uint)moby->updateId) << 0x3a) >> 0x3f) &
               (uint)((LZCOUNT(-(uint)g_heroType) << 0x3a) >> 0x3f) & uVar20;
      if ((4.0 < dVar30) || (2.0 < dVar28)) {
        uVar20 = 0;
        uVar26 = 0;
      }
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar6 = ABS(fVar3);
      fVar4 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar3;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar6 - fVar4;
      fVar3 = 0.0;
      uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
      fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
      fVar10 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar10 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar17 = uVar14 - 0xd0;
        lVar23 = uVar14 - 100;
        lVar25 = uVar14 - 0x54;
        lVar27 = 2;
        fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)(puVar9 + 0x11) = fVar5;
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = fVar5;
        *(float *)((int)puVar9 + 0x7c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar6;
        *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar5;
        *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar5 * fVar5;
          iVar11 = (int)lVar23;
          lVar17 = lVar17 + 8;
          lVar23 = lVar23 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar11 + 4) * fVar5 * fVar5;
          lVar25 = lVar25 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar25 = uVar14 - 100;
        pfVar24 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar23 = lVar25;
        do {
          fVar5 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar5;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
          lVar23 = lVar23 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar17 = 2;
        do {
          iVar11 = (int)lVar18;
          iVar12 = (int)lVar25;
          lVar18 = lVar18 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar3 = fVar3 + *(float *)(iVar11 + 0x7c) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
      }
      dVar28 = (double)fastfunc::FastSubRots(fVar2,fVar3);
      if (1.5707963705062866 < dVar28) {
        uVar20 = 0;
        uVar26 = 0;
      }
      uVar22 = 0;
      if (uVar26 != 0) {
        uVar21 = mobyutil::MB_ShowPersistentMessage(1,0x53e3);
        uVar22 = (uint)LZCOUNT(uVar21) >> 5 ^ 1;
      }
      if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (uVar22 != 0 && uVar20 != 0)) {
        vendor::Spawn_Moby11_Vendor(lVar15);
        moby->state = '\x03';
      }
    }
    else {
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar15,0,0,10,4);
      }
    }
  }
  else if ((bVar1 < 4) && (puVar8[3] != 0)) {
    puVar8[0x24] = 0;
    *(undefined4 *)(puVar8[3] + 0x2c) = 0;
    mobyfunc::UpdateMobyTransform((MobyInstance *)puVar8[3]);
  }
  return;
}



//==== 001bddd0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1100_001bddd0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1100_001bddd0(void)

{
  DAT_00763d68 = 0x10000;
  return;
}



//==== 001bddf0  ns=mobyupdate_unsorted  size=0x258
// sig: undefined UpdateMoby_1100(MobyInstance * moby)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 005010c0 fastfunc::FastNormalizeRMtx4

/* Moby 1100 */

void mobyupdate_unsorted::UpdateMoby_1100(MobyInstance *moby)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CollDamageOut *pCVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float local_b0 [4];
  float local_a0;
  float local_90;
  float local_80;
  
  uVar1 = moby->uid;
  if (((&DAT_00a545c4)[(short)uVar1] == '\0') &&
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) == 0)) {
    iVar5 = 0;
    moby->drawDistance = 0x80;
    pCVar6 = CollDamage;
    dVar14 = 0.25;
    do {
      if ((pCVar6->pVictimMoby == moby) && ((pCVar6->damageFlags & 0x20000) != 0)) {
        pMVar2 = pCVar6->pDamager;
        if ((pMVar2->oClass == VISIBOMB_MISSILE) || (pMVar2->oClass == GOLD_DEVASTATOR_MISSILE)) {
          dVar13 = (double)(moby->pos).y;
          dVar12 = (double)(moby->pos).x;
          dVar11 = (double)(pMVar2->pos).y;
          dVar10 = (double)(pMVar2->pos).x;
          dVar9 = (double)(moby->pos).z;
          dVar8 = (double)(pMVar2->pos).z;
          dVar7 = (double)(moby->pos).w;
          fastfunc::FastNormalizeRMtx4(local_b0,(longlong)(int)moby + 0xc0);
          if (dVar14 < (double)(float)((double)local_80 * dVar7 +
                                      (double)(local_90 * (float)(dVar9 - dVar8) +
                                              local_b0[0] * (float)(dVar12 - dVar10) +
                                              local_a0 * (float)(dVar13 - dVar11)))) {
            uVar1 = moby->uid;
            iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
            iVar5 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
            uVar3 = *(uint *)(&DAT_00a54dd0 + iVar5);
            *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) =
                 *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
            *(uint *)(&DAT_00a54dd0 + iVar5) = uVar3 | 1 << (uVar1 & 0x1f);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          pCVar6->pVictimMoby = (MobyInstance *)0x0;
        }
        else {
          pCVar6->pVictimMoby = (MobyInstance *)0x0;
        }
      }
      iVar5 = iVar5 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar5 < 0x40);
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001be048  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1532_001be048(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1532_001be048(void)

{
  DAT_00763dec = 0x10000;
  return;
}



//==== 001be070  ns=mobyupdate_helpers  size=0x5c
// sig: undefined M1532_001be070(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M1532_001be070(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0xa6);
  if (sVar1 < 0x5fb) {
    if (sVar1 == 0x44d) {
      return 0x3ff4ccccc0000000;
    }
  }
  else {
    if (sVar1 < 0x5fc) {
      return 0xc004666660000000;
    }
    if (sVar1 < 0x5fd) {
      return 0x3ff4ccccc0000000;
    }
  }
  return 0xc000666660000000;
}



//==== 001be0e0  ns=mobyupdate_unsorted  size=0x2d4
// sig: undefined UpdateMoby_{1101_1102_1531_1532}(MobyInstance * moby)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 0015d204 sound::sound_MobyPlay_oClass; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1101
   Moby 1102
   Moby 1531
   Moby 1532 */

void mobyupdate_unsorted::UpdateMoby__1101_1102_1531_1532_(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  MOBY_OCLASSES MVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined8 in_LR;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  bVar1 = moby->state;
  puVar4 = (uint *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      puVar4[1] = (uint)(moby->pos).z;
      moby->state = '\x01';
      return;
    }
    uVar2 = moby->uid;
    if (((&DAT_00a545c4)[(short)uVar2] == '\0') &&
       ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)) &
        1 << (uVar2 & 0x1f)) == 0)) {
      uVar5 = *puVar4;
      iVar9 = (int)(((ulonglong)uVar5 & 0xffffff) << 8);
      if ((uVar5 == 0xffffffff) ||
         ((*(short *)((int)&MobyInstance->oClass + iVar9) != 0x267 ||
          ((&MobyInstance->state)[iVar9] != '\x04')))) {
        if (uVar5 == 0xffffffff) {
          return;
        }
        if (*(short *)((int)&MobyInstance->oClass + iVar9) != 0x4a6) {
          return;
        }
        if ((&MobyInstance->state)[iVar9] != '\x02') {
          return;
        }
      }
    }
    if ((moby->oClass == UPPER_DOOR_044D) || (moby->oClass == UPPER_DOOR_05FC)) {
      sound::sound_MobyPlay_oClass(0,0,moby,0x44d);
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    moby->state = '\x02';
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(in_LR,0x1be0cc);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,
                       ZEXT48(puVar4));
    *(undefined4 *)((uint)(puVar4 + 2) & 0xfffffffc) = uVar6;
    return;
  }
  if (2 < bVar1) {
    return;
  }
  MVar3 = moby->oClass;
  if ((short)MVar3 < 0x5fb) {
    if (MVar3 == UPPER_DOOR_044D) {
      fVar7 = 1.3;
      goto LAB_001be2e0;
    }
  }
  else {
    if ((short)MVar3 < 0x5fc) {
      fVar7 = -2.55;
      goto LAB_001be2e0;
    }
    if ((short)MVar3 < 0x5fd) {
      fVar7 = 1.3;
      goto LAB_001be2e0;
    }
  }
  fVar7 = -2.05;
LAB_001be2e0:
  (moby->pos).z = fVar7 * mobyutil::g_FrameTime + (moby->pos).z;
  iVar9 = fastfunc::FastDecTimerS32(ZEXT48(puVar4) + 8);
  if (iVar9 != 0) {
    uVar2 = moby->uid;
    iVar8 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar9 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    MVar3 = moby->oClass;
    uVar5 = *(uint *)(&DAT_00a54dd0 + iVar9);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar8) | 1 << (uVar2 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar9) = uVar5 | 1 << (uVar2 & 0x1f);
    if (MVar3 == UPPER_DOOR_044D) {
      sound::PlayMobySound(1,0,moby);
    }
    moby->state = '\x03';
  }
  return;
}



//==== 001be3b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1532_001be3b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1532_001be3b4(void)

{
  DAT_00763e5c = 0x10000;
  return;
}



//==== 001be3c8  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M1532_001be3c8(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1532_001be3c8(int param_1)

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
          DAT_00a1bfa0 = DAT_00763e80;
          DAT_00a1bfa4 = DAT_00763e80;
          DAT_00a1bfa8 = DAT_00763e80;
          sVar1 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}



//==== 001be558  ns=mobyupdate_unsorted  size=0x1330
// sig: undefined UpdateMoby_1105(MobyInstance * moby)
// callers(0): 
// callees(32): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0007b310 help::Help_QueueMessage; 000a0c38 hero::Hero_Warp; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112e18 mobyutil::MB_UnlockItem; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119488 mobyutil::MB_SetPointAheadOfMoby; 00188fb4 FUN_00188fb4; 00189040 FUN_00189040; 0047cc38 FUN_0047cc38; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 0096c074: 'None' | 0065465c: 'Scrawny Scientist'

/* Moby 1105 */

void mobyupdate_unsorted::UpdateMoby_1105(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  uint uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  gameMode_t gVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar25;
  undefined4 uVar26;
  longlong lVar23;
  longlong lVar24;
  short sVar29;
  float *pfVar28;
  longlong lVar27;
  longlong lVar30;
  ulonglong unaff_r26;
  undefined4 *puVar31;
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
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar24 = uVar20 - 0x1d0;
  puVar11 = (ulonglong *)lVar24;
  *puVar11 = uVar20;
  puVar11[0x3c] = in_LR;
  puVar11[0x34] = in_f26;
  puVar11[0x35] = in_f27;
  puVar11[0x36] = in_f28;
  puVar11[0x37] = in_f29;
  puVar11[0x38] = in_f30;
  puVar11[0x39] = in_f31;
  puVar11[0x33] = unaff_r31;
  puVar11[0x32] = unaff_r30;
  gVar18 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar32 = ZEXT48(pvVar8);
  puVar11[0x31] = unaff_r29;
  puVar11[0x30] = unaff_r28;
  puVar11[0x2f] = unaff_r27;
  puVar11[0x2e] = unaff_r26;
  if ((gVar18 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar25 = 0;
    puVar31 = &DAT_0095cd50;
    sVar29 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar31[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar31[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00763e80;
          DAT_00a1bfa4 = DAT_00763e80;
          DAT_00a1bfa8 = DAT_00763e80;
          sVar29 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar25 = iVar25 + 1;
        puVar31 = puVar31 + 1;
      } while (iVar25 < sVar29);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 24.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar21);
    moby->shadow = '\x13';
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    if (hero::g_heroStateType == 0xf) {
      FUN_00188fb4(MobyInstance + *(int *)((int)pvVar8 + 0x164));
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x04') {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    if (boot::SceneScreenFade == 0.0) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined4 *)(puVar11 + 0x12) = 0x43327852;
    *(undefined4 *)((int)puVar11 + 0x94) = 0x439fe148;
    *(undefined4 *)(puVar11 + 0x13) = 0x43124f5c;
    dVar34 = 0.0;
    *(undefined4 *)((int)puVar11 + 0x9c) = 0;
    dVar39 = 172.5500030517578;
    dVar38 = 316.010009765625;
    dVar40 = 145.27000427246094;
    uVar37 = 0x3fb1eb8520000000;
    *(undefined4 *)(puVar11 + 0x14) = 0x3d8f5c29;
    *(undefined4 *)((int)puVar11 + 0xa4) = 0x3e3851ec;
    *(undefined4 *)(puVar11 + 0x15) = 0xbfe28f5c;
    *(undefined4 *)((int)puVar11 + 0xac) = 0;
    dVar42 = 1.0;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 0.1,DAT_0071f418 * 0.1,mobyutil::g_FrameTime * 0.1,
               (float *)((int)pvVar8 + 0x178),0x720000,(float *)((int)pvVar8 + 0x17c));
    fVar2 = *(float *)((int)pvVar8 + 0x178);
    uVar9 = (int)*(uint *)((int)pvVar8 + 0x178) >> 0x1f;
    if (0x3dcccccd < (int)((uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x178)) - uVar9)) {
      FUN_00188fb4(MobyInstance + *(int *)((int)pvVar8 + 0x160));
      fVar2 = *(float *)((int)pvVar8 + 0x178);
    }
    dVar41 = (double)fVar2;
    *(undefined4 *)((int)puVar11 + 0xbc) = 0;
    *(float *)(puVar11 + 0x16) =
         (float)(dVar41 * (double)(float)(dVar39 - (double)*(float *)(puVar11 + 0x12)) +
                (double)*(float *)(puVar11 + 0x12));
    *(float *)((int)puVar11 + 0xb4) =
         (float)(dVar41 * (double)(float)(dVar38 - (double)*(float *)((int)puVar11 + 0x94)) +
                (double)*(float *)((int)puVar11 + 0x94));
    *(float *)(puVar11 + 0x17) =
         (float)(dVar41 * (double)(float)(dVar40 - (double)*(float *)(puVar11 + 0x13)) +
                (double)*(float *)(puVar11 + 0x13));
    dVar40 = (double)fastfunc::FastDiffRots(0xbff35c2900000000,(double)*(float *)(puVar11 + 0x15));
    dVar40 = (double)fastfunc::FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)(puVar11 + 0x15));
    *(float *)(puVar11 + 0x19) = (float)dVar40;
    dVar40 = (double)fastfunc::FastDiffRots
                               (0x3fc0a3d700000000,(double)*(float *)((int)puVar11 + 0xa4));
    dVar40 = (double)fastfunc::FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)((int)puVar11 + 0xa4));
    *(float *)((int)puVar11 + 0xc4) = (float)dVar40;
    dVar40 = (double)fastfunc::FastDiffRots(uVar37,(double)*(float *)(puVar11 + 0x14));
    dVar40 = (double)fastfunc::FastWrapRot
                               ((float)(dVar40 * (double)*(float *)((int)pvVar8 + 0x178)),
                                *(float *)(puVar11 + 0x14));
    *(float *)(puVar11 + 0x18) = (float)dVar40;
    if ((GameCamera.pCurrentUpdCam != (void *)0x0) &&
       (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) {
      camera::SetCameraPosition(uVar20 - 0x140,uVar20 - 0x130,1,0,0);
    }
    camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0x16));
    camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x18));
    uVar9 = (int)*(uint *)((int)pvVar8 + 0x178) >> 0x1f;
    iVar25 = (uVar9 >> 1 ^ *(uint *)((int)pvVar8 + 0x178)) - uVar9;
    if ((iVar25 < 0x3f800000) &&
       (((help::g_HelpState != 0 || (help::g_HelpCurId != -1)) || (iVar25 < 0x3e4cccce)))) {
      mobyutil::Delt((float)dVar34,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    }
    else {
      mobyutil::Delt((float)dVar42,mobyutil::g_FrameTime * 4.0,&boot::SceneScreenFade);
    }
    if (boot::SceneScreenFade == 1.0) {
      hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0,0);
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      if (moby->animationId != '\0') {
        puVar11[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar21,0,0,*(undefined4 *)((int)puVar11 + 0x15c));
      }
      sVar29 = *(short *)((int)pvVar8 + 4);
      if (sVar29 < 2) {
        mobyfunc::SetLevelFlag(moby->levelFlagIdx);
        FUN_00188fb4(MobyInstance + *(int *)((int)pvVar8 + 0x164));
        moby->state = '\x01';
        sVar29 = *(short *)((int)pvVar8 + 4);
      }
      if (sVar29 == 2) {
        mobyutil::MB_UnlockItem(0x1d,1);
        memcard::memcard_Save(0,-1);
        help::Help_QueueMessage(STR_YOUVE_GOT_THE_GRINDBOOTS_0x1775,0x2c);
        boot::SceneScreenFade = 1.0;
        *(undefined4 *)((int)pvVar8 + 0x178) = 0;
        *(undefined4 *)((int)puVar11 + 0x74) = 0x439fe148;
        *(undefined4 *)(puVar11 + 0xf) = 0x43124f5c;
        *(undefined4 *)((int)puVar11 + 0x7c) = 0;
        *(undefined4 *)(puVar11 + 0xe) = 0x43327852;
        *(undefined4 *)(puVar11 + 0x10) = 0x3d8f5c29;
        *(undefined4 *)((int)puVar11 + 0x84) = 0x3e3851ec;
        *(undefined4 *)(puVar11 + 0x11) = 0xbfe28f5c;
        *(undefined4 *)((int)puVar11 + 0x8c) = 0;
        camera::SetCameraPosition(uVar20 - 0x160,uVar20 - 0x150,1,0,0);
        hero::Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
        FUN_00189040(MobyInstance + *(int *)((int)pvVar8 + 0x164));
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\x03';
        moby->modeBits = moby->modeBits | DISABLED;
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(char *)((int)pvVar8 + 8) == '\x01') &&
       (iVar25 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x168))
       , iVar25 != 0)) {
      uVar26 = 0x41800000;
    }
    else {
      uVar26 = 0x406ccccd;
    }
    *(undefined4 *)((int)pvVar8 + 0xc) = uVar26;
    iVar25 = FUN_0047cc38(*(undefined4 *)((int)pvVar8 + 0x170));
    if ((iVar25 != 0) && (iVar25 = fastfunc::FastDecTimerS16(uVar32 + 0x174), iVar25 != 0)) {
      iVar25 = FUN_004d3870(lVar21,uVar32);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      if (iVar25 != 0) {
        moby->state = '\x02';
        if (*(short *)((int)pvVar8 + 0x176) != 0) {
          fVar6 = (moby->transform).v0.y;
          fVar4 = (moby->transform).v0.x;
          fVar7 = (moby->transform).v0.z;
          fVar14 = 0.0;
          fVar12 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6);
          fVar17 = 2.0 / fVar12;
          fVar15 = fVar14;
          if (0.0 - fVar12 < 0.0) {
            fVar15 = fVar7 * fVar17;
          }
          fVar16 = fVar14;
          if (0.0 - fVar12 < 0.0) {
            fVar16 = fVar6 * fVar17;
          }
          if (0.0 - fVar12 < 0.0) {
            fVar14 = fVar4 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar15 = fVar7 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar16 = fVar6 * fVar17;
          }
          if (fVar12 - 0.0 < 0.0) {
            fVar14 = fVar4 * fVar17;
          }
          (moby->pos).z = fVar5 + fVar15;
          (moby->pos).y = fVar3 + fVar16;
          (moby->pos).x = fVar2 + fVar14;
          dVar42 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
          (moby->pos).z = (float)dVar42;
          *(undefined2 *)((int)pvVar8 + 0x176) = 0;
        }
        mobyutil::MB_SetPointAheadOfMoby(0x40019999a0000000,lVar21);
      }
    }
    if (hero::g_heroStateType == 0xf) {
      FUN_00188fb4(MobyInstance + *(int *)((int)pvVar8 + 0x160));
    }
  }
  else if (uVar1 == '\0') {
    if (CHAR_ARRAY_0096c165[0x1d] != '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (g_KeyLevelFlags._764_4_ == 0) {
      if (moby->animationId != '\x01') {
        puVar11[0x2b] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar21,1,0,*(undefined4 *)((int)puVar11 + 0x15c));
      }
      pMVar19 = MobyInstance;
      *(undefined2 *)((int)pvVar8 + 0x176) = 1;
      FUN_00189040(pMVar19 + *(int *)((int)pvVar8 + 0x164));
    }
    else {
      fVar2 = (moby->transform).v0.y;
      fVar3 = (moby->transform).v0.x;
      fVar5 = (moby->transform).v0.z;
      fVar7 = 0.0;
      fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar4 = 2.0 / fVar6;
      fVar12 = fVar7;
      if (0.0 - fVar6 < 0.0) {
        fVar12 = fVar5 * fVar4;
      }
      fVar14 = fVar7;
      if (0.0 - fVar6 < 0.0) {
        fVar14 = fVar2 * fVar4;
      }
      if (0.0 - fVar6 < 0.0) {
        fVar7 = fVar3 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar12 = fVar5 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar14 = fVar2 * fVar4;
      }
      if (fVar6 - 0.0 < 0.0) {
        fVar7 = fVar3 * fVar4;
      }
      (moby->pos).z = (moby->pos).z + fVar12;
      (moby->pos).y = (moby->pos).y + fVar14;
      (moby->pos).x = (moby->pos).x + fVar7;
      dVar42 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar21 + 0x10,0);
      (moby->pos).z = (float)dVar42;
      *(undefined2 *)((int)pvVar8 + 0x176) = 0;
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x14,0x1be4c0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = vectorSplatHalfWord(auVar43,1);
    uVar10 = storeVectorElementHalfWordIndexed(auVar43,0x174,uVar32);
    *(undefined2 *)((int)pvVar8 + 0x174) = uVar10;
    FUN_00189040(MobyInstance + *(int *)((int)pvVar8 + 0x160));
    *(char **)((int)pvVar8 + 0x20) = "Scrawny Scientist";
    moby->state = '\x01';
    FUN_004d3720(lVar21,uVar32);
  }
  dVar42 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_001bf7e0;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_001bf28c:
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
    *(float *)(puVar11 + 0x1d) = fVar3;
    *(float *)((int)puVar11 + 0xec) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x1e) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x1d));
    if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0xec));
    if (*(float *)(puVar11 + 0x1e) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar20 - 0x1c0;
      lVar27 = uVar20 - 0x9c;
      lVar30 = uVar20 - 0x8c;
      lVar33 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x28) = fVar5;
      *(float *)(puVar11 + 0x27) = fVar5;
      *(float *)((int)puVar11 + 0x13c) = fVar5;
      *(float *)((int)puVar11 + 0x134) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x27) = *(float *)(puVar11 + 0x27) * fVar6;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar5;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar23 + 0x134) = *(float *)((int)lVar23 + 0x124) * fVar5 * fVar5;
        iVar25 = (int)lVar27;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar30 = uVar20 - 0x9c;
      pfVar28 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar27 = lVar30;
      do {
        fVar5 = *pfVar28;
        fVar6 = pfVar28[1];
        pfVar28 = pfVar28 + 2;
        *(float *)((int)lVar23 + 0x134) = *(float *)((int)lVar23 + 0x134) * fVar5;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
        lVar27 = lVar27 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar27 = 2;
      lVar23 = lVar24;
      do {
        iVar25 = (int)lVar23;
        iVar13 = (int)lVar30;
        lVar23 = lVar23 + 0x10;
        lVar30 = lVar30 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar25 + 0x134) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar34 = (double)fastfunc::FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar34) goto LAB_001bf28c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      fastfunc::FastDecTimerS32(uVar32 + 0x158);
    }
    else {
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x5c,0x1be4c0);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x158,uVar32
                         );
      *(undefined4 *)((int)pvVar8 + 0x158U & 0xfffffffc) = uVar26;
    }
  }
  iVar25 = fastfunc::FastDecTimerS32(uVar32 + 0x15c);
  if (iVar25 != 0) {
    dVar34 = (double)mobyutil::MB_randRangeFloat(180.0,300.0);
    uVar26 = fastfunc::FastDoubleToInt((double)(float)(dVar34 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x15c) = uVar26;
    dVar40 = (double)(moby->rotation).z;
    dVar34 = (double)mobyutil::MB_randRangeFloat(-90.0,90.0);
    dVar38 = 0.01745329238474369;
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar40,(float)(dVar34 * 0.01745329238474369));
    dVar40 = (double)mobyutil::MB_randRangeFloat(0.0,30.0);
    mobyutil::MB_SphericalToVector
              (6.0,(float)dVar34,(float)(dVar40 * dVar38),(float *)((int)pvVar8 + 0x140));
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
    dVar42 = 0.03999999910593033;
    fVar2 = hero::g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar41 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar39 = (double)fVar3;
  *(float *)((int)puVar11 + 0xdc) = fVar2;
  *(float *)(puVar11 + 0x1c) = fVar3;
  dVar38 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0xe4) = (float)(ABS(dVar41) - ABS(dVar39));
  dVar40 = 0.0;
  uVar22 = (ulonglong)(*(uint *)((int)puVar11 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1d) & 4;
  dVar34 = ABS((double)*(float *)((int)puVar11 + 0xdc));
  if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
    dVar34 = ABS(dVar39);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar36 = ABS((double)*(float *)(puVar11 + 0x1c));
  if (*(float *)((int)puVar11 + 0xe4) - 0.0 < 0.0) {
    dVar36 = ABS(dVar41);
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar35 = dVar40;
  if (0.0 < dVar34) {
    lVar23 = uVar20 - 0x1c0;
    lVar30 = uVar20 - 0xac;
    lVar27 = uVar20 - 0xbc;
    lVar33 = 2;
    fVar5 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x24) = fVar5;
    *(float *)(puVar11 + 0x23) = fVar5;
    *(float *)((int)puVar11 + 0x11c) = fVar5;
    *(float *)((int)puVar11 + 0x114) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x23) = *(float *)(puVar11 + 0x23) * fVar6;
    *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar5;
    *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar23 + 0x114) = *(float *)((int)lVar23 + 0x104) * fVar5 * fVar5;
      iVar25 = (int)lVar27;
      lVar27 = lVar27 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
      lVar30 = lVar30 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar30 = uVar20 - 0xbc;
    pfVar28 = (float *)&DAT_007358e0;
    lVar23 = lVar24;
    lVar27 = lVar30;
    do {
      fVar5 = *pfVar28;
      fVar6 = pfVar28[1];
      pfVar28 = pfVar28 + 2;
      *(float *)((int)lVar23 + 0x114) = *(float *)((int)lVar23 + 0x114) * fVar5;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
      lVar27 = lVar27 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar27 = 2;
    lVar23 = lVar24;
    dVar34 = dVar40;
    do {
      iVar25 = (int)lVar23;
      iVar13 = (int)lVar30;
      lVar23 = lVar23 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar25 + 0x114)) +
                        *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar36 = (double)fastfunc::FastDiffRots(dVar35,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0xd4) = (float)dVar38;
  fVar2 = SQRT((float)(dVar41 * dVar41 + (double)(float)(dVar39 * dVar39)));
  dVar39 = ABS((double)fVar2);
  *(float *)(puVar11 + 0x1a) = fVar2;
  *(float *)(puVar11 + 0x1b) = (float)(dVar39 - ABS(dVar38));
  uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xd4) >> 0x1d) & 4;
  dVar34 = ABS((double)*(float *)(puVar11 + 0x1a));
  if ((double)*(float *)(puVar11 + 0x1b) - dVar40 < 0.0) {
    dVar34 = ABS(dVar38);
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar38 = ABS((double)*(float *)((int)puVar11 + 0xd4));
  if ((double)*(float *)(puVar11 + 0x1b) - dVar40 < 0.0) {
    dVar38 = dVar39;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar40 < dVar34) {
    lVar23 = uVar20 - 0x1c0;
    lVar27 = uVar20 - 0xdc;
    lVar30 = uVar20 - 0xcc;
    lVar33 = 2;
    fVar5 = (float)(dVar38 - dVar34) / (float)(dVar38 + dVar34);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x20) = fVar5;
    *(float *)(puVar11 + 0x1f) = fVar5;
    *(float *)((int)puVar11 + 0xfc) = fVar5;
    *(float *)((int)puVar11 + 0xf4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x1f) = *(float *)(puVar11 + 0x1f) * fVar6;
    *(float *)((int)puVar11 + 0xfc) = *(float *)((int)puVar11 + 0xfc) * fVar5;
    *(float *)(puVar11 + 0x20) = *(float *)(puVar11 + 0x20) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar23 + 0xf4) = *(float *)((int)lVar23 + 0xe4) * fVar5 * fVar5;
      iVar25 = (int)lVar27;
      lVar23 = lVar23 + 8;
      lVar27 = lVar27 + 8;
      *(float *)((int)lVar30 + 4) = *(float *)(iVar25 + 4) * fVar5 * fVar5;
      lVar30 = lVar30 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar30 = uVar20 - 0xdc;
    pfVar28 = (float *)&DAT_007358e0;
    lVar23 = lVar24;
    lVar27 = lVar30;
    do {
      fVar5 = *pfVar28;
      fVar6 = pfVar28[1];
      pfVar28 = pfVar28 + 2;
      *(float *)((int)lVar23 + 0xf4) = *(float *)((int)lVar23 + 0xf4) * fVar5;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar6;
      lVar27 = lVar27 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar23 = 2;
    do {
      iVar25 = (int)lVar24;
      iVar13 = (int)lVar30;
      lVar24 = lVar24 + 0x10;
      lVar30 = lVar30 + 0x10;
      dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar25 + 0xf4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar40 = -dVar40;
  dVar34 = 1.5707963705062866;
  if ((dVar36 <= 1.5707963705062866) && (dVar34 = dVar36, dVar36 < -1.5707963705062866)) {
    dVar34 = -1.5707963705062866;
  }
  dVar38 = 0.5235987901687622;
  if ((dVar40 <= 0.5235987901687622) && (dVar38 = dVar40, dVar40 < -0.5235987901687622)) {
    dVar38 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xa8) = (float)(dVar34 * 0.6000000238418579);
  *(float *)((int)pvVar8 + 0xa4) = (float)dVar38;
  *(float *)((int)pvVar8 + 0x128) = (float)(dVar34 * 0.4000000059604645);
LAB_001bf7e0:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xb0) = 0x40300000;
  }
  dVar34 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar42),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar21,uVar32 + 0x40,0);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar42),
             (double)(float)((double)DAT_0071f40c * dVar34),lVar21,uVar32 + 0xc0,2);
  return;
}



//==== 001bf888  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1106_001bf888(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1106_001bf888(void)

{
  DAT_00763ed0 = 0x10000;
  return;
}



//==== 001bf8b0  ns=mobyupdate_helpers  size=0x298
// sig: undefined M1106_001bf8b0(float param_1, undefined8 param_2, undefined4 param_3, undefined2 param_4, undefined4 param_5, undefined2 param_6, undefined8 param_7, undefined4 param_8)
// callers(2): 001bfdb8 mobyupdate_helpers::M1106_001bfdb8; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(2): 000da308 lights::CreatePointLight3; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1106_001bf8b0
               (float param_1,undefined8 param_2,int param_3,short param_4,float *param_5,
               short param_6,ulonglong param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  Vec4 local_50;
  
  dVar7 = (double)param_1;
  sVar4 = *(short *)(param_3 + 0x280);
  if (param_5 == (float *)0x0) {
    local_50.x = *(float *)(param_2._4_4_ + 0x10);
    local_50.y = *(float *)(param_2._4_4_ + 0x14);
    local_50.z = *(float *)(param_2._4_4_ + 0x18);
    local_50.w = *(float *)(param_2._4_4_ + 0x1c);
  }
  else {
    local_50.x = *param_5;
    local_50.y = param_5[1];
    local_50.z = param_5[2];
    local_50.w = param_5[3];
  }
  if ((sVar4 == -1) && (0 < param_6)) {
    lVar1 = -param_7;
    uVar5 = (LZCOUNT(-1 - (int)param_7) << 0x3a) >> 0x3f & lVar1 - 0x7fffbf80U;
    param_7 = param_7 + uVar5;
    dVar8 = 15.0;
    if (-1.0 - dVar7 < 0.0) {
      dVar8 = dVar7;
    }
    if (dVar7 - -1.0 < 0.0) {
      dVar8 = dVar7;
    }
    dVar7 = dVar8;
    sVar4 = lights::CreatePointLight3(dVar7,0,&local_50,uVar5,lVar1 - 0x7fffbf80U,(int)param_7);
    *(undefined2 *)(param_3 + 0x284) = 0;
    *(short *)(param_3 + 0x280) = sVar4;
    param_8 = param_8 + ((uint)((LZCOUNT(-1 - param_8) << 0x3a) >> 0x3f) & -param_8);
  }
  if (sVar4 != -1) {
    iVar2 = (int)((longlong)sVar4 << 5);
    if (((*(short *)(param_3 + 0x282) == param_4) && (param_4 != -1)) &&
       (*(short *)(param_3 + 0x284) != 0)) {
      if (param_6 != -1) {
        uVar3 = (int)((longlong)*(short *)(param_3 + 0x286) << 3) - (int)*(short *)(param_3 + 0x286)
        ;
        iVar6 = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
        if (*(short *)(param_3 + 0x284) <= iVar6) {
          *(short *)(param_3 + 0x284) = (short)iVar6;
        }
      }
    }
    else if (param_6 != -1) {
      *(short *)(param_3 + 0x284) = param_6;
      *(short *)(param_3 + 0x286) = param_6;
    }
    iVar6 = (int)param_7;
    if (dVar7 != -1.0) {
      *(float *)((int)&PointLights[0].pos.w + iVar2) = (float)dVar7;
    }
    if (iVar6 != -1) {
      *(int *)(param_3 + 0x288) = iVar6;
      dVar7 = (double)fastfunc::FastIntToDouble(param_7 & 0xff);
      dVar8 = 0.0078125;
      *(float *)((int)&PointLights[0].color.x + iVar2) = (float)(dVar7 * 0.0078125);
      dVar7 = (double)fastfunc::FastIntToDouble(iVar6 >> 8 & 0xff);
      *(float *)((int)&PointLights[0].color.y + iVar2) = (float)(dVar7 * dVar8);
      dVar7 = (double)fastfunc::FastIntToDouble(iVar6 >> 0x10 & 0xff);
      *(float *)((int)&PointLights[0].color.z + iVar2) = (float)(dVar7 * dVar8);
    }
    if (param_8 != -1) {
      *(int *)(param_3 + 0x28c) = param_8;
    }
    if (param_5 != (float *)0x0) {
      *(float *)((int)&PointLights[0].pos.x + iVar2) = *param_5;
      *(float *)((int)&PointLights[0].pos.y + iVar2) = param_5[1];
      *(float *)((int)&PointLights[0].pos.z + iVar2) = param_5[2];
    }
    if (param_4 != -1) {
      *(short *)(param_3 + 0x282) = param_4;
    }
  }
  return;
}



//==== 001bfb58  ns=mobyupdate_helpers  size=0x74
// sig: undefined M1106_001bfb58(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(0): 

void mobyupdate_helpers::M1106_001bfb58(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar2 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar3 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  GameCamera.offset0.total = 0x14;
  if (80.0 - fVar1 < 0.0) {
    fVar1 = 80.0;
  }
  GameCamera.offset0.amp = (80.0 - fVar1) * 0.0125 * 0.1;
  return;
}



//==== 001bfbd8  ns=mobyupdate_helpers  size=0x1c0
// sig: undefined M1106_001bfbd8(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(4): 000da9e8 lights::DeletePointLight; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 005027bc fastfunc::FastLerpColor
// strings: 001bfccc: 'H4*e`' (raw)

void mobyupdate_helpers::M1106_001bfbd8(int param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = fastfunc::FastDecTimerS16(param_1 + 0x284);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x280) != -1) {
      uVar2 = (int)((longlong)*(short *)(param_1 + 0x286) << 3) - (int)*(short *)(param_1 + 0x286);
      dVar5 = 1.0;
      iVar1 = ((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0);
      if (iVar1 < *(short *)(param_1 + 0x284)) {
        dVar3 = (double)fastfunc::FastIntToDouble(*(short *)(param_1 + 0x284) - iVar1);
        dVar4 = (double)fastfunc::FastIntToDouble(*(short *)(param_1 + 0x286) - iVar1);
        uVar2 = fastfunc::FastLerpColor
                          ((double)(float)(dVar5 - (double)(float)(dVar3 / dVar4)),0,
                           *(undefined4 *)(param_1 + 0x288));
      }
      else {
        dVar3 = (double)fastfunc::FastIntToDouble();
        dVar4 = (double)fastfunc::FastIntToDouble(iVar1);
        uVar2 = fastfunc::FastLerpColor
                          ((double)(float)(dVar5 - (double)(float)(dVar3 / dVar4)),
                           *(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
      }
      iVar1 = (int)((longlong)*(short *)(param_1 + 0x280) << 5);
      dVar5 = (double)fastfunc::FastIntToDouble(uVar2 & 0xff);
      dVar3 = 0.0078125;
      *(float *)((int)&PointLights[0].color.x + iVar1) = (float)(dVar5 * 0.0078125);
      dVar5 = (double)fastfunc::FastIntToDouble((int)uVar2 >> 8 & 0xff);
      *(float *)((int)&PointLights[0].color.y + iVar1) = (float)(dVar5 * dVar3);
      dVar5 = (double)fastfunc::FastIntToDouble((int)uVar2 >> 0x10 & 0xff);
      *(float *)((int)&PointLights[0].color.z + iVar1) = (float)(dVar5 * dVar3);
    }
  }
  else if (*(short *)(param_1 + 0x280) != -1) {
    lights::DeletePointLight();
    *(undefined2 *)(param_1 + 0x280) = 0xffff;
    *(undefined2 *)(param_1 + 0x282) = 0xffff;
  }
  return;
}



//==== 001bfdb8  ns=mobyupdate_helpers  size=0x2b0
// sig: undefined M1106_001bfdb8(void)
// callers(1): 001c50b0 mobyupdate_unsorted::UpdateMoby_1106
// callees(5): 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 001a1f28 mobyupdate_helpers::M1049_001a1f28; 001bf8b0 mobyupdate_helpers::M1106_001bf8b0; 004fff60 fastfunc::FastDecTimerS32
// strings: 001bfd98: 'A+33?' (raw)

u8 mobyupdate_helpers::M1106_001bfdb8(undefined8 param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_60 [4];
  undefined1 local_50 [40];
  
  iVar3 = fastfunc::FastDecTimerS32(param_2 + 0x160);
  if (iVar3 != 0) {
    iVar3 = (int)param_2;
    mobyfunc::GetBonePosition(param_1,*(uint *)(iVar3 + 0x164) & 1,local_60);
    M1049_001a1f28(local_60,local_50,param_1);
    sound::PlayMobySound(0,0,(MobyInstance *)param_1);
    M1106_001bf8b0(10.0,param_1,iVar3,0,local_60,(short)(int)(animationSpeed * 30.5),
                   0xffffffff800060ff,0);
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    auVar5 = loadVectorLeftIndexed(0x18,0x1bfd98);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    iVar4 = *(int *)(iVar3 + 0x164) + 1;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
    *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
    *(int *)(iVar3 + 0x164) = iVar4;
    if (0x14 < iVar4) {
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = loadVectorLeftIndexed(0x1c,0x1bfd98);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar5 = vectorSplatHalfWord(auVar5,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar5,0x198,param_2);
      *(undefined2 *)(iVar3 + 0x198) = uVar1;
      auVar5 = loadVectorLeftIndexed(0x10,0x1bfd98);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar7);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x160,param_2);
      *(undefined4 *)(iVar3 + 0x160U & 0xfffffffc) = uVar2;
      return '\x01';
    }
  }
  return ((MobyInstance *)param_1)->state;
}



