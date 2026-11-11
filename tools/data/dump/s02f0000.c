//==== 002f0594  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1412_002f0594(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1412_002f0594(void)

{
  DAT_007feccc = 0x10000;
  return;
}



//==== 002f05c0  ns=mobyupdate_helpers  size=0x294
// sig: undefined M1412_002f05c0(void)
// callers(1): 002f0898 mobyupdate_helpers::M1412_002f0898
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 0010c000 mobyutil::MB_CopyHeroLights; 005c8318 rand

MobyInstance *
mobyupdate_helpers::M1412_002f05c0
          (double param_1,int param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
          undefined2 param_6)

{
  f32 fVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  undefined8 in_LR;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pMVar6 = mobyfunc::CreateMoby(ASTEROID_0584);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = -1;
    sVar3 = *(short *)(param_2 + 0x32);
    pMVar6->enabled = '\x01';
    pMVar6->state = '\x02';
    pMVar6->setByGroup = '\0';
    pMVar6->field45_0x72 = '\0';
    puVar4 = (undefined4 *)pMVar6->pVar;
    (pMVar6->pos).x = *param_3;
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    (pMVar6->pos).y = param_3[1];
    (pMVar6->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar6->drawDistance = sVar3;
    (pMVar6->pos).w = fVar1;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    *puVar4 = *param_4;
    puVar4[1] = param_4[1];
    puVar4[2] = param_4[2];
    uVar2 = param_4[3];
    puVar4[0x12] = param_2;
    puVar4[3] = uVar2;
    pMVar6->scale = (float)param_1;
    puVar4[0x10] = 1;
    auVar11 = loadVectorLeftIndexed(in_LR,0x2f05a8);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar11,0x4c,ZEXT48(puVar4));
    *(undefined2 *)(puVar4 + 0x13) = uVar5;
    *(undefined2 *)((int)puVar4 + 0x4e) = param_6;
    pMVar6->collision = (ushort *)0x0;
    dVar9 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
    dVar10 = 0.01745329238474369;
    dVar9 = (double)((float)(dVar9 * 0.01745329238474369) * mobyutil::g_FrameTime);
    iVar7 = rand();
    iVar7 = iVar7 % 3;
    if (iVar7 < 1) {
      if (-1 < iVar7) {
        puVar4[0xc] = (float)dVar9;
      }
    }
    else if (iVar7 < 2) {
      puVar4[0xd] = (float)dVar9;
    }
    else if (iVar7 < 3) {
      puVar4[0xe] = (float)dVar9;
    }
    dVar9 = (double)mobyutil::MB_randRangeFloat(-180.0,180.0);
    dVar9 = (double)((float)(dVar9 * dVar10) * mobyutil::g_FrameTime);
    iVar8 = rand();
    iVar7 = iVar8 / 3 + (iVar8 >> 0x1f);
    iVar8 = iVar8 + (iVar7 - (iVar7 >> 0x1f)) * -3;
    if (iVar8 < 1) {
      if (-1 < iVar8) {
        puVar4[0xc] = (float)dVar9;
      }
    }
    else if (iVar8 < 2) {
      puVar4[0xd] = (float)dVar9;
    }
    else if (iVar8 < 3) {
      puVar4[0xe] = (float)dVar9;
    }
    dVar9 = (double)mobyutil::MB_randRot();
    (pMVar6->rotation).x = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRot();
    (pMVar6->rotation).y = (float)dVar9;
    dVar9 = (double)mobyutil::MB_randRot();
    (pMVar6->rotation).z = (float)dVar9;
    mobyfunc::UpdateMobyTransform(pMVar6);
    mobyutil::MB_CopyHeroLights(pMVar6);
  }
  return pMVar6;
}



//==== 002f0898  ns=mobyupdate_helpers  size=0x428
// sig: undefined M1412_002f0898(void)
// callers(1): 002f0cf8 mobyupdate_unsorted::UpdateMoby_{212_1412}
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 002f05c0 mobyupdate_helpers::M1412_002f05c0; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1412_002f0898(double param_1,MobyInstance *param_2,undefined8 param_3)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 local_a0 [4];
  undefined1 local_90 [16];
  
  fVar1 = (param_2->pos).y - g_heroPosition.y;
  fVar3 = (param_2->pos).x - g_heroPosition.x;
  fVar4 = (param_2->pos).z - g_heroPosition.z;
  dVar17 = 10.0;
  dVar14 = (double)(float)(param_1 * 10.0);
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
  dVar13 = dVar14;
  if (20.0 - fVar1 < 0.0) {
    dVar13 = 0.0;
  }
  dVar15 = (double)(float)(param_1 * 7.0);
  if (20.0 - fVar1 < 0.0) {
    dVar15 = 0.0;
  }
  sound::PlayMobySound(0,0,param_2);
  pfVar5 = (float *)param_3;
  if (*(short *)(pfVar5 + 0x13) == 0) {
    uVar6 = fastfunc::FastDoubleToInt(dVar14);
    uVar7 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 3.0));
    uVar8 = fastfunc::FastDoubleToInt((double)(float)(param_1 * 16.0));
    mobyutil::MB_genericExplosion
              (dVar15,dVar13,(double)(float)(param_1 * 4.0),(double)(float)(param_1 * 2.0),
               0x4022000000000000,0x3ff0000000000000,(double)(float)(param_1 * 15.0),param_2,
               &DAT_007350c0,0,0,1,uVar6,uVar7,uVar8);
  }
  param_2->field45_0x72 = '\0';
  if (*(short *)((int)pfVar5 + 0x4e) < 1) {
    if (pfVar5[0x10] == 0.0) {
      param_2->enabled = '\0';
      param_2->collision = (ushort *)0x0;
      param_2->state = '\x04';
      fVar1 = pfVar5[0xb];
      param_2->modeBits = param_2->modeBits | DISABLED;
      param_2->scale = fVar1;
    }
    else {
      mobyfunc::DeleteMoby(param_2);
    }
  }
  else {
    dVar13 = 0.25;
    dVar14 = 0.75;
    dVar15 = 5.0;
    dVar16 = 0.20000000298023224;
    for (iVar11 = 0; iVar9 = mobyutil::MB_randRange(1,2), iVar11 < iVar9; iVar11 = iVar11 + 1) {
      dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar14);
      dVar12 = (double)(float)((double)param_2->scale * dVar12);
      mobyutil::MB_randSphere
                ((double)(float)((double)mobyutil::g_FrameTime * dVar15),
                 (double)(float)((double)mobyutil::g_FrameTime * dVar17),local_a0);
      *pfVar5 = (float)((double)*pfVar5 * dVar14);
      pfVar5[1] = (float)((double)pfVar5[1] * dVar14);
      pfVar5[2] = (float)((double)pfVar5[2] * dVar14);
      M1412_002f05c0(dVar12,param_2,local_90,local_a0,*(short *)((int)pfVar5 + 0x4e),
                     (longlong)*(short *)((int)pfVar5 + 0x4e) + -1);
      fVar1 = (float)((double)param_2->scale - dVar12);
      sVar10 = *(short *)((int)pfVar5 + 0x4e) + -1;
      *(short *)((int)pfVar5 + 0x4e) = sVar10;
      param_2->scale = fVar1;
      if ((sVar10 == 0) || ((double)(fVar1 / param_2->pClass->gScale) <= dVar16)) break;
    }
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    param_2->collision = (ushort *)0x0;
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar18 = loadVectorLeftIndexed(0x40,0x2f0854);
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorMultiplyAddFloatingPoint
                        (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                         auVar19);
    auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = vectorSplatHalfWord(auVar18,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar18,0x4c,param_3);
    *(undefined2 *)(pfVar5 + 0x13) = uVar2;
  }
  return;
}



//==== 002f0cf8  ns=mobyupdate_unsorted  size=0x92c
// sig: undefined UpdateMoby_{212_1412}(MobyInstance * moby)
// callers(0): 
// callees(13): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0010675c mobyutil::MB_damage; 002f0898 mobyupdate_helpers::M1412_002f0898; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502910 fastfunc::FastCheckBsphereInView; 005c8318 rand

/* Moby 212
   Moby 1412 */

void mobyupdate_unsorted::UpdateMoby__212_1412_(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  MobyModeBit MVar10;
  float *pfVar11;
  MobyClass *pMVar12;
  u16 *puVar13;
  f32 fVar14;
  uint uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  longlong lVar18;
  undefined2 uVar22;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  lVar18 = (longlong)(int)moby;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y - g_heroPosition.y;
  fVar5 = fVar3 - g_heroPosition.x;
  pfVar11 = (float *)moby->pVar;
  uVar23 = ZEXT48(pfVar11);
  fVar6 = (moby->pos).z - g_heroPosition.z;
  uVar1 = moby->state;
  dVar24 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (uVar1 == '\x04') {
    iVar20 = fastfunc::FastCheckBsphereInView
                       ((double)(longlong)(int)moby->drawDistance,uVar23 + 0x10);
    if (iVar20 < 0) {
      (moby->pos).x = pfVar11[4];
      pMVar12 = moby->pClass;
      (moby->pos).y = pfVar11[5];
      MVar10 = moby->modeBits;
      (moby->pos).z = pfVar11[6];
      (moby->pos).w = pfVar11[7];
      puVar13 = pMVar12->collision;
      moby->enabled = '\x01';
      moby->collision = puVar13;
      moby->modeBits =
           MVar10 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x03') {
    (moby->pos).x = pfVar11[4];
    (moby->pos).y = pfVar11[5];
    (moby->pos).z = pfVar11[6];
    (moby->pos).w = pfVar11[7];
    *(undefined1 *)(pfVar11 + 0xc) = 0;
    *(undefined1 *)((int)pfVar11 + 0x31) = 0;
    *(undefined1 *)((int)pfVar11 + 0x32) = 0;
    *(undefined1 *)((int)pfVar11 + 0x33) = 0;
    *(undefined1 *)(pfVar11 + 0xd) = 0;
    *(undefined1 *)((int)pfVar11 + 0x35) = 0;
    *(undefined1 *)((int)pfVar11 + 0x36) = 0;
    *(undefined1 *)((int)pfVar11 + 0x37) = 0;
    *(undefined1 *)(pfVar11 + 0xe) = 0;
    *(undefined1 *)((int)pfVar11 + 0x39) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3a) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3b) = 0;
    *(undefined1 *)(pfVar11 + 0xf) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3d) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3e) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3f) = 0;
    dVar24 = (double)mobyutil::MB_randRangeFloat(-30.0,30.0);
    dVar25 = 0.01745329238474369;
    dVar24 = (double)((float)(dVar24 * 0.01745329238474369) * mobyutil::g_FrameTime);
    iVar20 = rand();
    iVar20 = iVar20 % 3;
    if (iVar20 < 1) {
      if (-1 < iVar20) {
        pfVar11[0xc] = (float)dVar24;
      }
    }
    else if (iVar20 < 2) {
      pfVar11[0xd] = (float)dVar24;
    }
    else if (iVar20 < 3) {
      pfVar11[0xe] = (float)dVar24;
    }
    dVar24 = (double)mobyutil::MB_randRangeFloat(-180.0,180.0);
    dVar24 = (double)((float)(dVar24 * dVar25) * mobyutil::g_FrameTime);
    iVar21 = rand();
    iVar20 = iVar21 / 3 + (iVar21 >> 0x1f);
    iVar21 = iVar21 + (iVar20 - (iVar20 >> 0x1f)) * -3;
    if (iVar21 < 1) {
      if (-1 < iVar21) {
        pfVar11[0xc] = (float)dVar24;
      }
    }
    else if (iVar21 < 2) {
      pfVar11[0xd] = (float)dVar24;
    }
    else if (iVar21 < 3) {
      pfVar11[0xe] = (float)dVar24;
    }
    dVar24 = (double)mobyutil::MB_randRot();
    (moby->rotation).x = (float)dVar24;
    dVar24 = (double)mobyutil::MB_randRot();
    (moby->rotation).y = (float)dVar24;
    dVar24 = (double)mobyutil::MB_randRot();
    (moby->rotation).z = (float)dVar24;
    fVar3 = pfVar11[0xb];
    *(undefined1 *)pfVar11 = 0;
    uVar15 = (int)fVar3 >> 0x1f;
    *(undefined1 *)((int)pfVar11 + 1) = 0;
    *(undefined1 *)((int)pfVar11 + 2) = 0;
    *(undefined1 *)((int)pfVar11 + 3) = 0;
    *(undefined1 *)(pfVar11 + 1) = 0;
    *(undefined1 *)((int)pfVar11 + 5) = 0;
    *(undefined1 *)((int)pfVar11 + 6) = 0;
    *(undefined1 *)((int)pfVar11 + 7) = 0;
    *(undefined1 *)(pfVar11 + 2) = 0;
    *(undefined1 *)((int)pfVar11 + 9) = 0;
    *(undefined1 *)((int)pfVar11 + 10) = 0;
    *(undefined1 *)((int)pfVar11 + 0xb) = 0;
    *(undefined1 *)(pfVar11 + 3) = 0;
    *(undefined1 *)((int)pfVar11 + 0xd) = 0;
    *(undefined1 *)((int)pfVar11 + 0xe) = 0;
    *(undefined1 *)((int)pfVar11 + 0xf) = 0;
    moby->scale = pfVar11[0xb];
    fVar4 = moby->pClass->gScale;
    uVar19 = (int)fVar4 >> 0x1f;
    if ((int)((uVar19 >> 1 ^ (uint)fVar4) - uVar19) < (int)((uVar15 >> 1 ^ (uint)fVar3) - uVar15)) {
      moby->field45_0x72 = 'd';
    }
    moby->state = '\x01';
  }
  else if (uVar1 == '\x02') {
    fastfunc::FastDecTimerS16(uVar23 + 0x4c);
    cVar2 = moby->enabled;
    (moby->pos).x = (moby->pos).x + *pfVar11;
    (moby->pos).y = (moby->pos).y + pfVar11[1];
    (moby->pos).z = (moby->pos).z + pfVar11[2];
    if ((cVar2 != '\0') || (dVar24 < 40.0)) {
      if (pfVar11[0x10] == 0.0) {
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = loadVectorLeftIndexed(0x10,0x2f0cc0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      }
      else {
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = loadVectorLeftIndexed(0x14,0x2f0cc0);
        auVar27 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar26 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
      sVar9 = *(short *)(pfVar11 + 0x13);
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar27 = vectorMultiplyAddFloatingPoint
                          (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar27,
                           auVar28);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      uVar16 = storeVectorElementWordIndexed(auVar27,0x44,uVar23);
      *(undefined4 *)((uint)(pfVar11 + 0x11) & 0xfffffffc) = uVar16;
      uVar15 = worldUpdateTime;
      if (sVar9 == 0) {
        uVar19 = (int)moby - (int)MobyInstance;
        moby->collision = moby->pClass->collision;
        dVar24 = (double)(moby->scale / moby->pClass->gScale);
        if ((((uVar15 ^ ((int)uVar19 >> 8) + (uint)((int)uVar19 < 0 && (uVar19 & 0xff) != 0)) & 1)
             == 0) &&
           (iVar20 = collproc::CollSphere
                               ((double)(float)(dVar24 * 6.199999809265137),lVar18 + 0x10,
                                &DAT_002f0cc0,0,lVar18), iVar20 != 0)) {
          if (CollOutput.pMoby != (MobyInstance *)pfVar11[0x12]) {
            fastfunc::FastVecNormalize(uVar23,uVar23,0xa10980);
            (moby->pos).x = CollOutput.push.x;
            (moby->pos).y = CollOutput.push.y;
            (moby->pos).z = CollOutput.push.z;
            pMVar17 = CollOutput.pMoby;
            (moby->pos).w = CollOutput.push.w;
            if ((pMVar17 == (MobyInstance *)0x0) || (pMVar17->oClass != ASTEROID_00D4)) {
              mobyupdate_helpers::M1412_002f0898(dVar24,lVar18,uVar23);
            }
          }
        }
        else {
          iVar20 = mobyutil::MB_damage(lVar18,0x330000,0);
          if ((iVar20 != 0) && (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) != 0xd4)) {
            fVar3 = *(float *)(iVar20 + 0x14);
            fVar4 = *(float *)(iVar20 + 0x10);
            fVar5 = *(float *)(iVar20 + 0x18);
            fVar6 = moby->scale;
            fVar8 = moby->pClass->gScale;
            fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
            if (mobyutil::g_FrameTime * 20.0 < fVar7) {
              fVar7 = (mobyutil::g_FrameTime * 20.0) / fVar7;
              fVar4 = fVar4 * fVar7;
              *(float *)(iVar20 + 0x10) = fVar4;
              *(float *)(iVar20 + 0x14) = fVar3 * fVar7;
              *(float *)(iVar20 + 0x18) = fVar5 * fVar7;
            }
            *pfVar11 = *pfVar11 + fVar4;
            pfVar11[1] = pfVar11[1] + *(float *)(iVar20 + 0x14);
            pfVar11[2] = pfVar11[2] + *(float *)(iVar20 + 0x18);
            mobyupdate_helpers::M1412_002f0898((double)(fVar6 / fVar8),lVar18,uVar23);
          }
          moby->damage = -1;
        }
      }
    }
    else {
      iVar20 = fastfunc::FastDecTimerS32(uVar23 + 0x44);
      if (iVar20 != 0) {
        if (pfVar11[0x10] == 1.4013e-45) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\x04';
        fVar3 = pfVar11[0xb];
        moby->modeBits = moby->modeBits | DISABLED;
        moby->scale = fVar3;
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
        (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) && ((moby->enabled != '\0' || (dVar24 < 40.0))))
    {
      dVar24 = (double)mobyutil::MB_randRangeFloat(1.0,10.0);
      fVar3 = pfVar11[9];
      fVar4 = pfVar11[8];
      fVar5 = pfVar11[10];
      fVar6 = 0.0;
      fVar8 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar8 == 0.0) {
        fVar7 = pfVar11[0xb];
        fVar5 = fVar6;
        fVar3 = fVar6;
      }
      else {
        fVar8 = (float)(dVar24 * (double)mobyutil::g_FrameTime) / fVar8;
        fVar7 = pfVar11[0xb];
        fVar6 = fVar4 * fVar8;
        fVar5 = fVar5 * fVar8;
        fVar3 = fVar3 * fVar8;
      }
      *pfVar11 = fVar6;
      pfVar11[1] = fVar3;
      pfVar11[2] = fVar5;
      pfVar11[3] = fVar7;
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    pfVar11[4] = fVar3;
    pfVar11[5] = (moby->pos).y;
    fVar3 = (moby->pos).z;
    pfVar11[7] = 20.0;
    pfVar11[6] = fVar3;
    pfVar11[8] = (moby->transform).v0.x;
    pfVar11[9] = (moby->transform).v0.y;
    pfVar11[10] = (moby->transform).v0.z;
    pfVar11[0xb] = (moby->transform).v0.w;
    pfVar11[0xb] = moby->scale;
    uVar22 = mobyutil::MB_randRange(2,3);
    *(undefined2 *)((int)pfVar11 + 0x4e) = uVar22;
    uVar15 = (int)moby->scale >> 0x1f;
    fVar3 = moby->pClass->gScale;
    uVar19 = (int)fVar3 >> 0x1f;
    if ((int)((uVar15 >> 1 ^ (uint)moby->scale) - uVar15) <
        (int)((uVar19 >> 1 ^ (uint)fVar3) - uVar19)) {
      moby->field45_0x72 = '\0';
    }
    moby->state = '\x03';
  }
  fVar14 = (moby->pos).x;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar3 = 20.0;
  fVar4 = (moby->pos).x;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).x = 1003.0;
  }
  fVar14 = (moby->pos).y;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar4 = (moby->pos).y;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).y = 1003.0;
  }
  fVar14 = (moby->pos).z;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar4 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).z = 1003.0;
  }
  dVar24 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar11[0xc]);
  (moby->rotation).x = (float)dVar24;
  dVar24 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar11[0xd]);
  (moby->rotation).y = (float)dVar24;
  dVar24 = (double)fastfunc::FastWrapRot((moby->rotation).z,pfVar11[0xe]);
  (moby->rotation).z = (float)dVar24;
  return;
}



//==== 002f1624  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1412_002f1624(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1412_002f1624(void)

{
  DAT_007fed3c = 0x10000;
  return;
}



//==== 002f1660  ns=mobyupdate_helpers  size=0x88
// sig: undefined M1412_002f1660(void)
// callers(0): 
// callees(0): 

double mobyupdate_helpers::M1412_002f1660(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
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
  dVar5 = (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5);
  return (double)(float)(param_1 * (double)(float)(1.0 - dVar5) + (double)(float)(param_2 * dVar5));
}



//==== 002f1710  ns=mobyupdate_helpers  size=0x284
// sig: undefined M1412_002f1710(void)
// callers(0): 
// callees(2): 004fff60 fastfunc::FastDecTimerS32; 00501980 fastfunc::FastQuaternionToEuler

void mobyupdate_helpers::M1412_002f1710(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 in_LR;
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
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar7 = (ulonglong)uVar1;
  if (*(char *)(uVar1 + 0x111) == '\x01') {
    auVar8 = loadVectorLeftIndexed(0x108,uVar7);
    auVar9 = loadVectorRightIndexed(0x118,uVar7);
    if (*(int *)(uVar1 + 0x108) != 0) {
      auVar10 = loadVectorLeftIndexed(0xffffffffffffb440,0x10c0000);
      auVar11 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = ZEXT416(0xffffffff);
      auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = ZEXT416(0xffffffff);
      auVar16 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = loadVectorLeftIndexed(4,0x2f16e8);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar14 = vectorReciprocalEstimateFloatingPoint(auVar11);
      auVar10 = ZEXT416(0xffffffff);
      auVar17 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = loadVectorLeftIndexed(in_LR,0x2f16e8);
      auVar10 = ZEXT416(0xffffffff);
      auVar18 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar11,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar13);
      auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar11,auVar15);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar13);
      auVar8 = loadVectorLeftIndexed(8,0x2f16e8);
      auVar9 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar11,auVar15);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar8,auVar14);
      auVar11 = loadVectorLeftIndexed(0xc,0x2f16e8);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = (float)(longlong)*(int *)(uVar1 + 0x108) * (3.1415927 / (float)(longlong)DAT_010bb440)
      ;
      auVar14 = loadVectorLeftIndexed(0x10,0x2f16e8);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar17);
      auVar10 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar14 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar18);
      auVar9 = vectorSubtractFloatingPoint
                         (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
      auVar11 = vectorSubtractFloatingPoint
                          (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar8);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar12 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar8);
      auVar9 = vectorConditionalSelect(auVar9,auVar8,auVar12);
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar11);
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar9 = vectorConditionalSelect(auVar11,auVar9,auVar8);
      auVar8 = ZEXT416(0xffffffff);
      auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar13 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = loadVectorLeftIndexed(0x14,0x2f16e8);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = fVar5 * fVar5;
      auVar13 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar13,auVar12);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar9);
      auVar13 = loadVectorLeftIndexed(0x18,0x2f16e8);
      auVar10 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      fVar4 = fVar3 * fVar3 * fVar5;
      auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar6 = fVar3 * fVar4;
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar14,auVar10);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar14,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = loadVectorLeftIndexed(0x1c,0x2f16e8);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xffffffffffffed80,0x800000);
      auVar11 = loadVectorLeftIndexed(0x20,0x2f16e8);
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar8);
      auVar8 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = DAT_007fed80 *
              (fVar3 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5);
      auVar8 = ((auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60) ^ auVar9) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x104,uVar7);
      *(undefined4 *)(uVar1 + 0x104 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x100,uVar7);
      *(undefined4 *)(uVar1 + 0x100 & 0xfffffffc) = uVar2;
      fastfunc::FastQuaternionToEuler(-(double)fVar3,uVar7 + 0x160,1);
      fastfunc::FastQuaternionToEuler((double)*(float *)(uVar1 + 0x100),uVar7 + 0x120,1);
      fastfunc::FastDecTimerS32(uVar7 + 0x108);
    }
  }
  return;
}



//==== 002f1994  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_215(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 215 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_215(MobyInstance *moby)

{
  return moby;
}



//==== 002f19c8  ns=mobyupdate_helpers  size=0x1a4
// sig: undefined M217_002f19c8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M217_002f19c8(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(0x10,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb424 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb424,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x18,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_010bb42c = storeVectorElementWordIndexed(auVar2,0xffffffffffffb42c,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x1c,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar3 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar5 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar3,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb430 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb430,0x10c0000);
  DAT_010bb434 = storeVectorElementWordIndexed(auVar2,0xffffffffffffb434,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x20,0x2f1998);
  auVar2 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = ZEXT416(0xffffffff);
  auVar3 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,auVar5);
  auVar2 = vectorShiftLeftIntegerWord(auVar3,auVar3);
  DAT_007fedd8 = 0x10000;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  DAT_010bb414 = DAT_0071f408 * 0.2;
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb438 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb438,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x24,0x2f1998);
  DAT_010bb418 = DAT_0071f408 * 0.075;
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb41c = DAT_0071f40c * 0.008;
  DAT_010bb420 = DAT_0071f408 * 0.05;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_010bb428 = DAT_0071f408 * 0.1;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  DAT_010bb43c = DAT_0071f408 * 0.1;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb440 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb440,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x28,0x2f1998);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb444 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb444,0x10c0000);
  return;
}



//==== 002f1b70  ns=mobyupdate_helpers  size=0x74
// sig: undefined M217_002f1b70(void)
// callers(1): 002f20a0 mobyupdate_unsorted::UpdateMoby_217
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M217_002f1b70
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  mobyutil::MB_SetAnimation();
  iVar1 = *(int *)(iVar1 + 0x424);
  if (iVar1 != 0) {
    mobyutil::MB_SetAnimation(iVar1,param_2,param_3,param_4);
  }
  return;
}



//==== 002f1be4  ns=mobyupdate_helpers  size=0x1c
// sig: undefined M217_002f1be4(void)
// callers(1): 002f20a0 mobyupdate_unsorted::UpdateMoby_217
// callees(0): 

void mobyupdate_helpers::M217_002f1be4(double param_1,int param_2)

{
  int iVar1;
  
  *(float *)(param_2 + 0x58) = (float)param_1;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 0x424);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x58) = (float)param_1;
  }
  return;
}



//==== 002f1c10  ns=mobyupdate_helpers  size=0x300
// sig: undefined M217_002f1c10(void)
// callers(0): 
// callees(3): 00175644 walk::walk_SetupTwistVals; 00175688 walk::walk_init2LegAnim; 0050027c fastfunc::FastMemCopy32

void mobyupdate_helpers::M217_002f1c10(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined1 local_f0 [80];
  undefined1 local_a0 [88];
  
  pvVar1 = param_1->pVar;
  dVar3 = 2.0;
  fastfunc::FastMemCopy32((int)pvVar1 + 0x210,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x214,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x218,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x21c,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x220,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x224,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x228,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x22c,local_a0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x230,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x234,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x238,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x23c,local_f0,0x50);
  fastfunc::FastMemCopy32((int)pvVar1 + 0x240,local_f0,0x50);
  walk::walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x1a0));
  dVar4 = (double)DAT_0071f418;
  *(float *)((int)pvVar1 + 0x27c) = (float)(dVar4 * 9.800000190734863);
  *(float *)((int)pvVar1 + 0x26c) = (float)(dVar4 * 3.1415927410125732);
  *(float *)((int)pvVar1 + 0x270) = (float)(dVar4 * 6.2831854820251465);
  fVar2 = mobyutil::g_FrameTime;
  *(float *)((int)pvVar1 + 0x264) = (float)(dVar4 * dVar3);
  *(undefined1 *)((int)pvVar1 + 0x250) = 0;
  *(undefined1 *)((int)pvVar1 + 0x251) = 0;
  *(undefined1 *)((int)pvVar1 + 0x252) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0x253) = 8;
  *(undefined1 *)((int)pvVar1 + 0x254) = 1;
  *(undefined1 *)((int)pvVar1 + 0x255) = 1;
  *(undefined1 *)((int)pvVar1 + 0x290) = 4;
  *(undefined1 *)((int)pvVar1 + 0x291) = 2;
  *(undefined1 *)((int)pvVar1 + 0x293) = 6;
  *(float *)((int)pvVar1 + 0x274) = fVar2 * 6.2831855;
  *(undefined1 *)((int)pvVar1 + 0x292) = 8;
  *(undefined1 *)((int)pvVar1 + 0x340) = 5;
  *(undefined1 *)((int)pvVar1 + 0x341) = 3;
  *(undefined1 *)((int)pvVar1 + 0x343) = 7;
  *(undefined1 *)((int)pvVar1 + 0x342) = 9;
  *(undefined4 *)((int)pvVar1 + 0x280) = 0x3f000000;
  walk::walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x1a0));
  return;
}



//==== 002f1f28  ns=mobyupdate_helpers  size=0xd8
// sig: undefined M217_002f1f28(void)
// callers(1): 002f20a0 mobyupdate_unsorted::UpdateMoby_217
// callees(2): 000f1114 mobyfunc::GetBonePosition; 0010e030 mobyutil::MB_genericExplosion

void mobyupdate_helpers::M217_002f1f28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined1 local_40 [24];
  
  uVar1 = 0;
  mobyfunc::GetBonePosition(0,param_1,6,auStack_50);
  mobyutil::MB_genericExplosion
            (uVar1,uVar1,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff8000000000000
             ,0x402e000000000000,param_1,local_40,auStack_50,1,0xffffffffffffffff,10,3,4);
  return;
}



//==== 002f20a0  ns=mobyupdate_unsorted  size=0x23b8
// sig: undefined UpdateMoby_217(MobyInstance * moby)
// callers(0): 
// callees(55): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fc620 mobyutil::MB_randInt; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00104e44 mobyutil::PointInsideComplexPoly; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c1e8 mobyutil::MB_MtxToEuler; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 001158b0 mobyutil::MB_SetupJumpArc; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 0017a230 walk::walk_Update; 0017aa48 walk::Walk_ResetLegState; 002f1b70 mobyupdate_helpers::M217_002f1b70; 002f1be4 mobyupdate_helpers::M217_002f1be4; 002f1f28 mobyupdate_helpers::M217_002f1f28; 003bd440 FUN_003bd440; 004fff60 fastfunc::FastDecTimerS32

/* Moby 217 */

void mobyupdate_unsorted::UpdateMoby_217(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  MobyInstance *pMVar5;
  void *pvVar6;
  f32 fVar7;
  Spline *pSVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *unused;
  undefined2 uVar18;
  undefined1 uVar21;
  short sVar19;
  longlong lVar12;
  undefined8 uVar13;
  short sVar20;
  uint uVar17;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  Vec4 VStack_240;
  undefined1 auStack_230 [16];
  float local_220;
  float local_21c;
  undefined4 local_218;
  Vec4 local_210;
  Vec4 local_200;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  uint local_1d4;
  float afStack_1d0 [4];
  float local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [144];
  uint local_110;
  ushort *local_10c;
  float *local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  uint local_f4;
  MobyInstance *local_c0;
  undefined1 auStack_b0 [4];
  float local_ac;
  float local_a8;
  float local_a4 [7];
  longlong local_88;
  
  lVar11 = (longlong)(int)moby;
  pvVar4 = moby->pVar;
  uVar23 = ZEXT48(pvVar4);
  bVar9 = false;
  if ((*(int *)((int)pvVar4 + 0x38) != 0) || (*(char *)((int)pvVar4 + 0x406) != '\0')) {
    bVar9 = true;
  }
  unused = &DAT_002f2000;
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar4 + 0x120U));
  if ((moby->enabled != '\0') &&
     (dVar24 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar24 < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x15';
  }
  if (bVar9) {
    fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x43c);
  }
  mobyutil::MB_getTarget((double)fVar2,lVar11);
  lVar22 = lVar11 + 0x10;
  dVar29 = (double)(moby->rotation).z;
  dVar24 = (double)FUN_005e8588(lVar22,&local_100);
  dVar25 = (double)FUN_005e8338((double)(local_100 - (moby->pos).x),
                                (double)(local_fc - (moby->pos).y));
  dVar26 = (double)mobyfunc::BlendAnimFrame(moby);
  if (g_gameMode == GAME_MODE_SCENE) {
    iVar14 = *(int *)((int)pvVar4 + 0x424);
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    if (iVar14 != 0) {
      *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) | 0x41;
    }
  }
  else if ((moby->modeBits & DISABLED) != NONE) {
    iVar14 = *(int *)((int)pvVar4 + 0x424);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    if (iVar14 != 0) {
      *(ushort *)(iVar14 + 0x34) = *(ushort *)(iVar14 + 0x34) & 0xffbe;
    }
  }
  FUN_005e7e98(auStack_260,lVar22);
  FUN_005e7e98(auStack_250,lVar22);
  FUN_005e7e98(&VStack_240,&local_100);
  if ((moby->enabled != '\0') && (dVar27 = (double)FUN_005e8548(lVar22,0x951500), dVar27 < 32.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar11);
    moby->shadow = '\x1a';
  }
  fastfunc::FastDecTimerS16(uVar23 + 0x404);
  if ((moby->state != '\n') && (moby->state != '\0')) {
    dVar27 = 0.0;
    local_ac = 0.0;
    iVar14 = mobyutil::MB_damage(lVar11,0x210000,0);
    unused = (undefined4 *)0x0;
    iVar15 = mobyutil::MB_HandleDamage(moby,iVar14,uVar23 + 0x20,0,auStack_b0,&local_ac,0,4);
    if ((iVar14 != 0) && ((local_ac != 0.0 && (moby->state != '\0')))) {
      pMVar5 = *(MobyInstance **)(iVar14 + 0x20);
      if (pMVar5 == (MobyInstance *)0x0) {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else if (pMVar5 == g_currentWeaponMoby) {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                      (double)((moby->pos).y - g_heroPosition.y));
      }
      else {
        dVar28 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar5->pos).x),
                                      (double)((moby->pos).y - (pMVar5->pos).y));
      }
      fVar2 = DAT_0071f418;
      local_a8 = (float)dVar28;
      *(float *)((int)pvVar4 + 0xd4) = DAT_0071f418 * 12.0;
      *(float *)((int)pvVar4 + 0xd0) = fVar2 * 35.0;
      fVar2 = mobyutil::g_FrameTime;
      dVar28 = 7.0;
      *(undefined1 *)((int)pvVar4 + 0xfd) = 0;
      *(undefined4 *)((int)pvVar4 + 0xe4) = 9;
      *(float *)((int)pvVar4 + 0xd8) = fVar2 * 7.0;
      fVar2 = *(float *)((int)pvVar4 + 0x20) - local_ac;
      *(float *)((int)pvVar4 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar27) {
        iVar15 = 1;
      }
      if (iVar15 == 1 || *(short *)((int)pvVar4 + 0x404) == 0) {
        if (iVar15 < 6) {
          if (iVar15 < 2) {
            if ((-1 < iVar15) && (0 < iVar15)) {
              *(undefined4 *)((int)pvVar4 + 0xe0) = 0x400;
              *(undefined4 *)((int)pvVar4 + 0xe8) = 0x3f800000;
              mobyutil::MB_SetupJumpArc
                        (0x4016ccccc0000000,0x4010000000000000,0x400,&DAT_002f2000,uVar23 + 0xc0);
              mobyutil::MB_VecAtan2Angles
                        (*(undefined8 *)(iVar14 + 0x10),*(undefined8 *)(iVar14 + 0x18),&local_a8,
                         uVar23 + 0xd8,uVar23 + 0xdc);
              mobyutil::MB_StartKick((double)local_a8,lVar11,uVar23 + 0xc0);
              unused = (undefined4 *)0xa;
              *(undefined4 *)((int)pvVar4 + 0x110) = 0x41400000;
              *(undefined4 *)((int)pvVar4 + 0x114) = 0x41c80000;
              moby->state = '\n';
              *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
              mobyutil::MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
              mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
            }
          }
          else if (2 < iVar15) {
            if (iVar15 < 4) goto LAB_002f252c;
            sound::PlayMobySound(0xb,0,moby);
            unused = (undefined4 *)idol::GetAnimDuration(4);
            mobyupdate_helpers::M217_002f1b70(lVar11,6,2);
            uVar18 = idol::GetAnimDuration(0x28);
            *(undefined2 *)((int)pvVar4 + 0x402) = uVar18;
            moby->state = '\x01';
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = 3.4 / (float)(dVar27 * dVar28);
            mobyutil::MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
        }
        else if (iVar15 < 9) {
          if (iVar15 == 7) {
            sound::PlayMobySound(0xb,0,moby);
            if (*(int *)((int)pvVar4 + 0x448) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
            }
            uVar16 = idol::GetAnimDuration(0x1e);
            *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
            moby->setByGroup = moby->setByGroup | 5;
            uVar13 = idol::GetAnimDuration(6);
            mobyupdate_helpers::M217_002f1b70(lVar11,5,0,uVar13);
            mobyupdate_helpers::M217_002f1be4(0x4000000000000000,lVar11);
            unused = (undefined4 *)0x5;
            moby->state = '\b';
            mobyutil::MB_StartKick((double)local_a8,lVar11,uVar23 + 0xc0,8,5,1,0);
            *(undefined4 *)((int)pvVar4 + 0x110) = 0x40a00000;
            *(undefined4 *)((int)pvVar4 + 0x114) = 0x41200000;
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = 3.4 / (float)(dVar27 * dVar28);
            mobyutil::MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
          else {
LAB_002f252c:
            sound::PlayMobySound(0xb,0,moby);
            if (*(int *)((int)pvVar4 + 0x448) < 1) {
              *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
            }
            uVar16 = idol::GetAnimDuration(0x1e);
            *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
            if (((*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0) ||
                (unused = (undefined4 *)((int)*(uint *)(iVar14 + 0x2c) >> 0x1f),
                0x3f800000 < (int)(((uint)unused >> 1 ^ *(uint *)(iVar14 + 0x2c)) - (int)unused)))
               && ((moby->updateId != '\x04' || ((dVar26 < 17.0 || (20.0 < dVar26)))))) {
              moby->setByGroup = moby->setByGroup | 5;
              unused = (undefined4 *)idol::GetAnimDuration(6);
              mobyupdate_helpers::M217_002f1b70(lVar11,5,0);
              mobyupdate_helpers::M217_002f1be4(0x4000000000000000,lVar11);
              moby->state = '\b';
            }
            dVar27 = (double)animationSpeed;
            *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
            *(float *)((int)pvVar4 + 0x42c) = (3.4 / (float)(dVar27 * dVar28)) * 0.5;
            mobyutil::MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
            uVar18 = idol::GetAnimDuration(0x46);
            *(undefined2 *)((int)pvVar4 + 0x404) = uVar18;
            uVar21 = idol::GetAnimDuration(0xf0);
            *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
          }
        }
      }
      else {
        if (*(int *)((int)pvVar4 + 0x448) < 1) {
          *(undefined4 *)((int)pvVar4 + 0x408) = 0xbf060a92;
        }
        uVar16 = idol::GetAnimDuration(0x1e);
        *(undefined4 *)((int)pvVar4 + 0x448) = uVar16;
        *(undefined1 *)((int)pvVar4 + 0xb7) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar11,uVar23 + 0xb0);
      }
    }
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar4 + 0x38) != 0) {
    uVar21 = idol::GetAnimDuration(0xf0);
    *(undefined1 *)((int)pvVar4 + 0x406) = uVar21;
  }
  *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  fastfunc::FastDecTimerU8(uVar23 + 0x406);
  if ((moby->state != '\0') && (*(char *)((int)pvVar4 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fastfunc::FastDecTimerS16(uVar23 + 0x402);
  dVar27 = (double)(moby->rotation).z;
  bVar1 = moby->state;
  fVar2 = (moby->pos).x;
  pvVar6 = moby->pVar;
  fVar3 = (moby->pos).y;
  if (4 < bVar1) {
    if (bVar1 == 10) {
      uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0xc0));
      if (((uVar17 & 0x40) != 0) ||
         (fVar7 = (moby->pos).z, uVar17 = (int)fVar7 >> 0x1f,
         (int)((uVar17 >> 1 ^ (uint)fVar7) - uVar17) < 0x3f800000)) {
        mobyupdate_helpers::M217_002f1f28(lVar11);
        if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
          mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
        }
        mobyutil::MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
        lVar12 = lVar11 + 0x40;
        uVar13 = 0;
        mobyutil::MB_SpawnDebrisMoby(0,lVar11,0x798,lVar22,lVar12,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar13,lVar11,0x799,lVar22,lVar12,0,0);
        mobyutil::MB_SpawnDebrisMoby(uVar13,lVar11,0x79a,lVar22,lVar12,0,0);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 == 9) {
      if ((moby->updateId == '\b') && ((moby->field43_0x70 & 2U) != 0)) {
        moby->state = '\x05';
        moby->setByGroup = moby->setByGroup & 0xefU | 8;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,9,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          mobyutil::MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),9,0,iVar14);
        }
      }
      else {
        if ((moby->setByGroup & 0x10U) == 0) {
          dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar27,dVar25,(double)(DAT_0071f418 * 3.1415927),
                                      (double)(DAT_0071f418 * 6.2831855),
                                      (double)(mobyutil::g_FrameTime * 4.1887903),&DAT_002f2000,
                                      &DAT_00720000,uVar23 + 0x410);
        }
        else {
          uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x3f0) - fVar2),
                                (double)(*(float *)((int)pvVar4 + 0x3f4) - fVar3));
          dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                     (dVar27,uVar13,(double)(DAT_0071f418 * 3.1415927),
                                      (double)(DAT_0071f418 * 6.2831855),
                                      (double)(mobyutil::g_FrameTime * 4.1887903),&DAT_002f2000,
                                      &DAT_00720000,uVar23 + 0x410);
        }
        (moby->rotation).z = (float)dVar24;
      }
    }
    else if (bVar1 == 8) {
      if ((moby->animationId != '\x05') || ((moby->updateId == '\x05' && (13.0 < dVar26)))) {
        if ((moby->setByGroup & 4U) == 0) {
          if ((moby->animationId != '\b') || ((28.0 <= dVar26 && (moby->updateId == '\b')))) {
            if (*(int *)((int)pvVar4 + 0x418) < 1) {
              moby->state = '\x01';
              *(undefined2 *)((int)pvVar4 + 0x402) = 0;
            }
            else {
              fVar2 = -(DAT_0071f418 * 200.0 - *(float *)((int)pvVar4 + 0x418));
              *(float *)((int)pvVar4 + 0x418) = fVar2;
              mobyutil::MB_SphericalToVector
                        (fVar2,*(float *)((int)pvVar4 + 0x414),(moby->rotation).y,afStack_1d0);
              FUN_005e7f54(lVar22,lVar22,afStack_1d0);
              dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                         ((double)(moby->rotation).z,dVar25,
                                          (double)(DAT_0071f418 * 3.1415927),
                                          (double)(DAT_0071f418 * 6.2831855),
                                          (double)(mobyutil::g_FrameTime * 4.1887903));
              (moby->rotation).z = (float)dVar24;
            }
          }
          else {
            fVar2 = DAT_0071f408 * 0.11111111;
            if (*(float *)((int)pvVar4 + 0x418) < fVar2) {
              fVar2 = DAT_0071f418 * 20.0 + *(float *)((int)pvVar4 + 0x418);
            }
            *(float *)((int)pvVar4 + 0x418) = fVar2;
            mobyutil::MB_SphericalToVector
                      (fVar2,*(float *)((int)pvVar4 + 0x414),(moby->rotation).y,afStack_1d0);
            FUN_005e7f54(lVar22,lVar22,afStack_1d0);
            dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                       ((double)(moby->rotation).z,dVar25,
                                        (double)(DAT_0071f418 * 3.1415927),
                                        (double)(DAT_0071f418 * 6.2831855),
                                        (double)(mobyutil::g_FrameTime * 4.1887903),&DAT_002f2000,
                                        &DAT_00720000,uVar23 + 0x410);
            (moby->rotation).z = (float)dVar24;
          }
        }
        else {
          moby->setByGroup = moby->setByGroup & 0xfb;
          iVar14 = (int)(animationSpeed * 6.5);
          local_88 = (longlong)iVar14;
          mobyutil::MB_SetAnimation(lVar11,4,4,iVar14);
          if (*(int *)((int)pvVar6 + 0x424) != 0) {
            mobyutil::MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),4,4,iVar14);
          }
          moby->unk58 = 1.5;
          iVar14 = *(int *)((int)moby->pVar + 0x424);
          if (iVar14 != 0) {
            *(undefined4 *)(iVar14 + 0x58) = 0x3fc00000;
          }
          moby->state = '\a';
        }
      }
    }
    else if (bVar1 == 7) {
      if ((((moby->updateId == moby->animationId) &&
           (dVar27 = (double)mobyfunc::BlendAnimFrame(moby), 17.0 <= dVar27)) &&
          (dVar27 = (double)mobyfunc::BlendAnimFrame(moby), dVar27 < 20.0)) &&
         ((ABS((moby->pos).z - local_f8) < 2.0 &&
          (dVar27 = (double)FUN_005e8588(lVar22,&local_100), dVar27 < 4.5)))) {
        dVar27 = (double)mathfunc::cosf((float)dVar25);
        dVar28 = 0.20000000298023224;
        local_1f0 = (float)(dVar27 * 0.20000000298023224);
        dVar27 = (double)FUN_005e8128(dVar25);
        local_1ec = (float)(dVar27 * dVar28);
        local_1e8 = 0;
        local_1e0 = local_100;
        local_1dc = local_fc;
        local_1d4 = local_f4;
        local_1d8 = local_f8 + 0.75;
        if (local_c0 != (MobyInstance *)0x0) {
          mobyutil::CollDamageMobyDirect(1.0,local_c0,moby,1,(int)unused,&local_1e0,&local_1f0);
        }
      }
      if (20.0 < dVar26) {
        uVar17 = (int)moby->unk58 >> 0x1f;
        if (0x3f800000 < (int)((uVar17 >> 1 ^ (uint)moby->unk58) - uVar17)) {
          fVar2 = -(mobyutil::g_FrameTime * 3.0 - moby->unk58);
          if (fVar2 - 1.0 < 0.0) {
            fVar2 = 1.0;
          }
          moby->unk58 = fVar2;
          iVar14 = *(int *)((int)moby->pVar + 0x424);
          if (iVar14 != 0) {
            *(float *)(iVar14 + 0x58) = fVar2;
          }
        }
      }
      fVar2 = animationSpeed;
      if ((moby->updateId == '\x04') && ((moby->field43_0x70 & 2U) != 0)) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        uVar13 = 0;
        auVar30 = loadVectorLeftIndexed(0x74,0x2f2000);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = vectorSplatHalfWord(auVar30,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar30,0x402,uVar23);
        *(undefined2 *)((int)pvVar4 + 0x402) = uVar18;
        pvVar6 = moby->pVar;
        if (bVar9) {
          fVar3 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar3 = *(float *)((int)pvVar4 + 0x43c);
        }
        if (dVar24 < (double)fVar3) {
          uVar13 = 0xd;
        }
        iVar14 = (int)(fVar2 * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,uVar13,0,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          mobyutil::MB_SetAnimation(iVar15,uVar13,0,iVar14);
        }
        moby->state = '\x01';
      }
    }
    else if (bVar1 == 6) {
      if (4.5 <= dVar24) {
        if ((moby->setByGroup & 8U) != 0) {
          moby->setByGroup = moby->setByGroup & 0xf7;
          walk::Walk_ResetLegState(moby,(w_2legData *)((int)pvVar4 + 0x1a0));
          dVar27 = (double)(moby->rotation).z;
          fVar2 = (moby->pos).x;
          fVar3 = (moby->pos).y;
        }
        uVar13 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x3f0) - fVar2),
                              (double)(*(float *)((int)pvVar4 + 0x3f4) - fVar3));
        dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                   (dVar27,uVar13,(double)(DAT_0071f418 * 6.2831855),
                                    (double)(DAT_0071f418 * 125.663704),
                                    (double)(mobyutil::g_FrameTime * 12.566371));
        *(float *)((int)pvVar4 + 0x414) = (float)dVar24;
        walk::walk_Update((double)(mobyutil::g_FrameTime * 4.0),dVar24,(double)(DAT_0071f418 * 20.0)
                          ,lVar11,uVar23 + 0x1a0);
        dVar24 = (double)FUN_005e8588(lVar22,uVar23 + 0x3f0);
        dVar26 = 2.0;
        fVar2 = (moby->rotation).z;
        if (dVar24 < 2.0) {
          moby->state = '\x01';
        }
        if (*(int *)((int)pvVar4 + 0x41c) != -1) {
          dVar24 = (double)mathfunc::cosf(fVar2);
          local_200.x = (float)(dVar24 * dVar26);
          dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_200.y = (float)(dVar24 * dVar26);
          local_200.z = 0.0;
          FUN_005e7f54(&local_200,&local_200,lVar22);
          iVar14 = mobyutil::PointInsideComplexPoly
                             (&local_200,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x410) = 0;
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            mobyutil::MB_SetAnimation(lVar11,8,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              mobyutil::MB_SetAnimation(iVar15,8,0,iVar14);
            }
            moby->state = '\t';
            moby->setByGroup = moby->setByGroup | 0x10;
          }
          iVar14 = mobyutil::PointInsideComplexPoly
                             (&VStack_240,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 != 0) {
            moby->state = '\x01';
          }
        }
      }
      else {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,4,4,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          mobyutil::MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),4,4,iVar14);
        }
        moby->state = '\a';
      }
    }
    else if (bVar1 == 5) {
      if ((moby->setByGroup & 8U) != 0) {
        moby->setByGroup = moby->setByGroup & 0xf7;
        walk::Walk_ResetLegState(moby,(w_2legData *)((int)pvVar4 + 0x1a0));
        dVar27 = (double)(moby->rotation).z;
      }
      dVar26 = (double)mobyutil::MB_DeltAngSpeed
                                 (dVar27,dVar25,(double)(DAT_0071f418 * 6.2831855),
                                  (double)(DAT_0071f418 * 125.663704),
                                  (double)(mobyutil::g_FrameTime * 12.566371));
      *(float *)((int)pvVar4 + 0x414) = (float)dVar26;
      walk::walk_Update((double)(mobyutil::g_FrameTime * 4.0),dVar26,(double)(DAT_0071f418 * 20.0),
                        lVar11,uVar23 + 0x1a0);
      if (4.5 <= dVar24) {
        if (*(int *)((int)pvVar4 + 0x41c) != -1) {
          dVar24 = (double)mathfunc::cosf((moby->rotation).z);
          dVar26 = 2.0;
          local_210.x = (float)(dVar24 * 2.0);
          dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_210.y = (float)(dVar24 * dVar26);
          local_210.z = 0.0;
          FUN_005e7f54(&local_210,&local_210,lVar22);
          iVar14 = mobyutil::PointInsideComplexPoly
                             (&local_210,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x410) = 0;
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            mobyutil::MB_SetAnimation(lVar11,8,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              mobyutil::MB_SetAnimation(iVar15,8,0,iVar14);
            }
            moby->state = '\t';
          }
          iVar14 = mobyutil::PointInsideComplexPoly
                             (&VStack_240,(Vec4 *)Splines[*(int *)((int)pvVar4 + 0x41c)]->points,
                              Splines[*(int *)((int)pvVar4 + 0x41c)]->cnt);
          if (iVar14 == 0) {
            moby->state = '\x06';
          }
        }
      }
      else {
        pvVar6 = moby->pVar;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,4,4,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          mobyutil::MB_SetAnimation(iVar15,4,4,iVar14);
        }
        moby->state = '\a';
      }
    }
    goto LAB_002f4034;
  }
  if (1 < bVar1) {
    if (bVar1 < 3) {
      if ((moby->updateId == '\x02') && ((moby->field43_0x70 & 2U) != 0)) {
        uVar13 = 0;
        if (bVar9) {
          fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar4 + 0x43c);
        }
        if (dVar24 < (double)fVar2) {
          uVar13 = 0xd;
        }
        local_88 = (longlong)(int)(animationSpeed * 12.5);
        mobyupdate_helpers::M217_002f1b70(lVar11,uVar13,0,(int)(animationSpeed * 12.5));
        moby->state = '\x01';
      }
    }
    else if (bVar1 < 4) {
      if ((moby->updateId != '\0') && ((moby->field43_0x70 & 2U) != 0)) {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,0xb,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          mobyutil::MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),0xb,0,iVar14);
        }
      }
      if (*(short *)((int)pvVar4 + 0x402) == 0) {
        if (4.5 <= dVar24) {
          if (bVar9) {
            fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x43c);
          }
          if ((dVar24 < (double)fVar2) && ((moby->setByGroup & 1U) == 0)) {
            pvVar6 = moby->pVar;
            iVar14 = (int)(animationSpeed * 12.5);
            local_88 = (longlong)iVar14;
            mobyutil::MB_SetAnimation(lVar11,2,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              mobyutil::MB_SetAnimation(iVar15,2,0,iVar14);
            }
            moby->state = '\x02';
            moby->setByGroup = moby->setByGroup | 1;
          }
        }
        else {
          pvVar6 = moby->pVar;
          iVar14 = (int)(animationSpeed * 12.5);
          local_88 = (longlong)iVar14;
          mobyutil::MB_SetAnimation(lVar11,4,4,iVar14);
          iVar15 = *(int *)((int)pvVar6 + 0x424);
          if (iVar15 != 0) {
            mobyutil::MB_SetAnimation(iVar15,4,4,iVar14);
          }
          moby->state = '\a';
        }
      }
    }
    else {
      pSVar8 = Splines[*(int *)((int)pvVar4 + 0x434)];
      if (moby->animationId != '\x03') {
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,3,0,iVar14);
        if (*(int *)((int)pvVar6 + 0x424) != 0) {
          mobyutil::MB_SetAnimation(*(int *)((int)pvVar6 + 0x424),3,0,iVar14);
        }
      }
      if (dVar24 < 4.5) {
        pvVar6 = moby->pVar;
        iVar14 = (int)(animationSpeed * 12.5);
        local_88 = (longlong)iVar14;
        mobyutil::MB_SetAnimation(lVar11,4,4,iVar14);
        iVar15 = *(int *)((int)pvVar6 + 0x424);
        if (iVar15 != 0) {
          mobyutil::MB_SetAnimation(iVar15,4,4,iVar14);
        }
        moby->state = '\a';
      }
      dVar26 = (double)FUN_005e8588(pSVar8->points + *(short *)((int)pvVar4 + 0x438),lVar22);
      if (dVar26 < 1.0) {
        sVar20 = *(short *)((int)pvVar4 + 0x438) + 1;
        pvVar6 = moby->pVar;
        *(short *)((int)pvVar4 + 0x438) = sVar20;
        if ((int)sVar20 == pSVar8->cnt) {
          if (bVar9) {
            fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
          }
          else {
            fVar2 = *(float *)((int)pvVar4 + 0x43c);
          }
          if (dVar24 <= (double)fVar2) {
            iVar14 = (int)(animationSpeed * 24.5);
            local_88 = (longlong)iVar14;
            mobyutil::MB_SetAnimation(lVar11,0xd,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              mobyutil::MB_SetAnimation(iVar15,0xd,0,iVar14);
            }
          }
          else {
            iVar14 = (int)(animationSpeed * 24.5);
            local_88 = (longlong)iVar14;
            mobyutil::MB_SetAnimation(lVar11,0,0,iVar14);
            iVar15 = *(int *)((int)pvVar6 + 0x424);
            if (iVar15 != 0) {
              mobyutil::MB_SetAnimation(iVar15,0,0,iVar14);
            }
          }
          moby->state = '\x01';
          goto LAB_002f4034;
        }
      }
      dVar24 = (double)(moby->rotation).z;
      iVar14 = (int)((longlong)*(short *)((int)pvVar4 + 0x438) << 4);
      uVar13 = FUN_005e8338((double)(*(float *)((int)&pSVar8->points[0].x + iVar14) - (moby->pos).x)
                            ,(double)(*(float *)((int)&pSVar8->points[0].y + iVar14) - (moby->pos).y
                                     ));
      dVar24 = (double)mobyutil::MB_DeltAngSpeed
                                 (dVar24,uVar13,(double)(DAT_0071f418 * 12.566371),
                                  (double)(DAT_0071f418 * 6.2831855),
                                  (double)(mobyutil::g_FrameTime * 3.1415927));
      (moby->rotation).z = (float)dVar24;
      dVar24 = (double)mathfunc::cosf((float)dVar24);
      dVar26 = 6.0;
      local_220 = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar24);
      dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_218 = 0;
      local_21c = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar26) * dVar24);
      FUN_005e7f54(&local_220,&local_220,lVar22);
      mobyutil::CollMovingSphere
                (0x3fd0000000000000,0x3ff8000000000000,0x3fe8000000000000,0x3febecde60000000,lVar11,
                 lVar22,&local_220);
    }
    goto LAB_002f4034;
  }
  if (bVar1 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x20) = 0x40400000;
    *(undefined2 *)((int)pvVar4 + 0x24) = 3;
    *(undefined1 *)((int)pvVar4 + 0x28) = 2;
    *(undefined4 *)((int)pvVar4 + 0x30) = 0x3fc00000;
    *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
    *(undefined1 *)((int)pvVar4 + 0x29) = 0;
    moby->setByGroup = '\0';
    *(undefined4 *)((int)pvVar4 + 0x420) = 0;
    *(undefined4 *)((int)pvVar4 + 0x424) = 0;
    *(undefined1 *)((int)pvVar4 + 0x407) = 0;
    FUN_005e7e98(uVar23 + 0x3f0,lVar22);
    if (*(char *)((int)pvVar4 + 0x121) == '\0') {
      mobyfunc::AttachManipulator(moby,0,(Manipulator *)((int)pvVar4 + 0x120U));
    }
    mobyfunc::AttachManipulator(moby,0xc,(int)pvVar4 + 0x160);
    *(f32 *)((int)pvVar4 + 0x428) = (moby->rotation).z;
    *(undefined1 *)((int)pvVar4 + 0x58) = 10;
    *(undefined1 *)((int)pvVar4 + 0x5a) = 0xc;
    if (*(char *)((int)pvVar4 + 0x400) == '\0') {
      moby->state = '\x01';
    }
    else {
      moby->state = '\x03';
      uVar13 = idol::GetAnimDuration(0xc);
      mobyupdate_helpers::M217_002f1b70(lVar11,10,0,uVar13);
    }
    goto LAB_002f4034;
  }
  if ((moby->animationId == '\x06') &&
     (sVar20 = *(short *)((int)pvVar4 + 0x402), sVar19 = idol::GetAnimDuration(0x25),
     sVar20 == sVar19)) {
    sound::PlayMobySound(2,0,moby);
  }
  bVar10 = (moby->field43_0x70 & 2U) == 0;
  if (bVar10) {
LAB_002f2bbc:
    if ((moby->animationId != '\r') && ((moby->animationId != '\x06' || (!bVar10)))) {
      if (bVar9) {
        fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
      }
      else {
        fVar2 = *(float *)((int)pvVar4 + 0x43c);
      }
      if (dVar24 < (double)fVar2) {
        uVar13 = idol::GetAnimDuration(0x18);
        mobyupdate_helpers::M217_002f1b70(lVar11,0xd,0,uVar13);
      }
    }
  }
  else {
    if (bVar9) {
      fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
    }
    else {
      fVar2 = *(float *)((int)pvVar4 + 0x43c);
    }
    if (dVar24 <= (double)fVar2) goto LAB_002f2bbc;
    local_a4[0] = 0.0;
    local_a4[1] = 0.0;
    local_a4[2] = 0.0;
    local_a4[3] = 0.0;
    local_a4[4] = 0.0;
    local_a4[5] = 1.4013e-45;
    lVar12 = mobyutil::MB_randInt(6);
    uVar16 = *(undefined4 *)((int)local_a4 + (int)(lVar12 << 2));
    uVar13 = idol::GetAnimDuration(0x18);
    mobyupdate_helpers::M217_002f1b70(lVar11,uVar16,0,uVar13);
  }
  if ((((*(int *)((int)pvVar4 + 0x430) == -1) || (*(int *)((int)pvVar4 + 0x434) == -1)) ||
      (*(short *)((int)pvVar4 + 0x43a) != 0)) ||
     ((!bVar9 &&
      (iVar14 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x430)),
      iVar14 == 0)))) {
    if ((moby->updateId == '\r') && (iVar14 = fastfunc::FastDecTimerU8(uVar23 + 0x407), iVar14 != 0)
       ) {
      sound::PlayMobySound(10,0,moby);
      uVar21 = idol::GetAnimDuration(0xb4);
      *(undefined1 *)((int)pvVar4 + 0x407) = uVar21;
    }
    if (*(short *)((int)pvVar4 + 0x402) == 0) {
      if (4.5 <= dVar24) {
        if (bVar9) {
          fVar2 = *(float *)((int)pvVar4 + 0x43c) * 2.0;
        }
        else {
          fVar2 = *(float *)((int)pvVar4 + 0x43c);
        }
        if ((dVar24 < (double)fVar2) && ((moby->setByGroup & 1U) == 0)) {
          uVar13 = idol::GetAnimDuration(0xc);
          mobyupdate_helpers::M217_002f1b70(lVar11,2,0,uVar13);
          moby->state = '\x02';
          moby->setByGroup = moby->setByGroup | 1;
        }
      }
      else {
        uVar13 = idol::GetAnimDuration(0xc);
        mobyupdate_helpers::M217_002f1b70(lVar11,4,4,uVar13);
        moby->state = '\a';
      }
    }
  }
  else {
    moby->state = '\x04';
    moby->setByGroup = moby->setByGroup | 1;
    *(undefined2 *)((int)pvVar4 + 0x43a) = 1;
  }
LAB_002f4034:
  mobyutil::MB_ColorDyingMoby(lVar11,uVar23 + 0xb0);
  uVar13 = 0;
  if (0 < *(int *)((int)pvVar4 + 0x42c)) {
    dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                  (double)((moby->pos).y - g_heroPosition.y));
    dVar24 = (double)mathfunc::cosf((float)dVar24);
    local_1c0 = (float)(dVar24 * (double)*(float *)((int)pvVar4 + 0x42c));
    FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                 (double)((moby->pos).y - g_heroPosition.y));
    dVar24 = (double)FUN_005e8128();
    local_1b8 = 0;
    local_1bc = (float)(dVar24 * (double)*(float *)((int)pvVar4 + 0x42c));
    FUN_005e7f54(&local_1c0,&local_1c0,lVar22);
    if (*(int *)((int)pvVar4 + 0x420) == 0) {
      *(float *)((int)pvVar4 + 0x42c) =
           *(float *)((int)pvVar4 + 0x42c) + -3.4 / (animationSpeed * 7.0 * animationSpeed * 7.0);
    }
    mobyutil::CollMovingSphere
              (0x3fd0000000000000,0x3ff8000000000000,0x3fe8000000000000,0x3febecde60000000,lVar11,
               lVar22,&local_1c0);
  }
  *(float *)((int)pvVar4 + 0x408) = *(float *)((int)pvVar4 + 0x408) * 0.96;
  fastfunc::FastDecTimerS32(uVar23 + 0x448);
  fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar4 + 0x408),auStack_230,1);
  lVar12 = uVar23 + 0x130;
  fastfunc::FastQuaternionToEuler(uVar13,lVar12,2);
  fastfunc::FastQuaternionMult(lVar12,lVar12,auStack_230);
  if (moby->state != '\b') {
    *(u8 *)((int)pvVar4 + 0x401) = moby->state;
  }
  fVar2 = DAT_0071f418 * 29.8 + *(float *)((int)pvVar4 + 0x420);
  *(float *)((int)pvVar4 + 0x420) = fVar2;
  dVar26 = 2.0;
  (moby->pos).z = (moby->pos).z - (fVar2 - 2.0);
  dVar24 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar22,0);
  fVar2 = (float)((double)(moby->pos).z - dVar26);
  dVar26 = (double)fVar2;
  (moby->pos).z = fVar2;
  if (dVar26 < dVar24) {
    (moby->pos).z = (float)dVar24;
    *(undefined4 *)((int)pvVar4 + 0x420) = 0;
    dVar26 = (double)(moby->pos).z;
  }
  if ((double)(*(float *)((int)pvVar4 + 0x3f8) - 8.0) <= dVar26) {
    if (moby->state != '\0') {
      dVar26 = (double)*(float *)((int)pvVar4 + 0x428);
      dVar24 = (double)fastfunc::FastDiffRots((double)(moby->rotation).z,dVar29);
      dVar24 = (double)fastfunc::FastWrapRot((float)dVar26,(float)dVar24);
      *(float *)((int)pvVar4 + 0x428) = (float)dVar24;
      mobyfunc::GetBoneTransformations(lVar11,0xc,auStack_1a0 + 0x20);
      mobyutil::MB_MtxToEuler((int)(auStack_1a0 + 0x20),(MobyInstance *)auStack_1a0);
      fastfunc::FastDiffRots(dVar25,(double)*(float *)((int)pvVar4 + 0x428));
      fastfunc::FastQuaternionToEuler(auStack_1b0,2);
      *(float *)((int)pvVar4 + 0x428) = (float)dVar25;
      fastfunc::FastQuaternionMult(uVar23 + 0x170,uVar23 + 0x170,auStack_1b0);
    }
    if (*(int *)((int)pvVar4 + 0x424) == 0) {
      mobyfunc::GetBonePosition(lVar11,0xb,auStack_1a0 + 0x10);
      uVar16 = FUN_003bd440(lVar11);
      *(undefined4 *)((int)pvVar4 + 0x424) = uVar16;
    }
    else {
      mobyfunc::GetBoneTransformations(lVar11,0xd,(Vec4 *)(auStack_1a0 + 0x60));
      iVar14 = *(int *)((int)pvVar4 + 0x424);
      *(uint *)(iVar14 + 0x10) = local_110;
      *(ushort **)(iVar14 + 0x14) = local_10c;
      *(float **)(iVar14 + 0x18) = local_108;
      *(int *)(iVar14 + 0x1c) = local_104;
      mobyfunc::UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar4 + 0x424));
      mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar4 + 0x424));
      fastfunc::FastApplyTransform
                ((Vec4 *)(*(int *)((int)pvVar4 + 0x424) + 0xc0),(Vec4 *)(auStack_1a0 + 0x60));
      mobyutil::MB_NormalizeMtx3Columns((ulonglong)*(uint *)((int)pvVar4 + 0x424) + 0xc0);
      mobyfunc::PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar4 + 0x424));
      *(ushort *)(*(int *)((int)pvVar4 + 0x424) + 0x34) =
           *(ushort *)(*(int *)((int)pvVar4 + 0x424) + 0x34) | 6;
    }
  }
  else {
    mobyupdate_helpers::M217_002f1f28(lVar11);
    if (*(MobyInstance **)((int)pvVar4 + 0x424) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar4 + 0x424));
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002f4458  ns=mobyupdate_helpers  size=0x14
// sig: undefined M218_002f4458(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M218_002f4458(void)

{
  DAT_007fee48 = 0x10000;
  return;
}



//==== 002f44c0  ns=mobyupdate_unsorted  size=0x15bc
// sig: undefined UpdateMoby_218(MobyInstance * moby)
// callers(0): 
// callees(10): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00136724 path::InitFollower

/* Moby 218 */

void mobyupdate_unsorted::UpdateMoby_218(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  int *piVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  MobyInstance *victim;
  ulonglong uVar13;
  int iVar16;
  longlong lVar14;
  longlong lVar15;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  short sVar23;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  byte bVar26;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  double dVar38;
  ulonglong in_f29;
  double dVar39;
  ulonglong in_f30;
  double dVar40;
  ulonglong in_f31;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x260;
  puVar12 = (ulonglong *)lVar15;
  *puVar12 = uVar13;
  puVar12[0x4e] = in_LR;
  puVar12[0x44] = in_f24;
  puVar12[0x45] = in_f25;
  puVar12[0x46] = in_f26;
  puVar12[0x47] = in_f27;
  puVar12[0x48] = in_f28;
  puVar12[0x49] = in_f29;
  puVar12[0x4a] = in_f30;
  puVar12[0x4b] = in_f31;
  puVar12[0x43] = unaff_r31;
  puVar12[0x42] = unaff_r30;
  puVar12[0x41] = unaff_r29;
  puVar12[0x40] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  iVar16 = mobyutil::MB_damage(moby,0x10000,0);
  if (((iVar16 != 0) && (uVar1 = moby->state, uVar1 != '\x04' && uVar1 != '\x03')) &&
     ((g_heroState != WRENCH_ATTACK || (uVar1 != '\x02')))) {
    *(undefined4 *)((int)pvVar9 + 0x74) = 1;
    *(undefined4 *)((int)pvVar9 + 0x60) = 0x3c03126f;
    *(undefined4 *)((int)pvVar9 + 100) = 0x3a03126f;
    dVar28 = 0.0;
    dVar29 = dVar28;
    if (*(int *)((int)pvVar9 + 0x148) != 2) {
      dVar29 = (double)(mobyutil::g_FrameTime * 10.0);
    }
    *(float *)((int)pvVar9 + 0x68) = (float)dVar29;
    fVar3 = mobyutil::g_FrameTime * 6.0;
    sVar23 = *(short *)((int)pvVar9 + 0x142) + -1;
    *(undefined1 *)((int)pvVar9 + 0x8d) = 0;
    *(short *)((int)pvVar9 + 0x142) = sVar23;
    *(float *)((int)pvVar9 + 0x6c) = fVar3;
    if (sVar23 == 0) {
      moby->state = '\x04';
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)(puVar12 + 0x21) = fVar3;
      *(float *)((int)puVar12 + 0x10c) = fVar2;
      *(float *)(puVar12 + 0x22) = fVar4 - fVar7;
      uVar24 = (ulonglong)(*(uint *)(puVar12 + 0x21) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x10c) >> 0x1d) & 4;
      uVar20 = uVar24 << 2 | 0x735900;
      fVar3 = ABS(*(float *)(puVar12 + 0x21));
      if (*(float *)(puVar12 + 0x22) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar2 = *(float *)((int)uVar20 + 4);
      fVar5 = ABS(*(float *)((int)puVar12 + 0x10c));
      if (*(float *)(puVar12 + 0x22) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x7c;
        lVar19 = uVar13 - 0x8c;
        lVar27 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x3c) = fVar3;
        *(float *)(puVar12 + 0x3b) = fVar3;
        *(float *)((int)puVar12 + 0x1dc) = fVar3;
        *(float *)((int)puVar12 + 0x1d4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x3b) = *(float *)(puVar12 + 0x3b) * fVar4;
        *(float *)((int)puVar12 + 0x1dc) = *(float *)((int)puVar12 + 0x1dc) * fVar3;
        *(float *)(puVar12 + 0x3c) = *(float *)(puVar12 + 0x3c) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x1d4) = *(float *)((int)lVar14 + 0x1c4) * fVar3 * fVar3;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x8c;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          pfVar22 = (float *)uVar20;
          fVar3 = pfVar22[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar14 + 0x1d4) = *(float *)((int)lVar14 + 0x1d4) * *pfVar22;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::MB_StartKick(dVar28,moby,uVar25 + 0x50,uVar20,3,3,0);
    }
    else {
      moby->state = '\x03';
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar2 = (moby->pos).y - g_heroPosition.y;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar12 + 0xfc) = fVar3;
      *(float *)(puVar12 + 0x20) = fVar2;
      *(float *)((int)puVar12 + 0x104) = fVar4 - fVar7;
      uVar24 = (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1d) & 4;
      uVar20 = uVar24 << 2 | 0x735900;
      fVar3 = ABS(*(float *)((int)puVar12 + 0xfc));
      if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar2 = *(float *)((int)uVar20 + 4);
      fVar5 = ABS(*(float *)(puVar12 + 0x20));
      if (*(float *)((int)puVar12 + 0x104) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar3) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x9c;
        lVar19 = uVar13 - 0xac;
        lVar27 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x38) = fVar3;
        *(float *)(puVar12 + 0x37) = fVar3;
        *(float *)((int)puVar12 + 0x1bc) = fVar3;
        *(float *)((int)puVar12 + 0x1b4) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x37) = *(float *)(puVar12 + 0x37) * fVar4;
        *(float *)((int)puVar12 + 0x1bc) = *(float *)((int)puVar12 + 0x1bc) * fVar3;
        *(float *)(puVar12 + 0x38) = *(float *)(puVar12 + 0x38) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x1b4) = *(float *)((int)lVar14 + 0x1a4) * fVar3 * fVar3;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0xac;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          pfVar22 = (float *)uVar20;
          fVar3 = pfVar22[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar14 + 0x1b4) = *(float *)((int)lVar14 + 0x1b4) * *pfVar22;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1b4)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar2);
      }
      mobyutil::MB_StartKick(dVar28,moby,uVar25 + 0x50,uVar20,2,3,0);
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x04') {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x50));
    if ((uVar18 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x50));
    if ((uVar18 & 0x40) != 0) {
      if (moby->animationId != '\0') {
        mobyutil::MB_SetAnimation(moby,0,0,3);
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x10,0x2f4470);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x02') {
    iVar16 = *(int *)((int)pvVar9 + 0x148);
    bVar26 = (iVar16 == 1) << 1;
    if (iVar16 < 1) {
      if (-1 < iVar16) {
        mobyutil::MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,uVar25 + 0x130,uVar13 - 0x1f0);
      }
    }
    else if (iVar16 < 2) {
      mobyutil::MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,&g_heroPosition,uVar13 - 0x1f0);
    }
    else if (iVar16 < 3) {
      iVar16 = *(int *)((int)pvVar9 + 0x110) + *(int *)((int)pvVar9 + 0x100) * 0x10;
      *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)(iVar16 + 0x10);
      *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(iVar16 + 0x14);
      *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)(iVar16 + 0x18);
      *(undefined4 *)((int)puVar12 + 0x8c) = *(undefined4 *)(iVar16 + 0x1c);
      iVar16 = mobyutil::MB_UpdateNavMoveTurning(moby,uVar25 + 0xb0,uVar13 - 0x1e0,uVar13 - 0x1d0);
      if (iVar16 != 0) {
        piVar10 = *(int **)((int)pvVar9 + 0x110);
        uVar18 = *(uint *)((int)pvVar9 + 0x100);
        lVar14 = (ulonglong)uVar18 + 1;
        iVar17 = uVar18 - 1;
        uVar20 = lVar14 + ((LZCOUNT(*piVar10 - (int)lVar14) << 0x3a) >> 0x3f &
                          (ulonglong)uVar18 - lVar14);
        iVar16 = (int)((uVar20 & 0xffffffff) << 4);
        iVar17 = iVar17 + (iVar17 >> 0x1f & uVar18 - iVar17);
        fVar3 = g_heroPosition.y - *(float *)((int)piVar10 + iVar16 + 0x14);
        fVar2 = g_heroPosition.x - *(float *)((int)piVar10 + iVar16 + 0x10);
        if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) <
            SQRT((g_heroPosition.x - (float)piVar10[iVar17 * 4 + 4]) *
                 (g_heroPosition.x - (float)piVar10[iVar17 * 4 + 4]) +
                 (g_heroPosition.y - (float)piVar10[iVar17 * 4 + 5]) *
                 (g_heroPosition.y - (float)piVar10[iVar17 * 4 + 5]))) {
          iVar17 = (int)uVar20;
        }
        *(int *)((int)pvVar9 + 0x100) = iVar17;
      }
    }
    fVar3 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    fVar7 = SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
                 (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y));
    if ((*(float *)((int)pvVar9 + 0x14c) <= fVar7) || (g_heroState == TAKING_DAMAGE)) {
      if (((*(float *)((int)pvVar9 + 0x15c) < fVar7) && ((moby->field43_0x70 & 2U) != 0)) ||
         (sVar23 = *(short *)((int)pvVar9 + 0x140) + -1, *(short *)((int)pvVar9 + 0x140) = sVar23,
         sVar23 == 0)) {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar41 = ZEXT416(0xffffffff);
        auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x154,uVar25);
        auVar43 = loadVectorRightIndexed(0x164,uVar25);
        auVar41 = loadVectorLeftIndexed(0x24,0x2f4470);
        auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = vectorMultiplyAddFloatingPoint
                            (auVar42 | auVar43,
                             auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar44);
        auVar42 = vectorShiftLeftIntegerWord(auVar47,auVar47);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar42);
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
        *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      }
    }
    else {
      fVar7 = g_heroPosition.y - fVar3;
      fVar5 = ABS(g_heroPosition.x - fVar2);
      fVar4 = ABS(fVar7);
      *(float *)((int)puVar12 + 0xe4) = g_heroPosition.x - fVar2;
      *(float *)(puVar12 + 0x1d) = fVar7;
      *(float *)((int)puVar12 + 0xec) = fVar5 - fVar4;
      dVar29 = 0.0;
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1d) & 4;
      fVar7 = ABS(*(float *)((int)puVar12 + 0xe4));
      if (*(float *)((int)puVar12 + 0xec) - 0.0 < 0.0) {
        fVar7 = fVar4;
      }
      fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar12 + 0x1d));
      if (*(float *)((int)puVar12 + 0xec) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar28 = dVar29;
      if (0.0 < fVar7) {
        lVar14 = uVar13 - 0x250;
        lVar19 = uVar13 - 0xec;
        lVar21 = uVar13 - 0xdc;
        lVar27 = 2;
        fVar7 = (fVar6 - fVar7) / (fVar6 + fVar7);
        fVar5 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x30) = fVar7;
        *(float *)(puVar12 + 0x2f) = fVar7;
        *(float *)((int)puVar12 + 0x17c) = fVar7;
        *(float *)((int)puVar12 + 0x174) = fVar7;
        fVar7 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x2f) = *(float *)(puVar12 + 0x2f) * fVar5;
        *(float *)((int)puVar12 + 0x17c) = *(float *)((int)puVar12 + 0x17c) * fVar7;
        *(float *)(puVar12 + 0x30) = *(float *)(puVar12 + 0x30) * fVar7 * fVar5;
        do {
          *(float *)((int)lVar14 + 0x174) = *(float *)((int)lVar14 + 0x164) * fVar7 * fVar7;
          iVar16 = (int)lVar19;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar7 * fVar7;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0xec;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar7 = *pfVar22;
          fVar5 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x174) = *(float *)((int)lVar14 + 0x174) * fVar7;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x174)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar4);
      }
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      fVar7 = (float)(dVar28 + 1.570796251296997);
      dVar38 = -3.141592502593994;
      fVar3 = g_heroPosition.y - fVar3;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      fVar5 = ABS(g_heroPosition.x - fVar2);
      fVar4 = ABS(fVar3);
      *(float *)(puVar12 + 0x1b) = g_heroPosition.x - fVar2;
      fVar2 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar2 = fVar7;
      }
      *(float *)(puVar12 + 0x1c) = fVar5 - fVar4;
      *(float *)((int)puVar12 + 0xdc) = fVar3;
      fVar3 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar8 = fVar3 * fVar3;
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1d) & 4;
      fVar2 = fVar8 * fVar8 * fVar3;
      fVar7 = fVar8 * fVar2;
      fVar6 = ABS(*(float *)(puVar12 + 0x1b));
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar4 = ABS(*(float *)((int)puVar12 + 0xdc));
      if (*(float *)(puVar12 + 0x1c) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      *(float *)(puVar12 + 0x14) =
           (fVar8 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar2 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 0.5
      ;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar31 = dVar29;
      if (0.0 < fVar6) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0xfc;
        lVar19 = uVar13 - 0x10c;
        lVar27 = 2;
        fVar7 = (fVar4 - fVar6) / (fVar4 + fVar6);
        fVar4 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x2c) = fVar7;
        *(float *)(puVar12 + 0x2b) = fVar7;
        *(float *)((int)puVar12 + 0x15c) = fVar7;
        *(float *)((int)puVar12 + 0x154) = fVar7;
        fVar7 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x2b) = *(float *)(puVar12 + 0x2b) * fVar4;
        *(float *)((int)puVar12 + 0x15c) = *(float *)((int)puVar12 + 0x15c) * fVar7;
        *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar7 * fVar4;
        do {
          *(float *)((int)lVar14 + 0x154) = *(float *)((int)lVar14 + 0x144) * fVar7 * fVar7;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar7 * fVar7;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x10c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar7 = *pfVar22;
          fVar4 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x154) = *(float *)((int)lVar14 + 0x154) * fVar7;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        do {
          iVar16 = (int)lVar14;
          iVar17 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0x154)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(undefined4 *)(puVar12 + 0x15) = 0;
      victim = g_heroMobyPtr;
      dVar32 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar32 = dVar31;
      }
      dVar30 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar32 < 0.0) {
        dVar30 = dVar32;
      }
      dVar31 = (double)(float)(dVar30 * dVar30);
      dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
      dVar32 = (double)(float)(dVar31 * dVar33);
      *(float *)((int)puVar12 + 0xa4) =
           ((float)(dVar31 * dVar32) * 2.601887e-06 +
           (float)(dVar32 * -0.0001980741071747616 +
                  (double)(float)(dVar33 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar31 * dVar30) *
                                                 -0.16666656732559204 + dVar30)))) * 0.5;
      *(f32 *)(puVar12 + 0x16) = (victim->pos).x;
      *(f32 *)((int)puVar12 + 0xb4) = (victim->pos).y;
      fVar3 = (victim->pos).z;
      *(float *)(puVar12 + 0x17) = fVar3;
      *(f32 *)((int)puVar12 + 0xbc) = (victim->pos).w;
      *(float *)(puVar12 + 0x17) = fVar3 + 0.75;
      mobyutil::CollDamageMobyDirect
                (1.0,victim,moby,1,0x2f4470,(float *)(puVar12 + 0x16),(float *)(puVar12 + 0x14));
      fVar3 = (moby->pos).x;
      fVar7 = g_heroPosition.x - fVar3;
      fVar4 = g_heroPosition.y - (moby->pos).y;
      dVar32 = ABS((double)fVar7);
      dVar30 = ABS((double)fVar4);
      *(float *)((int)puVar12 + 0xcc) = fVar7;
      *(float *)(puVar12 + 0x1a) = fVar4;
      *(float *)((int)puVar12 + 0xd4) = (float)(dVar32 - dVar30);
      auVar41 = loadVectorLeftIndexed(0x140,uVar25);
      auVar42 = loadVectorRightIndexed(0x150,uVar25);
      auVar44 = loadVectorLeftIndexed(0x150,uVar25);
      auVar43 = loadVectorRightIndexed(0x160,uVar25);
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xcc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1d) & 4;
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar31 = ABS((double)*(float *)((int)puVar12 + 0xcc));
      if ((double)*(float *)((int)puVar12 + 0xd4) - dVar29 < 0.0) {
        dVar31 = dVar30;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar33 = ABS((double)*(float *)(puVar12 + 0x1a));
      if ((double)*(float *)((int)puVar12 + 0xd4) - dVar29 < 0.0) {
        dVar33 = dVar32;
      }
      dVar34 = dVar29;
      if (dVar29 < dVar31) {
        lVar14 = uVar13 - 0x250;
        lVar19 = uVar13 - 300;
        lVar21 = uVar13 - 0x11c;
        lVar27 = 2;
        fVar8 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
        fVar6 = fVar8 * fVar8;
        *(float *)(puVar12 + 0x28) = fVar8;
        *(float *)(puVar12 + 0x27) = fVar8;
        *(float *)((int)puVar12 + 0x13c) = fVar8;
        *(float *)((int)puVar12 + 0x134) = fVar8;
        fVar8 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar6;
        *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar8;
        *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar8 * fVar6;
        do {
          *(float *)((int)lVar14 + 0x134) = *(float *)((int)lVar14 + 0x124) * fVar8 * fVar8;
          iVar16 = (int)lVar19;
          lVar14 = lVar14 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar8 * fVar8;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 300;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar8 = *pfVar22;
          fVar6 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x134) = *(float *)((int)lVar14 + 0x134) * fVar8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar19 = 2;
        lVar14 = lVar15;
        dVar31 = dVar29;
        do {
          iVar16 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar17 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar16 + 0x134)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar34 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar5);
      }
      dVar31 = (double)(float)(dVar34 + dVar40);
      *(float *)(puVar12 + 0x18) = fVar7;
      *(float *)(puVar12 + 0x19) = (float)(dVar32 - dVar30);
      *(float *)((int)puVar12 + 0xc4) = fVar4;
      dVar40 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar40 = dVar31;
      }
      uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)(puVar12 + 0x18));
      if ((double)*(float *)(puVar12 + 0x19) - dVar29 < 0.0) {
        dVar33 = dVar30;
      }
      dVar30 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar40 < 0.0) {
        dVar30 = dVar40;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar31 = (double)(float)(dVar30 * dVar30);
      dVar40 = ABS((double)*(float *)((int)puVar12 + 0xc4));
      if ((double)*(float *)(puVar12 + 0x19) - dVar29 < 0.0) {
        dVar40 = dVar32;
      }
      dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar30));
      fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      dVar32 = (double)(float)(dVar31 * dVar34);
      if (dVar29 < dVar33) {
        lVar14 = uVar13 - 0x250;
        lVar21 = uVar13 - 0x13c;
        lVar19 = uVar13 - 0x14c;
        lVar27 = 2;
        fVar4 = (float)(dVar40 - dVar33) / (float)(dVar40 + dVar33);
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
          *(float *)((int)lVar14 + 0x114) = *(float *)((int)lVar14 + 0x104) * fVar4 * fVar4;
          iVar16 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar13 - 0x14c;
        pfVar22 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar22;
          fVar5 = pfVar22[1];
          pfVar22 = pfVar22 + 2;
          *(float *)((int)lVar14 + 0x114) = *(float *)((int)lVar14 + 0x114) * fVar4;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar14 = 2;
        do {
          iVar16 = (int)lVar15;
          iVar17 = (int)lVar21;
          lVar15 = lVar15 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x114)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar7);
      }
      auVar47 = ZEXT416(0xffffffff);
      auVar45 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
      auVar47 = ZEXT416(0xfffffff0);
      auVar46 = ZEXT416(0xffffffff);
      auVar48 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar42 = vectorShiftRightAlgebraicWord
                          (auVar41 | auVar42,
                           auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60);
      auVar47 = vectorShiftLeftIntegerWord(auVar48,auVar48);
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorConvertFromSignedFixedPointWord(auVar42,0);
      dVar40 = (double)(float)(dVar39 - dVar29);
      if (dVar29 - (double)(float)(dVar39 - dVar29) < 0.0) {
        dVar40 = dVar29;
      }
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      dVar39 = (double)(float)(dVar38 - dVar29);
      if ((double)(float)(dVar38 - dVar29) - dVar40 < 0.0) {
        dVar39 = dVar40;
      }
      dVar29 = (double)(float)(dVar39 * dVar39);
      *(float *)((int)pvVar9 + 0x130) =
           fVar3 + (float)((double)(float)(dVar31 * dVar32) * dVar28 +
                          (double)(float)(dVar32 * dVar35 +
                                         (double)(float)(dVar34 * dVar36 +
                                                        (double)(float)((double)(float)(dVar31 * 
                                                  dVar30) * dVar37 + dVar30))));
      dVar40 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar39));
      dVar38 = (double)(float)(dVar29 * dVar40);
      *(float *)((int)pvVar9 + 0x134) =
           (moby->pos).y +
           (float)((double)(float)(dVar29 * dVar38) * dVar28 +
                  (double)(float)(dVar38 * dVar35 +
                                 (double)(float)(dVar40 * dVar36 +
                                                (double)(float)((double)(float)(dVar29 * dVar39) *
                                                                dVar37 + dVar39))));
      *(f32 *)((int)pvVar9 + 0x138) = (moby->pos).z;
      *(f32 *)((int)pvVar9 + 0x13c) = (moby->pos).w;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
      auVar44 = vectorMultiplyAddFloatingPoint(auVar44 | auVar43,auVar48,auVar46);
      auVar43 = loadVectorLeftIndexed(0x20,0x2f4470);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar43 = vectorReciprocalEstimateFloatingPoint(auVar44);
      auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar44,auVar46);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar43,auVar48,auVar47);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar44,auVar46);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar47,auVar43,auVar45);
      auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar44,auVar46);
      auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
      auVar42 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                 auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60);
      if ((bool)(bVar26 >> 1 & 1)) {
        auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar41 = vectorSplatHalfWord(auVar41,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
        *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
      }
    }
  }
  else if (uVar1 == '\x01') {
    fVar3 = g_heroPosition.x - (moby->pos).x;
    fVar2 = g_heroPosition.y - (moby->pos).y;
    fVar4 = ABS(fVar3);
    fVar7 = ABS(fVar2);
    *(float *)(puVar12 + 0x1e) = fVar3;
    *(float *)((int)puVar12 + 0xf4) = fVar2;
    *(float *)(puVar12 + 0x1f) = fVar4 - fVar7;
    dVar29 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x1e));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar12 + 0xf4));
    if (*(float *)(puVar12 + 0x1f) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar14 = uVar13 - 0x250;
      lVar21 = uVar13 - 0xbc;
      lVar19 = uVar13 - 0xcc;
      lVar27 = 2;
      fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x34) = fVar3;
      *(float *)(puVar12 + 0x33) = fVar3;
      *(float *)((int)puVar12 + 0x19c) = fVar3;
      *(float *)((int)puVar12 + 0x194) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x33) = *(float *)(puVar12 + 0x33) * fVar4;
      *(float *)((int)puVar12 + 0x19c) = *(float *)((int)puVar12 + 0x19c) * fVar3;
      *(float *)(puVar12 + 0x34) = *(float *)(puVar12 + 0x34) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0x194) = *(float *)((int)lVar14 + 0x184) * fVar3 * fVar3;
        iVar16 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar21 = uVar13 - 0xcc;
      pfVar22 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar19 = lVar21;
      do {
        fVar3 = *pfVar22;
        fVar4 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar14 + 0x194) = *(float *)((int)lVar14 + 0x194) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar4;
        lVar19 = lVar19 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar14 = 2;
      do {
        iVar16 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar17 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0x194)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar29,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_002f4470,
               uVar25 + 0x144);
    sVar23 = *(short *)((int)pvVar9 + 0x140);
    if (0 < sVar23) {
      sVar23 = sVar23 + -1;
      *(short *)((int)pvVar9 + 0x140) = sVar23;
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (((SQRT(fVar2 * fVar2 + fVar3 * fVar3) < *(float *)((int)pvVar9 + 0x15c)) && (sVar23 == 0))
       && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
      *(float *)((int)pvVar9 + 0x130) = g_heroPosition.x;
      *(float *)((int)pvVar9 + 0x134) = g_heroPosition.y;
      *(float *)((int)pvVar9 + 0x138) = g_heroPosition.z;
      *(float *)((int)pvVar9 + 0x13c) = g_heroPosition.w;
      moby->state = '\x02';
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,3);
      }
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar47 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x158,uVar25);
      auVar43 = loadVectorRightIndexed(0x168,uVar25);
      auVar41 = loadVectorLeftIndexed(0x24,0x2f4470);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar42 | auVar43,
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar44);
      auVar42 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar43,auVar41,auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar9 + 0x148) == 2) {
      path::InitFollower((PathFollower *)((int)pvVar9 + 0x100));
    }
    moby->state = '\x01';
    mobyutil::MB_InitDefaultParams((float *)((int)pvVar9 + 0xb0));
    auVar41 = ZEXT416(0xffffffff);
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    *(undefined4 *)((int)pvVar9 + 0xbc) = 0x40000000;
    auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    *(undefined4 *)((int)pvVar9 + 0xec) = 0x3d4ccccd;
    *(undefined4 *)((int)pvVar9 + 0xf0) = 0x3e99999a;
    *(undefined4 *)((int)pvVar9 + 0xf4) = 0x3e4ccccd;
    fVar3 = *(float *)((int)pvVar9 + 0x150) * mobyutil::g_FrameTime;
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x38d;
    *(float *)((int)pvVar9 + 0xd4) = fVar3;
    auVar41 = loadVectorLeftIndexed(0x10,0x2f4470);
    auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                         auVar42);
    auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
    auVar41 = vectorSplatHalfWord(auVar41,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar41,0x140,uVar25);
    *(undefined2 *)((int)pvVar9 + 0x140) = uVar11;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  return;
}



//==== 002f5a7c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M219_002f5a7c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M219_002f5a7c(void)

{
  DAT_007feeb8 = 0x10000;
  return;
}



//==== 002f5b08  ns=mobyupdate_unsorted  size=0x1b68
// sig: undefined UpdateMoby_219(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots

/* Moby 219 */

void mobyupdate_unsorted::UpdateMoby_219(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  MobyInstance *victim;
  ulonglong uVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  float *pfVar25;
  longlong lVar24;
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
  ulonglong in_f31;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x2b0;
  puVar12 = (ulonglong *)lVar17;
  *puVar12 = uVar14;
  puVar12[0x58] = in_LR;
  puVar12[0x55] = in_f31;
  puVar12[0x54] = unaff_r31;
  puVar12[0x53] = unaff_r30;
  puVar12[0x52] = unaff_r29;
  puVar12[0x51] = unaff_r28;
  puVar12[0x50] = unaff_r27;
  pfVar23 = (float *)moby->pVar;
  uVar26 = ZEXT48(pfVar23);
  iVar18 = mobyutil::MB_damage(lVar15,0x10000,0);
  fastfunc::FastDecTimerS16(uVar26 + 0x136);
  if (((iVar18 != 0) && (moby->state != '\x06' && moby->state != '\x04')) &&
     (*(short *)((int)pfVar23 + 0x136) == 0)) {
    pfVar23[0x1d] = 1.26117e-44;
    pfVar23[0x18] = 0.008;
    pfVar23[0x19] = 0.0005;
    fVar6 = mobyutil::g_FrameTime;
    pfVar23[0x1a] = mobyutil::g_FrameTime * 10.0;
    *(undefined1 *)((int)pfVar23 + 0x8d) = 0;
    pfVar23[0x1b] = fVar6 * 6.0;
    fVar6 = *pfVar23 - *(float *)(iVar18 + 0x2c);
    *pfVar23 = fVar6;
    dVar28 = 0.0;
    if (0.0 <= fVar6) {
      moby->state = '\x06';
      pfVar23[0x28] = 2.0;
      pfVar23[0x29] = 8.0;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar3 = ABS(fVar6);
      fVar9 = ABS(fVar5);
      *(float *)((int)puVar12 + 0x124) = fVar6;
      *(float *)(puVar12 + 0x25) = fVar5;
      *(float *)((int)puVar12 + 300) = fVar3 - fVar9;
      uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 300) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x25) >> 0x1d) & 4;
      uVar20 = uVar21 << 2 | 0x735900;
      fVar6 = ABS(*(float *)((int)puVar12 + 0x124));
      if (*(float *)((int)puVar12 + 300) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
      fVar9 = ABS(*(float *)(puVar12 + 0x25));
      if (*(float *)((int)puVar12 + 300) - 0.0 < 0.0) {
        fVar9 = fVar3;
      }
      fVar3 = *(float *)((int)uVar20 + 4);
      if (0.0 < fVar6) {
        lVar16 = uVar14 - 0x2a0;
        lVar24 = uVar14 - 0x84;
        lVar22 = uVar14 - 0x94;
        lVar27 = 2;
        fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
        fVar9 = fVar6 * fVar6;
        *(float *)(puVar12 + 0x45) = fVar6;
        *(float *)(puVar12 + 0x44) = fVar6;
        *(float *)((int)puVar12 + 0x224) = fVar6;
        *(float *)((int)puVar12 + 0x21c) = fVar6;
        fVar6 = fVar9 * fVar9;
        *(float *)(puVar12 + 0x44) = *(float *)(puVar12 + 0x44) * fVar9;
        *(float *)((int)puVar12 + 0x224) = *(float *)((int)puVar12 + 0x224) * fVar6;
        *(float *)(puVar12 + 0x45) = *(float *)(puVar12 + 0x45) * fVar6 * fVar9;
        do {
          *(float *)((int)lVar16 + 0x21c) = *(float *)((int)lVar16 + 0x20c) * fVar6 * fVar6;
          iVar18 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar14 - 0x94;
        uVar20 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar22 = lVar24;
        do {
          pfVar25 = (float *)uVar20;
          fVar6 = pfVar25[1];
          uVar20 = uVar20 + 8;
          *(float *)((int)lVar16 + 0x21c) = *(float *)((int)lVar16 + 0x21c) * *pfVar25;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar22 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar13 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x21c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
      }
      mobyutil::MB_StartKick(dVar28,lVar15,uVar26 + 0x50,uVar20,6,3,0);
    }
    else {
      uVar19 = (int)*(uint *)(iVar18 + 0x2c) >> 0x1f;
      if ((int)((uVar19 >> 1 ^ *(uint *)(iVar18 + 0x2c)) - uVar19) < 0x3f800000) {
        *(undefined1 *)((int)pfVar23 + 0x47) = 0x4b;
      }
      else {
        *(undefined1 *)((int)pfVar23 + 0x47) = 0x5a;
        moby->state = '\x04';
        pfVar23[0x28] = 4.0;
        pfVar23[0x29] = 9.0;
        fVar6 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar3 = ABS(fVar6);
        fVar9 = ABS(fVar5);
        *(float *)(puVar12 + 0x26) = fVar6;
        *(float *)((int)puVar12 + 0x134) = fVar5;
        *(float *)(puVar12 + 0x27) = fVar3 - fVar9;
        uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x26) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x27) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x134) >> 0x1d) & 4;
        uVar20 = uVar21 << 2 | 0x735900;
        fVar6 = ABS(*(float *)(puVar12 + 0x26));
        if (*(float *)(puVar12 + 0x27) - 0.0 < 0.0) {
          fVar6 = fVar9;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
        fVar9 = ABS(*(float *)((int)puVar12 + 0x134));
        if (*(float *)(puVar12 + 0x27) - 0.0 < 0.0) {
          fVar9 = fVar3;
        }
        fVar3 = *(float *)((int)uVar20 + 4);
        if (0.0 < fVar6) {
          lVar16 = uVar14 - 0x2a0;
          lVar24 = uVar14 - 100;
          lVar22 = uVar14 - 0x74;
          lVar27 = 2;
          fVar6 = (fVar9 - fVar6) / (fVar9 + fVar6);
          fVar9 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x49) = fVar6;
          *(float *)(puVar12 + 0x48) = fVar6;
          *(float *)((int)puVar12 + 0x244) = fVar6;
          *(float *)((int)puVar12 + 0x23c) = fVar6;
          fVar6 = fVar9 * fVar9;
          *(float *)(puVar12 + 0x48) = *(float *)(puVar12 + 0x48) * fVar9;
          *(float *)((int)puVar12 + 0x244) = *(float *)((int)puVar12 + 0x244) * fVar6;
          *(float *)(puVar12 + 0x49) = *(float *)(puVar12 + 0x49) * fVar6 * fVar9;
          do {
            *(float *)((int)lVar16 + 0x23c) = *(float *)((int)lVar16 + 0x22c) * fVar6 * fVar6;
            iVar18 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar14 - 0x74;
          uVar20 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar22 = lVar24;
          do {
            pfVar25 = (float *)uVar20;
            fVar6 = pfVar25[1];
            uVar20 = uVar20 + 8;
            *(float *)((int)lVar16 + 0x23c) = *(float *)((int)lVar16 + 0x23c) * *pfVar25;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            iVar13 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x23c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar3);
        }
        mobyutil::MB_StartKick(dVar28,lVar15,uVar26 + 0x50,uVar20,5,3,0);
      }
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x06') {
    uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar23 + 0x14));
    if ((uVar19 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x05') {
    dVar28 = (double)mobyfunc::BlendAnimFrame(moby);
    if ((dVar28 < 12.0) || (40.0 < dVar28)) {
      if ((40.0 <= dVar28) && (moby->state = '\x01', moby->animationId != '\x03')) {
        mobyutil::MB_SetAnimation(lVar15,3,0,3);
      }
    }
    else {
      auVar32 = ZEXT416(0xfffffff0);
      auVar50 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x138,uVar26);
      auVar33 = loadVectorRightIndexed(0x148,uVar26);
      auVar35 = loadVectorLeftIndexed(0x48,lVar15);
      auVar32 = vectorShiftRightAlgebraicWord(auVar32 | auVar33,auVar50);
      auVar33 = loadVectorLeftIndexed(0x74,0x2f5a90);
      auVar34 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x34,0x2f5a90);
      auVar33 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar42 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar45 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar49,auVar35);
      auVar32 = loadVectorLeftIndexed(0x38,0x2f5a90);
      auVar37 = loadVectorLeftIndexed(0x3c,0x2f5a90);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar32 = ZEXT416(0xffffffff);
      auVar47 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = vectorAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar32 = vectorSubtractFloatingPoint(auVar34,auVar35);
      auVar45 = vectorSubtractFloatingPoint(auVar38,auVar35);
      auVar33 = vectorSubtractFloatingPoint(auVar34,auVar37);
      auVar38 = vectorSubtractFloatingPoint(auVar38,auVar37);
      auVar34 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar35);
      auVar42 = vectorConditionalSelect(auVar32,auVar35,auVar34);
      auVar32 = loadVectorLeftIndexed(0x40,0x2f5a90);
      auVar34 = loadVectorLeftIndexed(0x44,0x2f5a90);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar37);
      auVar34 = loadVectorLeftIndexed(0x48,0x2f5a90);
      auVar33 = vectorConditionalSelect(auVar33,auVar37,auVar32);
      auVar32 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar45);
      auVar45 = vectorConditionalSelect(auVar45,auVar42,auVar32);
      auVar37 = vectorCompareGreaterThanFloatingPoint(auVar33,auVar38);
      auVar32 = ZEXT416(0xffffffff);
      auVar42 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = vectorConditionalSelect(auVar38,auVar33,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar40 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar45,auVar38);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar33);
      auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar33 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = loadVectorLeftIndexed(0x4c,0x2f5a90);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar32);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar38,auVar37,auVar42);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar46);
      auVar42 = vectorMultiplyAddFloatingPoint(auVar35,auVar39,auVar45);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar38,auVar32,auVar40);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar37);
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = auVar48 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = loadVectorLeftIndexed(0x30,0x2f5a90);
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar43 = vectorMultiplyAddFloatingPoint(auVar38,auVar45,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar45,auVar44,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar41,auVar46,auVar34);
      auVar45 = vectorShiftLeftIntegerWord(auVar47,auVar47);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar43,auVar37);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar43,auVar36,auVar32);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar46,auVar44,auVar42);
      auVar32 = ZEXT416(0xffffffff);
      auVar43 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar39,auVar35);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar38);
      auVar34 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar40,auVar42);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar45,auVar39,auVar36);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar34);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xb4,lVar17)
      ;
      *(undefined4 *)((int)puVar12 + 0xb4) = uVar11;
      *(undefined4 *)(puVar12 + 0x17) = 0;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0xb0,lVar17)
      ;
      *(undefined4 *)(puVar12 + 0x16) = uVar11;
      uVar11 = storeVectorElementWordIndexed
                         (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48,lVar15)
      ;
      *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar11;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar23 + 0x2c),puVar12 + 0x16,
                 puVar12 + 0x18);
      auVar32 = loadVectorLeftIndexed(0x138,uVar26);
      auVar33 = loadVectorLeftIndexed(0x48,lVar15);
      auVar36 = loadVectorRightIndexed(0x148,uVar26);
      auVar32 = vectorShiftRightAlgebraicWord(auVar32 | auVar36,auVar50);
      auVar32 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar49,auVar33);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x48,lVar15)
      ;
      *(undefined4 *)((uint)&(moby->rotation).z & 0xfffffffc) = uVar11;
    }
  }
  else if (uVar1 == '\x04') {
    uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar23 + 0x14));
    if ((uVar19 & 1) == 0) {
      if ((int)(moby->pos).z < 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      *(undefined2 *)(pfVar23 + 0x4d) = 0;
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(lVar15,2,10,3);
      }
      moby->state = '\x05';
      uVar19 = mobyutil::MB_randInt(0x100);
      *(ushort *)(pfVar23 + 0x4e) =
           ((ushort)((LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f) & 0xfffe) + 1;
    }
  }
  else if (uVar1 == '\x03') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x1d) = fVar6;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1e) = fVar3 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar12 + 0x1d));
    if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar12 + 0xec));
    if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    dVar31 = dVar28;
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar24 = uVar14 - 0x124;
      lVar22 = uVar14 - 0x134;
      lVar27 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x31) = fVar6;
      *(float *)(puVar12 + 0x30) = fVar6;
      *(float *)((int)puVar12 + 0x184) = fVar6;
      *(float *)((int)puVar12 + 0x17c) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x30) = *(float *)(puVar12 + 0x30) * fVar3;
      *(float *)((int)puVar12 + 0x184) = *(float *)((int)puVar12 + 0x184) * fVar6;
      *(float *)(puVar12 + 0x31) = *(float *)(puVar12 + 0x31) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x17c) = *(float *)((int)lVar16 + 0x16c) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x134;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        fVar6 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x17c) = *(float *)((int)lVar16 + 0x17c) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x17c)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar9 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar31,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,&DAT_002f5a90,
               uVar26 + 0x130);
    if ((moby->previousAnimationFrame == '\a') &&
       (iVar18 = fastfunc::FastDecTimerS16(uVar26 + 0x134), iVar18 == 0)) {
      moby->animationFrame = '\a';
    }
    if ((((moby->updateId == moby->animationId) &&
         (dVar31 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar31)) &&
        (dVar31 = (double)mobyfunc::BlendAnimFrame(moby), dVar31 < 21.0)) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
      fVar6 = (moby->pos).y;
      fVar5 = (moby->pos).x;
      fVar9 = fVar6 - g_heroPosition.y;
      fVar3 = fVar5 - g_heroPosition.x;
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < 6.0) {
        fVar5 = fVar5 - GameCamera.posX;
        fVar6 = fVar6 - GameCamera.posY;
        dVar29 = ABS((double)fVar5);
        dVar30 = ABS((double)fVar6);
        *(float *)((int)puVar12 + 0xdc) = fVar5;
        *(float *)(puVar12 + 0x1c) = fVar6;
        fVar6 = GameCamera.rot.radius;
        *(float *)((int)puVar12 + 0xe4) = (float)(dVar29 - dVar30);
        uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x1c) >> 0x1d) & 4;
        dVar31 = ABS((double)*(float *)((int)puVar12 + 0xdc));
        if ((double)*(float *)((int)puVar12 + 0xe4) - dVar28 < 0.0) {
          dVar31 = dVar30;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar30 = ABS((double)*(float *)(puVar12 + 0x1c));
        if ((double)*(float *)((int)puVar12 + 0xe4) - dVar28 < 0.0) {
          dVar30 = dVar29;
        }
        fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        dVar29 = dVar28;
        if (dVar28 < dVar31) {
          lVar16 = uVar14 - 0x2a0;
          lVar24 = uVar14 - 0x144;
          lVar22 = uVar14 - 0x154;
          lVar27 = 2;
          fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
          fVar7 = fVar3 * fVar3;
          *(float *)(puVar12 + 0x2d) = fVar3;
          *(float *)(puVar12 + 0x2c) = fVar3;
          *(float *)((int)puVar12 + 0x164) = fVar3;
          *(float *)((int)puVar12 + 0x15c) = fVar3;
          fVar3 = fVar7 * fVar7;
          *(float *)(puVar12 + 0x2c) = *(float *)(puVar12 + 0x2c) * fVar7;
          *(float *)((int)puVar12 + 0x164) = *(float *)((int)puVar12 + 0x164) * fVar3;
          *(float *)(puVar12 + 0x2d) = *(float *)(puVar12 + 0x2d) * fVar3 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x15c) = *(float *)((int)lVar16 + 0x14c) * fVar3 * fVar3;
            iVar18 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
            lVar24 = lVar24 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar24 = uVar14 - 0x154;
          pfVar23 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar22 = lVar24;
          do {
            fVar3 = *pfVar23;
            fVar7 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar16 + 0x15c) = *(float *)((int)lVar16 + 0x15c) * fVar3;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = 2;
          lVar16 = lVar17;
          dVar31 = dVar28;
          do {
            iVar18 = (int)lVar16;
            iVar13 = (int)lVar24;
            lVar16 = lVar16 + 0x10;
            lVar24 = lVar24 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x15c)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar29 = (double)((float)(dVar31 + 0.7853981852531433) * fVar5 + fVar9);
        }
        dVar31 = (double)fastfunc::FastSubRots(fVar6,(float)dVar29);
        fVar6 = (moby->rotation).z;
        if (dVar31 < 36.0) {
          fVar5 = g_heroPosition.x - (moby->pos).x;
          fVar9 = g_heroPosition.y - (moby->pos).y;
          dVar29 = ABS((double)fVar5);
          dVar30 = ABS((double)fVar9);
          *(float *)(puVar12 + 0x1a) = fVar5;
          *(float *)((int)puVar12 + 0xd4) = fVar9;
          *(float *)(puVar12 + 0x1b) = (float)(dVar29 - dVar30);
          uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x1a) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1b) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xd4) >> 0x1d) & 4;
          dVar31 = ABS((double)*(float *)(puVar12 + 0x1a));
          if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
            dVar31 = dVar30;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar12 + 0xd4));
          if ((double)*(float *)(puVar12 + 0x1b) - dVar28 < 0.0) {
            dVar30 = dVar29;
          }
          fVar9 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar16 = uVar14 - 0x2a0;
            lVar22 = uVar14 - 0x174;
            lVar24 = uVar14 - 0x164;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x29) = fVar3;
            *(float *)(puVar12 + 0x28) = fVar3;
            *(float *)((int)puVar12 + 0x144) = fVar3;
            *(float *)((int)puVar12 + 0x13c) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar7;
            *(float *)((int)puVar12 + 0x144) = *(float *)((int)puVar12 + 0x144) * fVar3;
            *(float *)(puVar12 + 0x29) = *(float *)(puVar12 + 0x29) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x13c) = *(float *)((int)lVar16 + 300) * fVar3 * fVar3;
              iVar18 = (int)lVar22;
              lVar16 = lVar16 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
              lVar24 = lVar24 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar24 = uVar14 - 0x174;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar24;
            do {
              fVar3 = *pfVar23;
              fVar7 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0x13c) = *(float *)((int)lVar16 + 0x13c) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar18 = (int)lVar17;
              iVar13 = (int)lVar24;
              lVar17 = lVar17 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x13c)) +
                                *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                               *(float *)(iVar13 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar9);
          }
          dVar28 = (double)fastfunc::FastSubRots((float)dVar28,fVar6);
          victim = g_heroMobyPtr;
          if (dVar28 < 0.10471975803375244) {
            fVar6 = (moby->rotation).z;
            fVar5 = fVar6 + 1.5707963;
            fVar9 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar9 = fVar6;
            }
            fVar3 = 3.1415925 - fVar5;
            if (fVar5 - (3.1415925 - fVar5) < 0.0) {
              fVar3 = fVar5;
            }
            fVar7 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
              fVar7 = fVar9;
            }
            *(undefined4 *)(puVar12 + 0x13) = 0;
            fVar6 = -3.1415925 - fVar5;
            if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
              fVar6 = fVar3;
            }
            fVar5 = fVar7 * fVar7;
            fVar9 = fVar6 * fVar6;
            fVar8 = fVar5 * fVar5 * fVar7;
            fVar3 = fVar9 * fVar9 * fVar6;
            fVar4 = fVar5 * fVar8;
            fVar2 = fVar9 * fVar3;
            *(float *)((int)puVar12 + 0x94) =
                 fVar5 * fVar4 * 2.601887e-06 +
                 fVar4 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7;
            *(float *)(puVar12 + 0x12) =
                 fVar9 * fVar2 * 2.601887e-06 +
                 fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6;
            *(f32 *)(puVar12 + 0x14) = (victim->pos).x;
            *(f32 *)((int)puVar12 + 0xa4) = (victim->pos).y;
            fVar6 = (victim->pos).z;
            *(float *)(puVar12 + 0x15) = fVar6;
            *(f32 *)((int)puVar12 + 0xac) = (victim->pos).w;
            *(float *)(puVar12 + 0x15) = fVar6 + 0.75;
            mobyutil::CollDamageMobyDirect
                      (1.0,victim,moby,1,0x2f5a90,(float *)(puVar12 + 0x14),
                       (float *)(puVar12 + 0x12));
          }
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\x03')) {
      mobyutil::MB_SetAnimation(lVar15,3,0,3);
    }
  }
  else if (uVar1 == '\x02') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar3 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x20) = fVar6;
    *(float *)((int)puVar12 + 0x104) = fVar5;
    *(float *)(puVar12 + 0x21) = fVar3 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x104) >> 0x1d) & 4;
    uVar21 = uVar20 << 2 | 0x735900;
    fVar6 = ABS(*(float *)(puVar12 + 0x20));
    if (*(float *)(puVar12 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)((int)uVar21 + 4);
    fVar7 = ABS(*(float *)((int)puVar12 + 0x104));
    if (*(float *)(puVar12 + 0x21) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    dVar31 = dVar28;
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar24 = uVar14 - 0xe4;
      lVar22 = uVar14 - 0xf4;
      lVar27 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x39) = fVar6;
      *(float *)(puVar12 + 0x38) = fVar6;
      *(float *)((int)puVar12 + 0x1c4) = fVar6;
      *(float *)((int)puVar12 + 0x1bc) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x38) = *(float *)(puVar12 + 0x38) * fVar3;
      *(float *)((int)puVar12 + 0x1c4) = *(float *)((int)puVar12 + 0x1c4) * fVar6;
      *(float *)(puVar12 + 0x39) = *(float *)(puVar12 + 0x39) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x1bc) = *(float *)((int)lVar16 + 0x1ac) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xf4;
      uVar21 = ZEXT48(&DAT_007358e0);
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        pfVar25 = (float *)uVar21;
        fVar6 = pfVar25[1];
        uVar21 = uVar21 + 8;
        *(float *)((int)lVar16 + 0x1bc) = *(float *)((int)lVar16 + 0x1bc) * *pfVar25;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        iVar13 = (int)lVar24;
        lVar16 = lVar16 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x1bc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar9 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar31,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar21,
               uVar26 + 0x130);
    fVar6 = (moby->rotation).z;
    fVar5 = fVar6 + 1.5707963;
    fVar9 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar9 = fVar6;
    }
    fVar3 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar3 = fVar5;
    }
    fVar7 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar3 < 0.0) {
      fVar6 = fVar3;
    }
    fVar5 = fVar7 * fVar7;
    fVar9 = fVar6 * fVar6;
    fVar8 = fVar5 * fVar5 * fVar7;
    *(undefined4 *)(puVar12 + 0xf) = 0;
    fVar3 = fVar9 * fVar9 * fVar6;
    fVar4 = fVar5 * fVar8;
    fVar2 = fVar9 * fVar3;
    *(float *)((int)puVar12 + 0x74) =
         (fVar5 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7) * 2.0;
    *(float *)(puVar12 + 0xe) =
         (fVar9 * fVar2 * 2.601887e-06 +
         fVar2 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar6 * -0.16666657 + fVar6) * 2.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,moby,(MobyInstance *)(pfVar23 + 0x2c),puVar12 + 0xe,puVar12 + 0x10
              );
    fVar6 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar9 = (moby->rotation).z;
    if (SQRT((fVar5 - g_heroPosition.x) * (fVar5 - g_heroPosition.x) +
             (fVar6 - g_heroPosition.y) * (fVar6 - g_heroPosition.y)) < 6.0) {
      fVar6 = g_heroPosition.y - fVar6;
      dVar29 = ABS((double)(g_heroPosition.x - fVar5));
      dVar30 = ABS((double)fVar6);
      *(float *)((int)puVar12 + 0xf4) = g_heroPosition.x - fVar5;
      *(float *)(puVar12 + 0x1f) = fVar6;
      *(float *)((int)puVar12 + 0xfc) = (float)(dVar29 - dVar30);
      uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x1f) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)((int)puVar12 + 0xf4));
      if ((double)*(float *)((int)puVar12 + 0xfc) - dVar28 < 0.0) {
        dVar31 = dVar30;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
      dVar30 = ABS((double)*(float *)(puVar12 + 0x1f));
      if ((double)*(float *)((int)puVar12 + 0xfc) - dVar28 < 0.0) {
        dVar30 = dVar29;
      }
      fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
      if (dVar28 < dVar31) {
        lVar16 = uVar14 - 0x2a0;
        lVar22 = uVar14 - 0x114;
        lVar24 = uVar14 - 0x104;
        lVar27 = 2;
        fVar3 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
        fVar7 = fVar3 * fVar3;
        *(float *)(puVar12 + 0x35) = fVar3;
        *(float *)(puVar12 + 0x34) = fVar3;
        *(float *)((int)puVar12 + 0x1a4) = fVar3;
        *(float *)((int)puVar12 + 0x19c) = fVar3;
        fVar3 = fVar7 * fVar7;
        *(float *)(puVar12 + 0x34) = *(float *)(puVar12 + 0x34) * fVar7;
        *(float *)((int)puVar12 + 0x1a4) = *(float *)((int)puVar12 + 0x1a4) * fVar3;
        *(float *)(puVar12 + 0x35) = *(float *)(puVar12 + 0x35) * fVar3 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x19c) = *(float *)((int)lVar16 + 0x18c) * fVar3 * fVar3;
          iVar18 = (int)lVar22;
          lVar16 = lVar16 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar24 = uVar14 - 0x114;
        pfVar25 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar22 = lVar24;
        do {
          fVar3 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar16 + 0x19c) = *(float *)((int)lVar16 + 0x19c) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar13 = (int)lVar24;
          lVar17 = lVar17 + 0x10;
          lVar24 = lVar24 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x19c)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar5);
      }
      dVar28 = (double)fastfunc::FastSubRots((float)dVar28,fVar9);
      fVar5 = (moby->pos).x;
      fVar6 = (moby->pos).y;
      if (dVar28 < 0.10471975803375244) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        moby->state = '\x03';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = loadVectorLeftIndexed(0x58,0x2f5a90);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar10 = storeVectorElementHalfWordIndexed(auVar32,0x134,uVar26);
        *(undefined2 *)(pfVar23 + 0x4d) = uVar10;
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(lVar15,4,0,3);
        }
        goto LAB_002f7628;
      }
    }
    if ((16.0 < SQRT((fVar5 - g_heroPosition.x) * (fVar5 - g_heroPosition.x) +
                     (fVar6 - g_heroPosition.y) * (fVar6 - g_heroPosition.y))) &&
       (moby->state = '\x01', moby->animationId != '\x03')) {
      mobyutil::MB_SetAnimation(lVar15,3,0,3);
    }
  }
  else if (uVar1 == '\x01') {
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar7 = ABS(fVar6);
    fVar9 = ABS(fVar5);
    *(float *)(puVar12 + 0x23) = fVar6;
    *(float *)((int)puVar12 + 0x11c) = fVar5;
    *(float *)(puVar12 + 0x24) = fVar7 - fVar9;
    dVar28 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar12 + 0x23));
    if (*(float *)(puVar12 + 0x24) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar12 + 0x11c));
    if (*(float *)(puVar12 + 0x24) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    dVar31 = dVar28;
    if (0.0 < fVar3) {
      lVar16 = uVar14 - 0x2a0;
      lVar22 = uVar14 - 0xb4;
      lVar24 = uVar14 - 0xa4;
      lVar27 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x41) = fVar3;
      *(float *)(puVar12 + 0x40) = fVar3;
      *(float *)((int)puVar12 + 0x204) = fVar3;
      *(float *)((int)puVar12 + 0x1fc) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar12 + 0x40) = *(float *)(puVar12 + 0x40) * fVar4;
      *(float *)((int)puVar12 + 0x204) = *(float *)((int)puVar12 + 0x204) * fVar3;
      *(float *)(puVar12 + 0x41) = *(float *)(puVar12 + 0x41) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0x1fc) = *(float *)((int)lVar16 + 0x1ec) * fVar3 * fVar3;
        iVar18 = (int)lVar22;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xb4;
      pfVar23 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        fVar3 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar16 + 0x1fc) = *(float *)((int)lVar16 + 0x1fc) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar22 = 2;
      lVar16 = lVar17;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar13 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar18 + 0x1fc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar8 + fVar2);
    }
    *(float *)((int)puVar12 + 0x10c) = fVar6;
    *(float *)((int)puVar12 + 0x114) = fVar7 - fVar9;
    *(float *)(puVar12 + 0x22) = fVar5;
    dVar31 = (double)(float)(dVar31 - (double)(moby->rotation).z);
    uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)((int)puVar12 + 0x10c));
    if (*(float *)((int)puVar12 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar9;
    }
    uVar21 = uVar20 << 2 | 0x735900;
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)((int)uVar21 + 4);
    fVar3 = ABS(*(float *)(puVar12 + 0x22));
    if (*(float *)((int)puVar12 + 0x114) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar16 = uVar14 - 0x2a0;
      lVar22 = uVar14 - 0xd4;
      lVar24 = uVar14 - 0xc4;
      lVar27 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar12 + 0x3d) = fVar6;
      *(float *)(puVar12 + 0x3c) = fVar6;
      *(float *)((int)puVar12 + 0x1e4) = fVar6;
      *(float *)((int)puVar12 + 0x1dc) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar12 + 0x3c) = *(float *)(puVar12 + 0x3c) * fVar3;
      *(float *)((int)puVar12 + 0x1e4) = *(float *)((int)puVar12 + 0x1e4) * fVar6;
      *(float *)(puVar12 + 0x3d) = *(float *)(puVar12 + 0x3d) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x1dc) = *(float *)((int)lVar16 + 0x1cc) * fVar6 * fVar6;
        iVar18 = (int)lVar22;
        lVar16 = lVar16 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar18 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0xd4;
      uVar21 = ZEXT48(&DAT_007358e0);
      lVar16 = lVar17;
      lVar22 = lVar24;
      do {
        pfVar23 = (float *)uVar21;
        fVar6 = pfVar23[1];
        uVar21 = uVar21 + 8;
        *(float *)((int)lVar16 + 0x1dc) = *(float *)((int)lVar16 + 0x1dc) * *pfVar23;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar13 = (int)lVar24;
        lVar17 = lVar17 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x1dc)) +
                          *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar9 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,uVar21,
               uVar26 + 0x130);
    fVar6 = (moby->pos).y - g_heroPosition.y;
    fVar5 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar5 * fVar5 + fVar6 * fVar6) < 15.0) && (dVar31 < 0.20000000298023224)) &&
        (-0.20000000298023224 < dVar31)) &&
       ((ABS((moby->pos).z - g_heroPosition.z) < 2.0 &&
        (moby->state = '\x02', moby->animationId != '\x01')))) {
      mobyutil::MB_SetAnimation(lVar15,1,0,3);
    }
  }
  else if (uVar1 == '\0') {
    moby->scale = moby->pClass->gScale * 1.2;
    mobyutil::MB_InitDefaultParams(pfVar23 + 0x2c);
    pfVar23[0x2f] = 2.0;
    pfVar23[0x2e] = 2.0;
    pfVar23[0x2c] = 1.27378e-42;
    fVar6 = mobyutil::g_FrameTime * 4.0;
    *(undefined2 *)((int)pfVar23 + 0x136) = 0;
    pfVar23[0x35] = fVar6;
    moby->state = '\x01';
    if (moby->animationId != '\x03') {
      mobyutil::MB_SetAnimation(lVar15,3,0,3);
    }
  }
LAB_002f7628:
  mobyutil::MB_ColorDyingMoby(lVar15,uVar26 + 0x40);
  return;
}



//==== 002f7670  ns=mobyupdate_helpers  size=0x14
// sig: undefined M219_002f7670(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M219_002f7670(void)

{
  DAT_007fef28 = 0x10000;
  return;
}



//==== 002f7690  ns=mobyupdate_unsorted  size=0x5d8
// sig: undefined UpdateMoby_22(MobyInstance * moby)
// callers(0): 
// callees(6): 000836ac hero::Hero_RevertToRatchet; 00086b60 hero::SetHeroType; 000a0c38 hero::Hero_Warp; 000efb38 mobyfunc::DeleteMoby; 0011aeec mobyutil::MB_ShowPersistentMessage; 0011ccc8 music::music_SetTransition
// strings: 00a0feec: 'None'

/* Moby 22 */

void mobyupdate_unsorted::UpdateMoby_22(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  short sVar8;
  
  moby->updateDistance = -1;
  piVar2 = (int *)moby->pVar;
  if (DAT_007fef4c == 1) {
    CHAR_ARRAY_00a0feec[0x100] = '\0';
    CHAR_ARRAY_00a0feec[0x101] = '\0';
    DAT_007fef4c = 0;
  }
  iVar3 = piVar2[6];
  if ((((iVar3 != -1) && (iVar4 = piVar2[7], iVar4 != -1)) &&
      (MobyInstance[iVar3].oClass == SPAWN_POINT)) && (MobyInstance[iVar4].oClass == SPAWN_POINT)) {
    pvVar5 = MobyInstance[iVar3].pVar;
    pvVar6 = MobyInstance[iVar4].pVar;
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
      *(uint *)((int)pvVar5 + 8) = *(uint *)((int)pvVar5 + 8) | 8;
      *(uint *)((int)pvVar6 + 8) = *(uint *)((int)pvVar6 + 8) & 0xfffffff7;
    }
    else {
      *(uint *)((int)pvVar5 + 8) = *(uint *)((int)pvVar5 + 8) & 0xfffffff7;
      *(uint *)((int)pvVar6 + 8) = *(uint *)((int)pvVar6 + 8) | 8;
    }
  }
  uVar1 = moby->uid;
  if (((&DAT_00a545c4)[(short)uVar1] != '\0') ||
     ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar1 >> 5) << 2)) &
      1 << (uVar1 & 0x1f)) != 0)) {
    if (UnlockableItems.o2Mask == '\0') {
      if ((g_gameMode == GAME_MODE_NORMAL) &&
         ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._256_2_ < (int)(animationSpeed * 300.5))) {
        if ((ushort)CHAR_ARRAY_00a0feec._256_2_ < 0xffff) {
          CHAR_ARRAY_00a0feec._256_2_ = CHAR_ARRAY_00a0feec._256_2_ + 1;
        }
        iVar3 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
        if ((int)(uint)(ushort)CHAR_ARRAY_00a0feec._258_2_ < iVar3 / 600) {
          sVar8 = (short)(iVar3 >> 0x1f);
          CHAR_ARRAY_00a0feec._258_2_ =
               ((short)(iVar3 / 600) + sVar8) - ((short)((short)(iVar3 / 0x2580000) + sVar8) >> 0xf)
          ;
        }
        CHAR_ARRAY_00a0feec._260_4_ = CHAR_ARRAY_00a0feec._260_4_ | 1 << (Level & 0x3f) | 0x80000000
        ;
        mobyutil::MB_ShowPersistentMessage(1,0x53f1);
      }
      if (g_heroType == '\x01') {
        CHAR_ARRAY_00a0feec[0x100] = SUB21(CHAR_ARRAY_00a0feec._256_2_,1);
        CHAR_ARRAY_00a0feec[0x101] = (char)CHAR_ARRAY_00a0feec._256_2_;
        CHAR_ARRAY_00a0feec[0x102] = SUB21(CHAR_ARRAY_00a0feec._258_2_,1);
        CHAR_ARRAY_00a0feec[0x103] = (char)CHAR_ARRAY_00a0feec._258_2_;
        CHAR_ARRAY_00a0feec[0x104] = SUB41(CHAR_ARRAY_00a0feec._260_4_,3);
        CHAR_ARRAY_00a0feec[0x105] = SUB41(CHAR_ARRAY_00a0feec._260_4_,2);
        CHAR_ARRAY_00a0feec[0x106] = SUB41(CHAR_ARRAY_00a0feec._260_4_,1);
        CHAR_ARRAY_00a0feec[0x107] = (char)CHAR_ARRAY_00a0feec._260_4_;
        return;
      }
    }
    else {
      MobyInstance[*piVar2].modeBits = MobyInstance[*piVar2].modeBits | DISABLED;
      MobyInstance[*piVar2].modeBits = MobyInstance[*piVar2].modeBits | NO_UPDATE;
      MobyInstance[*piVar2].collision = (ushort *)0x0;
    }
  }
  uVar1 = moby->uid;
  iVar4 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  iVar3 = (int)((longlong)((int)(short)uVar1 >> 5) << 2);
  uVar7 = *(uint *)(&DAT_00a54dd0 + iVar3);
  *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) =
       *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar4) | 1 << (uVar1 & 0x1f);
  *(uint *)(&DAT_00a54dd0 + iVar3) = uVar7 | 1 << (uVar1 & 0x1f);
  if ((piVar2[2] != -1) && (iVar3 = *piVar2, iVar3 != -1)) {
    if (UnlockableItems.o2Mask == '\0') {
      MobyInstance[iVar3].collision = (MobyInstance[iVar3].pClass)->collision;
      if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) || (piVar2[5] == -1)) {
        hero::Hero_Warp(&Cuboids[piVar2[5]].pos.x,&Cuboids[piVar2[5]].rot.x,0,1);
      }
      else {
        hero::Hero_Warp(&Cuboids[piVar2[2]].pos.x,&Cuboids[piVar2[2]].rot.x,0,1);
      }
      hero::SetHeroType(1,0x43,MobyInstance + *piVar2);
      music::music_SetTransition(2,4);
    }
    else if (g_heroType == '\x01') {
      hero::Hero_RevertToRatchet();
      hero::Hero_Warp(&Cuboids[piVar2[1]].pos.x,&Cuboids[piVar2[1]].rot.x,0,1);
      music::music_SetTransition(0,5);
      MobyInstance[*piVar2].modeBits = MobyInstance[*piVar2].modeBits | DISABLED;
      MobyInstance[*piVar2].modeBits = MobyInstance[*piVar2].modeBits | NO_UPDATE;
      MobyInstance[*piVar2].collision = (ushort *)0x0;
      DAT_0096bfab = 1;
      mobyfunc::DeleteMoby(moby);
    }
    else {
      DAT_0096bfab = 1;
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 002f7c68  ns=mobyupdate_helpers  size=0x14
// sig: undefined M220_002f7c68(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M220_002f7c68(void)

{
  DAT_007fef9c = 0x10000;
  return;
}



//==== 002f7cf8  ns=mobyupdate_unsorted  size=0xefc
// sig: undefined UpdateMoby_220(MobyInstance * moby)
// callers(0): 
// callees(17): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 00136724 path::InitFollower; 001367d0 path::PathFindClosestPnt; 00299400 FUN_00299400; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 005e8338 FUN_005e8338

/* Moby 220 */

void mobyupdate_unsorted::UpdateMoby_220(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  KickVars *kv;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 local_b0 [4];
  undefined1 local_a0 [16];
  float local_90;
  float local_8c;
  undefined4 local_88;
  f32 local_80;
  f32 local_7c;
  float local_78;
  f32 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [16];
  
  kv = (KickVars *)moby->pVar;
  uVar16 = ZEXT48(kv);
  iVar11 = mobyutil::MB_damage(moby,0x10000,0);
  if ((iVar11 != 0) && (moby->state != '\x02' && moby->state != 'c')) {
    kv->flag = 1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    fVar14 = mobyutil::g_FrameTime;
    iVar11 = kv[2].radius + -1;
    kv->xySpeed = mobyutil::g_FrameTime * 10.0;
    kv->type = '\0';
    kv[2].radius = iVar11;
    kv->zSpeed = fVar14 * 4.0;
    if (iVar11 == 0) {
      fVar14 = (moby->pos).z;
      moby->state = 'c';
      (moby->pos).z = fVar14 + 0.1;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(moby,uVar16);
    }
    else {
      fVar14 = (moby->pos).z;
      moby->state = '\x02';
      (moby->pos).z = fVar14 + 0.1;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      mobyutil::MB_StartKick(moby,uVar16);
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == 'c') {
    uVar13 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar13 & 0x40) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x06') {
    piVar3 = (int *)kv[2].kickVel[0];
    iVar11 = *piVar3;
    iVar12 = (int)kv[1].peakFrame + iVar11 + (int)(char)kv[1].field_0x54;
    fVar14 = (float)(iVar12 - (iVar12 / iVar11) * iVar11);
    local_70 = piVar3[(int)fVar14 * 4 + 4];
    local_6c = piVar3[(int)fVar14 * 4 + 5];
    local_68 = piVar3[(int)fVar14 * 4 + 6];
    local_64 = piVar3[(int)fVar14 * 4 + 7];
    kv[1].flag = (int)(mobyutil::g_FrameTime * 8.5);
    iVar11 = mobyutil::MB_UpdateNavMoveTurning(moby,uVar16 + 0x60,&local_70,auStack_60);
    if (iVar11 != 0) {
      piVar3 = (int *)kv[2].kickVel[0];
      kv[1].peakFrame = fVar14;
      iVar11 = *piVar3;
      iVar12 = (int)fVar14 + iVar11 + (int)(char)kv[1].field_0x54;
      iVar15 = ((int)fVar14 + iVar11) - (int)(char)kv[1].field_0x54;
      dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      iVar12 = (int)kv[2].kickVel[0] + (iVar12 - (iVar12 / iVar11) * iVar11) * 0x10;
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar12 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar12 + 0x14) - (moby->pos).y));
      iVar11 = (int)kv[2].kickVel[0] + (iVar15 - (iVar15 / iVar11) * iVar11) * 0x10;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar11 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar11 + 0x14) - (moby->pos).y));
      dVar19 = (double)fastfunc::FastSubRots((float)dVar19,(float)dVar18);
      dVar18 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar18);
      if (dVar19 < dVar18) {
        kv[1].field_0x54 = -kv[1].field_0x54;
      }
    }
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((14.0 < SQRT(fVar2 * fVar2 + fVar14 * fVar14)) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar1 == '\x05') {
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    fVar14 = SQRT(fVar2 * fVar2 + fVar14 * fVar14);
    if (5.0 <= fVar14) {
      if ((fVar14 < 16.0) && (moby->state = '\x01', moby->animationId != '\0')) {
        mobyutil::MB_SetAnimation(moby,0,0,3);
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(moby,4,0,3);
      }
    }
    iVar11 = fastfunc::FastDecTimerS32(uVar16 + 0xe4);
    if ((iVar11 != 0) && (moby->state = '\x03', moby->animationId != '\a')) {
      mobyutil::MB_SetAnimation(moby,7,0,3);
    }
  }
  else if (uVar1 == '\x04') {
    uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fc0000000000000,moby,&DAT_002f7c80,
               uVar16 + 0xe8);
    if ((((moby->updateId == moby->animationId) &&
         (dVar18 = (double)mobyfunc::BlendAnimFrame(moby), 16.0 <= dVar18)) &&
        (dVar18 = (double)mobyfunc::BlendAnimFrame(moby), dVar18 < 21.0)) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
      fVar14 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar5 = fVar14 - g_heroPosition.y;
      fVar7 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar7 * fVar7 + fVar5 * fVar5) < 5.0) {
        dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar2),
                                      (double)(g_heroPosition.y - fVar14));
        dVar18 = (double)fastfunc::FastSubRots((float)dVar18,(moby->rotation).z);
        if (dVar18 < 0.20943951606750488) {
          fVar14 = (moby->rotation).z;
          fVar2 = fVar14 + 1.5707963;
          fVar5 = 3.1415925 - fVar14;
          if (fVar14 - (3.1415925 - fVar14) < 0.0) {
            fVar5 = fVar14;
          }
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar6 = -3.1415925 - fVar14;
          if ((-3.1415925 - fVar14) - fVar5 < 0.0) {
            fVar6 = fVar5;
          }
          local_88 = 0;
          fVar14 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar14 = fVar7;
          }
          fVar2 = fVar6 * fVar6;
          fVar5 = fVar14 * fVar14;
          fVar9 = fVar2 * fVar2 * fVar6;
          fVar7 = fVar5 * fVar5 * fVar14;
          fVar10 = fVar2 * fVar9;
          fVar8 = fVar5 * fVar7;
          local_8c = fVar2 * fVar10 * 2.601887e-06 +
                     fVar10 * -0.0001980741 +
                     fVar9 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6;
          local_90 = fVar5 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar7 * 0.0083330255 + fVar5 * fVar14 * -0.16666657 + fVar14;
          local_80 = (g_heroMobyPtr->pos).x;
          local_7c = (g_heroMobyPtr->pos).y;
          local_74 = (g_heroMobyPtr->pos).w;
          local_78 = (g_heroMobyPtr->pos).z + 0.75;
          mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2f7c80,&local_80,&local_90);
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x06', moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(moby,1,0,3);
    }
  }
  else if (uVar1 == '\x03') {
    uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fc0000000000000,moby);
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar14 * fVar14) < 5.0) &&
       (moby->state = '\x04', moby->animationId != '\x04')) {
      mobyutil::MB_SetAnimation(moby,4,0,3);
    }
    uVar1 = moby->animationId;
    if (((moby->updateId == uVar1) && ((moby->field43_0x70 & 2U) != 0)) && (uVar1 == '\a')) {
      if (uVar1 != '\b') {
        mobyutil::MB_SetAnimation(moby,8,0,3);
      }
      auVar21 = ZEXT416(0xffffffff);
      auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
      auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
      auVar21 = loadVectorLeftIndexed(0x24,0x2f7c80);
      auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar21 = vectorMultiplyAddFloatingPoint
                          (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                           auVar22);
      auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
      auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,uVar16);
      *(undefined4 *)((uint)&kv[2].flag & 0xfffffffc) = uVar4;
    }
    else if (moby->updateId == uVar1) {
      if (uVar1 != '\b') {
        if (((moby->field43_0x70 & 2U) != 0) && (uVar1 == '\t')) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          auVar21 = loadVectorLeftIndexed(0x24,0x2f7c80);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                             uVar16);
          *(undefined4 *)((uint)&kv[2].flag & 0xfffffffc) = uVar4;
          moby->state = '\x05';
          if (moby->animationId != '\x03') {
            mobyutil::MB_SetAnimation(moby,3,0,3);
          }
        }
      }
      else {
        iVar11 = kv[2].flag + -1;
        kv[2].flag = iVar11;
        if ((iVar11 == 0) && (moby->animationId != '\t')) {
          mobyutil::MB_SetAnimation(moby,9,0,3);
        }
        dVar18 = (double)mobyfunc::BlendAnimFrame(moby);
        if (((dVar18 == 40.0) || (dVar18 == 48.0)) || (dVar18 == 32.0)) {
          uVar17 = 0;
          mobyfunc::GetBonePosition(moby,1,local_b0);
          iVar11 = FUN_00299400(uVar17,local_a0,local_b0);
          *(undefined1 *)(iVar11 + 0x20) = 1;
        }
      }
    }
  }
  else if (uVar1 == '\x02') {
    uVar13 = mobyutil::MB_UpdateKick(moby,kv);
    if ((uVar13 & 0x40) != 0) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,3);
      }
      moby->state = '\x06';
      fVar14 = (float)path::PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,(Spline *)kv[2].kickVel[0]);
      piVar3 = (int *)kv[2].kickVel[0];
      kv[1].peakFrame = fVar14;
      iVar11 = *piVar3;
      iVar12 = (int)fVar14 + iVar11 + (int)(char)kv[1].field_0x54;
      iVar15 = ((int)fVar14 + iVar11) - (int)(char)kv[1].field_0x54;
      dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      iVar12 = (int)kv[2].kickVel[0] + (iVar12 - (iVar12 / iVar11) * iVar11) * 0x10;
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar12 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar12 + 0x14) - (moby->pos).y));
      iVar11 = (int)kv[2].kickVel[0] + (iVar15 - (iVar15 / iVar11) * iVar11) * 0x10;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar11 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar11 + 0x14) - (moby->pos).y));
      dVar19 = (double)fastfunc::FastSubRots((float)dVar19,(float)dVar18);
      dVar18 = (double)fastfunc::FastSubRots((float)dVar20,(float)dVar18);
      if (dVar19 < dVar18) {
        kv[1].field_0x54 = -kv[1].field_0x54;
      }
    }
  }
  else if (uVar1 == '\x01') {
    iVar11 = *(int *)kv[2].kickVel[0];
    iVar15 = (int)kv[1].peakFrame + iVar11 + (int)(char)kv[1].field_0x54;
    kv[1].flag = (int)(mobyutil::g_FrameTime * 2.0);
    iVar12 = mobyutil::MB_UpdateNavMoveTurning(moby,uVar16 + 0x60,local_d0,auStack_c0);
    if (iVar12 != 0) {
      kv[1].peakFrame = (float)(iVar15 - (iVar15 / iVar11) * iVar11);
    }
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar14 * fVar14) < 14.0) &&
       (moby->state = '\x03', moby->animationId != '\a')) {
      mobyutil::MB_SetAnimation(moby,7,0,3);
    }
  }
  else if (uVar1 == '\0') {
    path::InitFollower((PathFollower *)&kv[1].peakFrame);
    mobyutil::MB_InitDefaultParams(kv[1].kickVel);
    kv[1].kickVel[3] = 2.0;
    kv[1].faceSpeed = 0.2;
    kv[1].kickActive = '=';
    kv[1].type = 'L';
    kv[1].stage = -0x3333;
    kv[1].faceAng = 0.3;
    fVar14 = mobyutil::g_FrameTime;
    kv[1].kickVel[0] = 1.27378e-42;
    kv[1].flag = (int)(fVar14 * 2.0);
    moby->state = '\x01';
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(moby,0,0,3);
    }
  }
  return;
}



//==== 002f8bf4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M221_002f8bf4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M221_002f8bf4(void)

{
  DAT_007ff00c = 0x10000;
  return;
}



//==== 002f8c70  ns=mobyupdate_unsorted  size=0x99c
// sig: undefined UpdateMoby_221(MobyInstance * moby)
// callers(0): 
// callees(19): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff190 mobyutil::MB_DeltAngSpeed; 0010675c mobyutil::MB_damage; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 001167c8 mobyutil::MB_UpdateManipulatorRot; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001268f8 partupd::SpawnPart_21; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf

/* Moby 221 */

void mobyupdate_unsorted::UpdateMoby_221(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  u8 uVar12;
  undefined2 uVar11;
  ushort *puVar10;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 auStack_60 [32];
  
  lVar8 = (longlong)(int)moby;
  uVar12 = moby->state;
  pvVar3 = moby->pVar;
  uVar14 = ZEXT48(pvVar3);
  if (uVar12 == '\x06') {
LAB_002f8cf0:
    if (uVar12 == '\0') goto LAB_002f8d38;
  }
  else {
    iVar9 = mobyutil::MB_damage(lVar8,0x10000,0);
    uVar12 = moby->state;
    if ((iVar9 == 0) || (*(int *)(iVar9 + 0x2c) < 1)) goto LAB_002f8cf0;
    moby->state = '\x06';
  }
  *(undefined4 *)((int)pvVar3 + 0x68) = *(undefined4 *)((int)pvVar3 + 0x84);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar8,uVar14,0);
  uVar12 = moby->state;
LAB_002f8d38:
  if (uVar12 == '\x06') {
    sound::PlayMobySound(0,0,moby);
    lVar15 = lVar8 + 0x10;
    mobyutil::MB_SpawnExplosionSparks(0x3ff8000000000000,0x402a000000000000,lVar8,lVar15);
    mobyutil::MB_DistributeBoltsNearHero(lVar8);
    uVar17 = 0;
    lVar13 = lVar8 + 0x40;
    mobyutil::MB_SpawnDebrisMoby(0,lVar8,0x74b,lVar15,lVar13,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar17,lVar8,0x74c,lVar15,lVar13,0,0);
    mobyutil::MB_SpawnDebrisMoby(uVar17,lVar8,0x74d,lVar15,lVar13,0,0);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar12 == '\x05') {
    if (((uint)moby->animationId == (int)((longlong)*(short *)((int)pvVar3 + 0x82) << 1) + 3U) &&
       ((moby->field43_0x70 & 2U) != 0)) {
      mobyutil::MB_randRangeFloat
                (animationSpeed * DAT_007ff044 * 60.0,animationSpeed * DAT_007ff048 * 60.0);
      uVar11 = fastfunc::FastDoubleToInt();
      *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
      mobyutil::MB_SetAnimation(lVar8,0,0,(int)(animationSpeed * 6.5));
      moby->state = '\x01';
    }
  }
  else if (uVar12 == '\x04') {
    fVar4 = (moby->pos).y - GameCamera.posY;
    fVar5 = (moby->pos).x - GameCamera.posX;
    fVar6 = (moby->pos).z - GameCamera.posZ;
    if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 20.0) &&
        (iVar9 = mobyutil::MB_randInt(2), iVar9 == 0)) && (moby->enabled != '\0')) {
      dVar16 = 0.20000000298023224;
      mobyutil::MB_randRangeFloat(DAT_007ff040 * 0.2,DAT_007ff040);
      mobyutil::MB_randRangeFloat(0.0,(float)((double)DAT_007ff040 * dVar16));
      mobyutil::MB_randRot();
      fastfunc::FastVecAddSelf(auStack_60,local_80,local_70);
      mobyfunc::GetBonePosition(lVar8,1,auStack_90);
      uVar7 = DAT_007ff030;
      uVar17 = 0x40e3880000000000;
      mobyutil::MB_randRange
                ((int)(animationSpeed * ((float)(longlong)DAT_007ff038 + 0.5)),
                 (int)(animationSpeed * ((float)(longlong)DAT_007ff03c + 0.5)));
      partupd::SpawnPart_21(uVar17,auStack_90,local_80,uVar7,uVar7);
    }
    iVar9 = fastfunc::FastDecTimerS16(uVar14 + 0x80);
    if (iVar9 != 0) {
      mobyutil::MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 3,0,
                 (int)(animationSpeed * 6.5));
      moby->state = '\x05';
    }
  }
  else if (uVar12 == '\x03') {
    if (((uint)moby->animationId == (int)((longlong)*(short *)((int)pvVar3 + 0x82) << 1) + 1U) &&
       ((moby->field43_0x70 & 2U) != 0)) {
      iVar9 = mobyutil::MB_randRange(0xf,0x2d);
      fVar4 = animationSpeed;
      *(short *)((int)pvVar3 + 0x80) = (short)(int)(animationSpeed * ((float)(longlong)iVar9 + 0.5))
      ;
      mobyutil::MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 2,0,(int)(fVar4 * 3.5));
      dVar16 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar3 + 0x90) = (float)dVar16;
      moby->state = '\x04';
    }
  }
  else if (uVar12 == '\x02') {
    uVar11 = mobyutil::MB_randRange(0,1);
    *(undefined2 *)((int)pvVar3 + 0x82) = uVar11;
    dVar16 = (double)fastfunc::FastSubRots
                               (*(float *)((int)pvVar3 + 0x84),*(float *)((int)pvVar3 + 0x8c));
    if (dVar16 < 0.008726646192371845) {
      mobyutil::MB_SetAnimation
                (lVar8,(longlong)*(short *)((int)pvVar3 + 0x82) * 2 + 1,0,
                 (int)(animationSpeed * 6.5));
      moby->state = '\x03';
    }
    dVar16 = (double)mobyutil::MB_DeltAngSpeed
                               ((double)*(float *)((int)pvVar3 + 0x84),
                                (double)*(float *)((int)pvVar3 + 0x8c),
                                (double)(DAT_0071f418 * 1.5707964),
                                (double)(DAT_0071f418 * 0.7853982),
                                (double)(mobyutil::g_FrameTime * 0.7853982),&DAT_002f8c08,
                                &DAT_00720000,uVar14 + 0x88);
    *(float *)((int)pvVar3 + 0x84) = (float)dVar16;
  }
  else if (uVar12 == '\x01') {
    iVar9 = fastfunc::FastDecTimerS16(uVar14 + 0x80);
    if ((iVar9 != 0) &&
       (fVar4 = GameCamera.posY - (moby->pos).y, fVar5 = GameCamera.posX - (moby->pos).x,
       fVar6 = GameCamera.posZ - (moby->pos).z,
       SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < 42.0)) {
      bVar1 = moby->group;
      if (bVar1 != 0xff) {
        if ((&mobyutil::g_MobyGroups)[bVar1] == 0) {
          return;
        }
        puVar10 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
        iVar9 = 0;
        do {
          if (((MobyInstance[*puVar10 & 0x7fff].state < 0x80) &&
              (MobyInstance[*puVar10 & 0x7fff].oClass == moby->oClass)) &&
             (MobyInstance[*puVar10 & 0x7fff].state != 1)) {
            iVar9 = iVar9 + 1;
          }
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
        } while (-1 < (short)uVar2);
        if (iVar9 != 0) {
          auVar18 = ZEXT416(0xffffffff);
          auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
          auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
          auVar18 = loadVectorLeftIndexed(0x10,0x2f8c08);
          auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar18 = vectorMultiplyAddFloatingPoint
                              (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60
                               ,auVar19);
          auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
          auVar18 = vectorSplatHalfWord(auVar18,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar18,0x80,uVar14);
          *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
          return;
        }
      }
      dVar16 = (double)mobyutil::MB_randRangeFloat(-0.20943952,0.20943952);
      *(float *)((int)pvVar3 + 0x8c) = (float)dVar16;
      moby->state = '\x02';
    }
  }
  else if (uVar12 == '\0') {
    mobyutil::MB_randRangeFloat
              (animationSpeed * DAT_007ff044 * 60.0,animationSpeed * DAT_007ff048 * 60.0);
    uVar11 = fastfunc::FastDoubleToInt();
    *(undefined2 *)((int)pvVar3 + 0x80) = uVar11;
    *(undefined4 *)((int)pvVar3 + 0x84) = 0;
    *(undefined2 *)((int)pvVar3 + 0x82) = 0;
    *(undefined4 *)((int)pvVar3 + 0x88) = 0;
    moby->updateDistance = -1;
    moby->state = '\x01';
  }
  return;
}



//==== 002f9610  ns=Global  size=0xa4
// sig: undefined FUN_002f9610(void)
// callers(2): 001cf4f0 mobyupdate_unsorted::UpdateMoby_111; 002c3118 mobyupdate_unsorted::UpdateMoby_1843
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_002f9610(f32 *param_1,MOBY_OCLASSES param_2)

{
  f32 fVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = mobyfunc::CreateMoby(param_2);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->setByGroup = '\0';
    fVar1 = *param_1;
    pMVar2->drawDistance = 0xff;
    (pMVar2->pos).x = fVar1;
    (pMVar2->pos).y = param_1[1];
    (pMVar2->pos).z = param_1[2];
    (pMVar2->pos).w = param_1[3];
    mobyfunc::UpdateMobyTransform(pMVar2);
    mobyutil::MB_CopyHeroLights(pMVar2);
  }
  return pMVar2;
}



//==== 002f96f8  ns=mobyupdate_unsorted  size=0x838
// sig: undefined UpdateMoby_{224_228}(MobyInstance * moby)
// callers(0): 
// callees(7): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 00116a68 mobyutil::MB_BobMotion; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 224
   Moby 228 */

void mobyupdate_unsorted::UpdateMoby__224_228_(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  int *piVar8;
  u16 *puVar9;
  f32 fVar10;
  f32 fVar11;
  f32 fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  MobyInstance *pMVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_50 [16];
  
  pMVar24 = DAT_0096b2d0;
  piVar8 = (int *)moby->pVar;
  uVar1 = moby->state;
  dVar27 = 100000.0;
  bVar23 = false;
  if (uVar1 == '\x06') {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
    iVar25 = piVar8[2];
    moby->scale = moby->pClass->gScale * 0.1;
    piVar8[4] = iVar25;
    moby->state = '\x01';
  }
  else if (uVar1 == '\x05') {
    dVar27 = (double)fastfunc::FastWrapRot
                               ((moby->rotation).z,(moby->pClass->gScale - moby->scale) * 2.0);
    (moby->rotation).z = (float)dVar27;
    fVar3 = moby->pClass->gScale;
    fVar4 = (fVar3 * 0.01 - moby->scale) * 0.3 + moby->scale;
    moby->scale = fVar4;
    if (fVar4 < fVar3 * 0.05) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    dVar26 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 0.7853982);
    fVar10 = (moby->pos).x;
    (moby->rotation).z = (float)dVar26;
    uVar13 = (int)fVar10 >> 0x1f;
    fVar11 = (moby->pos).y;
    uVar14 = (int)fVar11 >> 0x1f;
    fVar12 = (moby->pos).z;
    fVar4 = 20.0;
    uVar15 = (int)fVar12 >> 0x1f;
    fVar3 = (moby->pos).x;
    if ((int)((uVar13 >> 1 ^ (uint)fVar10) - uVar13) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).x = 1003.0;
    }
    fVar3 = (moby->pos).y;
    if ((int)((uVar14 >> 1 ^ (uint)fVar11) - uVar14) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).y = 1003.0;
    }
    fVar3 = (moby->pos).z;
    if ((int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15) < 0x41a00000) {
      (moby->pos).z = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).z = 1003.0;
    }
    mobyfunc::GetBonePosition(moby,0,auStack_50);
    moby->scale = (moby->pClass->gScale - moby->scale) * 0.1 + moby->scale;
    iVar25 = collproc::CollSphere(0x4000000000000000,auStack_50,moby->pClass,1,moby);
    if (((iVar25 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
       ((MVar7 = (CollOutput.pMoby)->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      bVar23 = true;
    }
    if ((((g_heroState == TURRET_PLANE_UI) && (pMVar24 != (MobyInstance *)0x0)) &&
        (pMVar24->state != 0xfd && pMVar24->state != 0xfe)) &&
       ((MVar7 = pMVar24->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      fVar3 = (pMVar24->pos).y - (moby->pos).y;
      fVar4 = (pMVar24->pos).x - (moby->pos).x;
      fVar5 = (pMVar24->pos).z - (moby->pos).z;
      dVar27 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    }
    if ((bVar23) || (dVar27 < 4.0)) {
      MVar7 = moby->oClass;
      moby->collision = (ushort *)0x0;
      if ((short)MVar7 < 0xe1) {
        if (0xdf < (short)MVar7) {
          DAT_0096b2d6 = DAT_0096b2d6 + 5;
          if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
             (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
            sound::PlayMobySound(4,0,DAT_0096b2d0);
          }
          if (DAT_0096b2d7 < DAT_0096b2d6) {
            DAT_0096b2d6 = DAT_0096b2d7;
          }
        }
      }
      else if (MVar7 == JET_FIGHTER_HEALTH_CRATE_00E4) {
        DAT_0096b2dc = DAT_0096b2dc + 10.0;
        if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
           (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
          sound::PlayMobySound(5,0,DAT_0096b2d0);
        }
        if (DAT_0096b2e0 < DAT_0096b2dc) {
          DAT_0096b2dc = DAT_0096b2e0;
        }
      }
      moby->state = '\x05';
    }
    else if ((dVar27 < 40.0) && (moby->enabled != '\0')) {
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).z;
      fVar16 = (pMVar24->pos).y - fVar3;
      fVar18 = (pMVar24->pos).x - fVar4;
      fVar20 = (pMVar24->pos).z - fVar5;
      fVar22 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar16 * fVar16);
      fVar6 = 0.0;
      fVar21 = (0.8 / (float)SQRT(dVar27)) / fVar22;
      fVar19 = fVar6;
      if (0.0 - fVar22 < 0.0) {
        fVar19 = fVar21 * fVar20;
      }
      fVar17 = fVar6;
      if (0.0 - fVar22 < 0.0) {
        fVar17 = fVar21 * fVar16;
      }
      if (0.0 - fVar22 < 0.0) {
        fVar6 = fVar21 * fVar18;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar19 = fVar21 * fVar20;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar17 = fVar21 * fVar16;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar6 = fVar21 * fVar18;
      }
      (moby->pos).z = fVar5 + fVar19;
      (moby->pos).y = fVar3 + fVar17;
      (moby->pos).x = fVar4 + fVar6;
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar8[2] == -1) {
      moby->state = '\x04';
    }
    else {
      iVar25 = fastfunc::FastDecTimerS32(piVar8 + 4);
      if (iVar25 == 0) {
        if (moby->state != '\x04') goto LAB_002f9de0;
      }
      else {
        moby->state = '\x04';
      }
    }
    puVar9 = moby->pClass->collision;
    moby->enabled = '\x01';
    moby->collision = puVar9;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->scale = moby->pClass->gScale * 0.1;
  }
  else if (uVar1 == '\x02') {
    if (MobyInstance + *piVar8 != (MobyInstance *)0x0) {
      bVar2 = MobyInstance[*piVar8].state;
      if ((bVar2 != 0xfe) && (bVar2 != 0xfd)) {
        if (piVar8[1] == 0xffffffff) {
          moby->state = '\x03';
        }
        else if ((uint)bVar2 == piVar8[1]) {
          moby->state = '\x03';
        }
        goto LAB_002f9de0;
      }
    }
    moby->state = '\x03';
  }
  else if (uVar1 == '\x01') {
    moby->state = ((byte)((LZCOUNT(-1 - *piVar8) << 0x3a) >> 0x3f) & 1) + 2;
  }
  else if (uVar1 == '\0') {
    if (*(char *)(piVar8 + 3) == '\0') {
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits = moby->modeBits | DISABLED;
      fVar3 = moby->pClass->gScale;
      moby->state = '\x01';
      moby->scale = fVar3 * 0.1;
    }
    else {
      fVar3 = moby->pClass->gScale;
      moby->state = '\x04';
      moby->scale = fVar3;
    }
  }
LAB_002f9de0:
  mobyutil::MB_BobMotion
            (0.7,mobyutil::g_FrameTime * 1.2217305,moby,(float *)(piVar8 + 6),(float *)(piVar8 + 5))
  ;
  fVar10 = (moby->pos).x;
  fVar11 = (moby->pos).y;
  uVar13 = (int)fVar10 >> 0x1f;
  uVar14 = (int)fVar11 >> 0x1f;
  fVar12 = (moby->pos).z;
  fVar3 = 20.0;
  uVar15 = (int)fVar12 >> 0x1f;
  fVar4 = (moby->pos).x;
  if ((int)((uVar13 >> 1 ^ (uint)fVar10) - uVar13) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).x = 1003.0;
  }
  fVar4 = (moby->pos).y;
  if ((int)((uVar14 >> 1 ^ (uint)fVar11) - uVar14) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).y = 1003.0;
  }
  fVar4 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).z = 1003.0;
  }
  return;
}



//==== 002f9f30  ns=mobyupdate_helpers  size=0x14
// sig: undefined M228_002f9f30(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M228_002f9f30(void)

{
  DAT_007ff098 = 0x10000;
  return;
}



//==== 002f9f70  ns=mobyupdate_helpers  size=0x284
// sig: undefined M228_002f9f70(void)
// callers(0): 
// callees(2): 004fff60 fastfunc::FastDecTimerS32; 00501980 fastfunc::FastQuaternionToEuler

void mobyupdate_helpers::M228_002f9f70(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 in_LR;
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
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar7 = (ulonglong)uVar1;
  if (*(char *)(uVar1 + 0xb1) == '\x01') {
    auVar8 = loadVectorLeftIndexed(0x138,uVar7);
    auVar9 = loadVectorRightIndexed(0x148,uVar7);
    if (*(int *)(uVar1 + 0x138) != 0) {
      auVar10 = loadVectorLeftIndexed(0xffffffffffffb448,0x10c0000);
      auVar11 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = ZEXT416(0xffffffff);
      auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = ZEXT416(0xffffffff);
      auVar16 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = loadVectorLeftIndexed(4,0x2f9f48);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar15 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar14 = vectorReciprocalEstimateFloatingPoint(auVar11);
      auVar10 = ZEXT416(0xffffffff);
      auVar17 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = loadVectorLeftIndexed(in_LR,0x2f9f48);
      auVar10 = ZEXT416(0xffffffff);
      auVar18 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar11,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar13);
      auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar11,auVar15);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar13);
      auVar8 = loadVectorLeftIndexed(8,0x2f9f48);
      auVar9 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar11,auVar15);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar8,auVar14);
      auVar11 = loadVectorLeftIndexed(0xc,0x2f9f48);
      auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = (float)(longlong)*(int *)(uVar1 + 0x138) * (3.1415927 / (float)(longlong)DAT_010bb448)
      ;
      auVar14 = loadVectorLeftIndexed(0x10,0x2f9f48);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar17);
      auVar10 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar14 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar18);
      auVar9 = vectorSubtractFloatingPoint
                         (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
      auVar11 = vectorSubtractFloatingPoint
                          (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar8);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar12 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar8);
      auVar9 = vectorConditionalSelect(auVar9,auVar8,auVar12);
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar11);
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar9 = vectorConditionalSelect(auVar11,auVar9,auVar8);
      auVar8 = ZEXT416(0xffffffff);
      auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar13 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = loadVectorLeftIndexed(0x14,0x2f9f48);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = fVar5 * fVar5;
      auVar13 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar13,auVar12);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar9);
      auVar13 = loadVectorLeftIndexed(0x18,0x2f9f48);
      auVar10 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      fVar4 = fVar3 * fVar3 * fVar5;
      auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar6 = fVar3 * fVar4;
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar14,auVar10);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar14,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = loadVectorLeftIndexed(0x1c,0x2f9f48);
      auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff0c0,0x800000);
      auVar11 = loadVectorLeftIndexed(0x20,0x2f9f48);
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar8);
      auVar8 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = DAT_007ff0c0 *
              (fVar3 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5);
      auVar8 = ((auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60) ^ auVar9) >> 0x60 &
               (undefined1  [16])0xffffffff;
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x134,uVar7);
      *(undefined4 *)(uVar1 + 0x134 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x130,uVar7);
      *(undefined4 *)(uVar1 + 0x130 & 0xfffffffc) = uVar2;
      fastfunc::FastQuaternionToEuler(-(double)fVar3,uVar7 + 0x100,1);
      fastfunc::FastQuaternionToEuler((double)*(float *)(uVar1 + 0x130),uVar7 + 0xc0,1);
      fastfunc::FastDecTimerS32(uVar7 + 0x138);
    }
  }
  return;
}



//==== 002fa200  ns=mobyupdate_helpers  size=0x49c
// sig: undefined M227_002fa200(void)
// callers(1): 002fa6f0 mobyupdate_unsorted::UpdateMoby_227
// callees(1): 005026a0 fastfunc::FastSubRots

MobyInstance *
mobyupdate_helpers::M227_002fa200(MobyInstance *param_1,int param_2,MobyInstance *param_3)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMVar17;
  ulonglong unaff_r28;
  ushort *puVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar23;
  double dVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x110;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x24] = in_LR;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1a] = unaff_r26;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x19] = unaff_r25;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1d] = unaff_r29;
  dVar23 = 0.0;
  puVar8[0x1c] = unaff_r28;
  iVar9 = mobyutil::g_NumMobyGroups;
  bVar2 = param_1->group;
  puVar8[0x1b] = unaff_r27;
  if (((int)(uint)bVar2 < iVar9) && (bVar2 != 0xff)) {
    puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[bVar2];
    dVar24 = dVar23;
    if (param_2 != 0) {
      fVar6 = g_heroPosition.x - (param_1->pos).x;
      fVar5 = g_heroPosition.y - (param_1->pos).y;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar5;
      *(float *)((int)puVar8 + 0x84) = fVar3 - fVar4;
      uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar8 + 0x7c));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = ABS(*(float *)(puVar8 + 0x10));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (0.0 < fVar6) {
        lVar12 = uVar11 - 0x100;
        lVar16 = uVar11 - 0x58;
        lVar13 = uVar11 - 0x68;
        lVar19 = 2;
        fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar8 + 0x15) = fVar6;
        *(float *)((int)puVar8 + 0xac) = fVar6;
        *(float *)(puVar8 + 0x16) = fVar6;
        *(float *)((int)puVar8 + 0xb4) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar4;
        *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar6;
        *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar6 * fVar6;
          iVar9 = (int)lVar13;
          lVar13 = lVar13 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar11 - 0x68;
        pfVar14 = (float *)&DAT_007358e0;
        lVar12 = lVar1;
        lVar13 = lVar16;
        do {
          fVar6 = *pfVar14;
          fVar4 = pfVar14[1];
          pfVar14 = pfVar14 + 2;
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar6;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar13 = 2;
        lVar12 = lVar1;
        do {
          iVar9 = (int)lVar12;
          iVar10 = (int)lVar16;
          lVar12 = lVar12 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xa8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar3);
      }
    }
    do {
      pMVar17 = MobyInstance + (*puVar18 & 0x7fff);
      if (param_2 != 0) {
        fVar6 = (pMVar17->pos).x - (param_1->pos).x;
        fVar5 = (pMVar17->pos).y - (param_1->pos).y;
        dVar20 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar5);
        *(float *)(puVar8 + 0xe) = fVar6;
        *(float *)((int)puVar8 + 0x74) = fVar5;
        *(float *)(puVar8 + 0xf) = (float)(dVar20 - dVar22);
        uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar8 + 0xe));
        if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar8 + 0x74));
        if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
          dVar22 = dVar20;
        }
        fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        dVar20 = dVar23;
        if (dVar23 < dVar21) {
          lVar12 = uVar11 - 0x100;
          lVar16 = uVar11 - 0x78;
          lVar13 = uVar11 - 0x88;
          lVar19 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar8 + 0x11) = fVar4;
          *(float *)((int)puVar8 + 0x8c) = fVar4;
          *(float *)(puVar8 + 0x12) = fVar4;
          *(float *)((int)puVar8 + 0x94) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar3;
          *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
          *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
            iVar9 = (int)lVar13;
            lVar13 = lVar13 + 8;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar16 = uVar11 - 0x88;
          pfVar14 = (float *)&DAT_007358e0;
          lVar12 = lVar1;
          lVar13 = lVar16;
          do {
            fVar4 = *pfVar14;
            fVar3 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar4;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar12 = lVar1;
          dVar21 = dVar23;
          do {
            iVar9 = (int)lVar12;
            iVar10 = (int)lVar16;
            lVar12 = lVar12 + 0x10;
            lVar16 = lVar16 + 0x10;
            dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar9 + 0x88)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar20 = (double)((float)(dVar21 + 0.7853981852531433) * fVar6 + fVar5);
        }
        fastfunc::FastSubRots((float)dVar20,(float)dVar24);
      }
      if (((param_1 != pMVar17) && (param_3 != pMVar17)) && (pMVar17->oClass != 0xe3)) {
        return pMVar17;
      }
      uVar7 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar7);
    trapWord(4,0,0);
  }
  return (MobyInstance *)0x0;
}



//==== 002fa6f0  ns=mobyupdate_unsorted  size=0x15a4
// sig: undefined UpdateMoby_227(MobyInstance * moby)
// callers(0): 
// callees(25): 00055ab8 stub::STUB_00055ab8_RET_0; 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f1ec8 mobyfunc::SetColorOfMoby; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fdf80 mobyutil::MB_SetAnimationFrame; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 0010675c mobyutil::MB_damage; 00108180 mobyutil::MB_computeLobVelocity; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 002fa200 mobyupdate_helpers::M227_002fa200; 0030f5c8 FUN_0030f5c8; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00501980 fastfunc::FastQuaternionToEuler; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005e8338 FUN_005e8338
// strings: 002fa6c0: '?fff' (raw)

/* Moby 227 */

void mobyupdate_unsorted::UpdateMoby_227(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  void *pvVar6;
  int iVar7;
  f32 fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  MobyInstance *pMVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 in_LR;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  float local_c0;
  float local_bc;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [48];
  
  pvVar6 = moby->pVar;
  uVar21 = ZEXT48(pvVar6);
  uVar16 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
  iVar17 = mobyutil::MB_damage(moby,0x30000,0);
  fastfunc::FastDecTimerS32(uVar21 + 0x140);
  pfVar18 = (float *)uVar16;
  if ((((iVar17 != 0) && (*(int *)((int)pvVar6 + 0x140) == 0)) && (moby->state != '\x04')) &&
     ((moby->state != '\x03' ||
      ((moby->updateId == moby->animationId &&
       (*(uint *)((int)pvVar6 + 0x13c) != (uint)g_heroMobyPtr->updateId)))))) {
    *pfVar18 = *pfVar18 - *(float *)(iVar17 + 0x2c);
    moby->damage = -1;
    iVar7 = *(int *)(iVar17 + 0x20);
    fVar3 = *(float *)(iVar17 + 0x2c);
    *(uint *)((int)pvVar6 + 0x13c) = (uint)g_heroMobyPtr->updateId;
    sVar5 = *(short *)(iVar7 + 0xa6);
    iVar17 = fastfunc::FastDoubleToInt((double)(6.0 - fVar3));
    if (iVar17 < 6) {
      if ((int)*pfVar18 < 1) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar6 + 100) = 3;
        *(undefined4 *)((int)pvVar6 + 0x58) = 0x3e19999a;
        *(undefined4 *)((int)pvVar6 + 0x50) = 0x3c03126f;
        *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e000000;
        *(undefined4 *)((int)pvVar6 + 0x54) = 0x3a03126f;
        *(undefined1 *)((int)pvVar6 + 0x7d) = 2;
        if (sVar5 == 0xac) {
          *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e400000;
          *(undefined4 *)((int)pvVar6 + 0x58) = 0x3e666667;
        }
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(moby,uVar21 + 0x40);
      }
      else {
        if (moby->state != '\x03') {
          moby->setByGroup = moby->state;
        }
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar6 + 0x50) = 0x3c03126f;
        *(undefined4 *)((int)pvVar6 + 100) = 3;
        *(undefined4 *)((int)pvVar6 + 0x54) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e000000;
        *(undefined4 *)((int)pvVar6 + 0x58) = 0x3d4ccccd;
        *(undefined1 *)((int)pvVar6 + 0x7d) = 0;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        mobyutil::MB_StartKick(moby,uVar21 + 0x40);
      }
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0xa7) = 0x40;
      mobyutil::MB_UpdateLightsTransition(moby,uVar21 + 0xa0);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(4,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x140,uVar21)
      ;
      *(undefined4 *)((int)pvVar6 + 0x140U & 0xfffffffc) = uVar9;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = (moby->pos).y - g_heroPosition.y;
      *(int *)((int)pvVar6 + 0x138) = DAT_010bb448 - DAT_010bb44c;
      dVar23 = (double)FUN_005e8338((double)fVar3,(double)fVar4);
      dVar30 = 3.141592502593994;
      fVar3 = (float)(dVar23 + 1.570796251296997);
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar10 = fVar4;
      }
      fVar12 = fVar10 * fVar10;
      fVar3 = fVar12 * fVar12 * fVar10;
      fVar4 = fVar12 * fVar3;
      fVar3 = (fVar12 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar12 * fVar10 * -0.16666657 + fVar10)
              * DAT_007ff0c4;
      dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
      fVar4 = DAT_007ff0c4;
      dVar25 = (double)(float)(dVar30 - dVar24);
      if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
        dVar25 = dVar24;
      }
      dVar30 = (double)(float)(dVar29 - dVar24);
      if ((double)(float)(dVar29 - dVar24) - dVar25 < 0.0) {
        dVar30 = dVar25;
      }
      dVar25 = (double)(float)(dVar30 * dVar30);
      (moby->pos).x = (moby->pos).x + fVar3;
      dVar24 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar30));
      dVar29 = (double)(float)(dVar25 * dVar24);
      (moby->pos).y =
           (float)((double)(float)(dVar25 * dVar29) * dVar23 +
                  (double)(float)(dVar29 * dVar26 +
                                 (double)(float)(dVar24 * dVar27 +
                                                (double)(float)((double)(float)(dVar25 * dVar30) *
                                                                dVar28 + dVar30)))) * fVar4 +
           (moby->pos).y;
      iVar17 = stub::STUB_00055ac0_RET_0(local_130,800,0,moby,0);
      if (iVar17 != 0) {
        (moby->pos).x = CollOutput.push.x;
        (moby->pos).y = CollOutput.push.y;
      }
    }
  }
  fVar3 = CollOutput.ip.z;
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      uVar16 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000
                 ,uVar21 + 0x144);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
      fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb454;
      *(float *)((int)pvVar6 + 0x5c) = fVar3;
      if ((fVar3 < 0.0) &&
         (iVar17 = stub::STUB_00055ab8_RET_0(local_e0,local_d0,2,0,0), iVar17 != 0)) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_007ff0cc) {
          moby->state = '\n';
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimationFrame(moby,2,0,5,1);
          }
          iVar17 = mobyupdate_helpers::M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
          *(int *)((int)pvVar6 + 0x14c) = iVar17;
          if (iVar17 != 0) goto LAB_002fb9e4;
        }
        fVar8 = (moby->pos).z;
        uVar20 = (int)fVar8 >> 0x1f;
        if ((int)((uVar20 >> 1 ^ (uint)fVar8) - uVar20) <=
            (int)(((uint)((int)CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)CollOutput.ip.z) -
                 ((int)CollOutput.ip.z >> 0x1f))) {
          (moby->pos).z = CollOutput.ip.z;
          moby->state = '\f';
        }
      }
    }
    else if (bVar1 == 4) {
      uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x40));
      if ((uVar20 & 0x40) != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 == 3) {
      moby->damage = -1;
      if ((-1 < (int)*(uint *)((int)pvVar6 + 0x13c)) &&
         (*(uint *)((int)pvVar6 + 0x13c) != (uint)g_heroMobyPtr->updateId)) {
        *(undefined4 *)((int)pvVar6 + 0x13c) = 0xffffffff;
      }
      uVar20 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x40));
      if ((uVar20 & 0x40) != 0) {
        *(undefined4 *)((int)pvVar6 + 0x13c) = 0xffffffff;
        moby->state = moby->setByGroup;
        if (moby->animationId != '\r') {
          mobyutil::MB_SetAnimationFrame(moby,0xd,0,1,1);
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 == 1) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        iVar17 = fastfunc::FastDecTimerS32(uVar21 + 0x15c);
        if (iVar17 != 0) {
          if ((double)DAT_007ff0cc <= dVar23) {
            iVar17 = fastfunc::FastDecTimerS16(uVar21 + 0x14a);
            if ((iVar17 != 0) && (dVar23 < (double)DAT_007ff0c8)) {
              *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb450;
              moby->state = '\x05';
            }
          }
          else {
            moby->state = '\t';
            *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb450;
          }
        }
      }
      else if (bVar1 == 0) {
        if (moby->animationId != '\r') {
          mobyutil::MB_SetAnimationFrame(moby,0xd,0,1,1);
        }
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar6 + 0x130) = 0;
        *(undefined4 *)((int)pvVar6 + 0x134) = 0;
        mobyfunc::AttachManipulator(moby,0,(int)pvVar6 + 0xb0);
        mobyfunc::AttachManipulator(moby,2,(int)pvVar6 + 0xf0);
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff0bc,0x800000);
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,uVar16);
        *(undefined4 *)((uint)pfVar18 & 0xfffffffc) = uVar9;
        *(undefined2 *)((int)pvVar6 + 0x14a) = 0;
        *(undefined4 *)((int)pvVar6 + 0x15c) = 0;
        iVar17 = mobyupdate_helpers::M227_002fa200(moby,0,0);
        if (iVar17 == 0) {
          trapWord(0x1f,in_LR,in_LR);
        }
        else {
          (moby->pos).x = *(f32 *)(iVar17 + 0x10);
          (moby->pos).y = *(f32 *)(iVar17 + 0x14);
          fVar3 = *(float *)(iVar17 + 0x18);
          (moby->pos).z = fVar3;
          (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
          fVar4 = DAT_007ff0d0;
          *(int *)((int)pvVar6 + 0x14c) = iVar17;
          (moby->pos).z = fVar3 - fVar4;
        }
      }
    }
  }
  else if (bVar1 == 0xc) {
    dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (dVar23,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    dVar23 = (double)fastfunc::FastSubRots((moby->rotation).z,(float)dVar23);
    if (dVar23 < (double)DAT_007ff0d8) {
      moby->state = '\x06';
      *(undefined2 *)((int)pvVar6 + 0x148) = 0;
      if (moby->animationId != '&') {
        mobyutil::MB_SetAnimationFrame(moby,0x26,0,5,1);
      }
    }
  }
  else if (bVar1 == 0xb) {
    iVar17 = *(int *)((int)pvVar6 + 0x14c);
    if (*(int *)((int)pvVar6 + 0x158) != 0) {
      fastfunc::FastDecTimerS32(uVar21 + 0x158);
      dVar23 = (double)fastfunc::FastIntToDouble(DAT_010bb468);
      fVar4 = *(float *)(iVar17 + 0x10);
      fVar3 = (float)((double)(longlong)*(int *)((int)pvVar6 + 0x158) / dVar23);
      (moby->pos).x = (*(float *)((int)pvVar6 + 0x150) - fVar4) * fVar3 + fVar4;
      fVar4 = *(float *)(iVar17 + 0x14);
      (moby->pos).y = (*(float *)((int)pvVar6 + 0x154) - fVar4) * fVar3 + fVar4;
    }
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb45c;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = stub::STUB_00055ab8_RET_0(local_100,local_f0,2,0,0), fVar3 = DAT_007ff0d0,
        iVar17 != 0)) && ((moby->pos).z + DAT_007ff0d0 <= CollOutput.ip.z)) {
      *(undefined4 *)((int)pvVar6 + 0x15c) = DAT_010bb474;
      *(short *)((int)pvVar6 + 0x14a) = (short)DAT_010bb460;
      fVar3 = CollOutput.ip.z - fVar3;
      moby->state = '\x01';
      uVar2 = moby->animationId;
      (moby->pos).z = fVar3;
      if (uVar2 != '\r') {
        mobyutil::MB_SetAnimationFrame(moby,0xd,0,3,1);
      }
    }
  }
  else if (bVar1 == 10) {
    uVar16 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar6 + 0x14c) + 0x10) - (moby->pos).x)
                          ,(double)(*(float *)(*(int *)((int)pvVar6 + 0x14c) + 0x14) - (moby->pos).y
                                   ));
    mobyutil::OrganicDeltAngSpeed
              (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    if (moby->animationId != '\x02') {
      mobyutil::MB_SetAnimationFrame(moby,2,0,5,1);
    }
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar10 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar10 = fVar3;
    }
    fVar12 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar12 = fVar4;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar12 < 0.0) {
      fVar3 = fVar12;
    }
    fVar4 = fVar11 * fVar11;
    fVar10 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar11;
    fVar12 = fVar10 * fVar10 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar10 * fVar12;
    iVar17 = *(int *)((int)pvVar6 + 0x14c);
    fVar4 = (fVar4 * fVar15 * 2.601887e-06 +
            fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11)
            * DAT_010bb464 + (moby->pos).y;
    fVar3 = (fVar10 * fVar13 * 2.601887e-06 +
            fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar3 * -0.16666657 + fVar3) *
            DAT_010bb464 + (moby->pos).x;
    (moby->pos).y = fVar4;
    (moby->pos).x = fVar3;
    fVar10 = fVar4 - *(float *)(iVar17 + 0x14);
    fVar12 = fVar3 - *(float *)(iVar17 + 0x10);
    if (SQRT(fVar12 * fVar12 + fVar10 * fVar10) < DAT_007ff0d4) {
      if (SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
               (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) < DAT_007ff0cc) {
        iVar17 = mobyupdate_helpers::M227_002fa200(moby,1,iVar17);
        *(int *)((int)pvVar6 + 0x14c) = iVar17;
        if (iVar17 != 0) goto LAB_002fb9e4;
      }
      moby->state = '\v';
      if (moby->animationId != '\r') {
        mobyutil::MB_SetAnimationFrame(moby,0xd,0,5,1);
      }
      *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
      uVar9 = DAT_010bb468;
      *(f32 *)((int)pvVar6 + 0x150) = (moby->pos).x;
      fVar8 = (moby->pos).y;
      *(undefined4 *)((int)pvVar6 + 0x158) = uVar9;
      *(f32 *)((int)pvVar6 + 0x154) = fVar8;
    }
  }
  else if (bVar1 == 9) {
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb454;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = stub::STUB_00055ab8_RET_0(local_120,local_110,2,0,0), iVar17 != 0)) &&
       (fVar8 = (moby->pos).z, uVar20 = (int)fVar8 >> 0x1f,
       (int)((uVar20 >> 1 ^ (uint)fVar8) - uVar20) <=
       (int)(((uint)((int)CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)CollOutput.ip.z) -
            ((int)CollOutput.ip.z >> 0x1f)))) {
      uVar2 = moby->animationId;
      (moby->pos).z = CollOutput.ip.z;
      moby->state = '\n';
      if (uVar2 != '\x02') {
        mobyutil::MB_SetAnimationFrame(moby,2,0,5,1);
      }
      iVar17 = mobyupdate_helpers::M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
      *(int *)((int)pvVar6 + 0x14c) = iVar17;
      if (iVar17 == 0) {
        if (moby->animationId != '\r') {
          mobyutil::MB_SetAnimationFrame(moby,0xd,0,5,1);
        }
        moby->state = '\b';
        *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
      }
    }
  }
  else if (bVar1 == 8) {
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb45c;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = stub::STUB_00055ab8_RET_0(local_a0,local_90,2,0,0), fVar3 = DAT_007ff0d0,
        iVar17 != 0)) && ((moby->pos).z + DAT_007ff0d0 <= CollOutput.ip.z)) {
      *(undefined4 *)((int)pvVar6 + 0x15c) = DAT_010bb474;
      *(short *)((int)pvVar6 + 0x14a) = (short)DAT_010bb460;
      fVar3 = CollOutput.ip.z - fVar3;
      moby->state = '\x01';
      uVar2 = moby->animationId;
      (moby->pos).z = fVar3;
      if (uVar2 != '\r') {
        mobyutil::MB_SetAnimationFrame(moby,0xd,0,3,1);
      }
    }
  }
  else if (bVar1 == 7) {
    if ((moby->field43_0x70 & 2U) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar10 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar10 * fVar10 + fVar4 * fVar4) < DAT_007ff0cc) {
        uVar2 = moby->animationId;
        moby->state = '\n';
        (moby->pos).z = fVar3;
        if (uVar2 != '\x02') {
          mobyutil::MB_SetAnimationFrame(moby,2,0,5,1);
        }
        iVar17 = mobyupdate_helpers::M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
        *(int *)((int)pvVar6 + 0x14c) = iVar17;
        if (iVar17 != 0) goto LAB_002fb9e4;
      }
      if (moby->animationId != '\r') {
        mobyutil::MB_SetAnimationFrame(moby,0xd,0,5,1);
      }
      moby->state = '\b';
      *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
    }
  }
  else if (bVar1 == 6) {
    uVar16 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    if (((*(short *)((int)pvVar6 + 0x148) == 0) && (moby->updateId == moby->animationId)) &&
       (dVar23 = (double)mobyfunc::BlendAnimFrame(moby), 25.0 < dVar23)) {
      mobyfunc::GetBonePosition(moby,1,&local_c0);
      FUN_005e8338((double)((g_heroMobyPtr->pos).x - local_c0),
                   (double)((g_heroMobyPtr->pos).y - local_bc));
      mobyutil::MB_computeLobVelocity
                ((double)(DAT_010bb46c * 1.3),(double)(DAT_0071f418 * -9.8),&local_c0,
                 &g_heroMobyPtr->pos);
      pMVar19 = (MobyInstance *)FUN_0030f5c8(moby,&local_c0,local_b0);
      if (pMVar19 != (MobyInstance *)0x0) {
        *(undefined2 *)((int)pvVar6 + 0x148) = 1;
        pMVar19->scale = pMVar19->scale * 1.5;
        mobyfunc::SetColorOfMoby(pMVar19,0xff,0xff,0xff);
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '(') {
        mobyutil::MB_SetAnimationFrame(moby,0x28,0,5,1);
      }
      moby->state = '\a';
    }
  }
LAB_002fb9e4:
  pvVar6 = moby->pVar;
  uVar22 = ZEXT48(pvVar6);
  if (*(char *)((int)pvVar6 + 0xb1) == '\x01') {
    auVar31 = loadVectorLeftIndexed(0x138,uVar22);
    auVar32 = loadVectorRightIndexed(0x148,uVar22);
    if (*(int *)((int)pvVar6 + 0x138) != 0) {
      auVar34 = loadVectorLeftIndexed(0xffffffffffffb448,0x10c0000);
      auVar33 = vectorConvertFromSignedFixedPointWord(auVar34,0);
      auVar34 = ZEXT416(0xffffffff);
      auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar34 = ZEXT416(0xffffffff);
      auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar34 = loadVectorLeftIndexed(0x48,0x2fa69c);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar31 | auVar32,0);
      auVar31 = ZEXT416(0xffffffff);
      auVar41 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar33,auVar38);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar31,auVar36);
      auVar34 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar33,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar34);
      auVar31 = loadVectorLeftIndexed(0x44,0x2fa69c);
      auVar37 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar32 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar33,auVar38);
      auVar34 = loadVectorLeftIndexed(0xc,0x2fa69c);
      auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar39);
      auVar31 = loadVectorLeftIndexed(0x10,0x2fa69c);
      auVar33 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar31 = ZEXT416(0xffffffff);
      auVar38 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar3 = (float)(longlong)*(int *)((int)pvVar6 + 0x138) *
              (3.1415927 / (float)(longlong)DAT_010bb448);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar40);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar37);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorSubtractFloatingPoint
                          (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar32);
      auVar34 = vectorSubtractFloatingPoint
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar33 = loadVectorLeftIndexed(0x14,0x2fa69c);
      auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
      auVar32 = vectorConditionalSelect(auVar31,auVar32,auVar36);
      auVar31 = ZEXT416(0xffffffff);
      auVar36 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar34);
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = vectorConditionalSelect(auVar34,auVar32,auVar31);
      auVar31 = ZEXT416(0xffffffff);
      auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar10 = fVar4;
      }
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar34);
      fVar3 = fVar10 * fVar10;
      auVar31 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar31);
      fVar4 = fVar3 * fVar3 * fVar10;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar36);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x18,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      fVar12 = fVar3 * fVar4;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar35);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x1c,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x20,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff0c0,0x800000);
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar33 = loadVectorLeftIndexed(0x4c,0x2fa69c);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar31);
      auVar31 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
      fVar3 = DAT_007ff0c0 *
              (fVar3 * fVar12 * 2.601887e-06 +
              fVar12 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10)
      ;
      auVar31 = ((auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60) ^ auVar32) >> 0x60
                & (undefined1  [16])0xffffffff;
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      uVar9 = storeVectorElementWordIndexed(auVar31,0x134,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar9;
      uVar9 = storeVectorElementWordIndexed(auVar31,0x130,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar9;
      fastfunc::FastQuaternionToEuler(-(double)fVar3,uVar22 + 0x100,1);
      fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x130),uVar22 + 0xc0,1);
      fastfunc::FastDecTimerS32(uVar22 + 0x138);
    }
  }
  mobyutil::MB_ColorDyingMoby(moby,uVar21 + 0xa0);
  return;
}



//==== 002fbcb8  ns=mobyupdate_helpers  size=0x160
// sig: undefined M229_002fbcb8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M229_002fbcb8(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x2fbc94);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb448 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb448,0x10c0000);
  auVar1 = loadVectorLeftIndexed(4,0x2fbc94);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb44c = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb44c,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x14,0x2fbc94);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb460 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb460,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x18,0x2fbc94);
  DAT_007ff138 = 0x10000;
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_010bb458 = DAT_0071f408 * 0.1;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  DAT_010bb450 = DAT_0071f408 * 0.13;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  DAT_010bb454 = DAT_0071f40c * 0.005;
  DAT_010bb45c = DAT_0071f40c * 0.005;
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb468 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb468,0x10c0000);
  auVar1 = loadVectorLeftIndexed(0x1c,0x2fbc94);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb464 = DAT_010bb458;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  DAT_010bb46c = DAT_010bb458;
  DAT_010bb470 = DAT_010bb458;
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_010bb474 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xffffffffffffb474,0x10c0000);
  return;
}



//==== 002fbe58  ns=mobyupdate_helpers  size=0x548
// sig: undefined M229_002fbe58(void)
// callers(1): 002fc3f8 mobyupdate_helpers::M229_002fc3f8
// callees(2): 00108180 mobyutil::MB_computeLobVelocity; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M229_002fbe58
               (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

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
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
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
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xe0;
  puVar8 = (ulonglong *)lVar19;
  *puVar8 = uVar16;
  puVar8[0x1e] = in_LR;
  puVar8[0x19] = in_f29;
  puVar8[0x1a] = in_f30;
  puVar8[0x1b] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  puVar8[0x18] = unaff_r31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  if ((double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= param_3
     ) {
    fVar7 = param_5[3];
  }
  else {
    fVar2 = fVar2 - fVar1;
    fVar10 = fVar4 - fVar3;
    fVar11 = fVar6 - fVar5;
    fVar4 = 0.0;
    fVar7 = param_5[3];
    fVar13 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
    fVar12 = (float)(param_3 - 0.009999999776482582) / fVar13;
    fVar6 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    fVar9 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar9 + fVar1;
    fVar4 = fVar4 + fVar3;
  }
  *(float *)((int)puVar8 + 0x7c) = fVar7;
  fVar7 = ABS(fVar4 - fVar3);
  fVar5 = ABS(fVar2 - fVar1);
  *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
  *(float *)(puVar8 + 0xe) = fVar4;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(float *)((int)puVar8 + 0x84) = fVar2 - fVar1;
  *(float *)(puVar8 + 0x11) = fVar7 - fVar5;
  dVar29 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  dVar24 = dVar29;
  if (0.0 < fVar1) {
    lVar18 = uVar16 - 0xd0;
    lVar20 = uVar16 - 0x54;
    lVar22 = uVar16 - 0x44;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x13) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar1 * fVar1;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x54;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar19;
      iVar15 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar25 = (double)fastfunc::FastSubRots(g_heroRotation.z,(float)dVar24);
  dVar26 = (double)g_heroRotation.z;
  fVar1 = *param_4;
  if ((0.8726646304130554 < dVar25) ||
     (fVar3 = param_4[1] - *(float *)((int)puVar8 + 0x74), fVar2 = fVar1 - *(float *)(puVar8 + 0xe),
     SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.5)) {
    fVar2 = (float)(dVar26 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar24 = dVar26;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar24 < 0.0) {
      dVar25 = dVar24;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = (double)(float)(dVar25 * dVar25);
    fVar5 = fVar4 * fVar4;
    dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
    fVar2 = fVar5 * fVar5 * fVar4;
    dVar27 = (double)(float)(dVar28 * dVar24);
    fVar3 = fVar5 * fVar2;
    *(float *)((int)puVar8 + 0x74) =
         ((float)(dVar28 * dVar27) * 2.601887e-06 +
         (float)(dVar27 * -0.0001980741071747616 +
                (double)(float)(dVar24 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar28 * dVar25) *
                                               -0.16666656732559204 + dVar25)))) * 1.5 + param_4[1];
    *(float *)(puVar8 + 0xe) =
         (fVar5 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 1.5 +
         fVar1;
    dVar24 = dVar26;
  }
  fVar1 = (float)(dVar24 + 1.570796251296997);
  dVar25 = (double)(float)(3.141592502593994 - dVar24);
  if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
    dVar25 = dVar24;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar24);
  if ((double)(float)(-3.141592502593994 - dVar24) - dVar25 < 0.0) {
    dVar26 = dVar25;
  }
  dVar24 = (double)(mobyutil::g_FrameTime * 8.5);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar25 = (double)(float)(dVar26 * dVar26);
  fVar4 = fVar3 * fVar3;
  dVar28 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
  param_6[2] = 0.0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar27 = (double)(float)(dVar25 * dVar28);
  fVar2 = fVar4 * fVar1;
  param_6[1] = (float)((double)((float)(dVar25 * dVar27) * 2.601887e-06 +
                               (float)(dVar27 * -0.0001980741071747616 +
                                      (double)(float)(dVar28 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar25 * dVar26
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar26))
                                      )) * dVar24);
  *param_6 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                             fVar2 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar24);
  dVar25 = (double)mobyutil::MB_computeLobVelocity(dVar24,-param_1,param_4,uVar16 - 0x70);
  param_6[2] = (float)dVar25;
  if ((g_downButtons & (L1|L2)) != 0) {
    dVar29 = 1.0;
  }
  fVar1 = (float)(param_1 * (double)(float)((double)(float)(dVar29 + 2.5) / dVar24)) * 0.5;
  if ((double)fVar1 < dVar25) {
    param_6[2] = fVar1;
  }
  return;
}



//==== 002fc3f8  ns=mobyupdate_helpers  size=0xf84
// sig: undefined M229_002fc3f8(void)
// callers(1): 002fd398 mobyupdate_unsorted::UpdateMoby_229
// callees(7): 00057820 collproc::CollLine; 000fe610 mobyutil::MB_SphericalToVector; 002fbe58 mobyupdate_helpers::M229_002fbe58; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M229_002fc3f8
               (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  char acVar17 [4];
  CONTROLLER_INPUT CVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  int iVar22;
  longlong lVar21;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
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
  double dVar33;
  ulonglong in_f16;
  double dVar34;
  ulonglong in_f17;
  double dVar35;
  ulonglong in_f18;
  double dVar36;
  ulonglong in_f19;
  double dVar37;
  ulonglong in_f20;
  double dVar38;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  double dVar40;
  ulonglong in_f23;
  double dVar41;
  ulonglong in_f24;
  double dVar42;
  ulonglong in_f25;
  double dVar43;
  ulonglong in_f26;
  double dVar44;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  float fStack00000040;
  float fStack00000044;
  undefined8 uStack00000048;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x2d0;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar20;
  puVar15[0x5c] = in_LR;
  puVar15[0x4a] = in_f16;
  puVar15[0x4b] = in_f17;
  puVar15[0x4c] = in_f18;
  puVar15[0x4d] = in_f19;
  puVar15[0x4e] = in_f20;
  puVar15[0x4f] = in_f21;
  puVar15[0x50] = in_f22;
  puVar15[0x51] = in_f23;
  puVar15[0x52] = in_f24;
  puVar15[0x53] = in_f25;
  puVar15[0x54] = in_f26;
  puVar15[0x55] = in_f27;
  puVar15[0x56] = in_f28;
  puVar15[0x57] = in_f29;
  puVar15[0x58] = in_f30;
  puVar15[0x59] = in_f31;
  puVar15[0x47] = unaff_r29;
  puVar15[0x46] = unaff_r28;
  puVar15[0x48] = unaff_r30;
  puVar15[0x42] = unaff_r24;
  puVar15[0x45] = unaff_r27;
  puVar15[0x49] = unaff_r31;
  puVar15[0x44] = unaff_r26;
  puVar15[0x43] = unaff_r25;
  _fStack00000040 = param_3;
  uStack00000048 = param_4;
  fastfunc::FastApplyTransform((Vec4 *)(uVar20 - 0x230),(Vec4 *)&GameCamera);
  fastfunc::FastNormalizeRMtx4(uVar20 - 0x200,uVar20 - 0x230);
  fVar10 = DAT_0096a350;
  if (*(int *)(param_2 + 0x50) != 0) {
    fVar9 = ABS(DAT_0096a350);
    dVar45 = 1.0;
    fVar3 = ABS(DAT_0096a354);
    uVar12 = *(undefined4 *)(*(int *)(param_2 + 0x50) + 0x78);
    dVar44 = 0.0;
    dVar43 = -0.3619680106639862;
    dVar49 = (double)DAT_0096a320;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)((int)puVar15 + 0x124) = fVar9 - fVar3;
    dVar48 = (double)DAT_0096a324;
    dVar47 = (double)DAT_0096a328;
    dVar46 = (double)DAT_0096a32c;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x124) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar6 = fVar9;
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar15 + 0x124) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    dVar29 = dVar44;
    if (0.0 < fVar6) {
      lVar25 = uVar20 - 0x2c0;
      lVar27 = uVar20 - 0xd8;
      lVar26 = uVar20 - 0xe8;
      lVar28 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 500) = fVar6;
      *(float *)((int)puVar15 + 0x1ec) = fVar6;
      *(float *)(puVar15 + 0x3e) = fVar6;
      *(float *)(puVar15 + 0x3d) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar15 + 0x1ec) = *(float *)((int)puVar15 + 0x1ec) * fVar3;
      *(float *)(puVar15 + 0x3e) = *(float *)(puVar15 + 0x3e) * fVar6;
      *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1d8) * fVar6 * fVar6;
        iVar22 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe8;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar6 = *pfVar23;
        fVar3 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1e8) = *(float *)((int)lVar25 + 0x1e8) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar3;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      do {
        iVar22 = (int)lVar25;
        iVar16 = (int)lVar27;
        lVar25 = lVar25 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1e8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar10 + fVar2);
    }
    dVar29 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar29);
    fVar3 = DAT_0096a350;
    dVar42 = 1.570796251296997;
    dVar41 = 3.141592502593994;
    fVar10 = (float)(dVar29 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar31 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar29 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar13 = (uint)DAT_0096a354 >> 0x1d;
    fVar6 = 3.1415925 - fVar10;
    if (fVar10 - (3.1415925 - fVar10) < 0.0) {
      fVar6 = fVar10;
    }
    *(float *)(puVar15 + 0x24) = (float)(dVar31 - dVar29);
    fVar9 = -3.1415925 - fVar10;
    if ((-3.1415925 - fVar10) - fVar6 < 0.0) {
      fVar9 = fVar6;
    }
    fVar2 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x24) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
    fVar10 = fVar2 * fVar2 * fVar9;
    fVar6 = fVar2 * fVar10;
    dVar32 = dVar31;
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar32 = dVar29;
    }
    if ((double)*(float *)(puVar15 + 0x24) - dVar44 < 0.0) {
      dVar29 = dVar31;
    }
    fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar31 = dVar44;
    if (dVar44 < dVar32) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x108;
      lVar27 = uVar20 - 0xf8;
      lVar28 = 2;
      fVar4 = (float)(dVar29 - dVar32) / (float)(dVar29 + dVar32);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = fVar4;
      *(float *)((int)puVar15 + 0x1cc) = fVar4;
      *(float *)(puVar15 + 0x3a) = fVar4;
      *(float *)(puVar15 + 0x39) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar15 + 0x1cc) = *(float *)((int)puVar15 + 0x1cc) * fVar5;
      *(float *)(puVar15 + 0x3a) = *(float *)(puVar15 + 0x3a) * fVar4;
      *(float *)((int)puVar15 + 0x1d4) = *(float *)((int)puVar15 + 0x1d4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1b8) * fVar4 * fVar4;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0x108;
      pfVar23 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar26 = lVar27;
      do {
        fVar4 = *pfVar23;
        fVar5 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1c8) = *(float *)((int)lVar25 + 0x1c8) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
        lVar26 = lVar26 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = 2;
      lVar25 = lVar21;
      dVar29 = dVar44;
      do {
        iVar22 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar16 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar22 + 0x1c8)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar31 = (double)((float)(dVar29 + dVar34) * fVar11 + fVar3);
    }
    fStack00000040 =
         (fVar2 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar10 * 0.0083330255 + fVar2 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar43,(float)dVar31);
    dVar32 = ABS(dVar49);
    dVar29 = ABS(dVar48);
    dVar43 = (double)(float)(dVar41 - dVar31);
    if (dVar31 - (double)(float)(dVar41 - dVar31) < 0.0) {
      dVar43 = dVar31;
    }
    fStack00000040 = fStack00000040 + g_heroPosition.x;
    dVar33 = dVar32;
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar33 = dVar29;
    }
    uVar13 = *(uint *)(puVar15 + 0x1e);
    dVar30 = (double)(float)(dVar40 - dVar31);
    if ((double)(float)(dVar40 - dVar31) - dVar43 < 0.0) {
      dVar30 = dVar43;
    }
    if ((double)(float)(dVar32 - dVar29) - dVar44 < 0.0) {
      dVar29 = dVar32;
    }
    dVar43 = (double)(float)(dVar30 * dVar30);
    dVar32 = (double)(float)(dVar43 * (double)(float)(dVar43 * dVar30));
    dVar31 = (double)(float)(dVar43 * dVar32);
    fVar10 = *(float *)(puVar15 + 0x1e);
    uVar14 = *(uint *)((int)puVar15 + 0xf4);
    fVar6 = *(float *)((int)puVar15 + 0xf4);
    uVar7 = *(undefined4 *)(puVar15 + 0x1f);
    uVar8 = *(undefined4 *)((int)puVar15 + 0xfc);
    fStack00000044 =
         (float)((double)(float)((double)(float)(dVar43 * dVar31) * dVar36 +
                                (double)(float)(dVar31 * dVar37 +
                                               (double)(float)(dVar32 * dVar38 +
                                                              (double)(float)((double)(float)(dVar43
                                                                                             * 
                                                  dVar30) * dVar39 + dVar30)))) * dVar35) +
         g_heroPosition.y;
    fVar3 = g_heroPosition.z + 0.39082;
    uStack00000048 = CONCAT44(fVar3,(int)uStack00000048);
    if (dVar44 < dVar33) {
      lVar25 = uVar20 - 0x2c0;
      lVar26 = uVar20 - 0x128;
      lVar27 = uVar20 - 0x118;
      lVar28 = 2;
      fVar9 = (float)(dVar29 - dVar33) / (float)(dVar29 + dVar33);
      fVar2 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = fVar9;
      *(float *)((int)puVar15 + 0x1ac) = fVar9;
      *(float *)(puVar15 + 0x36) = fVar9;
      *(float *)(puVar15 + 0x35) = fVar9;
      fVar9 = fVar2 * fVar2;
      *(float *)((int)puVar15 + 0x1ac) = *(float *)((int)puVar15 + 0x1ac) * fVar2;
      *(float *)(puVar15 + 0x36) = *(float *)(puVar15 + 0x36) * fVar9;
      *(float *)((int)puVar15 + 0x1b4) = *(float *)((int)puVar15 + 0x1b4) * fVar9 * fVar2;
      do {
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x198) * fVar9 * fVar9;
        iVar22 = (int)lVar26;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      pfVar23 = (float *)&DAT_007358e0;
      lVar26 = uVar20 - 0x128;
      lVar27 = 4;
      lVar25 = lVar21;
      do {
        fVar9 = *pfVar23;
        fVar2 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar25 + 0x1a8) = *(float *)((int)lVar25 + 0x1a8) * fVar9;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
    bVar1 = (g_downButtons & (L1|L2)) == 0;
    dVar43 = dVar44;
    if (!bVar1) {
      dVar43 = dVar45;
    }
    dVar29 = 2.5;
    *(float *)((int)puVar15 + 0x7c) = (float)dVar46;
    dVar43 = (double)(float)(dVar43 + 2.5);
    *(float *)(puVar15 + 0xe) = (float)(dVar49 * dVar43 + (double)fStack00000040);
    *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * dVar43 + (double)fStack00000044);
    *(float *)(puVar15 + 0xf) = (float)(dVar47 * dVar43 + (double)fVar3);
    pMVar19 = g_heroMobyPtr;
    if ((bVar1) || (DAT_0096bd8c != '\0')) {
      DAT_0096a730 = 0;
    }
    else {
      dVar47 = ABS((double)fVar10);
      dVar43 = ABS((double)fVar6);
      *(float *)(puVar15 + 0x10) = fVar10;
      *(float *)((int)puVar15 + 0x84) = fVar6;
      *(undefined4 *)(puVar15 + 0x11) = uVar7;
      *(undefined4 *)((int)puVar15 + 0x8c) = uVar8;
      fVar10 = (pMVar19->rotation).z;
      *(float *)((int)puVar15 + 0x11c) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(uVar13 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x11c) >> 0x1e) & 2 |
               (ulonglong)(uVar14 >> 0x1d) & 4;
      dVar46 = dVar47;
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x11c) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x138;
        lVar26 = uVar20 - 0x148;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x194) = fVar9;
        *(float *)((int)puVar15 + 0x18c) = fVar9;
        *(float *)(puVar15 + 0x32) = fVar9;
        *(float *)(puVar15 + 0x31) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x18c) = *(float *)((int)puVar15 + 0x18c) * fVar2;
        *(float *)(puVar15 + 0x32) = *(float *)(puVar15 + 0x32) * fVar9;
        *(float *)((int)puVar15 + 0x194) = *(float *)((int)puVar15 + 0x194) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x178) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x148;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x188) = *(float *)((int)lVar25 + 0x188) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x188)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      fastfunc::FastDiffRots((double)fVar10,dVar47);
      dVar47 = (double)*(float *)(puVar15 + 0x10);
      dVar48 = (double)*(float *)((int)puVar15 + 0x84);
      dVar49 = ABS(dVar47);
      dVar43 = ABS(dVar48);
      uVar13 = *(uint *)(puVar15 + 0x11);
      *(float *)(puVar15 + 0x23) = (float)(dVar49 - dVar43);
      CVar18 = g_downButtons;
      fVar10 = *(float *)(puVar15 + 0x11);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x23) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x84) >> 0x1d) & 4;
      dVar46 = dVar49;
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)(puVar15 + 0x23) - dVar44 < 0.0) {
        dVar43 = dVar49;
      }
      fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar49 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x158;
        lVar26 = uVar20 - 0x168;
        lVar28 = 2;
        fVar9 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x174) = fVar9;
        *(float *)((int)puVar15 + 0x16c) = fVar9;
        *(float *)(puVar15 + 0x2e) = fVar9;
        *(float *)(puVar15 + 0x2d) = fVar9;
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar15 + 0x16c) = *(float *)((int)puVar15 + 0x16c) * fVar2;
        *(float *)(puVar15 + 0x2e) = *(float *)(puVar15 + 0x2e) * fVar9;
        *(float *)((int)puVar15 + 0x174) = *(float *)((int)puVar15 + 0x174) * fVar9 * fVar2;
        do {
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x158) * fVar9 * fVar9;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x168;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar9 = *pfVar23;
          fVar2 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x168) = *(float *)((int)lVar25 + 0x168) * fVar9;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar2;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x168)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar49 = (double)((float)(dVar43 + dVar34) * fVar6 + fVar3);
      }
      dVar43 = ABS((double)fVar10);
      fVar10 = SQRT((float)(dVar47 * dVar47 + (double)(float)(dVar48 * dVar48)));
      dVar47 = ABS((double)fVar10);
      *(float *)(puVar15 + 0x22) = fVar10;
      *(float *)((int)puVar15 + 0x114) = (float)(dVar47 - dVar43);
      uVar24 = (ulonglong)(*(uint *)(puVar15 + 0x22) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x114) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      dVar46 = ABS((double)*(float *)(puVar15 + 0x22));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar46 = dVar43;
      }
      fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
      if ((double)*(float *)((int)puVar15 + 0x114) - dVar44 < 0.0) {
        dVar43 = dVar47;
      }
      fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      dVar47 = dVar44;
      if (dVar44 < dVar46) {
        lVar25 = uVar20 - 0x2c0;
        lVar27 = uVar20 - 0x178;
        lVar26 = uVar20 - 0x188;
        lVar28 = 2;
        fVar3 = (float)(dVar43 - dVar46) / (float)(dVar43 + dVar46);
        fVar9 = fVar3 * fVar3;
        *(float *)((int)puVar15 + 0x154) = fVar3;
        *(float *)((int)puVar15 + 0x14c) = fVar3;
        *(float *)(puVar15 + 0x2a) = fVar3;
        *(float *)(puVar15 + 0x29) = fVar3;
        fVar3 = fVar9 * fVar9;
        *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar9;
        *(float *)(puVar15 + 0x2a) = *(float *)(puVar15 + 0x2a) * fVar3;
        *(float *)((int)puVar15 + 0x154) = *(float *)((int)puVar15 + 0x154) * fVar3 * fVar9;
        do {
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x138) * fVar3 * fVar3;
          iVar22 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
          lVar27 = lVar27 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar27 = uVar20 - 0x188;
        pfVar23 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar26 = lVar27;
        do {
          fVar3 = *pfVar23;
          fVar9 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar25 + 0x148) = *(float *)((int)lVar25 + 0x148) * fVar3;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar26 = 2;
        lVar25 = lVar21;
        dVar43 = dVar44;
        do {
          iVar22 = (int)lVar25;
          iVar16 = (int)lVar27;
          lVar25 = lVar25 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar43 = (double)((float)(dVar43 + (double)*(float *)(iVar22 + 0x148)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar47 = (double)((float)(dVar43 + dVar34) * fVar10 + fVar6);
      }
      if (0.593411922454834 - dVar47 < 0.0) {
        dVar47 = 0.593411922454834;
      }
      if (dVar47 - -1.3962633609771729 < 0.0) {
        dVar47 = -1.3962633609771729;
      }
      dVar34 = dVar44;
      if ((CVar18 & (L1|L2)) != 0) {
        dVar34 = dVar45;
      }
      mobyutil::MB_SphericalToVector
                ((float)(dVar34 + dVar29),(float)dVar49,(float)dVar47,(float *)(puVar15 + 0x10));
      dVar43 = (double)SQRT(*(float *)(puVar15 + 0x10) * *(float *)(puVar15 + 0x10) +
                            *(float *)((int)puVar15 + 0x84) * *(float *)((int)puVar15 + 0x84));
      dVar34 = 0.009999999776482582;
      if (dVar44 - dVar43 < 0.0) {
        dVar34 = dVar43;
      }
      if (dVar43 - dVar44 < 0.0) {
        dVar34 = dVar43;
      }
      dVar43 = dVar44;
      if ((g_downButtons & (L1|L2)) != 0) {
        dVar43 = dVar45;
      }
      fVar10 = SQRT(DAT_0071f418 * 9.0 * (float)(dVar43 + dVar29) * 0.5);
      dVar43 = (double)((fVar10 * 2.0 * fVar10 *
                        (float)(dVar45 - (double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34
                                                        ))) / (DAT_0071f418 * 9.0));
      fVar10 = (float)((double)(float)((double)*(float *)(puVar15 + 0x11) / dVar34) * dVar43);
      dVar34 = (double)fVar10;
      if (dVar44 < dVar43) {
        dVar47 = (double)(float)(dVar49 + dVar42);
        dVar46 = (double)(float)(dVar41 - dVar49);
        if (dVar49 - (double)(float)(dVar41 - dVar49) < 0.0) {
          dVar46 = dVar49;
        }
        dVar48 = (double)(float)(dVar41 - dVar47);
        if (dVar47 - (double)(float)(dVar41 - dVar47) < 0.0) {
          dVar48 = dVar47;
        }
        dVar31 = (double)(float)(dVar40 - dVar49);
        if ((double)(float)(dVar40 - dVar49) - dVar46 < 0.0) {
          dVar31 = dVar46;
        }
        dVar46 = (double)(float)(dVar40 - dVar47);
        if ((double)(float)(dVar40 - dVar47) - dVar48 < 0.0) {
          dVar46 = dVar48;
        }
        dVar48 = (double)(float)(dVar31 * dVar31);
        dVar35 = (double)(float)(dVar46 * dVar46);
        dVar32 = (double)(float)(dVar48 * (double)(float)(dVar48 * dVar31));
        dVar40 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar46));
        dVar42 = (double)(float)(dVar48 * dVar32);
        dVar33 = (double)(float)(dVar35 * dVar40);
        dVar47 = (double)GameCamera.posX;
        dVar49 = (double)GameCamera.posY;
        dVar41 = (double)GameCamera.posZ;
        *(float *)(puVar15 + 0x11) = fVar10;
        acVar17 = GameCamera.field8_0x14c;
        fVar10 = (float)((double)(float)((double)(float)(dVar48 * dVar42) * dVar36 +
                                        (double)(float)(dVar42 * dVar37 +
                                                       (double)(float)(dVar32 * dVar38 +
                                                                      (double)(float)((double)(float
                                                  )(dVar48 * dVar31) * dVar39 + dVar31)))) * dVar43)
        ;
        dVar48 = (double)fVar10;
        fVar6 = (float)((double)(float)((double)(float)(dVar35 * dVar33) * dVar36 +
                                       (double)(float)(dVar33 * dVar37 +
                                                      (double)(float)(dVar40 * dVar38 +
                                                                     (double)(float)((double)(float)
                                                  (dVar35 * dVar46) * dVar39 + dVar46)))) * dVar43);
        dVar43 = (double)fVar6;
        *(float *)((int)puVar15 + 0x84) = fVar10;
        *(float *)(puVar15 + 0x13) = (float)(dVar41 + dVar34);
        *(char (*) [4])((int)puVar15 + 0x9c) = acVar17;
        *(float *)(puVar15 + 0x10) = fVar6;
        *(float *)((int)puVar15 + 0x94) = (float)(dVar49 + dVar48);
        *(float *)(puVar15 + 0x12) = (float)(dVar47 + dVar43);
        iVar22 = collproc::CollLine(0x951500,uVar20 - 0x240,2,param_1,0);
        fVar10 = CollOutput.ip.y;
        if ((iVar22 == 0) || (CollOutput.pMoby == g_heroMobyPtr)) {
          fVar10 = (float)(dVar43 * 5.0) + GameCamera.posX;
          fVar6 = (float)(dVar48 * 5.0) + GameCamera.posY;
          fVar3 = (float)(dVar34 * 5.0) + GameCamera.posZ;
          *(float *)(puVar15 + 0xe) = (float)(dVar43 * 5.0);
          *(float *)((int)puVar15 + 0x74) = (float)(dVar48 * 5.0);
          *(float *)(puVar15 + 0xf) = (float)(dVar34 * 5.0);
          *(float *)(puVar15 + 0xe) = fVar10;
          *(float *)((int)puVar15 + 0x74) = fVar6;
          *(float *)(puVar15 + 0xf) = fVar3;
        }
        else {
          fVar6 = CollOutput.ip.x - fStack00000040;
          fVar3 = CollOutput.ip.y - fStack00000044;
          *(float *)(puVar15 + 0xe) = CollOutput.ip.x;
          fVar9 = CollOutput.ip.z;
          *(float *)((int)puVar15 + 0x74) = fVar10;
          fVar10 = CollOutput.ip.w;
          *(float *)(puVar15 + 0xf) = fVar9;
          *(float *)((int)puVar15 + 0x7c) = fVar10;
          dVar46 = ABS((double)fVar6);
          dVar34 = ABS((double)fVar3);
          dVar43 = dVar46;
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar43 = dVar34;
          }
          if ((double)(float)(dVar46 - dVar34) - dVar44 < 0.0) {
            dVar34 = dVar46;
          }
          if (dVar44 < dVar43) {
            lVar25 = uVar20 - 0x2c0;
            lVar27 = uVar20 - 0x198;
            lVar26 = uVar20 - 0x1a8;
            lVar28 = 2;
            fVar10 = (float)(dVar34 - dVar43) / (float)(dVar34 + dVar43);
            fVar6 = fVar10 * fVar10;
            *(float *)((int)puVar15 + 0x134) = fVar10;
            *(float *)((int)puVar15 + 300) = fVar10;
            *(float *)(puVar15 + 0x26) = fVar10;
            *(float *)(puVar15 + 0x25) = fVar10;
            fVar10 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar6;
            *(float *)(puVar15 + 0x26) = *(float *)(puVar15 + 0x26) * fVar10;
            *(float *)((int)puVar15 + 0x134) = *(float *)((int)puVar15 + 0x134) * fVar10 * fVar6;
            do {
              *(float *)((int)lVar25 + 0x128) = *(float *)((int)lVar25 + 0x118) * fVar10 * fVar10;
              iVar22 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar10 * fVar10;
              lVar27 = lVar27 + 8;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            pfVar23 = (float *)&DAT_007358e0;
            lVar25 = uVar20 - 0x1a8;
            lVar26 = 4;
            do {
              fVar10 = *pfVar23;
              fVar6 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar21 + 0x128) = *(float *)((int)lVar21 + 0x128) * fVar10;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
      }
    }
    if ((g_downButtons & (L1|L2)) != 0) {
      dVar44 = dVar45;
    }
    M229_002fbe58((double)(DAT_0071f418 * 9.0),0x3ee4f8b580000000,(double)(float)(dVar44 + dVar29),
                  uVar20 + 0x40 & 0xffffffff,uVar20 - 0x260,uVar12);
  }
  return;
}



//==== 002fd398  ns=mobyupdate_unsorted  size=0x520
// sig: undefined UpdateMoby_229(MobyInstance * moby)
// callers(0): 
// callees(11): 000816ec hero::Hero_PlaySound; 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 0015d12c sound::PlayMobySound; 002fc3f8 mobyupdate_helpers::M229_002fc3f8; 002fe338 FUN_002fe338; 002fe4e8 FUN_002fe4e8; 004fff60 fastfunc::FastDecTimerS32
// strings: 00a0fdc4: 'None'

/* Moby 229 */

void mobyupdate_unsorted::UpdateMoby_229(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  void *pvVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  
  dVar10 = -0.14000000059604645;
  dVar9 = 0.009999999776482582;
  pvVar3 = moby->pVar;
  uVar7 = ZEXT48(pvVar3);
  dVar8 = -0.05000000074505806;
  mobyfunc::GetBonePosition(moby,0,&local_a0);
  mobyfunc::GetBoneTransformations(moby,0,&local_80);
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  *(float *)((int)pvVar3 + 0x40) =
       local_a0 +
       (float)((double)local_60 * dVar8 +
              (double)(float)((double)local_80 * dVar9 + (double)(float)((double)local_70 * dVar10))
              );
  *(float *)((int)pvVar3 + 0x44) =
       local_9c +
       (float)((double)local_5c * dVar8 +
              (double)(float)((double)local_7c * dVar9 + (double)(float)((double)local_6c * dVar10))
              );
  *(float *)((int)pvVar3 + 0x48) =
       local_98 +
       (float)((double)local_58 * dVar8 +
              (double)(float)((double)local_78 * dVar9 + (double)(float)((double)local_68 * dVar10))
              );
  *(undefined4 *)((int)pvVar3 + 0x4c) = local_94;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x98) = 1;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
  }
  if (((iVar5 == 0) || (*(char *)(iVar5 + 0x20) == -2)) || (*(char *)(iVar5 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar3 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  iVar5 = fastfunc::FastDecTimerS32(uVar7 + 0x54);
  if (((iVar5 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' && (DAT_00969e9c == (int)(animationSpeed * 17.5))) ||
       ((g_heroState == WEAPON_FIRST_PERSON_VIEW && (g_buttonsPressedThisFrame & DAT_0096ad80) != 0
        && (iVar5 = hero::Hero_GetWeaponAmmo(-1), iVar5 != 0)))) ||
      ((g_heroState == THROWING_ITEM && (hero::g_heroStateTimer == (int)(animationSpeed * 16.5))))))
     ) {
    hero::Hero_PlaySound(0x1a,0);
    hero::hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  mobyupdate_helpers::M229_002fc3f8
            (moby,uVar7,*(undefined8 *)((int)pvVar3 + 0x40),*(undefined8 *)((int)pvVar3 + 0x48));
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    return;
  }
  if (uVar1 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    if (*(int *)((int)pvVar3 + 0x50) == 0) {
      sound::PlayMobySound(0,0,moby);
    }
    else {
      if (CHAR_ARRAY_00a0fdc4._0_2_ != -1) {
        CHAR_ARRAY_00a0fdc4._0_2_ = CHAR_ARRAY_00a0fdc4._0_2_ + 1;
      }
      iVar5 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a0fdc4._2_2_ < iVar5 / 600) {
        sVar4 = (short)(iVar5 >> 0x1f);
        CHAR_ARRAY_00a0fdc4._2_2_ =
             ((short)(iVar5 / 600) + sVar4) - ((short)((short)(iVar5 / 0x2580000) + sVar4) >> 0xf);
      }
      CHAR_ARRAY_00a0fdc4._4_4_ = CHAR_ARRAY_00a0fdc4._4_4_ | 1 << (Level & 0x3f) | 0x80000000;
      FUN_002fe4e8(uVar7 + 0x40,*(int *)((int)pvVar3 + 0x50),
                   *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + 0x78));
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
    }
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    moby->state = '\x04';
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    auVar11 = loadVectorLeftIndexed(0x18,0x2fd37c);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x54,uVar7);
    *(undefined4 *)((int)pvVar3 + 0x54U & 0xfffffffc) = uVar6;
  }
  else if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      bVar2 = moby->field43_0x70;
    }
    else {
      if (uVar1 != '\0') goto LAB_002fd828;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      bVar2 = moby->field43_0x70;
      moby->state = (char)((LZCOUNT(-(bVar2 & 2)) << 0x3a) >> 0x3f) + '\x02';
    }
    if ((bVar2 & 2) != 0) {
      moby->state = '\x02';
    }
  }
LAB_002fd828:
  iVar5 = *(int *)((int)pvVar3 + 0x50);
  if (iVar5 == 0) {
    iVar5 = hero::Hero_GetWeaponAmmo(-1);
    if (iVar5 != 0) {
      uVar6 = FUN_002fe338(moby,uVar7 + 0x40,auStack_90);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar6;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x40);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)((int)pvVar3 + 0x44);
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x48);
    *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)((int)pvVar3 + 0x4c);
  }
  return;
}



//==== 002fd8b8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M229_002fd8b8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M229_002fd8b8(void)

{
  DAT_007ff1a8 = 0x10000;
  return;
}



//==== 002fd8e0  ns=mobyupdate_unsorted  size=0x158
// sig: undefined UpdateMoby_23(MobyInstance * moby)
// callers(0): 
// callees(4): 0007b310 help::Help_QueueMessage; 000e8aa4 memcard::memcard_Save; 000efb38 mobyfunc::DeleteMoby; 00502578 fastfunc::FastWrapRot
// strings: 0096c165: 'None'

/* Moby 23 */

void mobyupdate_unsorted::UpdateMoby_23(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (UnlockableItems.o2Mask == '\0') {
      fVar2 = (moby->pos).z;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | DISABLED;
      (moby->pos).z = fVar2 + 0.75;
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (((1 < bVar1) && (bVar1 < 3)) &&
          (fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 4.712389),
          fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
          SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)) {
    UnlockableItems.o2Mask = '\x01';
    CHAR_ARRAY_0096c165[6] = '\x01';
    memcard::memcard_Save(0,-1);
    help::Help_QueueMessage(STR_THE_O2_MASK_ALLOWS_0x2AF8,0x3a);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002fda40  ns=mobyupdate_helpers  size=0x40
// sig: undefined M230_002fda40(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M230_002fda40(int param_1)

{
  float fVar1;
  
  if (*(short *)(param_1 + 0xa6) == 0x17) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    *(undefined1 *)(param_1 + 0x20) = 2;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(float *)(param_1 + 0x2c) = fVar1 * 1.5;
  }
  return;
}



//==== 002fda80  ns=mobyupdate_helpers  size=0x14
// sig: undefined M230_002fda80(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M230_002fda80(void)

{
  DAT_007ff218 = 0x10000;
  return;
}



//==== 002fdab8  ns=mobyupdate_helpers  size=0x61c
// sig: undefined M230_002fdab8(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 00502648 fastfunc::FastAddRots; 00502730 fastfunc::FastIntToDouble; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M230_002fdab8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r26;
  longlong lVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x240;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar14;
  puVar10[0x4a] = in_LR;
  puVar10[0x46] = in_f30;
  puVar10[0x47] = in_f31;
  puVar10[0x45] = unaff_r31;
  gVar13 = g_gameMode;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar10[0x44] = unaff_r30;
  puVar10[0x43] = unaff_r29;
  puVar10[0x42] = unaff_r28;
  puVar10[0x41] = unaff_r27;
  puVar10[0x40] = unaff_r26;
  if (gVar13 != GAME_MODE_SCENE) {
    uVar20 = 0;
    do {
      uVar8 = *(uint *)(iVar7 + 0x24);
      fVar6 = ABS(*(float *)(iVar7 + 0x24));
      fVar3 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                   *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      fVar2 = ABS(fVar3);
      *(float *)((int)puVar10 + 0x1a4) = fVar3;
      *(float *)(puVar10 + 0x35) = fVar2 - fVar6;
      dVar25 = 0.0;
      dVar26 = 0.7853981852531433;
      uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x1a4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x35) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar10 + 0x1a4));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      if (*(float *)(puVar10 + 0x35) - 0.0 < 0.0) {
        fVar6 = fVar2;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar22 = dVar25;
      if (0.0 < fVar3) {
        lVar19 = uVar14 - 0x230;
        lVar16 = uVar14 - 0x74;
        lVar18 = uVar14 - 100;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)(puVar10 + 0x3b) = fVar3;
        *(float *)(puVar10 + 0x3a) = fVar3;
        *(float *)((int)puVar10 + 0x1d4) = fVar3;
        *(float *)((int)puVar10 + 0x1cc) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)(puVar10 + 0x3a) = *(float *)(puVar10 + 0x3a) * fVar6;
        *(float *)((int)puVar10 + 0x1d4) = *(float *)((int)puVar10 + 0x1d4) * fVar3;
        *(float *)(puVar10 + 0x3b) = *(float *)(puVar10 + 0x3b) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1bc) * fVar3 * fVar3;
          iVar11 = (int)lVar16;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x74;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1cc) = *(float *)((int)lVar19 + 0x1cc) * fVar3;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar12 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar11 + 0x1cc)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar22 = (double)fastfunc::FastWrapRot((float)-dVar22,1.5707964);
      *(float *)(puVar10 + 0xe) = (float)dVar22;
      uVar8 = *(uint *)(iVar7 + 0x28);
      uVar9 = *(uint *)(iVar7 + 0x20);
      dVar23 = ABS((double)*(float *)(iVar7 + 0x28));
      dVar22 = ABS((double)*(float *)(iVar7 + 0x20));
      *(float *)(puVar10 + 0x34) = (float)(dVar23 - dVar22);
      uVar15 = (ulonglong)(uVar8 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x34) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      dVar24 = dVar23;
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar24 = dVar22;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if ((double)*(float *)(puVar10 + 0x34) - dVar25 < 0.0) {
        dVar22 = dVar23;
      }
      if (dVar25 < dVar24) {
        lVar19 = uVar14 - 0x230;
        lVar18 = uVar14 - 0x84;
        lVar16 = uVar14 - 0x94;
        lVar21 = 2;
        fVar2 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar10 + 0x37) = fVar2;
        *(float *)(puVar10 + 0x36) = fVar2;
        *(float *)((int)puVar10 + 0x1b4) = fVar2;
        *(float *)((int)puVar10 + 0x1ac) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)(puVar10 + 0x36) = *(float *)(puVar10 + 0x36) * fVar5;
        *(float *)((int)puVar10 + 0x1b4) = *(float *)((int)puVar10 + 0x1b4) * fVar2;
        *(float *)(puVar10 + 0x37) = *(float *)(puVar10 + 0x37) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x19c) * fVar2 * fVar2;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar18 = uVar14 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar16 = lVar18;
        do {
          fVar2 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0x1ac) = *(float *)((int)lVar19 + 0x1ac) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar19 = lVar1;
        do {
          iVar11 = (int)lVar19;
          iVar12 = (int)lVar18;
          lVar19 = lVar19 + 0x10;
          lVar18 = lVar18 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar11 + 0x1ac)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar25 = (double)((float)(dVar25 + dVar26) * fVar6 + fVar3);
      }
      *(float *)((int)puVar10 + 0x74) = (float)dVar25;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)((int)puVar10 + 0x7c) = 0;
      *(undefined4 *)(puVar10 + 0x10) = 0;
      iVar11 = worldUpdateTime;
      puVar10[0x3e] = (longlong)(int)(animationSpeed * 180.5);
      dVar25 = (double)fastfunc::FastIntToDouble
                                 (iVar11 - (iVar11 / *(int *)((int)puVar10 + 500)) *
                                           *(int *)((int)puVar10 + 500));
      dVar26 = (double)fastfunc::FastAddRots
                                 ((float)(dVar25 * 6.2831854820251465) / (animationSpeed * 180.0));
      dVar22 = 1.0;
      dVar25 = dVar22;
      if ((uVar20 & 1) != 0) {
        dVar25 = -1.0;
      }
      *(undefined4 *)(puVar10 + 0x11) = 0;
      *(undefined4 *)((int)puVar10 + 0x8c) = 0;
      *(float *)((int)puVar10 + 0x84) = (float)(dVar26 * dVar25);
      fastfunc::FastEulerToMtx1(uVar14 - 0x170,uVar14 - 0x1c0);
      lVar19 = uVar14 - 0x1b0;
      fastfunc::FastEulerToMtx1(lVar19,uVar14 - 0x1d0);
      fastfunc::FastVecMtx4Mul(lVar19,lVar19,uVar14 - 0x170);
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(iVar7 + 0x10);
      *(undefined4 *)((int)puVar10 + 0xc4) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(puVar10 + 0x19) = *(undefined4 *)(iVar7 + 0x18);
      uVar4 = *(undefined4 *)(iVar7 + 0x1c);
      *(undefined4 *)(puVar10 + 0x2a) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0xcc) = uVar4;
      *(undefined4 *)((int)puVar10 + 0x154) = 0x80808080;
      *(undefined4 *)(puVar10 + 0x2b) = 0x80808080;
      *(undefined4 *)((int)puVar10 + 0x15c) = 0x80808080;
      uVar15 = draw::GetEffectTex(((LZCOUNT(-(uVar20 & 1)) << 0x3a) >> 0x3f) + 0x12);
      puVar10[0x31] = uVar15;
      uVar15 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      puVar10[0x32] = uVar15;
      uVar15 = FUN_00502f08(0,0,0,0,0,0);
      puVar10[0x30] = uVar15;
      uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
      puVar10[0x33] = uVar15;
      *(undefined4 *)((int)puVar10 + 0x114) = 0;
      *(undefined4 *)(puVar10 + 0x22) = 0xbf800000;
      *(float *)(puVar10 + 0x23) = (float)dVar22;
      *(float *)((int)puVar10 + 0x11c) = (float)dVar22;
      *(float *)(puVar10 + 0x24) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x124) = 0;
      *(float *)(puVar10 + 0x25) = (float)dVar22;
      *(float *)((int)puVar10 + 300) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x26) = 0xbf800000;
      *(undefined4 *)((int)puVar10 + 0x134) = 0;
      *(undefined4 *)(puVar10 + 0x27) = 0xbf800000;
      *(float *)((int)puVar10 + 0x13c) = (float)dVar22;
      *(float *)(puVar10 + 0x28) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x144) = 0;
      *(undefined4 *)(puVar10 + 0x29) = 0xbf800000;
      *(float *)((int)puVar10 + 0x14c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      *(float *)((int)puVar10 + 0x164) = (float)dVar22;
      *(float *)(puVar10 + 0x2d) = (float)dVar22;
      *(float *)((int)puVar10 + 0x16c) = (float)dVar22;
      *(undefined4 *)(puVar10 + 0x2e) = 0;
      *(undefined4 *)((int)puVar10 + 0x174) = 0;
      *(float *)(puVar10 + 0x2f) = (float)dVar22;
      *(undefined4 *)((int)puVar10 + 0x17c) = 0;
      draw::FastDrawQuad(uVar14 - 0x130,lVar19,1,EffectTexHeaders,9);
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < 2);
  }
  return;
}



//==== 002fe0f0  ns=mobyupdate_helpers  size=0x244
// sig: undefined M230_002fe0f0(void)
// callers(1): 002ff240 mobyupdate_unsorted::UpdateMoby_230
// callees(4): 00060780 collproc::CollHotspot; 000fcbe8 mobyutil::MB_randRangeFloat; 00121a40 partupd::SpawnPart_5; 005c8318 rand

void mobyupdate_helpers::M230_002fe0f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_r7;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 local_80 [32];
  
  iVar1 = collproc::CollHotspot();
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 < 0) {
        return;
      }
    }
    else if (iVar1 < 3) {
      return;
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 != 8) {
      return;
    }
  }
  else if (0xd < iVar1) {
    return;
  }
  iVar1 = 0;
  dVar7 = -0.30000001192092896;
  dVar8 = 0.30000001192092896;
  dVar9 = 100000.0;
  dVar10 = 800000.0;
  dVar11 = 0.5;
  uVar12 = 0;
  do {
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar8);
    iVar2 = rand();
    iVar3 = rand();
    uVar4 = rand();
    uVar6 = mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar10);
    iVar5 = rand();
    partupd::SpawnPart_5
              (uVar6,uVar12,local_80,(longlong)iVar2 + 0x30U & 0x3f,(longlong)iVar3 + 0x20U & 0x3f,
               uVar4 & 0x2f,in_r7,
               (int)(animationSpeed * (float)((double)(longlong)(iVar5 % 0x28 + 10) + dVar11)));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  *(undefined1 *)(param_1 + 0x20) = 4;
  return;
}



//==== 002fe338  ns=Global  size=0x19c
// sig: undefined FUN_002fe338(void)
// callers(1): 002fd398 mobyupdate_unsorted::UpdateMoby_229
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_002fe338(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  f32 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  MobyInstance *pMVar5;
  ulonglong uVar6;
  
  pMVar5 = mobyfunc::CreateMoby(BOMB_00E6);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->enabled = '\x01';
    pMVar5->state = '\0';
    puVar3 = (undefined4 *)pMVar5->pVar;
    (pMVar5->pos).x = *param_2;
    (pMVar5->pos).y = param_2[1];
    (pMVar5->pos).z = param_2[2];
    fVar1 = param_2[3];
    pMVar5->drawDistance = 0xff;
    (pMVar5->pos).w = fVar1;
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    uVar2 = param_3[2];
    puVar3[0xc] = param_1;
    puVar3[2] = uVar2;
    uVar2 = param_3[3];
    puVar3[0xd] = 0;
    puVar3[3] = uVar2;
    *(undefined2 *)(puVar3 + 0xe) = 0;
    pMVar5->scale = pMVar5->pClass->gScale * 0.01;
    if ((hero::g_heroInvisible != '\0') || (DAT_0096bd8f != '\0')) {
      pMVar5->modeBits = pMVar5->modeBits | (UNK_40|DISABLED);
    }
    uVar6 = (ulonglong)DAT_010bb478;
    iVar4 = (&DAT_007ff23c)[DAT_010bb478];
    if (((iVar4 != 0) && (*(short *)(iVar4 + 0xa6) == 0xe6)) &&
       (*(char *)(iVar4 + 0x20) != -3 && *(char *)(iVar4 + 0x20) != -2)) {
      *(undefined1 *)(iVar4 + 0x20) = 4;
      uVar6 = (ulonglong)DAT_010bb478;
    }
    *(MobyInstance **)((int)&DAT_007ff23c + (int)(uVar6 << 2)) = pMVar5;
    DAT_010bb478 = ((int)uVar6 + 1) % 0x14;
  }
  return;
}



//==== 002fe4e8  ns=Global  size=0x22c
// sig: undefined FUN_002fe4e8(void)
// callers(1): 002fd398 mobyupdate_unsorted::UpdateMoby_229
// callees(3): 00057820 collproc::CollLine; 001122ac mobyutil::MB_GetPlatformParent; 00500608 fastfunc::FastVecNormalize

void FUN_002fe4e8(undefined4 *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined1 local_30 [16];
  
  iVar11 = g_standingOnMoby;
  pfVar1 = *(float **)(param_2 + 0x78);
  *pfVar1 = *param_3;
  pfVar1[1] = param_3[1];
  pfVar1[2] = param_3[2];
  pfVar1[3] = param_3[3];
  if ((iVar11 != 0) && (iVar11 = mobyutil::MB_GetPlatformParent(), iVar11 != 0)) {
    *pfVar1 = *pfVar1 + DAT_00969de0;
    pfVar1[1] = pfVar1[1] + DAT_00969de4;
    pfVar1[2] = pfVar1[2] + DAT_00969de8;
  }
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  pMVar7 = g_heroMobyPtr;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar11 = collproc::CollLine(local_30,param_1,0,pMVar7,0);
  fVar8 = CollOutput.ip.x;
  if (iVar11 != 0) {
    *(float *)(param_2 + 0x10) = CollOutput.ip.x;
    fVar9 = CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = CollOutput.ip.y;
    fVar10 = CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = CollOutput.ip.w;
    fVar3 = 0.0;
    fVar2 = SQRT(CollOutput.normal.z * CollOutput.normal.z +
                 CollOutput.normal.x * CollOutput.normal.x +
                 CollOutput.normal.y * CollOutput.normal.y);
    fVar6 = (DAT_0071f418 * 9.0 - DAT_0071f418 * 0.1) / fVar2;
    fVar4 = fVar3;
    if (0.0 - fVar2 < 0.0) {
      fVar4 = CollOutput.normal.z * fVar6;
    }
    fVar5 = fVar3;
    if (0.0 - fVar2 < 0.0) {
      fVar5 = CollOutput.normal.y * fVar6;
    }
    if (0.0 - fVar2 < 0.0) {
      fVar3 = CollOutput.normal.x * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar4 = CollOutput.normal.z * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar5 = CollOutput.normal.y * fVar6;
    }
    if (fVar2 - 0.0 < 0.0) {
      fVar3 = CollOutput.normal.x * fVar6;
    }
    *(float *)(param_2 + 0x18) = fVar10 + fVar4;
    *(float *)(param_2 + 0x14) = fVar9 + fVar5;
    *(float *)(param_2 + 0x10) = fVar8 + fVar3;
    fastfunc::FastVecNormalize(pfVar1,pfVar1,0xa10980);
    *pfVar1 = *pfVar1 * 0.6;
    pfVar1[1] = pfVar1[1] * 0.6;
    pfVar1[2] = pfVar1[2] * 0.6;
  }
  *(undefined1 *)(param_2 + 0x20) = 2;
  return;
}



//==== 002fe758  ns=mobyupdate_helpers  size=0xa84
// sig: undefined M230_002fe758(void)
// callers(1): 002ff240 mobyupdate_unsorted::UpdateMoby_230
// callees(7): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 000ffb70 mobyutil::GetGroundZ; 001122ac mobyutil::MB_GetPlatformParent; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

undefined8 mobyupdate_helpers::M230_002fe758(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  bool bVar17;
  MobyInstance *pMVar18;
  PlayerState PVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar23;
  undefined8 uVar22;
  ulonglong uVar24;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar29 = uVar20 - 0x1b0;
  puVar13 = (ulonglong *)lVar29;
  *puVar13 = uVar20;
  puVar13[0x38] = in_LR;
  puVar13[0x2c] = in_f22;
  puVar13[0x2d] = in_f23;
  puVar13[0x2e] = in_f24;
  puVar13[0x2f] = in_f25;
  puVar13[0x30] = in_f26;
  puVar13[0x31] = in_f27;
  puVar13[0x32] = in_f28;
  puVar13[0x33] = in_f29;
  puVar13[0x34] = in_f30;
  puVar13[0x35] = in_f31;
  puVar13[0x25] = unaff_r25;
  puVar13[0x2b] = unaff_r31;
  puVar13[0x26] = unaff_r26;
  puVar13[0x28] = unaff_r28;
  bVar17 = false;
  puVar13[0x2a] = unaff_r30;
  puVar13[0x24] = unaff_r24;
  PVar19 = g_heroState;
  puVar13[0x29] = unaff_r29;
  puVar13[0x27] = unaff_r27;
  if ((PVar19 == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    return 0;
  }
  fVar4 = (param_2->pos).x;
  fVar5 = (param_2->pos).y;
  *(f32 *)(puVar13 + 0x10) = fVar4;
  fVar6 = (param_2->pos).z;
  *(f32 *)((int)puVar13 + 0x84) = fVar5;
  fVar7 = (param_2->pos).w;
  uVar3 = param_2->state;
  *(f32 *)(puVar13 + 0x11) = fVar6;
  *(f32 *)((int)puVar13 + 0x8c) = fVar7;
  fVar2 = DAT_0096a350;
  if (uVar3 == '\x01') {
    fVar8 = ABS(DAT_0096a350);
    fVar10 = ABS(DAT_0096a354);
    dVar42 = -0.3619680106639862;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    *(float *)(puVar13 + 0x19) = fVar8 - fVar10;
    dVar33 = 0.0;
    dVar34 = 0.7853981852531433;
    uVar24 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar8;
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar2 = fVar10;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    if (*(float *)(puVar13 + 0x19) - 0.0 < 0.0) {
      fVar10 = fVar8;
    }
    fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    dVar30 = dVar33;
    if (0.0 < fVar2) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xb4;
      lVar25 = uVar20 - 0xc4;
      lVar28 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar10 = fVar2 * fVar2;
      *(float *)(puVar13 + 0x1f) = fVar2;
      *(float *)(puVar13 + 0x1e) = fVar2;
      *(float *)((int)puVar13 + 0xf4) = fVar2;
      *(float *)((int)puVar13 + 0xec) = fVar2;
      fVar2 = fVar10 * fVar10;
      *(float *)(puVar13 + 0x1e) = *(float *)(puVar13 + 0x1e) * fVar10;
      *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar2;
      *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar2 * fVar10;
      do {
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xdc) * fVar2 * fVar2;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xc4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar2 = *pfVar26;
        fVar10 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xec) = *(float *)((int)lVar21 + 0xec) * fVar2;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar10;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0xec)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar9 + fVar8);
    }
    dVar30 = (double)fastfunc::FastWrapRot(-0.361968,(float)dVar30);
    fVar8 = DAT_0096a350;
    dVar41 = 3.141592502593994;
    fVar2 = (float)(dVar30 + 1.570796251296997);
    dVar40 = -3.141592502593994;
    dVar32 = ABS((double)DAT_0096a350);
    dVar39 = -0.16666656732559204;
    dVar30 = ABS((double)DAT_0096a354);
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.8590390086174011;
    uVar15 = (uint)DAT_0096a354 >> 0x1d;
    fVar10 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar10 = fVar2;
    }
    *(float *)((int)puVar13 + 0xc4) = (float)(dVar32 - dVar30);
    fVar9 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
      fVar9 = fVar10;
    }
    fVar16 = fVar9 * fVar9;
    uVar24 = (ulonglong)((uint)fVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
    fVar2 = fVar16 * fVar16 * fVar9;
    fVar10 = fVar16 * fVar2;
    dVar31 = dVar32;
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar31 = dVar30;
    }
    if ((double)*(float *)((int)puVar13 + 0xc4) - dVar33 < 0.0) {
      dVar30 = dVar32;
    }
    *(float *)(puVar13 + 0xe) =
         (fVar16 * fVar10 * 2.601887e-06 +
         fVar10 * -0.0001980741 + fVar2 * 0.0083330255 + fVar16 * fVar9 * -0.16666657 + fVar9) *
         0.859039;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar24 << 2));
    fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
    if (dVar33 < dVar31) {
      lVar21 = uVar20 - 0x1a0;
      lVar27 = uVar20 - 0xd4;
      lVar25 = uVar20 - 0xe4;
      lVar28 = 2;
      fVar8 = (float)(dVar30 - dVar31) / (float)(dVar30 + dVar31);
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x1b) = fVar8;
      *(float *)(puVar13 + 0x1a) = fVar8;
      *(float *)((int)puVar13 + 0xd4) = fVar8;
      *(float *)((int)puVar13 + 0xcc) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar13 + 0x1a) = *(float *)(puVar13 + 0x1a) * fVar9;
      *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar8;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xbc) * fVar8 * fVar8;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar8 * fVar8;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar20 - 0xe4;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar29;
      lVar25 = lVar27;
      do {
        fVar8 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0xcc) = *(float *)((int)lVar21 + 0xcc) * fVar8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar29;
      do {
        iVar23 = (int)lVar21;
        iVar14 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0xcc)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar33 = (double)((float)(dVar33 + dVar34) * fVar10 + fVar2);
    }
    dVar34 = (double)fastfunc::FastWrapRot((float)dVar42,(float)dVar33);
    fVar2 = g_heroPosition.y;
    dVar33 = (double)(float)(dVar41 - dVar34);
    if (dVar34 - (double)(float)(dVar41 - dVar34) < 0.0) {
      dVar33 = dVar34;
    }
    dVar30 = (double)(float)(dVar40 - dVar34);
    if ((double)(float)(dVar40 - dVar34) - dVar33 < 0.0) {
      dVar30 = dVar33;
    }
    fVar10 = *(float *)(puVar13 + 0xe) + g_heroPosition.x;
    *(undefined4 *)(puVar13 + 0xf) = 0;
    dVar32 = (double)(float)(dVar30 * dVar30);
    *(float *)(puVar13 + 0xe) = fVar10;
    fVar8 = g_heroPosition.z;
    dVar33 = (double)*param_1;
    dVar42 = (double)param_1[1];
    dVar34 = (double)param_1[2];
    dVar41 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar40 = (double)(float)(dVar32 * dVar41);
    bVar1 = hero::g_heroStateType == 0xf;
    fVar10 = (float)((double)(float)((double)(float)(dVar32 * dVar40) * dVar36 +
                                    (double)(float)(dVar40 * dVar37 +
                                                   (double)(float)(dVar41 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar32 * dVar30) * dVar39 + dVar30)))) * dVar35);
    *(float *)((int)puVar13 + 0x74) = fVar10;
    iVar23 = g_standingOnMoby;
    *(float *)((int)puVar13 + 0x74) = fVar10 + fVar2;
    *(float *)(puVar13 + 0xf) = fVar8 + 0.39082;
    if (bVar1) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    if (((iVar23 != 0) && (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 != 0)) &&
       (param_3 != 0)) {
      dVar33 = (double)(float)(dVar33 + (double)DAT_00969de0);
      dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
      dVar34 = (double)(float)(dVar34 + (double)DAT_00969de8);
    }
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x30,0x2fe714);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar12 = storeVectorElementWordIndexed
                       (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xc0,lVar29);
    *(undefined4 *)(puVar13 + 0x18) = uVar12;
  }
  else {
    sVar11 = *(short *)(param_1 + 0xe);
    dVar33 = (double)*param_1;
    iVar23 = *(int *)((int)param_1[0xc] + 0x78);
    *(f32 *)(puVar13 + 0xe) = fVar4;
    *(f32 *)((int)puVar13 + 0x74) = fVar5;
    *(f32 *)(puVar13 + 0xf) = fVar6;
    *(f32 *)((int)puVar13 + 0x7c) = fVar7;
    dVar42 = (double)param_1[1];
    dVar34 = (double)param_1[2];
    *(int *)(puVar13 + 0x18) = (int)sVar11;
    if (*(int *)(iVar23 + 0x50) != 0) {
      *(undefined2 *)((int)param_1 + 0x3a) = 1;
    }
  }
  pMVar18 = g_heroMobyPtr;
  dVar30 = 0.5;
  dVar34 = -(double)(float)((double)mobyutil::g_FrameTime * 0.5 - dVar34);
  *(f32 *)(puVar13 + 0x12) = (g_heroMobyPtr->pos).x;
  *(f32 *)((int)puVar13 + 0x94) = (pMVar18->pos).y;
  *(f32 *)(puVar13 + 0x13) = (pMVar18->pos).z;
  fVar4 = (pMVar18->pos).w;
  *(undefined4 *)(puVar13 + 0x13) = *(undefined4 *)(puVar13 + 0xf);
  *(f32 *)((int)puVar13 + 0x9c) = fVar4;
  iVar23 = collproc::CollLine(uVar20 - 0x120,uVar20 - 0x140,0x10,pMVar18,0);
  if (iVar23 != 0) {
    iVar23 = collproc::CollHotspot();
    fVar2 = animationSpeed;
    if ((iVar23 != 0) || (0.0 < dVar34)) {
      if ((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) {
        if (0 < CollOutput.poly) {
          bVar17 = true;
          param_1[4] = CollOutput.ip.x;
          param_1[5] = CollOutput.ip.y;
          param_1[6] = CollOutput.ip.z;
          param_1[7] = CollOutput.ip.w;
        }
      }
      else {
        if ((CollOutput.pMoby == g_heroMobyPtr) ||
           (CollOutput.pMoby == (MobyInstance *)param_1[0xc])) {
          puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
          puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
          if (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
              *(int *)(puVar13 + 0x18)) goto LAB_002feeac;
        }
        pMVar18 = CollOutput.pMoby;
        *(undefined4 *)(puVar13 + 0x14) = 0;
        *(undefined4 *)((int)puVar13 + 0xa4) = 0;
        *(undefined4 *)(puVar13 + 0x15) = 0x3f000000;
        *(undefined4 *)((int)puVar13 + 0xac) = 0;
        fVar2 = (pMVar18->pos).x;
        param_1[4] = fVar2;
        fVar10 = (pMVar18->pos).y;
        param_1[5] = fVar10;
        fVar8 = (pMVar18->pos).z;
        param_1[6] = fVar8;
        fVar9 = (pMVar18->pos).w;
        *(float *)(puVar13 + 0x14) = fVar2;
        param_1[7] = fVar9;
        *(float *)((int)puVar13 + 0xa4) = fVar10;
        *(float *)(puVar13 + 0x15) = (float)(dVar30 + (double)fVar8);
        mobyutil::GetGroundZ(dVar30,uVar20 - 0x110,0);
        bVar17 = true;
      }
    }
  }
LAB_002feeac:
  do {
    while( true ) {
      do {
        do {
          iVar23 = fastfunc::FastDecTimerS32(uVar20 - 0xf0);
          if (iVar23 != 0 || bVar17) goto LAB_002ff060;
          fVar2 = *(float *)(puVar13 + 0xe);
          fVar10 = *(float *)((int)puVar13 + 0x74);
          fVar8 = *(float *)(puVar13 + 0xf);
          lVar29 = 10;
          *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0x7c);
          *(float *)(puVar13 + 0x10) = fVar2;
          *(float *)((int)puVar13 + 0x84) = fVar10;
          *(float *)(puVar13 + 0x11) = fVar8;
          do {
            fVar2 = (float)((double)fVar2 + dVar33);
            fVar10 = (float)((double)fVar10 + dVar42);
            fVar8 = (float)((double)fVar8 + dVar34);
            dVar34 = -(double)(float)((double)DAT_0071f418 * 9.0 - dVar34);
            *(float *)(puVar13 + 0xe) = fVar2;
            *(float *)((int)puVar13 + 0x74) = fVar10;
            *(float *)(puVar13 + 0xf) = fVar8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          iVar23 = collproc::CollLine(uVar20 - 0x130,uVar20 - 0x140,0x10,param_2,0);
        } while (iVar23 == 0);
        iVar23 = collproc::CollHotspot();
        fVar2 = animationSpeed;
      } while ((iVar23 == 0) && (0.0 < dVar34));
      if ((CollOutput.pMoby != (MobyInstance *)0x0) && (CollOutput.poly < 1)) break;
      if (0 < CollOutput.poly) {
        param_1[4] = CollOutput.ip.x;
        param_1[5] = CollOutput.ip.y;
        param_1[6] = CollOutput.ip.z;
        param_1[7] = CollOutput.ip.w;
        goto LAB_002ff060;
      }
    }
    if ((CollOutput.pMoby != g_heroMobyPtr) && (CollOutput.pMoby != (MobyInstance *)param_1[0xc]))
    break;
    puVar13[0x22] = (longlong)(int)(animationSpeed * 300.5);
    puVar13[0x22] = (longlong)(int)(fVar2 * 10.5);
  } while (*(int *)((int)puVar13 + 0x114) - *(int *)((int)puVar13 + 0x114) <=
           *(int *)(puVar13 + 0x18));
  pMVar18 = CollOutput.pMoby;
  *(undefined4 *)(puVar13 + 0x16) = 0;
  *(undefined4 *)((int)puVar13 + 0xb4) = 0;
  *(undefined4 *)(puVar13 + 0x17) = 0x3f000000;
  *(undefined4 *)((int)puVar13 + 0xbc) = 0;
  fVar2 = (pMVar18->pos).x;
  param_1[4] = fVar2;
  fVar10 = (pMVar18->pos).y;
  param_1[5] = fVar10;
  fVar8 = (pMVar18->pos).z;
  param_1[6] = fVar8;
  fVar9 = (pMVar18->pos).w;
  *(float *)(puVar13 + 0x16) = fVar2;
  param_1[7] = fVar9;
  *(float *)((int)puVar13 + 0xb4) = fVar10;
  *(float *)(puVar13 + 0x17) = (float)(dVar30 + (double)fVar8);
  mobyutil::GetGroundZ(dVar30,uVar20 - 0x100,0);
LAB_002ff060:
  if ((*(int *)(puVar13 + 0x18) == 0) ||
     ((param_3 == 0 &&
      ((CollOutput.pMoby == (MobyInstance *)0x0 ||
       (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 == 0)))))) {
    uVar22 = 0;
  }
  else {
    if (((param_3 != 2) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
       (iVar23 = mobyutil::MB_GetPlatformParent(), iVar23 == 0)) {
      RegisterFuncForMoby(&PTR_M230_002fdab8_0070b940,param_2);
    }
    param_1[8] = CollOutput.normal.x;
    param_1[9] = CollOutput.normal.y;
    param_1[10] = CollOutput.normal.z;
    param_1[0xb] = CollOutput.normal.w;
    fVar9 = GameCamera.posX;
    fVar2 = param_1[4] - GameCamera.posX;
    fVar10 = param_1[5] - GameCamera.posY;
    *(float *)((int)puVar13 + 0x8c) = param_1[7];
    uVar22 = 1;
    fVar8 = param_1[6] - GameCamera.posZ;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    fVar2 = fVar2 * 0.95;
    fVar10 = fVar10 * 0.95;
    fVar8 = fVar8 * 0.95;
    *(float *)(puVar13 + 0x10) = fVar2;
    *(float *)((int)puVar13 + 0x84) = fVar10;
    *(float *)(puVar13 + 0x11) = fVar8;
    param_1[4] = fVar2 + fVar9;
    param_1[5] = fVar10 + GameCamera.posY;
    param_1[6] = fVar8 + GameCamera.posZ;
  }
  return uVar22;
}



//==== 002ff240  ns=mobyupdate_unsorted  size=0xeec
// sig: undefined UpdateMoby_230(MobyInstance * moby)
// callers(0): 
// callees(15): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000ffb70 mobyutil::GetGroundZ; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00129f28 partupd::SpawnPart_32; 002cb828 FUN_002cb828; 002fe0f0 mobyupdate_helpers::M230_002fe0f0; 002fe758 mobyupdate_helpers::M230_002fe758; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502730 fastfunc::FastIntToDouble; 00502b08 fastfunc::FastVecAddSelf

/* Moby 230 */

void mobyupdate_unsorted::UpdateMoby_230(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  f32 fVar8;
  MobyClass *pMVar9;
  int iVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  MobyModeBit MVar22;
  int iVar21;
  int iVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar24;
  ulonglong unaff_r30;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar26 = uVar18 - 0x150;
  puVar14 = (ulonglong *)lVar26;
  *puVar14 = uVar18;
  puVar14[0x2c] = in_LR;
  puVar14[0x22] = in_f24;
  puVar14[0x23] = in_f25;
  puVar14[0x24] = in_f26;
  puVar14[0x25] = in_f27;
  puVar14[0x26] = in_f28;
  puVar14[0x27] = in_f29;
  puVar14[0x28] = in_f30;
  puVar14[0x29] = in_f31;
  puVar14[0x21] = unaff_r31;
  puVar14[0x20] = unaff_r30;
  puVar14[0x1f] = unaff_r29;
  puVar14[0x1e] = unaff_r28;
  puVar14[0x1d] = unaff_r27;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar7 = (float *)moby->pVar;
  uVar25 = ZEXT48(pfVar7);
  if (pfVar7 == (float *)0x0) {
    return;
  }
  fVar8 = (moby->pos).x;
  uVar11 = (int)fVar8 >> 0x1f;
  iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11;
  if ((((iVar20 < 0x40000000) || (0x447f4000 < iVar20)) ||
      (fVar8 = (moby->pos).y, uVar11 = (int)fVar8 >> 0x1f,
      iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11, 0x447f4000 < iVar20 || iVar20 < 0x40000000)) ||
     ((fVar8 = (moby->pos).z, uVar11 = (int)fVar8 >> 0x1f,
      iVar20 = (uVar11 >> 1 ^ (uint)fVar8) - uVar11, iVar20 < 0x40000000 || (0x447f4000 < iVar20))))
  {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if ((hero::g_heroInvisible == '\0') || (1 < moby->state)) {
    MVar22 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar22 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar22;
  if (((*(short *)((int)pfVar7[0xc] + 0xa6) == 0xe5) && (*(short *)((int)pfVar7 + 0x3a) == 0)) &&
     (0.0 < SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]))) {
    if ((g_standingOnMoby == 0) || (iVar20 = mobyutil::MB_GetPlatformParent(), iVar20 == 0)) {
      mobyupdate_helpers::M230_002fe758(uVar25,lVar19,1);
    }
    else {
      iVar20 = mobyupdate_helpers::M230_002fe758(uVar25,lVar19,0);
      if (iVar20 == 0) {
        mobyupdate_helpers::M230_002fe758(uVar25,lVar19,2);
      }
    }
  }
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    lVar26 = lVar19 + 0x10;
    moby->alpha = moby->alpha + -4;
    moby->scale = moby->scale * 0.92;
    dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar26,0);
    if ((dVar27 != 0.0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
      mobyutil::MB_PlatformLocalToWorld
                (lVar19,CollOutput.pMoby,lVar26,lVar19 + 0x40,lVar26,lVar19 + 0x40);
    }
    if (moby->alpha != '\0') {
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar2 != '\x03') {
    if (uVar2 == '\x02') {
      dVar27 = (double)fastfunc::FastIntToDouble(g_goldWeaponsArray.gloveOfDoom);
      dVar34 = 0.5;
      fVar3 = moby->pClass->gScale;
      dVar27 = (double)(float)(dVar27 + 1.0);
      if ((double)moby->scale < (double)(float)((double)(fVar3 * 0.5) * dVar27)) {
        moby->scale = (float)((double)(DAT_0071f408 * 0.05 * fVar3) * dVar27 + (double)moby->scale);
      }
      iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0x34);
      if (iVar20 != 0) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,
                            uVar25);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
        partupd::SpawnPart_32(lVar19);
      }
      fVar3 = -(DAT_0071f418 * 9.0 - pfVar7[2]);
      pfVar7[2] = fVar3;
      dVar33 = (double)((moby->pos).x + *pfVar7);
      dVar32 = (double)((moby->pos).y + pfVar7[1]);
      dVar30 = (double)(moby->pos).w;
      dVar31 = (double)((moby->pos).z + fVar3);
      fastfunc::FastVecAddSelf(uVar18 - 0xb0,lVar19 + 0x10,&DAT_00969e20);
      fVar8 = (moby->pos).y;
      *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
      fVar3 = (moby->pos).z;
      *(f32 *)((int)puVar14 + 0x74) = fVar8;
      fVar8 = (moby->pos).w;
      *(float *)(puVar14 + 0xf) = fVar3;
      *(f32 *)((int)puVar14 + 0x7c) = fVar8;
      dVar29 = 0.15000000596046448;
      fVar4 = moby->scale;
      fVar16 = DAT_0071f408 * 0.15;
      pMVar9 = moby->pClass;
      fVar15 = DAT_0071f408 * 0.15;
      fVar5 = pMVar9->gScale;
      *(float *)(puVar14 + 0x10) = (float)dVar33;
      *(float *)((int)puVar14 + 0x84) = (float)dVar32;
      *(float *)(puVar14 + 0x11) = (float)dVar31;
      *(float *)((int)puVar14 + 0x8c) = (float)dVar30;
      pMVar17 = g_heroMobyPtr;
      *(float *)(puVar14 + 0xf) = fVar3 - (fVar16 * fVar4) / fVar5;
      fVar3 = pMVar9->gScale;
      *(float *)(puVar14 + 0x12) = (float)dVar33;
      *(float *)((int)puVar14 + 0x94) = (float)dVar32;
      *(float *)((int)puVar14 + 0x9c) = (float)dVar30;
      *(float *)(puVar14 + 0x11) = (float)(dVar31 - (double)((fVar15 * fVar4) / fVar3));
      dVar28 = 0.20000000298023224;
      *(float *)(puVar14 + 0x13) = (float)(dVar27 * 0.20000000298023224 + dVar31);
      iVar20 = collproc::CollSphere
                         ((double)(float)(dVar27 * 0.30000001192092896),uVar18 - 0xc0,pMVar9,4,
                          pMVar17);
      if (iVar20 != 0) {
        (moby->pos).x = CollOutput.push.x;
        (moby->pos).y = CollOutput.push.y;
        dVar29 = (double)CollOutput.push.z;
        (moby->pos).w = CollOutput.push.w;
        (moby->pos).z = -(float)(dVar27 * dVar28 - dVar29);
        fastfunc::FastVecNormalize(uVar25,uVar25,0xa10980);
        fVar3 = (float)((double)pfVar7[1] * dVar34);
        fVar4 = (float)((double)*pfVar7 * dVar34);
        fVar5 = (float)((double)pfVar7[2] * dVar34);
        *pfVar7 = fVar4;
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar5;
        dVar27 = 0.009999999776482582;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_0071f408 * 0.01) ||
           (((g_standingOnMoby != 0 && (iVar20 = mobyutil::MB_GetPlatformParent(), iVar20 != 0)) &&
            (SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]) <
             (float)((double)DAT_0071f408 * dVar27 +
                    (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))))) {
          sVar6 = *(short *)(pfVar7 + 0xe);
          *(short *)(pfVar7 + 0xe) = sVar6 + 1;
          if (((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) ||
             (puVar14[0x1a] = (longlong)(int)(animationSpeed * 240.5),
             *(int *)((int)puVar14 + 0xd4) < (int)(short)(sVar6 + 1))) {
            moby->state = '\x03';
            *(undefined2 *)(pfVar7 + 0xe) = 0;
          }
        }
        if ((g_standingOnMoby != 0) && (iVar20 = mobyutil::MB_GetPlatformParent(), iVar20 != 0)) {
          *pfVar7 = *pfVar7 + DAT_00969de0;
          pfVar7[1] = pfVar7[1] + DAT_00969de4;
          pfVar7[2] = pfVar7[2] + DAT_00969de8;
        }
        (moby->pos).x = (moby->pos).x + *pfVar7;
        (moby->pos).y = (moby->pos).y + pfVar7[1];
        (moby->pos).z = (moby->pos).z + pfVar7[2];
        mobyupdate_helpers::M230_002fe0f0(lVar19);
        return;
      }
      iVar20 = collproc::CollLine(uVar18 - 0xe0,uVar18 - 0xd0,0,g_heroMobyPtr,0);
      if (iVar20 != 0) {
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        fVar3 = CollOutput.ip.z;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        (moby->pos).z =
             fVar3 + ((float)((double)DAT_0071f408 * dVar29) * moby->scale) / moby->pClass->gScale;
        fastfunc::FastVecNormalize(uVar25,uVar25,0xa10980);
        fVar3 = (float)((double)pfVar7[1] * dVar34);
        fVar4 = (float)((double)*pfVar7 * dVar34);
        fVar5 = (float)((double)pfVar7[2] * dVar34);
        *pfVar7 = fVar4;
        pfVar7[1] = fVar3;
        pfVar7[2] = fVar5;
        dVar27 = 0.009999999776482582;
        if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < DAT_0071f408 * 0.01) ||
           (((g_standingOnMoby != 0 && (iVar20 = mobyutil::MB_GetPlatformParent(), iVar20 != 0)) &&
            (SQRT(pfVar7[2] * pfVar7[2] + *pfVar7 * *pfVar7 + pfVar7[1] * pfVar7[1]) <
             (float)((double)DAT_0071f408 * dVar27 +
                    (double)SQRT(DAT_00969de8 * DAT_00969de8 +
                                 DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4)))))) {
          sVar6 = *(short *)(pfVar7 + 0xe);
          *(short *)(pfVar7 + 0xe) = sVar6 + 1;
          if (((CollOutput.pMoby == (MobyInstance *)0x0) || (0 < CollOutput.poly)) ||
             (puVar14[0x1a] = (longlong)(int)(animationSpeed * 240.5),
             *(int *)((int)puVar14 + 0xd4) < (int)(short)(sVar6 + 1))) {
            moby->state = '\x03';
            *(undefined2 *)(pfVar7 + 0xe) = 0;
          }
        }
        if ((g_standingOnMoby != 0) && (iVar20 = mobyutil::MB_GetPlatformParent(), iVar20 != 0)) {
          *pfVar7 = *pfVar7 + DAT_00969de0;
          pfVar7[1] = pfVar7[1] + DAT_00969de4;
          pfVar7[2] = pfVar7[2] + DAT_00969de8;
        }
        (moby->pos).x = (moby->pos).x + *pfVar7;
        (moby->pos).y = (moby->pos).y + pfVar7[1];
        (moby->pos).z = (moby->pos).z + pfVar7[2];
        mobyupdate_helpers::M230_002fe0f0(lVar19);
        return;
      }
      (moby->pos).x = (float)dVar33;
      (moby->pos).y = (float)dVar32;
      (moby->pos).z = (float)dVar31;
      (moby->pos).w = (float)dVar30;
      return;
    }
    if (uVar2 != '\x01') {
      if (uVar2 == '\0') {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        moby->state = '\x01';
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,
                            uVar25);
        *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
        *(undefined2 *)(pfVar7 + 0xe) = 0;
        pfVar7[0xf] = 0.0;
        return;
      }
      moby->state = '\0';
      return;
    }
    *(undefined2 *)(pfVar7 + 0xe) = 0;
    fVar3 = moby->pClass->gScale;
    if (moby->scale < fVar3 * 0.25) {
      moby->scale = DAT_0071f408 * 0.05 * fVar3 + moby->scale;
    }
    iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0x34);
    if (iVar20 != 0) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,uVar25)
      ;
      *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
      if (hero::g_heroInvisible == '\0') {
        partupd::SpawnPart_32(lVar19);
      }
    }
    if ((((g_heroType == '\0') && (pfVar7[0xc] != 0.0)) &&
        ((*(byte *)((int)pfVar7[0xc] + 0x20) & 0xf0) != 0xf0)) &&
       ((g_currentWeaponMoby != (MobyInstance *)0x0 &&
        (g_currentWeaponMoby->oClass == GLOVE_OF_DOOM)))) {
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  lVar24 = lVar19 + 0x10;
  dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar24,0);
  if ((dVar27 != 0.0) && (CollOutput.pMoby != (MobyInstance *)0x0)) {
    mobyutil::MB_PlatformLocalToWorld
              (lVar19,CollOutput.pMoby,lVar24,lVar19 + 0x40,lVar24,lVar19 + 0x40);
  }
  iVar20 = fastfunc::FastDecTimerS16(uVar25 + 0x38);
  if (iVar20 != 0) {
    iVar23 = 0;
    iVar21 = 0;
    iVar20 = MobyUpdateChainStart;
    if (MobyUpdateChainStart != 0) {
      do {
        if ((*(short *)(iVar20 + 0xa6) == 0xba) && ((*(byte *)(iVar20 + 0x20) & 0xf0) != 0xf0)) {
          iVar23 = iVar23 + 1;
          iVar10 = *(int *)(*(int *)(iVar20 + 0x78) + 0x34);
          if (iVar21 < iVar10) {
            iVar21 = iVar10;
          }
        }
        iVar20 = *(int *)(iVar20 + 0x28);
      } while (iVar20 != 0);
      if (7 < iVar23) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0x30,0x2ff1dc);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x38,uVar25);
        *(undefined2 *)(pfVar7 + 0xe) = uVar12;
        goto LAB_002fffdc;
      }
    }
    auVar36 = loadVectorLeftIndexed(0x3c,uVar25);
    auVar38 = loadVectorRightIndexed(0x4c,uVar25);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar38 = vectorConvertFromSignedFixedPointWord(auVar36 | auVar38,0);
    auVar36 = loadVectorLeftIndexed(0x34,0x2ff1dc);
    auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = loadVectorLeftIndexed(8,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = loadVectorLeftIndexed(0x38,0x2ff1dc);
    auVar36 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar37);
    auVar35 = loadVectorLeftIndexed(0x3c,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar42 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = loadVectorLeftIndexed(0x40,0x2ff1dc);
    auVar35 = ZEXT416(0xffffffff);
    auVar45 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar43 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar37 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar40,
                         auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
    auVar45 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar47 = loadVectorLeftIndexed(0x44,0x2ff1dc);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar51 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar49 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar38 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar35 = vectorSubtractFloatingPoint(auVar42,auVar37);
    auVar44 = vectorSubtractFloatingPoint(auVar43,auVar37);
    auVar36 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
    auVar37 = vectorConditionalSelect(auVar35,auVar37,auVar36);
    auVar35 = loadVectorLeftIndexed(0x48,0x2ff1dc);
    auVar36 = loadVectorLeftIndexed(0x4c,0x2ff1dc);
    auVar41 = vectorCompareGreaterThanFloatingPoint(auVar37,auVar44);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar48 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = vectorConditionalSelect(auVar44,auVar37,auVar41);
    auVar35 = ZEXT416(0xffffffff);
    auVar41 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar47 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar45);
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar35 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar45,auVar37,auVar46);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar35,auVar41);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar37);
    auVar35 = loadVectorLeftIndexed(0x50,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar46 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar47 = vectorMultiplyAddFloatingPoint(auVar45,auVar41,auVar47);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar37);
    auVar35 = loadVectorLeftIndexed(0xc,0x2ff1dc);
    auVar50 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar41 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar49);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar37);
    auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar50,auVar41,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar51 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar46,auVar37);
    auVar37 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar49);
    auVar47 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc0,lVar26);
    *(undefined4 *)(puVar14 + 0x18) = uVar13;
    fVar3 = DAT_0071f408;
    auVar49 = loadVectorLeftIndexed(0x3c,uVar25);
    auVar38 = loadVectorRightIndexed(0x4c,uVar25);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar49 = vectorConvertFromSignedFixedPointWord(auVar49 | auVar38,0);
    auVar38 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    bVar1 = g_standingOnMoby != 0;
    auVar37 = vectorMultiplyAddFloatingPoint(auVar49,auVar39,auVar37);
    auVar39 = vectorShiftLeftIntegerWord(auVar51,auVar51);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar40,auVar47);
    auVar40 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = ZEXT416(0xffffffff);
    auVar47 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar49 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorSubtractFloatingPoint(auVar42,auVar37);
    auVar42 = vectorSubtractFloatingPoint(auVar43,auVar37);
    auVar43 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar37);
    auVar35 = vectorConditionalSelect(auVar35,auVar37,auVar43);
    auVar37 = vectorCompareGreaterThanFloatingPoint(auVar35,auVar42);
    auVar37 = vectorConditionalSelect(auVar42,auVar35,auVar37);
    auVar43 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    auVar47 = vectorShiftLeftIntegerWord(auVar49,auVar49);
    auVar42 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar38);
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar50,auVar41,auVar38);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar42,auVar37,auVar39);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar38,auVar40);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar44,auVar37);
    auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar42,auVar39,auVar43);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar38);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar42,auVar40,auVar47);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar35);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar46,auVar35);
    auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar37);
    auVar35 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc4,lVar26);
    *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
    fVar3 = fVar3 * 0.02;
    *(float *)(puVar14 + 0x19) = fVar3;
    if (bVar1) {
      iVar20 = mobyutil::MB_GetPlatformParent();
      fVar3 = *(float *)(puVar14 + 0x19);
      auVar45 = loadVectorLeftIndexed(0xc0,lVar26);
      auVar36 = loadVectorLeftIndexed(0xc4,lVar26);
      if (iVar20 != 0) {
        auVar35 = loadVectorLeftIndexed(0x100,0x969ce0);
        auVar38 = loadVectorLeftIndexed(0x104,0x969ce0);
        auVar45 = vectorAddFloatingPoint(auVar45,auVar35);
        auVar36 = vectorAddFloatingPoint(auVar36,auVar38);
        fVar3 = fVar3 + DAT_00969de8;
        auVar35 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xc0,
                            lVar26);
        *(undefined4 *)(puVar14 + 0x18) = uVar13;
        uVar13 = storeVectorElementWordIndexed
                           (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0xc4,
                            lVar26);
        *(undefined4 *)((int)puVar14 + 0xc4) = uVar13;
        *(float *)(puVar14 + 0x19) = fVar3;
      }
    }
    auVar35 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x10,lVar19);
    auVar37 = loadVectorLeftIndexed(0x14,lVar19);
    auVar35 = vectorAddFloatingPoint
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar38);
    fVar4 = (moby->pos).z;
    auVar36 = vectorAddFloatingPoint
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar37);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xb0,lVar26);
    *(undefined4 *)(puVar14 + 0x16) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xb4,lVar26);
    *(undefined4 *)((int)puVar14 + 0xb4) = uVar13;
    *(float *)(puVar14 + 0x17) = fVar3 + fVar4;
    *(undefined4 *)((int)puVar14 + 0xbc) = *(undefined4 *)((int)puVar14 + 0xcc);
    FUN_002cb828(pfVar7[0xc],uVar18 - 0xa0,uVar18 - 0x90);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    auVar35 = loadVectorLeftIndexed(0x58,0x2ff1dc);
    auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                         auVar36);
    auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
    auVar35 = vectorSplatHalfWord(auVar35,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar35,0x38,uVar25);
    *(undefined2 *)(pfVar7 + 0xe) = uVar12;
    fVar3 = pfVar7[0xf];
    pfVar7[0xf] = (float)((int)fVar3 + 1);
    if (3 < (int)fVar3 + 1) {
      moby->state = '\x04';
    }
  }
LAB_002fffdc:
  if (1 < (int)pfVar7[0xf]) {
    return;
  }
  iVar20 = fastfunc::FastDecTimerS32(uVar25 + 0x34);
  if (iVar20 == 0) {
    return;
  }
  auVar35 = ZEXT416(0xffffffff);
  auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorLeftIndexed(4,0x2ff1dc);
  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar35 = vectorMultiplyAddFloatingPoint
                      (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar36
                      );
  auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar13 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x34,uVar25);
  *(undefined4 *)((uint)(pfVar7 + 0xd) & 0xfffffffc) = uVar13;
  partupd::SpawnPart_32(lVar19);
  return;
}



