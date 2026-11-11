//==== 00440364  ns=mobyupdate_helpers  size=0x14
// sig: undefined M740_00440364(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M740_00440364(void)

{
  DAT_0085a4d0 = 0x10000;
  return;
}



//==== 004403e8  ns=mobyupdate_unsorted  size=0x1b04
// sig: undefined UpdateMoby_740(MobyInstance * moby)
// callers(0): 
// callees(33): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00128438 partupd::SpawnPart_28; 001385d0 path::Path_PickNextNode; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338

/* Moby 740 */

void mobyupdate_unsorted::UpdateMoby_740(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  MobyInstance *pMVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar14;
  uint uVar15;
  ulonglong uVar13;
  u8 uVar16;
  ulonglong uVar17;
  undefined8 in_LR;
  undefined8 uVar18;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  Vec4 local_e0;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  f32 local_c0;
  f32 local_bc;
  float local_b8;
  f32 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  Vec4 local_a0;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  longlong local_78;
  
  lVar12 = (longlong)(int)moby;
  pfVar7 = (float *)moby->pVar;
  uVar17 = ZEXT48(pfVar7);
  if (pfVar7[6] != 0.0) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(in_LR,0x440378);
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar9 = storeVectorElementHalfWordIndexed(auVar31,500,uVar17);
    *(undefined2 *)(pfVar7 + 0x7d) = uVar9;
  }
  pfVar7[6] = 0.0;
  fastfunc::FastDecTimerS32(uVar17 + 0x1e8);
  dVar30 = 0.0;
  local_7c = 0;
  iVar14 = mobyutil::MB_damage(lVar12,0x330000,0);
  mobyutil::MB_HandleDamage(moby,iVar14,uVar17,0,auStack_80,&local_7c,0,4);
  fastfunc::FastDecTimerS16(uVar17 + 6);
  local_78 = (longlong)(int)(animationSpeed * 45.5);
  if ((((int)*(short *)((int)pfVar7 + 6) < (int)(animationSpeed * 45.5)) && (iVar14 != 0)) &&
     (moby->state != '\x15')) {
    sVar6 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
    if ((sVar6 == 0xb0) || (sVar6 == 0xb1)) {
      dVar22 = 1.0;
      if (*(short *)((int)pfVar7 + 6) != 0) {
        dVar22 = dVar30;
      }
      *(float *)(iVar14 + 0x2c) = (float)dVar22;
    }
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar14 + 0x2c) != 0) {
      fVar1 = *pfVar7 - *(float *)(iVar14 + 0x2c);
      pfVar7[0x44] = 0.008;
      pfVar7[0x45] = 0.0005;
      *pfVar7 = fVar1;
      fVar2 = mobyutil::g_FrameTime;
      fVar5 = DAT_0085a5a4 * mobyutil::g_FrameTime;
      pfVar7[0x49] = 1.26117e-44;
      pfVar7[0x46] = fVar5;
      fVar5 = DAT_0085a5a0;
      *(undefined1 *)((int)pfVar7 + 0x13d) = 0;
      pfVar7[0x47] = fVar5 * fVar2;
      if (dVar30 < (double)fVar1) {
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(lVar12,uVar17 + 0x100);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        pfVar7[0x54] = 5.0;
        pfVar7[0x55] = 10.0;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        moby->state = '\a';
        *(undefined1 *)((int)pfVar7 + 0xf7) = 0xfa;
        auVar31 = loadVectorLeftIndexed(0x18,0x440378);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = vectorSplatHalfWord(auVar31,1);
        uVar9 = storeVectorElementHalfWordIndexed(auVar31,6,uVar17);
        *(undefined2 *)((int)pfVar7 + 6) = uVar9;
        mobyutil::MB_UpdateLightsTransition(lVar12,uVar17 + 0xf0);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar5 = mobyutil::g_FrameTime * 8.0;
        pfVar7[0x47] = mobyutil::g_FrameTime * 10.0;
        pfVar7[0x46] = fVar5;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(lVar12,uVar17 + 0x100);
        pfVar7[0x54] = 11.0;
        pfVar7[0x55] = 18.0;
        moby->state = '\x15';
        *(undefined1 *)((int)pfVar7 + 0xf7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar12,uVar17 + 0xf0);
      }
    }
  }
  bVar3 = moby->state;
  moby->damage = -1;
  if (bVar3 < 9) {
    if (bVar3 < 4) {
      if (bVar3 == 0) {
        pfVar7[0x6c] = (moby->pos).x;
        pfVar7[0x6d] = (moby->pos).y;
        pfVar7[0x6e] = (moby->pos).z;
        pfVar7[0x6f] = (moby->pos).w;
        pfVar7[0x70] = (moby->pos).x;
        pfVar7[0x71] = (moby->pos).y;
        pfVar7[0x72] = (moby->pos).z;
        pfVar7[0x73] = (moby->pos).w;
        moby->state = '\x01';
        *pfVar7 = 1.0;
        *(undefined2 *)(pfVar7 + 1) = 1;
        *(undefined2 *)(pfVar7 + 0x7d) = 0;
        pfVar7[0x7a] = 0.0;
        mobyutil::MB_InitDefaultParams(pfVar7 + 0x58);
        pfVar7[0x5b] = 2.0;
        pfVar7[0x5a] = 2.0;
        fVar5 = mobyutil::g_FrameTime;
        pfVar7[0x58] = 1.27378e-42;
        pfVar7[0x61] = pfVar7[0x79] * fVar5;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        pfVar7[0x2c] = (float)&DAT_0085a5b0;
        if (moby->animationId != '\x02') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,2,0,(int)(animationSpeed * 3.5));
        }
      }
      else if (bVar3 < 2) {
        moby->state = '\x10';
        if (moby->animationId != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else if (bVar3 < 3) {
        fVar5 = (moby->pos).z;
        iVar14 = 0;
        dVar22 = 2.0;
        dVar28 = (double)(g_heroPosition.x - (moby->pos).x);
        dVar26 = (double)(g_heroPosition.y - (moby->pos).y);
        dVar24 = (double)(g_heroPosition.z - fVar5);
        (moby->pos).z = fVar5 + 2.0;
        do {
          partupd::SpawnPart_28(dVar30,lVar12 + 0x10,lVar12 + 0xc0);
          fVar5 = g_heroPosition.z;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        fVar1 = (float)((double)(moby->pos).z - dVar22);
        (moby->pos).z = fVar1;
        if (((pfVar7[0x77] <=
              SQRT((float)(dVar24 * dVar24 +
                          (double)(float)(dVar28 * dVar28 + (double)(float)(dVar26 * dVar26))))) ||
            (8.0 <= ABS(fVar1 - fVar5))) || (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = mobyutil::MB_randInt(0x13), iVar14 == 0)) {
            uVar13 = mobyutil::MB_randInt(0x100);
            fVar5 = pfVar7[0x76];
            if ((uVar13 & 1) != 0) {
              fVar5 = -fVar5;
              pfVar7[0x76] = fVar5;
            }
            pfVar7[0x75] = fVar5 * 0.017453292;
            dVar30 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
            moby->state = '\x0f';
            if (moby->animationId != '\0') {
              local_78 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar13 = mobyutil::MB_randInt(0x100);
          fVar5 = pfVar7[0x76];
          if ((uVar13 & 1) != 0) {
            fVar5 = -fVar5;
            pfVar7[0x76] = fVar5;
          }
          pfVar7[0x75] = fVar5 * 0.017453292;
          dVar30 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
          moby->state = '\x0f';
          if (moby->animationId != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
      }
      else {
        uVar18 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar18,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                   &DAT_00440378,uVar17 + 0x1d0);
        fVar1 = g_heroPosition.y - (moby->pos).y;
        fVar2 = g_heroPosition.x - (moby->pos).x;
        fVar5 = (moby->pos).z;
        fVar10 = g_heroPosition.z - fVar5;
        if (((pfVar7[0x77] <= SQRT(fVar10 * fVar10 + fVar2 * fVar2 + fVar1 * fVar1)) ||
            (8.0 <= ABS(fVar5 - g_heroPosition.z))) ||
           (iVar14 = mobyutil::MB_randInt(0x13), iVar14 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar14 = mobyutil::MB_randInt(0x13), iVar14 == 0)) {
            uVar13 = mobyutil::MB_randInt(0x100);
            fVar5 = pfVar7[0x76];
            if ((uVar13 & 1) != 0) {
              fVar5 = -fVar5;
              pfVar7[0x76] = fVar5;
            }
            pfVar7[0x75] = fVar5 * 0.017453292;
            dVar30 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
            moby->state = '\x0f';
            if (moby->animationId != '\0') {
              local_78 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            }
            moby->setByGroup = '\0';
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar13 = mobyutil::MB_randInt(0x100);
          fVar5 = pfVar7[0x76];
          if ((uVar13 & 1) != 0) {
            fVar5 = -fVar5;
            pfVar7[0x76] = fVar5;
          }
          pfVar7[0x75] = fVar5 * 0.017453292;
          dVar30 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          pfVar7[0x7c] = (float)(int)(animationSpeed * ((float)(longlong)dVar30 + 0.5));
          moby->state = '\x0f';
          if (moby->animationId != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x02')) {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,2,0,(int)(animationSpeed * 3.5));
        }
      }
      goto LAB_00441e9c;
    }
    if (5 < bVar3) {
      if (6 < bVar3) {
        if (bVar3 < 8) {
          uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar7 + 0x40));
          if ((uVar15 & 1) != 0) {
            moby->state = '\n';
            if (moby->animationId == '\x04') {
              return;
            }
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar12,4,8,(int)(animationSpeed * 3.5));
            return;
          }
          if ((int)(moby->pos).z < 0) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        else {
          iVar14 = FUN_0048c188(lVar12,uVar17 + 0x100);
          if (iVar14 != 0) {
            moby->state = '\0';
            *(undefined2 *)(pfVar7 + 0x2a) = 0;
          }
        }
        goto LAB_00441e9c;
      }
LAB_00441668:
      if (bVar3 == 0x14) {
        iVar14 = 0;
        (moby->pos).z = (moby->pos).z + 2.0;
        do {
          partupd::SpawnPart_28((double)mobyutil::g_FrameTime,lVar12 + 0x10,lVar12 + 0xc0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
      }
      if (pfVar7[0x7f] == -NAN) {
        local_a0.x = pfVar7[0x6c];
        local_a0.y = pfVar7[0x6d];
        local_a0.z = pfVar7[0x6e];
        local_a0.w = pfVar7[0x6f];
      }
      else {
        path::Path_PickNextNode(moby,Splines[(int)pfVar7[0x7f]],(Vec4 *)(pfVar7 + 0x6c),&local_a0);
      }
      uVar18 = FUN_005e8338((double)(local_a0.x - (moby->pos).x),
                            (double)(local_a0.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar18,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
      dVar30 = (double)mathfunc::cosf((moby->rotation).z);
      dVar22 = 2.0;
      local_b0 = (float)(dVar30 * 2.0);
      dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_ac = (float)(dVar30 * dVar22);
      local_a8 = 0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar7 + 0x58),&local_b0,&local_a0);
      bVar3 = moby->state;
      uVar15 = (uint)bVar3;
      uVar16 = moby->animationId;
      if (bVar3 == 0x14) {
        (moby->pos).z = (float)((double)(moby->pos).z - dVar22);
      }
      fVar1 = (moby->pos).y - pfVar7[0x6d];
      fVar5 = (moby->pos).x - pfVar7[0x6c];
      if ((double)SQRT(fVar5 * fVar5 + fVar1 * fVar1) < dVar22) {
        if (bVar3 == 6) {
          uVar15 = 0x10;
          moby->state = '\x10';
          if (uVar16 != '\0') {
            local_78 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
            uVar15 = (uint)moby->state;
            uVar16 = moby->animationId;
          }
        }
        else {
          uVar15 = 2;
          moby->state = '\x02';
        }
      }
      if (pfVar7[0x77] <=
          SQRT((g_heroPosition.z - pfVar7[0x6e]) * (g_heroPosition.z - pfVar7[0x6e]) +
               (g_heroPosition.x - pfVar7[0x6c]) * (g_heroPosition.x - pfVar7[0x6c]) +
               (g_heroPosition.y - pfVar7[0x6d]) * (g_heroPosition.y - pfVar7[0x6d]))) {
        if ((moby->setByGroup == '\x01') &&
           (moby->state = ((byte)((LZCOUNT(6 - uVar15) << 0x3a) >> 0x3f) & 0xf1) + 0x13,
           uVar16 != '\0')) {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,1);
          uVar15 = (uint)moby->state;
          uVar16 = moby->animationId;
        }
        moby->state = ((byte)((LZCOUNT(6 - uVar15) << 0x3a) >> 0x3f) & 0xf1) + 0x13;
        if (uVar16 != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      moby->setByGroup = '\0';
      goto LAB_00441e9c;
    }
    if (4 < bVar3) {
      uVar18 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      dVar30 = 0.20000000298023224;
      mobyutil::OrganicDeltAngSpeed
                (uVar18,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar12,
                 &DAT_00440378,uVar17 + 0x1d0);
      if (((moby->updateId == moby->animationId) &&
          (dVar22 = (double)mobyfunc::BlendAnimFrame(moby), dVar22 == 13.0)) &&
         (ABS((moby->pos).z - g_heroPosition.z) < 0.5)) {
        fVar5 = (moby->pos).y;
        fVar1 = (moby->pos).x;
        fVar10 = fVar5 - g_heroPosition.y;
        fVar2 = fVar1 - g_heroPosition.x;
        if (SQRT(fVar2 * fVar2 + fVar10 * fVar10) < 2.0) {
          dVar22 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar1),
                                        (double)(g_heroPosition.y - fVar5));
          dVar22 = (double)fastfunc::FastSubRots((float)dVar22,(moby->rotation).z);
          if (dVar22 < 0.2617993950843811) {
            dVar22 = (double)mathfunc::cosf((moby->rotation).z);
            local_d0 = (float)(dVar22 * dVar30);
            dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_cc = (float)(dVar22 * dVar30);
            local_c8 = 0;
            local_c0 = (g_heroMobyPtr->pos).x;
            local_bc = (g_heroMobyPtr->pos).y;
            local_b4 = (g_heroMobyPtr->pos).w;
            local_b8 = (g_heroMobyPtr->pos).z + 0.75;
            mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x440378,&local_c0,&local_d0);
          }
        }
      }
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar5 = (moby->pos).y - g_heroPosition.y, fVar1 = (moby->pos).x - g_heroPosition.x,
          1.5 < SQRT(fVar1 * fVar1 + fVar5 * fVar5))) &&
         (moby->state = '\x04', moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
      }
      dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      fVar5 = -(DAT_0071f418 * 9.8 - pfVar7[0x5e]);
      pfVar7[0x5e] = fVar5;
      fVar5 = (moby->pos).z + fVar5;
      (moby->pos).z = fVar5;
      if ((double)fVar5 < dVar30) {
        pfVar7[0x5e] = 0.0;
        (moby->pos).z = (float)dVar30;
      }
      goto LAB_00441e9c;
    }
  }
  else {
    if (bVar3 < 0x11) {
      if (bVar3 < 0xe) {
        if ((bVar3 == 10) && (dVar30 = (double)mobyfunc::BlendAnimFrame(moby), 29.0 < dVar30)) {
          moby->state = '\x04';
          if (moby->animationId == '\0') {
            return;
          }
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
          return;
        }
        goto LAB_00441e9c;
      }
      if (0xe < bVar3) {
        dVar24 = 2.0;
        (moby->pos).z = (moby->pos).z + 2.0;
        dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
        mobyutil::Delt((float)dVar30,mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
        dVar22 = (double)(moby->pos).z;
        if (dVar30 == dVar22) {
          moby->state = (char)((LZCOUNT(0xf - (uint)moby->state) << 0x3a) >> 0x3f) + '\x14';
        }
        (moby->pos).z = (float)(dVar22 - dVar24);
        goto LAB_00441e9c;
      }
      if ((moby->updateId != '\0') && (moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
      }
      dVar22 = (double)mathfunc::cosf((moby->rotation).z);
      dVar26 = (double)(pfVar7[0x79] * mobyutil::g_FrameTime);
      dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar28 = (double)(moby->pos).x;
      dVar21 = (double)(moby->pos).y;
      local_90 = (float)(dVar26 * dVar22 + dVar28);
      dVar26 = (double)local_90;
      local_88 = (moby->pos).z;
      dVar22 = (double)local_88;
      local_84 = (moby->pos).w;
      local_8c = (float)((double)(pfVar7[0x79] * mobyutil::g_FrameTime) * dVar24 + dVar21);
      dVar24 = (double)local_8c;
      if (MobyUpdateChainStart != (MobyInstance *)0x0) {
        dVar29 = 2.0;
        dVar27 = 1.5707963705062866;
        dVar25 = -1.5707963705062866;
        dVar23 = dVar22;
        pMVar8 = MobyUpdateChainStart;
        do {
          if (((pMVar8 != moby) && (pMVar8->state < 0x80)) &&
             ((pMVar8->oClass == RATCHET || (pMVar8->oClass == 0x2e4)))) {
            dVar20 = (double)(pMVar8->pos).y;
            dVar19 = (double)(pMVar8->pos).x;
            fVar5 = (float)(dVar24 - dVar20);
            fVar1 = (float)(dVar26 - dVar19);
            if ((double)SQRT(fVar1 * fVar1 + fVar5 * fVar5) < dVar29) {
              dVar22 = (double)(moby->rotation).z;
              uVar18 = FUN_005e8338((double)(float)(dVar19 - dVar28),
                                    (double)(float)(dVar20 - dVar21));
              dVar24 = (double)fastfunc::FastDiffRots(dVar22,uVar18);
              dVar22 = dVar25;
              if (dVar30 < dVar24) {
                dVar22 = dVar27;
              }
              dVar22 = (double)fastfunc::FastWrapRot
                                         ((moby->rotation).z,
                                          (float)((double)mobyutil::g_FrameTime * dVar22));
              (moby->rotation).z = (float)dVar22;
              local_90 = (moby->pos).x - (pMVar8->pos).x;
              local_84 = (moby->pos).w;
              local_8c = (moby->pos).y - (pMVar8->pos).y;
              local_88 = (moby->pos).z - (pMVar8->pos).z;
              dVar22 = dVar23;
              FUN_005e7f98(dVar29,&local_90,&local_90);
              local_90 = local_90 + (pMVar8->pos).x;
              dVar26 = (double)local_90;
              dVar28 = (double)(moby->pos).x;
              dVar21 = (double)(moby->pos).y;
              local_88 = (float)dVar22;
              local_8c = local_8c + (pMVar8->pos).y;
              dVar24 = (double)local_8c;
              dVar23 = (double)(moby->pos).z;
            }
          }
          pMVar8 = (MobyInstance *)pMVar8->pChain;
        } while (pMVar8 != (MobyInstance *)0x0);
      }
      (moby->pos).x = (float)dVar26;
      (moby->pos).y = (float)dVar24;
      (moby->pos).z = (float)dVar22;
      (moby->pos).w = local_84;
      dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      fVar5 = -(DAT_0071f418 * 9.8 - pfVar7[0x5e]);
      pfVar7[0x5e] = fVar5;
      fVar5 = (moby->pos).z + fVar5;
      (moby->pos).z = fVar5;
      if ((double)fVar5 < dVar30) {
        pfVar7[0x5e] = 0.0;
        (moby->pos).z = (float)dVar30;
      }
      fVar5 = pfVar7[0x7e];
      if (fVar5 == 0.0) {
LAB_00441e44:
        moby->state = '\x06';
        if (moby->animationId != '\0') {
          local_78 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        }
      }
      else {
        fVar1 = (moby->pos).y - *(float *)((int)fVar5 + 0x14);
        fVar5 = (moby->pos).x - *(float *)((int)fVar5 + 0x10);
        dVar22 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
        dVar30 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pfVar7 + 0x1f6));
        if (dVar30 < dVar22) goto LAB_00441e44;
      }
      moby->setByGroup = '\0';
      goto LAB_00441e9c;
    }
    if (0x13 < bVar3) {
      if (0x14 < bVar3) {
        if (bVar3 < 0x16) {
          uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar7 + 0x40));
          if ((uVar15 & 0x40) != 0) {
            mobyutil::MB_SpawnExplosionSparks
                      (0x3fe0000000000000,0x402a000000000000,lVar12,lVar12 + 0x10,&DAT_00440378,6);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          if ((int)(moby->pos).z < 0) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        goto LAB_00441e9c;
      }
      goto LAB_00441668;
    }
    if (bVar3 < 0x13) {
      dVar24 = 2.0;
      (moby->pos).z = (moby->pos).z + 2.0;
      dVar30 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar12 + 0x10,0);
      mobyutil::Delt((float)(dVar30 + dVar24),mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
      dVar22 = (double)(moby->pos).z;
      if ((dVar30 == (double)(float)(dVar22 - dVar24)) &&
         (moby->state = ((byte)((LZCOUNT(0x11 - (uint)moby->state) << 0x3a) >> 0x3f) & 0xfe) + 6,
         moby->animationId != '\0')) {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
        dVar22 = (double)(moby->pos).z;
      }
      (moby->pos).z = (float)(dVar22 - dVar24);
      goto LAB_00441e9c;
    }
  }
  if (bVar3 == 0x13) {
    iVar14 = 0;
    (moby->pos).z = (moby->pos).z + 2.0;
    do {
      partupd::SpawnPart_28((double)mobyutil::g_FrameTime,lVar12 + 0x10,lVar12 + 0xc0);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 10);
  }
  fVar5 = (moby->pos).x;
  fVar1 = (moby->pos).y;
  if (pfVar7[0x7f] == -NAN) {
    local_e0.x = g_heroPosition.x;
    local_e0.y = g_heroPosition.y;
    local_e0.z = g_heroPosition.z;
    local_e0.w = g_heroPosition.w;
  }
  else {
    path::Path_PickNextNode(moby,Splines[(int)pfVar7[0x7f]],(Vec4 *)&g_heroPosition,&local_e0);
    fVar5 = (moby->pos).x;
    fVar1 = (moby->pos).y;
  }
  dVar30 = (double)FUN_005e8338((double)(local_e0.x - fVar5),(double)(local_e0.y - fVar1));
  mobyutil::OrganicDeltAngSpeed
            ((double)(float)(dVar30 + (double)pfVar7[0x75]),0x3fa99999a0000000,0x3fd3333340000000,
             0x3fc99999a0000000,lVar12);
  dVar22 = (double)mathfunc::cosf((moby->rotation).z);
  dVar30 = 2.0;
  local_f0 = (float)(dVar22 * 2.0);
  dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_ec = (float)(dVar22 * dVar30);
  local_e8 = 0;
  mobyutil::MB_UpdateNavMove
            (0x3ff0000000000000,moby,(MobyInstance *)(pfVar7 + 0x58),&local_f0,&local_e0);
  fVar1 = g_heroPosition.y;
  fVar5 = g_heroPosition.x;
  bVar3 = moby->state;
  dVar22 = (double)g_heroPosition.z;
  uVar16 = moby->animationId;
  dVar24 = (double)(moby->pos).z;
  cVar4 = moby->group;
  if (bVar3 == 0x13) {
    dVar30 = dVar24 - dVar30;
    dVar24 = (double)(float)dVar30;
    (moby->pos).z = (float)dVar30;
  }
  fVar10 = fVar5 - pfVar7[0x6c];
  fVar5 = (moby->pos).x - fVar5;
  fVar11 = (moby->pos).y - fVar1;
  fVar1 = fVar1 - pfVar7[0x6d];
  fVar2 = (float)(dVar22 - (double)pfVar7[0x6e]);
  fVar5 = SQRT(fVar5 * fVar5 + fVar11 * fVar11);
  if ((8.0 <= fVar5) || (bVar3 != 0x13)) {
    if ((1.5 <= fVar5) || (bVar3 != 4)) {
      if ((pfVar7[0x77] + 4.0 <= SQRT(fVar2 * fVar2 + fVar10 * fVar10 + fVar1 * fVar1)) ||
         (8.0 <= ABS((float)(dVar24 - dVar22)))) {
        if (moby->setByGroup != '\x01') {
          moby->state = ((byte)((LZCOUNT(4 - (uint)bVar3) << 0x3a) >> 0x3f) & 0xfc) + 0x14;
        }
      }
      else if (cVar4 != -1) {
        mobyutil::MB_SetGroupField(cVar4,1);
      }
    }
    else {
      moby->state = '\x05';
      if (uVar16 != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar12,1,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else {
    moby->state = '\x11';
    if (uVar16 != '\0') {
      local_78 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar12,0,0,(int)(animationSpeed * 3.5));
    }
  }
  moby->setByGroup = '\0';
LAB_00441e9c:
  mobyutil::MB_ColorDyingMoby(lVar12,uVar17 + 0xf0);
  return;
}



//==== 00441eec  ns=mobyupdate_helpers  size=0x58
// sig: undefined M741_00441eec(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M741_00441eec(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\b') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\b';
  }
  return;
}



//==== 00441f44  ns=mobyupdate_helpers  size=0x58
// sig: undefined M741_00441f44(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M741_00441f44(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}



//==== 00441f9c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M741_00441f9c(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M741_00441f9c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}



//==== 00441ff4  ns=mobyupdate_helpers  size=0x38
// sig: undefined M741_00441ff4(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M741_00441ff4(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 8;
  return;
}



//==== 0044202c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M741_0044202c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M741_0044202c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 0044206c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M741_0044206c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M741_0044206c(void)

{
  DAT_0085a608 = 0x10000;
  return;
}



//==== 00442088  ns=mobyupdate_helpers  size=0x224
// sig: undefined M741_00442088(void)
// callers(1): 00442a70 mobyupdate_unsorted::UpdateMoby_741
// callees(1): 000ff2e8 mobyutil::OrganicDeltAngSpeed

void mobyupdate_helpers::M741_00442088(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xa0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x16] = in_LR;
  fVar1 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar4 - fVar3;
  dVar19 = 0.0;
  fVar1 = *(float *)(param_2 + 0xfc);
  fVar2 = *(float *)(param_2 + 0x100);
  uVar12 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x104);
  fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar6 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar5) {
    lVar16 = uVar11 - 0x90;
    lVar15 = uVar11 - 0x24;
    lVar14 = uVar11 - 0x14;
    lVar18 = 2;
    fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x11) = fVar5;
    *(float *)(puVar8 + 0x10) = fVar5;
    *(float *)((int)puVar8 + 0x84) = fVar5;
    *(float *)((int)puVar8 + 0x7c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar6;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar5;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar5 * fVar5;
      iVar9 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar14 = lVar16;
    lVar15 = lVar13;
    do {
      fVar5 = *pfVar17;
      fVar6 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar9 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar7 + fVar4);
  }
  mobyutil::OrganicDeltAngSpeed
            (dVar19,(double)fVar1,(double)fVar2,(double)fVar3,param_1,param_1,param_2 + 0xd4);
  return;
}



//==== 004422e0  ns=mobyupdate_helpers  size=0x734
// sig: undefined M741_004422e0(void)
// callers(1): 00442a70 mobyupdate_unsorted::UpdateMoby_741
// callees(5): 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly; 00109298 mobyutil::MB_initJump; 005025e0 fastfunc::FastDiffRots

undefined8
mobyupdate_helpers::M741_004422e0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  Vec4 *point;
  int iVar16;
  int iVar17;
  longlong lVar14;
  longlong lVar15;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong unaff_r26;
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
  ulonglong in_f23;
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
  double dVar34;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x23] = in_f23;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x22] = unaff_r31;
  puVar8[0x21] = unaff_r30;
  puVar8[0x1f] = unaff_r28;
  puVar8[0x20] = unaff_r29;
  puVar8[0x1e] = unaff_r27;
  puVar8[0x1d] = unaff_r26;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    if (*(char *)(param_1 + 0x53) != '\x01') {
      puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar8 + 0xdc));
    }
    uVar12 = 0;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xbc);
    if (cVar1 == '\0') {
      iVar17 = *(int *)(param_2 + 600) + 1;
      if (*param_3 + -1 < iVar17) {
        if (*(char *)(param_1 + 0x53) != '\x01') {
          puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar8 + 0xdc));
        }
        *(undefined1 *)(param_1 + 0xbc) = 1;
        *(undefined1 *)(param_1 + 0x20) = 5;
        return 0;
      }
      fVar3 = (float)param_3[iVar17 * 4 + 4] - *(float *)(param_1 + 0x10);
      fVar2 = (float)param_3[iVar17 * 4 + 5] - *(float *)(param_1 + 0x14);
      *(int *)(param_2 + 600) = iVar17;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar2;
      *(float *)((int)puVar8 + 0x94) = fVar4 - fVar7;
      dVar33 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar8 + 0x8c));
      if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar8 + 0x12));
      if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      dVar22 = dVar33;
      if (0.0 < fVar3) {
        lVar14 = uVar11 - 0x150;
        lVar18 = uVar11 - 0xa8;
        lVar20 = uVar11 - 0x98;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0xc4) = fVar3;
        *(float *)((int)puVar8 + 0xbc) = fVar3;
        *(float *)(puVar8 + 0x18) = fVar3;
        *(float *)(puVar8 + 0x17) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
        *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
        *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar11 - 0xa8;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar3 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar18 = 2;
        lVar14 = lVar15;
        do {
          iVar17 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar16 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0xb8)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar22 = (double)fastfunc::FastDiffRots(dVar22,(double)*(float *)(param_1 + 0x48));
      if (dVar22 <= dVar33) {
        *(undefined1 *)(param_2 + 0x14c) = 5;
        *(undefined1 *)(param_2 + 0x14d) = 5;
        *(undefined1 *)(param_2 + 0x14e) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x14c) = 4;
        *(undefined1 *)(param_2 + 0x14d) = 4;
        *(undefined1 *)(param_2 + 0x14e) = 4;
      }
      mobyutil::MB_initJump(param_1,param_2 + 0x120,param_3 + *(int *)(param_2 + 600) * 4 + 4);
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (cVar1 == '\x01') {
      iVar17 = 0;
      dVar34 = -3.1415927410125732;
      dVar32 = 3.1415927410125732;
      dVar31 = 1.570796251296997;
      dVar30 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar33 = 2.601886990305502e-06;
      do {
        dVar23 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar32);
        dVar24 = (double)(float)(dVar23 + dVar31);
        dVar23 = (double)(float)(dVar30 - dVar24);
        if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
          dVar23 = dVar24;
        }
        fVar3 = *(float *)(param_1 + 0x10);
        dVar25 = (double)(float)(dVar29 - dVar24);
        if ((double)(float)(dVar29 - dVar24) - dVar23 < 0.0) {
          dVar25 = dVar23;
        }
        fVar7 = *(float *)(param_1 + 0x14);
        fVar4 = *(float *)(param_2 + 0x254);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
        dVar23 = (double)(float)(dVar25 * dVar25);
        dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
        dVar26 = (double)(float)(dVar23 * dVar24);
        fVar2 = (float)((double)(float)(dVar23 * dVar26) * dVar33 +
                       (double)(float)(dVar26 * dVar22 +
                                      (double)(float)(dVar24 * dVar27 +
                                                     (double)(float)((double)(float)(dVar23 * dVar25
                                                                                    ) * dVar28 +
                                                                    dVar25))));
        *(float *)(puVar8 + 0xe) = fVar4 * fVar2 + fVar3;
        *(float *)((int)puVar8 + 0x74) = fVar4 * fVar2 + fVar7;
        point = (Vec4 *)(uVar11 - 0xf0);
      } while (((param_4 == (undefined4 *)0x0) ||
               (iVar16 = mobyutil::PointInsideComplexPoly(point,(Vec4 *)(param_4 + 4),*param_4),
               iVar16 == 0)) && (iVar17 = iVar17 + 1, iVar17 < 10));
      iVar17 = mobyutil::PointInsideComplexPoly(point,(Vec4 *)(param_4 + 4),*param_4);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar2 = *(float *)(param_1 + 0x14);
      fVar7 = *(float *)(param_1 + 0x48);
      fVar4 = *(float *)(puVar8 + 0xe);
      fVar6 = *(float *)((int)puVar8 + 0x74);
      if (iVar17 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
        *(float *)(puVar8 + 0xe) = fVar3;
        *(float *)((int)puVar8 + 0x74) = fVar2;
        fVar4 = fVar3;
        fVar6 = fVar2;
      }
      fVar10 = ABS(fVar4 - fVar3);
      fVar9 = ABS(fVar6 - fVar2);
      *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
      *(float *)((int)puVar8 + 0x84) = fVar6 - fVar2;
      *(float *)(puVar8 + 0x11) = fVar10 - fVar9;
      dVar33 = 0.0;
      uVar13 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar8 + 0x10));
      if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
        fVar3 = fVar9;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar8 + 0x84));
      if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
        fVar6 = fVar10;
      }
      dVar22 = dVar33;
      if (0.0 < fVar3) {
        lVar14 = uVar11 - 0x150;
        lVar20 = uVar11 - 0xb8;
        lVar18 = uVar11 - 200;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0xa4) = fVar3;
        *(float *)((int)puVar8 + 0x9c) = fVar3;
        *(float *)(puVar8 + 0x14) = fVar3;
        *(float *)(puVar8 + 0x13) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
        *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
        *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar11 - 200;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar3 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar17 = (int)lVar15;
          iVar16 = (int)lVar20;
          lVar15 = lVar15 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0x98)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar4 + fVar2);
      }
      dVar22 = (double)fastfunc::FastDiffRots(dVar22,(double)fVar7);
      if (dVar22 <= dVar33) {
        *(undefined1 *)(param_2 + 0x14c) = 5;
        *(undefined1 *)(param_2 + 0x14d) = 5;
        *(undefined1 *)(param_2 + 0x14e) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x14c) = 4;
        *(undefined1 *)(param_2 + 0x14d) = 4;
        *(undefined1 *)(param_2 + 0x14e) = 4;
      }
      mobyutil::MB_initJump(param_1,param_2 + 0x120,uVar11 - 0xf0);
    }
    uVar12 = 1;
  }
  return uVar12;
}



//==== 00442a70  ns=mobyupdate_unsorted  size=0x1428
// sig: undefined UpdateMoby_741(void * this, MobyInstance * moby)
// callers(0): 
// callees(26): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000ef74c mobyfunc::UpdateMobyFrameData; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00104e44 mobyutil::PointInsideComplexPoly; 0010581c mobyutil::SetCollDamIn; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 001095b8 mobyutil::MB_updateJump; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 001367d0 path::PathFindClosestPnt; 00442088 mobyupdate_helpers::M741_00442088; 004422e0 mobyupdate_helpers::M741_004422e0; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 005c8318 rand

/* Moby 741 */

void __thiscall mobyupdate_unsorted::UpdateMoby_741(void *this,MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined8 uVar30;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  Spline *pSVar31;
  ulonglong unaff_r28;
  Spline *spline;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x220;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar19;
  puVar13[0x46] = in_LR;
  puVar13[0x43] = in_f31;
  puVar13[0x42] = unaff_r31;
  puVar13[0x41] = unaff_r30;
  puVar13[0x40] = unaff_r29;
  puVar13[0x3f] = unaff_r28;
  puVar13[0x3e] = unaff_r27;
  puVar13[0x3d] = unaff_r26;
  puVar13[0x3c] = unaff_r25;
  puVar13[0x3b] = unaff_r24;
  puVar13[0x3a] = unaff_r23;
  if (this == (void *)0x0) {
    return;
  }
  uVar23 = *(uint *)((int)this + 0x78);
  uVar32 = (ulonglong)uVar23;
  if (uVar23 == 0) {
    return;
  }
  uVar30 = 0;
  spline = (Spline *)0x0;
  pSVar31 = (Spline *)0x0;
  mobyutil::MB_getTarget((double)*(float *)(uVar23 + 0x230),this,moby,uVar19 - 0xf0);
  iVar20 = *(int *)(puVar13 + 0x2e);
  if (*(int *)(uVar23 + 0x24c) != -1) {
    spline = Splines[*(int *)(uVar23 + 0x24c)];
  }
  if (*(int *)(uVar23 + 0x248) != -1) {
    pSVar31 = Splines[*(int *)(uVar23 + 0x248)];
    iVar20 = mobyutil::PointInsideComplexPoly
                       ((Vec4 *)(puVar13 + 0x26),(Vec4 *)pSVar31->points,pSVar31->cnt);
  }
  bVar1 = *(int *)(uVar23 + 0x38) != 0;
  if (bVar1) {
    *(undefined4 *)(uVar23 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar32 + 0x25c);
  if (*(char *)((int)this + 0x20) != '\f') {
    dVar37 = 0.0;
    *(undefined4 *)((int)puVar13 + 0x184) = 0;
    pfVar21 = (float *)mobyutil::MB_damage(this,0x330000,0);
    iVar22 = mobyutil::MB_HandleDamage
                       ((MobyInstance *)this,pfVar21,uVar32 + 0x20,0,puVar13 + 0x30,0,0,4);
    if (1 < *(int *)(puVar13 + 0x30)) {
      fVar9 = *(float *)((int)this + 0x10) - *pfVar21;
      fVar3 = *(float *)((int)this + 0x14) - pfVar21[1];
      dVar34 = ABS((double)fVar9);
      dVar35 = ABS((double)fVar3);
      *(float *)(puVar13 + 0x31) = fVar9;
      *(float *)((int)puVar13 + 0x18c) = fVar3;
      *(float *)(puVar13 + 0x32) = (float)(dVar34 - dVar35);
      uVar28 = (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x32) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)(puVar13 + 0x31));
      if ((double)*(float *)(puVar13 + 0x32) - dVar37 < 0.0) {
        dVar36 = dVar35;
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar13 + 0x18c));
      if ((double)*(float *)(puVar13 + 0x32) - dVar37 < 0.0) {
        dVar35 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      if (dVar37 < dVar36) {
        lVar24 = uVar19 - 0x210;
        lVar26 = uVar19 - 0x8c;
        lVar29 = uVar19 - 0x7c;
        lVar33 = 2;
        fVar5 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x34) = fVar5;
        *(float *)(puVar13 + 0x33) = fVar5;
        *(float *)((int)puVar13 + 0x19c) = fVar5;
        *(float *)((int)puVar13 + 0x194) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x33) = *(float *)(puVar13 + 0x33) * fVar4;
        *(float *)((int)puVar13 + 0x19c) = *(float *)((int)puVar13 + 0x19c) * fVar5;
        *(float *)(puVar13 + 0x34) = *(float *)(puVar13 + 0x34) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar24 + 0x194) = *(float *)((int)lVar24 + 0x184) * fVar5 * fVar5;
          iVar14 = (int)lVar26;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0x8c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar29;
        do {
          fVar5 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0x194) = *(float *)((int)lVar24 + 0x194) * fVar5;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar24 = 2;
        do {
          iVar14 = (int)lVar25;
          iVar15 = (int)lVar29;
          lVar25 = lVar25 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar14 + 0x194)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar9 + fVar3);
      }
      *(float *)((int)puVar13 + 0x184) = (float)dVar37;
      fVar9 = DAT_0071f418;
      *(undefined1 *)(uVar23 + 0x9d) = 0;
      *(undefined4 *)(uVar23 + 0x84) = 9;
      *(undefined4 *)(uVar23 + 0x74) = 0x3a03126f;
      *(float *)(uVar23 + 0x70) = fVar9 * 29.0;
    }
    fVar9 = mobyutil::g_FrameTime;
    if (iVar22 < 4) {
      if (0 < iVar22) {
        if (iVar22 < 2) {
          *(undefined4 *)(uVar23 + 0x20) = 0;
        }
        else if (iVar22 < 3) {
          *(undefined4 *)(uVar23 + 0x20) = 0;
        }
        else {
LAB_00442e28:
          *(float *)(uVar23 + 0x78) = mobyutil::g_FrameTime * 10.0;
          *(float *)(uVar23 + 0x7c) = fVar9 * 4.0;
          fVar9 = pfVar21[6];
          *(float *)(puVar13 + 6) = pfVar21[4];
          *(float *)(puVar13 + 7) = fVar9;
          fVar9 = pfVar21[7];
          *(float *)((int)puVar13 + 0x34) = pfVar21[5];
          *(float *)((int)puVar13 + 0x3c) = fVar9;
          mobyutil::MB_VecAtan2Angles
                    (puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c);
          mobyutil::MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this,uVar32 + 0x60);
          *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
          *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
          *(undefined1 *)((int)this + 0x20) = 10;
        }
      }
    }
    else if (iVar22 < 8) {
      if (iVar22 < 6) {
        fVar9 = mobyutil::g_FrameTime * 14.0;
        *(float *)(uVar23 + 0x7c) = mobyutil::g_FrameTime * 5.0;
        *(float *)(uVar23 + 0x78) = fVar9;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        mobyutil::MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this + 0x20) = 10;
      }
      else {
        if (iVar22 < 7) goto LAB_00442e28;
        fVar9 = mobyutil::g_FrameTime * 12.0;
        *(float *)(uVar23 + 0x7c) = mobyutil::g_FrameTime * 5.0;
        *(float *)(uVar23 + 0x78) = fVar9;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        mobyutil::MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this + 0x20) = 10;
      }
    }
    else if (((iVar22 < 0xb) && (*(char *)((int)this + 0x20) != '\x04')) &&
            (worldUpdateTime ==
             (((int)worldUpdateTime >> 1) +
             (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * 2)) {
      iVar22 = rand();
      *(undefined1 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x54) = 0x3f666666;
      *(char *)((int)this + 0x52) = (char)iVar22 + (char)(iVar22 / 0xc) * -0xc;
      dVar37 = (double)fastfunc::FastIntToDouble(0xd);
      *(float *)((int)this + 0x5c) = (float)(1.0 / dVar37);
      mobyfunc::UpdateMobyFrameData((MobyInstance *)this);
    }
    if (1 < *(int *)(puVar13 + 0x30)) {
      uVar10 = (int)*(uint *)(uVar23 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar21[0xb] >> 0x1f;
      fVar9 = pfVar21[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar21[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)(uVar23 + 0x20)) - uVar10)) {
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        *(undefined1 *)(uVar23 + 0x117) = 0xfa;
        auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        *(float *)(uVar23 + 0x20) = *(float *)(uVar23 + 0x20) - fVar9;
        auVar38 = loadVectorLeftIndexed(0x28,0x442a14);
        auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = vectorMultiplyAddFloatingPoint
                            (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                             auVar39);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = vectorSplatHalfWord(auVar38,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar38,0x26,uVar32);
        *(undefined2 *)(uVar23 + 0x26) = uVar12;
        mobyutil::MB_UpdateLightsTransition(this,uVar32 + 0x110);
      }
      else {
        *(undefined4 *)(uVar23 + 0x20) = 0;
        *(undefined1 *)((int)this + 0x20) = 0xc;
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) & 0xefff;
        if (((uint)pfVar21[0xc] & 1) != 0) {
          fVar9 = pfVar21[4];
          *(float *)(uVar23 + 0x220) = fVar9;
          fVar3 = pfVar21[5];
          *(float *)(uVar23 + 0x224) = fVar3;
          fVar5 = pfVar21[6];
          *(float *)(uVar23 + 0x228) = fVar5;
          *(float *)(uVar23 + 0x22c) = pfVar21[7];
          fVar4 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar3 * fVar3);
          if (*(float *)(uVar23 + 0xe4) < fVar4) {
            fVar4 = *(float *)(uVar23 + 0xe4) / fVar4;
            *(float *)(uVar23 + 0x220) = fVar9 * fVar4;
            *(float *)(uVar23 + 0x224) = fVar3 * fVar4;
            *(float *)(uVar23 + 0x228) = fVar5 * fVar4;
          }
        }
        fVar9 = mobyutil::g_FrameTime;
        *(float *)(uVar23 + 0x78) = mobyutil::g_FrameTime * 4.0;
        *(float *)(uVar23 + 0x7c) = fVar9 * 8.0;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        mobyutil::MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40400000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x40f00000;
        *(undefined1 *)(uVar23 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(this,uVar32 + 0x110);
      }
    }
    *(undefined1 *)((int)this + 0xa4) = 0xff;
  }
  mobyutil::MB_ColorDyingMoby(this,uVar32 + 0x110);
  bVar2 = *(byte *)((int)this + 0x20);
  if (5 < bVar2) {
    if (8 < bVar2) {
      if (0xb < bVar2) {
        if (0xc < bVar2) {
          return;
        }
        uVar23 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar23 + 0x60));
        if ((uVar23 & 0x40) == 0) {
          return;
        }
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this,uVar32 + 0x220,0,1,0xffffffffffffffff,3,3,5);
        mobyfunc::DeleteMoby((MobyInstance *)this);
        return;
      }
      if (9 < bVar2) {
        uVar23 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar23 + 0x60));
        if ((uVar23 & 0x40) == 0) {
          return;
        }
        if (*(char *)((int)this + 0xbc) == '\0') {
          *(undefined1 *)((int)this + 0x20) = 3;
          if (*(char *)((int)this + 0x53) == '\x01') {
            return;
          }
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
          return;
        }
        if (*(char *)((int)this + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this + 0x20) = 5;
        return;
      }
      if ((*(byte *)((int)this + 0x70) & 2) == 0) {
        return;
      }
      if (*(char *)((int)this + 0xbc) == '\0') {
        *(undefined1 *)((int)this + 0x20) = 3;
        if (*(char *)((int)this + 0x53) == '\x01') {
          return;
        }
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        return;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this + 0x20) = 5;
      return;
    }
    if (6 < bVar2) {
      if (7 < bVar2) {
        if ((*(byte *)((int)this + 0x70) & 2) == 0) {
          return;
        }
        if (*(char *)((int)this + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this + 0x20) = 5;
        return;
      }
      *(undefined1 *)((int)this + 0xbc) = 1;
      dVar37 = (double)mobyfunc::BlendAnimFrame((MobyInstance *)this);
      if ((dVar37 <= 16.0) || (26.5 <= dVar37)) {
        if ((dVar37 <= 34.0) || (48.0 <= dVar37)) goto LAB_00443b68;
      }
      else {
        uVar30 = 1;
      }
      mobyfunc::GetBonePosition(this,uVar30,uVar19 - 0x140);
      fVar9 = *(float *)((int)puVar13 + 0xe4) - *(float *)((int)this + 0x14);
      fVar3 = *(float *)(puVar13 + 0x1c) - *(float *)((int)this + 0x10);
      fVar5 = *(float *)(puVar13 + 0x1d) - *(float *)(puVar13 + 0x1d);
      *(undefined4 *)((int)puVar13 + 0xfc) = *(undefined4 *)((int)puVar13 + 0xec);
      fVar17 = 0.0;
      fVar18 = fVar5 * fVar5 + fVar3 * fVar3 + fVar9 * fVar9;
      fVar4 = fVar17;
      fVar16 = fVar17;
      if (SQRT(fVar18) != 0.0) {
        fVar17 = 1.0 / SQRT(fVar18);
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar16 = fVar3 * fVar17;
        fVar4 = fVar9 * fVar17;
        fVar17 = fVar5 * fVar17;
      }
      *(float *)(puVar13 + 0x1e) = fVar16;
      *(float *)((int)puVar13 + 0xf4) = fVar4;
      *(float *)(puVar13 + 0x1f) = fVar17;
      mobyutil::SetCollDamIn((double)*(float *)(uVar23 + 0x238),uVar19 - 0x120,this,1);
      iVar20 = collproc::CollMobySphere((double)*(float *)(uVar23 + 0x23c),uVar19 - 0x140);
      if ((iVar20 != 0) && (CollOutput.pMoby == *(MobyInstance **)(puVar13 + 0x2e))) {
        if (*(char *)((int)this + 0x53) != '\a') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(this,7,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this + 0x20) = 8;
      }
LAB_00443b68:
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        if (*(char *)((int)this + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this + 0x20) = 5;
      }
      mobyupdate_helpers::M741_00442088(this,uVar32,uVar19 - 0xf0);
      return;
    }
    *(undefined1 *)((int)this + 0xbc) = 1;
    mobyupdate_helpers::M741_00442088(this,uVar32,uVar19 - 0xf0);
    iVar22 = *(int *)(puVar13 + 0x2e);
    if (iVar22 != 0) {
      mobyutil::MB_UpdateNavMoveTurning(this,uVar32 + 0xc0,uVar19 - 0xf0,uVar32 + 0x220);
      iVar22 = *(int *)(puVar13 + 0x2e);
    }
    fVar9 = *(float *)((int)this + 0x14) - *(float *)((int)puVar13 + 0x134);
    fVar3 = *(float *)((int)this + 0x10) - *(float *)(puVar13 + 0x26);
    if (*(int *)(uVar23 + 0x25c) == 0) {
      if (iVar22 == 0) goto LAB_00443920;
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < *(float *)(uVar23 + 0x234)) {
        if (*(char *)((int)this + 0x53) != '\x06') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(this,6,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar38 = loadVectorLeftIndexed(0x240,uVar32);
        auVar39 = loadVectorRightIndexed(0x250,uVar32);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
        auVar38 = loadVectorLeftIndexed(0x3c,0x442a14);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint
                            (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x25c,
                           uVar32);
        *(undefined4 *)(uVar23 + 0x25c & 0xfffffffc) = uVar6;
        *(undefined1 *)((int)this + 0x20) = 7;
        return;
      }
    }
    if ((iVar22 != 0) && (iVar20 != 0)) {
      return;
    }
LAB_00443920:
    if (bVar1) {
      return;
    }
    if (*(char *)((int)this + 0x53) != '\x01') {
      puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
      mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
    }
    *(undefined1 *)((int)this + 0x20) = 5;
    return;
  }
  if (bVar2 != 5) {
    if (bVar2 == 4) {
      mobyupdate_helpers::M741_00442088(this,uVar32,uVar19 - 0xf0);
      iVar20 = mobyutil::MB_updateJump(this,uVar32 + 0x120);
      if (iVar20 != 4) {
        return;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
      return;
    }
    if (bVar2 == 3) {
      if (((*(int *)(puVar13 + 0x2e) == 0) || (iVar20 == 0)) && (!bVar1)) {
        return;
      }
      iVar20 = mobyupdate_helpers::M741_004422e0(this,uVar32,spline,pSVar31);
      if (iVar20 == 0) {
        return;
      }
      *(undefined1 *)((int)this + 0x20) = 4;
      return;
    }
    if (bVar2 == 2) {
      mobyupdate_helpers::M741_00442088(this,uVar32,uVar19 - 0xf0);
      if ((*(byte *)((int)this + 0x70) & 2) == 0) {
        return;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this + 0x20) = 3;
      return;
    }
    if (bVar2 != 1) {
      if (bVar2 != 0) {
        return;
      }
      *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 0x1000;
      *(undefined1 *)(uVar23 + 0x220) = 0;
      *(undefined1 *)(uVar23 + 0x221) = 0;
      *(undefined1 *)(uVar23 + 0x222) = 0;
      *(undefined1 *)(uVar23 + 0x223) = 0;
      *(undefined1 *)(uVar23 + 0x224) = 0;
      *(undefined1 *)(uVar23 + 0x225) = 0;
      *(undefined1 *)(uVar23 + 0x226) = 0;
      *(undefined1 *)(uVar23 + 0x227) = 0;
      *(undefined1 *)(uVar23 + 0x228) = 0;
      *(undefined1 *)(uVar23 + 0x229) = 0;
      *(undefined1 *)(uVar23 + 0x22a) = 0;
      *(undefined1 *)(uVar23 + 0x22b) = 0;
      *(undefined1 *)(uVar23 + 0x22c) = 0;
      *(undefined1 *)(uVar23 + 0x22d) = 0;
      *(undefined1 *)(uVar23 + 0x22e) = 0;
      *(undefined1 *)(uVar23 + 0x22f) = 0;
      uVar6 = *(undefined4 *)((int)this + 0x10);
      uVar7 = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)(puVar13 + 0x1a) = uVar6;
      uVar8 = *(undefined4 *)((int)this + 0x1c);
      *(undefined4 *)((int)puVar13 + 0xd4) = uVar7;
      *(undefined4 *)((int)puVar13 + 0xdc) = uVar8;
      fVar9 = *(float *)((int)this + 0x18);
      *(undefined4 *)(puVar13 + 0x18) = uVar6;
      *(undefined4 *)((int)puVar13 + 0xc4) = uVar7;
      *(undefined4 *)((int)puVar13 + 0xcc) = uVar8;
      *(float *)(puVar13 + 0x1b) = fVar9 + 1.0;
      *(float *)(puVar13 + 0x19) = fVar9 - 9.0;
      iVar20 = collproc::CollLine(uVar19 - 0x150,uVar19 - 0x160,2,this,0);
      fVar3 = CollOutput.ip.x;
      fVar9 = *(float *)((int)this + 0x10);
      if (iVar20 != 0) {
        *(float *)((int)this + 0x10) = CollOutput.ip.x;
        *(float *)((int)this + 0x14) = CollOutput.ip.y;
        fVar9 = CollOutput.ip.z;
        *(float *)((int)this + 0x1c) = CollOutput.ip.w;
        *(float *)((int)this + 0x18) = fVar9 + 0.01;
        fVar9 = fVar3;
      }
      *(float *)(uVar23 + 0x210) = fVar9;
      *(undefined4 *)(uVar23 + 0x214) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)(uVar23 + 0x218) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)(uVar23 + 0x21c) = *(undefined4 *)((int)this + 0x1c);
      if (spline != (Spline *)0x0) {
        iVar20 = path::PathFindClosestPnt(0.0,(Vec4 *)((int)this + 0x10),spline);
        *(int *)(uVar23 + 600) = iVar20;
      }
      if (*(char *)((int)this + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(this,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this + 0x20) = 1;
      return;
    }
    if (((*(int *)(puVar13 + 0x2e) == 0) || (iVar20 == 0)) && (!bVar1)) {
      return;
    }
    *(undefined1 *)((int)this + 0x20) = 2;
    if (*(char *)((int)this + 0x53) == '\x02') {
      return;
    }
    puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(this,2,0,*(undefined4 *)((int)puVar13 + 0x1bc));
    return;
  }
  *(undefined1 *)((int)this + 0xbc) = 1;
  mobyupdate_helpers::M741_00442088(this,uVar32,uVar19 - 0xf0);
  fVar5 = animationSpeed;
  fVar9 = *(float *)((int)this + 0x14) - *(float *)((int)puVar13 + 0x134);
  fVar3 = *(float *)((int)this + 0x10) - *(float *)(puVar13 + 0x26);
  if (*(int *)(uVar23 + 0x25c) == 0) {
    if (*(int *)(puVar13 + 0x2e) != 0) {
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < *(float *)(uVar23 + 0x234)) {
        auVar38 = ZEXT416(0xffffffff);
        auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x240,uVar32);
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorRightIndexed(0x250,uVar32);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
        auVar38 = loadVectorLeftIndexed(0x3c,0x442a14);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint
                            (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x25c,
                           uVar32);
        *(undefined4 *)(uVar23 + 0x25c & 0xfffffffc) = uVar6;
        if (*(char *)((int)this + 0x53) != '\x06') {
          puVar13[0x37] = (longlong)(int)(fVar5 * 10.5);
          mobyutil::MB_SetAnimation(this,6,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this + 0x20) = 7;
        return;
      }
      goto LAB_00443774;
    }
  }
  else {
LAB_00443774:
    if ((*(int *)(puVar13 + 0x2e) != 0) && (iVar20 != 0)) goto LAB_0044378c;
  }
  if (!bVar1) {
    return;
  }
LAB_0044378c:
  if (*(char *)((int)this + 0x53) != '\x03') {
    puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(this,3,0,*(undefined4 *)((int)puVar13 + 0x1bc));
  }
  *(undefined1 *)((int)this + 0x20) = 6;
  return;
}



//==== 00443ea0  ns=mobyupdate_unsorted  size=0x230
// sig: undefined UpdateMoby_743(MobyInstance * moby)
// callers(0): 
// callees(2): 00110488 mobyutil::ClampVec3Magnitude; 0015d12c sound::PlayMobySound

/* Moby 743 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_743(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  u8 *puVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Vec4 local_40;
  
  bVar1 = moby->state;
  pMVar8 = (MobyInstance *)moby->pVar;
  local_40.x = (moby->pos).x;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (pMVar8->bSphere).x = local_40.x;
      (pMVar8->bSphere).y = (moby->pos).y;
      (pMVar8->bSphere).z = (moby->pos).z;
      (pMVar8->bSphere).rad = (moby->pos).w;
      moby->state = '\x01';
    }
    else {
      pMVar8 = (MobyInstance *)(pMVar8->pos).x;
      if (-1 < (int)pMVar8) {
        pMVar8 = MobyInstance + (int)pMVar8;
        if (((pMVar8->oClass == TRESSPASSER_PAD) || (pMVar8->oClass == 0x23f)) &&
           (puVar5 = &pMVar8->state, pMVar8 = (MobyInstance *)(uint)*puVar5, *puVar5 == 4)) {
          moby->state = '\x02';
          pMVar8 = (MobyInstance *)sound::PlayMobySound(0,0,moby);
        }
      }
    }
  }
  else if (bVar1 < 3) {
    fVar2 = (moby->transform).v1.y;
    fVar3 = (moby->transform).v1.x;
    fVar4 = (moby->transform).v1.z;
    dVar12 = 0.0;
    fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    local_40.w = (pMVar8->bSphere).rad;
    fVar7 = 2.0 / fVar6;
    dVar11 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar10 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar10 = (double)(fVar2 * fVar7);
    }
    dVar9 = dVar12;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(fVar3 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar10 = (double)(fVar2 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(fVar3 * fVar7);
    }
    local_40.z = (float)((double)(pMVar8->bSphere).z + dVar11) - (moby->pos).z;
    local_40.y = (float)((double)(pMVar8->bSphere).y + dVar10) - (moby->pos).y;
    local_40.x = (float)((double)(pMVar8->bSphere).x + dVar9) - local_40.x;
    pMVar8 = (MobyInstance *)
             mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 2.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if ((double)SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y) ==
        dVar12) {
      sound::PlayMobySound(1,0,moby);
      pMVar8 = (MobyInstance *)0x3;
      moby->state = '\x03';
    }
  }
  return pMVar8;
}



//==== 004440e0  ns=mobyupdate_unsorted  size=0x208
// sig: undefined UpdateMoby_744(MobyInstance * moby)
// callers(0): 
// callees(1): 00110488 mobyutil::ClampVec3Magnitude

/* Moby 744 */

void mobyupdate_unsorted::UpdateMoby_744(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_40;
  
  bVar1 = moby->state;
  pfVar4 = (float *)moby->pVar;
  local_40.x = (moby->pos).x;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *pfVar4 = local_40.x;
      pfVar4[1] = (moby->pos).y;
      pfVar4[2] = (moby->pos).z;
      pfVar4[3] = (moby->pos).w;
      moby->state = '\x01';
    }
    else {
      fVar5 = pfVar4[4];
      if (-1 < (int)fVar5) {
        if (((MobyInstance[(int)fVar5].oClass == TRESSPASSER_PAD) ||
            (MobyInstance[(int)fVar5].oClass == 0x23f)) &&
           (MobyInstance[(int)fVar5].state == '\x04')) {
          moby->state = '\x02';
        }
      }
    }
  }
  else if (bVar1 < 3) {
    fVar5 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    dVar11 = 0.0;
    local_40.w = pfVar4[3];
    fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar5 * fVar5);
    fVar7 = -2.0 / fVar6;
    dVar10 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar10 = (double)(fVar3 * fVar7);
    }
    dVar9 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(fVar5 * fVar7);
    }
    dVar8 = dVar11;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(fVar2 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar10 = (double)(fVar3 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(fVar5 * fVar7);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(fVar2 * fVar7);
    }
    local_40.z = (float)((double)pfVar4[2] + dVar10) - (moby->pos).z;
    local_40.y = (float)((double)pfVar4[1] + dVar9) - (moby->pos).y;
    local_40.x = (float)((double)*pfVar4 + dVar8) - local_40.x;
    mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 2.0),&local_40);
    (moby->pos).x = (moby->pos).x + local_40.x;
    (moby->pos).y = (moby->pos).y + local_40.y;
    (moby->pos).z = (moby->pos).z + local_40.z;
    if ((double)SQRT(local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y) ==
        dVar11) {
      moby->state = '\x03';
    }
  }
  return;
}



//==== 004442f8  ns=mobyupdate_helpers  size=0x138
// sig: undefined M745_004442f8(void)
// callers(0): 
// callees(1): 005cd098 libc::printf
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void mobyupdate_helpers::M745_004442f8(int param_1,float *param_2)

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
  
  libc::printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x19);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = 0.0;
  fVar5 = *(float *)(param_1 + 0xe4);
  fVar6 = *(float *)(param_1 + 0xe8);
  fVar7 = *(float *)(param_1 + 0xe0);
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar8 = fVar4;
  fVar9 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar9 = fVar2 * fVar4;
    fVar8 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  fVar1 = fVar5 * fVar4 - fVar6 * fVar8;
  fVar3 = fVar6 * fVar9 - fVar7 * fVar4;
  fVar2 = fVar7 * fVar8 - fVar5 * fVar9;
  *(float *)(param_1 + 0xd0) = fVar1;
  *(float *)(param_1 + 0xd4) = fVar3;
  *(float *)(param_1 + 0xd8) = fVar2;
  *(float *)(param_1 + 0xc4) = fVar2 * fVar7 - fVar1 * fVar6;
  *(float *)(param_1 + 200) = fVar1 * fVar5 - fVar3 * fVar7;
  *(float *)(param_1 + 0xc0) = fVar3 * fVar6 - fVar2 * fVar5;
  return;
}



//==== 00444440  ns=mobyupdate_helpers  size=0x138
// sig: undefined M745_00444440(void)
// callers(1): 00444a50 mobyupdate_unsorted::UpdateMoby_745
// callees(1): 005cd098 libc::printf
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void mobyupdate_helpers::M745_00444440(int param_1,float *param_2)

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
  
  libc::printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x2c);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = 0.0;
  fVar5 = *(float *)(param_1 + 0xd4);
  fVar6 = *(float *)(param_1 + 0xd8);
  fVar7 = *(float *)(param_1 + 0xd0);
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar8 = fVar4;
  fVar9 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar9 = fVar2 * fVar4;
    fVar8 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  fVar1 = fVar5 * fVar4 - fVar6 * fVar8;
  fVar3 = fVar6 * fVar9 - fVar7 * fVar4;
  fVar2 = fVar7 * fVar8 - fVar5 * fVar9;
  *(float *)(param_1 + 0xc0) = fVar1;
  *(float *)(param_1 + 0xc4) = fVar3;
  *(float *)(param_1 + 200) = fVar2;
  *(float *)(param_1 + 0xe4) = fVar2 * fVar7 - fVar1 * fVar6;
  *(float *)(param_1 + 0xe8) = fVar1 * fVar5 - fVar3 * fVar7;
  *(float *)(param_1 + 0xe0) = fVar3 * fVar6 - fVar2 * fVar5;
  return;
}



//==== 00444588  ns=mobyupdate_helpers  size=0x304
// sig: undefined M745_00444588(void)
// callers(1): 00444a50 mobyupdate_unsorted::UpdateMoby_745
// callees(2): 00057820 collproc::CollLine; 005cd098 libc::printf
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

double mobyupdate_helpers::M745_00444588
                 (int param_1,int param_2,float *param_3,float *param_4,float *param_5)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  
  libc::printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x40);
  fVar1 = *(float *)(param_1 + 0xe4);
  fVar2 = *(float *)(param_1 + 0xe0);
  fVar3 = *(float *)(param_1 + 0xe8);
  dVar14 = 0.0;
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar8 == 0.0) {
    fVar7 = *(float *)(param_1 + 0xec);
  }
  else {
    fVar7 = *(float *)(param_1 + 0xec);
  }
  fVar9 = -*(float *)(param_2 + 0xf4) / fVar8;
  dVar11 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar11 = (double)(fVar3 * fVar9);
  }
  dVar12 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar12 = (double)(fVar1 * fVar9);
  }
  dVar13 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar13 = (double)(fVar2 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar11 = (double)(fVar3 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar12 = (double)(fVar1 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar13 = (double)(fVar2 * fVar9);
  }
  iVar10 = collproc::CollLine(local_70,local_60,2,param_1,0);
  if (iVar10 == 0) {
    *param_4 = (float)(dVar13 + (double)fVar4);
    param_4[1] = (float)(dVar12 + (double)fVar5);
    param_4[2] = (float)(dVar11 + (double)fVar6);
    param_4[3] = fVar7;
    *param_5 = *(float *)(param_1 + 0xe0);
    param_5[1] = *(float *)(param_1 + 0xe4);
    param_5[2] = *(float *)(param_1 + 0xe8);
    param_5[3] = *(float *)(param_1 + 0xec);
    fVar1 = 100000.0;
  }
  else {
    *param_4 = CollOutput.ip.x;
    param_4[1] = CollOutput.ip.y;
    param_4[2] = CollOutput.ip.z;
    param_4[3] = CollOutput.ip.w;
    fVar1 = CollOutput.normal.z * CollOutput.normal.z +
            CollOutput.normal.x * CollOutput.normal.x + CollOutput.normal.y * CollOutput.normal.y;
    if ((double)SQRT(fVar1) == dVar14) {
      *param_5 = CollOutput.normal.x;
      param_5[1] = CollOutput.normal.y;
      param_5[2] = CollOutput.normal.z;
      fVar1 = CollOutput.normal.w;
      param_5[2] = 0.0;
      param_5[3] = fVar1;
      param_5[1] = 0.0;
      *param_5 = 0.0;
    }
    else {
      fVar2 = 1.0 / SQRT(fVar1);
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      *param_5 = CollOutput.normal.x * fVar2;
      param_5[1] = CollOutput.normal.y * fVar2;
      param_5[2] = CollOutput.normal.z * fVar2;
      param_5[3] = CollOutput.normal.w;
    }
    fVar1 = SQRT((param_3[2] - CollOutput.ip.z) * (param_3[2] - CollOutput.ip.z) +
                 (*param_3 - CollOutput.ip.x) * (*param_3 - CollOutput.ip.x) +
                 (param_3[1] - CollOutput.ip.y) * (param_3[1] - CollOutput.ip.y));
  }
  return (double)fVar1;
}



//==== 0044488c  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M745_0044488c(void)
// callers(1): 00444a50 mobyupdate_unsorted::UpdateMoby_745
// callees(4): 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 005cd098 libc::printf
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void mobyupdate_helpers::M745_0044488c(MobyInstance *param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int local_30 [4];
  
  libc::printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x59);
  if (param_1->state != '\n') {
    iVar8 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar8,param_3,0,local_30,0,0,4);
    if (1 < local_30[0]) {
      pfVar9 = (float *)param_3;
      uVar5 = (int)*pfVar9 >> 0x1f;
      uVar6 = (int)*(uint *)(iVar8 + 0x2c) >> 0x1f;
      if ((int)((uVar6 >> 1 ^ *(uint *)(iVar8 + 0x2c)) - uVar6) <
          (int)((uVar5 >> 1 ^ (uint)*pfVar9) - uVar5)) {
        *pfVar9 = *pfVar9 - *(float *)(iVar8 + 0x2c);
      }
      else {
        MVar4 = param_1->modeBits;
        *pfVar9 = 0.0;
        param_1->modeBits =
             MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\t') {
          mobyutil::MB_SetAnimation(param_1,9,10,0);
        }
        param_1->state = '\n';
      }
      if ((*(uint *)(iVar8 + 0x30) & 1) != 0) {
        fVar1 = *(float *)(iVar8 + 0x10);
        *(float *)(param_2 + 0x110) = fVar1;
        fVar2 = *(float *)(iVar8 + 0x14);
        *(float *)(param_2 + 0x114) = fVar2;
        fVar3 = *(float *)(iVar8 + 0x18);
        *(float *)(param_2 + 0x118) = fVar3;
        *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(iVar8 + 0x1c);
        fVar7 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        if (*(float *)(param_2 + 0xd8) < fVar7) {
          fVar7 = *(float *)(param_2 + 0xd8) / fVar7;
          *(float *)(param_2 + 0x110) = fVar1 * fVar7;
          *(float *)(param_2 + 0x114) = fVar2 * fVar7;
          *(float *)(param_2 + 0x118) = fVar3 * fVar7;
        }
      }
    }
    param_1->damage = -1;
  }
  return;
}



//==== 00444a50  ns=mobyupdate_unsorted  size=0x904
// sig: undefined UpdateMoby_745(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 001057f4 mobyutil::SetCollDamIn; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 001385d0 path::Path_PickNextNode; 00444440 mobyupdate_helpers::M745_00444440; 00444588 mobyupdate_helpers::M745_00444588; 0044488c mobyupdate_helpers::M745_0044488c; 005cd098 libc::printf
// strings: 00657e9c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n' | 00657ed4: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dINIT\n' | 00657f14: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dHANG_OUT\n' | 00657f54: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dPATH_DOWN\n' | 00657f9c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDROP_DOWN\n' | 00657fe4: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dLAND\n' | 00658024: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dSEEK_PLAYER\n' | 0065806c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dATTACK\n' | 006580ac: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dWANDER\n' | 006580ec: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDIE\n'

/* Moby 745 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_745(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  void *pvVar5;
  Spline *spline;
  MobyInstance *pMVar6;
  short sVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_110 [16];
  Vec4 VStack_100;
  f32 local_f0;
  f32 local_ec;
  f32 local_e8;
  f32 local_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [48];
  float local_90;
  float local_8c;
  int local_50;
  
  pMVar6 = moby;
  if ((moby != (MobyInstance *)0x0) && (pvVar5 = moby->pVar, pvVar5 != (void *)0x0)) {
    libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x83);
    libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x87);
    mobyupdate_helpers::M745_0044488c(moby,pvVar5,(int)pvVar5 + 0x20);
    libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x8b);
    dVar9 = (double)*(float *)((int)pvVar5 + 0xe8);
    if ((double)*(float *)((int)pvVar5 + 0xe8) - (double)*(float *)((int)pvVar5 + 0xe0) < 0.0) {
      dVar9 = (double)*(float *)((int)pvVar5 + 0xe0);
    }
    mobyutil::MB_getTarget(dVar9,moby);
    libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x92);
    dVar8 = 0.0;
    dVar9 = dVar8;
    if (local_50 != 0) {
      dVar8 = (double)local_90;
      dVar9 = (double)local_8c;
    }
    pMVar6 = (MobyInstance *)
             libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x9d);
    bVar3 = moby->state;
    if (bVar3 < 5) {
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dINIT\n",0xa1);
          *(f32 *)((int)pvVar5 + 0x100) = (moby->pos).x;
          *(f32 *)((int)pvVar5 + 0x104) = (moby->pos).y;
          *(f32 *)((int)pvVar5 + 0x108) = (moby->pos).z;
          fVar4 = (moby->pos).w;
          *(undefined1 *)((int)pvVar5 + 0x110) = 0;
          *(f32 *)((int)pvVar5 + 0x10c) = fVar4;
          *(undefined1 *)((int)pvVar5 + 0x111) = 0;
          *(undefined1 *)((int)pvVar5 + 0x112) = 0;
          *(undefined1 *)((int)pvVar5 + 0x113) = 0;
          *(undefined1 *)((int)pvVar5 + 0x114) = 0;
          *(undefined1 *)((int)pvVar5 + 0x115) = 0;
          *(undefined1 *)((int)pvVar5 + 0x116) = 0;
          *(undefined1 *)((int)pvVar5 + 0x117) = 0;
          *(undefined1 *)((int)pvVar5 + 0x118) = 0;
          *(undefined1 *)((int)pvVar5 + 0x119) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11a) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11b) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11c) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11d) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11e) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11f) = 0;
          moby->modeBits = moby->modeBits | (CAN_BE_AUTO_TARGETED|LOCK_ROTATION);
          mobyupdate_helpers::M745_00444588(moby,pvVar5,&moby->pos,&moby->pos,auStack_110);
          mobyupdate_helpers::M745_00444440(moby,auStack_110);
          if (moby->animationId != '\x05') {
            mobyutil::MB_SetAnimation(moby,5,0,10);
          }
          pMVar6 = (MobyInstance *)0x1;
          moby->state = '\x01';
        }
        else {
          libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dHANG_OUT\n",0xb3
                      );
          if (((local_50 != 0) || (pMVar6 = (MobyInstance *)0x0, *(int *)((int)pvVar5 + 0x38) != 0))
             && ((fVar2 = (moby->pos).y - *(float *)(local_50 + 0x14),
                 fVar1 = (moby->pos).x - *(float *)(local_50 + 0x10),
                 SQRT(fVar1 * fVar1 + fVar2 * fVar2) < *(float *)((int)pvVar5 + 0xe0) ||
                 (pMVar6 = *(MobyInstance **)((int)pvVar5 + 0x38), pMVar6 != (MobyInstance *)0x0))))
          {
            sVar7 = *(short *)((int)pvVar5 + 0xd2);
            *(undefined4 *)((int)pvVar5 + 0x38) = 0;
            pMVar6 = (MobyInstance *)(int)sVar7;
            if (sVar7 < 2) {
              if (-1 < sVar7) {
                if (moby->animationId != '\a') {
                  mobyutil::MB_SetAnimation(moby,7,0,10);
                }
                pMVar6 = (MobyInstance *)0x3;
                moby->state = '\x03';
              }
            }
            else if (sVar7 < 3) {
              if (moby->animationId != '\x02') {
                mobyutil::MB_SetAnimation(moby,2,0,0);
              }
              pMVar6 = (MobyInstance *)0x4;
              moby->state = '\x04';
            }
          }
        }
      }
      else if (2 < bVar3) {
        if (bVar3 < 4) {
          libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dPATH_DOWN\n",
                       0xca);
          spline = Splines[*(int *)((int)pvVar5 + 0xd4)];
          sVar7 = path::Path_PickNextNode(moby,spline,spline->points + spline->cnt + -1,&VStack_100)
          ;
          *(short *)((int)pvVar5 + 0xd0) = sVar7;
          bVar3 = moby->animationId;
          pMVar6 = (MobyInstance *)(uint)bVar3;
          if ((sVar7 == -1) || (spline->cnt + -1 <= (int)sVar7)) {
            sVar7 = *(short *)((int)pvVar5 + 0xd2);
            if (sVar7 < 1) {
              if (-1 < sVar7) {
                if (bVar3 != 7) {
                  mobyutil::MB_SetAnimation(moby,7,0,10);
                }
                pMVar6 = (MobyInstance *)0x6;
                moby->state = '\x06';
              }
            }
            else if (sVar7 < 3) {
              if (bVar3 != 2) {
                mobyutil::MB_SetAnimation(moby,2,0,0);
              }
              pMVar6 = (MobyInstance *)0x4;
              moby->state = '\x04';
            }
          }
        }
        else {
          libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDROP_DOWN\n",
                       0xe8);
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            mobyutil::MB_SetAnimation(moby,3,0,0);
          }
          local_f0 = (moby->pos).x;
          local_ec = (moby->pos).y;
          local_e8 = (moby->pos).z;
          local_e4 = (moby->pos).w;
          fVar1 = -(*(float *)((int)pvVar5 + 0xfc) * DAT_0071f408 - *(float *)((int)pvVar5 + 0x118))
          ;
          *(float *)((int)pvVar5 + 0x118) = fVar1;
          (moby->pos).z = (moby->pos).z + fVar1;
          pMVar6 = (MobyInstance *)collproc::CollLine(&local_f0,&moby->pos,2,moby,0);
          if (pMVar6 != (MobyInstance *)0x0) {
            *(undefined1 *)((int)pvVar5 + 0x110) = 0;
            *(undefined1 *)((int)pvVar5 + 0x111) = 0;
            *(undefined1 *)((int)pvVar5 + 0x112) = 0;
            *(undefined1 *)((int)pvVar5 + 0x113) = 0;
            *(undefined1 *)((int)pvVar5 + 0x114) = 0;
            *(undefined1 *)((int)pvVar5 + 0x115) = 0;
            *(undefined1 *)((int)pvVar5 + 0x116) = 0;
            *(undefined1 *)((int)pvVar5 + 0x117) = 0;
            *(undefined1 *)((int)pvVar5 + 0x118) = 0;
            *(undefined1 *)((int)pvVar5 + 0x119) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11a) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11b) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11c) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11d) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11e) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11f) = 0;
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(moby,4,0,4);
            }
            pMVar6 = (MobyInstance *)0x5;
            moby->state = '\x05';
          }
        }
      }
    }
    else if (bVar3 == 10) {
      libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDIE\n",0x133);
      pMVar6 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
      if ((moby->field43_0x70 & 2U) != 0) {
        mobyfunc::GetBonePosition(moby,1,auStack_d0);
        mobyutil::MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000,
                   0x401c000000000000,moby,(int)pvVar5 + 0x110,auStack_d0,1,0xffffffffffffffff,3,1,5
                  );
        pMVar6 = (MobyInstance *)mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      if (bVar3 != 8) {
        if (bVar3 != 7) {
          if (bVar3 == 6) {
            pMVar6 = (MobyInstance *)
                     libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dSEEK_PLAYER\n"
                                  ,0x107);
            fVar1 = (moby->pos).y - *(float *)((int)pvVar5 + 0x104);
            fVar2 = (moby->pos).x - *(float *)((int)pvVar5 + 0x100);
            if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= *(float *)((int)pvVar5 + 0xe8)) {
              return pMVar6;
            }
            moby->state = '\b';
            return (MobyInstance *)0x8;
          }
          if (bVar3 != 5) {
            return pMVar6;
          }
          libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dLAND\n",0xff);
          if ((moby->field43_0x70 & 2U) == 0) {
            return (MobyInstance *)((byte)moby->field43_0x70 & 2);
          }
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(moby,7,0,10);
          }
          moby->state = '\x06';
          return (MobyInstance *)0x6;
        }
        libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dATTACK\n",0x113);
        if ((moby->field43_0x70 & 2U) == 0) {
          mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,1);
          mobyfunc::GetBonePosition(moby,0,auStack_e0);
          collproc::CollMobySphere(0x3fd9200000000000,auStack_e0);
        }
        else if ((local_50 == 0) ||
                (fVar1 = (moby->pos).y - *(float *)(local_50 + 0x14),
                fVar2 = (moby->pos).x - *(float *)(local_50 + 0x10),
                *(float *)((int)pvVar5 + 0xe4) < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(moby,7,0,10);
          }
          moby->state = '\x06';
        }
        else {
          if (moby->animationId != '\b') {
            mobyutil::MB_SetAnimation(moby,8,0,10);
          }
          moby->state = '\a';
        }
      }
      libc::printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dWANDER\n",0x129);
      pMVar6 = (MobyInstance *)(uint)moby->animationId;
      if ((local_50 != 0) || (*(int *)((int)pvVar5 + 0x38) != 0)) {
        fVar1 = (float)((double)(moby->pos).x - (double)*(float *)((int)pvVar5 + 0x100));
        fVar2 = (float)((double)(moby->pos).y - (double)*(float *)((int)pvVar5 + 0x104));
        if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < *(float *)((int)pvVar5 + 0xe8)) &&
           ((fVar1 = (float)(dVar9 - (double)*(float *)((int)pvVar5 + 0x104)),
            fVar2 = (float)(dVar8 - (double)*(float *)((int)pvVar5 + 0x100)),
            SQRT(fVar2 * fVar2 + fVar1 * fVar1) < *(float *)((int)pvVar5 + 0xe0) ||
            (*(int *)((int)pvVar5 + 0x38) != 0)))) {
          if (moby->animationId != 7) {
            mobyutil::MB_SetAnimation(moby,7,0,10);
          }
          pMVar6 = (MobyInstance *)0x0;
          *(undefined4 *)((int)pvVar5 + 0x38) = 0;
          moby->state = '\x06';
        }
      }
    }
  }
  return pMVar6;
}



//==== 00445354  ns=mobyupdate_helpers  size=0x14
// sig: undefined M746_00445354(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M746_00445354(void)

{
  DAT_0085a678 = 0x10000;
  return;
}



//==== 00445398  ns=mobyupdate_unsorted  size=0x378
// sig: undefined UpdateMoby_746(MobyInstance * moby)
// callers(0): 
// callees(3): 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound

/* Moby 746 */

void mobyupdate_unsorted::UpdateMoby_746(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
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
  int iVar23;
  
  bVar1 = moby->state;
  pvVar7 = moby->pVar;
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar7 + 0x60) = (moby->pos).x;
    *(f32 *)((int)pvVar7 + 100) = (moby->pos).y;
    *(f32 *)((int)pvVar7 + 0x68) = (moby->pos).z;
    fVar2 = (moby->pos).w;
    *(undefined4 *)((int)pvVar7 + 0x70) = 0x3f800000;
    *(f32 *)((int)pvVar7 + 0x6c) = fVar2;
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar7 + 0x74) = 0xffffffff;
  }
  else if (bVar1 < 2) {
    if ((moby->setByGroup == '\x02') || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      moby->state = '\x02';
      moby->setByGroup = '\0';
    }
  }
  else if (bVar1 < 3) {
    fVar3 = -(mobyutil::g_FrameTime * 0.5 - *(float *)((int)pvVar7 + 0x70));
    *(float *)((int)pvVar7 + 0x70) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined4 *)((int)pvVar7 + 0x70) = 0;
      fVar3 = 0.0;
    }
    if (fVar3 == 0.0) {
      iVar23 = *(int *)((int)pvVar7 + 0x74);
      if (((iVar23 != -1) && (sound::g_SoundChannels[iVar23].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar23].state != '\0')) {
        sound::sound_Kill(iVar23);
      }
      *(undefined4 *)((int)pvVar7 + 0x74) = 0xffffffff;
      moby->state = '\x01';
    }
    else {
      iVar23 = sound::IsMobyPlayingSound(moby,*(int *)((int)pvVar7 + 0x74));
      if (iVar23 == 0) {
        iVar23 = sound::PlayMobySound(0,4,moby);
        *(int *)((int)pvVar7 + 0x74) = iVar23;
      }
    }
  }
  fVar3 = (moby->rotation).z;
  fVar8 = *(float *)((int)pvVar7 + 0x70) * 0.62831855;
  (moby->rotation).y = fVar8;
  fVar9 = fVar3 + 1.5707963;
  fVar4 = fVar8 + 1.5707963;
  fVar21 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar21 = fVar8;
  }
  fVar10 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar10 = fVar3;
  }
  fVar5 = 3.1415925 - fVar9;
  if (fVar9 - (3.1415925 - fVar9) < 0.0) {
    fVar5 = fVar9;
  }
  fVar6 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar6 = fVar4;
  }
  fVar20 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar21 < 0.0) {
    fVar20 = fVar21;
  }
  fVar8 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
    fVar8 = fVar10;
  }
  fVar3 = fVar20 * fVar20;
  fVar21 = -3.1415925 - fVar9;
  if ((-3.1415925 - fVar9) - fVar5 < 0.0) {
    fVar21 = fVar5;
  }
  fVar9 = fVar8 * fVar8;
  fVar10 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
    fVar10 = fVar6;
  }
  fVar4 = *(float *)((int)pvVar7 + 0x68);
  fVar22 = fVar21 * fVar21;
  fVar11 = fVar10 * fVar10;
  fVar19 = fVar3 * fVar3 * fVar20;
  fVar17 = fVar9 * fVar9 * fVar8;
  fVar5 = *(float *)((int)pvVar7 + 0x60);
  fVar6 = *(float *)((int)pvVar7 + 100);
  fVar18 = fVar3 * fVar19;
  fVar14 = fVar22 * fVar22 * fVar21;
  fVar16 = fVar9 * fVar17;
  fVar12 = fVar11 * fVar11 * fVar10;
  fVar15 = fVar22 * fVar14;
  (moby->pos).w = 0.0;
  fVar13 = fVar11 * fVar12;
  fVar3 = fVar3 * fVar18 * 2.601887e-06 +
          fVar18 * -0.0001980741 + fVar19 * 0.0083330255 + fVar3 * fVar20 * -0.16666657 + fVar20;
  (moby->pos).y =
       (fVar9 * fVar16 * 2.601887e-06 +
       fVar16 * -0.0001980741 + fVar17 * 0.0083330255 + fVar9 * fVar8 * -0.16666657 + fVar8) * 11.0
       * fVar3 + fVar6;
  (moby->pos).x =
       (fVar22 * fVar15 * 2.601887e-06 +
       fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar22 * fVar21 * -0.16666657 + fVar21) *
       11.0 * fVar3 + fVar5;
  (moby->pos).z =
       (fVar11 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
       11.0 + fVar4 + -11.0;
  return;
}



//==== 00445710  ns=mobyupdate_helpers  size=0x14
// sig: undefined M749_00445710(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M749_00445710(void)

{
  DAT_0085a6e8 = 0x10000;
  return;
}



//==== 00445770  ns=mobyupdate_helpers  size=0x47c
// sig: undefined M749_00445770(void)
// callers(1): 00446088 mobyupdate_unsorted::UpdateMoby_749
// callees(4): 001009b0 mobyutil::MB_MoveAndCollide; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M749_00445770(double param_1,int param_2,float *param_3)

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
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  uint unused;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  ulonglong in_f28;
  double dVar24;
  ulonglong in_f29;
  double dVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x100;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar15;
  puVar12[0x22] = in_LR;
  puVar12[0x1c] = in_f28;
  puVar12[0x1d] = in_f29;
  puVar12[0x1e] = in_f30;
  puVar12[0x1f] = in_f31;
  fVar2 = *param_3;
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = param_3[1];
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = fVar2 - fVar3;
  puVar12[0x1b] = unaff_r31;
  fVar8 = fVar4 - fVar5;
  *(float *)(puVar12 + 0x10) = (float)param_1;
  fVar7 = ABS(fVar6);
  fVar10 = ABS(fVar8);
  *(float *)((int)puVar12 + 0x84) = fVar6;
  puVar12[0x1a] = unaff_r30;
  *(float *)(puVar12 + 0x11) = fVar8;
  iVar11 = *(int *)(param_2 + 0x78);
  *(float *)((int)puVar12 + 0x8c) = fVar7 - fVar10;
  dVar26 = 0.0;
  dVar24 = (double)*(float *)(param_2 + 0x18);
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1d) & 4;
  fVar6 = param_3[2];
  fVar8 = ABS(*(float *)((int)puVar12 + 0x84));
  if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
    fVar8 = fVar10;
  }
  fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar9 = ABS(*(float *)(puVar12 + 0x11));
  if (*(float *)((int)puVar12 + 0x8c) - 0.0 < 0.0) {
    fVar9 = fVar7;
  }
  fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  puVar12[0x19] = unaff_r29;
  puVar12[0x18] = unaff_r28;
  puVar12[0x17] = unaff_r27;
  dVar23 = dVar26;
  if (0.0 < fVar8) {
    lVar16 = uVar15 - 0xf0;
    lVar21 = uVar15 - 0x60;
    lVar18 = uVar15 - 0x70;
    lVar22 = 2;
    fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
    fVar9 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0x9c) = fVar8;
    *(float *)((int)puVar12 + 0x94) = fVar8;
    *(float *)(puVar12 + 0x13) = fVar8;
    *(float *)(puVar12 + 0x12) = fVar8;
    fVar8 = fVar9 * fVar9;
    *(float *)((int)puVar12 + 0x94) = *(float *)((int)puVar12 + 0x94) * fVar9;
    *(float *)(puVar12 + 0x13) = *(float *)(puVar12 + 0x13) * fVar8;
    *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar8 * fVar9;
    do {
      *(float *)((int)lVar16 + 0x90) = *(float *)((int)lVar16 + 0x80) * fVar8 * fVar8;
      iVar13 = (int)lVar18;
      lVar18 = lVar18 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar8 * fVar8;
      lVar21 = lVar21 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar21 = uVar15 - 0x70;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar18 = lVar21;
    do {
      fVar8 = *pfVar19;
      fVar9 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar16 + 0x90) = *(float *)((int)lVar16 + 0x90) * fVar8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar9;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar16 = 2;
    do {
      iVar13 = (int)lVar17;
      iVar14 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar13 + 0x90)) + *(float *)(iVar14 + 4)
                        + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar10 + fVar7);
  }
  fVar5 = fVar5 - fVar4;
  fVar3 = fVar3 - fVar2;
  dVar27 = (double)SQRT((float)(dVar24 - (double)fVar6) * (float)(dVar24 - (double)fVar6) +
                        fVar3 * fVar3 + fVar5 * fVar5);
  if (2.0 < dVar27) {
    dVar23 = (double)fastfunc::FastWrapRot((float)dVar23,*(float *)(iVar11 + 0x1fc));
  }
  bVar1 = *(byte *)(param_2 + 0x53);
  unused = (uint)bVar1;
  if ((uint)*(byte *)(param_2 + 0x52) == (uint)bVar1) {
    mobyutil::OrganicDeltAng
              ((float)dVar23,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               mobyutil::g_FrameTime * 12.566371,(float *)(param_2 + 0x48),(uint)bVar1,
               (float *)(iVar11 + 500));
    dVar25 = 4.0;
    mobyutil::OrganicDelt
              ((float)dVar27,DAT_0071f418 * 8.0,DAT_0071f418 * 12.0,mobyutil::g_FrameTime * 4.0,
               (float *)(puVar12 + 0x10),unused,(float *)(iVar11 + 0x1f8));
    dVar23 = (double)*(float *)(iVar11 + 0x1f8);
    if (*(int *)(iVar11 + 0x1f8) < 0) {
      *(undefined4 *)(iVar11 + 0x1f8) = 0;
      dVar23 = dVar26;
    }
    fVar2 = *(float *)(param_2 + 0x48) + 1.5707963;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    *(float *)(iVar11 + 0x278) = *(float *)(param_2 + 0x48);
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar2 * fVar3;
    *(float *)(puVar12 + 0xe) =
         (float)((double)(fVar2 * fVar5 * 2.601887e-06 +
                         fVar5 * -0.0001980741 +
                         fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * dVar23);
    fVar2 = *(float *)(iVar11 + 0x278);
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar2 = *(float *)(iVar11 + 0x1f8);
    *(undefined4 *)(puVar12 + 0xf) = 0;
    fVar8 = DAT_0071f418;
    fVar3 = fVar4 * fVar4;
    fVar5 = fVar3 * fVar3 * fVar4;
    fVar6 = fVar3 * fVar5;
    *(float *)((int)puVar12 + 0x74) =
         (fVar3 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar3 * fVar4 * -0.16666657 + fVar4) * fVar2
    ;
    *(float *)(puVar12 + 0xf) = -(fVar8 * 10.0 - *(float *)(iVar11 + 0x270));
    mobyutil::MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar26,param_2,uVar15 - 0x90);
    fVar2 = (float)((double)*(float *)(param_2 + 0x18) - dVar24);
    *(float *)(iVar11 + 0x270) = fVar2;
    if ((float)((double)mobyutil::g_FrameTime * dVar25) < fVar2) {
      *(float *)(iVar11 + 0x270) = (float)((double)mobyutil::g_FrameTime * dVar25);
    }
    if ((*(byte *)(param_2 + 0x70) & 2) == 0) {
      dVar27 = 37.0;
    }
  }
  return dVar27;
}



//==== 00445c08  ns=mobyupdate_helpers  size=0x408
// sig: undefined M749_00445c08(void)
// callers(1): 00446088 mobyupdate_unsorted::UpdateMoby_749
// callees(13): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M749_00445c08(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined2 uVar7;
  ulonglong uVar8;
  double dVar9;
  int local_40;
  float local_3c;
  float local_38 [2];
  longlong local_30;
  
  pvVar1 = param_1->pVar;
  uVar8 = ZEXT48(pvVar1);
  if (param_1->state != '\0') {
    if (g_gameMode == GAME_MODE_SCENE) {
      param_1->enabled = '\0';
      param_1->modeBits = param_1->modeBits | DISABLED;
    }
    else {
      param_1->enabled = '\x01';
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
    }
    local_3c = 0.0;
    iVar6 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar6,uVar8 + 0x20,0,&local_40,&local_3c,0,4);
    if (((local_40 != 1) && (param_1->state != '\f')) && (local_3c != 0.0)) {
      *(undefined4 *)((int)pvVar1 + 0x98) = 0x3f400000;
      *(float *)((int)pvVar1 + 0x20) = *(float *)((int)pvVar1 + 0x20) - local_3c;
      fVar4 = DAT_0071f418;
      fVar3 = DAT_0085a71c * DAT_0071f418;
      *(undefined4 *)((int)pvVar1 + 0x90) = 0x200;
      *(float *)((int)pvVar1 + 0x80) = fVar3;
      *(float *)((int)pvVar1 + 0x84) = DAT_0085a720 * fVar4;
      fVar3 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar1 + 0x88) = DAT_0085a724 * mobyutil::g_FrameTime;
      fVar4 = DAT_0085a728;
      *(undefined1 *)((int)pvVar1 + 0xad) = 0;
      *(float *)((int)pvVar1 + 0x8c) = fVar4 * fVar3;
      *(undefined4 *)((int)pvVar1 + 0x94) = 0x29;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar1 + 0xbc) = fVar3 * 2.0;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_38,uVar8 + 0x88,
                 uVar8 + 0x8c);
      dVar9 = (double)local_38[0];
      mobyutil::MB_randInt(2);
      mobyutil::MB_StartKick(dVar9,param_1,uVar8 + 0x70);
      *(undefined4 *)((int)pvVar1 + 0xc0) = DAT_0085a738;
      *(undefined4 *)((int)pvVar1 + 0xc4) = DAT_0085a734;
      param_1->state = '\f';
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar8 + 0x60);
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar8 + 0x60);
    if (param_1->state == '\x03') {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e4)];
      mobyutil::MB_getTargetInArea
                (0x4050000000000000,param_1,uVar8 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    else {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e0)];
      mobyutil::MB_getTargetInArea
                (0x4038000000000000,param_1,uVar8 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)((int)pvVar1 + 0x1c0) == 0) {
      *(float *)((int)pvVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar1 + 0x1c0) = pMVar5;
      *(float *)((int)pvVar1 + 0x184) = fVar3;
      *(float *)((int)pvVar1 + 0x188) = g_heroPosition.z;
      *(float *)((int)pvVar1 + 0x18c) = g_heroPosition.w;
    }
    fastfunc::FastDecTimerS16(uVar8 + 0x276);
    if (*(int *)((int)pvVar1 + 0x38) != 0) {
      dVar9 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
      uVar7 = fastfunc::FastDoubleToInt((double)(float)(dVar9 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar1 + 0x276) = uVar7;
    }
    *(undefined4 *)((int)pvVar1 + 0x38) = 0;
    if (((param_1->state == '\x05') || (param_1->state == '\b')) &&
       ((*(short *)((int)pvVar1 + 0x276) != 0 &&
        (param_1->state = '\n', param_1->animationId != '\x04')))) {
      local_30 = (longlong)(int)(animationSpeed * 20.5);
      mobyutil::MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 20.5));
    }
  }
  return;
}



//==== 00446088  ns=mobyupdate_unsorted  size=0x16e0
// sig: undefined UpdateMoby_749(MobyInstance * moby)
// callers(0): 
// callees(24): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ffb70 mobyutil::GetGroundZ; 001059f0 mobyutil::DamageSphereAtBone; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 001136c8 mobyutil::DoMeander; 00113e88 mobyutil::MB_MayaFrameTrigger; 00113fa0 mobyutil::MB_LineCrossesSpline; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00119a18 mobyfunc::DoManipulator; 0015d12c sound::PlayMobySound; 00445770 mobyupdate_helpers::M749_00445770; 00445c08 mobyupdate_helpers::M749_00445c08; 0047ebac FUN_0047ebac; 0048c188 FUN_0048c188; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 749 */

void mobyupdate_unsorted::UpdateMoby_749(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  undefined4 uVar10;
  Spline *pSVar11;
  ulonglong *puVar12;
  MobyInstance *pMVar13;
  float fVar14;
  ulonglong uVar15;
  undefined1 uVar19;
  int iVar16;
  int iVar17;
  uint uVar18;
  Vec4 *pVVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar27;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  undefined8 uVar35;
  double dVar36;
  float fVar37;
  
  lVar27 = (longlong)(int)moby;
  uVar15 = ZEXT48(&stack0x00000000);
  lVar22 = uVar15 - 0x180;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar15;
  puVar12[0x32] = in_LR;
  puVar12[0x2f] = in_f31;
  puVar12[0x2e] = unaff_r31;
  puVar12[0x2d] = unaff_r30;
  puVar12[0x2c] = unaff_r29;
  puVar12[0x2b] = unaff_r28;
  pvVar9 = moby->pVar;
  mobyupdate_helpers::M749_00445c08();
  iVar16 = *(int *)((int)pvVar9 + 0x1c0);
  if ((moby->enabled != '\0') &&
     (fVar37 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar6 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar37 * fVar37) < 26.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar27);
    moby->shadow = '\x15';
  }
  mobyfunc::DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar9 + 0x200));
  bVar1 = moby->state;
  uVar2 = moby->animationId;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      if (uVar2 != '\x04') {
        uVar35 = mobyutil::MB_randRange(0,5);
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,4,uVar35,*(undefined4 *)((int)puVar12 + 0x144));
        }
        dVar31 = (double)mobyutil::MB_randRangeFloat(0.92,1.08);
        moby->unk58 = (float)dVar31;
      }
      mobyutil::DoMeander(0x3fe0000000000000,0x3fe0000000000000,lVar27,(int)pvVar9 + 0x240);
      if (*(int *)((int)pvVar9 + 0x1c4) != 2) {
        dVar31 = (double)mobyutil::MB_randRangeFloat(-20.0,20.0);
        *(float *)((int)pvVar9 + 0x1fc) = (float)(dVar31 * 0.01745329238474369);
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
    else if (bVar1 == 4) {
      pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1e8)];
      dVar31 = (double)mobyupdate_helpers::M749_00445770
                                 (0x3fe0000000000000,lVar27,
                                  pSVar11->points + *(short *)((int)pvVar9 + 0x274));
      if (1.0 <= dVar31) {
        if ((*(int *)((int)pvVar9 + 0x1c4) != 2) &&
           (moby->state = '\x06', moby->animationId != '\x04')) {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else if ((int)*(short *)((int)pvVar9 + 0x274) < pSVar11->cnt + -1) {
        *(short *)((int)pvVar9 + 0x274) = *(short *)((int)pvVar9 + 0x274) + 1;
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x01') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((*(int *)((int)pvVar9 + 0x1c4) != 2) && (moby->state = '\x04', uVar2 != '\x04')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else if (bVar1 == 2) {
      dVar31 = (double)mobyupdate_helpers::M749_00445770
                                 (0x3fe0000000000000,lVar27,
                                  Splines[*(int *)((int)pvVar9 + 0x1e8)]->points +
                                  *(short *)((int)pvVar9 + 0x274));
      if ((dVar31 < 1.0) && (moby->state = '\x01', moby->animationId != '\x02')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar27,2,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else if (bVar1 == 1) {
      pMVar13 = MobyInstance + *(int *)((int)pvVar9 + 0x1ec);
      if ((pMVar13 == (MobyInstance *)0x0) || (pMVar13->state == 0xfd || pMVar13->state == 0xfe)) {
        moby->state = '\b';
        if (uVar2 != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        fVar37 = (pMVar13->pos).x - (moby->pos).x;
        fVar5 = (pMVar13->pos).y - (moby->pos).y;
        fVar6 = ABS(fVar37);
        fVar4 = ABS(fVar5);
        *(float *)((int)puVar12 + 0xb4) = fVar37;
        *(float *)(puVar12 + 0x17) = fVar5;
        *(float *)((int)puVar12 + 0xbc) = fVar6 - fVar4;
        fVar37 = 0.0;
        uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar12 + 0xb4));
        if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        fVar8 = ABS(*(float *)(puVar12 + 0x17));
        if (*(float *)((int)puVar12 + 0xbc) - 0.0 < 0.0) {
          fVar8 = fVar6;
        }
        if (0.0 < fVar5) {
          lVar21 = uVar15 - 0x170;
          lVar26 = uVar15 - 0x50;
          lVar24 = uVar15 - 0x60;
          lVar28 = 2;
          fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar12 + 300) = fVar5;
          *(float *)((int)puVar12 + 0x124) = fVar5;
          *(float *)(puVar12 + 0x25) = fVar5;
          *(float *)(puVar12 + 0x24) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar12 + 0x124) = *(float *)((int)puVar12 + 0x124) * fVar6;
          *(float *)(puVar12 + 0x25) = *(float *)(puVar12 + 0x25) * fVar5;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x110) * fVar5 * fVar5;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar15 - 0x60;
          pfVar25 = (float *)&DAT_007358e0;
          lVar21 = lVar22;
          lVar24 = lVar26;
          do {
            fVar5 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x120) * fVar5;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar21 = 2;
          do {
            iVar16 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar17 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            fVar37 = fVar37 + *(float *)(iVar16 + 0x120) + *(float *)(iVar17 + 4) +
                     *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          fVar37 = (fVar37 + 0.7853982) * fVar7 + fVar4;
        }
        mobyutil::OrganicDeltAng
                  (fVar37,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x446010,
                   (float *)((int)pvVar9 + 500));
      }
    }
    else if (bVar1 == 0) {
      fVar3 = (moby->pos).x;
      moby->scale = moby->pClass->gScale * DAT_0085a718;
      *(f32 *)((int)pvVar9 + 0x1d0) = fVar3;
      *(f32 *)((int)pvVar9 + 0x1d4) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x1d8) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x1dc) = (moby->pos).w;
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar27,1,0,0);
      }
      *(undefined1 *)((int)pvVar9 + 0x29) = 1;
      fVar3 = (moby->pos).x;
      *(undefined **)((int)pvVar9 + 0x140) = &DAT_0085a70c;
      *(f32 *)((int)pvVar9 + 0x240) = fVar3;
      *(f32 *)((int)pvVar9 + 0x244) = (moby->pos).y;
      *(f32 *)((int)pvVar9 + 0x248) = (moby->pos).z;
      fVar3 = (moby->pos).w;
      *(undefined4 *)((int)pvVar9 + 0x25c) = 0x3fc00000;
      *(f32 *)((int)pvVar9 + 0x24c) = fVar3;
      fVar37 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar9 + 600) = mobyutil::g_FrameTime * 2.9670596;
      uVar35 = 0x4000000000000000;
      *(float *)((int)pvVar9 + 0x254) = fVar37 * 2.0;
      fVar37 = (moby->pos).y - 127.0;
      fVar5 = (moby->pos).x - 150.0;
      if (SQRT(fVar5 * fVar5 + fVar37 * fVar37) < 5.0) {
        *(undefined4 *)((int)pvVar9 + 0x25c) = 0x3f400000;
      }
      uVar19 = fastfunc::FastDoubleToInt(0x4028000000000000);
      *(undefined1 *)((int)pvVar9 + 0x58) = uVar19;
      uVar19 = fastfunc::FastDoubleToInt(uVar35);
      *(undefined1 *)((int)pvVar9 + 0x5a) = uVar19;
      if (*(int *)((int)pvVar9 + 0x1e8) < 0) {
        moby->state = '\x05';
      }
      else if (*(int *)((int)pvVar9 + 0x1e4) < 0) {
        if (*(int *)((int)pvVar9 + 0x1ec) < 0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        *(f32 *)((int)pvVar9 + 0x1d0) = (moby->pos).x;
        *(f32 *)((int)pvVar9 + 0x1d4) = (moby->pos).y;
        *(f32 *)((int)pvVar9 + 0x1d8) = (moby->pos).z;
        *(f32 *)((int)pvVar9 + 0x1dc) = (moby->pos).w;
        moby->state = '\x01';
        if (moby->animationId != '\x02') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,2,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1e8)];
        pVVar23 = pSVar11->points + pSVar11->cnt + -1;
        *(float *)((int)pvVar9 + 0x1d0) = pVVar23->x;
        *(float *)((int)pvVar9 + 0x1d4) = pVVar23->y;
        *(float *)((int)pvVar9 + 0x1d8) = pVVar23->z;
        *(float *)((int)pvVar9 + 0x1dc) = pVVar23->w;
        (moby->pos).x = pSVar11->points[0].x;
        (moby->pos).y = pSVar11->points[0].y;
        (moby->pos).z = pSVar11->points[0].z;
        fVar37 = pSVar11->points[0].w;
        moby->state = '\x03';
        (moby->pos).w = fVar37;
      }
    }
  }
  else if (bVar1 == 0xc) {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if ((uVar18 & 0x140) != 0) {
      sound::PlayMobySound(7,0,moby);
      mobyutil::MB_SpawnExplosionSparks2
                (0x3fe8000000000000,0x4024000000000000,lVar27,lVar27 + 0x10,&DAT_00446010,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xb) {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70));
    if (((uVar18 & 0x140) != 0) && (moby->state = '\x05', moby->animationId != '\x01')) {
      puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
    }
  }
  else if (bVar1 == 10) {
    dVar32 = (double)(moby->pos).x;
    dVar33 = (double)(moby->pos).y;
    fVar37 = (float)((double)*(float *)((int)pvVar9 + 0x180) - dVar32);
    *(float *)(puVar12 + 0x10) = fVar37;
    fVar5 = (float)((double)*(float *)((int)pvVar9 + 0x184) - dVar33);
    fVar6 = (moby->pos).z;
    *(float *)((int)puVar12 + 0x84) = fVar5;
    *(float *)(puVar12 + 0x11) = *(float *)((int)pvVar9 + 0x188) - fVar6;
    fVar4 = SQRT(fVar37 * fVar37 + fVar5 * fVar5);
    *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)((int)pvVar9 + 0x18c);
    dVar36 = 0.0;
    *(float *)(puVar12 + 0x11) = fVar6;
    uVar10 = *(undefined4 *)((int)pvVar9 + 0x1e0);
    dVar34 = (double)(fVar5 * (2.5 / fVar4));
    dVar29 = (double)(fVar37 * (2.5 / fVar4));
    dVar31 = dVar36;
    if (0.0 - fVar4 < 0.0) {
      dVar31 = dVar34;
    }
    dVar30 = dVar36;
    if (0.0 - fVar4 < 0.0) {
      dVar30 = dVar29;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar31 = dVar34;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar30 = dVar29;
    }
    *(float *)((int)puVar12 + 0x84) = (float)(dVar31 + dVar33);
    *(float *)(puVar12 + 0x10) = (float)(dVar30 + dVar32);
    iVar16 = mobyutil::MB_LineCrossesSpline(uVar10,lVar27 + 0x10,uVar15 - 0x100);
    if (iVar16 == 0) {
      if (moby->animationId != '\x04') {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
      mobyupdate_helpers::M749_00445770(0x3fe0000000000000,lVar27,(int)pvVar9 + 0x180);
    }
    else {
      fVar37 = *(float *)(*(int *)((int)pvVar9 + 0x1c0) + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(*(int *)((int)pvVar9 + 0x1c0) + 0x14) - (moby->pos).y;
      dVar29 = ABS((double)fVar37);
      dVar32 = ABS((double)fVar5);
      *(float *)(puVar12 + 0x12) = fVar37;
      *(float *)((int)puVar12 + 0x94) = fVar5;
      *(float *)(puVar12 + 0x13) = (float)(dVar29 - dVar32);
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)(puVar12 + 0x12));
      if ((double)*(float *)(puVar12 + 0x13) - dVar36 < 0.0) {
        dVar31 = dVar32;
      }
      fVar37 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar32 = ABS((double)*(float *)((int)puVar12 + 0x94));
      if ((double)*(float *)(puVar12 + 0x13) - dVar36 < 0.0) {
        dVar32 = dVar29;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (dVar36 < dVar31) {
        lVar21 = uVar15 - 0x170;
        lVar26 = uVar15 - 0xb0;
        lVar24 = uVar15 - 0xc0;
        lVar28 = 2;
        fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xcc) = fVar6;
        *(float *)((int)puVar12 + 0xc4) = fVar6;
        *(float *)(puVar12 + 0x19) = fVar6;
        *(float *)(puVar12 + 0x18) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar4;
        *(float *)(puVar12 + 0x19) = *(float *)(puVar12 + 0x19) * fVar6;
        *(float *)((int)puVar12 + 0xcc) = *(float *)((int)puVar12 + 0xcc) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xb0) * fVar6 * fVar6;
          iVar16 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar15 - 0xc0;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xc0) = *(float *)((int)lVar21 + 0xc0) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar21 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar17 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar16 + 0xc0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar5);
      }
      fVar37 = mobyutil::OrganicDeltAng
                         ((float)dVar36,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          mobyutil::g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar9 + 500));
      if (((moby->field43_0x70 & 2U) != 0) &&
         (bVar1 = moby->animationId, iVar16 = mobyutil::MB_randInt((double)fVar37,2),
         (uint)bVar1 != iVar16 + 2U)) {
        iVar16 = mobyutil::MB_randInt(2);
        puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar27,iVar16 + 2,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*(int *)((int)pvVar9 + 0x1c4) == 2) {
        if ((*(short *)((int)pvVar9 + 0x276) == 0) &&
           (moby->state = '\b', moby->animationId != '\x04')) {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
      else {
        moby->state = '\x06';
        if (moby->animationId != '\x04') {
          puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
        }
      }
    }
  }
  else if (bVar1 == 9) {
    iVar16 = FUN_0048c188(lVar27,(int)pvVar9 + 0x70);
    if (iVar16 != 0) {
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar9 + 0x138) = 0;
    }
  }
  else if (bVar1 == 8) {
    dVar31 = (double)mobyupdate_helpers::M749_00445770
                               (0x3fe0000000000000,lVar27,(int)pvVar9 + 0x1d0);
    if (1.5 <= dVar31) {
      if ((*(int *)((int)pvVar9 + 0x1c4) != 2) &&
         (moby->state = '\x06', moby->animationId != '\x04')) {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\x01') {
        puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar27,1,0,*(undefined4 *)((int)puVar12 + 0x144));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar17 = mobyutil::MB_MayaFrameTrigger(34.0,moby);
    if (iVar17 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar9 + 0x1c4) == 2) {
          moby->state = '\b';
          if (moby->animationId != '\x04') {
            puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
          }
        }
        else {
          fVar37 = (moby->pos).y;
          fVar5 = (moby->pos).x;
          fVar6 = fVar37 - *(float *)(iVar16 + 0x14);
          fVar4 = fVar5 - *(float *)(iVar16 + 0x10);
          if (SQRT(fVar4 * fVar4 + fVar6 * fVar6) <= 1.5) {
            fVar37 = *(float *)(iVar16 + 0x14) - fVar37;
            fVar5 = *(float *)(iVar16 + 0x10) - fVar5;
            fVar6 = ABS(fVar37);
            fVar7 = ABS(fVar5);
            *(float *)(puVar12 + 0x14) = fVar37;
            *(float *)((int)puVar12 + 0x9c) = fVar5;
            fVar37 = (moby->rotation).z;
            *(float *)((int)puVar12 + 0xa4) = fVar7 - fVar6;
            fVar5 = 0.0;
            uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar12 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar12 + 0x14) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar12 + 0x9c));
            if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
              fVar4 = fVar6;
            }
            fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
            fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
            fVar14 = ABS(*(float *)(puVar12 + 0x14));
            if (*(float *)((int)puVar12 + 0xa4) - 0.0 < 0.0) {
              fVar14 = fVar7;
            }
            if (0.0 < fVar4) {
              lVar21 = uVar15 - 0x170;
              lVar26 = uVar15 - 0x90;
              lVar24 = uVar15 - 0xa0;
              lVar28 = 2;
              fVar4 = (fVar14 - fVar4) / (fVar14 + fVar4);
              fVar7 = fVar4 * fVar4;
              *(float *)((int)puVar12 + 0xec) = fVar4;
              *(float *)((int)puVar12 + 0xe4) = fVar4;
              *(float *)(puVar12 + 0x1d) = fVar4;
              *(float *)(puVar12 + 0x1c) = fVar4;
              fVar4 = fVar7 * fVar7;
              *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar7;
              *(float *)(puVar12 + 0x1d) = *(float *)(puVar12 + 0x1d) * fVar4;
              *(float *)((int)puVar12 + 0xec) = *(float *)((int)puVar12 + 0xec) * fVar4 * fVar7;
              do {
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar4 * fVar4;
                iVar16 = (int)lVar24;
                lVar24 = lVar24 + 8;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
                lVar26 = lVar26 + 8;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              lVar28 = 4;
              lVar26 = uVar15 - 0xa0;
              pfVar25 = (float *)&DAT_007358e0;
              lVar21 = lVar22;
              lVar24 = lVar26;
              do {
                fVar4 = *pfVar25;
                fVar7 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar4;
                lVar21 = lVar21 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
                lVar24 = lVar24 + 8;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              lVar21 = 2;
              do {
                iVar16 = (int)lVar22;
                lVar22 = lVar22 + 0x10;
                iVar17 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                fVar5 = fVar5 + *(float *)(iVar16 + 0xe0) + *(float *)(iVar17 + 4) +
                        *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar6;
            }
            dVar31 = (double)fastfunc::FastSubRots(fVar37,fVar5);
            if (dVar31 <= 0.1745329201221466) goto LAB_00447644;
          }
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
          }
        }
      }
    }
    else {
      puVar12[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar27,0,0,1);
    }
  }
  else if (bVar1 == 6) {
    dVar31 = (double)mobyupdate_helpers::M749_00445770
                               (0x3fe0000000000000,lVar27,(int)pvVar9 + 0x180);
    if (dVar31 < (double)DAT_0085a72c) {
      fVar37 = *(float *)(iVar16 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar16 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar37);
      fVar7 = ABS(fVar5);
      *(float *)(puVar12 + 0x15) = fVar37;
      *(float *)((int)puVar12 + 0xac) = fVar5;
      fVar37 = (moby->rotation).z;
      *(float *)(puVar12 + 0x16) = fVar6 - fVar7;
      fVar5 = 0.0;
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar14 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar21 = uVar15 - 0x170;
        lVar24 = uVar15 - 0x80;
        lVar26 = uVar15 - 0x70;
        lVar28 = 2;
        fVar6 = (fVar14 - fVar4) / (fVar14 + fVar4);
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0x10c) = fVar6;
        *(float *)((int)puVar12 + 0x104) = fVar6;
        *(float *)(puVar12 + 0x21) = fVar6;
        *(float *)(puVar12 + 0x20) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x104) = *(float *)((int)puVar12 + 0x104) * fVar4;
        *(float *)(puVar12 + 0x21) = *(float *)(puVar12 + 0x21) * fVar6;
        *(float *)((int)puVar12 + 0x10c) = *(float *)((int)puVar12 + 0x10c) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
          iVar16 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar16 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar15 - 0x80;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar22;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar4 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar21 = 2;
        do {
          iVar16 = (int)lVar22;
          iVar17 = (int)lVar26;
          lVar22 = lVar22 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar5 = fVar5 + *(float *)(iVar16 + 0x100) + *(float *)(iVar17 + 4) +
                  *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar7;
      }
      dVar31 = (double)fastfunc::FastSubRots(fVar37,fVar5);
      if (dVar31 < 0.1745329201221466) {
        moby->state = '\a';
        fVar37 = animationSpeed;
        if (moby->animationId != '\x05') {
          puVar12[0x28] = (longlong)(int)DAT_0085a730;
          puVar12[0x28] = (longlong)(int)(fVar37 * 10.5);
          mobyutil::MB_SetAnimation
                    (lVar27,5,*(undefined4 *)((int)puVar12 + 0x144),
                     *(undefined4 *)((int)puVar12 + 0x144));
        }
        goto LAB_00447644;
      }
    }
    if ((*(int *)((int)pvVar9 + 0x1c4) == 2) && (moby->state = '\b', moby->animationId != '\x04')) {
      puVar12[0x28] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar27,4,0,*(undefined4 *)((int)puVar12 + 0x144));
    }
  }
LAB_00447644:
  uVar2 = moby->state;
  if ((uVar2 != '\f' && uVar2 != '\v') && (uVar2 != '\t')) {
    lVar27 = lVar27 + 0x10;
    dVar31 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar27,0);
    mobyutil::Delt((float)dVar31,mobyutil::g_FrameTime * 7.0,&(moby->pos).z);
    if (moby->state != '\x04') {
      mobyutil::MB_PushOutOfSplineWalls
                (0x3fd0000000000000,*(undefined4 *)((int)pvVar9 + 0x1e0),&DAT_00446010,lVar27,lVar27
                );
    }
  }
  iVar16 = *(int *)((int)pvVar9 + 0x1f0);
  if (((iVar16 != -1) &&
      (fVar37 = (moby->pos).y - MobyInstance[iVar16].pos.y,
      fVar5 = (moby->pos).x - MobyInstance[iVar16].pos.x,
      SQRT(fVar5 * fVar5 + fVar37 * fVar37) < 1.0)) && (MobyInstance[iVar16].oClass == BUTTON_033E))
  {
    FUN_0047ebac();
    *(undefined4 *)((int)pvVar9 + 0x1f0) = 0xffffffff;
  }
  return;
}



//==== 00447768  ns=mobyupdate_helpers  size=0x58
// sig: undefined M795_00447768(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M795_00447768(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x05';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}



//==== 004477c0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M795_004477c0(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M795_004477c0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 00447818  ns=mobyupdate_helpers  size=0x58
// sig: undefined M795_00447818(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M795_00447818(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 00447870  ns=mobyupdate_helpers  size=0x38
// sig: undefined M795_00447870(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M795_00447870(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}



//==== 004478a8  ns=mobyupdate_helpers  size=0x40
// sig: undefined M795_004478a8(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M795_004478a8(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 004478e8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M795_004478e8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M795_004478e8(void)

{
  DAT_0085a788 = 0x10000;
  return;
}



//==== 00447908  ns=mobyupdate_helpers  size=0xe4
// sig: undefined M795_00447908(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M795_00447908(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0x140) != 0) || (*(int *)(iVar3 + 0x144) != 0)) {
    fastfunc::FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0x140);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0x144);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}



//==== 004479ec  ns=mobyupdate_helpers  size=0x104
// sig: undefined M795_004479ec(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(2): 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound

void mobyupdate_helpers::M795_004479ec(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = param_1->pVar;
  if (param_1->state == '\0') {
    *(undefined4 *)((int)pvVar2 + 0x150) = 0xffffffff;
    return;
  }
  if (((worldUpdateTime ^ (int)param_1 >> 8) & 7) != 0) {
    return;
  }
  if (*(short *)((int)pvVar2 + 0x14a) != 0) {
    return;
  }
  if ((-1 < *(int *)((int)pvVar2 + 0x150)) &&
     (iVar3 = sound::IsMobyPlayingSound(param_1,*(int *)((int)pvVar2 + 0x150)), iVar3 != 0)) {
    return;
  }
  MVar1 = param_1->oClass;
  if ((short)MVar1 < 0x73) {
    if (MVar1 != RED_SHIP_1) {
      return;
    }
LAB_00447ac0:
    iVar3 = sound::PlayMobySound(1,4,param_1);
    *(int *)((int)pvVar2 + 0x150) = iVar3;
  }
  else {
    if ((short)MVar1 < 0x78) {
      if (MVar1 != YELLOW_SHIP) goto LAB_00447ac0;
    }
    else if (0x78 < (short)MVar1) {
      return;
    }
    iVar3 = sound::PlayMobySound(0,4,param_1);
    *(int *)((int)pvVar2 + 0x150) = iVar3;
  }
  return;
}



//==== 00447b40  ns=mobyupdate_helpers  size=0x7a0
// sig: undefined M795_00447b40(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(7): 000f1114 mobyfunc::GetBonePosition; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00126dd8 partupd::SpawnPart_22; 003048c0 mobyupdate_helpers::M235_003048c0; 005000b4 fastfunc::FastDecTimerU8

void mobyupdate_helpers::M795_00447b40
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  undefined1 auStack_f0 [16];
  float local_e0 [4];
  undefined1 auStack_d0 [16];
  float local_c0 [4];
  undefined1 auStack_b0 [16];
  float local_a0 [14];
  
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar9 = (ulonglong)uVar3;
  fStack00000044 = (float)param_3;
  dVar13 = (double)fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar11 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  dVar12 = (double)fStack00000048;
  if ((*(ushort *)(param_1 + 0x34) & 1) != 0) {
    return;
  }
  sVar2 = *(short *)(param_1 + 0xa6);
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  if (sVar2 != 0x78 && sVar2 != 0x84) {
    if (sVar2 == 0x77) {
LAB_00448098:
      fastfunc::FastDecTimerU8(uVar9 + 0x12f);
      if ((param_5 != 0) && (*(char *)(uVar3 + 0x12f) == '\0')) {
        return;
      }
      fastfunc::FastDecTimerU8(uVar9 + 0x12e);
      cVar1 = *(char *)(uVar3 + 0x12e);
      if ((cVar1 == '\0') || (*(char *)(uVar3 + 0x12f) != '\0')) {
        mobyfunc::GetBonePosition(param_1,0,uVar9 + 0xf0);
        cVar1 = *(char *)(uVar3 + 0x12e);
      }
      if (cVar1 != '\0') {
        return;
      }
      if ((SQRT((float)(dVar12 * dVar12 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
           mobyutil::g_FrameTime * 40.0) &&
         (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
         fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
         fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
         SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 90.0)) {
        auVar14 = loadVectorLeftIndexed(0x40,0x447af0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        M235_003048c0((double)(mobyutil::g_FrameTime * 2.5),0x3fc3333340000000,param_1,uVar9 + 0xf0,
                      ((LZCOUNT(0x4b - (uint)*(ushort *)(param_1 + 0xa6)) << 0x3a) >> 0x3f &
                      0xffffffffffff9060U) + 0xa040,
                      ((LZCOUNT(0x4b - (uint)*(ushort *)(param_1 + 0xa6)) << 0x3a) >> 0x3f &
                      0xfffffffffffff020U) + 0xa080,(int)(animationSpeed * 50.5));
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint(auVar15,auVar16,auVar14);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                           auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                           auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                           auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,
                           0x12f,uVar9);
        *(undefined1 *)(uVar3 + 0x12f) = uVar8;
      }
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x48,0x447af0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xff;
      uVar8 = storeVectorElementByteIndexed
                        (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 |
                         auVar14 << 0x20 | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 |
                         auVar14 << 0x40 | auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 |
                         auVar14 << 0x60 | auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0x12e
                         ,uVar9);
      *(undefined1 *)(uVar3 + 0x12e) = uVar8;
      return;
    }
    if (sVar2 == 0x76) {
      if (param_5 != 0) {
        return;
      }
      iVar7 = fastfunc::FastDecTimerU8(uVar9 + 0x12e);
      if (iVar7 == 0) {
        return;
      }
      if ((SQRT((float)(dVar12 * dVar12 +
                       (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
           mobyutil::g_FrameTime * 40.0) &&
         (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
         fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
         fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
         SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 90.0)) {
        iVar7 = 0;
        dVar11 = 1.2000000476837158;
        uVar10 = 0x4104820000000000;
        do {
          mobyfunc::GetBonePosition(param_1,0,auStack_b0);
          dVar12 = (double)mobyutil::MB_randRot();
          dVar13 = (double)mobyutil::MB_randRot();
          mobyutil::MB_SphericalToVector
                    ((float)((double)mobyutil::g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                     local_a0);
          partupd::SpawnPart_22(uVar10,auStack_b0,local_a0,0xffffffff80808080,&DAT_00808080);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xf);
      }
      uVar8 = mobyutil::MB_randRange((int)(animationSpeed * 7.5),(int)(animationSpeed * 20.5));
      *(undefined1 *)(uVar3 + 0x12e) = uVar8;
      return;
    }
    if (sVar2 != 0x75) {
      if (sVar2 == 0x74) {
        if (param_5 != 0) {
          return;
        }
        iVar7 = 0;
        dVar11 = 0.15000000596046448;
        uVar10 = 0x40f4820000000000;
        do {
          mobyfunc::GetBonePosition(param_1,iVar7,auStack_f0);
          dVar12 = (double)mobyutil::MB_randRot();
          dVar13 = (double)mobyutil::MB_randRot();
          mobyutil::MB_SphericalToVector
                    ((float)((double)mobyutil::g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                     local_e0);
          partupd::SpawnPart_22(uVar10,auStack_f0,local_e0,0xffffffff8040c0f0,&DAT_00808080);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        return;
      }
      if (sVar2 != 0x73) {
        if (sVar2 != 0x4b) {
          return;
        }
        goto LAB_00448098;
      }
    }
  }
  if ((param_5 == 0) && (iVar7 = fastfunc::FastDecTimerU8(uVar9 + 0x12e), iVar7 != 0)) {
    if ((SQRT((float)(dVar12 * dVar12 +
                     (double)(float)(dVar11 * dVar11 + (double)(float)(dVar13 * dVar13)))) <
         mobyutil::g_FrameTime * 40.0) &&
       (fVar4 = *(float *)(param_1 + 0x14) - GameCamera.posY,
       fVar5 = *(float *)(param_1 + 0x10) - GameCamera.posX,
       fVar6 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 75.0)) {
      iVar7 = 0;
      dVar11 = 0.6000000238418579;
      uVar10 = 0x40f9a28000000000;
      do {
        mobyfunc::GetBonePosition(param_1,0,auStack_d0);
        dVar12 = (double)mobyutil::MB_randRot();
        dVar13 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector
                  ((float)((double)mobyutil::g_FrameTime * dVar11),(float)dVar12,(float)dVar13,
                   local_c0);
        partupd::SpawnPart_22(uVar10,auStack_d0,local_c0,0xffffffff80808080,&DAT_00808080);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 10);
    }
    uVar8 = mobyutil::MB_randRange((int)(animationSpeed * 7.5),(int)(animationSpeed * 20.5));
    *(undefined1 *)(uVar3 + 0x12e) = uVar8;
  }
  return;
}



//==== 004482f8  ns=mobyupdate_helpers  size=0x54c
// sig: undefined M795_004482f8(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(4): 000ff190 mobyutil::MB_DeltAngSpeed; 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M795_004482f8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  double dVar26;
  float fVar27;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x120;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar9;
  puVar5[0x26] = in_LR;
  puVar5[0x1f] = in_f27;
  puVar5[0x20] = in_f28;
  puVar5[0x21] = in_f29;
  puVar5[0x22] = in_f30;
  puVar5[0x23] = in_f31;
  puVar5[0x1e] = unaff_r31;
  puVar5[0x1b] = unaff_r28;
  puVar5[0x1d] = unaff_r30;
  iVar4 = *(int *)(param_1 + 0x78);
  puVar5[0x19] = (longlong)(int)*(short *)(iVar4 + 0x132);
  dVar23 = 0.01745329238474369;
  fVar27 = *(float *)(param_1 + 0x48);
  dVar25 = (double)(float)((double)(longlong)puVar5[0x19] * 0.01745329238474369);
  puVar5[0x1c] = unaff_r29;
  fastfunc::FastDiffRots((double)fVar27,dVar25);
  fVar27 = *(float *)(iVar4 + 0xd0) - *(float *)(iVar4 + 0xe0);
  fVar2 = *(float *)(iVar4 + 0xd4) - *(float *)(iVar4 + 0xe4);
  fVar1 = ABS(fVar27);
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar5 + 0x7c) = fVar27;
  *(float *)(puVar5 + 0x10) = fVar2;
  *(float *)((int)puVar5 + 0x84) = fVar1 - fVar3;
  dVar22 = 0.0;
  dVar24 = 0.7853981852531433;
  uVar12 = (ulonglong)(*(uint *)((int)puVar5 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1d) & 4;
  fVar27 = ABS(*(float *)((int)puVar5 + 0x7c));
  if (*(float *)((int)puVar5 + 0x84) - 0.0 < 0.0) {
    fVar27 = fVar3;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar3 = ABS(*(float *)(puVar5 + 0x10));
  if (*(float *)((int)puVar5 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  dVar19 = dVar22;
  if (0.0 < fVar27) {
    lVar10 = uVar9 - 0x110;
    lVar16 = uVar9 - 0x68;
    lVar14 = uVar9 - 0x78;
    lVar17 = 2;
    fVar27 = (fVar3 - fVar27) / (fVar3 + fVar27);
    fVar3 = fVar27 * fVar27;
    *(float *)((int)puVar5 + 0xb4) = fVar27;
    *(float *)((int)puVar5 + 0xac) = fVar27;
    *(float *)(puVar5 + 0x16) = fVar27;
    *(float *)(puVar5 + 0x15) = fVar27;
    fVar27 = fVar3 * fVar3;
    *(float *)((int)puVar5 + 0xac) = *(float *)((int)puVar5 + 0xac) * fVar3;
    *(float *)(puVar5 + 0x16) = *(float *)(puVar5 + 0x16) * fVar27;
    *(float *)((int)puVar5 + 0xb4) = *(float *)((int)puVar5 + 0xb4) * fVar27 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar27 * fVar27;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar6 + 4) * fVar27 * fVar27;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar16 = uVar9 - 0x78;
    pfVar15 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      fVar27 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar27;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar14 = 2;
    lVar10 = lVar11;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar16;
      lVar10 = lVar10 + 0x10;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 0xa8)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar2 + fVar1);
  }
  uVar18 = fastfunc::FastWrapRot((float)dVar19,(float)dVar25);
  dVar25 = (double)fastfunc::FastDiffRots(uVar18,(double)*(float *)(param_1 + 0x48));
  fVar27 = (float)((double)((1.0 / *(float *)(iVar4 + 0x120)) * DAT_0071f408) * dVar25);
  dVar26 = (double)fVar27;
  dVar25 = (double)fastfunc::FastWrapRot(fVar27,*(float *)(param_1 + 0x48));
  *(float *)(param_1 + 0x48) = (float)dVar25;
  fVar2 = *(float *)(iVar4 + 0xd4) - *(float *)(iVar4 + 0xe4);
  fVar3 = *(float *)(iVar4 + 0xd0) - *(float *)(iVar4 + 0xe0);
  fVar27 = *(float *)(param_1 + 0x44);
  fVar1 = *(float *)(iVar4 + 0xd8) - *(float *)(iVar4 + 0xe8);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  *(float *)((int)puVar5 + 0x74) = fVar1;
  dVar21 = ABS((double)fVar1);
  dVar20 = ABS((double)fVar2);
  *(float *)(puVar5 + 0xe) = fVar2;
  *(float *)(puVar5 + 0xf) = (float)(dVar20 - dVar21);
  dVar19 = (double)*(float *)(iVar4 + 0x118);
  uVar12 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  uVar13 = uVar12 << 2 | 0x735900;
  dVar25 = ABS((double)*(float *)(puVar5 + 0xe));
  if ((double)*(float *)(puVar5 + 0xf) - dVar22 < 0.0) {
    dVar25 = dVar21;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar2 = *(float *)((int)uVar13 + 4);
  dVar21 = ABS((double)*(float *)((int)puVar5 + 0x74));
  if ((double)*(float *)(puVar5 + 0xf) - dVar22 < 0.0) {
    dVar21 = dVar20;
  }
  if (dVar22 < dVar25) {
    lVar10 = uVar9 - 0x110;
    lVar16 = uVar9 - 0x88;
    lVar14 = uVar9 - 0x98;
    lVar17 = 2;
    fVar1 = (float)(dVar21 - dVar25) / (float)(dVar21 + dVar25);
    fVar8 = fVar1 * fVar1;
    *(float *)((int)puVar5 + 0x94) = fVar1;
    *(float *)((int)puVar5 + 0x8c) = fVar1;
    *(float *)(puVar5 + 0x12) = fVar1;
    *(float *)(puVar5 + 0x11) = fVar1;
    fVar1 = fVar8 * fVar8;
    *(float *)((int)puVar5 + 0x8c) = *(float *)((int)puVar5 + 0x8c) * fVar8;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar1;
    *(float *)((int)puVar5 + 0x94) = *(float *)((int)puVar5 + 0x94) * fVar1 * fVar8;
    do {
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar1 * fVar1;
      iVar6 = (int)lVar14;
      lVar14 = lVar14 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar6 + 4) * fVar1 * fVar1;
      lVar16 = lVar16 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar16 = uVar9 - 0x98;
    uVar13 = ZEXT48(&DAT_007358e0);
    lVar10 = lVar11;
    lVar14 = lVar16;
    do {
      pfVar15 = (float *)uVar13;
      fVar1 = pfVar15[1];
      uVar13 = uVar13 + 8;
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * *pfVar15;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar1;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar11;
      iVar7 = (int)lVar16;
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar6 + 0x88)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar22 = (double)((float)(dVar22 + dVar24) * fVar3 + fVar2);
  }
  dVar25 = 10.0;
  dVar24 = 5.0;
  dVar22 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)fVar27,-dVar22,
                              (double)((float)((double)(float)(dVar19 * 10.0) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)((double)(float)(dVar19 * 5.0) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)(dVar19 * dVar23) * mobyutil::g_FrameTime),
                              &DAT_004482e0,uVar13,iVar4 + 0x11c);
  *(float *)(param_1 + 0x44) = (float)dVar22;
  fVar27 = mobyutil::MB_WrapRot((float)(dVar26 * (double)*(float *)(iVar4 + 0x124)));
  dVar22 = (double)fastfunc::FastDiffRots((double)*(float *)(param_1 + 0x40),(double)fVar27);
  fVar27 = mobyutil::MB_WrapRot((float)(dVar22 * (double)*(float *)(iVar4 + 0x128)));
  dVar22 = (double)*(float *)(iVar4 + 0x110);
  dVar22 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),(double)fVar27,
                              (double)((float)((double)(float)(dVar22 * dVar25) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)((double)(float)(dVar22 * dVar24) * dVar23) *
                                      DAT_0071f418),
                              (double)((float)(dVar22 * dVar23) * mobyutil::g_FrameTime));
  *(float *)(param_1 + 0x40) = (float)dVar22;
  return;
}



//==== 00448858  ns=mobyupdate_helpers  size=0x208
// sig: undefined M795_00448858(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(3): 000fe484 mobyutil::MB_randRange; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16

void mobyupdate_helpers::M795_00448858(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  MVar1 = param_1->oClass;
  pvVar2 = param_1->pVar;
  if ((short)MVar1 < 0x73) {
    if (((MVar1 != RED_SHIP_1) && (MVar1 != 0x40)) && (MVar1 != 0x33)) {
      return;
    }
  }
  else if ((short)MVar1 < 0x76) {
    if (0x74 < (short)MVar1) {
      return;
    }
  }
  else if (0x77 < (short)MVar1) {
    return;
  }
  if (*(short *)((int)pvVar2 + 0x148) == -1) {
    iVar6 = mobyutil::MB_randRange
                      ((longlong)*(short *)((int)pvVar2 + 0x14c),
                       (longlong)*(short *)((int)pvVar2 + 0x14c) +
                       (longlong)*(short *)((int)pvVar2 + 0x14e));
    *(short *)((int)pvVar2 + 0x148) = (short)(int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
  }
  else {
    iVar6 = fastfunc::FastDecTimerS16((int)pvVar2 + 0x148);
    if (iVar6 != 0) {
      fVar3 = (param_1->pos).y - GameCamera.posY;
      fVar4 = (param_1->pos).x - GameCamera.posX;
      fVar5 = (param_1->pos).z - GameCamera.posZ;
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if ((15.0 < fVar3) && (fVar3 < 90.0)) {
        sound::PlayMobySound(0,0,param_1);
      }
      iVar6 = mobyutil::MB_randRange
                        ((int)(animationSpeed * 2200.5),
                         (int)(animationSpeed * 2200.5) + (int)(animationSpeed * 1000.5));
      *(short *)((int)pvVar2 + 0x148) =
           (short)(int)(animationSpeed * ((float)(longlong)iVar6 + 0.5));
    }
  }
  return;
}



//==== 00448ab0  ns=mobyupdate_helpers  size=0xacc
// sig: undefined M795_00448ab0(void)
// callers(1): 004495b8 mobyupdate_unsorted::UpdateMoby_a_lot_20
// callees(8): 000fcd60 mobyutil::MB_DistributeBolts; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011b728 mobyutil::MB_UnlockSkillPoint; 0015cdb0 sound::sound_Kill; 0015d380 sound::sound_LevelPlay; 004fffb4 fastfunc::FastDecTimerS16

void mobyupdate_helpers::M795_00448ab0(MobyInstance *param_1,undefined8 param_2,int param_3)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  u16 *puVar4;
  undefined2 uVar5;
  int iVar6;
  vec4 *pvVar7;
  vec4 *pvVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [56];
  
  pvVar3 = param_1->pVar;
  iVar6 = mobyutil::MB_damage(param_1,0xa30000,0);
  if ((iVar6 != 0) && ((*(char *)(iVar6 + 0x28) != '\x02' || (*(char *)(iVar6 + 0x29) != '\x01'))))
  {
    uVar10 = 0;
    if ((*(uint *)(iVar6 + 0x24) & 0x800000) == 0) {
      mobyutil::MB_DistributeBolts(param_1,3,5,2,0xffffffffffffffff);
    }
    else {
      mobyutil::MB_DistributeBolts(param_1,10,0x14,2,0xffffffffffffffff);
    }
    auVar12 = ZEXT416(0xffffffff);
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar12 = loadVectorLeftIndexed(0x28,0x448a60);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar12 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,
                         auVar13);
    auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
    auVar12 = vectorSplatHalfWord(auVar12,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar12,0x14a,ZEXT48(pvVar3));
    *(undefined2 *)((int)pvVar3 + 0x14a) = uVar5;
    mobyutil::MB_genericExplosion
              (uVar10,uVar10,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
               0x4008000000000000,0x402e000000000000,param_1,local_90,local_a0,0x14a,1,0x14,3,4);
    pvVar8 = &param_1->rotation;
    pvVar7 = &param_1->pos;
    MVar1 = param_1->oClass;
    dVar11 = 12.0;
    dVar9 = 90.5;
    if (MVar1 == PURPLE_SHIP_0084) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6bc,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6be,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6bf,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == BEIGE_SHIP) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b8,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b9,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ba,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == GREEN_SHIP_0077) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b5,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b6,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b7,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == TRUCK_SHIP) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6b2,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b3,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b4,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == YELLOW_SHIP) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6af,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b0,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6b1,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == RED_SHIP_2) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6ac,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ad,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ae,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    else if (MVar1 == WHITE_SHIP) {
      mobyutil::MB_SpawnDebrisMoby
                ((double)(DAT_0071f418 * 12.0),param_1,0x6a9,pvVar7,pvVar8,
                 (int)(animationSpeed * 90.5),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6aa,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
      mobyutil::MB_SpawnDebrisMoby
                ((double)(float)((double)DAT_0071f418 * dVar11),param_1,0x6ab,pvVar7,pvVar8,
                 (int)((double)animationSpeed * dVar9),0);
    }
    if (param_1->oClass == BLIMP) {
      mobyutil::MB_UnlockSkillPoint(4);
    }
    sound::sound_LevelPlay(0,0,param_1);
  }
  DAT_00735d00 = &PTR_UpdateMoby_a_lot_20_0070e788;
  param_1->damage = -1;
  if (*(short *)((int)pvVar3 + 0x14a) != 0) {
    iVar6 = fastfunc::FastDecTimerS16(ZEXT48(pvVar3) + 0x14a);
    if ((iVar6 == 0) || (param_3 == 0)) {
      iVar6 = *(int *)((int)pvVar3 + 0x150);
      param_1->collision = (ushort *)0x0;
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
      if ((iVar6 != -1) &&
         ((sound::g_SoundChannels[iVar6].pMoby == param_1 &&
          (sound::g_SoundChannels[iVar6].state != '\0')))) {
        sound::sound_Kill(iVar6);
      }
      MVar2 = param_1->modeBits;
      *(undefined4 *)((int)pvVar3 + 0x150) = 0xffffffff;
      param_1->modeBits =
           MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      puVar4 = param_1->pClass->collision;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      param_1->collision = puVar4;
    }
  }
  return;
}



//==== 004495b8  ns=mobyupdate_unsorted  size=0x10dc
// sig: undefined UpdateMoby_a_lot_20(MobyInstance * moby)
// callers(0): 
// callees(26): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 001129d0 mobyutil::MB_ScaledVecWrapper; 00136724 path::InitFollower; 001367d0 path::PathFindClosestPnt; 00139ef8 path::PathFollower_WrapIdx; 00139f58 path::PathFollower_Advance; 00139fc0 path::Spline_CalcTan; 0013a290 path::Spline_Hermite; 0013a440 path::Spline_CalcLen; 0015cdb0 sound::sound_Kill; 00447908 mobyupdate_helpers::M795_00447908; 004479ec mobyupdate_helpers::M795_004479ec; 00447b40 mobyupdate_helpers::M795_00447b40; 004482f8 mobyupdate_helpers::M795_004482f8; 00448858 mobyupdate_helpers::M795_00448858; 00448ab0 mobyupdate_helpers::M795_00448ab0; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView; 00502a64 fastfunc::FastVecSub; 005cd098 libc::printf
// strings: 0065fff0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:35 p != NULL' | 00658140: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 64
   Moby 75
   Moby 115
   Moby 116
   Moby 117
   Moby 118
   Moby 119
   Moby 120
   Moby 132
   Moby 795 */

void mobyupdate_unsorted::UpdateMoby_a_lot_20(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MOBY_OCLASSES MVar13;
  void *pvVar14;
  MobyInstance *pMVar15;
  uint uVar16;
  Spline *pSVar17;
  undefined2 uVar18;
  ulonglong *puVar19;
  Vec4 *pVVar20;
  float fVar21;
  int iVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  int iVar27;
  PathFollower *follower;
  uint uVar28;
  int iVar29;
  longlong lVar26;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  float *pfVar36;
  undefined8 uVar33;
  ulonglong uVar34;
  longlong lVar35;
  double dVar37;
  ulonglong uVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar39;
  ulonglong in_f31;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar43 [16];
  MobyInstance *local_110 [68];
  
  lVar25 = (longlong)(int)moby;
  uVar31 = ZEXT48(&stack0x00000000);
  lVar26 = uVar31 - 0x1c0;
  puVar19 = (ulonglong *)lVar26;
  *puVar19 = uVar31;
  puVar19[0x3a] = in_LR;
  puVar19[0x37] = in_f31;
  puVar19[0x34] = unaff_r29;
  lVar23 = uVar31 - 0x50;
  puVar24 = (undefined4 *)lVar23;
  puVar24[3] = in_vr31_32_3;
  puVar24[2] = in_vr31_32_2;
  puVar24[1] = in_vr31_32_1;
  *puVar24 = in_vr31_32_0;
  cVar1 = moby->enabled;
  puVar19[0x35] = unaff_r30;
  iVar29 = 0;
  pvVar14 = moby->pVar;
  puVar19[0x36] = unaff_r31;
  puVar19[0x32] = unaff_r27;
  puVar19[0x33] = unaff_r28;
  puVar19[0x31] = unaff_r26;
  if (cVar1 == '\0') {
    fVar3 = (moby->pos).x;
    puVar19[0x2b] = (longlong)(int)moby->drawDistance;
    *(f32 *)(puVar19 + 0x10) = fVar3;
    *(f32 *)((int)puVar19 + 0x84) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(undefined4 *)((int)puVar19 + 0x8c) = 0x40e00000;
    *(f32 *)(puVar19 + 0x11) = fVar3;
    iVar27 = fastfunc::FastCheckBsphereInView((double)(longlong)puVar19[0x2b],uVar31 - 0x140);
    if (iVar27 == -1) {
      iVar29 = 1;
    }
  }
  if (pvVar14 != (void *)0x0) {
    if ((moby->group != 0xff) && (moby->state != '\x03' && moby->state != '\0')) {
      mobyutil::MB_GetFirstMobyInGroup(local_110,(uint)(byte)moby->group,'\0','\0');
      pMVar15 = *(MobyInstance **)(puVar19 + 0x16);
      if (pMVar15 == moby) {
        while (pMVar15 != (MobyInstance *)0x0) {
          fastfunc::FastIntToDouble(pMVar15->drawDistance);
          iVar27 = mobyutil::MB_ScaledVecWrapper(pMVar15);
          if (iVar27 != -1) goto LAB_00449784;
          mobyutil::MB_GetNextMobyInGroup(local_110,*(MobyInstance **)(puVar19 + 0x16),'\0','\0');
          pMVar15 = *(MobyInstance **)(puVar19 + 0x16);
        }
        mobyutil::MB_GetFirstMobyInGroup(local_110,(uint)(byte)moby->group,'\0','\0');
        iVar27 = *(int *)(puVar19 + 0x16);
        if (iVar27 != 0) {
          auVar43 = loadVectorLeftIndexed(lVar23,0x44957c);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          do {
            auVar41 = ZEXT416(0xffffffff);
            auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
            auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            *(undefined1 *)(iVar27 + 0x20) = 3;
            auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar41);
            auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
            auVar41 = vectorSplatHalfWord(auVar41,1);
            uVar18 = storeVectorElementHalfWordIndexed
                               (auVar41,300,(ulonglong)*(uint *)(iVar27 + 0x78));
            *(undefined2 *)(*(uint *)(iVar27 + 0x78) + 300) = uVar18;
            mobyutil::MB_GetNextMobyInGroup(local_110,*(MobyInstance **)(puVar19 + 0x16),'\0','\0');
            iVar27 = *(int *)(puVar19 + 0x16);
          } while (iVar27 != 0);
        }
      }
    }
LAB_00449784:
    mobyupdate_helpers::M795_004479ec(lVar25);
    mobyupdate_helpers::M795_00448858(lVar25);
    bVar2 = moby->state;
    follower = (PathFollower *)((int)pvVar14 + 0x60);
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        if (*(int *)((int)pvVar14 + 0x74) == -1) {
          MVar13 = moby->oClass;
          uVar28 = (int)moby - (int)MobyInstance;
          puVar19[0x2b] =
               (longlong)(int)(((int)uVar28 >> 8) + (uint)((int)uVar28 < 0 && (uVar28 & 0xff) != 0))
          ;
          uVar33 = fastfunc::FastDoubleToInt((double)(longlong)puVar19[0x2b]);
          libc::printf("WARNING moby class %d instance %d has no path!\n",MVar13,uVar33);
        }
        else {
          pSVar17 = Splines[*(int *)((int)pvVar14 + 0x74)];
          pVVar20 = pSVar17->points + pSVar17->cnt + -1;
          fVar8 = pSVar17->points[0].y - pVVar20->y;
          fVar10 = pSVar17->points[0].x - pVVar20->x;
          fVar9 = pSVar17->points[0].z - pVVar20->z;
          if (SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8) < 0.5) {
            pSVar17->cnt = pSVar17->cnt + -1;
          }
        }
        moby->updateDistance = -1;
        *(undefined1 *)((int)pvVar14 + 0x2b) = 1;
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x140) >> 0x1f;
        *(undefined1 *)((int)pvVar14 + 0x2c) = 0x25;
        if (0x43fa0000 < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x140)) - uVar28)) {
          dVar37 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar14 + 0x140) =
               (float)(dVar37 * (double)*(float *)((int)pvVar14 + 0x140)) * 0.001;
        }
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x144) >> 0x1f;
        if (0x43fa0000 < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x144)) - uVar28)) {
          dVar37 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar14 + 0x144) =
               (float)(dVar37 * (double)*(float *)((int)pvVar14 + 0x144)) * 0.001;
        }
        if (*(int *)((int)pvVar14 + 0x74) == -1) {
          moby->state = '\x02';
        }
        else {
          uVar28 = (int)moby - (int)MobyInstance;
          uVar28 = ((int)uVar28 >> 8) + (uint)((int)uVar28 < 0 && (uVar28 & 0xff) != 0);
          iVar29 = ((int)uVar28 >> 1) + (uint)((int)uVar28 < 0 && (uVar28 & 1) != 0);
          cVar1 = (char)(iVar29 >> 0x1f);
          *(char *)((int)pvVar14 + 0x131) =
               (char)iVar29 +
               (((char)(iVar29 / 7) + cVar1) - ((char)((char)(iVar29 / 0x7000000) + cVar1) >> 7)) *
               -7;
          path::InitFollower(follower);
          uVar30 = ZEXT48(*(Spline **)((int)pvVar14 + 0x70));
          uVar34 = (ulonglong)*(uint *)((int)pvVar14 + 0x60);
          if (*(char *)((int)pvVar14 + 0x65) == '\0') {
            if ((int)*(uint *)((int)pvVar14 + 0x60) < 1) {
              iVar29 = path::PathFindClosestPnt
                                 (0.0,(Vec4 *)&moby->pos,*(Spline **)((int)pvVar14 + 0x70));
              uVar34 = (ulonglong)iVar29;
              *(int *)((int)pvVar14 + 0x60) = iVar29;
              uVar30 = ZEXT48(*(int **)((int)pvVar14 + 0x70));
              iVar27 = 0;
              if (-1 < *(char *)((int)pvVar14 + 100)) {
                iVar27 = **(int **)((int)pvVar14 + 0x70) + -1;
              }
              if (iVar29 == iVar27) {
                uVar34 = 0;
                *(undefined4 *)((int)pvVar14 + 0x60) = 0;
              }
            }
            iVar29 = (int)uVar30 + (int)((uVar34 & 0xffffffff) << 4);
            fVar8 = (moby->pos).y - *(float *)(iVar29 + 0x14);
            fVar10 = (moby->pos).x - *(float *)(iVar29 + 0x10);
            fVar9 = (moby->pos).z - *(float *)(iVar29 + 0x18);
            iVar29 = (int)uVar30 + (int)(uVar34 << 4);
            *(float *)((int)pvVar14 + 0x6c) = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8);
            fVar8 = *(float *)(iVar29 + 0x10) - (moby->pos).x;
            fVar10 = *(float *)(iVar29 + 0x14) - (moby->pos).y;
            fVar9 = ABS(fVar8);
            *(float *)((int)puVar19 + 0xcc) = fVar8;
            fVar12 = ABS(fVar10);
            *(float *)(puVar19 + 0x1a) = fVar10;
            *(float *)((int)puVar19 + 0xd4) = fVar9 - fVar12;
            fVar8 = 0.0;
            uVar38 = (ulonglong)(*(uint *)((int)puVar19 + 0xcc) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar19 + 0xd4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar19 + 0x1a) >> 0x1d) & 4;
            fVar10 = ABS(*(float *)((int)puVar19 + 0xcc));
            if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
              fVar10 = fVar12;
            }
            fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar38 << 2));
            fVar12 = *(float *)(((uint)(uVar38 << 2) | 0x735900) + 4);
            fVar21 = ABS(*(float *)(puVar19 + 0x1a));
            if (*(float *)((int)puVar19 + 0xd4) - 0.0 < 0.0) {
              fVar21 = fVar9;
            }
            if (0.0 < fVar10) {
              lVar23 = uVar31 - 0x1b0;
              lVar35 = uVar31 - 0x78;
              lVar32 = uVar31 - 0x88;
              lVar39 = 2;
              fVar10 = (fVar21 - fVar10) / (fVar21 + fVar10);
              fVar9 = fVar10 * fVar10;
              *(float *)((int)puVar19 + 0x144) = fVar10;
              *(float *)((int)puVar19 + 0x13c) = fVar10;
              *(float *)(puVar19 + 0x28) = fVar10;
              *(float *)(puVar19 + 0x27) = fVar10;
              fVar10 = fVar9 * fVar9;
              *(float *)((int)puVar19 + 0x13c) = *(float *)((int)puVar19 + 0x13c) * fVar9;
              *(float *)(puVar19 + 0x28) = *(float *)(puVar19 + 0x28) * fVar10;
              *(float *)((int)puVar19 + 0x144) = *(float *)((int)puVar19 + 0x144) * fVar10 * fVar9;
              do {
                *(float *)((int)lVar23 + 0x138) = *(float *)((int)lVar23 + 0x128) * fVar10 * fVar10;
                iVar29 = (int)lVar32;
                lVar32 = lVar32 + 8;
                lVar23 = lVar23 + 8;
                *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar10 * fVar10;
                lVar35 = lVar35 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar39 = 4;
              lVar35 = uVar31 - 0x88;
              pfVar36 = (float *)&DAT_007358e0;
              lVar23 = lVar26;
              lVar32 = lVar35;
              do {
                fVar10 = *pfVar36;
                fVar9 = pfVar36[1];
                pfVar36 = pfVar36 + 2;
                *(float *)((int)lVar23 + 0x138) = *(float *)((int)lVar23 + 0x138) * fVar10;
                lVar23 = lVar23 + 8;
                *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
                lVar32 = lVar32 + 8;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              lVar32 = 2;
              lVar23 = lVar26;
              do {
                iVar29 = (int)lVar23;
                lVar23 = lVar23 + 0x10;
                iVar27 = (int)lVar35;
                lVar35 = lVar35 + 0x10;
                fVar8 = fVar8 + *(float *)(iVar29 + 0x138) + *(float *)(iVar27 + 4) +
                        *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar12;
            }
            *(float *)((int)pvVar14 + 0x78) = fVar8;
            *(undefined4 *)((int)pvVar14 + 0x68) = 0;
            *(undefined4 *)((int)pvVar14 + 0x7c) = 0;
            *(undefined1 *)((int)pvVar14 + 0x65) = 2;
          }
          uVar30 = uVar30 + (uVar34 & 0xfffffff) * 0x10;
          iVar29 = (int)uVar30;
          *(undefined4 *)((int)pvVar14 + 0xe0) = *(undefined4 *)(iVar29 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xe4) = *(undefined4 *)(iVar29 + 0x14);
          *(undefined4 *)((int)pvVar14 + 0xe8) = *(undefined4 *)(iVar29 + 0x18);
          uVar4 = *(undefined4 *)(iVar29 + 0x1c);
          *(undefined4 *)((int)pvVar14 + 0x100) = 0x3f800000;
          *(undefined4 *)((int)pvVar14 + 0xec) = uVar4;
          path::Spline_CalcTan
                    (*(float *)((int)pvVar14 + 0x104),*(float *)((int)pvVar14 + 0x108),
                     (Vec4 *)((int)pvVar14 + 0xa0),follower,uVar30 & 0xffffffff,0.0,0);
          iVar29 = *(int *)((int)pvVar14 + 0x70) + *(int *)((int)pvVar14 + 0x60) * 0x10;
          uVar4 = *(undefined4 *)(iVar29 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xc0) = uVar4;
          uVar5 = *(undefined4 *)(iVar29 + 0x14);
          *(undefined4 *)((int)pvVar14 + 0xc4) = uVar5;
          uVar6 = *(undefined4 *)(iVar29 + 0x18);
          *(undefined4 *)((int)pvVar14 + 200) = uVar6;
          uVar7 = *(undefined4 *)(iVar29 + 0x1c);
          *(undefined4 *)((int)pvVar14 + 0xb0) = uVar4;
          *(undefined4 *)((int)pvVar14 + 0xcc) = uVar7;
          *(undefined4 *)((int)pvVar14 + 0xb4) = uVar5;
          *(undefined4 *)((int)pvVar14 + 0xb8) = uVar6;
          *(undefined4 *)((int)pvVar14 + 0xbc) = uVar7;
          fVar10 = 0.0;
          (moby->rotation).x = 0.0;
          uVar28 = *(uint *)((int)pvVar14 + 0xa8);
          fVar9 = ABS(*(float *)((int)pvVar14 + 0xa8));
          fVar8 = SQRT(*(float *)((int)pvVar14 + 0xa0) * *(float *)((int)pvVar14 + 0xa0) +
                       *(float *)((int)pvVar14 + 0xa4) * *(float *)((int)pvVar14 + 0xa4));
          fVar12 = ABS(fVar8);
          *(float *)((int)puVar19 + 0xc4) = fVar8;
          *(float *)(puVar19 + 0x19) = fVar12 - fVar9;
          uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xc4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar19 + 0x19) >> 0x1e) & 2 |
                   (ulonglong)(uVar28 >> 0x1d) & 4;
          fVar8 = ABS(*(float *)((int)puVar19 + 0xc4));
          if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
            fVar8 = fVar9;
          }
          fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
          if (*(float *)(puVar19 + 0x19) - 0.0 < 0.0) {
            fVar9 = fVar12;
          }
          fVar12 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          fVar21 = fVar10;
          if (0.0 < fVar8) {
            lVar23 = uVar31 - 0x1b0;
            lVar32 = uVar31 - 0xa8;
            lVar35 = uVar31 - 0x98;
            lVar39 = 2;
            fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar19 + 0x124) = fVar8;
            *(float *)((int)puVar19 + 0x11c) = fVar8;
            *(float *)(puVar19 + 0x24) = fVar8;
            *(float *)(puVar19 + 0x23) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar19 + 0x11c) = *(float *)((int)puVar19 + 0x11c) * fVar9;
            *(float *)(puVar19 + 0x24) = *(float *)(puVar19 + 0x24) * fVar8;
            *(float *)((int)puVar19 + 0x124) = *(float *)((int)puVar19 + 0x124) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0x118) = *(float *)((int)lVar23 + 0x108) * fVar8 * fVar8;
              iVar29 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar8 * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 0xa8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar8 = *pfVar36;
              fVar9 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0x118) = *(float *)((int)lVar23 + 0x118) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar32 = 2;
            lVar23 = lVar26;
            fVar8 = fVar10;
            do {
              iVar29 = (int)lVar23;
              lVar23 = lVar23 + 0x10;
              iVar27 = (int)lVar35;
              lVar35 = lVar35 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar29 + 0x118) + *(float *)(iVar27 + 4) +
                      *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar21 = (fVar8 + 0.7853982) * fVar11 + fVar12;
          }
          (moby->rotation).y = -fVar21;
          uVar28 = *(uint *)((int)pvVar14 + 0xa0);
          uVar16 = *(uint *)((int)pvVar14 + 0xa4);
          fVar12 = ABS(*(float *)((int)pvVar14 + 0xa0));
          fVar9 = ABS(*(float *)((int)pvVar14 + 0xa4));
          *(float *)(puVar19 + 0x18) = fVar12 - fVar9;
          uVar34 = (ulonglong)(uVar28 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar19 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(uVar16 >> 0x1d) & 4;
          fVar8 = fVar12;
          if (*(float *)(puVar19 + 0x18) - 0.0 < 0.0) {
            fVar8 = fVar9;
          }
          fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
          if (*(float *)(puVar19 + 0x18) - 0.0 < 0.0) {
            fVar9 = fVar12;
          }
          fVar12 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (0.0 < fVar8) {
            lVar23 = uVar31 - 0x1b0;
            lVar35 = uVar31 - 0xb8;
            lVar32 = uVar31 - 200;
            lVar39 = 2;
            fVar8 = (fVar9 - fVar8) / (fVar9 + fVar8);
            fVar9 = fVar8 * fVar8;
            *(float *)((int)puVar19 + 0x104) = fVar8;
            *(float *)((int)puVar19 + 0xfc) = fVar8;
            *(float *)(puVar19 + 0x20) = fVar8;
            *(float *)(puVar19 + 0x1f) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)((int)puVar19 + 0xfc) = *(float *)((int)puVar19 + 0xfc) * fVar9;
            *(float *)(puVar19 + 0x20) = *(float *)(puVar19 + 0x20) * fVar8;
            *(float *)((int)puVar19 + 0x104) = *(float *)((int)puVar19 + 0x104) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar23 + 0xf8) = *(float *)((int)lVar23 + 0xe8) * fVar8 * fVar8;
              iVar29 = (int)lVar32;
              lVar32 = lVar32 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar29 + 4) * fVar8 * fVar8;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 200;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar8 = *pfVar36;
              fVar9 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0xf8) = *(float *)((int)lVar23 + 0xf8) * fVar8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar9;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar23 = 2;
            do {
              iVar29 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              iVar27 = (int)lVar35;
              lVar35 = lVar35 + 0x10;
              fVar10 = fVar10 + *(float *)(iVar29 + 0xf8) + *(float *)(iVar27 + 4) +
                       *(float *)(iVar27 + 8) + *(float *)(iVar27 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar10 = (fVar10 + 0.7853982) * fVar11 + fVar12;
          }
          (moby->rotation).z = fVar10;
          *(undefined4 *)((int)pvVar14 + 0x114) = 0;
          *(undefined4 *)((int)pvVar14 + 0x11c) = 0;
          (moby->pos).x = *(f32 *)((int)pvVar14 + 0xe0);
          (moby->pos).y = *(f32 *)((int)pvVar14 + 0xe4);
          (moby->pos).z = *(f32 *)((int)pvVar14 + 0xe8);
          (moby->pos).w = *(f32 *)((int)pvVar14 + 0xec);
          mobyupdate_helpers::M795_00447908(lVar25,lVar25 + 0x10);
          uVar28 = *(uint *)((int)pvVar14 + 0x13c);
          uVar33 = 7;
          *(undefined1 *)((int)pvVar14 + 0x131) = 7;
          uVar31 = (ulonglong)((uint)((int)uVar28 >> 0x1f) >> 1 ^ uVar28) -
                   (longlong)((int)uVar28 >> 0x1f);
          if ((int)uVar31 < 0x40c90fdc) {
            uVar31 = (ulonglong)*(uint *)((int)pvVar14 + 0x134);
            if ((*(uint *)((int)pvVar14 + 0x134) != 0) &&
               (uVar31 = 0xffffffffbf800000, uVar28 == 0xbf800000)) {
              dVar37 = (double)mobyutil::MB_randRot();
              *(float *)((int)pvVar14 + 0x13c) = (float)dVar37;
            }
          }
          else {
            *(float *)((int)pvVar14 + 0x13c) = *(float *)((int)pvVar14 + 0x13c) * 0.017453292;
          }
          *(undefined4 *)((int)pvVar14 + 0xd0) = *(undefined4 *)((int)pvVar14 + 0xc0);
          *(undefined4 *)((int)pvVar14 + 0xd4) = *(undefined4 *)((int)pvVar14 + 0xc4);
          *(undefined4 *)((int)pvVar14 + 0xd8) = *(undefined4 *)((int)pvVar14 + 200);
          *(undefined4 *)((int)pvVar14 + 0xdc) = *(undefined4 *)((int)pvVar14 + 0xcc);
          path::Spline_CalcLen
                    ((double)*(float *)((int)pvVar14 + 0x104),
                     (double)*(float *)((int)pvVar14 + 0x108),follower,uVar31,uVar33,0,lVar25);
          if (*(short *)((int)pvVar14 + 300) < 1) {
            *(undefined2 *)((int)pvVar14 + 0x14a) = 0;
            moby->state = '\x01';
          }
          else {
            moby->state = '\x03';
          }
        }
      }
      else {
        *(f32 *)(puVar19 + 0xe) = (moby->pos).x;
        dVar37 = 5.26354424712089e-315;
        *(f32 *)((int)puVar19 + 0x74) = (moby->pos).y;
        *(f32 *)(puVar19 + 0xf) = (moby->pos).z;
        *(f32 *)((int)puVar19 + 0x7c) = (moby->pos).w;
        uVar28 = (int)*(uint *)((int)pvVar14 + 0x100) >> 0x1f;
        lVar23 = (longlong)(int)uVar28;
        if (0x3f7fffff < (int)((uVar28 >> 1 ^ *(uint *)((int)pvVar14 + 0x100)) - uVar28)) {
          *(float *)((int)pvVar14 + 0x100) = *(float *)((int)pvVar14 + 0x100) - 1.0;
          iVar27 = path::PathFollower_Advance(follower);
          *(undefined4 *)((int)pvVar14 + 0x90) = *(undefined4 *)((int)pvVar14 + 0xa0);
          *(undefined4 *)((int)pvVar14 + 0x94) = *(undefined4 *)((int)pvVar14 + 0xa4);
          *(undefined4 *)((int)pvVar14 + 0x98) = *(undefined4 *)((int)pvVar14 + 0xa8);
          *(undefined4 *)((int)pvVar14 + 0x9c) = *(undefined4 *)((int)pvVar14 + 0xac);
          path::Spline_CalcTan
                    (*(float *)((int)pvVar14 + 0x104),*(float *)((int)pvVar14 + 0x108),
                     (Vec4 *)((int)pvVar14 + 0xa0),follower,lVar23,(float)dVar37,1);
          *(undefined4 *)((int)pvVar14 + 0xb0) = *(undefined4 *)((int)pvVar14 + 0xc0);
          *(undefined4 *)((int)pvVar14 + 0xb4) = *(undefined4 *)((int)pvVar14 + 0xc4);
          *(undefined4 *)((int)pvVar14 + 0xb8) = *(undefined4 *)((int)pvVar14 + 200);
          *(undefined4 *)((int)pvVar14 + 0xbc) = *(undefined4 *)((int)pvVar14 + 0xcc);
          lVar23 = path::PathFollower_WrapIdx(follower,iVar27 + 1);
          iVar27 = *(int *)((int)pvVar14 + 0x70) + (int)(lVar23 << 4);
          *(undefined4 *)((int)pvVar14 + 0xc0) = *(undefined4 *)(iVar27 + 0x10);
          *(undefined4 *)((int)pvVar14 + 0xc4) = *(undefined4 *)(iVar27 + 0x14);
          *(undefined4 *)((int)pvVar14 + 200) = *(undefined4 *)(iVar27 + 0x18);
          *(undefined4 *)((int)pvVar14 + 0xcc) = *(undefined4 *)(iVar27 + 0x1c);
        }
        fVar8 = *(float *)((int)pvVar14 + 0x13c);
        fVar10 = 3.1415925 - fVar8;
        if (fVar8 - (3.1415925 - fVar8) < 0.0) {
          fVar10 = fVar8;
        }
        fVar9 = -3.1415925 - fVar8;
        if ((-3.1415925 - fVar8) - fVar10 < 0.0) {
          fVar9 = fVar10;
        }
        fVar10 = fVar9 * fVar9;
        fVar12 = fVar10 * fVar10 * fVar9;
        fVar11 = fVar10 * fVar12;
        dVar40 = (double)((*(float *)((int)pvVar14 + 0x134) *
                           (fVar10 * fVar11 * 2.601887e-06 +
                           fVar11 * -0.0001980741 +
                           fVar12 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) +
                          *(float *)((int)pvVar14 + 0x10c)) / *(float *)((int)pvVar14 + 0xbc));
        dVar37 = (double)fastfunc::FastWrapRot(fVar8,*(float *)((int)pvVar14 + 0x138) * 0.017453292)
        ;
        *(float *)((int)pvVar14 + 0x13c) = (float)dVar37;
        *(undefined4 *)((int)pvVar14 + 0xe0) = *(undefined4 *)((int)pvVar14 + 0xd0);
        *(undefined4 *)((int)pvVar14 + 0xe4) = *(undefined4 *)((int)pvVar14 + 0xd4);
        *(undefined4 *)((int)pvVar14 + 0xe8) = *(undefined4 *)((int)pvVar14 + 0xd8);
        *(undefined4 *)((int)pvVar14 + 0xec) = *(undefined4 *)((int)pvVar14 + 0xdc);
        path::Spline_Hermite
                  ((float)((double)*(float *)((int)pvVar14 + 0x100) + dVar40),
                   (Vec4 *)((int)pvVar14 + 0xd0),(Vec4 *)((int)pvVar14 + 0xb0),
                   (Vec4 *)((int)pvVar14 + 0xc0),(Vec4 *)((int)pvVar14 + 0x90),
                   (Vec4 *)((int)pvVar14 + 0xa0));
        if (iVar29 == 0) {
          mobyupdate_helpers::M795_004482f8(lVar25);
        }
        else {
          fVar8 = 0.0;
          (moby->rotation).w = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.0;
          (moby->rotation).x = 0.0;
          fVar10 = *(float *)((int)pvVar14 + 0xd0) - *(float *)((int)pvVar14 + 0xe0);
          fVar11 = *(float *)((int)pvVar14 + 0xd4) - *(float *)((int)pvVar14 + 0xe4);
          fVar9 = ABS(fVar10);
          fVar12 = ABS(fVar11);
          *(float *)((int)puVar19 + 0xb4) = fVar10;
          *(float *)(puVar19 + 0x17) = fVar11;
          *(float *)((int)puVar19 + 0xbc) = fVar9 - fVar12;
          uVar34 = (ulonglong)(*(uint *)((int)puVar19 + 0xb4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar19 + 0xbc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar19 + 0x17) >> 0x1d) & 4;
          fVar10 = ABS(*(float *)((int)puVar19 + 0xb4));
          if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
            fVar10 = fVar12;
          }
          fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar34 << 2));
          fVar11 = ABS(*(float *)(puVar19 + 0x17));
          if (*(float *)((int)puVar19 + 0xbc) - 0.0 < 0.0) {
            fVar11 = fVar9;
          }
          fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          if (0.0 < fVar10) {
            lVar23 = uVar31 - 0x1b0;
            lVar32 = uVar31 - 0xe8;
            lVar35 = uVar31 - 0xd8;
            lVar39 = 2;
            fVar10 = (fVar11 - fVar10) / (fVar11 + fVar10);
            fVar11 = fVar10 * fVar10;
            *(float *)((int)puVar19 + 0xe4) = fVar10;
            *(float *)((int)puVar19 + 0xdc) = fVar10;
            *(float *)(puVar19 + 0x1c) = fVar10;
            *(float *)(puVar19 + 0x1b) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)((int)puVar19 + 0xdc) = *(float *)((int)puVar19 + 0xdc) * fVar11;
            *(float *)(puVar19 + 0x1c) = *(float *)(puVar19 + 0x1c) * fVar10;
            *(float *)((int)puVar19 + 0xe4) = *(float *)((int)puVar19 + 0xe4) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar23 + 0xd8) = *(float *)((int)lVar23 + 200) * fVar10 * fVar10;
              iVar27 = (int)lVar32;
              lVar23 = lVar23 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar35 + 4) = *(float *)(iVar27 + 4) * fVar10 * fVar10;
              lVar35 = lVar35 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar39 = 4;
            lVar35 = uVar31 - 0xe8;
            pfVar36 = (float *)&DAT_007358e0;
            lVar23 = lVar26;
            lVar32 = lVar35;
            do {
              fVar10 = *pfVar36;
              fVar11 = pfVar36[1];
              pfVar36 = pfVar36 + 2;
              *(float *)((int)lVar23 + 0xd8) = *(float *)((int)lVar23 + 0xd8) * fVar10;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar32 + 4) = *(float *)((int)lVar32 + 4) * fVar11;
              lVar32 = lVar32 + 8;
              lVar39 = lVar39 + -1;
            } while (lVar39 != 0);
            lVar23 = 2;
            do {
              iVar27 = (int)lVar26;
              iVar22 = (int)lVar35;
              lVar26 = lVar26 + 0x10;
              lVar35 = lVar35 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar27 + 0xd8) + *(float *)(iVar22 + 4) +
                      *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar8 = (fVar8 + 0.7853982) * fVar12 + fVar9;
          }
          (moby->rotation).z = fVar8;
        }
        *(float *)((int)pvVar14 + 0x100) =
             (float)((double)*(float *)((int)pvVar14 + 0x100) + dVar40);
        (moby->pos).x = *(f32 *)((int)pvVar14 + 0xe0);
        (moby->pos).y = *(f32 *)((int)pvVar14 + 0xe4);
        (moby->pos).z = *(f32 *)((int)pvVar14 + 0xe8);
        (moby->pos).w = *(f32 *)((int)pvVar14 + 0xec);
        if (iVar29 == 0) {
          mobyupdate_helpers::M795_00447908(lVar25,lVar25 + 0x10);
        }
        fastfunc::FastVecSub(uVar31 - 0x120,lVar25 + 0x10,uVar31 - 0x150);
        *(undefined4 *)(puVar19 + 8) = *(undefined4 *)(puVar19 + 0x14);
        *(undefined4 *)(puVar19 + 9) = *(undefined4 *)(puVar19 + 0x15);
        *(undefined4 *)(puVar19 + 0x12) = *(undefined4 *)(puVar19 + 0x14);
        *(undefined4 *)((int)puVar19 + 0x94) = *(undefined4 *)((int)puVar19 + 0xa4);
        *(undefined4 *)((int)puVar19 + 0x44) = *(undefined4 *)((int)puVar19 + 0xa4);
        *(undefined4 *)(puVar19 + 0x13) = *(undefined4 *)(puVar19 + 0x15);
        *(undefined4 *)((int)puVar19 + 0x4c) = *(undefined4 *)((int)puVar19 + 0xac);
        *(undefined4 *)((int)puVar19 + 0x9c) = *(undefined4 *)((int)puVar19 + 0xac);
        mobyupdate_helpers::M795_00447b40(lVar25);
        mobyupdate_helpers::M795_00448ab0(lVar25,uVar31 - 0x130,iVar29);
      }
    }
    else if (bVar2 < 3) {
      if (*(int *)((int)pvVar14 + 0x74) != -1) {
        moby->state = '\0';
      }
      iVar29 = *(int *)((int)pvVar14 + 0x150);
      if (((iVar29 != -1) && (sound::g_SoundChannels[iVar29].pMoby == moby)) &&
         (sound::g_SoundChannels[iVar29].state != '\0')) {
        sound::sound_Kill(iVar29);
      }
      *(undefined4 *)((int)pvVar14 + 0x150) = 0xffffffff;
    }
    else if ((bVar2 < 4) && (iVar29 = fastfunc::FastDecTimerS16((int)pvVar14 + 300), iVar29 != 0)) {
      moby->state = '\x01';
    }
  }
  return;
}



//==== 0044a694  ns=mobyupdate_helpers  size=0x14
// sig: undefined M795_0044a694(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M795_0044a694(void)

{
  DAT_0085a7f8 = 0x10000;
  return;
}



//==== 0044a708  ns=mobyupdate_helpers  size=0xa0c
// sig: undefined M750_0044a708(void)
// callers(1): 0044b5f0 mobyupdate_unsorted::UpdateMoby_750
// callees(5): 000ff190 mobyutil::MB_DeltAngSpeed; 0010d7a0 mobyutil::MB_PathFollowToPos; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M750_0044a708
               (int param_1,int *param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined4 uVar19;
  longlong lVar17;
  longlong lVar18;
  int iVar22;
  ulonglong uVar20;
  float *pfVar23;
  longlong lVar21;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r27;
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
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x160;
  puVar15 = (ulonglong *)lVar18;
  *puVar15 = uVar16;
  puVar15[0x2e] = in_LR;
  puVar15[0x29] = in_f29;
  puVar15[0x2a] = in_f30;
  puVar15[0x2b] = in_f31;
  puVar15[0x28] = unaff_r31;
  puVar15[0x24] = unaff_r27;
  puVar15[0x27] = unaff_r30;
  puVar15[0x26] = unaff_r29;
  dVar34 = 0.0;
  puVar15[0x25] = unaff_r28;
  iVar11 = *(int *)(param_1 + 0x78);
  mobyutil::MB_PathFollowToPos
            (0x408f380000000000,0x4014000000000000,0,param_2,param_1 + 0x10,uVar16 - 0xe0,
             uVar16 - 0xcc,uVar16 - 0xd0,param_6,0);
  dVar27 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x94));
  pfVar23 = (float *)(param_2 + *param_2 * 4);
  dVar33 = 16.0;
  fVar1 = *(float *)(param_1 + 0x14) - pfVar23[1];
  fVar2 = *(float *)(param_1 + 0x10) - *pfVar23;
  fVar3 = *(float *)(param_1 + 0x18) - pfVar23[2];
  dVar27 = (double)((float)(dVar27 * (double)(float)param_2[7] + (double)*(float *)(puVar15 + 0x12))
                   + 2.0);
  if ((*(float *)(iVar11 + 0x60) * *(float *)(iVar11 + 0x60)) / (DAT_0071f418 * 16.0 * 2.0) <
      SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1)) {
    fVar1 = DAT_0071f418 * 16.0 + *(float *)(iVar11 + 0x60);
    *(float *)(iVar11 + 0x60) = fVar1;
    if (mobyutil::g_FrameTime * 16.0 < fVar1) {
      *(float *)(iVar11 + 0x60) = mobyutil::g_FrameTime * 16.0;
    }
  }
  else {
    fVar1 = -(DAT_0071f418 * 16.0 - *(float *)(iVar11 + 0x60));
    *(float *)(iVar11 + 0x60) = fVar1;
    if (fVar1 < DAT_0085a81c * mobyutil::g_FrameTime) {
      *(float *)(iVar11 + 0x60) = DAT_0085a81c * mobyutil::g_FrameTime;
    }
  }
  uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar27 / (double)(float)param_2[7]));
  *(undefined4 *)((int)puVar15 + 0x94) = uVar19;
  dVar28 = (double)fastfunc::FastIntToDouble();
  fVar2 = *(float *)(param_1 + 0x10);
  fVar1 = (float)(-(double)(float)(dVar28 * (double)(float)param_2[7] - dVar27) /
                 (double)(float)param_2[7]);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 0x48);
  iVar22 = *(int *)((int)puVar15 + 0x94);
  iVar12 = *param_2;
  *(float *)(puVar15 + 0x12) = fVar1;
  if (iVar12 + -1 <= iVar22) {
    iVar22 = iVar12 + -2;
    *(int *)((int)puVar15 + 0x94) = iVar22;
    fVar1 = 1.0;
    *(undefined4 *)(puVar15 + 0x12) = 0x3f800000;
  }
  fVar5 = (float)param_2[iVar22 * 4 + 8];
  fVar6 = (float)param_2[iVar22 * 4 + 4];
  fVar7 = (float)param_2[iVar22 * 4 + 9];
  fVar8 = (float)param_2[iVar22 * 4 + 5];
  fVar9 = (float)param_2[iVar22 * 4 + 10];
  fVar10 = (float)param_2[iVar22 * 4 + 6];
  *(int *)((int)puVar15 + 0x8c) = param_2[iVar22 * 4 + 0xb];
  *(float *)(puVar15 + 0x10) = (fVar5 - fVar6) * fVar1 + fVar6;
  *(float *)((int)puVar15 + 0x84) = (fVar7 - fVar8) * fVar1 + fVar8;
  *(float *)(puVar15 + 0x11) = (fVar9 - fVar10) * fVar1 + fVar10;
  fVar5 = (float)(param_2 + iVar12 * 4)[1] - fVar3;
  fVar1 = (float)param_2[iVar12 * 4] - fVar2;
  if ((SQRT(fVar1 * fVar1 + fVar5 * fVar5) < 1.0) &&
     (*(float *)(iVar11 + 0x60) <= DAT_0085a81c * mobyutil::g_FrameTime)) {
    *(undefined1 *)(param_1 + 0x20) = param_3;
  }
  iVar22 = iVar22 + 1;
  dVar27 = 0.7853981852531433;
  if (iVar22 < iVar12 + -8) {
    fVar1 = (float)param_2[iVar22 * 4 + 5];
    dVar29 = ABS((double)((float)param_2[iVar22 * 4 + 4] - fVar2));
    dVar31 = ABS((double)(fVar1 - fVar3));
    *(float *)(puVar15 + 0x16) = (float)param_2[iVar22 * 4 + 4] - fVar2;
    *(float *)((int)puVar15 + 0xb4) = fVar1 - fVar3;
    *(float *)(puVar15 + 0x17) = (float)(dVar29 - dVar31);
    uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1d) & 4;
    uVar20 = uVar24 << 2 | 0x735900;
    dVar28 = ABS((double)*(float *)(puVar15 + 0x16));
    if ((double)*(float *)(puVar15 + 0x17) - dVar34 < 0.0) {
      dVar28 = dVar31;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar15 + 0xb4));
    if ((double)*(float *)(puVar15 + 0x17) - dVar34 < 0.0) {
      dVar31 = dVar29;
    }
    fVar2 = *(float *)((int)uVar20 + 4);
    dVar29 = dVar34;
    if (dVar34 < dVar28) {
      lVar17 = uVar16 - 0x150;
      lVar25 = uVar16 - 0x54;
      lVar21 = uVar16 - 100;
      lVar26 = 2;
      fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x21) = fVar3;
      *(float *)(puVar15 + 0x20) = fVar3;
      *(float *)((int)puVar15 + 0x104) = fVar3;
      *(float *)((int)puVar15 + 0xfc) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x20) = *(float *)(puVar15 + 0x20) * fVar5;
      *(float *)((int)puVar15 + 0x104) = *(float *)((int)puVar15 + 0x104) * fVar3;
      *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xfc) = *(float *)((int)lVar17 + 0xec) * fVar3 * fVar3;
        iVar22 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar16 - 100;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar25;
      do {
        pfVar23 = (float *)uVar20;
        fVar3 = pfVar23[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xfc) = *(float *)((int)lVar17 + 0xfc) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar28 = dVar34;
      do {
        iVar22 = (int)lVar17;
        iVar12 = (int)lVar25;
        lVar17 = lVar17 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xfc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar28 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar4,dVar29,0x3f847ae140000000,0x3fd3333340000000,
                                0x3fb99999a0000000,&DAT_0044a6a8,uVar20,iVar11 + 0x6c);
  }
  else {
    fVar3 = g_heroPosition.y - fVar3;
    dVar29 = ABS((double)(g_heroPosition.x - fVar2));
    dVar31 = ABS((double)fVar3);
    *(float *)((int)puVar15 + 0xa4) = g_heroPosition.x - fVar2;
    *(float *)(puVar15 + 0x15) = fVar3;
    *(float *)((int)puVar15 + 0xac) = (float)(dVar29 - dVar31);
    uVar24 = (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1d) & 4;
    uVar20 = uVar24 << 2 | 0x735900;
    dVar28 = ABS((double)*(float *)((int)puVar15 + 0xa4));
    if ((double)*(float *)((int)puVar15 + 0xac) - dVar34 < 0.0) {
      dVar28 = dVar31;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    dVar31 = ABS((double)*(float *)(puVar15 + 0x15));
    if ((double)*(float *)((int)puVar15 + 0xac) - dVar34 < 0.0) {
      dVar31 = dVar29;
    }
    fVar2 = *(float *)((int)uVar20 + 4);
    dVar29 = dVar34;
    if (dVar34 < dVar28) {
      lVar17 = uVar16 - 0x150;
      lVar21 = uVar16 - 0x84;
      lVar25 = uVar16 - 0x74;
      lVar26 = 2;
      fVar3 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar15 + 0x1d) = fVar3;
      *(float *)(puVar15 + 0x1c) = fVar3;
      *(float *)((int)puVar15 + 0xe4) = fVar3;
      *(float *)((int)puVar15 + 0xdc) = fVar3;
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x1c) = *(float *)(puVar15 + 0x1c) * fVar5;
      *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) * fVar3;
      *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar3 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xdc) = *(float *)((int)lVar17 + 0xcc) * fVar3 * fVar3;
        iVar22 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar25 = uVar16 - 0x84;
      uVar20 = ZEXT48(&DAT_007358e0);
      lVar17 = lVar18;
      lVar21 = lVar25;
      do {
        pfVar23 = (float *)uVar20;
        fVar3 = pfVar23[1];
        uVar20 = uVar20 + 8;
        *(float *)((int)lVar17 + 0xdc) = *(float *)((int)lVar17 + 0xdc) * *pfVar23;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      dVar28 = dVar34;
      do {
        iVar22 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar12 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0xdc)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
    dVar28 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)fVar4,dVar29,0x3f847ae140000000,0x3fd3333340000000,
                                0x3fb99999a0000000,&DAT_0044a6a8,uVar20,iVar11 + 0x6c);
  }
  fVar4 = *(float *)(param_1 + 0x14);
  fVar1 = (float)((double)*(float *)((int)puVar15 + 0x84) - (double)fVar4);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar2 = (float)((double)*(float *)(puVar15 + 0x10) - (double)fVar5);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar3 = (float)((double)*(float *)(puVar15 + 0x11) - (double)fVar6);
  *(float *)(param_1 + 0x48) = (float)dVar28;
  dVar31 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar29 = dVar31;
  if ((double)*(float *)(iVar11 + 0x60) - dVar31 < 0.0) {
    dVar29 = (double)*(float *)(iVar11 + 0x60);
  }
  fVar7 = (float)(dVar29 / dVar31);
  dVar29 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar29 = (double)(fVar1 * fVar7);
  }
  dVar30 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar30 = (double)(fVar2 * fVar7);
  }
  dVar32 = dVar34;
  if (dVar34 - dVar31 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar29 = (double)(fVar1 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar30 = (double)(fVar2 * fVar7);
  }
  if (dVar31 - dVar34 < 0.0) {
    dVar32 = (double)(fVar3 * fVar7);
  }
  *(float *)(puVar15 + 0x13) = (float)dVar30;
  *(float *)((int)puVar15 + 0x9c) = (float)dVar29;
  *(float *)(puVar15 + 0x14) = (float)(ABS(dVar30) - ABS(dVar29));
  uVar13 = *(uint *)(puVar15 + 0x13);
  fVar1 = *(float *)(puVar15 + 0x13);
  uVar14 = *(uint *)((int)puVar15 + 0x9c);
  *(float *)(param_1 + 0x10) = (float)((double)fVar5 + dVar30);
  *(float *)(param_1 + 0x14) = (float)((double)fVar4 + dVar29);
  *(float *)(param_1 + 0x18) = (float)((double)fVar6 + dVar32);
  uVar20 = (ulonglong)(uVar13 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1e) & 2 | (ulonglong)(uVar14 >> 0x1d) & 4;
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar31 = ABS((double)fVar1);
  if ((double)*(float *)(puVar15 + 0x14) - dVar34 < 0.0) {
    dVar31 = ABS(dVar29);
  }
  fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar15 + 0x9c));
  if ((double)*(float *)(puVar15 + 0x14) - dVar34 < 0.0) {
    dVar29 = ABS(dVar30);
  }
  if (dVar34 < dVar31) {
    lVar17 = uVar16 - 0x150;
    lVar21 = uVar16 - 0xa4;
    lVar25 = uVar16 - 0x94;
    lVar26 = 2;
    fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar15 + 0x19) = fVar3;
    *(float *)(puVar15 + 0x18) = fVar3;
    *(float *)((int)puVar15 + 0xc4) = fVar3;
    *(float *)((int)puVar15 + 0xbc) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x18) = *(float *)(puVar15 + 0x18) * fVar4;
    *(float *)((int)puVar15 + 0xc4) = *(float *)((int)puVar15 + 0xc4) * fVar3;
    *(float *)(puVar15 + 0x19) = *(float *)(puVar15 + 0x19) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0xbc) = *(float *)((int)lVar17 + 0xac) * fVar3 * fVar3;
      iVar22 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
      lVar25 = lVar25 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar25 = uVar16 - 0xa4;
    pfVar23 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar25;
    do {
      fVar3 = *pfVar23;
      fVar4 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar17 + 0xbc) = *(float *)((int)lVar17 + 0xbc) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar17 = 2;
    do {
      iVar22 = (int)lVar18;
      iVar12 = (int)lVar25;
      lVar18 = lVar18 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0xbc)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar34 = (double)((float)(dVar34 + dVar27) * fVar2 + fVar1);
  }
  dVar28 = (double)fastfunc::FastDiffRots(dVar34,dVar28);
  fVar1 = (float)(dVar28 + 1.570796251296997);
  dVar34 = (double)(float)(3.141592502593994 - dVar28);
  if (dVar28 - (double)(float)(3.141592502593994 - dVar28) < 0.0) {
    dVar34 = dVar28;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar29 = (double)(float)(-3.141592502593994 - dVar28);
  if ((double)(float)(-3.141592502593994 - dVar28) - dVar34 < 0.0) {
    dVar29 = dVar34;
  }
  fVar3 = (float)((double)mobyutil::g_FrameTime * dVar33);
  dVar33 = (double)(float)(dVar29 * dVar29);
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = fVar4 * fVar4;
  dVar34 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar29));
  dVar28 = (double)(float)(dVar33 * dVar34);
  fVar2 = fVar5 * fVar5 * fVar4;
  fVar1 = fVar5 * fVar2;
  dVar34 = (double)((*(float *)(iVar11 + 0x60) * -0.34906584 *
                    ((float)(dVar33 * dVar28) * 2.601887e-06 +
                    (float)(dVar28 * -0.0001980741071747616 +
                           (double)(float)(dVar34 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar33 * dVar29) *
                                                          -0.16666656732559204 + dVar29))))) / fVar3
                   );
  dVar33 = 1.0471975803375244;
  dVar27 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x44),
                              (double)((*(float *)(iVar11 + 0x60) * 0.34906584 *
                                       (fVar5 * fVar1 * 2.601887e-06 +
                                       fVar1 * -0.0001980741 +
                                       fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4))
                                      / fVar3),(double)(DAT_0071f418 * 0.5235988),
                              (double)(DAT_0071f418 * 1.0471976),
                              (double)(float)((double)mobyutil::g_FrameTime * dVar27));
  *(float *)(param_1 + 0x44) = (float)dVar27;
  dVar27 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)*(float *)(param_1 + 0x40),dVar34,
                              (double)(float)((double)DAT_0071f418 * dVar33),
                              (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                              (double)(mobyutil::g_FrameTime * 1.5707964));
  *(float *)(param_1 + 0x40) = (float)dVar27;
  return;
}



//==== 0044b130  ns=mobyupdate_helpers  size=0x324
// sig: undefined M750_0044b130(void)
// callers(1): 0044b5f0 mobyupdate_unsorted::UpdateMoby_750
// callees(5): 00130ed0 partupd::SpawnPart_59; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M750_0044b130(int param_1)

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
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x78);
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    dVar12 = 0.0;
    iVar8 = 0;
    lVar10 = uVar9 + 0x30;
    dVar13 = 255.0;
    auVar18 = loadVectorLeftIndexed(0x10,0x44b114);
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
        partupd::SpawnPart_59
                  ((double)*(float *)(iVar3 + 0x40),local_90,uVar5,uVar7,0x35,1,2,in_r9,0);
      }
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 4;
      uVar9 = uVar9 + 4;
    } while (iVar8 < 4);
  }
  return;
}



//==== 0044b460  ns=mobyupdate_helpers  size=0x120
// sig: undefined M750_0044b460(void)
// callers(2): 0044b5f0 mobyupdate_unsorted::UpdateMoby_750; 0044cddc FUN_0044cddc
// callees(1): 000fc620 mobyutil::MB_randInt

void mobyupdate_helpers::M750_0044b460(int param_1)

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
  auVar14 = loadVectorLeftIndexed(in_LR,0x44b454);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x30;
  auVar8 = loadVectorLeftIndexed(4,0x44b454);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x44b454);
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



//==== 0044b5f0  ns=mobyupdate_unsorted  size=0x17ec
// sig: undefined UpdateMoby_750(MobyInstance * moby)
// callers(0): 
// callees(20): 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 000f1e50 mobyfunc::SetLevelFlag; 000ff190 mobyutil::MB_DeltAngSpeed; 0010d7a0 mobyutil::MB_PathFollowToPos; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 00151e70 respawn::SetSpawnPoint; 00167e60 update::mode_sceneInit; 00168dec update::PlayInfobotMovie; 0044a708 mobyupdate_helpers::M750_0044a708; 0044b130 mobyupdate_helpers::M750_0044b130; 0044b460 mobyupdate_helpers::M750_0044b460; 004d407c FUN_004d407c; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 750 */

void mobyupdate_unsorted::UpdateMoby_750(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  LevelId LVar9;
  Spline *pSVar10;
  ulonglong *puVar11;
  float fVar12;
  Cuboid *pCVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar19;
  Vec4 *pVVar20;
  MobyInstance *pMVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  int iVar27;
  ulonglong uVar25;
  longlong lVar26;
  int *piVar28;
  Spline *pSVar29;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x1e0;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar14;
  puVar11[0x3e] = in_LR;
  puVar11[0x39] = in_f29;
  puVar11[0x3a] = in_f30;
  puVar11[0x3b] = in_f31;
  puVar11[0x38] = unaff_r31;
  puVar11[0x35] = unaff_r28;
  puVar11[0x37] = unaff_r30;
  piVar6 = (int *)moby->pVar;
  bVar1 = moby->state;
  dVar40 = 0.0;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  puVar11[0x36] = unaff_r29;
  puVar11[0x34] = unaff_r27;
  puVar11[0x33] = unaff_r26;
  puVar11[0x32] = unaff_r25;
  fVar2 = (moby->rotation).z;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      mobyupdate_helpers::M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      dVar41 = (double)fastfunc::FastWrapRot((float)piVar6[0x17],mobyutil::g_FrameTime * 3.1415927);
      fVar2 = (float)(dVar41 + 1.570796251296997);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      piVar6[0x17] = (int)(float)dVar41;
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)(puVar11 + 0x10) =
           fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
      fVar2 = (float)piVar6[0x17];
      *(undefined4 *)(puVar11 + 0x11) = 0x40400000;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)((int)puVar11 + 0x84) =
           fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3;
      dVar41 = (double)fastfunc::FastWrapRot((float)piVar6[0x17],1.5707964);
      iVar18 = piVar6[0x15];
      (moby->rotation).z = (float)dVar41;
      if ((((iVar18 != -1) && (MobyInstance[iVar18].oClass == TRAIN_LOCOMOTIVE)) &&
          (MobyInstance[iVar18].setByGroup == '\x06')) && (piVar6[0x16] != -1)) {
        moby->state = '\x06';
        piVar6[0x14] = -1;
        pSVar10 = Splines[piVar6[0x16]];
        (moby->pos).x = pSVar10->points[0].x;
        (moby->pos).y = pSVar10->points[0].y;
        (moby->pos).z = pSVar10->points[0].z;
        (moby->pos).w = pSVar10->points[0].w;
        pSVar10 = Splines[piVar6[0x16]];
        fVar2 = pSVar10->points[1].x - pSVar10->points[0].x;
        fVar5 = pSVar10->points[1].y - pSVar10->points[0].y;
        dVar31 = ABS((double)fVar2);
        dVar39 = ABS((double)fVar5);
        *(float *)(puVar11 + 0x1e) = fVar2;
        *(float *)((int)puVar11 + 0xf4) = fVar5;
        *(float *)(puVar11 + 0x1f) = (float)(dVar31 - dVar39);
        uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0xf4) >> 0x1d) & 4;
        dVar41 = ABS((double)*(float *)(puVar11 + 0x1e));
        if ((double)*(float *)(puVar11 + 0x1f) - dVar40 < 0.0) {
          dVar41 = dVar39;
        }
        fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar39 = ABS((double)*(float *)((int)puVar11 + 0xf4));
        if ((double)*(float *)(puVar11 + 0x1f) - dVar40 < 0.0) {
          dVar39 = dVar31;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        if (dVar40 < dVar41) {
          lVar16 = uVar14 - 0x1d0;
          lVar26 = uVar14 - 0x88;
          lVar23 = uVar14 - 0x98;
          lVar30 = 2;
          fVar3 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar11 + 0x154) = fVar3;
          *(float *)((int)puVar11 + 0x14c) = fVar3;
          *(float *)(puVar11 + 0x2a) = fVar3;
          *(float *)(puVar11 + 0x29) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x14c) = *(float *)((int)puVar11 + 0x14c) * fVar4;
          *(float *)(puVar11 + 0x2a) = *(float *)(puVar11 + 0x2a) * fVar3;
          *(float *)((int)puVar11 + 0x154) = *(float *)((int)puVar11 + 0x154) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar16 + 0x148) = *(float *)((int)lVar16 + 0x138) * fVar3 * fVar3;
            iVar18 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar14 - 0x98;
          pfVar24 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar23 = lVar26;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar16 + 0x148) = *(float *)((int)lVar16 + 0x148) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar16 = 2;
          do {
            iVar18 = (int)lVar17;
            iVar27 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar18 + 0x148)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar5);
        }
        iVar18 = piVar6[0x16];
        (moby->rotation).z = (float)dVar40;
        pSVar10 = Splines[iVar18];
        if (0 < pSVar10->cnt + -2) {
          iVar18 = 0;
          pSVar29 = pSVar10;
          do {
            fVar2 = pSVar29->points[0].y - pSVar29->points[1].y;
            fVar5 = pSVar29->points[0].x - pSVar29->points[1].x;
            fVar3 = pSVar29->points[0].z - pSVar29->points[1].z;
            iVar18 = iVar18 + 1;
            pSVar29->points[0].w = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
            pSVar29 = (Spline *)pSVar29->points;
          } while (iVar18 < pSVar10->cnt + -2);
        }
      }
    }
    else if (bVar1 == 4) {
      mobyupdate_helpers::M750_0044a708(lVar15,Splines[piVar6[piVar6[0x2a] + 0x1c]],3);
      mobyupdate_helpers::M750_0044b130(lVar15);
      if (moby->state != '\x04') {
        piVar6[0x2a] = piVar6[0x2a] + 1;
      }
    }
    else if (bVar1 == 3) {
      mobyupdate_helpers::M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (piVar6[piVar6[0x2a] + 0x1c] == -1) {
        moby->state = '\x02';
      }
      else {
        fVar2 = g_heroPosition.x - (moby->pos).x;
        fVar5 = g_heroPosition.y - (moby->pos).y;
        dVar31 = ABS((double)fVar2);
        dVar39 = ABS((double)fVar5);
        *(float *)((int)puVar11 + 0xfc) = fVar2;
        *(float *)(puVar11 + 0x20) = fVar5;
        fVar2 = (moby->rotation).z;
        *(float *)((int)puVar11 + 0x104) = (float)(dVar31 - dVar39);
        uVar25 = (ulonglong)(*(uint *)((int)puVar11 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1d) & 4;
        uVar22 = uVar25 << 2 | 0x735900;
        dVar41 = ABS((double)*(float *)((int)puVar11 + 0xfc));
        if ((double)*(float *)((int)puVar11 + 0x104) - dVar40 < 0.0) {
          dVar41 = dVar39;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar39 = ABS((double)*(float *)(puVar11 + 0x20));
        if ((double)*(float *)((int)puVar11 + 0x104) - dVar40 < 0.0) {
          dVar39 = dVar31;
        }
        fVar3 = *(float *)((int)uVar22 + 4);
        dVar31 = dVar40;
        if (dVar40 < dVar41) {
          lVar16 = uVar14 - 0x1d0;
          lVar26 = uVar14 - 0x68;
          lVar23 = uVar14 - 0x78;
          lVar30 = 2;
          fVar4 = (float)(dVar39 - dVar41) / (float)(dVar39 + dVar41);
          fVar12 = fVar4 * fVar4;
          *(float *)((int)puVar11 + 0x174) = fVar4;
          *(float *)((int)puVar11 + 0x16c) = fVar4;
          *(float *)(puVar11 + 0x2e) = fVar4;
          *(float *)(puVar11 + 0x2d) = fVar4;
          fVar4 = fVar12 * fVar12;
          *(float *)((int)puVar11 + 0x16c) = *(float *)((int)puVar11 + 0x16c) * fVar12;
          *(float *)(puVar11 + 0x2e) = *(float *)(puVar11 + 0x2e) * fVar4;
          *(float *)((int)puVar11 + 0x174) = *(float *)((int)puVar11 + 0x174) * fVar4 * fVar12;
          do {
            *(float *)((int)lVar16 + 0x168) = *(float *)((int)lVar16 + 0x158) * fVar4 * fVar4;
            iVar18 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar14 - 0x78;
          uVar22 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar23 = lVar26;
          do {
            pfVar24 = (float *)uVar22;
            fVar4 = pfVar24[1];
            uVar22 = uVar22 + 8;
            *(float *)((int)lVar16 + 0x168) = *(float *)((int)lVar16 + 0x168) * *pfVar24;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar16 = 2;
          dVar41 = dVar40;
          do {
            iVar18 = (int)lVar17;
            iVar27 = (int)lVar26;
            lVar17 = lVar17 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar18 + 0x168)) +
                              *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                             *(float *)(iVar27 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar31 = (double)((float)(dVar41 + 0.7853981852531433) * fVar5 + fVar3);
        }
        dVar41 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)fVar2,dVar31,0x3f847ae140000000,0x3fd3333340000000,
                                    0x3fb99999a0000000,0x450000,uVar22,piVar6 + 0x1b);
        (moby->rotation).z = (float)dVar41;
        dVar31 = 1.0471975803375244;
        dVar41 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,dVar40,
                                    (double)(DAT_0071f418 * 0.5235988),
                                    (double)(DAT_0071f418 * 1.0471976),
                                    (double)(mobyutil::g_FrameTime * 0.7853982));
        (moby->rotation).y = (float)dVar41;
        dVar40 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar40,
                                    (double)(float)((double)DAT_0071f418 * dVar31),
                                    (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                    (double)(mobyutil::g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar40;
        fVar2 = g_heroPosition.y - (moby->pos).y;
        fVar5 = g_heroPosition.x - (moby->pos).x;
        fVar3 = g_heroPosition.z - (moby->pos).z;
        if (SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) < 8.0) {
          moby->state = '\x04';
          FUN_004d407c(lVar15,1);
        }
      }
    }
    else if (bVar1 == 2) {
      dVar41 = 1.0;
      if ((piVar6[0x2c] != 0) && ((moby->modeBits & DISABLED) != NONE)) {
        dVar41 = 3.0;
      }
      if (piVar6[1] == 0xc) {
        dVar41 = 3.0;
      }
      dVar31 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)fVar2,(double)(float)piVar6[0x2b],0x3f847ae140000000,
                                  0x3fd3333340000000,0x3fb99999a0000000,0x450000,piVar6[0x2c],
                                  piVar6 + 0x1b);
      (moby->rotation).z = (float)dVar31;
      dVar39 = 1.0471975803375244;
      dVar31 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,dVar40,
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(mobyutil::g_FrameTime * 0.7853982));
      (moby->rotation).y = (float)dVar31;
      dVar40 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)DAT_0071f418 * dVar39),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(mobyutil::g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar40;
      mobyupdate_helpers::M750_0044b130(lVar15);
      if ((&g_SeenPlanets.Veldin)[piVar6[1]] != '\0') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      fVar2 = g_heroPosition.y - (moby->pos).y;
      fVar5 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.z - (moby->pos).z;
      if (((double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2) < dVar41) &&
         (g_heroHealth != 0)) {
        moby->state = '\b';
      }
    }
    else if (bVar1 == 0) {
      moby->updateDistance = -1;
      piVar6[0x2b] = (int)fVar2;
      piVar6[0x30] = (int)(moby->pos).x;
      piVar6[0x31] = (int)(moby->pos).y;
      piVar6[0x32] = (int)(moby->pos).z;
      piVar6[0x33] = (int)(moby->pos).w;
      if (*piVar6 == 0) {
        iVar18 = piVar6[0x2c];
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        moby->state = (char)((LZCOUNT(-iVar18) << 0x3a) >> 0x3f) + '\x02';
      }
      else {
        moby->state = '\x02';
        mobyupdate_helpers::M750_0044b460(lVar15);
      }
      if (piVar6[0x14] == -1) {
        if (piVar6[0x1c] != -1) {
          iVar18 = 0;
          piVar28 = piVar6;
          do {
            if (piVar28[0x1c] != -1) {
              iVar27 = 0;
              pSVar10 = Splines[piVar28[0x1c]];
              pSVar29 = pSVar10;
              if (0 < pSVar10->cnt + -2) {
                do {
                  fVar2 = pSVar29->points[0].y - pSVar29->points[1].y;
                  fVar5 = pSVar29->points[0].x - pSVar29->points[1].x;
                  fVar3 = pSVar29->points[0].z - pSVar29->points[1].z;
                  iVar27 = iVar27 + 1;
                  pSVar29->points[0].w = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
                  pSVar29 = (Spline *)pSVar29->points;
                } while (iVar27 < pSVar10->cnt + -2);
              }
            }
            iVar18 = iVar18 + 1;
            piVar28 = piVar28 + 1;
          } while (iVar18 < 8);
          pSVar10 = Splines[piVar6[0x1c]];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          (moby->pos).z = pSVar10->points[0].z;
          (moby->pos).w = pSVar10->points[0].w;
          piVar6[0x2a] = 0;
          moby->state = '\x03';
        }
      }
      else {
        moby->state = '\x05';
        mobyupdate_helpers::M750_0044b460(lVar15);
      }
    }
  }
  else {
    if (bVar1 == 0xb) {
      if (g_gameMode == GAME_MODE_SCENE) {
        return;
      }
      memcard::memcard_Save(0,-1);
      mobyutil::MB_ToastMessageByIndex(piVar6[1]);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if (bVar1 == 10) {
      if (g_gameMode != GAME_MODE_SCENE) {
        if (*(char *)((int)piVar6 + 0xe) != -1) {
          update::mode_sceneInit((int)*(char *)((int)piVar6 + 0xe));
        }
        moby->state = '\v';
      }
    }
    else if (bVar1 == 9) {
      if (g_gameMode != GAME_MODE_SCENE) {
        moby->state = '\n';
        if (*(char *)((int)piVar6 + 0xd) != -1) {
          update::PlayInfobotMovie((int)*(char *)((int)piVar6 + 0xd));
        }
      }
    }
    else if (bVar1 == 8) {
      LVar9 = piVar6[1];
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      mobyutil::MB_UnlockLevel(LVar9);
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      iVar18 = piVar6[2];
      if (iVar18 != -1) {
        respawn::SetSpawnPoint((Vec4 *)&Cuboids[iVar18].pos,(Vec4 *)&Cuboids[iVar18].rot);
      }
      moby->state = '\t';
      if (*(char *)(piVar6 + 3) != -1) {
        update::mode_sceneInit((int)*(char *)(piVar6 + 3));
      }
    }
    else if (bVar1 == 7) {
      pSVar10 = Splines[piVar6[0x16]];
      mobyupdate_helpers::M750_0044b130(lVar15);
      fVar5 = mobyutil::g_FrameTime;
      fVar2 = (float)piVar6[0x29] + mobyutil::g_FrameTime;
      piVar6[0x29] = (int)fVar2;
      if (1.0 < fVar2) {
        piVar6[0x29] = 0x3f800000;
      }
      dVar41 = (double)fastfunc::FastWrapRot((float)piVar6[0x17],fVar5 * 3.1415927);
      piVar6[0x17] = (int)(float)dVar41;
      fVar2 = (float)(dVar41 + 1.570796251296997);
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = fVar3 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar3;
      fVar4 = fVar2 * fVar5;
      *(float *)(puVar11 + 0x10) =
           (fVar2 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) *
           (float)piVar6[0x29];
      fVar2 = (float)piVar6[0x17];
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = (float)piVar6[0x29];
      dVar41 = (double)(moby->rotation).z;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      fVar5 = fVar3 * fVar3;
      fVar4 = fVar5 * fVar5 * fVar3;
      fVar12 = fVar5 * fVar4;
      *(float *)((int)puVar11 + 0x84) =
           (fVar5 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
           fVar2;
      dVar31 = 1.5707963705062866;
      uVar32 = fastfunc::FastWrapRot((float)piVar6[0x17],1.5707964);
      dVar41 = (double)mobyutil::MB_DeltAngSpeed
                                 (dVar41,uVar32,(double)(mobyutil::g_FrameTime * 25.132742),
                                  (double)(mobyutil::g_FrameTime * 25.132742),
                                  (double)(mobyutil::g_FrameTime * 12.566371));
      (moby->rotation).z = (float)dVar41;
      fastfunc::FastVecAdd(uVar14 - 0x140,uVar14 - 0x160,pSVar10->points + pSVar10->cnt + -1);
      (moby->pos).x = *(f32 *)(puVar11 + 0x14);
      (moby->pos).y = *(f32 *)((int)puVar11 + 0xa4);
      (moby->pos).z = *(f32 *)(puVar11 + 0x15);
      (moby->pos).w = *(f32 *)((int)puVar11 + 0xac);
      pVVar20 = pSVar10->points + pSVar10->cnt + -1;
      fVar5 = g_heroPosition.y - pVVar20->y;
      fVar3 = g_heroPosition.x - pVVar20->x;
      fVar4 = g_heroPosition.z - pVVar20->z;
      fVar2 = (moby->rotation).y;
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5) < 2.0) && (g_heroHealth != 0)) {
        moby->state = '\b';
      }
      dVar39 = 1.0471975803375244;
      dVar41 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)fVar2,dVar40,(double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(mobyutil::g_FrameTime * 0.7853982),0x450000,pVVar20,
                                  piVar6 + 0x1a);
      (moby->rotation).y = (float)dVar41;
      dVar40 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)DAT_0071f418 * dVar39),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(float)((double)mobyutil::g_FrameTime * dVar31));
      (moby->rotation).x = (float)dVar40;
    }
    else if (bVar1 == 6) {
      pSVar10 = Splines[piVar6[0x16]];
      mobyupdate_helpers::M750_0044b130(lVar15);
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,dVar40,pSVar10,lVar15 + 0x10,uVar14 - 0x150,
                 uVar14 - 0x10c,uVar14 - 0x110);
      dVar41 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar11 + 0xd4));
      pVVar20 = pSVar10->points + pSVar10->cnt + -1;
      fVar2 = (moby->pos).y - pVVar20->y;
      fVar5 = (moby->pos).x - pVVar20->x;
      dVar31 = 16.0;
      fVar3 = (moby->pos).z - pVVar20->z;
      dVar41 = (double)((float)(dVar41 * (double)pSVar10->points[0].w +
                               (double)*(float *)(puVar11 + 0x1a)) + 2.0);
      if (((float)piVar6[0x18] * (float)piVar6[0x18]) / (DAT_0071f418 * 16.0 * 2.0) <
          SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2)) {
        fVar2 = DAT_0071f418 * 16.0 + (float)piVar6[0x18];
        piVar6[0x18] = (int)fVar2;
        if (mobyutil::g_FrameTime * 16.0 < fVar2) {
          piVar6[0x18] = (int)(mobyutil::g_FrameTime * 16.0);
        }
      }
      else {
        dVar39 = -(double)(DAT_0071f418 * 16.0 - (float)piVar6[0x18]);
        piVar6[0x18] = (int)(float)dVar39;
        if (dVar39 < dVar40) {
          piVar6[0x18] = 0;
        }
      }
      uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar41 / (double)pSVar10->points[0].w));
      *(undefined4 *)((int)puVar11 + 0xd4) = uVar19;
      dVar39 = (double)fastfunc::FastIntToDouble();
      dVar33 = (double)pSVar10->points[0].w;
      fVar5 = (moby->rotation).z;
      iVar18 = *(int *)((int)puVar11 + 0xd4);
      fVar2 = (float)(-(double)(float)(dVar39 * dVar33 - dVar41) / dVar33);
      *(float *)(puVar11 + 0x1a) = fVar2;
      iVar27 = pSVar10->cnt;
      if (iVar27 + -1 <= iVar18) {
        if ((float)piVar6[0x18] <= (float)((double)DAT_0071f418 * dVar31)) {
          pVVar20 = pSVar10->points + iVar27 + -1;
          (moby->pos).x = pVVar20->x;
          (moby->pos).y = pVVar20->y;
          (moby->pos).z = pVVar20->z;
          fVar2 = pVVar20->w;
          moby->state = '\a';
          (moby->pos).w = fVar2;
          goto LAB_0044ccdc;
        }
        iVar18 = iVar27 + -2;
        *(int *)((int)puVar11 + 0xd4) = iVar18;
        fVar2 = 1.0;
        *(undefined4 *)(puVar11 + 0x1a) = 0x3f800000;
      }
      fVar4 = pSVar10->points[iVar18 + 1].x - pSVar10->points[iVar18].x;
      *(float *)(puVar11 + 0x12) = fVar4;
      fVar4 = fVar4 * fVar2;
      fVar12 = pSVar10->points[iVar18 + 1].y - pSVar10->points[iVar18].y;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      fVar12 = fVar12 * fVar2;
      fVar3 = pSVar10->points[iVar18 + 1].z - pSVar10->points[iVar18].z;
      fVar2 = fVar3 * fVar2;
      *(float *)(puVar11 + 0x13) = fVar3;
      fVar3 = pSVar10->points[iVar18 + 1].w;
      *(float *)(puVar11 + 0x12) = fVar4;
      *(float *)((int)puVar11 + 0x9c) = fVar3;
      *(float *)((int)puVar11 + 0x94) = fVar12;
      *(float *)(puVar11 + 0x13) = fVar2;
      *(float *)(puVar11 + 0x12) = fVar4 + pSVar10->points[iVar18].x;
      *(float *)((int)puVar11 + 0x94) = fVar12 + pSVar10->points[iVar18].y;
      *(float *)(puVar11 + 0x13) = fVar2 + pSVar10->points[iVar18].z;
      fVar2 = pSVar10->points[iVar18 + 1].x - pSVar10->points[iVar18].x;
      fVar3 = pSVar10->points[iVar18 + 1].y - pSVar10->points[iVar18].y;
      dVar39 = ABS((double)fVar2);
      dVar33 = ABS((double)fVar3);
      *(float *)((int)puVar11 + 0xe4) = fVar2;
      *(float *)(puVar11 + 0x1d) = fVar3;
      *(float *)((int)puVar11 + 0xec) = (float)(dVar39 - dVar33);
      uVar25 = (ulonglong)(*(uint *)((int)puVar11 + 0xe4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar11 + 0xec) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar11 + 0x1d) >> 0x1d) & 4;
      uVar22 = uVar25 << 2;
      dVar41 = ABS((double)*(float *)((int)puVar11 + 0xe4));
      if ((double)*(float *)((int)puVar11 + 0xec) - dVar40 < 0.0) {
        dVar41 = dVar33;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar22);
      dVar33 = ABS((double)*(float *)(puVar11 + 0x1d));
      if ((double)*(float *)((int)puVar11 + 0xec) - dVar40 < 0.0) {
        dVar33 = dVar39;
      }
      fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar39 = dVar40;
      if (dVar40 < dVar41) {
        lVar16 = uVar14 - 0x1d0;
        lVar26 = uVar14 - 0xa8;
        lVar23 = uVar14 - 0xb8;
        lVar30 = 2;
        fVar4 = (float)(dVar33 - dVar41) / (float)(dVar33 + dVar41);
        fVar12 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x134) = fVar4;
        *(float *)((int)puVar11 + 300) = fVar4;
        *(float *)(puVar11 + 0x26) = fVar4;
        *(float *)(puVar11 + 0x25) = fVar4;
        fVar4 = fVar12 * fVar12;
        *(float *)((int)puVar11 + 300) = *(float *)((int)puVar11 + 300) * fVar12;
        *(float *)(puVar11 + 0x26) = *(float *)(puVar11 + 0x26) * fVar4;
        *(float *)((int)puVar11 + 0x134) = *(float *)((int)puVar11 + 0x134) * fVar4 * fVar12;
        do {
          *(float *)((int)lVar16 + 0x128) = *(float *)((int)lVar16 + 0x118) * fVar4 * fVar4;
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar14 - 0xb8;
        uVar22 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar23 = lVar26;
        do {
          pfVar24 = (float *)uVar22;
          fVar4 = pfVar24[1];
          uVar22 = uVar22 + 8;
          *(float *)((int)lVar16 + 0x128) = *(float *)((int)lVar16 + 0x128) * *pfVar24;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        lVar16 = lVar17;
        dVar41 = dVar40;
        do {
          iVar18 = (int)lVar16;
          iVar27 = (int)lVar26;
          lVar16 = lVar16 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar18 + 0x128)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        dVar39 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar39 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)fVar5,dVar39,0x3f847ae140000000,0x3fd3333340000000,
                                  0x3fb99999a0000000,&DAT_0044b580,uVar22,piVar6 + 0x1b);
      dVar33 = (double)(moby->pos).y;
      fVar2 = (float)((double)*(float *)((int)puVar11 + 0x94) - dVar33);
      dVar35 = (double)(moby->pos).x;
      fVar5 = (float)((double)*(float *)(puVar11 + 0x12) - dVar35);
      dVar37 = (double)(moby->pos).z;
      fVar3 = (float)((double)*(float *)(puVar11 + 0x13) - dVar37);
      (moby->rotation).z = (float)dVar39;
      dVar38 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2);
      dVar41 = dVar38;
      if ((double)(float)piVar6[0x18] - dVar38 < 0.0) {
        dVar41 = (double)(float)piVar6[0x18];
      }
      fVar4 = (float)(dVar41 / dVar38);
      dVar41 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar41 = (double)(fVar2 * fVar4);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      dVar36 = dVar40;
      if (dVar40 - dVar38 < 0.0) {
        dVar36 = (double)(fVar3 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar41 = (double)(fVar2 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar34 = (double)(fVar5 * fVar4);
      }
      if (dVar38 - dVar40 < 0.0) {
        dVar36 = (double)(fVar3 * fVar4);
      }
      *(float *)(puVar11 + 0x1b) = (float)dVar34;
      *(float *)((int)puVar11 + 0xdc) = (float)dVar41;
      *(float *)(puVar11 + 0x1c) = (float)(ABS(dVar34) - ABS(dVar41));
      uVar7 = *(uint *)(puVar11 + 0x1b);
      fVar2 = *(float *)(puVar11 + 0x1b);
      (moby->pos).x = (float)(dVar35 + dVar34);
      uVar8 = *(uint *)((int)puVar11 + 0xdc);
      (moby->pos).y = (float)(dVar33 + dVar41);
      (moby->pos).z = (float)(dVar37 + dVar36);
      uVar22 = (ulonglong)(uVar7 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x1c) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      dVar33 = ABS((double)fVar2);
      if ((double)*(float *)(puVar11 + 0x1c) - dVar40 < 0.0) {
        dVar33 = ABS(dVar41);
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar41 = ABS((double)*(float *)((int)puVar11 + 0xdc));
      if ((double)*(float *)(puVar11 + 0x1c) - dVar40 < 0.0) {
        dVar41 = ABS(dVar34);
      }
      fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (dVar40 < dVar33) {
        lVar16 = uVar14 - 0x1d0;
        lVar26 = uVar14 - 200;
        lVar23 = uVar14 - 0xd8;
        lVar30 = 2;
        fVar3 = (float)(dVar41 - dVar33) / (float)(dVar41 + dVar33);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar11 + 0x114) = fVar3;
        *(float *)((int)puVar11 + 0x10c) = fVar3;
        *(float *)(puVar11 + 0x22) = fVar3;
        *(float *)(puVar11 + 0x21) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar11 + 0x10c) = *(float *)((int)puVar11 + 0x10c) * fVar4;
        *(float *)(puVar11 + 0x22) = *(float *)(puVar11 + 0x22) * fVar3;
        *(float *)((int)puVar11 + 0x114) = *(float *)((int)puVar11 + 0x114) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0xf8) * fVar3 * fVar3;
          iVar18 = (int)lVar23;
          lVar23 = lVar23 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar26 = uVar14 - 0xd8;
        pfVar24 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar23 = lVar26;
        do {
          fVar3 = *pfVar24;
          fVar4 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar16 + 0x108) = *(float *)((int)lVar16 + 0x108) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar27 = (int)lVar26;
          lVar17 = lVar17 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar18 + 0x108)) +
                            *(float *)(iVar27 + 4) + *(float *)(iVar27 + 8) +
                           *(float *)(iVar27 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar41 = (double)fastfunc::FastDiffRots(dVar40,dVar39);
      fVar2 = (float)(dVar41 + 1.570796251296997);
      dVar40 = (double)(float)(3.141592502593994 - dVar41);
      if (dVar41 - (double)(float)(3.141592502593994 - dVar41) < 0.0) {
        dVar40 = dVar41;
      }
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      dVar39 = (double)(float)(-3.141592502593994 - dVar41);
      if ((double)(float)(-3.141592502593994 - dVar41) - dVar40 < 0.0) {
        dVar39 = dVar40;
      }
      dVar40 = (double)(float)(dVar39 * dVar39);
      fVar3 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      fVar2 = (float)((double)mobyutil::g_FrameTime * dVar31);
      fVar12 = fVar3 * fVar3;
      dVar41 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar39));
      dVar31 = (double)(float)(dVar40 * dVar41);
      fVar4 = fVar12 * fVar12 * fVar3;
      fVar5 = fVar12 * fVar4;
      dVar31 = (double)(((float)piVar6[0x18] * -0.34906584 *
                        ((float)(dVar40 * dVar31) * 2.601887e-06 +
                        (float)(dVar31 * -0.0001980741071747616 +
                               (double)(float)(dVar41 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar40 * dVar39) *
                                                              -0.16666656732559204 + dVar39))))) /
                       fVar2);
      dVar41 = 1.0471975803375244;
      dVar40 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,
                                  (double)(((float)piVar6[0x18] * 0.34906584 *
                                           (fVar12 * fVar5 * 2.601887e-06 +
                                           fVar5 * -0.0001980741 +
                                           fVar4 * 0.0083330255 +
                                           fVar12 * fVar3 * -0.16666657 + fVar3)) / fVar2),
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(float)((double)mobyutil::g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar40;
      dVar40 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar31,
                                  (double)(float)((double)DAT_0071f418 * dVar41),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(mobyutil::g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar40;
    }
  }
LAB_0044ccdc:
  pCVar13 = Cuboids;
  if (((piVar6[0x14] != -1) && (piVar6[0x15] != -1)) &&
     (pMVar21 = MobyInstance + piVar6[0x15], pMVar21->oClass == TRAIN_LOCOMOTIVE)) {
    iVar18 = piVar6[0x14];
    *(undefined4 *)(puVar11 + 0x16) = 0;
    *(undefined4 *)((int)puVar11 + 0xb4) = 0;
    *(undefined4 *)(puVar11 + 0x17) = 0;
    *(undefined4 *)((int)puVar11 + 0xbc) = 0;
    mobyutil::MB_PlatformLocalToWorld
              (lVar15,pMVar21,&pCVar13[iVar18].pos,uVar14 - 0x130,&pCVar13[iVar18].pos,
               uVar14 - 0x130);
    fastfunc::FastVecAdd(uVar14 - 0x120,uVar14 - 0x160,&Cuboids[piVar6[0x14]].pos);
    (moby->pos).x = *(f32 *)(puVar11 + 0x18);
    (moby->pos).y = *(f32 *)((int)puVar11 + 0xc4);
    (moby->pos).z = *(f32 *)(puVar11 + 0x19);
    (moby->pos).w = *(f32 *)((int)puVar11 + 0xcc);
  }
  return;
}



//==== 0044cddc  ns=Global  size=0x38
// sig: undefined FUN_0044cddc(void)
// callers(4): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001ccf10 mobyupdate_unsorted::UpdateMoby_1109; 00371520 mobyupdate_unsorted::UpdateMoby_429
// callees(1): 0044b460 mobyupdate_helpers::M750_0044b460

void FUN_0044cddc(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe;
  mobyupdate_helpers::M750_0044b460();
  return;
}



//==== 0044ce14  ns=mobyupdate_helpers  size=0x14
// sig: undefined M751_0044ce14(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M751_0044ce14(void)

{
  DAT_0085a86c = 0x10000;
  return;
}



//==== 0044ce28  ns=mobyupdate_helpers  size=0x30
// sig: undefined M751_0044ce28(void)
// callers(0): 
// callees(1): 0017cfdc water::WaterTile_DrawAll

void mobyupdate_helpers::M751_0044ce28(void)

{
  water::WaterTile_DrawAll(&DAT_0085a8c0,0x15);
  return;
}



//==== 0044cee0  ns=mobyupdate_unsorted  size=0xaa0
// sig: undefined UpdateMoby_751(MobyInstance * moby)
// callers(0): 
// callees(14): 0006d720 RegisterFuncForMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00110b70 mobyutil::MB_IsPntInCuboid; 001303a8 partupd::SpawnPart_56; 001305b0 partupd::SpawnPart_57; 0017b230 water::WaterTile_InitAll; 0017b4b0 water::WaterTile_CalcGridBSphere; 0017b780 water::WaterWave_ScaleTable; 0017b8b8 water::WaterTile_UpdateWaves; 0017bd90 water::WaterTile_PutDrop; 0017c3b0 water::WaterTile_PutDrop_Thunk; 0045c4e0 FUN_0045c4e0

/* Moby 751 */

void mobyupdate_unsorted::UpdateMoby_751(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r18;
  int iVar19;
  ulonglong unaff_r19;
  int *piVar20;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  BSphere *bounds;
  int iVar21;
  ulonglong unaff_r28;
  WaterTile *tile;
  WaterTile *pWVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double in_f5;
  double dVar26;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar27;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  undefined8 uVar35;
  double dVar36;
  ulonglong in_f29;
  undefined8 uVar37;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  double dVar41;
  float fVar42;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar14 = uVar8 - 0x1c0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar8;
  puVar6[0x3a] = in_LR;
  puVar6[0x29] = in_f17;
  puVar6[0x2a] = in_f18;
  puVar6[0x2b] = in_f19;
  puVar6[0x2c] = in_f20;
  puVar6[0x2d] = in_f21;
  puVar6[0x2e] = in_f22;
  puVar6[0x2f] = in_f23;
  puVar6[0x30] = in_f24;
  puVar6[0x31] = in_f25;
  puVar6[0x32] = in_f26;
  puVar6[0x33] = in_f27;
  puVar6[0x34] = in_f28;
  puVar6[0x35] = in_f29;
  puVar6[0x36] = in_f30;
  puVar6[0x37] = in_f31;
  puVar6[0x23] = unaff_r26;
  bVar1 = moby->state;
  puVar6[0x1c] = unaff_r19;
  piVar20 = (int *)moby->pVar;
  puVar6[0x28] = unaff_r31;
  puVar6[0x27] = unaff_r30;
  puVar6[0x26] = unaff_r29;
  puVar6[0x25] = unaff_r28;
  puVar6[0x24] = unaff_r27;
  puVar6[0x22] = unaff_r25;
  puVar6[0x21] = unaff_r24;
  puVar6[0x20] = unaff_r23;
  puVar6[0x1f] = unaff_r22;
  puVar6[0x1e] = unaff_r21;
  puVar6[0x1d] = unaff_r20;
  puVar6[0x1b] = unaff_r18;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    (moby->pos).z = (moby->pos).z + 0.5;
    pWVar22 = (WaterTile *)&DAT_0085a8c0;
    water::WaterTile_InitAll((WaterTile *)&DAT_0085a8c0,0x15);
    DAT_0086b164 = 8;
    DAT_0086c2e8 = 0xbad1b717;
    DAT_00869fa8 = 0xbad1b717;
    DAT_0086b148 = 0xbad1b717;
    DAT_00868e08 = 0xbad1b717;
    dVar40 = 0.0;
    DAT_0086c2ec = 0;
    DAT_0086b14c = 0;
    DAT_00869fac = 0;
    DAT_00868e0c = 0;
    water::WaterWave_ScaleTable(1.0);
    fVar42 = DirectionalLights[0].direction1.x;
    dVar25 = ABS((double)DirectionalLights[0].direction1.x);
    dVar26 = ABS((double)DirectionalLights[0].direction1.y);
    WaterTileConsts.TileSize.x = 16.0;
    uVar7 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
    *(float *)(puVar6 + 0x14) = (float)(dVar25 - dVar26);
    WaterTileConsts.TileSize.y = 16.0;
    WaterTileConsts.TileOffset.x = -8.0;
    WaterTileConsts.TileOffset.y = -8.0;
    WaterTileConsts.TileGridSize.x = 1.0;
    WaterTileConsts.TileGridSize.y = 1.0;
    WaterTileConsts.texScale = 0.9;
    WaterTileConsts.waveInc = 0.1;
    uVar15 = (ulonglong)((uint)fVar42 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x14) >> 0x1e) & 2 | (ulonglong)uVar7 & 4;
    dVar41 = dVar25;
    if ((double)*(float *)(puVar6 + 0x14) - dVar40 < 0.0) {
      dVar41 = dVar26;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar42 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar6 + 0x14) - dVar40 < 0.0) {
      dVar26 = dVar25;
    }
    if (dVar40 < dVar41) {
      lVar13 = uVar8 - 0x1b0;
      lVar18 = uVar8 - 0x10c;
      lVar16 = uVar8 - 0x11c;
      lVar23 = 2;
      fVar2 = (float)(dVar26 - dVar41) / (float)(dVar26 + dVar41);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x16) = fVar2;
      *(float *)(puVar6 + 0x15) = fVar2;
      *(float *)((int)puVar6 + 0xac) = fVar2;
      *(float *)((int)puVar6 + 0xa4) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar3;
      *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar2;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0x94) * fVar2 * fVar2;
        iVar12 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar18 = uVar8 - 0x11c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0xa4) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar13 = 2;
      do {
        iVar12 = (int)lVar14;
        iVar19 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar12 + 0xa4)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar4 + fVar42);
    }
    fVar42 = (float)(dVar40 + 1.570796251296997);
    bounds = (BSphere *)&DAT_010ccd40;
    dVar26 = (double)(float)(3.141592502593994 - dVar40);
    if (dVar40 - (double)(float)(3.141592502593994 - dVar40) < 0.0) {
      dVar26 = dVar40;
    }
    iVar12 = 0;
    fVar4 = 3.1415925 - fVar42;
    if (fVar42 - (3.1415925 - fVar42) < 0.0) {
      fVar4 = fVar42;
    }
    dVar41 = (double)(float)(-3.141592502593994 - dVar40);
    if ((double)(float)(-3.141592502593994 - dVar40) - dVar26 < 0.0) {
      dVar41 = dVar26;
    }
    fVar2 = -3.1415925 - fVar42;
    if ((-3.1415925 - fVar42) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    dVar26 = (double)(float)(dVar41 * dVar41);
    fVar3 = fVar2 * fVar2;
    dVar40 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar41));
    WaterTileConsts.tex0 = 0x29;
    WaterTileConsts.lightDir.z = -0.57735;
    WaterTileConsts.alpha0 = 0x1c;
    WaterTileConsts.tex1 = 0x2a;
    fVar42 = fVar3 * fVar3 * fVar2;
    dVar25 = (double)(float)(dVar26 * dVar40);
    WaterTileConsts.alpha1 = 0x40;
    fVar4 = fVar3 * fVar42;
    WaterTileConsts.lightDir.y =
         ((float)(dVar26 * dVar25) * 2.601887e-06 +
         (float)(dVar25 * -0.0001980741071747616 +
                (double)(float)(dVar40 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar26 * dVar41) *
                                               -0.16666656732559204 + dVar41)))) * 0.57735;
    WaterTileConsts.lightDir.x =
         (fVar3 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar42 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) *
         0.57735;
    WaterTiles = (WaterTile *)&DAT_0085a8c0;
    WaterTileBoxes = (WaterTileBox *)&DAT_010ccd40;
    WaterTileCnt = 0x15;
    WaterFogNearDist = 0;
    WaterFogFarDist = 0x47000000;
    WaterFogNearIntensity = 0x437f0000;
    WaterFogFarIntensity = 0x42400000;
    tile = pWVar22;
    do {
      water::WaterTile_CalcGridBSphere(tile,bounds);
      iVar12 = iVar12 + 1;
      tile = (WaterTile *)&tile[1].ovlTex;
      bounds = bounds + 1;
    } while (iVar12 < 0x15);
    dVar41 = -6.0;
    iVar19 = 0;
    dVar26 = 6.0;
    uVar37 = 0x4000000000000000;
    uVar35 = 0x3fc99999a0000000;
    iVar12 = 0;
    do {
      iVar21 = 0;
      do {
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar26);
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_0085a8c0 + iVar12) + dVar25);
        dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar26);
        water::WaterTile_PutDrop_Thunk
                  (dVar40,(double)(float)((double)(pWVar22->tilePos).y + dVar25),uVar37,uVar35,
                   &DAT_0085a8c0,0x15);
        iVar21 = iVar21 + 1;
      } while (iVar21 < 2);
      iVar19 = iVar19 + 1;
      pWVar22 = (WaterTile *)&pWVar22[1].ovlTex;
      iVar12 = iVar12 + 0x11a0;
    } while (iVar19 < 0x15);
  }
  else if (bVar1 < 2) {
    iVar21 = 0;
    iVar12 = -1;
    iVar19 = 0;
    do {
      if ((*piVar20 == -1) ||
         (iVar9 = mobyutil::MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar20),
         iVar9 == 0)) {
        iVar10 = 0;
        iVar9 = *(int *)((int)&DAT_00871b50 + iVar19);
        if (0 < iVar9) {
          do {
            iVar11 = *(int *)((int)&DAT_00871b34 + iVar19) + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined2 *)(&DAT_0085a8de + iVar11 * 0x11a0) = 0;
          } while (iVar10 < iVar9);
        }
      }
      else {
        iVar9 = 0;
        iVar12 = iVar21;
        if (0 < *(int *)((int)&DAT_00871b50 + iVar19)) {
          dVar40 = -4.0;
          dVar25 = 4.0;
          dVar41 = 1.0;
          dVar26 = -0.05000000074505806;
          iVar10 = 0;
          do {
            iVar11 = *(int *)((int)&DAT_00871b34 + iVar19) + iVar9;
            uVar5 = *(undefined4 *)((int)&DAT_00871b6c + iVar19);
            *(short *)(&DAT_0085a8de + iVar11 * 0x11a0) =
                 (short)*(undefined4 *)(&DAT_00871ae0 + iVar11 * 4);
            iVar11 = mobyutil::MB_randInt(uVar5);
            if (iVar11 == 0) {
              dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar25);
              dVar28 = (double)(float)((double)(float)(&DAT_0085a8c0)
                                                      [(*(int *)((int)&DAT_00871b34 + iVar19) +
                                                       iVar9) * 0x468] + dVar27);
              dVar27 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar25);
              fVar42 = (float)in_f5;
              in_f5 = (double)fVar42;
              water::WaterTile_PutDrop
                        ((float)dVar28,
                         (float)((double)(float)(&DAT_0085a8c4)
                                                [(*(int *)((int)&DAT_00871b34 + iVar19) + iVar9) *
                                                 0x468] + dVar27),(float)dVar41,(float)dVar26,
                         (WaterTile *)
                         ((int)WaterTiles + iVar10 + *(int *)((int)&DAT_00871b34 + iVar19) * 0x11a0)
                         ,1,fVar42);
            }
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x11a0;
          } while (iVar9 < *(int *)((int)&DAT_00871b50 + iVar19));
        }
      }
      iVar21 = iVar21 + 1;
      iVar19 = iVar19 + 4;
      piVar20 = piVar20 + 1;
    } while (iVar21 < 7);
    if (-1 < iVar12) {
      if (iVar12 < 4 && 0 < iVar12) {
        DAT_0073a960 = 0;
        DAT_0073a961 = 0x28;
        WaterFog.r = '\0';
        DAT_0073a962 = 0x30;
        DAT_0073a963 = 0x40;
        WaterFog.b = '0';
        WaterFog.g = '(';
      }
      else {
        DAT_0073a960 = 0x18;
        DAT_0073a961 = 0x30;
        DAT_0073a963 = 0x30;
        DAT_0073a962 = 0x90;
        WaterFog.r = '\x18';
        WaterFog.g = '0';
        WaterFog.b = 0x90;
      }
    }
    water::WaterTile_UpdateWaves((WaterTile *)&DAT_0085a8c0,0x15);
    RegisterFuncForMoby(&PTR_M751_0044ce28_0070e7c8,moby);
    if (((iVar12 == 0) || (iVar12 == 6)) && (DAT_010cce90 = DAT_010cce90 + -1, DAT_010cce90 < 1)) {
      lVar14 = mobyutil::MB_randInt(5);
      iVar19 = (int)(lVar14 << 4);
      *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(&DAT_00871b90 + iVar19);
      *(undefined4 *)((int)puVar6 + 0x74) = *(undefined4 *)(iVar19 + 0x871b94);
      *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(iVar19 + 0x871b98);
      *(undefined4 *)((int)puVar6 + 0x7c) = *(undefined4 *)(iVar19 + 0x871b9c);
      dVar25 = -0.15000000596046448;
      dVar41 = 0.15000000596046448;
      dVar26 = (double)mobyutil::MB_randRangeFloat(-0.15,0.15);
      *(float *)(puVar6 + 0xe) = (float)((double)*(float *)(puVar6 + 0xe) + dVar26);
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar41);
      *(float *)((int)puVar6 + 0x74) = (float)((double)*(float *)((int)puVar6 + 0x74) + dVar26);
      FUN_0045c4e0(0x3fc99999a0000000,uVar8 - 0x150);
      DAT_010cce90 = mobyutil::MB_randRange(300,0x4b0);
    }
    if (iVar12 == 5) {
      puVar6[0x19] = (ulonglong)(byte)(&DAT_00871c58)[worldUpdateTime % 0x14];
      dVar28 = 0.05000000074505806;
      *(undefined4 *)(puVar6 + 0x10) = 0x3ca3d70a;
      dVar39 = 0.0;
      *(undefined4 *)((int)puVar6 + 0x84) = 0;
      *(undefined4 *)(puVar6 + 0x11) = 0;
      dVar38 = -0.6000000238418579;
      dVar36 = 0.6000000238418579;
      dVar41 = (double)(float)((double)(longlong)puVar6[0x19] * 0.05000000074505806);
      dVar26 = (double)mobyutil::MB_randRangeFloat(-0.6,0.6);
      *(float *)(puVar6 + 0x12) = (float)(dVar26 + 177.0);
      dVar34 = -0.10000000149011612;
      dVar33 = 0.10000000149011612;
      dVar26 = (double)mobyutil::MB_randRangeFloat(-0.1,0.1);
      dVar32 = -11.0;
      dVar31 = 176.0;
      *(float *)((int)puVar6 + 0x94) = (float)((double)(float)(dVar41 * -11.0 + 176.0) + dVar26);
      dVar30 = 39.0;
      *(undefined4 *)(puVar6 + 0x13) = 0x421c0000;
      dVar29 = 1.0;
      uVar35 = mobyutil::MB_randRangeFloat(0.4,0.5);
      partupd::SpawnPart_57(dVar29,uVar35,uVar8 - 0x130,uVar8 - 0x140);
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *(undefined4 *)((int)puVar6 + 0x84) = 0;
      *(undefined4 *)(puVar6 + 0x11) = 0;
      dVar27 = 178.0;
      dVar40 = -0.20000000298023224;
      dVar25 = 4.0;
      dVar41 = 10.0;
      dVar26 = dVar39;
      do {
        iVar12 = mobyutil::MB_randInt(0x20);
        if (iVar12 == 0) {
          dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar36);
          *(float *)(puVar6 + 0x12) = (float)(dVar24 + dVar27);
          dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar33);
          *(float *)((int)puVar6 + 0x94) =
               (float)((double)(float)(dVar26 * dVar32 + dVar31) + dVar24);
          dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar40,(float)dVar39);
          *(float *)(puVar6 + 0x13) = (float)(dVar24 + dVar30);
          mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar41);
          partupd::SpawnPart_56(uVar8 - 0x130,uVar8 - 0x140);
        }
        dVar26 = (double)(float)(dVar26 + dVar28);
      } while (dVar26 < dVar29);
    }
  }
  return;
}



//==== 0044d980  ns=mobyupdate_helpers  size=0x14
// sig: undefined M754_0044d980(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M754_0044d980(void)

{
  DAT_00871c34 = 0x10000;
  return;
}



//==== 0044d9d0  ns=mobyupdate_unsorted  size=0x47c
// sig: undefined UpdateMoby_754(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011ad48 mobyutil::MB_SpawnReplacementMoby; 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot

/* Moby 754 */

void mobyupdate_unsorted::UpdateMoby_754(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar10;
  ulonglong in_f29;
  double dVar11;
  ulonglong in_f30;
  undefined8 uVar12;
  ulonglong in_f31;
  double dVar13;
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
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar37 [16];
  
  lVar8 = (longlong)(int)moby;
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x1c0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar7;
  puVar4[0x3a] = in_LR;
  puVar4[0x35] = in_f29;
  puVar4[0x36] = in_f30;
  puVar4[0x37] = in_f31;
  lVar5 = uVar7 - 0x50;
  puVar6 = (undefined4 *)lVar5;
  puVar6[3] = in_vr31_32_3;
  puVar6[2] = in_vr31_32_2;
  puVar6[1] = in_vr31_32_1;
  *puVar6 = in_vr31_32_0;
  puVar4[0x34] = unaff_r31;
  puVar4[0x33] = unaff_r30;
  puVar4[0x32] = unaff_r29;
  puVar4[0x31] = unaff_r28;
  iVar9 = mobyutil::MB_damage(lVar8,0x10000,0);
  bVar2 = moby->state;
  if (bVar2 == 0) {
    moby->state = '\x01';
  }
  else if (bVar2 < 2) {
    if ((iVar9 != 0) && (0 < *(int *)(iVar9 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar2 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar8);
    auVar15 = ZEXT416(0xffffffff);
    auVar17 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar21 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar14 = loadVectorLeftIndexed(0x24,ZEXT48(moby->pClass));
    auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = vectorReciprocalEstimateFloatingPoint(auVar14);
    auVar15 = loadVectorLeftIndexed(lVar5,0x44d998);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar19 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0xffffffff);
    auVar22 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = ZEXT416(0);
    auVar37 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
    auVar36 = loadVectorLeftIndexed(0x2c,lVar8);
    auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    iVar9 = 0;
    auVar15 = loadVectorLeftIndexed(4,0x44d998);
    dVar11 = 1.5707963705062866;
    uVar12 = 0;
    dVar13 = 0.8726646304130554;
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar29 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar31 = loadVectorLeftIndexed(0x10,0x44d998);
    auVar28 = loadVectorLeftIndexed(0x14,0x44d998);
    auVar32 = loadVectorLeftIndexed(0x18,0x44d998);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar18);
    auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar35 = loadVectorLeftIndexed(0x1c,0x44d998);
    auVar34 = loadVectorLeftIndexed(0x20,0x44d998);
    auVar33 = loadVectorLeftIndexed(0x24,0x44d998);
    auVar19 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar15 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar28 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar28 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    auVar15 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar34 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar15 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar20);
    auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar14,auVar16);
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar18);
    auVar15 = loadVectorLeftIndexed(0x2c,0x44d998);
    auVar14 = loadVectorLeftIndexed(0x28,0x44d998);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = loadVectorLeftIndexed(0x30,0x44d998);
    auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar18 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar36,auVar19);
    auVar14 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar17,
                         auVar14);
    do {
      auVar19 = vectorConvertFromSignedFixedPointWord(auVar37,0);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      *(undefined1 (*) [16])(puVar4 + 0x16) = auVar29;
      puVar4[0x14] = (longlong)iVar9;
      *(undefined4 *)((int)puVar4 + 0x9c) = 0;
      *(undefined4 *)(puVar4 + 0x13) = 0;
      *(undefined4 *)((int)puVar4 + 0x94) = 0;
      *(undefined4 *)(puVar4 + 0x12) = 0;
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar19,auVar29,auVar14);
      dVar10 = (double)fastfunc::FastWrapRot
                                 ((float)((double)(longlong)puVar4[0x14] * dVar11),(float)dVar13);
      auVar19 = vectorAddFloatingPoint(auVar30,auVar31);
      auVar20 = vectorSubtractFloatingPoint(auVar28,auVar30);
      auVar14 = ZEXT416(0xffffffff);
      auVar22 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar21 = vectorSubtractFloatingPoint(auVar32,auVar30);
      auVar14 = ZEXT416(0xffffffff);
      auVar23 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar25 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar26 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar29 = vectorSubtractFloatingPoint(auVar28,auVar19);
      auVar36 = vectorSubtractFloatingPoint(auVar32,auVar19);
      auVar14 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar30);
      auVar14 = vectorConditionalSelect(auVar20,auVar30,auVar14);
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar20 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar21);
      auVar20 = vectorConditionalSelect(auVar21,auVar14,auVar20);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar21 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar19);
      auVar19 = vectorConditionalSelect(auVar29,auVar19,auVar21);
      auVar30 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = ZEXT416(0xffffffff);
      auVar21 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar36);
      auVar19 = vectorConditionalSelect(auVar36,auVar19,auVar14);
      auVar29 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar14 = ZEXT416(0xffffffff);
      auVar36 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar24 = vectorShiftLeftIntegerWord(auVar21,auVar21);
      auVar21 = vectorMultiplyAddFloatingPoint(auVar19,auVar19,auVar22);
      auVar14 = ZEXT416(0xffffffff);
      auVar22 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar14 = ZEXT416(0xffffffff);
      auVar23 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar20,auVar20,auVar14);
      auVar27 = loadVectorLeftIndexed(0x18,lVar8);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar21,auVar19,auVar29);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar22,auVar20,auVar30);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar21,auVar14,auVar36);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar14,auVar35,auVar19);
      auVar29 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar25 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar24 = vectorMultiplyAddFloatingPoint(auVar22,auVar30,auVar24);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar20);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar21,auVar36,auVar23);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar19);
      auVar36 = loadVectorLeftIndexed(0x10,lVar8);
      auVar23 = loadVectorLeftIndexed(0x14,lVar8);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar22,auVar24,auVar25);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar24,auVar34,auVar20);
      auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar30,auVar29);
      auVar14 = vectorMultiplyAddFloatingPoint(auVar30,auVar33,auVar14);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar18,auVar17,auVar27);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar25,auVar26);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar25,auVar33,auVar19);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar21,auVar16,auVar14);
      auVar14 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = vectorMultiplyAddFloatingPoint(auVar22,auVar16,auVar20);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar15,auVar36);
      auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar15,auVar23);
      auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar4 + 0x10) = uVar3;
      auVar19 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60,0x84,lVar1);
      *(undefined4 *)((int)puVar4 + 0x84) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0x88,lVar1);
      *(undefined4 *)(puVar4 + 0x11) = uVar3;
      *(float *)(puVar4 + 0x13) = (float)dVar10;
      puVar4[0xe] = ZEXT48(&DAT_00a15d30);
      puVar4[0xf] = ZEXT48(&DAT_00a15d30);
      mobyutil::MB_SpawnDebrisMoby
                (uVar12,lVar8,0x719,uVar7 - 0x140,uVar7 - 0x130,0,0,0x80,&DAT_00a15d30);
      iVar9 = iVar9 + 1;
      auVar14._0_4_ = auVar37._0_4_ + 1;
      auVar14._8_8_ = auVar37._8_8_;
      auVar14._4_4_ = auVar37._4_4_ + 1;
      auVar19._0_8_ = auVar14._0_8_;
      auVar19._12_4_ = auVar37._12_4_;
      auVar19._8_4_ = auVar37._8_4_ + 1;
      auVar37._0_12_ = auVar19._0_12_;
      auVar37._12_4_ = auVar19._12_4_ + 1;
      auVar29 = *(undefined1 (*) [16])(puVar4 + 0x16);
    } while (iVar9 < 4);
    mobyutil::MB_SpawnReplacementMoby(lVar8,0x718);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0044de60  ns=mobyupdate_unsorted  size=0x284
// sig: undefined UpdateMoby_755(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 0010b030 mobyutil::MB_UpdateKick; 00121740 partupd::SpawnPart_4
// strings: 00871c80: 'oppp' (raw)

/* Moby 755 */

void mobyupdate_unsorted::UpdateMoby_755(MobyInstance *moby)

{
  byte bVar1;
  KickVars *kv;
  float fVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar6;
  int iVar7;
  undefined8 uVar5;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_80 [16];
  undefined1 local_70 [40];
  
  bVar1 = moby->state;
  kv = (KickVars *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      dVar9 = 0.0;
      uVar6 = mobyutil::MB_UpdateKick(moby,kv);
      if ((uVar6 & 1) != 0) {
        moby->state = '\x02';
      }
      iVar8 = 0;
      dVar10 = 0.5;
      dVar11 = -0.15000000596046448;
      dVar12 = 0.15000000596046448;
      do {
        mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar12);
        puVar4 = PTR_PTR_00871c84;
        uVar3 = DAT_00871c80;
        iVar7 = mobyutil::MB_randRange(0x14,0x28);
        fVar2 = animationSpeed * (float)((double)(longlong)iVar7 + dVar10);
        uVar5 = mobyutil::MB_randRange(0x14,0x28);
        partupd::SpawnPart_4(local_70,local_80,uVar3,puVar4,(int)fVar2,0x28,uVar5,1);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
    }
  }
  else if (bVar1 < 3) {
    fVar2 = kv[1].kickVel[0];
    *(f32 *)((int)fVar2 + 0x10) = (moby->pos).x;
    *(f32 *)((int)fVar2 + 0x14) = (moby->pos).y;
    *(f32 *)((int)fVar2 + 0x18) = (moby->pos).z;
    *(f32 *)((int)fVar2 + 0x1c) = (moby->pos).w;
    *(undefined1 *)((int)kv[1].kickVel[0] + 0x20) = 0x11;
    mobyutil::MB_SetAnimation(kv[1].kickVel[0],5,0,1);
    *(undefined4 *)((int)kv[1].kickVel[0] + 0x94) =
         *(undefined4 *)(*(int *)((int)kv[1].kickVel[0] + 0x24) + 0x10);
    *(undefined4 *)((int)kv[1].kickVel[0] + 0x58) = 0x3f800000;
    mobyfunc::UpdateMobyTransform((MobyInstance *)kv[1].kickVel[0]);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0044e100  ns=mobyupdate_helpers  size=0x4dc
// sig: undefined M757_0044e100(void)
// callers(0): 
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010ad80 mobyutil::MB_StartKick; 00121740 partupd::SpawnPart_4
// strings: 00871c80: 'oppp' (raw)

MobyInstance *
mobyupdate_helpers::M757_0044e100(int param_1,float *param_2,f32 *param_3,undefined4 param_4)

{
  f32 fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  undefined8 uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar14 = uVar11 - 0x120;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar11;
  puVar8[0x26] = in_LR;
  puVar8[0x1f] = in_f27;
  puVar8[0x20] = in_f28;
  puVar8[0x21] = in_f29;
  puVar8[0x22] = in_f30;
  puVar8[0x23] = in_f31;
  puVar8[0x1a] = unaff_r27;
  puVar8[0x1d] = unaff_r30;
  puVar8[0x1c] = unaff_r29;
  puVar8[0x1b] = unaff_r28;
  puVar8[0x1e] = unaff_r31;
  pMVar12 = mobyfunc::CreateMoby(SANDSHARK_EGG);
  if (pMVar12 != (MobyInstance *)0x0) {
    pvVar4 = pMVar12->pVar;
    (pMVar12->pos).x = *param_3;
    (pMVar12->pos).y = param_3[1];
    (pMVar12->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar12->updateDistance = -1;
    (pMVar12->pos).w = fVar1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    pMVar12->state = '\0';
    pMVar12->color = (int)((ulonglong)uVar21 >> 0x20);
    pMVar12->light = (int)uVar21;
    *(undefined4 *)((int)pvVar4 + 0x60) = param_4;
    *(undefined4 *)((int)pvVar4 + 0x20) = 0x200;
    dVar31 = 0.5;
    *(undefined4 *)((int)pvVar4 + 0x28) = 0x3f000000;
    fVar6 = DAT_00871c88;
    fVar5 = DAT_0071f418;
    *(undefined1 *)((int)pvVar4 + 0x3d) = 0;
    *(undefined4 *)((int)pvVar4 + 0x24) = 1;
    *(undefined4 *)((int)pvVar4 + 0x14) = 0x3a03126f;
    *(float *)((int)pvVar4 + 0x10) = fVar6 * fVar5;
    *(float *)((int)pvVar4 + 0x18) = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    *(float *)((int)pvVar4 + 0x1c) = param_2[2];
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar2 = ABS(*param_2);
    fVar3 = ABS(param_2[1]);
    *(float *)(puVar8 + 0x12) = fVar2 - fVar3;
    dVar32 = 0.0;
    uVar18 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    uVar15 = uVar18 << 2 | 0x735900;
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = fVar2;
    if (*(float *)(puVar8 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    if (*(float *)(puVar8 + 0x12) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)((int)uVar15 + 4);
    dVar28 = dVar32;
    if (0.0 < fVar6) {
      lVar19 = uVar11 - 0x110;
      lVar17 = uVar11 - 0x8c;
      lVar16 = uVar11 - 0x7c;
      lVar23 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = fVar6;
      *(float *)(puVar8 + 0x13) = fVar6;
      *(float *)((int)puVar8 + 0x9c) = fVar6;
      *(float *)((int)puVar8 + 0x94) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar3;
      *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar6 * fVar6;
        iVar22 = (int)lVar17;
        lVar19 = lVar19 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      uVar15 = uVar11 - 0x8c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = 4;
      uVar18 = uVar15;
      lVar16 = lVar14;
      do {
        fVar6 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)uVar18 + 4) = *(float *)((int)uVar18 + 4) * fVar3;
        uVar18 = uVar18 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar16 = 2;
      do {
        iVar22 = (int)lVar14;
        iVar13 = (int)uVar15;
        lVar14 = lVar14 + 0x10;
        uVar15 = uVar15 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar22 + 0x94)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
    }
    mobyutil::MB_StartKick(dVar28,pMVar12,pvVar4,uVar15,0,1,0);
    iVar22 = 0;
    pMVar12->state = '\x01';
    dVar28 = -1.0;
    dVar29 = -0.15000000596046448;
    dVar30 = 0.15000000596046448;
    do {
      *(f32 *)(puVar8 + 0xe) = (pMVar12->pos).x;
      *(f32 *)((int)puVar8 + 0x74) = (pMVar12->pos).y;
      *(f32 *)(puVar8 + 0xf) = (pMVar12->pos).z;
      *(f32 *)((int)puVar8 + 0x7c) = (pMVar12->pos).w;
      dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar32);
      *(float *)(puVar8 + 0x11) = (float)((double)*(float *)(puVar8 + 0x11) + dVar24);
      dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
      *(float *)(puVar8 + 0x10) = (float)((double)*(float *)(puVar8 + 0x10) + dVar24);
      dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar29,(float)dVar30);
      fVar5 = (float)((double)*(float *)((int)puVar8 + 0x84) + dVar24);
      fVar3 = *(float *)(puVar8 + 0x10);
      fVar2 = *(float *)(puVar8 + 0x11);
      dVar24 = (double)mobyutil::g_FrameTime;
      *(float *)((int)puVar8 + 0x84) = fVar5;
      puVar10 = PTR_PTR_00871c84;
      uVar9 = DAT_00871c80;
      *(float *)(puVar8 + 0xe) = *(float *)(puVar8 + 0xe) + fVar3;
      *(float *)((int)puVar8 + 0x74) = *(float *)((int)puVar8 + 0x74) + fVar5;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) + fVar2;
      dVar27 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5);
      fVar6 = (float)(dVar24 / dVar27);
      dVar24 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar24 = (double)(fVar3 * fVar6);
      }
      dVar25 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar25 = (double)(fVar5 * fVar6);
      }
      dVar26 = dVar32;
      if (dVar32 - dVar27 < 0.0) {
        dVar26 = (double)(fVar2 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar24 = (double)(fVar3 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar25 = (double)(fVar5 * fVar6);
      }
      if (dVar27 - dVar32 < 0.0) {
        dVar26 = (double)(fVar2 * fVar6);
      }
      *(float *)(puVar8 + 0x10) = (float)dVar24;
      *(float *)((int)puVar8 + 0x84) = (float)dVar25;
      *(float *)(puVar8 + 0x11) = (float)dVar26;
      iVar13 = mobyutil::MB_randRange(0x14,0x28);
      puVar8[0x17] = (longlong)iVar13;
      puVar8[0x17] = (longlong)
                     (int)(animationSpeed * (float)((double)(longlong)puVar8[0x17] + dVar31));
      uVar7 = *(undefined4 *)((int)puVar8 + 0xbc);
      uVar21 = mobyutil::MB_randRange(0x14,0x28);
      partupd::SpawnPart_4(uVar11 - 0xb0,uVar11 - 0xa0,uVar9,puVar10,uVar7,0x28,uVar21,1);
      iVar22 = iVar22 + 1;
    } while (iVar22 < 0x14);
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 0044e618  ns=mobyupdate_helpers  size=0x530
// sig: undefined M757_0044e618(void)
// callers(1): 0044eb48 mobyupdate_unsorted::UpdateMoby_757
// callees(6): 0006dad0 draw::FadeToBlack; 000a0c38 hero::Hero_Warp; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 00110b70 mobyutil::MB_IsPntInCuboid; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M757_0044e618(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  MobyInstance *pMVar19;
  Cuboid *pCVar20;
  ulonglong uVar21;
  int iVar24;
  ulonglong uVar22;
  longlong lVar23;
  int iVar27;
  longlong lVar25;
  longlong lVar26;
  longlong lVar28;
  float *pfVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar26 = uVar21 - 0x100;
  puVar11 = (ulonglong *)lVar26;
  *puVar11 = uVar21;
  puVar11[0x22] = in_LR;
  puVar11[0x1e] = in_f30;
  puVar11[0x1f] = in_f31;
  puVar11[0x1c] = unaff_r30;
  puVar11[0x1d] = unaff_r31;
  iVar27 = *(int *)(param_1 + 0x78);
  iVar24 = *(int *)(iVar27 + 200);
  puVar11[0x1b] = unaff_r29;
  puVar11[0x1a] = unaff_r28;
  puVar11[0x19] = unaff_r27;
  if (iVar24 == 1) {
    iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar27 + 0xb0));
    pMVar19 = MobyInstance;
    if (iVar24 == 0) {
      *(undefined4 *)(iVar27 + 200) = 0;
      hud::Hud_SetEntryValueById(*(int *)(iVar27 + 0xcc),0);
      *(undefined4 *)(iVar27 + 0xcc) = 0xffffffff;
      hud::Hud_SetEntryValueById(*(int *)(iVar27 + 0xd0),0);
      *(undefined4 *)(iVar27 + 0xd0) = 0xffffffff;
    }
    else if ((*(int *)(iVar27 + 0xb4) == 0) && (*(int *)(iVar27 + 0xb8) == 0)) {
      iVar24 = *(int *)(iVar27 + 0xc0);
      iVar8 = *(int *)(iVar27 + 0xc4);
      *(undefined4 *)(iVar27 + 200) = 2;
      hud::Hud_SetEntryValueById(*(int *)(iVar27 + 0xcc),0);
      *(undefined4 *)(iVar27 + 0xcc) = 0xffffffff;
      hud::Hud_SetEntryValueById(*(int *)(iVar27 + 0xd0),0);
      uVar9 = *(uint *)(iVar27 + 0xbc);
      *(undefined4 *)(iVar27 + 0xd0) = 0xffffffff;
      pCVar20 = Cuboids;
      iVar27 = (int)(((ulonglong)uVar9 & 0x1ffffff) << 7);
      *(float *)(param_1 + 0x10) = Cuboids[uVar9].pos.x;
      *(float *)(param_1 + 0x14) = pCVar20[uVar9].pos.y;
      *(float *)(param_1 + 0x18) = pCVar20[uVar9].pos.z;
      *(float *)(param_1 + 0x1c) = pCVar20[uVar9].pos.w;
      uVar10 = *(uint *)((int)&(pCVar20->matrix).v0.x + iVar27);
      uVar9 = *(uint *)((int)&(pCVar20->matrix).v0.y + iVar27);
      fVar2 = ABS(*(float *)((int)&(pCVar20->matrix).v0.x + iVar27));
      fVar4 = ABS(*(float *)((int)&(pCVar20->matrix).v0.y + iVar27));
      *(float *)(puVar11 + 0x12) = fVar2 - fVar4;
      fVar1 = 0.0;
      uVar22 = (ulonglong)(uVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar3 = fVar2;
      if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
      if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
        fVar4 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      if (0.0 < fVar3) {
        lVar28 = uVar21 - 0xf0;
        lVar25 = uVar21 - 0x6c;
        lVar23 = uVar21 - 0x5c;
        lVar30 = 2;
        fVar4 = (fVar4 - fVar3) / (fVar4 + fVar3);
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x14) = fVar4;
        *(float *)(puVar11 + 0x13) = fVar4;
        *(float *)((int)puVar11 + 0x9c) = fVar4;
        *(float *)((int)puVar11 + 0x94) = fVar4;
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar3;
        *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar4;
        *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar4 * fVar3;
        do {
          *(float *)((int)lVar28 + 0x94) = *(float *)((int)lVar28 + 0x84) * fVar4 * fVar4;
          iVar27 = (int)lVar25;
          lVar28 = lVar28 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar27 + 4) * fVar4 * fVar4;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar28 = uVar21 - 0x6c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar30 = 4;
        lVar23 = lVar28;
        lVar25 = lVar26;
        do {
          fVar4 = *pfVar29;
          fVar3 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar25 + 0x94) = *(float *)((int)lVar25 + 0x94) * fVar4;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
          lVar23 = lVar23 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar23 = 2;
        do {
          iVar27 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          iVar12 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar27 + 0x94) + *(float *)(iVar12 + 4) +
                  *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar7 + fVar2;
      }
      *(float *)(param_1 + 0x48) = fVar1;
      dVar31 = (double)fastfunc::FastWrapRot(pMVar19[iVar24].rotation.x,-1.5707964);
      pMVar19[iVar24].rotation.x = (float)dVar31;
      dVar31 = (double)fastfunc::FastWrapRot(pMVar19[iVar8].rotation.x,1.5707964);
      pMVar19[iVar8].rotation.x = (float)dVar31;
      puVar11[0x17] = (longlong)(int)(animationSpeed * 16.5);
      draw::FadeToBlack(*(undefined4 *)((int)puVar11 + 0xbc));
      fVar1 = *(float *)(param_1 + 0x48);
      fVar2 = fVar1 + 1.5707963;
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar7 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar7 = fVar4;
      }
      fVar4 = *(float *)(param_1 + 0x14);
      fVar13 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar13 = fVar3;
      }
      fVar3 = fVar7 * fVar7;
      fVar14 = fVar13 * fVar13;
      fVar17 = fVar3 * fVar3 * fVar7;
      fVar2 = *(float *)(param_1 + 0x10);
      fVar15 = fVar14 * fVar14 * fVar13;
      fVar18 = fVar3 * fVar17;
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0;
      fVar16 = fVar14 * fVar15;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      *(float *)((int)puVar11 + 0x74) =
           (fVar3 * fVar18 * 2.601887e-06 +
           fVar18 * -0.0001980741 + fVar17 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) *
           3.0 + fVar4;
      *(undefined4 *)((int)puVar11 + 0x7c) = uVar6;
      *(undefined4 *)(puVar11 + 0xf) = uVar5;
      *(float *)(puVar11 + 0xe) =
           (fVar14 * fVar16 * 2.601887e-06 +
           fVar16 * -0.0001980741 + fVar15 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13)
           * 3.0 + fVar2;
      dVar31 = (double)fastfunc::FastWrapRot(fVar1,3.1415927);
      *(float *)(puVar11 + 0x11) = (float)dVar31;
      hero::Hero_Warp((float *)(puVar11 + 0xe),(float *)(puVar11 + 0x10),0,1);
    }
  }
  else if ((iVar24 == 0) &&
          (iVar24 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)(iVar27 + 0xb0)),
          iVar24 != 0)) {
    *(undefined4 *)(iVar27 + 200) = 1;
    iVar24 = hud::RegisterHUDCallback
                       (0x15,2000,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar27 + 0xb4),100);
    *(int *)(iVar27 + 0xd0) = iVar24;
    iVar24 = hud::RegisterHUDCallback
                       (0x16,0x7d1,&PTR_AmmoHud_Init_00705808,&PTR_MobyCounterHud_Init_00705890,
                        &PTR_Draw_MobyCounterHud_00705898,(int *)(iVar27 + 0xb8),10);
    *(int *)(iVar27 + 0xcc) = iVar24;
  }
  return;
}



//==== 0044eb48  ns=mobyupdate_unsorted  size=0x164
// sig: undefined UpdateMoby_757(MobyInstance * moby)
// callers(0): 
// callees(1): 0044e618 mobyupdate_helpers::M757_0044e618
// strings: 00658188: 'Surfer Bob'

/* Moby 757 */

void mobyupdate_unsorted::UpdateMoby_757(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  short sVar4;
  
  pvVar2 = moby->pVar;
  mobyupdate_helpers::M757_0044e618();
  bVar1 = moby->state;
  if (bVar1 == 0) {
    *(undefined4 *)((int)pvVar2 + 200) = 0;
    *(char **)((int)pvVar2 + 0x20) = "Surfer Bob";
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    sVar4 = ((ushort)((LZCOUNT(-(*(uint *)((int)pvVar2 + 0xa4) & 2)) << 0x3a) >> 0x3f) &
            (short)((LZCOUNT(-(uint)MiscLevelFlags.Zoomerator) << 0x3a) >> 0x3f) - 1U) + 4;
    *(ushort *)((int)pvVar2 + 2) =
         sVar4 + ((ushort)((LZCOUNT(-(*(uint *)((int)pvVar2 + 0xa4) & 1)) << 0x3a) >> 0x3f) &
                 ((ushort)((ulonglong)
                           (LZCOUNT((uint)LZCOUNT((uint)MiscLevelFlags.Zoomerator) >> 5 ^ 1) << 0x20
                           ) >> 0x25) ^ 1) - sVar4);
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar3 = *(uint *)((int)pvVar2 + 0xa4);
    *(uint *)((int)pvVar2 + 0xa4) = uVar3 | 1;
    if ((*(short *)((int)pvVar2 + 6) == 1) || (*(short *)((int)pvVar2 + 6) == 3)) {
      *(uint *)((int)pvVar2 + 0xa4) = uVar3 | 3;
    }
  }
  return;
}



//==== 0044ecac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M759_0044ecac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M759_0044ecac(void)

{
  DAT_00871ce0 = 0x10000;
  return;
}



//==== 0044ece0  ns=mobyupdate_unsorted  size=0x370
// sig: undefined UpdateMoby_759(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 005cd098 libc::printf
// strings: 00658194: 'HP depleted, do death\n' | 006581ac: 'do %f HP damage leaving %f\n' | 006581cc: 'found water at %d\n'

/* Moby 759 */

ulonglong mobyupdate_unsorted::UpdateMoby_759(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar9;
  int iVar10;
  ulonglong uVar8;
  int32_t iVar11;
  uint uVar12;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  int local_30 [4];
  
  uVar7 = (ulonglong)(int)moby;
  uVar8 = uVar7;
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    if (pvVar2 != (void *)0x0) {
      if (moby->state != '\x02') {
        iVar9 = mobyutil::MB_damage(uVar7,0x330000,0);
        iVar10 = mobyutil::MB_HandleDamage(moby,iVar9,ZEXT48(pvVar2) + 0x20,0,local_30,0,0,4);
        if ((0 < iVar10) && (iVar10 < 3)) {
          *(undefined4 *)((int)pvVar2 + 0x20) = 0;
        }
        if (1 < local_30[0]) {
          uVar12 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
          uVar4 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar4) <
              (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar12)) {
            fVar6 = *(float *)((int)pvVar2 + 0x20) - *(float *)(iVar9 + 0x2c);
            *(float *)((int)pvVar2 + 0x20) = fVar6;
            libc::printf("do %f HP damage leaving %f\n",(double)*(float *)(iVar9 + 0x2c),
                         (double)fVar6);
          }
          else {
            libc::printf("HP depleted, do death\n");
            *(undefined4 *)((int)pvVar2 + 0x20) = 0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            mobyutil::MB_genericExplosion
                      (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,uVar7,local_50,0,0,&DAT_0044ecc0,10,3,
                       0x10);
            moby->state = '\x02';
          }
        }
        moby->damage = -1;
      }
      bVar1 = moby->state;
      uVar8 = (ulonglong)bVar1;
      if (bVar1 == 0) {
        uVar8 = 0;
        *(undefined4 *)((int)pvVar2 + 0x60) = 0;
        iVar9 = MobyUpdateChainStart;
        while ((iVar9 != 0 &&
               (uVar8 = (ulonglong)*(uint *)((int)pvVar2 + 0x60), *(uint *)((int)pvVar2 + 0x60) == 0
               ))) {
          uVar8 = (ulonglong)*(ushort *)(iVar9 + 0xa6);
          if (*(ushort *)(iVar9 + 0xa6) == 0x2f8) {
            *(int *)((int)pvVar2 + 0x60) = iVar9;
            moby->state = '\x01';
            uVar12 = *(int *)((int)pvVar2 + 0x60) - (int)MobyInstance;
            iVar11 = libc::printf("found water at %d\n",
                                  ((int)uVar12 >> 8) +
                                  (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
            uVar8 = (ulonglong)iVar11;
          }
          iVar9 = *(int *)(iVar9 + 0x28);
        }
      }
      else if (bVar1 < 2) {
        fVar3 = (moby->pos).z;
        uVar4 = (int)fVar3 >> 0x1f;
        uVar12 = *(uint *)(*(int *)((int)pvVar2 + 0x60) + 0x18);
        uVar5 = (int)uVar12 >> 0x1f;
        uVar8 = (ulonglong)(uVar5 >> 1 ^ uVar12) - (longlong)(int)uVar5;
        if ((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < (int)uVar8) {
          mobyutil::MB_genericExplosion
                    (0x4008000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
                     0x4022000000000000,0x3ff0000000000000,0x402e000000000000,uVar7,local_40,0,0,
                     &DAT_0044ecc0,10,3,0x10);
          uVar8 = 2;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        uVar8 = mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return uVar8;
}



//==== 0044f060  ns=mobyupdate_unsorted  size=0x2e8
// sig: undefined UpdateMoby_76(MobyInstance * moby)
// callers(0): 
// callees(4): 000fddc0 mobyutil::MB_SetAnimation; 00214100 FUN_00214100; 00454348 FUN_00454348; 004fff60 fastfunc::FastDecTimerS32

/* Moby 76 */

void mobyupdate_unsorted::UpdateMoby_76(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar6 = (longlong)(int)moby;
  bVar1 = moby->state;
  puVar2 = (undefined4 *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = '\x01';
    }
    else {
      iVar7 = FUN_00214100(*puVar2);
      if ((iVar7 != 0) && (moby->state = '\x02', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(lVar6,1,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 < 3) {
    if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      mobyutil::MB_SetAnimation(lVar6,2,0,(int)(animationSpeed * 10.5));
    }
    fVar4 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if (((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 16.0) && ((int)puVar2[3] <= (int)puVar2[4])) &&
       ((iVar7 = fastfunc::FastDecTimerS32(ZEXT48(puVar2) + 8), iVar7 != 0 &&
        (iVar7 = FUN_00454348(puVar2[1],lVar6 + 0x10), iVar7 != 0)))) {
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      puVar2[3] = puVar2[3] + 1;
      auVar8 = loadVectorLeftIndexed(8,0x44f050);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,8,ZEXT48(puVar2))
      ;
      *(undefined4 *)((uint)(puVar2 + 2) & 0xfffffffc) = uVar3;
    }
    iVar7 = FUN_00214100(*puVar2);
    if (iVar7 == 0) {
      puVar2[3] = 0;
      moby->state = '\x03';
      if (moby->animationId != '\x03') {
        mobyutil::MB_SetAnimation(lVar6,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (((bVar1 < 4) && (moby->animationId == '\x03')) &&
          (((moby->field43_0x70 & 2U) != 0 && (moby->state = '\x01', moby->animationId != '\0')))) {
    mobyutil::MB_SetAnimation(lVar6,0,0,(int)(animationSpeed * 10.5));
  }
  return;
}



//==== 0044f348  ns=mobyupdate_helpers  size=0x14
// sig: undefined M760_0044f348(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M760_0044f348(void)

{
  DAT_00871d50 = 0x10000;
  return;
}



//==== 0044f378  ns=mobyupdate_helpers  size=0x144
// sig: undefined M760_0044f378(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned

void mobyupdate_helpers::M760_0044f378(int param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  iVar2 = *(int *)(param_1 + 0x78);
  uVar6 = 0;
  uVar5 = 0x3ff0000000000000;
  dVar4 = (double)mobyutil::MB_randRangeSigned(0,0x3ff0000000000000);
  iVar3 = (int)(param_2 << 4);
  *(float *)(&DAT_010cde30 + iVar3) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeSigned(uVar6,uVar5);
  *(float *)(&DAT_010cde34 + iVar3) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeSigned(uVar6,uVar5);
  *(float *)(&DAT_010cde38 + iVar3) = (float)dVar4;
  fVar1 = *(float *)(iVar2 + 0x44);
  dVar7 = (double)*(float *)(iVar2 + 0x4c);
  dVar4 = (double)mobyutil::MB_randRangeFloat(fVar1,fVar1 + 2.0);
  iVar2 = (int)(param_2 << 2);
  *(float *)(&DAT_010d2930 + iVar2) = (float)dVar4;
  dVar4 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)(dVar7 + 4.0));
  *(float *)(&DAT_010d3bf0 + iVar2) = (float)dVar4;
  *(undefined4 *)(&DAT_010d5810 + iVar2) = 0;
  dVar4 = (double)mobyutil::MB_randRangeFloat(0.003,0.005);
  *(float *)(&DAT_010d6ad0 + iVar2) = (float)dVar4;
  (&DAT_010d5360)[(int)param_2] = 1;
  return;
}



//==== 0044f4c8  ns=mobyupdate_helpers  size=0x178
// sig: undefined M760_0044f4c8(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned

void mobyupdate_helpers::M760_0044f4c8(int param_1,longlong param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  psVar2 = *(short **)(param_1 + 0x78);
  uVar8 = 0;
  uVar7 = 0x3ff0000000000000;
  dVar6 = (double)mobyutil::MB_randRangeSigned(0,0x3ff0000000000000);
  iVar3 = (int)(param_2 << 4);
  *(float *)(&DAT_010cde30 + iVar3) = (float)dVar6;
  dVar6 = (double)mobyutil::MB_randRangeSigned(uVar8,uVar7);
  *(float *)(&DAT_010cde34 + iVar3) = (float)dVar6;
  dVar6 = (double)mobyutil::MB_randRangeSigned(uVar8,uVar7);
  *(float *)(&DAT_010cde38 + iVar3) = (float)dVar6;
  dVar6 = (double)mobyutil::MB_randRangeFloat(*(float *)(psVar2 + 8),*(float *)(psVar2 + 10));
  iVar3 = (int)(param_2 << 2);
  *(float *)(&DAT_010d2930 + iVar3) = (float)dVar6;
  dVar6 = (double)mobyutil::MB_randRangeFloat(*(float *)(psVar2 + 0xc),*(float *)(psVar2 + 0xe));
  *(float *)(&DAT_010d3bf0 + iVar3) = (float)dVar6;
  *(undefined4 *)(&DAT_010d5810 + iVar3) = 0;
  dVar6 = (double)mobyutil::MB_randRangeFloat(*(float *)(psVar2 + 4),*(float *)(psVar2 + 6));
  iVar4 = (int)(param_2 << 1);
  *(short *)(&DAT_010d7d90 + iVar4) = (short)DAT_010d99b4;
  *(undefined2 *)(&DAT_010d86f0 + iVar4) = 0;
  sVar1 = *psVar2;
  sVar5 = (short)DAT_010d99b0;
  *(float *)(&DAT_010d6ad0 + iVar3) = (float)dVar6;
  *(short *)(&DAT_010d9050 + iVar4) = ((short)param_2 - sVar1) * sVar5 + sVar5;
  (&DAT_010d5360)[(int)param_2] = 0;
  return;
}



//==== 0044f670  ns=mobyupdate_unsorted  size=0x824
// sig: undefined UpdateMoby_760(MobyInstance * moby)
// callers(0): 
// callees(9): 0006d7e0 draw::RegisterPostDraw; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 00126f50 partupd::SpawnPart_23; 0046c58c FUN_0046c58c; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 760 */

void mobyupdate_unsorted::UpdateMoby_760(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short *psVar4;
  short *psVar5;
  void *pvVar6;
  Cuboid *pCVar7;
  float fVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar15;
  undefined1 uVar16;
  int iVar12;
  byte bVar17;
  int iVar13;
  int iVar14;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  
  psVar4 = (short *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    if (*(int *)(psVar4 + 2) == -1) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      pCVar7 = Cuboids + *(int *)(psVar4 + 2);
      fVar1 = (pCVar7->matrix).v1.y;
      fVar2 = (pCVar7->matrix).v1.x;
      fVar3 = (pCVar7->matrix).v1.z;
      fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      *(float *)(psVar4 + 0x24) = fVar8;
      fVar1 = (pCVar7->matrix).v0.y;
      fVar2 = (pCVar7->matrix).v0.x;
      fVar3 = (pCVar7->matrix).v0.z;
      fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      if (fVar8 < fVar1) {
        *(float *)(psVar4 + 0x24) = fVar1;
        fVar8 = fVar1;
      }
      fVar1 = 3.0;
      if (psVar4[0x20] != 0) {
        fVar1 = fVar8;
      }
      *(float *)(psVar4 + 0x22) = fVar1;
      fVar1 = (pCVar7->matrix).v2.y;
      fVar2 = (pCVar7->matrix).v2.x;
      fVar3 = (pCVar7->matrix).v2.z;
      *(float *)(psVar4 + 0x28) = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * 0.5;
      sVar15 = FUN_0046c58c((longlong)psVar4[1] + (longlong)psVar4[0x20]);
      lVar19 = (longlong)sVar15;
      *psVar4 = sVar15;
      lVar18 = lVar19 + psVar4[1];
      iVar12 = (int)lVar18;
      if (sVar15 < iVar12) {
        uVar28 = 0x3ff0000000000000;
        uVar27 = 0;
        do {
          uVar16 = mobyutil::MB_randInt(2);
          iVar14 = (int)(lVar19 << 4);
          iVar13 = (int)lVar19;
          (&DAT_010d4eb0)[iVar13] = uVar16;
          psVar5 = (short *)moby->pVar;
          *(undefined4 *)(&DAT_010cde3c + iVar14) = 0x3f800000;
          dVar20 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde30 + iVar14) = (float)dVar20;
          dVar20 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde34 + iVar14) = (float)dVar20;
          dVar20 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde38 + iVar14) = (float)dVar20;
          dVar20 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)(psVar5 + 8),*(float *)(psVar5 + 10));
          iVar14 = (int)(lVar19 << 2);
          *(float *)(&DAT_010d2930 + iVar14) = (float)dVar20;
          dVar20 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)(psVar5 + 0xc),*(float *)(psVar5 + 0xe));
          *(float *)(&DAT_010d3bf0 + iVar14) = (float)dVar20;
          *(undefined4 *)(&DAT_010d5810 + iVar14) = 0;
          dVar20 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)(psVar5 + 4),*(float *)(psVar5 + 6));
          *(float *)(&DAT_010d6ad0 + iVar14) = (float)dVar20;
          uVar11 = DAT_010d99b0;
          iVar14 = (int)(lVar19 << 1);
          *(short *)(&DAT_010d7d90 + iVar14) = (short)DAT_010d99b4;
          *(undefined2 *)(&DAT_010d86f0 + iVar14) = 0;
          sVar15 = *psVar5;
          (&DAT_010d5360)[iVar13] = 0;
          sVar9 = (short)lVar19;
          *(undefined2 *)(&DAT_010d7d90 + iVar14) = 0;
          lVar19 = (longlong)(iVar13 + 1);
          *(short *)(&DAT_010d9050 + iVar14) = (sVar9 - sVar15) * (short)uVar11 + (short)uVar11;
        } while (iVar13 + 1 < iVar12);
      }
      sVar15 = psVar4[0x20];
      if (iVar12 < iVar12 + sVar15) {
        uVar28 = 0x3ff0000000000000;
        uVar27 = 0;
        dVar26 = 2.0;
        dVar25 = 4.0;
        dVar24 = 0.003000000026077032;
        dVar20 = 0.004999999888241291;
        do {
          uVar16 = mobyutil::MB_randInt(2);
          iVar14 = (int)(lVar18 << 4);
          iVar13 = (int)lVar18;
          (&DAT_010d4eb0)[iVar13] = uVar16;
          pvVar6 = moby->pVar;
          *(undefined4 *)(&DAT_010cde3c + iVar14) = 0x3f800000;
          dVar21 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde30 + iVar14) = (float)dVar21;
          dVar21 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde34 + iVar14) = (float)dVar21;
          dVar21 = (double)mobyutil::MB_randRangeSigned(uVar27,uVar28);
          *(float *)(&DAT_010cde38 + iVar14) = (float)dVar21;
          fVar1 = *(float *)((int)pvVar6 + 0x44);
          dVar23 = (double)*(float *)((int)pvVar6 + 0x4c);
          dVar21 = (double)mobyutil::MB_randRangeFloat(fVar1,(float)((double)fVar1 + dVar26));
          iVar14 = (int)(lVar18 << 2);
          *(float *)(&DAT_010d2930 + iVar14) = (float)dVar21;
          dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)(dVar23 + dVar25));
          *(float *)(&DAT_010d3bf0 + iVar14) = (float)dVar21;
          *(undefined4 *)(&DAT_010d5810 + iVar14) = 0;
          dVar21 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar20);
          *(float *)(&DAT_010d6ad0 + iVar14) = (float)dVar21;
          (&DAT_010d5360)[iVar13] = 1;
          lVar18 = (longlong)(iVar13 + 1);
        } while (iVar13 + 1 < iVar12 + sVar15);
      }
      Cuboids[*(int *)(psVar4 + 2)].pos.w = 1.0;
      *(uint *)(psVar4 + 0x1c) =
           (uint)*(byte *)(psVar4 + 0x1f) << 0x10 | (uint)*(byte *)((int)psVar4 + 0x3d) << 8 |
           (uint)*(byte *)(psVar4 + 0x1e);
    }
  }
  else if ((moby->state < 2) &&
          (iVar12 = fastfunc::FastCheckBsphereInView((double)DAT_008720d4,local_100), -1 < iVar12))
  {
    if ((psVar4[0x21] != 0) &&
       ((fVar1 = GameCamera.posY - (moby->pos).y, fVar2 = GameCamera.posX - (moby->pos).x,
        SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 128.0 && (iVar12 = 0, 0 < DAT_008720b4)))) {
      uVar28 = 0;
      uVar27 = 0x3ff0000000000000;
      dVar24 = 0.5;
      dVar20 = 0.25;
      do {
        mobyutil::MB_randRangeSigned(uVar28,uVar27);
        mobyutil::MB_randRangeSigned(uVar28,uVar27);
        mobyutil::MB_randRangeSigned(uVar28,(double)(float)((double)mobyutil::g_FrameTime * dVar20))
        ;
        mobyutil::MB_randRangeSigned(uVar28,(double)(float)((double)mobyutil::g_FrameTime * dVar20))
        ;
        uVar22 = mobyutil::MB_randRangeFloat(*(float *)(psVar4 + 0x12),*(float *)(psVar4 + 0x14));
        bVar17 = mobyutil::MB_randRange(psVar4[0x16],psVar4[0x17]);
        uVar10 = (uint)PTR_FUN_008720bc >> 0x18;
        mobyutil::MB_randRange(DAT_010ccec0,DAT_008720b8);
        iVar13 = partupd::SpawnPart_23
                           ((double)DAT_008720ac,uVar27,(double)DAT_008720b0,uVar22,local_e0);
        if (iVar13 != 0) {
          iVar14 = mobyutil::MB_randRange
                             (*(undefined4 *)(psVar4 + 0x18),*(undefined4 *)(psVar4 + 0x1a));
          iVar14 = (int)(animationSpeed * (float)((double)(longlong)iVar14 + dVar24));
          *(undefined4 *)(iVar13 + 0x24) = 3;
          *(short *)(iVar13 + 10) = (short)iVar14;
          *(byte *)(iVar13 + 0x2a) = bVar17 | (byte)uVar10;
          *(char *)(iVar13 + 0x2b) = (char)iVar14;
          iVar14 = mobyutil::MB_randInt(2);
          if (iVar14 != 0) {
            *(undefined1 *)(iVar13 + 3) = 0x44;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < DAT_008720b4);
    }
    draw::RegisterPostDraw(&PTR_M761_0044fea8_0070e840,moby);
  }
  return;
}



//==== 0044fea8  ns=mobyupdate_helpers  size=0xd6c
// sig: undefined M761_0044fea8(void)
// callers(0): 
// callees(14): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 00174f80 vuchain::SetGSReg; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f98 FUN_00502f98; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M761_0044fea8(ulonglong param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
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
  short sVar21;
  short sVar22;
  short *psVar23;
  short *psVar24;
  uint uVar25;
  ulonglong *puVar26;
  Cuboid *pCVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  char acVar34 [4];
  undefined4 uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined8 uVar38;
  int iVar40;
  int iVar41;
  undefined1 uVar42;
  ulonglong uVar39;
  longlong lVar43;
  longlong lVar44;
  int iVar45;
  longlong lVar46;
  int *piVar47;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  longlong lVar48;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar49;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar50;
  ulonglong unaff_r31;
  int iVar51;
  ulonglong in_LR;
  longlong lVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar59;
  ulonglong in_f29;
  double dVar60;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar61;
  undefined1 local_200 [64];
  float local_1c0 [112];
  
  uVar36 = ZEXT48(&stack0x00000000);
  lVar1 = uVar36 - 0x270;
  puVar26 = (ulonglong *)lVar1;
  *puVar26 = uVar36;
  puVar26[0x50] = in_LR;
  puVar26[0x46] = in_f24;
  puVar26[0x47] = in_f25;
  puVar26[0x48] = in_f26;
  puVar26[0x49] = in_f27;
  puVar26[0x4a] = in_f28;
  puVar26[0x4b] = in_f29;
  puVar26[0x4c] = in_f30;
  puVar26[0x4d] = in_f31;
  iVar50 = (int)param_1;
  fVar7 = *(float *)(iVar50 + 0x14);
  fVar8 = *(float *)(iVar50 + 0x10);
  fVar11 = GameCamera.posY - fVar7;
  fVar9 = *(float *)(iVar50 + 0x18);
  fVar2 = GameCamera.posX - fVar8;
  fVar12 = GameCamera.posZ - fVar9;
  puVar26[0x3c] = unaff_r22;
  psVar23 = *(short **)(iVar50 + 0x78);
  puVar26[0x42] = unaff_r28;
  bVar3 = *(byte *)(psVar23 + 0x2e);
  bVar4 = *(byte *)((int)psVar23 + 0x5f);
  puVar26[0x41] = unaff_r27;
  acVar34 = GameCamera.field8_0x14c;
  bVar5 = *(byte *)(psVar23 + 0x2f);
  bVar6 = *(byte *)((int)psVar23 + 0x5d);
  dVar60 = 1.0;
  *(char (*) [4])((int)puVar26 + 0x7c) = GameCamera.field8_0x14c;
  dVar59 = 0.0;
  puVar26[0x31] = param_1;
  pCVar27 = Cuboids;
  fVar10 = fVar12 * fVar12 + fVar2 * fVar2 + fVar11 * fVar11;
  iVar50 = *(int *)(psVar23 + 2);
  uVar32 = (uint)bVar4 << 0x10 | (uint)bVar5 << 8 | (uint)bVar6;
  puVar26[0x36] = unaff_r16;
  sVar21 = *psVar23;
  pCVar27 = pCVar27 + iVar50;
  sVar22 = psVar23[1];
  puVar26[0x35] = unaff_r15;
  iVar50 = *(int *)(psVar23 + 0x2a);
  puVar26[0x32] = (longlong)sVar21 + (longlong)sVar22 + (longlong)psVar23[0x20];
  puVar26[0x45] = unaff_r31;
  puVar26[0x44] = unaff_r30;
  puVar26[0x43] = unaff_r29;
  puVar26[0x40] = unaff_r26;
  puVar26[0x3f] = unaff_r25;
  puVar26[0x3e] = unaff_r24;
  puVar26[0x3d] = unaff_r23;
  puVar26[0x3b] = unaff_r21;
  puVar26[0x3a] = unaff_r20;
  puVar26[0x39] = unaff_r19;
  puVar26[0x38] = unaff_r18;
  puVar26[0x37] = unaff_r17;
  puVar26[0x34] = unaff_r14;
  dVar55 = dVar59;
  dVar56 = dVar59;
  dVar58 = dVar59;
  if (SQRT(fVar10) != 0.0) {
    fVar13 = 1.0 / SQRT(fVar10);
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar10 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    dVar58 = (double)(fVar2 * fVar13);
    dVar56 = (double)(fVar11 * fVar13);
    dVar55 = (double)(fVar12 * fVar13);
  }
  *(float *)(puVar26 + 0xe) = (float)dVar58;
  *(float *)((int)puVar26 + 0x74) = (float)dVar56;
  *(float *)(puVar26 + 0xf) = (float)dVar55;
  *(undefined4 *)((int)puVar26 + 0x8c) = 0;
  fVar2 = (float)(dVar58 * dVar58 + --(double)(float)(dVar56 * dVar56));
  dVar54 = dVar59;
  dVar53 = dVar59;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar53 = (double)(-(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10);
    dVar54 = (double)(float)(dVar58 * dVar53);
    dVar53 = -(double)(float)(dVar56 * dVar53);
  }
  *(char (*) [4])((int)puVar26 + 0xbc) = acVar34;
  *(float *)((int)puVar26 + 0x84) = (float)dVar54;
  *(float *)(puVar26 + 0x10) = (float)dVar53;
  *(float *)(puVar26 + 0x14) = fVar8;
  uVar49 = 0x3f800000;
  fVar2 = (float)(----(double)(float)(dVar56 * dVar56) + --(double)(float)(dVar58 * dVar58));
  *(float *)(puVar26 + 0x13) = (float)(dVar58 * dVar54 - (double)(float)(dVar56 * dVar53));
  *(undefined4 *)(puVar26 + 0x11) = 0;
  *(undefined4 *)((int)puVar26 + 0x9c) = 0;
  *(float *)((int)puVar26 + 0xa4) = fVar7;
  *(float *)(puVar26 + 0x15) = fVar9;
  *(undefined4 *)((int)puVar26 + 0xac) = 0x3f800000;
  *(undefined4 *)((int)puVar26 + 0xcc) = 0;
  *(float *)(puVar26 + 0x12) = (float)(dVar56 * 0.0 - (double)(float)(dVar55 * dVar54));
  *(float *)((int)puVar26 + 0x94) = (float)(dVar55 * dVar53 - 0.0);
  *(float *)(puVar26 + 0x16) = (float)-dVar58;
  *(float *)((int)puVar26 + 0xb4) = (float)-dVar56;
  *(float *)(puVar26 + 0x17) = (float)-dVar55;
  dVar54 = dVar59;
  dVar53 = dVar59;
  if (SQRT(fVar2) != 0.0) {
    fVar10 = 1.0 / SQRT(fVar2);
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    fVar10 = -(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
    dVar54 = (double)(-(fVar2 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10);
    dVar54 = -(double)(float)(dVar58 * dVar54);
    dVar53 = --(double)(float)(dVar56 * dVar54);
  }
  *(float *)(puVar26 + 0x18) = (float)dVar53;
  *(float *)((int)puVar26 + 0xc4) = (float)dVar54;
  *(undefined4 *)(puVar26 + 0x19) = 0;
  *(undefined4 *)((int)puVar26 + 0xdc) = 0;
  *(float *)(puVar26 + 0x1c) = fVar8;
  *(float *)((int)puVar26 + 0xe4) = fVar7;
  *(float *)(puVar26 + 0x1d) = fVar9;
  *(float *)((int)puVar26 + 0xd4) = -(float)(dVar55 * dVar53);
  *(undefined4 *)((int)puVar26 + 0xec) = 0x3f800000;
  *(float *)(puVar26 + 0x1a) = --(float)(dVar55 * dVar54);
  *(float *)(puVar26 + 0x1b) = -(float)(dVar58 * dVar54) - -(float)(dVar56 * dVar53);
  uVar37 = draw::GetEffectTex(iVar50 + 0x28);
  puVar26[0x2d] = uVar37;
  uVar37 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar26[0x2e] = uVar37;
  uVar37 = FUN_00502f08(0,0,0,0,0,0);
  puVar26[0x2c] = uVar37;
  uVar37 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar26[0x2f] = uVar37;
  uVar38 = FUN_00502e50(0);
  vuchain::SetGSReg(8,uVar38);
  uVar38 = FUN_00502f98(1,0,0,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar38);
  lVar48 = (longlong)*psVar23;
  if ((int)*psVar23 < (int)puVar26[0x32]) {
    do {
      iVar50 = (int)(lVar48 << 2);
      fVar7 = -(*(float *)(&DAT_010d6ad0 + iVar50) * DAT_0071f408 -
               *(float *)(&DAT_010d5810 + iVar50));
      iVar51 = (int)lVar48;
      bVar4 = (&DAT_010d4eb0)[iVar51];
      puVar26[0x30] = ZEXT48(&DAT_010d4eb0);
      *(float *)(&DAT_010d5810 + iVar50) = fVar7;
      uVar33 = (uint)((LZCOUNT(-(uint)bVar4) << 0x3a) >> 0x3f) & (uint)(local_200 + -(int)local_1c0)
      ;
      pfVar28 = (float *)((int)local_1c0 + uVar33);
      if (fVar7 <= -8.0) {
        *(float *)(&DAT_010d5810 + iVar50) = fVar7 + 8.0;
      }
      iVar45 = (int)(lVar48 << 4);
      fVar7 = *(float *)(&DAT_010cde34 + iVar45);
      fVar8 = *(float *)(&DAT_010cde30 + iVar45);
      fVar9 = *(float *)(&DAT_010cde38 + iVar45);
      fVar2 = *(float *)(&DAT_010cde3c + iVar45);
      fVar10 = (pCVar27->pos).x * fVar2 +
               (pCVar27->matrix).v2.x * fVar9 +
               (pCVar27->matrix).v0.x * fVar8 + (pCVar27->matrix).v1.x * fVar7;
      dVar54 = (double)fVar10;
      fVar12 = (pCVar27->pos).y * fVar2 +
               (pCVar27->matrix).v2.y * fVar9 +
               (pCVar27->matrix).v0.y * fVar8 + (pCVar27->matrix).v1.y * fVar7;
      dVar58 = (double)fVar12;
      fVar11 = (pCVar27->pos).z * fVar2 +
               (pCVar27->matrix).v2.z * fVar9 +
               (pCVar27->matrix).v0.z * fVar8 + (pCVar27->matrix).v1.z * fVar7;
      dVar56 = (double)fVar11;
      fVar7 = (pCVar27->pos).w * fVar2 +
              (pCVar27->matrix).v2.w * fVar9 +
              (pCVar27->matrix).v0.w * fVar8 + (pCVar27->matrix).v1.w * fVar7;
      dVar55 = (double)fVar7;
      *(float *)((int)local_1c0 + uVar33 + 0x30) = fVar10;
      *(float *)((int)local_1c0 + uVar33 + 0x34) = fVar12;
      *(float *)((int)local_1c0 + uVar33 + 0x38) = fVar11;
      *(float *)((int)local_1c0 + uVar33 + 0x3c) = fVar7;
      dVar61 = (double)*(float *)(&DAT_010d2930 + iVar50);
      dVar53 = (double)*(float *)(&DAT_010d3bf0 + iVar50);
      if ((&DAT_010d5360)[iVar51] == '\0') {
        lVar43 = lVar48 * 2;
        iVar40 = (int)lVar43;
        if (*(short *)(&DAT_010d7d90 + iVar40) == 0) {
          if (*(short *)(&DAT_010d86f0 + iVar40) == 0) {
            iVar45 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_010d9050) + lVar43 & 0xffffffff);
            if (iVar45 != 0) {
              *(short *)(&DAT_010d86f0 + iVar40) = (short)DAT_010d99bc;
            }
            uVar37 = (ulonglong)DAT_00871d80;
          }
          else {
            iVar41 = fastfunc::FastDecTimerS16(ZEXT48(&DAT_010d86f0) + lVar43 & 0xffffffff);
            if (iVar41 == 0) {
              dVar57 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(&DAT_010d86f0 + iVar40));
              uVar37 = fastfunc::FastDoubleToInt
                                 ((double)(DAT_00871d84 * (float)(dVar57 * (double)DAT_010d99c0)));
            }
            else {
              puVar26[0x33] = uVar49;
              psVar24 = *(short **)((int)puVar26[0x31] + 0x78);
              dVar57 = (double)mobyutil::MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde30 + iVar45) = (float)dVar57;
              dVar57 = (double)mobyutil::MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde34 + iVar45) = (float)dVar57;
              dVar57 = (double)mobyutil::MB_randRangeSigned(dVar59,dVar60);
              *(float *)(&DAT_010cde38 + iVar45) = (float)dVar57;
              dVar57 = (double)mobyutil::MB_randRangeFloat
                                         (*(float *)(psVar24 + 8),*(float *)(psVar24 + 10));
              *(float *)(&DAT_010d2930 + iVar50) = (float)dVar57;
              dVar57 = (double)mobyutil::MB_randRangeFloat
                                         (*(float *)(psVar24 + 0xc),*(float *)(psVar24 + 0xe));
              *(float *)(&DAT_010d3bf0 + iVar50) = (float)dVar57;
              *(undefined4 *)(&DAT_010d5810 + iVar50) = 0;
              dVar57 = (double)mobyutil::MB_randRangeFloat
                                         (*(float *)(psVar24 + 4),*(float *)(psVar24 + 6));
              *(float *)(&DAT_010d6ad0 + iVar50) = (float)dVar57;
              *(undefined2 *)(&DAT_010d86f0 + iVar40) = 0;
              uVar35 = DAT_010d99b0;
              *(short *)(&DAT_010d7d90 + iVar40) = (short)DAT_010d99b4;
              sVar21 = *psVar24;
              (&DAT_010d5360)[iVar51] = 0;
              *(short *)(&DAT_010d9050 + iVar40) =
                   ((short)lVar48 - sVar21) * (short)uVar35 + (short)uVar35;
              uVar42 = mobyutil::MB_randInt(2);
              uVar37 = 0;
              *(undefined1 *)((int)puVar26[0x30] + iVar51) = uVar42;
              uVar49 = puVar26[0x33];
            }
          }
        }
        else {
          fastfunc::FastDecTimerS16(ZEXT48(&DAT_010d7d90) + lVar43 & 0xffffffff);
          dVar57 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(&DAT_010d7d90 + iVar40));
          uVar37 = fastfunc::FastDoubleToInt
                             ((double)(DAT_00871d84 *
                                      -(float)(dVar57 * (double)DAT_010d99b8 - dVar60)));
        }
        uVar39 = idol_draw::PackCmd(0,2,0,1,0x80);
        puVar26[0x2f] = uVar39;
        fVar7 = *(float *)(&DAT_010d5810 + iVar50);
        uVar39 = 0;
        do {
          iVar50 = (int)uVar39;
          iVar45 = iVar50 * 0x10;
          bVar4 = (&DAT_00871dd0)[iVar50];
          iVar40 = (int)((uVar39 & 0x1fffffff) << 3);
          fVar8 = *(float *)(&DAT_00871d94 + iVar45);
          fVar9 = *(float *)(&DAT_00871d98 + iVar45);
          fVar2 = *(float *)(&DAT_00871dd4 + iVar40);
          *(undefined4 *)(puVar26 + iVar50 * 2 + 0x1e) = *(undefined4 *)(&DAT_00871d90 + iVar45);
          *(int *)((int)puVar26 + iVar45 + 0xfc) = (int)uVar49;
          uVar25 = *(uint *)(psVar23 + 0x1c);
          *(undefined4 *)((int)puVar26 + iVar40 + 0x144) = *(undefined4 *)(&DAT_00871dd8 + iVar40);
          *(float *)((int)puVar26 + iVar45 + 0xf4) = (float)((double)fVar8 * dVar61);
          *(float *)(puVar26 + iVar50 * 2 + 0x1f) = (float)((double)fVar9 * dVar53);
          *(float *)((int)puVar26 + iVar40 + 0x140) = fVar2 - fVar7;
          *(uint *)((int)puVar26 + (int)((uVar39 & 0xffffffff) << 2) + 0x130) =
               (uint)bVar4 * (int)((uVar37 & 0xffffffff) << 0x18) | uVar25;
          fVar8 = *(float *)((int)local_1c0 + uVar33 + 0x14);
          fVar9 = local_1c0[iVar50 * 4 + 0x11];
          fVar2 = local_1c0[iVar50 * 4 + 0x10];
          fVar10 = *(float *)((int)local_1c0 + uVar33 + 0x18);
          fVar11 = *(float *)((int)local_1c0 + uVar33 + 4);
          fVar12 = *(float *)((int)local_1c0 + uVar33 + 0x1c);
          fVar13 = *(float *)((int)local_1c0 + uVar33 + 8);
          fVar14 = local_1c0[iVar50 * 4 + 0x12];
          fVar15 = *(float *)((int)local_1c0 + uVar33 + 0xc);
          fVar16 = *(float *)((int)local_1c0 + uVar33 + 0x24);
          fVar17 = *(float *)((int)local_1c0 + uVar33 + 0x28);
          uVar39 = (ulonglong)(iVar50 + 1);
          dVar57 = (double)local_1c0[iVar50 * 4 + 0x13];
          fVar18 = *(float *)((int)local_1c0 + uVar33 + 0x2c);
          local_1c0[iVar50 * 4 + 0x10] =
               (float)(dVar57 * dVar54 +
                      (double)(*(float *)((int)local_1c0 + uVar33 + 0x20) * fVar14 +
                              *pfVar28 * fVar2 + *(float *)((int)local_1c0 + uVar33 + 0x10) * fVar9)
                      );
          local_1c0[iVar50 * 4 + 0x11] =
               (float)(dVar57 * dVar58 + (double)(fVar16 * fVar14 + fVar11 * fVar2 + fVar8 * fVar9))
          ;
          local_1c0[iVar50 * 4 + 0x12] =
               (float)(dVar57 * dVar56 + (double)(fVar17 * fVar14 + fVar13 * fVar2 + fVar10 * fVar9)
                      );
          local_1c0[iVar50 * 4 + 0x13] =
               (float)(dVar57 * dVar55 + (double)(fVar18 * fVar14 + fVar15 * fVar2 + fVar12 * fVar9)
                      );
        } while (iVar50 + 1 < 4);
        draw::FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
      }
      else {
        uVar37 = idol_draw::PackCmd(0,1,0,1,0x80);
        iVar45 = 2;
        puVar26[0x2f] = uVar37;
        iVar40 = 0x20;
        do {
          lVar46 = uVar36 - 0x180;
          piVar47 = (int *)((int)&DAT_00871f80 + iVar40);
          lVar52 = 4;
          lVar48 = lVar1;
          lVar43 = lVar1;
          lVar44 = lVar1;
          do {
            iVar41 = *piVar47;
            iVar29 = (int)lVar48;
            *(int *)(iVar29 + 0xfc) = (int)uVar49;
            iVar30 = iVar41 * 0x10;
            fVar7 = *(float *)(iVar30 + 0x871ec4);
            fVar8 = *(float *)(iVar30 + 0x871ec8);
            *(undefined4 *)(iVar29 + 0xf0) = *(undefined4 *)(iVar30 + 0x871ec0);
            piVar47 = piVar47 + 1;
            *(float *)(iVar29 + 0xf4) = (float)((double)fVar7 * dVar61);
            *(float *)(iVar29 + 0xf8) = (float)((double)fVar8 * dVar53);
            pfVar31 = (float *)lVar46;
            fVar7 = pfVar31[1];
            fVar8 = *(float *)((int)local_1c0 + uVar33 + 0x14);
            fVar9 = *pfVar31;
            fVar2 = *(float *)((int)local_1c0 + uVar33 + 0x18);
            fVar10 = *(float *)((int)local_1c0 + uVar33 + 4);
            fVar11 = *(float *)((int)local_1c0 + uVar33 + 0x1c);
            fVar12 = *(float *)((int)local_1c0 + uVar33 + 8);
            fVar13 = pfVar31[2];
            lVar48 = lVar48 + 0x10;
            fVar14 = *(float *)((int)local_1c0 + uVar33 + 0xc);
            fVar15 = *(float *)((int)local_1c0 + uVar33 + 0x24);
            fVar16 = *(float *)((int)local_1c0 + uVar33 + 0x28);
            dVar57 = (double)pfVar31[3];
            fVar17 = *(float *)((int)local_1c0 + uVar33 + 0x2c);
            *pfVar31 = (float)(dVar57 * dVar54 +
                              (double)(*(float *)((int)local_1c0 + uVar33 + 0x20) * fVar13 +
                                      *pfVar28 * fVar9 +
                                      *(float *)((int)local_1c0 + uVar33 + 0x10) * fVar7));
            pfVar31[1] = (float)(dVar57 * dVar58 +
                                (double)(fVar15 * fVar13 + fVar10 * fVar9 + fVar8 * fVar7));
            pfVar31[2] = (float)(dVar57 * dVar56 +
                                (double)(fVar16 * fVar13 + fVar12 * fVar9 + fVar2 * fVar7));
            pfVar31[3] = (float)(dVar57 * dVar55 +
                                (double)(fVar17 * fVar13 + fVar14 * fVar9 + fVar11 * fVar7));
            bVar4 = (&DAT_008720a0)[iVar41];
            fVar7 = *(float *)(iVar41 * 8 + 0x872044);
            fVar8 = *(float *)(&DAT_010d5810 + iVar50);
            lVar46 = lVar46 + 0x10;
            *(undefined4 *)((int)lVar43 + 0x144) = *(undefined4 *)(&DAT_00872040 + iVar41 * 8);
            *(uint *)((int)lVar44 + 0x130) = (uint)bVar4 * (uint)bVar3 * 0x1000000 | uVar32;
            lVar44 = lVar44 + 4;
            *(float *)((int)lVar43 + 0x140) = fVar7 + fVar8;
            lVar43 = lVar43 + 8;
            lVar52 = lVar52 + -1;
          } while (lVar52 != 0);
          draw::FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
          iVar45 = iVar45 + 1;
          iVar40 = iVar40 + 0x10;
        } while (iVar45 < 4);
      }
      lVar48 = (longlong)(iVar51 + 1);
    } while (iVar51 + 1 < (int)puVar26[0x32]);
  }
  uVar37 = draw::GetEffectTex(*(int *)(psVar23 + 0x2c) + 0x28);
  puVar26[0x2d] = uVar37;
  uVar37 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar26[0x2f] = uVar37;
  dVar59 = (double)(pCVar27->pos).x;
  dVar58 = (double)(pCVar27->pos).y;
  dVar56 = (double)(pCVar27->pos).w;
  dVar55 = (double)((pCVar27->pos).z - *(float *)(psVar23 + 0x28));
  if (psVar23[0x21] == 0) {
    iVar50 = 0;
    iVar51 = 0;
    do {
      lVar52 = 4;
      lVar46 = uVar36 - 0x180;
      piVar47 = (int *)((int)&DAT_00871f80 + iVar50);
      lVar48 = lVar1;
      lVar43 = lVar1;
      lVar44 = lVar1;
      do {
        iVar45 = *piVar47;
        iVar40 = iVar45 * 0x10;
        iVar41 = (int)lVar48;
        *(undefined4 *)(iVar41 + 0xf0) = *(undefined4 *)(&DAT_00871e00 + iVar40);
        fVar7 = *(float *)(&DAT_00871e08 + iVar40);
        fVar8 = *(float *)(puVar26 + 0x10);
        fVar9 = *(float *)((int)puVar26 + 0x84);
        fVar2 = *(float *)(puVar26 + 0xe);
        fVar10 = *(float *)(puVar26 + 0x11);
        fVar11 = *(float *)((int)puVar26 + 0x74);
        piVar47 = piVar47 + 1;
        *(float *)(iVar41 + 0xf4) = *(float *)(&DAT_00871e04 + iVar40) * *(float *)(psVar23 + 0x24);
        fVar12 = *(float *)(psVar23 + 0x26);
        *(int *)(iVar41 + 0xfc) = (int)uVar49;
        fVar13 = *(float *)((int)puVar26 + 0x8c);
        fVar14 = *(float *)(puVar26 + 0xf);
        fVar15 = *(float *)(puVar26 + 0x12);
        fVar16 = *(float *)((int)puVar26 + 0x7c);
        fVar17 = *(float *)((int)puVar26 + 0x94);
        fVar18 = *(float *)(puVar26 + 0x13);
        *(float *)(iVar41 + 0xf8) = fVar7 * fVar12;
        pfVar28 = (float *)lVar46;
        fVar7 = pfVar28[1];
        fVar12 = *pfVar28;
        fVar19 = pfVar28[2];
        dVar60 = (double)pfVar28[3];
        fVar20 = *(float *)((int)puVar26 + 0x9c);
        lVar48 = lVar48 + 0x10;
        *pfVar28 = (float)(dVar60 * dVar59 +
                          (double)(fVar15 * fVar19 + fVar2 * fVar12 + fVar8 * fVar7));
        pfVar28[1] = (float)(dVar60 * dVar58 +
                            (double)(fVar17 * fVar19 + fVar11 * fVar12 + fVar9 * fVar7));
        pfVar28[2] = (float)(dVar60 * dVar55 +
                            (double)(fVar18 * fVar19 + fVar14 * fVar12 + fVar10 * fVar7));
        pfVar28[3] = (float)(dVar60 * dVar56 +
                            (double)(fVar20 * fVar19 + fVar16 * fVar12 + fVar13 * fVar7));
        bVar3 = (&DAT_008720a0)[iVar45];
        lVar46 = lVar46 + 0x10;
        fVar7 = *(float *)(&DAT_00871fe4 + iVar45 * 8) + DAT_010d99c4;
        *(undefined4 *)((int)lVar43 + 0x144) = *(undefined4 *)(&DAT_00871fe0 + iVar45 * 8);
        *(uint *)((int)lVar44 + 0x130) = (uint)bVar3 * -0x1000000 | uVar32;
        lVar44 = lVar44 + 4;
        *(float *)((int)lVar43 + 0x140) = fVar7;
        lVar43 = lVar43 + 8;
        lVar52 = lVar52 + -1;
      } while (lVar52 != 0);
      draw::FastDrawQuad(uVar36 - 0x180,0,0,EffectTexHeaders,9);
      iVar51 = iVar51 + 1;
      iVar50 = iVar50 + 0x10;
    } while (iVar51 < 6);
  }
  return;
}



