//==== 00300130  ns=mobyupdate_helpers  size=0x14
// sig: undefined M231_00300130(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M231_00300130(void)

{
  DAT_007ff2d8 = 0x10000;
  return;
}



//==== 00300150  ns=mobyupdate_helpers  size=0x190
// sig: undefined M231_00300150(void)
// callers(1): 003002f8 mobyupdate_unsorted::UpdateMoby_231
// callees(4): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

undefined8
mobyupdate_helpers::M231_00300150(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 in_LR;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int local_30 [2];
  
  uVar8 = 0;
  iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar6 = mobyutil::MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
  pfVar7 = (float *)param_3;
  if ((0 < iVar6) && (iVar6 < 3)) {
    *pfVar7 = 0.0;
  }
  if (1 < local_30[0]) {
    uVar2 = (int)*pfVar7 >> 0x1f;
    uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
    iVar6 = (int)param_2;
    if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
        (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
      *(undefined1 *)(iVar6 + 0x67) = 0xfa;
      auVar9 = loadVectorLeftIndexed(in_LR,0x300148);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = vectorSplatHalfWord(auVar9,1);
      uVar4 = storeVectorElementHalfWordIndexed(auVar9,0x26,param_2);
      *(undefined2 *)(iVar6 + 0x26) = uVar4;
      mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
    }
    else {
      MVar1 = param_1->modeBits;
      *pfVar7 = 0.0;
      param_1->modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(undefined1 *)(iVar6 + 0x67) = 0x78;
      mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      uVar8 = 1;
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return uVar8;
}



//==== 003002f8  ns=mobyupdate_unsorted  size=0x600
// sig: undefined UpdateMoby_231(MobyInstance * moby)
// callers(0): 
// callees(8): 000f1ec8 mobyfunc::SetColorOfMoby; 001042ec mobyutil::MB_SetStateByGroup; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 0015d12c sound::PlayMobySound; 00300150 mobyupdate_helpers::M231_00300150; 004fffb4 fastfunc::FastDecTimerS16; 005cd098 libc::printf
// strings: 00655d30: 'moby:%d(%d) opened at %d\n' | 00655d50: 'moby:%d(%d) failed at %d\n' | 00655d70: 'moby:%d(%d) closed at %d\n'

/* Moby 231 */

void mobyupdate_unsorted::UpdateMoby_231(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 in_LR;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  MobyInstance *local_30 [2];
  longlong local_28;
  
  pvVar2 = moby->pVar;
  uVar9 = ZEXT48(pvVar2);
  iVar7 = 0;
  if ((*(short *)((int)pvVar2 + 0x74) == 0) && ((moby->state == '\x01' || (moby->state == '\x02'))))
  {
    iVar7 = mobyupdate_helpers::M231_00300150(moby,uVar9,uVar9 + 0x20);
  }
  bVar1 = moby->state;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      if (*(char *)((int)pvVar2 + 0x79) == '\0') {
        *(undefined1 *)((int)pvVar2 + 0x7b) = 0;
        *(MobyInstance **)((int)pvVar2 + 0x80) = moby;
        mobyutil::MB_GetFirstMobyInGroup(local_30,(uint)(byte)moby->group,'\0','\0');
        while (local_30[0] != (MobyInstance *)0x0) {
          if ((local_30[0] != moby) && (local_30[0]->oClass == 0xe7)) {
            pvVar3 = local_30[0]->pVar;
            *(MobyInstance **)((int)pvVar3 + 0x80) = moby;
            *(undefined1 *)((int)pvVar3 + 0x79) = 1;
          }
          *(char *)((int)pvVar2 + 0x7b) = *(char *)((int)pvVar2 + 0x7b) + '\x01';
          mobyutil::MB_GetNextMobyInGroup(local_30,local_30[0],'\0','\0');
        }
      }
      *(undefined2 *)((int)pvVar2 + 0x70) = 0;
      *(undefined2 *)((int)pvVar2 + 0x72) = 0;
      *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
      *(undefined2 *)((int)pvVar2 + 0x74) = 0;
      *(undefined2 *)((int)pvVar2 + 0x76) = 0;
      mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
      moby->state = '\x01';
    }
    else {
      if (*(short *)((int)pvVar2 + 0x74) == 0 && iVar7 != 0) {
        iVar7 = *(int *)((int)pvVar2 + 0x80);
        uVar4 = *(uint *)(iVar7 + 0x78);
        if (*(char *)(iVar7 + 0x20) == '\x01') {
          *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
          *(undefined1 *)(iVar7 + 0x20) = 2;
          if (0 < *(int *)(uVar4 + 0x7c)) {
            auVar10 = ZEXT416(0xffffffff);
            auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
            auVar10 = loadVectorLeftIndexed(0x7c,uVar9);
            auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
            auVar12 = loadVectorRightIndexed(0x8c,uVar9);
            auVar11 = loadVectorLeftIndexed(in_LR,0x3002e0);
            auVar12 = vectorConvertFromSignedFixedPointWord(auVar10 | auVar12,0);
            auVar10 = auVar11 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar10 = vectorAddFloatingPoint
                                (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 |
                                         auVar10 << 0x60);
            auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar13);
            auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
            auVar10 = vectorSplatHalfWord(auVar10,1);
            uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x70,(ulonglong)uVar4);
            *(undefined2 *)(uVar4 + 0x70) = uVar5;
          }
        }
        *(char *)(uVar4 + 0x7a) = *(char *)(uVar4 + 0x7a) + '\x01';
        sound::PlayMobySound(3,0,moby);
        mobyfunc::SetColorOfMoby(moby,0,0xff,0);
        *(undefined2 *)((int)pvVar2 + 0x74) = 1;
        bVar1 = moby->state;
      }
      if (bVar1 == 2) {
        if (*(byte *)((int)pvVar2 + 0x7a) < *(byte *)((int)pvVar2 + 0x7b)) {
          if (-1 < *(int *)((int)pvVar2 + 0x7c)) {
            iVar7 = fastfunc::FastDecTimerS16(uVar9 + 0x70);
            if (iVar7 == 0) {
              iVar7 = fastfunc::FastDecTimerS16(uVar9 + 0x72);
              if (iVar7 != 0) {
                sound::PlayMobySound(0,0,moby);
                iVar8 = (int)(animationSpeed * 5.5) +
                        (int)*(short *)((int)pvVar2 + 0x70) / (int)(animationSpeed * 40.5);
                iVar7 = (int)(animationSpeed * 45.5);
                if (iVar8 <= (int)(animationSpeed * 45.5)) {
                  iVar7 = iVar8;
                }
                *(short *)((int)pvVar2 + 0x72) = (short)iVar7;
              }
            }
            else {
              *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
              *(undefined2 *)((int)pvVar2 + 0x74) = 0;
              sound::PlayMobySound(2,0,moby);
              mobyutil::MB_SetStateByGroup(moby->group,3);
              libc::printf("moby:%d(%d) failed at %d\n",moby->uid,moby->oClass,worldUpdateTime);
              moby->state = '\x03';
            }
          }
        }
        else {
          mobyutil::MB_SetStateByGroup(moby->group,4);
          sound::PlayMobySound(1,0,moby);
          *(short *)((int)pvVar2 + 0x70) = (short)*(undefined4 *)((int)pvVar2 + 0x84);
          libc::printf("moby:%d(%d) opened at %d\n",moby->uid,moby->oClass,worldUpdateTime);
          moby->state = '\x04';
        }
      }
    }
  }
  else if (bVar1 < 4) {
    mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
    auVar10 = ZEXT416(0xfffffff0);
    auVar12 = loadVectorLeftIndexed(0x24,uVar9);
    auVar11 = loadVectorRightIndexed(0x34,uVar9);
    *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
    *(undefined2 *)((int)pvVar2 + 0x74) = 0;
    auVar10 = vectorShiftRightAlgebraicWord
                        (auVar12 | auVar11,
                         auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60);
    auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x20,uVar9);
    *(undefined4 *)((int)pvVar2 + 0x20U & 0xfffffffc) = uVar6;
    moby->state = '\x01';
  }
  else if (bVar1 < 5) {
    if ((*(char *)((int)pvVar2 + 0x79) == '\0') && (*(short *)((int)pvVar2 + 0x70) != -1)) {
      iVar7 = fastfunc::FastDecTimerS16(uVar9 + 0x70);
      if (iVar7 == 0) {
        iVar7 = fastfunc::FastDecTimerS16(uVar9 + 0x72);
        if (iVar7 != 0) {
          sound::PlayMobySound(0,0,moby);
          local_28 = (longlong)(int)(animationSpeed * 40.5);
          iVar8 = (int)(animationSpeed * 5.5) +
                  (int)*(short *)((int)pvVar2 + 0x70) / (int)(animationSpeed * 40.5);
          iVar7 = (int)(animationSpeed * 45.5);
          if (iVar8 <= (int)(animationSpeed * 45.5)) {
            iVar7 = iVar8;
          }
          *(short *)((int)pvVar2 + 0x72) = (short)iVar7;
        }
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x7a) = 0;
        *(undefined2 *)((int)pvVar2 + 0x74) = 0;
        sound::PlayMobySound(2,0,moby);
        mobyutil::MB_SetStateByGroup(moby->group,3);
        libc::printf("moby:%d(%d) closed at %d\n",moby->uid,moby->oClass,worldUpdateTime);
        moby->state = '\x03';
      }
    }
    iVar7 = fastfunc::FastDecTimerS16(uVar9 + 0x76);
    if (iVar7 != 0) {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(0x10,0x3002e0);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar11,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar12);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = vectorSplatHalfWord(auVar10,1);
      uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x76,uVar9);
      *(undefined2 *)((int)pvVar2 + 0x76) = uVar5;
      if (*(char *)((int)pvVar2 + 0x78) == '\0') {
        mobyfunc::SetColorOfMoby(moby,0,0,0xff);
        *(undefined1 *)((int)pvVar2 + 0x78) = 1;
      }
      else {
        mobyfunc::SetColorOfMoby(moby,0,0xff,0);
        *(undefined1 *)((int)pvVar2 + 0x78) = 0;
      }
    }
  }
  return;
}



//==== 00300950  ns=mobyupdate_helpers  size=0x750
// sig: undefined M233_00300950(void)
// callers(1): 00301d00 mobyupdate_unsorted::UpdateMoby_233
// callees(6): 000ff190 mobyutil::MB_DeltAngSpeed; 001005a8 mobyutil::MB_PushOutOfWalls; 005023bc fastfunc::FastVecScale; 005025e0 fastfunc::FastDiffRots; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf

void mobyupdate_helpers::M233_00300950
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar18;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  int iVar21;
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
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  undefined8 uVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  undefined8 uVar29;
  double dVar30;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack00000050;
  float fStack00000054;
  undefined8 uStack00000058;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0x170;
  puVar10 = (ulonglong *)lVar14;
  *puVar10 = uVar13;
  puVar10[0x30] = in_LR;
  puVar10[0x2a] = in_f28;
  puVar10[0x2b] = in_f29;
  puVar10[0x2c] = in_f30;
  puVar10[0x2d] = in_f31;
  puVar10[0x27] = unaff_r29;
  puVar10[0x26] = unaff_r28;
  fVar1 = (param_1->pos).x;
  *(float *)(puVar10 + 0x10) = fVar1;
  fVar2 = (param_1->pos).y;
  fStack00000044 = (float)param_3;
  *(float *)((int)puVar10 + 0x84) = fVar2;
  fVar3 = (param_1->pos).z;
  fVar2 = fVar2 - fStack00000044;
  *(float *)(puVar10 + 0x11) = fVar3;
  fVar4 = (param_1->pos).w;
  puVar10[0x28] = unaff_r30;
  *(f32 *)((int)puVar10 + 0x8c) = fVar4;
  fVar12 = DAT_0071f418;
  pvVar7 = param_1->pVar;
  dVar28 = 10.0;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fVar6 = DAT_0071f418 * 10.0;
  fVar1 = fVar1 - fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  uVar29 = 0x4000000000000000;
  fVar3 = fVar3 - fStack00000048;
  fVar5 = *(float *)((int)pvVar7 + 0x170);
  puVar10[0x29] = unaff_r31;
  puVar10[0x25] = unaff_r27;
  puVar10[0x24] = unaff_r26;
  if ((fVar5 * fVar5) / (fVar6 * 2.0) < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2)) {
    fVar5 = fVar12 * 10.0 + fVar5;
    *(float *)((int)pvVar7 + 0x170) = fVar5;
    if (mobyutil::g_FrameTime * 10.0 < fVar5) {
      *(float *)((int)pvVar7 + 0x170) = mobyutil::g_FrameTime * 10.0;
    }
  }
  else {
    fVar1 = -(fVar12 * 10.0 - fVar5);
    *(float *)((int)pvVar7 + 0x170) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)((int)pvVar7 + 0x170) = 0;
    }
  }
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000050 = param_5;
  uStack00000058 = param_6;
  fastfunc::FastVecSub(uVar13 - 0xe0,uVar13 + 0x40 & 0xffffffff,&param_1->pos);
  fVar1 = *(float *)((int)puVar10 + 0x94);
  fVar2 = *(float *)(puVar10 + 0x12);
  fVar3 = *(float *)(puVar10 + 0x13);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)((int)puVar10 + 0x74) = fVar1;
  *(float *)(puVar10 + 0xf) = fVar3;
  *(undefined4 *)((int)puVar10 + 0x7c) = *(undefined4 *)((int)puVar10 + 0x9c);
  uVar27 = 0x3fb99999a0000000;
  dVar26 = 0.0;
  iVar21 = (int)pvVar7 + 0x150;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar6 = (*(float *)((int)pvVar7 + 0x170) * 0.1) / fVar5;
  dVar23 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar23 = (double)(fVar2 * fVar6);
  }
  dVar24 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar24 = (double)(fVar1 * fVar6);
  }
  dVar25 = dVar26;
  if (0.0 - fVar5 < 0.0) {
    dVar25 = (double)(fVar3 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar23 = (double)(fVar2 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar24 = (double)(fVar1 * fVar6);
  }
  if (fVar5 - 0.0 < 0.0) {
    dVar25 = (double)(fVar3 * fVar6);
  }
  *(float *)(puVar10 + 0xe) = (float)dVar23;
  *(float *)((int)puVar10 + 0x74) = (float)dVar24;
  *(float *)(puVar10 + 0xf) = (float)dVar25;
  fastfunc::FastVecScale(0x3fecccccc0000000,uVar13 - 0xd0,iVar21);
  lVar19 = uVar13 - 0x100;
  *(undefined4 *)((int)pvVar7 + 0x150) = *(undefined4 *)(puVar10 + 0x14);
  *(undefined4 *)((int)pvVar7 + 0x154) = *(undefined4 *)((int)puVar10 + 0xa4);
  *(undefined4 *)((int)pvVar7 + 0x158) = *(undefined4 *)(puVar10 + 0x15);
  *(undefined4 *)((int)pvVar7 + 0x15c) = *(undefined4 *)((int)puVar10 + 0xac);
  fastfunc::FastVecAddSelf(uVar13 - 0xc0,iVar21);
  mobyutil::MB_PushOutOfWalls(0x3ff0000000000000,uVar29,param_1,iVar21,lVar19,param_4,0);
  fVar1 = fStack00000050 - (param_1->pos).x;
  fVar2 = fStack00000054 - (param_1->pos).y;
  fVar4 = *(f32 *)((int)pvVar7 + 0x1a8);
  dVar24 = ABS((double)fVar1);
  dVar25 = ABS((double)fVar2);
  *(float *)((int)puVar10 + 0xd4) = fVar1;
  *(float *)(puVar10 + 0x1b) = fVar2;
  (param_1->pos).z = fVar4;
  fVar1 = (param_1->rotation).z;
  *(float *)((int)puVar10 + 0xdc) = (float)(dVar24 - dVar25);
  dVar30 = 0.7853981852531433;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0xd4) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0xdc) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x1b) >> 0x1d) & 4;
  uVar16 = uVar15 << 2;
  dVar23 = ABS((double)*(float *)((int)puVar10 + 0xd4));
  if ((double)*(float *)((int)puVar10 + 0xdc) - dVar26 < 0.0) {
    dVar23 = dVar25;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)uVar16);
  dVar25 = ABS((double)*(float *)(puVar10 + 0x1b));
  if ((double)*(float *)((int)puVar10 + 0xdc) - dVar26 < 0.0) {
    dVar25 = dVar24;
  }
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar24 = dVar26;
  if (dVar26 < dVar23) {
    lVar19 = uVar13 - 0x160;
    lVar20 = uVar13 - 0x60;
    lVar17 = uVar13 - 0x70;
    lVar22 = 2;
    fVar5 = (float)(dVar25 - dVar23) / (float)(dVar25 + dVar23);
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0x10c) = fVar5;
    *(float *)((int)puVar10 + 0x104) = fVar5;
    *(float *)(puVar10 + 0x21) = fVar5;
    *(float *)(puVar10 + 0x20) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar6;
    *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar5;
    *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0xf0) * fVar5 * fVar5;
      iVar21 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
      lVar20 = lVar20 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar20 = uVar13 - 0x70;
    uVar16 = ZEXT48(&DAT_007358e0);
    lVar19 = lVar14;
    lVar17 = lVar20;
    do {
      pfVar18 = (float *)uVar16;
      fVar5 = pfVar18[1];
      uVar16 = uVar16 + 8;
      *(float *)((int)lVar19 + 0x100) = *(float *)((int)lVar19 + 0x100) * *pfVar18;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar17 = 2;
    lVar19 = lVar14;
    dVar23 = dVar26;
    do {
      iVar21 = (int)lVar19;
      iVar11 = (int)lVar20;
      lVar19 = lVar19 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar21 + 0x100)) +
                        *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar24 = (double)((float)(dVar23 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar23 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)fVar1,dVar24,0x3f847ae140000000,0x3fd3333340000000,uVar27,
                              &DAT_003008f8,uVar16,(int)pvVar7 + 0x17c);
  (param_1->rotation).z = (float)dVar23;
  fastfunc::FastVecSub(uVar13 - 0xb0,&param_1->pos,uVar13 - 0xf0);
  uVar8 = *(uint *)(puVar10 + 0x18);
  fVar1 = *(float *)(puVar10 + 0x18);
  *(float *)((int)pvVar7 + 0x150) = fVar1;
  uVar9 = *(uint *)((int)puVar10 + 0xc4);
  dVar25 = ABS((double)fVar1);
  dVar23 = ABS((double)*(float *)((int)puVar10 + 0xc4));
  *(float *)((int)pvVar7 + 0x154) = *(float *)((int)puVar10 + 0xc4);
  *(undefined4 *)((int)pvVar7 + 0x158) = *(undefined4 *)(puVar10 + 0x19);
  *(undefined4 *)((int)pvVar7 + 0x15c) = *(undefined4 *)((int)puVar10 + 0xcc);
  fVar1 = (param_1->rotation).z;
  *(float *)(puVar10 + 0x1a) = (float)(dVar25 - dVar23);
  uVar16 = (ulonglong)(uVar8 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x1a) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
  dVar24 = dVar25;
  if ((double)*(float *)(puVar10 + 0x1a) - dVar26 < 0.0) {
    dVar24 = dVar23;
  }
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  if ((double)*(float *)(puVar10 + 0x1a) - dVar26 < 0.0) {
    dVar23 = dVar25;
  }
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar26 < dVar24) {
    lVar19 = uVar13 - 0x160;
    lVar17 = uVar13 - 0x90;
    lVar20 = uVar13 - 0x80;
    lVar22 = 2;
    fVar5 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xec) = fVar5;
    *(float *)((int)puVar10 + 0xe4) = fVar5;
    *(float *)(puVar10 + 0x1d) = fVar5;
    *(float *)(puVar10 + 0x1c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar6;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar5;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xd0) * fVar5 * fVar5;
      iVar21 = (int)lVar17;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar5 * fVar5;
      lVar20 = lVar20 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar22 = 4;
    lVar20 = uVar13 - 0x90;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = lVar14;
    lVar17 = lVar20;
    do {
      fVar5 = *pfVar18;
      fVar6 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar19 + 0xe0) = *(float *)((int)lVar19 + 0xe0) * fVar5;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar6;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    lVar19 = 2;
    do {
      iVar21 = (int)lVar14;
      iVar11 = (int)lVar20;
      lVar14 = lVar14 + 0x10;
      lVar20 = lVar20 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar21 + 0xe0)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar26 = (double)((float)(dVar26 + dVar30) * fVar2 + fVar3);
  }
  dVar26 = (double)fastfunc::FastDiffRots(dVar26,(double)fVar1);
  fVar1 = (float)(dVar26 + 1.570796251296997);
  dVar23 = (double)(float)(3.141592502593994 - dVar26);
  if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
    dVar23 = dVar26;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar24 = (double)(float)(-3.141592502593994 - dVar26);
  if ((double)(float)(-3.141592502593994 - dVar26) - dVar23 < 0.0) {
    dVar24 = dVar23;
  }
  dVar23 = (double)(float)(dVar24 * dVar24);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = (float)((double)mobyutil::g_FrameTime * dVar28);
  fVar6 = fVar3 * fVar3;
  dVar28 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar24));
  dVar26 = (double)(float)(dVar23 * dVar28);
  fVar5 = fVar6 * fVar6 * fVar3;
  fVar2 = fVar6 * fVar5;
  dVar26 = (double)((*(float *)((int)pvVar7 + 0x170) * -0.34906584 *
                    ((float)(dVar23 * dVar26) * 2.601887e-06 +
                    (float)(dVar26 * -0.0001980741071747616 +
                           (double)(float)(dVar28 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar23 * dVar24) *
                                                          -0.16666656732559204 + dVar24))))) / fVar1
                   );
  dVar23 = 1.0471975803375244;
  dVar28 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)(param_1->rotation).y,
                              (double)((*(float *)((int)pvVar7 + 0x170) * 0.34906584 *
                                       (fVar6 * fVar2 * 2.601887e-06 +
                                       fVar2 * -0.0001980741 +
                                       fVar5 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3))
                                      / fVar1),(double)(DAT_0071f418 * 0.5235988),
                              (double)(DAT_0071f418 * 1.0471976),
                              (double)(float)((double)mobyutil::g_FrameTime * dVar30));
  (param_1->rotation).y = (float)dVar28;
  dVar28 = (double)mobyutil::MB_DeltAngSpeed
                             ((double)(param_1->rotation).x,dVar26,
                              (double)(float)((double)DAT_0071f418 * dVar23),
                              (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                              (double)(mobyutil::g_FrameTime * 1.5707964));
  (param_1->rotation).x = (float)dVar28;
  return;
}



//==== 003010d0  ns=mobyupdate_helpers  size=0x6f8
// sig: undefined M233_003010d0(void)
// callers(1): 00301d00 mobyupdate_unsorted::UpdateMoby_233
// callees(0): 

double mobyupdate_helpers::M233_003010d0
                 (int param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xa0;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar10;
  puVar6[0x11] = in_f29;
  puVar6[0x12] = in_f30;
  puVar6[0x13] = in_f31;
  dVar21 = 0.0;
  fStack00000044 = (float)param_3;
  bVar9 = true;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  param_2[3] = 0.0;
  fVar2 = fVar2 - fStack00000040;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  iVar5 = MobyUpdateChainStart;
  *param_2 = 0.0;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  dVar20 = dVar21;
  dVar22 = dVar21;
  dVar23 = dVar21;
  dVar24 = dVar21;
  if (iVar5 != 0) {
    do {
      if (((iVar5 != param_1) && (*(short *)(iVar5 + 0xa6) == *(short *)(param_1 + 0xa6))) &&
         (*(char *)(iVar5 + 0x20) != '@' && *(char *)(iVar5 + 0x20) != '\x01')) {
        fVar3 = *(float *)(iVar5 + 0x14);
        fVar4 = *(float *)(iVar5 + 0x10);
        fVar1 = fVar3 - *(float *)(param_1 + 0x14);
        fVar7 = fVar4 - *(float *)(param_1 + 0x10);
        if (SQRT(fVar7 * fVar7 + fVar1 * fVar1) < 10.0) {
          dVar20 = (double)(float)(dVar20 + 6.0);
          fVar4 = (float)((double)(*(float *)(param_1 + 0x10) - fVar4) * 6.0 + dVar22);
          dVar22 = (double)fVar4;
          fVar3 = (float)((double)(*(float *)(param_1 + 0x14) - fVar3) * 6.0 + dVar23);
          dVar23 = (double)fVar3;
          fVar1 = (float)((double)(*(float *)(param_1 + 0x18) - *(float *)(iVar5 + 0x18)) * 6.0 +
                         dVar24);
          dVar24 = (double)fVar1;
          *param_2 = fVar4;
          param_2[1] = fVar3;
          param_2[2] = fVar1;
          fVar4 = *(float *)(iVar5 + 0x10);
          fVar3 = *(float *)(iVar5 + 0x14);
        }
        if (SQRT((fVar4 - fStack00000040) * (fVar4 - fStack00000040) +
                 (fVar3 - fStack00000044) * (fVar3 - fStack00000044)) < fVar2) {
          bVar9 = false;
        }
      }
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if (!bVar9) {
      fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
      fVar4 = *(float *)(param_1 + 0x10) - fStack00000040;
      fStack00000048 = *(float *)(param_1 + 0x18) - fStack00000048;
      dVar18 = dVar21;
      if (15.5 - fVar2 < 0.0) {
        dVar18 = -15.0;
      }
      param_2[3] = 0.0;
      if (fVar2 - 14.5 < 0.0) {
        dVar18 = 15.0;
      }
      fVar1 = SQRT(fStack00000048 * fStack00000048 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar2 = 1.0 / (float)(dVar20 + 10.0);
      fVar7 = (float)(dVar18 * 10.0) / fVar1;
      dVar20 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar20 = (double)(fVar7 * fStack00000048);
      }
      dVar18 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar18 = (double)(fVar7 * fVar3);
      }
      dVar19 = dVar21;
      if (0.0 - fVar1 < 0.0) {
        dVar19 = (double)(fVar7 * fVar4);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar20 = (double)(fVar7 * fStack00000048);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar18 = (double)(fVar7 * fVar3);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar19 = (double)(fVar7 * fVar4);
      }
      fVar4 = (float)(dVar24 + dVar20) * fVar2;
      fVar1 = (float)(dVar23 + dVar18) * fVar2;
      fVar2 = (float)(dVar22 + dVar19) * fVar2;
      param_2[2] = fVar4;
      param_2[1] = fVar1;
      *param_2 = fVar2;
      fVar2 = fVar2 + *(float *)(param_1 + 0x10);
      *param_2 = fVar2;
      fVar1 = fVar1 + *(float *)(param_1 + 0x14);
      param_2[1] = fVar1;
      fVar3 = *(float *)(param_1 + 0x18);
      goto LAB_00301414;
    }
  }
  fVar3 = *(float *)(param_1 + 0x14) - fStack00000044;
  fVar4 = *(float *)(param_1 + 0x10) - fStack00000040;
  fStack00000048 = *(float *)(param_1 + 0x18) - fStack00000048;
  dVar18 = dVar21;
  if (10.5 - fVar2 < 0.0) {
    dVar18 = -10.0;
  }
  if (fVar2 - 9.5 < 0.0) {
    dVar18 = 10.0;
  }
  fVar2 = 1.0 / (float)(dVar20 + 10.0);
  param_2[3] = 0.0;
  fVar1 = SQRT(fStack00000048 * fStack00000048 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar7 = (float)(dVar18 * 10.0) / fVar1;
  dVar20 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar20 = (double)(fVar7 * fStack00000048);
  }
  dVar18 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar18 = (double)(fVar7 * fVar3);
  }
  dVar19 = dVar21;
  if (0.0 - fVar1 < 0.0) {
    dVar19 = (double)(fVar7 * fVar4);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar20 = (double)(fVar7 * fStack00000048);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar18 = (double)(fVar7 * fVar3);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar19 = (double)(fVar7 * fVar4);
  }
  fVar4 = (float)(dVar24 + dVar20) * fVar2;
  fVar1 = (float)(dVar23 + dVar18) * fVar2;
  fVar2 = (float)(dVar22 + dVar19) * fVar2;
  param_2[2] = fVar4;
  param_2[1] = fVar1;
  *param_2 = fVar2;
  fVar2 = fVar2 + *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar1 = fVar1 + *(float *)(param_1 + 0x14);
  param_2[1] = fVar1;
  fVar3 = *(float *)(param_1 + 0x18);
LAB_00301414:
  param_2[2] = fVar4 + fVar3;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14) - fVar1;
  if (1.0 <= SQRT((fVar3 - fVar2) * (fVar3 - fVar2) + fVar4 * fVar4)) {
    fVar1 = fVar1 - *(float *)(param_1 + 0x14);
    fVar7 = ABS(fVar2 - fVar3);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 6) = fVar2 - fVar3;
    *(float *)((int)puVar6 + 0x34) = fVar1;
    *(float *)(puVar6 + 7) = fVar7 - fVar4;
    uVar15 = (ulonglong)(*(uint *)(puVar6 + 6) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 7) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x34) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 6));
    if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)((int)puVar6 + 0x34));
    if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar11 = uVar10 - 0x90;
      lVar16 = uVar10 - 0x48;
      lVar13 = uVar10 - 0x58;
      lVar17 = 2;
      fVar2 = (fVar4 - fVar2) / (fVar4 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar6 + 0x54) = fVar2;
      *(float *)((int)puVar6 + 0x4c) = fVar2;
      *(float *)(puVar6 + 10) = fVar2;
      *(float *)(puVar6 + 9) = fVar2;
      fVar2 = fVar4 * fVar4;
      *(float *)((int)puVar6 + 0x4c) = *(float *)((int)puVar6 + 0x4c) * fVar4;
      *(float *)(puVar6 + 10) = *(float *)(puVar6 + 10) * fVar2;
      *(float *)((int)puVar6 + 0x54) = *(float *)((int)puVar6 + 0x54) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x48) = *(float *)((int)lVar11 + 0x38) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar13 = lVar13 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x58;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar13 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar4 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x48) = *(float *)((int)lVar11 + 0x48) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar5 + 0x48)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar1);
    }
  }
  else {
    *param_2 = fVar3;
    param_2[1] = *(float *)(param_1 + 0x14);
    param_2[2] = *(float *)(param_1 + 0x18);
    param_2[3] = *(float *)(param_1 + 0x1c);
    fStack00000040 = fStack00000040 - *(float *)(param_1 + 0x10);
    fStack00000044 = fStack00000044 - *(float *)(param_1 + 0x14);
    fVar4 = ABS(fStack00000040);
    fVar3 = ABS(fStack00000044);
    *(float *)((int)puVar6 + 0x3c) = fStack00000040;
    *(float *)(puVar6 + 8) = fStack00000044;
    *(float *)((int)puVar6 + 0x44) = fVar4 - fVar3;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x3c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x44) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar6 + 8) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar6 + 0x3c));
    if (*(float *)((int)puVar6 + 0x44) - 0.0 < 0.0) {
      fVar2 = fVar3;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar1 = ABS(*(float *)(puVar6 + 8));
    if (*(float *)((int)puVar6 + 0x44) - 0.0 < 0.0) {
      fVar1 = fVar4;
    }
    fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar2) {
      lVar11 = uVar10 - 0x90;
      lVar13 = uVar10 - 0x38;
      lVar16 = uVar10 - 0x28;
      lVar17 = 2;
      fVar2 = (fVar1 - fVar2) / (fVar1 + fVar2);
      fVar1 = fVar2 * fVar2;
      *(float *)((int)puVar6 + 0x74) = fVar2;
      *(float *)((int)puVar6 + 0x6c) = fVar2;
      *(float *)(puVar6 + 0xe) = fVar2;
      *(float *)(puVar6 + 0xd) = fVar2;
      fVar2 = fVar1 * fVar1;
      *(float *)((int)puVar6 + 0x6c) = *(float *)((int)puVar6 + 0x6c) * fVar1;
      *(float *)(puVar6 + 0xe) = *(float *)(puVar6 + 0xe) * fVar2;
      *(float *)((int)puVar6 + 0x74) = *(float *)((int)puVar6 + 0x74) * fVar2 * fVar1;
      do {
        *(float *)((int)lVar11 + 0x68) = *(float *)((int)lVar11 + 0x58) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar11 = lVar11 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar17 = 4;
      lVar16 = uVar10 - 0x38;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar13 = lVar16;
      do {
        fVar2 = *pfVar14;
        fVar1 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar11 + 0x68) = *(float *)((int)lVar11 + 0x68) * fVar2;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar1;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar11 = 2;
      do {
        iVar5 = (int)lVar12;
        iVar8 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar5 + 0x68)) + *(float *)(iVar8 + 4)
                          + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
    }
  }
  return dVar21;
}



//==== 00301800  ns=mobyupdate_helpers  size=0x464
// sig: undefined M233_00301800(void)
// callers(1): 00301d00 mobyupdate_unsorted::UpdateMoby_233
// callees(5): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M233_00301800(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  float *pfVar13;
  int iVar14;
  longlong lVar12;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar19;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar9 = (ulonglong *)lVar12;
  *puVar9 = uVar11;
  puVar9[0x1c] = in_LR;
  puVar9[0x19] = in_f31;
  puVar9[0x18] = unaff_r31;
  puVar9[0x17] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar19 = ZEXT48(pvVar7);
  dVar24 = 0.0;
  puVar9[0x16] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  pfVar13 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
  iVar14 = mobyutil::MB_HandleDamage
                     (param_1,pfVar13,uVar19 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '@' && param_1->state != '\a')) {
    fVar2 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar2;
    if ((iVar14 == 1) || ((double)fVar2 <= dVar24)) {
      param_1->state = '\a';
    }
    else if (iVar14 != 0xb) {
      *(undefined1 *)((int)pvVar7 + 0x67) = 0xb4;
      mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x60);
      fVar2 = (param_1->rotation).z;
      if ((pfVar13[7] == 5627.925) && (param_1->state != '\x06')) {
        fVar6 = (param_1->pos).x - *pfVar13;
        fVar3 = (param_1->pos).y - pfVar13[1];
        dVar23 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar3);
        *(float *)(puVar9 + 0xf) = fVar6;
        *(float *)((int)puVar9 + 0x7c) = fVar3;
        *(float *)(puVar9 + 0x10) = (float)(dVar23 - dVar22);
        uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar9 + 0xf));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar9 + 0x7c));
        if ((double)*(float *)(puVar9 + 0x10) - dVar24 < 0.0) {
          dVar22 = dVar23;
        }
        fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        if (dVar24 < dVar21) {
          lVar18 = uVar11 - 0xc0;
          lVar15 = uVar11 - 0x3c;
          lVar17 = uVar11 - 0x4c;
          lVar20 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)((int)puVar9 + 0x84) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar4;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x74) * fVar4 * fVar4;
            iVar14 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar18 = uVar11 - 0x4c;
          lVar20 = 4;
          pfVar13 = (float *)&DAT_007358e0;
          lVar15 = lVar18;
          lVar17 = lVar12;
          do {
            fVar4 = *pfVar13;
            fVar5 = pfVar13[1];
            pfVar13 = pfVar13 + 2;
            *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x84) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
            lVar15 = lVar15 + 8;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          lVar15 = 2;
          do {
            iVar14 = (int)lVar12;
            iVar10 = (int)lVar18;
            lVar12 = lVar12 + 0x10;
            lVar18 = lVar18 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x84)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar3);
        }
        dVar21 = (double)fastfunc::FastDiffRots(dVar24,(double)fVar2);
        fVar2 = (float)(dVar21 + 1.570796251296997);
        dVar24 = (double)(float)(3.141592502593994 - dVar21);
        if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
          dVar24 = dVar21;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        dVar22 = (double)(float)(-3.141592502593994 - dVar21);
        if ((double)(float)(-3.141592502593994 - dVar21) - dVar24 < 0.0) {
          dVar22 = dVar24;
        }
        dVar24 = (double)(float)(dVar22 * dVar22);
        fVar3 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar3 = fVar6;
        }
        fVar5 = fVar3 * fVar3;
        dVar21 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar22));
        dVar23 = (double)(float)(dVar24 * dVar21);
        fVar4 = fVar5 * fVar5 * fVar3;
        fVar6 = fVar5 * fVar4;
        fVar2 = ((float)(dVar24 * dVar23) * 2.601887e-06 +
                (float)(dVar23 * -0.0001980741071747616 +
                       (double)(float)(dVar21 * 0.008333025500178337 +
                                      (double)(float)((double)(float)(dVar24 * dVar22) *
                                                      -0.16666656732559204 + dVar22)))) *
                -0.34906584;
        fVar6 = (fVar5 * fVar6 * 2.601887e-06 +
                fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3)
                * 0.08726646;
        if (ABS((param_1->rotation).x) < ABS(fVar2)) {
          (param_1->rotation).x = fVar2;
          *(undefined4 *)((int)pvVar7 + 0x174) = 0;
        }
        if (ABS((param_1->rotation).y) < ABS(fVar6)) {
          (param_1->rotation).y = fVar6;
          *(undefined4 *)((int)pvVar7 + 0x178) = 0;
        }
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        *(float *)((int)pvVar7 + 0x170) = mobyutil::g_FrameTime * 4.0;
        auVar25 = loadVectorLeftIndexed(0x30,0x3017c8);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar25 = vectorMultiplyAddFloatingPoint
                            (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                             auVar26);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = vectorSplatHalfWord(auVar25,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar25,0x16a,uVar19);
        *(undefined2 *)((int)pvVar7 + 0x16a) = uVar8;
        uVar1 = param_1->state;
        param_1->state = '\x06';
        param_1->setByGroup = uVar1;
      }
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar19 + 0x60);
  return;
}



//==== 00301d00  ns=mobyupdate_unsorted  size=0x1af0
// sig: undefined UpdateMoby_233(MobyInstance * moby)
// callers(0): 
// callees(34): 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f0f1c mobyfunc::DetachManipulator; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000ff190 mobyutil::MB_DeltAngSpeed; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104e44 mobyutil::PointInsideComplexPoly; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00111ba0 mobyutil::MB_getTargetInArea; 0025cd18 FUN_0025cd18; 0025ce40 FUN_0025ce40; 00300950 mobyupdate_helpers::M233_00300950; 003010d0 mobyupdate_helpers::M233_003010d0; 00301800 mobyupdate_helpers::M233_00301800; 00486008 FUN_00486008; 004fffb4 fastfunc::FastDecTimerS16; 005010c0 fastfunc::FastNormalizeRMtx4; 00501980 fastfunc::FastQuaternionToEuler; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 00502a64 fastfunc::FastVecSub; 00502b08 fastfunc::FastVecAddSelf; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 233 */

void mobyupdate_unsorted::UpdateMoby_233(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  ushort uVar14;
  void *pvVar15;
  Spline *pSVar16;
  vec4 *pvVar17;
  Vec4 *pVVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined2 uVar27;
  int iVar24;
  uint uVar25;
  int iVar26;
  Spline *pSVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined4 local_1d0 [4];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 local_190 [16];
  undefined1 auStack_180 [16];
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined1 auStack_150 [64];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  MobyInstance *local_d0;
  float local_c0;
  undefined4 local_bc [7];
  
  lVar22 = (longlong)(int)moby;
  pvVar15 = moby->pVar;
  uVar29 = ZEXT48(pvVar15);
  dVar45 = (double)(moby->pos).z;
  if (*(int *)((int)pvVar15 + 0x160) == 0) {
    uVar23 = FUN_0025cd18(lVar22);
    *(undefined4 *)((int)pvVar15 + 0x160) = uVar23;
  }
  if (((moby->state != '@' && moby->state != '\0') && (*(int *)((int)pvVar15 + 0x1a4) != 0)) &&
     (g_heroType != '\x02')) {
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    *(undefined1 *)((int)pvVar15 + 0x58) = 0;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    if (iVar24 != 0) {
      *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
    }
    moby->state = '\x01';
    return;
  }
  mobyupdate_helpers::M233_00301800(lVar22);
  if ((moby->state == '\x01') || (*(int *)((int)pvVar15 + 0x194) == -1)) {
    if (moby->state == '\x01') {
      uVar23 = *(undefined4 *)((int)pvVar15 + 0x198);
    }
    else {
      uVar23 = *(undefined4 *)((int)pvVar15 + 0x19c);
    }
    *(undefined4 *)((int)pvVar15 + 0x1a0) = uVar23;
    mobyutil::MB_getTarget(lVar22);
  }
  else {
    *(undefined4 *)((int)pvVar15 + 0x1a0) = *(undefined4 *)((int)pvVar15 + 0x19c);
    mobyutil::MB_getTargetInArea
              (lVar22,&local_110,&local_110,0,0,Splines[*(int *)((int)pvVar15 + 0x194)]->points,
               Splines[*(int *)((int)pvVar15 + 0x194)]->cnt);
  }
  dVar35 = (double)(moby->pos).y;
  pvVar17 = &moby->pos;
  uVar32._0_4_ = pvVar17->x;
  uVar32._4_4_ = pvVar17->y;
  fVar2 = (float)(dVar35 - (double)local_10c);
  fVar3 = (float)((double)pvVar17->x - (double)local_110);
  fVar5 = (moby->pos).z;
  bVar1 = *(float *)((int)pvVar15 + 0x1a0) <
          SQRT((fVar5 - local_108) * (fVar5 - local_108) + fVar3 * fVar3 + fVar2 * fVar2);
  if (local_d0 == (MobyInstance *)0x0) {
    local_d0 = g_heroMobyPtr;
  }
  bVar4 = moby->state;
  if ((bVar4 != 0) && (*(char *)((int)pvVar15 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar15 + 0x160) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar15 + 0x160));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (bVar4 < 5) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        moby->shadow = ' ';
        (moby->pos).z = fVar5 + 7.5;
        *(float *)((int)pvVar15 + 0x1a8) = fVar5 + 7.5;
        *(undefined4 *)((int)pvVar15 + 0x20) = 0x40400000;
        uVar27 = fastfunc::FastDoubleToInt(0x4008000000000000);
        *(undefined2 *)((int)pvVar15 + 0x24) = uVar27;
        *(undefined1 *)((int)pvVar15 + 0x28) = 2;
        *(undefined4 *)((int)pvVar15 + 0x30) = 0x3f800000;
        *(undefined1 *)((int)pvVar15 + 0x2e) = 1;
        *(undefined1 *)((int)pvVar15 + 0x59) = 1;
        *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
        *(undefined1 *)((int)pvVar15 + 0x5a) = 6;
        moby->updateDistance = -1;
        iVar24 = *(int *)((int)pvVar15 + 0x1ac);
        moby->drawDistance = 0x80;
        if (iVar24 != -1) {
          pSVar16 = Splines[iVar24];
          if (0 < pSVar16->cnt + -2) {
            iVar24 = 0;
            pSVar28 = pSVar16;
            do {
              fVar2 = pSVar28->points[0].y - pSVar28->points[1].y;
              fVar3 = pSVar28->points[0].x - pSVar28->points[1].x;
              fVar5 = pSVar28->points[0].z - pSVar28->points[1].z;
              iVar24 = iVar24 + 1;
              pSVar28->points[0].w = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2);
              pSVar28 = (Spline *)pSVar28->points;
            } while (iVar24 < pSVar16->cnt + -2);
          }
          (moby->pos).x = pSVar16->points[0].x;
          (moby->pos).y = pSVar16->points[0].y;
          (moby->pos).z = pSVar16->points[0].z;
          (moby->pos).w = pSVar16->points[0].w;
        }
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar15 + 0x170) = 0;
        *(undefined4 *)((int)pvVar15 + 0x174) = 0;
        *(undefined4 *)((int)pvVar15 + 0x178) = 0;
        *(undefined4 *)((int)pvVar15 + 0x17c) = 0;
        *(undefined4 *)((int)pvVar15 + 0x19c) = 0x42700000;
        mobyfunc::AttachManipulator(moby,0,(int)pvVar15 + 0xd0);
        mobyfunc::AttachManipulator(moby,1,(int)pvVar15 + 0x110);
        iVar24 = *(int *)((int)pvVar15 + 0x160);
        moby->scale = moby->scale * 0.5;
        if (iVar24 != 0) {
          *(undefined1 *)(iVar24 + 0x30) = 0;
          *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) =
               *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) & 0xffbe;
          *(float *)(*(int *)((int)pvVar15 + 0x160) + 0x2c) =
               *(float *)(*(int *)((int)pvVar15 + 0x160) + 0x2c) * 0.5;
        }
        moby->collision = (ushort *)0x0;
        iVar24 = *(int *)((int)pvVar15 + 0x160);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        *(undefined1 *)((int)pvVar15 + 0x58) = 0;
        if (iVar24 != 0) {
          *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
        }
      }
      else {
        if ((*(int *)((int)pvVar15 + 0x1a4) != 0) && (g_heroType != '\x02')) {
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          iVar24 = *(int *)((int)pvVar15 + 0x160);
          *(undefined1 *)((int)pvVar15 + 0x58) = 0;
          if (iVar24 == 0) {
            return;
          }
          *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
          return;
        }
        iVar24 = *(int *)((int)pvVar15 + 400);
        if (iVar24 == -1) {
          iVar24 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar15 + 0x1b0));
          if ((iVar24 == 0) || (bVar1)) {
            if ((*(int *)((int)pvVar15 + 0x1b0) == -1) && (!bVar1)) {
              iVar24 = *(int *)((int)pvVar15 + 0x1ac);
              moby->collision = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
              moby->state = ((byte)((LZCOUNT(-1 - iVar24) << 0x3a) >> 0x3f) & 1) + 2;
              iVar24 = *(int *)((int)pvVar15 + 0x160);
              if (iVar24 != 0) {
                *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
              }
            }
            goto LAB_00303278;
          }
          iVar24 = *(int *)((int)pvVar15 + 400);
        }
        if ((iVar24 == -1) ||
           (iVar24 = mobyutil::MB_CountActiveMobysByGroup(iVar24,0x40), iVar24 == 0)) {
          iVar24 = *(int *)((int)pvVar15 + 0x1ac);
          moby->collision = moby->pClass->collision;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          *(undefined1 *)((int)pvVar15 + 0x58) = 0x19;
          moby->state = ((byte)((LZCOUNT(-1 - iVar24) << 0x3a) >> 0x3f) & 1) + 2;
          iVar24 = *(int *)((int)pvVar15 + 0x160);
          if (iVar24 != 0) {
            *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) & 0xffbe;
          }
        }
      }
    }
    else if (bVar4 < 3) {
      dVar40 = 0.0;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x1ac)];
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,pSVar16,lVar22 + 0x10,local_1f0,local_bc,
                 &local_c0);
      dVar35 = (double)fastfunc::FastIntToDouble(local_bc[0]);
      pVVar18 = pSVar16->points + pSVar16->cnt + -1;
      fVar2 = (moby->pos).y - pVVar18->y;
      dVar33 = 10.0;
      fVar3 = (moby->pos).x - pVVar18->x;
      fVar5 = (moby->pos).z - pVVar18->z;
      dVar35 = (double)((float)(dVar35 * (double)pSVar16->points[0].w + (double)local_c0) + 2.0);
      if ((*(float *)((int)pvVar15 + 0x170) * *(float *)((int)pvVar15 + 0x170)) /
          (DAT_0071f418 * 10.0 * 2.0) < SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2)) {
        fVar2 = DAT_0071f418 * 10.0 + *(float *)((int)pvVar15 + 0x170);
        *(float *)((int)pvVar15 + 0x170) = fVar2;
        if (mobyutil::g_FrameTime * 10.0 < fVar2) {
          *(float *)((int)pvVar15 + 0x170) = mobyutil::g_FrameTime * 10.0;
        }
      }
      else {
        dVar44 = -(double)(DAT_0071f418 * 10.0 - *(float *)((int)pvVar15 + 0x170));
        *(float *)((int)pvVar15 + 0x170) = (float)dVar44;
        if (dVar44 < dVar40) {
          *(undefined4 *)((int)pvVar15 + 0x170) = 0;
        }
      }
      uVar25 = fastfunc::FastDoubleToInt((double)(float)(dVar35 / (double)pSVar16->points[0].w));
      dVar44 = (double)fastfunc::FastIntToDouble();
      dVar46 = (double)pSVar16->points[0].w;
      fVar2 = (float)(-(double)(float)(dVar44 * dVar46 - dVar35) / dVar46);
      if (pSVar16->cnt + -1 <= (int)uVar25) {
        uVar25 = pSVar16->cnt - 2;
        fVar2 = 1.0;
      }
      fVar3 = pSVar16->points[uVar25 + 1].x;
      fVar5 = pSVar16->points[uVar25].x;
      fVar6 = pSVar16->points[uVar25 + 1].y;
      fVar7 = pSVar16->points[uVar25].y;
      fVar8 = pSVar16->points[uVar25 + 1].z;
      fVar9 = pSVar16->points[uVar25].z;
      fVar10 = pSVar16->points[uVar25].x;
      fVar11 = pSVar16->points[uVar25].y;
      fVar12 = pSVar16->points[uVar25].z;
      fVar20 = pSVar16->points[pSVar16->cnt + -1].y - (moby->pos).y;
      fVar19 = pSVar16->points[pSVar16->cnt + -1].x - (moby->pos).x;
      if ((SQRT(fVar19 * fVar19 + fVar20 * fVar20) < 1.0) ||
         (iVar24 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)(lVar22 + 0x10),
                              (Vec4 *)Splines[*(int *)((int)pvVar15 + 0x194)]->points,
                              Splines[*(int *)((int)pvVar15 + 0x194)]->cnt), iVar24 != 0)) {
        if (bVar1) {
          moby->state = '\x04';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
      uVar32 = 0x3fb99999a0000000;
      uVar41 = 0x3fd3333340000000;
      uVar43 = 0x3f847ae140000000;
      if ((int)((ulonglong)uVar25 + 1) < pSVar16->cnt + -8) {
        iVar24 = (int)(((ulonglong)uVar25 + 1 & 0xffffffff) << 4);
        dVar35 = (double)(moby->rotation).z;
        uVar30 = FUN_005e8338((double)(*(float *)((int)&pSVar16->points[0].x + iVar24) -
                                      (moby->pos).x),
                              (double)(*(float *)((int)&pSVar16->points[0].y + iVar24) -
                                      (moby->pos).y));
        dVar35 = (double)mobyutil::MB_DeltAngSpeed(dVar35,uVar30,uVar43,uVar41,uVar32);
      }
      else {
        dVar35 = (double)(moby->rotation).z;
        uVar30 = FUN_005e8338((double)(local_110 - (moby->pos).x),
                              (double)(local_10c - (moby->pos).y));
        dVar35 = (double)mobyutil::MB_DeltAngSpeed(dVar35,uVar30,uVar43,uVar41,uVar32);
      }
      dVar44 = (double)(moby->pos).y;
      fVar6 = (float)((double)((fVar6 - fVar7) * fVar2 + fVar11) - dVar44);
      dVar46 = (double)(moby->pos).x;
      fVar3 = (float)((double)((fVar3 - fVar5) * fVar2 + fVar10) - dVar46);
      dVar39 = (double)(moby->pos).z;
      fVar2 = (float)((double)((fVar8 - fVar9) * fVar2 + fVar12) - dVar39);
      (moby->rotation).z = (float)dVar35;
      dVar31 = (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar6 * fVar6);
      dVar35 = dVar31;
      if ((double)*(float *)((int)pvVar15 + 0x170) - dVar31 < 0.0) {
        dVar35 = (double)*(float *)((int)pvVar15 + 0x170);
      }
      fVar5 = (float)(dVar35 / dVar31);
      dVar35 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar35 = (double)(fVar2 * fVar5);
      }
      dVar34 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar34 = (double)(fVar6 * fVar5);
      }
      dVar42 = dVar40;
      if (dVar40 - dVar31 < 0.0) {
        dVar42 = (double)(fVar3 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar35 = (double)(fVar2 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar34 = (double)(fVar6 * fVar5);
      }
      if (dVar31 - dVar40 < 0.0) {
        dVar42 = (double)(fVar3 * fVar5);
      }
      (moby->pos).z = (float)(dVar39 + dVar35);
      (moby->pos).y = (float)(dVar44 + dVar34);
      (moby->pos).x = (float)(dVar46 + dVar42);
      uVar32 = FUN_005e8338();
      dVar40 = (double)fastfunc::FastDiffRots(uVar32,(double)(moby->rotation).z);
      fVar2 = (float)(dVar40 + 1.570796251296997);
      dVar35 = (double)(float)(3.141592502593994 - dVar40);
      if (dVar40 - (double)(float)(3.141592502593994 - dVar40) < 0.0) {
        dVar35 = dVar40;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      dVar44 = (double)(float)(-3.141592502593994 - dVar40);
      if ((double)(float)(-3.141592502593994 - dVar40) - dVar35 < 0.0) {
        dVar44 = dVar35;
      }
      dVar35 = (double)(float)(dVar44 * dVar44);
      fVar5 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar5 = fVar3;
      }
      fVar2 = (float)((double)mobyutil::g_FrameTime * dVar33);
      fVar7 = fVar5 * fVar5;
      dVar33 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar44));
      dVar40 = (double)(float)(dVar35 * dVar33);
      fVar6 = fVar7 * fVar7 * fVar5;
      fVar3 = fVar7 * fVar6;
      dVar40 = (double)((*(float *)((int)pvVar15 + 0x170) * -0.34906584 *
                        ((float)(dVar35 * dVar40) * 2.601887e-06 +
                        (float)(dVar40 * -0.0001980741071747616 +
                               (double)(float)(dVar33 * 0.008333025500178337 +
                                              (double)(float)((double)(float)(dVar35 * dVar44) *
                                                              -0.16666656732559204 + dVar44))))) /
                       fVar2);
      dVar33 = 1.0471975803375244;
      dVar35 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).y,
                                  (double)((*(float *)((int)pvVar15 + 0x170) * 0.34906584 *
                                           (fVar7 * fVar3 * 2.601887e-06 +
                                           fVar3 * -0.0001980741 +
                                           fVar6 * 0.0083330255 +
                                           fVar7 * fVar5 * -0.16666657 + fVar5)) / fVar2),
                                  (double)(DAT_0071f418 * 0.5235988),
                                  (double)(DAT_0071f418 * 1.0471976),
                                  (double)(float)((double)mobyutil::g_FrameTime * 0.7853981852531433
                                                 ));
      (moby->rotation).y = (float)dVar35;
      dVar35 = (double)mobyutil::MB_DeltAngSpeed
                                 ((double)(moby->rotation).x,dVar40,
                                  (double)(float)((double)DAT_0071f418 * dVar33),
                                  (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                  (double)(mobyutil::g_FrameTime * 1.5707964));
      (moby->rotation).x = (float)dVar35;
    }
    else if (bVar4 < 4) {
      dVar33 = (double)(local_d0->pos).x;
      dVar40 = (double)(local_d0->pos).y;
      fVar2 = (local_d0->pos).w;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x194)];
      iVar24 = pSVar16->cnt;
      if (0 < iVar24) {
        iVar26 = 0;
        pSVar28 = pSVar16;
        do {
          dVar46 = (double)pSVar28->points[0].y;
          dVar44 = (double)pSVar28->points[0].x;
          fVar3 = (float)(dVar46 - dVar35);
          fVar5 = (float)(dVar44 - (double)pvVar17->x);
          if (SQRT(fVar5 * fVar5 + fVar3 * fVar3) < 9999.999) {
            fVar2 = pSVar28->points[0].w;
            dVar33 = dVar44;
            dVar40 = dVar46;
          }
          iVar26 = iVar26 + 1;
          pSVar28 = (Spline *)pSVar28->points;
        } while (iVar26 < iVar24);
      }
      uVar41._0_4_ = (local_d0->pos).x;
      uVar41._4_4_ = (local_d0->pos).y;
      uVar43._0_4_ = (local_d0->pos).z;
      uVar43._4_4_ = (local_d0->pos).w;
      mobyupdate_helpers::M233_00300950
                (lVar22,iVar24,CONCAT44((float)dVar33,(float)dVar40),
                 CONCAT44((local_d0->pos).z + 7.5,fVar2),uVar41,uVar43);
      fVar2 = (float)(dVar40 - (double)(moby->pos).y);
      fVar3 = (float)(dVar33 - (double)(moby->pos).x);
      if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 1.0) ||
         (iVar24 = mobyutil::PointInsideComplexPoly
                             ((Vec4 *)&moby->pos,(Vec4 *)pSVar16->points,pSVar16->cnt), iVar24 != 0)
         ) {
        if (bVar1) {
          moby->state = '\x04';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
    }
    else {
      uVar30._0_4_ = (local_d0->pos).x;
      uVar30._4_4_ = (local_d0->pos).y;
      uVar21._0_4_ = (local_d0->pos).z;
      uVar21._4_4_ = (local_d0->pos).w;
      pSVar16 = Splines[*(int *)((int)pvVar15 + 0x194)];
      mobyupdate_helpers::M233_00300950
                (lVar22,Splines,uVar32,CONCAT44(fVar5,(moby->pos).w),uVar30,uVar21);
      if (!bVar1) {
        iVar24 = mobyutil::PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,(Vec4 *)pSVar16->points,pSVar16->cnt);
        if (iVar24 == 0) {
          moby->state = '\x03';
        }
        else {
          moby->state = '\x05';
          *(undefined2 *)((int)pvVar15 + 0x168) = 0;
        }
      }
    }
  }
  else if (bVar4 < 8) {
    if (bVar4 < 6) {
      mobyfunc::GetBonePosition(lVar22,0,local_1d0);
      if (bVar1) {
        mobyupdate_helpers::M233_00300950(lVar22);
        moby->state = '\x04';
      }
      else {
        mobyupdate_helpers::M233_003010d0
                  (lVar22,local_1e0,CONCAT44(local_110,local_10c),CONCAT44(local_108,local_104),
                   CONCAT44(uStack_100,uStack_fc),CONCAT44(uStack_f8,uStack_f4),
                   CONCAT44(uStack_f0,uStack_ec),CONCAT44(uStack_e8,uStack_e4));
        mobyupdate_helpers::M233_00300950(lVar22);
        iVar24 = fastfunc::FastDecTimerS16(uVar29 + 0x168);
        if ((iVar24 != 0) && (*(int *)((int)pvVar15 + 0x164) == 0)) {
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x6c,0x301c64);
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar27 = storeVectorElementHalfWordIndexed(auVar47,0x168,uVar29);
          *(undefined2 *)((int)pvVar15 + 0x168) = uVar27;
          uVar23 = FUN_00486008(local_1c0,local_1d0,lVar22,(int)(animationSpeed * 240.5));
          *(undefined4 *)((int)pvVar15 + 0x164) = uVar23;
        }
      }
    }
    else {
      if (6 < bVar4) {
        uVar32 = 0;
        dVar45 = (double)mobyutil::MB_randRot();
        mobyfunc::GetBonePosition(lVar22,4,auStack_1a0);
        iVar24 = 0;
        dVar35 = 1.5707963705062866;
        do {
          dVar45 = (double)fastfunc::FastWrapRot((float)dVar45,(float)dVar35);
          fastfunc::FastVecAddSelf(auStack_180,local_190,auStack_1a0);
          iVar24 = iVar24 + 1;
        } while (iVar24 < 4);
        mobyfunc::GetBonePosition(lVar22,5,local_190);
        if (*(int *)((int)pvVar15 + 0x160) != 0) {
          FUN_0025ce40(lVar22,*(int *)((int)pvVar15 + 0x160));
          *(undefined4 *)((int)pvVar15 + 0x160) = 0;
        }
        mobyutil::MB_genericExplosion
                  (uVar32,uVar32,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
                   0x4008000000000000,0x402e000000000000,lVar22,local_1b0,lVar22 + 0x10,
                   &DAT_00301c64,2,0x14,3,4);
        mobyutil::MB_SpawnBoltsFromCrate(lVar22,0x200,0xffffffffffffffff);
        mobyfunc::DetachManipulator(moby,(int)pvVar15 + 0xd0);
        mobyfunc::DetachManipulator(moby,(int)pvVar15 + 0x110);
        moby->state = '@';
        return;
      }
      iVar24 = fastfunc::FastDecTimerS16(uVar29 + 0x16a);
      if (iVar24 == 0) {
        fVar2 = -(DAT_0071f418 * 4.0 - *(float *)((int)pvVar15 + 0x170));
        *(float *)((int)pvVar15 + 0x170) = fVar2;
        if (fVar2 < 0.0) {
          *(undefined4 *)((int)pvVar15 + 0x170) = 0;
          fVar2 = 0.0;
        }
        fVar3 = (moby->rotation).z;
        dVar31 = 1.570796251296997;
        dVar39 = 3.141592502593994;
        fVar6 = fVar3 + 1.5707963;
        dVar46 = -3.141592502593994;
        dVar44 = -0.16666656732559204;
        dVar40 = 0.008333025500178337;
        dVar33 = -0.0001980741071747616;
        dVar35 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar5 = fVar3;
        }
        fVar7 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar7 = fVar6;
        }
        fVar8 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
          fVar8 = fVar5;
        }
        fVar3 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
          fVar3 = fVar7;
        }
        fVar7 = fVar8 * fVar8;
        fVar11 = fVar3 * fVar3;
        fVar5 = fVar7 * fVar7 * fVar8;
        fVar9 = fVar11 * fVar11 * fVar3;
        fVar6 = fVar7 * fVar5;
        fVar10 = fVar11 * fVar9;
        (moby->pos).y =
             (moby->pos).y +
             -((fVar7 * fVar6 * 2.601887e-06 +
               fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8) *
              fVar2);
        (moby->pos).x =
             (moby->pos).x +
             -((fVar11 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar11 * fVar3 * -0.16666657 + fVar3)
              * fVar2);
        uVar32 = FUN_005e8338();
        dVar34 = (double)fastfunc::FastDiffRots(uVar32,(double)(moby->rotation).z);
        dVar42 = (double)(float)(dVar34 + dVar31);
        dVar31 = (double)(float)(dVar39 - dVar34);
        if (dVar34 - (double)(float)(dVar39 - dVar34) < 0.0) {
          dVar31 = dVar34;
        }
        dVar36 = (double)(float)(dVar39 - dVar42);
        if (dVar42 - (double)(float)(dVar39 - dVar42) < 0.0) {
          dVar36 = dVar42;
        }
        dVar39 = (double)(float)(dVar46 - dVar34);
        if ((double)(float)(dVar46 - dVar34) - dVar31 < 0.0) {
          dVar39 = dVar31;
        }
        dVar34 = (double)(float)(dVar39 * dVar39);
        dVar31 = (double)(float)(dVar46 - dVar42);
        if ((double)(float)(dVar46 - dVar42) - dVar36 < 0.0) {
          dVar31 = dVar36;
        }
        dVar42 = (double)(float)(dVar31 * dVar31);
        dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar39));
        dVar38 = (double)(float)(dVar34 * dVar36);
        dVar37 = (double)(float)(dVar42 * (double)(float)(dVar42 * dVar31));
        dVar46 = (double)(float)(dVar42 * dVar37);
        dVar34 = (double)((*(float *)((int)pvVar15 + 0x170) * -0.34906584 *
                          (float)((double)(float)(dVar34 * dVar38) * dVar35 +
                                 (double)(float)(dVar38 * dVar33 +
                                                (double)(float)(dVar36 * dVar40 +
                                                               (double)(float)((double)(float)(
                                                  dVar34 * dVar39) * dVar44 + dVar39))))) /
                         (mobyutil::g_FrameTime * 10.0));
        dVar39 = 1.0471975803375244;
        dVar35 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).y,
                                    (double)((*(float *)((int)pvVar15 + 0x170) * 0.34906584 *
                                             (float)((double)(float)(dVar42 * dVar46) * dVar35 +
                                                    (double)(float)(dVar46 * dVar33 +
                                                                   (double)(float)(dVar37 * dVar40 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar42 * dVar31) * dVar44 + dVar31)
                                                  )))) / (mobyutil::g_FrameTime * 10.0)),
                                    (double)(DAT_0071f418 * 0.5235988),
                                    (double)(DAT_0071f418 * 1.0471976),
                                    (double)(mobyutil::g_FrameTime * 0.7853982));
        (moby->rotation).y = (float)dVar35;
        dVar35 = (double)mobyutil::MB_DeltAngSpeed
                                   ((double)(moby->rotation).x,dVar34,
                                    (double)(float)((double)DAT_0071f418 * dVar39),
                                    (double)(float)((double)DAT_0071f418 * 2.094395160675049),
                                    (double)(mobyutil::g_FrameTime * 1.5707964));
        (moby->rotation).x = (float)dVar35;
      }
      else {
        moby->state = moby->setByGroup;
      }
    }
  }
  else if (bVar4 == 0x40) {
    moby->collision = (ushort *)0x0;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    *(undefined1 *)((int)pvVar15 + 0x58) = 0;
    if (iVar24 != 0) {
      *(ushort *)(iVar24 + 0x34) = *(ushort *)(iVar24 + 0x34) | 0x41;
    }
    uVar13 = moby->uid;
    (&DAT_00a53964)[(short)uVar13] = 0;
    iVar26 = (int)((longlong)((int)(short)uVar13 >> 5) << 2);
    (&DAT_00a545c4)[(short)uVar13] = 0;
    uVar14 = moby->uid;
    iVar24 = (int)((longlong)((int)(short)uVar14 >> 5) << 2);
    uVar25 = *(uint *)(&DAT_00a54dd0 + iVar24);
    *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar26) =
         *(uint *)(&DAT_00a0cd1c + Level * 0x100 + iVar26) & ~(1 << (uVar13 & 0x1f));
    bVar1 = g_heroType == '\x02';
    *(uint *)(&DAT_00a54dd0 + iVar24) = uVar25 & ~(1 << (uVar14 & 0x1f));
    if (bVar1) {
      return;
    }
    fVar2 = moby->scale;
    (moby->pos).z = *(float *)((int)pvVar15 + 0x1a8) - 7.5;
    moby->state = '\0';
    moby->scale = fVar2 * 2.0;
    return;
  }
LAB_00303278:
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 40.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar22);
  }
  if (moby->state != '\x01') {
    dVar35 = (double)(moby->pos).z;
    dVar33 = (double)mobyutil::g_FrameTime;
    if ((float)(dVar33 * 10.0) < ABS((float)(dVar35 - dVar45))) {
      fVar2 = -(float)(dVar33 * 10.0 - dVar45);
      if (dVar45 - dVar35 < 0.0) {
        fVar2 = (float)(dVar33 * 10.0 + dVar45);
      }
      (moby->pos).z = fVar2;
    }
  }
  dVar46 = 1.570796251296997;
  dVar44 = 3.141592502593994;
  fVar2 = *(float *)((int)pvVar15 + 0x16c) + 1.5707963;
  dVar40 = -3.141592502593994;
  dVar33 = -0.16666656732559204;
  dVar35 = 0.008333025500178337;
  dVar45 = -0.0001980741071747616;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  dVar39 = 2.601886990305502e-06;
  fVar5 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = fVar5 * fVar5;
  fVar2 = fVar6 * fVar6 * fVar5;
  fVar3 = fVar6 * fVar2;
  (moby->pos).z =
       -(DAT_007ff300 *
         (fVar6 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) -
        (moby->pos).z);
  dVar42 = 6.2831854820251465;
  dVar31 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar15 + 0x16c),
                              6.2831855 / (animationSpeed * DAT_007ff2fc * 60.0));
  dVar34 = (double)(float)(dVar31 + dVar46);
  *(float *)((int)pvVar15 + 0x16c) = (float)dVar31;
  dVar46 = (double)(float)(dVar44 - dVar34);
  if (dVar34 - (double)(float)(dVar44 - dVar34) < 0.0) {
    dVar46 = dVar34;
  }
  dVar44 = (double)(float)(dVar40 - dVar34);
  if ((double)(float)(dVar40 - dVar34) - dVar46 < 0.0) {
    dVar44 = dVar46;
  }
  iVar24 = *(int *)((int)pvVar15 + 0x160);
  dVar40 = (double)(float)(dVar44 * dVar44);
  dVar31 = (double)(float)(dVar40 * (double)(float)(dVar40 * dVar44));
  dVar46 = (double)(float)(dVar40 * dVar31);
  (moby->pos).z =
       DAT_007ff300 *
       (float)((double)(float)(dVar40 * dVar46) * dVar39 +
              (double)(float)(dVar46 * dVar45 +
                             (double)(float)(dVar31 * dVar35 +
                                            (double)(float)((double)(float)(dVar40 * dVar44) *
                                                            dVar33 + dVar44)))) + (moby->pos).z;
  if (iVar24 != 0) {
    *(f32 *)(iVar24 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar24 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar24 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar24 + 0x1c) = (moby->pos).w;
    iVar24 = *(int *)((int)pvVar15 + 0x160);
    *(f32 *)(iVar24 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar24 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar24 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar24 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar15 + 0x160));
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar15 + 0x160));
    *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar15 + 0x160) + 0x34) | 6;
  }
  iVar24 = *(int *)((int)pvVar15 + 0x164);
  dVar45 = 3.1415927410125732;
  dVar35 = 12.566370964050293;
  if ((((iVar24 == 0) || (*(short *)(iVar24 + 0xa6) != 0x350)) || (*(char *)(iVar24 + 0x20) == -2))
     || (*(char *)(iVar24 + 0x20) == -3)) {
    mobyfunc::GetBonePosition(lVar22,0,auStack_210);
    fastfunc::FastVecSub(&local_170,&local_110,auStack_210);
    fastfunc::FastNormalizeRMtx4(auStack_150,lVar22 + 0xc0);
    FUN_005e825c(local_200,local_200,auStack_150);
    dVar33 = (double)*(float *)((int)pvVar15 + 0x180);
    uVar32 = FUN_005e8338((double)local_170,(double)local_16c);
    dVar35 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar33,uVar32,(double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(float)((double)DAT_0071f418 * dVar35),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar42));
    *(float *)((int)pvVar15 + 0x180) = (float)dVar35;
    dVar33 = (double)*(float *)((int)pvVar15 + 0x188);
    dVar35 = (double)FUN_005e8338((double)SQRT(local_170 * local_170 + local_16c * local_16c),
                                  (double)local_168);
    dVar45 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar33,-dVar35,(double)(float)((double)DAT_0071f418 * dVar45),
                                (double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(mobyutil::g_FrameTime * 1.5707964));
    *(float *)((int)pvVar15 + 0x188) = (float)dVar45;
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x180),uVar29 + 0xe0,2);
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x188),uVar29 + 0x120,2);
    *(undefined4 *)((int)pvVar15 + 0x164) = 0;
  }
  else {
    mobyfunc::GetBonePosition(lVar22,0,auStack_210);
    fastfunc::FastVecSub(&local_160,(ulonglong)*(uint *)((int)pvVar15 + 0x164) + 0x10,auStack_210);
    fastfunc::FastNormalizeRMtx4(auStack_150,lVar22 + 0xc0);
    FUN_005e825c(local_200,local_200,auStack_150);
    dVar33 = (double)*(float *)((int)pvVar15 + 0x180);
    uVar32 = FUN_005e8338((double)local_160,(double)local_15c);
    dVar35 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar33,uVar32,(double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(float)((double)DAT_0071f418 * dVar35),
                                (double)(float)((double)mobyutil::g_FrameTime * dVar42));
    *(float *)((int)pvVar15 + 0x180) = (float)dVar35;
    dVar33 = (double)*(float *)((int)pvVar15 + 0x188);
    dVar35 = (double)FUN_005e8338((double)SQRT(local_160 * local_160 + local_15c * local_15c),
                                  (double)local_158);
    dVar45 = (double)mobyutil::MB_DeltAngSpeed
                               (dVar33,-dVar35,(double)(float)((double)DAT_0071f418 * dVar45),
                                (double)(float)((double)DAT_0071f418 * dVar42),
                                (double)(mobyutil::g_FrameTime * 1.5707964));
    *(float *)((int)pvVar15 + 0x188) = (float)dVar45;
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x180),uVar29 + 0xe0,2);
    fastfunc::FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x188),uVar29 + 0x120,2);
  }
  return;
}



//==== 003037f0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M234_003037f0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M234_003037f0(void)

{
  DAT_007ff350 = 0x10000;
  return;
}



//==== 00303818  ns=mobyupdate_helpers  size=0x194
// sig: undefined M234_00303818(void)
// callers(1): 00304418 mobyupdate_unsorted::UpdateMoby_234
// callees(1): 003a01e0 FUN_003a01e0

void mobyupdate_helpers::M234_00303818(undefined4 param_1)

{
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  FUN_003a01e0(param_1,local_10,local_20);
  return;
}



//==== 003039ac  ns=mobyupdate_helpers  size=0xd4
// sig: undefined M234_003039ac(void)
// callers(2): 00303a90 mobyupdate_helpers::M234_00303a90; 00304418 mobyupdate_unsorted::UpdateMoby_234
// callees(1): 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M234_003039ac(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  Spline *pSVar9;
  int iVar10;
  longlong lVar11;
  
  iVar8 = *(int *)(param_1 + 0x78);
  pSVar9 = Splines[*(int *)(iVar8 + 0xd0)];
  lVar11 = fastfunc::FastDoubleToInt((double)*(float *)(iVar8 + 0xe0));
  iVar10 = (int)(lVar11 << 4);
  fVar1 = *(float *)(iVar8 + 0xe0);
  fVar2 = *(float *)((int)&pSVar9->points[1].x + iVar10);
  fVar3 = *(float *)((int)&pSVar9->points[0].x + iVar10);
  fVar4 = *(float *)((int)&pSVar9->points[1].y + iVar10);
  fVar5 = *(float *)((int)&pSVar9->points[0].y + iVar10);
  fVar6 = *(float *)((int)&pSVar9->points[1].z + iVar10);
  fVar7 = *(float *)((int)&pSVar9->points[0].z + iVar10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)&pSVar9->points[1].w + iVar10);
  fVar1 = fVar1 - (float)(longlong)(int)lVar11;
  *(float *)(param_1 + 0x10) = fVar1 * (fVar2 - fVar3) + fVar3;
  *(float *)(param_1 + 0x14) = fVar1 * (fVar4 - fVar5) + fVar5;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar6 - fVar7) + fVar7;
  *(undefined4 *)(iVar8 + 0xf0) = *(undefined4 *)((int)&pSVar9->points[0].w + iVar10);
  return;
}



//==== 00303a90  ns=mobyupdate_helpers  size=0x204
// sig: undefined M234_00303a90(void)
// callers(1): 00304418 mobyupdate_unsorted::UpdateMoby_234
// callees(2): 00109c30 mobyutil::OrganicDelt; 003039ac mobyupdate_helpers::M234_003039ac

bool mobyupdate_helpers::M234_00303a90(int param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  Spline *pSVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar11;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  
  lVar2 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar6 = (ulonglong *)lVar2;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x16] = in_LR;
  puVar6[0x13] = unaff_r31;
  puVar6[0x10] = unaff_r28;
  fVar22 = g_heroPosition.y - *(float *)(param_1 + 0x14);
  fVar7 = g_heroPosition.x - *(float *)(param_1 + 0x10);
  fVar8 = g_heroPosition.z - *(float *)(param_1 + 0x18);
  puVar6[0x11] = unaff_r29;
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar11 = (ulonglong)uVar3;
  puVar6[0x12] = unaff_r30;
  fVar10 = DAT_0071f418;
  fVar9 = mobyutil::g_FrameTime;
  pSVar4 = Splines[*(int *)(uVar3 + 0xd0)];
  *(float *)(puVar6 + 0xe) = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar22 * fVar22);
  *(float *)((int)puVar6 + 0x74) = *(float *)(uVar3 + 0xdc) - DAT_00969e40;
  fVar22 = mobyutil::OrganicDelt
                     (*(float *)(uVar3 + 0xd4),fVar10 * 10.0,fVar10 * 10.0,fVar9 * 60.0,
                      (float *)(puVar6 + 0xe),0x303a80,(float *)((int)puVar6 + 0x74));
  auVar12 = ZEXT416(0);
  auVar17 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = loadVectorLeftIndexed(0x160,0x969ce0);
  auVar13 = loadVectorLeftIndexed(0x74,lVar2);
  auVar13 = vectorAddFloatingPoint(auVar13,auVar12);
  auVar16 = loadVectorLeftIndexed(0xe0,uVar11);
  auVar14 = loadVectorRightIndexed(0xf0,uVar11);
  auVar15 = loadVectorLeftIndexed(0xe8,uVar11);
  auVar12 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  vectorCompareGreaterThanOrEqualToFloatingPoint(auVar12,auVar17);
  uVar5 = storeVectorElementWordIndexed(auVar12,0xdc,uVar11);
  *(undefined4 *)(uVar3 + 0xdc & 0xfffffffc) = uVar5;
  auVar12 = loadVectorRightIndexed(0xf8,uVar11);
  auVar15 = auVar15 | auVar12;
  if ((bool)(in_cr6 >> 1 & 1)) {
    *(undefined4 *)(uVar3 + 0xdc) = 0;
    auVar13 = auVar17;
  }
  auVar17 = vectorReciprocalEstimateFloatingPoint(auVar15);
  auVar12 = ZEXT416(0xffffffff);
  auVar18 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar21 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar12 = ZEXT416(0xffffffff);
  auVar20 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
  auVar12 = loadVectorLeftIndexed(8,0x303a80);
  auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  auVar20 = vectorShiftLeftIntegerWord(auVar20,auVar20);
  auVar13 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar12,auVar18);
  auVar18 = vectorShiftLeftIntegerWord(auVar21,auVar21);
  auVar12 = ZEXT416(1);
  auVar21 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar20);
  auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar17,auVar15,auVar19);
  auVar15 = vectorMultiplyAddFloatingPoint(auVar17,auVar15,auVar18);
  auVar13 = vectorMultiplyAddFloatingPoint
                      (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                       auVar16 | auVar14);
  auVar15 = loadVectorLeftIndexed(in_LR,ZEXT48(pSVar4));
  auVar12 = vectorSubtractUnsignedWordModulo
                      (auVar15,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
  auVar14 = vectorConvertFromSignedFixedPointWord(auVar12,0);
  auVar12 = auVar13 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar13 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
  uVar5 = storeVectorElementWordIndexed(auVar13,0xe0,uVar11);
  *(undefined4 *)(uVar3 + 0xe0 & 0xfffffffc) = uVar5;
  auVar12 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
  vectorCompareGreaterThanOrEqualToFloatingPoint
            (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
  bVar1 = (bool)(in_cr6 >> 1 & 1);
  if (bVar1) {
    M234_003039ac((double)fVar22,param_1);
  }
  else {
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar12 = loadVectorLeftIndexed(0xc,0x303a80);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = vectorSubtractFloatingPoint
                        (auVar13,auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0xe0,uVar11);
    *(undefined4 *)(uVar3 + 0xe0 & 0xfffffffc) = uVar5;
  }
  return !bVar1;
}



//==== 00303ca8  ns=mobyupdate_helpers  size=0x754
// sig: undefined M234_00303ca8(void)
// callers(1): 00304418 mobyupdate_unsorted::UpdateMoby_234
// callees(9): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010581c mobyutil::SetCollDamIn; 00105ab4 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby

void mobyupdate_helpers::M234_00303ca8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  f32 fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  longlong lVar13;
  longlong lVar14;
  longlong lVar17;
  float *pfVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x28] = in_LR;
  puVar9[0x24] = in_f30;
  puVar9[0x25] = in_f31;
  puVar9[0x23] = unaff_r31;
  puVar9[0x22] = unaff_r30;
  pvVar8 = param_1->pVar;
  uVar21 = ZEXT48(pvVar8);
  dVar29 = 0.0;
  puVar9[0x21] = unaff_r29;
  *(undefined4 *)((int)puVar9 + 0xa4) = 0;
  iVar15 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar16 = mobyutil::MB_HandleDamage
                     (param_1,iVar15,uVar21 + 0x20,0,puVar9 + 0x14,(int)puVar9 + 0xa4,0,4);
  if ((*(int *)(puVar9 + 0x14) == 1) || (param_1->state == '\x05')) {
    if ((DAT_00969f1c == param_1) || (DAT_00969f20 == param_1)) {
      dVar28 = 1.0;
      mobyutil::SetCollDamIn(0x3ff0000000000000,uVar12 - 0xc0,param_1,1);
      *(MOBY_OCLASSES *)((int)puVar9 + 0x8a) = param_1->oClass;
      pMVar11 = g_heroMobyPtr;
      *(undefined4 *)((int)puVar9 + 0x4c) = *(undefined4 *)((int)puVar9 + 0x7c);
      *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(puVar9 + 0xf);
      *(undefined4 *)((int)puVar9 + 0x44) = *(undefined4 *)((int)puVar9 + 0x74);
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar9 + 0xe);
      *(undefined4 *)((int)puVar9 + 0x5c) = *(undefined4 *)((int)puVar9 + 0x8c);
      *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(puVar9 + 0x11);
      *(undefined4 *)((int)puVar9 + 0x54) = *(undefined4 *)((int)puVar9 + 0x84);
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar9 + 0x10);
      *(undefined4 *)((int)puVar9 + 0x6c) = *(undefined4 *)((int)puVar9 + 0x9c);
      *(undefined4 *)(puVar9 + 0xd) = *(undefined4 *)(puVar9 + 0x13);
      *(undefined4 *)((int)puVar9 + 100) = *(undefined4 *)((int)puVar9 + 0x94);
      *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar9 + 0x12);
      mobyutil::CollDamageMobyDirect
                (pMVar11,0x60,puVar9[8],puVar9[9],puVar9[10],puVar9[0xb],puVar9[0xc],puVar9[0xd]);
      fVar6 = DAT_007ff37c * DAT_0071f418;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar8 + 0x80) = fVar6;
      fVar6 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_007ff378 * mobyutil::g_FrameTime;
      fVar1 = DAT_007ff374;
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
      *(float *)((int)pvVar8 + 0x8c) = fVar1 * fVar6;
      fVar6 = (param_1->pos).y - g_heroPosition.y;
      dVar23 = (double)fVar6;
      fVar1 = (param_1->pos).x - g_heroPosition.x;
      dVar25 = (double)fVar1;
      fVar5 = (param_1->pos).w;
      dVar27 = (double)(float)(dVar25 * dVar25 + (double)(float)(dVar23 * dVar23));
      dVar26 = dVar29;
      dVar24 = dVar29;
      if ((double)(float)SQRT(dVar27) != dVar29) {
        dVar26 = 1.0 / SQRT(dVar27);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar27 * dVar26) * dVar26 - dVar28
                                                 ) * (double)(float)(dVar26 * 0.5) + dVar26);
        dVar24 = (double)(float)(dVar25 * dVar26);
        dVar26 = (double)(float)(dVar23 * dVar26);
      }
      *(float *)(puVar9 + 0x16) = fVar1;
      *(float *)((int)puVar9 + 0xb4) = fVar6;
      *(float *)(puVar9 + 0x17) = (float)(ABS(dVar25) - ABS(dVar23));
      uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      dVar27 = ABS((double)*(float *)(puVar9 + 0x16));
      if ((double)*(float *)(puVar9 + 0x17) - dVar29 < 0.0) {
        dVar27 = ABS(dVar23);
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar9 + 0xb4));
      if ((double)*(float *)(puVar9 + 0x17) - dVar29 < 0.0) {
        dVar23 = ABS(dVar25);
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      dVar25 = dVar29;
      if (dVar29 < dVar27) {
        lVar13 = uVar12 - 0x120;
        lVar20 = uVar12 - 0x58;
        lVar17 = uVar12 - 0x68;
        lVar22 = 2;
        fVar2 = (float)(dVar23 - dVar27) / (float)(dVar23 + dVar27);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xd4) = fVar2;
        *(float *)((int)puVar9 + 0xcc) = fVar2;
        *(float *)(puVar9 + 0x1a) = fVar2;
        *(float *)(puVar9 + 0x19) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3;
        *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar2;
        *(float *)((int)puVar9 + 0xd4) = *(float *)((int)puVar9 + 0xd4) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 200) = *(float *)((int)lVar13 + 0xb8) * fVar2 * fVar2;
          iVar15 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x68;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar20;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 200) = *(float *)((int)lVar13 + 200) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar16 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 200)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar6 + fVar1);
      }
      *(float *)(puVar9 + 6) = (float)dVar24;
      *(float *)(puVar9 + 7) = (float)dVar29;
      *(float *)((int)puVar9 + 0xac) = (float)dVar25;
      *(float *)((int)puVar9 + 0x34) = (float)dVar26;
      *(f32 *)((int)puVar9 + 0x3c) = fVar5;
      mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x84,uVar21 + 0x88,uVar21 + 0x8c);
      mobyutil::MB_StartKick((double)*(float *)((int)puVar9 + 0xac),param_1,uVar21 + 0x70);
      param_1->state = '\x05';
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
  }
  else {
    MVar7 = param_1->modeBits;
    fVar6 = *(float *)((int)pvVar8 + 0x20) - *(float *)((int)puVar9 + 0xa4);
    *(float *)((int)pvVar8 + 0x20) = fVar6;
    if (((double)fVar6 <= dVar29) || (iVar16 == 1)) {
      fVar6 = DAT_007ff37c * DAT_0071f418;
      param_1->modeBits =
           MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      *(float *)((int)pvVar8 + 0x80) = fVar6;
      fVar6 = mobyutil::g_FrameTime;
      *(float *)((int)pvVar8 + 0x88) = DAT_007ff378 * mobyutil::g_FrameTime;
      fVar1 = DAT_007ff374;
      *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40f00000;
      *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41300000;
      *(float *)((int)pvVar8 + 0x8c) = fVar1 * fVar6;
      fVar6 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
      fVar1 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
      dVar24 = ABS((double)fVar6);
      dVar25 = ABS((double)fVar1);
      *(float *)((int)puVar9 + 0xbc) = fVar6;
      *(float *)(puVar9 + 0x18) = fVar1;
      *(float *)((int)puVar9 + 0xc4) = (float)(dVar24 - dVar25);
      uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
      if ((double)*(float *)((int)puVar9 + 0xc4) - dVar29 < 0.0) {
        dVar26 = dVar25;
      }
      fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
      dVar25 = ABS((double)*(float *)(puVar9 + 0x18));
      if ((double)*(float *)((int)puVar9 + 0xc4) - dVar29 < 0.0) {
        dVar25 = dVar24;
      }
      fVar1 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
      if (dVar29 < dVar26) {
        lVar13 = uVar12 - 0x120;
        lVar20 = uVar12 - 0x38;
        lVar17 = uVar12 - 0x48;
        lVar22 = 2;
        fVar2 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar9 + 0xf4) = fVar2;
        *(float *)((int)puVar9 + 0xec) = fVar2;
        *(float *)(puVar9 + 0x1e) = fVar2;
        *(float *)(puVar9 + 0x1d) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3;
        *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar2;
        *(float *)((int)puVar9 + 0xf4) = *(float *)((int)puVar9 + 0xf4) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xd8) * fVar2 * fVar2;
          iVar16 = (int)lVar17;
          lVar17 = lVar17 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar16 + 4) * fVar2 * fVar2;
          lVar20 = lVar20 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar20 = uVar12 - 0x48;
        pfVar18 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar17 = lVar20;
        do {
          fVar2 = *pfVar18;
          fVar3 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar13 + 0xe8) = *(float *)((int)lVar13 + 0xe8) * fVar2;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
          lVar17 = lVar17 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar13 = 2;
        do {
          iVar16 = (int)lVar14;
          iVar10 = (int)lVar20;
          lVar14 = lVar14 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar16 + 0xe8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar6 + fVar1);
      }
      *(float *)(puVar9 + 0x15) = (float)dVar29;
      uVar4 = *(undefined4 *)(iVar15 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar4;
      uVar4 = *(undefined4 *)(iVar15 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar4;
      mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x88,uVar21 + 0x88,uVar21 + 0x8c);
      mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0x15),param_1,uVar21 + 0x70);
      param_1->state = '\x05';
      *(undefined1 *)((int)pvVar8 + 0x67) = 0xf0;
      mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    else {
      *(undefined1 *)((int)pvVar8 + 0x67) = 0x78;
    }
    mobyutil::MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}



//==== 00304418  ns=mobyupdate_unsorted  size=0x494
// sig: undefined UpdateMoby_234(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 0010b030 mobyutil::MB_UpdateKick; 00110488 mobyutil::ClampVec3Magnitude; 00113e88 mobyutil::MB_MayaFrameTrigger; 00303818 mobyupdate_helpers::M234_00303818; 003039ac mobyupdate_helpers::M234_003039ac; 00303a90 mobyupdate_helpers::M234_00303a90; 00303ca8 mobyupdate_helpers::M234_00303ca8

/* Moby 234 */

void mobyupdate_unsorted::UpdateMoby_234(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  Spline *pSVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  Vec4 local_30;
  longlong local_20;
  
  pvVar2 = moby->pVar;
  mobyupdate_helpers::M234_00303ca8();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    uVar9 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar2 + 0x70));
    if ((uVar9 & 0x162) != 0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    if (uVar1 != '\x04') {
      if (uVar1 != '\x03') {
        if (uVar1 == '\x02') {
          iVar8 = mobyupdate_helpers::M234_00303a90(moby);
          if (iVar8 != 0) {
            moby->state = '\x04';
            return;
          }
          if (*(int *)((int)pvVar2 + 0xf0) != 0) {
            return;
          }
          auVar10 = ZEXT416(0xffffffff);
          auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
          auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
          auVar10 = loadVectorLeftIndexed(0xc,0x3043fc);
          auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar10 = vectorMultiplyAddFloatingPoint
                              (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60
                               ,auVar11);
          auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
          auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0xec,
                             ZEXT48(pvVar2));
          *(undefined4 *)((int)pvVar2 + 0xecU & 0xfffffffc) = uVar4;
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_20 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(moby,2,0,(int)(animationSpeed * 5.5));
          return;
        }
        if (uVar1 == '\x01') {
          fVar5 = (moby->pos).y - g_heroPosition.y;
          fVar6 = (moby->pos).x - g_heroPosition.x;
          if (*(float *)((int)pvVar2 + 0xd4) <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
            return;
          }
          moby->state = '\x02';
          return;
        }
        if (uVar1 != '\0') {
          return;
        }
        if ((*(int *)((int)pvVar2 + 0xd0) == -1) ||
           (pSVar3 = Splines[*(int *)((int)pvVar2 + 0xd0)], pSVar3->cnt == 0)) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar2 + 0xd8) == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        fVar5 = pSVar3->points[0].y - pSVar3->points[1].y;
        fVar6 = pSVar3->points[0].x - pSVar3->points[1].x;
        fVar7 = pSVar3->points[0].z - pSVar3->points[1].z;
        fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        *(float *)((int)pvVar2 + 0xe8) = fVar5;
        if (fVar5 == 0.0) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        auVar10 = loadVectorLeftIndexed(4,0x3043fc);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0xec,
                           ZEXT48(pvVar2));
        *(undefined4 *)((int)pvVar2 + 0xecU & 0xfffffffc) = uVar4;
        mobyupdate_helpers::M234_003039ac(moby);
        *(undefined4 *)((int)pvVar2 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar2 + 0x24) = 2;
        *(undefined1 *)((int)pvVar2 + 0x28) = 1;
        moby->state = '\x01';
        if (moby->animationId == '\0') {
          return;
        }
        local_20 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
        return;
      }
      iVar8 = mobyupdate_helpers::M234_00303a90(moby);
      if (iVar8 == 0) {
        iVar8 = mobyutil::MB_MayaFrameTrigger(5.0,moby);
        if (iVar8 == 0) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0'))
          {
            local_20 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          mobyupdate_helpers::M234_00303818(moby);
        }
      }
      else {
        if (moby->animationId != '\0') {
          local_20 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x04';
      }
    }
    iVar8 = *(int *)((int)pvVar2 + 0xd8);
    local_30.x = Cuboids[iVar8].pos.x - (moby->pos).x;
    local_30.y = Cuboids[iVar8].pos.y - (moby->pos).y;
    local_30.z = Cuboids[iVar8].pos.z - (moby->pos).z;
    local_30.w = Cuboids[iVar8].pos.w;
    mobyutil::ClampVec3Magnitude((double)(mobyutil::g_FrameTime * 30.0),&local_30);
    (moby->pos).x = (moby->pos).x + local_30.x;
    (moby->pos).y = (moby->pos).y + local_30.y;
    (moby->pos).z = (moby->pos).z + local_30.z;
  }
  return;
}



//==== 003048ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M235_003048ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M235_003048ac(void)

{
  DAT_007ff3d0 = 0x10000;
  return;
}



//==== 003048c0  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M235_003048c0(void)
// callers(1): 00447b40 mobyupdate_helpers::M795_00447b40
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcc68 mobyutil::MB_randRot

MobyInstance *
mobyupdate_helpers::M235_003048c0
          (double param_1,double param_2,int param_3,undefined8 param_4,uint param_5,int param_6,
          undefined2 param_7)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = mobyfunc::CreateMoby(AMMOCRATE_00E0|VENDOR);
  if (pMVar4 != (MobyInstance *)0x0) {
    piVar2 = (int *)pMVar4->pVar;
    fVar1 = pMVar4->scale;
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    *piVar2 = param_3;
    iVar3 = *(int *)(param_3 + 0x78);
    pMVar4->drawDistance = 0x7f;
    pMVar4->scale = (float)((double)fVar1 * param_2);
    (pMVar4->pos).x = *(f32 *)(iVar3 + 0xf0);
    (pMVar4->pos).y = *(f32 *)(iVar3 + 0xf4);
    (pMVar4->pos).z = *(f32 *)(iVar3 + 0xf8);
    (pMVar4->pos).w = *(f32 *)(iVar3 + 0xfc);
    (pMVar4->rotation).x = *(f32 *)(param_3 + 0x40);
    (pMVar4->rotation).y = *(f32 *)(param_3 + 0x44);
    (pMVar4->rotation).z = *(f32 *)(param_3 + 0x48);
    (pMVar4->rotation).w = *(f32 *)(param_3 + 0x4c);
    dVar5 = (double)mobyutil::MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    *(undefined2 *)(piVar2 + 3) = param_7;
    *(undefined2 *)((int)piVar2 + 0xe) = param_7;
    piVar2[5] = (int)(float)param_1;
    piVar2[1] = param_5;
    piVar2[2] = param_6;
    mobyfunc::SetColorOfMoby
              (pMVar4,(ulonglong)param_5 & 0xff,(ulonglong)(uint)((int)param_5 >> 8) & 0xff,
               (ulonglong)(uint)((int)param_5 >> 0x10) & 0xff);
    mobyfunc::UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}



//==== 00304a20  ns=mobyupdate_unsorted  size=0x18c
// sig: undefined UpdateMoby_235(MobyInstance * moby)
// callers(0): 
// callees(8): 000efb38 mobyfunc::DeleteMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 00117238 mobyutil::MB_AddVectorSphere; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

/* Moby 235 */

void mobyupdate_unsorted::UpdateMoby_235(MobyInstance *moby)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  s8 sVar4;
  double dVar5;
  double dVar6;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = fastfunc::FastDecTimerS16((int)piVar1 + 0xe);
  if (iVar3 == 0) {
    iVar3 = *piVar1;
    (moby->rotation).y = *(f32 *)(iVar3 + 0x44);
    (moby->rotation).z = *(f32 *)(iVar3 + 0x48);
    iVar3 = *(int *)(iVar3 + 0x78);
    (moby->pos).x = *(f32 *)(iVar3 + 0xf0);
    (moby->pos).y = *(f32 *)(iVar3 + 0xf4);
    (moby->pos).z = *(f32 *)(iVar3 + 0xf8);
    (moby->pos).w = *(f32 *)(iVar3 + 0xfc);
    piVar1[4] = (int)((float)piVar1[4] + (float)piVar1[5]);
    mobyutil::MB_AddVectorSphere(&(moby->pos).x,&(moby->pos).x);
    dVar5 = (double)fastfunc::FastWrapRot((moby->rotation).x,mobyutil::g_FrameTime * 5.2359877);
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)piVar1 + 0xe));
    dVar6 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(piVar1 + 3));
    dVar5 = (double)(float)(dVar5 / dVar6);
    uVar2 = fastfunc::FastLerpColor(dVar5,piVar1[2],piVar1[1]);
    mobyfunc::SetColorOfMoby
              (moby,uVar2 & 0xff,(ulonglong)(uint)((int)uVar2 >> 8) & 0xff,
               (ulonglong)(uint)((int)uVar2 >> 0x10) & 0xff);
    sVar4 = fastfunc::FastDoubleToInt((double)(float)(dVar5 * 128.0));
    moby->alpha = sVar4;
    moby->scale = moby->scale * (DAT_0071f408 * 0.01999998 + 1.0);
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00304bb8  ns=mobyupdate_helpers  size=0xe0
// sig: undefined M236_00304bb8(void)
// callers(0): 
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby

MobyInstance * mobyupdate_helpers::M236_00304bb8(undefined8 param_1,f32 *param_2)

{
  f32 fVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = mobyfunc::CreateMoby(AMMOCRATE_00E0|VENDOR_GUY);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0xff;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pvVar3 = pMVar4->pVar;
    pMVar4->alpha = '0';
    pMVar4->scale = pMVar4->scale * 0.5;
    mobyfunc::SetColorOfMoby(pMVar4,0xff,0x80,0);
    (pMVar4->pos).x = *param_2;
    MVar2 = pMVar4->modeBits;
    (pMVar4->pos).y = param_2[1];
    fVar1 = param_2[2];
    *(undefined4 *)((int)pvVar3 + 4) = 0xfffffec0;
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_2[3];
    pMVar4->modeBits = MVar2 | (DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION);
  }
  return pMVar4;
}



//==== 00304c98  ns=mobyupdate_unsorted  size=0x94
// sig: undefined UpdateMoby_236(MobyInstance * moby)
// callers(0): 
// callees(1): 000f0838 mobyfunc::MB_AddShortPairOffset

/* Moby 236 */

void mobyupdate_unsorted::UpdateMoby_236(MobyInstance *moby)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)moby->pVar;
  iVar3 = piVar1[1];
  iVar2 = *piVar1 + iVar3;
  *piVar1 = iVar2;
  if (iVar2 < 0x1001) {
    if (iVar2 < 0) {
      iVar3 = iVar3 + 0x1000;
      *piVar1 = iVar2 + 0x1000;
    }
  }
  else {
    iVar3 = iVar3 + -0x1000;
    *piVar1 = iVar2 + -0x1000;
  }
  mobyfunc::MB_AddShortPairOffset(moby->pClass,0,iVar3);
  moby->modeBits = moby->modeBits | (DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION);
  return;
}



//==== 00304d30  ns=mobyupdate_helpers  size=0x58
// sig: undefined M237_00304d30(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M237_00304d30(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == 'E') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = 'E';
  }
  return;
}



//==== 00304d88  ns=mobyupdate_helpers  size=0x58
// sig: undefined M237_00304d88(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M237_00304d88(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == 'E') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0x45;
  }
  return;
}



//==== 00304de0  ns=mobyupdate_helpers  size=0x58
// sig: undefined M237_00304de0(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M237_00304de0(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == 'E') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0x45;
  }
  return;
}



//==== 00304e38  ns=mobyupdate_helpers  size=0x38
// sig: undefined M237_00304e38(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M237_00304e38(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0x45;
  return;
}



//==== 00304e70  ns=mobyupdate_helpers  size=0x40
// sig: undefined M237_00304e70(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M237_00304e70(int param_1)

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



//==== 00304ef8  ns=mobyupdate_unsorted  size=0xa30
// sig: undefined UpdateMoby_237(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00105c08 mobyutil::CollDamageMobyDirect; 00106150 mobyutil::MB_RegisterLameShadow; 0010675c mobyutil::MB_damage; 0048c188 FUN_0048c188

/* Moby 237 */

void mobyupdate_unsorted::UpdateMoby_237(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *victim;
  PlayerState PVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  u8 uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  int in_r6;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar25;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x120;
  puVar6 = (ulonglong *)lVar17;
  *puVar6 = uVar14;
  puVar6[0x26] = in_LR;
  puVar6[0x21] = in_f29;
  puVar6[0x22] = in_f30;
  puVar6[0x23] = in_f31;
  puVar6[0x20] = unaff_r31;
  puVar6[0x1f] = unaff_r30;
  puVar6[0x1e] = unaff_r29;
  puVar6[0x1d] = unaff_r28;
  pvVar5 = moby->pVar;
  iVar18 = mobyutil::MB_damage(moby,0x10000,0);
  if (iVar18 == 0) {
    uVar25 = 0x3fd3333340000000;
    mobyutil::MB_RegisterLameShadow(0.3,moby);
    victim = g_heroMobyPtr;
    uVar19 = moby->state;
    if (uVar19 == 'E') {
      iVar18 = FUN_0048c188(moby,(int)pvVar5 + 0xf0);
      if (iVar18 != 0) {
        moby->state = '\x01';
        if (moby->animationId != '\x01') {
          mobyutil::MB_SetAnimation(moby,1,0,1);
        }
        *(undefined2 *)((int)pvVar5 + 0xa8) = 0;
      }
    }
    else {
      if (uVar19 != '\x04') {
        if (uVar19 != '\x03') {
          if (uVar19 == '\x02') {
            fVar3 = g_heroPosition.x - (moby->pos).x;
            fVar1 = g_heroPosition.y - (moby->pos).y;
            fVar2 = ABS(fVar3);
            fVar4 = ABS(fVar1);
            *(float *)((int)puVar6 + 0x9c) = fVar3;
            *(float *)(puVar6 + 0x14) = fVar1;
            *(float *)((int)puVar6 + 0xa4) = fVar2 - fVar4;
            dVar24 = 0.0;
            uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x9c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar6 + 0xa4) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar6 + 0x14) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar6 + 0x9c));
            if (*(float *)((int)puVar6 + 0xa4) - 0.0 < 0.0) {
              fVar3 = fVar4;
            }
            fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
            fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
            fVar8 = ABS(*(float *)(puVar6 + 0x14));
            if (*(float *)((int)puVar6 + 0xa4) - 0.0 < 0.0) {
              fVar8 = fVar2;
            }
            if (0.0 < fVar3) {
              lVar16 = uVar14 - 0x110;
              lVar20 = uVar14 - 0x58;
              lVar22 = uVar14 - 0x48;
              lVar23 = 2;
              fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
              fVar2 = fVar3 * fVar3;
              *(float *)((int)puVar6 + 0xd4) = fVar3;
              *(float *)((int)puVar6 + 0xcc) = fVar3;
              *(float *)(puVar6 + 0x1a) = fVar3;
              *(float *)(puVar6 + 0x19) = fVar3;
              fVar3 = fVar2 * fVar2;
              *(float *)((int)puVar6 + 0xcc) = *(float *)((int)puVar6 + 0xcc) * fVar2;
              *(float *)(puVar6 + 0x1a) = *(float *)(puVar6 + 0x1a) * fVar3;
              *(float *)((int)puVar6 + 0xd4) = *(float *)((int)puVar6 + 0xd4) * fVar3 * fVar2;
              do {
                *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 0xb8) * fVar3 * fVar3;
                iVar18 = (int)lVar20;
                lVar16 = lVar16 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
                lVar22 = lVar22 + 8;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              lVar23 = 4;
              lVar22 = uVar14 - 0x58;
              pfVar21 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar20 = lVar22;
              do {
                fVar3 = *pfVar21;
                fVar2 = pfVar21[1];
                pfVar21 = pfVar21 + 2;
                *(float *)((int)lVar16 + 200) = *(float *)((int)lVar16 + 200) * fVar3;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
                lVar20 = lVar20 + 8;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
              lVar16 = 2;
              do {
                iVar18 = (int)lVar17;
                iVar7 = (int)lVar22;
                lVar17 = lVar17 + 0x10;
                lVar22 = lVar22 + 0x10;
                dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 200)) +
                                  *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) +
                                 *(float *)(iVar7 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
            }
            mobyutil::OrganicDeltAngSpeed
                      (dVar24,0x3f947ae140000000,uVar25,0x3fc0000000000000,moby,0x300000,
                       (int)pvVar5 + 0x1b0);
            PVar13 = g_heroState;
            fVar2 = g_heroPosition.z;
            fVar3 = (moby->rotation).z;
            fVar1 = fVar3 + 1.5707963;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar8 = 3.1415925 - fVar1;
            if (fVar1 - (3.1415925 - fVar1) < 0.0) {
              fVar8 = fVar1;
            }
            fVar9 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar9 = fVar4;
            }
            fVar3 = -3.1415925 - fVar1;
            if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
              fVar3 = fVar8;
            }
            fVar1 = fVar9 * fVar9;
            fVar4 = fVar3 * fVar3;
            fVar11 = fVar1 * fVar1 * fVar9;
            fVar8 = fVar4 * fVar4 * fVar3;
            fVar12 = fVar1 * fVar11;
            fVar10 = fVar4 * fVar8;
            fVar1 = mobyutil::g_FrameTime * 2.0 *
                    (fVar1 * fVar12 * 2.601887e-06 +
                    fVar12 * -0.0001980741 +
                    fVar11 * 0.0083330255 + fVar1 * fVar9 * -0.16666657 + fVar9) + (moby->pos).y;
            fVar3 = mobyutil::g_FrameTime * 2.0 *
                    (fVar4 * fVar10 * 2.601887e-06 +
                    fVar10 * -0.0001980741 +
                    fVar8 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) + (moby->pos).x;
            fVar4 = fVar1 - g_heroPosition.y;
            fVar8 = fVar3 - g_heroPosition.x;
            uVar19 = moby->animationId;
            (moby->pos).x = fVar3;
            (moby->pos).y = fVar1;
            if ((((SQRT(fVar8 * fVar8 + fVar4 * fVar4) < 1.0) && (ABS((moby->pos).z - fVar2) < 2.0))
                && (PVar13 != TAKING_DAMAGE)) && (moby->state = '\x03', uVar19 != '\x03')) {
              mobyutil::MB_SetAnimation(moby,3,0,3);
              fVar3 = (moby->pos).x;
              fVar1 = (moby->pos).y;
              uVar19 = moby->animationId;
            }
            fVar1 = fVar1 - *(float *)((int)pvVar5 + 0x1a4);
            fVar3 = fVar3 - *(float *)((int)pvVar5 + 0x1a0);
            if (SQRT(fVar3 * fVar3 + fVar1 * fVar1) <= 14.0) {
              return;
            }
            moby->state = '\x04';
            if (uVar19 == '\x01') {
              return;
            }
            mobyutil::MB_SetAnimation(moby,1,0,0x3c);
            return;
          }
          if (uVar19 != '\x01') {
            if (uVar19 != '\0') {
              return;
            }
            *(f32 *)((int)pvVar5 + 0x1a0) = (moby->pos).x;
            *(f32 *)((int)pvVar5 + 0x1a4) = (moby->pos).y;
            *(f32 *)((int)pvVar5 + 0x1a8) = (moby->pos).z;
            *(f32 *)((int)pvVar5 + 0x1ac) = (moby->pos).w;
            moby->state = '\x01';
            *(undefined **)((int)pvVar5 + 0xb0) = &DAT_007ff3f4;
            if (moby->animationId == '\x01') {
              return;
            }
            mobyutil::MB_SetAnimation(moby,1,0,1);
            return;
          }
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar1 = (moby->pos).x - g_heroPosition.x;
          if (10.0 <= SQRT(fVar1 * fVar1 + fVar3 * fVar3)) {
            return;
          }
          moby->state = '\x02';
          if (moby->animationId == '\0') {
            return;
          }
          mobyutil::MB_SetAnimation(moby,0,0,0x3c);
          return;
        }
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar1 = (moby->pos).x - g_heroPosition.x;
        if (((SQRT(fVar1 * fVar1 + fVar3 * fVar3) < 1.0) &&
            (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) && (g_heroState != TAKING_DAMAGE)) {
          fVar3 = (moby->rotation).z;
          fVar1 = fVar3 + 1.5707963;
          fVar4 = 3.1415925 - fVar3;
          if (fVar3 - (3.1415925 - fVar3) < 0.0) {
            fVar4 = fVar3;
          }
          fVar2 = 3.1415925 - fVar1;
          if (fVar1 - (3.1415925 - fVar1) < 0.0) {
            fVar2 = fVar1;
          }
          fVar8 = -3.1415925 - fVar3;
          if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
            fVar8 = fVar4;
          }
          *(undefined4 *)(puVar6 + 0xf) = 0;
          fVar3 = -3.1415925 - fVar1;
          if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
            fVar3 = fVar2;
          }
          fVar1 = fVar8 * fVar8;
          fVar4 = fVar3 * fVar3;
          fVar10 = fVar1 * fVar1 * fVar8;
          fVar2 = fVar4 * fVar4 * fVar3;
          fVar11 = fVar1 * fVar10;
          fVar9 = fVar4 * fVar2;
          *(float *)((int)puVar6 + 0x74) =
               fVar1 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8;
          *(float *)(puVar6 + 0xe) =
               fVar4 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3;
          *(f32 *)(puVar6 + 0x10) = (victim->pos).x;
          *(f32 *)((int)puVar6 + 0x84) = (victim->pos).y;
          fVar3 = (victim->pos).z;
          *(float *)(puVar6 + 0x11) = fVar3;
          *(f32 *)((int)puVar6 + 0x8c) = (victim->pos).w;
          *(float *)(puVar6 + 0x11) = fVar3 + 0.75;
          mobyutil::CollDamageMobyDirect
                    (1.0,victim,moby,1,in_r6,(float *)(puVar6 + 0x10),(float *)(puVar6 + 0xe));
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\0')) {
          mobyutil::MB_SetAnimation(moby,0,0,3);
        }
      }
      fVar3 = *(float *)((int)pvVar5 + 0x1a0) - (moby->pos).x;
      fVar1 = *(float *)((int)pvVar5 + 0x1a4) - (moby->pos).y;
      pfVar21 = (float *)&mobyutil::g_atanQuadrantTable;
      fVar2 = ABS(fVar3);
      fVar4 = ABS(fVar1);
      *(float *)(puVar6 + 0x12) = fVar3;
      *(float *)((int)puVar6 + 0x94) = fVar1;
      *(float *)(puVar6 + 0x13) = fVar2 - fVar4;
      dVar24 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar6 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x94) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar6 + 0x12));
      if (*(float *)(puVar6 + 0x13) - 0.0 < 0.0) {
        fVar3 = fVar4;
      }
      fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar8 = ABS(*(float *)((int)puVar6 + 0x94));
      if (*(float *)(puVar6 + 0x13) - 0.0 < 0.0) {
        fVar8 = fVar2;
      }
      if (0.0 < fVar3) {
        lVar16 = uVar14 - 0x110;
        lVar20 = uVar14 - 0x78;
        lVar22 = uVar14 - 0x68;
        lVar23 = 2;
        fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
        fVar2 = fVar3 * fVar3;
        *(float *)((int)puVar6 + 0xb4) = fVar3;
        *(float *)((int)puVar6 + 0xac) = fVar3;
        *(float *)(puVar6 + 0x16) = fVar3;
        *(float *)(puVar6 + 0x15) = fVar3;
        fVar3 = fVar2 * fVar2;
        *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar2;
        *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar3;
        *(float *)((int)puVar6 + 0xb4) = *(float *)((int)puVar6 + 0xb4) * fVar3 * fVar2;
        do {
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0x98) * fVar3 * fVar3;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar23 = 4;
        lVar22 = uVar14 - 0x78;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar3 = *pfVar21;
          fVar2 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0xa8) = *(float *)((int)lVar16 + 0xa8) * fVar3;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar2;
          lVar20 = lVar20 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar7 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xa8)) +
                            *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
      }
      mobyutil::OrganicDeltAngSpeed
                (dVar24,0x3f947ae140000000,uVar25,0x3fc0000000000000,moby,pfVar21,
                 (int)pvVar5 + 0x1b0);
      fVar3 = (moby->rotation).z;
      fVar1 = fVar3 + 1.5707963;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar8 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar8 = fVar4;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = fVar8 * fVar8;
      fVar4 = fVar3 * fVar3;
      fVar10 = fVar1 * fVar1 * fVar8;
      fVar2 = fVar4 * fVar4 * fVar3;
      fVar11 = fVar1 * fVar10;
      fVar9 = fVar4 * fVar2;
      fVar1 = mobyutil::g_FrameTime * 2.0 *
              (fVar1 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar10 * 0.0083330255 + fVar1 * fVar8 * -0.16666657 + fVar8)
              + (moby->pos).y;
      fVar3 = mobyutil::g_FrameTime * 2.0 *
              (fVar4 * fVar9 * 2.601887e-06 +
              fVar9 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) +
              (moby->pos).x;
      (moby->pos).y = fVar1;
      (moby->pos).x = fVar3;
      fVar1 = fVar1 - *(float *)((int)pvVar5 + 0x1a4);
      fVar3 = fVar3 - *(float *)((int)pvVar5 + 0x1a0);
      if (SQRT(fVar3 * fVar3 + fVar1 * fVar1) < 1.0) {
        moby->state = '\x01';
      }
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00305928  ns=mobyupdate_helpers  size=0x14
// sig: undefined M238_00305928(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M238_00305928(void)

{
  DAT_007ff44c = 0x10000;
  return;
}



//==== 00305940  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M238_00305940(void)
// callers(0): 
// callees(2): 00104298 mobyutil::MB_SetGroupField; 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M238_00305940(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->state;
  if ((uVar1 == '\v' || uVar1 == '\t') || (uVar1 == '\r')) {
    uVar2 = 0;
  }
  else {
    uVar2 = M849_MB_Sucking(param_1);
    if ((int)uVar2 == 0) {
      if (param_1->state == '\b') {
        param_1->state = '\x01';
      }
    }
    else {
      if (param_1->group != -1) {
        mobyutil::MB_SetGroupField(param_1->group,1);
      }
      param_1->state = '\b';
    }
  }
  return uVar2;
}



//==== 003059f8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M238_003059f8(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M238_003059f8(int param_1)

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



//==== 00305a50  ns=mobyupdate_helpers  size=0x58
// sig: undefined M238_00305a50(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M238_00305a50(int param_1)

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



//==== 00305aa8  ns=mobyupdate_helpers  size=0x5c
// sig: undefined M238_00305aa8(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

undefined8 mobyupdate_helpers::M238_00305aa8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_0048afe8();
  if ((*(char *)(param_1 + 0x20) == '\t') || (*(char *)(param_1 + 0x20) == '\v')) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return uVar1;
}



//==== 00305b04  ns=mobyupdate_helpers  size=0x40
// sig: undefined M238_00305b04(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M238_00305b04(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 00305b50  ns=mobyupdate_helpers  size=0x8c
// sig: undefined M238_00305b50(void)
// callers(0): 
// callees(2): 000ffb70 mobyutil::GetGroundZ; 00109af0 mobyutil::Delt

double mobyupdate_helpers::M238_00305b50(int param_1)

{
  double dVar1;
  float fVar2;
  undefined1 local_20 [16];
  
  dVar1 = (double)mobyutil::GetGroundZ(local_20,0);
  fVar2 = mobyutil::Delt((float)dVar1,DAT_0071f418 * 27.0,(float *)(param_1 + 0x18));
  return (double)fVar2;
}



//==== 00305be0  ns=mobyupdate_helpers  size=0xfc
// sig: undefined M238_00305be0(void)
// callers(0): 
// callees(2): 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M238_00305be0(int param_1)

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



//==== 00305d08  ns=mobyupdate_helpers  size=0x408
// sig: undefined M238_00305d08(void)
// callers(1): 00307270 mobyupdate_unsorted::UpdateMoby_238
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M238_00305d08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [40];
  
  iVar4 = 0;
  dVar5 = -0.25;
  dVar6 = -0.75;
  dVar7 = 0.25;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  do {
    mobyutil::MB_randRot();
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar6);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar7);
    mobyutil::MB_randRangeFloat((float)dVar5,(float)dVar7);
    mobyutil::MB_randRangeFloat(DAT_007ff4e8,DAT_007ff4ec);
    mobyutil::MB_randRangeFloat(DAT_007ff4e8,DAT_007ff4ec);
    mobyutil::MB_randRangeFloat(DAT_007ff4d8,DAT_007ff4dc);
    mobyutil::MB_randRangeFloat(DAT_007ff4e0,DAT_007ff4e4);
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ff4f8,(float)(longlong)DAT_007ff4fc);
    uVar1 = fastfunc::FastDoubleToInt();
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ff500,(float)(longlong)DAT_007ff504);
    uVar2 = fastfunc::FastDoubleToInt();
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_007ff508,(float)(longlong)DAT_007ff50c);
    uVar3 = fastfunc::FastDoubleToInt();
    partupd::SpawnPart_2(local_f0,local_e0,local_d0,DAT_007ff510,DAT_007ff514,uVar1,uVar2,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1b);
  return;
}



//==== 00306148  ns=mobyupdate_helpers  size=0x510
// sig: undefined M238_00306148(void)
// callers(2): 00306c48 mobyupdate_helpers::M238_00306c48; 00307270 mobyupdate_unsorted::UpdateMoby_238
// callees(6): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00110950 mobyutil::MB_RandomizeVector; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt; 005027bc fastfunc::FastLerpColor

void mobyupdate_helpers::M238_00306148(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar11;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  longlong local_b0;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar11 = DAT_007ff48c;
  if (*(char *)(param_1 + 0x20) == '\x0f') {
    local_b0 = (longlong)DAT_007ff48c;
    iVar11 = fastfunc::FastDoubleToInt((double)((float)local_b0 * 1.5));
  }
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      local_e0 = *(float *)(param_1 + 0x10);
      local_dc = *(undefined4 *)(param_1 + 0x14);
      local_d8 = *(float *)(param_1 + 0x18);
      local_d4 = *(undefined4 *)(param_1 + 0x1c);
      mobyutil::MB_RandomizeVector(DAT_007ff494,&local_e0);
      dVar20 = 0.550000011920929;
      local_d8 = local_d8 + 0.55;
      dVar14 = (double)mobyutil::MB_randRot();
      dVar15 = (double)mobyutil::MB_randRangeFloat(DAT_007ff4a0,DAT_007ff4a4);
      dVar16 = (double)mobyutil::MB_randRangeFloat(DAT_007ff4a8,DAT_007ff4ac);
      if (*(char *)(param_1 + 0x20) == '\x0f') {
        dVar15 = (double)(float)(dVar15 * dVar20);
        dVar16 = (double)(float)(dVar16 * dVar20);
        local_d8 = local_d8 - 0.2;
      }
      fVar1 = (float)(dVar14 + 1.570796251296997);
      dVar20 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar20 = dVar14;
      }
      iVar13 = 0;
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
      dVar20 = (double)(float)(dVar17 * dVar17);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar17));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar14 = (double)(float)(dVar20 * dVar19);
      dVar18 = (double)mobyutil::g_FrameTime;
      local_c8 = (float)(dVar18 * dVar16);
      fVar3 = fVar5 * fVar1;
      local_b0 = (longlong)DAT_007ff4d0;
      dVar16 = 0.0;
      dVar21 = 0.5;
      local_d0 = *(float *)(iVar2 + 0x120) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
      ;
      local_cc = *(float *)(iVar2 + 0x124) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 ((float)(dVar20 * dVar14) * 2.601887e-06 +
                 (float)(dVar14 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar20 * dVar17) *
                                                       -0.16666656732559204 + dVar17))));
      local_b4 = local_c4;
      local_b8 = -(DAT_007ff4b0 * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_b0 + 0.5)) - local_c8);
      local_c0 = local_d0;
      local_bc = local_cc;
      if (0 < DAT_007ff490) {
        dVar14 = 1.5;
        dVar15 = 1.0;
        dVar20 = 2.5;
        do {
          dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar14);
          local_c4 = (float)((double)DAT_007ff4b4 * dVar17);
          local_b4 = (float)((double)DAT_007ff4b8 * dVar17);
          mobyutil::MB_RandomizeVector(DAT_007ff498,&local_e0);
          mobyutil::MB_RandomizeVector(DAT_007ff49c * mobyutil::g_FrameTime,&local_c0);
          uVar7 = DAT_007ff4c4;
          uVar6 = DAT_007ff4bc;
          mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar8 = fastfunc::FastLerpColor(uVar6,uVar7);
          uVar7 = DAT_007ff4c8;
          uVar6 = DAT_007ff4c0;
          mobyutil::MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar9 = fastfunc::FastLerpColor(uVar6,uVar7);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_007ff4cc + dVar21);
          local_b0 = (longlong)DAT_007ff4d4;
          fVar3 = animationSpeed * (float)((double)(longlong)DAT_007ff4d0 + dVar21);
          dVar17 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)local_b0 * dVar21),
                                      (float)((double)local_b0 * dVar20));
          uVar10 = fastfunc::FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          partupd::SpawnPart_2
                    (&local_e0,&local_d0,&local_c0,uVar8,uVar9,(int)fVar1,(int)fVar3,uVar10);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_007ff490);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  return;
}



//==== 00306680  ns=mobyupdate_helpers  size=0x1c8
// sig: undefined M238_00306680(void)
// callers(1): 00307270 mobyupdate_unsorted::UpdateMoby_238
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012f6b0 partupd::SpawnPart_52

void mobyupdate_helpers::M238_00306680(void)

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
  mobyutil::MB_randRangeFloat(0.0,DAT_007ff488);
  uVar2 = mobyutil::MB_randRangeFloat((float)dVar4,DAT_007ff478);
  uVar3 = mobyutil::MB_randRangeFloat(DAT_007ff478,DAT_007ff47c);
  uVar1 = mobyutil::MB_randRange(DAT_007ff480,DAT_007ff484);
  partupd::SpawnPart_52(uVar2,uVar3,local_50,DAT_007ff470,DAT_007ff474,in_r6,in_r7,uVar1);
  return;
}



//==== 00306888  ns=mobyupdate_helpers  size=0x37c
// sig: undefined M238_00306888(void)
// callers(1): 00307270 mobyupdate_unsorted::UpdateMoby_238
// callees(6): 000fc948 mobyutil::MB_SplineIntersect; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00101058 mobyutil::MB_UpdateNavMove; 00104e44 mobyutil::PointInsideComplexPoly; 00109af0 mobyutil::Delt

undefined8 mobyupdate_helpers::M238_00306888(undefined8 param_1,MobyInstance *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  local_80 = (param_2->pos).x;
  dVar17 = (double)local_80;
  local_7c = (param_2->pos).y;
  dVar18 = (double)local_7c;
  local_74 = (param_2->pos).w;
  dVar15 = (double)local_74;
  dVar19 = (double)(param_2->pos).z;
  dVar20 = 0.5;
  pvVar5 = param_2->pVar;
  local_78 = (float)(dVar19 + 0.5);
  dVar12 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&local_80,0);
  mobyutil::Delt((float)dVar12,DAT_0071f418 * 27.0,&(param_2->pos).z);
  dVar12 = 0.05000000074505806;
  mobyutil::OrganicDeltAngSpeed
            (param_1,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,param_2);
  fVar4 = (param_2->rotation).z;
  fVar1 = fVar4 + 1.5707963;
  fVar2 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar2 = fVar4;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar6 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
    fVar6 = fVar2;
  }
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar1 = fVar6 * fVar6;
  fVar2 = fVar4 * fVar4;
  fVar8 = fVar1 * fVar1 * fVar6;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar9 = fVar1 * fVar8;
  fVar7 = fVar2 * fVar3;
  local_bc = (fVar1 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6) *
             2.0;
  local_c0 = (fVar2 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
             2.0;
  dVar16 = 0.0;
  local_b8 = 0;
  uVar10 = mobyutil::MB_UpdateNavMove
                     (0x3ff0000000000000,param_2,(MobyInstance *)((int)pvVar5 + 0x180),&local_c0,
                      auStack_b0);
  if (*(int *)((int)pvVar5 + 0x2d0) != -1) {
    fVar1 = (float)(dVar18 - (double)(param_2->pos).y);
    fVar2 = (float)(dVar17 - (double)(param_2->pos).x);
    fVar3 = (float)(dVar19 - (double)(param_2->pos).z);
    local_84 = (float)dVar15;
    dVar15 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar4 = (float)(dVar12 / dVar15);
    dVar12 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar12 = (double)(fVar4 * fVar3);
    }
    dVar13 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    dVar14 = dVar16;
    if (dVar16 - dVar15 < 0.0) {
      dVar14 = (double)(fVar4 * fVar2);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar12 = (double)(fVar4 * fVar3);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar13 = (double)(fVar4 * fVar1);
    }
    if (dVar15 - dVar16 < 0.0) {
      dVar14 = (double)(fVar4 * fVar2);
    }
    local_88 = (float)(dVar19 + dVar12);
    local_8c = (float)(dVar18 + dVar13);
    local_90 = (float)(dVar17 + dVar14);
    iVar11 = mobyutil::MB_SplineIntersect
                       (*(undefined4 *)((int)pvVar5 + 0x2d0),&param_2->pos,&local_90,&local_a0);
    if (iVar11 != 0) {
      iVar11 = mobyutil::PointInsideComplexPoly
                         ((Vec4 *)&param_2->pos,
                          (Vec4 *)Splines[*(int *)((int)pvVar5 + 0x2d0)]->points,
                          Splines[*(int *)((int)pvVar5 + 0x2d0)]->cnt);
      fVar4 = (param_2->pos).z;
      fVar1 = (param_2->pos).y;
      fVar2 = (param_2->pos).x;
      if (iVar11 == 0) {
        (param_2->pos).x = local_a0;
        (param_2->pos).y = local_9c;
        (param_2->pos).z = local_98;
        (param_2->pos).w = local_94;
        fVar4 = local_98;
        fVar1 = local_9c;
        fVar2 = local_a0;
      }
      fVar3 = animationSpeed;
      if ((float)((double)mobyutil::g_FrameTime * dVar20) <=
          SQRT((float)((double)fVar4 - dVar19) * (float)((double)fVar4 - dVar19) +
               (float)((double)fVar2 - dVar17) * (float)((double)fVar2 - dVar17) +
               (float)((double)fVar1 - dVar18) * (float)((double)fVar1 - dVar18))) {
        *(undefined4 *)((int)pvVar5 + 0x2d4) = 0;
      }
      else {
        iVar11 = *(int *)((int)pvVar5 + 0x2d4) + 1;
        *(int *)((int)pvVar5 + 0x2d4) = iVar11;
        if ((int)(fVar3 * 10.5) < iVar11) {
          uVar10 = 2;
        }
      }
    }
  }
  return uVar10;
}



//==== 00306c48  ns=mobyupdate_helpers  size=0x570
// sig: undefined M238_00306c48(void)
// callers(1): 00307270 mobyupdate_unsorted::UpdateMoby_238
// callees(13): 000fc620 mobyutil::MB_randInt; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00306148 mobyupdate_helpers::M238_00306148; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M238_00306c48
               (MobyInstance *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  u8 uVar9;
  short sVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined1 auStack_80 [4];
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  pvVar2 = param_1->pVar;
  uVar11 = ZEXT48(pvVar2);
  if (*(int *)((int)pvVar2 + 0x38) != 0) {
    auVar20 = ZEXT416(0xffffffff);
    auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
    *(undefined4 *)((int)pvVar2 + 0x38) = 0;
    auVar20 = loadVectorLeftIndexed(in_LR,0x306c04);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar20 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                         auVar21);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x2c4,uVar11);
    *(undefined4 *)((int)pvVar2 + 0x2c4U & 0xfffffffc) = uVar4;
  }
  uVar9 = param_1->state;
  if ((uVar9 != '\t') && (uVar9 != '\0' && uVar9 != '\v')) {
    iVar8 = fastfunc::FastDecTimerS32(uVar11 + 0x2c4);
    uVar4 = 0x41a00000;
    if (iVar8 != 0) {
      uVar4 = 0x41400000;
    }
    *(undefined4 *)((int)pvVar2 + 0x2ac) = uVar4;
    uVar9 = param_1->state;
  }
  if (uVar9 != '\t' && *(short *)((int)pvVar2 + 0x2e8) != 0) {
    sVar10 = *(short *)((int)pvVar2 + 0x2ea) + 1;
    *(short *)((int)pvVar2 + 0x2ea) = sVar10;
    local_70 = (longlong)(int)(animationSpeed * 60.5);
    if (((((int)(animationSpeed * 60.5) * 0xf < (int)sVar10) && (param_1->enabled == '\0')) &&
        (param_1->group != -1)) &&
       (iVar8 = mobyutil::MB_CountActiveMobysByGroup(param_1->group,0xffffffffffffffff), 3 < iVar8))
    {
      iVar8 = mobyutil::MB_randInt(0x45);
      if (iVar8 == 0) {
        dVar19 = 3.1415927410125732;
        dVar12 = (double)fastfunc::FastWrapRot((param_1->rotation).z,3.1415927);
        dVar18 = 3.141592502593994;
        fVar1 = (float)(dVar12 + 1.570796251296997);
        dVar17 = -3.141592502593994;
        dVar16 = -0.16666656732559204;
        dVar15 = 0.008333025500178337;
        dVar14 = -0.0001980741071747616;
        dVar12 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        fVar6 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar7 = fVar6 * fVar6;
        fVar1 = fVar7 * fVar7 * fVar6;
        fVar5 = fVar7 * fVar1;
        local_90 = fVar7 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6;
        dVar13 = (double)fastfunc::FastWrapRot((param_1->rotation).z,(float)dVar19);
        local_88 = 0;
        dVar19 = (double)(float)(dVar18 - dVar13);
        if (dVar13 - (double)(float)(dVar18 - dVar13) < 0.0) {
          dVar19 = dVar13;
        }
        dVar18 = (double)(float)(dVar17 - dVar13);
        if ((double)(float)(dVar17 - dVar13) - dVar19 < 0.0) {
          dVar18 = dVar19;
        }
        dVar17 = (double)(float)(dVar18 * dVar18);
        dVar13 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
        dVar19 = (double)(float)(dVar17 * dVar13);
        local_8c = (float)((double)(float)(dVar17 * dVar19) * dVar12 +
                          (double)(float)(dVar19 * dVar14 +
                                         (double)(float)(dVar13 * dVar15 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar18) * dVar16 + dVar18))));
        mobyutil::CollDamageMobyDirect
                  (1.0,param_1,g_heroMobyPtr,0x10000,param_4,&(param_1->pos).x,&local_90);
      }
    }
  }
  iVar8 = mobyutil::MB_damage(param_1,0x330000,0);
  dVar12 = 0.0;
  local_7c = 0.0;
  mobyutil::MB_HandleDamage(param_1,iVar8,uVar11 + 0x20,0,auStack_80,&local_7c,0,4);
  if ((iVar8 != 0) && (param_1->state != '\b' && param_1->state != 'c')) {
    if (param_1->group != -1) {
      mobyutil::MB_SetGroupField(param_1->group,7);
    }
    if (local_7c != 0.0) {
      fVar1 = *(float *)((int)pvVar2 + 0x20) - local_7c;
      *(undefined4 *)((int)pvVar2 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar2 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar2 + 0x20) = fVar1;
      fVar6 = DAT_007ff520;
      fVar5 = mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar2 + 0x144) = 9;
      *(float *)((int)pvVar2 + 0x138) = fVar6 * fVar5;
      fVar6 = DAT_007ff51c;
      *(undefined1 *)((int)pvVar2 + 0x15d) = 0;
      *(undefined4 *)((int)pvVar2 + 0x150) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x154) = 0x3f800000;
      *(undefined4 *)((int)pvVar2 + 0x158) = 0x3f800000;
      *(float *)((int)pvVar2 + 0x13c) = fVar6 * fVar5;
      if (dVar12 < (double)fVar1) {
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_74,
                   uVar11 + 0x138,uVar11 + 0x13c);
        mobyutil::MB_StartKick((double)local_74,param_1,uVar11 + 0x120);
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        *(undefined4 *)((int)pvVar2 + 0x170) = 0xbf800000;
        *(undefined4 *)((int)pvVar2 + 0x174) = 0xbf800000;
        param_1->state = '\a';
        *(undefined1 *)((int)pvVar2 + 0x117) = 0xfa;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0xc,0x306c04);
        auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = vectorSplatHalfWord(auVar20,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar20,0x26,uVar11);
        *(undefined2 *)((int)pvVar2 + 0x26) = uVar3;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar11 + 0x110);
      }
      else {
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar1 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar2 + 0x138) = mobyutil::g_FrameTime * 8.0;
        *(float *)((int)pvVar2 + 0x13c) = fVar1 * 10.0;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar8 + 0x10),*(undefined8 *)(iVar8 + 0x18),&local_78,
                   uVar11 + 0x138,uVar11 + 0x13c);
        mobyutil::MB_StartKick((double)local_78,param_1,uVar11 + 0x120);
        *(undefined4 *)((int)pvVar2 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar2 + 0x174) = 0x41900000;
        param_1->state = 'c';
        *(undefined1 *)((int)pvVar2 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar11 + 0x110);
      }
      M238_00306148(param_1);
    }
  }
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar11 + 0x110);
  return;
}



//==== 00307270  ns=mobyupdate_unsorted  size=0x1e00
// sig: undefined UpdateMoby_238(MobyInstance * moby)
// callers(0): 
// callees(43): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00104298 mobyutil::MB_SetGroupField; 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 00104e44 mobyutil::PointInsideComplexPoly; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 001118d8 mobyutil::MB_getTarget; 001136c8 mobyutil::DoMeander; 00113e88 mobyutil::MB_MayaFrameTrigger; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 00305d08 mobyupdate_helpers::M238_00305d08; 00306148 mobyupdate_helpers::M238_00306148; 00306680 mobyupdate_helpers::M238_00306680; 00306888 mobyupdate_helpers::M238_00306888; 00306c48 mobyupdate_helpers::M238_00306c48; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e81f0 FUN_005e81f0

/* Moby 238 */

void mobyupdate_unsorted::UpdateMoby_238(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  f32 fVar9;
  u16 *puVar10;
  MobyClass *pMVar11;
  uint uVar12;
  MobyInstance *victim;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined2 uVar26;
  uint uVar22;
  int iVar23;
  ulonglong uVar21;
  undefined4 uVar24;
  int *piVar25;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined1 auStack_e0 [16];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  f32 local_b0;
  f32 local_ac;
  float local_a8;
  f32 local_a4;
  uint local_60;
  MobyInstance *local_50;
  undefined1 auStack_4c [4];
  longlong local_48;
  
  lVar18 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  mobyupdate_helpers::M238_00306c48(lVar18);
  mobyutil::MB_SetScaleCheat(0x40019999a0000000,(int)pvVar8 + 0x200);
  mobyutil::MB_getTarget((double)*(float *)((int)pvVar8 + 0x2ac),lVar18);
  fVar9 = (moby->pos).z;
  bVar1 = moby->state;
  uVar22 = (int)fVar9 >> 0x1f;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  lVar27 = (ulonglong)local_60 +
           ((LZCOUNT(-local_60) << 0x3a) >> 0x3f & ZEXT48(g_heroMobyPtr) - (ulonglong)local_60);
  if ((int)((uVar22 >> 1 ^ (uint)fVar9) - uVar22) < 0x41d00000) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  victim = (MobyInstance *)lVar27;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      iVar23 = FUN_0048c188(lVar18,(int)pvVar8 + 0x120);
      if (iVar23 != 0) {
        moby->state = '\x06';
        *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
        *(undefined2 *)((int)pvVar8 + 200) = 0;
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 7) {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,1);
      }
      uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
      if ((uVar22 & 1) != 0) {
        moby->state = '\n';
        if (moby->animationId == '\r') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar18,0xd,8,(int)(animationSpeed * 8.5));
        return;
      }
      fVar9 = (moby->pos).z;
      uVar22 = (int)fVar9 >> 0x1f;
      if ((int)((uVar22 >> 1 ^ (uint)fVar9) - uVar22) < 0x41d80000) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 6) {
      FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x280) - fVar3),
                   (double)(*(float *)((int)pvVar8 + 0x284) - fVar4));
      mobyupdate_helpers::M238_00306888(lVar18);
      fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x284);
      fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x280);
      if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) &&
         (moby->state = '\x01', moby->animationId != '\0')) {
        local_48 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar18,0,0,(int)(animationSpeed * 7.5));
      }
      fVar3 = (victim->pos).y - *(float *)((int)pvVar8 + 0x284);
      fVar4 = (victim->pos).x - *(float *)((int)pvVar8 + 0x280);
      fVar5 = (victim->pos).z - *(float *)((int)pvVar8 + 0x288);
      *(int *)((int)pvVar8 + 0x2d8) = *(int *)((int)pvVar8 + 0x2d8) + 1;
      dVar28 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if ((*(int *)((int)pvVar8 + 0x2d0) == -1) ||
         (iVar23 = mobyutil::PointInsideComplexPoly
                             (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar8 + 0x2d0)]->points
                              ,Splines[*(int *)((int)pvVar8 + 0x2d0)]->cnt), iVar23 != 0)) {
        if ((double)*(float *)((int)pvVar8 + 0x2ac) <= dVar28) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x04';
            *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
            iVar23 = mobyutil::MB_randInt(2);
            uVar2 = moby->animationId;
            if (iVar23 < 1) {
              if (iVar23 < 0) {
LAB_00308bfc:
                if (uVar2 != '\x10') {
                  local_48 = (longlong)(int)(animationSpeed * 8.5);
                  mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
                }
              }
              else if (uVar2 != '\x03') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
              }
            }
            else {
              if (1 < iVar23) goto LAB_00308bfc;
              if (uVar2 != '\x0f') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
              }
            }
          }
        }
        else {
          local_48 = (longlong)(int)(animationSpeed * 70.5);
          if ((int)(animationSpeed * 70.5) < *(int *)((int)pvVar8 + 0x2d8)) {
            if (moby->group != -1) {
              mobyutil::MB_SetGroupField(moby->group,1);
            }
            moby->state = '\x04';
            *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
            iVar23 = mobyutil::MB_randInt(2);
            uVar2 = moby->animationId;
            if (iVar23 < 1) {
              if (iVar23 < 0) {
LAB_00308ae0:
                if (uVar2 != '\x10') {
                  local_48 = (longlong)(int)(animationSpeed * 8.5);
                  mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
                }
              }
              else if (uVar2 != '\x03') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
              }
            }
            else {
              if (1 < iVar23) goto LAB_00308ae0;
              if (uVar2 != '\x0f') {
                local_48 = (longlong)(int)(animationSpeed * 8.5);
                mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
              }
            }
          }
        }
      }
      moby->setByGroup = '\0';
      goto LAB_00308f7c;
    }
    if (bVar1 == 5) {
      g_heroMobyPtr->unk58 = 1.3;
      uVar31 = FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                            (double)((victim->pos).y - (moby->pos).y));
      dVar28 = 0.20000000298023224;
      mobyutil::OrganicDeltAngSpeed
                (uVar31,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,
                 &DAT_003071b8,(int)pvVar8 + 0x2a0);
      if (((moby->updateId == moby->animationId) &&
          (iVar23 = mobyutil::MB_MayaFrameTrigger(13.0,moby), iVar23 != 0)) &&
         (ABS((moby->pos).z - (victim->pos).z) < 0.5)) {
        fVar3 = (moby->pos).y;
        fVar4 = (victim->pos).y;
        fVar5 = (moby->pos).x;
        fVar14 = fVar3 - fVar4;
        fVar6 = (victim->pos).x;
        fVar13 = fVar5 - fVar6;
        if (SQRT(fVar13 * fVar13 + fVar14 * fVar14) < 2.0) {
          dVar29 = (double)FUN_005e8338((double)(fVar6 - fVar5),(double)(fVar4 - fVar3));
          dVar29 = (double)fastfunc::FastSubRots((float)dVar29,(moby->rotation).z);
          if (dVar29 < 0.2617993950843811) {
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
            fVar13 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
              fVar13 = fVar5;
            }
            local_b8 = 0;
            fVar3 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar6 < 0.0) {
              fVar3 = fVar6;
            }
            fVar4 = fVar13 * fVar13;
            fVar5 = fVar3 * fVar3;
            fVar15 = fVar4 * fVar4 * fVar13;
            fVar6 = fVar5 * fVar5 * fVar3;
            fVar16 = fVar4 * fVar15;
            fVar14 = fVar5 * fVar6;
            local_bc = (float)((double)(fVar4 * fVar16 * 2.601887e-06 +
                                       fVar16 * -0.0001980741 +
                                       fVar15 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13
                                       ) * dVar28);
            local_c0 = (float)((double)(fVar5 * fVar14 * 2.601887e-06 +
                                       fVar14 * -0.0001980741 +
                                       fVar6 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) *
                              dVar28);
            local_b0 = (victim->pos).x;
            local_ac = (victim->pos).y;
            local_a4 = (victim->pos).w;
            local_a8 = (victim->pos).z + 0.75;
            mobyutil::CollDamageMobyDirect(1.0,victim,moby,1,0x3071b8,&local_b0,&local_c0);
          }
        }
      }
      if (((moby->field43_0x70 & 2U) != 0) &&
         (fVar3 = (moby->pos).y - (victim->pos).y, fVar4 = (moby->pos).x - (victim->pos).x,
         2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
        iVar23 = mobyutil::MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar23 < 1) {
          if (-1 < iVar23) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_00308f7c;
          }
        }
        else if (iVar23 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 4) {
      dVar29 = (double)FUN_005e8338((double)((victim->pos).x - fVar3),
                                    (double)((victim->pos).y - fVar4));
      dVar30 = (double)fastfunc::FastDiffRots(dVar29,(double)(moby->rotation).z);
      dVar28 = 0.6981316804885864;
      if ((dVar30 <= 0.6981316804885864) && (dVar28 = dVar30, dVar30 < -0.6981316804885864)) {
        dVar28 = -0.6981316804885864;
      }
      *(float *)((int)pvVar8 + 0x268) = (float)dVar28;
      fastfunc::FastWrapRot((float)dVar29,*(float *)((int)pvVar8 + 0x2a4));
      iVar23 = mobyupdate_helpers::M238_00306888(lVar18);
      if (iVar23 == 2) {
        moby->state = '\x06';
        *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
        moby->setByGroup = '\0';
      }
      else {
        iVar23 = fastfunc::FastDecTimerS32((int)pvVar8 + 0x2c0);
        if (iVar23 != 0) {
          dVar28 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          fVar3 = animationSpeed;
          *(float *)((int)pvVar8 + 0x2a4) = -*(float *)((int)pvVar8 + 0x2a4);
          *(int *)((int)pvVar8 + 0x2c0) = (int)(fVar3 * ((float)(longlong)dVar28 + 0.5));
        }
        fVar3 = (victim->pos).y;
        fVar4 = (victim->pos).x;
        fVar6 = (moby->pos).y - fVar3;
        fVar13 = (moby->pos).x - fVar4;
        fVar3 = fVar3 - *(float *)((int)pvVar8 + 0x284);
        fVar5 = (victim->pos).z;
        fVar4 = fVar4 - *(float *)((int)pvVar8 + 0x280);
        fVar14 = fVar5 - *(float *)((int)pvVar8 + 0x288);
        if (1.5 <= SQRT(fVar13 * fVar13 + fVar6 * fVar6)) {
          if ((*(float *)((int)pvVar8 + 0x2ac) + 5.5 <=
               SQRT(fVar14 * fVar14 + fVar4 * fVar4 + fVar3 * fVar3)) ||
             (4.4 <= ABS((moby->pos).z - fVar5))) {
            if ((moby->setByGroup != '\x01') && (iVar23 = mobyutil::MB_randInt(9), iVar23 == 0)) {
              moby->state = '\x06';
              *(undefined4 *)((int)pvVar8 + 0x2d8) = 0;
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
            mobyutil::MB_SetAnimation(lVar18,4,0,(int)(animationSpeed * 5.5));
          }
        }
        moby->setByGroup = '\0';
      }
      goto LAB_00308f7c;
    }
    if (bVar1 == 3) {
      uVar31 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
      mobyutil::OrganicDeltAngSpeed
                (uVar31,0x3f9eb851e0000000,0x3fd3333340000000,
                 (double)(mobyutil::g_FrameTime * 6.2831855),lVar18,&DAT_003071b8,
                 (int)pvVar8 + 0x2a0);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
        iVar23 = mobyutil::MB_randInt(2);
        uVar2 = moby->animationId;
        if (iVar23 < 1) {
          if (-1 < iVar23) {
            if (uVar2 != '\x03') {
              local_48 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
            }
            goto LAB_00308f7c;
          }
        }
        else if (iVar23 < 2) {
          if (uVar2 != '\x0f') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      goto LAB_00308f7c;
    }
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar8 + 700) == 0) {
          if (*(int *)((int)pvVar8 + 0x28c) == 0) {
            FUN_005e7e98((int)pvVar8 + 0x280,lVar18 + 0x10);
            moby->state = '\x01';
            if (moby->animationId != '\0') {
              mobyutil::MB_SetAnimation(lVar18,0,0,3);
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
          FUN_005e7e98((int)pvVar8 + 0x280,lVar18 + 0x10);
          moby->state = '\t';
          if (moby->animationId != '\f') {
            mobyutil::MB_SetAnimation(lVar18,0xc,0,3);
          }
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        }
        *(undefined4 *)((int)pvVar8 + 0x20) = 0x40000000;
        *(undefined4 *)((int)pvVar8 + 0x2c4) = 0;
        *(undefined4 *)((int)pvVar8 + 0x2b8) = 0;
        *(undefined1 *)((int)pvVar8 + 0x29) = 1;
        *(undefined1 *)((int)pvVar8 + 0x58) = 8;
        *(undefined1 *)((int)pvVar8 + 0x5a) = 5;
        *(undefined4 *)((int)pvVar8 + 0x140) = 0x200;
        uVar31 = 0x3fe0000000000000;
        *(undefined4 *)((int)pvVar8 + 0x148) = 0x3f000000;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar8 + 0x180));
        *(undefined4 *)((int)pvVar8 + 0x18c) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x188) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x180) = 0x38d;
        fVar3 = mobyutil::g_FrameTime * 5.5;
        *(uint *)((int)pvVar8 + 0x1b8) = *(uint *)((int)pvVar8 + 0x1b8) | 0x10;
        *(float *)((int)pvVar8 + 0x1a4) = fVar3;
        if (*(int *)((int)pvVar8 + 0x2dc) != 0) {
          uVar19 = idol::GetAnimDuration(0x14);
          uVar20 = idol::GetAnimDuration(0xaa);
          uVar26 = mobyutil::MB_randRange(uVar19,uVar20);
          *(undefined2 *)((int)pvVar8 + 0x2c8) = uVar26;
        }
        FUN_005e7e98((int)pvVar8 + 0x1d0,lVar18 + 0x10);
        uVar19 = idol::GetAnimDuration(0x78);
        uVar20 = idol::GetAnimDuration(700);
        uVar26 = mobyutil::MB_randRange(uVar19,uVar20);
        *(undefined2 *)((int)pvVar8 + 0x2cc) = uVar26;
        FUN_005e7e98(auStack_e0,lVar18 + 0x10);
        dVar28 = (double)mobyutil::GetGroundZ(uVar31,auStack_e0,0);
        (moby->pos).z = (float)dVar28;
        uVar22 = rand();
        if ((uVar22 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar8 + 0xd0) = &DAT_007ff534;
      }
      goto LAB_00308f7c;
    }
    dVar28 = (double)FUN_005e8548(lVar27 + 0x10,(int)pvVar8 + 0x280);
    dVar30 = (double)(moby->rotation).z;
    dVar29 = (double)FUN_005e8338((double)((victim->pos).x - (moby->pos).x),
                                  (double)((victim->pos).y - (moby->pos).y));
    dVar29 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar29);
    if ((dVar28 < (double)*(float *)((int)pvVar8 + 0x2ac)) &&
       (ABS((moby->pos).z - (victim->pos).z) < 4.0)) {
      moby->state = '\x03';
      if (0.9599310755729675 <= dVar29) {
        if (moby->animationId != '\x11') {
          uVar31 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar18,0x11,0,uVar31);
        }
      }
      else {
        if (moby->animationId != '\x02') {
          uVar31 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar18,2,0,uVar31);
        }
        moby->unk58 = 1.55;
      }
      goto LAB_00308f7c;
    }
    bVar1 = moby->setByGroup;
    if ((bVar1 & 1) == 0) {
LAB_0030776c:
      if (bVar1 != 7) {
        if (moby->animationId != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 14.5);
          mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 14.5));
        }
        local_48 = (longlong)(int)(animationSpeed * 20.5);
        if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar8 + 0x2cc)) {
          mobyutil::Delt(mobyutil::g_FrameTime * 2.5,DAT_0071f418 * 7.0,
                         (float *)((int)pvVar8 + 0x1e4));
        }
        else {
          mobyutil::Delt(0.0,DAT_0071f418 * 7.0,(float *)((int)pvVar8 + 0x1e4));
        }
        moby->unk58 = 0.8;
        mobyutil::DoMeander(0x3fd6666660000000,0x3fd0000000000000,lVar18,(int)pvVar8 + 0x1d0);
        goto LAB_00308f7c;
      }
    }
    else {
      iVar23 = mobyutil::MB_randInt(0x13);
      if (iVar23 != 0) {
        bVar1 = moby->setByGroup;
        goto LAB_0030776c;
      }
    }
    uVar21 = mobyutil::MB_randInt(0x100);
    fVar3 = *(float *)((int)pvVar8 + 0x2a8);
    if ((uVar21 & 1) != 0) {
      fVar3 = -fVar3;
      *(float *)((int)pvVar8 + 0x2a8) = fVar3;
    }
    *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
    dVar28 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
    local_48 = (longlong)(int)dVar28;
    uVar24 = idol::GetAnimDuration((int)dVar28);
    *(undefined4 *)((int)pvVar8 + 0x2c0) = uVar24;
    moby->state = '\x03';
    if (moby->animationId != '\x02') {
      local_48 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(lVar18,2,0,(int)(animationSpeed * 7.5));
    }
    moby->setByGroup = '\0';
    goto LAB_00308f7c;
  }
  if (bVar1 == 99) {
    uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar22 & 0x40) == 0) {
      dVar28 = (double)mobyfunc::BlendAnimFrame(moby);
      fVar9 = (moby->pos).z;
      uVar12 = (int)fVar9 >> 0x1f;
      if ((dVar28 <= 37.0) || (moby->updateId != moby->animationId)) {
        if ((int)((uVar12 >> 1 ^ (uint)fVar9) - uVar12) < 0x41200000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if ((uVar22 & 1) != 0) {
          mobyupdate_helpers::M238_00306680(lVar18);
        }
        goto LAB_00308f7c;
      }
    }
    moby->unk58 = 0.0;
    mobyutil::MB_SpawnBoltsFromCrate(lVar18,0,0xffffffffffffffff);
    moby->state = '\x0f';
    moby->modeBits = moby->modeBits | TRANSPARENT;
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xf) {
    mobyupdate_helpers::M238_00306680(lVar18);
    mobyupdate_helpers::M238_00306148(lVar18);
    mobyupdate_helpers::M238_00306148(lVar18);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (bVar1 == 0xe) {
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
      uVar21 = mobyutil::MB_randInt(0x100);
      fVar3 = *(float *)((int)pvVar8 + 0x2a8);
      if ((uVar21 & 1) != 0) {
        fVar3 = -fVar3;
        *(float *)((int)pvVar8 + 0x2a8) = fVar3;
      }
      *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
      dVar28 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
      *(int *)((int)pvVar8 + 0x2c0) = (int)(animationSpeed * ((float)(longlong)dVar28 + 0.5));
      iVar23 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar23 < 1) {
        if (-1 < iVar23) {
          if (uVar2 != '\x03') {
            local_48 = (longlong)(int)(animationSpeed * 8.5);
            mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
          }
          goto LAB_00308f7c;
        }
      }
      else if (iVar23 < 2) {
        if (uVar2 != '\x0f') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
        }
        goto LAB_00308f7c;
      }
      if (uVar2 != '\x10') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
      }
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xd) {
    puVar10 = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->collision = puVar10;
    uVar31 = FUN_005e8338((double)((victim->pos).x - fVar3),(double)((victim->pos).y - fVar4));
    mobyutil::OrganicDeltAngSpeed
              (uVar31,0x3f9eb851e0000000,0x3fd3333340000000,
               (double)(mobyutil::g_FrameTime * 6.2831855),lVar18,&DAT_003071b8,(int)pvVar8 + 0x2a0)
    ;
    if ((moby->field43_0x70 & 2U) == 0) goto LAB_00308f7c;
    uVar21 = mobyutil::MB_randInt(0x100);
    fVar3 = *(float *)((int)pvVar8 + 0x2a8);
    if ((uVar21 & 1) != 0) {
      fVar3 = -fVar3;
      *(float *)((int)pvVar8 + 0x2a8) = fVar3;
    }
    *(float *)((int)pvVar8 + 0x2a4) = fVar3 * 0.017453292;
    dVar28 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
    *(int *)((int)pvVar8 + 0x2c0) = (int)(animationSpeed * ((float)(longlong)dVar28 + 0.5));
    moby->state = '\x04';
    *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
    iVar23 = mobyutil::MB_randInt(2);
    uVar2 = moby->animationId;
    if (iVar23 < 1) {
      if (iVar23 < 0) {
LAB_00307d44:
        if (uVar2 != '\x10') {
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
        }
      }
      else if (uVar2 != '\x03') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
      }
    }
    else {
      if (1 < iVar23) goto LAB_00307d44;
      if (uVar2 != '\x0f') {
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
      }
    }
    moby->setByGroup = '\0';
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xc) {
    uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
    if ((uVar22 & 1) != 0) {
      moby->state = '\x0e';
      if (moby->animationId == '\t') {
        return;
      }
      local_48 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(lVar18,9,8,(int)(animationSpeed * 7.5));
      return;
    }
    if ((int)(moby->pos).z < 0) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 0xb) {
    uVar31 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x280) - fVar3),
                          (double)(*(float *)((int)pvVar8 + 0x284) - fVar4));
    mobyutil::OrganicDeltAngSpeed
              (uVar31,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar18,&DAT_003071b8,
               (int)pvVar8 + 0x2a0);
    fVar4 = (victim->pos).y - *(float *)((int)pvVar8 + 0x284);
    fVar3 = (victim->pos).z;
    fVar5 = (victim->pos).x - *(float *)((int)pvVar8 + 0x280);
    fVar6 = fVar3 - *(float *)((int)pvVar8 + 0x288);
    if (((SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)((int)pvVar8 + 0x2ac)) &&
        (ABS(*(float *)((int)pvVar8 + 0x288) - fVar3) < 8.0)) || (moby->setByGroup == '\x02')) {
      if (moby->group != -1) {
        mobyutil::MB_SetGroupField(moby->group,2);
      }
      dVar29 = (double)DAT_007ff528;
      dVar28 = (double)DAT_0071f418;
      *(undefined4 *)((int)pvVar8 + 0x134) = 0;
      moby->drawDistance = 0x40;
      *(float *)((int)pvVar8 + 0x130) = (float)(dVar29 * dVar28);
      fVar3 = DAT_007ff524 * mobyutil::g_FrameTime;
      *(float *)((int)pvVar8 + 0x138) = fVar3;
      dVar28 = (double)mobyutil::MB_computeLobVelocity
                                 ((double)fVar3,-dVar29,lVar18 + 0x10,(int)pvVar8 + 0x280,0x800000,
                                  &DAT_00720000,auStack_4c);
      *(float *)((int)pvVar8 + 0x13c) = (float)dVar28;
      *(undefined1 *)((int)pvVar8 + 0x15d) = 0;
      fVar3 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar8 + 0x144) = 5;
      mobyutil::MB_StartKick((double)fVar3,lVar18,(int)pvVar8 + 0x120,5,8,1,0);
      MVar7 = moby->modeBits;
      pMVar11 = moby->pClass;
      *(undefined4 *)((int)pvVar8 + 0x170) = 0x40a00000;
      *(undefined4 *)((int)pvVar8 + 0x174) = 0x41200000;
      moby->state = '\f';
      moby->modeBits = MVar7 | CAN_BE_AUTO_TARGETED;
      moby->collision = pMVar11->collision;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 == 10) {
    dVar28 = (double)mobyfunc::BlendAnimFrame(moby);
    if (29.0 < dVar28) {
      moby->state = '\x04';
      *(undefined4 *)((int)pvVar8 + 0x2d4) = 0;
      iVar23 = mobyutil::MB_randInt(2);
      uVar2 = moby->animationId;
      if (iVar23 < 1) {
        if (-1 < iVar23) {
          if (uVar2 == '\x03') {
            return;
          }
          local_48 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar18,3,0,(int)(animationSpeed * 8.5));
          return;
        }
      }
      else if (iVar23 < 2) {
        if (uVar2 == '\x0f') {
          return;
        }
        local_48 = (longlong)(int)(animationSpeed * 8.5);
        mobyutil::MB_SetAnimation(lVar18,0xf,0,(int)(animationSpeed * 8.5));
        return;
      }
      if (uVar2 == '\x10') {
        return;
      }
      local_48 = (longlong)(int)(animationSpeed * 8.5);
      mobyutil::MB_SetAnimation(lVar18,0x10,0,(int)(animationSpeed * 8.5));
      return;
    }
    goto LAB_00308f7c;
  }
  if (bVar1 != 9) goto LAB_00308f7c;
  if (*(int *)((int)pvVar8 + 0x2dc) != 0) {
    dVar28 = (double)FUN_005e8588(lVar18 + 0x10,lVar27 + 0x10);
    if (dVar28 < 2.0) goto LAB_00308f7c;
    piVar25 = *(int **)((int)pvVar8 + 0x2e0);
    if (*(int *)((int)pvVar8 + 0x2e4) < worldUpdateTime) {
      *(int *)((int)pvVar8 + 0x2e4) = worldUpdateTime;
      mobyutil::MB_GetFirstMobyInGroup(&local_50,(uint)(byte)moby->group,'\0','\0');
      iVar23 = 0;
      while (local_50 != (MobyInstance *)0x0) {
        if (local_50->state < 0x80 && local_50->state != 9) {
          iVar23 = iVar23 + 1;
        }
        mobyutil::MB_GetNextMobyInGroup(&local_50,local_50,'\0','\0');
      }
      piVar25 = *(int **)((int)pvVar8 + 0x2e0);
      *piVar25 = iVar23;
    }
    if (5 < *piVar25) goto LAB_00308f7c;
  }
  FUN_005e81f0(&local_d0,lVar27 + 0x10,lVar18 + 0x10);
  if (((SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
        *(float *)((int)pvVar8 + 0x2ac)) && (ABS((moby->pos).z - (victim->pos).z) < 8.0)) &&
     (iVar23 = mobyutil::MB_randInt(0x13), iVar23 == 0)) {
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    moby->state = '\r';
    if (moby->animationId != '\a') {
      mobyutil::MB_SetAnimation(lVar18,7,0,1);
    }
    uVar20._0_4_ = (moby->pos).x;
    uVar20._4_4_ = (moby->pos).y;
    uVar17._0_4_ = (moby->pos).z;
    uVar17._4_4_ = (moby->pos).w;
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    mobyupdate_helpers::M238_00305d08(uVar20,uVar17);
    goto LAB_00308f7c;
  }
  bVar1 = moby->setByGroup;
  if ((bVar1 & 1) == 0) {
LAB_00307b24:
    if (bVar1 != 7) goto LAB_00308f7c;
  }
  else {
    iVar23 = fastfunc::FastDecTimerS16((int)pvVar8 + 0x2c8);
    if (iVar23 == 0) {
      bVar1 = moby->setByGroup;
      goto LAB_00307b24;
    }
  }
  moby->state = '\r';
  if (moby->animationId != '\a') {
    mobyutil::MB_SetAnimation(lVar18,7,0,1);
  }
  uVar31._0_4_ = (moby->pos).x;
  uVar31._4_4_ = (moby->pos).y;
  uVar19._0_4_ = (moby->pos).z;
  uVar19._4_4_ = (moby->pos).w;
  moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
  mobyupdate_helpers::M238_00305d08(uVar31,uVar19);
LAB_00308f7c:
  if (((moby->enabled != '\0') && (moby->state != '\b' && moby->state != '\t')) &&
     ((mobyutil::MB_UpdateManipulatorRot
                 ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar18,
                  (int)pvVar8 + 0x200,0), moby->enabled != '\0' &&
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
      fVar5 = (moby->pos).z - GameCamera.posZ,
      SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 28.0)))) {
    mobyutil::MB_SetZBoundsFromGround(lVar18);
    moby->shadow = '\x16';
  }
  return;
}



//==== 00309070  ns=mobyupdate_helpers  size=0x14
// sig: undefined M239_00309070(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M239_00309070(void)

{
  DAT_007ff58c = 0x10000;
  return;
}



//==== 003090f8  ns=mobyupdate_unsorted  size=0x2450
// sig: undefined UpdateMoby_239(MobyInstance * moby)
// callers(0): 
// callees(43): 00057820 collproc::CollLine; 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105c08 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 00315198 FUN_00315198; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e7e18 idol::GetAnimDuration; 005e7e98 FUN_005e7e98; 005e7ebc FUN_005e7ebc; 005e7f54 FUN_005e7f54; 005e7f98 FUN_005e7f98; 005e8030 FUN_005e8030; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128; 005e81f0 FUN_005e81f0

/* Moby 239 */

void mobyupdate_unsorted::UpdateMoby_239(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  void *pvVar3;
  f32 fVar4;
  u16 *puVar5;
  int *piVar6;
  Spline *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  char cVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 local_1a0 [16];
  float local_190;
  float local_18c;
  undefined4 local_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [8];
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float afStack_130 [2];
  float local_128;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  float local_80;
  float local_7c;
  int local_78;
  float local_74 [3];
  longlong local_68;
  
  lVar12 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  uVar20 = ZEXT48(pvVar3);
  iVar13 = mobyutil::MB_damage(lVar12,0x210000,0);
  dVar24 = 0.0;
  local_7c = 0.0;
  iVar14 = mobyutil::MB_HandleDamage(moby,iVar13,uVar20 + 0x20,0,&local_78,&local_7c,0,4);
  fastfunc::FastDecTimerS32(uVar20 + 0x1a4);
  if ((((iVar14 != 0xb) && (iVar14 != 0xc)) && (local_78 != 1)) &&
     ((uVar1 = moby->state, uVar1 != '\x05' && uVar1 != 'c' && (uVar1 != '\x0f')))) {
    *(undefined4 *)((int)pvVar3 + 0x80) = 0x3c03126f;
    *(undefined4 *)((int)pvVar3 + 0x84) = 0x3a03126f;
    fVar11 = DAT_007ff5c4;
    fVar9 = mobyutil::g_FrameTime;
    fVar28 = DAT_007ff5c4 * mobyutil::g_FrameTime;
    *(undefined4 *)((int)pvVar3 + 0x94) = 9;
    *(float *)((int)pvVar3 + 0x88) = fVar28;
    fVar8 = DAT_007ff5c0;
    *(undefined1 *)((int)pvVar3 + 0xad) = 0;
    fVar8 = fVar8 * fVar9;
    *(float *)((int)pvVar3 + 0x8c) = fVar8;
    fVar10 = *(float *)((int)pvVar3 + 0x20) - local_7c;
    *(float *)((int)pvVar3 + 0x20) = fVar10;
    if ((double)fVar10 <= dVar24) {
      uVar1 = moby->state;
      if ((uVar1 == '\x0f' || uVar1 == '\v') || (uVar1 == '\x10')) {
        *(float *)((int)pvVar3 + 0x88) = fVar28 * 2.0;
        *(float *)((int)pvVar3 + 0x8c) = fVar8 * 2.0;
        if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 6;
        }
        else if (*(int *)((int)pvVar3 + 0x1a8) == 3) {
          *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 0;
          *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0xe4) = 0;
        }
        *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) = 0;
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                 uVar20 + 0x88,uVar20 + 0x8c);
      dVar22 = (double)local_80;
      idol::GetAnimDuration(5);
      mobyutil::MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
      *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
      *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
      moby->state = 'c';
    }
    else {
      uVar1 = moby->state;
      if ((uVar1 == '\x10' || uVar1 == '\v') || (uVar1 == '\x0f')) {
        if (uVar1 != '\x0f') {
          moby->setByGroup = uVar1;
        }
        moby->state = '\x0f';
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x96;
        *(uint *)((int)pvVar3 + 0x94) = *(uint *)((int)pvVar3 + 0x94) & 0xfffffff7;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_74,
                   uVar20 + 0x88,uVar20 + 0x8c);
        dVar24 = (double)local_74[0];
        idol::GetAnimDuration(5);
        mobyutil::MB_StartKick(dVar24,lVar12,uVar20 + 0x70);
        mobyutil::MB_UpdateLightsTransition(lVar12,uVar20 + 0x60);
        moby->damage = -1;
        return;
      }
      if (*(int *)(iVar13 + 0x2c) == 0x3f800000) {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x96;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                   uVar20 + 0x88,uVar20 + 0x8c);
        dVar22 = (double)local_80;
        idol::GetAnimDuration(5);
        mobyutil::MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
        *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40800000;
        *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41100000;
        moby->state = '\x05';
      }
      else {
        fVar9 = fVar11 * 2.0 * fVar9;
        if (*(int *)(iVar13 + 0x2c) == 0x40000000) {
          *(undefined1 *)((int)pvVar3 + 0x67) = 0xdc;
          *(float *)((int)pvVar3 + 0x88) = fVar9;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                     uVar20 + 0x88,uVar20 + 0x8c);
          dVar22 = (double)local_80;
          idol::GetAnimDuration(5);
          mobyutil::MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
          moby->state = '\a';
        }
        else {
          *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
          *(float *)((int)pvVar3 + 0x88) = fVar9;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),&local_80,
                     uVar20 + 0x88,uVar20 + 0x8c);
          dVar22 = (double)local_80;
          idol::GetAnimDuration(5);
          mobyutil::MB_StartKick(dVar22,lVar12,uVar20 + 0x70);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x40000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41000000;
          moby->state = '\x06';
        }
      }
    }
    mobyutil::MB_UpdateLightsTransition(lVar12,uVar20 + 0x60);
  }
  bVar2 = moby->state;
  moby->damage = -1;
  if (bVar2 < 10) {
    if (bVar2 < 4) {
      if (bVar2 == 0) {
        iVar13 = *(int *)((int)pvVar3 + 0x1a8);
        if (iVar13 < 2) {
          if (-1 < iVar13) {
            if (iVar13 < 1) {
              pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
              *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
              *(Spline **)((int)pvVar3 + 0x170) = Splines[*(int *)((int)pvVar3 + 0x174)];
              FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
              moby->drawDistance = 0;
              moby->collision = (ushort *)0x0;
              if (moby->animationId != '\a') {
                mobyutil::MB_SetAnimation(lVar12,7,0,0);
              }
              moby->state = '\n';
            }
            else {
              moby->state = '\x11';
              if (moby->animationId != '\0') {
                mobyutil::MB_SetAnimation(lVar12,0,0,3);
              }
            }
          }
        }
        else if (iVar13 < 3) {
          pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
          *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
          FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
          moby->state = '\r';
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar12,0,0,3);
          }
        }
        else if (iVar13 < 4) {
          pSVar7 = Splines[*(int *)((int)pvVar3 + 0x144)];
          *(Spline **)((int)pvVar3 + 0x140) = pSVar7;
          *(Spline **)((int)pvVar3 + 0x170) = Splines[*(int *)((int)pvVar3 + 0x174)];
          FUN_005e7e98(lVar12 + 0x10,ZEXT48(pSVar7) + 0x10);
          moby->drawDistance = 0;
          moby->collision = (ushort *)0x0;
          moby->state = '\n';
          if (moby->animationId != '\a') {
            mobyutil::MB_SetAnimation(lVar12,7,0,0);
          }
        }
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar3 + 0x29) = 1;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar3 + 0xd0));
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined4 *)((int)pvVar3 + 0xdc) = 0x40000000;
        *(undefined4 *)((int)pvVar3 + 0xd8) = 0x40000000;
        *(undefined4 *)((int)pvVar3 + 0xd0) = 0x38d;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0x40a00000;
        *(undefined4 *)((int)pvVar3 + 0xf4) = 0x3df58e22;
        *(undefined1 *)((int)pvVar3 + 0x28) = 2;
        *(undefined1 *)((int)pvVar3 + 0x58) = 10;
        *(undefined1 *)((int)pvVar3 + 0x5a) = 10;
        *(undefined4 *)((int)pvVar3 + 0x1a4) = 0;
        FUN_005e7e98(uVar20 + 0x120,lVar12 + 0x10);
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined4 *)((int)pvVar3 + 400) = uVar16;
      }
      else if (bVar2 < 2) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        lVar19 = lVar12 + 0x10;
        dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
        if (((24.0 <= dVar24) ||
            (dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition), dVar24 < 2.5)) ||
           (8.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
          dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
          if (2.5 < dVar24) {
            dVar24 = (double)FUN_005e8588(lVar19,&g_heroPosition);
            if ((29.0 < dVar24) && (moby->state = '\x11', moby->animationId != '\0')) {
              uVar21 = idol::GetAnimDuration(8);
              mobyutil::MB_SetAnimation(lVar12,0,0,uVar21);
            }
          }
          else if (*(int *)((int)pvVar3 + 400) == 0) {
            uVar16 = idol::GetAnimDuration(0x14);
            *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          }
          else {
            iVar13 = fastfunc::FastDecTimerS32(uVar20 + 400);
            if (iVar13 == 0) {
              iVar13 = *(int *)((int)pvVar3 + 400);
              iVar14 = idol::GetAnimDuration(0x14);
              if (iVar14 < iVar13) {
                uVar16 = idol::GetAnimDuration(0x14);
                *(undefined4 *)((int)pvVar3 + 400) = uVar16;
              }
            }
            else {
              moby->state = '\x04';
              if (moby->animationId != '\x01') {
                uVar21 = idol::GetAnimDuration(8);
                mobyutil::MB_SetAnimation(lVar12,1,0,uVar21);
              }
            }
          }
        }
        else {
          iVar13 = fastfunc::FastDecTimerS32(uVar20 + 400);
          if (iVar13 != 0) {
            FUN_005e7f54(auStack_1c0,lVar19,local_1a0);
            FUN_005e7f54(auStack_1b0,&g_heroPosition,local_1a0);
            iVar13 = collproc::CollLine(auStack_1c0,auStack_1b0,0,lVar12,0);
            if (((iVar13 != 0) && (CollOutput.pMoby == g_heroMobyPtr)) &&
               (moby->state = '\x02', moby->animationId != '\x06')) {
              uVar21 = idol::GetAnimDuration(5);
              mobyutil::MB_SetAnimation(lVar12,6,0,uVar21);
            }
          }
        }
      }
      else if (bVar2 < 3) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        lVar19 = lVar12 + 0x10;
        dVar22 = (double)FUN_005e8588(lVar19,&g_heroPosition);
        if ((dVar22 < 2.5) && (moby->state = '\x01', moby->animationId != '\0')) {
          uVar21 = idol::GetAnimDuration(8);
          mobyutil::MB_SetAnimation(lVar12,0,0,uVar21);
        }
        if ((moby->updateId == moby->animationId) &&
           (dVar22 = (double)mobyfunc::BlendAnimFrame(moby), dVar22 == 10.0)) {
          FUN_005e7e98(&local_150,&g_heroPosition);
          uVar21 = 0x3fe0000000000000;
          dVar22 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
          if (dVar22 != dVar24) {
            dVar24 = (double)mobyutil::GetGroundZ(uVar21,&g_heroPosition,0);
            local_148 = (float)dVar24;
          }
          FUN_005e81f0(&local_150,&local_150,lVar19);
          dVar24 = (double)FUN_005e8030(&local_150);
          uVar21 = 0x4022000000000000;
          if (9.0 < dVar24) {
            dVar23 = -1.0;
            dVar22 = 1.0;
            dVar24 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
            local_150 = (float)((double)local_150 + dVar24);
            dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar22);
            local_14c = (float)((double)local_14c + dVar24);
            FUN_005e7f98(uVar21,&local_150,&local_150);
          }
          dVar24 = (double)FUN_005e7ebc(&local_150);
          dVar22 = (double)(float)(dVar24 / (double)(DAT_007ff5b4 * animationSpeed));
          FUN_005e7f54(dVar24,(double)(DAT_007ff5b4 * animationSpeed),&local_150,&local_150,lVar19);
          mobyfunc::GetBonePosition(lVar12,9,auStack_170);
          FUN_005e81f0(auStack_160,&local_150,auStack_170);
          local_158 = 0.0;
          FUN_005e7f98(dVar22,auStack_160,auStack_160);
          dVar24 = (double)mobyutil::MB_computeLobVelocity
                                     (dVar22,-(double)(DAT_007ff5b8 * DAT_0071f418),auStack_170,
                                      &local_150);
          local_158 = (float)dVar24;
          iVar13 = FUN_00315198(lVar12,auStack_170,auStack_160);
          if (iVar13 != 0) {
            iVar14 = *(int *)(iVar13 + 0x78);
            uVar16 = idol::GetAnimDuration(0xb4);
            *(undefined4 *)(iVar14 + 0x20) = uVar16;
            *(undefined1 *)(iVar13 + 0x20) = 1;
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          uVar16 = fastfunc::FastDoubleToInt((double)(DAT_007ff5bc * animationSpeed));
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          moby->state = '\x01';
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(8);
            mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
      }
      else {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12);
        dVar24 = (double)mathfunc::cosf((moby->rotation).z);
        dVar22 = 2.0;
        local_190 = (float)(dVar24 * 2.0);
        dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_18c = (float)(dVar24 * dVar22);
        local_188 = 0;
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar3 + 0xd0),&local_190,
                   auStack_180);
        dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
        if (dVar22 <= dVar24) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((8.0 < dVar24) && (moby->state = '\x01', moby->animationId != '\f')) {
            uVar21 = idol::GetAnimDuration(8);
            mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            uVar21 = idol::GetAnimDuration(8);
            mobyutil::MB_SetAnimation(lVar12,1,0,uVar21);
          }
        }
      }
    }
    else if (bVar2 < 7) {
      if (bVar2 < 5) {
        uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                   &DAT_00309088,uVar20 + 0x194);
        if ((((moby->updateId == moby->animationId) &&
             (dVar24 = (double)mobyfunc::BlendAnimFrame(moby), 10.0 <= dVar24)) &&
            (dVar24 = (double)mobyfunc::BlendAnimFrame(moby), dVar24 < 11.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 2.0 &&
            (dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition), dVar24 < 2.5)))) {
          dVar24 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar24 = (double)fastfunc::FastSubRots((float)dVar24,(moby->rotation).z);
          if (dVar24 < 0.2617993950843811) {
            dVar24 = (double)mathfunc::cosf((moby->rotation).z);
            dVar22 = 1.350000023841858;
            local_140 = (float)(dVar24 * 1.350000023841858);
            dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_13c = (float)(dVar24 * dVar22);
            iVar13 = 0x45afdf66;
            local_138 = 0x3f0ccccd;
            local_134 = 0x45afdf66;
            FUN_005e7e98(afStack_130,&g_heroMobyPtr->pos);
            local_128 = local_128 + 0.75;
            mobyutil::CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,iVar13,afStack_130,&local_140);
          }
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->state = '\x01';
          uVar16 = idol::GetAnimDuration(0x14);
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(8);
            mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
        }
      }
      else if (bVar2 < 6) {
        fastfunc::FastDecTimerS32(uVar20 + 400);
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 1) != 0) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar24 < 3.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            uVar21 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar12,1,5,uVar21);
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          uVar21 = idol::GetAnimDuration(7);
          mobyutil::MB_SetAnimation(lVar12,0xc,5,uVar21);
          return;
        }
        fVar4 = (moby->pos).z;
        uVar15 = (int)fVar4 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
      else {
        fastfunc::FastDecTimerS32(uVar20 + 400);
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 0x40) != 0) {
          dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar24 < 2.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            uVar21 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar12,1,5,uVar21);
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          uVar21 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar12,0xc,5,uVar21);
          return;
        }
        fVar4 = (moby->pos).z;
        uVar15 = (int)fVar4 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else {
      dVar24 = 7.5;
      if (bVar2 < 8) {
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if ((uVar15 & 0x40) == 0) {
          fVar4 = (moby->pos).z;
          uVar15 = (int)fVar4 >> 0x1f;
          if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
        }
        else {
          moby->state = '\b';
          if (moby->animationId != '\n') {
            local_68 = (longlong)(int)((double)animationSpeed * dVar24);
            mobyutil::MB_SetAnimation(lVar12,10,0,(int)((double)animationSpeed * dVar24));
          }
        }
      }
      else if (bVar2 < 9) {
        fastfunc::FastDecTimerS32(uVar20 + 400);
        dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
        if (dVar22 == 20.0) {
          dVar22 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
          if ((dVar22 < 2.0) && (ABS((moby->pos).z - g_heroPosition.z) < 4.0)) {
            moby->state = '\x04';
            if (moby->animationId == '\x01') {
              return;
            }
            local_68 = (longlong)(int)((double)animationSpeed * dVar24);
            mobyutil::MB_SetAnimation(lVar12,1,5,(int)((double)animationSpeed * dVar24));
            return;
          }
          moby->state = '\x01';
          if (moby->animationId == '\f') {
            return;
          }
          local_68 = (longlong)(int)((double)animationSpeed * dVar24);
          mobyutil::MB_SetAnimation(lVar12,0xc,5,(int)((double)animationSpeed * dVar24));
          return;
        }
      }
    }
  }
  else if (bVar2 < 0xf) {
    if (bVar2 < 0xc) {
      if (bVar2 < 0xb) {
        dVar24 = (double)mobyfunc::BlendAnimFrame(moby);
        if (dVar24 == 12.0) {
          moby->unk58 = 0.0;
        }
        FUN_005e7e98(auStack_120,
                     *(int **)((int)pvVar3 + 0x140) + **(int **)((int)pvVar3 + 0x140) * 4);
        dVar24 = (double)FUN_005e8548(auStack_120,&g_heroPosition);
        if ((dVar24 < (double)*(float *)((int)pvVar3 + 0x198)) ||
           (iVar13 = mobyutil::MB_IsPntInCuboid
                               (&g_heroPosition,(longlong)*(int *)((int)pvVar3 + 0x1c0)),
           iVar13 != 0)) {
          moby->drawDistance = 0x40;
          puVar5 = moby->pClass->collision;
          moby->state = '\v';
          iVar13 = *(int *)((int)pvVar3 + 0x1b4);
          moby->collision = puVar5;
          if (iVar13 == -1) {
            pMVar17 = mobyfunc::CreateMoby(PLATFORM_00F0);
            *(MobyInstance **)((int)pvVar3 + 0x1b0) = pMVar17;
            pMVar17->updateDistance = '@';
            *(undefined2 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x32) = 0x40;
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x31) = 1;
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 1;
            *(undefined8 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x38) =
                 *(undefined8 *)&g_heroMobyPtr->color;
            FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar12 + 0x10);
            mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
          }
          else {
            pMVar17 = MobyInstance + iVar13;
            *(MobyInstance **)((int)pvVar3 + 0x1b0) = pMVar17;
            pMVar17->drawDistance = 0x40;
            *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) =
                 *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x24) + 0x10);
          }
        }
      }
      else {
        iVar13 = **(int **)((int)pvVar3 + 0x140);
        iVar14 = *(int *)((int)pvVar3 + 0x130) + iVar13 + (int)*(char *)((int)pvVar3 + 0x134);
        iVar14 = iVar14 - (iVar14 / iVar13) * iVar13;
        if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
          uVar21 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar3 + 0x170) + 0x10) -
                                        (moby->pos).x),
                                (double)(*(float *)(*(int *)((int)pvVar3 + 0x170) + 0x14) -
                                        (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                     &DAT_00309088,uVar20 + 0x194);
        }
        else {
          uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                (double)(g_heroPosition.y - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                     &DAT_00309088,uVar20 + 0x194);
        }
        FUN_005e7e98(auStack_110,*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x10);
        lVar19 = lVar12 + 0x10;
        dVar24 = (double)FUN_005e8548(lVar19,auStack_110);
        if ((dVar24 < 0.5) && (iVar14 < **(int **)((int)pvVar3 + 0x140) + -1)) {
          *(int *)((int)pvVar3 + 0x130) = iVar14;
        }
        FUN_005e81f0(auStack_100,auStack_110,lVar19);
        dVar24 = (double)FUN_005e8030(auStack_100);
        if ((double)(DAT_007ff5c8 * mobyutil::g_FrameTime) < dVar24) {
          FUN_005e7f98(auStack_100,auStack_100);
        }
        FUN_005e7f54(lVar19,lVar19,auStack_100);
        FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar19);
        *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
        mobyfunc::PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
        dVar24 = (double)FUN_005e8548(lVar19,auStack_110);
        if ((((dVar24 < 0.10000000149011612) && (iVar14 == **(int **)((int)pvVar3 + 0x140) + -1)) ||
            (*(int *)(*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x1c) == 0x42280000)) &&
           (moby->unk58 == 0.0)) {
          if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
            moby->unk58 = 1.0;
          }
          else {
            moby->state = '\x10';
            moby->unk58 = 1.0;
            if (moby->animationId != '\f') {
              uVar21 = idol::GetAnimDuration(0xc);
              mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
            }
            fVar28 = DAT_007ff5c8;
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            *(float *)((int)pvVar3 + 0x1b8) = DAT_007ff5c8;
            *(float *)((int)pvVar3 + 0x1bc) = fVar28;
            auVar26 = loadVectorLeftIndexed(0xfffffffffffff5cc,0x800000);
            auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar25);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1ac,
                                uVar20);
            *(undefined4 *)((int)pvVar3 + 0x1acU & 0xfffffffc) = uVar16;
          }
        }
        fVar28 = mobyutil::g_FrameTime;
        if ((moby->updateId == '\a') && ((moby->field43_0x70 & 2U) != 0)) {
          fVar8 = DAT_007ff5c4 * 2.0;
          *(undefined4 *)((int)pvVar3 + 0x94) = 0xd;
          *(float *)((int)pvVar3 + 0x88) = fVar8 * fVar28;
          fVar8 = DAT_007ff5c0;
          *(undefined1 *)((int)pvVar3 + 0xad) = 0;
          *(float *)((int)pvVar3 + 0x8c) = fVar8 * fVar28;
          mobyutil::MB_StartKick((double)(moby->rotation).z,lVar12,uVar20 + 0x70,0x800000,8,1,0);
          *(undefined4 *)((int)pvVar3 + 0xc0) = 0x41000000;
          *(undefined4 *)((int)pvVar3 + 0xc4) = 0x41800000;
          moby->state = '\f';
          if (*(int *)((int)pvVar3 + 0x1a8) == 0) {
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 6;
            FUN_005e7e98((ulonglong)*(uint *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0x40,
                         auStack_100);
          }
          else if (*(int *)((int)pvVar3 + 0x1a8) == 3) {
            *(undefined1 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x20) = 0;
            *(undefined4 *)(*(int *)(*(int *)((int)pvVar3 + 0x1b0) + 0x78) + 0xe4) = 0;
          }
          *(undefined4 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x94) = 0;
        }
      }
    }
    else if (bVar2 < 0xd) {
      if (moby->updateId == '\b') {
        uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
        if (((uVar15 & 0x40) != 0) && (moby->animationId != '\t')) {
          mobyutil::MB_SetAnimation(lVar12,9,0,0);
        }
      }
      else if (((moby->updateId == '\t') &&
               (dVar24 = (double)mobyfunc::BlendAnimFrame(moby), 13.0 <= dVar24)) &&
              (moby->state = '\x01', moby->animationId != '\f')) {
        uVar21 = idol::GetAnimDuration(10);
        mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
      }
    }
    else if (bVar2 < 0xe) {
      dVar24 = (double)FUN_005e8548(lVar12 + 0x10,&g_heroPosition);
      if ((dVar24 < (double)*(float *)((int)pvVar3 + 0x198)) &&
         (moby->state = '\x0e', moby->animationId != '\x05')) {
        uVar21 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar12,5,0,uVar21);
      }
    }
    else {
      piVar6 = *(int **)((int)pvVar3 + 0x140);
      iVar13 = *piVar6;
      iVar14 = *(int *)((int)pvVar3 + 0x130) + iVar13 + (int)*(char *)((int)pvVar3 + 0x134);
      iVar14 = iVar14 - (iVar14 / iVar13) * iVar13;
      uVar21 = FUN_005e8338((double)((float)piVar6[iVar14 * 4 + 4] - (moby->pos).x),
                            (double)((float)piVar6[iVar14 * 4 + 5] - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fc99999a0000000,lVar12);
      FUN_005e7e98(auStack_a0,*(int *)((int)pvVar3 + 0x140) + iVar14 * 0x10 + 0x10);
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar3 + 0xd0),auStack_a0,auStack_90)
      ;
      dVar24 = (double)FUN_005e8548(lVar12 + 0x10,auStack_a0);
      if ((0.10000000149011612 <= dVar24) || (iVar14 != **(int **)((int)pvVar3 + 0x140) + -1)) {
        dVar24 = (double)FUN_005e8548(lVar12 + 0x10,auStack_a0);
        if ((dVar24 < 0.5) && (iVar14 < **(int **)((int)pvVar3 + 0x140) + -1)) {
          *(int *)((int)pvVar3 + 0x130) = iVar14;
        }
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\f') {
          uVar21 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
        }
      }
    }
  }
  else if (bVar2 < 0x12) {
    if (bVar2 < 0x10) {
      uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
      if ((uVar15 & 0x40) != 0) {
        moby->state = moby->setByGroup;
        if (moby->animationId == '\f') {
          return;
        }
        uVar21 = idol::GetAnimDuration(7);
        mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
        return;
      }
      FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar12 + 0x10);
      *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
      mobyfunc::PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
    }
    else if (bVar2 < 0x11) {
      uVar21 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar21,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar12,
                 &DAT_00309088,uVar20 + 0x194);
      iVar13 = fastfunc::FastDecTimerS32(uVar20 + 0x1ac);
      cVar18 = *(char *)((int)pvVar3 + 0x164);
      if (iVar13 != 0) {
        cVar18 = -cVar18;
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        *(char *)((int)pvVar3 + 0x164) = cVar18;
        auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff5cc,0x800000);
        auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar27,auVar25);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x1ac,
                            uVar20);
        *(undefined4 *)((int)pvVar3 + 0x1acU & 0xfffffffc) = uVar16;
      }
      if (cVar18 == '\x01') {
        FUN_005e7e98(auStack_f0,*(int **)((int)pvVar3 + 0x170) + **(int **)((int)pvVar3 + 0x170) * 4
                    );
      }
      else {
        FUN_005e7e98(auStack_f0,(ulonglong)*(uint *)((int)pvVar3 + 0x170) + 0x10);
      }
      lVar19 = lVar12 + 0x10;
      dVar22 = (double)FUN_005e8548(lVar19,auStack_f0);
      dVar23 = (double)(*(float *)((int)pvVar3 + 0x1b8) * mobyutil::g_FrameTime);
      iVar13 = idol::GetAnimDuration(0x1e);
      local_68 = (longlong)iVar13;
      if ((double)(float)(dVar23 * (double)local_68) <= dVar22) {
        fVar28 = mobyutil::Delt(*(float *)((int)pvVar3 + 0x1bc),mobyutil::g_FrameTime * 10.0,
                                (float *)((int)pvVar3 + 0x1b8));
      }
      else {
        fVar28 = animationSpeed * 0.95238096 * *(float *)((int)pvVar3 + 0x1b8);
        *(float *)((int)pvVar3 + 0x1b8) = fVar28;
      }
      FUN_005e81f0((double)fVar28,auStack_e0,auStack_f0,lVar19);
      dVar22 = (double)FUN_005e8030(auStack_e0);
      if ((double)(*(float *)((int)pvVar3 + 0x1b8) * mobyutil::g_FrameTime) < dVar22) {
        FUN_005e7f98(auStack_e0,auStack_e0);
      }
      FUN_005e7f54(lVar19,lVar19,auStack_e0);
      FUN_005e7e98((ulonglong)*(uint *)((int)pvVar3 + 0x1b0) + 0x10,lVar19);
      *(f32 *)(*(int *)((int)pvVar3 + 0x1b0) + 0x48) = (moby->rotation).z;
      mobyfunc::PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar3 + 0x1b0));
      iVar13 = fastfunc::FastDecTimerS32(uVar20 + 400);
      if (((iVar13 != 0) && (moby->updateId == '\f')) && (moby->animationId != '\x06')) {
        uVar21 = idol::GetAnimDuration(5);
        mobyutil::MB_SetAnimation(lVar12,6,0,uVar21);
      }
      if (moby->updateId == '\x06') {
        dVar22 = (double)mobyfunc::BlendAnimFrame(moby);
        if (dVar22 == 10.0) {
          FUN_005e7e98(&local_b0,&g_heroPosition);
          uVar21 = 0x3fe0000000000000;
          dVar22 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,&g_heroPosition,0);
          if (dVar22 != dVar24) {
            dVar24 = (double)mobyutil::GetGroundZ(uVar21,&g_heroPosition,0);
            local_a8 = (float)dVar24;
          }
          FUN_005e81f0(&local_b0,&local_b0,lVar19);
          dVar24 = (double)FUN_005e8030(&local_b0);
          if (9.0 < dVar24) {
            FUN_005e7f98(&local_b0,&local_b0);
            dVar23 = -1.0;
            dVar22 = 1.0;
            dVar24 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
            local_b0 = (float)((double)local_b0 + dVar24);
            dVar24 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar22);
            local_ac = (float)((double)local_ac + dVar24);
          }
          FUN_005e7f54(&local_b0,&local_b0,lVar19);
          mobyfunc::GetBonePosition(lVar12,9,auStack_d0);
          FUN_005e81f0(auStack_c0,&local_b0,auStack_d0);
          FUN_005e7f98((double)(DAT_007ff5b0 * mobyutil::g_FrameTime),auStack_c0,auStack_c0);
          dVar24 = (double)mobyutil::MB_computeLobVelocity
                                     ((double)(DAT_007ff5b0 * mobyutil::g_FrameTime),
                                      -(double)(DAT_007ff5b8 * DAT_0071f418),auStack_d0,&local_b0);
          local_b8 = (float)dVar24;
          iVar13 = FUN_00315198(lVar12,auStack_d0,auStack_c0);
          if (iVar13 != 0) {
            iVar14 = *(int *)(iVar13 + 0x78);
            uVar16 = idol::GetAnimDuration(0xb4);
            *(undefined4 *)(iVar14 + 0x20) = uVar16;
            *(undefined1 *)(iVar13 + 0x20) = 1;
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\f') {
            uVar21 = idol::GetAnimDuration(5);
            mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
          }
          iVar13 = mobyutil::MB_randInt(0x1e);
          local_68 = (longlong)iVar13;
          uVar16 = fastfunc::FastDoubleToInt
                             ((double)(animationSpeed * (DAT_007ff5bc + (float)local_68)));
          *(undefined4 *)((int)pvVar3 + 400) = uVar16;
        }
      }
    }
    else {
      dVar24 = (double)FUN_005e8588(lVar12 + 0x10,&g_heroPosition);
      if ((dVar24 < 28.0) && (moby->state = '\x01', moby->animationId != '\f')) {
        uVar21 = idol::GetAnimDuration(8);
        mobyutil::MB_SetAnimation(lVar12,0xc,0,uVar21);
      }
    }
  }
  else if (bVar2 == 99) {
    uVar15 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x70));
    if ((uVar15 & 0x40) != 0) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
    fVar4 = (moby->pos).z;
    uVar15 = (int)fVar4 >> 0x1f;
    if ((int)((uVar15 >> 1 ^ (uint)fVar4) - uVar15) < 0x41d80000) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar12,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyutil::MB_ColorDyingMoby(lVar12,uVar20 + 0x60);
  return;
}



//==== 0030b548  ns=mobyupdate_helpers  size=0x14
// sig: undefined M240_0030b548(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M240_0030b548(void)

{
  DAT_007ff61c = 0x10000;
  return;
}



//==== 0030b568  ns=Global  size=0x154
// sig: undefined FUN_0030b568(void)
// callers(1): 0033fd00 mobyupdate_unsorted::UpdateMoby_316
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_0030b568(f32 *param_1,undefined4 *param_2,u8 param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pMVar3 = mobyfunc::CreateMoby(PLATFORM_00F0);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    pMVar3->enabled = '\x01';
    dVar6 = -6.2831854820251465;
    pvVar1 = pMVar3->pVar;
    dVar5 = 6.2831854820251465;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * -6.2831855,mobyutil::g_FrameTime * 6.2831855)
    ;
    *(float *)((int)pvVar1 + 0xe8) = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar6),
                               (float)((double)mobyutil::g_FrameTime * dVar5));
    *(float *)((int)pvVar1 + 0xec) = (float)dVar4;
    uVar2 = g_heroMobyPtr->light;
    pMVar3->color = g_heroMobyPtr->color;
    pMVar3->light = uVar2;
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *(undefined4 *)((int)pvVar1 + 0x40) = *param_2;
    *(undefined4 *)((int)pvVar1 + 0x44) = param_2[1];
    *(undefined4 *)((int)pvVar1 + 0x48) = param_2[2];
    *(undefined4 *)((int)pvVar1 + 0x4c) = param_2[3];
    pMVar3->state = param_3;
    *(undefined4 *)((int)pvVar1 + 0xe4) = param_4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0030b6bc  ns=mobyupdate_helpers  size=0x58
// sig: undefined M240_0030b6bc(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M240_0030b6bc(int param_1)

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



//==== 0030b740  ns=mobyupdate_helpers  size=0x474
// sig: undefined M240_0030b740(void)
// callers(1): 0030c010 mobyupdate_unsorted::UpdateMoby_240
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23

void mobyupdate_helpers::M240_0030b740(int param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    dVar8 = 0.0;
    mobyutil::MB_randRangeFloat(0.0,mobyutil::g_FrameTime * 5.0);
    dVar6 = -2.0;
    dVar1 = 2.0;
    mobyutil::MB_randRangeFloat(mobyutil::g_FrameTime * -2.0,mobyutil::g_FrameTime * 2.0);
    mobyutil::MB_randRangeFloat
              ((float)((double)mobyutil::g_FrameTime * dVar6),
               (float)((double)mobyutil::g_FrameTime * dVar1));
    mobyutil::MB_randRangeFloat((float)dVar8,mobyutil::g_FrameTime);
    mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
    mobyutil::MB_randRangeFloat(-mobyutil::g_FrameTime,mobyutil::g_FrameTime);
    dVar6 = 8.5;
    uVar7 = 0x40c3880000000000;
    dVar1 = 17.5;
    mobyutil::MB_randRange((int)(animationSpeed * 8.5),(int)(animationSpeed * 17.5));
    partupd::SpawnPart_21(uVar7,local_90,local_b0,0x4f007fff,0x1fffffff);
    uVar5 = 0x3fa99999a0000000;
    uVar4 = 0x3ff028f5c0000000;
    uVar3 = 0x3ff07ae140000000;
    uVar2 = 0x40dd4c0000000000;
    partupd::SpawnPart_23
              (0x3fa99999a0000000,0x3ff028f5c0000000,0x3ff07ae140000000,0x40dd4c0000000000,local_90)
    ;
    mobyutil::MB_randRange
              ((int)((double)animationSpeed * dVar6),(int)((double)animationSpeed * dVar1));
    partupd::SpawnPart_21(uVar7,local_80,local_b0,0x4f007fff,0x1fffffff);
    partupd::SpawnPart_23(uVar5,uVar4,uVar3,uVar2,local_80);
  }
  return;
}



//==== 0030bbd0  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M240_0030bbd0(void)
// callers(1): 0030c010 mobyupdate_unsorted::UpdateMoby_240
// callees(3): 00109af0 mobyutil::Delt; 0010a050 mobyutil::AccelDeltAng; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M240_0030bbd0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_1 + 0x78);
  fVar3 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar5 = param_3[2] - *(float *)(param_1 + 0x18);
  fVar6 = SQRT(*(float *)(iVar2 + 0x48) * *(float *)(iVar2 + 0x48) +
               *(float *)(iVar2 + 0x40) * *(float *)(iVar2 + 0x40) +
               *(float *)(iVar2 + 0x44) * *(float *)(iVar2 + 0x44));
  fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (param_5 == 0) {
    fVar1 = *(float *)(iVar2 + 0xd0) * mobyutil::g_FrameTime;
    if (fVar1 <= fVar6) {
      if (fVar1 < fVar6) {
        fVar6 = -(*(float *)(iVar2 + 0xd4) * DAT_0071f418 - fVar6);
      }
    }
    else {
      fVar6 = *(float *)(iVar2 + 0xd4) * DAT_0071f418 + fVar6;
    }
  }
  else {
    if (fVar6 == 0.0) {
      fVar6 = mobyutil::g_FrameTime * 0.01;
    }
    fVar1 = *(float *)(iVar2 + 0xd4);
    if ((fVar6 * fVar6) / (fVar7 * 2.0) <= fVar1 * DAT_0071f418) {
      if (fVar6 < *(float *)(iVar2 + 0xd0) * mobyutil::g_FrameTime) {
        fVar6 = fVar1 * DAT_0071f418 + fVar6;
      }
    }
    else {
      fVar6 = -(fVar1 * DAT_0071f418 - fVar6);
    }
  }
  fVar6 = fVar6 / fVar7;
  fVar1 = 0.0;
  *(float *)(iVar2 + 0x4c) = param_3[3];
  fVar9 = fVar1;
  if (0.0 - fVar7 < 0.0) {
    fVar9 = fVar4 * fVar6;
  }
  fVar8 = fVar1;
  if (0.0 - fVar7 < 0.0) {
    fVar8 = fVar3 * fVar6;
  }
  if (0.0 - fVar7 < 0.0) {
    fVar1 = fVar5 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar9 = fVar4 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar8 = fVar3 * fVar6;
  }
  if (fVar7 - 0.0 < 0.0) {
    fVar1 = fVar5 * fVar6;
  }
  *(float *)(iVar2 + 0x40) = fVar9;
  *(float *)(iVar2 + 0x44) = fVar8;
  *(float *)(iVar2 + 0x48) = fVar1;
  dVar11 = (double)*param_2;
  dVar10 = (double)fastfunc::FastSubRots(*param_2,*(float *)(param_1 + 0x40));
  mobyutil::Delt((float)dVar11,(float)(dVar10 / (double)DAT_007ff658),(float *)(param_1 + 0x40));
  dVar11 = (double)param_2[1];
  dVar10 = (double)fastfunc::FastSubRots(param_2[1],*(float *)(param_1 + 0x44));
  mobyutil::Delt((float)dVar11,(float)(dVar10 / (double)DAT_007ff658),(float *)(param_1 + 0x44));
  mobyutil::AccelDeltAng
            ((double)param_2[2],(double)(DAT_0071f40c * 0.005),(double)(DAT_0071f40c * 0.3),
             (double)(mobyutil::g_FrameTime * 1.9198622),param_1 + 0x48,&DAT_00720000,iVar2 + 0xf8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *(float *)(iVar2 + 0x40);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + *(float *)(iVar2 + 0x44);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + *(float *)(iVar2 + 0x48);
  return;
}



//==== 0030be90  ns=mobyupdate_helpers  size=0x120
// sig: undefined M240_0030be90(void)
// callers(1): 0030c010 mobyupdate_unsorted::UpdateMoby_240
// callees(1): 00500ca4 fastfunc::FastEulerToMtx1

void mobyupdate_helpers::M240_0030be90(int param_1,float *param_2,int param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 local_80 [16];
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  
  if (param_3 == 0) {
    *param_2 = 0.0;
    fVar1 = 0.0;
  }
  else {
    dVar5 = (double)(g_heroPosition.y - *(float *)(param_1 + 0x14));
    dVar4 = (double)(g_heroPosition.x - *(float *)(param_1 + 0x10));
    dVar3 = (double)g_heroPosition.w;
    dVar2 = (double)(g_heroPosition.z - *(float *)(param_1 + 0x18));
    fastfunc::FastEulerToMtx1(&local_70,local_80);
    *param_2 = -(float)((double)local_3c * dVar3 +
                       (double)(float)((double)local_4c * dVar2 +
                                      (double)(float)((double)local_6c * dVar4 +
                                                     (double)(float)((double)local_5c * dVar5)))) /
               DAT_007ff654;
    fVar1 = (float)((double)local_40 * dVar3 +
                   (double)(float)((double)local_50 * dVar2 +
                                  (double)(float)((double)local_70 * dVar4 +
                                                 (double)(float)((double)local_60 * dVar5)))) /
            DAT_007ff654;
  }
  param_2[1] = fVar1;
  return;
}



//==== 0030c010  ns=mobyupdate_unsorted  size=0x1024
// sig: undefined UpdateMoby_240(MobyInstance * moby)
// callers(0): 
// callees(12): 00055ac0 stub::STUB_00055ac0_RET_0; 000efb38 mobyfunc::DeleteMoby; 000fcc68 mobyutil::MB_randRot; 00104214 mobyutil::MB_CountActiveMobysByGroup; 001099f8 mobyutil::Lerp_vec4; 0010e030 mobyutil::MB_genericExplosion; 00112900 mobyutil::MB_GetOrientation; 0030b740 mobyupdate_helpers::M240_0030b740; 0030bbd0 mobyupdate_helpers::M240_0030bbd0; 0030be90 mobyupdate_helpers::M240_0030be90; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 240 */

void mobyupdate_unsorted::UpdateMoby_240(MobyInstance *moby)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int *piVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  float fVar15;
  MobyInstance *pMVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  byte bVar24;
  int iVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar28 = uVar18 - 0x1c0;
  puVar14 = (ulonglong *)lVar28;
  *puVar14 = uVar18;
  puVar14[0x3a] = in_LR;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x34] = unaff_r31;
  fVar3 = (moby->rotation).z;
  dVar36 = (double)(moby->pos).x;
  puVar14[0x33] = unaff_r30;
  dVar34 = (double)(moby->pos).y;
  pvVar11 = moby->pVar;
  dVar32 = (double)(moby->pos).z;
  fVar4 = (moby->pos).w;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar14 + 0x18) = (moby->rotation).x;
  bVar24 = moby->state;
  *(f32 *)((int)puVar14 + 0xc4) = fVar5;
  fVar5 = (moby->rotation).w;
  *(float *)(puVar14 + 0x19) = fVar3;
  puVar14[0x32] = unaff_r29;
  puVar14[0x31] = unaff_r28;
  *(f32 *)((int)puVar14 + 0xcc) = fVar5;
  dVar33 = dVar32;
  dVar35 = dVar34;
  dVar37 = dVar36;
  if (bVar24 != 0) {
    if ((*(int *)((int)pvVar11 + 0xfc) != -1) &&
       (MobyInstance[*(int *)((int)pvVar11 + 0xfc)].state < 0x80)) {
      mobyupdate_helpers::M240_0030b740(lVar19);
      return;
    }
    if (*(int *)((int)pvVar11 + 0xdc) != -1) {
      iVar22 = mobyutil::MB_CountActiveMobysByGroup
                         (*(int *)((int)pvVar11 + 0xdc),0xffffffffffffffff);
      dVar36 = (double)(moby->pos).x;
      fVar3 = (moby->rotation).z;
      dVar34 = (double)(moby->pos).y;
      dVar32 = (double)(moby->pos).z;
      fVar4 = (moby->pos).w;
      bVar24 = moby->state;
      if (iVar22 != 0) {
        mobyupdate_helpers::M240_0030b740(lVar19);
        return;
      }
    }
  }
  pMVar17 = MobyInstance;
  if (4 < bVar24) {
    if (7 < bVar24) {
      if (bVar24 < 9) {
        (moby->pos).x = (float)(dVar36 + (double)*(float *)((int)pvVar11 + 0x40));
        (moby->pos).y = (float)(dVar34 + (double)*(float *)((int)pvVar11 + 0x44));
        (moby->pos).z = (float)(dVar32 + (double)*(float *)((int)pvVar11 + 0x48));
        iVar22 = stub::STUB_00055ac0_RET_0(lVar19 + 0x10,0x600,0,lVar19,0);
        if ((iVar22 != 0) && (*(int *)((int)pvVar11 + 0xb0) == 0)) {
          puVar14[0x12] = 0xffffffffffffffff;
          puVar14[0x14] = 1;
          puVar14[0x15] = 1;
          puVar14[0x16] = 0xffffffffffffffff;
          puVar14[0x17] = 0;
          mobyutil::MB_genericExplosion
                    (0x4000000000000000,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                     0x3ff0000000000000,0x402e000000000000,lVar19,(int)pvVar11 + 0x40,0,1,
                     0xffffffffffffffff,10,3,0x10);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        *(float *)((int)pvVar11 + 0x48) = -(DAT_0071f418 * 7.0 - *(float *)((int)pvVar11 + 0x48));
        dVar36 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar11 + 0xe8),(moby->rotation).x);
        (moby->rotation).x = (float)dVar36;
        dVar36 = (double)fastfunc::FastWrapRot(*(float *)((int)pvVar11 + 0xec),(moby->rotation).y);
        iVar22 = *(int *)((int)pvVar11 + 0xb0);
        (moby->rotation).y = (float)dVar36;
        fVar4 = (moby->pos).z;
        if ((iVar22 != 0) &&
           (fVar3 = (moby->pos).y - *(float *)(iVar22 + 0x14),
           fVar8 = (moby->pos).x - *(float *)(iVar22 + 0x10),
           SQRT(fVar8 * fVar8 + fVar3 * fVar3) < 0.5)) {
          moby->state = '\0';
        }
        if ((int)fVar4 < 0) {
          mobyfunc::DeleteMoby(moby);
        }
        goto LAB_0030cfc4;
      }
      if (9 < bVar24) goto LAB_0030cfc4;
      iVar22 = *(int *)((int)pvVar11 + 0xf0);
      *(float *)(puVar14 + 0x26) = (float)dVar36;
      *(float *)((int)puVar14 + 0x134) = (float)dVar34;
      *(float *)(puVar14 + 0x27) = (float)dVar32;
      *(f32 *)((int)puVar14 + 0x13c) = fVar4;
      pMVar16 = DAT_0096a1d8;
      bVar1 = hero::g_heroStateType == 3;
      fVar8 = pMVar17[iVar22].pos.z;
      *(undefined4 *)((int)puVar14 + 0x14c) = 0;
      *(float *)(puVar14 + 0x27) = fVar8;
      *(undefined4 *)((int)puVar14 + 0x144) = 0;
      *(undefined4 *)(puVar14 + 0x28) = 0;
      *(float *)(puVar14 + 0x29) = fVar3;
      if ((bVar1) || (g_heroState == EDGE_JUMP)) {
        if (pMVar16 != moby) goto LAB_0030cf34;
        bVar1 = true;
      }
      else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
        bVar1 = true;
      }
      else {
LAB_0030cf34:
        bVar1 = false;
      }
      if (bVar1) {
        *(float *)(puVar14 + 0x27) = fVar8 + 0.2;
        mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0x80,1);
        mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0x80,uVar18 - 0x90,1,1);
      }
      else {
        *(float *)(puVar14 + 0x27) = fVar8 + 0.4;
        mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0x80,0);
        mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0x80,uVar18 - 0x90,0,1);
      }
      goto LAB_0030cfc4;
    }
    if (bVar24 < 6) {
      iVar22 = fastfunc::FastDecTimerS32((int)pvVar11 + 0xe0);
      if (iVar22 != 0) {
        *(byte *)((int)pvVar11 + 0xa4) =
             ((byte)((LZCOUNT(1 - (uint)*(byte *)((int)pvVar11 + 0xa4)) << 0x3a) >> 0x3f) & 1) + 1;
        moby->state = '\x04';
      }
      if (*(char *)((int)pvVar11 + 0xa4) == '\x02') {
        mobyupdate_helpers::M240_0030b740(lVar19);
      }
      fVar4 = (moby->rotation).y;
      *(f32 *)(puVar14 + 0x24) = (moby->rotation).x;
      fVar5 = (moby->rotation).z;
      *(f32 *)((int)puVar14 + 0x124) = fVar4;
      fVar4 = (moby->rotation).w;
      *(f32 *)(puVar14 + 0x25) = fVar5;
      *(f32 *)((int)puVar14 + 300) = fVar4;
      mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xa0,lVar19 + 0x10,0,1);
      goto LAB_0030cfc4;
    }
    if (bVar24 < 7) {
      dVar30 = (double)*(float *)((int)pvVar11 + 0x40);
      fVar3 = *(float *)((int)pvVar11 + 0x48);
      if (SQRT(fVar3 * fVar3 +
               (float)(dVar30 * dVar30 +
                      (double)(*(float *)((int)pvVar11 + 0x44) * *(float *)((int)pvVar11 + 0x44))))
          < mobyutil::g_FrameTime * 6.0) {
        *(float *)((int)pvVar11 + 0x48) = DAT_0071f418 * 6.0 + fVar3;
        dVar36 = (double)(moby->pos).x;
        dVar34 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).z;
      }
      cVar2 = moby->enabled;
      (moby->pos).x = (float)(dVar36 + dVar30);
      (moby->pos).y = (float)(dVar34 + (double)*(float *)((int)pvVar11 + 0x44));
      (moby->pos).z = (float)(dVar32 + (double)*(float *)((int)pvVar11 + 0x48));
      if (cVar2 == '\0') {
        mobyfunc::DeleteMoby(moby);
      }
      goto LAB_0030cfc4;
    }
    mobyupdate_helpers::M240_0030b740(lVar19);
    piVar12 = *(int **)((int)pvVar11 + 0xb0);
    iVar22 = *piVar12;
    iVar23 = *(int *)((int)pvVar11 + 0xa0) + iVar22 + (int)*(char *)((int)pvVar11 + 0xa4);
    iVar23 = iVar23 - (iVar23 / iVar22) * iVar22;
    *(int *)(puVar14 + 0x1e) = piVar12[iVar23 * 4 + 4];
    *(int *)((int)puVar14 + 0xf4) = piVar12[iVar23 * 4 + 5];
    *(int *)(puVar14 + 0x1f) = piVar12[iVar23 * 4 + 6];
    *(int *)((int)puVar14 + 0xfc) = piVar12[iVar23 * 4 + 7];
    iVar22 = *(int *)((int)pvVar11 + 0xb0) + iVar23 * 0x10;
    fVar3 = (moby->pos).y - *(float *)(iVar22 + 0x14);
    fVar8 = (moby->pos).x - *(float *)(iVar22 + 0x10);
    fVar9 = (moby->pos).z - *(float *)(iVar22 + 0x18);
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar3 * fVar3) < 0.5) {
      *(int *)((int)pvVar11 + 0xa0) = iVar23;
      if (*(int *)(iVar22 + 0x1c) != -0x40800000) {
        *(undefined4 *)((int)pvVar11 + 0xd0) = *(undefined4 *)(iVar22 + 0x1c);
      }
    }
    fVar3 = *(float *)(puVar14 + 0x1e) - (moby->pos).x;
    fVar8 = *(float *)((int)puVar14 + 0xf4) - (moby->pos).y;
    fVar9 = ABS(fVar3);
    fVar6 = ABS(fVar8);
    *(float *)(puVar14 + 0x2a) = fVar3;
    *(float *)((int)puVar14 + 0x154) = fVar8;
    *(float *)(puVar14 + 0x2b) = fVar9 - fVar6;
    fVar8 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x2a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x2b) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x154) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar14 + 0x2a));
    if (*(float *)(puVar14 + 0x2b) - 0.0 < 0.0) {
      fVar3 = fVar6;
    }
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar15 = ABS(*(float *)((int)puVar14 + 0x154));
    if (*(float *)(puVar14 + 0x2b) - 0.0 < 0.0) {
      fVar15 = fVar9;
    }
    if (0.0 < fVar3) {
      lVar21 = uVar18 - 0x1b0;
      lVar25 = uVar18 - 100;
      lVar27 = uVar18 - 0x54;
      lVar29 = 2;
      fVar3 = (fVar15 - fVar3) / (fVar15 + fVar3);
      fVar9 = fVar3 * fVar3;
      *(float *)(puVar14 + 0x2d) = fVar3;
      *(float *)(puVar14 + 0x2c) = fVar3;
      *(float *)((int)puVar14 + 0x164) = fVar3;
      *(float *)((int)puVar14 + 0x15c) = fVar3;
      fVar3 = fVar9 * fVar9;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar9;
      *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar3;
      *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar3 * fVar9;
      do {
        *(float *)((int)lVar21 + 0x15c) = *(float *)((int)lVar21 + 0x14c) * fVar3 * fVar3;
        iVar22 = (int)lVar25;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
        lVar27 = lVar27 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar27 = uVar18 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar28;
      lVar25 = lVar27;
      do {
        fVar3 = *pfVar26;
        fVar9 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x15c) = *(float *)((int)lVar21 + 0x15c) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar21 = 2;
      do {
        iVar22 = (int)lVar28;
        iVar23 = (int)lVar27;
        lVar28 = lVar28 + 0x10;
        lVar27 = lVar27 + 0x10;
        fVar8 = fVar8 + *(float *)(iVar22 + 0x15c) + *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8)
                + *(float *)(iVar23 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar8 = (fVar8 + 0.7853982) * fVar10 + fVar6;
    }
    *(float *)(puVar14 + 0x1d) = fVar8;
    if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
      if (DAT_0096a1d8 != moby) goto LAB_0030c688;
      bVar1 = true;
    }
    else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      bVar1 = true;
    }
    else {
LAB_0030c688:
      bVar1 = false;
    }
    if (bVar1) {
      mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xe0,1);
      mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xe0,uVar18 - 0xd0,1,0);
    }
    else {
      mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xe0,0);
      mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xe0,uVar18 - 0xd0,0,0);
    }
    goto LAB_0030cfc4;
  }
  if (bVar24 < 2) {
    if (bVar24 == 0) {
      iVar22 = *(int *)((int)pvVar11 + 0xe4);
      if (iVar22 == 4) {
        moby->state = '\t';
        *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40800000;
        *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40800000;
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) & 0xfffe;
      }
      else if (iVar22 == 3) {
        moby->state = '\x01';
        moby->drawDistance = 0;
        moby->collision = (ushort *)0x0;
      }
      else if (iVar22 == 2) {
        moby->collision = moby->pClass->collision;
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        (moby->rotation).y = -1.5707964;
        pSVar13 = Splines[iVar22];
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        (moby->rotation).z = fVar3 + 3.1415927;
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        if (*(int *)((int)pvVar11 + 0xd4) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x41000000;
        }
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x41000000;
        }
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\x04';
      }
      else if (iVar22 == 1) {
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        iVar23 = *(int *)((int)pvVar11 + 0xd4);
        moby->collision = moby->pClass->collision;
        pSVar13 = Splines[iVar22];
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        if (iVar23 == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40000000;
        }
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40800000;
        }
        dVar36 = (double)mobyutil::MB_randRot();
        *(float *)((int)pvVar11 + 0xd8) = (float)dVar36;
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) | 9;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\x02';
      }
      else if (iVar22 == 0) {
        iVar22 = *(int *)((int)pvVar11 + 0xb4);
        moby->collision = moby->pClass->collision;
        pSVar13 = Splines[iVar22];
        *(undefined1 *)((int)pvVar11 + 0xa4) = 1;
        *(Spline **)((int)pvVar11 + 0xb0) = pSVar13;
        *(undefined4 *)((int)pvVar11 + 0xa0) = 0;
        if (*(int *)((int)pvVar11 + 0xd0) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd0) = 0x40c00000;
        }
        if (*(int *)((int)pvVar11 + 0xd4) == 0) {
          *(undefined4 *)((int)pvVar11 + 0xd4) = 0x40c00000;
        }
        *(ushort *)((int)pvVar11 + 0x3e) = *(ushort *)((int)pvVar11 + 0x3e) | 9;
        *(undefined4 *)((int)pvVar11 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar11 + 0x48) = 0;
        *(undefined4 *)((int)pvVar11 + 0x44) = 0;
        *(undefined4 *)((int)pvVar11 + 0x40) = 0;
        moby->state = '\a';
      }
    }
    goto LAB_0030cfc4;
  }
  if (2 < bVar24) {
    if (3 < bVar24) {
      iVar22 = *(int *)((int)pvVar11 + 0xb0);
      dVar34 = (double)fastfunc::FastWrapRot
                                 (*(float *)((int)pvVar11 + 0xd8),mobyutil::g_FrameTime * 1.2217305)
      ;
      *(float *)((int)pvVar11 + 0xd8) = (float)dVar34;
      dVar36 = (double)(float)(3.141592502593994 - dVar34);
      if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
        dVar36 = dVar34;
      }
      dVar32 = (double)(float)(-3.141592502593994 - dVar34);
      if ((double)(float)(-3.141592502593994 - dVar34) - dVar36 < 0.0) {
        dVar32 = dVar36;
      }
      dVar30 = (double)(float)(dVar32 * dVar32);
      dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
      dVar36 = (double)(float)(dVar30 * dVar31);
      fVar3 = (float)(dVar30 * dVar36) * 2.601887e-06 +
              (float)(dVar36 * -0.0001980741071747616 +
                     (double)(float)(dVar31 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar30 * dVar32) *
                                                    -0.16666656732559204 + dVar32)));
      if ((1.5707963705062866 < dVar34) && (dVar34 < 3.1415927410125732)) {
        fVar3 = 2.0 - fVar3;
      }
      if ((-3.1415927410125732 < dVar34) && (dVar34 < -1.5707963705062866)) {
        fVar3 = 2.0 - fVar3;
      }
      fVar3 = fVar3 * 0.5 + 0.5;
      *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(iVar22 + 0x10);
      uVar7 = *(undefined4 *)(iVar22 + 0x20);
      *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(iVar22 + 0x18);
      *(undefined4 *)(puVar14 + 10) = uVar7;
      *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(iVar22 + 0x28);
      uVar7 = *(undefined4 *)(iVar22 + 0x1c);
      *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)(iVar22 + 0x14);
      *(undefined4 *)((int)puVar14 + 0x4c) = uVar7;
      *(undefined4 *)((int)puVar14 + 0x54) = *(undefined4 *)(iVar22 + 0x24);
      if (1.0 - fVar3 < 0.0) {
        fVar3 = fVar3 - 2.0;
      }
      *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)(iVar22 + 0x2c);
      mobyutil::Lerp_vec4(ABS(fVar3),&(moby->pos).x);
      (moby->rotation).y = -1.5707964;
      goto LAB_0030cfc4;
    }
    *(float *)(puVar14 + 0x23) = fVar3;
    iVar22 = fastfunc::FastDecTimerS32((int)pvVar11 + 0xe0);
    if (iVar22 != 0) {
      *(byte *)((int)pvVar11 + 0xa4) =
           ((byte)((LZCOUNT(1 - (uint)*(byte *)((int)pvVar11 + 0xa4)) << 0x3a) >> 0x3f) & 1) + 1;
      moby->state = '\x02';
    }
    if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
      if (DAT_0096a1d8 != moby) goto LAB_0030cb80;
      bVar1 = true;
    }
    else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      bVar1 = true;
    }
    else {
LAB_0030cb80:
      bVar1 = false;
    }
    if (bVar1) {
      mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xb0,1);
      mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xb0,lVar19 + 0x10,1,1);
    }
    else {
      mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xb0,0);
      mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xb0,lVar19 + 0x10,0,1);
    }
    goto LAB_0030cfc4;
  }
  *(undefined4 *)((int)pvVar11 + 0xd4) = 0;
  iVar22 = *(int *)((int)pvVar11 + 0xb0);
  dVar34 = (double)fastfunc::FastWrapRot
                             (*(float *)((int)pvVar11 + 0xd8),mobyutil::g_FrameTime * 1.2217305);
  *(float *)((int)pvVar11 + 0xd8) = (float)dVar34;
  dVar36 = (double)(float)(3.141592502593994 - dVar34);
  if (dVar34 - (double)(float)(3.141592502593994 - dVar34) < 0.0) {
    dVar36 = dVar34;
  }
  dVar32 = (double)(float)(-3.141592502593994 - dVar34);
  if ((double)(float)(-3.141592502593994 - dVar34) - dVar36 < 0.0) {
    dVar32 = dVar36;
  }
  dVar30 = (double)(float)(dVar32 * dVar32);
  dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar32));
  dVar36 = (double)(float)(dVar30 * dVar31);
  fVar3 = (float)(dVar30 * dVar36) * 2.601887e-06 +
          (float)(dVar36 * -0.0001980741071747616 +
                 (double)(float)(dVar31 * 0.008333025500178337 +
                                (double)(float)((double)(float)(dVar30 * dVar32) *
                                                -0.16666656732559204 + dVar32)));
  if ((1.5707963705062866 < dVar34) && (dVar34 < 3.1415927410125732)) {
    fVar3 = 2.0 - fVar3;
  }
  if ((-3.1415927410125732 < dVar34) && (dVar34 < -1.5707963705062866)) {
    fVar3 = 2.0 - fVar3;
  }
  lVar28 = lVar19 + 0x10;
  fVar3 = fVar3 * 0.5 + 0.5;
  *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(iVar22 + 0x10);
  uVar7 = *(undefined4 *)(iVar22 + 0x20);
  *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(iVar22 + 0x18);
  *(undefined4 *)(puVar14 + 10) = uVar7;
  *(undefined4 *)(puVar14 + 0xb) = *(undefined4 *)(iVar22 + 0x28);
  *(undefined4 *)((int)puVar14 + 0x44) = *(undefined4 *)(iVar22 + 0x14);
  uVar7 = *(undefined4 *)(iVar22 + 0x24);
  *(undefined4 *)((int)puVar14 + 0x4c) = *(undefined4 *)(iVar22 + 0x1c);
  *(undefined4 *)((int)puVar14 + 0x54) = uVar7;
  if (1.0 - fVar3 < 0.0) {
    fVar3 = fVar3 - 2.0;
  }
  *(undefined4 *)((int)puVar14 + 0x5c) = *(undefined4 *)(iVar22 + 0x2c);
  mobyutil::Lerp_vec4(ABS(fVar3),(float *)lVar28);
  *(f32 *)(puVar14 + 0x21) = (moby->rotation).z;
  if ((hero::g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 != moby) goto LAB_0030c8e0;
    bVar1 = true;
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
    bVar1 = true;
  }
  else {
LAB_0030c8e0:
    bVar1 = false;
  }
  if (bVar1) {
    mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xc0,1);
    mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xc0,lVar28,1,1);
  }
  else {
    mobyupdate_helpers::M240_0030be90(lVar19,uVar18 - 0xc0,0);
    mobyupdate_helpers::M240_0030bbd0(lVar19,uVar18 - 0xc0,lVar28,0,1);
  }
LAB_0030cfc4:
  fVar3 = (moby->pos).x;
  fVar8 = (moby->pos).y;
  fVar9 = (moby->pos).z;
  *(f32 *)((int)puVar14 + 0xdc) = (moby->pos).w;
  *(float *)(puVar14 + 0x1a) = (float)((double)fVar3 - dVar37);
  *(float *)((int)puVar14 + 0xd4) = (float)((double)fVar8 - dVar35);
  *(float *)(puVar14 + 0x1b) = (float)((double)fVar9 - dVar33);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar11 + 0x60),(Vec4 *)(puVar14 + 0x1a),uVar18 - 0x100,
             lVar19 + 0x40);
  return;
}



//==== 0030d034  ns=mobyupdate_helpers  size=0x14
// sig: undefined M241_0030d034(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M241_0030d034(void)

{
  DAT_007ff6bc = 0x10000;
  return;
}



//==== 0030d0a0  ns=mobyupdate_unsorted  size=0x18c4
// sig: undefined UpdateMoby_241(MobyInstance * moby)
// callers(0): 
// callees(19): 0002ed9c stub::STUB_0002ed9c; 00055ab8 stub::STUB_00055ab8_RET_0; 000efb38 mobyfunc::DeleteMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 0010a050 mobyutil::AccelDeltAng; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00110b70 mobyutil::MB_IsPntInCuboid; 0015d12c sound::PlayMobySound; 00366d48 FUN_00366d48; 004fff60 fastfunc::FastDecTimerS32; 00500ca4 fastfunc::FastEulerToMtx1; 005017c4 fastfunc::FastQuaternionMult; 00501980 fastfunc::FastQuaternionToEuler
// strings: 007ff6f8: '?333' (raw)

/* Moby 241 */

void mobyupdate_unsorted::UpdateMoby_241(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float fVar9;
  f32 fVar10;
  float fVar11;
  short sVar12;
  float *pfVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
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
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  float *pfVar34;
  longlong lVar33;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong unaff_r29;
  longlong lVar38;
  ulonglong unaff_r30;
  ulonglong uVar39;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
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
  double dVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar38 = uVar29 - 0x310;
  puVar15 = (ulonglong *)lVar38;
  *puVar15 = uVar29;
  puVar15[100] = in_LR;
  puVar15[0x58] = in_f22;
  puVar15[0x59] = in_f23;
  puVar15[0x5a] = in_f24;
  puVar15[0x5b] = in_f25;
  puVar15[0x5c] = in_f26;
  puVar15[0x5d] = in_f27;
  puVar15[0x5e] = in_f28;
  puVar15[0x5f] = in_f29;
  puVar15[0x60] = in_f30;
  puVar15[0x61] = in_f31;
  puVar15[0x57] = unaff_r31;
  puVar15[0x56] = unaff_r30;
  puVar15[0x55] = unaff_r29;
  pfVar13 = (float *)moby->pVar;
  uVar39 = ZEXT48(pfVar13);
  iVar30 = mobyutil::MB_damage(moby,0x210000,0);
  fastfunc::FastDecTimerS32(uVar39 + 0x164);
  if (((iVar30 != 0) && (moby->state != '\x04' && moby->state != '\b')) && (pfVar13[0x59] == 0.0)) {
    pfVar13[0x18] = 0.008;
    pfVar13[0x19] = 0.0005;
    fVar4 = mobyutil::g_FrameTime;
    pfVar13[0x1a] = mobyutil::g_FrameTime * 10.0;
    *(undefined1 *)((int)pfVar13 + 0x8d) = 0;
    pfVar13[0x1d] = 4.2039e-45;
    pfVar13[0x1b] = fVar4 * 4.0;
    fVar4 = *pfVar13 - *(float *)(iVar30 + 0x2c);
    *pfVar13 = fVar4;
    dVar45 = 0.0;
    if (fVar4 <= 0.0) {
      *(undefined1 *)((int)pfVar13 + 0x47) = 0xfa;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar5 = (moby->pos).y - g_heroPosition.y;
      fVar8 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)(puVar15 + 0x39) = fVar4;
      *(float *)((int)puVar15 + 0x1cc) = fVar5;
      *(float *)(puVar15 + 0x3a) = fVar8 - fVar6;
      uVar35 = (ulonglong)(*(uint *)(puVar15 + 0x39) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x3a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0x1cc) >> 0x1d) & 4;
      uVar36 = uVar35 << 2 | 0x735900;
      fVar4 = ABS(*(float *)(puVar15 + 0x39));
      if (*(float *)(puVar15 + 0x3a) - 0.0 < 0.0) {
        fVar4 = fVar6;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
      fVar6 = ABS(*(float *)((int)puVar15 + 0x1cc));
      if (*(float *)(puVar15 + 0x3a) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      fVar8 = *(float *)((int)uVar36 + 4);
      if (0.0 < fVar4) {
        lVar32 = uVar29 - 0x300;
        lVar37 = uVar29 - 0xd4;
        lVar33 = uVar29 - 0xe4;
        lVar40 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)(puVar15 + 0x47) = fVar4;
        *(float *)(puVar15 + 0x46) = fVar4;
        *(float *)((int)puVar15 + 0x234) = fVar4;
        *(float *)((int)puVar15 + 0x22c) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x46) = *(float *)(puVar15 + 0x46) * fVar6;
        *(float *)((int)puVar15 + 0x234) = *(float *)((int)puVar15 + 0x234) * fVar4;
        *(float *)(puVar15 + 0x47) = *(float *)(puVar15 + 0x47) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar32 + 0x22c) = *(float *)((int)lVar32 + 0x21c) * fVar4 * fVar4;
          iVar30 = (int)lVar33;
          lVar33 = lVar33 + 8;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
          lVar37 = lVar37 + 8;
          lVar40 = lVar40 + -1;
        } while (lVar40 != 0);
        lVar40 = 4;
        lVar37 = uVar29 - 0xe4;
        uVar36 = ZEXT48(&DAT_007358e0);
        lVar32 = lVar38;
        lVar33 = lVar37;
        do {
          pfVar34 = (float *)uVar36;
          fVar4 = pfVar34[1];
          uVar36 = uVar36 + 8;
          *(float *)((int)lVar32 + 0x22c) = *(float *)((int)lVar32 + 0x22c) * *pfVar34;
          lVar32 = lVar32 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
          lVar33 = lVar33 + 8;
          lVar40 = lVar40 + -1;
        } while (lVar40 != 0);
        lVar33 = 2;
        lVar32 = lVar38;
        do {
          iVar30 = (int)lVar32;
          lVar32 = lVar32 + 0x10;
          iVar16 = (int)lVar37;
          lVar37 = lVar37 + 0x10;
          dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x22c)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
      }
      mobyutil::MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,9,5,0);
      moby->state = '\b';
    }
    else {
      sVar12 = *(short *)(*(int *)(iVar30 + 0x20) + 0xa6);
      if ((sVar12 == 0xb0) || (sVar12 == 0xb1)) {
        auVar53 = loadVectorLeftIndexed(0xc,0x30d048);
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      }
      else {
        auVar53 = loadVectorLeftIndexed(0x10,0x30d048);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      }
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar54 = auVar54 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar53 = vectorMultiplyAddFloatingPoint
                          (auVar54 | auVar54 << 0x20 | auVar54 << 0x40 | auVar54 << 0x60,auVar53,
                           auVar55);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      uVar14 = storeVectorElementWordIndexed(auVar53,0x164,uVar39);
      *(undefined4 *)((uint)(pfVar13 + 0x59) & 0xfffffffc) = uVar14;
      uVar31 = (int)*(uint *)(iVar30 + 0x2c) >> 0x1f;
      iVar30 = (uVar31 >> 1 ^ *(uint *)(iVar30 + 0x2c)) - uVar31;
      if (iVar30 < 0x40800000) {
        if (0x3fffffff < iVar30) {
          pfVar13[0x5b] = DAT_007ff708 * 0.017453292;
        }
        sound::PlayMobySound(5,0,moby);
        *(undefined1 *)((int)pfVar13 + 0x47) = 0x78;
      }
      else if (iVar30 < 0x40c00000) {
        *(undefined1 *)((int)pfVar13 + 0x47) = 200;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar8 = ABS(fVar4);
        fVar6 = ABS(fVar5);
        *(float *)(puVar15 + 0x3c) = fVar4;
        *(float *)((int)puVar15 + 0x1e4) = fVar5;
        *(float *)(puVar15 + 0x3d) = fVar8 - fVar6;
        uVar35 = (ulonglong)(*(uint *)(puVar15 + 0x3c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x3d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1e4) >> 0x1d) & 4;
        uVar36 = uVar35 << 2 | 0x735900;
        fVar4 = ABS(*(float *)(puVar15 + 0x3c));
        if (*(float *)(puVar15 + 0x3d) - 0.0 < 0.0) {
          fVar4 = fVar6;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
        fVar6 = ABS(*(float *)((int)puVar15 + 0x1e4));
        if (*(float *)(puVar15 + 0x3d) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)((int)uVar36 + 4);
        if (0.0 < fVar4) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0x94;
          lVar33 = uVar29 - 0xa4;
          lVar40 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x4f) = fVar4;
          *(float *)(puVar15 + 0x4e) = fVar4;
          *(float *)((int)puVar15 + 0x274) = fVar4;
          *(float *)((int)puVar15 + 0x26c) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar15 + 0x4e) = *(float *)(puVar15 + 0x4e) * fVar6;
          *(float *)((int)puVar15 + 0x274) = *(float *)((int)puVar15 + 0x274) * fVar4;
          *(float *)(puVar15 + 0x4f) = *(float *)(puVar15 + 0x4f) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x26c) = *(float *)((int)lVar32 + 0x25c) * fVar4 * fVar4;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0xa4;
          uVar36 = ZEXT48(&DAT_007358e0);
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            pfVar34 = (float *)uVar36;
            fVar4 = pfVar34[1];
            uVar36 = uVar36 + 8;
            *(float *)((int)lVar32 + 0x26c) = *(float *)((int)lVar32 + 0x26c) * *pfVar34;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar33 = 2;
          lVar32 = lVar38;
          do {
            iVar30 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x26c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
        }
        mobyutil::MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,8,5,0);
        moby->state = '\x04';
      }
      else {
        *(undefined1 *)((int)pfVar13 + 0x47) = 0xe6;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar5 = (moby->pos).y - g_heroPosition.y;
        fVar8 = ABS(fVar4);
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar15 + 0x1d4) = fVar4;
        *(float *)(puVar15 + 0x3b) = fVar5;
        *(float *)((int)puVar15 + 0x1dc) = fVar8 - fVar6;
        uVar35 = (ulonglong)(*(uint *)((int)puVar15 + 0x1d4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1dc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar15 + 0x3b) >> 0x1d) & 4;
        uVar36 = uVar35 << 2 | 0x735900;
        fVar4 = ABS(*(float *)((int)puVar15 + 0x1d4));
        if (*(float *)((int)puVar15 + 0x1dc) - 0.0 < 0.0) {
          fVar4 = fVar6;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar35 << 2));
        fVar6 = ABS(*(float *)(puVar15 + 0x3b));
        if (*(float *)((int)puVar15 + 0x1dc) - 0.0 < 0.0) {
          fVar6 = fVar8;
        }
        fVar8 = *(float *)((int)uVar36 + 4);
        if (0.0 < fVar4) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0xb4;
          lVar33 = uVar29 - 0xc4;
          lVar40 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x4b) = fVar4;
          *(float *)(puVar15 + 0x4a) = fVar4;
          *(float *)((int)puVar15 + 0x254) = fVar4;
          *(float *)((int)puVar15 + 0x24c) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar15 + 0x4a) = *(float *)(puVar15 + 0x4a) * fVar6;
          *(float *)((int)puVar15 + 0x254) = *(float *)((int)puVar15 + 0x254) * fVar4;
          *(float *)(puVar15 + 0x4b) = *(float *)(puVar15 + 0x4b) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar32 + 0x24c) = *(float *)((int)lVar32 + 0x23c) * fVar4 * fVar4;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar4 * fVar4;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0xc4;
          uVar36 = ZEXT48(&DAT_007358e0);
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            pfVar34 = (float *)uVar36;
            fVar4 = pfVar34[1];
            uVar36 = uVar36 + 8;
            *(float *)((int)lVar32 + 0x24c) = *(float *)((int)lVar32 + 0x24c) * *pfVar34;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar4;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar33 = 2;
          lVar32 = lVar38;
          do {
            iVar30 = (int)lVar32;
            lVar32 = lVar32 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            dVar45 = (double)((float)(dVar45 + (double)*(float *)(iVar30 + 0x24c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          dVar45 = (double)((float)(dVar45 + 0.7853981852531433) * fVar5 + fVar8);
        }
        mobyutil::MB_StartKick(dVar45,moby,uVar39 + 0x50,uVar36,8,5,0);
        moby->state = '\x05';
      }
    }
    mobyutil::MB_UpdateLightsTransition(moby,uVar39 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      *pfVar13 = 9.0;
      *(undefined1 *)(pfVar13 + 2) = 3;
      pfVar13[0x59] = 0.0;
      pfVar13[0x5b] = 0.0;
      mobyfunc::AttachManipulator(moby,6,pfVar13 + 0x40);
      pfVar13[0x57] = (moby->rotation).z;
      pfVar13[0x50] = (moby->pos).x;
      pfVar13[0x51] = (moby->pos).y;
      pfVar13[0x52] = (moby->pos).z;
      pfVar13[0x53] = (moby->pos).w;
      moby->state = '\x01';
      if (moby->animationId != '\x02') {
        mobyutil::MB_SetAnimation(moby,2,0,0);
      }
    }
    else if (bVar1 < 2) {
      dVar51 = 0.0;
      mobyutil::AccelDeltAng
                (0,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,uVar39 + 0x15c,0xff,
                 uVar39 + 0x150);
      dVar49 = (double)(moby->pos).y;
      dVar42 = (double)(float)((double)pfVar13[0x51] - dVar49);
      dVar48 = (double)(moby->pos).x;
      dVar41 = (double)(float)((double)pfVar13[0x50] - dVar48);
      dVar50 = (double)(moby->pos).z;
      dVar44 = (double)(float)((double)pfVar13[0x52] - dVar50);
      uVar2 = moby->animationId;
      bVar1 = moby->field43_0x70;
      uVar3 = moby->updateId;
      dVar46 = (double)SQRT((float)(dVar44 * dVar44 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar45 = dVar41;
      dVar43 = dVar42;
      dVar47 = dVar44;
      if (((double)(mobyutil::g_FrameTime * 2.0) < dVar46) &&
         (dVar45 = dVar51, dVar43 = dVar51, dVar47 = dVar51, dVar46 != dVar51)) {
        dVar47 = (double)(float)((double)(mobyutil::g_FrameTime * 2.0) / dVar46);
        dVar45 = (double)(float)(dVar41 * dVar47);
        dVar43 = (double)(float)(dVar42 * dVar47);
        dVar47 = (double)(float)(dVar44 * dVar47);
      }
      fVar4 = (float)(dVar48 + dVar45);
      fVar5 = (float)(dVar49 + dVar43);
      fVar6 = (float)(dVar50 + dVar47);
      (moby->pos).x = fVar4;
      (moby->pos).y = fVar5;
      (moby->pos).z = fVar6;
      fVar5 = fVar5 - g_heroPosition.y;
      fVar4 = fVar4 - g_heroPosition.x;
      if ((pfVar13[0x58] <= SQRT(fVar4 * fVar4 + fVar5 * fVar5)) ||
         (5.0 <= ABS(fVar6 - g_heroPosition.z))) {
        if ((bVar1 & 2) != 0) {
          if (uVar3 == '\x01') {
            if (uVar2 != '\x02') {
              mobyutil::MB_SetAnimation(moby,2,0,3);
            }
          }
          else if (uVar2 != '\x01') {
            mobyutil::MB_SetAnimation(moby,1,0,3);
          }
        }
      }
      else {
        if (-1 < (int)pfVar13[0x5d]) {
          iVar30 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar13[0x5d]);
          if (iVar30 == 0) goto LAB_0030e8bc;
          uVar2 = moby->animationId;
        }
        moby->state = '\x02';
        if (uVar2 != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,3);
        }
      }
    }
    else if (bVar1 < 3) {
      mobyutil::AccelDeltAng
                (0,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,uVar39 + 0x15c,
                 &DAT_0030d048,uVar39 + 0x150);
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(moby,4,0,3);
        }
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x30,0x30d048);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
    }
    else {
      if ((((pfVar13[0x5c] == -NAN) &&
           (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
           SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 15.0)) &&
          (ABS((moby->pos).z - g_heroPosition.z) < 5.0)) && (g_onMagnerail == 0)) {
        stub::STUB_0002ed9c();
      }
      fVar4 = (moby->pos).y;
      fVar9 = pfVar13[0x51] - fVar4;
      fVar5 = (moby->pos).x;
      fVar20 = pfVar13[0x50] - fVar5;
      fVar6 = (moby->pos).z;
      fVar19 = pfVar13[0x52] - fVar6;
      fVar8 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar9 * fVar9);
      fVar11 = fVar9;
      fVar17 = fVar20;
      fVar18 = fVar19;
      if ((mobyutil::g_FrameTime * 2.0 < fVar8) &&
         (fVar11 = 0.0, fVar17 = fVar11, fVar18 = fVar11, fVar8 != 0.0)) {
        fVar8 = (mobyutil::g_FrameTime * 2.0) / fVar8;
        fVar11 = fVar9 * fVar8;
        fVar17 = fVar20 * fVar8;
        fVar18 = fVar19 * fVar8;
      }
      fVar5 = fVar5 + fVar17;
      fVar4 = fVar4 + fVar11;
      fVar6 = fVar6 + fVar18;
      *(MobyInstance **)(puVar15 + 0x24) = moby;
      fVar7 = (moby->pos).w;
      *(undefined4 *)((int)puVar15 + 0x124) = 0;
      *(undefined4 *)(puVar15 + 0x26) = 0;
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar4;
      (moby->pos).z = fVar6;
      fVar8 = g_heroPosition.y;
      *(float *)(puVar15 + 0x10) = g_heroPosition.x;
      fVar9 = g_heroPosition.z;
      *(float *)((int)puVar15 + 0x84) = fVar8;
      fVar8 = g_heroPosition.w;
      *(float *)(puVar15 + 0x11) = fVar9;
      *(float *)((int)puVar15 + 0x8c) = fVar8;
      *(float *)(puVar15 + 0x12) = fVar5;
      *(float *)((int)puVar15 + 0x94) = fVar4;
      *(f32 *)((int)puVar15 + 0x9c) = fVar7;
      *(float *)(puVar15 + 0x11) = fVar9 + 1.15;
      *(float *)(puVar15 + 0x13) = fVar6 + 1.15;
      iVar30 = stub::STUB_00055ab8_RET_0(uVar29 - 0x280,uVar29 - 0x290,0,moby,uVar29 - 0x200);
      if (iVar30 != 0) {
        fVar4 = (moby->pos).y - g_heroPosition.y;
        fVar5 = (moby->pos).x - g_heroPosition.x;
        dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar45 - (double)DAT_007ff700 < 0.0) {
          dVar45 = (double)DAT_007ff700;
        }
        if (CollOutput.pMoby == g_heroMobyPtr) {
          mobyfunc::GetBonePosition(moby,4,uVar29 - 0x270);
          fVar5 = g_heroPosition.x - *(float *)(puVar15 + 0x14);
          fVar6 = g_heroPosition.y - *(float *)((int)puVar15 + 0xa4);
          fVar4 = g_heroPosition.z - *(float *)(puVar15 + 0x15);
          *(float *)((int)puVar15 + 0x1bc) = fVar5;
          *(float *)(puVar15 + 0x14) = fVar5;
          *(float *)((int)puVar15 + 0xa4) = fVar6;
          fVar8 = g_heroPosition.w;
          *(float *)(puVar15 + 0x38) = fVar6;
          *(float *)((int)puVar15 + 0xac) = fVar8;
          *(float *)(puVar15 + 0x15) = fVar4;
          *(float *)((int)puVar15 + 0x1c4) = ABS(fVar5) - ABS(fVar6);
          fVar8 = 0.0;
          uVar36 = (ulonglong)(*(uint *)((int)puVar15 + 0x1bc) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x1c4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x38) >> 0x1d) & 4;
          fVar4 = (moby->rotation).z;
          fVar9 = ABS(*(float *)((int)puVar15 + 0x1bc));
          if (*(float *)((int)puVar15 + 0x1c4) - 0.0 < 0.0) {
            fVar9 = ABS(fVar6);
          }
          fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
          fVar6 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
          fVar17 = ABS(*(float *)(puVar15 + 0x38));
          if (*(float *)((int)puVar15 + 0x1c4) - 0.0 < 0.0) {
            fVar17 = ABS(fVar5);
          }
          if (0.0 < fVar9) {
            lVar32 = uVar29 - 0x300;
            lVar37 = uVar29 - 0xf4;
            lVar33 = uVar29 - 0x104;
            lVar40 = 2;
            fVar5 = (fVar17 - fVar9) / (fVar17 + fVar9);
            fVar9 = fVar5 * fVar5;
            *(float *)(puVar15 + 0x43) = fVar5;
            *(float *)(puVar15 + 0x42) = fVar5;
            *(float *)((int)puVar15 + 0x214) = fVar5;
            *(float *)((int)puVar15 + 0x20c) = fVar5;
            fVar5 = fVar9 * fVar9;
            *(float *)(puVar15 + 0x42) = *(float *)(puVar15 + 0x42) * fVar9;
            *(float *)((int)puVar15 + 0x214) = *(float *)((int)puVar15 + 0x214) * fVar5;
            *(float *)(puVar15 + 0x43) = *(float *)(puVar15 + 0x43) * fVar5 * fVar9;
            do {
              *(float *)((int)lVar32 + 0x20c) = *(float *)((int)lVar32 + 0x1fc) * fVar5 * fVar5;
              iVar30 = (int)lVar33;
              lVar33 = lVar33 + 8;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar5 * fVar5;
              lVar37 = lVar37 + 8;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
            lVar40 = 4;
            lVar37 = uVar29 - 0x104;
            pfVar34 = (float *)&DAT_007358e0;
            lVar32 = lVar38;
            lVar33 = lVar37;
            do {
              fVar5 = *pfVar34;
              fVar9 = pfVar34[1];
              pfVar34 = pfVar34 + 2;
              *(float *)((int)lVar32 + 0x20c) = *(float *)((int)lVar32 + 0x20c) * fVar5;
              lVar32 = lVar32 + 8;
              *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar9;
              lVar33 = lVar33 + 8;
              lVar40 = lVar40 + -1;
            } while (lVar40 != 0);
            lVar32 = 2;
            do {
              iVar30 = (int)lVar38;
              lVar38 = lVar38 + 0x10;
              iVar16 = (int)lVar37;
              lVar37 = lVar37 + 0x10;
              fVar8 = fVar8 + *(float *)(iVar30 + 0x20c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar6;
          }
          mobyutil::AccelDeltAng
                    ((double)(fVar8 - fVar4),0x3f947ae140000000,0x3fd3333340000000,
                     (double)(float)(0.05000000074505806 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                     uVar39 + 0x150);
        }
        else {
          mobyutil::AccelDeltAng
                    (0,0x3f947ae140000000,0x3fd3333340000000,
                     (double)(float)(0.10000000149011612 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                     uVar39 + 0x150);
        }
      }
      fVar4 = pfVar13[0x5a];
      puVar15[0x52] = (longlong)(int)(animationSpeed * 20.5);
      if ((*(int *)((int)puVar15 + 0x294) < (int)fVar4) &&
         (fVar4 == (float)((((int)fVar4 >> 3) + (uint)((int)fVar4 < 0 && ((uint)fVar4 & 7) != 0)) *
                          8))) {
        uVar52 = 0;
        *(undefined4 *)(puVar15 + 0x1a) = 0;
        *(undefined4 *)((int)puVar15 + 0xd4) = 0;
        *(undefined4 *)(puVar15 + 0x1b) = 0;
        *(undefined4 *)((int)puVar15 + 0xdc) = 0;
        fVar5 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)puVar15 + 0xcc) = 0;
        *(undefined4 *)(puVar15 + 0x19) = 0;
        *(undefined4 *)((int)puVar15 + 0xc4) = 0;
        *(undefined4 *)(puVar15 + 0x18) = 0;
        fVar4 = (moby->rotation).z;
        *(float *)(puVar15 + 0x1a) = fVar5 * 8.0;
        *(float *)(puVar15 + 0x19) = pfVar13[0x57] + fVar4;
        fastfunc::FastEulerToMtx1(uVar29 - 0x1a0,uVar29 - 0x250);
        fVar17 = *(float *)(puVar15 + 0x30) * DAT_007ff6f4;
        fVar18 = *(float *)((int)puVar15 + 0x184) * DAT_007ff6f4;
        fVar19 = *(float *)(puVar15 + 0x31) * DAT_007ff6f4;
        fVar23 = *(float *)(puVar15 + 0x2e) * DAT_007ff6f0;
        fVar24 = *(float *)((int)puVar15 + 0x174) * DAT_007ff6f0;
        fVar25 = *(float *)(puVar15 + 0x2f) * DAT_007ff6f0;
        fVar4 = *(float *)((int)puVar15 + 0xd4);
        fVar20 = *(float *)(puVar15 + 0x32) * DAT_007ff6f8;
        fVar21 = *(float *)((int)puVar15 + 0x194) * DAT_007ff6f8;
        fVar22 = *(float *)(puVar15 + 0x33) * DAT_007ff6f8;
        fVar5 = *(float *)(puVar15 + 0x1a);
        fVar26 = *(float *)(puVar15 + 0x34) * DAT_007ff6fc;
        fVar27 = *(float *)((int)puVar15 + 0x1a4) * DAT_007ff6fc;
        fVar6 = *(float *)(puVar15 + 0x1b);
        fVar28 = *(float *)(puVar15 + 0x35) * DAT_007ff6fc;
        fVar8 = *(float *)((int)puVar15 + 0xdc);
        *(float *)((int)puVar15 + 0xbc) =
             *(float *)((int)puVar15 + 0x1ac) * DAT_007ff6fc +
             *(float *)((int)puVar15 + 0x19c) * DAT_007ff6f8 +
             *(float *)((int)puVar15 + 0x17c) * DAT_007ff6f0 +
             *(float *)((int)puVar15 + 0x18c) * DAT_007ff6f4;
        fVar9 = (moby->pos).y;
        fVar11 = (moby->pos).z;
        *(float *)(puVar15 + 0x16) = fVar26 + fVar20 + fVar23 + fVar17 + (moby->pos).x;
        *(float *)((int)puVar15 + 0xb4) = fVar27 + fVar21 + fVar24 + fVar18 + fVar9;
        *(float *)(puVar15 + 0x17) = fVar28 + fVar22 + fVar25 + fVar19 + fVar11;
        *(float *)(puVar15 + 0x1a) =
             *(float *)(puVar15 + 0x34) * fVar8 +
             *(float *)(puVar15 + 0x32) * fVar6 +
             *(float *)(puVar15 + 0x2e) * fVar5 + *(float *)(puVar15 + 0x30) * fVar4;
        *(float *)((int)puVar15 + 0xd4) =
             *(float *)((int)puVar15 + 0x1a4) * fVar8 +
             *(float *)((int)puVar15 + 0x194) * fVar6 +
             *(float *)((int)puVar15 + 0x174) * fVar5 + *(float *)((int)puVar15 + 0x184) * fVar4;
        *(float *)(puVar15 + 0x1b) =
             *(float *)(puVar15 + 0x35) * fVar8 +
             *(float *)(puVar15 + 0x33) * fVar6 +
             *(float *)(puVar15 + 0x2f) * fVar5 + *(float *)(puVar15 + 0x31) * fVar4;
        *(float *)((int)puVar15 + 0xdc) =
             *(float *)((int)puVar15 + 0x1ac) * fVar8 +
             *(float *)((int)puVar15 + 0x19c) * fVar6 +
             *(float *)((int)puVar15 + 0x17c) * fVar5 + *(float *)((int)puVar15 + 0x18c) * fVar4;
        iVar30 = FUN_00366d48(uVar52,uVar29 - 0x240,uVar29 - 0x260);
        if (iVar30 != 0) {
          auVar53 = ZEXT416(0xffffffff);
          auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
          *(undefined4 *)(iVar30 + 0x48) = *(undefined4 *)(puVar15 + 0x19);
          auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
          auVar53 = loadVectorLeftIndexed(0x48,0x30d048);
          auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar53 = vectorMultiplyAddFloatingPoint
                              (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60
                               ,auVar54);
          auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
          auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar14 = storeVectorElementWordIndexed
                             (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0,
                              (ulonglong)*(uint *)(iVar30 + 0x78));
          *(undefined4 *)(*(uint *)(iVar30 + 0x78) & 0xfffffffc) = uVar14;
          *(undefined1 *)(iVar30 + 0x20) = 1;
        }
      }
      fVar4 = pfVar13[0x5a];
      pfVar13[0x5a] = (float)((int)fVar4 + -1);
      if (fVar4 == 0.0) {
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x4c,0x30d048);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      if ((((pfVar13[0x58] < SQRT(fVar5 * fVar5 + fVar4 * fVar4)) ||
           (5.0 < ABS((moby->pos).z - g_heroPosition.z))) ||
          ((-1 < (int)pfVar13[0x5d] &&
           (iVar30 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar13[0x5d]),
           iVar30 == 0)))) && (moby->state = '\x01', moby->animationId != '\x01')) {
        mobyutil::MB_SetAnimation(moby,1,0,3);
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      uVar31 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14));
      if ((uVar31 & 0x40) != 0) {
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          mobyutil::MB_SetAnimation(moby,4,0,3);
        }
        auVar53 = ZEXT416(0xffffffff);
        auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
        auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar53 = loadVectorLeftIndexed(0x10,0x30d048);
        auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar53 = vectorMultiplyAddFloatingPoint
                            (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                             auVar54);
        auVar54 = loadVectorLeftIndexed(0x168,uVar39);
        auVar55 = loadVectorRightIndexed(0x178,uVar39);
        auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
        auVar53 = ZEXT416((auVar54._0_4_ | auVar55._0_4_) + auVar53._0_4_) &
                  (undefined1  [16])0xffffffff;
        uVar14 = storeVectorElementWordIndexed
                           (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,
                            uVar39);
        *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      }
    }
    else if (bVar1 < 6) {
      uVar31 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14));
      if (((uVar31 & 0x40) != 0) && (moby->state = '\x06', moby->animationId != '\a')) {
        mobyutil::MB_SetAnimation(moby,7,0,3);
      }
    }
    else if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', moby->animationId != '\x03')
            ) {
      mobyutil::MB_SetAnimation(moby,3,0,3);
    }
  }
  else if (bVar1 < 8) {
    *(MobyInstance **)(puVar15 + 0x2a) = moby;
    *(undefined4 *)((int)puVar15 + 0x154) = 0;
    *(undefined4 *)(puVar15 + 0x2c) = 0;
    fVar4 = g_heroPosition.y;
    *(float *)(puVar15 + 0x1c) = g_heroPosition.x;
    fVar5 = g_heroPosition.z;
    *(float *)((int)puVar15 + 0xe4) = fVar4;
    fVar4 = g_heroPosition.w;
    *(float *)(puVar15 + 0x1d) = fVar5;
    fVar7 = (moby->pos).x;
    *(float *)((int)puVar15 + 0xec) = fVar4;
    fVar10 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x1e) = fVar7;
    fVar7 = (moby->pos).w;
    *(f32 *)((int)puVar15 + 0xf4) = fVar10;
    *(f32 *)((int)puVar15 + 0xfc) = fVar7;
    fVar4 = (moby->pos).z;
    *(float *)(puVar15 + 0x1d) = fVar5 + 0.75;
    *(float *)(puVar15 + 0x1f) = fVar4 + 0.75;
    iVar30 = stub::STUB_00055ab8_RET_0(uVar29 - 0x220,uVar29 - 0x230,0,moby,uVar29 - 0x1d0);
    if (iVar30 != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      dVar45 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
      if (dVar45 - (double)DAT_007ff700 < 0.0) {
        dVar45 = (double)DAT_007ff700;
      }
      if (CollOutput.pMoby == g_heroMobyPtr) {
        mobyfunc::GetBonePosition(moby,4,uVar29 - 0x210);
        fVar5 = g_heroPosition.x - *(float *)(puVar15 + 0x20);
        fVar6 = g_heroPosition.y - *(float *)((int)puVar15 + 0x104);
        fVar4 = g_heroPosition.z - *(float *)(puVar15 + 0x21);
        *(float *)(puVar15 + 0x36) = fVar5;
        *(float *)(puVar15 + 0x20) = fVar5;
        *(float *)((int)puVar15 + 0x104) = fVar6;
        fVar8 = g_heroPosition.w;
        *(float *)((int)puVar15 + 0x1b4) = fVar6;
        *(float *)((int)puVar15 + 0x10c) = fVar8;
        *(float *)(puVar15 + 0x21) = fVar4;
        *(float *)(puVar15 + 0x37) = ABS(fVar5) - ABS(fVar6);
        fVar8 = 0.0;
        fVar4 = (moby->rotation).z;
        uVar36 = (ulonglong)(*(uint *)(puVar15 + 0x36) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x37) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar15 + 0x1b4) >> 0x1d) & 4;
        fVar9 = ABS(*(float *)(puVar15 + 0x36));
        if (*(float *)(puVar15 + 0x37) - 0.0 < 0.0) {
          fVar9 = ABS(fVar6);
        }
        fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar36 << 2));
        fVar6 = *(float *)(((uint)(uVar36 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)((int)puVar15 + 0x1b4));
        if (*(float *)(puVar15 + 0x37) - 0.0 < 0.0) {
          fVar17 = ABS(fVar5);
        }
        if (0.0 < fVar9) {
          lVar32 = uVar29 - 0x300;
          lVar37 = uVar29 - 0x114;
          lVar33 = uVar29 - 0x124;
          lVar40 = 2;
          fVar5 = (fVar17 - fVar9) / (fVar17 + fVar9);
          fVar9 = fVar5 * fVar5;
          *(float *)(puVar15 + 0x3f) = fVar5;
          *(float *)(puVar15 + 0x3e) = fVar5;
          *(float *)((int)puVar15 + 500) = fVar5;
          *(float *)((int)puVar15 + 0x1ec) = fVar5;
          fVar5 = fVar9 * fVar9;
          *(float *)(puVar15 + 0x3e) = *(float *)(puVar15 + 0x3e) * fVar9;
          *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar5;
          *(float *)(puVar15 + 0x3f) = *(float *)(puVar15 + 0x3f) * fVar5 * fVar9;
          do {
            *(float *)((int)lVar32 + 0x1ec) = *(float *)((int)lVar32 + 0x1dc) * fVar5 * fVar5;
            iVar30 = (int)lVar33;
            lVar33 = lVar33 + 8;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)(iVar30 + 4) * fVar5 * fVar5;
            lVar37 = lVar37 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar40 = 4;
          lVar37 = uVar29 - 0x124;
          pfVar34 = (float *)&DAT_007358e0;
          lVar32 = lVar38;
          lVar33 = lVar37;
          do {
            fVar5 = *pfVar34;
            fVar9 = pfVar34[1];
            pfVar34 = pfVar34 + 2;
            *(float *)((int)lVar32 + 0x1ec) = *(float *)((int)lVar32 + 0x1ec) * fVar5;
            lVar32 = lVar32 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)((int)lVar33 + 4) * fVar9;
            lVar33 = lVar33 + 8;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
          lVar32 = 2;
          do {
            iVar30 = (int)lVar38;
            lVar38 = lVar38 + 0x10;
            iVar16 = (int)lVar37;
            lVar37 = lVar37 + 0x10;
            fVar8 = fVar8 + *(float *)(iVar30 + 0x1ec) + *(float *)(iVar16 + 4) +
                    *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          fVar8 = (fVar8 + 0.7853982) * fVar11 + fVar6;
        }
        mobyutil::AccelDeltAng
                  ((double)(fVar8 - fVar4),0x3f947ae140000000,0x3fd3333340000000,
                   (double)(float)(0.05000000074505806 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                   uVar39 + 0x150);
      }
      else {
        mobyutil::AccelDeltAng
                  (0,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(float)(0.10000000149011612 / dVar45),uVar39 + 0x15c,&DAT_0030d048,
                   uVar39 + 0x150);
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar53 = ZEXT416(0xffffffff);
      auVar53 = auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60;
      moby->state = '\x03';
      auVar54 = vectorShiftLeftIntegerWord(auVar53,auVar53);
      auVar53 = loadVectorLeftIndexed(0x30,0x30d048);
      auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar55 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar53 = vectorMultiplyAddFloatingPoint
                          (auVar55,auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,
                           auVar54);
      auVar53 = vectorConvertToSignedFixedPointWordSaturate(auVar53,0);
      auVar53 = auVar53 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar14 = storeVectorElementWordIndexed
                         (auVar53 | auVar53 << 0x20 | auVar53 << 0x40 | auVar53 << 0x60,0x168,uVar39
                         );
      *(undefined4 *)((uint)(pfVar13 + 0x5a) & 0xfffffffc) = uVar14;
      if (moby->animationId != '\x04') {
        mobyutil::MB_SetAnimation(moby,4,0,0);
      }
    }
  }
  else if ((bVar1 < 9) &&
          (uVar31 = mobyutil::MB_UpdateKick(moby,(KickVars *)(pfVar13 + 0x14)), (uVar31 & 0x40) != 0
          )) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
LAB_0030e8bc:
  mobyutil::MB_ColorDyingMoby(moby,uVar39 + 0x40);
  pfVar13[0x5b] = pfVar13[0x5b] * DAT_007ff704;
  fastfunc::FastQuaternionToEuler(uVar29 - 0x2a0,1);
  lVar38 = uVar39 + 0x110;
  fastfunc::FastQuaternionToEuler((double)pfVar13[0x57],lVar38,2);
  fastfunc::FastQuaternionMult(lVar38,lVar38,uVar29 - 0x2a0);
  return;
}



//==== 0030e964  ns=mobyupdate_helpers  size=0x14
// sig: undefined M242_0030e964(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M242_0030e964(void)

{
  DAT_007ff758 = 0x10000;
  return;
}



//==== 0030e980  ns=mobyupdate_helpers  size=0x458
// sig: undefined M242_0030e980(void)
// callers(1): 0030eef4 mobyupdate_unsorted::UpdateMoby_242
// callees(5): 0005e598 collproc::CollMobySphere; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 00500b64 fastfunc::FastEulerToMtx; 005010c0 fastfunc::FastNormalizeRMtx4; 005c5ad0 libc::memcpy

ulonglong mobyupdate_helpers::M242_0030e980(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 in_LR;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar11;
  pfVar10 = (float *)param_2;
  uVar12 = (ulonglong)(uint)pfVar10[2] & 0x100;
  if ((int)uVar12 == 0) {
    fastfunc::FastEulerToMtx(uVar11 - 0x120,param_1 + 0x40);
    auVar30 = loadVectorLeftIndexed(in_LR,param_2);
    auVar31 = loadVectorLeftIndexed(in_LR,0x30e978);
    auVar31 = auVar31 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = loadVectorLeftIndexed(4,param_2);
    auVar33 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar32);
    auVar32 = vectorConditionalSelect(auVar32,auVar30,auVar33);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar33 = loadVectorLeftIndexed(0xc0,lVar1);
    auVar34 = loadVectorLeftIndexed(0xc4,lVar1);
    auVar35 = loadVectorLeftIndexed(0xcc,lVar1);
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar36 = loadVectorLeftIndexed(200,lVar1);
    auVar37 = loadVectorLeftIndexed(0x10,param_1);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar30);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x14,param_1);
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    fVar2 = pfVar10[1];
    if (pfVar10[1] - *pfVar10 < 0.0) {
      fVar2 = *pfVar10;
    }
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    dVar28 = 0.5;
    *(undefined4 *)((int)puVar9 + 0x8c) = 0;
    *(undefined4 *)(puVar9 + 0x11) = 0;
    *(undefined4 *)((int)puVar9 + 0x84) = 0;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    auVar30 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar30);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar37);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar32);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar38);
    auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x8c,lVar1);
    *(undefined4 *)((int)puVar9 + 0x8c) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x80,lVar1);
    *(undefined4 *)(puVar9 + 0x10) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x84,lVar1);
    *(undefined4 *)((int)puVar9 + 0x84) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar9 + 0x11) = uVar8;
    uVar12 = collproc::CollMobySphere((double)(fVar2 * 0.5),uVar11 - 0x140,0x80,0x10,param_1,0);
    iVar21 = (int)uVar12;
    if (iVar21 != 0) {
      lVar13 = -((longlong)(int)(uVar12 << 2) + 0x7fU & 0xfffffffffffffff0);
      uVar14 = lVar1 + lVar13;
      uVar17 = uVar14 & 0xffffffff;
      *(ulonglong *)((int)puVar9 + (int)lVar13) = *puVar9;
      pvVar15 = libc::memcpy((void *)((int)uVar14 + 0x70),&DAT_00a14a00,
                             (size_t)((uVar12 & 0xffffffff) << 2));
      uVar12 = (ulonglong)(int)pvVar15;
      iVar20 = 0;
      if (0 < iVar21) {
        do {
          uVar7 = *(uint *)((int)uVar17 + 0x70);
          if (uVar7 != 0) {
            bVar4 = *(byte *)(uVar7 + 0x20);
            uVar12 = (ulonglong)bVar4;
            if (bVar4 != 0xfd && bVar4 != 0xfe) {
              iVar18 = (int)param_1;
              dVar27 = (double)(*(float *)(uVar7 + 0x14) - *(float *)(iVar18 + 0x14));
              dVar26 = (double)(*(float *)(uVar7 + 0x10) - *(float *)(iVar18 + 0x10));
              dVar29 = (double)*(float *)(uVar7 + 0x1c);
              dVar25 = (double)(*(float *)(uVar7 + 0x18) - *(float *)(iVar18 + 0x18));
              fastfunc::FastNormalizeRMtx4(uVar11 - 0xf0,uVar11 - 0x120);
              dVar22 = (double)*pfVar10;
              dVar23 = (double)pfVar10[10];
              fVar2 = (float)((double)*(float *)(puVar9 + 0x20) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1e) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1a) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1c) * dVar27))));
              dVar24 = (double)pfVar10[1];
              fVar3 = (float)((double)*(float *)(puVar9 + 0x21) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1f) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1b) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1d) * dVar27))));
              fVar5 = *(float *)(iVar18 + 0x14);
              fVar6 = *(float *)(iVar18 + 0x18);
              if (-(float)(dVar22 * dVar28 + dVar23) <= fVar2) {
                if ((float)(dVar22 * dVar28 + dVar23) < fVar2) {
                  fVar2 = (float)(dVar22 * dVar28);
                }
              }
              else {
                fVar2 = (float)(dVar22 * -0.5);
              }
              if (-(float)(dVar24 * dVar28 + (double)pfVar10[0xb]) <= fVar3) {
                if ((float)(dVar24 * dVar28 + (double)pfVar10[0xb]) < fVar3) {
                  fVar3 = (float)(dVar24 * dVar28);
                }
              }
              else {
                fVar3 = (float)(dVar24 * -0.5);
              }
              *(float *)(puVar9 + 0x12) =
                   *(float *)(puVar9 + 0x14) * fVar2 +
                   *(float *)(puVar9 + 0x18) * fVar3 + *(float *)(iVar18 + 0x10);
              *(float *)((int)puVar9 + 0x94) =
                   *(float *)((int)puVar9 + 0xa4) * fVar2 +
                   *(float *)((int)puVar9 + 0xc4) * fVar3 + fVar5;
              *(float *)(puVar9 + 0x13) =
                   *(float *)(puVar9 + 0x15) * fVar2 + *(float *)(puVar9 + 0x19) * fVar3 + fVar6;
              *(float *)((int)puVar9 + 0x9c) =
                   *(float *)((int)puVar9 + 0xcc) * fVar3 + *(float *)((int)puVar9 + 0xac) * fVar2 +
                   (float)((double)*(float *)((int)puVar9 + 0x10c) * dVar29 +
                          (double)(float)((double)*(float *)((int)puVar9 + 0xfc) * dVar25 +
                                         (double)(float)((double)*(float *)((int)puVar9 + 0xdc) *
                                                         dVar26 + (double)(float)((double)*(float *)
                                                  ((int)puVar9 + 0xec) * dVar27))));
              uVar12 = collproc::CollMobySphere(dVar23,uVar11 - 0x130);
              iVar18 = 0;
              iVar19 = (int)uVar12;
              puVar16 = &DAT_00a14a00;
              if (0 < iVar19) {
                do {
                  uVar12 = (ulonglong)*puVar16;
                  if (*puVar16 == uVar7) {
                    uVar12 = mobyutil::CollDamageMobyDirect_wrap
                                       ((double)pfVar10[0xc],uVar7,param_1,0x10001);
                  }
                  iVar18 = iVar18 + 1;
                  puVar16 = puVar16 + 1;
                } while (iVar18 < iVar19);
              }
            }
          }
          iVar20 = iVar20 + 1;
          uVar17 = uVar17 + 4;
        } while (iVar20 < iVar21);
      }
    }
  }
  return uVar12;
}



//==== 0030edd8  ns=mobyupdate_helpers  size=0xa8
// sig: undefined M242_0030edd8(void)
// callers(1): 0030eef4 mobyupdate_unsorted::UpdateMoby_242
// callees(0): 

int mobyupdate_helpers::M242_0030edd8
              (longlong param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  *param_2 = 0;
  iVar3 = 0;
  *param_3 = 0;
  pMVar2 = MobyInstance;
  puVar4 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  do {
    uVar1 = *puVar4;
    uVar6 = (uint)pMVar2[uVar1 & 0x7fff].state;
    if (uVar6 < 0x80) {
      iVar5 = iVar5 + 1;
      if ((param_4 == 0xffffffff) || (uVar6 == param_4)) {
        *param_2 = *param_2 + 1;
        iVar3 = *param_3;
      }
      if ((param_5 == 0xffffffff) || (pMVar2[uVar1 & 0x7fff].state == param_5)) {
        iVar3 = iVar3 + 1;
        *param_3 = iVar3;
      }
    }
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return iVar5;
}



//==== 0030ee80  ns=mobyupdate_helpers  size=0x74
// sig: undefined M242_0030ee80(void)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

void mobyupdate_helpers::M242_0030ee80(int param_1,int param_2,MobyInstance *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((uVar1 & 0x200) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 3;
  }
  else {
    if ((param_3 != (MobyInstance *)0x0) && ((uVar1 & 1) == 0)) {
      mobyfunc::DeleteMoby(param_3);
    }
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}



//==== 0030eef4  ns=mobyupdate_unsorted  size=0x6ac
// sig: undefined UpdateMoby_242(MobyInstance * moby)
// callers(0): 
// callees(7): 000efb38 mobyfunc::DeleteMoby; 0030e980 mobyupdate_helpers::M242_0030e980; 0030edd8 mobyupdate_helpers::M242_0030edd8; 004fff60 fastfunc::FastDecTimerS32; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 00655dcc: 'moby:%d(%d) open trigger by openCount:%d count:%d at %d\n' | 00655e0c: 'moby:%d(%d) close trigger by closedCount:%d count:%d at %d\n' | 00655e4c: 'Warning! moby 242 does not have effect moby!\n' | 00655e7c: 'moby:%d(%d) opening at %d\n' | 00655e9c: 'moby:%d(%d) open (state) at %d\n' | 00655ebc: 'moby:%d(%d) open (timer) at %d\n' | 00655edc: 'moby:%d(%d) closing at %d\n' | 00655efc: 'moby:%d(%d) closed (state) at %d\n' | 00655f24: 'moby:%d(%d) closed (timer) at %d\n'

/* Moby 242 */

void mobyupdate_unsorted::UpdateMoby_242(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  s8 sVar10;
  int iVar9;
  float fVar11;
  MobyInstance *moby_00;
  double dVar12;
  double dVar13;
  int local_40;
  int local_3c;
  
  moby_00 = (MobyInstance *)0x0;
  pfVar4 = (float *)moby->pVar;
  if (pfVar4[4] != -NAN) {
    moby_00 = MobyInstance + (int)pfVar4[4];
  }
  bVar5 = false;
  bVar6 = false;
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    if (moby->state != '\0') {
      uVar8 = mobyupdate_helpers::M242_0030edd8
                        (pfVar4[7],&local_40,&local_3c,*(undefined1 *)((int)pfVar4 + 0x1a),
                         *(undefined1 *)((int)pfVar4 + 0x1b));
      iVar9 = (int)uVar8;
      if ((iVar9 == 0) || (iVar9 == local_40)) {
        if (moby->state == '\x01') {
          libc::printf("moby:%d(%d) open trigger by openCount:%d count:%d at %d\n",moby->uid,
                       moby->oClass,local_40,uVar8,worldUpdateTime);
        }
        bVar5 = true;
      }
      else if (local_3c == iVar9) {
        if (moby->state == '\x03') {
          libc::printf("moby:%d(%d) close trigger by closedCount:%d count:%d at %d\n",moby->uid,
                       moby->oClass,local_3c,uVar8,worldUpdateTime);
        }
        bVar6 = true;
      }
    }
  }
  else {
    bVar5 = true;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    mobyfunc::DeleteMoby(moby);
  }
  else if (uVar1 == '\x04') {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 2) == 0)) {
      dVar12 = (double)fastfunc::FastIntToDouble(pfVar4[3]);
      dVar13 = (double)fastfunc::FastIntToDouble((int)pfVar4[3] - (int)pfVar4[8]);
      sVar10 = fastfunc::FastDoubleToInt
                         ((double)(float)((double)(float)((double)pfVar4[9] * dVar13) / dVar12));
      moby_00->alpha = sVar10;
    }
    fVar11 = pfVar4[2];
    if (((((uint)fVar11 & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar4 + 0x19) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar4 + 0x19))) {
      libc::printf("moby:%d(%d) closed (state) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x01';
      fVar11 = pfVar4[2];
    }
    if ((((uint)fVar11 & 8) == 0) && (iVar9 = fastfunc::FastDecTimerS32(pfVar4 + 8), iVar9 != 0)) {
      libc::printf("moby:%d(%d) closed (timer) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x01';
    }
    mobyupdate_helpers::M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\x03') {
    if (bVar6) {
      if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)(pfVar4 + 6) != 0xff)) {
        moby_00->state = *(u8 *)(pfVar4 + 6);
      }
      pfVar4[8] = pfVar4[3];
      uVar7 = worldUpdateTime;
      moby->collision = moby->pClass->collision;
      libc::printf("moby:%d(%d) closing at %d\n",moby->uid,moby->oClass,uVar7);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 2) == 0)) {
      dVar12 = (double)fastfunc::FastIntToDouble(pfVar4[3]);
      dVar13 = (double)fastfunc::FastIntToDouble(pfVar4[8]);
      sVar10 = fastfunc::FastDoubleToInt
                         ((double)(float)((double)(float)((double)pfVar4[9] * dVar13) / dVar12));
      moby_00->alpha = sVar10;
    }
    if (((((uint)pfVar4[2] & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar4 + 0x17) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar4 + 0x17))) {
      libc::printf("moby:%d(%d) open (state) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      fVar11 = pfVar4[2];
      moby->collision = (ushort *)0x0;
      if (((uint)fVar11 & 0x200) == 0) {
        moby->state = '\x03';
      }
      else {
        if (((uint)fVar11 & 1) == 0) {
          mobyfunc::DeleteMoby(moby_00);
        }
        moby->state = '\x05';
      }
    }
    if ((((uint)pfVar4[2] & 8) == 0) && (iVar9 = fastfunc::FastDecTimerS32(pfVar4 + 8), iVar9 != 0))
    {
      libc::printf("moby:%d(%d) open (timer) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->collision = (ushort *)0x0;
      if (((uint)pfVar4[2] & 0x200) == 0) {
        moby->state = '\x03';
      }
      else {
        if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 1) == 0)) {
          mobyfunc::DeleteMoby(moby_00);
        }
        moby->state = '\x05';
      }
    }
    mobyupdate_helpers::M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\x01') {
    if (bVar5) {
      if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)((int)pfVar4 + 0x16) != 0xff)) {
        moby_00->state = *(u8 *)((int)pfVar4 + 0x16);
      }
      pfVar4[8] = pfVar4[3];
      libc::printf("moby:%d(%d) opening at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x02';
    }
    mobyupdate_helpers::M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\0') {
    if (moby_00 == (MobyInstance *)0x0) {
      libc::printf("Warning! moby 242 does not have effect moby!\n");
    }
    else {
      *(MOBY_OCLASSES *)(pfVar4 + 5) = moby_00->oClass;
      dVar12 = (double)fastfunc::FastIntToDouble(moby_00->alpha);
      pfVar4[9] = (float)dVar12;
      if (((uint)pfVar4[2] & 0x10) == 0) {
        if (((uint)pfVar4[2] & 0x40) != 0) {
          (moby_00->pos).x = (moby->pos).x;
          (moby_00->pos).y = (moby->pos).y;
          (moby_00->pos).z = (moby->pos).z;
          (moby_00->pos).w = (moby->pos).w;
        }
      }
      else {
        (moby->pos).x = (moby_00->pos).x;
        (moby->pos).y = (moby_00->pos).y;
        (moby->pos).z = (moby_00->pos).z;
        (moby->pos).w = (moby_00->pos).w;
      }
      if (((uint)pfVar4[2] & 0x20) == 0) {
        if (((uint)pfVar4[2] & 0x80) != 0) {
          (moby_00->rotation).x = (moby->rotation).x;
          (moby_00->rotation).y = (moby->rotation).y;
          (moby_00->rotation).z = (moby->rotation).z;
          (moby_00->rotation).w = (moby->rotation).w;
        }
      }
      else {
        (moby->rotation).x = (moby_00->rotation).x;
        (moby->rotation).y = (moby_00->rotation).y;
        (moby->rotation).z = (moby_00->rotation).z;
        (moby->rotation).w = (moby_00->rotation).w;
      }
    }
    fVar11 = pfVar4[1];
    fVar2 = *pfVar4;
    fVar3 = moby->pClass->gScale;
    moby->state = '\x01';
    if (fVar2 - fVar11 < 0.0) {
      fVar2 = fVar11;
    }
    moby->scale = fVar3 * fVar2;
  }
  return;
}



//==== 0030f5a0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M243_0030f5a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M243_0030f5a0(void)

{
  DAT_007ff7cc = 0x10000;
  return;
}



//==== 0030f5c8  ns=Global  size=0x1c8
// sig: undefined FUN_0030f5c8(void)
// callers(1): 002fa6f0 mobyupdate_unsorted::UpdateMoby_227
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_0030f5c8(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pMVar3 = mobyfunc::CreateMoby(0xf3);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar4 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
    dVar7 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar6);
    auVar8 = ZEXT416(0xffffffff);
    auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\x01';
    puVar1[4] = param_1;
    auVar8 = loadVectorLeftIndexed(8,0x30f5b8);
    auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x14,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 5) & 0xfffffffc) = uVar2;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    (pMVar3->rotation).x = (float)dVar4;
    (pMVar3->rotation).y = (float)dVar5;
    (pMVar3->rotation).z = (float)dVar7;
    (pMVar3->rotation).w = 0.0;
    dVar5 = 1.0471975803375244;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * 1.0471975803375244),
                               (float)((double)mobyutil::g_FrameTime * dVar6));
    puVar1[6] = (float)dVar4;
    dVar4 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar5),
                               (float)((double)mobyutil::g_FrameTime * dVar6));
    puVar1[7] = (float)dVar4;
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 0030f810  ns=mobyupdate_unsorted  size=0x10bc
// sig: undefined UpdateMoby_243(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 0015d12c sound::PlayMobySound; 001d4d88 FUN_001d4d88; 0020bb70 FUN_0020bb70; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502758 fastfunc::FastDoubleToInt

/* Moby 243 */

void mobyupdate_unsorted::UpdateMoby_243(MobyInstance *moby)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  int iVar14;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [48];
  undefined1 local_160 [48];
  undefined4 local_130 [12];
  longlong local_100;
  
  lVar11 = (longlong)(int)moby;
  dVar26 = 0.0;
  pfVar4 = (float *)moby->pVar;
  bVar1 = moby->state != '\0';
  dVar27 = 1.0;
  if ((((pfVar4[4] != 0.0) && (cVar3 = *(char *)((int)pfVar4[4] + 0x20), cVar3 != -2)) &&
      (cVar3 != -3)) || (bVar1)) {
    if (bVar1) {
      (moby->pos).x = (moby->pos).x + *pfVar4;
      (moby->pos).y = (moby->pos).y + pfVar4[1];
      (moby->pos).z = (moby->pos).z + pfVar4[2];
      pfVar4[2] = -(DAT_0071f418 * 9.8 - pfVar4[2]);
      dVar29 = 290.5;
      local_100 = (longlong)(int)(animationSpeed * 290.5);
      lVar15 = lVar11 + 0x10;
      iVar14 = collproc::CollLine(local_1e0,lVar15,0,pfVar4[4],local_190);
      if (iVar14 == 0) {
        iVar14 = fastfunc::FastDecTimerS32(pfVar4 + 5);
        if (iVar14 != 0) {
          moby->setByGroup = '\x01';
        }
      }
      else if (CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < CollOutput.poly) {
          moby->setByGroup = '\x01';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          fastfunc::FastVecNormalize(local_1d0,pfVar4,0xa10980);
        }
      }
      else if (((CollOutput.pMoby != g_heroMobyPtr) &&
               (CollOutput.pMoby != (MobyInstance *)pfVar4[4])) ||
              (local_100 = (longlong)(int)((double)animationSpeed * dVar29),
              (int)pfVar4[5] < (int)((double)animationSpeed * dVar29))) {
        moby->setByGroup = '\x01';
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        fastfunc::FastVecNormalize(local_1d0,pfVar4,0xa10980);
      }
      if (moby->setByGroup != '\0') {
        uVar25 = 0x4008000000000000;
        collproc::CollMobySphere(0x4008000000000000,lVar15,0x310000,0x10,lVar11,local_160);
        dVar24 = -1.0;
        iVar14 = 0;
        dVar22 = 3.5;
        dVar21 = 6.5;
        dVar20 = 60.5;
        dVar29 = 120.5;
        do {
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar21);
          iVar16 = (int)((double)animationSpeed * dVar29);
          local_100 = (longlong)iVar16;
          uVar12 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar16);
          FUN_0020bb70(lVar15,local_1b0,uVar12,0,0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 10);
        iVar14 = 0;
        dVar19 = 10.0;
        dVar29 = 90.5;
        do {
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar26,(float)dVar27);
          mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar19);
          iVar16 = (int)((double)animationSpeed * dVar29);
          local_100 = (longlong)iVar16;
          uVar12 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar16);
          FUN_0020bb70(lVar15,local_1a0,uVar12,1,0);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 4);
        mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
        mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
        mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar27);
        fVar8 = GameCamera.posY - (moby->pos).y;
        fVar9 = GameCamera.posX - (moby->pos).x;
        fVar10 = GameCamera.posZ - (moby->pos).z;
        dVar21 = (double)SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8);
        iVar14 = (int)((double)animationSpeed * dVar29);
        local_100 = (longlong)iVar14;
        uVar12 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar14);
        FUN_0020bb70(lVar15,local_1c0,uVar12,1,0);
        iVar14 = 10;
        dVar27 = 8.0;
        if (dVar21 < 8.0) {
          iVar14 = fastfunc::FastDoubleToInt(dVar21);
          iVar14 = iVar14 + 2;
        }
        if (dVar21 - 7.0 < 0.0) {
          dVar26 = (double)(float)(7.0 - dVar21);
        }
        if (0 < iVar14) {
          iVar16 = 0;
          uVar12 = 0x41186a0000000000;
          dVar28 = 15.5;
          dVar24 = 20.5;
          dVar20 = 25.5;
          dVar29 = 30.5;
          do {
            dVar17 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar19);
            dVar18 = (double)mobyutil::g_FrameTime;
            local_130[0] = 0x4f008fff;
            local_130[1] = 0x4f008fff;
            local_130[2] = 0x4f007fff;
            local_130[3] = 0x4f006fff;
            local_130[4] = 0x2fffffff;
            local_130[5] = 0x2fffffff;
            local_130[6] = 0x2f005f7f;
            local_130[7] = 0x2f004f7f;
            local_130[8] = 0x2f003f7f;
            local_130[9] = 0x2f00004f;
            dVar23 = (double)(float)(dVar17 * dVar18 - (double)(float)(dVar18 * dVar26));
            local_130[10] = 0x2f000000;
            local_130[0xb] = 0x3f000000;
            lVar13 = mobyutil::MB_randInt(dVar17,dVar18,(double)(float)(dVar18 * dVar26),6);
            uVar5 = *(undefined4 *)((int)local_130 + (int)(lVar13 << 2));
            lVar13 = mobyutil::MB_randInt(6);
            uVar6 = *(undefined4 *)((int)local_130 + (int)(lVar13 << 2) + 0x18);
            iVar2 = (int)((double)animationSpeed * dVar24);
            local_100 = (longlong)iVar2;
            mobyutil::MB_randRange((int)((double)animationSpeed * dVar28),iVar2);
            iVar2 = (int)((double)animationSpeed * dVar29);
            local_100 = (longlong)iVar2;
            mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar2);
            partupd::SpawnPart_11(uVar12,dVar23,lVar15,local_1d0,uVar5,uVar6);
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar14);
        }
        uVar7 = (int)DAT_00a10714 >> 0x1f;
        uVar12 = 0x4010000000000000;
        if (((int)((uVar7 >> 1 ^ DAT_00a10714) - uVar7) < 0x3f733333) && (9.0 < dVar21)) {
          local_100 = (longlong)(int)(animationSpeed * 15.5);
          FUN_001d4d88(0x4010000000000000,lVar11,lVar15,local_1d0,uVar7,(int)(animationSpeed * 15.5)
                       ,0x7f,0x7f,0x7f);
          local_100 = (longlong)(int)(animationSpeed * 24.5);
          FUN_001d4d88(uVar12,lVar11,lVar15,local_1d0);
        }
        local_100 = (longlong)(int)(animationSpeed * 20.5);
        FUN_001d4d88(uVar12,lVar11,lVar15,local_1d0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
        local_100 = (longlong)(int)(animationSpeed * 27.5);
        FUN_001d4d88(dVar22,lVar11,lVar15,local_1d0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
        local_100 = (longlong)(int)(animationSpeed * 29.5);
        FUN_001d4d88(uVar25,lVar11,lVar15,local_1d0,0x20,(int)(animationSpeed * 29.5),0x20,0,0);
        *pfVar4 = 0.0;
        moby->setByGroup = '\0';
        sound::PlayMobySound(0,0,moby);
        auVar30 = ZEXT416(0xffffffff);
        auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        fVar8 = 0.35;
        if (dVar21 - 20.0 < 0.0) {
          fVar8 = (float)(dVar21 * 0.017500000074505806);
        }
        GameCamera.offset0.amp = 0.4 - fVar8;
        auVar32 = loadVectorLeftIndexed(0x50,0x30f790);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar30,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar31);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0
                       );
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  else {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



