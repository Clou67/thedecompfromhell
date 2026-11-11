//==== 001a02d8  ns=mobyupdate_unsorted  size=0x1b4c
// sig: undefined UpdateMoby_1048(MobyInstance * moby)
// callers(0): 
// callees(33): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110b70 mobyutil::MB_IsPntInCuboid; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00119a18 mobyfunc::DoManipulator; 0011aa78 mobyutil::MB_SpawnDebris; 0019f1e8 mobyupdate_helpers::M1048_0019f1e8; 0019f8f0 mobyupdate_helpers::M1048_0019f8f0; 0019f9b0 mobyupdate_helpers::M1048_0019f9b0; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338

/* Moby 1048 */

void mobyupdate_unsorted::UpdateMoby_1048(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  float fVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  Cuboid *pCVar12;
  longlong lVar13;
  undefined1 uVar18;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined1 auStack_170 [16];
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined1 auStack_110 [16];
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  f32 local_d0;
  f32 local_cc;
  f32 local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  MobyInstance *local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_90;
  float local_8c;
  undefined4 local_88;
  MobyInstance *local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  longlong local_60;
  
  lVar13 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  uVar19 = ZEXT48(pvVar7);
  mobyupdate_helpers::M1048_0019f9b0();
  mobyfunc::DoManipulator(0x4002666660000000,moby,1,(Manipulator *)((int)pvVar7 + 0x1e0));
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x15';
  }
  iVar15 = *(int *)((int)pvVar7 + 0x160);
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00740630;
  if (bVar1 < 9) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar7 + 0x20) = 0x40800000;
        *(undefined2 *)((int)pvVar7 + 0x24) = 4;
        *(undefined1 *)((int)pvVar7 + 0x28) = 3;
        *(undefined1 *)((int)pvVar7 + 0x29) = 1;
        uVar18 = fastfunc::FastDoubleToInt(0x4024000000000000);
        *(undefined1 *)((int)pvVar7 + 0x58) = uVar18;
        uVar18 = fastfunc::FastDoubleToInt(0x402c000000000000);
        *(undefined1 *)((int)pvVar7 + 0x5a) = uVar18;
        MVar6 = moby->modeBits;
        *(f32 *)((int)pvVar7 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar7 + 0x174) = (moby->pos).y;
        fVar2 = (moby->pos).z;
        moby->modeBits = MVar6 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
        *(f32 *)((int)pvVar7 + 0x178) = fVar2;
        *(f32 *)((int)pvVar7 + 0x17c) = (moby->pos).w;
        dVar20 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
        *(float *)((int)pvVar7 + 0x1c4) = (float)dVar20;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar7 + 0xd0));
        *(undefined4 *)((int)pvVar7 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar7 + 0xd8) = 0x40000000;
        uVar14 = fastfunc::FastDoubleToInt((double)(DAT_00740630 * 1024.0));
        *(float *)((int)pvVar7 + 0xd4) = DAT_00740630;
        fVar3 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar7 + 0xd0) = uVar14;
        *(float *)((int)pvVar7 + 0xf4) = *(float *)((int)pvVar7 + 0x1a4) * fVar3;
        uVar14 = fastfunc::FastDoubleToInt(0x4088000000000000);
        *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f400000;
        fVar4 = DAT_00740634;
        fVar3 = DAT_0071f418;
        *(undefined4 *)((int)pvVar7 + 0x90) = uVar14;
        *(undefined4 *)((int)pvVar7 + 0x84) = 0x3a03126f;
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        *(float *)((int)pvVar7 + 0x80) = fVar4 * fVar3;
        dVar20 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar7 + 0x1c8) = (float)dVar20;
        if (*(int *)((int)pvVar7 + 0x1cc) == 0) {
          if (*(int *)((int)pvVar7 + 0x1c0) < 0) {
            if (*(int *)((int)pvVar7 + 0x1b4) == 0) {
              moby->state = '\x01';
              if (moby->animationId != '\0') {
                mobyutil::MB_SetAnimation(lVar13,0,0,0);
              }
              *(float *)((int)pvVar7 + 0x1a0) = DAT_00740650;
            }
            else {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              moby->state = '\x02';
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = loadVectorLeftIndexed(0x20,0x1a0264);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar25 = vectorMultiplyAddFloatingPoint
                                  (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60,auVar26);
              auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar14 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                                  0x1a8,uVar19);
              *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
              if (moby->animationId != '\0') {
                mobyutil::MB_SetAnimation(lVar13,0,0,0);
              }
              if (moby->group != -1) {
                mobyupdate_helpers::M1048_0019f8f0(lVar13);
              }
            }
          }
          else {
            moby->state = '\x03';
          }
        }
        else {
          moby->state = '\x0f';
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar13,2,0,0);
          }
        }
      }
      else if (bVar1 < 2) {
        if (*(int *)((int)pvVar7 + 0x164) != 2) {
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          moby->state = '\x02';
          auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar25 = loadVectorLeftIndexed(0x20,0x1a0264);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorMultiplyAddFloatingPoint
                              (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                               ,auVar26);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1a8,
                              uVar19);
          *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
          if (moby->group != -1) {
            mobyupdate_helpers::M1048_0019f8f0(lVar13);
          }
        }
      }
      else if (bVar1 < 3) {
        if (moby->animationId == '\0') {
          if (*(int *)((int)pvVar7 + 0x1a8) == 0) {
            dVar20 = (double)mobyutil::MB_randRangeFloat(0.0,20.0);
            uVar14 = fastfunc::FastDoubleToInt((double)(float)(dVar20 * (double)animationSpeed));
            *(undefined4 *)((int)pvVar7 + 0x1a8) = uVar14;
          }
          else {
            iVar15 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
            if ((iVar15 != 0) && (moby->animationId != '\x03')) {
              local_60 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if (DAT_00740650 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
            bVar1 = *(byte *)((int)moby->pClass[1].packets + 0x10);
            moby->state = '\x06';
            if (moby->animationId != '\x02') {
              local_60 = (longlong)(int)(uint)bVar1;
              dVar20 = (double)mobyutil::MB_randRangeFloat(0.0,(float)local_60 - 1.0);
              local_60 = (longlong)(int)(animationSpeed * 30.5);
              mobyutil::MB_SetAnimation(lVar13,2,(int)dVar20,(int)(animationSpeed * 30.5));
            }
          }
          else {
            moby->state = '\b';
            dVar20 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar7 + 0x198) * 0.017453292,
                                        *(float *)((int)pvVar7 + 0x198) * -0.017453292);
            *(float *)((int)pvVar7 + 0x194) = (float)dVar20;
            if (moby->animationId != '\x01') {
              local_60 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
      }
      else if (((-1 < *(int *)((int)pvVar7 + 0x1c0)) &&
               (iVar15 = mobyutil::MB_IsPntInCuboid
                                   (&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x1c0)),
               iVar15 != 0)) && (moby->state = '\x04', moby->animationId != '\x03')) {
        local_60 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
      }
    }
    else if (bVar1 < 6) {
      if (bVar1 < 5) {
        if ((moby->field43_0x70 & 2U) != 0) {
          bVar1 = moby->animationId;
          if (bVar1 < 4) {
            if ((2 < bVar1) && (bVar1 != 6)) {
              local_60 = (longlong)(int)(animationSpeed * 5.5);
              mobyutil::MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 5.5));
            }
          }
          else if (bVar1 == 6) {
            moby->state = '\x05';
            pCVar12 = Cuboids;
            iVar15 = *(int *)((int)pvVar7 + 0x1bc);
            fVar3 = Cuboids[iVar15].pos.x;
            *(float *)((int)pvVar7 + 0x170) = fVar3;
            fVar4 = pCVar12[iVar15].pos.y;
            *(float *)((int)pvVar7 + 0x174) = fVar4;
            *(float *)((int)pvVar7 + 0x178) = pCVar12[iVar15].pos.z;
            *(float *)((int)pvVar7 + 0x17c) = pCVar12[iVar15].pos.w;
            fVar4 = (moby->pos).y - fVar4;
            fVar3 = (moby->pos).x - fVar3;
            fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 60.5);
            *(float *)((int)pvVar7 + 0x88) = fVar3;
            dVar20 = (double)mobyutil::MB_computeLobVelocity
                                       ((double)fVar3,-(double)*(float *)((int)pvVar7 + 0x80),
                                        lVar13 + 0x10,uVar19 + 0x170);
            *(float *)((int)pvVar7 + 0x8c) = (float)dVar20;
            *(undefined4 *)((int)pvVar7 + 0x94) = 5;
            *(undefined1 *)((int)pvVar7 + 0xad) = 3;
            FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x170) - (moby->pos).x),
                         (double)(*(float *)((int)pvVar7 + 0x174) - (moby->pos).y));
            mobyutil::MB_StartKick(lVar13,uVar19 + 0x70);
            if (moby->animationId != '\a') {
              mobyutil::MB_SetAnimation(lVar13,7,0,5);
            }
          }
        }
      }
      else {
        uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
        if (((uVar16 & 1) != 0) && (moby->state = '\x06', moby->animationId != '\x02')) {
          mobyutil::MB_SetAnimation(lVar13,2,0,5);
        }
      }
    }
    else if (bVar1 < 7) {
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x120) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar7 + 0x124) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_001a0264,uVar19 + 400);
      if (*(int *)((int)pvVar7 + 0x164) == 2) {
        if ((*(int *)((int)pvVar7 + 0x1ac) != 0) &&
           (moby->state = '\t', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        moby->state = '\a';
        local_60 = (longlong)*(int *)((int)pvVar7 + 0x1b8);
        mobyutil::MB_randRangeFloat(0.0,(float)local_60);
        uVar14 = fastfunc::FastDoubleToInt();
        *(undefined4 *)((int)pvVar7 + 0x1a8) = uVar14;
      }
    }
    else if (bVar1 < 8) {
      iVar15 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
      if (iVar15 != 0) {
        moby->state = '\b';
        dVar20 = (double)mobyutil::MB_randRangeFloat
                                   (*(float *)((int)pvVar7 + 0x198) * 0.017453292,
                                    *(float *)((int)pvVar7 + 0x198) * -0.017453292);
        *(float *)((int)pvVar7 + 0x194) = (float)dVar20;
        if (moby->animationId != '\x01') {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else {
      fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= DAT_00740644) {
        mobyutil::Delt(0.0,DAT_0071f418 * 20.0,(float *)((int)pvVar7 + 0xf4));
      }
      else {
        mobyutil::Delt(*(float *)((int)pvVar7 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                       (float *)((int)pvVar7 + 0xf4));
      }
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 400);
      fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
      fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
      dVar20 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      if ((double)DAT_00740644 - dVar20 < 0.0) {
        dVar20 = (double)DAT_00740644;
      }
      dVar22 = (double)mobyupdate_helpers::M1048_0019f1e8(lVar13);
      dVar23 = (double)mathfunc::cosf((float)dVar22);
      dVar22 = (double)FUN_005e8128(dVar22);
      dVar24 = (double)(moby->rotation).z;
      dVar20 = (double)FUN_005e8338((double)((float)(dVar23 * dVar20 +
                                                    (double)*(float *)(iVar15 + 0x10)) -
                                            (moby->pos).x),
                                    (double)((float)(dVar22 * dVar20 +
                                                    (double)*(float *)(iVar15 + 0x14)) -
                                            (moby->pos).y));
      (moby->rotation).z = (float)dVar20;
      dVar20 = (double)mathfunc::cosf((float)dVar20);
      dVar22 = 2.0;
      local_150 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_14c = (float)(dVar20 * dVar22);
      local_148 = 0;
      dVar20 = 1.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_150,auStack_140
                );
      (moby->rotation).z = (float)dVar24;
      mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar10 = fVar3 - *(float *)((int)pvVar7 + 0x174);
      fVar11 = fVar4 - *(float *)((int)pvVar7 + 0x170);
      fVar5 = (moby->pos).z;
      fVar8 = fVar5 - *(float *)((int)pvVar7 + 0x178);
      if ((DAT_00740648 < SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10)) ||
         (*(int *)((int)pvVar7 + 0x164) == 2)) {
        moby->state = '\f';
      }
      else {
        fVar3 = fVar3 - *(float *)(iVar15 + 0x14);
        fVar4 = fVar4 - *(float *)(iVar15 + 0x10);
        if ((((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_00740644) &&
             (ABS((double)(*(float *)(iVar15 + 0x18) - fVar5)) < dVar20)) &&
            (DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
           (moby->state = '\v', moby->animationId != '\x04')) {
          local_60 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 < 0xe) {
    if (bVar1 < 0xb) {
      if (bVar1 < 10) {
        mobyutil::Delt(*(float *)((int)pvVar7 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                       (float *)((int)pvVar7 + 0xf4));
        uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13);
        fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10);
        dVar20 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if ((double)DAT_00740644 - dVar20 < 0.0) {
          dVar20 = (double)DAT_00740644;
        }
        dVar22 = (double)mobyupdate_helpers::M1048_0019f1e8(lVar13);
        dVar23 = (double)mathfunc::cosf((float)dVar22);
        dVar22 = (double)FUN_005e8128(dVar22);
        dVar24 = (double)(moby->rotation).z;
        dVar20 = (double)FUN_005e8338((double)((float)(dVar23 * dVar20 +
                                                      (double)*(float *)(iVar15 + 0x10)) -
                                              (moby->pos).x),
                                      (double)((float)(dVar22 * dVar20 +
                                                      (double)*(float *)(iVar15 + 0x14)) -
                                              (moby->pos).y));
        (moby->rotation).z = (float)dVar20;
        dVar20 = (double)mathfunc::cosf((float)dVar20);
        dVar22 = 2.0;
        local_180 = (float)(dVar20 * 2.0);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_17c = (float)(dVar20 * dVar22);
        local_178 = 0;
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_180,
                   auStack_170);
        (moby->rotation).z = (float)dVar24;
        mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
        iVar17 = mobyutil::MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar7 + 0x1b0),lVar13 + 0x10,iVar15 + 0x10,
                            &local_160);
        bVar9 = false;
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        if ((iVar17 != 0) &&
           (local_15c = fVar4 - local_15c, local_160 = fVar3 - local_160,
           local_158 = (moby->pos).z - local_158,
           SQRT(local_158 * local_158 + local_160 * local_160 + local_15c * local_15c) <
           *(float *)((int)pvVar7 + 0x1c4))) {
          bVar9 = true;
        }
        if (*(int *)((int)pvVar7 + 0x1ac) == 0) {
          moby->state = '\f';
        }
        else if (bVar9) {
          moby->state = '\n';
          if (moby->animationId != '\x05') {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          fVar4 = fVar4 - *(float *)(iVar15 + 0x14);
          fVar3 = fVar3 - *(float *)(iVar15 + 0x10);
          if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < DAT_00740644) &&
             (moby->state = '\v', moby->animationId != '\x04')) {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\t', moby->animationId != '\x01')
              ) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
      }
    }
    else if (bVar1 < 0xc) {
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_00720000,uVar19 + 400);
      dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
      if ((dVar20 <= 1.0) || (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 8.0 <= dVar20)) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        mobyfunc::GetBonePosition(lVar13,0,auStack_130);
        local_ac = 1;
        local_a0 = 1;
        local_a4 = 0x3f800000;
        local_b0 = moby;
        dVar20 = (double)mathfunc::cosf((moby->rotation).z);
        local_c0 = (float)dVar20;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_bc = (float)dVar20;
        local_b8 = 0;
        collproc::CollMobySphere(0x3fe0000000000000,auStack_130,0,0,lVar13,&local_c0);
      }
    }
    else if (bVar1 < 0xd) {
      mobyutil::Delt(*(float *)((int)pvVar7 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 6.0,
                     (float *)((int)pvVar7 + 0xf4));
      uVar21 = FUN_005e8338((double)(*(float *)((int)pvVar7 + 0x170) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar7 + 0x174) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13);
      dVar20 = (double)mathfunc::cosf((moby->rotation).z);
      dVar22 = 2.0;
      local_100 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_fc = (float)(dVar20 * dVar22);
      local_f8 = 0;
      dVar20 = 1.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_100,auStack_f0)
      ;
      mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      fVar3 = (moby->pos).y - *(float *)((int)pvVar7 + 0x174);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar7 + 0x170);
      fVar5 = (moby->pos).z - *(float *)((int)pvVar7 + 0x178);
      if (dVar20 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
        if ((*(int *)((int)pvVar7 + 0x164) != 2) &&
           (moby->state = '\b', moby->animationId != '\x01')) {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
      }
      else {
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 20.5));
        }
      }
    }
    else {
      mobyutil::Delt(*(float *)((int)pvVar7 + 0x1a4) * 3.0 * mobyutil::g_FrameTime,
                     DAT_0071f418 * 20.0,(float *)((int)pvVar7 + 0xf4));
      uVar21 = FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3fa99999a0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13);
      dVar23 = (double)(moby->rotation).z;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar15 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar15 + 0x14) - (moby->pos).y));
      dVar20 = (double)fastfunc::FastWrapRot((float)dVar20,3.14159);
      (moby->rotation).z = (float)dVar20;
      dVar20 = (double)mathfunc::cosf((float)dVar20);
      dVar22 = 2.0;
      local_120 = (float)(dVar20 * 2.0);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_11c = (float)(dVar20 * dVar22);
      local_118 = 0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar7 + 0xd0),&local_120,auStack_110
                );
      (moby->rotation).z = (float)dVar23;
      mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0));
      iVar17 = fastfunc::FastDecTimerS32(uVar19 + 0x1a8);
      if ((iVar17 != 0) ||
         (fVar3 = (moby->pos).y - *(float *)(iVar15 + 0x14),
         fVar4 = (moby->pos).x - *(float *)(iVar15 + 0x10),
         fVar5 = (moby->pos).z - *(float *)(iVar15 + 0x18),
         DAT_00740654 < SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3))) {
        moby->state = '\v';
        *(float *)((int)pvVar7 + 0xf4) = mobyutil::g_FrameTime * 5.0;
        if (DAT_0074065c == 0) {
          if (moby->animationId != '\x04') {
            local_60 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar13,4,10,(int)(animationSpeed * 10.5));
          }
        }
        else if (moby->animationId != '\x04') {
          local_60 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar13,4,DAT_00e61fc0,(int)(animationSpeed * 5.5));
        }
      }
    }
  }
  else if (bVar1 < 0x10) {
    if (bVar1 < 0xf) {
      uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
      if ((uVar16 & 0x41) != 0) {
        iVar15 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,
                            (Vec4 *)Splines[*(int *)((int)pvVar7 + 0x1b0)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x1b0)]->cnt);
        if (iVar15 == 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->state = '\r';
        moby->unk58 = 1.0;
        if (moby->animationId != '\x01') {
          local_60 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = loadVectorLeftIndexed(0x34,0x1a0264);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1a8,
                            uVar19);
        *(undefined4 *)((int)pvVar7 + 0x1a8U & 0xfffffffc) = uVar14;
      }
      mobyutil::MB_PushOutOfSplineWalls
                (0x3fe0000000000000,*(undefined4 *)((int)pvVar7 + 0x1b0),
                 *(undefined4 *)((int)pvVar7 + 0x1b0),lVar13 + 0x10,lVar13 + 0x10);
    }
    else {
      dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAng
                ((float)dVar20,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                 mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar7 + 400));
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 4.0) &&
         (moby->state = '\x10', moby->animationId != '\x04')) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 20.5));
      }
    }
  }
  else if (bVar1 < 0x11) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAng
              ((float)dVar20,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar7 + 400));
    dVar20 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((dVar20 <= 1.0) || (dVar20 = (double)mobyfunc::BlendAnimFrame(moby), 8.0 <= dVar20)) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x0f', moby->animationId != '\x02')) {
        local_60 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 20.5));
      }
    }
    else {
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      mobyfunc::GetBonePosition(lVar13,0,auStack_e0);
      local_7c = 1;
      local_70 = 1;
      local_74 = 0x3f800000;
      local_80 = moby;
      dVar20 = (double)mathfunc::cosf((moby->rotation).z);
      local_90 = (float)dVar20;
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_8c = (float)dVar20;
      local_88 = 0;
      collproc::CollMobySphere(0x3fe0000000000000,auStack_e0,0,0,lVar13,&local_90);
      collproc::CollLine(auStack_e0,lVar13 + 0x10,0,lVar13,&local_90);
    }
  }
  else if (bVar1 < 0x12) {
    uVar16 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x70));
    if ((uVar16 & 0x40) == 0) {
      fVar2 = (moby->pos).z;
      uVar16 = (int)fVar2 >> 0x1f;
      if ((int)((uVar16 >> 1 ^ (uint)fVar2) - uVar16) < 0x40000000) {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      local_d0 = (moby->pos).x;
      local_cc = (moby->pos).y;
      local_c8 = (moby->pos).z;
      local_c4 = (moby->pos).w;
      mobyutil::MB_SpawnExplosionSparks2
                (0x3ff8000000000000,0x4024000000000000,lVar13,&local_d0,&DAT_001a0264,
                 0xffffffffffffffff);
      mobyutil::MB_SpawnDebris(lVar13,0x6a0,2,0x69f,1,5,2);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 001a1e24  ns=Global  size=0x6c
// sig: undefined FUN_001a1e24(void)
// callers(2): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_001a1e24(longlong param_1)

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
      MVar1 = MobyInstance[uVar3].modeBits;
      MobyInstance[uVar3].state = '\x12';
      pMVar4[uVar3].collision = (ushort *)0x0;
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 001a1e90  ns=Global  size=0x7c
// sig: undefined FUN_001a1e90(void)
// callers(2): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_001a1e90(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  ushort *puVar6;
  
  puVar6 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 != (ushort *)0x0) {
    do {
      pMVar5 = MobyInstance;
      uVar3 = *puVar6 & 0x7fff;
      if (MobyInstance[uVar3].state == '\x12') {
        pMVar4 = MobyInstance + uVar3;
        MVar1 = MobyInstance[uVar3].modeBits;
        MobyInstance[uVar3].state = '\0';
        pMVar5[uVar3].collision = pMVar4->pClass->collision;
        pMVar5[uVar3].modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}



//==== 001a1f0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1049_001a1f0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1049_001a1f0c(void)

{
  DAT_007406b8 = 0x10000;
  return;
}



//==== 001a1f28  ns=mobyupdate_helpers  size=0x134
// sig: undefined M1049_001a1f28(void)
// callers(2): 00196d68 mobyupdate_helpers::M1045_00196d68; 001bfdb8 mobyupdate_helpers::M1106_001bfdb8
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot; 00127ea8 partupd::SpawnPart_26

MobyInstance *
mobyupdate_helpers::M1049_001a1f28(f32 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  MobyModeBit MVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = mobyfunc::CreateMoby(0x419);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar3 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).y = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).z = (float)dVar5;
    (pMVar4->pos).x = *param_1;
    (pMVar4->pos).y = param_1[1];
    (pMVar4->pos).z = param_1[2];
    (pMVar4->pos).w = param_1[3];
    *puVar3 = *param_2;
    MVar2 = pMVar4->modeBits;
    puVar3[1] = param_2[1];
    uVar1 = param_2[2];
    puVar3[4] = param_3;
    puVar3[2] = uVar1;
    uVar1 = param_2[3];
    pMVar4->modeBits = MVar2 | DRAW_TRANSPARENT_WEIRD;
    puVar3[3] = uVar1;
    pMVar4->alpha = '0';
    mobyfunc::UpdateMobyTransform(pMVar4);
    partupd::SpawnPart_26
              (0x411e848000000000,pMVar4,&DAT_001a1f20,0xffffffff800040ff,0x80,0xffffffffffffffff);
  }
  return pMVar4;
}



//==== 001a2090  ns=mobyupdate_unsorted  size=0x2f0
// sig: undefined UpdateMoby_1049(MobyInstance * moby)
// callers(0): 
// callees(6): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 001314c8 partupd::SpawnPart_61; 0015d12c sound::PlayMobySound

/* Moby 1049 */

void mobyupdate_unsorted::UpdateMoby_1049(MobyInstance *moby)

{
  float fVar1;
  MOBY_OCLASSES MVar2;
  float *pfVar3;
  MobyClass *pMVar4;
  f32 fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_30 [24];
  
  lVar7 = (longlong)(int)moby;
  pfVar3 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar3;
  (moby->pos).y = (moby->pos).y + pfVar3[1];
  pMVar4 = moby->pClass;
  (moby->pos).z = (moby->pos).z + pfVar3[2];
  pfVar3[2] = -(DAT_0071f418 * 9.8 - pfVar3[2]);
  fVar1 = moby->scale;
  (moby->rotation).z = mobyutil::g_FrameTime * 6.2831855 + (moby->rotation).z;
  if (fVar1 < pMVar4->gScale * 2.8) {
    moby->scale = fVar1 * 1.2;
  }
  if (worldUpdateTime % 3 == 0) {
    partupd::SpawnPart_61(0x41186a0000000000,0x4014000000000000,lVar7,0);
  }
  iVar8 = collproc::CollLine(local_30,lVar7 + 0x10,0,pfVar3[4],0);
  if ((iVar8 == 0) &&
     (iVar8 = collproc::CollSphere(0x3fb99999a0000000,lVar7 + 0x10,&DAT_001a205c,0,pfVar3[4]),
     iVar8 == 0)) {
LAB_001a22c8:
    fVar5 = (moby->pos).x;
    uVar6 = (int)fVar5 >> 0x1f;
    iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
    if ((((0x3fffffff < iVar8) && (iVar8 < 0x447f4001)) &&
        (fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar8 < 0x447f4001 && 0x3fffffff < iVar8)) &&
       ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x3fffffff < iVar8 && (iVar8 < 0x447f4001)))) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
  }
  else {
    if (CollOutput.pMoby != (MobyInstance *)0x0) {
      MVar2 = (CollOutput.pMoby)->oClass;
      if ((MVar2 == 0x419 || MVar2 == 0x415) || (MVar2 == BLARGIAN_SNAGGLEBEAST)) goto LAB_001a22c8;
    }
    if (moby->enabled == '\0') {
      sound::PlayMobySound(0,0,moby);
    }
    else {
      mobyutil::MB_genericExplosion
                (0x4000000000000000,0x3ff0000000000000,0,0,0x408f400000000000,0x3ff3333340000000,
                 0x4024000000000000,lVar7,pfVar3,0,0,1,0,3,5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001a2380  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1049_001a2380(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1049_001a2380(void)

{
  DAT_00740728 = 0x10000;
  return;
}



//==== 001a2398  ns=mobyupdate_unsorted  size=0x168
// sig: undefined UpdateMoby_105(MobyInstance * moby)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

/* Moby 105 */

void mobyupdate_unsorted::UpdateMoby_105(MobyInstance *moby)

{
  u8 uVar1;
  u8 uVar2;
  
  uVar2 = moby->state;
  if (uVar2 == '\0') {
    uVar2 = '\x01';
    moby->state = '\x01';
LAB_001a23cc:
    if ((((g_downButtons & DAT_0096ad80) != 0) && (g_heroState == UNK_17)) &&
       (g_heroMobyPtr->updateId == '\0')) {
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(moby,3,0,3);
      }
      moby->state = '\x02';
      goto LAB_001a2444;
    }
  }
  else if (uVar2 == '\x01') goto LAB_001a23cc;
  if (uVar2 != '\x02') {
    return;
  }
LAB_001a2444:
  uVar2 = moby->updateId;
  uVar1 = moby->animationId;
  if ((uVar2 == uVar1) && ((moby->field43_0x70 & 2U) != 0)) {
    if (uVar2 == '\x03') {
      if (uVar1 != '\x04') {
        mobyutil::MB_SetAnimation(moby,4,0,5);
      }
    }
    else if (uVar2 == '\x04') {
      if (uVar1 != '\x05') {
        mobyutil::MB_SetAnimation(moby,5,0,5);
      }
    }
    else if (uVar2 == '\x05') {
      if (uVar1 != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,5);
      }
      moby->state = '\x01';
    }
  }
  return;
}



//==== 001a2500  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1051_001a2500(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1051_001a2500(void)

{
  DAT_00740798 = 0x10000;
  return;
}



//==== 001a2558  ns=mobyupdate_helpers  size=0x8c8
// sig: undefined M1051_001a2558(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(6): 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M1051_001a2558(int param_1)

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
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x170;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar16;
  puVar12[0x30] = in_LR;
  puVar12[0x28] = in_f26;
  puVar12[0x29] = in_f27;
  puVar12[0x2a] = in_f28;
  puVar12[0x2b] = in_f29;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x23] = unaff_r27;
  puVar12[0x26] = unaff_r30;
  fVar4 = g_heroPosition.y;
  iVar9 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar9 + 0xd0);
  fVar2 = *(float *)(iVar9 + 0xd4);
  fVar3 = g_heroPosition.x - fVar1;
  puVar12[0x25] = unaff_r29;
  puVar12[0x24] = unaff_r28;
  fVar4 = fVar4 - fVar2;
  iVar10 = *(int *)(iVar9 + 0xb0);
  puVar12[0x27] = unaff_r31;
  fVar7 = ABS(fVar3);
  fVar5 = ABS(fVar4);
  *(float *)(puVar12 + 0x11) = fVar3;
  *(float *)((int)puVar12 + 0x8c) = fVar4;
  *(float *)(puVar12 + 0x12) = fVar7 - fVar5;
  dVar33 = 0.0;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1d) & 4;
  fVar6 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar6 = fVar5;
  }
  fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  fVar15 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)(puVar12 + 0x12) - 0.0 < 0.0) {
    fVar15 = fVar7;
  }
  dVar32 = 0.7853981852531433;
  puVar12[0x22] = unaff_r26;
  dVar28 = dVar33;
  if (0.0 < fVar6) {
    lVar17 = uVar16 - 0x160;
    lVar21 = uVar16 - 0x8c;
    lVar19 = uVar16 - 0x9c;
    lVar23 = 2;
    fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar12 + 0x1c) = fVar6;
    *(float *)(puVar12 + 0x1b) = fVar6;
    *(float *)((int)puVar12 + 0xdc) = fVar6;
    *(float *)((int)puVar12 + 0xd4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar7;
    *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar6;
    *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0x9c;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar20;
      fVar7 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar13 + 0xd4)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar5);
  }
  fVar3 = fVar3 - fVar1;
  fVar4 = fVar4 - fVar2;
  fVar6 = ABS(fVar3);
  fVar2 = ABS(fVar4);
  *(float *)((int)puVar12 + 0x7c) = fVar3;
  *(float *)(puVar12 + 0x10) = fVar4;
  *(float *)((int)puVar12 + 0x84) = fVar6 - fVar2;
  uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)((int)puVar12 + 0x7c));
  if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar3 = ABS(*(float *)(puVar12 + 0x10));
  if (*(float *)((int)puVar12 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar26 = dVar33;
  if (0.0 < fVar1) {
    lVar17 = uVar16 - 0x160;
    lVar19 = uVar16 - 0xbc;
    lVar21 = uVar16 - 0xac;
    lVar23 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar12 + 0x18) = fVar1;
    *(float *)(puVar12 + 0x17) = fVar1;
    *(float *)((int)puVar12 + 0xbc) = fVar1;
    *(float *)((int)puVar12 + 0xb4) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar12 + 0x17) = *(float *)(puVar12 + 0x17) * fVar3;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar1;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0xbc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0xb4)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar4);
  }
  uVar24 = fastfunc::FastWrapRot((float)dVar28,3.14159);
  dVar25 = (double)fastfunc::FastDiffRots(uVar24,dVar26);
  dVar28 = dVar32;
  if ((dVar25 <= dVar32) && (dVar28 = dVar25, dVar25 < -0.7853981852531433)) {
    dVar28 = -0.7853981852531433;
  }
  dVar26 = (double)fastfunc::FastWrapRot((float)dVar28,(float)dVar26);
  fVar1 = (float)(dVar26 + 1.570796251296997);
  fVar6 = *(float *)(iVar10 + 0x10) - *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(iVar9 + 0xdc);
  fVar5 = *(float *)(iVar10 + 0x14) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(iVar9 + 0xd0);
  fVar4 = *(float *)(iVar9 + 0xd4);
  dVar31 = (double)*(float *)(iVar9 + 0xd8);
  dVar25 = ABS((double)fVar6);
  dVar28 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar28 = dVar26;
  }
  fVar7 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar7 = fVar1;
  }
  dVar30 = ABS((double)fVar5);
  dVar34 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar28 < 0.0) {
    dVar34 = dVar28;
  }
  *(float *)(puVar12 + 0xe) = fVar6;
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar7 < 0.0) {
    fVar6 = fVar7;
  }
  dVar29 = (double)(float)(dVar34 * dVar34);
  *(float *)(puVar12 + 0xf) = (float)(dVar25 - dVar30);
  *(float *)((int)puVar12 + 0x74) = fVar5;
  fVar7 = fVar6 * fVar6;
  dVar26 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar34));
  fVar1 = fVar7 * fVar7 * fVar6;
  dVar27 = (double)(float)(dVar29 * dVar26);
  fVar5 = fVar7 * fVar1;
  uVar22 = (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1d) & 4;
  pfVar20 = (float *)(uVar22 << 2);
  dVar28 = ABS((double)*(float *)(puVar12 + 0xe));
  if ((double)*(float *)(puVar12 + 0xf) - dVar33 < 0.0) {
    dVar28 = dVar30;
  }
  dVar34 = (double)(((float)(dVar29 * dVar27) * 2.601887e-06 +
                    (float)(dVar27 * -0.0001980741071747616 +
                           (double)(float)(dVar26 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar29 * dVar34) *
                                                          -0.16666656732559204 + dVar34)))) * fVar2
                   + fVar4);
  fVar4 = pfVar20[0x1cd640];
  dVar26 = ABS((double)*(float *)((int)puVar12 + 0x74));
  if ((double)*(float *)(puVar12 + 0xf) - dVar33 < 0.0) {
    dVar26 = dVar25;
  }
  dVar30 = (double)((fVar7 * fVar5 * 2.601887e-06 +
                    fVar5 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6) * fVar2 + fVar3);
  fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar25 = dVar33;
  if (dVar33 < dVar28) {
    lVar17 = uVar16 - 0x160;
    lVar21 = uVar16 - 0xcc;
    lVar19 = uVar16 - 0xdc;
    lVar23 = 2;
    fVar2 = (float)(dVar26 - dVar28) / (float)(dVar26 + dVar28);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar12 + 0x14) = fVar2;
    *(float *)(puVar12 + 0x13) = fVar2;
    *(float *)((int)puVar12 + 0x9c) = fVar2;
    *(float *)((int)puVar12 + 0x94) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar3;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar2;
    *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar2 * fVar2;
      iVar10 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar16 - 0xdc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar2 = *pfVar20;
      fVar3 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    dVar28 = dVar33;
    do {
      iVar10 = (int)lVar18;
      iVar13 = (int)lVar21;
      lVar18 = lVar18 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar25 = (double)((float)(dVar28 + dVar32) * fVar4 + fVar1);
  }
  mobyutil::OrganicDeltAng
            ((float)dVar25,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
             mobyutil::g_FrameTime * 3.1415927,(float *)(param_1 + 0x48),(int)pfVar20,
             (float *)(iVar9 + 0xe0));
  fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar34);
  fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar30);
  fVar3 = (float)((double)*(float *)(param_1 + 0x18) - dVar31);
  uVar24 = 0x3ff0000000000000;
  if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) <= 1.0) ||
     (fVar1 = (float)((double)*(float *)(param_1 + 0x14) - (double)g_heroPosition.y),
     fVar2 = (float)((double)*(float *)(param_1 + 0x10) - (double)g_heroPosition.x),
     16.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
    mobyutil::Delt((float)dVar33,DAT_007407c8 * DAT_0071f418,(float *)(iVar9 + 0xe8));
  }
  else {
    mobyutil::Delt(DAT_007407c4 * mobyutil::g_FrameTime,DAT_007407c8 * DAT_0071f418,
                   (float *)(iVar9 + 0xe8));
  }
  if (*(int *)(iVar9 + 0xe8) == 0) {
    if (*(char *)(param_1 + 0x53) != '\x01') {
      puVar12[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar12 + 0xfc));
    }
  }
  else if (*(char *)(param_1 + 0x53) != '\0') {
    puVar12[0x1f] = (longlong)(int)(animationSpeed * 20.5);
    mobyutil::MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar12 + 0xfc));
  }
  fVar2 = (float)(dVar34 - (double)*(float *)(param_1 + 0x14));
  fVar3 = (float)(dVar30 - (double)*(float *)(param_1 + 0x10));
  uVar11 = *(undefined4 *)(iVar9 + 0xec);
  dVar25 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar9 + 0xe8) / dVar25);
  dVar32 = (double)(fVar1 * fVar2);
  dVar26 = (double)(fVar1 * fVar3);
  dVar28 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar28 = dVar32;
  }
  dVar31 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar31 = dVar26;
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar28 = dVar32;
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar31 = dVar26;
  }
  *(float *)(param_1 + 0x14) = (float)((double)*(float *)(param_1 + 0x14) + dVar28);
  *(float *)(param_1 + 0x10) = (float)((double)*(float *)(param_1 + 0x10) + dVar31);
  mobyutil::MB_PushOutOfSplineWalls(uVar24,uVar11);
  return;
}



//==== 001a2e28  ns=mobyupdate_helpers  size=0xf8
// sig: undefined M1051_001a2e28(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 0047ca58 FUN_0047ca58

void mobyupdate_helpers::M1051_001a2e28(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  double dVar3;
  double dVar4;
  undefined1 local_40 [24];
  
  puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)(*(int *)(param_1 + 0x78) + 0xf0)];
  if (puVar2 != (ushort *)0x0) {
    dVar3 = 15.0;
    dVar4 = 20.0;
    do {
      uVar1 = *puVar2;
      mobyutil::MB_randRangeFloat((float)dVar3,(float)dVar4);
      FUN_0047ca58(MobyInstance + (uVar1 & 0x7fff),local_40);
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 001a2f20  ns=mobyupdate_helpers  size=0x64
// sig: undefined M1051_001a2f20(void)
// callers(0): 
// callees(2): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement

void mobyupdate_helpers::M1051_001a2f20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  hero::TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  camera::camera5::Camera_DeactivateMobyDrivenCam(2);
  return;
}



//==== 001a2fb0  ns=mobyupdate_helpers  size=0x644
// sig: undefined M1051_001a2fb0(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(3): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00109c30 mobyutil::OrganicDelt

undefined8 mobyupdate_helpers::M1051_001a2fb0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1f] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x20] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1e] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\x06') {
    dVar27 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.field8_0x14c;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar28 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 0.5,DAT_0071f418 * 0.5,mobyutil::g_FrameTime * 0.5,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar24 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar27 = (double)*(float *)(param_1 + 0x10);
    dVar28 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    dVar29 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          hero::g_heroMtx * hero::g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    fVar8 = (float)((double)g_heroPosition.z + 2.0);
    fVar4 = (float)(-7.0 / dVar29);
    dVar31 = (double)(fVar3 * (float)(8.0 / dVar24));
    dVar26 = (double)(fVar1 * (float)(8.0 / dVar24));
    dVar30 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar30 = dVar31;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar25 = dVar26;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar30 = dVar31;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar25 = dVar26;
    }
    dVar31 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar26 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar26 = (double)(hero::g_heroMtx * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar26 = (double)(hero::g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.y) - (float)(dVar30 + dVar28)) +
            (float)(dVar30 + dVar28);
    fVar4 = fVar2 * ((float)(dVar26 + (double)g_heroPosition.x) - (float)(dVar25 + dVar27)) +
            (float)(dVar25 + dVar27);
    fVar8 = fVar2 * (((float)(dVar31 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar27 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar3);
  dVar29 = ABS((double)fVar1);
  dVar31 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar29 - dVar31);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar32;
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar30 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar28);
  fVar4 = (float)((double)fVar4 - dVar27);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar29;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar31 = ABS((double)fVar1);
  dVar29 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar29 - dVar31);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}



//==== 001a35f4  ns=mobyupdate_helpers  size=0x64
// sig: undefined M1051_001a35f4(void)
// callers(0): 
// callees(2): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement

void mobyupdate_helpers::M1051_001a35f4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  hero::TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  camera::camera5::Camera_DeactivateMobyDrivenCam(2);
  return;
}



//==== 001a3680  ns=mobyupdate_helpers  size=0x644
// sig: undefined M1051_001a3680(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(3): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00109c30 mobyutil::OrganicDelt

undefined8 mobyupdate_helpers::M1051_001a3680(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1f] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x20] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1e] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\x06') {
    dVar27 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.field8_0x14c;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar28 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 0.5,DAT_0071f418 * 0.5,mobyutil::g_FrameTime * 0.5,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar24 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar27 = (double)*(float *)(param_1 + 0x10);
    dVar28 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    dVar29 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          hero::g_heroMtx * hero::g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    fVar8 = (float)((double)g_heroPosition.z + 2.0);
    fVar4 = (float)(-7.0 / dVar29);
    dVar31 = (double)(fVar3 * (float)(8.0 / dVar24));
    dVar26 = (double)(fVar1 * (float)(8.0 / dVar24));
    dVar30 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar30 = dVar31;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar24 < 0.0) {
      dVar25 = dVar26;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar30 = dVar31;
    }
    if (dVar24 - dVar32 < 0.0) {
      dVar25 = dVar26;
    }
    dVar31 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar26 = dVar32;
    if (dVar32 - dVar29 < 0.0) {
      dVar26 = (double)(hero::g_heroMtx * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar31 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar24 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar29 - dVar32 < 0.0) {
      dVar26 = (double)(hero::g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.y) - (float)(dVar30 + dVar28)) +
            (float)(dVar30 + dVar28);
    fVar4 = fVar2 * ((float)(dVar26 + (double)g_heroPosition.x) - (float)(dVar25 + dVar27)) +
            (float)(dVar25 + dVar27);
    fVar8 = fVar2 * (((float)(dVar31 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar27 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar3);
  dVar29 = ABS((double)fVar1);
  dVar31 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar29 - dVar31);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = dVar32;
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar30 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar29 = (double)((float)(dVar30 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar28);
  fVar4 = (float)((double)fVar4 - dVar27);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar29;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar31 = ABS((double)fVar1);
  dVar29 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar29 - dVar31);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar31 = dVar29;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar30) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}



//==== 001a3cc4  ns=mobyupdate_helpers  size=0x64
// sig: undefined M1051_001a3cc4(void)
// callers(0): 
// callees(2): 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement

void mobyupdate_helpers::M1051_001a3cc4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  hero::TransitionMovement(0,0);
  Splines[*(int *)(iVar1 + 0xec)]->cnt = *(int32_t *)(iVar1 + 0x114);
  camera::camera5::Camera_DeactivateMobyDrivenCam(2);
  return;
}



//==== 001a3d50  ns=mobyupdate_helpers  size=0x644
// sig: undefined M1051_001a3d50(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(3): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00109c30 mobyutil::OrganicDelt

undefined8 mobyupdate_helpers::M1051_001a3d50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  char acVar12 [4];
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x170;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar15;
  puVar11[0x30] = in_LR;
  puVar11[0x20] = in_f18;
  puVar11[0x21] = in_f19;
  puVar11[0x22] = in_f20;
  puVar11[0x23] = in_f21;
  puVar11[0x24] = in_f22;
  puVar11[0x25] = in_f23;
  puVar11[0x26] = in_f24;
  puVar11[0x27] = in_f25;
  puVar11[0x28] = in_f26;
  puVar11[0x29] = in_f27;
  puVar11[0x2a] = in_f28;
  puVar11[0x2b] = in_f29;
  puVar11[0x2c] = in_f30;
  puVar11[0x2d] = in_f31;
  puVar11[0x1e] = unaff_r30;
  iVar9 = *(int *)(param_1 + 0x78);
  puVar11[0x1f] = unaff_r31;
  cVar5 = *(char *)(param_1 + 0x53);
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  puVar11[0x1d] = unaff_r29;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  fVar3 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  if (cVar5 == '\b') {
    dVar26 = (double)*(float *)(param_1 + 0x10);
    *(float *)(puVar11 + 0xe) = GameCamera.posX;
    fVar8 = GameCamera.posZ;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    acVar12 = GameCamera.field8_0x14c;
    *(float *)(puVar11 + 0xf) = fVar8;
    dVar27 = (double)*(float *)(param_1 + 0x14);
  }
  else {
    dVar29 = 2.0;
    mobyutil::OrganicDelt
              (1.0,DAT_0071f418 * 3.0,DAT_0071f418 * 3.0,mobyutil::g_FrameTime * 2.0,
               (float *)(iVar9 + 0x118),0x720000,(float *)(iVar9 + 0x11c));
    acVar12 = DAT_00969cec;
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar1 = *(float *)(param_1 + 0xc0);
    dVar28 = (double)SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
                          fVar1 * fVar1 + fVar3 * fVar3);
    dVar31 = (double)SQRT(DAT_00969ce8 * DAT_00969ce8 +
                          hero::g_heroMtx * hero::g_heroMtx + DAT_00969ce4 * DAT_00969ce4);
    dVar26 = (double)*(float *)(param_1 + 0x10);
    dVar27 = (double)*(float *)(param_1 + 0x14);
    fVar2 = *(float *)(iVar9 + 0x118);
    fVar8 = (float)((double)g_heroPosition.z + dVar29);
    fVar4 = (float)(-7.0 / dVar31);
    dVar30 = (double)(fVar3 * (float)(8.0 / dVar28));
    dVar24 = (double)(fVar1 * (float)(8.0 / dVar28));
    dVar29 = dVar32;
    if (dVar32 - dVar28 < 0.0) {
      dVar29 = dVar30;
    }
    dVar25 = dVar32;
    if (dVar32 - dVar28 < 0.0) {
      dVar25 = dVar24;
    }
    if (dVar28 - dVar32 < 0.0) {
      dVar29 = dVar30;
    }
    if (dVar28 - dVar32 < 0.0) {
      dVar25 = dVar24;
    }
    dVar28 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar28 = (double)(DAT_00969ce8 * fVar4);
    }
    dVar30 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar30 = (double)(DAT_00969ce4 * fVar4);
    }
    dVar24 = dVar32;
    if (dVar32 - dVar31 < 0.0) {
      dVar24 = (double)(hero::g_heroMtx * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar28 = (double)(DAT_00969ce8 * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar30 = (double)(DAT_00969ce4 * fVar4);
    }
    if (dVar31 - dVar32 < 0.0) {
      dVar24 = (double)(hero::g_heroMtx * fVar4);
    }
    fVar3 = fVar2 * ((float)(dVar30 + (double)g_heroPosition.y) - (float)(dVar29 + dVar27)) +
            (float)(dVar29 + dVar27);
    fVar4 = fVar2 * ((float)(dVar24 + (double)g_heroPosition.x) - (float)(dVar25 + dVar26)) +
            (float)(dVar25 + dVar26);
    fVar8 = fVar2 * (((float)(dVar28 + (double)g_heroPosition.z) + 4.0) - fVar8) + fVar8;
    *(float *)((int)puVar11 + 0x74) = fVar3;
    *(float *)(puVar11 + 0xe) = fVar4;
    *(float *)(puVar11 + 0xf) = fVar8;
  }
  fVar1 = (float)(dVar26 - (double)fVar4);
  fVar2 = (float)(dVar27 - (double)fVar3);
  dVar28 = ABS((double)fVar1);
  dVar30 = ABS((double)fVar2);
  *(float *)((int)puVar11 + 0x9c) = fVar1;
  *(float *)(puVar11 + 0x14) = fVar2;
  *(char (*) [4])((int)puVar11 + 0x7c) = acVar12;
  *(float *)((int)puVar11 + 0xa4) = (float)(dVar28 - dVar30);
  uVar20 = (ulonglong)(*(uint *)((int)puVar11 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)((int)puVar11 + 0x9c));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar29 = dVar30;
  }
  fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar30 = ABS((double)*(float *)(puVar11 + 0x14));
  if ((double)*(float *)((int)puVar11 + 0xa4) - dVar32 < 0.0) {
    dVar30 = dVar28;
  }
  fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (dVar32 < dVar29) {
    lVar16 = uVar15 - 0x160;
    lVar21 = uVar15 - 0x98;
    lVar19 = uVar15 - 0xa8;
    lVar23 = 2;
    fVar6 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar11 + 0xd4) = fVar6;
    *(float *)((int)puVar11 + 0xcc) = fVar6;
    *(float *)(puVar11 + 0x1a) = fVar6;
    *(float *)(puVar11 + 0x19) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar7;
    *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar6;
    *(float *)((int)puVar11 + 0xd4) = *(float *)((int)puVar11 + 0xd4) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar6 * fVar6;
      iVar13 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 0xa8;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar16 = lVar17;
    dVar29 = dVar32;
    do {
      iVar13 = (int)lVar16;
      iVar14 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar13 + 200)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar28 = (double)((float)(dVar29 + 0.7853981852531433) * fVar1 + fVar2);
  }
  fVar3 = (float)((double)fVar3 - dVar27);
  fVar4 = (float)((double)fVar4 - dVar26);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar11 + 0x11) = (float)dVar28;
  fVar1 = fVar1 - fVar8;
  fVar4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)((int)puVar11 + 0x94) = fVar1;
  dVar30 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar4);
  *(float *)(puVar11 + 0x12) = fVar4;
  *(float *)(puVar11 + 0x13) = (float)(dVar28 - dVar30);
  fVar4 = *(float *)(iVar9 + 0x118);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x94) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)(puVar11 + 0x12));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar29 = dVar30;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x94));
  if ((double)*(float *)(puVar11 + 0x13) - dVar32 < 0.0) {
    dVar30 = dVar28;
  }
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  if (dVar32 < dVar29) {
    lVar16 = uVar15 - 0x160;
    lVar19 = uVar15 - 200;
    lVar21 = uVar15 - 0xb8;
    lVar23 = 2;
    fVar1 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
    fVar2 = fVar1 * fVar1;
    *(float *)((int)puVar11 + 0xb4) = fVar1;
    *(float *)((int)puVar11 + 0xac) = fVar1;
    *(float *)(puVar11 + 0x16) = fVar1;
    *(float *)(puVar11 + 0x15) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)((int)puVar11 + 0xac) = *(float *)((int)puVar11 + 0xac) * fVar2;
    *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar1;
    *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar1 * fVar1;
      iVar13 = (int)lVar19;
      lVar16 = lVar16 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar15 - 200;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar22;
      fVar2 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar1;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar13 + 0xa8)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar8);
  }
  *(float *)((int)puVar11 + 0x84) =
       -(float)((double)((1.0 - fVar4) * 30.0) * 0.01745329238474369 - -dVar32);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0xe));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x10));
  uVar18 = 0;
  uVar10 = (int)*(uint *)(iVar9 + 0x118) >> 0x1f;
  if ((0x3f7fffff < (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x118)) - uVar10)) &&
     (uVar18 = 0, *(char *)(param_1 + 0x53) == '\x01')) {
    uVar18 = 1;
  }
  return uVar18;
}



//==== 001a43a8  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1051_001a43a8(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(4): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000a0c38 hero::Hero_Warp

void mobyupdate_helpers::M1051_001a43a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
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
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  hero::Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  camera::SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}



//==== 001a48d0  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1051_001a48d0(void)
// callers(1): 001a5360 mobyupdate_helpers::M1051_001a5360
// callees(4): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000a0c38 hero::Hero_Warp

void mobyupdate_helpers::M1051_001a48d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
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
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  hero::Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  camera::SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}



//==== 001a4df8  ns=mobyupdate_helpers  size=0x514
// sig: undefined M1051_001a4df8(void)
// callers(1): 001a5360 mobyupdate_helpers::M1051_001a5360
// callees(4): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000a0c38 hero::Hero_Warp

void mobyupdate_helpers::M1051_001a4df8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  Cuboid *pCVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar19;
  longlong lVar18;
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
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar13;
  puVar9[0x26] = in_LR;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r30;
  puVar9[0x1f] = unaff_r29;
  puVar9[0x1e] = unaff_r28;
  puVar9[0x21] = unaff_r31;
  pCVar12 = Cuboids;
  iVar8 = *(int *)(param_1 + 0x78);
  dVar29 = 0.0;
  *(undefined4 *)(iVar8 + 0x118) = 0;
  hero::Hero_Warp(&pCVar12[*(int *)(iVar8 + 0xf8)].pos.x,&pCVar12[*(int *)(iVar8 + 0xf8)].rot.x,0x72
                  ,0);
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0xc0);
  fVar3 = *(float *)(param_1 + 200);
  dVar26 = (double)*(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  dVar27 = (double)fVar4;
  *(float *)(puVar9 + 0xe) = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_1 + 0x18);
  *(float *)((int)puVar9 + 0x74) = fVar4;
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar9 + 0xf) = fVar5;
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar6;
  fVar7 = g_heroPosition.z + 2.0;
  *(undefined4 *)((int)puVar9 + 0x8c) = 0;
  dVar22 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  *(undefined4 *)(puVar9 + 0x10) = 0;
  fVar4 = (float)(8.0 / dVar22);
  dVar25 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  dVar24 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  dVar23 = dVar29;
  if (dVar29 - dVar22 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar25 = (double)(fVar1 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar24 = (double)(fVar2 * fVar4);
  }
  if (dVar22 - dVar29 < 0.0) {
    dVar23 = (double)(fVar3 * fVar4);
  }
  dVar21 = (double)(float)(dVar27 + dVar25);
  dVar22 = (double)(float)(dVar26 + dVar24);
  fVar4 = (float)((double)fVar7 + dVar23);
  fVar1 = (float)(dVar27 - dVar21);
  fVar2 = (float)(dVar26 - dVar22);
  dVar23 = ABS((double)fVar1);
  dVar28 = ABS((double)fVar2);
  *(float *)((int)puVar9 + 0x9c) = fVar2;
  *(float *)(puVar9 + 0x14) = fVar1;
  *(float *)(puVar9 + 0xe) = (float)(dVar26 + dVar24);
  *(float *)((int)puVar9 + 0x74) = (float)(dVar27 + dVar25);
  *(float *)((int)puVar9 + 0xa4) = (float)(dVar28 - dVar23);
  *(float *)(puVar9 + 0xf) = fVar4;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)((int)puVar9 + 0x9c));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar25 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar9 + 0x14));
  if ((double)*(float *)((int)puVar9 + 0xa4) - dVar29 < 0.0) {
    dVar24 = dVar28;
  }
  dVar23 = dVar29;
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar16 = uVar13 - 0x58;
    lVar18 = uVar13 - 0x48;
    lVar20 = 2;
    fVar3 = (float)(dVar24 - dVar25) / (float)(dVar24 + dVar25);
    fVar7 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xd4) = fVar3;
    *(float *)((int)puVar9 + 0xcc) = fVar3;
    *(float *)(puVar9 + 0x1a) = fVar3;
    *(float *)(puVar9 + 0x19) = fVar3;
    fVar3 = fVar7 * fVar7;
    *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar7;
    *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3;
    *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar3 * fVar7;
    do {
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar14 = lVar14 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x58;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar3 = *pfVar19;
      fVar7 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    lVar14 = lVar15;
    dVar25 = dVar29;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar10 + 200)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar25 + 0.7853981852531433) * fVar2 + fVar1);
  }
  fVar1 = (float)(dVar21 - dVar27);
  fVar2 = (float)(dVar22 - dVar26);
  *(float *)(puVar9 + 0x11) = (float)dVar23;
  fVar5 = fVar5 - fVar4;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  *(float *)((int)puVar9 + 0x94) = fVar5;
  dVar26 = ABS((double)fVar5);
  dVar22 = ABS((double)fVar4);
  *(float *)(puVar9 + 0x12) = fVar4;
  *(float *)(puVar9 + 0x13) = (float)(dVar22 - dVar26);
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1d) & 4;
  dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar25 = dVar26;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
  if ((double)*(float *)(puVar9 + 0x13) - dVar29 < 0.0) {
    dVar26 = dVar22;
  }
  fVar1 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar29 < dVar25) {
    lVar14 = uVar13 - 0x110;
    lVar18 = uVar13 - 0x68;
    lVar16 = uVar13 - 0x78;
    lVar20 = 2;
    fVar2 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar9 + 0xb4) = fVar2;
    *(float *)((int)puVar9 + 0xac) = fVar2;
    *(float *)(puVar9 + 0x16) = fVar2;
    *(float *)(puVar9 + 0x15) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar2;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar10 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar20 = 4;
    lVar18 = uVar13 - 0x78;
    pfVar19 = (float *)&DAT_007358e0;
    lVar14 = lVar15;
    lVar16 = lVar18;
    do {
      fVar2 = *pfVar19;
      fVar3 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar14 = 2;
    do {
      iVar10 = (int)lVar15;
      iVar11 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar10 + 0xa8)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar4 + fVar1);
  }
  *(float *)((int)puVar9 + 0x84) = (float)(-dVar29 - 0.5235987901687622);
  camera::SetCameraPosition(uVar13 - 0xb0,uVar13 - 0xa0,1,0,0);
  camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(uVar13 - 0xb0));
  camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(uVar13 - 0xa0));
  Splines[*(int *)(iVar8 + 0xec)]->cnt = 0;
  return;
}



//==== 001a5360  ns=mobyupdate_helpers  size=0xb74
// sig: undefined M1051_001a5360(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(17): 000a0c38 hero::Hero_Warp; 000c8b28 hud::Hud_SetEntryValueById; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 00151e70 respawn::SetSpawnPoint; 001a48d0 mobyupdate_helpers::M1051_001a48d0; 001a4df8 mobyupdate_helpers::M1051_001a4df8; 00500b64 fastfunc::FastEulerToMtx; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1051_001a5360(MobyInstance *param_1)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar15;
  longlong lVar16;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong uVar23;
  longlong lVar24;
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
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x110;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar14;
  puVar11[0x24] = in_LR;
  puVar11[0x20] = in_f30;
  puVar11[0x21] = in_f31;
  puVar11[0x1f] = unaff_r31;
  bVar3 = param_1->state;
  puVar11[0x1e] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar11[0x1d] = unaff_r29;
  if (bVar3 == 0) {
    return;
  }
  if (((3 < bVar3) && (bVar3 < 0xe)) && (*(int *)((int)pvVar9 + 0x108) != -1)) {
    DAT_0096bfba = (undefined2)*(int *)((int)pvVar9 + 0x108);
  }
  uVar17 = fastfunc::FastDoubleToInt((double)(*(float *)((int)pvVar9 + 0x20) * 16.0));
  *(undefined4 *)((int)pvVar9 + 0x110) = uVar17;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar11 + 0x74) = 0;
  iVar18 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar19 = mobyutil::MB_HandleDamage
                     (param_1,iVar18,uVar25 + 0x20,0,puVar11 + 0xe,(int)puVar11 + 0x74,0,4);
  dVar27 = (double)*(float *)((int)puVar11 + 0x74);
  if (((*(int *)(puVar11 + 0xe) == 1) ||
      (uVar4 = param_1->state, uVar4 == '\x03' || uVar4 == '\x0e')) || (uVar4 == '\x05'))
  goto LAB_001a56f4;
  if (*(int *)(iVar18 + 0x20) != 0) {
    sVar8 = *(short *)(*(int *)(iVar18 + 0x20) + 0xa6);
    if (sVar8 == 0x33b) {
LAB_001a54a4:
      dVar28 = dVar27 * 1.5;
      dVar27 = (double)(float)dVar28;
      *(float *)((int)puVar11 + 0x74) = (float)dVar28;
    }
    else if (sVar8 == 0x131) {
      dVar28 = dVar27 * 0.6660000085830688;
      dVar27 = (double)(float)dVar28;
      *(float *)((int)puVar11 + 0x74) = (float)dVar28;
    }
    else if ((sVar8 == 0xb0) || (sVar8 == 0x79)) goto LAB_001a54a4;
  }
  fVar2 = (float)((double)*(float *)((int)pvVar9 + 0x20) - dVar27);
  dVar28 = (double)fVar2;
  *(float *)((int)pvVar9 + 0x20) = fVar2;
  if (*(int *)((int)pvVar9 + 0x170) == 0) {
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    iVar18 = *(int *)((int)pvVar9 + 300);
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
    auVar32 = loadVectorLeftIndexed(0x14,0x1a530c);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    bVar1 = iVar18 < *(int *)((int)puVar11 + 0xd4);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    if (((bVar1) || (20.0 < dVar28)) || ((float)(dVar28 + dVar27) <= 20.0)) {
      if (((!bVar1) && (dVar28 <= 10.0)) && (10.0 < (float)(dVar28 + dVar27))) {
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x41200000;
        *(undefined4 *)((int)pvVar9 + 0x174) = 0x41200000;
        *(undefined4 *)((int)pvVar9 + 0x170) = 1;
        uVar17 = storeVectorElementWordIndexed(auVar32,300,uVar25);
        *(undefined4 *)((int)pvVar9 + 300U & 0xfffffffc) = uVar17;
        dVar28 = 10.0;
      }
    }
    else {
      *(undefined4 *)((int)pvVar9 + 0x20) = 0x41a00000;
      *(undefined4 *)((int)pvVar9 + 0x174) = 0x41a00000;
      *(undefined4 *)((int)pvVar9 + 0x170) = 1;
      uVar17 = storeVectorElementWordIndexed(auVar32,300,uVar25);
      *(undefined4 *)((int)pvVar9 + 300U & 0xfffffffc) = uVar17;
      dVar28 = 20.0;
    }
  }
  else {
    dVar27 = (double)*(float *)((int)pvVar9 + 0x174);
    if (dVar28 < dVar27) {
      *(float *)((int)pvVar9 + 0x20) = *(float *)((int)pvVar9 + 0x174);
      dVar28 = dVar27;
    }
  }
  if (dVar28 <= dVar31) {
LAB_001a5618:
    if (*(int *)((int)pvVar9 + 0x10c) != -1) {
      hud::Hud_SetEntryValueById(*(int *)((int)pvVar9 + 0x10c),0);
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0xffffffff;
    }
    param_1->state = '\x0e';
    mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    respawn::SetSpawnPoint
              ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0xf8)].pos,
               (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0xf8)].rot);
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    if (param_1->animationId != '\n') {
      puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(param_1,10,0,*(undefined4 *)((int)puVar11 + 0xd4));
    }
    *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
  }
  else if (iVar19 == 1) {
LAB_001a560c:
    *(undefined1 *)((int)pvVar9 + 0x67) = 200;
  }
  else if (iVar19 < 3) {
    if ((-1 < iVar19) && (0 < iVar19)) goto LAB_001a5618;
  }
  else if (iVar19 < 0xb) goto LAB_001a560c;
  mobyutil::MB_UpdateLightsTransition(param_1,uVar25 + 0x60);
LAB_001a56f4:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar25 + 0x60);
  if (((*(byte *)((int)pvVar9 + 0x2e) & 2) == 0) || (param_1->state == 0xf)) {
    if ((1 < param_1->state) && ((g_CurrentWeapon != 8 && ((g_downButtons & CIRCLE) != 0)))) {
      *(undefined4 *)((int)pvVar9 + 0x178) = 1;
    }
    iVar18 = *(int *)((int)pvVar9 + 300);
    if ((iVar18 == 0) || (*(int *)((int)pvVar9 + 0x170) == 0)) {
      if ((*(int *)((int)pvVar9 + 0x170) == 0) &&
         (puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5),
         iVar18 < *(int *)((int)puVar11 + 0xd4))) {
        *(int *)((int)pvVar9 + 300) = iVar18 + 1;
        dVar27 = (double)fastfunc::FastIntToDouble(iVar18 + 1);
        boot::SceneScreenFade = -(float)(dVar27 * 0.10000000149011612 - 1.0);
      }
    }
    else {
      iVar18 = iVar18 + -1;
      *(int *)((int)pvVar9 + 300) = iVar18;
      puVar11[0x1a] = (longlong)(int)(animationSpeed * 10.5);
      if (iVar18 < *(int *)((int)puVar11 + 0xd4)) {
        dVar27 = (double)fastfunc::FastIntToDouble(iVar18);
        iVar18 = *(int *)((int)pvVar9 + 300);
        boot::SceneScreenFade = 1.0 - (float)(dVar27 / (double)(animationSpeed * 10.0));
      }
      if ((iVar18 == 0) && (param_1->state != '\x01')) {
        uVar20 = (int)*(uint *)((int)pvVar9 + 0x20) >> 0x1f;
        dVar27 = 0.7853981852531433;
        if ((int)((uVar20 >> 1 ^ *(uint *)((int)pvVar9 + 0x20)) - uVar20) < 0x41200001) {
          *(undefined4 *)((int)pvVar9 + 0x20) = 0x411e6666;
          param_1->state = '\x05';
          pCVar13 = Cuboids;
          *(undefined4 *)((int)pvVar9 + 0x170) = 0;
          hero::Hero_Warp(&pCVar13[*(int *)((int)pvVar9 + 0xf8)].pos.x,
                          &pCVar13[*(int *)((int)pvVar9 + 0xf8)].rot.x,0x72,1);
          fVar2 = *(float *)((int)pvVar9 + 0xc0);
          (param_1->pos).x = fVar2;
          fVar5 = *(float *)((int)pvVar9 + 0xc4);
          (param_1->pos).y = fVar5;
          (param_1->pos).z = *(f32 *)((int)pvVar9 + 200);
          (param_1->pos).w = *(f32 *)((int)pvVar9 + 0xcc);
          fVar2 = g_heroPosition.x - fVar2;
          fVar5 = g_heroPosition.y - fVar5;
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar5);
          *(float *)(puVar11 + 0xf) = fVar2;
          *(float *)((int)puVar11 + 0x7c) = fVar5;
          *(float *)(puVar11 + 0x10) = (float)(dVar29 - dVar30);
          uVar23 = (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1d) & 4;
          dVar28 = ABS((double)*(float *)(puVar11 + 0xf));
          if ((double)*(float *)(puVar11 + 0x10) - dVar31 < 0.0) {
            dVar28 = dVar30;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar11 + 0x7c));
          if ((double)*(float *)(puVar11 + 0x10) - dVar31 < 0.0) {
            dVar30 = dVar29;
          }
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar31 < dVar28) {
            lVar15 = uVar14 - 0x100;
            lVar21 = uVar14 - 0x80;
            lVar24 = uVar14 - 0x70;
            lVar26 = 2;
            fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar11 + 0x9c) = fVar6;
            *(float *)((int)puVar11 + 0x94) = fVar6;
            *(float *)(puVar11 + 0x13) = fVar6;
            *(float *)(puVar11 + 0x12) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar11 + 0x94) = *(float *)((int)puVar11 + 0x94) * fVar7;
            *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
            *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0x90) = *(float *)((int)lVar15 + 0x80) * fVar6 * fVar6;
              iVar18 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar14 - 0x80;
            pfVar22 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar21 = lVar24;
            do {
              fVar6 = *pfVar22;
              fVar7 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar15 + 0x90) = *(float *)((int)lVar15 + 0x90) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
              lVar21 = lVar21 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar15 = 2;
            do {
              iVar18 = (int)lVar16;
              iVar19 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x90)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar31 = (double)((float)(dVar31 + dVar27) * fVar2 + fVar5);
          }
          (param_1->rotation).z = (float)dVar31;
          fastfunc::FastEulerToMtx(&param_1->transform,&param_1->rotation);
          if (param_1->animationId != '\x06') {
            puVar11[0x1a] = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation(param_1,6,0,*(undefined4 *)((int)puVar11 + 0xd4));
          }
          M1051_001a48d0(param_1);
        }
        else {
          *(undefined4 *)((int)pvVar9 + 0x20) = 0x419f3333;
          param_1->state = '\x03';
          fVar2 = *(float *)((int)pvVar9 + 0xc0);
          (param_1->pos).x = fVar2;
          fVar5 = *(float *)((int)pvVar9 + 0xc4);
          (param_1->pos).y = fVar5;
          (param_1->pos).z = *(f32 *)((int)pvVar9 + 200);
          (param_1->pos).w = *(f32 *)((int)pvVar9 + 0xcc);
          fVar2 = g_heroPosition.x - fVar2;
          fVar5 = g_heroPosition.y - fVar5;
          *(undefined4 *)((int)pvVar9 + 0x170) = 0;
          dVar28 = ABS((double)fVar2);
          dVar29 = ABS((double)fVar5);
          *(float *)((int)puVar11 + 0x84) = fVar2;
          *(float *)(puVar11 + 0x11) = fVar5;
          *(float *)((int)puVar11 + 0x8c) = (float)(dVar28 - dVar29);
          uVar23 = (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar11 + 0x84));
          if ((double)*(float *)((int)puVar11 + 0x8c) - dVar31 < 0.0) {
            dVar27 = dVar29;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
          dVar29 = ABS((double)*(float *)(puVar11 + 0x11));
          if ((double)*(float *)((int)puVar11 + 0x8c) - dVar31 < 0.0) {
            dVar29 = dVar28;
          }
          fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          if (dVar31 < dVar27) {
            lVar15 = uVar14 - 0x100;
            lVar21 = uVar14 - 0x60;
            lVar24 = uVar14 - 0x50;
            lVar26 = 2;
            fVar6 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar11 + 0xbc) = fVar6;
            *(float *)((int)puVar11 + 0xb4) = fVar6;
            *(float *)(puVar11 + 0x17) = fVar6;
            *(float *)(puVar11 + 0x16) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar7;
            *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
            *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xa0) * fVar6 * fVar6;
              iVar18 = (int)lVar21;
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar14 - 0x60;
            pfVar22 = (float *)&DAT_007358e0;
            lVar15 = lVar16;
            lVar21 = lVar24;
            do {
              fVar6 = *pfVar22;
              fVar7 = pfVar22[1];
              pfVar22 = pfVar22 + 2;
              *(float *)((int)lVar15 + 0xb0) = *(float *)((int)lVar15 + 0xb0) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
              lVar21 = lVar21 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar15 = 2;
            do {
              iVar18 = (int)lVar16;
              iVar19 = (int)lVar24;
              lVar16 = lVar16 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0xb0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar5);
          }
          (param_1->rotation).z = (float)dVar31;
          fastfunc::FastEulerToMtx(&param_1->transform,&param_1->rotation);
          if (param_1->animationId != '\x06') {
            puVar11[0x1a] = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation(param_1,6,0,*(undefined4 *)((int)puVar11 + 0xd4));
          }
          M1051_001a4df8(param_1);
        }
      }
    }
    dVar31 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar9 + 0x128),
                                DAT_007407d8 * 0.017453292 * mobyutil::g_FrameTime);
    uVar12 = DAT_007407e0;
    uVar17 = DAT_007407dc;
    dVar27 = (double)(float)(3.141592502593994 - dVar31);
    if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
      dVar27 = dVar31;
    }
    dVar28 = (double)(float)(-3.141592502593994 - dVar31);
    if ((double)(float)(-3.141592502593994 - dVar31) - dVar27 < 0.0) {
      dVar28 = dVar27;
    }
    dVar27 = (double)(float)(dVar28 * dVar28);
    dVar30 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar28));
    dVar29 = (double)(float)(dVar27 * dVar30);
    *(float *)((int)pvVar9 + 0x128) = (float)dVar31;
    uVar20 = fastfunc::FastLerpColor
                       ((double)(((float)(dVar27 * dVar29) * 2.601887e-06 +
                                  (float)(dVar29 * -0.0001980741071747616 +
                                         (double)(float)(dVar30 * 0.008333025500178337 +
                                                        (double)(float)((double)(float)(dVar27 * 
                                                  dVar28) * -0.16666656732559204 + dVar28))) + 1.0)
                                * 0.5),uVar17,uVar12);
    param_1->field60_0x90 = uVar20;
    pSVar10 = Splines[*(int *)((int)pvVar9 + 0xec)];
    mobyutil::MB_getTargetInArea
              (0x406fe00000000000,param_1,uVar25 + 0x70,pSVar10,0,0,pSVar10->points,pSVar10->cnt);
    if (*(int *)((int)pvVar9 + 0xb0) == 0) {
      *(MobyInstance **)((int)pvVar9 + 0xb0) = g_heroMobyPtr;
    }
  }
  else {
    if (*(int *)((int)pvVar9 + 0x10c) != -1) {
      hud::Hud_SetEntryValueById(*(int *)((int)pvVar9 + 0x10c),0);
      *(undefined4 *)((int)pvVar9 + 0x10c) = 0xffffffff;
    }
    param_1->state = '\x0e';
  }
  return;
}



//==== 001a5f50  ns=mobyupdate_unsorted  size=0x1cd4
// sig: undefined UpdateMoby_1051(MobyInstance * moby)
// callers(0): 
// callees(42): 0003fad4 camera::camera18::Cam18_SetTriggered; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 0005e598 collproc::CollMobySphere; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 00110040 mobyutil::MB_SpawnExplosionSparks2; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00119a18 mobyfunc::DoManipulator; 0011aa78 mobyutil::MB_SpawnDebris; 0011b728 mobyutil::MB_UnlockSkillPoint; 00188fb4 FUN_00188fb4; 00189040 FUN_00189040; 001a1e24 FUN_001a1e24; 001a1e90 FUN_001a1e90; 001a2558 mobyupdate_helpers::M1051_001a2558; 001a2fb0 mobyupdate_helpers::M1051_001a2fb0; 001a3680 mobyupdate_helpers::M1051_001a3680; 001a3d50 mobyupdate_helpers::M1051_001a3d50; 001a43a8 mobyupdate_helpers::M1051_001a43a8; 001a5360 mobyupdate_helpers::M1051_001a5360; 0035511c FUN_0035511c; 00355188 FUN_00355188; 0047ca58 FUN_0047ca58; 0047cc38 FUN_0047cc38; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e8548 FUN_005e8548
// strings: 0096c165: 'None'

/* Moby 1051 */

void mobyupdate_unsorted::UpdateMoby_1051(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  MobyModeBit MVar9;
  ushort uVar10;
  void *pvVar11;
  uint uVar12;
  MobyClass *pMVar13;
  f32 fVar14;
  Spline *pSVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar26;
  undefined1 uVar31;
  undefined4 uVar27;
  undefined8 uVar24;
  int iVar28;
  MobyInstance *pMVar29;
  ulonglong uVar25;
  float *pfVar30;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar36;
  ulonglong unaff_r30;
  ushort *puVar37;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar23 = (longlong)(int)moby;
  uVar22 = ZEXT48(&stack0x00000000);
  lVar33 = uVar22 - 0x1f0;
  puVar17 = (ulonglong *)lVar33;
  *puVar17 = uVar22;
  puVar17[0x40] = in_LR;
  puVar17[0x3b] = in_f29;
  puVar17[0x3c] = in_f30;
  puVar17[0x3d] = in_f31;
  puVar17[0x3a] = unaff_r31;
  puVar17[0x38] = unaff_r29;
  puVar17[0x37] = unaff_r28;
  puVar17[0x39] = unaff_r30;
  puVar17[0x36] = unaff_r27;
  puVar17[0x35] = unaff_r26;
  pvVar11 = moby->pVar;
  uVar36 = ZEXT48(pvVar11);
  mobyupdate_helpers::M1051_001a5360();
  iVar28 = *(int *)((int)pvVar11 + 0xb0);
  mobyfunc::DoManipulator
            (0x3ffe666660000000,moby,(longlong)DAT_007407bc,(Manipulator *)((int)pvVar11 + 0x130));
  if ((moby->enabled != '\0') &&
     (dVar39 = (double)FUN_005e8548(lVar23 + 0x10,0x951500), dVar39 < 45.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar23);
    moby->shadow = '$';
  }
  bVar1 = moby->state;
  if (bVar1 < 0xe && 2 < bVar1) {
    iVar26 = hud::RegisterHUDCallback
                       (0x16,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                        &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyHealthBarHud_00705868,
                        (int *)((int)pvVar11 + 0x110),0x1ef);
    *(int *)((int)pvVar11 + 0x10c) = iVar26;
    bVar1 = moby->state;
  }
  if (7 < bVar1) {
    if (bVar1 != 0xf) {
      if (bVar1 == 0xe) {
        MiscLevelFlags.field35_0x23 = 1;
        *(undefined4 *)((int)pvVar11 + 0x110) = 0;
        moby->updateDistance = -1;
        if (*(char *)((int)pvVar11 + 0x2e) == '\x02') {
          FUN_00188fb4(MobyInstance + *(int *)((int)pvVar11 + 0x100));
          FUN_00355188(*(undefined4 *)((int)pvVar11 + 0x104));
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | DISABLED;
          moby->state = '\x0f';
          if (moby->animationId == '\x01') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if ((moby->field43_0x70 & 2U) == 0) {
          return;
        }
        fVar14 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x10) = (moby->pos).x;
        fVar8 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0x84) = fVar14;
        *(f32 *)((int)puVar17 + 0x8c) = fVar8;
        *(float *)(puVar17 + 0x11) = (moby->pos).z + 1.0;
        mobyutil::MB_SpawnExplosionSparks2
                  (0x4000000000000000,0x4034000000000000,lVar23,uVar22 - 0x170,&DAT_001a5ed4,
                   0xffffffffffffffff);
        mobyutil::MB_SpawnDebris(lVar23,0x6a2,1,0x6a3,3,6,2);
        FUN_00188fb4(MobyInstance + *(int *)((int)pvVar11 + 0x100));
        FUN_00355188(*(undefined4 *)((int)pvVar11 + 0x104));
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
        moby->enabled = '\0';
        iVar28 = *(int *)((int)pvVar11 + 0x178);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | DISABLED;
        if (iVar28 != 0) {
          return;
        }
        mobyutil::MB_UnlockSkillPoint(10);
        return;
      }
      if (bVar1 == 0xd) {
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = *(float *)((int)pvVar11 + 0xc0) - fVar3;
        fVar3 = fVar3 - *(float *)((int)pvVar11 + 0xc0);
        fVar6 = *(float *)((int)pvVar11 + 0xc4) - fVar4;
        fVar4 = fVar4 - *(float *)((int)pvVar11 + 0xc4);
        fVar19 = ABS(fVar5);
        fVar7 = ABS(fVar6);
        *(float *)((int)puVar17 + 0xec) = fVar5;
        *(float *)(puVar17 + 0x1e) = fVar6;
        fVar5 = (moby->rotation).z;
        *(float *)((int)puVar17 + 0xf4) = fVar19 - fVar7;
        dVar39 = 0.0;
        uVar36 = (ulonglong)(*(uint *)((int)puVar17 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x1e) >> 0x1d) & 4;
        dVar48 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        fVar3 = ABS(*(float *)((int)puVar17 + 0xec));
        if (*(float *)((int)puVar17 + 0xf4) - 0.0 < 0.0) {
          fVar3 = fVar7;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar4 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar17 + 0x1e));
        if (*(float *)((int)puVar17 + 0xf4) - 0.0 < 0.0) {
          fVar7 = fVar19;
        }
        dVar40 = dVar39;
        if (0.0 < fVar3) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0xc0;
          lVar35 = uVar22 - 0xb0;
          lVar38 = 2;
          fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
          fVar7 = fVar3 * fVar3;
          *(float *)((int)puVar17 + 0x13c) = fVar3;
          *(float *)((int)puVar17 + 0x134) = fVar3;
          *(float *)(puVar17 + 0x27) = fVar3;
          *(float *)(puVar17 + 0x26) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)((int)puVar17 + 0x134) = *(float *)((int)puVar17 + 0x134) * fVar7;
          *(float *)(puVar17 + 0x27) = *(float *)(puVar17 + 0x27) * fVar3;
          *(float *)((int)puVar17 + 0x13c) = *(float *)((int)puVar17 + 0x13c) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar32 + 0x130) = *(float *)((int)lVar32 + 0x120) * fVar3 * fVar3;
            iVar28 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xc0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar3 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x130) = *(float *)((int)lVar32 + 0x130) * fVar3;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar7;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar34 = 2;
          lVar32 = lVar33;
          do {
            iVar28 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar26 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0x130)) +
                              *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                             *(float *)(iVar26 + 0xc));
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar41 = (double)fastfunc::FastSubRots(fVar5,(float)dVar40);
        fVar3 = *(float *)((int)pvVar11 + 0xc0) - (moby->pos).x;
        fVar4 = *(float *)((int)pvVar11 + 0xc4) - (moby->pos).y;
        dVar46 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar4);
        *(float *)(puVar17 + 0x1c) = fVar3;
        *(float *)((int)puVar17 + 0xe4) = fVar4;
        *(float *)(puVar17 + 0x1d) = (float)(dVar46 - dVar44);
        uVar36 = (ulonglong)(*(uint *)(puVar17 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xe4) >> 0x1d) & 4;
        dVar40 = ABS((double)*(float *)(puVar17 + 0x1c));
        if ((double)*(float *)(puVar17 + 0x1d) - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar17 + 0xe4));
        if ((double)*(float *)(puVar17 + 0x1d) - dVar39 < 0.0) {
          dVar44 = dVar46;
        }
        fVar4 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        dVar46 = dVar39;
        if (dVar39 < dVar40) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0xe0;
          lVar35 = uVar22 - 0xd0;
          lVar38 = 2;
          fVar5 = (float)(dVar44 - dVar40) / (float)(dVar44 + dVar40);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar17 + 0x11c) = fVar5;
          *(float *)((int)puVar17 + 0x114) = fVar5;
          *(float *)(puVar17 + 0x23) = fVar5;
          *(float *)(puVar17 + 0x22) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0x114) = *(float *)((int)puVar17 + 0x114) * fVar6;
          *(float *)(puVar17 + 0x23) = *(float *)(puVar17 + 0x23) * fVar5;
          *(float *)((int)puVar17 + 0x11c) = *(float *)((int)puVar17 + 0x11c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x110) = *(float *)((int)lVar32 + 0x100) * fVar5 * fVar5;
            iVar28 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar28 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xe0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x110) = *(float *)((int)lVar32 + 0x110) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar6;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar32 = 2;
          dVar40 = dVar39;
          do {
            iVar28 = (int)lVar33;
            lVar33 = lVar33 + 0x10;
            iVar26 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar28 + 0x110)) +
                              *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) +
                             *(float *)(iVar26 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar46 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
        }
        mobyutil::OrganicDeltAng
                  ((float)dVar46,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                   mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar11 + 0xe0));
        if (dVar41 < 0.7853981852531433) {
          dVar44 = (double)(moby->pos).y;
          fVar4 = (float)((double)*(float *)((int)pvVar11 + 0xc4) - dVar44);
          dVar42 = (double)(moby->pos).x;
          fVar5 = (float)((double)*(float *)((int)pvVar11 + 0xc0) - dVar42);
          uVar27 = *(undefined4 *)((int)pvVar11 + 0xec);
          dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          fVar3 = (float)((double)(DAT_007407c0 * mobyutil::g_FrameTime) / dVar45);
          dVar41 = (double)(fVar3 * fVar4);
          dVar46 = (double)(fVar3 * fVar5);
          dVar40 = dVar39;
          if (dVar39 - dVar45 < 0.0) {
            dVar40 = dVar41;
          }
          dVar47 = dVar39;
          if (dVar39 - dVar45 < 0.0) {
            dVar47 = dVar46;
          }
          if (dVar45 - dVar39 < 0.0) {
            dVar40 = dVar41;
          }
          if (dVar45 - dVar39 < 0.0) {
            dVar47 = dVar46;
          }
          (moby->pos).y = (float)(dVar44 + dVar40);
          (moby->pos).x = (float)(dVar42 + dVar47);
          mobyutil::MB_PushOutOfSplineWalls
                    (0x3ff0000000000000,uVar27,&DAT_001a5ed4,lVar23 + 0x10,lVar23 + 0x10);
        }
        if (*(int *)((int)pvVar11 + 0xb4) != 2) {
          moby->state = '\a';
          return;
        }
        if (1.0 <= dVar48) {
          return;
        }
        moby->state = '\a';
        if (moby->animationId == '\x01') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if (bVar1 == 0xc) {
        mobyupdate_helpers::M1051_001a2558(lVar23);
        iVar28 = fastfunc::FastDecTimerS32(uVar36 + 0x120);
        if (iVar28 == 0) {
          return;
        }
        auVar49 = ZEXT416(0xffffffff);
        auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar49 = loadVectorLeftIndexed(0x30,0x1a5ed4);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar49 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                             auVar50);
        auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
        auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar27 = storeVectorElementWordIndexed
                           (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,
                            uVar36);
        *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
        moby->state = '\v';
        moby->setByGroup = '\a';
        if (moby->animationId == '\x06') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar23,6,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if (bVar1 != 0xb) {
        if (bVar1 == 10) {
          fastfunc::FastDecTimerS32(uVar36 + 0x120);
          dVar39 = (double)mobyfunc::BlendAnimFrame(moby);
          if ((1.0 < dVar39) && (dVar39 = (double)mobyfunc::BlendAnimFrame(moby), dVar39 < 8.0)) {
            fVar3 = (moby->rotation).z;
            fVar4 = fVar3 + 1.5707963;
            lVar33 = uVar22 - 0x180;
            fVar5 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar5 = fVar3;
            }
            fVar6 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar6 = fVar4;
            }
            fVar7 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar7 = fVar5;
            }
            *(undefined4 *)(puVar17 + 0x17) = 0;
            *(undefined4 *)((int)puVar17 + 0xcc) = 0x3f800000;
            *(undefined4 *)(puVar17 + 0x1a) = 1;
            *(undefined4 *)((int)puVar17 + 0xc4) = 1;
            fVar3 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
              fVar3 = fVar6;
            }
            fVar4 = fVar7 * fVar7;
            *(MobyInstance **)(puVar17 + 0x18) = moby;
            fVar5 = fVar3 * fVar3;
            fVar20 = fVar4 * fVar4 * fVar7;
            fVar6 = fVar5 * fVar5 * fVar3;
            fVar21 = fVar4 * fVar20;
            fVar19 = fVar5 * fVar6;
            *(float *)((int)puVar17 + 0xb4) =
                 fVar4 * fVar21 * 2.601887e-06 +
                 fVar21 * -0.0001980741 +
                 fVar20 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7;
            *(float *)(puVar17 + 0x16) =
                 fVar5 * fVar19 * 2.601887e-06 +
                 fVar19 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3
            ;
            mobyfunc::GetBonePosition(lVar23,0,lVar33);
            uVar24 = 0x3fe0000000000000;
            collproc::CollMobySphere(0x3fe0000000000000,lVar33);
            mobyfunc::GetBonePosition(lVar23,1,lVar33);
            collproc::CollMobySphere(uVar24,lVar33);
            mobyfunc::GetBonePosition(lVar23,2,lVar33);
            collproc::CollMobySphere(uVar24,lVar33);
            mobyfunc::GetBonePosition(lVar23,3,lVar33);
            collproc::CollMobySphere(uVar24,lVar33);
            mobyfunc::GetBonePosition(lVar23,4,lVar33);
            collproc::CollMobySphere(uVar24,lVar33);
            mobyfunc::GetBonePosition(lVar23,5,lVar33);
            uVar24 = 0x3ff19999a0000000;
            collproc::CollMobySphere(0x3ff19999a0000000,lVar33);
            mobyfunc::GetBonePosition(lVar23,6,lVar33);
            collproc::CollMobySphere(uVar24,lVar33);
            return;
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            return;
          }
          moby->state = moby->setByGroup;
          if (moby->animationId == '\x01') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if (bVar1 == 9) {
          fastfunc::FastDecTimerS32(uVar36 + 0x120);
          mobyutil::OrganicDeltAng
                    ((moby->rotation).z,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                     mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x1a5ed4,
                     (float *)((int)pvVar11 + 0xe0));
          if ((moby->field43_0x70 & 2U) == 0) {
            return;
          }
          moby->state = '\n';
          if (moby->animationId == '\x05') {
            return;
          }
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar23,5,0,*(undefined4 *)((int)puVar17 + 0x194));
          return;
        }
        if (bVar1 != 8) {
          return;
        }
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = *(float *)(iVar28 + 0x10) - fVar3;
        fVar3 = fVar3 - *(float *)(iVar28 + 0x10);
        fVar6 = *(float *)(iVar28 + 0x14) - fVar4;
        fVar4 = fVar4 - *(float *)(iVar28 + 0x14);
        fVar19 = ABS(fVar5);
        fVar7 = ABS(fVar6);
        *(float *)((int)puVar17 + 0x104) = fVar5;
        *(float *)(puVar17 + 0x21) = fVar6;
        fVar5 = (moby->rotation).z;
        *(float *)((int)puVar17 + 0x10c) = fVar19 - fVar7;
        dVar39 = 0.0;
        uVar25 = (ulonglong)(*(uint *)((int)puVar17 + 0x104) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x10c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar17 + 0x21) >> 0x1d) & 4;
        dVar48 = (double)SQRT(fVar3 * fVar3 + fVar4 * fVar4);
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar4 = ABS(*(float *)((int)puVar17 + 0x104));
        if (*(float *)((int)puVar17 + 0x10c) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        fVar7 = ABS(*(float *)(puVar17 + 0x21));
        if (*(float *)((int)puVar17 + 0x10c) - 0.0 < 0.0) {
          fVar7 = fVar19;
        }
        dVar40 = dVar39;
        if (0.0 < fVar4) {
          lVar32 = uVar22 - 0x1e0;
          lVar34 = uVar22 - 0x80;
          lVar35 = uVar22 - 0x70;
          lVar38 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar17 + 0x17c) = fVar4;
          *(float *)((int)puVar17 + 0x174) = fVar4;
          *(float *)(puVar17 + 0x2f) = fVar4;
          *(float *)(puVar17 + 0x2e) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar7;
          *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar4;
          *(float *)((int)puVar17 + 0x17c) = *(float *)((int)puVar17 + 0x17c) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar32 + 0x170) = *(float *)((int)lVar32 + 0x160) * fVar4 * fVar4;
            iVar26 = (int)lVar34;
            lVar32 = lVar32 + 8;
            lVar34 = lVar34 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar4 * fVar4;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0x80;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar4 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x170) = *(float *)((int)lVar32 + 0x170) * fVar4;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar7;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar34 = 2;
          lVar32 = lVar33;
          do {
            iVar26 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar18 = (int)lVar35;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x170)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar34 = lVar34 + -1;
          } while (lVar34 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar6);
        }
        dVar41 = (double)fastfunc::FastSubRots(fVar5,(float)dVar40);
        fVar3 = *(float *)(iVar28 + 0x10) - (moby->pos).x;
        fVar4 = *(float *)(iVar28 + 0x14) - (moby->pos).y;
        dVar46 = ABS((double)fVar3);
        dVar44 = ABS((double)fVar4);
        *(float *)(puVar17 + 0x1f) = fVar3;
        *(float *)((int)puVar17 + 0xfc) = fVar4;
        *(float *)(puVar17 + 0x20) = (float)(dVar46 - dVar44);
        uVar25 = (ulonglong)(*(uint *)(puVar17 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0xfc) >> 0x1d) & 4;
        dVar40 = ABS((double)*(float *)(puVar17 + 0x1f));
        if ((double)*(float *)(puVar17 + 0x20) - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar44 = ABS((double)*(float *)((int)puVar17 + 0xfc));
        if ((double)*(float *)(puVar17 + 0x20) - dVar39 < 0.0) {
          dVar44 = dVar46;
        }
        fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar46 = dVar39;
        if (dVar39 < dVar40) {
          lVar32 = uVar22 - 0x1e0;
          lVar35 = uVar22 - 0x90;
          lVar34 = uVar22 - 0xa0;
          lVar38 = 2;
          fVar5 = (float)(dVar44 - dVar40) / (float)(dVar44 + dVar40);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar17 + 0x15c) = fVar5;
          *(float *)((int)puVar17 + 0x154) = fVar5;
          *(float *)(puVar17 + 0x2b) = fVar5;
          *(float *)(puVar17 + 0x2a) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0x154) = *(float *)((int)puVar17 + 0x154) * fVar6;
          *(float *)(puVar17 + 0x2b) = *(float *)(puVar17 + 0x2b) * fVar5;
          *(float *)((int)puVar17 + 0x15c) = *(float *)((int)puVar17 + 0x15c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x150) = *(float *)((int)lVar32 + 0x140) * fVar5 * fVar5;
            iVar26 = (int)lVar34;
            lVar34 = lVar34 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar35 + 4) = *(float *)(iVar26 + 4) * fVar5 * fVar5;
            lVar35 = lVar35 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar38 = 4;
          lVar35 = uVar22 - 0xa0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar32 = lVar33;
          lVar34 = lVar35;
          do {
            fVar5 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar32 + 0x150) = *(float *)((int)lVar32 + 0x150) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar34 + 4) = *(float *)((int)lVar34 + 4) * fVar6;
            lVar34 = lVar34 + 8;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          lVar32 = 2;
          dVar40 = dVar39;
          do {
            iVar26 = (int)lVar33;
            iVar18 = (int)lVar35;
            lVar33 = lVar33 + 0x10;
            lVar35 = lVar35 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar26 + 0x150)) +
                              *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                             *(float *)(iVar18 + 0xc));
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          dVar46 = (double)((float)(dVar40 + 0.7853981852531433) * fVar3 + fVar4);
        }
        mobyutil::OrganicDeltAng
                  ((float)dVar46,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                   mobyutil::g_FrameTime * 3.1415927,&(moby->rotation).z,0x1a0000,
                   (float *)((int)pvVar11 + 0xe0));
        pfVar30 = (float *)((int)pvVar11 + 0xe8);
        if ((0.7853981852531433 <= dVar41) || (dVar48 <= (double)DAT_007407cc)) {
          if ((double)DAT_007407d0 <= dVar48) {
            mobyutil::Delt((float)dVar39,DAT_0071f418 * 8.0,pfVar30);
          }
          else {
            mobyutil::Delt(-(DAT_007407c0 * mobyutil::g_FrameTime),DAT_007407c8 * DAT_0071f418,
                           pfVar30);
          }
        }
        else {
          mobyutil::Delt(DAT_007407c0 * mobyutil::g_FrameTime,DAT_007407c8 * DAT_0071f418,pfVar30);
        }
        dVar46 = (double)(moby->pos).y;
        fVar4 = (float)((double)*(float *)(iVar28 + 0x14) - dVar46);
        dVar45 = (double)(moby->pos).x;
        fVar5 = (float)((double)*(float *)(iVar28 + 0x10) - dVar45);
        uVar27 = *(undefined4 *)((int)pvVar11 + 0xec);
        dVar47 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        fVar3 = (float)((double)*(float *)((int)pvVar11 + 0xe8) / dVar47);
        dVar44 = (double)(fVar3 * fVar4);
        dVar42 = (double)(fVar3 * fVar5);
        dVar40 = dVar39;
        if (dVar39 - dVar47 < 0.0) {
          dVar40 = dVar44;
        }
        dVar43 = dVar39;
        if (dVar39 - dVar47 < 0.0) {
          dVar43 = dVar42;
        }
        if (dVar47 - dVar39 < 0.0) {
          dVar40 = dVar44;
        }
        if (dVar47 - dVar39 < 0.0) {
          dVar43 = dVar42;
        }
        (moby->pos).y = (float)(dVar46 + dVar40);
        (moby->pos).x = (float)(dVar45 + dVar43);
        mobyutil::MB_PushOutOfSplineWalls
                  (0x3ff0000000000000,uVar27,&DAT_001a5ed4,lVar23 + 0x10,lVar23 + 0x10);
        if (*(int *)((int)pvVar11 + 0xb4) == 2) {
          moby->state = '\r';
          return;
        }
        iVar28 = fastfunc::FastDecTimerS32(uVar36 + 0x120);
        if (iVar28 != 0) {
          auVar49 = ZEXT416(0xffffffff);
          auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
          auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
          auVar49 = loadVectorLeftIndexed(0x4c,0x1a5ed4);
          auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar49 = vectorMultiplyAddFloatingPoint
                              (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60
                               ,auVar50);
          auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
          auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar27 = storeVectorElementWordIndexed
                             (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,
                              uVar36);
          *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
          moby->state = '\f';
          return;
        }
        if ((double)DAT_007407cc <= dVar48) {
          return;
        }
        if ((double)(DAT_007407d4 * 0.017453292) <= dVar41) {
          return;
        }
        moby->state = '\t';
        moby->setByGroup = '\a';
        if (moby->animationId == '\x04') {
          return;
        }
        puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar23,4,0,*(undefined4 *)((int)puVar17 + 0x194));
        return;
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        return;
      }
      moby->state = moby->setByGroup;
      if (moby->animationId == '\x01') {
        return;
      }
      puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
      return;
    }
    lVar33 = 0;
    while ((camera::UpdateCamsUsed[(int)lVar33] == '\0' ||
           (iVar28 = (int)(lVar33 << 7) + (int)(lVar33 << 5),
           *(short *)((int)camera::UpdateCams[0].lPos + iVar28 + 0x22) != 0x12))) {
      iVar28 = (int)lVar33 + 1;
      lVar33 = (longlong)iVar28;
      if (0x2f < iVar28) {
LAB_001a7bb4:
        if (g_gameMode != GAME_MODE_SCENE) {
          return;
        }
        FUN_00188fb4(MobyInstance + *(int *)((int)pvVar11 + 0xfc));
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    camera::camera18::Cam18_SetTriggered((UpdateCam *)((int)camera::UpdateCams[0].mtx + iVar28));
    goto LAB_001a7bb4;
  }
  if (bVar1 == 7) {
    if (*(int *)((int)pvVar11 + 0xb4) == 2) {
      return;
    }
    moby->state = '\b';
    if (moby->animationId == '\x03') {
      return;
    }
    puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
    mobyutil::MB_SetAnimation(lVar23,3,0,*(undefined4 *)((int)puVar17 + 0x194));
    return;
  }
  if (bVar1 != 6) {
    if (bVar1 == 5) {
      if (((moby->animationId == '\x06') && (moby->animationBlend == 0.0)) &&
         ((moby->field43_0x70 & 2U) != 0)) {
        if (moby->animationId != '\x01') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
        FUN_001a1e90(*(undefined4 *)((int)pvVar11 + 0xf4));
      }
      iVar28 = mobyupdate_helpers::M1051_001a2fb0(lVar23);
      if (iVar28 == 0) {
        return;
      }
      pvVar11 = moby->pVar;
      moby->state = '\x06';
      hero::TransitionMovement(0,0);
      Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
      camera::camera5::Camera_DeactivateMobyDrivenCam(2);
      return;
    }
    if (bVar1 != 4) {
      if (bVar1 == 3) {
        if (((moby->animationId == '\x06') && (moby->animationBlend == 0.0)) &&
           ((moby->field43_0x70 & 2U) != 0)) {
          if (moby->animationId != '\x01') {
            puVar17[0x32] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
          }
          puVar37 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)((int)moby->pVar + 0xf0)];
          if (puVar37 != (ushort *)0x0) {
            dVar48 = 15.0;
            dVar39 = 20.0;
            do {
              pMVar29 = MobyInstance;
              uVar12 = *puVar37 & 0x7fff;
              *(f32 *)(puVar17 + 0x14) = MobyInstance[uVar12].pos.x;
              *(f32 *)((int)puVar17 + 0xa4) = pMVar29[uVar12].pos.y;
              *(f32 *)(puVar17 + 0x15) = pMVar29[uVar12].pos.z;
              *(f32 *)((int)puVar17 + 0xac) = pMVar29[uVar12].pos.w;
              dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar48,(float)dVar39);
              pMVar29 = MobyInstance + uVar12;
              *(float *)(puVar17 + 0x15) = (float)((double)*(float *)(puVar17 + 0x15) + dVar40);
              FUN_0047ca58(pMVar29,uVar22 - 0x150);
              uVar10 = *puVar37;
              puVar37 = puVar37 + 1;
            } while (-1 < (short)uVar10);
          }
        }
        iVar28 = mobyupdate_helpers::M1051_001a3680(lVar23);
        if (iVar28 == 0) {
          return;
        }
        pvVar11 = moby->pVar;
        moby->state = '\x04';
        hero::TransitionMovement(0,0);
        Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
        return;
      }
      if (bVar1 == 2) {
        (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar11 + 0x48);
        fVar4 = -(DAT_0071f418 * 30.0 - *(float *)((int)pvVar11 + 0x48));
        *(float *)((int)pvVar11 + 0x48) = fVar4;
        uVar2 = moby->animationId;
        fVar3 = moby->animationBlend;
        bVar1 = moby->field43_0x70;
        if (uVar2 == '\b') {
          if ((ABS(((moby->pos).z - *(float *)((int)pvVar11 + 200)) / fVar4) <= 6.0) &&
             (uVar2 != '\t')) {
            uVar24 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar23,9,0,uVar24);
          }
        }
        else {
          fVar14 = (moby->pos).z;
          uVar12 = (int)fVar14 >> 0x1f;
          uVar16 = (int)*(uint *)((int)pvVar11 + 200) >> 0x1f;
          if ((int)((uVar12 >> 1 ^ (uint)fVar14) - uVar12) <
              (int)((uVar16 >> 1 ^ *(uint *)((int)pvVar11 + 200)) - uVar16)) {
            (moby->pos).z = *(f32 *)((int)pvVar11 + 200);
          }
          if ((fVar3 == 0.0) && ((bVar1 & 2) != 0)) {
            if (uVar2 != '\t') {
              if (uVar2 != '\x01') {
                puVar17[0x32] = (longlong)(int)(animationSpeed * 30.5);
                mobyutil::MB_SetAnimation(lVar23,1,0,*(undefined4 *)((int)puVar17 + 0x194));
              }
            }
            else if (uVar2 != '\x06') {
              puVar17[0x32] = (longlong)(int)(animationSpeed * 30.5);
              mobyutil::MB_SetAnimation(lVar23,6,0,*(undefined4 *)((int)puVar17 + 0x194));
            }
          }
        }
        iVar28 = mobyupdate_helpers::M1051_001a3d50(lVar23);
        if (iVar28 == 0) {
          return;
        }
        pvVar11 = moby->pVar;
        moby->state = '\a';
        hero::TransitionMovement(0,0);
        Splines[*(int *)((int)pvVar11 + 0xec)]->cnt = *(int32_t *)((int)pvVar11 + 0x114);
        camera::camera5::Camera_DeactivateMobyDrivenCam(2);
        return;
      }
      if (bVar1 == 1) {
        if (*(int *)((int)pvVar11 + 0x170) != 0) {
          if (*(int *)((int)pvVar11 + 300) != 0) {
            return;
          }
          FUN_00189040(MobyInstance + *(int *)((int)pvVar11 + 0xfc));
          FUN_00189040(MobyInstance + *(int *)((int)pvVar11 + 0x100));
          FUN_0035511c(*(undefined4 *)((int)pvVar11 + 0x104));
          pMVar13 = moby->pClass;
          MVar9 = moby->modeBits;
          *(undefined4 *)((int)pvVar11 + 0x170) = 0;
          moby->state = '\x02';
          moby->collision = pMVar13->collision;
          moby->modeBits =
               MVar9 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          if (moby->animationId != '\b') {
            uVar24 = idol::GetAnimDuration(1);
            mobyutil::MB_SetAnimation(lVar23,8,0,uVar24);
          }
          mobyupdate_helpers::M1051_001a43a8(lVar23);
          return;
        }
        if (*(int *)((int)pvVar11 + 0xb4) == 2) {
          return;
        }
        if (*(short *)(iVar28 + 0xa6) != 0) {
          return;
        }
        *(undefined4 *)((int)pvVar11 + 0x170) = 1;
        uVar27 = idol::GetAnimDuration(10);
        *(undefined4 *)((int)pvVar11 + 300) = uVar27;
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x41f00000;
      *(undefined2 *)((int)pvVar11 + 0x24) = 0x1e;
      *(undefined1 *)((int)pvVar11 + 0x28) = 3;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined1 *)((int)pvVar11 + 0x2e) = 1;
      uVar31 = fastfunc::FastDoubleToInt(0x402c000000000000);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar31;
      uVar31 = fastfunc::FastDoubleToInt(0x4032666660000000);
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar31;
      uVar27 = idol::GetAnimDuration(0x4b0);
      *(undefined4 *)((int)pvVar11 + 0x120) = uVar27;
      *(undefined4 *)((int)pvVar11 + 0x178) = 0;
      FUN_005e7e98(uVar36 + 0xc0,lVar23 + 0x10);
      *(undefined4 *)((int)pvVar11 + 0x10c) = 0xffffffff;
      pSVar15 = Splines[*(int *)((int)pvVar11 + 0xec)];
      *(int32_t *)((int)pvVar11 + 0x114) = pSVar15->cnt;
      uVar12 = pSVar15->cnt;
      FUN_005e8f04(0x3fe0000000000000,uVar36 + 0xd0,pSVar15->points,
                   pSVar15->points +
                   ((int)uVar12 >> 1) + (uint)((int)uVar12 < 0 && (uVar12 & 1) != 0));
      dVar39 = (double)FUN_005e8588(uVar36 + 0xc0,uVar36 + 0xd0);
      *(float *)((int)pvVar11 + 0xdc) = (float)dVar39;
      dVar39 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar11 + 0x128) = (float)dVar39;
      uVar27 = idol::GetAnimDuration(0x1e);
      *(undefined4 *)((int)pvVar11 + 300) = uVar27;
      fVar3 = (moby->pos).z;
      moby->collision = (ushort *)0x0;
      uVar27 = *(undefined4 *)((int)pvVar11 + 0xf4);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | (CAN_BE_DAMAGED|DISABLED);
      (moby->pos).z = fVar3 + 17.5;
      FUN_001a1e24(uVar27);
      if ((MiscLevelFlags.field35_0x23 != 0) && (CHAR_ARRAY_0096c165[0x1d] == '\0')) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      moby->state = '\x01';
      return;
    }
    puVar37 = (ushort *)(&mobyutil::g_MobyGroups)[*(int *)((int)moby->pVar + 0xf0)];
    if (puVar37 != (ushort *)0x0) {
      dVar48 = 15.0;
      dVar39 = 20.0;
      do {
        pMVar29 = MobyInstance;
        uVar12 = *puVar37 & 0x7fff;
        *(f32 *)(puVar17 + 0x12) = MobyInstance[uVar12].pos.x;
        *(f32 *)((int)puVar17 + 0x94) = pMVar29[uVar12].pos.y;
        *(f32 *)(puVar17 + 0x13) = pMVar29[uVar12].pos.z;
        *(f32 *)((int)puVar17 + 0x9c) = pMVar29[uVar12].pos.w;
        dVar40 = (double)mobyutil::MB_randRangeFloat((float)dVar48,(float)dVar39);
        pMVar29 = MobyInstance + uVar12;
        *(float *)(puVar17 + 0x13) = (float)((double)*(float *)(puVar17 + 0x13) + dVar40);
        FUN_0047ca58(pMVar29,uVar22 - 0x160);
        uVar10 = *puVar37;
        puVar37 = puVar37 + 1;
      } while (-1 < (short)uVar10);
    }
  }
  mobyupdate_helpers::M1051_001a2558(lVar23);
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar28 = FUN_0047cc38(*(undefined4 *)((int)pvVar11 + 0xf0));
    if (iVar28 != 0) goto LAB_001a6880;
    uVar2 = moby->state;
  }
  if (uVar2 != '\x06') {
    return;
  }
  iVar28 = mobyutil::MB_CountActiveMobysByGroup
                     (*(undefined4 *)((int)pvVar11 + 0xf4),0xffffffffffffffff);
  if (iVar28 != 0) {
    return;
  }
LAB_001a6880:
  auVar49 = ZEXT416(0xffffffff);
  auVar49 = auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  moby->state = '\b';
  fVar3 = animationSpeed;
  auVar50 = vectorShiftLeftIntegerWord(auVar49,auVar49);
  auVar49 = loadVectorLeftIndexed(0x30,0x1a5ed4);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar49 = vectorMultiplyAddFloatingPoint
                      (auVar51,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,auVar50
                      );
  auVar49 = vectorConvertToSignedFixedPointWordSaturate(auVar49,0);
  auVar49 = auVar49 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar27 = storeVectorElementWordIndexed
                     (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x120,uVar36);
  *(undefined4 *)((int)pvVar11 + 0x120U & 0xfffffffc) = uVar27;
  if (moby->animationId != '\x03') {
    puVar17[0x32] = (longlong)(int)(fVar3 * 20.5);
    mobyutil::MB_SetAnimation(lVar23,3,0,*(undefined4 *)((int)puVar17 + 0x194));
  }
  return;
}



//==== 001a7c24  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1054_001a7c24(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1054_001a7c24(void)

{
  DAT_00740830 = 0x10000;
  return;
}



//==== 001a7c58  ns=mobyupdate_unsorted  size=0xb80
// sig: undefined UpdateMoby_1054(MobyInstance * moby)
// callers(0): 
// callees(9): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 001042ec mobyutil::MB_SetStateByGroup; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1054 */

undefined4 * mobyupdate_unsorted::UpdateMoby_1054(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  int *piVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *pMVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  char cVar18;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  bVar1 = moby->state;
  piVar7 = (int *)moby->pVar;
  dVar19 = (double)(moby->rotation).y;
  if (bVar1 == 5) {
    if (DAT_00e61fc8 == 0) {
      return (undefined4 *)0x0;
    }
    moby->state = '\x01';
    moby->setByGroup = '\0';
    fVar6 = (f32)piVar7[4];
    (moby->pos).x = fVar6;
    (moby->pos).y = (f32)piVar7[5];
    (moby->pos).z = (f32)piVar7[6];
    (moby->pos).w = (f32)piVar7[7];
    (moby->rotation).x = (f32)piVar7[8];
    (moby->rotation).y = (f32)piVar7[9];
    iVar15 = piVar7[0x10];
    (moby->rotation).z = (f32)piVar7[10];
    (moby->rotation).w = (f32)piVar7[0xb];
    *(f32 *)(iVar15 + 0x10) = fVar6;
    *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
    puVar16 = (undefined4 *)piVar7[0x10];
    puVar16[0x10] = (moby->rotation).x;
    puVar16[0x11] = (moby->rotation).y;
    puVar16[0x12] = (moby->rotation).z;
    puVar16[0x13] = (moby->rotation).w;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[0x11] = 0;
    piVar7[0x12] = 0;
    return puVar16;
  }
  if (bVar1 != 4) {
    if (bVar1 == 3) {
      fVar2 = (moby->pos).y - (float)piVar7[5];
      fVar3 = (moby->pos).x - (float)piVar7[4];
      fVar4 = (moby->pos).z - (float)piVar7[6];
      local_ac = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      iVar15 = piVar7[0x10];
      fVar2 = *(float *)(iVar15 + 0x14) - (float)piVar7[5];
      fVar3 = *(float *)(iVar15 + 0x10) - (float)piVar7[4];
      fVar4 = *(float *)(iVar15 + 0x18) - (float)piVar7[6];
      local_b0 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar27 = 10.0;
      dVar25 = 20.0;
      dVar19 = 5.0;
      mobyutil::OrganicDelt
                (DAT_00740854,DAT_0071f418 * 10.0,DAT_0071f418 * 20.0,mobyutil::g_FrameTime * 5.0,
                 &local_ac,iVar15,(float *)(piVar7 + 2));
      mobyutil::OrganicDelt
                (DAT_00740858,(float)((double)DAT_0071f418 * dVar27),
                 (float)((double)DAT_0071f418 * dVar25),
                 (float)((double)mobyutil::g_FrameTime * dVar19),&local_b0,0x740000,
                 (float *)(piVar7 + 0x11));
      fVar2 = (float)piVar7[0xd];
      fVar3 = (float)piVar7[0xc];
      fVar4 = (float)piVar7[0xe];
      fVar5 = 0.0;
      iVar15 = piVar7[0x10];
      fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar9 = local_ac / fVar13;
      fVar11 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar11 = fVar3 * fVar9;
      }
      fVar10 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar10 = fVar2 * fVar9;
      }
      fVar12 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar12 = fVar4 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar11 = fVar3 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar10 = fVar2 * fVar9;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar12 = fVar4 * fVar9;
      }
      (moby->pos).x = (float)piVar7[4] + fVar11;
      (moby->pos).y = (float)piVar7[5] + fVar10;
      (moby->pos).z = (float)piVar7[6] + fVar12;
      (moby->pos).w = (f32)piVar7[7];
      fVar2 = (float)piVar7[0xd];
      fVar3 = (float)piVar7[0xc];
      fVar4 = (float)piVar7[0xe];
      fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar11 = -local_b0 / fVar13;
      fVar9 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar9 = fVar3 * fVar11;
      }
      fVar10 = fVar5;
      if (0.0 - fVar13 < 0.0) {
        fVar10 = fVar2 * fVar11;
      }
      if (0.0 - fVar13 < 0.0) {
        fVar5 = fVar4 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar9 = fVar3 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar10 = fVar2 * fVar11;
      }
      if (fVar13 - 0.0 < 0.0) {
        fVar5 = fVar4 * fVar11;
      }
      *(float *)(iVar15 + 0x10) = (float)piVar7[4] + fVar9;
      *(float *)(iVar15 + 0x14) = (float)piVar7[5] + fVar10;
      *(float *)(iVar15 + 0x18) = (float)piVar7[6] + fVar5;
      *(int *)(iVar15 + 0x1c) = piVar7[7];
      puVar16 = (undefined4 *)mobyfunc::UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
      if (0.01 <= ABS(local_ac - DAT_00740854)) {
        return puVar16;
      }
      if (0.01 <= ABS(local_b0 - DAT_00740858)) {
        return (undefined4 *)0x740000;
      }
      moby->state = '\x05';
      return (undefined4 *)0x5;
    }
    if (bVar1 == 1) {
      iVar15 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar7);
      if (iVar15 == 0) {
        return (undefined4 *)0x0;
      }
      if (piVar7[1] == 1) {
        auVar29 = ZEXT416(0xffffffff);
        auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
        moby->state = '\x04';
        auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
        auVar29 = loadVectorLeftIndexed(4,0x1a7c38);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                             auVar30);
        auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
        auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x4c,
                           ZEXT48(piVar7));
        *(undefined4 *)((uint)(piVar7 + 0x13) & 0xfffffffc) = uVar8;
      }
      else if (moby->group == -1) {
        moby->state = '\x03';
      }
      else {
        mobyutil::MB_SetStateByGroup(moby->group,3);
      }
      puVar16 = (undefined4 *)sound::PlayMobySound(0,0,(MobyInstance *)piVar7[0x10]);
      return puVar16;
    }
    if (bVar1 != 0) {
      return (undefined4 *)(uint)bVar1;
    }
    piVar7[4] = (int)(moby->pos).x;
    piVar7[5] = (int)(moby->pos).y;
    piVar7[6] = (int)(moby->pos).z;
    piVar7[7] = (int)(moby->pos).w;
    piVar7[8] = (int)(moby->rotation).x;
    piVar7[9] = (int)(moby->rotation).y;
    piVar7[10] = (int)(moby->rotation).z;
    piVar7[0xb] = (int)(moby->rotation).w;
    piVar7[0xc] = (int)(moby->transform).v2.x;
    piVar7[0xd] = (int)(moby->transform).v2.y;
    piVar7[0xe] = (int)(moby->transform).v2.z;
    piVar7[0xf] = (int)(moby->transform).v2.w;
    pMVar14 = mobyfunc::CreateMoby(WARSHIP_DOOR_LOW_PART);
    piVar7[0x10] = (int)pMVar14;
    pMVar14->drawDistance = 0x40;
    *(undefined1 *)(piVar7[0x10] + 0x31) = 1;
    *(undefined8 *)(piVar7[0x10] + 0x38) = *(undefined8 *)&moby->color;
    *(MobyModeBit *)(piVar7[0x10] + 0x34) = moby->modeBits;
    iVar15 = piVar7[0x10];
    *(f32 *)(iVar15 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar15 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar15 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar15 + 0x1c) = (moby->pos).w;
    iVar15 = piVar7[0x10];
    *(f32 *)(iVar15 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar15 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar15 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar15 + 0x4c) = (moby->rotation).w;
    if (-1 < *piVar7) {
      moby->state = '\x01';
      return (undefined4 *)0x1;
    }
    if (piVar7[1] == 2) {
      moby->state = '\x02';
      return (undefined4 *)0x2;
    }
    fVar2 = (float)piVar7[0xd];
    fVar3 = (float)piVar7[0xc];
    fVar4 = (float)piVar7[0xe];
    fVar5 = 0.0;
    iVar15 = piVar7[0x10];
    fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar9 = DAT_00740854 / fVar13;
    fVar11 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    fVar10 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar2 * fVar9;
    }
    fVar12 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar12 = fVar4 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar2 * fVar9;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar12 = fVar4 * fVar9;
    }
    (moby->pos).x = (float)piVar7[4] + fVar11;
    (moby->pos).y = (float)piVar7[5] + fVar10;
    (moby->pos).z = (float)piVar7[6] + fVar12;
    (moby->pos).w = (f32)piVar7[7];
    fVar2 = (float)piVar7[0xd];
    fVar3 = (float)piVar7[0xc];
    fVar4 = (float)piVar7[0xe];
    fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar11 = -DAT_00740858 / fVar13;
    fVar9 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar3 * fVar11;
    }
    fVar10 = fVar5;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar2 * fVar11;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar5 = fVar4 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar3 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar2 * fVar11;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar11;
    }
    *(float *)(iVar15 + 0x10) = (float)piVar7[4] + fVar9;
    *(float *)(iVar15 + 0x14) = (float)piVar7[5] + fVar10;
    *(float *)(iVar15 + 0x18) = (float)piVar7[6] + fVar5;
    *(int *)(iVar15 + 0x1c) = piVar7[7];
    mobyfunc::UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
    moby->state = '\x05';
    return (undefined4 *)0x5;
  }
  fVar2 = (moby->pos).y - (float)piVar7[5];
  fVar3 = (moby->pos).x - (float)piVar7[4];
  fVar4 = (moby->pos).z - (float)piVar7[6];
  bVar1 = moby->setByGroup;
  local_a4 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar25 = (double)local_a4;
  iVar15 = piVar7[0x10];
  fVar2 = *(float *)(iVar15 + 0x14) - (float)piVar7[5];
  fVar3 = *(float *)(iVar15 + 0x10) - (float)piVar7[4];
  fVar4 = *(float *)(iVar15 + 0x18) - (float)piVar7[6];
  local_a8 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar27 = (double)local_a8;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      local_a0 = (longlong)DAT_00740890;
      dVar20 = (double)*(float *)(iVar15 + 0x44);
      cVar18 = '\x02';
      dVar21 = (double)DAT_0074086c;
      iVar17 = 0x740000;
      dVar22 = (double)DAT_00740870;
      dVar23 = (double)DAT_00740874;
      dVar24 = (double)DAT_00740878;
      dVar26 = (double)DAT_0074087c;
      dVar28 = (double)DAT_00740880;
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_0074088c,(float)local_a0);
      iVar15 = fastfunc::FastDoubleToInt();
      goto LAB_001a8438;
    }
  }
  else if (bVar1 < 3) {
    cVar18 = '\x01';
    local_a0 = (longlong)DAT_00740888;
    dVar25 = (double)DAT_0074085c;
    iVar17 = 0x740000;
    dVar27 = (double)DAT_00740860;
    dVar20 = (double)DAT_00740868;
    dVar19 = (double)DAT_00740864;
    dVar21 = (double)DAT_0074086c;
    dVar22 = (double)DAT_00740870;
    dVar23 = (double)DAT_00740874;
    dVar24 = (double)DAT_00740878;
    dVar26 = (double)DAT_0074087c;
    dVar28 = (double)DAT_00740880;
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_00740884,(float)local_a0);
    iVar15 = fastfunc::FastDoubleToInt();
    goto LAB_001a8438;
  }
  iVar17 = 0x740000;
  cVar18 = '\x01';
  iVar15 = 0x1e;
  dVar21 = 10.0;
  dVar23 = 5.0;
  dVar25 = (double)DAT_0074085c;
  dVar27 = (double)DAT_00740860;
  dVar22 = 20.0;
  dVar20 = dVar19;
  dVar24 = dVar21;
  dVar26 = dVar21;
  dVar28 = dVar23;
LAB_001a8438:
  mobyutil::OrganicDelt
            ((float)dVar25,(float)((double)DAT_0071f418 * dVar21),
             (float)((double)DAT_0071f418 * dVar22),(float)((double)mobyutil::g_FrameTime * dVar23),
             &local_a4,iVar17,(float *)(piVar7 + 2));
  mobyutil::OrganicDelt
            ((float)dVar27,(float)((double)DAT_0071f418 * dVar21),
             (float)((double)DAT_0071f418 * dVar22),(float)((double)mobyutil::g_FrameTime * dVar23),
             &local_a8,iVar17,(float *)(piVar7 + 0x11));
  dVar25 = (double)(float)(dVar24 * 0.01745329238474369);
  dVar27 = (double)(float)(dVar26 * 0.01745329238474369);
  dVar24 = (double)(float)(dVar28 * 0.01745329238474369);
  mobyutil::OrganicDelt
            ((float)dVar19,(float)(dVar25 * (double)DAT_0071f418),
             (float)(dVar27 * (double)DAT_0071f418),(float)(dVar24 * (double)mobyutil::g_FrameTime),
             &(moby->rotation).y,iVar17,(float *)(piVar7 + 3));
  mobyutil::OrganicDelt
            ((float)dVar20,(float)(dVar25 * (double)DAT_0071f418),
             (float)(dVar27 * (double)DAT_0071f418),(float)(dVar24 * (double)mobyutil::g_FrameTime),
             (float *)(piVar7[0x10] + 0x44),iVar17,(float *)(piVar7 + 0x12));
  fVar2 = (float)piVar7[0xd];
  fVar3 = (float)piVar7[0xc];
  fVar4 = (float)piVar7[0xe];
  fVar5 = 0.0;
  iVar17 = piVar7[0x10];
  fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar9 = local_a4 / fVar13;
  fVar11 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar11 = fVar3 * fVar9;
  }
  fVar10 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar10 = fVar2 * fVar9;
  }
  fVar12 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar12 = fVar4 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar11 = fVar3 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar10 = fVar2 * fVar9;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar12 = fVar4 * fVar9;
  }
  (moby->pos).x = (float)piVar7[4] + fVar11;
  (moby->pos).y = (float)piVar7[5] + fVar10;
  (moby->pos).z = (float)piVar7[6] + fVar12;
  (moby->pos).w = (f32)piVar7[7];
  fVar2 = (float)piVar7[0xd];
  fVar3 = (float)piVar7[0xc];
  fVar4 = (float)piVar7[0xe];
  fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar11 = -local_a8 / fVar13;
  fVar9 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar9 = fVar3 * fVar11;
  }
  fVar10 = fVar5;
  if (0.0 - fVar13 < 0.0) {
    fVar10 = fVar2 * fVar11;
  }
  if (0.0 - fVar13 < 0.0) {
    fVar5 = fVar4 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar9 = fVar3 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar10 = fVar2 * fVar11;
  }
  if (fVar13 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar11;
  }
  *(float *)(iVar17 + 0x10) = (float)piVar7[4] + fVar9;
  *(float *)(iVar17 + 0x14) = (float)piVar7[5] + fVar10;
  *(float *)(iVar17 + 0x18) = (float)piVar7[6] + fVar5;
  *(int *)(iVar17 + 0x1c) = piVar7[7];
  mobyfunc::UpdateMobyTransform((MobyInstance *)piVar7[0x10]);
  puVar16 = (undefined4 *)fastfunc::FastDecTimerS32(ZEXT48(piVar7) + 0x4c);
  if (puVar16 != (undefined4 *)0x0) {
    moby->setByGroup = cVar18;
    puVar16 = &DAT_001a7c38;
    piVar7[0x13] = (int)(animationSpeed * ((float)(longlong)iVar15 + 0.5));
    if ((ABS(local_a4 - DAT_0074085c) < 0.01) &&
       (puVar16 = (undefined4 *)0x740000, ABS(local_a8 - DAT_00740860) < 0.01)) {
      puVar16 = (undefined4 *)0x5;
      moby->state = '\x05';
    }
  }
  return puVar16;
}



//==== 001a87d8  ns=Global  size=0xc
// sig: undefined FUN_001a87d8(void)
// callers(1): 001c96c0 mobyupdate_unsorted::UpdateMoby_1108
// callees(0): 

void FUN_001a87d8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 3;
  return;
}



//==== 001a87e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1059_001a87e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1059_001a87e4(void)

{
  DAT_007408e0 = 0x10000;
  return;
}



//==== 001a8808  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M1059_001a8808(void)
// callers(1): 001a8ac0 mobyupdate_helpers::M1059_001a8ac0
// callees(2): 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick

void mobyupdate_helpers::M1059_001a8808(undefined8 param_1,int param_2,undefined8 *param_3)

{
  float fVar1;
  float local_20 [2];
  
  fVar1 = DAT_0071f418 * 29.400002;
  *(undefined4 *)(param_2 + 0x14) = 0x3a03126f;
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x18) = mobyutil::g_FrameTime * 9.0;
  fVar1 = mobyutil::g_FrameTime;
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x30) = 0x3e75c28f;
  *(undefined4 *)(param_2 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
  *(undefined4 *)(param_2 + 0x48) = 0x3e4ccccd;
  *(undefined4 *)(param_2 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_2 + 0x50) = 0x40400000;
  *(undefined4 *)(param_2 + 0x54) = 0x41100000;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x400;
  *(undefined4 *)(param_2 + 0x24) = 0xd;
  *(float *)(param_2 + 0x1c) = fVar1 * 7.0;
  mobyutil::MB_VecAtan2Angles(*param_3,param_3[1],local_20,param_2 + 0x18,param_2 + 0x1c);
  mobyutil::MB_StartKick((double)local_20[0],param_1,param_2);
  return;
}



//==== 001a8960  ns=mobyupdate_helpers  size=0x15c
// sig: undefined M1059_001a8960(void)
// callers(1): 001a8ac0 mobyupdate_helpers::M1059_001a8ac0
// callees(2): 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick

void mobyupdate_helpers::M1059_001a8960(undefined8 param_1,int param_2,undefined8 *param_3)

{
  float fVar1;
  float local_30 [4];
  
  fVar1 = DAT_0071f418 * 29.400002;
  *(undefined4 *)(param_2 + 0x14) = 0x3a03126f;
  *(float *)(param_2 + 0x10) = fVar1;
  *(float *)(param_2 + 0x18) = mobyutil::g_FrameTime * 9.0;
  fVar1 = mobyutil::g_FrameTime;
  *(undefined4 *)(param_2 + 0x28) = 0x3fb33333;
  *(undefined4 *)(param_2 + 0x30) = 0x3e75c28f;
  *(undefined4 *)(param_2 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
  *(undefined4 *)(param_2 + 0x48) = 0x3e4ccccd;
  *(undefined4 *)(param_2 + 0x4c) = 0x3c23d70a;
  *(undefined4 *)(param_2 + 0x50) = 0x41000000;
  *(undefined4 *)(param_2 + 0x54) = 0x41980000;
  *(undefined1 *)(param_2 + 0x3d) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x599;
  *(undefined4 *)(param_2 + 0x24) = 0xd;
  *(float *)(param_2 + 0x1c) = fVar1 * 7.0;
  mobyutil::MB_VecAtan2Angles(*param_3,param_3[1],local_30,param_2 + 0x18,param_2 + 0x1c);
  mobyutil::MB_StartKick((double)local_30[0],param_1,param_2);
  return;
}



//==== 001a8ac0  ns=mobyupdate_helpers  size=0x230
// sig: undefined M1059_001a8ac0(void)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(7): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 001a8808 mobyupdate_helpers::M1059_001a8808; 001a8960 mobyupdate_helpers::M1059_001a8960

void mobyupdate_helpers::M1059_001a8ac0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int local_30 [2];
  
  if (param_1->state != '\x0e') {
    iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
    iVar6 = mobyutil::MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    if (param_1->setByGroup != '\0') {
      pfVar7 = (float *)param_3;
      if (iVar6 < 3) {
        if ((-1 < iVar6) && (0 < iVar6)) {
          *pfVar7 = 0.0;
        }
      }
      else if (iVar6 < 0xb) {
        if (iVar6 < 9) {
          M1059_001a8960(param_1,param_2 + 0x70,iVar5 + 0x10);
          param_1->state = '\f';
        }
        else {
          if (param_1->animationId != '\x04') {
            mobyutil::MB_SetAnimation(param_1,4,4,4);
          }
          param_1->state = '\r';
        }
      }
      if (1 < local_30[0]) {
        uVar2 = (int)*pfVar7 >> 0x1f;
        uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
        iVar6 = (int)param_2;
        if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
            (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
          *(undefined1 *)(iVar6 + 0x67) = 0xfa;
          auVar8 = loadVectorLeftIndexed(in_LR,0x1a8abc);
          auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar8 = vectorMultiplyAddFloatingPoint
                             (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,
                              auVar9);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = vectorSplatHalfWord(auVar8,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
          *(undefined2 *)(iVar6 + 0x26) = uVar4;
          mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        }
        else {
          MVar1 = param_1->modeBits;
          *pfVar7 = 0.0;
          param_1->modeBits =
               MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          M1059_001a8808(param_1,param_2 + 0x70,iVar5 + 0x10);
          mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
          *(undefined1 *)(iVar6 + 0x67) = 0x78;
          mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
          param_1->state = '\x0e';
        }
      }
    }
    param_1->damage = -1;
  }
  return;
}



//==== 001a8cf0  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1059_001a8cf0(void)
// callers(1): 001a8f18 mobyupdate_helpers::M1059_001a8f18
// callees(0): 

void mobyupdate_helpers::M1059_001a8cf0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar4 = 0;
    piVar3 = param_1;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        pfVar2 = (float *)(param_1 + (iVar4 - (iVar4 / iVar1) * iVar1) * 4 + 4);
        iVar1 = *param_1;
        piVar3[7] = (int)SQRT(((float)piVar3[6] - pfVar2[2]) * ((float)piVar3[6] - pfVar2[2]) +
                              ((float)piVar3[4] - *pfVar2) * ((float)piVar3[4] - *pfVar2) +
                              ((float)piVar3[5] - pfVar2[1]) * ((float)piVar3[5] - pfVar2[1]));
        piVar3 = piVar3 + 4;
      } while (iVar4 < iVar1);
    }
  }
  return;
}



//==== 001a8d88  ns=mobyupdate_helpers  size=0x98
// sig: undefined M1059_001a8d88(void)
// callers(0): 
// callees(1): 000ffc18 mobyutil::GetGroundZNoWater

undefined8 mobyupdate_helpers::M1059_001a8d88(longlong param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)mobyutil::GetGroundZNoWater(param_1 + 0x10);
  *(float *)(param_2 + 0x130) = (float)dVar2;
  dVar3 = (double)(float)((double)**(float **)(param_2 + 300) - dVar2);
  *(float *)(param_2 + 0x138) = (float)(dVar3 * 0.5 + dVar2);
  if (0.4099999964237213 <= dVar3) {
    uVar1 = 0;
    if (dVar3 <= 0.6800000071525574) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



//==== 001a8e20  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M1059_001a8e20(void)
// callers(2): 001a8f18 mobyupdate_helpers::M1059_001a8f18; 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M1059_001a8e20(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xbc);
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 0x53) != '\0') {
      mobyutil::MB_SetAnimation(param_1,0,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else if (bVar1 < 2) {
    if (*(char *)(param_1 + 0x53) != '\x03') {
      mobyutil::MB_SetAnimation(param_1,3,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  else if (bVar1 < 3) {
    if (*(char *)(param_1 + 0x53) != '\t') {
      mobyutil::MB_SetAnimation(param_1,9,0,10);
    }
    *(undefined1 *)(param_1 + 0x20) = 0xf;
  }
  return;
}



//==== 001a8f18  ns=mobyupdate_helpers  size=0x2d0
// sig: undefined M1059_001a8f18(undefined4 param_1, Spline * param_2)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(5): 000ffc18 mobyutil::GetGroundZNoWater; 001a8cf0 mobyupdate_helpers::M1059_001a8cf0; 001a8e20 mobyupdate_helpers::M1059_001a8e20; 005c8318 rand; 005cd098 libc::printf
// strings: 006543d0: 'Illegal Bounding path for moby 1059 instance #%d.\n' | 00654408: 'Illegal Hero Detect path for moby 1059 instance #%d.\n' | 00654440: 'Illegal water moby for moby 1059 instance #%d.\n' | 00654470: 'Illegal guard point cuboid for moby 1059 instance #%d.\n'

undefined8 mobyupdate_helpers::M1059_001a8f18(int param_1,Spline *param_2)

{
  float fVar1;
  float *pfVar2;
  Spline *pSVar3;
  Cuboid *pCVar4;
  undefined8 uVar5;
  undefined1 uVar7;
  int iVar6;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = param_2->points[0x10].x;
  if (fVar1 == -NAN) {
    uVar8 = param_1 - (int)MobyInstance;
    libc::printf("Illegal Bounding path for moby 1059 instance #%d.\n",
                 ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
    uVar5 = 1;
  }
  else {
    pSVar3 = Splines[(int)fVar1];
    param_2->points[0x11].z = (float)pSVar3;
    M1059_001a8cf0(pSVar3);
    fVar1 = param_2->points[0x13].y;
    if (fVar1 == -NAN) {
      uVar8 = param_1 - (int)MobyInstance;
      libc::printf("Illegal Hero Detect path for moby 1059 instance #%d.\n",
                   ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
      uVar5 = 1;
    }
    else {
      pSVar3 = Splines[(int)fVar1];
      param_2->points[0x13].z = (float)pSVar3;
      M1059_001a8cf0(pSVar3);
      fVar1 = param_2->points[0x10].z;
      if (fVar1 == -NAN) {
        uVar8 = param_1 - (int)MobyInstance;
        libc::printf("Illegal water moby for moby 1059 instance #%d.\n",
                     ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
        uVar5 = 1;
      }
      else {
        param_2->points[0x11].w = (float)&MobyInstance[(int)fVar1].pos.z;
        dVar9 = (double)mobyutil::GetGroundZNoWater((longlong)param_1 + 0x10);
        pfVar2 = (float *)param_2->points[0x11].w;
        param_2->points[0x12].x = (float)dVar9;
        dVar10 = (double)(float)((double)*pfVar2 - dVar9);
        param_2->points[0x12].z = (float)(dVar10 * 0.5 + dVar9);
        if (0.4099999964237213 <= dVar10) {
          uVar7 = 0;
          if (dVar10 <= 0.6800000071525574) {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 2;
        }
        *(undefined1 *)(param_1 + 0xbc) = uVar7;
        pCVar4 = Cuboids;
        fVar1 = param_2->points[0x10].y;
        if (fVar1 == -NAN) {
          uVar8 = param_1 - (int)MobyInstance;
          libc::printf("Illegal guard point cuboid for moby 1059 instance #%d.\n",
                       ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0));
          uVar5 = 1;
        }
        else {
          param_2->points[0xe].x = Cuboids[(int)fVar1].pos.x;
          param_2->points[0xe].y = pCVar4[(int)fVar1].pos.y;
          param_2->points[0xe].z = pCVar4[(int)fVar1].pos.z;
          param_2->points[0xe].w = pCVar4[(int)fVar1].pos.w;
          param_2->points[0xd].x = *(float *)(param_1 + 0x10);
          param_2->points[0xd].y = *(float *)(param_1 + 0x14);
          param_2->points[0xd].z = *(float *)(param_1 + 0x18);
          param_2->points[0xd].w = *(float *)(param_1 + 0x1c);
          M1059_001a8e20((longlong)param_1,param_2);
          iVar6 = rand();
          param_2->points[0x12].y = (float)(iVar6 % 0x78);
          uVar8 = rand();
          fVar1 = -0.34906584;
          if ((uVar8 & 1) != 0) {
            fVar1 = 0.34906584;
          }
          uVar5 = 0;
          param_2->points[0x13].x = fVar1;
          param_2->points[0x13].w = 0.0;
          *(undefined1 *)((int)&param_2->points[1].z + 1) = 1;
        }
      }
    }
  }
  return uVar5;
}



//==== 001a9218  ns=mobyupdate_helpers  size=0x6dc
// sig: undefined M1059_001a9218(void)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(4): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 00104e44 mobyutil::PointInsideComplexPoly; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M1059_001a9218(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
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
  ulonglong in_f18;
  undefined8 uVar31;
  ulonglong in_f19;
  double dVar32;
  ulonglong in_f20;
  double dVar33;
  ulonglong in_f21;
  double dVar34;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  double dVar38;
  ulonglong in_f26;
  double dVar39;
  ulonglong in_f27;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar14;
  puVar7[0x30] = in_LR;
  puVar7[0x20] = in_f18;
  puVar7[0x21] = in_f19;
  puVar7[0x22] = in_f20;
  puVar7[0x23] = in_f21;
  puVar7[0x24] = in_f22;
  puVar7[0x25] = in_f23;
  puVar7[0x26] = in_f24;
  puVar7[0x27] = in_f25;
  puVar7[0x28] = in_f26;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  puVar7[0x1f] = unaff_r31;
  iVar18 = *(int *)(param_2 + 0x134);
  puVar7[0x1e] = unaff_r30;
  puVar7[0x1d] = unaff_r29;
  puVar7[0x1c] = unaff_r28;
  puVar6 = *(undefined4 **)(param_2 + 0x128);
  if (iVar18 == 0) {
    fVar1 = *(float *)(param_2 + 0xf0) - *(float *)(param_1 + 0x10);
    fVar3 = *(float *)(param_2 + 0xf4) - *(float *)(param_1 + 0x14);
    fVar4 = ABS(fVar1);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x8c) = fVar1;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar4 - fVar2;
    fVar1 = 0.0;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)((int)puVar7 + 0x8c));
    if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar7 + 0x12));
    if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar16 = uVar14 - 0x160;
      lVar19 = uVar14 - 0xb8;
      lVar21 = uVar14 - 0xa8;
      lVar22 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xc4) = fVar3;
      *(float *)((int)puVar7 + 0xbc) = fVar3;
      *(float *)(puVar7 + 0x18) = fVar3;
      *(float *)(puVar7 + 0x17) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar4;
      *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
      *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar3 * fVar3;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar21 = uVar14 - 0xb8;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar21;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar9 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar18 + 0xb8) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    *(float *)(param_2 + 0x13c) = fVar1;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x48);
    dVar41 = 1.570796251296997;
    dVar40 = 3.141592502593994;
    fVar4 = fVar1 + 1.5707963;
    dVar39 = -3.141592502593994;
    dVar38 = -0.16666656732559204;
    dVar37 = 0.008333025500178337;
    dVar36 = -0.0001980741071747616;
    dVar35 = 2.601886990305502e-06;
    dVar34 = 5.199999809265137;
    lVar16 = uVar14 - 0x100;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar2 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar2 = fVar4;
    }
    fVar5 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar1 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
      fVar1 = fVar2;
    }
    fVar10 = fVar5 * fVar5;
    fVar13 = fVar1 * fVar1;
    fVar2 = fVar10 * fVar10 * fVar5;
    fVar11 = fVar13 * fVar13 * fVar1;
    fVar8 = fVar10 * fVar2;
    fVar12 = fVar13 * fVar11;
    fVar3 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    dVar33 = 0.0;
    *(undefined4 *)(puVar7 + 0xf) = *(undefined4 *)(param_1 + 0x18);
    *(float *)((int)puVar7 + 0x74) =
         (fVar10 * fVar8 * 2.601887e-06 +
         fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) * 5.2
         + fVar4;
    *(float *)(puVar7 + 0xe) =
         (fVar13 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar13 * fVar1 * -0.16666657 + fVar1) *
         5.2 + fVar3;
    iVar18 = mobyutil::PointInsideComplexPoly((Vec4 *)lVar16,(Vec4 *)(puVar6 + 4),*puVar6);
    if (((iVar18 == 0) ||
        (iVar18 = collproc::CollLine(param_1 + 0x10,lVar16,0x24,param_1,0), iVar18 != 0)) ||
       (iVar18 = collproc::CollSphere(0x3ff8000000000000,lVar16,&DAT_001a91e8,0x24,param_1),
       iVar18 != 0)) {
      dVar43 = (double)*(float *)(param_1 + 0x48);
      dVar44 = ABS((double)*(float *)(param_2 + 0x140));
      dVar32 = 6.2831854820251465;
      uVar31 = 0x3ff8000000000000;
      dVar42 = dVar33;
      do {
        dVar43 = (double)fastfunc::FastWrapRot((float)dVar43,*(float *)(param_2 + 0x140));
        dVar23 = (double)(float)(dVar43 + dVar41);
        dVar24 = (double)(float)(dVar40 - dVar43);
        if (dVar43 - (double)(float)(dVar40 - dVar43) < 0.0) {
          dVar24 = dVar43;
        }
        dVar26 = (double)(float)(dVar40 - dVar23);
        if (dVar23 - (double)(float)(dVar40 - dVar23) < 0.0) {
          dVar26 = dVar23;
        }
        dVar25 = (double)(float)(dVar39 - dVar43);
        if ((double)(float)(dVar39 - dVar43) - dVar24 < 0.0) {
          dVar25 = dVar24;
        }
        fVar1 = *(float *)(param_1 + 0x10);
        fVar3 = *(float *)(param_1 + 0x14);
        puVar6 = *(undefined4 **)(param_2 + 0x128);
        dVar24 = (double)(float)(dVar39 - dVar23);
        if ((double)(float)(dVar39 - dVar23) - dVar26 < 0.0) {
          dVar24 = dVar26;
        }
        dVar23 = (double)(float)(dVar25 * dVar25);
        dVar26 = (double)(float)(dVar24 * dVar24);
        dVar28 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
        *(undefined4 *)(puVar7 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar24));
        dVar27 = (double)(float)(dVar23 * dVar28);
        dVar29 = (double)(float)(dVar26 * dVar30);
        *(float *)((int)puVar7 + 0x74) =
             (float)((double)(float)((double)(float)(dVar23 * dVar27) * dVar35 +
                                    (double)(float)(dVar27 * dVar36 +
                                                   (double)(float)(dVar28 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar23 * dVar25) * dVar38 + dVar25)))) * dVar34 +
                    (double)fVar3);
        *(float *)(puVar7 + 0xe) =
             (float)((double)(float)((double)(float)(dVar26 * dVar29) * dVar35 +
                                    (double)(float)(dVar29 * dVar36 +
                                                   (double)(float)(dVar30 * dVar37 +
                                                                  (double)(float)((double)(float)(
                                                  dVar26 * dVar24) * dVar38 + dVar24)))) * dVar34 +
                    (double)fVar1);
        iVar18 = mobyutil::PointInsideComplexPoly((Vec4 *)lVar16,(Vec4 *)(puVar6 + 4),*puVar6);
        if (((iVar18 != 0) &&
            (iVar18 = collproc::CollLine(param_1 + 0x10,lVar16,0x24,param_1,0), iVar18 == 0)) &&
           (iVar18 = collproc::CollSphere(uVar31,lVar16), iVar18 == 0)) {
          *(float *)(param_2 + 0x13c) = (float)dVar43;
          return;
        }
        dVar42 = (double)(float)(dVar44 + dVar42);
      } while (dVar42 < dVar32);
      fVar1 = *(float *)(param_2 + 0xf0) - *(float *)(param_1 + 0x10);
      fVar3 = *(float *)(param_2 + 0xf4) - *(float *)(param_1 + 0x14);
      dVar35 = ABS((double)fVar1);
      dVar36 = ABS((double)fVar3);
      *(float *)(puVar7 + 0x10) = fVar1;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)(puVar7 + 0x11) = (float)(dVar35 - dVar36);
      uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
      dVar34 = ABS((double)*(float *)(puVar7 + 0x10));
      if ((double)*(float *)(puVar7 + 0x11) - dVar33 < 0.0) {
        dVar34 = dVar36;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar36 = ABS((double)*(float *)((int)puVar7 + 0x84));
      if ((double)*(float *)(puVar7 + 0x11) - dVar33 < 0.0) {
        dVar36 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar33 < dVar34) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0xd8;
        lVar21 = uVar14 - 200;
        lVar22 = 2;
        fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
        fVar2 = fVar4 * fVar4;
        *(float *)((int)puVar7 + 0xa4) = fVar4;
        *(float *)((int)puVar7 + 0x9c) = fVar4;
        *(float *)(puVar7 + 0x14) = fVar4;
        *(float *)(puVar7 + 0x13) = fVar4;
        fVar4 = fVar2 * fVar2;
        *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar2;
        *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
        *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar2;
        do {
          *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xd8;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar2 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar18 + 0x98)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar3);
      }
      *(float *)(param_2 + 0x13c) = (float)dVar33;
    }
  }
  return;
}



//==== 001a9908  ns=mobyupdate_helpers  size=0x130
// sig: undefined M1059_001a9908(void)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(2): 00100ef8 mobyutil::MB_MoveAndCollide2; 00109c30 mobyutil::OrganicDelt

void mobyupdate_helpers::M1059_001a9908
               (double param_1,double param_2,double param_3,int param_4,undefined *param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *unused;
  float local_18;
  undefined4 local_14;
  
  local_18 = *(float *)(param_4 + 0x18);
  local_14 = *(undefined4 *)(param_4 + 0x1c);
  unused = param_5;
  if (**(float **)(param_5 + 300) - 0.3 < local_18) {
    unused = &DAT_00720000;
    *(float *)(param_5 + 0xd8) = -(mobyutil::g_FrameTime * 9.8 - *(float *)(param_5 + 0xd8));
  }
  mobyutil::OrganicDelt
            (*(float *)(param_5 + 0x138),(float)param_1,(float)param_2,(float)param_3,&local_18,
             (int)unused,(float *)(param_5 + 0xd8));
  iVar1 = mobyutil::MB_MoveAndCollide2
                    (0x3ff0000000000000,0,param_4,param_5 + 0xd0,&DAT_001a98f4,0x400,param_8,0x10);
  if (iVar1 != 0) {
    *(float *)(param_5 + 0xd0) = *(float *)(param_5 + 0xd0) * 0.5;
    *(float *)(param_5 + 0xd4) = *(float *)(param_5 + 0xd4) * 0.5;
    *(float *)(param_5 + 0xd8) = *(float *)(param_5 + 0xd8) * 0.5;
  }
  return;
}



//==== 001a9a58  ns=mobyupdate_helpers  size=0x1bc
// sig: undefined M1059_001a9a58(void)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(1): 005026a0 fastfunc::FastSubRots

undefined8
mobyupdate_helpers::M1059_001a9a58
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,double param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  uVar9 = 0;
  dVar11 = (double)SQRT(*(float *)(param_9 + 0xd0) * *(float *)(param_9 + 0xd0) +
                        *(float *)(param_9 + 0xd4) * *(float *)(param_9 + 0xd4));
  dVar10 = (double)fastfunc::FastSubRots(*(float *)(param_8 + 0x48),(float)param_1);
  fVar1 = *(float *)(param_8 + 0x48);
  if (param_2 <= dVar10) {
    if (param_4 < dVar10) {
      dVar11 = (double)(float)(dVar11 - param_5);
    }
  }
  else {
    uVar9 = 1;
    dVar11 = (double)(float)(param_3 + dVar11);
  }
  if ((dVar11 <= param_6) && (param_6 = dVar11, dVar11 < param_7)) {
    param_6 = param_7;
  }
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar3 * fVar3 * fVar1;
  fVar8 = fVar2 * fVar7;
  fVar6 = fVar3 * fVar5;
  *(float *)(param_9 + 0xd4) =
       (float)((double)(fVar2 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * param_6);
  *(float *)(param_9 + 0xd0) =
       (float)((double)(fVar3 * fVar6 * 2.601887e-06 +
                       fVar6 * -0.0001980741 +
                       fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) * param_6);
  return uVar9;
}



//==== 001a9c20  ns=mobyupdate_helpers  size=0x238
// sig: undefined M1059_001a9c20(void)
// callers(1): 001aa078 mobyupdate_unsorted::UpdateMoby_1059
// callees(5): 0005e598 collproc::CollMobySphere; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 0010581c mobyutil::SetCollDamIn

void mobyupdate_helpers::M1059_001a9c20
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,MobyInstance *param_6,int param_7,uint param_8,uint param_9)

{
  int iVar1;
  double dVar2;
  uint in_stack_0000007c;
  undefined4 in_stack_00000084;
  u8 in_stack_0000008f;
  MobyInstance *in_stack_00000094;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  
  dVar2 = (double)mobyfunc::BlendAnimFrame(param_6);
  if ((((param_6->state == param_8) && (param_6->updateId == param_9)) && (param_1 < dVar2)) &&
     (dVar2 < param_2)) {
    mobyutil::SetCollDamIn(param_4,auStack_a0,param_6,1,0x3f800000,local_c0);
    mobyfunc::GetBonePosition(param_6,0,auStack_b0);
    iVar1 = collproc::CollMobySphere(param_5,auStack_b0);
    if ((iVar1 != 0) && (CollOutput.pMoby == in_stack_00000094)) {
      *(float *)(param_7 + 0xd0) = -*(float *)(param_7 + 0xd0);
      *(float *)(param_7 + 0xd4) = -*(float *)(param_7 + 0xd4);
      *(float *)(param_7 + 0xd8) = -*(float *)(param_7 + 0xd8);
      *(float *)(param_7 + 0xd8) = DAT_0071f408 * -0.05;
      if (param_6->animationId != in_stack_0000007c) {
        mobyutil::MB_SetAnimation(param_6,in_stack_0000007c,in_stack_00000084,5);
      }
      param_6->state = in_stack_0000008f;
    }
  }
  return;
}



//==== 001a9e58  ns=mobyupdate_helpers  size=0x9c
// sig: undefined M1059_001a9e58(void)
// callers(0): 
// callees(2): 00059e20 collproc::CollSphere; 000f1114 mobyfunc::GetBonePosition

undefined8
mobyupdate_helpers::M1059_001a9e58
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,MobyInstance *param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  mobyfunc::GetBonePosition(param_2,0,auStack_30);
  iVar2 = collproc::CollSphere(param_1,auStack_30);
  if ((iVar2 == 0) || (CollOutput.pMoby != param_4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



//==== 001a9ef4  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M1059_001a9ef4(void)
// callers(0): 
// callees(2): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup

undefined8 mobyupdate_helpers::M1059_001a9ef4(MobyInstance *param_1,int param_2,int param_3)

{
  int iVar1;
  MobyInstance *local_20 [2];
  
  local_20[0] = (MobyInstance *)0x0;
  iVar1 = mobyutil::MB_GetFirstMobyInGroup(local_20,(uint)(byte)param_1->group,'\0','\0');
  while( true ) {
    if ((iVar1 != 0) || (local_20[0] == (MobyInstance *)0x0)) {
      return 0;
    }
    if ((local_20[0] != param_1) &&
       ((int)(uint)local_20[0]->state <= param_3 && param_2 <= (int)(uint)local_20[0]->state))
    break;
    iVar1 = mobyutil::MB_GetNextMobyInGroup(local_20,local_20[0],'\0','\0');
  }
  return 1;
}



//==== 001aa078  ns=mobyupdate_unsorted  size=0x1e2c
// sig: undefined UpdateMoby_1059(MobyInstance * moby)
// callers(0): 
// callees(38): 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 00065468 stub::STUB_00065468; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000ff190 mobyutil::MB_DeltAngSpeed; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffc18 mobyutil::GetGroundZNoWater; 00100ef8 mobyutil::MB_MoveAndCollide2; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00104e44 mobyutil::PointInsideComplexPoly; 00105f40 mobyutil::CollWaterHeight; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0012aee8 partupd::SpawnPart_45; 0017bd90 water::WaterTile_PutDrop; 001a8ac0 mobyupdate_helpers::M1059_001a8ac0; 001a8e20 mobyupdate_helpers::M1059_001a8e20; 001a8f18 mobyupdate_helpers::M1059_001a8f18; 001a9218 mobyupdate_helpers::M1059_001a9218; 001a9908 mobyupdate_helpers::M1059_001a9908; 001a9a58 mobyupdate_helpers::M1059_001a9a58; 001a9c20 mobyupdate_helpers::M1059_001a9c20; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005cd098 libc::printf; 005e8338 FUN_005e8338
// strings: 006544a8: 'Initialization failed for moby 1059 instance #%d. Deleting.\n' | 006544e8: "hey, shouldn't be in init!\n"

/* Moby 1059 */

void mobyupdate_unsorted::UpdateMoby_1059(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Spline *pSVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  f32 fVar11;
  bool bVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  longlong lVar21;
  u8 uVar22;
  u8 uVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined1 local_120 [8];
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  Vec4 local_d0;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  MobyInstance *local_90;
  undefined4 local_8c;
  MobyInstance *local_80;
  MobyInstance *local_7c [3];
  
  lVar14 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pSVar7 = (Spline *)moby->pVar;
  if (pSVar7 == (Spline *)0x0) {
    return;
  }
  mobyfunc::DoManipulator(0x40019999a0000000,moby,0,(Manipulator *)(pSVar7->points + 0x14));
  if (moby->state == '\0') {
    iVar15 = mobyupdate_helpers::M1059_001a8f18(moby,pSVar7);
    if (iVar15 != 0) {
      uVar20 = (int)moby - (int)MobyInstance;
      libc::printf("Initialization failed for moby 1059 instance #%d. Deleting.\n",
                   ((int)uVar20 >> 8) + (uint)((int)uVar20 < 0 && (uVar20 & 0xff) != 0));
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_001abdc0;
  }
  dVar32 = 30.0;
  mobyutil::MB_getTarget(0x403e000000000000,lVar14,&DAT_001a9fc0,&local_d0);
  mobyupdate_helpers::M1059_001a8ac0(lVar14,pSVar7,pSVar7->points + 1);
  mobyutil::MB_ColorDyingMoby(lVar14,pSVar7->points + 5);
  iVar15 = fastfunc::FastDecTimerS32(&pSVar7->points[0x12].y);
  if ((pSVar7->points[0x10].x == 0.0) || (moby->state < 7)) {
    puVar8 = (undefined4 *)pSVar7->points[0x13].z;
    uVar16 = mobyutil::PointInsideComplexPoly(&g_heroPosition,(Vec4 *)(puVar8 + 4),*puVar8);
    fVar10 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    uVar20 = (uint)LZCOUNT(uVar16) >> 5 ^ 1;
    if (dVar32 <= (double)SQRT(fVar3 * fVar3 + fVar10 * fVar10)) {
      local_90 = (MobyInstance *)0x0;
      local_d0.w = 0.0;
      local_d0.z = 0.0;
      local_d0.y = 0.0;
      local_d0.x = 0.0;
      local_b4 = 0.0;
      local_b8 = 0.0;
      local_bc = 0.0;
      local_c0 = 0.0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0;
      local_8c = 2;
    }
    else {
      local_90 = g_heroMobyPtr;
      local_d0.x = g_heroPosition.x;
      local_d0.y = g_heroPosition.y;
      local_d0.z = g_heroPosition.z;
      local_d0.w = g_heroPosition.w;
      local_c0 = g_heroRotation.x;
      local_bc = g_heroRotation.y;
      local_b8 = g_heroRotation.z;
      local_b4 = g_heroRotation.w;
      local_b0 = DAT_00969da0;
      local_ac = DAT_00969da4;
      local_a8 = DAT_00969da8;
      local_a4 = DAT_00969dac;
      local_a0 = hero::g_heroCGPos;
      local_9c = DAT_00969db4;
      local_98 = DAT_00969db8;
      local_94 = DAT_00969dbc;
      local_8c = 0;
    }
  }
  else {
    puVar8 = (undefined4 *)pSVar7->points[0x13].z;
    uVar16 = mobyutil::PointInsideComplexPoly(&local_d0,(Vec4 *)(puVar8 + 4),*puVar8);
    uVar20 = (uint)LZCOUNT(uVar16) >> 5 ^ 1;
  }
  if (pSVar7->points[0x10].x != 0.0) {
    puVar8 = (undefined4 *)pSVar7->points[0x11].z;
    mobyutil::PointInsideComplexPoly((Vec4 *)&moby->pos,(Vec4 *)(puVar8 + 4),*puVar8);
  }
  uVar23 = 0xff;
  lVar21 = lVar14 + 0x10;
  bVar1 = moby->setByGroup;
  uVar22 = 0xff;
  dVar32 = (double)mobyutil::GetGroundZNoWater(lVar21);
  pfVar9 = (float *)pSVar7->points[0x11].w;
  pSVar7->points[0x12].x = (float)dVar32;
  dVar29 = 0.5;
  dVar24 = (double)(float)((double)*pfVar9 - dVar32);
  pSVar7->points[0x12].z = (float)(dVar24 * 0.5 + dVar32);
  if (0.4099999964237213 <= dVar24) {
    uVar18 = 0;
    if (dVar24 <= 0.6800000071525574) {
      uVar18 = 1;
    }
  }
  else {
    uVar18 = 2;
  }
  moby->setByGroup = (char)uVar18;
  if (bVar1 != uVar18) {
    iVar17 = (uint)bVar1 * 3;
    uVar23 = (&DAT_00740904)[iVar17 + uVar18];
    uVar22 = (&DAT_0074090d)[iVar17 + uVar18];
  }
  mobyfunc::GetBonePosition(lVar14,0,local_120);
  iVar17 = collproc::CollSphere(0x3fe99999a0000000,local_120,&DAT_001a9fc0,1,lVar14);
  if (iVar17 != 0) {
    iVar17 = collproc::CollHotspot();
    if (iVar17 == 0) {
      dVar27 = 0.0;
      dVar32 = ABS((double)((moby->pos).z - local_118));
      dVar24 = (double)(float)((double)(*(float *)pSVar7->points[0x11].w - pSVar7->points[0x12].x) *
                              dVar29);
      if (dVar24 - dVar32 < 0.0) {
        dVar32 = dVar24;
      }
      if (pSVar7->points[0xc].z - 0.0 < 0.0) {
        dVar32 = -dVar32;
      }
      if ((moby->state == '\x0e') || (moby->state == '\f')) {
        dVar32 = (double)(float)(dVar32 * 2.0);
      }
      fVar10 = (moby->pos).y - CollOutput.ip.y;
      fVar3 = (moby->pos).x - CollOutput.ip.x;
      dVar25 = (double)SQRT(fVar3 * fVar3 + fVar10 * fVar10);
      dVar24 = dVar29;
      if (dVar29 - dVar25 < 0.0) {
        dVar24 = dVar25;
      }
      dVar24 = (double)(float)(dVar24 * 2.0);
      if ((worldUpdateTime % 0x2d == (int)(short)moby->uid) &&
         (iVar17 = mobyutil::MB_randInt(2), iVar17 == 0)) {
        water::WaterTile_PutDrop
                  ((moby->pos).x,(moby->pos).y,(float)dVar24,(float)dVar32,WaterTiles,WaterTileCnt,
                   (float)dVar27);
      }
      uVar18 = rand();
      iVar17 = worldUpdateTime / (int)((uVar18 & 7) + 0x14);
      if (worldUpdateTime ==
          iVar17 * (uVar18 & 7) + (int)((longlong)iVar17 << 4) + (int)((longlong)iVar17 << 2)) {
        uVar26 = mobyutil::MB_randRangeFloat(1.5,2.4);
        dVar24 = -0.15000000596046448;
        dVar32 = 0.15000000596046448;
        mobyutil::MB_randRangeFloat(-0.15,0.15);
        mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar32);
        mobyutil::CollWaterHeight(&CollOutput.ip.x,(float *)0x0);
        partupd::SpawnPart_45(uVar26,0x40b4820000000000,local_120);
      }
    }
  }
  fVar10 = pSVar7->points[0x13].w;
  uVar18 = (int)fVar10 >> 0x1f;
  dVar32 = 1.0;
  if (0x3f7fffff < (int)((uVar18 >> 1 ^ (uint)fVar10) - uVar18)) {
    g_heroPosition.x = (moby->pos).x;
    g_heroPosition.y = (moby->pos).y;
    g_heroPosition.z = (moby->pos).z;
    g_heroPosition.w = (moby->pos).w;
  }
  bVar1 = moby->state;
  if (7 < bVar1) {
    if (bVar1 < 0xe) {
      if (bVar1 < 0xb) {
        if (bVar1 < 9) {
          if (uVar20 == 0) {
            dVar27 = 0.7853981852531433;
            dVar24 = 1.5707963705062866;
            mobyutil::OrganicDeltAngSpeed
                      ((double)pSVar7->points[0x12].w,(double)(DAT_0071f418 * 0.7853982),
                       (double)(DAT_0071f418 * 1.5707964),
                       (double)(mobyutil::g_FrameTime * 0.7853982),lVar14,0x3f800000,
                       pSVar7->points + 0x11);
            dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                       ((double)(moby->rotation).y,0,
                                        (double)(float)((double)DAT_0071f418 * dVar27),
                                        (double)(float)((double)DAT_0071f418 * dVar24),
                                        (double)(float)((double)mobyutil::g_FrameTime * dVar27));
            (moby->rotation).y = (float)dVar24;
            if ((iVar15 != 0) &&
               (iVar17 = mobyutil::MB_IsPntInCuboid
                                   ((Vec4 *)lVar21,(longlong)(int)pSVar7->points[0x10].y),
               iVar17 != 0)) {
              if (moby->animationId != '\x03') {
                mobyutil::MB_SetAnimation(lVar14,3,0,10);
              }
              iVar17 = rand();
              pSVar7->points[0x12].y = (float)(iVar17 % 0x78 + 0x3c);
              moby->state = '\a';
            }
          }
          else {
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar14,4,0,10);
            }
            moby->state = '\t';
          }
          mobyupdate_helpers::M1059_001a9218(lVar14,pSVar7);
          iVar17 = mobyupdate_helpers::M1059_001a9a58
                             ((double)pSVar7->points[0x12].w,0x3fd6571840000000,
                              (double)(DAT_0071f418 * 3.0),0x3ff0c15240000000,
                              (double)(DAT_0071f418 * 9.0),(double)mobyutil::g_FrameTime,lVar14,
                              pSVar7);
          if ((iVar17 != 0) && (iVar15 != 0)) {
            if (moby->animationId != '\x03') {
              mobyutil::MB_SetAnimation(lVar14,3,0,10);
            }
            iVar15 = rand();
            pSVar7->points[0x12].y = (float)(iVar15 % 0x78 + 0x3c);
            moby->state = '\a';
          }
          pSVar7->points[0xc].z = -(mobyutil::g_FrameTime * 9.8 - pSVar7->points[0xc].z);
          iVar15 = mobyutil::MB_MoveAndCollide2
                             (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400);
          if (iVar15 != 0) {
            fVar10 = pSVar7->points[0xc].y;
            fVar3 = pSVar7->points[0xc].z;
            pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
            pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
            pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
          }
          if (uVar23 != 0xff) {
            if (moby->animationId != uVar22) {
              mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
            }
            moby->state = uVar23;
          }
        }
        else {
          uVar26 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),
                                (double)(local_d0.y - (moby->pos).y));
          uVar30 = 0x3ff921fb60000000;
          mobyutil::OrganicDeltAngSpeed
                    (uVar26,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                     (double)(mobyutil::g_FrameTime * 0.7853982),lVar14);
          iVar15 = mobyupdate_helpers::M1059_001a9a58
                             (uVar26,0x3fe0c15240000000,(double)(DAT_0071f418 * 4.0),uVar30,
                              (double)(DAT_0071f418 * 9.0),
                              (double)(float)((double)mobyutil::g_FrameTime * 1.5),
                              (double)mobyutil::g_FrameTime,lVar14,pSVar7);
          if (((iVar15 != 0) &&
              (fVar10 = (moby->pos).y - local_d0.y, fVar3 = (moby->pos).x - local_d0.x,
              SQRT(fVar3 * fVar3 + fVar10 * fVar10) < 1.9)) && (moby->state != '\n')) {
            if (moby->animationId != '\x05') {
              mobyutil::MB_SetAnimation(lVar14,5,0,2);
            }
            moby->state = '\n';
          }
          pSVar7->points[0xc].z = -(mobyutil::g_FrameTime * 9.8 - pSVar7->points[0xc].z);
          iVar15 = mobyutil::MB_MoveAndCollide2
                             (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400);
          if (iVar15 != 0) {
            fVar10 = pSVar7->points[0xc].y;
            fVar3 = pSVar7->points[0xc].z;
            pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
            pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
            pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
          }
          uVar19 = fastfunc::FastDoubleToInt(0x4020000000000000);
          *(undefined1 *)&pSVar7->points[4].z = uVar19;
          uVar19 = fastfunc::FastDoubleToInt(0x4023333340000000);
          *(undefined1 *)((int)&pSVar7->points[4].z + 2) = uVar19;
          if (uVar20 == 0) {
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar14,4,0,10);
            }
            moby->state = '\b';
          }
          mobyupdate_helpers::M1059_001a9c20
                    (0x4031000000000000,0x4034000000000000,dVar32,dVar32,dVar32,lVar14,pSVar7,10,5);
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar14,4,0,10);
            }
            iVar15 = rand();
            pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
            moby->state = '\b';
          }
          if (uVar23 != 0xff) {
            if (moby->animationId != uVar22) {
              mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
            }
            moby->state = uVar23;
          }
        }
      }
      else if (bVar1 < 0xc) {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\a';
        }
      }
      else if (bVar1 < 0xd) {
        uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pSVar7->points + 6));
        if ((uVar20 & 1) != 0) {
          mobyupdate_helpers::M1059_001a8e20(lVar14,pSVar7);
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        mobyupdate_helpers::M1059_001a8e20(lVar14,pSVar7);
      }
    }
    else if (bVar1 < 0x10) {
      if (bVar1 < 0xf) {
        uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pSVar7->points + 6));
        if (((byte)moby->field43_0x70 & 2 & uVar20) != 0) {
          mobyutil::MB_genericExplosion
                    (0,0,0x4000000000000000,dVar32,0x4010000000000000,dVar32,0x401c000000000000,
                     lVar14,pSVar7->points + 0xc,0,0,1,3,3,5);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
        fVar10 = pSVar7->points[0xc].y;
        fVar3 = pSVar7->points[0xc].z;
        pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
        pSVar7->points[0xc].y = fVar10 * fVar4;
        pSVar7->points[0xc].z = fVar3 * fVar4 - mobyutil::g_FrameTime * 9.8;
        mobyutil::MB_MoveAndCollide2
                  (0x3ff0000000000000,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,
                   &DAT_00720000,0x10);
        if (uVar23 != 0xff) {
          if (moby->animationId != uVar22) {
            mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
          }
          moby->state = uVar23;
        }
      }
    }
    else if (bVar1 < 0x11) {
      fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
      pSVar7->points[0xc].y = fVar10 * fVar4;
      pSVar7->points[0xc].z = fVar3 * fVar4 - mobyutil::g_FrameTime * 9.8;
      mobyutil::MB_MoveAndCollide2
                (0x3ff0000000000000,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,&DAT_00720000,
                 0x10);
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyupdate_helpers::M1059_001a8e20(lVar14,pSVar7);
      }
    }
    else if (bVar1 < 0x12) {
      fVar4 = DAT_0071f408 * -0.050000012 + 1.0;
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar4;
      pSVar7->points[0xc].y = fVar10 * fVar4;
      pSVar7->points[0xc].z = fVar3 * fVar4;
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyupdate_helpers::M1059_001a8e20(lVar14,pSVar7);
      }
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 7) {
    if (uVar20 == 0) {
      if (iVar15 != 0) {
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(lVar14,4,0,10);
        }
        iVar15 = rand();
        pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
        dVar24 = (double)mobyutil::MB_randRot();
        pSVar7->points[0x12].w = (float)dVar24;
        moby->state = '\b';
      }
    }
    else {
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(lVar14,4,0,10);
      }
      moby->state = '\t';
    }
    fVar10 = (float)((double)DAT_0071f408 * -0.050000011920928955 + dVar32);
    fVar3 = pSVar7->points[0xc].y;
    fVar4 = pSVar7->points[0xc].z;
    pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
    pSVar7->points[0xc].y = fVar3 * fVar10;
    pSVar7->points[0xc].z = fVar4 * fVar10 - mobyutil::g_FrameTime * 9.8;
    iVar15 = mobyutil::MB_MoveAndCollide2
                       (dVar32,0,lVar14,pSVar7->points + 0xc,&DAT_001a9fc0,0x400,&DAT_00720000,0x10)
    ;
    if (iVar15 != 0) {
      fVar10 = pSVar7->points[0xc].y;
      fVar3 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = (float)((double)pSVar7->points[0xc].x * dVar29);
      pSVar7->points[0xc].y = (float)((double)fVar10 * dVar29);
      pSVar7->points[0xc].z = (float)((double)fVar3 * dVar29);
    }
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 6) {
    mobyupdate_helpers::M1059_001a9218(lVar14,pSVar7);
    dVar32 = 7.0;
    mobyupdate_helpers::M1059_001a9a58
              ((double)pSVar7->points[0x12].w,0x3fcaceea00000000,(double)(DAT_0071f418 * 6.0),
               0x3fe0c15240000000,(double)(DAT_0071f418 * 4.0),(double)(mobyutil::g_FrameTime * 7.0)
               ,(double)(mobyutil::g_FrameTime * 3.0),lVar14,pSVar7);
    mobyupdate_helpers::M1059_001a9908
              ((double)(DAT_0071f418 * 12.0),(double)(DAT_0071f418 * 50.0),
               (double)(float)((double)mobyutil::g_FrameTime * dVar32),lVar14,pSVar7);
    dVar24 = 1.5707963705062866;
    dVar32 = 3.1415927410125732;
    mobyutil::OrganicDeltAngSpeed
              ((double)pSVar7->points[0x12].w,(double)(DAT_0071f418 * 1.5707964),
               (double)(DAT_0071f418 * 3.1415927),(double)(mobyutil::g_FrameTime * 3.1415927),lVar14
              );
    dVar32 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)(moby->rotation).y,0,
                                (double)(float)((double)DAT_0071f418 * dVar24),
                                (double)(float)((double)DAT_0071f418 * dVar32),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar32));
    bVar1 = moby->field43_0x70;
    (moby->rotation).y = (float)dVar32;
    if (((bVar1 & 2) != 0) && (moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(lVar14,1,0,10);
    }
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 5) {
    mobyfunc::GetBonePosition(lVar14,0,&local_110);
    dVar31 = (double)(local_110 - (moby->pos).x);
    dVar28 = (double)(local_10c - (moby->pos).y);
    dVar25 = (double)(local_108 - (moby->pos).z);
    dVar24 = (double)FUN_005e8338((double)(local_d0.x - local_110),(double)(local_d0.y - local_10c))
    ;
    mobyutil::OrganicDeltAngSpeed
              (dVar24,(double)(DAT_0071f418 * 12.566371),0,
               (double)(mobyutil::g_FrameTime * 12.566371),lVar14,&DAT_00720000,
               pSVar7->points + 0x11);
    (moby->rotation).y = DAT_0071f408 * 0.7 * (moby->rotation).y;
    pSVar7->points[0x13].w = pSVar7->points[0x13].w + 0.028;
    fVar10 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    dVar29 = (double)pSVar7->points[0xf].x;
    fVar6 = pSVar7->points[0xf].y;
    dVar27 = (double)pSVar7->points[0x13].w;
    fVar5 = pSVar7->points[0xf].z;
    if (dVar27 - dVar32 < 0.0) {
      dVar32 = dVar27;
    }
    (moby->pos).x =
         (float)((double)(float)((double)(float)((double)local_d0.x - dVar31) - dVar29) * dVar32 +
                dVar29);
    (moby->pos).y =
         (float)((double)((float)((double)local_d0.y - dVar28) - fVar6) * dVar32 +
                (double)pSVar7->points[0xf].y);
    fVar6 = pSVar7->points[0xf].z;
    (moby->pos).w = local_d0.w;
    (moby->pos).z =
         (float)((double)((float)((double)local_d0.z - dVar25) - fVar5) * dVar32 + (double)fVar6);
    stub::STUB_00065468(local_100,lVar21);
    stub::STUB_00065468(pSVar7->points + 0xf,lVar21);
    fVar6 = pSVar7->points[0x13].w;
    uVar18 = (int)fVar6 >> 0x1f;
    pSVar7->points[0xc].x = (moby->pos).x - fVar10;
    pSVar7->points[0xc].y = (moby->pos).y - fVar3;
    pSVar7->points[0xc].z = (moby->pos).z - fVar4;
    pSVar7->points[0xc].w = (moby->pos).w;
    if ((int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18) < 0x3f800000) {
      pSVar7->points[0x12].w = (float)dVar24;
    }
    else {
      g_heroHealth = 0;
      hero::TransitionMovement(0x3d,1);
      g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
      hero::g_heroInvisible = 1;
      moby->state = '\x06';
    }
    if ((uVar20 == 0) && (DAT_00969fec == 0)) {
      pSVar7->points[0x13].w = 0.0;
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar14,1,0,10);
      }
      moby->state = '\x02';
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 4) {
    uVar26 = FUN_005e8338((double)(local_d0.x - (moby->pos).x),(double)(local_d0.y - (moby->pos).y))
    ;
    dVar27 = 12.566370964050293;
    uVar30 = 0;
    mobyutil::OrganicDeltAngSpeed
              (uVar26,(double)(DAT_0071f418 * 12.566371),0,
               (double)(mobyutil::g_FrameTime * 12.566371),lVar14);
    fVar10 = (moby->pos).y - local_d0.y;
    fVar3 = (moby->pos).x - local_d0.x;
    dVar29 = (double)(moby->rotation).y;
    dVar24 = (double)FUN_005e8338((double)SQRT(fVar3 * fVar3 + fVar10 * fVar10),
                                  (double)(local_d0.z - (moby->pos).z));
    dVar24 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar29,-dVar24,(double)(float)((double)DAT_0071f418 * dVar27),uVar30
                                ,(double)(float)((double)mobyutil::g_FrameTime * dVar27));
    (moby->rotation).y = (float)dVar24;
    fVar6 = DAT_0071f418;
    fVar4 = mobyutil::g_FrameTime;
    fVar10 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    bVar12 = SQRT(fVar3 * fVar3 + fVar10 * fVar10) < 3.0;
    if (bVar12) {
      fVar10 = (float)((double)DAT_0071f408 * -0.10000002384185791 + dVar32);
      fVar3 = pSVar7->points[0xc].y;
      fVar5 = pSVar7->points[0xc].z;
      pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
      pSVar7->points[0xc].y = fVar3 * fVar10;
      pSVar7->points[0xc].z = fVar5 * fVar10;
    }
    iVar15 = mobyupdate_helpers::M1059_001a9a58
                       (uVar26,0x3fcaceea00000000,(double)(fVar6 * 20.0),0x3fe0c15240000000,
                        (double)(fVar6 * 3.0),(double)(fVar4 * 20.0),(double)(fVar4 * 5.0),lVar14,
                        pSVar7);
    if ((iVar15 != 0) && (bVar12)) {
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(lVar14,2,4,2);
      }
      moby->state = '\x05';
      moby->collision = (ushort *)0x0;
      pSVar7->points[0x13].w = 0.0;
      pSVar7->points[0xf].x = (moby->pos).x;
      pSVar7->points[0xf].y = (moby->pos).y;
      pSVar7->points[0xf].z = (moby->pos).z;
      pSVar7->points[0xf].w = (moby->pos).w;
    }
    pSVar7->points[0x12].z = local_d0.z - 0.25;
    mobyupdate_helpers::M1059_001a9908
              ((double)(DAT_0071f418 * 38.0),uVar30,(double)(mobyutil::g_FrameTime * 38.0),lVar14,
               pSVar7);
    uVar2 = moby->animationId;
    if ((uVar20 == 0) || (DAT_00969fec == 0)) {
      if (uVar2 != '\x01') {
        mobyutil::MB_SetAnimation(lVar14,1,0,10);
        uVar2 = moby->animationId;
      }
      moby->state = '\x02';
    }
    if (uVar23 != 0xff) {
      if (uVar2 != uVar22) {
        mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 == 2) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(lVar14,1,0,10);
    }
    if (((uVar20 == 0) || (local_90 == (MobyInstance *)0x0)) || (local_90 != g_heroMobyPtr)) {
      dVar24 = 1.7453292608261108;
      dVar32 = 4.537856101989746;
      mobyutil::OrganicDeltAngSpeed
                ((double)pSVar7->points[0x12].w,(double)(DAT_0071f418 * 1.7453293),
                 (double)(DAT_0071f418 * 4.537856),(double)(mobyutil::g_FrameTime * 1.7453293),
                 lVar14);
      dVar32 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,0,
                                  (double)(float)((double)DAT_0071f418 * dVar24),
                                  (double)(float)((double)DAT_0071f418 * dVar32),
                                  (double)(float)((double)mobyutil::g_FrameTime * dVar24));
      (moby->rotation).y = (float)dVar32;
      if ((iVar15 != 0) &&
         (iVar17 = mobyutil::MB_IsPntInCuboid((Vec4 *)lVar21,(longlong)(int)pSVar7->points[0x10].y),
         iVar17 != 0)) {
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar14,0,0,10);
        }
        iVar17 = rand();
        pSVar7->points[0x12].y = (float)(iVar17 % 0x78 + 0x3c);
        moby->state = '\x01';
      }
    }
    else {
      local_80 = (MobyInstance *)0x0;
      iVar17 = mobyutil::MB_GetFirstMobyInGroup(&local_80,(uint)(byte)moby->group,'\0','\0');
      while ((iVar17 == 0 && (local_80 != (MobyInstance *)0x0))) {
        if ((local_80 != moby) && (local_80->state < 7 && 3 < local_80->state)) goto LAB_001aac1c;
        iVar17 = mobyutil::MB_GetNextMobyInGroup(&local_80,local_80,'\0','\0');
      }
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar14,1,0,10);
      }
      moby->state = '\x04';
    }
LAB_001aac1c:
    mobyupdate_helpers::M1059_001a9218(lVar14,pSVar7);
    iVar17 = mobyupdate_helpers::M1059_001a9a58
                       ((double)pSVar7->points[0x12].w,0x3fcaceea00000000,
                        (double)(DAT_0071f418 * 6.0),0x3fe0c15240000000,(double)(DAT_0071f418 * 4.0)
                        ,(double)(mobyutil::g_FrameTime * 7.0),(double)(mobyutil::g_FrameTime * 3.0)
                        ,lVar14,pSVar7);
    if ((iVar17 != 0) && (iVar15 != 0)) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(lVar14,0,0,10);
      }
      iVar15 = rand();
      pSVar7->points[0x12].y = (float)(iVar15 % 0x78 + 0x3c);
      moby->state = '\x01';
    }
    pMVar13 = local_90;
    if ((local_90 != (MobyInstance *)0x0) && (local_90 == g_heroMobyPtr)) {
      mobyfunc::GetBonePosition(lVar14,0,auStack_f0);
      iVar15 = collproc::CollSphere(0x3ff8000000000000,auStack_f0,&DAT_001a9fc0,0x21,lVar14);
      if ((iVar15 != 0) && (CollOutput.pMoby == pMVar13)) {
        if (moby->animationId != '\x02') {
          mobyutil::MB_SetAnimation(lVar14,2,0,2);
        }
        moby->state = '\x05';
      }
    }
    mobyupdate_helpers::M1059_001a9908
              ((double)(DAT_0071f418 * 15.0),(double)(DAT_0071f418 * 50.0),
               (double)(mobyutil::g_FrameTime * 8.0),lVar14,pSVar7);
    if (uVar23 != 0xff) {
      if (moby->animationId != uVar22) {
        mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
      }
      moby->state = uVar23;
    }
    goto LAB_001abdc0;
  }
  if (bVar1 != 1) {
    if (bVar1 == 0) {
      libc::printf("hey, shouldn\'t be in init!\n");
    }
    goto LAB_001abdc0;
  }
  if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\0')) {
    mobyutil::MB_SetAnimation(lVar14,0,0,10);
  }
  if (((uVar20 != 0) && (local_90 != (MobyInstance *)0x0)) && (local_90 == g_heroMobyPtr)) {
    local_7c[0] = (MobyInstance *)0x0;
    iVar17 = mobyutil::MB_GetFirstMobyInGroup(local_7c,(uint)(byte)moby->group,'\0','\0');
    while ((iVar17 == 0 && (local_7c[0] != (MobyInstance *)0x0))) {
      if ((local_7c[0] != moby) && (local_7c[0]->state < 7 && 3 < local_7c[0]->state))
      goto LAB_001aa850;
      iVar17 = mobyutil::MB_GetNextMobyInGroup(local_7c,local_7c[0],'\0','\0');
    }
    if (moby->animationId != '\x01') {
      mobyutil::MB_SetAnimation(lVar14,1,0,10);
    }
    moby->state = '\x04';
  }
LAB_001aa850:
  pMVar13 = local_90;
  if ((local_90 == (MobyInstance *)0x0) || (local_90 != g_heroMobyPtr)) {
LAB_001aa8f4:
    if (iVar15 != 0) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar14,1,0,10);
      }
      iVar15 = rand();
      pSVar7->points[0x12].y = (float)(iVar15 % 200 + 300);
      dVar24 = (double)mobyutil::MB_randRot();
      pSVar7->points[0x12].w = (float)dVar24;
      moby->state = '\x02';
    }
  }
  else {
    mobyfunc::GetBonePosition(lVar14,0,auStack_e0);
    iVar17 = collproc::CollSphere(0x3ff8000000000000,auStack_e0,&DAT_001a9fc0,0x21,lVar14);
    if ((iVar17 == 0) || (CollOutput.pMoby != pMVar13)) goto LAB_001aa8f4;
    if (moby->animationId != '\x02') {
      mobyutil::MB_SetAnimation(lVar14,2,0,2);
    }
    moby->state = '\x05';
  }
  fVar10 = (float)((double)DAT_0071f408 * -0.050000011920928955 + dVar32);
  fVar3 = pSVar7->points[0xc].y;
  fVar4 = pSVar7->points[0xc].z;
  pSVar7->points[0xc].x = pSVar7->points[0xc].x * fVar10;
  pSVar7->points[0xc].y = fVar3 * fVar10;
  pSVar7->points[0xc].z = fVar4 * fVar10;
  mobyupdate_helpers::M1059_001a9908
            ((double)(DAT_0071f418 * 15.0),(double)(DAT_0071f418 * 50.0),
             (double)(mobyutil::g_FrameTime * 8.0),lVar14,pSVar7);
  if (uVar23 != 0xff) {
    if (moby->animationId != uVar22) {
      mobyutil::MB_SetAnimation(lVar14,uVar22,0,6);
    }
    moby->state = uVar23;
  }
LAB_001abdc0:
  fVar11 = (moby->pos).x;
  uVar20 = (int)fVar11 >> 0x1f;
  iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20;
  if ((((iVar15 < 0x40000000) || (0x447f4000 < iVar15)) ||
      (fVar11 = (moby->pos).y, uVar20 = (int)fVar11 >> 0x1f,
      iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20, 0x447f4000 < iVar15 || iVar15 < 0x40000000))
     || ((fVar11 = (moby->pos).z, uVar20 = (int)fVar11 >> 0x1f,
         iVar15 = (uVar20 >> 1 ^ (uint)fVar11) - uVar20, iVar15 < 0x40000000 ||
         (0x447f4000 < iVar15)))) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001abea4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1060_001abea4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1060_001abea4(void)

{
  DAT_00740964 = 0x10000;
  return;
}



//==== 001abec8  ns=mobyupdate_helpers  size=0x104
// sig: undefined M1060_001abec8(void)
// callers(0): 
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00119028 mobyutil::MB_DrawGlowFX

void mobyupdate_helpers::M1060_001abec8(int param_1)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  MobyInstance *local_20 [2];
  
  fVar1 = 1.2;
  if ((Level == Veldin) || (Level == Veldin2)) {
    fVar1 = 1.0;
  }
  dVar2 = (double)fVar1;
  mobyutil::MB_GetFirstMobyInGroup(local_20,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_20[0] != (MobyInstance *)0x0) {
    uVar3 = 0x3fe0000000000000;
    do {
      if (local_20[0]->enabled != '\0') {
        if (local_20[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) {
          mobyutil::MB_DrawGlowFX
                    (dVar2,uVar3,&local_20[0]->pos,*(undefined4 *)((int)local_20[0]->pVar + 4));
        }
      }
      mobyutil::MB_GetNextMobyInGroup(local_20,local_20[0],'\0','\0');
    } while (local_20[0] != (MobyInstance *)0x0);
  }
  return;
}



//==== 001abfcc  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1060_001abfcc(void)
// callers(0): 
// callees(1): 0006d720 RegisterFuncForMoby

void mobyupdate_helpers::M1060_001abfcc(MobyInstance *param_1)

{
  int *piVar1;
  
  if (param_1->group != -1) {
    if ((worldUpdateTime != 0) &&
       (piVar1 = *(int **)((int)param_1->pVar + 8), worldUpdateTime != *piVar1)) {
      *piVar1 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1060_001abec8_00708890,param_1);
    }
  }
  return;
}



//==== 001ac058  ns=mobyupdate_unsorted  size=0x1f8
// sig: undefined UpdateMoby_1060(MobyInstance * moby)
// callers(0): 
// callees(4): 0006d720 RegisterFuncForMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1060 */

void mobyupdate_unsorted::UpdateMoby_1060(MobyInstance *moby)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == 0) {
    *pfVar1 = *pfVar1 * 0.017453292;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    dVar8 = (double)fastfunc::FastWrapRot
                              (*pfVar1,DAT_00740990 * 0.017453292 * mobyutil::g_FrameTime);
    uVar4 = DAT_0074098c;
    uVar3 = DAT_00740988;
    dVar9 = (double)(float)(3.141592502593994 - dVar8);
    if (dVar8 - (double)(float)(3.141592502593994 - dVar8) < 0.0) {
      dVar9 = dVar8;
    }
    dVar10 = (double)(float)(-3.141592502593994 - dVar8);
    if ((double)(float)(-3.141592502593994 - dVar8) - dVar9 < 0.0) {
      dVar10 = dVar9;
    }
    *pfVar1 = (float)dVar8;
    dVar8 = (double)(float)(dVar10 * dVar10);
    dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
    dVar9 = (double)(float)(dVar8 * dVar11);
    uVar5 = fastfunc::FastLerpColor
                      ((double)(((float)(dVar8 * dVar9) * 2.601887e-06 +
                                (float)(dVar9 * -0.0001980741071747616 +
                                       (double)(float)(dVar11 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar8 * dVar10
                                                                                     ) *
                                                                      -0.16666656732559204 + dVar10)
                                                      ))) * 0.5 + 0.5),uVar3,uVar4);
    lVar6 = 0x38;
    iVar7 = (int)uVar5;
    if ((Level == Veldin) || (Level == Veldin2)) {
      lVar6 = 0x20;
    }
    pfVar1[1] = (float)((uint)(lVar6 << 0x18) | (iVar7 >> 0x10 & 0xffU) << 0x10 |
                       (iVar7 >> 8 & 0xffU) << 8 | (uint)(uVar5 & 0xff));
    if (((moby->group != -1) && (worldUpdateTime != 0)) &&
       (piVar2 = *(int **)((int)moby->pVar + 8), worldUpdateTime != *piVar2)) {
      *piVar2 = worldUpdateTime;
      RegisterFuncForMoby(&PTR_M1060_001abec8_00708890,moby);
    }
    mobyfunc::SetColorOfMoby
              (moby,uVar5 & 0xff,(ulonglong)(uint)(iVar7 >> 0x10) & 0xff,
               (ulonglong)(uint)(iVar7 >> 0x18) & 0xff);
  }
  return;
}



//==== 001ac298  ns=mobyupdate_unsorted  size=0xe90
// sig: undefined UpdateMoby_1061(MobyInstance * moby)
// callers(0): 
// callees(17): 0006dad0 draw::FadeToBlack; 000836ac hero::Hero_RevertToRatchet; 00086b60 hero::SetHeroType; 000a0c38 hero::Hero_Warp; 00109c30 mobyutil::OrganicDelt; 00110b70 mobyutil::MB_IsPntInCuboid; 00112900 mobyutil::MB_GetOrientation; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011ccc8 music::music_SetTransition; 0015d12c sound::PlayMobySound; 00167e60 update::mode_sceneInit; 00188fb4 FUN_00188fb4; 00189040 FUN_00189040; 00189100 FUN_00189100; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 1061 */

void mobyupdate_unsorted::UpdateMoby_1061(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  MobyInstance *pMVar6;
  Cuboid *pCVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  Vec4 local_60;
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  longlong local_40;
  
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  local_60.x = -fVar2;
  local_60.y = -fVar3;
  local_60.w = (moby->pos).w;
  local_60.z = -(moby->pos).z;
  local_50 = (moby->rotation).x;
  local_4c = (moby->rotation).y;
  local_48 = (moby->rotation).z;
  local_44 = (moby->rotation).w;
  pvVar4 = moby->pVar;
  uVar10 = ZEXT48(pvVar4);
  bVar1 = moby->state;
  moby->scale = moby->pClass->gScale * DAT_00740994;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (DAT_007409ac == 0xffffffff) {
        DAT_007409ac = (uint)LZCOUNT((uint)UnlockableItems.hydrodisplacer) >> 5 ^ 1;
      }
      *(undefined4 *)((int)pvVar4 + 0x88) = 0xffffffff;
      *(undefined4 *)((int)pvVar4 + 0x94) = 0;
      moby->state = ((byte)((LZCOUNT(-(uint)MiscLevelFlags.field32_0x20) << 0x3a) >> 0x3f) & 0xfe) +
                    3;
      (moby->pos).z =
           Cuboids[*(int *)((int)pvVar4 + 0x78)].pos.z +
           Cuboids[*(int *)((int)pvVar4 + 0x78)].matrix.v2.z;
      if (g_heroType == '\0') {
        MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
             MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | DISABLED;
        MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
             MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | NO_UPDATE;
        MobyInstance[*(int *)((int)pvVar4 + 0x6c)].collision = (ushort *)0x0;
      }
      else if (g_heroType == '\x01') {
        FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x60));
      }
      FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 100));
      FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
    }
    else if (bVar1 < 2) {
      iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x70));
      if (iVar8 == 0) {
        if (g_heroMobyPtr->oClass == CLANK_0057) {
          moby->state = '\x03';
          *(undefined4 *)((int)pvVar4 + 0x84) = 1;
        }
      }
      else {
        if (MiscLevelFlags.field32_0x20 == 0) {
          MiscLevelFlags.field32_0x20 = 1;
        }
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      }
    }
    else if (g_gameMode == GAME_MODE_NORMAL) {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      iVar8 = fastfunc::FastDecTimerS32(uVar10 + 0x90);
      if ((iVar8 != 0) &&
         (iVar8 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x70))
         , iVar8 != 0)) {
        if (g_heroType == '\x01') {
          iVar8 = mobyutil::MB_ShowPersistentMessage(9,0x1781);
        }
        else if (UnlockableItems.o2Mask == '\0') {
          iVar8 = mobyutil::MB_ShowPersistentMessage(9,0x177e);
        }
        else if (*(int *)((int)pvVar4 + 0x84) == 0) {
          iVar8 = mobyutil::MB_ShowPersistentMessage(9,0x1789);
        }
        else {
          iVar8 = mobyutil::MB_ShowPersistentMessage(9,0x1785);
        }
        fVar2 = animationSpeed;
        if (((g_buttonsPressedThisFrame & TRIANGLE) != 0) &&
           (iVar8 != 0 && g_heroState != CUSTOM_UI)) {
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(in_LR,0x1ac250);
          auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar18 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar17 = vectorSplatHalfWord(auVar17,1);
          DAT_00969ed2 = storeVectorElementHalfWordIndexed(auVar17,0x1f2,0x969ce0);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar19);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
          if (g_heroType == '\x01') {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            draw::FadeToBlack((int)(fVar2 * 16.5));
            FUN_00189100(MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189100(MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pMVar6 = MobyInstance;
            *(undefined4 *)((int)pvVar4 + 0x84) = 0;
            pMVar6[*(int *)((int)pvVar4 + 0x6c)].collision = (ushort *)0x0;
            hero::Hero_RevertToRatchet();
            hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar4 + 0x7c)].pos.x,
                            &Cuboids[*(int *)((int)pvVar4 + 0x7c)].rot.x,0,1);
            music::music_SetTransition(0,10);
            MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | DISABLED;
            MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits | NO_UPDATE;
            if ((UnlockableItems.hydrodisplacer != '\0') && (DAT_007409ac == 0)) {
              DAT_007409ac = 1;
              update::mode_sceneInit(3);
              moby->state = '\x02';
              goto LAB_001acf94;
            }
          }
          else if (UnlockableItems.o2Mask == '\0') {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            draw::FadeToBlack((int)(fVar2 * 16.5));
            FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00189100(MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pMVar6 = MobyInstance;
            *(undefined4 *)((int)pvVar4 + 0x84) = 1;
            pMVar6[*(int *)((int)pvVar4 + 0x6c)].collision =
                 (pMVar6[*(int *)((int)pvVar4 + 0x6c)].pClass)->collision;
            MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits =
                 MobyInstance[*(int *)((int)pvVar4 + 0x6c)].modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            hero::Hero_Warp(&Cuboids[*(int *)((int)pvVar4 + 0x80)].pos.x,
                            &Cuboids[*(int *)((int)pvVar4 + 0x80)].rot.x,0,1);
            hero::SetHeroType(1,0x43,MobyInstance + *(int *)((int)pvVar4 + 0x6c));
            music::music_SetTransition(2,7);
          }
          else if (*(int *)((int)pvVar4 + 0x84) == 0) {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            draw::FadeToBlack((int)(fVar2 * 16.5));
            FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00189100(MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pCVar7 = Cuboids;
            *(undefined4 *)((int)pvVar4 + 0x84) = 1;
            *(undefined4 *)((int)pvVar4 + 0x94) = 1;
            hero::Hero_Warp(&pCVar7[*(int *)((int)pvVar4 + 0x80)].pos.x,
                            &pCVar7[*(int *)((int)pvVar4 + 0x80)].rot.x,0,1);
          }
          else {
            local_40 = (longlong)(int)(fVar2 * 16.5);
            draw::FadeToBlack((int)(fVar2 * 16.5));
            FUN_00189100(MobyInstance + *(int *)((int)pvVar4 + 100));
            FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
            FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 0x60));
            pCVar7 = Cuboids;
            *(undefined4 *)((int)pvVar4 + 0x84) = 0;
            *(undefined4 *)((int)pvVar4 + 0x94) = 0;
            hero::Hero_Warp(&pCVar7[*(int *)((int)pvVar4 + 0x7c)].pos.x,
                            &pCVar7[*(int *)((int)pvVar4 + 0x7c)].rot.x,0,1);
          }
        }
      }
      if ((((g_standingOnMoby != moby) || (g_framesNotGrounded != 0)) ||
          (iVar8 = fastfunc::FastDecTimerS32(uVar10 + 0x90), iVar8 == 0)) ||
         ((g_heroPosition.z <= (moby->pos).z + 0.29 ||
          (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
          1.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2))))) {
        fVar2 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        bVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 24.0;
        if ((!bVar11) || ((moby->state != '\x03' || ((moby->pos).z <= g_heroPosition.z + 5.0)))) {
          if ((bVar11) && ((moby->state == '\x04' && ((moby->pos).z < g_heroPosition.z - 5.0)))) {
            moby->state = '\x06';
            FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
            auVar17 = ZEXT416(0xffffffff);
            auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
            auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
            auVar17 = loadVectorLeftIndexed(4,0x1ac250);
            auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar17 = vectorMultiplyAddFloatingPoint
                                (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 |
                                         auVar17 << 0x60,auVar18);
            auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
            auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                               uVar10);
            *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
          }
        }
        else {
          *(undefined4 *)((int)pvVar4 + 0x84) = 1;
          *(undefined4 *)((int)pvVar4 + 0x94) = 1;
          moby->state = '\x05';
          FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 100));
          FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x60));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
      }
      else {
        sound::PlayMobySound(0,0,moby);
        if (moby->state == '\x03') {
          moby->state = '\x05';
          FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 100));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
        else {
          moby->state = '\x06';
          FUN_00189040(MobyInstance + *(int *)((int)pvVar4 + 0x68));
          auVar17 = ZEXT416(0xffffffff);
          auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
          auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
          auVar17 = loadVectorLeftIndexed(4,0x1ac250);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar17 = vectorMultiplyAddFloatingPoint
                              (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60
                               ,auVar18);
          auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
          auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x90,
                             uVar10);
          *(undefined4 *)((int)pvVar4 + 0x90U & 0xfffffffc) = uVar5;
        }
      }
    }
    else {
      dVar14 = (double)Cuboids[*(int *)((int)pvVar4 + 0x78)].pos.z;
      if (bVar1 == 6) {
        dVar14 = (double)(float)(dVar14 + (double)Cuboids[*(int *)((int)pvVar4 + 0x78)].matrix.v2.z)
        ;
      }
      mobyutil::OrganicDelt
                ((float)dVar14,DAT_0074099c * DAT_0071f418,DAT_0074099c * DAT_0071f418,
                 DAT_00740998 * mobyutil::g_FrameTime,&(moby->pos).z,0x740000,
                 (float *)((int)pvVar4 + 0x8c));
      if (ABS((float)((double)(moby->pos).z - dVar14)) < 0.01) {
        if (moby->state == '\x06') {
          moby->state = '\a';
          FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 100));
        }
        else {
          FUN_00188fb4(MobyInstance + *(int *)((int)pvVar4 + 0x68));
          moby->state = '\b';
        }
      }
    }
  }
  else if ((bVar1 < 9) &&
          (fVar3 = g_heroPosition.y - fVar3, fVar2 = g_heroPosition.x - fVar2,
          1.0 <= SQRT(fVar2 * fVar2 + fVar3 * fVar3))) {
    moby->state = (char)((LZCOUNT(7 - (uint)bVar1) << 0x3a) >> 0x3f) + '\x04';
  }
LAB_001acf94:
  uVar9 = DAT_007409a8;
  DAT_0096bfab = (byte)((ulonglong)(LZCOUNT(*(undefined4 *)((int)pvVar4 + 0x94)) << 0x20) >> 0x25) ^
                 1;
  if (moby->state < 9 && 4 < moby->state) {
    *(undefined4 *)((int)pvVar4 + 0x9c) = 0;
  }
  else {
    dVar12 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)pvVar4 + 0x9c),mobyutil::g_FrameTime * 5.2359877);
    *(float *)((int)pvVar4 + 0x9c) = (float)dVar12;
    dVar14 = (double)(float)(3.141592502593994 - dVar12);
    if (dVar12 - (double)(float)(3.141592502593994 - dVar12) < 0.0) {
      dVar14 = dVar12;
    }
    dVar13 = (double)(float)(-3.141592502593994 - dVar12);
    if ((double)(float)(-3.141592502593994 - dVar12) - dVar14 < 0.0) {
      dVar13 = dVar14;
    }
    dVar12 = (double)(float)(dVar13 * dVar13);
    dVar16 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar13));
    dVar14 = 1.0;
    dVar15 = (double)(float)(dVar12 * dVar16);
    dVar12 = (double)(((float)(dVar12 * dVar15) * 2.601887e-06 +
                      (float)(dVar15 * -0.0001980741071747616 +
                             (double)(float)(dVar16 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar12 * dVar13) *
                                                            -0.16666656732559204 + dVar13)))) * 4.0
                     - 3.0);
    if ((dVar12 <= 1.0) && (dVar14 = dVar12, dVar12 < 0.0)) {
      dVar14 = 0.0;
    }
    uVar9 = fastfunc::FastLerpColor(dVar14,DAT_007409a0,DAT_007409a4);
  }
  local_60.x = local_60.x + (moby->pos).x;
  local_60.y = local_60.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  moby->field60_0x90 = uVar9;
  local_60.z = local_60.z + fVar2;
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x50,
             (longlong)(int)moby + 0x40);
  return;
}



//==== 001ad128  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1062_001ad128(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1062_001ad128(void)

{
  DAT_007409fc = 0x10000;
  return;
}



//==== 001ad140  ns=mobyupdate_unsorted  size=0x12c
// sig: undefined UpdateMoby_1062(MobyInstance * moby)
// callers(0): 
// callees(2): 0006d720 RegisterFuncForMoby; 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 1062 */

void mobyupdate_unsorted::UpdateMoby_1062(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)moby->pVar;
  RegisterFuncForMoby(&PTR_M1066_001ad528_007088c8,moby);
  iVar2 = 0;
  piVar3 = piVar4;
  while ((*piVar3 < 0 ||
         (iVar1 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar3), iVar1 == 0
         ))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (3 < iVar2) {
LAB_001ad1e0:
      iVar2 = 0;
      while ((hero::g_heroStateType != 0xf &&
             ((piVar4[0x10] < 0 ||
              (iVar1 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar4[0x10]),
              iVar1 == 0))))) {
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
        if (3 < iVar2) {
          return;
        }
      }
      RegisterFuncForMoby(&PTR_M1066_001ad990_007088d0,moby);
      return;
    }
  }
  RegisterFuncForMoby(&PTR_M1066_001ad26c_007088c0,moby);
  goto LAB_001ad1e0;
}



//==== 001ad26c  ns=mobyupdate_helpers  size=0x2ac
// sig: undefined M1066_001ad26c(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1066_001ad26c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  short *psVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  short *psVar19;
  ulonglong unaff_r31;
  short *psVar20;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar7 = (ulonglong *)(uVar10 - 0x230);
  *puVar7 = uVar10;
  puVar7[0x48] = in_LR;
  puVar7[0x42] = in_f28;
  puVar7[0x43] = in_f29;
  puVar7[0x44] = in_f30;
  puVar7[0x45] = in_f31;
  uVar1 = DAT_007578cc;
  dVar23 = (double)DAT_007578dc;
  dVar22 = (double)GameCamera.rot.radius;
  dVar24 = (double)GameCamera.rot.elevation;
  puVar7[0x41] = unaff_r31;
  puVar7[0x40] = unaff_r30;
  puVar7[0x3f] = unaff_r29;
  puVar7[0x3e] = unaff_r28;
  puVar7[0x3d] = unaff_r27;
  puVar7[0x3c] = unaff_r26;
  puVar7[0x3b] = unaff_r25;
  dVar25 = (double)DAT_007578e0;
  uVar11 = draw::GetEffectTex(uVar1);
  puVar7[0x25] = uVar11;
  uVar11 = draw::GetEffectTex(0x2a);
  puVar7[0x37] = uVar11;
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x38] = uVar11;
  puVar7[0x26] = uVar11;
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x36] = uVar11;
  puVar7[0x24] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar7[0x39] = uVar11;
  puVar7[0x27] = uVar11;
  fastfunc::FastMtx4Identity((float *)(puVar7 + 0xe));
  uVar2 = DAT_007578d4;
  uVar1 = DAT_007578d0;
  *(undefined4 *)((int)puVar7 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar7 + 0x1f) = uVar1;
  *(undefined4 *)((int)puVar7 + 0xf4) = uVar1;
  iVar18 = 0;
  *(undefined4 *)(puVar7 + 0x1e) = uVar1;
  *(undefined4 *)((int)puVar7 + 0x18c) = uVar2;
  *(undefined4 *)(puVar7 + 0x31) = uVar2;
  psVar19 = &DAT_00755c50;
  *(undefined4 *)((int)puVar7 + 0x184) = uVar2;
  psVar20 = &DAT_00755c52;
  *(undefined4 *)(puVar7 + 0x30) = uVar2;
  do {
    lVar21 = 4;
    lVar15 = uVar10 - 0x180;
    lVar14 = uVar10 - 0xf0;
    lVar17 = uVar10 - 0x230;
    psVar13 = psVar19;
    psVar12 = psVar20;
    do {
      iVar9 = (int)((longlong)*psVar13 << 4);
      iVar8 = (int)((longlong)*psVar12 << 3);
      psVar13 = psVar13 + 2;
      psVar12 = psVar12 + 2;
      uVar1 = *(undefined4 *)(iVar9 + 0x755330);
      puVar16 = (undefined4 *)lVar15;
      *puVar16 = uVar1;
      uVar2 = *(undefined4 *)(iVar9 + 0x755334);
      puVar16[1] = uVar2;
      uVar3 = *(undefined4 *)(iVar9 + 0x755338);
      puVar16[2] = uVar3;
      uVar4 = *(undefined4 *)(iVar9 + 0x75533c);
      puVar16[3] = uVar4;
      puVar16 = (undefined4 *)lVar14;
      *puVar16 = uVar1;
      puVar16[1] = uVar2;
      lVar15 = lVar15 + 0x10;
      puVar16[2] = uVar3;
      puVar16[3] = uVar4;
      fVar6 = *(float *)(&DAT_00755f70 + iVar8);
      lVar14 = lVar14 + 0x10;
      fVar5 = *(float *)(&DAT_00755f74 + iVar8);
      iVar8 = (int)lVar17;
      *(float *)(iVar8 + 400) = fVar6;
      *(float *)(iVar8 + 0x194) = fVar5;
      *(float *)(iVar8 + 0x100) = (float)(dVar23 * dVar22 + (double)fVar6);
      *(float *)(iVar8 + 0x104) = (float)(dVar25 * dVar24 + (double)fVar5);
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    draw::FastDrawQuad(uVar10 - 0x180,uVar10 - 0x1c0,0,EffectTexHeaders,9);
    draw::FastDrawQuad(uVar10 - 0xf0,uVar10 - 0x1c0,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
    psVar19 = psVar19 + 8;
    psVar20 = psVar20 + 8;
  } while (iVar18 < 0x32);
  return;
}



//==== 001ad528  ns=mobyupdate_helpers  size=0x45c
// sig: undefined M1066_001ad528(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1066_001ad528(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  short *psVar19;
  short *psVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar22;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar13 - 0x240);
  *puVar5 = uVar13;
  puVar5[0x4a] = in_LR;
  puVar5[0x3f] = in_f23;
  puVar5[0x40] = in_f24;
  puVar5[0x41] = in_f25;
  puVar5[0x42] = in_f26;
  puVar5[0x43] = in_f27;
  puVar5[0x44] = in_f28;
  puVar5[0x45] = in_f29;
  puVar5[0x46] = in_f30;
  puVar5[0x47] = in_f31;
  puVar5[0x3d] = unaff_r30;
  uVar11 = DAT_007578cc;
  dVar26 = (double)DAT_007578dc;
  dVar27 = (double)GameCamera.rot.radius;
  dVar25 = (double)GameCamera.rot.elevation;
  puVar5[0x3e] = unaff_r31;
  puVar5[0x3c] = unaff_r29;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3a] = unaff_r27;
  dVar24 = (double)DAT_007578e0;
  uVar14 = draw::GetEffectTex(uVar11);
  puVar5[0x25] = uVar14;
  uVar14 = draw::GetEffectTex(0x2a);
  puVar5[0x37] = uVar14;
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar5[0x38] = uVar14;
  puVar5[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar5[0x36] = uVar14;
  puVar5[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar5[0x39] = uVar14;
  puVar5[0x27] = uVar14;
  fastfunc::FastMtx4Identity((float *)(puVar5 + 0xe));
  uVar12 = DAT_007578d4;
  uVar11 = DAT_007578d0;
  iVar22 = 0;
  iVar21 = 0;
  *(undefined4 *)((int)puVar5 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar5 + 0x1f) = uVar11;
  *(undefined4 *)((int)puVar5 + 0xf4) = uVar11;
  *(undefined4 *)(puVar5 + 0x1e) = uVar11;
  *(undefined4 *)((int)puVar5 + 0x18c) = uVar12;
  *(undefined4 *)(puVar5 + 0x31) = uVar12;
  *(undefined4 *)((int)puVar5 + 0x184) = uVar12;
  *(undefined4 *)(puVar5 + 0x30) = uVar12;
  do {
    fVar4 = *(float *)((int)&DAT_00754f94 + iVar21) * DAT_007578d8;
    fVar6 = *(float *)((int)&DAT_00754f90 + iVar21) * DAT_007578d8;
    fVar2 = *(float *)((int)&DAT_00754f98 + iVar21) * DAT_007578d8;
    fVar1 = *(float *)((int)&DAT_00754f9c + iVar21);
    fVar8 = 0.0;
    fVar3 = (*(float *)((int)puVar5 + 0xa4) * fVar1 +
            *(float *)((int)puVar5 + 0x94) * fVar2 +
            *(float *)((int)puVar5 + 0x74) * fVar6 + *(float *)((int)puVar5 + 0x84) * fVar4) -
            GameCamera.posY;
    fVar7 = (*(float *)(puVar5 + 0x14) * fVar1 +
            *(float *)(puVar5 + 0x12) * fVar2 +
            *(float *)(puVar5 + 0xe) * fVar6 + *(float *)(puVar5 + 0x10) * fVar4) - GameCamera.posX;
    fVar1 = (*(float *)(puVar5 + 0x15) * fVar1 +
            *(float *)(puVar5 + 0x13) * fVar2 +
            *(float *)(puVar5 + 0xf) * fVar6 + *(float *)(puVar5 + 0x11) * fVar4) - GameCamera.posZ;
    fVar2 = fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3;
    fVar4 = fVar8;
    fVar6 = fVar8;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar8 = fVar7 * fVar6;
      fVar4 = fVar3 * fVar6;
      fVar6 = fVar1 * fVar6;
    }
    fVar1 = *(float *)((int)&DAT_00754614 + iVar21);
    fVar2 = *(float *)((int)&DAT_00754610 + iVar21);
    fVar3 = *(float *)((int)&DAT_00754618 + iVar21);
    if (fVar6 * (*(float *)(puVar5 + 0x13) * fVar3 +
                *(float *)(puVar5 + 0xf) * fVar2 + *(float *)(puVar5 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar5 + 0x12) * fVar3 +
                *(float *)(puVar5 + 0xe) * fVar2 + *(float *)(puVar5 + 0x10) * fVar1) +
        fVar4 * (*(float *)((int)puVar5 + 0x94) * fVar3 +
                *(float *)((int)puVar5 + 0x74) * fVar2 + *(float *)((int)puVar5 + 0x84) * fVar1) <=
        0.0) {
      lVar16 = uVar13 - 400;
      psVar20 = (short *)((int)&DAT_00753d42 + iVar21);
      lVar18 = uVar13 - 0x100;
      psVar19 = (short *)((int)&DAT_00753d40 + iVar21);
      lVar23 = 4;
      lVar15 = uVar13 - 0x240;
      do {
        iVar10 = (int)((longlong)*psVar19 << 4);
        psVar19 = psVar19 + 2;
        iVar9 = (int)((longlong)*psVar20 << 3);
        fVar4 = *(float *)(iVar10 + 0x753760) * DAT_007578d8;
        psVar20 = psVar20 + 2;
        pfVar17 = (float *)lVar16;
        *pfVar17 = fVar4;
        fVar6 = *(float *)(iVar10 + 0x753764) * DAT_007578d8;
        pfVar17[1] = fVar6;
        fVar2 = *(float *)(iVar10 + 0x753768) * DAT_007578d8;
        pfVar17[2] = fVar2;
        fVar1 = *(float *)(iVar10 + 0x75376c);
        pfVar17[3] = fVar1;
        pfVar17 = (float *)lVar18;
        *pfVar17 = fVar4;
        lVar16 = lVar16 + 0x10;
        pfVar17[1] = fVar6;
        pfVar17[2] = fVar2;
        pfVar17[3] = fVar1;
        fVar4 = *(float *)(&DAT_007540e0 + iVar9);
        fVar1 = *(float *)(&DAT_007540e4 + iVar9);
        lVar18 = lVar18 + 0x10;
        iVar9 = (int)lVar15;
        *(float *)(iVar9 + 400) = fVar4;
        *(float *)(iVar9 + 0x194) = fVar1;
        *(float *)(iVar9 + 0x100) = (float)(dVar26 * dVar27 + (double)fVar4);
        *(float *)(iVar9 + 0x104) = (float)(dVar24 * dVar25 + (double)fVar1);
        lVar15 = lVar15 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      draw::FastDrawQuad(uVar13 - 400,uVar13 - 0x1d0,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar13 - 0x100,uVar13 - 0x1d0,0,EffectTexHeaders,9);
    }
    iVar22 = iVar22 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar22 < 0x3a);
  return;
}



//==== 001ad990  ns=mobyupdate_helpers  size=0x45c
// sig: undefined M1066_001ad990(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500af8 fastfunc::FastMtx4Identity; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0
// strings: 00748e84: '?{BW>'

void mobyupdate_helpers::M1066_001ad990(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  short *psVar19;
  short *psVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar21;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar22;
  ulonglong in_LR;
  longlong lVar23;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar13 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar13 - 0x240);
  *puVar5 = uVar13;
  puVar5[0x4a] = in_LR;
  puVar5[0x3f] = in_f23;
  puVar5[0x40] = in_f24;
  puVar5[0x41] = in_f25;
  puVar5[0x42] = in_f26;
  puVar5[0x43] = in_f27;
  puVar5[0x44] = in_f28;
  puVar5[0x45] = in_f29;
  puVar5[0x46] = in_f30;
  puVar5[0x47] = in_f31;
  puVar5[0x3d] = unaff_r30;
  uVar11 = DAT_007578cc;
  dVar26 = (double)DAT_007578dc;
  dVar27 = (double)GameCamera.rot.radius;
  dVar25 = (double)GameCamera.rot.elevation;
  puVar5[0x3e] = unaff_r31;
  puVar5[0x3c] = unaff_r29;
  puVar5[0x3b] = unaff_r28;
  puVar5[0x3a] = unaff_r27;
  dVar24 = (double)DAT_007578e0;
  uVar14 = draw::GetEffectTex(uVar11);
  puVar5[0x25] = uVar14;
  uVar14 = draw::GetEffectTex(0x2a);
  puVar5[0x37] = uVar14;
  uVar14 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar5[0x38] = uVar14;
  puVar5[0x26] = uVar14;
  uVar14 = FUN_00502f08(0,0,0,0,0,0);
  puVar5[0x36] = uVar14;
  puVar5[0x24] = uVar14;
  uVar14 = idol_draw::PackCmd(DAT_00e61fcc,DAT_007578c0,DAT_00e61fd0,DAT_007578c4,DAT_007578c8);
  puVar5[0x39] = uVar14;
  puVar5[0x27] = uVar14;
  fastfunc::FastMtx4Identity((float *)(puVar5 + 0xe));
  uVar12 = DAT_007578d4;
  uVar11 = DAT_007578d0;
  iVar22 = 0;
  iVar21 = 0;
  *(undefined4 *)((int)puVar5 + 0xfc) = DAT_007578d0;
  *(undefined4 *)(puVar5 + 0x1f) = uVar11;
  *(undefined4 *)((int)puVar5 + 0xf4) = uVar11;
  *(undefined4 *)(puVar5 + 0x1e) = uVar11;
  *(undefined4 *)((int)puVar5 + 0x18c) = uVar12;
  *(undefined4 *)(puVar5 + 0x31) = uVar12;
  *(undefined4 *)((int)puVar5 + 0x184) = uVar12;
  *(undefined4 *)(puVar5 + 0x30) = uVar12;
  do {
    fVar4 = *(float *)((int)&DAT_00750164 + iVar21) * DAT_007578d8;
    fVar6 = *(float *)((int)&DAT_00750160 + iVar21) * DAT_007578d8;
    fVar2 = *(float *)((int)&DAT_00750168 + iVar21) * DAT_007578d8;
    fVar1 = *(float *)((int)&DAT_0075016c + iVar21);
    fVar8 = 0.0;
    fVar3 = (*(float *)((int)puVar5 + 0xa4) * fVar1 +
            *(float *)((int)puVar5 + 0x94) * fVar2 +
            *(float *)((int)puVar5 + 0x74) * fVar6 + *(float *)((int)puVar5 + 0x84) * fVar4) -
            GameCamera.posY;
    fVar7 = (*(float *)(puVar5 + 0x14) * fVar1 +
            *(float *)(puVar5 + 0x12) * fVar2 +
            *(float *)(puVar5 + 0xe) * fVar6 + *(float *)(puVar5 + 0x10) * fVar4) - GameCamera.posX;
    fVar1 = (*(float *)(puVar5 + 0x15) * fVar1 +
            *(float *)(puVar5 + 0x13) * fVar2 +
            *(float *)(puVar5 + 0xf) * fVar6 + *(float *)(puVar5 + 0x11) * fVar4) - GameCamera.posZ;
    fVar2 = fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3;
    fVar4 = fVar8;
    fVar6 = fVar8;
    if (SQRT(fVar2) != 0.0) {
      fVar6 = 1.0 / SQRT(fVar2);
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar6 = -(fVar2 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
      fVar8 = fVar7 * fVar6;
      fVar4 = fVar3 * fVar6;
      fVar6 = fVar1 * fVar6;
    }
    fVar1 = *(float *)((int)&DAT_00749464 + iVar21);
    fVar2 = *(float *)((int)&DAT_00749460 + iVar21);
    fVar3 = *(float *)((int)&DAT_00749468 + iVar21);
    if (fVar6 * (*(float *)(puVar5 + 0x13) * fVar3 +
                *(float *)(puVar5 + 0xf) * fVar2 + *(float *)(puVar5 + 0x11) * fVar1) +
        fVar8 * (*(float *)(puVar5 + 0x12) * fVar3 +
                *(float *)(puVar5 + 0xe) * fVar2 + *(float *)(puVar5 + 0x10) * fVar1) +
        fVar4 * (*(float *)((int)puVar5 + 0x94) * fVar3 +
                *(float *)((int)puVar5 + 0x74) * fVar2 + *(float *)((int)puVar5 + 0x84) * fVar1) <=
        0.0) {
      lVar16 = uVar13 - 400;
      psVar20 = (short *)((int)&DAT_00744122 + iVar21);
      lVar18 = uVar13 - 0x100;
      psVar19 = (short *)((int)&DAT_00744120 + iVar21);
      lVar23 = 4;
      lVar15 = uVar13 - 0x240;
      do {
        iVar10 = (int)((longlong)*psVar19 << 4);
        psVar19 = psVar19 + 2;
        iVar9 = (int)((longlong)*psVar20 << 3);
        fVar4 = *(float *)(iVar10 + 0x740a20) * DAT_007578d8;
        psVar20 = psVar20 + 2;
        pfVar17 = (float *)lVar16;
        *pfVar17 = fVar4;
        fVar6 = *(float *)(iVar10 + 0x740a24) * DAT_007578d8;
        pfVar17[1] = fVar6;
        fVar2 = *(float *)(iVar10 + 0x740a28) * DAT_007578d8;
        pfVar17[2] = fVar2;
        fVar1 = *(float *)(iVar10 + 0x740a2c);
        pfVar17[3] = fVar1;
        pfVar17 = (float *)lVar18;
        *pfVar17 = fVar4;
        lVar16 = lVar16 + 0x10;
        pfVar17[1] = fVar6;
        pfVar17[2] = fVar2;
        pfVar17[3] = fVar1;
        fVar4 = *(float *)(iVar9 + 0x747720);
        fVar1 = *(float *)(iVar9 + 0x747724);
        lVar18 = lVar18 + 0x10;
        iVar9 = (int)lVar15;
        *(float *)(iVar9 + 400) = fVar4;
        *(float *)(iVar9 + 0x194) = fVar1;
        *(float *)(iVar9 + 0x100) = (float)(dVar26 * dVar27 + (double)fVar4);
        *(float *)(iVar9 + 0x104) = (float)(dVar24 * dVar25 + (double)fVar1);
        lVar15 = lVar15 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      draw::FastDrawQuad(uVar13 - 400,uVar13 - 0x1d0,0,EffectTexHeaders,9);
      draw::FastDrawQuad(uVar13 - 0x100,uVar13 - 0x1d0,0,EffectTexHeaders,9);
    }
    iVar22 = iVar22 + 1;
    iVar21 = iVar21 + 0x10;
  } while (iVar22 < 0x360);
  return;
}



//==== 001addec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1066_001addec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1066_001addec(void)

{
  DAT_00757930 = 0x10000;
  return;
}



//==== 001ade10  ns=mobyupdate_unsorted  size=0x224
// sig: undefined UpdateMoby_1066(MobyInstance * moby)
// callers(0): 
// callees(4): 000fddc0 mobyutil::MB_SetAnimation; 00110b70 mobyutil::MB_IsPntInCuboid; 0047ca58 FUN_0047ca58; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1066 */

void mobyupdate_unsorted::UpdateMoby_1066(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ushort *puVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar5 = (longlong)(int)moby;
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((-1 < piVar3[1]) &&
          (iVar6 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar3[1]), iVar6 != 0)) &&
         (moby->state = '\x01', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(lVar5,1,0,5);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) &&
            (moby->state = (char)(-1 - (longlong)*piVar3 >> 0x3f) + '\x03',
            moby->animationId != '\x02')) {
      mobyutil::MB_SetAnimation(lVar5,2,0,5);
    }
  }
  else if ((bVar1 < 3) && (iVar6 = fastfunc::FastDecTimerS32(ZEXT48(piVar3) + 8), iVar6 != 0)) {
    dVar8 = 0.0;
    puVar7 = (ushort *)(&mobyutil::g_MobyGroups)[*piVar3];
    dVar9 = dVar8;
    if (puVar7 != (ushort *)0x0) {
      do {
        iVar6 = FUN_0047ca58(MobyInstance + (*puVar7 & 0x7fff),lVar5 + 0x10);
        if (iVar6 != 0) {
          dVar8 = 1.0;
          break;
        }
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
    }
    if (dVar8 == dVar9) {
      moby->state = '\x03';
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(8,0x1ade00);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,8,
                         ZEXT48(piVar3));
      *(undefined4 *)((uint)(piVar3 + 2) & 0xfffffffc) = uVar4;
    }
  }
  return;
}



//==== 001ae034  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1067_001ae034(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1067_001ae034(void)

{
  DAT_007579ac = 0x10000;
  return;
}



//==== 001ae060  ns=mobyupdate_unsorted  size=0x56c
// sig: undefined UpdateMoby_1067(MobyInstance * moby)
// callers(0): 
// callees(11): 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView; 005cd098 libc::printf
// strings: 00654524: 'moby class 1067 REQUIRES a link to dataProcessor class 1073!!\n' | 00654564: '\tMoby Maya Index %d deleted.\n'

/* Moby 1067 */

void mobyupdate_unsorted::UpdateMoby_1067(MobyInstance *moby)

{
  byte bVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  ulonglong *puVar9;
  float fVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  longlong lVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  longlong lVar17;
  ulonglong unaff_r29;
  int iVar18;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0xe0;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar11;
  puVar9[0x1e] = in_LR;
  puVar9[0x1a] = unaff_r30;
  puVar9[0x1b] = unaff_r31;
  pfVar6 = (float *)moby->pVar;
  uVar19 = ZEXT48(pfVar6);
  fVar14 = pfVar6[3];
  puVar9[0x19] = unaff_r29;
  puVar9[0x18] = unaff_r28;
  puVar9[0x17] = unaff_r27;
  puVar9[0x16] = unaff_r26;
  if (fVar14 == -NAN) {
    libc::printf("moby class 1067 REQUIRES a link to dataProcessor class 1073!!\n");
    libc::printf("\tMoby Maya Index %d deleted.\n",moby->uid);
    mobyfunc::DeleteMoby(moby);
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if ((Level == Orxon) && (g_heroType == '\x01')) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      iVar18 = 0;
      *(undefined1 *)(puVar9 + 0x12) = 0;
      *(undefined1 *)((int)puVar9 + 0x91) = 1;
      *(undefined1 *)((int)puVar9 + 0x92) = 2;
      *(undefined1 *)((int)puVar9 + 0x94) = 4;
      *(undefined1 *)((int)puVar9 + 0x93) = 3;
      *(undefined1 *)((int)puVar9 + 0x95) = 5;
      *(undefined1 *)((int)puVar9 + 0x96) = 6;
      iVar13 = 0;
      *(undefined1 *)((int)puVar9 + 0x97) = 7;
      *(undefined1 *)(puVar9 + 0x13) = 8;
      *(undefined1 *)((int)puVar9 + 0x99) = 9;
      do {
        lVar17 = lVar15;
        for (iVar16 = 0; iVar12 = mobyutil::MB_randInt(9), iVar16 < iVar12; iVar16 = iVar16 + 1) {
          iVar12 = (int)lVar17;
          uVar2 = *(undefined1 *)(iVar12 + 0x90);
          *(undefined1 *)(iVar12 + 0x90) = *(undefined1 *)(iVar12 + 0x91);
          *(undefined1 *)(iVar12 + 0x91) = uVar2;
          lVar17 = lVar17 + 1;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 10);
      if (0 < (int)pfVar6[1]) {
        do {
          iVar18 = iVar18 + 1;
          fVar14 = pfVar6[1];
          *(undefined1 *)((int)uVar19 + 0x10) = *(undefined1 *)((int)lVar15 + 0x90);
          lVar15 = lVar15 + 1;
          uVar19 = uVar19 + 1;
        } while (iVar18 < (int)fVar14);
      }
      dVar20 = (double)fastfunc::FastWrapRot((moby->rotation).z,1.5707964);
      (moby->rotation).z = (float)dVar20;
      moby->updateDistance = '`';
      moby->state = '\x01';
      pfVar6[0xc] = -NAN;
      iVar13 = fastfunc::FastDoubleToInt((double)(DAT_00757a90 * 60.0));
      puVar9[0x14] = (longlong)iVar13;
      pfVar6[0xd] = (float)(int)(animationSpeed * ((float)(longlong)puVar9[0x14] + 0.5));
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
  }
  else if (bVar1 < 2) {
    puVar9[0x14] = (longlong)(int)pfVar6[1];
    fVar14 = pfVar6[2];
    auVar21 = loadVectorLeftIndexed(8,uVar19);
    auVar22 = loadVectorRightIndexed(0x18,uVar19);
    auVar23 = loadVectorLeftIndexed(8,0x1ae048);
    fVar3 = *pfVar6;
    fVar4 = (moby->pos).x;
    *(float *)(puVar9 + 0xe) = fVar4;
    fVar10 = GameCamera.posY;
    fVar5 = (moby->pos).y;
    *(float *)((int)puVar9 + 0x74) = fVar5;
    fVar5 = fVar5 - fVar10;
    fVar4 = fVar4 - GameCamera.posX;
    auVar8 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    fVar10 = (moby->pos).z - GameCamera.posZ;
    auVar24 = loadVectorLeftIndexed(4,uVar19);
    auVar25 = loadVectorRightIndexed(0x14,uVar19);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    fVar14 = (float)(longlong)puVar9[0x14] * fVar14 * 0.5;
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar25,0);
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21 | auVar22,auVar23);
    auVar21 = loadVectorLeftIndexed(0x18,(longlong)(int)moby);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar21);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x78,lVar15);
    *(undefined4 *)(puVar9 + 0xf) = uVar7;
    *(float *)((int)puVar9 + 0x7c) = SQRT(fVar14 * fVar14 + fVar3 * 0.5 * fVar3 * 0.5);
    if (SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar5 * fVar5) < 80.0) {
      iVar13 = fastfunc::FastCheckBsphereInView(uVar11 - 0x70);
      puVar9[0x14] = (longlong)iVar13;
      if (0.0 <= (float)(longlong)puVar9[0x14]) {
        draw::RegisterPostDraw(&PTR_M1068_001ae5f0_007088f8,moby);
      }
    }
    iVar13 = sound::IsMobyPlayingSound(moby,(int)pfVar6[0xc]);
    if (iVar13 == 0) {
      fVar14 = (float)sound::PlayMobySound(0,4,moby);
      pfVar6[0xc] = fVar14;
    }
  }
  else if (bVar1 < 3) {
    fastfunc::FastDecTimerS32(uVar19 + 0x34);
    fVar14 = pfVar6[0xc];
    if (((fVar14 != -NAN) && (sound::g_SoundChannels[(int)fVar14].pMoby == moby)) &&
       (sound::g_SoundChannels[(int)fVar14].state != '\0')) {
      sound::sound_Kill((int)fVar14);
    }
    pfVar6[0xc] = -NAN;
    puVar9[0x14] = (longlong)(int)pfVar6[1];
    fVar14 = pfVar6[2];
    auVar21 = loadVectorLeftIndexed(8,uVar19);
    auVar22 = loadVectorRightIndexed(0x18,uVar19);
    fVar3 = *pfVar6;
    auVar23 = loadVectorLeftIndexed(8,0x1ae048);
    fVar4 = (moby->pos).x;
    *(float *)(puVar9 + 0x10) = fVar4;
    fVar10 = GameCamera.posY;
    fVar5 = (moby->pos).y;
    *(float *)((int)puVar9 + 0x84) = fVar5;
    fVar5 = fVar5 - fVar10;
    fVar4 = fVar4 - GameCamera.posX;
    auVar24 = loadVectorLeftIndexed(4,uVar19);
    auVar8 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar23 = loadVectorRightIndexed(0x14,uVar19);
    fVar10 = (moby->pos).z - GameCamera.posZ;
    auVar24 = vectorConvertFromSignedFixedPointWord(auVar24 | auVar23,0);
    auVar23 = ZEXT416(0xffffffff);
    auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    fVar14 = (float)(longlong)puVar9[0x14] * fVar14 * 0.5;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21 | auVar22,auVar23);
    auVar21 = loadVectorLeftIndexed(0x18,(longlong)(int)moby);
    auVar23 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar21);
    auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x88,lVar15);
    *(undefined4 *)(puVar9 + 0x11) = uVar7;
    *(float *)((int)puVar9 + 0x8c) = SQRT(fVar14 * fVar14 + fVar3 * 0.5 * fVar3 * 0.5);
    if (SQRT(fVar10 * fVar10 + fVar4 * fVar4 + fVar5 * fVar5) < 80.0) {
      iVar13 = fastfunc::FastCheckBsphereInView(uVar11 - 0x60);
      puVar9[0x14] = (longlong)iVar13;
      if (0.0 <= (float)(longlong)puVar9[0x14]) {
        draw::RegisterPostDraw(&PTR_M1068_001ae5f0_007088f8,moby);
      }
    }
  }
  return;
}



//==== 001ae5f0  ns=mobyupdate_helpers  size=0x5ec
// sig: undefined M1068_001ae5f0(void)
// callers(0): 
// callees(11): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500b30 fastfunc::FastMtxScaleIdentity; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1068_001ae5f0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  void *pvVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x280;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  pfVar4 = *(float **)(param_1 + 0x78);
  lVar12 = -((longlong)((int)pfVar4[1] << 6) + 0x70);
  pvVar5 = MobyInstance[(int)pfVar4[3]].pVar;
  *(ulonglong *)((int)puVar7 + (int)lVar12) = *puVar7;
  fVar6 = *(float *)(param_1 + 0x14) - GameCamera.posY;
  fVar8 = *(float *)(param_1 + 0x10) - GameCamera.posX;
  fVar9 = *(float *)(param_1 + 0x18) - GameCamera.posZ;
  uVar11 = lVar1 + lVar12;
  uVar27 = uVar11 + 0x70;
  dVar33 = 1.0;
  fVar6 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
  dVar30 = (double)((80.0 - fVar6) * 0.03125);
  dVar32 = dVar33;
  if (48.0 - fVar6 < 0.0) {
    dVar32 = dVar30;
  }
  fastfunc::FastMtxScaleIdentity((double)(*pfVar4 * 0.5),dVar30,uVar10 - 0x200);
  iVar26 = 0;
  if (0 < (int)pfVar4[1]) {
    uVar23 = uVar27 & 0xffffffff;
    uVar11 = uVar11 & 0xffffffff;
    do {
      fastfunc::FastEulerToMtx1(uVar23,param_1 + 0x40);
      fastfunc::FastVecMtx4Mul(uVar23,uVar23,uVar10 - 0x200);
      iVar26 = iVar26 + 1;
      iVar25 = (int)uVar11;
      *(undefined4 *)(iVar25 + 0xa0) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(iVar25 + 0xa4) = *(undefined4 *)(param_1 + 0x14);
      dVar31 = (double)*(float *)(param_1 + 0x18);
      *(float *)(iVar25 + 0xa8) = *(float *)(param_1 + 0x18);
      *(undefined4 *)(iVar25 + 0xac) = *(undefined4 *)(param_1 + 0x1c);
      dVar30 = (double)fastfunc::FastIntToDouble(iVar26);
      fVar6 = pfVar4[1];
      uVar23 = uVar23 + 0x40;
      *(float *)(iVar25 + 0xa8) = (float)(dVar30 * (double)pfVar4[2] + dVar31);
      uVar11 = uVar11 + 0x40;
    } while (iVar26 < (int)fVar6);
  }
  uVar11 = draw::GetEffectTex(0xe);
  puVar7[0x39] = uVar11;
  puVar7[0x27] = uVar11;
  uVar11 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x3a] = uVar11;
  puVar7[0x28] = uVar11;
  uVar11 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x38] = uVar11;
  puVar7[0x26] = uVar11;
  uVar11 = idol_draw::PackCmd(DAT_00e61fe0,DAT_007579d0,DAT_00e61fe4,DAT_007579d4,0x80);
  puVar7[0x3b] = uVar11;
  puVar7[0x29] = uVar11;
  puVar15 = &DAT_007579ec;
  lVar17 = uVar10 - 0xdc;
  lVar20 = uVar10 - 0x16c;
  lVar28 = 2;
  lVar12 = lVar1;
  do {
    uVar2 = *puVar15;
    uVar3 = puVar15[2];
    *(undefined4 *)((int)lVar12 + 0x1a4) = uVar2;
    puVar15 = puVar15 + 4;
    *(undefined4 *)((int)lVar12 + 0x114) = uVar2;
    *(undefined4 *)((int)lVar17 + 8) = uVar3;
    *(undefined4 *)((int)lVar20 + 8) = uVar3;
    lVar17 = lVar17 + 0x10;
    lVar20 = lVar20 + 0x10;
    lVar12 = lVar12 + 0x10;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  iVar26 = 0;
  do {
    iVar25 = 0;
    dVar30 = 0.0;
    do {
      lVar17 = 4;
      pfVar18 = (float *)&DAT_007579e8;
      dVar30 = (double)(float)((double)DAT_00757e58 + dVar30);
      lVar12 = lVar1;
      if (dVar33 - dVar30 < 0.0) {
        dVar30 = (double)(float)(dVar30 - dVar33);
      }
      do {
        fVar6 = *pfVar18;
        pfVar18 = pfVar18 + 2;
        fVar6 = (float)((double)fVar6 + dVar30) + *(float *)((int)pvVar5 + 0x12de0);
        *(float *)((int)lVar12 + 0x1a0) = fVar6;
        *(float *)((int)lVar12 + 0x110) = fVar6;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      iVar24 = 0;
      if (0 < (int)pfVar4[1]) {
        uVar11 = uVar27 & 0xffffffff;
        pfVar18 = pfVar4;
        do {
          piVar16 = (int *)((int)pvVar5 + (uint)*(byte *)(pfVar18 + 4) * 4 + iVar26 * 0x78 + 0x12c00
                           );
          if (DAT_00eef984 <
              *(int *)((int)pvVar5 + (uint)*(byte *)(pfVar18 + 4) * 4 + iVar26 * 0x78 + 0x12c00)) {
            dVar31 = (double)fastfunc::FastIntToDouble(*piVar16 - DAT_00eef984);
            dVar29 = (double)fastfunc::FastIntToDouble(DAT_00eef980 - DAT_00eef984);
            dVar31 = dVar31 / dVar29;
          }
          else {
            dVar31 = (double)fastfunc::FastIntToDouble(*piVar16);
            dVar29 = (double)fastfunc::FastIntToDouble(DAT_00eef984);
            dVar31 = dVar33 - (double)(float)(dVar31 / dVar29);
          }
          uVar13 = fastfunc::FastLerpColor((double)(float)dVar31,DAT_007579e0,PTR_DAT_007579e4);
          dVar31 = (double)fastfunc::FastIntToDouble((int)uVar13 >> 0x18);
          uVar23 = fastfunc::FastDoubleToInt
                             ((double)(float)((double)(float)(dVar32 * dVar32) * dVar31));
          uVar13 = (uint)((uVar23 & 0xff) << 0x18) | uVar13 & 0xffffff;
          if (*(char *)(param_1 + 0x20) == '\x02') {
            dVar31 = (double)(float)((double)DAT_00757a90 * 60.0);
            dVar29 = (double)(float)((double)animationSpeed * dVar31);
            dVar31 = (double)fastfunc::FastIntToDouble
                                       (dVar31,(double)DAT_00757a90,(double)animationSpeed,
                                        pfVar4[0xd]);
            uVar23 = fastfunc::FastDoubleToInt
                               ((double)(float)((double)(float)(dVar31 * 255.0) / dVar29));
            uVar13 = (uint)((uVar23 & 0xff) << 0x18) | 0xffffff;
          }
          *(uint *)((int)puVar7 + 0x19c) = uVar13;
          *(uint *)(puVar7 + 0x33) = uVar13;
          lVar12 = uVar10 - 0x130;
          *(uint *)((int)puVar7 + 0x194) = uVar13;
          pfVar21 = (float *)&DAT_00757a10;
          *(uint *)(puVar7 + 0x32) = uVar13;
          iVar14 = 0;
          lVar17 = 4;
          do {
            pfVar22 = (float *)((int)pvVar5 +
                               (uint)*(byte *)(pfVar18 + 4) * 0x10 +
                               ((iVar14 >> 1) + iVar25) * 0x140 + iVar26 * 0x2580);
            iVar14 = iVar14 + 1;
            pfVar19 = (float *)lVar12;
            *pfVar19 = *pfVar21 + *pfVar22;
            pfVar19[1] = pfVar21[1] + pfVar22[1];
            pfVar19[2] = pfVar21[2] + pfVar22[2];
            pfVar22 = pfVar21 + 3;
            pfVar21 = pfVar21 + 4;
            pfVar19[3] = *pfVar22;
            lVar12 = lVar12 + 0x10;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          draw::FastDrawQuad(uVar10 - 0x130,uVar11,0,EffectTexHeaders,9);
          iVar24 = iVar24 + 1;
          pfVar18 = (float *)((int)pfVar18 + 1);
          uVar11 = uVar11 + 0x40;
        } while (iVar24 < (int)pfVar4[1]);
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < 0x13);
    iVar26 = iVar26 + 1;
  } while (iVar26 < 4);
  return;
}



//==== 001aebdc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1068_001aebdc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1068_001aebdc(void)

{
  DAT_00757b28 = 0x10000;
  return;
}



//==== 001aec28  ns=mobyupdate_helpers  size=0x368
// sig: undefined M1068_001aec28(void)
// callers(1): 001b07a8 mobyupdate_unsorted::UpdateMoby_1068
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000ffb70 mobyutil::GetGroundZ; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1068_001aec28(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined8 in_LR;
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
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  dVar23 = 0.5;
  uVar2 = *(uint *)(param_1 + 0x78);
  mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar24 = 0.0;
  dVar7 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                  CollOutput.normal.x * CollOutput.normal.x +
                  CollOutput.normal.y * CollOutput.normal.y);
  if ((float)SQRT(dVar7) == 0.0) {
    *(float *)(uVar2 + 0x220) = CollOutput.normal.x;
    *(float *)(uVar2 + 0x224) = CollOutput.normal.y;
    *(float *)(uVar2 + 0x228) = CollOutput.normal.z;
    fVar1 = CollOutput.normal.w;
    *(undefined4 *)(uVar2 + 0x228) = 0;
    *(undefined4 *)(uVar2 + 0x224) = 0;
    *(undefined4 *)(uVar2 + 0x220) = 0;
  }
  else {
    dVar13 = 1.0 / SQRT(dVar7);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar23 * dVar13) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                             (double)(float)(dVar23 * dVar13) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar7 * dVar13) * dVar13 - 1.0) *
                    (double)(float)(dVar23 * dVar13) + dVar13);
    *(float *)(uVar2 + 0x220) = CollOutput.normal.x * fVar1;
    *(float *)(uVar2 + 0x224) = CollOutput.normal.y * fVar1;
    *(float *)(uVar2 + 0x228) = CollOutput.normal.z * fVar1;
    fVar1 = CollOutput.normal.w;
  }
  *(float *)(uVar2 + 0x22c) = fVar1;
  mobyfunc::GetBonePosition(param_1,0,(ulonglong)uVar2 + 0x210);
  iVar6 = 0;
  *(undefined4 *)(uVar2 + 0x218) = *(undefined4 *)(param_1 + 0x18);
  dVar7 = 0.01745329238474369;
  dVar13 = 0.0625;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  dVar21 = 0.20000000298023224;
  dVar22 = 0.15000000596046448;
  do {
    dVar10 = (double)(float)((double)DAT_00757b7c * dVar7);
    dVar8 = (double)fastfunc::FastIntToDouble(iVar6);
    fVar1 = (float)(dVar10 * (double)(float)(dVar8 * dVar13 - dVar23));
    dVar11 = (double)fVar1;
    dVar8 = (double)fastfunc::FastWrapRot(fVar1,*(float *)(param_1 + 0x48));
    dVar10 = (double)(float)(dVar8 + dVar14);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar12 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar12 = dVar8;
    }
    dVar8 = (double)(float)(dVar12 * dVar12);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar12));
    dVar10 = (double)(float)(dVar8 * dVar9);
    dVar12 = (double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                            (double)(float)(dVar10 * dVar19 +
                                           (double)(float)(dVar9 * dVar18 +
                                                          (double)(float)((double)(float)(dVar8 * 
                                                  dVar12) * dVar17 + dVar12))));
    dVar10 = (double)fastfunc::FastWrapRot((float)dVar11,*(float *)(param_1 + 0x48));
    iVar4 = iVar6 * 0x10;
    pfVar5 = (float *)(iVar4 + uVar2 + 0x230);
    dVar8 = (double)(float)(dVar15 - dVar10);
    if (dVar10 - (double)(float)(dVar15 - dVar10) < 0.0) {
      dVar8 = dVar10;
    }
    dVar11 = (double)(float)(dVar16 - dVar10);
    if ((double)(float)(dVar16 - dVar10) - dVar8 < 0.0) {
      dVar11 = dVar8;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    *pfVar5 = (float)(dVar12 * dVar21 + (double)*(float *)(uVar2 + 0x210));
    dVar12 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar10 = (double)(float)(dVar8 * dVar12);
    pfVar5[1] = (float)((double)(float)((double)(float)(dVar8 * dVar10) * dVar20 +
                                       (double)(float)(dVar10 * dVar19 +
                                                      (double)(float)(dVar12 * dVar18 +
                                                                     (double)(float)((double)(float)
                                                  (dVar8 * dVar11) * dVar17 + dVar11)))) * dVar21 +
                       (double)*(float *)(uVar2 + 0x214));
    pfVar5[2] = (float)((double)*(float *)(uVar2 + 0x218) + dVar22);
    pfVar5[3] = *(float *)(uVar2 + 0x21c);
    dVar8 = dVar24;
    if ((iVar6 != 0) && (iVar6 != 0xf)) {
      dVar8 = 1.0;
    }
    iVar6 = iVar6 + 1;
    *(float *)(iVar4 + uVar2 + 0x23c) = (float)dVar8;
  } while (iVar6 < 0x10);
  auVar27 = ZEXT416(0xffffffff);
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
  auVar27 = loadVectorLeftIndexed(0x7b80,0x750000);
  auVar26 = loadVectorLeftIndexed(in_LR,0x1aebf0);
  auVar25 = vectorConvertFromSignedFixedPointWord(auVar27,0);
  auVar27 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar27 = vectorAddFloatingPoint
                      (auVar25,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar28);
  auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
  auVar27 = vectorConvertFromSignedFixedPointWord(auVar27,0);
  auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar3 = storeVectorElementWordIndexed
                    (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x21c,
                     (ulonglong)uVar2);
  *(undefined4 *)(uVar2 + 0x21c & 0xfffffffc) = uVar3;
  return;
}



//==== 001aefb8  ns=mobyupdate_helpers  size=0x4d0
// sig: undefined M1068_001aefb8(void)
// callers(1): 001af4c0 mobyupdate_helpers::M1068_001af4c0
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1068_001aefb8(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [32];
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = 0;
  dVar8 = 0.0;
  dVar9 = 1.0;
  do {
    uVar1 = (int)*(uint *)(iVar6 + 0x23c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x23c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0x24c) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x24c)) - uVar1))) &&
       (dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00757bf4)) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      mobyutil::MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      mobyutil::MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      mobyutil::MB_randRangeFloat(DAT_00757be4,DAT_00757be8);
      mobyutil::MB_randRangeFloat(DAT_00757bec,DAT_00757bf0);
      mobyutil::MB_randRangeFloat(DAT_00757bec,DAT_00757bf0);
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00757bcc,DAT_00757bd0);
      uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00757bd4,DAT_00757bd8);
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00757bdc,DAT_00757be0);
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      partupd::SpawnPart_2(local_d0,local_c0,local_b0,DAT_00757bbc,DAT_00757bc0,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}



//==== 001af4c0  ns=mobyupdate_helpers  size=0x520
// sig: undefined M1068_001af4c0(void)
// callers(1): 001afa30 mobyupdate_helpers::M1068_001afa30
// callees(7): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0010581c mobyutil::SetCollDamIn; 00109af0 mobyutil::Delt; 001aefb8 mobyupdate_helpers::M1068_001aefb8; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1068_001af4c0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar13;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
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
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  puVar10 = (ulonglong *)(uVar12 - 0x140);
  *puVar10 = uVar12;
  puVar10[0x2a] = in_LR;
  puVar10[0x20] = in_f24;
  puVar10[0x21] = in_f25;
  puVar10[0x22] = in_f26;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1e] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar19 = ZEXT48(pvVar8);
  puVar10[0x1d] = unaff_r29;
  puVar10[0x1c] = unaff_r28;
  puVar10[0x1b] = unaff_r27;
  puVar10[0x1a] = unaff_r26;
  uVar14 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar8 + 0x21c));
  *(undefined4 *)(puVar10 + 0x18) = uVar14;
  fastfunc::FastDecTimerS32(uVar12 - 0x80);
  iVar17 = *(int *)(puVar10 + 0x18);
  auVar36 = loadVectorLeftIndexed(0xc0,uVar12 - 0x140);
  auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
  auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar14 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x21c,uVar19);
  *(undefined4 *)((int)pvVar8 + 0x21cU & 0xfffffffc) = uVar14;
  if (iVar17 != 0) {
    if (iVar17 == 0x14) {
      iVar17 = 0;
      uVar16 = uVar19;
      do {
        uVar18 = *(uint *)((int)uVar16 + 0x23c);
        uVar9 = (int)uVar18 >> 0x1f;
        if (0x3f7fffff < (int)((uVar9 >> 1 ^ uVar18) - uVar9)) {
          *(undefined4 *)((int)uVar16 + 0x23c) = 0x3f7ae148;
        }
        iVar17 = iVar17 + 1;
        uVar16 = uVar16 + 0x10;
      } while (iVar17 < 0x10);
    }
    iVar17 = 0;
    dVar30 = 0.5;
    dVar31 = 0.0;
    dVar32 = 0.4000000059604645;
    dVar33 = 2.0;
    dVar34 = 0.30000001192092896;
    dVar35 = 1.0;
    uVar16 = uVar19;
    do {
      if (g_heroType == '\x01') {
        dVar21 = dVar30;
        fVar2 = DAT_00757b78 * mobyutil::g_FrameTime;
      }
      else {
        dVar21 = (double)mobyutil::g_FrameTime;
        fVar2 = DAT_00757b78;
      }
      iVar11 = (int)uVar16;
      fVar1 = *(float *)(iVar11 + 0x230) - *(float *)((int)pvVar8 + 0x210);
      *(float *)(puVar10 + 0xe) = fVar1;
      fVar6 = *(float *)(iVar11 + 0x234) - *(float *)((int)pvVar8 + 0x214);
      *(float *)((int)puVar10 + 0x74) = fVar6;
      dVar23 = (double)SQRT(fVar1 * fVar1 + fVar6 * fVar6);
      fVar3 = (param_1->pos).y;
      fVar4 = (param_1->pos).x;
      fVar5 = (param_1->pos).z;
      *(float *)(puVar10 + 0xf) = *(float *)(iVar11 + 0x238) - *(float *)((int)pvVar8 + 0x218);
      *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)(iVar11 + 0x23c);
      *(undefined4 *)(puVar10 + 0xf) = 0;
      fVar2 = (float)((double)(float)((double)fVar2 * dVar21) / dVar23);
      dVar25 = (double)(fVar1 * fVar2);
      dVar20 = (double)(fVar6 * fVar2);
      dVar21 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar21 = dVar25;
      }
      dVar24 = dVar31;
      if (dVar31 - dVar23 < 0.0) {
        dVar24 = dVar20;
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar21 = dVar25;
      }
      if (dVar23 - dVar31 < 0.0) {
        dVar24 = dVar20;
      }
      *(float *)(puVar10 + 0xe) = (float)dVar21;
      *(float *)((int)puVar10 + 0x74) = (float)dVar24;
      fVar2 = (float)((double)*(float *)(iVar11 + 0x230) + dVar21);
      *(float *)(puVar10 + 0xe) = fVar2;
      fVar1 = (float)((double)*(float *)(iVar11 + 0x234) + dVar24);
      *(float *)((int)puVar10 + 0x74) = fVar1;
      dVar21 = (double)*(float *)(iVar11 + 0x238);
      *(float *)(puVar10 + 0xf) = *(float *)(iVar11 + 0x238);
      fVar6 = *(float *)(iVar11 + 0x23c);
      *(float *)((int)puVar10 + 0x7c) = fVar6;
      dVar20 = (double)((float)(dVar21 - (double)fVar5) * *(float *)((int)pvVar8 + 0x228) +
                       (fVar2 - fVar4) * *(float *)((int)pvVar8 + 0x220) +
                       (fVar1 - fVar3) * *(float *)((int)pvVar8 + 0x224));
      if (dVar20 <= dVar32) {
        if (dVar20 < dVar34) {
          *(float *)(puVar10 + 0xf) = (float)((double)mobyutil::g_FrameTime * dVar33 + dVar21);
        }
      }
      else {
        *(float *)(puVar10 + 0xf) = -(float)((double)mobyutil::g_FrameTime * dVar33 - dVar21);
      }
      uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
      if ((int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18) < 0x3f800000) {
LAB_001af770:
        if ((double)fVar6 < dVar35) {
          mobyutil::Delt((float)dVar31,(float)((double)mobyutil::g_FrameTime * dVar33),
                         (float *)((int)puVar10 + 0x7c));
        }
      }
      else {
        iVar15 = collproc::CollLine(uVar16 + 0x230,uVar12 - 0xd0,2,0,0);
        fVar6 = *(float *)((int)puVar10 + 0x7c);
        if (iVar15 == 0) goto LAB_001af770;
        *(undefined4 *)((int)puVar10 + 0x7c) = 0x3f7ae148;
      }
      iVar17 = iVar17 + 1;
      *(undefined4 *)(iVar11 + 0x230) = *(undefined4 *)(puVar10 + 0xe);
      *(undefined4 *)(iVar11 + 0x234) = *(undefined4 *)((int)puVar10 + 0x74);
      *(undefined4 *)(iVar11 + 0x238) = *(undefined4 *)(puVar10 + 0xf);
      *(undefined4 *)(iVar11 + 0x23c) = *(undefined4 *)((int)puVar10 + 0x7c);
      uVar16 = uVar16 + 0x10;
    } while (iVar17 < 0x10);
    iVar17 = 0;
    dVar30 = 1.570796251296997;
    dVar31 = 3.141592502593994;
    dVar32 = -3.141592502593994;
    dVar33 = -0.16666656732559204;
    dVar34 = 0.008333025500178337;
    dVar21 = -0.0001980741071747616;
    dVar20 = 2.601886990305502e-06;
    do {
      iVar11 = (int)uVar19;
      uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
      if ((0x3f199999 < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18)) &&
         (uVar18 = (int)*(uint *)(iVar11 + 0x24c) >> 0x1f,
         0x3f199999 < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x24c)) - uVar18))) {
        dVar25 = (double)(param_1->rotation).z;
        dVar24 = (double)(float)(dVar25 + dVar30);
        *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
        uVar13 = 0x10000;
        *(undefined4 *)((int)puVar10 + 0x8c) = 0x45afdf66;
        dVar23 = (double)(float)(dVar31 - dVar25);
        if (dVar25 - (double)(float)(dVar31 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar26 = (double)(float)(dVar31 - dVar24);
        if (dVar24 - (double)(float)(dVar31 - dVar24) < 0.0) {
          dVar26 = dVar24;
        }
        dVar22 = (double)(float)(dVar32 - dVar25);
        if ((double)(float)(dVar32 - dVar25) - dVar23 < 0.0) {
          dVar22 = dVar23;
        }
        dVar23 = (double)(float)(dVar32 - dVar24);
        if ((double)(float)(dVar32 - dVar24) - dVar26 < 0.0) {
          dVar23 = dVar26;
        }
        dVar25 = (double)(float)(dVar22 * dVar22);
        dVar24 = (double)(float)(dVar23 * dVar23);
        dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar22));
        dVar26 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar23));
        dVar27 = (double)(float)(dVar25 * dVar28);
        dVar29 = (double)(float)(dVar24 * dVar26);
        *(float *)((int)puVar10 + 0x84) =
             (float)((double)(float)(dVar25 * dVar27) * dVar20 +
                    (double)(float)(dVar27 * dVar21 +
                                   (double)(float)(dVar28 * dVar34 +
                                                  (double)(float)((double)(float)(dVar25 * dVar22) *
                                                                  dVar33 + dVar22))));
        *(float *)(puVar10 + 0x10) =
             (float)((double)(float)(dVar24 * dVar29) * dVar20 +
                    (double)(float)(dVar29 * dVar21 +
                                   (double)(float)(dVar26 * dVar34 +
                                                  (double)(float)((double)(float)(dVar24 * dVar23) *
                                                                  dVar33 + dVar23))));
        uVar18 = (int)*(uint *)(iVar11 + 0x23c) >> 0x1f;
        if (0x3f7fffff < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x23c)) - uVar18)) {
          uVar18 = (int)*(uint *)(iVar11 + 0x24c) >> 0x1f;
          if (0x3f7fffff < (int)((uVar18 >> 1 ^ *(uint *)(iVar11 + 0x24c)) - uVar18)) {
            uVar13 = 0x10001;
          }
        }
        mobyutil::SetCollDamIn(dVar35,uVar12 - 0xb0,param_1,uVar13,uVar18,uVar12 - 0xc0);
        *(undefined1 *)(puVar10 + 0x15) = 0;
        MVar7 = param_1->oClass;
        *(undefined1 *)((int)puVar10 + 0xa9) = 1;
        *(MOBY_OCLASSES *)((int)puVar10 + 0xaa) = MVar7;
        collproc::CollLine(uVar19 + 0x230,uVar19 + 0x240,0,param_1,uVar12 - 0xb0);
      }
      iVar17 = iVar17 + 1;
      uVar19 = uVar19 + 0x10;
    } while (iVar17 < 0xf);
    RegisterFuncForMoby(&PTR_M1069_001b1eb8_00708938,param_1);
    M1068_001aefb8(param_1);
  }
  return;
}



//==== 001afa30  ns=mobyupdate_helpers  size=0xce4
// sig: undefined M1068_001afa30(void)
// callers(1): 001b07a8 mobyupdate_unsorted::UpdateMoby_1068
// callees(15): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe4f0 mobyutil::MB_randRangeSigned; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 0011b728 mobyutil::MB_UnlockSkillPoint; 001af4c0 mobyupdate_helpers::M1068_001af4c0; 001bb4e0 mobyupdate_helpers::M1089_001bb4e0; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1068_001afa30(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyClass *pMVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  Spline *pSVar15;
  undefined2 uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  longlong lVar24;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar34;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f14;
  ulonglong in_f15;
  double dVar45;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar46;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar47;
  ulonglong in_f27;
  double dVar48;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  double dVar51;
  ulonglong in_f30;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar29 = uVar23 - 0x1d0;
  puVar17 = (ulonglong *)lVar29;
  *puVar17 = uVar23;
  puVar17[0x3c] = in_LR;
  puVar17[0x28] = in_f14;
  puVar17[0x29] = in_f15;
  puVar17[0x2a] = in_f16;
  puVar17[0x2b] = in_f17;
  puVar17[0x2c] = in_f18;
  puVar17[0x2d] = in_f19;
  puVar17[0x2e] = in_f20;
  puVar17[0x2f] = in_f21;
  puVar17[0x30] = in_f22;
  puVar17[0x31] = in_f23;
  puVar17[0x32] = in_f24;
  puVar17[0x33] = in_f25;
  puVar17[0x34] = in_f26;
  puVar17[0x35] = in_f27;
  puVar17[0x36] = in_f28;
  puVar17[0x37] = in_f29;
  puVar17[0x38] = in_f30;
  puVar17[0x39] = in_f31;
  puVar17[0x27] = unaff_r31;
  puVar17[0x22] = unaff_r26;
  puVar17[0x21] = unaff_r25;
  pMVar9 = param_1->pClass;
  puVar17[0x26] = unaff_r30;
  pvVar10 = param_1->pVar;
  uVar35 = ZEXT48(pvVar10);
  fVar7 = pMVar9->gScale * DAT_00757b50;
  puVar17[0x25] = unaff_r29;
  puVar17[0x24] = unaff_r28;
  puVar17[0x23] = unaff_r27;
  param_1->scale = fVar7;
  M1068_001af4c0(param_1);
  if (*(int *)((int)pvVar10 + 0x38) != 0) {
    dVar37 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar25 = fastfunc::FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar10 + 0x188) = uVar25;
    *(undefined4 *)((int)pvVar10 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar35 + 0x188);
  dVar37 = 0.0;
  *(undefined4 *)((int)puVar17 + 0x74) = 0;
  iVar26 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar27 = mobyutil::MB_HandleDamage
                     (param_1,iVar26,uVar35 + 0x20,0,puVar17 + 0xe,(int)puVar17 + 0x74,0,4);
  if ((*(int *)(puVar17 + 0xe) != 1) && (param_1->state != '\x10')) {
    if ((Level == Orxon) &&
       (((iVar26 != 0 && (*(int *)(iVar26 + 0x20) != 0)) &&
        (*(short *)(*(int *)(iVar26 + 0x20) + 0xa6) == 0x31a)))) {
      mobyutil::MB_UnlockSkillPoint(0x11);
    }
    fVar7 = *(float *)((int)pvVar10 + 0x20) - *(float *)((int)puVar17 + 0x74);
    *(float *)((int)pvVar10 + 0x20) = fVar7;
    if ((double)fVar7 <= dVar37) {
      iVar27 = 1;
    }
    *(undefined4 *)((int)pvVar10 + 0x80) = 500;
    *(undefined4 *)((int)pvVar10 + 0x88) = 0x3f000000;
    dVar53 = 0.7853981852531433;
    if (iVar27 < 3) {
      if ((-1 < iVar27) && (0 < iVar27)) {
        param_1->state = '\x10';
        fVar2 = mobyutil::g_FrameTime;
        fVar7 = DAT_00757b60 * mobyutil::g_FrameTime;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar10 + 0x78) = fVar7;
        fVar7 = DAT_00757b64;
        *(undefined4 *)((int)pvVar10 + 0xb0) = 0x41100000;
        *(undefined4 *)((int)pvVar10 + 0xb4) = 0x41900000;
        *(float *)((int)pvVar10 + 0x7c) = fVar7 * fVar2;
        uVar11 = *(uint *)(iVar26 + 0x10);
        uVar12 = *(uint *)(iVar26 + 0x14);
        dVar39 = ABS((double)*(float *)(iVar26 + 0x10));
        dVar41 = ABS((double)*(float *)(iVar26 + 0x14));
        *(float *)(puVar17 + 0x10) = (float)(dVar39 - dVar41);
        uVar32 = (ulonglong)*(uint *)(puVar17 + 0x10);
        uVar30 = (ulonglong)(uVar11 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar12 >> 0x1d) & 4;
        dVar47 = dVar39;
        if ((double)*(float *)(puVar17 + 0x10) - dVar37 < 0.0) {
          dVar47 = dVar41;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar30 << 2));
        if ((double)*(float *)(puVar17 + 0x10) - dVar37 < 0.0) {
          dVar41 = dVar39;
        }
        fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
        dVar39 = dVar37;
        if (dVar37 < dVar47) {
          lVar24 = uVar23 - 0x1c0;
          lVar33 = uVar23 - 0xf8;
          lVar31 = uVar23 - 0x108;
          lVar36 = 2;
          fVar3 = (float)(dVar41 - dVar47) / (float)(dVar41 + dVar47);
          fVar6 = fVar3 * fVar3;
          *(float *)(puVar17 + 0x19) = fVar3;
          *(float *)((int)puVar17 + 0xcc) = fVar3;
          *(float *)(puVar17 + 0x1a) = fVar3;
          *(float *)((int)puVar17 + 0xd4) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar6;
          *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar3;
          *(float *)((int)puVar17 + 0xd4) = *(float *)((int)puVar17 + 0xd4) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar24 + 200) = *(float *)((int)lVar24 + 0xb8) * fVar3 * fVar3;
            iVar27 = (int)lVar31;
            lVar31 = lVar31 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          lVar31 = 4;
          uVar30 = uVar23 - 0x108;
          pfVar34 = (float *)&DAT_007358e0;
          lVar24 = lVar29;
          uVar32 = uVar30;
          do {
            fVar3 = *pfVar34;
            fVar6 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar24 + 200) = *(float *)((int)lVar24 + 200) * fVar3;
            lVar24 = lVar24 + 8;
            *(float *)((int)uVar32 + 4) = *(float *)((int)uVar32 + 4) * fVar6;
            uVar32 = uVar32 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 2;
          lVar24 = lVar29;
          dVar41 = dVar37;
          do {
            iVar27 = (int)lVar24;
            iVar28 = (int)uVar30;
            lVar24 = lVar24 + 0x10;
            uVar30 = uVar30 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar27 + 200)) +
                              *(float *)(iVar28 + 4) + *(float *)(iVar28 + 8) +
                             *(float *)(iVar28 + 0xc));
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar7 + fVar2);
        }
        mobyutil::MB_StartKick(dVar39,param_1,uVar35 + 0x60,uVar32,9,1,0);
        iVar27 = 0;
        do {
          uVar40 = 0x3fc99999a0000000;
          dVar50 = (double)(param_1->pos).x;
          dVar39 = (double)(param_1->pos).y;
          dVar47 = (double)((param_1->pos).z + 2.5);
          dVar52 = (double)(param_1->pos).w;
          dVar41 = (double)mobyutil::MB_randRangeSigned(dVar37,0x3fc99999a0000000);
          dVar51 = (double)(float)(dVar50 + dVar41);
          dVar41 = (double)mobyutil::MB_randRangeSigned(dVar37,uVar40);
          dVar49 = (double)(float)(dVar39 + dVar41);
          dVar41 = (double)mobyutil::MB_randRangeSigned(dVar37,uVar40);
          dVar48 = (double)(float)(dVar47 + dVar41);
          dVar39 = (double)mobyutil::MB_randRot();
          dVar46 = 3.0;
          dVar50 = (double)mobyutil::MB_randRangeFloat(3.0,5.7);
          fVar7 = (float)(dVar39 + 1.570796251296997);
          uVar11 = *(uint *)(iVar26 + 0x10);
          uVar12 = *(uint *)(iVar26 + 0x14);
          dVar45 = ABS((double)*(float *)(iVar26 + 0x10));
          dVar47 = ABS((double)*(float *)(iVar26 + 0x14));
          uVar13 = *(uint *)(iVar26 + 0x10);
          fVar2 = *(float *)(iVar26 + 0x10);
          uVar14 = *(uint *)(iVar26 + 0x14);
          fVar3 = *(float *)(iVar26 + 0x14);
          dVar41 = (double)(float)(3.141592502593994 - dVar39);
          if (dVar39 - (double)(float)(3.141592502593994 - dVar39) < 0.0) {
            dVar41 = dVar39;
          }
          fVar6 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar6 = fVar7;
          }
          dVar38 = (double)(float)(-3.141592502593994 - dVar39);
          if ((double)(float)(-3.141592502593994 - dVar39) - dVar41 < 0.0) {
            dVar38 = dVar41;
          }
          *(float *)((int)puVar17 + 0x7c) = (float)(dVar45 - dVar47);
          dVar41 = (double)mobyutil::g_FrameTime;
          fVar1 = (float)(dVar50 * dVar41);
          fVar21 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar6 < 0.0) {
            fVar21 = fVar6;
          }
          dVar50 = (double)(float)(dVar38 * dVar38);
          uVar32 = (ulonglong)(uVar11 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(uVar12 >> 0x1d) & 4;
          fVar6 = fVar21 * fVar21;
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
          dVar39 = dVar45;
          if ((double)*(float *)((int)puVar17 + 0x7c) - dVar37 < 0.0) {
            dVar39 = dVar47;
          }
          fVar4 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
          dVar44 = (double)(float)(dVar50 * (double)(float)(dVar50 * dVar38));
          fVar19 = fVar6 * fVar6 * fVar21;
          dVar43 = (double)(float)(dVar50 * dVar44);
          fVar20 = fVar6 * fVar19;
          if ((double)*(float *)((int)puVar17 + 0x7c) - dVar37 < 0.0) {
            dVar47 = dVar45;
          }
          dVar45 = dVar37;
          if (dVar37 < dVar39) {
            lVar24 = uVar23 - 0x1c0;
            lVar31 = uVar23 - 0x128;
            lVar33 = uVar23 - 0x118;
            lVar36 = 2;
            fVar8 = (float)(dVar47 - dVar39) / (float)(dVar47 + dVar39);
            fVar5 = fVar8 * fVar8;
            *(float *)(puVar17 + 0x15) = fVar8;
            *(float *)((int)puVar17 + 0xac) = fVar8;
            *(float *)(puVar17 + 0x16) = fVar8;
            *(float *)((int)puVar17 + 0xb4) = fVar8;
            fVar8 = fVar5 * fVar5;
            *(float *)((int)puVar17 + 0xac) = *(float *)((int)puVar17 + 0xac) * fVar5;
            *(float *)(puVar17 + 0x16) = *(float *)(puVar17 + 0x16) * fVar8;
            *(float *)((int)puVar17 + 0xb4) = *(float *)((int)puVar17 + 0xb4) * fVar8 * fVar5;
            do {
              *(float *)((int)lVar24 + 0xa8) = *(float *)((int)lVar24 + 0x98) * fVar8 * fVar8;
              iVar28 = (int)lVar31;
              lVar24 = lVar24 + 8;
              lVar31 = lVar31 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar8 * fVar8;
              lVar33 = lVar33 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar33 = uVar23 - 0x128;
            pfVar34 = (float *)&DAT_007358e0;
            lVar24 = lVar29;
            lVar31 = lVar33;
            do {
              fVar8 = *pfVar34;
              fVar5 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar24 + 0xa8) = *(float *)((int)lVar24 + 0xa8) * fVar8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar5;
              lVar31 = lVar31 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar31 = 2;
            lVar24 = lVar29;
            dVar47 = dVar37;
            do {
              iVar28 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              iVar18 = (int)lVar33;
              lVar33 = lVar33 + 0x10;
              dVar47 = (double)((float)(dVar47 + (double)*(float *)(iVar28 + 0xa8)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            dVar45 = (double)((float)(dVar47 + dVar53) * fVar7 + fVar4);
          }
          fVar7 = (float)(dVar45 + 1.570796251296997);
          dVar39 = ABS((double)fVar2);
          dVar47 = ABS((double)fVar3);
          fVar2 = (float)(dVar41 * 7.0);
          *(float *)(puVar17 + 0xf) = (float)(dVar39 - dVar47);
          fVar3 = 3.1415925 - fVar7;
          if (fVar7 - (3.1415925 - fVar7) < 0.0) {
            fVar3 = fVar7;
          }
          fVar4 = -3.1415925 - fVar7;
          if ((-3.1415925 - fVar7) - fVar3 < 0.0) {
            fVar4 = fVar3;
          }
          uVar32 = (ulonglong)(uVar13 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(uVar14 >> 0x1d) & 4;
          fVar7 = fVar4 * fVar4;
          dVar41 = dVar39;
          if ((double)*(float *)(puVar17 + 0xf) - dVar37 < 0.0) {
            dVar41 = dVar47;
          }
          if ((double)*(float *)(puVar17 + 0xf) - dVar37 < 0.0) {
            dVar47 = dVar39;
          }
          fVar5 = fVar7 * fVar7 * fVar4;
          fVar22 = fVar7 * fVar5;
          fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar32 << 2));
          fVar3 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
          dVar45 = (double)((fVar6 * fVar20 * 2.601887e-06 +
                            fVar20 * -0.0001980741 +
                            fVar19 * 0.0083330255 + fVar6 * fVar21 * -0.16666657 + fVar21) * fVar1 +
                           fVar2 * (fVar7 * fVar22 * 2.601887e-06 +
                                   fVar22 * -0.0001980741 +
                                   fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4));
          dVar39 = dVar37;
          if (dVar37 < dVar41) {
            lVar24 = uVar23 - 0x1c0;
            lVar33 = uVar23 - 0x138;
            lVar31 = uVar23 - 0x148;
            lVar36 = 2;
            fVar7 = (float)(dVar47 - dVar41) / (float)(dVar47 + dVar41);
            fVar6 = fVar7 * fVar7;
            *(float *)(puVar17 + 0x11) = fVar7;
            *(float *)((int)puVar17 + 0x8c) = fVar7;
            *(float *)(puVar17 + 0x12) = fVar7;
            *(float *)((int)puVar17 + 0x94) = fVar7;
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar17 + 0x8c) = *(float *)((int)puVar17 + 0x8c) * fVar6;
            *(float *)(puVar17 + 0x12) = *(float *)(puVar17 + 0x12) * fVar7;
            *(float *)((int)puVar17 + 0x94) = *(float *)((int)puVar17 + 0x94) * fVar7 * fVar6;
            do {
              *(float *)((int)lVar24 + 0x88) = *(float *)((int)lVar24 + 0x78) * fVar7 * fVar7;
              iVar28 = (int)lVar31;
              lVar31 = lVar31 + 8;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)(iVar28 + 4) * fVar7 * fVar7;
              lVar33 = lVar33 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar36 = 4;
            lVar33 = uVar23 - 0x148;
            pfVar34 = (float *)&DAT_007358e0;
            lVar24 = lVar29;
            lVar31 = lVar33;
            do {
              fVar7 = *pfVar34;
              fVar6 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar24 + 0x88) = *(float *)((int)lVar24 + 0x88) * fVar7;
              lVar24 = lVar24 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar6;
              lVar31 = lVar31 + 8;
              lVar36 = lVar36 + -1;
            } while (lVar36 != 0);
            lVar31 = 2;
            lVar24 = lVar29;
            dVar41 = dVar37;
            do {
              iVar28 = (int)lVar24;
              iVar18 = (int)lVar33;
              lVar24 = lVar24 + 0x10;
              lVar33 = lVar33 + 0x10;
              dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar28 + 0x88)) +
                                *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                               *(float *)(iVar18 + 0xc));
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            dVar39 = (double)((float)(dVar41 + dVar53) * fVar8 + fVar3);
          }
          dVar41 = (double)(float)(3.141592502593994 - dVar39);
          if (dVar39 - (double)(float)(3.141592502593994 - dVar39) < 0.0) {
            dVar41 = dVar39;
          }
          dVar47 = (double)(float)(-3.141592502593994 - dVar39);
          if ((double)(float)(-3.141592502593994 - dVar39) - dVar41 < 0.0) {
            dVar47 = dVar41;
          }
          dVar41 = (double)(float)(dVar47 * dVar47);
          dVar42 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar47));
          dVar39 = (double)(float)(dVar41 * dVar42);
          dVar39 = (double)(((float)(dVar50 * dVar43) * 2.601887e-06 +
                            (float)(dVar43 * -0.0001980741071747616 +
                                   (double)(float)(dVar44 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar50 * dVar38) *
                                                                  -0.16666656732559204 + dVar38))))
                            * fVar1 +
                           fVar2 * ((float)(dVar41 * dVar39) * 2.601887e-06 +
                                   (float)(dVar39 * -0.0001980741071747616 +
                                          (double)(float)(dVar42 * 0.008333025500178337 +
                                                         (double)(float)((double)(float)(dVar41 * 
                                                  dVar47) * -0.16666656732559204 + dVar47)))));
          dVar41 = (double)mobyutil::MB_randRangeFloat((float)dVar46,8.5);
          *(float *)(puVar17 + 8) = (float)dVar51;
          *(float *)(puVar17 + 9) = (float)dVar48;
          dVar47 = (double)mobyutil::g_FrameTime;
          *(float *)(puVar17 + 10) = (float)dVar45;
          *(float *)((int)puVar17 + 0x44) = (float)dVar49;
          *(float *)((int)puVar17 + 0x4c) = (float)dVar52;
          *(float *)((int)puVar17 + 0x54) = (float)dVar39;
          *(float *)(puVar17 + 0xb) = (float)(dVar41 * dVar47);
          *(float *)((int)puVar17 + 0x5c) = (float)(dVar41 * dVar47);
          iVar28 = M1089_001bb4e0(param_1);
          if (iVar28 != 0) {
            *(float *)(iVar28 + 0x2c) = *(float *)(iVar28 + 0x2c) * 0.4;
          }
          iVar27 = iVar27 + 1;
        } while (iVar27 < 10);
        *(undefined1 *)((int)pvVar10 + 0x117) = 0xfa;
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar27 < 0xb) {
      auVar54 = ZEXT416(0xffffffff);
      auVar54 = auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60;
      param_1->state = '\x0f';
      fVar2 = mobyutil::g_FrameTime;
      auVar55 = vectorShiftLeftIntegerWord(auVar54,auVar54);
      auVar54 = loadVectorLeftIndexed(0x10,0x1af9e0);
      auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar56 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar54 = vectorMultiplyAddFloatingPoint
                          (auVar56,auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,
                           auVar55);
      fVar7 = DAT_00757b58 * mobyutil::g_FrameTime;
      auVar54 = vectorConvertToSignedFixedPointWordSaturate(auVar54,0);
      auVar54 = vectorSplatHalfWord(auVar54,1);
      uVar16 = storeVectorElementHalfWordIndexed(auVar54,0x26,uVar35);
      *(undefined2 *)((int)pvVar10 + 0x26) = uVar16;
      *(float *)((int)pvVar10 + 0x78) = fVar7;
      fVar7 = DAT_00757b5c;
      *(undefined4 *)((int)pvVar10 + 0xb0) = 0x41000000;
      *(undefined4 *)((int)pvVar10 + 0xb4) = 0x41700000;
      *(float *)((int)pvVar10 + 0x7c) = fVar7 * fVar2;
      uVar11 = *(uint *)(iVar26 + 0x10);
      uVar12 = *(uint *)(iVar26 + 0x14);
      dVar47 = ABS((double)*(float *)(iVar26 + 0x10));
      dVar53 = ABS((double)*(float *)(iVar26 + 0x14));
      *(float *)((int)puVar17 + 0x84) = (float)(dVar47 - dVar53);
      uVar30 = (ulonglong)(uVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(uVar12 >> 0x1d) & 4;
      uVar32 = uVar30 << 2;
      dVar41 = dVar47;
      if ((double)*(float *)((int)puVar17 + 0x84) - dVar37 < 0.0) {
        dVar41 = dVar53;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar32);
      if ((double)*(float *)((int)puVar17 + 0x84) - dVar37 < 0.0) {
        dVar53 = dVar47;
      }
      fVar2 = *(float *)(((uint)(uVar30 << 2) | 0x735900) + 4);
      if (dVar37 < dVar41) {
        lVar36 = 2;
        fVar3 = (float)(dVar53 - dVar41) / (float)(dVar53 + dVar41);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar17 + 0x1d) = fVar3;
        *(float *)((int)puVar17 + 0xec) = fVar3;
        *(float *)(puVar17 + 0x1e) = fVar3;
        *(float *)((int)puVar17 + 0xf4) = fVar3;
        lVar33 = uVar23 - 0x1c0;
        fVar3 = fVar6 * fVar6;
        lVar24 = uVar23 - 0xe8;
        lVar31 = uVar23 - 0xd8;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar6;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar3;
        *(float *)((int)puVar17 + 0xf4) = *(float *)((int)puVar17 + 0xf4) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar33 + 0xe8) = *(float *)((int)lVar33 + 0xd8) * fVar3 * fVar3;
          iVar26 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar33 = lVar33 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar3 * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar36 = 4;
        lVar33 = uVar23 - 0xe8;
        uVar32 = ZEXT48(&DAT_007358e0);
        lVar24 = lVar29;
        lVar31 = lVar33;
        do {
          pfVar34 = (float *)uVar32;
          fVar3 = pfVar34[1];
          uVar32 = uVar32 + 8;
          *(float *)((int)lVar24 + 0xe8) = *(float *)((int)lVar24 + 0xe8) * *pfVar34;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)((int)lVar31 + 4) * fVar3;
          lVar31 = lVar31 + 8;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        lVar24 = 2;
        do {
          iVar26 = (int)lVar29;
          iVar27 = (int)lVar33;
          lVar29 = lVar29 + 0x10;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0xe8)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::MB_StartKick(dVar37,param_1,uVar35 + 0x60,uVar32,7,1,0);
      *(undefined1 *)((int)pvVar10 + 0x117) = 0xfa;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar35 + 0x110);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar35 + 0x110);
  fVar7 = DAT_00757b54;
  if (*(int *)((int)pvVar10 + 0x188) != 0) {
    fVar7 = DAT_00757b54 + 6.0;
  }
  *(float *)((int)pvVar10 + 0x198) = fVar7;
  pSVar15 = Splines[*(int *)((int)pvVar10 + 0x180)];
  iVar26 = mobyutil::MB_getTargetInArea
                     (param_1,uVar35 + 0x120,pSVar15,0,0,pSVar15->points,pSVar15->cnt);
  if ((iVar26 != 2) &&
     ((fVar7 = *(float *)((int)pvVar10 + 0x174) - *(float *)((int)pvVar10 + 0x124),
      fVar2 = *(float *)((int)pvVar10 + 0x170) - *(float *)((int)pvVar10 + 0x120),
      *(float *)((int)pvVar10 + 0x198) < SQRT(fVar2 * fVar2 + fVar7 * fVar7) ||
      (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar10 + 0x128)))))) {
    *(undefined4 *)((int)pvVar10 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar10 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar10 + 0x160) = g_heroMobyPtr;
  }
  return;
}



