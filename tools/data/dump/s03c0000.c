//==== 003c0314  ns=mobyupdate_helpers  size=0x78
// sig: undefined M866_003c0314(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

undefined8 mobyupdate_helpers::M866_003c0314(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x0e') {
      param_1->state = '\x01';
    }
  }
  else if ((param_1->oClass == SMALL_SLIME) && (param_1->state != '\b')) {
    param_1->state = '\x0e';
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 003c038c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M866_003c038c(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M866_003c038c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x0e') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xe;
  }
  return;
}



//==== 003c03e4  ns=mobyupdate_helpers  size=0x58
// sig: undefined M866_003c03e4(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M866_003c03e4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x0e') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 0xe;
  }
  return;
}



//==== 003c043c  ns=mobyupdate_helpers  size=0x38
// sig: undefined M866_003c043c(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M866_003c043c(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}



//==== 003c0474  ns=mobyupdate_helpers  size=0x40
// sig: undefined M866_003c0474(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M866_003c0474(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xc0;
    lVar1 = lVar1 + ((LZCOUNT(-*(uint *)(param_1 + 0x78)) << 0x3a) >> 0x3f & -lVar1);
  }
  return lVar1;
}



//==== 003c04b4  ns=mobyupdate_helpers  size=0x14
// sig: undefined M866_003c04b4(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M866_003c04b4(void)

{
  DAT_00845f28 = 0x10000;
  return;
}



//==== 003c04c8  ns=mobyupdate_helpers  size=0x40
// sig: undefined M866_003c04c8(void)
// callers(1): 003c220c mobyupdate_helpers::M574_003c220c
// callees(0): 

undefined8 mobyupdate_helpers::M866_003c04c8(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    if (((cVar1 != -3 && cVar1 != -2) && (*(short *)(param_1 + 0xa6) == 0x23d)) && (cVar1 == '\x05')
       ) {
      return 1;
    }
  }
  return 0;
}



//==== 003c0528  ns=mobyupdate_helpers  size=0x450
// sig: undefined M573_003c0528(void)
// callers(1): 003c0a18 mobyupdate_unsorted::UpdateMoby_573
// callees(9): 00104298 mobyutil::MB_SetGroupField; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 001158b0 mobyutil::MB_SetupJumpArc; 003c2108 mobyupdate_helpers::M573_003c2108; 004fff60 fastfunc::FastDecTimerS32

void mobyupdate_helpers::M573_003c0528(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r28;
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
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x17] = unaff_r30;
  puVar8[0x18] = unaff_r31;
  pvVar6 = param_1->pVar;
  uVar19 = ZEXT48(pvVar6);
  iVar13 = *(int *)((int)pvVar6 + 0x38);
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  if ((iVar13 != 0) ||
     ((*(int *)((int)pvVar6 + 0x248) != -1 &&
      (iVar13 = M573_003c2108(MobyInstance + *(int *)((int)pvVar6 + 0x248)), iVar13 != 0)))) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(in_LR,0x3c0508);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x240,uVar19);
    *(undefined4 *)((int)pvVar6 + 0x240U & 0xfffffffc) = uVar7;
  }
  iVar13 = fastfunc::FastDecTimerS32(uVar19 + 0x240);
  if (iVar13 == 0) {
    fVar1 = *(float *)((int)pvVar6 + 0x22c) * 2.0;
  }
  else {
    fVar1 = *(float *)((int)pvVar6 + 0x22c);
  }
  *(float *)((int)pvVar6 + 0x230) = fVar1;
  dVar24 = 0.0;
  *(undefined4 *)((int)puVar8 + 0x74) = 0;
  iVar13 = mobyutil::MB_damage(param_1,0x330000,0);
  mobyutil::MB_HandleDamage(param_1,iVar13,uVar19 + 0x20,0,puVar8 + 0xe,(int)puVar8 + 0x74,0,4);
  if ((*(int *)(puVar8 + 0xe) != 1) && (param_1->state != '\x15')) {
    if (param_1->group != -1) {
      mobyutil::MB_SetGroupField(param_1->group,1);
    }
    *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar8 + 0x74)
    ;
    fVar1 = DAT_0071f418;
    *(undefined1 *)((int)pvVar6 + 0x15d) = 0;
    *(undefined4 *)((int)pvVar6 + 0x144) = 9;
    *(float *)((int)pvVar6 + 0x130) = fVar1 * 50.0;
    fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar13 + 0x20) + 0x10);
    fVar4 = (param_1->pos).y - *(float *)(*(int *)(iVar13 + 0x20) + 0x14);
    dVar23 = ABS((double)fVar1);
    dVar21 = ABS((double)fVar4);
    *(float *)((int)puVar8 + 0x7c) = fVar1;
    *(float *)(puVar8 + 0x10) = fVar4;
    *(float *)((int)puVar8 + 0x84) = (float)(dVar23 - dVar21);
    MVar5 = param_1->modeBits;
    uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
    dVar22 = ABS((double)*(float *)((int)puVar8 + 0x7c));
    if ((double)*(float *)((int)puVar8 + 0x84) - dVar24 < 0.0) {
      dVar22 = dVar21;
    }
    fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    dVar21 = ABS((double)*(float *)(puVar8 + 0x10));
    if ((double)*(float *)((int)puVar8 + 0x84) - dVar24 < 0.0) {
      dVar21 = dVar23;
    }
    if (dVar24 < dVar22) {
      lVar17 = uVar11 - 0xc0;
      lVar14 = uVar11 - 0x38;
      lVar16 = uVar11 - 0x48;
      lVar20 = 2;
      fVar2 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar8 + 0x94) = fVar2;
      *(float *)((int)puVar8 + 0x8c) = fVar2;
      *(float *)(puVar8 + 0x12) = fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar3;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar2;
      *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x88) = *(float *)((int)lVar17 + 0x78) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = uVar11 - 0x48;
      lVar20 = 4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar16 = lVar12;
      do {
        fVar2 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x88) = *(float *)((int)lVar16 + 0x88) * fVar2;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
        lVar17 = lVar17 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0x88)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar4 + fVar1);
    }
    *(float *)(puVar8 + 0xf) = (float)dVar24;
    MVar5 = MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                     DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                     TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    param_1->modeBits = MVar5;
    *(float *)((int)pvVar6 + 0x13c) = mobyutil::g_FrameTime * 10.0;
    mobyutil::MB_SetupJumpArc
              (0x4012000000000000,0x4000000000000000,&DAT_003c0508,MVar5,uVar19 + 0x120);
    *(undefined4 *)((int)pvVar6 + 0x170) = 0x40a00000;
    *(undefined4 *)((int)pvVar6 + 0x174) = 0x41400000;
    uVar7 = *(undefined4 *)(iVar13 + 0x18);
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(iVar13 + 0x10);
    *(undefined4 *)(puVar8 + 7) = uVar7;
    uVar7 = *(undefined4 *)(iVar13 + 0x1c);
    *(undefined4 *)((int)puVar8 + 0x34) = *(undefined4 *)(iVar13 + 0x14);
    *(undefined4 *)((int)puVar8 + 0x3c) = uVar7;
    mobyutil::MB_VecAtan2Angles(puVar8[6],puVar8[7],uVar11 - 0x58,uVar19 + 0x138,uVar19 + 0x13c);
    mobyutil::MB_StartKick((double)*(float *)(puVar8 + 0xf),param_1,uVar19 + 0x120);
    param_1->state = '\x15';
    *(undefined1 *)((int)pvVar6 + 0x117) = 0xf0;
    mobyutil::MB_UpdateLightsTransition(param_1,uVar19 + 0x110);
  }
  param_1->damage = -1;
  return;
}



//==== 003c0a18  ns=mobyupdate_unsorted  size=0x1524
// sig: undefined UpdateMoby_573(void * this, MobyInstance * moby)
// callers(0): 
// callees(31): 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0011aa78 mobyutil::MB_SpawnDebris; 003c0528 mobyupdate_helpers::M573_003c0528; 003c2108 mobyupdate_helpers::M573_003c2108; 003c220c mobyupdate_helpers::M574_003c220c; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 005026a0 fastfunc::FastSubRots; 00502758 fastfunc::FastDoubleToInt; 005c8318 rand; 005e8338 FUN_005e8338

/* Moby 573 */

void __thiscall mobyupdate_unsorted::UpdateMoby_573(void *this,MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  undefined8 uVar22;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float local_160;
  float local_15c;
  undefined4 local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined1 auStack_f0 [16];
  Vec4 local_e0 [4];
  MobyInstance *local_a0;
  uint local_90;
  undefined1 auStack_8c [4];
  longlong local_88;
  
  lVar15 = (longlong)(int)this;
  uVar18 = *(uint *)((int)this + 0x78);
  uVar20 = (ulonglong)uVar18;
  mobyutil::MB_getTarget((double)*(float *)(uVar18 + 0x230),lVar15,moby,local_e0);
  mobyfunc::DoManipulator(0x4000ccccc0000000,(MobyInstance *)this,0,(Manipulator *)(uVar18 + 0x280))
  ;
  mobyupdate_helpers::M573_003c0528(lVar15);
  fastfunc::FastDecTimerS32(uVar20 + 0x244);
  bVar1 = *(byte *)((int)this + 0x20);
  uVar6 = *(ushort *)((int)this + 0x34);
  fVar4 = *(float *)((int)this + 0x10);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      pSVar7 = Splines[*(int *)(uVar18 + 0x270)];
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,ZEXT48(pSVar7),lVar15 + 0x10,auStack_140,
                 &local_90,auStack_8c,*(int *)(uVar18 + 0x270) * 4,0);
      uVar16 = *(uint *)(uVar18 + 0x278);
      lVar19 = (ulonglong)uVar16 +
               ((longlong)(int)uVar16 - (longlong)(int)local_90 >> 0x3f &
               (ulonglong)local_90 - (ulonglong)uVar16);
      *(int *)(uVar18 + 0x278) = (int)lVar19;
      uVar16 = mobyutil::MB_UpdateNavMoveTurning
                         (lVar15,uVar20 + 0x180,ZEXT48(pSVar7) + lVar19 * 0x10 + 0x10 & 0xffffffff,
                          uVar20 + 0x40);
      if ((uVar16 & 0x14) != 0) {
        if (*(int *)(uVar18 + 0x278) < pSVar7->cnt + -1) {
          *(int *)(uVar18 + 0x278) = *(int *)(uVar18 + 0x278) + 1;
        }
        else {
          *(undefined4 *)(uVar18 + 0x270) = 0xffffffff;
          cVar3 = *(char *)((int)this + 0x53);
          *(undefined1 *)((int)this + 0x20) = 1;
          if (cVar3 != '\x01') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 10.5));
            cVar3 = *(char *)((int)this + 0x53);
          }
          if (*(int *)(uVar18 + 0x248) != -1) {
            if (cVar3 != '\0') {
              local_88 = (longlong)(int)(animationSpeed * 10.5);
              mobyutil::MB_SetAnimation(lVar15,0,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this + 0x20) = 2;
          }
        }
      }
      iVar17 = mobyutil::MB_randInt(0xe);
      if ((iVar17 == 0) &&
         ((((*(int *)(uVar18 + 0x248) == -1 ||
            (MobyInstance + *(int *)(uVar18 + 0x248) == (MobyInstance *)0x0)) ||
           (uVar2 = MobyInstance[*(int *)(uVar18 + 0x248)].state, uVar2 == 0xfd || uVar2 == 0xfe))
          || (iVar17 = mobyupdate_helpers::M573_003c2108(), iVar17 != 0)))) {
        *(undefined4 *)(uVar18 + 0x270) = 0xffffffff;
        dVar21 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this + 0x20) = 4;
        if (*(char *)((int)this + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 4) {
      uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                            (double)(local_e0[0].y - *(float *)((int)this + 0x14)));
      mobyutil::OrganicDeltAngSpeed
                (uVar22,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar15);
      fVar4 = *(float *)((int)this + 0x48);
      fVar5 = fVar4 + 1.5707963;
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar11 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar11 = fVar5;
      }
      fVar10 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar4 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar11 < 0.0) {
        fVar4 = fVar11;
      }
      fVar5 = fVar10 * fVar10;
      fVar9 = fVar4 * fVar4;
      fVar13 = fVar5 * fVar5 * fVar10;
      local_158 = 0;
      fVar11 = fVar9 * fVar9 * fVar4;
      fVar14 = fVar5 * fVar13;
      fVar12 = fVar9 * fVar11;
      local_15c = (fVar5 * fVar14 * 2.601887e-06 +
                  fVar14 * -0.0001980741 +
                  fVar13 * 0.0083330255 + fVar5 * fVar10 * -0.16666657 + fVar10) * 2.0;
      local_160 = (fVar9 * fVar12 * 2.601887e-06 +
                  fVar12 * -0.0001980741 +
                  fVar11 * 0.0083330255 + fVar9 * fVar4 * -0.16666657 + fVar4) * 2.0;
      mobyutil::MB_UpdateNavMove
                (0x3ff0000000000000,(MobyInstance *)this,(MobyInstance *)(uVar18 + 0x180),&local_160
                 ,auStack_150);
      iVar17 = fastfunc::FastDecTimerS32(uVar20 + 0x23c);
      if (iVar17 != 0) {
        dVar21 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
      }
      fVar4 = *(float *)((int)this + 0x14) - local_e0[0].y;
      fVar9 = *(float *)((int)this + 0x10) - local_e0[0].x;
      fVar5 = *(float *)(uVar18 + 0x234) * mobyutil::g_FrameTime;
      if (fVar5 * 0.5 * animationSpeed * 40.0 + fVar5 * animationSpeed * 10.0 + 1.5 <=
          SQRT(fVar9 * fVar9 + fVar4 * fVar4)) {
        local_e0[0].y = local_e0[0].y - *(float *)(uVar18 + 0x204);
        local_e0[0].x = local_e0[0].x - *(float *)(uVar18 + 0x200);
        fVar4 = local_e0[0].z - *(float *)(uVar18 + 0x208);
        if ((*(float *)(uVar18 + 0x230) <
             SQRT(fVar4 * fVar4 + local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y)) ||
           (3.0 < ABS(local_e0[0].z - *(float *)((int)this + 0x18)))) {
          *(undefined1 *)((int)this + 0x20) = 7;
        }
      }
      else {
        *(undefined1 *)((int)this + 0x20) = 6;
        if (*(char *)((int)this + 0x53) != '\x05') {
          uVar22 = fastfunc::FastDoubleToInt((double)(animationSpeed * 10.0));
          mobyutil::MB_SetAnimation(lVar15,5,0,uVar22);
        }
      }
    }
    else if (bVar1 == 3) {
      uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                            (double)(local_e0[0].y - *(float *)((int)this + 0x14)));
      mobyutil::OrganicDeltAngSpeed
                (uVar22,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15,
                 &DAT_003c0978,uVar20 + 0x220);
      if ((*(byte *)((int)this + 0x70) & 2) != 0) {
        dVar21 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this + 0x20) = 4;
        if (*(char *)((int)this + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 2) {
      iVar17 = mobyutil::MB_randInt(0xe);
      if ((iVar17 == 0) &&
         (((*(int *)(uVar18 + 0x248) == -1 ||
           (MobyInstance + *(int *)(uVar18 + 0x248) == (MobyInstance *)0x0)) ||
          ((uVar2 = MobyInstance[*(int *)(uVar18 + 0x248)].state, uVar2 == 0xfd || uVar2 == 0xfe ||
           (iVar17 = mobyupdate_helpers::M573_003c2108(), iVar17 != 0)))))) {
        dVar21 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)(uVar18 + 0x23c) = (int)(animationSpeed * ((float)(longlong)dVar21 + 0.5));
        *(undefined1 *)((int)this + 0x20) = 4;
        if (*(char *)((int)this + 0x53) != '\x03') {
          local_88 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else if (bVar1 == 1) {
      if (*(int *)(uVar18 + 0x270) == -1) {
        iVar17 = mobyutil::MB_randInt(0xe);
        if (((iVar17 == 0) &&
            (local_e0[0].y = local_e0[0].y - *(float *)(uVar18 + 0x204),
            local_e0[0].x = local_e0[0].x - *(float *)(uVar18 + 0x200),
            fVar4 = local_e0[0].z - *(float *)(uVar18 + 0x208),
            SQRT(fVar4 * fVar4 + local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
            *(float *)(uVar18 + 0x230))) &&
           (ABS(local_e0[0].z - *(float *)((int)this + 0x18)) < 3.0)) {
          *(undefined1 *)((int)this + 0x20) = 3;
          if (*(char *)((int)this + 0x53) != '\x02') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 10.5));
          }
          *(undefined4 *)((int)this + 0x58) = 0x3f60c7ce;
        }
      }
      else {
        pSVar7 = Splines[*(int *)(uVar18 + 0x270)];
        fVar4 = pSVar7->points[0].x;
        *(float *)((int)this + 0x10) = fVar4;
        fVar5 = pSVar7->points[0].y;
        *(float *)((int)this + 0x14) = fVar5;
        *(float *)((int)this + 0x18) = pSVar7->points[0].z;
        *(float *)((int)this + 0x1c) = pSVar7->points[0].w;
        dVar21 = (double)FUN_005e8338((double)(pSVar7->points[1].x - fVar4),
                                      (double)(pSVar7->points[1].y - fVar5));
        *(float *)((int)this + 0x48) = (float)dVar21;
        iVar17 = mobyutil::MB_randInt(0xe);
        if (((iVar17 == 0) &&
            (iVar17 = mobyupdate_helpers::M574_003c220c(*(undefined1 *)((int)this + 0x21)),
            iVar17 != 0)) ||
           ((iVar17 = mobyutil::MB_IsPntInCuboid(local_e0,(longlong)*(int *)(uVar18 + 0x27c)),
            iVar17 != 0 ||
            ((local_e0[0].y = local_e0[0].y - *(float *)((int)this + 0x14),
             local_e0[0].x = local_e0[0].x - *(float *)((int)this + 0x10),
             local_e0[0].z = local_e0[0].z - *(float *)((int)this + 0x18),
             SQRT(local_e0[0].z * local_e0[0].z +
                  local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
             *(float *)(uVar18 + 0x274) && (ABS(local_e0[0].z) < 4.0)))))) {
          *(undefined4 *)(uVar18 + 0x278) = 0;
          *(undefined1 *)((int)this + 0x20) = 5;
          if (*(char *)((int)this + 0x53) != '\x03') {
            local_88 = (longlong)(int)(animationSpeed * 10.5);
            mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      if ((*(short *)((int)this + 0xb2) == 0x309) && (Level == Kerwan)) {
        mobyfunc::DeleteMoby((MobyInstance *)this);
        return;
      }
      *(float *)(uVar18 + 0x200) = fVar4;
      *(ushort *)((int)this + 0x34) = uVar6 | 0x1000;
      *(undefined4 *)(uVar18 + 0x204) = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)(uVar18 + 0x208) = *(undefined4 *)((int)this + 0x18);
      *(undefined4 *)(uVar18 + 0x20c) = *(undefined4 *)((int)this + 0x1c);
      *(undefined1 *)((int)this + 0x20) = 1;
      *(undefined1 *)((int)this + 0x7f) = 0x18;
      *(undefined4 *)(uVar18 + 0x20) = 0x3f800000;
      *(undefined2 *)(uVar18 + 0x24) = 1;
      *(undefined1 *)(uVar18 + 0x29) = 0;
      *(undefined4 *)(uVar18 + 0x240) = 0;
      mobyutil::MB_InitDefaultParams((float *)(uVar18 + 0x180));
      fVar4 = DAT_0071f418;
      *(float *)(uVar18 + 0x1bc) = DAT_0071f418 * 6.2831855;
      *(float *)(uVar18 + 0x1c0) = fVar4 * 12.566371;
      fVar5 = mobyutil::g_FrameTime;
      *(undefined4 *)(uVar18 + 0x18c) = 0x40000000;
      fVar4 = *(float *)(uVar18 + 0x234) * fVar5;
      *(undefined4 *)(uVar18 + 0x188) = 0x40000000;
      *(undefined4 *)(uVar18 + 0x180) = 0x38d;
      *(uint *)(uVar18 + 0x1b8) = *(uint *)(uVar18 + 0x1b8) | 0x20;
      *(undefined4 *)(uVar18 + 0x1a8) = 0x40061bba;
      *(float *)(uVar18 + 0x1a4) = fVar4;
      *(float *)(uVar18 + 0x1c4) = fVar5 * 3.1415927;
      fVar5 = animationSpeed;
      *(undefined4 *)(uVar18 + 0x244) = 0;
      *(undefined4 *)(uVar18 + 0x264) = 0x3f800000;
      *(undefined4 *)(uVar18 + 0x26c) = 0;
      *(undefined4 *)(uVar18 + 0x260) = 0;
      *(undefined1 *)(uVar18 + 0x58) = 8;
      *(undefined1 *)(uVar18 + 0x5a) = 7;
      *(float *)(uVar18 + 0x1ac) = fVar5 * 6.0 * fVar4;
      uVar16 = rand();
      if ((uVar16 & 1) != 0) {
        *(ushort *)((int)this + 0x34) = *(ushort *)((int)this + 0x34) | 0x8000;
      }
      *(undefined **)(uVar18 + 0xd0) = &DAT_00845f5c;
      if ((*(int *)(uVar18 + 0x248) == -1) || (*(int *)(uVar18 + 0x270) != -1)) {
        if (*(char *)((int)this + 0x53) != '\x01') {
          mobyutil::MB_SetAnimation(lVar15,1,0,0);
        }
      }
      else {
        if (*(char *)((int)this + 0x53) != '\0') {
          mobyutil::MB_SetAnimation(lVar15,0,0,0);
        }
        *(undefined1 *)((int)this + 0x20) = 2;
      }
    }
  }
  else if (bVar1 == 0x15) {
    *(ushort *)((int)this + 0x34) = uVar6 & 0xefff;
    uVar18 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar18 + 0x120));
    if ((uVar18 & 0x60) != 0) {
      lVar19 = lVar15 + 0x10;
      mobyutil::MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar15,lVar19);
      uVar22 = 0;
      mobyutil::MB_SpawnDebrisMoby(0,lVar15,0x6ce,lVar19,lVar15 + 0x40,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar22,lVar15,0x6cf,lVar19,lVar15 + 0x40,0,0);
      mobyutil::MB_SpawnDebris(lVar15,0x77d,1,0x77d,1,3,2);
      mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby((MobyInstance *)this);
      return;
    }
    uVar18 = (int)*(uint *)((int)this + 0x18) >> 0x1f;
    if ((int)((uVar18 >> 1 ^ *(uint *)((int)this + 0x18)) - uVar18) < 0x40000000) {
      mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby((MobyInstance *)this);
      return;
    }
  }
  else if (bVar1 == 9) {
    iVar17 = FUN_0048c188(lVar15,uVar20 + 0x120);
    if (iVar17 != 0) {
      *(undefined1 *)((int)this + 0x20) = 0;
      *(undefined2 *)(uVar18 + 200) = 0;
    }
  }
  else if (bVar1 == 8) {
    uVar18 = mobyutil::MB_UpdateKick((MobyInstance *)this,(KickVars *)(uVar18 + 0x120));
    if ((uVar18 & 0x60) == 0) {
      uVar18 = (int)*(uint *)((int)this + 0x18) >> 0x1f;
      if ((int)((uVar18 >> 1 ^ *(uint *)((int)this + 0x18)) - uVar18) < 0x40000000) {
        mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby((MobyInstance *)this);
        return;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x20) = 4;
      if (*(char *)((int)this + 0x53) != '\x03') {
        local_88 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (bVar1 == 7) {
    uVar22 = FUN_005e8338((double)(*(float *)(uVar18 + 0x200) - fVar4),
                          (double)(*(float *)(uVar18 + 0x204) - *(float *)((int)this + 0x14)));
    mobyutil::OrganicDeltAngSpeed
              (uVar22,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar15);
    fVar4 = *(float *)((int)this + 0x48);
    fVar9 = fVar4 + 1.5707963;
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar11 = fVar9;
    }
    fVar10 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    local_f8 = 0;
    fVar4 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar11 < 0.0) {
      fVar4 = fVar11;
    }
    fVar9 = fVar10 * fVar10;
    fVar5 = fVar4 * fVar4;
    fVar11 = fVar9 * fVar9 * fVar10;
    fVar12 = fVar9 * fVar11;
    fVar13 = fVar5 * fVar5 * fVar4;
    fVar14 = fVar5 * fVar13;
    local_fc = (fVar9 * fVar12 * 2.601887e-06 +
               fVar12 * -0.0001980741 +
               fVar11 * 0.0083330255 + fVar9 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_100 = (fVar5 * fVar14 * 2.601887e-06 +
                fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4
                ) * 2.0;
    dVar21 = 1.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,(MobyInstance *)this,(MobyInstance *)(uVar18 + 0x180),&local_100,
               auStack_f0);
    fVar4 = *(float *)((int)this + 0x14) - *(float *)(uVar18 + 0x204);
    fVar5 = *(float *)((int)this + 0x10) - *(float *)(uVar18 + 0x200);
    if (dVar21 <= (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4)) {
      if (((*(int *)(uVar18 + 0x244) == 0) &&
          (local_e0[0].y = *(float *)((int)this + 0x14) - local_e0[0].y,
          local_e0[0].x = *(float *)((int)this + 0x10) - local_e0[0].x,
          fVar4 = *(float *)(uVar18 + 0x234) * mobyutil::g_FrameTime,
          SQRT(local_e0[0].x * local_e0[0].x + local_e0[0].y * local_e0[0].y) <
          fVar4 * 0.5 * animationSpeed * 40.0 + fVar4 * animationSpeed * 10.0 + 1.5)) &&
         (*(undefined1 *)((int)this + 0x20) = 6, *(char *)((int)this + 0x53) != '\x05')) {
        uVar22 = fastfunc::FastDoubleToInt((double)(animationSpeed * 10.0));
        mobyutil::MB_SetAnimation(lVar15,5,0,uVar22);
      }
    }
    else {
      *(undefined1 *)((int)this + 0x20) = 1;
      if (*(char *)((int)this + 0x53) != '\x01') {
        local_88 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else if (bVar1 == 6) {
    uVar22 = FUN_005e8338((double)(local_e0[0].x - fVar4),
                          (double)(local_e0[0].y - *(float *)((int)this + 0x14)));
    dVar21 = 0.20000000298023224;
    mobyutil::OrganicDeltAngSpeed
              (uVar22,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar15);
    dVar28 = 3.141592502593994;
    dVar27 = 1.570796251296997;
    fVar4 = *(float *)((int)this + 0x48);
    dVar29 = -3.141592502593994;
    fVar9 = fVar4 + 1.5707963;
    dVar30 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    dVar32 = -0.0001980741071747616;
    dVar33 = 2.601886990305502e-06;
    dVar34 = 2.0;
    fVar5 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar5 = fVar4;
    }
    fVar11 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar11 = fVar9;
    }
    fVar10 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
      fVar10 = fVar5;
    }
    fVar4 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar11 < 0.0) {
      fVar4 = fVar11;
    }
    fVar11 = fVar10 * fVar10;
    fVar14 = fVar4 * fVar4;
    fVar5 = fVar11 * fVar11 * fVar10;
    fVar12 = fVar14 * fVar14 * fVar4;
    fVar9 = fVar11 * fVar5;
    fVar13 = fVar14 * fVar12;
    local_12c = (fVar11 * fVar9 * 2.601887e-06 +
                fVar9 * -0.0001980741 +
                fVar5 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) * 2.0;
    local_130 = (fVar14 * fVar13 * 2.601887e-06 +
                fVar13 * -0.0001980741 +
                fVar12 * 0.0083330255 + fVar14 * fVar4 * -0.16666657 + fVar4) * 2.0;
    dVar26 = 0.0;
    local_128 = 0;
    dVar35 = 1.0;
    mobyutil::MB_UpdateNavMove
              (0x3ff0000000000000,(MobyInstance *)this,(MobyInstance *)(uVar18 + 0x180),&local_130,
               uVar18 + 0x40);
    if (*(char *)((int)this + 0x52) == '\x05') {
      mobyutil::Delt((float)dVar26,
                     (*(float *)(uVar18 + 0x234) * mobyutil::g_FrameTime) / (animationSpeed * 40.0),
                     (float *)(uVar18 + 0x1a4));
    }
    dVar26 = (double)mobyfunc::BlendAnimFrame((MobyInstance *)this);
    if ((ABS((float)(dVar26 - 25.0)) <= 0.25) &&
       (ABS((double)(local_e0[0].z - *(float *)((int)this + 0x18))) < dVar35)) {
      dVar26 = (double)FUN_005e8338((double)(local_e0[0].x - *(float *)((int)this + 0x10)),
                                    (double)(local_e0[0].y - *(float *)((int)this + 0x14)));
      dVar26 = (double)fastfunc::FastSubRots((float)dVar26,*(float *)((int)this + 0x48));
      if ((dVar26 < 0.2617993950843811) &&
         ((local_a0 != (MobyInstance *)0x0 &&
          (fVar5 = *(float *)((int)this + 0x14) - local_e0[0].y,
          fVar4 = *(float *)((int)this + 0x10) - local_e0[0].x,
          (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5) < dVar34)))) {
        dVar34 = (double)*(float *)((int)this + 0x48);
        dVar26 = (double)(float)(dVar34 + dVar27);
        local_118 = 0;
        local_110 = local_e0[0].x;
        local_10c = local_e0[0].y;
        local_104 = local_e0[0].w;
        dVar27 = (double)(float)(dVar28 - dVar34);
        if (dVar34 - (double)(float)(dVar28 - dVar34) < 0.0) {
          dVar27 = dVar34;
        }
        dVar23 = (double)(float)(dVar28 - dVar26);
        if (dVar26 - (double)(float)(dVar28 - dVar26) < 0.0) {
          dVar23 = dVar26;
        }
        dVar28 = (double)(float)(dVar29 - dVar34);
        if ((double)(float)(dVar29 - dVar34) - dVar27 < 0.0) {
          dVar28 = dVar27;
        }
        dVar34 = (double)(float)(dVar28 * dVar28);
        dVar27 = (double)(float)(dVar29 - dVar26);
        if ((double)(float)(dVar29 - dVar26) - dVar23 < 0.0) {
          dVar27 = dVar23;
        }
        dVar26 = (double)(float)(dVar27 * dVar27);
        dVar23 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar28));
        dVar25 = (double)(float)(dVar34 * dVar23);
        dVar24 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
        dVar29 = (double)(float)(dVar26 * dVar24);
        local_11c = (float)((double)(float)((double)(float)(dVar34 * dVar25) * dVar33 +
                                           (double)(float)(dVar25 * dVar32 +
                                                          (double)(float)(dVar23 * dVar31 +
                                                                         (double)(float)((double)(
                                                  float)(dVar34 * dVar28) * dVar30 + dVar28)))) *
                           dVar21);
        local_120 = (float)((double)(float)((double)(float)(dVar26 * dVar29) * dVar33 +
                                           (double)(float)(dVar29 * dVar32 +
                                                          (double)(float)(dVar24 * dVar31 +
                                                                         (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar30 + dVar27)))) *
                           dVar21);
        local_108 = local_e0[0].z + 0.75;
        mobyutil::CollDamageMobyDirect
                  ((float)dVar35,local_a0,(MobyInstance *)this,1,0x3c0978,&local_110,&local_120);
        goto LAB_003c1e6c;
      }
    }
    if ((*(byte *)((int)this + 0x70) & 2) != 0) {
      *(float *)(uVar18 + 0x1a4) = *(float *)(uVar18 + 0x234) * mobyutil::g_FrameTime;
      *(undefined1 *)((int)this + 0x20) = 7;
      if (*(char *)((int)this + 0x53) != '\x03') {
        local_88 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 3.5));
      }
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x90,0x3c0978);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (undefined1  [16])0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x244,uVar20)
      ;
      *(undefined4 *)(uVar18 + 0x244 & 0xfffffffc) = uVar8;
    }
  }
LAB_003c1e6c:
  if ((*(char *)((int)this + 0x31) != '\0') &&
     (fVar4 = *(float *)((int)this + 0x14) - GameCamera.posY,
     fVar5 = *(float *)((int)this + 0x10) - GameCamera.posX,
     fVar9 = *(float *)((int)this + 0x18) - GameCamera.posZ,
     SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar4 * fVar4) < 32.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar15);
  }
  mobyutil::MB_ColorDyingMoby(lVar15,uVar20 + 0x110);
  *(undefined1 *)((int)this + 0xbc) = 0;
  return;
}



//==== 003c1f3c  ns=mobyupdate_helpers  size=0x58
// sig: undefined M574_003c1f3c(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M574_003c1f3c(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\t') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\t';
  }
  return;
}



//==== 003c1f94  ns=mobyupdate_helpers  size=0x58
// sig: undefined M574_003c1f94(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M574_003c1f94(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 003c1fec  ns=mobyupdate_helpers  size=0x58
// sig: undefined M574_003c1fec(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M574_003c1fec(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\t') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 9;
  }
  return;
}



//==== 003c2044  ns=mobyupdate_helpers  size=0x38
// sig: undefined M574_003c2044(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M574_003c2044(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 9;
  return;
}



//==== 003c207c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M574_003c207c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M574_003c207c(int param_1)

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



//==== 003c20bc  ns=mobyupdate_helpers  size=0x14
// sig: undefined M574_003c20bc(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M574_003c20bc(void)

{
  DAT_00845fb4 = 0x10000;
  return;
}



//==== 003c20d0  ns=Global  size=0x28
// sig: undefined FUN_003c20d0(void)
// callers(1): 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(0): 

undefined8 FUN_003c20d0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x23e) && (*(char *)(param_1 + 0x20) == '\x0e')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 003c20f8  ns=Global  size=0xc
// sig: undefined FUN_003c20f8(void)
// callers(1): 00477b98 mobyupdate_unsorted::UpdateMoby_822
// callees(0): 

void FUN_003c20f8(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}



//==== 003c2108  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M573_003c2108(void)
// callers(2): 003c0528 mobyupdate_helpers::M573_003c0528; 003c0a18 mobyupdate_unsorted::UpdateMoby_573
// callees(1): 000efe40 mobyfunc::BlendAnimFrame

undefined8 mobyupdate_helpers::M573_003c2108(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  double dVar3;
  
  pvVar2 = param_1->pVar;
  if (((param_1 == (MobyInstance *)0x0) || (uVar1 = param_1->state, uVar1 == 0xfd || uVar1 == 0xfe))
     || (param_1->oClass != BLARG_COMMANDER_023E)) {
    return 0;
  }
  if (param_1->updateId == '\n') {
    dVar3 = (double)mobyfunc::BlendAnimFrame(param_1);
    uVar1 = param_1->state;
    if (10.0 <= dVar3) {
      return 1;
    }
  }
  if ((uVar1 != '\r' && uVar1 != '\n') && (*(int *)((int)pvVar2 + 0x284) != -1)) {
    return 0;
  }
  return 1;
}



//==== 003c21cc  ns=mobyupdate_helpers  size=0x40
// sig: undefined M574_003c21cc(void)
// callers(0): 
// callees(0): 

undefined8 mobyupdate_helpers::M574_003c21cc(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x20);
    if (((cVar1 != -3 && cVar1 != -2) && (*(short *)(param_1 + 0xa6) == 0x23e)) && (cVar1 == '\t'))
    {
      return 1;
    }
  }
  return 0;
}



//==== 003c220c  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M574_003c220c(void)
// callers(2): 003c0a18 mobyupdate_unsorted::UpdateMoby_573; 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(3): 0010466c mobyutil::MB_GetNextMobyInGroup; 00104800 mobyutil::MB_GetFirstMobyInGroup; 003c04c8 mobyupdate_helpers::M866_003c04c8

undefined8 mobyupdate_helpers::M574_003c220c(int param_1)

{
  u8 uVar1;
  int iVar2;
  MobyInstance *local_10 [4];
  
  if (param_1 != 0xff) {
    mobyutil::MB_GetFirstMobyInGroup(local_10,param_1,'\0','\0');
    while (local_10[0] != (MobyInstance *)0x0) {
      if (local_10[0] != (MobyInstance *)0x0) {
        uVar1 = local_10[0]->state;
        if (((uVar1 != 0xfd && uVar1 != 0xfe) && (local_10[0]->oClass == BLARG_COMMANDER_023E)) &&
           (uVar1 == '\t')) {
          return 1;
        }
      }
      iVar2 = M866_003c04c8();
      if (iVar2 != 0) {
        return 1;
      }
      mobyutil::MB_GetNextMobyInGroup(local_10,local_10[0],'\0','\0');
    }
  }
  return 0;
}



//==== 003c22e8  ns=mobyupdate_helpers  size=0x1e4
// sig: undefined M574_003c22e8(void)
// callers(1): 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 005025e0 fastfunc::FastDiffRots

undefined8 mobyupdate_helpers::M574_003c22e8(double param_1,int param_2,float *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  iVar2 = *(int *)(param_2 + 0x78);
  if (param_3[0x10] != 0.0) {
    iVar3 = *(int *)(iVar2 + 0x264);
    if (((iVar3 != -1) && (MobyInstance[iVar3].oClass == TRAIN_LOCOMOTIVE)) &&
       (MobyInstance[iVar3].setByGroup != '\x04')) {
      return 0;
    }
    dVar6 = (double)fastfunc::FastDiffRots(param_1,(double)*(float *)(param_2 + 0x48));
    dVar6 = ABS(dVar6);
    if (((((0.7853981852531433 <= dVar6) && (*(char *)(iVar2 + 0x263) == '\0')) &&
         (*(char *)(param_2 + 0x53) != '\x01')) || (1.5707963705062866 < dVar6)) &&
       (fVar4 = *(float *)(param_2 + 0x14) - param_3[1],
       fVar5 = *(float *)(param_2 + 0x10) - *param_3, SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 20.0)) {
      if (dVar6 <= 1.1780972480773926) {
        mobyutil::MB_SetAnimation(param_2,9,0,(int)(animationSpeed * 10.5));
      }
      else {
        mobyutil::MB_SetAnimation(param_2,1,0,(int)(animationSpeed * 10.5));
        *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
      }
      *(float *)(iVar2 + 0x28c) = (float)param_1;
      uVar1 = *(undefined1 *)(param_2 + 0x20);
      *(undefined1 *)(param_2 + 0x20) = 0xc;
      *(undefined1 *)(param_2 + 0xbc) = uVar1;
      return 1;
    }
  }
  return 0;
}



//==== 003c24e8  ns=mobyupdate_helpers  size=0x538
// sig: undefined M574_003c24e8(void)
// callers(1): 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(3): 0010d7a0 mobyutil::MB_PathFollowToPos; 001118d8 mobyutil::MB_getTarget; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M574_003c24e8(int param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r29;
  undefined4 uVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x2c] = in_f26;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2b] = unaff_r31;
  puVar10[0x29] = unaff_r29;
  puVar10[0x2a] = unaff_r30;
  iVar8 = *(int *)(param_1 + 0x78);
  mobyutil::MB_getTarget((double)*(float *)(iVar8 + 0x270),param_1,param_2,uVar13 - 0x100);
  *(undefined4 *)(puVar10 + 0x1c) = *(undefined4 *)(iVar8 + 0x120);
  dVar29 = 0.0;
  dVar28 = dVar29;
  dVar30 = dVar29;
  mobyutil::MB_PathFollowToPos
            (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)(iVar8 + 0x130),param_1 + 0x10,
             uVar13 - 0x110,uVar13 - 0xb0,uVar13 - 0xac);
  uVar19 = 0;
  uVar14 = 0;
  *(undefined4 *)(iVar8 + 0x120) = 0;
  do {
    if ((int)uVar14 != *(int *)(puVar10 + 0x1c)) {
      fVar4 = *(float *)(param_1 + 0x10);
      iVar11 = *(int *)(iVar8 + 0x130) + (int)((uVar14 & 0xffffffff) << 4);
      fVar5 = *(float *)(param_1 + 0x14);
      dVar27 = (double)*(float *)(iVar11 + 0x10);
      dVar26 = (double)*(float *)(iVar11 + 0x14);
      fVar2 = (float)(dVar27 - (double)fVar4);
      fVar3 = (float)(dVar26 - (double)fVar5);
      dVar25 = (double)*(float *)(iVar11 + 0x18);
      dVar22 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)((int)puVar10 + 0xf4) = fVar2;
      *(float *)(puVar10 + 0x1f) = fVar3;
      *(float *)((int)puVar10 + 0xfc) = (float)(dVar22 - dVar23);
      uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0xf4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xfc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar10 + 0x1f) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)((int)puVar10 + 0xf4));
      if ((double)*(float *)((int)puVar10 + 0xfc) - dVar29 < 0.0) {
        dVar21 = dVar23;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar23 = ABS((double)*(float *)(puVar10 + 0x1f));
      if ((double)*(float *)((int)puVar10 + 0xfc) - dVar29 < 0.0) {
        dVar23 = dVar22;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar22 = dVar29;
      if (dVar29 < dVar21) {
        lVar16 = uVar13 - 0x180;
        lVar17 = uVar13 - 0x60;
        lVar15 = uVar13 - 0x70;
        lVar20 = 2;
        fVar6 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 300) = fVar6;
        *(float *)((int)puVar10 + 0x124) = fVar6;
        *(float *)(puVar10 + 0x25) = fVar6;
        *(float *)(puVar10 + 0x24) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar10 + 0x124) = *(float *)((int)puVar10 + 0x124) * fVar7;
        *(float *)(puVar10 + 0x25) = *(float *)(puVar10 + 0x25) * fVar6;
        *(float *)((int)puVar10 + 300) = *(float *)((int)puVar10 + 300) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x110) * fVar6 * fVar6;
          iVar11 = (int)lVar15;
          lVar15 = lVar15 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar17 = uVar13 - 0x70;
        pfVar18 = (float *)&DAT_007358e0;
        lVar16 = lVar1;
        lVar15 = lVar17;
        do {
          fVar6 = *pfVar18;
          fVar7 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x120) = *(float *)((int)lVar16 + 0x120) * fVar6;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar7;
          lVar15 = lVar15 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar15 = 2;
        lVar16 = lVar1;
        dVar21 = dVar29;
        do {
          iVar11 = (int)lVar16;
          iVar12 = (int)lVar17;
          lVar16 = lVar16 + 0x10;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar11 + 0x120)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar22 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
      }
      fVar2 = (float)((double)*(float *)(puVar10 + 0x12) - (double)fVar4);
      fVar3 = (float)((double)*(float *)((int)puVar10 + 0x94) - (double)fVar5);
      dVar24 = ABS((double)fVar2);
      dVar23 = ABS((double)fVar3);
      *(float *)(puVar10 + 0x1d) = fVar2;
      *(float *)((int)puVar10 + 0xec) = fVar3;
      *(float *)(puVar10 + 0x1e) = (float)(dVar24 - dVar23);
      uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x1d) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x1e) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0xec) >> 0x1d) & 4;
      dVar21 = ABS((double)*(float *)(puVar10 + 0x1d));
      if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
        dVar21 = dVar23;
      }
      fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar14 << 2));
      dVar23 = ABS((double)*(float *)((int)puVar10 + 0xec));
      if ((double)*(float *)(puVar10 + 0x1e) - dVar29 < 0.0) {
        dVar23 = dVar24;
      }
      fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
      dVar24 = dVar29;
      if (dVar29 < dVar21) {
        lVar16 = uVar13 - 0x180;
        lVar15 = uVar13 - 0x90;
        lVar17 = uVar13 - 0x80;
        lVar20 = 2;
        fVar4 = (float)(dVar23 - dVar21) / (float)(dVar23 + dVar21);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar10 + 0x10c) = fVar4;
        *(float *)((int)puVar10 + 0x104) = fVar4;
        *(float *)(puVar10 + 0x21) = fVar4;
        *(float *)(puVar10 + 0x20) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5;
        *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar4;
        *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0xf0) * fVar4 * fVar4;
          iVar11 = (int)lVar15;
          lVar16 = lVar16 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar17 + 4) = *(float *)(iVar11 + 4) * fVar4 * fVar4;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar17 = uVar13 - 0x90;
        pfVar18 = (float *)&DAT_007358e0;
        lVar16 = lVar1;
        lVar15 = lVar17;
        do {
          fVar4 = *pfVar18;
          fVar5 = pfVar18[1];
          pfVar18 = pfVar18 + 2;
          *(float *)((int)lVar16 + 0x100) = *(float *)((int)lVar16 + 0x100) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
          lVar15 = lVar15 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar15 = 2;
        lVar16 = lVar1;
        dVar21 = dVar29;
        do {
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          iVar12 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar11 + 0x100)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar24 = (double)((float)(dVar21 + 0.7853981852531433) * fVar2 + fVar3);
      }
      dVar21 = (double)fastfunc::FastSubRots((float)dVar22,(float)dVar24);
      fVar2 = (float)((double)*(float *)((int)puVar10 + 0x94) - dVar26);
      fVar2 = SQRT((float)((double)*(float *)(puVar10 + 0x13) - dVar25) *
                   (float)((double)*(float *)(puVar10 + 0x13) - dVar25) +
                   (float)((double)*(float *)(puVar10 + 0x12) - dVar27) *
                   (float)((double)*(float *)(puVar10 + 0x12) - dVar27) + fVar2 * fVar2);
      dVar22 = (double)fVar2;
      *(float *)((int)puVar10 + 0xe4) = fVar2;
      if (1.5707963705062866 <= dVar21) {
        if (((16.0 <= dVar22) && ((dVar22 < dVar30 || (dVar30 < 16.0)))) ||
           ((16.0 > dVar22 && (dVar30 < dVar22)))) {
          uVar19 = *(undefined4 *)(iVar8 + 0x120);
          dVar28 = dVar21;
          dVar30 = dVar22;
        }
      }
      else if (dVar28 < dVar21) {
        uVar19 = *(undefined4 *)(iVar8 + 0x120);
        dVar28 = dVar21;
        dVar30 = dVar22;
      }
    }
    uVar9 = **(uint **)(iVar8 + 0x130);
    lVar16 = (ulonglong)*(uint *)(iVar8 + 0x120) + (ulonglong)uVar9 +
             (longlong)*(char *)(iVar8 + 0x124);
    uVar14 = lVar16 - (longlong)((int)lVar16 / (int)uVar9) * (longlong)(int)uVar9;
    *(int *)(iVar8 + 0x120) = (int)uVar14;
  } while ((int)uVar14 != 0);
  *(undefined4 *)(iVar8 + 0x120) = uVar19;
  return;
}



//==== 003c2a58  ns=mobyupdate_helpers  size=0xc2c
// sig: undefined M574_003c2a58(void)
// callers(1): 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(12): 000fdcf0 mobyutil::MB_SetAnimationNoBlend; 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0015d12c sound::PlayMobySound; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005026a0 fastfunc::FastSubRots

void mobyupdate_helpers::M574_003c2a58(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  void *pvVar6;
  MobyInstance *pMVar7;
  undefined2 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar17 = uVar13 - 0x140;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar13;
  puVar9[0x2a] = in_LR;
  puVar9[0x27] = in_f31;
  puVar9[0x25] = unaff_r30;
  pvVar6 = param_1->pVar;
  uVar22 = ZEXT48(pvVar6);
  puVar9[0x26] = unaff_r31;
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = *(int *)((int)pvVar6 + 0x38);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  if (iVar14 != 0) {
    auVar29 = ZEXT416(0xffffffff);
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    *(undefined4 *)((int)pvVar6 + 0x38) = 0;
    auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    auVar29 = loadVectorLeftIndexed(4,0x3c2a20);
    auVar29 = auVar29 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar29 = vectorMultiplyAddFloatingPoint
                        (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,
                         auVar30);
    auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar29 = vectorSplatHalfWord(auVar29,1);
    uVar8 = storeVectorElementHalfWordIndexed(auVar29,0x252,uVar22);
    *(undefined2 *)((int)pvVar6 + 0x252) = uVar8;
  }
  iVar14 = fastfunc::FastDecTimerS16(uVar22 + 0x252);
  if (iVar14 == 0) {
    fVar1 = *(float *)((int)pvVar6 + 0x26c) + 5.0;
  }
  else {
    fVar1 = *(float *)((int)pvVar6 + 0x26c);
  }
  *(float *)((int)pvVar6 + 0x270) = fVar1;
  iVar14 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar15 = mobyutil::MB_HandleDamage
                     (param_1,iVar14,uVar22 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if (((iVar14 == 0) || (*(int *)(puVar9 + 0xe) == 1)) || (param_1->state == '\r'))
  goto LAB_003c3648;
  pMVar7 = *(MobyInstance **)(iVar14 + 0x20);
  dVar28 = dVar27;
  if (pMVar7 == (MobyInstance *)0x0) {
    fVar1 = (param_1->pos).x - g_heroPosition.x;
    fVar2 = (param_1->pos).y - g_heroPosition.y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)((int)puVar9 + 0x7c) = fVar1;
    *(float *)(puVar9 + 0x10) = fVar2;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0x7c));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x90;
      lVar18 = uVar13 - 0xa0;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xac) = fVar3;
      *(float *)((int)puVar9 + 0xa4) = fVar3;
      *(float *)(puVar9 + 0x15) = fVar3;
      *(float *)(puVar9 + 0x14) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4;
      *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar3;
      *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0x90) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0xa0;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xa0) = *(float *)((int)lVar16 + 0xa0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xa0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  else if (pMVar7 == g_currentWeaponMoby) {
    fVar1 = (param_1->pos).x - g_heroPosition.x;
    fVar2 = (param_1->pos).y - g_heroPosition.y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)(puVar9 + 0x11) = fVar1;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    *(float *)(puVar9 + 0x12) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)(puVar9 + 0x11));
    if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0x8c));
    if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar18 = uVar13 - 0x80;
      lVar21 = uVar13 - 0x70;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar3;
      *(float *)(puVar9 + 0x18) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4;
      *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar3;
      *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xb0) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar16 = lVar16 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x80;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xc0) = *(float *)((int)lVar16 + 0xc0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        iVar11 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xc0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  else {
    fVar1 = (param_1->pos).x - (pMVar7->pos).x;
    fVar2 = (param_1->pos).y - (pMVar7->pos).y;
    dVar24 = ABS((double)fVar1);
    dVar25 = ABS((double)fVar2);
    *(float *)((int)puVar9 + 0x94) = fVar1;
    *(float *)(puVar9 + 0x13) = fVar2;
    *(float *)((int)puVar9 + 0x9c) = (float)(dVar24 - dVar25);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar1 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar25 = ABS((double)*(float *)(puVar9 + 0x13));
    if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
      dVar25 = dVar24;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar26) {
      lVar16 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x50;
      lVar18 = uVar13 - 0x60;
      lVar23 = 2;
      fVar3 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0xec) = fVar3;
      *(float *)((int)puVar9 + 0xe4) = fVar3;
      *(float *)(puVar9 + 0x1d) = fVar3;
      *(float *)(puVar9 + 0x1c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar4;
      *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar3;
      *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xd0) * fVar3 * fVar3;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x60;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar18 = lVar21;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar16 + 0xe0) = *(float *)((int)lVar16 + 0xe0) * fVar3;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar17;
        iVar11 = (int)lVar21;
        lVar17 = lVar17 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar10 + 0xe0)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar1 + fVar2);
    }
  }
  *(float *)(puVar9 + 0xf) = (float)dVar28;
  fVar1 = *(float *)((int)pvVar6 + 0x20) - *(float *)((int)puVar9 + 0x74);
  *(float *)((int)pvVar6 + 0x20) = fVar1;
  fVar2 = DAT_0071f418;
  if ((double)fVar1 <= dVar27) {
LAB_003c34cc:
    fVar1 = DAT_0071f418 * 40.0;
    *(float *)((int)pvVar6 + 0x80) = fVar1;
    fVar2 = fVar2 * DAT_00845fe0;
    *(float *)((int)pvVar6 + 0x84) = fVar2;
    dVar28 = 2.0;
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x8c) = SQRT(fVar1 * 4.0);
    fVar1 = (SQRT(fVar1 * 4.0) * 2.0) / fVar1;
    *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + 3.0 / fVar1;
    uVar5 = *(undefined4 *)(iVar14 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar5;
    uVar5 = *(undefined4 *)(iVar14 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
    mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
    mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
    *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41200000;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41a00000;
    dVar27 = (double)mobyutil::g_FrameTime;
    *(undefined1 *)((int)pvVar6 + 0x255) = 0;
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar6 + 0x67) = 0xfa;
    *(float *)((int)pvVar6 + 0xbc) = (float)(dVar27 * dVar28);
    param_1->state = '\r';
    sound::PlayMobySound(3,0,param_1);
    if (param_1->animationId != '\a') {
      puVar9[0x20] = (longlong)(int)(animationSpeed * 6.5);
      mobyutil::MB_SetAnimation(param_1,7,0,*(undefined4 *)((int)puVar9 + 0x104));
    }
  }
  else if (iVar15 < 6) {
    if (iVar15 < 3) {
      if (iVar15 == 1) goto LAB_003c34cc;
    }
    else if (iVar15 < 4) {
LAB_003c32ac:
      *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      fVar2 = DAT_0071f418;
      fVar1 = DAT_0071f418 * 80.0;
      *(float *)((int)pvVar6 + 0x80) = fVar1;
      fVar2 = fVar2 * DAT_00845fe0;
      *(float *)((int)pvVar6 + 0x84) = fVar2;
      fVar4 = DAT_00845fdc;
      fVar3 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar3;
      fVar1 = (fVar3 * 2.0) / fVar1;
      *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + fVar4 / fVar1;
      uVar5 = *(undefined4 *)(iVar14 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar5;
      uVar5 = *(undefined4 *)(iVar14 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
      mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
      mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40c00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41500000;
      param_1->state = '\n';
      sound::PlayMobySound(1,0,param_1);
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
      fVar2 = DAT_0071f418;
      fVar1 = DAT_0071f418 * 80.0;
      *(float *)((int)pvVar6 + 0x80) = fVar1;
      fVar2 = fVar2 * DAT_00845fe0;
      *(float *)((int)pvVar6 + 0x84) = fVar2;
      fVar4 = DAT_00845fdc;
      fVar3 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
      *(undefined1 *)((int)pvVar6 + 0xad) = 0;
      *(undefined4 *)((int)pvVar6 + 0x94) = 9;
      *(float *)((int)pvVar6 + 0x8c) = fVar3;
      fVar1 = (fVar3 * 2.0) / fVar1;
      *(float *)((int)pvVar6 + 0x88) = fVar2 * 0.5 * fVar1 + fVar4 / fVar1;
      uVar5 = *(undefined4 *)(iVar14 + 0x18);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
      *(undefined4 *)(puVar9 + 7) = uVar5;
      uVar5 = *(undefined4 *)(iVar14 + 0x1c);
      *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
      *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
      mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
      mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
      *(undefined4 *)((int)pvVar6 + 0xc0) = 0x40a00000;
      *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41200000;
      param_1->state = '\n';
      sound::PlayMobySound(1,0,param_1);
    }
  }
  else if (iVar15 < 9) {
    if (6 < iVar15) goto LAB_003c32ac;
    *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
    fVar3 = DAT_0071f418;
    fVar1 = DAT_0071f418 * 80.0;
    *(float *)((int)pvVar6 + 0x80) = fVar1;
    fVar12 = DAT_00845fe0;
    fVar4 = DAT_00845fdc;
    fVar2 = SQRT(DAT_00845fd8 * 2.0 * fVar1);
    *(undefined1 *)((int)pvVar6 + 0xad) = 0;
    *(undefined4 *)((int)pvVar6 + 0x94) = 9;
    *(float *)((int)pvVar6 + 0x8c) = fVar2;
    fVar1 = (fVar2 * 2.0) / fVar1;
    *(float *)((int)pvVar6 + 0x88) = (fVar3 * fVar12 * 0.5 * fVar1 + fVar4 / fVar1) * 0.5;
    uVar5 = *(undefined4 *)(iVar14 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar5;
    uVar5 = *(undefined4 *)(iVar14 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar5;
    mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar13 - 200,uVar22 + 0x88,uVar22 + 0x8c);
    dVar27 = (double)fastfunc::FastSubRots((param_1->rotation).z,*(float *)(puVar9 + 0xf));
    if (dVar27 < 1.0471975803375244) {
      dVar27 = (double)fastfunc::FastWrapRot(*(float *)(puVar9 + 0xf),3.1415927);
      (param_1->rotation).z = (float)dVar27;
    }
    mobyutil::MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x70);
    mobyutil::MB_SetAnimationNoBlend(param_1,5,5);
    *(undefined4 *)((int)pvVar6 + 0xc0) = 0x41600000;
    *(undefined4 *)((int)pvVar6 + 0xc4) = 0x41e00000;
    param_1->state = '\n';
    sound::PlayMobySound(1,0,param_1);
  }
  else if ((0xb < iVar15) && (iVar15 < 0xe)) {
    *(undefined1 *)((int)pvVar6 + 0x67) = 0x78;
  }
  mobyutil::MB_UpdateLightsTransition(param_1,uVar22 + 0x60);
LAB_003c3648:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar22 + 0x60);
  return;
}



//==== 003c3730  ns=mobyupdate_unsorted  size=0x2e3c
// sig: undefined UpdateMoby_574(MobyInstance * moby)
// callers(0): 
// callees(57): 00057820 collproc::CollLine; 00059e20 collproc::CollSphere; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000f1114 mobyfunc::GetBonePosition; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 000ffc18 mobyutil::GetGroundZNoWater; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00105ab4 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010b030 mobyutil::MB_UpdateKick; 0010d7a0 mobyutil::MB_PathFollowToPos; 0010e030 mobyutil::MB_genericExplosion; 00110b70 mobyutil::MB_IsPntInCuboid; 001118d8 mobyutil::MB_getTarget; 001122ac mobyutil::MB_GetPlatformParent; 001122e0 mobyutil::MB_PlatformLocalToWorld; 00113288 mobyutil::???_MB_BuildScaledRotMtx; 00113e88 mobyutil::MB_MayaFrameTrigger; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 001167c8 mobyutil::MB_UpdateManipulatorRot; 00119ac0 mobyutil::MB_SetScaleCheat; 0011a560 mobyutil::MB_SpawnDebrisMoby; 0015d12c sound::PlayMobySound; 003c220c mobyupdate_helpers::M574_003c220c; 003c22e8 mobyupdate_helpers::M574_003c22e8; 003c24e8 mobyupdate_helpers::M574_003c24e8; 003c2a58 mobyupdate_helpers::M574_003c2a58; 004804e0 FUN_004804e0; 004fffb4 fastfunc::FastDecTimerS16; 005000b4 fastfunc::FastDecTimerU8; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble

/* Moby 574 */

void mobyupdate_unsorted::UpdateMoby_574(MobyInstance *moby)

{
  s8 sVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  void *pvVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  int *piVar9;
  void *pvVar10;
  Spline *pSVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  int iVar16;
  byte bVar20;
  undefined2 uVar19;
  undefined4 uVar17;
  undefined1 uVar21;
  uint uVar18;
  int iVar22;
  int iVar23;
  u8 uVar24;
  int *piVar26;
  longlong lVar25;
  longlong lVar27;
  MobyInstance *pMVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  undefined1 auStack_210 [16];
  float local_200;
  float local_1fc;
  undefined1 local_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [8];
  float local_188;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 auStack_130 [8];
  float local_128;
  undefined1 auStack_120 [16];
  undefined1 local_110 [24];
  undefined4 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  Vec4 local_e0 [2];
  undefined1 auStack_c0 [32];
  int local_a0;
  uint local_90;
  undefined1 auStack_8c [4];
  uint local_88;
  undefined1 auStack_84 [4];
  float local_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [8];
  longlong local_70;
  
  lVar15 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  mobyutil::MB_getTarget((double)*(float *)((int)pvVar5 + 0x270),lVar15,0x3c0000,local_e0);
  lVar27 = lVar15 + 0x10;
  dVar29 = (double)FUN_005e8588(lVar27,local_e0);
  mobyutil::MB_SetScaleCheat(0x4004000000000000,(int)pvVar5 + 0x150);
  fVar6 = (moby->pos).x;
  fVar7 = (moby->pos).y;
  uVar18 = (int)fVar6 >> 0x1f;
  uVar12 = (int)fVar7 >> 0x1f;
  fVar8 = (moby->pos).z;
  uVar13 = (int)fVar8 >> 0x1f;
  iVar23 = (uVar18 >> 1 ^ (uint)fVar6) - uVar18;
  iVar22 = (uVar12 >> 1 ^ (uint)fVar7) - uVar12;
  iVar16 = (uVar13 >> 1 ^ (uint)fVar8) - uVar13;
  if (*(char *)((int)pvVar5 + 0x262) == '\x01') {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
      return;
    }
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    uVar24 = moby->state;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else {
    uVar24 = moby->state;
    if (uVar24 != '\x0e') {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
    }
  }
  dVar32 = 2.0;
  if (0x3fffffff < iVar23) {
    if ((((iVar23 < 0x447f4001) && (0x3fffffff < iVar22)) && (iVar22 < 0x447f4001)) &&
       ((0x3fffffff < iVar16 && (iVar16 < 0x447f4001)))) {
      if (*(int *)((int)pvVar5 + 0x134) == -1 && uVar24 != '\r') {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyupdate_helpers::M574_003c2a58(lVar15);
      fastfunc::FastDecTimerU8((int)pvVar5 + 0x263);
      bVar20 = moby->state;
      fVar2 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      if ((moby->enabled != '\0') || (dVar29 < 24.0)) {
        if (bVar20 == 0xc) {
          dVar30 = (double)fastfunc::FastDiffRots
                                     ((double)*(float *)((int)pvVar5 + 0x28c),
                                      (double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x1b8) = (float)(dVar30 * 0.25);
          dVar30 = (double)fastfunc::FastDiffRots
                                     ((double)*(float *)((int)pvVar5 + 0x28c),
                                      (double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x238) = (float)(dVar30 * 0.75);
        }
        else if ((bVar20 < 7) && (dVar29 < (double)*(float *)((int)pvVar5 + 0x270))) {
          uVar34 = FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
          dVar30 = (double)fastfunc::FastDiffRots(uVar34,(double)(moby->rotation).z);
          *(float *)((int)pvVar5 + 0x238) = (float)dVar30;
        }
        uVar18 = (int)*(uint *)((int)pvVar5 + 0x1b8) >> 0x1f;
        iVar16 = (uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x1b8)) - uVar18;
        if (iVar16 < 0x3f490fdc) {
          if (iVar16 < -0x3f490fdb) {
            *(undefined4 *)((int)pvVar5 + 0x1b8) = 0xbf490fdb;
          }
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x1b8) = 0x3f490fdb;
        }
        uVar18 = (int)*(uint *)((int)pvVar5 + 0x238) >> 0x1f;
        iVar16 = (uVar18 >> 1 ^ *(uint *)((int)pvVar5 + 0x238)) - uVar18;
        if (iVar16 < 0x3f490fdc) {
          if (iVar16 < -0x3f490fdb) {
            *(undefined4 *)((int)pvVar5 + 0x238) = 0xbf490fdb;
          }
        }
        else {
          *(undefined4 *)((int)pvVar5 + 0x238) = 0x3f490fdb;
        }
        dVar33 = 0.029999999329447746;
        dVar30 = 0.30000001192092896;
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar15,
                   (int)pvVar5 + 0x150,2);
        mobyutil::MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar33),
                   (double)(float)((double)DAT_0071f40c * dVar30),lVar15,(int)pvVar5 + 0x1d0,3);
        bVar20 = moby->state;
        fVar2 = (moby->pos).x;
        fVar3 = (moby->pos).y;
      }
      if (bVar20 < 8) {
        if (bVar20 == 7) {
          if (*(short *)((int)pvVar5 + 0x256) == 0) {
            iVar16 = *(int *)((int)pvVar5 + 0x130) + *(int *)((int)pvVar5 + 0x120) * 0x10;
            FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - fVar2),
                         (double)(*(float *)(iVar16 + 0x14) - fVar3));
            iVar16 = mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
            if (iVar16 == 0) {
              uVar18 = mobyutil::MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  *(int *)((int)pvVar5 + 0x130) +
                                  *(int *)((int)pvVar5 + 0x120) * 0x10 + 0x10,(int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (((double)*(float *)((int)pvVar5 + 0x278) <= dVar29) ||
                   (10.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                }
                else if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  mobyupdate_helpers::M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                  else {
                    moby->state = '\x01';
                    if (moby->animationId != '\0') {
                      uVar34 = idol::GetAnimDuration(10);
                      mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                    }
                    FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                 (double)(local_e0[0].y - (moby->pos).y));
                    mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                  }
                }
              }
            }
          }
          else {
            moby->state = '\b';
          }
        }
        else if (bVar20 == 6) {
          dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
          uVar34 = FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                (double)(local_e0[0].y - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar34,0x3f9eb851e0000000,0x3fd3333340000000,0x3fd3333340000000,lVar15);
          mobyfunc::GetBonePosition(lVar15,0,auStack_1d0);
          if ((((25.0 <= dVar29) && (dVar29 <= 31.0)) &&
              (ABS((double)((moby->pos).z - local_e0[0].z)) < dVar32)) &&
             (dVar29 = (double)FUN_005e8588(lVar27,local_e0), dVar29 < 3.5)) {
            dVar29 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                          (double)(local_e0[0].y - (moby->pos).y));
            dVar29 = (double)fastfunc::FastSubRots((float)dVar29,(moby->rotation).z);
            if (dVar29 < 0.2617993950843811) {
              uVar34 = 0x3ff0000000000000;
              dVar29 = (double)mathfunc::cosf((moby->rotation).z);
              dVar33 = 0.20000000298023224;
              dVar30 = (double)FUN_005e8128((double)(moby->rotation).z);
              FUN_005e84c0(uVar34,local_110,local_110);
              local_f8 = CONCAT22(1,moby->oClass);
              if (local_a0 != 0) {
                mobyutil::CollDamageMobyDirect
                          (local_a0,0x60,
                           CONCAT44((float)(dVar29 * 0.20000000298023224),(float)(dVar30 * dVar33)),
                           0x3f80000045afdf66,CONCAT44(moby,0x10001),CONCAT44(local_f8,0x3f800000),
                           CONCAT44(uStack_f0,uStack_ec),CONCAT44(uStack_e8,uStack_e4));
              }
              goto LAB_003c5f48;
            }
          }
          if ((moby->field43_0x70 & 2U) != 0) {
            if (*(int *)((int)pvVar5 + 0x274) == 0) {
              mobyupdate_helpers::M574_003c24e8(lVar15);
              moby->state = '\a';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            else {
              pvVar10 = moby->pVar;
              if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                moby->state = '\a';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              else {
                moby->state = '\x01';
                if (moby->animationId != '\0') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                }
                FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                             (double)(local_e0[0].y - (moby->pos).y));
                mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
              }
            }
          }
        }
        else if (bVar20 == 5) {
          iVar16 = mobyutil::MB_MayaFrameTrigger(8.0,moby);
          if (iVar16 != 0) {
            *(char *)((int)pvVar5 + 0x254) = *(char *)((int)pvVar5 + 0x254) + '\x01';
            mobyfunc::GetBonePosition(lVar15,0,auStack_210);
            FUN_005e81f0(&local_200,auStack_c0,auStack_210);
            dVar31 = 6.0;
            FUN_005e7f98((double)(mobyutil::g_FrameTime * 6.0),&local_200,&local_200);
            dVar33 = (double)FUN_005e8338((double)local_200,(double)local_1fc);
            dVar30 = (double)fastfunc::FastDiffRots(dVar33,(double)(moby->rotation).z);
            if (dVar30 <= 0.5235987901687622) {
              if (dVar30 < -0.5235987901687622) {
                dVar33 = (double)fastfunc::FastWrapRot((moby->rotation).z,-0.5235988);
                mathfunc::cosf((float)dVar33);
                FUN_005e8128(dVar33);
              }
            }
            else {
              dVar33 = (double)fastfunc::FastWrapRot((moby->rotation).z,0.5235988);
              mathfunc::cosf((float)dVar33);
              FUN_005e8128(dVar33);
            }
            FUN_005e822c((double)(animationSpeed * 10.0),local_1f0,&local_200);
            fastfunc::FastVecAddSelf(auStack_1e0,local_1f0,auStack_210);
            mobyutil::____MB_SpawnRingPartFx(lVar15);
            uVar34 = idol::GetAnimDuration(0x82);
            FUN_004804e0(dVar33,(double)(float)((double)mobyutil::g_FrameTime * dVar31),
                         0x3fe8000000000000,&local_200,auStack_210,lVar15,uVar34);
          }
          if ((moby->field43_0x70 & 2U) == 0) {
            if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x278)) &&
                 (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) {
                if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  mobyupdate_helpers::M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                }
              }
            }
            else {
              FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                           (double)(local_e0[0].y - (moby->pos).y));
              iVar16 = mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
              if ((iVar16 == 0) && (moby->state = '\x06', moby->animationId != '\x02')) {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
          else if (*(char *)((int)pvVar5 + 0x254) != '\0') {
            if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x27c)) &&
               (ABS(local_e0[0].z - (moby->pos).z) < 4.0)) {
              *(undefined4 *)((int)pvVar5 + 0x27c) = 0;
              moby->state = '\b';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                         (double)(local_e0[0].y - (moby->pos).y));
            iVar16 = mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
            if (iVar16 == 0) {
              if (((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) &&
                  (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) &&
                 (iVar16 = fastfunc::FastDecTimerS16((int)pvVar5 + 0x250), iVar16 != 0)) {
                dVar33 = (double)(moby->rotation).z;
                dVar30 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                              (double)(local_e0[0].y - (moby->pos).y));
                dVar30 = (double)fastfunc::FastSubRots((float)dVar33,(float)dVar30);
                if ((dVar30 < 0.0872664600610733) && (moby->enabled != '\0')) goto LAB_003c5f48;
              }
              if ((dVar29 < 3.5) &&
                 ((ABS(local_e0[0].z - (moby->pos).z) < 3.0 &&
                  (moby->state = '\x06', moby->animationId != '\x02')))) {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
        }
        else if (bVar20 == 4) {
          if ((moby->field43_0x70 & 2U) == 0) {
            if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x278)) &&
                 (ABS(local_e0[0].z - (moby->pos).z) < 10.0)) {
                if (*(int *)((int)pvVar5 + 0x274) == 0) {
                  mobyupdate_helpers::M574_003c24e8(lVar15);
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  pvVar10 = moby->pVar;
                  if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                    *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                    moby->state = '\a';
                    if (moby->animationId != '\x01') {
                      uVar34 = idol::GetAnimDuration(10);
                      mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                    }
                  }
                }
              }
            }
            else {
              moby->state = '\x06';
              if (moby->animationId != '\x02') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,2,0,uVar34);
              }
            }
          }
          else {
            moby->state = '\x05';
            *(undefined1 *)((int)pvVar5 + 0x254) = 0;
            if (moby->animationId != '\x04') {
              mobyutil::MB_SetAnimation(lVar15,4,0,0);
            }
          }
        }
        else if (bVar20 == 2) {
          if ((((double)*(float *)((int)pvVar5 + 0x270) <= dVar29) ||
              (4.0 <= ABS(local_e0[0].z - (moby->pos).z))) || (moby->animationId == '\n')) {
            if (((MobyInstance + *(int *)((int)pvVar5 + 0x284) == (MobyInstance *)0x0) ||
                (uVar24 = MobyInstance[*(int *)((int)pvVar5 + 0x284)].state,
                uVar24 == 0xfd || uVar24 == 0xfe)) ||
               ((moby->updateId == '\n' && ((moby->field43_0x70 & 2U) != 0)))) {
              moby->state = '\x01';
              uVar34 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
              uVar19 = idol::GetAnimDuration(0x3c);
              *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
              *(undefined4 *)((int)pvVar5 + 0x284) = 0xffffffff;
            }
            else {
              FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
              mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
            }
          }
          else {
            uVar34 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar15,10,0,uVar34);
          }
        }
        else if (bVar20 == 1) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId != '\0')) {
            uVar34 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
            fVar2 = (moby->pos).x;
            fVar3 = (moby->pos).y;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x290);
          if (iVar16 == -1) {
            if ((*(int *)((int)pvVar5 + 0x284) == -1) || (iVar16 != -1)) {
              if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) ||
                 (dVar30 = (double)*(float *)((int)pvVar5 + 0x27c), dVar29 < dVar30)) {
                FUN_005e8338((double)(local_e0[0].x - fVar2),(double)(local_e0[0].y - fVar3));
                iVar16 = mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                if (iVar16 != 0) goto LAB_003c5f48;
                dVar30 = (double)*(float *)((int)pvVar5 + 0x27c);
              }
              if ((dVar29 < dVar30) && (ABS(local_e0[0].z - (moby->pos).z) < 4.0)) {
                *(undefined2 *)((int)pvVar5 + 0x256) = 1;
                *(undefined4 *)((int)pvVar5 + 0x27c) = 0;
                moby->state = '\b';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              if ((3.5 <= dVar29) || (3.0 <= ABS(local_e0[0].z - (moby->pos).z))) {
                if ((dVar29 < (double)*(float *)((int)pvVar5 + 0x270)) &&
                   ((ABS(local_e0[0].z - (moby->pos).z) < 10.0 &&
                    (iVar16 = fastfunc::FastDecTimerS16((int)pvVar5 + 0x250), iVar16 != 0)))) {
                  dVar30 = (double)(moby->rotation).z;
                  dVar29 = (double)FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                                (double)(local_e0[0].y - (moby->pos).y));
                  dVar29 = (double)fastfunc::FastSubRots((float)dVar30,(float)dVar29);
                  if ((dVar29 < 0.7853981852531433) &&
                     ((moby->enabled != '\0' && (moby->state = '\x04', moby->animationId != '\x03'))
                     )) {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,3,0,uVar34);
                  }
                }
              }
              else {
                moby->state = '\x06';
                if (moby->animationId != '\x02') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,2,0,uVar34);
                }
              }
            }
            else {
              uVar34 = idol::GetAnimDuration(10);
              mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
              moby->state = '\x02';
            }
          }
          else {
            pSVar11 = Splines[iVar16];
            fVar2 = pSVar11->points[0].x;
            (moby->pos).x = fVar2;
            fVar3 = pSVar11->points[0].y;
            (moby->pos).y = fVar3;
            (moby->pos).z = pSVar11->points[0].z;
            (moby->pos).w = pSVar11->points[0].w;
            dVar30 = (double)FUN_005e8338((double)(pSVar11->points[1].x - fVar2),
                                          (double)(pSVar11->points[1].y - fVar3));
            sVar1 = moby->group;
            (moby->rotation).z = (float)dVar30;
            iVar16 = mobyupdate_helpers::M574_003c220c(sVar1);
            if ((((iVar16 != 0) ||
                 (iVar16 = mobyutil::MB_IsPntInCuboid
                                     (local_e0,(longlong)*(int *)((int)pvVar5 + 0x29c)), iVar16 != 0
                 )) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) ||
               ((dVar29 < (double)*(float *)((int)pvVar5 + 0x294) &&
                (ABS(local_e0[0].z - (moby->pos).z) < 4.0)))) {
              *(undefined4 *)((int)pvVar5 + 0x298) = 0;
              moby->state = '\t';
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
          }
        }
        else if (bVar20 == 0) {
          uVar18 = g_heroMobyPtr->color;
          uVar12 = g_heroMobyPtr->light;
          moby->shadow = '\x1c';
          moby->color = uVar18;
          moby->light = uVar12;
          mobyutil::MB_InitDefaultParams((float *)((int)pvVar5 + 0xd0));
          fVar2 = DAT_0071f418;
          *(float *)((int)pvVar5 + 0x10c) = DAT_0071f418 * 6.2831855;
          *(float *)((int)pvVar5 + 0x110) = fVar2 * 12.566371;
          fVar3 = mobyutil::g_FrameTime;
          *(float *)((int)pvVar5 + 0x114) = mobyutil::g_FrameTime * 3.1415927;
          *(float *)((int)pvVar5 + 0xf4) = fVar3 * 6.0;
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0x40400000;
          *(undefined4 *)((int)pvVar5 + 0xd8) = 0x40000000;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          *(undefined4 *)((int)pvVar5 + 0xf8) = 0x40490fdb;
          fVar2 = animationSpeed;
          *(undefined4 *)((int)pvVar5 + 0x108) = 9;
          *(undefined4 *)((int)pvVar5 + 0x20) = 0x40400000;
          *(float *)((int)pvVar5 + 0xfc) = fVar2 * 15.0 * fVar3 * 6.0;
          uVar19 = fastfunc::FastDoubleToInt(0x4008000000000000);
          *(undefined2 *)((int)pvVar5 + 0x24) = uVar19;
          *(undefined1 *)((int)pvVar5 + 0x28) = 2;
          *(undefined4 *)((int)pvVar5 + 0x30) = 0x3fe00000;
          *(undefined1 *)((int)pvVar5 + 0x29) = 1;
          *(undefined4 *)((int)pvVar5 + 0x98) = 0x3f333333;
          uVar17 = fastfunc::FastDoubleToInt(0x4086666660000000);
          *(undefined4 *)((int)pvVar5 + 0x90) = uVar17;
          *(undefined4 *)((int)pvVar5 + 0xbc) = 0;
          *(undefined1 *)((int)pvVar5 + 0x58) = 10;
          *(undefined1 *)((int)pvVar5 + 0x5a) = 0xc;
          FUN_005e7e70((int)pvVar5 + 0x40);
          iVar16 = *(int *)((int)pvVar5 + 0x134);
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          *(undefined2 *)((int)pvVar5 + 0x250) = 0;
          *(undefined4 *)((int)pvVar5 + 0x120) = 0;
          pSVar11 = Splines[iVar16];
          *(Spline **)((int)pvVar5 + 0x130) = pSVar11;
          FUN_005e7e98(lVar27,ZEXT48(pSVar11) + 0x10);
          moby->state = '\x01';
          piVar9 = *(int **)((int)pvVar5 + 0x130);
          *(short *)((int)pvVar5 + 0x288) = moby->drawDistance;
          uVar14 = (ushort)DAT_010c9f58;
          DAT_010c9f58 = DAT_010c9f58 + 1;
          *(ushort *)((int)pvVar5 + 0x28a) = uVar14 & 7;
          *(undefined1 *)((int)pvVar5 + 0x263) = 0;
          if ((piVar9 != (int *)0x0) && (0 < *piVar9 + -2)) {
            iVar16 = 0;
            piVar26 = piVar9;
            do {
              dVar29 = (double)FUN_005e8548(piVar26 + 4,piVar26 + 8);
              piVar26[7] = (int)(float)dVar29;
              iVar16 = iVar16 + 1;
              piVar26 = piVar26 + 4;
            } while (iVar16 < *piVar9 + -2);
          }
          if ((*(int *)((int)pvVar5 + 0x284) != -1) && (*(int *)((int)pvVar5 + 0x290) == -1)) {
            uVar34 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
            moby->state = '\x02';
          }
        }
      }
      else if (bVar20 == 0xf) {
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          mobyfunc::DeleteMoby(moby);
          return;
        }
        moby->collision = moby->pClass->collision;
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        dVar29 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x24));
        *(float *)((int)pvVar5 + 0x20) = (float)dVar29;
        FUN_005e7e98(lVar27,(ulonglong)*(uint *)((int)pvVar5 + 0x130) + 0x10);
        moby->state = '\x01';
      }
      else if (bVar20 == 0xe) {
        if (moby->animationId != '\0') {
          uVar34 = idol::GetAnimDuration(10);
          mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
        }
        MVar4 = moby->modeBits &
                (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                 DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        moby->modeBits = MVar4;
        iVar16 = *(int *)((int)pvVar5 + 0x130);
        (moby->pos).x = *(f32 *)(iVar16 + 0x10);
        (moby->pos).y = *(f32 *)(iVar16 + 0x14);
        (moby->pos).z = *(f32 *)(iVar16 + 0x18);
        fVar6 = *(f32 *)(iVar16 + 0x1c);
        moby->collision = (ushort *)0x0;
        (moby->pos).w = fVar6;
        moby->modeBits = MVar4 | (UNK_40|DISABLED);
      }
      else if (bVar20 == 0xd) {
        uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
        *(char *)((int)pvVar5 + 0x255) = *(char *)((int)pvVar5 + 0x255) + '\x01';
        dVar29 = (double)mobyutil::GetGroundZNoWater(lVar27);
        if ((((uVar18 & 0x60) != 0) && ((float)(dVar29 + 5.0) < (moby->pos).z)) &&
           (moby->setByGroup != '\v')) {
          sound::PlayMobySound(10,0,moby);
          moby->setByGroup = '\v';
        }
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if ((uVar18 & 1) != 0) {
          *(undefined1 *)((int)pvVar5 + 0x255) = 0;
        }
        if ((uVar18 & 0x60) != 0) {
          FUN_005e7e98(auStack_160,lVar27);
          uVar34 = 0;
          mobyutil::MB_genericExplosion
                    (0,0,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                     0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_160,&DAT_003c3684,6,5,2,4)
          ;
          lVar25 = lVar15 + 0x40;
          mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
          mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
          mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
          mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
          if (*(int *)((int)pvVar5 + 0x264) == -1) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x130);
          (moby->pos).x = *(f32 *)(iVar16 + 0x10);
          (moby->pos).y = *(f32 *)(iVar16 + 0x14);
          (moby->pos).z = *(f32 *)(iVar16 + 0x18);
          (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
          FUN_005e7e70((int)pvVar5 + 0x40);
          MVar4 = moby->modeBits;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          moby->collision = (ushort *)0x0;
          moby->modeBits = MVar4 | (UNK_40|DISABLED);
          moby->state = '\x0e';
          return;
        }
        fVar6 = (moby->pos).z;
        uVar18 = (int)fVar6 >> 0x1f;
        if ((int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18) < 0x40a00000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
          if (*(int *)((int)pvVar5 + 0x264) == -1) {
            mobyfunc::DeleteMoby(moby);
            return;
          }
          iVar16 = *(int *)((int)pvVar5 + 0x130);
          (moby->pos).x = *(f32 *)(iVar16 + 0x10);
          (moby->pos).y = *(f32 *)(iVar16 + 0x14);
          (moby->pos).z = *(f32 *)(iVar16 + 0x18);
          (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
          FUN_005e7e70((int)pvVar5 + 0x40);
          MVar4 = moby->modeBits;
          *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
          moby->collision = (ushort *)0x0;
          moby->state = '\x0e';
          moby->modeBits = MVar4 | (UNK_40|DISABLED);
          return;
        }
      }
      else {
        if (bVar20 != 0xc) {
          if (bVar20 != 0xb) {
            if (bVar20 == 10) {
              uVar18 = 0;
              if (*(short *)((int)pvVar5 + 0xae) == 2) {
                moby->unk58 = 1.0;
                if ((moby->field43_0x70 & 2U) != 0) {
                  uVar18 = 0x40;
                }
              }
              else {
                uVar18 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x70));
              }
              *(undefined4 *)((int)pvVar5 + 0x290) = 0xffffffff;
              if ((uVar18 & 0x40) == 0) {
                fVar6 = (moby->pos).z;
                uVar12 = (int)fVar6 >> 0x1f;
                if (((int)((uVar12 >> 1 ^ (uint)fVar6) - uVar12) < 0x40a00000) ||
                   ((uVar18 & 0x20) != 0)) {
                  FUN_005e7e98(auStack_1a0,lVar27);
                  uVar34 = 0;
                  mobyutil::MB_genericExplosion
                            (0,0,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                             0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_1a0,&DAT_003c3684,
                             6,5,2,4);
                  lVar25 = lVar15 + 0x40;
                  mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
                  mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
                  mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
                  mobyutil::MB_SpawnBoltsFromCrate(lVar15,0,0xffffffffffffffff);
                  if (*(int *)((int)pvVar5 + 0x264) == -1) {
                    mobyfunc::DeleteMoby(moby);
                    return;
                  }
                  iVar16 = *(int *)((int)pvVar5 + 0x130);
                  (moby->pos).x = *(f32 *)(iVar16 + 0x10);
                  (moby->pos).y = *(f32 *)(iVar16 + 0x14);
                  (moby->pos).z = *(f32 *)(iVar16 + 0x18);
                  (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
                  FUN_005e7e70((int)pvVar5 + 0x40);
                  MVar4 = moby->modeBits;
                  *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
                  moby->collision = (ushort *)0x0;
                  moby->state = '\x0e';
                  moby->modeBits = MVar4 | (UNK_40|DISABLED);
                  return;
                }
              }
              else if (*(int *)((int)pvVar5 + 0x274) == 0) {
                mobyupdate_helpers::M574_003c24e8(lVar15);
                moby->state = '\a';
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                }
              }
              else {
                pvVar10 = moby->pVar;
                if (*(int *)((int)pvVar10 + 0x120) < **(int **)((int)pvVar10 + 0x130) + -1) {
                  *(int *)((int)pvVar10 + 0x120) = *(int *)((int)pvVar10 + 0x120) + 1;
                  moby->state = '\a';
                  if (moby->animationId != '\x01') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                  }
                }
                else {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                }
              }
              (moby->pos).z = (float)((double)(moby->pos).z + dVar32);
              dVar29 = (double)mobyutil::GetGroundZNoWater(lVar27);
              fVar2 = (float)((double)(moby->pos).z - dVar32);
              (moby->pos).z = fVar2;
              if ((float)(dVar29 + 5.0) < fVar2) {
                sound::PlayMobySound(10,0x21,moby);
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,0xb,0,uVar34);
                moby->state = '\v';
              }
            }
            else if (bVar20 == 9) {
              pSVar11 = Splines[*(int *)((int)pvVar5 + 0x290)];
              mobyutil::MB_PathFollowToPos
                        (0x408f380000000000,0x4014000000000000,0,ZEXT48(pSVar11),lVar27,auStack_1b0,
                         &local_88,auStack_84,&DAT_003c3684,0);
              uVar18 = *(uint *)((int)pvVar5 + 0x298);
              lVar25 = (ulonglong)uVar18 +
                       ((longlong)(int)uVar18 - (longlong)(int)local_88 >> 0x3f &
                       (ulonglong)local_88 - (ulonglong)uVar18);
              *(int *)((int)pvVar5 + 0x298) = (int)lVar25;
              uVar18 = mobyutil::MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  ZEXT48(pSVar11) + lVar25 * 0x10 + 0x10 & 0xffffffff,
                                  (int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (*(int *)((int)pvVar5 + 0x298) < pSVar11->cnt + -1) {
                  *(int *)((int)pvVar5 + 0x298) = *(int *)((int)pvVar5 + 0x298) + 1;
                }
                else {
                  *(undefined4 *)((int)pvVar5 + 0x290) = 0xffffffff;
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  if (*(int *)((int)pvVar5 + 0x284) == -1) {
                    FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                                 (double)(local_e0[0].y - (moby->pos).y));
                    mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                  }
                  else {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                    moby->state = '\x02';
                  }
                }
              }
            }
            else if (bVar20 == 8) {
              mobyutil::MB_PathFollowToPos
                        (0x408f380000000000,0x4014000000000000,0,
                         *(undefined4 *)((int)pvVar5 + 0x130),lVar27,auStack_1c0,&local_90,
                         auStack_8c,&DAT_003c3684,0);
              uVar18 = *(uint *)((int)pvVar5 + 0x120);
              lVar25 = (ulonglong)uVar18 +
                       ((longlong)(int)uVar18 - (longlong)(int)local_90 >> 0x3f &
                       (ulonglong)local_90 - (ulonglong)uVar18);
              *(int *)((int)pvVar5 + 0x120) = (int)lVar25;
              uVar18 = mobyutil::MB_UpdateNavMoveTurning
                                 (lVar15,(int)pvVar5 + 0xd0,
                                  (ulonglong)*(uint *)((int)pvVar5 + 0x130) + lVar25 * 0x10 + 0x10 &
                                  0xffffffff,(int)pvVar5 + 0x40);
              if ((uVar18 & 0x14) != 0) {
                if (*(int *)((int)pvVar5 + 0x120) < **(int **)((int)pvVar5 + 0x130) + -1) {
                  *(int *)((int)pvVar5 + 0x120) = *(int *)((int)pvVar5 + 0x120) + 1;
                }
                else {
                  moby->state = '\x01';
                  if (moby->animationId != '\0') {
                    uVar34 = idol::GetAnimDuration(10);
                    mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                  }
                  FUN_005e8338((double)(local_e0[0].x - (moby->pos).x),
                               (double)(local_e0[0].y - (moby->pos).y));
                  mobyupdate_helpers::M574_003c22e8(lVar15,local_e0);
                }
              }
            }
            goto LAB_003c5f48;
          }
          iVar16 = (int)pvVar5 + 0x70;
          *(float *)((int)pvVar5 + 0x78) =
               *(float *)((int)pvVar5 + 0x78) - *(float *)((int)pvVar5 + 0x80);
          dVar29 = (double)FUN_005e7ebc(iVar16);
          local_80 = (float)dVar29;
          dVar30 = 0.0;
          dVar29 = dVar30;
          if (*(short *)((int)pvVar5 + 0xae) != 2) {
            dVar29 = (double)*(float *)((int)pvVar5 + 0xbc);
          }
          mobyutil::Delt((float)dVar29,*(float *)((int)pvVar5 + 0x84),&local_80);
          FUN_005e84c0((double)local_80,iVar16,iVar16);
          FUN_005e7e98(auStack_190,lVar27);
          fVar2 = *(float *)((int)pvVar5 + 0x98);
          FUN_005e7f54(lVar27,lVar27,iVar16);
          FUN_005e7e98(auStack_180,lVar27);
          dVar29 = (double)FUN_005e8030(iVar16);
          iVar16 = *(int *)((int)pvVar5 + 0x90);
          local_70 = (longlong)iVar16;
          if ((double)local_70 < dVar29) {
            collproc::CollLine(auStack_190,auStack_180,0x24,lVar15,0);
            FUN_005e7e98(auStack_180,0xa10960);
            iVar16 = *(int *)((int)pvVar5 + 0x90);
          }
          dVar29 = (double)fastfunc::FastIntToDouble(iVar16);
          iVar16 = collproc::CollSphere
                             ((double)(float)(dVar29 * 0.0009765625),auStack_180,&DAT_003c3684,0x24,
                              lVar15);
          fVar3 = (moby->pos).z;
          if (iVar16 != 0) {
            FUN_005e7e98(lVar27,0xa10970);
            fVar3 = (local_188 + fVar2 + *(float *)((int)pvVar5 + 0x78)) -
                    *(float *)((int)pvVar5 + 0x98);
            (moby->pos).z = fVar3;
          }
          if (fVar3 < 5.0) {
            FUN_005e7e98(auStack_170,lVar27);
            mobyutil::MB_genericExplosion
                      (dVar30,dVar30,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000
                       ,0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_170,&DAT_003c3684,0,5,2
                       ,4);
            lVar25 = lVar15 + 0x40;
            mobyutil::MB_SpawnDebrisMoby(dVar30,lVar15,0x6d0,lVar27,lVar25,0,0);
            mobyutil::MB_SpawnDebrisMoby(dVar30,lVar15,0x6d1,lVar27,lVar25,0,0);
            mobyutil::MB_SpawnDebrisMoby(dVar30,lVar15,0x6d2,lVar27,lVar25,0,0);
            mobyutil::MB_SpawnBoltsFromCrate(lVar15,0x200,0xffffffffffffffff);
            if (*(int *)((int)pvVar5 + 0x264) == -1) {
              mobyfunc::DeleteMoby(moby);
              return;
            }
            iVar16 = *(int *)((int)pvVar5 + 0x130);
            (moby->pos).x = *(f32 *)(iVar16 + 0x10);
            (moby->pos).y = *(f32 *)(iVar16 + 0x14);
            (moby->pos).z = *(f32 *)(iVar16 + 0x18);
            (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
            FUN_005e7e70((int)pvVar5 + 0x40);
            MVar4 = moby->modeBits;
            *(float *)((int)pvVar5 + 0xe8) = (float)dVar30;
            moby->collision = (ushort *)0x0;
            moby->state = '\x0e';
            moby->modeBits = MVar4 | (UNK_40|DISABLED);
            return;
          }
        }
        bVar20 = moby->animationId;
        if (bVar20 < 2) {
          if (bVar20 != 0) {
            mobyutil::OrganicDeltAngSpeed
                      ((double)*(float *)((int)pvVar5 + 0x28c),0x3fb70a3d80000000,0x3fd147ae20000000
                       ,0x3fc3333340000000,lVar15);
            dVar29 = (double)fastfunc::FastSubRots
                                       ((moby->rotation).z,*(float *)((int)pvVar5 + 0x28c));
            if (dVar29 < 0.03490658476948738) {
              uVar21 = idol::GetAnimDuration(0x3c);
              *(undefined1 *)((int)pvVar5 + 0x263) = uVar21;
              uVar24 = moby->setByGroup;
              if ((uVar24 == '\a') || (uVar24 == '\b')) {
                if (uVar24 == '\a') {
                  mobyupdate_helpers::M574_003c24e8(lVar15);
                  uVar24 = moby->setByGroup;
                }
                moby->state = uVar24;
                if (moby->animationId != '\x01') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
                }
                moby->unk58 = 1.0;
              }
              else {
                moby->state = '\x01';
                if (moby->animationId != '\0') {
                  uVar34 = idol::GetAnimDuration(10);
                  mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
                }
                uVar19 = idol::GetAnimDuration(10);
                *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
              }
            }
          }
        }
        else if (bVar20 == 9) {
          mobyutil::OrganicDeltAngSpeed
                    ((double)*(float *)((int)pvVar5 + 0x28c),0x3f847ae140000000,0x3fd3333340000000,
                     0x3fc99999a0000000,lVar15);
          dVar29 = (double)fastfunc::FastSubRots((moby->rotation).z,*(float *)((int)pvVar5 + 0x28c))
          ;
          if (dVar29 < 0.03490658476948738) {
            uVar21 = idol::GetAnimDuration(0x3c);
            *(undefined1 *)((int)pvVar5 + 0x263) = uVar21;
            uVar24 = moby->setByGroup;
            if ((uVar24 == '\a') || (uVar24 == '\b')) {
              if (uVar24 == '\a') {
                mobyupdate_helpers::M574_003c24e8(lVar15);
                uVar24 = moby->setByGroup;
              }
              moby->state = uVar24;
              if (moby->animationId != '\x01') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,1,0,uVar34);
              }
            }
            else {
              moby->state = '\x01';
              if (moby->animationId != '\0') {
                uVar34 = idol::GetAnimDuration(10);
                mobyutil::MB_SetAnimation(lVar15,0,0,uVar34);
              }
              uVar19 = idol::GetAnimDuration(10);
              *(undefined2 *)((int)pvVar5 + 0x250) = uVar19;
            }
          }
        }
      }
LAB_003c5f48:
      if ((moby->enabled != '\0') && (dVar29 = (double)FUN_005e8548(lVar27,0x951500), dVar29 < 36.0)
         ) {
        mobyutil::MB_SetZBoundsFromGround(lVar15);
      }
      iVar16 = *(int *)((int)pvVar5 + 0x280);
      if ((((iVar16 == -1) || (MobyInstance + iVar16 == (MobyInstance *)0x0)) ||
          (uVar24 = MobyInstance[iVar16].state, uVar24 == 0xfe)) || (uVar24 == 0xfd)) {
        *(undefined4 *)((int)pvVar5 + 0x280) = 0xffffffff;
      }
      else if (iVar16 != -1) {
        pMVar28 = MobyInstance + *(int *)((int)pvVar5 + 0x280);
        if (((pMVar28->oClass == 0x335) || (pMVar28->oClass == TRAIN_CARRIAGE_04BA)) &&
           (0 < **(int **)((int)pvVar5 + 0x130))) {
          iVar16 = 0;
          iVar22 = 0;
          do {
            iVar23 = *(int *)((int)pvVar5 + 0x130) + iVar16 + 0x10;
            mobyutil::MB_PlatformLocalToWorld(lVar15,pMVar28,iVar23,local_140,iVar23,local_140);
            iVar22 = iVar22 + 1;
            iVar16 = iVar16 + 0x10;
          } while (iVar22 < **(int **)((int)pvVar5 + 0x130));
        }
        mobyutil::MB_PlatformLocalToWorld(lVar15,pMVar28,lVar27,lVar15 + 0x40,lVar27,local_150);
        (moby->rotation).z = 0.0;
      }
      uVar24 = moby->state;
      if (((uVar24 != '\r' && uVar24 != '\f') && (uVar24 != '\x0e')) && (uVar24 != '\v')) {
        dVar30 = 0.0;
        dVar29 = dVar30;
        if (uVar24 != '\n') {
          dVar29 = (double)(DAT_0071f418 * 9.8 + *(float *)((int)pvVar5 + 0xe8));
        }
        *(float *)((int)pvVar5 + 0xe8) = (float)dVar29;
        (moby->pos).z = (moby->pos).z - (float)(dVar29 - dVar32);
        dVar29 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar27,0);
        fVar2 = (float)((double)(moby->pos).z - dVar32);
        dVar33 = (double)fVar2;
        (moby->pos).z = fVar2;
        if (dVar29 <= dVar33) {
          if ((double)(float)(dVar29 + 5.0) < dVar33) {
            uVar34 = idol::GetAnimDuration(10);
            mobyutil::MB_SetAnimation(lVar15,0xb,0,uVar34);
            moby->state = '\v';
            FUN_005e7e70((int)pvVar5 + 0x70);
            *(float *)((int)pvVar5 + 0x78) = -*(float *)((int)pvVar5 + 0xe8);
            *(float *)((int)pvVar5 + 0x80) = DAT_0071f418 * 19.6;
          }
        }
        else {
          if ((CollOutput.pMoby == (MobyInstance *)0x0) ||
             (iVar16 = mobyutil::MB_GetPlatformParent(), iVar16 == 0)) {
            if ((*(int *)((int)pvVar5 + 0x280) != -1) &&
               (MobyInstance[*(int *)((int)pvVar5 + 0x280)].oClass != TRAIN_CARRIAGE_04BA &&
                MobyInstance[*(int *)((int)pvVar5 + 0x280)].oClass != 0x335)) {
              *(undefined4 *)((int)pvVar5 + 0x280) = 0xffffffff;
            }
          }
          else {
            uVar18 = (int)CollOutput.pMoby - (int)MobyInstance;
            *(uint *)((int)pvVar5 + 0x280) =
                 ((int)uVar18 >> 8) + (uint)((int)uVar18 < 0 && (uVar18 & 0xff) != 0);
          }
          iVar16 = *(int *)((int)pvVar5 + 0x280);
          (moby->pos).z = (float)dVar29;
          *(float *)((int)pvVar5 + 0xe8) = (float)dVar30;
          if (iVar16 != -1) {
            mobyutil::____MB_BuildScaledRotMtx
                      (CONCAT44(CollOutput.normal.x,CollOutput.normal.y),
                       CONCAT44(CollOutput.normal.z,CollOutput.normal.w));
          }
        }
      }
      if (*(char *)((int)pvVar5 + 0x262) != '\0') {
        return;
      }
      dVar29 = (double)FUN_005e8588(lVar27,0x951500);
      if (70.0 <= dVar29) {
        return;
      }
      if ((worldUpdateTime & 7) != (int)*(short *)((int)pvVar5 + 0x28a)) {
        return;
      }
      uVar34 = 0;
      mobyutil::MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)((int)pvVar5 + 0x130),lVar27
                 ,auStack_130,auStack_7c,auStack_78);
      fVar6 = (moby->pos).z;
      uVar18 = (int)fVar6 >> 0x1f;
      if ((0x409fffff < (int)((uVar18 >> 1 ^ (uint)fVar6) - uVar18)) &&
         (local_128 - 10.0 <= (moby->pos).z)) {
        return;
      }
      FUN_005e7e98(auStack_120,lVar27);
      mobyutil::MB_genericExplosion
                (uVar34,uVar34,dVar32,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar15,(int)pvVar5 + 0x40,auStack_120,&DAT_003c3684,0,5,2,4);
      lVar25 = lVar15 + 0x40;
      mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d0,lVar27,lVar25,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d1,lVar27,lVar25,0,0);
      mobyutil::MB_SpawnDebrisMoby(uVar34,lVar15,0x6d2,lVar27,lVar25,0,0);
      mobyutil::MB_SpawnBoltsFromCrate(lVar15,0x200,0xffffffffffffffff);
      if (*(int *)((int)pvVar5 + 0x264) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      iVar16 = *(int *)((int)pvVar5 + 0x130);
      (moby->pos).x = *(f32 *)(iVar16 + 0x10);
      (moby->pos).y = *(f32 *)(iVar16 + 0x14);
      (moby->pos).z = *(f32 *)(iVar16 + 0x18);
      (moby->pos).w = *(f32 *)(iVar16 + 0x1c);
      FUN_005e7e70((int)pvVar5 + 0x40);
      MVar4 = moby->modeBits;
      *(undefined4 *)((int)pvVar5 + 0xe8) = 0;
      moby->collision = (ushort *)0x0;
      moby->modeBits = MVar4 | (UNK_40|DISABLED);
      moby->state = '\x0e';
      return;
    }
  }
  mobyfunc::DeleteMoby(moby);
  return;
}



//==== 003c656c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M575_003c656c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M575_003c656c(void)

{
  DAT_00846038 = 0x10000;
  return;
}



//==== 003c65c8  ns=mobyupdate_helpers  size=0x668
// sig: undefined M575_003c65c8(void)
// callers(1): 003c6c48 mobyupdate_unsorted::UpdateMoby_575
// callees(4): 0010de78 mobyutil::MB_WrapRot; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M575_003c65c8
               (double param_1,float *param_2,undefined4 *param_3,float *param_4,float *param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r25;
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
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
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
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  float fVar34;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x170;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x30] = in_LR;
  puVar9[0x23] = in_f21;
  puVar9[0x24] = in_f22;
  puVar9[0x25] = in_f23;
  puVar9[0x26] = in_f24;
  puVar9[0x27] = in_f25;
  puVar9[0x28] = in_f26;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  puVar9[0x1e] = unaff_r27;
  puVar9[0x1f] = unaff_r28;
  puVar9[0x22] = unaff_r31;
  puVar9[0x1d] = unaff_r26;
  puVar9[0x1c] = unaff_r25;
  puVar9[0x20] = unaff_r29;
  dVar33 = 300.5;
  puVar9[0x21] = unaff_r30;
  puVar9[0x19] = (longlong)(int)(animationSpeed * 300.5);
  dVar20 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0xcc));
  dVar21 = (double)fastfunc::FastIntToDouble(param_6);
  dVar24 = 2.0;
  dVar32 = (double)(float)((double)(float)(dVar21 * 3.1415927410125732) / dVar20);
  fVar34 = mobyutil::MB_WrapRot((float)(dVar32 * 2.0));
  dVar31 = 1.570796251296997;
  dVar30 = 3.141592502593994;
  fVar34 = fVar34 + 1.5707963;
  dVar29 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar27 = 0.008333025500178337;
  dVar21 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  fVar1 = 3.1415925 - fVar34;
  if (fVar34 - (3.1415925 - fVar34) < 0.0) {
    fVar1 = fVar34;
  }
  fVar2 = -3.1415925 - fVar34;
  if ((-3.1415925 - fVar34) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  fVar4 = fVar2 * fVar2;
  fVar34 = fVar4 * fVar4 * fVar2;
  fVar1 = fVar4 * fVar34;
  dVar32 = (double)fastfunc::FastWrapRot
                             ((float)dVar32,
                              (1.0 - (fVar4 * fVar1 * 2.601887e-06 +
                                     fVar1 * -0.0001980741 +
                                     fVar34 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2)) *
                              0.3926991);
  uVar22 = fastfunc::FastWrapRot((float)(dVar32 * 0.800000011920929),0.6283185);
  dVar32 = (double)fastfunc::FastDiffRots(uVar22,0x3ff921fb60000000);
  dVar32 = (double)fastfunc::FastWrapRot((float)param_1,(float)dVar32);
  puVar9[0x19] = (longlong)(int)((double)animationSpeed * dVar33);
  dVar23 = (double)fastfunc::FastIntToDouble(*(undefined4 *)((int)puVar9 + 0xcc));
  puVar9[0x19] = (longlong)(int)((double)animationSpeed * dVar33);
  dVar33 = (double)fastfunc::FastIntToDouble(*(int *)((int)puVar9 + 0xcc) - (int)param_6);
  dVar25 = (double)(float)(dVar32 + dVar31);
  dVar31 = (double)(float)(dVar30 - dVar32);
  if (dVar32 - (double)(float)(dVar30 - dVar32) < 0.0) {
    dVar31 = dVar32;
  }
  dVar26 = (double)(float)(dVar30 - dVar25);
  if (dVar25 - (double)(float)(dVar30 - dVar25) < 0.0) {
    dVar26 = dVar25;
  }
  dVar30 = (double)(float)(dVar29 - dVar32);
  if ((double)(float)(dVar29 - dVar32) - dVar31 < 0.0) {
    dVar30 = dVar31;
  }
  dVar31 = (double)(float)(dVar29 - dVar25);
  if ((double)(float)(dVar29 - dVar25) - dVar26 < 0.0) {
    dVar31 = dVar26;
  }
  dVar29 = (double)(float)(dVar30 * dVar30);
  dVar32 = (double)(float)(dVar31 * dVar31);
  dVar25 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
  fVar34 = (float)((double)(float)((double)(float)(dVar33 * 3.0) / dVar23) + dVar24);
  dVar24 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar31));
  dVar33 = (double)(float)(dVar29 * dVar25);
  dVar23 = (double)(float)(dVar32 * dVar24);
  fVar2 = fVar34 * (float)((double)(float)(dVar29 * dVar33) * dVar20 +
                          (double)(float)(dVar33 * dVar21 +
                                         (double)(float)(dVar25 * dVar27 +
                                                        (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30))));
  fVar34 = fVar34 * (float)((double)(float)(dVar32 * dVar23) * dVar20 +
                           (double)(float)(dVar23 * dVar21 +
                                          (double)(float)(dVar24 * dVar27 +
                                                         (double)(float)((double)(float)(dVar32 * 
                                                  dVar31) * dVar28 + dVar31))));
  param_2[1] = fVar2;
  fVar1 = 0.0;
  fVar2 = fVar2 + param_5[1];
  *param_2 = fVar34;
  fVar34 = fVar34 + *param_5;
  param_2[1] = fVar2;
  fVar2 = param_4[1] - fVar2;
  *param_2 = fVar34;
  fVar34 = *param_4 - fVar34;
  fVar6 = ABS(fVar2);
  fVar4 = ABS(fVar34);
  *(float *)((int)puVar9 + 0x7c) = fVar34;
  *(float *)(puVar9 + 0x10) = fVar2;
  param_2[2] = 0.0;
  fVar34 = param_5[2];
  *(float *)((int)puVar9 + 0x84) = fVar4 - fVar6;
  uVar7 = *(uint *)((int)puVar9 + 0x7c);
  fVar2 = *(float *)((int)puVar9 + 0x7c);
  uVar8 = *(uint *)(puVar9 + 0x10);
  param_2[2] = fVar34 + 3.0;
  uVar16 = (ulonglong)(uVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  fVar34 = ABS(fVar2);
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    fVar34 = fVar6;
  }
  fVar6 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar4;
  }
  fVar4 = fVar1;
  if (0.0 < fVar34) {
    lVar13 = uVar12 - 0x160;
    lVar15 = uVar12 - 200;
    lVar17 = uVar12 - 0xb8;
    lVar19 = 2;
    fVar34 = (fVar3 - fVar34) / (fVar3 + fVar34);
    fVar4 = fVar34 * fVar34;
    *(float *)((int)puVar9 + 0xb4) = fVar34;
    *(float *)((int)puVar9 + 0xac) = fVar34;
    *(float *)(puVar9 + 0x16) = fVar34;
    *(float *)(puVar9 + 0x15) = fVar34;
    fVar34 = fVar4 * fVar4;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar34;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar34 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar34 * fVar34;
      iVar10 = (int)lVar15;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar34 * fVar34;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 200;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar34 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar34;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    fVar34 = fVar1;
    do {
      iVar10 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar34 = fVar34 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
               + *(float *)(iVar11 + 0xc);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fVar4 = (fVar34 + 0.7853982) * fVar6 + fVar2;
  }
  fVar34 = param_2[1];
  fVar2 = param_4[1];
  fVar6 = *param_2;
  fVar3 = *param_4;
  param_3[2] = fVar4;
  fVar4 = param_4[2];
  fVar5 = param_2[2];
  fVar34 = SQRT((fVar6 - fVar3) * (fVar6 - fVar3) + (fVar34 - fVar2) * (fVar34 - fVar2));
  *(float *)((int)puVar9 + 0x74) = fVar4 - fVar5;
  fVar4 = ABS(fVar4 - fVar5);
  fVar2 = ABS(fVar34);
  *(float *)(puVar9 + 0xe) = fVar34;
  *(float *)(puVar9 + 0xf) = fVar2 - fVar4;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar34 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar34 = fVar4;
  }
  fVar4 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar6 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar6 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (0.0 < fVar34) {
    lVar13 = uVar12 - 0x160;
    lVar17 = uVar12 - 0xd8;
    lVar15 = uVar12 - 0xe8;
    lVar19 = 2;
    fVar34 = (fVar6 - fVar34) / (fVar6 + fVar34);
    fVar6 = fVar34 * fVar34;
    *(float *)((int)puVar9 + 0x94) = fVar34;
    *(float *)((int)puVar9 + 0x8c) = fVar34;
    *(float *)(puVar9 + 0x12) = fVar34;
    *(float *)(puVar9 + 0x11) = fVar34;
    fVar34 = fVar6 * fVar6;
    *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar6;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar34;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar34 * fVar6;
    do {
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar34 * fVar34;
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar34 * fVar34;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0xe8;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar34 = *pfVar18;
      fVar6 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar34;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar2;
  }
  *param_3 = 0;
  param_3[1] = -fVar1;
  return;
}



//==== 003c6c48  ns=mobyupdate_unsorted  size=0x438
// sig: undefined UpdateMoby_575(MobyInstance * moby)
// callers(0): 
// callees(13): 00047b98 camera::camera5::Camera_SetMobyDrivenTargetPos; 00047c08 camera::camera5::Camera_SetMobyDrivenTargetRot; 00047f74 camera::SetCameraPosition; 000481d0 camera::camera5::Camera_DeactivateMobyDrivenCam; 00059e20 collproc::CollSphere; 00085300 hero::Hero_TransAnim; 000b72b0 hero::TransitionMovement; 000f1114 mobyfunc::GetBonePosition; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 003c65c8 mobyupdate_helpers::M575_003c65c8; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot

/* Moby 575 */

void mobyupdate_unsorted::UpdateMoby_575(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float afStack_60 [4];
  longlong local_50;
  
  lVar6 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    uVar8 = ZEXT48(pvVar2);
    if (pvVar2 != (void *)0x0) {
      uVar1 = moby->state;
      if (uVar1 != '\x04') {
        if (uVar1 == '\x03') {
          if ((DAT_0096a778 & 2) != 0) {
            camera::camera5::Camera_DeactivateMobyDrivenCam(0);
            hero::TransitionMovement(0,1);
            draw::LetterBoxOn = 0;
            moby->state = '\x04';
          }
        }
        else if (uVar1 == '\x02') {
          if (*(int *)((int)pvVar2 + 0x14) == 0) {
            mobyupdate_helpers::M575_003c65c8
                      ((double)(moby->rotation).z,&local_70,afStack_60,lVar6 + 0x10,lVar6 + 0x10,
                       *(undefined4 *)((int)pvVar2 + 0x10));
            iVar7 = collproc::CollSphere(0x3fd32fec60000000,&local_70,&DAT_003c6c30,0,0);
            if (iVar7 != 0) {
              local_70 = CollOutput.push.x;
              local_6c = CollOutput.push.y;
              local_68 = CollOutput.push.z;
              local_64 = CollOutput.push.w;
              *(undefined4 *)((int)pvVar2 + 0x14) = 1;
            }
            camera::camera5::Camera_SetMobyDrivenTargetPos(&local_70);
            camera::camera5::Camera_SetMobyDrivenTargetRot(afStack_60);
          }
          iVar7 = fastfunc::FastDecTimerS32(uVar8 + 0x10);
          if (iVar7 == 0) {
            if ((DAT_0096a778 & 2) != 0) {
              hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x47,0);
            }
          }
          else {
            hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x48,0);
            moby->state = '\x03';
          }
        }
        else if (uVar1 == '\x01') {
          bVar4 = false;
          if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1a)) {
            *(undefined1 *)((int)pvVar2 + 7) = 0xff;
            *(undefined1 *)((int)pvVar2 + 8) = 0;
          }
          else {
            *(undefined1 *)((int)pvVar2 + 7) = 0;
            bVar4 = true;
            *(undefined1 *)((int)pvVar2 + 8) = 0xff;
          }
          mobyfunc::GetBonePosition(lVar6,0,&local_a0);
          if (SQRT((g_heroPosition.x - local_a0) * (g_heroPosition.x - local_a0) +
                   (g_heroPosition.y - local_9c) * (g_heroPosition.y - local_9c)) < 0.4) {
            mobyutil::MB_UpdateLightsTransition(lVar6,uVar8);
            if ((bVar4) && (g_currentWeaponMoby->setByGroup != '\0')) {
              auVar10 = ZEXT416(0xffffffff);
              auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
              auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
              auVar10 = loadVectorLeftIndexed(4,0x3c6c30);
              auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
              auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar10 = vectorMultiplyAddFloatingPoint
                                  (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 |
                                           auVar10 << 0x60,auVar11);
              fVar5 = animationSpeed * 300.5;
              local_50 = (longlong)(int)fVar5;
              auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
              auVar10 = auVar10 >> 0x60 & (undefined1  [16])0xffffffff;
              uVar3 = storeVectorElementWordIndexed
                                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x10,
                                 uVar8);
              *(undefined4 *)((int)pvVar2 + 0x10U & 0xfffffffc) = uVar3;
              mobyupdate_helpers::M575_003c65c8
                        ((double)(moby->rotation).z,auStack_90,auStack_80,lVar6 + 0x10,lVar6 + 0x10,
                         (int)fVar5);
              hero::TransitionMovement(0x1f,0);
              hero::Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x46,0);
              g_heroPosition.x = local_a0;
              g_heroPosition.y = local_9c;
              g_heroPosition.z = local_98;
              g_heroPosition.w = local_94;
              g_heroRotation.x = (moby->rotation).x;
              g_heroRotation.y = (moby->rotation).y;
              g_heroRotation.z = (moby->rotation).z;
              g_heroRotation.w = (moby->rotation).w;
              dVar9 = (double)fastfunc::FastWrapRot(g_heroRotation.z,3.1415927);
              g_heroRotation.z = (float)dVar9;
              camera::SetCameraPosition(auStack_90,auStack_80,0,0,0);
              draw::LetterBoxOn = 1;
              moby->state = '\x02';
            }
          }
        }
        else if (uVar1 == '\0') {
          *(undefined1 *)((int)pvVar2 + 7) = 0xff;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar2 + 0x14) = 0;
        }
      }
      mobyutil::MB_ColorDyingMoby(lVar6,uVar8);
    }
  }
  return;
}



//==== 003c7080  ns=mobyupdate_helpers  size=0x14
// sig: undefined M576_003c7080(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M576_003c7080(void)

{
  DAT_008460a8 = 0x10000;
  return;
}



//==== 003c70d8  ns=mobyupdate_helpers  size=0x400
// sig: undefined M576_003c70d8(void)
// callers(1): 003c77f8 mobyupdate_unsorted::UpdateMoby_576
// callees(5): 001009b0 mobyutil::MB_MoveAndCollide; 00109c30 mobyutil::OrganicDelt; 0010a2e0 mobyutil::OrganicDeltAng; 001145d8 mobyutil::MB_PushOutOfSplineWalls; 00502578 fastfunc::FastWrapRot

double mobyupdate_helpers::M576_003c70d8(int param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *unused;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f29;
  double dVar23;
  ulonglong in_f30;
  double dVar24;
  ulonglong in_f31;
  double dVar25;
  float fStack00000040;
  float fStack00000044;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0x100;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar14;
  puVar7[0x22] = in_LR;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  fVar2 = *(float *)(param_1 + 0x10);
  puVar7[0x1c] = unaff_r31;
  fStack00000044 = (float)param_3;
  dVar24 = (double)fStack00000044;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  dVar23 = (double)fStack00000040;
  fVar1 = (float)(dVar24 - (double)*(float *)(param_1 + 0x14));
  fVar2 = (float)(dVar23 - (double)fVar2);
  unused = &mobyutil::g_atanQuadrantTable;
  fVar3 = ABS(fVar1);
  fVar5 = ABS(fVar2);
  *(float *)(puVar7 + 0x11) = fVar1;
  puVar7[0x1b] = unaff_r30;
  *(float *)((int)puVar7 + 0x84) = fVar2;
  iVar6 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar7 + 0x8c) = fVar5 - fVar3;
  dVar25 = 0.0;
  fVar1 = *(float *)(iVar6 + 0x1ec);
  uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1d) & 4;
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = ABS(*(float *)((int)puVar7 + 0x84));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar10 = ABS(*(float *)(puVar7 + 0x11));
  if (*(float *)((int)puVar7 + 0x8c) - 0.0 < 0.0) {
    fVar10 = fVar5;
  }
  puVar7[0x1a] = unaff_r29;
  puVar7[0x19] = unaff_r28;
  puVar7[0x18] = unaff_r27;
  puVar7[0x17] = unaff_r26;
  dVar22 = dVar25;
  if (0.0 < fVar4) {
    lVar19 = uVar14 - 0xf0;
    lVar17 = uVar14 - 0x70;
    lVar16 = uVar14 - 0x60;
    lVar21 = 2;
    fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
    fVar5 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    *(float *)((int)puVar7 + 0x94) = fVar4;
    *(float *)(puVar7 + 0x13) = fVar4;
    *(float *)(puVar7 + 0x12) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar5;
    *(float *)(puVar7 + 0x13) = *(float *)(puVar7 + 0x13) * fVar4;
    *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar19 + 0x90) = *(float *)((int)lVar19 + 0x80) * fVar4 * fVar4;
      iVar8 = (int)lVar17;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar19 = uVar14 - 0x70;
    pfVar20 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar19;
    lVar17 = lVar15;
    do {
      fVar4 = *pfVar20;
      fVar5 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x90) * fVar4;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar8 = (int)lVar15;
      iVar9 = (int)lVar19;
      lVar15 = lVar15 + 0x10;
      lVar19 = lVar19 + 0x10;
      unused = (undefined *)lVar19;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0x90)) + *(float *)(iVar9 + 4) +
                        *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar2 + fVar3);
  }
  _fStack00000040 = param_3;
  dVar22 = (double)fastfunc::FastWrapRot((float)dVar22,fVar1);
  mobyutil::OrganicDeltAng
            ((float)dVar22,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
             mobyutil::g_FrameTime * 6.2831855,(float *)(param_1 + 0x48),(int)unused,
             (float *)(iVar6 + 0x1e8));
  fVar1 = (float)((double)*(float *)(param_1 + 0x14) - dVar24);
  fVar2 = (float)((double)*(float *)(param_1 + 0x10) - dVar23);
  *(undefined4 *)(puVar7 + 0x10) = 0;
  fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  dVar23 = (double)fVar1;
  mobyutil::OrganicDelt
            (fVar1,DAT_0071f418 * 6.0,DAT_0071f418 * 6.0,mobyutil::g_FrameTime * 5.0,
             (float *)(puVar7 + 0x10),(int)unused,(float *)(iVar6 + 0x1f0));
  fVar3 = mobyutil::g_FrameTime;
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar10 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar10 = fVar4;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar1 = fVar5;
  }
  fVar2 = fVar10 * fVar10;
  fVar4 = fVar1 * fVar1;
  fVar12 = fVar2 * fVar2 * fVar10;
  fVar5 = fVar4 * fVar4 * fVar1;
  fVar13 = fVar2 * fVar12;
  fVar11 = fVar4 * fVar5;
  *(float *)(puVar7 + 0xe) =
       (fVar4 * fVar11 * 2.601887e-06 +
       fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) *
       *(float *)(iVar6 + 0x1f0);
  fVar1 = *(float *)(iVar6 + 0x1f0);
  *(undefined4 *)(puVar7 + 0xf) = 0;
  fVar4 = DAT_008460d8;
  *(float *)((int)puVar7 + 0x74) =
       (fVar2 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar2 * fVar10 * -0.16666657 + fVar10) *
       fVar1;
  *(float *)(puVar7 + 0xf) = fVar3 * -2.0;
  mobyutil::MB_MoveAndCollide
            ((double)(fVar4 * 0.161),(double)(fVar4 * 0.179),dVar25,param_1,uVar14 - 0x90);
  mobyutil::MB_PushOutOfSplineWalls(0x3fe0000000000000,*(undefined4 *)(iVar6 + 0x1e0));
  return dVar23;
}



//==== 003c74e8  ns=mobyupdate_helpers  size=0x2d0
// sig: undefined M576_003c74e8(void)
// callers(1): 003c77f8 mobyupdate_unsorted::UpdateMoby_576
// callees(6): 000fddc0 mobyutil::MB_SetAnimation; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea

void mobyupdate_helpers::M576_003c74e8(MobyInstance *param_1)

{
  bool bVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  float fVar5;
  u8 uVar8;
  undefined4 uVar6;
  int *piVar7;
  ulonglong uVar9;
  double dVar10;
  int local_40;
  float local_3c;
  longlong local_38;
  
  uVar8 = param_1->state;
  pvVar2 = param_1->pVar;
  uVar9 = ZEXT48(pvVar2);
  if (uVar8 != '\a' && uVar8 != '\0') {
    fVar3 = (param_1->pos).z;
    uVar4 = (int)fVar3 >> 0x1f;
    if (((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < 0x42c80000) && (uVar8 != '\x06')) {
      uVar8 = '\x05';
      param_1->state = '\x05';
    }
    bVar1 = g_heroState == MOVEMENT_LOCKED;
    param_1->scale = param_1->pClass->gScale * DAT_008460d8;
    if (((bVar1) || (g_gameMode == GAME_MODE_SCENE)) && (uVar8 != '\x06')) {
      param_1->state = '\a';
      if (param_1->animationId != '\0') {
        local_38 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
      }
      param_1->enabled = '\0';
      param_1->collision = (ushort *)0x0;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
    }
    else {
      dVar10 = 0.0;
      local_3c = 0.0;
      uVar6 = mobyutil::MB_damage(param_1,0x330000,0);
      mobyutil::MB_HandleDamage(param_1,uVar6,uVar9 + 0x20,0,&local_40,&local_3c,0,4);
      if (((local_40 != 1) && (param_1->state != '\x05')) && (local_3c != 0.0)) {
        fVar5 = *(float *)((int)pvVar2 + 0x20) - local_3c;
        *(float *)((int)pvVar2 + 0x20) = fVar5;
        if (dVar10 < (double)fVar5) {
          mobyutil::MB_UpdateLightsTransition(param_1,uVar9 + 0x60);
        }
        else {
          param_1->state = '\x05';
        }
      }
      param_1->damage = -1;
      mobyutil::MB_ColorDyingMoby(param_1,uVar9 + 0x60);
      mobyutil::MB_getTargetInArea
                (0x4080000000000000,param_1,uVar9 + 0x180,&DAT_003c74d8,0,0,
                 Splines[*(int *)((int)pvVar2 + 0x1e0)]->points,
                 Splines[*(int *)((int)pvVar2 + 0x1e0)]->cnt);
      if (*(int *)((int)pvVar2 + 0x1c4) == 2) {
        if (hero::g_heroStateType == 0xf) {
          piVar7 = DAT_0096a240 + *DAT_0096a240 * 4;
          *(int *)((int)pvVar2 + 0x180) = *piVar7;
          *(int *)((int)pvVar2 + 0x184) = piVar7[1];
          *(int *)((int)pvVar2 + 0x188) = piVar7[2];
          *(int *)((int)pvVar2 + 0x18c) = piVar7[3];
        }
        else {
          *(float *)((int)pvVar2 + 0x180) = g_heroPosition.x;
          *(float *)((int)pvVar2 + 0x184) = g_heroPosition.y;
          *(float *)((int)pvVar2 + 0x188) = g_heroPosition.z;
          *(float *)((int)pvVar2 + 0x18c) = g_heroPosition.w;
        }
      }
      if (*(int *)((int)pvVar2 + 0x1c0) == 0) {
        *(MobyInstance **)((int)pvVar2 + 0x1c0) = g_heroMobyPtr;
      }
    }
  }
  return;
}



//==== 003c77f8  ns=mobyupdate_unsorted  size=0x970
// sig: undefined UpdateMoby_576(MobyInstance * moby)
// callers(0): 
// callees(13): 0006d720 RegisterFuncForMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fddc0 mobyutil::MB_SetAnimation; 000ffb70 mobyutil::GetGroundZ; 001059f0 mobyutil::DamageSphereAtBone; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010e030 mobyutil::MB_genericExplosion; 003c70d8 mobyupdate_helpers::M576_003c70d8; 003c74e8 mobyupdate_helpers::M576_003c74e8; 0048c188 FUN_0048c188; 00500b64 fastfunc::FastEulerToMtx

/* Moby 576 */

void mobyupdate_unsorted::UpdateMoby_576(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  undefined4 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar22;
  MobyModeBit MVar23;
  f32 *val;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x140;
  puVar15 = (ulonglong *)lVar21;
  *puVar15 = uVar18;
  puVar15[0x2a] = in_LR;
  puVar15[0x27] = unaff_r31;
  puVar15[0x26] = unaff_r30;
  puVar15[0x25] = unaff_r29;
  pvVar13 = moby->pVar;
  mobyupdate_helpers::M576_003c74e8();
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    iVar22 = FUN_0048c188(lVar19,(int)pvVar13 + 0x70);
    if (iVar22 != 0) {
      moby->state = '\x02';
      *(undefined2 *)((int)pvVar13 + 0x138) = 0;
    }
  }
  else if (uVar1 == '\x05') {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x1a) = (moby->pos).x;
    fVar4 = (moby->pos).w;
    *(f32 *)((int)puVar15 + 0xd4) = fVar2;
    *(f32 *)((int)puVar15 + 0xdc) = fVar4;
    fVar5 = (moby->pos).z;
    puVar15[0x12] = 4;
    puVar15[0x14] = 0;
    puVar15[0x15] = 1;
    puVar15[0x16] = 0xffffffffffffffff;
    puVar15[0x17] = 0;
    *(float *)(puVar15 + 0x1b) = fVar5 + 0.5;
    mobyutil::MB_genericExplosion
              (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000,0,
               lVar19,(int)pvVar13 + 0x40,uVar18 - 0x70,&DAT_003c77b8,4,5,2,4);
    moby->state = '\a';
    if (moby->animationId != '\0') {
      puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
    }
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  else if (uVar1 == '\x04') {
    fVar5 = *(float *)((int)pvVar13 + 0x180) - (moby->pos).x;
    fVar6 = *(float *)((int)pvVar13 + 0x184) - (moby->pos).y;
    val = &(moby->rotation).z;
    fVar7 = ABS(fVar5);
    fVar8 = ABS(fVar6);
    *(float *)(puVar15 + 0x1c) = fVar5;
    *(float *)((int)puVar15 + 0xe4) = fVar6;
    *(float *)(puVar15 + 0x1d) = fVar7 - fVar8;
    fVar5 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar15 + 0x1c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x1d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xe4) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar15 + 0x1c));
    if (*(float *)(puVar15 + 0x1d) - 0.0 < 0.0) {
      fVar6 = fVar8;
    }
    fVar9 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar15 + 0xe4));
    if (*(float *)(puVar15 + 0x1d) - 0.0 < 0.0) {
      fVar10 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar26 = uVar18 - 0x130;
      lVar24 = uVar18 - 0x44;
      lVar25 = uVar18 - 0x54;
      lVar28 = 2;
      fVar6 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x1f) = fVar6;
      *(float *)(puVar15 + 0x1e) = fVar6;
      *(float *)((int)puVar15 + 0xf4) = fVar6;
      *(float *)((int)puVar15 + 0xec) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar7;
      *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar6;
      *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar26 + 0xec) = *(float *)((int)lVar26 + 0xdc) * fVar6 * fVar6;
        iVar22 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar22 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar26 = uVar18 - 0x54;
      lVar28 = 4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar24 = lVar26;
      lVar25 = lVar21;
      do {
        fVar6 = *pfVar27;
        fVar7 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0xec) = *(float *)((int)lVar25 + 0xec) * fVar6;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar24 = 2;
      do {
        iVar22 = (int)lVar21;
        iVar16 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar22 + 0xec) + *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8)
                + *(float *)(iVar16 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar8;
    }
    mobyutil::OrganicDeltAng
              (fVar5,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
               mobyutil::g_FrameTime * 6.2831855,val,(int)val,(float *)((int)pvVar13 + 0x1e8));
    dVar29 = (double)mobyfunc::BlendAnimFrame(moby);
    if (((moby->animationBlend == 0.0) && (20.0 <= dVar29)) && (dVar29 <= 25.0)) {
      puVar15[0xe] = 0;
      mobyutil::DamageSphereAtBone
                (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar19,0,0,1);
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (*(int *)((int)pvVar13 + 0x1c4) == 2) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
        }
      }
      else {
        fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184);
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180);
        if ((2.5 < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) &&
           (moby->state = '\x03', moby->animationId != '\x01')) {
          puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar15 + 0x114));
        }
      }
    }
  }
  else if (uVar1 == '\x03') {
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x188);
    *(undefined4 *)(puVar15 + 8) = *(undefined4 *)((int)pvVar13 + 0x180);
    *(undefined4 *)(puVar15 + 9) = uVar3;
    uVar3 = *(undefined4 *)((int)pvVar13 + 0x18c);
    *(undefined4 *)((int)puVar15 + 0x44) = *(undefined4 *)((int)pvVar13 + 0x184);
    *(undefined4 *)((int)puVar15 + 0x4c) = uVar3;
    dVar29 = (double)mobyupdate_helpers::M576_003c70d8(lVar19,3,puVar15[8],puVar15[9]);
    if ((*(int *)((int)pvVar13 + 0x1c4) != 2) || (5.0 <= dVar29)) {
      if ((dVar29 < 1.5) &&
         (moby->state = '\x04', fVar5 = animationSpeed, moby->animationId != '\x02')) {
        puVar15[0x22] = (longlong)(int)DAT_010c9f5c;
        puVar15[0x22] = (longlong)(int)(fVar5 * 5.5);
        mobyutil::MB_SetAnimation
                  (lVar19,2,*(undefined4 *)((int)puVar15 + 0x114),
                   *(undefined4 *)((int)puVar15 + 0x114));
      }
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
      }
    }
  }
  else if (uVar1 == '\x02') {
    if (((*(int *)((int)pvVar13 + 0x1c4) != 2) ||
        (fVar5 = (moby->pos).y - *(float *)((int)pvVar13 + 0x184),
        fVar6 = (moby->pos).x - *(float *)((int)pvVar13 + 0x180),
        10.0 < SQRT(fVar6 * fVar6 + fVar5 * fVar5))) &&
       (moby->state = '\x03', moby->animationId != '\x01')) {
      puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar15 + 0x114));
    }
  }
  else if (uVar1 == '\x01') {
    *(float *)((int)pvVar13 + 0x1d8) = -(DAT_0071f418 * 10.0 - *(float *)((int)pvVar13 + 0x1d8));
    fVar7 = (moby->pos).x + *(float *)((int)pvVar13 + 0x1d0);
    fVar5 = (moby->pos).z;
    fVar2 = (moby->pos).w;
    (moby->pos).x = fVar7;
    fVar8 = (moby->pos).y + *(float *)((int)pvVar13 + 0x1d4);
    (moby->pos).y = fVar8;
    fVar6 = *(float *)((int)pvVar13 + 0x1d8);
    *(float *)(puVar15 + 0x18) = fVar7;
    fVar5 = fVar5 + fVar6;
    *(float *)((int)puVar15 + 0xc4) = fVar8;
    *(f32 *)((int)puVar15 + 0xcc) = fVar2;
    (moby->pos).z = fVar5;
    *(float *)(puVar15 + 0x19) = fVar5 + 1.0;
    dVar29 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,uVar18 - 0x80,0);
    fVar2 = (moby->pos).z;
    uVar14 = (int)fVar2 >> 0x1f;
    if (dVar29 <= (double)(moby->pos).z) {
      if ((int)((uVar14 >> 1 ^ (uint)fVar2) - uVar14) < 0x41200000) {
        moby->state = '\x05';
      }
    }
    else {
      uVar1 = moby->animationId;
      (moby->pos).z = (float)dVar29;
      moby->state = '\x02';
      if (uVar1 != '\0') {
        puVar15[0x22] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar15 + 0x114));
      }
    }
  }
  else if (uVar1 == '\0') {
    moby->state = '\a';
    iVar22 = mobyutil::MB_randInt(2);
    if (iVar22 == 0) {
      MVar23 = moby->modeBits &
               (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    }
    else {
      MVar23 = moby->modeBits | MIRROR;
    }
    moby->modeBits = MVar23 | LOCK_ROTATION;
    *(undefined4 *)((int)pvVar13 + 0x20) = 0x3f800000;
    *(undefined2 *)((int)pvVar13 + 0x24) = 1;
    *(undefined1 *)((int)pvVar13 + 0x58) = 8;
    *(undefined1 *)((int)pvVar13 + 0x5c) = 1;
    *(undefined4 *)((int)pvVar13 + 0x30) = 0x3f000000;
    *(undefined ***)((int)pvVar13 + 0x140) = &PTR_DAT_008460cc;
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    moby->enabled = '\0';
    moby->collision = (ushort *)0x0;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
          LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED) | DISABLED;
  }
  fastfunc::FastEulerToMtx(lVar19 + 0xc0,lVar19 + 0x40);
  if (*(int *)((int)pvVar13 + 500) != 0) {
    mobyutil::Delt(0.0,mobyutil::g_FrameTime * 4.0,(float *)((int)pvVar13 + 500));
    fVar17 = *(float *)((int)pvVar13 + 500) + 1.0;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar7 = (moby->transform).v0.x;
    fVar8 = (moby->transform).v0.y;
    fVar9 = (moby->transform).v0.z;
    fVar10 = (moby->transform).v1.x;
    fVar11 = (moby->transform).v1.y;
    fVar12 = (moby->transform).v1.z;
    (moby->transform).v2.x = (moby->transform).v2.x * fVar17;
    (moby->transform).v2.y = fVar5 * fVar17;
    (moby->transform).v2.z = fVar6 * fVar17;
    fVar5 = 1.0 - *(float *)((int)pvVar13 + 500);
    (moby->transform).v0.x = fVar7 * fVar5;
    (moby->transform).v0.y = fVar8 * fVar5;
    (moby->transform).v0.z = fVar9 * fVar5;
    (moby->transform).v1.x = fVar10 * fVar5;
    (moby->transform).v1.y = fVar11 * fVar5;
    (moby->transform).v1.z = fVar12 * fVar5;
    RegisterFuncForMoby(&PTR_M577_003c83e0_0070d540,moby);
  }
  return;
}



//==== 003c8180  ns=mobyupdate_helpers  size=0x1d4
// sig: undefined M577_003c8180(void)
// callers(0): 
// callees(2): 000fe4f0 mobyutil::MB_randRangeSigned; 00108180 mobyutil::MB_computeLobVelocity

undefined8
mobyupdate_helpers::M577_003c8180(double param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  MobyModeBit MVar2;
  ushort uVar3;
  void *pvVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  MobyInstance *pMVar10;
  ushort *puVar11;
  double dVar12;
  
  pMVar10 = MobyInstance;
  puVar11 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_2 << 2));
  if (puVar11 != (ushort *)0x0) {
    do {
      uVar6 = *puVar11 & 0x7fff;
      if ((MobyInstance[uVar6].oClass == 0x240) && (MobyInstance[uVar6].state == '\a')) {
        MVar2 = MobyInstance[uVar6].modeBits;
        pMVar9 = MobyInstance + uVar6;
        MobyInstance[uVar6].enabled = '\x01';
        pvVar4 = pMVar10[uVar6].pVar;
        pMVar10[uVar6].collision = pMVar9->pClass->collision;
        pMVar10[uVar6].modeBits =
             MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                      DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                      HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
             CAN_BE_AUTO_TARGETED;
        pMVar10[uVar6].pos.x = *param_3;
        pMVar10[uVar6].pos.y = param_3[1];
        pMVar10[uVar6].pos.z = param_3[2];
        fVar1 = param_3[3];
        pMVar10[uVar6].state = '\x01';
        pMVar10[uVar6].pos.w = fVar1;
        *(undefined4 *)((int)pvVar4 + 500) = 0x3f800000;
        fVar1 = *param_4 - *param_3;
        *(float *)((int)pvVar4 + 0x1d0) = fVar1;
        fVar5 = param_4[1] - param_3[1];
        *(float *)((int)pvVar4 + 0x1d4) = fVar5;
        dVar12 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5);
        *(float *)((int)pvVar4 + 0x1d8) = param_4[2] - param_3[2];
        *(float *)((int)pvVar4 + 0x1dc) = param_4[3];
        *(undefined4 *)((int)pvVar4 + 0x1d8) = 0;
        fVar1 = fVar1 * (float)(param_1 / dVar12);
        fVar5 = fVar5 * (float)(param_1 / dVar12);
        fVar7 = 0.0;
        if (0.0 - dVar12 < 0.0) {
          fVar7 = fVar1;
        }
        fVar8 = 0.0;
        if (0.0 - dVar12 < 0.0) {
          fVar8 = fVar5;
        }
        if (dVar12 - 0.0 < 0.0) {
          fVar7 = fVar1;
        }
        if (dVar12 - 0.0 < 0.0) {
          fVar8 = fVar5;
        }
        *(float *)((int)pvVar4 + 0x1d0) = fVar7;
        *(float *)((int)pvVar4 + 0x1d4) = fVar8;
        dVar12 = (double)mobyutil::MB_computeLobVelocity
                                   (param_1,(double)(DAT_0071f418 * -10.0),param_3,param_4,param_4,0
                                    ,0);
        *(float *)((int)pvVar4 + 0x1d8) = (float)dVar12;
        dVar12 = (double)mobyutil::MB_randRangeSigned(0x402e000000000000,0x4046800000000000);
        *(float *)((int)pvVar4 + 0x1ec) = (float)(dVar12 * 0.01745329238474369);
        return 1;
      }
      uVar3 = *puVar11;
      puVar11 = puVar11 + 1;
    } while (-1 < (short)uVar3);
  }
  return 0;
}



//==== 003c8354  ns=mobyupdate_helpers  size=0x7c
// sig: undefined M577_003c8354(void)
// callers(0): 
// callees(0): 

short mobyupdate_helpers::M577_003c8354(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  puVar2 = *(ushort **)((int)&mobyutil::g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 == (ushort *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = 0;
    do {
      if ((MobyInstance[*puVar2 & 0x7fff].oClass == 0x240) &&
         (MobyInstance[*puVar2 & 0x7fff].state != '\a')) {
        sVar3 = sVar3 + 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return sVar3;
}



//==== 003c83e0  ns=mobyupdate_helpers  size=0x328
// sig: undefined M577_003c83e0(void)
// callers(0): 
// callees(6): 000685c4 draw::GetEffectTex; 00072280 draw::FastDrawQuad; 005027bc fastfunc::FastLerpColor; 00502ea8 idol_draw::PackCmd; 00502f08 FUN_00502f08; 00502fd4 stub::STUB_00502fd4_RET_0

void mobyupdate_helpers::M577_003c83e0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x160;
  puVar6 = (ulonglong *)lVar22;
  *puVar6 = uVar16;
  puVar6[0x2e] = in_LR;
  puVar6[0x2a] = in_f30;
  puVar6[0x2b] = in_f31;
  puVar6[0x29] = unaff_r31;
  fVar12 = DAT_008460f8;
  iVar5 = *(int *)(param_1 + 0x78);
  dVar30 = 1.0;
  fVar1 = *(float *)(iVar5 + 500);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar8 = GameCamera.posX - fVar2;
  fVar7 = fVar1 + 1.0 + DAT_008460f4;
  fVar9 = fVar7 * fVar8;
  fVar10 = fVar7 * (GameCamera.posY - fVar3);
  puVar6[0x28] = unaff_r30;
  fVar12 = (1.0 - fVar1) + fVar12;
  fVar11 = fVar7 * fVar9;
  fVar14 = -(fVar10 * fVar7);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar6 + 0x14) = fVar2;
  fVar2 = SQRT(fVar9 * fVar9 + --(fVar10 * fVar10));
  *(float *)((int)puVar6 + 0xa4) = fVar3;
  fVar15 = DAT_008460f0;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar6 + 0x15) = fVar1;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar19;
  fVar3 = SQRT(fVar14 * fVar14 + --(fVar11 * fVar11));
  fVar14 = fVar12 / fVar2;
  *(float *)(puVar6 + 0x15) = fVar1 - fVar15;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0x94) = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  *(float *)(puVar6 + 0x13) = fVar7;
  *(float *)(puVar6 + 0xe) = fVar8;
  *(undefined4 *)(puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  uVar19 = DAT_008460ec;
  fVar12 = fVar12 / fVar3;
  dVar29 = (double)(fVar9 * fVar14);
  dVar28 = -(double)(fVar10 * fVar14);
  dVar27 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)((int)puVar6 + 0x84) = (float)dVar27;
  dVar29 = -(double)(fVar11 * fVar12);
  dVar28 = -(double)(fVar10 * fVar7 * fVar12);
  *(float *)(puVar6 + 0x10) = (float)dVar26;
  dVar27 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)(puVar6 + 0xe) = (float)dVar27;
  *(float *)((int)puVar6 + 0x74) = (float)dVar26;
  uVar17 = draw::GetEffectTex(uVar19);
  puVar6[0x25] = uVar17;
  uVar17 = stub::STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010c9f60,DAT_008460dc,DAT_010c9f64,DAT_008460e0,0x80);
  puVar6[0x27] = uVar17;
  uVar19 = fastfunc::FastLerpColor((double)*(float *)(iVar5 + 500),DAT_008460e4,DAT_008460e8);
  lVar18 = uVar16 - 0xb0;
  uVar25 = 0;
  puVar21 = &DAT_008460fc;
  puVar20 = &DAT_00846100;
  lVar23 = lVar22;
  lVar24 = lVar22;
  do {
    uVar4 = *puVar20;
    *(undefined4 *)((int)lVar24 + 0x100) = *puVar21;
    *(undefined4 *)((int)lVar24 + 0x104) = uVar4;
    puVar13 = (undefined4 *)lVar18;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    dVar27 = dVar31;
    if ((uVar25 & 1) != 0) {
      dVar27 = dVar30;
    }
    iVar5 = (int)lVar23;
    *(float *)(iVar5 + 0xb8) = (float)dVar27;
    dVar27 = -1.0;
    if ((int)uVar25 < 2) {
      dVar27 = dVar30;
    }
    *(float *)(iVar5 + 0xb4) = (float)dVar27;
    uVar25 = uVar25 + 1;
    puVar21 = puVar21 + 2;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    *(undefined4 *)((int)lVar22 + 0xf0) = uVar19;
    puVar20 = puVar20 + 2;
    lVar18 = lVar18 + 0x10;
    lVar24 = lVar24 + 8;
    lVar23 = lVar23 + 0x10;
    lVar22 = lVar22 + 4;
  } while ((int)uVar25 < 4);
  draw::FastDrawQuad(uVar16 - 0xb0,uVar16 - 0xf0,0,EffectTexHeaders,9);
  return;
}



//==== 003c8708  ns=mobyupdate_helpers  size=0x58
// sig: undefined M577_003c8708(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M577_003c8708(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\x06') {
      param_1->state = '\x02';
    }
  }
  else {
    param_1->state = '\x06';
  }
  return;
}



//==== 003c8760  ns=mobyupdate_helpers  size=0x58
// sig: undefined M577_003c8760(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M577_003c8760(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x06') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 6;
  }
  return;
}



//==== 003c87b8  ns=mobyupdate_helpers  size=0x58
// sig: undefined M577_003c87b8(void)
// callers(0): 
// callees(1): 0048acb8 mobyupdate_helpers::M849_0048acb8

void mobyupdate_helpers::M577_003c87b8(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x06') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 6;
  }
  return;
}



//==== 003c8810  ns=mobyupdate_helpers  size=0x38
// sig: undefined M577_003c8810(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M577_003c8810(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 6;
  return;
}



//==== 003c8848  ns=mobyupdate_helpers  size=0x40
// sig: undefined M577_003c8848(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M577_003c8848(int param_1)

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



//==== 003c8890  ns=mobyupdate_helpers  size=0x94
// sig: undefined M577_003c8890(void)
// callers(0): 
// callees(1): 000fddc0 mobyutil::MB_SetAnimation

void mobyupdate_helpers::M577_003c8890(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 7;
  if (*(char *)(param_1 + 0x53) != '\0') {
    mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}



//==== 003c8924  ns=mobyupdate_helpers  size=0x14
// sig: undefined M577_003c8924(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M577_003c8924(void)

{
  DAT_00846168 = 0x10000;
  return;
}



//==== 003c8938  ns=mobyupdate_helpers  size=0x50
// sig: undefined M577_003c8938(void)
// callers(1): 003c8a10 mobyupdate_unsorted::UpdateMoby_577
// callees(0): 

longlong mobyupdate_helpers::M577_003c8938(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  param_2 = param_2 + -1;
  while( true ) {
    lVar2 = (longlong)param_2;
    if (param_2 < 0) {
      return lVar2;
    }
    iVar1 = (int)(lVar2 << 2);
    if (*(int *)(param_1 + iVar1) < worldUpdateTime) break;
    param_2 = param_2 + -1;
  }
  *(int *)(param_1 + iVar1) = param_3 + worldUpdateTime;
  return lVar2;
}



//==== 003c8a10  ns=mobyupdate_unsorted  size=0x2594
// sig: undefined UpdateMoby_577(MobyInstance * moby)
// callers(0): 
// callees(51): 00059e20 collproc::CollSphere; 00060780 collproc::CollHotspot; 000efb38 mobyfunc::DeleteMoby; 000efe40 mobyfunc::BlendAnimFrame; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00104298 mobyutil::MB_SetGroupField; 00105c08 mobyutil::CollDamageMobyDirect; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 00108180 mobyutil::MB_computeLobVelocity; 00109af0 mobyutil::Delt; 0010ad80 mobyutil::MB_StartKick; 0010b030 mobyutil::MB_UpdateKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110488 mobyutil::ClampVec3Magnitude; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0011a560 mobyutil::MB_SpawnDebrisMoby; 001385d0 path::Path_PickNextNode; 003c8938 mobyupdate_helpers::M577_003c8938; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005026a0 fastfunc::FastSubRots; 00502730 fastfunc::FastIntToDouble; 005c8318 rand

/* Moby 577 */

void mobyupdate_unsorted::UpdateMoby_577(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  f32 fVar6;
  MobyInstance *pMVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined2 uVar16;
  int iVar13;
  short sVar17;
  uint uVar14;
  ulonglong uVar11;
  undefined4 uVar15;
  undefined8 uVar12;
  int unused;
  longlong lVar18;
  vec4 *pvVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  f32 local_230;
  f32 local_22c;
  undefined1 auStack_220 [16];
  undefined1 local_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  Vec4 local_1a0;
  undefined1 auStack_190 [16];
  float local_180;
  float local_17c;
  undefined4 local_178;
  float afStack_170 [2];
  float local_168;
  float local_160;
  float local_15c;
  undefined4 local_158;
  Vec4 local_150;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  float local_120;
  float local_11c;
  undefined4 local_118;
  Vec4 local_110;
  undefined1 auStack_100 [16];
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  f32 local_e0;
  f32 local_dc;
  float local_d8;
  f32 local_d4;
  Vec4 local_d0 [4];
  MobyInstance *local_90;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  float local_78 [2];
  longlong local_70;
  
  lVar10 = (longlong)(int)moby;
  dVar26 = 1.5;
  pvVar5 = moby->pVar;
  uVar21 = ZEXT48(pvVar5);
  mobyfunc::DoManipulator(0x3ff8000000000000,moby,0,(Manipulator *)((int)pvVar5 + 0x230));
  if (g_gameMode == GAME_MODE_SCENE) {
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
  dVar25 = 4.0;
  mobyutil::MB_getTarget
            ((double)(*(float *)((int)pvVar5 + 0x1fc) + 4.0),lVar10,&DAT_003c8988,local_d0);
  lVar18 = lVar10 + 0x10;
  FUN_005e7e98(&local_230,lVar18);
  if (*(int *)((int)pvVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)((int)pvVar5 + 0x214) = uVar16;
  }
  *(undefined4 *)((int)pvVar5 + 0x38) = 0;
  fastfunc::FastDecTimerS16(uVar21 + 0x208);
  iVar13 = fastfunc::FastDecTimerS16(uVar21 + 0x214);
  uVar15 = 0x41c00000;
  if (iVar13 != 0) {
    uVar15 = 0x41400000;
  }
  *(undefined4 *)((int)pvVar5 + 0x1fc) = uVar15;
  dVar28 = 0.0;
  local_7c = 0;
  iVar13 = mobyutil::MB_damage(lVar10,0x330000,0);
  unused = 0;
  mobyutil::MB_HandleDamage(moby,iVar13,uVar21 + 0x20,0,auStack_80,&local_7c,0,4);
  fastfunc::FastDecTimerS16(uVar21 + 0x26);
  sVar4 = *(short *)((int)pvVar5 + 0x26);
  sVar17 = idol::GetAnimDuration(0x2d);
  if (((sVar4 < sVar17) && (iVar13 != 0)) && (moby->state != 'c')) {
    sVar4 = *(short *)(*(int *)(iVar13 + 0x20) + 0xa6);
    if (((sVar4 == 0xb0) || (sVar4 == 0xb1)) && (*(short *)((int)pvVar5 + 0x26) != 0)) {
      *(undefined4 *)(iVar13 + 0x2c) = 0;
    }
    if (moby->group != -1) {
      mobyutil::MB_SetGroupField(moby->group,1);
    }
    if (*(int *)(iVar13 + 0x2c) != 0) {
      dVar22 = (double)FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                                    (double)((moby->pos).y - local_d0[0].y));
      local_78[0] = (float)dVar22;
      fVar3 = *(float *)((int)pvVar5 + 0x20) - *(float *)(iVar13 + 0x2c);
      *(undefined4 *)((int)pvVar5 + 0x130) = 0x3c03126f;
      *(undefined4 *)((int)pvVar5 + 0x134) = 0x3a03126f;
      *(float *)((int)pvVar5 + 0x20) = fVar3;
      fVar9 = mobyutil::g_FrameTime;
      fVar8 = DAT_00846190 * mobyutil::g_FrameTime;
      *(undefined4 *)((int)pvVar5 + 0x144) = 9;
      *(float *)((int)pvVar5 + 0x138) = fVar8;
      fVar8 = DAT_0084618c;
      *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
      *(float *)((int)pvVar5 + 0x13c) = fVar8 * fVar9;
      if (dVar28 < (double)fVar3) {
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_78,
                   uVar21 + 0x138,uVar21 + 0x13c);
        mobyutil::MB_StartKick((double)local_78[0],lVar10,uVar21 + 0x120);
        unused = 6;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\x06';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0xfa;
        uVar16 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)((int)pvVar5 + 0x26) = uVar16;
        mobyutil::MB_UpdateLightsTransition(lVar10,uVar21 + 0x110);
      }
      else {
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        fVar3 = mobyutil::g_FrameTime * 11.0;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        *(float *)((int)pvVar5 + 0x13c) = fVar3;
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar13 + 0x10),*(undefined8 *)(iVar13 + 0x18),local_78,
                   uVar21 + 0x138,uVar21 + 0x13c);
        mobyutil::MB_StartKick((double)local_78[0],lVar10,uVar21 + 0x120);
        unused = 0x41900000;
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x41300000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41900000;
        moby->state = 'c';
        *(undefined1 *)((int)pvVar5 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(lVar10,uVar21 + 0x110);
        mobyutil::MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
      }
    }
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 10) {
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        FUN_005e7e98(uVar21 + 0x1d0,lVar18);
        *(undefined1 *)((int)pvVar5 + 0x29) = 0;
        if (*(short *)((int)pvVar5 + 0x20a) == 0) {
          fVar3 = (moby->pos).z;
          moby->state = '\x0e';
          uVar2 = moby->animationId;
          (moby->pos).z = fVar3 + 6.0;
          if (uVar2 != '\0') {
            mobyutil::MB_SetAnimation(lVar10,0,0,0);
          }
        }
        else {
          moby->state = '\x01';
          if (moby->animationId != '\x04') {
            mobyutil::MB_SetAnimation(lVar10,4,0,0);
          }
        }
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x3f800000;
        *(undefined2 *)((int)pvVar5 + 0x24) = 1;
        *(undefined2 *)((int)pvVar5 + 0x214) = 0;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        *(undefined1 *)((int)pvVar5 + 0x58) = 8;
        *(undefined1 *)((int)pvVar5 + 0x5a) = 4;
        mobyutil::MB_InitDefaultParams((float *)((int)pvVar5 + 0x180));
        *(undefined4 *)((int)pvVar5 + 0x18c) = 0x40000000;
        *(undefined4 *)((int)pvVar5 + 0x188) = 0x40000000;
        fVar3 = mobyutil::g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0x180) = 0x38d;
        *(float *)((int)pvVar5 + 0x1a4) = *(float *)((int)pvVar5 + 0x204) * fVar3;
        uVar14 = rand();
        if ((uVar14 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        *(undefined **)((int)pvVar5 + 0xd0) = &DAT_0084619c;
      }
      else if (bVar1 < 2) {
        FUN_005e81f0(auStack_1f0,local_d0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1f0);
        if ((((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
           (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
            uVar11 = mobyutil::MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar11 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_70 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_1f0);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,0,0,uVar12);
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\x05') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,5,0,uVar12);
          }
        }
      }
      else if (bVar1 < 3) {
        uVar12 = FUN_005e8338((double)((moby->pos).x - local_d0[0].x),
                              (double)((moby->pos).y - local_d0[0].y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar12,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar10,
                   &DAT_003c8988,uVar21 + 0x1f0);
        FUN_005e81f0(auStack_1c0,local_d0,lVar18);
        dVar26 = (double)FUN_005e8030(auStack_1c0);
        if ((((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) ||
            (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
           (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
          if ((moby->setByGroup == '\x01') && (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
            uVar11 = mobyutil::MB_randInt(0x100);
            fVar3 = *(float *)((int)pvVar5 + 0x1f8);
            if ((uVar11 & 1) != 0) {
              fVar3 = -fVar3;
              *(float *)((int)pvVar5 + 0x1f8) = fVar3;
            }
            *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
            dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
            local_70 = (longlong)(int)dVar26;
            uVar15 = idol::GetAnimDuration((int)dVar26);
            *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
            }
            moby->setByGroup = '\0';
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_1c0);
            if (((double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0) < dVar26) &&
               ((*(short *)((int)pvVar5 + 0x20a) == 0 &&
                (moby->state = '\x10', moby->animationId != '\0')))) {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,0,0,uVar12);
            }
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          uVar11 = mobyutil::MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar11 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
          }
          moby->setByGroup = '\0';
        }
        if (((moby->animationId == '\x05') && ((moby->field43_0x70 & 2U) != 0)) &&
           (moby->animationId != '\x04')) {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,4,0,uVar12);
        }
      }
      else {
        dVar22 = ABS((double)((moby->pos).z - local_d0[0].z));
        dVar28 = (double)FUN_005e8588(lVar18,local_d0);
        dVar28 = (double)(float)(dVar22 / dVar28);
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          FUN_005e7e98(&local_1a0,local_d0);
        }
        else {
          path::Path_PickNextNode(moby,Splines[*(int *)((int)pvVar5 + 0x21c)],local_d0,&local_1a0);
        }
        dVar22 = (double)FUN_005e8338((double)(local_1a0.x - (moby->pos).x),
                                      (double)(local_1a0.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar22 + (double)*(float *)((int)pvVar5 + 500)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
        dVar22 = (double)mathfunc::cosf((moby->rotation).z);
        dVar24 = 2.0;
        local_1b0 = (float)(dVar22 * 2.0);
        dVar22 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_1ac = (float)(dVar22 * dVar24);
        local_1a8 = 0;
        dVar22 = 1.0;
        uVar11 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_1b0
                            ,&local_1a0);
        iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x210);
        if (iVar13 != 0) {
          dVar24 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar24;
          uVar15 = idol::GetAnimDuration((int)dVar24);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          *(float *)((int)pvVar5 + 500) = -*(float *)((int)pvVar5 + 500);
        }
        FUN_005e81f0(auStack_190,local_d0,uVar21 + 0x1d0);
        dVar24 = (double)FUN_005e8588(lVar18,local_d0);
        uVar2 = moby->animationId;
        if ((dVar26 <= dVar24) || ((uVar11 & 2) != 0)) {
          if ((dVar22 < dVar28) || ((uVar11 & 2) != 0)) {
            (moby->pos).x = local_230;
            (moby->pos).y = local_22c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,5,0,uVar12);
            }
          }
          else {
            dVar26 = (double)FUN_005e8030(auStack_190);
            if (((double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26) ||
               (8.0 <= ABS((moby->pos).z - local_d0[0].z))) {
              if (moby->setByGroup != '\x01') {
                moby->state = '\x05';
              }
            }
            else if (moby->group != -1) {
              mobyutil::MB_SetGroupField(moby->group,1);
            }
          }
        }
        else {
          moby->state = '\x04';
          if (uVar2 != '\x03') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,3,0,uVar12);
          }
        }
        mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
        iVar13 = collproc::CollHotspot();
        if (((iVar13 == 0) || (iVar13 = collproc::CollHotspot(), iVar13 == 8)) &&
           (moby->state = '\x10', moby->animationId != '\0')) {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,0,0,uVar12);
        }
        moby->setByGroup = '\0';
      }
    }
    else if (bVar1 < 7) {
      if (bVar1 < 5) {
        uVar12 = FUN_005e8338((double)(local_d0[0].x - (moby->pos).x),
                              (double)(local_d0[0].y - (moby->pos).y));
        dVar25 = 0.20000000298023224;
        mobyutil::OrganicDeltAngSpeed
                  (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10,
                   &DAT_003c8988,uVar21 + 0x1f0);
        if (((moby->updateId == moby->animationId) &&
            (dVar28 = (double)mobyfunc::BlendAnimFrame(moby), dVar28 == 13.0)) &&
           ((ABS((moby->pos).z - local_d0[0].z) < 0.5 &&
            (dVar28 = (double)FUN_005e8588(lVar18,local_d0), dVar28 < 2.0)))) {
          dVar28 = (double)FUN_005e8338((double)(local_d0[0].x - (moby->pos).x),
                                        (double)(local_d0[0].y - (moby->pos).y));
          dVar28 = (double)fastfunc::FastSubRots((float)dVar28,(moby->rotation).z);
          if (dVar28 < 0.2617993950843811) {
            dVar28 = (double)mathfunc::cosf((moby->rotation).z);
            local_180 = (float)(dVar28 * dVar25);
            dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_17c = (float)(dVar28 * dVar25);
            local_178 = 0;
            FUN_005e7e98(afStack_170,local_d0);
            local_168 = local_168 + 0.75;
            if (local_90 != (MobyInstance *)0x0) {
              mobyutil::CollDamageMobyDirect(1.0,local_90,moby,1,unused,afStack_170,&local_180);
            }
          }
        }
        if ((((moby->field43_0x70 & 2U) != 0) &&
            (dVar25 = (double)FUN_005e8588(lVar18,local_d0), dVar26 < dVar25)) &&
           (moby->state = '\x03', moby->animationId != '\x02')) {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
        }
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
        fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
        *(float *)((int)pvVar5 + 0x198) = fVar3;
        fVar3 = (moby->pos).z + fVar3;
        (moby->pos).z = fVar3;
        if ((double)fVar3 < dVar26) {
          *(undefined4 *)((int)pvVar5 + 0x198) = 0;
          (moby->pos).z = (float)dVar26;
        }
      }
      else if (bVar1 < 6) {
        if (*(int *)((int)pvVar5 + 0x21c) == -1) {
          FUN_005e7e98(&local_150,uVar21 + 0x1d0);
        }
        else {
          path::Path_PickNextNode
                    (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                     &local_150);
        }
        uVar12 = FUN_005e8338((double)(local_150.x - (moby->pos).x),
                              (double)(local_150.y - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar12,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar10);
        dVar26 = (double)mathfunc::cosf((moby->rotation).z);
        dVar25 = 2.0;
        local_160 = (float)(dVar26 * 2.0);
        dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_15c = (float)(dVar26 * dVar25);
        local_158 = 0;
        uVar11 = mobyutil::MB_UpdateNavMove
                           (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_160
                            ,&local_150);
        dVar26 = (double)FUN_005e8588(lVar18,uVar21 + 0x1d0);
        if ((dVar26 < dVar25) && (moby->state = '\x01', moby->animationId != '\x04')) {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,4,0,uVar12);
        }
        FUN_005e81f0(auStack_140,local_d0,uVar21 + 0x1d0);
        dVar26 = (double)FUN_005e8030(auStack_140);
        if ((double)*(float *)((int)pvVar5 + 0x1fc) <= dVar26) {
          if (moby->setByGroup == '\x01') {
            moby->state = '\x03';
            if (moby->animationId != '\x02') {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
            }
          }
          else if ((uVar11 & 2) != 0) {
            (moby->pos).x = local_230;
            uVar2 = moby->animationId;
            (moby->pos).y = local_22c;
            moby->state = '\f';
            if (uVar2 != '\x05') {
              uVar12 = idol::GetAnimDuration(3);
              mobyutil::MB_SetAnimation(lVar10,5,0,uVar12);
            }
          }
        }
        else {
          if (moby->group != -1) {
            mobyutil::MB_SetGroupField(moby->group,1);
          }
          moby->state = '\x03';
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
          }
        }
        mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
        iVar13 = collproc::CollHotspot();
        if (((iVar13 == 0) || (iVar13 = collproc::CollHotspot(), iVar13 == 8)) &&
           (moby->state = '\x10', moby->animationId != '\0')) {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,0,0,uVar12);
        }
        moby->setByGroup = '\0';
      }
      else {
        uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
        if ((uVar14 & 1) != 0) {
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
          return;
        }
        fVar6 = (moby->pos).z;
        uVar14 = (int)fVar6 >> 0x1f;
        if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
          mobyutil::MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
          mobyfunc::DeleteMoby(moby);
          return;
        }
      }
    }
    else if (bVar1 < 8) {
      iVar13 = FUN_0048c188(lVar10,uVar21 + 0x120);
      if (iVar13 != 0) {
        moby->state = '\x0e';
        uVar15 = idol::GetAnimDuration(0xb4);
        *(undefined4 *)((int)pvVar5 + 0x228) = uVar15;
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar10,0,0,0);
        }
        *(undefined2 *)((int)pvVar5 + 200) = 0;
      }
    }
    else if (bVar1 < 9) {
      FUN_005e81f0(auStack_1e0,local_d0,lVar18);
      dVar26 = (double)FUN_005e8030(auStack_1e0);
      if (((dVar26 < (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) - dVar25)) &&
          (ABS((moby->pos).z - local_d0[0].z) < 8.0)) &&
         (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
        fVar3 = (moby->pos).z;
        uVar2 = moby->animationId;
        moby->state = '\x02';
        (moby->pos).z = fVar3 + 1.0;
        if (uVar2 != '\x05') {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,5,0,uVar12);
        }
      }
    }
    goto LAB_003caf48;
  }
  if (0xe < bVar1) {
    if (bVar1 < 0x12) {
      if (bVar1 < 0x10) {
        uVar12 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1e0) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar5 + 0x1e4) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
        lVar20 = uVar21 + 0x40;
        FUN_005e81f0(lVar20,uVar21 + 0x1e0,lVar18);
        mobyutil::ClampVec3Magnitude
                  ((double)(float)((double)mobyutil::g_FrameTime * dVar25),(Vec4 *)lVar20);
        FUN_005e7f54(auStack_200,lVar20,lVar18);
        iVar13 = collproc::CollSphere(0x3fd99999a0000000,auStack_200);
        if (iVar13 == 0) {
          FUN_005e7e98(lVar18,auStack_200);
        }
        else {
          FUN_005e7e70(lVar20);
          moby->state = '\x0e';
        }
        dVar26 = (double)FUN_005e8030(lVar20);
        if (dVar26 == dVar28) {
          moby->state = '\x0e';
        }
      }
      else if (bVar1 < 0x11) {
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
        mobyutil::Delt(mobyutil::g_FrameTime * 8.0,DAT_0071f418 * 10.8,(float *)((int)pvVar5 + 0x48)
                      );
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        (moby->pos).z = fVar3;
        if ((float)(dVar26 + 6.0) <= fVar3) {
          (moby->pos).z = (float)(dVar26 + 6.0);
          moby->state = '\x0e';
          uVar15 = idol::GetAnimDuration(0xb4);
          *(undefined4 *)((int)pvVar5 + 0x228) = uVar15;
          FUN_005e7e70(uVar21 + 0x40);
        }
      }
      else {
        dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
        mobyutil::Delt(mobyutil::g_FrameTime * -8.0,DAT_0071f418 * 10.8,
                       (float *)((int)pvVar5 + 0x48));
        uVar2 = moby->animationId;
        fVar3 = (moby->pos).z + *(float *)((int)pvVar5 + 0x48);
        dVar25 = (double)fVar3;
        (moby->pos).z = fVar3;
        if (((uVar2 != '\x01') &&
            ((float)(dVar25 - dVar26) <= mobyutil::g_FrameTime * 8.0 * animationSpeed * 45.0)) &&
           (uVar2 != '\x01')) {
          uVar12 = idol::GetAnimDuration(5);
          mobyutil::MB_SetAnimation(lVar10,1,0,uVar12);
          dVar25 = (double)(moby->pos).z;
        }
        if (dVar25 <= dVar26) {
          (moby->pos).z = (float)dVar26;
          uVar11 = mobyutil::MB_randInt(0x100);
          fVar3 = *(float *)((int)pvVar5 + 0x1f8);
          if ((uVar11 & 1) != 0) {
            fVar3 = -fVar3;
            *(float *)((int)pvVar5 + 0x1f8) = fVar3;
          }
          *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
          dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
          local_70 = (longlong)(int)dVar26;
          uVar15 = idol::GetAnimDuration((int)dVar26);
          *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
          moby->state = '\x03';
          FUN_005e7e70(uVar21 + 0x40);
          if (moby->animationId != '\x02') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
          }
        }
      }
    }
    else if (bVar1 == 99) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 0x140) != 0) {
        FUN_005e7e70(auStack_130);
        iVar13 = idol::GetAnimDuration(1);
        local_70 = (longlong)(int)((float)(longlong)iVar13 * 60.0);
        iVar13 = mobyupdate_helpers::M577_003c8938
                           (&DAT_010c9f68,3,(int)((float)(longlong)iVar13 * 60.0));
        if (-1 < iVar13) {
          mobyutil::MB_SpawnExplosionSparks
                    (0x3fe0000000000000,0x402a000000000000,lVar10,lVar18,&DAT_003c8988,4);
        }
        lVar20 = lVar10 + 0x40;
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d3,lVar18,lVar20,0,0);
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d4,lVar18,lVar20,0,0);
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d5,lVar18,lVar20,0,0);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        lVar20 = lVar10 + 0x40;
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d3,lVar18,lVar20,0,0);
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d4,lVar18,lVar20,0,0);
        mobyutil::MB_SpawnDebrisMoby(dVar28,lVar10,0x6d5,lVar18,lVar20,0,0);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003caf48;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 0xb) {
      uVar12 = FUN_005e8338((double)(*(float *)((int)pvVar5 + 0x1d0) - (moby->pos).x),
                            (double)(*(float *)((int)pvVar5 + 0x1d4) - (moby->pos).y));
      mobyutil::OrganicDeltAngSpeed
                (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10,
                 &DAT_003c8988,uVar21 + 0x1f0);
      FUN_005e81f0(auStack_1d0,local_d0,uVar21 + 0x1d0);
      dVar26 = (double)FUN_005e8030(auStack_1d0);
      if (((dVar26 < (double)*(float *)((int)pvVar5 + 0x1fc)) &&
          (ABS(*(float *)((int)pvVar5 + 0x1d8) - local_d0[0].z) < 8.0)) ||
         (moby->setByGroup == '\x02')) {
        if (moby->group != -1) {
          mobyutil::MB_SetGroupField(moby->group,2);
        }
        if (moby->animationId != '\x06') {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,6,0,uVar12);
        }
        fVar3 = DAT_00846198;
        dVar26 = (double)DAT_00846198;
        *(undefined4 *)((int)pvVar5 + 0x134) = 0;
        *(float *)((int)pvVar5 + 0x130) = fVar3;
        fVar3 = DAT_00846194 * mobyutil::g_FrameTime;
        *(float *)((int)pvVar5 + 0x138) = fVar3;
        dVar26 = (double)mobyutil::MB_computeLobVelocity
                                   ((double)fVar3,-dVar26,lVar18,uVar21 + 0x1d0);
        *(float *)((int)pvVar5 + 0x13c) = (float)dVar26;
        *(undefined1 *)((int)pvVar5 + 0x15d) = 0;
        fVar3 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar5 + 0x144) = 0xd;
        mobyutil::MB_StartKick((double)fVar3,lVar10,uVar21 + 0x120,0xd,6,1,0);
        *(undefined4 *)((int)pvVar5 + 0x170) = 0x40a00000;
        *(undefined4 *)((int)pvVar5 + 0x174) = 0x41200000;
        moby->state = '\v';
      }
    }
    else {
      uVar14 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar5 + 0x120));
      if ((uVar14 & 1) != 0) {
        moby->state = '\x03';
        uVar21 = mobyutil::MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar21 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_70 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        if (moby->animationId == '\x02') {
          return;
        }
        uVar12 = idol::GetAnimDuration(3);
        mobyutil::MB_SetAnimation(lVar10,2,8,uVar12);
        return;
      }
      fVar6 = (moby->pos).z;
      uVar14 = (int)fVar6 >> 0x1f;
      if ((int)((uVar14 >> 1 ^ (uint)fVar6) - uVar14) < 0x40a00000) {
        mobyutil::MB_SpawnBoltsFromCrate(lVar10,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    goto LAB_003caf48;
  }
  if (bVar1 < 0xd) {
    dVar28 = ABS((double)((moby->pos).z - local_d0[0].z));
    dVar25 = (double)FUN_005e8588(lVar18,local_d0);
    dVar25 = (double)(float)(dVar28 / dVar25);
    if (*(int *)((int)pvVar5 + 0x21c) == -1) {
      FUN_005e7e98(&local_110,uVar21 + 0x1d0);
    }
    else {
      path::Path_PickNextNode
                (moby,Splines[*(int *)((int)pvVar5 + 0x21c)],(Vec4 *)((int)pvVar5 + 0x1d0),
                 &local_110);
    }
    uVar12 = FUN_005e8338((double)(local_110.x - (moby->pos).x),
                          (double)(local_110.y - (moby->pos).y));
    mobyutil::OrganicDeltAngSpeed
              (uVar12,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar10);
    dVar28 = (double)mathfunc::cosf((moby->rotation).z);
    dVar22 = 2.0;
    local_120 = (float)(dVar28 * 2.0);
    dVar28 = (double)FUN_005e8128((double)(moby->rotation).z);
    local_11c = (float)(dVar28 * dVar22);
    local_118 = 0;
    dVar22 = 1.0;
    uVar11 = mobyutil::MB_UpdateNavMove
                       (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar5 + 0x180),&local_120,
                        &local_110);
    FUN_005e81f0(auStack_100,local_d0,uVar21 + 0x1d0);
    dVar28 = (double)FUN_005e8588(lVar18,local_d0);
    if ((dVar26 <= dVar28) || (dVar22 < dVar25)) {
      if ((dVar22 < dVar25) || ((uVar11 & 2) != 0)) {
        dVar26 = (double)FUN_005e8588(lVar18,local_d0);
        if (dVar26 <= (double)(*(float *)((int)pvVar5 + 0x1fc) + 6.0)) {
          if ((moby->field43_0x70 & 2U) != 0) {
            mobyutil::MB_randInt(4);
            iVar13 = mobyutil::MB_randInt(4);
            local_70 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation
                      (lVar10,((LZCOUNT(-iVar13) << 0x3a) >> 0x3f & 1U) + 4,0,
                       (int)(animationSpeed * 3.5));
          }
        }
        else {
          moby->state = '\x10';
          if (moby->animationId != '\0') {
            uVar12 = idol::GetAnimDuration(3);
            mobyutil::MB_SetAnimation(lVar10,0,0,uVar12);
          }
        }
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\x02') {
          uVar12 = idol::GetAnimDuration(3);
          mobyutil::MB_SetAnimation(lVar10,2,0,uVar12);
        }
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x03') {
        uVar12 = idol::GetAnimDuration(3);
        mobyutil::MB_SetAnimation(lVar10,3,0,uVar12);
      }
    }
    mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
    iVar13 = collproc::CollHotspot();
    if (((iVar13 == 0) || (iVar13 = collproc::CollHotspot(), iVar13 == 8)) &&
       (moby->state = '\x10', moby->animationId != '\0')) {
      local_70 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar10,0,0,(int)(animationSpeed * 3.5));
    }
    moby->setByGroup = '\0';
    goto LAB_003caf48;
  }
  if (0xd < bVar1) {
    FUN_005e81f0(auStack_220,local_d0,lVar18);
    iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x228);
    if ((((iVar13 == 0) ||
         (dVar26 = (double)FUN_005e8030(auStack_220),
         (double)(float)((double)*(float *)((int)pvVar5 + 0x1fc) + dVar25) <= dVar26)) ||
        (8.0 <= ABS((moby->pos).z - local_d0[0].z))) ||
       (iVar13 = mobyutil::MB_randInt(0x13), iVar13 != 0)) {
      if (((*(int *)((int)pvVar5 + 0x228) == 0) && (moby->setByGroup == '\x01')) &&
         (iVar13 = mobyutil::MB_randInt(0x13), iVar13 == 0)) {
        uVar11 = mobyutil::MB_randInt(0x100);
        fVar3 = *(float *)((int)pvVar5 + 0x1f8);
        if ((uVar11 & 1) != 0) {
          fVar3 = -fVar3;
          *(float *)((int)pvVar5 + 0x1f8) = fVar3;
        }
        *(float *)((int)pvVar5 + 500) = fVar3 * 0.017453292;
        dVar26 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        local_70 = (longlong)(int)dVar26;
        uVar15 = idol::GetAnimDuration((int)dVar26);
        *(undefined4 *)((int)pvVar5 + 0x210) = uVar15;
        moby->state = '\x11';
        FUN_005e7e70(uVar21 + 0x40);
        moby->setByGroup = '\0';
      }
      else {
        iVar13 = fastfunc::FastDecTimerS32(uVar21 + 0x20c);
        if (iVar13 != 0) {
          uVar15 = idol::GetAnimDuration(0x78);
          *(undefined4 *)((int)pvVar5 + 0x20c) = uVar15;
          mobyutil::MB_randRangeFloat((float)dVar28,3.0);
          dVar26 = (double)mobyutil::MB_randRot();
          mathfunc::cosf((float)dVar26);
          FUN_005e8128(dVar26);
          mobyutil::MB_randRangeFloat(5.0,7.0);
          FUN_005e7f54(uVar21 + 0x1e0,local_210,uVar21 + 0x1d0);
          moby->state = '\x0f';
        }
      }
    }
    else {
      moby->state = '\x11';
    }
    goto LAB_003caf48;
  }
  if ((moby->updateId != '\x02') && (moby->animationId != '\x02')) {
    local_70 = (longlong)(int)(animationSpeed * 3.5);
    mobyutil::MB_SetAnimation(lVar10,2,0,(int)(animationSpeed * 3.5));
  }
  dVar26 = (double)mathfunc::cosf((moby->rotation).z);
  local_f0 = (float)((double)(*(float *)((int)pvVar5 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  dVar26 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_e8 = 0;
  local_ec = (float)((double)(*(float *)((int)pvVar5 + 0x204) * mobyutil::g_FrameTime) * dVar26);
  FUN_005e7f54(&local_e0,lVar18,&local_f0);
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar22 = 2.0;
    dVar25 = 1.5707963705062866;
    dVar26 = -1.5707963705062866;
    pMVar7 = MobyUpdateChainStart;
    do {
      if (((pMVar7 != moby) && (pMVar7->state < 0x80)) &&
         ((pMVar7->oClass == RATCHET || (pMVar7->oClass == PECKBOT)))) {
        pvVar19 = &pMVar7->pos;
        dVar24 = (double)FUN_005e8588(&local_e0,pvVar19);
        if (dVar24 < dVar22) {
          dVar24 = (double)(moby->rotation).z;
          dVar27 = (double)(moby->pos).z;
          uVar12 = FUN_005e8338((double)((pMVar7->pos).x - (moby->pos).x),
                                (double)((pMVar7->pos).y - (moby->pos).y));
          dVar23 = (double)fastfunc::FastDiffRots(dVar24,uVar12);
          dVar24 = dVar26;
          if (dVar28 < dVar23) {
            dVar24 = dVar25;
          }
          dVar24 = (double)fastfunc::FastWrapRot
                                     ((moby->rotation).z,
                                      (float)((double)mobyutil::g_FrameTime * dVar24));
          (moby->rotation).z = (float)dVar24;
          FUN_005e81f0(&local_e0,lVar18,pvVar19);
          FUN_005e7f98(dVar22,&local_e0,&local_e0);
          FUN_005e7f54(&local_e0,&local_e0,pvVar19);
          local_d8 = (float)dVar27;
        }
      }
      pMVar7 = (MobyInstance *)pMVar7->pChain;
    } while (pMVar7 != (MobyInstance *)0x0);
  }
  (moby->pos).x = local_e0;
  (moby->pos).y = local_dc;
  (moby->pos).z = local_d8;
  (moby->pos).w = local_d4;
  dVar26 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar18,0);
  fVar3 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar5 + 0x198));
  *(float *)((int)pvVar5 + 0x198) = fVar3;
  fVar3 = (moby->pos).z + fVar3;
  (moby->pos).z = fVar3;
  if ((double)fVar3 < dVar26) {
    *(undefined4 *)((int)pvVar5 + 0x198) = 0;
    (moby->pos).z = (float)dVar26;
  }
  if (*(uint *)((int)pvVar5 + 0x218) == 0) {
LAB_003caef0:
    moby->state = '\x05';
    if (moby->animationId != '\x02') {
      local_70 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar10,2,0,(int)(animationSpeed * 3.5));
    }
  }
  else {
    dVar26 = (double)FUN_005e8588(lVar18,(ulonglong)*(uint *)((int)pvVar5 + 0x218) + 0x10);
    dVar25 = (double)fastfunc::FastIntToDouble(*(undefined2 *)((int)pvVar5 + 0x216));
    if (dVar25 < dVar26) goto LAB_003caef0;
  }
  moby->setByGroup = '\0';
LAB_003caf48:
  mobyutil::MB_ColorDyingMoby(lVar10,uVar21 + 0x110);
  mobyutil::MB_SetZBoundsFromGround(lVar10);
  return;
}



//==== 003cafa4  ns=mobyupdate_helpers  size=0x58
// sig: undefined M578_003cafa4(void)
// callers(0): 
// callees(1): 0048a718 mobyupdate_helpers::M849_MB_Sucking

void mobyupdate_helpers::M578_003cafa4(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}



//==== 003caffc  ns=mobyupdate_helpers  size=0x58
// sig: undefined M578_003caffc(void)
// callers(0): 
// callees(1): 0048aa70 mobyupdate_helpers::M849_0048aa70

void mobyupdate_helpers::M578_003caffc(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}



//==== 003cb054  ns=mobyupdate_helpers  size=0xd0
// sig: undefined M578_003cb054(void)
// callers(0): 
// callees(3): 0015d12c sound::PlayMobySound; 00486828 FUN_00486828; 0048acb8 mobyupdate_helpers::M849_0048acb8

undefined8
mobyupdate_helpers::M578_003cb054
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00486828();
  uVar1 = M849_0048acb8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_2->state == '\a') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\a';
  }
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x68) == 6)) {
    sound::PlayMobySound(2,0,param_2);
  }
  return uVar1;
}



//==== 003cb124  ns=mobyupdate_helpers  size=0x38
// sig: undefined M578_003cb124(void)
// callers(0): 
// callees(1): 0048afe8 mobyupdate_helpers::M849_0048afe8

void mobyupdate_helpers::M578_003cb124(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}



//==== 003cb15c  ns=mobyupdate_helpers  size=0x40
// sig: undefined M578_003cb15c(void)
// callers(0): 
// callees(0): 

longlong mobyupdate_helpers::M578_003cb15c(int param_1)

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



//==== 003cb19c  ns=mobyupdate_helpers  size=0x14
// sig: undefined M578_003cb19c(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M578_003cb19c(void)

{
  DAT_008461f4 = 0x10000;
  return;
}



//==== 003cb1b8  ns=mobyupdate_helpers  size=0xe08
// sig: undefined M578_003cb1b8(void)
// callers(1): 003cc030 mobyupdate_unsorted::UpdateMoby_578
// callees(7): 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 001158b0 mobyutil::MB_SetupJumpArc

void mobyupdate_helpers::M578_003cb1b8(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  longlong lVar13;
  longlong lVar14;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong unaff_r28;
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
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1c0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x3a] = in_LR;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x35] = unaff_r31;
  puVar9[0x34] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar21 = ZEXT48(pvVar7);
  dVar27 = 0.0;
  puVar9[0x33] = unaff_r29;
  puVar9[0x32] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar15 = mobyutil::MB_damage(param_1,0x330000,0);
  iVar16 = mobyutil::MB_HandleDamage
                     (param_1,iVar15,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) == 1) || (param_1->state == '\x05')) goto LAB_003cbf80;
  pMVar8 = *(MobyInstance **)(iVar15 + 0x20);
  dVar28 = 0.7853981852531433;
  dVar24 = dVar27;
  if (pMVar8 == (MobyInstance *)0x0) {
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)((int)puVar9 + 0xa4) = fVar1;
    *(float *)(puVar9 + 0x15) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0x14));
    if ((double)*(float *)(puVar9 + 0x15) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0xa4));
    if ((double)*(float *)(puVar9 + 0x15) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar17 = uVar12 - 0x9c;
      lVar19 = uVar12 - 0x8c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x26) = fVar3;
      *(float *)(puVar9 + 0x25) = fVar3;
      *(float *)((int)puVar9 + 300) = fVar3;
      *(float *)((int)puVar9 + 0x124) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar4;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar3;
      *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x124) = *(float *)((int)lVar13 + 0x114) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x9c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x124) = *(float *)((int)lVar13 + 0x124) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x124)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  else if (pMVar8 == g_currentWeaponMoby) {
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)((int)puVar9 + 0xac) = fVar5;
    *(float *)(puVar9 + 0x16) = fVar1;
    *(float *)((int)puVar9 + 0xb4) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0xac));
    if ((double)*(float *)((int)puVar9 + 0xb4) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)(puVar9 + 0x16));
    if ((double)*(float *)((int)puVar9 + 0xb4) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0x6c;
      lVar17 = uVar12 - 0x7c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x2a) = fVar3;
      *(float *)(puVar9 + 0x29) = fVar3;
      *(float *)((int)puVar9 + 0x14c) = fVar3;
      *(float *)((int)puVar9 + 0x144) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar4;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar3;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x144) = *(float *)((int)lVar13 + 0x134) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x7c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x144) = *(float *)((int)lVar13 + 0x144) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x144)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  else {
    fVar5 = (param_1->pos).x - (pMVar8->pos).x;
    fVar1 = (param_1->pos).y - (pMVar8->pos).y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar1;
    *(float *)(puVar9 + 0x18) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0x17));
    if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
    if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0x4c;
      lVar17 = uVar12 - 0x5c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x2e) = fVar3;
      *(float *)(puVar9 + 0x2d) = fVar3;
      *(float *)((int)puVar9 + 0x16c) = fVar3;
      *(float *)((int)puVar9 + 0x164) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x2d) = *(float *)(puVar9 + 0x2d) * fVar4;
      *(float *)((int)puVar9 + 0x16c) = *(float *)((int)puVar9 + 0x16c) * fVar3;
      *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x164) = *(float *)((int)lVar13 + 0x154) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x5c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x164) = *(float *)((int)lVar13 + 0x164) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x164)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  *(float *)(puVar9 + 0xf) = (float)dVar24;
  fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar27) {
LAB_003cbce4:
    *(float *)((int)pvVar7 + 0x80) = DAT_00846218 * DAT_0071f418;
    mobyutil::MB_SetupJumpArc
              ((double)DAT_00846228,(double)DAT_0084622c,&PTR_DAT_00840000,&PTR_DAT_00840000,
               uVar21 + 0x70);
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    uVar2 = *(undefined4 *)(iVar15 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar2;
    uVar2 = *(undefined4 *)(iVar15 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
    mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar25 = ABS((double)fVar5);
    dVar23 = ABS((double)fVar1);
    *(float *)((int)puVar9 + 0x7c) = fVar5;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar25 - dVar23);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    lVar13 = uVar20 << 2;
    dVar24 = ABS((double)*(float *)((int)puVar9 + 0x7c));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar24 = dVar23;
    }
    fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
    dVar23 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar23 = dVar25;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar24) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0xec;
      lVar17 = uVar12 - 0xfc;
      lVar22 = 2;
      fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x1a) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
      *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3;
      *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xb4) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0xfc;
      pfVar18 = (float *)&DAT_007358e0;
      lVar17 = lVar14;
      lVar13 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xc4) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar16 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xc4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
    }
    mobyutil::MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,5,1,0);
    MVar6 = param_1->modeBits;
    *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41000000;
    *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41700000;
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
    param_1->state = '\x05';
  }
  else {
    if (iVar16 < 3) {
      if (iVar16 != 1) goto LAB_003cbf70;
      goto LAB_003cbce4;
    }
    if (iVar16 < 6) {
      if (iVar16 < 4) {
LAB_003cb7f4:
        *(float *)((int)pvVar7 + 0x80) = DAT_0084621c * DAT_0071f418;
        mobyutil::MB_SetupJumpArc
                  ((double)DAT_00846220,(double)DAT_00846224,&PTR_DAT_00840000,&PTR_DAT_00840000,
                   uVar21 + 0x70);
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
        fVar5 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar5);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x94) = fVar5;
        *(float *)(puVar9 + 0x13) = fVar1;
        *(float *)((int)puVar9 + 0x9c) = (float)(dVar25 - dVar23);
        uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
        lVar13 = uVar20 << 2;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x94));
        if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
          dVar24 = dVar23;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
        dVar23 = ABS((double)*(float *)(puVar9 + 0x13));
        if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xac;
          lVar17 = uVar12 - 0xbc;
          lVar22 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x22) = fVar3;
          *(float *)(puVar9 + 0x21) = fVar3;
          *(float *)((int)puVar9 + 0x10c) = fVar3;
          *(float *)((int)puVar9 + 0x104) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
          *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar3;
          *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0x104) = *(float *)((int)lVar13 + 0xf4) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar19 = uVar12 - 0xbc;
          pfVar18 = (float *)&DAT_007358e0;
          lVar17 = lVar14;
          lVar13 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0x104) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x104)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
        }
        mobyutil::MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,3,1,0);
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41200000;
        param_1->state = '\x04';
      }
      else {
        *(float *)((int)pvVar7 + 0x80) = DAT_0084621c * DAT_0071f418;
        mobyutil::MB_SetupJumpArc
                  ((double)DAT_00846220,(double)DAT_00846224,&PTR_DAT_00840000,&PTR_DAT_00840000,
                   uVar21 + 0x70);
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
        mobyutil::MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
        fVar5 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar5);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x11) = fVar5;
        *(float *)((int)puVar9 + 0x8c) = fVar1;
        *(float *)(puVar9 + 0x12) = (float)(dVar25 - dVar23);
        uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
        lVar13 = uVar20 << 2;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x11));
        if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
          dVar24 = dVar23;
        }
        fVar5 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)lVar13);
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xcc;
          lVar17 = uVar12 - 0xdc;
          lVar22 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x1e) = fVar3;
          *(float *)(puVar9 + 0x1d) = fVar3;
          *(float *)((int)puVar9 + 0xec) = fVar3;
          *(float *)((int)puVar9 + 0xe4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar4;
          *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3;
          *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0xe4) = *(float *)((int)lVar13 + 0xd4) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar19 = uVar12 - 0xdc;
          pfVar18 = (float *)&DAT_007358e0;
          lVar17 = lVar14;
          lVar13 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xe4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xe4)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
        }
        mobyutil::MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,4,1,0);
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41700000;
        param_1->state = '\x04';
      }
    }
    else if (iVar16 < 7) goto LAB_003cb7f4;
  }
LAB_003cbf70:
  mobyutil::MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
LAB_003cbf80:
  param_1->damage = -1;
  mobyutil::MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}



//==== 003cc030  ns=mobyupdate_unsorted  size=0xe40
// sig: undefined UpdateMoby_578(MobyInstance * moby)
// callers(0): 
// callees(19): 000efb38 mobyfunc::DeleteMoby; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101cc0 mobyutil::MB_UpdateNavMoveTurning; 00106360 mobyutil::MB_SetZBoundsFromGround; 0010b030 mobyutil::MB_UpdateKick; 0010e030 mobyutil::MB_genericExplosion; 001118d8 mobyutil::MB_getTarget; 00119a18 mobyfunc::DoManipulator; 0015d204 sound::sound_MobyPlay_oClass; 003cb1b8 mobyupdate_helpers::M578_003cb1b8; 003eba50 FUN_003eba50; 004fff60 fastfunc::FastDecTimerS32; 004fffb4 fastfunc::FastDecTimerS16; 00502730 fastfunc::FastIntToDouble

/* Moby 578 */

void mobyupdate_unsorted::UpdateMoby_578(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  f32 fVar9;
  float fVar10;
  void *pvVar11;
  int *piVar12;
  f32 fVar13;
  Spline *pSVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  int iVar29;
  char cVar30;
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
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x210;
  puVar17 = (ulonglong *)lVar22;
  *puVar17 = uVar18;
  puVar17[0x44] = in_LR;
  puVar17[0x3a] = in_f24;
  puVar17[0x3b] = in_f25;
  puVar17[0x3c] = in_f26;
  puVar17[0x3d] = in_f27;
  puVar17[0x3e] = in_f28;
  puVar17[0x3f] = in_f29;
  puVar17[0x40] = in_f30;
  puVar17[0x41] = in_f31;
  puVar17[0x39] = unaff_r31;
  puVar17[0x37] = unaff_r29;
  puVar17[0x38] = unaff_r30;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  puVar17[0x36] = unaff_r28;
  mobyutil::MB_getTarget(0x4059000000000000,lVar19,0x3d0000,uVar18 - 0x100);
  dVar43 = 14.0;
  mobyfunc::DoManipulator(0x4012000000000000,moby,0,(Manipulator *)((int)pvVar11 + 0x160));
  mobyupdate_helpers::M578_003cb1b8(lVar19);
  if (*(int *)((int)pvVar11 + 0x38) != 0) {
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    *(undefined4 *)((int)pvVar11 + 0x38) = 0;
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar45 = loadVectorLeftIndexed(0xc,0x3cbfc0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar46);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x15c,uVar31);
    *(undefined4 *)((int)pvVar11 + 0x15cU & 0xfffffffc) = uVar16;
  }
  iVar23 = fastfunc::FastDecTimerS32(uVar31 + 0x15c);
  uVar3 = moby->state;
  if (iVar23 == 0) {
    dVar43 = 28.0;
  }
  if (uVar3 == '\x05') {
    uVar25 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
    fVar13 = (moby->pos).z;
    uVar24 = (int)fVar13 >> 0x1f;
    fVar8 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar9 = (moby->pos).w;
    if (((uVar25 & 0x60) != 0) || ((int)((uVar24 >> 1 ^ (uint)fVar13) - uVar24) < 0x40a00000)) {
      *(f32 *)(puVar17 + 0x1e) = (moby->pos).x;
      *(f32 *)((int)puVar17 + 0xf4) = fVar8;
      *(f32 *)((int)puVar17 + 0xfc) = fVar9;
      puVar17[0x14] = 1;
      puVar17[0x12] = 0xffffffffffffffff;
      puVar17[0x15] = 1;
      puVar17[0x16] = 0xffffffffffffffff;
      puVar17[0x17] = 0;
      *(float *)(puVar17 + 0x1f) = fVar4 + 0.5;
      mobyutil::MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x120,&DAT_003cbfc0,1,5,2,4);
      mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
      mobyfunc::DeleteMoby(moby);
      return;
    }
  }
  else if (uVar3 == '\x04') {
    uVar24 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
    if ((uVar24 & 0x60) == 0) {
      fVar8 = (moby->pos).z;
      fVar4 = (moby->pos).z;
      uVar24 = (int)fVar8 >> 0x1f;
      if ((int)((uVar24 >> 1 ^ (uint)fVar8) - uVar24) < 0x40a00000) {
        fVar8 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x1c) = (moby->pos).x;
        fVar9 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0xe4) = fVar8;
        *(f32 *)((int)puVar17 + 0xec) = fVar9;
        puVar17[0x14] = 1;
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        *(float *)(puVar17 + 0x1d) = fVar4 + 0.5;
        mobyutil::MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x130,&DAT_003cbfc0,1,5,2,4);
        mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      if (moby->animationId != '\0') {
        puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar17 + 0x194));
      }
      moby->state = '\x01';
    }
  }
  else if (uVar3 == '\x03') {
    iVar23 = *(int *)((int)pvVar11 + 0x120);
    mobyutil::MB_UpdateNavMoveTurning
              (lVar19,uVar31 + 0xd0,*(int *)((int)pvVar11 + 0x130) + iVar23 * 0x10 + 0x10,
               uVar31 + 0x40);
    moby->unk58 = DAT_0084623c;
    fastfunc::FastDecTimerS16(uVar31 + 0x156);
    piVar12 = *(int **)((int)pvVar11 + 0x130);
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar10 = (moby->pos).z - (float)piVar12[iVar23 * 4 + 6];
    dVar43 = 1.0;
    if (SQRT(fVar10 * fVar10 +
             (fVar5 - (float)piVar12[iVar23 * 4 + 4]) * (fVar5 - (float)piVar12[iVar23 * 4 + 4]) +
             (fVar4 - (float)piVar12[iVar23 * 4 + 5]) * (fVar4 - (float)piVar12[iVar23 * 4 + 5])) <
        1.0) {
      bVar1 = *(short *)((int)pvVar11 + 0x156) == 0;
      if ((!bVar1) ||
         (fVar10 = fVar4 - *(float *)((int)puVar17 + 0x114),
         fVar6 = fVar5 - *(float *)(puVar17 + 0x22), SQRT(fVar6 * fVar6 + fVar10 * fVar10) <= 25.0))
      {
        cVar30 = *(char *)((int)pvVar11 + 0x124);
        iVar23 = *piVar12;
        iVar29 = *(int *)((int)pvVar11 + 0x120) + iVar23 + (int)cVar30;
        iVar29 = iVar29 - (iVar29 / iVar23) * iVar23;
        if ((bVar1) &&
           (fVar10 = *(float *)((int)puVar17 + 0x114) - (float)piVar12[iVar29 * 4 + 5],
           fVar4 = fVar4 - (float)piVar12[iVar29 * 4 + 5],
           fVar6 = *(float *)(puVar17 + 0x22) - (float)piVar12[iVar29 * 4 + 4],
           fVar5 = fVar5 - (float)piVar12[iVar29 * 4 + 4],
           SQRT(fVar6 * fVar6 + fVar10 * fVar10) < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          cVar30 = -cVar30;
          *(char *)((int)pvVar11 + 0x124) = cVar30;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x3c,0x3cbfc0);
          auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x156,uVar31);
          *(undefined2 *)((int)pvVar11 + 0x156) = uVar15;
          iVar23 = *piVar12;
        }
        iVar29 = *(int *)((int)pvVar11 + 0x120) + iVar23 + (int)cVar30;
        *(int *)((int)pvVar11 + 0x120) = iVar29 - (iVar29 / iVar23) * iVar23;
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
      }
    }
    iVar23 = fastfunc::FastDecTimerS16(uVar31 + 0x154);
    if (iVar23 != 0) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = loadVectorLeftIndexed(0x6238,0x840000);
      auVar46 = vectorConvertFromSignedFixedPointWord(auVar45,0);
      auVar45 = loadVectorLeftIndexed(0x48,0x3cbfc0);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar41 = 0.5;
      auVar45 = vectorAddFloatingPoint
                          (auVar46,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar48,auVar45,auVar47);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x154,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x154) = uVar15;
      fVar8 = (moby->pos).y;
      *(f32 *)(puVar17 + 0x18) = (moby->pos).x;
      fVar9 = (moby->pos).w;
      *(f32 *)((int)puVar17 + 0xc4) = fVar8;
      *(f32 *)((int)puVar17 + 0xcc) = fVar9;
      dVar40 = 2.0;
      *(float *)(puVar17 + 0x19) = (moby->pos).z + 2.0;
      sound::sound_MobyPlay_oClass(1,0,moby,0x273);
      dVar39 = 0.8999999761581421;
      dVar44 = 1.100000023841858;
      iVar23 = -2;
      dVar42 = 0.0;
      dVar36 = -1.0;
      do {
        dVar33 = (double)fastfunc::FastIntToDouble(iVar23);
        dVar34 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar44);
        fVar4 = (moby->transform).v1.y;
        fVar5 = (moby->transform).v1.x;
        dVar34 = (double)(float)(dVar33 * dVar34);
        puVar17[0x32] = (longlong)iVar23;
        fVar10 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = (moby->pos).z;
        dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar33 == dVar42) {
          fVar5 = (moby->transform).v1.z;
          fVar4 = (moby->transform).v1.w;
          dVar33 = dVar42;
          dVar35 = dVar42;
        }
        else {
          fVar2 = (float)((double)(float)((double)(longlong)puVar17[0x32] * dVar41) / dVar33);
          dVar33 = (double)(fVar5 * fVar2);
          fVar5 = (moby->transform).v1.z;
          dVar35 = (double)(fVar4 * fVar2);
          fVar4 = (moby->transform).v1.w;
        }
        *(float *)((int)puVar17 + 0xcc) = fVar4;
        *(float *)(puVar17 + 0x18) = (float)(dVar33 + (double)fVar10);
        *(float *)((int)puVar17 + 0xc4) = (float)(dVar35 + (double)fVar6);
        *(float *)(puVar17 + 0x19) = (float)((double)(fVar5 + fVar7) + dVar40);
        dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar36,(float)dVar43);
        fVar4 = (moby->transform).v0.y;
        fVar5 = (moby->transform).v0.x;
        fVar10 = (moby->transform).v1.x;
        fVar6 = (moby->transform).v1.y;
        dVar35 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar35 == dVar42) {
          fVar5 = (moby->transform).v0.z;
          dVar33 = dVar42;
          dVar35 = dVar42;
        }
        else {
          fVar7 = (float)((double)(float)(dVar33 * (double)mobyutil::g_FrameTime) / dVar35);
          dVar33 = (double)(fVar5 * fVar7);
          fVar5 = (moby->transform).v0.z;
          dVar35 = (double)(fVar4 * fVar7);
        }
        dVar37 = (double)SQRT(fVar10 * fVar10 + fVar6 * fVar6);
        if (dVar37 == dVar42) {
          fVar7 = (moby->transform).v1.z;
          fVar10 = (moby->transform).v1.w;
          dVar37 = dVar42;
          dVar38 = dVar42;
        }
        else {
          fVar4 = (float)((double)(float)((double)DAT_00846230 * (double)mobyutil::g_FrameTime) /
                         dVar37);
          fVar7 = (moby->transform).v1.z;
          dVar37 = (double)(fVar10 * fVar4);
          fVar10 = (moby->transform).v1.w;
          dVar38 = (double)(fVar6 * fVar4);
        }
        *(float *)((int)puVar17 + 0xdc) = fVar10;
        *(float *)(puVar17 + 0x1a) = (float)(dVar37 * dVar34 + dVar33);
        *(float *)((int)puVar17 + 0xd4) = (float)(dVar38 * dVar34 + dVar35);
        *(float *)(puVar17 + 0x1b) = (float)((double)fVar7 * dVar34 + (double)fVar5);
        dVar33 = (double)mobyutil::MB_randRangeFloat((float)dVar39,(float)dVar44);
        *(float *)(puVar17 + 0x1b) =
             (float)((double)(DAT_00846234 * mobyutil::g_FrameTime) * dVar33);
        FUN_003eba50(lVar19,uVar18 - 0x150,uVar18 - 0x140);
        iVar23 = iVar23 + 1;
      } while (iVar23 < 3);
    }
  }
  else if (uVar3 == '\x02') {
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      moby->state = '\x03';
      fVar4 = animationSpeed;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = loadVectorLeftIndexed(0x3c,0x3cbfc0);
      auVar45 = auVar45 >> 0x60 & (undefined1  [16])0xffffffff;
      auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x156,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x156) = uVar15;
      if (moby->animationId != '\x02') {
        puVar17[0x32] = (longlong)(int)(fVar4 * 10.5);
        mobyutil::MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar17 + 0x194));
      }
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      moby->unk58 = DAT_0084623c;
      auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar45);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x154,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x154) = uVar15;
    }
  }
  else if (uVar3 == '\x01') {
    fVar4 = *(float *)(puVar17 + 0x22) - (moby->pos).x;
    fVar5 = *(float *)((int)puVar17 + 0x114) - (moby->pos).y;
    fVar6 = ABS(fVar4);
    fVar10 = ABS(fVar5);
    *(float *)(puVar17 + 0x2c) = fVar4;
    *(float *)((int)puVar17 + 0x164) = fVar5;
    *(float *)(puVar17 + 0x2d) = fVar6 - fVar10;
    dVar36 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar17 + 0x2c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar17 + 0x2d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar17 + 0x164) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar17 + 0x2c));
    if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
      fVar4 = fVar10;
    }
    fVar10 = *(float *)(&mobyutil::g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar17 + 0x164));
    if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar4) {
      lVar21 = uVar18 - 0x200;
      lVar28 = uVar18 - 0x94;
      lVar26 = uVar18 - 0xa4;
      lVar32 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar17 + 0x2f) = fVar4;
      *(float *)(puVar17 + 0x2e) = fVar4;
      *(float *)((int)puVar17 + 0x174) = fVar4;
      *(float *)((int)puVar17 + 0x16c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar17 + 0x2e) = *(float *)(puVar17 + 0x2e) * fVar6;
      *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar4;
      *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x16c) = *(float *)((int)lVar21 + 0x15c) * fVar4 * fVar4;
        iVar23 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar28 = lVar28 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar28 = uVar18 - 0xa4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar28;
      do {
        fVar4 = *pfVar27;
        fVar6 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x16c) = *(float *)((int)lVar21 + 0x16c) * fVar4;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
        lVar26 = lVar26 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar21 = 2;
      do {
        iVar23 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar29 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x16c)) +
                          *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar10 + fVar5);
    }
    mobyutil::OrganicDeltAngSpeed
              (dVar36,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar19,&DAT_003cbfc0,
               uVar31 + 0x150);
    fVar4 = (moby->pos).y - *(float *)((int)puVar17 + 0x114);
    fVar5 = (moby->pos).x - *(float *)(puVar17 + 0x22);
    if ((((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar43) &&
        (ABS(*(float *)(puVar17 + 0x23) - (moby->pos).z) < 4.0)) &&
       (moby->state = '\x02', moby->animationId != '\x01')) {
      puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
      mobyutil::MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar17 + 0x194));
    }
  }
  else if (uVar3 == '\0') {
    mobyutil::MB_InitDefaultParams((float *)((int)pvVar11 + 0xd0));
    fVar4 = DAT_0071f418;
    *(float *)((int)pvVar11 + 0x10c) = DAT_0071f418 * 6.2831855;
    *(float *)((int)pvVar11 + 0x110) = fVar4 * 18.849556;
    fVar4 = mobyutil::g_FrameTime;
    *(float *)((int)pvVar11 + 0x114) = mobyutil::g_FrameTime * 6.2831855;
    *(undefined1 *)((int)pvVar11 + 0x28) = 1;
    *(undefined4 *)((int)pvVar11 + 0xdc) = 0x40000000;
    *(undefined1 *)((int)pvVar11 + 0x29) = 0;
    *(undefined4 *)((int)pvVar11 + 0xd8) = 0x40000000;
    *(undefined4 *)((int)pvVar11 + 0x20) = 0x40000000;
    *(undefined1 *)((int)pvVar11 + 0x58) = 8;
    *(undefined1 *)((int)pvVar11 + 0x5a) = 8;
    *(undefined2 *)((int)pvVar11 + 0x24) = 2;
    pSVar14 = Splines[*(int *)((int)pvVar11 + 0x134)];
    *(Spline **)((int)pvVar11 + 0x130) = pSVar14;
    *(float *)((int)pvVar11 + 0xf4) = fVar4 * 5.0;
    (moby->pos).x = pSVar14->points[0].x;
    (moby->pos).y = pSVar14->points[0].y;
    (moby->pos).z = pSVar14->points[0].z;
    fVar4 = moby->scale;
    (moby->pos).w = pSVar14->points[0].w;
    fVar5 = DAT_00846240;
    *(undefined4 *)((int)pvVar11 + 0x120) = 1;
    moby->state = '\x01';
    moby->scale = fVar4 * fVar5;
    if (moby->animationId != '\0') {
      mobyutil::MB_SetAnimation(lVar19,0,0,0);
    }
  }
  if (moby->state < 4) {
    fVar4 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar11 + 0xe8);
    *(float *)((int)pvVar11 + 0xe8) = fVar4;
    dVar44 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar4 - 2.0);
    dVar42 = 0.5;
    dVar43 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar19 + 0x10,0);
    fVar4 = (float)((double)(moby->pos).z - dVar44);
    dVar36 = (double)fVar4;
    (moby->pos).z = fVar4;
    if (dVar43 <= dVar36) {
      if (dVar36 < 5.0) {
        fVar8 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x20) = (moby->pos).x;
        fVar9 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0x104) = fVar8;
        *(f32 *)((int)puVar17 + 0x10c) = fVar9;
        *(float *)(puVar17 + 0x21) = (float)(dVar36 + dVar42);
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        mobyutil::MB_genericExplosion
                  (0,0,dVar44,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x110,1,0xffffffffffffffff,5,2,4
                  );
        mobyutil::MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        mobyfunc::DeleteMoby(moby);
        return;
      }
    }
    else {
      (moby->pos).z = (float)dVar43;
      *(undefined4 *)((int)pvVar11 + 0xe8) = 0;
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar4 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar10 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar4 * fVar4) < 32.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar19);
  }
  return;
}



//==== 003cce70  ns=mobyupdate_helpers  size=0x14
// sig: undefined M580_003cce70(void)
// callers(0): 
// callees(0): 

void mobyupdate_helpers::M580_003cce70(void)

{
  DAT_00846290 = 0x10000;
  return;
}



//==== 003ccea0  ns=mobyupdate_helpers  size=0x2ac
// sig: undefined M580_003ccea0(void)
// callers(1): 003cd150 mobyupdate_helpers::M580_003cd150
// callees(6): 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 00126f50 partupd::SpawnPart_23; 00502730 fastfunc::FastIntToDouble

void mobyupdate_helpers::M580_003ccea0(double param_1,double param_2)

{
  undefined4 uVar1;
  undefined1 uVar4;
  int iVar2;
  int iVar3;
  int in_r8;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 local_b0 [48];
  
  dVar7 = 1.0;
  uVar8 = 0;
  if (0 < in_r8) {
    iVar5 = 0;
    dVar9 = 1.0199999809265137;
    uVar10 = 0x3f647ae140000000;
    dVar12 = (double)(float)(param_1 * 210000.0 +
                            (double)((float)(param_2 - param_1) / (float)(longlong)in_r8));
    dVar11 = 0.10000000149011612;
    do {
      fastfunc::FastIntToDouble(iVar5);
      uVar4 = mobyutil::MB_randRange(0x40,0x70);
      mobyutil::MB_randRange(0x40,0x7f);
      uVar6 = mobyutil::MB_randRangeFloat((float)dVar7,(float)dVar9);
      mobyutil::MB_randRange(0xfffffffffffffffe,2);
      mobyutil::MB_randRangeSigned(uVar8,uVar10);
      mobyutil::MB_randRangeSigned(uVar8,uVar10);
      mobyutil::MB_randRangeFloat((float)((double)DAT_00846424 * dVar11),DAT_00846424);
      iVar2 = partupd::SpawnPart_23((double)DAT_0084642c,dVar7,uVar6,dVar12,local_b0);
      if (iVar2 != 0) {
        iVar3 = mobyutil::MB_randInt(2);
        if (iVar3 != 0) {
          *(undefined1 *)(iVar2 + 3) = 0x44;
        }
        uVar1 = DAT_010c9f80;
        *(undefined4 *)(iVar2 + 0x24) = 2;
        *(short *)(iVar2 + 10) = (short)uVar1;
        *(undefined1 *)(iVar2 + 0x2a) = uVar4;
        *(char *)(iVar2 + 0x2b) = (char)DAT_010c9f80;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < in_r8);
  }
  return;
}



//==== 003cd150  ns=mobyupdate_helpers  size=0x20c
// sig: undefined M580_003cd150(void)
// callers(3): 003cd35c mobyupdate_helpers::M580_003cd35c; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003d0f50 mobyupdate_helpers::M582_003d0f50
// callees(1): 003ccea0 mobyupdate_helpers::M580_003ccea0

void mobyupdate_helpers::M580_003cd150
               (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_60 [16];
  undefined1 local_50 [80];
  
  iVar1 = (int)(param_3 << 4);
  M580_003ccea0((double)(*(float *)(&DAT_0084637c + (int)(param_2 << 4)) * DAT_00846420),
                (double)(*(float *)(&DAT_0084637c + iVar1) * DAT_00846420),param_1,local_60,local_50
                ,param_4,iVar1 + 0x846370,param_4);
  return;
}



//==== 003cd35c  ns=mobyupdate_helpers  size=0xb4
// sig: undefined M580_003cd35c(void)
// callers(0): 
// callees(1): 003cd150 mobyupdate_helpers::M580_003cd150

void mobyupdate_helpers::M580_003cd35c(undefined8 param_1)

{
  M580_003cd150(param_1,0,1,DAT_0084643c);
  M580_003cd150(param_1,2,3,DAT_00846438);
  M580_003cd150(param_1,4,5,DAT_00846440);
  M580_003cd150(param_1,6,7,DAT_00846440);
  M580_003cd150(param_1,8,9,DAT_00846444);
  return;
}



//==== 003cd410  ns=mobyupdate_helpers  size=0xd4
// sig: undefined M580_003cd410(void)
// callers(1): 003ce680 mobyupdate_unsorted::UpdateMoby_580
// callees(1): 000fc620 mobyutil::MB_randInt

MobyInstance * mobyupdate_helpers::M580_003cd410(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    pMVar4 = (MobyInstance *)0x0;
  }
  else {
    pMVar4 = (MobyInstance *)0x0;
    puVar5 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    do {
      uVar2 = *puVar5 & 0x7fff;
      if (((MobyInstance[uVar2].oClass == SANDSHARK_SPAWNER) && (MobyInstance[uVar2].state < 0x7f))
         && ((pMVar4 == (MobyInstance *)0x0 ||
             (uVar3 = mobyutil::MB_randInt(0xff), (uVar3 & 1) != 0)))) {
        pMVar4 = MobyInstance + uVar2;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return pMVar4;
}



//==== 003cd510  ns=mobyupdate_helpers  size=0x448
// sig: undefined M580_003cd510(void)
// callers(1): 003ce680 mobyupdate_unsorted::UpdateMoby_580
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M580_003cd510(undefined8 param_1,undefined8 param_2,uint param_3)

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
  undefined1 local_d0 [32];
  
  if (PartActiveCnt < 0x5dd) {
    if (0x400 < PartActiveCnt) {
      param_3 = ((int)param_3 >> 1) + (uint)((int)param_3 < 0 && (param_3 & 1) != 0);
    }
  }
  else {
    param_3 = ((int)param_3 >> 2) + (uint)((int)param_3 < 0 && (param_3 & 3) != 0);
  }
  iVar4 = 0;
  if (0 < (int)param_3) {
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
      mobyutil::MB_randRangeFloat(DAT_010c9f78,DAT_008462ec);
      mobyutil::MB_randRangeFloat(DAT_010c9f78,DAT_008462ec);
      mobyutil::MB_randRangeFloat(DAT_008462dc,DAT_008462e0);
      mobyutil::MB_randRangeFloat(DAT_008462e4,DAT_008462e8);
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_008462f8,(float)(longlong)DAT_008462fc);
      uVar1 = fastfunc::FastDoubleToInt();
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_00846300,(float)(longlong)DAT_00846304);
      uVar2 = fastfunc::FastDoubleToInt();
      mobyutil::MB_randRangeFloat((float)(longlong)DAT_00846308,(float)(longlong)DAT_0084630c);
      uVar3 = fastfunc::FastDoubleToInt();
      partupd::SpawnPart_2(local_f0,local_e0,local_d0,DAT_00846310,DAT_00846314,uVar1,uVar2,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3);
  }
  return;
}



//==== 003cd980  ns=mobyupdate_helpers  size=0x3c8
// sig: undefined M580_003cd980(void)
// callers(1): 003ce680 mobyupdate_unsorted::UpdateMoby_580
// callees(4): 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 001206e8 partupd::SpawnPart_2; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M580_003cd980(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [32];
  
  if (PartActiveCnt < 0x6a5) {
    mobyutil::MB_randRot();
    dVar5 = 0.125;
    mobyutil::MB_randRangeFloat(0.125,0.0);
    dVar4 = -0.125;
    mobyutil::MB_randRangeFloat(-0.125,(float)dVar5);
    mobyutil::MB_randRangeFloat((float)dVar4,(float)dVar5);
    mobyutil::MB_randRangeFloat(DAT_0084632c,DAT_00846330);
    mobyutil::MB_randRangeFloat(DAT_0084632c,DAT_00846330);
    mobyutil::MB_randRangeFloat(DAT_0084631c,DAT_00846320);
    mobyutil::MB_randRangeFloat(DAT_00846324,DAT_00846328);
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_0084633c,(float)(longlong)DAT_00846340);
    uVar1 = fastfunc::FastDoubleToInt();
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_00846344,(float)(longlong)DAT_00846348);
    uVar2 = fastfunc::FastDoubleToInt();
    mobyutil::MB_randRangeFloat((float)(longlong)DAT_0084634c,(float)(longlong)DAT_00846350);
    uVar3 = fastfunc::FastDoubleToInt();
    partupd::SpawnPart_2(local_a0,local_90,local_80,DAT_00846354,DAT_00846358,uVar1,uVar2,uVar3);
  }
  return;
}



//==== 003cdd50  ns=mobyupdate_helpers  size=0xc4
// sig: undefined M580_003cdd50(void)
// callers(1): 003ce680 mobyupdate_unsorted::UpdateMoby_580
// callees(2): 000fddc0 mobyutil::MB_SetAnimation; 00104e44 mobyutil::PointInsideComplexPoly

void mobyupdate_helpers::M580_003cdd50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = mobyutil::PointInsideComplexPoly
                    ((Vec4 *)(param_1 + 0x10),(Vec4 *)Splines[*(int *)(iVar1 + 0x290)]->points,
                     Splines[*(int *)(iVar1 + 0x290)]->cnt);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0x12;
    if (*(char *)(param_1 + 0x53) != '\0') {
      mobyutil::MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 20.5));
    }
    *(undefined4 *)(iVar1 + 0x298) = 1;
  }
  return;
}



//==== 003cde20  ns=mobyupdate_helpers  size=0xf4
// sig: undefined M580_003cde20(void)
// callers(0): 
// callees(2): 000fcbe8 mobyutil::MB_randRangeFloat; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M580_003cde20(int param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined2 uVar3;
  ushort *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar4 = (ushort *)(&mobyutil::g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar6 = 240.0;
    dVar7 = 300.0;
    do {
      if (MobyInstance[*puVar4 & 0x7fff].oClass == SANDSHARK_0244) {
        pvVar2 = MobyInstance[*puVar4 & 0x7fff].pVar;
        dVar5 = (double)mobyutil::MB_randRangeFloat((float)dVar6,(float)dVar7);
        if ((float)(longlong)(int)*(short *)((int)pvVar2 + 0x25e) <
            (float)(dVar5 * (double)animationSpeed)) {
          uVar3 = fastfunc::FastDoubleToInt();
          *(undefined2 *)((int)pvVar2 + 0x25e) = uVar3;
        }
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}



//==== 003cdf40  ns=mobyupdate_helpers  size=0x6ac
// sig: undefined M580_003cdf40(void)
// callers(1): 003ce680 mobyupdate_unsorted::UpdateMoby_580
// callees(13): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fcbe8 mobyutil::MB_randRangeFloat; 000ffb70 mobyutil::GetGroundZ; 0010675c mobyutil::MB_damage; 00106840 mobyutil::MB_HandleDamage; 00107de8 mobyutil::MB_VecAtan2Angles; 0010ad80 mobyutil::MB_StartKick; 0010c808 mobyutil::MB_UpdateLightsTransition; 0010c9a0 mobyutil::MB_ColorDyingMoby; 00111ba0 mobyutil::MB_getTargetInArea; 004fffb4 fastfunc::FastDecTimerS16; 00502758 fastfunc::FastDoubleToInt

void mobyupdate_helpers::M580_003cdf40(MobyInstance *param_1)

{
  float fVar1;
  ushort uVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  void *pvVar5;
  Spline *pSVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 uVar11;
  ushort *puVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_70 [16];
  int local_60;
  float local_5c;
  float local_58 [2];
  longlong local_50;
  
  pvVar4 = param_1->pVar;
  uVar14 = ZEXT48(pvVar4);
  *(uint *)((int)pvVar4 + 0x280) = (uint)param_1->state;
  if (param_1->state != '\0') {
    if (*(char *)((int)pvVar4 + 0x2e) == '\x02') {
      *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
      if (-1 < *(int *)((int)pvVar4 + 0x288)) {
        *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
             *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + -1;
      }
      if (param_1->group == 0xff) {
        pMVar13 = (MobyInstance *)0x0;
      }
      else {
        pMVar13 = (MobyInstance *)0x0;
        puVar12 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
        do {
          uVar8 = *puVar12 & 0x7fff;
          if (((MobyInstance[uVar8].oClass == SANDSHARK_SPAWNER) &&
              (MobyInstance[uVar8].state < 0x7f)) &&
             ((pMVar13 == (MobyInstance *)0x0 ||
              (uVar9 = mobyutil::MB_randInt(0xff), (uVar9 & 1) != 0)))) {
            pMVar13 = MobyInstance + uVar8;
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (-1 < (short)uVar2);
      }
      *(MobyInstance **)((int)pvVar4 + 0x27c) = pMVar13;
      if (pMVar13 == (MobyInstance *)0x0) {
        mobyfunc::DeleteMoby(param_1);
        return;
      }
      param_1->state = '\x1a';
      (param_1->pos).x = *(f32 *)((int)pvVar4 + 0x220);
      (param_1->pos).y = *(f32 *)((int)pvVar4 + 0x224);
      fVar1 = *(float *)((int)pvVar4 + 0x228);
      (param_1->pos).z = fVar1;
      (param_1->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
      param_1->collision = (ushort *)0x0;
      (param_1->pos).z = fVar1 - 10.0;
    }
    if ((*(int *)((int)pvVar4 + 0x38) != 0) ||
       ((iVar10 = fastfunc::FastDecTimerS16(uVar14 + 0x25c), iVar10 == 0 &&
        (fVar1 = (param_1->pos).y - g_heroPosition.y, fVar7 = (param_1->pos).x - g_heroPosition.x,
        SQRT(fVar7 * fVar7 + fVar1 * fVar1) < 10.0)))) {
      dVar15 = (double)mobyutil::MB_randRangeFloat(180.0,240.0);
      uVar11 = fastfunc::FastDoubleToInt((double)(float)(dVar15 * (double)animationSpeed));
      *(undefined2 *)((int)pvVar4 + 0x25e) = uVar11;
    }
    *(undefined4 *)((int)pvVar4 + 0x38) = 0;
    iVar10 = fastfunc::FastDecTimerS16(uVar14 + 0x25e);
    if (iVar10 == 0) {
      fVar1 = *(float *)((int)pvVar4 + 0x24c) + 5.0;
    }
    else {
      fVar1 = *(float *)((int)pvVar4 + 0x24c);
    }
    *(float *)((int)pvVar4 + 0x250) = fVar1;
    dVar15 = 0.0;
    local_5c = 0.0;
    iVar10 = mobyutil::MB_damage(param_1,0x330000,0);
    mobyutil::MB_HandleDamage(param_1,iVar10,uVar14 + 0x20,0,&local_60,&local_5c,0,4);
    if ((local_60 != 1) && (param_1->state != '\x18')) {
      if (param_1->group != 0xff) {
        puVar12 = (ushort *)(&mobyutil::g_MobyGroups)[(byte)param_1->group];
        dVar17 = 240.0;
        dVar18 = 300.0;
        do {
          if (MobyInstance[*puVar12 & 0x7fff].oClass == SANDSHARK_0244) {
            pvVar5 = MobyInstance[*puVar12 & 0x7fff].pVar;
            dVar16 = (double)mobyutil::MB_randRangeFloat((float)dVar17,(float)dVar18);
            local_50 = (longlong)(int)*(short *)((int)pvVar5 + 0x25e);
            if ((float)local_50 < (float)(dVar16 * (double)animationSpeed)) {
              uVar11 = fastfunc::FastDoubleToInt();
              *(undefined2 *)((int)pvVar5 + 0x25e) = uVar11;
            }
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (-1 < (short)uVar2);
      }
      *(undefined4 *)((int)pvVar4 + 0x29c) = 0;
      fVar1 = (float)((double)*(float *)((int)pvVar4 + 0x20) - (double)local_5c);
      dVar17 = (double)fVar1;
      *(float *)((int)pvVar4 + 0x20) = fVar1;
      if (dVar17 <= dVar15) {
        *(undefined4 *)((int)pvVar4 + 0x140) = 0x200;
        *(float *)((int)pvVar4 + 0x20) = (float)(dVar17 - (double)local_5c);
        *(undefined4 *)((int)pvVar4 + 0x148) = 0x3f000000;
        fVar1 = DAT_0071f418;
        *(float *)((int)pvVar4 + 0x130) = DAT_008462d0 * DAT_0071f418;
        fVar1 = DAT_008462d4 * fVar1;
        *(undefined4 *)((int)pvVar4 + 0x144) = 9;
        *(float *)((int)pvVar4 + 0x134) = fVar1;
        fVar1 = mobyutil::g_FrameTime;
        *(float *)((int)pvVar4 + 0x138) = DAT_008462c8 * mobyutil::g_FrameTime;
        fVar7 = DAT_008462c4;
        *(undefined1 *)((int)pvVar4 + 0x15d) = 0;
        *(float *)((int)pvVar4 + 0x13c) = fVar7 * fVar1;
        *(float *)((int)pvVar4 + 0x16c) = fVar1 * 2.0;
        dVar15 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,local_70,0);
        if ((double)(param_1->pos).z < dVar15) {
          (param_1->pos).z = (float)dVar15;
        }
        if (-1 < *(int *)((int)pvVar4 + 0x288)) {
          *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
               *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + -1;
          *(undefined1 *)((int)pvVar4 + 0x15d) = 0;
        }
        MVar3 = param_1->modeBits;
        *(uint *)((int)pvVar4 + 0x144) = *(uint *)((int)pvVar4 + 0x144) | 0x20;
        param_1->modeBits =
             MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        mobyutil::MB_VecAtan2Angles
                  (*(undefined8 *)(iVar10 + 0x10),*(undefined8 *)(iVar10 + 0x18),local_58,
                   uVar14 + 0x138,uVar14 + 0x13c);
        mobyutil::MB_StartKick((double)local_58[0],param_1,uVar14 + 0x120);
        *(undefined4 *)((int)pvVar4 + 0x148) = 0x3f59999a;
        *(undefined4 *)((int)pvVar4 + 0x170) = 0x40e00000;
        *(undefined4 *)((int)pvVar4 + 0x174) = 0x41600000;
        param_1->state = '\x18';
        param_1->collision = (ushort *)0x0;
        *(undefined1 *)((int)pvVar4 + 0x117) = 0x78;
        mobyutil::MB_UpdateLightsTransition(param_1,uVar14 + 0x110);
      }
    }
    param_1->damage = -1;
    mobyutil::MB_ColorDyingMoby(param_1,uVar14 + 0x110);
    pSVar6 = Splines[*(int *)((int)pvVar4 + 0x290)];
    iVar10 = mobyutil::MB_getTargetInArea
                       ((double)*(float *)((int)pvVar4 + 0x250),param_1,uVar14 + 0x1d0,pSVar6,0,0,
                        pSVar6->points,pSVar6->cnt);
    if ((iVar10 != 2) &&
       ((fVar1 = *(float *)((int)pvVar4 + 0x224) - *(float *)((int)pvVar4 + 0x1d4),
        fVar7 = *(float *)((int)pvVar4 + 0x220) - *(float *)((int)pvVar4 + 0x1d0),
        *(float *)((int)pvVar4 + 0x250) < SQRT(fVar7 * fVar7 + fVar1 * fVar1) ||
        (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x1d8)))))) {
      *(undefined4 *)((int)pvVar4 + 0x214) = 2;
    }
    pMVar13 = g_heroMobyPtr;
    if (*(int *)((int)pvVar4 + 0x210) == 0) {
      *(float *)((int)pvVar4 + 0x1d0) = g_heroPosition.x;
      fVar1 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar4 + 0x210) = pMVar13;
      *(float *)((int)pvVar4 + 0x1d4) = fVar1;
      *(float *)((int)pvVar4 + 0x1d8) = g_heroPosition.z;
      *(float *)((int)pvVar4 + 0x1dc) = g_heroPosition.w;
    }
  }
  return;
}



//==== 003ce680  ns=mobyupdate_unsorted  size=0x2498
// sig: undefined UpdateMoby_580(MobyInstance * moby)
// callers(0): 
// callees(44): 000efb38 mobyfunc::DeleteMoby; 000fc620 mobyutil::MB_randInt; 000fc948 mobyutil::MB_SplineIntersect; 000fcbe8 mobyutil::MB_randRangeFloat; 000fd8d0 mobyutil::MB_SpawnBoltsFromCrate; 000fddc0 mobyutil::MB_SetAnimation; 000fe484 mobyutil::MB_randRange; 000fea60 mobyutil::MB_randSphere; 000ff2e8 mobyutil::OrganicDeltAngSpeed; 000ffb70 mobyutil::GetGroundZ; 00100f8c mobyutil::MB_InitDefaultParams; 00101058 mobyutil::MB_UpdateNavMove; 00105870 mobyutil::DamageSphereAtPos; 00106360 mobyutil::MB_SetZBoundsFromGround; 00109af0 mobyutil::Delt; 0010a2e0 mobyutil::OrganicDeltAng; 0010b030 mobyutil::MB_UpdateKick; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110b70 mobyutil::MB_IsPntInCuboid; 00113e88 mobyutil::MB_MayaFrameTrigger; 00119a18 mobyfunc::DoManipulator; 00121740 partupd::SpawnPart_4; 0015d12c sound::PlayMobySound; 003cd150 mobyupdate_helpers::M580_003cd150; 003cd410 mobyupdate_helpers::M580_003cd410; 003cd510 mobyupdate_helpers::M580_003cd510; 003cd980 mobyupdate_helpers::M580_003cd980; 003cdd50 mobyupdate_helpers::M580_003cdd50; 003cdf40 mobyupdate_helpers::M580_003cdf40; 0048c188 FUN_0048c188; 004fff60 fastfunc::FastDecTimerS32; 00502578 fastfunc::FastWrapRot; 005025e0 fastfunc::FastDiffRots; 005c8318 rand; 005cd098 libc::printf; 005e7f54 FUN_005e7f54; 005e7f98 FUN_005e7f98; 005e8030 FUN_005e8030; 005e8078 mathfunc::cosf; 005e8128 FUN_005e8128
// strings: 00656b44: 'Shark with no path. UID: %d\n' | 00656b64: 'Shark with a path that has no points. UID: %d\n' | 00846430: '@0`X' (raw)

/* Moby 580 */

void mobyupdate_unsorted::UpdateMoby_580(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  MobyClass *pMVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  MobyInstance *pMVar19;
  longlong lVar20;
  uint uVar22;
  int iVar23;
  ulonglong uVar21;
  u8 uVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auStack_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_100 [8];
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_90;
  f32 local_8c;
  float local_88;
  f32 local_84;
  longlong local_80;
  
  lVar20 = (longlong)(int)moby;
  if (DAT_010c9f7c != 0) {
    return;
  }
  *DAT_009271fc = 0x81;
  *DAT_009271f8 = 0;
  pvVar4 = moby->pVar;
  uVar26 = ZEXT48(pvVar4);
  mobyfunc::DoManipulator(0x4000ccccc0000000,moby,0,(Manipulator *)((int)pvVar4 + 0x2a0));
  if ((moby->enabled != '\0') &&
     (dVar27 = (double)FUN_005e8548(lVar20 + 0x10,0x951500), dVar27 < 28.0)) {
    mobyutil::MB_SetZBoundsFromGround(lVar20);
    moby->shadow = '\x16';
  }
  mobyupdate_helpers::M580_003cdf40(lVar20);
  bVar1 = moby->state;
  fVar41 = (moby->pos).z;
  if (bVar1 < 0xe) {
    if (5 < bVar1) {
      if (bVar1 != 0xd) {
        if (bVar1 == 0xc) {
          iVar23 = mobyutil::MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x26c));
          if ((iVar23 == 0) &&
             (iVar23 = mobyutil::MB_IsPntInCuboid
                                 (&g_heroPosition,(longlong)*(int *)((int)pvVar4 + 0x270)),
             iVar23 == 0)) {
            return;
          }
          pMVar19 = MobyInstance;
          iVar23 = *(int *)((int)pvVar4 + 0x28c);
          dVar31 = (double)(MobyInstance[iVar23].pos.z - *(float *)((int)pvVar4 + 0x228));
          dVar27 = (double)mobyutil::MB_randRangeFloat(6.0,10.0);
          dVar33 = (double)(float)(dVar27 * (double)mobyutil::g_FrameTime);
          dVar27 = (double)(float)(dVar33 * 2.0 +
                                  (double)SQRT((float)((double)(float)((double)(DAT_0071f418 * 10.8)
                                                                      * 2.0) * dVar31)));
          dVar31 = (double)(float)(dVar27 / (double)(DAT_0071f418 * 10.8));
          dVar27 = (double)FUN_005e8588(dVar27,uVar26 + 0x220,&pMVar19[iVar23].pos);
          lVar25 = uVar26 + 0x40;
          dVar27 = (double)(float)(dVar27 / dVar31);
          FUN_005e81f0(lVar25,uVar26 + 0x220,&pMVar19[iVar23].pos);
          *(undefined4 *)((int)pvVar4 + 0x48) = 0;
          FUN_005e7f98(dVar27,lVar25,lVar25);
          *(float *)((int)pvVar4 + 0x48) = (float)dVar33;
          (moby->pos).x = pMVar19[iVar23].pos.x;
          pMVar5 = moby->pClass;
          (moby->pos).y = pMVar19[iVar23].pos.y;
          MVar3 = moby->modeBits;
          (moby->pos).z = pMVar19[iVar23].pos.z;
          uVar24 = moby->animationId;
          (moby->pos).w = pMVar19[iVar23].pos.w;
          moby->collision = pMVar5->collision;
          moby->modeBits =
               MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                        HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) |
               CAN_BE_AUTO_TARGETED;
          if (uVar24 != '\v') {
            mobyutil::MB_SetAnimation(lVar20,0xb,0,0);
          }
          moby->state = '\r';
          return;
        }
        if (bVar1 == 9) {
          iVar23 = FUN_0048c188(lVar20,uVar26 + 0x120);
          if (iVar23 == 0) {
            return;
          }
          moby->state = '\x01';
          *(undefined2 *)((int)pvVar4 + 200) = 0;
          return;
        }
        if (bVar1 == 8) {
          uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x120));
          if ((uVar22 & 1) == 0) {
            if (-1 < (int)(moby->pos).z) {
              return;
            }
            mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
            mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
            mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
            mobyfunc::DeleteMoby(moby);
            return;
          }
          moby->state = '\v';
          if (moby->animationId == '\x04') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar20,4,8,(int)(animationSpeed * 3.5));
          return;
        }
        if (bVar1 != 7) {
          if (bVar1 != 6) {
            return;
          }
          uVar28 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
          mobyutil::OrganicDeltAngSpeed
                    (uVar28,0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar20,
                     &DAT_003ce5ec,uVar26 + 0x240);
          if ((moby->updateId == moby->animationId) &&
             (iVar23 = mobyutil::MB_MayaFrameTrigger(13.0,moby), iVar23 != 0)) {
            FUN_005e7f98(0x3fe8000000000000,auStack_100,lVar20 + 0xc0);
            FUN_005e7f54(auStack_100,auStack_100,lVar20 + 0x10);
            local_f8 = local_f8 + 0.5;
            mobyutil::DamageSphereAtPos
                      (0x3fe0000000000000,0x3ff0000000000000,0x3ff0000000000000,lVar20,auStack_100,0
                       ,1);
          }
          if ((((moby->field43_0x70 & 2U) != 0) &&
              (dVar27 = (double)FUN_005e8588(lVar20 + 0x10,uVar26 + 0x1d0), 1.5 < dVar27)) &&
             (moby->state = '\x05', moby->animationId != '\0')) {
            local_80 = (longlong)(int)(animationSpeed * 3.5);
            mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
          }
          dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
          fVar41 = -(DAT_0071f418 * 9.8 - *(float *)((int)pvVar4 + 0x198));
          *(float *)((int)pvVar4 + 0x198) = fVar41;
          fVar41 = (moby->pos).z + fVar41;
          (moby->pos).z = fVar41;
          if (dVar27 <= (double)fVar41) {
            return;
          }
          *(undefined4 *)((int)pvVar4 + 0x198) = 0;
          (moby->pos).z = (float)dVar27;
          return;
        }
LAB_003cfca0:
        if (bVar1 == 0x17) {
          (moby->pos).z = fVar41 + DAT_008462d8;
          uVar22 = mobyutil::MB_randInt(0xff);
          if ((uVar22 & 1) != 0) {
            uVar13._0_4_ = (moby->pos).x;
            uVar13._4_4_ = (moby->pos).y;
            uVar14._0_4_ = (moby->pos).z;
            uVar14._4_4_ = (moby->pos).w;
            mobyupdate_helpers::M580_003cd980(uVar13,uVar14);
          }
        }
        uVar28 = FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x220) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar4 + 0x224) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  (uVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar20);
        dVar27 = (double)mathfunc::cosf((moby->rotation).z);
        dVar31 = 2.0;
        local_f0 = (float)(dVar27 * 2.0);
        dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_ec = (float)(dVar27 * dVar31);
        lVar25 = lVar20 + 0x10;
        local_e8 = 0;
        FUN_005e7f54(&local_f0,&local_f0,lVar25);
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),&local_f0,
                   auStack_e0);
        if (moby->state == '\x17') {
          (moby->pos).z = (moby->pos).z - DAT_008462d8;
        }
        dVar27 = (double)FUN_005e8588(lVar25,uVar26 + 0x220);
        dVar31 = 0.5;
        if (dVar27 < 0.5) {
          *(undefined4 *)((int)pvVar4 + 0x298) = 0;
          if (moby->state == '\a') {
            if (*(int *)((int)pvVar4 + 0x278) < 0) {
              moby->state = '\x12';
              *(float *)((int)pvVar4 + 0x1a4) = mobyutil::g_FrameTime * 1.5;
              if (moby->animationId != '\0') {
                local_80 = (longlong)(int)(animationSpeed * 3.5);
                mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
              }
            }
            else {
              moby->state = '\x03';
              if (moby->animationId != '\x02') {
                local_80 = (longlong)(int)(animationSpeed * 3.5);
                mobyutil::MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
              }
            }
          }
          else {
            moby->state = '\x02';
            *(float *)((int)pvVar4 + 0x1a4) = mobyutil::g_FrameTime * 1.5;
            if (moby->animationId != '\f') {
              local_80 = (longlong)(int)(animationSpeed * 5.5);
              mobyutil::MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 5.5));
            }
          }
        }
        if (*(int *)((int)pvVar4 + 0x298) != 0) {
          FUN_005e7f98((double)(float)((double)mobyutil::g_FrameTime * dVar31),auStack_c0,
                       lVar20 + 0xc0);
          FUN_005e7f54(lVar25,lVar25,auStack_c0);
          return;
        }
        if (*(int *)((int)pvVar4 + 0x214) != 2) {
          FUN_005e81f0(auStack_d0,uVar26 + 0x1d0,uVar26 + 0x220);
          if (-1 < *(int *)((int)pvVar4 + 0x278)) {
            iVar23 = mobyutil::MB_IsPntInCuboid
                               ((Vec4 *)(uVar26 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278));
            if (iVar23 == 0) {
              return;
            }
            moby->state = '\x05';
            *(float *)((int)pvVar4 + 0x1a4) =
                 *(float *)((int)pvVar4 + 0x254) * mobyutil::g_FrameTime;
            return;
          }
          dVar27 = (double)FUN_005e8030(auStack_d0);
          if ((double)*(float *)((int)pvVar4 + 0x24c) <= dVar27) {
            return;
          }
          moby->state = ((byte)((LZCOUNT(7 - (uint)moby->state) << 0x3a) >> 0x3f) & 0xef) + 0x16;
          *(float *)((int)pvVar4 + 0x1a4) = *(float *)((int)pvVar4 + 0x254) * mobyutil::g_FrameTime;
          if (moby->animationId == '\0') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
          return;
        }
        if (*(short *)((int)pvVar4 + 0x25e) == 0) {
          return;
        }
        iVar23 = mobyutil::MB_randInt(0x13);
        if (iVar23 != 0) {
          return;
        }
        moby->state = '\x15';
        sound::PlayMobySound(4,0,moby);
        if (moby->animationId != '\0') {
          mobyutil::MB_SetAnimation(lVar20,0,0,0);
        }
        *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
        return;
      }
LAB_003d04c8:
      dVar27 = (double)fastfunc::FastDiffRots
                                 ((double)(moby->rotation).y,
                                  (double)(mobyutil::g_FrameTime * 12.566371));
      (moby->rotation).y = (float)dVar27;
      FUN_005e7f54(lVar20 + 0x10,lVar20 + 0x10,uVar26 + 0x40);
      *(float *)((int)pvVar4 + 0x48) = -(DAT_0071f418 * 10.8 - *(float *)((int)pvVar4 + 0x48));
      fVar17 = DAT_008462d8;
      fVar41 = (moby->pos).z;
      if (*(float *)((int)pvVar4 + 0x228) - DAT_008462d8 <= fVar41) {
        if (*(float *)((int)pvVar4 + 0x228) + 0.6 <= fVar41) {
          return;
        }
        uVar15._0_4_ = (moby->pos).x;
        uVar15._4_4_ = (moby->pos).y;
        mobyupdate_helpers::M580_003cd510(uVar15,CONCAT44(fVar41,(moby->pos).w),6);
        return;
      }
      moby->collision = moby->pClass->collision;
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      fVar41 = *(float *)((int)pvVar4 + 0x228);
      uVar24 = moby->animationId;
      moby->state = '\x17';
      (moby->rotation).y = 0.0;
      (moby->pos).z = fVar41 - fVar17;
      if (uVar24 == '\f') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 1.5);
      mobyutil::MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 1.5));
      return;
    }
    if (bVar1 != 5) {
      if (bVar1 == 3) {
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          return;
        }
        iVar23 = mobyutil::MB_IsPntInCuboid
                           ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278));
        if (iVar23 == 0) {
          return;
        }
        moby->state = '\x05';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 == 2) {
        (moby->pos).z = fVar41 + DAT_008462d8;
        dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x220) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar4 + 0x224) - (moby->pos).y));
        uVar28 = fastfunc::FastWrapRot((float)dVar27,*(float *)((int)pvVar4 + 0x244));
        mobyutil::OrganicDeltAngSpeed
                  (uVar28,0x3fa99999a0000000,0x3fd3333340000000,0x3fa47ae140000000,lVar20,
                   &DAT_003ce5ec,uVar26 + 0x240);
        dVar33 = (double)(moby->pos).x;
        dVar27 = (double)mathfunc::cosf((moby->rotation).z);
        fVar41 = (moby->rotation).z;
        dVar31 = (double)(moby->pos).y;
        (moby->pos).x = (float)(dVar27 * (double)mobyutil::g_FrameTime + dVar33);
        dVar27 = (double)FUN_005e8128((double)fVar41);
        (moby->pos).y = (float)(dVar27 * (double)mobyutil::g_FrameTime + dVar31);
        iVar23 = fastfunc::FastDecTimerS32(uVar26 + 0x260);
        if (iVar23 != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x20,0x3ce5ec);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x260,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x260U & 0xfffffffc) = uVar7;
          dVar27 = (double)mobyutil::MB_randRangeFloat
                                     (*(float *)((int)pvVar4 + 0x248) * -0.017453292,
                                      *(float *)((int)pvVar4 + 0x248) * 0.017453292);
          *(float *)((int)pvVar4 + 0x244) = (float)dVar27;
        }
        if ((moby->enabled != '\0') && (uVar21 = mobyutil::MB_randInt(0xff), (uVar21 & 1) != 0)) {
          uVar9._0_4_ = (moby->pos).x;
          uVar9._4_4_ = (moby->pos).y;
          uVar10._0_4_ = (moby->pos).z;
          uVar10._4_4_ = (moby->pos).w;
          mobyupdate_helpers::M580_003cd980(uVar9,uVar10);
        }
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          if (*(short *)((int)pvVar4 + 0x25e) == 0) {
            return;
          }
          iVar23 = mobyutil::MB_randInt(0x13);
          if (iVar23 != 0) {
            return;
          }
          moby->state = '\x15';
          sound::PlayMobySound(4,0,moby);
          if (moby->animationId != '\0') {
            mobyutil::MB_SetAnimation(lVar20,0,0,0);
          }
          *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
          return;
        }
        if (-1 < *(int *)((int)pvVar4 + 0x274)) {
          iVar23 = mobyutil::MB_IsPntInCuboid
                             ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x274))
          ;
          if ((iVar23 != 0) && (*(short *)((int)pvVar4 + 0x25e) == 0)) {
            return;
          }
          iVar23 = mobyutil::MB_randInt(9);
          if (iVar23 != 0) {
            return;
          }
          *(undefined4 *)((int)pvVar4 + 0x274) = 0xffffffff;
          return;
        }
        iVar23 = mobyutil::MB_randInt(4);
        if (iVar23 != 0) {
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = loadVectorLeftIndexed(0x248,uVar26);
        auVar38 = loadVectorRightIndexed(600,uVar26);
        auVar39 = loadVectorLeftIndexed(0x28,0x3ce5ec);
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = auVar39 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar39 = loadVectorLeftIndexed(0x284,uVar26);
        auVar40 = loadVectorRightIndexed(0x294,uVar26);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37 | auVar38,
                             auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar36);
        if (*(int *)((int)pvVar4 + 0x284) == 0) {
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x244,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x244U & 0xfffffffc) = uVar7;
          uVar26 = mobyutil::MB_randInt(0x100);
          if ((uVar26 & 1) != 0) {
            *(float *)((int)pvVar4 + 0x244) = -*(float *)((int)pvVar4 + 0x244);
          }
        }
        else {
          auVar37 = vectorConvertFromSignedFixedPointWord(auVar39 | auVar40,0);
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar37,auVar36);
          auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x244,
                             uVar26);
          *(undefined4 *)((int)pvVar4 + 0x244U & 0xfffffffc) = uVar7;
        }
        dVar27 = (double)mobyutil::MB_randRangeFloat(30.0,90.0);
        *(int *)((int)pvVar4 + 0x260) = (int)(animationSpeed * ((float)(longlong)dVar27 + 0.5));
        *(float *)((int)pvVar4 + 0x1a4) = mobyutil::g_FrameTime * 4.0;
        moby->state = '\x11';
        if (moby->animationId == '\f') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 == 1) {
        FUN_005e81f0(auStack_190,&g_heroPosition,lVar20 + 0x10);
        moby->state = '\x12';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (bVar1 != 0) {
        return;
      }
      if (*(int *)((int)pvVar4 + 0x290) == -1) {
        libc::printf("Shark with no path. UID: %d\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar4 + 0x290)]->cnt == 0) {
        libc::printf("Shark with a path that has no points. UID: %d\n",moby->uid);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      if (-1 < *(int *)((int)pvVar4 + 0x288)) {
        *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) =
             *(int *)((int)MobyInstance[*(int *)((int)pvVar4 + 0x288)].pVar + 0x14c) + 1;
      }
      *(f32 *)((int)pvVar4 + 0x220) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x224) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x228) = (moby->pos).z;
      *(f32 *)((int)pvVar4 + 0x22c) = (moby->pos).w;
      *(f32 *)((int)pvVar4 + 0x230) = (moby->pos).x;
      *(f32 *)((int)pvVar4 + 0x234) = (moby->pos).y;
      *(f32 *)((int)pvVar4 + 0x238) = (moby->pos).z;
      fVar2 = (moby->pos).w;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x3f800000;
      *(f32 *)((int)pvVar4 + 0x23c) = fVar2;
      *(undefined2 *)((int)pvVar4 + 0x24) = 1;
      uVar7 = DAT_008462c0;
      *(undefined1 *)((int)pvVar4 + 0x5c) = 1;
      *(char *)((int)pvVar4 + 0x58) = (char)uVar7;
      *(undefined1 *)((int)pvVar4 + 0x2e) = 1;
      *(undefined1 *)((int)pvVar4 + 0x29) = 1;
      *(undefined2 *)((int)pvVar4 + 0x25e) = 0;
      mobyutil::MB_InitDefaultParams((float *)((int)pvVar4 + 0x180));
      *(undefined4 *)((int)pvVar4 + 0x18c) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0x188) = 0x40000000;
      *(undefined4 *)((int)pvVar4 + 0x180) = 0x200;
      *(undefined4 *)((int)pvVar4 + 0x184) = 0x3f000000;
      *(float *)((int)pvVar4 + 0x1a4) = *(float *)((int)pvVar4 + 0x254) * mobyutil::g_FrameTime;
      uVar22 = rand();
      if ((uVar22 & 1) != 0) {
        moby->modeBits = moby->modeBits | MIRROR;
      }
      *(undefined **)((int)pvVar4 + 0xd0) = &DAT_00846360;
      if (*(int *)((int)pvVar4 + 0x26c) < 0) {
        if (-1 < *(int *)((int)pvVar4 + 0x278)) {
          *(undefined4 *)((int)pvVar4 + 0x18c) = 0x3e4ccccd;
          moby->state = '\x03';
          if (moby->animationId == '\x02') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 3.5);
          mobyutil::MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
          return;
        }
        if (-1 < *(int *)((int)pvVar4 + 600)) {
          moby->collision = (ushort *)0x0;
          moby->state = '\x1d';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          return;
        }
        moby->state = '\x01';
        if (moby->animationId == '\x02') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,2,0,(int)(animationSpeed * 3.5));
        return;
      }
      if (*(int *)((int)pvVar4 + 0x28c) == -1) {
        mobyfunc::DeleteMoby(moby);
        return;
      }
      fVar41 = (moby->pos).z;
      uVar24 = moby->animationId;
      moby->collision = (ushort *)0x0;
      moby->state = '\f';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED) | DISABLED;
      (moby->pos).z = fVar41 + 10.0;
      if (uVar24 == '\0') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 3.5);
      mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
      return;
    }
  }
  else {
    if (0x17 < bVar1) {
      if (bVar1 == 0x1d) {
        if (MobyInstance[*(int *)((int)pvVar4 + 600)].state < 5) {
          return;
        }
        if (g_heroState == MOVEMENT_LOCKED) {
          return;
        }
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        moby->collision = moby->pClass->collision;
        *(undefined4 *)((int)pvVar4 + 600) = 0xffffffff;
        auVar35 = loadVectorLeftIndexed(0x10,0x3ce5ec);
        auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar6 = storeVectorElementHalfWordIndexed(auVar35,0x25c,uVar26);
        *(undefined2 *)((int)pvVar4 + 0x25c) = uVar6;
        moby->state = '\0';
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        return;
      }
      if (bVar1 != 0x1b) {
        if (bVar1 == 0x1a) {
          iVar23 = mobyupdate_helpers::M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            return;
          }
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (bVar1 == 0x19) {
          if (7 < (byte)moby->alpha) {
            moby->alpha = moby->alpha - 8;
            return;
          }
          iVar23 = mobyupdate_helpers::M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
            mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
            mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
            moby->alpha = -0x80;
            moby->state = '\x1a';
            (moby->pos).x = *(f32 *)((int)pvVar4 + 0x220);
            (moby->pos).y = *(f32 *)((int)pvVar4 + 0x224);
            fVar41 = *(float *)((int)pvVar4 + 0x228);
            (moby->pos).z = fVar41;
            (moby->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
            moby->collision = (ushort *)0x0;
            (moby->pos).z = fVar41 - 10.0;
            return;
          }
          mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
          mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
          mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
          mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
          mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (bVar1 != 0x18) {
          return;
        }
        uVar22 = mobyutil::MB_UpdateKick(moby,(KickVars *)((int)pvVar4 + 0x120));
        if (((uVar22 & 1) != 0) && (*(int *)((int)pvVar4 + 0x29c) == 0)) {
          *(undefined4 *)((int)pvVar4 + 0x29c) = 1;
          uVar28._0_4_ = (moby->pos).x;
          uVar28._4_4_ = (moby->pos).y;
          uVar16._0_4_ = (moby->pos).z;
          uVar16._4_4_ = (moby->pos).w;
          mobyupdate_helpers::M580_003cd510(uVar28,uVar16,0x1b);
        }
        if ((uVar22 & 0x140) != 0) {
          local_90 = (moby->pos).x;
          local_8c = (moby->pos).y;
          local_84 = (moby->pos).w;
          uVar28 = 0x3fd54fdf40000000;
          local_88 = (moby->pos).z + 0.333;
          mobyutil::MB_SpawnBoltsFromCrate(lVar20,0,0xffffffffffffffff);
          mobyutil::MB_SpawnExplosionSparks2(uVar28,0,lVar20,&local_90);
          iVar23 = mobyupdate_helpers::M580_003cd410(lVar20);
          *(int *)((int)pvVar4 + 0x27c) = iVar23;
          if (iVar23 != 0) {
            mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
            mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
            mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
            mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
            moby->state = '\x1a';
            moby->unk58 = 0.0;
            (moby->pos).x = *(f32 *)((int)pvVar4 + 0x220);
            (moby->pos).y = *(f32 *)((int)pvVar4 + 0x224);
            fVar41 = *(float *)((int)pvVar4 + 0x228);
            (moby->pos).z = fVar41;
            (moby->pos).w = *(f32 *)((int)pvVar4 + 0x22c);
            moby->collision = (ushort *)0x0;
            moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            (moby->pos).z = fVar41 - 10.0;
            return;
          }
          mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
          mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
          mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
          mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
          mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
          mobyfunc::DeleteMoby(moby);
          return;
        }
        if (-1 < (int)(moby->pos).z) {
          return;
        }
        mobyupdate_helpers::M580_003cd150(lVar20,0,1,DAT_0084643c);
        mobyupdate_helpers::M580_003cd150(lVar20,2,3,DAT_00846438);
        mobyupdate_helpers::M580_003cd150(lVar20,4,5,DAT_00846440);
        mobyupdate_helpers::M580_003cd150(lVar20,6,7,DAT_00846440);
        mobyupdate_helpers::M580_003cd150(lVar20,8,9,DAT_00846444);
        mobyfunc::DeleteMoby(moby);
        return;
      }
      mobyutil::MB_randSphere(0,0x3fc99999a0000000,&local_a0);
      FUN_005e7f54(auStack_b0,&local_a0,lVar20 + 0x10);
      uVar18 = DAT_00846434;
      uVar7 = DAT_00846430;
      fVar41 = mobyutil::g_FrameTime * 5.0;
      local_a0 = local_a0 * fVar41;
      local_9c = local_9c * fVar41;
      local_98 = local_98 * fVar41;
      iVar23 = mobyutil::MB_randRange(0x14,0x28);
      iVar23 = (int)(animationSpeed * ((float)(longlong)iVar23 + 0.5));
      local_80 = (longlong)iVar23;
      uVar28 = mobyutil::MB_randRange(0x78,0x96);
      partupd::SpawnPart_4(lVar20 + 0x10,&local_a0,uVar7,uVar18,iVar23,100,uVar28,0);
      goto LAB_003d04c8;
    }
    if (bVar1 < 0x11) {
      if (bVar1 < 0xf) {
        dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
        mobyutil::OrganicDeltAngSpeed
                  ((double)(float)(dVar27 + (double)*(float *)((int)pvVar4 + 0x244)),
                   0x3fa99999a0000000,0x3fd3333340000000,0x3fc99999a0000000,lVar20);
        mathfunc::cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        lVar25 = lVar20 + 0x10;
        FUN_005e7f54(local_180,local_180,lVar25);
        mobyutil::MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),local_180,
                   auStack_160);
        mobyupdate_helpers::M580_003cdd50(lVar20);
        iVar23 = mobyutil::MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar4 + 0x290),lVar25,local_170,auStack_150);
        bVar8 = false;
        if (iVar23 != 0) {
          dVar27 = (double)FUN_005e8548(lVar25,auStack_150);
          bVar8 = false;
          if (dVar27 < (double)*(float *)((int)pvVar4 + 0x294)) {
            bVar8 = true;
          }
        }
        if (*(short *)((int)pvVar4 + 0x25e) == 0) {
          moby->state = '\x12';
          return;
        }
        if (bVar8) {
          moby->state = '\x0f';
          if (moby->animationId == '\x05') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar20,5,0,(int)(animationSpeed * 10.5));
          return;
        }
        dVar27 = (double)FUN_005e8588(lVar25,local_170);
        if (dVar27 < 1.5) {
          moby->state = '\x06';
          if (moby->animationId == '\x01') {
            return;
          }
          local_80 = (longlong)(int)(animationSpeed * 10.5);
          mobyutil::MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 10.5));
          return;
        }
        if (*(int *)((int)pvVar4 + 0x214) == 2) {
          return;
        }
        moby->state = '\x05';
        if (moby->animationId == '\0') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 15.5);
        mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 15.5));
        return;
      }
      if (0xf < bVar1) {
        return;
      }
      dVar27 = (double)FUN_005e8338((double)(*(float *)((int)pvVar4 + 0x1d0) - (moby->pos).x),
                                    (double)(*(float *)((int)pvVar4 + 0x1d4) - (moby->pos).y));
      fVar41 = mobyutil::OrganicDeltAng
                         ((float)dVar27,DAT_0071f418 * 6.2831855,DAT_0071f418 * 6.2831855,
                          mobyutil::g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar4 + 0x240));
      if (*(short *)((int)pvVar4 + 0x25e) == 0) {
        moby->state = '\x12';
        return;
      }
      dVar27 = (double)FUN_005e8588((double)fVar41,lVar20 + 0x10,uVar26 + 0x1d0);
      if (dVar27 < 1.5) {
        moby->state = '\x06';
        if (moby->animationId == '\x01') {
          return;
        }
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        mobyutil::MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 10.5));
        return;
      }
      if (*(int *)((int)pvVar4 + 0x214) == 2) {
        return;
      }
      moby->state = '\x05';
      if (moby->animationId == '\0') {
        return;
      }
      local_80 = (longlong)(int)(animationSpeed * 15.5);
      mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 15.5));
      return;
    }
    if (bVar1 < 0x16) {
      if (0x12 < bVar1) {
        (moby->pos).z = fVar41 + DAT_008462d8;
        dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
        dVar31 = 4.0;
        dVar33 = (double)(moby->pos).x;
        dVar30 = (double)(moby->pos).y;
        dVar32 = (double)(moby->pos).w;
        fVar41 = mobyutil::Delt((float)((double)DAT_008462d8 + dVar27),mobyutil::g_FrameTime * 4.0,
                                &(moby->pos).z);
        if (fVar41 == 0.0) {
          if (moby->state == '\x13') {
            moby->state = '\x05';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else if (moby->state == '\x14') {
            moby->state = '\a';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)(animationSpeed * 3.5);
              mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
            }
          }
          else {
            dVar34 = 3.5;
            dVar29 = (double)mobyutil::MB_randRangeFloat(2.0,3.5);
            *(float *)((int)pvVar4 + 0x294) = (float)dVar29;
            *(float *)((int)pvVar4 + 0x1a4) = (float)((double)mobyutil::g_FrameTime * dVar31);
            moby->state = '\x0e';
            if (moby->animationId != '\0') {
              local_80 = (longlong)(int)((double)animationSpeed * dVar34);
              mobyutil::MB_SetAnimation(lVar20,0,0,(int)((double)animationSpeed * dVar34));
            }
          }
        }
        (moby->pos).z = (moby->pos).z - DAT_008462d8;
        mobyupdate_helpers::M580_003cd510
                  (CONCAT44((float)dVar33,(float)dVar30),CONCAT44((float)dVar27,(float)dVar32),6);
        return;
      }
      (moby->pos).z = fVar41 + DAT_008462d8;
      dVar27 = (double)mobyutil::GetGroundZ(0x3fe0000000000000,lVar20 + 0x10,0);
      dVar31 = (double)(moby->pos).x;
      dVar33 = (double)(moby->pos).y;
      dVar30 = (double)(moby->pos).w;
      if (dVar27 - (double)*(float *)((int)pvVar4 + 0x228) < 0.0) {
        dVar27 = (double)*(float *)((int)pvVar4 + 0x228);
      }
      mobyutil::Delt((float)dVar27,mobyutil::g_FrameTime * 4.0,&(moby->pos).z);
      dVar32 = (double)(moby->pos).z;
      if (dVar27 == dVar32) {
        if (moby->animationId != '\f') {
          local_80 = (longlong)(int)(animationSpeed * 5.5);
          mobyutil::MB_SetAnimation(lVar20,0xc,0,(int)(animationSpeed * 5.5));
          dVar32 = (double)(moby->pos).z;
        }
        moby->state = (char)((LZCOUNT(0x11 - (uint)moby->state) << 0x3a) >> 0x3f) + '\x17';
      }
      (moby->pos).z = (float)(dVar32 - (double)DAT_008462d8);
      local_80 = (longlong)(int)(animationSpeed * 10.5);
      if (worldUpdateTime <= (int)(animationSpeed * 10.5)) {
        return;
      }
      mobyupdate_helpers::M580_003cd510
                (CONCAT44((float)dVar31,(float)dVar33),CONCAT44((float)dVar27,(float)dVar30),6);
      return;
    }
    if (0x16 < bVar1) goto LAB_003cfca0;
  }
  if (bVar1 == 0x16) {
    (moby->pos).z = fVar41 + DAT_008462d8;
    uVar22 = mobyutil::MB_randInt(0xff);
    if ((uVar22 & 1) != 0) {
      uVar11._0_4_ = (moby->pos).x;
      uVar11._4_4_ = (moby->pos).y;
      uVar12._0_4_ = (moby->pos).z;
      uVar12._4_4_ = (moby->pos).w;
      mobyupdate_helpers::M580_003cd980(uVar11,uVar12);
    }
  }
  local_110 = *(float *)((int)pvVar4 + 0x1d0);
  local_10c = *(float *)((int)pvVar4 + 0x1d4);
  local_108 = *(undefined4 *)((int)pvVar4 + 0x1d8);
  local_104 = *(undefined4 *)((int)pvVar4 + 0x1dc);
  dVar27 = (double)FUN_005e8338((double)(local_110 - (moby->pos).x),
                                (double)(local_10c - (moby->pos).y));
  mobyutil::OrganicDeltAngSpeed
            ((double)(float)(dVar27 + (double)*(float *)((int)pvVar4 + 0x244)),0x3fa99999a0000000,
             0x3fd3333340000000,0x3fc99999a0000000,lVar20);
  dVar27 = (double)mathfunc::cosf((moby->rotation).z);
  dVar31 = 2.0;
  local_140 = (float)(dVar27 * 2.0);
  dVar27 = (double)FUN_005e8128((double)(moby->rotation).z);
  local_13c = (float)(dVar27 * dVar31);
  lVar25 = lVar20 + 0x10;
  local_138 = 0;
  FUN_005e7f54(&local_140,&local_140,lVar25);
  mobyutil::MB_UpdateNavMove
            (0x3ff0000000000000,moby,(MobyInstance *)((int)pvVar4 + 0x180),&local_140,auStack_130);
  mobyupdate_helpers::M580_003cdd50(lVar20);
  if (moby->state == '\x16') {
    (moby->pos).z = (moby->pos).z - DAT_008462d8;
  }
  if (*(int *)((int)pvVar4 + 0x214) == 2) {
    uVar24 = '\a';
    if (*(int *)((int)pvVar4 + 0x278) < 0) {
      uVar24 = ((byte)((LZCOUNT(-(uint)*(ushort *)((int)pvVar4 + 0x25e)) << 0x3a) >> 0x3f) & 4) +
               0xe;
    }
    moby->state = uVar24;
  }
  else if ((*(int *)((int)pvVar4 + 0x278) < 0) ||
          (iVar23 = mobyutil::MB_IsPntInCuboid
                              ((Vec4 *)((int)pvVar4 + 0x1d0),(longlong)*(int *)((int)pvVar4 + 0x278)
                              ), iVar23 != 0)) {
    FUN_005e81f0(auStack_120,uVar26 + 0x1d0,uVar26 + 0x220);
    dVar27 = (double)FUN_005e8588(lVar25,&local_110);
    if ((12.0 <= dVar27) || (moby->state != '\x16')) {
      dVar27 = (double)FUN_005e8588(lVar25,&local_110);
      if (((dVar27 < 1.5) && (moby->state == '\x05')) &&
         (moby->state = '\x06', moby->animationId != '\x01')) {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,1,0,(int)(animationSpeed * 3.5));
      }
    }
    else {
      moby->state = '\x13';
      sound::PlayMobySound(4,0,moby);
      if (moby->animationId != '\0') {
        local_80 = (longlong)(int)(animationSpeed * 3.5);
        mobyutil::MB_SetAnimation(lVar20,0,0,(int)(animationSpeed * 3.5));
      }
    }
  }
  else {
    moby->state = '\a';
  }
  return;
}



