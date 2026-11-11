//==== 003621ac  ns=mobyupdate_helpers  size=0x14
// sig: undefined M401_003621ac(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M401_003621ac(void)

{
  DAT_00840a5c = 0x10000;
  return;
}



//==== 003621c8  ns=mobyupdate_helpers  size=0x154
// sig: undefined M388_003621c8(void)
// callers(2): 0035bfb0 mobyupdate_helpers::M388_0035bfb0; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f1114 mobyfunc::GetBonePosition; 000f31a8 mobyfunc::UpdateMobyTransform

longlong mobyupdate_helpers::M388_003621c8(int param_1,undefined8 param_2,MOBY_OCLASSES param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  MobyInstance *pMVar7;
  undefined8 in_LR;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar9 [16];
  undefined4 uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar13 [16];
  undefined4 uVar17;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar18 [16];
  
  pMVar7 = mobyfunc::CreateMoby(param_3);
  if (pMVar7 != (MobyInstance *)0x0) {
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar2 = pMVar7->pClass->gScale;
    fVar3 = *(float *)(*(int *)(param_1 + 0x24) + 0x24);
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->state = '\0';
    pvVar4 = pMVar7->pVar;
    pMVar7->scale = (fVar2 * fVar1) / fVar3;
    *(int *)((int)pvVar4 + 0x44) = (int)param_2;
    mobyfunc::GetBonePosition(param_1,param_2,(longlong)(int)pMVar7 + 0x10);
    *(int *)((int)pvVar4 + 0x3c) = param_1;
    mobyfunc::UpdateMobyTransform(pMVar7);
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    puVar5 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
    uVar11 = puVar5[2];
    uVar10 = puVar5[1];
    uVar8 = *puVar5;
    puVar6 = (undefined4 *)(param_1 + 0xd0U & 0xfffffff0);
    uVar16 = puVar6[3];
    uVar15 = puVar6[2];
    uVar14 = puVar6[1];
    uVar12 = *puVar6;
    puVar6 = (undefined4 *)(param_1 + 0xe0U & 0xfffffff0);
    uVar21 = puVar6[3];
    uVar20 = puVar6[2];
    uVar19 = puVar6[1];
    uVar17 = *puVar6;
    puVar6 = (undefined4 *)((uint)&pMVar7->transform & 0xfffffff0);
    puVar6[3] = puVar5[3];
    puVar6[2] = uVar11;
    puVar6[1] = uVar10;
    *puVar6 = uVar8;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v1 & 0xfffffff0);
    puVar5[3] = uVar16;
    puVar5[2] = uVar15;
    puVar5[1] = uVar14;
    *puVar5 = uVar12;
    auVar9 = ZEXT416(0xffffffff);
    auVar13 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    puVar5 = (undefined4 *)((uint)&(pMVar7->transform).v2 & 0xfffffff0);
    puVar5[3] = uVar21;
    puVar5[2] = uVar20;
    puVar5[1] = uVar19;
    *puVar5 = uVar17;
    auVar9 = loadVectorLeftIndexed(in_LR,0x3621c0);
    auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar18,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar13);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x40,ZEXT48(pvVar4)
                      );
    *(undefined4 *)((int)pvVar4 + 0x40U & 0xfffffffc) = uVar8;
    mobyfunc::UpdateMobyTransform(pMVar7);
  }
  return (longlong)(int)pMVar7;
}



//==== 00362338  ns=mobyupdate_unsorted  size=0x430
// sig: undefined UpdateMoby_a_lot_11(MobyInstance * moby)
// callers(0): 
// callees(6): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 0010e030 mobyutil::MB_genericExplosion; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot

/* Moby 389
   Moby 390
   Moby 391
   Moby 392
   Moby 393
   Moby 394
   Moby 395
   Moby 396
   Moby 399
   Moby 400
   Moby 401 */

void mobyupdate_unsorted::UpdateMoby_a_lot_11(MobyInstance *moby)

{
  u8 uVar1;
  MOBY_OCLASSES MVar2;
  void *pvVar3;
  f32 fVar4;
  uint uVar5;
  MobyModeBit MVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  double dVar10;
  
  lVar7 = (longlong)(int)moby;
  pvVar3 = moby->pVar;
  iVar9 = *(int *)((int)pvVar3 + 0x3c);
  if ((((iVar9 == 0) || (*(short *)(iVar9 + 0xa6) != 0x184)) || (*(char *)(iVar9 + 0x20) == -2)) ||
     (*(char *)(iVar9 + 0x20) == -3)) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar9 = *(int *)((int)pvVar3 + 0x3c);
  MVar6 = moby->modeBits &
          (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
           DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT
          |NO_POST_UPDATE);
  uVar1 = moby->state;
  moby->modeBits = MVar6;
  moby->modeBits = MVar6 | *(MobyModeBit *)(iVar9 + 0x34) & (NO_UPDATE|DISABLED);
  if (uVar1 == '\x04') {
    mobyutil::MB_genericExplosion
              (0x4000000000000000,0x4010000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar7,(int)pvVar3 + 0x10,0,1
               ,0xffffffffffffffff,10,3,0x10);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  if (uVar1 != '\x03') {
    if (uVar1 == '\x02') {
      return;
    }
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') {
        return;
      }
      moby->state = '\x01';
      *(undefined1 *)((int)pvVar3 + 0x20) = 0;
      *(undefined1 *)((int)pvVar3 + 0x21) = 0;
      *(undefined1 *)((int)pvVar3 + 0x22) = 0;
      *(undefined1 *)((int)pvVar3 + 0x23) = 0;
      *(undefined1 *)((int)pvVar3 + 0x24) = 0;
      *(undefined1 *)((int)pvVar3 + 0x25) = 0;
      *(undefined1 *)((int)pvVar3 + 0x26) = 0;
      *(undefined1 *)((int)pvVar3 + 0x27) = 0;
      *(undefined1 *)((int)pvVar3 + 0x28) = 0;
      *(undefined1 *)((int)pvVar3 + 0x29) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2a) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2b) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2c) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2d) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2e) = 0;
      *(undefined1 *)((int)pvVar3 + 0x2f) = 0;
      return;
    }
    iVar9 = *(int *)((int)pvVar3 + 0x3c);
    moby->scale = (moby->pClass->gScale * *(float *)(iVar9 + 0x2c)) /
                  *(float *)(*(int *)(iVar9 + 0x24) + 0x24);
    uVar8 = *(undefined8 *)(iVar9 + 0x38);
    moby->color = (int)((ulonglong)uVar8 >> 0x20);
    moby->light = (int)uVar8;
    return;
  }
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar3 + 0x10);
  (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar3 + 0x14);
  (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar3 + 0x18);
  *(float *)((int)pvVar3 + 0x10) = *(float *)((int)pvVar3 + 0x10) * 0.995;
  *(float *)((int)pvVar3 + 0x14) = *(float *)((int)pvVar3 + 0x14) * 0.995;
  *(float *)((int)pvVar3 + 0x18) = *(float *)((int)pvVar3 + 0x18) * 0.995;
  iVar9 = collproc::CollSphere(0x4000000000000000,lVar7 + 0x10,&DAT_0036231c,0,lVar7);
  if ((iVar9 != 0) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((((MVar2 = (CollOutput.pMoby)->oClass,
          MVar2 != QWARKS_STARFIGHTER_PART_0184 && MVar2 != 0x191 &&
          (MVar2 != QWARKS_STARFIGHTER_PART_0185)) &&
         ((MVar2 != QWARKS_STARFIGHTER_PART_0186 &&
          ((MVar2 != QWARKS_STARFIGHTER_PART_0187 && (MVar2 != QWARKS_STARFIGHTER_PART_0188)))))) &&
        (MVar2 != QWARKS_STARFIGHTER_PART_0189)) &&
       ((((MVar2 != QWARKS_STARFIGHTER_PART_018A && (MVar2 != QWARKS_STARFIGHTER_PART_018B)) &&
         (MVar2 != QWARKS_STARFIGHTER_PART_018C)) &&
        ((MVar2 != QWARKS_STARFIGHTER_PART_018F && (MVar2 != QWARKS_STARFIGHTER_PART_0190))))))))))
  {
    fastfunc::FastVecNormalize((int)pvVar3 + 0x10,(int)pvVar3 + 0x10,0xa10980);
    moby->state = '\x04';
  }
  dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar3 + 0x30));
  (moby->rotation).x = (float)dVar10;
  dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).y,*(float *)((int)pvVar3 + 0x34));
  (moby->rotation).y = (float)dVar10;
  dVar10 = (double)fastfunc::FastWrapRot((moby->rotation).z,*(float *)((int)pvVar3 + 0x38));
  (moby->rotation).z = (float)dVar10;
  *(float *)((int)pvVar3 + 0x30) = *(float *)((int)pvVar3 + 0x30) * 0.999;
  *(float *)((int)pvVar3 + 0x34) = *(float *)((int)pvVar3 + 0x34) * 0.999;
  *(float *)((int)pvVar3 + 0x38) = *(float *)((int)pvVar3 + 0x38) * 0.999;
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5;
  if (((iVar9 < 0x41200000) || (0x447d4000 < iVar9)) ||
     ((fVar4 = (moby->pos).y, uVar5 = (int)fVar4 >> 0x1f, iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5
      , 0x447d4000 < iVar9 || iVar9 < 0x41200000 ||
      ((fVar4 = (moby->pos).z, uVar5 = (int)fVar4 >> 0x1f,
       iVar9 = (uVar5 >> 1 ^ (uint)fVar4) - uVar5, iVar9 < 0x41200000 || (0x447d4000 < iVar9)))))) {
    mobyfunc::DeleteMoby(moby);
    return;
  }
  iVar9 = fastfunc::FastDecTimerS32((int)pvVar3 + 0x40);
  if (iVar9 == 0) {
    return;
  }
  if (moby->enabled != '\0') {
    return;
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 00362770  ns=mobyupdate_helpers  size=0x34
// sig: undefined M401_00362770(void)
// callers(0): 
// callees(1): 000768e8 draw::???_Draw_EffectStrip_M401

void mobyupdate_helpers::M401_00362770(void)

{
  draw::____Draw_EffectStrip_M401(0x408f400000000000,&DAT_00362768,0x2b);
  return;
}



//==== 003627a4  ns=mobyupdate_unsorted  size=0x68
// sig: undefined UpdateMoby_4(MobyInstance * moby)
// callers(0): 
// callees(1): 0006d7e0 draw::RegisterPostDraw

/* Moby 4 */

void mobyupdate_unsorted::UpdateMoby_4(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    draw::RegisterPostDraw(&PTR_M401_00362770_0070c7c0,moby);
  }
  return;
}



//==== 00362810  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_40(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 40 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_40(MobyInstance *moby)

{
  return moby;
}



//==== 00362820  ns=Global  size=0x110
// sig: undefined FUN_00362820(void)
// callers(1): 003573f0 mobyupdate_unsorted::UpdateMoby_376
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 0010c000 mobyutil::MB_CopyHeroLights

MobyInstance * FUN_00362820(int param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = mobyfunc::CreateMoby(0x192);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    puVar2 = (undefined4 *)pMVar3->pVar;
    pMVar3->scale = pMVar3->pClass->gScale * 0.1;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    uVar1 = param_3[3];
    puVar2[4] = param_1;
    puVar2[3] = uVar1;
    *(int *)(*(int *)(param_1 + 0x78) + 0xc) = *(int *)(*(int *)(param_1 + 0x78) + 0xc) + 1;
    mobyfunc::UpdateMobyTransform(pMVar3);
    mobyutil::MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}



//==== 00362968  ns=mobyupdate_unsorted  size=0x464
// sig: undefined UpdateMoby_402(MobyInstance * moby)
// callers(0): 
// callees(9): 00059e20 collproc::CollSphere; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 0010581c mobyutil::SetCollDamIn; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 0015d12c sound::PlayMobySound; 00342d38 FUN_00342d38; 005cd098 libc::printf
// strings: 00656690: '402:Moby wandered out of world\n'

/* Moby 402 */

void mobyupdate_unsorted::UpdateMoby_402(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 in_r6;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined1 auStack_70 [48];
  
  lVar7 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pfVar4 = (float *)moby->pVar;
    iVar11 = 0;
    fVar5 = pfVar4[4];
    if (((fVar5 != 0.0) && (*(short *)((int)fVar5 + 0xa6) == 0x178)) &&
       (*(char *)((int)fVar5 + 0x20) != -3 && *(char *)((int)fVar5 + 0x20) != -2)) {
      iVar11 = *(int *)((int)fVar5 + 0x78);
    }
    moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
    if (pfVar4 != (float *)0x0) {
      pfVar4[5] = (float)((int)pfVar4[5] + 1);
      dVar16 = 1.0;
      mobyutil::SetCollDamIn(0x3ff0000000000000,auStack_70,lVar7,0x30000,in_r6,pfVar4);
      uVar15 = 0x3fe8000000000000;
      lVar10 = lVar7 + 0x10;
      collproc::CollMobySphere(0x3fe8000000000000,lVar10);
      uVar8 = collproc::CollSphere(uVar15,lVar10);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x10) < (int)pfVar4[5])) {
        if (*(int *)(iVar11 + 0xc) < 0x1f) {
          *(float *)(iVar11 + 0x10) = pfVar4[5];
        }
        else {
          uVar8 = uVar8 | 4;
          *(undefined4 *)(iVar11 + 0x10) = 0;
        }
      }
      iVar9 = mobyutil::MB_damage(lVar7,0xffffffffffffffff,0);
      dVar12 = (double)(moby->pos).z;
      if (iVar9 != 0) {
        uVar8 = uVar8 | 2;
        CollOutput.pMoby = (MobyInstance *)0x0;
      }
      if ((CollOutput.pMoby != (MobyInstance *)0x0) &&
         (((MVar3 = (CollOutput.pMoby)->oClass,
           MVar3 == (ROCKET_0100|BEIGE_SHIP) || MVar3 == (ROCKET_0100|YELLOW_SHIP) ||
           (MVar3 == 0x17a)) || (MVar3 == 0x179)))) {
        uVar8 = uVar8 & 0xfffffffe;
      }
      if (uVar8 == 0) {
        dVar13 = dVar12;
        if (DAT_0083be04 != 0) {
          dVar13 = (double)FUN_00342d38(lVar10);
          dVar12 = (double)(moby->pos).z;
        }
        dVar14 = (double)pfVar4[2];
        if ((double)(float)(dVar12 + dVar14) < dVar13) {
          fVar5 = (float)((double)(float)(dVar13 - (double)(float)(dVar12 + dVar14)) *
                          0.20000000298023224 + dVar14);
          dVar14 = (double)fVar5;
          pfVar4[2] = fVar5;
          *pfVar4 = *pfVar4 * 0.9;
          pfVar4[1] = pfVar4[1] * 0.9;
          if (moby->state == '\0') {
            sound::PlayMobySound(0,0,moby);
            moby->state = moby->state + '\x01';
            dVar14 = (double)pfVar4[2];
          }
        }
        dVar16 = (double)(float)((double)DAT_0071f408 * -0.004999995231628418 + dVar16);
        fVar1 = (float)((double)*pfVar4 * dVar16);
        fVar2 = (float)((double)pfVar4[1] * dVar16);
        *pfVar4 = fVar1;
        pfVar4[1] = fVar2;
        fVar5 = (float)(dVar14 * dVar16 - (double)(DAT_0071f418 * 9.8));
        pfVar4[2] = fVar5;
        fVar6 = SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
        if (0.6 < fVar6) {
          fVar6 = 0.6 / fVar6;
          fVar1 = fVar1 * fVar6;
          *pfVar4 = fVar1;
          pfVar4[1] = fVar2 * fVar6;
          pfVar4[2] = fVar5 * fVar6;
        }
        fVar1 = (moby->pos).x + fVar1;
        (moby->pos).x = fVar1;
        fVar5 = (moby->pos).y + pfVar4[1];
        (moby->pos).y = fVar5;
        fVar2 = (moby->pos).z + pfVar4[2];
        (moby->pos).z = fVar2;
        if ((((2.0 <= fVar1 && 2.0 <= fVar2) && (2.0 <= fVar5)) &&
            (fVar1 <= 510.0 && fVar2 <= 510.0)) && (fVar5 <= 510.0)) {
          return;
        }
        (moby->pos).x = 3.0;
        (moby->pos).y = 3.0;
        (moby->pos).z = 3.0;
        libc::printf("402:Moby wandered out of world\n");
        mobyfunc::DeleteMoby(moby);
      }
      else {
        if (moby->enabled != '\0') {
          mobyutil::MB_genericExplosion
                    (0x4000000000000000,dVar16,0x4010000000000000,0x4000000000000000,
                     0x4022000000000000,dVar16,0x402e000000000000,lVar7,pfVar4,0,1,
                     0xffffffffffffffff,0x14,5,0x10);
        }
        if (iVar11 != 0) {
          *(int *)(*(int *)((int)pfVar4[4] + 0x78) + 0xc) =
               *(int *)(*(int *)((int)pfVar4[4] + 0x78) + 0xc) + -1;
        }
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 00362e40  ns=mobyupdate_helpers  size=0x60c
// sig: undefined M403_00362e40(void)
// callers(1): 00363468 mobyupdate_unsorted::UpdateMoby_403
// callees(9): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe788 mobyutil::MB_randVector; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 00133580 partupd::SpawnPart_69; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M403_00362e40(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_d0 [16];
  Vec4 local_c0 [3];
  
  uVar11 = 0;
  mobyutil::MB_randVector(0.004999999888241291,0.029999999329447746,local_c0);
  iVar4 = partupd::SpawnPart_69(local_d0,local_c0,0x7f,param_1);
  if (iVar4 != 0) {
    dVar7 = (double)mobyutil::MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar4 + 0xc) = (float)dVar7;
  }
  dVar7 = 80000.0;
  iVar4 = 0;
  dVar9 = 120000.0;
  dVar10 = 2.5;
  auVar15 = loadVectorLeftIndexed(0x20,0x362dd0);
  dVar12 = 1.0;
  auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
  do {
    uVar3 = partupd::SpawnPart_69(local_d0,&DAT_00a15d30,0x7f,param_1);
    iVar6 = (int)uVar3;
    if (iVar6 != 0) {
      if ((iVar4 == 2) && (iVar5 = mobyutil::MB_randInt(8), iVar5 == 0)) {
        dVar8 = 180000.0;
      }
      else {
        dVar8 = (double)mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
      }
      auVar13 = ZEXT416(0xffffffff);
      auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      *(float *)(iVar6 + 0xc) = (float)dVar8;
      auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar8 = (double)animationSpeed;
      auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar15,auVar13);
      auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
      auVar13 = vectorSplatHalfWord(auVar13,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar13,10,uVar3);
      *(undefined2 *)(iVar6 + 10) = uVar2;
      dVar8 = (double)fastfunc::FastIntToDouble((short)(int)(dVar8 * dVar10));
      *(undefined2 *)(iVar6 + 0x36) = 4;
      *(undefined **)(iVar6 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar6 + 0x30) = (float)(dVar12 / dVar8);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar3 = 0x3fb99999a0000000;
    mobyutil::MB_randRangeSigned(uVar11,0x3fb99999a0000000);
    mobyutil::MB_randRangeSigned(uVar11,uVar3);
  }
  dVar7 = 60000.0;
  mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  partupd::SpawnPart_21(dVar7,local_d0,local_c0,0x4f007fff,0x1fffffff);
  mobyutil::MB_randInt(6);
  mobyutil::MB_randInt(2);
  uVar11 = mobyutil::MB_randRangeFloat((float)dVar7,140000.0);
  mobyutil::MB_randRange(0x30,0xff);
  uVar11 = partupd::SpawnPart_23(0x3f999999a0000000,dVar12,dVar12,uVar11,local_d0);
  iVar4 = (int)uVar11;
  if (iVar4 != 0) {
    auVar15 = ZEXT416(0xffffffff);
    auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
    *(undefined1 *)(iVar4 + 3) = 0x44;
    auVar13 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar15 = loadVectorLeftIndexed(0x6c,0x362dd0);
    auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar15 = vectorMultiplyAddFloatingPoint
                        (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                         auVar13);
    auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
    auVar13 = vectorSplatHalfWord(auVar15,1);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xff;
    uVar2 = storeVectorElementHalfWordIndexed(auVar13,10,uVar11);
    *(undefined2 *)(iVar4 + 10) = uVar2;
    *(undefined4 *)(iVar4 + 0x24) = 2;
    *(undefined1 *)(iVar4 + 0x2a) = 0x60;
    uVar1 = storeVectorElementByteIndexed
                      (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 | auVar15 << 0x20
                       | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 | auVar15 << 0x40 |
                       auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 | auVar15 << 0x60 |
                       auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0x2b,uVar11);
    *(undefined1 *)(iVar4 + 0x2b) = uVar1;
  }
  return;
}



//==== 00363468  ns=mobyupdate_unsorted  size=0x60c
// sig: undefined UpdateMoby_403(MobyInstance * moby)
// callers(0): 
// callees(9): 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 0010ce18 mobyutil::MB_PathMoveDist; 0010e030 mobyutil::MB_genericExplosion; 0015d204 sound::sound_MobyPlay_oClass; 00362e40 mobyupdate_helpers::M403_00362e40; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 403 */

void mobyupdate_unsorted::UpdateMoby_403(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  f32 fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 in_r7;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  lVar7 = (longlong)(int)moby;
  piVar4 = (int *)moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->pos).x;
    fVar2 = (moby->pos).y;
    mobyutil::MB_PathMoveDist
              ((double)(float)piVar4[2],*(undefined4 *)(DAT_00a1a85c + piVar4[3] * 0x20 + 0x10),
               lVar7 + 0x10,piVar4 + 4,piVar4 + 5,in_r7,0);
    fVar3 = (moby->pos).y;
    piVar4[6] = (int)((moby->pos).x - fVar1);
    piVar4[7] = (int)(fVar3 - fVar2);
    mobyupdate_helpers::M403_00362e40(lVar7);
    iVar8 = fastfunc::FastDecTimerS32(piVar4 + 1);
    if (iVar8 != 0) {
      uVar12 = 0x3fe0000000000000;
      uVar11 = 0;
      sound::sound_MobyPlay_oClass(1,0,moby,(int)*(short *)(*piVar4 + 0xa6));
      uVar10 = 0x3ff0000000000000;
      mobyutil::MB_genericExplosion
                (uVar11,uVar11,0x3ff0000000000000,uVar12,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar7,local_60,local_70,0,3,5,2,4);
      collproc::CollSphere(uVar10,lVar7 + 0x10,&hero::g_heroMtx,0,g_heroMobyPtr);
      mobyfunc::DeleteMoby(moby);
    }
  }
  else {
    (moby->pos).x = (moby->pos).x + (float)piVar4[0xc];
    (moby->pos).y = (moby->pos).y + (float)piVar4[0xd];
    (moby->pos).z = (moby->pos).z + (float)piVar4[0xe];
    fVar3 = DAT_0071f408;
    fVar2 = DAT_0071f408 * DAT_00840a98;
    fVar1 = (float)piVar4[0xe];
    if (fVar2 < ABS((float)piVar4[0xc])) {
      piVar4[0xc] = (int)((float)piVar4[0xc] * ((DAT_00840a94 - 1.0) * DAT_0071f408 + 1.0));
    }
    if (fVar2 < ABS((float)piVar4[0xd])) {
      piVar4[0xd] = (int)((float)piVar4[0xd] * ((DAT_00840a94 - 1.0) * fVar3 + 1.0));
    }
    uVar10 = 0;
    if (0 < piVar4[0xe]) {
      fVar1 = fVar1 * ((DAT_00840a94 - 1.0) * fVar3 + 1.0);
    }
    piVar4[0xe] = (int)-(DAT_0071f40c * DAT_00840a90 - fVar1);
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).x,(float)piVar4[8]);
    (moby->rotation).x = (float)dVar9;
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).y,(float)piVar4[9]);
    (moby->rotation).y = (float)dVar9;
    dVar9 = (double)fastfunc::FastWrapRot((moby->rotation).z,(float)piVar4[10]);
    fVar5 = (moby->pos).x;
    (moby->rotation).z = (float)dVar9;
    uVar6 = (int)fVar5 >> 0x1f;
    iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6;
    if ((((iVar8 < 0x40000000) || (0x447f4000 < iVar8)) ||
        (fVar5 = (moby->pos).y, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, 0x447f4000 < iVar8 || iVar8 < 0x40000000)) ||
       ((fVar5 = (moby->pos).z, uVar6 = (int)fVar5 >> 0x1f,
        iVar8 = (uVar6 >> 1 ^ (uint)fVar5) - uVar6, iVar8 < 0x40000000 || (0x447f4000 < iVar8)))) {
      mobyfunc::DeleteMoby(moby);
    }
    else {
      iVar8 = fastfunc::FastDecTimerS32(piVar4 + 1);
      if ((iVar8 == 0) &&
         (iVar8 = collproc::CollSphere(0x3fe0000000000000,local_50,&DAT_0036344c,0,*piVar4),
         iVar8 == 0)) {
        iVar8 = mobyutil::MB_randInt(2);
        if (iVar8 != 0) {
          mobyupdate_helpers::M403_00362e40(lVar7);
        }
      }
      else {
        sound::sound_MobyPlay_oClass(0,0,moby,(int)*(short *)(*piVar4 + 0xa6));
        uVar11 = 0x3ff0000000000000;
        mobyutil::MB_genericExplosion
                  (uVar10,uVar10,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar7,piVar4 + 0xc,lVar7 + 0x10,3,
                   0xffffffffffffffff,5,2,4);
        collproc::CollSphere(uVar11,lVar7 + 0x10,&hero::g_heroMtx,0,g_heroMobyPtr);
        mobyfunc::DeleteMoby(moby);
      }
    }
  }
  return;
}



//==== 00363aa0  ns=Global  size=0x328
// sig: undefined FUN_00363aa0(void)
// callers(2): 002ef340 mobyupdate_unsorted::UpdateMoby_211; 00327f50 mobyupdate_unsorted::UpdateMoby_28
// callees(6): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe4f0 mobyutil::MB_randRangeSigned; 0010d7a0 mobyutil::MB_PathFollowToPos; 001113e0 mobyutil::MB_RotateQuatAxisAngle

longlong FUN_00363aa0(int param_1,float *param_2,u8 param_3)

{
  float fVar1;
  f32 fVar2;
  f32 fVar3;
  int *piVar4;
  undefined4 uVar5;
  MobyInstance *pMVar6;
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
  undefined1 auStack_50 [16];
  float local_40;
  float local_3c;
  float local_38;
  f32 local_34;
  
  pMVar6 = mobyfunc::CreateMoby(0x193);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->state = param_3;
    piVar4 = (int *)pMVar6->pVar;
    uVar8 = ZEXT48(piVar4);
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar6->pos).x = *(f32 *)(param_1 + 0x10);
    fVar3 = *(f32 *)(param_1 + 0x18);
    (pMVar6->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar6->pos).z = fVar3;
    fVar3 = *(f32 *)(param_1 + 0x48);
    (pMVar6->pos).w = fVar2;
    (pMVar6->rotation).z = fVar3;
    pMVar6->updateDistance = -1;
    pMVar6->drawDistance = 0xff;
    pMVar6->enabled = '\x01';
    *piVar4 = param_1;
    dVar13 = 0.0;
    if (pMVar6->state == '\0') {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(4,0x363a74);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,4,uVar8);
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar5;
      piVar4[2] = (int)(*param_2 * mobyutil::g_FrameTime);
      iVar7 = *(int *)(*(int *)(param_1 + 0x78) + 0x60);
      piVar4[4] = 0;
      piVar4[3] = iVar7;
      piVar4[5] = 0;
      iVar7 = DAT_00a1a85c + iVar7 * 0x20;
      mobyutil::MB_PathFollowToPos
                (0x4034000000000000,0x4014000000000000,0,*(undefined4 *)(iVar7 + 0x10),
                 (longlong)(int)pMVar6 + 0x10,auStack_50,uVar8 + 0x10,uVar8 + 0x14,iVar7,0);
    }
    else {
      auVar14 = ZEXT416(0xffffffff);
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar15 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar14 = loadVectorLeftIndexed(0x10,0x363a74);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar14 = vectorMultiplyAddFloatingPoint
                          (auVar16,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                           auVar15);
      auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar14,0);
      auVar14 = auVar14 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,4,uVar8);
      *(undefined4 *)((uint)(piVar4 + 1) & 0xfffffffc) = uVar5;
      local_40 = (pMVar6->pos).x - g_heroPosition.x;
      local_3c = (pMVar6->pos).y - g_heroPosition.y;
      local_34 = (pMVar6->pos).w;
      local_38 = 0.0;
      dVar9 = (double)mobyutil::MB_randRangeFloat
                                (DAT_0071f408 * DAT_00840a80,DAT_0071f408 * DAT_00840a84);
      dVar12 = (double)SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
      fVar1 = (float)(dVar9 / dVar12);
      dVar9 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar9 = (double)(local_40 * fVar1);
      }
      dVar11 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar11 = (double)(local_3c * fVar1);
      }
      dVar10 = dVar13;
      if (dVar13 - dVar12 < 0.0) {
        dVar10 = (double)(local_38 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar9 = (double)(local_40 * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar11 = (double)(local_3c * fVar1);
      }
      if (dVar12 - dVar13 < 0.0) {
        dVar10 = (double)(local_38 * fVar1);
      }
      local_40 = (float)dVar9;
      local_3c = (float)dVar11;
      local_38 = (float)dVar10;
      dVar9 = (double)mobyutil::MB_randRangeSigned(0x3fe26e40e0000000,0x3ff6571840000000);
      mobyutil::MB_RotateQuatAxisAngle((float)dVar9,(float *)(piVar4 + 0xc),&local_40);
      dVar9 = (double)mobyutil::MB_randRangeFloat
                                (DAT_0071f408 * DAT_00840a88,DAT_0071f408 * DAT_00840a8c);
      piVar4[0xe] = (int)(float)dVar9;
      dVar9 = (double)mobyutil::MB_randRangeSigned(dVar13,0x3f81df46a0000000);
      piVar4[8] = (int)(float)dVar9;
      dVar9 = (double)mobyutil::MB_randRangeSigned(0x3faaceea00000000,0x3fc1df46a0000000);
      piVar4[9] = (int)(float)dVar9;
      dVar13 = (double)mobyutil::MB_randRangeSigned(dVar13,0x3f91df46a0000000);
      piVar4[10] = (int)(float)dVar13;
    }
    mobyfunc::UpdateMobyTransform(pMVar6);
  }
  return (longlong)(int)pMVar6;
}



//==== 00363dc8  ns=mobyupdate_helpers  size=0x14
// sig: undefined M405_00363dc8(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M405_00363dc8(void)

{
  DAT_00840ae8 = 0x10000;
  return;
}



//==== 00363df8  ns=mobyupdate_helpers  size=0x600
// sig: undefined M405_00363df8(void)
// callers(1): 00364408 mobyupdate_unsorted::UpdateMoby_{404_405}
// callees(5): 0005e598 collproc::CollMobySphere; 00105d2c mobyutil::CollDamageMobyDirect_wrap; 00500b64 fastfunc::FastEulerToMtx; 005010c0 fastfunc::FastNormalizeRMtx4; 005c5ad0 libc::memcpy

ulonglong mobyupdate_helpers::M405_00363df8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte in_cr6;
  undefined8 uVar20;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  undefined1 auVar43 [16];
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1f0;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  lVar8 = uVar10 - 0x80;
  puVar9 = (undefined4 *)lVar8;
  puVar9[3] = in_vr31_32_3;
  puVar9[2] = in_vr31_32_2;
  puVar9[1] = in_vr31_32_1;
  *puVar9 = in_vr31_32_0;
  fastfunc::FastEulerToMtx(uVar10 - 0x150,param_1 + 0x40);
  sVar3 = *(short *)((int)param_2 + 8);
  sVar4 = *(short *)((int)param_2 + 10);
  auVar21 = ZEXT416(0xfffffff0);
  auVar23 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = loadVectorLeftIndexed(8,param_2);
  auVar24 = loadVectorLeftIndexed(10,param_2);
  auVar25 = vectorShiftRightAlgebraicWord(auVar21,auVar23);
  auVar26 = vectorShiftRightAlgebraicWord(auVar24,auVar23);
  auVar22 = vectorShiftRightWord(auVar21,auVar23);
  auVar24 = vectorShiftRightWord(auVar24,auVar23);
  auVar25 = vectorCompareGreaterThanSignedWord(auVar25,auVar26);
  auVar21 = ZEXT416(0xffffffff);
  auVar26 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar22 = vectorConditionalSelect(auVar24,auVar22,auVar25);
  auVar21 = ZEXT416(0xffffffff);
  auVar32 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar21 = vectorShiftLeftIntegerWord(auVar22,auVar23);
  auVar26 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar21 = vectorShiftRightAlgebraicWord(auVar21,auVar23);
  auVar23 = loadVectorLeftIndexed(0xc0,lVar1);
  puVar7[0x22] = (longlong)
                 (int)(short)(sVar4 + ((ushort)((longlong)sVar4 - (longlong)sVar3 >> 0x3f) &
                                      sVar3 - sVar4));
  auVar22 = vectorConvertFromSignedFixedPointWord(auVar21,0);
  auVar24 = loadVectorLeftIndexed(0xc4,lVar1);
  auVar21 = loadVectorLeftIndexed(lVar8,0x363de0);
  auVar25 = loadVectorLeftIndexed(0xcc,lVar1);
  auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar42 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  auVar27 = loadVectorLeftIndexed(200,lVar1);
  auVar28 = loadVectorLeftIndexed(0x10,param_1);
  auVar29 = loadVectorLeftIndexed(0x14,param_1);
  auVar30 = loadVectorLeftIndexed(0x18,param_1);
  auVar21 = vectorMultiplyAddFloatingPoint(auVar22,auVar42,auVar26);
  auVar22 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)(puVar7 + 0x11) = 0;
  *(undefined4 *)((int)puVar7 + 0x84) = 0;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  auVar25 = vectorMultiplyAddFloatingPoint(auVar25,auVar21,auVar22);
  auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar28);
  auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar21,auVar29);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar30);
  auVar21 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar7 + 0x8c) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar7 + 0x10) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar7 + 0x84) = uVar6;
  uVar6 = storeVectorElementWordIndexed
                    (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar7 + 0x11) = uVar6;
  uVar11 = collproc::CollMobySphere
                     ((double)((float)(longlong)puVar7[0x22] * 0.5),uVar10 - 0x170,0x8c,0x10,param_1
                      ,0);
  iVar19 = (int)uVar11;
  if (iVar19 != 0) {
    lVar8 = -((longlong)(int)(uVar11 << 2) + 0x7fU & 0xfffffffffffffff0);
    uVar12 = lVar1 + lVar8;
    uVar15 = uVar12 & 0xffffffff;
    *(ulonglong *)((int)puVar7 + (int)lVar8) = *puVar7;
    pvVar13 = libc::memcpy((void *)((int)uVar12 + 0x70),&DAT_00a14a00,
                           (size_t)((uVar11 & 0xffffffff) << 2));
    uVar11 = (ulonglong)(int)pvVar13;
    iVar18 = 0;
    if (0 < iVar19) {
      do {
        uVar5 = *(uint *)((int)uVar15 + 0x70);
        uVar12 = (ulonglong)uVar5;
        if (uVar5 != 0) {
          bVar2 = *(byte *)(uVar5 + 0x20);
          uVar11 = (ulonglong)bVar2;
          if (bVar2 != 0xfd && bVar2 != 0xfe) {
            auVar21 = loadVectorLeftIndexed(0x14,uVar12);
            auVar22 = loadVectorLeftIndexed(0x14,param_1);
            auVar23 = loadVectorLeftIndexed(0x10,uVar12);
            auVar24 = loadVectorLeftIndexed(0x10,param_1);
            auVar27 = vectorSubtractFloatingPoint(auVar21,auVar22);
            auVar21 = loadVectorLeftIndexed(0x18,uVar12);
            auVar22 = loadVectorLeftIndexed(0x18,param_1);
            auVar39 = vectorSubtractFloatingPoint(auVar23,auVar24);
            auVar38 = vectorSubtractFloatingPoint(auVar21,auVar22);
            auVar43 = loadVectorLeftIndexed(0x1c,uVar12);
            fastfunc::FastNormalizeRMtx4(uVar10 - 0x120,uVar10 - 0x150);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar22 = loadVectorLeftIndexed(0xe0,lVar1);
            auVar24 = loadVectorLeftIndexed(0xd0,lVar1);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar27,auVar21);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar25 = loadVectorLeftIndexed(0xf0,lVar1);
            auVar29 = loadVectorLeftIndexed(0x100,lVar1);
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar26 = loadVectorLeftIndexed(8,param_2);
            auVar23 = loadVectorLeftIndexed(0xe8,lVar1);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar27,auVar21);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar24,auVar39,auVar22);
            auVar21 = ZEXT416(0xfffffff0);
            auVar30 = vectorShiftRightAlgebraicWord
                                (auVar26,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 |
                                         auVar21 << 0x60);
            auVar24 = loadVectorLeftIndexed(0xd8,lVar1);
            auVar21 = loadVectorLeftIndexed(4,0x363de0);
            auVar32 = vectorConvertFromSignedFixedPointWord(auVar30,0);
            auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar31 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar39,auVar23);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar38,auVar22);
            auVar21 = ZEXT416(0xffffffff);
            auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar25 = loadVectorLeftIndexed(0xec,lVar1);
            auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
            auVar24 = loadVectorLeftIndexed(0xf8,lVar1);
            auVar34 = loadVectorLeftIndexed(0xdc,lVar1);
            auVar26 = loadVectorLeftIndexed(8,0x363de0);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar27,auVar21);
            auVar21 = auVar26 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar33 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar28 = vectorMultiplyAddFloatingPoint(auVar24,auVar38,auVar23);
            auVar26 = loadVectorLeftIndexed(0x108,lVar1);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar29,auVar43,auVar22);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar31);
            auVar35 = loadVectorLeftIndexed(0xfc,lVar1);
            auVar24 = loadVectorLeftIndexed(0x10c,lVar1);
            auVar29 = loadVectorLeftIndexed(10,param_2);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar27);
            auVar39 = loadVectorLeftIndexed(0xa0,lVar1);
            auVar36 = loadVectorLeftIndexed(0xc0,lVar1);
            auVar21 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
            auVar22 = vectorMultiplyAddFloatingPoint(auVar26,auVar43,auVar28);
            auVar28 = loadVectorLeftIndexed(0xa4,lVar1);
            auVar37 = loadVectorLeftIndexed(0xc4,lVar1);
            auVar40 = loadVectorLeftIndexed(0xa8,lVar1);
            auVar21 = (auVar25 ^ auVar33) >> 0x60 & (undefined1  [16])0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar34,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60);
            auVar26 = vectorMultiplyAddFloatingPoint(auVar35,auVar38,auVar27);
            auVar38 = loadVectorLeftIndexed(200,lVar1);
            auVar21 = loadVectorLeftIndexed(0xac,lVar1);
            auVar25 = loadVectorLeftIndexed(0xcc,lVar1);
            auVar27 = loadVectorLeftIndexed(0x10,param_1);
            auVar41 = loadVectorLeftIndexed(0x14,param_1);
            auVar35 = loadVectorLeftIndexed(0x18,param_1);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar23 = ZEXT416(0);
              auVar32 = ZEXT416(0xffffffff);
              auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
              auVar23 = vectorSubtractUnsignedWordModulo
                                  (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                                   auVar30);
              auVar30 = vectorShiftLeftIntegerWord(auVar32,auVar32);
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar42,auVar30);
            }
            else {
              auVar30 = ZEXT416(0xffffffff);
              auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
              auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar32 = vectorMultiplyAddFloatingPoint(auVar32,auVar42,auVar30);
              auVar30 = vectorAddFloatingPoint(auVar32,auVar31);
              auVar30 = auVar30 >> 0x60 & (undefined1  [16])0xffffffff;
              vectorCompareGreaterThanFloatingPoint
                        (auVar34,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
              if (!(bool)(in_cr6 >> 1 & 1)) {
                auVar23 = auVar32;
              }
            }
            auVar30 = ZEXT416(0xfffffff0);
            auVar32 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
            auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar34 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar31 = vectorShiftRightAlgebraicWord
                                (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60);
            auVar23 = loadVectorLeftIndexed(0xc,0x363de0);
            auVar29 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar30 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar23 = vectorMultiplyAddFloatingPoint(auVar29,auVar42,auVar30);
            auVar23 = (auVar23 ^ auVar33) >> 0x60 & (undefined1  [16])0xffffffff;
            vectorCompareGreaterThanOrEqualToFloatingPoint
                      (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
            if ((bool)(in_cr6 >> 1 & 1)) {
              auVar22 = ZEXT416(0);
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar22 = vectorSubtractUnsignedWordModulo
                                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,
                                   auVar31);
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
              auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar42,auVar23);
            }
            else {
              auVar23 = ZEXT416(0xffffffff);
              auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
              auVar23 = vectorShiftLeftIntegerWord(auVar23,auVar23);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar42,auVar23);
              auVar23 = vectorAddFloatingPoint(auVar29,auVar30);
              auVar23 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
              vectorCompareGreaterThanFloatingPoint
                        (auVar32,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
              if (!(bool)(in_cr6 >> 1 & 1)) {
                auVar22 = auVar29;
              }
            }
            auVar23 = ZEXT416(0xffffffff);
            auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
            auVar26 = vectorMultiplyAddFloatingPoint(auVar24,auVar43,auVar26);
            auVar22 = auVar22 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
            auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar36,auVar24,auVar27);
            auVar29 = vectorMultiplyAddFloatingPoint(auVar37,auVar24,auVar41);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar38,auVar24,auVar35);
            auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar34,auVar22);
            auVar27 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar23);
            auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar24,auVar21);
            auVar23 = vectorMultiplyAddFloatingPoint(auVar28,auVar34,auVar29);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar40,auVar34,auVar30);
            auVar21 = auVar27 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar24 = vectorAddFloatingPoint(auVar22,auVar26);
            auVar22 = auVar23 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar23 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
            auVar24 = auVar24 >> 0x60 & (undefined1  [16])0xffffffff;
            uVar6 = storeVectorElementWordIndexed
                              (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x9c,
                               lVar1);
            *(undefined4 *)((int)puVar7 + 0x9c) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x90,
                               lVar1);
            *(undefined4 *)(puVar7 + 0x12) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x94,
                               lVar1);
            *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
            uVar6 = storeVectorElementWordIndexed
                              (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x98,
                               lVar1);
            *(undefined4 *)(puVar7 + 0x13) = uVar6;
            uVar11 = collproc::CollMobySphere(0x3fe6666660000000,uVar10 - 0x160,0x9c,0x10,param_1,0)
            ;
            iVar16 = 0;
            iVar17 = (int)uVar11;
            if (0 < iVar17) {
              uVar20 = 0x3ff0000000000000;
              puVar14 = &DAT_00a14a00;
              do {
                uVar11 = (ulonglong)*puVar14;
                if (*puVar14 == uVar5) {
                  uVar11 = mobyutil::CollDamageMobyDirect_wrap(uVar20,uVar12,param_1,0x10001);
                }
                iVar16 = iVar16 + 1;
                puVar14 = puVar14 + 1;
              } while (iVar16 < iVar17);
            }
          }
        }
        iVar18 = iVar18 + 1;
        uVar15 = uVar15 + 4;
      } while (iVar18 < iVar19);
    }
  }
  return uVar11;
}



//==== 00364408  ns=mobyupdate_unsorted  size=0x268
// sig: undefined UpdateMoby_{404_405}(MobyInstance * moby)
// callers(0): 
// callees(7): 000da9e8 lights::DeletePointLight; 000efb38 mobyfunc::DeleteMoby; 000f0838 mobyfunc::MB_AddShortPairOffset; 000f1ec8 mobyfunc::SetColorOfMoby; 00363df8 mobyupdate_helpers::M405_00363df8; 00502758 fastfunc::FastDoubleToInt; 005cd098 libc::printf
// strings: 006566c0: 'Error! No trigger for moby %d (UID:%d)\n'

/* Moby 404
   Moby 405 */

void mobyupdate_unsorted::UpdateMoby__404_405_(MobyInstance *moby)

{
  byte bVar1;
  MobyModeBit MVar2;
  short sVar3;
  int *piVar4;
  MobyInstance *pMVar5;
  float fVar6;
  s8 sVar7;
  undefined8 uVar8;
  short sVar9;
  
  bVar1 = moby->state;
  piVar4 = (int *)moby->pVar;
  if (bVar1 < 2) {
    if (-1 < (int)(uint)bVar1) {
      if (bVar1 == 0) {
        MVar2 = moby->modeBits;
        moby->alpha = '\x14';
        moby->state = '\x01';
        piVar4[1] = 0x3f800000;
        moby->modeBits = MVar2 | (DISABLE_Z_WRITE|DRAW_TRANSPARENT_WEIRD|TRANSPARENT);
        *(undefined2 *)((int)piVar4 + 0xe) = 0xffff;
        mobyfunc::SetColorOfMoby(moby,0x80,0x80,0x80);
      }
      else {
        if (*piVar4 == -1) {
          piVar4[1] = 0x3f800000;
          moby->state = '\x02';
          libc::printf("Error! No trigger for moby %d (UID:%d)\n",moby->oClass,moby->uid);
        }
        else {
          pMVar5 = MobyInstance + *piVar4;
          if (((pMVar5 == (MobyInstance *)0x0) || (pMVar5->state == 0xfd || pMVar5->state == 0xfe))
             || ((*(uint *)(&DAT_00a0cd1c +
                           Level * 0x100 + (int)((longlong)((int)(short)pMVar5->uid >> 5) << 2)) &
                 1 << (pMVar5->uid & 0x1f)) != 0)) {
            piVar4[1] = 0x3f800000;
            moby->state = '\x02';
          }
        }
        mobyupdate_helpers::M405_00363df8(moby,piVar4);
      }
    }
  }
  else if (bVar1 < 3) {
    fVar6 = -(DAT_0071f408 * 0.05 - (float)piVar4[1]);
    piVar4[1] = (int)fVar6;
    if (0.0 <= fVar6) {
      sVar7 = fastfunc::FastDoubleToInt((double)(fVar6 * 20.0));
      moby->alpha = sVar7;
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (bVar1 < 4) {
    if (*(short *)((int)piVar4 + 0xe) != -1) {
      lights::DeletePointLight();
      *(undefined2 *)((int)piVar4 + 0xe) = 0xffff;
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  sVar3 = *(short *)(piVar4 + 3);
  uVar8 = 0xc0;
  sVar9 = sVar3 + 0xc0;
  *(short *)(piVar4 + 3) = sVar9;
  if (sVar9 < 0x1001) {
    if (sVar9 < 0) {
      uVar8 = 0x10c0;
      *(short *)(piVar4 + 3) = sVar3 + 0x10c0;
    }
  }
  else {
    uVar8 = 0xfffffffffffff0c0;
    *(short *)(piVar4 + 3) = sVar3 + -0xf40;
  }
  mobyfunc::MB_AddShortPairOffset(moby->pClass,uVar8,0);
  return;
}



//==== 00364670  ns=mobyupdate_helpers  size=0x14
// sig: undefined M408_00364670(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M408_00364670(void)

{
  DAT_00840b58 = 0x10000;
  return;
}



//==== 00364690  ns=mobyupdate_helpers  size=0x138
// sig: undefined M408_00364690(void)
// callers(3): 003647d8 mobyupdate_helpers::M408_003647d8; 00364a00 mobyupdate_unsorted::UpdateMoby_408; 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(0): 

void mobyupdate_helpers::M408_00364690(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar2 = *(uint *)(param_1 + 0x78);
  auVar7._0_4_ = param_2;
  auVar7._4_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  if (param_2 == -1) {
    param_2 = 0;
    auVar7 = ZEXT416(0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    DAT_010c5128 = 0;
  }
  uVar5 = (uint)LZCOUNT(param_2) >> 5 ^ 1;
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
    auVar7 = ZEXT416(0xffffffff);
    auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    auVar7 = loadVectorLeftIndexed(0x30,0x364688);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorAddFloatingPoint
                       (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
    auVar8 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar10,auVar7,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x18,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar4;
    *(uint *)(uVar2 + 8) = uVar5;
  }
  else {
    puVar6 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar6 != (ushort *)0x0) {
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(0x30,0x364688);
      auVar7 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar7 = vectorAddFloatingPoint
                         (auVar8,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      do {
        if (MobyInstance[*puVar6 & 0x7fff].oClass == SENTRY_BOT_ALARM) {
          auVar8 = ZEXT416(0xffffffff);
          auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
          pvVar3 = MobyInstance[*puVar6 & 0x7fff].pVar;
          auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
          *(uint *)((int)pvVar3 + 8) = uVar5;
          auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar8 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
          auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
          auVar8 = auVar8 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,0x18,
                             ZEXT48(pvVar3));
          *(undefined4 *)((int)pvVar3 + 0x18U & 0xfffffffc) = uVar4;
        }
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}



//==== 003647d8  ns=mobyupdate_helpers  size=0x1e8
// sig: undefined M408_003647d8(void)
// callers(0): 
// callees(6): 0006d7e0 draw::RegisterPostDraw; 00109af0 mobyutil::Delt; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00364690 mobyupdate_helpers::M408_00364690

void mobyupdate_helpers::M408_003647d8(undefined8 param_1)

{
  int iVar1;
  MobyInstance *pMoby;
  float fVar2;
  
  if (g_heroState == ANIM_TARGET_WALK) {
    fVar2 = mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
    M408_00364690((double)fVar2,param_1,0);
  }
  else if ((DAT_010c5124 == 0) ||
          ((Level == Quartu &&
           ((int)(((uint)((int)g_heroPosition.y >> 0x1f) >> 1 ^ (uint)g_heroPosition.y) -
                 ((int)g_heroPosition.y >> 0x1f)) < 0x43700001)))) {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
  }
  else {
    mobyutil::Delt(1.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
  }
  if (DAT_010c5128 == 0) {
    iVar1 = sound::IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
    if (iVar1 != 0) {
      sound::sound_Kill(DAT_00840b7c);
      DAT_00840b7c = -1;
      DAT_00840b80 = (MobyInstance *)0x0;
    }
    DAT_010c512c = 0;
  }
  else {
    DAT_010c512c = 1;
    iVar1 = sound::IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
    pMoby = (MobyInstance *)param_1;
    if (iVar1 == 0) {
      DAT_00840b7c = sound::PlayMobySound(5,0x11,pMoby);
      DAT_00840b80 = pMoby;
    }
    draw::RegisterPostDraw(&PTR_M408_003656c8_0070c848,pMoby);
  }
  return;
}



//==== 00364a00  ns=mobyupdate_unsorted  size=0xb38
// sig: undefined UpdateMoby_408(MobyInstance * moby)
// callers(0): 
// callees(12): 00057820 collproc::CollLine; 0006d7e0 draw::RegisterPostDraw; 000fddc0 mobyutil::MB_SetAnimation; 00109af0 mobyutil::Delt; 0015cc7c sound::IsMobyPlayingSound; 0015cdb0 sound::sound_Kill; 0015d12c sound::PlayMobySound; 00364690 mobyupdate_helpers::M408_00364690; 00454348 FUN_00454348; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005027bc fastfunc::FastLerpColor

/* Moby 408 */

void mobyupdate_unsorted::UpdateMoby_408(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  undefined1 local_40 [40];
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  uVar2 = moby->animationId;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        DAT_010c5120 = 0;
        DAT_010c5124 = 0;
        DAT_010c5128 = 0;
        if (*piVar3 == 2) {
          moby->state = '\x06';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar7,4,0,0);
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            mobyutil::MB_SetAnimation(lVar7,2,0,0);
          }
        }
      }
      else {
        fVar11 = (float)piVar3[5];
        fVar4 = 3.1415925 - fVar11;
        if (fVar11 - (3.1415925 - fVar11) < 0.0) {
          fVar4 = fVar11;
        }
        fVar5 = -3.1415925 - fVar11;
        if ((-3.1415925 - fVar11) - fVar4 < 0.0) {
          fVar5 = fVar4;
        }
        fVar11 = fVar5 * fVar5;
        fVar4 = fVar11 * fVar11 * fVar5;
        fVar6 = fVar11 * fVar4;
        uVar8 = fastfunc::FastLerpColor
                          ((double)((fVar11 * fVar6 * 2.601887e-06 +
                                     fVar6 * -0.0001980741 +
                                     fVar4 * 0.0083330255 + fVar11 * fVar5 * -0.16666657 + fVar5 +
                                    1.0) * 0.5),0xffffffff801414bc,0xffffffff801414dc);
        moby->field60_0x90 = uVar8;
        dVar10 = (double)fastfunc::FastWrapRot((float)piVar3[5],mobyutil::g_FrameTime * 6.2831855);
        piVar3[5] = (int)(float)dVar10;
        if ((piVar3[2] != 0) && (g_gameMode != GAME_MODE_SCENE)) {
          if (*piVar3 == 1) {
            moby->state = '\x06';
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 30.5));
            }
          }
          else {
            moby->state = '\x05';
          }
        }
      }
    }
    else if (bVar1 < 3) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', uVar2 != '\x02')) {
        mobyutil::MB_SetAnimation(lVar7,2,0,(int)(animationSpeed * 10.5));
      }
    }
    else if (bVar1 < 4) {
      if (((piVar3[2] != 0) && (g_gameMode != GAME_MODE_SCENE)) &&
         (moby->state = '\x04', uVar2 != '\x03')) {
        mobyutil::MB_SetAnimation(lVar7,3,0,(int)(animationSpeed * 10.5));
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      if ((piVar3[2] == 0) || (g_gameMode == GAME_MODE_SCENE)) {
        if (uVar2 != '\b') {
          mobyutil::MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\n';
      }
      else if (*piVar3 == 1) {
        moby->state = '\a';
        if (uVar2 != '\x05') {
          mobyutil::MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        if (uVar2 != '\b') {
          mobyutil::MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x05';
      }
    }
  }
  else if (bVar1 == 10) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x02', uVar2 != '\x01')) {
      mobyutil::MB_SetAnimation(lVar7,1,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 9) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*piVar3 == 2) {
        moby->state = '\x06';
        if (uVar2 != '\x04') {
          mobyutil::MB_SetAnimation(lVar7,4,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        moby->state = '\n';
        if (uVar2 != '\b') {
          mobyutil::MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
        }
      }
    }
  }
  else if (bVar1 == 8) {
    fVar11 = (moby->pos).y - g_heroPosition.y;
    fVar4 = (moby->pos).x - g_heroPosition.x;
    if ((((SQRT(fVar4 * fVar4 + fVar11 * fVar11) < 16.0) && (g_gameMode != GAME_MODE_SCENE)) &&
        (iVar9 = fastfunc::FastDecTimerS32(piVar3 + 3), iVar9 != 0)) &&
       ((iVar9 = collproc::CollLine(local_40,&hero::g_heroCGPos,2,0,0), iVar9 == 0 &&
        (iVar9 = FUN_00454348(piVar3[1],lVar7 + 0x10), iVar9 != 0)))) {
      piVar3[3] = piVar3[4];
    }
    iVar9 = fastfunc::FastDecTimerS32(piVar3 + 6);
    if ((iVar9 != 0) || (g_gameMode == GAME_MODE_SCENE)) {
      mobyupdate_helpers::M408_00364690(lVar7,0);
      piVar3[2] = 0;
      moby->state = '\t';
      if (moby->animationId != '\a') {
        mobyutil::MB_SetAnimation(lVar7,7,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 7) {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', uVar2 != '\x06')) {
      mobyutil::MB_SetAnimation(lVar7,6,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 6) {
    if ((piVar3[2] != 0) && (moby->state = '\a', uVar2 != '\x05')) {
      mobyutil::MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (bVar1 == 5) {
    if (((moby->field43_0x70 & 2U) != 0) && (uVar2 != '\0')) {
      mobyutil::MB_SetAnimation(lVar7,0,0,(int)(animationSpeed * 10.5));
    }
    fVar11 = (float)piVar3[5];
    fVar4 = 3.1415925 - fVar11;
    if (fVar11 - (3.1415925 - fVar11) < 0.0) {
      fVar4 = fVar11;
    }
    fVar5 = -3.1415925 - fVar11;
    if ((-3.1415925 - fVar11) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = fVar5 * fVar5;
    fVar4 = fVar11 * fVar11 * fVar5;
    fVar6 = fVar11 * fVar4;
    uVar8 = fastfunc::FastLerpColor
                      ((double)((fVar11 * fVar6 * 2.601887e-06 +
                                 fVar6 * -0.0001980741 +
                                 fVar4 * 0.0083330255 + fVar11 * fVar5 * -0.16666657 + fVar5 + 1.0)
                               * 0.5),0xffffffff801414dc,0xffffffff8004048c);
    moby->field60_0x90 = uVar8;
    dVar10 = (double)fastfunc::FastWrapRot((float)piVar3[5],mobyutil::g_FrameTime * 12.566371);
    piVar3[5] = (int)(float)dVar10;
    iVar9 = fastfunc::FastDecTimerS32(piVar3 + 6);
    if ((iVar9 != 0) || (g_gameMode == GAME_MODE_SCENE)) {
      mobyupdate_helpers::M408_00364690(lVar7,0);
      piVar3[2] = 0;
      if (moby->animationId != '\b') {
        mobyutil::MB_SetAnimation(lVar7,8,0,(int)(animationSpeed * 10.5));
      }
      moby->state = '\n';
    }
  }
  if (piVar3[2] != 0) {
    DAT_010c5124 = 1;
  }
  if (DAT_010c5120 != worldUpdateTime) {
    DAT_010c5120 = worldUpdateTime;
    if (g_heroState == ANIM_TARGET_WALK) {
      fVar11 = mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
      mobyupdate_helpers::M408_00364690((double)fVar11,lVar7,0);
    }
    else if ((DAT_010c5124 == 0) ||
            ((Level == Quartu &&
             ((int)(((uint)((int)g_heroPosition.y >> 0x1f) >> 1 ^ (uint)g_heroPosition.y) -
                   ((int)g_heroPosition.y >> 0x1f)) < 0x43700001)))) {
      mobyutil::Delt(0.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
    }
    else {
      mobyutil::Delt(1.0,mobyutil::g_FrameTime * 2.0,(float *)&DAT_010c5128);
    }
    if (DAT_010c5128 == 0) {
      iVar9 = sound::IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
      if (iVar9 != 0) {
        sound::sound_Kill(DAT_00840b7c);
        DAT_00840b7c = -1;
        DAT_00840b80 = (MobyInstance *)0x0;
      }
      DAT_010c512c = 0;
    }
    else {
      DAT_010c512c = 1;
      iVar9 = sound::IsMobyPlayingSound(DAT_00840b80,DAT_00840b7c);
      if (iVar9 == 0) {
        DAT_00840b7c = sound::PlayMobySound(5,0x11,moby);
        DAT_00840b80 = moby;
      }
      draw::RegisterPostDraw(&PTR_M408_003656c8_0070c848,moby);
    }
    DAT_010c5124 = 0;
  }
  return;
}



//==== 00365538  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M408_00365538(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M408_00365538(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].oClass == SENTRY_BOT_ALARM) &&
         (*(int *)((int)MobyInstance[*puVar2 & 0x7fff].pVar + 8) != 0)) {
        return 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return 0;
}



//==== 003655c0  ns=Global  size=0xe4
// sig: undefined FUN_003655c0(void)
// callers(1): 0037dc48 mobyupdate_unsorted::UpdateMoby_44
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void FUN_003655c0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  cVar1 = *(char *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x78);
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 2;
    if (*(char *)(param_1 + 0x53) == '\x01') {
      return;
    }
    mobyutil::MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 10.5));
    cVar1 = *(char *)(param_1 + 0x20);
  }
  if ((cVar1 == '\x03') && (*(int *)(uVar2 + 8) == 0)) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    auVar4 = loadVectorLeftIndexed(4,0x3655b4);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar3 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x18,
                       (ulonglong)uVar2);
    *(undefined4 *)(uVar2 + 0x18 & 0xfffffffc) = uVar3;
  }
  return;
}



//==== 003656c8  ns=mobyupdate_helpers  size=0x18c
// sig: undefined M408_003656c8(void)
// callers(0): 
// callees(3): 0006b5dc draw::DrawScreenOverlay; 00502730 fastfunc::FastIntToDouble; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M408_003656c8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = (int)(animationSpeed * ((float)(longlong)DAT_00840b8c + 0.5));
  dVar6 = (double)fastfunc::FastIntToDouble(iVar5);
  fVar1 = (float)((double)(longlong)(worldUpdateTime - (worldUpdateTime / iVar5) * iVar5) / dVar6) *
          6.28318;
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
  fVar1 = DAT_00840b88 *
          (fVar1 * fVar4 * 2.601887e-06 +
          fVar4 * -0.0001980741 + fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) +
          DAT_010c5128;
  if (fVar1 - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  iVar5 = fastfunc::FastDoubleToInt((double)((float)(longlong)((int)DAT_00840b84 >> 0x18) * fVar1));
  draw::DrawScreenOverlay
            (DAT_00840b84 & 0xff,(uint)((ulonglong)(8 - (longlong)(int)DAT_00840b84) >> 0x3f),
             (uint)((ulonglong)(0x10 - (longlong)(int)DAT_00840b84) >> 0x3f),iVar5);
  return;
}



//==== 00365854  ns=mobyupdate_helpers  size=0x14
// sig: undefined M408_00365854(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M408_00365854(void)

{
  DAT_00840bdc = 0x10000;
  return;
}



//==== 003658b0  ns=mobyupdate_unsorted  size=0x8d0
// sig: undefined UpdateMoby_41(MobyInstance * moby)
// callers(0): 
// callees(10): 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fea60 mobyutil::MB_randSphere; 0010581c mobyutil::SetCollDamIn; 0010e030 mobyutil::MB_genericExplosion; 001268f8 partupd::SpawnPart_21; 0012e3e8 partupd::SpawnPart_44; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot

/* Moby 41 */

void mobyupdate_unsorted::UpdateMoby_41(MobyInstance *moby)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  short sVar10;
  float *pfVar11;
  float fVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar24;
  longlong lVar23;
  ulonglong uVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f29;
  undefined8 uVar28;
  ulonglong in_f30;
  undefined8 uVar29;
  ulonglong in_f31;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1e0;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x3e] = in_LR;
  puVar13[0x39] = in_f29;
  puVar13[0x3a] = in_f30;
  puVar13[0x3b] = in_f31;
  puVar13[0x38] = unaff_r31;
  puVar13[0x37] = unaff_r30;
  fVar3 = mobyutil::g_FrameTime;
  pfVar11 = (float *)moby->pVar;
  fVar2 = (moby->rotation).x;
  puVar13[0x36] = unaff_r29;
  puVar13[0x35] = unaff_r28;
  dVar27 = (double)fastfunc::FastWrapRot(fVar2,fVar3 * 6.2831855);
  sVar10 = *(short *)((int)pfVar11 + 0x12);
  (moby->rotation).x = (float)dVar27;
  if (sVar10 != 0) {
    fVar2 = *pfVar11;
    fVar6 = DAT_00969da0 - (moby->pos).x;
    fVar3 = pfVar11[1];
    *pfVar11 = fVar6;
    fVar5 = DAT_00969da4 - (moby->pos).y;
    pfVar11[1] = fVar5;
    fVar12 = DAT_00969da8 - (moby->pos).z;
    fVar2 = SQRT(pfVar11[2] * pfVar11[2] + fVar2 * fVar2 + fVar3 * fVar3);
    pfVar11[2] = fVar12;
    pfVar11[3] = DAT_00969dac;
    fVar3 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar5 * fVar5);
    if (fVar3 <= fVar2) {
      if (fVar3 < 0.1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      fVar2 = fVar2 / fVar3;
      fVar4 = 0.0;
      fVar9 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar9 = fVar6 * fVar2;
      }
      fVar14 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar14 = fVar5 * fVar2;
      }
      fVar15 = fVar4;
      if (0.0 - fVar3 < 0.0) {
        fVar15 = fVar12 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar9 = fVar6 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar14 = fVar5 * fVar2;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar15 = fVar12 * fVar2;
      }
      *pfVar11 = fVar9;
      pfVar11[1] = fVar14;
      pfVar11[2] = fVar15;
      *(float *)(puVar13 + 0x29) = fVar9;
      *(float *)((int)puVar13 + 0x14c) = fVar14;
      *(float *)(puVar13 + 0x2a) = ABS(fVar9) - ABS(fVar14);
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x29) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x2a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x14c) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 0x29));
      if (*(float *)(puVar13 + 0x2a) - 0.0 < 0.0) {
        fVar2 = ABS(fVar14);
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar6 = ABS(*(float *)((int)puVar13 + 0x14c));
      if (*(float *)(puVar13 + 0x2a) - 0.0 < 0.0) {
        fVar6 = ABS(fVar9);
      }
      fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar12 = fVar4;
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1d0;
        lVar23 = uVar17 - 0x5c;
        lVar22 = uVar17 - 0x6c;
        lVar26 = 2;
        fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
        fVar6 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x30) = fVar2;
        *(float *)(puVar13 + 0x2f) = fVar2;
        *(float *)((int)puVar13 + 0x17c) = fVar2;
        *(float *)((int)puVar13 + 0x174) = fVar2;
        fVar2 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x2f) = *(float *)(puVar13 + 0x2f) * fVar6;
        *(float *)((int)puVar13 + 0x17c) = *(float *)((int)puVar13 + 0x17c) * fVar2;
        *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar2 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x164) * fVar2 * fVar2;
          iVar21 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar23 = uVar17 - 0x6c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar23;
        do {
          fVar2 = *pfVar24;
          fVar6 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x174) = *(float *)((int)lVar19 + 0x174) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar22 = 2;
        lVar19 = lVar20;
        fVar2 = fVar4;
        do {
          iVar21 = (int)lVar19;
          iVar16 = (int)lVar23;
          lVar19 = lVar19 + 0x10;
          lVar23 = lVar23 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar21 + 0x174) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar12 = (fVar2 + 0.7853982) * fVar3 + fVar5;
      }
      (moby->rotation).z = fVar12;
      fVar2 = pfVar11[2];
      fVar3 = ABS(pfVar11[2]);
      fVar5 = SQRT(*pfVar11 * *pfVar11 + pfVar11[1] * pfVar11[1]);
      fVar6 = ABS(fVar5);
      *(float *)(puVar13 + 0x28) = fVar5;
      *(float *)((int)puVar13 + 0x144) = fVar6 - fVar3;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x144) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar2 >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 0x28));
      if (*(float *)((int)puVar13 + 0x144) - 0.0 < 0.0) {
        fVar2 = fVar3;
      }
      fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar25 << 2));
      if (*(float *)((int)puVar13 + 0x144) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar19 = uVar17 - 0x1d0;
        lVar23 = uVar17 - 0x7c;
        lVar22 = uVar17 - 0x8c;
        lVar26 = 2;
        fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x2c) = fVar2;
        *(float *)(puVar13 + 0x2b) = fVar2;
        *(float *)((int)puVar13 + 0x15c) = fVar2;
        *(float *)((int)puVar13 + 0x154) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x2b) = *(float *)(puVar13 + 0x2b) * fVar3;
        *(float *)((int)puVar13 + 0x15c) = *(float *)((int)puVar13 + 0x15c) * fVar2;
        *(float *)(puVar13 + 0x2c) = *(float *)(puVar13 + 0x2c) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar19 + 0x154) = *(float *)((int)lVar19 + 0x144) * fVar2 * fVar2;
          iVar21 = (int)lVar22;
          lVar22 = lVar22 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
          lVar23 = lVar23 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar23 = uVar17 - 0x8c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar23;
        do {
          fVar2 = *pfVar24;
          fVar3 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar19 + 0x154) = *(float *)((int)lVar19 + 0x154) * fVar2;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar19 = 2;
        do {
          iVar21 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar16 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar21 + 0x154) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar5 + fVar6;
      }
      (moby->rotation).y = -fVar4;
    }
  }
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar6 = (moby->pos).z;
  fVar7 = (moby->pos).w;
  fVar12 = pfVar11[5];
  *(float *)(puVar13 + 0x18) = fVar2 + *pfVar11;
  *(float *)((int)puVar13 + 0xc4) = fVar3 + pfVar11[1];
  fVar5 = pfVar11[2];
  *(f32 *)((int)puVar13 + 0xcc) = fVar7;
  *(float *)(puVar13 + 0x19) = fVar6 + fVar5;
  if (((fVar12 == 0.0) || (*(short *)((int)fVar12 + 0xa6) != 0x2e)) ||
     (*(char *)((int)fVar12 + 0x20) == -3 || *(char *)((int)fVar12 + 0x20) == -2)) {
    fVar2 = *pfVar11;
    fVar3 = SQRT(pfVar11[2] * pfVar11[2] + fVar2 * fVar2 + pfVar11[1] * pfVar11[1]);
    if (fVar3 == 0.0) {
      *(float *)(puVar13 + 0x1a) = fVar2;
      *(float *)((int)puVar13 + 0xd4) = pfVar11[1];
      *(float *)(puVar13 + 0x1b) = pfVar11[2];
      fVar2 = pfVar11[3];
      *(undefined4 *)(puVar13 + 0x1b) = 0;
      *(undefined4 *)((int)puVar13 + 0xd4) = 0;
      *(undefined4 *)(puVar13 + 0x1a) = 0;
    }
    else {
      fVar3 = 2.0 / fVar3;
      *(float *)(puVar13 + 0x1a) = fVar2 * fVar3;
      *(float *)((int)puVar13 + 0xd4) = pfVar11[1] * fVar3;
      *(float *)(puVar13 + 0x1b) = pfVar11[2] * fVar3;
      fVar2 = pfVar11[3];
    }
  }
  else {
    fVar2 = fVar2 - *(float *)((int)fVar12 + 0x10);
    *(float *)(puVar13 + 0x1a) = fVar2;
    fVar3 = fVar3 - *(float *)((int)fVar12 + 0x14);
    *(undefined4 *)(puVar13 + 0x1b) = 0;
    fVar6 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
    fVar2 = fVar2 * (2.0 / fVar6);
    fVar3 = fVar3 * (2.0 / fVar6);
    fVar5 = 0.0;
    if (0.0 - fVar6 < 0.0) {
      fVar5 = fVar2;
    }
    fVar12 = 0.0;
    if (0.0 - fVar6 < 0.0) {
      fVar12 = fVar3;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    if (fVar6 - 0.0 < 0.0) {
      fVar12 = fVar3;
    }
    *(float *)(puVar13 + 0x1a) = fVar5;
    *(float *)((int)puVar13 + 0xd4) = fVar12;
    fVar2 = 5627.925;
  }
  *(float *)((int)puVar13 + 0xdc) = fVar2;
  mobyutil::SetCollDamIn(0x4000000000000000,uVar17 - 0xd0,lVar18,1);
  fVar2 = pfVar11[5];
  *(MOBY_OCLASSES *)((int)puVar13 + 0x12a) = moby->oClass;
  iVar21 = collproc::CollLine(lVar18 + 0x10,uVar17 - 0x120,0,fVar2,uVar17 - 0xd0);
  if ((iVar21 == 0) && (iVar21 = fastfunc::FastDecTimerS16(pfVar11 + 4), iVar21 == 0)) {
    fVar7 = *(f32 *)((int)puVar13 + 0xc4);
    (moby->pos).x = *(f32 *)(puVar13 + 0x18);
    fVar8 = *(f32 *)(puVar13 + 0x19);
    (moby->pos).y = fVar7;
    fVar7 = *(f32 *)((int)puVar13 + 0xcc);
    (moby->pos).z = fVar8;
    (moby->pos).w = fVar7;
    mobyutil::MB_randSphere
              ((double)(mobyutil::g_FrameTime * 0.1),(double)(mobyutil::g_FrameTime * 0.2),
               uVar17 - 0x100);
    uVar29 = 0;
    uVar28 = 0x3ff0000000000000;
    dVar27 = (double)mobyutil::MB_randRangeFloat(0.0,1.0);
    fVar2 = *pfVar11;
    fVar3 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar5 = (moby->pos).z;
    *(float *)(puVar13 + 0x1e) = (float)((double)fVar2 * dVar27);
    fVar14 = animationSpeed;
    fVar12 = pfVar11[1];
    *(float *)((int)puVar13 + 0xf4) = (float)((double)fVar12 * dVar27);
    fVar4 = pfVar11[2];
    *(float *)(puVar13 + 0x1f) = (float)((double)fVar4 * dVar27);
    fVar9 = pfVar11[3];
    *(float *)(puVar13 + 0x1e) = (float)((double)fVar2 * dVar27) + fVar3;
    *(float *)((int)puVar13 + 0xfc) = fVar9;
    *(float *)((int)puVar13 + 0xf4) = (float)((double)fVar12 * dVar27) + fVar6;
    *(float *)(puVar13 + 0x1f) = (float)((double)fVar4 * dVar27) + fVar5;
    dVar27 = 10.5;
    puVar13[0x33] = (longlong)(int)(fVar14 * 10.5);
    iVar21 = partupd::SpawnPart_44
                       (0x40e3880000000000,0x408f400000000000,uVar28,0xbf2a36e2e0000000,uVar29,
                        uVar17 - 0xf0,uVar17 - 0x100,*(undefined4 *)((int)puVar13 + 0x19c),0x7f,
                        FUN_00606060,3);
    fVar2 = (moby->transform).v2.x;
    fVar3 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar5 = (moby->transform).v2.w;
    if (iVar21 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar21 + 3) = 0x44;
      *(undefined1 *)(iVar21 + 2) = uVar1;
    }
    *(float *)(puVar13 + 0x20) = fVar2 * 0.02;
    *(float *)((int)puVar13 + 0x104) = fVar3 * 0.02;
    *(float *)(puVar13 + 0x21) = fVar6 * 0.02;
    *(float *)((int)puVar13 + 0x10c) = fVar5 * 0.02;
    puVar13[0x33] = (longlong)(int)((double)animationSpeed * dVar27);
    partupd::SpawnPart_21
              (0x40d3880000000000,uVar17 - 0xf0,uVar17 - 0xe0,0x4f007fff,0x1fffffff,0x4f000000,
               *(undefined4 *)((int)puVar13 + 0x19c),1);
  }
  else {
    puVar13[0x12] = 0;
    puVar13[0x14] = 0;
    puVar13[0x15] = 0;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    mobyutil::MB_genericExplosion
              (0x3ff8000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe0000000000000,
               0x4022000000000000,0x3fe0000000000000,0,lVar18,pfVar11,lVar18 + 0x10,0,
               0xffffffffffffffff,10,6,4);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00366190  ns=Global  size=0x454
// sig: undefined FUN_00366190(void)
// callers(2): 00284460 mobyupdate_unsorted::UpdateMoby_1454; 00392910 mobyupdate_unsorted::UpdateMoby_46
// callees(1): 000efa28 mobyfunc::CreateMoby

void FUN_00366190(float param_1,f32 *param_2,float *param_3,undefined2 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
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
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0xe0;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar11;
  puVar7[0x1e] = in_LR;
  puVar7[0x1b] = unaff_r31;
  puVar7[0x19] = unaff_r29;
  puVar7[0x18] = unaff_r28;
  puVar7[0x1a] = unaff_r30;
  pMVar12 = mobyfunc::CreateMoby(ROCKET_0029);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    uVar13 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar12->state = '\0';
    pMVar12->color = (int)((ulonglong)uVar13 >> 0x20);
    pMVar12->light = (int)uVar13;
    pfVar18 = (float *)pMVar12->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    pMVar12->scale = pMVar12->scale * 3.0;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    *pfVar18 = *param_3;
    pfVar18[1] = param_3[1];
    pfVar18[2] = param_3[2];
    pfVar18[3] = param_3[3];
    auVar21 = loadVectorLeftIndexed(4,0x366180);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x10,ZEXT48(pfVar18));
    *(undefined2 *)(pfVar18 + 4) = uVar6;
    *(undefined2 *)((int)pfVar18 + 0x12) = param_4;
    pfVar18[5] = param_1;
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar8 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xf) = fVar2 - fVar8;
    fVar1 = 0.0;
    uVar16 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    fVar2 = fVar1;
    if (0.0 < fVar4) {
      lVar14 = uVar11 - 0xd0;
      lVar17 = uVar11 - 0x44;
      lVar19 = uVar11 - 0x34;
      lVar20 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x15) = fVar4;
      *(float *)(puVar7 + 0x14) = fVar4;
      *(float *)((int)puVar7 + 0xa4) = fVar4;
      *(float *)((int)puVar7 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar4 * fVar4;
        iVar9 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 0x44;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      fVar4 = fVar1;
      do {
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar2 = (fVar4 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar12->rotation).z = fVar2;
    fVar4 = param_3[2];
    fVar2 = ABS(param_3[2]);
    fVar5 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar8 = ABS(fVar5);
    *(float *)(puVar7 + 0xe) = fVar5;
    *(float *)((int)puVar7 + 0x74) = fVar8 - fVar2;
    uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    if (0.0 < fVar5) {
      lVar14 = uVar11 - 0xd0;
      lVar17 = uVar11 - 100;
      lVar19 = uVar11 - 0x54;
      lVar20 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar7 + 0x11) = fVar5;
      *(float *)(puVar7 + 0x10) = fVar5;
      *(float *)((int)puVar7 + 0x84) = fVar5;
      *(float *)((int)puVar7 + 0x7c) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar5;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar5 * fVar5;
        iVar9 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar5 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar15;
        iVar10 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar3;
    }
    (pMVar12->rotation).y = -fVar1;
  }
  return;
}



//==== 003665e4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M410_003665e4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M410_003665e4(void)

{
  DAT_00840c4c = 0x10000;
  return;
}



//==== 00366628  ns=mobyupdate_unsorted  size=0x178
// sig: undefined UpdateMoby_410(MobyInstance * moby)
// callers(0): 
// callees(2): 00342d38 FUN_00342d38; 00502578 fastfunc::FastWrapRot

/* Moby 410 */

void mobyupdate_unsorted::UpdateMoby_410(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  if ((moby != (MobyInstance *)0x0) && (pfVar2 = (float *)moby->pVar, pfVar2 != (float *)0x0)) {
    dVar6 = (double)FUN_00342d38((longlong)(int)moby + 0x10);
    fVar1 = pfVar2[1];
    fVar3 = (moby->pos).z + fVar1;
    if (fVar3 - (float)(dVar6 + (double)*pfVar2) < 0.0) {
      fVar1 = ((float)(dVar6 + (double)*pfVar2) - fVar3) * 0.2 + fVar1;
    }
    fVar1 = -(DAT_0071f418 * 9.8 - fVar1);
    pfVar2[1] = fVar1;
    (moby->pos).z = (moby->pos).z + fVar1;
    dVar6 = (double)fastfunc::FastWrapRot(pfVar2[2],0.01);
    pfVar2[2] = (float)dVar6;
    dVar6 = (double)fastfunc::FastWrapRot((float)dVar6,0.017);
    fVar1 = pfVar2[2];
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    pfVar2[3] = (float)dVar6;
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    fVar5 = fVar1 * fVar3;
    (moby->rotation).x =
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4) * 0.15;
    fVar1 = pfVar2[3];
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
    (moby->rotation).y =
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4) * 0.15;
  }
  return;
}



//==== 003667a0  ns=mobyupdate_helpers  size=0x70
// sig: undefined M411_003667a0(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M411_003667a0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  if ((g_downButtons & TRIANGLE) == 0) {
    if ((g_downButtons & CROSS) == 0) {
      if ((g_downButtons & CIRCLE) == 0) {
        if ((g_downButtons & SQUARE) != 0) {
          *puVar1 = 5;
        }
      }
      else {
        *puVar1 = 4;
      }
    }
    else {
      *puVar1 = 2;
    }
  }
  else {
    *puVar1 = 3;
  }
  return;
}



//==== 00366818  ns=mobyupdate_helpers  size=0x124
// sig: undefined M411_00366818(void)
// callers(0): 
// callees(2): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot

void mobyupdate_helpers::M411_00366818(undefined8 param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_20 = *(float *)(param_2 + 0x10) + DAT_00840c80;
  local_18 = DAT_00840c84 + *(float *)(param_2 + 0x18);
  local_1c = *(float *)(param_2 + 0x14) + DAT_010c5130;
  local_14 = 0;
  if (DAT_00840c98 < local_20) {
    local_20 = DAT_00840c98;
  }
  if (DAT_00840ca0 < local_1c) {
    local_1c = DAT_00840ca0;
  }
  if (local_20 < DAT_00840c94) {
    local_20 = DAT_00840c94;
  }
  if (local_1c < DAT_00840c9c) {
    local_1c = DAT_00840c9c;
  }
  camera::camera5::Camera_SetMobyDrivenTargetPos(&local_20);
  local_10 = 0.0;
  local_c = DAT_00840c8c * 0.017453292;
  local_8 = DAT_00840c88 * 0.017453292;
  camera::camera5::Camera_SetMobyDrivenTargetRot(&local_10);
  return;
}



//==== 0036693c  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_411(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 411 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_411(MobyInstance *moby)

{
  return moby;
}



//==== 00366940  ns=mobyupdate_helpers  size=0x14
// sig: undefined M413_00366940(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M413_00366940(void)

{
  DAT_00840d2c = 0x10000;
  return;
}



//==== 00366968  ns=mobyupdate_helpers  size=0x3d0
// sig: undefined M413_00366968(void)
// callers(0): 
// callees(8): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 000fcbe8 mobyutil::MB_randRangeFloat; 00500ca4 fastfunc::FastEulerToMtx1; 00502578 fastfunc::FastWrapRot; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M413_00366968(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_r22;
  longlong lVar7;
  ulonglong unaff_r23;
  longlong lVar8;
  ulonglong unaff_r24;
  longlong lVar9;
  ulonglong unaff_r25;
  undefined4 *puVar10;
  ulonglong unaff_r26;
  undefined4 *puVar11;
  ulonglong unaff_r27;
  float *pfVar14;
  longlong lVar12;
  longlong lVar13;
  ulonglong unaff_r28;
  float *pfVar15;
  ulonglong unaff_r29;
  int iVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar17;
  ulonglong in_LR;
  double dVar18;
  double dVar19;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar20;
  
  uVar5 = ZEXT48(&stack0x00000000);
  lVar13 = uVar5 - 0x1b0;
  puVar3 = (ulonglong *)lVar13;
  *puVar3 = uVar5;
  puVar3[0x38] = in_LR;
  puVar3[0x34] = in_f30;
  puVar3[0x35] = in_f31;
  puVar3[0x33] = unaff_r31;
  puVar3[0x30] = unaff_r28;
  puVar3[0x32] = unaff_r30;
  iVar16 = *(int *)(param_1 + 0x78);
  puVar3[0x31] = unaff_r29;
  puVar3[0x2f] = unaff_r27;
  puVar3[0x2e] = unaff_r26;
  puVar3[0x2d] = unaff_r25;
  puVar3[0x2c] = unaff_r24;
  puVar3[0x2b] = unaff_r23;
  puVar3[0x2a] = unaff_r22;
  uVar6 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar3[0x28] = uVar6;
  uVar6 = FUN_00502f08(0,0,0,0,0,0);
  puVar3[0x26] = uVar6;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar3[0x29] = uVar6;
  uVar6 = draw::GetEffectTex(0xc);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  puVar3[0x27] = uVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar3 + 0xe) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar3 + 0x74) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar3 + 0xf) = uVar1;
  *(undefined4 *)((int)puVar3 + 0x7c) = uVar2;
  dVar18 = (double)fastfunc::FastWrapRot
                             (*(float *)(iVar16 + 0xc),
                              DAT_00840d58 * 0.017453292 * mobyutil::g_FrameTime);
  *(float *)(iVar16 + 0xc) = (float)dVar18;
  *(float *)(puVar3 + 0xe) = (float)dVar18;
  fastfunc::FastEulerToMtx1(uVar5 - 0x130,uVar5 - 0x140);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar3 + 0x16) = *(undefined4 *)(param_1 + 0x10);
  iVar16 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar3 + 0xb4) = uVar1;
  *(undefined4 *)(puVar3 + 0x17) = uVar2;
  *(undefined4 *)((int)puVar3 + 0xbc) = 0x3f800000;
  lVar17 = uVar5 - 0xf0;
  dVar18 = 0.0;
  dVar20 = 0.30000001192092896;
  puVar10 = &DAT_00840df8;
  puVar11 = &DAT_00840dfc;
  pfVar15 = (float *)&DAT_00840d70;
  lVar7 = lVar13;
  lVar8 = lVar13;
  lVar9 = lVar13;
  lVar12 = lVar17;
  do {
    fVar4 = DAT_00840d54;
    pfVar14 = (float *)lVar12;
    if ((iVar16 == 0) || (iVar16 == 2)) {
      *(undefined4 *)((int)lVar7 + 0x100) = DAT_00840df0;
      *pfVar14 = *pfVar15 * fVar4;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
    }
    else {
      *(undefined4 *)((int)lVar7 + 0x100) = DAT_00840df4;
      *pfVar14 = *pfVar15 * fVar4;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
      dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar20);
      *(float *)((int)lVar8 + 0xc0) = (float)((double)*(float *)((int)lVar8 + 0xc0) - dVar19);
    }
    iVar16 = iVar16 + 1;
    uVar1 = *puVar11;
    lVar8 = lVar8 + 0x10;
    *(undefined4 *)((int)lVar9 + 0x110) = *puVar10;
    *(undefined4 *)((int)lVar9 + 0x114) = uVar1;
    lVar12 = lVar12 + 0x10;
    pfVar15 = pfVar15 + 4;
    lVar7 = lVar7 + 4;
    puVar10 = puVar10 + 2;
    puVar11 = puVar11 + 2;
    lVar9 = lVar9 + 8;
  } while (iVar16 < 4);
  draw::FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  iVar16 = 0;
  pfVar15 = (float *)&DAT_00840db0;
  do {
    pfVar14 = (float *)lVar17;
    if ((iVar16 == 0) || (iVar16 == 2)) {
      *pfVar14 = *pfVar15 * DAT_00840d54;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
    }
    else {
      *pfVar14 = *pfVar15 * DAT_00840d54;
      pfVar14[1] = pfVar15[1] * DAT_00840d54;
      pfVar14[2] = pfVar15[2] * DAT_00840d54;
      pfVar14[3] = pfVar15[3];
      dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar20);
      *(float *)((int)lVar13 + 0xc0) = (float)((double)*(float *)((int)lVar13 + 0xc0) - dVar19);
    }
    iVar16 = iVar16 + 1;
    lVar17 = lVar17 + 0x10;
    pfVar15 = pfVar15 + 4;
    lVar13 = lVar13 + 0x10;
  } while (iVar16 < 4);
  draw::FastDrawQuad(uVar5 - 0xf0,uVar5 - 0x130,0,EffectTexHeaders,9);
  return;
}



//==== 00366d48  ns=Global  size=0x180
// sig: undefined FUN_00366d48(void)
// callers(1): 0030d0a0 mobyupdate_unsorted::UpdateMoby_241
// callees(5): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 00502758 fastfunc::FastDoubleToInt

MobyInstance * FUN_00366d48(undefined4 *param_1,f32 *param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  MobyInstance *pMVar5;
  MobyInstance *pMVar6;
  undefined4 uVar7;
  undefined8 in_LR;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pMVar6 = mobyfunc::CreateMoby(0x19d);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = -1;
    pMVar6->enabled = '\x01';
    pMVar5 = g_heroMobyPtr;
    pMVar6->drawDistance = 0x7e;
    pvVar1 = pMVar6->pVar;
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    uVar3 = pMVar5->color;
    uVar4 = pMVar5->light;
    pMVar6->state = '\x01';
    pMVar6->color = uVar3;
    pMVar6->light = uVar4;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    (pMVar6->pos).x = *param_2;
    (pMVar6->pos).y = param_2[1];
    (pMVar6->pos).z = param_2[2];
    (pMVar6->pos).w = param_2[3];
    *(undefined4 *)((int)pvVar1 + 0x20) = *param_1;
    *(undefined4 *)((int)pvVar1 + 0x24) = param_1[1];
    *(undefined4 *)((int)pvVar1 + 0x28) = param_1[2];
    *(undefined4 *)((int)pvVar1 + 0x2c) = param_1[3];
    auVar9 = loadVectorLeftIndexed(in_LR,0x366d38);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar9 = vectorMultiplyAddFloatingPoint
                       (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
    auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,ZEXT48(pvVar1));
    *(undefined4 *)((uint)pvVar1 & 0xfffffffc) = uVar7;
    uVar7 = fastfunc::FastDoubleToInt((double)(DAT_00840d50 * 1024.0));
    *(undefined4 *)((int)pvVar1 + 4) = uVar7;
    *(undefined4 *)((int)pvVar1 + 0x18) = param_4;
    dVar8 = (double)mobyutil::MB_randRot();
    (pMVar6->rotation).x = (float)dVar8;
    fVar2 = DAT_00840d5c * 0.017453292 * mobyutil::g_FrameTime;
    dVar8 = (double)mobyutil::MB_randRangeFloat(-fVar2,fVar2);
    *(int *)((int)pvVar1 + 8) = (int)dVar8;
    mobyfunc::UpdateMobyTransform(pMVar6);
  }
  return pMVar6;
}



//==== 00366f00  ns=mobyupdate_unsorted  size=0x72c
// sig: undefined UpdateMoby_413(MobyInstance * moby)
// callers(0): 
// callees(13): 00055ac0 stub::STUB_00055ac0_RET_0; 0006d720 RegisterFuncForMoby; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 0010581c mobyutil::SetCollDamIn; 00105c08 mobyutil::CollDamageMobyDirect; 00121740 partupd::SpawnPart_4; 001229a8 partupd::SpawnPart_8; 001268f8 partupd::SpawnPart_21; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 413 */

void mobyupdate_unsorted::UpdateMoby_413(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar10;
  longlong lVar9;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [48];
  undefined4 local_b0 [12];
  longlong local_80;
  
  lVar11 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).x,*(float *)((int)pvVar5 + 0xc));
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  bVar2 = moby->state;
  (moby->rotation).x = (float)dVar12;
  (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x20);
  (moby->pos).y = fVar3 + *(float *)((int)pvVar5 + 0x24);
  (moby->pos).z = fVar4 + *(float *)((int)pvVar5 + 0x28);
  if (bVar2 != 0) {
    if (bVar2 < 2) {
      dVar12 = (double)fastfunc::FastWrapRot
                                 ((float)dVar12,DAT_00840d5c * 0.017453292 * mobyutil::g_FrameTime);
      (moby->rotation).x = (float)dVar12;
      local_120 = *(float *)((int)pvVar5 + 0x20);
      fVar3 = *(float *)((int)pvVar5 + 0x28) * *(float *)((int)pvVar5 + 0x28) +
              local_120 * local_120 +
              *(float *)((int)pvVar5 + 0x24) * *(float *)((int)pvVar5 + 0x24);
      if (SQRT(fVar3) == 0.0) {
        local_114 = *(undefined4 *)((int)pvVar5 + 0x2c);
        local_118 = 0.0;
        local_11c = 0.0;
        local_120 = 0.0;
      }
      else {
        local_118 = 1.0 / SQRT(fVar3);
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_118 = -(fVar3 * local_118 * local_118 - 1.0) * local_118 * 0.5 + local_118;
        local_120 = local_120 * local_118;
        local_11c = *(float *)((int)pvVar5 + 0x24) * local_118;
        local_118 = *(float *)((int)pvVar5 + 0x28) * local_118;
        local_114 = *(undefined4 *)((int)pvVar5 + 0x2c);
      }
      mobyutil::SetCollDamIn(auStack_e0,lVar11,0);
      lVar11 = lVar11 + 0x10;
      iVar10 = stub::STUB_00055ac0_RET_0
                         (lVar11,*(undefined4 *)((int)pvVar5 + 4),0,
                          *(undefined4 *)((int)pvVar5 + 0x18),auStack_e0);
      if (iVar10 == 0) {
        local_110 = 0.0;
        local_10c = 0.0;
        local_108 = 0.0;
        local_104 = 0;
        dVar18 = -1.0;
        dVar17 = 1.0;
        dVar12 = (double)mobyutil::MB_randRangeFloat(-1.0,1.0);
        local_110 = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_10c = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_100 = 0.0;
        local_108 = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        local_fc = 0.0;
        local_f8 = 0.0;
        local_f4 = 0;
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_100 = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_fc = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        dVar12 = (double)mobyutil::MB_randRangeFloat((float)dVar18,(float)dVar17);
        local_f8 = (float)(dVar12 * (double)mobyutil::g_FrameTime);
        if (((moby->enabled != '\0') &&
            (RegisterFuncForMoby(&PTR_M413_00366968_0070c898,moby),
            fVar3 = g_heroPosition.y - (moby->pos).y, fVar4 = g_heroPosition.x - (moby->pos).x,
            fVar8 = g_heroPosition.z - (moby->pos).z,
            SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar3 * fVar3) < 15.0)) &&
           (iVar10 = mobyutil::MB_randInt(2), iVar10 == 0)) {
          dVar12 = (double)animationSpeed;
          uVar20 = 0x40c3880000000000;
          local_80 = (longlong)(int)(dVar12 * 20.5);
          mobyutil::MB_randRange
                    (local_80,dVar12,0x40c3880000000000,(int)(dVar12 * 10.5),(int)(dVar12 * 20.5));
          partupd::SpawnPart_21(uVar20,lVar11,&local_100,0x4f007fff,0x1fffffff);
          iVar10 = mobyutil::MB_randRange(10,0x14);
          iVar10 = (int)(animationSpeed * ((float)(longlong)iVar10 + 0.5));
          local_80 = (longlong)iVar10;
          uVar20 = mobyutil::MB_randRange(100,0x96);
          partupd::SpawnPart_4(lVar11,&local_110,0x2f4f4f4f,0x4f4f4f,iVar10,0x28,uVar20,0);
        }
        iVar10 = fastfunc::FastDecTimerS32(pvVar5);
        if (iVar10 != 0) {
          moby->state = '\x02';
        }
      }
      else {
        if (CollOutput.pMoby != (MobyInstance *)0x0) {
          mobyutil::CollDamageMobyDirect
                    (1.0,CollOutput.pMoby,moby,0x10001,0x10000,&CollOutput.ip.x,&local_120);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      iVar10 = 0;
      dVar12 = 0.0;
      dVar17 = -1.0;
      dVar18 = 1.0;
      dVar19 = 2.0;
      uVar20 = 0x41086a0000000000;
      dVar21 = 30.5;
      dVar22 = 45.5;
      do {
        local_b0[0] = 0x4f008fff;
        local_b0[1] = 0x4f008fff;
        local_b0[2] = 0x4f007fff;
        local_b0[3] = 0x4f006fff;
        local_b0[4] = 0x2fffffff;
        local_b0[5] = 0x2fffffff;
        local_b0[6] = 0x2f005f7f;
        local_b0[7] = 0x2f004f7f;
        local_b0[8] = 0x2f003f7f;
        local_b0[9] = 0x2f00004f;
        local_b0[10] = 0x2f000000;
        local_b0[0xb] = 0x3f000000;
        local_f0 = 0.0;
        local_ec = 0.0;
        local_e8 = 0.0;
        local_e4 = 0;
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_f0 = (float)dVar13;
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_ec = (float)dVar13;
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
        local_e8 = (float)dVar13;
        dVar13 = (double)mobyutil::MB_randRangeFloat((float)dVar12,(float)dVar19);
        dVar16 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
        fVar3 = (float)((double)(float)(dVar13 * (double)mobyutil::g_FrameTime) / dVar16);
        dVar13 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar13 = (double)(local_f0 * fVar3);
        }
        dVar15 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar15 = (double)(local_ec * fVar3);
        }
        dVar14 = dVar12;
        if (dVar12 - dVar16 < 0.0) {
          dVar14 = (double)(local_e8 * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar13 = (double)(local_f0 * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar15 = (double)(local_ec * fVar3);
        }
        if (dVar16 - dVar12 < 0.0) {
          dVar14 = (double)(local_e8 * fVar3);
        }
        local_f0 = (float)dVar13;
        local_ec = (float)dVar15;
        local_e8 = (float)dVar14;
        lVar9 = mobyutil::MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_b0 + (int)(lVar9 << 2));
        lVar9 = mobyutil::MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_b0 + (int)(lVar9 << 2) + 0x18);
        iVar1 = (int)((double)animationSpeed * dVar22);
        local_80 = (longlong)iVar1;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar21),iVar1);
        partupd::SpawnPart_8(uVar20,lVar11 + 0x10,&local_f0,uVar6,uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 4);
      mobyfunc::DeleteMoby(moby);
    }
  }
  return;
}



//==== 0036762c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M416_0036762c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M416_0036762c(void)

{
  DAT_00840e64 = 0x10000;
  return;
}



//==== 00367640  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_416(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 416 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_416(MobyInstance *moby)

{
  return moby;
}



//==== 00367688  ns=mobyupdate_helpers  size=0x680
// sig: undefined M417_00367688(void)
// callers(1): 0031eca8 mobyupdate_helpers::M267_0031eca8
// callees(4): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat; 005026a0 fastfunc::FastSubRots

MobyInstance *
mobyupdate_helpers::M417_00367688
          (double param_1,double param_2,undefined8 param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar13;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar14;
  float *pfVar16;
  longlong lVar15;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0x110;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar10;
  puVar7[0x24] = in_LR;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1b] = unaff_r30;
  puVar7[0x1c] = unaff_r31;
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x18] = unaff_r27;
  puVar7[0x17] = unaff_r26;
  pMVar13 = mobyfunc::CreateMoby(0x1a1);
  if (pMVar13 != (MobyInstance *)0x0) {
    pfVar17 = (float *)pMVar13->pVar;
    dVar27 = 3.1415927410125732;
    dVar20 = (double)mobyutil::MB_randRangeFloat(-3.1415927,3.1415927);
    dVar21 = (double)mobyutil::MB_randRangeFloat((float)param_1,(float)param_2);
    fVar5 = *param_5;
    fVar6 = param_5[1];
    fVar1 = ABS(*param_5);
    fVar2 = ABS(param_5[1]);
    *(float *)((int)puVar7 + 0x74) = fVar1 - fVar2;
    dVar26 = 0.0;
    dVar28 = 0.7853981852531433;
    uVar14 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    fVar5 = fVar1;
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    dVar24 = dVar26;
    if (0.0 < fVar5) {
      lVar11 = uVar10 - 0x100;
      lVar18 = uVar10 - 0x68;
      lVar15 = uVar10 - 0x78;
      lVar19 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar7 + 0xa4) = fVar5;
      *(float *)((int)puVar7 + 0x9c) = fVar5;
      *(float *)(puVar7 + 0x14) = fVar5;
      *(float *)(puVar7 + 0x13) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar5 * fVar5;
        iVar8 = (int)lVar15;
        lVar15 = lVar15 + 8;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar18 = uVar10 - 0x78;
      pfVar16 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar15 = lVar18;
      do {
        fVar5 = *pfVar16;
        fVar2 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar5;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar2;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar11 = lVar12;
      do {
        iVar8 = (int)lVar11;
        iVar9 = (int)lVar18;
        lVar11 = lVar11 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x98)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar1);
    }
    dVar22 = (double)fastfunc::FastSubRots((float)dVar24,(float)dVar20);
    fVar5 = (float)(dVar20 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar20);
    if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
      dVar24 = dVar20;
    }
    fVar6 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar6 = fVar5;
    }
    dVar23 = (double)(float)(-3.141592502593994 - dVar20);
    if ((double)(float)(-3.141592502593994 - dVar20) - dVar24 < 0.0) {
      dVar23 = dVar24;
    }
    fVar2 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
      fVar2 = fVar6;
    }
    dVar20 = (double)(float)(dVar23 * dVar23);
    fVar3 = fVar2 * fVar2;
    dVar25 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar23));
    fVar6 = fVar3 * fVar3 * fVar2;
    dVar24 = (double)(float)(dVar20 * dVar25);
    fVar1 = fVar3 * fVar6;
    fVar5 = (float)((double)((float)(dVar20 * dVar24) * 2.601887e-06 +
                            (float)(dVar24 * -0.0001980741071747616 +
                                   (double)(float)(dVar25 * 0.008333025500178337 +
                                                  (double)(float)((double)(float)(dVar20 * dVar23) *
                                                                  -0.16666656732559204 + dVar23))))
                   * dVar21);
    fVar6 = (float)((double)(fVar3 * fVar1 * 2.601887e-06 +
                            fVar1 * -0.0001980741 +
                            fVar6 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) * dVar21);
    (pMVar13->pos).y = fVar5;
    (pMVar13->pos).x = fVar6;
    (pMVar13->pos).z = 0.0;
    dVar21 = (double)mobyutil::g_FrameTime;
    dVar20 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5);
    if (dVar20 == dVar26) {
      *pfVar17 = fVar6;
      pfVar17[1] = (pMVar13->pos).y;
      pfVar17[2] = (pMVar13->pos).z;
      fVar5 = (pMVar13->pos).w;
      pfVar17[2] = 0.0;
      pfVar17[1] = 0.0;
      *pfVar17 = 0.0;
      dVar20 = dVar26;
      dVar24 = dVar26;
    }
    else {
      fVar5 = (float)((double)(float)(dVar21 * dVar22) / dVar20);
      dVar20 = (double)(fVar6 * fVar5);
      *pfVar17 = fVar6 * fVar5;
      fVar6 = (pMVar13->pos).y * fVar5;
      dVar24 = (double)fVar6;
      pfVar17[1] = fVar6;
      pfVar17[2] = (pMVar13->pos).z * fVar5;
      fVar5 = (pMVar13->pos).w;
    }
    pfVar17[3] = fVar5;
    fVar2 = param_5[1];
    fVar1 = *param_5;
    fVar6 = (float)(dVar27 - dVar22);
    fVar5 = param_5[2];
    pfVar17[2] = 0.0;
    dVar27 = (double)SQRT(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar5 = (float)((double)(float)(dVar21 * (double)(fVar6 * fVar6 * 0.25)) / dVar27);
    dVar22 = (double)(fVar2 * fVar5);
    dVar23 = (double)(fVar1 * fVar5);
    dVar21 = dVar26;
    if (dVar26 - dVar27 < 0.0) {
      dVar21 = dVar22;
    }
    dVar25 = dVar26;
    if (dVar26 - dVar27 < 0.0) {
      dVar25 = dVar23;
    }
    if (dVar27 - dVar26 < 0.0) {
      dVar21 = dVar22;
    }
    if (dVar27 - dVar26 < 0.0) {
      dVar25 = dVar23;
    }
    pfVar17[1] = (float)(dVar24 + dVar21);
    *pfVar17 = (float)(dVar20 + dVar25);
    fVar5 = (pMVar13->pos).x + *param_4;
    (pMVar13->pos).x = fVar5;
    fVar2 = (pMVar13->pos).y + param_4[1];
    (pMVar13->pos).y = fVar2;
    fVar1 = (pMVar13->pos).z + param_4[2];
    (pMVar13->pos).z = fVar1;
    (pMVar13->pos).x = fVar5 + *param_5;
    (pMVar13->pos).y = fVar2 + param_5[1];
    (pMVar13->pos).z = fVar1 + param_5[2];
    *pfVar17 = *pfVar17 * 0.35;
    pfVar17[1] = pfVar17[1] * 0.35;
    pfVar17[2] = pfVar17[2] * 0.35;
    pMVar13->unk58 = pMVar13->unk58 * 0.5;
    fVar2 = *pfVar17;
    fVar1 = pfVar17[1];
    dVar27 = ABS((double)*pfVar17);
    dVar20 = ABS((double)pfVar17[1]);
    *(float *)(puVar7 + 0xe) = (float)(dVar27 - dVar20);
    fVar5 = pMVar13->scale;
    uVar14 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar1 >> 0x1d) & 4
    ;
    dVar21 = dVar27;
    if ((double)*(float *)(puVar7 + 0xe) - dVar26 < 0.0) {
      dVar21 = dVar20;
    }
    fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
    if ((double)*(float *)(puVar7 + 0xe) - dVar26 < 0.0) {
      dVar20 = dVar27;
    }
    fVar1 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (dVar26 < dVar21) {
      lVar11 = uVar10 - 0x100;
      lVar15 = uVar10 - 0x98;
      lVar18 = uVar10 - 0x88;
      lVar19 = 2;
      fVar3 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)((int)puVar7 + 0x7c) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar3;
      *(float *)(puVar7 + 0xf) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar11 + 0x78) = *(float *)((int)lVar11 + 0x68) * fVar3 * fVar3;
        iVar8 = (int)lVar15;
        lVar11 = lVar11 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar18 = uVar10 - 0x98;
      pfVar17 = (float *)&DAT_007358e0;
      lVar11 = lVar12;
      lVar15 = lVar18;
      do {
        fVar3 = *pfVar17;
        fVar4 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar11 + 0x78) = *(float *)((int)lVar11 + 0x78) * fVar3;
        lVar11 = lVar11 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar11 = 2;
      do {
        iVar8 = (int)lVar12;
        iVar9 = (int)lVar18;
        lVar12 = lVar12 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0x78)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar26 = (double)((float)(dVar26 + dVar28) * fVar2 + fVar1);
    }
    (pMVar13->rotation).z = (float)dVar26;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->scale = fVar5 * (fVar6 * 2.0 + 1.0);
    mobyfunc::UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}



//==== 00367d10  ns=mobyupdate_unsorted  size=0xb0
// sig: undefined UpdateMoby_417(MobyInstance * moby)
// callers(0): 
// callees(1): 000efb38 mobyfunc::DeleteMoby

/* Moby 417 */

void mobyupdate_unsorted::UpdateMoby_417(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar1;
  (moby->pos).y = (moby->pos).y + pfVar1[1];
  (moby->pos).z = (moby->pos).z + pfVar1[2];
  fVar2 = DAT_0071f408 * -0.01999998 + 1.0;
  *pfVar1 = *pfVar1 * fVar2;
  pfVar1[1] = pfVar1[1] * fVar2;
  pfVar1[2] = pfVar1[2] * fVar2;
  if ((moby->field43_0x70 & 2U) != 0) {
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 00367dc0  ns=mobyupdate_unsorted  size=0x4
// sig: undefined UpdateMoby_419(MobyInstance * moby)
// callers(0): 
// callees(0): 

/* Moby 419 */

MobyInstance * mobyupdate_unsorted::UpdateMoby_419(MobyInstance *moby)

{
  return moby;
}



//==== 00367dc4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M420_00367dc4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M420_00367dc4(void)

{
  DAT_00840edc = 0x10000;
  return;
}



//==== 00367de0  ns=mobyupdate_unsorted  size=0x15c
// sig: undefined UpdateMoby_420(MobyInstance * moby)
// callers(0): 
// callees(2): 000fcc68 mobyutil::MB_randRot; 0015d12c sound::PlayMobySound

/* Moby 420 */

undefined4 * mobyupdate_unsorted::UpdateMoby_420(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  undefined4 *puVar8;
  byte in_cr6;
  double dVar9;
  undefined1 auVar10 [16];
  
  piVar2 = (int *)moby->pVar;
  fVar1 = (moby->pos).z;
  if (moby->state == '\0') {
    (moby->rotation).x = 1.5707964;
    dVar9 = (double)mobyutil::MB_randRot();
    (moby->rotation).z = (float)dVar9;
    moby->state = '\x01';
    fVar1 = (moby->pos).z + 0.1;
    (moby->pos).z = fVar1;
  }
  pMVar7 = MobyInstance;
  iVar3 = *piVar2;
  if (MobyInstance[iVar3].state == '\0') {
    puVar8 = (undefined4 *)0x40;
    moby->drawDistance = 0x40;
  }
  else {
    fVar5 = MobyInstance[iVar3].pos.y - (moby->pos).y;
    fVar6 = MobyInstance[iVar3].pos.x - (moby->pos).x;
    fVar1 = MobyInstance[iVar3].pos.z - fVar1;
    puVar8 = &DAT_00367dd8;
    if (SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) < 0.5) {
      puVar8 = (undefined4 *)0x32;
      auVar4 = ZEXT416(0xfffffff0);
      auVar10 = loadVectorLeftIndexed(0x32,(longlong)(int)moby);
      auVar10 = vectorShiftRightAlgebraicWord
                          (auVar10,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar4 = ZEXT416(0);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
      vectorCompareEqualToFloatingPoint
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                 auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        iVar3 = *piVar2;
        moby->drawDistance = 0;
        *(int *)((int)pMVar7[iVar3].pVar + 0x14) = *(int *)((int)pMVar7[iVar3].pVar + 0x14) + 1;
        puVar8 = (undefined4 *)sound::PlayMobySound(0,0,moby);
      }
    }
  }
  return puVar8;
}



//==== 00367f3c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M421_00367f3c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M421_00367f3c(void)

{
  DAT_00840f4c = 0x10000;
  return;
}



//==== 00367f78  ns=mobyupdate_unsorted  size=0x904
// sig: undefined UpdateMoby_421(MobyInstance * moby)
// callers(0): 
// callees(6): 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 001268f8 partupd::SpawnPart_21; 00502578 fastfunc::FastWrapRot

/* Moby 421 */

void mobyupdate_unsorted::UpdateMoby_421(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 in_r7;
  byte bVar11;
  undefined8 in_LR;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 local_90 [32];
  
  lVar9 = (longlong)(int)moby;
  bVar3 = moby->state;
  piVar4 = (int *)moby->pVar;
  bVar11 = (bVar3 == 1) << 1;
  if (bVar3 == 0) {
    if (*piVar4 == 1) {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar9,1,0,0);
      }
      moby->state = '\x01';
      (moby->pos).z = (moby->pos).z + 1.0;
    }
    else {
      if (moby->animationId != '\x01') {
        mobyutil::MB_SetAnimation(lVar9,1,0,0);
      }
      moby->state = '\x02';
      (moby->pos).z = (moby->pos).z + 0.5;
    }
  }
  else if (bVar3 < 2) {
    mobyfunc::GetBonePosition(lVar9,0,auStack_160);
    mobyfunc::GetBonePosition(lVar9,1,auStack_150);
    mobyfunc::GetBonePosition(lVar9,2,auStack_140);
    mobyfunc::GetBonePosition(lVar9,3,auStack_130);
    mobyfunc::GetBonePosition(lVar9,4,auStack_120);
    mobyfunc::GetBonePosition(lVar9,5,auStack_110);
    dVar14 = 10.5;
    uVar13 = 0x40cd4c0000000000;
    dVar12 = 20.5;
    uVar10 = mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
    partupd::SpawnPart_21(uVar13,auStack_160,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = mobyutil::MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    partupd::SpawnPart_21(uVar13,auStack_150,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = mobyutil::MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    partupd::SpawnPart_21(uVar13,auStack_140,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = mobyutil::MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    partupd::SpawnPart_21(uVar13,auStack_130,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar13 = 0x40c3880000000000;
    iVar1 = (int)((double)animationSpeed * dVar14);
    iVar2 = (int)((double)animationSpeed * dVar12);
    uVar10 = mobyutil::MB_randRange(iVar2,iVar1,0x40c3880000000000,iVar1,iVar2);
    partupd::SpawnPart_21(uVar13,auStack_120,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    uVar10 = mobyutil::MB_randRange
                       ((int)((double)animationSpeed * dVar14),
                        (int)((double)animationSpeed * dVar12));
    partupd::SpawnPart_21(uVar13,auStack_110,local_100,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
    dVar12 = (double)fastfunc::FastWrapRot((moby->rotation).z,mobyutil::g_FrameTime * 0.5235988);
    (moby->rotation).z = (float)dVar12;
    fVar5 = g_heroPosition.y - (moby->pos).y;
    fVar6 = g_heroPosition.x - (moby->pos).x;
    fVar7 = g_heroPosition.z - (moby->pos).z;
    if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 2.0) {
      mobyfunc::DeleteMoby(moby);
    }
  }
  else if (bVar3 < 3) {
    auVar15 = ZEXT416(0xfffffff0);
    auVar16 = loadVectorLeftIndexed(0x32,lVar9);
    auVar15 = vectorShiftRightAlgebraicWord
                        (auVar16,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar15 = loadVectorLeftIndexed(in_LR,0x367f50);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
               auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    if (bVar3 != 1) {
      mobyfunc::GetBonePosition(lVar9,0,auStack_f0);
      mobyfunc::GetBonePosition(lVar9,1,auStack_e0);
      mobyfunc::GetBonePosition(lVar9,2,auStack_d0);
      mobyfunc::GetBonePosition(lVar9,3,auStack_c0);
      mobyfunc::GetBonePosition(lVar9,4,auStack_b0);
      mobyfunc::GetBonePosition(lVar9,5,auStack_a0);
      dVar14 = 10.5;
      uVar13 = 0x40cd4c0000000000;
      dVar12 = 20.5;
      uVar10 = mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
      partupd::SpawnPart_21(uVar13,auStack_f0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = mobyutil::MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      partupd::SpawnPart_21(uVar13,auStack_e0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = mobyutil::MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      partupd::SpawnPart_21(uVar13,auStack_d0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = mobyutil::MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      partupd::SpawnPart_21(uVar13,auStack_c0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar13 = 0x40c3880000000000;
      iVar1 = (int)((double)animationSpeed * dVar14);
      iVar2 = (int)((double)animationSpeed * dVar12);
      uVar10 = mobyutil::MB_randRange(iVar2,iVar1,0x40c3880000000000,iVar1,iVar2);
      partupd::SpawnPart_21(uVar13,auStack_b0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      uVar10 = mobyutil::MB_randRange
                         ((int)((double)animationSpeed * dVar14),
                          (int)((double)animationSpeed * dVar12));
      partupd::SpawnPart_21(uVar13,auStack_a0,local_90,0x4f007fff,0x1fffffff,in_r7,uVar10,1);
      auVar16 = loadVectorLeftIndexed(0x32,lVar9);
    }
    pMVar8 = MobyInstance;
    iVar1 = piVar4[1];
    auVar15 = ZEXT416(0xfffffff0);
    auVar15 = vectorShiftRightWord
                        (auVar16,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
    auVar15 = auVar15 >> 0x60 & (undefined1  [16])0xffffffff;
    if (MobyInstance[iVar1].state == '\0') {
      moby->drawDistance = 0x40;
    }
    else {
      fVar5 = MobyInstance[iVar1].pos.y - (moby->pos).y;
      fVar6 = MobyInstance[iVar1].pos.x - (moby->pos).x;
      fVar7 = MobyInstance[iVar1].pos.z - (moby->pos).z;
      if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 0.6) {
        auVar17 = ZEXT416(0xfffffff0);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord
                            (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,auVar17);
        auVar17 = vectorShiftRightAlgebraicWord(auVar15,auVar17);
        auVar15 = ZEXT416(0);
        auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar17 = auVar17 >> 0x60 & (undefined1  [16])0xffffffff;
        vectorCompareEqualToFloatingPoint
                  (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                   auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
        if ((bool)(bVar11 >> 1 & 1)) {
          iVar1 = piVar4[1];
          moby->drawDistance = 0;
          *(int *)((int)pMVar8[iVar1].pVar + 0x18) = *(int *)((int)pMVar8[iVar1].pVar + 0x18) + 1;
        }
      }
    }
  }
  return;
}



//==== 0036887c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M422_0036887c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M422_0036887c(void)

{
  DAT_00840fbc = 0x10000;
  return;
}



//==== 003688a8  ns=mobyupdate_unsorted  size=0x3dc
// sig: undefined UpdateMoby_422(MobyInstance * moby)
// callers(0): 
// callees(4): 0007b310 help::Help_QueueMessage; 00104214 mobyutil::MB_CountActiveMobysByGroup; 00110b70 mobyutil::MB_IsPntInCuboid; 0011b728 mobyutil::MB_UnlockSkillPoint
// strings: 00a1000c: 'None'

/* Moby 422 */

uint mobyupdate_unsorted::UpdateMoby_422(MobyInstance *moby)

{
  int *piVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ushort uVar7;
  uint uVar6;
  
  piVar1 = (int *)moby->pVar;
  iVar4 = mobyutil::MB_CountActiveMobysByGroup(piVar1[3],0xffffffffffffffff);
  if (iVar4 == 0) {
    mobyutil::MB_UnlockSkillPoint(0x14);
  }
  if (CHAR_ARRAY_00a1000c._872_2_ == 0) {
    if (g_heroState == THRUSTER_PACK_HOVER) {
      CHAR_ARRAY_00a1000c[0x368] = '\0';
      CHAR_ARRAY_00a1000c[0x369] = '\x01';
    }
    iVar4 = (int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5));
    if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._874_2_ < iVar4 / 600) {
      sVar2 = (short)(iVar4 >> 0x1f);
      CHAR_ARRAY_00a1000c._874_2_ =
           ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
    }
    CHAR_ARRAY_00a1000c._876_4_ = CHAR_ARRAY_00a1000c._876_4_ | 1 << (Level & 0x3f) | 0x80000000;
    iVar4 = mobyutil::MB_IsPntInCuboid(&g_heroPosition,(longlong)*piVar1);
    if (iVar4 != 0) {
      help::Help_QueueMessage(STR_YOUR_THRUSTER_PACK_UPGRADE_GIVES_0x2EE3,0x6d);
    }
  }
  if (((CHAR_ARRAY_00a1000c._880_2_ == 0) ||
      (((ushort)CHAR_ARRAY_00a1000c._880_2_ < 2 &&
       ((int)(animationSpeed * 72000.5) <
        (int)((int)(animationSpeed * ((float)(longlong)update::g_GameFrameCount + 0.5)) +
             (uint)(ushort)CHAR_ARRAY_00a1000c._882_2_ * -600))))) &&
     (g_heroState == THRUSTER_PACK_HOVER)) {
    iVar5 = 0;
    iVar4 = piVar1[1] + 1;
    piVar1[1] = iVar4;
    if (((g_downButtons & (R2|L2)) != 0) &&
       (0x3e99999a <
        (int)(((uint)((int)hero::g_heroPadMagnitude >> 0x1f) >> 1 ^ hero::g_heroPadMagnitude) -
             ((int)hero::g_heroPadMagnitude >> 0x1f)))) {
      iVar5 = piVar1[2] + 1;
    }
    piVar1[2] = iVar5;
    uVar7 = CHAR_ARRAY_00a1000c._880_2_;
    fVar3 = animationSpeed;
    if ((int)(animationSpeed * 40.5) < iVar5) {
      piVar1[1] = 0;
      if (uVar7 != -1) {
        CHAR_ARRAY_00a1000c._880_2_ = uVar7 + 1;
        uVar7 = CHAR_ARRAY_00a1000c._880_2_;
      }
      iVar4 = (int)(fVar3 * ((float)(longlong)update::g_GameFrameCount + 0.5));
      if ((int)(uint)(ushort)CHAR_ARRAY_00a1000c._882_2_ < iVar4 / 600) {
        sVar2 = (short)(iVar4 >> 0x1f);
        CHAR_ARRAY_00a1000c._882_2_ =
             ((short)(iVar4 / 600) + sVar2) - ((short)((short)(iVar4 / 0x2580000) + sVar2) >> 0xf);
      }
      CHAR_ARRAY_00a1000c._884_4_ = CHAR_ARRAY_00a1000c._884_4_ | 1 << (Level & 0x3f) | 0x80000000;
      iVar4 = piVar1[1];
    }
    if ((int)((uint)uVar7 * (int)(fVar3 * 7200.5) + (int)(fVar3 * 1800.5)) < iVar4) {
      help::Help_QueueMessage(STR_TRY_USING__OR_0x2EE4,0x6e);
    }
  }
  uVar6 = (uint)UnlockableItems.hydroPack;
  if ((UnlockableItems.hydroPack != '\0') &&
     (uVar6 = (uint)(ushort)CHAR_ARRAY_00a1000c._496_2_, CHAR_ARRAY_00a1000c._496_2_ == 0)) {
    uVar6 = help::Help_QueueMessage(STR_YOUR_HYDRO_PACK_WILL_AUTOMATICALLY_0x2EE0,0x3e);
  }
  return uVar6;
}



//==== 00368c84  ns=mobyupdate_helpers  size=0x14
// sig: undefined M424_00368c84(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M424_00368c84(void)

{
  DAT_0084102c = 0x10000;
  return;
}



//==== 00368c98  ns=mobyupdate_helpers  size=0x12c
// sig: undefined M424_00368c98(void)
// callers(1): 00369d38 mobyupdate_unsorted::UpdateMoby_424
// callees(0): 

void mobyupdate_helpers::M424_00368c98(int param_1)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *pfVar20;
  Spline *pSVar21;
  longlong lVar22;
  
  pSVar21 = Splines[*(int *)(*(int *)(param_1 + 0x78) + 0x8c)];
  if (pSVar21->cnt == 8) {
    pfVar20 = (float *)&DAT_00841050;
    lVar22 = 8;
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xd0);
    fVar3 = *(float *)(param_1 + 0xe0);
    fVar4 = *(float *)(param_1 + 0xc4);
    fVar5 = *(float *)(param_1 + 0xd4);
    fVar6 = *(float *)(param_1 + 0xe4);
    fVar7 = *(float *)(param_1 + 200);
    fVar8 = *(float *)(param_1 + 0xd8);
    fVar9 = *(float *)(param_1 + 0xe8);
    fVar10 = *(float *)(param_1 + 0xcc);
    fVar11 = *(float *)(param_1 + 0xdc);
    fVar12 = *(float *)(param_1 + 0xec);
    fVar13 = *(float *)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0x18);
    do {
      fVar16 = pfVar20[1];
      fVar17 = *pfVar20;
      fVar18 = pfVar20[2];
      fVar19 = pfVar20[3];
      pfVar20 = pfVar20 + 4;
      pSVar21->points[0].x = fVar16 * fVar2 + fVar18 * fVar3 + fVar17 * fVar1 + fVar13;
      pSVar21->points[0].y = fVar16 * fVar5 + fVar18 * fVar6 + fVar17 * fVar4 + fVar14;
      pSVar21->points[0].z = fVar16 * fVar8 + fVar18 * fVar9 + fVar17 * fVar7 + fVar15;
      pSVar21->points[0].w = fVar18 * fVar12 + fVar17 * fVar10 + fVar16 * fVar11 + fVar19;
      pSVar21 = (Spline *)pSVar21->points;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return;
}



//==== 00368df8  ns=mobyupdate_helpers  size=0x2b8
// sig: undefined M424_00368df8(void)
// callers(1): 00369d38 mobyupdate_unsorted::UpdateMoby_424
// callees(1): 00502578 fastfunc::FastWrapRot

void mobyupdate_helpers::M424_00368df8(int param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
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
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x7c);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xec),mobyutil::g_FrameTime * 2.0943952);
  *(float *)(iVar2 + 0xec) = (float)dVar3;
  dVar13 = 3.141592502593994;
  dVar12 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar10 = 0.008333025500178337;
  dVar9 = -0.0001980741071747616;
  dVar8 = 2.601886990305502e-06;
  dVar5 = (double)(float)(3.141592502593994 - dVar3);
  if (dVar3 - (double)(float)(3.141592502593994 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(-3.141592502593994 - dVar3);
  if ((double)(float)(-3.141592502593994 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar6 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar3 = (double)(float)(dVar5 * dVar6);
  *(float *)(param_1 + 0x18) =
       ((float)(dVar5 * dVar3) * 2.601887e-06 +
       (float)(dVar3 * -0.0001980741071747616 +
              (double)(float)(dVar6 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar5 * dVar4) * -0.16666656732559204 +
                                            dVar4)))) * 0.25 + *(float *)(param_1 + 0x18);
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xf0),mobyutil::g_FrameTime * 1.6929693);
  *(float *)(iVar2 + 0xf0) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar4 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar4 = dVar5;
  }
  dVar7 = 0.0872664600610733;
  dVar5 = (double)(float)(dVar4 * dVar4);
  dVar3 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar4));
  dVar6 = (double)(float)(dVar5 * dVar3);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x44),
                             (float)((double)(float)(dVar5 * dVar6) * dVar8 +
                                    (double)(float)(dVar6 * dVar9 +
                                                   (double)(float)(dVar3 * dVar10 +
                                                                  (double)(float)((double)(float)(
                                                  dVar5 * dVar4) * dVar11 + dVar4)))) * 0.08726646);
  *(float *)(param_1 + 0x44) = (float)dVar5;
  dVar3 = (double)fastfunc::FastWrapRot(*(float *)(iVar2 + 0xf4),mobyutil::g_FrameTime * 0.9250245);
  *(float *)(iVar2 + 0xf4) = (float)dVar3;
  dVar5 = (double)(float)(dVar13 - dVar3);
  if (dVar3 - (double)(float)(dVar13 - dVar3) < 0.0) {
    dVar5 = dVar3;
  }
  dVar13 = (double)(float)(dVar12 - dVar3);
  if ((double)(float)(dVar12 - dVar3) - dVar5 < 0.0) {
    dVar13 = dVar5;
  }
  dVar5 = (double)(float)(dVar13 * dVar13);
  dVar12 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar13));
  dVar3 = (double)(float)(dVar5 * dVar12);
  dVar5 = (double)fastfunc::FastWrapRot
                            (*(float *)(param_1 + 0x40),
                             (float)((double)(float)((double)(float)(dVar5 * dVar3) * dVar8 +
                                                    (double)(float)(dVar3 * dVar9 +
                                                                   (double)(float)(dVar12 * dVar10 +
                                                                                  (double)(float)((
                                                  double)(float)(dVar5 * dVar13) * dVar11 + dVar13))
                                                  )) * dVar7));
  *(float *)(param_1 + 0x40) = (float)dVar5;
  uVar1 = (int)*(uint *)(param_1 + 0x44) >> 0x1f;
  iVar2 = (uVar1 >> 1 ^ *(uint *)(param_1 + 0x44)) - uVar1;
  if (dVar5 <= 0.1745329201221466) {
    if (dVar5 < -0.1745329201221466) {
      *(undefined4 *)(param_1 + 0x40) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0x3e32b8c2;
  }
  if (iVar2 < 0x3e32b8c3) {
    if (iVar2 < -0x3e32b8c2) {
      *(undefined4 *)(param_1 + 0x44) = 0xbe32b8c2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0x3e32b8c2;
  }
  return;
}



//==== 003690c0  ns=mobyupdate_helpers  size=0x9cc
// sig: undefined M424_003690c0(void)
// callers(1): 00369d38 mobyupdate_unsorted::UpdateMoby_424
// callees(0): 

void mobyupdate_helpers::M424_003690c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Spline *pSVar10;
  Spline *pSVar11;
  Spline *pSVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  LevelId LVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  float *pfVar25;
  uint uVar26;
  Vec4 *pVVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  longlong lVar28;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x100;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar19;
  iVar7 = *(int *)(param_1 + 0x78);
  pSVar10 = Splines[*(int *)(iVar7 + 0x88)];
  pSVar11 = Splines[*(int *)(iVar7 + 0x80)];
  pVVar27 = pSVar10->points + pSVar10->cnt + -1;
  fVar1 = g_heroPosition.y - pSVar11->points[0].y;
  fVar2 = g_heroPosition.y - pVVar27->y;
  fVar4 = g_heroPosition.x - pVVar27->x;
  fVar5 = g_heroPosition.x - pSVar11->points[0].x;
  fVar15 = g_heroPosition.z - pVVar27->z;
  fVar16 = g_heroPosition.z - pSVar11->points[0].z;
  pSVar12 = Splines[*(int *)(iVar7 + 0x84)];
  fVar3 = g_heroPosition.y - pSVar12->points[0].y;
  fVar14 = g_heroPosition.x - pSVar12->points[0].x;
  fVar5 = SQRT(fVar16 * fVar16 + fVar5 * fVar5 + fVar1 * fVar1);
  fVar2 = SQRT(fVar15 * fVar15 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar1 = g_heroPosition.z - pSVar12->points[0].z;
  uVar8 = *(uint *)(iVar7 + 0x100);
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1e] = unaff_r30;
  puVar13[0x1d] = unaff_r29;
  fVar4 = fVar2;
  if (fVar5 < fVar2) {
    fVar4 = fVar5;
  }
  uVar26 = (uint)(fVar5 < fVar2);
  if (SQRT(fVar1 * fVar1 + fVar14 * fVar14 + fVar3 * fVar3) < fVar4) {
    uVar26 = 3;
  }
  if (uVar8 != uVar26) {
    *(uint *)(iVar7 + 0x100) = uVar26;
    uVar6 = *(ushort *)(param_1 + 0x34);
    fVar1 = 0.0;
    *(undefined4 *)(iVar7 + 0xe4) = 0;
    *(undefined4 *)(iVar7 + 0x104) = 0x3f800000;
    iVar9 = *(int *)(param_1 + 0x24);
    *(ushort *)(param_1 + 0x34) = uVar6 & 0xfffe;
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(undefined4 *)(iVar7 + 0x124) = 1;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar9 + 0x10);
    if (uVar26 < 2) {
      if (uVar26 == 0) {
        iVar9 = pSVar10->cnt;
        pVVar27 = pSVar10->points + iVar9 + -1;
        fVar2 = pVVar27->x;
        *(float *)(iVar7 + 0x60) = fVar2;
        fVar3 = pVVar27->y;
        *(float *)(iVar7 + 100) = fVar3;
        *(float *)(iVar7 + 0x68) = pVVar27->z;
        *(float *)(iVar7 + 0x6c) = pVVar27->w;
        fVar2 = pSVar10->points[iVar9 + -2].x - fVar2;
        fVar3 = pSVar10->points[iVar9 + -2].y - fVar3;
        fVar4 = ABS(fVar2);
        fVar5 = ABS(fVar3);
        *(float *)((int)puVar13 + 0x54) = fVar2;
        *(float *)(puVar13 + 0xb) = fVar3;
        *(float *)((int)puVar13 + 0x5c) = fVar4 - fVar5;
        uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x54) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x5c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0xb) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)((int)puVar13 + 0x54));
        if (*(float *)((int)puVar13 + 0x5c) - 0.0 < 0.0) {
          fVar2 = fVar5;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar5 = ABS(*(float *)(puVar13 + 0xb));
        if (*(float *)((int)puVar13 + 0x5c) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar2) {
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)(puVar13 + 0x18) = fVar2;
          *(float *)((int)puVar13 + 0xc4) = fVar2;
          *(float *)(puVar13 + 0x19) = fVar2;
          *(float *)((int)puVar13 + 0xcc) = fVar2;
          lVar20 = uVar19 - 0xf0;
          fVar2 = fVar5 * fVar5;
          lVar22 = uVar19 - 0x40;
          lVar24 = uVar19 - 0x30;
          *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar5;
          *(float *)(puVar13 + 0x19) = *(float *)(puVar13 + 0x19) * fVar2;
          *(float *)((int)puVar13 + 0xcc) = *(float *)((int)puVar13 + 0xcc) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xb0) * fVar2 * fVar2;
            iVar9 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar19 - 0x40;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar22 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0xc0) = *(float *)((int)lVar20 + 0xc0) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar9 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar9 + 0xc0) + *(float *)(iVar17 + 4) +
                    *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
        }
        LVar18 = Level;
        *(float *)(iVar7 + 0x78) = fVar1;
        *(undefined4 *)(iVar7 + 0xe4) = 0x3f800000;
        *(undefined4 *)(iVar7 + 0x104) = 0;
        if (g_LevelFlags[LVar18][*(int *)(iVar7 + 0x98)] == -1) {
          *(Spline **)(iVar7 + 0x120) = pSVar12;
        }
        else if (g_LevelFlags[LVar18][*(int *)(iVar7 + 0x94)] == -1) {
          *(Spline **)(iVar7 + 0x120) = pSVar11;
        }
        else {
          fVar1 = *(float *)(param_1 + 0x14) - g_heroPosition.y;
          fVar2 = *(float *)(param_1 + 0x10) - g_heroPosition.x;
          if ((32.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (worldUpdateTime < 5)) {
            *(undefined1 *)(param_1 + 0x31) = 0;
            *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) | 1;
            *(undefined4 *)(iVar7 + 0x124) = 0;
            *(undefined4 *)(param_1 + 0x94) = 0;
          }
        }
      }
      else {
        fVar2 = pSVar11->points[0].x;
        *(float *)(iVar7 + 0x60) = fVar2;
        fVar3 = pSVar11->points[0].y;
        *(float *)(iVar7 + 100) = fVar3;
        *(float *)(iVar7 + 0x68) = pSVar11->points[0].z;
        *(float *)(iVar7 + 0x6c) = pSVar11->points[0].w;
        fVar2 = pSVar11->points[1].x - fVar2;
        fVar3 = pSVar11->points[1].y - fVar3;
        fVar4 = ABS(fVar2);
        fVar5 = ABS(fVar3);
        *(float *)(puVar13 + 9) = fVar2;
        *(float *)((int)puVar13 + 0x4c) = fVar3;
        *(float *)(puVar13 + 10) = fVar4 - fVar5;
        uVar23 = (ulonglong)(*(uint *)(puVar13 + 9) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 10) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x4c) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar13 + 9));
        if (*(float *)(puVar13 + 10) - 0.0 < 0.0) {
          fVar2 = fVar5;
        }
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
        fVar5 = ABS(*(float *)((int)puVar13 + 0x4c));
        if (*(float *)(puVar13 + 10) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
        if (0.0 < fVar2) {
          lVar28 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)(puVar13 + 0x14) = fVar2;
          *(float *)((int)puVar13 + 0xa4) = fVar2;
          *(float *)(puVar13 + 0x15) = fVar2;
          *(float *)((int)puVar13 + 0xac) = fVar2;
          lVar24 = uVar19 - 0xf0;
          fVar2 = fVar5 * fVar5;
          lVar20 = uVar19 - 0x60;
          lVar22 = uVar19 - 0x50;
          *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar5;
          *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar2;
          *(float *)((int)puVar13 + 0xac) = *(float *)((int)puVar13 + 0xac) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar24 + 0xa0) = *(float *)((int)lVar24 + 0x90) * fVar2 * fVar2;
            iVar9 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar19 - 0x60;
          pfVar25 = (float *)&DAT_007358e0;
          lVar20 = lVar21;
          lVar22 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar20 + 0xa0) = *(float *)((int)lVar20 + 0xa0) * fVar2;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
            lVar22 = lVar22 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar20 = 2;
          do {
            iVar9 = (int)lVar21;
            lVar21 = lVar21 + 0x10;
            iVar17 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar9 + 0xa0) + *(float *)(iVar17 + 4) +
                    *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
        }
        *(float *)(iVar7 + 0x78) = fVar1;
        *(Spline **)(iVar7 + 0x120) = pSVar11;
      }
    }
    else if (uVar26 < 3) {
      fVar2 = pSVar10->points[0].x;
      *(float *)(iVar7 + 0x60) = fVar2;
      fVar3 = pSVar10->points[0].y;
      *(float *)(iVar7 + 100) = fVar3;
      *(float *)(iVar7 + 0x68) = pSVar10->points[0].z;
      *(float *)(iVar7 + 0x6c) = pSVar10->points[0].w;
      fVar2 = pSVar10->points[1].x - fVar2;
      fVar3 = pSVar10->points[1].y - fVar3;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)((int)puVar13 + 0x3c) = fVar2;
      *(float *)(puVar13 + 8) = fVar3;
      *(float *)((int)puVar13 + 0x44) = fVar4 - fVar5;
      uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0x3c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x44) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 8) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)((int)puVar13 + 0x3c));
      if (*(float *)((int)puVar13 + 0x44) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = ABS(*(float *)(puVar13 + 8));
      if (*(float *)((int)puVar13 + 0x44) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar13 + 0x10) = fVar2;
        *(float *)((int)puVar13 + 0x84) = fVar2;
        *(float *)(puVar13 + 0x11) = fVar2;
        *(float *)((int)puVar13 + 0x8c) = fVar2;
        lVar24 = uVar19 - 0xf0;
        fVar2 = fVar5 * fVar5;
        lVar20 = uVar19 - 0x80;
        lVar22 = uVar19 - 0x70;
        *(float *)((int)puVar13 + 0x84) = *(float *)((int)puVar13 + 0x84) * fVar5;
        *(float *)(puVar13 + 0x11) = *(float *)(puVar13 + 0x11) * fVar2;
        *(float *)((int)puVar13 + 0x8c) = *(float *)((int)puVar13 + 0x8c) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar24 + 0x80) = *(float *)((int)lVar24 + 0x70) * fVar2 * fVar2;
          iVar9 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar24 = uVar19 - 0x80;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar22 = lVar24;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x80) = *(float *)((int)lVar20 + 0x80) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar9 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar9 + 0x80) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                  + *(float *)(iVar17 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
      }
      *(float *)(iVar7 + 0x78) = fVar1;
      *(Spline **)(iVar7 + 0x120) = pSVar10;
    }
    else if (uVar26 < 4) {
      fVar2 = pSVar12->points[0].x;
      *(float *)(iVar7 + 0x60) = fVar2;
      fVar3 = pSVar12->points[0].y;
      *(float *)(iVar7 + 100) = fVar3;
      *(float *)(iVar7 + 0x68) = pSVar12->points[0].z;
      *(float *)(iVar7 + 0x6c) = pSVar12->points[0].w;
      fVar2 = pSVar12->points[1].x - fVar2;
      fVar3 = pSVar12->points[1].y - fVar3;
      fVar4 = ABS(fVar2);
      fVar5 = ABS(fVar3);
      *(float *)(puVar13 + 6) = fVar2;
      *(float *)((int)puVar13 + 0x34) = fVar3;
      *(float *)(puVar13 + 7) = fVar4 - fVar5;
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 6) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 7) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x34) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar13 + 6));
      if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0x34));
      if (*(float *)(puVar13 + 7) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)(puVar13 + 0xc) = fVar2;
        *(float *)((int)puVar13 + 100) = fVar2;
        *(float *)(puVar13 + 0xd) = fVar2;
        *(float *)((int)puVar13 + 0x6c) = fVar2;
        lVar24 = uVar19 - 0xf0;
        fVar2 = fVar5 * fVar5;
        lVar20 = uVar19 - 0xa0;
        lVar22 = uVar19 - 0x90;
        *(float *)((int)puVar13 + 100) = *(float *)((int)puVar13 + 100) * fVar5;
        *(float *)(puVar13 + 0xd) = *(float *)(puVar13 + 0xd) * fVar2;
        *(float *)((int)puVar13 + 0x6c) = *(float *)((int)puVar13 + 0x6c) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar24 + 0x60) = *(float *)((int)lVar24 + 0x50) * fVar2 * fVar2;
          iVar9 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar24 = uVar19 - 0xa0;
        pfVar25 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar22 = lVar24;
        do {
          fVar2 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar20 + 0x60) = *(float *)((int)lVar20 + 0x60) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar9 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar24;
          lVar24 = lVar24 + 0x10;
          fVar1 = fVar1 + *(float *)(iVar9 + 0x60) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                  + *(float *)(iVar17 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
      }
      *(float *)(iVar7 + 0x78) = fVar1;
      *(Spline **)(iVar7 + 0x120) = pSVar12;
    }
  }
  return;
}



//==== 00369ab0  ns=mobyupdate_helpers  size=0x1b0
// sig: undefined M424_00369ab0(void)
// callers(1): 00369d38 mobyupdate_unsorted::UpdateMoby_424
// callees(3): 00109c30 mobyutil::OrganicDelt; 00117390 mobyutil::MB_PathEvalSpline; 00502578 fastfunc::FastWrapRot

bool mobyupdate_helpers::M424_00369ab0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  piVar2 = *(int **)(iVar1 + 0x120);
  mobyutil::OrganicDelt
            (*(float *)(iVar1 + 0x104),DAT_0071f418 * 0.1,DAT_0071f418 * 0.1,
             mobyutil::g_FrameTime * 0.08,(float *)(iVar1 + 0xe4),0x720000,(float *)(iVar1 + 0xe8));
  dVar4 = (double)fastfunc::FastWrapRot(*(float *)(iVar1 + 0x110),*(float *)(iVar1 + 0xe8) * 50.0);
  iVar3 = *piVar2;
  *(float *)(iVar1 + 0x110) = (float)dVar4;
  mobyutil::MB_PathEvalSpline
            ((double)(*(float *)(iVar1 + 0xe4) * (float)(longlong)(iVar3 + -1)),piVar2);
  dVar4 = (double)*(float *)(iVar1 + 0x104);
  dVar5 = 0.0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  if (0.2 <= ABS((float)((double)*(float *)(iVar1 + 0xe4) - dVar4))) {
    *(undefined4 *)(iVar1 + 0x108) = 0;
  }
  else {
    mobyutil::OrganicDelt
              (3.14159,DAT_0071f418 * 2.0943952,DAT_0071f418 * 2.0943952,
               mobyutil::g_FrameTime * 6.2831855,(float *)(iVar1 + 0x108),0x369a8c,
               (float *)(iVar1 + 0x10c));
    dVar4 = (double)*(float *)(iVar1 + 0x104);
  }
  if (dVar4 == dVar5) {
    dVar4 = (double)fastfunc::FastWrapRot(*(float *)(iVar1 + 0x78),3.14159);
    *(float *)(iVar1 + 0x78) = (float)dVar4;
  }
  dVar4 = (double)fastfunc::FastWrapRot(*(float *)(iVar1 + 0x78),*(float *)(iVar1 + 0x108));
  *(float *)(iVar1 + 0x78) = (float)dVar4;
  return *(int *)(iVar1 + 0xe4) == *(int *)(iVar1 + 0x104);
}



//==== 00369c60  ns=mobyupdate_helpers  size=0xcc
// sig: undefined M424_00369c60(void)
// callers(0): 
// callees(1): 0011aeec mobyutil::MB_ShowPersistentMessage

void mobyupdate_helpers::M424_00369c60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = (int)*(uint *)(iVar1 + 0x104) >> 0x1f;
  if ((int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x104)) - uVar2) < 0x3f666667) {
    if (*(Spline **)(iVar1 + 0x120) == Splines[*(int *)(iVar1 + 0x80)]) {
      mobyutil::MB_ShowPersistentMessage(10,0x1f50);
    }
    else if (*(Spline **)(iVar1 + 0x120) == Splines[*(int *)(iVar1 + 0x88)]) {
      mobyutil::MB_ShowPersistentMessage(10,0x1f4f);
    }
    else {
      mobyutil::MB_ShowPersistentMessage(10,0x1f4e);
    }
  }
  else {
    mobyutil::MB_ShowPersistentMessage(10,0x1f4d);
  }
  return;
}



//==== 00369d38  ns=mobyupdate_unsorted  size=0x460
// sig: undefined UpdateMoby_424(MobyInstance * moby)
// callers(0): 
// callees(10): 000f0ea8 mobyfunc::AttachManipulator; 00106078 mobyutil::MB_EulerToQuat; 00112900 mobyutil::MB_GetOrientation; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 0011aeec mobyutil::MB_ShowPersistentMessage; 00368c98 mobyupdate_helpers::M424_00368c98; 00368df8 mobyupdate_helpers::M424_00368df8; 003690c0 mobyupdate_helpers::M424_003690c0; 00369ab0 mobyupdate_helpers::M424_00369ab0; 00502578 fastfunc::FastWrapRot

/* Moby 424 */

void mobyupdate_unsorted::UpdateMoby_424(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Vec4 local_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  lVar5 = (longlong)(int)moby;
  pvVar2 = moby->pVar;
  dVar8 = (double)(moby->pos).x;
  dVar9 = (double)(moby->pos).y;
  dVar10 = (double)(moby->pos).z;
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else if (*(int *)((int)pvVar2 + 0x124) == 0) {
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
  if (*(char *)((int)pvVar2 + 0xa1) == '\0') {
    mobyfunc::AttachManipulator(moby,0,(int)pvVar2 + 0xa0);
  }
  dVar7 = (double)fastfunc::FastWrapRot
                            (*(float *)((int)pvVar2 + 0x110),mobyutil::g_FrameTime * 1.5707964);
  *(float *)((int)pvVar2 + 0x110) = (float)dVar7;
  mobyutil::MB_EulerToQuat((float *)((int)pvVar2 + 0xb0),(Vec3 *)((int)pvVar2 + 0x110));
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined4 *)((int)pvVar2 + 0x11c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x118) = 0;
      *(undefined4 *)((int)pvVar2 + 0x114) = 0;
      *(undefined4 *)((int)pvVar2 + 0x110) = 0;
      if (*(int *)((int)pvVar2 + 0x80) == -1) {
        *(f32 *)((int)pvVar2 + 0x60) = (moby->pos).x;
        *(f32 *)((int)pvVar2 + 100) = (moby->pos).y;
        *(f32 *)((int)pvVar2 + 0x68) = (moby->pos).z;
        *(f32 *)((int)pvVar2 + 0x6c) = (moby->pos).w;
        *(f32 *)((int)pvVar2 + 0x70) = (moby->rotation).x;
        *(f32 *)((int)pvVar2 + 0x74) = (moby->rotation).y;
        *(f32 *)((int)pvVar2 + 0x78) = (moby->rotation).z;
        *(f32 *)((int)pvVar2 + 0x7c) = (moby->rotation).w;
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar2 + 0x124) = 1;
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0x100) = 0xffffffff;
        *(undefined2 *)((int)pvVar2 + 0xe0) = 0xffff;
        mobyupdate_helpers::M424_003690c0(lVar5);
        moby->updateDistance = -1;
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_standingOnMoby == moby) {
      if ((help::g_HelpState == 0) && (help::g_HelpCurId == -1)) {
        local_50 = g_heroPosition.x;
        local_4c = g_heroPosition.y;
        local_48 = g_heroPosition.z;
        local_44 = g_heroPosition.w;
        mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)((int)pvVar2 + 0x8c));
        if (SQRT((g_heroPosition.z - local_48) * (g_heroPosition.z - local_48) +
                 (g_heroPosition.x - local_50) * (g_heroPosition.x - local_50) +
                 (g_heroPosition.y - local_4c) * (g_heroPosition.y - local_4c)) < 0.001) {
          pvVar3 = moby->pVar;
          uVar4 = (int)*(uint *)((int)pvVar3 + 0x104) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)((int)pvVar3 + 0x104)) - uVar4) < 0x3f666667) {
            if (*(Spline **)((int)pvVar3 + 0x120) == Splines[*(int *)((int)pvVar3 + 0x80)]) {
              mobyutil::MB_ShowPersistentMessage(10,0x1f50);
            }
            else if (*(Spline **)((int)pvVar3 + 0x120) == Splines[*(int *)((int)pvVar3 + 0x88)]) {
              mobyutil::MB_ShowPersistentMessage(10,0x1f4f);
            }
            else {
              mobyutil::MB_ShowPersistentMessage(10,0x1f4e);
            }
          }
          else {
            mobyutil::MB_ShowPersistentMessage(10,0x1f4d);
          }
          if ((((g_buttonsPressedThisFrame & TRIANGLE) != 0) && (g_framesNotGrounded == 0)) &&
             (mobyutil::g_HelpMsgOwner == 10)) {
            moby->state = '\x03';
          }
        }
      }
    }
    else {
      mobyupdate_helpers::M424_003690c0(lVar5);
    }
  }
  else if (bVar1 < 4) {
    DAT_00969ed2 = 5;
    DAT_00969ed4 = 5;
    DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar2 + 0x8c);
    iVar6 = mobyupdate_helpers::M424_00369ab0(lVar5);
    if (iVar6 != 0) {
      mobyupdate_helpers::M424_003690c0(lVar5);
      moby->state = '\x02';
    }
  }
  mobyupdate_helpers::M424_00368df8(lVar5);
  if (*(int *)((int)pvVar2 + 0x8c) != -1) {
    mobyupdate_helpers::M424_00368c98(lVar5);
  }
  local_60.x = (float)((double)(moby->pos).x - dVar8);
  local_60.y = (float)((double)(moby->pos).y - dVar9);
  local_60.w = (moby->pos).w;
  local_60.z = (float)((double)(moby->pos).z - dVar10);
  mobyutil::MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x20),&local_60,ZEXT48(&stack0x00000000) - 0x70,
             lVar5 + 0x40);
  return;
}



//==== 0036a198  ns=mobyupdate_helpers  size=0x14
// sig: undefined M425_0036a198(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M425_0036a198(void)

{
  DAT_0084111c = 0x10000;
  return;
}



//==== 0036a1d0  ns=Global  size=0x2e8
// sig: undefined FUN_0036a1d0(void)
// callers(1): 0031c218 mobyupdate_unsorted::UpdateMoby_253
// callees(3): 000efa28 mobyfunc::CreateMoby; 000f31a8 mobyfunc::UpdateMobyTransform; 000fcbe8 mobyutil::MB_randRangeFloat

MobyInstance * FUN_0036a1d0(float param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xc0;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar10;
  puVar7[0x1a] = in_LR;
  puVar7[0x14] = unaff_r28;
  puVar7[0x16] = unaff_r30;
  puVar7[0x15] = unaff_r29;
  puVar7[0x17] = unaff_r31;
  puVar7[0x13] = unaff_r27;
  pMVar12 = mobyfunc::CreateMoby(BOMB_01A9);
  if (pMVar12 != (MobyInstance *)0x0) {
    pfVar17 = (float *)pMVar12->pVar;
    auVar20 = ZEXT416(0xffffffff);
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x01';
    pfVar17[8] = param_1;
    auVar20 = loadVectorLeftIndexed(in_LR,0x36a1b0);
    auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar20 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                         auVar21);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar20 = auVar20 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x10,
                       ZEXT48(pfVar17));
    *(undefined4 *)((uint)(pfVar17 + 4) & 0xfffffffc) = uVar6;
    pfVar17[5] = 0.0;
    pfVar17[7] = 1.0;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    *pfVar17 = *param_3;
    pfVar17[1] = param_3[1];
    pfVar17[2] = param_3[2];
    pfVar17[3] = param_3[3];
    dVar19 = (double)mobyutil::MB_randRangeFloat(-180.0,180.0);
    (pMVar12->rotation).x = (float)(dVar19 * 0.01745329238474369);
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar16 = uVar10 - 0xb0;
      lVar15 = uVar10 - 0x4c;
      lVar14 = uVar10 - 0x3c;
      lVar18 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)(puVar7 + 0xf) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar3;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar4 * fVar4;
        iVar8 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x4c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar11;
      do {
        fVar4 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x74) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar12->rotation).z = fVar1 + 1.5707964;
    mobyfunc::UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}



//==== 0036a528  ns=mobyupdate_unsorted  size=0x7f0
// sig: undefined UpdateMoby_425(MobyInstance * moby)
// callers(0): 
// callees(13): 00057820 collproc::CollLine; 0005e598 collproc::CollMobySphere; 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe610 mobyutil::MB_SphericalToVector; 00106738 mobyutil::TweenColor; 00125350 partupd::SpawnPart_16; 0015d12c sound::PlayMobySound; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize

/* Moby 425 */

void mobyupdate_unsorted::UpdateMoby_425(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar13;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
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
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  float local_140 [4];
  undefined1 local_130 [48];
  float local_100 [8];
  double local_e0;
  float local_d8;
  longlong local_d0;
  
  lVar11 = (longlong)(int)moby;
  dVar21 = 0.5;
  pfVar6 = (float *)moby->pVar;
  iVar13 = collproc::CollMobySphere(0x3fe0000000000000,lVar11 + 0x10,&DAT_0036a4b8,0,lVar11,0);
  if (((iVar13 != 0) && (CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((CollOutput.pMoby != (MobyInstance *)pfVar6[8] || (pfVar6[5] != 0.0)))) {
    moby->state = 'c';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      (moby->pos).x = (moby->pos).x + *pfVar6;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      pfVar6[2] = -(DAT_0071f418 * 10.8 - pfVar6[2]);
      iVar13 = collproc::CollLine(local_170,local_160,0,lVar11,0);
      if (iVar13 == 0) {
        iVar13 = fastfunc::FastDecTimerS32(pfVar6 + 4);
        if (iVar13 != 0) {
          moby->state = 'c';
        }
      }
      else if (((MobyInstance *)pfVar6[8] != (MobyInstance *)0x0) &&
              (CollOutput.pMoby != (MobyInstance *)pfVar6[8])) {
        moby->state = 'c';
        (moby->pos).x = CollOutput.ip.x;
        (moby->pos).y = CollOutput.ip.y;
        (moby->pos).z = CollOutput.ip.z;
        (moby->pos).w = CollOutput.ip.w;
        fastfunc::FastVecNormalize(pfVar6,pfVar6,0xa10980);
        fVar2 = pfVar6[1];
        fVar3 = *pfVar6;
        fVar4 = pfVar6[2];
        fVar5 = 0.0;
        fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar7 = (mobyutil::g_FrameTime * 2.0) / fVar10;
        fVar9 = fVar5;
        if (0.0 - fVar10 < 0.0) {
          fVar9 = fVar3 * fVar7;
        }
        fVar8 = fVar5;
        if (0.0 - fVar10 < 0.0) {
          fVar8 = fVar2 * fVar7;
        }
        if (0.0 - fVar10 < 0.0) {
          fVar5 = fVar4 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar9 = fVar3 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar8 = fVar2 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar5 = fVar4 * fVar7;
        }
        *pfVar6 = fVar9;
        pfVar6[1] = fVar8;
        pfVar6[2] = fVar5;
      }
    }
  }
  else if (bVar1 == 99) {
    dVar22 = 0.0;
    local_100[3] = 0.0;
    local_100[0] = mobyutil::g_FrameTime * 14.0;
    local_100[1] = mobyutil::g_FrameTime * 22.0;
    local_100[2] = mobyutil::g_FrameTime * 12.0;
    dVar29 = 1.0;
    collproc::CollMobySphere(0x3ff0000000000000,lVar11 + 0x10,&DAT_00810001,9,lVar11,local_130);
    sound::PlayMobySound(0,0,moby);
    uVar14 = 0;
    dVar23 = -0.5;
    dVar24 = 0.25;
    local_e0 = 4.0;
    local_100[7] = 1.5707963;
    dVar25 = 200000.0;
    dVar26 = 60.5;
    local_100[6] = 0.717;
    dVar27 = 120.5;
    local_100[5] = 8.0;
    dVar28 = 150000.0;
    dVar18 = 30.5;
    local_100[4] = 300000.0;
    dVar19 = 45.5;
    do {
      local_d8 = (float)dVar19;
      iVar13 = uVar14 + (((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0)) * -4;
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar23),
                 (float)((double)mobyutil::g_FrameTime * dVar21));
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * dVar23),
                 (float)((double)mobyutil::g_FrameTime * dVar21));
      mobyutil::MB_randRangeFloat
                ((float)((double)mobyutil::g_FrameTime * local_e0),local_100[iVar13]);
      mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar24);
      dVar15 = (double)mobyutil::MB_randRot();
      dVar19 = (double)local_d8;
      if (iVar13 < 2) {
        if ((-1 < iVar13) && (iVar13 < 1)) {
          uVar16 = mobyutil::MB_randRangeFloat((float)dVar25,local_100[4]);
          iVar13 = (int)((double)animationSpeed * dVar27);
          local_d0 = (longlong)iVar13;
          mobyutil::MB_randRange((int)((double)animationSpeed * dVar26),iVar13);
          partupd::SpawnPart_16(uVar16,local_150,local_140,0x1f101820,&DAT_00101010);
        }
      }
      else if (iVar13 < 3) {
        lVar11 = mobyutil::MB_randInt(100);
        iVar13 = (int)((double)animationSpeed * dVar19);
        local_d0 = (longlong)iVar13;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar18),iVar13);
        partupd::SpawnPart_16
                  (dVar28,local_150,local_140,(lVar11 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,
                   0xf000020);
      }
      else if (iVar13 < 4) {
        dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar24,(float)dVar29);
        uVar16 = 0x7f000000;
        mobyutil::TweenColor((float)dVar19,0x7f000000,0x7f182030);
        dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar21,(float)dVar29);
        uVar12 = 0;
        mobyutil::TweenColor((float)dVar19,0,0x5f5f5f);
        dVar19 = (double)mobyutil::MB_randRangeFloat((float)dVar22,(float)dVar29);
        dVar20 = (double)(float)(dVar19 * (double)mobyutil::g_FrameTime);
        dVar19 = (double)mobyutil::MB_randRot();
        mobyutil::MB_SphericalToVector((float)dVar20,(float)dVar15,(float)dVar19,local_140);
        uVar17 = mobyutil::MB_randRangeFloat((float)dVar28,(float)dVar25);
        iVar13 = (int)((double)animationSpeed * dVar27);
        local_d0 = (longlong)iVar13;
        mobyutil::MB_randRange((int)((double)animationSpeed * dVar26),iVar13);
        partupd::SpawnPart_16(uVar17,local_150,local_140,uVar16,uVar12);
        dVar19 = (double)local_d8;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x32);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



//==== 0036ad20  ns=mobyupdate_helpers  size=0x144
// sig: undefined M426_0036ad20(void)
// callers(0): 
// callees(4): 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 00184670 mobyupdate_helpers::M1009_00184670; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M426_0036ad20(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float local_50 [4];
  undefined1 auStack_40 [16];
  
  iVar1 = fastfunc::FastDecTimerS32(param_4 + 100);
  if ((iVar1 != 0) && ((pad_DownButtons & 0x240) != 0)) {
    mobyutil::MB_SphericalToVector
              (DAT_008411a4 * DAT_008411c4,(float)param_1,(float)param_2,local_50);
    mobyfunc::GetBonePosition(param_3,*(byte *)(param_4 + 0x31) & 1,auStack_40);
    M1009_00184670((double)DAT_008411c8,0xbff0000000000000,param_3,local_50,auStack_40);
    *(undefined4 *)(param_4 + 100) = DAT_008411a8;
    *(byte *)(param_4 + 0x31) = *(byte *)(param_4 + 0x31) ^ 1;
  }
  return;
}



//==== 0036ae68  ns=mobyupdate_helpers  size=0x184
// sig: undefined M426_0036ae68(void)
// callers(1): 0036b8c8 mobyupdate_helpers::M426_0036b8c8
// callees(3): 000f1114 mobyfunc::GetBonePosition; 00192330 mobyupdate_helpers::Spawn_Moby1034; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M426_0036ae68(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = fastfunc::FastDecTimerS32(param_2 + 0x68);
  if (((iVar1 != 0) && ((pad_DownButtons & 0x420) != 0)) && (0 < (int)*(uint *)(param_2 + 0x6c))) {
    mobyfunc::GetBonePosition(param_1,*(uint *)(param_2 + 0x6c) & 1,local_30);
    iVar1 = Spawn_Moby1034((double)(DAT_008411ac * DAT_008411c4),param_1,local_30,
                           *(undefined4 *)(param_2 + 0x70),param_1 + 0x40,DAT_00841234,DAT_00841234)
    ;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + -1;
      *(undefined4 *)(param_2 + 0x68) = DAT_008411b0;
    }
  }
  return;
}



//==== 0036b008  ns=mobyupdate_helpers  size=0x608
// sig: undefined M426_0036b008(void)
// callers(1): 0036b630 mobyupdate_helpers::M426_0036b630
// callees(2): 00055284 camera::DrawTargetCrosshair; 005026a0 fastfunc::FastSubRots

MobyInstance *
mobyupdate_helpers::M426_0036b008
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pTarget;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f24;
  double dVar22;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x1f] = unaff_r29;
  pMVar17 = (MobyInstance *)0x0;
  puVar7[0x21] = unaff_r31;
  puVar7[0x1e] = unaff_r28;
  puVar7[0x20] = unaff_r30;
  pTarget = MobyUpdateChainStart;
  puVar7[0x1d] = unaff_r27;
  dVar25 = 1000000000.0;
  for (; pTarget != (MobyInstance *)0x0; pTarget = (MobyInstance *)pTarget->pChain) {
    if (((((pTarget->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pTarget->enabled != '\0')) &&
        (pTarget->pClass != (MobyClass *)0x0)) && ((short)pTarget->pClass->mode_bits == 5)) {
      fVar2 = param_4[1];
      fVar5 = fVar2 - (pTarget->pos).y;
      fVar3 = (pTarget->pos).x;
      fVar4 = *param_4 - fVar3;
      dVar24 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
      if (dVar24 < param_3) {
        fVar5 = fVar3 - *param_4;
        *(float *)(puVar7 + 0x10) = fVar3;
        fVar3 = (pTarget->pos).y;
        fVar2 = fVar3 - fVar2;
        *(float *)((int)puVar7 + 0x84) = fVar3;
        fVar3 = (pTarget->pos).z;
        *(float *)(puVar7 + 0x11) = fVar3;
        *(f32 *)((int)puVar7 + 0x8c) = (pTarget->pos).w;
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar7 + 0x9c) = fVar5;
        fVar4 = ABS(fVar2);
        *(float *)(puVar7 + 0x14) = fVar2;
        fVar2 = *(float *)(param_5 + 8);
        *(float *)(puVar7 + 0x11) = fVar3 + 0.4;
        *(float *)((int)puVar7 + 0xa4) = fVar6 - fVar4;
        dVar22 = 0.0;
        dVar23 = 0.7853981852531433;
        uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1d) & 4;
        fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar5 = ABS(*(float *)((int)puVar7 + 0x9c));
        if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)(puVar7 + 0x14));
        if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
          fVar10 = fVar6;
        }
        dVar19 = dVar22;
        if (0.0 < fVar5) {
          lVar12 = uVar11 - 0x140;
          lVar13 = uVar11 - 0x88;
          lVar16 = uVar11 - 0x78;
          lVar18 = 2;
          fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar7 + 0xd4) = fVar5;
          *(float *)((int)puVar7 + 0xcc) = fVar5;
          *(float *)(puVar7 + 0x1a) = fVar5;
          *(float *)(puVar7 + 0x19) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar6;
          *(float *)(puVar7 + 0x1a) = *(float *)(puVar7 + 0x1a) * fVar5;
          *(float *)((int)puVar7 + 0xd4) = *(float *)((int)puVar7 + 0xd4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar12 + 200) = *(float *)((int)lVar12 + 0xb8) * fVar5 * fVar5;
            iVar8 = (int)lVar13;
            lVar12 = lVar12 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
            lVar16 = lVar16 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          lVar18 = 4;
          lVar16 = uVar11 - 0x88;
          pfVar14 = (float *)&DAT_007358e0;
          lVar12 = lVar1;
          lVar13 = lVar16;
          do {
            fVar5 = *pfVar14;
            fVar6 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar12 + 200) = *(float *)((int)lVar12 + 200) * fVar5;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          lVar13 = 2;
          lVar12 = lVar1;
          do {
            iVar8 = (int)lVar12;
            lVar12 = lVar12 + 0x10;
            iVar9 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar8 + 200)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar19 = (double)fastfunc::FastSubRots(fVar2,(float)dVar19);
        dVar19 = (double)(float)(dVar19 * dVar19);
        fVar2 = *(float *)(param_5 + 4);
        if ((double)(float)(param_1 * param_1) <= dVar19) {
          puVar7[0xe] = 4;
          camera::DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
        }
        else {
          fVar3 = param_4[2];
          *(float *)(puVar7 + 0x12) = (float)dVar24;
          dVar20 = ABS((double)(*(float *)(puVar7 + 0x11) - fVar3));
          *(float *)((int)puVar7 + 0x94) = *(float *)(puVar7 + 0x11) - fVar3;
          *(float *)(puVar7 + 0x13) = (float)(ABS(dVar24) - dVar20);
          uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
          dVar21 = ABS((double)*(float *)(puVar7 + 0x12));
          if ((double)*(float *)(puVar7 + 0x13) - dVar22 < 0.0) {
            dVar21 = dVar20;
          }
          fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
          dVar20 = ABS((double)*(float *)((int)puVar7 + 0x94));
          if ((double)*(float *)(puVar7 + 0x13) - dVar22 < 0.0) {
            dVar20 = ABS(dVar24);
          }
          fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
          if (dVar22 < dVar21) {
            lVar12 = uVar11 - 0x140;
            lVar13 = uVar11 - 0xa8;
            lVar16 = uVar11 - 0x98;
            lVar18 = 2;
            fVar4 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar7 + 0xb4) = fVar4;
            *(float *)((int)puVar7 + 0xac) = fVar4;
            *(float *)(puVar7 + 0x16) = fVar4;
            *(float *)(puVar7 + 0x15) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar6;
            *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar4;
            *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
              iVar8 = (int)lVar13;
              lVar12 = lVar12 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
              lVar16 = lVar16 + 8;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar18 = 4;
            lVar16 = uVar11 - 0xa8;
            pfVar14 = (float *)&DAT_007358e0;
            lVar12 = lVar1;
            lVar13 = lVar16;
            do {
              fVar4 = *pfVar14;
              fVar6 = pfVar14[1];
              pfVar14 = pfVar14 + 2;
              *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
              lVar12 = lVar12 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
              lVar13 = lVar13 + 8;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar13 = 2;
            lVar12 = lVar1;
            do {
              iVar8 = (int)lVar12;
              lVar12 = lVar12 + 0x10;
              iVar9 = (int)lVar16;
              lVar16 = lVar16 + 0x10;
              dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xa8)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar22 = (double)((float)(dVar22 + dVar23) * fVar3 + fVar5);
          }
          dVar24 = (double)fastfunc::FastSubRots(fVar2,(float)dVar22);
          if ((double)(float)(param_2 * param_2) <= (double)(float)(dVar24 * dVar24)) {
            puVar7[0xe] = 4;
            camera::DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
          }
          else {
            fVar2 = param_4[1] - *(float *)((int)puVar7 + 0x84);
            dVar24 = (double)((float)(dVar19 * (double)(float)(dVar24 * dVar24)) *
                             SQRT(SQRT((param_4[2] - *(float *)(puVar7 + 0x11)) *
                                       (param_4[2] - *(float *)(puVar7 + 0x11)) +
                                       (*param_4 - *(float *)(puVar7 + 0x10)) *
                                       (*param_4 - *(float *)(puVar7 + 0x10)) + fVar2 * fVar2)));
            if (dVar24 < dVar25) {
              dVar25 = dVar24;
              pMVar17 = pTarget;
            }
            puVar7[0xe] = 4;
            camera::DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
          }
        }
      }
    }
  }
  return pMVar17;
}



//==== 0036b630  ns=mobyupdate_helpers  size=0x244
// sig: undefined M426_0036b630(void)
// callers(1): 0036b8c8 mobyupdate_helpers::M426_0036b8c8
// callees(3): 00055284 camera::DrawTargetCrosshair; 0036b008 mobyupdate_helpers::M426_0036b008; 004fff60 fastfunc::FastDecTimerS32
// strings: 0036b620: '?&ff?fff' (raw) | 0036b624: '?fff' (raw)

void mobyupdate_helpers::M426_0036b630(MobyInstance *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 local_40 [40];
  
  iVar7 = fastfunc::FastDecTimerS32(param_2 + 0x74);
  iVar3 = (int)param_2;
  if ((((iVar7 != 0) || (*(int *)(iVar3 + 0x70) == 0)) ||
      (cVar1 = *(char *)(*(int *)(iVar3 + 0x70) + 0x20), cVar1 == -2)) || (cVar1 == -3)) {
    *(undefined4 *)(iVar3 + 0x70) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
  }
  iVar7 = M426_0036b008(0x3fb921fb60000000,0x3fb921fb60000000,0x406fe00000000000,0x951500,local_40);
  if ((iVar7 == 0) || (*(int *)(iVar3 + 0x70) != 0)) {
    iVar8 = *(int *)(iVar3 + 0x70);
    if ((iVar8 != 0) &&
       ((*(char *)(iVar8 + 0x20) != -3 && *(char *)(iVar8 + 0x20) != -2 &&
        (*(char *)(iVar8 + 0x31) != '\0')))) goto LAB_0036b770;
  }
  *(int *)(iVar3 + 0x70) = iVar7;
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar9 = loadVectorLeftIndexed(8,0x36b610);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
  auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
  auVar9 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x74,param_2);
  *(undefined4 *)(iVar3 + 0x74U & 0xfffffffc) = uVar2;
  iVar8 = iVar7;
LAB_0036b770:
  if ((iVar8 != 0) && (*(int *)(iVar3 + 0x68) == 0)) {
    if ((*(char *)(iVar8 + 0x20) == -2) || (*(char *)(iVar8 + 0x20) == -3)) {
      *(undefined4 *)(iVar3 + 0x70) = 0;
      *(undefined4 *)(iVar3 + 0x78) = 0;
    }
    else {
      fVar4 = GameCamera.posY - *(float *)(iVar8 + 0x14);
      fVar5 = GameCamera.posX - *(float *)(iVar8 + 0x10);
      fVar6 = GameCamera.posZ - *(float *)(iVar8 + 0x18);
      camera::DrawTargetCrosshair
                (ABS(-(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) * 0.006666667 * 0.65 -
                      0.9)),param_1,0xff0fff0f,0x36b610);
    }
  }
  return;
}



//==== 0036b8c8  ns=mobyupdate_helpers  size=0x11a0
// sig: undefined M426_0036b8c8(void)
// callers(1): 0036cab0 mobyupdate_unsorted::UpdateMoby_426
// callees(17): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00059e20 collproc::CollSphere; 000668d0 draw::UpdateViewContext; 000f1114 mobyfunc::GetBonePosition; 000fe610 mobyutil::MB_SphericalToVector; 00106150 mobyutil::MB_RegisterLameShadow; 00109b40 mobyutil::AccelDelt; 0010a050 mobyutil::AccelDeltAng; 0010e030 mobyutil::MB_genericExplosion; 00184670 mobyupdate_helpers::M1009_00184670; 0036ae68 mobyupdate_helpers::M426_0036ae68; 0036b630 mobyupdate_helpers::M426_0036b630; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots

void mobyupdate_helpers::M426_0036b8c8(MobyInstance *param_1,float *param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  f32 fVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar23;
  int iVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  undefined8 uVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  float local_130 [76];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x210;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar19;
  puVar14[0x44] = in_LR;
  puVar14[0x3c] = in_f26;
  puVar14[0x3d] = in_f27;
  puVar14[0x3e] = in_f28;
  puVar14[0x3f] = in_f29;
  puVar14[0x40] = in_f30;
  puVar14[0x41] = in_f31;
  puVar14[0x3a] = unaff_r30;
  puVar14[0x3b] = unaff_r31;
  puVar14[0x37] = unaff_r27;
  dVar34 = 0.0;
  *(undefined4 *)(puVar14 + 0x18) = 0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  *(undefined4 *)(puVar14 + 0x19) = 0;
  *(undefined4 *)((int)puVar14 + 0xcc) = 0;
  fVar5 = DAT_008411c4;
  uVar33 = 0x4020000000000000;
  fVar4 = mobyutil::g_FrameTime * 8.0;
  fVar23 = (float)((int)param_2[0x11] + 1);
  MVar11 = param_1->modeBits;
  param_2[0x11] = fVar23;
  uVar18 = pad_Repeat;
  param_1->modeBits =
       MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  uVar13 = pad_DownButtons;
  fVar6 = ANALOG_STICKS.z;
  fVar3 = param_2[0xe];
  dVar36 = (double)ANALOG_STICKS.w;
  dVar31 = (double)(param_1->rotation).z;
  puVar14[0x39] = unaff_r29;
  puVar14[0x38] = unaff_r28;
  *(float *)(puVar14 + 0x19) = fVar4 * fVar5;
  if (((uVar18 & 0x8000) != 0) &&
     (cVar1 = *(char *)(param_2 + 0xc), *(byte *)(param_2 + 0xc) = cVar1 + 1U,
     1 < (byte)(cVar1 + 1U))) {
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  if (DAT_00841160 < (int)fVar23) {
    if ((uVar13 & 0x80) == 0) {
      if (DAT_00841164 * DAT_008411c4 - DAT_0084115c * DAT_008411c4 <= fVar3) {
        fVar4 = DAT_00841164 * DAT_008411c4;
        if (fVar4 < fVar3) {
          fVar4 = (DAT_00841164 * DAT_008411c4 - fVar3) * DAT_00841170 + fVar3;
        }
      }
      else {
        fVar4 = DAT_0084115c * DAT_008411c4 + fVar3;
      }
      param_2[0xe] = fVar4;
    }
    else {
      fVar4 = DAT_0084116c * DAT_008411c4 + fVar3;
      param_2[0xe] = fVar4;
      fVar3 = DAT_00841168 * DAT_008411c4;
      if (fVar3 < fVar4) {
        param_2[0xe] = fVar3;
        fVar4 = fVar3;
      }
    }
  }
  else {
    fVar4 = DAT_00841158 * DAT_008411c4 + fVar3;
    param_2[0xe] = fVar4;
  }
  if (DAT_00841174 < (int)fVar23) {
    mobyutil::AccelDelt(fVar6,DAT_008411cc,DAT_008411d0,DAT_010c5134,param_2 + 0x13,0x840000,
                        param_2 + 0x1f);
    mobyutil::AccelDelt((float)dVar36,DAT_008411d4,DAT_008411d8,DAT_008411dc,param_2 + 0x14,0x840000
                        ,param_2 + 0x20);
    mobyutil::AccelDeltAng
              ((double)(param_2[0x13] * DAT_008411bc),(double)DAT_008411e0,(double)DAT_008411e4,
               (double)DAT_010c5138,&param_1->rotation,&PTR_DAT_00840000,param_2 + 0x21);
    mobyutil::AccelDeltAng
              (-(double)(param_2[0x14] * DAT_00841254),(double)DAT_008411e8,(double)DAT_008411ec,
               (double)DAT_010c513c,&(param_1->rotation).y,&PTR_DAT_00840000,param_2 + 0x22);
    fVar12 = (param_1->rotation).y;
    uVar13 = (int)fVar12 >> 0x1f;
    iVar24 = (uVar13 >> 1 ^ (uint)fVar12) - uVar13;
    fVar3 = param_2[0x13];
    if (iVar24 < (int)(((uint)((int)DAT_00841254 >> 0x1f) >> 1 ^ (uint)DAT_00841254) -
                      ((int)DAT_00841254 >> 0x1f))) {
      if (iVar24 <= (int)(((uint)((int)DAT_00841258 >> 0x1f) >> 1 ^ (uint)DAT_00841258) -
                         ((int)DAT_00841258 >> 0x1f))) {
        (param_1->rotation).y = DAT_00841258 + 0.001;
      }
    }
    else {
      (param_1->rotation).y = DAT_00841254 - 0.001;
    }
    dVar31 = (double)fastfunc::FastDiffRots
                               ((double)(param_1->rotation).z,(double)(fVar3 * DAT_00841180));
    (param_1->rotation).z = (float)dVar31;
    fVar4 = param_2[0xe];
  }
  mobyutil::MB_SphericalToVector
            (fVar4,(float)dVar31,-(param_1->rotation).y,(float *)(puVar14 + 0x1a));
  fVar3 = *(float *)((int)puVar14 + 0xd4);
  fVar4 = *(float *)(puVar14 + 0x1a);
  fVar5 = *(float *)(puVar14 + 0x1b);
  fVar6 = param_2[0xe];
  fVar23 = (param_1->rotation).y;
  fVar7 = (param_1->pos).x;
  fVar8 = (param_1->pos).y;
  fVar9 = (param_1->pos).z;
  fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  if ((double)SQRT(fVar15) == dVar34) {
    fVar10 = *(float *)((int)puVar14 + 0xdc);
    dVar31 = dVar34;
    dVar36 = dVar34;
    dVar32 = dVar34;
  }
  else {
    fVar16 = 1.0 / SQRT(fVar15);
    fVar10 = *(float *)((int)puVar14 + 0xdc);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar32 = (double)(fVar4 * fVar16);
    dVar36 = (double)(fVar3 * fVar16);
    dVar31 = (double)(fVar5 * fVar16);
  }
  param_2[4] = (float)dVar32;
  param_2[5] = (float)dVar36;
  param_2[6] = (float)dVar31;
  param_2[7] = fVar10;
  (param_1->pos).x = fVar7 + fVar4;
  (param_1->pos).y = fVar8 + fVar3;
  (param_1->pos).z = fVar9 + fVar5;
  dVar31 = (double)(fVar6 - DAT_00841164);
  if ((double)(fVar6 - DAT_00841164) - dVar34 < 0.0) {
    dVar31 = dVar34;
  }
  fVar3 = (float)(dVar31 / (double)(DAT_00841168 - DAT_00841164));
  dVar37 = (double)fVar3;
  param_2[0x2d] = fVar3;
  uVar29 = fastfunc::FastWrapRot(fVar23 * DAT_00841238,DAT_00841188);
  dVar31 = (double)fastfunc::FastWrapRot((param_1->rotation).z,3.1415927);
  uVar30 = fastfunc::FastWrapRot((float)dVar31,param_2[0x13] * DAT_0084123c);
  mobyutil::AccelDeltAng
            (uVar29,(double)DAT_00841208,(double)DAT_0084120c,(double)DAT_010c514c,param_2 + 0x28,
             &PTR_DAT_00840000,param_2 + 0x2a);
  mobyutil::AccelDeltAng
            (uVar30,(double)DAT_00841210,(double)DAT_00841214,(double)DAT_010c5150,param_2 + 0x29,
             &PTR_DAT_00840000,param_2 + 0x2b);
  mobyutil::MB_SphericalToVector(DAT_00841184,param_2[0x29],param_2[0x28],local_130);
  fVar3 = (param_1->pos).y;
  fVar4 = (param_1->pos).z;
  *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) + (param_1->pos).x;
  *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) + fVar3;
  *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) + fVar4;
  camera::camera5::Camera_SetMobyDrivenTargetPos(local_130);
  fVar4 = *(float *)((int)puVar14 + 0xe4) - (param_1->pos).y;
  fVar5 = *(float *)(puVar14 + 0x1c) - (param_1->pos).x;
  fVar3 = (param_1->rotation).y;
  fVar6 = (param_1->pos).z - *(float *)(puVar14 + 0x1d);
  fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  *(float *)((int)puVar14 + 300) = fVar6;
  dVar32 = ABS((double)fVar6);
  dVar36 = ABS((double)fVar4);
  *(float *)(puVar14 + 0x25) = fVar4;
  *(float *)(puVar14 + 0x26) = (float)(dVar36 - dVar32);
  dVar35 = 0.7853981852531433;
  uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x25) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 300) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar14 + 0x25));
  if ((double)*(float *)(puVar14 + 0x26) - dVar34 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar32 = ABS((double)*(float *)((int)puVar14 + 300));
  if ((double)*(float *)(puVar14 + 0x26) - dVar34 < 0.0) {
    dVar32 = dVar36;
  }
  fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar36 = dVar34;
  if (dVar34 < dVar31) {
    lVar21 = uVar19 - 0x200;
    lVar25 = uVar19 - 0x7c;
    lVar27 = uVar19 - 0x6c;
    lVar28 = 2;
    fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar23 = fVar6 * fVar6;
    *(float *)(puVar14 + 0x34) = fVar6;
    *(float *)(puVar14 + 0x33) = fVar6;
    *(float *)((int)puVar14 + 0x19c) = fVar6;
    *(float *)((int)puVar14 + 0x194) = fVar6;
    fVar6 = fVar23 * fVar23;
    *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar23;
    *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
    *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar6 * fVar23;
    do {
      *(float *)((int)lVar21 + 0x194) = *(float *)((int)lVar21 + 0x184) * fVar6 * fVar6;
      iVar24 = (int)lVar25;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
      lVar27 = lVar27 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar27 = uVar19 - 0x7c;
    pfVar26 = (float *)&DAT_007358e0;
    lVar21 = lVar22;
    lVar25 = lVar27;
    do {
      fVar6 = *pfVar26;
      fVar23 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar21 + 0x194) = *(float *)((int)lVar21 + 0x194) * fVar6;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar23;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar25 = 2;
    lVar21 = lVar22;
    dVar31 = dVar34;
    do {
      iVar24 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      iVar17 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x194)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    dVar36 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  uVar29 = fastfunc::FastDiffRots(-dVar36,-(double)(fVar3 * DAT_00841240));
  fVar3 = (param_1->pos).x - *(float *)(puVar14 + 0x1c);
  fVar4 = (param_1->pos).y - *(float *)((int)puVar14 + 0xe4);
  dVar36 = ABS((double)fVar3);
  dVar32 = ABS((double)fVar4);
  *(float *)((int)puVar14 + 0x11c) = fVar3;
  *(float *)(puVar14 + 0x24) = fVar4;
  fVar3 = param_2[0x13];
  *(float *)((int)puVar14 + 0x124) = (float)(dVar36 - dVar32);
  uVar20 = (ulonglong)(*(uint *)((int)puVar14 + 0x11c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x124) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x24) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar14 + 0x11c));
  if ((double)*(float *)((int)puVar14 + 0x124) - dVar34 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar32 = ABS((double)*(float *)(puVar14 + 0x24));
  if ((double)*(float *)((int)puVar14 + 0x124) - dVar34 < 0.0) {
    dVar32 = dVar36;
  }
  fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar36 = dVar34;
  if (dVar34 < dVar31) {
    lVar21 = uVar19 - 0x200;
    lVar25 = uVar19 - 0x9c;
    lVar27 = uVar19 - 0x8c;
    lVar28 = 2;
    fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar23 = fVar6 * fVar6;
    *(float *)(puVar14 + 0x30) = fVar6;
    *(float *)(puVar14 + 0x2f) = fVar6;
    *(float *)((int)puVar14 + 0x17c) = fVar6;
    *(float *)((int)puVar14 + 0x174) = fVar6;
    fVar6 = fVar23 * fVar23;
    *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar23;
    *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
    *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar6 * fVar23;
    do {
      *(float *)((int)lVar21 + 0x174) = *(float *)((int)lVar21 + 0x164) * fVar6 * fVar6;
      iVar24 = (int)lVar25;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
      lVar27 = lVar27 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar27 = uVar19 - 0x9c;
    pfVar26 = (float *)&DAT_007358e0;
    lVar21 = lVar22;
    lVar25 = lVar27;
    do {
      fVar6 = *pfVar26;
      fVar23 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar21 + 0x174) = *(float *)((int)lVar21 + 0x174) * fVar6;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar23;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar25 = 2;
    lVar21 = lVar22;
    dVar31 = dVar34;
    do {
      iVar24 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      iVar17 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x174)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    dVar36 = (double)((float)(dVar31 + dVar35) * fVar4 + fVar5);
  }
  uVar30 = fastfunc::FastDiffRots(dVar36,(double)(fVar3 * DAT_00841244));
  mobyutil::AccelDeltAng
            (dVar34,(double)DAT_008411f0,(double)DAT_008411f4,(double)DAT_010c5140,param_2 + 8,
             &PTR_DAT_00840000,param_2 + 0x23);
  mobyutil::AccelDeltAng
            (uVar29,(double)DAT_008411f8,(double)DAT_008411fc,(double)DAT_010c5144,param_2 + 9,
             &PTR_DAT_00840000,param_2 + 0x24);
  mobyutil::AccelDeltAng
            (uVar30,(double)DAT_00841200,(double)DAT_00841204,(double)DAT_010c5148,param_2 + 10,
             &PTR_DAT_00840000,param_2 + 0x25);
  camera::camera5::Camera_SetMobyDrivenTargetRot(param_2 + 8);
  mobyutil::AccelDelt((float)((double)(float)((double)DAT_0084121c - (double)DAT_00841218) * dVar37
                             + (double)DAT_00841218),DAT_00841220,DAT_00841224,DAT_00841228,
                      param_2 + 0x27,0x840000,param_2 + 0x2c);
  fVar3 = param_2[0x27] * 0.5;
  fVar5 = fVar3 + 1.5707963;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar23 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar23 = fVar4;
  }
  fVar4 = fVar23 * fVar23;
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar5 = fVar3 * fVar3;
  fVar6 = fVar4 * fVar4 * fVar23;
  fVar7 = fVar4 * fVar6;
  fVar8 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar5 * fVar8;
  ViewContext.xratio =
       (fVar4 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar23 * -0.16666657 + fVar23) /
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
  draw::UpdateViewContext();
  iVar24 = collproc::CollSphere((double)DAT_00841248,&param_1->pos,&PTR_DAT_00840000,0,param_1);
  if ((iVar24 != 0) &&
     ((CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((CollOutput.pMoby)->oClass != RATCHET && ((CollOutput.pMoby)->oClass != 0x192)))))) {
    (param_1->pos).x = CollOutput.push.x;
    (param_1->pos).y = CollOutput.push.y;
    (param_1->pos).z = CollOutput.push.z;
    (param_1->pos).w = CollOutput.push.w;
    fastfunc::FastVecNormalize(uVar19 - 0x140,uVar19 - 0x140,0xa10980);
    dVar32 = ABS((double)*(float *)(puVar14 + 0x1a));
    dVar31 = ABS((double)*(float *)((int)puVar14 + 0xd4));
    dVar37 = (double)(param_1->rotation).z;
    *(float *)(puVar14 + 0x23) = (float)(dVar32 - dVar31);
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xd4) >> 0x1d) & 4;
    dVar36 = dVar32;
    if ((double)*(float *)(puVar14 + 0x23) - dVar34 < 0.0) {
      dVar36 = dVar31;
    }
    fVar3 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    if ((double)*(float *)(puVar14 + 0x23) - dVar34 < 0.0) {
      dVar31 = dVar32;
    }
    fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar32 = dVar34;
    if (dVar34 < dVar36) {
      lVar21 = uVar19 - 0x200;
      lVar27 = uVar19 - 0xac;
      lVar25 = uVar19 - 0xbc;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar36) / (float)(dVar31 + dVar36);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x2c) = fVar5;
      *(float *)(puVar14 + 0x2b) = fVar5;
      *(float *)((int)puVar14 + 0x15c) = fVar5;
      *(float *)((int)puVar14 + 0x154) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar6;
      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar5;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x154) = *(float *)((int)lVar21 + 0x144) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar19 - 0xbc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x154) = *(float *)((int)lVar21 + 0x154) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar22;
      dVar31 = dVar34;
      do {
        iVar24 = (int)lVar21;
        iVar17 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x154)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar32 = (double)((float)(dVar31 + dVar35) * fVar3 + fVar4);
    }
    dVar31 = (double)fastfunc::FastDiffRots(dVar32,dVar37);
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar31 * (double)DAT_00841178));
    fVar3 = *(float *)((int)puVar14 + 0xd4);
    fVar4 = *(float *)(puVar14 + 0x1a);
    (param_1->rotation).z = (float)dVar31;
    dVar37 = (double)(param_1->rotation).y;
    dVar31 = ABS((double)*(float *)(puVar14 + 0x1b));
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    dVar32 = ABS((double)fVar3);
    *(float *)(puVar14 + 0x22) = fVar3;
    *(float *)((int)puVar14 + 0x114) = (float)(dVar32 - dVar31);
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x1b) >> 0x1d) & 4;
    dVar36 = ABS((double)*(float *)(puVar14 + 0x22));
    if ((double)*(float *)((int)puVar14 + 0x114) - dVar34 < 0.0) {
      dVar36 = dVar31;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar14 + 0x114) - dVar34 < 0.0) {
      dVar31 = dVar32;
    }
    dVar32 = dVar34;
    if (dVar34 < dVar36) {
      lVar21 = uVar19 - 0x200;
      lVar25 = uVar19 - 0xdc;
      lVar27 = uVar19 - 0xcc;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar36) / (float)(dVar31 + dVar36);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x28) = fVar5;
      *(float *)(puVar14 + 0x27) = fVar5;
      *(float *)((int)puVar14 + 0x13c) = fVar5;
      *(float *)((int)puVar14 + 0x134) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar6;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar5;
      *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x134) = *(float *)((int)lVar21 + 0x124) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar19 - 0xdc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x134) = *(float *)((int)lVar21 + 0x134) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar21 = 2;
      dVar31 = dVar34;
      do {
        iVar24 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar17 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x134)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar31 + dVar35) * fVar4 + fVar3);
    }
    dVar31 = (double)fastfunc::FastDiffRots(-dVar32,dVar37);
    dVar31 = (double)fastfunc::FastWrapRot((float)dVar37,(float)(dVar31 * (double)DAT_0084117c));
    (param_1->rotation).y = (float)dVar31;
    param_2[0xe] = param_2[0xe] * DAT_00841194;
    DAT_0096b2dc = DAT_0096b2dc - DAT_00841198;
    if ((double)DAT_0096b2dc < dVar34) {
      fastfunc::FastVecNormalize(uVar19 - 0x150,uVar19 - 0x140,0xa10980);
      fVar3 = mobyutil::g_FrameTime;
      fVar4 = *(float *)((int)puVar14 + 0xc4);
      fVar5 = *(float *)(puVar14 + 0x18);
      fVar6 = *(float *)(puVar14 + 0x19);
      dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      fVar3 = (float)((double)(fVar3 * 2.0) / dVar36);
      dVar31 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar31 = (double)(fVar5 * fVar3);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar32 = (double)(fVar4 * fVar3);
      }
      dVar35 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar35 = (double)(fVar6 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar31 = (double)(fVar5 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar32 = (double)(fVar4 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar35 = (double)(fVar6 * fVar3);
      }
      *(float *)(puVar14 + 0x18) = (float)dVar31;
      *(float *)((int)puVar14 + 0xc4) = (float)dVar32;
      *(float *)(puVar14 + 0x19) = (float)dVar35;
      mobyutil::MB_genericExplosion
                (uVar33,0x4059000000000000,0x4030000000000000,uVar33,0x4022000000000000,
                 0x3ff0000000000000,0x4049000000000000,param_1,uVar19 - 0x150,0,&DAT_0036b874,1,0x1e
                 ,10,0x18);
      param_1->state = '\a';
    }
  }
  M426_0036b630(param_1,param_2);
  M426_0036ae68(param_1,param_2);
  dVar31 = (double)fastfunc::FastWrapRot((param_1->rotation).z,-(param_2[0x13] * DAT_0084124c));
  dVar34 = (double)fastfunc::FastWrapRot((param_1->rotation).y,-(param_2[0x14] * DAT_00841250));
  dVar34 = -dVar34;
  iVar24 = fastfunc::FastDecTimerS32(param_2 + 0x19);
  if ((iVar24 != 0) && ((pad_DownButtons & 0x240) != 0)) {
    mobyutil::MB_SphericalToVector
              (DAT_008411a4 * DAT_008411c4,(float)dVar31,(float)dVar34,(float *)(uVar19 - 0x120));
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    bVar2 = *(byte *)((int)param_2 + 0x31);
    *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) + *param_2;
    *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) + fVar3;
    *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) + fVar4;
    mobyfunc::GetBonePosition(param_1,bVar2 & 1,uVar19 - 0x110);
    M1009_00184670((double)DAT_008411c8,0xbff0000000000000,param_1,uVar19 - 0x120,uVar19 - 0x110);
    fVar3 = DAT_008411a8;
    *(byte *)((int)param_2 + 0x31) = *(byte *)((int)param_2 + 0x31) ^ 1;
    param_2[0x19] = fVar3;
  }
  mobyutil::MB_RegisterLameShadow(DAT_008411c0 * DAT_0084118c,param_1);
  return;
}



//==== 0036cab0  ns=mobyupdate_unsorted  size=0xfa4
// sig: undefined UpdateMoby_426(MobyInstance * moby)
// callers(0): 
// callees(23): 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 000b72b0 hero::TransitionMovement; 000c8444 hud::RegisterHUDCallback; 000c8b28 hud::Hud_SetEntryValueById; 000efb38 mobyfunc::DeleteMoby; 000f1114 mobyfunc::GetBonePosition; 000f20f0 mobyutil::MB_BSphereGap; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000fe610 mobyutil::MB_SphericalToVector; 0010675c mobyutil::MB_damage; 0010e030 mobyutil::MB_genericExplosion; 002b9870 FUN_002b9870; 0036b8c8 mobyupdate_helpers::M426_0036b8c8; 004fff60 fastfunc::FastDecTimerS32; 00500608 fastfunc::FastVecNormalize; 00500ca4 fastfunc::FastEulerToMtx1; 00500f6c fastfunc::FastMtxCopyNoTranslate; 00500fa8 fastfunc::FastApplyTransform; 0050162c fastfunc::FastVecMtx4Mul; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502758 fastfunc::FastDoubleToInt

/* Moby 426 */

void mobyupdate_unsorted::UpdateMoby_426(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  f32 fVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  MobyInstance *pMVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
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
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x270;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x50] = in_LR;
  puVar11[0x4a] = in_f28;
  puVar11[0x4b] = in_f29;
  puVar11[0x4c] = in_f30;
  puVar11[0x4d] = in_f31;
  puVar11[0x49] = unaff_r31;
  puVar11[0x48] = unaff_r30;
  puVar11[0x47] = unaff_r29;
  puVar11[0x46] = unaff_r28;
  puVar11[0x45] = unaff_r27;
  puVar11[0x44] = unaff_r26;
  if ((moby != (MobyInstance *)0x0) && (out = (float *)moby->pVar, out != (float *)0x0)) {
    uVar1 = moby->state;
    if ((uVar1 != '\x01' && uVar1 != '\a') &&
       (((uVar1 != '\x02' && (iVar16 = mobyutil::MB_damage(lVar14,0x30001,0), iVar16 != 0)) &&
        (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar10) <
          (int)(((uint)((int)DAT_0096b2dc >> 0x1f) >> 1 ^ (uint)DAT_0096b2dc) -
               ((int)DAT_0096b2dc >> 0x1f))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar16 + 0x2c);
        if ((*(uint *)(iVar16 + 0x30) & 1) != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          GameCamera.offset0.amp = 1.0;
          auVar32 = loadVectorLeftIndexed(in_LR,0x36ca68);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          lVar23 = uVar13 - 0x1b0;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,
                          0x9513c0);
          dVar31 = (double)(*(float *)(iVar16 + 0x2c) * DAT_008411b8);
          mobyutil::MB_SphericalToVector
                    (out[0xe],(moby->rotation).z,-(moby->rotation).y,(float *)lVar23);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar16 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar16 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar16 + 0x18);
          fastfunc::FastVecNormalize(lVar23,lVar23,iVar16 + 0x10);
          fVar3 = ABS(*(float *)(puVar11 + 0x18));
          dVar29 = (double)(moby->rotation).z;
          fVar5 = ABS(*(float *)((int)puVar11 + 0xc4));
          *(float *)(puVar11 + 0x36) = fVar3 - fVar5;
          dVar28 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar4 = fVar5;
          }
          fVar7 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar5 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar25 = dVar28;
          if (0.0 < fVar4) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x6c;
            lVar20 = uVar13 - 0x7c;
            lVar24 = 2;
            fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar11 + 0x40) = fVar4;
            *(float *)(puVar11 + 0x3f) = fVar4;
            *(float *)((int)puVar11 + 0x1fc) = fVar4;
            *(float *)((int)puVar11 + 500) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar5;
            *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar4;
            *(float *)(puVar11 + 0x40) = *(float *)(puVar11 + 0x40) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar4 * fVar4;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x7c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar4 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar4;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 500)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar3);
          }
          dVar25 = (double)fastfunc::FastDiffRots(dVar25,dVar29);
          dVar29 = (double)fastfunc::FastWrapRot
                                     ((float)dVar29,
                                      (float)((double)(float)(dVar25 * (double)DAT_00841178) *
                                             dVar31));
          fVar4 = *(float *)((int)puVar11 + 0xc4);
          fVar5 = *(float *)(puVar11 + 0x18);
          (moby->rotation).z = (float)dVar29;
          dVar30 = (double)(moby->rotation).y;
          dVar29 = ABS((double)*(float *)(puVar11 + 0x19));
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          dVar27 = ABS((double)fVar4);
          *(float *)(puVar11 + 0x35) = fVar4;
          *(float *)((int)puVar11 + 0x1ac) = (float)(dVar27 - dVar29);
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x35));
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar25 = dVar29;
          }
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar29 = dVar27;
          }
          if (dVar28 < dVar25) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x8c;
            lVar20 = uVar13 - 0x9c;
            lVar24 = 2;
            fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            *(float *)(puVar11 + 0x3b) = fVar3;
            *(float *)((int)puVar11 + 0x1dc) = fVar3;
            *(float *)((int)puVar11 + 0x1d4) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar7;
            *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar3;
            *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar4);
          }
          dVar28 = (double)fastfunc::FastDiffRots(dVar28,dVar30);
          dVar28 = (double)fastfunc::FastWrapRot
                                     ((float)dVar30,
                                      (float)((double)(float)(dVar28 * (double)DAT_0084117c) *
                                             dVar31));
          (moby->rotation).y = (float)dVar28;
        }
      }
      else {
        mobyutil::MB_SphericalToVector
                  (out[0xe],(moby->rotation).z,-(moby->rotation).y,(float *)(uVar13 - 0x1a0));
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        GameCamera.offset0.amp = 0.2;
        auVar32 = loadVectorLeftIndexed(0x10,0x36ca68);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,0x9513c0
                       );
        uVar26 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        out[0xd] = 2.52234e-43;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        hero::TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar11[0x12] = 0xffffffffffffffff;
        puVar11[0x14] = 1;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (uVar26,uVar26,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0x1a0,0,0xffffffffffffffff,
                   1,10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x11b4,0x840000);
      auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar32 = loadVectorLeftIndexed(0x18,0x36ca68);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar36);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,0x36ca68);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar34,auVar33,auVar36);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar39);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar38);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (undefined1  [16])0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x1608
                                ,0x969ce0);
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      g_heroMobyPtr->scale = g_heroMobyPtr->pClass->gScale;
      hero::g_heroInvisible = 0;
      hero::TransitionMovement(0,1);
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      camera::camera5::Camera_DeactivateMobyDrivenCam(0);
      hud::Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      if ((MobyInstance *)out[0x15] != (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby((MobyInstance *)out[0x15]);
      }
      out[0x15] = 0.0;
      mobyfunc::DeleteMoby(moby);
    }
    else {
      if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          iVar16 = fastfunc::FastDecTimerS32(out + 0xd);
          if (iVar16 != 0) {
            moby->state = '\x01';
          }
        }
        else if (uVar1 == '\x04') {
          mobyupdate_helpers::M426_0036b8c8(lVar14,out);
        }
        else if (uVar1 == '\x03') {
          dVar31 = (double)((moby->pos).y - g_heroPosition.y);
          dVar25 = (double)((moby->pos).x - g_heroPosition.x);
          dVar29 = (double)((moby->pos).z - g_heroPosition.z);
          dVar28 = (double)fastfunc::FastDiffRots
                                     ((double)(moby->rotation).z,(double)g_heroRotation.z);
          g_heroMobyPtr->scale = g_heroMobyPtr->scale * 0.9;
          if ((SQRT((float)(dVar29 * dVar29 +
                           (double)(float)(dVar25 * dVar25 + (double)(float)(dVar31 * dVar31)))) <
               DAT_00841150) && (dVar28 < (double)DAT_00841154)) {
            mobyutil::MB_SphericalToVector(DAT_00841144,(moby->rotation).z,-(moby->rotation).y,out);
            moby->state = '\x04';
            hero::g_heroInvisible = 1;
          }
          dVar27 = (double)DAT_00841148;
          g_heroPosition.x = (float)(dVar27 * dVar25 + (double)g_heroPosition.x);
          g_heroPosition.y = (float)(dVar27 * dVar31 + (double)g_heroPosition.y);
          g_heroPosition.z = (float)(dVar27 * dVar29 + (double)g_heroPosition.z);
          dVar28 = (double)fastfunc::FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0084114c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x02') {
          hero::TransitionMovement(0x32,1);
          camera::SetCameraPosition(0x951500,0x951510,0,0,0);
          out[0xf] = 0.0;
          out[0x10] = 0.0;
          fVar4 = DAT_00841144;
          out[0x11] = 0.0;
          out[0xe] = fVar4;
          out[0x13] = 0.0;
          out[0x14] = 0.0;
          out[0x1a] = 0.0;
          out[0x19] = 0.0;
          moby->updateDistance = -1;
          pMVar17 = g_heroMobyPtr;
          moby->drawDistance = 0xff;
          pMVar17->collisionMesh = (float *)0xffffffff;
          moby->state = '\x03';
          g_heroPosition.x = DAT_00841148 * ((moby->pos).x - g_heroPosition.x) + g_heroPosition.x;
          g_heroPosition.y = DAT_00841148 * ((moby->pos).y - g_heroPosition.y) + g_heroPosition.y;
          g_heroPosition.z = DAT_00841148 * ((moby->pos).z - g_heroPosition.z) + g_heroPosition.z;
          dVar28 = (double)fastfunc::FastDiffRots
                                     ((double)(moby->rotation).z,(double)g_heroRotation.z);
          dVar28 = (double)fastfunc::FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0084114c * dVar28));
          g_heroRotation.z = (float)dVar28;
          g_heroMobyPtr->scale = g_heroMobyPtr->scale * 0.9;
        }
        else if (uVar1 == '\x01') {
          dVar28 = (double)mobyutil::MB_BSphereGap(lVar14,g_heroMobyPtr);
          if (dVar28 < (double)DAT_00841140) {
            moby->state = '\x02';
            DAT_0096b2d4 = moby->oClass;
            DAT_0096b2ee = 1;
            DAT_0096b2d6 = SUB41(out[0x1b],0);
            DAT_0096b2d7 = (undefined1)DAT_008411a0;
            DAT_0096b2dc = out[0x12];
            DAT_0096b2e0 = DAT_008411b4;
            DAT_0096b2e4 = 0x42c80000;
            DAT_0096b2d9 = 3;
            DAT_0096b2da = 3;
            DAT_0096b2db = 3;
            DAT_0096b2ef = 0;
            DAT_0096b2d0 = moby;
            DAT_0096b2d8 = DAT_0096b2d7;
            iVar16 = hud::RegisterHUDCallback
                               (0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                                &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyMeterHud_00705840
                                ,&DAT_0096b2e8,200);
            DAT_0096b2ec = (short)iVar16;
          }
        }
        else if (uVar1 == '\0') {
          out[0x12] = DAT_00841190;
          moby->state = '\x01';
          fVar4 = DAT_0084119c;
          *(undefined1 *)(out + 0xc) = 0;
          out[0x1b] = fVar4;
          fVar4 = (moby->rotation).x;
          moby->scale = moby->pClass->gScale * DAT_008411c0;
          out[8] = fVar4;
          out[9] = (moby->rotation).x;
          fVar5 = ViewContext.xratio;
          fVar3 = ABS(ViewContext.xratio);
          *(undefined4 *)(puVar11 + 0x34) = 0x3f800000;
          *(float *)((int)puVar11 + 0x1a4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar5 >> 0x1d) & 4;
          fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar7 = ABS(*(float *)(puVar11 + 0x34));
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          if (0.0 < fVar7) {
            lVar23 = uVar13 - 0x260;
            lVar20 = uVar13 - 0xbc;
            lVar22 = uVar13 - 0xac;
            lVar24 = 2;
            fVar3 = (fVar3 - fVar7) / (fVar3 + fVar7);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x38) = fVar3;
            *(float *)(puVar11 + 0x37) = fVar3;
            *(float *)((int)puVar11 + 0x1bc) = fVar3;
            *(float *)((int)puVar11 + 0x1b4) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar7;
            *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar3;
            *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar23 = lVar23 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0xbc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar23 = 2;
            do {
              iVar16 = (int)lVar15;
              iVar12 = (int)lVar22;
              lVar15 = lVar15 + 0x10;
              lVar22 = lVar22 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x1b4) + *(float *)(iVar12 + 4) +
                      *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar5 + fVar6;
          }
          out[0x2c] = 0.0;
          out[0x26] = fVar4 * 2.0;
          out[0x27] = fVar4 * 2.0;
        }
      }
      fVar8 = (moby->pos).x;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar5 = 5.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).x = 5.0;
        fVar4 = fVar5;
      }
      fVar3 = 500.0;
      if (500.0 < fVar4) {
        (moby->pos).x = 500.0;
        fVar4 = fVar3;
      }
      fVar8 = (moby->pos).y;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar7 = (moby->pos).y;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).y = 5.0;
        fVar7 = fVar5;
      }
      if (500.0 < fVar7) {
        (moby->pos).y = 500.0;
        fVar7 = fVar3;
      }
      fVar8 = (moby->pos).z;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar6 = (moby->pos).z;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).z = 5.0;
        fVar6 = fVar5;
      }
      if (500.0 < fVar6) {
        (moby->pos).z = 500.0;
        fVar6 = fVar3;
      }
      bVar2 = moby->state;
      if (bVar2 == 4) {
        g_heroPosition.w = (moby->pos).w;
        g_heroRotation.x = (moby->rotation).x;
        g_heroRotation.y = (moby->rotation).y;
        g_heroRotation.z = (moby->rotation).z;
        g_heroRotation.w = (moby->rotation).w;
        g_heroPosition.x = fVar4;
        g_heroPosition.y = fVar7;
        g_heroPosition.z = fVar6;
      }
      if ((2 < bVar2) && (bVar2 < 5)) {
        pMVar17 = (MobyInstance *)out[0x15];
        if (pMVar17 == (MobyInstance *)0x0) {
          pMVar17 = (MobyInstance *)FUN_002b9870(lVar14);
          out[0x15] = (float)pMVar17;
        }
        if (pMVar17 != (MobyInstance *)0x0) {
          pvVar9 = pMVar17->pVar;
          (pMVar17->rotation).z = DAT_0071f408 * -1.5707964;
          fVar4 = *(float *)((int)pvVar9 + 0xc);
          fVar5 = out[0x2d] * DAT_0084122c + 10.0;
          if (fVar4 <= fVar5) {
            if (fVar4 < fVar5) {
              *(float *)((int)pvVar9 + 0xc) = DAT_0071f408 * 0.35 + fVar4;
            }
          }
          else {
            *(float *)((int)pvVar9 + 0xc) = -(DAT_0071f408 * 0.35 - fVar4);
          }
          cVar18 = fastfunc::FastDoubleToInt((double)(out[0x2d] * 80.0));
          pMVar17->alpha = cVar18 + 'P';
          fastfunc::FastEulerToMtx1(uVar13 - 0x150,&pMVar17->rotation);
          fastfunc::FastMtxCopyNoTranslate(uVar13 - 0x110,lVar14 + 0xc0);
          fastfunc::FastVecMtx4Mul(uVar13 - 400,uVar13 - 0x110,uVar13 - 0x150);
          fastfunc::FastApplyTransform(&(pMVar17->transform).v0,(Vec4 *)(uVar13 - 400));
          mobyfunc::GetBonePosition(lVar14,2,&pMVar17->pos);
          mobyfunc::PostUpdateMobyLockTransform(pMVar17);
        }
      }
    }
  }
  return;
}



//==== 0036da54  ns=mobyupdate_helpers  size=0x14
// sig: undefined M427_0036da54(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M427_0036da54(void)

{
  DAT_008412a8 = 0x10000;
  return;
}



//==== 0036dac0  ns=mobyupdate_helpers  size=0x5b8
// sig: undefined M427_0036dac0(void)
// callers(1): 0036e080 mobyupdate_helpers::M427_0036e080
// callees(8): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 001268f8 partupd::SpawnPart_21; 00126f50 partupd::SpawnPart_23; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M427_0036dac0
               (double param_1,double param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [48];
  
  dVar9 = 1.0;
  uVar10 = 0;
  dVar11 = 0.009999999776482582;
  if (0 < param_8) {
    iVar6 = 0;
    uVar12 = 0x3f747ae140000000;
    dVar13 = 0.10000000149011612;
    dVar14 = 1.0199999809265137;
    dVar15 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)param_8));
    auVar19 = loadVectorLeftIndexed(0x1c,0x36da68);
    auVar19 = auVar19 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    do {
      fastfunc::FastIntToDouble(iVar6);
      mobyutil::MB_randRangeSigned(uVar10,uVar12);
      mobyutil::MB_randRangeSigned(uVar10,uVar12);
      mobyutil::MB_randRangeFloat((float)((double)DAT_00841454 * dVar13),DAT_00841454);
      uVar3 = mobyutil::MB_randRange(0x40,0x70);
      mobyutil::MB_randRange(0x40,0x7f);
      uVar8 = mobyutil::MB_randRangeFloat((float)dVar9,(float)dVar14);
      mobyutil::MB_randRange(0xfffffffffffffffe,2);
      uVar8 = partupd::SpawnPart_23((double)DAT_0084145c,dVar9,uVar8,dVar15,local_e0);
      iVar7 = (int)uVar8;
      if (iVar7 != 0) {
        iVar5 = mobyutil::MB_randInt(2);
        if (iVar5 != 0) {
          *(undefined1 *)(iVar7 + 3) = 0x7e;
          uVar4 = mobyutil::MB_randRange(0x60,0xe0);
          *(uint *)(iVar7 + 4) =
               (uint)((uVar3 & 0xffffffff) << 0x18) |
               (uint)((uVar4 & 0xffffffff) << 0x10) | (uint)((uVar4 & 0xffffffff) << 8) |
               (uint)uVar4;
        }
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar19,auVar16);
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar16 = vectorSplatHalfWord(auVar16,1);
        uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar8);
        *(undefined2 *)(iVar7 + 10) = uVar2;
        *(undefined4 *)(iVar7 + 0x24) = 2;
        *(char *)(iVar7 + 0x2a) = (char)uVar3;
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar19,auVar18);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
        auVar16 = auVar16 >> 0x60 & (undefined1  [16])0xff;
        uVar1 = storeVectorElementByteIndexed
                          (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 |
                           auVar16 << 0x20 | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 |
                           auVar16 << 0x40 | auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 |
                           auVar16 << 0x60 | auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,
                           0x2b,uVar8);
        *(undefined1 *)(iVar7 + 0x2b) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_8);
  }
  mobyutil::MB_randRot();
  mobyutil::MB_randRot();
  dVar14 = 0.029999999329447746;
  mobyutil::MB_randRangeFloat((float)dVar11,0.03);
  dVar13 = 10.5;
  uVar10 = 0x40c3880000000000;
  dVar9 = 20.5;
  mobyutil::MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
  partupd::SpawnPart_21(uVar10,param_4,local_d0,0x4f007fff,0x1fffffff);
  mobyutil::MB_randRot();
  mobyutil::MB_randRot();
  mobyutil::MB_randRangeFloat((float)dVar11,(float)dVar14);
  uVar10 = 0x40d3880000000000;
  mobyutil::MB_randRange
            ((int)((double)animationSpeed * dVar13),(int)((double)animationSpeed * dVar9));
  partupd::SpawnPart_21(uVar10,param_5,local_d0,0x4f007fff,0x1fffffff);
  return;
}



//==== 0036e080  ns=mobyupdate_helpers  size=0x198
// sig: undefined M427_0036e080(void)
// callers(3): 0036e218 mobyupdate_helpers::M427_0036e218; 0036e3c4 mobyupdate_helpers::M427_0036e3c4; 0036e680 mobyupdate_unsorted::UpdateMoby_427
// callees(1): 0036dac0 mobyupdate_helpers::M427_0036dac0

void mobyupdate_helpers::M427_0036e080
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [64];
  
  iVar1 = (int)(param_3 << 4);
  M427_0036dac0((double)(*(float *)(&DAT_008412dc + (int)(param_2 << 4)) * DAT_00841450),
                (double)(*(float *)(&DAT_008412dc + iVar1) * DAT_00841450),param_1,local_50,local_40
                ,param_4,iVar1 + 0x8412d0,param_4);
  return;
}



//==== 0036e218  ns=mobyupdate_helpers  size=0x1ac
// sig: undefined M427_0036e218(void)
// callers(0): 
// callees(1): 0036e080 mobyupdate_helpers::M427_0036e080

void mobyupdate_helpers::M427_0036e218(undefined8 param_1)

{
  M427_0036e080(param_1,0,1,DAT_00841460);
  M427_0036e080(param_1,2,3,DAT_00841464);
  M427_0036e080(param_1,4,5,DAT_00841468);
  M427_0036e080(param_1,5,6,DAT_0084146c);
  M427_0036e080(param_1,6,7,DAT_00841470);
  M427_0036e080(param_1,8,9,DAT_00841468);
  M427_0036e080(param_1,9,10,DAT_0084146c);
  M427_0036e080(param_1,10,0xb,DAT_00841470);
  M427_0036e080(param_1,0xc,0xd,DAT_00841474);
  M427_0036e080(param_1,0xe,0xf,DAT_00841474);
  M427_0036e080(param_1,0x10,0x11,DAT_00841478);
  M427_0036e080(param_1,0x14,0x15,DAT_00841478);
  M427_0036e080(param_1,0x12,0x13,DAT_0084147c);
  M427_0036e080(param_1,0x16,0x17,DAT_0084147c);
  return;
}



//==== 0036e3c4  ns=mobyupdate_helpers  size=0x1d4
// sig: undefined M427_0036e3c4(void)
// callers(0): 
// callees(2): 000efb38 mobyfunc::DeleteMoby; 0036e080 mobyupdate_helpers::M427_0036e080

void mobyupdate_helpers::M427_0036e3c4(MobyInstance *param_1)

{
  MobyInstance *moby;
  
  moby = *(MobyInstance **)((int)param_1->pVar + 0xf8);
  if (moby != (MobyInstance *)0x0) {
    mobyfunc::DeleteMoby(moby);
  }
  M427_0036e080(param_1,0,1,DAT_00841460);
  M427_0036e080(param_1,2,3,DAT_00841464);
  M427_0036e080(param_1,4,5,DAT_00841468);
  M427_0036e080(param_1,5,6,DAT_0084146c);
  M427_0036e080(param_1,6,7,DAT_00841470);
  M427_0036e080(param_1,8,9,DAT_00841468);
  M427_0036e080(param_1,9,10,DAT_0084146c);
  M427_0036e080(param_1,10,0xb,DAT_00841470);
  M427_0036e080(param_1,0xc,0xd,DAT_00841474);
  M427_0036e080(param_1,0xe,0xf,DAT_00841474);
  M427_0036e080(param_1,0x10,0x11,DAT_00841478);
  M427_0036e080(param_1,0x14,0x15,DAT_00841478);
  M427_0036e080(param_1,0x12,0x13,DAT_0084147c);
  M427_0036e080(param_1,0x16,0x17,DAT_0084147c);
  mobyfunc::DeleteMoby(param_1);
  return;
}



//==== 0036e680  ns=mobyupdate_unsorted  size=0x291c
// sig: undefined UpdateMoby_427(MobyInstance * moby)
// callers(0): 
// callees(46): 0001b100 mobyupdate_helpers::M184_0001b100; 00057820 collproc::CollLine; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1038 mobyfunc::GetBoneTransformations; 000f1114 mobyfunc::GetBonePosition; 000f30a0 mobyfunc::PostUpdateMobyLockTransform; 000f31a8 mobyfunc::UpdateMobyTransform; 000f98d8 mobyfunc::UpdateMobyAnimFrame; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe610 mobyutil::MB_SphericalToVector; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffcd0 mobyutil::CollMovingSphere; 00104e44 mobyutil::PointInsideComplexPoly; 00105ab4 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010a788 mobyutil::MB_NormalizeMtx3Columns; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001118d8 mobyutil::MB_getTarget; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0015d12c sound::PlayMobySound; 0036e080 mobyupdate_helpers::M427_0036e080; 003a38c8 FUN_003a38c8; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00500fa8 fastfunc::FastApplyTransform; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt
// strings: 00656740: 'moby 427, instance %d requires both path fields to run!!! DELETING MOBY FROM LEVEL!!\n'

/* WARNING: Type propagation algorithm not settling */
/* Moby 427 */

void mobyupdate_unsorted::UpdateMoby_427(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  MobyInstance *pMVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  uint uVar19;
  undefined8 uVar17;
  longlong lVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort uVar24;
  undefined4 uVar23;
  longlong lVar25;
  int *piVar26;
  ulonglong uVar27;
  u8 uVar28;
  double dVar29;
  undefined8 uVar30;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  Vec4 local_200;
  float local_1f0;
  float local_1ec;
  f32 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  f32 local_1b8;
  undefined1 local_1b0 [16];
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 local_194;
  MobyInstance *local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  Vec4 aVStack_170 [3];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  MobyInstance *local_f0;
  undefined1 auStack_e0 [4];
  float local_dc;
  float local_d8 [4];
  longlong local_c8;
  
  lVar16 = (longlong)(int)moby;
  pvVar9 = moby->pVar;
  uVar27 = ZEXT48(pvVar9);
  iVar22 = 0;
  if ((*(int *)((int)pvVar9 + 0x38) != 0) || (*(char *)((int)pvVar9 + 0xfe) != '\0')) {
    iVar22 = 1;
  }
  mobyutil::MB_SetScaleCheat(0x4008000000000000,uVar27 + 0x110);
  if ((moby->enabled != '\0') &&
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1) < 27.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar16);
    moby->shadow = '\x15';
  }
  if (iVar22 == 0) {
    fVar1 = *(float *)((int)pvVar9 + 0xdc);
  }
  else {
    fVar1 = *(float *)((int)pvVar9 + 0xdc) * 2.0;
  }
  mobyutil::MB_getTarget((double)fVar1,lVar16);
  local_12c = (moby->pos).y - local_12c;
  local_130 = (moby->pos).x - local_130;
  dVar36 = 0.0;
  local_dc = 0.0;
  dVar41 = (double)SQRT(local_130 * local_130 + local_12c * local_12c);
  dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
  dVar35 = (double)local_110;
  dVar34 = (double)local_10c;
  dVar33 = (double)local_108;
  dVar32 = (double)local_104;
  dVar40 = (double)(moby->pos).x;
  dVar38 = (double)(moby->pos).y;
  if ((moby->state != '\0') && (*(char *)((int)pvVar9 + 0x2e) != '\x01')) {
    if (*(MobyInstance **)((int)pvVar9 + 0xf8) != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(*(MobyInstance **)((int)pvVar9 + 0xf8));
    }
    mobyfunc::DeleteMoby(moby);
    return;
  }
  uVar19 = *(uint *)((int)pvVar9 + 0xe0);
  if ((uVar19 == 0xffffffff) || (*(uint *)((int)pvVar9 + 0xe4) == 0xffffffff)) {
    uVar19 = (int)moby - (int)MobyInstance;
    local_c8 = (longlong)(int)(((int)uVar19 >> 8) + (uint)((int)uVar19 < 0 && (uVar19 & 0xff) != 0))
    ;
    uVar17 = fastfunc::FastDoubleToInt((double)local_c8);
    libc::printf("moby 427, instance %d requires both path fields to run!!! DELETING MOBY FROM LEVEL!!\n"
                 ,uVar17);
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar10);
    }
    mobyupdate_helpers::M427_0036e080(lVar16,0,1,DAT_00841460);
    mobyupdate_helpers::M427_0036e080(lVar16,2,3,DAT_00841464);
    mobyupdate_helpers::M427_0036e080(lVar16,4,5,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,5,6,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,6,7,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,8,9,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,9,10,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,10,0xb,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    mobyupdate_helpers::M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    mobyfunc::DeleteMoby(moby);
    return;
  }
  lVar18 = -1;
  lVar25 = 0;
  piVar11 = *(int **)((int)Splines +
                     (int)(((ulonglong)uVar19 +
                            ((LZCOUNT(-(uint)*(ushort *)((int)pvVar9 + 0xe8)) << 0x3a) >> 0x3f &
                            (ulonglong)*(uint *)((int)pvVar9 + 0xe4) - (ulonglong)uVar19) &
                           0xffffffff) << 2));
  dVar39 = dVar36;
  dVar37 = dVar36;
  piVar26 = piVar11;
  if (0 < *piVar11) {
    do {
      dVar31 = (double)SQRT((float)(dVar35 - (double)(float)piVar26[4]) *
                            (float)(dVar35 - (double)(float)piVar26[4]) +
                            (float)(dVar34 - (double)(float)piVar26[5]) *
                            (float)(dVar34 - (double)(float)piVar26[5]));
      if (dVar39 < dVar31) {
        lVar18 = lVar25;
        dVar39 = dVar31;
      }
      lVar25 = lVar25 + 1;
      piVar26 = piVar26 + 4;
    } while ((int)lVar25 < *piVar11);
    if ((int)lVar18 != -1) {
      iVar20 = (int)(lVar18 << 4);
      dVar39 = (double)*(float *)((int)piVar11 + iVar20 + 0x14);
      dVar31 = (double)*(float *)((int)piVar11 + iVar20 + 0x10);
      fVar1 = (float)(dVar39 - dVar38);
      fVar2 = (float)(dVar31 - dVar40);
      dVar37 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      dVar38 = dVar39;
      dVar40 = dVar31;
    }
  }
  iVar20 = mobyutil::MB_damage(lVar16,0x210000,0);
  iVar21 = mobyutil::MB_HandleDamage(moby,iVar20,uVar27 + 0x20,0,auStack_e0,&local_dc,0,4);
  fastfunc::FastDecTimerS16(uVar27 + 0xf0);
  fastfunc::FastDecTimerS16(uVar27 + 0xf2);
  if (((iVar20 != 0) && (moby->state < 0xb)) && (*(short *)((int)pvVar9 + 0xf0) == 0)) {
    local_d8[1] = 1.0;
    pMVar10 = *(MobyInstance **)(iVar20 + 0x20);
    if (pMVar10 == (MobyInstance *)0x0) {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else if (pMVar10 == g_currentWeaponMoby) {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
    }
    else {
      dVar39 = (double)FUN_005e8338((double)((moby->pos).x - (pMVar10->pos).x),
                                    (double)((moby->pos).y - (pMVar10->pos).y));
    }
    local_d8[0] = (float)dVar39;
    fVar1 = *(float *)((int)pvVar9 + 0x20) - local_dc;
    *(float *)((int)pvVar9 + 0x20) = fVar1;
    fVar2 = animationSpeed;
    if ((double)fVar1 <= dVar36) {
      iVar21 = 1;
    }
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x10,0x36e598);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xff;
    uVar12 = storeVectorElementByteIndexed
                       (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 | auVar42 << 0x20
                        | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 | auVar42 << 0x40 |
                        auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 | auVar42 << 0x60 |
                        auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,0xfe,uVar27);
    *(undefined1 *)((int)pvVar9 + 0xfe) = uVar12;
    if (iVar21 < 4) {
      if (0 < iVar21) {
        if (iVar21 < 3) {
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
          fVar1 = DAT_0071f418;
          *(float *)((int)pvVar9 + 0x80) = DAT_0071f418 * 37.0;
          *(float *)((int)pvVar9 + 0x84) = fVar1 * 20.0;
          fVar1 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar9 + 0x88) = mobyutil::g_FrameTime * 17.0;
          *(float *)((int)pvVar9 + 0x8c) = fVar1 * 13.0;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8 + 2,
                     uVar27 + 0x88,uVar27 + 0x8c);
          mobyutil::MB_StartKick((double)local_d8[2],lVar16,uVar27 + 0x70);
          *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41400000;
          *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41c80000;
          moby->state = '\v';
          mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
        }
        else {
LAB_0036edcc:
          *(undefined1 *)((int)pvVar9 + 0x67) = 0x96;
          iVar21 = (int)(fVar2 * 5.5);
          local_c8 = (longlong)iVar21;
          mobyutil::MB_SetAnimation(lVar16,8,0,iVar21);
          moby->state = '\b';
          sVar7 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
          if ((sVar7 == 0x131) || (sVar7 == 0xb0)) {
            fVar1 = (2.0 / (animationSpeed * 15.0)) * 0.5;
          }
          else {
            fVar1 = 2.0 / (animationSpeed * 15.0);
          }
          *(float *)((int)pvVar9 + 0xf4) = fVar1;
          mobyutil::MB_VecAtan2Angles
                    (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8,
                     uVar27 + 0xf4,local_d8 + 1);
          dVar36 = (double)fastfunc::FastWrapRot(3.1415927,local_d8[0]);
          (moby->rotation).z = (float)dVar36;
        }
      }
    }
    else if (iVar21 < 7) {
      if (5 < iVar21) goto LAB_0036edcc;
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      iVar21 = (int)(fVar2 * 5.5);
      local_c8 = (longlong)iVar21;
      mobyutil::MB_SetAnimation(lVar16,0xc,0,iVar21);
      moby->state = '\n';
      *(float *)((int)pvVar9 + 0xf4) = 2.0 / (animationSpeed * 15.0);
      mobyutil::MB_VecAtan2Angles
                (*(undefined8 *)(iVar20 + 0x10),*(undefined8 *)(iVar20 + 0x18),local_d8,
                 uVar27 + 0xf4,local_d8 + 1);
      dVar36 = (double)fastfunc::FastWrapRot(3.1415927,local_d8[0]);
      (moby->rotation).z = (float)dVar36;
    }
    mobyutil::MB_UpdateLightsTransition(lVar16,uVar27 + 0x60);
  }
  moby->damage = -1;
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    auVar42 = ZEXT416(0xffffffff);
    auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
    auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
    auVar42 = loadVectorLeftIndexed(0x10,0x36e598);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar42 = vectorMultiplyAddFloatingPoint
                        (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                         auVar43);
    auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
    auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xff;
    uVar12 = storeVectorElementByteIndexed
                       (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 | auVar42 << 0x20
                        | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38 | auVar42 << 0x40 |
                        auVar42 << 0x48 | auVar42 << 0x50 | auVar42 << 0x58 | auVar42 << 0x60 |
                        auVar42 << 0x68 | auVar42 << 0x70 | auVar42 << 0x78,0xfe,uVar27);
    *(undefined1 *)((int)pvVar9 + 0xfe) = uVar12;
  }
  *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  fastfunc::FastDecTimerU8(uVar27 + 0xfe);
  fastfunc::FastDecTimerS32(uVar27 + 0x108);
  fVar1 = animationSpeed;
  bVar3 = moby->state;
  if (bVar3 < 5) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        MVar8 = moby->modeBits;
        *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
        *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
        moby->modeBits = MVar8 | CAN_BE_AUTO_TARGETED;
        *(undefined1 *)((int)pvVar9 + 0x28) = 1;
        *(undefined1 *)((int)pvVar9 + 0x2e) = 1;
        *(undefined1 *)((int)pvVar9 + 0x29) = 1;
        *(undefined2 *)((int)pvVar9 + 0xf0) = 0;
        *(undefined2 *)((int)pvVar9 + 0x24) = 2;
        *(undefined1 *)((int)pvVar9 + 0xfe) = 0;
        *(undefined1 *)((int)pvVar9 + 0xff) = 0;
        fVar4 = (moby->pos).z;
        *(undefined1 *)((int)pvVar9 + 0x58) = 8;
        *(f32 *)((int)pvVar9 + 0xd4) = fVar4;
        *(undefined1 *)((int)pvVar9 + 0x5a) = 10;
        uVar19 = rand();
        if ((uVar19 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(char *)((int)pvVar9 + 0xfc) == '\0') {
          uVar19 = rand();
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation
                    (lVar16,(LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1,0,
                     (int)(animationSpeed * 10.5));
          moby->state = '\x01';
        }
        else {
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 10.5));
          moby->state = '\x05';
        }
      }
      else {
        if ((moby->field43_0x70 & 2U) != 0) {
          uVar19 = rand();
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation
                    (lVar16,(LZCOUNT(-(uVar19 & 1)) << 0x3a) >> 0x3f & 1,0,
                     (int)(animationSpeed * 10.5));
        }
        uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                              (double)(float)(dVar34 - (double)(moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                   (double)(mobyutil::g_FrameTime * 7.330383),lVar16,&DAT_00720000,uVar27 + 0xec);
        if (iVar22 == 0) {
          if ((dVar41 > 2.5) && (1.0 < dVar37)) {
            if (14.0 < dVar41) {
              local_c8 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar16,10,0,(int)(animationSpeed * 8.5));
              moby->state = '\x02';
              goto LAB_00370a44;
            }
            if ((dVar41 < 8.0) && (*(int *)((int)pvVar9 + 0x108) == 0)) {
              local_c8 = (longlong)(int)(animationSpeed * 8.5);
              mobyutil::MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 8.5));
              moby->state = '\x03';
              goto LAB_00370a44;
            }
          }
          if ((14.0 <= dVar41) || ((dVar41 < 2.5 || (8.0 <= ABS((moby->pos).z - local_128))))) {
            if (dVar41 <= 2.5) {
              if (*(short *)((int)pvVar9 + 0xf2) < 1) {
                moby->state = '\a';
                local_c8 = (longlong)(int)(animationSpeed * 7.5);
                mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
              }
              else {
                auVar42 = ZEXT416(0xffffffff);
                auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
                auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
                auVar42 = loadVectorLeftIndexed(0x5c,0x36e598);
                auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
                auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar42 = vectorMultiplyAddFloatingPoint
                                    (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 |
                                             auVar42 << 0x60,auVar43);
                local_c8 = (longlong)(int)(animationSpeed * 20.5);
                auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
                if ((int)(animationSpeed * 20.5) < (int)*(short *)((int)pvVar9 + 0xf2)) {
                  auVar42 = vectorSplatHalfWord(auVar42,1);
                  uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
                  *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
                }
              }
            }
          }
          else if (((*(short *)((int)pvVar9 + 0xf2) == 0) &&
                   (iVar22 = collproc::CollLine(local_240,local_230,0,lVar16,0), iVar22 != 0)) &&
                  (CollOutput.pMoby == local_f0)) {
            moby->state = '\x05';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
          }
        }
        else {
          local_c8 = (longlong)(int)(animationSpeed * 8.5);
          mobyutil::MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 8.5));
          moby->state = '\x03';
        }
      }
    }
    else if (bVar3 < 3) {
      if ((dVar41 < 13.0) || (uVar17 = 0x3ff0000000000000, dVar37 < 1.0)) {
        local_c8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        moby->state = '\x01';
      }
      else {
        uVar30 = FUN_005e8338((double)(float)(dVar40 - (double)(moby->pos).x),
                              (double)(float)(dVar38 - (double)(moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar30,(double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),
                   (double)(mobyutil::g_FrameTime * 4.712389),lVar16,&DAT_00720000,uVar27 + 0xec);
        fVar1 = 0.7853982;
        fVar2 = *(float *)((int)pvVar9 + 0xec) * 30.0;
        if ((fVar2 <= 0.7853982) && (fVar1 = fVar2, fVar2 < -0.7853982)) {
          fVar1 = -0.7853982;
        }
        *(float *)((int)pvVar9 + 0x178) = fVar1 * 0.7;
        *(float *)((int)pvVar9 + 0x1f8) = fVar1 * 0.4;
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        mobyutil::CollMovingSphere
                  (0x3fe0000000000000,uVar17,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                   lVar16 + 0x10,local_220);
      }
    }
    else if (bVar3 < 4) {
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(0x80,0x36e598);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x108,uVar27
                         );
      *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar23;
      if (iVar22 == 0) {
        dVar32 = 1.0;
        if (dVar41 < 1.0) {
          dVar33 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                        (double)(float)(dVar34 - (double)(moby->pos).y));
          dVar33 = (double)fastfunc::FastSubRots((float)dVar33,(moby->rotation).z);
          fVar1 = animationSpeed;
          if (dVar33 < 0.2617993950843811) {
            moby->state = '\a';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
            goto LAB_00370a44;
          }
        }
        if (dVar41 <= 9.0) {
          if (dVar32 <= dVar37) {
            uVar17 = FUN_005e8338((double)(float)(dVar40 - (double)(moby->pos).x),
                                  (double)(float)(dVar38 - (double)(moby->pos).y));
            mobyutil::OrganicDeltAngSpeed
                      (uVar17,(double)(DAT_0071f40c * 0.035),(double)(DAT_0071f40c * 0.3),
                       (double)(mobyutil::g_FrameTime * 4.712389),lVar16);
            dVar38 = (double)mathfunc::cosf((moby->rotation).z);
            dVar40 = 6.0;
            local_1f0 = (float)((double)(mobyutil::g_FrameTime * 6.0) * dVar38);
            dVar38 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_1f0 = local_1f0 + (moby->pos).x;
            local_1e8 = (moby->pos).z;
            local_1ec = (float)((double)(float)((double)mobyutil::g_FrameTime * dVar40) * dVar38 +
                               (double)(moby->pos).y);
            mobyutil::CollMovingSphere
                      (0x3fe0000000000000,dVar32,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                       lVar16 + 0x10,&local_1f0);
          }
          else {
            local_c8 = (longlong)(int)(fVar1 * 10.5);
            mobyutil::MB_SetAnimation(lVar16,0,0,(int)(fVar1 * 10.5));
            moby->state = '\x01';
          }
        }
        else {
          moby->state = '\x05';
          local_c8 = (longlong)(int)(animationSpeed * 7.5);
          mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                              (double)(float)(dVar34 - (double)(moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                   (double)(mobyutil::g_FrameTime * 4.886922),lVar16);
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        local_200.x = (moby->pos).x;
        local_200.y = (moby->pos).y;
        local_200.z = (moby->pos).z;
        local_200.w = (moby->pos).w;
        dVar38 = 1.0;
        iVar22 = mobyutil::CollMovingSphere
                           (0x3fe0000000000000,0x3ff0000000000000,0x3fe0000000000000,
                            0x3fe0c15240000000,lVar16,&local_200,local_210);
        if ((iVar22 == 0) ||
           (iVar22 = mobyutil::PointInsideComplexPoly(&local_200,(Vec4 *)(piVar11 + 4),*piVar11),
           iVar22 == 0)) {
          uVar28 = '\0';
        }
        else {
          uVar28 = '\v';
          (moby->pos).x = local_200.x;
          (moby->pos).y = local_200.y;
          (moby->pos).z = local_200.z;
          (moby->pos).w = local_200.w;
        }
        iVar22 = fastfunc::FastDecTimerU8(uVar27 + 0xff);
        if ((iVar22 != 0) && (uVar28 != moby->animationId)) {
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,uVar28,0,(int)(animationSpeed * 10.5));
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar44 = loadVectorLeftIndexed(0x8c,0x36e598);
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = auVar44 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xff;
          uVar12 = storeVectorElementByteIndexed
                             (auVar42 | auVar42 << 8 | auVar42 << 0x10 | auVar42 << 0x18 |
                              auVar42 << 0x20 | auVar42 << 0x28 | auVar42 << 0x30 | auVar42 << 0x38
                              | auVar42 << 0x40 | auVar42 << 0x48 | auVar42 << 0x50 |
                              auVar42 << 0x58 | auVar42 << 0x60 | auVar42 << 0x68 | auVar42 << 0x70
                              | auVar42 << 0x78,0xff,uVar27);
          *(undefined1 *)((int)pvVar9 + 0xff) = uVar12;
        }
        if (*(short *)((int)pvVar9 + 0xf2) == 0) {
          if (dVar41 < dVar38) {
            dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                          (double)(float)(dVar34 - (double)(moby->pos).y));
            dVar38 = (double)fastfunc::FastSubRots((float)dVar38,(moby->rotation).z);
            if (dVar38 < 0.2617993950843811) {
              moby->state = '\a';
              local_c8 = (longlong)(int)(animationSpeed * 7.5);
              mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
              *(undefined1 *)((int)pvVar9 + 0xff) = 0;
              goto LAB_00370a44;
            }
          }
          if (dVar41 < 14.0) {
            moby->state = '\x05';
            local_c8 = (longlong)(int)(animationSpeed * 7.5);
            mobyutil::MB_SetAnimation(lVar16,3,0,(int)(animationSpeed * 7.5));
            *(undefined1 *)((int)pvVar9 + 0xff) = 0;
          }
        }
      }
    }
    else if (moby->animationId == '\x02') {
      if ((moby->field43_0x70 & 2U) != 0) {
        local_c8 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar16,0,0,(int)(animationSpeed * 10.5));
        moby->state = '\x01';
      }
    }
    else {
      local_c8 = (longlong)(int)(animationSpeed * 7.5);
      mobyutil::MB_SetAnimation(lVar16,2,0,(int)(animationSpeed * 7.5));
      *(float *)((int)pvVar9 + 0xd0) = mobyutil::g_FrameTime * -7.668;
    }
  }
  else if (bVar3 < 8) {
    if (bVar3 < 6) {
      uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                            (double)(float)(dVar34 - (double)(moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 5.5850534),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\x04')) {
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 7.5));
      }
      if (((iVar22 == 0) && (2.5 < dVar41)) && (1.0 < dVar37)) {
        if (14.0 < dVar41) {
          local_c8 = (longlong)(int)(animationSpeed * 9.5);
          mobyutil::MB_SetAnimation(lVar16,10,0,(int)(animationSpeed * 9.5));
          moby->state = '\x02';
          goto LAB_00370a44;
        }
        if ((dVar41 < 8.0) && (*(int *)((int)pvVar9 + 0x108) == 0)) {
          local_c8 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar16,0xb,0,(int)(animationSpeed * 5.5));
          moby->state = '\x03';
          goto LAB_00370a44;
        }
      }
      if (2.5 <= dVar41) {
        auVar42 = loadVectorLeftIndexed(0xa8,0x36e598);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        if (((*(short *)((int)pvVar9 + 0xf2) == 0) && (dVar41 < 14.0)) &&
           (ABS((moby->pos).z - local_128) < 4.0)) {
          dVar40 = (double)GameCamera.rot.radius;
          dVar38 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar38 = (double)fastfunc::FastSubRots((float)dVar40,(float)dVar38);
          if (dVar38 < 0.6108652353286743) {
            dVar40 = (double)(moby->rotation).z;
            dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                                          (double)(float)(dVar34 - (double)(moby->pos).y));
            dVar38 = (double)fastfunc::FastSubRots((float)dVar40,(float)dVar38);
            if (dVar38 < 0.7853981852531433) {
              moby->state = '\x06';
              local_c8 = (longlong)(int)(animationSpeed * 7.5);
              mobyutil::MB_SetAnimation(lVar16,5,0,(int)(animationSpeed * 7.5));
              auVar43 = ZEXT416(0xffffffff);
              auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
              auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
              auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar42,auVar43);
              auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
              auVar42 = vectorSplatHalfWord(auVar42,1);
              uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
              *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
              *(undefined1 *)((int)pvVar9 + 0xfd) = 3;
              goto LAB_00370a44;
            }
          }
        }
        if (14.0 < dVar41) {
          moby->state = ((byte)((LZCOUNT(-iVar22) << 0x3a) >> 0x3f) & 0xfe) + 3;
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,6,0,(int)(animationSpeed * 10.5));
          auVar43 = ZEXT416(0xffffffff);
          auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar42,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
          *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
        }
      }
      else {
        moby->state = '\a';
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
      }
    }
    else if (bVar3 < 7) {
      uVar17 = FUN_005e8338((double)(local_110 - (moby->pos).x),(double)(local_10c - (moby->pos).y))
      ;
      mobyutil::OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 4.712389),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (dVar41 < 2.5) {
        moby->state = '\a';
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        mobyutil::MB_SetAnimation(lVar16,7,0,(int)(animationSpeed * 7.5));
      }
      if (((moby->animationId != '\x05') ||
          (uVar19 = (int)*(uint *)((int)pvVar9 + 0xd8) >> 0x1f,
          0x3fffffff < (int)((uVar19 >> 1 ^ *(uint *)((int)pvVar9 + 0xd8)) - uVar19) || dVar29 < 2.0
          )) || (*(int *)((int)pvVar9 + 0xf8) == 0)) {
        if ((((moby->field43_0x70 & 2U) != 0) && (*(short *)((int)pvVar9 + 0xf2) == 0)) &&
           (*(char *)((int)pvVar9 + 0xfd) == '\0')) {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          auVar42 = loadVectorLeftIndexed(0xb8,0x36e598);
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar42 = vectorMultiplyAddFloatingPoint
                              (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60
                               ,auVar43);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
          *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
          moby->state = '\x05';
          local_c8 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar16,4,0,(int)(animationSpeed * 10.5));
        }
      }
      else {
        mobyfunc::GetBonePosition(*(int *)((int)pvVar9 + 0xf8),0,&local_1e0);
        local_1d0 = (float)(dVar35 - (double)local_1e0);
        local_1cc = (float)(dVar34 - (double)local_1dc);
        local_1c4 = (float)dVar32;
        local_1c8 = (float)(dVar33 - (double)local_1d8);
        dVar38 = (double)FUN_005e8338();
        dVar40 = (double)fastfunc::FastSubRots((float)dVar38,(moby->rotation).z);
        if (0.2617993950843811 < dVar40) {
          dVar38 = (double)(moby->rotation).z;
        }
        dVar40 = (double)FUN_005e8338((double)SQRT(local_1d0 * local_1d0 + local_1cc * local_1cc),
                                      (double)local_1c8);
        dVar32 = 10.0;
        mobyutil::MB_SphericalToVector
                  (mobyutil::g_FrameTime * 10.0,(float)dVar38,(float)dVar40,&local_1d0);
        iVar22 = sound::PlayMobySound(7,0,moby);
        fastfunc::FastDoubleToInt
                  ((double)(14.0 / (float)((double)mobyutil::g_FrameTime * dVar32)),iVar22);
        mobyupdate_helpers::M184_0001b100(lVar16);
        fastfunc::FastDecTimerU8(uVar27 + 0xfd);
      }
    }
    else {
      uVar17 = FUN_005e8338((double)(float)(dVar35 - (double)(moby->pos).x),
                            (double)(float)(dVar34 - (double)(moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar17,(double)(DAT_0071f40c * 0.04),(double)(DAT_0071f40c * 0.3),
                 (double)(mobyutil::g_FrameTime * 5.5850534),lVar16,&DAT_00720000,uVar27 + 0xec);
      if (((moby->updateId == moby->animationId) && (12.0 <= dVar29)) &&
         ((dVar29 < 13.0 && (ABS((moby->pos).z - local_128) < 2.0)))) {
        dVar40 = (double)(moby->pos).y;
        dVar38 = (double)(moby->pos).x;
        fVar1 = (float)(dVar40 - dVar34);
        fVar2 = (float)(dVar38 - dVar35);
        uVar17 = 0x3ff0000000000000;
        if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 1.0) {
          dVar38 = (double)FUN_005e8338((double)(float)(dVar35 - dVar38),
                                        (double)(float)(dVar34 - dVar40));
          dVar38 = (double)fastfunc::FastSubRots((float)dVar38,(moby->rotation).z);
          if (dVar38 < 0.2617993950843811) {
            dVar38 = (double)mathfunc::cosf((moby->rotation).z);
            dVar40 = 0.20000000298023224;
            local_1a0 = (float)(dVar38 * 0.20000000298023224);
            dVar38 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_19c = (float)(dVar38 * dVar40);
            local_198 = 0;
            local_18c = 1;
            local_184 = 0x3f800000;
            local_190 = moby;
            FUN_005e84c0(uVar17,&local_1a0,&local_1a0);
            local_198 = 0x3f800000;
            local_188 = CONCAT22(1,moby->oClass);
            local_194 = 0x45afdf66;
            if (local_f0 != (MobyInstance *)0x0) {
              mobyutil::CollDamageMobyDirect
                        (local_f0,0x40,CONCAT44(local_1a0,local_19c),0x3f80000045afdf66,
                         CONCAT44(local_190,local_18c),CONCAT44(local_188,local_184),
                         CONCAT44(uStack_180,uStack_17c),CONCAT44(uStack_178,uStack_174));
            }
          }
        }
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar42 = ZEXT416(0xffffffff);
        auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
        moby->state = '\x05';
        fVar1 = animationSpeed;
        auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
        auVar42 = loadVectorLeftIndexed(0x5c,0x36e598);
        auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar42 = vectorMultiplyAddFloatingPoint
                            (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                             auVar43);
        auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
        auVar42 = vectorSplatHalfWord(auVar42,1);
        uVar13 = storeVectorElementHalfWordIndexed(auVar42,0xf2,uVar27);
        *(undefined2 *)((int)pvVar9 + 0xf2) = uVar13;
        local_c8 = (longlong)(int)(fVar1 * 7.5);
        mobyutil::MB_SetAnimation(lVar16,4,0,(int)(fVar1 * 7.5));
      }
    }
  }
  else if (bVar3 < 0xb) {
    if (0 < *(int *)((int)pvVar9 + 0xf4)) {
      dVar40 = 3.1415927410125732;
      dVar38 = (double)fastfunc::FastWrapRot((moby->rotation).z,3.1415927);
      dVar38 = (double)mathfunc::cosf((float)dVar38);
      local_1c0 = (float)(dVar38 * (double)*(float *)((int)pvVar9 + 0xf4));
      fastfunc::FastWrapRot((moby->rotation).z,(float)dVar40);
      dVar38 = (double)FUN_005e8128();
      local_1c0 = local_1c0 + (moby->pos).x;
      local_1bc = (float)(dVar38 * (double)*(float *)((int)pvVar9 + 0xf4) + (double)(moby->pos).y);
      local_1b8 = (moby->pos).z;
      *(float *)((int)pvVar9 + 0xf4) =
           *(float *)((int)pvVar9 + 0xf4) + -2.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
      mobyutil::CollMovingSphere
                (0x3fe0000000000000,0x3ff0000000000000,0x3fe0000000000000,0x3fe0c15240000000,lVar16,
                 lVar16 + 0x10,&local_1c0);
    }
    fVar1 = animationSpeed;
    if ((moby->field43_0x70 & 2U) != 0) {
      *(ushort *)((int)pvVar9 + 0xe8) = *(ushort *)((int)pvVar9 + 0xe8) ^ 1;
      local_c8 = (longlong)(int)(fVar1 * 9.5);
      mobyutil::MB_SetAnimation
                (lVar16,(LZCOUNT(9 - (uint)moby->state) << 0x3a) >> 0x3f & 9,0,(int)(fVar1 * 9.5));
      auVar42 = ZEXT416(0xffffffff);
      auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
      moby->state = '\x01';
      auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
      auVar42 = loadVectorLeftIndexed(200,0x36e598);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar42 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                           auVar43);
      auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
      auVar42 = auVar42 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,0x108,uVar27
                         );
      *(undefined4 *)((int)pvVar9 + 0x108U & 0xfffffffc) = uVar23;
    }
  }
  else if ((bVar3 < 0xc) &&
          (uVar19 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar9 + 0x70)),
          (uVar19 & 0x60) != 0)) {
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar10);
    }
    mobyupdate_helpers::M427_0036e080(lVar16,0,1,DAT_00841460);
    mobyupdate_helpers::M427_0036e080(lVar16,2,3,DAT_00841464);
    mobyupdate_helpers::M427_0036e080(lVar16,4,5,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,5,6,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,6,7,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,8,9,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,9,10,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,10,0xb,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    mobyupdate_helpers::M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    mobyfunc::DeleteMoby(moby);
    return;
  }
LAB_00370a44:
  mobyutil::MB_ColorDyingMoby(lVar16,uVar27 + 0x60);
  uVar28 = moby->state;
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  if (((uVar28 == '\x01') || (uVar28 == '\x03')) ||
     ((uVar28 == '\x04' || ((uVar28 == '\x05' || (uVar28 == '\x06')))))) {
    uVar19 = (uint)((LZCOUNT(-(int)local_f0) << 0x3a) >> 0x3f) & (int)g_heroMobyPtr - (int)local_f0;
    fVar5 = *(float *)((int)&(local_f0->pos).y + uVar19);
    fVar6 = *(float *)((int)&(local_f0->pos).x + uVar19);
    fVar15 = fVar2 - fVar5;
    fVar14 = fVar1 - fVar6;
    if (SQRT(fVar14 * fVar14 + fVar15 * fVar15) < 24.0) {
      uVar17 = FUN_005e8338((double)(fVar6 - fVar1),(double)(fVar5 - fVar2));
      dVar40 = (double)fastfunc::FastDiffRots(uVar17,(double)(moby->rotation).z);
      dVar38 = 0.9599310755729675;
      if ((dVar40 <= 0.9599310755729675) && (dVar38 = dVar40, dVar40 < -0.9599310755729675)) {
        dVar38 = -0.9599310755729675;
      }
      *(float *)((int)pvVar9 + 0x178) = (float)(dVar38 * 0.5);
      *(float *)((int)pvVar9 + 0x1f8) = (float)(dVar38 * 0.5);
    }
  }
  if ((moby->modeBits & MIRROR) != NONE) {
    *(float *)((int)pvVar9 + 0x178) = -*(float *)((int)pvVar9 + 0x178);
    *(float *)((int)pvVar9 + 0x1f8) = -*(float *)((int)pvVar9 + 0x1f8);
  }
  dVar38 = 0.30000001192092896;
  mobyutil::MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.018),(double)(DAT_0071f40c * 0.3),lVar16,uVar27 + 0x110,5);
  mobyutil::MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * 0.024000000208616257),
             (double)(float)((double)DAT_0071f40c * dVar38),lVar16,uVar27 + 400,6);
  if (*(int *)((int)pvVar9 + 0xf8) == 0) {
    mobyfunc::GetBonePosition(lVar16,1,local_1b0);
    uVar23 = FUN_003a38c8(lVar16);
    *(undefined4 *)((int)pvVar9 + 0xf8) = uVar23;
  }
  else {
    mobyfunc::GetBoneTransformations(lVar16,1,aVStack_170);
    iVar22 = *(int *)((int)pvVar9 + 0xf8);
    *(undefined4 *)(iVar22 + 0x10) = local_140;
    *(undefined4 *)(iVar22 + 0x14) = local_13c;
    *(undefined4 *)(iVar22 + 0x18) = local_138;
    *(undefined4 *)(iVar22 + 0x1c) = local_134;
    mobyfunc::UpdateMobyAnimFrame(*(undefined4 *)((int)pvVar9 + 0xf8));
    mobyfunc::UpdateMobyTransform(*(MobyInstance **)((int)pvVar9 + 0xf8));
    fastfunc::FastApplyTransform((Vec4 *)(*(int *)((int)pvVar9 + 0xf8) + 0xc0),aVStack_170);
    mobyutil::MB_NormalizeMtx3Columns((ulonglong)*(uint *)((int)pvVar9 + 0xf8) + 0xc0);
    if ((moby->modeBits & DISABLED) == NONE) {
      iVar22 = *(int *)((int)pvVar9 + 0xf8);
      uVar24 = *(ushort *)(iVar22 + 0x34) & 0xffbe;
    }
    else {
      iVar22 = *(int *)((int)pvVar9 + 0xf8);
      uVar24 = *(ushort *)(iVar22 + 0x34) | 0x41;
    }
    *(ushort *)(iVar22 + 0x34) = uVar24;
    mobyfunc::PostUpdateMobyLockTransform(*(MobyInstance **)((int)pvVar9 + 0xf8));
    *(ushort *)(*(int *)((int)pvVar9 + 0xf8) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar9 + 0xf8) + 0x34) | 6;
  }
  fVar1 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar9 + 0xd0);
  *(float *)((int)pvVar9 + 0xd0) = fVar1;
  dVar40 = 2.0;
  (moby->pos).z = (moby->pos).z - (fVar1 - 2.0);
  dVar38 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar16 + 0x10,0);
  fVar1 = (float)((double)(moby->pos).z - dVar40);
  dVar40 = (double)fVar1;
  (moby->pos).z = fVar1;
  if (dVar40 < dVar38) {
    (moby->pos).z = (float)dVar38;
    *(undefined4 *)((int)pvVar9 + 0xd0) = 0;
    dVar40 = (double)(moby->pos).z;
  }
  if ((double)(*(float *)((int)pvVar9 + 0xd4) - 5.0) <= dVar40) {
    *(float *)((int)pvVar9 + 0xd8) = (float)dVar29;
  }
  else {
    mobyutil::MB_SpawnBoltsFromCrate(lVar16,0,0xffffffffffffffff);
    pMVar10 = *(MobyInstance **)((int)moby->pVar + 0xf8);
    if (pMVar10 != (MobyInstance *)0x0) {
      mobyfunc::DeleteMoby(pMVar10);
    }
    mobyupdate_helpers::M427_0036e080(lVar16,0,1,DAT_00841460);
    mobyupdate_helpers::M427_0036e080(lVar16,2,3,DAT_00841464);
    mobyupdate_helpers::M427_0036e080(lVar16,4,5,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,5,6,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,6,7,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,8,9,DAT_00841468);
    mobyupdate_helpers::M427_0036e080(lVar16,9,10,DAT_0084146c);
    mobyupdate_helpers::M427_0036e080(lVar16,10,0xb,DAT_00841470);
    mobyupdate_helpers::M427_0036e080(lVar16,0xc,0xd,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0xe,0xf,DAT_00841474);
    mobyupdate_helpers::M427_0036e080(lVar16,0x10,0x11,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x14,0x15,DAT_00841478);
    mobyupdate_helpers::M427_0036e080(lVar16,0x12,0x13,DAT_0084147c);
    mobyupdate_helpers::M427_0036e080(lVar16,0x16,0x17,DAT_0084147c);
    mobyfunc::DeleteMoby(moby);
  }
  return;
}



