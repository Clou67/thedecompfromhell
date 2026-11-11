//==== 001f0658  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1189_001f0658(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1189_001f0658(void)

{
  DAT_00765f68 = 0x10000;
  return;
}



//==== 001f0670  ns=mobyupdate_helpers  size=0x1bc
// sig: undefined M1189_001f0670(void)
// callers(1): 001f0948 mobyupdate_unsorted::UpdateMoby_a_lot_6
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * mobyupdate_helpers::M1189_001f0670(int param_1,float *param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  MobyInstance *pMVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float local_30;
  float local_2c;
  float local_28;
  
  pMVar13 = mobyfunc::CreateMoby(param_3);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    pvVar7 = pMVar13->pVar;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    *(float *)((int)pvVar7 + 0x10) = *param_2;
    *(float *)((int)pvVar7 + 0x14) = param_2[1];
    *(float *)((int)pvVar7 + 0x18) = param_2[2];
    fVar1 = param_2[3];
    *(int *)((int)pvVar7 + 0x2c) = param_1;
    *(float *)((int)pvVar7 + 0x1c) = fVar1;
    mobyfunc::UpdateMobyTransform(pMVar13);
    mobyfunc::GetBonePosition(pMVar13,0,&local_30);
    fVar8 = *param_2 - local_30;
    fVar9 = param_2[1] - local_2c;
    fVar10 = param_2[2] - local_28;
    fVar1 = *(float *)(param_1 + 0xd4);
    fVar2 = *(float *)(param_1 + 0xc4);
    fVar3 = *(float *)(param_1 + 0xd8);
    fVar4 = *(float *)(param_1 + 0xe4);
    fVar5 = *(float *)(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0xe8);
    (pMVar13->pos).x =
         *(float *)(param_1 + 0xd0) * fVar9 +
         *(float *)(param_1 + 0xe0) * fVar10 + *(float *)(param_1 + 0xc0) * fVar8 + *param_2;
    (pMVar13->pos).y = param_2[1] + fVar4 * fVar10 + fVar2 * fVar8 + fVar1 * fVar9;
    (pMVar13->pos).z = param_2[2] + fVar6 * fVar10 + fVar5 * fVar8 + fVar3 * fVar9;
    (pMVar13->pos).w = param_2[3];
    (pMVar13->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar13->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar13->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar13->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar11 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar16 = puVar11[2];
    uVar15 = puVar11[1];
    uVar14 = *puVar11;
    puVar12 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar18 = puVar12[1];
    uVar17 = *puVar12;
    puVar12 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar24 = puVar12[3];
    uVar23 = puVar12[2];
    uVar22 = puVar12[1];
    uVar21 = *puVar12;
    puVar12 = (undefined4 *)((uint)&pMVar13->transform & 0xfffffff0);
    puVar12[3] = puVar11[3];
    puVar12[2] = uVar16;
    puVar12[1] = uVar15;
    *puVar12 = uVar14;
    puVar11 = (undefined4 *)((uint)&(pMVar13->transform).v1 & 0xfffffff0);
    puVar11[3] = uVar20;
    puVar11[2] = uVar19;
    puVar11[1] = uVar18;
    *puVar11 = uVar17;
    puVar11 = (undefined4 *)((uint)&(pMVar13->transform).v2 & 0xfffffff0);
    puVar11[3] = uVar24;
    puVar11[2] = uVar23;
    puVar11[1] = uVar22;
    *puVar11 = uVar21;
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 001f0830  ns=mobyupdate_helpers  size=0x98
// sig: undefined M1189_001f0830(void)
// callers(0): 
// callees(0): 

int mobyupdate_helpers::M1189_001f0830(float *param_1,short param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  iVar6 = 0;
  fVar1 = 100000.0;
  iVar2 = MobyUpdateChainStart;
  if (MobyUpdateChainStart != 0) {
    do {
      if (*(short *)(iVar2 + 0xa6) == param_2) {
        fVar3 = param_1[1] - *(float *)(iVar2 + 0x14);
        fVar4 = *param_1 - *(float *)(iVar2 + 0x10);
        fVar5 = param_1[2] - *(float *)(iVar2 + 0x18);
        fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
        if (fVar3 < fVar1) {
          fVar1 = fVar3;
          iVar6 = iVar2;
        }
      }
      iVar2 = *(int *)(iVar2 + 0x28);
    } while (iVar2 != 0);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar1;
  }
  return iVar6;
}



//==== 001f0948  ns=mobyupdate_unsorted  size=0x10e4
// sig: undefined UpdateMoby_a_lot_6(MobyInstance * moby)
// callers(0): 
// callees(20): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f9d18 mobyfunc::MB_ComputeSelectedJoints; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fe484 mobyutil::MB_randRange; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00116a68 mobyutil::MB_BobMotion; 00116b70 mobyutil::MB_SwingMotion; 001206e8 partupd::SpawnPart_2; 00123390 partupd::SpawnPart_11; 0015d12c sound::PlayMobySound; 001f0670 mobyupdate_helpers::M1189_001f0670; 004fffb4 fastfunc::FastDecTimerS16; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00654d5c: "Bigship moby %d (oClass:%d) can't find parent! dist:%f\n"

/* Moby 1182
   Moby 1183
   Moby 1184
   Moby 1185
   Moby 1186
   Moby 1187
   Moby 1188
   Moby 1189 */

void mobyupdate_unsorted::UpdateMoby_a_lot_6(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  f32 fVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  MobyModeBit MVar14;
  undefined4 uVar15;
  longlong lVar16;
  float fVar20;
  int iVar21;
  undefined2 uVar22;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  MOBY_OCLASSES MVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined1 auStack_1a0 [16];
  float local_190;
  float local_18c;
  float local_188;
  f32 local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 auStack_130 [48];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_ac [4];
  undefined4 local_a8 [2];
  longlong local_a0;
  
  lVar16 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  uVar24 = ZEXT48(pfVar5);
  DAT_00f08e20 = DAT_00f08e20 + 1;
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      mobyfunc::GetBonePosition(lVar16,0,auStack_1a0);
      fVar6 = (moby->pos).x;
      fVar7 = (moby->pos).y;
      fVar2 = (moby->pos).z;
      if ((pfVar5[0x1a] == -NAN) || ((&MiscLevelFlags.field57_0x39)[(int)pfVar5[0x1a]] == 0)) {
        moby->drawDistance = 0x3ff;
        if (moby->oClass == AIRSHIP_PART_04A0) {
          if (*(short *)(pfVar5 + 10) != 0) {
            iVar21 = 0x49e;
            moby->drawDistance = 0xff;
            pfVar5[0xb] = 0.0;
            do {
              if (iVar21 != 0x4a0) {
                mobyupdate_helpers::M1189_001f0670(lVar16,auStack_1a0,iVar21);
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < 0x4a6);
          }
        }
        else {
          fVar20 = 0.0;
          dVar27 = 100000.0;
          for (fVar3 = MobyUpdateChainStart; fVar3 != 0.0; fVar3 = *(float *)((int)fVar3 + 0x28)) {
            if ((*(short *)((int)fVar3 + 0xa6) == 0x4a0) &&
               (fVar4 = fVar7 - *(float *)((int)fVar3 + 0x14),
               fVar12 = fVar6 - *(float *)((int)fVar3 + 0x10),
               fVar13 = fVar2 - *(float *)((int)fVar3 + 0x18),
               dVar26 = (double)SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar4 * fVar4),
               dVar26 < dVar27)) {
              dVar27 = dVar26;
              fVar20 = fVar3;
            }
          }
          dVar26 = 100000.0;
          if (&stack0x00000000 != (undefined1 *)0xb0) {
            dVar26 = dVar27;
          }
          if (20.0 <= dVar26) {
            libc::printf("Bigship moby %d (oClass:%d) can\'t find parent! dist:%f\n",moby->uid,
                         moby->oClass,dVar26);
          }
          else {
            MVar23 = moby->oClass;
            pfVar5[0xb] = fVar20;
            *(MobyInstance **)
             (*(int *)((int)fVar20 + 0x78) + (int)((longlong)(short)MVar23 << 2) + -0x120c) = moby;
          }
        }
        dVar27 = (double)moby->scale;
        mobyfunc::MB_ComputeSelectedJoints(lVar16,1,local_ac,auStack_130);
        pfVar5[0xc] = (float)((double)local_100 * dVar27);
        pfVar5[0xd] = (float)((double)local_fc * dVar27);
        pfVar5[0xe] = (float)((double)local_f8 * dVar27);
        pfVar5[0xf] = local_f4;
        moby->state = '\x01';
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      MVar23 = moby->oClass;
      if (MVar23 == AIRSHIP_PART_04A0) {
        dVar27 = 0.01745329238474369;
        mobyutil::MB_BobMotion
                  (pfVar5[0x12],pfVar5[0x13] * 0.017453292 * mobyutil::g_FrameTime,moby,
                   pfVar5 + 0x10,pfVar5 + 0x11);
        mobyutil::MB_SwingMotion
                  ((double)(float)((double)pfVar5[0x16] * dVar27),
                   (double)((float)((double)pfVar5[0x17] * dVar27) * mobyutil::g_FrameTime),
                   (double)((float)((double)pfVar5[0x18] * dVar27) * mobyutil::g_FrameTime),lVar16,
                   uVar24 + 0x50,uVar24 + 0x54);
        MVar23 = moby->oClass;
      }
      if (((MVar23 != AIRSHIP_PART_04A0) && (fVar6 = pfVar5[0xb], fVar6 != 0.0)) &&
         (*(char *)((int)fVar6 + 0x20) != '\x03')) {
        (moby->rotation).x = *(f32 *)((int)fVar6 + 0x40);
        (moby->rotation).y = *(f32 *)((int)fVar6 + 0x44);
        fVar7 = pfVar5[0xb];
        (moby->rotation).z = *(f32 *)((int)fVar6 + 0x48);
        (moby->rotation).w = *(f32 *)((int)fVar6 + 0x4c);
        fastfunc::FastEulerToMtx1(&local_f0,(ulonglong)(uint)fVar7 + 0x40);
        fVar6 = pfVar5[0xd];
        fVar7 = pfVar5[0xc];
        fVar2 = pfVar5[0xe];
        fVar3 = pfVar5[0xf];
        dVar28 = (double)(local_c0 * fVar3 + local_d0 * fVar2 + local_f0 * fVar7 + local_e0 * fVar6)
        ;
        dVar26 = (double)(local_bc * fVar3 + local_cc * fVar2 + local_ec * fVar7 + local_dc * fVar6)
        ;
        dVar27 = (double)(local_b8 * fVar3 + local_c8 * fVar2 + local_e8 * fVar7 + local_d8 * fVar6)
        ;
        mobyfunc::GetBonePosition(pfVar5[0xb],0,&local_190);
        MVar23 = moby->oClass;
        (moby->pos).w = local_184;
        (moby->pos).x = (float)((double)local_190 - dVar28);
        (moby->pos).y = (float)((double)local_18c - dVar26);
        (moby->pos).z = (float)((double)local_188 - dVar27);
      }
      if (pfVar5[0xb] != 0.0) {
        fVar6 = pfVar5[0xb];
        MVar14 = moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                  HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        moby->modeBits = MVar14;
        moby->modeBits = MVar14 | *(MobyModeBit *)((int)fVar6 + 0x34) & DISABLED;
        moby->setByGroup = *(char *)((int)fVar6 + 0xbc);
      }
      if (moby->state == '\x02') {
        if (MVar23 == AIRSHIP_PART_04A0) {
          dVar27 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).x,
                                      DAT_00765fe0 * 0.017453292 * mobyutil::g_FrameTime);
          (moby->rotation).x = (float)dVar27;
        }
        iVar21 = fastfunc::FastDecTimerS16(uVar24 + 0x2a);
        if (iVar21 != 0) {
          moby->state = '\x03';
        }
      }
      else if (moby->setByGroup == '\x01') {
        moby->updateDistance = -1;
        iVar21 = (int)(animationSpeed * ((float)(longlong)DAT_00765fe8 + 0.5));
        local_a0 = (longlong)iVar21;
        uVar22 = mobyutil::MB_randRange
                           ((int)(animationSpeed * ((float)(longlong)DAT_00765fe4 + 0.5)),iVar21);
        *(undefined2 *)((int)pfVar5 + 0x2a) = uVar22;
        iVar21 = 0;
        do {
          iVar8 = *(int *)((int)uVar24 + 0x6c);
          if (iVar8 != 0) {
            *(undefined1 *)(iVar8 + 0x30) = 0xff;
          }
          iVar21 = iVar21 + 1;
          uVar24 = uVar24 + 4;
        } while (iVar21 < 9);
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 < 4) {
      fastfunc::FastDecTimerS16(uVar24 + 0x2a);
      MiscLevelFlags.field56_0x38 = 1;
      if (pfVar5[0x1a] != -NAN) {
        (&MiscLevelFlags.field57_0x39)[(int)pfVar5[0x1a]] = 1;
      }
      mobyutil::MB_SpawnBoltsFromCrate(lVar16,0x200,0xffffffffffffffff);
      mobyutil::MB_SpawnExplosionSparks
                (0x4010000000000000,0x402a000000000000,lVar16,lVar16 + 0x10,&DAT_001f08c8,
                 0xffffffffffffffff);
      if (moby->oClass == AIRSHIP_PART_04A0) {
        sound::PlayMobySound(2,0,moby);
      }
      mobyfunc::GetBonePosition(lVar16,0,&local_180);
      fVar6 = (moby->pos).x - local_180;
      *pfVar5 = fVar6;
      fVar7 = (moby->pos).y - local_17c;
      pfVar5[1] = fVar7;
      MVar23 = moby->oClass;
      fVar2 = (moby->pos).z - local_178;
      pfVar5[2] = fVar2;
      pfVar5[3] = (moby->pos).w;
      fVar3 = mobyutil::g_FrameTime;
      fVar20 = DAT_00765fcc * mobyutil::g_FrameTime * 0.05;
      fVar6 = fVar6 * fVar20;
      fVar7 = fVar7 * fVar20;
      *pfVar5 = fVar6;
      pfVar5[1] = fVar7;
      pfVar5[2] = fVar2 * fVar20;
      fVar2 = local_180 - g_heroPosition.x;
      fVar20 = local_17c - g_heroPosition.y;
      fVar12 = local_178 - g_heroPosition.z;
      if ((MVar23 == AIRSHIP_PART_04A1) || (MVar23 == AIRSHIP_PART_04A2)) {
        fVar4 = 0.0;
        fVar13 = SQRT(fVar12 * fVar12 + fVar2 * fVar2 + fVar20 * fVar20);
        fVar12 = fVar4;
        if (fVar13 != 0.0) {
          fVar13 = (DAT_00765fdc * fVar3) / fVar13;
          fVar4 = fVar2 * fVar13;
          fVar12 = fVar20 * fVar13;
        }
      }
      else {
        fVar4 = 0.0;
        fVar13 = SQRT(fVar12 * fVar12 + fVar2 * fVar2 + fVar20 * fVar20);
        fVar12 = fVar4;
        if (fVar13 != 0.0) {
          fVar13 = (DAT_00765fd0 * fVar3) / fVar13;
          fVar4 = fVar2 * fVar13;
          fVar12 = fVar20 * fVar13;
        }
      }
      pfVar5[2] = 0.0;
      *pfVar5 = fVar6 + fVar4;
      pfVar5[1] = fVar7 + fVar12;
      dVar26 = 0.01745329238474369;
      fVar3 = DAT_00765fd4 * 0.017453292 * fVar3;
      dVar27 = (double)mobyutil::MB_randRangeFloat(-fVar3,fVar3);
      pfVar5[8] = (float)dVar27;
      fVar6 = (float)((double)DAT_00765fd8 * dVar26) * mobyutil::g_FrameTime;
      dVar27 = (double)mobyutil::MB_randRangeFloat(-fVar6,fVar6);
      pfVar5[9] = (float)dVar27;
      dVar27 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(longlong)(animationSpeed * 90.5),
                                  (float)(longlong)(animationSpeed * 150.5));
      local_a0 = (longlong)(int)dVar27;
      *(short *)((int)pfVar5 + 0x2a) = (short)(int)dVar27;
      dVar27 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_00765fbc * DAT_0071f418,DAT_00765fc0 * DAT_0071f418);
      MVar23 = moby->oClass;
      pfVar5[0x19] = (float)dVar27;
      fVar6 = DAT_0071f418;
      if ((MVar23 == AIRSHIP_PART_04A1) || (MVar23 == AIRSHIP_PART_04A2)) {
        auVar29 = loadVectorLeftIndexed(0x20,uVar24);
        auVar30 = loadVectorLeftIndexed(0x2a,uVar24);
        auVar32 = loadVectorRightIndexed(0x30,uVar24);
        auVar33 = loadVectorRightIndexed(0x3a,uVar24);
        auVar29 = auVar29 | auVar32;
        auVar32 = ZEXT416(0xfffffff0);
        auVar31 = ZEXT416(0xffffffff);
        auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar34 = vectorReciprocalEstimateFloatingPoint(auVar29);
        auVar31 = vectorShiftRightAlgebraicWord
                            (auVar30 | auVar33,
                             auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
        auVar32 = loadVectorLeftIndexed(0x28,0x1f08c8);
        auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar32 = ZEXT416(0xffffffff);
        auVar31 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar32 = ZEXT416(0xffffffff);
        auVar38 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar32 = ZEXT416(0xffffffff);
        auVar39 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar32 = ZEXT416(0xffffffff);
        auVar40 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar29,auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar37 = vectorReciprocalEstimateFloatingPoint(auVar30);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar35);
        auVar31 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar30,auVar33);
        auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar29,auVar33);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar34,auVar36);
        auVar37 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar35,auVar31);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar31 = loadVectorLeftIndexed(0x2c,0x1f08c8);
        auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar33);
        auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar29,auVar33);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar39);
        auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar37);
        auVar37 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar33);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar29,auVar35);
        auVar29 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar38);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar37);
        auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar33);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x20,
                            uVar24);
        *(undefined4 *)((uint)(pfVar5 + 8) & 0xfffffffc) = uVar10;
        dVar27 = (double)mobyutil::MB_randRangeFloat(DAT_00765fc4 * fVar6,DAT_00765fc8 * fVar6);
        pfVar5[0x19] = (float)dVar27;
      }
      moby->collision = (ushort *)0x0;
      moby->state = '\x04';
    }
    else {
      pfVar5[2] = pfVar5[2] - pfVar5[0x19];
      fVar6 = (moby->rotation).x;
      (moby->pos).x = (moby->pos).x + *pfVar5;
      (moby->pos).y = (moby->pos).y + pfVar5[1];
      (moby->pos).z = (moby->pos).z + pfVar5[2];
      dVar27 = (double)fastfunc::FastWrapRot(fVar6,pfVar5[8]);
      (moby->rotation).x = (float)dVar27;
      dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar5[9]);
      fVar9 = (moby->pos).x;
      (moby->rotation).y = (float)dVar27;
      uVar11 = (int)fVar9 >> 0x1f;
      iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
      if ((((iVar21 < 0x41400000) || (0x447cc000 < iVar21)) ||
          (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
          iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x447cc000 < iVar21 || iVar21 < 0x41400000)
          ) || ((fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
                iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar21 < 0x41400000 ||
                (0x447cc000 < iVar21)))) {
        mobyfunc::DeleteMoby(moby);
      }
      else {
        iVar21 = mobyutil::MB_randInt(3);
        if (iVar21 == 0) {
          local_a8[0] = 0x2f000000;
          local_a8[1] = 0x3f000000;
          lVar17 = mobyutil::MB_randInt(2);
          dVar27 = (double)animationSpeed;
          uVar25 = 0x41186a0000000000;
          uVar10 = *(undefined4 *)((int)local_a8 + (int)(lVar17 << 2));
          local_a0 = (longlong)(int)(dVar27 * 20.5);
          mobyutil::MB_randRange
                    (local_a0,dVar27,0x41186a0000000000,(int)(dVar27 * 15.5),(int)(dVar27 * 20.5));
          local_a0 = (longlong)(int)(animationSpeed * 30.5);
          mobyutil::MB_randRange((int)(animationSpeed * 25.5),(int)(animationSpeed * 30.5));
          dVar27 = (double)mobyutil::MB_randRangeFloat(8.0,16.0);
          partupd::SpawnPart_11
                    (uVar25,(double)(float)(dVar27 * (double)mobyutil::g_FrameTime),lVar16 + 0x10,
                     local_170,0x2f3f3f7f,uVar10);
        }
        fVar9 = (moby->pos).z;
        uVar11 = (int)fVar9 >> 0x1f;
        if ((int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) < 0x41c80000) {
          iVar21 = 0;
          if (0 < DAT_00765f8c) {
            dVar26 = -3.0;
            dVar27 = 3.0;
            do {
              mobyutil::MB_randRot();
              mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar27);
              mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar27);
              uVar15 = DAT_00765f94;
              uVar10 = DAT_00765f90;
              local_a0 = (longlong)(DAT_00765fa8 << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fa8,(float)local_a0);
              uVar25 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_a0 = (longlong)(DAT_00765fac << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fac,(float)local_a0);
              uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              local_a0 = (longlong)(DAT_00765fb0 << 1);
              dVar28 = (double)mobyutil::MB_randRangeFloat
                                         ((float)(longlong)DAT_00765fb0,(float)local_a0);
              uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
              partupd::SpawnPart_2(local_140,local_160,local_150,uVar10,uVar15,uVar25,uVar18,uVar19)
              ;
              iVar21 = iVar21 + 1;
            } while (iVar21 < DAT_00765f8c);
          }
          *pfVar5 = *pfVar5 * 0.45;
          pfVar5[1] = pfVar5[1] * 0.45;
          pfVar5[2] = pfVar5[2] * 0.45;
          pfVar5[8] = pfVar5[8] * 0.9;
          pfVar5[9] = pfVar5[9] * 0.9;
          sound::PlayMobySound(0,0,moby);
          moby->state = '\x05';
        }
      }
    }
  }
  else if (bVar1 < 6) {
    pfVar5[2] = -(DAT_0071f418 * 10.8 * 0.33333334 - pfVar5[2]);
    fVar6 = (moby->rotation).x;
    (moby->pos).x = (moby->pos).x + *pfVar5;
    (moby->pos).y = (moby->pos).y + pfVar5[1];
    (moby->pos).z = (moby->pos).z + pfVar5[2];
    dVar27 = (double)fastfunc::FastWrapRot(fVar6,pfVar5[8]);
    (moby->rotation).x = (float)dVar27;
    dVar27 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar5[9]);
    fVar9 = (moby->pos).x;
    (moby->rotation).y = (float)dVar27;
    uVar11 = (int)fVar9 >> 0x1f;
    iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
    if ((((iVar21 < 0x41400000) || (0x447cc000 < iVar21)) ||
        (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
        iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x447cc000 < iVar21 || iVar21 < 0x41400000))
       || ((fVar9 = (moby->pos).z, uVar11 = (int)fVar9 >> 0x1f,
           iVar21 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar21 < 0x41400000 ||
           (0x447cc000 < iVar21)))) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 001f1a2c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1190_001f1a2c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1190_001f1a2c(void)

{
  DAT_00766038 = 0x10000;
  return;
}



//==== 001f1a40  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M1190_001f1a40(void)
// callers(0): 
// callees(1): 000f0ea8 mobyfunc::AttachManipulator
// strings: 0096c074: 'None'

void mobyupdate_helpers::M1190_001f1a40(int param_1)

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



//==== 001f1b50  ns=mobyupdate_unsorted  size=0x408
// sig: undefined UpdateMoby_1190(MobyInstance * moby)
// callers(0): 
// callees(9): 000e8aa4 memcard::memcard_Save; 000f0ea8 mobyfunc::AttachManipulator; 000f1e50 mobyfunc::SetLevelFlag; 00106360 mobyutil::MB_SetZBoundsFromGround; 00110b70 mobyutil::MB_IsPntInCuboid; 00112c20 mobyutil::MB_UnlockLevel; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870; 00502578 fastfunc::FastWrapRot
// strings: 0096c074: 'None'

/* Moby 1190 */

void mobyupdate_unsorted::UpdateMoby_1190(MobyInstance *moby)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  float fVar8;
  short sVar10;
  int iVar9;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pvVar7 = moby->pVar;
  if ((moby->enabled != '\0') &&
     (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 30.0)) {
    mobyutil::MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar9 = 0;
    puVar11 = &DAT_0095cd50;
    sVar10 = boot::g_SpaceSceneMobyCnt._0_2_;
    if (0 < boot::g_SpaceSceneMobyCnt._0_2_) {
      do {
        if ((((MobyInstance *)puVar11[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          mobyfunc::AttachManipulator((MobyInstance *)puVar11[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar10 = boot::g_SpaceSceneMobyCnt._0_2_;
        }
        iVar9 = iVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar9 < sVar10);
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        moby->collision = (ushort *)0x0;
        moby->state = '\x03';
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
      else {
        moby->state = '\x01';
        FUN_004d3720(moby,pvVar7);
      }
    }
    else {
      iVar9 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x140));
      uVar2 = 0x3f800000;
      if (iVar9 != 0) {
        uVar2 = 0x437f0000;
      }
      *(undefined4 *)((int)pvVar7 + 0xc) = uVar2;
      iVar9 = FUN_004d3870(moby,pvVar7);
      if (iVar9 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (*(short *)((int)pvVar7 + 4) == 2) {
      mobyutil::MB_UnlockLevel(Blarg);
      mobyfunc::SetLevelFlag(moby->levelFlagIdx);
      fVar3 = (moby->transform).v0.y;
      fVar4 = (moby->transform).v0.x;
      fVar5 = (moby->transform).v0.z;
      fVar6 = 0.0;
      dVar17 = (double)(moby->rotation).x;
      dVar18 = (double)(moby->rotation).y;
      dVar19 = (double)(moby->rotation).w;
      fVar8 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar8 == 0.0) {
        fVar5 = (moby->transform).v0.w;
        fVar4 = fVar6;
        fVar3 = fVar6;
      }
      else {
        fVar8 = 2.0 / fVar8;
        fVar6 = fVar5 * fVar8;
        fVar5 = (moby->transform).v0.w;
        fVar4 = fVar4 * fVar8;
        fVar3 = fVar3 * fVar8;
      }
      dVar16 = (double)fVar5;
      dVar15 = (double)(fVar4 + (moby->pos).x);
      dVar14 = (double)(fVar3 + (moby->pos).y);
      dVar13 = (double)(fVar6 + (moby->pos).z);
      dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.14159);
      DAT_0095cd60 = (float)dVar15;
      DAT_0095cd64 = (float)dVar14;
      DAT_0095cd68 = (float)dVar13;
      DAT_0095cd6c = (float)dVar16;
      DAT_0095cd70 = (float)dVar17;
      DAT_0095cd74 = (float)dVar18;
      DAT_0095cd78 = (float)dVar12;
      DAT_0095cd7c = (float)dVar19;
      DAT_0095cd9a = 1;
      memcard::memcard_Save(0,-1);
      moby->collision = (ushort *)0x0;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      moby->state = '\x03';
    }
    else if (g_gameMode != GAME_MODE_SCENE) {
      FUN_004d3870(moby,pvVar7);
    }
  }
  else if (bVar1 < 4) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  return;
}



//==== 001f1f58  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1193_001f1f58(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1193_001f1f58(void)

{
  DAT_007660a8 = 0x10000;
  return;
}



//==== 001f1fc0  ns=mobyupdate_unsorted  size=0xa1c
// sig: undefined UpdateMoby_1193(MobyInstance * moby)
// callers(0): 
// callees(14): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 001099f8 mobyutil::Lerp_vec4; 0010e030 mobyutil::MB_genericExplosion; 00126f50 partupd::SpawnPart_23; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt
// strings: 001f1f70: '?&ff' (raw)

/* Moby 1193 */

void mobyupdate_unsorted::UpdateMoby_1193(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  int iVar19;
  undefined8 uVar16;
  int iVar20;
  short sVar22;
  uint uVar21;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_b0 [16];
  float afStack_a0 [14];
  
  lVar15 = (longlong)(int)moby;
  lVar23 = lVar15 + 0x10;
  pvVar8 = moby->pVar;
  iVar19 = collproc::CollSphere(0x3fe4ccccc0000000,lVar23,&DAT_001f1f70,0,lVar15);
  if (((iVar19 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     (CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))) {
    moby->state = '\x03';
  }
  iVar19 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x20);
  bVar2 = moby->state;
  fVar4 = (moby->pos).w;
  if (iVar19 == 0) {
    if (bVar2 < 2) {
      fVar5 = (moby->pos).x + *(float *)((int)pvVar8 + 0x10);
      fVar1 = (moby->pos).y + *(float *)((int)pvVar8 + 0x14);
      fVar6 = (moby->pos).z + *(float *)((int)pvVar8 + 0x18);
      fVar11 = *(float *)((int)pvVar8 + 0x18) - *(float *)((int)pvVar8 + 0x1c);
      *(float *)((int)pvVar8 + 0x18) = fVar11;
      if ((moby->state == '\x01') && (fVar11 < 0.0)) {
        moby->state = '\0';
      }
      fastfunc::FastDecTimerS16((int)pvVar8 + 0x28);
      if (*(short *)((int)pvVar8 + 0x28) != 0) {
        iVar19 = 0;
        dVar26 = 0.33329999446868896;
        dVar27 = 0.5;
        dVar28 = 45000.0;
        dVar29 = 5000.0;
        uVar30 = 0x3f999999a0000000;
        uVar31 = 0x3ff0000000000000;
        auVar34 = loadVectorLeftIndexed(0x20,0x1f1f70);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        do {
          mobyutil::Lerp_vec4((float)((double)(longlong)iVar19 * dVar26),afStack_a0);
          mobyutil::MB_randInt(6);
          mobyutil::MB_randInt(2);
          dVar24 = (double)fastfunc::FastIntToDouble
                                     ((int)(animationSpeed *
                                           (float)((double)(longlong)DAT_007660d0 + dVar27)));
          uVar16 = partupd::SpawnPart_23
                             (uVar30,uVar31,uVar31,
                              (double)(float)((double)(float)((double)(longlong)
                                                                      (int)*(short *)((int)pvVar8 +
                                                                                     0x28) / dVar24)
                                              * dVar28 + dVar29),afStack_a0);
          iVar20 = (int)uVar16;
          if (iVar20 != 0) {
            auVar32 = ZEXT416(0xffffffff);
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar32 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
            auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
            auVar33 = vectorSplatHalfWord(auVar32,1);
            auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xff;
            uVar10 = storeVectorElementHalfWordIndexed(auVar33,10,uVar16);
            *(undefined2 *)(iVar20 + 10) = uVar10;
            *(undefined4 *)(iVar20 + 0x24) = 2;
            *(undefined1 *)(iVar20 + 0x2a) = 0x7f;
            uVar9 = storeVectorElementByteIndexed
                              (auVar32 | auVar32 << 8 | auVar32 << 0x10 | auVar32 << 0x18 |
                               auVar32 << 0x20 | auVar32 << 0x28 | auVar32 << 0x30 | auVar32 << 0x38
                               | auVar32 << 0x40 | auVar32 << 0x48 | auVar32 << 0x50 |
                               auVar32 << 0x58 | auVar32 << 0x60 | auVar32 << 0x68 | auVar32 << 0x70
                               | auVar32 << 0x78,0x2b,uVar16);
            *(undefined1 *)(iVar20 + 0x2b) = uVar9;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < 3);
      }
      iVar19 = collproc::CollLine(lVar23,local_b0,0,lVar15,0);
      if (iVar19 == 0) {
        (moby->pos).x = fVar5;
        (moby->pos).y = fVar1;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar4;
      }
      else if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
              (CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))) {
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
      }
      else {
        (moby->pos).x = fVar5;
        (moby->pos).y = fVar1;
        (moby->pos).z = fVar6;
        (moby->pos).w = fVar4;
      }
      iVar19 = collproc::CollSphere((double)DAT_007660cc,lVar23);
      if (((iVar19 != 0) && ((moby->state == '\0' || ((moby->pos).z - CollOutput.ip.z < 0.0)))) &&
         ((CollOutput.pMoby == (MobyInstance *)0x0 ||
          (CollOutput.pMoby != *(MobyInstance **)((int)pvVar8 + 0x24))))) {
        dVar27 = 0.0;
        fVar1 = SQRT(CollOutput.normal.z * CollOutput.normal.z +
                     CollOutput.normal.x * CollOutput.normal.x +
                     CollOutput.normal.y * CollOutput.normal.y);
        fVar5 = DAT_007660cc / fVar1;
        dVar26 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar26 = (double)(CollOutput.normal.x * fVar5);
        }
        dVar28 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar28 = (double)(CollOutput.normal.y * fVar5);
        }
        dVar29 = dVar27;
        if (0.0 - fVar1 < 0.0) {
          dVar29 = (double)(CollOutput.normal.z * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar26 = (double)(CollOutput.normal.x * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar28 = (double)(CollOutput.normal.y * fVar5);
        }
        if (fVar1 - 0.0 < 0.0) {
          dVar29 = (double)(CollOutput.normal.z * fVar5);
        }
        (moby->pos).x = (float)((double)CollOutput.ip.x + dVar26);
        (moby->pos).y = (float)((double)CollOutput.ip.y + dVar28);
        (moby->pos).z = (float)((double)CollOutput.ip.z + dVar29);
        (moby->pos).w = CollOutput.ip.w;
        fastfunc::FastVecNormalize((int)pvVar8 + 0x10,(int)pvVar8 + 0x10,0xa10980);
        sound::PlayMobySound(1,0,moby);
        sVar22 = *(short *)((int)pvVar8 + 0x2a);
        if (moby->state == '\0') {
          moby->state = '\x01';
          sVar22 = *(short *)((int)pvVar8 + 0x2a) + 1;
          *(short *)((int)pvVar8 + 0x2a) = sVar22;
          if (sVar22 == 1) {
            fVar5 = *(float *)((int)pvVar8 + 0x14);
            fVar6 = *(float *)((int)pvVar8 + 0x10);
            dVar24 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
            fVar1 = (float)((double)(mobyutil::g_FrameTime * DAT_007660e8) / dVar24);
            dVar29 = (double)(fVar6 * fVar1);
            dVar28 = (double)(fVar5 * fVar1);
            dVar26 = dVar27;
            if (dVar27 - dVar24 < 0.0) {
              dVar26 = dVar29;
            }
            dVar25 = dVar27;
            if (dVar27 - dVar24 < 0.0) {
              dVar25 = dVar28;
            }
            if (dVar24 - dVar27 < 0.0) {
              dVar26 = dVar29;
            }
            if (dVar24 - dVar27 < 0.0) {
              dVar25 = dVar28;
            }
            *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
            *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
            *(float *)((int)pvVar8 + 0x18) = *(float *)((int)pvVar8 + 0x18) * DAT_007660e4;
          }
          else {
            fVar1 = *(float *)((int)pvVar8 + 0x14);
            fVar5 = *(float *)((int)pvVar8 + 0x10);
            fVar6 = fVar1 * DAT_007660e4;
            fVar11 = fVar5 * DAT_007660e4;
            fVar12 = mobyutil::g_FrameTime * DAT_007660d4;
            fVar7 = *(float *)((int)pvVar8 + 0x18) * DAT_007660e4;
            if ((double)fVar12 <= (double)SQRT(fVar11 * fVar11 + fVar6 * fVar6)) {
              *(float *)((int)pvVar8 + 0x10) = fVar11;
              *(float *)((int)pvVar8 + 0x14) = fVar6;
              *(float *)((int)pvVar8 + 0x18) = fVar7;
            }
            else {
              *(float *)((int)pvVar8 + 0x18) = fVar7;
              dVar24 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
              fVar6 = (float)((double)fVar12 / dVar24);
              dVar29 = (double)(fVar5 * fVar6);
              dVar28 = (double)(fVar1 * fVar6);
              dVar26 = dVar27;
              if (dVar27 - dVar24 < 0.0) {
                dVar26 = dVar29;
              }
              dVar25 = dVar27;
              if (dVar27 - dVar24 < 0.0) {
                dVar25 = dVar28;
              }
              if (dVar24 - dVar27 < 0.0) {
                dVar26 = dVar29;
              }
              if (dVar24 - dVar27 < 0.0) {
                dVar25 = dVar28;
              }
              *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
              *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
            }
          }
        }
        if (3 < sVar22) {
          moby->state = '\x02';
          fVar1 = *(float *)((int)pvVar8 + 0x14);
          fVar5 = *(float *)((int)pvVar8 + 0x10);
          dVar29 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1);
          dVar26 = (double)(float)(dVar29 * (double)DAT_007660e4);
          *(float *)((int)pvVar8 + 0x1c) = (float)(dVar29 * (double)DAT_007660e4);
          dVar28 = (double)(mobyutil::g_FrameTime * DAT_007660d4);
          if (dVar26 < dVar28) {
            *(float *)((int)pvVar8 + 0x1c) = mobyutil::g_FrameTime * DAT_007660d4;
            dVar26 = dVar28;
          }
          *(undefined4 *)((int)pvVar8 + 0x18) = 0;
          dVar24 = (double)(fVar5 * (float)(dVar26 / dVar29));
          dVar28 = (double)(fVar1 * (float)(dVar26 / dVar29));
          dVar26 = dVar27;
          if (dVar27 - dVar29 < 0.0) {
            dVar26 = dVar24;
          }
          dVar25 = dVar27;
          if (dVar27 - dVar29 < 0.0) {
            dVar25 = dVar28;
          }
          if (dVar29 - dVar27 < 0.0) {
            dVar26 = dVar24;
          }
          if (dVar29 - dVar27 < 0.0) {
            dVar25 = dVar28;
          }
          *(float *)((int)pvVar8 + 0x10) = (float)dVar26;
          *(float *)((int)pvVar8 + 0x14) = (float)dVar25;
          dVar26 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)pvVar8 + 0x20));
          *(float *)((int)pvVar8 + 0x2c) = (float)(1.0 / dVar26);
        }
      }
    }
    else if (bVar2 < 3) {
      dVar26 = (double)((float)(longlong)*(int *)((int)pvVar8 + 0x20) *
                       *(float *)((int)pvVar8 + 0x2c));
      uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * -188.0 + 255.0));
      uVar17 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * 230.0));
      uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar26 * 132.0));
      moby->field60_0x90 =
           (uint)((uVar17 & 0xffffffff) << 8) | uVar21 | (uint)((uVar18 & 0xffffffff) << 0x10) |
           0xff000000;
      fVar1 = *(float *)((int)pvVar8 + 0x10);
      fVar5 = *(float *)((int)pvVar8 + 0x14);
      fVar6 = *(float *)((int)pvVar8 + 0x18);
      fVar11 = *(float *)((int)pvVar8 + 0x1c) * ((DAT_007660d8 - 1.0) * DAT_0071f408 + 1.0);
      *(float *)((int)pvVar8 + 0x1c) = fVar11;
      fVar7 = mobyutil::g_FrameTime * DAT_007660d4;
      if (fVar11 < fVar7) {
        *(float *)((int)pvVar8 + 0x1c) = fVar7;
        fVar11 = fVar7;
      }
      fVar7 = 0.0;
      fVar14 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5);
      fVar11 = fVar11 / fVar14;
      fVar12 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar12 = fVar5 * fVar11;
      }
      fVar13 = fVar7;
      if (0.0 - fVar14 < 0.0) {
        fVar13 = fVar1 * fVar11;
      }
      if (0.0 - fVar14 < 0.0) {
        fVar7 = fVar6 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar12 = fVar5 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar13 = fVar1 * fVar11;
      }
      if (fVar14 - 0.0 < 0.0) {
        fVar7 = fVar6 * fVar11;
      }
      *(float *)((int)pvVar8 + 0x14) = fVar12;
      *(float *)((int)pvVar8 + 0x10) = fVar13;
      *(float *)((int)pvVar8 + 0x18) = fVar7;
      (moby->pos).x = (moby->pos).x + fVar13;
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar8 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar8 + 0x18);
    }
    else if (bVar2 < 4) goto LAB_001f2880;
    uVar3 = moby->state;
    if ((uVar3 == '\0') || (uVar3 == '\x01')) {
      fVar1 = SQRT(*(float *)((int)pvVar8 + 0x10) * *(float *)((int)pvVar8 + 0x10) +
                   *(float *)((int)pvVar8 + 0x14) * *(float *)((int)pvVar8 + 0x14));
    }
    else {
      if (uVar3 != '\x02') {
        return;
      }
      fVar1 = *(float *)((int)pvVar8 + 0x1c);
    }
    fVar5 = mobyutil::g_FrameTime * 0.2;
    fVar6 = mobyutil::g_FrameTime * 6.0;
    if (fVar1 - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    if (fVar6 - fVar1 < 0.0) {
      fVar1 = fVar6;
    }
    dVar26 = (double)fastfunc::FastWrapRot
                               ((((fVar1 - fVar5) / (fVar6 - fVar5)) * 7.0 + 1.0) * 0.017453292,
                                (moby->rotation).y);
    (moby->rotation).y = (float)dVar26;
  }
  else {
    moby->state = '\x03';
LAB_001f2880:
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x3ff0000000000000,0x4000000000000000,0x3ff0000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar15,(int)pvVar8 + 0x10,
               lVar23,1,0,5,2,4);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001f29e8  ns=Global  size=0x2bc
// sig: undefined FUN_001f29e8(void)
// callers(2): 001ecb08 mobyupdate_unsorted::UpdateMoby_1170; 0033dad8 mobyupdate_unsorted::UpdateMoby_31
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance *
FUN_001f29e8(double param_1,undefined4 param_2,f32 *param_3,float *param_4,undefined8 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  MobyInstance *pMVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f31;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar13;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x14] = unaff_r27;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  puVar8[0x18] = unaff_r31;
  pMVar15 = mobyfunc::CreateMoby(0x4a9);
  if (pMVar15 != (MobyInstance *)0x0) {
    pvVar5 = pMVar15->pVar;
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\0';
    *(undefined4 *)((int)pvVar5 + 0x24) = param_2;
    (pMVar15->pos).x = *param_3;
    (pMVar15->pos).y = param_3[1];
    (pMVar15->pos).z = param_3[2];
    (pMVar15->pos).w = param_3[3];
    *(float *)((int)pvVar5 + 0x10) = *param_4;
    *(float *)((int)pvVar5 + 0x14) = param_4[1];
    fVar1 = param_4[2];
    *(float *)((int)pvVar5 + 0x1c) = (float)param_1;
    *(float *)((int)pvVar5 + 0x18) = fVar1;
    *(undefined4 *)((int)pvVar5 + 0x20) = param_6;
    uVar12 = DAT_007660d0;
    *(undefined2 *)((int)pvVar5 + 0x2a) = 0;
    *(short *)((int)pvVar5 + 0x28) = (short)uVar12;
    fVar1 = 0.0;
    (pMVar15->rotation).x = 0.0;
    (pMVar15->rotation).y = 0.0;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar9 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
    *(float *)(puVar8 + 0xe) = fVar9 - fVar3;
    fVar2 = pMVar15->scale;
    uVar16 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4
    ;
    fVar6 = fVar9;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar7 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar9;
    }
    if (0.0 < fVar6) {
      lVar19 = uVar13 - 0xc0;
      lVar17 = uVar13 - 0x4c;
      lVar18 = uVar13 - 0x5c;
      lVar21 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x10) = fVar6;
      *(float *)(puVar8 + 0xf) = fVar6;
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)((int)puVar8 + 0x74) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar3;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar6;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar19 + 0x74) = *(float *)((int)lVar19 + 100) * fVar6 * fVar6;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar13 - 0x5c;
      lVar21 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar14;
      do {
        fVar6 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar6;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x74) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar7;
    }
    (pMVar15->rotation).z = fVar1;
    pMVar15->scale = fVar2 * DAT_007660dc;
    mobyfunc::UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}



//==== 001f2ca4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1196_001f2ca4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1196_001f2ca4(void)

{
  DAT_00766138 = 0x10000;
  return;
}



//==== 001f2cb8  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1196_001f2cb8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1196_001f2cb8(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
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



//==== 001f2d58  ns=mobyupdate_helpers  size=0x8a4
// sig: undefined M1196_001f2d58(void)
// callers(1): 001f3688 mobyupdate_unsorted::UpdateMoby_1196
// callees(13): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1196_001f2d58(MobyInstance *param_1)

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
  if (param_1->state != '\v') {
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
        auVar32 = loadVectorLeftIndexed(0x20,0x1f2d20);
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
        if (DAT_00fa3840 != 0) {
          mobyutil::MB_UnlockSkillPoint(0x10);
        }
        MVar5 = param_1->modeBits;
        dVar28 = 0.0;
        *(undefined4 *)((int)pvVar6 + 0x20) = 0;
        param_1->modeBits =
             MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\x05') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\v';
        fVar2 = DAT_0071f418 * 26.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = mobyutil::g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        if (((uint)pfVar18[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar18;
          fVar7 = (param_1->pos).y - pfVar18[1];
          dVar30 = ABS((double)fVar2);
          dVar29 = ABS((double)fVar7);
          *(float *)((int)puVar13 + 0x74) = fVar2;
          *(float *)(puVar13 + 0xf) = fVar7;
          *(float *)((int)puVar13 + 0x7c) = (float)(dVar30 - dVar29);
          uVar20 = (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1d) & 4;
          uVar23 = uVar20 << 2;
          dVar31 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar23);
          dVar29 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)((int)puVar13 + 0x7c) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar15 = uVar25 - 0xf0;
            lVar21 = uVar25 - 0x7c;
            lVar24 = uVar25 - 0x6c;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
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
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
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
          dVar29 = ABS((double)pfVar18[4]);
          dVar31 = ABS((double)pfVar18[5]);
          uVar23 = ZEXT48(&mobyutil::g_atanQuadrantTable);
          *(float *)(puVar13 + 0x10) = (float)(dVar29 - dVar31);
          uVar20 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar30 = dVar29;
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar7 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          if (dVar28 < dVar30) {
            lVar15 = uVar25 - 0xf0;
            lVar21 = uVar25 - 0x5c;
            lVar24 = uVar25 - 0x4c;
            lVar27 = 2;
            fVar3 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
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
              lVar15 = lVar15 + 8;
              lVar21 = lVar21 + 8;
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
        mobyutil::MB_StartKick(dVar28,param_1,uVar26 + 0x60,uVar23,5,1,0);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        mobyutil::MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
      param_1->damage = -1;
    }
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar22 = &DAT_001f2d20;
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
    puVar22 = &DAT_001f2d20;
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



//==== 001f3688  ns=mobyupdate_unsorted  size=0x1624
// sig: undefined UpdateMoby_1196(MobyInstance * moby)
// callers(0): 
// callees(21): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100ef8 mobyutil::MB_MoveAndCollide2; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109c30 mobyutil::OrganicDelt; 00109ec0 mobyutil::DeltAng; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110488 mobyutil::ClampVec3Magnitude; 00119a18 mobyfunc::DoManipulator; 001f2d58 mobyupdate_helpers::M1196_001f2d58; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 1196 */

void mobyupdate_unsorted::UpdateMoby_1196(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  ushort uVar11;
  void *pvVar12;
  Spline *pSVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ushort *puVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  MobyInstance *pMVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
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
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1d0;
  puVar15 = (ulonglong *)lVar20;
  *puVar15 = uVar17;
  puVar15[0x3c] = in_LR;
  puVar15[0x33] = in_f25;
  puVar15[0x34] = in_f26;
  puVar15[0x35] = in_f27;
  puVar15[0x36] = in_f28;
  puVar15[0x37] = in_f29;
  puVar15[0x38] = in_f30;
  puVar15[0x39] = in_f31;
  puVar15[0x32] = unaff_r31;
  puVar15[0x30] = unaff_r29;
  puVar15[0x31] = unaff_r30;
  puVar15[0x2f] = unaff_r28;
  pvVar12 = moby->pVar;
  uVar31 = ZEXT48(pvVar12);
  mobyupdate_helpers::M1196_001f2d58(lVar18);
  iVar23 = *(int *)((int)pvVar12 + 0x100);
  mobyfunc::DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar12 + 0x270));
  if ((moby->enabled != '\0') &&
     (fVar47 = (moby->pos).y - GameCamera.posY, fVar1 = (moby->pos).x - GameCamera.posX,
     fVar2 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar47 * fVar47) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x17';
  }
  bVar3 = moby->state;
  dVar37 = 1.0;
  moby->unk58 = 1.0;
  if (bVar3 < 6) {
    if (bVar3 == 5) {
      moby->unk58 = 4.0;
      iVar23 = *(int *)((int)pvVar12 + 0x158);
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x150)];
      dVar42 = (double)pSVar13->points[iVar23].x;
      dVar41 = (double)pSVar13->points[iVar23].y;
      fVar47 = (float)(dVar42 - (double)(moby->pos).x);
      dVar40 = (double)pSVar13->points[iVar23].z;
      fVar1 = (float)(dVar41 - (double)(moby->pos).y);
      dVar39 = (double)pSVar13->points[iVar23].w;
      fVar2 = (float)(dVar40 - (double)(moby->pos).z);
      dVar38 = (double)SQRT(fVar2 * fVar2 + fVar47 * fVar47 + fVar1 * fVar1);
      *(float *)(puVar15 + 0x10) =
           SQRT(*(float *)((int)pvVar12 + 0x128) * *(float *)((int)pvVar12 + 0x128) +
                *(float *)((int)pvVar12 + 0x120) * *(float *)((int)pvVar12 + 0x120) +
                *(float *)((int)pvVar12 + 0x124) * *(float *)((int)pvVar12 + 0x124));
      dVar36 = 0.0;
      *(float *)(puVar15 + 0x17) = fVar47;
      *(float *)(puVar15 + 0x18) = ABS(fVar47) - ABS(fVar1);
      *(float *)((int)puVar15 + 0xbc) = fVar1;
      *(undefined4 *)((int)puVar15 + 0x84) = 0;
      uVar29 = (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar15 + 0x17));
      if (*(float *)(puVar15 + 0x18) - 0.0 < 0.0) {
        fVar2 = ABS(fVar1);
      }
      fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      fVar1 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar15 + 0xbc));
      if (*(float *)(puVar15 + 0x18) - 0.0 < 0.0) {
        fVar8 = ABS(fVar47);
      }
      dVar33 = dVar36;
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1c0;
        lVar25 = uVar17 - 0x8c;
        lVar27 = uVar17 - 0x7c;
        lVar32 = 2;
        fVar47 = (fVar8 - fVar2) / (fVar8 + fVar2);
        fVar2 = fVar47 * fVar47;
        *(float *)(puVar15 + 0x2a) = fVar47;
        *(float *)(puVar15 + 0x29) = fVar47;
        *(float *)((int)puVar15 + 0x14c) = fVar47;
        *(float *)((int)puVar15 + 0x144) = fVar47;
        fVar47 = fVar2 * fVar2;
        *(float *)(puVar15 + 0x29) = *(float *)(puVar15 + 0x29) * fVar2;
        *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar47;
        *(float *)(puVar15 + 0x2a) = *(float *)(puVar15 + 0x2a) * fVar47 * fVar2;
        do {
          *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x134) * fVar47 * fVar47;
          iVar23 = (int)lVar25;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar47 * fVar47;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar27 = uVar17 - 0x8c;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar27;
        do {
          fVar47 = *pfVar26;
          fVar2 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x144) = *(float *)((int)lVar19 + 0x144) * fVar47;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar2;
          lVar25 = lVar25 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar25 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar21 = (int)lVar27;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x144)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar9 + fVar1);
      }
      mobyutil::OrganicDeltAng
                ((float)dVar33,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
                 mobyutil::g_FrameTime * 50.265484,&(moby->rotation).z,0x1f35fc,
                 (float *)((int)pvVar12 + 0x170));
      fVar47 = (float)(dVar42 - (double)(moby->pos).x);
      fVar1 = (float)(dVar41 - (double)(moby->pos).y);
      dVar34 = ABS((double)fVar47);
      dVar35 = ABS((double)fVar1);
      *(float *)((int)puVar15 + 0xac) = fVar47;
      *(float *)(puVar15 + 0x16) = fVar1;
      fVar47 = (moby->rotation).z;
      *(float *)((int)puVar15 + 0xb4) = (float)(dVar34 - dVar35);
      uVar29 = (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1d) & 4;
      dVar33 = ABS((double)*(float *)((int)puVar15 + 0xac));
      if ((double)*(float *)((int)puVar15 + 0xb4) - dVar36 < 0.0) {
        dVar33 = dVar35;
      }
      fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar35 = ABS((double)*(float *)(puVar15 + 0x16));
      if ((double)*(float *)((int)puVar15 + 0xb4) - dVar36 < 0.0) {
        dVar35 = dVar34;
      }
      fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar34 = dVar36;
      if (dVar36 < dVar33) {
        lVar19 = uVar17 - 0x1c0;
        lVar27 = uVar17 - 0x9c;
        lVar25 = uVar17 - 0xac;
        lVar32 = 2;
        fVar9 = (float)(dVar35 - dVar33) / (float)(dVar35 + dVar33);
        fVar8 = fVar9 * fVar9;
        *(float *)(puVar15 + 0x26) = fVar9;
        *(float *)(puVar15 + 0x25) = fVar9;
        *(float *)((int)puVar15 + 300) = fVar9;
        *(float *)((int)puVar15 + 0x124) = fVar9;
        fVar9 = fVar8 * fVar8;
        *(float *)(puVar15 + 0x25) = *(float *)(puVar15 + 0x25) * fVar8;
        *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar9;
        *(float *)(puVar15 + 0x26) = *(float *)(puVar15 + 0x26) * fVar9 * fVar8;
        do {
          *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x114) * fVar9 * fVar9;
          iVar23 = (int)lVar25;
          lVar25 = lVar25 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar9 * fVar9;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar27 = uVar17 - 0xac;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar25 = lVar27;
        do {
          fVar9 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x124) = *(float *)((int)lVar19 + 0x124) * fVar9;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar8;
          lVar25 = lVar25 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar19 = 2;
        dVar33 = dVar36;
        do {
          iVar23 = (int)lVar20;
          iVar21 = (int)lVar27;
          lVar20 = lVar20 + 0x10;
          lVar27 = lVar27 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x124)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar34 = (double)((float)(dVar33 + 0.7853981852531433) * fVar1 + fVar2);
      }
      dVar33 = (double)fastfunc::FastSubRots((float)dVar34,fVar47);
      if (0.7853981852531433 <= dVar33) {
        *(undefined4 *)((int)pvVar12 + 300) = 0;
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(undefined4 *)((int)pvVar12 + 0x124) = 0;
        *(undefined4 *)((int)pvVar12 + 0x120) = 0;
      }
      else {
        mobyutil::OrganicDelt
                  ((float)dVar38,DAT_0071f418 * 20.0,DAT_0071f418 * 20.0,
                   mobyutil::g_FrameTime * 20.0,(float *)((int)puVar15 + 0x84),0x720000,
                   (float *)(puVar15 + 0x10));
        *(float *)((int)pvVar12 + 0x120) = (float)(dVar42 - (double)(moby->pos).x);
        *(float *)((int)pvVar12 + 0x124) = (float)(dVar41 - (double)(moby->pos).y);
        fVar47 = (moby->pos).z;
        *(float *)((int)pvVar12 + 300) = (float)dVar39;
        *(float *)((int)pvVar12 + 0x128) = (float)(dVar40 - (double)fVar47);
        mobyutil::ClampVec3Magnitude
                  ((double)*(float *)(puVar15 + 0x10),(Vec4 *)((int)pvVar12 + 0x120));
      }
      uVar43 = 0x3fe0000000000000;
      mobyutil::MB_MoveAndCollide2(0x3fe0000000000000,dVar36,lVar18,uVar31 + 0x120);
      if (dVar38 < dVar37) {
        iVar23 = *(int *)((int)pvVar12 + 0x158);
        iVar21 = iVar23 + 1;
        *(int *)((int)pvVar12 + 0x158) = iVar21;
        if ((int)Splines[*(int *)((int)pvVar12 + 0x150)]->points[iVar23].w < 1) {
          if (iVar21 == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
            moby->state = '\n';
            if (moby->animationId != '\x04') {
              puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
            }
            mobyutil::GetGroundZ(uVar43,lVar18 + 0x10,0);
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
          moby->state = '\x06';
          if (moby->animationId != '\x03') {
            puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar18,3,0,*(undefined4 *)((int)puVar15 + 0x16c));
          }
        }
      }
    }
    else if (bVar3 == 4) {
      moby->unk58 = 4.0;
      fVar47 = mobyutil::OrganicDelt
                         (*(float *)((int)pvVar12 + 0x138) + 2.0,DAT_0071f418 * 18.0,
                          DAT_0071f418 * 18.0,mobyutil::g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar12 + 0x128));
      if (fVar47 == 0.0) {
        moby->state = '\x05';
      }
    }
    else if (bVar3 == 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar12 + 300) = 0;
        *(undefined4 *)((int)pvVar12 + 0x128) = 0;
        *(undefined4 *)((int)pvVar12 + 0x124) = 0;
        *(undefined4 *)((int)pvVar12 + 0x120) = 0;
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
      }
    }
    else if (bVar3 == 1) {
      if (((*(int *)((int)pvVar12 + 0x104) != 2) || (*(int *)((int)pvVar12 + 0x174) == 0)) &&
         (moby->state = '\x02', moby->animationId != '\x01')) {
        puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar18,1,0,*(undefined4 *)((int)puVar15 + 0x16c));
      }
    }
    else if (bVar3 == 0) {
      *(undefined4 *)((int)pvVar12 + 0x30) = 0x3f000000;
      *(undefined4 *)((int)pvVar12 + 0x20) = 0x3f800000;
      *(undefined1 *)((int)pvVar12 + 0x28) = 0;
      *(undefined1 *)((int)pvVar12 + 0x29) = 1;
      *(undefined2 *)((int)pvVar12 + 0x24) = 1;
      fVar4 = (moby->pos).x;
      MVar10 = moby->modeBits;
      *(f32 *)((int)pvVar12 + 0x130) = fVar4;
      fVar5 = (moby->pos).y;
      *(f32 *)((int)pvVar12 + 0x134) = fVar5;
      fVar6 = (moby->pos).z;
      moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar12 + 0x138) = fVar6;
      fVar7 = (moby->pos).w;
      *(f32 *)((int)pvVar12 + 0x13c) = fVar7;
      *(f32 *)((int)pvVar12 + 0x140) = fVar4;
      *(f32 *)((int)pvVar12 + 0x144) = fVar5;
      *(f32 *)((int)pvVar12 + 0x148) = fVar6;
      *(f32 *)((int)pvVar12 + 0x14c) = fVar7;
      if (*(int *)((int)pvVar12 + 0x174) == 1) {
        moby->state = '\x01';
      }
      else {
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else if (bVar3 == 0xb) {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar24 & 1) != 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar18,0x200,0xffffffffffffffff);
      mobyutil::MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar18,lVar18 + 0x10,&DAT_001f35fc,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar3 == 10) {
    fVar47 = *(float *)((int)pvVar12 + 0x140) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar12 + 0x144) - (moby->pos).y;
    pfVar26 = (float *)&mobyutil::g_atanQuadrantTable;
    fVar9 = ABS(fVar47);
    fVar2 = ABS(fVar1);
    *(float *)(puVar15 + 0x11) = fVar47;
    *(float *)((int)puVar15 + 0x8c) = fVar1;
    *(float *)(puVar15 + 0x12) = fVar9 - fVar2;
    dVar37 = 0.0;
    uVar29 = (ulonglong)(*(uint *)(puVar15 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x8c) >> 0x1d) & 4;
    fVar47 = ABS(*(float *)(puVar15 + 0x11));
    if (*(float *)(puVar15 + 0x12) - 0.0 < 0.0) {
      fVar47 = fVar2;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar1 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar15 + 0x8c));
    if (*(float *)(puVar15 + 0x12) - 0.0 < 0.0) {
      fVar8 = fVar9;
    }
    dVar36 = dVar37;
    if (0.0 < fVar47) {
      lVar19 = uVar17 - 0x1c0;
      lVar25 = uVar17 - 0x10c;
      lVar27 = uVar17 - 0xfc;
      lVar32 = 2;
      fVar47 = (fVar8 - fVar47) / (fVar8 + fVar47);
      fVar9 = fVar47 * fVar47;
      *(float *)(puVar15 + 0x1a) = fVar47;
      *(float *)(puVar15 + 0x19) = fVar47;
      *(float *)((int)puVar15 + 0xcc) = fVar47;
      *(float *)((int)puVar15 + 0xc4) = fVar47;
      fVar47 = fVar9 * fVar9;
      *(float *)(puVar15 + 0x19) = *(float *)(puVar15 + 0x19) * fVar9;
      *(float *)((int)puVar15 + 0xcc) = *(float *)((int)puVar15 + 0xcc) * fVar47;
      *(float *)(puVar15 + 0x1a) = *(float *)(puVar15 + 0x1a) * fVar47 * fVar9;
      do {
        *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xb4) * fVar47 * fVar47;
        iVar23 = (int)lVar25;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar47 * fVar47;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0x10c;
      pfVar26 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        fVar47 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar47;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0xc4)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar2 + fVar1);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar36,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,pfVar26,
               uVar31 + 0x170);
    *(float *)((int)pvVar12 + 0x40) = *(float *)((int)pvVar12 + 0x140) - (moby->pos).x;
    *(float *)((int)pvVar12 + 0x44) = *(float *)((int)pvVar12 + 0x144) - (moby->pos).y;
    fVar47 = (moby->pos).z;
    *(undefined4 *)((int)pvVar12 + 0x4c) = *(undefined4 *)((int)pvVar12 + 0x14c);
    *(float *)((int)pvVar12 + 0x48) = *(float *)((int)pvVar12 + 0x148) - fVar47;
    mobyutil::ClampVec3Magnitude
              ((double)(mobyutil::g_FrameTime * 4.0),(Vec4 *)((int)pvVar12 + 0x40));
    fVar47 = (moby->pos).y;
    fVar1 = (moby->pos).z;
    *(float *)(puVar15 + 0xe) = *(float *)((int)pvVar12 + 0x40) + (moby->pos).x;
    *(float *)((int)puVar15 + 0x74) = *(float *)((int)pvVar12 + 0x44) + fVar47;
    *(float *)(puVar15 + 0xf) = *(float *)((int)pvVar12 + 0x48) + fVar1;
    *(undefined4 *)((int)puVar15 + 0x7c) = *(undefined4 *)((int)pvVar12 + 0x4c);
    iVar23 = collproc::CollSphere(0x3fd99999a0000000,uVar17 - 0x160);
    if (iVar23 == 0) {
      fVar4 = *(f32 *)((int)puVar15 + 0x74);
      (moby->pos).x = *(f32 *)(puVar15 + 0xe);
      fVar5 = *(f32 *)(puVar15 + 0xf);
      (moby->pos).y = fVar4;
      fVar4 = *(f32 *)((int)puVar15 + 0x7c);
      (moby->pos).z = fVar5;
      (moby->pos).w = fVar4;
    }
    else {
      *(undefined4 *)((int)pvVar12 + 0x4c) = 0;
      *(undefined4 *)((int)pvVar12 + 0x48) = 0;
      *(undefined4 *)((int)pvVar12 + 0x44) = 0;
      *(undefined4 *)((int)pvVar12 + 0x40) = 0;
      moby->state = '\t';
    }
    if ((double)SQRT(*(float *)((int)pvVar12 + 0x48) * *(float *)((int)pvVar12 + 0x48) +
                     *(float *)((int)pvVar12 + 0x40) * *(float *)((int)pvVar12 + 0x40) +
                     *(float *)((int)pvVar12 + 0x44) * *(float *)((int)pvVar12 + 0x44)) == dVar37) {
      moby->state = '\t';
    }
  }
  else if (bVar3 == 9) {
    iVar23 = fastfunc::FastDecTimerS32(uVar31 + 0x19c);
    if (iVar23 != 0) {
      auVar44 = ZEXT416(0xffffffff);
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar44 = loadVectorLeftIndexed(100,0x1f35fc);
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar44 = vectorMultiplyAddFloatingPoint
                          (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                           auVar45);
      auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
      auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x19c,uVar31
                         );
      *(undefined4 *)((int)pvVar12 + 0x19cU & 0xfffffffc) = uVar14;
      dVar36 = (double)mobyutil::MB_randRangeFloat(0.0,3.0);
      dVar38 = (double)mobyutil::MB_randRot();
      fVar47 = (float)(dVar38 + 1.570796251296997);
      dVar37 = (double)(float)(3.141592502593994 - dVar38);
      if (dVar38 - (double)(float)(3.141592502593994 - dVar38) < 0.0) {
        dVar37 = dVar38;
      }
      fVar1 = 3.1415925 - fVar47;
      if (fVar47 - (3.1415925 - fVar47) < 0.0) {
        fVar1 = fVar47;
      }
      dVar39 = (double)(float)(-3.141592502593994 - dVar38);
      if ((double)(float)(-3.141592502593994 - dVar38) - dVar37 < 0.0) {
        dVar39 = dVar37;
      }
      fVar2 = -3.1415925 - fVar47;
      if ((-3.1415925 - fVar47) - fVar1 < 0.0) {
        fVar2 = fVar1;
      }
      dVar37 = (double)(float)(dVar39 * dVar39);
      fVar9 = fVar2 * fVar2;
      dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar39));
      fVar47 = fVar9 * fVar9 * fVar2;
      dVar38 = (double)(float)(dVar37 * dVar40);
      fVar1 = fVar9 * fVar47;
      dVar39 = (double)((float)(dVar37 * dVar38) * 2.601887e-06 +
                       (float)(dVar38 * -0.0001980741071747616 +
                              (double)(float)(dVar40 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar37 * dVar39) *
                                                             -0.16666656732559204 + dVar39))));
      dVar38 = (double)(fVar9 * fVar1 * 2.601887e-06 +
                       fVar1 * -0.0001980741 +
                       fVar47 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2);
      dVar37 = (double)mobyutil::MB_randRangeFloat(5.0,7.0);
      fVar47 = (float)(dVar37 + (double)*(float *)((int)pvVar12 + 0x138));
      *(float *)((int)pvVar12 + 0x140) =
           (float)(dVar38 * dVar36 + (double)*(float *)((int)pvVar12 + 0x130));
      *(float *)((int)pvVar12 + 0x144) =
           (float)(dVar39 * dVar36 + (double)*(float *)((int)pvVar12 + 0x134));
      *(float *)((int)pvVar12 + 0x148) = fVar47;
      *(float *)((int)pvVar12 + 0x14c) = fVar47;
      moby->state = '\n';
    }
  }
  else if (bVar3 == 8) {
    dVar39 = 0.0;
    mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,0x1f35fc,0x1f35fc,0)
    ;
    fVar47 = *(float *)((int)pvVar12 + 0x130) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar12 + 0x134) - (moby->pos).y;
    dVar36 = ABS((double)fVar47);
    dVar38 = ABS((double)fVar1);
    *(float *)((int)puVar15 + 0x94) = fVar47;
    *(float *)(puVar15 + 0x13) = fVar1;
    *(float *)((int)puVar15 + 0x9c) = (float)(dVar36 - dVar38);
    fVar47 = mobyutil::g_FrameTime;
    uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x13) >> 0x1d) & 4;
    uVar29 = uVar28 << 2 | 0x735900;
    dVar37 = ABS((double)*(float *)((int)puVar15 + 0x94));
    if ((double)*(float *)((int)puVar15 + 0x9c) - dVar39 < 0.0) {
      dVar37 = dVar38;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar38 = ABS((double)*(float *)(puVar15 + 0x13));
    if ((double)*(float *)((int)puVar15 + 0x9c) - dVar39 < 0.0) {
      dVar38 = dVar36;
    }
    fVar2 = *(float *)((int)uVar29 + 4);
    dVar36 = dVar39;
    if (dVar39 < dVar37) {
      lVar19 = uVar17 - 0x1c0;
      lVar25 = uVar17 - 0xec;
      lVar27 = uVar17 - 0xdc;
      lVar32 = 2;
      fVar9 = (float)(dVar38 - dVar37) / (float)(dVar38 + dVar37);
      fVar8 = fVar9 * fVar9;
      *(float *)(puVar15 + 0x1e) = fVar9;
      *(float *)(puVar15 + 0x1d) = fVar9;
      *(float *)((int)puVar15 + 0xec) = fVar9;
      *(float *)((int)puVar15 + 0xe4) = fVar9;
      fVar9 = fVar8 * fVar8;
      *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar8;
      *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar9;
      *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar9 * fVar8;
      do {
        *(float *)((int)lVar19 + 0xe4) = *(float *)((int)lVar19 + 0xd4) * fVar9 * fVar9;
        iVar23 = (int)lVar25;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar9 * fVar9;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0xec;
      uVar29 = ZEXT48(&DAT_007358e0);
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        pfVar26 = (float *)uVar29;
        fVar9 = pfVar26[1];
        uVar29 = uVar29 + 8;
        *(float *)((int)lVar19 + 0xe4) = *(float *)((int)lVar19 + 0xe4) * *pfVar26;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      dVar37 = dVar39;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar23 + 0xe4)) +
                          *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar36 = (double)((float)(dVar37 + 0.7853981852531433) * fVar1 + fVar2);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar36,0x3f947ae140000000,0x3fd3333340000000,(double)(fVar47 * 6.2831855),lVar18,
               uVar29,uVar31 + 0x170);
    fVar2 = mobyutil::g_FrameTime;
    fVar47 = (moby->rotation).z + 1.5707963;
    fVar1 = 3.1415925 - fVar47;
    if (fVar47 - (3.1415925 - fVar47) < 0.0) {
      fVar1 = fVar47;
    }
    fVar9 = -3.1415925 - fVar47;
    if ((-3.1415925 - fVar47) - fVar1 < 0.0) {
      fVar9 = fVar1;
    }
    fVar1 = mobyutil::g_FrameTime * 6.0;
    fVar47 = fVar9 * fVar9;
    fVar8 = fVar47 * fVar47 * fVar9;
    fVar16 = fVar47 * fVar8;
    *(float *)((int)pvVar12 + 0x120) =
         fVar1 * (fVar47 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar8 * 0.0083330255 + fVar47 * fVar9 * -0.16666657 + fVar9);
    fVar47 = (moby->rotation).z;
    fVar9 = 3.1415925 - fVar47;
    if (fVar47 - (3.1415925 - fVar47) < 0.0) {
      fVar9 = fVar47;
    }
    fVar8 = -3.1415925 - fVar47;
    if ((-3.1415925 - fVar47) - fVar9 < 0.0) {
      fVar8 = fVar9;
    }
    *(undefined4 *)((int)pvVar12 + 0x128) = 0;
    fVar47 = fVar8 * fVar8;
    fVar9 = fVar47 * fVar47 * fVar8;
    fVar16 = fVar47 * fVar9;
    *(float *)((int)pvVar12 + 0x124) =
         fVar1 * (fVar47 * fVar16 * 2.601887e-06 +
                 fVar16 * -0.0001980741 +
                 fVar9 * 0.0083330255 + fVar47 * fVar8 * -0.16666657 + fVar8);
    dVar37 = 2.0;
    fVar47 = (*(float *)((int)pvVar12 + 0x138) + 2.0) - (moby->pos).z;
    if ((fVar47 <= fVar1) && (fVar1 = fVar47, fVar47 < fVar2 * -6.0)) {
      fVar1 = fVar2 * -6.0;
    }
    *(float *)((int)pvVar12 + 0x128) = fVar1;
    mobyutil::MB_MoveAndCollide2
              (0x3fe0000000000000,dVar39,lVar18,uVar31 + 0x120,&DAT_001f35fc,0x200);
    fVar47 = (moby->pos).y - *(float *)((int)pvVar12 + 0x134);
    fVar1 = (moby->pos).x - *(float *)((int)pvVar12 + 0x130);
    if ((double)SQRT(fVar1 * fVar1 + fVar47 * fVar47) < dVar37) {
      moby->state = '\a';
    }
  }
  else if (bVar3 == 6) {
    fVar47 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
    fVar1 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
    fVar2 = ABS(fVar47);
    fVar9 = ABS(fVar1);
    *(float *)(puVar15 + 0x14) = fVar47;
    *(float *)((int)puVar15 + 0xa4) = fVar1;
    *(float *)(puVar15 + 0x15) = fVar2 - fVar9;
    fVar47 = 0.0;
    uVar31 = (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)(puVar15 + 0x14));
    if (*(float *)(puVar15 + 0x15) - 0.0 < 0.0) {
      fVar1 = fVar9;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar31 << 2));
    fVar9 = *(float *)(((uint)(uVar31 << 2) | 0x735900) + 4);
    fVar16 = ABS(*(float *)((int)puVar15 + 0xa4));
    if (*(float *)(puVar15 + 0x15) - 0.0 < 0.0) {
      fVar16 = fVar2;
    }
    if (0.0 < fVar1) {
      lVar19 = uVar17 - 0x1c0;
      lVar27 = uVar17 - 0xbc;
      lVar25 = uVar17 - 0xcc;
      lVar32 = 2;
      fVar1 = (fVar16 - fVar1) / (fVar16 + fVar1);
      fVar2 = fVar1 * fVar1;
      *(float *)(puVar15 + 0x22) = fVar1;
      *(float *)(puVar15 + 0x21) = fVar1;
      *(float *)((int)puVar15 + 0x10c) = fVar1;
      *(float *)((int)puVar15 + 0x104) = fVar1;
      fVar1 = fVar2 * fVar2;
      *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar2;
      *(float *)((int)puVar15 + 0x10c) = *(float *)((int)puVar15 + 0x10c) * fVar1;
      *(float *)(puVar15 + 0x22) = *(float *)(puVar15 + 0x22) * fVar1 * fVar2;
      do {
        *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0xf4) * fVar1 * fVar1;
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar1 * fVar1;
        lVar27 = lVar27 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar27 = uVar17 - 0xcc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar25 = lVar27;
      do {
        fVar1 = *pfVar26;
        fVar2 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar19 + 0x104) = *(float *)((int)lVar19 + 0x104) * fVar1;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar2;
        lVar25 = lVar25 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar19 = 2;
      do {
        iVar23 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar21 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar47 = fVar47 + *(float *)(iVar23 + 0x104) + *(float *)(iVar21 + 4) +
                 *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar47 = (fVar47 + 0.7853982) * fVar8 + fVar9;
    }
    mobyutil::OrganicDeltAng
              (fVar47,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
               mobyutil::g_FrameTime * 50.265484,&(moby->rotation).z,0x1f35fc,
               (float *)((int)pvVar12 + 0x170));
    if ((moby->field43_0x70 & 2U) != 0) {
      lVar20 = fastfunc::FastDoubleToInt
                         ((double)Splines[*(int *)((int)pvVar12 + 0x150)]->points
                                  [*(int *)((int)pvVar12 + 0x158) + -1].w);
      if (((MobyInstance + *(int *)((int)pvVar12 + (int)(lVar20 << 2) + 0x15c) !=
            (MobyInstance *)0x0) &&
          (bVar3 = MobyInstance[*(int *)((int)pvVar12 + (int)(lVar20 << 2) + 0x15c)].group,
          bVar3 != 0xff)) &&
         (puVar22 = (ushort *)(&mobyutil::g_MobyGroups)[bVar3], pMVar30 = MobyInstance,
         puVar22 != (ushort *)0x0)) {
        do {
          if (pMVar30[*puVar22 & 0x7fff].state == '\x01') {
            pMVar30[*puVar22 & 0x7fff].state = '\x02';
            pMVar30 = MobyInstance;
          }
          uVar11 = *puVar22;
          puVar22 = puVar22 + 1;
        } while (-1 < (short)uVar11);
      }
      if (*(int *)((int)pvVar12 + 0x158) == Splines[*(int *)((int)pvVar12 + 0x150)]->cnt) {
        moby->state = '\n';
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
        mobyutil::GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
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
        moby->state = '\x05';
        if (moby->animationId != '\x04') {
          puVar15[0x2d] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar18,4,0,*(undefined4 *)((int)puVar15 + 0x16c));
        }
      }
    }
  }
  return;
}



//==== 001f4cb0  ns=mobyupdate_helpers  size=0xa0
// sig: undefined M1197_001f4cb0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1197_001f4cb0(int param_1)

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
    puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      auVar4 = loadVectorLeftIndexed(in_r0,0x1f4cac);
      auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        auVar5 = loadVectorLeftIndexed(0x6164,0x760000);
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
  }
  return;
}



//==== 001f4d50  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1197_001f4d50(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1197_001f4d50(void)

{
  DAT_007661b4 = 0x10000;
  return;
}



//==== 001f4d90  ns=mobyupdate_helpers  size=0x4d0
// sig: undefined M1197_001f4d90(void)
// callers(1): 001f52a0 mobyupdate_helpers::M1197_001f52a0
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1197_001f4d90(int param_1)

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
    uVar1 = (int)*(uint *)(iVar6 + 0x9c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x9c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0xac) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0xac)) - uVar1))) &&
       (dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00766250)) {
      mobyutil::MB_randRot();
      mobyutil::MB_randRot();
      mobyutil::MB_randRangeFloat(DAT_00766240,DAT_00766244);
      mobyutil::MB_randRangeFloat(DAT_00766240,DAT_00766244);
      mobyutil::MB_randRangeFloat(DAT_00766240,DAT_00766244);
      mobyutil::MB_randRangeFloat(DAT_00766240,DAT_00766244);
      mobyutil::MB_randRangeFloat(DAT_00766248,DAT_0076624c);
      mobyutil::MB_randRangeFloat(DAT_00766248,DAT_0076624c);
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00766228,DAT_0076622c);
      uVar2 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00766230,DAT_00766234);
      uVar3 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)mobyutil::MB_randRangeFloat(DAT_00766238,DAT_0076623c);
      uVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar9);
      partupd::SpawnPart_2(local_d0,local_c0,local_b0,DAT_00766218,DAT_0076621c,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}



//==== 001f52a0  ns=mobyupdate_helpers  size=0x8c4
// sig: undefined M1197_001f52a0(void)
// callers(2): 001f5b64 mobyupdate_helpers::M1197_001f5b64; 001f6028 mobyupdate_unsorted::UpdateMoby_1197
// callees(7): 00057820 collproc::CollLine; 0006d720 RegisterFuncForMoby; 0010581c mobyutil::SetCollDamIn; 00109af0 mobyutil::Delt; 001f4d90 mobyupdate_helpers::M1197_001f4d90; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1197_001f52a0(MobyInstance *param_1)

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
  MOBY_OCLASSES MVar11;
  void *pvVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar18;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar25;
  longlong lVar24;
  uint uVar26;
  ulonglong unaff_r24;
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
  double dVar29;
  double extraout_f1;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar34;
  ulonglong in_f26;
  double dVar35;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  undefined1 auVar41 [16];
  float fVar42;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x1c0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x3a] = in_LR;
  puVar14[0x30] = in_f24;
  puVar14[0x31] = in_f25;
  puVar14[0x32] = in_f26;
  puVar14[0x33] = in_f27;
  puVar14[0x34] = in_f28;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x2f] = unaff_r31;
  puVar14[0x2c] = unaff_r28;
  puVar14[0x2e] = unaff_r30;
  pvVar12 = param_1->pVar;
  uVar27 = ZEXT48(pvVar12);
  puVar14[0x2d] = unaff_r29;
  puVar14[0x2b] = unaff_r27;
  puVar14[0x2a] = unaff_r26;
  puVar14[0x29] = unaff_r25;
  puVar14[0x28] = unaff_r24;
  uVar19 = fastfunc::FastDoubleToInt((double)*(float *)((int)pvVar12 + 0x7c));
  *(undefined4 *)(puVar14 + 0x1c) = uVar19;
  fastfunc::FastDecTimerS32(uVar17 - 0xe0);
  iVar20 = *(int *)(puVar14 + 0x1c);
  auVar41 = loadVectorLeftIndexed(0xe0,lVar1);
  auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
  auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar19 = storeVectorElementWordIndexed
                     (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x7c,uVar27);
  *(undefined4 *)((int)pvVar12 + 0x7cU & 0xfffffffc) = uVar19;
  if (iVar20 != 0) {
    if (iVar20 == 0x14) {
      iVar20 = 0;
      uVar22 = uVar27;
      do {
        uVar26 = *(uint *)((int)uVar22 + 0x9c);
        uVar13 = (int)uVar26 >> 0x1f;
        if (0x3f7fffff < (int)((uVar13 >> 1 ^ uVar26) - uVar13)) {
          *(undefined4 *)((int)uVar22 + 0x9c) = 0x3f7ae148;
        }
        iVar20 = iVar20 + 1;
        uVar22 = uVar22 + 0x10;
      } while (iVar20 < 0x10);
    }
    dVar40 = 0.0;
    iVar20 = 0;
    dVar39 = 2.5;
    dVar38 = 0.3499999940395355;
    dVar37 = 1.0;
    dVar36 = 3.0;
    dVar35 = 4.0;
    dVar34 = 2.0;
    uVar22 = uVar27;
    do {
      iVar15 = (int)uVar22;
      fVar2 = *(float *)(iVar15 + 0x90) - *(float *)((int)pvVar12 + 0x70);
      *(float *)(puVar14 + 0xe) = fVar2;
      fVar6 = *(float *)(iVar15 + 0x94) - *(float *)((int)pvVar12 + 0x74);
      dVar33 = (double)mobyutil::g_FrameTime;
      *(float *)((int)puVar14 + 0x74) = fVar6;
      dVar32 = (double)SQRT(fVar2 * fVar2 + fVar6 * fVar6);
      *(float *)(puVar14 + 0xf) = *(float *)(iVar15 + 0x98) - *(float *)((int)pvVar12 + 0x78);
      uVar19 = *(undefined4 *)(iVar15 + 0x9c);
      *(undefined4 *)(puVar14 + 0xf) = 0;
      *(undefined4 *)((int)puVar14 + 0x7c) = uVar19;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      fVar3 = (param_1->pos).y;
      fVar4 = (param_1->pos).x;
      fVar5 = (param_1->pos).z;
      fVar42 = (float)((double)(float)(dVar33 * dVar39) / dVar32);
      dVar29 = (double)(fVar2 * fVar42);
      dVar30 = (double)(fVar6 * fVar42);
      dVar33 = dVar40;
      if (dVar40 - dVar32 < 0.0) {
        dVar33 = dVar29;
      }
      dVar31 = dVar40;
      if (dVar40 - dVar32 < 0.0) {
        dVar31 = dVar30;
      }
      if (dVar32 - dVar40 < 0.0) {
        dVar33 = dVar29;
      }
      if (dVar32 - dVar40 < 0.0) {
        dVar31 = dVar30;
      }
      *(float *)(puVar14 + 0xe) = (float)dVar33;
      *(float *)((int)puVar14 + 0x74) = (float)dVar31;
      fVar42 = (float)((double)*(float *)(iVar15 + 0x90) + dVar33);
      *(float *)(puVar14 + 0xe) = fVar42;
      fVar2 = (float)((double)*(float *)(iVar15 + 0x94) + dVar31);
      *(float *)((int)puVar14 + 0x74) = fVar2;
      fVar6 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0xf) = fVar6;
      *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)(iVar15 + 0x9c);
      fVar7 = *(float *)((int)pvVar12 + 0x84);
      fVar8 = *(float *)((int)pvVar12 + 0x80);
      fVar9 = *(float *)((int)pvVar12 + 0x88);
      dVar30 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
      *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(iVar15 + 0x90);
      *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)(iVar15 + 0x94);
      fVar10 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0x11) = fVar10;
      *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)(iVar15 + 0x9c);
      *(float *)(puVar14 + 0x11) = (float)((double)fVar10 + dVar37);
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar15 + 0x90);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar15 + 0x94);
      fVar10 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0x13) = fVar10;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar15 + 0x9c);
      *(float *)(puVar14 + 0x13) = (float)((double)fVar10 - dVar36);
      dVar29 = (double)(fVar9 * (float)((double)(float)(-(double)((fVar6 - fVar5) * fVar9 +
                                                                 (fVar42 - fVar4) * fVar8 +
                                                                 (fVar2 - fVar3) * fVar7) + dVar38)
                                       / dVar30));
      dVar33 = dVar40;
      if (dVar40 - dVar30 < 0.0) {
        dVar33 = dVar29;
      }
      if (dVar30 - dVar40 < 0.0) {
        dVar33 = dVar29;
      }
      iVar21 = collproc::CollLine(uVar17 - 0x140,uVar17 - 0x130,2,0,0);
      dVar29 = extraout_f1;
      if ((iVar21 != 0) && (dVar29 = (double)*(float *)(puVar14 + 0xf), dVar33 < dVar29)) {
        fVar42 = mobyutil::Delt((float)((double)CollOutput.ip.z + dVar38),
                                (float)((double)mobyutil::g_FrameTime * dVar35),
                                (float *)(puVar14 + 0xf));
        dVar29 = (double)fVar42;
      }
      uVar26 = (int)*(uint *)(iVar15 + 0x9c) >> 0x1f;
      if (((int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0x9c)) - uVar26) < 0x3f800000) ||
         (iVar21 = collproc::CollLine(dVar29,uVar22 + 0x90,uVar17 - 0x150,2,0,0), iVar21 == 0)) {
        uVar26 = (int)*(uint *)((int)puVar14 + 0x7c) >> 0x1f;
        if ((int)((uVar26 >> 1 ^ *(uint *)((int)puVar14 + 0x7c)) - uVar26) < 0x3f800000) {
          mobyutil::Delt((float)dVar40,(float)((double)mobyutil::g_FrameTime * dVar34),
                         (float *)((int)puVar14 + 0x7c));
        }
      }
      else {
        *(undefined4 *)((int)puVar14 + 0x7c) = 0x3f7ae148;
      }
      iVar20 = iVar20 + 1;
      *(undefined4 *)(iVar15 + 0x90) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)(iVar15 + 0x94) = *(undefined4 *)((int)puVar14 + 0x74);
      *(undefined4 *)(iVar15 + 0x98) = *(undefined4 *)(puVar14 + 0xf);
      *(undefined4 *)(iVar15 + 0x9c) = *(undefined4 *)((int)puVar14 + 0x7c);
      uVar22 = uVar22 + 0x10;
    } while (iVar20 < 0x10);
    iVar20 = 0;
    do {
      iVar15 = (int)uVar27;
      uVar26 = (int)*(uint *)(iVar15 + 0x9c) >> 0x1f;
      if ((0x3f7fffff < (int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0x9c)) - uVar26)) &&
         (uVar26 = (int)*(uint *)(iVar15 + 0xac) >> 0x1f,
         0x3f7fffff < (int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0xac)) - uVar26))) {
        fVar42 = (param_1->pos).x;
        fVar3 = (param_1->pos).y;
        fVar4 = *(float *)(iVar15 + 0x90) - fVar42;
        fVar5 = *(float *)(iVar15 + 0x94) - fVar3;
        dVar35 = ABS((double)fVar4);
        dVar36 = ABS((double)fVar5);
        *(float *)(puVar14 + 0x1e) = fVar4;
        *(float *)((int)puVar14 + 0xf4) = fVar5;
        *(float *)(puVar14 + 0x1f) = (float)(dVar35 - dVar36);
        uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)(puVar14 + 0x1e));
        if ((double)*(float *)(puVar14 + 0x1f) - dVar40 < 0.0) {
          dVar34 = dVar36;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar36 = ABS((double)*(float *)((int)puVar14 + 0xf4));
        if ((double)*(float *)(puVar14 + 0x1f) - dVar40 < 0.0) {
          dVar36 = dVar35;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar35 = dVar40;
        if (dVar40 < dVar34) {
          lVar18 = uVar17 - 0x1b0;
          lVar23 = uVar17 - 0xa4;
          lVar24 = uVar17 - 0x94;
          lVar28 = 2;
          fVar2 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar6 = fVar2 * fVar2;
          *(float *)(puVar14 + 0x25) = fVar2;
          *(float *)(puVar14 + 0x24) = fVar2;
          *(float *)((int)puVar14 + 0x124) = fVar2;
          *(float *)((int)puVar14 + 0x11c) = fVar2;
          fVar2 = fVar6 * fVar6;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar6;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar2;
          *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar2 * fVar6;
          do {
            *(float *)((int)lVar18 + 0x11c) = *(float *)((int)lVar18 + 0x10c) * fVar2 * fVar2;
            iVar21 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar17 - 0xa4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar23 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0x11c) = *(float *)((int)lVar18 + 0x11c) * fVar2;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar18 = lVar1;
          dVar34 = dVar40;
          do {
            iVar21 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar21 + 0x11c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar5);
        }
        fVar4 = (float)(dVar35 + 1.570796251296997);
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar2 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar2 = fVar5;
        }
        fVar6 = fVar2 * fVar2;
        fVar4 = fVar6 * fVar6 * fVar2;
        fVar5 = fVar6 * fVar4;
        *(float *)(puVar14 + 0x14) =
             fVar6 * fVar5 * 2.601887e-06 +
             fVar5 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2;
        fVar42 = *(float *)(iVar15 + 0x90) - fVar42;
        fVar3 = *(float *)(iVar15 + 0x94) - fVar3;
        dVar35 = ABS((double)fVar42);
        dVar36 = ABS((double)fVar3);
        *(float *)((int)puVar14 + 0xe4) = fVar42;
        *(float *)(puVar14 + 0x1d) = fVar3;
        *(float *)((int)puVar14 + 0xec) = (float)(dVar35 - dVar36);
        uVar26 = *(uint *)((int)puVar14 + 0xec);
        uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1c) & 8 |
                 (ulonglong)(uVar26 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)((int)puVar14 + 0xe4));
        if ((double)*(float *)((int)puVar14 + 0xec) - dVar40 < 0.0) {
          dVar34 = dVar36;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar42 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar36 = ABS((double)*(float *)(puVar14 + 0x1d));
        if ((double)*(float *)((int)puVar14 + 0xec) - dVar40 < 0.0) {
          dVar36 = dVar35;
        }
        dVar35 = dVar40;
        if (dVar40 < dVar34) {
          lVar18 = uVar17 - 0x1b0;
          uVar26 = 2;
          lVar23 = uVar17 - 0xc4;
          lVar24 = uVar17 - 0xb4;
          lVar28 = 2;
          fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar14 + 0x21) = fVar4;
          *(float *)(puVar14 + 0x20) = fVar4;
          *(float *)((int)puVar14 + 0x104) = fVar4;
          *(float *)((int)puVar14 + 0xfc) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar5;
          *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar4;
          *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xec) * fVar4 * fVar4;
            iVar15 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar17 - 0xc4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar23 = lVar24;
          do {
            fVar4 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xfc) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar18 = lVar1;
          dVar34 = dVar40;
          do {
            iVar15 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar21 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar15 + 0xfc)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar3 + fVar42);
        }
        *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
        *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
        dVar34 = (double)(float)(3.141592502593994 - dVar35);
        if (dVar35 - (double)(float)(3.141592502593994 - dVar35) < 0.0) {
          dVar34 = dVar35;
        }
        dVar36 = (double)(float)(-3.141592502593994 - dVar35);
        if ((double)(float)(-3.141592502593994 - dVar35) - dVar34 < 0.0) {
          dVar36 = dVar34;
        }
        dVar34 = (double)(float)(dVar36 * dVar36);
        dVar35 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar36));
        dVar38 = (double)(float)(dVar34 * dVar35);
        *(float *)((int)puVar14 + 0xa4) =
             (float)(dVar34 * dVar38) * 2.601887e-06 +
             (float)(dVar38 * -0.0001980741071747616 +
                    (double)(float)(dVar35 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar34 * dVar36) *
                                                   -0.16666656732559204 + dVar36)));
        mobyutil::SetCollDamIn(dVar37,uVar17 - 0x110,param_1,0x10001,uVar26,uVar17 - 0x120);
        *(undefined1 *)(puVar14 + 0x19) = 0;
        MVar11 = param_1->oClass;
        *(undefined1 *)((int)puVar14 + 0xc9) = 1;
        *(MOBY_OCLASSES *)((int)puVar14 + 0xca) = MVar11;
        collproc::CollLine(uVar27 + 0x90,uVar27 + 0xa0,0,param_1,uVar17 - 0x110);
      }
      iVar20 = iVar20 + 1;
      uVar27 = uVar27 + 0x10;
    } while (iVar20 < 0xf);
    RegisterFuncForMoby(&PTR_M1198_001f6448_007092a0,param_1);
    M1197_001f4d90(param_1);
  }
  return;
}



//==== 001f5b64  ns=mobyupdate_helpers  size=0x100
// sig: undefined M1197_001f5b64(void)
// callers(0): 
// callees(3): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 001f52a0 mobyupdate_helpers::M1197_001f52a0

void mobyupdate_helpers::M1197_001f5b64(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int local_20;
  float local_1c;
  
  if (param_1->state != '\x04') {
    M1197_001f52a0(param_1);
    pvVar2 = param_1->pVar;
    local_1c = 0.0;
    iVar3 = mobyutil::MB_damage(param_1,0x10000,0);
    mobyutil::MB_HandleDamage(param_1,iVar3,ZEXT48(pvVar2) + 0x20,0,&local_20,&local_1c,0,4);
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar3 + 0x20) + 0xa6) != 0x35b)) {
      if ((local_20 != 1) && (local_1c != 0.0)) {
        fVar1 = *(float *)((int)pvVar2 + 0x20);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar2 + 0x20) = fVar1 - local_1c;
        param_1->state = '\x04';
      }
      param_1->damage = -1;
    }
  }
  return;
}



//==== 001f5ca0  ns=mobyupdate_helpers  size=0x35c
// sig: undefined M1197_001f5ca0(void)
// callers(1): 001f6028 mobyupdate_unsorted::UpdateMoby_1197
// callees(4): 000ffb70 mobyutil::GetGroundZ; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1197_001f5ca0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
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
  
  dVar20 = 0.5;
  iVar2 = *(int *)(param_1 + 0x78);
  mobyutil::GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar21 = 0.0;
  dVar6 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                  CollOutput.normal.x * CollOutput.normal.x +
                  CollOutput.normal.y * CollOutput.normal.y);
  if ((float)SQRT(dVar6) == 0.0) {
    *(float *)(iVar2 + 0x80) = CollOutput.normal.x;
    *(float *)(iVar2 + 0x84) = CollOutput.normal.y;
    *(float *)(iVar2 + 0x88) = CollOutput.normal.z;
    fVar1 = CollOutput.normal.w;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x80) = 0;
  }
  else {
    dVar12 = 1.0 / SQRT(dVar6);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar20 * dVar12) + dVar12);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar20 * dVar12) + dVar12);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                    (double)(float)(dVar20 * dVar12) + dVar12);
    *(float *)(iVar2 + 0x80) = CollOutput.normal.x * fVar1;
    *(float *)(iVar2 + 0x84) = CollOutput.normal.y * fVar1;
    *(float *)(iVar2 + 0x88) = CollOutput.normal.z * fVar1;
    fVar1 = CollOutput.normal.w;
  }
  *(float *)(iVar2 + 0x8c) = fVar1;
  iVar5 = 0;
  *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(iVar2 + 0x78) = fVar1;
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x78) = fVar1 + 0.2;
  dVar6 = 0.0625;
  dVar12 = 6.2831854820251465;
  dVar13 = 1.570796251296997;
  dVar14 = 3.141592502593994;
  dVar15 = -3.141592502593994;
  dVar16 = -0.16666656732559204;
  dVar17 = 0.008333025500178337;
  dVar18 = -0.0001980741071747616;
  dVar19 = 2.601886990305502e-06;
  do {
    dVar7 = (double)fastfunc::FastIntToDouble(iVar5);
    fVar1 = (float)((double)(float)(dVar7 * dVar6 - dVar20) * dVar12);
    dVar10 = (double)fVar1;
    dVar7 = (double)fastfunc::FastWrapRot(fVar1,*(float *)(param_1 + 0x48));
    dVar8 = (double)(float)(dVar7 + dVar13);
    dVar7 = (double)(float)(dVar14 - dVar8);
    if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
      dVar7 = dVar8;
    }
    dVar11 = (double)(float)(dVar15 - dVar8);
    if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
      dVar11 = dVar7;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar7 = (double)(float)(dVar8 * dVar9);
    dVar11 = (double)(float)((double)(float)(dVar8 * dVar7) * dVar19 +
                            (double)(float)(dVar7 * dVar18 +
                                           (double)(float)(dVar9 * dVar17 +
                                                          (double)(float)((double)(float)(dVar8 * 
                                                  dVar11) * dVar16 + dVar11))));
    dVar8 = (double)fastfunc::FastWrapRot((float)dVar10,*(float *)(param_1 + 0x48));
    iVar3 = iVar5 * 0x10;
    pfVar4 = (float *)(iVar3 + iVar2 + 0x90);
    dVar7 = (double)(float)(dVar14 - dVar8);
    if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
      dVar7 = dVar8;
    }
    dVar10 = (double)(float)(dVar15 - dVar8);
    if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
      dVar10 = dVar7;
    }
    dVar7 = (double)(float)(dVar10 * dVar10);
    *pfVar4 = (float)(dVar11 * dVar20 + (double)*(float *)(iVar2 + 0x70));
    dVar11 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar10));
    dVar8 = (double)(float)(dVar7 * dVar11);
    pfVar4[1] = (float)((double)(float)((double)(float)(dVar7 * dVar8) * dVar19 +
                                       (double)(float)(dVar8 * dVar18 +
                                                      (double)(float)(dVar11 * dVar17 +
                                                                     (double)(float)((double)(float)
                                                  (dVar7 * dVar10) * dVar16 + dVar10)))) * dVar20 +
                       (double)*(float *)(iVar2 + 0x74));
    pfVar4[2] = *(float *)(iVar2 + 0x78);
    pfVar4[3] = *(float *)(iVar2 + 0x7c);
    dVar7 = dVar21;
    if ((iVar5 != 0) && (iVar5 != 0xf)) {
      dVar7 = 1.0;
    }
    iVar5 = iVar5 + 1;
    *(float *)(iVar3 + iVar2 + 0x9c) = (float)dVar7;
  } while (iVar5 < 0x10);
  iVar5 = fastfunc::FastDoubleToInt((double)(7.0 / (mobyutil::g_FrameTime * 2.5)));
  *(float *)(iVar2 + 0x7c) =
       (float)(longlong)(animationSpeed * (float)((double)(longlong)iVar5 + dVar20));
  return;
}



//==== 001f6028  ns=mobyupdate_unsorted  size=0x40c
// sig: undefined UpdateMoby_1197(MobyInstance * moby)
// callers(0): 
// callees(11): 000efb38 mobyfunc::DeleteMoby; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010e030 mobyutil::MB_genericExplosion; 00113e88 mobyutil::MB_MayaFrameTrigger; 001f52a0 mobyupdate_helpers::M1197_001f52a0; 001f5ca0 mobyupdate_helpers::M1197_001f5ca0; 00495490 FUN_00495490; 004fff60 fastfunc::FastDecTimerS32

/* Moby 1197 */

void mobyupdate_unsorted::UpdateMoby_1197(MobyInstance *moby)

{
  u8 uVar1;
  u8 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_50 [16];
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  if (moby->state != '\x04') {
    mobyupdate_helpers::M1197_001f52a0(moby);
    pvVar4 = moby->pVar;
    local_3c = 0.0;
    iVar8 = mobyutil::MB_damage(moby,0x10000,0);
    mobyutil::MB_HandleDamage(moby,iVar8,ZEXT48(pvVar4) + 0x20,0,&local_40,&local_3c,0,4);
    if (((iVar8 == 0) || (*(int *)(iVar8 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar8 + 0x20) + 0xa6) != 0x35b)) {
      if ((local_40 != 1) && (local_3c != 0.0)) {
        *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - local_3c;
        moby->state = '\x04';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      moby->damage = -1;
    }
  }
  FUN_00495490(0x4022000000000000,moby,uVar9 + 0x60);
  fastfunc::FastDecTimerS32(uVar9 + 100);
  uVar1 = moby->state;
  uVar2 = moby->animationId;
  if (uVar1 == '\x04') {
    mobyutil::MB_genericExplosion
              (0,0,0,0,0x40f86a0000000000,0xbff0000000000000,0x402e000000000000,moby,auStack_50,0,1,
               0xffffffffffffffff,10,5,4);
    mobyutil::MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    if (uVar2 != '\x02') {
      local_38 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 7.5));
    }
    iVar8 = mobyutil::MB_MayaFrameTrigger(12.0,moby);
    if (iVar8 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        auVar10 = loadVectorLeftIndexed(0x14,0x1f5ffc);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,100,uVar9);
        *(undefined4 *)((int)pvVar3 + 100U & 0xfffffffc) = uVar5;
        moby->state = '\x01';
      }
    }
    else {
      mobyupdate_helpers::M1197_001f5ca0(moby);
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x02') {
    if (uVar2 != '\x01') {
      local_38 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 7.5));
    }
    if (*(int *)((int)pvVar3 + 100) == 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    iVar8 = *(int *)((int)pvVar3 + 0x60);
    if (((iVar8 == 0) ||
        (fVar6 = (moby->pos).y - *(float *)(iVar8 + 0x14),
        fVar7 = (moby->pos).x - *(float *)(iVar8 + 0x10), 8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)
        )) || (*(int *)((int)pvVar3 + 100) != 0)) {
      if (uVar2 != '\0') {
        local_38 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 7.5));
      }
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      moby->state = '\x02';
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(8,0x1f5ffc);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,100,uVar9);
      *(undefined4 *)((int)pvVar3 + 100U & 0xfffffffc) = uVar5;
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar3 + 100) = 0;
    moby->state = '\x01';
  }
  return;
}



//==== 001f6448  ns=mobyupdate_helpers  size=0x43c
// sig: undefined M1198_001f6448(void)
// callers(0): 
// callees(10): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1198_001f6448(int param_1)

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
  uVar12 = draw::GetEffectTex(DAT_007661e4);
  uVar14 = DAT_007661e4;
  puVar9[0x25] = uVar12;
  draw::GetEffectTex(uVar14);
  uVar12 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e24,DAT_007661d8,DAT_00f08e28,DAT_007661dc,DAT_007661e0);
  puVar9[0x27] = uVar12;
  fastfunc::FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_007661f8;
    DAT_00766204 = DAT_00766214;
    dVar33 = 0.0;
    dVar25 = (double)mobyutil::MB_randRangeFloat(0.0,0.2);
    DAT_00766214 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_007661fc;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x90);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x9c);
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
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,DAT_007661e8,DAT_007661ec);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 0x74));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x70));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x78));
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
        uVar6 = DAT_007661f4;
        uVar14 = DAT_007661f0;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = fastfunc::FastLerpColor((double)*pfVar13,uVar14,uVar6);
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



//==== 001f6884  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1198_001f6884(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1198_001f6884(void)

{
  DAT_007662a4 = 0x10000;
  return;
}



//==== 001f6900  ns=mobyupdate_unsorted  size=0x5e8
// sig: undefined UpdateMoby_1198(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 0015d12c sound::PlayMobySound; 00341590 FUN_00341590

/* Moby 1198 */

void mobyupdate_unsorted::UpdateMoby_1198(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined1 local_140 [16];
  undefined1 local_130 [120];
  
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    iVar1 = mobyutil::MB_damage(moby,0x40000,0);
    if (iVar1 != 0) {
      sound::PlayMobySound(0,0,moby);
      iVar2 = 0;
      uVar9 = 0;
      dVar4 = -0.4000000059604645;
      dVar5 = 0.4000000059604645;
      dVar6 = 0.6000000238418579;
      dVar7 = 0.30000001192092896;
      dVar8 = 8.0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
        mobyutil::MB_randRangeFloat(-0.6,(float)dVar6);
        mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
        mobyutil::MB_randRangeFloat((float)dVar7,2.6);
        mobyutil::MB_randRangeFloat(5.0,(float)dVar8);
        mobyutil::MB_randRangeFloat(1.0,1.3);
        FUN_00341590(moby);
        if (iVar2 % 3 == 0) {
          uVar3 = mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
          mobyutil::MB_SpawnExplosionSparks(uVar3,uVar9,moby,local_130);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x3c);
      mobyutil::MB_genericExplosion
                (uVar9,uVar9,0x4008000000000000,0x4000000000000000,0x3ff0000000000000,
                 0x3ff0000000000000,0x402e000000000000,moby,iVar1 + 0x10,local_140,
                 0xffffffffffffffff,&DAT_001f6898,10,3,0x10);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001f6ee8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1199_001f6ee8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1199_001f6ee8(void)

{
  DAT_00766314 = 0x10000;
  return;
}



//==== 001f6f08  ns=mobyupdate_helpers  size=0xa0
// sig: undefined M1199_001f6f08(void)
// callers(1): 001f7980 mobyupdate_unsorted::UpdateMoby_1199
// callees(0): 

void mobyupdate_helpers::M1199_001f6f08(int param_1)

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
    puVar3 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      auVar4 = loadVectorLeftIndexed(in_r0,0x1f6f00);
      auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
      do {
        auVar5 = loadVectorLeftIndexed(0x6340,0x760000);
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
  }
  return;
}



//==== 001f6fe0  ns=mobyupdate_helpers  size=0x8f8
// sig: undefined M1199_001f6fe0(void)
// callers(1): 001f7980 mobyupdate_unsorted::UpdateMoby_1199
// callees(14): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcd60 mobyutil::MB_DistributeBolts; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1199_001f6fe0(MobyInstance *param_1)

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
  ulonglong uVar15;
  undefined4 uVar18;
  float *pfVar19;
  longlong lVar16;
  longlong lVar17;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  undefined4 *puVar24;
  longlong lVar25;
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
  double dVar31;
  ulonglong in_f31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x100;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x22] = in_LR;
  puVar13[0x1f] = in_f31;
  puVar13[0x1d] = unaff_r30;
  puVar13[0x1e] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar26 = ZEXT48(pvVar6);
  iVar20 = *(int *)((int)pvVar6 + 0x38);
  puVar13[0x1c] = unaff_r29;
  puVar13[0x1b] = unaff_r28;
  if (iVar20 != 0) {
    dVar28 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar18 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar6 + 0x184) = uVar18;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar26 + 0x184);
  if (param_1->state != '\r') {
    pfVar19 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,pfVar19,uVar26 + 0x20,5,puVar13 + 0xe,0,0,4);
    if ((pfVar19 != (float *)0x0) && (*(MOBY_OCLASSES *)((int)pfVar19[8] + 0xa6) != param_1->oClass)
       ) {
      uVar10 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar19[0xb] >> 0x1f;
      fVar2 = pfVar19[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar19[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar10)) {
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined1 *)((int)pvVar6 + 0x117) = 0xfa;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar2;
        auVar32 = loadVectorLeftIndexed(0x20,0x1f6fa8);
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
        if (param_1->animationId != '\x04') {
          puVar13[0x19] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(param_1,4,0,*(undefined4 *)((int)puVar13 + 0xcc));
        }
        param_1->state = '\r';
        fVar2 = DAT_0071f418 * 26.0;
        *(undefined1 *)((int)pvVar6 + 0x9d) = 3;
        *(undefined4 *)((int)pvVar6 + 0x74) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x84) = 9;
        *(float *)((int)pvVar6 + 0x70) = fVar2;
        fVar2 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar6 + 0x78) = mobyutil::g_FrameTime * 7.0;
        *(float *)((int)pvVar6 + 0x7c) = fVar2 * 10.0;
        sound::PlayMobySound(2,0,param_1);
        if (((uint)pfVar19[0xc] & 1) == 0) {
          fVar2 = (param_1->pos).x - *pfVar19;
          fVar7 = (param_1->pos).y - pfVar19[1];
          dVar31 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar7);
          *(float *)(puVar13 + 0xf) = fVar2;
          *(float *)((int)puVar13 + 0x7c) = fVar7;
          *(float *)(puVar13 + 0x10) = (float)(dVar31 - dVar30);
          uVar21 = (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1d) & 4;
          dVar29 = ABS((double)*(float *)(puVar13 + 0xf));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
          dVar30 = ABS((double)*(float *)((int)puVar13 + 0x7c));
          if ((double)*(float *)(puVar13 + 0x10) - dVar28 < 0.0) {
            dVar30 = dVar31;
          }
          fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
          if (dVar28 < dVar29) {
            lVar16 = uVar15 - 0xf0;
            lVar25 = uVar15 - 0x68;
            lVar22 = uVar15 - 0x78;
            lVar27 = 2;
            fVar3 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x94) = fVar3;
            *(float *)((int)puVar13 + 0x8c) = fVar3;
            *(float *)(puVar13 + 0x12) = fVar3;
            *(float *)(puVar13 + 0x11) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar4;
            *(float *)(puVar13 + 0x12) = *(float *)(puVar13 + 0x12) * fVar3;
            *(float *)((int)puVar13 + 0x94) = *(float *)((int)puVar13 + 0x94) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x78) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar15 - 0x78;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar25;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar20 = (int)lVar17;
              iVar8 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x88)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        else {
          fVar2 = pfVar19[4];
          fVar7 = pfVar19[5];
          dVar30 = ABS((double)pfVar19[4]);
          dVar29 = ABS((double)pfVar19[5]);
          *(float *)((int)puVar13 + 0x84) = (float)(dVar30 - dVar29);
          uVar21 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar7 >> 0x1d) & 4;
          dVar31 = dVar30;
          if ((double)*(float *)((int)puVar13 + 0x84) - dVar28 < 0.0) {
            dVar31 = dVar29;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar21 << 2));
          if ((double)*(float *)((int)puVar13 + 0x84) - dVar28 < 0.0) {
            dVar29 = dVar30;
          }
          fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
          if (dVar28 < dVar31) {
            lVar16 = uVar15 - 0xf0;
            lVar25 = uVar15 - 0x48;
            lVar22 = uVar15 - 0x58;
            lVar27 = 2;
            fVar3 = (float)(dVar29 - dVar31) / (float)(dVar29 + dVar31);
            fVar4 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0xb4) = fVar3;
            *(float *)((int)puVar13 + 0xac) = fVar3;
            *(float *)(puVar13 + 0x16) = fVar3;
            *(float *)(puVar13 + 0x15) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar4;
            *(float *)(puVar13 + 0x16) = *(float *)(puVar13 + 0x16) * fVar3;
            *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar15 - 0x58;
            pfVar23 = (float *)&DAT_007358e0;
            lVar16 = lVar17;
            lVar22 = lVar25;
            do {
              fVar3 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar3;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar16 = 2;
            do {
              iVar20 = (int)lVar17;
              iVar8 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0xa8)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar2 + fVar7);
          }
        }
        *(float *)((int)puVar13 + 0x74) = (float)dVar28;
        fVar2 = pfVar19[6];
        *(float *)(puVar13 + 6) = pfVar19[4];
        *(float *)(puVar13 + 7) = fVar2;
        fVar2 = pfVar19[7];
        *(float *)((int)puVar13 + 0x34) = pfVar19[5];
        *(float *)((int)puVar13 + 0x3c) = fVar2;
        mobyutil::MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar15 - 0x8c,uVar26 + 0x78,uVar26 + 0x7c)
        ;
        mobyutil::MB_StartKick((double)*(float *)((int)puVar13 + 0x74),param_1,uVar26 + 0x60);
        *(undefined1 *)((int)pvVar6 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar26 + 0x110);
        mobyutil::MB_DistributeBolts(param_1,1,3,0,0xffffffffffffffff);
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,uVar26 + 0x110);
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    puVar24 = &DAT_001f6fa8;
    fVar2 = 42.0;
  }
  else if (*(int *)((int)pvVar6 + 0x184) == 0) {
    puVar24 = (undefined4 *)(uint)param_1->state;
    if (param_1->state == 1) {
      fVar2 = *(float *)((int)pvVar6 + 0x188);
    }
    else {
      fVar2 = *(float *)((int)pvVar6 + 0x178);
    }
  }
  else {
    puVar24 = &DAT_001f6fa8;
    fVar2 = *(float *)((int)pvVar6 + 0x178) + 6.0;
  }
  *(float *)((int)pvVar6 + 0x180) = fVar2;
  if (*(int *)((int)pvVar6 + 0x174) == 2) {
    iVar20 = mobyutil::MB_getTarget(param_1,puVar24,uVar26 + 0xc0);
    if (iVar20 != 2) {
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
      if (-1.0 < fVar14) {
        if ((((fVar14 < 1.0) && (-1.0 < fVar4)) && (fVar4 < 1.0)) &&
           ((-1.0 < fVar2 && (fVar2 < 1.0)))) goto LAB_001f784c;
      }
      *(undefined4 *)((int)pvVar6 + 0x104) = 2;
    }
  }
  else {
    bVar1 = param_1->state == '\x01';
    if ((bVar1) && (-1 < *(int *)((int)pvVar6 + 0x18c))) {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x18c)];
      iVar20 = mobyutil::MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
    else if ((bVar1) || (*(int *)((int)pvVar6 + 0x17c) < 0)) {
      iVar20 = mobyutil::MB_getTarget(param_1,puVar24,uVar26 + 0xc0);
    }
    else {
      pSVar9 = Splines[*(int *)((int)pvVar6 + 0x17c)];
      iVar20 = mobyutil::MB_getTargetInArea
                         (param_1,uVar26 + 0xc0,pSVar9,0,0,pSVar9->points,pSVar9->cnt);
    }
  }
LAB_001f784c:
  if ((iVar20 != 2) &&
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



//==== 001f7980  ns=mobyupdate_unsorted  size=0x1bec
// sig: undefined UpdateMoby_1199(MobyInstance * moby)
// callers(0): 
// callees(34): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100ef8 mobyutil::MB_MoveAndCollide2; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109c30 mobyutil::OrganicDelt; 00109ec0 mobyutil::DeltAng; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110488 mobyutil::ClampVec3Magnitude; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 0015d12c sound::PlayMobySound; 001f6f08 mobyupdate_helpers::M1199_001f6f08; 001f6fe0 mobyupdate_helpers::M1199_001f6fe0; 004fff60 fastfunc::FastDecTimerS32; 00500060 fastfunc::FastDecTimerS8; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338

/* Moby 1199 */

void mobyupdate_unsorted::UpdateMoby_1199(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  char cVar12;
  float fVar13;
  longlong lVar14;
  undefined1 uVar19;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int unused1;
  Manipulator *manipulator;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 local_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 local_d0 [96];
  float local_70;
  float local_6c;
  longlong local_68;
  
  lVar14 = (longlong)(int)moby;
  pvVar11 = moby->pVar;
  uVar21 = ZEXT48(pvVar11);
  mobyupdate_helpers::M1199_001f6fe0();
  dVar26 = 2.5;
  iVar18 = *(int *)((int)pvVar11 + 0x100);
  manipulator = (Manipulator *)((int)pvVar11 + 0x270);
  mobyfunc::DoManipulator(0x4004000000000000,moby,1,manipulator);
  if ((moby->enabled != '\0') &&
     (fVar34 = (moby->pos).y - GameCamera.posY, fVar7 = (moby->pos).x - GameCamera.posX,
     fVar8 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar34 * fVar34) < 29.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar14);
    moby->shadow = '\x17';
  }
  iVar16 = 0x3f800000;
  dVar28 = 1.0;
  bVar1 = moby->state;
  moby->unk58 = 1.0;
  if (bVar1 != 0xd && bVar1 != 0) {
    dVar24 = (double)(moby->pos).z;
    dVar22 = (double)mathfunc::cosf(*(float *)((int)pvVar11 + 0x19c));
    iVar16 = 0x760000;
    bVar1 = moby->state;
    (moby->pos).z = -(float)((double)DAT_0076634c * dVar22 - dVar24);
  }
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                            (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar14,&DAT_001f78d8,uVar21 + 0x170);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\a';
        if (moby->animationId != '\x03') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
        }
        uVar21 = mobyutil::MB_randInt(0xff);
        uVar15 = 0xbe860a92;
        if ((uVar21 & 1) != 0) {
          uVar15 = 0x3e860a92;
        }
        *(undefined4 *)((int)pvVar11 + 400) = uVar15;
      }
    }
    else if (bVar1 == 5) {
      uVar27 = 0;
      mobyutil::DeltAng(0.0,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,iVar16,
                        (int)manipulator,0);
      uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar11 + 0x134) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar29,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar14);
      dVar26 = (double)mathfunc::cosf((moby->rotation).z);
      dVar24 = 6.0;
      *(float *)((int)pvVar11 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar26);
      dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)mobyutil::g_FrameTime;
      dVar26 = (double)(float)(dVar22 * dVar24);
      *(undefined4 *)((int)pvVar11 + 0x128) = 0;
      *(float *)((int)pvVar11 + 0x124) = (float)(dVar26 * dVar28);
      dVar24 = 2.0;
      dVar28 = (double)((*(float *)((int)pvVar11 + 0x138) + 2.0) - (moby->pos).z);
      if ((dVar28 <= dVar26) &&
         (dVar22 = (double)(float)(dVar22 * -6.0), dVar26 = dVar28, dVar28 < dVar22)) {
        dVar26 = dVar22;
      }
      *(float *)((int)pvVar11 + 0x128) = (float)dVar26;
      mobyutil::MB_MoveAndCollide2
                (0x3fe0000000000000,uVar27,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
      fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0x134);
      fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0x130);
      if ((double)SQRT(fVar7 * fVar7 + fVar34 * fVar34) < dVar24) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 4) {
      iVar16 = *(int *)((int)pvVar11 + 0x104);
      dVar26 = 4.0;
      moby->unk58 = 4.0;
      if (((iVar16 == 2) ||
          (fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14),
          fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10),
          SQRT(fVar7 * fVar7 + fVar34 * fVar34) <= 3.0)) ||
         (iVar18 = fastfunc::FastDecTimerS8(lVar14 + 0xbc), iVar18 == 0)) {
        iVar18 = fastfunc::FastDecTimerS32(uVar21 + 0x198);
        if (iVar18 != 0) {
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar26,6.0);
          dVar28 = (double)mobyutil::MB_randRot();
          dVar22 = (double)mathfunc::cosf((float)dVar28);
          dVar28 = (double)FUN_005e8128(dVar28);
          dVar24 = (double)mobyutil::MB_randRangeFloat(DAT_00766344,DAT_00766348);
          fVar34 = (float)(dVar24 + (double)*(float *)((int)pvVar11 + 0x138));
          *(float *)((int)pvVar11 + 0x140) =
               (float)(dVar22 * dVar26 + (double)*(float *)((int)pvVar11 + 0x130));
          *(float *)((int)pvVar11 + 0x144) =
               (float)(dVar28 * dVar26 + (double)*(float *)((int)pvVar11 + 0x134));
          *(float *)((int)pvVar11 + 0x148) = fVar34;
          *(float *)((int)pvVar11 + 0x14c) = fVar34;
          moby->state = '\x03';
        }
      }
      else {
        if (moby->group != -1) {
          mobyupdate_helpers::M1199_001f6f08(lVar14);
        }
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 3) {
      dVar22 = 4.0;
      moby->unk58 = 4.0;
      local_70 = SQRT(*(float *)((int)pvVar11 + 0x128) * *(float *)((int)pvVar11 + 0x128) +
                      *(float *)((int)pvVar11 + 0x120) * *(float *)((int)pvVar11 + 0x120) +
                      *(float *)((int)pvVar11 + 0x124) * *(float *)((int)pvVar11 + 0x124));
      fVar34 = *(float *)((int)pvVar11 + 0x144) - (moby->pos).y;
      fVar8 = *(float *)((int)pvVar11 + 0x140) - (moby->pos).x;
      uVar29 = 0;
      fVar7 = *(float *)((int)pvVar11 + 0x148) - (moby->pos).z;
      local_6c = 0.0;
      dVar28 = (double)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar34 * fVar34);
      dVar26 = (double)FUN_005e8338();
      mobyutil::OrganicDeltAng
                ((float)dVar26,DAT_0071f418 * 25.132742,DAT_0071f418 * 25.132742,
                 mobyutil::g_FrameTime * 50.265484,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar11 + 0x170));
      dVar26 = (double)FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x140) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar11 + 0x144) - (moby->pos).y));
      dVar26 = (double)fastfunc::FastSubRots((float)dVar26,(moby->rotation).z);
      if (0.7853981852531433 <= dVar26) {
        *(undefined4 *)((int)pvVar11 + 300) = 0;
        *(undefined4 *)((int)pvVar11 + 0x128) = 0;
        *(undefined4 *)((int)pvVar11 + 0x124) = 0;
        *(undefined4 *)((int)pvVar11 + 0x120) = 0;
      }
      else {
        mobyutil::OrganicDelt
                  ((float)dVar28,DAT_0071f418 * 20.0,DAT_0071f418 * 20.0,
                   mobyutil::g_FrameTime * 20.0,&local_6c,0x720000,&local_70);
        *(float *)((int)pvVar11 + 0x120) = *(float *)((int)pvVar11 + 0x140) - (moby->pos).x;
        *(float *)((int)pvVar11 + 0x124) = *(float *)((int)pvVar11 + 0x144) - (moby->pos).y;
        fVar34 = (moby->pos).z;
        *(undefined4 *)((int)pvVar11 + 300) = *(undefined4 *)((int)pvVar11 + 0x14c);
        *(float *)((int)pvVar11 + 0x128) = *(float *)((int)pvVar11 + 0x148) - fVar34;
        mobyutil::ClampVec3Magnitude((double)local_70,(Vec4 *)((int)pvVar11 + 0x120));
      }
      dVar26 = 0.5;
      iVar16 = mobyutil::MB_MoveAndCollide2
                         (0x3fe0000000000000,uVar29,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
      if (iVar16 == 1) {
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar22,6.0);
        dVar28 = (double)mobyutil::MB_randRot();
        dVar22 = (double)mathfunc::cosf((float)dVar28);
        dVar28 = (double)FUN_005e8128(dVar28);
        dVar24 = (double)mobyutil::MB_randRangeFloat(DAT_00766344,DAT_00766348);
        fVar34 = (float)(dVar24 + (double)*(float *)((int)pvVar11 + 0x138));
        *(float *)((int)pvVar11 + 0x140) =
             (float)(dVar22 * dVar26 + (double)*(float *)((int)pvVar11 + 0x130));
        *(float *)((int)pvVar11 + 0x144) =
             (float)(dVar28 * dVar26 + (double)*(float *)((int)pvVar11 + 0x134));
        *(float *)((int)pvVar11 + 0x148) = fVar34;
        *(float *)((int)pvVar11 + 0x14c) = fVar34;
      }
      else if (dVar28 < 0.10000000149011612) {
        moby->state = '\x04';
        mobyutil::MB_randRangeFloat(30.0,90.0);
        iVar16 = fastfunc::FastDoubleToInt();
        local_68 = (longlong)iVar16;
        *(int *)((int)pvVar11 + 0x198) = (int)(animationSpeed * (float)((double)local_68 + dVar26));
      }
      if (((*(int *)((int)pvVar11 + 0x104) != 2) &&
          (fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14),
          fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10),
          3.0 < SQRT(fVar7 * fVar7 + fVar34 * fVar34))) &&
         (iVar18 = fastfunc::FastDecTimerS8(lVar14 + 0xbc), iVar18 != 0)) {
        if (moby->group != -1) {
          mobyupdate_helpers::M1199_001f6f08(lVar14);
        }
        moby->state = '\x06';
        if (moby->animationId != '\x01') {
          local_68 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar14,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 2) {
      moby->unk58 = 4.0;
      fVar34 = mobyutil::OrganicDelt
                         (*(float *)((int)pvVar11 + 0x138) + 2.0,DAT_0071f418 * 18.0,
                          DAT_0071f418 * 18.0,mobyutil::g_FrameTime * 6.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar11 + 0x128));
      if (fVar34 == 0.0) {
        moby->state = '\x03';
      }
    }
    else if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar11 + 0x30) = 0x3e800000;
      *(undefined4 *)((int)pvVar11 + 0x20) = 0x3f800000;
      *(undefined1 *)((int)pvVar11 + 0x28) = 0;
      *(undefined1 *)((int)pvVar11 + 0x29) = 1;
      *(undefined2 *)((int)pvVar11 + 0x24) = 1;
      fVar3 = (moby->pos).x;
      MVar10 = moby->modeBits;
      *(f32 *)((int)pvVar11 + 0x130) = fVar3;
      fVar4 = (moby->pos).y;
      *(f32 *)((int)pvVar11 + 0x134) = fVar4;
      fVar5 = (moby->pos).z;
      moby->modeBits = MVar10 | CAN_BE_AUTO_TARGETED;
      *(f32 *)((int)pvVar11 + 0x138) = fVar5;
      fVar6 = (moby->pos).w;
      *(f32 *)((int)pvVar11 + 0x140) = fVar3;
      *(f32 *)((int)pvVar11 + 0x13c) = fVar6;
      *(f32 *)((int)pvVar11 + 0x144) = fVar4;
      *(f32 *)((int)pvVar11 + 0x148) = fVar5;
      *(f32 *)((int)pvVar11 + 0x14c) = fVar6;
      dVar26 = (double)mobyutil::MB_randRot();
      *(float *)((int)pvVar11 + 0x19c) = (float)dVar26;
      dVar26 = 0.0;
      *(undefined4 *)((int)pvVar11 + 0x170) = 0;
      uVar19 = fastfunc::FastDoubleToInt((double)DAT_0076635c);
      *(undefined1 *)((int)pvVar11 + 0x58) = uVar19;
      uVar19 = fastfunc::FastDoubleToInt((double)(DAT_00766360 * 8.0));
      *(undefined1 *)((int)pvVar11 + 0x5a) = uVar19;
      iVar18 = *(int *)((int)pvVar11 + 0x174);
      if (iVar18 < 1) {
        if (-1 < iVar18) {
          moby->state = '\x03';
          uVar2 = moby->animationId;
          (moby->pos).z = (moby->pos).z + 2.0;
          if (uVar2 != '\x03') {
            local_68 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        if (iVar18 < 2) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (iVar18 < 3) {
          dVar28 = (double)mobyutil::MB_randRot();
          mathfunc::cosf((float)dVar28);
          mobyutil::MB_randRot();
          FUN_005e8128();
          moby->state = '\t';
          (moby->pos).z = Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z;
          fastfunc::FastVecAddSelf(auStack_110,lVar14 + 0x10,local_120);
          dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar26,DAT_00766354);
          *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
          dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
          dVar26 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
          uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
          *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
          if (moby->animationId != '\x03') {
            local_68 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
  }
  else if (bVar1 == 0xd) {
    uVar17 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x60));
    if ((uVar17 & 1) != 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar14,0x200,0xffffffffffffffff);
      mobyutil::MB_SpawnExplosionSparks2
                (0x3fe0000000000000,0x4024000000000000,lVar14,lVar14 + 0x10,&DAT_001f78d8,
                 0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 0xc) {
    uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - (moby->pos).x),
                          (double)(*(float *)((int)pvVar11 + 0x134) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 1.0471976),lVar14);
    dVar26 = (double)mathfunc::cosf((moby->rotation).z);
    dVar22 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar26);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar28 = (double)mobyutil::g_FrameTime;
    *(float *)((int)pvVar11 + 0x124) = (float)((double)(float)(dVar28 * dVar22) * dVar26);
    dVar26 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    fVar34 = (float)(dVar28 * 3.0);
    fVar7 = Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z;
    if ((fVar7 <= fVar34) && (fVar34 = fVar7, fVar7 < (float)(dVar28 * -3.0))) {
      fVar34 = (float)(dVar28 * -3.0);
    }
    *(float *)((int)pvVar11 + 0x128) = fVar34;
    fastfunc::FastVecAddSelf(auStack_e0,lVar14 + 0x10,uVar21 + 0x120);
    fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0x134);
    fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0x130);
    if (SQRT(fVar7 * fVar7 + fVar34 * fVar34) < 2.0) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      moby->state = '\t';
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(0x9c,0x1f78d8);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xff;
      cVar12 = storeVectorElementByteIndexed
                         (auVar31 | auVar31 << 8 | auVar31 << 0x10 | auVar31 << 0x18 |
                          auVar31 << 0x20 | auVar31 << 0x28 | auVar31 << 0x30 | auVar31 << 0x38 |
                          auVar31 << 0x40 | auVar31 << 0x48 | auVar31 << 0x50 | auVar31 << 0x58 |
                          auVar31 << 0x60 | auVar31 << 0x68 | auVar31 << 0x70 | auVar31 << 0x78,0xbc
                          ,lVar14);
      moby->setByGroup = cVar12;
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar26,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
      dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar26 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
      uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
  }
  else if (bVar1 == 0xb) {
    if (moby->group != -1) {
      mobyupdate_helpers::M1199_001f6f08(lVar14);
    }
    uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar14);
    dVar22 = (double)mathfunc::cosf((moby->rotation).z);
    dVar30 = 6.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar22);
    dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar24 = (double)mobyutil::g_FrameTime;
    lVar20 = ((ulonglong)*(uint *)((int)pvVar11 + 0x194) & 0x1ffffff) << 7;
    *(float *)((int)pvVar11 + 0x124) = (float)((double)(float)(dVar24 * dVar30) * dVar22);
    dVar22 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    fVar7 = *(float *)((int)&(Cuboids->pos).z + (int)lVar20) - (moby->pos).z;
    fVar34 = (float)(dVar24 * 3.0);
    if ((fVar7 <= fVar34) && (fVar34 = fVar7, fVar7 < (float)(dVar24 * -3.0))) {
      fVar34 = (float)(dVar24 * -3.0);
    }
    *(float *)((int)pvVar11 + 0x128) = fVar34;
    mobyutil::MB_MoveAndCollide2(0x3fe0000000000000,0,lVar14,uVar21 + 0x120,lVar20,0x200);
    mobyfunc::GetBonePosition(lVar14,0,auStack_f0);
    collproc::CollMobySphere(0x3fc99999a0000000,auStack_f0);
    fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10);
    fVar8 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    if ((((double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar34 * fVar34) < dVar28) ||
        (hero::g_heroStateType == 7)) || ((moby->field43_0x70 & 2U) != 0)) {
      moby->state = '\f';
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)((double)animationSpeed * dVar26);
        mobyutil::MB_SetAnimation(lVar14,3,0,(int)((double)animationSpeed * dVar26));
      }
    }
    else if (*(int *)((int)pvVar11 + 0x104) == 2) {
      moby->state = '\t';
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar22,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
      dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar26 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
      uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
  }
  else if (bVar1 == 10) {
    fVar34 = (moby->pos).y;
    fVar7 = *(float *)(iVar18 + 0x14);
    fVar8 = (moby->pos).x;
    fVar9 = *(float *)(iVar18 + 0x10);
    fVar13 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    dVar22 = (double)SQRT(fVar13 * fVar13 +
                          (fVar8 - fVar9) * (fVar8 - fVar9) + (fVar34 - fVar7) * (fVar34 - fVar7));
    if (moby->group != -1) {
      mobyupdate_helpers::M1199_001f6f08(lVar14);
      fVar9 = *(float *)(iVar18 + 0x10);
      fVar8 = (moby->pos).x;
      fVar7 = *(float *)(iVar18 + 0x14);
      fVar34 = (moby->pos).y;
    }
    uVar29 = FUN_005e8338((double)(fVar9 - fVar8),(double)(fVar7 - fVar34));
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 1.5707964),lVar14);
    dVar24 = (double)mathfunc::cosf((moby->rotation).z);
    dVar25 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar24);
    dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar23 = (double)mobyutil::g_FrameTime;
    dVar24 = (double)(float)(dVar23 * dVar25);
    *(float *)((int)pvVar11 + 0x124) = (float)(dVar24 * dVar30);
    dVar25 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    dVar30 = (double)(Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z);
    if ((dVar30 <= dVar24) &&
       (dVar23 = (double)(float)(dVar23 * -4.0), dVar24 = dVar30, dVar30 < dVar23)) {
      dVar24 = dVar23;
    }
    *(float *)((int)pvVar11 + 0x128) = (float)dVar24;
    mobyutil::MB_MoveAndCollide2(0x3fe0000000000000,0,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
    if (((double)DAT_0076633c <= dVar22) ||
       (dVar28 <= ABS((double)(Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z)))) {
      if (*(int *)((int)pvVar11 + 0x104) == 2) {
        moby->state = '\t';
        dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar25,DAT_00766354);
        *(float *)((int)pvVar11 + 0x1a0) = (float)dVar26;
        dVar28 = (double)(animationSpeed * DAT_00766358 * 60.0);
        dVar26 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
        uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar28 * dVar26));
        *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
      }
    }
    else {
      sound::PlayMobySound(0,0,moby);
      moby->state = '\v';
      if (moby->animationId != '\x02') {
        local_68 = (longlong)(int)((double)animationSpeed * dVar26);
        mobyutil::MB_SetAnimation(lVar14,2,0,(int)((double)animationSpeed * dVar26));
      }
    }
  }
  else if (bVar1 == 9) {
    fVar34 = (moby->pos).y;
    fVar7 = (moby->pos).x;
    fVar13 = fVar34 - *(float *)(iVar18 + 0x14);
    fVar8 = fVar7 - *(float *)(iVar18 + 0x10);
    fVar9 = (moby->pos).z - *(float *)(iVar18 + 0x18);
    dVar28 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar13 * fVar13);
    uVar29 = FUN_005e8338((double)(*(float *)((int)pvVar11 + 0x130) - fVar7),
                          (double)(*(float *)((int)pvVar11 + 0x134) - fVar34));
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 0.7853982),lVar14);
    dVar26 = (double)mathfunc::cosf((moby->rotation).z);
    dVar22 = 4.0;
    *(float *)((int)pvVar11 + 0x120) = (float)((double)(mobyutil::g_FrameTime * 4.0) * dVar26);
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    *(float *)((int)pvVar11 + 0x124) =
         (float)((double)(float)((double)mobyutil::g_FrameTime * dVar22) * dVar26);
    dVar26 = 0.0;
    *(undefined4 *)((int)pvVar11 + 0x128) = 0;
    iVar18 = fastfunc::FastDecTimerS32(uVar21 + 0x1a4);
    if (iVar18 != 0) {
      dVar22 = (double)mobyutil::MB_randRangeFloat((float)dVar26,DAT_00766354);
      *(float *)((int)pvVar11 + 0x1a0) = (float)dVar22;
      dVar24 = (double)(animationSpeed * DAT_00766358 * 60.0);
      dVar22 = (double)mobyutil::MB_randRangeFloat(0.75,1.25);
      uVar15 = fastfunc::FastDoubleToInt((double)(float)(dVar24 * dVar22));
      *(undefined4 *)((int)pvVar11 + 0x1a4) = uVar15;
    }
    fVar7 = mobyutil::g_FrameTime * 2.0;
    fVar34 = (Cuboids[*(int *)((int)pvVar11 + 0x194)].pos.z - (moby->pos).z) -
             *(float *)((int)pvVar11 + 0x1a0);
    if ((fVar34 <= fVar7) && (fVar7 = fVar34, fVar34 < mobyutil::g_FrameTime * -2.0)) {
      fVar7 = mobyutil::g_FrameTime * -2.0;
    }
    *(float *)((int)pvVar11 + 0x128) = fVar7;
    mobyutil::MB_MoveAndCollide2
              (0x3fe0000000000000,dVar26,lVar14,uVar21 + 0x120,&DAT_001f78d8,0x200);
    if (((*(int *)((int)pvVar11 + 0x104) != 2) &&
        (iVar18 = fastfunc::FastDecTimerS8(lVar14 + 0xbc), iVar18 != 0)) &&
       ((double)DAT_0076633c < dVar28)) {
      if (moby->group != -1) {
        mobyupdate_helpers::M1199_001f6f08(lVar14);
      }
      moby->state = '\n';
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 8) {
    uVar29 = FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                          (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    iVar18 = (int)pvVar11 + 0x170;
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar14);
    fVar34 = (moby->pos).y - *(float *)((int)pvVar11 + 0xe4);
    fVar7 = (moby->pos).x - *(float *)((int)pvVar11 + 0xe0);
    dVar26 = (double)FUN_005e8338((double)SQRT(fVar7 * fVar7 + fVar34 * fVar34),
                                  (double)(*(float *)((int)pvVar11 + 0xe8) - (moby->pos).z));
    mobyutil::DeltAng((float)-dVar26,mobyutil::g_FrameTime * 12.566371,&(moby->rotation).y,iVar16,
                      iVar18,0);
    iVar18 = mobyutil::MB_MayaFrameTrigger(20.0,moby);
    if (iVar18 != 0) {
      mathfunc::cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      mobyfunc::GetBonePosition(lVar14,0,auStack_100);
      collproc::CollMobySphere(0x3fd99999a0000000,auStack_100,&DAT_001f78d8,0,lVar14,local_d0);
      collproc::CollLine(lVar14 + 0x10,auStack_100,9,lVar14,local_d0);
    }
    if ((*(int *)((int)pvVar11 + 0x104) == 2) || ((moby->field43_0x70 & 2U) != 0)) {
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x05';
    }
  }
  else if (bVar1 == 7) {
    dVar26 = (double)FUN_005e8338((double)(*(float *)(iVar18 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar18 + 0x14) - (moby->pos).y));
    uVar29 = fastfunc::FastWrapRot((float)dVar26,*(float *)((int)pvVar11 + 400));
    iVar16 = (int)pvVar11 + 0x170;
    dVar30 = 6.2831854820251465;
    mobyutil::OrganicDeltAngSpeed
              (uVar29,0x3f947ae140000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar14);
    dVar24 = 0.5;
    dVar28 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
    fVar7 = mobyutil::g_FrameTime;
    dVar22 = (double)*(float *)(iVar18 + 0x18);
    dVar26 = (double)(moby->pos).z;
    fVar34 = *(float *)(iVar18 + 0x14);
    uVar15 = *(undefined4 *)(iVar18 + 0x1c);
    lVar20 = uVar21 + 0x120;
    *(float *)((int)pvVar11 + 0x120) = *(float *)(iVar18 + 0x10) - (moby->pos).x;
    if (dVar22 - dVar26 < 0.0) {
      dVar26 = -(double)(float)((double)(float)(dVar26 - dVar22) * 4.0 - dVar22);
    }
    *(float *)((int)pvVar11 + 0x124) = fVar34 - (moby->pos).y;
    fVar34 = (moby->pos).z;
    *(undefined4 *)((int)pvVar11 + 300) = uVar15;
    dVar22 = (double)(float)(dVar26 + dVar24);
    if ((double)(float)(dVar26 + dVar24) - dVar28 < 0.0) {
      dVar22 = dVar28;
    }
    *(float *)((int)pvVar11 + 0x128) = (float)(dVar22 - (double)fVar34);
    FUN_005e7f98((double)(fVar7 * 10.0),lVar20,lVar20);
    dVar26 = (double)mathfunc::cosf((moby->rotation).z);
    *(float *)((int)pvVar11 + 0x120) =
         (float)(dVar26 * (double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                       *(float *)((int)pvVar11 + 0x120) +
                                       *(float *)((int)pvVar11 + 0x124) *
                                       *(float *)((int)pvVar11 + 0x124)));
    dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
    *(float *)((int)pvVar11 + 0x124) =
         (float)(dVar26 * (double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                       *(float *)((int)pvVar11 + 0x120) +
                                       *(float *)((int)pvVar11 + 0x124) *
                                       *(float *)((int)pvVar11 + 0x124)));
    mobyutil::MB_MoveAndCollide2(dVar24,0,lVar14);
    unused1 = (int)lVar20;
    dVar26 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar11 + 0x120) *
                                               *(float *)((int)pvVar11 + 0x120) +
                                               *(float *)((int)pvVar11 + 0x124) *
                                               *(float *)((int)pvVar11 + 0x124)),
                                  (double)*(float *)((int)pvVar11 + 0x128));
    mobyutil::DeltAng((float)-dVar26,(float)((double)mobyutil::g_FrameTime * dVar30),
                      &(moby->rotation).y,unused1,iVar16,0);
    fVar34 = (moby->pos).y - *(float *)(iVar18 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar18 + 0x10);
    if (DAT_0076633c <= SQRT(fVar7 * fVar7 + fVar34 * fVar34)) {
      if (*(int *)((int)pvVar11 + 0x104) == 2) {
        if (moby->animationId != '\x03') {
          local_68 = (longlong)(int)(animationSpeed * 20.5);
          mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
        }
        moby->state = '\x05';
      }
    }
    else if (2.0 <= ABS((moby->pos).z - g_heroPosition.z)) {
      if (moby->animationId != '\x03') {
        local_68 = (longlong)(int)(animationSpeed * 20.5);
        mobyutil::MB_SetAnimation(lVar14,3,0,(int)(animationSpeed * 20.5));
      }
      moby->state = '\x05';
    }
    else {
      sound::PlayMobySound(0,0,moby);
      moby->state = '\b';
      *(undefined4 *)((int)pvVar11 + 300) = 0;
      *(undefined4 *)((int)pvVar11 + 0x128) = 0;
      *(undefined4 *)((int)pvVar11 + 0x124) = 0;
      *(undefined4 *)((int)pvVar11 + 0x120) = 0;
      if (moby->animationId != '\x02') {
        local_68 = (longlong)(int)(animationSpeed * 5.5);
        mobyutil::MB_SetAnimation(lVar14,2,4,(int)(animationSpeed * 5.5));
      }
    }
  }
  if (moby->state != '\r' && moby->state != '\0') {
    dVar26 = (double)*(float *)((int)pvVar11 + 0x19c);
    iVar18 = fastfunc::FastDoubleToInt((double)(animationSpeed * DAT_00766350 * 60.0));
    local_68 = (longlong)iVar18;
    dVar26 = (double)fastfunc::FastWrapRot((float)dVar26,(360.0 / (float)local_68) * 0.017453292);
    *(float *)((int)pvVar11 + 0x19c) = (float)dVar26;
    dVar28 = (double)(moby->pos).z;
    dVar26 = (double)mathfunc::cosf((float)dVar26);
    (moby->pos).z = (float)((double)DAT_0076634c * dVar26 + dVar28);
  }
  return;
}



//==== 001f956c  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1201_001f956c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1201_001f956c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
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



//==== 001f95d4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1201_001f95d4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1201_001f95d4(void)

{
  DAT_007663b0 = 0x10000;
  return;
}



//==== 001f9680  ns=mobyupdate_unsorted  size=0x1710
// sig: undefined UpdateMoby_1201(MobyInstance * moby)
// callers(0): 
// callees(26): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00048420 camera::camera5::DeactivateMobyDrivenCamAccel; 00055284 camera::DrawTargetCrosshair; 000b72b0 hero::TransitionMovement; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000efe40 mobyfunc::BlendAnimFrame; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00128248 partupd::SpawnPart_27; 0015d12c sound::PlayMobySound; 00229a90 FUN_00229a90; 00342088 FUN_00342088; 004fffb4 fastfunc::FastDecTimerS16; 00500250 fastfunc::FastMemSetZero; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 1201 */

void mobyupdate_unsorted::UpdateMoby_1201(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  byte bVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *manipulator;
  uint uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  longlong lVar18;
  undefined4 uVar21;
  undefined8 uVar19;
  longlong lVar22;
  float *pfVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar26;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
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
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar45;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar26 = uVar17 - 0x220;
  puVar11 = (ulonglong *)lVar26;
  *puVar11 = uVar17;
  puVar11[0x46] = in_LR;
  puVar11[0x38] = in_f20;
  puVar11[0x39] = in_f21;
  puVar11[0x3a] = in_f22;
  puVar11[0x3b] = in_f23;
  puVar11[0x3c] = in_f24;
  puVar11[0x3d] = in_f25;
  puVar11[0x3e] = in_f26;
  puVar11[0x3f] = in_f27;
  puVar11[0x40] = in_f28;
  puVar11[0x41] = in_f29;
  puVar11[0x42] = in_f30;
  puVar11[0x43] = in_f31;
  puVar11[0x37] = unaff_r31;
  puVar11[0x31] = unaff_r25;
  puVar11[0x35] = unaff_r29;
  MVar8 = moby->modeBits;
  puVar11[0x36] = unaff_r30;
  manipulator = moby->pVar;
  uVar27 = ZEXT48(manipulator);
  puVar11[0x34] = unaff_r28;
  puVar11[0x33] = unaff_r27;
  puVar11[0x32] = unaff_r26;
  puVar11[0x30] = unaff_r24;
  moby->modeBits =
       MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                HAS_GLOW|TRANSPARENT|NO_UPDATE|DISABLED);
  mobyfunc::GetBonePosition(lVar18,3,uVar17 - 0x1a0);
  dVar50 = 0.4000000059604645;
  bVar3 = moby->state;
  *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) + 0.4;
  if (3 < bVar3) {
    iVar20 = fastfunc::FastDecTimerS16(uVar27 + 0x42);
    fVar4 = *(float *)(puVar11 + 0x10);
    if ((((iVar20 == 0) || (moby->setByGroup != '\x01')) ||
        (hero::g_heroStateType == 7 || hero::g_heroStateType == 0x14)) ||
       (g_heroState == DYING_GROUNDED)) {
      if (moby->setByGroup == '\x02') {
        fVar6 = *(float *)((int)puVar11 + 0x84) - (g_heroMobyPtr->pos).y;
        fVar4 = fVar4 - (g_heroMobyPtr->pos).x;
        fVar2 = *(float *)(puVar11 + 0x11) - (g_heroMobyPtr->pos).z;
        if ((1.2 < SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6)) ||
           (g_standingOnMoby != moby)) {
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          moby->setByGroup = '\0';
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = loadVectorLeftIndexed(0x30,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar53,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = vectorSplatHalfWord(auVar51,1);
          uVar10 = storeVectorElementHalfWordIndexed(auVar51,0x42,uVar27);
          *(undefined2 *)((int)manipulator + 0x42) = uVar10;
        }
      }
      else if (((hero::g_heroStateType != 7 && hero::g_heroStateType != 0x14) &&
               (g_heroState != DYING_GROUNDED)) &&
              ((g_standingOnMoby == moby &&
               ((fVar6 = *(float *)((int)puVar11 + 0x84) - (g_heroMobyPtr->pos).y,
                fVar4 = fVar4 - (g_heroMobyPtr->pos).x,
                fVar2 = *(float *)(puVar11 + 0x11) - (g_heroMobyPtr->pos).z,
                SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6) < 1.2 &&
                (*(short *)((int)manipulator + 0x42) == 0)))))) {
        moby->setByGroup = '\x01';
        hero::TransitionMovement(0x32,1);
      }
    }
    else {
      g_heroPosition.y = *(float *)((int)puVar11 + 0x84);
      g_heroPosition.z = *(float *)(puVar11 + 0x11);
      g_heroPosition.w = *(float *)((int)puVar11 + 0x8c);
      g_heroRotation.x = (moby->rotation).x;
      g_heroRotation.y = (moby->rotation).y;
      g_heroRotation.z = (moby->rotation).z;
      g_heroRotation.w = (moby->rotation).w;
      g_heroPosition.x = fVar4;
      dVar29 = (double)fastfunc::FastWrapRot(1.5707964,g_heroRotation.z);
      fVar4 = (float)(dVar29 + 1.570796251296997);
      dVar37 = (double)(float)(3.141592502593994 - dVar29);
      if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
        dVar37 = dVar29;
      }
      fVar6 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar6 = fVar4;
      }
      dVar49 = (double)(float)(-3.141592502593994 - dVar29);
      if ((double)(float)(-3.141592502593994 - dVar29) - dVar37 < 0.0) {
        dVar49 = dVar37;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
        fVar2 = fVar6;
      }
      dVar37 = (double)(float)(dVar49 * dVar49);
      fVar7 = fVar2 * fVar2;
      dVar44 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar49));
      fVar4 = fVar7 * fVar7 * fVar2;
      dVar43 = (double)(float)(dVar37 * dVar44);
      g_heroRotation.z = (float)dVar29;
      fVar6 = fVar7 * fVar4;
      g_heroPosition.y =
           ((float)(dVar37 * dVar43) * 2.601887e-06 +
           (float)(dVar43 * -0.0001980741071747616 +
                  (double)(float)(dVar44 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar37 * dVar49) *
                                                 -0.16666656732559204 + dVar49)))) * -0.7 +
           g_heroPosition.y;
      g_heroPosition.x =
           (fVar7 * fVar6 * 2.601887e-06 +
           fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar7 * fVar2 * -0.16666657 + fVar2) *
           -0.7 + g_heroPosition.x;
      fastfunc::FastMemSetZero(&hero::g_heroVelocity,0x90);
      if ((g_buttonsPressedThisFrame & TRIANGLE) == 0) {
        if (moby->state != '\x05') {
          *(undefined2 *)((int)manipulator + 0x52) = 2;
          camera::SetCameraPosition(lVar18 + 0x10,lVar18 + 0x40,0,0,0);
          if (moby->animationId != '\x05') {
            puVar11[0x2e] = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation(lVar18,5,0,*(undefined4 *)((int)puVar11 + 0x174));
          }
        }
        moby->state = '\x05';
      }
      else {
        camera::camera5::Camera_DeactivateMobyDrivenCam(0);
        hero::TransitionMovement(0,1);
        moby->setByGroup = '\x02';
        moby->state = '\x04';
        mobyutil::MB_SetAnimation(lVar18,0,0,1);
      }
    }
  }
  bVar3 = moby->state;
  if (bVar3 < 4) {
    if (bVar3 == 0) {
      mobyfunc::AttachManipulator(moby,0,manipulator);
      fVar5 = (moby->pos).z;
      *(f32 *)(puVar11 + 8) = (moby->pos).x;
      *(f32 *)(puVar11 + 9) = fVar5;
      fVar5 = (moby->pos).w;
      *(f32 *)((int)puVar11 + 0x44) = (moby->pos).y;
      *(f32 *)((int)puVar11 + 0x4c) = fVar5;
      FUN_00342088(lVar18);
      fVar5 = (moby->pos).z;
      moby->state = '\x04';
      *(f32 *)((int)manipulator + 0x5c) = fVar5;
      *(undefined4 *)((int)manipulator + 0x44) = 0;
      (moby->rotation).z = 0.0;
      *(undefined2 *)((int)manipulator + 0x42) = 0;
      *(undefined2 *)((int)manipulator + 0x40) = 0;
      *(undefined4 *)((int)manipulator + 0x48) = 0;
      *(undefined4 *)((int)manipulator + 0x4c) = 0;
      *(undefined4 *)((int)manipulator + 0x68) = 0xffffffff;
      DAT_009637cc = moby;
    }
  }
  else if (bVar3 < 5) {
    fVar4 = (moby->pos).y;
    fVar6 = (moby->pos).x;
    fVar2 = fVar4 - g_heroPosition.y;
    fVar7 = fVar6 - g_heroPosition.x;
    uVar45 = 0x4010000000000000;
    if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2) < 4.0) || (g_standingOnMoby == moby)) {
      fVar6 = g_heroPosition.x - fVar6;
      fVar4 = g_heroPosition.y - fVar4;
      fVar2 = *(float *)((int)manipulator + 0x5c);
      fVar7 = (moby->pos).z;
      fVar14 = ABS(fVar6);
      fVar13 = ABS(fVar4);
      *(float *)(puVar11 + 0x28) = fVar6;
      *(float *)((int)puVar11 + 0x144) = fVar4;
      *(float *)(puVar11 + 0x29) = fVar14 - fVar13;
      uVar24 = *(uint *)(puVar11 + 0x28);
      fVar4 = *(float *)(puVar11 + 0x28);
      uVar9 = *(uint *)((int)puVar11 + 0x144);
      (moby->pos).z = ((fVar2 - 1.0) - fVar7) * 0.11 + fVar7;
      dVar37 = 0.0;
      uVar27 = (ulonglong)(uVar24 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x29) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
      fVar4 = ABS(fVar4);
      if (*(float *)(puVar11 + 0x29) - 0.0 < 0.0) {
        fVar4 = fVar13;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar6 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar11 + 0x144));
      if (*(float *)(puVar11 + 0x29) - 0.0 < 0.0) {
        fVar7 = fVar14;
      }
      dVar29 = dVar37;
      if (0.0 < fVar4) {
        lVar18 = uVar17 - 0x210;
        lVar25 = uVar17 - 0xc4;
        lVar22 = uVar17 - 0xd4;
        lVar28 = 2;
        fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
        fVar7 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x2b) = fVar4;
        *(float *)(puVar11 + 0x2a) = fVar4;
        *(float *)((int)puVar11 + 0x154) = fVar4;
        *(float *)((int)puVar11 + 0x14c) = fVar4;
        fVar4 = fVar7 * fVar7;
        *(float *)(puVar11 + 0x2a) = *(float *)(puVar11 + 0x2a) * fVar7;
        *(float *)((int)puVar11 + 0x154) = *(float *)((int)puVar11 + 0x154) * fVar4;
        *(float *)(puVar11 + 0x2b) = *(float *)(puVar11 + 0x2b) * fVar4 * fVar7;
        do {
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x13c) * fVar4 * fVar4;
          iVar20 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar17 - 0xd4;
        pfVar23 = (float *)&DAT_007358e0;
        lVar18 = lVar26;
        lVar22 = lVar25;
        do {
          fVar4 = *pfVar23;
          fVar7 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar18 + 0x14c) = *(float *)((int)lVar18 + 0x14c) * fVar4;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar18 = 2;
        do {
          iVar20 = (int)lVar26;
          iVar12 = (int)lVar25;
          lVar26 = lVar26 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x14c)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar6);
      }
      dVar29 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
      dVar29 = (double)fastfunc::FastWrapRot((float)dVar29,1.5707964);
      dVar29 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)manipulator + 0x60),
                                  (float)(dVar29 * 0.009999999776482582));
      *(float *)((int)manipulator + 0x60) = (float)(dVar29 * 0.8999999761581421);
      dVar29 = (double)fastfunc::FastWrapRot
                                 ((moby->rotation).z,(float)(dVar29 * 0.8999999761581421));
      (moby->rotation).z = (float)dVar29;
      fVar4 = (moby->transform).v1.y * DAT_007663f4;
      fVar6 = (moby->transform).v1.z * DAT_007663f4;
      fVar2 = (moby->transform).v0.y * DAT_007663f0;
      fVar7 = (moby->transform).v0.z * DAT_007663f0;
      fVar13 = (moby->transform).v2.y * DAT_007663f8;
      fVar14 = (moby->transform).v2.z * DAT_007663f8;
      iVar20 = *(int *)((int)manipulator + 0x68);
      fVar16 = (moby->transform).v2.x * DAT_007663f8 +
               (moby->transform).v0.x * DAT_007663f0 + (moby->transform).v1.x * DAT_007663f4 +
               *(float *)(puVar11 + 0x10);
      fVar15 = (moby->transform).v2.w * DAT_007663f8 +
               (moby->transform).v0.w * DAT_007663f0 + (moby->transform).v1.w * DAT_007663f4 +
               DAT_007663fc;
      *(float *)(puVar11 + 0x12) = fVar16;
      *(float *)((int)puVar11 + 0x94) = fVar13 + fVar2 + fVar4 + *(float *)((int)puVar11 + 0x84);
      *(float *)(puVar11 + 0x13) = fVar14 + fVar7 + fVar6 + *(float *)(puVar11 + 0x11);
      *(float *)((int)puVar11 + 0x9c) = fVar15;
      if (iVar20 == -1) {
        *(undefined4 *)((int)manipulator + 0x6c) = 0;
        uVar21 = lights::CreatePointLight2
                           ((float)dVar50,dVar37,uVar45,uVar45,uVar45,(Vec4 *)(puVar11 + 0x12));
        *(undefined4 *)((int)manipulator + 0x68) = uVar21;
        sound::PlayMobySound(1,0,moby);
      }
      else {
        PointLights[iVar20].pos.x = fVar16;
        PointLights[iVar20].pos.y = *(float *)((int)puVar11 + 0x94);
        PointLights[iVar20].pos.z = *(float *)(puVar11 + 0x13);
        uVar24 = *(int *)((int)manipulator + 0x6c) + 1;
        *(uint *)((int)manipulator + 0x6c) = uVar24;
        if ((int)uVar24 < 0x29) {
          if (((uVar24 & 4) == 0) || ((0x18 < (int)uVar24 && ((uVar24 & 10) == 10)))) {
            PointLights[iVar20].color.x = 4.0;
            PointLights[iVar20].pos.w = 0.4;
          }
          else {
            PointLights[iVar20].pos.w = 0.0;
          }
        }
        else {
          PointLights[iVar20].color.x = 4.0;
          PointLights[iVar20].pos.w = 0.4;
        }
      }
    }
    else {
      fVar5 = (moby->pos).z;
      uVar24 = (int)fVar5 >> 0x1f;
      uVar9 = (int)*(uint *)((int)manipulator + 0x5c) >> 0x1f;
      fVar4 = *(float *)((int)manipulator + 0x5c);
      if ((int)((uVar24 >> 1 ^ (uint)fVar5) - uVar24) <
          (int)((uVar9 >> 1 ^ *(uint *)((int)manipulator + 0x5c)) - uVar9)) {
        fVar4 = (moby->pos).z + mobyutil::g_FrameTime;
      }
      bVar1 = g_standingOnMoby != moby;
      (moby->pos).z = fVar4;
      if ((bVar1) && (*(int *)((int)manipulator + 0x68) != -1)) {
        sound::PlayMobySound(2,0,moby);
        lights::DeletePointLight(*(undefined4 *)((int)manipulator + 0x68));
        *(undefined4 *)((int)manipulator + 0x68) = 0xffffffff;
      }
    }
  }
  else if (bVar3 < 6) {
    fVar5 = (moby->pos).z;
    uVar24 = (int)fVar5 >> 0x1f;
    uVar9 = (int)*(uint *)((int)manipulator + 0x5c) >> 0x1f;
    fVar4 = *(float *)((int)manipulator + 0x5c);
    fVar6 = *(float *)(puVar11 + 0x15);
    if ((int)((uVar24 >> 1 ^ (uint)fVar5) - uVar24) <
        (int)((uVar9 >> 1 ^ *(uint *)((int)manipulator + 0x5c)) - uVar9)) {
      fVar4 = (moby->pos).z + mobyutil::g_FrameTime;
    }
    DAT_009637cc = moby;
    (moby->pos).z = fVar4;
    fVar4 = hero::g_heroPadStick;
    *(float *)(puVar11 + 0x14) = hero::g_heroPadStick;
    dVar37 = -1.0;
    dVar50 = dVar37;
    if (g_GameSettings.CameraUpDown != 0) {
      dVar50 = 1.0;
    }
    fVar2 = (float)((double)DAT_0096ba04 * dVar50);
    *(float *)((int)puVar11 + 0xa4) = -fVar2;
    dVar50 = 1.0;
    fVar7 = fVar4 * fVar4 + --(fVar2 * fVar2);
    if (1.0 < SQRT(fVar7)) {
      fVar13 = 1.0 / SQRT(fVar7);
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar13 = -(fVar7 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
      fVar4 = fVar4 * fVar13;
      *(float *)(puVar11 + 0x14) = fVar4;
      *(float *)(puVar11 + 0x15) = fVar6 * fVar13;
      *(float *)((int)puVar11 + 0xa4) = -(fVar2 * fVar13);
    }
    fVar6 = DAT_0071f418;
    fVar4 = *(float *)((int)manipulator + 0x60) + -(DAT_0071f418 * 3.1415927 * fVar4);
    *(float *)((int)manipulator + 0x60) = fVar4;
    *(float *)((int)manipulator + 100) =
         *(float *)((int)manipulator + 100) + -(fVar6 * 0.7853982 * *(float *)((int)puVar11 + 0xa4))
    ;
    dVar29 = (double)fastfunc::FastWrapRot((moby->rotation).z,fVar4);
    (moby->rotation).z = (float)dVar29;
    dVar29 = (double)fastfunc::FastWrapRot
                               (*(float *)((int)manipulator + 0x44),
                                *(float *)((int)manipulator + 100));
    *(float *)((int)manipulator + 0x44) = (float)dVar29;
    if (-0.5235987901687622 <= dVar29) {
      fVar4 = *(float *)((int)manipulator + 100);
      if (0.5235987901687622 < dVar29) {
        *(undefined4 *)((int)manipulator + 0x44) = 0x3f060a92;
        fVar4 = 0.0;
        dVar29 = 0.5235987901687622;
      }
    }
    else {
      *(undefined4 *)((int)manipulator + 0x44) = 0xbf060a92;
      fVar4 = 0.0;
      dVar29 = -0.5235987901687622;
    }
    *(float *)((int)manipulator + 0x60) = *(float *)((int)manipulator + 0x60) * 0.97;
    *(float *)((int)manipulator + 100) = fVar4 * 0.97;
    fastfunc::FastQuaternionToEuler(-dVar29,uVar27 + 0x10,1);
    if ((g_downButtons & CIRCLE) == 0) {
      if ((moby->animationId != '\x05') && ((moby->field43_0x70 & 2U) != 0)) {
        mobyutil::MB_SetAnimation(lVar18,5,0,1);
      }
    }
    else if ((g_buttonsPressedThisFrame & CIRCLE) == 0) {
      if (moby->updateId == '\x03') {
        dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
        if (0.25 < ABS((float)(dVar29 - dVar50))) {
          if ((moby->field43_0x70 & 2U) != 0) {
            mobyutil::MB_SetAnimation(lVar18,4,0,1);
          }
        }
        else {
          dVar49 = (double)(mobyutil::g_FrameTime * 60.0);
          dVar29 = (double)fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
          mobyutil::MB_SphericalToVector
                    ((float)dVar49,(float)dVar29,*(float *)((int)manipulator + 0x44),
                     (float *)(puVar11 + 0x16));
          lVar26 = uVar17 - 0x160;
          mobyfunc::GetBonePosition(lVar18,1,lVar26);
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + 0x18);
          fVar4 = animationSpeed;
          *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(puVar11 + 0x19);
          *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar11 + 0x16);
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 0x17);
          *(undefined4 *)((int)puVar11 + 0x44) = *(undefined4 *)((int)puVar11 + 0xc4);
          *(undefined4 *)((int)puVar11 + 0x4c) = *(undefined4 *)((int)puVar11 + 0xcc);
          *(undefined4 *)((int)puVar11 + 0x54) = *(undefined4 *)((int)puVar11 + 0xb4);
          *(undefined4 *)((int)puVar11 + 0x5c) = *(undefined4 *)((int)puVar11 + 0xbc);
          puVar11[0x2e] = (longlong)(int)(fVar4 * 90.5);
          FUN_00229a90(lVar18);
          sound::PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x74,0x1f95e8);
          auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar48 = 10.5;
          auVar52 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          iVar20 = 0;
          auVar53 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x78,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar47 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)manipulator + 0x54) = 0;
          dVar46 = 0.0;
          dVar44 = -0.3500000238418579;
          dVar43 = 3.0;
          dVar49 = 6.0;
          dVar29 = 5.5;
          uVar45 = 0x40e86a0000000000;
          do {
            *(undefined4 *)(puVar11 + 0x1a) = 0;
            *(undefined4 *)((int)puVar11 + 0xd4) = 0;
            *(undefined4 *)(puVar11 + 0x1b) = 0;
            *(undefined4 *)((int)puVar11 + 0xdc) = 0;
            dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)(puVar11 + 0x1a) = (float)dVar30;
            dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)((int)puVar11 + 0xd4) = (float)dVar30;
            dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            dVar32 = (double)*(float *)((int)puVar11 + 0xb4);
            dVar33 = (double)*(float *)(puVar11 + 0x16);
            dVar34 = (double)*(float *)((int)puVar11 + 0xd4);
            dVar36 = (double)*(float *)(puVar11 + 0x17);
            dVar40 = (double)*(float *)(puVar11 + 0x1a);
            dVar30 = (double)DAT_0071f408;
            *(float *)(puVar11 + 0x1b) = (float)dVar31;
            dVar42 = (double)mobyutil::g_FrameTime;
            *(undefined4 *)((int)puVar11 + 0xdc) = *(undefined4 *)((int)puVar11 + 0xbc);
            dVar38 = (double)SQRT((float)(dVar31 * dVar31 +
                                         (double)(float)(dVar40 * dVar40 +
                                                        (double)(float)(dVar34 * dVar34))));
            dVar41 = (double)(float)((double)(SQRT((float)(dVar36 * dVar36 +
                                                          (double)(float)(dVar33 * dVar33 +
                                                                         (double)(float)(dVar32 * 
                                                  dVar32)))) * (float)(dVar30 * dVar44 + dVar50)) /
                                    dVar38);
            dVar30 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            dVar35 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            dVar39 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            *(float *)(puVar11 + 0x1b) = (float)(dVar36 + dVar30);
            *(float *)((int)puVar11 + 0xd4) = (float)(dVar32 + dVar35);
            *(float *)(puVar11 + 0x1a) = (float)(dVar33 + dVar39);
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar42 * dVar43),(float)(dVar42 * dVar49));
            fVar6 = *(float *)((int)puVar11 + 0xd4);
            fVar2 = *(float *)(puVar11 + 0x1a);
            fVar7 = *(float *)(puVar11 + 0x1b);
            dVar32 = (double)animationSpeed;
            dVar31 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar29);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar48);
            fVar4 = (float)(dVar30 / dVar31);
            dVar30 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            dVar32 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            dVar33 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            *(float *)(puVar11 + 0x1a) = (float)dVar30;
            *(float *)((int)puVar11 + 0xd4) = (float)dVar32;
            *(float *)(puVar11 + 0x1b) = (float)dVar33;
            uVar19 = mobyutil::MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x174),
                                *(undefined4 *)((int)puVar11 + 0x174));
            partupd::SpawnPart_27(uVar45,lVar26,uVar17 - 0x150,0x5f2f4f6f,uVar19);
            iVar20 = iVar20 + 1;
          } while (iVar20 < 5);
          fVar6 = *(float *)((int)puVar11 + 0xb4);
          fVar2 = *(float *)(puVar11 + 0x16);
          fVar7 = *(float *)(puVar11 + 0x17);
          dVar49 = (double)animationSpeed;
          dVar29 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
          fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar29);
          dVar37 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          dVar43 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          dVar44 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar11 + 0x16) = (float)dVar37;
          *(float *)((int)puVar11 + 0xb4) = (float)dVar43;
          *(float *)(puVar11 + 0x17) = (float)dVar44;
          puVar11[0x2e] = (longlong)(int)(dVar49 * 4.5);
          puVar11[0x2e] = (longlong)(int)(dVar49 * dVar47);
          uVar45 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x174),
                              *(undefined4 *)((int)puVar11 + 0x174));
          partupd::SpawnPart_27(0x411e848000000000,lVar26,uVar17 - 0x170,0x2f4f7f7f,uVar45);
        }
      }
      else if (moby->updateId == '\x04') {
        dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
        if (0.25 < ABS((float)(dVar29 - dVar50))) {
          if ((moby->field43_0x70 & 2U) != 0) {
            mobyutil::MB_SetAnimation(lVar18,3,0,1);
          }
        }
        else {
          dVar49 = (double)(mobyutil::g_FrameTime * 60.0);
          dVar29 = (double)fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
          mobyutil::MB_SphericalToVector
                    ((float)dVar49,(float)dVar29,*(float *)((int)manipulator + 0x44),
                     (float *)(puVar11 + 0x1c));
          lVar26 = uVar17 - 0x130;
          mobyfunc::GetBonePosition(lVar18,2,lVar26);
          fVar4 = animationSpeed;
          *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + 0x1e);
          *(undefined4 *)(puVar11 + 9) = *(undefined4 *)(puVar11 + 0x1f);
          *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(puVar11 + 0x1c);
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 0x1d);
          *(undefined4 *)((int)puVar11 + 0x44) = *(undefined4 *)((int)puVar11 + 0xf4);
          *(undefined4 *)((int)puVar11 + 0x4c) = *(undefined4 *)((int)puVar11 + 0xfc);
          *(undefined4 *)((int)puVar11 + 0x54) = *(undefined4 *)((int)puVar11 + 0xe4);
          *(undefined4 *)((int)puVar11 + 0x5c) = *(undefined4 *)((int)puVar11 + 0xec);
          puVar11[0x2e] = (longlong)(int)(fVar4 * 90.5);
          FUN_00229a90(lVar18);
          sound::PlayMobySound(0,0,moby);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar52 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          GameCamera.offset0.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x74,0x1f95e8);
          auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar48 = 10.5;
          auVar52 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar52);
          auVar51 = ZEXT416(0xffffffff);
          auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
          auVar53 = vectorShiftLeftIntegerWord(auVar51,auVar51);
          iVar20 = 0;
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x168,
                          0x9513c0);
          GameCamera.offset1.amp = 0.03;
          auVar51 = loadVectorLeftIndexed(0x78,0x1f95e8);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          dVar47 = 7.5;
          auVar51 = vectorMultiplyAddFloatingPoint
                              (auVar54,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60
                               ,auVar53);
          auVar51 = vectorConvertToSignedFixedPointWordSaturate(auVar51,0);
          auVar51 = auVar51 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset1.total =
               storeVectorElementWordIndexed
                         (auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60,0x178,
                          0x9513c0);
          *(undefined2 *)((int)manipulator + 0x54) = 1;
          dVar46 = 0.0;
          dVar44 = -0.3500000238418579;
          dVar43 = 3.0;
          dVar49 = 6.0;
          dVar29 = 5.5;
          uVar45 = 0x40e86a0000000000;
          do {
            *(undefined4 *)(puVar11 + 0x20) = 0;
            *(undefined4 *)((int)puVar11 + 0x104) = 0;
            *(undefined4 *)(puVar11 + 0x21) = 0;
            *(undefined4 *)((int)puVar11 + 0x10c) = 0;
            dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)(puVar11 + 0x20) = (float)dVar30;
            dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            *(float *)((int)puVar11 + 0x104) = (float)dVar30;
            dVar31 = (double)mobyutil::MB_randRangeFloat((float)dVar37,(float)dVar50);
            dVar32 = (double)*(float *)((int)puVar11 + 0xe4);
            dVar33 = (double)*(float *)(puVar11 + 0x1c);
            dVar34 = (double)*(float *)((int)puVar11 + 0x104);
            dVar36 = (double)*(float *)(puVar11 + 0x1d);
            dVar40 = (double)*(float *)(puVar11 + 0x20);
            dVar30 = (double)DAT_0071f408;
            *(float *)(puVar11 + 0x21) = (float)dVar31;
            dVar42 = (double)mobyutil::g_FrameTime;
            *(undefined4 *)((int)puVar11 + 0x10c) = *(undefined4 *)((int)puVar11 + 0xec);
            dVar38 = (double)SQRT((float)(dVar31 * dVar31 +
                                         (double)(float)(dVar40 * dVar40 +
                                                        (double)(float)(dVar34 * dVar34))));
            dVar41 = (double)(float)((double)(SQRT((float)(dVar36 * dVar36 +
                                                          (double)(float)(dVar33 * dVar33 +
                                                                         (double)(float)(dVar32 * 
                                                  dVar32)))) * (float)(dVar30 * dVar44 + dVar50)) /
                                    dVar38);
            dVar30 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            dVar35 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            dVar39 = dVar46;
            if (dVar46 - dVar38 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar30 = (double)(float)(dVar31 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar35 = (double)(float)(dVar34 * dVar41);
            }
            if (dVar38 - dVar46 < 0.0) {
              dVar39 = (double)(float)(dVar40 * dVar41);
            }
            *(float *)(puVar11 + 0x21) = (float)(dVar36 + dVar30);
            *(float *)((int)puVar11 + 0x104) = (float)(dVar32 + dVar35);
            *(float *)(puVar11 + 0x20) = (float)(dVar33 + dVar39);
            dVar30 = (double)mobyutil::MB_randRangeFloat
                                       ((float)(dVar42 * dVar43),(float)(dVar42 * dVar49));
            fVar6 = *(float *)((int)puVar11 + 0x104);
            fVar2 = *(float *)(puVar11 + 0x20);
            fVar7 = *(float *)(puVar11 + 0x21);
            dVar32 = (double)animationSpeed;
            dVar31 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar29);
            puVar11[0x2e] = (longlong)(int)(dVar32 * dVar48);
            fVar4 = (float)(dVar30 / dVar31);
            dVar30 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            dVar32 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            dVar33 = dVar46;
            if (dVar46 - dVar31 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar30 = (double)(fVar2 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar32 = (double)(fVar6 * fVar4);
            }
            if (dVar31 - dVar46 < 0.0) {
              dVar33 = (double)(fVar7 * fVar4);
            }
            *(float *)(puVar11 + 0x20) = (float)dVar30;
            *(float *)((int)puVar11 + 0x104) = (float)dVar32;
            *(float *)(puVar11 + 0x21) = (float)dVar33;
            uVar19 = mobyutil::MB_randRange
                               (*(undefined4 *)((int)puVar11 + 0x174),
                                *(undefined4 *)((int)puVar11 + 0x174));
            partupd::SpawnPart_27(uVar45,lVar26,uVar17 - 0x120,0x5f2f4f6f,uVar19);
            iVar20 = iVar20 + 1;
          } while (iVar20 < 5);
          fVar6 = *(float *)((int)puVar11 + 0xe4);
          fVar2 = *(float *)(puVar11 + 0x1c);
          fVar7 = *(float *)(puVar11 + 0x1d);
          dVar49 = (double)animationSpeed;
          dVar29 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar6 * fVar6);
          fVar4 = (float)((double)(mobyutil::g_FrameTime * 0.5) / dVar29);
          dVar37 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          dVar43 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          dVar44 = dVar46;
          if (dVar46 - dVar29 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar37 = (double)(fVar2 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar43 = (double)(fVar6 * fVar4);
          }
          if (dVar29 - dVar46 < 0.0) {
            dVar44 = (double)(fVar7 * fVar4);
          }
          *(float *)(puVar11 + 0x1c) = (float)dVar37;
          *(float *)((int)puVar11 + 0xe4) = (float)dVar43;
          *(float *)(puVar11 + 0x1d) = (float)dVar44;
          puVar11[0x2e] = (longlong)(int)(dVar49 * 4.5);
          puVar11[0x2e] = (longlong)(int)(dVar49 * dVar47);
          uVar45 = mobyutil::MB_randRange
                             (*(undefined4 *)((int)puVar11 + 0x174),
                              *(undefined4 *)((int)puVar11 + 0x174));
          partupd::SpawnPart_27(0x411e848000000000,lVar26,uVar17 - 0x140,0x2f4f7f7f,uVar45);
        }
      }
    }
    else {
      mobyutil::MB_SetAnimation
                (lVar18,((LZCOUNT(-(uint)*(ushort *)((int)manipulator + 0x54)) << 0x3a) >> 0x3f & 1U
                        ) + 3,0,1);
    }
    iVar20 = fastfunc::FastDecTimerS16(uVar27 + 0x52);
    if (iVar20 != 0) {
      mobyfunc::UpdateMobyTransform(moby);
      moby->modeBits = moby->modeBits | NO_POST_UPDATE;
      camera::camera5::DeactivateMobyDrivenCamAccel();
      mobyfunc::GetBonePosition(lVar18,0,uVar17 - 0x180);
      dVar49 = 1.5707963705062866;
      dVar29 = (double)DAT_007663e0;
      dVar37 = (double)fastfunc::FastWrapRot(1.5707964,(moby->rotation).z);
      mobyutil::MB_SphericalToVector
                ((float)dVar29,(float)dVar37,*(float *)((int)manipulator + 0x44),
                 (float *)(puVar11 + 0x22));
      fVar4 = *(float *)(puVar11 + 0x23) + DAT_007663e4;
      *(undefined4 *)((int)puVar11 + 300) = *(undefined4 *)((int)puVar11 + 0xac);
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x14) + *(float *)(puVar11 + 0x22);
      *(float *)(puVar11 + 0x23) = fVar4;
      *(float *)((int)puVar11 + 0x124) =
           *(float *)((int)puVar11 + 0xa4) + *(float *)((int)puVar11 + 0x114);
      *(float *)(puVar11 + 0x25) = *(float *)(puVar11 + 0x15) + fVar4;
      camera::camera5::Camera_SetMobyDrivenTargetPos((float *)(puVar11 + 0x24));
      *(undefined4 *)(puVar11 + 0x26) = 0;
      fVar4 = (moby->rotation).z;
      *(float *)((int)puVar11 + 0x134) = -*(float *)((int)manipulator + 0x44);
      dVar37 = (double)fastfunc::FastWrapRot((float)dVar49,fVar4);
      *(float *)(puVar11 + 0x27) = (float)dVar37;
      camera::camera5::Camera_SetMobyDrivenTargetRot((float *)(puVar11 + 0x26));
    }
    puVar11[0xe] = 4;
    camera::DrawTargetCrosshair((float)dVar50,moby,0xff0f0fff,4);
  }
  return;
}



//==== 001fad90  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1202_001fad90(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1202_001fad90(void)

{
  DAT_0076644c = 0x10000;
  return;
}



//==== 001fade0  ns=mobyupdate_helpers  size=0x4ec
// sig: undefined M1202_001fade0(void)
// callers(1): 001fcd60 mobyupdate_unsorted::UpdateMoby_1202
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110950 mobyutil::MB_RandomizeVector; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M1202_001fade0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  iVar6 = DAT_007664c0;
  iVar12 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < DAT_007664c0) {
    do {
      local_d0 = *(float *)(param_1 + 0x10);
      local_cc = *(undefined4 *)(param_1 + 0x14);
      local_c8 = *(float *)(param_1 + 0x18);
      local_c4 = *(undefined4 *)(param_1 + 0x1c);
      mobyutil::MB_RandomizeVector(DAT_007664c8,&local_d0);
      dVar20 = 0.550000011920929;
      local_c8 = local_c8 + 0.55;
      dVar14 = (double)mobyutil::MB_randRot();
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_007664d4,DAT_007664d8);
      dVar16 = (double)mobyutil::MB_randRangeFloat(DAT_007664dc,DAT_007664e0);
      if (*(char *)(param_1 + 0x20) == '\v') {
        dVar15 = (double)(float)(dVar15 * dVar20);
        dVar16 = (double)(float)(dVar16 * dVar20);
        local_c8 = local_c8 - 0.2;
      }
      fVar1 = (float)(dVar14 + 1.570796251296997);
      iVar13 = 0;
      dVar20 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar20 = dVar14;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar20 < 0.0) {
        dVar17 = dVar20;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar14 = (double)(float)(dVar17 * dVar17);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar17));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar20 = (double)(float)(dVar14 * dVar19);
      dVar18 = (double)mobyutil::g_FrameTime;
      local_b8 = (float)(dVar18 * dVar16);
      fVar3 = fVar5 * fVar1;
      local_a0 = (longlong)DAT_00766504;
      dVar16 = 0.0;
      dVar21 = 0.5;
      local_c0 = *(float *)(iVar2 + 0x70) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
      ;
      local_bc = *(float *)(iVar2 + 0x74) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 ((float)(dVar14 * dVar20) * 2.601887e-06 +
                 (float)(dVar20 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar14 * dVar17) *
                                                       -0.16666656732559204 + dVar17))));
      local_a4 = local_b4;
      local_a8 = -(DAT_007664e4 * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_a0 + 0.5)) - local_b8);
      local_b0 = local_c0;
      local_ac = local_bc;
      if (0 < DAT_007664c4) {
        dVar14 = 1.5;
        dVar15 = 1.0;
        dVar20 = 2.5;
        do {
          dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar14);
          local_b4 = (float)((double)DAT_007664e8 * dVar17);
          local_a4 = (float)((double)DAT_007664ec * dVar17);
          mobyutil::MB_RandomizeVector(DAT_007664cc,&local_d0);
          mobyutil::MB_RandomizeVector(DAT_007664d0 * mobyutil::g_FrameTime,&local_b0);
          uVar8 = DAT_007664f8;
          uVar7 = DAT_007664f0;
          mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar9 = fastfunc::FastLerpColor(uVar7,uVar8);
          uVar8 = DAT_007664fc;
          uVar7 = DAT_007664f4;
          mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar10 = fastfunc::FastLerpColor(uVar7,uVar8);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00766500 + dVar21);
          local_a0 = (longlong)DAT_00766508;
          fVar3 = animationSpeed * (float)((double)(longlong)DAT_00766504 + dVar21);
          dVar17 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)local_a0 * dVar21),
                                      (float)((double)local_a0 * dVar20));
          uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          partupd::SpawnPart_2
                    (&local_d0,&local_c0,&local_b0,uVar9,uVar10,(int)fVar1,(int)fVar3,uVar11);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_007664c4);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar6);
  }
  return;
}



//==== 001fb2f0  ns=mobyupdate_helpers  size=0x1c8
// sig: undefined M1202_001fb2f0(void)
// callers(1): 001fcd60 mobyupdate_unsorted::UpdateMoby_1202
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012f6b0 partupd::SpawnPart_52

void mobyupdate_helpers::M1202_001fb2f0(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 local_50 [24];
  
  mobyutil::MB_randRot();
  dVar4 = 0.0;
  mobyutil::MB_randRangeFloat(0.0,DAT_007664bc);
  uVar2 = mobyutil::MB_randRangeFloat((float)dVar4,DAT_007664ac);
  uVar3 = mobyutil::MB_randRangeFloat(DAT_007664ac,DAT_007664b0);
  uVar1 = mobyutil::MB_randRange(DAT_007664b4,DAT_007664b8);
  partupd::SpawnPart_52(uVar2,uVar3,local_50,DAT_007664a4,DAT_007664a8,in_r6,in_r7,uVar1);
  return;
}



//==== 001fb4d0  ns=mobyupdate_helpers  size=0x700
// sig: undefined M1202_001fb4d0(void)
// callers(1): 001fcd60 mobyupdate_unsorted::UpdateMoby_1202
// callees(3): 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots

double mobyupdate_helpers::M1202_001fb4d0(int param_1)

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
  ushort uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x150;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar18;
  puVar13[0x2c] = in_LR;
  puVar13[0x24] = in_f26;
  puVar13[0x25] = in_f27;
  puVar13[0x26] = in_f28;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar13[0x22] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x21);
  dVar35 = 0.7853981852531433;
  fVar2 = *(float *)(param_1 + 0x18);
  puVar13[0x21] = unaff_r29;
  iVar12 = *(int *)(iVar12 + 0x160);
  if (bVar1 == 0xff) {
    fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar4 = ABS(fVar2);
    fVar9 = ABS(fVar3);
    *(float *)(puVar13 + 0x11) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar3;
    *(float *)(puVar13 + 0x12) = fVar4 - fVar9;
    dVar35 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar26 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)(puVar13 + 0x1b) = fVar2;
      *(float *)((int)puVar13 + 0xdc) = fVar2;
      *(float *)(puVar13 + 0x1c) = fVar2;
      lVar24 = uVar18 - 0x140;
      fVar2 = fVar4 * fVar4;
      lVar20 = uVar18 - 0x7c;
      lVar22 = uVar18 - 0x6c;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar2;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar24 + 0xd4) = *(float *)((int)lVar24 + 0xc4) * fVar2 * fVar2;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xd4) * fVar2;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      do {
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar14 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar9 + fVar3);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(iVar12 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar10 = fVar3 - fVar9;
    fVar7 = fVar4 - fVar5;
    fVar8 = ABS(fVar10);
    fVar6 = ABS(fVar7);
    *(float *)((int)puVar13 + 0x7c) = fVar10;
    *(float *)(puVar13 + 0x10) = fVar7;
    *(float *)((int)puVar13 + 0x84) = fVar8 - fVar6;
    dVar30 = 0.0;
    dVar34 = (double)(DAT_00766494 * -0.017453292);
    dVar32 = (double)(DAT_00766494 * 0.017453292);
    uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar7 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar17 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar17 = fVar8;
    }
    dVar29 = dVar30;
    if (0.0 < fVar7) {
      lVar20 = uVar18 - 0x140;
      lVar24 = uVar18 - 0x8c;
      lVar22 = uVar18 - 0x9c;
      lVar26 = 2;
      fVar7 = (fVar17 - fVar7) / (fVar17 + fVar7);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 0xb4) = fVar7;
      *(float *)(puVar13 + 0x17) = fVar7;
      *(float *)((int)puVar13 + 0xbc) = fVar7;
      *(float *)(puVar13 + 0x18) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar7;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xa4) * fVar7 * fVar7;
        iVar14 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar7 = *pfVar23;
        fVar8 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xb4) * fVar7;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar22 = 2;
      lVar20 = lVar21;
      do {
        iVar14 = (int)lVar20;
        iVar15 = (int)lVar24;
        lVar20 = lVar20 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar25 = (ushort *)(&mobyutil::g_MobyGroups)[bVar1];
    dVar31 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar33 = dVar32;
    if (puVar25 != (ushort *)0x0) {
      do {
        uVar16 = *puVar25 & 0x7fff;
        if ((MobyInstance[uVar16].state == '\x05') ||
           (fVar2 = MobyInstance[uVar16].pos.y - *(float *)(iVar12 + 0x14),
           fVar3 = MobyInstance[uVar16].pos.x - *(float *)(iVar12 + 0x10),
           fVar9 = MobyInstance[uVar16].pos.z - *(float *)(iVar12 + 0x18), dVar32 = dVar33,
           (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar31)) {
          fVar2 = MobyInstance[uVar16].pos.x - *(float *)(iVar12 + 0x10);
          fVar3 = MobyInstance[uVar16].pos.y - *(float *)(iVar12 + 0x14);
          dVar27 = ABS((double)fVar2);
          dVar28 = ABS((double)fVar3);
          *(float *)(puVar13 + 0xe) = fVar2;
          *(float *)((int)puVar13 + 0x74) = fVar3;
          *(float *)(puVar13 + 0xf) = (float)(dVar27 - dVar28);
          uVar19 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
          dVar32 = ABS((double)*(float *)(puVar13 + 0xe));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar32 = dVar28;
          }
          fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar28 = dVar27;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar27 = dVar30;
          if (dVar30 < dVar32) {
            lVar20 = uVar18 - 0x140;
            lVar24 = uVar18 - 0xac;
            lVar22 = uVar18 - 0xbc;
            lVar26 = 2;
            fVar9 = (float)(dVar28 - dVar32) / (float)(dVar28 + dVar32);
            fVar4 = fVar9 * fVar9;
            *(float *)((int)puVar13 + 0x94) = fVar9;
            *(float *)(puVar13 + 0x13) = fVar9;
            *(float *)((int)puVar13 + 0x9c) = fVar9;
            *(float *)(puVar13 + 0x14) = fVar9;
            fVar9 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
            *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar9;
            *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar9 * fVar4;
            do {
              *(float *)((int)lVar20 + 0x94) = *(float *)((int)lVar20 + 0x84) * fVar9 * fVar9;
              iVar14 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar9 * fVar9;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar18 - 0xbc;
            pfVar23 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar22 = lVar24;
            do {
              fVar9 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar20 + 0x94) = *(float *)((int)lVar20 + 0x94) * fVar9;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar20 = lVar21;
            dVar32 = dVar30;
            do {
              iVar14 = (int)lVar20;
              iVar15 = (int)lVar24;
              lVar20 = lVar20 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar14 + 0x94)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar27 = (double)((float)(dVar32 + dVar35) * fVar2 + fVar3);
          }
          dVar27 = (double)fastfunc::FastDiffRots(dVar27,dVar29);
          if (((dVar27 <= dVar30) || (dVar32 = dVar27, dVar33 <= dVar27)) &&
             (dVar32 = dVar33, dVar34 < dVar27 && dVar27 < dVar30)) {
            dVar34 = dVar27;
          }
        }
        uVar11 = *puVar25;
        puVar25 = puVar25 + 1;
        dVar33 = dVar32;
      } while (-1 < (short)uVar11);
    }
    dVar35 = (double)fastfunc::FastSubRots((float)dVar32,(float)dVar34);
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar34,(float)(dVar35 * 0.5));
    dVar35 = (double)fastfunc::FastWrapRot((float)dVar35,(float)dVar29);
  }
  return dVar35;
}



//==== 001fbbd0  ns=mobyupdate_helpers  size=0x68
// sig: undefined M1202_001fbbd0(void)
// callers(1): 001fcd60 mobyupdate_unsorted::UpdateMoby_1202
// callees(0): 

void mobyupdate_helpers::M1202_001fbbd0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
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



//==== 001fbc78  ns=mobyupdate_helpers  size=0x102c
// sig: undefined M1202_001fbc78(void)
// callers(1): 001fcd60 mobyupdate_unsorted::UpdateMoby_1202
// callees(17): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 001158b0 mobyutil::MB_SetupJumpArc; 0011b728 mobyutil::MB_UnlockSkillPoint; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub

void mobyupdate_helpers::M1202_001fbc78(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ushort *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  float *pfVar29;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar17 = uVar28 - 0x170;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar28;
  puVar14[0x30] = in_LR;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x26] = unaff_r26;
  puVar14[0x2b] = unaff_r31;
  puVar14[0x2a] = unaff_r30;
  iVar20 = g_CurrentWeapon;
  pvVar9 = param_1->pVar;
  uVar30 = ZEXT48(pvVar9);
  puVar14[0x29] = unaff_r29;
  puVar14[0x28] = unaff_r28;
  puVar14[0x27] = unaff_r27;
  puVar14[0x25] = unaff_r25;
  if ((iVar20 == 0x15) && (*(MobyInstance **)((int)g_currentWeaponMoby->pVar + 0x10) == param_1)) {
    if ((param_1->group != 0xff) &&
       (puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group],
       puVar18 != (ushort *)0x0)) {
      do {
        if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar6 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar6);
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
  }
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    if ((param_1->group != 0xff) &&
       (puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group],
       puVar18 != (ushort *)0x0)) {
      do {
        if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar6 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar6);
    }
    dVar32 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
    uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x1ac) = uVar19;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  }
  fastfunc::FastDecTimerS32(uVar30 + 0x1ac);
  *(undefined4 *)(puVar14 + 0x18) = 1;
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  iVar20 = mobyutil::MB_damage(param_1,0xb30000,0);
  iVar21 = mobyutil::MB_HandleDamage
                     (param_1,iVar20,uVar30 + 0x20,0,puVar14 + 0x18,(int)puVar14 + 0xc4,0,4);
  fastfunc::FastDecTimerS16(uVar30 + 0x26);
  if (((*(int *)(puVar14 + 0x18) == 1) || (*(int *)(puVar14 + 0x18) == 0)) ||
     (param_1->state == '\f' || param_1->state == '\v')) goto LAB_001fc8b0;
  if (((Level == Orxon) && (iVar20 != 0)) &&
     ((*(int *)(iVar20 + 0x20) != 0 &&
      ((*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) == 0x31a && (*(int *)((int)pvVar9 + 0x1ac) != 0))
      )))) {
    mobyutil::MB_UnlockSkillPoint(0x11);
  }
  if (((*(short *)((int)pvVar9 + 0x26) != 0) && (*(char *)(iVar20 + 0x28) == '\0')) &&
     (uVar12 = (int)*(uint *)((int)puVar14 + 0xc4) >> 0x1f, iVar21 = 0xb,
     (int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0xc4)) - uVar12) < 0x40400000)) {
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  iVar22 = hero::g_heroStateTimer;
  if (((g_heroState == WALLOPER_SOMETHING) ||
      ((DAT_0096bd70 == 0x20 &&
       (puVar14[0x23] = (longlong)(int)(animationSpeed * 30.5),
       iVar22 < *(int *)((int)puVar14 + 0x11c))))) &&
     (uVar12 = (int)*(uint *)((int)puVar14 + 0xc4) >> 0x1f,
     0x40000000 < (int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0xc4)) - uVar12))) {
    *(undefined4 *)((int)puVar14 + 0xc4) = 0x40000000;
  }
  if ((uint)*(ushort *)(iVar20 + 0x2a) == (int)(short)param_1->oClass) {
    iVar21 = 0xb;
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  if (((param_1->animationId == '\x06') || (param_1->animationId == '\a')) &&
     ((g_heroType == '\x01' && (*(MobyInstance **)(iVar20 + 0x20) == g_heroMobyPtr)))) {
    iVar21 = 0xb;
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  fVar2 = g_heroPosition.y;
  if (*(short *)(iVar20 + 0x2a) == 0x47) {
    *(float *)(puVar14 + 0xe) = g_heroPosition.x;
    fVar3 = g_heroPosition.z;
    *(float *)((int)puVar14 + 0x74) = fVar2;
    fVar2 = g_heroPosition.w;
    *(float *)(puVar14 + 0xf) = fVar3;
    *(float *)((int)puVar14 + 0x7c) = fVar2;
    *(float *)(puVar14 + 0xf) = fVar3 + 1.0;
    *(f32 *)(puVar14 + 0x10) = (param_1->pos).x;
    *(f32 *)((int)puVar14 + 0x84) = (param_1->pos).y;
    fVar2 = (param_1->pos).z;
    *(f32 *)((int)puVar14 + 0x8c) = (param_1->pos).w;
    *(float *)(puVar14 + 0x11) = fVar2 + 1.0;
    iVar22 = collproc::CollLine(uVar28 - 0x100,uVar28 - 0xf0,2,param_1,0);
    if (iVar22 != 0) {
      iVar21 = 0xb;
      *(undefined4 *)((int)puVar14 + 0xc4) = 0;
    }
  }
  else {
    iVar22 = *(int *)(iVar20 + 0x20);
    if ((iVar22 != 0) && (*(short *)(iVar22 + 0xa6) != 0x359)) {
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar22 + 0x10);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar22 + 0x14);
      fVar2 = *(float *)(iVar22 + 0x18);
      *(float *)(puVar14 + 0x13) = fVar2;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar22 + 0x1c);
      *(f32 *)(puVar14 + 0x14) = (param_1->pos).x;
      *(f32 *)((int)puVar14 + 0xa4) = (param_1->pos).y;
      fVar3 = (param_1->pos).z;
      *(f32 *)((int)puVar14 + 0xac) = (param_1->pos).w;
      dVar34 = 1.0;
      *(float *)(puVar14 + 0x15) = fVar3 + 1.0;
      sVar7 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
      if ((sVar7 == 0xba) || (sVar7 == 0)) {
        *(float *)(puVar14 + 0x13) = fVar2 + 0.25;
      }
      iVar22 = collproc::CollLine(uVar28 - 0xe0,uVar28 - 0xd0,0x12,param_1,0);
      if (iVar22 != 0) {
        fastfunc::FastVecSub(uVar28 - 0xc0,uVar28 - 0xd0,uVar28 - 0xe0);
        fVar2 = *(float *)((int)puVar14 + 0xb4);
        fVar3 = *(float *)(puVar14 + 0x16);
        fVar4 = *(float *)(puVar14 + 0x17);
        dVar38 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        dVar33 = dVar32;
        dVar35 = dVar32;
        dVar40 = dVar32;
        if ((double)(float)SQRT(dVar38) != dVar32) {
          dVar33 = 1.0 / SQRT(dVar38);
          dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 -
                                                   dVar34) * (double)(float)(dVar33 * 0.5) + dVar33)
          ;
          dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 -
                                                   dVar34) * (double)(float)(dVar33 * 0.5) + dVar33)
          ;
          fVar5 = (float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 - dVar34) *
                          (double)(float)(dVar33 * 0.5) + dVar33);
          dVar33 = (double)(fVar3 * fVar5);
          dVar35 = (double)(fVar2 * fVar5);
          dVar40 = (double)(fVar4 * fVar5);
        }
        dVar36 = (double)(CollOutput.normal.z * CollOutput.normal.z +
                         CollOutput.normal.x * CollOutput.normal.x +
                         CollOutput.normal.y * CollOutput.normal.y);
        dVar38 = dVar32;
        dVar37 = dVar32;
        dVar39 = dVar32;
        if ((double)(float)SQRT(dVar36) != dVar32) {
          dVar38 = 1.0 / SQRT(dVar36);
          dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 -
                                                   dVar34) * (double)(float)(dVar38 * 0.5) + dVar38)
          ;
          dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 -
                                                   dVar34) * (double)(float)(dVar38 * 0.5) + dVar38)
          ;
          fVar2 = (float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 - dVar34) *
                          (double)(float)(dVar38 * 0.5) + dVar38);
          dVar38 = (double)(CollOutput.normal.x * fVar2);
          dVar37 = (double)(CollOutput.normal.y * fVar2);
          dVar39 = (double)(CollOutput.normal.z * fVar2);
        }
        if (0.5 < ABS((float)(dVar40 * dVar39 +
                             (double)(float)(dVar33 * dVar38 + (double)(float)(dVar35 * dVar37)))))
        {
          iVar21 = 0xb;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
        }
      }
    }
  }
  fVar2 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar14 + 0xc4);
  *(float *)((int)pvVar9 + 0x20) = fVar2;
  if ((double)fVar2 <= dVar32) {
    iVar21 = 1;
  }
  if ((param_1->group != 0xff) &&
     (puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group], puVar18 != (ushort *)0x0)
     ) {
    do {
      if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
        MobyInstance[*puVar18 & 0x7fff].state = '\x02';
      }
      uVar6 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar6);
  }
  uVar19 = fastfunc::FastDoubleToInt(0x4088000000000000);
  *(undefined4 *)((int)pvVar9 + 0x90) = uVar19;
  *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f400000;
  *(undefined1 *)((int)pvVar9 + 0xad) = 0;
  *(undefined4 *)((int)pvVar9 + 0x94) = 9;
  uVar12 = *(uint *)(iVar20 + 0x10);
  uVar10 = *(uint *)(iVar20 + 0x14);
  dVar35 = ABS((double)*(float *)(iVar20 + 0x10));
  dVar34 = ABS((double)*(float *)(iVar20 + 0x14));
  *(float *)(puVar14 + 0x1a) = (float)(dVar35 - dVar34);
  MVar8 = param_1->modeBits;
  dVar40 = 0.7853981852531433;
  uVar26 = (ulonglong)(uVar12 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
  dVar33 = dVar35;
  if ((double)*(float *)(puVar14 + 0x1a) - dVar32 < 0.0) {
    dVar33 = dVar34;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar26 << 2));
  if ((double)*(float *)(puVar14 + 0x1a) - dVar32 < 0.0) {
    dVar34 = dVar35;
  }
  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  dVar35 = dVar32;
  if (dVar32 < dVar33) {
    lVar16 = uVar28 - 0x160;
    lVar24 = uVar28 - 0x7c;
    lVar27 = uVar28 - 0x6c;
    lVar31 = 2;
    fVar4 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar14 + 0x20) = fVar4;
    *(float *)(puVar14 + 0x1f) = fVar4;
    *(float *)((int)puVar14 + 0xfc) = fVar4;
    *(float *)((int)puVar14 + 0xf4) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar5;
    *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar4;
    *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0xf4) = *(float *)((int)lVar16 + 0xe4) * fVar4 * fVar4;
      iVar22 = (int)lVar24;
      lVar16 = lVar16 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
      lVar27 = lVar27 + 8;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    lVar31 = 4;
    lVar27 = uVar28 - 0x7c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar24 = lVar27;
    do {
      fVar4 = *pfVar29;
      fVar5 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar16 + 0xf4) = *(float *)((int)lVar16 + 0xf4) * fVar4;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
      lVar24 = lVar24 + 8;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    lVar24 = 2;
    lVar16 = lVar17;
    dVar34 = dVar32;
    do {
      iVar22 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar15 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0xf4)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  *(float *)(puVar14 + 0x19) = (float)dVar35;
  if (iVar21 < 4) {
    if (iVar21 < 1) goto LAB_001fc8b0;
    if (iVar21 < 3) {
      param_1->state = '\v';
      param_1->modeBits =
           MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      goto LAB_001fc8b0;
    }
  }
  else {
    if (10 < iVar21) goto LAB_001fc8b0;
    if (iVar21 < 6) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      param_1->state = '\n';
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x24,0x1fbc38);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
      *(float *)((int)pvVar9 + 0x80) = DAT_00766478 * DAT_0071f418;
      fVar2 = 3.0;
      if (g_heroType == '\x01') {
        fVar2 = 1.0;
      }
      mobyutil::MB_SetupJumpArc
                ((double)fVar2,0x3fe0000000000000,&DAT_001fbc38,g_heroType,uVar30 + 0x70);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40600000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x40e00000;
      uVar19 = *(undefined4 *)(iVar20 + 0x18);
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar20 + 0x10);
      *(undefined4 *)(puVar14 + 7) = uVar19;
      uVar19 = *(undefined4 *)(iVar20 + 0x1c);
      *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar20 + 0x14);
      *(undefined4 *)((int)puVar14 + 0x3c) = uVar19;
      mobyutil::MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar28 - 0xa8,uVar30 + 0x88,uVar30 + 0x8c);
      uVar12 = *(uint *)(iVar20 + 0x10);
      uVar10 = *(uint *)(iVar20 + 0x14);
      dVar35 = ABS((double)*(float *)(iVar20 + 0x10));
      dVar34 = ABS((double)*(float *)(iVar20 + 0x14));
      *(float *)((int)puVar14 + 0xcc) = (float)(dVar35 - dVar34);
      uVar26 = (ulonglong)*(uint *)((int)puVar14 + 0xcc);
      uVar23 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
               (ulonglong)(uVar10 >> 0x1d) & 4;
      dVar33 = dVar35;
      if ((double)*(float *)((int)puVar14 + 0xcc) - dVar32 < 0.0) {
        dVar33 = dVar34;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      if ((double)*(float *)((int)puVar14 + 0xcc) - dVar32 < 0.0) {
        dVar34 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar35 = dVar32;
      if (dVar32 < dVar33) {
        lVar16 = uVar28 - 0x160;
        lVar27 = uVar28 - 0x8c;
        lVar24 = uVar28 - 0x9c;
        lVar31 = 2;
        fVar4 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x1c) = fVar4;
        *(float *)(puVar14 + 0x1b) = fVar4;
        *(float *)((int)puVar14 + 0xdc) = fVar4;
        *(float *)((int)puVar14 + 0xd4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar5;
        *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar4;
        *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar24 = 4;
        uVar28 = uVar28 - 0x9c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        uVar26 = uVar28;
        do {
          fVar4 = *pfVar29;
          fVar5 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)uVar26 + 4) = *(float *)((int)uVar26 + 4) * fVar5;
          uVar26 = uVar26 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar16 = 2;
        dVar34 = dVar32;
        do {
          iVar20 = (int)lVar17;
          iVar21 = (int)uVar28;
          lVar17 = lVar17 + 0x10;
          uVar28 = uVar28 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xd4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar35 = (double)((float)(dVar34 + dVar40) * fVar2 + fVar3);
      }
      mobyutil::MB_StartKick(dVar35,param_1,uVar30 + 0x70,uVar26,9,1,0);
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar30 + 0x60);
      goto LAB_001fc8b0;
    }
  }
  auVar41 = ZEXT416(0xffffffff);
  auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  param_1->state = '\n';
  auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
  auVar41 = loadVectorLeftIndexed(0x24,0x1fbc38);
  auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar41 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar42
                      );
  auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
  auVar41 = vectorSplatHalfWord(auVar41,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar30);
  *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
  *(float *)((int)pvVar9 + 0x80) = DAT_00766478 * DAT_0071f418;
  mobyutil::MB_SetupJumpArc(0x3fe0000000000000,0x3fe0000000000000,&DAT_001fbc38,0x26,uVar30 + 0x70);
  *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41000000;
  *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
  uVar19 = *(undefined4 *)(iVar20 + 0x18);
  *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar20 + 0x10);
  *(undefined4 *)(puVar14 + 7) = uVar19;
  uVar19 = *(undefined4 *)(iVar20 + 0x1c);
  *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar20 + 0x14);
  *(undefined4 *)((int)puVar14 + 0x3c) = uVar19;
  mobyutil::MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar28 - 0xa8,uVar30 + 0x88,uVar30 + 0x8c);
  mobyutil::MB_StartKick((double)*(float *)(puVar14 + 0x19),param_1,uVar30 + 0x70);
  *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
  mobyutil::MB_UpdateLightsTransition(param_1,uVar30 + 0x60);
LAB_001fc8b0:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar30 + 0x60);
  uVar1 = param_1->state;
  if (((uVar1 == '\n') || (uVar1 == '\v')) || (uVar1 == '\f')) {
    *(undefined4 *)((int)pvVar9 + 0x1d4) = 0;
  }
  else {
    if (*(int *)((int)pvVar9 + 0x1ac) == 0) {
      puVar25 = (undefined4 *)0x0;
      if (uVar1 == '\x01') {
        if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
          dVar32 = 6.0;
        }
        *(float *)((int)pvVar9 + 0x1a0) = (float)dVar32;
        if ((g_heroType == '\x01') && (param_1->group != 0xff)) {
          puVar25 = &mobyutil::g_MobyGroups;
          puVar18 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
          if (puVar18 != (ushort *)0x0) {
            do {
              if (MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
                MobyInstance[*puVar18 & 0x7fff].state = '\x02';
              }
              uVar6 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar25 = (undefined4 *)(int)(short)uVar6;
            } while (-1 < (short)uVar6);
          }
        }
      }
      else {
        *(float *)((int)pvVar9 + 0x1a0) = DAT_0076648c;
      }
    }
    else {
      puVar25 = (undefined4 *)0x760000;
      *(float *)((int)pvVar9 + 0x1a0) = DAT_0076648c + 6.0;
    }
    if (*(int *)((int)pvVar9 + 0x1ac) == 0) {
      fVar2 = *(float *)((int)pvVar9 + 0x174) - *(float *)((int)pvVar9 + 0x124);
      fVar3 = *(float *)((int)pvVar9 + 0x170) - *(float *)((int)pvVar9 + 0x120);
      if ((*(float *)((int)pvVar9 + 0x1a0) < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) ||
         (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar9 + 0x128)))) {
        mobyutil::MB_getTarget(param_1,puVar25,uVar30 + 0x120);
        *(undefined4 *)((int)pvVar9 + 0x164) = 2;
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1b0)];
        mobyutil::MB_getTargetInArea
                  (param_1,uVar30 + 0x120,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
      }
    }
    else {
      mobyutil::MB_getTarget((double)*(float *)((int)pvVar9 + 0x1a0),param_1,puVar25,uVar30 + 0x120)
      ;
      fVar2 = *(float *)((int)pvVar9 + 0x174) - *(float *)((int)pvVar9 + 0x124);
      fVar3 = *(float *)((int)pvVar9 + 0x170) - *(float *)((int)pvVar9 + 0x120);
      if ((*(float *)((int)pvVar9 + 0x1a0) < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) ||
         (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar9 + 0x128)))) {
        *(undefined4 *)((int)pvVar9 + 0x164) = 2;
      }
    }
    fVar2 = animationSpeed;
    if ((param_1->state == '\x01') || (*(int *)((int)pvVar9 + 0x164) != 2)) {
      *(undefined4 *)((int)pvVar9 + 0x1d4) = 0;
    }
    else {
      iVar20 = *(int *)((int)pvVar9 + 0x1d4) + 1;
      *(int *)((int)pvVar9 + 0x1d4) = iVar20;
      puVar14[0x23] = (longlong)(int)(fVar2 * 300.5);
      if (*(int *)((int)puVar14 + 0x11c) < iVar20) {
        fVar2 = (param_1->pos).y - *(float *)((int)pvVar9 + 0x174);
        fVar3 = (param_1->pos).x - *(float *)((int)pvVar9 + 0x170);
        fVar4 = (param_1->pos).z - *(float *)((int)pvVar9 + 0x178);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) <= 1.0) {
          if ((g_heroType != '\x01') && (param_1->state = '\x01', param_1->animationId != '\0')) {
            puVar14[0x23] = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar14 + 0x11c));
          }
        }
        else {
          param_1->state = '\b';
          if (param_1->animationId != '\x04') {
            puVar14[0x23] = (longlong)(int)(animationSpeed * 12.5);
            mobyutil::MB_SetAnimation(param_1,4,0,*(undefined4 *)((int)puVar14 + 0x11c));
          }
        }
      }
    }
    if (*(int *)((int)pvVar9 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar9 + 0x160) = g_heroMobyPtr;
    }
  }
  return;
}



//==== 001fcd60  ns=mobyupdate_unsorted  size=0x2484
// sig: undefined UpdateMoby_1202(MobyInstance * moby)
// callers(0): 
// callees(41): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe4f0 mobyutil::MB_randRangeSigned; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010af88 mobyutil::MB_isCrate; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 00110040 mobyutil::MB_SpawnExplosionSparks2; 001158b0 mobyutil::MB_SetupJumpArc; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001fade0 mobyupdate_helpers::M1202_001fade0; 001fb2f0 mobyupdate_helpers::M1202_001fb2f0; 001fb4d0 mobyupdate_helpers::M1202_001fb4d0; 001fbbd0 mobyupdate_helpers::M1202_001fbbd0; 001fbc78 mobyupdate_helpers::M1202_001fbc78; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 00502b08 fastfunc::FastVecAddSelf; 005e7f54 FUN_005e7f54; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e8338 FUN_005e8338; 005e8548 FUN_005e8548

/* Moby 1202 */

void mobyupdate_unsorted::UpdateMoby_1202(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  float fVar12;
  longlong lVar13;
  int iVar15;
  bool bVar20;
  undefined1 uVar21;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar14;
  uint uVar19;
  undefined8 in_r9;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  f32 local_180;
  f32 local_17c;
  f32 local_178;
  f32 local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 local_144;
  f32 local_140;
  f32 local_13c;
  float local_138;
  f32 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  undefined1 auStack_120 [8];
  float local_118;
  f32 local_110;
  f32 local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [16];
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  MobyInstance *local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  MOBY_OCLASSES local_96;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar23 = ZEXT48(pvVar8);
  mobyupdate_helpers::M1202_001fbc78();
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  moby->scale = moby->pClass->gScale * DAT_00766470;
  mobyfunc::DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar8 + 0x2b0));
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  dVar32 = 1.0;
  fVar6 = (moby->pos).z + 1.0;
  uVar19 = *(uint *)(iVar17 + 0x10);
  uVar5 = *(uint *)(iVar17 + 0x14);
  fVar12 = *(float *)(iVar17 + 0x18) + 1.0;
  dVar25 = (double)FUN_005e8548(local_1c0,local_1b0);
  if ((((((15.0 <= dVar25) ||
         (uVar9 = (int)fVar3 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar3) - uVar9,
         iVar15 < 0x40000000)) || (0x447f4000 < iVar15)) ||
       ((uVar9 = (int)fVar4 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar4) - uVar9,
        0x447f4000 < iVar15 || iVar15 < 0x40000000 ||
        (uVar9 = (int)fVar6 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar6) - uVar9,
        0x447f4000 < iVar15 || iVar15 < 0x40000000)))) ||
      (uVar9 = (int)uVar19 >> 0x1f, iVar15 = (uVar9 >> 1 ^ uVar19) - uVar9,
      0x447f4000 < iVar15 || iVar15 < 0x40000000)) ||
     (((uVar19 = (int)uVar5 >> 0x1f, iVar15 = (uVar19 >> 1 ^ uVar5) - uVar19,
       0x447f4000 < iVar15 || iVar15 < 0x40000000 ||
       (uVar19 = (int)fVar12 >> 0x1f, iVar15 = (uVar19 >> 1 ^ (uint)fVar12) - uVar19,
       0x447f4000 < iVar15 || iVar15 < 0x40000000)) ||
      ((iVar15 = collproc::CollLine(local_1c0,local_1b0,2,lVar13,0), iVar15 != 0 ||
       ((bVar11 = true, dVar32 <= ABS((double)(*(float *)(iVar17 + 0x18) - (moby->pos).z)) &&
        (bVar20 = mobyutil::MB_isCrate(g_standingOnMoby), !bVar20)))))))) {
    bVar11 = false;
  }
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 != 5) {
      if (bVar1 == 4) {
        iVar17 = fastfunc::FastDecTimerS32(uVar23 + 0x1a8);
        if (iVar17 != 0) {
          moby->state = '\x05';
          *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
          fVar3 = (moby->pos).y;
          *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
          *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
          *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
          fVar3 = (moby->pos).w;
          *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
          *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
          dVar25 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar25;
          if (moby->animationId != '\x03') {
            local_80 = (longlong)(int)(animationSpeed * 5.5);
            mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
          }
        }
      }
      else if (bVar1 == 3) {
        uVar26 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar26,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        if (*(int *)((int)pvVar8 + 0x164) != 2) {
          moby->state = '\x04';
          local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
          mobyutil::MB_randRangeFloat(0.0,(float)local_80);
          uVar16 = fastfunc::FastDoubleToInt();
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
        }
      }
      else if (bVar1 == 2) {
        if (moby->animationId == '\0') {
          if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
            dVar25 = (double)mobyutil::MB_randRangeFloat(0.0,20.0);
            uVar16 = fastfunc::FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
            *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
          }
          else {
            iVar17 = fastfunc::FastDecTimerS32(uVar23 + 0x1a8);
            if (iVar17 != 0) {
              if (*(int *)((int)pvVar8 + 0x1b4) == 0) {
                if (moby->animationId != '\x02') {
                  local_80 = (longlong)(int)(animationSpeed * 10.5);
                  mobyutil::MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
                }
              }
              else if (moby->animationId != '\x01') {
                local_80 = (longlong)(int)(animationSpeed * 10.5);
                mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
              }
            }
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          dVar25 = (double)FUN_005e8588(lVar13 + 0x10,&g_heroPosition);
          if ((double)DAT_0076648c <= dVar25) {
            moby->state = '\x03';
            if (moby->animationId != '\x01') {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            moby->state = '\x05';
            *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
            fVar3 = (moby->pos).y;
            *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
            *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
            *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
            fVar3 = (moby->pos).w;
            *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
            *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
            dVar25 = (double)mobyutil::MB_randRangeFloat
                                       (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                        *(float *)((int)pvVar8 + 0x198) * -0.017453292);
            *(float *)((int)pvVar8 + 0x194) = (float)dVar25;
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 5.5);
              mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
            }
          }
        }
      }
      else if (bVar1 == 1) {
        mobyutil::OrganicDeltAngSpeed
                  ((double)*(float *)((int)pvVar8 + 0x17c),0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        if ((*(int *)((int)pvVar8 + 0x1bc) != -1) &&
           (((pMVar10 = MobyInstance + *(int *)((int)pvVar8 + 0x1bc), pMVar10 == (MobyInstance *)0x0
             || (pMVar10->state == 0xfd || pMVar10->state == 0xfe)) ||
            ((*(uint *)(&DAT_00a0cd1c +
                       Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
             1 << (pMVar10->uid & 0x1f)) != 0)))) {
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          moby->state = '\x02';
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x24,0x1fcca4);
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                              uVar23);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->group != -1) {
            mobyupdate_helpers::M1202_001fbbd0(lVar13);
          }
        }
        if ((*(int *)((int)pvVar8 + 0x164) != 2) || (*(int *)((int)pvVar8 + 0x1b4) != 0)) {
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          moby->state = '\x02';
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x24,0x1fcca4);
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                              uVar23);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->group != -1) {
            mobyupdate_helpers::M1202_001fbbd0(lVar13);
          }
        }
      }
      else if (bVar1 == 0) {
        if ((*(int *)((int)pvVar8 + 0x1dc) != 0) && (g_heroType == '\x01')) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar8 + 0x30) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x20) = 0x40a00000;
        *(undefined2 *)((int)pvVar8 + 0x24) = 5;
        *(undefined1 *)((int)pvVar8 + 0x28) = 3;
        *(undefined1 *)((int)pvVar8 + 0x29) = 1;
        uVar21 = fastfunc::FastDoubleToInt(0x4024000000000000);
        *(undefined1 *)((int)pvVar8 + 0x58) = uVar21;
        uVar21 = fastfunc::FastDoubleToInt(0x4030000000000000);
        *(undefined1 *)((int)pvVar8 + 0x5a) = uVar21;
        MVar7 = moby->modeBits;
        *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
        fVar3 = (moby->pos).z;
        moby->modeBits = MVar7 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
        *(f32 *)((int)pvVar8 + 0x178) = fVar3;
        *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
        *(f32 *)((int)pvVar8 + 0x17c) = (moby->rotation).z;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
        *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
        uVar16 = fastfunc::FastDoubleToInt((double)(DAT_00766470 * 1024.0));
        *(float *)((int)pvVar8 + 0xd4) = DAT_00766470;
        fVar6 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar8 + 0xd0) = uVar16;
        *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar6;
        if ((*(int *)((int)pvVar8 + 0x1bc) != -1) &&
           (((pMVar10 = MobyInstance + *(int *)((int)pvVar8 + 0x1bc), pMVar10 == (MobyInstance *)0x0
             || (pMVar10->state == 0xfd || pMVar10->state == 0xfe)) ||
            (((*(uint *)(&DAT_00a0cd1c +
                        Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
              1 << (pMVar10->uid & 0x1f)) != 0 &&
             (g_LevelFlags[Level][(byte)pMVar10->levelFlagIdx] == -1)))))) {
          *(undefined4 *)((int)pvVar8 + 0x1bc) = 0xffffffff;
        }
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar13,0,0,0);
        }
        *(float *)((int)pvVar8 + 0x1a0) = DAT_0076648c;
      }
      goto LAB_001ff038;
    }
    lVar22 = lVar13 + 0x10;
    iVar15 = iVar17 + 0x10;
    dVar27 = (double)FUN_005e8548(lVar22,iVar15);
    dVar28 = 3.569999933242798;
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    if (dVar27 <= dVar25) {
      mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime * 0.3,
                     DAT_0071f418 * 20.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
      mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 8.0,
                     (float *)((int)pvVar8 + 0xf4));
    }
    local_180 = (moby->pos).x;
    local_17c = (moby->pos).y;
    local_178 = (moby->pos).z;
    local_174 = (moby->pos).w;
    if (bVar11) {
      dVar25 = dVar28;
      if (*(short *)(iVar17 + 0xa6) == 0x359) {
        dVar25 = 2.0;
      }
      if (0.35 <= ABS((float)(dVar27 - dVar25))) goto LAB_001fd880;
      mobyutil::Delt(0.0,DAT_0071f418 * 30.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
LAB_001fd880:
      if (*(int *)((int)pvVar8 + 0x1d8) != 0) {
        mobyutil::Delt(0.0,DAT_0071f418 * 10.0,(float *)((int)pvVar8 + 0xf4));
      }
    }
    dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar27 = (double)fastfunc::FastSubRots((float)dVar25,(moby->rotation).z);
    if ((0.8726646304130554 < dVar27) &&
       (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime * 0.25,
       fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
      *(float *)((int)pvVar8 + 0xf4) = fVar6;
    }
    dVar31 = 0.01745329238474369;
    if (((double)(DAT_00766498 * 0.017453292) < dVar27) || (*(int *)((int)pvVar8 + 0x1d8) == 0)) {
      mobyutil::OrganicDeltAngSpeed
                (dVar25,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
    }
    dVar29 = (double)mobyupdate_helpers::M1202_001fb4d0(lVar13);
    dVar30 = (double)mathfunc::cosf((float)dVar29);
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    local_170 = (float)(dVar30 * dVar25);
    dVar29 = (double)FUN_005e8128(dVar29);
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    local_16c = (float)(dVar29 * dVar25);
    local_168 = 0;
    FUN_005e7f54(&local_170,&local_170,iVar15);
    if (g_heroType == '\x01') {
      if (ABS(*(float *)((int)pvVar8 + 400)) <= mobyutil::g_FrameTime * 0.08726646) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 7.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 7.5));
        }
      }
      else if (moby->animationId != '\x03') {
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
      }
    }
    else {
      dVar30 = (double)(moby->rotation).z;
      dVar25 = (double)FUN_005e8338((double)(local_170 - (moby->pos).x),
                                    (double)(local_16c - (moby->pos).y));
      (moby->rotation).z = (float)dVar25;
      dVar25 = (double)mathfunc::cosf((float)dVar25);
      dVar29 = 2.0;
      local_1a0 = (float)(dVar25 * 2.0);
      dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_19c = (float)(dVar25 * dVar29);
      local_198 = 0;
      local_184 = 0;
      local_188 = 0;
      local_18c = 0;
      local_190 = 0;
      local_160 = (moby->pos).x;
      local_15c = (moby->pos).y;
      local_154 = (moby->pos).w;
      local_158 = (float)((double)(moby->pos).z + dVar32);
      local_150 = *(undefined4 *)(iVar17 + 0x10);
      local_14c = *(undefined4 *)(iVar17 + 0x14);
      local_148 = (float)((double)*(float *)(iVar17 + 0x18) + dVar32);
      local_144 = *(undefined4 *)(iVar17 + 0x1c);
      iVar18 = collproc::CollLine(&local_160,&local_150,2,lVar13,0);
      if ((iVar18 != 0) &&
         (((CollOutput.pMoby == (MobyInstance *)0x0 || ((CollOutput.pMoby)->oClass != 0x31a)) &&
          (dVar25 = (double)FUN_005e8548(&local_160,0xa10960), dVar25 < (double)DAT_00766480)))) {
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        moby->state = '\x06';
        fVar6 = animationSpeed;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(0x5c,0x1fcca4);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                            uVar23);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(fVar6 * 7.5);
          mobyutil::MB_SetAnimation(lVar13,1,0,(int)(fVar6 * 7.5));
        }
      }
      uVar14 = mobyutil::MB_UpdateNavMove
                         (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_1a0,&local_190);
      (moby->rotation).z = (float)dVar30;
      if ((uVar14 & 3) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
      }
      else {
        dVar25 = (double)FUN_005e8588(lVar22,&local_180);
        *(uint *)((int)pvVar8 + 0x1d8) =
             (uint)(dVar25 < (double)(*(float *)((int)pvVar8 + 0xf4) * 0.25));
        if ((worldUpdateTime == (worldUpdateTime / 7) * 7) && (*(int *)((int)pvVar8 + 0x1a8) == 0))
        {
          dVar25 = (double)FUN_005e8588(uVar23 + 0x1c0,lVar22);
          if (((double)*(float *)((int)pvVar8 + 0xf4) <= dVar25) ||
             ((double)(float)((double)DAT_00766498 * dVar31) < dVar27)) {
            if (moby->animationId == '\x01') {
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
            }
          }
          else {
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            moby->state = '\x06';
            fVar6 = animationSpeed;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x5c,0x1fcca4);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                                uVar23);
            *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
            if (moby->animationId != '\x01') {
              local_80 = (longlong)(int)(fVar6 * 7.5);
              mobyutil::MB_SetAnimation(lVar13,1,0,(int)(fVar6 * 7.5));
            }
          }
          *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
          *(f32 *)((int)pvVar8 + 0x1c4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1cc) = (moby->pos).w;
        }
      }
      if (((moby->state == '\x05') &&
          (iVar18 = fastfunc::FastDecTimerS32(uVar23 + 0x1a8), iVar18 != 0)) &&
         ((0 < *(int *)((int)pvVar8 + 0xf4) &&
          ((*(int *)((int)pvVar8 + 0x1d8) == 0 && (moby->animationId == '\x01')))))) {
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
      }
    }
    moby->unk58 = 1.2;
    dVar31 = (double)FUN_005e8548(lVar22,uVar23 + 0x170);
    dVar25 = 30.0;
    if (g_heroType == '\x01') {
      dVar25 = dVar32;
    }
    if ((dVar25 < dVar31) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
      moby->state = '\b';
      local_80 = (longlong)(int)(animationSpeed * 12.5);
      mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
    }
    else {
      dVar25 = (double)FUN_005e8588(lVar22,iVar15);
      if (*(short *)(iVar17 + 0xa6) == 0x359) {
        dVar28 = 2.0;
      }
      if (((dVar25 < (double)(float)(dVar28 + 0.44999998807907104)) &&
          (local_80 = (longlong)(int)(animationSpeed * 10.5),
          DAT_00969ea0 < (int)(animationSpeed * 10.5))) && (dVar27 < 0.3490658402442932 && bVar11))
      {
        uVar19 = mobyutil::MB_randInt(100);
        moby->state = '\a';
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation
                  (lVar13,((LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1U) + 6,0,
                   (int)(animationSpeed * 7.5));
      }
    }
LAB_001ff038:
    uVar2 = moby->state;
    if ((((uVar2 == '\x05' || uVar2 == '\x03') || (uVar2 == '\a')) || (uVar2 == '\b')) &&
       (dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0),
       dVar25 < (double)(moby->pos).z)) {
      fVar6 = *(float *)((int)pvVar8 + 0x78) - *(float *)((int)pvVar8 + 0x80);
      *(float *)((int)pvVar8 + 0x78) = fVar6;
      fVar12 = mobyutil::g_FrameTime * -7.0;
      if (fVar6 < fVar12) {
        *(float *)((int)pvVar8 + 0x78) = fVar12;
        fVar6 = fVar12;
      }
      fVar6 = (moby->pos).z + fVar6;
      (moby->pos).z = fVar6;
      if ((double)fVar6 < dVar25) {
        (moby->pos).z = (float)dVar25;
      }
      if (dVar25 < (double)(*(float *)((int)pvVar8 + 0x178) - 2.0)) {
        if (moby->animationId != '\x0e') {
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation(lVar13,0xe,0,(int)(animationSpeed * 6.5));
        }
        moby->state = '\f';
      }
    }
    if ((moby->enabled != '\0') &&
       (dVar25 = (double)FUN_005e8548(lVar13 + 0x10,0x951500), dVar25 < 18.0)) {
      mobyutil::MB_SetZBoundsFromGround(lVar13);
      moby->shadow = '\x0e';
    }
  }
  else {
    if (bVar1 == 0xc) {
      *(float *)((int)pvVar8 + 0x78) =
           *(float *)((int)pvVar8 + 0x78) - *(float *)((int)pvVar8 + 0x80);
      fastfunc::FastVecAddSelf(auStack_c0,lVar13 + 0x10,uVar23 + 0x70);
      dVar25 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
      if ((double)(moby->pos).z < dVar25) {
        iVar17 = collproc::CollHotspot();
        if (((iVar17 == 0) || (iVar17 == 1)) || (iVar17 == 3)) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar13,0x200,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->state = '\v';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar26 = fastfunc::FastDoubleToInt(0x4088000000000000);
        *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f400000;
        fVar12 = DAT_00766474;
        fVar6 = DAT_0071f418;
        *(int *)((int)pvVar8 + 0x90) = (int)uVar26;
        *(undefined1 *)((int)pvVar8 + 0xad) = 0;
        *(undefined4 *)((int)pvVar8 + 0x94) = 9;
        *(float *)((int)pvVar8 + 0x80) = fVar12 * fVar6;
        mobyutil::MB_SetupJumpArc
                  (0x4000000000000000,0x3ff8000000000000,uVar26,0x3f400000,uVar23 + 0x70);
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40e00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41500000;
        fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
        mobyutil::MB_StartKick(lVar13,uVar23 + 0x70);
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        mobyutil::MB_UpdateLightsTransition(lVar13,uVar23 + 0x60);
        mobyutil::MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
        goto LAB_001ff038;
      }
    }
    else if (bVar1 != 0xb) {
      if (bVar1 == 10) {
        uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
        if ((uVar19 & 0x41) == 0) {
          if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
            if (moby->animationId != '\x0e') {
              local_80 = (longlong)(int)(animationSpeed * 6.5);
              mobyutil::MB_SetAnimation(lVar13,0xe,0,(int)(animationSpeed * 6.5));
            }
            moby->state = '\f';
            *(float *)((int)pvVar8 + 0x78) = *(float *)((int)pvVar8 + 0x78) * 0.33333334;
          }
        }
        else {
          moby->state = '\a';
          *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 5.0;
          uVar19 = mobyutil::MB_randInt(100);
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation
                    (lVar13,((LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1U) + 6,0,
                     (int)(animationSpeed * 6.5));
        }
      }
      else if (bVar1 == 9) {
        mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * mobyutil::g_FrameTime,
                       DAT_0071f418 * 20.0,(float *)((int)pvVar8 + 0xf4));
        uVar26 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar26,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13);
        dVar28 = (double)(moby->rotation).z;
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        dVar25 = (double)fastfunc::FastWrapRot((float)dVar25,3.14159);
        (moby->rotation).z = (float)dVar25;
        dVar25 = (double)mathfunc::cosf((float)dVar25);
        dVar27 = 2.0;
        local_100 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_fc = (float)(dVar25 * dVar27);
        local_f8 = 0;
        mobyutil::MB_UpdateNavMove
                  (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_100,auStack_f0);
        (moby->rotation).z = (float)dVar28;
        if ((bVar11) &&
           ((iVar15 = fastfunc::FastDecTimerS32(uVar23 + 0x1a8), iVar15 != 0 ||
            (dVar25 = (double)FUN_005e8548(lVar13 + 0x10,iVar17 + 0x10),
            (double)DAT_00766490 < dVar25)))) {
          moby->state = '\a';
          *(float *)((int)pvVar8 + 0xf4) = mobyutil::g_FrameTime * 5.0;
          uVar19 = mobyutil::MB_randInt(100);
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          mobyutil::MB_SetAnimation
                    (lVar13,((LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1U) + 6,0,
                     (int)(animationSpeed * 6.5));
        }
      }
      else if (bVar1 == 8) {
        mobyutil::Delt(*(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime,DAT_0071f418 * 5.0,
                       (float *)((int)pvVar8 + 0xf4));
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (dVar25,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13);
        dVar25 = (double)fastfunc::FastSubRots((float)dVar25,(moby->rotation).z);
        if ((0.8726646304130554 < dVar25) &&
           (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime * 0.25,
           fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
          *(float *)((int)pvVar8 + 0xf4) = fVar6;
        }
        dVar25 = (double)mathfunc::cosf((moby->rotation).z);
        dVar27 = 2.0;
        local_e0 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_dc = (float)(dVar25 * dVar27);
        local_d8 = 0;
        mobyutil::MB_UpdateNavMove
                  (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_e0,auStack_d0);
        dVar25 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
        if (dVar32 <= dVar25) {
          if (*(int *)((int)pvVar8 + 0x164) != 2) {
            moby->state = '\x05';
            *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
            fVar3 = (moby->pos).y;
            *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
            *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
            *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
            fVar3 = (moby->pos).w;
            *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
            *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
            }
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 20.5);
            mobyutil::MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
      }
      else {
        if (bVar1 != 7) {
          if (bVar1 != 6) goto LAB_001ff038;
          dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                        (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
          dVar25 = (double)fastfunc::FastSubRots((float)dVar25,(moby->rotation).z);
          if ((0.8726646304130554 < dVar25) &&
             (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * mobyutil::g_FrameTime * 0.25,
             fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
            *(float *)((int)pvVar8 + 0xf4) = fVar6;
          }
          iVar15 = fastfunc::FastDecTimerS32(uVar23 + 0x1a8);
          if ((iVar15 != 0) || ((double)(DAT_00766498 * 0.017453292) < dVar25)) {
            local_138 = (float)((double)(moby->pos).z + dVar32);
            local_130 = *(undefined4 *)(iVar17 + 0x10);
            local_12c = *(undefined4 *)(iVar17 + 0x14);
            local_128 = (float)((double)*(float *)(iVar17 + 0x18) + dVar32);
            local_124 = *(undefined4 *)(iVar17 + 0x1c);
            local_140 = (moby->pos).x;
            local_13c = (moby->pos).y;
            local_134 = (moby->pos).w;
            iVar15 = collproc::CollLine(&local_140,&local_130,2,lVar13,0);
            if ((iVar15 == 0) ||
               (((CollOutput.pMoby != (MobyInstance *)0x0 && ((CollOutput.pMoby)->oClass == 0x31a))
                || (dVar27 = (double)FUN_005e8548(&local_140,0xa10960),
                   (double)DAT_00766480 <= dVar27)))) {
              auVar34 = ZEXT416(0xffffffff);
              auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
              moby->state = '\x05';
              auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
              *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
              fVar3 = (moby->pos).y;
              *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
              *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
              *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
              fVar3 = (moby->pos).w;
              *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
              *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
              auVar34 = loadVectorLeftIndexed(0x74,0x1fcca4);
              auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar34 = vectorMultiplyAddFloatingPoint
                                  (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                           auVar34 << 0x60,auVar35);
              auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
              auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar16 = storeVectorElementWordIndexed
                                 (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                                  0x1a8,uVar23);
              *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
            }
          }
          dVar28 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
          dVar27 = 30.0;
          if (g_heroType == '\x01') {
            dVar27 = dVar32;
          }
          if ((dVar27 < dVar28) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
            moby->state = '\b';
            local_80 = (longlong)(int)(animationSpeed * 12.5);
            mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
          }
          else {
            dVar27 = (double)FUN_005e8588(lVar13 + 0x10,iVar17 + 0x10);
            fVar6 = 3.57;
            if (*(short *)(iVar17 + 0xa6) == 0x359) {
              fVar6 = 2.0;
            }
            if (((dVar27 < (double)(fVar6 + 0.45)) &&
                (local_80 = (longlong)(int)(animationSpeed * 10.5),
                DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
               (dVar25 < (double)(DAT_00766498 * 0.017453292) && bVar11)) {
              uVar19 = mobyutil::MB_randInt(100);
              moby->state = '\a';
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              mobyutil::MB_SetAnimation
                        (lVar13,((LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1U) + 6,0,
                         (int)(animationSpeed * 7.5));
            }
          }
        }
        dVar25 = (double)mobyfunc::BlendAnimFrame(moby);
        uVar26 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar26,0x3f9eb851e0000000,0x3fd3333340000000,
                   (double)(mobyutil::g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        uVar2 = moby->animationId;
        if ((((uVar2 != '\x06') && (uVar2 != '\a')) || (dVar25 < 4.0)) || (7.0 < dVar25)) {
          if (((uVar2 == '\x06') || (uVar2 == '\a')) && ((moby->field43_0x70 & 2U) != 0)) {
            dVar27 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
            dVar25 = 30.0;
            if (g_heroType == '\x01') {
              dVar25 = dVar32;
            }
            if ((dVar25 < dVar27) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
              moby->state = '\b';
              local_80 = (longlong)(int)(animationSpeed * 12.5);
              mobyutil::MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
            }
            else {
              moby->state = '\x05';
              *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
              fVar3 = (moby->pos).y;
              *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
              *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
              *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
              fVar3 = (moby->pos).w;
              *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
              *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
              if (moby->animationId != '\x03') {
                local_80 = (longlong)(int)(animationSpeed * 7.5);
                mobyutil::MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
              }
            }
          }
        }
        else {
          local_108 = (moby->pos).z + 0.25;
          local_9c = 0x10001;
          local_90 = 1;
          local_94 = 0x40466666;
          local_110 = (moby->pos).x;
          local_10c = (moby->pos).y;
          local_104 = (moby->pos).w;
          local_a0 = moby;
          dVar25 = (double)mathfunc::cosf((moby->rotation).z);
          local_b0 = (float)dVar25;
          dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_ac = (float)dVar25;
          local_96 = moby->oClass;
          local_a8 = 0x3f800000;
          local_a4 = 0x45afdf66;
          local_98 = 0;
          local_97 = 1;
          uVar26 = 0x3fe8000000000000;
          if (moby->animationId == '\x06') {
            mobyfunc::GetBonePosition(lVar13,0,auStack_120);
            collproc::CollMobySphere(uVar26,auStack_120);
            local_118 = local_118 + 0.5;
            collproc::CollMobySphere(uVar26,auStack_120);
            collproc::CollLine(&local_110,auStack_120,9,lVar13,&local_b0);
          }
          else {
            mobyfunc::GetBonePosition(lVar13,1,auStack_120);
            collproc::CollMobySphere(uVar26,auStack_120);
            local_118 = local_118 + 0.5;
            collproc::CollMobySphere(uVar26,auStack_120,&DAT_001fcca4,0,lVar13,&local_b0);
            collproc::CollLine(&local_110,auStack_120,9,lVar13,&local_b0);
          }
        }
      }
      goto LAB_001ff038;
    }
    mobyupdate_helpers::M1202_001fb2f0(lVar13);
    mobyupdate_helpers::M1202_001fade0(lVar13);
    mobyupdate_helpers::M1202_001fade0(lVar13);
    lVar24 = lVar13 + 0x10;
    mobyutil::MB_SpawnExplosionSparks2(0x3ff4000000000000,0x4034000000000000,lVar13,lVar24);
    uVar33 = 0;
    lVar22 = lVar13 + 0x40;
    mobyutil::MB_SpawnDebrisMoby(0,lVar13,0x775,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar33,lVar13,0x77a,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar33,lVar13,0x77b,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar33,lVar13,0x77c,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    uVar26 = 0x3fd3333340000000;
    mobyutil::MB_randRangeSigned(uVar33,0x3fd3333340000000);
    mobyutil::MB_randRangeSigned(uVar33,uVar26);
    mobyutil::MB_SpawnDebrisMoby(uVar33,lVar13,0x623,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar33,lVar13,0x624,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 001ff1e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1206_001ff1e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1206_001ff1e4(void)

{
  DAT_00766578 = 0x10000;
  return;
}



//==== 001ff200  ns=mobyupdate_unsorted  size=0x280
// sig: undefined UpdateMoby_1206_DamageCauser(MobyInstance * moby)
// callers(0): 
// callees(6): 0005e598 collproc::CollMobySphere; 001057f4 mobyutil::SetCollDamIn; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 00502730 fastfunc::FastIntToDouble; 005cd098 libc::printf
// strings: 00654dd4: 'Damage Causer 1206 #%d got moby %d ( %d ) for %f damage!\n'

/* Moby 1206 */

void mobyupdate_unsorted::UpdateMoby_1206_DamageCauser(MobyInstance *moby)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined1 local_80 [16];
  undefined1 auStack_70 [48];
  
  pfVar1 = (float *)moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    pfVar1[5] = -NAN;
  }
  if (((worldUpdateTime ^ (int)moby >> 8) & 7) == 0) {
    fVar3 = pfVar1[5];
    if (fVar3 != -NAN) {
      iVar2 = sound::IsMobyPlayingSound(moby,(int)fVar3);
      if (iVar2 != 0) goto LAB_001ff2b4;
      fVar3 = pfVar1[5];
    }
    if (fVar3 == -NAN) {
      fVar3 = (float)sound::PlayMobySound(0,4,moby);
      pfVar1[5] = fVar3;
    }
  }
LAB_001ff2b4:
  fastfunc::FastIntToDouble(pfVar1[2]);
  mobyutil::SetCollDamIn((double)pfVar1[3],auStack_70,moby,pfVar1[4]);
  iVar2 = 0;
  if (0 < (int)pfVar1[2]) {
    do {
      iVar4 = collproc::CollMobySphere((double)*pfVar1,local_80);
      if (iVar4 != 0) {
        libc::printf("Damage Causer 1206 #%d got moby %d ( %d ) for %f damage!\n",moby->uid,
                     (CollOutput.pMoby)->oClass,(CollOutput.pMoby)->uid,(double)pfVar1[3]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)pfVar1[2]);
  }
  return;
}



//==== 001ff4d0  ns=mobyupdate_unsorted  size=0x614
// sig: undefined UpdateMoby_1208(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 00109af0 mobyutil::Delt; 0012e3e8 partupd::SpawnPart_44; 004fff60 fastfunc::FastDecTimerS32; 00502758 fastfunc::FastDoubleToInt

/* Moby 1208 */

void mobyupdate_unsorted::UpdateMoby_1208(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  char cVar18;
  int iVar17;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float fVar23;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f18;
  undefined8 uVar28;
  ulonglong in_f19;
  undefined8 uVar29;
  ulonglong in_f20;
  undefined8 uVar30;
  ulonglong in_f21;
  undefined8 uVar31;
  ulonglong in_f22;
  undefined8 uVar32;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar33;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  double dVar36;
  ulonglong in_f29;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x1c0;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x3a] = in_LR;
  puVar11[0x2a] = in_f18;
  puVar11[0x2b] = in_f19;
  puVar11[0x2c] = in_f20;
  puVar11[0x2d] = in_f21;
  puVar11[0x2e] = in_f22;
  puVar11[0x2f] = in_f23;
  puVar11[0x30] = in_f24;
  puVar11[0x31] = in_f25;
  puVar11[0x32] = in_f26;
  puVar11[0x33] = in_f27;
  puVar11[0x34] = in_f28;
  puVar11[0x35] = in_f29;
  puVar11[0x36] = in_f30;
  puVar11[0x37] = in_f31;
  puVar11[0x29] = unaff_r31;
  bVar1 = moby->state;
  puVar11[0x28] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x27] = unaff_r29;
  puVar11[0x26] = unaff_r28;
  puVar11[0x25] = unaff_r27;
  puVar11[0x24] = unaff_r26;
  puVar11[0x23] = unaff_r25;
  puVar11[0x22] = unaff_r24;
  puVar11[0x21] = unaff_r23;
  puVar11[0x20] = unaff_r22;
  if (bVar1 == 0) {
    mobyfunc::DeleteMoby(moby);
  }
  else if (bVar1 < 2) {
    (moby->pos).x = (moby->pos).x + *pfVar9;
    (moby->pos).y = (moby->pos).y + pfVar9[1];
    (moby->pos).z = (moby->pos).z + pfVar9[2];
    dVar39 = 0.0;
    mobyutil::Delt(0.0,DAT_007665a8 * DAT_0071f418,pfVar9 + 2);
    fVar8 = SQRT(*pfVar9 * *pfVar9 + pfVar9[1] * pfVar9[1]);
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar5 = (moby->pos).w;
    fVar23 = pfVar9[2];
    dVar26 = ABS((double)pfVar9[2]);
    dVar27 = ABS((double)fVar8);
    *(float *)(puVar11 + 0x18) = fVar8;
    *(float *)((int)puVar11 + 0xc4) = (float)(dVar27 - dVar26);
    uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar23 >> 0x1d) & 4;
    dVar33 = ABS((double)*(float *)(puVar11 + 0x18));
    if ((double)*(float *)((int)puVar11 + 0xc4) - dVar39 < 0.0) {
      dVar33 = dVar26;
    }
    fVar8 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar23 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar11 + 0xc4) - dVar39 < 0.0) {
      dVar26 = dVar27;
    }
    dVar27 = dVar39;
    if (dVar39 < dVar33) {
      lVar14 = uVar13 - 0x1b0;
      lVar20 = uVar13 - 0xf8;
      lVar22 = uVar13 - 0xe8;
      lVar24 = 2;
      fVar6 = (float)(dVar26 - dVar33) / (float)(dVar26 + dVar33);
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
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar6 * fVar6;
        iVar17 = (int)lVar20;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar22 = uVar13 - 0xf8;
      pfVar21 = (float *)&DAT_007358e0;
      lVar24 = 4;
      lVar14 = lVar15;
      lVar20 = lVar22;
      do {
        fVar6 = *pfVar21;
        fVar7 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar14 = 2;
      dVar26 = dVar39;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar16 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 200)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar8 + fVar23);
    }
    iVar17 = 0;
    *(f32 *)(puVar11 + 0x12) = fVar2;
    *(f32 *)((int)puVar11 + 0x94) = fVar3;
    *(f32 *)(puVar11 + 0x13) = fVar4;
    *(f32 *)((int)puVar11 + 0x9c) = fVar5;
    (moby->rotation).y = (float)(1.5707963705062866 - dVar27);
    dVar38 = (double)*pfVar9;
    dVar37 = 0.5;
    dVar36 = (double)pfVar9[1];
    dVar35 = (double)pfVar9[2];
    *(float *)(puVar11 + 0x14) = (float)(dVar38 * -0.10000000149011612);
    *(float *)((int)puVar11 + 0xa4) = pfVar9[1] * -0.1;
    *(float *)(puVar11 + 0x15) = pfVar9[2] * -0.1;
    *(float *)((int)puVar11 + 0xac) = pfVar9[3];
    dVar34 = 20.0;
    dVar27 = 60.0;
    dVar33 = 300000.0;
    dVar26 = 500000.0;
    uVar32 = 0x40c3880000000000;
    uVar31 = 0x3ff0000000000000;
    uVar30 = 0xbf2a36e2e0000000;
    uVar29 = 0x4010000000000000;
    uVar28 = 0x3ff8000000000000;
    do {
      mobyutil::MB_randRangeFloat((float)dVar34,(float)dVar27);
      iVar16 = fastfunc::FastDoubleToInt();
      puVar11[0x1d] = (longlong)iVar16;
      iVar16 = (int)DAT_007665ac >> 0x18;
      uVar12 = DAT_007665ac & 0xffffff;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + dVar37));
      uVar10 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar25 = mobyutil::MB_randRangeFloat((float)dVar33,(float)dVar26);
      iVar16 = partupd::SpawnPart_44
                         (uVar25,uVar32,uVar31,uVar30,dVar39,uVar13 - 0x130,uVar13 - 0x120,uVar10,
                          iVar16,uVar12,3);
      if (iVar16 != 0) {
        *(undefined1 *)(iVar16 + 2) = *DAT_00a52860;
        cVar18 = fastfunc::FastDoubleToInt(uVar29);
        *(char *)(iVar16 + 9) = cVar18 + -0x80;
      }
      *(float *)(puVar11 + 0x12) = (float)(dVar38 * dVar37 + (double)*(float *)(puVar11 + 0x12));
      *(float *)((int)puVar11 + 0x94) =
           (float)(dVar36 * dVar37 + (double)*(float *)((int)puVar11 + 0x94));
      *(float *)(puVar11 + 0x13) = (float)(dVar35 * dVar37 + (double)*(float *)(puVar11 + 0x13));
      mobyutil::MB_randSphere(dVar37,uVar28,uVar13 - 0x110);
      iVar17 = iVar17 + 1;
      *(float *)(puVar11 + 0x12) = *(float *)(puVar11 + 0x12) + *(float *)(puVar11 + 0x16);
      *(float *)((int)puVar11 + 0x94) =
           *(float *)((int)puVar11 + 0x94) + *(float *)((int)puVar11 + 0xb4);
      *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) + *(float *)(puVar11 + 0x17);
    } while (iVar17 < 2);
    uVar12 = DAT_007665ac & 0xffffff;
    iVar17 = DAT_007665b0 >> 0x18;
    puVar11[0x1d] = (longlong)(int)(animationSpeed * 6.5);
    iVar17 = partupd::SpawnPart_44
                       (0x410e848000000000,0x40b3880000000000,uVar31,0xbf3a36e2e0000000,dVar39,
                        (longlong)(int)moby + 0x10,uVar13 - 0x120,
                        *(undefined4 *)((int)puVar11 + 0xec),iVar17,uVar12,3);
    if (iVar17 != 0) {
      cVar18 = fastfunc::FastDoubleToInt(uVar29);
      *(char *)(iVar17 + 9) = cVar18 + -0x80;
    }
    if (moby->enabled == '\0') {
      fastfunc::FastDecTimerS32(ZEXT48(pfVar9) + 0x10);
      fVar23 = pfVar9[4];
    }
    else {
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = loadVectorLeftIndexed(0x48,0x1ff480);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar40 = vectorMultiplyAddFloatingPoint
                          (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                           auVar41);
      auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
      puVar11[0x1d] = (longlong)(int)(animationSpeed * 60.5);
      fVar23 = *(float *)((int)puVar11 + 0xec);
      auVar40 = auVar40 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x10,
                          ZEXT48(pfVar9));
      *(undefined4 *)((uint)(pfVar9 + 4) & 0xfffffffc) = uVar10;
    }
    if (fVar23 == 0.0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 001ffaf0  ns=Global  size=0x474
// sig: undefined FUN_001ffaf0(void)
// callers(1): 004379b8 mobyupdate_unsorted::UpdateMoby_733
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby

MobyInstance * FUN_001ffaf0(int param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x1b] = unaff_r31;
  puVar8[0x19] = unaff_r29;
  puVar8[0x1a] = unaff_r30;
  puVar8[0x18] = unaff_r28;
  pMVar13 = mobyfunc::CreateMoby(CONSTRUCTORBOT);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->enabled = '\x01';
    pMVar13->drawDistance = 0xff;
    mobyfunc::SetColorOfMoby
              (pMVar13,(longlong)DAT_0076659c,(longlong)DAT_007665a0,(longlong)DAT_007665a4);
    pMVar13->modeBits = *(MobyModeBit *)(param_1 + 0x34);
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar8 + 0xf) = fVar2 - fVar3;
    fVar1 = 0.0;
    pfVar6 = (float *)pMVar13->pVar;
    uVar18 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar9 = fVar1;
    if (0.0 < fVar5) {
      lVar14 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x34;
      lVar16 = uVar12 - 0x44;
      lVar20 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x15) = fVar5;
      *(float *)(puVar8 + 0x14) = fVar5;
      *(float *)((int)puVar8 + 0xa4) = fVar5;
      *(float *)((int)puVar8 + 0x9c) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar5;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar5 * fVar5;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 0x44;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar5 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      lVar14 = lVar15;
      fVar5 = fVar1;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar9 = (fVar5 + 0.7853982) * fVar4 + fVar2;
    }
    (pMVar13->rotation).z = fVar9;
    fVar4 = param_3[2];
    fVar5 = ABS(param_3[2]);
    fVar3 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar2 = ABS(fVar3);
    *(float *)(puVar8 + 0xe) = fVar3;
    *(float *)((int)puVar8 + 0x74) = fVar2 - fVar5;
    uVar18 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar14 = uVar12 - 0xd0;
      lVar19 = uVar12 - 0x54;
      lVar16 = uVar12 - 100;
      lVar20 = 2;
      fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
      fVar5 = fVar4 * fVar4;
      *(float *)(puVar8 + 0x11) = fVar4;
      *(float *)(puVar8 + 0x10) = fVar4;
      *(float *)((int)puVar8 + 0x84) = fVar4;
      *(float *)((int)puVar8 + 0x7c) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar4;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar4 * fVar4;
        iVar10 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 100;
      pfVar17 = (float *)&DAT_007358e0;
      lVar14 = lVar15;
      lVar16 = lVar19;
      do {
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar2;
    }
    (pMVar13->rotation).y = fVar1;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->state = '\x01';
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    *pfVar6 = *param_3;
    pfVar6[1] = param_3[1];
    pfVar6[2] = param_3[2];
    pfVar6[3] = param_3[3];
    auVar21 = loadVectorLeftIndexed(8,0x1ffae4);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x10,
                       ZEXT48(pfVar6));
    *(undefined4 *)((uint)(pfVar6 + 4) & 0xfffffffc) = uVar7;
  }
  return pMVar13;
}



//==== 001fff88  ns=mobyupdate_unsorted  size=0x64c
// sig: undefined UpdateMoby_1209(MobyInstance * moby)
// callers(0): 
// callees(8): 000f1114 mobyfunc::GetBonePosition; 000f1ec8 mobyfunc::SetColorOfMoby; 001042ec mobyutil::MB_SetStateByGroup; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 005010c0 fastfunc::FastNormalizeRMtx4

/* Moby 1209 */

void mobyupdate_unsorted::UpdateMoby_1209(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  short *psVar3;
  void *pvVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 uVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 auStack_a0 [4];
  float local_9c;
  float local_8c;
  float local_7c;
  float local_6c;
  MobyInstance *local_60 [8];
  
  psVar3 = (short *)moby->pVar;
  uVar15 = ZEXT48(psVar3);
  bVar12 = false;
  dVar18 = (double)(moby->pos).w;
  if ((moby->state == '\x01') || (moby->state == '\x02')) {
    dVar19 = (double)((moby->pos).y - g_heroPosition.y);
    dVar17 = (double)((moby->pos).x - g_heroPosition.x);
    dVar16 = (double)((moby->pos).z - g_heroPosition.z);
    if ((SQRT((float)(dVar16 * dVar16 +
                     (double)(float)(dVar17 * dVar17 + (double)(float)(dVar19 * dVar19)))) <
         *(float *)(psVar3 + 10)) &&
       (fastfunc::FastNormalizeRMtx4(auStack_a0,(longlong)(int)moby + 0xc0),
       (float)((double)local_6c * dVar18 +
              (double)(float)((double)local_7c * dVar16 +
                             (double)(float)((double)local_9c * dVar17 +
                                            (double)(float)((double)local_8c * dVar19)))) < 0.2)) {
      bVar12 = true;
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((int)psVar3 + 9) == '\0') {
        mobyfunc::GetBonePosition((longlong)(int)moby,0,&local_b0);
        fVar9 = (moby->pos).y - local_ac;
        fVar10 = (moby->pos).x - local_b0;
        fVar11 = (moby->pos).z - local_a8;
        *(undefined1 *)((int)psVar3 + 0xb) = 0;
        *(MobyInstance **)(psVar3 + 8) = moby;
        *(float *)(psVar3 + 10) = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        mobyutil::MB_GetFirstMobyInGroup(local_60,(uint)(byte)moby->group,'\0','\0');
        while (local_60[0] != (MobyInstance *)0x0) {
          if ((local_60[0] != moby) && (local_60[0]->oClass == UNDERWATER_RING)) {
            pvVar4 = local_60[0]->pVar;
            *(MobyInstance **)((int)pvVar4 + 0x10) = moby;
            *(undefined1 *)((int)pvVar4 + 9) = 1;
            *(undefined4 *)((int)pvVar4 + 0x14) = *(undefined4 *)(psVar3 + 10);
          }
          *(char *)((int)psVar3 + 0xb) = *(char *)((int)psVar3 + 0xb) + '\x01';
          mobyutil::MB_GetNextMobyInGroup(local_60,local_60[0],'\0','\0');
        }
      }
      *psVar3 = 0;
      psVar3[1] = 0;
      *(undefined1 *)(psVar3 + 5) = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      mobyfunc::SetColorOfMoby(moby,0,0,0);
      moby->state = '\x01';
    }
    else {
      uVar2 = moby->uid;
      if ((((&DAT_00a545c4)[(short)uVar2] == '\0') &&
          ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar2 >> 5) << 2)
                     ) & 1 << (uVar2 & 0x1f)) == 0)) || (*(int *)(psVar3 + 0xe) == 0)) {
        if (psVar3[2] == 0 && bVar12) {
          iVar13 = *(int *)(psVar3 + 8);
          puVar5 = *(undefined2 **)(iVar13 + 0x78);
          if (*(char *)(iVar13 + 0x20) == '\x01') {
            *(undefined1 *)(psVar3 + 5) = 0;
            *(undefined1 *)(iVar13 + 0x20) = 2;
            auVar20 = loadVectorLeftIndexed(4,0x1fff68);
            auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
            if (0 < *(int *)(puVar5 + 6)) {
              auVar20 = ZEXT416(0xffffffff);
              auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
              auVar22 = vectorShiftLeftIntegerWord(auVar20,auVar20);
              auVar20 = loadVectorLeftIndexed(0xc,uVar15);
              auVar21 = loadVectorRightIndexed(0x1c,uVar15);
              auVar21 = vectorConvertFromSignedFixedPointWord(auVar20 | auVar21,0);
              auVar20 = loadVectorLeftIndexed(8,0x1fff68);
              auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar20 = vectorAddFloatingPoint
                                  (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 |
                                           auVar20 << 0x60);
              auVar20 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar22);
              auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
            }
            auVar20 = vectorSplatHalfWord(auVar20,1);
            uVar7 = storeVectorElementHalfWordIndexed(auVar20,0,ZEXT48(puVar5));
            *puVar5 = uVar7;
          }
          *(char *)(puVar5 + 5) = *(char *)(puVar5 + 5) + '\x01';
          sound::PlayMobySound(3,0x31,moby);
          mobyfunc::SetColorOfMoby(moby,0,0xff,0);
          psVar3[2] = 1;
          bVar1 = moby->state;
        }
        if (bVar1 == 2) {
          if (*(byte *)(psVar3 + 5) < *(byte *)((int)psVar3 + 0xb)) {
            iVar13 = fastfunc::FastDecTimerS16(uVar15);
            if (iVar13 == 0) {
              iVar13 = fastfunc::FastDecTimerS16(uVar15 + 2);
              if (iVar13 != 0) {
                sound::PlayMobySound(0,0x31,moby);
                iVar14 = (int)(animationSpeed * 5.5) + (int)*psVar3 / (int)(animationSpeed * 40.5);
                iVar13 = (int)(animationSpeed * 45.5);
                if (iVar14 <= (int)(animationSpeed * 45.5)) {
                  iVar13 = iVar14;
                }
                psVar3[1] = (short)iVar13;
              }
            }
            else {
              *(undefined1 *)(psVar3 + 5) = 0;
              psVar3[2] = 0;
              sound::PlayMobySound(2,0x31,moby);
              mobyutil::MB_SetStateByGroup(moby->group,3);
            }
          }
          else {
            mobyutil::MB_SetStateByGroup(moby->group,4);
            sound::PlayMobySound(1,0x31,moby);
            *psVar3 = (short)*(undefined4 *)(psVar3 + 0xc);
            moby->state = '\x04';
          }
        }
      }
      else {
        mobyutil::MB_SetStateByGroup(moby->group,4);
        *psVar3 = (short)*(undefined4 *)(psVar3 + 0xc);
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::SetColorOfMoby(moby,0,0,0);
    *(undefined1 *)(psVar3 + 5) = 0;
    psVar3[2] = 0;
    moby->state = '\x01';
  }
  else if (bVar1 < 5) {
    iVar13 = fastfunc::FastDecTimerS16(uVar15 + 6);
    if (iVar13 != 0) {
      auVar20 = ZEXT416(0xffffffff);
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar20 = loadVectorLeftIndexed(0x18,0x1fff68);
      auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                           auVar21);
      auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
      auVar20 = vectorSplatHalfWord(auVar20,1);
      sVar8 = storeVectorElementHalfWordIndexed(auVar20,6,uVar15);
      psVar3[3] = sVar8;
      if (*(char *)(psVar3 + 4) == '\0') {
        mobyfunc::SetColorOfMoby(moby,0xff,0xff,0xff);
        *(undefined1 *)(psVar3 + 4) = 1;
      }
      else {
        mobyfunc::SetColorOfMoby(moby,0,0xff,0);
        *(undefined1 *)(psVar3 + 4) = 0;
      }
    }
    uVar2 = moby->uid;
    iVar14 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    iVar13 = (int)((longlong)((int)(short)uVar2 >> 5) << 2);
    uVar6 = *(uint *)(&DAT_00a54dd0 + iVar13);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar14) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar14) | 1 << (uVar2 & 0x1f);
    *(uint *)(&DAT_00a54dd0 + iVar13) = uVar6 | 1 << (uVar2 & 0x1f);
  }
  return;
}



