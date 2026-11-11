//==== 002a0108  ns=mobyupdate_helpers  size=0x708
// sig: undefined M158_002a0108(void)
// callers(1): 002a0a10 mobyupdate_unsorted::UpdateMoby_158
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 001246b8 partupd::SpawnPart_13; 001d4d88 FUN_001d4d88; 0028cce0 mobyupdate_helpers::M1488_0028cce0; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M158_002a0108(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  int iVar10;
  longlong lVar8;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  double dVar25;
  undefined1 local_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar23 = 0x3feccccce0000000;
  uVar14 = 0x40083d70a0000000;
  uVar17 = 0x3fa99999a0000000;
  uVar20 = 0x41024f8000000000;
  partupd::SpawnPart_13
            (0x3feccccce0000000,0x40083d70a0000000,0x4009cccce0000000,0x3fa99999a0000000,
             0x41024f8000000000,local_120);
  iVar10 = 0;
  uVar24 = 0x4009ae1480000000;
  do {
    partupd::SpawnPart_13(uVar23,uVar14,uVar24,uVar17,uVar20,local_120);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 5);
  iVar10 = 0;
  dVar25 = 0.0;
  dVar15 = -1.875;
  dVar18 = 1.875;
  dVar21 = 3.75;
  uVar14 = 0x3ffccccce0000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar18);
    mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar18);
    mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar21);
    M1488_0028cce0(uVar23,uVar14,param_1,auStack_110,local_100,&DAT_00a15d30,0x162);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  iVar10 = 0;
  uVar14 = 0x3ff3333340000000;
  uVar17 = 0x4000ccccc0000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar18);
    mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar18);
    mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar21);
    iVar9 = mobyutil::MB_randInt(2);
    M1488_0028cce0(uVar14,uVar17,param_1,auStack_110,local_f0,&DAT_00a15d30,iVar9 + 0x163);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  if (param_2 != '\0') {
    fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
    fVar6 = GameCamera.posX - *(float *)(param_1 + 0x10);
    fVar7 = GameCamera.posZ - *(float *)(param_1 + 0x18);
    iVar10 = 10;
    dVar18 = 8.0;
    dVar15 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar15 < 8.0) {
      iVar10 = fastfunc::FastDoubleToInt(dVar15);
      iVar10 = iVar10 + 2;
    }
    iVar9 = 0;
    if (dVar15 - 7.0 < 0.0) {
      dVar25 = (double)(float)(7.0 - dVar15);
    }
    if (0 < iVar10) {
      dVar15 = 10.0;
      uVar14 = 0x41324f8000000000;
      dVar21 = 15.5;
      dVar16 = 20.5;
      dVar19 = 25.5;
      dVar22 = 30.5;
      do {
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar15);
        dVar12 = (double)mobyutil::g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar13 = (double)(float)(dVar11 * dVar12 - (double)(float)(dVar12 * dVar25));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar8 = mobyutil::MB_randInt(dVar11,dVar12,(double)(float)(dVar12 * dVar25),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2));
        lVar8 = mobyutil::MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar16);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar22);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar19),iVar1);
        partupd::SpawnPart_11(uVar14,dVar13,param_1 + 0x10,local_e0,uVar2,uVar3);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
    }
    uVar4 = (int)DAT_00a10714 >> 0x1f;
    uVar14 = 0x4022000000000000;
    uVar17 = 0x4018000000000000;
    if ((int)((uVar4 >> 1 ^ DAT_00a10714) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4022000000000000,param_1,param_1 + 0x10,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar17,param_1,param_1 + 0x10,local_e0);
    }
    iVar10 = param_1 + 0x10;
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar14,param_1,iVar10,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar17,param_1,iVar10,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x4008000000000000,param_1,iVar10,local_e0,0x20,(int)(animationSpeed * 29.5),0x20,0
                 ,0);
  }
  return;
}



//==== 002a0818  ns=mobyupdate_helpers  size=0x1dc
// sig: undefined M158_002a0818(void)
// callers(1): 002a0a10 mobyupdate_unsorted::UpdateMoby_158
// callees(6): 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 005cd098 libc::printf
// strings: 00655948: 'Moby class %d Damage Received: %f\n'

void mobyupdate_helpers::M158_002a0818(MobyInstance *param_1,longlong param_2,undefined8 param_3)

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
  int local_30 [4];
  
  if (param_1->state != '\x02') {
    iVar5 = mobyutil::MB_damage(param_1,0x330000,0);
    if (iVar5 != 0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar5 + 0x2c));
    }
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
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x2a0810);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
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
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 002a0a10  ns=mobyupdate_unsorted  size=0x1ac
// sig: undefined UpdateMoby_158(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 002a0108 mobyupdate_helpers::M158_002a0108; 002a0818 mobyupdate_helpers::M158_002a0818

/* Moby 158 */

void mobyupdate_unsorted::UpdateMoby_158(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_60 [24];
  
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    mobyupdate_helpers::M158_002a0818(moby,ZEXT48(moby->pVar),ZEXT48(moby->pVar) + 0x20);
  }
  else if (bVar1 < 3) {
    iVar2 = 0;
    mobyutil::MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0,0x3ff0000000000000,0x4034000000000000,
               moby,local_60,0,1,0xffffffffffffffff,10,3,0x10);
    dVar3 = (double)(moby->pos).x;
    dVar4 = (double)(moby->pos).y;
    dVar5 = (double)(moby->pos).z;
    dVar7 = 1.5;
    dVar6 = (double)(moby->pos).w;
    do {
      (moby->pos).x = (float)dVar3;
      (moby->pos).y = (float)dVar4;
      (moby->pos).z = (float)dVar5;
      (moby->pos).w = (float)dVar6;
      mobyutil::MB_RandomizeVector((float)dVar7,&(moby->pos).x);
      mobyupdate_helpers::M158_002a0108(moby,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    (moby->pos).w = (float)dVar6;
    (moby->pos).z = (float)dVar5;
    (moby->pos).y = (float)dVar4;
    (moby->pos).x = (float)dVar3;
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a0bc0  ns=mobyupdate_unsorted  size=0x1cc
// sig: undefined UpdateMoby_1584(MobyInstance * moby)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 00112900 mobyutil::MB_GetOrientation

/* Moby 1584 */

void mobyupdate_unsorted::UpdateMoby_1584(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyInstance *pMVar3;
  Vec4 local_20;
  
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    local_20.x = (moby->pos).x - *(float *)((int)pvVar1 + 0x60);
    local_20.y = (moby->pos).y - *(float *)((int)pvVar1 + 100);
    local_20.z = (moby->pos).z - *(float *)((int)pvVar1 + 0x68);
    local_20.w = (moby->pos).w;
    mobyutil::MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x20),&local_20,ZEXT48(pvVar1) + 0x70,
               (longlong)(int)moby + 0x40);
  }
  if (((moby->setByGroup != '\0') && (*(int *)((int)pvVar1 + 0x80) != 0)) &&
     (*(int *)((int)pvVar1 + 0x84) == 0)) {
    pMVar3 = mobyfunc::CreateMoby(0x764);
    *(MobyInstance **)((int)pvVar1 + 0x84) = pMVar3;
    if (pMVar3 != (MobyInstance *)0x0) {
      pMVar3->drawDistance = moby->drawDistance;
      *(undefined1 *)(*(int *)((int)pvVar1 + 0x84) + 0x31) = 1;
      *(undefined8 *)(*(int *)((int)pvVar1 + 0x84) + 0x38) = *(undefined8 *)&moby->color;
      *(float *)(*(int *)((int)pvVar1 + 0x84) + 0x2c) =
           *(float *)(*(int *)((int)pvVar1 + 0x84) + 0x2c) * (moby->scale / moby->pClass->gScale);
    }
  }
  *(f32 *)((int)pvVar1 + 0x60) = (moby->pos).x;
  *(f32 *)((int)pvVar1 + 100) = (moby->pos).y;
  *(f32 *)((int)pvVar1 + 0x68) = (moby->pos).z;
  *(f32 *)((int)pvVar1 + 0x6c) = (moby->pos).w;
  *(f32 *)((int)pvVar1 + 0x70) = (moby->rotation).x;
  iVar2 = *(int *)((int)pvVar1 + 0x84);
  *(f32 *)((int)pvVar1 + 0x74) = (moby->rotation).y;
  *(f32 *)((int)pvVar1 + 0x78) = (moby->rotation).z;
  *(f32 *)((int)pvVar1 + 0x7c) = (moby->rotation).w;
  if (iVar2 != 0) {
    *(f32 *)(iVar2 + 0x10) = (moby->pos).x;
    *(f32 *)(iVar2 + 0x14) = (moby->pos).y;
    *(f32 *)(iVar2 + 0x18) = (moby->pos).z;
    *(f32 *)(iVar2 + 0x1c) = (moby->pos).w;
    iVar2 = *(int *)((int)pvVar1 + 0x84);
    *(f32 *)(iVar2 + 0x40) = (moby->rotation).x;
    *(f32 *)(iVar2 + 0x44) = (moby->rotation).y;
    *(f32 *)(iVar2 + 0x48) = (moby->rotation).z;
    *(f32 *)(iVar2 + 0x4c) = (moby->rotation).w;
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar1 + 0x84));
  }
  return;
}



//==== 002a0d8c  ns=mobyupdate_helpers  size=0x60
// sig: undefined M1584_002a0d8c(void)
// callers(1): 00267060 FUN_00267060
// callees(0): 

void mobyupdate_helpers::M1584_002a0d8c(longlong param_1,char param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if (MobyInstance[*puVar2 & 0x7fff].oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
        MobyInstance[*puVar2 & 0x7fff].setByGroup = param_2;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 002a0dec  ns=Global  size=0x58
// sig: undefined FUN_002a0dec(void)
// callers(1): 00266758 mobyupdate_unsorted::UpdateMoby_1381
// callees(1): 000efb38 mobyfunc::DeleteMoby

void FUN_002a0dec(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  if (param_1->oClass == (DEPLANETIZER_GUN_0620|BOLT_CIRCLENUT)) {
    moby = *(MobyInstance **)((int)param_1->pVar + 0x84);
    if (moby != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(moby);
    }
    mobyfunc::DeleteMoby(param_1);
  }
  return;
}



//==== 002a0e58  ns=mobyupdate_unsorted  size=0x500
// sig: undefined UpdateMoby_{127_128_159_169}(MobyInstance * moby)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

/* Moby 127
   Moby 128
   Moby 159
   Moby 169 */

MobyInstance * mobyupdate_unsorted::UpdateMoby__127_128_159_169_(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pfVar2 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar2[4] = -NAN;
  }
  bVar1 = moby->state;
  pMVar4 = (MobyInstance *)(uint)bVar1;
  if (bVar1 == 4) {
    if ((((pfVar2[4] != -NAN) && (MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) &&
        (bVar1 = MobyInstance[(int)pfVar2[4]].state, bVar1 != 0xfd && bVar1 != 0xfe)) &&
       ((float)(uint)bVar1 != pfVar2[5])) {
      dVar7 = (double)(1.0 / (pfVar2[0xb] * 60.0));
      pfVar2[3] = (float)((double)pfVar2[3] - dVar7);
      dVar6 = 0.01745329238474369;
      dVar5 = (double)fastfunc::FastDiffRots
                                ((double)(moby->rotation).x,
                                 (double)(float)((double)(pfVar2[7] * 0.017453292) * dVar7));
      (moby->rotation).x = (float)dVar5;
      dVar5 = (double)fastfunc::FastDiffRots
                                ((double)(moby->rotation).y,
                                 (double)(float)((double)(float)((double)pfVar2[8] * dVar6) * dVar7)
                                );
      (moby->rotation).y = (float)dVar5;
      dVar5 = (double)fastfunc::FastDiffRots
                                ((double)(moby->rotation).z,
                                 (double)(float)((double)(float)((double)pfVar2[9] * dVar6) * dVar7)
                                );
      (moby->rotation).z = (float)dVar5;
      if (0 < (int)pfVar2[3]) {
        return (MobyInstance *)pfVar2[3];
      }
      (moby->rotation).x = *pfVar2;
      (moby->rotation).y = pfVar2[1];
      (moby->rotation).z = pfVar2[2];
      pfVar2[3] = 0.0;
      if (pfVar2[0xd] != -NAN) {
        sound::PlayMobySound((int)pfVar2[0xd],0,moby);
      }
      moby->state = '\x01';
      return (MobyInstance *)0x1;
    }
    if (pfVar2[0xc] != -NAN) {
      sound::PlayMobySound((int)pfVar2[0xc],0,moby);
    }
    pMVar4 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 3) {
    pMVar4 = (MobyInstance *)pfVar2[4];
    if ((pMVar4 != (MobyInstance *)0xffffffff) &&
       (pMVar4 = MobyInstance + (int)pMVar4, pMVar4 != (MobyInstance *)0x0)) {
      bVar1 = pMVar4->state;
      pMVar4 = (MobyInstance *)(uint)bVar1;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 == pfVar2[6])) {
        pfVar2[3] = 1.0;
        if (pfVar2[0xc] != -NAN) {
          sound::PlayMobySound((int)pfVar2[0xc],0,moby);
        }
        pMVar4 = (MobyInstance *)0x4;
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 == 2) {
    if (((pfVar2[4] != -NAN) && (MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) &&
       ((bVar1 = MobyInstance[(int)pfVar2[4]].state, bVar1 != 0xfd && bVar1 != 0xfe &&
        ((float)(uint)bVar1 == pfVar2[6])))) {
      if (pfVar2[0xc] != -NAN) {
        sound::PlayMobySound((int)pfVar2[0xc],0,moby);
      }
      moby->state = '\x04';
      return (MobyInstance *)0x4;
    }
    dVar6 = (double)(1.0 / (pfVar2[0xb] * 60.0));
    pfVar2[3] = (float)((double)pfVar2[3] + dVar6);
    dVar7 = 0.01745329238474369;
    dVar5 = (double)fastfunc::FastWrapRot
                              ((moby->rotation).x,(float)((double)(pfVar2[7] * 0.017453292) * dVar6)
                              );
    (moby->rotation).x = (float)dVar5;
    dVar5 = (double)fastfunc::FastWrapRot
                              ((moby->rotation).y,
                               (float)((double)(float)((double)pfVar2[8] * dVar7) * dVar6));
    (moby->rotation).y = (float)dVar5;
    dVar5 = (double)fastfunc::FastWrapRot
                              ((moby->rotation).z,
                               (float)((double)(float)((double)pfVar2[9] * dVar7) * dVar6));
    (moby->rotation).z = (float)dVar5;
    uVar3 = (int)pfVar2[3] >> 0x1f;
    pMVar4 = (MobyInstance *)((uVar3 >> 1 ^ (uint)pfVar2[3]) - uVar3);
    if (0x3f7fffff < (int)pMVar4) {
      dVar5 = (double)fastfunc::FastWrapRot(*pfVar2,(float)((double)pfVar2[7] * dVar7));
      (moby->rotation).x = (float)dVar5;
      dVar5 = (double)fastfunc::FastWrapRot(pfVar2[1],(float)((double)pfVar2[8] * dVar7));
      (moby->rotation).y = (float)dVar5;
      dVar5 = (double)fastfunc::FastWrapRot(pfVar2[2],(float)((double)pfVar2[9] * dVar7));
      pMVar4 = (MobyInstance *)0x3f800000;
      (moby->rotation).z = (float)dVar5;
      pfVar2[3] = 1.0;
      moby->state = '\x03';
      if (pfVar2[0xc] != -NAN) {
        pMVar4 = (MobyInstance *)sound::PlayMobySound((int)pfVar2[0xc],0,moby);
      }
    }
  }
  else if (bVar1 == 1) {
    if ((pfVar2[4] != -NAN) && (MobyInstance + (int)pfVar2[4] != (MobyInstance *)0x0)) {
      bVar1 = MobyInstance[(int)pfVar2[4]].state;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 != pfVar2[5])) {
        return (MobyInstance *)(uint)bVar1;
      }
    }
    if (pfVar2[0xc] != -NAN) {
      sound::PlayMobySound((int)pfVar2[0xc],0,moby);
    }
    pMVar4 = (MobyInstance *)0x0;
    pfVar2[3] = 0.0;
    moby->state = '\x02';
  }
  else if (bVar1 == 0) {
    *pfVar2 = (moby->rotation).x;
    pfVar2[1] = (moby->rotation).y;
    pfVar2[2] = (moby->rotation).z;
    pfVar2[3] = (moby->rotation).w;
    moby->state = (char)((LZCOUNT(-(int)pfVar2[0xf]) << 0x3a) >> 0x3f) + '\x02';
    pMVar4 = (MobyInstance *)pfVar2[0xe];
    pfVar2[3] = 0.0;
    if (0 < (int)pMVar4) {
      pMVar4 = (MobyInstance *)moby->pClass;
      moby->scale = (float)pMVar4->pClass * pfVar2[0xe];
    }
  }
  return pMVar4;
}



//==== 002a1358  ns=mobyupdate_helpers  size=0x14
// sig: undefined M169_002a1358(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M169_002a1358(void)

{
  DAT_007ac82c = 0x10000;
  return;
}



//==== 002a1370  ns=mobyupdate_helpers  size=0x1c0
// sig: undefined M169_002a1370(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 00500ca4 fastfunc::FastEulerToMtx1; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M169_002a1370(void)

{
  undefined1 local_100 [16];
  undefined1 auStack_f0 [64];
  undefined1 local_b0 [152];
  
  if (g_gameMode != GAME_MODE_SCENE) {
    fastfunc::FastEulerToMtx1(auStack_f0,local_100);
    draw::GetEffectTex(0xd);
    stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    FUN_00502f08(0,0,0,0,0,0);
    idol_draw::PackCmd(0,2,0,1,0x80);
    draw::FastDrawQuad(local_b0,auStack_f0,1,EffectTexHeaders,9);
  }
  return;
}



//==== 002a1540  ns=mobyupdate_helpers  size=0x134
// sig: undefined M169_002a1540(void)
// callers(0): 
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * mobyupdate_helpers::M169_002a1540(undefined4 param_1,f32 *param_2)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  pMVar2 = mobyfunc::CreateMoby(0xa0);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0x7f;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    puVar1 = (undefined4 *)pMVar2->pVar;
    pMVar2->scale = pMVar2->scale * 0.65;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    puVar1[0xc] = param_1;
    (pMVar2->pos).x = *param_2;
    (pMVar2->pos).y = param_2[1];
    (pMVar2->pos).z = param_2[2];
    (pMVar2->pos).w = param_2[3];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    dVar5 = 1.0471975803375244;
    dVar4 = 3.1415927410125732;
    dVar3 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 1.0471976,mobyutil::g_FrameTime * 3.1415927);
    puVar1[0xe] = (float)dVar3;
    dVar3 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar5),
                               (float)((double)mobyutil::g_FrameTime * dVar4));
    puVar1[0xf] = (float)dVar3;
    mobyfunc::UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}



//==== 002a1698  ns=mobyupdate_helpers  size=0x370
// sig: undefined M169_002a1698(void)
// callers(0): 
// callees(4): 00057820 collproc::CollLine; 000fcbe8 mobyutil::MB_randRangeFloat; 001122ac mobyutil::MB_GetPlatformParent; 00500608 fastfunc::FastVecNormalize

void mobyupdate_helpers::M169_002a1698(undefined4 *param_1,int param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  float *pfVar3;
  undefined2 uVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_60 [16];
  
  dVar15 = -1.0;
  dVar14 = 1.0;
  dVar16 = 0.0;
  pfVar3 = *(float **)(param_2 + 0x78);
  uVar7 = ZEXT48(pfVar3);
  dVar8 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
  dVar9 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
  dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar15,(float)dVar14);
  *(undefined1 *)(param_2 + 0x20) = 1;
  *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) * 1.5384616;
  dVar14 = (double)mobyutil::MB_randRangeFloat
                             (mobyutil::g_FrameTime * 0.01,mobyutil::g_FrameTime * 0.1);
  bVar1 = g_standingOnMoby != 0;
  dVar12 = (double)SQRT((float)(dVar15 * dVar15 +
                               (double)(float)(dVar8 * dVar8 + (double)(float)(dVar9 * dVar9))));
  dVar10 = (double)(float)(dVar14 / dVar12);
  dVar14 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar14 = (double)(float)(dVar8 * dVar10);
  }
  dVar13 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar13 = (double)(float)(dVar9 * dVar10);
  }
  dVar11 = dVar16;
  if (dVar16 - dVar12 < 0.0) {
    dVar11 = (double)(float)(dVar15 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar14 = (double)(float)(dVar8 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar13 = (double)(float)(dVar9 * dVar10);
  }
  if (dVar12 - dVar16 < 0.0) {
    dVar11 = (double)(float)(dVar15 * dVar10);
  }
  *pfVar3 = (float)(dVar14 + (double)*param_3);
  pfVar3[1] = (float)(dVar13 + (double)param_3[1]);
  fVar2 = param_3[2];
  pfVar3[3] = 0.0;
  pfVar3[2] = (float)(dVar11 + (double)fVar2);
  if ((bVar1) && (iVar6 = mobyutil::MB_GetPlatformParent(), iVar6 != 0)) {
    *pfVar3 = *pfVar3 + DAT_00969de0;
    pfVar3[1] = pfVar3[1] + DAT_00969de4;
    pfVar3[2] = pfVar3[2] + DAT_00969de8;
  }
  pMVar5 = g_heroMobyPtr;
  auVar17 = ZEXT416(0xffffffff);
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
  auVar17 = loadVectorLeftIndexed(0x18,0x2a1674);
  auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar17 = vectorMultiplyAddFloatingPoint
                      (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,auVar18
                      );
  auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
  auVar17 = vectorSplatHalfWord(auVar17,1);
  uVar4 = storeVectorElementHalfWordIndexed(auVar17,0x34,uVar7);
  *(undefined2 *)(pfVar3 + 0xd) = uVar4;
  *(undefined4 *)(param_2 + 0x10) = *param_1;
  *(undefined4 *)(param_2 + 0x14) = param_1[1];
  *(undefined4 *)(param_2 + 0x18) = param_1[2];
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  iVar6 = collproc::CollLine(local_60,param_1,0,pMVar5,0);
  if (iVar6 != 0) {
    dVar8 = (double)CollOutput.ip.x;
    *(float *)(param_2 + 0x10) = CollOutput.ip.x;
    dVar9 = (double)CollOutput.ip.y;
    *(float *)(param_2 + 0x14) = CollOutput.ip.y;
    dVar15 = (double)CollOutput.ip.z;
    *(float *)(param_2 + 0x18) = CollOutput.ip.z;
    *(float *)(param_2 + 0x1c) = CollOutput.ip.w;
    dVar10 = (double)SQRT(CollOutput.normal.z * CollOutput.normal.z +
                          CollOutput.normal.x * CollOutput.normal.x +
                          CollOutput.normal.y * CollOutput.normal.y);
    fVar2 = (float)((double)(DAT_0071f418 * 9.7) / dVar10);
    dVar14 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar14 = (double)(CollOutput.normal.z * fVar2);
    }
    dVar12 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar12 = (double)(CollOutput.normal.y * fVar2);
    }
    dVar13 = dVar16;
    if (dVar16 - dVar10 < 0.0) {
      dVar13 = (double)(CollOutput.normal.x * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar14 = (double)(CollOutput.normal.z * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar12 = (double)(CollOutput.normal.y * fVar2);
    }
    if (dVar10 - dVar16 < 0.0) {
      dVar13 = (double)(CollOutput.normal.x * fVar2);
    }
    *(float *)(param_2 + 0x18) = (float)(dVar15 + dVar14);
    *(float *)(param_2 + 0x14) = (float)(dVar9 + dVar12);
    *(float *)(param_2 + 0x10) = (float)(dVar8 + dVar13);
    fastfunc::FastVecNormalize(uVar7,uVar7,0xa10980);
    *pfVar3 = *pfVar3 * 0.6;
    pfVar3[1] = pfVar3[1] * 0.6;
    pfVar3[2] = pfVar3[2] * 0.6;
  }
  return;
}



//==== 002a1a48  ns=mobyupdate_helpers  size=0x92c
// sig: undefined M160_002a1a48(void)
// callers(1): 002a2438 mobyupdate_unsorted::UpdateMoby_160
// callees(6): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 0006d720 RegisterFuncForMoby; 001122ac mobyutil::MB_GetPlatformParent; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

undefined8 mobyupdate_helpers::M160_002a1a48(float *param_1,MobyInstance *param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  short sVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  float fVar18;
  int iVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int iVar26;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar28;
  longlong lVar27;
  longlong lVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar25 = uVar21 - 0x160;
  puVar17 = (ulonglong *)lVar25;
  *puVar17 = uVar21;
  puVar17[0x2e] = in_LR;
  puVar17[0x24] = in_f24;
  puVar17[0x25] = in_f25;
  puVar17[0x26] = in_f26;
  puVar17[0x27] = in_f27;
  puVar17[0x28] = in_f28;
  puVar17[0x29] = in_f29;
  puVar17[0x2a] = in_f30;
  puVar17[0x2b] = in_f31;
  puVar17[0x1f] = unaff_r27;
  puVar17[0x23] = unaff_r31;
  puVar17[0x20] = unaff_r28;
  puVar17[0x22] = unaff_r30;
  puVar17[0x21] = unaff_r29;
  if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode != GAME_MODE_NORMAL)) {
    uVar22 = 0;
  }
  else {
    fVar5 = (param_2->pos).x;
    fVar6 = (param_2->pos).y;
    *(f32 *)(puVar17 + 0x10) = fVar5;
    fVar7 = (param_2->pos).z;
    *(f32 *)((int)puVar17 + 0x84) = fVar6;
    fVar8 = (param_2->pos).w;
    uVar4 = param_2->state;
    *(f32 *)(puVar17 + 0x11) = fVar7;
    *(f32 *)((int)puVar17 + 0x8c) = fVar8;
    if (uVar4 == '\0') {
      dVar42 = -0.3619680106639862;
      dVar31 = (double)fastfunc::FastWrapRot(-0.361968,g_heroRotation.z);
      fVar9 = g_heroRotation.z;
      dVar41 = 3.141592502593994;
      fVar2 = (float)(dVar31 + 1.570796251296997);
      dVar31 = -3.141592502593994;
      dVar40 = -0.16666656732559204;
      dVar39 = 0.008333025500178337;
      dVar38 = -0.0001980741071747616;
      dVar37 = 2.601886990305502e-06;
      dVar36 = 0.8590390086174011;
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar10 = fVar3;
      }
      fVar13 = fVar10 * fVar10;
      fVar2 = fVar13 * fVar13 * fVar10;
      fVar3 = fVar13 * fVar2;
      *(float *)(puVar17 + 0xe) =
           (fVar13 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar13 * fVar10 * -0.16666657 + fVar10) *
           0.859039;
      dVar32 = (double)fastfunc::FastWrapRot((float)dVar42,fVar9);
      fVar2 = g_heroPosition.y;
      dVar42 = (double)(float)(dVar41 - dVar32);
      if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
        dVar42 = dVar32;
      }
      dVar33 = (double)(float)(dVar31 - dVar32);
      if ((double)(float)(dVar31 - dVar32) - dVar42 < 0.0) {
        dVar33 = dVar42;
      }
      fVar3 = *(float *)(puVar17 + 0xe) + g_heroPosition.x;
      *(undefined4 *)(puVar17 + 0xf) = 0;
      dVar32 = (double)(float)(dVar33 * dVar33);
      *(float *)(puVar17 + 0xe) = fVar3;
      fVar9 = g_heroPosition.z;
      dVar31 = (double)*param_1;
      dVar42 = (double)param_1[1];
      dVar41 = (double)param_1[2];
      bVar1 = g_standingOnMoby != 0;
      dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar33));
      dVar35 = (double)(float)(dVar32 * dVar34);
      fVar3 = (float)((double)(float)((double)(float)(dVar32 * dVar35) * dVar37 +
                                     (double)(float)(dVar35 * dVar38 +
                                                    (double)(float)(dVar34 * dVar39 +
                                                                   (double)(float)((double)(float)(
                                                  dVar32 * dVar33) * dVar40 + dVar33)))) * dVar36);
      *(float *)((int)puVar17 + 0x74) = fVar3;
      *(float *)((int)puVar17 + 0x74) = fVar3 + fVar2;
      *(float *)(puVar17 + 0xf) = fVar9 + 0.49082;
      if (((bVar1) && (iVar26 = mobyutil::MB_GetPlatformParent(), iVar26 != 0)) && (param_3 != 0)) {
        dVar31 = (double)(float)(dVar31 + (double)DAT_00969de0);
        dVar42 = (double)(float)(dVar42 + (double)DAT_00969de4);
        dVar41 = (double)(float)(dVar41 + (double)DAT_00969de8);
      }
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      auVar43 = loadVectorLeftIndexed(0x28,0x2a1a08);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar44);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar16 = storeVectorElementWordIndexed
                         (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xa0,lVar25)
      ;
      *(undefined4 *)(puVar17 + 0x14) = uVar16;
    }
    else {
      sVar15 = *(short *)(param_1 + 0xd);
      dVar31 = (double)*param_1;
      iVar26 = *(int *)((int)param_1[0xc] + 0x78);
      *(f32 *)(puVar17 + 0xe) = fVar5;
      *(f32 *)((int)puVar17 + 0x74) = fVar6;
      *(f32 *)(puVar17 + 0xf) = fVar7;
      *(f32 *)((int)puVar17 + 0x7c) = fVar8;
      dVar42 = (double)param_1[1];
      dVar41 = (double)param_1[2];
      *(int *)(puVar17 + 0x14) = (int)sVar15;
      if (*(int *)(iVar26 + 0x50) != 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 1;
      }
    }
    pMVar20 = g_heroMobyPtr;
    *(f32 *)(puVar17 + 0x12) = (g_heroMobyPtr->pos).x;
    *(f32 *)((int)puVar17 + 0x94) = (pMVar20->pos).y;
    *(f32 *)(puVar17 + 0x13) = (pMVar20->pos).z;
    fVar5 = (pMVar20->pos).w;
    *(undefined4 *)(puVar17 + 0x13) = *(undefined4 *)(puVar17 + 0xf);
    *(f32 *)((int)puVar17 + 0x9c) = fVar5;
    iVar26 = collproc::CollLine(uVar21 - 0xd0,uVar21 - 0xf0,0x10,pMVar20,0);
    if (((iVar26 != 0) && (iVar26 = collproc::CollHotspot(), iVar26 != 0)) && (0 < CollOutput.poly))
    {
      param_1[4] = CollOutput.ip.x;
      param_1[5] = CollOutput.ip.y;
      param_1[6] = CollOutput.ip.z;
      param_1[7] = CollOutput.ip.w;
    }
    do {
      iVar26 = fastfunc::FastDecTimerS32(uVar21 - 0xc0);
      if (iVar26 != 0) goto LAB_002a1e24;
      *(float *)(puVar17 + 0x10) = *(float *)(puVar17 + 0xe);
      *(float *)((int)puVar17 + 0x84) = *(float *)((int)puVar17 + 0x74);
      *(float *)(puVar17 + 0x11) = *(float *)(puVar17 + 0xf);
      *(undefined4 *)((int)puVar17 + 0x8c) = *(undefined4 *)((int)puVar17 + 0x7c);
      dVar36 = (double)DAT_0071f418;
      *(float *)(puVar17 + 0xe) = (float)((double)*(float *)(puVar17 + 0xe) + dVar31);
      *(float *)((int)puVar17 + 0x74) = (float)((double)*(float *)((int)puVar17 + 0x74) + dVar42);
      *(float *)(puVar17 + 0xf) = (float)((double)*(float *)(puVar17 + 0xf) + dVar41);
      dVar41 = -(double)(float)(dVar36 * 9.800000190734863 - dVar41);
      iVar26 = collproc::CollLine(uVar21 - 0xe0,uVar21 - 0xf0,0x12,param_2,0);
    } while (((iVar26 == 0) || ((iVar26 = collproc::CollHotspot(), iVar26 == 0 && (0.0 < dVar41))))
            || (CollOutput.poly < 1));
    param_1[4] = CollOutput.ip.x;
    param_1[5] = CollOutput.ip.y;
    param_1[6] = CollOutput.ip.z;
    param_1[7] = CollOutput.ip.w;
LAB_002a1e24:
    if ((*(int *)(puVar17 + 0x14) == 0) ||
       ((param_3 == 0 &&
        ((CollOutput.pMoby == (MobyInstance *)0x0 ||
         (iVar26 = mobyutil::MB_GetPlatformParent(), iVar26 == 0)))))) {
      uVar22 = 0;
    }
    else {
      if (((param_3 != 2) || (CollOutput.pMoby == (MobyInstance *)0x0)) ||
         (iVar26 = mobyutil::MB_GetPlatformParent(), iVar26 == 0)) {
        RegisterFuncForMoby(&PTR_M169_002a1370_0070ab78,param_2);
      }
      fVar10 = CollOutput.normal.z;
      fVar2 = param_1[10];
      fVar3 = fVar2 + 1.5707963;
      fVar9 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar9 = fVar2;
      }
      fVar13 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar13 = fVar3;
      }
      fVar14 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
        fVar14 = fVar9;
      }
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar13 < 0.0) {
        fVar2 = fVar13;
      }
      fVar3 = fVar14 * fVar14;
      dVar31 = (double)CollOutput.normal.z;
      fVar9 = fVar2 * fVar2;
      fVar12 = fVar3 * fVar3 * fVar14;
      fVar13 = fVar9 * fVar9 * fVar2;
      fVar18 = fVar3 * fVar12;
      fVar11 = fVar9 * fVar13;
      fVar3 = fVar3 * fVar18 * 2.601887e-06 +
              fVar18 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar14 * -0.16666657 + fVar14
      ;
      fVar2 = fVar9 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar13 * 0.0083330255 + fVar9 * fVar2 * -0.16666657 + fVar2;
      dVar36 = (double)(CollOutput.normal.x * fVar2 + CollOutput.normal.y * fVar3);
      fVar2 = CollOutput.normal.y * fVar2 - CollOutput.normal.x * fVar3;
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x16) = fVar2;
      fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar31 * dVar31)));
      fVar9 = ABS(fVar2);
      *(float *)((int)puVar17 + 0xac) = fVar2;
      *(float *)((int)puVar17 + 0xb4) = fVar9 - fVar3;
      dVar41 = 0.0;
      dVar42 = 0.7853981852531433;
      uVar23 = (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar17 + 0xac));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar2 = fVar3;
      }
      fVar13 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar14 = fVar9;
      }
      dVar37 = dVar41;
      if (0.0 < fVar2) {
        lVar24 = uVar21 - 0x150;
        lVar27 = uVar21 - 0x88;
        lVar29 = uVar21 - 0x78;
        lVar30 = 2;
        fVar2 = (fVar14 - fVar2) / (fVar14 + fVar2);
        fVar9 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 0xe4) = fVar2;
        *(float *)((int)puVar17 + 0xdc) = fVar2;
        *(float *)(puVar17 + 0x1c) = fVar2;
        *(float *)(puVar17 + 0x1b) = fVar2;
        fVar2 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0xdc) = *(float *)((int)puVar17 + 0xdc) * fVar9;
        *(float *)(puVar17 + 0x1c) = *(float *)(puVar17 + 0x1c) * fVar2;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar2 * fVar9;
        do {
          *(float *)((int)lVar24 + 0xd8) = *(float *)((int)lVar24 + 200) * fVar2 * fVar2;
          iVar26 = (int)lVar27;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar2 * fVar2;
          lVar29 = lVar29 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar29 = uVar21 - 0x88;
        pfVar28 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar27 = lVar29;
        do {
          fVar2 = *pfVar28;
          fVar9 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar24 + 0xd8) = *(float *)((int)lVar24 + 0xd8) * fVar2;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar9;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar27 = 2;
        lVar24 = lVar25;
        do {
          iVar26 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          iVar19 = (int)lVar29;
          lVar29 = lVar29 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar26 + 0xd8)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar13 + fVar3);
      }
      dVar37 = (double)fastfunc::FastWrapRot((float)-dVar37,1.5707964);
      dVar31 = ABS(dVar31);
      *(float *)((int)puVar17 + 0xa4) = (float)dVar36;
      param_1[8] = (float)dVar37;
      fVar2 = param_1[4];
      *(float *)(puVar17 + 0x15) = (float)(dVar31 - ABS(dVar36));
      fVar3 = param_1[5];
      fVar9 = param_1[6];
      fVar13 = param_1[7];
      uVar23 = (ulonglong)((uint)fVar10 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1d) & 4;
      dVar37 = dVar31;
      if ((double)*(float *)(puVar17 + 0x15) - dVar41 < 0.0) {
        dVar37 = ABS(dVar36);
      }
      fVar14 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar10 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar36 = ABS((double)*(float *)((int)puVar17 + 0xa4));
      if ((double)*(float *)(puVar17 + 0x15) - dVar41 < 0.0) {
        dVar36 = dVar31;
      }
      if (dVar41 < dVar37) {
        lVar24 = uVar21 - 0x150;
        lVar29 = uVar21 - 0x98;
        lVar27 = uVar21 - 0xa8;
        lVar30 = 2;
        fVar11 = (float)(dVar36 - dVar37) / (float)(dVar36 + dVar37);
        fVar12 = fVar11 * fVar11;
        *(float *)((int)puVar17 + 0xc4) = fVar11;
        *(float *)((int)puVar17 + 0xbc) = fVar11;
        *(float *)(puVar17 + 0x18) = fVar11;
        *(float *)(puVar17 + 0x17) = fVar11;
        fVar11 = fVar12 * fVar12;
        *(float *)((int)puVar17 + 0xbc) = *(float *)((int)puVar17 + 0xbc) * fVar12;
        *(float *)(puVar17 + 0x18) = *(float *)(puVar17 + 0x18) * fVar11;
        *(float *)((int)puVar17 + 0xc4) = *(float *)((int)puVar17 + 0xc4) * fVar11 * fVar12;
        do {
          *(float *)((int)lVar24 + 0xb8) = *(float *)((int)lVar24 + 0xa8) * fVar11 * fVar11;
          iVar26 = (int)lVar27;
          lVar27 = lVar27 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar26 + 4) * fVar11 * fVar11;
          lVar29 = lVar29 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar29 = uVar21 - 0xa8;
        pfVar28 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar27 = lVar29;
        do {
          fVar11 = *pfVar28;
          fVar12 = pfVar28[1];
          pfVar28 = pfVar28 + 2;
          *(float *)((int)lVar24 + 0xb8) = *(float *)((int)lVar24 + 0xb8) * fVar11;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)((int)lVar27 + 4) * fVar12;
          lVar27 = lVar27 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar24 = 2;
        do {
          iVar26 = (int)lVar25;
          iVar19 = (int)lVar29;
          lVar25 = lVar25 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar26 + 0xb8)) +
                            *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                           *(float *)(iVar19 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar41 = (double)((float)(dVar41 + dVar42) * fVar14 + fVar10);
      }
      param_1[9] = (float)dVar41;
      param_1[10] = 0.0;
      fVar10 = GameCamera.posX;
      fVar2 = fVar2 - GameCamera.posX;
      fVar3 = fVar3 - GameCamera.posY;
      *(float *)((int)puVar17 + 0x8c) = fVar13;
      uVar22 = 1;
      fVar9 = fVar9 - GameCamera.posZ;
      *(float *)(puVar17 + 0x10) = fVar2;
      *(float *)((int)puVar17 + 0x84) = fVar3;
      fVar2 = fVar2 * 0.95;
      fVar3 = fVar3 * 0.95;
      fVar9 = fVar9 * 0.95;
      *(float *)(puVar17 + 0x10) = fVar2;
      *(float *)((int)puVar17 + 0x84) = fVar3;
      *(float *)(puVar17 + 0x11) = fVar9;
      param_1[4] = fVar2 + fVar10;
      param_1[5] = fVar3 + GameCamera.posY;
      param_1[6] = fVar9 + GameCamera.posZ;
    }
  }
  return uVar22;
}



//==== 002a2438  ns=mobyupdate_unsorted  size=0x1930
// sig: undefined UpdateMoby_160(MobyInstance * moby)
// callers(0): 
// callees(43): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000f1038 mobyfunc::GetBoneTransformations; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 00105f40 mobyutil::CollWaterHeight; 00106738 mobyutil::TweenColor; 0010675c mobyutil::MB_damage; 00107860 mobyutil::MB_DamageMobyList; 0010af88 mobyutil::MB_isCrate; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110798 mobyutil::MB_DeleteMobyFromDynamicGroup; 001122ac mobyutil::MB_GetPlatformParent; 001124c0 mobyutil::MB_PlatformWorldToLocal; 00112678 mobyutil::MB_PlatformGetDelta; 00125350 partupd::SpawnPart_16; 0012a440 partupd::SpawnPart_34; 0012ab08 partupd::SpawnPart_35; 0015d12c sound::PlayMobySound; 0017bd90 water::WaterTile_PutDrop; 002a1a48 mobyupdate_helpers::M160_002a1a48; 003fda38 FUN_003fda38; 00456478 FUN_00456478; 004d04e0 FUN_004d04e0; 004fffb4 fastfunc::FastDecTimerS16; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 00502758 fastfunc::FastDoubleToInt; 005e7f98 FUN_005e7f98; 005e8078 mathfunc::cosf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 160 */

void mobyupdate_unsorted::UpdateMoby_160(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyModeBit MVar15;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar16;
  undefined8 uVar10;
  longlong lVar11;
  ushort uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  double in_f5;
  undefined8 uVar31;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  Vec4 local_2b0;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_290;
  float local_28c;
  float local_288;
  float local_280;
  float local_27c;
  float local_278;
  float afStack_270 [4];
  float local_260;
  float local_25c;
  float local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  MobyInstance *local_220;
  undefined *local_21c;
  undefined1 local_218;
  undefined1 local_217;
  MOBY_OCLASSES local_216;
  undefined4 local_214;
  undefined4 local_210;
  Vec4 aVStack_200 [4];
  undefined1 auStack_1c0 [64];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float local_130 [4];
  double local_120;
  double local_118;
  double local_110;
  float local_108;
  float local_104;
  longlong local_100;
  float local_f0;
  float local_ec;
  
  lVar11 = (longlong)(int)moby;
  uStack_174 = uRam007ac8cc;
  uStack_178 = uRam007ac8c8;
  uStack_17c = uRam007ac8c4;
  uStack_180 = _DAT_007ac8c0;
  uStack_164 = uRam007ac8dc;
  uStack_168 = uRam007ac8d8;
  uStack_16c = uRam007ac8d4;
  uStack_170 = _DAT_007ac8d0;
  uStack_154 = uRam007ac8ec;
  uStack_158 = uRam007ac8e8;
  uStack_15c = uRam007ac8e4;
  uStack_160 = _DAT_007ac8e0;
  uStack_144 = uRam007ac8fc;
  uStack_148 = uRam007ac8f8;
  uStack_14c = uRam007ac8f4;
  uStack_150 = _DAT_007ac8f0;
  uStack_134 = uRam007ac90c;
  uStack_138 = uRam007ac908;
  uStack_13c = uRam007ac904;
  uStack_140 = _DAT_007ac900;
  dVar42 = 2.0;
  pfVar3 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar3);
  local_110 = 1.0;
  if ((hero::g_heroInvisible == '\0') || (moby->state != '\0')) {
    MVar15 = moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
  }
  else {
    MVar15 = moby->modeBits | (UNK_40|DISABLED);
  }
  moby->modeBits = MVar15;
  fVar46 = pfVar3[0xc];
  local_108 = 0.0;
  if ((((fVar46 != 0.0) &&
       (local_108 = 0.0, *(char *)((int)fVar46 + 0x20) != -3 && *(char *)((int)fVar46 + 0x20) != -2)
       ) && (local_108 = 0.0, *(short *)((int)fVar46 + 0xa6) == 0xbe)) &&
     ((local_108 = 0.0, *(short *)((int)pfVar3 + 0x36) == 0 &&
      (local_108 = 0.0,
      0.0 < SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]))))) {
    if ((g_standingOnMoby == 0) || (iVar12 = mobyutil::MB_GetPlatformParent(), iVar12 == 0)) {
      mobyupdate_helpers::M160_002a1a48(uVar21,lVar11,1);
    }
    else {
      iVar12 = mobyupdate_helpers::M160_002a1a48(uVar21,lVar11,0);
      if (iVar12 == 0) {
        mobyupdate_helpers::M160_002a1a48(uVar21,lVar11,2);
      }
    }
  }
  if (moby->state == 0) {
    if ((g_currentWeaponMoby != (MobyInstance *)0x0) && (g_currentWeaponMoby->oClass == MINE_GLOVE))
    {
      fastfunc::FastEulerToMtx1(aVStack_200,local_2d0);
      mobyfunc::GetBoneTransformations(pfVar3[0xc],0,auStack_1c0);
      fastfunc::FastVecMtx4Mul(aVStack_200,auStack_1c0,aVStack_200);
      fastfunc::FastApplyTransform(&(moby->transform).v0,aVStack_200);
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      return;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  fVar46 = (moby->pos).x;
  moby->collisionMesh = (float *)0x0;
  fVar2 = (moby->pos).y;
  moby->modeBits =
       moby->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  if ((moby->state & 4) == 0) {
    fVar4 = pfVar3[0x19];
    (moby->pos).x = fVar46 + *pfVar3;
    (moby->pos).y = fVar2 + pfVar3[1];
    (moby->pos).z = (moby->pos).z + pfVar3[2];
    if (fVar4 == 0.0) {
      pfVar3[2] = -(DAT_0071f418 * 9.8 - pfVar3[2]);
    }
    else {
      dVar40 = 0.10000000149011612;
      pfVar3[2] = -(DAT_0071f418 * 9.8 * 0.1 - pfVar3[2]);
      local_100 = (longlong)(int)(animationSpeed * 6.5);
      iVar12 = mobyutil::MB_randInt((int)(animationSpeed * 6.5) + -1);
      if (iVar12 == 0) {
        fVar46 = mobyutil::CollWaterHeight(&(moby->pos).x,&local_2c0);
        dVar34 = (double)fVar46;
        local_2c0 = *pfVar3 * 0.25;
        local_2bc = pfVar3[1] * 0.25;
        local_2b8 = pfVar3[2] * 0.25;
        local_2b4 = pfVar3[3];
        dVar40 = (double)mobyutil::MB_randRangeFloat(0.05,(float)dVar40);
        partupd::SpawnPart_34
                  ((double)(float)(dVar40 * 210000.0),dVar34,(Vec4 *)&moby->pos,&local_2c0);
      }
    }
  }
  local_21c = &DAT_00830000;
  dVar40 = 3.0;
  local_214 = 0x40400000;
  local_230 = *pfVar3;
  local_22c = pfVar3[1];
  local_210 = 1;
  local_228 = pfVar3[2];
  local_224 = pfVar3[3];
  local_220 = moby;
  FUN_005e84c0(local_110,&local_230,&local_230);
  bVar1 = moby->state;
  local_216 = moby->oClass;
  local_217 = 1;
  local_218 = 2;
  local_228 = 1.0;
  local_224 = 5627.925;
  if ((bVar1 & 4) == 0) {
    lVar19 = lVar11 + 0x10;
    iVar12 = collproc::CollLine(local_2f0,lVar19,0x10,lVar11,&local_230);
    bVar1 = moby->state;
    if (iVar12 == 0) goto LAB_002a31a4;
    if (((pfVar3[0x19] == 0.0) && (iVar12 = collproc::CollHotspot(), iVar12 == 0)) &&
       ((int)pfVar3[2] < 0)) {
      water::WaterTile_PutDrop
                ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)in_f5);
      pfVar3[3] = 0.0;
      pfVar3[1] = 0.0;
      *pfVar3 = 0.0;
      pfVar3[0x19] = 1.4013e-45;
      pfVar3[2] = mobyutil::g_FrameTime * -1.5;
      local_2b0.x = (moby->pos).x;
      local_2b0.y = (moby->pos).y;
      local_2b0.z = CollOutput.ip.z;
      iVar12 = FUN_00456478(dVar42,&local_2b0);
      if (iVar12 != 0) {
        *(undefined1 *)(iVar12 + 0x23) = 0x70;
      }
      dVar34 = (double)local_108;
      iVar12 = 0;
      dVar37 = 6.5;
      do {
        dVar22 = (double)mobyutil::MB_randRot();
        dVar23 = (double)mobyutil::MB_randRangeFloat
                                   ((float)dVar34,(float)((double)mobyutil::g_FrameTime * dVar40));
        dVar24 = (double)mathfunc::cosf((float)dVar22);
        local_2a0 = (float)(dVar24 * dVar23);
        dVar22 = (double)FUN_005e8128(dVar22);
        local_29c = (float)(dVar22 * dVar23);
        dVar22 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar40),
                                    (float)((double)mobyutil::g_FrameTime * dVar37));
        local_298 = (float)dVar22;
        uVar13 = mobyutil::MB_randRange(0x5a,0x78);
        uVar14 = mobyutil::MB_randInt(2);
        partupd::SpawnPart_35(&local_2b0,&local_2a0,uVar14,uVar13);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x10);
    }
    else if ((pfVar3[0x19] != 0.0) || (iVar12 = collproc::CollHotspot(), iVar12 != 0)) {
      if (CollOutput.pMoby != (MobyInstance *)0x0) {
        bVar16 = mobyutil::MB_isCrate(CollOutput.pMoby);
        fVar7 = CollOutput.ip.w;
        fVar4 = CollOutput.ip.z;
        fVar2 = CollOutput.ip.y;
        fVar46 = CollOutput.ip.x;
        if (((bVar16) || (((CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
           ((CollOutput.pMoby != g_heroMobyPtr && (CollOutput.pMoby)->oClass != moby->oClass &&
            (CollOutput.pMoby != (MobyInstance *)pfVar3[0xc])))) {
          moby->setByGroup = '\x01';
          if (moby->state != '\x01') {
            (moby->pos).x = fVar46;
            (moby->pos).y = fVar2;
            (moby->pos).z = fVar4;
            (moby->pos).w = fVar7;
            dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar19,0);
            (moby->pos).z = (float)dVar34;
          }
          goto LAB_002a3378;
        }
      }
      if (CollOutput.pMoby == (MobyInstance *)0x0) {
LAB_002a2e4c:
        if (0 < CollOutput.poly) {
LAB_002a2e58:
          if (((pfVar3[0x19] != 0.0) || (iVar12 = collproc::CollHotspot(), iVar12 == 0)) ||
             (pfVar3[2] < mobyutil::g_FrameTime * -9.8)) {
            moby->setByGroup = '\x01';
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            fastfunc::FastVecNormalize(local_300,uVar21,0xa10980);
            FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar42),local_300,local_300
                        );
            FUN_005e7f98(local_110,local_2e0,0xa10980);
          }
          else {
            iVar12 = 0;
            if (CollOutput.pMoby != (MobyInstance *)0x0) {
              iVar12 = mobyutil::MB_GetPlatformParent();
            }
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            FUN_005e7f98((double)(DAT_0071f418 * 9.7),&local_280,0xa10980);
            (moby->pos).x = (moby->pos).x + local_280;
            (moby->pos).y = (moby->pos).y + local_27c;
            (moby->pos).z = (moby->pos).z + local_278;
            fastfunc::FastVecNormalize(uVar21,uVar21,0xa10980);
            *pfVar3 = *pfVar3 * 0.6;
            pfVar3[1] = pfVar3[1] * 0.6;
            pfVar3[2] = pfVar3[2] * 0.6;
            FUN_005e7f98(local_110,&local_280,0xa10980);
            if (0.707 < local_278 * 1.0 + local_280 * 0.0 + local_27c * 0.0) {
              dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar19,0);
              if ((double)(moby->pos).z < dVar34) {
                (moby->pos).z = (float)dVar34;
              }
              pfVar3[2] = 0.0;
              if ((SQRT(*pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]) < mobyutil::g_FrameTime) ||
                 (iVar12 != 0)) {
                pfVar3[3] = 0.0;
                pfVar3[2] = 0.0;
                pfVar3[1] = 0.0;
                *pfVar3 = 0.0;
                moby->state = moby->state | 4;
                pMVar9 = CollOutput.pMoby;
                if (iVar12 != 0 && CollOutput.pMoby != (MobyInstance *)0x0) {
                  pfVar3[0x18] = (float)CollOutput.pMoby;
                  mobyutil::MB_PlatformWorldToLocal
                            (lVar11,pMVar9,lVar19,lVar11 + 0x40,uVar21 + 0x40,uVar21 + 0x50);
                }
              }
            }
            dVar32 = (double)CollOutput.normal.x;
            dVar24 = (double)CollOutput.normal.y;
            dVar23 = (double)CollOutput.normal.z;
            dVar34 = (double)mathfunc::cosf((moby->rotation).z);
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
            dVar34 = (double)mathfunc::cosf((moby->rotation).z);
            dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
            dVar35 = (double)(moby->rotation).x;
            dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                              (double)(float)(dVar23 * dVar23))),
                                          (double)(float)(dVar24 * dVar34 -
                                                         (double)(float)(dVar32 * dVar37)));
            uVar28 = 0x3faaceea00000000;
            dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3faaceea00000000);
            (moby->rotation).x = (float)dVar34;
            dVar34 = (double)(moby->rotation).y;
            uVar31 = FUN_005e8338(dVar23,dVar22);
            dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
            (moby->rotation).y = (float)dVar34;
          }
        }
      }
      else {
        if ((CollOutput.pMoby)->oClass != moby->oClass) {
          if ((CollOutput.pMoby == g_heroMobyPtr) ||
             (CollOutput.pMoby == (MobyInstance *)pfVar3[0xc])) goto LAB_002a2e4c;
          goto LAB_002a2e58;
        }
        CollOutput.normal.x = (moby->pos).x - ((CollOutput.pMoby)->pos).x;
        CollOutput.normal.y = (moby->pos).y - ((CollOutput.pMoby)->pos).y;
        CollOutput.normal.z = (moby->pos).z - ((CollOutput.pMoby)->pos).z;
        CollOutput.normal.w = (moby->pos).w;
        if (mobyutil::g_FrameTime * -9.8 <= pfVar3[2]) {
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          FUN_005e7f98((double)(DAT_0071f418 * 9.7),&local_290,0xa10980);
          (moby->pos).x = (moby->pos).x + local_290;
          (moby->pos).y = (moby->pos).y + local_28c;
          (moby->pos).z = (moby->pos).z + local_288;
          fastfunc::FastVecNormalize(uVar21,uVar21,0xa10980);
          *pfVar3 = *pfVar3 * 0.4;
          pfVar3[1] = pfVar3[1] * 0.4;
          pfVar3[2] = pfVar3[2] * 0.4;
          FUN_005e7f98(local_110,&local_290,0xa10980);
          dVar32 = (double)CollOutput.normal.x;
          dVar24 = (double)CollOutput.normal.y;
          dVar23 = (double)CollOutput.normal.z;
          dVar34 = (double)mathfunc::cosf((moby->rotation).z);
          dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
          dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
          dVar34 = (double)mathfunc::cosf((moby->rotation).z);
          dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
          dVar35 = (double)(moby->rotation).x;
          dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                            (double)(float)(dVar23 * dVar23))),
                                        (double)(float)(dVar24 * dVar34 -
                                                       (double)(float)(dVar32 * dVar37)));
          uVar28 = 0x3faaceea00000000;
          dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3faaceea00000000);
          (moby->rotation).x = (float)dVar34;
          dVar34 = (double)(moby->rotation).y;
          uVar31 = FUN_005e8338(dVar23,dVar22);
          dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
          (moby->rotation).y = (float)dVar34;
        }
        else {
          moby->setByGroup = '\x01';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          (moby->pos).w = CollOutput.ip.w;
          fastfunc::FastVecNormalize(local_300,uVar21,0xa10980);
          FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar42),local_300,local_300);
          FUN_005e7f98(local_110,local_2e0,0xa10980);
        }
      }
    }
  }
  else {
LAB_002a31a4:
    if ((bVar1 & 4) != 0) {
      dVar34 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
      fVar46 = pfVar3[0x18];
      if (fVar46 == 0.0) {
        if (DAT_0071f418 * 40.0 <= (float)((double)(moby->pos).z - dVar34)) {
          auVar43 = ZEXT416(0xffffffff);
          auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          moby->state = '\x01';
          pfVar3[3] = 0.0;
          pfVar3[2] = 0.0;
          pfVar3[1] = 0.0;
          *pfVar3 = 0.0;
          auVar43 = loadVectorLeftIndexed(0x50,0x2a2374);
          auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
          auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                               ,auVar44);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = vectorSplatHalfWord(auVar43,1);
          uVar5 = storeVectorElementHalfWordIndexed(auVar43,0x34,uVar21);
          *(undefined2 *)(pfVar3 + 0xd) = uVar5;
        }
        else {
          (moby->pos).z = (float)dVar34;
        }
      }
      else if ((*(char *)((int)fVar46 + 0x20) == -2) || (*(char *)((int)fVar46 + 0x20) == -3)) {
        moby->setByGroup = '\x01';
        pfVar3[0x18] = 0.0;
      }
      else {
        mobyutil::MB_PlatformGetDelta
                  (lVar11,fVar46,uVar21 + 0x40,uVar21 + 0x50,lVar11 + 0x10,lVar11 + 0x40);
      }
      dVar32 = (double)CollOutput.normal.x;
      dVar24 = (double)CollOutput.normal.y;
      dVar23 = (double)CollOutput.normal.z;
      dVar34 = (double)mathfunc::cosf((moby->rotation).z);
      dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar22 = (double)(float)(dVar32 * dVar34 + (double)(float)(dVar24 * dVar37));
      dVar34 = (double)mathfunc::cosf((moby->rotation).z);
      dVar37 = (double)FUN_005e8128((double)(moby->rotation).z);
      dVar35 = (double)(moby->rotation).x;
      dVar34 = (double)FUN_005e8338((double)SQRT((float)(dVar22 * dVar22 +
                                                        (double)(float)(dVar23 * dVar23))),
                                    (double)(float)(dVar24 * dVar34 -
                                                   (double)(float)(dVar32 * dVar37)));
      uVar28 = 0x3f91df46a0000000;
      dVar34 = (double)FUN_004d04e0(dVar35,-dVar34,0x3f91df46a0000000);
      (moby->rotation).x = (float)dVar34;
      dVar34 = (double)(moby->rotation).y;
      uVar31 = FUN_005e8338(dVar23,dVar22);
      dVar34 = (double)FUN_004d04e0(dVar34,uVar31,uVar28);
      (moby->rotation).y = (float)dVar34;
    }
  }
LAB_002a3378:
  iVar12 = fastfunc::FastDecTimerS16(uVar21 + 0x34);
  if ((iVar12 != 0) && (moby->state = moby->state | 2, moby->animationId != '\x01')) {
    local_100 = (longlong)(int)(animationSpeed * 10.5);
    mobyutil::MB_SetAnimation(lVar11,1,0,(int)(animationSpeed * 10.5));
  }
  iVar12 = mobyutil::MB_damage(lVar11,&DAT_00830000,0);
  pMVar9 = g_heroMobyPtr;
  fVar7 = g_heroPosition.z;
  bVar1 = moby->state;
  uVar17 = (ushort)bVar1;
  fVar46 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  if (((iVar12 != 0) && (*(int *)(iVar12 + 0x20) != 0)) &&
     (*(MOBY_OCLASSES *)(*(int *)(iVar12 + 0x20) + 0xa6) != moby->oClass)) {
    moby->setByGroup = '\x01';
  }
  moby->damage = -1;
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 4) == 0) {
      moby->setByGroup = '\x01';
    }
    else {
      fVar8 = (pMVar9->pos).y - fVar2;
      fVar6 = (pMVar9->pos).x - fVar46;
      iVar12 = MobyUpdateChainStart;
      if ((0.5 <= SQRT(fVar6 * fVar6 + fVar8 * fVar8)) || (0.25 <= ABS(fVar4 - fVar7))) {
        for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x28)) {
          uVar17 = (ushort)*(byte *)(iVar12 + 0x20);
          if (((*(byte *)(iVar12 + 0x20) < 0x80) &&
              (uVar17 = *(ushort *)(iVar12 + 0x34) & 0x1000, uVar17 != 0)) &&
             ((fVar6 = fVar2 - *(float *)(iVar12 + 0x14), fVar7 = fVar46 - *(float *)(iVar12 + 0x10)
              , (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6) < dVar42 &&
              (ABS((double)(*(float *)(iVar12 + 0x18) - fVar4)) < dVar42)))) {
            moby->setByGroup = '\x01';
            break;
          }
        }
      }
      else {
        moby->setByGroup = '\x01';
      }
    }
  }
  if (moby->setByGroup == '\0') {
    return;
  }
  dVar34 = (double)SQRT((fVar46 - GameCamera.posX) * (fVar46 - GameCamera.posX) +
                        (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY));
  if (pfVar3[0x19] == 0.0) {
    uVar10 = collproc::CollMobySphere(dVar42,lVar11 + 0x10,uVar17,0x10,lVar11,0);
    uVar31._0_4_ = (moby->pos).x;
    uVar31._4_4_ = (moby->pos).y;
    uVar28._0_4_ = (moby->pos).z;
    uVar28._4_4_ = (moby->pos).w;
    mobyutil::MB_DamageMobyList
              (dVar40,0x3fd0000000000000,0x3ff8000000000000,lVar11,1,uVar31,uVar28,&DAT_00a14a00,
               uVar10,0,&DAT_00810001);
  }
  lVar19 = lVar11 + 0x10;
  dVar40 = (double)mobyutil::GetGroundZNoWater(lVar19);
  if (pfVar3[0x19] == 0.0) {
    if ((moby->pos).z <= (float)(dVar40 + dVar42)) {
      iVar12 = 0x96;
      local_104 = (float)dVar34;
      if (dVar34 < 10.0 != 0xffffffce) {
        local_104 = (float)dVar34;
        iVar12 = fastfunc::FastDoubleToInt((double)(float)(dVar34 * 15.0));
        if (iVar12 < 1) goto LAB_002a3c30;
      }
      iVar20 = 0;
      dVar42 = 12.0;
      dVar38 = -0.5;
      dVar41 = 0.5;
      dVar40 = 4.0;
      dVar34 = 0.785398006439209;
      dVar37 = 8.0;
      dVar26 = 180.5;
      dVar25 = 200000.0;
      dVar33 = 300000.0;
      local_118 = 14.0;
      local_120 = 22.0;
      dVar36 = 240.5;
      dVar22 = 50000.0;
      dVar23 = 100000.0;
      uVar31 = 0x41024f8000000000;
      dVar24 = 30.5;
      dVar32 = 45.5;
      dVar39 = 0.25;
      dVar35 = 300.5;
      do {
        lVar11 = mobyutil::MB_randInt(4);
        dVar30 = (double)mobyutil::g_FrameTime;
        local_130[3] = 0.0;
        local_130[0] = (float)(dVar30 * local_118);
        local_130[1] = (float)(dVar30 * local_120);
        local_250 = 0.0;
        local_130[2] = (float)(dVar30 * dVar42);
        local_24c = 0.0;
        local_248 = 0.0;
        local_244 = 0;
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   ((float)(dVar30 * dVar38),(float)(dVar30 * dVar41));
        local_250 = (float)dVar30;
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar38),
                                    (float)((double)mobyutil::g_FrameTime * dVar41));
        local_24c = (float)dVar30;
        dVar30 = (double)mobyutil::MB_randRangeFloat
                                   ((float)((double)mobyutil::g_FrameTime * dVar40),
                                    *(float *)((int)local_130 + (int)(lVar11 << 2)));
        iVar18 = (int)lVar11;
        local_248 = (float)dVar30;
        dVar30 = dVar39;
        if (iVar18 == 1) {
          dVar30 = dVar41;
        }
        local_f0 = (float)dVar35;
        dVar35 = (double)mobyutil::MB_randRangeFloat(local_108,(float)dVar30);
        dVar30 = (double)mobyutil::MB_randRot();
        dVar27 = (double)mathfunc::cosf((float)dVar30);
        local_240 = (float)(dVar27 * dVar35);
        local_ec = (float)dVar30;
        dVar30 = (double)FUN_005e8128(dVar30);
        local_240 = local_240 + (moby->pos).x;
        local_23c = (float)(dVar30 * dVar35 + (double)(moby->pos).y);
        local_238 = (moby->pos).z;
        dVar27 = (double)local_238;
        dVar30 = (double)mathfunc::cosf((float)dVar34);
        local_238 = -(float)(dVar35 * dVar30 - dVar27);
        local_248 = -(float)((double)(float)((double)mobyutil::g_FrameTime * dVar35) * dVar37 -
                            (double)local_248);
        dVar35 = (double)local_f0;
        dVar30 = (double)local_ec;
        if (iVar18 < 2) {
          if (-1 < iVar18) {
            if (iVar18 < 1) {
              uVar28 = mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
              iVar18 = (int)((double)animationSpeed * dVar36);
              local_100 = (longlong)iVar18;
              mobyutil::MB_randRange((int)((double)animationSpeed * dVar26),iVar18);
              partupd::SpawnPart_16(uVar28,&local_240,&local_250,0x1f101820,&DAT_00101010);
            }
            else {
              mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar23);
              local_100 = (longlong)(int)((double)animationSpeed * dVar26);
              partupd::SpawnPart_16(&local_240,&local_250,0x3f081020,0xf081020);
            }
          }
        }
        else if (iVar18 < 3) {
          lVar11 = mobyutil::MB_randInt(100);
          iVar18 = (int)((double)animationSpeed * dVar32);
          local_100 = (longlong)iVar18;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar24),iVar18);
          partupd::SpawnPart_16
                    (uVar31,&local_240,&local_250,
                     (lVar11 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,0xf000020);
        }
        else if (iVar18 < 4) {
          local_f0 = (float)dVar39;
          dVar27 = local_110;
          dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)local_110);
          uVar28 = 0x7f000000;
          mobyutil::TweenColor((float)dVar39,0x7f000000,0x7f182030);
          dVar39 = (double)mobyutil::MB_randRangeFloat((float)dVar41,(float)dVar27);
          uVar10 = 0;
          mobyutil::TweenColor((float)dVar39,0,0x5f5f5f);
          dVar39 = (double)mobyutil::MB_randRangeFloat(local_108,(float)dVar27);
          dVar27 = (double)(float)(dVar39 * (double)mobyutil::g_FrameTime);
          dVar39 = (double)mobyutil::MB_randRot();
          mobyutil::MB_SphericalToVector((float)dVar27,(float)dVar30,(float)dVar39,&local_250);
          uVar29 = mobyutil::MB_randRangeFloat((float)dVar25,(float)dVar33);
          iVar18 = (int)((double)animationSpeed * dVar35);
          local_100 = (longlong)iVar18;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar36),iVar18);
          partupd::SpawnPart_16(uVar29,&local_240,&local_250,uVar28,uVar10);
          dVar39 = (double)local_f0;
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < iVar12);
    }
    else {
      local_104 = (float)dVar34;
      mobyutil::MB_SpawnExplosionSparks
                (local_110,0x402a000000000000,lVar11,lVar19,&DAT_002a2374,0xffffffffffffffff);
    }
  }
  else {
    (moby->pos).z = (float)((double)(moby->pos).z + local_110);
    dVar40 = local_110;
    fVar46 = mobyutil::CollWaterHeight(&((Vec4 *)lVar19)->x,afStack_270);
    dVar37 = (double)fVar46;
    iVar12 = 0;
    (moby->pos).z = (float)((double)(moby->pos).z - dVar40);
    dVar38 = -1.0;
    dVar35 = -0.5;
    dVar32 = 4.0;
    dVar24 = 8.0;
    dVar23 = 0.05000000074505806;
    dVar22 = 0.10000000149011612;
    dVar40 = 210000.0;
    do {
      local_104 = (float)dVar34;
      local_260 = 0.0;
      local_25c = 0.0;
      local_258 = 0.0;
      local_254 = 0;
      dVar26 = local_110;
      dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)local_110);
      local_260 = (float)dVar25;
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar38,(float)dVar26);
      local_25c = (float)dVar26;
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar35,(float)dVar42);
      local_258 = (float)dVar26;
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar32),
                 (float)((double)mobyutil::g_FrameTime * dVar24));
      FUN_005e7f98(&local_260,&local_260);
      dVar26 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar22);
      partupd::SpawnPart_34((double)(float)(dVar26 * dVar40),dVar37,(Vec4 *)lVar19,&local_260);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x96);
  }
LAB_002a3c30:
  dVar42 = (double)local_104;
  moby->setByGroup = '\0';
  sound::PlayMobySound(0,0,moby);
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  fVar46 = 0.35;
  if (dVar42 - 20.0 < 0.0) {
    fVar46 = (float)(dVar42 * 0.017500000074505806);
  }
  GameCamera.offset0.amp = 0.4 - fVar46;
  auVar45 = loadVectorLeftIndexed(0xc0,0x2a2374);
  auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar43 = vectorMultiplyAddFloatingPoint
                      (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,auVar43
                      );
  auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
  auVar43 = auVar43 >> 0x60 & (undefined1  [16])0xffffffff;
  GameCamera.offset0.total =
       storeVectorElementWordIndexed
                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x168,0x9513c0);
  FUN_003fda38(&uStack_180,lVar19,0,0);
  mobyutil::MB_DeleteMobyFromDynamicGroup(moby,&DAT_00a51ee8);
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 002a3d6c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M161_002a3d6c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M161_002a3d6c(void)

{
  DAT_007ac89c = 0x10000;
  return;
}



//==== 002a3d80  ns=mobyupdate_helpers  size=0x158
// sig: undefined M161_002a3d80(void)
// callers(0): 
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 005c8318 rand

MobyInstance * mobyupdate_helpers::M161_002a3d80(f32 *param_1)

{
  f32 fVar1;
  uint *puVar2;
  MobyInstance *pMVar3;
  int iVar4;
  
  pMVar3 = mobyfunc::CreateMoby(0xa1);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (uint *)pMVar3->pVar;
    pMVar3->updateDistance = '@';
    pMVar3->drawDistance = 0x40;
    pMVar3->enabled = '\x01';
    mobyfunc::SetColorOfMoby(pMVar3,0x80,0x80,0x80);
    pMVar3->alpha = -0x80;
    pMVar3->unk58 = 1.0;
    (pMVar3->pos).x = *param_1;
    fVar1 = param_1[1];
    pMVar3->collision = (ushort *)0x0;
    (pMVar3->pos).y = fVar1;
    (pMVar3->pos).z = param_1[2];
    fVar1 = param_1[3];
    *(undefined1 *)&(pMVar3->rotation).x = 0;
    (pMVar3->pos).w = fVar1;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).x + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).y = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).y + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).z = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).z + 3) = 0;
    *(undefined1 *)&(pMVar3->rotation).w = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 1) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 2) = 0;
    *(undefined1 *)((int)&(pMVar3->rotation).w + 3) = 0;
    iVar4 = rand();
    *puVar2 = iVar4 + 0x1eU & 0xff;
    mobyfunc::UpdateMobyTransform(pMVar3);
    pMVar3->modeBits = pMVar3->modeBits | NO_POST_UPDATE;
  }
  return pMVar3;
}



//==== 002a3ee0  ns=mobyupdate_unsorted  size=0x15c
// sig: undefined UpdateMoby_161(MobyInstance * moby)
// callers(0): 
// callees(3): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fddc0 mobyutil::MB_SetAnimation; 005c8318 rand

/* Moby 161 */

void mobyupdate_unsorted::UpdateMoby_161(MobyInstance *moby)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  if (moby != (MobyInstance *)0x0) {
    piVar1 = (int *)moby->pVar;
    moby->collision = (ushort *)0x0;
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 3.5));
      }
      iVar3 = rand();
      fVar2 = animationSpeed * ((float)(longlong)(int)(iVar3 + 0x1eU & 0xff) + 0.5);
      iVar3 = (int)fVar2;
      *piVar1 = (int)fVar2;
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\0')) {
      mobyutil::MB_SetAnimation(moby,0,0,(int)(animationSpeed * 3.5));
      iVar3 = *piVar1;
    }
    *piVar1 = iVar3 + -1;
    mobyfunc::PostUpdateMobyLockTransform(moby);
  }
  return;
}



//==== 002a4070  ns=mobyupdate_unsorted  size=0x38c
// sig: undefined UpdateMoby_1629(MobyInstance * moby)
// callers(0): 
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 0011ffb0 partupd::SpawnPart_0; 00502a64 fastfunc::FastVecSub

/* Moby 1629 */

void mobyupdate_unsorted::UpdateMoby_1629(MobyInstance *moby)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 local_e0 [16];
  float local_d0;
  float local_cc;
  
  fVar2 = GameCamera.posY - (moby->pos).y;
  fVar3 = GameCamera.posX - (moby->pos).x;
  puVar1 = (undefined4 *)moby->pVar;
  if (fVar3 * fVar3 + fVar2 * fVar2 < (float)puVar1[1] * (float)puVar1[1]) {
    dVar5 = (double)((float)puVar1[9] * mobyutil::g_FrameTime);
    dVar6 = (double)(((float)puVar1[10] - 180.0) * 0.0055555557 * 3.1415927);
    dVar7 = (double)(((float)puVar1[0xb] - 180.0) * 0.0055555557 * 3.1415927);
    if (0 < (int)puVar1[5]) {
      dVar8 = -dVar5;
      iVar4 = 0;
      do {
        mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
        mobyutil::MB_randRangeFloat((float)puVar1[3],(float)puVar1[2]);
        fastfunc::FastVecSub(&local_d0,local_e0,0x951500);
        if ((float)puVar1[4] < SQRT(local_d0 * local_d0 + local_cc * local_cc)) {
          mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar5);
          mobyutil::MB_randRangeFloat((float)dVar8,(float)dVar5);
          mobyutil::MB_randRangeFloat((float)puVar1[6],(float)puVar1[7]);
          partupd::SpawnPart_0((double)((moby->pos).z - (float)puVar1[8]),local_e0,*puVar1);
          dVar8 = (double)(float)dVar8;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)puVar1[5]);
    }
  }
  return;
}



//==== 002a4420  ns=mobyupdate_unsorted  size=0xa5c
// sig: undefined UpdateMoby_163(MobyInstance * moby)
// callers(0): 
// callees(7): 0007b7d8 help::Help_Suspend; 000aa258 hero::hero_ConsumeAmmo; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 0015d12c sound::PlayMobySound; 002ae5d8 FUN_002ae5d8; 004fff60 fastfunc::FastDecTimerS32

/* Moby 163 */

void mobyupdate_unsorted::UpdateMoby_163(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  ushort uVar15;
  ulonglong uVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x160;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar16;
  puVar11[0x2e] = in_LR;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x26] = unaff_r31;
  puVar11[0x25] = unaff_r30;
  puVar11[0x24] = unaff_r29;
  puVar11[0x23] = unaff_r28;
  puVar11[0x22] = unaff_r27;
  if (moby != (MobyInstance *)0x0) {
    piVar8 = (int *)moby->pVar;
    fastfunc::FastDecTimerS32(ZEXT48(piVar8));
    if ((((((((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) && (*piVar8 == 0)) &&
           (piVar8[1] == 0)) &&
          ((DAT_0096bd8c == '\0' && (hero::g_heroStateType != 2 && hero::g_heroStateType != 7)))) &&
         ((((hero::g_heroStateType != 3 &&
            ((hero::g_heroStateType != 4 && (hero::g_heroStateType != 5)))) &&
           (hero::g_heroStateType != 6)) &&
          ((((hero::g_heroStateType != 0x10 && (hero::g_heroStateType != 0xe)) &&
            (hero::g_heroStateType != 9)) &&
           (((hero::g_heroStateType != 10 && (hero::g_heroStateType != 0xb)) &&
            ((hero::g_heroStateType < 0xd &&
             ((g_heroState != ANIM_TARGET_WALK && g_heroState != MOVEMENT_LOCKED &&
              (g_heroState != TURRET_PLANE_UI)))))))))))) &&
        (((GameCamera.pCurrentUpdCam == (void *)0x0 ||
          (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) && (g_framesGroundedCnt != 0))))
       && ((g_standingOnMoby == 0 ||
           ((*(short *)(g_standingOnMoby + 0xa6) != 0x13e &&
            (*(short *)(g_standingOnMoby + 0xa6) != 0x46f)))))) {
      iVar19 = hero::hero_ConsumeAmmo(-1,1);
      fVar2 = DAT_0096a368;
      fVar9 = GameCamera.orientMtx.forward.z;
      fVar5 = GameCamera.orientMtx.forward.y;
      fVar4 = GameCamera.orientMtx.forward.x;
      if (iVar19 == 0) {
        if ((g_buttonsPressedThisFrame & DAT_0096ad80) != 0) {
          sound::PlayMobySound(0,0,moby);
        }
      }
      else {
        dVar32 = (double)DAT_0096a368;
        dVar30 = 0.0;
        if ((g_heroState == FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
          fVar1 = ABS(GameCamera.orientMtx.forward.x);
          fVar3 = ABS(GameCamera.orientMtx.forward.y);
          uVar13 = (uint)GameCamera.orientMtx.forward.y >> 0x1d;
          *(float *)(puVar11 + 0x12) = fVar1 - fVar3;
          uVar22 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
          fVar2 = fVar1;
          if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar32 = dVar30;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x150;
            lVar21 = uVar16 - 0x7c;
            lVar20 = uVar16 - 0x8c;
            lVar24 = 2;
            fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
            fVar3 = fVar2 * fVar2;
            *(float *)(puVar11 + 0x1c) = fVar2;
            *(float *)(puVar11 + 0x1b) = fVar2;
            *(float *)((int)puVar11 + 0xdc) = fVar2;
            *(float *)((int)puVar11 + 0xd4) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar3;
            *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar2;
            *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar2 * fVar2;
              iVar19 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0x8c;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar2 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar17 = lVar18;
            do {
              iVar19 = (int)lVar17;
              iVar12 = (int)lVar21;
              lVar17 = lVar17 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0xd4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar1);
          }
          fVar3 = ABS(fVar9);
          fVar5 = fVar4 * fVar4 + fVar5 * fVar5;
          fVar2 = SQRT(fVar5);
          fVar1 = ABS(fVar2);
          *(float *)(puVar11 + 0x11) = fVar2;
          *(float *)((int)puVar11 + 0x8c) = fVar1 - fVar3;
          uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar9 >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar11 + 0x11));
          if (*(float *)((int)puVar11 + 0x8c) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x8c) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          dVar31 = dVar30;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x150;
            lVar21 = uVar16 - 0x9c;
            lVar20 = uVar16 - 0xac;
            lVar24 = 2;
            fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
            fVar3 = fVar2 * fVar2;
            *(float *)(puVar11 + 0x18) = fVar2;
            *(float *)(puVar11 + 0x17) = fVar2;
            *(float *)((int)puVar11 + 0xbc) = fVar2;
            *(float *)((int)puVar11 + 0xb4) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar3;
            *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar2;
            *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar2 * fVar2;
              iVar19 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0xac;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar2 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar12 = (int)lVar21;
              lVar18 = lVar18 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0xb4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar6);
          }
          fVar2 = GameCamera.orientMtx.forward.w;
          fVar5 = SQRT(fVar9 * fVar9 + fVar5);
          if (fVar5 == 0.0) {
            *(float *)(puVar11 + 0xe) = fVar4;
            *(float *)((int)puVar11 + 0x74) = GameCamera.orientMtx.forward.y;
            *(float *)(puVar11 + 0xf) = GameCamera.orientMtx.forward.z;
            fVar2 = GameCamera.orientMtx.forward.w;
            *(undefined4 *)(puVar11 + 0xf) = 0;
            *(undefined4 *)((int)puVar11 + 0x74) = 0;
            *(undefined4 *)(puVar11 + 0xe) = 0;
            dVar25 = dVar30;
            dVar26 = dVar30;
            dVar27 = dVar30;
          }
          else {
            fVar5 = 0.3 / fVar5;
            dVar27 = (double)(fVar4 * fVar5);
            fVar9 = GameCamera.orientMtx.forward.y * fVar5;
            dVar25 = (double)fVar9;
            fVar3 = GameCamera.orientMtx.forward.z * fVar5;
            dVar26 = (double)fVar3;
            *(float *)(puVar11 + 0xe) = fVar4 * fVar5;
            *(float *)((int)puVar11 + 0x74) = fVar9;
            *(float *)(puVar11 + 0xf) = fVar3;
          }
          fVar1 = GameCamera.orientMtx.up.z;
          fVar3 = GameCamera.orientMtx.up.y;
          fVar9 = GameCamera.orientMtx.up.x;
          fVar4 = GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y;
          *(float *)((int)puVar11 + 0x7c) = fVar2;
          fVar4 = SQRT(fVar1 * fVar1 + fVar9 * fVar9 + fVar4);
          fVar5 = -0.35 / fVar4;
          dVar29 = dVar30;
          if (0.0 - fVar4 < 0.0) {
            dVar29 = (double)(fVar1 * fVar5);
          }
          dVar28 = dVar30;
          if (0.0 - fVar4 < 0.0) {
            dVar28 = (double)(fVar3 * fVar5);
          }
          if (0.0 - fVar4 < 0.0) {
            dVar30 = (double)(fVar9 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar29 = (double)(fVar1 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar28 = (double)(fVar3 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar30 = (double)(fVar9 * fVar5);
          }
          fVar9 = (float)(dVar26 + dVar29) + GameCamera.posZ;
          fVar5 = (float)(dVar25 + dVar28) + GameCamera.posY;
          fVar4 = (float)(dVar27 + dVar30) + GameCamera.posX;
          *(float *)(puVar11 + 0xf) = (float)(dVar26 + dVar29);
          *(float *)((int)puVar11 + 0x74) = (float)(dVar25 + dVar28);
          *(float *)(puVar11 + 0xe) = (float)(dVar27 + dVar30);
          *(float *)(puVar11 + 0xf) = fVar9;
          *(float *)((int)puVar11 + 0x74) = fVar5;
          *(float *)(puVar11 + 0xe) = fVar4;
          dVar30 = -dVar31;
        }
        else if (DAT_0096bfa8 == 1) {
          fVar4 = (moby->transform).v1.y;
          fVar5 = (moby->transform).v1.x;
          fVar9 = (moby->transform).v1.z;
          fVar3 = ABS((moby->transform).v1.z);
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          fVar1 = ABS(fVar4);
          *(float *)(puVar11 + 0x10) = fVar4;
          *(float *)((int)puVar11 + 0x84) = fVar1 - fVar3;
          uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar9 >> 0x1d) & 4;
          fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = ABS(*(float *)(puVar11 + 0x10));
          if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
            fVar5 = fVar3;
          }
          fVar9 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          if (0.0 < fVar5) {
            lVar17 = uVar16 - 0x150;
            lVar20 = uVar16 - 0xcc;
            lVar21 = uVar16 - 0xbc;
            lVar24 = 2;
            fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar11 + 0x14) = fVar5;
            *(float *)(puVar11 + 0x13) = fVar5;
            *(float *)((int)puVar11 + 0x9c) = fVar5;
            *(float *)((int)puVar11 + 0x94) = fVar5;
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar3;
            *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
            *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar3;
            do {
              *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
              iVar19 = (int)lVar20;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0xcc;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar5 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar12 = (int)lVar21;
              lVar18 = lVar18 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0x94)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar9);
          }
          mobyutil::MB_SphericalToVector(0.6,fVar2,(float)-dVar30,(float *)(puVar11 + 0xe));
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).z;
          *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
          *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar5;
        }
        else {
          mobyutil::MB_SphericalToVector(0.6,DAT_0096a368,-0.0,(float *)(puVar11 + 0xe));
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).z;
          *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
          *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar5;
        }
        if (moby->animationId != '\x03') {
          mobyutil::MB_SetAnimation(moby,3,0,0);
        }
        help::Help_Suspend();
        iVar19 = FUN_002ae5d8(dVar32,dVar30,moby,uVar16 - 0xf0);
        piVar8[1] = iVar19;
        uVar15 = DAT_00a0fd8e;
        if (DAT_00a0fd8c != -1) {
          DAT_00a0fd8c = DAT_00a0fd8c + 1;
        }
        puVar11[0x1f] = (longlong)update::g_GameFrameCount;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        puVar11[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar11[0x1f] + 0.5));
        iVar19 = *(int *)((int)puVar11 + 0xfc);
        if ((int)(uint)uVar15 < iVar19 / 600) {
          sVar14 = (short)(iVar19 >> 0x1f);
          DAT_00a0fd8e = ((short)(iVar19 / 600) + sVar14) -
                         ((short)((short)(iVar19 / 0x2580000) + sVar14) >> 0xf);
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        DAT_00a0fd90 = DAT_00a0fd90 | 1 << (Level & 0x3f) | 0x80000000;
        auVar34 = loadVectorLeftIndexed(0x1c,0x2a4400);
        auVar34 = auVar34 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,
                            ZEXT48(piVar8));
        *(undefined4 *)((uint)piVar8 & 0xfffffffc) = uVar10;
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      mobyutil::MB_SetAnimation(moby,1,0,0);
    }
    moby->modeBits = moby->modeBits | NO_POST_UPDATE;
  }
  return;
}



//==== 002a4e7c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1632_002a4e7c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1632_002a4e7c(void)

{
  DAT_007ac95c = 0x10000;
  return;
}



//==== 002a4e90  ns=Global  size=0xf0
// sig: undefined FUN_002a4e90(void)
// callers(1): 002add88 mobyupdate_unsorted::UpdateMoby_170
// callees(2): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform

MobyInstance * FUN_002a4e90(double param_1,int param_2,f32 *param_3)

{
  int *piVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = mobyfunc::CreateMoby(0x660);
  if (pMVar2 != (MobyInstance *)0x0) {
    piVar1 = (int *)pMVar2->pVar;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    piVar1[0x18] = param_2;
    pMVar2->scale = (float)((double)pMVar2->pClass->gScale * param_1);
    (pMVar2->pos).x = *param_3;
    (pMVar2->pos).y = param_3[1];
    (pMVar2->pos).z = param_3[2];
    (pMVar2->pos).w = param_3[3];
    if (param_2 != 0) {
      piVar1[0x19] = (int)*(short *)(param_2 + 0xa6);
    }
    *piVar1 = (int)(piVar1 + 8);
    pMVar2->modeBits = pMVar2->modeBits | HAS_SPECIAL_VARS;
    mobyfunc::UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}



//==== 002a4fa0  ns=mobyupdate_unsorted  size=0x1a4
// sig: undefined UpdateMoby_1632(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 00105ab4 mobyutil::CollDamageMobyDirect; 0010675c mobyutil::MB_damage

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 1632 */

void mobyupdate_unsorted::UpdateMoby_1632(MobyInstance *moby)

{
  void *pvVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_20 [16];
  
  pvVar1 = moby->pVar;
  iVar3 = *(int *)((int)pvVar1 + 0x60);
  if ((((iVar3 == 0) || ((int)*(short *)(iVar3 + 0xa6) != *(int *)((int)pvVar1 + 100))) ||
      (*(char *)(iVar3 + 0x20) == -2)) || (*(char *)(iVar3 + 0x20) == -3)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar2 = mobyutil::MB_damage(moby,0xffffffffffffffff,0);
    iVar3 = (int)uVar2;
    if (iVar3 != 0) {
      auVar4 = loadVectorLeftIndexed(0x10,uVar2);
      auVar5 = loadVectorRightIndexed(0x20,uVar2);
      auVar7 = loadVectorLeftIndexed(0x18,uVar2);
      auVar6 = loadVectorLeftIndexed(0x14,uVar2);
      auVar8 = loadVectorRightIndexed(0x24,uVar2);
      auVar10 = loadVectorRightIndexed(0x28,uVar2);
      auVar9 = loadVectorLeftIndexed(0x1c,uVar2);
      auVar11 = loadVectorRightIndexed(0x2c,uVar2);
      auVar12 = loadVectorLeftIndexed(0x30,uVar2);
      auVar13 = loadVectorRightIndexed(0x40,uVar2);
      auVar4 = vectorMergeHighWord(auVar4 | auVar5,auVar6 | auVar8);
      auVar5 = vectorMergeHighWord(auVar7 | auVar10,auVar9 | auVar11);
      auVar4 = vectorPermute(auVar4,auVar5,_DAT_002a4f80);
      auVar5 = vectorPermute(auVar12 | auVar13,auStack_20,_DAT_002a4f90);
      local_70 = auVar4._0_8_;
      local_68 = auVar4._8_8_;
      local_50 = auVar5._0_8_;
      local_48 = auVar5._8_8_;
      mobyutil::CollDamageMobyDirect
                (*(undefined4 *)((int)pvVar1 + 0x60),0x40,local_70,local_68,
                 *(undefined8 *)(iVar3 + 0x20),*(undefined8 *)(iVar3 + 0x28),local_50,local_48);
    }
    moby->damage = -1;
  }
  return;
}



//==== 002a5158  ns=mobyupdate_helpers  size=0x168
// sig: undefined M1633_002a5158(void)
// callers(2): 002bd110 mobyupdate_helpers::M1818_002bd110; 00376c48 mobyupdate_helpers::M437_00376c48
// callees(1): 000efa28 mobyfunc::CreateMoby

void mobyupdate_helpers::M1633_002a5158
               (double param_1,double param_2,double param_3,double param_4,int param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  undefined8 in_LR;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  pMVar3 = mobyfunc::CreateMoby(0x661);
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar5 = ZEXT416(0xffffffff);
    auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
    puVar1 = (undefined4 *)pMVar3->pVar;
    fStack00000044 = (f32)param_7;
    fStack0000004c = (f32)param_8;
    auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
    puVar1[4] = param_5;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x7f;
    uVar4 = *(undefined8 *)(param_5 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    (pMVar3->rotation).x = 0.0;
    (pMVar3->rotation).y = (float)param_4;
    (pMVar3->rotation).z = (float)param_3;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    fStack00000040 = (f32)((ulonglong)param_7 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_8 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = (float)param_1;
    puVar1[3] = (float)param_2;
    auVar5 = loadVectorLeftIndexed(in_LR,0x2a5150);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar5 = auVar5 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar5 = vectorMultiplyAddFloatingPoint
                       (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
    auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
    auVar5 = vectorSplatHalfWord(auVar5,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,0x14,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 5) = uVar2;
    uVar2 = storeVectorElementHalfWordIndexed(auVar5,0x16,ZEXT48(puVar1));
    *(undefined2 *)((int)puVar1 + 0x16) = uVar2;
    pMVar3->alpha = '@';
    pMVar3->modeBits = pMVar3->modeBits | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD);
    pMVar3->scale = pMVar3->scale * 0.5;
  }
  return;
}



//==== 002a52f8  ns=mobyupdate_unsorted  size=0x478
// sig: undefined UpdateMoby_1633(MobyInstance * moby)
// callers(0): 
// callees(6): 00057820 collproc::CollLine; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000fe610 mobyutil::MB_SphericalToVector; 000ff190 mobyutil::MB_DeltAngSpeed; 004fffb4 fastfunc::FastDecTimerS16

/* Moby 1633 */

void mobyupdate_unsorted::UpdateMoby_1633(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_a0 [16];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  MobyInstance *local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  MOBY_OCLASSES local_66;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_50;
  
  pvVar2 = moby->pVar;
  uVar8 = ZEXT48(pvVar2);
  uVar4 = (int)moby->scale >> 0x1f;
  fVar3 = moby->pClass->gScale;
  uVar5 = (int)fVar3 >> 0x1f;
  dVar9 = (double)(moby->rotation).z;
  fVar1 = (moby->rotation).y;
  if ((int)((uVar4 >> 1 ^ (uint)moby->scale) - uVar4) < (int)((uVar5 >> 1 ^ (uint)fVar3) - uVar5)) {
    moby->scale = DAT_0071f408 * 0.21 * moby->pClass->gScale + moby->scale;
  }
  local_50 = (longlong)(int)(animationSpeed * 1.5);
  dVar10 = dVar9;
  if ((int)*(short *)((int)pvVar2 + 0x14) <
      (int)(animationSpeed * 35.5) - (int)(animationSpeed * 1.5)) {
    dVar10 = (double)*(float *)((int)pvVar2 + 8);
    fVar1 = *(float *)((int)pvVar2 + 0xc);
  }
  dVar13 = (double)fVar1;
  dVar12 = 4.71238899230957;
  dVar11 = 3.1415927410125732;
  dVar9 = (double)mobyutil::MB_DeltAngSpeed
                            (dVar9,dVar10,(double)(DAT_0071f418 * 4.712389),
                             (double)(DAT_0071f418 * 3.1415927),
                             (double)(mobyutil::g_FrameTime * 3.1415927),0x2a0000,
                             *(short *)((int)pvVar2 + 0x14),uVar8);
  (moby->rotation).z = (float)dVar9;
  dVar9 = (double)mobyutil::MB_DeltAngSpeed
                            ((double)(moby->rotation).y,dVar13,
                             (double)(float)((double)DAT_0071f418 * dVar12),
                             (double)(float)((double)DAT_0071f418 * dVar11),
                             (double)(float)((double)mobyutil::g_FrameTime * dVar11));
  (moby->rotation).y = (float)dVar9;
  mobyutil::MB_SphericalToVector
            (mobyutil::g_FrameTime * 40.0,(moby->rotation).z,(float)-dVar9,&local_90);
  local_90 = (moby->pos).x + local_90;
  local_8c = (moby->pos).y + local_8c;
  local_88 = (moby->pos).z + local_88;
  (moby->pos).x = local_90;
  (moby->pos).y = local_8c;
  (moby->pos).z = local_88;
  if (2.0 <= local_90) {
    if ((((local_90 <= 1021.0) && (2.0 <= local_8c)) && (local_8c <= 1021.0)) &&
       ((2.0 <= local_88 && (local_88 <= 1021.0)))) {
      local_80 = 0.0;
      if ((local_8c < 0.0 || local_90 < 0.0) ||
         ((local_88 < 0.0 ||
          (64.0 < SQRT((local_90 - GameCamera.posX) * (local_90 - GameCamera.posX) +
                       (local_8c - GameCamera.posY) * (local_8c - GameCamera.posY)))))) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      local_8c = local_8c - g_heroPosition.y;
      local_90 = local_90 - g_heroPosition.x;
      local_6c = 0x10001;
      local_64 = 0x3f000000;
      local_60 = 1;
      fVar1 = local_90 * local_90 + local_8c * local_8c;
      local_7c = local_80;
      if (SQRT(fVar1) != 0.0) {
        local_7c = 1.0 / SQRT(fVar1);
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_7c = -(fVar1 * local_7c * local_7c - 1.0) * local_7c * 0.5 + local_7c;
        local_80 = local_90 * local_7c;
        local_7c = local_8c * local_7c;
      }
      local_78 = 0x3f800000;
      local_74 = 0x45afdf66;
      local_66 = moby->oClass;
      local_68 = 1;
      local_67 = 1;
      local_70 = moby;
      iVar7 = fastfunc::FastDecTimerS16(uVar8 + 0x14);
      if (iVar7 != 0) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar7 = collproc::CollLine(local_a0,(longlong)(int)moby + 0x10,0,
                                 *(undefined4 *)((int)pvVar2 + 0x10),&local_80);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = collproc::CollHotspot();
      if (iVar7 == 0) {
        auVar14 = ZEXT416(0xffffffff);
        auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0x30,0x2a52c0);
        auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar14 = vectorMultiplyAddFloatingPoint
                            (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                             auVar15);
        auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
        if ((int)*(short *)((int)pvVar2 + 0x14) <= (int)(animationSpeed * 3.5)) {
          return;
        }
        auVar14 = vectorSplatHalfWord(auVar14,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar14,0x14,uVar8);
        *(undefined2 *)((int)pvVar2 + 0x14) = uVar6;
        return;
      }
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 002a5770  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1634_002a5770(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1634_002a5770(void)

{
  DAT_007ac9cc = 0x10000;
  return;
}



//==== 002a57a0  ns=mobyupdate_helpers  size=0x1c4
// sig: undefined M1634_002a57a0(void)
// callers(1): 0022bb60 mobyupdate_helpers::M1261_0022bb60
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f1ec8 mobyfunc::SetColorOfMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange

MobyInstance *
mobyupdate_helpers::M1634_002a57a0(f32 *param_1,undefined4 *param_2,undefined2 param_3,int param_4)

{
  float fVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  s8 sVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  pMVar3 = mobyfunc::CreateMoby(0x662);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    sVar4 = mobyutil::MB_randRange(0x40,0x80);
    pMVar3->alpha = sVar4;
    mobyfunc::SetColorOfMoby(pMVar3,0x20,0x60,0x10);
    (pMVar3->pos).x = *param_1;
    (pMVar3->pos).y = param_1[1];
    (pMVar3->pos).z = param_1[2];
    (pMVar3->pos).w = param_1[3];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    dVar7 = 6.2831854820251465;
    dVar6 = 12.566370964050293;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              (mobyutil::g_FrameTime * 6.2831855,mobyutil::g_FrameTime * 12.566371);
    puVar2[4] = (float)dVar5;
    dVar5 = (double)mobyutil::MB_randRangeFloat
                              ((float)((double)mobyutil::g_FrameTime * dVar7),
                               (float)((double)mobyutil::g_FrameTime * dVar6));
    puVar2[5] = (float)dVar5;
    *(undefined2 *)(puVar2 + 6) = param_3;
    *(undefined2 *)((int)puVar2 + 0x1a) = param_3;
    fVar1 = pMVar3->scale;
    if (param_4 == 0) {
      dVar5 = (double)mobyutil::MB_randRangeFloat(0.5,0.75);
      fVar1 = (float)((double)pMVar3->scale * dVar5);
      pMVar3->scale = fVar1;
    }
    puVar2[7] = fVar1;
    dVar5 = (double)mobyutil::MB_randRangeFloat(2.0,5.0);
    pMVar3->setByGroup = (char)param_4;
    pMVar3->scale = (float)((double)pMVar3->scale * dVar5);
    mobyfunc::UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}



//==== 002a5988  ns=mobyupdate_helpers  size=0x1c8
// sig: undefined M1634_002a5988(void)
// callers(1): 002a5ba8 mobyupdate_unsorted::UpdateMoby_1634
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 0012f6b0 partupd::SpawnPart_52

void mobyupdate_helpers::M1634_002a5988(void)

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
  mobyutil::MB_randRangeFloat(0.0,DAT_007aca64);
  uVar2 = mobyutil::MB_randRangeFloat((float)dVar4,DAT_007aca54);
  uVar3 = mobyutil::MB_randRangeFloat(DAT_007aca54,DAT_007aca58);
  uVar1 = mobyutil::MB_randRange(DAT_007aca5c,DAT_007aca60);
  partupd::SpawnPart_52(uVar2,uVar3,local_50,DAT_007aca4c,DAT_007aca50,in_r6,in_r7,uVar1);
  return;
}



//==== 002a5ba8  ns=mobyupdate_unsorted  size=0xe44
// sig: undefined UpdateMoby_1634(MobyInstance * moby)
// callers(0): 
// callees(9): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 001206e8 partupd::SpawnPart_2; 002a5988 mobyupdate_helpers::M1634_002a5988; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

/* Moby 1634 */

void mobyupdate_unsorted::UpdateMoby_1634(MobyInstance *moby)

{
  longlong lVar1;
  char cVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  longlong lVar28;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar34;
  ulonglong in_f19;
  double dVar35;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar36;
  ulonglong in_f22;
  double dVar37;
  ulonglong in_f23;
  double dVar38;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  double dVar48;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x230;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar18;
  puVar13[0x48] = in_LR;
  puVar13[0x37] = in_f17;
  puVar13[0x38] = in_f18;
  puVar13[0x39] = in_f19;
  puVar13[0x3a] = in_f20;
  puVar13[0x3b] = in_f21;
  puVar13[0x3c] = in_f22;
  puVar13[0x3d] = in_f23;
  puVar13[0x3e] = in_f24;
  puVar13[0x3f] = in_f25;
  puVar13[0x40] = in_f26;
  puVar13[0x41] = in_f27;
  puVar13[0x42] = in_f28;
  puVar13[0x43] = in_f29;
  puVar13[0x44] = in_f30;
  puVar13[0x45] = in_f31;
  fVar3 = (moby->pos).x;
  puVar13[0x36] = unaff_r31;
  fVar4 = (moby->pos).y;
  puVar13[0x32] = unaff_r27;
  fVar5 = (moby->pos).z;
  puVar13[0x35] = unaff_r30;
  fVar6 = (moby->pos).w;
  pfVar10 = (float *)moby->pVar;
  cVar2 = moby->setByGroup;
  *(f32 *)(puVar13 + 0x10) = fVar3;
  *(f32 *)((int)puVar13 + 0x84) = fVar4;
  *(f32 *)(puVar13 + 0x11) = fVar5;
  puVar13[0x34] = unaff_r29;
  puVar13[0x33] = unaff_r28;
  puVar13[0x31] = unaff_r26;
  puVar13[0x30] = unaff_r25;
  puVar13[0x2f] = unaff_r24;
  puVar13[0x2e] = unaff_r23;
  puVar13[0x2d] = unaff_r22;
  puVar13[0x2c] = unaff_r21;
  *(f32 *)((int)puVar13 + 0x8c) = fVar6;
  uVar16 = DAT_007aca40;
  if (cVar2 == '\x01') {
    iVar24 = 0;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_007aca3c;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar16;
    do {
      *(f32 *)(puVar13 + 0x12) = fVar3;
      *(f32 *)((int)puVar13 + 0x94) = fVar4;
      *(f32 *)(puVar13 + 0x13) = fVar5;
      *(f32 *)((int)puVar13 + 0x9c) = fVar6;
      dVar47 = -0.06499999761581421;
      dVar45 = 0.06499999761581421;
      dVar30 = (double)mobyutil::MB_randRangeFloat(-0.065,0.065);
      *(float *)(puVar13 + 0x12) = (float)((double)*(float *)(puVar13 + 0x12) + dVar30);
      dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar47,(float)dVar45);
      *(float *)((int)puVar13 + 0x94) = (float)((double)*(float *)((int)puVar13 + 0x94) + dVar30);
      dVar30 = (double)mobyutil::MB_randRangeFloat((float)dVar47,(float)dVar45);
      *(float *)(puVar13 + 0x13) = (float)((double)*(float *)(puVar13 + 0x13) + dVar30);
      *(undefined4 *)((int)puVar13 + 0xac) = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      *(undefined4 *)((int)puVar13 + 0xa4) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      dVar44 = 0.8999999761581421;
      dVar41 = 1.100000023841858;
      dVar30 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_007aca14 * mobyutil::g_FrameTime * 0.9,
                                  DAT_007aca14 * mobyutil::g_FrameTime * 1.1);
      *(float *)(puVar13 + 0x15) = (float)dVar30;
      dVar30 = (double)mobyutil::MB_randRangeFloat(-DAT_007aca30,DAT_007aca30);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      fVar7 = ABS(*pfVar10);
      fVar8 = ABS(pfVar10[1]);
      dVar47 = 0.01745329238474369;
      dVar48 = (double)(float)(dVar30 * 0.01745329238474369);
      *(float *)((int)puVar13 + 0xdc) = fVar7 - fVar8;
      dVar45 = 0.0;
      dVar46 = 0.7853981852531433;
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      fVar11 = fVar7;
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar11 = fVar8;
      }
      fVar12 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar36 = dVar45;
      if (0.0 < fVar11) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0xf0;
        lVar28 = uVar18 - 0xe0;
        lVar29 = 2;
        fVar11 = (fVar8 - fVar11) / (fVar8 + fVar11);
        fVar8 = fVar11 * fVar11;
        *(float *)((int)puVar13 + 0x14c) = fVar11;
        *(float *)((int)puVar13 + 0x144) = fVar11;
        *(float *)(puVar13 + 0x29) = fVar11;
        *(float *)(puVar13 + 0x28) = fVar11;
        fVar11 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x144) = *(float *)((int)puVar13 + 0x144) * fVar8;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar11;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar11 * fVar8;
        do {
          *(float *)((int)lVar22 + 0x140) = *(float *)((int)lVar22 + 0x130) * fVar11 * fVar11;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar11 * fVar11;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0xf0;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar11 = *pfVar27;
          fVar8 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x140) = *(float *)((int)lVar22 + 0x140) * fVar11;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar8;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar14 + 0x140)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar12 + fVar7);
      }
      dVar30 = (double)fastfunc::FastWrapRot((float)dVar36,(float)(dVar30 * 0.01745329238474369));
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      fVar11 = (float)(dVar30 + 1.570796251296997);
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar30 = -0.0001980741071747616;
      fVar12 = 3.1415925 - fVar11;
      if (fVar11 - (3.1415925 - fVar11) < 0.0) {
        fVar12 = fVar11;
      }
      fVar8 = -3.1415925 - fVar11;
      if ((-3.1415925 - fVar11) - fVar12 < 0.0) {
        fVar8 = fVar12;
      }
      dVar35 = 2.601886990305502e-06;
      fVar7 = fVar8 * fVar8;
      fVar11 = fVar7 * fVar7 * fVar8;
      fVar12 = fVar7 * fVar11;
      *(float *)(puVar13 + 0x16) =
           DAT_007aca08 * mobyutil::g_FrameTime *
           (fVar7 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar8 * -0.16666657 + fVar8);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar32 = ABS((double)*pfVar10);
      dVar31 = ABS((double)pfVar10[1]);
      *(float *)(puVar13 + 0x1b) = (float)(dVar32 - dVar31);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar42 = dVar32;
      if ((double)*(float *)(puVar13 + 0x1b) - dVar45 < 0.0) {
        dVar42 = dVar31;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar13 + 0x1b) - dVar45 < 0.0) {
        dVar31 = dVar32;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar32 = dVar45;
      if (dVar45 < dVar42) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0x110;
        lVar28 = uVar18 - 0x100;
        lVar29 = 2;
        fVar8 = (float)(dVar31 - dVar42) / (float)(dVar31 + dVar42);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 300) = fVar8;
        *(float *)((int)puVar13 + 0x124) = fVar8;
        *(float *)(puVar13 + 0x25) = fVar8;
        *(float *)(puVar13 + 0x24) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x124) = *(float *)((int)puVar13 + 0x124) * fVar7;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar8;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x120) = *(float *)((int)lVar22 + 0x110) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x110;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x120) = *(float *)((int)lVar22 + 0x120) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar31 = dVar45;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar14 + 0x120)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar32 = (double)((float)(dVar31 + dVar46) * fVar11 + fVar12);
      }
      dVar31 = (double)fastfunc::FastWrapRot((float)dVar32,(float)dVar48);
      fVar8 = DAT_007aca0c;
      fVar12 = DAT_007aca08;
      fVar11 = mobyutil::g_FrameTime;
      dVar48 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar48 = dVar31;
      }
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar48 < 0.0) {
        dVar42 = dVar48;
      }
      dVar31 = (double)(float)(dVar42 * dVar42);
      dVar33 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar42));
      dVar48 = (double)(fVar8 * fVar11);
      dVar32 = (double)(float)(dVar31 * dVar33);
      *(float *)((int)puVar13 + 0xb4) =
           fVar12 * fVar11 *
           (float)((double)(float)(dVar31 * dVar32) * dVar35 +
                  (double)(float)(dVar32 * dVar30 +
                                 (double)(float)(dVar33 * dVar36 +
                                                (double)(float)((double)(float)(dVar31 * dVar42) *
                                                                dVar37 + dVar42))));
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 ((float)(dVar48 * dVar44),(float)(dVar48 * dVar41));
      *(float *)(puVar13 + 0x17) = (float)dVar41;
      uVar17 = DAT_007ac9f4;
      uVar16 = DAT_007ac9f0;
      dVar48 = 2.0;
      dVar41 = (double)mobyutil::MB_randRangeFloat(DAT_00fae860,DAT_00fae860 * 2.0);
      uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar44 = 1.2000000476837158;
      dVar41 = (double)mobyutil::MB_randRangeFloat(DAT_007aca00,DAT_007aca00 * 1.2);
      uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_007aca04,(float)((double)DAT_007aca04 * dVar44));
      uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      partupd::SpawnPart_2
                (uVar18 - 0x1a0,uVar18 - 400,uVar18 - 0x180,uVar16,uVar17,uVar19,uVar20,uVar21);
      uVar16 = DAT_007aca48;
      iVar24 = iVar24 + 1;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      fVar6 = (moby->pos).w;
    } while (iVar24 < 2);
    iVar24 = 0;
    *(undefined4 *)((int)puVar13 + 0xac) = DAT_007aca44;
    *(undefined4 *)((int)puVar13 + 0xbc) = uVar16;
    do {
      *(f32 *)(puVar13 + 0x18) = fVar3;
      *(f32 *)((int)puVar13 + 0xc4) = fVar4;
      *(f32 *)(puVar13 + 0x19) = fVar5;
      *(f32 *)((int)puVar13 + 0xcc) = fVar6;
      dVar42 = -0.10000000149011612;
      dVar31 = 0.10000000149011612;
      dVar41 = (double)mobyutil::MB_randRangeFloat(-0.1,0.1);
      *(float *)(puVar13 + 0x18) = (float)((double)*(float *)(puVar13 + 0x18) + dVar41);
      dVar41 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar31);
      *(float *)((int)puVar13 + 0xc4) = (float)((double)*(float *)((int)puVar13 + 0xc4) + dVar41);
      dVar41 = (double)mobyutil::MB_randRangeFloat((float)dVar42,(float)dVar31);
      fVar12 = DAT_007aca38;
      fVar11 = -DAT_007aca38;
      *(float *)(puVar13 + 0x19) = (float)((double)*(float *)(puVar13 + 0x19) + dVar41);
      mobyutil::MB_randRangeFloat(fVar11,fVar12);
      *(undefined4 *)((int)puVar13 + 0xac) = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      *(undefined4 *)((int)puVar13 + 0xa4) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      dVar34 = 0.699999988079071;
      dVar33 = 1.5;
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_007aca24 * mobyutil::g_FrameTime * 0.7,
                                  DAT_007aca24 * mobyutil::g_FrameTime * 1.5);
      *(float *)(puVar13 + 0x15) = (float)dVar41;
      dVar42 = (double)mobyutil::MB_randRangeFloat(-DAT_007aca34,DAT_007aca34);
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar32 = ABS((double)*pfVar10);
      dVar41 = ABS((double)pfVar10[1]);
      dVar43 = (double)(float)(dVar42 * dVar47);
      *(float *)((int)puVar13 + 0xd4) = (float)(dVar32 - dVar41);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar31 = dVar32;
      if ((double)*(float *)((int)puVar13 + 0xd4) - dVar45 < 0.0) {
        dVar31 = dVar41;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)((int)puVar13 + 0xd4) - dVar45 < 0.0) {
        dVar41 = dVar32;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar32 = dVar45;
      if (dVar45 < dVar31) {
        lVar22 = uVar18 - 0x220;
        lVar26 = uVar18 - 0x130;
        lVar28 = uVar18 - 0x120;
        lVar29 = 2;
        fVar8 = (float)(dVar41 - dVar31) / (float)(dVar41 + dVar31);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0x10c) = fVar8;
        *(float *)((int)puVar13 + 0x104) = fVar8;
        *(float *)(puVar13 + 0x21) = fVar8;
        *(float *)(puVar13 + 0x20) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar7;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar8;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x100) = *(float *)((int)lVar22 + 0xf0) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x130;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0x100) = *(float *)((int)lVar22 + 0x100) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar41 = dVar45;
        do {
          iVar14 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar15 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0x100)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar32 = (double)((float)(dVar41 + dVar46) * fVar11 + fVar12);
      }
      dVar41 = (double)fastfunc::FastWrapRot((float)dVar32,(float)(dVar42 * dVar47));
      dVar31 = (double)(float)(dVar41 + dVar40);
      dVar41 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar41 = dVar31;
      }
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar41 < 0.0) {
        dVar42 = dVar41;
      }
      dVar41 = (double)(float)(dVar42 * dVar42);
      dVar32 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar42));
      dVar31 = (double)(float)(dVar41 * dVar32);
      *(float *)(puVar13 + 0x16) =
           DAT_007aca28 * mobyutil::g_FrameTime *
           (float)((double)(float)(dVar41 * dVar31) * dVar35 +
                  (double)(float)(dVar31 * dVar30 +
                                 (double)(float)(dVar32 * dVar36 +
                                                (double)(float)((double)(float)(dVar41 * dVar42) *
                                                                dVar37 + dVar42))));
      fVar11 = *pfVar10;
      fVar12 = pfVar10[1];
      dVar42 = ABS((double)*pfVar10);
      dVar41 = ABS((double)pfVar10[1]);
      *(float *)(puVar13 + 0x1a) = (float)(dVar42 - dVar41);
      uVar25 = (ulonglong)((uint)fVar11 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar12 >> 0x1d) & 4;
      dVar31 = dVar42;
      if ((double)*(float *)(puVar13 + 0x1a) - dVar45 < 0.0) {
        dVar31 = dVar41;
      }
      fVar11 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if ((double)*(float *)(puVar13 + 0x1a) - dVar45 < 0.0) {
        dVar41 = dVar42;
      }
      fVar12 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar42 = dVar45;
      if (dVar45 < dVar31) {
        lVar22 = uVar18 - 0x220;
        lVar28 = uVar18 - 0x140;
        lVar26 = uVar18 - 0x150;
        lVar29 = 2;
        fVar8 = (float)(dVar41 - dVar31) / (float)(dVar41 + dVar31);
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar13 + 0xec) = fVar8;
        *(float *)((int)puVar13 + 0xe4) = fVar8;
        *(float *)(puVar13 + 0x1d) = fVar8;
        *(float *)(puVar13 + 0x1c) = fVar8;
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar7;
        *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar8;
        *(float *)((int)puVar13 + 0xec) = *(float *)((int)puVar13 + 0xec) * fVar8 * fVar7;
        do {
          *(float *)((int)lVar22 + 0xe0) = *(float *)((int)lVar22 + 0xd0) * fVar8 * fVar8;
          iVar14 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar8 * fVar8;
          lVar28 = lVar28 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar29 = 4;
        lVar28 = uVar18 - 0x150;
        pfVar27 = (float *)&DAT_007358e0;
        lVar22 = lVar1;
        lVar26 = lVar28;
        do {
          fVar8 = *pfVar27;
          fVar7 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar22 + 0xe0) = *(float *)((int)lVar22 + 0xe0) * fVar8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        lVar26 = 2;
        lVar22 = lVar1;
        dVar41 = dVar45;
        do {
          iVar14 = (int)lVar22;
          iVar15 = (int)lVar28;
          lVar22 = lVar22 + 0x10;
          lVar28 = lVar28 + 0x10;
          dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar14 + 0xe0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar42 = (double)((float)(dVar41 + dVar46) * fVar11 + fVar12);
      }
      dVar31 = (double)fastfunc::FastWrapRot((float)dVar42,(float)dVar43);
      dVar41 = (double)(float)(dVar39 - dVar31);
      if (dVar31 - (double)(float)(dVar39 - dVar31) < 0.0) {
        dVar41 = dVar31;
      }
      dVar42 = (double)(float)(dVar38 - dVar31);
      if ((double)(float)(dVar38 - dVar31) - dVar41 < 0.0) {
        dVar42 = dVar41;
      }
      fVar11 = DAT_007aca28 * mobyutil::g_FrameTime;
      fVar12 = DAT_007aca2c * mobyutil::g_FrameTime;
      *(undefined4 *)(puVar13 + 0x17) = 0;
      dVar41 = (double)(float)(dVar42 * dVar42);
      dVar31 = (double)(float)(dVar41 * (double)(float)(dVar41 * dVar42));
      dVar32 = (double)(float)(dVar41 * dVar31);
      *(float *)((int)puVar13 + 0xb4) =
           fVar11 * (float)((double)(float)(dVar41 * dVar32) * dVar35 +
                           (double)(float)(dVar32 * dVar30 +
                                          (double)(float)(dVar31 * dVar36 +
                                                         (double)(float)((double)(float)(dVar41 * 
                                                  dVar42) * dVar37 + dVar42))));
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 ((float)((double)fVar12 * dVar34),(float)((double)fVar12 * dVar33))
      ;
      *(float *)(puVar13 + 0x17) = (float)dVar41;
      uVar17 = DAT_007ac9fc;
      uVar16 = DAT_007ac9f8;
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_00fae864,(float)((double)DAT_00fae864 * dVar48));
      uVar19 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_007aca18,(float)((double)DAT_007aca18 * dVar44));
      uVar20 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      dVar41 = (double)mobyutil::MB_randRangeFloat
                                 (DAT_007aca1c,(float)((double)DAT_007aca1c * dVar44));
      uVar21 = fastfunc::FastDoubleToInt((double)(float)(dVar41 * (double)animationSpeed));
      puVar13[0xe] = 0xffffffffffffffff;
      partupd::SpawnPart_2
                (uVar18 - 0x170,uVar18 - 400,uVar18 - 0x180,uVar16,uVar17,uVar19,uVar20,uVar21);
      iVar24 = iVar24 + 1;
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      fVar6 = (moby->pos).w;
    } while (iVar24 < 2);
  }
  dVar30 = (double)fastfunc::FastWrapRot((moby->rotation).x,pfVar10[4]);
  (moby->rotation).x = (float)dVar30;
  dVar30 = (double)fastfunc::FastWrapRot((moby->rotation).y,pfVar10[5]);
  (moby->rotation).y = (float)dVar30;
  (moby->pos).x = (moby->pos).x + *pfVar10;
  (moby->pos).y = (moby->pos).y + pfVar10[1];
  (moby->pos).z = (moby->pos).z + pfVar10[2];
  pfVar10[2] = -(DAT_0071f418 * 14.6 - pfVar10[2]);
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
    mobyfunc::DeleteMoby(moby);
  }
  else {
    uVar9 = *(ushort *)((int)pfVar10 + 0x1a);
    uVar23 = (uint)(short)uVar9;
    if ((int)*(short *)(pfVar10 + 6) <
        (int)(((int)uVar23 >> 2) + (uint)((short)uVar9 < 0 && (uVar9 & 3) != 0))) {
      dVar30 = (double)fastfunc::FastIntToDouble
                                 (((int)uVar23 >> 2) + (uint)((int)uVar23 < 0 && (uVar23 & 3) != 0))
      ;
      dVar45 = (double)fastfunc::FastIntToDouble(*(undefined2 *)(pfVar10 + 6));
      moby->scale = (float)((double)(float)((double)pfVar10[7] * dVar45) / dVar30);
    }
    iVar24 = fastfunc::FastDecTimerS16(pfVar10 + 6);
    if (iVar24 == 0) {
      if ((moby->setByGroup == '\x01') &&
         (iVar24 = collproc::CollLine(uVar18 - 0x1b0,(longlong)(int)moby + 0x10,2,g_heroMobyPtr,0),
         iVar24 != 0)) {
        mobyupdate_helpers::M1634_002a5988((longlong)(int)moby);
        mobyfunc::DeleteMoby(moby);
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 002a69ec  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1634_002a69ec(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1634_002a69ec(void)

{
  DAT_007acab4 = 0x10000;
  return;
}



//==== 002a6a00  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_164(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 164 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_164(MobyInstance *moby)

{
  return moby;
}



//==== 002a6a04  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1641_002a6a04(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1641_002a6a04(void)

{
  DAT_007acb24 = 0x10000;
  return;
}



//==== 002a6a18  ns=mobyupdate_unsorted  size=0x1b8
// sig: undefined UpdateMoby_1641(MobyInstance * moby)
// callers(0): 
// callees(3): 000fcbe8 mobyutil::MB_randRangeFloat; 001353b0 partupd::SpawnPart_77; 00500b64 fastfunc::FastEulerToMtx

/* Moby 1641 */

void mobyupdate_unsorted::UpdateMoby_1641(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [48];
  
  pvVar1 = moby->pVar;
  iVar2 = 0;
  if (0 < *(int *)((int)pvVar1 + 0x14)) {
    do {
      mobyutil::MB_randRangeFloat(-*(float *)((int)pvVar1 + 4),*(float *)((int)pvVar1 + 4));
      fastfunc::FastEulerToMtx(local_60,(longlong)(int)moby + 0x40);
      mobyutil::MB_randRangeFloat
                (*(float *)((int)pvVar1 + 0x18) * mobyutil::g_FrameTime,
                 *(float *)((int)pvVar1 + 0x1c) * mobyutil::g_FrameTime);
      mobyutil::MB_randRangeFloat
                (*(float *)((int)pvVar1 + 0x20) * mobyutil::g_FrameTime,
                 *(float *)((int)pvVar1 + 0x24) * mobyutil::g_FrameTime);
      partupd::SpawnPart_77
                ((double)*(float *)((int)pvVar1 + 0xc),local_80,local_70,
                 *(undefined4 *)((int)pvVar1 + 0x10));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)pvVar1 + 0x14));
  }
  return;
}



//==== 002a6bd0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1649_002a6bd0(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1649_002a6bd0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007b58d0;
  ppuVar4 = &PTR_DAT_007b58b0;
  puVar3 = &DAT_007b2058;
  ppuVar5 = &PTR_DAT_007b5910;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar2,*puVar3,&DAT_00fae878 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_00fae8b0,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 8);
  return;
}



//==== 002a6cc0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1649_002a6cc0(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1649_002a6cc0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007b2010;
  ppuVar4 = &PTR_DAT_007b1ff8;
  puVar3 = &DAT_007ad5d8;
  ppuVar5 = &PTR_DAT_007b2040;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar2,*puVar3,&DAT_00fae890 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_00fae8b0,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 6);
  return;
}



//==== 002a6db0  ns=mobyupdate_helpers  size=0xf0
// sig: undefined M1649_002a6db0(void)
// callers(0): 
// callees(2): 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets

void mobyupdate_helpers::M1649_002a6db0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007ad5c0;
  ppuVar4 = &PTR_DAT_007ad5b8;
  puVar3 = &DAT_007acba8;
  ppuVar5 = &PTR_DAT_007ad5d0;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar2,*puVar3,&DAT_00fae8a0 + param_1 * 2);
    draw::DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_00fae8b0,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 2);
  return;
}



//==== 002a6ea0  ns=mobyupdate_helpers  size=0x608
// sig: undefined M1649_DrawScrollingTexLayers(void)
// callers(0): 
// callees(9): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00074604 draw::DrawMeshSet; 000e915c mesh::AddUVOffsets; 00174f80 vuchain::SetGSReg; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502f7c idol_draw::Blend; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1649_DrawScrollingTexLayers(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined **ppuVar10;
  int iVar11;
  
  uVar1 = idol_draw::PackCmd(0,1,0,1,0x80);
  vuchain::SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  vuchain::SetGSReg(6,uVar1);
  uVar1 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  vuchain::SetGSReg(0x1a,uVar1);
  uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  vuchain::SetGSReg(0x16,uVar1);
  stub::STUB_00071170();
  uVar1 = draw::GetEffectTex(0x3a);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,DAT_007acb60);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar3 = &PTR_DAT_007b58b0;
  ppuVar2 = &PTR_DAT_007b58d0;
  puVar7 = &DAT_007b2058;
  ppuVar4 = &PTR_DAT_007b5910;
  iVar9 = 0;
  ppuVar10 = ppuVar2;
  ppuVar6 = ppuVar3;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar10,*puVar8,&DAT_00fae878);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_00fae8b0,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 8);
  uVar1 = draw::GetEffectTex(0x3b);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_007acb64 * (uint)DAT_00fae870) >> 8);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  ppuVar10 = ppuVar2;
  ppuVar6 = ppuVar3;
  ppuVar5 = ppuVar4;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar10,*puVar8,&DAT_00fae880);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_00fae8b0,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 8);
  uVar1 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_007acb68 * (uint)DAT_00fae870) >> 8);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar2,*puVar7,&DAT_00fae888);
    draw::DrawMeshSet(*puVar7,*ppuVar3,*ppuVar4,&DAT_00fae8b0,9);
    iVar11 = iVar11 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar7 = puVar7 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
  } while (iVar11 < 8);
  uVar1 = draw::GetEffectTex(0x3c);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_007acb94);
  vuchain::SetGSReg(3,uVar1);
  ppuVar4 = &PTR_DAT_007b2010;
  ppuVar2 = &PTR_DAT_007b1ff8;
  puVar7 = &DAT_007ad5d8;
  ppuVar3 = &PTR_DAT_007b2040;
  iVar11 = 0;
  ppuVar10 = ppuVar4;
  ppuVar6 = ppuVar2;
  ppuVar5 = ppuVar3;
  puVar8 = puVar7;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar10,*puVar8,&DAT_00fae890);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar5,&DAT_00fae8b0,9);
    iVar11 = iVar11 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar11 < 6);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_007acb98);
  vuchain::SetGSReg(3,uVar1);
  iVar11 = 0;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar4,*puVar7,&DAT_00fae898);
    draw::DrawMeshSet(*puVar7,*ppuVar2,*ppuVar3,&DAT_00fae8b0,9);
    iVar11 = iVar11 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar7 = puVar7 + 1;
    ppuVar2 = ppuVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
  } while (iVar11 < 6);
  uVar1 = draw::GetEffectTex(0x3d);
  vuchain::SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,2,0,1,DAT_007acba4);
  vuchain::SetGSReg(3,uVar1);
  ppuVar10 = &PTR_DAT_007ad5d0;
  ppuVar5 = &PTR_DAT_007ad5c0;
  puVar8 = &DAT_007acba8;
  ppuVar6 = &PTR_DAT_007ad5b8;
  do {
    mesh::AddUVOffsets(&DAT_00fae8b0,*ppuVar5,*puVar8,&DAT_00fae8a0);
    draw::DrawMeshSet(*puVar8,*ppuVar6,*ppuVar10,&DAT_00fae8b0,9);
    iVar9 = iVar9 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar8 = puVar8 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
  } while (iVar9 < 2);
  return;
}



//==== 002a74b0  ns=mobyupdate_helpers  size=0x220
// sig: undefined M1649_002a74b0(void)
// callers(1): 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649
// callees(2): 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M1649_002a74b0
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)fastfunc::FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)fastfunc::FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)fastfunc::FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = fastfunc::FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = fastfunc::FastDoubleToInt(dVar14);
          uVar3 = fastfunc::FastDoubleToInt(dVar13);
          uVar4 = fastfunc::FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}



//==== 002a76f8  ns=mobyupdate_helpers  size=0x14c
// sig: undefined M1649_002a76f8(void)
// callers(1): 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649
// callees(0): 

void mobyupdate_helpers::M1649_002a76f8
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
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
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
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
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}



//==== 002a7850  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1649_002a7850(void)
// callers(1): 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649
// callees(0): 

void mobyupdate_helpers::M1649_002a7850(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007acb6c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_00fae878 + iVar1);
  *(float *)((int)&DAT_00fae878 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae878 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae878 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007acb70 + iVar1) * fVar3 + *(float *)((int)&DAT_00fae87c + iVar1);
  *(float *)((int)&DAT_00fae87c + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae87c + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae87c + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002a7910  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1649_002a7910(void)
// callers(1): 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649
// callees(0): 

void mobyupdate_helpers::M1649_002a7910(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007acb84 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_00fae890 + iVar1);
  *(float *)((int)&DAT_00fae890 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae890 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae890 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007acb88 + iVar1) * fVar3 + *(float *)((int)&DAT_00fae894 + iVar1);
  *(float *)((int)&DAT_00fae894 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae894 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae894 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002a79d0  ns=mobyupdate_helpers  size=0xb8
// sig: undefined M1649_002a79d0(void)
// callers(1): 002a7ac0 mobyupdate_unsorted::UpdateMoby_1649
// callees(0): 

void mobyupdate_helpers::M1649_002a79d0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007acb9c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_00fae8a0 + iVar1);
  *(float *)((int)&DAT_00fae8a0 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae8a0 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae8a0 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007acba0 + iVar1) * fVar3 + *(float *)((int)&DAT_00fae8a4 + iVar1);
  *(float *)((int)&DAT_00fae8a4 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_00fae8a4 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_00fae8a4 + iVar1) = fVar2 + 1.0;
  }
  return;
}



//==== 002a7ac0  ns=mobyupdate_unsorted  size=0x330
// sig: undefined UpdateMoby_1649(MobyInstance * moby)
// callers(0): 
// callees(8): 0006d720 RegisterFuncForMoby; 002a74b0 mobyupdate_helpers::M1649_002a74b0; 002a76f8 mobyupdate_helpers::M1649_002a76f8; 002a7850 mobyupdate_helpers::M1649_002a7850; 002a7910 mobyupdate_helpers::M1649_002a7910; 002a79d0 mobyupdate_helpers::M1649_002a79d0; 00502758 fastfunc::FastDoubleToInt; 00502910 fastfunc::FastCheckBsphereInView
// strings: 002a7a88: '?&ff?' (raw)

/* Moby 1649 */

void mobyupdate_unsorted::UpdateMoby_1649(MobyInstance *moby)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_30 [16];
  
  if (moby->state == 0) {
    if (DAT_00fae874 == 0) {
      uVar8 = 0x3fe0000000000000;
      mobyupdate_helpers::M1649_002a74b0
                (0x3fe0000000000000,0x3fe0000000000000,0x3fe4ccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_007b5910,8,&DAT_007b2058);
      uVar6 = 0x3ff0000000000000;
      mobyupdate_helpers::M1649_002a74b0
                (uVar8,uVar8,uVar8,0x3ff0000000000000,&PTR_DAT_007ad5d0,2,&DAT_007acba8);
      mobyupdate_helpers::M1649_002a74b0
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_DAT_007b2040,6,
                 &DAT_007ad5d8);
      DAT_00fae874 = 1;
    }
    auVar12 = ZEXT416(0);
    auVar10 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    moby->state = '\x01';
    DAT_00fae878 = 0;
    DAT_00fae8a8 = 0;
    DAT_00fae87c = 0;
    DAT_00fae880 = 0;
    DAT_00fae884 = 0;
    DAT_00fae888 = 0;
    DAT_00fae88c = 0;
    DAT_00fae8ac = 0;
    auVar12 = loadVectorLeftIndexed(0x10,0x2a7a88);
    auVar12 = auVar12 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
    DAT_00fae890 = 0;
    DAT_00fae894 = storeVectorElementWordIndexed(auVar10,0xffffffffffffe894,0xfb0000);
    DAT_00fae898 = 0;
    iVar2 = 0;
    puVar4 = &DAT_00fae8a0;
    uVar5 = ZEXT48(&DAT_00fae8a4);
    DAT_00fae89c = storeVectorElementWordIndexed(auVar12,0,0xfae89c);
    do {
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar15 = ZEXT416(0xffffffff);
      auVar14 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
      iVar2 = iVar2 + 1;
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      auVar15._0_4_ = auVar10._0_4_ + 1;
      auVar15._8_8_ = auVar10._8_8_;
      auVar15._4_4_ = auVar10._4_4_ + 1;
      auVar11._0_8_ = auVar15._0_8_;
      auVar11._12_4_ = auVar10._12_4_;
      auVar11._8_4_ = auVar10._8_4_ + 1;
      auVar10._0_12_ = auVar11._0_12_;
      auVar10._12_4_ = auVar11._12_4_ + 1;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar13,auVar12,auVar15);
      uVar1 = storeVectorElementWordIndexed(auVar15,0,uVar5);
      *(undefined4 *)uVar5 = uVar1;
      uVar5 = uVar5 + 8;
    } while (iVar2 < 1);
  }
  else if ((moby->state < 2) &&
          (iVar2 = fastfunc::FastCheckBsphereInView(0x408f400000000000,local_30), -1 < iVar2)) {
    dVar9 = 84.0;
    dVar7 = (double)SQRT((GameCamera.posZ - DAT_007acb58) * (GameCamera.posZ - DAT_007acb58) +
                         (GameCamera.posX - DAT_007acb50) * (GameCamera.posX - DAT_007acb50) +
                         (GameCamera.posY - DAT_007acb54) * (GameCamera.posY - DAT_007acb54));
    uVar3 = DAT_00fae870;
    if (dVar7 <= 84.0) {
      mobyupdate_helpers::M1649_002a7850(0);
      mobyupdate_helpers::M1649_002a76f8
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_00fae880);
      mobyupdate_helpers::M1649_002a7850(2);
      uVar3 = 0xff;
      if ((20.0 <= dVar7) && (uVar3 = 0, dVar7 < dVar9)) {
        uVar3 = fastfunc::FastDoubleToInt
                          ((double)(-((float)(dVar7 - 20.0) * 0.015625 - 1.0) * 255.0));
      }
    }
    DAT_00fae870 = uVar3;
    mobyupdate_helpers::M1649_002a79d0(0);
    mobyupdate_helpers::M1649_002a7910(0);
    mobyupdate_helpers::M1649_002a7910(1);
    RegisterFuncForMoby(&PTR_M1649_DrawScrollingTexLayers_0070ac70,moby);
  }
  return;
}



//==== 002a7df0  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1649_002a7df0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1649_002a7df0(void)

{
  DAT_007b597c = 0x10000;
  return;
}



//==== 002a7e08  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_165(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 165 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_165(MobyInstance *moby)

{
  return moby;
}



//==== 002a7e0c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1650_002a7e0c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1650_002a7e0c(void)

{
  DAT_007b59ec = 0x10000;
  return;
}



//==== 002a7e28  ns=mobyupdate_unsorted  size=0x20c
// sig: undefined UpdateMoby_1650(MobyInstance * moby)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1650 */

void mobyupdate_unsorted::UpdateMoby_1650(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = mobyutil::MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar3);
    lVar7 = lVar3 + 0x10;
    lVar6 = lVar3 + 0x40;
    uVar8 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar3,0x674,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x675,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x676,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = mobyfunc::CreateMoby(0x673);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      mobyfunc::UpdateMobyTransform(pMVar5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a8038  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1651(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1651 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1651(MobyInstance *moby)

{
  return moby;
}



//==== 002a8048  ns=mobyupdate_unsorted  size=0x20c
// sig: undefined UpdateMoby_1655(MobyInstance * moby)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1655 */

void mobyupdate_unsorted::UpdateMoby_1655(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = mobyutil::MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar3);
    lVar7 = lVar3 + 0x10;
    lVar6 = lVar3 + 0x40;
    uVar8 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar3,0x679,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x67a,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x67b,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = mobyfunc::CreateMoby(COMPUTER_DAMAGED);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      mobyfunc::UpdateMobyTransform(pMVar5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a8258  ns=mobyupdate_unsorted  size=0x20c
// sig: undefined UpdateMoby_166(MobyInstance * moby)
// callers(0): 
// callees(3): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 004fff60 fastfunc::FastDecTimerS32

/* Moby 166 */

void mobyupdate_unsorted::UpdateMoby_166(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  MobyInstance *pMVar3;
  MobyInstance *pMVar4;
  int iVar5;
  void *pvVar6;
  
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar1 + 4) = DAT_00faf850;
    pMVar3 = MobyInstance;
    pMVar4 = MobyInstance + *(int *)((int)pvVar1 + 0x10);
    *(undefined4 *)((int)pvVar1 + 8) = 3;
    *(MobyInstance **)((int)pvVar1 + 0x20) = pMVar4;
    *(MobyInstance **)((int)pvVar1 + 0x24) = pMVar3 + *(int *)((int)pvVar1 + 0x14);
    *(MobyInstance **)((int)pvVar1 + 0x28) = pMVar3 + *(int *)((int)pvVar1 + 0x18);
    *(MobyInstance **)((int)pvVar1 + 0x2c) = pMVar3 + *(int *)((int)pvVar1 + 0x1c);
  }
  else if (moby->state < 2) {
    iVar5 = mobyutil::MB_damage(moby,0x10000,0);
    fastfunc::FastDecTimerS32((int)pvVar1 + 0xc);
    if ((iVar5 != 0) && (*(int *)((int)pvVar1 + 0xc) == 0)) {
      moby->damage = -1;
      iVar5 = *(int *)((int)pvVar1 + 8) + -1;
      *(undefined4 *)((int)pvVar1 + 0xc) = DAT_00faf854;
      *(int *)((int)pvVar1 + 8) = iVar5;
      if (iVar5 < 1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    if (((((*(char *)(*(int *)((int)pvVar1 + 0x20) + 0x20) == 'P') ||
          (*(char *)(*(int *)((int)pvVar1 + 0x24) + 0x20) == 'P')) ||
         (*(char *)(*(int *)((int)pvVar1 + 0x28) + 0x20) == 'P')) ||
        (*(char *)(*(int *)((int)pvVar1 + 0x2c) + 0x20) == 'P')) &&
       (iVar5 = fastfunc::FastDecTimerS32((int)pvVar1 + 4), iVar5 != 0)) {
      iVar5 = 0;
      *(undefined4 *)((int)pvVar1 + 4) = DAT_00faf850;
      pvVar6 = pvVar1;
      do {
        if (*(char *)(*(int *)((int)pvVar6 + 0x20) + 0x20) == 'P') {
          *(undefined1 *)(*(int *)((int)pvVar1 + iVar5 * 4 + 0x20) + 0x20) = 0x51;
          iVar2 = *(int *)((int)pvVar1 + iVar5 * 4 + 0x20);
          *(f32 *)(iVar2 + 0x10) = (moby->pos).x;
          *(f32 *)(iVar2 + 0x14) = (moby->pos).y;
          *(f32 *)(iVar2 + 0x18) = (moby->pos).z;
          *(f32 *)(iVar2 + 0x1c) = (moby->pos).w;
          *(undefined1 *)(*(int *)((int)pvVar1 + iVar5 * 4 + 0x20) + 0xa4) = 0xff;
          return;
        }
        iVar5 = iVar5 + 1;
        pvVar6 = (void *)((int)pvVar6 + 4);
      } while (iVar5 < 4);
    }
  }
  return;
}



//==== 002a8470  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M1660_002a8470(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1660_002a8470(void)

{
  undefined8 in_r0;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  auVar2 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = loadVectorLeftIndexed(in_r0,0x2a8464);
  auVar4 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar2);
  auVar1 = ZEXT416(0xffffffff);
  auVar1 = auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60;
  DAT_007b5a5c = 0x10000;
  auVar3 = vectorShiftLeftIntegerWord(auVar1,auVar1);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar2,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_00faf850 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xfffffffffffff850,0xfb0000);
  auVar1 = loadVectorLeftIndexed(4,0x2a8464);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar1 = vectorMultiplyAddFloatingPoint
                     (auVar4,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,auVar3);
  auVar1 = vectorConvertToSignedFixedPointWordSaturate(auVar1,0);
  auVar1 = auVar1 >> 0x60 & (undefined1  [16])0xffffffff;
  DAT_00faf854 = storeVectorElementWordIndexed
                           (auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60,
                            0xfffffffffffff854,0xfb0000);
  return;
}



//==== 002a84f8  ns=mobyupdate_unsorted  size=0x1dc
// sig: undefined UpdateMoby_1660(MobyInstance * moby)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1660 */

void mobyupdate_unsorted::UpdateMoby_1660(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  undefined8 uVar6;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = mobyutil::MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar3);
    uVar6 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar3,0x67e,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby
              (uVar6,lVar3,0x67e,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = mobyfunc::CreateMoby(ORANGE_LIGHT_DAMAGED_067D);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      mobyfunc::UpdateMobyTransform(pMVar5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a86e0  ns=mobyupdate_unsorted  size=0x20c
// sig: undefined UpdateMoby_{1663_1677}(MobyInstance * moby)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1663
   Moby 1677 */

void mobyupdate_unsorted::UpdateMoby__1663_1677_(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = mobyutil::MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar3);
    lVar7 = lVar3 + 0x10;
    lVar6 = lVar3 + 0x40;
    uVar8 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar3,0x68e,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x68f,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar8,lVar3,0x690,lVar7,lVar6,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = mobyfunc::CreateMoby(0x68d);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      mobyfunc::UpdateMobyTransform(pMVar5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a88f8  ns=mobyupdate_unsorted  size=0x1dc
// sig: undefined UpdateMoby_1664(MobyInstance * moby)
// callers(0): 
// callees(7): 000efa28 mobyfunc::CreateMoby; 000efb38 mobyfunc::DeleteMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1664 */

void mobyupdate_unsorted::UpdateMoby_1664(MobyInstance *moby)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  MobyInstance *pMVar5;
  undefined8 in_r9;
  undefined8 uVar6;
  
  lVar3 = (longlong)(int)moby;
  iVar4 = mobyutil::MB_damage(lVar3,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    sound::PlayMobySound(0,0,moby);
    mobyutil::MB_DistributeBoltsNearHero(lVar3);
    uVar6 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar3,0x682,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby
              (uVar6,lVar3,0x682,lVar3 + 0x10,lVar3 + 0x40,0,0,in_r9,&DAT_00a15d30);
    pMVar5 = mobyfunc::CreateMoby(GREEN_LIGHT_0681);
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->drawDistance = 0xff;
      pMVar5->enabled = '\x01';
      (pMVar5->pos).x = (moby->pos).x;
      (pMVar5->pos).y = (moby->pos).y;
      (pMVar5->pos).z = (moby->pos).z;
      (pMVar5->pos).w = (moby->pos).w;
      (pMVar5->rotation).x = (moby->rotation).x;
      (pMVar5->rotation).y = (moby->rotation).y;
      (pMVar5->rotation).z = (moby->rotation).z;
      (pMVar5->rotation).w = (moby->rotation).w;
      uVar2 = moby->light;
      pMVar5->color = moby->color;
      pMVar5->light = uVar2;
      mobyfunc::UpdateMobyTransform(pMVar5);
    }
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002a8af0  ns=mobyupdate_helpers  size=0x274
// sig: undefined M1671_002a8af0(void)
// callers(1): 002a9010 mobyupdate_unsorted::UpdateMoby_a_lot_0
// callees(3): 000fcc68 mobyutil::MB_randRot; 000fe610 mobyutil::MB_SphericalToVector; 00126dd8 partupd::SpawnPart_22

void mobyupdate_helpers::M1671_002a8af0
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 local_70 [16];
  float local_60 [8];
  
  if (((*(char *)(param_1 + 0x31) != '\0') && (((worldUpdateTime ^ param_1 >> 8) & 1) == 0)) &&
     (fVar1 = *(float *)(param_1 + 0x14) - GameCamera.posY,
     fVar2 = *(float *)(param_1 + 0x10) - GameCamera.posX,
     fVar3 = *(float *)(param_1 + 0x18) - GameCamera.posZ,
     SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < 75.0)) {
    dVar6 = (double)(DAT_007b5abc * mobyutil::g_FrameTime);
    uStack00000040 = param_3;
    uStack00000048 = param_4;
    dVar4 = (double)mobyutil::MB_randRot();
    dVar5 = (double)mobyutil::MB_randRot();
    mobyutil::MB_SphericalToVector((float)dVar6,(float)dVar4,(float)dVar5,local_60);
    partupd::SpawnPart_22
              ((double)(DAT_007b5ac0 * 210000.0),local_70,local_60,DAT_007b5ab0,PTR_DAT_007b5ab4,
               &DAT_007b0000,(int)(animationSpeed * 35.5));
  }
  return;
}



//==== 002a8d68  ns=mobyupdate_helpers  size=0x298
// sig: undefined M1671_002a8d68(void)
// callers(1): 002a9010 mobyupdate_unsorted::UpdateMoby_a_lot_0
// callees(3): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M1671_002a8d68(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  MobyInstance *pMVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ushort *puVar12;
  longlong lVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  short sVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar21 [16];
  int aiStack_c4 [17];
  longlong local_80;
  
  lVar9 = ZEXT48(&stack0x00000000) - 0x70;
  puVar10 = (undefined4 *)lVar9;
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  pMVar8 = MobyInstance;
  puVar12 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if ((puVar12 != (ushort *)0x0) && (**(int **)(param_1 + 0x78) != -1)) {
    lVar15 = 0;
    local_80 = (longlong)Splines[**(int **)(param_1 + 0x78)]->cnt;
    auVar20 = loadVectorLeftIndexed(lVar9,ZEXT48(Splines[**(int **)(param_1 + 0x78)]));
    auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    auVar20 = loadVectorLeftIndexed(lVar9,0x2a8d64);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar20 = vectorSubtractFloatingPoint
                        (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    dVar19 = (double)((float)local_80 - 1.0);
    do {
      uVar1 = *puVar12;
      sVar16 = (short)lVar15 + 1;
      puVar12 = puVar12 + 1;
      *(MobyInstance **)((int)aiStack_c4 + (int)(lVar15 << 2) + 4) = pMVar8 + (uVar1 & 0x7fff);
      lVar15 = (longlong)sVar16;
    } while (-1 < (short)uVar1);
    iVar6 = (int)(lVar15 << 2);
    iVar13 = 0;
    if (0 < sVar16) {
      auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      lVar9 = lVar15;
      iVar2 = *(int *)((int)aiStack_c4 + iVar6);
      do {
        iVar14 = (int)(lVar15 + -1);
        if (iVar13 == iVar14) {
          iVar3 = *(int *)((int)aiStack_c4 + iVar6);
        }
        else {
          lVar11 = mobyutil::MB_randInt(lVar15 + -1);
          while( true ) {
            iVar7 = (int)(lVar11 << 2);
            iVar3 = *(int *)((int)aiStack_c4 + iVar7 + 4);
            if (iVar3 != 0) break;
            iVar3 = (int)(lVar11 + 1) / iVar14;
            lVar11 = (lVar11 + 1) - ((longlong)iVar3 * (longlong)(int)sVar16 - (longlong)iVar3);
          }
          *(undefined4 *)((int)aiStack_c4 + iVar7 + 4) = 0;
        }
        *(undefined4 *)(iVar3 + 0x94) = 0;
        uVar5 = DAT_007b5aa8;
        local_80 = (longlong)(int)lVar9;
        *(undefined1 *)(iVar3 + 0x30) = 0xff;
        *(short *)(iVar3 + 0x32) = (short)uVar5;
        uVar4 = *(uint *)(iVar3 + 0x78);
        *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * DAT_007b5aac;
        dVar18 = (double)local_80;
        dVar17 = (double)fastfunc::FastIntToDouble(lVar15);
        *(float *)(uVar4 + 4) = (float)(dVar18 * (double)(float)(dVar19 / dVar17));
        uVar5 = storeVectorElementWordIndexed(auVar20,0xc,(ulonglong)uVar4);
        *(undefined4 *)(uVar4 + 0xc & 0xfffffffc) = uVar5;
        *(int *)(uVar4 + 0x10) = iVar2;
        dVar17 = (double)mobyutil::MB_randRangeFloat(DAT_007b5a94,DAT_007b5a98);
        *(float *)(uVar4 + 0x14) = (float)dVar17;
        dVar17 = (double)mobyutil::MB_randRangeFloat(DAT_007b5a88,DAT_007b5a8c);
        iVar13 = iVar13 + 1;
        dVar18 = (double)mobyutil::g_FrameTime;
        lVar9 = (longlong)(short)((short)lVar9 + -1);
        *(float *)(uVar4 + 8) = (float)(dVar17 * dVar18);
        *(float *)(uVar4 + 0x18) = (float)(dVar17 * dVar18);
        *(undefined1 *)(iVar3 + 0x20) = 1;
        iVar2 = iVar3;
      } while (iVar13 < sVar16);
    }
  }
  return;
}



//==== 002a9010  ns=mobyupdate_unsorted  size=0x48c
// sig: undefined UpdateMoby_a_lot_0(MobyInstance * moby)
// callers(0): 
// callees(9): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 00109af0 mobyutil::Delt; 00117390 mobyutil::MB_PathEvalSpline; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 002a8af0 mobyupdate_helpers::M1671_002a8af0; 002a8d68 mobyupdate_helpers::M1671_002a8d68; 00502910 fastfunc::FastCheckBsphereInView

/* Moby 1667
   Moby 1668
   Moby 1669
   Moby 1670
   Moby 1671 */

void mobyupdate_unsorted::UpdateMoby_a_lot_0(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  Spline *pSVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_90 [32];
  
  piVar3 = (int *)moby->pVar;
  bVar7 = false;
  pSVar4 = Splines[*piVar3];
  if ((moby->oClass & 1) == RATCHET) {
    iVar8 = sound::IsMobyPlayingSound(moby,(int)*(short *)((int)piVar3 + 0x1e));
    if (iVar8 == 0) {
      iVar8 = sound::PlayMobySound(0,4,moby);
      *(short *)((int)piVar3 + 0x1e) = (short)iVar8;
    }
    else {
      bVar7 = true;
    }
  }
  if (moby->state == 0) {
    if (moby->group == -1) {
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyupdate_helpers::M1671_002a8d68(moby);
  }
  else if (moby->state < 2) {
    iVar8 = *(int *)(piVar3[4] + 0x78);
    mobyutil::MB_PathEvalSpline((double)(float)piVar3[1],pSVar4);
    (moby->pos).z = (moby->pos).z + (float)piVar3[5];
    piVar3[1] = (int)((float)piVar3[1] + (float)piVar3[2]);
    mobyutil::Delt((float)piVar3[6],DAT_007b5a90 * DAT_0071f418,(float *)(piVar3 + 2));
    fVar1 = DAT_0071f418;
    dVar11 = (double)(*(float *)(iVar8 + 4) - (float)piVar3[1]);
    dVar12 = 0.0;
    if (dVar11 < 0.0) {
      dVar11 = (double)(float)(dVar11 + (double)(float)piVar3[3]);
    }
    if (dVar11 < (double)DAT_007b5a80) {
      uVar5 = piVar3[6] >> 0x1f;
      uVar6 = (int)*(uint *)(iVar8 + 0x18) >> 0x1f;
      iVar2 = *(int *)(iVar8 + 0x18);
      if ((int)((uVar6 >> 1 ^ *(uint *)(iVar8 + 0x18)) - uVar6) <
          (int)((uVar5 >> 1 ^ piVar3[6]) - uVar5)) {
        *(int *)(iVar8 + 0x18) = piVar3[6];
        piVar3[6] = iVar2;
      }
    }
    if (dVar11 < 1.5) {
      dVar10 = (double)(fVar1 * 50.0);
      mobyutil::Delt((float)piVar3[6],fVar1 * 50.0,(float *)(piVar3 + 2));
      mobyutil::Delt(*(float *)(iVar8 + 0x18),(float)dVar10,(float *)(iVar8 + 8));
    }
    if (moby->enabled != '\0' || bVar7) {
      *(undefined2 *)(piVar3 + 7) = 0x1e;
    }
    else if ((double)(DAT_007b5a84 + 1.0) < dVar11) {
      dVar11 = (double)mobyutil::MB_randRangeFloat(DAT_007b5a94,DAT_007b5a98);
      if ((*(char *)(piVar3[4] + 0x31) == '\0') || (*(short *)(piVar3 + 7) == 0)) {
        fVar1 = DAT_007b5aa4 * mobyutil::g_FrameTime + (float)piVar3[1];
      }
      else {
        dVar10 = (double)mobyutil::MB_randRangeFloat(DAT_007b5a80,DAT_007b5a84);
        fVar1 = (float)((double)*(float *)(iVar8 + 4) - dVar10);
        *(short *)(piVar3 + 7) = *(short *)(piVar3 + 7) + -1;
      }
      dVar10 = (double)fVar1;
      if (dVar10 < dVar12) {
        dVar10 = (double)(float)(dVar10 + (double)(float)piVar3[3]);
      }
      mobyutil::MB_PathEvalSpline(dVar10,pSVar4);
      iVar8 = fastfunc::FastCheckBsphereInView((double)(longlong)DAT_007b5aa8,auStack_90);
      if (iVar8 == -1) {
        dVar12 = (double)mobyutil::MB_randRangeFloat(DAT_007b5a88,DAT_007b5a8c);
        dVar9 = (double)mobyutil::g_FrameTime;
        piVar3[1] = (int)(float)dVar10;
        piVar3[5] = (int)(float)dVar11;
        piVar3[6] = (int)(float)(dVar12 * dVar9);
      }
    }
    uVar5 = piVar3[1] >> 0x1f;
    uVar6 = piVar3[3] >> 0x1f;
    if ((int)((uVar6 >> 1 ^ piVar3[3]) - uVar6) < (int)((uVar5 >> 1 ^ piVar3[1]) - uVar5)) {
      piVar3[1] = (int)((float)piVar3[1] - (float)piVar3[3]);
    }
  }
  if ((moby->oClass & 1) != RATCHET) {
    mobyupdate_helpers::M1671_002a8af0(moby);
  }
  return;
}



//==== 002a94c8  ns=mobyupdate_helpers  size=0x9e8
// sig: undefined M1671_002a94c8(void)
// callers(0): 
// callees(13): 000685c4 draw::GetEffectTex; 00071170 stub::STUB_00071170; 00072280 draw::FastDrawQuad; 00074604 draw::DrawMeshSet; 000f1238 mobyfunc::GetMobyJointsWorldPos; 000fcbe8 mobyutil::MB_randRangeFloat; 00174f80 vuchain::SetGSReg; 00500af8 fastfunc::FastMtx4Identity; 0050162c fastfunc::FastVecMtx4Mul; 00502e50 FUN_00502e50; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M1671_002a94c8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  ulonglong *puVar18;
  float fVar19;
  float fVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  float *pfVar24;
  ulonglong unaff_r21;
  int iVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar26;
  ulonglong unaff_r24;
  undefined4 *puVar27;
  ulonglong unaff_r25;
  undefined4 *puVar28;
  ulonglong unaff_r26;
  float *pfVar29;
  ulonglong unaff_r27;
  longlong lVar30;
  float *pfVar31;
  ulonglong unaff_r28;
  longlong lVar32;
  ulonglong unaff_r29;
  longlong lVar33;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar34;
  longlong lVar35;
  ulonglong in_LR;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  double dVar45;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar35 = uVar21 - 0x280;
  puVar18 = (ulonglong *)lVar35;
  *puVar18 = uVar21;
  puVar18[0x52] = in_LR;
  puVar18[0x49] = in_f25;
  puVar18[0x4a] = in_f26;
  puVar18[0x4b] = in_f27;
  puVar18[0x4c] = in_f28;
  puVar18[0x4d] = in_f29;
  puVar18[0x4e] = in_f30;
  puVar18[0x4f] = in_f31;
  puVar18[0x47] = unaff_r30;
  puVar18[0x48] = unaff_r31;
  iVar16 = *(int *)(param_1 + 0x78);
  puVar18[0x46] = unaff_r29;
  iVar25 = *(int *)(iVar16 + 8);
  puVar18[0x45] = unaff_r28;
  puVar18[0x44] = unaff_r27;
  puVar18[0x43] = unaff_r26;
  puVar18[0x42] = unaff_r25;
  puVar18[0x41] = unaff_r24;
  puVar18[0x40] = unaff_r23;
  puVar18[0x3f] = unaff_r22;
  puVar18[0x3e] = unaff_r21;
  if ((iVar25 != 0) && (*(short *)(iVar25 + 0xa6) == 0x260)) {
    uVar22 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    puVar18[0x3a] = uVar22;
    uVar22 = FUN_00502f08(0,0,0,0,0,0);
    puVar18[0x38] = uVar22;
    uVar22 = idol_draw::PackCmd(0,2,0,1,0x80);
    iVar17 = *(int *)(iVar16 + 4);
    puVar18[0x3b] = uVar22;
    if (iVar17 == 0) {
      *(undefined4 *)(puVar18 + 0x3d) = 2;
      *(undefined4 *)((int)puVar18 + 0x1ec) = 3;
      mobyfunc::GetMobyJointsWorldPos(iVar25,2,uVar21 - 0x98,uVar21 - 0x210);
    }
    else {
      *(undefined4 *)(puVar18 + 0x3c) = 0;
      *(undefined4 *)((int)puVar18 + 0x1e4) = 1;
      mobyfunc::GetMobyJointsWorldPos(iVar25,2,uVar21 - 0xa0,uVar21 - 0x210);
    }
    fVar6 = *(float *)((int)puVar18 + 0x84);
    fVar1 = *(float *)((int)puVar18 + 0x74) - fVar6;
    fVar7 = *(float *)(puVar18 + 0x10);
    fVar3 = *(float *)(puVar18 + 0xe) - fVar7;
    fVar8 = *(float *)(puVar18 + 0x11);
    fVar5 = *(float *)(puVar18 + 0xf) - fVar8;
    dVar44 = 0.0;
    fVar4 = fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1;
    dVar37 = dVar44;
    dVar38 = dVar44;
    dVar39 = dVar44;
    if (SQRT(fVar4) != 0.0) {
      fVar2 = 1.0 / SQRT(fVar4);
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar4 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      dVar39 = (double)(fVar3 * fVar2);
      dVar38 = (double)(fVar1 * fVar2);
      dVar37 = (double)(fVar5 * fVar2);
    }
    *(float *)(puVar18 + 0x16) = (float)dVar39;
    *(float *)((int)puVar18 + 0xb4) = (float)dVar38;
    *(float *)(puVar18 + 0x17) = (float)dVar37;
    *(undefined4 *)((int)puVar18 + 0xbc) = 0;
    fVar1 = (float)(dVar39 * dVar39 + --(double)(float)(dVar37 * dVar37));
    dVar41 = dVar44;
    dVar40 = dVar44;
    if (SQRT(fVar1) != 0.0) {
      fVar3 = 1.0 / SQRT(fVar1);
      fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      fVar3 = -(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
      dVar40 = (double)(-(fVar1 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3);
      dVar41 = (double)(float)(dVar39 * dVar40);
      dVar40 = -(double)(float)(dVar37 * dVar40);
    }
    iVar25 = 0;
    *(float *)(puVar18 + 0x12) = (float)dVar40;
    fVar1 = (float)(dVar40 * dVar38 - 0.0);
    *(undefined4 *)((int)puVar18 + 0x94) = 0;
    *(float *)(puVar18 + 0x13) = (float)dVar41;
    *(undefined4 *)((int)puVar18 + 0x9c) = 0;
    *(undefined4 *)((int)puVar18 + 0xac) = 0;
    *(float *)(puVar18 + 0x18) = fVar7;
    fVar3 = (float)(dVar37 * 0.0 - (double)(float)(dVar41 * dVar38));
    fVar4 = (float)(dVar41 * dVar39 - (double)(float)(dVar40 * dVar37));
    *(float *)(puVar18 + 0x15) = fVar1;
    *(float *)((int)puVar18 + 0xc4) = fVar6;
    *(float *)(puVar18 + 0x19) = fVar8;
    *(float *)(puVar18 + 0x14) = fVar3;
    *(float *)((int)puVar18 + 0xa4) = fVar4;
    dVar43 = 1.0;
    *(undefined4 *)((int)puVar18 + 0xcc) = 0x3f800000;
    *(float *)(param_1 + 0xc0) = (float)dVar40;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(float *)(param_1 + 200) = (float)dVar41;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(float *)(param_1 + 0xd0) = fVar3;
    *(float *)(param_1 + 0xd4) = fVar4;
    *(float *)(param_1 + 0xd8) = fVar1;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(float *)(param_1 + 0xe0) = (float)dVar39;
    *(float *)(param_1 + 0xe4) = (float)dVar38;
    *(float *)(param_1 + 0xe8) = (float)dVar37;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(float *)(param_1 + 0x10) = fVar7;
    *(float *)(param_1 + 0x14) = fVar6;
    *(float *)(param_1 + 0x18) = fVar8;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    fastfunc::FastMtx4Identity((float *)(uVar21 - 0x170));
    *(undefined4 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)((int)puVar18 + 0x144) = 0;
    *(undefined4 *)((int)puVar18 + 0x14c) = 0x3f800000;
    *(undefined4 *)(puVar18 + 0x29) = 0xbd99999a;
    fastfunc::FastVecMtx4Mul(uVar21 - 0x1b0,uVar21 - 0x1f0,uVar21 - 0x170);
    uVar22 = draw::GetEffectTex(0xc);
    puVar18[0x39] = uVar22;
    lVar30 = uVar21 - 0x130;
    dVar37 = 0.10000000149011612;
    pfVar29 = (float *)&DAT_007b7040;
    puVar27 = &DAT_007b70c4;
    puVar28 = &DAT_007b70c0;
    lVar26 = lVar30;
    lVar32 = lVar35;
    lVar33 = lVar35;
    lVar34 = lVar35;
    pfVar31 = pfVar29;
    do {
      *(undefined4 *)((int)lVar34 + 400) = 0x80808080;
      pfVar24 = (float *)lVar26;
      if ((iVar25 == 0) || (iVar25 == 2)) {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
      }
      else {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
        dVar38 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar37);
        *(float *)((int)lVar33 + 0x158) = (float)((double)*(float *)((int)lVar33 + 0x158) - dVar38);
      }
      iVar25 = iVar25 + 1;
      uVar9 = *puVar27;
      *(undefined4 *)((int)lVar32 + 0x1a0) = *puVar28;
      lVar26 = lVar26 + 0x10;
      *(undefined4 *)((int)lVar32 + 0x1a4) = uVar9;
      pfVar31 = pfVar31 + 4;
      lVar34 = lVar34 + 4;
      puVar28 = puVar28 + 2;
      puVar27 = puVar27 + 2;
      lVar33 = lVar33 + 0x10;
      lVar32 = lVar32 + 8;
    } while (iVar25 < 4);
    draw::FastDrawQuad(uVar21 - 0x130,uVar21 - 0x1b0,0,EffectTexHeaders,9);
    iVar25 = 0;
    pfVar31 = (float *)&DAT_007b7080;
    lVar26 = lVar30;
    do {
      pfVar24 = (float *)lVar26;
      if ((iVar25 == 0) || (iVar25 == 2)) {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
      }
      else {
        fVar6 = *(float *)(iVar16 + 0x2c);
        *pfVar24 = *pfVar31 * fVar6;
        pfVar24[1] = pfVar31[1] * fVar6;
        pfVar24[2] = pfVar31[2] * fVar6;
        pfVar24[3] = pfVar31[3];
        dVar38 = (double)mobyutil::MB_randRangeFloat((float)dVar44,(float)dVar37);
        *(float *)((int)lVar35 + 0x158) = (float)((double)*(float *)((int)lVar35 + 0x158) - dVar38);
      }
      iVar25 = iVar25 + 1;
      lVar26 = lVar26 + 0x10;
      pfVar31 = pfVar31 + 4;
      lVar35 = lVar35 + 0x10;
    } while (iVar25 < 4);
    draw::FastDrawQuad(uVar21 - 0x130,uVar21 - 0x1b0,0,EffectTexHeaders,9);
    uVar22 = draw::GetEffectTex(0xb);
    puVar18[0x39] = uVar22;
    uVar9 = EffectTexHeaders;
    fVar7 = *(float *)((int)puVar18 + 0xb4) * -0.13 + *(float *)((int)puVar18 + 0xc4);
    fVar1 = *(float *)(puVar18 + 0x16) * -0.13 + *(float *)(puVar18 + 0x18);
    fVar8 = *(float *)(puVar18 + 0x17) * -0.13 + *(float *)(puVar18 + 0x19);
    fVar3 = GameCamera.posY - fVar7;
    fVar5 = GameCamera.posX - fVar1;
    fVar6 = *(float *)((int)puVar18 + 0xbc);
    fVar4 = GameCamera.posZ - fVar8;
    dVar40 = (double)(float)GameCamera.field8_0x14c;
    dVar42 = (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3);
    dVar38 = dVar44;
    dVar39 = dVar44;
    dVar41 = dVar44;
    if ((double)(float)SQRT(dVar42) != dVar44) {
      dVar38 = 1.0 / SQRT(dVar42);
      dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43)
                               * (double)(float)(dVar38 * 0.5) + dVar38);
      dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43)
                               * (double)(float)(dVar38 * 0.5) + dVar38);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar42 * dVar38) * dVar38 - dVar43) *
                      (double)(float)(dVar38 * 0.5) + dVar38);
      dVar41 = (double)(fVar5 * fVar2);
      dVar39 = (double)(fVar3 * fVar2);
      dVar38 = (double)(fVar4 * fVar2);
    }
    fVar4 = (float)((double)DAT_00969f78 * dVar41 -
                   (double)(float)((double)hero::g_heroGravityDir * dVar38));
    fVar5 = (float)((double)DAT_00969f74 * dVar38 - (double)(float)((double)DAT_00969f78 * dVar39));
    fVar2 = (float)((double)hero::g_heroGravityDir * dVar39 -
                   (double)(float)((double)DAT_00969f74 * dVar41));
    lVar35 = 4;
    *(undefined4 *)((int)puVar18 + 0x19c) = 0x7f2020ff;
    *(undefined4 *)(puVar18 + 0x33) = 0x7f2020ff;
    *(undefined4 *)((int)puVar18 + 0x194) = 0x7f2020ff;
    *(undefined4 *)(puVar18 + 0x32) = 0x7f2020ff;
    dVar42 = (double)SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4);
    fVar3 = (float)(-1.0 / dVar42);
    dVar43 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar43 = (double)(fVar5 * fVar3);
    }
    dVar36 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar36 = (double)(fVar4 * fVar3);
    }
    dVar45 = dVar44;
    if (dVar44 - dVar42 < 0.0) {
      dVar45 = (double)(fVar2 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar43 = (double)(fVar5 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar36 = (double)(fVar4 * fVar3);
    }
    if (dVar42 - dVar44 < 0.0) {
      dVar45 = (double)(fVar2 * fVar3);
    }
    do {
      fVar4 = *pfVar29;
      fVar3 = (float)((double)fVar4 * dVar37);
      dVar42 = (double)fVar3;
      pfVar31 = (float *)lVar30;
      *pfVar31 = fVar3;
      dVar44 = (double)pfVar29[1];
      pfVar31[1] = (float)(dVar44 * dVar37);
      fVar3 = (float)((double)pfVar29[2] * dVar37);
      pfVar31[2] = fVar3;
      fVar5 = pfVar29[3];
      pfVar29 = pfVar29 + 4;
      pfVar31[3] = fVar5 * fVar6 + (float)((double)fVar4 * (double)(float)(dVar37 * dVar40));
      *pfVar31 = fVar5 * fVar1 +
                 fVar3 * (float)(dVar39 * dVar45 - (double)(float)(dVar38 * dVar36)) +
                 (float)(dVar42 * dVar41 +
                        (double)(float)(dVar44 * (double)(float)(dVar37 * dVar43)));
      pfVar31[1] = fVar5 * fVar7 +
                   fVar3 * (float)(dVar38 * dVar43 - (double)(float)(dVar41 * dVar45)) +
                   (float)(dVar42 * dVar39 +
                          (double)(float)(dVar44 * (double)(float)(dVar37 * dVar36)));
      pfVar31[2] = fVar5 * fVar8 +
                   fVar3 * (float)(dVar41 * dVar36 - (double)(float)(dVar39 * dVar43)) +
                   (float)(dVar42 * dVar38 +
                          (double)(float)(dVar44 * (double)(float)(dVar37 * dVar45)));
      lVar30 = lVar30 + 0x10;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    draw::FastDrawQuad(uVar21 - 0x130,0,0,uVar9,9);
    uVar23 = draw::GetEffectTex(10);
    vuchain::SetGSReg(0x18,uVar23);
    vuchain::SetGSReg(3,puVar18[0x3b]);
    uVar23 = FUN_00502f08(0,0,0,0,0,0);
    vuchain::SetGSReg(6,uVar23);
    uVar23 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
    vuchain::SetGSReg(0x1a,uVar23);
    uVar23 = FUN_00502e50(0);
    vuchain::SetGSReg(8,uVar23);
    stub::STUB_00071170();
    pfVar24 = (float *)&DAT_00faf858;
    iVar25 = 0;
    pfVar29 = (float *)&DAT_007b5ad0;
    fVar6 = *(float *)(puVar18 + 0x12);
    pfVar31 = (float *)&DAT_007b6714;
    fVar7 = *(float *)(puVar18 + 0x14);
    fVar8 = *(float *)(puVar18 + 0x16);
    fVar1 = *(float *)(puVar18 + 0x18);
    fVar3 = *(float *)((int)puVar18 + 0x94);
    fVar4 = *(float *)((int)puVar18 + 0xa4);
    fVar5 = *(float *)((int)puVar18 + 0xb4);
    fVar2 = *(float *)((int)puVar18 + 0xc4);
    fVar10 = *(float *)(puVar18 + 0x13);
    fVar11 = *(float *)(puVar18 + 0x15);
    fVar12 = *(float *)(puVar18 + 0x17);
    fVar13 = *(float *)(puVar18 + 0x19);
    do {
      fVar14 = *(float *)(iVar16 + 0x20);
      fVar19 = pfVar29[1] * fVar14;
      fVar20 = *pfVar29 * fVar14;
      fVar14 = pfVar29[2] * fVar14;
      fVar15 = pfVar29[3];
      *pfVar24 = fVar15 * fVar1 + fVar14 * fVar8 + fVar20 * fVar6 + fVar19 * fVar7;
      pfVar24[1] = fVar15 * fVar2 + fVar14 * fVar5 + fVar20 * fVar3 + fVar19 * fVar4;
      pfVar24[2] = fVar15 * fVar13 + fVar14 * fVar12 + fVar20 * fVar10 + fVar19 * fVar11;
      fVar14 = *pfVar31;
      fVar15 = fVar14 - 0.025;
      *pfVar31 = fVar15;
      if (fVar15 < -7.0) {
        *pfVar31 = fVar14 - -6.975;
      }
      iVar25 = iVar25 + 1;
      pfVar29 = pfVar29 + 4;
      pfVar24 = pfVar24 + 3;
      pfVar31 = pfVar31 + 2;
    } while (iVar25 < 0xc4);
    draw::DrawMeshSet(0x94,&DAT_00faf858,&DAT_007b6d30,&DAT_007b6710,9);
    draw::DrawMeshSet(0x32,&DAT_00faff30,&PTR_DAT_007b6f78,&DAT_007b6ba0,9);
  }
  return;
}



//==== 002a9f18  ns=mobyupdate_helpers  size=0xa10
// sig: undefined M167_002a9f18(void)
// callers(1): 002aa9c0 mobyupdate_unsorted::UpdateMoby_167
// callees(5): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23

void mobyupdate_helpers::M167_002a9f18(int param_1)

{
  longlong lVar1;
  bool bVar2;
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
  undefined4 uVar14;
  undefined4 *puVar15;
  ulonglong *puVar16;
  PlayerState PVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  PlayerState PVar20;
  int iVar21;
  int iVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar24;
  ulonglong unaff_r30;
  longlong lVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
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
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x1a0;
  puVar16 = (ulonglong *)lVar1;
  *puVar16 = uVar18;
  puVar16[0x36] = in_LR;
  puVar16[0x2d] = in_f25;
  puVar16[0x2e] = in_f26;
  puVar16[0x2f] = in_f27;
  puVar16[0x30] = in_f28;
  puVar16[0x31] = in_f29;
  puVar16[0x32] = in_f30;
  puVar16[0x33] = in_f31;
  puVar16[0x2c] = unaff_r31;
  puVar16[0x2a] = unaff_r29;
  puVar16[0x28] = unaff_r27;
  puVar16[0x2b] = unaff_r30;
  puVar16[0x29] = unaff_r28;
  puVar16[0x27] = unaff_r26;
  puVar15 = *(undefined4 **)(param_1 + 0x78);
  uVar24 = ZEXT48(puVar15);
  dVar26 = (double)mobyutil::MB_randRot();
  dVar35 = 3.141592502593994;
  fVar3 = (float)(dVar26 + 1.570796251296997);
  dVar32 = -3.141592502593994;
  dVar26 = -0.16666656732559204;
  dVar31 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  dVar29 = 2.601886990305502e-06;
  dVar36 = 0.05000000074505806;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  fVar3 = fVar6 * fVar6 * fVar5;
  fVar4 = fVar6 * fVar3;
  *(float *)(puVar16 + 0xe) =
       (fVar6 * fVar4 * 2.601887e-06 +
       fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * 0.05;
  dVar27 = (double)mobyutil::MB_randRot();
  *(undefined4 *)(puVar16 + 0xf) = 0;
  dVar28 = (double)(float)(dVar35 - dVar27);
  if (dVar27 - (double)(float)(dVar35 - dVar27) < 0.0) {
    dVar28 = dVar27;
  }
  dVar35 = (double)(float)(dVar32 - dVar27);
  if ((double)(float)(dVar32 - dVar27) - dVar28 < 0.0) {
    dVar35 = dVar28;
  }
  dVar32 = (double)(float)(dVar35 * dVar35);
  dVar27 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar35));
  dVar28 = (double)(float)(dVar32 * dVar27);
  *(float *)((int)puVar16 + 0x74) =
       (float)((double)(float)((double)(float)(dVar32 * dVar28) * dVar29 +
                              (double)(float)(dVar28 * dVar30 +
                                             (double)(float)(dVar27 * dVar31 +
                                                            (double)(float)((double)(float)(dVar32 *
                                                                                           dVar35) *
                                                                            dVar26 + dVar35)))) *
              dVar36);
  dVar26 = (double)mobyutil::MB_randRangeFloat(0.01,0.03);
  fVar3 = *(float *)((int)puVar16 + 0x74);
  fVar4 = *(float *)(puVar16 + 0xe);
  fVar5 = *(float *)(param_1 + 0xd4);
  fVar6 = *(float *)(param_1 + 0xdc);
  fVar7 = *(float *)(param_1 + 0xe4);
  fVar8 = *(float *)(param_1 + 0xec);
  fVar9 = *(float *)(param_1 + 0xd8);
  fVar10 = *(float *)(param_1 + 0xe8);
  fVar11 = *(float *)(param_1 + 0xc4);
  fVar12 = *(float *)(param_1 + 0xcc);
  fVar13 = *(float *)(param_1 + 200);
  lVar25 = uVar18 - 0x130;
  *(float *)(puVar16 + 0xe) =
       *(float *)(param_1 + 0xc0) * fVar4 + *(float *)(param_1 + 0xd0) * fVar3 +
       -(float)(dVar26 * (double)*(float *)(param_1 + 0xe0));
  *(float *)((int)puVar16 + 0x74) =
       fVar11 * fVar4 + fVar5 * fVar3 + -(float)(dVar26 * (double)fVar7);
  PVar20 = g_heroState;
  *(float *)(puVar16 + 0xf) = fVar13 * fVar4 + fVar9 * fVar3 + -(float)(dVar26 * (double)fVar10);
  *(float *)((int)puVar16 + 0x7c) =
       fVar12 * fVar4 + fVar6 * fVar3 + -(float)(dVar26 * (double)fVar8) +
       *(float *)((int)puVar16 + 0x7c);
  uVar19 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar16 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar14 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar16 + 0x84) = uVar19;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar16 + 0x11) = uVar14;
  *(undefined4 *)((int)puVar16 + 0x8c) = uVar19;
  dVar26 = 10.5;
  uVar33 = 0x40c3880000000000;
  if (PVar20 == THRUSTER_PACK_HOVER) {
    if (worldUpdateTime % 3 == 0) {
      puVar16[0x18] = (longlong)(int)(animationSpeed * 10.5);
      partupd::SpawnPart_21(0x40c3880000000000,uVar18 - 0x120,lVar25,0x4f007fff,0x1fffffff);
    }
  }
  else {
    puVar16[0x18] = (longlong)(int)(animationSpeed * 10.5);
    partupd::SpawnPart_21(0x40c3880000000000,uVar18 - 0x120,lVar25,0x4f007fff,0x1fffffff);
  }
  if (puVar15[3] != 0) {
    fVar3 = (float)puVar15[5] - *(float *)((int)puVar16 + 0x84);
    auVar37 = loadVectorLeftIndexed(0x14,uVar24);
    auVar39 = loadVectorRightIndexed(0x24,uVar24);
    auVar40 = loadVectorLeftIndexed(0x10,uVar24);
    auVar41 = loadVectorRightIndexed(0x20,uVar24);
    auVar43 = loadVectorLeftIndexed(0x84,lVar1);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar38 = vectorSubtractFloatingPoint(auVar37 | auVar39,auVar43);
    auVar42 = loadVectorLeftIndexed(0x80,lVar1);
    auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar40 = vectorSubtractFloatingPoint(auVar40 | auVar41,auVar42);
    auVar37 = loadVectorLeftIndexed(0x18,uVar24);
    auVar41 = loadVectorRightIndexed(0x28,uVar24);
    auVar46 = loadVectorLeftIndexed(0x88,lVar1);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar44);
    auVar45 = vectorSubtractFloatingPoint(auVar37 | auVar41,auVar46);
    auVar44 = ZEXT416(0xffffffff);
    auVar37 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar41 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar48 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    fVar3 = SQRT(((float)puVar15[6] - *(float *)(puVar16 + 0x11)) *
                 ((float)puVar15[6] - *(float *)(puVar16 + 0x11)) +
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) *
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) + fVar3 * fVar3);
    auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = ZEXT416(0xffffffff);
    auVar41 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar37 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar53 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar50 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
    auVar44 = ZEXT416(0xffffffff);
    auVar56 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar55 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar54 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar40,auVar40,auVar39);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar45,auVar45,auVar44);
    auVar51 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar41);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar41,auVar51,auVar47);
    *(float *)(puVar16 + 0x16) = fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar3;
    *(float *)(puVar16 + 0x17) = fVar3;
    *(float *)((int)puVar16 + 0xbc) = fVar3;
    auVar44 = loadVectorLeftIndexed(0x30,0x2a9eb0);
    auVar52 = loadVectorLeftIndexed(0x34,0x2a9eb0);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = auVar52 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar52 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar48 = vectorMultiplyAddFloatingPoint(auVar39,auVar51,auVar48);
    auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar51,auVar52);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar44,auVar48,auVar51);
    auVar48 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    dVar29 = (double)animationSpeed;
    auVar51 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar47,auVar49);
    auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar47,auVar50);
    auVar51 = vectorMultiplyAddFloatingPoint(*(undefined1 (*) [16])(puVar16 + 0x16),auVar39,auVar51)
    ;
    auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar47,auVar52);
    auVar47 = vectorMultiplyAddFloatingPoint(auVar44,auVar49,auVar47);
    auVar50 = vectorShiftLeftIntegerWord(auVar56,auVar56);
    auVar49 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar44 = ZEXT416(0xffffffff);
    auVar53 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(0xffffffff);
    auVar55 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar47,auVar37);
    auVar48 = vectorMultiplyAddFloatingPoint(auVar39,auVar47,auVar48);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar39 = vectorShiftLeftIntegerWord(auVar53,auVar53);
    auVar53 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar37 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar47,auVar52);
    auVar44 = ZEXT416(0);
    auVar41 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar47);
    auVar47 = vectorCompareEqualToFloatingPoint
                        (*(undefined1 (*) [16])(puVar16 + 0x16),
                         auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar41,auVar40,auVar50);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar49);
    auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar45,auVar54);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar51,auVar40,auVar37);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar51,auVar44,auVar53);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar51,auVar38,auVar39);
    auVar37 = vectorLogicalAndWithComplement(auVar37,auVar47);
    auVar44 = vectorLogicalAndWithComplement(auVar44,auVar47);
    auVar38 = vectorLogicalAndWithComplement(auVar39,auVar47);
    auVar39 = vectorAddFloatingPoint(auVar42,auVar37);
    auVar37 = vectorAddFloatingPoint(auVar43,auVar44);
    auVar38 = vectorAddFloatingPoint(auVar46,auVar38);
    auVar44 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar37 = auVar37 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar39 = auVar38 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar19 = storeVectorElementWordIndexed
                       (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar16 + 0x12) = uVar19;
    uVar19 = storeVectorElementWordIndexed
                       (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x94,lVar1);
    *(undefined4 *)((int)puVar16 + 0x94) = uVar19;
    uVar19 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x98,lVar1);
    *(undefined4 *)(puVar16 + 0x13) = uVar19;
    *(undefined4 *)((int)puVar16 + 0x9c) = *(undefined4 *)((int)puVar16 + 0x8c);
    puVar16[0x18] = (longlong)(int)(dVar29 * dVar26);
    partupd::SpawnPart_21
              (uVar33,uVar18 - 0x110,lVar25,0x4f007fff,0x1fffffff,0x90,
               *(undefined4 *)((int)puVar16 + 0xc4),1);
  }
  puVar16[0x18] = (longlong)(int)((double)animationSpeed * dVar26);
  uVar19 = mobyutil::MB_randInt(*(undefined4 *)((int)puVar16 + 0xc4));
  *puVar15 = uVar19;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xe4);
  fVar5 = *(float *)(param_1 + 0xe8);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar16 + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
  PVar20 = g_heroState;
  fVar9 = *(float *)(param_1 + 0xec);
  bVar2 = g_heroState == FALLING;
  *(float *)(puVar16 + 0x10) = fVar3 * -0.3 + fVar6;
  *(float *)((int)puVar16 + 0x84) = fVar4 * -0.3 + fVar7;
  *(float *)(puVar16 + 0x11) = fVar5 * -0.3 + fVar8;
  *(float *)(puVar16 + 0xe) = fVar3 * -0.075;
  *(float *)((int)puVar16 + 0x74) = fVar4 * -0.075;
  *(float *)((int)puVar16 + 0x7c) = fVar9 * -0.075 + 1.0;
  fVar3 = 0.025;
  *(undefined4 *)(puVar16 + 0xf) = 0x3ccccccd;
  PVar17 = g_heroState;
  fVar4 = 1.075;
  if (bVar2) {
    fVar4 = 1.0165;
    fVar3 = -(mobyutil::g_FrameTime * 5.0 - 0.025);
    *(float *)(puVar16 + 0xf) = fVar3;
    PVar20 = PVar17;
  }
  if (PVar20 == THRUSTER_PACK_HOVER) {
    fVar4 = 1.037;
    *(float *)(puVar16 + 0xf) = -(mobyutil::g_FrameTime * 3.0 - fVar3);
  }
  dVar26 = (double)fVar4;
  uVar33 = 0x3ff028f5c0000000;
  uVar34 = 0x40dd4c0000000000;
  iVar21 = partupd::SpawnPart_23(dVar36,0x3ff028f5c0000000,dVar26,0x40dd4c0000000000,uVar18 - 0x120)
  ;
  PVar20 = g_heroState;
  if (iVar21 != 0) {
    *(undefined1 *)(iVar21 + 3) = 0x44;
  }
  if (puVar15[3] != 0) {
    fVar3 = (float)puVar15[5] - *(float *)((int)puVar16 + 0x84);
    auVar37 = loadVectorLeftIndexed(0x14,uVar24);
    auVar39 = loadVectorRightIndexed(0x24,uVar24);
    auVar40 = loadVectorLeftIndexed(0x10,uVar24);
    auVar44 = ZEXT416(0xffffffff);
    auVar38 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar44 = ZEXT416(1);
    auVar43 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar44 = ZEXT416(0xffffffff);
    auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
    auVar41 = vectorShiftLeftIntegerWord(auVar44,auVar44);
    auVar44 = loadVectorRightIndexed(0x20,uVar24);
    auVar42 = loadVectorLeftIndexed(0x84,lVar1);
    auVar37 = vectorSubtractFloatingPoint(auVar37 | auVar39,auVar42);
    auVar39 = loadVectorLeftIndexed(0x80,lVar1);
    auVar39 = vectorSubtractFloatingPoint(auVar40 | auVar44,auVar39);
    auVar44 = loadVectorLeftIndexed(0x18,uVar24);
    auVar42 = loadVectorRightIndexed(0x28,uVar24);
    fVar3 = SQRT(((float)puVar15[6] - *(float *)(puVar16 + 0x11)) *
                 ((float)puVar15[6] - *(float *)(puVar16 + 0x11)) +
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) *
                 ((float)puVar15[4] - *(float *)(puVar16 + 0x10)) + fVar3 * fVar3);
    iVar21 = ((uint)((LZCOUNT(8 - PVar20) << 0x3a) >> 0x3f) & 0xfffffffe) + 4;
    iVar23 = 1;
    iVar21 = iVar21 + ((uint)((LZCOUNT(0x81 - PVar20) << 0x3a) >> 0x3f) & 1U - iVar21);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar38);
    auVar38 = loadVectorLeftIndexed(0x88,lVar1);
    auVar38 = vectorSubtractFloatingPoint(auVar44 | auVar42,auVar38);
    auVar44 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar40);
    auVar40 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar44);
    *(float *)(puVar16 + 0x16) = fVar3;
    *(float *)((int)puVar16 + 0xb4) = fVar3;
    *(float *)(puVar16 + 0x17) = fVar3;
    *(float *)((int)puVar16 + 0xbc) = fVar3;
    auVar44 = loadVectorLeftIndexed(0x60,0x2a9eb0);
    auVar44 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = vectorMultiplyAddFloatingPoint
                        (*(undefined1 (*) [16])(puVar16 + 0x16),
                         auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar41);
    if (1 < iVar21) {
      auVar46 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar40);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar51 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x30,0x2a9eb0);
      auVar47 = loadVectorLeftIndexed(0x34,0x2a9eb0);
      auVar41 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar49 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = auVar47 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar50 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar52 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar47 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar42);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar45);
      auVar41 = ZEXT416(0xffffffff);
      auVar53 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar52 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar45 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar46,auVar50);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar48,auVar46);
      auVar47 = vectorShiftLeftIntegerWord(auVar53,auVar53);
      auVar41 = ZEXT416(0xffffffff);
      auVar48 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
      auVar53 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar51);
      auVar51 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar52);
      auVar41 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar50);
      auVar46 = vectorMultiplyAddFloatingPoint(auVar41,auVar51,auVar46);
      auVar51 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar52 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar41 = ZEXT416(0xffffffff);
      auVar42 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      auVar41 = ZEXT416(0);
      auVar54 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar55 = vectorCompareEqualToFloatingPoint
                          (*(undefined1 (*) [16])(puVar16 + 0x16),
                           auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60);
      auVar41 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar47);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar48);
      auVar40 = ZEXT416(0xffffffff);
      auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar47 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar41,auVar46,auVar50);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar40,auVar45,auVar46);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar40,auVar38,auVar53);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar40,auVar37,auVar51);
      auVar39 = vectorMultiplyAddFloatingPoint(auVar40,auVar39,auVar52);
      auVar40 = vectorMultiplyAddFloatingPoint(auVar44,auVar38,auVar54);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar44,auVar37,auVar47);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar44,auVar39,auVar42);
      auVar44 = auVar43;
      do {
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar39 = ZEXT416(0xffffffff);
        auVar42 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar45 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = ZEXT416(0xffffffff);
        auVar46 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar39 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar42 = vectorMultiplyAddFloatingPoint(auVar41,auVar40,auVar39);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar45);
        auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar37,auVar46);
        auVar46 = loadVectorLeftIndexed(0x80,lVar1);
        auVar47 = loadVectorLeftIndexed(0x88,lVar1);
        auVar48 = loadVectorLeftIndexed(0x84,lVar1);
        auVar41 = vectorLogicalAndWithComplement(auVar42,auVar55);
        auVar42 = vectorLogicalAndWithComplement(auVar45,auVar55);
        auVar39 = vectorLogicalAndWithComplement(auVar39,auVar55);
        auVar41 = vectorAddFloatingPoint(auVar47,auVar41);
        auVar45 = vectorAddFloatingPoint(auVar48,auVar42);
        auVar42 = vectorAddFloatingPoint(auVar46,auVar39);
        auVar39 = auVar41 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar41 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0xa0,lVar1
                           );
        *(undefined4 *)(puVar16 + 0x14) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0xa4,lVar1
                           );
        *(undefined4 *)((int)puVar16 + 0xa4) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xa8,lVar1
                           );
        *(undefined4 *)(puVar16 + 0x15) = uVar19;
        *(undefined4 *)((int)puVar16 + 0xac) = *(undefined4 *)((int)puVar16 + 0x8c);
        iVar22 = partupd::SpawnPart_23(dVar36,uVar33,dVar26,uVar34,uVar18 - 0x100);
        if (iVar22 != 0) {
          *(undefined1 *)(iVar22 + 3) = 0x44;
        }
        iVar23 = iVar23 + 1;
        auVar39._0_4_ = auVar43._0_4_ + auVar44._0_4_;
        auVar39._8_8_ = auVar43._8_8_;
        auVar39._4_4_ = auVar43._4_4_ + auVar44._4_4_;
        auVar41._0_8_ = auVar39._0_8_;
        auVar41._12_4_ = auVar43._12_4_;
        auVar41._8_4_ = auVar43._8_4_ + auVar44._8_4_;
        auVar43._0_12_ = auVar41._0_12_;
        auVar43._12_4_ = auVar41._12_4_ + auVar44._12_4_;
      } while (iVar23 < iVar21);
    }
  }
  puVar15[4] = *(undefined4 *)(puVar16 + 0x10);
  puVar15[5] = *(undefined4 *)((int)puVar16 + 0x84);
  uVar19 = *(undefined4 *)(puVar16 + 0x11);
  puVar15[3] = 1;
  puVar15[6] = uVar19;
  puVar15[7] = *(undefined4 *)((int)puVar16 + 0x8c);
  return;
}



//==== 002aa928  ns=mobyupdate_helpers  size=0x6c
// sig: undefined M1671_002aa928(void)
// callers(1): 000921c0 hero::EquipItem
// callees(1): 000efa28 mobyfunc::CreateMoby

void mobyupdate_helpers::M1671_002aa928(undefined4 param_1)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = mobyfunc::CreateMoby(0xa7);
  if (pMVar2 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar2->pVar;
    pMVar2->drawDistance = 0x7e;
    *puVar1 = 0;
    puVar1[1] = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    pMVar2->updateDistance = -1;
    pMVar2->enabled = '\0';
    pMVar2->state = '\0';
  }
  return;
}



//==== 002aa9c0  ns=mobyupdate_unsorted  size=0x5dc
// sig: undefined UpdateMoby_167(MobyInstance * moby)
// callers(0): 
// callees(5): 0006d7e0 draw::RegisterPostDraw; 0007f41c hero::Hero_HandGadgetID; 000efb38 mobyfunc::DeleteMoby; 002a9f18 mobyupdate_helpers::M167_002a9f18; 004fff60 fastfunc::FastDecTimerS32

/* Moby 167 */

void mobyupdate_unsorted::UpdateMoby_167(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  bVar6 = false;
  bVar5 = false;
  pvVar3 = moby->pVar;
  uVar8 = ZEXT48(pvVar3);
  uVar1 = moby->state;
  iVar7 = ((uint)((int)hero::g_heroAnimFrame >> 0x1f) >> 1 ^ hero::g_heroAnimFrame) -
          ((int)hero::g_heroAnimFrame >> 0x1f);
  if ((DAT_0096ae88 == 3) && ((uVar1 == '\x01' || (uVar1 == '\x03')))) {
    bVar5 = bVar6;
    if (((g_heroState == THRUSTER_PACK_HIGH_JUMP) ||
        ((((g_heroState == DOUBLE_JUMP || (g_heroState == UNK_C)) || (g_heroState == FLIP_JUMP)) ||
         (((g_heroState == EDGE_JUMP && (g_heroMobyPtr->updateId == g_heroMobyPtr->animationId)) &&
          ((0x40bfffff < iVar7 && (iVar7 < 0x41800001)))))))) && (DAT_0096a0fe == 0)) {
      bVar5 = true;
    }
    if (g_heroState == THRUSTER_PACK_FORWARD_JUMP) {
      if (hero::g_heroStateTimer < (int)(animationSpeed * 44.5)) {
        bVar5 = true;
      }
    }
    if (g_heroState == THRUSTER_PACK_BONK_JUMP) {
      if ((hero::g_heroStateTimer < (int)(animationSpeed * 15.5)) ||
         (((int)(animationSpeed * 33.5) < hero::g_heroStateTimer && (g_framesNotGrounded != 0)))) {
        bVar5 = true;
      }
    }
    if ((g_heroState == FALLING) || (g_heroState == THRUSTER_PACK_HOVER)) {
      bVar5 = true;
    }
  }
  if (uVar1 == '\x04') {
    iVar7 = fastfunc::FastDecTimerS32(uVar8);
    if (iVar7 == 0) {
      *(float *)((int)pvVar3 + 0x20) =
           *(float *)((int)pvVar3 + 0x20) - *(float *)((int)pvVar3 + 0x30);
      *(float *)((int)pvVar3 + 0x24) =
           *(float *)((int)pvVar3 + 0x24) - *(float *)((int)pvVar3 + 0x34);
      *(float *)((int)pvVar3 + 0x28) =
           *(float *)((int)pvVar3 + 0x28) - *(float *)((int)pvVar3 + 0x38);
      *(float *)((int)pvVar3 + 0x2c) =
           *(float *)((int)pvVar3 + 0x2c) - *(float *)((int)pvVar3 + 0x3c);
      *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
      draw::RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (uVar1 == '\x03') {
    *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
    draw::RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    if (bVar5) {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x3c4ccccd;
      mobyupdate_helpers::M167_002a9f18(moby);
    }
    else {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      moby->state = '\x04';
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(0x28,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10
                          );
      auVar9 = ZEXT416(0xffffffff);
      auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = ZEXT416(0xffffffff);
      auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar16 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar15 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar8);
      *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x18,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar9 = vectorReciprocalEstimateFloatingPoint(auVar15);
      auVar10 = loadVectorLeftIndexed(0x14,0x2aa994);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar14 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar15,auVar12);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar14,auVar11);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar15,auVar12);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar15,auVar12);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar16);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar14);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x30,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x30U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x1c,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13
                          );
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x20,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar11)
      ;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x38,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x38U & 0xfffffffc) = uVar4;
      auVar9 = loadVectorLeftIndexed(0x24,0x2aa994);
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13)
      ;
      auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x3c,uVar8);
      *(undefined4 *)((int)pvVar3 + 0x3cU & 0xfffffffc) = uVar4;
    }
  }
  else if (uVar1 == '\x02') {
    *(float *)((int)pvVar3 + 0x20) = *(float *)((int)pvVar3 + 0x20) + *(float *)((int)pvVar3 + 0x30)
    ;
    *(float *)((int)pvVar3 + 0x24) = *(float *)((int)pvVar3 + 0x24) + *(float *)((int)pvVar3 + 0x34)
    ;
    *(float *)((int)pvVar3 + 0x28) = *(float *)((int)pvVar3 + 0x28) + *(float *)((int)pvVar3 + 0x38)
    ;
    *(float *)((int)pvVar3 + 0x2c) = *(float *)((int)pvVar3 + 0x2c) + *(float *)((int)pvVar3 + 0x3c)
    ;
    *(undefined4 *)((int)pvVar3 + 8) = DAT_0096ae60;
    draw::RegisterPostDraw(&PTR_M1671_002a94c8_0070ad18,moby);
    iVar7 = fastfunc::FastDecTimerS32(uVar8);
    if (iVar7 != 0) {
      moby->state = '\x03';
      *(undefined4 *)((int)pvVar3 + 0xc) = 0;
      *(undefined4 *)((int)pvVar3 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x3c4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x24) = 0x3e4ccccd;
      *(undefined4 *)((int)pvVar3 + 0x2c) = 0x3ccccccd;
    }
  }
  else if (uVar1 == '\x01') {
    iVar7 = hero::Hero_HandGadgetID(3);
    if (iVar7 == 3) {
      if (bVar5) {
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        moby->state = '\x02';
        auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = loadVectorLeftIndexed(0x10,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                             auVar10);
        auVar9 = ZEXT416(0xffffffff);
        auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = ZEXT416(0xffffffff);
        auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar16 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar9 = ZEXT416(0xffffffff);
        auVar17 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar13 = vectorConvertFromSignedFixedPointWord(auVar10,0);
        auVar9 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar8);
        *(undefined4 *)((uint)pvVar3 & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x18,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar12 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar9 = vectorReciprocalEstimateFloatingPoint(auVar13);
        auVar10 = loadVectorLeftIndexed(0x14,0x2aa994);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar15 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar13,auVar12);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar15,auVar11);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar12);
        auVar11 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar14);
        auVar14 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar13,auVar12);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
        auVar11 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar15);
        auVar9 = ZEXT416(0xffffffff);
        auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
        auVar13 = vectorShiftLeftIntegerWord(auVar9,auVar9);
        auVar9 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x30,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x30U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x1c,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar14);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x34,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x34U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x20,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar11);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x38,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x38U & 0xfffffffc) = uVar4;
        auVar9 = loadVectorLeftIndexed(0x24,0x2aa994);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar9 = vectorMultiplyAddFloatingPoint
                           (auVar12,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,
                            auVar13);
        auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x3c,uVar8);
        *(undefined4 *)((int)pvVar3 + 0x3cU & 0xfffffffc) = uVar4;
        *(undefined4 *)((int)pvVar3 + 0x20) = 0;
        *(undefined4 *)((int)pvVar3 + 0x24) = 0;
        *(undefined4 *)((int)pvVar3 + 0x28) = 0;
        *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
      }
    }
    else {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    moby->updateDistance = -1;
    fVar2 = (moby->pos).z;
    moby->modeBits = moby->modeBits | DISABLED;
    (moby->pos).z = fVar2 + 0.5;
  }
  return;
}



//==== 002aaf9c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1672_002aaf9c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1672_002aaf9c(void)

{
  DAT_007b712c = 0x10000;
  return;
}



//==== 002aafb0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_1672(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 1672 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_1672(MobyInstance *moby)

{
  return moby;
}



//==== 002aafb4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1672_002aafb4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1672_002aafb4(void)

{
  DAT_007b719c = 0x10000;
  return;
}



//==== 002aafc8  ns=mobyupdate_helpers  size=0x188
// sig: undefined M1672_002aafc8(void)
// callers(0): 
// callees(1): 00057820 collproc::CollLine

undefined8
mobyupdate_helpers::M1672_002aafc8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,MobyInstance *param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong unaff_r26;
  int iVar4;
  ulonglong unaff_r27;
  longlong lVar5;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar6;
  ulonglong in_f24;
  double dVar7;
  ulonglong in_f25;
  double dVar8;
  ulonglong in_f26;
  double dVar9;
  ulonglong in_f27;
  double dVar10;
  ulonglong in_f28;
  double dVar11;
  ulonglong in_f29;
  double dVar12;
  ulonglong in_f30;
  double dVar13;
  ulonglong in_f31;
  double dVar14;
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  
  uVar2 = ZEXT48(&stack0x00000000);
  lVar5 = uVar2 - 0x120;
  puVar1 = (ulonglong *)lVar5;
  *puVar1 = uVar2;
  puVar1[0x26] = in_LR;
  puVar1[0x1c] = in_f24;
  puVar1[0x1d] = in_f25;
  puVar1[0x1e] = in_f26;
  puVar1[0x1f] = in_f27;
  puVar1[0x20] = in_f28;
  puVar1[0x21] = in_f29;
  puVar1[0x22] = in_f30;
  puVar1[0x23] = in_f31;
  puVar1[0x1a] = unaff_r30;
  puVar1[0x16] = unaff_r26;
  iVar4 = 0;
  puVar1[0x1b] = unaff_r31;
  puVar1[0x19] = unaff_r29;
  puVar1[0x18] = unaff_r28;
  puVar1[0x17] = unaff_r27;
  *(undefined4 *)(puVar1 + 0x12) = 0xbdcccccd;
  *(undefined4 *)((int)puVar1 + 0x94) = 0xbdcccccd;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)((int)puVar1 + 0x9c) = 0x3dcccccd;
  *(undefined4 *)(puVar1 + 0x14) = 0x3dcccccd;
  fStack00000034 = (float)param_1;
  dVar8 = (double)fStack00000034;
  fStack0000003c = (float)param_2;
  dVar10 = (double)fStack0000003c;
  fStack00000044 = (float)param_3;
  dVar12 = (double)fStack00000044;
  fStack0000004c = (float)param_4;
  dVar14 = (double)fStack0000004c;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  dVar7 = (double)fStack00000030;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  dVar9 = (double)fStack00000038;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar11 = (double)fStack00000040;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  dVar13 = (double)fStack00000048;
  _fStack00000030 = param_1;
  _fStack00000038 = param_2;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  while( true ) {
    dVar6 = (double)*(float *)((int)lVar5 + 0x90);
    *(float *)(puVar1 + 0xe) = (float)dVar7;
    *(float *)((int)puVar1 + 0x74) = (float)dVar8;
    *(float *)((int)puVar1 + 0x7c) = (float)dVar10;
    *(float *)(puVar1 + 0x10) = (float)dVar11;
    *(float *)((int)puVar1 + 0x84) = (float)dVar12;
    *(float *)((int)puVar1 + 0x8c) = (float)dVar14;
    *(float *)(puVar1 + 0xf) = (float)(dVar9 + dVar6);
    *(float *)(puVar1 + 0x11) = (float)(dVar13 + dVar6);
    iVar3 = collproc::CollLine(uVar2 - 0xb0,uVar2 - 0xa0,param_5,param_6,0);
    if (iVar3 != 0) break;
    iVar4 = iVar4 + 1;
    lVar5 = lVar5 + 4;
    if (4 < iVar4) {
      return 1;
    }
  }
  if ((CollOutput.pMoby != (MobyInstance *)0x0) && (CollOutput.pMoby == param_7)) {
    return 1;
  }
  return 0;
}



//==== 002ab180  ns=mobyupdate_helpers  size=0x780
// sig: undefined M168_002ab180(void)
// callers(1): 002ab988 mobyupdate_unsorted::UpdateMoby_168
// callees(5): 00057820 collproc::CollLine; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fe610 mobyutil::MB_SphericalToVector; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

MobyInstance *
mobyupdate_helpers::M168_002ab180
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
  float fVar9;
  MobyInstance *moby;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar20;
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
  double dVar27;
  ulonglong in_f21;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  double dVar33;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x27] = in_f21;
  puVar10[0x28] = in_f22;
  puVar10[0x29] = in_f23;
  puVar10[0x2a] = in_f24;
  puVar10[0x2b] = in_f25;
  puVar10[0x2c] = in_f26;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x20] = unaff_r25;
  puVar10[0x1f] = unaff_r24;
  puVar10[0x23] = unaff_r28;
  puVar10[0x22] = unaff_r27;
  moby = MobyUpdateChainStart;
  puVar10[0x26] = unaff_r31;
  pMVar20 = (MobyInstance *)0x0;
  puVar10[0x25] = unaff_r30;
  puVar10[0x24] = unaff_r29;
  dVar36 = 20.0;
  puVar10[0x21] = unaff_r26;
  puVar10[0x1e] = unaff_r23;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  do {
    if (moby == (MobyInstance *)0x0) {
      return pMVar20;
    }
    if (moby->state < 0x80) {
      *(f32 *)(puVar10 + 0xe) = (moby->pos).x;
      *(f32 *)((int)puVar10 + 0x74) = (moby->pos).y;
      *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
      *(f32 *)((int)puVar10 + 0x7c) = (moby->pos).w;
      iVar15 = mobyutil::MB_GetPvarsIfMobyHasThem(moby);
      fVar2 = *(float *)(puVar10 + 0xe);
      fVar3 = *(float *)((int)puVar10 + 0x74);
      if (iVar15 == 0) {
        fVar4 = *(float *)(puVar10 + 0xf);
        fVar5 = 0.5;
      }
      else {
        fVar4 = *(float *)(puVar10 + 0xf);
        fVar5 = *(float *)(iVar15 + 0x10);
      }
      *(float *)(puVar10 + 0xf) = fVar4 + fVar5;
      if ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
        fVar9 = fVar2 - fStack00000040;
        fVar7 = fVar3 - fStack00000044;
        fVar8 = ABS(fVar9);
        fVar6 = ABS(fVar7);
        *(float *)((int)puVar10 + 0x9c) = fVar9;
        *(float *)(puVar10 + 0x14) = fVar7;
        *(float *)((int)puVar10 + 0xa4) = fVar8 - fVar6;
        dVar32 = 0.0;
        uVar19 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
        fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar7 = ABS(*(float *)((int)puVar10 + 0x9c));
        if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
          fVar7 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x14));
        if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
          fVar12 = fVar8;
        }
        dVar27 = dVar32;
        if (0.0 < fVar7) {
          lVar14 = uVar13 - 0x180;
          lVar17 = uVar13 - 0xb8;
          lVar16 = uVar13 - 200;
          lVar21 = 2;
          fVar7 = (fVar12 - fVar7) / (fVar12 + fVar7);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xd4) = fVar7;
          *(float *)((int)puVar10 + 0xcc) = fVar7;
          *(float *)(puVar10 + 0x1a) = fVar7;
          *(float *)(puVar10 + 0x19) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar8;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar7;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar7 * fVar7;
            iVar15 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar7 * fVar7;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar17 = uVar13 - 200;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar16 = lVar17;
          do {
            fVar7 = *pfVar18;
            fVar8 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar7;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar8;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          lVar14 = lVar1;
          do {
            iVar15 = (int)lVar14;
            iVar11 = (int)lVar17;
            lVar14 = lVar14 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 200)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar6);
        }
        fVar3 = fStack00000044 - fVar3;
        fVar2 = fStack00000040 - fVar2;
        fVar4 = (fVar4 + fVar5) - fStack00000048;
        fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
        *(float *)((int)puVar10 + 0x94) = fVar4;
        fVar4 = ABS(fVar4);
        fVar3 = ABS(fVar2);
        *(float *)(puVar10 + 0x12) = fVar2;
        *(float *)(puVar10 + 0x13) = fVar3 - fVar4;
        uVar19 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar10 + 0x12));
        if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = ABS(*(float *)((int)puVar10 + 0x94));
        if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
          fVar5 = fVar3;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar26 = dVar32;
        if (0.0 < fVar2) {
          lVar14 = uVar13 - 0x180;
          lVar16 = uVar13 - 0xe8;
          lVar17 = uVar13 - 0xd8;
          lVar21 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)((int)puVar10 + 0xb4) = fVar2;
          *(float *)((int)puVar10 + 0xac) = fVar2;
          *(float *)(puVar10 + 0x16) = fVar2;
          *(float *)(puVar10 + 0x15) = fVar2;
          fVar2 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar2;
          *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
            iVar15 = (int)lVar16;
            lVar14 = lVar14 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar17 = uVar13 - 0xe8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar16 = lVar17;
          do {
            fVar2 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          lVar14 = lVar1;
          do {
            iVar15 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
        }
        dVar22 = (double)fastfunc::FastSubRots(*param_5,(float)dVar27);
        fVar2 = fStack00000044 - *(float *)((int)puVar10 + 0x74);
        fVar2 = SQRT((fStack00000048 - *(float *)(puVar10 + 0xf)) *
                     (fStack00000048 - *(float *)(puVar10 + 0xf)) +
                     (fStack00000040 - *(float *)(puVar10 + 0xe)) *
                     (fStack00000040 - *(float *)(puVar10 + 0xe)) + fVar2 * fVar2);
        dVar35 = (double)fVar2;
        if (dVar35 <= dVar36) {
          mobyutil::MB_SphericalToVector
                    (fVar2,*param_5,DAT_00969fc4 * 0.5 + *param_6,(float *)(puVar10 + 0x10));
          fVar2 = *(float *)((int)puVar10 + 0x84) + fStack00000044;
          fVar3 = fVar2 - *(float *)((int)puVar10 + 0x74);
          fVar4 = (*(float *)(puVar10 + 0x10) + fStack00000040) - *(float *)(puVar10 + 0xe);
          *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) + fStack00000040;
          *(float *)((int)puVar10 + 0x84) = fVar2;
          fVar2 = (*(float *)(puVar10 + 0x11) + fStack00000048) - *(float *)(puVar10 + 0xf);
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) + fStack00000048;
          dVar34 = 1.0;
          dVar28 = -1.0;
          dVar23 = (double)(SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) /
                           (float)(dVar35 * 2.0));
          dVar31 = 1.5707963705062866;
          dVar30 = 0.15707963705062866;
          dVar33 = dVar23;
          if (dVar23 - dVar32 < 0.0) {
            dVar33 = ABS(dVar23);
          }
          dVar24 = dVar34;
          if (dVar23 - dVar32 < 0.0) {
            dVar24 = dVar28;
          }
          dVar23 = (double)(float)(1.0 - dVar33);
          if ((double)(float)(1.0 - dVar33) - dVar32 < 0.0) {
            dVar23 = dVar32;
          }
          dVar33 = (double)((float)(-(double)(((float)((double)(float)(dVar33 * dVar33) * dVar33) *
                                               DAT_007358cc +
                                              (float)((double)(float)(dVar33 * dVar33) *
                                                      (double)DAT_007358c8 +
                                                     (double)(float)(dVar33 * (double)DAT_007358c4 +
                                                                    (double)DAT_007358c0))) *
                                              (float)SQRT(dVar23) - 1.5707964) * dVar24) * 2.0);
          if ((0.15707963705062866 < dVar33) &&
             (iVar15 = mobyutil::MB_GetPvarsIfMobyHasThem(moby), iVar15 != 0)) {
            dVar24 = (double)fastfunc::FastIntToDouble(*(undefined1 *)(iVar15 + 10));
            dVar25 = (double)(float)((double)(float)(dVar24 * 0.125) / dVar35);
            dVar23 = dVar25;
            if (dVar25 - dVar32 < 0.0) {
              dVar23 = ABS(dVar25);
            }
            dVar29 = dVar34;
            if (dVar25 - dVar32 < 0.0) {
              dVar29 = dVar28;
            }
            dVar28 = (double)(float)(dVar34 - dVar23);
            if ((double)(float)(dVar34 - dVar23) - dVar32 < 0.0) {
              dVar28 = dVar32;
            }
            if (((double)(float)(dVar24 * 0.125) < dVar35) &&
               (dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar23 *
                                                                                           dVar23) *
                                                                           dVar23) * DAT_007358cc +
                                                                   (float)((double)(float)(dVar23 * 
                                                  dVar23) * (double)DAT_007358c8 +
                                                  (double)(float)(dVar23 * (double)DAT_007358c4 +
                                                                 (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar28) - dVar31) * dVar29 -
                                         dVar33), dVar33 < dVar32)) {
              dVar33 = dVar32;
            }
          }
          if (dVar33 < dVar30) {
            iVar15 = collproc::CollLine(0x951500,uVar13 - 0x120,6,param_1,0);
            if (iVar15 != 0) {
              return pMVar20;
            }
            iVar15 = collproc::CollLine(uVar13 + 0x40 & 0xffffffff,uVar13 - 0x120,6,param_1,0);
            if (iVar15 != 0) {
              return pMVar20;
            }
            *param_6 = (float)-dVar26;
            dVar36 = dVar35;
            pMVar20 = moby;
            if (dVar22 < 0.1745329201221466) {
              *param_5 = (float)dVar27;
            }
          }
        }
      }
    }
    moby = (MobyInstance *)moby->pChain;
  } while( true );
}



//==== 002ab988  ns=mobyupdate_unsorted  size=0x12d8
// sig: undefined UpdateMoby_168(MobyInstance * moby)
// callers(0): 
// callees(31): 00055284 camera::DrawTargetCrosshair; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 00084180 hero::Hero_GetHeroRelativeVector; 000855b8 hero::Hero_EndFiringAnim; 0008e0f4 hero::Hero_GetWeaponAmmo; 000aa258 hero::hero_ConsumeAmmo; 000b72b0 hero::TransitionMovement; 000da4ac lights::CreatePointLight2; 000da9e8 lights::DeletePointLight; 000f1114 mobyfunc::GetBonePosition; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcccc mobyutil::MB_GetPvarsIfMobyHasThem; 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00128248 partupd::SpawnPart_27; 002ab180 mobyupdate_helpers::M168_002ab180; 0033a1d0 FUN_0033a1d0; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00500fa8 fastfunc::FastApplyTransform; 005010c0 fastfunc::FastNormalizeRMtx4; 005023f0 fastfunc::FastVecAdd; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005e825c FUN_005e825c; 005e8338 FUN_005e8338

/* Moby 168 */

void mobyupdate_unsorted::UpdateMoby_168(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float fVar8;
  int iVar10;
  MobyInstance *moby_00;
  undefined8 uVar9;
  ulonglong uVar11;
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
  undefined8 uVar23;
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
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [32];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float afStack_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  Vec4 local_180;
  Vec4 aVStack_170 [3];
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  MobyInstance *local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_127;
  MOBY_OCLASSES local_126;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_110 [64];
  float local_d0;
  float local_cc;
  longlong local_c8;
  
  dVar30 = 0.0;
  local_200 = 0.0;
  local_1fc = 0.0;
  local_1f4 = 0.0;
  piVar3 = (int *)moby->pVar;
  uVar11 = ZEXT48(piVar3);
  local_cc = 0.0;
  if (moby->state == '\0') {
    moby->state = '\x01';
    piVar3[4] = -1;
    piVar3[5] = 0;
  }
  fastfunc::FastDecTimerS16(uVar11 + 4);
  fastfunc::FastDecTimerS32(uVar11);
  if (g_heroState == FIRST_PERSON_VIEW) {
    hero::TransitionMovement(0x1e,1);
  }
  if ((moby->animationId == '\0') && ((byte)moby->animationFrame < 3)) {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(4,0x2ab900);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,uVar11);
    *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar4;
  }
  if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
    fastfunc::FastApplyTransform(aVStack_170,(Vec4 *)&GameCamera);
    fastfunc::FastNormalizeRMtx4(auStack_110,aVStack_170);
    local_1f8 = mobyutil::g_FrameTime * 40.0;
    FUN_005e825c(&local_200,&local_200,auStack_110);
    local_1e4 = 0;
    FUN_005e825c(&local_1f0,&local_1f0,auStack_110);
    local_1f0 = GameCamera.posX + 0.15;
    local_1ec = GameCamera.posY + 0.15;
    local_1e8 = GameCamera.posZ + 0.75;
    moby_00 = (MobyInstance *)0x0;
    if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
        (moby_00 = (MobyInstance *)0x0, (g_heroMobyPtr->modeBits & DISABLED) != NONE)) &&
       (moby_00 = (MobyInstance *)0x0, DAT_0096bd8c == '\0')) {
      camera::DrawTargetCrosshair(1.0,moby,0xff0f0fff,4);
      fastfunc::FastVecAdd(local_1d0,local_1e0,&local_1f0);
      iVar10 = collproc::CollLine(0x951500,local_1e0,0,moby,0);
      moby_00 = (MobyInstance *)0x0;
      if (((iVar10 != 0) && (moby_00 = (MobyInstance *)0x0, CollOutput.pMoby != (MobyInstance *)0x0)
          ) && (moby_00 = (MobyInstance *)0x0,
               ((CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
        moby_00 = CollOutput.pMoby;
      }
    }
  }
  else {
    fVar1 = mobyutil::g_FrameTime * 40.0;
    local_200 = DAT_0096a340 * 0.0 + DAT_0096a320 * fVar1 + DAT_0096a330 * 0.0;
    local_1fc = DAT_0096a344 * 0.0 + DAT_0096a324 * fVar1 + DAT_0096a334 * 0.0;
    local_1f8 = DAT_0096a348 * 0.0 + DAT_0096a328 * fVar1 + DAT_0096a338 * 0.0;
    local_1f4 = DAT_0096a34c * 0.0 + DAT_0096a32c * fVar1 + DAT_0096a33c * 0.0 + 0.0;
    mobyfunc::GetBonePosition(moby,0,&local_1f0);
    moby_00 = (MobyInstance *)0x0;
  }
  if (DAT_0096af90 == 0) {
    dVar31 = (double)FUN_005e8338((double)local_200,(double)local_1fc);
  }
  else {
    dVar31 = (double)DAT_0096af9c;
  }
  local_d0 = (float)dVar31;
  dVar31 = (double)FUN_005e8338((double)SQRT(local_200 * local_200 + local_1fc * local_1fc),
                                (double)local_1f8);
  dVar32 = (double)local_d0;
  dVar31 = -dVar31;
  local_cc = (float)dVar31;
  if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
    if ((DAT_0096bfa8 == 1) && (g_heroState != WEAPON_FIRST_PERSON_VIEW)) {
      local_d0 = (moby->rotation).z;
      dVar32 = (double)local_d0;
      dVar31 = (double)DAT_00722244;
      local_cc = DAT_00722244;
    }
    moby_00 = (MobyInstance *)
              mobyupdate_helpers::M168_002ab180
                        (moby,DAT_0096bfa8,CONCAT44(local_1f0,local_1ec),
                         CONCAT44(local_1e8,local_1e4),&local_d0,&local_cc);
  }
  if (((moby_00 != (MobyInstance *)0x0) && (*(short *)(piVar3 + 1) == 0)) &&
     (iVar10 = hero::Hero_GetWeaponAmmo(-1), iVar10 != 0)) {
    mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
    fVar1 = GameCamera.posY - (moby_00->pos).y;
    fVar5 = GameCamera.posX - (moby_00->pos).x;
    fVar6 = GameCamera.posZ - (moby_00->pos).z;
    camera::DrawTargetCrosshair
              (ABS(-(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1) * 0.02 * 0.65 - 0.9)),moby,
               0xff0fff0f,0xff0f0000);
  }
  if (((DAT_0096bd88 != '\0') && (g_heroState != MOVEMENT_LOCKED)) &&
     (g_gameMode != GAME_MODE_SCENE)) {
    dVar29 = 0.5;
    iVar10 = (int)(animationSpeed *
                  (float)((double)(longlong)(int)(5 - (uint)g_goldWeaponsArray.blaster) + 0.5));
    local_c8 = (longlong)iVar10;
    if ((iVar10 < DAT_00969e9c) && (*piVar3 == 0)) {
      iVar10 = hero::hero_ConsumeAmmo(-1,1);
      if ((iVar10 != 0) && (DAT_0096bd8c == '\0')) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x2ab900);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,uVar11);
        *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar4;
        if (moby_00 == (MobyInstance *)0x0) {
          if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
            dVar31 = -(double)(float)((double)DAT_00969fc4 * dVar29 - dVar31);
            local_cc = -(float)((double)DAT_00969fc4 * dVar29 - (double)local_cc);
          }
        }
        else {
          dVar27 = (double)(moby_00->pos).x;
          dVar26 = (double)(moby_00->pos).y;
          dVar28 = (double)(mobyutil::g_FrameTime * 40.0);
          dVar24 = (double)(moby_00->pos).z;
          iVar10 = mobyutil::MB_GetPvarsIfMobyHasThem(moby_00);
          dVar13 = dVar29;
          if (iVar10 != 0) {
            dVar13 = (double)*(float *)(iVar10 + 0x10);
          }
          dVar24 = (double)(float)(dVar24 + dVar13);
          dVar13 = (double)FUN_005e8338((double)SQRT((float)((double)local_1f0 - dVar27) *
                                                     (float)((double)local_1f0 - dVar27) +
                                                     (float)((double)local_1ec - dVar26) *
                                                     (float)((double)local_1ec - dVar26)),
                                        (double)(float)(dVar24 - (double)local_1e8));
          dVar31 = -(double)(float)((double)DAT_00969fc4 * dVar29 - dVar31);
          local_cc = (float)-dVar13;
          dVar13 = (double)fastfunc::FastSubRots((float)dVar31,(float)-dVar13);
          dVar25 = 0.1745329201221466;
          if (0.1745329201221466 <= dVar13) {
            dVar13 = (double)fastfunc::FastWrapRot((float)dVar31,0.17453292);
            if ((double)local_cc <= dVar13) {
              dVar25 = -0.1745329201221466;
              dVar13 = (double)fastfunc::FastWrapRot((float)dVar31,-0.17453292);
              if ((double)local_cc < dVar13) {
                dVar31 = (double)fastfunc::FastWrapRot((float)dVar31,(float)dVar25);
              }
            }
            else {
              dVar31 = (double)fastfunc::FastWrapRot((float)dVar31,(float)dVar25);
            }
          }
          else {
            dVar31 = (double)local_cc;
          }
          mobyutil::MB_SphericalToVector((float)dVar28,(float)dVar32,(float)-dVar31,&local_1b0);
          local_1b0 = local_1b0 + local_1f0;
          local_1ac = local_1ac + local_1ec;
          local_1a8 = local_1a8 + local_1e8;
          dVar13 = (double)FUN_005e8338((double)(float)(dVar27 - (double)local_1b0),
                                        (double)(float)(dVar26 - (double)local_1ac));
          local_d0 = (float)dVar13;
          dVar13 = (double)FUN_005e8338((double)SQRT((float)((double)local_1b0 - dVar27) *
                                                     (float)((double)local_1b0 - dVar27) +
                                                     (float)((double)local_1ac - dVar26) *
                                                     (float)((double)local_1ac - dVar26)),
                                        (double)(float)(dVar24 - (double)local_1a8));
          local_cc = (float)-dVar13;
        }
        local_12c = 0x10000;
        local_124 = 0x3e800000;
        local_120 = 1;
        local_130 = moby;
        dVar13 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
        dVar25 = 3.141592502593994;
        fVar1 = (float)(dVar13 + 1.570796251296997);
        dVar28 = -3.141592502593994;
        dVar27 = -0.16666656732559204;
        dVar26 = 0.008333025500178337;
        dVar24 = -0.0001980741071747616;
        dVar13 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        fVar6 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = fVar6 * fVar6;
        fVar1 = fVar8 * fVar8 * fVar6;
        fVar5 = fVar8 * fVar1;
        local_140 = fVar8 * fVar5 * 2.601887e-06 +
                    fVar5 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6;
        dVar12 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
        local_126 = moby->oClass;
        dVar14 = (double)(float)(dVar25 - dVar12);
        if (dVar12 - (double)(float)(dVar25 - dVar12) < 0.0) {
          dVar14 = dVar12;
        }
        dVar25 = (double)(float)(dVar28 - dVar12);
        if ((double)(float)(dVar28 - dVar12) - dVar14 < 0.0) {
          dVar25 = dVar14;
        }
        dVar28 = (double)(float)(dVar25 * dVar25);
        dVar14 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
        dVar12 = (double)(float)(dVar28 * dVar14);
        local_13c = (float)((double)(float)(dVar28 * dVar12) * dVar13 +
                           (double)(float)(dVar12 * dVar24 +
                                          (double)(float)(dVar14 * dVar26 +
                                                         (double)(float)((double)(float)(dVar28 * 
                                                  dVar25) * dVar27 + dVar25))));
        dVar28 = 1.0;
        local_138 = 0x3f800000;
        local_134 = 0x45afdf66;
        local_128 = 1;
        local_127 = 1;
        hero::Hero_GetHeroRelativeVector(0.7,-0.15,(float)dVar29,afStack_1a0);
        collproc::CollMobySphere(0x3fdae147a0000000,afStack_1a0);
        FUN_0033a1d0((double)local_d0,(double)local_cc,dVar32,dVar31,g_heroMobyPtr);
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        iVar10 = 0;
        auVar35 = loadVectorLeftIndexed(0x5c,0x2ab900);
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (undefined1  [16])0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x14,uVar11
                          );
        *(undefined4 *)((uint)(piVar3 + 5) & 0xfffffffc) = uVar4;
        dVar27 = -1.0;
        dVar26 = 0.6499999761581421;
        dVar24 = 3.0;
        dVar13 = 6.0;
        dVar32 = 5.5;
        dVar31 = 10.5;
        uVar23 = 0x40c3880000000000;
        do {
          local_190 = 0.0;
          local_18c = 0.0;
          local_188 = 0.0;
          local_184 = 0.0;
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
          local_190 = (float)dVar25;
          dVar25 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
          local_18c = (float)dVar25;
          dVar14 = (double)mobyutil::MB_randRangeFloat((float)dVar27,(float)dVar28);
          dVar12 = (double)local_1fc;
          dVar15 = (double)local_200;
          dVar16 = (double)local_18c;
          dVar18 = (double)local_1f8;
          dVar21 = (double)local_190;
          local_184 = local_1f4;
          dVar19 = (double)SQRT((float)(dVar14 * dVar14 +
                                       (double)(float)(dVar21 * dVar21 +
                                                      (double)(float)(dVar16 * dVar16))));
          dVar22 = (double)(float)((double)(float)((double)SQRT((float)(dVar18 * dVar18 +
                                                                       (double)(float)(dVar15 * 
                                                  dVar15 + (double)(float)(dVar12 * dVar12)))) *
                                                  dVar26) / dVar19);
          dVar25 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar25 = (double)(float)(dVar14 * dVar22);
          }
          dVar17 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar17 = (double)(float)(dVar16 * dVar22);
          }
          dVar20 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar20 = (double)(float)(dVar21 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar25 = (double)(float)(dVar14 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar17 = (double)(float)(dVar16 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar20 = (double)(float)(dVar21 * dVar22);
          }
          local_188 = (float)(dVar18 + dVar25);
          local_18c = (float)(dVar12 + dVar17);
          local_190 = (float)(dVar15 + dVar20);
          dVar25 = (double)mobyutil::MB_randRangeFloat
                                     ((float)((double)mobyutil::g_FrameTime * dVar24),
                                      (float)((double)mobyutil::g_FrameTime * dVar13));
          iVar2 = (int)((double)animationSpeed * dVar31);
          local_c8 = (longlong)iVar2;
          dVar14 = (double)SQRT(local_188 * local_188 +
                                local_190 * local_190 + local_18c * local_18c);
          fVar1 = (float)(dVar25 / dVar14);
          dVar25 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar25 = (double)(local_190 * fVar1);
          }
          dVar12 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar12 = (double)(local_18c * fVar1);
          }
          dVar15 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar15 = (double)(local_188 * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar25 = (double)(local_190 * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar12 = (double)(local_18c * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar15 = (double)(local_188 * fVar1);
          }
          local_190 = (float)dVar25;
          local_18c = (float)dVar12;
          local_188 = (float)dVar15;
          uVar9 = mobyutil::MB_randRange((int)((double)animationSpeed * dVar32),iVar2);
          partupd::SpawnPart_27(uVar23,&local_1f0,&local_190,0x5f2f4f6f,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 5);
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        uVar23 = mobyutil::MB_randRange((int)(animationSpeed * 4.5),(int)(animationSpeed * 7.5));
        partupd::SpawnPart_27(0x41086a0000000000,&local_1f0,&local_200,0x2f4f7f7f,uVar23);
      }
      if (moby->animationId != '\x04') {
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(moby,4,0,(int)(animationSpeed * 7.5));
      }
      if (DAT_00a0fd9c != -1) {
        DAT_00a0fd9c = DAT_00a0fd9c + 1;
      }
      iVar10 = (int)(animationSpeed * (float)((double)(longlong)update::g_GameFrameCount + dVar29));
      local_c8 = (longlong)iVar10;
      if ((int)(uint)DAT_00a0fd9e < iVar10 / 600) {
        sVar7 = (short)(iVar10 >> 0x1f);
        DAT_00a0fd9e = ((short)(iVar10 / 600) + sVar7) -
                       ((short)((short)(iVar10 / 0x2580000) + sVar7) >> 0xf);
      }
      DAT_00a0fda0 = DAT_00a0fda0 | 1 << (Level & 0x3f) | 0x80000000;
    }
  }
  if (((((g_downButtons & DAT_0096ad80) == 0) ||
       (iVar10 = hero::Hero_GetWeaponAmmo(-1), iVar10 == 0)) &&
      ((local_c8 = (longlong)(int)(animationSpeed * 9.5), (int)(animationSpeed * 9.5) < DAT_00969e9c
       || (DAT_0096bd88 == '\0')))) ||
     ((g_heroState == MOVEMENT_LOCKED || (g_gameMode == GAME_MODE_SCENE)))) {
    if (((moby->animationId == '\0') && ((moby->field43_0x70 & 2U) == 0)) ||
       ((g_heroState == MOVEMENT_LOCKED || (g_gameMode == GAME_MODE_SCENE)))) {
      if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
        mobyutil::MB_SetAnimationNoBlend(moby,1,0);
        mobyfunc::UpdateMobyAnimFrame(moby);
      }
    }
    else if (moby->animationId != '\x01') {
      local_c8 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(moby,1,0,(int)(animationSpeed * 7.5));
    }
    hero::Hero_EndFiringAnim();
    *piVar3 = 0;
  }
  if ((moby->updateId == '\x02') || (iVar10 = piVar3[5], iVar10 < 1)) {
    if (piVar3[4] != -1) {
      lights::DeletePointLight(piVar3[4]);
      piVar3[5] = 0;
      piVar3[4] = -1;
    }
  }
  else {
    dVar29 = 9.5;
    iVar2 = (int)(animationSpeed * 9.5);
    local_c8 = (longlong)iVar2;
    dVar31 = (double)fastfunc::FastIntToDouble
                               (iVar2 + ((uint)((longlong)iVar10 - (longlong)iVar2 >> 0x3f) &
                                        iVar10 - iVar2));
    dVar32 = 0.699999988079071;
    iVar10 = (int)((double)animationSpeed * dVar29);
    local_c8 = (longlong)iVar10;
    dVar12 = (double)((float)(dVar31 * 0.699999988079071) /
                     (float)(longlong)((double)animationSpeed * dVar29));
    dVar31 = (double)fastfunc::FastIntToDouble
                               (iVar10 + ((uint)((longlong)piVar3[5] - (longlong)iVar10 >> 0x3f) &
                                         piVar3[5] - iVar10));
    iVar10 = (int)((double)animationSpeed * dVar29);
    local_c8 = (longlong)iVar10;
    dVar14 = (double)((float)(dVar31 * dVar32) / (float)(longlong)((double)animationSpeed * dVar29))
    ;
    dVar31 = (double)fastfunc::FastIntToDouble
                               (iVar10 + ((uint)((longlong)piVar3[5] - (longlong)iVar10 >> 0x3f) &
                                         piVar3[5] - iVar10));
    dVar28 = (double)g_heroPosition.x;
    dVar25 = (double)((float)(dVar31 * dVar32) / (float)(longlong)((double)animationSpeed * dVar29))
    ;
    dVar31 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar27 = 3.141592502593994;
    fVar1 = (float)(dVar31 + 1.570796251296997);
    dVar26 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar13 = 0.008333025500178337;
    dVar29 = -0.0001980741071747616;
    dVar32 = 2.601886990305502e-06;
    dVar31 = 2.0;
    fVar5 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar5 = fVar1;
    }
    fVar6 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = fVar6 * fVar6;
    fVar1 = fVar8 * fVar8 * fVar6;
    dVar16 = (double)g_heroPosition.y;
    fVar5 = fVar8 * fVar1;
    local_180.x = (float)((double)(fVar8 * fVar5 * 2.601887e-06 +
                                  fVar5 * -0.0001980741 +
                                  fVar1 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6) * 2.0
                         + dVar28);
    dVar15 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar28 = (double)(float)(dVar27 - dVar15);
    if (dVar15 - (double)(float)(dVar27 - dVar15) < 0.0) {
      dVar28 = dVar15;
    }
    dVar27 = (double)(float)(dVar26 - dVar15);
    if ((double)(float)(dVar26 - dVar15) - dVar28 < 0.0) {
      dVar27 = dVar28;
    }
    dVar26 = (double)(float)(dVar27 * dVar27);
    dVar15 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
    dVar28 = (double)(float)(dVar26 * dVar15);
    iVar10 = piVar3[4];
    local_180.y = (float)((double)(float)((double)(float)(dVar26 * dVar28) * dVar32 +
                                         (double)(float)(dVar28 * dVar29 +
                                                        (double)(float)(dVar15 * dVar13 +
                                                                       (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar24 + dVar27)))) *
                          dVar31 + dVar16);
    local_180.z = g_heroPosition.z + 1.0;
    if (iVar10 == -1) {
      iVar10 = lights::CreatePointLight2(6.0,dVar30,dVar12,dVar14,dVar25,&local_180);
      piVar3[4] = iVar10;
    }
    else {
      PointLights[iVar10].pos.x = local_180.x;
      PointLights[iVar10].pos.y = local_180.y;
      PointLights[iVar10].pos.w = 6.0;
      PointLights[iVar10].pos.z = local_180.z;
      PointLights[iVar10].color.x = (float)dVar12;
      PointLights[iVar10].color.y = (float)dVar14;
      PointLights[iVar10].color.z = (float)dVar25;
    }
    fastfunc::FastDecTimerS32(uVar11 + 0x14);
  }
  return;
}



//==== 002acc60  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1684_002acc60(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1684_002acc60(void)

{
  DAT_007b720c = 0x10000;
  return;
}



//==== 002acc80  ns=mobyupdate_unsorted  size=0x164
// sig: undefined UpdateMoby_1684(MobyInstance * moby)
// callers(0): 
// callees(1): 00110b70 mobyutil::MB_IsPntInCuboid

/* Moby 1684 */

void mobyupdate_unsorted::UpdateMoby_1684(MobyInstance *moby)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  double dVar4;
  
  moby->updateDistance = -1;
  piVar3 = (int *)moby->pVar;
  if (g_heroState != TURRET_PLANE_UI) {
    uVar2 = 0;
    moby->setByGroup = '\0';
    dVar4 = 0.0;
    do {
      iVar1 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar3);
      if (iVar1 != 0) {
        moby->setByGroup = moby->setByGroup | (byte)(1 << (uVar2 & 0x3f));
        iVar1 = *piVar3;
        if ((double)(Cuboids[iVar1].imatrix.v2.x * (g_heroPosition.z - Cuboids[iVar1].pos.z) +
                    Cuboids[iVar1].imatrix.v0.x * (g_heroPosition.x - Cuboids[iVar1].pos.x) +
                    Cuboids[iVar1].imatrix.v1.x * (g_heroPosition.y - Cuboids[iVar1].pos.y)) <=
            dVar4) {
          moby->state = '\0';
          if (DAT_0096bda0 == 6) {
            DAT_0096bda0 = 0;
          }
        }
        else {
          moby->state = '\x01';
          if (DAT_0096bda0 != 6) {
            DAT_0096bda0 = 6;
          }
        }
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 0x20);
  }
  return;
}



//==== 002acde4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M1686_002acde4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M1686_002acde4(void)

{
  DAT_007b727c = 0x10000;
  return;
}



//==== 002ace00  ns=mobyupdate_unsorted  size=0x190
// sig: undefined UpdateMoby_1686(MobyInstance * moby)
// callers(0): 
// callees(5): 000efb38 mobyfunc::DeleteMoby; 0010675c mobyutil::MB_damage; 0011a100 mobyutil::MB_DistributeBoltsNearHero; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound

/* Moby 1686 */

void mobyupdate_unsorted::UpdateMoby_1686(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 in_r9;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
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
    mobyutil::MB_DistributeBoltsNearHero(lVar2);
    lVar5 = lVar2 + 0x10;
    lVar4 = lVar2 + 0x40;
    uVar6 = 0;
    mobyutil::MB_SpawnDebrisMoby(0,lVar2,0x698,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar6,lVar2,0x699,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyutil::MB_SpawnDebrisMoby(uVar6,lVar2,0x69a,lVar5,lVar4,0,0,in_r9,&DAT_00a15d30);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 002acf90  ns=mobyupdate_unsorted  size=0xf8
// sig: undefined UpdateMoby_17(MobyInstance * moby)
// callers(0): 
// callees(5): 0007b310 help::Help_QueueMessage; 0007b458 help::Help_Kill; 00112e18 mobyutil::MB_UnlockItem; 004d3720 FUN_004d3720; 004d3870 FUN_004d3870

/* Moby 17 */

ulonglong mobyupdate_unsorted::UpdateMoby_17(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = (ulonglong)(int)moby;
  bVar1 = moby->state;
  pvVar2 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    FUN_004d3720(uVar3,pvVar2);
    uVar3 = 0x406ccccd;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0x406ccccd;
  }
  else if (bVar1 < 2) {
    uVar3 = FUN_004d3870(uVar3,pvVar2);
    if ((int)uVar3 != 0) {
      uVar3 = 2;
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (uVar3 = (ulonglong)(uint)g_gameMode, g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    uVar3 = (ulonglong)*(ushort *)((int)pvVar2 + 4);
    if (*(ushort *)((int)pvVar2 + 4) == 2) {
      help::Help_Kill();
      mobyutil::MB_UnlockItem(3,1);
      iVar4 = help::Help_QueueMessage(STR_YOUR_THRUSTER_PACK_INCLUDES_THE_0x2AFB,0x3d);
      uVar3 = (ulonglong)iVar4;
    }
  }
  return uVar3;
}



//==== 002ad088  ns=mobyupdate_helpers  size=0x14
// sig: undefined M170_002ad088(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M170_002ad088(void)

{
  DAT_007b72ec = 0x10000;
  return;
}



//==== 002ad118  ns=mobyupdate_helpers  size=0x884
// sig: undefined M170_002ad118(void)
// callers(1): 002add88 mobyupdate_unsorted::UpdateMoby_170
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 001246b8 partupd::SpawnPart_13; 001d4d88 FUN_001d4d88; 0028cce0 mobyupdate_helpers::M1488_0028cce0; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M170_002ad118
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar12 = 0x3fd3333340000000;
  uVar14 = 0x3ff028f5c0000000;
  uVar16 = 0x3fa99999a0000000;
  uVar19 = 0x41024f8000000000;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  partupd::SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff347ae20000000,0x3fa99999a0000000,
             0x41024f8000000000,local_120);
  iVar7 = 0;
  uVar21 = 0x3ff2e147c0000000;
  do {
    partupd::SpawnPart_13(uVar12,uVar14,uVar21,uVar16,uVar19,local_120);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  iVar7 = 0;
  dVar22 = 0.0;
  dVar11 = -1.875;
  dVar13 = 1.875;
  dVar15 = 3.75;
  dVar17 = 0.02500000037252903;
  dVar20 = 0.23000000417232513;
  uVar12 = 0x3feccccce0000000;
  uVar14 = 0x4000ccccc0000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar13);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar13);
    mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar15);
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    M1488_0028cce0(uVar12,uVar14,param_1,local_110,local_100,&DAT_00a15d30,0x162);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  uVar12 = 0x3ff3333340000000;
  uVar14 = 0x4003333340000000;
  do {
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar13);
    mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar13);
    mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar15);
    mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar20);
    iVar6 = mobyutil::MB_randInt(2);
    M1488_0028cce0(uVar12,uVar14,param_1,local_110,local_f0,&DAT_00a15d30,iVar6 + 0x163);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  if (param_5 != '\0') {
    iVar7 = 10;
    dVar13 = 8.0;
    dVar11 = (double)SQRT((GameCamera.posZ - fStack00000048) * (GameCamera.posZ - fStack00000048) +
                          (GameCamera.posX - fStack00000040) * (GameCamera.posX - fStack00000040) +
                          (GameCamera.posY - fStack00000044) * (GameCamera.posY - fStack00000044));
    if (dVar11 < 8.0) {
      iVar7 = fastfunc::FastDoubleToInt(dVar11);
      iVar7 = iVar7 + 2;
    }
    iVar6 = 0;
    if (dVar11 - 7.0 < 0.0) {
      dVar22 = (double)(float)(7.0 - dVar11);
    }
    if (0 < iVar7) {
      dVar11 = 10.0;
      uVar12 = 0x41324f8000000000;
      dVar15 = 15.5;
      dVar17 = 20.5;
      dVar20 = 25.5;
      dVar18 = 30.5;
      do {
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar13,(float)dVar11);
        dVar9 = (double)mobyutil::g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar10 = (double)(float)(dVar8 * dVar9 - (double)(float)(dVar9 * dVar22));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar5 = mobyutil::MB_randInt(dVar8,dVar9,(double)(float)(dVar9 * dVar22),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2));
        lVar5 = mobyutil::MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar17);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar18);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar20),iVar1);
        partupd::SpawnPart_11(uVar12,dVar10,&stack0x00000040,local_e0,uVar2,uVar3);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
    uVar4 = (int)DAT_00a10714 >> 0x1f;
    uVar14 = 0x4018000000000000;
    uVar12 = 0x4022000000000000;
    if ((int)((uVar4 >> 1 ^ DAT_00a10714) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4022000000000000,param_1,&stack0x00000040,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar14,param_1,&stack0x00000040,local_e0);
    }
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar12,param_1,&stack0x00000040,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,
                 0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar14,param_1,&stack0x00000040,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,
                 0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x4008000000000000,param_1,&stack0x00000040,local_e0,0x20,
                 (int)(animationSpeed * 29.5),0x20,0,0);
  }
  return;
}



//==== 002ad9c0  ns=mobyupdate_helpers  size=0x380
// sig: undefined M170_002ad9c0(void)
// callers(1): 002add88 mobyupdate_unsorted::UpdateMoby_170
// callees(10): 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010e030 mobyutil::MB_genericExplosion; 0015cdb0 sound::sound_Kill; 005cd098 libc::printf
// strings: 006559e4: 'Moby class %d Damage Received: %f\n' | 00655a0c: 'pDam->primIndex:%d ip%3.3f,%3.3f,%3.3f\n'

void mobyupdate_helpers::M170_002ad9c0(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  MobyModeBit MVar2;
  int handle;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_60 [16];
  undefined1 auStack_50 [16];
  int local_40 [4];
  
  if (param_1->state != '\x02') {
    pfVar6 = (float *)mobyutil::MB_damage(param_1,0x330000,0);
    if (pfVar6 != (float *)0x0) {
      libc::printf("Moby class %d Damage Received: %f\n",param_1->oClass,(double)pfVar6[0xb]);
      libc::printf("pDam->primIndex:%d ip%3.3f,%3.3f,%3.3f\n",pfVar6[0xe],(double)*pfVar6,
                   (double)pfVar6[1],(double)pfVar6[2]);
    }
    iVar7 = mobyutil::MB_HandleDamage(param_1,pfVar6,param_3,0,local_40,0,0,4);
    fVar1 = (param_1->pos).z;
    pfVar8 = (float *)param_3;
    if ((0 < iVar7) && (iVar7 < 3)) {
      *pfVar8 = 0.0;
    }
    if ((((1 < local_40[0]) && (pfVar6 != (float *)0x0)) && (pfVar6[8] != 0.0)) &&
       (fVar1 + 8.7 < *(float *)((int)pfVar6[8] + 0x18))) {
      uVar3 = (int)*pfVar8 >> 0x1f;
      uVar4 = (int)pfVar6[0xb] >> 0x1f;
      iVar7 = (int)param_2;
      if ((int)((uVar4 >> 1 ^ (uint)pfVar6[0xb]) - uVar4) <
          (int)((uVar3 >> 1 ^ (uint)*pfVar8) - uVar3)) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        *pfVar8 = *pfVar8 - pfVar6[0xb];
        *(undefined1 *)(iVar7 + 0x67) = 0xfa;
        auVar10 = loadVectorLeftIndexed(0x1c,0x2ad99c);
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = vectorSplatHalfWord(auVar10,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar10,0x26,param_2);
        *(undefined2 *)(iVar7 + 0x26) = uVar5;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
      }
      else {
        uVar9 = 0;
        MVar2 = param_1->modeBits;
        *pfVar8 = 0.0;
        param_1->modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
        *(undefined1 *)(iVar7 + 0x67) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        mobyfunc::GetBonePosition(param_1,0,auStack_50);
        mobyutil::MB_genericExplosion
                  (uVar9,uVar9,0x4010000000000000,0x4000000000000000,uVar9,0x3ff0000000000000,
                   0x4034000000000000,param_1,local_60,auStack_50,1,0xffffffffffffffff,10,3,0x10);
        if (param_1->animationId != '\x01') {
          mobyutil::MB_SetAnimation(param_1,1,0,0);
        }
        handle = *(int *)(iVar7 + 0x70);
        if (((handle != -1) && (sound::g_SoundChannels[handle].pMoby == param_1)) &&
           (sound::g_SoundChannels[handle].state != '\0')) {
          sound::sound_Kill(handle);
        }
        *(undefined4 *)(iVar7 + 0x70) = 0xffffffff;
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  mobyutil::MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}



//==== 002add88  ns=mobyupdate_unsorted  size=0x60c
// sig: undefined UpdateMoby_170(MobyInstance * moby)
// callers(0): 
// callees(14): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 0010e030 mobyutil::MB_genericExplosion; 00113e88 mobyutil::MB_MayaFrameTrigger; 00121a40 partupd::SpawnPart_5; 0015cc7c sound::IsMobyPlayingSound; 0015d12c sound::PlayMobySound; 0015d5b8 sound::sound_SetOffset; 002a4e90 FUN_002a4e90; 002ad118 mobyupdate_helpers::M170_002ad118; 002ad9c0 mobyupdate_helpers::M170_002ad9c0; 005c8318 rand

/* Moby 170 */

void mobyupdate_unsorted::UpdateMoby_170(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined8 uVar14;
  double dVar15;
  ulonglong in_f30;
  double dVar16;
  ulonglong in_f31;
  double dVar17;
  undefined1 auVar18 [16];
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar9 - 0x180);
  *puVar8 = uVar9;
  puVar8[0x32] = in_LR;
  puVar8[0x2e] = in_f30;
  puVar8[0x2f] = in_f31;
  puVar8[0x2d] = unaff_r31;
  bVar1 = moby->state;
  puVar8[0x2c] = unaff_r30;
  pvVar6 = moby->pVar;
  puVar8[0x2b] = unaff_r29;
  puVar8[0x2a] = unaff_r28;
  puVar8[0x29] = unaff_r27;
  puVar8[0x28] = unaff_r26;
  puVar8[0x27] = unaff_r25;
  if (bVar1 == 0) {
    moby->setByGroup = '\0';
    moby->state = '\x01';
    if ((short)(ushort)(byte)moby->updateDistance < moby->drawDistance) {
      moby->updateDistance = (char)moby->drawDistance;
    }
    uVar5 = moby->uid;
    *(undefined4 *)((int)pvVar6 + 0x70) = 0xffffffff;
    if ((*(uint *)(&DAT_00a0cd1c + Level * 0x100 + (int)((longlong)((int)(short)uVar5 >> 5) << 2)) &
        1 << (uVar5 & 0x1f)) != 0) {
      if (*(int *)((int)pvVar6 + 0x74) != -1) {
        (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 1;
      }
      mobyfunc::DeleteMoby(moby);
      return;
    }
    mobyfunc::GetBonePosition(moby,0,uVar9 - 0xc0);
    *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) + 1.1;
    FUN_002a4e90(0x4006666660000000,moby,uVar9 - 0xc0);
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    return;
  }
  if (1 < bVar1) {
    if (2 < bVar1) {
      return;
    }
    dVar17 = 0.0;
    *(undefined4 *)(puVar8 + 0x1e) = 0;
    *(undefined4 *)((int)puVar8 + 0xf4) = 0;
    *(undefined4 *)(puVar8 + 0x1f) = 0;
    *(undefined4 *)((int)puVar8 + 0xfc) = 0;
    bVar1 = moby->setByGroup;
    *(float *)(puVar8 + 0x1f) = mobyutil::g_FrameTime * 8.0;
    fVar2 = 1000.0;
    if (bVar1 == 0) {
      if (-1 < (int)(uint)bVar1) {
        fVar2 = 8.5;
      }
    }
    else if ((bVar1 < 2) || (bVar1 < 3)) {
      fVar2 = 17.0;
    }
    if ((fVar2 < 100.0) && (iVar13 = mobyutil::MB_MayaFrameTrigger(fVar2,moby), iVar13 != 0)) {
      mobyfunc::GetBonePosition(moby,(ulonglong)(byte)moby->setByGroup + 1,uVar9 - 0x80);
      puVar8[0x12] = 0xffffffffffffffff;
      puVar8[0x14] = 1;
      puVar8[0x15] = 1;
      puVar8[0x16] = 0xffffffffffffffff;
      puVar8[0x17] = 0;
      mobyutil::MB_genericExplosion
                (dVar17,dVar17,0x4010000000000000,0x4000000000000000,dVar17,0x3ff0000000000000,
                 0x4034000000000000,moby,uVar9 - 0x90,uVar9 - 0x80,1,&DAT_002add40,10,3,0x10);
      moby->setByGroup = moby->setByGroup + '\x01';
    }
    if ((moby->field43_0x70 & 2U) == 0) {
      return;
    }
    iVar13 = 0;
    puVar8[0x12] = 0xffffffffffffffff;
    puVar8[0x14] = 1;
    puVar8[0x15] = 1;
    puVar8[0x16] = 0xffffffffffffffff;
    puVar8[0x17] = 0;
    mobyutil::MB_genericExplosion
              (dVar17,dVar17,0x4010000000000000,0x4000000000000000,dVar17,0x3ff0000000000000,
               0x4034000000000000,moby,uVar9 - 0x90,0,1,0xffffffffffffffff,10,3,0x10);
    mobyfunc::GetBonePosition(moby,3,uVar9 - 0x70);
    fVar2 = (moby->pos).y;
    fVar3 = (moby->pos).z;
    *(float *)(puVar8 + 0x22) = *(float *)(puVar8 + 0x22) - (moby->pos).x;
    *(float *)((int)puVar8 + 0x114) = *(float *)((int)puVar8 + 0x114) - fVar2;
    *(float *)(puVar8 + 0x23) = *(float *)(puVar8 + 0x23) - fVar3;
    dVar16 = 3.0;
    do {
      dVar15 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar16);
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).z;
      fVar4 = (moby->pos).y;
      *(undefined4 *)((int)puVar8 + 0x4c) = *(undefined4 *)((int)puVar8 + 0x11c);
      *(float *)(puVar8 + 8) = (float)((double)*(float *)(puVar8 + 0x22) * dVar15 + (double)fVar2);
      *(float *)(puVar8 + 9) = (float)((double)*(float *)(puVar8 + 0x23) * dVar15 + (double)fVar3);
      *(float *)((int)puVar8 + 0x44) =
           (float)((double)*(float *)((int)puVar8 + 0x114) * dVar15 + (double)fVar4);
      mobyupdate_helpers::M170_002ad118(moby);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 5);
    if (*(int *)((int)pvVar6 + 0x74) != -1) {
      (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 1;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (*(int *)((int)pvVar6 + 0x74) != -1) {
    (&DAT_00a20828)[*(int *)((int)pvVar6 + 0x74)] = 0;
  }
  iVar13 = *(int *)((int)pvVar6 + 0x70);
  if (iVar13 != -1) {
    iVar13 = sound::IsMobyPlayingSound(moby,iVar13);
    if (iVar13 != 0) goto LAB_002adfa4;
    iVar13 = *(int *)((int)pvVar6 + 0x70);
  }
  if (iVar13 == -1) {
    iVar13 = sound::PlayMobySound(0,4,moby);
    *(int *)((int)pvVar6 + 0x70) = iVar13;
  }
  if (iVar13 != -1) {
    *(undefined4 *)((int)puVar8 + 0xdc) = 0;
    *(undefined4 *)(puVar8 + 0x1b) = 0;
    *(undefined4 *)((int)puVar8 + 0xd4) = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0;
    auVar18 = loadVectorLeftIndexed(8,0x2add40);
    iVar13 = *(int *)((int)pvVar6 + 0x70);
    auVar18 = auVar18 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xd8,
                       uVar9 - 0x180);
    *(undefined4 *)(puVar8 + 0x1b) = uVar7;
    sound::sound_SetOffset(iVar13,(float *)(puVar8 + 0x1a));
  }
LAB_002adfa4:
  if ((moby->enabled != '\0') && (iVar13 = mobyutil::MB_randInt(9), iVar13 == 0)) {
    iVar13 = rand();
    iVar10 = rand();
    uVar11 = rand();
    mobyfunc::GetBonePosition(moby,0,uVar9 - 0xa0);
    dVar17 = 0.5;
    *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) + 0.5;
    uVar14 = mobyutil::MB_randRangeFloat(900000.0,1.8e+06);
    iVar12 = rand();
    puVar8[0x24] = (longlong)(iVar12 % 0x28 + 0x28);
    puVar8[0x24] = (longlong)
                   (int)(animationSpeed * (float)((double)(longlong)puVar8[0x24] + dVar17));
    partupd::SpawnPart_5
              (uVar14,0,uVar9 - 0xa0,(longlong)iVar13 + 0x30U & 0x3f,(longlong)iVar10 + 0x20U & 0x3f
               ,uVar11 & 0x2f);
  }
  mobyupdate_helpers::M170_002ad9c0(moby,pvVar6,(int)pvVar6 + 0x20);
  return;
}



//==== 002ae394  ns=mobyupdate_helpers  size=0x14
// sig: undefined M172_002ae394(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M172_002ae394(void)

{
  DAT_007b735c = 0x10000;
  return;
}



//==== 002ae3a8  ns=mobyupdate_helpers  size=0x128
// sig: undefined M172_002ae3a8(void)
// callers(0): 
// callees(1): 000780f4 stub::STUB_000780f4

void mobyupdate_helpers::M172_002ae3a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x30) = LevelFogNearDist;
  draw::ScreenColorEffectEnabled = 1;
  *(float *)(iVar1 + 0x34) = LevelFogFarDist;
  *(float *)(iVar1 + 0x38) = LevelFogNearIntensity;
  *(float *)(iVar1 + 0x3c) = LevelFogFarIntensity;
  *(u8 *)(iVar1 + 0x40) = levelFog.r;
  *(u8 *)(iVar1 + 0x41) = levelFog.g;
  *(u8 *)(iVar1 + 0x42) = levelFog.b;
  levelFog.r = '@';
  levelFog.g = '`';
  levelFog.b = '@';
  LevelFogNearDist = 0;
  LevelFogFarDist = 131072.0;
  LevelFogNearIntensity = 255.0;
  LevelFogFarIntensity = 0.0;
  debug::g_DebugEnables[2] = 0;
  TfragDrawDist = 147456.0;
  TieDrawDist = 144.0;
  ShrubDrawDist = 144.0;
  DAT_00a390b8 = 0x90;
  PartClipDist = camera::Camera_AddPostUpdFunc;
  stub::STUB_000780f4(0x40,0x60,0x40);
  return;
}



//==== 002ae4d0  ns=mobyupdate_helpers  size=0x100
// sig: undefined M172_002ae4d0(void)
// callers(0): 
// callees(1): 000780f4 stub::STUB_000780f4

void mobyupdate_helpers::M172_002ae4d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  LevelFogNearDist = *(undefined4 *)(iVar1 + 0x30);
  LevelFogFarDist = *(float *)(iVar1 + 0x34);
  draw::ScreenColorEffectEnabled = 0;
  LevelFogNearIntensity = *(float *)(iVar1 + 0x38);
  LevelFogFarIntensity = *(float *)(iVar1 + 0x3c);
  levelFog.r = *(u8 *)(iVar1 + 0x40);
  levelFog.g = *(u8 *)(iVar1 + 0x41);
  levelFog.b = *(u8 *)(iVar1 + 0x42);
  debug::g_DebugEnables[2] = 1;
  if (param_2 != 0) {
    TfragDrawDist = 512000.0;
    DAT_00a390b8 = 500;
    TieDrawDist = 720.0;
    ShrubDrawDist = 500.0;
    PartClipDist = 0x1f4000;
  }
  stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
  return;
}



//==== 002ae5d8  ns=Global  size=0x408
// sig: undefined FUN_002ae5d8(void)
// callers(1): 002a4420 mobyupdate_unsorted::UpdateMoby_163
// callees(13): 000494e0 camera::camera6::Cam6_Activate; 00057820 collproc::CollLine; 000780f4 stub::STUB_000780f4; 000b72b0 hero::TransitionMovement; 000efa28 mobyfunc::CreateMoby; 000f0ea8 mobyfunc::AttachManipulator; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights; 001122ac mobyutil::MB_GetPlatformParent; 0011afac mobyutil::MB_RequestHelpMessage; 0015d12c sound::PlayMobySound; 002b9870 FUN_002b9870; 005001fc fastfunc::FastMemSet

MobyInstance * FUN_002ae5d8(double param_1,double param_2,undefined4 param_3,f32 *param_4)

{
  float fVar1;
  undefined4 *puVar2;
  void *pvVar3;
  MobyInstance *moby;
  int iVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_70 [16];
  
  moby = mobyfunc::CreateMoby(VISIBOMB_MISSILE);
  if (moby != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)moby->pVar;
    moby->drawDistance = 0xff;
    DAT_00a1bfe8 = 1;
    DAT_0096bcc0 = moby;
    moby->updateDistance = -1;
    moby->enabled = '\x01';
    moby->state = '\x01';
    (moby->rotation).z = (float)param_1;
    (moby->rotation).y = (float)param_2;
    puVar2[9] = &DAT_0096bc40;
    puVar2[10] = &DAT_0096bc80;
    *puVar2 = param_3;
    (moby->pos).x = *param_4;
    (moby->pos).y = param_4[1];
    (moby->pos).z = param_4[2];
    (moby->pos).w = param_4[3];
    puVar2[2] = 0;
    puVar2[3] = 0;
    if ((g_standingOnMoby == 0) || (iVar4 = mobyutil::MB_GetPlatformParent(), iVar4 == 0)) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = SQRT(DAT_00969de8 * DAT_00969de8 +
                   DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4);
    }
    auVar6 = ZEXT416(0xffffffff);
    auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    puVar2[1] = fVar1;
    auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
    auVar6 = loadVectorLeftIndexed(4,0x2ae5d0);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint
                       (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x10,ZEXT48(puVar2)
                      );
    *(undefined4 *)((uint)(puVar2 + 4) & 0xfffffffc) = uVar5;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[5] = 0;
    puVar2[0x11] = 0x3ecccccd;
    pvVar3 = moby->pVar;
    draw::ScreenColorEffectEnabled = 1;
    *(undefined4 *)((int)pvVar3 + 0x30) = LevelFogNearDist;
    *(float *)((int)pvVar3 + 0x34) = LevelFogFarDist;
    *(float *)((int)pvVar3 + 0x38) = LevelFogNearIntensity;
    *(float *)((int)pvVar3 + 0x3c) = LevelFogFarIntensity;
    *(u8 *)((int)pvVar3 + 0x40) = levelFog.r;
    *(u8 *)((int)pvVar3 + 0x41) = levelFog.g;
    *(u8 *)((int)pvVar3 + 0x42) = levelFog.b;
    levelFog.r = '@';
    levelFog.g = '`';
    levelFog.b = '@';
    LevelFogNearDist = 0;
    LevelFogFarDist = 131072.0;
    LevelFogNearIntensity = 255.0;
    LevelFogFarIntensity = 0.0;
    debug::g_DebugEnables[2] = 0;
    TfragDrawDist = 147456.0;
    TieDrawDist = 144.0;
    ShrubDrawDist = 144.0;
    DAT_00a390b8 = 0x90;
    PartClipDist = camera::Camera_AddPostUpdFunc;
    stub::STUB_000780f4(0x40,0x60,0x40);
    mobyfunc::UpdateMobyTransform(moby);
    uVar5 = camera::camera6::Cam6_Activate(moby);
    puVar2[5] = uVar5;
    hero::TransitionMovement(0x1d,1);
    fastfunc::FastMemSet(puVar2[9],0,0x40);
    fastfunc::FastMemSet(puVar2[10],0,0x40);
    mobyfunc::AttachManipulator(moby,0,puVar2[9]);
    mobyfunc::AttachManipulator(moby,1,puVar2[10]);
    uVar5 = FUN_002b9870(moby);
    puVar2[8] = uVar5;
    puVar2[0x12] = DAT_007b7384 * mobyutil::g_FrameTime;
    mobyutil::MB_CopyHeroLights(moby);
    iVar4 = sound::PlayMobySound(0,4,moby);
    puVar2[0xb] = iVar4;
    iVar4 = collproc::CollLine(local_70,param_4,0,g_heroMobyPtr,0);
    if (iVar4 != 0) {
      moby->setByGroup = '\x01';
      (moby->pos).x = CollOutput.ip.x;
      (moby->pos).y = CollOutput.ip.y;
      (moby->pos).z = CollOutput.ip.z;
      (moby->pos).w = CollOutput.ip.w;
    }
    OcclMode = 1;
    mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
  }
  return moby;
}



//==== 002ae9e0  ns=Global  size=0x17c
// sig: undefined FUN_002ae9e0(void)
// callers(1): 00480298 mobyupdate_unsorted::UpdateMoby_832
// callees(5): 00049618 camera::camera6::???_Cam6_RotMath; 000780f4 stub::STUB_000780f4; 0007b868 help::Help_Resume; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby

void FUN_002ae9e0(MobyInstance *param_1,int *param_2)

{
  void *pvVar1;
  
  if (*(int *)(*param_2 + 0x78) != 0) {
    *(undefined4 *)(*(int *)(*param_2 + 0x78) + 4) = 0;
  }
  DAT_0096bcc0 = 0;
  camera::camera6::____Cam6_RotMath(param_2[5]);
  param_2[5] = 0;
  hero::TransitionMovement(0,1);
  pvVar1 = param_1->pVar;
  draw::ScreenColorEffectEnabled = 0;
  LevelFogNearDist = *(undefined4 *)((int)pvVar1 + 0x30);
  LevelFogFarDist = *(float *)((int)pvVar1 + 0x34);
  LevelFogNearIntensity = *(float *)((int)pvVar1 + 0x38);
  LevelFogFarIntensity = *(float *)((int)pvVar1 + 0x3c);
  levelFog.r = *(u8 *)((int)pvVar1 + 0x40);
  levelFog.g = *(u8 *)((int)pvVar1 + 0x41);
  levelFog.b = *(u8 *)((int)pvVar1 + 0x42);
  debug::g_DebugEnables[2] = 1;
  TfragDrawDist = 512000.0;
  TieDrawDist = 720.0;
  ShrubDrawDist = 500.0;
  DAT_00a390b8 = 500;
  PartClipDist = 0x1f4000;
  stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
  help::Help_Resume();
  mobyfunc::DeleteMoby(param_1);
  GameCamera.camUnderWater = 0;
  return;
}



//==== 002aeb68  ns=mobyupdate_helpers  size=0x1bc
// sig: undefined M172_002aeb68(void)
// callers(1): 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(5): 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul

void mobyupdate_helpers::M172_002aeb68(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  MobyInstance *pMoby;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  Vec4 VStack_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [72];
  
  fVar1 = DAT_0071f408;
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)(param_2 + 0x20) + 0x78);
    dVar5 = 0.10999999940395355;
    uVar3 = (int)*(uint *)(iVar2 + 0xc) >> 0x1f;
    dVar6 = 0.0;
    iVar4 = (uVar3 >> 1 ^ *(uint *)(iVar2 + 0xc)) - uVar3;
    if (iVar4 < 0x3ee66667) {
      if (iVar4 < 0x3ee66666) {
        *(float *)(iVar2 + 0xc) = DAT_0071f408 * 0.05 + *(float *)(iVar2 + 0xc);
      }
    }
    else {
      *(float *)(iVar2 + 0xc) = -(DAT_0071f408 * 0.05 - *(float *)(iVar2 + 0xc));
    }
    iVar2 = *(int *)(param_2 + 0x20);
    *(float *)(iVar2 + 0x48) = fVar1 * -1.5707964;
    fastfunc::FastEulerToMtx1(auStack_c0,iVar2 + 0x40);
    fastfunc::FastMtxCopyNoTranslate(auStack_80,param_1 + 0xc0);
    fastfunc::FastVecMtx4Mul(&VStack_100,auStack_80,auStack_c0);
    fastfunc::FastApplyTransform((Vec4 *)(*(int *)(param_2 + 0x20) + 0xc0),&VStack_100);
    pMoby = *(MobyInstance **)(param_2 + 0x20);
    (pMoby->pos).x =
         (float)((double)local_d0 * dVar6 + (double)(float)((double)local_f0 * dVar5)) +
         *(float *)(param_1 + 0x10);
    (pMoby->pos).y =
         (float)((double)local_cc * dVar6 + (double)(float)((double)local_ec * dVar5)) +
         *(float *)(param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 0x18);
    (pMoby->pos).w = (float)((double)local_c4 * dVar6 + (double)(float)((double)local_e4 * dVar5));
    (pMoby->pos).z =
         (float)((double)local_c8 * dVar6 + (double)(float)((double)local_e8 * dVar5)) + fVar1;
    mobyfunc::PostUpdateMobyLockTransform(pMoby);
  }
  return;
}



//==== 002aed78  ns=mobyupdate_helpers  size=0x570
// sig: undefined M172_002aed78(void)
// callers(1): 002af360 mobyupdate_unsorted::UpdateMoby_172
// callees(7): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 00123390 partupd::SpawnPart_11; 001246b8 partupd::SpawnPart_13; 001d4d88 FUN_001d4d88; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M172_002aed78(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined4 local_d0 [12];
  longlong local_a0;
  
  uVar15 = 0x3fd3333340000000;
  uVar17 = 0x3ff028f5c0000000;
  uVar19 = 0x3fa99999a0000000;
  uVar22 = 0x40e86a0000000000;
  partupd::SpawnPart_13
            (0x3fd3333340000000,0x3ff028f5c0000000,0x3ff1333340000000,0x3fa99999a0000000,
             0x40e86a0000000000,local_f0);
  iVar9 = 0;
  uVar24 = 0x3ff11eb860000000;
  do {
    partupd::SpawnPart_13(uVar15,uVar17,uVar24,uVar19,uVar22,local_f0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 5);
  if (param_2 != '\0') {
    fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
    fVar6 = GameCamera.posX - *(float *)(param_1 + 0x10);
    fVar7 = GameCamera.posZ - *(float *)(param_1 + 0x18);
    iVar9 = 10;
    dVar25 = 0.0;
    dVar23 = 8.0;
    dVar20 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar20 < 8.0) {
      iVar9 = fastfunc::FastDoubleToInt(dVar20);
      iVar9 = iVar9 + 2;
    }
    iVar10 = 0;
    if (dVar20 - 7.0 < 0.0) {
      dVar25 = (double)(float)(7.0 - dVar20);
    }
    if (0 < iVar9) {
      dVar20 = 10.0;
      uVar15 = 0x41186a0000000000;
      dVar14 = 15.5;
      dVar16 = 20.5;
      dVar18 = 25.5;
      dVar21 = 30.5;
      do {
        dVar11 = (double)mobyutil::MB_randRangeFloat((float)dVar23,(float)dVar20);
        dVar12 = (double)mobyutil::g_FrameTime;
        local_d0[0] = 0x4f008fff;
        local_d0[1] = 0x4f008fff;
        local_d0[3] = 0x4f006fff;
        local_d0[4] = 0x2fffffff;
        local_d0[2] = 0x4f007fff;
        local_d0[5] = 0x2fffffff;
        dVar13 = (double)(float)(dVar11 * dVar12 - (double)(float)(dVar12 * dVar25));
        local_d0[6] = 0x2f005f7f;
        local_d0[7] = 0x2f004f7f;
        local_d0[8] = 0x2f003f7f;
        local_d0[9] = 0x2f00004f;
        local_d0[10] = 0x2f000000;
        local_d0[0xb] = 0x3f000000;
        lVar8 = mobyutil::MB_randInt(dVar11,dVar12,(double)(float)(dVar12 * dVar25),6);
        uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2));
        lVar8 = mobyutil::MB_randInt(6);
        uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar8 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar16);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar14),iVar1);
        iVar1 = (int)((double)animationSpeed * dVar21);
        local_a0 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar18),iVar1);
        partupd::SpawnPart_11(uVar15,dVar13,param_1 + 0x10,local_e0,uVar2,uVar3);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    uVar4 = (int)DAT_00a10714 >> 0x1f;
    uVar15 = 0x4008000000000000;
    uVar17 = 0x4000000000000000;
    if ((int)((uVar4 >> 1 ^ DAT_00a10714) - uVar4) < 0x3f733333) {
      local_a0 = (longlong)(int)(animationSpeed * 15.5);
      FUN_001d4d88(0x4008000000000000,param_1,param_1 + 0x10,local_e0,uVar4,
                   (int)(animationSpeed * 15.5),0x7f,0x7f,0x7f);
      local_a0 = (longlong)(int)(animationSpeed * 24.5);
      FUN_001d4d88(uVar17,param_1,param_1 + 0x10,local_e0);
    }
    iVar9 = param_1 + 0x10;
    local_a0 = (longlong)(int)(animationSpeed * 20.5);
    FUN_001d4d88(uVar15,param_1,iVar9,local_e0,0x30,(int)(animationSpeed * 20.5),0x7f,0x40,0);
    local_a0 = (longlong)(int)(animationSpeed * 27.5);
    FUN_001d4d88(uVar17,param_1,iVar9,local_e0,0x40,(int)(animationSpeed * 27.5),0x60,0x10,0);
    local_a0 = (longlong)(int)(animationSpeed * 29.5);
    FUN_001d4d88(0x3ff0000000000000,param_1,iVar9,local_e0,0x20,(int)(animationSpeed * 29.5),0x20,0,
                 0);
  }
  return;
}



//==== 002af360  ns=mobyupdate_unsorted  size=0x1340
// sig: undefined UpdateMoby_172(MobyInstance * moby)
// callers(0): 
// callees(25): 00049058 camera::camera6::???_Cam6_SetupFromMoby; 00049618 camera::camera6::???_Cam6_RotMath; 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000780f4 stub::STUB_000780f4; 0007b7d8 help::Help_Suspend; 0007b868 help::Help_Resume; 000b72b0 hero::TransitionMovement; 000efb38 mobyfunc::DeleteMoby; 000fe610 mobyutil::MB_SphericalToVector; 000ffb70 mobyutil::GetGroundZ; 00106150 mobyutil::MB_RegisterLameShadow; 00107860 mobyutil::MB_DamageMobyList; 00109af0 mobyutil::Delt; 0010e030 mobyutil::MB_genericExplosion; 00110950 mobyutil::MB_RandomizeVector; 0011afac mobyutil::MB_RequestHelpMessage; 0015cdb0 sound::sound_Kill; 0015d734 sound::sound_SetPitch; 002aeb68 mobyupdate_helpers::M172_002aeb68; 002aed78 mobyupdate_helpers::M172_002aed78; 00500608 fastfunc::FastVecNormalize; 00501980 fastfunc::FastQuaternionToEuler; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 172 */

void mobyupdate_unsorted::UpdateMoby_172(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f26;
  ulonglong in_f27;
  undefined8 uVar30;
  ulonglong in_f28;
  double dVar31;
  undefined8 uVar32;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f31;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar22 = uVar13 - 0x1c0;
  puVar12 = (ulonglong *)lVar22;
  *puVar12 = uVar13;
  puVar12[0x3a] = in_LR;
  puVar12[0x32] = in_f26;
  puVar12[0x33] = in_f27;
  puVar12[0x34] = in_f28;
  puVar12[0x35] = in_f29;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x30] = unaff_r30;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x31] = unaff_r31;
  puVar12[0x2d] = unaff_r27;
  dVar35 = 0.0;
  *(undefined4 *)(puVar12 + 0x1a) = 0;
  *(undefined4 *)((int)puVar12 + 0xd4) = 0;
  *(undefined4 *)(puVar12 + 0x1b) = 0;
  *(undefined4 *)((int)puVar12 + 0xdc) = 0;
  puVar12[0x2f] = unaff_r29;
  piVar9 = (int *)moby->pVar;
  uVar23 = ZEXT48(piVar9);
  fVar2 = mobyutil::g_FrameTime * 8.0;
  OcclMode = 1;
  LevelFogMode = 1;
  puVar12[0x2c] = unaff_r26;
  *(float *)(puVar12 + 0x1b) = fVar2;
  help::Help_Suspend();
  DAT_00a1bfe8 = 1;
  mobyutil::MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
  iVar17 = piVar9[4] + -1;
  piVar9[4] = iVar17;
  fVar2 = mobyutil::g_FrameTime;
  puVar12[0x29] = (longlong)(int)(animationSpeed * 100.5);
  fVar1 = DAT_007b7384;
  if ((((((((-*(int *)((int)puVar12 + 0x14c) < iVar17) &&
           (g_heroState != DYING_GROUNDED && g_heroState != TAKING_DAMAGE)) &&
          (g_heroState != MOVEMENT_LOCKED)) &&
         ((hero::g_heroStateType != 4 && hero::g_heroStateType != 2 && (hero::g_heroStateType != 3))
         )) && (hero::g_heroStateType < 0xd)) &&
       (((hero::g_heroStateType != 7 && (hero::g_heroStateType != 10)) &&
        ((hero::g_heroStateType != 0x10 &&
         (((hero::g_heroStateType != 5 && (g_heroState != MOVEMENT_LOCKED)) &&
          (g_heroState != ANIM_TARGET_WALK)))))))) &&
      ((g_heroState != TURRET_PLANE_UI && (g_framesGroundedCnt != 0)))) &&
     ((g_standingOnMoby == 0 ||
      ((*(short *)(g_standingOnMoby + 0xa6) != 0x13e &&
       (*(short *)(g_standingOnMoby + 0xa6) != 0x46f)))))) {
    if (iVar17 < 0) {
      if (piVar9[5] != 0) {
        camera::camera6::____Cam6_SetupFromMoby(piVar9[5],lVar14);
      }
      pvVar10 = moby->pVar;
      draw::ScreenColorEffectEnabled = 0;
      LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
      LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
      LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
      LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
      levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
      levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
      levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
      debug::g_DebugEnables[2] = 1;
      stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
      mobyupdate_helpers::M172_002aeb68(lVar14,uVar23);
    }
    else {
      fVar45 = DAT_007b7384;
      if ((g_downButtons & CROSS) != 0) {
        fVar45 = DAT_007b7388;
      }
      fVar45 = (fVar45 * fVar2 - (float)piVar9[0x12]) * DAT_007b738c + (float)piVar9[0x12];
      piVar9[0x12] = (int)fVar45;
      fVar3 = (fVar45 - (float)piVar9[1]) * DAT_007b7390 + (float)piVar9[1];
      piVar9[1] = (int)fVar3;
      fVar5 = DAT_007b7388;
      if (DAT_007b7388 * fVar2 < fVar3) {
        piVar9[1] = (int)(DAT_007b7388 * fVar2);
      }
      iVar17 = piVar9[0xb];
      iVar16 = fastfunc::FastDoubleToInt
                         ((double)((fVar45 - (fVar1 * fVar2) / (fVar5 * fVar2 - fVar1 * fVar2)) *
                                  DAT_007b7380));
      sound::sound_SetPitch(iVar17,iVar16);
      fVar2 = animationSpeed;
      iVar17 = piVar9[4];
      if (0 < iVar17) {
        puVar12[0x29] = (longlong)(int)(animationSpeed * 3000.5);
        puVar12[0x29] = (longlong)(int)(fVar2 * 5.5);
        fVar2 = DAT_0071f408;
        if (iVar17 < *(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c)) {
          fVar3 = DAT_0071f408 * 0.1;
          fVar1 = DAT_0096ba04 - (float)piVar9[7];
          fVar45 = fVar3 * (hero::g_heroPadStick - (float)piVar9[6]) + (float)piVar9[6];
          piVar9[6] = (int)fVar45;
          piVar9[7] = (int)(fVar3 * fVar1 + (float)piVar9[7]);
          fVar1 = (moby->rotation).x;
          (moby->rotation).x = fVar2 * 0.06 * (fVar45 - fVar1) + fVar1;
          dVar33 = 0.012271846644580364;
          dVar26 = (double)fastfunc::FastDiffRots
                                     ((double)(moby->rotation).y,
                                      (double)(DAT_0071f408 * 0.012271847 * (float)piVar9[7]));
          (moby->rotation).y = (float)dVar26;
          if (dVar26 < 1.5707963705062866) {
            if (dVar26 <= -1.5707963705062866) {
              (moby->rotation).y = -1.5697963;
            }
          }
          else {
            (moby->rotation).y = 1.5697963;
          }
          dVar26 = (double)fastfunc::FastDiffRots
                                     ((double)(moby->rotation).z,
                                      (double)((float)((double)DAT_0071f408 * dVar33) *
                                              (float)piVar9[6]));
          (moby->rotation).z = (float)dVar26;
          mobyutil::MB_RegisterLameShadow(0.2,moby);
        }
      }
      mobyutil::MB_SphericalToVector
                ((float)piVar9[1],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar12 + 0x1c));
      fVar2 = (moby->pos).x;
      fVar1 = (moby->pos).y;
      fVar45 = (moby->pos).z;
      fVar3 = *(float *)((int)puVar12 + 0xe4);
      *(float *)(puVar12 + 0x18) = fVar2;
      fVar5 = fVar45 + *(float *)(puVar12 + 0x1d);
      *(float *)((int)puVar12 + 0xc4) = fVar1;
      fVar4 = (moby->pos).w;
      *(float *)(puVar12 + 0x19) = fVar45;
      *(f32 *)((int)puVar12 + 0xcc) = fVar4;
      (moby->pos).x = fVar2 + *(float *)(puVar12 + 0x1c);
      (moby->pos).y = fVar1 + fVar3;
      (moby->pos).z = fVar5;
      fVar2 = animationSpeed;
      dVar33 = 3000.5;
      iVar17 = piVar9[4];
      puVar12[0x29] = (longlong)(int)(animationSpeed * 3000.5);
      dVar26 = 60.5;
      puVar12[0x29] = (longlong)(int)(fVar2 * 60.5);
      if (*(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c) < iVar17) {
        dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar14 + 0x10,0);
        fVar5 = (moby->pos).z;
        if ((fVar5 < (float)(dVar27 + (double)(float)piVar9[0x11])) &&
           ((CollOutput.pMoby == (MobyInstance *)0x0 ||
            (((CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
             ((short)(CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
          fVar45 = mobyutil::Delt((float)(dVar27 + (double)(float)piVar9[0x11]),
                                  mobyutil::g_FrameTime * 6.0,&(moby->pos).z);
          uVar24 = piVar9[1];
          fVar2 = (float)piVar9[1];
          *(float *)(puVar12 + 0x24) = fVar45;
          dVar29 = ABS((double)fVar2);
          *(float *)((int)puVar12 + 0x124) = (float)(dVar29 - ABS((double)fVar45));
          fVar1 = mobyutil::g_FrameTime;
          fVar5 = (moby->pos).z;
          fVar2 = (moby->rotation).y;
          uVar20 = (ulonglong)(uVar24 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
          dVar27 = dVar29;
          if ((double)*(float *)((int)puVar12 + 0x124) - dVar35 < 0.0) {
            dVar27 = ABS((double)fVar45);
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
          fVar45 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
          dVar28 = ABS((double)*(float *)(puVar12 + 0x24));
          if ((double)*(float *)((int)puVar12 + 0x124) - dVar35 < 0.0) {
            dVar28 = dVar29;
          }
          dVar29 = dVar35;
          if (dVar35 < dVar27) {
            lVar15 = uVar13 - 0x1b0;
            lVar18 = uVar13 - 0x98;
            lVar21 = uVar13 - 0x88;
            lVar25 = 2;
            fVar6 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar7 = fVar6 * fVar6;
            *(float *)((int)puVar12 + 0x134) = fVar6;
            *(float *)((int)puVar12 + 300) = fVar6;
            *(float *)(puVar12 + 0x26) = fVar6;
            *(float *)(puVar12 + 0x25) = fVar6;
            fVar6 = fVar7 * fVar7;
            *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar7;
            *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar6;
            *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar6 * fVar7;
            do {
              *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x118) * fVar6 * fVar6;
              iVar17 = (int)lVar18;
              lVar15 = lVar15 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
              lVar21 = lVar21 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar25 = 4;
            lVar21 = uVar13 - 0x98;
            pfVar19 = (float *)&DAT_007358e0;
            lVar15 = lVar22;
            lVar18 = lVar21;
            do {
              fVar6 = *pfVar19;
              fVar7 = pfVar19[1];
              pfVar19 = pfVar19 + 2;
              *(float *)((int)lVar15 + 0x128) = *(float *)((int)lVar15 + 0x128) * fVar6;
              lVar15 = lVar15 + 8;
              *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar7;
              lVar18 = lVar18 + 8;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            lVar15 = 2;
            dVar27 = dVar35;
            do {
              iVar17 = (int)lVar22;
              lVar22 = lVar22 + 0x10;
              iVar16 = (int)lVar21;
              lVar21 = lVar21 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0x128)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar45);
          }
          if ((double)(fVar1 * 1.5707964) - dVar29 < 0.0) {
            dVar29 = (double)(fVar1 * 1.5707964);
          }
          (moby->rotation).y = (float)((double)fVar2 - dVar29);
        }
      }
      fVar4 = (moby->pos).x;
      uVar24 = (int)fVar4 >> 0x1f;
      iVar17 = (uVar24 >> 1 ^ (uint)fVar4) - uVar24;
      if ((((iVar17 < 0x40900000) || (0x447ea000 < iVar17)) ||
          (fVar4 = (moby->pos).y, uVar24 = (int)fVar4 >> 0x1f,
          iVar17 = (uVar24 >> 1 ^ (uint)fVar4) - uVar24, iVar17 < 0x40900000)) ||
         (((0x447ea000 < iVar17 || (fVar5 < 4.5)) || (1018.5 < fVar5)))) {
        if (*(int *)(*piVar9 + 0x78) != 0) {
          *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
        }
        DAT_0096bcc0 = 0;
        camera::camera6::____Cam6_RotMath(piVar9[5]);
        piVar9[5] = 0;
        hero::TransitionMovement(0,1);
        pvVar10 = moby->pVar;
        draw::ScreenColorEffectEnabled = 0;
        LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
        LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
        LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
        LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
        levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
        levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
        levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
        debug::g_DebugEnables[2] = 1;
        TfragDrawDist = 512000.0;
        TieDrawDist = 720.0;
        ShrubDrawDist = 500.0;
        DAT_00a390b8 = 500;
        PartClipDist = 0x1f4000;
        stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
        help::Help_Resume();
        mobyfunc::DeleteMoby(moby);
        GameCamera.camUnderWater = 0;
      }
      else {
        mobyupdate_helpers::M172_002aeb68(lVar14,uVar23);
        dVar29 = 0.3333333432674408;
        dVar31 = 0.5;
        dVar27 = 1.100000023841858;
        fastfunc::FastQuaternionToEuler
                  ((double)((((float)piVar9[6] - (moby->rotation).x) * 1.1 +
                            (float)piVar9[7] * 0.5 + ABS((float)piVar9[6] * 0.33333334)) * -0.7),
                   (ulonglong)(uint)piVar9[9] + 0x10,1);
        fastfunc::FastQuaternionToEuler
                  ((double)((float)((double)(float)((double)(float)piVar9[6] -
                                                   (double)(moby->rotation).x) * dVar27 -
                                   (double)(float)((double)(float)piVar9[7] * dVar31 +
                                                  ABS((double)(float)((double)(float)piVar9[6] *
                                                                     dVar29)))) * 0.7),
                   (ulonglong)(uint)piVar9[10] + 0x10,1);
        fVar2 = *(float *)((int)puVar12 + 0xe4);
        fVar1 = *(float *)(puVar12 + 0x1c);
        *(MobyInstance **)(puVar12 + 0x20) = moby;
        *(undefined **)((int)puVar12 + 0x104) = &DAT_00830000;
        dVar28 = (double)(fVar1 * fVar1 + fVar2 * fVar2);
        uVar30 = 0x4018000000000000;
        *(undefined4 *)((int)puVar12 + 0x10c) = 0x40c00000;
        *(undefined4 *)(puVar12 + 0x22) = 1;
        MVar8 = moby->oClass;
        dVar27 = dVar35;
        dVar29 = dVar35;
        if ((double)(float)SQRT(dVar28) != dVar35) {
          dVar27 = 1.0 / SQRT(dVar28);
          dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0)
                                   * (double)(float)(dVar31 * dVar27) + dVar27);
          dVar27 = (double)(float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0)
                                   * (double)(float)(dVar31 * dVar27) + dVar27);
          fVar45 = (float)(-(double)(float)((double)(float)(dVar28 * dVar27) * dVar27 - 1.0) *
                           (double)(float)(dVar31 * dVar27) + dVar27);
          dVar29 = (double)(fVar1 * fVar45);
          dVar27 = (double)(fVar2 * fVar45);
        }
        dVar28 = (double)animationSpeed;
        *(float *)(puVar12 + 0x1e) = (float)dVar29;
        *(float *)((int)puVar12 + 0xf4) = (float)dVar27;
        uVar32 = 0x3ff0000000000000;
        *(undefined1 *)(puVar12 + 0x21) = 3;
        *(undefined1 *)((int)puVar12 + 0x109) = 2;
        iVar17 = piVar9[4];
        *(undefined4 *)(puVar12 + 0x1f) = 0x3f800000;
        *(undefined4 *)((int)puVar12 + 0xfc) = 0x45afdf66;
        *(MOBY_OCLASSES *)((int)puVar12 + 0x10a) = MVar8;
        uVar20 = ZEXT48(g_heroMobyPtr);
        lVar22 = lVar14 + 0x10;
        puVar12[0x29] = (longlong)(int)(dVar28 * dVar33);
        iVar17 = collproc::CollLine(uVar13 - 0x100,lVar22,0,
                                    lVar14 + ((longlong)(*(int *)((int)puVar12 + 0x14c) + -0x28) -
                                              (longlong)iVar17 >> 0x3f & uVar20 - lVar14),
                                    uVar13 - 0xd0);
        if (iVar17 == 0) {
          uVar24 = 0;
          if (piVar9[4] == 0) {
            if (*(int *)(*piVar9 + 0x78) != 0) {
              *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
            }
            DAT_0096bcc0 = 0;
            camera::camera6::____Cam6_RotMath(piVar9[5]);
            piVar9[5] = 0;
            hero::TransitionMovement(0,1);
            pvVar10 = moby->pVar;
            draw::ScreenColorEffectEnabled = 0;
            LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
            LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
            LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
            LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
            levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
            levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
            levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
            debug::g_DebugEnables[2] = 1;
            TfragDrawDist = 512000.0;
            TieDrawDist = 720.0;
            ShrubDrawDist = 500.0;
            DAT_00a390b8 = 500;
            PartClipDist = 0x1f4000;
            stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2
                               );
            help::Help_Resume();
            mobyfunc::DeleteMoby(moby);
            GameCamera.camUnderWater = 0;
            return;
          }
        }
        else if (CollOutput.pMoby == (MobyInstance *)0x0) {
          uVar24 = 0;
          if (0 < CollOutput.poly) {
            moby->setByGroup = '\x01';
            (moby->pos).x = CollOutput.ip.x;
            (moby->pos).y = CollOutput.ip.y;
            (moby->pos).z = CollOutput.ip.z;
            (moby->pos).w = CollOutput.ip.w;
            fastfunc::FastVecNormalize(uVar13 - 0xf0,uVar13 - 0xe0,0xa10980);
            fVar1 = *(float *)((int)puVar12 + 0xd4);
            fVar45 = *(float *)(puVar12 + 0x1a);
            fVar3 = *(float *)(puVar12 + 0x1b);
            iVar17 = piVar9[0xb];
            dVar29 = (double)SQRT(fVar3 * fVar3 + fVar45 * fVar45 + fVar1 * fVar1);
            fVar2 = (float)((double)(mobyutil::g_FrameTime * 2.0) / dVar29);
            dVar27 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar27 = (double)(fVar45 * fVar2);
            }
            dVar28 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar28 = (double)(fVar1 * fVar2);
            }
            dVar31 = dVar35;
            if (dVar35 - dVar29 < 0.0) {
              dVar31 = (double)(fVar3 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar27 = (double)(fVar45 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar28 = (double)(fVar1 * fVar2);
            }
            if (dVar29 - dVar35 < 0.0) {
              dVar31 = (double)(fVar3 * fVar2);
            }
            *(float *)(puVar12 + 0x1a) = (float)dVar27;
            *(float *)((int)puVar12 + 0xd4) = (float)dVar28;
            *(float *)(puVar12 + 0x1b) = (float)dVar31;
            if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == moby)) &&
               (sound::g_SoundChannels[iVar17].state != '\0')) {
              sound::sound_Kill(iVar17);
            }
            uVar24 = 0;
            piVar9[0xb] = -1;
          }
        }
        else {
          iVar17 = (int)g_heroMobyPtr - (int)CollOutput.pMoby;
          moby->setByGroup = '\x02';
          (moby->pos).x = CollOutput.ip.x;
          (moby->pos).y = CollOutput.ip.y;
          (moby->pos).z = CollOutput.ip.z;
          uVar24 = (uint)((LZCOUNT(iVar17) << 0x3a) >> 0x3f) & 1;
          (moby->pos).w = CollOutput.ip.w;
          fastfunc::FastVecNormalize(uVar13 - 0xf0,uVar13 - 0xe0,0xa10980);
          fVar1 = *(float *)((int)puVar12 + 0xd4);
          fVar45 = *(float *)(puVar12 + 0x1a);
          fVar3 = *(float *)(puVar12 + 0x1b);
          iVar17 = piVar9[0xb];
          dVar29 = (double)SQRT(fVar3 * fVar3 + fVar45 * fVar45 + fVar1 * fVar1);
          fVar2 = (float)((double)(mobyutil::g_FrameTime * 2.0) / dVar29);
          dVar27 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar27 = (double)(fVar45 * fVar2);
          }
          dVar28 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar28 = (double)(fVar1 * fVar2);
          }
          dVar31 = dVar35;
          if (dVar35 - dVar29 < 0.0) {
            dVar31 = (double)(fVar3 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar27 = (double)(fVar45 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar28 = (double)(fVar1 * fVar2);
          }
          if (dVar29 - dVar35 < 0.0) {
            dVar31 = (double)(fVar3 * fVar2);
          }
          *(float *)(puVar12 + 0x1a) = (float)dVar27;
          *(float *)((int)puVar12 + 0xd4) = (float)dVar28;
          *(float *)(puVar12 + 0x1b) = (float)dVar31;
          if (((iVar17 != -1) && (sound::g_SoundChannels[iVar17].pMoby == moby)) &&
             (sound::g_SoundChannels[iVar17].state != '\0')) {
            sound::sound_Kill(iVar17);
          }
          piVar9[0xb] = -1;
        }
        dVar27 = (double)animationSpeed;
        iVar17 = piVar9[4];
        puVar12[0x29] = (longlong)(int)(dVar27 * dVar33);
        puVar12[0x29] = (longlong)(int)(dVar27 * dVar26);
        if ((iVar17 < *(int *)((int)puVar12 + 0x14c) - *(int *)((int)puVar12 + 0x14c)) &&
           ((g_buttonsPressedThisFrame & CIRCLE) != 0)) {
          moby->setByGroup = '\x01';
          iVar17 = piVar9[0xb];
          if ((iVar17 != -1) &&
             ((sound::g_SoundChannels[iVar17].pMoby == moby &&
              (sound::g_SoundChannels[iVar17].state != '\0')))) {
            sound::sound_Kill(iVar17);
          }
          piVar9[0xb] = -1;
        }
        if (moby->setByGroup != '\0') {
          if (uVar24 == 0) {
            uVar34 = 0x4010000000000000;
            puVar12[0x12] = 1;
            puVar12[0x14] = 1;
            puVar12[0x15] = 1;
            puVar12[0x16] = 0xffffffffffffffff;
            puVar12[0x17] = 0;
            mobyutil::MB_genericExplosion
                      (dVar35,dVar35,0x4010000000000000,0x4000000000000000,dVar35,uVar32,
                       0x4034000000000000,lVar14,uVar13 - 0xf0,0,0,0xffffffffffffffff,10,3,0x10);
            uVar34 = collproc::CollMobySphere(uVar34,lVar22);
            fVar4 = (moby->pos).z;
            *(f32 *)(puVar12 + 8) = (moby->pos).x;
            *(f32 *)(puVar12 + 9) = fVar4;
            fVar4 = (moby->pos).w;
            *(f32 *)((int)puVar12 + 0x44) = (moby->pos).y;
            *(f32 *)((int)puVar12 + 0x4c) = fVar4;
            puVar12[0xf] = 3;
            puVar12[0x10] = 2;
            mobyutil::MB_DamageMobyList
                      (uVar30,uVar32,uVar32,lVar14,3,puVar12[8],puVar12[9],&DAT_00a14a00,uVar34,0,
                       &DAT_00830000);
          }
          fVar2 = DAT_0071f408;
          auVar39 = ZEXT416(0xffffffff);
          auVar36 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          moby->modeBits = moby->modeBits | DISABLED;
          auVar39 = ZEXT416(0xffffffff);
          auVar38 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
          iVar17 = 0;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          piVar9[1] = (int)(fVar2 * 0.02);
          auVar41 = loadVectorLeftIndexed(0x10,uVar23);
          auVar42 = loadVectorRightIndexed(0x20,uVar23);
          piVar9[6] = (int)((float)piVar9[6] * 0.01);
          auVar39 = loadVectorLeftIndexed(0xc,0x2af2e8);
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar36 = loadVectorLeftIndexed(0x6c,0x2af2e8);
          auVar44 = loadVectorLeftIndexed(8,0x2af2e8);
          auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar37);
          auVar39 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar38);
          dVar29 = (double)(moby->pos).x;
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          dVar27 = (double)(moby->pos).y;
          auVar39 = ZEXT416(0);
          auVar36 = ZEXT416(0xffffffff);
          dVar26 = (double)(moby->pos).w;
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar37 = vectorSubtractUnsignedWordModulo(auVar37,auVar38);
          auVar38 = vectorSubtractUnsignedWordModulo
                              (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,auVar40
                              );
          auVar39 = vectorCompareGreaterThanSignedWord(auVar41 | auVar42,auVar37);
          auVar39 = vectorConditionalSelect
                              (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar38
                               ,auVar39);
          auVar39 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x10,
                              uVar23);
          *(undefined4 *)((uint)(piVar9 + 4) & 0xfffffffc) = uVar11;
          dVar33 = (double)(moby->pos).z;
          dVar35 = 1.5;
          do {
            (moby->pos).x = (float)dVar29;
            (moby->pos).y = (float)dVar27;
            (moby->pos).z = (float)dVar33;
            (moby->pos).w = (float)dVar26;
            mobyutil::MB_RandomizeVector((float)dVar35,(float *)lVar22);
            mobyupdate_helpers::M172_002aed78(lVar14,1);
            (moby->pos).x = (float)dVar29;
            iVar17 = iVar17 + 1;
            (moby->pos).y = (float)dVar27;
            (moby->pos).z = (float)dVar33;
            (moby->pos).w = (float)dVar26;
          } while (iVar17 < 5);
          *(undefined4 *)(puVar12 + 0x1c) = 0;
          moby->setByGroup = '\0';
        }
        if (piVar9[5] != 0) {
          camera::camera6::____Cam6_SetupFromMoby(piVar9[5],lVar14);
        }
      }
    }
  }
  else {
    if (*(int *)(*piVar9 + 0x78) != 0) {
      *(undefined4 *)(*(int *)(*piVar9 + 0x78) + 4) = 0;
    }
    DAT_0096bcc0 = 0;
    camera::camera6::____Cam6_RotMath(piVar9[5]);
    piVar9[5] = 0;
    hero::TransitionMovement(0,1);
    pvVar10 = moby->pVar;
    draw::ScreenColorEffectEnabled = 0;
    LevelFogNearDist = *(undefined4 *)((int)pvVar10 + 0x30);
    LevelFogFarDist = *(float *)((int)pvVar10 + 0x34);
    LevelFogNearIntensity = *(float *)((int)pvVar10 + 0x38);
    LevelFogFarIntensity = *(float *)((int)pvVar10 + 0x3c);
    levelFog.r = *(u8 *)((int)pvVar10 + 0x40);
    levelFog.g = *(u8 *)((int)pvVar10 + 0x41);
    levelFog.b = *(u8 *)((int)pvVar10 + 0x42);
    debug::g_DebugEnables[2] = 1;
    TfragDrawDist = 512000.0;
    TieDrawDist = 720.0;
    ShrubDrawDist = 500.0;
    DAT_00a390b8 = 500;
    PartClipDist = 0x1f4000;
    stub::STUB_000780f4(ViewContext.occlColor0,ViewContext.occlColor1,ViewContext.occlColor2);
    help::Help_Resume();
    mobyfunc::DeleteMoby(moby);
    GameCamera.camUnderWater = 0;
  }
  return;
}



